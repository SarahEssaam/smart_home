/*
 * app.c
 *
 * Created: 23-Mar-17 5:31:40 PM
 * Author : Dell
 */

#include "serviceLayer.h"
#include "HAL.h"



int main(void)
{
	
	set_pin_direction(OUTPUT,D,4);
set_pin_direction(OUTPUT,D,5);
set_pin_direction(OUTPUT,D,6);
	set_pin_direction(OUTPUT,D,7);
	
    while (1) 
    {
		set_port_output(HIGH,D);
		
		//set_pin_output(LOW,D,5);
		set_pin_output(LOW,D,6);
		set_pin_output(LOW,D,7);
	
    }
}

