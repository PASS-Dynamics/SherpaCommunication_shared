#ifndef SHERPA_ENVELOPE_HPP
#define SHERPA_ENVELOPE_HPP

#include <string>
#include <optional>
#include <chrono>
#include <nlohmann/json.hpp>

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
    WeatherForecast
};

enum class SherpaEnvelopeStatus 
{
    ok,
    error,
    warning
};

template<typename T>
struct SherpaEnvelope 
{
    SherpaEnvelopeType target;
    SherpaEnvelopeStatus status = SherpaEnvelopeStatus::ok;
    std::optional<std::string> error;
    std::chrono::system_clock::time_point timestamp = std::chrono::system_clock::now();
    std::optional<std::string> id;
    std::optional<std::string> payload;
};

#endif 