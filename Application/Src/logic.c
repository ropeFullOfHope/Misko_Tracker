#include "logic.h"
#include "logic_song.h"
#include "button.h"
#include "joystick.h"

static void draw_sidebar(void);
static void draw_map(void);

/* Finite State Machine definitions */
typedef enum {
    LOGIC_STATE_SONG_INIT,
    LOGIC_STATE_SONG_MAIN,
    LOGIC_STATE_MAX
} logic_state_t;

static logic_state_t logic_state_song_init(void);
static logic_state_t logic_state_song_main(void);

static logic_state_t (*logic_state_table[LOGIC_STATE_MAX]) (void) = {
    [LOGIC_STATE_SONG_INIT] = logic_state_song_init,
    [LOGIC_STATE_SONG_MAIN] = logic_state_song_main
};

static logic_state_t current_logic_state;
/* End of Finite State Machine definitions */

void logic_update(void)
{
    button_scan();
    joystick_scan();

    current_logic_state = logic_state_table[current_logic_state]();
}

logic_state_t logic_state_song_init(void)
{
    song_draw_title();
    song_draw_chart();
    song_highlight_column();
    song_highlight_row();
    song_highlight_cursor();
    draw_sidebar();
    draw_map();

    return LOGIC_STATE_SONG_MAIN;
}

logic_state_t logic_state_song_main(void)
{
    return LOGIC_STATE_SONG_MAIN;
}

void draw_sidebar(void)
{

}

void draw_map(void)
{

}
