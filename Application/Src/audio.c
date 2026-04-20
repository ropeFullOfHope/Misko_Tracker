#include "audio.h"
#include "stm32g4xx_ll_spi.h"
#include "stm32g4xx_ll_dma.h"
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "data.h"
#include "ff.h"
#include "LED.h"

#define INPUT_BUFFER_SIZE  (512 * 4)
#define OUTPUT_BUFFER_SIZE (INPUT_BUFFER_SIZE * 2)
#define DATA_OFFSET 0x2C
#define SECONDS_PER_MINUTE 60

static struct {
    bool is_playing;
    uint32_t noise;
    uint32_t chart_index;
    uint32_t chain_index;
    uint32_t phrase_index;
    uint32_t row_sample_index;
    chain_id_t current_chain;
    phrase_id_t current_phrase;
    note_t current_note;
    volume_t current_volume;
    instrument_id_t current_instrument_id;
    union {
        struct {
            float phase;
        } simple_wave;
        struct {
            struct {
                uint32_t whole;
                float fraction;
            } phase, phase_advance;
            int16_t buffer[INPUT_BUFFER_SIZE];
            uint32_t written;
        } sample;
    };
    FIL f_sample;
} channel_data[CHANNEL_COUNT];

static void audio_fill_buffer(int16_t *buffer, uint32_t size);
static int16_t audio_get_next_sample(uint32_t channel);
static void audio_led_update(void);

static int16_t audio_buffer[2][OUTPUT_BUFFER_SIZE / 2];
static uint32_t samples_per_row;

void audio_start(void)
{
    tempo_t tempo = project_data.project_settings.tempo;

    // Calculate samples per row.
    samples_per_row = (SECONDS_PER_MINUTE * OUTPUT_SAMPLE_RATE) / (ROWS_PER_BEAT * tempo);

    // Initialize channel data.
    for (uint32_t channel = 0; channel < CHANNEL_COUNT; channel++) {
        channel_data[channel].noise = 0;

        channel_data[channel].chart_index = 0;
        channel_data[channel].chain_index = 0;
        channel_data[channel].phrase_index = 0;
        channel_data[channel].row_sample_index = 0;

        channel_data[channel].current_chain = project_data.song.chain[channel][0] - 1;

        if (channel_data[channel].current_chain == (chain_id_t) -1) {
            channel_data[channel].is_playing = false;
            continue;
        }

        channel_data[channel].current_phrase = project_data.chain[channel_data[channel].current_chain].phrase[0] - 1;

        if (channel_data[channel].current_phrase == (phrase_id_t) -1) {
            channel_data[channel].is_playing = false;
            continue;
        }

        channel_data[channel].current_note          = project_data.phrase[channel_data[channel].current_phrase].note[0];
        channel_data[channel].current_volume        = project_data.phrase[channel_data[channel].current_phrase].volume[0];
        channel_data[channel].current_instrument_id = project_data.phrase[channel_data[channel].current_phrase].instrument[0] - 1;

        if (channel_data[channel].current_instrument_id != (phrase_id_t) -1
            && project_data.instrument[channel_data[channel].current_instrument_id].instrument_type == INSTRUMENT_TYPE_SAMPLE) {
            f_close(&channel_data[channel].f_sample);
            char file_name[] = "0:/samples/00.wav";
            snprintf(file_name, sizeof(file_name), "0:/samples/%02X.wav", project_data.instrument[channel_data[channel].current_instrument_id].sample.sample_id);
            f_open(&channel_data[channel].f_sample, file_name, FA_READ | FA_OPEN_EXISTING);
            f_lseek(&channel_data[channel].f_sample, DATA_OFFSET);

            UINT bytes_read;
            f_read(&channel_data[channel].f_sample, channel_data[channel].sample.buffer, INPUT_BUFFER_SIZE * 2, &bytes_read);
            channel_data[channel].sample.written = bytes_read / 2;
            channel_data[channel].sample.phase.whole = 0;
            channel_data[channel].sample.phase.fraction = 0.0f;

            float note_ratio = NOTE_METADATA[channel_data[channel].current_note].frequency / NOTE_METADATA[0x31].frequency;
            channel_data[channel].sample.phase_advance.whole = (uint32_t)floorf(note_ratio);
            channel_data[channel].sample.phase_advance.fraction = note_ratio - (float)channel_data[channel].sample.phase_advance.whole;
        }

        channel_data[channel].is_playing = true;
    }

    // Fill the entire audio buffer.
    audio_fill_buffer(audio_buffer[0], OUTPUT_BUFFER_SIZE);

    // Start DMA transfer.
    //LL_DMA_EnableIT_HT(DMA2, LL_DMA_CHANNEL_1);
    //LL_DMA_EnableIT_TC(DMA2, LL_DMA_CHANNEL_1);
    LL_DMA_SetMemoryAddress(DMA2, LL_DMA_CHANNEL_1, (uint32_t)audio_buffer);
    LL_DMA_SetDataLength(DMA2, LL_DMA_CHANNEL_1, OUTPUT_BUFFER_SIZE);
    LL_DMA_EnableChannel(DMA2, LL_DMA_CHANNEL_1);
    LL_I2S_EnableDMAReq_TX(SPI3);
    LL_I2S_Enable(SPI3);

    audio_led_update();
}

