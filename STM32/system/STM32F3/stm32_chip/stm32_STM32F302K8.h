//Autogenerated file
//MCU name: STM32F302K8
//MCU  xml: STM32F302K(6-8)Ux.xml
//GPIO remap/alternate function xml: GPIO-STM32F302_gpio_v1_0_Modes.xml

/*
const stm32_port_pin_type variant_pin_list[] = {
  { GPIOA, GPIO_PIN_0 },
  { GPIOA, GPIO_PIN_1 },
  { GPIOA, GPIO_PIN_2 },
  { GPIOA, GPIO_PIN_3 },
  { GPIOA, GPIO_PIN_4 },
  { GPIOA, GPIO_PIN_5 },
  { GPIOA, GPIO_PIN_6 },
  { GPIOA, GPIO_PIN_7 },
  { GPIOA, GPIO_PIN_8 },
  { GPIOA, GPIO_PIN_9 },
  { GPIOA, GPIO_PIN_10},
  { GPIOA, GPIO_PIN_11},
  { GPIOA, GPIO_PIN_12},
  { GPIOA, GPIO_PIN_13},
  { GPIOA, GPIO_PIN_14},
  { GPIOA, GPIO_PIN_15},
  { GPIOB, GPIO_PIN_0 },
  { GPIOB, GPIO_PIN_3 },
  { GPIOB, GPIO_PIN_4 },
  { GPIOB, GPIO_PIN_5 },
  { GPIOB, GPIO_PIN_6 },
  { GPIOB, GPIO_PIN_7 },
  { GPIOF, GPIO_PIN_0 },
  { GPIOF, GPIO_PIN_1 },
};
*/

/*
enum {
   PA0 ,
   PA1 ,
   PA2 ,
   PA3 ,
   PA4 ,
   PA5 ,
   PA6 ,
   PA7 ,
   PA8 ,
   PA9 ,
   PA10,
   PA11,
   PA12,
   PA13,
   PA14,
   PA15,
   PB0 ,
   PB3 ,
   PB4 ,
   PB5 ,
   PB6 ,
   PB7 ,
   PF0 ,
   PF1 ,
NUM_PINS,
};
*/

// --------------------ADC--------------------

// --------------------I2C--------------------

const stm32_af_pin_list_type chip_af_i2c_scl [] = {
//I2C1
    { I2C1  , GPIOA, GPIO_PIN_15 , GPIO_AF4_I2C1  }, 
    { I2C1  , GPIOB, GPIO_PIN_6  , GPIO_AF4_I2C1  }, 
//I2C2
    { I2C2  , GPIOA, GPIO_PIN_9  , GPIO_AF4_I2C2  }, 
    { I2C2  , GPIOF, GPIO_PIN_1  , GPIO_AF4_I2C2  }, 
//I2C3
    { I2C3  , GPIOA, GPIO_PIN_8  , GPIO_AF3_I2C3  }, 
}; 

const stm32_af_pin_list_type chip_af_i2c_sda [] = {
//I2C1
    { I2C1  , GPIOA, GPIO_PIN_14 , GPIO_AF4_I2C1  }, 
    { I2C1  , GPIOB, GPIO_PIN_7  , GPIO_AF4_I2C1  }, 
//I2C2
    { I2C2  , GPIOA, GPIO_PIN_10 , GPIO_AF4_I2C2  }, 
    { I2C2  , GPIOF, GPIO_PIN_0  , GPIO_AF4_I2C2  }, 
//I2C3
    { I2C3  , GPIOB, GPIO_PIN_5  , GPIO_AF8_I2C3  }, 
}; 

// --------------------I2S--------------------
#define STM32_CHIP_HAS_I2S

const stm32_af_pin_list_type chip_af_i2s_ck [] = {
//I2S2
    { SPI2  , GPIOF, GPIO_PIN_1  , GPIO_AF5_SPI2  }, 
//I2S3
    { SPI3  , GPIOB, GPIO_PIN_3  , GPIO_AF6_SPI3  }, 
}; 

const stm32_af_pin_list_type chip_af_i2s_mck [] = {
//I2S2
    { SPI2  , GPIOA, GPIO_PIN_8  , GPIO_AF5_SPI2  }, 
//I2S3
    { SPI3  , GPIOA, GPIO_PIN_9  , GPIO_AF5_SPI3  }, 
}; 

const stm32_af_pin_list_type chip_af_i2s_sd [] = {
//I2S2
    { SPI2  , GPIOA, GPIO_PIN_11 , GPIO_AF5_SPI2  }, 
//I2S3
    { SPI3  , GPIOB, GPIO_PIN_5  , GPIO_AF6_SPI3  }, 
}; 

