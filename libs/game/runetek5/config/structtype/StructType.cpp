// libs/game/runetek5/config/structtype/StructType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "StructType.h"

namespace jag::game {
    // 0x1004e1160
    uint8_t* StructType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        if (arg2 == 249) {
            DecodeParams(arg1);
        } else {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "structtype/StructType.cpp",
                      21, "Unrecognised .struct config code: %u in struct %d", (unsigned long)arg2,
                      (unsigned long)field_32);
        }
        return DataStatus::READY;
    }

    // 0x1004e13d0
    void StructType::PostDecode() {}

} // namespace jag::game
