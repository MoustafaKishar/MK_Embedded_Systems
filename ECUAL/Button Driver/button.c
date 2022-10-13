#include "button.h"

// Implementation of Button Functions by calling of respective DIO functions with appropriate paramaters.

void Button_init(PORT_Name port, PIN_Name pin){
	DIO_initPin(port, pin, Input);
}
void Button_get_state(PORT_Name port, PIN_Name pin, PIN_Value *value){
	DIO_readPin(port, pin, value);
}