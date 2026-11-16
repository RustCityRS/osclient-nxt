// libs/graphics/runetek5/BillboardRaw.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "BillboardRaw.h"

namespace jag::graphics {
    // 0x100023af0: the linker folded this into hal::Haptics::GetEnabled() const, which has identical code
    BillboardRaw::IsValid() const;

    // 0x10097b060, 336 bytes, placed by class name and debug map
    // BillboardRaw::Decode(PacketT<Array<unsigned char, eastl::allocator> >&)
    void BillboardRaw::Decode(PacketT* param_1) {
        undefined1 uVar1;
        byte bVar2;
        ushort uVar3;
        uint uVar4;
        int iVar5;
        undefined* puVar6;

        do {
            uVar1 = param_1->g1();
            iVar5 = 3;
            switch (uVar1) {
            case 0:
                break;
            case 1:
                uVar3 = param_1->g2();
                uVar4 = (uint)uVar3;
                if (uVar3 == 65535) {
                    uVar4 = 4294967295;
                }
                field_4 = uVar4;
                iVar5 = 0;
                break;
            case 2:
                uVar3 = param_1->g2();
                field_8 = uVar3 + 1;
                uVar3 = param_1->g2();
                field_12 = uVar3 + 1;
                iVar5 = 0;
                break;
            case 3:
                param_1->g1s();
                iVar5 = 0;
                break;
            case 4:
                bVar2 = param_1->g1();
                puVar6 = (undefined*)BlendMode::GetByID((uint)bVar2);
                field_16 = puVar6;
                iVar5 = 0;
                break;
            case 5:
                bVar2 = param_1->g1();
                puVar6 = (undefined*)BlendMode::GetByID((uint)bVar2);
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
                /* WARNING: Subroutine does not return */
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
