// libs/game/runetek5/clientoptions/options/ClientOptions_RenderDeviceCapsOverride.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::game::option {
    class RenderDeviceCapsOverride {
    public:
        // virtual methods in vtable order
        virtual ~RenderDeviceCapsOverride();
        virtual GetDefault();
        RenderDeviceCapsOverride(graphics::RT7Core&, Settings&, char const*);

        // data members, from how the methods use this: 177 bytes
        undefined* field_0;             // offset 0, vtable pointer
        undefined8 field_8;             // offset 8
        undefined8 field_16;            // offset 16
        Option<unsigned char> field_24; // offset 24
        undefined1 field_25[2];         // offset 25
        Option<unsigned char> field_27; // offset 27
        char _unknown_28[149];
    };

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    RenderDeviceCapsOverride::GetDefault();

    // 0x100608ae0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // RenderDeviceCapsOverride::RenderDeviceCapsOverride(graphics::RT7Core&, Settings&, char const*): jumps straight to the base-object constructor

    // 0x100609120, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // RenderDeviceCapsOverride::~RenderDeviceCapsOverride(): jumps straight to the base-object destructor

    // 0x1006106e0, 96 bytes, base-object constructor, inline, placed by class name
    // RenderDeviceCapsOverride::RenderDeviceCapsOverride(graphics::RT7Core&, Settings&, char const*)
    void RenderDeviceCapsOverride::RenderDeviceCapsOverride(RT7Core* param_1, Settings* param_2, char* param_3) {
        undefined2 local_2a;

        new (&local_2a) math::Vector2T<unsigned char>('\0', 255);
        new (this) Option<unsigned char>(param_1, param_2, param_3, local_2a);
        field_0 = PTR_vtable_100ee8520 + 16;
    }

    // 0x1006107e0, 32 bytes, deleting destructor, inline, placed by class name
    // RenderDeviceCapsOverride::~RenderDeviceCapsOverride()
    void RenderDeviceCapsOverride::~RenderDeviceCapsOverride() {
        ~RenderDeviceCapsOverride(this);
        operator_delete(this);
    }

    // 0x100610950: the linker folded this into Option<unsigned char>::~Option(), which has identical code
    RenderDeviceCapsOverride::~RenderDeviceCapsOverride();

} // namespace jag::game::option
