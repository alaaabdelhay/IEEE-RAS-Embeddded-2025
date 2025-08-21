#include "EXTI0.h"
#include <avr/interrupt.h>

void EXTI0_Init(void)
{
    // اجعل PD2 input (INT0 pin)
    DDRD &= ~(1 << PD2);

    // تفعيل INT0 على falling edge
    MCUCR |= (1 << ISC01);
    MCUCR &= ~(1 << ISC00);

    // Enable INT0
    GICR |= (1 << INT0);

    // Enable Global Interrupts
    sei();
}

// ISR: Toggle LED on PD7
ISR(INT0_vect)
{
    PORTD ^= (1 << PD7);
}
