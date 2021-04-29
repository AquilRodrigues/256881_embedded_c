#include "Activity3.h"

uint16_t Activity3(uint8_t temp)
{
TCCR0A |=(1<<COM0A1)|(1<<WGM00)|(1<<WGM01);
TCCR0B |= (1<<CS01)|(1<<CS00); // prescalar 255
DDRD |= (1<<PD6);

if (temp <= 200 )
                {
                    OCR0A = 51;
                    return 20;
                }
                else if (temp >200 && temp<= 500)
                {
                    OCR0A = 102;
                     return 25;
                }
                else if (temp >500 && temp<= 700)
                {
                    OCR0A = 179;
                     return 29;
                }
                else 
                {
                    OCR0A = 242;
                     return 33;
                }
              // OCR0A = temp;


           


}