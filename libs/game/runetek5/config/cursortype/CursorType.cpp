// libs/game/runetek5/config/cursortype/CursorType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "CursorType.h"

namespace jag::game {
    // 0x10055a100
    uint8_t* CursorType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        uint8_t uVar1;
        uint64_t in_RAX;

        uint32_t uVar2 = (uint32_t)((unsigned long)in_RAX >> 32);
        if (arg2 == 2) {
            uVar1 = arg1.g1();
            field_60 = uVar1;
            uVar1 = arg1.g1();
            field_61 = uVar1;
        } else if (arg2 == 1) {
            uVar2 = arg1.gSmart2or4s();
            field_56 = uVar2;
        } else {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "cursortype/CursorType.cpp",
                      22, "Error unrecognised .cursor config code: %u", (((uint64_t)uVar2 << 32) | (uint32_t)arg2));
        }
        return DataStatus::READY;
    }

    // 0x10055a190
    void CursorType::PostDecode() {}

} // namespace jag::game
