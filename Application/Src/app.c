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

#include "stm32g4xx_ll_spi.h"
#include "sd.h"
#include "LED.h"
#include "volume.h"

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
    // SD
    switch (sd_init()) {
        case 0:
            LED_write(0xFF);
            break;
        case 1:
            LED_write(0x01);
            break;
        case 2:
            LED_write(0x02);
            break;
        case 3:
            LED_write(0x04);
            break;
        default:
            LED_write(0x08);
            break;
    }

    delay_micros(1000000);

    // DAC
    /*
    for (int32_t i = 0; i < 440 * 2; i++) {
        for (int32_t j = 0; j < 55 * 2; j++) {
            while (!LL_I2S_IsActiveFlag_TXE(SPI3));
            LL_I2S_TransmitData16(SPI3, (uint16_t) -32768);
        }
        for (int32_t j = 0; j < 55 * 2; j++) {
            while (!LL_I2S_IsActiveFlag_TXE(SPI3));
            LL_I2S_TransmitData16(SPI3, (uint16_t) 32767);
        }
    }

    for (int32_t i = 0; i < 880 * 2; i++) {
        for (int32_t j = 0; j < 28 * 2; j++) {
            while (!LL_I2S_IsActiveFlag_TXE(SPI3));
            LL_I2S_TransmitData16(SPI3, (uint16_t) -32768);
        }
        for (int32_t j = 0; j < 28 * 2; j++) {
            while (!LL_I2S_IsActiveFlag_TXE(SPI3));
            LL_I2S_TransmitData16(SPI3, (uint16_t) 32767);
        }
    }

    for (int32_t i = 0; i < 1760 * 2; i++) {
        for (int32_t j = 0; j < 14 * 2; j++) {
            while (!LL_I2S_IsActiveFlag_TXE(SPI3));
            LL_I2S_TransmitData16(SPI3, (uint16_t) -32768);
        }
        for (int32_t j = 0; j < 14 * 2; j++) {
            while (!LL_I2S_IsActiveFlag_TXE(SPI3));
            LL_I2S_TransmitData16(SPI3, (uint16_t) 32767);
        }
    }
    */

    // Volume
    /*
    volume_set(0x00);
    LED_write(0x00);
    delay_micros(1000000);

    volume_set(0xFF);
    LED_write(0xFF);
    delay_micros(1000000);
    */

    // Main Program
    /*
    logic_update();

    video_update();

    // Called by an interrupt.
    audio_update();
    */
}
