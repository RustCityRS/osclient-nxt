// libs/oldscape/jagex3/dash3d/Ground.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "Ground.h"

namespace jag::oldscape::dash3d {
    // 0x100d425a8
    int64_t Ground::m_shape0P1 = 1;

    // 0x100d425b0
    int64_t Ground::m_shape0P2 = 4294967298;

    // 0x100d425b8
    int32_t Ground::m_shape0P3[250] = {
        3, 3, 1, 3, 5, 7, 6, 1, 3, 5, 7, 6, 1,  3,  5, 7, 6, 1, 3,  5,  7, 6, 1, 3, 5,  7,  2, 6, 1, 3, 5, 7,
        2, 8, 1, 3, 5, 7, 2, 8, 1, 3, 5, 7, 11, 12, 1, 3, 5, 7, 11, 12, 1, 3, 5, 7, 13, 14, 0, 1, 2, 3, 0, 0,
        1, 3, 1, 1, 2, 3, 1, 0, 1, 3, 0, 1, 2,  3,  1, 0, 1, 3, 0,  0,  1, 2, 0, 0, 2,  4,  1, 0, 4, 3, 0, 0,
        1, 4, 0, 0, 4, 3, 1, 1, 2, 4, 0, 0, 4,  3,  1, 0, 1, 2, 1,  0,  2, 4, 0, 1, 2,  4,  1, 0, 1, 4, 1, 0,
        4, 3, 0, 4, 1, 2, 0, 4, 2, 5, 1, 0, 4,  5,  1, 0, 5, 3, 0,  4,  1, 2, 0, 4, 2,  3,  0, 4, 3, 5, 1, 0,
        4, 5, 0, 0, 4, 5, 1, 4, 1, 2, 1, 4, 2,  3,  1, 4, 3, 5, 0,  0,  1, 5, 0, 1, 4,  5,  0, 1, 2, 4, 1, 0,
        5, 3, 1, 5, 4, 3, 1, 4, 2, 3, 1, 0, 1,  5,  1, 1, 4, 5, 1,  1,  2, 4, 0, 0, 5,  3,  0, 5, 4, 3, 0, 4,
        2, 3, 1, 0, 5, 4, 1, 0, 1, 5, 0, 0, 4,  3,  0, 4, 5, 3, 0,  5,  2, 3, 0, 1, 2,  5,
    };

    // 0x1039360f8, set at startup by ___cxx_global_var_init.44
    eastl::vector<int> Ground::m_defShapeP[13] = {
        /* [0] */
        ?,
        /* [1] */
        ?,
        /* [2] */
        ?,
        /* [3] */
        ?,
        /* [4] */
        ?,
        /* [5] */
        ?,
        /* [6] */
        ?,
        /* [7] */
        ?,
        /* [8] */
        ?,
        /* [9] */
        ?,
        /* [10] */
        ?,
        /* [11] */
        ?,
        /* [12] */
        ?, };

    // 0x103936298, set at startup by ___cxx_global_var_init.55
    eastl::vector<int> Ground::m_defShapeF[13] = {
        /* [0] */
        ?,
        /* [1] */
        ?,
        /* [2] */
        ?,
        /* [3] */
        ?,
        /* [4] */
        ?,
        /* [5] */
        ?,
        /* [6] */
        ?,
        /* [7] */
        ?,
        /* [8] */
        ?,
        /* [9] */
        ?,
        /* [10] */
        ?,
        /* [11] */
        ?,
        /* [12] */
        ?, };

