#ifndef __ACTIVITY3_H__
#define __ACTIVITY3_H__
/**
 * @file Activity3.h
 * @author Aquil Rodrigues (aquil.ee17@bmsce.ac.in)
 * @brief This is for displaying PWM output.
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<avr/io.h>

#define F_CPU 16000000UL 


/**
 * @brief This function takes input from ADC and generates PWM for the value.
 * 
 * @return uint16_t 
 */
uint16_t Activity3(uint16_t );

#endif