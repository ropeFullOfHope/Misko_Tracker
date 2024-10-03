#include "millis.h"
#include "stm32g4xx_ll_tim.h"

uint32_t millis(void)
{
    return LL_TIM_GetCounter(TIM2);
}

void delay_millis(uint32_t delay)
{
    uint32_t start_time = millis();

    while (millis() - start_time < delay);

    return;
}
