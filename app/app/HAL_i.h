/*
 * IncFile1.h
 *
 * Created: 23-Mar-17 5:54:22 PM
 *  Author: Dell
 */ 


#ifndef HAL_I_H_
#define HAL_I_H_
#include "serviceLayer.h"

typedef struct portStruct{
	uint8_t pin;
	uint8_t ddr;
	uint8_t port;
}Port;
/*
Port* portA = 0x39;
Port* portB = 0x36;
Port* portC = 0x33;
Port* portD = 0x30;*/



void set_port_direction(uint8_t direction,Port* p);
void set_pin_direction(uint8_t direction,Port* p,uint8_t pinNo);
void set_port_output(uint8_t direction,Port* p);
void set_pin_output(uint8_t direction,Port* p,uint8_t pinNo);
uint8_t read_port(Port* p);
uint8_t read_pin(Port* p,uint8_t pinNo);
void pullup_port(Port* p);
void pullup_pin(Port* p,uint8_t pinNo);


#endif /* HAL_I_H_ */