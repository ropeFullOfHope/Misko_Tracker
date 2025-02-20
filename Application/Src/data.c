#include "data.h"

typedef struct {
    uint8_t song_chart[CHANNEL_COUNT][SONG_CHART_ROW_COUNT];
} project_data_t;

static project_data_t project_data = {0};

uint8_t get_song_chart_entry(int32_t channel, int32_t row)
{
    if (0 <= channel && channel < CHANNEL_COUNT)
        if (0 <= row && row < SONG_CHART_ROW_COUNT)
            return project_data.song_chart[channel][row];

    return 0;
}

void set_song_chart_entry(int8_t data, int32_t channel, int32_t row)
{
    if (0 <= channel && channel < CHANNEL_COUNT)
        if (0 <= row && row < SONG_CHART_ROW_COUNT)
            project_data.song_chart[channel][row] = data;
}
