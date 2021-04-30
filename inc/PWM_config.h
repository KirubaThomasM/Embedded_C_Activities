/**
 * @file PWM_config.h
 * @author Kiruba Thomas M (https://github.com/KirubaThomasM/Embedded_C_Activities.git)
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __PWM_CONFIG_H__
#define __PWM_CONFIG_H__

/**
 *@brief include header files
 */
#include <avr/io.h>

/**
 * @brief Function to initialise ADC
 * @return void
 */

/**
 * @brief macro definitions
 */
#define Prescalar (1<<WGM12)|(1<<CS11)|(1<<CS10)
#define FastPWM   (1<<COM1A1)|(1<<WGM11)|(1<<WGM10)
uint16_t temp;

void ADC_init();

/**
 * @brief Function to read ADC
 * @return int value of ADC
 */
uint16_t Tempsensor();

/**
 * @brief Function to initialise PWM operation
 * @return int 
 */

int PWM_init(void);

/**
 * @brief Function to perform Pulse width modulation
 
 * @return int Corresponding value of ADC
 */
int PWM_output(void);

#endif // PULSEWIDTH_H_INCLUDED
