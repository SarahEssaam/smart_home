#include "serviceLayer.h"
#include "HAL.h"

struct portStruct{
	uint8_t pin;
	uint8_t ddr;
	uint8_t port;
};


void set_port_direction(uint8_t direction,Port p){
	if(direction==1)
	p->ddr = 0xFF;
	else if(direction==0)
	p->ddr = 0x00;
}


void set_pin_direction(uint8_t direction,Port p,uint8_t pinNo){
	if(direction==1)
	p->ddr |= (1<<pinNo);
	else if(direction==0)
	p->ddr &= ~(1<<pinNo);
}


void set_port_output(uint8_t direction,Port p){
	if(direction==1)
	p->port = 0xFF;
	else if(direction==0)
	p->port = 0x00;
}


void set_pin_output(uint8_t direction,Port p,uint8_t pinNo){
	if(direction==1)
	p->port |= (1<<pinNo);
	else if(direction==0)
	p->port &= ~(1<<pinNo);
}


uint8_t read_port(Port p){
	return p->pin;
}

uint8_t read_pin(Port p,uint8_t pinNo){
	return ((p->pin & (1<<pinNo))>>pinNo);
}

void pullup_port(Port p){
	p->ddr = 0x00;
	p->port = 0xFF;
}

void pullup_pin(Port p,uint8_t pinNo){
	p->ddr &= ~(1<<pinNo);
	p->port |= (1<<pinNo);
}



