
#include "dio.h"

// Should Include:
// 1. All Includes that will be used in this driver
// 2. Global Variables that will be used
// 3. Function Definitions

void DIO_initPort(PORT_Name port, Direction direction){
	if(direction == Output){
		switch(port){
			case PORTA: PORTA_DIR = 0xFF; break;
			case PORTB: PORTB_DIR = 0xFF; break;
			case PORTC: PORTC_DIR = 0xFF; break;
			case PORTD: PORTD_DIR = 0xFF; break;
		}
	}
	else if(direction == Input){
		switch(port){
			case PORTA: PORTA_DIR = 0x00; break;
			case PORTB: PORTB_DIR = 0x00; break;
			case PORTC: PORTC_DIR = 0x00; break;
			case PORTD: PORTD_DIR = 0x00; break;
		}
	}
	else{
		// Error Handling
	}
}

void DIO_initPin(PORT_Name port, PIN_Name pin, Direction direction){
	if(port<=PORTD && pin<=Pin7){ // To check that pin & port entry are correct
		if(direction == Output){
			switch(port){
				case PORTA: SET_BIT(PORTA_DIR, pin); break;
				case PORTB: SET_BIT(PORTB_DIR, pin); break;
				case PORTC: SET_BIT(PORTC_DIR, pin); break;
				case PORTD: SET_BIT(PORTD_DIR, pin); break;
			}
		}
		else if(direction == Input){
			switch(port){
				case PORTA: CLEAR_BIT(PORTA_DIR, pin); break;
				case PORTB: CLEAR_BIT(PORTB_DIR, pin); break;
				case PORTC: CLEAR_BIT(PORTC_DIR, pin); break;
				case PORTD: CLEAR_BIT(PORTD_DIR, pin); break;
			}
		}
		else{
			// Error Handling
		}
	}
	else{
		// Error Handling
	}
}


void DIO_writePort(PORT_Name port, uint8_t value){
	switch(port){
		case PORTA: PORTA_DATA = value; break;
		case PORTB: PORTB_DATA = value; break;
		case PORTC: PORTC_DATA = value; break;
		case PORTD: PORTD_DATA = value; break;
	}
}

void DIO_writePin(PORT_Name port, PIN_Name pin, PIN_Value value){
	if(port<=PORTD && pin<=Pin7){ // To check that pin & port entry are correct
		if(value == HIGH){
			switch(port){
				case PORTA: SET_BIT(PORTA_DATA, pin); break;
				case PORTB: SET_BIT(PORTB_DATA, pin); break;
				case PORTC: SET_BIT(PORTC_DATA, pin); break;
				case PORTD: SET_BIT(PORTD_DATA, pin); break;
			}
		}
		else if(value == LOW){
			switch(port){
				case PORTA: CLEAR_BIT(PORTA_DATA, pin); break;
				case PORTB: CLEAR_BIT(PORTB_DATA, pin); break;
				case PORTC: CLEAR_BIT(PORTC_DATA, pin); break;
				case PORTD: CLEAR_BIT(PORTD_DATA, pin); break;
			}
		}
		else{
			// Error Handling
		}
	}
	else{
		// Error Handling
	}
}
void DIO_readPin(PORT_Name port, PIN_Name pin, PIN_Value *value){
	if(port<=PORTD && pin<=Pin7){ // To check that pin & port entry are correct
		switch(port){
			case PORTA: *value = GET_BIT(PORTA_PINS, pin); break;
			case PORTB: *value = GET_BIT(PORTB_PINS, pin); break;
			case PORTC: *value = GET_BIT(PORTC_PINS, pin); break;
			case PORTD: *value = GET_BIT(PORTD_PINS, pin); break;
		}
	}
	else{
		// Error Handling
	}
}

void DIO_togglePin(PORT_Name port, PIN_Name pin){
	if(port<=PORTD && pin<=Pin7){ // To check that pin & port entry are correct
		switch(port){
			case PORTA: TOGGLE_BIT(PORTA_DATA, pin); break;
			case PORTB: TOGGLE_BIT(PORTB_DATA, pin); break;
			case PORTC: TOGGLE_BIT(PORTC_DATA, pin); break;
			case PORTD: TOGGLE_BIT(PORTD_DATA, pin); break;
		}
	}
	else{
		// Error Handling
	}
}