#include "EXTI1.h"
#include <avr/interrupt.h>

extern volatile unsigned char counter;   // جايه من main

void EXTI1_Init(void)
{
    // اجعل PD3 input (INT1 pin)
    DDRD &= ~(1 << PD3);

    // تفعيل INT1 على falling edge
    MCUCR |= (1 << ISC11);
    MCUCR &= ~(1 << ISC10);

    // Enable INT1
    GICR |= (1 << INT1);

    // Enable Global Interrupts
    sei();
}

// ISR: Reset counter = 0
ISR(INT1_vect)
{
    counter = 0;
}
