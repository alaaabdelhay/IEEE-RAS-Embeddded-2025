#ifndef GPIO_H_
#define GPIO_H_

#include <avr/io.h>

#define INPUT  0
#define OUTPUT 1

void GPIO_Init(uint8_t port, uint8_t pin, uint8_t dir);
void GPIO_Write(uint8_t port, uint8_t pin, uint8_t value);
uint8_t GPIO_Read(uint8_t port, uint8_t pin);

#endif
