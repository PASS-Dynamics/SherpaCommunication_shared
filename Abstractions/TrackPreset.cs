namespace sherpa.Shared.Abstractions
{
    public class TrackPreset
    {
        public List<KeyValuePair<short, string>>? Tracks { get; set; }

        public KeyValuePair<short, string>? EmittingTrack { get; set; }

        public bool? Loop { get; set; }
    }
}
