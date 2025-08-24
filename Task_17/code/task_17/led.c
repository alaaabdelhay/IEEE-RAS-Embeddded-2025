#include <avr/io.h>
#include "led.h"

void LED_Display(uint16_t adc_value)
{
    uint8_t num_leds = (adc_value*8)/1023;
    if(num_leds>8) num_leds=8;

    PORTB = 0x00;
    for(uint8_t i=0;i<num_leds;i++)
        PORTB |= (1<<i);
}
