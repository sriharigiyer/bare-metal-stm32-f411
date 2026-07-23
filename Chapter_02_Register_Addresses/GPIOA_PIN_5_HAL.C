#include "stm32f4xx_hal.h" //specific library to STM32F4 series
GPIO_InitTypeDef Gpio_InitStruct = {0};//declare and initialize the GPIO_InitTypeDef structure  
_HAL_RCC_GPIO_CLK_ENABLE();//enables clock for GPIO port A
GPIO_InitStruct.Pin =GPIO_PIN_5;//sets pin to be configures(pin 5 in this case)
GPIO_InitStruct.Mode =GPIO_MODE_OUTPUT_PP;
HAL_GPIO_Init(GPIOA, *GPIO_Initstruct);