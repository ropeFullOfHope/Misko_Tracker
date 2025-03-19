#include "cordic_math.h"
#include "stm32g4xx_ll_cordic.h"

void cordic_init(void)
{
    LL_CORDIC_Config(CORDIC,
                     LL_CORDIC_FUNCTION_SINE,
                     LL_CORDIC_PRECISION_4CYCLES,
                     LL_CORDIC_SCALE_0,
                     LL_CORDIC_NBWRITE_1,
                     LL_CORDIC_NBREAD_1,
                     LL_CORDIC_INSIZE_32BITS,
                     LL_CORDIC_OUTSIZE_32BITS);
}

uint32_t cordic_sin(uint32_t x)
{
    LL_CORDIC_SetFunction(CORDIC, LL_CORDIC_FUNCTION_SINE);
    LL_CORDIC_SetNbWrite(CORDIC, LL_CORDIC_NBWRITE_1);
    LL_CORDIC_SetNbRead(CORDIC, LL_CORDIC_NBREAD_1);

    LL_CORDIC_WriteData(CORDIC, x);

    return LL_CORDIC_ReadData(CORDIC);
}

uint32_t cordic_cos(uint32_t x)
{
    LL_CORDIC_SetFunction(CORDIC, LL_CORDIC_FUNCTION_COSINE);
    LL_CORDIC_SetNbWrite(CORDIC, LL_CORDIC_NBWRITE_1);
    LL_CORDIC_SetNbRead(CORDIC, LL_CORDIC_NBREAD_1);

    LL_CORDIC_WriteData(CORDIC, x);

    return LL_CORDIC_ReadData(CORDIC);
}

void cordic_sincos(uint32_t x, uint32_t *sin, uint32_t *cos)
{
    LL_CORDIC_SetFunction(CORDIC, LL_CORDIC_FUNCTION_SINE);
    LL_CORDIC_SetNbWrite(CORDIC, LL_CORDIC_NBWRITE_1);
    LL_CORDIC_SetNbRead(CORDIC, LL_CORDIC_NBREAD_2);

    LL_CORDIC_WriteData(CORDIC, x);

    *sin = LL_CORDIC_ReadData(CORDIC);
    *cos = LL_CORDIC_ReadData(CORDIC);
}

uint32_t cordic_atan(uint32_t x)
{
    LL_CORDIC_SetFunction(CORDIC, LL_CORDIC_FUNCTION_ARCTANGENT);
    LL_CORDIC_SetNbWrite(CORDIC, LL_CORDIC_NBWRITE_1);
    LL_CORDIC_SetNbRead(CORDIC, LL_CORDIC_NBREAD_1);

    LL_CORDIC_WriteData(CORDIC, x);

    return LL_CORDIC_ReadData(CORDIC);
}

uint32_t cordic_sinh(uint32_t x)
{
    LL_CORDIC_SetFunction(CORDIC, LL_CORDIC_FUNCTION_HSINE);
    LL_CORDIC_SetNbWrite(CORDIC, LL_CORDIC_NBWRITE_1);
    LL_CORDIC_SetNbRead(CORDIC, LL_CORDIC_NBREAD_1);

    LL_CORDIC_WriteData(CORDIC, x);

    return LL_CORDIC_ReadData(CORDIC);
}

uint32_t cordic_cosh(uint32_t x)
{
    LL_CORDIC_SetFunction(CORDIC, LL_CORDIC_FUNCTION_HCOSINE);
    LL_CORDIC_SetNbWrite(CORDIC, LL_CORDIC_NBWRITE_1);
    LL_CORDIC_SetNbRead(CORDIC, LL_CORDIC_NBREAD_1);

    LL_CORDIC_WriteData(CORDIC, x);

    return LL_CORDIC_ReadData(CORDIC);
}

