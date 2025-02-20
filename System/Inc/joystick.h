#ifndef INC_JOYSTICK_H_
#define INC_JOYSTICK_H_

#include <stdint.h>

typedef enum {
    JOYSTICK_POSITION_CENTER,
    JOYSTICK_POSITION_UP,
    JOYSTICK_POSITION_DOWN,
    JOYSTICK_POSITION_RIGHT,
    JOYSTICK_POSITION_LEFT,
    JOYSTICK_POSITION_UPRIGHT,
    JOYSTICK_POSITION_UPLEFT,
    JOYSTICK_POSITION_DOWNRIGHT,
    JOYSTICK_POSITION_DOWNLEFT
} joystick_position_t;

void joystick_init(void);
void joystick_scan(void);
joystick_position_t joystick_get_position(void);
uint32_t is_joystick_centered(void);
uint32_t is_joystick_up(void);
uint32_t is_joystick_down(void);
uint32_t is_joystick_right(void);
uint32_t is_joystick_left(void);

#endif /* INC_JOYSTICK_H_ */
