#ifndef INC_ILI9341_H_
#define INC_ILI9341_H_

#include <stdint.h>

void ILI9341_init(void);
void ILI9341_set_address(uint16_t address);
void ILI9341_send_data(uint16_t *data, uint32_t length);
void ILI9341_send_data_DMA(uint16_t *data, uint32_t length);
uint32_t ILI9341_is_DMA_ready(void);
void ILI9341_hard_reset(void);
void ILI9341_interface_control(uint16_t param_1, uint16_t param_2, uint16_t param_3);
void ILI9341_memory_access_control(uint16_t param);
void ILI9341_column_address_set(uint16_t param_1, uint16_t param_2);
void ILI9341_page_address_set(uint16_t param_1, uint16_t param_2);
void ILI9341_sleep_out(void);
void ILI9341_normal_display_mode_on(void);
void ILI9341_pixel_format_set(uint16_t param);
void ILI9341_display_on(void);
void ILI9341_memory_write_start(void);

#endif /* INC_ILI9341_H_ */
