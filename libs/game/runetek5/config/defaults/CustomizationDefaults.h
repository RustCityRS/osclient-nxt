// libs/game/runetek5/config/defaults/CustomizationDefaults.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class CustomizationDefaults {
    public:
        uint32_t GetTitleEnum(PlayerGender playerGender) const;
        CustomizationDefaults(PacketT<Array<unsigned char>>& arg1);

    private:
        uint32_t field_0;
        uint32_t field_4;
        uint8_t _unknown_8[4];
    };

    // 0x1003f0db0
    uint32_t CustomizationDefaults::GetTitleEnum(PlayerGender playerGender) const {
        return (&field_0)[playerGender == 1];
    }

} // namespace jag::game
