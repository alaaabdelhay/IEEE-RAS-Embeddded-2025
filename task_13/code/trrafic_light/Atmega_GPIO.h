#ifndef __ATMEGA_GPIO_HEADER__
#define __ATMEGA_GPIO_HEADER__



/*------------------- includes section: -------------------------*/
#include <avr/io.h>
#include "std_macros.h"
#include "typedef.h"
/*============================ end ==============================*/


/*---------------------- functions prototypes: -------------------------*/


/*
function name: GPIO_pin_direction
function arguments: (char PORT, uint8 BIT, uint8 DIR)
function return: void
function description: It set direction of specific port (PORTx = DIR);
*/
void GPIO_pin_direction(char PORT, uint8 BIT, uint8 DIR);


/*
function name: GPIO_pin_write
function arguments: (char PORT, uint8 BIT, uint8 DATA)
function return: void
function description: It writes data on specific pin
*/
void GPIO_pin_write(char PORT, uint8 BIT, uint8 DATA);


/*
function name: GPIO_pin_read
function arguments: (char PORT, uint8 BIT)
function return: uint8
function description: It reads data from specific pin
*/
uint8 GPIO_pin_read(char PORT, uint8 BIT);


/*
function name: GPIO_pin_toggle
function arguments: (char PORT, uint8 BIT)
function return: void
function description: It toggles the value on specific pin
*/
void GPIO_pin_toggle(char PORT, uint8 BIT);


/*
function name: GPIO_port_direction
function arguments: (char PORT, uint8 DIR)
function return: void
function description: It set direction of specific port as input (0) or output (1)
*/
void GPIO_port_direction(char PORT, uint8 DIR);


/*
function name: GPIO_port_write
function arguments: (char PORT, uint8 DATA)
function return: void
function description: It writes data on port
*/
void GPIO_port_write(char PORT, uint8 DATA);


/*
function name: GPIO_port_read
function arguments: (char PORT)
function return: uint8
function description: It reads data from port
*/
uint8 GPIO_port_read(char PORT);


/*
function name: GPIO_pin_pull_up
function arguments: (char port_name, uint8 pin_number)
function return: void
function description: It turns on the pull up resistor to the selected pin in port
*/
void GPIO_pin_pull_up(char port_name, uint8 pin_number);

/*
function name: GPIO_port_write_high_nibble
function arguments: (char port_name, uint8 high_nibble)
function return: void
function description: It writes the given data on high_nibble bits of the given port
*/
void GPIO_port_write_high_nibble(char port_name, uint8 high_nibble);

/*
function name: GPIO_port_write_low_nibble
function arguments: (char port_name, uint8 low_nibble)
function return: void
function description: It writes the given data on low_nibble bits of the given port
*/
void GPIO_port_write_low_nibble(char port_name, uint8 low_nibble);



/*============================ end ==============================*/



#endif //__ATMEGA_GPIO_HEADER__