const stm32_af_pin_list_type chip_af_i2s_ws [] = {
//I2S2
    { SPI2  , GPIOF, GPIO_PIN_0  , GPIO_AF5_SPI2  }, 
//I2S3
    { SPI3  , GPIOA, GPIO_PIN_4  , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOA, GPIO_PIN_15 , GPIO_AF6_SPI3  }, 
}; 

const stm32_af_pin_list_type chip_af_i2s_ext_sd [] = {
//I2S2
    { SPI2  , GPIOA, GPIO_PIN_10 , GPIO_AF5_SPI2  }, 
//I2S3
    { SPI3  , GPIOB, GPIO_PIN_4  , GPIO_AF6_SPI3  }, 
}; 

// --------------------SPI--------------------

const stm32_af_pin_list_type chip_af_spi_miso [] = {
//SPI2
    { SPI2  , GPIOA, GPIO_PIN_10 , GPIO_AF5_SPI2  }, 
//SPI3
    { SPI3  , GPIOB, GPIO_PIN_4  , GPIO_AF6_SPI3  }, 
}; 

const stm32_af_pin_list_type chip_af_spi_mosi [] = {
//SPI2
    { SPI2  , GPIOA, GPIO_PIN_11 , GPIO_AF5_SPI2  }, 
//SPI3
    { SPI3  , GPIOB, GPIO_PIN_5  , GPIO_AF6_SPI3  }, 
}; 

const stm32_af_pin_list_type chip_af_spi_nss [] = {
//SPI2
    { SPI2  , GPIOF, GPIO_PIN_0  , GPIO_AF5_SPI2  }, 
//SPI3
    { SPI3  , GPIOA, GPIO_PIN_4  , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOA, GPIO_PIN_15 , GPIO_AF6_SPI3  }, 
}; 

const stm32_af_pin_list_type chip_af_spi_sck [] = {
//SPI2
    { SPI2  , GPIOF, GPIO_PIN_1  , GPIO_AF5_SPI2  }, 
//SPI3
    { SPI3  , GPIOB, GPIO_PIN_3  , GPIO_AF6_SPI3  }, 
}; 

// --------------------TIM--------------------

// --------------------TIM1--------------------

// --------------------USART--------------------

const stm32_af_pin_list_type chip_af_usart_rx [] = {
//USART1
    { USART1, GPIOA, GPIO_PIN_10 , GPIO_AF7_USART1}, 
    { USART1, GPIOB, GPIO_PIN_7  , GPIO_AF7_USART1}, 
//USART2
    { USART2, GPIOA, GPIO_PIN_3  , GPIO_AF7_USART2}, 
    { USART2, GPIOA, GPIO_PIN_15 , GPIO_AF7_USART2}, 
    { USART2, GPIOB, GPIO_PIN_4  , GPIO_AF7_USART2}, 
}; 

const stm32_af_pin_list_type chip_af_usart_tx [] = {
//USART1
    { USART1, GPIOA, GPIO_PIN_9  , GPIO_AF7_USART1}, 
    { USART1, GPIOB, GPIO_PIN_6  , GPIO_AF7_USART1}, 
//USART2
    { USART2, GPIOA, GPIO_PIN_2  , GPIO_AF7_USART2}, 
    { USART2, GPIOA, GPIO_PIN_14 , GPIO_AF7_USART2}, 
    { USART2, GPIOB, GPIO_PIN_3  , GPIO_AF7_USART2}, 
}; 

const stm32_chip_adc1_channel_type chip_adc1_channel[] = {
    { GPIOA, GPIO_PIN_0  , ADC_CHANNEL_1  }, 
    { GPIOA, GPIO_PIN_1  , ADC_CHANNEL_2  }, 
    { GPIOA, GPIO_PIN_2  , ADC_CHANNEL_3  }, 
    { GPIOA, GPIO_PIN_3  , ADC_CHANNEL_4  }, 
    { GPIOA, GPIO_PIN_4  , ADC_CHANNEL_5  }, 
    { GPIOA, GPIO_PIN_6  , ADC_CHANNEL_10 }, 
    { GPIOB, GPIO_PIN_0  , ADC_CHANNEL_11 }, 
    { GPIOA, GPIO_PIN_7  , ADC_CHANNEL_15 }, 
};

const stm32_clock_freq_list_type chip_clock_freq_list[] = {
    {I2C1  , HAL_RCC_GetPCLK1Freq },  
    {I2C2  , HAL_RCC_GetPCLK1Freq },  
    {I2C3  , HAL_RCC_GetPCLK1Freq },  
    {SPI2  , HAL_RCC_GetPCLK1Freq },  
    {SPI3  , HAL_RCC_GetPCLK1Freq },  
    {USART2, HAL_RCC_GetPCLK1Freq },  

};

