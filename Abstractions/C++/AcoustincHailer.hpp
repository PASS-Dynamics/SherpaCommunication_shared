#ifndef ACOUSTINCHAILER_HPP
#define ACOUSTINCHAILER_HPP

#include <cstdint>

class AcoustincHailer
{	
public:
    AcoustincHailer(){

        Mic = false;
        Mute = false;
        Volume = 0;
        AcousticBeamAperture = 0;
    };

    bool Mic;

    bool Mute;

    int16_t Volume;

    int16_t AcousticBeamAperture;

};

#endif 
