// libs/game/runetek5/config/invtype/InvType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "InvType.h"

namespace jag::game {
    // 0x1001be5d0: InvType::GetSize() const has the same machine code as graphics::SunlightOptions::GetShadowQuality() const

    // 0x100524fe0
    uint8_t* InvType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        uint8_t bVar1;
        unsigned short uVar2;
        unsigned int* puVar3;
        int iVar4;
        unsigned int local_34;

        if (arg2 == 4) {
            bVar1 = arg1.g1();
            field_60 = (unsigned int)bVar1;
            if (bVar1 != 0) {
                iVar4 = 0;
                do {
                    uVar2 = arg1.g2();
                    local_34 = (unsigned int)uVar2;
                    uVar2 = arg1.g2();
                    puVar3 = &field_64[local_34];
                    *puVar3 = (unsigned int)uVar2;
                    iVar4 = iVar4 + 1;
                } while (iVar4 < (int)field_60);
            }
        } else if (arg2 == 2) {
            uVar2 = arg1.g2();
            m_size = (unsigned int)uVar2;
        } else {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "invtype/InvType.cpp",
                      27, "Error unrecognised .inv config code: %u", arg2);
        }
        return DataStatus::READY;
    }

    // 0x1005250b0
    void InvType::PostDecode() {}

} // namespace jag::game
