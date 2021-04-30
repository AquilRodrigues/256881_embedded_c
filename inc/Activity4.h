#ifndef __ACTIVITY4_H__
#define __ACTIVITY4_H__
/**
 * @file Activity4.h
 * @author Aquil Rodrigues (aquil.ee17@bmsce.ac.in)
 * @brief This is for transfering data using uart protocol.
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<avr/io.h>

/**
 * @brief This function initializes for UART protocol
 * 
 */

void USARTInit(uint16_t );

/**
 * @brief This function takes the temperature value and displayes on serial monitor.
 * 
 * @return uint16_t 
 */

uint16_t USARTReadChar(uint16_t );

void Activity4(char );


#endif // UART_H_INCLUDED
