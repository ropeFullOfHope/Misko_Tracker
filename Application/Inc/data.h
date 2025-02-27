#ifndef INC_DATA_H_
#define INC_DATA_H_

#include <stdint.h>

#define CHANNEL_COUNT 8
#define SONG_CHART_ROW_COUNT 256
#define SONG_CHART_ROWS_ON_SCREEN 24

extern const char hex_digit[16];

uint8_t data_get_song_chart_pattern(int32_t channel, int32_t row);
void data_set_song_chart_pattern(int8_t data, int32_t channel, int32_t row);

int32_t data_get_setting_joystick_delay_initial (void);
void data_set_setting_joystick_delay_initial (int32_t delay);
int32_t data_get_setting_joystick_delay_repeat (void);
void data_set_setting_joystick_delay_repeat (int32_t delay);

#endif /* INC_DATA_H_ */
