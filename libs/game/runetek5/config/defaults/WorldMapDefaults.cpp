// libs/game/runetek5/config/defaults/WorldMapDefaults.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "WorldMapDefaults.h"

namespace jag::game {
    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    WorldMapDefaults::GetF2POutlineColourRGBA() const;

    // 0x100073980: the linker folded this into math::Rect<int>::MinY() const, which has identical code
    WorldMapDefaults::GetF2PLayerColourRGBA() const;

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    WorldMapDefaults::GetF2PLayerMapID() const;

    // 0x10054f290, 400 bytes, base-object constructor, placed by class name and debug map
    // WorldMapDefaults::WorldMapDefaults(PacketT<Array<unsigned char, eastl::allocator> >&)
    void WorldMapDefaults::WorldMapDefaults(PacketT* param_1) {
        byte bVar1;
        ushort uVar2;
        undefined4 uVar3;
        undefined8 in_RAX;
        undefined8 uVar4;
        uint uVar5;
        uint uVar6;

        do {
            bVar1 = param_1->g1();
            uVar3 = (undefined4)((ulong)in_RAX >> 32);
            switch (bVar1) {
            case 0:
                return;
            case 1:
                uVar3 = param_1->g4();
                field_0 = uVar3;
                break;
            case 2:
                uVar5 = param_1->g4();
                field_4 = uVar5 << 8 | uVar5 >> 24;
                break;
            case 3:
                uVar5 = param_1->g4();
                field_8 = uVar5 << 8 | uVar5 >> 24;
                break;
            case 4:
                bVar1 = param_1->g1();
                field_12 = (uint)bVar1;
                break;
            case 5:
                bVar1 = param_1->g1();
                field_16 = (uint)bVar1;
                break;
            case 6:
                uVar3 = param_1->g4();
                field_20 = uVar3;
                break;
            case 7:
                uVar5 = param_1->g4();
                field_24 = uVar5 << 8 | uVar5 >> 24;
                break;
            default:
                if (bVar1 < 100) {
                    uVar4 = logger::default_logger();
                    in_RAX = CONCAT44(uVar3, (uint)bVar1);
                    logger::Logger::Log(uVar4, 0, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/config/defaults/WorldMapDefaults.cpp",
                                        62, "WorldMapDefaults: Error unrecognised .defaults config code: %u", in_RAX);
                } else {
                    uVar6 = bVar1 - 100;
                    uVar5 = uVar6 & 7;
                    if ((39 < uVar6) || (2 < uVar5)) {
                        /* WARNING: Subroutine does not return */
                        LogAssert(
                            "size >= SMALL && size <= LARGE && zoom >= ZOOM25 && zoom <= ZOOM100",
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "config/defaults/WorldMapDefaults.cpp",
                            56, "WorldMapDefaults - Unable to process font ID, invalid size (%d) or zoom (%d) provided",
                            (ulong)uVar5, (ulong)(uVar6 >> 3));
                    }
                    uVar2 = param_1->g2();
                    *(uint*)(&field_28 + (ulong)(uVar6 >> 3) * 4 + (ulong)uVar5 * 20) = (uint)uVar2;
                }
            }
        } while (true);
    }

    // 0x10054f420, 16 bytes, complete-object constructor, placed by class name and debug map
    // WorldMapDefaults::WorldMapDefaults(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x10054f430, 112 bytes, placed by class name and debug map
    // WorldMapDefaults::GetFontID(int, int) const
    undefined4 WorldMapDefaults::GetFontID(int param_1, int param_2) {
        if (((2 < (uint)param_1) || (param_2 < 0)) || (4 < param_2)) {
            /* WARNING: Subroutine does not return */
            LogAssert("size >= SMALL && size <= LARGE && zoom >= ZOOM25 && zoom <= ZOOM100",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "defaults/WorldMapDefaults.cpp",
                      69, "WorldMapDefaults - Unable to get font ID, invalid size (%d) or zoom (%d) provided",
                      (ulong)(uint)param_1, (ulong)(uint)param_2);
        }
        return *(undefined4*)(&field_28 + (long)param_2 * 4 + (long)param_1 * 20);
    }

} // namespace jag::game
