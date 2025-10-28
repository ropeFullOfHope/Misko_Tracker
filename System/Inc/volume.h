#ifndef INC_VOLUME_H_
#define INC_VOLUME_H_

#include <stdint.h>

typedef enum {
    MEMORY_NONVOLATILE = 0,
    MEMORY_VOLATILE    = 1
} v_nv_control_t;

typedef enum {
    ZERO_CROSSING_DISABLED = 0,
    ZERO_CROSSING_ENABLED  = 1
} zero_crossing_t;

typedef enum {
    POT_POSITIONS_63 = 0,
    POT_POSITIONS_33 = 1
} pot_config_t;

void volume_set(uint8_t volume);
uint8_t volume_get(void);
void volume_config_set(v_nv_control_t v_nv_control, zero_crossing_t zero_crossing, pot_config_t pot_config);

#endif /* INC_VOLUME_H_ */
