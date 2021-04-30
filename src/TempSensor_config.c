/**
 * @file tempSensor_config.c
 * @author Kiruba Thomas M (https://github.com/KirubaThomasM/Embedded_C_Activities.git)
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 *@brief include header files
 */
#include<avr/io.h>
#include "TempSensor_config.h"

void ADC_init() //Initialise ADC
{
ADMUX|=(1<<REFS0);//Set resolution of 10 bit or 1024
ADCSRA=(1<<ADEN)|(7<<ADPS0);//Enable ADC and Set prescalar 
ADMUX&=0xf8;//select ADC channel only from 0-7
}

uint16_t TempSensor()//Read ADC
{
ADCSRA|=(1<<ADSC);//start single coversion
while(!((ADCSRA)&(1<<ADIF)));//wait for conversion to complete
ADCSRA|=(1<<ADIF);//clear ADIF by writing 1
return ADC;
}
