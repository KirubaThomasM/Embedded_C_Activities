/**
 * @file main.c
 * @author Kiruba Thomas M (https://github.com/KirubaThomasM/Embedded_C_Activities.git)
 * @brief Main function with all necessary activity function calls
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * @brief include necessary header files here
 */
#include "LEDSwitch_config.h"
#include "TempSensor_config.h"
#include "PWM_config.h"
#include "USART_config.h"

/**
 * @brief main function
 * @return int 
 */
int main(void)
 {  
    Port_init();
    ADC_init();
    PWM_init();
    USART_init();
    while(1)
    {
    LedOn_BothSwHigh();
    temp = TempSensor();
    PWM_output();
    USART_transmit();
    }
   return 0;
 }
