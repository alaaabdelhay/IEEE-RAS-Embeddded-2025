#include "gpio.h"

void Switch_Init() {
    for (uint8_t pin = 0; pin <= 4; pin++) {
        GPIO_Init('D', pin, INPUT);
        PORTD |= (1 << pin); // Enable internal pull-up
    }
}

uint8_t Switch_Read(uint8_t pin) {
    return !(GPIO_Read('D', pin)); // Active Low
}
