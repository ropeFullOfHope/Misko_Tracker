#ifndef INC_LOGIC_PHRASE_H_
#define INC_LOGIC_PHRASE_H_

#include <stdint.h>
#include "joystick.h"

void phrase_init(uint8_t phrase);
void phrase_deinit(void);
void phrase_move_cursor(joystick_position_t joystick_position);
void phrase_insert_value(void);
void phrase_delete_value(void);
void phrase_change_value(joystick_position_t joystick_position);
uint8_t phrase_get_selected_instrument(void);

#endif /* INC_LOGIC_PHRASE_H_ */
