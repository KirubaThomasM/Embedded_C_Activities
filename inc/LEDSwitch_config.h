/**
 * @file LEDSwitch_config.h
 * @author Kiruba Thomas M(https://github.com/KirubaThomasM/Embedded_C_Activities.git)
 * @brief Switch input and LED output port configurations
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __LEDSwitch_CONFIG_H__
#define __LEDSwitch_CONFIG_H__
/**
 * @brief include necessary header files here
 */
#include <avr/io.h>
#include<util/delay.h>


/**
 * @brief macros, typedefs, structs, enums
 */
#define BothSwitchHigh   ((PIND&(1<<PD0)))&&((PIND&(1<<PD3)))
#define LEDON            (1<<PB0)
#define Switches         ((1<<PD0)|(1<<PD3))  

/**
 * @brief Function to set port configuration for LED and 2 switches
 * 
 * @return void 
 */
void Port_init();

/**
 * @brief Function to switch on LED when both switches are High
 * 
 * @return void
 */
void LedOn_BothSwHigh();


#endif // HEADER_H_INCLUDED
