#include "file_manager.h"
#include <string.h>
#include "data.h"
#include "ff.h"
#include "lcd.h"
#include "region.h"
#include "micros.h"
#include "volume.h"

#define CURRENT_CONFIG_VERSION  1
#define CURRENT_PROJECT_VERSION 1

typedef enum {
    R_OK,
    R_ERROR,
    R_MOUNT_ERROR,
    R_OPEN_ERROR,
    R_CLOSE_ERROR,
    R_READ_ERROR,
    R_WRITE_ERROR,
    R_CORRUPTED_FILE
} result_t;

typedef enum {
    BT_NULL,
    BT_CHAIN,
    BT_PHRASE,
    BT_INSTRUMENT
} block_type_t;

static void log_clear(void);
static void log_write(const char *text);
static result_t sd_mount(void);
static result_t sd_load_config(void);
static result_t sd_load_config_backup(void);
static result_t sd_create_default_config(void);
static result_t sd_deserialize_config(FIL *file);
static result_t sd_serialize_config(FIL *file);
static result_t sd_load_project(void);
static result_t sd_load_project_backup(void);
static result_t sd_create_default_project(void);
static result_t sd_deserialize_project(FIL *file);
static result_t sd_serialize_project(FIL *file);

static const region_t REGION_FMANAGER = {
    .start.x = 1,
    .start.y = 1,
    .size.x = 38,
    .size.y = 28
};
static const char MAGIC_CONFIG[4]  = {'M', 'C', 'F', 'G'};
static const char MAGIC_PROJECT[4] = {'M', 'T', 'R', 'K'};

static FATFS sd;
static int32_t row;

void fmanager_init(void)
{
    result_t result;

    // Mount the microSD card.
    do {
        log_clear();

        result = sd_mount();

        if (result != R_OK) {
            log_write("Retrying in 3 seconds...");
            delay_micros(3000000);
        }
    } while (result != R_OK);

    // Load the configuration file.
    result = sd_load_config();
    if (result != R_OK && result != R_CLOSE_ERROR) {
        result = sd_load_config_backup();
        if (result != R_OK && result != R_CLOSE_ERROR) {
            result = sd_create_default_config();
            if (result != R_OK && result != R_CLOSE_ERROR) {
                log_write("CRITICAL FAILURE!!");
                for (;;);
            }
        }
    }

    // Load the project file.
    result = sd_load_project();
    if (result != R_OK && result != R_CLOSE_ERROR) {
        result = sd_load_project_backup();
        if (result != R_OK && result != R_CLOSE_ERROR) {
            result = sd_create_default_project();
            if (result != R_OK && result != R_CLOSE_ERROR) {
                log_write("CRITICAL FAILURE!!");
                for (;;);
            }
        }
    }

    delay_micros(1000000);

    log_clear();
}

void fmanager_save_config(void)
{
    FIL file;

    // Create a temporary config file.
    if (f_open(&file, "0:/config.tmp", FA_WRITE | FA_CREATE_ALWAYS) != FR_OK) {
        LED_write(1);
        return;
    }
    sd_serialize_config(&file);
    if (f_close(&file) != FR_OK) {
        LED_write(2);
        return;
    }

    // Delete the old backup config file.
    if ((f_unlink("0:/config.bak") | FR_OK | FR_NO_FILE) != (FR_OK | FR_NO_FILE)) {
        LED_write(3);
        return;
    }

    // Rename the current config file to a backup config file.
    if (f_rename("0:/config.cfg", "0:/config.bak") != FR_OK) {
        LED_write(4);
        return;
    }

    // Rename the temporary config file to a current config file.
    if (f_rename("0:/config.tmp", "0:/config.cfg") != FR_OK) {
        LED_write(5);
        return;
    }

    LED_write(0xFF);
}

void fmanager_save_project(void)
{
    FIL file;

    // Create a temporary project file.
    if (f_open(&file, "0:/project.tmp", FA_WRITE | FA_CREATE_ALWAYS) != FR_OK) return;
    sd_serialize_project(&file);
    if (f_close(&file) != FR_OK) return;

    // Delete the old backup project file.
    if ((f_unlink("0:/project.bak") | FR_OK | FR_NO_FILE) != (FR_OK | FR_NO_FILE)) return;

    // Rename the current project file to a backup project file.
    if (f_rename("0:/project.trk", "0:/project.bak") != FR_OK) return;

    // Rename the temporary project file to a current project file.
    if (f_rename("0:/project.tmp", "0:/project.trk") != FR_OK) return;
}

