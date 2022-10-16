#include <error.h>
#include <stdint.h>
#include <config.h>

int Init(SPI_HandleTypeDef hspi)
{
    configure_CONFIG_GEN0(hspi);
    return RES_OK;
}

int configure_CONFIG_GEN0(SPI_HandleTypeDef hspi)
{
    uint8_t data[2] = {0x60, 0x7};
    HAL_SPI_Transmit(&hspi, data, 2, HAL_MAX_DELAY);
    return RES_OK;
}