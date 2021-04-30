/**
 * @file USART_config.c
 * @author Kiruba Thomas M (https://github.com/KirubaThomasM/Embedded_C_Activities.git)
 * @brief This file holds the USART initialization and USART Transmitter function definitions for Temperature value display
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<avr/io.h>
#include "USART_config.h"

void USART_init() 
{
    UBRR0H  = (BAUDRATE>>8);            //Assign the MSB 4 bits to USART Baud Rate 0 Register High
    UBRR0L  = (BAUDRATE);               //Assign the LSB 8 bits to USART Baud Rate 0 Register Low
    UCSR0C |= Character_size_8bit;
    UCSR0B |= Enable_Transmitter; 
}

void USART_transmit()
{
int i = 0;
char data[6];
if((temp>=0)&&(temp<=200))
    strcpy(data,"20'c_");
if((temp>=210)&&(temp<=500))
    strcpy(data,"25'c_");
if((temp>=510)&&(temp<=700))
    strcpy(data,"29'c_");
if((temp>=710)&&(temp<=1024))
    strcpy(data,"33'c_");
while(data[i] != 0)                     // print the String in serial monitor 
{
    while(EmptyTransmitBuffer);    // Wait for empty transmit buffer
    UDR0 = data[i];                     //Put data into buffer, sends the data 
    i++;                                // increment counter          
}
}
