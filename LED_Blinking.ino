const int greenPin = 2; 
const int yellowPin = 3;   
const int redPin = 4;  

void setup()
{ 
  pinMode(greenPin, OUTPUT); // sets the greenPin to be an output 
  pinMode(yellowPin, OUTPUT); // sets the yellownPin to be an output 
  pinMode(redPin, OUTPUT); // sets the redPin to be an output 
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
