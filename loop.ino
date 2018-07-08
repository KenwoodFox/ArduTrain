void loop()
{
  if(ACCEL == true)
  {
    accelerate();
  }
  if(BRAKE == true)
  {
    decelerate();
  }
  throttle = map(throttle, 0, 100, 0, 179);
  esc.write(throttle);
}
