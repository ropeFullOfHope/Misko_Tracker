#include "sd.h"
#include "diskio.h"
#include "stm32g4xx_ll_spi.h"
#include "stm32g4xx_ll_rcc.h"
#include "stm32g4xx_ll_gpio.h"

#include "lcd.h"
#include "micros.h"
#include "basic_utils.h"

#define SD_SPI              SPI1
#define SD_CS_GPIO_PORT     GPIOA
#define SD_CS_GPIO_PIN_MASK LL_GPIO_PIN_4

#define SD_CS_HIGH() LL_GPIO_SetOutputPin(SD_CS_GPIO_PORT, SD_CS_GPIO_PIN_MASK)
#define SD_CS_LOW()  LL_GPIO_ResetOutputPin(SD_CS_GPIO_PORT, SD_CS_GPIO_PIN_MASK)

static struct {
    uint8_t csd_structure;
    uint8_t taac;
    uint8_t nsac;
    uint8_t tran_speed;
    uint16_t ccc;
    uint8_t read_bl_len;
    uint8_t read_bl_partial;
    uint8_t write_blk_misalign;
    uint8_t read_blk_misalign;
    uint8_t dsr_imp;
    uint32_t c_size;
    uint8_t erase_blk_en;
    uint8_t sector_size;
    uint8_t wp_grp_size;
    uint8_t wp_grp_enable;
    uint8_t r2w_factor;
    uint8_t write_bl_len;
    uint8_t write_bl_partial;
    uint8_t file_format_grp;
    uint8_t copy;
    uint8_t perm_write_protect;
    uint8_t tmp_write_protect;
    uint8_t file_format;
    uint8_t wp_upc;
    uint8_t crc;
} reg_csd;

static uint8_t sd_send_recv(uint8_t data);
static void sd_send_dummy_bytes(uint32_t count);
static void sd_send_command(uint8_t cmd, uint32_t arg, uint8_t crc);
static uint8_t sd_wait_response(void);
static uint8_t sd_read_csd(void);
static void sd_spi_slow(void);
static void sd_spi_fast(void);

uint8_t sd_init(void)
{
    uint8_t response;
    uint32_t echo;

    // Lower the SPI clock to 100 kHz - 400 kHz.
    sd_spi_slow();

    // Send 80 dummy clock cycles to syncronize the sd card.
    SD_CS_HIGH();
    sd_send_dummy_bytes(10);

    // Put the sd card into idle state.
    SD_CS_LOW();
    sd_send_command(0, 0, 0x95); // CMD0
    response = sd_wait_response();
    SD_CS_HIGH();
    sd_send_dummy_bytes(1);

    // Return if the sd card failed to go into idle state.
    if (response != 0x01)
        return 1;

    // Check the sd card voltage compatibility and version.
    SD_CS_LOW();
    sd_send_command(8, 0x1AA, 0x87); // CMD8
    response = sd_wait_response();
    echo  = ((uint32_t)sd_send_recv(0xFF)) << 24;
    echo |= ((uint32_t)sd_send_recv(0xFF)) << 16;
    echo |= ((uint32_t)sd_send_recv(0xFF)) <<  8;
    echo |= ((uint32_t)sd_send_recv(0xFF)) <<  0;
    SD_CS_HIGH();
    sd_send_dummy_bytes(1);

    // Return if the sd card didn't recognize the command.
    if (response != 0x01)
        return 2;

    // Return if the sd card didn't properly echo the command parameter.
    if (echo != 0x000001AA)
        return 2;

    // Finish sd card initialization.
    for (uint32_t i = 0; i < 400; i++) {
        SD_CS_LOW();
        sd_send_command(55, 0, 0xFF); // CMD55
        response = sd_wait_response();
        SD_CS_HIGH();
        sd_send_dummy_bytes(1);

        if (response == 0xFF)
            return 4;

        SD_CS_LOW();
        sd_send_command(41, 0x40000000, 0xFF); // ACMD41 HCS
        response = sd_wait_response();
        SD_CS_HIGH();
        sd_send_dummy_bytes(1);

        if (response == 0xFF)
            return 4;

        if (response == 0x00) break; // card is ready
    }

    // Return if the card never left idle.
    if (response != 0x00)
        return 3;

    // Increase the SPI clock.
    sd_spi_fast();

    // Read the CSD register.
    if (sd_read_csd() != 0)
        return 5;

    // Card initialization complete!
    return 0;
}

