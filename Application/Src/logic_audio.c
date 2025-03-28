#include "logic_audio.h"
#include <stdbool.h>
#include "data.h"
#include "audio_buffer.h"
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
    p_channel_data->period += NOTE_METADATA.period[p_channel_data->current_note];

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
