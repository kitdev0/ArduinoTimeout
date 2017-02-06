
#ifndef _ARDUINO_TIMEOUT_h
#define _ARDUINO_TIMEOUT_h

#include "Arduino.h"

class ARDUINO_TIMEOUT
{
private:
	uint32_t previous_time = 0;

public:
	ARDUINO_TIMEOUT();
	void reset(void);
	bool check(uint32_t _time);
};


#endif //_ARDUINO_DEBUG_h
