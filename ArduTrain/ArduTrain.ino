#include <Servo.h>

Servo esc;

int throttle = 0;

void setup() 
{
  esc.attach(9);
}

void loop() 
{
  set(180);
  delay(100);
  set(50);
  delay(100);
  set(0);

}

void set (int var)
{
  for (throttle = 0; throttle <= var; throttle += 1)
  {
    esc.write(throttle);
    delay(15);
  }
}

