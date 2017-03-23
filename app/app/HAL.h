#ifndef HAL_H_
#define HAL_H_
 
#define A 0x39
#define B 0x36
#define C 0x33
#define D 0x30

#define HIGH 1
#define LOW 0

#define OUTPUT 1
#define INPUT 0

typedef struct portStruct* Port;

///////////////////////////////////set_port_direction///////////////////////////////////
/*
* PURPOSE : To set direction of a port as input or output
*
* direction -> should be either INPUT, OUTPUT, 0, or 1 
*             other values would cause no change in port
* Port p -> should have one of 4 values (A, B, C, or D)
*
*/
void set_port_direction(uint8_t direction,Port p);

///////////////////////////////////set_pin_direction///////////////////////////////////
/*
* PURPOSE : To set direction of a pin as input or output
*
* direction -> should be either INPUT, OUTPUT, 0, or 1
*             other values would cause no change in pin
* Port p -> should have one of 4 values (A, B, C, or D)
* pinNo -> should be an integer value from 0 to 7
*
*/
void set_pin_direction(uint8_t direction,Port p,uint8_t pinNo);

///////////////////////////////////set_port_output///////////////////////////////////
/*
* PURPOSE : To set the port as high or low
*
* direction -> should be either HIGH, LOW, 0, or 1
*             other values would cause no change in port
* Port p -> should have one of 4 values (A, B, C, or D)
*
* Preconditions : The function set_port_direction should be used before this one
*           
*/          
void set_port_output(uint8_t direction,Port p);

///////////////////////////////////set_pin_output///////////////////////////////////
/*
* PURPOSE : To set the pin value as high or low
*
* direction -> should be either HIGH, LOW, 0, or 1
*             other values would cause no change in port
* Port p -> should have one of 4 values (A, B, C, or D)
* pinNo -> should be an integer value from 0 to 7
*
* Preconditions : The function set_pin_direction should be used before this one
*/
void set_pin_output(uint8_t direction,Port p,uint8_t pinNo);

///////////////////////////////////read_port///////////////////////////////////
/*
* PURPOSE : returns the value of the port as 1 byte (8 bits) value which if seen as
*			binary the 1 represents a HIGH and 0 LOW	
*
* Port p -> should have one of 4 values (A, B, C, or D).
*/
uint8_t read_port(Port p);

///////////////////////////////////read_pin///////////////////////////////////
/*
* PURPOSE : returns the value of the pin as 1 (HIGH) or 0 (LOW) 
*
* Port p -> should have one of 4 values (A, B, C, or D).
* pinNo -> should be an integer value from 0 to 7
*/
uint8_t read_pin(Port p,uint8_t pinNo);

///////////////////////////////////pullup_port///////////////////////////////////
/*
* PURPOSE : pulls the port up internally by setting its direction to input
*			and making its value HIGH

* Port p -> should have one of 4 values (A, B, C, or D).
*/
void pullup_port(Port p);

///////////////////////////////////pullup_pin///////////////////////////////////
/*
* PURPOSE : pulls the pin up internally by setting its direction to input
*			and making its value HIGH

* Port p -> should have one of 4 values (A, B, C, or D).
* pinNo -> should be an integer value from 0 to 7
*/
void pullup_pin(Port p,uint8_t pinNo);


#endif /* HAL_H_ */