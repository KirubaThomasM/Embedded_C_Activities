/**
 * @file LEDSwitch_config.c
 * @author Kiruba Thomas M(https://github.com/KirubaThomasM/Embedded_C_Activities.git)
 * @brief Switch input and LED output port configurations
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * @brief include necessary header files here
 */
#include <avr/io.h>
#include <util/delay.h>
#include "LEDSwitch_config.h"
                         
void Port_init()
{
    DDRB|=(1<<PB0); //set portB as an output port
    DDRD&=~Switches; //clear DDRD bits to work as an input port
    PORTD&=~Switches; //set PD bits to pull down config
}

void LedOn_BothSwHigh()
{   
    if((BothSwitchHigh))
    {
        PORTB|=LEDON;
        _delay_ms(1000);
    }
    else
    {
        PORTB&=~LEDON; //LED OFF
        _delay_ms(1000);
    }
}
