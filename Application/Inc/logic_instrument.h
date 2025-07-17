#ifndef INC_LOGIC_INSTRUMENT_H_
#define INC_LOGIC_INSTRUMENT_H_

#include <stdint.h>
#include "data.h"
#include "joystick.h"

void instrument_init(instrument_id_t instrument);
void instrument_deinit(void);
void instrument_move_cursor(joystick_position_t joystick_position);
void instrument_change_value(joystick_position_t joystick_position);

#endif /* INC_LOGIC_INSTRUMENT_H_ */
