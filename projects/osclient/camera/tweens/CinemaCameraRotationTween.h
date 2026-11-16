// projects/osclient/camera/tweens/CinemaCameraRotationTween.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape {
    class CinemaCameraRotationTween {
    public:
        // virtual methods in vtable order
        virtual ~CinemaCameraRotationTween();
        int GetValue() const;
        CinemaCameraRotationTween(int, int, int, CinemaCameraTween::Easing);

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined4 field_8;  // offset 8
        int field_12;        // offset 12
        undefined8 field_16; // offset 16
        uint field_24;       // offset 24
        undefined4 field_28; // offset 28
        undefined4 field_32; // offset 32
        char _unknown_36[4];
    };

    // 0x100124bd0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // CinemaCameraRotationTween::~CinemaCameraRotationTween(): jumps straight to the base-object destructor

    // 0x100124be0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // CinemaCameraRotationTween::~CinemaCameraRotationTween()
    void CinemaCameraRotationTween::~CinemaCameraRotationTween() {
        ~DiscordRichPresence();
        operator_delete(this);
    }

    // 0x100156b80, 6 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // CinemaCameraRotationTween::~CinemaCameraRotationTween()
    /* DiscordRichPresence::~DiscordRichPresence() */

    void DiscordRichPresence::~DiscordRichPresence() {}

} // namespace jag::oldscape

namespace jag {
    // 0x100124bd0: the linker folded this into oldscape::CinemaCameraRotationTween::~CinemaCameraRotationTween(), which has identical code
    DiscordRichPresence::~DiscordRichPresence();

    // 0x100156b80: the linker folded this into oldscape::CinemaCameraRotationTween::~CinemaCameraRotationTween(), which has identical code
    DiscordRichPresence::~DiscordRichPresence();

} // namespace jag

namespace jag::oldscape::highlight {
    // 0x100124ca0, 16 bytes, inline, placed by debug map only (low confidence)
    // UniqueNPCKey(int, int)
    ulong UniqueNPCKey(int param_1, int param_2) {
        return (long)param_1 | (ulong)(uint)param_2 << 32;
    }

} // namespace jag::oldscape::highlight
