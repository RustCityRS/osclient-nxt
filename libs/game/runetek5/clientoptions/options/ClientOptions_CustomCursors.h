// libs/game/runetek5/clientoptions/options/ClientOptions_CustomCursors.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game::option {
    class CustomCursors {
    public:
        // virtual methods in vtable order
        virtual ~CustomCursors();
        virtual bool IsAvailable(OptionClient) const;
        virtual GetDefault();
        CustomCursors(graphics::RT7Core&, Settings&, char const*);

        // data members, from how the methods use this: 193 bytes
        undefined* field_0;     // offset 0, vtable pointer
        undefined8 field_8;     // offset 8
        undefined8 field_16;    // offset 16
        undefined4 field_24;    // offset 24
        undefined1 field_28[8]; // offset 28
        undefined4 field_36;    // offset 36
        char _unknown_40[153];
    };

    // 0x100269960: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const, which has identical code
    CustomCursors::GetDefault();

    // 0x1005fa390: the linker folded this into WindowMode::IsAvailable(OptionClient) const, which has identical code
    CustomCursors::IsAvailable(OptionClient) const;

    // 0x1005fe390: the linker folded this into Shadows::~Shadows(), which has identical code
    CustomCursors::~CustomCursors();

    // 0x100608a80, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // CustomCursors::CustomCursors(graphics::RT7Core&, Settings&, char const*): jumps straight to the base-object constructor

    // 0x100609140: the linker folded this into CutsceneSubtitles::~CutsceneSubtitles(), which has identical code
    CustomCursors::~CustomCursors();

    // 0x10060f700: the linker folded this into Option<EnumOptionToggle>::~Option(), which has identical code
    CustomCursors::~CustomCursors();

    // 0x10060fc00, 96 bytes, base-object constructor, inline, placed by class name
    // CustomCursors::CustomCursors(graphics::RT7Core&, Settings&, char const*)
    void CustomCursors::CustomCursors(RT7Core* param_1, Settings* param_2, char* param_3) {
        undefined1 local_30[8];

        new (local_30) oldscape::sidebars::SideBarData(0, 1);
        new (this) Option<EnumOptionToggle>(param_1, param_2, param_3, local_30);
        field_0 = PTR_vtable_100ee8508 + 16;
    }

} // namespace jag::game::option
