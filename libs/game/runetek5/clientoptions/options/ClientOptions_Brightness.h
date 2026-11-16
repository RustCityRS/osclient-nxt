// libs/game/runetek5/clientoptions/options/ClientOptions_Brightness.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.rs2lib

namespace jag::game::option {
    class Brightness {
    public:
        // virtual methods in vtable order
        virtual ~Brightness();
        virtual GetDefault();
        Brightness(graphics::RT7Core&, Settings&, char const*);

        // data members, from how the methods use this: 193 bytes
        undefined* field_0;     // offset 0, vtable pointer
        undefined8 field_8;     // offset 8
        undefined8 field_16;    // offset 16
        undefined4 field_24;    // offset 24
        undefined1 field_28[8]; // offset 28
        undefined4 field_36;    // offset 36
        char _unknown_40[153];
    };

    // 0x1002699e0: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails::GetID() const, which has identical code
    Brightness::GetDefault();

    // 0x100608a40, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // Brightness::Brightness(graphics::RT7Core&, Settings&, char const*): jumps straight to the base-object constructor

    // 0x1006091d0, 16 bytes, complete-object destructor, inline, placed by class name
    // Brightness::~Brightness(): jumps straight to the base-object destructor

    // 0x10060f370, 96 bytes, base-object constructor, inline, placed by class name
    // Brightness::Brightness(graphics::RT7Core&, Settings&, char const*)
    void Brightness::Brightness(RT7Core* param_1, Settings* param_2, char* param_3) {
        undefined1 local_30[8];

        new (local_30) oldscape::sidebars::SideBarData(0, 4);
        new (this) Option<EnumBrightness>(param_1, param_2, param_3, local_30);
        field_0 = PTR_vtable_100ee84e0 + 16;
    }

    // 0x10060f460, 32 bytes, deleting destructor, inline, placed by class name
    // Brightness::~Brightness()
    void Brightness::~Brightness() {
        ~Brightness(this);
        operator_delete(this);
    }

    // 0x10060f4c0: the linker folded this into Option<EnumBrightness>::~Option(), which has identical code
    Brightness::~Brightness();

} // namespace jag::game::option
