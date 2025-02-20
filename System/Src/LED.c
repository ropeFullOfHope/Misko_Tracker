#include "LED.h"
#include "stm32g4xx_ll_gpio.h"

void LED_write(uint8_t led)
{
    LL_GPIO_SetOutputPin(GPIOF, (led & 0x0f) << 2);
    LL_GPIO_ResetOutputPin(GPIOF, (~led & 0x0f) << 2);

    LL_GPIO_SetOutputPin(GPIOC, (led >> 4) & 0x0f);
    LL_GPIO_ResetOutputPin(GPIOC, ~(led >> 4) & 0x0f);
}
