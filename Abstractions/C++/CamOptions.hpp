#ifndef CAMOPTIONS_HPP
#define CAMOPTIONS_HPP

#include <cstdint>

class CamOptions 
{
public:

	CamOptions();
	
    int16_t Zoom;

    bool AutomaticBEamSync;

    bool CamRec;
};

#endif
