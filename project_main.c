#include "project_config.h"

#include "user_utils.h"
int main(void)
{
DDRB |= (1<<LED_PIN); //set BO = 1
DDRD &= ~(2<<SEAT_SWITCH);
SWITCH_PORT |= (1<<SEAT_SWITCH);
SWITCH_PORT |= (1<<HEATER_SWITCH);

    while(1){
            if(!(PIND &(1<<SEAT_SWITCH)) && !(PIND &(1<<HEATER_SWITCH) )){
                LED_PORT |= (1<<LED_PIN);
            }
            else {
                    LED_PORT &= ~(1<<PB0);

            }




      


    }


    return 0;
}
