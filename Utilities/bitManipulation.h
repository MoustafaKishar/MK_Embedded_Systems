#ifndef BITMANIPULATION_H_      // Header File Guard
#define BITMANIPULATION_H_

#include "types.h"  

// Defining 4 main bit manipulation functions
#define SET_BIT(PORT_Name, PIN_Name)	(PORT_Name) |= (1<<PIN_Name)
#define CLEAR_BIT(PORT_Name, PIN_Name)	(PORT_Name) &= ~(1<<PIN_Name)
#define TOGGLE_BIT(PORT_Name, PIN_Name)	(PORT_Name) ^= (1<<PIN_Name)
#define GET_BIT(PORT_Name, PIN_Name)	((PORT_Name & (1<<PIN_Name))>>PIN_Name)		//Another Implementation: (((PORT_Name) >> (PIN_Name))&0x01)


#endif /* BITMANIPULATION_H_ */