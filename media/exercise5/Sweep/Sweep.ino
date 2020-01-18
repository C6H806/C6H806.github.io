/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
 lololololololololololololololololololol
*/

#include <Servo.h>

Servo thanoservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int degree = 0;    // variable to store the servo position
int rotation = 0;
int pot = 0;



void setup() {
  thanoservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  rotation = analogRead(A0);
 degree = map(rotation,0,1024,0,181);
  thanoservo.write(degree);
  delay(20);
}
