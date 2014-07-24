#ifndef AS5045_h
#define AS5045_h

#include "Arduino.h"

class AS5045
{
  public:
    AS5045(uint16_t DataPin, uint16_t ClockPin, uint16_t ChipSelectPin);
    uint32_t encoder_degrees(void);
    uint32_t encoder_value(void);
    uint32_t encoder_error(void);
    struct err_struct{
  	bool DECn;
	bool INCn;
	bool OCF;
	bool COF;
	bool LIN; } err_value;
  private:
    uint32_t read_chip(void);
    const uint16_t _clock;        // clock pin: output from arduino to as5045
    const uint16_t _cs;           // chip select: output
    const uint16_t _data;         // data pin: input
    
};

#endif
