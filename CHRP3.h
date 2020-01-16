/*==============================================================================
	CHRP 3.1 (PIC16F886) symbolic constant definitions.
==============================================================================*/

// TODO - Add user constant definitions for CHRP3 hardware here.

// PORTA I/O device definitions

#define Q1			RA0			// Phototransistor Q1 input
#define Q2			RA1			// Phototransistor Q2 input
#define VR1			RA2			// Potentiometer VR1 input
#define T1			RA3			// Temperature sensor T1 input
#define LED2		RA4			// Run LED, LED2 output
#define RUNLED      RA4         // Run LED, LED2 output
#define LCDBACKLIGHT	RA4		// LCD LED backlight cathode output
#define LCDLED		RA4			// LCD LED backlight cathode output
#define VM			RA5			// Motor supply voltage divider input
#define BEEPER		RA6			// Piezo beeper P1 output
#define P1			RA6			// Piezo beeper P1 output
#define LED12		RA7			// Floor/phototransistor LED (LED12) output

// PORTB I/O device definitions

#define LED10		RB0			// LED10 output (LSB)
#define M1A			RB0			// Motor 1 A output
#define S2			RB0			// Switch S2 input
#define	LED9		RB1			// LED9 output
#define M1B			RB1			// Motor 1 B output
#define S3			RB1			// Switch S3 input
#define LED8		RB2			// LED8 output
#define M2A			RB2			// Motor 2 A output
#define	S4			RB2			// Switch S4 input
#define LED7		RB3			// LED7 output
#define M2B			RB3			// Motor 2 B output
#define S5			RB3			// Switch S5 input
#define LED6		RB4			// LED6 output
#define	S6			RB4			// Switch S6 input
#define LED5		RB5			// LED5 output
#define S7			RB5			// Switch S7 input
#define LED4		RB6			// LED4 output
#define LED3		RB7			// LED3 output (MSB)

// PORTC I/O device definitions

#define H2			RC0			// External I/O header H2
#define LCDE		RC0			// LCD Enable output
#define SERVO1		RC0			// Servo 1 output (external header H2)
#define TRIG        RC0         // Sonar Trigger
#define ECHO        RC1         //Sonar Echo
#define H3			RC1			// External I/O header H3
#define LCDRW		RC1			// LCD Read/!Write output
#define	SERVO2		RC1			// Servo 2 output (external header H3)
#define	H4			RC2			// External I/O header H4
#define LCDRS		RC2			// LCD Register Select output
#define	SERVO3		RC2			// Servo 3 output (external header H4)
#define H5			RC3			// External I/) header H5
#define SERVO4		RC3			// Servo 4 output (external header H5)
#define LED11		RC6			// Communication/sensor LED, LED11 output
#define IR			RC7			// IR demodulator U5 input
#define U5			RC7			// IR demodulator U5 input

// A-D Converter input channel definitions

#define ADCH0		0b00000000	// A-D channel 0 input
#define	ADQ1		0b00000000	// Q1 phototransistor A-D input channel (Ch0)
#define ADCH1		0b00000100	// A-D channel 1 input
#define	ADQ2		0b00000100	// Q2 phototransistor A-D input channel (Ch1)
#define ADCH2		0b00001000	// A-D channel 2 input
#define	ADVR1		0b00001000	// Potentiometer VR1 A-D input channel (Ch2)
#define ADCH3		0b00001100	// A-D channel 3 input
#define	ADT1		0b00001100	// Temperature sensor T1 A-D input channel (Ch3)
#define ADCH4		0b00010000	// A-D channel 4 input
#define	ADVM		0b00010000	// Motor voltage divider A-D input channel (Ch4)

// Clock frequency for delay macros and simulation

#define _XTAL_FREQ	4000000			// Set clock frequency for time delays
#define FCY			_XTAL_FREQ/4	// Set processor cycle time

void initPorts(void);    // Port configuration function prototype declaration