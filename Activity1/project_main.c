/**
 * @file project_main.c
 * @author Bharath.G ()
 * @brief Project to Blink an LED at 1000ms ON and 500 ms OFF Interval only on Both Switches are ON
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "project_config.h"
#include "user_utils.h"
#include "blinky.h"

/**
 * @brief Initialize all the Peripherals and pin configurations
 * 
 */
void peripheral_init(void)
{
	/* Configure LED Pin and SWITCH PIN*/
	DDRC |= (1 << DDC0);
	DDRD &= ~(1 << SW1_PIN);
	PORTD |= (1 << SW1_PIN);
	DDRD &= ~(1 << SW2_PIN);
  	PORTD |= (1 << SW2_PIN);
}

void change_led_state(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}


/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 * @note PORTC0 is in sink config. i.e when pin is Low, the LED will turn OFF
 * @note PORTC0 is in sink config. i.e when pin is High, the LED will turn ON
 * @note Enable pull-up for switch in PORTD PIN0 and PIN1
 */
int main(void)
{
	/* Initialize Peripherals */
	peripheral_init();

	for(;;)
	{
		if(!(PIND & (1 << SW1_PIN)) && !(PIND & (1 << SW2_PIN)))
		{
        	change_led_state(LED_ON);
			delay_ms(LED_ON_TIME);
		
        	change_led_state(LED_OFF);
			delay_ms(LED_OFF_TIME);	
		}
		else
			change_led_state(LED_OFF);
	}
	return 0;
}
