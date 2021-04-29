#ifndef __ACTIVITY2_H__
#define __ACTIVITY2_H__

#include<avr/io.h>

#define F_CPU 16000000UL 

void InitADC();

uint16_t Activity2(uint8_t ch);

#endif