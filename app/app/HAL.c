
#include "serviceLayer.h"
#include "HAL.h"

struct portStruct{
	uint8_t pin;
	uint8_t ddr;
	uint8_t port;
};

//direction should be OUTPUT or INPUT or nothing happens
void set_port_direction(uint8_t direction,Port p){
	if(direction==1)
	p->ddr = 0xFF;
	else if(direction==0)
	p->ddr = 0x00;
}
//direction should be OUTPUT or INPUT or nothing happens
//pinNo should be from 0 to 7
void set_pin_direction(uint8_t direction,Port p,uint8_t pinNo){
	if(direction==1)
	p->ddr |= (1<<pinNo);
	else if(direction==0)
	p->ddr &= ~(1<<pinNo);
}
//direction should be HIGH or LOW or nothing happens
//Function set direction should be used first and set to output
void set_port_output(uint8_t direction,Port p){
	if(direction==1)
	p->port = 0xFF;
	else if(direction==0)
	p->port = 0x00;
}
//direction should be HIGH or LOW or nothing happens
//Function set direction should be used first and set to output
//pinNo should be from 0 to 7
void set_pin_output(uint8_t direction,Port p,uint8_t pinNo){
	if(direction==1)
	p->port |= (1<<pinNo);
	else if(direction==0)
	p->port &= ~(1<<pinNo);
}
//returns a 1 byte of the 8 pins directions where bit i represents pin i and 1 is high and 0 is low
uint8_t read_port(Port p){
	return p->pin;
}
//returns 1 or 0
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