static void log_clear(void)
{
    region_fill(&REGION_FMANAGER, ' ', COLOR_NORMAL);
    LCD_update_screen();
    row = 0;
}

static void log_write(const char *text)
{
    region_draw_text(&REGION_FMANAGER, text, COLOR_NORMAL, 0, row);
    LCD_update_screen();
    row++;
}



static result_t sd_mount(void)
{
    FRESULT f_result;

    log_write("Mounting microSD card...");
    f_result = f_mount(&sd, "0:", 1);
    if (f_result != FR_OK) {
        log_write("ERROR: Mount failed");
        return R_MOUNT_ERROR;
    }

    return R_OK;
}

static result_t sd_load_config(void)
{
    FIL file;
    FRESULT f_result;
    result_t result;

    log_write("Reading \"config.cfg\"...");
    f_result = f_open(&file, "0:/config.cfg", FA_READ | FA_OPEN_EXISTING);
    if (f_result == FR_NO_FILE) {
        log_write("ERROR: No such file exists");
        return R_OPEN_ERROR;
    }
    else if (f_result != FR_OK) {
        log_write("ERROR: Could not open the file");
        return R_OPEN_ERROR;
    }

    result = sd_deserialize_config(&file);
    if (result == R_READ_ERROR) {
        log_write("ERROR: Could not read the file");
        return R_READ_ERROR;
    }
    else if (result == R_CORRUPTED_FILE) {
        log_write("ERROR: File is corrupted");
        return R_CORRUPTED_FILE;
    }
    else if (result != R_OK) {
        log_write("ERROR");
        return R_ERROR;
    }

    f_result = f_close(&file);
    if (f_result != FR_OK) {
        log_write("ERROR: Could not close the file");
        return R_CLOSE_ERROR;
    }

    return R_OK;
}

static result_t sd_load_config_backup(void)
{
    FIL file;
    FRESULT f_result;
    result_t result;

    log_write("Reading \"config.bak\"...");
    f_result = f_open(&file, "0:/config.bak", FA_READ | FA_OPEN_EXISTING);
    if (f_result == FR_NO_FILE) {
        log_write("ERROR: No such file exists");
        return R_OPEN_ERROR;
    }
    else if (f_result != FR_OK) {
        log_write("ERROR: Could not open the file");
        return R_OPEN_ERROR;
    }

    result = sd_deserialize_config(&file);
    if (result == R_READ_ERROR) {
        log_write("ERROR: Could not read the file");
        return R_READ_ERROR;
    }
    else if (result == R_CORRUPTED_FILE) {
        log_write("ERROR: File is corrupted");
        return R_CORRUPTED_FILE;
    }
    else if (result != R_OK) {
        log_write("ERROR");
        return R_ERROR;
    }

    f_result = f_close(&file);
    if (f_result != FR_OK) {
        log_write("ERROR: Could not close the file");
        return R_CLOSE_ERROR;
    }

    return R_OK;
}

static result_t sd_create_default_config(void)
{
    FIL file;
    FRESULT f_result;
    result_t result;

    log_write("Creating \"config.cfg\"...");
    f_result = f_open(&file, "0:/config.cfg", FA_WRITE | FA_CREATE_NEW);
    if (f_result == FR_EXIST) {
        log_write("ERROR: File already exists");
        return R_OPEN_ERROR;
    }
    else if (f_result != FR_OK) {
        log_write("ERROR: Could not create the file");
        return R_OPEN_ERROR;
    }

    result = sd_serialize_config(&file);
    if (result == R_ERROR) {
        log_write("ERROR: Could not write to the file");
        return R_WRITE_ERROR;
    }

    f_result = f_close(&file);
    if (f_result != FR_OK) {
        log_write("ERROR: Could not close the file");
        return R_CLOSE_ERROR;
    }

    return R_OK;
}

