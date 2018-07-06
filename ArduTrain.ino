#include <Servo.h>

//Brake value 
int brakeMulti = 0.6;
//Aceleration value
int accelerationMulti = 0.3;
//Brake toggle
boolean BRAKE = false;
//Accelerate toggle
boolean ACCEL = false;

//crusing speed

//status light
Servo esc;
 
void setup()
{
  esc.attach(9);
}
 
void loop()
{
  int throttle = analogRead(throttlePin);
  throttle = map(throttle, 0, 1023, 0, 179);
  esc.write(throttle);
}
