#ifndef INC_TICKS_H_
#define INC_TICKS_H_

#include <stdint.h>

#define CPU_FREQUENCY 170000000

void ticks_init(void);
uint32_t ticks(void);
void delay_ticks(uint32_t delay);

#endif /* INC_TICKS_H_ */
