# Blink On Both switch is HIGH Project In Action

|ON|OFF|
|:--:|:--:|
|(https://github.com/KirubaThomasM/Embedded_C_Activities/blob/main/simulation/ON.PNG)||(https://github.com/KirubaThomasM/Embedded_C_Activities/blob/main/simulation/OFF.PNG)|

## Code 
```
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
```
