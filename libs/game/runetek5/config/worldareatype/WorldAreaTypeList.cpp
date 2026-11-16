// libs/game/runetek5/config/worldareatype/WorldAreaTypeList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "WorldAreaTypeList.h"

namespace jag::game {
    // 0x1004c06f0
    uint8_t* WorldAreaTypeList::GetAreaColoursForMapSquare(
        shared_ptr<MapSquareWorldAreaCompositeInner>& mapSquareWorldAreaCompositeInner, unsigned int arg2,
        unsigned int arg3) {
        TextureAtlasReference* pTVar1;
        shared_ptr<MapSquareWorldAreaCompositeInner>* mapSquareWorldAreaCompositeInner_00;
        uint8_t* puVar4;
        unsigned long uVar5;
        unsigned long uVar6;
        long lVar7;
        long lVar8;
        array<unsigned int, 64ul>* this_00;
        uint32_t* puVar9;
        unsigned int uVar10;
        ReturnValue RVar11;
        uint32_t uVar12;
        unsigned int uVar13;
        ReturnValue local_68;
        ReturnValue local_58;
        TextureAtlasReference* local_48;
        unsigned int local_3c;
        unsigned int local_38;
        uint32_t local_34;

        RVar11._0_4_ = arg3 << 7 | arg2;
        RVar11._4_4_ = 0;
        local_68[0] = RVar11;
        mapSquareWorldAreaCompositeInner_00 = (shared_ptr<MapSquareWorldAreaCompositeInner>*)field_168.Find(local_68);
        mapSquareWorldAreaCompositeInner = *mapSquareWorldAreaCompositeInner_00;
        if (mapSquareWorldAreaCompositeInner.operator_cast_to_bool() == '\0') {
            local_68 = shared_ptr();
            puVar4 = (uint8_t*)field_64->GetFile(local_68, *(Js5Archive::JS5_WORLDMAPDATA), 3, RVar11._0_4_,
                                                 (Priority*)Priority::HIGH, true, false, false);
            if (puVar4 == DataStatus::READY) {
                local_48 = (TextureAtlasReference*)*local_68;
                mapSquareWorldAreaCompositeInner.reset();
                make_shared<MapSquareWorldAreaCompositeInner>(&local_58);
                mapSquareWorldAreaCompositeInner = local_58;
                local_34 = 0;
                local_38 = 0;
                uVar13 = 0;
                do {
                    pTVar1 = local_48;
                    uVar5 = local_48->size();
                    uVar6 = pTVar1->GetTextureAtlas();
                    uVar10 = 64;
                    uVar12 = 0;
                    if (uVar5 < uVar6) {
                        local_34 = local_48->g3();
                        pTVar1 = local_48;
                        lVar7 = local_48->size();
                        lVar8 = pTVar1->GetTextureAtlas();
                        local_38 = local_38 + 1;
                        if (lVar7 == lVar8) {
                            uVar10 = 64;
                            uVar12 = local_34;
                        } else {
                            uVar10 = local_48->g1() + uVar13;
                            uVar12 = local_34;
                        }
                    }
                    local_3c = uVar10;
                    if (uVar13 < uVar10) {
                        uVar5 = (unsigned long)uVar13;
                        do {
                            this_00 = (array<unsigned int, 64ul>*)mapSquareWorldAreaCompositeInner.operator->();
                            puVar9 = (uint32_t*)(*this_00)[uVar5];
                            *puVar9 = uVar12;
                            uVar5 = uVar5 + 1;
                        } while (uVar10 != uVar5);
                    }
                    uVar13 = local_3c;
                } while (local_3c < 64);
                if (local_38 < 2) {
                    lVar7 = mapSquareWorldAreaCompositeInner.operator->();
                    *(uint32_t*)(lVar7 + 256) = local_34;
                }
                local_58[0] = RVar11;
                field_168.Put(mapSquareWorldAreaCompositeInner, 1, local_58);
                puVar4 = DataStatus::READY;
            }
        } else {
            puVar4 = DataStatus::READY;
        }
        return puVar4;
    }

