// libs/game/shared/movement/CoordGrid.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.shared

#include "CoordGrid.h"

namespace jag::game {
    // 0x100102d30: the linker folded this into math::Vector3T<int>::Vector3T(int, int, int), which has identical code
    CoordGrid::CoordGrid(int, unsigned int, unsigned int);

    // 0x100124fd0: the linker folded this into oldscape::rs2lib::CoordGrid::operator!=(oldscape::rs2lib::CoordGrid const&) const, which has identical code
    CoordGrid::operator!=(CoordGrid const&) const;

    // 0x100124fe0: the linker folded this into oldscape::rs2lib::CoordGrid::operator==(oldscape::rs2lib::CoordGrid const&) const, which has identical code
    CoordGrid::operator==(CoordGrid const&) const;

    // 0x100132e20: the linker folded this into math::Vector3T<int>::Vector3T(int, int, int), which has identical code
    CoordGrid::CoordGrid(int, unsigned int, unsigned int);

    // 0x100214c40: the linker folded this into oldscape::rs2lib::CoordGrid::GetMapSquareTileX() const, which has identical code
    CoordGrid::GetLocalX() const;

    // 0x100214c50: the linker folded this into oldscape::rs2lib::CoordGrid::GetMapSquareTileZ() const, which has identical code
    CoordGrid::GetLocalZ() const;

