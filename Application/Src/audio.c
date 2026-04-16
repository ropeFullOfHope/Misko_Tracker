#include "audio.h"
#include "stm32g4xx_ll_spi.h"
#include "stm32g4xx_ll_dma.h"
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include "data.h"
#include "ff.h"

#define BUFFER_SIZE 512
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
    };
    FIL f_sample;
} channel_data[CHANNEL_COUNT];

static void audio_fill_buffer(int16_t *buffer, uint32_t size);
static int16_t audio_get_next_sample(uint32_t channel);
static bool audio_is_playing(void);

static int16_t audio_buffer[2][BUFFER_SIZE / 2];
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

        if (project_data.instrument[channel_data[channel].current_instrument_id].instrument_type == INSTRUMENT_TYPE_SAMPLE) {
            if (f_open(&channel_data[channel].f_sample, "0:/samples/amen.wav", FA_READ | FA_OPEN_EXISTING) != FR_OK) LED_write(0x05);
            //if (f_lseek(&channel_data[channel].f_sample, 0x66) != FR_OK) LED_write(0x07);
        }

        channel_data[channel].is_playing = true;
    }

    // Fill the entire audio buffer.
    audio_fill_buffer(audio_buffer[0], BUFFER_SIZE);

    // Start DMA transfer.
    //LL_DMA_EnableIT_HT(DMA2, LL_DMA_CHANNEL_1);
    //LL_DMA_EnableIT_TC(DMA2, LL_DMA_CHANNEL_1);
    LL_DMA_SetMemoryAddress(DMA2, LL_DMA_CHANNEL_1, (uint32_t)audio_buffer);
    LL_DMA_SetDataLength(DMA2, LL_DMA_CHANNEL_1, BUFFER_SIZE);
    LL_DMA_EnableChannel(DMA2, LL_DMA_CHANNEL_1);
    LL_I2S_EnableDMAReq_TX(SPI3);
    LL_I2S_Enable(SPI3);

    LED_write(0x01);
}

void audio_stop(void)
{
    for (uint32_t channel = 0; channel < CHANNEL_COUNT; channel++)
        f_close(&channel_data[channel].f_sample);

    // Stop DMA transfer.
    LL_I2S_DisableDMAReq_TX(SPI3);
    LL_DMA_DisableChannel(DMA2, LL_DMA_CHANNEL_1);
    LL_I2S_Disable(SPI3);

    LED_write(0x00);
}

void audio_half_callback(void)
{
    if (audio_is_playing() == false) {
        audio_stop();
        return;
    }
    audio_fill_buffer(audio_buffer[0], BUFFER_SIZE / 2);
}

void audio_full_callback(void)
{
    if (audio_is_playing() == false) {
        audio_stop();
        return;
    }
    audio_fill_buffer(audio_buffer[1], BUFFER_SIZE / 2);
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
                UINT bytes_read = 0;
                if(f_read(&channel_data[channel].f_sample, &sample, 2, &bytes_read) != FR_OK) LED_write(0x02);
                if (bytes_read < 2)
                    sample = 0;
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
        if (new_note != 0x00)
            channel_data[channel].current_note = new_note;

        instrument_id_t new_instrument_id = project_data.phrase[channel_data[channel].current_phrase].instrument[channel_data[channel].phrase_index] - 1;
        if (new_instrument_id != (instrument_id_t) -1) {
            channel_data[channel].current_instrument_id = new_instrument_id;

            if (project_data.instrument[new_instrument_id].instrument_type == INSTRUMENT_TYPE_SAMPLE) {
                if (f_open(&channel_data[channel].f_sample, "0:/samples/amen.wav", FA_READ | FA_OPEN_EXISTING) != FR_OK) LED_write(0x05);
                //if (f_lseek(&channel_data[channel].f_sample, 0x66) != FR_OK) LED_write(0x07);
            }
        }

        volume_t new_volume = project_data.phrase[channel_data[channel].current_phrase].volume[channel_data[channel].phrase_index];
        if (new_volume != 0x00)
            channel_data[channel].current_volume = new_volume;
    }

    return sample;
}

static bool audio_is_playing(void)
{
    for (uint32_t channel = 0; channel < CHANNEL_COUNT; channel++) {
        if (channel_data[channel].is_playing == true)
            return true;
    }
    return false;
}

