namespace sherpa.Shared.Enum
{
    public enum SherpaStatus : ushort
    {
        None            = 0,
        Unknown         = 1,
        ConnectionLost = 100,
    }

    public enum LfrStatus : ushort
    {
        None = 0,
        Unknown = 1,
        ConnectionLost = 100,
    }

    public enum SherpaEnvelopeType : short
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

    public enum SherpaEnvelopeStatus : short
    {
        ok,
        error,
        warning
    }
}
