#ifndef POSTIONCONTROL_HPP
#define POSTIONCONTROL_HPP

#include <cstdint>

struct PostionControl 
{
    bool Stabilization;

    bool GoToRestPosition;

    bool GoToNextRefPosition;

    int16_t Elevation;

    int16_t PanSpeed;

    int16_t TiltSpeed;

    int16_t Azimut;
};

#endif