    // 0x1006e6260, 544 bytes, placed by class name and debug map
    // CoordGrid::FromString(StringView)
    ulong CoordGrid::FromString(StringView param_1) {
        uint uVar1;
        uint uVar2;
        uint uVar3;
        bool bVar4;
        int iVar5;
        long lVar6;
        char* pcVar7;
        int* piVar8;
        uint* puVar9;
        ulong uVar10;
        bool bVar11;
        undefined8 local_5d8;
        undefined8 uStack_5d0;
        undefined4 local_5c8;
        CoordGrid local_5c0;
        CoordGrid* local_5b0;
        int local_5a4;
        fixed_vector<eastl::fixed_string<char, 128, true, eastl::allocator>, 8ul, true, eastl::allocator>
            local_5a0[1384];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_vector<eastl::fixed_string<char, 128, true, eastl::allocator>, 8ul, true,
                            eastl::allocator>::fixed_vector(local_5a0);
        tokenize<
            eastl::fixed_vector<eastl::fixed_string<char, 128, true, eastl::allocator>, 8ul, true, eastl::allocator>,
            StringView>((fixed_vector*)local_5a0, (StringView*)param_1.field_0, ", ", -1);
        lVar6 = local_5a0->size();
        if (lVar6 != 3) {
            lVar6 = local_5a0->size();
            if (lVar6 != 5) {
                /* WARNING: Subroutine does not return */
                LogAssert("tokens.size() == 3 || tokens.size() == 5",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/movement/"
                          "CoordGrid.cpp",
                          70, (char*)0);
            }
        }
        local_5c8 = 32;
        local_5d8 = 0;
        uStack_5d0 = 137438953472;
        local_5b0 = this;
        iVar5 = local_5a0->size();
        bVar11 = 0 < iVar5;
        if (0 < iVar5) {
            uVar10 = 0;
            do {
                eastl::vector<eastl::fixed_string<char, 128, true, eastl::allocator>,
                              eastl::fixed_vector_allocator<168ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<eastl::fixed_string<char, 128, true, eastl::allocator>,
                            eastl::fixed_vector_allocator<168ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)local_5a0,
                    uVar10);
                pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                piVar8 = (int*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)&local_5d8, uVar10);
                bVar4 = FromText<int>(pcVar7, piVar8);
                if (!bVar4)
                    goto LAB_1006e6419;
                uVar10 = uVar10 + 1;
                iVar5 = local_5a0->size();
                bVar11 = (long)uVar10 < (long)iVar5;
            } while ((long)uVar10 < (long)iVar5);
        }
        piVar8 = (int*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)&local_5d8, 0);
        local_5a4 = *piVar8;
        puVar9 = (uint*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)&local_5d8, 1);
        uVar1 = *puVar9;
        puVar9 = (uint*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)&local_5d8, 2);
        uVar2 = *puVar9;
        puVar9 = (uint*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)&local_5d8, 3);
        uVar3 = *puVar9;
        puVar9 = (uint*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)&local_5d8, 4);
        CoordGrid(&local_5c0, local_5a4, uVar1, uVar2, uVar3, *puVar9);
        local_5b0->field_8 = local_5c0.field_8;
        local_5b0->field_0 = local_5c0.field_0;
        local_5b0->field_4 = local_5c0.field_4;
    LAB_1006e6419:
        eastl::fixed_vector<eastl::fixed_string<char, 128, true, eastl::allocator>, 8ul, true,
                            eastl::allocator>::~fixed_vector(local_5a0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return CONCAT71((int7)((ulong)local_5a0 >> 8), ~bVar11) & 4294967041;
    }

    // 0x1006e66d0, 80 bytes, base-object constructor, placed by class name and debug map
    // CoordGrid::CoordGrid(int)
    void CoordGrid::CoordGrid(int param_1) {
        field_0 = 4294967295;
        field_4 = 0;
        field_8 = 0;
        if (param_1 == -1) {
            field_0 = 4294967295;
            return;
        }
        field_0 = (uint)param_1 >> 28 & 3;
        field_4 = (uint)param_1 >> 14 & 16383;
        field_8 = param_1 & 16383;
    }

    // 0x1006e6720, 16 bytes, complete-object constructor, placed by class name and debug map
    // CoordGrid::CoordGrid(int): jumps straight to the base-object constructor

    // 0x1006e6730, 80 bytes, placed by class name and debug map
    // CoordGrid::ToFine(bool) const
    undefined8 CoordGrid::ToFine(bool param_1) {
        undefined8 uVar1;
        uint uVar2;
        undefined7 in_register_00000031;
        undefined1 local_18[16];

        uVar2 = (int)CONCAT71(in_register_00000031, param_1) << 6;
        new (local_18) CoordFine(field_0, (float)(field_4 << 7 | uVar2), 0.0, (float)(field_8 << 7 | uVar2));
        uVar1._0_4_ = local_18._0_4_;
        uVar1._4_4_ = (float)local_18._4_4_;
        return uVar1;
    }

    // 0x1006e6780, 48 bytes, placed by class name and debug map
    // CoordGrid::operator<(CoordGrid const&) const
    /* CoordGrid::TEMPNAMEPLACEHOLDERVALUE(CoordGrid const&) const */

    bool CoordGrid::operator<(CoordGrid* param_1) {
        bool bVar1;

        bVar1 = true;
        if ((int)param_1->field_0 <= (int)field_0) {
            if ((int)field_0 <= (int)param_1->field_0) {
                if (field_4 < param_1->field_4) {
                    return true;
                }
                if (field_4 <= param_1->field_4) {
                    return field_8 < param_1->field_8;
                }
            }
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x1006e67b0, 32 bytes, placed by class name and debug map
    // CoordGrid::ToBitPacked() const
    uint CoordGrid::ToBitPacked() {
        return field_4 << 14 | field_0 << 28 | field_8;
    }

} // namespace jag::game

namespace jag {
    // 0x1006e6490, 320 bytes, inline, placed by debug map only (low confidence)
    // int tokenize<eastl::fixed_vector<eastl::fixed_string<char, 16, true, eastl::allocator>, 4ul, true, eastl::allocator>, StringView>(eastl::fixed_vector<eastl::fixed_string<char, 16, true, eastl::allocator>, 4ul, true, eastl::allocator>&, StringView const&, char const*, int)
    int jag::tokenize<
        eastl::fixed_vector<eastl::fixed_string<char, 16, true, eastl::allocator>, 4ul, true, eastl::allocator>,
        StringView>(fixed_vector* param_1, StringView* param_2, char* param_3, int param_4) {
        bool bVar1;
        int iVar2;
        size_t sVar3;
        char* pcVar4;
        char* pcVar5;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 16ul, 1ul, 0ul, true, eastl::allocator>>* pbVar6;
        char* pcVar7;
        char* pcVar8;

        if (param_4 == -1) {
            sVar3 = _strlen(param_3);
            param_4 = (int)sVar3;
        }
        param_1->clear();
        param_1->reserve(4);
        pcVar4 = (char*)param_2->end();
        pcVar5 = (char*)param_2->end();
        pcVar8 = pcVar4;
        if (pcVar4 != pcVar5) {
            pcVar7 = pcVar4;
            do {
                pcVar4 = pcVar8;
                bVar1 = internal::find_token<char, char const*>(pcVar4, param_3, param_3 + param_4);
                if (bVar1) {
                    if (pcVar7 != pcVar4) {
                        pbVar6 =
                            (basic_string<char,
                                          eastl::fixed_vector_allocator<1ul, 16ul, 1ul, 0ul, true, eastl::allocator>>*)
                                eastl::fixed_vector<eastl::fixed_string<char, 16, true, eastl::allocator>, 4ul, true,
                                                    eastl::allocator>::push_back();
                        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 16ul, 1ul, 0ul, true,
                                                                                eastl::allocator>>::assign(pbVar6,
                                                                                                           pcVar7,
                                                                                                           pcVar4);
                    }
                    if (pcVar4 == pcVar5) {
                    LAB_1006e6580:
                        pcVar8 = pcVar4;
                    } else {
                        do {
                            bVar1 = internal::find_token<char, char const*>(pcVar4, param_3, param_3 + param_4);
                            if (!bVar1)
                                goto LAB_1006e6580;
                            pcVar4 = pcVar4 + 1;
                            pcVar8 = pcVar4;
                        } while (pcVar4 != pcVar5);
                    }
                } else {
                    pcVar8 = pcVar4 + 1;
                    pcVar4 = pcVar7;
                }
                pcVar7 = pcVar4;
            } while (pcVar8 != pcVar5);
        }
        if (pcVar4 != pcVar8) {
            pbVar6 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 16ul, 1ul, 0ul, true, eastl::allocator>>*)
                eastl::fixed_vector<eastl::fixed_string<char, 16, true, eastl::allocator>, 4ul, true,
                                    eastl::allocator>::push_back();
            eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 16ul, 1ul, 0ul, true, eastl::allocator>>::assign(pbVar6,
                                                                                                          pcVar4,
                                                                                                          pcVar8);
        }
        iVar2 = param_1->size();
        return iVar2;
    }

    // 0x1006e67d0, 16 bytes, inline, placed by debug map only (low confidence)
    // bool FromText<int>(char const*, int&)
    bool FromText<int>(char* param_1, int* param_2) {
        return (bool)FromText(param_1, param_2, 10);
    }

} // namespace jag
