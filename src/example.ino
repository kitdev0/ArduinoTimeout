#include "ArduinoTimeout.h"

ARDUINO_TIMEOUT timeout;

void setup ()
{
  timeout.reset();
}

void loop ()
{
  if(timeout.check(5000)){
    //Write code here for timeout process.
  }
}
