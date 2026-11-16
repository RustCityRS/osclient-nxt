// libs/game/runetek5/config/defaults/WearposDefaults.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "WearposDefaults.h"

namespace jag::game {
    // 0x100009ca0: WearposDefaults::GetWearposType() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100049810: WearposDefaults::GetReplaceHeldLeftResetWearPos() const has the same machine code as oldscape::option::Option<oldscape::WindowSavedPosition>::GetDefaultValue() const

    // 0x100060710: WearposDefaults::GetReplaceHeldRightResetWearPos() const has the same machine code as oldscape::widgets::ScrollBarWidget::GetThumbBounds() const

    // 0x100061e30: WearposDefaults::GetReplaceHeldRightWearPos() const has the same machine code as render::RenderStats::GetTriangleCount() const

    // 0x1001be5d0: WearposDefaults::GetReplaceHeldLeftWearPos() const has the same machine code as graphics::SunlightOptions::GetShadowQuality() const

    // 0x10054ed70
    WearposDefaults::WearposDefaults(PacketT<Array<unsigned char>>& arg1) : Array<WearposType>() {
        uint8_t bVar1;
        unsigned int uVar2;
        unsigned int* puVar3;
        unsigned long uVar4;
        long lVar5;
        int* piVar6;
        unsigned long uVar7;
        unsigned int uVar8;

        uint8_t* this_00 = &field_24;
        new (this_00) Array<unsigned int>();
        field_48 = 0;
        field_52 = 0;
        m_replaceHeldLeftWearPos = 4294967295;
        m_replaceHeldRightWearPos = 4294967295;
        uint8_t* this_01 = &field_64;
        new (this_01) Array<unsigned int>();
        uint8_t* this_02 = &field_88;
        new (this_02) Array<unsigned int>();
        do {
            bVar1 = arg1.g1();
            switch (bVar1) {
            case 0:
                return;
            case 1:
                bVar1 = arg1.g1();
                set_max_size((unsigned long)bVar1, 0);
                field_48 = 0;
                field_52 = 0;
                lVar5 = end();
                if (lVar5 != 0) {
                    uVar8 = 1;
                    uVar4 = 0;
                    do {
                        uVar2 = arg1.g1();
                        puVar3 = (unsigned int*)(*this)[uVar4];
                        *puVar3 = uVar2 & 255;
                        piVar6 = (int*)(*this)[uVar4];
                        if (*piVar6 == 0) {
                            field_48 = field_48 + 1;
                        } else {
                            piVar6 = (int*)(*this)[uVar4];
                            if (*piVar6 == 2) {
                                field_52 = field_52 + 1;
                            }
                        }
                        uVar4 = (unsigned long)uVar8;
                        uVar7 = end();
                        uVar8 = uVar8 + 1;
                    } while (uVar4 < uVar7);
                }
                break;
            default:
                (logger::default_logger())
                    ->Log(false, 8,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "defaults/WearposDefaults.cpp",
                          71, "WearposDefaults: Error unrecognised .defaults config code: %u", (unsigned int)bVar1);
                break;
            case 3:
                bVar1 = arg1.g1();
                m_replaceHeldLeftWearPos = (unsigned int)bVar1;
                break;
            case 4:
                bVar1 = arg1.g1();
                m_replaceHeldRightWearPos = (unsigned int)bVar1;
                break;
            case 5:
                bVar1 = arg1.g1();
                this_01->set_max_size((unsigned long)bVar1, 0);
                lVar5 = this_01->end();
                if (lVar5 != 0) {
                    uVar8 = 1;
                    uVar4 = 0;
                    do {
                        uVar2 = arg1.g1();
                        puVar3 = (unsigned int*)(*this_01)[uVar4];
                        *puVar3 = uVar2 & 255;
                        uVar4 = (unsigned long)uVar8;
                        uVar7 = this_01->end();
                        uVar8 = uVar8 + 1;
                    } while (uVar4 < uVar7);
                }
                break;
            case 6:
                bVar1 = arg1.g1();
                this_02->set_max_size((unsigned long)bVar1, 0);
                lVar5 = this_02->end();
                if (lVar5 != 0) {
                    uVar8 = 1;
                    uVar4 = 0;
                    do {
                        uVar2 = arg1.g1();
                        puVar3 = (unsigned int*)(*this_02)[uVar4];
                        *puVar3 = uVar2 & 255;
                        uVar4 = (unsigned long)uVar8;
                        uVar7 = this_02->end();
                        uVar8 = uVar8 + 1;
                    } while (uVar4 < uVar7);
                }
                break;
            case 7:
                uVar4 = end();
                this_00->set_max_size(uVar4, 0);
                lVar5 = end();
                if (lVar5 != 0) {
                    uVar8 = 1;
                    uVar4 = 0;
                    do {
                        uVar2 = arg1.g1();
                        piVar6 = (int*)(*this_00)[uVar4];
                        *piVar6 = (uVar2 & 255) - 1;
                        uVar4 = (unsigned long)uVar8;
                        uVar7 = end();
                        uVar8 = uVar8 + 1;
                    } while (uVar4 < uVar7);
                }
            }
        } while (true);
    }

} // namespace jag::game
