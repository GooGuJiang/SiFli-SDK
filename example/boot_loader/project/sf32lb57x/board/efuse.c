#include "rtconfig.h"
#include "stdint.h"
#include "string.h"
#include "bf0_hal.h"
#include "board.h"
#include "../dfu/dfu.h"

#define AES_BLOCK_SIZE 512

ALIGN(4)
uint8_t g_uid[DFU_UID_SIZE];
uint8_t root_key[DFU_KEY_SIZE];
ALIGN(4)
static uint8_t g_aes_ctr_iv[DFU_IV_LEN];
dfu_efuse_read_hook_t g_dfu_efuse_read_hook;

int sifli_hw_efuse_write(uint8_t id, uint8_t *data, int size)
{
    int r = 0;
    switch (id)
    {
    case EFUSE_UID:
        r = HAL_EFUSE_Write2(EFUSE_UID_OFFSET, data, EFUSE_UID_SIZE);
        break;
    case DFU_CONFIG_PKGID:
        r = HAL_EFUSE_Write2(EFUSE_PKGID_OFFSET, data, EFUSE_PKGID_SIZE);
        break;
    case EFUSE_ID_ROOT:
        r = HAL_EFUSE_Write2(EFUSE_ROOTKEY_OFFSET, data, EFUSE_ROOTKEY_SIZE);
        break;
    case EFUSE_ID_SECURE_ENABLED:
    {
        r = HAL_EFUSE_Write2(EFUSE_SECEN_OFFSET, data, EFUSE_SECEN_SIZE);
    }
    break;
    default:
        r = 0;
    }
    return r;
}


int sifli_hw_efuse_read(uint8_t id, uint8_t *data, int size)
{
    int r;
    if (g_dfu_efuse_read_hook)
    {
        r = g_dfu_efuse_read_hook(id, data, size);
        if (r != 0)
            return r;
    }

    if (id == EFUSE_UID)
    {
        r = HAL_EFUSE_Read(EFUSE_UID_OFFSET, data, DFU_UID_SIZE);
    }
    else if (id == EFUSE_ID_ROOT)
    {
        r = HAL_EFUSE_Read(EFUSE_ROOTKEY_OFFSET, data, DFU_KEY_SIZE);
    }
    else if (id == EFUSE_ID_SECURE_ENABLED)
    {
        r = HAL_EFUSE_Read2(EFUSE_SECEN_OFFSET, data, EFUSE_SECEN_SIZE);
    }
    else
        r = 0;
    return r;

}

int sifli_hw_efuse_read_bank(uint32_t i)
{
    static uint8_t data[HAL_EFUSE_BANK_SIZE];
    int32_t r = 0;
    int size;
    if (i >= HAL_EFUSE_BANK_NUM)
        return -1;

    size = HAL_EFUSE_Read(HAL_EFUSE_BANK_SIZE * i * 8, data, HAL_EFUSE_BANK_SIZE);;
    if (size == 0)
        r = -2;

    return r;
}

