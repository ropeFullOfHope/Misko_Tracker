#include "button.h"
#include "stm32g4xx_ll_gpio.h"
#include "millis.h"

#define USE_CALL_BASED_HANDLING // Comment this out to use time based handling.

#ifdef USE_CALL_BASED_HANDLING
    #define DEBOUNCING_TIME    3
    #define DOUBLE_PRESS_DELAY 15
    #define LONG_HOLD_TIME     60
#else
    #define DEBOUNCING_TIME    50
    #define DOUBLE_PRESS_DELAY 250
    #define LONG_HOLD_TIME     1000
#endif

/* Finite State Machine definitions */
typedef enum {
    BUTTON_STATE_IDLE,
    BUTTON_STATE_DEBOUNCING_IDLE,
    BUTTON_STATE_PRESS,
    BUTTON_STATE_DOUBLE_PRESS,
    BUTTON_STATE_TRIPLE_PRESS,
    BUTTON_STATE_HOLD,
    BUTTON_STATE_LONG_HOLD,
    BUTTON_STATE_DEBOUNCING_HOLD,
    BUTTON_STATE_DEBOUNCING_LONG_HOLD,
    BUTTON_STATE_RELEASE,
    BUTTON_STATE_MAX
} button_state_t;

static button_state_t button_state_idle(button_t button);
static button_state_t button_state_debouncing_idle(button_t button);
static button_state_t button_state_press(button_t button);
static button_state_t button_state_double_press(button_t button);
static button_state_t button_state_triple_press(button_t button);
static button_state_t button_state_hold(button_t button);
static button_state_t button_state_long_hold(button_t button);
static button_state_t button_state_debouncing_hold(button_t button);
static button_state_t button_state_debouncing_long_hold(button_t button);
static button_state_t button_state_release(button_t button);

static button_state_t (*button_state_table[BUTTON_STATE_MAX]) (button_t) = {
    [BUTTON_STATE_IDLE]                 = button_state_idle,
    [BUTTON_STATE_DEBOUNCING_IDLE]      = button_state_debouncing_idle,
    [BUTTON_STATE_PRESS]                = button_state_press,
    [BUTTON_STATE_DOUBLE_PRESS]         = button_state_double_press,
    [BUTTON_STATE_TRIPLE_PRESS]         = button_state_triple_press,
    [BUTTON_STATE_HOLD]                 = button_state_hold,
    [BUTTON_STATE_LONG_HOLD]            = button_state_long_hold,
    [BUTTON_STATE_DEBOUNCING_HOLD]      = button_state_debouncing_hold,
    [BUTTON_STATE_DEBOUNCING_LONG_HOLD] = button_state_debouncing_long_hold,
    [BUTTON_STATE_RELEASE]              = button_state_release
};
/* End of Finite State Machine definitions */

typedef struct {
    button_state_t state;
    uint32_t hold_time;
    uint32_t last_single_press_time;
    uint32_t last_double_press_time;
    uint32_t debouncing_time;
} button_status_t;

static button_status_t button_status[BUTTON_COUNT] = {0};
static uint32_t button_port;
static uint32_t current_time = 0xFFFFFFFF;

static const uint32_t button_pin[BUTTON_COUNT] = {0, 1, 6, 8};

void button_scan(void)
{
    button_port = LL_GPIO_ReadInputPort(GPIOG);

#ifdef USE_CALL_BASED_HANDLING
    current_time += 1;
#else
    current_time = millis();
#endif

    for (button_t button = 0; button < BUTTON_COUNT; button++)
        button_status[button].state = button_state_table[button_status[button].state](button);
}

button_state_t button_state_idle(button_t button)
{
    // If button is pressed, debounce.
    if (((button_port >> button_pin[button]) & 0x01) == 0) {
        button_status[button].debouncing_time = current_time;

        return BUTTON_STATE_DEBOUNCING_IDLE;
    }

    return BUTTON_STATE_IDLE;
}

button_state_t button_state_debouncing_idle(button_t button)
{
    // If button is released, return to idle state.
    if (((button_port >> button_pin[button]) & 0x01) == 1)
        return BUTTON_STATE_IDLE;
    // Otherwise if debouncing delay has passed, go to next state.
    else if (current_time - button_status[button].debouncing_time >= DEBOUNCING_TIME) {
        // Triple press.
        if (current_time - button_status[button].last_double_press_time <= DOUBLE_PRESS_DELAY)
            return BUTTON_STATE_TRIPLE_PRESS;
        // Double press.
        else if (current_time - button_status[button].last_single_press_time <= DOUBLE_PRESS_DELAY)
            return BUTTON_STATE_DOUBLE_PRESS;
        // Single press.
        else
            return BUTTON_STATE_PRESS;
    }

    return BUTTON_STATE_DEBOUNCING_IDLE;
}

