#include "data_commands.h"

const command_metadata_t COMMAND_METADATA[COMMAND_COUNT] = {
    [COMMAND_NULL] = {
        .name = {'-', '-', '-'},
        .full_name = "NULL",
        .parameter_type = PARAMETER_XX,
        .description = {
            .general = "Something has gone horribly wrong.",
            .parameter = {
                .xx = "You really shouldn't be seeing this."
            }
        }
    },
    [COMMAND_ARP] = {
        .name = {'A', 'R', 'P'},
        .full_name = "Arpeggio",
        .parameter_type = PARAMETER_XY,
        .description = {
            .general = "Fast note shifting in half steps from root note.",
            .parameter = {
                .x = "First shift.",
                .y = "Second shift."
            }
        }
    },
    [COMMAND_PCH] = {
        .name = {'P', 'C', 'H'},
        .full_name = "Fine Pitch",
        .parameter_type = PARAMETER_XX,
        .description = {
            .general = "Fine pitch tuning in 1/128th of a half step.",
            .parameter = {
                .xx = "=80 or =00: No pitch shift.\n>80: Increase pitch\n<80: Decrease pitch"
            }
        }
    }
};
