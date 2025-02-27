#include "data.h"

typedef struct {
    uint8_t song_chart[CHANNEL_COUNT][SONG_CHART_ROW_COUNT];
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

const char hex_digit[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
                            '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

uint8_t data_get_song_chart_pattern(int32_t channel, int32_t row)
{
    if (0 <= channel && channel < CHANNEL_COUNT)
        if (0 <= row && row < SONG_CHART_ROW_COUNT)
            return project_data.song_chart[channel][row];

    return 0x00;
}

void data_set_song_chart_pattern(int8_t data, int32_t channel, int32_t row)
{
    if (0 <= channel && channel < CHANNEL_COUNT)
        if (0 <= row && row < SONG_CHART_ROW_COUNT)
            project_data.song_chart[channel][row] = data;
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
