/*
 * trialApplication.c
 *
 * Created: 9/27/2022 5:42:38 AM
 * Author : YAS
 */ 

//#include <avr/io.h>
#include "Application/app.h"


int main(void)
{
    APP_init();
    while (1) 
    {
      APP_start();
    }
return 0;
}

