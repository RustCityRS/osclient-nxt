// libs/oldscape/jagex3/dash3d/Ground.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "Ground.h"

namespace jag::oldscape::dash3d {
    // 0x100d425a8, 8 bytes, __const
    Ground::m_shape0P1 = 1;

    // 0x100d425b0, 8 bytes, __const
    Ground::m_shape0P2 = 4294967298;

    // 0x100d425b8, 1000 bytes, __const
    Ground::m_shape0P3 = {
        3, 3, 1, 3, 5, 7, 6, 1, 3, 5, 7, 6, 1,  3,  5, 7, 6, 1, 3,  5,  7, 6, 1, 3, 5,  7,  2, 6, 1, 3, 5, 7,
        2, 8, 1, 3, 5, 7, 2, 8, 1, 3, 5, 7, 11, 12, 1, 3, 5, 7, 11, 12, 1, 3, 5, 7, 13, 14, 0, 1, 2, 3, 0, 0,
        1, 3, 1, 1, 2, 3, 1, 0, 1, 3, 0, 1, 2,  3,  1, 0, 1, 3, 0,  0,  1, 2, 0, 0, 2,  4,  1, 0, 4, 3, 0, 0,
        1, 4, 0, 0, 4, 3, 1, 1, 2, 4, 0, 0, 4,  3,  1, 0, 1, 2, 1,  0,  2, 4, 0, 1, 2,  4,  1, 0, 1, 4, 1, 0,
        4, 3, 0, 4, 1, 2, 0, 4, 2, 5, 1, 0, 4,  5,  1, 0, 5, 3, 0,  4,  1, 2, 0, 4, 2,  3,  0, 4, 3, 5, 1, 0,
        4, 5, 0, 0, 4, 5, 1, 4, 1, 2, 1, 4, 2,  3,  1, 4, 3, 5, 0,  0,  1, 5, 0, 1, 4,  5,  0, 1, 2, 4, 1, 0,
        5, 3, 1, 5, 4, 3, 1, 4, 2, 3, 1, 0, 1,  5,  1, 1, 4, 5, 1,  1,  2, 4, 0, 0, 5,  3,  0, 5, 4, 3, 0, 4,
        2, 3, 1, 0, 5, 4, 1, 0, 1, 5, 0, 0, 4,  3,  0, 4, 5, 3, 0,  5,  2, 3, 0, 1, 2,  5,
    };

