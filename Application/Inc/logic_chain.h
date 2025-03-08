#ifndef INC_LOGIC_CHAIN_H_
#define INC_LOGIC_CHAIN_H_

#include <stdint.h>
#include "joystick.h"

void chain_init(uint8_t pattern);
void chain_deinit(void);
void chain_move_cursor(joystick_position_t joystick_position);
void chain_insert_value(void);
void chain_delete_value(void);
void chain_change_value(joystick_position_t joystick_position);

#endif /* INC_LOGIC_CHAIN_H_ */
