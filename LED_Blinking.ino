const int greenPin = 2;  // R petal on RGB LED module connected to digital pin 11 
const int yellowPin = 3;  // G petal on RGB LED module connected to digital pin 10 
const int redPin = 4;  // B petal on RGB LED module connected to digital pin 9 
/**************************************************************************/
void setup()
{ 
  pinMode(greenPin, OUTPUT); // sets the redPin to be an output 
  pinMode(yellowPin, OUTPUT); // sets the greenPin to be an output 
  pinMode(redPin, OUTPUT); // sets the bluePin to be an output 
}  

void loop()
{

digitalWrite(greenPin, HIGH); // turn the LED on
delay(1000); // wait for a second
digitalWrite(greenPin, LOW); // turn the LED off
digitalWrite(yellowPin, HIGH); // turn the LED on
delay(1000); // wait for a second
digitalWrite(yellowPin, LOW); // turn the LED off
digitalWrite(redPin, HIGH); // turn the LED on
delay(1000); // wait for a second
digitalWrite(redPin, LOW); // turn the LED off

}
