#ifndef INC_HELPER_FUNCTIONS_H_
#define INC_HELPER_FUNCTIONS_H_

#include <stdint.h>

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof(arr[0]))

int32_t change_value_within_bounds(int32_t value, int32_t change_amount, int32_t lower_bound, int32_t upper_bound);

#endif /* INC_HELPER_FUNCTIONS_H_ */
