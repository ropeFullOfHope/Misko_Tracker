#include "video.h"
#include "lcd.h"

void video_update(void)
{
    if (LCD_is_DMA_ready())
        LCD_update_one_tile();
}
