#include "helper_functions.h"

int32_t change_value_within_bounds(int32_t value, int32_t change_amount, int32_t lower_bound, int32_t upper_bound)
{
    int32_t new_value = value + change_amount;

    if (new_value < lower_bound)
        new_value = lower_bound;

    else if (new_value > upper_bound)
        new_value = upper_bound;

    return new_value;
}
