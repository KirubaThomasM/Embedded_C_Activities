/**
 * @file USART_config.h
 * @author Kiruba Thomas M (https://github.com/KirubaThomasM/Embedded_C_Activities.git)
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __USART_CONFIG_H__
#define __USART_CONFIG_H__
/**
 *@brief include header files
 */
#include <string.h>
/**
 * @brief macro definitions
 */
#define BAUD 9600
#define F_CPU 16000000UL
#define BAUDRATE ((F_CPU)/(BAUD*16UL)-1) //set Baud rate of 103
#define Character_size_8bit ((1<<UCSZ00)|(1<<UCSZ01))
#define Enable_Transmitter (1<<TXEN0)
#define EmptyTransmitBuffer (!(UCSR0A & (1<<UDRE0)))
/**
 * @brief global declarations
 * 
 */
uint16_t temp;//store temperature value;
/**
 * @brief Function to initialise USART
 * @return void
 */
void USART_init();
/**
 * @brief Function to transmit temperature through USART
 * @param data string to store the temperature in degree celsius
 * @param i increment counter
 * @return null
 */

void USART_transmit();

#endif // USART_H_INCLUDED
