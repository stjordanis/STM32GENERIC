
const stm32_af_pin_list_type chip_af_spi_miso [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_6  , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOB, GPIO_PIN_4  , GPIO_AF5_SPI1  }, 
//SPI2
    { SPI2  , GPIOB, GPIO_PIN_14 , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOC, GPIO_PIN_2  , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOI, GPIO_PIN_2  , GPIO_AF5_SPI2  }, 
//SPI3
    { SPI3  , GPIOB, GPIO_PIN_4  , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOC, GPIO_PIN_11 , GPIO_AF6_SPI3  }, 
//SPI4
    { SPI4  , GPIOE, GPIO_PIN_5  , GPIO_AF5_SPI4  }, 
    { SPI4  , GPIOE, GPIO_PIN_13 , GPIO_AF5_SPI4  }, 
//SPI5
    { SPI5  , GPIOH, GPIO_PIN_7  , GPIO_AF5_SPI5  }, 
}; 

const stm32_af_pin_list_type chip_af_spi_mosi [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_7  , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOB, GPIO_PIN_5  , GPIO_AF5_SPI1  }, 
//SPI2
    { SPI2  , GPIOB, GPIO_PIN_15 , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOC, GPIO_PIN_3  , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOI, GPIO_PIN_3  , GPIO_AF5_SPI2  }, 
//SPI3
    { SPI3  , GPIOB, GPIO_PIN_5  , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOC, GPIO_PIN_12 , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOD, GPIO_PIN_6  , GPIO_AF5_SPI1  }, 
//SPI4
    { SPI4  , GPIOE, GPIO_PIN_6  , GPIO_AF5_SPI4  }, 
    { SPI4  , GPIOE, GPIO_PIN_14 , GPIO_AF5_SPI4  }, 
//SPI5
    { SPI5  , GPIOF, GPIO_PIN_11 , GPIO_AF5_SPI5  }, 
}; 

const stm32_af_pin_list_type chip_af_spi_nss [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_4  , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOA, GPIO_PIN_15 , GPIO_AF5_SPI1  }, 
//SPI2
    { SPI2  , GPIOB, GPIO_PIN_9  , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOB, GPIO_PIN_12 , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOI, GPIO_PIN_0  , GPIO_AF5_SPI2  }, 
//SPI3
    { SPI3  , GPIOA, GPIO_PIN_4  , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOA, GPIO_PIN_15 , GPIO_AF6_SPI3  }, 
//SPI4
    { SPI4  , GPIOE, GPIO_PIN_4  , GPIO_AF5_SPI4  }, 
    { SPI4  , GPIOE, GPIO_PIN_11 , GPIO_AF5_SPI4  }, 
//SPI5
    { SPI5  , GPIOH, GPIO_PIN_5  , GPIO_AF5_SPI5  }, 
}; 

const stm32_af_pin_list_type chip_af_spi_sck [] = {
//SPI1
    { SPI1  , GPIOA, GPIO_PIN_5  , GPIO_AF5_SPI1  }, 
    { SPI1  , GPIOB, GPIO_PIN_3  , GPIO_AF5_SPI1  }, 
//SPI2
    { SPI2  , GPIOB, GPIO_PIN_10 , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOB, GPIO_PIN_13 , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOD, GPIO_PIN_3  , GPIO_AF5_SPI2  }, 
    { SPI2  , GPIOI, GPIO_PIN_1  , GPIO_AF5_SPI2  }, 
//SPI3
    { SPI3  , GPIOB, GPIO_PIN_3  , GPIO_AF6_SPI3  }, 
    { SPI3  , GPIOC, GPIO_PIN_10 , GPIO_AF6_SPI3  }, 
//SPI4
    { SPI4  , GPIOE, GPIO_PIN_2  , GPIO_AF5_SPI4  }, 
    { SPI4  , GPIOE, GPIO_PIN_12 , GPIO_AF5_SPI4  }, 
//SPI5
    { SPI5  , GPIOH, GPIO_PIN_6  , GPIO_AF5_SPI5  }, 
}; 
