#ifndef INC_DATA_COMMANDS_H_
#define INC_DATA_COMMANDS_H_

#include "lcd.h"

typedef enum {
    COMMAND_NULL,
    COMMAND_ARP,
    COMMAND_PCH,
    COMMAND_COUNT
} command_id_t;

typedef enum {
    PARAMETER_XX,
    PARAMETER_XY
} parameter_type_t;

typedef struct {
    uint8_t name[3];
    uint8_t *full_name;
    parameter_type_t parameter_type;
    struct {
        uint8_t *general;
        union {
            uint8_t *xx;
            struct {
                uint8_t *x;
                uint8_t *y;
            };
        } parameter;
    } description;
} command_metadata_t;

extern const command_metadata_t COMMAND_METADATA[COMMAND_COUNT];

#endif /* INC_DATA_COMMANDS_H_ */
