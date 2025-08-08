#ifndef PRIMARYVIDEO_HPP
#define PRIMARYVIDEO_HPP

#include <cstdint>
#include <string>

struct PrimaryVideo 
{
public:

	PrimaryVideo();
	
    int16_t Distance;

    std::string ObjectIdentified;

    int16_t ObjectIdentifiedAccuracy;
};

#endif

