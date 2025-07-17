#include "data.h"
#include <stddef.h>

static project_data_t project_data = {
    .tempo = 120
};
static project_settings_t project_settings = {
    .joystick_delay_initial = 10,
    .joystick_delay_repeat = 2
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

uint32_t data_get_tempo(void)
{
    return project_data.tempo;
}

void data_set_tempo(uint32_t tempo)
{
    project_data.tempo = tempo;
}

int32_t data_get_setting_joystick_delay_initial (void)
{
    return project_settings.joystick_delay_initial;
}

void data_set_setting_joystick_delay_initial (int32_t delay)
{
    project_settings.joystick_delay_initial = delay;
}

int32_t data_get_setting_joystick_delay_repeat (void)
{
    return project_settings.joystick_delay_repeat;
}

void data_set_setting_joystick_delay_repeat (int32_t delay)
{
    project_settings.joystick_delay_repeat = delay;
}
