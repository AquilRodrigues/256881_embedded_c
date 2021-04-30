
#include "Activity1.h"
#include "Activity2.h"
#include "Activity3.h"
#include "Activity4.h"

#include "user_utils.h"
int main(void)
{
DDRB |= (1<<LED_PIN); //set BO = 1
DDRD &= ~(2<<SEAT_SWITCH);
SWITCH_PORT |= (1<<SEAT_SWITCH);
SWITCH_PORT |= (1<<HEATER_SWITCH);

 InitADC();
 USARTInit(103);

 

 uint16_t temp=0;
 uint16_t tempc=0;

 

    while(1){
            if(!(PIND &(1<<SEAT_SWITCH)) && !(PIND &(1<<HEATER_SWITCH) )){
                Activity1();
                temp = Activity2(2);
                tempc = Activity3(temp);
                _delay_ms(200);
                
                 if(tempc==20){
                unsigned char data[]="Temperature is 20 deg Celsius\n";
                uint16_t i=0;
                while(data[i]!='\0'){
                     Activity4(data[i]);
                     i++;
                }
            }
            else if(tempc==25){
                 unsigned char data[]="Temperature is 25 deg Celsius\n";
                uint16_t i=0;
                while(data[i]!='\0'){
                     Activity4(data[i]);
                     i++;
                }
            }
             else if(tempc==29){
                 unsigned char data[]="Temperature is 29 deg Celsius\n";
                uint16_t i=0;
                while(data[i]!='\0'){
                     Activity4(data[i]);
                     i++;
                }
            }
             else {
                 unsigned char data[]="Temperature is 33 deg Celsius\n";
                uint16_t i=0;
                while(data[i]!='\0'){
                     Activity4(data[i]);
                     i++;
                }
            }

            }
            else {
                    LED_PORT &= ~(1<<PB0);

            }




      


    }


    return 0;
}
