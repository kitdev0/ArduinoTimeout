#include "ArduinoTimeout.h"

ArduinoTimeout timeout;

void setup (void)
{
  timeout.reset();
}

void loop (void)
{
  if(timeout.check(5000)){
    //Write code here for timeout process.
  }
}
