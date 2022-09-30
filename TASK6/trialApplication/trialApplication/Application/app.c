/*
 * app.c
 *
 * Created: 9/27/2022 5:45:56 AM
 *  Author: YAS
 */ 

#include "app.h"
uint8_t buttonstate ;
int count = 0;

void APP_init(void)
{
     
    //INIT LEDS
  	LED_init(RED_LED_PORT,RED_LED_PIN);//A
    LED_init(GREEN_LED_PORT,GREEN_LED_PIN);//B
    LED_init(BLUE_LED_PORT,BLUE_LED_PIN); //C
    //INIT BUTTON
    button_init(BUTTON_1_PORT, BUTTON_1_PIN); 

}
void APP_start(void)
{
	  
	  button_read(BUTTON_1_PORT, BUTTON_1_PIN, &buttonstate);
 
	
    if(buttonstate==HIGH)
	  {
        count++;
        buttonstate=LOW;
        if (count == 6)
           
            count = 0;
            
      }
    
      if (count == 0 )
      {
       LED_off(RED_LED_PORT,RED_LED_PIN);
       LED_off(GREEN_LED_PORT,GREEN_LED_PIN);
       LED_off(BLUE_LED_PORT,BLUE_LED_PIN);
      }

     switch (count)
      {
        case 1:
        LED_on(RED_LED_PORT,RED_LED_PIN);
        LED_off(BLUE_LED_PORT,BLUE_LED_PIN);
        LED_off(GREEN_LED_PORT,GREEN_LED_PIN);
        break;
        case 2:
        LED_on(RED_LED_PORT,RED_LED_PIN);
        LED_on(GREEN_LED_PORT,GREEN_LED_PIN);
        LED_off(BLUE_LED_PORT,BLUE_LED_PIN);
        break;
        case 3:
        LED_on(RED_LED_PORT,RED_LED_PIN);
        LED_on(GREEN_LED_PORT,GREEN_LED_PIN);
        LED_on(BLUE_LED_PORT,BLUE_LED_PIN);
        break;
       case 4:
        LED_on(RED_LED_PORT,RED_LED_PIN);
        LED_on(GREEN_LED_PORT,GREEN_LED_PIN);
        LED_off(BLUE_LED_PORT,BLUE_LED_PIN);
        break;
       case 5:
        LED_on(RED_LED_PORT,RED_LED_PIN);
        LED_off(GREEN_LED_PORT,GREEN_LED_PIN);
        LED_off(BLUE_LED_PORT,BLUE_LED_PIN);
        break;
      }   
 }  
	 
	
	 
  

