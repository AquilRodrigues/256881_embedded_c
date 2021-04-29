
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

 void USARTInit(uint16_t );

 uint16_t temp=0;
 uint16_t tempc=0;

 

    while(1){
            if(!(PIND &(1<<SEAT_SWITCH)) && !(PIND &(1<<HEATER_SWITCH) )){
                LED_PORT |= (1<<LED_PIN);
                temp = Activity2(2);
                tempc = Activity3(temp);
                Activity4(tempc);
            }
            else {
                    LED_PORT &= ~(1<<PB0);

            }




      


    }


    return 0;
}
