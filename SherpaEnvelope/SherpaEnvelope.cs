

namespace sherpa.Shared.SherpaEnvelope
{

    public class SherpaEnvelope<T> where T : class
    {
        public SherpaEnvelopeType Type { get; set; }

        public SherpaEnvelopeStatus Status { get; set; } = SherpaEnvelopeStatus.ok;

        public string? Error { get; set; }

        public DateTime Timestamp { get; set; } = DateTime.UtcNow;

        public string? Id { get; set; }

        public string? Payload { get; set; } 
    }
}
