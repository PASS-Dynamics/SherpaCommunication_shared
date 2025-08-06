#ifndef STATUSINFO_HPP
#define STATUSINFO_HPP

#include <cstdint>
#include <string>
#include <utility> 

#include "SherpaStatus.hpp"
#include "LfrStatus.hpp"

struct StatusInfo 
{
    std::pair<int16_t, std::string> EmittingTrack;

    bool AudioTracking;

    bool LaserDazzler;

    bool SearchLigth;

    bool AhdEmission;

    SherpaStatus Status;

    LfrStatus Lfr;
};

#endif