    // 0x10034b1a0
    Ground::Ground(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, int arg10,
                   int arg11, int arg12, int arg13, int arg14, int arg15, int arg16, int arg17, int arg18, int arg19) {
        uint32_t uVar1;
        vector<int>* this_00;
        bool cVar2;
        int iVar4;
        unsigned int* puVar5;
        int* piVar6;
        uint32_t* puVar7;
        int iVar8;
        int iVar9;
        uint32_t in_register_00000014;
        vector<unsigned int>* pvVar11;
        unsigned int uVar12;
        int iVar13;
        int iVar14;
        unsigned int uVar15;
        unsigned int uVar16;
        eastl local_180;
        unsigned long local_158;
        unsigned long local_150;
        unsigned long local_148;
        int local_a0;
        int local_9c;
        int local_98;
        int local_94;
        int local_90;
        int local_8c;
        int local_88;
        int local_84;
        int local_80;
        int local_7c;
        int local_78;
        int local_74;
        unsigned long local_70;
        vector<int>* local_68;
        int local_58;
        int local_54;
        int local_50;
        int local_4c;
        int local_48;
        int local_44;
        int local_40;
        int local_3c;
        vector<unsigned int>* local_38;

        uint64_t local_e0 = (((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        vector<int>* local_100 = (vector<int>*)&field_8;
        new (local_100) eastl::vector<int>();
        vector<int>* local_f8 = (vector<int>*)&field_40;
        new (local_f8) eastl::vector<int>();
        vector<int>* local_f0 = (vector<int>*)&field_72;
        new (local_f0) eastl::vector<int>();
        vector<int>* local_c0 = (vector<int>*)&field_104;
        new (local_c0) eastl::vector<int>();
        vector<int>* local_b8 = (vector<int>*)&field_136;
        new (local_b8) eastl::vector<int>();
        vector<int>* local_b0 = (vector<int>*)&field_168;
        new (local_b0) eastl::vector<int>();
        vector<int>* local_d8 = (vector<int>*)&field_208;
        new (local_d8) eastl::vector<int>();
        vector<int>* local_d0 = (vector<int>*)&field_240;
        new (local_d0) eastl::vector<int>();
        vector<int>* local_c8 = (vector<int>*)&field_272;
        new (local_c8) eastl::vector<int>();
        vector<int>* local_60 = (vector<int>*)&field_304;
        new (local_60) eastl::vector<int>();
        field_336 = arg6 == arg9 && (arg6 == arg8 && arg6 == arg7);
        field_340 = arg1;
        field_344 = (int)local_e0;
        field_348 = arg18;
        field_352 = arg19;
        vector<unsigned int>* local_e8 = &m_defShapeP[(unsigned long)arg1];
        unsigned int uVar3 = local_e8->size();
        unsigned long uVar10 = (unsigned long)(int)uVar3;
        local_100->resize(uVar10);
        local_f8->resize(uVar10);
        local_f0->resize(uVar10);
        eastl::destruct<highlight::NpcUID*>(&local_180);
        vector<int, BucketAllocatorEASTL> local_138(uVar10, local_180);
        eastl::destruct<highlight::NpcUID*>(&local_180);
        vector<int, BucketAllocatorEASTL> local_120(uVar10, local_180);
        if (0 < (int)uVar3) {
            uVar12 = arg4 * 128;
            local_68 = (vector<int>*)(unsigned long)uVar12;
            uVar15 = arg5 * 128;
            local_70 = (unsigned long)uVar15;
            local_158 = (unsigned long)((int)local_e0 * -2 + 7);
            local_150 = (unsigned long)(3 - (int)local_e0);
            local_a0 = arg9 + arg6 >> 1;
            local_9c = arg13 + arg10 >> 1;
            local_98 = arg17 + arg14 >> 1;
            local_94 = arg9 + arg8 >> 1;
            local_90 = arg13 + arg12 >> 1;
            local_8c = arg17 + arg16 >> 1;
            local_88 = arg8 + arg7 >> 1;
            local_84 = arg12 + arg11 >> 1;
            local_80 = arg16 + arg15 >> 1;
            local_7c = arg7 + arg6 >> 1;
            local_78 = arg11 + arg10 >> 1;
            local_74 = arg15 + arg14 >> 1;
            local_148 = (unsigned long)uVar3;
            local_58 = uVar12 + 96;
            local_54 = uVar15 + 96;
            local_50 = uVar15 + 32;
            local_4c = uVar12 + 32;
            local_40 = uVar15 + 64;
            local_3c = uVar12 + 64;
            local_48 = uVar15 + 128;
            local_44 = uVar12 + 128;
            uVar10 = 0;
            do {
                puVar5 = (unsigned int*)local_e8->at(uVar10);
                uVar3 = *puVar5;
                uVar12 = ((int)local_158 + uVar3 & 7) + 1;
                if ((uVar3 & 1) != 0) {
                    uVar12 = uVar3;
                }
                if (8 < (int)uVar3) {
                    uVar12 = uVar3;
                }
                uVar3 = ((int)local_150 + uVar12 & 3) + 9;
                if (3 < uVar12 - 9) {
                    uVar3 = uVar12;
                }
                uVar12 = ((int)local_150 + uVar3 & 3) + 13;
                if (3 < uVar3 - 13) {
                    uVar12 = uVar3;
                }
                if (14 < uVar12 - 1) {
                    iVar4 = local_54;
                    iVar9 = local_4c;
                LAB_10034b573:
                    local_38 = (vector<unsigned int>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)iVar4);
                    iVar4 = arg9;
                    iVar13 = arg13;
                    iVar14 = arg17;
                    goto LAB_10034b65a;
                }
                iVar9 = (int)local_68;
                iVar8 = (int)local_70;
                local_38 = (vector<unsigned int>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)iVar8);
                iVar4 = arg6;
                iVar13 = arg10;
                iVar14 = arg14;
                switch (uVar12) {
                case 1:
                    goto switchD_10034b52c_caseD_1;
                case 2:
                    break;
                case 3:
                    iVar9 = local_44;
                    goto LAB_10034b62d;
                case 4:
                    iVar9 = local_44;
                    goto LAB_10034b5b2;
                case 5:
                    iVar4 = local_48;
                    iVar9 = local_44;
                    goto LAB_10034b648;
                case 6:
                    iVar9 = local_48;
                    goto LAB_10034b5d0;
                case 7:
                    iVar4 = local_48;
                    goto LAB_10034b573;
                case 8:
                    goto LAB_10034b5ee;
                case 9:
                    iVar8 = local_50;
                    break;
                case 10:
                    iVar9 = local_58;
                LAB_10034b5b2:
                    local_38 = (vector<unsigned int>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)local_40);
                    iVar4 = local_88;
                    iVar13 = local_84;
                    iVar14 = local_80;
                    goto switchD_10034b52c_caseD_1;
                case 11:
                    iVar9 = local_54;
                LAB_10034b5d0:
                    local_38 = (vector<unsigned int>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)iVar9);
                    iVar4 = local_94;
                    iVar13 = local_90;
                    iVar14 = local_8c;
                    iVar9 = local_3c;
                    goto switchD_10034b52c_caseD_1;
                case 12:
                    iVar9 = local_4c;
                LAB_10034b5ee:
                    local_38 = (vector<unsigned int>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)local_40);
                    iVar4 = local_a0;
                    iVar13 = local_9c;
                    iVar14 = local_98;
                    goto switchD_10034b52c_caseD_1;
                case 13:
                    local_38 = (vector<unsigned int>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)local_50);
                    iVar9 = local_4c;
                    goto LAB_10034b65a;
                case 14:
                    iVar8 = local_50;
                    iVar9 = local_58;
                LAB_10034b62d:
                    local_38 = (vector<unsigned int>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)iVar8);
                    iVar4 = arg7;
                    iVar13 = arg11;
                    iVar14 = arg15;
                LAB_10034b65a:
                    goto switchD_10034b52c_caseD_1;
                case 15:
                    iVar4 = local_54;
                    iVar9 = local_58;
                LAB_10034b648:
                    local_38 = (vector<unsigned int>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)iVar4);
                    iVar4 = arg8;
                    iVar13 = arg12;
                    iVar14 = arg16;
                    goto LAB_10034b65a;
                }
                local_38 = (vector<unsigned int>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)iVar8);
                iVar4 = local_7c;
                iVar13 = local_78;
                iVar14 = local_74;
                iVar9 = local_3c;
            switchD_10034b52c_caseD_1:
                piVar6 = (int*)(*local_100)[uVar10];
                *piVar6 = iVar9;
                piVar6 = (int*)(*local_f8)[uVar10];
                *piVar6 = iVar4;
                puVar7 = (uint32_t*)(*local_f0)[uVar10];
                *puVar7 = local_38._0_4_;
                piVar6 = &local_138[uVar10];
                *piVar6 = iVar13;
                piVar6 = &local_120[uVar10];
                *piVar6 = iVar14;
                uVar10 = uVar10 + 1;
            } while (local_148 != uVar10);
        }
        vector<unsigned int>* this_01 = &m_defShapeF[(unsigned long)arg1];
        iVar4 = this_01->size();
        iVar9 = iVar4 + 3;
        if (-1 < iVar4) {
            iVar9 = iVar4;
        }
        uVar10 = (unsigned long)(iVar9 >> 2);
        local_d8->resize(uVar10);
        local_d0->resize(uVar10);
        local_c8->resize(uVar10);
        local_c0->resize(uVar10);
        local_b8->resize(uVar10);
        local_b0->resize(uVar10);
        field_200 = 0;
        if (arg3 != -1) {
            local_180 = eastl::vector<int>(uVar10, local_160);
            *local_60 = local_180;
        }
        if (3 < iVar4) {
            local_e8 = (vector<unsigned int>*)(unsigned long)(unsigned int)(iVar9 >> 2);
            uVar10 = 0;
            pvVar11 = nullptr;
            local_68 = (vector<int>*)this_01;
            do {
                this_00 = local_68;
                puVar7 = (uint32_t*)(*local_68)[uVar10];
                uVar1 = *puVar7;
                puVar5 = (unsigned int*)(*this_00)[uVar10 + 1];
                local_70 = (((uint64_t)local_70._4_4_ << 32) | (uint32_t)uVar1);
                uVar3 = *puVar5;
                local_38 = pvVar11;
                puVar5 = (unsigned int*)(*this_00)[uVar10 + 2];
                uVar12 = *puVar5;
                puVar5 = (unsigned int*)(*this_00)[uVar10 + 3];
                uVar15 = *puVar5;
                iVar9 = (int)local_e0;
                uVar16 = uVar3 - iVar9 & 3;
                if (3 < (int)uVar3) {
                    uVar16 = uVar3;
                }
                uVar3 = uVar12 - iVar9 & 3;
                if (3 < (int)uVar12) {
                    uVar3 = uVar12;
                }
                uVar12 = uVar15 - iVar9 & 3;
                if (3 < (int)uVar15) {
                    uVar12 = uVar15;
                }
                puVar5 = (unsigned int*)(*local_d8)[(unsigned long)local_38];
                *puVar5 = uVar16;
                puVar5 = (unsigned int*)(*local_d0)[(unsigned long)local_38];
                *puVar5 = uVar3;
                puVar5 = (unsigned int*)(*local_c8)[(unsigned long)local_38];
                *puVar5 = uVar12;
                if ((int)local_70 == 0) {
                    puVar7 = &local_138[(long)(int)uVar16];
                    uVar1 = *puVar7;
                    puVar7 = (uint32_t*)(*local_c0)[(unsigned long)local_38];
                    *puVar7 = uVar1;
                    puVar7 = &local_138[(long)(int)uVar3];
                    uVar1 = *puVar7;
                    puVar7 = (uint32_t*)(*local_b8)[(unsigned long)local_38];
                    *puVar7 = uVar1;
                    puVar7 = &local_138[(long)(int)uVar12];
                    uVar1 = *puVar7;
                    puVar7 = (uint32_t*)(*local_b0)[(unsigned long)local_38];
                    *puVar7 = uVar1;
                    cVar2 = local_60->empty();
                    pvVar11 = local_38;
                    if (!cVar2) {
                        puVar7 = (uint32_t*)(*local_60)[(unsigned long)local_38];
                        *puVar7 = 4294967295;
                        goto LAB_10034b7e0;
                    }
                } else {
                    puVar7 = &local_120[(long)(int)uVar16];
                    uVar1 = *puVar7;
                    puVar7 = (uint32_t*)(*local_c0)[(unsigned long)local_38];
                    *puVar7 = uVar1;
                    puVar7 = &local_120[(long)(int)uVar3];
                    uVar1 = *puVar7;
                    puVar7 = (uint32_t*)(*local_b8)[(unsigned long)local_38];
                    *puVar7 = uVar1;
                    puVar7 = &local_120[(long)(int)uVar12];
                    uVar1 = *puVar7;
                    puVar7 = (uint32_t*)(*local_b0)[(unsigned long)local_38];
                    pvVar11 = local_38;
                    *puVar7 = uVar1;
                    field_200 = field_200 | 1 << ((uint8_t)local_38 & 31);
                    cVar2 = local_60->empty();
                    if (!cVar2) {
                        piVar6 = (int*)(*local_60)[(unsigned long)pvVar11];
                        *piVar6 = arg3;
                    LAB_10034b7e0:
                        pvVar11 = local_38;
                    }
                }
                pvVar11 = pvVar11 + 1;
                uVar10 = uVar10 + 4;
            } while (local_e8 != pvVar11);
        }
    }

    // 0x10034bc20
    bool Ground::IsOverlay(int arg1) const {
        if (field_104.size() <= (unsigned long)(long)arg1) {
            LogAssert("size_t(face) < m_colour1.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "Ground.cpp",
                      365, "Face index was out-of-range.");
        }
        return (field_200 >> (arg1 & 31U) & 1) != 0;
    }

    // 0x10038eaf0
    void ___cxx_global_var_init_44(void) {
        uint64_t local_38 = 12884901889;
        uint64_t uStack_30 = 30064771077;
        new ((vector<int>*)&Ground::m_defShapeP) eastl::vector<int>(&local_38, *4);
        uint64_t local_48 = 12884901889;
        uint64_t uStack_40 = 30064771077;
        new ((vector<int>*)&reinterpret_cast<const uint64_t*>(&m_defShapeP)[4]) eastl::vector<int>(&local_48, *4);
        uint64_t local_58 = 12884901889;
        uint64_t uStack_50 = 30064771077;
        new ((vector<int>*)&reinterpret_cast<const uint64_t*>(&m_defShapeP)[8]) eastl::vector<int>(&local_58, *4);
        uint32_t local_68 = 6;
        uint64_t local_78 = 12884901889;
        uint64_t uStack_70 = 30064771077;
        new ((vector<int>*)&reinterpret_cast<const uint64_t*>(&m_defShapeP)[12]) eastl::vector<int>(&local_78, *5);
        uint32_t local_88 = 6;
        uint64_t local_98 = 12884901889;
        uint64_t uStack_90 = 30064771077;
        new ((vector<int>*)&reinterpret_cast<const uint64_t*>(&m_defShapeP)[16]) eastl::vector<int>(&local_98, *5);
        uint32_t local_a8 = 6;
        uint64_t local_b8 = 12884901889;
        uint64_t uStack_b0 = 30064771077;
        new ((vector<int>*)&reinterpret_cast<const uint64_t*>(&m_defShapeP)[20]) eastl::vector<int>(&local_b8, *5);
        uint32_t local_c8 = 6;
        uint64_t local_d8 = 12884901889;
        uint64_t uStack_d0 = 30064771077;
        new ((vector<int>*)&reinterpret_cast<const uint64_t*>(&m_defShapeP)[24]) eastl::vector<int>(&local_d8, *5);
        uint64_t local_e8 = 25769803778;
        uint64_t local_f8 = 12884901889;
        uint64_t uStack_f0 = 30064771077;
        new ((vector<int>*)&reinterpret_cast<const uint64_t*>(&m_defShapeP)[28]) eastl::vector<int>(&local_f8, *6);
        uint64_t local_108 = 34359738370;
        uint64_t local_118 = 12884901889;
        uint64_t uStack_110 = 30064771077;
        new ((vector<int>*)&reinterpret_cast<const uint64_t*>(&m_defShapeP)[32]) eastl::vector<int>(&local_118, *6);
        uint64_t local_128 = 34359738370;
        uint64_t local_138 = 12884901889;
        uint64_t uStack_130 = 30064771077;
        new ((vector<int>*)&reinterpret_cast<const uint64_t*>(&m_defShapeP)[36]) eastl::vector<int>(&local_138, *6);
        uint64_t local_148 = 51539607563;
        uint64_t local_158 = 12884901889;
        uint64_t uStack_150 = 30064771077;
        new ((vector<int>*)&reinterpret_cast<const uint64_t*>(&m_defShapeP)[40]) eastl::vector<int>(&local_158, *6);
        uint64_t local_168 = 51539607563;
        uint64_t local_178 = 12884901889;
        uint64_t uStack_170 = 30064771077;
        new ((vector<int>*)&reinterpret_cast<const uint64_t*>(&m_defShapeP)[44]) eastl::vector<int>(&local_178, *6);
        uint64_t local_188 = 60129542157;
        uint64_t local_198 = 12884901889;
        uint64_t uStack_190 = 30064771077;
        new ((vector<int>*)&reinterpret_cast<const uint64_t*>(&m_defShapeP)[48]) eastl::vector<int>(&local_198, *6);
        ___cxa_atexit(PTR__array_100ee6ed0, &Ground::m_defShapeP, 4294967296);
    }

    // 0x10038f020
    void ___cxx_global_var_init_55(void) {
        uint64_t local_38 = 0;
        uint64_t uStack_30 = 12884901889;
        mach_header* local_48 = &__mh_execute_header;
        uint64_t uStack_40 = 12884901890;
        new ((vector<int>*)&Ground::m_defShapeF) eastl::vector<int>(&local_48, *8);
        uint64_t local_58 = 1;
        uint64_t uStack_50 = 12884901889;
        uint64_t local_68 = 4294967297;
        uint64_t uStack_60 = 12884901890;
        new ((vector<int>*)&reinterpret_cast<const uint64_t*>(&m_defShapeF)[4]) eastl::vector<int>(&local_68, *8);
        uint64_t local_78 = 1;
        uint64_t uStack_70 = 12884901889;
        mach_header* local_88 = &__mh_execute_header;
        uint64_t uStack_80 = 12884901890;
        new ((vector<int>*)&reinterpret_cast<const uint64_t*>(&m_defShapeF)[8]) eastl::vector<int>(&local_88, *8);
        uint64_t local_98 = 1;
        uint64_t uStack_90 = 12884901892;
        uint64_t local_a8 = 0;
        uint64_t uStack_a0 = 17179869186;
        uint64_t local_b8 = 0;
        uint64_t uStack_b0 = 8589934593;
        new ((vector<int>*)&reinterpret_cast<const uint64_t*>(&m_defShapeF)[12]) eastl::vector<int>(&local_b8, *12);
        uint64_t local_c8 = 4294967297;
        uint64_t uStack_c0 = 17179869186;
        uint64_t local_d8 = 0;
        uint64_t uStack_d0 = 12884901892;
        uint64_t local_e8 = 0;
        uint64_t uStack_e0 = 17179869185;
        new ((vector<int>*)&reinterpret_cast<const uint64_t*>(&m_defShapeF)[16]) eastl::vector<int>(&local_e8, *12);
        uint64_t local_f8 = 1;
        uint64_t uStack_f0 = 17179869186;
        uint64_t local_108 = 1;
        uint64_t uStack_100 = 8589934593;
        uint64_t local_118 = 0;
        uint64_t uStack_110 = 12884901892;
        new ((vector<int>*)&reinterpret_cast<const uint64_t*>(&m_defShapeF)[20]) eastl::vector<int>(&local_118, *12);
        uint64_t local_128 = 1;
        uint64_t uStack_120 = 12884901892;
        uint64_t local_138 = 1;
        uint64_t uStack_130 = 17179869185;
        mach_header* local_148 = &__mh_execute_header;
        uint64_t uStack_140 = 17179869186;
        new ((vector<int>*)&reinterpret_cast<const uint64_t*>(&m_defShapeF)[24]) eastl::vector<int>(&local_148, *12);
        uint64_t local_158 = 1;
        uint64_t uStack_150 = 12884901893;
        uint64_t local_168 = 1;
        uint64_t uStack_160 = 21474836484;
        uint64_t local_178 = 17179869184;
        uint64_t uStack_170 = 21474836482;
        uint64_t local_188 = 17179869184;
        uint64_t uStack_180 = 8589934593;
        new ((vector<int>*)&reinterpret_cast<const uint64_t*>(&m_defShapeF)[28]) eastl::vector<int>(&local_188, *16);
        uint64_t local_198 = 1;
        uint64_t uStack_190 = 21474836484;
        uint64_t local_1a8 = 17179869184;
        uint64_t uStack_1a0 = 21474836483;
        uint64_t local_1b8 = 17179869184;
        uint64_t uStack_1b0 = 12884901890;
        uint64_t local_1c8 = 17179869184;
        uint64_t uStack_1c0 = 8589934593;
        new ((vector<int>*)&reinterpret_cast<const uint64_t*>(&m_defShapeF)[32]) eastl::vector<int>(&local_1c8, *16);
        uint64_t local_1d8 = 17179869185;
        uint64_t uStack_1d0 = 21474836483;
        uint64_t local_1e8 = 17179869185;
        uint64_t uStack_1e0 = 12884901890;
        uint64_t local_1f8 = 17179869185;
        uint64_t uStack_1f0 = 8589934593;
        uint64_t local_208 = 0;
        uint64_t uStack_200 = 21474836484;
        new ((vector<int>*)&reinterpret_cast<const uint64_t*>(&m_defShapeF)[36]) eastl::vector<int>(&local_208, *16);
        uint64_t local_218 = 17179869185;
        uint64_t uStack_210 = 12884901890;
        uint64_t local_228 = 21474836481;
        uint64_t uStack_220 = 12884901892;
        uint64_t local_238 = 1;
        uint64_t uStack_230 = 12884901893;
        mach_header* local_248 = &__mh_execute_header;
        uint64_t uStack_240 = 17179869186;
        mach_header* local_258 = &__mh_execute_header;
        uint64_t uStack_250 = 21474836484;
        uint64_t local_268 = 0;
        uint64_t uStack_260 = 21474836481;
        new ((vector<int>*)&reinterpret_cast<const uint64_t*>(&m_defShapeF)[40]) eastl::vector<int>(&local_268, *24);
        uint64_t local_278 = 17179869184;
        uint64_t uStack_270 = 12884901890;
        uint64_t local_288 = 21474836480;
        uint64_t uStack_280 = 12884901892;
        uint64_t local_298 = 0;
        uint64_t uStack_290 = 12884901893;
        uint64_t local_2a8 = 4294967297;
        uint64_t uStack_2a0 = 17179869186;
        uint64_t local_2b8 = 4294967297;
        uint64_t uStack_2b0 = 21474836484;
        uint64_t local_2c8 = 1;
        uint64_t uStack_2c0 = 21474836481;
        new ((vector<int>*)&reinterpret_cast<const uint64_t*>(&m_defShapeF)[44]) eastl::vector<int>(&local_2c8, *24);
        mach_header* local_2d8 = &__mh_execute_header;
        uint64_t uStack_2d0 = 21474836482;
        uint64_t local_2e8 = 21474836480;
        uint64_t uStack_2e0 = 12884901890;
        uint64_t local_2f8 = 17179869184;
        uint64_t uStack_2f0 = 12884901893;
        uint64_t local_308 = 0;
        uint64_t uStack_300 = 12884901892;
        uint64_t local_318 = 1;
        uint64_t uStack_310 = 21474836481;
        uint64_t local_328 = 1;
        uint64_t uStack_320 = 17179869189;
        new ((vector<int>*)&reinterpret_cast<const uint64_t*>(&m_defShapeF)[48]) eastl::vector<int>(&local_328, *24);
        ___cxa_atexit(PTR__array_100ee6ed0, &Ground::m_defShapeF, 4294967296);
    }

} // namespace jag::oldscape::dash3d
