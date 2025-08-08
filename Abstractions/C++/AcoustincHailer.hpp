#ifndef ACOUSTINCHAILER_HPP
#define ACOUSTINCHAILER_HPP

#include <cstdint>

class AcoustincHailer
{
	AcoustincHailer();
	
    bool Mic;

    bool Mute;

    int16_t Volume;

    int16_t AcousticBeamAperture;
};

#endif 