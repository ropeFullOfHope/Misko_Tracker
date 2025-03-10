#include "data_commands.h"

const command_metadata_t COMMAND_METADATA[COMMAND_COUNT] = {
    [COMMAND_ARP] = {
        .name = {'A', 'R', 'P'},
        .parameter_type = PARAMETER_XY,
        .description = {
            .general = (uint8_t*) "Fast note shifting in half steps.",
            .parameter = {
                .x = (uint8_t*) "Number of half steps from root note for first shift.",
                .y = (uint8_t*) "Number of half steps from root note for second shift."
            }
        }
    }
};
