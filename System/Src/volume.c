#include "volume.h"
#include "stm32g4xx_ll_i2c.h"

#define I2C_ADDRESS 0x28
#define TIMEOUT 2000

#define POT_0_WIPER_REG 0x00
#define POT_1_WIPER_REG 0x40
#define CONFIG_REG      0x80
#define VOLUME_MASK     0x3F

typedef enum {
    I2C_OK,
    I2C_TIMEOUT,
    I2C_BUSY,
    I2C_NACK
} I2C_status_t;

static inline I2C_status_t I2C_transmit(uint8_t *data, uint32_t size);

static uint8_t current_volume = 0;

void volume_init(void)
{
    volume_config_set(MEMORY_VOLATILE, ZERO_CROSSING_ENABLED, POT_POSITIONS_63);
    volume_set(0x00);
}

void volume_set(uint8_t volume)
{
    current_volume = (volume & VOLUME_MASK) ^ VOLUME_MASK;

    uint8_t data[2] = {
        POT_0_WIPER_REG | current_volume,
        POT_1_WIPER_REG | current_volume
    };

    I2C_transmit(data, 2);
}

uint8_t volume_get(void)
{
    return current_volume;
}

void volume_config_set(v_nv_control_t v_nv_control, zero_crossing_t zero_crossing, pot_config_t pot_config)
{
    uint8_t data = CONFIG_REG
                   | ((v_nv_control  & 0x01) << 2)
                   | ((zero_crossing & 0x01) << 1)
                   | ((pot_config    & 0x01) << 0);

    I2C_transmit(&data, 1);
}

static inline I2C_status_t I2C_transmit(uint8_t *data, uint32_t size)
{
    uint32_t timeout;

    // Clear stop flag.
    LL_I2C_ClearFlag_STOP(I2C3);

    // Wait until I2C is no longer busy.
    timeout = TIMEOUT;
    while (LL_I2C_IsActiveFlag_BUSY(I2C3)) {
        // Return on timeout.
        if (timeout-- == 0)
            return I2C_BUSY;
    }

    // Start data transmission.
    LL_I2C_HandleTransfer(I2C3, I2C_ADDRESS << 1, LL_I2C_ADDRSLAVE_7BIT, size, LL_I2C_MODE_AUTOEND, LL_I2C_GENERATE_START_WRITE);

    // Transmite all bytes of data.
    for (uint32_t i = 0; i < size; i++) {
        timeout = TIMEOUT;

        // Wait until transmission data register is empty.
        while (!LL_I2C_IsActiveFlag_TXIS(I2C3)) {

            // If the device fails to respond, clear the NACK flag and return.
            if (LL_I2C_IsActiveFlag_NACK(I2C3)) {
                LL_I2C_ClearFlag_NACK(I2C3);
                return I2C_NACK;
            }

            // Return on timeout.
            if (timeout-- == 0)
                return I2C_TIMEOUT;
        }

        // Transmit 1 byte of data.
        LL_I2C_TransmitData8(I2C3, data[i]);
    }

    // Wait for STOP command to be sent, then clear the STOP flag.
    while (!LL_I2C_IsActiveFlag_STOP(I2C3));
    LL_I2C_ClearFlag_STOP(I2C3);

    return I2C_OK;
}
