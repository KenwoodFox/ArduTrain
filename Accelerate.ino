void accelerate()
{
  if(ACCEL = true && throttle <= setThro)
  {
    throttle = throttle + accelerationMulti;
  }
}
