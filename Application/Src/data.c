#include "data.h"
#include <stddef.h>

static project_data_t project_data = {
    .project_settings = {
        .tempo = 120
    }
};
static preferences_t preferences = {
    .master_volume = 0x20,
    .cursor = {
        .delay = 10,
        .repeat = 2
    }
};

chain_id_t data_get_song_chain(int32_t channel, int32_t row)
{
    if (channel < 0 ||
        channel >= CHANNEL_COUNT ||
        row < 0 ||
        row >= SONG_ROW_COUNT)
    {
        return 0x00;
    }

    return project_data.song.chain[channel][row];
}

void data_set_song_chain(chain_id_t chain, int32_t channel, int32_t row)
{
    if (channel < 0 ||
        channel >= CHANNEL_COUNT ||
        row < 0 ||
        row >= SONG_ROW_COUNT)
    {
        return;
    }

    project_data.song.chain[channel][row] = chain;
}

phrase_id_t data_get_chain_phrase(chain_id_t chain, int32_t row)
{
    chain -= 1;

    if (//chain < 0 ||
        chain >= CHAIN_COUNT ||
        row < 0 ||
        row >= CHAIN_ROW_COUNT)
    {
        return 0x00;
    }

    return project_data.chain[chain].phrase[row];
}

void data_set_chain_phrase(phrase_id_t phrase, chain_id_t chain, int32_t row)
{
    chain -= 1;

    if (//chain < 0 ||
        chain >= CHAIN_COUNT ||
        row < 0 ||
        row >= CHAIN_ROW_COUNT)
    {
        return;
    }

    project_data.chain[chain].phrase[row] = phrase;
}

transpose_t data_get_chain_transpose(chain_id_t chain, int32_t row)
{
    chain -= 1;

    if (//chain < 0 ||
        chain >= CHAIN_COUNT ||
        row < 0 ||
        row >= CHAIN_ROW_COUNT)
    {
        return 0x00;
    }

    return project_data.chain[chain].transpose[row];
}

void data_set_chain_transpose(transpose_t transpose, chain_id_t chain, int32_t row)
{
    chain -= 1;

    if (//chain < 0 ||
        chain >= CHAIN_COUNT ||
        row < 0 ||
        row >= CHAIN_ROW_COUNT)
    {
        return;
    }

    project_data.chain[chain].transpose[row] = transpose;
}

note_t data_get_phrase_note(phrase_id_t phrase, int32_t row)
{
    phrase -= 1;

    if (//phrase < 0 ||
        phrase >= PHRASE_COUNT ||
        row < 0 ||
        row >= PHRASE_ROW_COUNT)
    {
        return 0x00;
    }

    return project_data.phrase[phrase].note[row];
}

void data_set_phrase_note(note_t note, phrase_id_t phrase, int32_t row)
{
    phrase -= 1;

    if (//phrase < 0 ||
        phrase >= PHRASE_COUNT ||
        row < 0 ||
        row >= PHRASE_ROW_COUNT)
    {
        return;
    }

    project_data.phrase[phrase].note[row] = note;
}

instrument_id_t data_get_phrase_instrument(phrase_id_t phrase, int32_t row)
{
    phrase -= 1;

    if (//phrase < 0 ||
        phrase >= PHRASE_COUNT ||
        row < 0 ||
        row >= PHRASE_ROW_COUNT)
    {
        return 0x00;
    }

    return project_data.phrase[phrase].instrument[row];
}

void data_set_phrase_instrument(instrument_id_t instrument, phrase_id_t phrase, int32_t row)
{
    phrase -= 1;

    if (//phrase < 0 ||
        phrase >= PHRASE_COUNT ||
        row < 0 ||
        row >= PHRASE_ROW_COUNT)
    {
        return;
    }

    project_data.phrase[phrase].instrument[row] = instrument;
}

volume_t data_get_phrase_volume(phrase_id_t phrase, int32_t row)
{
    phrase -= 1;

    if (//phrase < 0 ||
        phrase >= PHRASE_COUNT ||
        row < 0 ||
        row >= PHRASE_ROW_COUNT)
    {
        return 0x00;
    }

    return project_data.phrase[phrase].volume[row];
}

