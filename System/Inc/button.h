#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include <stdbool.h>

typedef enum {
    BUTTON_UP,
    BUTTON_DOWN,
    BUTTON_LEFT,
    BUTTON_RIGHT,
    BUTTON_COUNT
} button_t;

void button_scan(void);
bool is_button_idle(button_t button);
bool is_button_held(button_t button);
bool is_button_long_held(button_t button);
bool is_button_pressed(button_t button);
bool is_button_double_pressed(button_t button);
bool is_button_released(button_t button);
bool is_button_debouncing(button_t button);

#endif /* INC_BUTTON_H_ */
