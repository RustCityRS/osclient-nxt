// libs/game/runetek5/clientoptions/options/ClientOptions_AutoSetup.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::game::option {
    class AutoSetup {
    public:
        // virtual methods in vtable order
        virtual ~AutoSetup();
        virtual GetDefault();
        AutoSetup(graphics::RT7Core&, Settings&, char const*);

        // data members, from how the methods use this: 193 bytes
        undefined* field_0;     // offset 0, vtable pointer
        undefined8 field_8;     // offset 8
        undefined8 field_16;    // offset 16
        undefined4 field_24;    // offset 24
        undefined1 field_28[8]; // offset 28
        undefined4 field_36;    // offset 36
        char _unknown_40[153];
    };

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    AutoSetup::GetDefault();

    // 0x100608a30, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // AutoSetup::AutoSetup(graphics::RT7Core&, Settings&, char const*): jumps straight to the base-object constructor

    // 0x100609210, 16 bytes, complete-object destructor, inline, placed by class name
    // AutoSetup::~AutoSetup(): jumps straight to the base-object destructor

    // 0x10060efd0, 96 bytes, base-object constructor, inline, placed by class name
    // AutoSetup::AutoSetup(graphics::RT7Core&, Settings&, char const*)
    void AutoSetup::AutoSetup(RT7Core* param_1, Settings* param_2, char* param_3) {
        undefined1 local_30[8];

        new (local_30) oldscape::sidebars::SideBarData(0, 5);
        new (this) Option<EnumAutoSetup>(param_1, param_2, param_3, local_30);
        field_0 = PTR_vtable_100ee85d0 + 16;
    }

    // 0x10060f0c0, 32 bytes, deleting destructor, inline, placed by class name
    // AutoSetup::~AutoSetup()
    void AutoSetup::~AutoSetup() {
        ~AutoSetup(this);
        operator_delete(this);
    }

    // 0x10060f130: the linker folded this into Option<EnumAutoSetup>::~Option(), which has identical code
    AutoSetup::~AutoSetup();

} // namespace jag::game::option
