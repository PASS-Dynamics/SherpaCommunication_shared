

using sherpa.Shared.Enum;

namespace sherpa.Shared.SherpaEnvelope
{
    public class SherpaEnvelope
    {
        public SherpaEnvelopeType? Type { get; set; }

        public SherpaEnvelopeStatus? Status { get; set; }

        public string? Error { get; set; }

        public DateTime? Timestamp { get; set; }

        public string? Id { get; set; }

        public string? Payload { get; set; }
    }
}
