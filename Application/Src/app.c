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
#include "cordic_math.h"
#include "volume.h"
#include "file_manager.h"

#include "stm32g4xx_ll_spi.h"
#include "stm32g4xx_ll_dma.h"
#include "sd.h"
#include "LED.h"
#include "ff.h"
#include "basic_utils.h"

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
    cordic_init();
    volume_init();
    fmanager_init();
}

void app_main(void)
{
    logic_update();

    video_update();

    // Called by an interrupt.
    //audio_update();
}
