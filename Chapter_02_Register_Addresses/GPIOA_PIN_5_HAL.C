#include "stm32f4xx_hal.h"
GPIO_InitTypeDef Gpio_InitStruct = {0};
_HAL_RCC_GPIO_CLK_ENABLE();
GPIO_InitStruct.Pin =GPIO_PIN_5;
GPIO_InitStruct.Mode =GPIO_MODE_OUTPUT_PP;
HAL_GPIO_Init(GPIOA, *GPIO_Initstruct);