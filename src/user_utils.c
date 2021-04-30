/**
 * @file user_utils.c
 * @author Aquil Rodrigues (aquil.ee17@bmsce.ac.in)
 * @brief This function is used to generate delay.
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "user_utils.h"


void delay_ms(uint32_t delay_time)
{
	uint32_t units = 0;
	for (units = 0; units <= delay_time; units++)
	{
		_delay_ms(1);
	}
}
