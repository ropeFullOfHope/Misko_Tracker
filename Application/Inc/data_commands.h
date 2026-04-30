#ifndef INC_DATA_COMMANDS_H_
#define INC_DATA_COMMANDS_H_

#include "lcd.h"

typedef enum {
    COMMAND_NULL,
    COMMAND_BRK,
    COMMAND_ARP,
    COMMAND_PCH,
    COMMAND_COUNT
} command_t;

typedef enum {
    PARAMETER_XX,
    PARAMETER_XY
} parameter_type_t;

typedef struct {
    char name[3];
    char *full_name;
    parameter_type_t parameter_type;
    struct {
            char *general;
        union {
            char *xx;
            struct {
                char *x;
                char *y;
            };
        } parameter;
    } description;
} command_metadata_t;

extern const command_metadata_t COMMAND_METADATA[COMMAND_COUNT];

#endif /* INC_DATA_COMMANDS_H_ */
