#include <button.h>
#include "stm32g4xx_ll_gpio.h"
#include "millis.h"

#define USE_CALL_BASED_HANDLING // Comment this out to use time based handling.

#ifdef USE_CALL_BASED_HANDLING
    #define DEBOUNCING_TIME    2
    #define DOUBLE_PRESS_DELAY 12
    #define LONG_HOLD_TIME     50
#else
    #define DEBOUNCING_TIME    50
    #define DOUBLE_PRESS_DELAY 250
    #define LONG_HOLD_TIME     1000
#endif


typedef enum {
    BUTTON_STATE_IDLE,
    BUTTON_STATE_DEBOUNCING_IDLE,
    BUTTON_STATE_PRESSED,
    BUTTON_STATE_DOUBLE_PRESSED,
    BUTTON_STATE_HOLD,
    BUTTON_STATE_LONG_HOLD,
    BUTTON_STATE_DEBOUNCING_HOLD,
    BUTTON_STATE_DEBOUNCING_LONG_HOLD,
    BUTTON_STATE_RELEASED
} button_state_t;

typedef struct {
    button_state_t state;
    uint32_t hold_time;
    uint32_t last_press_time;
    uint32_t debouncing_time;
} button_status_t;

static button_status_t button_status[BUTTON_COUNT] = {0};

static const uint32_t button_pin[BUTTON_COUNT] = {0, 1, 6, 8};

void button_scan(void)
{
    uint32_t button_port = LL_GPIO_ReadInputPort(GPIOG);

#ifdef USE_CALL_BASED_HANDLING
    static uint32_t current_time = -1;
    current_time++;
#else
    uint32_t current_time = millis();
#endif

    for (button_t button = 0; button < BUTTON_COUNT; button++) {

        switch (button_status[button].state)
        {
            case BUTTON_STATE_IDLE:
                // If button is pressed, debounce.
                if (((button_port >> button_pin[button]) & 0x01) == 0) {
                    button_status[button].state = BUTTON_STATE_DEBOUNCING_IDLE;
                    button_status[button].debouncing_time = current_time;
                }
                break;

            case BUTTON_STATE_DEBOUNCING_IDLE:
                // If button is released, return to idle state.
                if (((button_port >> button_pin[button]) & 0x01) == 1)
                    button_status[button].state = BUTTON_STATE_IDLE;
                // Otherwise if debouncing delay has passed, go to next state.
                else if (current_time - button_status[button].debouncing_time >= DEBOUNCING_TIME) {
                    // Double press.
                    if (current_time - button_status[button].last_press_time <= DOUBLE_PRESS_DELAY)
                        button_status[button].state = BUTTON_STATE_DOUBLE_PRESSED;
                    // Single press.
                    else
                        button_status[button].state = BUTTON_STATE_PRESSED;
                }
                break;

            case BUTTON_STATE_PRESSED:
                button_status[button].state = BUTTON_STATE_HOLD;
                button_status[button].last_press_time = current_time;
                button_status[button].hold_time = current_time;
                break;

            case BUTTON_STATE_DOUBLE_PRESSED:
                button_status[button].state = BUTTON_STATE_HOLD;
                button_status[button].last_press_time = current_time;
                button_status[button].hold_time = current_time;
                break;

            case BUTTON_STATE_HOLD:
                // If button is released, debounce.
                if (((button_port >> button_pin[button]) & 0x01) == 1) {
                    button_status[button].state = BUTTON_STATE_DEBOUNCING_HOLD;
                    button_status[button].debouncing_time = current_time;
                }
                // Otherwise go to long held state if button is held for long enough.
                else if (current_time - button_status[button].hold_time >= LONG_HOLD_TIME)
                    button_status[button].state = BUTTON_STATE_LONG_HOLD;
                break;

            case BUTTON_STATE_LONG_HOLD:
                // If button is released, debounce.
                if (((button_port >> button_pin[button]) & 0x01) == 1) {
                    button_status[button].state = BUTTON_STATE_DEBOUNCING_LONG_HOLD;
                    button_status[button].debouncing_time = current_time;
                }
                break;

            case BUTTON_STATE_DEBOUNCING_HOLD:
                // If button is pressed, return to held state.
                if (((button_port >> button_pin[button]) & 0x01) == 0)
                    button_status[button].state = BUTTON_STATE_HOLD;
                // Otherwise if debouncing delay has passed, go to released state state.
                else if (current_time - button_status[button].debouncing_time >= DEBOUNCING_TIME) {
                    button_status[button].state = BUTTON_STATE_RELEASED;
                }
                break;

            case BUTTON_STATE_DEBOUNCING_LONG_HOLD:
                // If button is pressed, return to long hold state.
                if (((button_port >> button_pin[button]) & 0x01) == 0)
                    button_status[button].state = BUTTON_STATE_LONG_HOLD;
                // Otherwise if debouncing delay has passed, go to released state state.
                else if (current_time - button_status[button].debouncing_time >= DEBOUNCING_TIME) {
                    button_status[button].state = BUTTON_STATE_RELEASED;
                }
                break;

            case BUTTON_STATE_RELEASED:
                button_status[button].state = BUTTON_STATE_IDLE;
                break;
        }
    }
}

bool is_button_idle(button_t button)
{
    if (button >= BUTTON_COUNT)
        return false;

    button_state_t state = button_status[button].state;

    if (state == BUTTON_STATE_IDLE ||
        state == BUTTON_STATE_DEBOUNCING_IDLE)
    {
        return true;
    }
    else
        return false;
}

bool is_button_held(button_t button)
{
    if (button >= BUTTON_COUNT)
        return false;

    button_state_t state = button_status[button].state;

    if (state == BUTTON_STATE_HOLD ||
        state == BUTTON_STATE_LONG_HOLD ||
        state == BUTTON_STATE_DEBOUNCING_HOLD ||
        state == BUTTON_STATE_DEBOUNCING_LONG_HOLD)
    {
        return true;
    }
    else
        return false;
}

bool is_button_long_held(button_t button)
{
    if (button >= BUTTON_COUNT)
        return false;

    button_state_t state = button_status[button].state;

    if (state == BUTTON_STATE_LONG_HOLD ||
        state == BUTTON_STATE_DEBOUNCING_LONG_HOLD)
    {
        return true;
    }
    else
        return false;
}

bool is_button_pressed(button_t button)
{
    if (button >= BUTTON_COUNT)
        return false;

    button_state_t state = button_status[button].state;

    if (state == BUTTON_STATE_PRESSED ||
        state == BUTTON_STATE_DOUBLE_PRESSED)
    {
        return true;
    }
    else
        return false;
}

bool is_button_double_pressed(button_t button)
{
    if (button >= BUTTON_COUNT)
        return false;

    button_state_t state = button_status[button].state;

    if (state == BUTTON_STATE_DOUBLE_PRESSED)
        return true;
    else
        return false;
}

bool is_button_released(button_t button)
{
    if (button >= BUTTON_COUNT)
        return false;

    button_state_t state = button_status[button].state;

    if (state == BUTTON_STATE_RELEASED)
        return true;
    else
        return false;
}

bool is_button_debouncing(button_t button)
{
    if (button >= BUTTON_COUNT)
        return false;

    button_state_t state = button_status[button].state;

    if (state == BUTTON_STATE_DEBOUNCING_IDLE ||
        state == BUTTON_STATE_DEBOUNCING_HOLD ||
        state == BUTTON_STATE_DEBOUNCING_LONG_HOLD)
    {
        return true;
    }
    else
        return false;
}
