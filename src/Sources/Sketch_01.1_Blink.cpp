#include <Arduino.h>
/**********************************************************************
 * Filename    : Blink
 * Description : Make an led blinking.
 * Auther      : www.freenove.com
 * Modification: 2022/10/19
 **********************************************************************/
#define LED_BUILTIN 2
// the setup function runs once when you press reset or power the board

int	 counter = 0;
void setupC()
{
	// initialize digital pin LED_BUILTIN as an output.
	pinMode(LED_BUILTIN, OUTPUT);
	Serial.begin(115200);
	delay(2000);
	Serial.print("\nHello World\n");
}

// the loop function runs over and over again forever
void loopD()
{
	digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
	delay(1000);					 // wait for a second
	digitalWrite(LED_BUILTIN, LOW);	 // turn the LED off by making the voltage LOW
	delay(200);						 // wait for a second

	Serial.printf("Counter = %d\n", counter);
	counter++;
}
