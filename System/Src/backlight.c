#include "backlight.h"
#include "stm32g4xx_ll_tim.h"

void backlight_init(void)
{
    LL_TIM_OC_SetCompareCH1(TIM4, 0);
    LL_TIM_CC_EnableChannel(TIM4, LL_TIM_CHANNEL_CH1);
    LL_TIM_EnableCounter(TIM4);
}

void backlight_set_brightness(uint32_t percentage)
{
    LL_TIM_OC_SetCompareCH1(TIM4, percentage);
}
