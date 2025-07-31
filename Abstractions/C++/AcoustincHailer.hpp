#ifndef ACOUSTINCHAILER_HPP
#define ACOUSTINCHAILER_HPP

#include <cstdint>

struct AcoustincHailer 
{
    bool Mic;

    bool Mute;

    int16_t Volume;

    int16_t AcousticBeamAperture;
};

#endif 