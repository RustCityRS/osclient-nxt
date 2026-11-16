// libs/game/runetek5/config/defaults/CustomizationDefaults.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class CustomizationDefaults {
    public:
        GetTitleEnum(PlayerGender) const;
        CustomizationDefaults(PacketT<Array<unsigned char, eastl::allocator>>&);

        // data members, from how the methods use this: 12 bytes
        undefined4 field_0; // offset 0
        undefined4 field_4; // offset 4
        char _unknown_8[4];
    };

    // 0x1003f0db0, 32 bytes, inline, placed by class name and debug map
    // CustomizationDefaults::GetTitleEnum(PlayerGender) const
    undefined4 CustomizationDefaults::GetTitleEnum(int param_2) {
        return (&field_0)[param_2 == 1];
    }

} // namespace jag::game
