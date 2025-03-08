#include "logic.h"
#include <stdbool.h>
#include "logic_song.h"
#include "logic_chain.h"
#include "data.h"
#include "ticks.h"
#include "button.h"
#include "joystick.h"

static void logic_joystick_auto_repeat(void);
static void draw_sidebar(void);
static void draw_map(void);

static bool is_joystick_triggered = false;

/* Finite State Machine definitions */
typedef enum {
    LOGIC_STATE_INIT,
    LOGIC_STATE_SONG,
    LOGIC_STATE_CHAIN,
    LOGIC_STATE_COUNT
} logic_state_t;

static logic_state_t logic_state_init(void);
static logic_state_t logic_state_song(void);
static logic_state_t logic_state_chain(void);

static logic_state_t (*logic_state_table[LOGIC_STATE_COUNT]) (void) = {
    [LOGIC_STATE_INIT]  = logic_state_init,
    [LOGIC_STATE_SONG]  = logic_state_song,
    [LOGIC_STATE_CHAIN] = logic_state_chain
};

static logic_state_t current_logic_state;
/* End of Finite State Machine definitions */

void logic_update(void)
{
    static uint32_t last_logic_update_time = 0;
    uint32_t current_time = ticks();

    if (current_time - last_logic_update_time >= CPU_FREQUENCY / ENGINE_TICK_RATE) {
        last_logic_update_time += CPU_FREQUENCY / ENGINE_TICK_RATE;

        button_scan();
        joystick_scan();

        logic_joystick_auto_repeat();

        current_logic_state = logic_state_table[current_logic_state]();
    }
}

void logic_joystick_auto_repeat(void)
{
    static int32_t joystick_delay = 0;
    static joystick_position_t previous_joystick_position = JOYSTICK_POSITION_CENTER;
    joystick_position_t current_joystick_position = joystick_get_position();

    if (current_joystick_position == JOYSTICK_POSITION_CENTER) {
        joystick_delay = 0;
        is_joystick_triggered = false;
    }
    else if (current_joystick_position != previous_joystick_position) {
        joystick_delay = data_get_setting_joystick_delay_initial();
        is_joystick_triggered = true;
    }
    else if (joystick_delay == 0){
        joystick_delay = data_get_setting_joystick_delay_repeat();
        is_joystick_triggered = true;
    }
    else {
        joystick_delay -= 1;
        is_joystick_triggered = false;
    }

    previous_joystick_position = current_joystick_position;
}

logic_state_t logic_state_init(void)
{
    song_init();
    draw_sidebar();
    draw_map();

    return LOGIC_STATE_SONG;
}

logic_state_t logic_state_song(void)
{
    if (is_button_held(BUTTON_RIGHT)) {
        if (is_joystick_triggered)
            song_change_chain(joystick_get_position()); // Hold A + Move
    }
    else if (is_button_held(BUTTON_DOWN)) {
        if (is_joystick_triggered)
            song_move_page(joystick_get_position()); // Hold B + Up/Down

        if (is_button_pressed(BUTTON_RIGHT))
            song_delete_chain(); // Hold B + A
    }
    else if (is_button_held(BUTTON_UP)) {
        if (is_joystick_triggered) {
            if (joystick_get_position() == JOYSTICK_POSITION_RIGHT) {
                if (song_get_selected_chain() != 0x00) {
                    song_deinit(); // Hold X + Right
                    chain_init(song_get_selected_chain());
                    return LOGIC_STATE_CHAIN;
                }
            }
        }

    }
    else if (is_button_held(BUTTON_LEFT)) {

    }
    else {
        if (is_joystick_triggered)
            song_move_cursor(joystick_get_position()); // Move
#if 0
        if (is_button_triple_pressed(BUTTON_RIGHT))
            ;
        else if (is_button_double_pressed(BUTTON_RIGHT))
            song_insert_new_chain(); // A + A
        else if (is_button_pressed(BUTTON_RIGHT))
            song_insert_chain(); // A
#endif
        if (is_button_pressed(BUTTON_RIGHT))
            song_insert_chain();
    }

    return LOGIC_STATE_SONG;
}

logic_state_t logic_state_chain(void)
{
    if (is_button_held(BUTTON_RIGHT)) {
        if (is_joystick_triggered)
            chain_change_value(joystick_get_position());
    }
    else if (is_button_held(BUTTON_DOWN)) {
        if (is_button_pressed(BUTTON_RIGHT))
            chain_delete_value();
    }
    else if (is_button_held(BUTTON_UP)) {
        if (is_joystick_triggered) {
            if (joystick_get_position() == JOYSTICK_POSITION_LEFT) {
                //chain_deinit();
                song_init();
                return LOGIC_STATE_SONG; // Hold X + Left
            }
        }

    }
    else if (is_button_held(BUTTON_LEFT)) {
        ;
    }
    else {
        if (is_joystick_triggered)
            chain_move_cursor(joystick_get_position());

        if (is_button_pressed(BUTTON_RIGHT))
            chain_insert_value();
    }

    return LOGIC_STATE_CHAIN;
}

void draw_sidebar(void)
{

}

void draw_map(void)
{

}
