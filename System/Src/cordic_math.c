#include "cordic_math.h"
#include "stm32g4xx_ll_cordic.h"

static CORDIC_TypeDef CORDIC0;

void cordic_init(void)
{
    LL_CORDIC_Config(&CORDIC0,
                     LL_CORDIC_FUNCTION_SINE,
                     LL_CORDIC_PRECISION_8CYCLES,
                     LL_CORDIC_SCALE_0,
                     LL_CORDIC_NBWRITE_1,
                     LL_CORDIC_NBREAD_1,
                     LL_CORDIC_INSIZE_32BITS,
                     LL_CORDIC_OUTSIZE_32BITS);
}
