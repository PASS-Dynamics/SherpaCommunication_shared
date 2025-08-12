
namespace sherpa.Shared.Abstractions
{
    public enum MotorDrivercmd
    {
        set_enable,
        set_position,
        set_reset,
        set_current,
        set_profile       
    };

    public class MotorDriver
    {
        public MotorDrivercmd? Cmd { get; set; }

        public bool? Enable { get; set; }

        public int? Errors { get; set; }

        public int? Status { get; set; }
    }
}