    // 0x1004c0cb0
    void WorldAreaTypeList::OnLoad() {
        int* piVar1;
        uint32_t in_EAX;
        uint32_t uVar4;
        uint32_t in_register_00000004;
        shared_ptr* this_01;

        uint64_t uStack_38 = (((uint64_t)in_register_00000004 << 32) | (uint32_t)in_EAX);
        int iVar3 = GetStreamCountLastMix();
        iVar3 = iVar3 - 1;
        if (-1 < iVar3) {
            do {
                this_01 = (shared_ptr*)List(iVar3, nullptr);
                if (shared_ptr::operator_cast_to_bool(this_01) != '\0') {
                    uVar4 = ((MSIType*)(*this_01).operator->())->GetSpriteID();
                    uStack_38 = (((uint64_t)uVar4 << 32) | (uint32_t)((uint32_t)uStack_38));
                    piVar1 = &field_112[*((unsigned int*)((long)&uStack_38 + 4))];
                    *piVar1 = iVar3;
                }
                iVar3 = iVar3 - 1;
            } while (-1 < iVar3);
        }
    }

    // 0x1004c0df0
    uint8_t* WorldAreaTypeList::GetAreaByCoordinate(shared_ptr<WorldAreaType>& worldAreaType,
                                                    const CoordGrid& coordGrid) {
        unsigned int arg2;
        unsigned int arg3;
        uint8_t* puVar2;
        array<unsigned int, 64ul>* this_00;
        unsigned int* puVar3;
        long lVar4;
        shared_ptr<WorldAreaType>* worldAreaType_00;
        uint8_t** ppuVar5;
        ReturnValue local_68;
        ReturnValue local_58;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        unsigned int local_34;

        if (!(IsPreloaded())) {
            puVar2 = DataStatus::NOTLOADED;
        } else {
            local_48 = shared_ptr();
            arg2 = coordGrid.GetMapSquareX();
            arg3 = coordGrid.GetMapSquareZ();
            puVar2 = (uint8_t*)GetAreaColoursForMapSquare(local_48, arg2, arg3);
            ppuVar5 = &DataStatus::READY;
            if (puVar2 == DataStatus::READY) {
                this_00 = (array<unsigned int, 64ul>*)local_48.operator->();
                puVar3 =
                    (unsigned int*)(*this_00)[(unsigned long)(coordGrid.field_8 >> 3 & 7 | coordGrid.field_4 & 56)];
                local_34 = *puVar3;
                if (local_34 == 0) {
                    puVar2 = DataStatus::MISSING;
                } else {
                    worldAreaType.reset();
                    local_58 = field_112.find(local_34);
                    local_68 = field_112.end();
                    if (!(local_58 != local_68)) {
                        ppuVar5 = &DataStatus::MISSING;
                    } else {
                        lVar4 = local_58.HeapBeginPtr();
                        worldAreaType_00 = (shared_ptr<WorldAreaType>*)List(*(int*)(lVar4 + 4), nullptr);
                        worldAreaType = *worldAreaType_00;
                    }
                    puVar2 = *ppuVar5;
                }
            }
        }
        return puVar2;
    }

} // namespace jag::game

namespace jag {
    // 0x1004c0a90
    shared_ptr_if_not_array<game::MapSquareWorldAreaCompositeInner>::type
    make_shared<game::MapSquareWorldAreaCompositeInner>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        MapSquareWorldAreaCompositeInner* local_28[2];

        auto arg1 = aligned_alloc(280, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<game::MapSquareWorldAreaCompositeInner>::type result;
        } else {
            local_28[0] = placement_new<game::MapSquareWorldAreaCompositeInner>((void*)((long)arg1 + 16));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared_trivial<game::MapSquareWorldAreaCompositeInner>, int,
                              game::MapSquareWorldAreaCompositeInner*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
