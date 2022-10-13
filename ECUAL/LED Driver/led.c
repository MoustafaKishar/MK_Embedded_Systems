#include "led.h"

// Implementation of LED Functions by calling of respective DIO functions with appropriate paramaters.


void LED_init(PORT_Name port, PIN_Name pin){
	DIO_initPin(port, pin, Output);
}
void LED_turnON(PORT_Name port, PIN_Name pin){
	DIO_writePin(port, pin, HIGH);
}
void LED_turnOFF(PORT_Name port, PIN_Name pin){
	DIO_writePin(port, pin, LOW);
}
void LED_toggle(PORT_Name port, PIN_Name pin){
	DIO_togglePin(port, pin);
}
void LED_blink(PORT_Name port, PIN_Name pin, uint8_t delay);