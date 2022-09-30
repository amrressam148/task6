/*
 * dio.h
 *
 * Created: 9/27/2022 5:50:28 AM
 *  Author: YAS
 */ 


#ifndef DIO_H_
#define DIO_H_



/************************************************************************/
/*                        ALL INTERNAL DRIVER TYPEDEFS                                                                     */
/************************************************************************/
typedef unsigned char uint8_t;

/************************************************************************/
/* ALL MICROCONTROLLER REGISTERS                                                                      */
/************************************************************************/
//#ifndef REGISTERS_H_
//#define REGISTERS_H_


/************************************************************************/
/* DIO registers                                                                     */
/************************************************************************/
// PORTA registers
#define PORTA *(( volatile uint8_t*)0x3B)
#define DDRA *(( volatile uint8_t*)0x3A)
#define PINA *(( volatile uint8_t*)0x39)

// PORTB registers
#define PORTB *(( volatile uint8_t*)0x38)
#define DDRB *(( volatile uint8_t*)0x37)
#define PINB *(( volatile uint8_t*)0x36)

// PORTC registers
#define PORTC *(( volatile uint8_t*)0x35)
#define DDRC *(( volatile uint8_t*)0x34)
#define PINC *(( volatile uint8_t*)0x33)

// PORTD registers
#define PORTD *(( volatile uint8_t*)0x32)
#define DDRD *(( volatile uint8_t*)0x31)
#define PIND *(( volatile uint8_t*)0x30)

/************************************************************************/
/*                         ALL DRIVER MACROS                                                                      */
/************************************************************************/

//PORT MACROS
#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'
//Pins defines
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7
// DIRECTION MACROS
#define IN 0
#define OUT 1
// VALUE MACROS
#define LOW 0
#define HIGH 1
//COMMON MACROS
#define SET_BIT(registerName, bitNumber) (registerName |= (1 << bitNumber))
#define CLR_BIT(registerName, bitNumber) (registerName &= ~(1 << bitNumber))
#define TOGGLE_BIT(registerName, bitNumber) (registerName ^= (1 << bitNumber))
#define GET_BIT(registerName, bitNumber) ((registerName >> bitNumber) & 1)
/************************************************************************/
/*                 ALL DRIVER FUNCTION DATA TYPES                                                                      */
/************************************************************************/
void DIO_init(uint8_t PinNumber , uint8_t PortNumber, uint8_t direction);
void DIO_write(uint8_t PinNumber , uint8_t PortNumber, uint8_t value);
void DIO_toggle(uint8_t PinNumber , uint8_t PortNumber);
void DIO_read(uint8_t PinNumber , uint8_t PortNumber, uint8_t *value);

#endif /* DIO_H_ */