/**
 * @file tempSensor_config.h
 * @author Kiruba Thomas M (https://github.com/KirubaThomasM/Embedded_C_Activities.git)
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __TEMPSENSOR_CONFIG_H__
#define __TEMPSENSOR_CONFIG_H__

/**
 *@brief include header files
 */
#include <avr/io.h>

/**
 * @brief Function to initialise ADC
 * 
 * @return void 
 */
void ADC_init();
/**
 * @brief Function to read ADC

 * @return int Value of ADC  
 */
uint16_t TempSensor();
/**
 * @brief Function to perform PWM
 * 
 * @return int Value of ADC
 */

#endif // TEMPHEADER_H_INCLUDED
