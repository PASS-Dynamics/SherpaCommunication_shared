using System.Runtime.InteropServices;
using System.Threading;

namespace sherpa.Shared.Abstractions
{
    public class AcousticHailer
    {
        public bool Mic { get; set; }

        public bool Mute { get; set; }

        public short Volume { get; set; }

        public short AcousticBeamAperture { get; set; }
    }
}