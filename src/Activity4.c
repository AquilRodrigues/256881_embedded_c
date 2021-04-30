#include<avr/io.h>
#include "Activity4.h"

void USARTInit(uint16_t ubrr_value)
{
	UBRR0L = ubrr_value;
    UBRR0H = (ubrr_value>>8) & 0x00ff;
    UCSR0C = (1<<UMSEL00) | (1<<UCSZ01) | (1<<UCSZ00);


    UCSR0B = (1<<RXEN0) | (1<<TXEN0) | (1<<RXCIE0) | (1<<TXCIE0);
}


/**
 * @brief This is used to read serial input.
 * 
 * @param data 
 * @return uint16_t 
 */

uint16_t USARTReadChar(uint16_t data)
{

    while(!(UCSR0A & (1<<RXC0)))
    {
        //do nothing
    }

    return UDR0 ;
}

/**
 * @brief This function is used to display output.
 * 
 * @param data 
 */
void Activity4(char data)
{

    while(!(UCSR0A & (1<<UDRE0)))
    {
        //do nothing
    }

    UDR0 = data;
}
