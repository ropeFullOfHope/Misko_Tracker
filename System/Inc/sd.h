#ifndef INC_SD_H_
#define INC_SD_H_

#include <stdint.h>

uint8_t sd_init(void);
uint8_t sd_status(void);
void sd_sync(void);
uint8_t sd_read(uint8_t *buff, uint32_t sector, uint32_t count);
uint8_t sd_write(const uint8_t *buff, uint32_t sector, uint32_t count);
uint32_t sd_get_sector_count(void);

#endif /* INC_SD_H_ */
