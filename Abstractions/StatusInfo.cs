using sherpa.Shared.Enum;

namespace sherpa.Shared.Abstractions
{
    public class StatusInfo
    {
        public KeyValuePair<short, string>? EmittingTrack { get; set; }

        public bool? AudioTracking { get; set; }

        public bool? LaserDazzler { get; set; }

        public bool? SearchLight { get; set; }

        public bool? AhdEmission { get; set; }

        public SherpaStatus? Status { get; set; }

        public LfrStatus? Lfr { get; set; }
    }
}
