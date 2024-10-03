#include "app.h"
#include "LED.h"
#include "button.h"
#include "millis.h"
#include "lcd.h"

#include "stm32g4xx_ll_adc.h"
#include "stm32g4xx_ll_tim.h"
static uint32_t joystick[2] = {0};

void app_main(void)
{

    for (int y = 0; y < 8; y++) {
        for (int x = 0; x < 16; x++) {
            LCD_draw((uint8_t) y * 16 + x, x + 0, y + 0, COLOR_NORMAL);
        }
    }
    for (int y = 0; y < 8; y++) {
        for (int x = 0; x < 16; x++) {
            LCD_draw((uint8_t) y * 16 + x, x + 17, y + 0, COLOR_NORMAL_FADE);
        }
    }
    for (int y = 0; y < 8; y++) {
        for (int x = 0; x < 16; x++) {
            LCD_draw((uint8_t) y * 16 + x, x + 0, y + 9, COLOR_DARK);
        }
    }
    for (int y = 0; y < 8; y++) {
        for (int x = 0; x < 16; x++) {
            LCD_draw((uint8_t) y * 16 + x, x + 17, y + 9, COLOR_DARK_FADE);
        }
    }
    for (int y = 0; y < 8; y++) {
        for (int x = 0; x < 16; x++) {
            LCD_draw((uint8_t) y * 16 + x, x + 0, y + 18, COLOR_HIGHLIGHT);
        }
    }
    for (int y = 0; y < 8; y++) {
        for (int x = 0; x < 16; x++) {
            LCD_draw((uint8_t) y * 16 + x, x + 17, y + 18, COLOR_HIGHLIGHT_FADE);
        }
    }
    LCD_update_screen();

    while(1) {
        if (LL_ADC_IsEnabled(ADC4)) {
            //LL_ADC_REG_StartConversion(ADC4);
            while(!LL_ADC_IsActiveFlag_EOC(ADC4));
            joystick[0] = LL_ADC_REG_ReadConversionData12(ADC4);
            //LL_ADC_ClearFlag_EOC(ADC4);
            //LL_ADC_REG_StartConversion(ADC4);
            while(!LL_ADC_IsActiveFlag_EOC(ADC4));
            joystick[1] = LL_ADC_REG_ReadConversionData12(ADC4);
            //LL_ADC_ClearFlag_EOC(ADC4);
            //while(!LL_ADC_IsActiveFlag_EOC(ADC4));
        }
    }
}