static result_t sd_deserialize_config(FIL *file)
{
    uint8_t buffer[4];
    UINT bytes_to_read;
    UINT bytes_read;

    //// Header
    // Magic numbers (MCFG)
    bytes_to_read = 4;
    if ((f_read(file, buffer, bytes_to_read, &bytes_read) != FR_OK) || (bytes_read < bytes_to_read)) return R_READ_ERROR;
    for (uint32_t i = 0; i < bytes_to_read; i++) {
        if (buffer[i] != MAGIC_CONFIG[i])
            return R_CORRUPTED_FILE;
    }

    // Version
    uint16_t version;
    bytes_to_read = sizeof(version);
    if ((f_read(file, buffer, bytes_to_read, &bytes_read) != FR_OK) || (bytes_read < bytes_to_read)) return R_READ_ERROR;
    version = (buffer[0] << 0) | (buffer[1] << 8);
    if (version > CURRENT_CONFIG_VERSION)
        return R_CORRUPTED_FILE;

    // Padding (possible future CRC16)
    bytes_to_read = 2;
    if ((f_read(file, buffer, bytes_to_read, &bytes_read) != FR_OK) || (bytes_read < bytes_to_read)) return R_READ_ERROR;

    //// Data
    // Master volume
    bytes_to_read = sizeof(volume_t);
    if ((f_read(file, buffer, bytes_to_read, &bytes_read) != FR_OK) || (bytes_read < bytes_to_read)) return R_READ_ERROR;
    preferences.master_volume = *(volume_t *)buffer;

    volume_set(preferences.master_volume);

    // Cursor delay
    bytes_to_read = sizeof(cursor_delay_t);
    if ((f_read(file, buffer, bytes_to_read, &bytes_read) != FR_OK) || (bytes_read < bytes_to_read)) return R_READ_ERROR;
    preferences.cursor.delay = *(cursor_delay_t *)buffer;

    // Cursor repeat
    bytes_to_read = sizeof(cursor_delay_t);
    if ((f_read(file, buffer, bytes_to_read, &bytes_read) != FR_OK) || (bytes_read < bytes_to_read)) return R_READ_ERROR;
    preferences.cursor.repeat = *(cursor_delay_t *)buffer;

    return R_OK;
}

static result_t sd_serialize_config(FIL *file)
{
    uint8_t buffer[4];
    UINT bytes_to_write;
    UINT bytes_written;

    //// Header
    // Magic numbers (MCFG)
    bytes_to_write = 4;
    for (uint32_t i = 0; i < bytes_to_write; i++)
        buffer[i] = MAGIC_CONFIG[i];
    if ((f_write(file, buffer, bytes_to_write, &bytes_written) != FR_OK) || (bytes_written < bytes_to_write)) return R_WRITE_ERROR;

    // Version
    const uint16_t version = CURRENT_CONFIG_VERSION;
    bytes_to_write = sizeof(version);
    *(uint16_t *)buffer = version;
    if ((f_write(file, buffer, bytes_to_write, &bytes_written) != FR_OK) || (bytes_written < bytes_to_write)) return R_WRITE_ERROR;

    // Padding (possible future CRC16)
    const uint16_t padding = 0x0000;
    bytes_to_write = sizeof(padding);
    *(uint16_t *)buffer = padding;
    if ((f_write(file, buffer, bytes_to_write, &bytes_written) != FR_OK) || (bytes_written < bytes_to_write)) return R_WRITE_ERROR;

    //// Data
    // Master volume
    bytes_to_write = sizeof(volume_t);
    *(volume_t *)buffer = preferences.master_volume;
    if ((f_write(file, buffer, bytes_to_write, &bytes_written) != FR_OK) || (bytes_written < bytes_to_write)) return R_WRITE_ERROR;

    // Cursor delay
    bytes_to_write = sizeof(cursor_delay_t);
    *(cursor_delay_t *)buffer = preferences.cursor.delay;
    if ((f_write(file, buffer, bytes_to_write, &bytes_written) != FR_OK) || (bytes_written < bytes_to_write)) return R_WRITE_ERROR;

    // Cursor repeat
    bytes_to_write = sizeof(cursor_delay_t);
    *(cursor_delay_t *)buffer = preferences.cursor.repeat;
    if ((f_write(file, buffer, bytes_to_write, &bytes_written) != FR_OK) || (bytes_written < bytes_to_write)) return R_WRITE_ERROR;

    return R_OK;
}

static result_t sd_load_project(void)
{
    FIL file;
    FRESULT f_result;
    result_t result;

    log_write("Reading \"project.trk\"...");
    f_result = f_open(&file, "0:/project.trk", FA_READ | FA_OPEN_EXISTING);
    if (f_result == FR_NO_FILE) {
        log_write("ERROR: No such file exists");
        return R_OPEN_ERROR;
    }
    else if (f_result != FR_OK) {
        log_write("ERROR: Could not open the file");
        return R_OPEN_ERROR;
    }

    result = sd_deserialize_project(&file);
    if (result == R_READ_ERROR) {
        log_write("ERROR: Could not read the file");
        return R_READ_ERROR;
    }
    else if (result == R_CORRUPTED_FILE) {
        log_write("ERROR: File is corrupted");
        return R_CORRUPTED_FILE;
    }
    else if (result != R_OK) {
        log_write("ERROR");
        return R_ERROR;
    }

    f_result = f_close(&file);
    if (f_result != FR_OK) {
        log_write("ERROR: Could not close the file");
        return R_CLOSE_ERROR;
    }

    return R_OK;
}

