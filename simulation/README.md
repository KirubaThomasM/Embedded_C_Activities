# Blink On Both switch is HIGH Project In Action

|sw1=0&sw2=0|sw1=0&sw2=1|
|:--:|:--:|
|![sw1=0&sw2=0](https://github.com/KirubaThomasM/Embedded_C_Activities/blob/main/simulation/sw1%20=%200%20&%20sw2%20=%200.PNG)|![sw1=0&sw2=1](https://github.com/KirubaThomasM/Embedded_C_Activities/blob/main/simulation/sw1%20=%200%20&%20sw2%20=%201.PNG)|
|sw1=1&sw2=0|sw1=1&sw2=1|
|![sw1=1&sw2=0](https://github.com/KirubaThomasM/Embedded_C_Activities/blob/main/simulation/sw1%20=%201%20&%20sw2%20=%200.PNG)|![sw1=1&sw2=1](https://github.com/KirubaThomasM/Embedded_C_Activities/blob/main/simulation/sw1%20=%201%20&%20sw2%20=%201.PNG)|

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
