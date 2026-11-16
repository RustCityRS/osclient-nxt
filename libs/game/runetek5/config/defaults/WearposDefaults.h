// libs/game/runetek5/config/defaults/WearposDefaults.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class WearposDefaults {
    public:
        GetWearposType() const;
        GetReplaceHeldLeftResetWearPos() const;
        GetReplaceHeldRightResetWearPos() const;
        uint GetReplaceHeldRightWearPos() const;
        uint GetReplaceHeldLeftWearPos() const;
        WearposDefaults(PacketT<Array<unsigned char, eastl::allocator>>&);
        ~WearposDefaults();

        // data members, from how the methods use this: 96 bytes
        char _unknown_0[8];
        ulong field_8;      // offset 8
        ScriptOp* field_16; // offset 16
        char _unknown_24[24];
        int field_48;                   // offset 48
        int field_52;                   // offset 52
        uint m_replaceHeldLeftWearPos;  // offset 56
        uint m_replaceHeldRightWearPos; // offset 60
        char _unknown_64[32];
    };

    // 0x100570440, 16 bytes, complete-object destructor, inline, placed by class name
    // WearposDefaults::~WearposDefaults(): jumps straight to the base-object destructor

    // 0x100570450, 64 bytes, base-object destructor, inline, placed by class name
    // WearposDefaults::~WearposDefaults()
    void WearposDefaults::~WearposDefaults() {
        (&field_88)->~Array();
        (&field_64)->~Array();
        (&field_24)->~Array();
        ~Array();
    }

} // namespace jag::game
