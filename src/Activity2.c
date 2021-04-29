#include "Activity2.h"

void InitADC()
{

    ADMUX=(1<<REFS0); // to make aref= avcc ie 5v doubt? why refs1 not made 0
    ADCSRA=(1<<ADEN)|(7<<ADPS0); // to select the sampling frequency and to enable enable bit to make it analog channel
}

uint16_t Activity2(uint8_t ch)
{
    ADMUX&=0xf8; // to put 000 for those 3 mux bits
    ch = ch&0b00000111; // next and it with what ever channel is selected
    ADMUX |=ch; // put it in mux bits
    ADCSRA |=(1<<ADSC); // this is to start the analog to digital conversion
    while(!(ADCSRA & (1<<ADIF)));
        ADCSRA |=(1<<ADIF); // raise interrupt flag wen conversion over
        return(ADC);


}
