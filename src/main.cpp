#include <Arduino.h>
/**********************************************************************
 * Filename    : Blink
 * Description : Make an led blinking.
 * Auther      : www.freenove.com
 * Modification: 2022/10/19
 **********************************************************************/
#define LED_BUILTIN 2
#define PIN_BUTTON 13

// the setup function runs once when you press reset or power the board

void setup()
{
	// initialize digital pin LED_BUILTIN as an output.
	pinMode(LED_BUILTIN, OUTPUT);
	pinMode(PIN_BUTTON, INPUT);

	// Serial initiation for print messages
	delay(2000);
	Serial.begin(115200);
	delay(2000);
	Serial.print("\nHello World\n");
}

bool previousButtonState = LOW;
void loop()
{

	bool buttonState = digitalRead(PIN_BUTTON);
	delay(20);
	if (digitalRead(PIN_BUTTON) == buttonState)
	{
		if (buttonState != previousButtonState)
		{
			char *buttonStateMessage[2] = {"Button Off\n", "Button Pressed!"};

			Serial.printf("%s\n", buttonStateMessage[buttonState]);
		}
		digitalWrite(LED_BUILTIN, !buttonState);
		previousButtonState = buttonState;

		if (digitalRead(PIN_BUTTON) == LOW)
		{
			delay(200);
			digitalWrite(LED_BUILTIN, LOW);
			delay(200);
		}
	}
	// The button works by shorting.
	//

	// digitalWrite(LED_BUILTIN, HIGH); // turn the LED on (HIGH is the voltage level)
	// delay(1000);					 // wait for a second
	// digitalWrite(LED_BUILTIN, LOW);	 // turn the LED off by making the voltage LOW
	// delay(200);						 // wait for a second
}

void reverseGPIO(int pin)
{
	digitalWrite(pin, !digitalRead(pin));
}
