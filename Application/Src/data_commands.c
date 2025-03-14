#include "data_commands.h"

const command_metadata_t COMMAND_METADATA[COMMAND_COUNT] = {
    [COMMAND_NULL] = {
        .name = {'-', '-', '-'},
        .full_name = (symbol_t*) "NULL",
        .parameter_type = PARAMETER_XX,
        .description = {
            .general = (symbol_t*) "Something has gone horribly wrong.",
            .parameter = {
                .xx = (symbol_t*) "You really shouldn't be seeing this."
            }
        }
    },
    [COMMAND_ARP] = {
        .name = {'A', 'R', 'P'},
        .full_name = (symbol_t*) "Arpeggio",
        .parameter_type = PARAMETER_XY,
        .description = {
            .general = (symbol_t*) "Fast note shifting in half steps from root note.",
            .parameter = {
                .x = (symbol_t*) "First shift.",
                .y = (symbol_t*) "Second shift."
            }
        }
    },
    [COMMAND_PCH] = {
        .name = {'P', 'C', 'H'},
        .full_name = (symbol_t*) "Fine Pitch",
        .parameter_type = PARAMETER_XX,
        .description = {
            .general = (symbol_t*) "Fine pitch tuning in 1/128th of a half step.",
            .parameter = {
                .xx = (symbol_t*) "=80 or =00: No pitch shift.\n>80: Increase pitch\n<80: Decrease pitch"
            }
        }
    }
};