void audio_schedule_stop(void)
{
    for (uint32_t channel = 0; channel < CHANNEL_COUNT; channel++)
        channel_data[channel].is_playing = false;
}

void audio_stop(void)
{
    // Stop DMA transfer.
    LL_I2S_DisableDMAReq_TX(SPI3);
    LL_DMA_DisableChannel(DMA2, LL_DMA_CHANNEL_1);
    LL_I2S_Disable(SPI3);

    for (uint32_t channel = 0; channel < CHANNEL_COUNT; channel++) {
        channel_data[channel].is_playing = false;
        f_close(&channel_data[channel].f_sample);
    }

    audio_led_update();
}

void audio_half_callback(void)
{
    if (audio_is_playing() == false) {
        audio_stop();
        return;
    }
    audio_fill_buffer(audio_buffer[0], OUTPUT_BUFFER_SIZE / 2);
    audio_led_update();
}

void audio_full_callback(void)
{
    if (audio_is_playing() == false) {
        audio_stop();
        return;
    }
    audio_fill_buffer(audio_buffer[1], OUTPUT_BUFFER_SIZE / 2);
    audio_led_update();
}

bool audio_is_playing(void)
{
    for (uint32_t channel = 0; channel < CHANNEL_COUNT; channel++) {
        if (channel_data[channel].is_playing == true)
            return true;
    }
    return false;
}

static void audio_fill_buffer(int16_t *buffer, uint32_t size)
{
    for (uint32_t sample = 0; sample < size; sample += 2) {
        int32_t mixed_sample = 0;
        for (uint32_t channel = 0; channel < CHANNEL_COUNT; channel++)
            mixed_sample += audio_get_next_sample(channel);
        buffer[sample + 0] = (int16_t) mixed_sample;
        buffer[sample + 1] = (int16_t) mixed_sample;
    }
}

