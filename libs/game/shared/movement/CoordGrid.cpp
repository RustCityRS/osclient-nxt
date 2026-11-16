// libs/game/shared/movement/CoordGrid.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.shared

#include "CoordGrid.h"

namespace jag::game {
    // 0x100124fd0: CoordGrid::operator!=(CoordGrid const&) const has the same machine code as oldscape::rs2lib::CoordGrid::operator!=(oldscape::rs2lib::CoordGrid const&) const

    // 0x100124fe0: CoordGrid::operator==(CoordGrid const&) const has the same machine code as oldscape::rs2lib::CoordGrid::operator==(oldscape::rs2lib::CoordGrid const&) const

    // 0x100132e20: CoordGrid::CoordGrid(int, unsigned int, unsigned int) has the same machine code as math::Vector3T<int>::Vector3T(int, int, int)

    // 0x100214c40: CoordGrid::GetLocalX() const has the same machine code as oldscape::rs2lib::CoordGrid::GetMapSquareTileX() const

    // 0x100214c50: CoordGrid::GetLocalZ() const has the same machine code as oldscape::rs2lib::CoordGrid::GetMapSquareTileZ() const

    // 0x1006e6260
    unsigned long CoordGrid::FromString(StringView stringView) {
        char* str;
        int* piVar4;
        unsigned long arg1;
        CoordGrid local_5c0;

        fixed_vector<eastl::fixed_string<char, 128>, 8ul> local_5a0;
        tokenize<eastl::fixed_vector<eastl::fixed_string<char, 128>, 8ul>, StringView>(&local_5a0, stringView, ", ",
                                                                                       -1);
        long lVar3 = local_5a0.size();
        if (lVar3 != 3) {
            lVar3 = local_5a0.size();
            if (lVar3 != 5) {
                LogAssert("tokens.size() == 3 || tokens.size() == 5",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/shared/movement/"
                          "CoordGrid.cpp",
                          70, nullptr);
            }
        }
        uint32_t local_5c8 = 32;
        uint64_t uStack_5d0 = 137438953472;
        int iVar2 = local_5a0.size();
        bool bVar6 = 0 < iVar2;
        if (0 < iVar2) {
            arg1 = 0;
            do {
                local_5a0[arg1];
                str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                piVar4 = &0 [arg1];
                if (!FromText<int>(str, piVar4))
                    goto LAB_1006e6419;
                arg1 = arg1 + 1;
                iVar2 = local_5a0.size();
                bVar6 = (long)arg1 < (long)iVar2;
            } while ((long)arg1 < (long)iVar2);
        }
        piVar4 = &0 [0];
        int local_5a4 = *piVar4;
        unsigned int* puVar5 = &0 [1];
        unsigned int arg2 = *puVar5;
        puVar5 = &0 [2];
        unsigned int arg3 = *puVar5;
        puVar5 = &0 [3];
        unsigned int arg4 = *puVar5;
        puVar5 = &0 [4];
        CoordGrid(&local_5c0, local_5a4, arg2, arg3, arg4, *puVar5);
        field_8 = local_5c0.field_8;
        field_0 = local_5c0.field_0;
        field_4 = local_5c0.field_4;
    LAB_1006e6419:
        return ~bVar6 & 4294967041;
    }

    // 0x1006e66d0
    CoordGrid::CoordGrid(int arg1) : field_0(4294967295), field_4(0), field_8(0) {
        if (arg1 == -1) {
            field_0 = 4294967295;
            return;
        }
        field_0 = (unsigned int)arg1 >> 28 & 3;
        field_4 = (unsigned int)arg1 >> 14 & 16383;
        field_8 = arg1 & 16383;
    }

    // 0x1006e6730
    uint64_t CoordGrid::ToFine(bool arg1) const {
        uint64_t uVar1;
        uint64_t in_register_00000031;
        uint8_t local_18[16];

        unsigned int uVar2 = (int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) << 6;
        new (local_18) CoordFine(field_0, (float)(field_4 << 7 | uVar2), 0.0, (float)(field_8 << 7 | uVar2));
        uVar1._0_4_ = local_18._0_4_;
        uVar1._4_4_ = (float)local_18._4_4_;
        return uVar1;
    }

    // 0x1006e6780
    bool CoordGrid::operator<(const CoordGrid& coordGrid) const {
        bool bVar1 = true;
        if ((int)coordGrid.field_0 <= (int)field_0) {
            if ((int)field_0 <= (int)coordGrid.field_0) {
                if (field_4 < coordGrid.field_4) {
                    return true;
                }
                if (field_4 <= coordGrid.field_4) {
                    return field_8 < coordGrid.field_8;
                }
            }
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x1006e67b0
    unsigned int CoordGrid::ToBitPacked() const {
        return field_4 << 14 | field_0 << 28 | field_8;
    }

} // namespace jag::game

namespace jag {
    // 0x1006e6490
    int tokenize<eastl::fixed_vector<eastl::fixed_string<char, 16>, 4ul>, StringView>(
        eastl::fixed_vector<eastl::fixed_string<char, 16>, 4ul>& strs, const StringView& stringView, const char* str,
        int arg4) {
        bool bVar1;
        size_t sVar3;
        ReturnValue* pRVar5;
        char* str1_00;

        if (arg4 == -1) {
            sVar3 = _strlen(str);
            arg4 = (int)sVar3;
        }
        strs.clear();
        strs.reserve(4);
        auto str1 = stringView.end();
        auto pcVar4 = stringView.end();
        char* pcVar6 = str1;
        if (str1 != pcVar4) {
            str1_00 = str1;
            do {
                str1 = pcVar6;
                bVar1 = internal::find_token<char, char const*>(*str1, str, str + arg4);
                if (bVar1) {
                    if (str1_00 != str1) {
                        pRVar5 = (ReturnValue*)eastl::fixed_vector<eastl::fixed_string<char, 16>, 4ul>::push_back();
                        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 16ul, 1ul, 0ul, true>>::assign(
                            pRVar5, str1_00, str1);
                    }
                    if (str1 == pcVar4) {
                    LAB_1006e6580:
                        pcVar6 = str1;
                    } else {
                        do {
                            bVar1 = internal::find_token<char, char const*>(*str1, str, str + arg4);
                            if (!bVar1)
                                goto LAB_1006e6580;
                            str1 = str1 + 1;
                            pcVar6 = str1;
                        } while (str1 != pcVar4);
                    }
                } else {
                    pcVar6 = str1 + 1;
                    str1 = str1_00;
                }
                str1_00 = str1;
            } while (pcVar6 != pcVar4);
        }
        if (str1 != pcVar6) {
            pRVar5 = (ReturnValue*)eastl::fixed_vector<eastl::fixed_string<char, 16>, 4ul>::push_back();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 16ul, 1ul, 0ul, true>>::assign(pRVar5, str1,
                                                                                                        pcVar6);
        }
        return strs.size();
    }

    // 0x1006e67d0
    bool FromText<int>(const char* str, int& arg2) {
        return (bool)FromText(str, arg2, 10);
    }

} // namespace jag
