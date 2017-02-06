#include "ArduinoTimeout.h"

ARDUINO_TIMEOUT timeout;

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
