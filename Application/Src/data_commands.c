#include "data_commands.h"

const command_metadata_t COMMAND_METADATA[COMMAND_COUNT] = {
    [COMMAND_NULL] = {
        .name = {'-', '-', '-'},
        .full_name = (uint8_t*) "NULL",
        .parameter_type = PARAMETER_XX,
        .description = {
            .general = (uint8_t*) "---",
            .parameter = {
                .xx = (uint8_t*) "---"
            }
        }
    },
    [COMMAND_ARP] = {
        .name = {'A', 'R', 'P'},
        .full_name = (uint8_t*) "Arpeggio",
        .parameter_type = PARAMETER_XY,
        .description = {
            .general = (uint8_t*) "Fast note shifting in half steps from root note.",
            .parameter = {
                .x = (uint8_t*) "First shift.",
                .y = (uint8_t*) "Second shift."
            }
        }
    },
    [COMMAND_PCH] = {
        .name = {'P', 'C', 'H'},
        .full_name = (uint8_t*) "Fine Pitch",
        .parameter_type = PARAMETER_XX,
        .description = {
            .general = (uint8_t*) "Fine pitch tuning in 1/128th of a half step.",
            .parameter = {
                .xx = (uint8_t*) "= 80 or 00: No pitch shift.\n> 80: Increase pitch\n< 80: Decrease pitch"
            }
        }
    }
};
