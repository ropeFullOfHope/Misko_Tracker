#include "joystick.h"
#include "stm32g4xx_ll_dma.h"
#include "stm32g4xx_ll_adc.h"
#include "stm32g4xx_ll_tim.h"
#include "cordic_math.h"

#define DEADZONE (512 - 1)

static volatile uint16_t joystick_raw[2] = {0};
static uint16_t joystick_center[2] = {0};
static joystick_position_t joystick_position = JOYSTICK_POSITION_CENTER;

void joystick_init(void)
{
    // DMA init
    LL_DMA_DisableChannel(DMA1, LL_DMA_CHANNEL_2);
    while(LL_DMA_IsEnabledChannel(DMA1, LL_DMA_CHANNEL_2));
    LL_DMA_SetPeriphAddress(DMA1, LL_DMA_CHANNEL_2, (uint32_t) &(ADC4->DR));
    LL_DMA_SetMemoryAddress(DMA1, LL_DMA_CHANNEL_2, (uint32_t) joystick_raw);
    LL_DMA_SetDataLength(DMA1, LL_DMA_CHANNEL_2, 2);
    LL_DMA_EnableChannel(DMA1, LL_DMA_CHANNEL_2);

    // ADC init
    LL_ADC_StartCalibration(ADC4, LL_ADC_SINGLE_ENDED);
    while (LL_ADC_IsCalibrationOnGoing(ADC4));
    LL_ADC_Enable(ADC4);
    while (LL_ADC_IsActiveFlag_ADRDY(ADC4) == 0);
    LL_ADC_REG_StartConversion(ADC4);

    // Timer 3 init
    LL_TIM_EnableCounter(TIM3);

    // Set the first values read as the center of the joystick.
    while (joystick_raw[0] == 0);
    joystick_center[0] = joystick_raw[0];
    while (joystick_raw[1] == 0);
    joystick_center[1] = joystick_raw[1];
}

void joystick_scan(void)
{
    joystick_position_t last_joystick_position = joystick_position;

    // Calculate joystick's position relative to it's center.
    int32_t x = joystick_raw[0] - joystick_center[0];
    int32_t y = joystick_raw[1] - joystick_center[1];

    // If joystick is inside the deadzone, set the joystick position as
    // centered and return.
    if (last_joystick_position == JOYSTICK_POSITION_CENTER) {
        if ((x * x) + (y * y) <= (DEADZONE * DEADZONE)) {
            joystick_position = JOYSTICK_POSITION_CENTER;
            return;
        }
    }
    else {
        if ((x * x) + (y * y) <= (DEADZONE * DEADZONE) * (3 * 3) / (4 * 4)) {
            joystick_position = JOYSTICK_POSITION_CENTER;
            return;
        }
    }

    uint32_t angle = cordic_atan2((uint32_t)x, (uint32_t)y);

    // Determine joystick's position depending on angle.
    // 0x08000000 is 11.25° or pi / 16 rad.
    if      (angle <= (uint32_t) 0x08000000 * 3) {
        joystick_position = JOYSTICK_POSITION_RIGHT;
    }
    else if (angle <  (uint32_t) 0x08000000 * 5) {
        joystick_position = JOYSTICK_POSITION_UPRIGHT;
    }
    else if (angle <= (uint32_t) 0x08000000 * 11) {
        joystick_position = JOYSTICK_POSITION_UP;
    }
    else if (angle <  (uint32_t) 0x08000000 * 13) {
        joystick_position = JOYSTICK_POSITION_UPLEFT;
    }
    else if (angle <= (uint32_t) 0x08000000 * 19) {
        joystick_position = JOYSTICK_POSITION_LEFT;
    }
    else if (angle <  (uint32_t) 0x08000000 * 21) {
        joystick_position = JOYSTICK_POSITION_DOWNLEFT;
    }
    else if (angle <= (uint32_t) 0x08000000 * 27) {
        joystick_position = JOYSTICK_POSITION_DOWN;
    }
    else if (angle <  (uint32_t) 0x08000000 * 29) {
        joystick_position = JOYSTICK_POSITION_DOWNRIGHT;
    }
    else {
        joystick_position = JOYSTICK_POSITION_RIGHT;
    }
}

joystick_position_t joystick_get_position(void)
{
    return joystick_position;
}

uint32_t is_joystick_centered(void)
{
    if (joystick_position == JOYSTICK_POSITION_CENTER)
        return 1;
    else
        return 0;
}

uint32_t is_joystick_up(void)
{
    if (joystick_position == JOYSTICK_POSITION_UP ||
                             JOYSTICK_POSITION_UPRIGHT ||
                             JOYSTICK_POSITION_UPLEFT)
        return 1;
    else
        return 0;
}

uint32_t is_joystick_down(void)
{
    if (joystick_position == JOYSTICK_POSITION_DOWN ||
                             JOYSTICK_POSITION_DOWNRIGHT ||
                             JOYSTICK_POSITION_DOWNLEFT)
        return 1;
    else
        return 0;
}

uint32_t is_joystick_right(void)
{
    if (joystick_position == JOYSTICK_POSITION_RIGHT ||
                             JOYSTICK_POSITION_UPRIGHT ||
                             JOYSTICK_POSITION_DOWNRIGHT)
        return 1;
    else
        return 0;
}

uint32_t is_joystick_left(void)
{
    if (joystick_position == JOYSTICK_POSITION_LEFT ||
                             JOYSTICK_POSITION_UPLEFT ||
                             JOYSTICK_POSITION_DOWNLEFT)
        return 1;
    else
        return 0;
}
