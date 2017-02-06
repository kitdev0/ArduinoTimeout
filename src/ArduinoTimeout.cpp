#include "ArduinoTimeout.h"

ARDUINO_TIMEOUT::ARDUINO_TIMEOUT()
{

}

void ARDUINO_TIMEOUT::reset(void)
{
	previous_time = millis();
}

bool ARDUINO_TIMEOUT::check(uint32_t _time)
{
	if (millis() < previous_time)
		reset();
	if (millis() - previous_time >= _time)
	{
		return 1;
	}
	return 0;
}
