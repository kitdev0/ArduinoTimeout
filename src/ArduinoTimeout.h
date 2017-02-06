
#ifndef _ArduinoTimeout_h
#define _ArduinoTimeout_h

#include "Arduino.h"

class ArduinoTimeout
{
private:
	uint32_t previous_time = 0;

public:
	ArduinoTimeout();
	void reset(void);
	bool check(uint32_t _time);
};


#endif
