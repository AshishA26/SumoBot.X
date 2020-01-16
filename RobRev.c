/*==============================================================================
    Project: Sumo
    Version: 3.0				Date: June 15, 2016
    Target: CHRPmini			Processor: PIC16F886

    A sonar-based Sumo robot.
==============================================================================*/

#include	"xc.h"				// XC compiler general include file

#include	"stdint.h"			// Integer definition
#include	"stdbool.h"			// Boolean (true/false) definition

#include	"CHRP3.h"		// User-created variables and functions

/*==============================================================================
    Global variable definitions
 =============================================================================*/
unsigned char mode; // Operating modes (search, attack))
unsigned char range; // Target range in cm
unsigned char target; // Target acquisition counter

/*==============================================================================
    Program constant definitions
 =============================================================================*/
#define	search		0			// Search mode
#define	attack		1			// Attack mode
#define	maxRange	120			// Maximum sonar target range in cm

/*==============================================================================
    Motor direction constant definitions
 =============================================================================*/
#define STOP		0b00000000	// Both motors stopped
#define FWD			0b00000110	// Both motors forward
#define REV			0b00001001	// Both motors reverse
#define RIGHTFWD	0b00000010	// Left motor forward, right motor stopped
#define LEFTFWD		0b00000100	// Right motor forward, left motor stopped
#define RIGHT		0b00001010	// Left motor forward, right motor reversed
#define LEFT		0b00000101	// Right motor forward, left motor reversed
#define	RIGHTREV	0b00000001	// Left motor reversed, right motor stopped
#define	LEFTREV		0b00001000	// Right motor reversed, left motor stopped

/*==============================================================================
    Sonar range function. Returns target distance in cm, or 0 if error.
 =============================================================================*/

/*==============================================================================
    Main program code
==============================================================================*/
void beep(unsigned char period, unsigned char cycles)
{
	unsigned char i;
	unsigned char t;
	for (i = cycles; i != 0; i --)		// number of beeper pin output flips
	{
		BEEPER = !BEEPER;				// flip beeper pin and
		for (t = period; t != 0; t --);	// wait for period to end
	}
}

int main(void)
{
//	 Initialize I/O and peripherals for PORTB output
	initPorts();

	while(1)
    {

	if (S2 == 0)
			beep(60,200);			// Beep for 200 counts of 60 loop delays
        }
}
