#ifndef LCD_H_
#define LCD_H_

#include <avr/io.h>
#include <util/delay.h>

#define LCD_PORT PORTA
#define LCD_DDR  DDRA

#define LCD_RS   PA1
#define LCD_E    PA2
#define LCD_D4   PA3
#define LCD_D5   PA4
#define LCD_D6   PA5
#define LCD_D7   PA6

void LCD_Init(void);
void LCD_Command(unsigned char cmd);
void LCD_Char(unsigned char data);
void LCD_String(char *str);
void LCD_Clear();

#endif /* LCD_H_ */
