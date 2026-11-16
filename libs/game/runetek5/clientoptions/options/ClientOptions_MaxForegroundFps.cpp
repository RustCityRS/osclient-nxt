// libs/game/runetek5/clientoptions/options/ClientOptions_MaxForegroundFps.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game::option {
    class MaxForegroundFps : public MaxBackgroundFps // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~MaxForegroundFps();
        virtual int GetDefault();
        MaxForegroundFps(graphics::RT7Core&, Settings&, char const*);

        // data members, from how the methods use this: 193 bytes, the first 193 are MaxBackgroundFps
    };

    // 0x1005f9c50: the linker folded this into Volume::~Volume(), which has identical code
    MaxForegroundFps::~MaxForegroundFps();

    // 0x1005f9c60: the linker folded this into Volume::~Volume(), which has identical code
    MaxForegroundFps::~MaxForegroundFps();

    // 0x1005fa6d0: the linker folded this into Volume::~Volume(), which has identical code
    MaxForegroundFps::~MaxForegroundFps();

    // 0x1005fd690, 96 bytes, base-object constructor, placed by class name and debug map
    // MaxForegroundFps::MaxForegroundFps(graphics::RT7Core&, Settings&, char const*)
    void MaxForegroundFps::MaxForegroundFps(RT7Core* param_1, Settings* param_2, char* param_3) {
        undefined1 local_30[8];

        new (local_30) oldscape::sidebars::SideBarData(5, 300);
        new (this) Option<int>(param_1, param_2, param_3, local_30);
        field_0 = &PTR__MaxBackgroundFps_100f09c60;
    }

    // 0x1005fd6f0, 16 bytes, complete-object constructor, placed by class name and debug map
    // MaxForegroundFps::MaxForegroundFps(graphics::RT7Core&, Settings&, char const*): jumps straight to the base-object constructor

    // 0x1005fd700, 32 bytes, placed by class name and debug map
    // MaxForegroundFps::GetDefault()
    int MaxForegroundFps::GetDefault() {
        HardwareInfo* this_00;

        this_00 = (HardwareInfo*)Instance();
        return this_00->GetRefreshRate() + 10;
    }

} // namespace jag::game::option
