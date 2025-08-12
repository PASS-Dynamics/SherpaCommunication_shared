#ifndef STATUSENUMS_HPP
#define STATUSENUMS_HPP

#include <cstdint>

enum class SherpaStatus : uint16_t 
{
    None            = 0,
    Unknown         = 1,
    ConnectionLost  = 100
};

enum class LfrStatus : uint16_t 
{
    None            = 0,
    Unknown         = 1,
    ConnectionLost  = 100
};

enum SherpaEnvelopeType : uint16_t 
{
    AcousticHailer,
    Attitude,
    CamOptions,
    Diagnostic,
    JoystickInput,
    LaserDazzer,
    MotorDriver,
    PostionControl,
    PrimaryVideo,
    RealTimeInfo,
    SearchLigth,
    StatusInfo,
    TrackPreset,
    WeatherForecast
}

enum SherpaEnvelopeStatus : uint16_t 
{
    Ok,
    Error,
    Warning
}

enum SherpaEnvelopeRequestType : uint8_t 
{
    Pull,
    Push
}

#endif
