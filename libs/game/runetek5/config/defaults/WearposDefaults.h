// libs/game/runetek5/config/defaults/WearposDefaults.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class WearposDefaults {
    public:
        void GetWearposType() const;
        uint8_t* GetReplaceHeldLeftResetWearPos() const;
        uint8_t* GetReplaceHeldRightResetWearPos() const;
        unsigned int GetReplaceHeldRightWearPos() const;
        unsigned int GetReplaceHeldLeftWearPos() const;
        WearposDefaults(PacketT<Array<unsigned char>>& arg1);
        ~WearposDefaults();

    private:
        uint8_t _unknown_0[8];
        unsigned long field_8;
        unsigned int* field_16;
        uint8_t _unknown_24[24];
        int field_48;
        int field_52;
        unsigned int m_replaceHeldLeftWearPos;
        unsigned int m_replaceHeldRightWearPos;
        uint8_t _unknown_64[32];
    };

    // 0x100570450
    WearposDefaults::~WearposDefaults() {
        field_88.~Array();
        field_64.~Array();
        field_24.~Array();
    }

} // namespace jag::game
