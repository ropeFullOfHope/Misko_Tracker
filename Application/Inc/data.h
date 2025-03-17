#ifndef INC_DATA_H_
#define INC_DATA_H_

#include <stdint.h>
#include "data_notes.h"
#include "data_commands.h"
#include "lcd.h"

#define ENGINE_TICK_RATE 60

#define CHANNEL_COUNT    8
#define SONG_ROW_COUNT   256
#define CHAIN_COUNT      127
#define CHAIN_ROW_COUNT  16
#define PHRASE_COUNT     255
#define PHRASE_ROW_COUNT 16
#define INSTRUMENT_COUNT 127
#define COMMANDS_PER_ROW 3

typedef uint8_t chain_id_t;
typedef uint8_t phrase_id_t;
typedef uint8_t transpose_t;
typedef uint8_t note_t;
typedef uint8_t instrument_id_t;
typedef uint8_t volume_t;
typedef uint8_t command_id_t;
typedef uint8_t parameter_t;

chain_id_t data_get_song_chain(int32_t channel, int32_t row);
void data_set_song_chain(chain_id_t chain, int32_t channel, int32_t row);
phrase_id_t data_get_chain_phrase(chain_id_t chain, int32_t row);
void data_set_chain_phrase(phrase_id_t phrase, chain_id_t chain, int32_t row);
transpose_t data_get_chain_transpose(chain_id_t chain, int32_t row);
void data_set_chain_transpose(transpose_t transpose, chain_id_t chain, int32_t row);
note_t data_get_phrase_note(phrase_id_t phrase, int32_t row);
void data_set_phrase_note(note_t note, phrase_id_t phrase, int32_t row);
instrument_id_t data_get_phrase_instrument(phrase_id_t phrase, int32_t row);
void data_set_phrase_instrument(instrument_id_t instrument, phrase_id_t phrase, int32_t row);
volume_t data_get_phrase_volume(phrase_id_t phrase, int32_t row);
void data_set_phrase_volume(volume_t volume, phrase_id_t phrase, int32_t row);
command_id_t data_get_phrase_command(int32_t command_number, phrase_id_t phrase, int32_t row);
void data_set_phrase_command(command_id_t command, int32_t command_number, phrase_id_t phrase, int32_t row);
parameter_t data_get_phrase_parameter(int32_t command_number, phrase_id_t phrase, int32_t row);
void data_set_phrase_parameter(parameter_t parameter, int32_t command_number, phrase_id_t phrase, int32_t row);

int32_t data_get_setting_joystick_delay_initial (void);
void data_set_setting_joystick_delay_initial (int32_t delay);
int32_t data_get_setting_joystick_delay_repeat (void);
void data_set_setting_joystick_delay_repeat (int32_t delay);

#endif /* INC_DATA_H_ */