button_state_t button_state_press(button_t button)
{
    button_status[button].last_single_press_time = current_time;
    button_status[button].hold_time = current_time;

    // If button is released, debounce.
    if (((button_port >> button_pin[button]) & 0x01) == 1) {
        button_status[button].debouncing_time = current_time;

        return BUTTON_STATE_DEBOUNCING_HOLD;
    }

    return BUTTON_STATE_HOLD;
}

button_state_t button_state_double_press(button_t button)
{
    button_status[button].last_single_press_time = current_time - DOUBLE_PRESS_DELAY;
    button_status[button].last_double_press_time = current_time;
    button_status[button].hold_time = current_time;

    // If button is released, debounce.
    if (((button_port >> button_pin[button]) & 0x01) == 1) {
        button_status[button].debouncing_time = current_time;

        return BUTTON_STATE_DEBOUNCING_HOLD;
    }

    return BUTTON_STATE_HOLD;
}

button_state_t button_state_triple_press(button_t button)
{
    button_status[button].last_double_press_time = current_time - DOUBLE_PRESS_DELAY;
    button_status[button].hold_time = current_time;

    // If button is released, debounce.
    if (((button_port >> button_pin[button]) & 0x01) == 1) {
        button_status[button].debouncing_time = current_time;

        return BUTTON_STATE_DEBOUNCING_HOLD;
    }

    return BUTTON_STATE_HOLD;
}

button_state_t button_state_hold(button_t button)
{
    // If button is released, debounce.
    if (((button_port >> button_pin[button]) & 0x01) == 1) {
        button_status[button].debouncing_time = current_time;

        return BUTTON_STATE_DEBOUNCING_HOLD;
    }
    // Otherwise go to long held state if button is held for long enough.
    else if (current_time - button_status[button].hold_time >= LONG_HOLD_TIME)
        return BUTTON_STATE_LONG_HOLD;

    return BUTTON_STATE_HOLD;
}

button_state_t button_state_long_hold(button_t button)
{
    // If button is released, debounce.
    if (((button_port >> button_pin[button]) & 0x01) == 1) {
        button_status[button].debouncing_time = current_time;

        return BUTTON_STATE_DEBOUNCING_LONG_HOLD;
    }

    return BUTTON_STATE_LONG_HOLD;
}

button_state_t button_state_debouncing_hold(button_t button)
{
    // If button is pressed, return to held state.
    if (((button_port >> button_pin[button]) & 0x01) == 0)
        return BUTTON_STATE_HOLD;
    // Otherwise if debouncing delay has passed, go to released state state.
    else if (current_time - button_status[button].debouncing_time >= DEBOUNCING_TIME) {
        return BUTTON_STATE_RELEASE;
    }

    return BUTTON_STATE_DEBOUNCING_HOLD;
}

button_state_t button_state_debouncing_long_hold(button_t button)
{
    // If button is pressed, return to long hold state.
    if (((button_port >> button_pin[button]) & 0x01) == 0)
        return BUTTON_STATE_LONG_HOLD;
    // Otherwise if debouncing delay has passed, go to released state state.
    else if (current_time - button_status[button].debouncing_time >= DEBOUNCING_TIME) {
        return BUTTON_STATE_RELEASE;
    }

    return BUTTON_STATE_DEBOUNCING_LONG_HOLD;
}

button_state_t button_state_release(button_t button)
{
    // If button is pressed, debounce.
    if (((button_port >> button_pin[button]) & 0x01) == 0) {
        button_status[button].debouncing_time = current_time;

        return BUTTON_STATE_DEBOUNCING_IDLE;
    }

    return BUTTON_STATE_IDLE;
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

    if (state == BUTTON_STATE_PRESS ||
        state == BUTTON_STATE_DOUBLE_PRESS)
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

    if (state == BUTTON_STATE_DOUBLE_PRESS)
        return true;
    else
        return false;
}

bool is_button_triple_pressed(button_t button)
{
    if (button >= BUTTON_COUNT)
        return false;

    button_state_t state = button_status[button].state;

    if (state == BUTTON_STATE_TRIPLE_PRESS)
        return true;
    else
        return false;
}

bool is_button_released(button_t button)
{
    if (button >= BUTTON_COUNT)
        return false;

    button_state_t state = button_status[button].state;

    if (state == BUTTON_STATE_RELEASE)
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
