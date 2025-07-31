namespace sherpa.Shared.Abstractions
{
    public class PostionControl
    {
        public bool Stabilization { get; set; }

        public bool GoToRestPosition { get; set; }

        public bool GoToNextRefPosition { get; set; }

        public short Elevation { get; set; }

        public short PanSpeed { get; set; }

        public short TiltSpeed { get; set; }

        public short Azimut { get; set; }
    }
}
