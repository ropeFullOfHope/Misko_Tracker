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
#include "interrupt.h"

#include "stm32g4xx_ll_spi.h"
#include "stm32g4xx_ll_dma.h"
#include "sd.h"
#include "LED.h"
#include "volume.h"
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

    /*
    // DMA + DAC
    const uint32_t SAMPLE_RATE = 48000;
    const uint32_t TONE_FREQ   = 220;
    const uint32_t SAMPLE_SIZE = (SAMPLE_RATE / TONE_FREQ) * 2;


    uint16_t sample_data[SAMPLE_SIZE];
    for (uint32_t i = 0; i < SAMPLE_SIZE; i += 2) {
        sample_data[i] = 0xFFFF * i / (SAMPLE_SIZE - 2);
        sample_data[i + 1] = sample_data[i];
    }
    LL_DMA_SetMemoryAddress(DMA2, LL_DMA_CHANNEL_1, (uint32_t)sample_data);
    LL_DMA_SetDataLength(DMA2, LL_DMA_CHANNEL_1, SAMPLE_SIZE);

    LL_DMA_EnableChannel(DMA2, LL_DMA_CHANNEL_1);
    LL_I2S_EnableDMAReq_TX(SPI3);
    LL_I2S_Enable(SPI3);

    while (1);
    */

    /*
    // FatFS
    FATFS fs;
    FIL file;
    FRESULT fr;
    char buffer[64];

    // Mount filesystem
    fr = f_mount(&fs, "", 1);
    if (fr != FR_OK) {
        LED_write(fr);
        return;
    }

    // Open file
    fr = f_open(&file, "test.txt", FA_READ);
    if (fr != FR_OK) {
        LED_write(0x40 | fr);
        return;
    }

    // Read data
    UINT bytesRead;
    fr = f_read(&file, buffer, sizeof(buffer) - 1, &bytesRead);
    if (fr != FR_OK) {
        LED_write(0x80 | fr);
        f_close(&file);
        return;
    }

    // Null-terminate and show on LCD
    buffer[bytesRead] = '\0';
    for (uint32_t i = 0; buffer[i] != '\0'; i++)
        LCD_draw(buffer[i], COLOR_DARK, i, 8);
    LCD_update_screen();
    f_close(&file);
    f_mount(0, "", 0);  // Unmount
    LED_write(0x00);

    delay_micros(1000000);
    */

    // SD
    /*
    switch (sd_init()) {
        case 0:
            LED_write(0xFF);
            delay_micros(1000000);

            uint8_t buff[512] = {0};
            for (uint32_t i = 1; i < 16777216; i++) {
                if (sd_read(buff, i, 1) != 0) {
                    LED_write(0x80);
                    i--;
                }
                else {
                    LED_write(0x00);
                    for (uint32_t j = 0; j < 512; j++) {
                        if (buff[j] != 0x00) {
                            for (uint32_t k = 0; k < 512; k++) {
                                LCD_draw(HEX_DIGIT[(buff[k] >> 4) & 0x0F],
                                         k % 2 ? COLOR_DARK : COLOR_HIGHLIGHT,
                                         2 * (k % 20) + 0,
                                         k / 20 + 2);
                                LCD_draw(HEX_DIGIT[(buff[k] >> 0) & 0x0F],
                                         k % 2 ? COLOR_DARK : COLOR_HIGHLIGHT,
                                         2 * (k % 20) + 1,
                                         k / 20 + 2);
                            }
                            LCD_draw(i / 10000000 % 10 + '0', COLOR_DARK, 0, 0);
                            LCD_draw(i / 1000000 % 10 + '0', COLOR_DARK, 1, 0);
                            LCD_draw(i / 100000 % 10 + '0', COLOR_DARK, 2, 0);
                            LCD_draw(i / 10000 % 10 + '0', COLOR_DARK, 3, 0);
                            LCD_draw(i / 1000 % 10 + '0', COLOR_DARK, 4, 0);
                            LCD_draw(i / 100 % 10 + '0', COLOR_DARK, 5, 0);
                            LCD_draw(i / 10 % 10 + '0', COLOR_DARK, 6, 0);
                            LCD_draw(i / 1 % 10 + '0', COLOR_DARK, 7, 0);
                            LCD_update_screen();
                            while(1);
                        }
                    }
                }
                //delay_micros(1000000);
            }
            LED_write(0xAA);
            while(1);
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
        case 4:
            LED_write(0x08);
            break;
        default:
            LED_write(0x10);
            break;
    }

    delay_micros(1000000);
    */

    // DAC
    /*
    LL_I2S_Enable(SPI3);

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
}
