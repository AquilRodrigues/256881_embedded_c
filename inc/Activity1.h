#ifndef __ACTIVITY1_H__
#define __ACTIVITY1_H__
/**
 * @file project_config.h
 * @author AQUIL RODRIGUES ()
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

#include<avr/io.h>
#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */

#define LED_PORT (PORTB)    /**< LED Port Number */
#define LED_PIN  (PORTB0)   /**< LED Pin number  */
#define SWITCH_PORT (PORTD) /**< Switch port */
#define SEAT_SWITCH (PORTD0) 
#define HEATER_SWITCH (PORTD1)

void Activity1();

/* a*/

#endif /* __PROJECT_CONFIG_H__ */