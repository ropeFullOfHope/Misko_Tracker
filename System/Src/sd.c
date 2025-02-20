/*#include "sd.h"
#include "stm32g4xx_ll_gpio.h"

static uint32_t is_sd_initialized = 0;

DSTATUS sd_status(void)
{
    DSTATUS status = 0;

    if (LL_GPIO_IsInputPinSet(GPIOA, LL_GPIO_PIN_3) == 0) {
        is_sd_initialized = 0;
        status |= STA_NOINIT | STA_NODISK;
    }

    if (is_sd_initialized == 0)
        status |= STA_NOINIT;

    return status;
}

DSTATUS sd_initilaize(void)
{
    SD_CS_HIGH();
    for (int i = 0; i < 10; i++) {
        SD_SendByte(0xFF); // Send 80 clock cycles for SD card power-on
    }
    SD_CS_LOW();

    // Send CMD0 (GO_IDLE_STATE) to reset the card
    if (SD_SendCommand(CMD0, 0) != 0x01) {
        SD_CS_HIGH();
        sd_status = STA_NOINIT;
        return STA_NOINIT;
    }

    // Send CMD1 or ACMD41 to initialize the card
    if (SD_InitializeCard() != 0) { // Assume SD_InitializeCard handles CMD1/ACMD41 sequence
        SD_CS_HIGH();
        sd_status = STA_NOINIT;
        return STA_NOINIT;
    }

    // SD card is initialized
    SD_CS_HIGH();
    sd_status = STA_READ
}
*/
