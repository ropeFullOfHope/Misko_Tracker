#include "logic.h"
#include "button.h"
#include "joystick.h"

typedef enum {
    LOGIC_STATE_SONG_INIT,
    LOGIC_STATE_SONG_MAIN,
    LOGIC_STATE_MAX
} logic_state_t;

static logic_state_t song_init(void);
static logic_state_t song_main(void);

static logic_state_t (*logic_state_table[LOGIC_STATE_MAX]) (void) = {
    [LOGIC_STATE_SONG_INIT] = song_init,
    [LOGIC_STATE_SONG_MAIN] = song_main
};

static logic_state_t current_logic_state;

void logic_update(void)
{
    button_scan();
    joystick_scan();

    current_logic_state = logic_state_table[current_logic_state]();
}

logic_state_t song_init(void)
{


    return LOGIC_STATE_SONG_MAIN;
}

logic_state_t song_main(void)
{
    return LOGIC_STATE_SONG_MAIN;
}
