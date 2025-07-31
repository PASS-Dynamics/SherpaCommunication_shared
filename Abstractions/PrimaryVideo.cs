namespace sherpa.Shared.Abstractions
{
    public class PrimaryVideo
    {
        public short Distance { get; set; }

        public required string ObjectIdentified { get; set; }

        public short ObjectIdentifiedAccuracy { get; set; }
    }
}
