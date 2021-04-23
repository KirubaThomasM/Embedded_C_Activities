# Blink On Both switch is ON Project In Action

|ON|OFF|
|:--:|:--:|
|\image html ON.png||

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