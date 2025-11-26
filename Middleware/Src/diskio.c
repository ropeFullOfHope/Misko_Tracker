#include "diskio.h"
#include "sd.h"

#define DEV_SD 0

DSTATUS disk_initialize(BYTE pdrv)
{
    switch (pdrv)
    {
        case DEV_SD:
            if (sd_init() == 0)
                return 0;
            else
                return STA_NOINIT;

        default:
            return STA_NOINIT;
    }
}

DSTATUS disk_status(BYTE pdrv)
{
    switch (pdrv)
    {
        case DEV_SD:
            if (sd_status() == 0)
                return 0;
            else
                return STA_NOINIT;

        default:
            return STA_NOINIT;
    }
}

DRESULT disk_read(BYTE pdrv, BYTE *buff, LBA_t sector, UINT count)
{
    switch (pdrv)
    {
        case DEV_SD:
            if (sd_read(buff, sector, count) == 0)
                return RES_OK;
            else
                return RES_ERROR;

        default:
            return RES_PARERR;
    }
}
