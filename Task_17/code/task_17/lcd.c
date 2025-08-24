#include "lcd.h"

static void LCD_EnablePulse() {
    LCD_PORT |= (1<<LCD_E);
    _delay_us(1);
    LCD_PORT &= ~(1<<LCD_E);
    _delay_us(100);
}

static void LCD_Send4Bits(uint8_t data) {
    if(data & 0x01) LCD_PORT |= (1<<LCD_D4); else LCD_PORT &= ~(1<<LCD_D4);
    if(data & 0x02) LCD_PORT |= (1<<LCD_D5); else LCD_PORT &= ~(1<<LCD_D5);
    if(data & 0x04) LCD_PORT |= (1<<LCD_D6); else LCD_PORT &= ~(1<<LCD_D6);
    if(data & 0x08) LCD_PORT |= (1<<LCD_D7); else LCD_PORT &= ~(1<<LCD_D7);
}

void LCD_Command(unsigned char cmd) {
    LCD_PORT &= ~(1<<LCD_RS);
    LCD_Send4Bits(cmd>>4);
    LCD_EnablePulse();
    LCD_Send4Bits(cmd & 0x0F);
    LCD_EnablePulse();
}

void LCD_Char(unsigned char data) {
    LCD_PORT |= (1<<LCD_RS);
    LCD_Send4Bits(data>>4);
    LCD_EnablePulse();
    LCD_Send4Bits(data & 0x0F);
    LCD_EnablePulse();
}

void LCD_Init(void) {
    LCD_DDR |= (1<<LCD_RS)|(1<<LCD_E)|(1<<LCD_D4)|(1<<LCD_D5)|(1<<LCD_D6)|(1<<LCD_D7);
    _delay_ms(20);

    LCD_Command(0x02);  // 4-bit mode
    LCD_Command(0x28);  // 2 lines, 5x7 matrix
    LCD_Command(0x0C);  // Display ON, Cursor OFF
    LCD_Command(0x06);  // Increment cursor
    LCD_Command(0x01);  // Clear display
    _delay_ms(2);
}

void LCD_String(char *str) {
    while(*str) LCD_Char(*str++);
}

void LCD_Clear() {
    LCD_Command(0x01);
    _delay_ms(2);
}
