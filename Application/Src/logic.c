#include "logic.h"
#include <stdbool.h>
#include "logic_song.h"
#include "logic_chain.h"
#include "logic_phrase.h"
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
    LOGIC_STATE_PHRASE,
    LOGIC_STATE_INSTRUMENT,
    LOGIC_STATE_PROJECT,
    LOGIC_STATE_GROOVE,
    LOGIC_STATE_COUNT
} logic_state_t;

static logic_state_t logic_state_init(void);
static logic_state_t logic_state_song(void);
static logic_state_t logic_state_chain(void);
static logic_state_t logic_state_phrase(void);
static logic_state_t logic_state_instrument(void);
static logic_state_t logic_state_project(void);
static logic_state_t logic_state_groove(void);

static logic_state_t (*logic_state_table[LOGIC_STATE_COUNT]) (void) = {
    [LOGIC_STATE_INIT]       = logic_state_init,
    [LOGIC_STATE_SONG]       = logic_state_song,
    [LOGIC_STATE_CHAIN]      = logic_state_chain,
    [LOGIC_STATE_PHRASE]     = logic_state_phrase,
    [LOGIC_STATE_INSTRUMENT] = logic_state_instrument,
    [LOGIC_STATE_PROJECT]    = logic_state_project,
    [LOGIC_STATE_GROOVE]     = logic_state_groove
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
    const joystick_position_t CURRENT_JOYSTICK_POSITION = joystick_get_position();

    if (CURRENT_JOYSTICK_POSITION == JOYSTICK_POSITION_CENTER) {
        joystick_delay = 0;
        is_joystick_triggered = false;
    }
    else if (CURRENT_JOYSTICK_POSITION != previous_joystick_position) {
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

    previous_joystick_position = CURRENT_JOYSTICK_POSITION;
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
    const joystick_position_t JOYSTICK_POSITION = joystick_get_position();

    // Hold A
    if (is_button_held(BUTTON_RIGHT)) {
        // Hold A + Move : Change the value of the selected chain.
        if (is_joystick_triggered)
            song_change_chain(JOYSTICK_POSITION);

        return LOGIC_STATE_SONG;
    }

    // Hold B
    if (is_button_held(BUTTON_DOWN)) {
        // Hold B + Up/Down : Move page up/down.
        if (is_joystick_triggered)
            song_move_page(JOYSTICK_POSITION);

        // Hold B + A : Delete selected chain.
        if (is_button_pressed(BUTTON_RIGHT))
            song_delete_chain();

        return LOGIC_STATE_SONG;
    }

    // Hold X
    if (is_button_held(BUTTON_UP)) {
        // Hold X + Move
        if (is_joystick_triggered) {
            switch (JOYSTICK_POSITION) {
                // Hold X + Right : Edit selected phrase.
                case JOYSTICK_POSITION_RIGHT: {
                    uint8_t SELECTED_CHAIN = song_get_selected_chain();

                    if (SELECTED_CHAIN == 0x00)
                        return LOGIC_STATE_SONG;

                    song_deinit();
                    chain_init(SELECTED_CHAIN);

                    return LOGIC_STATE_CHAIN;
                    break;
                }

                // Hold X + Up : Go to project screen.
                case JOYSTICK_POSITION_UP:
                    song_deinit();
                    //project_init();

                    return LOGIC_STATE_PROJECT;
                    break;

                // Hold X + Down : Edit groove.
                case JOYSTICK_POSITION_DOWN:
                    song_deinit();
                    //groove_init();

                    return LOGIC_STATE_GROOVE;
                    break;

                default:
                    break;
            }
        }

        return LOGIC_STATE_SONG;
    }

    // Hold Y
    if (is_button_held(BUTTON_LEFT)) {
        return LOGIC_STATE_SONG;
    }

    // Move : Move cursor.
    if (is_joystick_triggered)
        song_move_cursor(JOYSTICK_POSITION);

    // A + A : Insert new chain.
    //if (is_button_double_pressed(BUTTON_RIGHT))
    //    song_insert_new_chain();

    // A : Insert chain.
    else if (is_button_pressed(BUTTON_RIGHT))
        song_insert_chain();

    return LOGIC_STATE_SONG;
}

logic_state_t logic_state_chain(void)
{
    const joystick_position_t JOYSTICK_POSITION = joystick_get_position();

    // Hold A
    if (is_button_held(BUTTON_RIGHT)) {
        // Hold A + Move : Change the value of the selected phrase/transpose.
        if (is_joystick_triggered)
            chain_change_value(JOYSTICK_POSITION);

        return LOGIC_STATE_CHAIN;
    }

    // Hold B
    if (is_button_held(BUTTON_DOWN)) {
        // Hold B + A : Delete selected phrase/transpose.
        if (is_button_pressed(BUTTON_RIGHT))
            chain_delete_value();

        return LOGIC_STATE_CHAIN;
    }

    // Hold X
    if (is_button_held(BUTTON_UP)) {
        // Hold X + Move
        if (is_joystick_triggered) {
            switch (JOYSTICK_POSITION) {
                // Hold X + Right : Edit selected phrase.
                case JOYSTICK_POSITION_RIGHT: {
                    uint8_t SELECTED_PHRASE = chain_get_selected_phrase();

                    if (SELECTED_PHRASE == 0x00)
                        return LOGIC_STATE_CHAIN;

                    chain_deinit();
                    phrase_init(SELECTED_PHRASE);

                    return LOGIC_STATE_PHRASE;
                    break;
                }

                // Hold X + Left : Go back to song screen.
                case JOYSTICK_POSITION_LEFT:
                    chain_deinit();
                    song_init();

                    return LOGIC_STATE_SONG;
                    break;

                // Hold X + Up : Go to project screen.
                case JOYSTICK_POSITION_UP:
                    chain_deinit();
                    //project_init();

                    return LOGIC_STATE_PROJECT;
                    break;

                // Hold X + Down : Edit groove.
                case JOYSTICK_POSITION_DOWN:
                    chain_deinit();
                    //groove_init();

                    return LOGIC_STATE_GROOVE;
                    break;

                default:
                    break;
            }
        }

        return LOGIC_STATE_CHAIN;
    }

    // Hold Y
    if (is_button_held(BUTTON_LEFT)) {
        return LOGIC_STATE_CHAIN;
    }

    // Move : Move cursor.
    if (is_joystick_triggered)
        chain_move_cursor(JOYSTICK_POSITION);

    // A : Insert phrase/transpose.
    if (is_button_pressed(BUTTON_RIGHT))
        chain_insert_value();

    return LOGIC_STATE_CHAIN;
}

logic_state_t logic_state_phrase(void)
{
    const joystick_position_t JOYSTICK_POSITION = joystick_get_position();

    // Hold A
    if (is_button_held(BUTTON_RIGHT)) {
        // Hold A + Move : Change the value of the selected note/instrument/volume/command/parameter.
        if (is_joystick_triggered)
            phrase_change_value(JOYSTICK_POSITION);

        return LOGIC_STATE_PHRASE;
    }

    // Hold B
    if (is_button_held(BUTTON_DOWN)) {
        // Hold B + A : Delete selected note/instrument/volume/command/parameter.
        if (is_button_pressed(BUTTON_RIGHT))
            phrase_delete_value();

        return LOGIC_STATE_PHRASE;
    }

    // Hold X
    if (is_button_held(BUTTON_UP)) {
        // Hold X + Move
        if (is_joystick_triggered) {
            switch (JOYSTICK_POSITION) {
                // Hold X + Right : Edit selected instrument.
                case JOYSTICK_POSITION_RIGHT: {
                    uint8_t SELECTED_INSTRUMENT = phrase_get_selected_instrument();

                    if (SELECTED_INSTRUMENT == 0x00)
                        break;

                    phrase_deinit();
                    //instrument_init(SELECTED_INSTRUMENT);

                    return LOGIC_STATE_INSTRUMENT;
                    break;
                }

                // Hold X + Left : Go back to chain screen.
                case JOYSTICK_POSITION_LEFT: {
                    uint8_t SELECTED_CHAIN = song_get_selected_chain();

                    if (SELECTED_CHAIN == 0x00)
                        break;

                    phrase_deinit();
                    chain_init(SELECTED_CHAIN);

                    return LOGIC_STATE_CHAIN;
                    break;
                }

                // Hold X + Up : Go to project screen.
                case JOYSTICK_POSITION_UP:
                    phrase_deinit();
                    //project_init();

                    return LOGIC_STATE_PROJECT;
                    break;

                // Hold X + Down : Edit groove.
                case JOYSTICK_POSITION_DOWN:
                    phrase_deinit();
                    //groove_init();

                    return LOGIC_STATE_GROOVE;
                    break;

                default:
                    break;
            }
        }

        return LOGIC_STATE_PHRASE;
    }

    // Hold Y
    if (is_button_held(BUTTON_LEFT)) {
        return LOGIC_STATE_PHRASE;
    }

    // Move : Move cursor.
    if (is_joystick_triggered)
        phrase_move_cursor(JOYSTICK_POSITION);

    // A : Insert note/instrument/volume/command/parameter.
    if (is_button_pressed(BUTTON_RIGHT))
        phrase_insert_value();

    return LOGIC_STATE_PHRASE;
}

logic_state_t logic_state_instrument(void)
{
    return LOGIC_STATE_INSTRUMENT;
}

logic_state_t logic_state_project(void)
{
    return LOGIC_STATE_PROJECT;
}

logic_state_t logic_state_groove(void)
{
    return LOGIC_STATE_GROOVE;
}

void draw_sidebar(void)
{

}

void draw_map(void)
{

}
