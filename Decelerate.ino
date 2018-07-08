void decelerate()
{
  if(BRAKE = true && throttle <= 0)
  {
    throttle = throttle - brakeMulti;
  }
}

