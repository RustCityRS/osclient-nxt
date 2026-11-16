// libs/game/runetek5/config/cursortype/CursorType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "CursorType.h"

namespace jag::game {
    // 0x10055a100, 144 bytes, placed by class name and debug map
    // CursorType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    undefined* CursorType::DecodeType(PacketT* param_1, uint param_2) {
        undefined1 uVar1;
        undefined4 uVar2;
        undefined8 in_RAX;
        undefined8 uVar3;

        uVar2 = (undefined4)((ulong)in_RAX >> 32);
        if (param_2 == 2) {
            uVar1 = param_1->g1();
            field_60 = uVar1;
            uVar1 = param_1->g1();
            field_61 = uVar1;
        } else if (param_2 == 1) {
            uVar2 = param_1->gSmart2or4s();
            field_56 = uVar2;
        } else {
            uVar3 = logger::default_logger();
            logger::Logger::Log(uVar3, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/cursortype/CursorType.cpp",
                                22, "Error unrecognised .cursor config code: %u", CONCAT44(uVar2, param_2));
        }
        return DataStatus::READY;
    }

    // 0x10055a190, 16 bytes, placed by class name and debug map
    // CursorType::PostDecode()
    void CursorType::PostDecode() {}

} // namespace jag::game
