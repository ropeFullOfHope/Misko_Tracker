#include "app.h"
#include <stdint.h>
#include "logic.h"
#include "video.h"
#include "audio.h"
#include "data.h"
#include "ticks.h"
#include "micros.h"
#include "backlight.h"
#include "lcd.h"
#include "joystick.h"
#include "sound.h"
#include "cordic_math.h"
#include "interrupt.h"

static void app_init(void);
static void app_main(void);

void app(void)
{
    app_init();

    while (1) {
        app_main();
    }
}

void app_init(void)
{
    ticks_init();
    micros_init();
    backlight_init();
    LCD_init();
    joystick_init();
    sound_init();
    cordic_init();

    for (int32_t x = 0; x < COLUMN_COUNT; x++) {
        for (int32_t y = 0; y < ROW_COUNT; y++) {
            LCD_draw(' ', COLOR_NORMAL, x, y);
        }
    }
    LCD_update_screen();

    global_interrupts_enable();
    interrupt_enable(INTERRUPT_AUDIO_UPDATE);
}

void app_main(void)
{
    logic_update();

    video_update();

    // Called by an interrupt.
    //audio_update();
}
