#ifndef INC_DATA_H_
#define INC_DATA_H_

#include <stdint.h>

#define CHANNEL_COUNT 8
#define SONG_CHART_ROW_COUNT 256
#define SONG_CHART_ROWS_ON_SCREEN 24
#define CHAIN_COUNT 127
#define PHRASE_COUNT 255
#define COMMAND_COUNT 2
#define INSTRUMENT_COUNT 127

extern const uint8_t hex_digit[16];
extern const uint8_t note[9 * 12][3];

uint8_t data_get_song_chart_pattern(int32_t channel, int32_t row);
void data_set_song_chart_pattern(uint8_t pattern, int32_t channel, int32_t row);
uint8_t data_get_chain_phrase(uint8_t chain, int32_t row);
void data_set_chain_phrase(uint8_t phrase, uint8_t chain, int32_t row);
int8_t data_get_chain_transpose(uint8_t chain, int32_t row);
void data_set_chain_transpose(int8_t transpose, uint8_t chain, int32_t row);
uint8_t data_get_phrase_note(uint8_t phrase, int32_t row);
void data_set_phrase_note(uint8_t note, uint8_t phrase, int32_t row);
uint8_t data_get_phrase_instrument(uint8_t phrase, int32_t row);
void data_set_phrase_instrument(uint8_t instrument, uint8_t phrase, int32_t row);
uint8_t data_get_phrase_volume(uint8_t phrase, int32_t row);
void data_set_phrase_volume(uint8_t volume, uint8_t phrase, int32_t row);
uint8_t data_get_phrase_command(uint8_t command_number, uint8_t phrase, int32_t row);
void data_set_phrase_command(uint8_t command, uint8_t command_number, uint8_t phrase, int32_t row);
uint8_t data_get_phrase_parameter(uint8_t command_number, uint8_t phrase, int32_t row);
void data_set_phrase_parameter(uint8_t parameter, uint8_t command_number, uint8_t phrase, int32_t row);

int32_t data_get_setting_joystick_delay_initial (void);
void data_set_setting_joystick_delay_initial (int32_t delay);
int32_t data_get_setting_joystick_delay_repeat (void);
void data_set_setting_joystick_delay_repeat (int32_t delay);

#endif /* INC_DATA_H_ */
