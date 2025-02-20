#ifndef INC_BACKLIGHT_H_
#define INC_BACKLIGHT_H_

#include <stdint.h>

void backlight_init();
void backlight_set_brightness(uint32_t percentage);

#endif /* INC_BACKLIGHT_H_ */
