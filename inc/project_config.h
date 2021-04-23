#ifndef __PROJECT_CONFIG_H__
#define __PROJECT_CONFIG_H__
/**
 * @file project_config.h
 * @author Kiruba Thomas M ()
 * @brief Configuration file to define pins and ports for the interfaced peripherals
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * Macro Definitions
 */

#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */

#define LED_PORT (PORTC)    /**< LED Port Number */
#define LED_PIN  (PORTC0)   /**< LED Pin number  */
//#define SW_PORT (PORTD) /**< SWITCH Port Number */
#define SW1_PIN (PORTD0) /**< SWITCH 1 Pin Number */
#define SW2_PIN (PORTD1) /**< SWITCH 2 Pin Number */

#endif /* __PROJECT_CONFIG_H__ */