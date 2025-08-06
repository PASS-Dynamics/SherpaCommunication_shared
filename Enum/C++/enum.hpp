#ifndef STATUSENUMS_HPP
#define STATUSENUMS_HPP

#include <cstdint>

enum class SherpaStatus : uint16_t 
{
    None            = 0,
    Unknown         = 1,
    ConnectionLost  = 100
};

enum class LfrStatus : uint16_t 
{
    None            = 0,
    Unknown         = 1,
    ConnectionLost  = 100
};

#endif
