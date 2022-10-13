#ifndef REGISTERS_H_
#define REGISTERS_H_

#include "types.h"

// # Defining the ATmega32 registers with there appropriate addresses

/************************************************************************/
/* DIO REGISTERS:                                                       */
/************************************************************************/
// PORTA Registers:
#define PORTA_DIR *((volatile uint8_t*)(0x3A))
#define PORTA_DATA *((volatile uint8_t*)(0x3B))
#define PORTA_PINS *((volatile uint8_t*)(0x39))
// PORTB Registers:
#define PORTB_DIR *((volatile uint8_t*)(0x37))
#define PORTB_DATA *((volatile uint8_t*)(0x38))
#define PORTB_PINS *((volatile uint8_t*)(0x36))
// PORTC Registers:
#define PORTC_DIR *((volatile uint8_t*)(0x34))
#define PORTC_DATA *((volatile uint8_t*)(0x35))
#define PORTC_PINS *((volatile uint8_t*)(0x33))
// PORTD Registers:
#define PORTD_DIR *((volatile uint8_t*)(0x31))
#define PORTD_DATA *((volatile uint8_t*)(0x32))
#define PORTD_PINS *((volatile uint8_t*)(0x30))

/************************************************************************/
/* TIMER REGISTERS:                                                       */
/************************************************************************/
// TIMER0 Registers:
#define TCCR0 *((volatile uint8_t*) 0x53)
#define TCNT0 *((volatile uint8_t*) 0x52)
#define TIFR *((volatile uint8_t*) 0x58)
#define TIMSK *((volatile uint8_t*) 0x59)
#define OCR0 *((volatile uint8_t*) 0x5C)
#define SREG *((volatile uint8_t*) 0x5F)

/************************************************************************/
/* Interrupts Registers:                                                */
/************************************************************************/
// External Interrupts Registers:
#define MCUCR *((volatile uint8_t*) 0x55)
#define MCUCSR *((volatile uint8_t*) 0x54)
#define GICR *((volatile uint8_t*) 0x5B)
#define GIFR *((volatile uint8_t*) 0x5A)

/************************************************************************/
/* ADC Registers:                                                       */
/************************************************************************/
//#define ADCSR *((volatile uint8_t*) 0x28)
#define ADMUX *((volatile uint8_t*) 0x27)
#define ADCSRA *((volatile uint8_t*) 0x26)
#define ADCH *((volatile uint8_t*) 0x25)
#define ADCL *((volatile uint8_t*) 0x24)


/************************************************************************/
/* Communication Protocols Registers:                                   */
/************************************************************************/
// UART:
#define UDR *((volatile uint8_t*) 0x2C)
#define UCSRA *((volatile uint8_t*) 0x2B)
#define UCSRB *((volatile uint8_t*) 0x2A)
#define UBRRL *((volatile uint8_t*) 0x29)
#define UCSRC/UBRRH *((volatile uint8_t*) 0x40)

// SPI:
#define SPDR *((volatile uint8_t*) 0x2F)
#define SPSR *((volatile uint8_t*) 0x2E)
#define SPCR *((volatile uint8_t*) 0x2D)

#endif /* REGISTERS_H_ */