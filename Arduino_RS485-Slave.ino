#include <Servo.h>                //For using Servo functions
int enablePin = 2; 
Servo servo;

void setup() 
{
  Serial.begin(9600);                   // initialize serial at baudrate 9600:
  pinMode(enablePin, OUTPUT);
  delay(10);
  digitalWrite(enablePin, LOW);        //  (Pin 2 always LOW to receive value from Master)
  servo.attach(9);                     //  (Servo PWM pin connected to Pin 3 PWM pin of Arduino)
}
void loop() 
{ 
  // receiver
  if (Serial.available()) {
    int angle = Serial.parseInt(); 
    if(angle<=180) // Rotate Servo Motor 
    {
      servo.write(angle);
    }
  }
}  
