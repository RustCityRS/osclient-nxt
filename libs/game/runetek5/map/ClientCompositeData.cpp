// libs/game/runetek5/map/ClientCompositeData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "ClientCompositeData.h"

namespace jag::game {
    // 0x1004b4820, 848 bytes, placed by class name and debug map
    // ClientCompositeData::DecodeFromRegionData(eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul, true, eastl::allocator> const&, int, int, int, int)
    void ClientCompositeData::DecodeFromRegionData(fixed_vector* param_1, int param_2, int param_3, int param_4,
                                                   int param_5) {
        uint uVar1;
        bool bVar2;
        int iVar3;
        int iVar4;
        undefined4 uVar5;
        ulong uVar6;
        uint* puVar7;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* this_00;
        vector<eastl::vector<int, eastl::allocator>, eastl::allocator>* pvVar8;
        vector<unsigned int, eastl::allocator>* this_01;
        vector<int, eastl::allocator>* this_02;
        uint* puVar9;
        undefined4* puVar10;
        hashtable_iterator_base* extraout_RDX;
        long lVar11;
        int iVar12;
        long lVar13;
        equal_to local_26c8[16];
        undefined8 local_26b8[2];
        undefined8 local_26a8;
        ulong local_26a0;
        long local_2698;
        undefined8 local_2690;
        ulong local_2688;
        ulong local_2680;
        vector<eastl::pair<int, int>, eastl::allocator>* local_2678;
        ClientCompositeData* local_2670;
        uint local_2668;
        uint local_2664;
        fixed_vector* local_2660;
        ulong local_2658;
        uint local_264c;
        fixed_hash_map<unsigned int, unsigned int, 400ul, 401ul, true, eastl::hash<unsigned int>,
                       eastl::equal_to<unsigned int>, false, eastl::allocator>
            local_2648[9744];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_2660 = param_1;
        eastl::fixed_hash_map<unsigned int, unsigned int, 400ul, 401ul, true, eastl::hash<unsigned int>,
                              eastl::equal_to<unsigned int>, false, eastl::allocator>::fixed_hash_map(local_2648,
                                                                                                      (hash*)local_26b8,
                                                                                                      local_26c8);
        local_2688 = (ulong)(uint)(~param_2 + param_4 * 8);
        local_2678 = (vector<eastl::pair<int, int>, eastl::allocator>*)&field_9800;
        uVar6 = (ulong)(uint)(~param_3 + param_5 * 8);
        local_2658 = 0;
        local_26a0 = uVar6;
        local_2670 = this;
        do {
            local_2690 = eastl::fixed_vector<
                eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>, 10ul, true,
                                    eastl::allocator>,
                4ul, true, eastl::allocator>::push_back();
            lVar11 = 0;
            do {
                local_26a8 = eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                                 10ul, true, eastl::allocator>::push_back();
                iVar12 = (int)local_2688 + (int)lVar11;
                local_2680 = (ulong)iVar12;
                lVar13 = 0;
                local_2698 = lVar11;
                do {
                    puVar7 = (uint*)eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>::push_back();
                    if (-1 < iVar12) {
                        this_00 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                          eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)
                            eastl::vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>,
                                          eastl::fixed_vector_allocator<32ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>,
                                        eastl::fixed_vector_allocator<32ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    local_2660,
                                local_2658);
                        iVar3 = eastl::vector<
                            Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                            eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(this_00);
                        if ((iVar12 < iVar3) && (iVar3 = (int)uVar6 + (int)lVar13, -1 < iVar3)) {
                            pvVar8 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)eastl::vector<
                                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>,
                                eastl::fixed_vector_allocator<32ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>,
                                        eastl::fixed_vector_allocator<32ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    local_2660,
                                local_2658);
                            this_01 = (vector<unsigned int, eastl::allocator>*)
                                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                                    pvVar8, local_2680);
                            iVar4 = eastl::vector<unsigned int, eastl::allocator>::size(this_01);
                            if (iVar3 < iVar4) {
                                pvVar8 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)eastl::vector<
                                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>,
                                    eastl::fixed_vector_allocator<32ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                                operator[](
                                    (vector<
                                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>,
                                        eastl::fixed_vector_allocator<32ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                                        local_2660,
                                    local_2658);
                                this_02 = (vector<int, eastl::allocator>*)
                                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                                        pvVar8, local_2680);
                                puVar9 = (uint*)eastl::vector<int, eastl::allocator>::operator[](this_02, (long)iVar3);
                                uVar1 = *puVar9;
                                if (uVar1 != 4294967295) {
                                    *puVar7 = uVar1 >> 24 & 3;
                                    local_2668 = uVar1 >> 14 & 1023;
                                    puVar7[1] = local_2668;
                                    local_2664 = uVar1 >> 3 & 2047;
                                    puVar7[2] = local_2664;
                                    *(byte*)(puVar7 + 3) = (byte)uVar1 >> 1 & 3;
                                    local_2668 = local_2668 >> 3;
                                    local_2664 = local_2664 >> 3;
                                    local_264c = local_2664 << 16 | local_2668;
                                    eastl::hashtable<unsigned int, eastl::pair<unsigned int const, unsigned int>,
                                                     eastl::fixed_hashtable_allocator<258ul, 16ul, 256ul, 4ul, 0ul,
                                                                                      true, eastl::allocator>,
                                                     eastl::use_first<eastl::pair<unsigned int const, unsigned int>>,
                                                     eastl::equal_to<unsigned int>, eastl::hash<unsigned int>,
                                                     eastl::mod_range_hashing, eastl::default_ranged_hash,
                                                     eastl::prime_rehash_policy, false, true,
                                                     true>::find((uint*)local_26b8);
                                    eastl::hashtable<
                                        int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>,
                                        eastl::allocator,
                                        eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                        eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                        eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                        true>::end();
                                    bVar2 = eastl::operator==((eastl*)local_26b8, (hashtable_iterator_base*)local_26c8,
                                                              extraout_RDX);
                                    if (bVar2) {
                                        uVar5 =
                                            eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(local_2678);
                                        puVar10 = (undefined4*)
                                            eastl::hash_map<unsigned int, unsigned int, eastl::hash<unsigned int>,
                                                            eastl::equal_to<unsigned int>,
                                                            eastl::fixed_hashtable_allocator<
                                                                402ul, 16ul, 400ul, 4ul, 0ul, true, eastl::allocator>,
                                                            false>::
                                            operator[](
                                                (hash_map<unsigned int, unsigned int, eastl::hash<unsigned int>,
                                                          eastl::equal_to<unsigned int>,
                                                          eastl::fixed_hashtable_allocator<402ul, 16ul, 400ul, 4ul, 0ul,
                                                                                           true, eastl::allocator>,
                                                          false>*)local_2648,
                                                &local_264c);
                                        *puVar10 = uVar5;
                                        local_26b8[0] =
                                            eastl::make_pair<int, int&>((int*)&local_2668, (int*)&local_2664);
                                        local_2678->push_back(local_26b8);
                                    }
                                    puVar9 = (uint*)
                                        eastl::hash_map<unsigned int, unsigned int, eastl::hash<unsigned int>,
                                                        eastl::equal_to<unsigned int>,
                                                        eastl::fixed_hashtable_allocator<402ul, 16ul, 400ul, 4ul, 0ul,
                                                                                         true, eastl::allocator>,
                                                        false>::
                                        operator[](
                                            (hash_map<unsigned int, unsigned int, eastl::hash<unsigned int>,
                                                      eastl::equal_to<unsigned int>,
                                                      eastl::fixed_hashtable_allocator<402ul, 16ul, 400ul, 4ul, 0ul,
                                                                                       true, eastl::allocator>,
                                                      false>*)local_2648,
                                            &local_264c);
                                    puVar7[4] = *puVar9;
                                    uVar6 = local_26a0;
                                }
                            }
                        }
                    }
                    lVar13 = lVar13 + 1;
                } while (lVar13 != 10);
                lVar11 = local_2698 + 1;
            } while (lVar11 != 10);
            local_2658 = local_2658 + 1;
        } while (local_2658 != 4);
        local_2670[1].field_24 = 1;
        local_2648->~fixed_hash_map();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1004b4d10, 928 bytes, placed by class name and debug map
    // ClientCompositeData::DecodeFromWorldArea(shared_ptr<WorldAreaType> const&, shared_ptr<MapSquareWorldAreaCompositeInner> const&, int, int, bool)
    ulong ClientCompositeData::DecodeFromWorldArea(shared_ptr* param_1, shared_ptr* param_2, int param_3, int param_4,
                                                   bool param_5) {
        int iVar1;
        bool bVar2;
        char cVar3;
        int iVar4;
        undefined4 uVar5;
        ClientCompositeZone* pCVar6;
        array<unsigned int, 64ul>* this_00;
        int* piVar7;
        MSIType* this_01;
        WorldAreaType* this_02;
        undefined4* puVar8;
        hashtable_iterator_base* extraout_RDX;
        long lVar9;
        undefined3 in_register_00000089;
        ulong uVar10;
        uint uVar11;
        equal_to local_1958[16];
        undefined8 local_1948[2];
        undefined8 local_1938;
        long local_1930;
        undefined8 local_1928;
        ulong local_1920;
        ulong local_1918;
        vector<eastl::pair<int, int>, eastl::allocator>* local_1910;
        shared_ptr* local_1908;
        shared_ptr* local_1900;
        long local_18f8;
        ClientCompositeData* local_18f0;
        uint local_18e4;
        uint local_18e0;
        undefined4 local_18dc;
        ClientCompositeZone* local_18d8;
        uint local_18d0;
        int local_18cc;
        fixed_hash_map<unsigned int, unsigned int, 256ul, 257ul, true, eastl::hash<unsigned int>,
                       eastl::equal_to<unsigned int>, false, eastl::allocator>
            local_18c8[6288];
        long local_38;

        local_18dc = CONCAT31(in_register_00000089, param_5);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_1908 = param_2;
        local_1900 = param_1;
        eastl::fixed_hash_map<unsigned int, unsigned int, 256ul, 257ul, true, eastl::hash<unsigned int>,
                              eastl::equal_to<unsigned int>, false, eastl::allocator>::fixed_hash_map(local_18c8,
                                                                                                      (hash*)local_1948,
                                                                                                      local_1958);
        local_1920 = (ulong)(uint)(param_3 << 3);
        local_1910 = (vector<eastl::pair<int, int>, eastl::allocator>*)&field_9800;
        local_1918 = (ulong)(param_4 * 8 - 8) | 7;
        local_18d8 = (ClientCompositeZone*)0;
        local_18cc = 0;
        local_18f0 = this;
        do {
            local_1928 = eastl::fixed_vector<
                eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>, 10ul, true,
                                    eastl::allocator>,
                4ul, true, eastl::allocator>::push_back();
            local_18f8 = -9;
            lVar9 = 0;
            do {
                local_1938 = eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                                 10ul, true, eastl::allocator>::push_back();
                uVar11 = (int)lVar9 - 1;
                uVar10 = 0;
                local_1930 = lVar9;
                do {
                    pCVar6 = (ClientCompositeZone*)
                        eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>::push_back();
                    if (((uVar11 < 8) && (uVar10 != 0)) && (uVar10 < 9)) {
                        if ((char)local_18dc == '\0') {
                        LAB_1004b4ee0:
                            pCVar6->field_0 = local_18cc;
                            pCVar6->field_4 = (int)local_1920 + uVar11;
                            pCVar6->field_8 = (int)local_1918 + (int)uVar10;
                            pCVar6->field_12 = 0;
                        } else {
                            bVar2 = shared_ptr::operator_cast_to_bool(local_1908);
                            if (bVar2) {
                                this_00 = (array<unsigned int, 64ul>*)
                                              shared_ptr<MapSquareWorldAreaCompositeInner>::operator->(
                                                  (shared_ptr<MapSquareWorldAreaCompositeInner>*)local_1908);
                                piVar7 = (int*)std::array<unsigned int, 64ul>::operator[](this_00, local_18f8 + uVar10);
                                iVar1 = *piVar7;
                                this_01 = (MSIType*)shared_ptr<WorldAreaType>::operator->(
                                    (shared_ptr<WorldAreaType>*)local_1900);
                                iVar4 = this_01->GetSpriteID();
                                if (iVar1 == iVar4)
                                    goto LAB_1004b4ee0;
                            }
                            this_02 = (WorldAreaType*)shared_ptr<WorldAreaType>::operator->(
                                (shared_ptr<WorldAreaType>*)local_1900);
                            cVar3 = this_02->FillImpostorForCompositeZone(pCVar6, local_18cc, (int)local_1920 + uVar11,
                                                                          (int)local_1918 + (int)uVar10);
                            if (cVar3 == '\0')
                                goto LAB_1004b4e43;
                        }
                        local_18e4 = (uint)pCVar6->field_4 >> 3;
                        local_18e0 = (uint)pCVar6->field_8 >> 3;
                        local_18d0 = local_18e0 << 16 | local_18e4;
                        local_18d8 = pCVar6;
                        eastl::hashtable<
                            unsigned int, eastl::pair<unsigned int const, unsigned int>,
                            eastl::fixed_hashtable_allocator<258ul, 16ul, 256ul, 4ul, 0ul, true, eastl::allocator>,
                            eastl::use_first<eastl::pair<unsigned int const, unsigned int>>,
                            eastl::equal_to<unsigned int>, eastl::hash<unsigned int>, eastl::mod_range_hashing,
                            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                            true>::find((uint*)local_1948);
                        eastl::hashtable<
                            int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                            eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                            eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                            eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                        bVar2 =
                            eastl::operator==((eastl*)local_1948, (hashtable_iterator_base*)local_1958, extraout_RDX);
                        if (bVar2) {
                            uVar5 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(local_1910);
                            puVar8 = (undefined4*)eastl::hash_map<
                                unsigned int, unsigned int, eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                                eastl::fixed_hashtable_allocator<258ul, 16ul, 256ul, 4ul, 0ul, true, eastl::allocator>,
                                false>::operator[]((hash_map<unsigned int, unsigned int, eastl::hash<unsigned int>,
                                                             eastl::equal_to<unsigned int>,
                                                             eastl::fixed_hashtable_allocator<
                                                                 258ul, 16ul, 256ul, 4ul, 0ul, true, eastl::allocator>,
                                                             false>*)local_18c8,
                                                   &local_18d0);
                            *puVar8 = uVar5;
                            local_1948[0] = eastl::make_pair<int, int&>((int*)&local_18e4, (int*)&local_18e0);
                            local_1910->push_back(local_1948);
                        }
                        puVar8 = (undefined4*)eastl::hash_map<
                            unsigned int, unsigned int, eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                            eastl::fixed_hashtable_allocator<258ul, 16ul, 256ul, 4ul, 0ul, true, eastl::allocator>,
                            false>::operator[]((hash_map<unsigned int, unsigned int, eastl::hash<unsigned int>,
                                                         eastl::equal_to<unsigned int>,
                                                         eastl::fixed_hashtable_allocator<258ul, 16ul, 256ul, 4ul, 0ul,
                                                                                          true, eastl::allocator>,
                                                         false>*)local_18c8,
                                               &local_18d0);
                        uVar5 = *puVar8;
                        local_18d8->field_16 = uVar5;
                        local_18d8 = (ClientCompositeZone*)CONCAT71((uint7)(uint3)((uint)uVar5 >> 8), 1);
                    }
                LAB_1004b4e43:
                    uVar10 = uVar10 + 1;
                } while (uVar10 != 10);
                lVar9 = local_1930 + 1;
                local_18f8 = local_18f8 + 8;
            } while (lVar9 != 10);
            local_18cc = local_18cc + 1;
            if (local_18cc == 4) {
                local_18f0[1].field_24 = 0;
                local_18c8->~fixed_hash_map();
                if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                    /* WARNING: Subroutine does not return */
                    ___stack_chk_fail();
                }
                return (ulong)local_18d8 & 18446744073709551361;
            }
        } while (true);
    }

} // namespace jag::game
