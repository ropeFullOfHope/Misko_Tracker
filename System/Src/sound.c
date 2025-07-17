#include "sound.h"
#include "stm32g4xx_ll_tim.h"

void sound_init(void)
{
    #ifdef USE_PWM
    LL_TIM_OC_SetCompareCH1(TIM15, 0x800);
    LL_TIM_CC_EnableChannel(TIM15, LL_TIM_CHANNEL_CH1);
    LL_TIM_CC_EnableChannel(TIM15, LL_TIM_CHANNEL_CH1N);
    LL_TIM_EnableAllOutputs(TIM15);
    LL_TIM_EnableCounter(TIM15);
    #endif // USE_PWM
}

void sound_set(int32_t sample)
{
    #ifdef USE_PWM
    const uint32_t COMPARE_VALUE = (uint32_t)(sample + 0x800) & 0xFFF;

    LL_TIM_OC_SetCompareCH1(TIM15, COMPARE_VALUE);
    #endif // USE_PWM
}
