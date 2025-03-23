#include "audio.h"

#include "stdint.h"

volatile uint32_t x = 0;

void audio_update(void)
{
    x++;
}
