#ifndef LED_H_
#define LED_H_

#include "../../MCAL/DIO Driver/dio.h"

void LED_init(PORT_Name port, PIN_Name pin);
void LED_turnON(PORT_Name port, PIN_Name pin);
void LED_turnOFF(PORT_Name port, PIN_Name pin);
void LED_toggle(PORT_Name port, PIN_Name pin);
void LED_blink(PORT_Name port, PIN_Name pin, uint8_t delay);


#endif /* LED_H_ */