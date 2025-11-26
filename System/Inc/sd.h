#ifndef INC_SD_H_
#define INC_SD_H_

#include <stdint.h>

uint8_t sd_init(void);
uint8_t sd_status(void);
uint8_t sd_read(uint8_t *buff, uint32_t sector, uint32_t count);

#endif /* INC_SD_H_ */
