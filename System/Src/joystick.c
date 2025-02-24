#include "joystick.h"
#include "stm32g4xx_ll_dma.h"
#include "stm32g4xx_ll_adc.h"
#include "stm32g4xx_ll_tim.h"

#include "lcd.h"

#define DEADZONE (512 - 1)

static uint16_t joystick_raw[2] = {0};
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
    // Calculate joystick's position relative to it's center.
    int32_t x, y;
    x = joystick_raw[0] - joystick_center[0];
    y = joystick_raw[1] - joystick_center[1];

    // If joystick is inside the deadzone, set the joystick position as
    // centered and return.
    if (x * x + y * y <= DEADZONE * DEADZONE) {
        joystick_position = JOYSTICK_POSITION_CENTER;
        return;
    }

    // Calculate absolute value of y.
    int32_t abs_y, angle;
    abs_y = y < 0 ? -y : y;

    // Calculate angle (returns range of -180° and 180°).
    if (x >= 0)
        angle = (45 * 1 - 45 * (x - abs_y) / (x + abs_y));
    else
        angle = (45 * 3 - 45 * (abs_y + x) / (abs_y - x));
    angle = y < 0 ? -angle : angle;

    // Determine joystick's position depending on angle using a lookup table.
    const joystick_position_t joystick_position_lookup[361] = {
        [  0 ...  35] = JOYSTICK_POSITION_LEFT,
        [ 36 ...  54] = JOYSTICK_POSITION_DOWNLEFT,
        [ 55 ... 125] = JOYSTICK_POSITION_DOWN,
        [126 ... 144] = JOYSTICK_POSITION_DOWNRIGHT,
        [145 ... 215] = JOYSTICK_POSITION_RIGHT,
        [216 ... 234] = JOYSTICK_POSITION_UPRIGHT,
        [235 ... 305] = JOYSTICK_POSITION_UP,
        [306 ... 324] = JOYSTICK_POSITION_UPLEFT,
        [325 ... 360] = JOYSTICK_POSITION_LEFT
    };
    joystick_position = joystick_position_lookup[angle + 180];
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
