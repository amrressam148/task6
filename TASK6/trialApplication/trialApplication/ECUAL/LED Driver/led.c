/*
 * led.c
 *
 * Created: 9/27/2022 5:49:15 AM
 *  Author: YAS
 */ 
#include "Ied.h"


void  LED_init(uint8_t ledPort, uint8_t ledPin)
{
	DIO_init(ledPin,ledPort,OUT);
}
void  LED_on(uint8_t ledPort, uint8_t ledPin)
{
	DIO_write(ledPin,ledPort,HIGH);
}
void  LED_off(uint8_t ledPort, uint8_t ledPin)
{
	DIO_write(ledPin,ledPort,LOW);
}
void  LED_toggle(uint8_t ledPort, uint8_t ledPin)
{
  
}


