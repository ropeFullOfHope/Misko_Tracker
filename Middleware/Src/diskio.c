#include "diskio.h"
#include "sd.h"

#define DEV_SD 0

DSTATUS disk_status(BYTE pdrv)
{
    switch (pdrv)
    {
        case DEV_SD:
            return sd_status();
            break;
    }

    return STA_NOINIT;
}

DSTATUS disk_initialize(BYTE pdrv)
{
    switch (pdrv)
    {
        case DEV_SD:
            return STA_NOINIT;
            break;
    }

    return STA_NOINIT;
}

DRESULT disk_read(BYTE pdrv, BYTE *buff, LBA_t sector, UINT count)
{
    switch (pdrv)
    {
        case DEV_SD:
            return RES_NOTRDY;
            break;
    }

    return RES_NOTRDY;
}
