#include "app.h"
#include <stdint.h>
#include "logic.h"
#include "video.h"
#include "audio.h"
#include "data.h"
#include "ticks.h"
#include "millis.h"
#include "backlight.h"
#include "lcd.h"
#include "joystick.h"
#include "sound.h"

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
    millis_init();
    backlight_init();
    LCD_init();
    joystick_init();
    sound_init();

    for (uint32_t x = 0; x < COLUMN_COUNT; x++) {
        for (uint32_t y = 0; y < ROW_COUNT; y++) {
            LCD_draw(' ', x, y, COLOR_NORMAL);
        }
    }
    LCD_update_screen();
}

void app_main(void)
{
    static uint32_t last_logic_update_time = 0;
    uint32_t current_time = ticks();

    if (current_time - last_logic_update_time >= CPU_FREQUENCY / ENGINE_TICK_RATE) {
        last_logic_update_time = current_time;

        logic_update();
    }

    video_update();

    audio_update();
}
