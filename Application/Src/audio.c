#include "audio.h"
#include "audio_buffer.h"
#include "sound.h"

void audio_update(void)
{
    if (is_audio_buffer_empty())
        return;

    const int32_t SAMPLE = audio_buffer_read();

    sound_set(SAMPLE);
}
