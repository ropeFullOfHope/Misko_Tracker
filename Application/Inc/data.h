#ifndef INC_DATA_H_
#define INC_DATA_H_

#include <stdint.h>

#define CHANNEL_COUNT 8
#define SONG_CHART_ROW_COUNT 256

uint8_t data_get_song_chart_entry(int32_t channel, int32_t row);
void data_set_song_chart_entry(int8_t data, int32_t channel, int32_t row);

#endif /* INC_DATA_H_ */