    // 0x1039360f8, 416 bytes, __common; set at startup by ___cxx_global_var_init.44
    eastl::vector<int, eastl::allocator> Ground::m_defShapeP[13] = {
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

    // 0x103936298, 416 bytes, __common; set at startup by ___cxx_global_var_init.55
    eastl::vector<int, eastl::allocator> Ground::m_defShapeF[13] = {
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

    // 0x10034b1a0, 2544 bytes, base-object constructor, placed by class name and debug map
    // Ground::Ground(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int)
    void Ground::Ground(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7,
                        int param_8, int param_9, int param_10, int param_11, int param_12, int param_13, int param_14,
                        int param_15, int param_16, int param_17, int param_18, int param_19) {
        undefined4 uVar1;
        vector<int, eastl::allocator>* this_00;
        char cVar2;
        uint uVar3;
        int iVar4;
        uint* puVar5;
        int* piVar6;
        undefined4* puVar7;
        vector<unsigned int, eastl::allocator>* this_01;
        int iVar8;
        int iVar9;
        undefined4 in_register_00000014;
        NpcUID* extraout_RDX;
        NpcUID* extraout_RDX_00;
        ulong uVar10;
        vector<unsigned int, eastl::allocator>* pvVar11;
        uint uVar12;
        int iVar13;
        int iVar14;
        uint uVar15;
        uint uVar16;
        eastl local_180[32];
        allocator local_160[8];
        ulong local_158;
        ulong local_150;
        ulong local_148;
        vector<int, BucketAllocatorEASTL> local_138[24];
        vector<int, BucketAllocatorEASTL> local_120[24];
        vector<int, eastl::allocator>* local_100;
        vector<int, eastl::allocator>* local_f8;
        vector<int, eastl::allocator>* local_f0;
        vector<unsigned int, eastl::allocator>* local_e8;
        undefined8 local_e0;
        vector<int, eastl::allocator>* local_d8;
        vector<int, eastl::allocator>* local_d0;
        vector<int, eastl::allocator>* local_c8;
        vector<int, eastl::allocator>* local_c0;
        vector<int, eastl::allocator>* local_b8;
        vector<int, eastl::allocator>* local_b0;
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
        ulong local_70;
        vector<int, eastl::allocator>* local_68;
        vector<int, eastl::allocator>* local_60;
        int local_58;
        int local_54;
        int local_50;
        int local_4c;
        int local_48;
        int local_44;
        int local_40;
        int local_3c;
        vector<unsigned int, eastl::allocator>* local_38;

        local_e0 = CONCAT44(in_register_00000014, param_2);
        local_100 = (vector<int, eastl::allocator>*)&field_8;
        eastl::vector<int, eastl::allocator>::vector(local_100);
        local_f8 = (vector<int, eastl::allocator>*)&field_40;
        eastl::vector<int, eastl::allocator>::vector(local_f8);
        local_f0 = (vector<int, eastl::allocator>*)&field_72;
        eastl::vector<int, eastl::allocator>::vector(local_f0);
        local_c0 = (vector<int, eastl::allocator>*)&field_104;
        eastl::vector<int, eastl::allocator>::vector(local_c0);
        local_b8 = (vector<int, eastl::allocator>*)&field_136;
        eastl::vector<int, eastl::allocator>::vector(local_b8);
        local_b0 = (vector<int, eastl::allocator>*)&field_168;
        eastl::vector<int, eastl::allocator>::vector(local_b0);
        local_d8 = (vector<int, eastl::allocator>*)&field_208;
        eastl::vector<int, eastl::allocator>::vector(local_d8);
        local_d0 = (vector<int, eastl::allocator>*)&field_240;
        eastl::vector<int, eastl::allocator>::vector(local_d0);
        local_c8 = (vector<int, eastl::allocator>*)&field_272;
        eastl::vector<int, eastl::allocator>::vector(local_c8);
        local_60 = (vector<int, eastl::allocator>*)&field_304;
        eastl::vector<int, eastl::allocator>::vector(local_60);
        field_336 = param_6 == param_9 && (param_6 == param_8 && param_6 == param_7);
        field_340 = param_1;
        field_344 = (int)local_e0;
        field_348 = param_18;
        field_352 = param_19;
        local_e8 =
            (vector<unsigned int, eastl::allocator>*)std::array<eastl::vector<int, eastl::allocator>, 13ul>::operator[](
                (array<eastl::vector<int, eastl::allocator>, 13ul>*)&m_defShapeP, (ulong)param_1);
        uVar3 = eastl::vector<unsigned int, eastl::allocator>::size(local_e8);
        eastl::vector<int, eastl::allocator>::resize((ulong)local_100);
        eastl::vector<int, eastl::allocator>::resize((ulong)local_f8);
        eastl::vector<int, eastl::allocator>::resize((ulong)local_f0);
        eastl::destruct<highlight::NpcUID*>(local_180, (NpcUID*)"EASTL vector", extraout_RDX);
        eastl::vector<int, BucketAllocatorEASTL>::vector(local_138, (long)(int)uVar3, (BucketAllocatorEASTL*)local_180);
        eastl::destruct<highlight::NpcUID*>(local_180, (NpcUID*)"EASTL vector", extraout_RDX_00);
        eastl::vector<int, BucketAllocatorEASTL>::vector(local_120, (long)(int)uVar3, (BucketAllocatorEASTL*)local_180);
        if (0 < (int)uVar3) {
            uVar12 = param_4 * 128;
            local_68 = (vector<int, eastl::allocator>*)(ulong)uVar12;
            uVar15 = param_5 * 128;
            local_70 = (ulong)uVar15;
            local_158 = (ulong)((int)local_e0 * -2 + 7);
            local_150 = (ulong)(3 - (int)local_e0);
            local_a0 = param_9 + param_6 >> 1;
            local_9c = param_13 + param_10 >> 1;
            local_98 = param_17 + param_14 >> 1;
            local_94 = param_9 + param_8 >> 1;
            local_90 = param_13 + param_12 >> 1;
            local_8c = param_17 + param_16 >> 1;
            local_88 = param_8 + param_7 >> 1;
            local_84 = param_12 + param_11 >> 1;
            local_80 = param_16 + param_15 >> 1;
            local_7c = param_7 + param_6 >> 1;
            local_78 = param_11 + param_10 >> 1;
            local_74 = param_15 + param_14 >> 1;
            local_148 = (ulong)uVar3;
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
                puVar5 = (uint*)local_e8->at(uVar10);
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
                    local_38 = (vector<unsigned int, eastl::allocator>*)CONCAT44(local_38._4_4_, iVar4);
                    iVar4 = param_9;
                    iVar13 = param_13;
                    iVar14 = param_17;
                    goto LAB_10034b65a;
                }
                iVar9 = (int)local_68;
                iVar8 = (int)local_70;
                local_38 = (vector<unsigned int, eastl::allocator>*)CONCAT44(local_38._4_4_, iVar8);
                iVar4 = param_6;
                iVar13 = param_10;
                iVar14 = param_14;
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
                    local_38 = (vector<unsigned int, eastl::allocator>*)CONCAT44(local_38._4_4_, local_40);
                    iVar4 = local_88;
                    iVar13 = local_84;
                    iVar14 = local_80;
                    goto switchD_10034b52c_caseD_1;
                case 11:
                    iVar9 = local_54;
                LAB_10034b5d0:
                    local_38 = (vector<unsigned int, eastl::allocator>*)CONCAT44(local_38._4_4_, iVar9);
                    iVar4 = local_94;
                    iVar13 = local_90;
                    iVar14 = local_8c;
                    iVar9 = local_3c;
                    goto switchD_10034b52c_caseD_1;
                case 12:
                    iVar9 = local_4c;
                LAB_10034b5ee:
                    local_38 = (vector<unsigned int, eastl::allocator>*)CONCAT44(local_38._4_4_, local_40);
                    iVar4 = local_a0;
                    iVar13 = local_9c;
                    iVar14 = local_98;
                    goto switchD_10034b52c_caseD_1;
                case 13:
                    local_38 = (vector<unsigned int, eastl::allocator>*)CONCAT44(local_38._4_4_, local_50);
                    iVar9 = local_4c;
                    goto LAB_10034b65a;
                case 14:
                    iVar8 = local_50;
                    iVar9 = local_58;
                LAB_10034b62d:
                    local_38 = (vector<unsigned int, eastl::allocator>*)CONCAT44(local_38._4_4_, iVar8);
                    iVar4 = param_7;
                    iVar13 = param_11;
                    iVar14 = param_15;
                LAB_10034b65a:
                    goto switchD_10034b52c_caseD_1;
                case 15:
                    iVar4 = local_54;
                    iVar9 = local_58;
                LAB_10034b648:
                    local_38 = (vector<unsigned int, eastl::allocator>*)CONCAT44(local_38._4_4_, iVar4);
                    iVar4 = param_8;
                    iVar13 = param_12;
                    iVar14 = param_16;
                    goto LAB_10034b65a;
                }
                local_38 = (vector<unsigned int, eastl::allocator>*)CONCAT44(local_38._4_4_, iVar8);
                iVar4 = local_7c;
                iVar13 = local_78;
                iVar14 = local_74;
                iVar9 = local_3c;
            switchD_10034b52c_caseD_1:
                piVar6 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_100, uVar10);
                *piVar6 = iVar9;
                piVar6 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_f8, uVar10);
                *piVar6 = iVar4;
                puVar7 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_f0, uVar10);
                *puVar7 = local_38._0_4_;
                piVar6 = (int*)eastl::vector<int, BucketAllocatorEASTL>::operator[](local_138, uVar10);
                *piVar6 = iVar13;
                piVar6 = (int*)eastl::vector<int, BucketAllocatorEASTL>::operator[](local_120, uVar10);
                *piVar6 = iVar14;
                uVar10 = uVar10 + 1;
            } while (local_148 != uVar10);
        }
        this_01 =
            (vector<unsigned int, eastl::allocator>*)std::array<eastl::vector<int, eastl::allocator>, 13ul>::operator[](
                (array<eastl::vector<int, eastl::allocator>, 13ul>*)&m_defShapeF, (ulong)param_1);
        iVar4 = eastl::vector<unsigned int, eastl::allocator>::size(this_01);
        iVar9 = iVar4 + 3;
        if (-1 < iVar4) {
            iVar9 = iVar4;
        }
        eastl::vector<int, eastl::allocator>::resize((ulong)local_d8);
        eastl::vector<int, eastl::allocator>::resize((ulong)local_d0);
        eastl::vector<int, eastl::allocator>::resize((ulong)local_c8);
        eastl::vector<int, eastl::allocator>::resize((ulong)local_c0);
        eastl::vector<int, eastl::allocator>::resize((ulong)local_b8);
        eastl::vector<int, eastl::allocator>::resize((ulong)local_b0);
        ((Ground*)this)->field_200 = 0;
        if (param_3 != -1) {
            eastl::allocator::allocator(local_160, "EASTL vector");
            new (local_180) eastl::vector<int, eastl::allocator>((long)(iVar9 >> 2), local_160);
            eastl::vector<int, eastl::allocator>::operator=(local_60, (vector*)local_180);
            local_180->~vector();
        }
        if (3 < iVar4) {
            local_e8 = (vector<unsigned int, eastl::allocator>*)(ulong)(uint)(iVar9 >> 2);
            uVar10 = 0;
            pvVar11 = (vector<unsigned int, eastl::allocator>*)0;
            local_68 = (vector<int, eastl::allocator>*)this_01;
            do {
                this_00 = local_68;
                puVar7 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_68, uVar10);
                uVar1 = *puVar7;
                puVar5 = (uint*)eastl::vector<int, eastl::allocator>::operator[](this_00, uVar10 + 1);
                local_70 = CONCAT44(local_70._4_4_, uVar1);
                uVar3 = *puVar5;
                local_38 = pvVar11;
                puVar5 = (uint*)eastl::vector<int, eastl::allocator>::operator[](this_00, uVar10 + 2);
                uVar12 = *puVar5;
                puVar5 = (uint*)eastl::vector<int, eastl::allocator>::operator[](this_00, uVar10 + 3);
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
                puVar5 = (uint*)eastl::vector<int, eastl::allocator>::operator[](local_d8, (ulong)local_38);
                *puVar5 = uVar16;
                puVar5 = (uint*)eastl::vector<int, eastl::allocator>::operator[](local_d0, (ulong)local_38);
                *puVar5 = uVar3;
                puVar5 = (uint*)eastl::vector<int, eastl::allocator>::operator[](local_c8, (ulong)local_38);
                *puVar5 = uVar12;
                if ((int)local_70 == 0) {
                    puVar7 =
                        (undefined4*)eastl::vector<int, BucketAllocatorEASTL>::operator[](local_138, (long)(int)uVar16);
                    uVar1 = *puVar7;
                    puVar7 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_c0, (ulong)local_38);
                    *puVar7 = uVar1;
                    puVar7 =
                        (undefined4*)eastl::vector<int, BucketAllocatorEASTL>::operator[](local_138, (long)(int)uVar3);
                    uVar1 = *puVar7;
                    puVar7 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_b8, (ulong)local_38);
                    *puVar7 = uVar1;
                    puVar7 =
                        (undefined4*)eastl::vector<int, BucketAllocatorEASTL>::operator[](local_138, (long)(int)uVar12);
                    uVar1 = *puVar7;
                    puVar7 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_b0, (ulong)local_38);
                    *puVar7 = uVar1;
                    cVar2 = local_60->empty();
                    pvVar11 = local_38;
                    if (cVar2 == '\0') {
                        puVar7 =
                            (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_60, (ulong)local_38);
                        *puVar7 = 4294967295;
                        goto LAB_10034b7e0;
                    }
                } else {
                    puVar7 =
                        (undefined4*)eastl::vector<int, BucketAllocatorEASTL>::operator[](local_120, (long)(int)uVar16);
                    uVar1 = *puVar7;
                    puVar7 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_c0, (ulong)local_38);
                    *puVar7 = uVar1;
                    puVar7 =
                        (undefined4*)eastl::vector<int, BucketAllocatorEASTL>::operator[](local_120, (long)(int)uVar3);
                    uVar1 = *puVar7;
                    puVar7 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_b8, (ulong)local_38);
                    *puVar7 = uVar1;
                    puVar7 =
                        (undefined4*)eastl::vector<int, BucketAllocatorEASTL>::operator[](local_120, (long)(int)uVar12);
                    uVar1 = *puVar7;
                    puVar7 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_b0, (ulong)local_38);
                    pvVar11 = local_38;
                    *puVar7 = uVar1;
                    ((Ground*)this)->field_200 = ((Ground*)this)->field_200 | 1 << ((byte)local_38 & 31);
                    cVar2 = local_60->empty();
                    if (cVar2 == '\0') {
                        piVar6 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_60, (ulong)pvVar11);
                        *piVar6 = param_3;
                    LAB_10034b7e0:
                        pvVar11 = local_38;
                    }
                }
                pvVar11 = pvVar11 + 1;
                uVar10 = uVar10 + 4;
            } while (local_e8 != pvVar11);
        }
        local_120->~vector_set();
        local_138->~vector_set();
    }

    // 0x10034bbb0, 112 bytes, complete-object constructor, placed by class name and debug map
    // Ground::Ground(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int)
    void Ground::Ground(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7,
                        int param_8, int param_9, int param_10, int param_11, int param_12, int param_13, int param_14,
                        int param_15, int param_16, int param_17, int param_18, int param_19) {
        Ground(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10,
               param_11, param_12, param_13, param_14, param_15, param_16, param_17, param_18, param_19);
    }

    // 0x10034bc20, 96 bytes, placed by class name and debug map
    // Ground::IsOverlay(int) const
    undefined4 Ground::IsOverlay(int param_1) {
        ulong uVar1;

        uVar1 = (&field_104)->size();
        if (uVar1 <= (ulong)(long)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("size_t(face) < m_colour1.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "Ground.cpp",
                      365, "Face index was out-of-range.");
        }
        return CONCAT31((int3)(field_200 >> 8), (field_200 >> (param_1 & 31U) & 1) != 0);
    }

    // 0x10038eaf0, 1328 bytes, placed by the data it initialises
    // ___cxx_global_var_init.44
    void ___cxx_global_var_init_44() {
        allocator local_200[8];
        allocator local_1f8[8];
        allocator local_1f0[8];
        allocator local_1e8[8];
        allocator local_1e0[8];
        allocator local_1d8[8];
        allocator local_1d0[8];
        allocator local_1c8[8];
        allocator local_1c0[8];
        allocator local_1b8[8];
        allocator local_1b0[8];
        allocator local_1a8[8];
        allocator local_1a0[8];
        undefined8 local_198;
        undefined8 uStack_190;
        undefined8 local_188;
        undefined8 local_178;
        undefined8 uStack_170;
        undefined8 local_168;
        undefined8 local_158;
        undefined8 uStack_150;
        undefined8 local_148;
        undefined8 local_138;
        undefined8 uStack_130;
        undefined8 local_128;
        undefined8 local_118;
        undefined8 uStack_110;
        undefined8 local_108;
        undefined8 local_f8;
        undefined8 uStack_f0;
        undefined8 local_e8;
        undefined8 local_d8;
        undefined8 uStack_d0;
        undefined4 local_c8;
        undefined8 local_b8;
        undefined8 uStack_b0;
        undefined4 local_a8;
        undefined8 local_98;
        undefined8 uStack_90;
        undefined4 local_88;
        undefined8 local_78;
        undefined8 uStack_70;
        undefined4 local_68;
        undefined8 local_58;
        undefined8 uStack_50;
        undefined8 local_48;
        undefined8 uStack_40;
        undefined8 local_38;
        undefined8 uStack_30;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_38 = 12884901889;
        uStack_30 = 30064771077;
        eastl::allocator::allocator(local_200, "EASTL vector");
        new (&Ground::m_defShapeP) eastl::vector<int, eastl::allocator>(&local_38, 4, local_200);
        local_48 = 12884901889;
        uStack_40 = 30064771077;
        eastl::allocator::allocator(local_1f8, "EASTL vector");
        new (&DAT_103936118) eastl::vector<int, eastl::allocator>(&local_48, 4, local_1f8);
        local_58 = 12884901889;
        uStack_50 = 30064771077;
        eastl::allocator::allocator(local_1f0, "EASTL vector");
        new (&DAT_103936138) eastl::vector<int, eastl::allocator>(&local_58, 4, local_1f0);
        local_68 = 6;
        local_78 = 12884901889;
        uStack_70 = 30064771077;
        eastl::allocator::allocator(local_1e8, "EASTL vector");
        new (&DAT_103936158) eastl::vector<int, eastl::allocator>(&local_78, 5, local_1e8);
        local_88 = 6;
        local_98 = 12884901889;
        uStack_90 = 30064771077;
        eastl::allocator::allocator(local_1e0, "EASTL vector");
        new (&DAT_103936178) eastl::vector<int, eastl::allocator>(&local_98, 5, local_1e0);
        local_a8 = 6;
        local_b8 = 12884901889;
        uStack_b0 = 30064771077;
        eastl::allocator::allocator(local_1d8, "EASTL vector");
        new (&DAT_103936198) eastl::vector<int, eastl::allocator>(&local_b8, 5, local_1d8);
        local_c8 = 6;
        local_d8 = 12884901889;
        uStack_d0 = 30064771077;
        eastl::allocator::allocator(local_1d0, "EASTL vector");
        new (&DAT_1039361b8) eastl::vector<int, eastl::allocator>(&local_d8, 5, local_1d0);
        local_e8 = 25769803778;
        local_f8 = 12884901889;
        uStack_f0 = 30064771077;
        eastl::allocator::allocator(local_1c8, "EASTL vector");
        new (&DAT_1039361d8) eastl::vector<int, eastl::allocator>(&local_f8, 6, local_1c8);
        local_108 = 34359738370;
        local_118 = 12884901889;
        uStack_110 = 30064771077;
        eastl::allocator::allocator(local_1c0, "EASTL vector");
        new (&DAT_1039361f8) eastl::vector<int, eastl::allocator>(&local_118, 6, local_1c0);
        local_128 = 34359738370;
        local_138 = 12884901889;
        uStack_130 = 30064771077;
        eastl::allocator::allocator(local_1b8, "EASTL vector");
        new (&DAT_103936218) eastl::vector<int, eastl::allocator>(&local_138, 6, local_1b8);
        local_148 = 51539607563;
        local_158 = 12884901889;
        uStack_150 = 30064771077;
        eastl::allocator::allocator(local_1b0, "EASTL vector");
        new (&DAT_103936238) eastl::vector<int, eastl::allocator>(&local_158, 6, local_1b0);
        local_168 = 51539607563;
        local_178 = 12884901889;
        uStack_170 = 30064771077;
        eastl::allocator::allocator(local_1a8, "EASTL vector");
        new (&DAT_103936258) eastl::vector<int, eastl::allocator>(&local_178, 6, local_1a8);
        local_188 = 60129542157;
        local_198 = 12884901889;
        uStack_190 = 30064771077;
        eastl::allocator::allocator(local_1a0, "EASTL vector");
        new (&DAT_103936278) eastl::vector<int, eastl::allocator>(&local_198, 6, local_1a0);
        ___cxa_atexit(PTR__array_100ee6ed0, &Ground::m_defShapeP, 4294967296);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10038f020, 1696 bytes, placed by the data it initialises
    // ___cxx_global_var_init.55
    void ___cxx_global_var_init_55() {
        allocator local_390[8];
        allocator local_388[8];
        allocator local_380[8];
        allocator local_378[8];
        allocator local_370[8];
        allocator local_368[8];
        allocator local_360[8];
        allocator local_358[8];
        allocator local_350[8];
        allocator local_348[8];
        allocator local_340[8];
        allocator local_338[8];
        allocator local_330[8];
        undefined8 local_328;
        undefined8 uStack_320;
        undefined8 local_318;
        undefined8 uStack_310;
        undefined8 local_308;
        undefined8 uStack_300;
        undefined8 local_2f8;
        undefined8 uStack_2f0;
        undefined8 local_2e8;
        undefined8 uStack_2e0;
        mach_header* local_2d8;
        undefined8 uStack_2d0;
        undefined8 local_2c8;
        undefined8 uStack_2c0;
        undefined8 local_2b8;
        undefined8 uStack_2b0;
        undefined8 local_2a8;
        undefined8 uStack_2a0;
        undefined8 local_298;
        undefined8 uStack_290;
        undefined8 local_288;
        undefined8 uStack_280;
        undefined8 local_278;
        undefined8 uStack_270;
        undefined8 local_268;
        undefined8 uStack_260;
        mach_header* local_258;
        undefined8 uStack_250;
        mach_header* local_248;
        undefined8 uStack_240;
        undefined8 local_238;
        undefined8 uStack_230;
        undefined8 local_228;
        undefined8 uStack_220;
        undefined8 local_218;
        undefined8 uStack_210;
        undefined8 local_208;
        undefined8 uStack_200;
        undefined8 local_1f8;
        undefined8 uStack_1f0;
        undefined8 local_1e8;
        undefined8 uStack_1e0;
        undefined8 local_1d8;
        undefined8 uStack_1d0;
        undefined8 local_1c8;
        undefined8 uStack_1c0;
        undefined8 local_1b8;
        undefined8 uStack_1b0;
        undefined8 local_1a8;
        undefined8 uStack_1a0;
        undefined8 local_198;
        undefined8 uStack_190;
        undefined8 local_188;
        undefined8 uStack_180;
        undefined8 local_178;
        undefined8 uStack_170;
        undefined8 local_168;
        undefined8 uStack_160;
        undefined8 local_158;
        undefined8 uStack_150;
        mach_header* local_148;
        undefined8 uStack_140;
        undefined8 local_138;
        undefined8 uStack_130;
        undefined8 local_128;
        undefined8 uStack_120;
        undefined8 local_118;
        undefined8 uStack_110;
        undefined8 local_108;
        undefined8 uStack_100;
        undefined8 local_f8;
        undefined8 uStack_f0;
        undefined8 local_e8;
        undefined8 uStack_e0;
        undefined8 local_d8;
        undefined8 uStack_d0;
        undefined8 local_c8;
        undefined8 uStack_c0;
        undefined8 local_b8;
        undefined8 uStack_b0;
        undefined8 local_a8;
        undefined8 uStack_a0;
        undefined8 local_98;
        undefined8 uStack_90;
        mach_header* local_88;
        undefined8 uStack_80;
        undefined8 local_78;
        undefined8 uStack_70;
        undefined8 local_68;
        undefined8 uStack_60;
        undefined8 local_58;
        undefined8 uStack_50;
        mach_header* local_48;
        undefined8 uStack_40;
        undefined8 local_38;
        undefined8 uStack_30;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_38 = 0;
        uStack_30 = 12884901889;
        local_48 = &__mh_execute_header;
        uStack_40 = 12884901890;
        eastl::allocator::allocator(local_390, "EASTL vector");
        new (&Ground::m_defShapeF) eastl::vector<int, eastl::allocator>(&local_48, 8, local_390);
        local_58 = 1;
        uStack_50 = 12884901889;
        local_68 = 4294967297;
        uStack_60 = 12884901890;
        eastl::allocator::allocator(local_388, "EASTL vector");
        new (&DAT_1039362b8) eastl::vector<int, eastl::allocator>(&local_68, 8, local_388);
        local_78 = 1;
        uStack_70 = 12884901889;
        local_88 = &__mh_execute_header;
        uStack_80 = 12884901890;
        eastl::allocator::allocator(local_380, "EASTL vector");
        new (&DAT_1039362d8) eastl::vector<int, eastl::allocator>(&local_88, 8, local_380);
        local_98 = 1;
        uStack_90 = 12884901892;
        local_a8 = 0;
        uStack_a0 = 17179869186;
        local_b8 = 0;
        uStack_b0 = 8589934593;
        eastl::allocator::allocator(local_378, "EASTL vector");
        new (&DAT_1039362f8) eastl::vector<int, eastl::allocator>(&local_b8, 12, local_378);
        local_c8 = 4294967297;
        uStack_c0 = 17179869186;
        local_d8 = 0;
        uStack_d0 = 12884901892;
        local_e8 = 0;
        uStack_e0 = 17179869185;
        eastl::allocator::allocator(local_370, "EASTL vector");
        new (&DAT_103936318) eastl::vector<int, eastl::allocator>(&local_e8, 12, local_370);
        local_f8 = 1;
        uStack_f0 = 17179869186;
        local_108 = 1;
        uStack_100 = 8589934593;
        local_118 = 0;
        uStack_110 = 12884901892;
        eastl::allocator::allocator(local_368, "EASTL vector");
        new (&DAT_103936338) eastl::vector<int, eastl::allocator>(&local_118, 12, local_368);
        local_128 = 1;
        uStack_120 = 12884901892;
        local_138 = 1;
        uStack_130 = 17179869185;
        local_148 = &__mh_execute_header;
        uStack_140 = 17179869186;
        eastl::allocator::allocator(local_360, "EASTL vector");
        new (&DAT_103936358) eastl::vector<int, eastl::allocator>(&local_148, 12, local_360);
        local_158 = 1;
        uStack_150 = 12884901893;
        local_168 = 1;
        uStack_160 = 21474836484;
        local_178 = 17179869184;
        uStack_170 = 21474836482;
        local_188 = 17179869184;
        uStack_180 = 8589934593;
        eastl::allocator::allocator(local_358, "EASTL vector");
        new (&DAT_103936378) eastl::vector<int, eastl::allocator>(&local_188, 16, local_358);
        local_198 = 1;
        uStack_190 = 21474836484;
        local_1a8 = 17179869184;
        uStack_1a0 = 21474836483;
        local_1b8 = 17179869184;
        uStack_1b0 = 12884901890;
        local_1c8 = 17179869184;
        uStack_1c0 = 8589934593;
        eastl::allocator::allocator(local_350, "EASTL vector");
        new (&DAT_103936398) eastl::vector<int, eastl::allocator>(&local_1c8, 16, local_350);
        local_1d8 = 17179869185;
        uStack_1d0 = 21474836483;
        local_1e8 = 17179869185;
        uStack_1e0 = 12884901890;
        local_1f8 = 17179869185;
        uStack_1f0 = 8589934593;
        local_208 = 0;
        uStack_200 = 21474836484;
        eastl::allocator::allocator(local_348, "EASTL vector");
        new (&DAT_1039363b8) eastl::vector<int, eastl::allocator>(&local_208, 16, local_348);
        local_218 = 17179869185;
        uStack_210 = 12884901890;
        local_228 = 21474836481;
        uStack_220 = 12884901892;
        local_238 = 1;
        uStack_230 = 12884901893;
        local_248 = &__mh_execute_header;
        uStack_240 = 17179869186;
        local_258 = &__mh_execute_header;
        uStack_250 = 21474836484;
        local_268 = 0;
        uStack_260 = 21474836481;
        eastl::allocator::allocator(local_340, "EASTL vector");
        new (&DAT_1039363d8) eastl::vector<int, eastl::allocator>(&local_268, 24, local_340);
        local_278 = 17179869184;
        uStack_270 = 12884901890;
        local_288 = 21474836480;
        uStack_280 = 12884901892;
        local_298 = 0;
        uStack_290 = 12884901893;
        local_2a8 = 4294967297;
        uStack_2a0 = 17179869186;
        local_2b8 = 4294967297;
        uStack_2b0 = 21474836484;
        local_2c8 = 1;
        uStack_2c0 = 21474836481;
        eastl::allocator::allocator(local_338, "EASTL vector");
        new (&DAT_1039363f8) eastl::vector<int, eastl::allocator>(&local_2c8, 24, local_338);
        local_2d8 = &__mh_execute_header;
        uStack_2d0 = 21474836482;
        local_2e8 = 21474836480;
        uStack_2e0 = 12884901890;
        local_2f8 = 17179869184;
        uStack_2f0 = 12884901893;
        local_308 = 0;
        uStack_300 = 12884901892;
        local_318 = 1;
        uStack_310 = 21474836481;
        local_328 = 1;
        uStack_320 = 17179869189;
        eastl::allocator::allocator(local_330, "EASTL vector");
        new (&DAT_103936418) eastl::vector<int, eastl::allocator>(&local_328, 24, local_330);
        ___cxa_atexit(PTR__array_100ee6ed0, &Ground::m_defShapeF, 4294967296);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::oldscape::dash3d