static result_t sd_load_project_backup(void)
{
    FIL file;
    FRESULT f_result;
    result_t result;

    log_write("Reading \"project.bak\"...");
    f_result = f_open(&file, "0:/project.bak", FA_READ | FA_OPEN_EXISTING);
    if (f_result == FR_NO_FILE) {
        log_write("ERROR: No such file exists");
        return R_OPEN_ERROR;
    }
    else if (f_result != FR_OK) {
        log_write("ERROR: Could not open the file");
        return R_OPEN_ERROR;
    }

    result = sd_deserialize_project(&file);
    if (result == R_READ_ERROR) {
        log_write("ERROR: Could not read the file");
        return R_READ_ERROR;
    }
    else if (result == R_CORRUPTED_FILE) {
        log_write("ERROR: File is corrupted");
        return R_CORRUPTED_FILE;
    }
    else if (result != R_OK) {
        log_write("ERROR");
        return R_ERROR;
    }

    f_result = f_close(&file);
    if (f_result != FR_OK) {
        log_write("ERROR: Could not close the file");
        return R_CLOSE_ERROR;
    }

    return R_OK;
}

static result_t sd_create_default_project(void)
{
    FIL file;
    FRESULT f_result;
    result_t result;

    log_write("Creating \"project.trk\"...");
    f_result = f_open(&file, "0:/project.trk", FA_WRITE | FA_CREATE_NEW);
    if (f_result == FR_EXIST) {
        log_write("ERROR: File already exists");
        return R_OPEN_ERROR;
    }
    else if (f_result != FR_OK) {
        log_write("ERROR: Could not create the file");
        return R_OPEN_ERROR;
    }

    result = sd_serialize_project(&file);
    if (result == R_ERROR) {
        log_write("ERROR: Could not write to the file");
        return R_WRITE_ERROR;
    }

    f_result = f_close(&file);
    if (f_result != FR_OK) {
        log_write("ERROR: Could not close the file");
        return R_CLOSE_ERROR;
    }

    return R_OK;
}

