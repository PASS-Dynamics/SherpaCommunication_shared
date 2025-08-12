#ifndef SHERPA_ENVELOPE_HPP
#define SHERPA_ENVELOPE_HPP

#include <string>
#include <optional>
#include <chrono>
#include "enum.hpp"


class SherpaEnvelope
{
public:
    SherpaEnvelope(){
    
		type = SherpaEnvelopeType::AcousticHailerType;  
    
    };
    SherpaEnvelopeType type;
    SherpaEnvelopeRequestType RequestType;
    SherpaEnvelopeStatus status = SherpaEnvelopeStatus::Ok;
    std::string error;
    uint64_t timestamp = 0;
    std::string id;
    std::string payload;
};

#endif
