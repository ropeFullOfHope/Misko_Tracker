#ifndef INC_LOGIC_SONG_H_
#define INC_LOGIC_SONG_H_

#include <stdint.h>
#include "joystick.h"

void song_init(void);
void song_move_cursor(joystick_position_t joystick_position);
void song_move_page(joystick_position_t joystick_position);
void song_insert_pattern();
void song_insert_new_pattern(void);
void song_delete_pattern(void);
void song_change_pattern(joystick_position_t joystick_position);
uint32_t song_get_selected_pattern(void);

#endif /* INC_LOGIC_SONG_H_ */
