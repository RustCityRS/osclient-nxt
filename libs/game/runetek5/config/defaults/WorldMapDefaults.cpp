// libs/game/runetek5/config/defaults/WorldMapDefaults.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "WorldMapDefaults.h"

namespace jag::game {
    // 0x100024170: WorldMapDefaults::GetF2POutlineColourRGBA() const has the same machine code as oldscape::option::IScriptOption::GetId() const

    // 0x100073980: WorldMapDefaults::GetF2PLayerColourRGBA() const has the same machine code as math::Rect<int>::MinY() const

    // 0x1000b9960: WorldMapDefaults::GetF2PLayerMapID() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x10054f290
    WorldMapDefaults::WorldMapDefaults(PacketT<Array<unsigned char>>& arg1) {
        uint8_t bVar1;
        unsigned short uVar2;
        uint32_t uVar3;
        uint64_t in_RAX;
        Logger* this_00;
        unsigned int uVar4;
        unsigned int uVar5;

        do {
            bVar1 = arg1.g1();
            uVar3 = (uint32_t)((unsigned long)in_RAX >> 32);
            switch (bVar1) {
            case 0:
                return;
            case 1:
                uVar4 = arg1.g4();
                m_f2PLayerMapID = uVar4;
                break;
            case 2:
                uVar4 = arg1.g4();
                m_f2PLayerColourRGBA = uVar4 << 8 | uVar4 >> 24;
                break;
            case 3:
                uVar4 = arg1.g4();
                m_f2POutlineColourRGBA = uVar4 << 8 | uVar4 >> 24;
                break;
            case 4:
                bVar1 = arg1.g1();
                field_12 = (unsigned int)bVar1;
                break;
            case 5:
                bVar1 = arg1.g1();
                field_16 = (unsigned int)bVar1;
                break;
            case 6:
                uVar3 = arg1.g4();
                field_20 = uVar3;
                break;
            case 7:
                uVar4 = arg1.g4();
                m_dropShadowColourRGBA = uVar4 << 8 | uVar4 >> 24;
                break;
            default:
                if (bVar1 < 100) {
                    this_00 = logger::default_logger();
                    in_RAX = (((uint64_t)uVar3 << 32) | (uint32_t)((unsigned int)bVar1));
                    this_00->Log(false, 8,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                 "config/defaults/WorldMapDefaults.cpp",
                                 62, "WorldMapDefaults: Error unrecognised .defaults config code: %u", in_RAX);
                } else {
                    uVar5 = bVar1 - 100;
                    uVar4 = uVar5 & 7;
                    if ((39 < uVar5) || (2 < uVar4)) {
                        LogAssert(
                            "size >= SMALL && size <= LARGE && zoom >= ZOOM25 && zoom <= ZOOM100",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "config/defaults/WorldMapDefaults.cpp",
                            56, "WorldMapDefaults - Unable to process font ID, invalid size (%d) or zoom (%d) provided",
                            (unsigned long)uVar4, (unsigned long)(uVar5 >> 3));
                    }
                    uVar2 = arg1.g2();
                    *(unsigned int*)(&field_28 + (unsigned long)(uVar5 >> 3) * 4 + (unsigned long)uVar4 * 20) =
                        (unsigned int)uVar2;
                }
            }
        } while (true);
    }

    // 0x10054f430
    uint32_t WorldMapDefaults::GetFontID(int arg1, int arg2) const {
        if (((2 < (unsigned int)arg1) || (arg2 < 0)) || (4 < arg2)) {
            LogAssert("size >= SMALL && size <= LARGE && zoom >= ZOOM25 && zoom <= ZOOM100",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "defaults/WorldMapDefaults.cpp",
                      69, "WorldMapDefaults - Unable to get font ID, invalid size (%d) or zoom (%d) provided",
                      (unsigned long)(unsigned int)arg1, (unsigned long)(unsigned int)arg2);
        }
        return *(uint32_t*)(&field_28 + (long)arg2 * 4 + (long)arg1 * 20);
    }

} // namespace jag::game
