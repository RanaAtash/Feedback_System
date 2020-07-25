#include <Servo.h> 
// Create the servo motor object
Servo myServo;

// Intialize potentiometer analog pin (A0)
int pot = 0; 

void setup()
{
  // Attach servo motor to Arduino pin 5
  myServo.attach(5);
  // Initialize serial communication at 9600 bits per second
  Serial.begin(9600);
}
 
void loop()
{ 
    // Read the voltage from the potentiometer
    int val = analogRead(pot);
    // Scale potentiometer reading to angle in the range [0,180]
    int angle = map(val,0,1023,0,180);
    // Move the servo motor to the corresponding angle
    myServo.write(angle);
    // Print the resulting angle
    Serial.println(angle);
    // Wait for a second
    delay(100);
}
