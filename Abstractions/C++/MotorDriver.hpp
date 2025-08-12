#ifndef MOTORDRIVER_HPP
#define MOTORDRIVER_HPP

#include <cstdint>
#include <string>
#include <vector>
#include <utility>


typedef enum MotorDrivercmd
{
    set_enable,
    set_position,
    set_reset,
    set_current,
    set_profile,
    get_status

}MotorDriverCmd;


class MotorDriver 
{
public:

	MotorDriver(){};

    MotorDriverCmd cmd;
    bool enable;
    uint8_t errors;
    uint16_t status;
};

#endif 
