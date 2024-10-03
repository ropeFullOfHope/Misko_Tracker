#include "joystick.h"
#include "stm32g4xx_ll_dma.h"
#include "stm32g4xx_ll_adc.h"

//static uint16_t joystick[2];

void joystick_init(void)
{
    /*LL_DMA_DisableChannel(DMA1, LL_DMA_CHANNEL_2);
    while(LL_DMA_IsEnabledChannel(DMA1, LL_DMA_CHANNEL_2));
    LL_DMA_SetMemoryAddress(DMA1, LL_DMA_CHANNEL_2, (uint32_t) joystick);
    LL_DMA_SetDataLength(DMA1, LL_DMA_CHANNEL_2, 1);
    LL_DMA_EnableChannel(DMA1, LL_DMA_CHANNEL_2);*/
}
