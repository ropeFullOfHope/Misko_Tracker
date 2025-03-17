#ifndef INC_MICROS_H_
#define INC_MICROS_H_

#include <stdint.h>

void micros_init(void);
uint32_t micros(void);
void delay_micros(uint32_t delay);

#endif /* INC_MICROS_H_ */