void data_set_phrase_volume(volume_t volume, phrase_id_t phrase, int32_t row)
{
    phrase -= 1;

    if (//phrase < 0 ||
        phrase >= PHRASE_COUNT ||
        row < 0 ||
        row >= PHRASE_ROW_COUNT)
    {
        return;
    }

    project_data.phrase[phrase].volume[row] = volume;
}

command_id_t data_get_phrase_command(int32_t command_number, phrase_id_t phrase, int32_t row)
{
    phrase -= 1;

    if (command_number < 0 ||
        command_number >= COMMANDS_PER_ROW ||
        //phrase < 0 ||
        phrase >= PHRASE_COUNT ||
        row < 0 ||
        row >= PHRASE_ROW_COUNT)
    {
        return 0x00;
    }

    return project_data.phrase[phrase].command[row][command_number];
}

void data_set_phrase_command(command_id_t command, int32_t command_number, phrase_id_t phrase, int32_t row)
{
    phrase -= 1;

    if (command_number < 0 ||
        command_number >= COMMANDS_PER_ROW ||
        //phrase < 0 ||
        phrase >= PHRASE_COUNT ||
        row < 0 ||
        row >= PHRASE_ROW_COUNT)
    {
        return;
    }

    project_data.phrase[phrase].command[row][command_number] = command;
}

parameter_t data_get_phrase_parameter(int32_t command_number, phrase_id_t phrase, int32_t row)
{
    phrase -= 1;

    if (command_number < 0 ||
        command_number >= COMMANDS_PER_ROW ||
        //phrase < 0 ||
        phrase >= PHRASE_COUNT ||
        row < 0 ||
        row >= PHRASE_ROW_COUNT)
    {
        return 0x00;
    }

    return project_data.phrase[phrase].parameter[row][command_number];
}

void data_set_phrase_parameter(parameter_t parameter, int32_t command_number, phrase_id_t phrase, int32_t row)
{
    phrase -= 1;

    if (command_number < 0 ||
        command_number >= COMMANDS_PER_ROW ||
        //phrase < 0 ||
        phrase >= PHRASE_COUNT ||
        row < 0 ||
        row >= PHRASE_ROW_COUNT)
    {
        return;
    }

    project_data.phrase[phrase].parameter[row][command_number] = parameter;
}

tempo_t data_get_tempo(void)
{
    return project_data.project_settings.tempo;
}

cursor_delay_t data_get_cursor_delay(void)
{
    return preferences.cursor.delay;
}

cursor_delay_t data_get_cursor_repeat(void)
{
    return preferences.cursor.repeat;
}

const instrument_t *data_get_instrument(instrument_id_t instrument)
{
    instrument -= 1;

    if (//instrument < 0 ||
        instrument >= INSTRUMENT_COUNT)
    {
        return NULL;
    }

    return &project_data.instrument[instrument];
}

void data_set_instrument(instrument_id_t instrument, instrument_t *data)
{
    instrument -= 1;

    if (//instrument < 0 ||
        instrument >= INSTRUMENT_COUNT)
    {
        return;
    }

    project_data.instrument[instrument] = *data;
}

void data_get_project_settings(void *data, uint32_t member_offset, primitive_type_t primitive_type)
{
    const uint8_t *base = (const uint8_t *)&project_data.project_settings;

    const void *src = base + member_offset;
    void *dst = data;

    copy_data(dst, src, primitive_type);
}

void data_set_project_settings(const void *data, uint32_t member_offset, primitive_type_t primitive_type)
{
    uint8_t *base = (uint8_t *)&project_data.project_settings;

    const void *src = data;
    void *dst = base + member_offset;

    copy_data(dst, src, primitive_type);
}

void data_get_preferences(void *data, uint32_t member_offset, primitive_type_t primitive_type)
{
    const uint8_t *base = (const uint8_t *)&preferences;

    const void *src = base + member_offset;
    void *dst = data;

    copy_data(dst, src, primitive_type);
}

void data_set_preferences(const void *data, uint32_t member_offset, primitive_type_t primitive_type)
{
    uint8_t *base = (uint8_t *)&preferences;

    const void *src = data;
    void *dst = base + member_offset;

    copy_data(dst, src, primitive_type);
}
