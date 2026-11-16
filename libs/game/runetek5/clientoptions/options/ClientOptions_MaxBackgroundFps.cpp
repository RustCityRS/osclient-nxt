// libs/game/runetek5/clientoptions/options/ClientOptions_MaxBackgroundFps.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game::option {
    class MaxBackgroundFps {
    public:
        // virtual methods in vtable order
        virtual ~MaxBackgroundFps();
        virtual GetDefault();
        MaxBackgroundFps(graphics::RT7Core&, Settings&, char const*);

        // data members, from how the methods use this: 193 bytes
        undefined* field_0;     // offset 0, vtable pointer
        undefined8 field_8;     // offset 8
        undefined8 field_16;    // offset 16
        undefined4 field_24;    // offset 24
        undefined1 field_28[8]; // offset 28
        undefined4 field_36;    // offset 36
        char _unknown_40[153];
    };

    // 0x100269b00: the linker folded this into oldscape::rs2lib::social::ClanSettingsDelta::SetOwner::GetID() const, which has identical code
    MaxBackgroundFps::GetDefault();

    // 0x1005f9c50: the linker folded this into Volume::~Volume(), which has identical code
    MaxBackgroundFps::~MaxBackgroundFps();

    // 0x1005f9c60: the linker folded this into Volume::~Volume(), which has identical code
    MaxBackgroundFps::~MaxBackgroundFps();

    // 0x1005fa6d0: the linker folded this into Volume::~Volume(), which has identical code
    MaxBackgroundFps::~MaxBackgroundFps();

    // 0x100600190, 96 bytes, base-object constructor, placed by class name and debug map
    // MaxBackgroundFps::MaxBackgroundFps(graphics::RT7Core&, Settings&, char const*)
    void MaxBackgroundFps::MaxBackgroundFps(RT7Core* param_1, Settings* param_2, char* param_3) {
        undefined1 local_30[8];

        new (local_30) oldscape::sidebars::SideBarData(5, 300);
        new (this) Option<int>(param_1, param_2, param_3, local_30);
        field_0 = PTR_vtable_100ee8510 + 16;
    }

    // 0x1006001f0, 16 bytes, complete-object constructor, placed by class name and debug map
    // MaxBackgroundFps::MaxBackgroundFps(graphics::RT7Core&, Settings&, char const*): jumps straight to the base-object constructor

} // namespace jag::game::option
