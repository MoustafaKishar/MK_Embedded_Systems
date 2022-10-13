#ifndef DIO_H_
#define DIO_H_

#include "../../Utilities/registers.h"
#include "../../Utilities/bitManipulation.h"

// Should Include:
// 1. All internal typedefs used only in this driver
// 2. All driver specific macros
// 3. All driver function prototypes

// Typedefs
typedef enum{
	Pin0,
	Pin1,
	Pin2,
	Pin3,
	Pin4,
	Pin5,
	Pin6,
	Pin7
}PIN_Name;

typedef enum{
	PORTA,
	PORTB,
	PORTC,
	PORTD
}PORT_Name;

typedef enum{
	Input,
	Output
}Direction;

typedef enum{
	LOW,
	HIGH
}PIN_Value;


// Function prototypes

void DIO_initPort(PORT_Name port, Direction direction);			// Initializes DIO PORT Direction 
void DIO_initPin(PORT_Name port, PIN_Name pin, Direction direction);		// Initializes DIO PIN Direction
void DIO_writePort(PORT_Name port, PIN_Value value);			// Write Data to DIO  PORT
void DIO_writePin(PORT_Name port, PIN_Name pin, PIN_Value value);			// Write Data to DIO PIN
void DIO_readPin(PORT_Name port, PIN_Name pin, PIN_Value *value);			// Read DIO PIN, return in value as leave function return for Error Handling
void DIO_togglePin(PORT_Name port, PIN_Name pin);		// Toggle DIO PIN

#endif /* DIO_H_ */