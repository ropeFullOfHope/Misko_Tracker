#include "sd.h"
#include "diskio.h"
#include "stm32g4xx_ll_spi.h"
#include "stm32g4xx_ll_gpio.h"

#define SD_SPI              SPI1
#define SD_CS_GPIO_PORT     GPIOA
#define SD_CS_GPIO_PIN_MASK LL_GPIO_PIN_4

#define SD_CS_HIGH() LL_GPIO_SetOutputPin(SD_CS_GPIO_PORT, SD_CS_GPIO_PIN_MASK)
#define SD_CS_LOW()  LL_GPIO_ResetOutputPin(SD_CS_GPIO_PORT, SD_CS_GPIO_PIN_MASK)

static uint8_t sd_send_recv(uint8_t data);
static void sd_send_dummy_bytes(uint8_t count);
static void sd_send_command(uint8_t cmd, uint32_t arg, uint8_t crc);
static uint8_t sd_wait_response(void);

uint8_t sd_init(void)
{
    uint8_t r1;
    uint32_t echo;

    // Send 80 dummy clock cycles to syncronize the sd card.
    sd_send_dummy_bytes(10);

    // Put the sd card into idle state.
    SD_CS_LOW();
    sd_send_command(0, 0, 0x95); // CMD0
    r1 = sd_wait_response();
    SD_CS_HIGH();
    sd_send_dummy_bytes(1);

    // Return if the sd card failed to go into idle state.
    if (r1 != 0x01)
        return 1;

    // Check the sd card voltage compatibility and version.
    SD_CS_LOW();
    sd_send_command(8, 0x1AA, 0x87); // CMD8
    r1 = sd_wait_response();
    echo  = ((uint32_t)sd_send_recv(0xFF)) << 24;
    echo |= ((uint32_t)sd_send_recv(0xFF)) << 16;
    echo |= ((uint32_t)sd_send_recv(0xFF)) << 8;
    echo |= ((uint32_t)sd_send_recv(0xFF));
    SD_CS_HIGH();
    sd_send_dummy_bytes(1);

    // Return if the sd card didn't recognize the command or didn't properly echo the command.
    if (r1 != 0x01 || (echo & 0xFFFF) != 0x01AA)
        return 2;

    // Finish sd card initialization.
    for (uint32_t i = 0; i < 0xFFFF; i++) {
        SD_CS_LOW();
        sd_send_command(55, 0, 0xFF); // CMD55
        sd_send_command(41, 0x40000000, 0xFF); // ACMD41 HCS
        r1 = sd_wait_response();
        SD_CS_HIGH();
        sd_send_dummy_bytes(1);

        if (r1 == 0x00) break; // card is ready
    }

    // Return if the card never left idle.
    if (r1 != 0x00)
        return 3;

    // Card initialization complete!
    return 0;
}

uint8_t sd_status(void)
{
    // You can add more logic if you like
    return 0; // 0 = ready
}

static uint8_t sd_send_recv(uint8_t data)
{
    while (!LL_SPI_IsActiveFlag_TXE(SD_SPI));
    LL_SPI_TransmitData8(SD_SPI, data);
    while (!LL_SPI_IsActiveFlag_RXNE(SD_SPI));
    return LL_SPI_ReceiveData8(SD_SPI);
}

static void sd_send_dummy_bytes(uint8_t count)
{
    SD_CS_HIGH();
    for (uint8_t i = 0; i < count; i++)
        sd_send_recv(0xFF);
}

static void sd_send_command(uint8_t cmd, uint32_t arg, uint8_t crc)
{
    sd_send_recv(0x40 | cmd);
    sd_send_recv((uint8_t)(arg >> 24));
    sd_send_recv((uint8_t)(arg >> 16));
    sd_send_recv((uint8_t)(arg >> 8));
    sd_send_recv((uint8_t)(arg));
    sd_send_recv(crc);
}

static uint8_t sd_wait_response(void)
{
    uint8_t resp;
    for (uint16_t i = 0; i < 0xFFFF; i++) {
        resp = sd_send_recv(0xFF);
        if ((resp & 0x80) == 0)
            return resp;
    }
    return 0xFF;
}
