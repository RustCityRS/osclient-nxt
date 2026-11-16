// libs/game/runetek5/map/ClientCompositeData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "ClientCompositeData.h"

namespace jag::game {
    // 0x1004b4820
    void
    ClientCompositeData::DecodeFromRegionData(const eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>& arg1,
                                              int arg2, int arg3, int arg4, int arg5) {
        unsigned int uVar1;
        int iVar3;
        int iVar4;
        uint32_t uVar5;
        unsigned int* puVar7;
        vector<eastl::vector<int>>* pvVar8;
        vector<int>* this_02;
        unsigned int* puVar9;
        uint32_t* puVar10;
        long lVar11;
        int iVar12;
        long lVar13;
        ReturnValue local_26c8;
        ReturnValue local_26b8;
        uint64_t local_26a8;
        long local_2698;
        uint64_t local_2690;
        unsigned long local_2680;
        unsigned int local_2668;
        unsigned int local_2664;
        unsigned int local_264c;
        fixed_hash_map<unsigned int, unsigned int, 400ul, 401ul, true, eastl::hash<unsigned int>,
                       eastl::equal_to<unsigned int>, false>
            local_2648;

        new (&local_2648)
            eastl::fixed_hash_map<unsigned int, unsigned int, 400ul, 401ul, true, eastl::hash<unsigned int>,
                                  eastl::equal_to<unsigned int>, false>(local_26b8, local_26c8);
        unsigned long local_2688 = (unsigned long)(unsigned int)(~arg2 + arg4 * 8);
        vector<eastl::pair<int, int>>* local_2678 = (vector<eastl::pair<int, int>>*)&field_9800;
        unsigned long uVar6 = (unsigned long)(unsigned int)(~arg3 + arg5 * 8);
        unsigned long local_2658 = 0;
        unsigned long local_26a0 = uVar6;
        do {
            local_2690 = eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul>, 10ul>,
                                             4ul>::push_back();
            lVar11 = 0;
            do {
                local_26a8 = eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul>, 10ul>::push_back();
                iVar12 = (int)local_2688 + (int)lVar11;
                local_2680 = (unsigned long)iVar12;
                lVar13 = 0;
                local_2698 = lVar11;
                do {
                    puVar7 = (unsigned int*)eastl::fixed_vector<ClientCompositeZone, 10ul>::push_back();
                    if (-1 < iVar12) {
                        iVar3 = ((vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                                         eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)arg1[local_2658])
                                    ->size();
                        if ((iVar12 < iVar3) && (iVar3 = (int)uVar6 + (int)lVar13, -1 < iVar3)) {
                            pvVar8 = &arg1[local_2658];
                            iVar4 = ((vector<unsigned int>*)(*pvVar8)[local_2680])->size();
                            if (iVar3 < iVar4) {
                                pvVar8 = &arg1[local_2658];
                                this_02 = (vector<int>*)(*pvVar8)[local_2680];
                                puVar9 = (unsigned int*)(*this_02)[(long)iVar3];
                                uVar1 = *puVar9;
                                if (uVar1 != 4294967295) {
                                    *puVar7 = uVar1 >> 24 & 3;
                                    local_2668 = uVar1 >> 14 & 1023;
                                    puVar7[1] = local_2668;
                                    local_2664 = uVar1 >> 3 & 2047;
                                    puVar7[2] = local_2664;
                                    *(uint8_t*)(puVar7 + 3) = (uint8_t)uVar1 >> 1 & 3;
                                    local_2668 = local_2668 >> 3;
                                    local_2664 = local_2664 >> 3;
                                    local_264c = local_2664 << 16 | local_2668;
                                    local_26b8 = local_2648.find(local_264c);
                                    local_26c8 = local_2648.end();
                                    if (local_26b8 == local_26c8 != '\0') {
                                        uVar5 = local_2678->size();
                                        puVar10 = &local_2648[local_264c];
                                        *puVar10 = uVar5;
                                        local_26b8[0] =
                                            (ReturnValue)eastl::make_pair<int, int&>(local_2668, local_2664);
                                        local_2678->push_back(local_26b8);
                                    }
                                    puVar9 = &local_2648[local_264c];
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
        this[1].field_24 = 1;
    }

    // 0x1004b4d10
    unsigned long ClientCompositeData::DecodeFromWorldArea(
        const shared_ptr<WorldAreaType>& worldAreaType,
        const shared_ptr<MapSquareWorldAreaCompositeInner>& mapSquareWorldAreaCompositeInner, int arg3, int arg4,
        bool arg5) {
        int iVar1;
        bool cVar2;
        int iVar3;
        uint32_t uVar4;
        ClientCompositeZone* clientCompositeZone;
        array<unsigned int, 64ul>* this_00;
        int* piVar5;
        uint32_t* puVar6;
        long lVar7;
        uint32_t in_register_00000089;
        unsigned long uVar8;
        unsigned int uVar9;
        ReturnValue local_1958;
        ReturnValue local_1948;
        uint64_t local_1938;
        long local_1930;
        uint64_t local_1928;
        long local_18f8;
        unsigned int local_18e4;
        unsigned int local_18e0;
        unsigned int local_18d0;
        fixed_hash_map<unsigned int, unsigned int, 256ul, 257ul, true, eastl::hash<unsigned int>,
                       eastl::equal_to<unsigned int>, false>
            local_18c8;

        uint32_t local_18dc = (((uint32_t)in_register_00000089 << 8) | (uint8_t)arg5);
        new (&local_18c8)
            eastl::fixed_hash_map<unsigned int, unsigned int, 256ul, 257ul, true, eastl::hash<unsigned int>,
                                  eastl::equal_to<unsigned int>, false>(local_1948, local_1958);
        unsigned long local_1920 = (unsigned long)(unsigned int)(arg3 << 3);
        vector<eastl::pair<int, int>>* local_1910 = (vector<eastl::pair<int, int>>*)&field_9800;
        unsigned long local_1918 = (unsigned long)(arg4 * 8 - 8) | 7;
        ClientCompositeZone* local_18d8 = nullptr;
        int local_18cc = 0;
        do {
            local_1928 = eastl::fixed_vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul>, 10ul>,
                                             4ul>::push_back();
            local_18f8 = -9;
            lVar7 = 0;
            do {
                local_1938 = eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul>, 10ul>::push_back();
                uVar9 = (int)lVar7 - 1;
                uVar8 = 0;
                local_1930 = lVar7;
                do {
                    clientCompositeZone =
                        (ClientCompositeZone*)eastl::fixed_vector<ClientCompositeZone, 10ul>::push_back();
                    if (((uVar9 < 8) && (uVar8 != 0)) && (uVar8 < 9)) {
                        if ((char)local_18dc == '\0') {
                        LAB_1004b4ee0:
                            clientCompositeZone->field_0 = local_18cc;
                            clientCompositeZone->field_4 = (int)local_1920 + uVar9;
                            clientCompositeZone->field_8 = (int)local_1918 + (int)uVar8;
                            clientCompositeZone->field_12 = 0;
                        } else {
                            cVar2 = mapSquareWorldAreaCompositeInner.operator_cast_to_bool();
                            if (cVar2) {
                                this_00 = (array<unsigned int,
                                                 64ul>*)(*((shared_ptr<MapSquareWorldAreaCompositeInner>*)(shared_ptr*)
                                                               mapSquareWorldAreaCompositeInner))
                                              .operator->();
                                piVar5 = (int*)(*this_00)[local_18f8 + uVar8];
                                iVar1 = *piVar5;
                                iVar3 = ((MSIType*)worldAreaType.operator->())->GetSpriteID();
                                if (iVar1 == iVar3)
                                    goto LAB_1004b4ee0;
                            }
                            cVar2 = ((WorldAreaType*)worldAreaType.operator->())
                                        ->FillImpostorForCompositeZone(*clientCompositeZone, local_18cc,
                                                                       (int)local_1920 + uVar9,
                                                                       (int)local_1918 + (int)uVar8);
                            if (!cVar2)
                                goto LAB_1004b4e43;
                        }
                        local_18e4 = (unsigned int)clientCompositeZone->field_4 >> 3;
                        local_18e0 = (unsigned int)clientCompositeZone->field_8 >> 3;
                        local_18d0 = local_18e0 << 16 | local_18e4;
                        local_18d8 = clientCompositeZone;
                        local_1948 = local_18c8.find(local_18d0);
                        local_1958 = local_18c8.end();
                        cVar2 = local_1948 == local_1958;
                        if (cVar2) {
                            uVar4 = local_1910->size();
                            puVar6 = &local_18c8[local_18d0];
                            *puVar6 = uVar4;
                            local_1948[0] = (ReturnValue)eastl::make_pair<int, int&>(local_18e4, local_18e0);
                            local_1910->push_back(local_1948);
                        }
                        puVar6 = &local_18c8[local_18d0];
                        uVar4 = *puVar6;
                        local_18d8->field_16 = uVar4;
                        local_18d8 =
                            (ClientCompositeZone*)(((uint64_t)((uint64_t)(uint32_t)((unsigned int)uVar4 >> 8)) << 8) |
                                                   (uint8_t)1);
                    }
                LAB_1004b4e43:
                    uVar8 = uVar8 + 1;
                } while (uVar8 != 10);
                lVar7 = local_1930 + 1;
                local_18f8 = local_18f8 + 8;
            } while (lVar7 != 10);
            local_18cc = local_18cc + 1;
            if (local_18cc == 4) {
                this[1].field_24 = 0;
                return (unsigned long)local_18d8 & 18446744073709551361;
            }
        } while (true);
    }

} // namespace jag::game
