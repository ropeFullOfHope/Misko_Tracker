#include "ili9341.h"
#include "ili9341_registers.h"
#include "stm32g4xx_ll_gpio.h"
#include "stm32g4xx_ll_dma.h"
#include "millis.h"

#define FMC_BANK1_REG  ((uint16_t *)  0x60000000)
#define FMC_BANK1_MEM  ((uint16_t *) (0x60000000 | 0x0010000))

void ILI9341_init(void)
{
    // ILI9341 Init
    ILI9341_hard_reset();
    ILI9341_interface_control(0x49, 0x00, 0x20);
    ILI9341_memory_access_control(0x60);
    ILI9341_sleep_out();
    ILI9341_normal_display_mode_on();
    ILI9341_pixel_format_set(0x55);
    ILI9341_display_on();

    // DMA Init
    // Send the first DMA to set the TC1 flag. This sends NOP to ILI9341.
    uint16_t nop = 0x0000;

    // Disable the DMA channel and wait for it to properly disable.
    LL_DMA_DisableChannel(DMA1, LL_DMA_CHANNEL_1);
    while(LL_DMA_IsEnabledChannel(DMA1, LL_DMA_CHANNEL_1));

    LL_DMA_SetM2MSrcAddress(DMA1, LL_DMA_CHANNEL_1, (uint32_t) &nop);
    LL_DMA_SetM2MDstAddress(DMA1, LL_DMA_CHANNEL_1, (uint32_t) FMC_BANK1_REG);
    LL_DMA_SetDataLength(DMA1, LL_DMA_CHANNEL_1, 1);

    // Start DMA transfer
    LL_DMA_EnableChannel(DMA1, LL_DMA_CHANNEL_1);

    // Wait for transfer to complete
    while(!LL_DMA_IsActiveFlag_TC1(DMA1));

    // Disable the DMA channel and wait for it to properly disable.
    LL_DMA_DisableChannel(DMA1, LL_DMA_CHANNEL_1);
    while(LL_DMA_IsEnabledChannel(DMA1, LL_DMA_CHANNEL_1));

    // Set DMA destination address to FMC's memory.
    LL_DMA_SetM2MDstAddress(DMA1, LL_DMA_CHANNEL_1, (uint32_t) FMC_BANK1_MEM);
}

void ILI9341_set_address(uint16_t address)
{
    *FMC_BANK1_REG = address;
    //__DSB();
}

void ILI9341_send_data(uint16_t *data, uint32_t length)
{
    for (uint32_t i = 0; i < length; i++) {
        *FMC_BANK1_MEM = *(data + i);
        //__DSB();
    }
}

void ILI9341_send_data_DMA(uint16_t *data, uint32_t length)
{
    while(!LL_DMA_IsActiveFlag_TC1(DMA1));
    LL_DMA_ClearFlag_TC1(DMA1);
    LL_DMA_DisableChannel(DMA1, LL_DMA_CHANNEL_1);
    while(LL_DMA_IsEnabledChannel(DMA1, LL_DMA_CHANNEL_1));
    LL_DMA_SetM2MSrcAddress(DMA1, LL_DMA_CHANNEL_1, (uint32_t) data);
    LL_DMA_SetDataLength(DMA1, LL_DMA_CHANNEL_1, length);
    LL_DMA_EnableChannel(DMA1, LL_DMA_CHANNEL_1);
}

uint32_t ILI9341_is_DMA_ready(void)
{
    return LL_DMA_IsActiveFlag_TC1(DMA1);
}

void ILI9341_hard_reset(void)
{
    LL_GPIO_ResetOutputPin(GPIOD, 0x01 << 3);
    delay_millis(10);
    LL_GPIO_SetOutputPin(GPIOD, 0x01 << 3);
    delay_millis(120);
}

void ILI9341_interface_control(uint16_t param_1, uint16_t param_2, uint16_t param_3)
{
    uint16_t param[3] = {param_1, param_2, param_3};
    ILI9341_set_address(ILI9341_INTERFACE_CONTROL);
    ILI9341_send_data(param, 3);
}

void ILI9341_memory_access_control(uint16_t param)
{
    ILI9341_set_address(ILI9341_MEMORY_ACCESS_CONTROL);
    ILI9341_send_data(&param, 1);
}

void ILI9341_column_address_set(uint16_t param_1, uint16_t param_2)
{
    uint16_t param[4] = {param_1 >> 8, param_1 & 0xFF, param_2 >> 8, param_2 & 0xFF};
    ILI9341_set_address(ILI9341_COLUMN_ADDRESS_SET);
    ILI9341_send_data(param, 4);
}

void ILI9341_page_address_set(uint16_t param_1, uint16_t param_2)
{
    uint16_t param[4] = {param_1 >> 8, param_1 & 0xFF, param_2 >> 8, param_2 & 0xFF};
    ILI9341_set_address(ILI9341_PAGE_ADDRESS_SET);
    ILI9341_send_data(param, 4);
}

void ILI9341_sleep_out(void)
{
    ILI9341_set_address(ILI9341_SLEEP_OUT);
    delay_millis(5);
}

void ILI9341_normal_display_mode_on(void)
{
    ILI9341_set_address(ILI9341_NORMAL_DISPLAY_MODE_ON);
}

void ILI9341_pixel_format_set(uint16_t param)
{
    ILI9341_set_address(ILI9341_PIXEL_FORMAT_SET);
    ILI9341_send_data(&param, 1);
}

void ILI9341_display_on(void)
{
    ILI9341_set_address(ILI9341_DISPLAY_ON);
}

void ILI9341_memory_write_start(void)
{
    ILI9341_set_address(ILI9341_MEMORY_WRITE);
}
