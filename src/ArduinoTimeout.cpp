#include "ArduinoTimeout.h"

ArduinoTimeout::ArduinoTimeout()
{

}

void ArduinoTimeout::reset(void)
{
	previous_time = millis();
}

bool ArduinoTimeout::check(uint32_t _time)
{
	if (millis() < previous_time)
		reset();
	if (millis() - previous_time >= _time)
	{
		return 1;
	}
	return 0;
}
