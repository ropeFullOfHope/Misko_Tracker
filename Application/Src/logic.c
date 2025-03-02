#include "logic.h"
#include <stdbool.h>
#include "logic_song.h"
#include "data.h"
#include "button.h"
#include "joystick.h"

static void logic_joystick_auto_repeat(void);
static void draw_sidebar(void);
static void draw_map(void);

static bool is_joystick_triggered = false;

/* Finite State Machine definitions */
typedef enum {
    LOGIC_STATE_SONG_INIT,
    LOGIC_STATE_SONG_MAIN,
    LOGIC_STATE_PATTERN_INIT,
    LOGIC_STATE_MAX
} logic_state_t;

static logic_state_t logic_state_song_init(void);
static logic_state_t logic_state_song_main(void);
static logic_state_t logic_state_pattern_init(void);

static logic_state_t (*logic_state_table[LOGIC_STATE_MAX]) (void) = {
    [LOGIC_STATE_SONG_INIT]    = logic_state_song_init,
    [LOGIC_STATE_SONG_MAIN]    = logic_state_song_main,
    [LOGIC_STATE_PATTERN_INIT] = logic_state_pattern_init
};

static logic_state_t current_logic_state;
/* End of Finite State Machine definitions */

void logic_update(void)
{
    button_scan();
    joystick_scan();

    logic_joystick_auto_repeat();

    current_logic_state = logic_state_table[current_logic_state]();
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

logic_state_t logic_state_song_init(void)
{
    song_draw_title();
    song_draw_all();
    draw_sidebar();
    draw_map();

    return LOGIC_STATE_SONG_MAIN;
}

logic_state_t logic_state_song_main(void)
{
    if (is_button_held(BUTTON_RIGHT)) {
        if (is_joystick_triggered)
            song_change_pattern(joystick_get_position()); // Hold A + Move
    }
    else if (is_button_held(BUTTON_DOWN)) {
        if (is_joystick_triggered)
            song_move_page(joystick_get_position()); // Hold B + Up/Down

        if (is_button_pressed(BUTTON_RIGHT))
            song_delete_pattern(); // Hold B + A
    }
    else if (is_button_held(BUTTON_UP)) {
        if (is_joystick_triggered)
            if (joystick_get_position() == JOYSTICK_POSITION_RIGHT)
                if (song_get_selected_pattern() != 0x00)
                    return LOGIC_STATE_PATTERN_INIT; // Hold X + Right
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
            song_insert_new_pattern(); // A + A
        else if (is_button_pressed(BUTTON_RIGHT))
            song_insert_pattern(); // A
#endif
        if (is_button_pressed(BUTTON_RIGHT))
            song_insert_pattern();
    }

    return LOGIC_STATE_SONG_MAIN;
}

logic_state_t logic_state_pattern_init(void)
{
    return LOGIC_STATE_SONG_MAIN;
}

void draw_sidebar(void)
{

}

void draw_map(void)
{

}
