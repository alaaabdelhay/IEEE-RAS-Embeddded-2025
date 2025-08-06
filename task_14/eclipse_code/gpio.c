#include "gpio.h"

void GPIO_Init(uint8_t port, uint8_t pin, uint8_t dir) {
    if (dir == OUTPUT) {
        if (port == 'B') DDRB |= (1 << pin);
        else if (port == 'D') DDRD |= (1 << pin);
    } else {
        if (port == 'B') DDRB &= ~(1 << pin);
        else if (port == 'D') DDRD &= ~(1 << pin);
    }
}

void GPIO_Write(uint8_t port, uint8_t pin, uint8_t value) {
    if (value) {
        if (port == 'B') PORTB |= (1 << pin);
        else if (port == 'D') PORTD |= (1 << pin);
    } else {
        if (port == 'B') PORTB &= ~(1 << pin);
        else if (port == 'D') PORTD &= ~(1 << pin);
    }
}

uint8_t GPIO_Read(uint8_t port, uint8_t pin) {
    if (port == 'D') return (PIND & (1 << pin)) >> pin;
    return 0;
}
