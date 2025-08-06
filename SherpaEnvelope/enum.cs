
namespace sherpa.Shared.SherpaEnvelope
{
    public enum SherpaEnvelopeType: short
    {
        AcousticHailer,
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
    }

    public enum SherpaEnvelopeStatus: short
    {
       ok,
       error,
       warning
    }
}
