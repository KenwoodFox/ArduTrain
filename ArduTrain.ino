#include <Servo.h>

//Brake value 
int brakeMulti = 0.6;
//Aceleration value
int accelerationMulti = 0.3;
//Brake toggle
boolean BRAKE = false;
//Accelerate toggle
boolean ACCEL = false;

//throttle
int throttle = 0;

//crusing speed
int setThro = 40;

//status light
//highlow

Servo esc;
