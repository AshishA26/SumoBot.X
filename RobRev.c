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
unsigned char mode;				// Operating modes (search, attack))
unsigned char range;			// Target range in cm
unsigned char target;			// Target acquisition counter
unsigned char counter;

/*==============================================================================
	Program constant definitions
 =============================================================================*/
#define	search		0			// Search mode
#define	attack		1			// Attack mode
#define	maxRange	70			// Maximum sonar target range in cm

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
unsigned char sonar(void)
{
//	unsigned char range = 0;
	
	while(ECHO == 1);			// Wait until previous transmission has finished
	__delay_ms(1);				// Add a delay and then
	TRIG = 1;					// start a new ping
	__delay_us(20);
	TRIG = 0;
	while(ECHO == 0);			// Wait for sonar pulse transmission to finish
	range = 0;					// Reset range

	while(ECHO == 1)
	{
		__delay_us(50);			// Increment distance while waiting for echo
		range ++;
		if(range == maxRange)	// Check for over-range and return error
			return(0);
	}
	return(range);				// Return distance to target in cm
}

/*==============================================================================
	Main program code
==============================================================================*/

int main(void)
{
	initPorts();
    PORTB = STOP;
    if (S6 == 0)
    {
        for (counter = 10; counter != 0; counter --)
        {
            LED3 = !LED3;
            __delay_ms(500);
        }
    }
	// Wait for button press and then delay 5s

    // Set starting conditions
	
    while(1)
    {
        PORTB = PORTA;
    }
	PORTB = LEFT;				// Turn left
}