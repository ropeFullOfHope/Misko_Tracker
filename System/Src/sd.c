#include "sd.h"
#include "diskio.h"
#include "stm32g4xx_ll_spi.h"
#include "stm32g4xx_ll_gpio.h"

#include "lcd.h"
#include "micros.h"
#include "basic_utils.h"

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
    SD_CS_HIGH();
    sd_send_dummy_bytes(10);

    // Put the sd card into idle state.
    SD_CS_LOW();
    sd_send_command(0, 0, 0x95); // CMD0
    r1 = sd_wait_response();
    SD_CS_HIGH();
    sd_send_dummy_bytes(1);

    // DEBUG
    LCD_draw(HEX_DIGIT[(r1 >> 4) & 0xF], COLOR_DARK, 0, 0);
    LCD_draw(HEX_DIGIT[(r1 >> 0) & 0xF], COLOR_DARK, 1, 0);
    LCD_update_screen();

    // Return if the sd card failed to go into idle state.
    if (r1 != 0x01)
        return 1;

    // Check the sd card voltage compatibility and version.
    SD_CS_LOW();
    sd_send_command(8, 0x1AA, 0x87); // CMD8
    r1 = sd_wait_response();
    echo  = ((uint32_t)sd_send_recv(0xFF)) << 24;
    echo |= ((uint32_t)sd_send_recv(0xFF)) << 16;
    echo |= ((uint32_t)sd_send_recv(0xFF)) <<  8;
    echo |= ((uint32_t)sd_send_recv(0xFF)) <<  0;
    SD_CS_HIGH();
    sd_send_dummy_bytes(1);

    // DEBUG
    LCD_draw(HEX_DIGIT[(r1 >> 4) & 0xF], COLOR_DARK, 0, 2);
    LCD_draw(HEX_DIGIT[(r1 >> 0) & 0xF], COLOR_DARK, 1, 2);
    LCD_draw(HEX_DIGIT[(echo >> 28) & 0xF], COLOR_DARK, 0, 3);
    LCD_draw(HEX_DIGIT[(echo >> 24) & 0xF], COLOR_DARK, 1, 3);
    LCD_draw(HEX_DIGIT[(echo >> 20) & 0xF], COLOR_DARK, 2, 3);
    LCD_draw(HEX_DIGIT[(echo >> 16) & 0xF], COLOR_DARK, 3, 3);
    LCD_draw(HEX_DIGIT[(echo >> 12) & 0xF], COLOR_DARK, 4, 3);
    LCD_draw(HEX_DIGIT[(echo >>  8) & 0xF], COLOR_DARK, 5, 3);
    LCD_draw(HEX_DIGIT[(echo >>  4) & 0xF], COLOR_DARK, 6, 3);
    LCD_draw(HEX_DIGIT[(echo >>  0) & 0xF], COLOR_DARK, 7, 3);
    LCD_update_screen();

    // Return if the sd card didn't recognize the command.
    if (r1 != 0x01)
        return 2;

    // Return if the sd card didn't properly echo the command parameter.
    if (echo != 0x000001AA)
        return 2;

    // Finish sd card initialization.
    for (uint32_t i = 0; i < 1000; i++) {
        SD_CS_LOW();
        sd_send_command(55, 0, 0xFF); // CMD55
        r1 = sd_wait_response();
        SD_CS_HIGH();
        sd_send_dummy_bytes(1);

        // DEBUG
        LCD_draw(HEX_DIGIT[(r1 >> 4) & 0xF], COLOR_DARK, 0, 5);
        LCD_draw(HEX_DIGIT[(r1 >> 0) & 0xF], COLOR_DARK, 1, 5);
        LCD_update_screen();

        if (r1 == 0xFF)
            return 4;

        SD_CS_LOW();
        sd_send_command(41, 0x40000000, 0xFF); // ACMD41 HCS
        r1 = sd_wait_response();
        SD_CS_HIGH();
        sd_send_dummy_bytes(1);

        // DEBUG
        LCD_draw(HEX_DIGIT[(r1 >> 4) & 0xF], COLOR_DARK, 0, 6);
        LCD_draw(HEX_DIGIT[(r1 >> 0) & 0xF], COLOR_DARK, 1, 6);
        LCD_update_screen();

        if (r1 == 0xFF)
            return 4;

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

uint8_t sd_read(uint8_t *buff, uint32_t sector, uint32_t count)
{
    sector += 8192;

    uint8_t r1;

    if (count == 0)
        return 0;

    // Send a request to read blocks of data.
    SD_CS_LOW();
    if (count == 1)
        sd_send_command(17, sector, 0xFF); // CMD17 - read single block
    else
        sd_send_command(18, sector, 0xFF); // CMD18 - read multiple blocks
    r1 = sd_wait_response();

    // End the transmission early and return if the sd card didn't respond properly.
    if (r1 != 0x00) {
        SD_CS_HIGH();
        sd_send_dummy_bytes(1);
        return 1;
    }

    // Read all requested blocks.
    for (uint32_t i = 0; i < count; i++) {
        // Wait for start token (0xFE).
        for (uint32_t retry = 0; retry < 0xFFFF; retry++) {
            r1 = sd_send_recv(0xFF);
            if (r1 == 0xFE)
                break;
        }

        // End transmission early and return if the sd card didn't give a start token.
        if (r1 != 0xFE) {
            SD_CS_HIGH();
            sd_send_dummy_bytes(1);
            return 1;
        }

        // Read 512-byte block.
        for (uint16_t j = 0; j < 512; j++)
            buff[i * 512 + j] = sd_send_recv(0xFF);

        // Skip CRC.
        sd_send_recv(0xFF);
        sd_send_recv(0xFF);
    }

    // If multiple blocks were requested, stop transmission.
    if (count > 1) {
        sd_send_command(12, 0, 0xFF); // CMD12 - stop transmission
        sd_wait_response();
    }

    SD_CS_HIGH();
    sd_send_dummy_bytes(1);

    return 0;
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
    for (uint8_t i = 0; i < count; i++)
        sd_send_recv(0xFF);
}

static void sd_send_command(uint8_t cmd, uint32_t arg, uint8_t crc)
{
    sd_send_recv(0x40 | cmd);

    sd_send_recv((uint8_t)(arg >> 24));
    sd_send_recv((uint8_t)(arg >> 16));
    sd_send_recv((uint8_t)(arg >>  8));
    sd_send_recv((uint8_t)(arg >>  0));

    sd_send_recv(crc);
}

static uint8_t sd_wait_response(void)
{
    uint8_t resp;
    for (uint16_t i = 0; i < 25000; i++) {
        resp = sd_send_recv(0xFF);
        if ((resp & 0x80) == 0)
            return resp;
    }
    return 0xFF;
}
