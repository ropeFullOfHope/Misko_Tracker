#include "sound.h"
#include "stm32g4xx_ll_tim.h"

void sound_init(void)
{
    LL_TIM_OC_SetCompareCH1(TIM15, 0x800);
    LL_TIM_CC_EnableChannel(TIM15, LL_TIM_CHANNEL_CH1);
    LL_TIM_CC_EnableChannel(TIM15, LL_TIM_CHANNEL_CH1N);
    LL_TIM_EnableAllOutputs(TIM15);
    LL_TIM_EnableCounter(TIM15);
}

void sound_set(uint32_t sample)
{
    LL_TIM_OC_SetCompareCH1(TIM15, sample % 0x1000);
}