uint8_t sd_status(void)
{
    // TODO: Add proper status check.
    return 0; // 0 = ready
}

void sd_sync(void)
{
    /*
    uint8_t response;
    do {
        SD_CS_LOW();
        sd_send_command(13, 0, 0xFF); // CMD13 - send status
        response = sd_wait_response();
        SD_CS_HIGH();
        sd_send_dummy_bytes(1);
    } while ((response & 0x01) == 0x00);
    */

    while (sd_send_recv(0xFF) != 0xFF);
}

uint8_t sd_read(uint8_t *buff, uint32_t sector, uint32_t count)
{
    uint8_t response;
    uint8_t token;

    if (count == 0)
        return 0;

    // Send a request to read blocks of data.
    SD_CS_LOW();
    if (count == 1)
        sd_send_command(17, sector, 0xFF); // CMD17 - read single block
    else
        sd_send_command(18, sector, 0xFF); // CMD18 - read multiple blocks
    response = sd_wait_response();

    // End the transmission early and return if the sd card didn't respond properly.
    if (response != 0x00) {
        SD_CS_HIGH();
        sd_send_dummy_bytes(1);
        return 1;
    }

    // Read all requested blocks.
    for (uint32_t i = 0; i < count; i++) {
        // Wait for start token (0xFE).
        for (uint32_t retry = 0; retry < 25000; retry++) {
            token = sd_send_recv(0xFF);
            if (token == 0xFE)
                break;
        }

        // End transmission early and return if the sd card didn't give a start token.
        if (token != 0xFE) {
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
        while (1) {
            response = sd_send_recv(0xFF);
            if (response == 0xFF)
                break;
        }
    }

    SD_CS_HIGH();
    sd_send_dummy_bytes(1);

    return 0;
}

uint8_t sd_write(const uint8_t *buff, uint32_t sector, uint32_t count)
{
    uint8_t response;
    uint8_t token;

    if (count == 0)
        return 0;

    // Erase blocks before writting.
    if (count > 1) {
        SD_CS_LOW();
        sd_send_command(55, 0, 0xFF); // CMD55
        sd_wait_response();
        SD_CS_HIGH();
        sd_send_dummy_bytes(1);

        SD_CS_LOW();
        sd_send_command(23, count, 0xFF); // ACMD23 - set write block erase count
        sd_wait_response();
        SD_CS_HIGH();
        sd_send_dummy_bytes(1);
    }

    // Send a request to write blocks of data.
    SD_CS_LOW();
    if (count == 1)
        sd_send_command(24, sector, 0xFF); // CMD24 - write single block
    else
        sd_send_command(25, sector, 0xFF); // CMD25 - write multiple blocks
    response = sd_wait_response();

    // End the transmission early and return if the sd card didn't respond properly.
    if (response != 0x00) {
        SD_CS_HIGH();
        sd_send_dummy_bytes(1);
        return 1;
    }

    // Read all requested blocks.
    for (uint32_t i = 0; i < count; i++) {
        // Send start token
        sd_send_recv(count == 1 ? 0xFE : 0xFC);

        // Write data
        for (uint16_t j = 0; j < 512; j++)
            sd_send_recv(buff[i * 512 + j]);

        // CRC
        sd_send_recv(0xFF);
        sd_send_recv(0xFF);

        // Response
        token = sd_send_recv(0xFF);
        if ((token & 0x1F) != 0x05) {
            SD_CS_HIGH();
            sd_send_dummy_bytes(1);
            return 1;
        }

        // Busy wait
        while (sd_send_recv(0xFF) != 0xFF);
    }

    // If multiple blocks were written, stop transmission.
    if (count > 1) {
        sd_send_recv(0xFD);
        while (sd_send_recv(0xFF) != 0xFF);
    }

    SD_CS_HIGH();
    sd_send_dummy_bytes(1);

    return 0;
}

uint32_t sd_get_sector_count(void)
{
    return (reg_csd.c_size + 1) * 1024;
}

static uint8_t sd_send_recv(uint8_t data)
{
    while (!LL_SPI_IsActiveFlag_TXE(SD_SPI));
    LL_SPI_TransmitData8(SD_SPI, data);

    while (!LL_SPI_IsActiveFlag_RXNE(SD_SPI));
    return LL_SPI_ReceiveData8(SD_SPI);
}

static void sd_send_dummy_bytes(uint32_t count)
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
    for (uint16_t i = 0; i < 100; i++) {
        resp = sd_send_recv(0xFF);
        if ((resp & 0x80) == 0)
            return resp;
    }
    return 0xFF;
}

