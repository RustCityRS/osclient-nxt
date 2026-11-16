// libs/game/runetek5/clientoptions/options/ClientOptions_MaxForegroundFps.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game::option {
    class MaxForegroundFps : public MaxBackgroundFps // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~MaxForegroundFps();
        virtual int GetDefault();
        MaxForegroundFps(graphics::RT7Core& rt7Core, Settings& settings, const char* str);
    };

    // 0x1005fa6d0: MaxForegroundFps::~MaxForegroundFps() has the same machine code as Volume::~Volume()

    // 0x1005fd690
    MaxForegroundFps::MaxForegroundFps(graphics::RT7Core& rt7Core, Settings& settings, const char* str) {
        Range<int>* local_30;

        new (&local_30) oldscape::sidebars::SideBarData(5, 300);
        new (this) Option<int>(rt7Core, settings, str, local_30);
    }

    // 0x1005fd700
    int MaxForegroundFps::GetDefault() {
        return ((HardwareInfo*)Instance())->GetRefreshRate() + 10;
    }

} // namespace jag::game::option
