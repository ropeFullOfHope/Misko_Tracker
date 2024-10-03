#include "backlight.h"
#include "stm32g4xx_ll_tim.h"

void backlight_set_brightness(uint32_t percentage)
{
    LL_TIM_OC_SetCompareCH1(TIM4, percentage);
}
