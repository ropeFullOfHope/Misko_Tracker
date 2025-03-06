#ifndef INC_DATA_H_
#define INC_DATA_H_

#include <stdint.h>

#define ENGINE_TICK_RATE 60

#define CHANNEL_COUNT    8
#define SONG_ROW_COUNT   256
#define CHAIN_COUNT      127
#define CHAIN_ROW_COUNT  16
#define PHRASE_COUNT     255
#define PHRASE_ROW_COUNT 16
#define COMMAND_COUNT    3
#define INSTRUMENT_COUNT 127

#define TITLE_START_X 1
#define TITLE_START_Y 1
#define TITLE_SIZE_X  32
#define TITLE_SIZE_Y  1

#define EDITOR_START_X 1
#define EDITOR_START_Y 3
#define EDITOR_SIZE_X  32
#define EDITOR_SIZE_Y  17

#define EDITOR_EXPANDED_START_X 1
#define EDITOR_EXPANDED_START_Y 3
#define EDITOR_EXPANDED_SIZE_X  32
#define EDITOR_EXPANDED_SIZE_Y  26

#define EXTRA_START_X 34
#define EXTRA_START_Y 21
#define EXTRA_SIZE_X  5
#define EXTRA_SIZE_Y  8

#define EXTRA_EXPANDED_START_X 1
#define EXTRA_EXPANDED_START_Y 21
#define EXTRA_EXPANDED_SIZE_X  38
#define EXTRA_EXPANDED_SIZE_Y  8

#define SIDEBAR_START_X 34
#define SIDEBAR_START_Y 1
#define SIDEBAR_SIZE_X  5
#define SIDEBAR_SIZE_Y  13

#define MAP_START_X 34
#define MAP_START_Y 15
#define MAP_SIZE_X  5
#define MAP_SIZE_Y  5

#define SONG_SONG_OFFSET_X 0
#define SONG_SONG_OFFSET_Y 0
#define SONG_SONG_SIZE_X   29
#define SONG_SONG_SIZE_Y   26

#define CHAIN_CHAIN_OFFSET_X 7
#define CHAIN_CHAIN_OFFSET_Y 19
#define CHAIN_CHAIN_SIZE_X   29
#define CHAIN_CHAIN_SIZE_Y   26

#define CHAIN_PHRASE_OFFSET_X 9
#define CHAIN_PHRASE_OFFSET_Y 0
#define CHAIN_PHRASE_SIZE_X   11
#define CHAIN_PHRASE_SIZE_Y   17

#define SONG_ROWS_ON_SCREEN 25

extern const uint8_t hex_digit[16];
extern const uint8_t note_name[9 * 12][3];

uint8_t data_get_song_chain(int32_t channel, int32_t row);
void data_set_song_chain(uint8_t chain, int32_t channel, int32_t row);
uint8_t data_get_chain_phrase(uint8_t chain, int32_t row);
void data_set_chain_phrase(uint8_t phrase, uint8_t chain, int32_t row);
uint8_t data_get_chain_transpose(uint8_t chain, int32_t row);
void data_set_chain_transpose(uint8_t transpose, uint8_t chain, int32_t row);
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
