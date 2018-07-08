void runClock()
{
  if(clockCursor <= clockTime)
  {
    if(clockPage = 1)
    {
      ACCEL = true;
    }
    if(clockPage = 3)
    {
      BRAKE = true;
    }
  }
  clockPage = 1;
}

