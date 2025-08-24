#ifndef CONFIG_H
#define CONFIG_H

#ifndef F_CPU
#define F_CPU 8000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>

// ------- LCD pin mapping -------
// RS → PA1
#define LCD_RS_PORT  PORTA
#define LCD_RS_DDR   DDRA
#define LCD_RS_PIN   PA1

// E → PA2
#define LCD_E_PORT   PORTA
#define LCD_E_DDR    DDRA
#define LCD_E_PIN    PA2

// D4..D7 → PD4–PD7
#define LCD_D4_PORT  PORTD
#define LCD_D4_DDR   DDRD
#define LCD_D4_PIN   PD4
#define LCD_D5_PIN   PD5
#define LCD_D6_PIN   PD6
#define LCD_D7_PIN   PD7

// ------- LED pin mapping -------
#define LED_PORT PORTB
#define LED_DDR  DDRB

#endif
