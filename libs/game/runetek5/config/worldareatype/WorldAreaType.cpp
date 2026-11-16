// libs/game/runetek5/config/worldareatype/WorldAreaType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "WorldAreaType.h"

namespace jag::game {
    // 0x100009e70: WorldAreaType::PostDecode() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1001be5d0: WorldAreaType::GetColour() const has the same machine code as graphics::SunlightOptions::GetShadowQuality() const

    // 0x1004c7af0
    uint8_t* WorldAreaType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        uint32_t uVar1;
        int iVar2;
        uint32_t* puVar3;
        uint64_t* puVar4;
        unsigned int* arg2_00;
        CoordGrid* this_01;
        CoordGrid* arg1_00;
        CoordGrid local_58;
        CoordGrid local_48;
        CoordGrid local_38;

        if (arg2 == 4) {
            iVar2 = arg1.g4();
            local_58 = game::CoordGrid(iVar2);
            uVar1 = arg1.g4();
            puVar3 = &field_64[local_58];
            *puVar3 = uVar1;
            local_38.field_0 = local_58.GetMapSquareX();
            local_38._12_4_ = local_58.GetMapSquareZ();
            this_01 = &local_48;
            arg1_00 = &local_38;
            arg2_00 = (unsigned int*)&local_38.field_12;
        } else {
            if (arg2 != 3) {
                if (arg2 == 2) {
                    uVar1 = arg1.g3();
                    m_colour = uVar1;
                    return DataStatus::READY;
                }
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "worldareatype/WorldAreaType.cpp",
                          34, "Error unrecognised .worldarea config code: %u", arg2);
                return DataStatus::READY;
            }
            iVar2 = arg1.g4();
            local_58 = game::CoordGrid(iVar2);
            iVar2 = arg1.g4();
            local_48 = game::CoordGrid(iVar2);
            puVar4 = &field_112[local_58];
            *puVar4 = local_48._0_8_;
            *(unsigned int*)(puVar4 + 1) = local_48.field_8;
            local_38._12_4_ = local_58.GetMapSquareX();
            local_38.field_8 = local_58.GetMapSquareZ();
            this_01 = &local_38;
            arg1_00 = (CoordGrid*)&local_38.field_12;
            arg2_00 = &local_38.field_8;
        }
        this_01->pair<int, int&, void>(*arg1_00, *arg2_00);
        field_160.insert<eastl::pair<int, int>, void>(*this_01);
        return DataStatus::READY;
    }

    // 0x1004c7e00
    void WorldAreaType::HasImpostorsForMapSquare(int arg1, int arg2) {
        pair<int, int> local_38;

        local_38.pair<int, int&, void>(arg1, arg2);
        uint64_t local_30 = field_160.find(local_38);
        uint64_t local_28 = field_160.end();
        local_30 != local_28;
    }

    // 0x1004c7f30
    unsigned long WorldAreaType::FillImpostorForCompositeZone(ClientCompositeZone& clientCompositeZone, int arg2,
                                                              int arg3, int arg4) {
        unsigned int uVar4;
        long lVar5;
        CoordGrid* this_00;
        unsigned long uVar6;
        uint8_t* this_01;
        ReturnValue local_60;

        int iVar3 = arg3 + 7;
        if (-1 < arg3) {
            iVar3 = arg3;
        }
        int iVar7 = arg4 + 7;
        if (-1 < arg4) {
            iVar7 = arg4;
        }
        WorldAreaType* local_58 = this;
        local_40._12_4_ = arg2;
        CoordGrid local_40(0, (iVar3 >> 3) << 6, (iVar7 >> 3) << 6);
        auto local_50 = field_112.find(local_40);
        local_40._0_8_ = field_112.end();
        bool cVar2 = local_50 != local_40;
        ClientCompositeZone* pCVar1 = clientCompositeZone;
        if (!cVar2) {
            this_01 = &local_58->field_64;
            local_40 = oldscape::rs2lib::worldmap::LocationData(local_40._12_4_, arg3 << 3, arg4 << 3);
            local_60 = this_01->find(local_40);
            local_40._0_8_ = this_01->cend();
            uVar4 = local_60 != local_40;
            uVar6 = (unsigned long)uVar4;
            if ((char)uVar4 != '\0') {
                lVar5 = *local_60;
                uVar4 = *(unsigned int*)(lVar5 + 12);
                pCVar1->field_0 = uVar4 >> 24 & 3;
                pCVar1->field_4 = uVar4 >> 14 & 1023;
                pCVar1->field_8 = uVar4 >> 3 & 2047;
                pCVar1->field_12 = (uint8_t)uVar4 >> 1 & 3;
            }
        } else {
            lVar5 = *local_50;
            pCVar1 = clientCompositeZone;
            this_00 = (CoordGrid*)(lVar5 + 12);
            clientCompositeZone.field_0 = local_40._12_4_;
            iVar3 = this_00->GetMapSquareX();
            pCVar1->field_4 = arg3 % 8 + iVar3 * 8;
            iVar3 = this_00->GetMapSquareZ();
            pCVar1->field_8 = arg4 % 8 + iVar3 * 8;
            pCVar1->field_12 = 0;
            uVar6 = (((uint64_t)((int64_t)((unsigned long)this_00 >> 8)) << 8) | (uint8_t)1);
        }
        return uVar6 & 4294967295;
    }

} // namespace jag::game
