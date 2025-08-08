#ifndef SHERPA_ENVELOPE_HPP
#define SHERPA_ENVELOPE_HPP

#include <string>
#include <optional>
#include <chrono>

enum class SherpaEnvelopeType 
{
    AcoustincHailer,
    Attitude,
    CamOptions,
    Diagnostic,
    JoystickInput,
    LaserDazzer,
    PostionControl,
    PrimaryVideo,
    RealTimeInfo,
    SearchLigth,
    StatusInfo,
    TrackPreset,
    WeatherForecast,
    MotorDriver
};

enum class SherpaEnvelopeStatus 
{
    ok,
    error,
    warning
};

class SherpaEnvelope
{
public:
    SherpaEnvelope(){};
    SherpaEnvelopeType type;
    SherpaEnvelopeStatus status = SherpaEnvelopeStatus::ok;
    std::string error;
    uint64_t timestamp = 0;
    std::string id;
    std::string payload;
};

#endif 
