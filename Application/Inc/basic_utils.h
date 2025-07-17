#ifndef INC_BASIC_UTILS_H_
#define INC_BASIC_UTILS_H_

#include <stdint.h>
#include "lcd.h"

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))
#define PTR_MEMBER(base_ptr, offset, type) ((type *)((uint8_t *)(base_ptr) + (offset)))

extern const symbol_t HEX_DIGIT[16];

int32_t change_value_within_bounds(int32_t value, int32_t change_amount, int32_t lower_bound, int32_t upper_bound);

#endif /* INC_BASIC_UTILS_H_ */
