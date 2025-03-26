#include "audio_buffer.h"
#include "interrupt.h"

#define AUDIO_BUFFER_SIZE 480

static volatile int32_t audio_buffer[AUDIO_BUFFER_SIZE];
static volatile uint32_t audio_buffer_sample_count = 0;
static volatile uint32_t read_head = 0;
static uint32_t write_head = 0;

int32_t audio_buffer_read(void)
{
    static int32_t sample = 0;

    if (is_audio_buffer_empty())
        return sample;

    sample = audio_buffer[read_head];
    audio_buffer_sample_count -= 1;
    read_head = (read_head + 1) % AUDIO_BUFFER_SIZE;

    return sample;
}

void audio_buffer_write(int32_t sample)
{
    if (is_audio_buffer_full())
        return;

    global_interrupts_disable();
    audio_buffer[write_head] = sample;
    audio_buffer_sample_count += 1;
    global_interrupts_enable();

    write_head = (write_head + 1) % AUDIO_BUFFER_SIZE;
}

void audio_buffer_clear(void)
{
    global_interrupts_disable();
    read_head = write_head;
    audio_buffer_sample_count = 0;
    global_interrupts_enable();
}

bool is_audio_buffer_empty(void)
{
    return (audio_buffer_sample_count == 0);
}

bool is_audio_buffer_full(void)
{
    return (audio_buffer_sample_count >= AUDIO_BUFFER_SIZE);
}
