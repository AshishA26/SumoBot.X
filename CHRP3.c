/*==============================================================================
	CHRP 3.1 (PIC16F886) hardware initialization and user functions.
==============================================================================*/

#include	"xc.h"				// XC compiler general include file

#include	"stdint.h"			// Include integer definitions
#include	"stdbool.h"			// Include Boolean (true/false) definitions

#include	"CHRP3.h"			// Include user-created constants and functions

// TODO - Initialize oscillator, ports and other PIC/CHRP hardware features here.

// Initialize hardware ports and peripherals. Set starting conditions.

void initPorts(void)
{
	ANSEL = 0b00000000;			// Make all PORTA pins digital I/O
	ANSELH = 0b00000000;		// Make all PORTB pins digital I/O
	OPTION_REG = 0b01010111;	// PORTB pull-ups on, TMR0 internal div 256

	// Set port directions for I/O pins: 0 = Output, 1 = Input

	TRISA = 0b00101111;			// Set runLED, IR LEDs as outputs in PORTA
	TRISB = 0b00110000;			// Set all PORTB pins for LED output
	TRISC = 0b10110010;			// Set up receive and transmit lines for IR
								// demodulator (U5) and LED11, servo outputs

	// Set starting I/O conditions.

	PORTA = 0;					// Turn off all PORTA outputs, turn on run LED
	PORTB = 0;					// Turn off all PORTB LEDs
	PORTC = 0;					// Turn off all PORTC outputs

	// Enable interrupts, if needed.
}
