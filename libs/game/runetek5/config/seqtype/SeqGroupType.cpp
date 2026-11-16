// libs/game/runetek5/config/seqtype/SeqGroupType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "SeqGroupType.h"

namespace jag::game {
    // 0x100049810: SeqGroupType::GetTransformMask() const has the same machine code as oldscape::option::Option<oldscape::WindowSavedPosition>::GetDefaultValue() const

    // 0x100060710: SeqGroupType::GetJointWeights() const has the same machine code as oldscape::widgets::ScrollBarWidget::GetThumbBounds() const

    // 0x1004dd7c0
    uint8_t* SeqGroupType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        uint8_t* puVar1;
        uint8_t bVar2;
        unsigned short uVar3;
        LODLevel* lodLevel1;
        LODLevel* lodLevel2;
        uint8_t* puVar4;
        float* pfVar5;
        float* arg2_00;
        unsigned int uVar6;
        unsigned int uVar7;
        float local_48;
        float local_44;

        if (arg2 == 4) {
            bVar2 = arg1.g1();
            local_48 = (float)bVar2 * 0.003921569f;
            puVar1 = &field_88;
            puVar1->set_max_size(256, 0);
            pfVar5 = (float*)puVar1->data();
            arg2_00 = (float*)puVar1->end();
            eastl::fill<float*, float>(pfVar5, arg2_00, local_48);
            uVar3 = arg1.gSmart1or2();
            uVar7 = (unsigned int)uVar3;
            if (uVar3 != 0) {
                uVar6 = uVar7;
                do {
                    uVar3 = arg1.gSmart1or2();
                    bVar2 = arg1.g1();
                    local_44 = (float)bVar2 * 0.003921569f;
                    pfVar5 = (float*)(*puVar1)[(unsigned long)uVar3];
                    *pfVar5 = local_44;
                    uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
            }
        } else {
            if (arg2 == 3) {
                arg1.g1();
                uVar3 = arg1.gSmart1or2();
                uVar7 = (unsigned int)uVar3;
                if (uVar3 != 0) {
                    do {
                        arg1.gSmart1or2();
                        arg1.g1();
                        uVar7 = uVar7 - 1;
                    } while (uVar7 != 0);
                }
                m_walkMerge = uVar3 != 0;
                return DataStatus::READY;
            }
            if (arg2 != 2) {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "seqtype/SeqGroupType.cpp",
                          61, "Unrecognised .seqgroup config code: %u", arg2);
                return DataStatus::READY;
            }
            puVar1 = &field_64;
            puVar1->set_max_size(800, 0);
            lodLevel1 = (LODLevel*)puVar1->data();
            lodLevel2 = (LODLevel*)puVar1->end();
            eastl::fill<bool*, bool>(lodLevel1, lodLevel2, 0);
            uVar3 = arg1.gSmart1or2();
            uVar7 = (unsigned int)uVar3;
            if (uVar3 != 0) {
                uVar6 = uVar7;
                do {
                    uVar3 = arg1.gSmart1or2();
                    puVar4 = (uint8_t*)(*puVar1)[(unsigned long)uVar3];
                    *puVar4 = 1;
                    uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
            }
        }
        m_walkMerge = uVar7 != 0;
        return DataStatus::READY;
    }

    // 0x1004dd9d0
    void SeqGroupType::PostDecode() {}

} // namespace jag::game
