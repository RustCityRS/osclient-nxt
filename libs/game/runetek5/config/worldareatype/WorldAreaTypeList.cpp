// libs/game/runetek5/config/worldareatype/WorldAreaTypeList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "WorldAreaTypeList.h"

namespace jag::game {
    // 0x1004c06f0, 608 bytes, placed by class name and debug map
    // WorldAreaTypeList::GetAreaColoursForMapSquare(shared_ptr<MapSquareWorldAreaCompositeInner>&, unsigned int, unsigned int)
    undefined* WorldAreaTypeList::GetAreaColoursForMapSquare(shared_ptr* param_1, uint param_2, uint param_3) {
        TextureAtlasReference* pTVar1;
        byte bVar3;
        shared_ptr* psVar4;
        undefined* puVar5;
        ulong uVar6;
        ulong uVar7;
        long lVar8;
        long lVar9;
        array<unsigned int, 64ul>* this_00;
        undefined4* puVar10;
        uint uVar11;
        uint uVar12;
        undefined4 uVar13;
        uint uVar14;
        shared_ptr local_68;
        shared_ptr local_58;
        TextureAtlasReference* local_48;
        uint local_3c;
        uint local_38;
        undefined4 local_34;

        uVar12 = param_3 << 7 | param_2;
        local_68._0_8_ = (ulong)uVar12;
        psVar4 =
            (shared_ptr*)LRUHashCache<MapSquareWorldAreaCompositeInner, 32ul, 33ul, false, unsigned long long>::Find(
                &field_168);
        shared_ptr<MapSquareWorldAreaCompositeInner>::operator=((shared_ptr<MapSquareWorldAreaCompositeInner>*)param_1,
                                                                psVar4);
        if (shared_ptr::operator_cast_to_bool(param_1)) {
            puVar5 = DataStatus::READY;
        } else {
            new (&local_68) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(psVar4);
            puVar5 = (undefined*)(field_64, &local_68, Js5Archive::JS5_WORLDMAPDATA, 3, uVar12,
                                  (Priority*)Priority::HIGH, true, false, false)
                         ->GetFile();
            if (puVar5 == DataStatus::READY) {
                local_48 =
                    (TextureAtlasReference*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                        (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_68);
                shared_ptr<MapSquareWorldAreaCompositeInner>::reset();
                make_shared<MapSquareWorldAreaCompositeInner>((jag*)&local_58);
                shared_ptr<MapSquareWorldAreaCompositeInner>::operator=(
                    (shared_ptr<MapSquareWorldAreaCompositeInner>*)param_1, &local_58);
                local_58.~shared_ptr();
                local_34 = 0;
                local_38 = 0;
                uVar14 = 0;
                do {
                    pTVar1 = local_48;
                    uVar6 = local_48->size();
                    uVar7 = pTVar1->GetTextureAtlas();
                    uVar11 = 64;
                    uVar13 = 0;
                    if (uVar6 < uVar7) {
                        local_34 = local_48->g3();
                        pTVar1 = local_48;
                        lVar8 = local_48->size();
                        lVar9 = pTVar1->GetTextureAtlas();
                        local_38 = local_38 + 1;
                        if (lVar8 == lVar9) {
                            uVar11 = 64;
                            uVar13 = local_34;
                        } else {
                            bVar3 = local_48->g1();
                            uVar11 = bVar3 + uVar14;
                            uVar13 = local_34;
                        }
                    }
                    local_3c = uVar11;
                    if (uVar14 < uVar11) {
                        uVar6 = (ulong)uVar14;
                        do {
                            this_00 =
                                (array<unsigned int, 64ul>*)shared_ptr<MapSquareWorldAreaCompositeInner>::operator->(
                                    (shared_ptr<MapSquareWorldAreaCompositeInner>*)param_1);
                            puVar10 = (undefined4*)std::array<unsigned int, 64ul>::operator[](this_00, uVar6);
                            *puVar10 = uVar13;
                            uVar6 = uVar6 + 1;
                        } while (uVar11 != uVar6);
                    }
                    uVar14 = local_3c;
                } while (local_3c < 64);
                if (local_38 < 2) {
                    lVar8 = shared_ptr<MapSquareWorldAreaCompositeInner>::operator->(
                        (shared_ptr<MapSquareWorldAreaCompositeInner>*)param_1);
                    *(undefined4*)(lVar8 + 256) = local_34;
                }
                local_58._0_8_ = (ulong)uVar12;
                (&field_168, param_1, 1, (ulonglong*)&local_58)->Put();
                puVar5 = DataStatus::READY;
            }
            local_68.~shared_ptr();
        }
        return puVar5;
    }

    // 0x1004c0cb0, 144 bytes, placed by class name and debug map
    // WorldAreaTypeList::OnLoad()
    void WorldAreaTypeList::OnLoad() {
        MSIType* this_00;
        int* piVar1;
        undefined4 in_EAX;
        int iVar3;
        undefined4 uVar4;
        undefined4 in_register_00000004;
        shared_ptr* this_01;
        undefined8 uStack_38;

        uStack_38 = CONCAT44(in_register_00000004, in_EAX);
        iVar3 = GetStreamCountLastMix();
        iVar3 = iVar3 + -1;
        if (-1 < iVar3) {
            do {
                this_01 = (shared_ptr*)List(iVar3, 0);
                if (shared_ptr::operator_cast_to_bool(this_01)) {
                    this_00 = (MSIType*)shared_ptr<WorldAreaType>::operator->((shared_ptr<WorldAreaType>*)this_01);
                    uVar4 = this_00->GetSpriteID();
                    uStack_38 = CONCAT44(uVar4, (undefined4)uStack_38);
                    piVar1 = (int*)eastl::hash_map<unsigned int, unsigned int, eastl::hash<unsigned int>,
                                                   eastl::equal_to<unsigned int>, eastl::allocator, false>::
                    operator[]((hash_map<unsigned int, unsigned int, eastl::hash<unsigned int>,
                                         eastl::equal_to<unsigned int>, eastl::allocator, false>*)&field_112,
                               (uint*)((long)&uStack_38 + 4));
                    *piVar1 = iVar3;
                }
                iVar3 = iVar3 + -1;
            } while (-1 < iVar3);
        }
    }

    // 0x1004c0df0, 336 bytes, placed by class name and debug map
    // WorldAreaTypeList::GetAreaByCoordinate(shared_ptr<WorldAreaType>&, CoordGrid const&)
    undefined* WorldAreaTypeList::GetAreaByCoordinate(shared_ptr* param_1, CoordGrid* param_2) {
        uint uVar3;
        uint uVar4;
        undefined* puVar5;
        array<unsigned int, 64ul>* this_00;
        int* piVar6;
        long lVar7;
        shared_ptr* psVar8;
        hashtable_iterator_base* extraout_RDX;
        undefined** ppuVar9;
        hashtable_iterator_base local_68[16];
        eastl local_58[16];
        shared_ptr local_48;

        psVar8 = param_1;
        if ((*(code*)field_0[6])() == '\0') {
            puVar5 = DataStatus::NOTLOADED;
        } else {
            new (&local_48) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(psVar8);
            uVar3 = param_2->GetMapSquareX();
            uVar4 = param_2->GetMapSquareZ();
            puVar5 = (undefined*)GetAreaColoursForMapSquare(this, &local_48, uVar3, uVar4);
            ppuVar9 = &DataStatus::READY;
            if (puVar5 == DataStatus::READY) {
                this_00 = (array<unsigned int, 64ul>*)shared_ptr<MapSquareWorldAreaCompositeInner>::operator->(
                    (shared_ptr<MapSquareWorldAreaCompositeInner>*)&local_48);
                piVar6 = (int*)std::array<unsigned int, 64ul>::operator[](
                    this_00, (ulong)(param_2->field_8 >> 3 & 7 | param_2->field_4 & 56));
                if (*piVar6 == 0) {
                    puVar5 = DataStatus::MISSING;
                } else {
                    shared_ptr<WorldAreaType>::reset();
                    eastl::hashtable<
                        unsigned int, eastl::pair<unsigned int const, unsigned int>,
                        eastl::fixed_hashtable_allocator<258ul, 16ul, 256ul, 4ul, 0ul, true, eastl::allocator>,
                        eastl::use_first<eastl::pair<unsigned int const, unsigned int>>, eastl::equal_to<unsigned int>,
                        eastl::hash<unsigned int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                        eastl::prime_rehash_policy, false, true, true>::find((uint*)local_58);
                    eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>,
                                     eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                    if (eastl::operator!=(local_58, local_68, extraout_RDX)) {
                        lVar7 = local_58->HeapBeginPtr();
                        psVar8 = (shared_ptr*)List(*(int*)(lVar7 + 4), 0);
                        shared_ptr<WorldAreaType>::operator=((shared_ptr<WorldAreaType>*)param_1, psVar8);
                    } else {
                        ppuVar9 = &DataStatus::MISSING;
                    }
                    puVar5 = *ppuVar9;
                }
            }
            local_48.~shared_ptr();
        }
        return puVar5;
    }

} // namespace jag::game

namespace jag {
    // 0x1004c0a90, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::MapSquareWorldAreaCompositeInner>::type make_shared<game::MapSquareWorldAreaCompositeInner>()
    jag* make_shared<game::MapSquareWorldAreaCompositeInner>() {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        int local_2c;
        MapSquareWorldAreaCompositeInner* local_28[2];

        pvVar1 = (void*)aligned_alloc(280, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<game::MapSquareWorldAreaCompositeInner>((void*)((long)pvVar1 + 16));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared_trivial<game::MapSquareWorldAreaCompositeInner>, int,
                                   game::MapSquareWorldAreaCompositeInner*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
