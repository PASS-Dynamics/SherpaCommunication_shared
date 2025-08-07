#ifndef TRACKPRESET_HPP
#define TRACKPRESET_HPP

#include <cstdint>
#include <string>
#include <vector>
#include <utility> 

struct TrackPreset 
{
public:

	TrackPreset();
	
    std::vector<std::pair<int16_t, std::string>> Tracks;

    std::pair<int16_t, std::string> EmittingTrack;

    bool Loop;
};

#endif
