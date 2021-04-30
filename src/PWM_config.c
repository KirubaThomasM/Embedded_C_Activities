
/**
 * @file PWM_config.c
 * @author Kiruba Thomas M (https://github.com/KirubaThomasM/Embedded_C_Activities.git)
 * @brief 
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <avr/io.h>
#include "PWM_config.h"

int PWM_init(void)
{
TCCR1A|=FastPWM; //set fast PWM mode
TCCR1B|=Prescalar; //Set prescalar of 64 bit
DDRB |= (1<<PB1); //configure PB1 as output port
return 0;
}

int PWM_output(void)
{
if((temp>=0)&&(temp<=200))
OCR1A=205;
if((temp>=210)&&(temp<=500))
OCR1A=410;
if((temp>=510)&&(temp<=700))
OCR1A=717;
if((temp>=710)&&(temp<=1024))
OCR1A=973;

return 0;
}
