#include "data.h"

typedef struct {
    chain_id_t chain[CHANNEL_COUNT][SONG_ROW_COUNT];
} song_t;

typedef struct {
    phrase_id_t phrase[CHAIN_ROW_COUNT];
    transpose_t transpose[CHAIN_ROW_COUNT];
} chain_t;

typedef struct {
    note_t note[PHRASE_ROW_COUNT];
    instrument_id_t instrument[PHRASE_ROW_COUNT];
    volume_t volume[PHRASE_ROW_COUNT];
    command_id_t command[PHRASE_ROW_COUNT][COMMANDS_PER_ROW];
    parameter_t parameter[PHRASE_ROW_COUNT][COMMANDS_PER_ROW];
} phrase_t;

typedef struct {
    song_t song;
    chain_t chain[CHAIN_COUNT];
    phrase_t phrase[PHRASE_COUNT];
} project_data_t;

typedef struct {
    int32_t joystick_delay_initial;
    int32_t joystick_delay_repeat;
} project_settings_t;

static project_data_t project_data = {0};
static project_settings_t project_settings = {
    .joystick_delay_initial = 10,
    .joystick_delay_repeat = 2
};

const symbol_t NOTE_NAME[NOTE_COUNT][3] = {
    "---",
    "C-0", "C#0", "D-0", "D#0", "E-0", "F-0", "F#0", "G-0", "G#0", "A-0", "A#0", "B-0",
    "C-1", "C#1", "D-1", "D#1", "E-1", "F-1", "F#1", "G-1", "G#1", "A-1", "A#1", "B-1",
    "C-2", "C#2", "D-2", "D#2", "E-2", "F-2", "F#2", "G-2", "G#2", "A-2", "A#2", "B-2",
    "C-3", "C#3", "D-3", "D#3", "E-3", "F-3", "F#3", "G-3", "G#3", "A-3", "A#3", "B-3",
    "C-4", "C#4", "D-4", "D#4", "E-4", "F-4", "F#4", "G-4", "G#4", "A-4", "A#4", "B-4",
    "C-5", "C#5", "D-5", "D#5", "E-5", "F-5", "F#5", "G-5", "G#5", "A-5", "A#5", "B-5",
    "C-6", "C#6", "D-6", "D#6", "E-6", "F-6", "F#6", "G-6", "G#6", "A-6", "A#6", "B-6",
    "C-7", "C#7", "D-7", "D#7", "E-7", "F-7", "F#7", "G-7", "G#7", "A-7", "A#7", "B-7",
    "C-8", "C#8", "D-8", "D#8", "E-8", "F-8", "F#8", "G-8", "G#8", "A-8", "A#8", "B-8"
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
