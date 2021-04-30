#ifndef __ACTIVITY2_H__
#define __ACTIVITY2_H__

/**
 * @file Activity2.h
 * @author Aquil Rodrigues (aquil.ee17@bmsce.ac.in)
 * @brief This is for ADC conversion.
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<avr/io.h>

#define F_CPU 16000000UL 
/**
 * @brief This function initializes the ports for taking analog inputs
 * 
 */
void InitADC();

/**
 * @brief This function takes a number for channel pin to be selected.
 * 
 * @param ch This is input parameter for channel number.
 * @return uint16_t 
 */

uint16_t Activity2(uint8_t ch);

#endif