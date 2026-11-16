// libs/game/runetek5/config/defaults/MapDefaults.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "MapDefaults.h"

namespace jag::game {
    // 0x100073980: the linker folded this into math::Rect<int>::MinY() const, which has identical code
    uint MapDefaults::GetDefaultWaterType() const;

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    uint MapDefaults::GetDefaultEnvironmentMap() const;

    // 0x1005522b0, 160 bytes, base-object constructor, placed by class name
    // MapDefaults::MapDefaults(PacketT<Array<unsigned char, eastl::allocator> >&)
    void MapDefaults::MapDefaults(PacketT* param_1) {
        byte bVar1;
        ushort uVar2;
        undefined8 in_RAX;
        undefined8 uVar3;
        undefined4 uVar4;

        m_defaultEnvironmentMap = 4294967295;
        m_defaultWaterType = 4294967295;
        while (true) {
            while (true) {
                while (true) {
                    bVar1 = param_1->g1();
                    uVar4 = (undefined4)((ulong)in_RAX >> 32);
                    if (bVar1 != 1)
                        break;
                    uVar2 = param_1->g2();
                    m_defaultEnvironmentMap = (uint)uVar2;
                }
                if (bVar1 != 10)
                    break;
                uVar2 = param_1->g2();
                m_defaultWaterType = (uint)uVar2;
            }
            if (bVar1 == 0)
                break;
            uVar3 = logger::default_logger();
            in_RAX = CONCAT44(uVar4, (uint)bVar1);
            logger::Logger::Log(uVar3, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "config/defaults/MapDefaults.cpp",
                                28, "MapDefaults: Error unrecognised .defaults config code: %u", in_RAX);
        }
    }

    // 0x100552350, 16 bytes, complete-object constructor, placed by class name
    // MapDefaults::MapDefaults(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

} // namespace jag::game
