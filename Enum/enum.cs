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
        MotorDriver,
        PostionControl,
        PrimaryVideo,
        RealTimeInfo,
        SearchLight,
        StatusInfo,
        TrackPreset,
        WeatherForecast
    }

    public enum SherpaEnvelopeStatus : short
    {
        Ok,
        Error,
        Warning
    }

    public enum SherpaEnvelopeRequestType : short 
    {
        Pull,
        Push
    }
}