void cordic_sincosh(uint32_t x, uint32_t *sinh, uint32_t *cosh)
{
    LL_CORDIC_SetFunction(CORDIC, LL_CORDIC_FUNCTION_HSINE);
    LL_CORDIC_SetNbWrite(CORDIC, LL_CORDIC_NBWRITE_1);
    LL_CORDIC_SetNbRead(CORDIC, LL_CORDIC_NBREAD_2);

    LL_CORDIC_WriteData(CORDIC, x);

    *sinh = LL_CORDIC_ReadData(CORDIC);
    *cosh = LL_CORDIC_ReadData(CORDIC);
}

uint32_t cordic_atanh(uint32_t x)
{
    LL_CORDIC_SetFunction(CORDIC, LL_CORDIC_FUNCTION_HARCTANGENT);
    LL_CORDIC_SetNbWrite(CORDIC, LL_CORDIC_NBWRITE_1);
    LL_CORDIC_SetNbRead(CORDIC, LL_CORDIC_NBREAD_1);

    LL_CORDIC_WriteData(CORDIC, x);

    return LL_CORDIC_ReadData(CORDIC);
}

uint32_t cordic_atan2(uint32_t x, uint32_t y)
{
    LL_CORDIC_SetFunction(CORDIC, LL_CORDIC_FUNCTION_PHASE);
    LL_CORDIC_SetNbWrite(CORDIC, LL_CORDIC_NBWRITE_2);
    LL_CORDIC_SetNbRead(CORDIC, LL_CORDIC_NBREAD_1);

    LL_CORDIC_WriteData(CORDIC, x);
    LL_CORDIC_WriteData(CORDIC, y);

    return LL_CORDIC_ReadData(CORDIC);
}

uint32_t cordic_mod(uint32_t x, uint32_t y)
{
    LL_CORDIC_SetFunction(CORDIC, LL_CORDIC_FUNCTION_MODULUS);
    LL_CORDIC_SetNbWrite(CORDIC, LL_CORDIC_NBWRITE_2);
    LL_CORDIC_SetNbRead(CORDIC, LL_CORDIC_NBREAD_1);

    LL_CORDIC_WriteData(CORDIC, x);
    LL_CORDIC_WriteData(CORDIC, y);

    return LL_CORDIC_ReadData(CORDIC);
}

void cordic_phasor(uint32_t x, uint32_t y, uint32_t *magnitude, uint32_t *angle)
{
    LL_CORDIC_SetFunction(CORDIC, LL_CORDIC_FUNCTION_MODULUS);
    LL_CORDIC_SetNbWrite(CORDIC, LL_CORDIC_NBWRITE_2);
    LL_CORDIC_SetNbRead(CORDIC, LL_CORDIC_NBREAD_2);

    LL_CORDIC_WriteData(CORDIC, x);
    LL_CORDIC_WriteData(CORDIC, y);

    *magnitude = LL_CORDIC_ReadData(CORDIC);
    *angle = LL_CORDIC_ReadData(CORDIC);
}

uint32_t cordic_sqrt(uint32_t x)
{
    LL_CORDIC_SetFunction(CORDIC, LL_CORDIC_FUNCTION_SQUAREROOT);
    LL_CORDIC_SetNbWrite(CORDIC, LL_CORDIC_NBWRITE_1);
    LL_CORDIC_SetNbRead(CORDIC, LL_CORDIC_NBREAD_1);

    LL_CORDIC_WriteData(CORDIC, x);

    return LL_CORDIC_ReadData(CORDIC);
}

uint32_t cordic_ln(uint32_t x)
{
    LL_CORDIC_SetFunction(CORDIC, LL_CORDIC_FUNCTION_NATURALLOG);
    LL_CORDIC_SetNbWrite(CORDIC, LL_CORDIC_NBWRITE_1);
    LL_CORDIC_SetNbRead(CORDIC, LL_CORDIC_NBREAD_1);

    LL_CORDIC_WriteData(CORDIC, x);

    return LL_CORDIC_ReadData(CORDIC);
}
