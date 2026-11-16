// libs/graphics/runetek5/BillboardRaw.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "BillboardRaw.h"

namespace jag::graphics {
    // 0x100023af0: BillboardRaw::IsValid() const has the same machine code as hal::Haptics::GetEnabled() const

    // 0x10097b060
    void BillboardRaw::Decode(PacketT<Array<unsigned char>>& arg1) {
        uint8_t uVar1;
        uint8_t bVar2;
        unsigned short uVar3;
        unsigned int uVar4;
        int iVar5;
        uint8_t* puVar6;

        do {
            uVar1 = arg1.g1();
            iVar5 = 3;
            switch (uVar1) {
            case 0:
                break;
            case 1:
                uVar3 = arg1.g2();
                uVar4 = (unsigned int)uVar3;
                if (uVar3 == 65535) {
                    uVar4 = 4294967295;
                }
                field_4 = uVar4;
                iVar5 = 0;
                break;
            case 2:
                uVar3 = arg1.g2();
                field_8 = uVar3 + 1;
                uVar3 = arg1.g2();
                field_12 = uVar3 + 1;
                iVar5 = 0;
                break;
            case 3:
                arg1.g1s();
                iVar5 = 0;
                break;
            case 4:
                bVar2 = arg1.g1();
                puVar6 = (uint8_t*)((BlendMode*)(unsigned long)bVar2)->GetByID((unsigned int)arg1);
                field_16 = puVar6;
                iVar5 = 0;
                break;
            case 5:
                bVar2 = arg1.g1();
                puVar6 = (uint8_t*)((BlendMode*)(unsigned long)bVar2)->GetByID((unsigned int)arg1);
                field_24 = puVar6;
                iVar5 = 0;
                break;
            case 6:
                field_32 = 1;
                iVar5 = 0;
                break;
            case 7:
                field_33 = 1;
                iVar5 = 0;
                break;
            default:
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek5/BillboardRaw.cpp",
                                53, "BillboardRaw: Unrecognised config type: %u");
            }
        } while (iVar5 == 0);
        if (iVar5 != 1) {
            m_valid = 1;
        }
    }

} // namespace jag::graphics