static result_t sd_deserialize_project(FIL *file)
{
    uint8_t buffer[4];
    UINT bytes_to_read;
    UINT bytes_read;

    //// Header
    // Magic numbers (MCFG)
    bytes_to_read = 4;
    if ((f_read(file, buffer, bytes_to_read, &bytes_read) != FR_OK) || (bytes_read < bytes_to_read)) return R_READ_ERROR;
    for (uint32_t i = 0; i < bytes_to_read; i++) {
        if (buffer[i] != MAGIC_PROJECT[i])
            return R_CORRUPTED_FILE;
    }

    // Version
    uint16_t version;
    bytes_to_read = sizeof(version);
    if ((f_read(file, buffer, bytes_to_read, &bytes_read) != FR_OK) || (bytes_read < bytes_to_read)) return R_READ_ERROR;
    version = (buffer[0] << 0) | (buffer[1] << 8);
    if (version > CURRENT_PROJECT_VERSION)
        return R_CORRUPTED_FILE;

    // Padding (possible future CRC16)
    bytes_to_read = 2;
    if ((f_read(file, buffer, bytes_to_read, &bytes_read) != FR_OK) || (bytes_read < bytes_to_read)) return R_READ_ERROR;

    //// Data
    // Project Settings
    bytes_to_read = sizeof(tempo_t);
    if ((f_read(file, buffer, bytes_to_read, &bytes_read) != FR_OK) || (bytes_read < bytes_to_read)) return R_READ_ERROR;
    project_data.project_settings.tempo = *(tempo_t *)buffer;

    // Song
    for (uint32_t channel = 0; channel < CHANNEL_COUNT; channel++) {
        uint16_t channel_row_length;
        bytes_to_read = sizeof(uint16_t);
        if ((f_read(file, buffer, bytes_to_read, &bytes_read) != FR_OK) || (bytes_read < bytes_to_read)) return R_READ_ERROR;
        channel_row_length = *(uint16_t *)buffer;
        for (uint16_t row = 0; row < channel_row_length; row++) {
            bytes_to_read = sizeof(chain_id_t);
            if ((f_read(file, buffer, bytes_to_read, &bytes_read) != FR_OK) || (bytes_read < bytes_to_read)) return R_READ_ERROR;
            project_data.song.chain[channel][row] = *(chain_id_t *)buffer;
        }
    }

    // Chains / Phrases / Instruments
    for (;;) {
        block_type_t data_block_type;
        uint16_t data_block_id;

        //// Header
        // Data Block Type
        bytes_to_read = sizeof(uint16_t);
        if (f_read(file, buffer, bytes_to_read, &bytes_read) != FR_OK) return R_READ_ERROR;
        if (bytes_read < bytes_to_read) {
            if (bytes_read == 0)
                return R_OK;
            else
                return R_CORRUPTED_FILE;
        }
        data_block_type = *(block_type_t *)buffer;

        // Data Block ID
        bytes_to_read = sizeof(uint16_t);
        if ((f_read(file, buffer, bytes_to_read, &bytes_read) != FR_OK) || (bytes_read < bytes_to_read)) return R_READ_ERROR;
        data_block_id = *(uint16_t *)buffer;

        switch (data_block_type) {
            case BT_CHAIN: {
                uint8_t buffer[sizeof(chain_t)];
                bytes_to_read = sizeof(chain_t);
                if ((f_read(file, buffer, bytes_to_read, &bytes_read) != FR_OK) || (bytes_read < bytes_to_read)) return R_READ_ERROR;
                project_data.chain[data_block_id] = *(chain_t *)buffer;

                break;
            }
            case BT_PHRASE: {
                uint8_t buffer[sizeof(phrase_t)];
                bytes_to_read = sizeof(phrase_t);
                if ((f_read(file, buffer, bytes_to_read, &bytes_read) != FR_OK) || (bytes_read < bytes_to_read)) return R_READ_ERROR;
                project_data.phrase[data_block_id] = *(phrase_t *)buffer;

                break;
            }
            case BT_INSTRUMENT: {
                uint8_t buffer[sizeof(instrument_t)];
                bytes_to_read = sizeof(instrument_t);
                if ((f_read(file, buffer, bytes_to_read, &bytes_read) != FR_OK) || (bytes_read < bytes_to_read)) return R_READ_ERROR;
                project_data.instrument[data_block_id] = *(instrument_t *)buffer;

                break;
            }
            default: {
                return R_CORRUPTED_FILE;
            }
        }
    }

    return R_OK;
}

