#include "micros.h"
#include "stm32g4xx_ll_tim.h"

void micros_init()
{
    LL_TIM_EnableCounter(TIM2);
}

uint32_t micros(void)
{
    return LL_TIM_GetCounter(TIM2);
}

void delay_micros(uint32_t delay)
{
    uint32_t start_time = micros();

    while (micros() - start_time < delay);
}
