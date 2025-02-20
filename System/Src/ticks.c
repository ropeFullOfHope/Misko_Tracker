#include "ticks.h"
#include "stm32g4xx.h"

void ticks_init(void)
{
    // Enable DWT and ITM functionality.
    CoreDebug->DEMCR |= CoreDebug_DEMCR_TRCENA_Msk;
    // Enable cycle counting.
    DWT->CTRL |= DWT_CTRL_CYCCNTENA_Msk;
    // Reset the cycle counter.
    DWT->CYCCNT = 0;
}

uint32_t ticks(void)
{
    // Return the current cycle count
    return DWT->CYCCNT;
}

void delay_ticks(uint32_t delay)
{
    uint32_t start_time = ticks();

    while (ticks() - start_time < delay);
}
