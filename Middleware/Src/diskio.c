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

DRESULT disk_write(BYTE pdrv, const BYTE* buff, LBA_t sector, UINT count)
{
    switch (pdrv)
    {
        case DEV_SD:
            if (sd_write(buff, sector, count) == 0)
                return RES_OK;
            else
                return RES_ERROR;

        default:
            return RES_PARERR;
    }
}

DRESULT disk_ioctl(BYTE pdrv, BYTE cmd, void* buff)
{
    switch (pdrv)
    {
        case DEV_SD:
            switch (cmd)
            {
                case CTRL_SYNC:
                    sd_sync();
                    return RES_OK;

                case GET_SECTOR_COUNT:
                    *(DWORD*)buff = sd_get_sector_count();
                    return RES_OK;

                case GET_SECTOR_SIZE:
                    *(DWORD*)buff = 512;
                    return RES_OK;

                case GET_BLOCK_SIZE:
                    *(DWORD*)buff = 64;
                    return RES_OK;

                case CTRL_TRIM:
                    return RES_OK;

                default:
                    return RES_PARERR;
            }

        default:
            return RES_PARERR;
    }
}
