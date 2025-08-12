#ifndef STATUSENUMS_HPP
#define STATUSENUMS_HPP

#include <cstdint>

typedef enum class SherpaStatus : uint16_t 
{
    None            = 0,
    Unknown         = 1,
    ConnectionLost  = 100
}SherpaStatus;

typedef enum class LfrStatus : uint16_t
{
    None            = 0,
    Unknown         = 1,
    ConnectionLost  = 100
}LfrStatus;

typedef enum class SherpaEnvelopeType : uint16_t
{
    AcousticHailerType,
    SherpaAttitudeType,
    CamOptionsType,
    DiagnosticType,
    JoystickInputType,
    LaserDazzerType,
    MotorDriverType,
    PostionControlType,
    PrimaryVideoType,
    RealTimeInfoType,
    SearchLigthType,
    StatusInfoType,
    TrackPresetType,
    WeatherForecastType
}SherpaEnvelopeType;

typedef enum class SherpaEnvelopeStatus : uint16_t
{
    Ok,
    Error,
    Warning
}SherpaEnvelopeStatus;

typedef enum class SherpaEnvelopeRequestType : uint8_t
{
    Pull,
    Push
}SherpaEnvelopeRequestType;

#endif
