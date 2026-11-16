// libs/game/runetek5/clientoptions/options/ClientOptions_MaxBackgroundFps.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game::option {
    class MaxBackgroundFps {
    public:
        // virtual methods in vtable order
        virtual ~MaxBackgroundFps();
        virtual uint64_t GetDefault();
        MaxBackgroundFps(graphics::RT7Core& rt7Core, Settings& settings, const char* str);

    private:
        Settings* field_8;
        char* field_16;
        uint32_t field_24;
        Range<int>* field_28;
        uint32_t field_36;
        uint8_t _unknown_40[153];
    };

    // 0x100269b00: MaxBackgroundFps::GetDefault() has the same machine code as oldscape::rs2lib::social::ClanSettingsDelta::SetOwner::GetID() const

    // 0x1005fa6d0: MaxBackgroundFps::~MaxBackgroundFps() has the same machine code as Volume::~Volume()

    // 0x100600190
    MaxBackgroundFps::MaxBackgroundFps(graphics::RT7Core& rt7Core, Settings& settings, const char* str) {
        Range<int>* local_30;

        new (&local_30) oldscape::sidebars::SideBarData(5, 300);
        new (this) Option<int>(rt7Core, settings, str, local_30);
    }

} // namespace jag::game::option
