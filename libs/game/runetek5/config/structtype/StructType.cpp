// libs/game/runetek5/config/structtype/StructType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "StructType.h"

namespace jag::game {
    // 0x1004e1160, 112 bytes, placed by class name and debug map
    // StructType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    undefined* StructType::DecodeType(PacketT* param_1, uint param_2) {
        undefined8 uVar1;

        if (param_2 == 249) {
            DecodeParams(param_1);
        } else {
            uVar1 = logger::default_logger();
            logger::Logger::Log(uVar1, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/structtype/StructType.cpp",
                                21, "Unrecognised .struct config code: %u in struct %d", param_2, field_32);
        }
        return DataStatus::READY;
    }

    // 0x1004e13d0, 16 bytes, placed by class name and debug map
    // StructType::PostDecode()
    void StructType::PostDecode() {}

} // namespace jag::game
