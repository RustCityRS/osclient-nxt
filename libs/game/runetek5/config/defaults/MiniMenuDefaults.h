// libs/game/runetek5/config/defaults/MiniMenuDefaults.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class MiniMenuDefaults {
    public:
        MiniMenuDefaults(PacketT<Array<unsigned char>>& arg1);
        ~MiniMenuDefaults();

    private:
        uint8_t _unknown_0[56];
        uint64_t field_56;
        uint8_t field_64;
        uint8_t _unknown_65[3];
    };

    // 0x100570010
    MiniMenuDefaults::~MiniMenuDefaults() {
        field_48.~unique_ptr();
        field_40.~unique_ptr();
        field_32.~unique_ptr();
        field_24.~unique_ptr();
        field_16.~unique_ptr();
        field_8.~unique_ptr();
    }

} // namespace jag::game
