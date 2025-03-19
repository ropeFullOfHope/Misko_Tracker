#ifndef INC_CORDIC_MATH_H_
#define INC_CORDIC_MATH_H_

#include <stdint.h>

void cordic_init(void);
uint32_t cordic_sin(uint32_t x);
uint32_t cordic_cos(uint32_t x);
void cordic_sincos(uint32_t x, uint32_t *sin, uint32_t *cos);
uint32_t cordic_atan(uint32_t x);
uint32_t cordic_sinh(uint32_t x);
uint32_t cordic_cosh(uint32_t x);
void cordic_sincosh(uint32_t x, uint32_t *sin, uint32_t *cos);
uint32_t cordic_atanh(uint32_t x);
uint32_t cordic_atan2(uint32_t x, uint32_t y);
uint32_t cordic_mod(uint32_t x, uint32_t y);
void cordic_phasor(uint32_t x, uint32_t y, uint32_t *magnitude, uint32_t *angle);
uint32_t cordic_sqrt(uint32_t x);
uint32_t cordic_ln(uint32_t x);

#endif /* INC_CORDIC_MATH_H_ */