static int16_t audio_get_next_sample(uint32_t channel) {
    // Return 0 (silence) if the channel isn't playing.
    if (channel_data[channel].is_playing == false)
        return 0;

    // Sample calculation.
    int16_t sample = 0;
    if (channel_data[channel].current_instrument_id != (instrument_id_t) -1) {
        switch (project_data.instrument[channel_data[channel].current_instrument_id].instrument_type) {
            case INSTRUMENT_TYPE_BASIC_WAVE: {
                switch (project_data.instrument[channel_data[channel].current_instrument_id].basic_wave.wave) {
                    case BASIC_WAVE_SQUARE:
                        sample = (int16_t)roundf((channel_data[channel].simple_wave.phase < (float)project_data.instrument[channel_data[channel].current_instrument_id].basic_wave.pwm * (1.0f / 255.0f) ? 1.0f : -1.0f)
                                                 * 32767.0f
                                                 * (channel_data[channel].current_volume - 1) * (1.0f / 127.0f)
                                                 * project_data.instrument[channel_data[channel].current_instrument_id].volume * (1.0f / 127.0f));
                        break;
                    case BASIC_WAVE_TRIANGLE:
                        sample = (int16_t)roundf((4.0f * fabsf(channel_data[channel].simple_wave.phase - 0.5f) - 1.0f)
                                                 * 32767.0f
                                                 * (channel_data[channel].current_volume - 1) * (1.0f / 127.0f)
                                                 * project_data.instrument[channel_data[channel].current_instrument_id].volume * (1.0f / 127.0f));
                        break;
                    case BASIC_WAVE_SAWTOOTH:
                        sample = (int16_t)roundf(2.0f * (channel_data[channel].simple_wave.phase - 0.5f)
                                                 * 32767.0f
                                                 * (channel_data[channel].current_volume - 1) * (1.0f / 127.0f)
                                                 * project_data.instrument[channel_data[channel].current_instrument_id].volume * (1.0f / 127.0f));
                        break;
                    case BASIC_WAVE_SINE:
                        sample = (int16_t)roundf(sinf(channel_data[channel].simple_wave.phase)
                                                 * 32767.0f
                                                 * (channel_data[channel].current_volume - 1) * (1.0f / 127.0f)
                                                 * project_data.instrument[channel_data[channel].current_instrument_id].volume * (1.0f / 127.0f));
                        break;
                    case BASIC_WAVE_NOISE:
                        srand(channel_data[channel].noise + channel * 536870912);
                        sample = (int16_t)roundf((float)(rand() % 65535 - 32767)
                                                 * 32767.0f
                                                 * (channel_data[channel].current_volume - 1) * (1.0f / 127.0f)
                                                 * project_data.instrument[channel_data[channel].current_instrument_id].volume * (1.0f / 127.0f));
                        break;
                    default:
                        break;
                }
                channel_data[channel].simple_wave.phase += NOTE_METADATA[channel_data[channel].current_note].frequency * (1.0f / (float) OUTPUT_SAMPLE_RATE);
                if (channel_data[channel].simple_wave.phase >= 1.0f) {
                    channel_data[channel].simple_wave.phase -= 1.0f;
                    channel_data[channel].noise += 1;
                }
                break;
            }

            case INSTRUMENT_TYPE_SAMPLE: {
                if (channel_data[channel].sample.written <= channel_data[channel].sample.phase.whole) {
                    sample = 0;
                    break;
                }

                float interpolation[2];
                interpolation[0] = (float)channel_data[channel].sample.buffer[channel_data[channel].sample.phase.whole % INPUT_BUFFER_SIZE];
                interpolation[1] = (float)channel_data[channel].sample.buffer[(channel_data[channel].sample.phase.whole + 1) % INPUT_BUFFER_SIZE];

                sample = (int16_t)roundf((interpolation[0] + (interpolation[1] - interpolation[0]) * channel_data[channel].sample.phase.fraction)
                                         * (channel_data[channel].current_volume - 1) * (1.0f / 127.0f)
                                         * project_data.instrument[channel_data[channel].current_instrument_id].volume * (1.0f / 127.0f));

                channel_data[channel].sample.phase.whole += channel_data[channel].sample.phase_advance.whole;
                channel_data[channel].sample.phase.fraction += channel_data[channel].sample.phase_advance.fraction;
                if (channel_data[channel].sample.phase.fraction >= 1.0f) {
                    channel_data[channel].sample.phase.fraction -= 1.0f;
                    channel_data[channel].sample.phase.whole += 1;
                }

                if (channel_data[channel].sample.written - channel_data[channel].sample.phase.whole <= INPUT_BUFFER_SIZE / 2) {
                    UINT bytes_read;
                    if (channel_data[channel].sample.written % INPUT_BUFFER_SIZE == 0)
                        f_read(&channel_data[channel].f_sample, &channel_data[channel].sample.buffer[0], INPUT_BUFFER_SIZE, &bytes_read);
                    else
                        f_read(&channel_data[channel].f_sample, &channel_data[channel].sample.buffer[INPUT_BUFFER_SIZE / 2], INPUT_BUFFER_SIZE, &bytes_read);
                    channel_data[channel].sample.written += bytes_read / 2;
                }
                break;
            }

            default:
                break;
        }
    }

    /* Increment sample index and increment phrase, chain and chart index if needed */
    channel_data[channel].row_sample_index += 1;

    if (channel_data[channel].row_sample_index >= samples_per_row) {
        channel_data[channel].row_sample_index = 0;
        channel_data[channel].phrase_index += 1;
        if (channel_data[channel].phrase_index >= PHRASE_ROW_COUNT)
        {
            channel_data[channel].phrase_index = 0;
            channel_data[channel].chain_index += 1;
            if (channel_data[channel].chain_index >= CHAIN_ROW_COUNT ||
                project_data.chain[channel_data[channel].current_chain].phrase[channel_data[channel].chain_index] == 0x00)
            {
                channel_data[channel].chain_index = 0;
                channel_data[channel].chart_index += 1;
                if (channel_data[channel].chart_index >= SONG_ROW_COUNT ||
                    project_data.song.chain[channel][channel_data[channel].chart_index] == 0x00)
                {
                    channel_data[channel].is_playing = false;
                    return sample;
                }
                else
                    channel_data[channel].current_chain = project_data.song.chain[channel][channel_data[channel].chart_index] - 1;
            }
            channel_data[channel].current_phrase = project_data.chain[channel_data[channel].current_chain].phrase[channel_data[channel].chain_index] - 1;
        }

        note_t new_note = project_data.phrase[channel_data[channel].current_phrase].note[channel_data[channel].phrase_index];
        if (new_note != 0x00) {
            channel_data[channel].current_note = new_note;

            f_lseek(&channel_data[channel].f_sample, DATA_OFFSET);

            UINT bytes_read;
            f_read(&channel_data[channel].f_sample, channel_data[channel].sample.buffer, INPUT_BUFFER_SIZE * 2, &bytes_read);
            channel_data[channel].sample.written = bytes_read / 2;
            channel_data[channel].sample.phase.whole = 0;
            channel_data[channel].sample.phase.fraction = 0.0f;

            float note_ratio = NOTE_METADATA[channel_data[channel].current_note].frequency / NOTE_METADATA[0x31].frequency;
            channel_data[channel].sample.phase_advance.whole = (uint32_t)floorf(note_ratio);
            channel_data[channel].sample.phase_advance.fraction = note_ratio - (float)channel_data[channel].sample.phase_advance.whole;
        }

        instrument_id_t new_instrument_id = project_data.phrase[channel_data[channel].current_phrase].instrument[channel_data[channel].phrase_index] - 1;
        if (new_instrument_id != (instrument_id_t) -1) {
            channel_data[channel].current_instrument_id = new_instrument_id;

            if (project_data.instrument[channel_data[channel].current_instrument_id].instrument_type == INSTRUMENT_TYPE_SAMPLE) {
                f_close(&channel_data[channel].f_sample);
                char file_name[] = "0:/samples/00.wav";
                snprintf(file_name, sizeof(file_name), "0:/samples/%02X.wav", project_data.instrument[channel_data[channel].current_instrument_id].sample.sample_id);
                f_open(&channel_data[channel].f_sample, file_name, FA_READ | FA_OPEN_EXISTING);
                f_lseek(&channel_data[channel].f_sample, DATA_OFFSET);

                UINT bytes_read;
                f_read(&channel_data[channel].f_sample, channel_data[channel].sample.buffer, INPUT_BUFFER_SIZE * 2, &bytes_read);
                channel_data[channel].sample.written = bytes_read / 2;
                channel_data[channel].sample.phase.whole = 0;
                channel_data[channel].sample.phase.fraction = 0.0f;

                float note_ratio = NOTE_METADATA[channel_data[channel].current_note].frequency / NOTE_METADATA[0x31].frequency;
                channel_data[channel].sample.phase_advance.whole = (uint32_t)floorf(note_ratio);
                channel_data[channel].sample.phase_advance.fraction = note_ratio - (float)channel_data[channel].sample.phase_advance.whole;
            }
        }

        volume_t new_volume = project_data.phrase[channel_data[channel].current_phrase].volume[channel_data[channel].phrase_index];
        if (new_volume != 0x00)
            channel_data[channel].current_volume = new_volume;
    }

    return sample;
}

static void audio_led_update(void)
{
    uint8_t led_output = 0x00;

    for (uint32_t channel = 0; channel < 8; channel++)
        if (channel_data[channel].is_playing) led_output |= 0x01 << (7 - channel);

    LED_write(led_output);
}
