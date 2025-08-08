#ifndef MOTORDRIVER_HPP
#define MOTORDRIVER_HPP

#include <cstdint>
#include <string>
#include <vector>
#include <utility>

class MotorDriver 
{
public:

	MotorDriver(){};
	
    bool enable;
    uint8_t errors;
    uint16_t status;
};

#endif 
