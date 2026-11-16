// libs/game/runetek5/config/defaults/MapDefaults.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "MapDefaults.h"

namespace jag::game {
    // 0x100073980: MapDefaults::GetDefaultWaterType() const has the same machine code as math::Rect<int>::MinY() const

    // 0x1000b9960: MapDefaults::GetDefaultEnvironmentMap() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x1005522b0
    MapDefaults::MapDefaults(PacketT<Array<unsigned char>>& arg1)
        : m_defaultEnvironmentMap(4294967295), m_defaultWaterType(4294967295) {
        uint8_t bVar1;
        unsigned short uVar2;
        uint64_t in_RAX;
        Logger* this_00;
        uint32_t uVar3;

        while (true) {
            while (true) {
                while (true) {
                    bVar1 = arg1.g1();
                    uVar3 = (uint32_t)((unsigned long)in_RAX >> 32);
                    if (bVar1 != 1)
                        break;
                    uVar2 = arg1.g2();
                    m_defaultEnvironmentMap = (unsigned int)uVar2;
                }
                if (bVar1 != 10)
                    break;
                uVar2 = arg1.g2();
                m_defaultWaterType = (unsigned int)uVar2;
            }
            if (bVar1 == 0)
                break;
            this_00 = logger::default_logger();
            in_RAX = (((uint64_t)uVar3 << 32) | (uint32_t)((unsigned int)bVar1));
            this_00->Log(false, 8,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                         "defaults/MapDefaults.cpp",
                         28, "MapDefaults: Error unrecognised .defaults config code: %u", in_RAX);
        }
    }

} // namespace jag::game
