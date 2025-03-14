#ifndef INC_LOGIC_CHAIN_H_
#define INC_LOGIC_CHAIN_H_

#include <stdint.h>
#include "data.h"
#include "joystick.h"

void chain_init(chain_id_t chain);
void chain_deinit(void);
void chain_move_cursor(joystick_position_t joystick_position);
void chain_insert_value(void);
void chain_delete_value(void);
void chain_change_value(joystick_position_t joystick_position);
phrase_id_t chain_get_selected_phrase(void);

#endif /* INC_LOGIC_CHAIN_H_ */
