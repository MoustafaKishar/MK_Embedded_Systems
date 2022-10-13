#ifndef BUTTON_H_
#define BUTTON_H_


#include "../../MCAL/DIO Driver/dio.h"

void Button_init(PORT_Name port, PIN_Name pin);
void Button_get_state(PORT_Name port, PIN_Name pin, PIN_Value *value);


#endif /* BUTTON_H_ */