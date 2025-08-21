#include <avr/io.h>
#include <util/delay.h>
#include "EXTI0.h"
#include "EXTI1.h"
#include "SevenSegment.h"

volatile unsigned char counter = 0;

int main(void)
{
    // LED on PD7 output
    DDRD |= (1 << PD7);

    // Init Seven Segment
    SevenSegment_Init();

    // Init External Interrupts
    EXTI0_Init();
    EXTI1_Init();

    while (1)
    {
        SevenSegment_Display(counter);

        _delay_ms(1000);

        counter++;
        if (counter > 9)
        {
            counter = 0;
        }
    }
}
