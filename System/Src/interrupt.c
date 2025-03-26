#include "interrupt.h"
#include <stm32g4xx_ll_tim.h>
#include <cmsis_gcc.h>

void interrupt_enable(interrupt_type_t interrupt_type)
{
    switch (interrupt_type) {
        case INTERRUPT_AUDIO_UPDATE:
            LL_TIM_EnableCounter(TIM6);
            break;

        default:
            break;
    }
}

void interrupt_disable(interrupt_type_t interrupt_type)
{
    switch (interrupt_type) {
        case INTERRUPT_AUDIO_UPDATE:
            LL_TIM_DisableCounter(TIM6);
            break;

        default:
            break;
    }
}

void global_interrupts_enable(void)
{
    __enable_irq();
}

void global_interrupts_disable(void)
{
    __disable_irq();
}
