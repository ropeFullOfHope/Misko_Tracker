#ifndef INC_DATA_H_
#define INC_DATA_H_

#include <stdint.h>
#include "void_utils.h"
#include "data_notes.h"
#include "data_commands.h"
#include "lcd.h"

#define OUTPUT_SAMPLE_RATE 48000
#define ENGINE_TICK_RATE   60
#define ROWS_PER_BEAT      4

#define CHANNEL_COUNT    8
#define SONG_ROW_COUNT   256
#define CHAIN_COUNT      127
#define CHAIN_ROW_COUNT  16
#define PHRASE_COUNT     255
#define PHRASE_ROW_COUNT 16
#define INSTRUMENT_COUNT 127
#define COMMANDS_PER_ROW 3

typedef uint32_t tempo_t;
typedef uint8_t chain_id_t;
typedef uint8_t phrase_id_t;
typedef uint8_t transpose_t;
typedef uint8_t note_t;
typedef uint8_t instrument_id_t;
typedef uint8_t volume_t;
typedef uint8_t command_id_t;
typedef uint8_t parameter_t;
typedef uint8_t master_volume_t;
typedef uint8_t cursor_delay_t;
typedef uint8_t sample_id_t;

typedef enum {
    INSTRUMENT_TYPE_NONE,
    INSTRUMENT_TYPE_BASIC_WAVE,
    INSTRUMENT_TYPE_SAMPLE,
    INSTRUMENT_TYPE_COUNT
} instrument_type_t;

typedef enum {
    BASIC_WAVE_SQUARE,
    BASIC_WAVE_SAWTOOTH,
    BASIC_WAVE_TRIANGLE,
    BASIC_WAVE_SINE,
    BASIC_WAVE_NOISE,
    BASIC_WAVE_COUNT
} basic_wave_t;
typedef uint8_t pwm_t;

typedef struct {
    tempo_t tempo;
} project_settings_t;

typedef struct {
    chain_id_t chain[CHANNEL_COUNT][SONG_ROW_COUNT];
} song_t;

typedef struct {
    phrase_id_t phrase[CHAIN_ROW_COUNT];
    transpose_t transpose[CHAIN_ROW_COUNT];
} chain_t;

typedef struct {
    note_t note[PHRASE_ROW_COUNT];
    instrument_id_t instrument[PHRASE_ROW_COUNT];
    volume_t volume[PHRASE_ROW_COUNT];
    command_id_t command[PHRASE_ROW_COUNT][COMMANDS_PER_ROW];
    parameter_t parameter[PHRASE_ROW_COUNT][COMMANDS_PER_ROW];
} phrase_t;

typedef struct {
    instrument_type_t instrument_type;
    volume_t volume;
    union {
        struct {
            basic_wave_t wave;
            pwm_t pwm;
        } basic_wave;
        struct {
            sample_id_t sample_id;
            note_t root_note;
        } sample;
    };
} instrument_t;

typedef struct {
    project_settings_t project_settings;
    song_t song;
    chain_t chain[CHAIN_COUNT];
    phrase_t phrase[PHRASE_COUNT];
    instrument_t instrument[INSTRUMENT_COUNT];
} project_data_t;

typedef struct {
    volume_t master_volume;
    struct {
        cursor_delay_t delay;
        cursor_delay_t repeat;
    } cursor;
} preferences_t;

extern project_data_t project_data;
extern preferences_t preferences;

#endif /* INC_DATA_H_ */
