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
* PURPOSE : Input line of text from keyboard
*
* RETURN :  VALID_DATA = valid read
*                        (see keyboard.h for the rest)
*
* NOTES :   Unknown characters returned as '*'
*           Backspace is the only editing allowed.
*/
void set_port_direction(uint8_t direction,Port p);

///////////////////////////////////set_pin_direction///////////////////////////////////
/*
* PURPOSE : Input line of text from keyboard
*
* RETURN :  VALID_DATA = valid read
*                        (see keyboard.h for the rest)
*
* NOTES :   Unknown characters returned as '*'
*           Backspace is the only editing allowed.
*/
void set_pin_direction(uint8_t direction,Port p,uint8_t pinNo);

///////////////////////////////////set_port_output///////////////////////////////////
/*
* PURPOSE : Input line of text from keyboard
*
* RETURN :  VALID_DATA = valid read
*                        (see keyboard.h for the rest)
*
* NOTES :   Unknown characters returned as '*'
*           Backspace is the only editing allowed.
*/
void set_port_output(uint8_t direction,Port p);

///////////////////////////////////set_pin_output///////////////////////////////////
/*
* PURPOSE : Input line of text from keyboard
*
* RETURN :  VALID_DATA = valid read
*                        (see keyboard.h for the rest)
*
* NOTES :   Unknown characters returned as '*'
*           Backspace is the only editing allowed.
*/
void set_pin_output(uint8_t direction,Port p,uint8_t pinNo);

///////////////////////////////////read_port///////////////////////////////////
/*
* PURPOSE : Input line of text from keyboard
*
* RETURN :  VALID_DATA = valid read
*                        (see keyboard.h for the rest)
*
* NOTES :   Unknown characters returned as '*'
*           Backspace is the only editing allowed.
*/
uint8_t read_port(Port p);

///////////////////////////////////read_pin///////////////////////////////////
/*
* PURPOSE : Input line of text from keyboard
*
* RETURN :  VALID_DATA = valid read
*                        (see keyboard.h for the rest)
*
* NOTES :   Unknown characters returned as '*'
*           Backspace is the only editing allowed.
*/
uint8_t read_pin(Port p,uint8_t pinNo);

///////////////////////////////////pullup_port///////////////////////////////////
/*
* PURPOSE : Input line of text from keyboard
*
* RETURN :  VALID_DATA = valid read
*                        (see keyboard.h for the rest)
*
* NOTES :   Unknown characters returned as '*'
*           Backspace is the only editing allowed.
*/
void pullup_port(Port p);

///////////////////////////////////pullup_pin///////////////////////////////////
/*
* PURPOSE : Input line of text from keyboard
*
* RETURN :  VALID_DATA = valid read
*                        (see keyboard.h for the rest)
*
* NOTES :   Unknown characters returned as '*'
*           Backspace is the only editing allowed.
*/
void pullup_pin(Port p,uint8_t pinNo);


#endif /* HAL_H_ */