static result_t sd_serialize_project(FIL *file)
{
    uint8_t buffer[4];
    UINT bytes_to_write;
    UINT bytes_written;

    //// Header
    // Magic numbers (MTRK)
    bytes_to_write = 4;
    for (uint32_t i = 0; i < bytes_to_write; i++)
        buffer[i] = MAGIC_PROJECT[i];
    if ((f_write(file, buffer, bytes_to_write, &bytes_written) != FR_OK) || (bytes_written < bytes_to_write)) return R_WRITE_ERROR;

    // Version
    const uint16_t version = CURRENT_PROJECT_VERSION;
    bytes_to_write = sizeof(version);
    *(uint16_t *)buffer = version;
    if ((f_write(file, buffer, bytes_to_write, &bytes_written) != FR_OK) || (bytes_written < bytes_to_write)) return R_WRITE_ERROR;

    // Padding (possible future CRC16)
    const uint16_t padding = 0x0000;
    bytes_to_write = sizeof(padding);
    *(uint16_t *)buffer = padding;
    if ((f_write(file, buffer, bytes_to_write, &bytes_written) != FR_OK) || (bytes_written < bytes_to_write)) return R_WRITE_ERROR;

    //// Data
    // Project Settings
    bytes_to_write = sizeof(tempo_t);
    *(tempo_t *)buffer = project_data.project_settings.tempo;
    if ((f_write(file, buffer, bytes_to_write, &bytes_written) != FR_OK) || (bytes_written < bytes_to_write)) return R_WRITE_ERROR;

    // Song
    for (uint32_t channel = 0; channel < CHANNEL_COUNT; channel++) {
        uint16_t channel_row_length = 0;
        for (uint16_t row = 0; row < SONG_ROW_COUNT; row++) {
            if (project_data.song.chain[channel][row] != 0x00)
                channel_row_length = row + 1;
        }
        bytes_to_write = sizeof(uint16_t);
        *(uint16_t *)buffer = channel_row_length;
        if ((f_write(file, buffer, bytes_to_write, &bytes_written) != FR_OK) || (bytes_written < bytes_to_write)) return R_WRITE_ERROR;
        for (uint16_t row = 0; row < channel_row_length; row++) {
            bytes_to_write = sizeof(chain_id_t);
            *(chain_id_t *)buffer = project_data.song.chain[channel][row];
            if ((f_write(file, buffer, bytes_to_write, &bytes_written) != FR_OK) || (bytes_written < bytes_to_write)) return R_WRITE_ERROR;
        }
    }

    // Chains
    for (uint32_t chain_id = 0; chain_id < CHAIN_COUNT; chain_id++) {
        chain_t empty_chain = {0};
        if (memcmp(&project_data.chain[chain_id], &empty_chain, sizeof(chain_t)) == 0)
            continue;

        bytes_to_write = sizeof(uint16_t);
        *(uint16_t *)buffer = (uint16_t)BT_CHAIN;
        if ((f_write(file, buffer, bytes_to_write, &bytes_written) != FR_OK) || (bytes_written < bytes_to_write)) return R_WRITE_ERROR;

        bytes_to_write = sizeof(uint16_t);
        *(uint16_t *)buffer = (uint16_t)chain_id;
        if ((f_write(file, buffer, bytes_to_write, &bytes_written) != FR_OK) || (bytes_written < bytes_to_write)) return R_WRITE_ERROR;

        uint8_t buffer[sizeof(chain_t)];
        bytes_to_write = sizeof(chain_t);
        *(chain_t *)buffer = project_data.chain[chain_id];
        if ((f_write(file, buffer, bytes_to_write, &bytes_written) != FR_OK) || (bytes_written < bytes_to_write)) return R_WRITE_ERROR;
    }

    // Phrase
    for (uint32_t phrase_id = 0; phrase_id < PHRASE_COUNT; phrase_id++) {
        phrase_t empty_phrase = {0};
        if (memcmp(&project_data.phrase[phrase_id], &empty_phrase, sizeof(phrase_t)) == 0)
            continue;

        bytes_to_write = sizeof(uint16_t);
        *(uint16_t *)buffer = (uint16_t)BT_PHRASE;
        if ((f_write(file, buffer, bytes_to_write, &bytes_written) != FR_OK) || (bytes_written < bytes_to_write)) return R_WRITE_ERROR;

        bytes_to_write = sizeof(uint16_t);
        *(uint16_t *)buffer = (uint16_t)phrase_id;
        if ((f_write(file, buffer, bytes_to_write, &bytes_written) != FR_OK) || (bytes_written < bytes_to_write)) return R_WRITE_ERROR;

        uint8_t buffer[sizeof(phrase_t)];
        bytes_to_write = sizeof(phrase_t);
        *(phrase_t *)buffer = project_data.phrase[phrase_id];
        if ((f_write(file, buffer, bytes_to_write, &bytes_written) != FR_OK) || (bytes_written < bytes_to_write)) return R_WRITE_ERROR;
    }

    // Instrument
    for (uint32_t instrument_id = 0; instrument_id < INSTRUMENT_COUNT; instrument_id++) {
        instrument_t empty_instrument = {0};
        if (memcmp(&project_data.instrument[instrument_id], &empty_instrument, sizeof(instrument_t)) == 0)
            continue;

        bytes_to_write = sizeof(uint16_t);
        *(uint16_t *)buffer = (uint16_t)BT_INSTRUMENT;
        if ((f_write(file, buffer, bytes_to_write, &bytes_written) != FR_OK) || (bytes_written < bytes_to_write)) return R_WRITE_ERROR;

        bytes_to_write = sizeof(uint16_t);
        *(uint16_t *)buffer = (uint16_t)instrument_id;
        if ((f_write(file, buffer, bytes_to_write, &bytes_written) != FR_OK) || (bytes_written < bytes_to_write)) return R_WRITE_ERROR;

        uint8_t buffer[sizeof(instrument_t)];
        bytes_to_write = sizeof(instrument_t);
        *(instrument_t *)buffer = project_data.instrument[instrument_id];
        if ((f_write(file, buffer, bytes_to_write, &bytes_written) != FR_OK) || (bytes_written < bytes_to_write)) return R_WRITE_ERROR;
    }

    return R_OK;
}