/*
#include "logic_audio.h"
#include <stdbool.h>
#include "data.h"
#include "interrupt.h"

typedef struct {
    struct {
        int32_t song;
        int32_t chain;
        int32_t phrase;
        int32_t tick;
        int32_t sample;
    } cursor;

    note_t current_note;
    instrument_id_t current_instrument;
    volume_t current_volume;

    uint32_t current_sample;
    uint32_t period;

    bool retrigger;
    bool is_muted;
} channel_data_t;

static void calculate_samples_per_tick(void);
static int32_t get_instrument_sample(channel_data_t *p_channel_data);
static void update_current_note_instrument_volume(channel_data_t *p_channel_data, int32_t channel);

static uint32_t samples_per_tick = 0;
static channel_data_t channel_data[CHANNEL_COUNT] = {0};

void logic_audio_init(void)
{
    calculate_samples_per_tick();

    for (int32_t selected_channel = 0; selected_channel < CHANNEL_COUNT; selected_channel++) {
        channel_data_t *const P_SELECTED_CHANNEL_DATA = &channel_data[selected_channel];

        P_SELECTED_CHANNEL_DATA->cursor.song   = 0;
        P_SELECTED_CHANNEL_DATA->cursor.chain  = 0;
        P_SELECTED_CHANNEL_DATA->cursor.phrase = 0;
        P_SELECTED_CHANNEL_DATA->cursor.tick   = 0;
        P_SELECTED_CHANNEL_DATA->cursor.sample = 0;

        P_SELECTED_CHANNEL_DATA->current_note       = 0;
        P_SELECTED_CHANNEL_DATA->current_instrument = 0x00;
        P_SELECTED_CHANNEL_DATA->current_volume     = 0;

        P_SELECTED_CHANNEL_DATA->current_sample = 0;

        update_current_note_instrument_volume(P_SELECTED_CHANNEL_DATA, selected_channel);
    }

    interrupt_disable(INTERRUPT_AUDIO_UPDATE);
    audio_buffer_clear();
    while (is_audio_buffer_full() == false)
        logic_audio_update();
    interrupt_enable(INTERRUPT_AUDIO_UPDATE);
}

void logic_audio_update(void)
{
    if (is_audio_buffer_full())
        return;

    int32_t channel_sample[CHANNEL_COUNT] = {0};

    for (int32_t selected_channel = 0; selected_channel < CHANNEL_COUNT; selected_channel++) {
        channel_data_t *const P_SELECTED_CHANNEL_DATA = &channel_data[selected_channel];

        // Continue to next channel if selected channel is muted.
        if (P_SELECTED_CHANNEL_DATA->is_muted)
            continue;

        // If the song cursor has reached the end or the currently selected chain is NULL, continue to next channel.
        if (P_SELECTED_CHANNEL_DATA->cursor.song >= 256 ||
            data_get_song_chain(selected_channel, P_SELECTED_CHANNEL_DATA->cursor.song) == 0x00)
        {
            continue;
        }

        channel_sample[selected_channel] = get_instrument_sample(P_SELECTED_CHANNEL_DATA);

        // Increment sample cursor.
        P_SELECTED_CHANNEL_DATA->cursor.sample += 1;

        // If the sample cursor hasn't reached the end, continue to next channel.
        if (P_SELECTED_CHANNEL_DATA->cursor.sample < (int32_t) samples_per_tick)
            continue;

        // Reset sample cursor and increment tick cursor.
        P_SELECTED_CHANNEL_DATA->cursor.sample = 0;
        P_SELECTED_CHANNEL_DATA->cursor.tick += 1;

        // If the tick cursor hasn't reached the end, continue to next channel.
        if (P_SELECTED_CHANNEL_DATA->cursor.tick < 6)
            continue;

        // Reset tick cursor and increment phrase cursor.
        P_SELECTED_CHANNEL_DATA->cursor.tick = 0;
        P_SELECTED_CHANNEL_DATA->cursor.phrase += 1;

        // If the phrase cursor hasn't reached the end, update the selected note,
        // update currently selected note, instrument and volume, then continue to next channel.
        if (P_SELECTED_CHANNEL_DATA->cursor.phrase < 16) {
            update_current_note_instrument_volume(P_SELECTED_CHANNEL_DATA, selected_channel);
            continue;
        }

        // Reset phrase cursor and increment the chain cursor.
        P_SELECTED_CHANNEL_DATA->cursor.phrase = 0;
        P_SELECTED_CHANNEL_DATA->cursor.chain += 1;

        // If the chain cursor hasn't reached the end and the currently selected phrase isn't NULL,
        // update currently selected note, instrument and volume, then continue to next channel.
        if (P_SELECTED_CHANNEL_DATA->cursor.chain < 16 &&
            data_get_chain_phrase(data_get_song_chain(selected_channel, P_SELECTED_CHANNEL_DATA->cursor.song), P_SELECTED_CHANNEL_DATA->cursor.chain) != 0x00)
        {
            update_current_note_instrument_volume(P_SELECTED_CHANNEL_DATA, selected_channel);
            continue;
        }

        // Reset the chain cursor and increment the song cursor.
        P_SELECTED_CHANNEL_DATA->cursor.chain = 0;
        P_SELECTED_CHANNEL_DATA->cursor.song += 1;

        // If the song cursor hasn't reached the end and the currently selected chain isn't NULL,
        // update currently selected note, instrument and volume, then continue to next channel.
        if (P_SELECTED_CHANNEL_DATA->cursor.song < 256 &&
            data_get_song_chain(selected_channel, P_SELECTED_CHANNEL_DATA->cursor.song) != 0x00)
        {
            update_current_note_instrument_volume(P_SELECTED_CHANNEL_DATA, selected_channel);
            continue;
        }
    }

    int32_t output_sample = 0;

    for (int32_t selected_channel = 0; selected_channel < CHANNEL_COUNT; selected_channel++)
        output_sample += channel_sample[selected_channel];

    audio_buffer_write(output_sample);
}

void calculate_samples_per_tick(void)
{
    const uint32_t BPM = data_get_tempo();
    const uint32_t ROWS_PER_BEAT = 4;
    const uint32_t TICKS_PER_ROW = 6;
    const uint32_t SECONDS_PER_MINUTE = 60;

    // Samples per tick = f_sample [Hz] / (BPM [Beats / Minute] * 4 [Rows] * 6 [ticks] / 60 [seconds])
    samples_per_tick = ((OUTPUT_SAMPLE_RATE * SECONDS_PER_MINUTE * 10) / (BPM * ROWS_PER_BEAT * TICKS_PER_ROW) + 5) / 10;
}

int32_t get_instrument_sample(channel_data_t *p_channel_data)
{

    if (p_channel_data->current_note == 0)
        return 0;

    if (p_channel_data->current_instrument == 0x00)
        return 0;

    if (p_channel_data->current_volume == 0)
        return 0;

    int32_t sample = (p_channel_data->period >= UINT32_MAX / 2 ? 1 : -1);
    sample *= 0x7FF * p_channel_data->current_volume / 127;

    p_channel_data->current_sample += 1;
    //p_channel_data->period += NOTE_METADATA.period[p_channel_data->current_note];

    return sample;
}

void update_current_note_instrument_volume(channel_data_t *p_channel_data, int32_t channel)
{
    const chain_id_t CURRENT_CHAIN = data_get_song_chain(channel, p_channel_data->cursor.song);
    const phrase_id_t CURRENT_PHRASE = data_get_chain_phrase(CURRENT_CHAIN, p_channel_data->cursor.chain);

    const note_t NEW_NOTE = data_get_phrase_note(CURRENT_PHRASE, p_channel_data->cursor.phrase);
    const instrument_id_t NEW_INSTRUMENT = data_get_phrase_instrument(CURRENT_PHRASE, p_channel_data->cursor.phrase);
    const volume_t NEW_VOLUME = data_get_phrase_volume(CURRENT_PHRASE, p_channel_data->cursor.phrase);

    if (NEW_NOTE != 0) {
        p_channel_data->current_note = NEW_NOTE;
        if (p_channel_data->retrigger == true) {
            p_channel_data->current_sample = 0;
            p_channel_data->period = 0;
        }
    }

    if (NEW_INSTRUMENT != 0x00) {
        p_channel_data->current_instrument = NEW_INSTRUMENT;
        if (p_channel_data->retrigger == true) {
            p_channel_data->current_sample = 0;
            p_channel_data->period = 0;
        }
    }

    if (NEW_VOLUME != 0x00)
        p_channel_data->current_volume = NEW_VOLUME - 1;
}
*/
