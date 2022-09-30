/*
 * dio.c
 *
 * Created: 9/27/2022 5:50:40 AM
 *  Author: YAS
 */ 
#include "dio.h"

void DIO_init(uint8_t PinNumber , uint8_t PortNumber, uint8_t direction)
{
	switch(PortNumber)
	{
		case PORT_A:
		if (direction == IN)
		{
			DDRA &= ~(1<<PinNumber); // input
		}
		else if (direction == OUT)
		{
			
			DDRA |=(1<<PinNumber); // Output
		}
		else
		{
			// Error handling
		}
		break;
		
		case PORT_B:
		if (direction == IN)
		{
			DDRB &= ~(1<<PinNumber); // input
		}
		else if (direction == OUT)
		{
			
			DDRB |=(1<<PinNumber); // Output
		}
		else
		{
			// Error handling
		}
		break;
		
		case PORT_C:
		if (direction == IN)
		{
			DDRC &= ~(1<<PinNumber); // input
		}
		else if (direction == OUT)
		{
			
			DDRC |=(1<<PinNumber); // Output
		}
		else
		{
			// Error handling
		}
		break;
		
		case PORT_D:
		if (direction == IN)
		{
			DDRD &= ~(1<<PinNumber); // input
		}
		else if (direction == OUT)
		{
			
			DDRD |=(1<<PinNumber); // Output
		}
		else
		{
			// Error handling
		}
		break;
		
	}
}
void DIO_write(uint8_t PinNumber , uint8_t PortNumber, uint8_t value)
{

	switch(PortNumber)
	{
		case PORT_A:
		if (value == LOW)
		{
			PORTA &= ~(1<<PinNumber); // write 0
		}
		else if (value == HIGH)
		{
			
			PORTA |=(1<<PinNumber); // write 1
		}
		else
		{
			// Error handling
		}
		break;
		
		case PORT_B:
		if (value == LOW)
		{
			PORTB &= ~(1<<PinNumber); // write 0
		}
		else if (value == HIGH)
		{
			
			PORTB |=(1<<PinNumber); // write 1
		}
		else
		{
			// Error handling
		}
		break;
		
		case PORT_C:
		if (value == LOW)
		{
			PORTC &= ~(1<<PinNumber); // write 0
		}
		else if (value == OUT)
		{
			
			PORTC |=(1<<PinNumber); // write 1
		}
		else
		{
			// Error handling
		}
		break;
		
		case PORT_D:
		if (value == LOW)
		{
			PORTD &= ~(1<<PinNumber); // write 0
		}

		else if (value == HIGH)
		{
			
			PORTD |=(1<<PinNumber); // write 1
		}
		else
		{
			// Error handling
		}
		break;
	}
}
void DIO_read(uint8_t PinNumber , uint8_t PortNumber, uint8_t *value)
{
 switch(PortNumber)
 {
	 case PORT_A:
	 *value = GET_BIT(PINA, PinNumber);
	 break;
	 case PORT_B:
	 *value = GET_BIT(PINB, PinNumber);
	 break;
	 case PORT_C:
	 *value = GET_BIT(PINC, PinNumber);
	 break;
	 case PORT_D:
	 *value = GET_BIT(PIND, PinNumber);
	 break;
	 default:
	 return ;
	 break;
 }
 return ;
}
DIO_toggle(uint8_t PinNumber , uint8_t PortNumber)
{
  switch(PortNumber)
 {
	case PORT_A:
	TOGGLE_BIT(PORTA, PinNumber);
	break;
	case PORT_B:
	TOGGLE_BIT(PORTB, PinNumber);
	break;
	case PORT_C:
	TOGGLE_BIT(PORTC, PinNumber);
	break;
	case PORT_D:
	TOGGLE_BIT(PORTD, PinNumber);
	break;
	default:
	return;
	break;
 }
 return;
}
