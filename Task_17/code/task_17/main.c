#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include "lcd.h"
#include "led.h"
#include "adc.h"

#define F_CPU 1000000UL

int main(void)
{
    char buffer[16];
    uint16_t adc_value;
    uint16_t percentage;

    DDRB = 0xFF;    // LEDs output
    ADC_Init();
    LCD_Init();

    while(1)
    {
        adc_value = ADC_Read(0);

        percentage = ((uint32_t)adc_value * 100 + 511) / 1023;

        LED_Display(adc_value);

        LCD_Clear();
        sprintf(buffer, "ADC=%u", adc_value);
        LCD_String(buffer);

        LCD_Command(0xC0);
        sprintf(buffer, "%u%%", percentage);
        LCD_String(buffer);

        _delay_ms(300);
    }
}