static uint8_t sd_read_csd(void)
{
    uint8_t response;
    uint8_t token;
    uint8_t csd[16] = {0};

    // Read
    SD_CS_LOW();
    sd_send_command(9, 0, 0xFF); // CMD9 - send status

    response = sd_wait_response();
    if (response != 0x00)
        return 1;

    for (uint32_t i = 0; i < 200; i++) {
        token = sd_send_recv(0xFF);
        if (token == 0xFE)
            break;
    }
    if (token != 0xFE)
        return 2;

    for (uint32_t i = 0; i < 16; i++)
        csd[i] = sd_send_recv(0xFF);

    sd_send_dummy_bytes(2);

    SD_CS_HIGH();
    sd_send_dummy_bytes(1);

    // Parse
    reg_csd.csd_structure = (csd[0] >> 6) & 0x03;
    reg_csd.taac = csd[1];
    reg_csd.nsac = csd[2];
    reg_csd.tran_speed = csd[3];
    reg_csd.ccc =
        ((csd[4]) << 4)
        | ((csd[5] >> 4) & 0x0F);
    reg_csd.read_bl_len = csd[5] & 0x0F;
    reg_csd.read_bl_partial = (csd[6] >> 7) & 0x01;
    reg_csd.write_blk_misalign = (csd[6] >> 6) & 0x01;
    reg_csd.read_blk_misalign = (csd[6] >> 5) & 0x01;
    reg_csd.dsr_imp = (csd[6] >> 4) & 0x01;
    reg_csd.c_size =
        ((csd[7] & 0x3F) << 16)
        | ((csd[8]) << 8)
        | (csd[9]);
    reg_csd.erase_blk_en = (csd[10] >> 6) & 0x01;
    reg_csd.sector_size =
        ((csd[10] & 0x3F) << 1)
        | ((csd[11] >> 7) & 0x01);
    reg_csd.wp_grp_size = csd[11] & 0x7F;
    reg_csd.wp_grp_enable = (csd[12] >> 7) & 0x01;
    reg_csd.r2w_factor = (csd[12] >> 2) & 0x07;
    reg_csd.write_bl_len =
        ((csd[12] & 0x03) << 2)
        | ((csd[13] >> 6) & 0x03);
    reg_csd.write_bl_partial = (csd[13] >> 5) & 0x01;
    reg_csd.file_format_grp = (csd[14] >> 7) & 0x01;
    reg_csd.copy = (csd[14] >> 6) & 0x01;
    reg_csd.perm_write_protect = (csd[14] >> 5) & 0x01;
    reg_csd.tmp_write_protect = (csd[14] >> 4) & 0x01;
    reg_csd.file_format = (csd[14] >> 2) & 0x03;
    reg_csd.wp_upc = (csd[14] >> 1) & 0x01;
    reg_csd.crc = (csd[15] >> 1) & 0x7F;

    return 0;
}

static void sd_spi_slow(void)
{
    LL_RCC_SetAPB2Prescaler(LL_RCC_APB2_DIV_4);

    while(LL_SPI_IsActiveFlag_BSY(SPI1));
    LL_SPI_Disable(SPI1);
    LL_SPI_SetBaudRatePrescaler(SPI1, LL_SPI_BAUDRATEPRESCALER_DIV256);
    LL_SPI_Enable(SPI1);
}

static void sd_spi_fast(void)
{
    LL_RCC_SetAPB2Prescaler(LL_RCC_APB2_DIV_1);

    while(LL_SPI_IsActiveFlag_BSY(SPI1));
    LL_SPI_Disable(SPI1);
    LL_SPI_SetBaudRatePrescaler(SPI1, LL_SPI_BAUDRATEPRESCALER_DIV8);
    LL_SPI_Enable(SPI1);
}
