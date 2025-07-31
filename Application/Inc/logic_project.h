#ifndef INC_LOGIC_PROJECT_H_
#define INC_LOGIC_PROJECT_H_

#include "joystick.h"

void project_init(void);
void project_deinit(void);
void project_move_cursor(joystick_position_t joystick_position);

#endif /* INC_LOGIC_PROJECT_H_ */
