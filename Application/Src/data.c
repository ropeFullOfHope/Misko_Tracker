#include "data.h"

typedef struct {
    uint8_t phrase[16];
    int8_t transpose[16];
} chain_t;

typedef struct {
    uint8_t note[16];
    uint8_t instrument[16];
    uint8_t volume[16];
    uint8_t command[16][COMMAND_COUNT];
    uint8_t parameter[16][COMMAND_COUNT];
} phrase_t;

typedef struct {
    uint8_t song_chart[CHANNEL_COUNT][SONG_CHART_ROW_COUNT];
    chain_t chain[CHAIN_COUNT];
    phrase_t phrase[PHRASE_COUNT];
} project_data_t;

typedef struct {
    int32_t joystick_delay_initial;
    int32_t joystick_delay_repeat;
} project_settings_t;

static project_data_t project_data = {0};
static project_settings_t project_settings = {
    .joystick_delay_initial = 8,
    .joystick_delay_repeat = 2
};

const uint8_t hex_digit[16] = {
    '0', '1', '2', '3', '4', '5', '6', '7',
    '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'
};

const uint8_t duodec_digit[12] = {
    '0', '1', '2', '3', '4', '5',
    '6', '7', '8', '9', 'X', 'E'
};

const uint8_t note[9 * 12][3] = {
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

uint8_t data_get_song_chart_pattern(int32_t channel, int32_t row)
{
    if (0 <= channel && channel < CHANNEL_COUNT)
        if (0 <= row && row < SONG_CHART_ROW_COUNT)
            return project_data.song_chart[channel][row];

    return 0x00;
}

void data_set_song_chart_pattern(uint8_t pattern, int32_t channel, int32_t row)
{
    if (0 <= channel && channel < CHANNEL_COUNT)
        if (0 <= row && row < SONG_CHART_ROW_COUNT)
            project_data.song_chart[channel][row] = pattern;
}

uint8_t data_get_chain_phrase(uint8_t chain, int32_t row)
{
    if (chain < CHAIN_COUNT)
        if (0 <= row && row < 16)
            return project_data.chain[chain].phrase[row];

    return 0x00;
}

void data_set_chain_phrase(uint8_t phrase, uint8_t chain, int32_t row)
{
    if (chain < CHAIN_COUNT)
        if (0 <= row && row < SONG_CHART_ROW_COUNT)
            project_data.chain[chain].phrase[row] = phrase;
}

int8_t data_get_chain_transpose(uint8_t chain, int32_t row)
{
    if (chain < CHAIN_COUNT)
        if (0 <= row && row < 16)
            return project_data.chain[chain].transpose[row];

    return 0;
}

void data_set_chain_transpose(int8_t transpose, uint8_t chain, int32_t row)
{
    if (chain < CHAIN_COUNT)
        if (0 <= row && row < SONG_CHART_ROW_COUNT)
            project_data.chain[chain].transpose[row] = transpose;
}

uint8_t data_get_phrase_note(uint8_t phrase, int32_t row)
{
    if (phrase < PHRASE_COUNT)
        if (0 <= row && row < 16)
            return project_data.phrase[phrase].note[row];

    return 0x00;
}

void data_set_phrase_note(uint8_t note, uint8_t phrase, int32_t row)
{
    if (phrase < PHRASE_COUNT)
        if (0 <= row && row < SONG_CHART_ROW_COUNT)
            project_data.phrase[phrase].note[row] = note;
}

uint8_t data_get_phrase_instrument(uint8_t phrase, int32_t row)
{
    if (phrase < PHRASE_COUNT)
        if (0 <= row && row < 16)
            return project_data.phrase[phrase].instrument[row];

    return 0x00;
}

void data_set_phrase_instrument(uint8_t instrument, uint8_t phrase, int32_t row)
{
    if (phrase < PHRASE_COUNT)
        if (0 <= row && row < SONG_CHART_ROW_COUNT)
            project_data.phrase[phrase].instrument[row] = instrument;
}

uint8_t data_get_phrase_volume(uint8_t phrase, int32_t row)
{
    if (phrase < PHRASE_COUNT)
        if (0 <= row && row < 16)
            return project_data.phrase[phrase].volume[row];

    return 0x00;
}

void data_set_phrase_volume(uint8_t volume, uint8_t phrase, int32_t row)
{
    if (phrase < PHRASE_COUNT)
        if (0 <= row && row < SONG_CHART_ROW_COUNT)
            project_data.phrase[phrase].volume[row] = volume;
}

uint8_t data_get_phrase_command(uint8_t command_number, uint8_t phrase, int32_t row)
{
    if (command_number < COMMAND_COUNT)
        if (phrase < PHRASE_COUNT)
            if (0 <= row && row < 16)
                return project_data.phrase[phrase].command[row][command_number];

    return 0x00;
}

void data_set_phrase_command(uint8_t command, uint8_t command_number, uint8_t phrase, int32_t row)
{
    if (command_number < COMMAND_COUNT)
        if (phrase < PHRASE_COUNT)
            if (0 <= row && row < SONG_CHART_ROW_COUNT)
                project_data.phrase[phrase].command[row][command_number] = command;
}

uint8_t data_get_phrase_parameter(uint8_t command_number, uint8_t phrase, int32_t row)
{
    if (command_number < COMMAND_COUNT)
        if (phrase < PHRASE_COUNT)
            if (0 <= row && row < 16)
                return project_data.phrase[phrase].parameter[row][command_number];

    return 0x00;
}

void data_set_phrase_parameter(uint8_t parameter, uint8_t command_number, uint8_t phrase, int32_t row)
{
    if (command_number < COMMAND_COUNT)
        if (phrase < PHRASE_COUNT)
            if (0 <= row && row < SONG_CHART_ROW_COUNT)
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
