// libs/oldscape/osrendercore/Model.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.osrendercore

#include "Model.h"
#include "libs/graphics/runetek7/model/Model.h"

namespace jag {
    // 0x1001b9550, 880 bytes, placed by class name
    // Model::Init(unsigned int, unsigned int, unsigned int, unsigned int, bool, int const*, int const*, int const*, int const*, int const*, int const*, int const*, int const*, int const*, int const*, int const*, int const*, unsigned char const*, short const*, unsigned char const*, signed char const*, int const*, int const*, signed char, signed char, signed char, unsigned char, unsigned short)
    void Model::Init(undefined4 param_1, uint param_2, uint param_3, uint param_4, undefined1 param_5, int* param_6,
                     int* param_7, int* param_8, int* param_9, int* param_10, int* param_11, int* param_12,
                     int* param_13, long param_14, int* param_15, int* param_16, int* param_17, uchar* param_18,
                     short* param_19, uchar* param_20, signed* param_21, undefined8 param_22, undefined8 param_23,
                     undefined1 param_25, undefined1 param_26, undefined1 param_27, char param_28, ushort param_29) {
        Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>* this_00;
        int iVar1;
        int* piVar2;
        undefined4* puVar3;
        array<TriangleVertexData, 3ul>* paVar4;
        long lVar5;
        long lVar6;
        long lVar7;
        ushort uVar8;
        short sVar9;
        int iVar10;
        ulong uVar11;

        field_0 = param_1;
        field_4 = param_2;
        field_8 = param_3;
        field_12 = param_4;
        m_temporary = param_5;
        if (param_28 == '\0') {
            *(undefined4*)m_tintMode = 0;
        } else {
            m_tintMode[0] = param_25;
            m_tintMode[1] = param_26;
            m_tintMode[2] = param_27;
            m_tintMode[3] = param_28;
        }
        CopyJavaArray<int, int const>((Array*)&field_48, param_6, param_2, false);
        CopyJavaArray<int, int const>((Array*)&field_72, param_7, field_4, false);
        CopyJavaArray<int, int const>((Array*)&field_96, param_8, field_4, false);
        CopyJavaArray<int, int const>((Array*)&field_288, param_15, field_12, false);
        CopyJavaArray<int, int const>((Array*)&field_312, param_16, field_12, false);
        CopyJavaArray<int, int const>((Array*)&field_336, param_17, field_12, false);
        CopyJavaArray<int, int const>((Array*)&field_120, param_9, field_8, false);
        CopyJavaArray<int, int const>((Array*)&field_144, param_10, field_8, false);
        CopyJavaArray<int, int const>((Array*)&field_168, param_11, field_8, false);
        CopyJavaArray<signed char, signed char const>((Array*)&field_192, param_21, field_8, true);
        CopyJavaArray<short, short const>((Array*)&field_360, param_19, field_8, true);
        CopyJavaArray<unsigned char, unsigned char const>((Array*)&field_384, param_20, field_8, true);
        CopyJavaArray<unsigned char, unsigned char const>((Array*)&field_216, param_18, field_8, false);
        this_00 = (Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>*)(m_tintMode + 8);
        this_00->set_min_size((ulong)field_8, 5);
        if (field_8 != 0) {
            uVar11 = 0;
            do {
                if (*(int*)(param_14 + uVar11 * 4) == -2) {
                    puVar3 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&field_120, uVar11);
                    *puVar3 = 4294967294;
                    puVar3 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&field_144, uVar11);
                    *puVar3 = 4294967294;
                    puVar3 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&field_168, uVar11);
                    *puVar3 = 4294967294;
                } else {
                    paVar4 = (array<TriangleVertexData, 3ul>*)
                        Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>::operator[](this_00, uVar11);
                    lVar5 = std::array<TriangleVertexData, 3ul>::operator[](paVar4, 0);
                    paVar4 = (array<TriangleVertexData, 3ul>*)
                        Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>::operator[](this_00, uVar11);
                    lVar6 = std::array<TriangleVertexData, 3ul>::operator[](paVar4, 1);
                    paVar4 = (array<TriangleVertexData, 3ul>*)
                        Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>::operator[](this_00, uVar11);
                    lVar7 = std::array<TriangleVertexData, 3ul>::operator[](paVar4, 2);
                    iVar1 = *param_12;
                    *(short*)(lVar5 + 8) = (short)iVar1;
                    iVar10 = *(int*)(param_14 + uVar11 * 4);
                    piVar2 = param_13;
                    if (iVar10 == -1) {
                        iVar10 = iVar1;
                        piVar2 = param_12;
                    }
                    *(short*)(lVar6 + 8) = (short)*piVar2;
                    *(short*)(lVar7 + 8) = (short)iVar10;
                    if (param_19 == (short*)0) {
                        if (param_18 != (uchar*)0)
                            goto LAB_1001b9840;
                    LAB_1001b985a:
                        sVar9 = 255;
                    } else {
                        sVar9 = 255;
                        if ((param_19[uVar11] == -1) && (param_18 != (uchar*)0)) {
                        LAB_1001b9840:
                            if (param_18[uVar11] == 0)
                                goto LAB_1001b985a;
                            sVar9 = 256 - (ushort)param_18[uVar11];
                        }
                    }
                    uVar8 = (uVar11 < param_29 && param_28 != '\0') ^ 255 | sVar9 << 8;
                    *(ushort*)(lVar7 + 10) = uVar8;
                    *(ushort*)(lVar6 + 10) = uVar8;
                    *(ushort*)(lVar5 + 10) = uVar8;
                    *(undefined2*)(lVar5 + 6) = 0;
                    *(undefined2*)(lVar6 + 6) = 0;
                    *(undefined2*)(lVar7 + 6) = 0;
                    *(undefined4*)(lVar5 + 12) = 0;
                    *(undefined4*)(lVar6 + 12) = 0;
                    *(undefined4*)(lVar7 + 12) = 0;
                }
                uVar11 = uVar11 + 1;
                param_12 = param_12 + 1;
                param_13 = param_13 + 1;
            } while (uVar11 < field_8);
        }
    }

    // 0x1001b9aa0, 96 bytes, placed by class name
    // Model::TransformVertices(int, int, int, int, int, int, int, int, int, int, int) const
    void Model::TransformVertices(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                  int param_7, int param_8, int param_9, int param_10, int param_11) {
        TransformVerticesScalar(this, 0, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8,
                                param_9, param_10, param_11);
    }

    // 0x1001b9b00, 688 bytes, placed by class name
    // Model::TransformVerticesScalar(unsigned int, int, int, int, int, int, int, int, int, int, int, int) const
    void Model::TransformVerticesScalar(uint param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                        int param_7, int param_8, int param_9, int param_10, int param_11,
                                        int param_12) {
        ulong uVar1;
        short sVar3;
        int iVar4;
        int* piVar5;
        int iVar6;
        long lVar7;
        int iVar8;
        uint uVar9;
        int iVar10;
        long lVar11;

        if (param_1 < field_4) {
            lVar11 = 0;
            do {
                uVar1 = (ulong)param_1 + lVar11;
                piVar5 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_48, uVar1);
                iVar4 = *piVar5;
                piVar5 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_72, uVar1);
                iVar10 = *piVar5;
                piVar5 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_96, uVar1);
                iVar6 = iVar4 * param_8 + *piVar5 * param_7;
                iVar4 = *piVar5 * param_8 - iVar4 * param_7;
                *(short*)(&internal::wx + lVar11 * 2 + (ulong)param_1 * 2) = (short)((uint)iVar6 >> 16);
                *(short*)(&internal::wy + lVar11 * 2 + (ulong)param_1 * 2) = (short)iVar10;
                *(short*)(&internal::wz + lVar11 * 2 + (ulong)param_1 * 2) = (short)((uint)iVar4 >> 16);
                iVar6 = (iVar6 >> 16) + param_9;
                iVar10 = iVar10 + param_10;
                iVar4 = (iVar4 >> 16) + param_11;
                iVar8 = iVar6 * param_6 + iVar4 * param_5;
                iVar4 = iVar4 * param_6 - iVar6 * param_5 >> 16;
                iVar6 = iVar10 * param_4 - iVar4 * param_3;
                iVar4 = iVar4 * param_4 + iVar10 * param_3;
                sVar3 = (short)((uint)iVar4 >> 16);
                *(short*)(&internal::cz + lVar11 * 2 + (ulong)param_1 * 2) = sVar3;
                *(short*)(&internal::sortz + lVar11 * 2 + (ulong)param_1 * 2) = sVar3 - (short)param_12;
                uVar9 = iVar4 >> 16 | 1;
                *(short*)(&internal::cx + lVar11 * 2 + (ulong)param_1 * 2) = (short)((uint)iVar8 >> 16);
                *(short*)(&internal::cy + lVar11 * 2 + (ulong)param_1 * 2) = (short)((uint)iVar6 >> 16);
                iVar4 = (iVar8 >> 16) * param_2;
                *(short*)(&internal::sx + lVar11 * 2 + (ulong)param_1 * 2) = (short)(iVar4 / (int)uVar9);
                iVar10 = (iVar6 >> 16) * param_2;
                *(short*)(&internal::sy + lVar11 * 2 + (ulong)param_1 * 2) = (short)(iVar10 / (int)uVar9);
                *(float*)(&internal::sxf + lVar11 * 4 + (ulong)param_1 * 4) = (float)iVar4 * (1.0 / (float)(int)uVar9);
                *(float*)(&internal::syf + lVar11 * 4 + (ulong)param_1 * 4) = (float)iVar10 * (1.0 / (float)(int)uVar9);
                lVar7 = (ulong)param_1 + lVar11;
                lVar11 = lVar11 + 1;
            } while (lVar7 + 1U < (ulong)field_4);
        }
    }

    // 0x1001b9db0, 512 bytes, placed by class name
    // Model::DummySortTriangles()
    /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
    /* Model::DummySortTriangles() */

    void Model::DummySortTriangles() {
        Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>* this_00;
        int* piVar1;
        array<TriangleVertexData, 3ul>* paVar2;
        undefined2* puVar3;
        undefined2* puVar4;
        undefined2* puVar5;
        long lVar6;
        long lVar7;
        ulong uVar8;
        long lVar9;

        _zsize = 0;
        internal::minZ = 0;
        internal::maxZ = 0;
        if (field_8 != 0) {
            this_00 = (Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>*)(m_tintMode + 8);
            uVar8 = 0;
            do {
                piVar1 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_120, uVar8);
                lVar7 = (long)*piVar1;
                piVar1 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_144, uVar8);
                lVar6 = (long)*piVar1;
                piVar1 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_168, uVar8);
                if ((lVar7 != -2) &&
                    (lVar9 = (long)*piVar1,
                     (*(float*)(&internal::sxf + lVar9 * 4) - *(float*)(&internal::sxf + lVar6 * 4)) *
                             (*(float*)(&internal::syf + lVar7 * 4) - *(float*)(&internal::syf + lVar6 * 4)) <
                         (*(float*)(&internal::syf + lVar9 * 4) - *(float*)(&internal::syf + lVar6 * 4)) *
                             (*(float*)(&internal::sxf + lVar7 * 4) - *(float*)(&internal::sxf + lVar6 * 4)))) {
                    paVar2 = (array<TriangleVertexData, 3ul>*)
                        Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>::operator[](this_00, uVar8);
                    puVar3 = (undefined2*)std::array<TriangleVertexData, 3ul>::operator[](paVar2, 0);
                    paVar2 = (array<TriangleVertexData, 3ul>*)
                        Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>::operator[](this_00, uVar8);
                    puVar4 = (undefined2*)std::array<TriangleVertexData, 3ul>::operator[](paVar2, 1);
                    paVar2 = (array<TriangleVertexData, 3ul>*)
                        Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>::operator[](this_00, uVar8);
                    puVar5 = (undefined2*)std::array<TriangleVertexData, 3ul>::operator[](paVar2, 2);
                    *puVar3 = *(undefined2*)(&internal::cx + lVar7 * 2);
                    puVar3[1] = *(undefined2*)(&internal::cy + lVar7 * 2);
                    puVar3[2] = *(undefined2*)(&internal::cz + lVar7 * 2);
                    *puVar4 = *(undefined2*)(&internal::cx + lVar6 * 2);
                    puVar4[1] = *(undefined2*)(&internal::cy + lVar6 * 2);
                    puVar4[2] = *(undefined2*)(&internal::cz + lVar6 * 2);
                    *puVar5 = *(undefined2*)(&internal::cx + lVar9 * 2);
                    puVar5[1] = *(undefined2*)(&internal::cy + lVar9 * 2);
                    puVar5[2] = *(undefined2*)(&internal::cz + lVar9 * 2);
                    lVar6 = (long)internal::zsize;
                    _zsize = CONCAT22(internal::zsize_2, internal::zsize + 1);
                    (&internal::zlist)[lVar6] = (short)uVar8;
                }
                uVar8 = uVar8 + 1;
            } while (uVar8 < field_8);
        }
    }

    // 0x1001b9fb0, 80 bytes, placed by class name
    // Model::GetNumOutlineVerts() const
    int Model::GetNumOutlineVerts() {
        int iVar1;
        long lVar2;
        short* psVar3;

        iVar1 = 0;
        if (internal::minZ <= internal::maxZ) {
            psVar3 = &internal::zsize + internal::maxZ;
            lVar2 = (long)internal::maxZ + 1;
            iVar1 = 0;
            do {
                iVar1 = iVar1 + *psVar3 * 15;
                lVar2 = lVar2 + -1;
                psVar3 = psVar3 + -1;
            } while (internal::minZ < lVar2);
        }
        return iVar1;
    }

    // 0x1001ba000, 16 bytes, placed by class name
    // Model::GetTintMode() const
    undefined1* Model::GetTintMode() {
        return m_tintMode;
    }

    // 0x1001ba010, 1184 bytes, placed by class name
    // Model::RenderOutline(unsigned int, TriangleVertexData*, int, unsigned short, unsigned short)
    int Model::RenderOutline(uint param_1, TriangleVertexData* param_2, int param_3, ushort param_4, ushort param_5) {
        short sVar1;
        short sVar2;
        short sVar3;
        short sVar4;
        bool bVar5;
        short sVar6;
        int iVar7;
        array<TriangleVertexData, 3ul>* this_00;
        short* psVar8;
        short* psVar9;
        short* psVar10;
        short* psVar11;
        long lVar12;
        short* psVar13;
        long lVar14;
        uint uVar15;
        uint uVar16;
        undefined6 in_register_00000082;
        long lVar17;
        ulong uVar18;
        ulong uVar19;
        uint uVar20;
        ulong local_80;
        ulong local_78;
        short local_62[9];
        short local_50;
        short local_4e;
        short local_4c;
        short local_4a;
        short local_48;
        short local_46;
        short local_44;
        short local_42;
        short local_40;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar20 = param_1;
        if (internal::minZ <= internal::maxZ) {
            lVar17 = (long)internal::maxZ;
            do {
                sVar1 = (&internal::zsize)[lVar17];
                if (0 < sVar1) {
                    uVar18 = 0;
                    do {
                        this_00 = (array<TriangleVertexData, 3ul>*)
                            Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>::operator[](
                                (Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>*)(m_tintMode + 8),
                                (long)(short)(&internal::zlist)[lVar17 * 512 + uVar18]);
                        psVar8 = (short*)std::array<TriangleVertexData, 3ul>::operator[](this_00, 1);
                        sVar2 = psVar8[1];
                        psVar9 = (short*)std::array<TriangleVertexData, 3ul>::operator[](this_00, 0);
                        if (sVar2 < psVar9[1]) {
                        LAB_1001ba15d:
                            uVar19 = 1;
                            uVar16 = 2;
                            uVar15 = 0;
                        } else {
                            uVar19 = 0;
                            uVar16 = 1;
                            uVar15 = 2;
                            if ((sVar2 == psVar9[1]) && (*psVar8 < *psVar9))
                                goto LAB_1001ba15d;
                        }
                        local_78 = (ulong)uVar16;
                        local_80 = (ulong)uVar15;
                        psVar8 = (short*)std::array<TriangleVertexData, 3ul>::operator[](this_00, 2);
                        sVar2 = psVar8[1];
                        psVar9 = (short*)std::array<TriangleVertexData, 3ul>::operator[](this_00, uVar19);
                        if ((sVar2 < psVar9[1]) || ((sVar2 == psVar9[1] && (*psVar8 < *psVar9)))) {
                            uVar19 = 2;
                            local_78 = 0;
                            local_80 = 1;
                        }
                        psVar10 = (short*)std::array<TriangleVertexData, 3ul>::operator[](this_00, uVar19);
                        psVar11 = (short*)std::array<TriangleVertexData, 3ul>::operator[](this_00, local_78);
                        psVar9 = (short*)std::array<TriangleVertexData, 3ul>::operator[](this_00, local_80);
                        psVar8 = psVar10 + 2;
                        iVar7 = ((int)psVar10[2] * (int)CONCAT62(in_register_00000082, param_4)) /
                                (((param_3 - (param_3 + -1024 >> 31)) + -1024 >> 1) + 1024);
                        sVar2 = *psVar10;
                        if (iVar7 < 2) {
                            iVar7 = 1;
                        }
                        sVar6 = (short)iVar7;
                        sVar3 = psVar10[1];
                        sVar4 = psVar10[2];
                        local_62[0] = *psVar10 + sVar6;
                        local_62[1] = psVar10[1] - sVar6;
                        local_62[2] = psVar10[2];
                        if (*psVar9 < *psVar10) {
                            local_62[3] = *psVar10 + sVar6;
                            local_62[4] = psVar10[1] + sVar6;
                            psVar13 = psVar8;
                        } else {
                            local_62[3] = *psVar9 + sVar6;
                            local_62[4] = psVar9[1] - sVar6;
                            psVar13 = psVar9 + 2;
                        }
                        local_62[5] = *psVar13;
                        local_62[6] = *psVar9 + sVar6;
                        local_62[7] = psVar9[1] + sVar6;
                        local_62[8] = psVar9[2];
                        if (psVar11[1] < psVar9[1]) {
                            local_50 = *psVar9 - sVar6;
                            local_4e = psVar9[1] + sVar6;
                        } else {
                            local_50 = *psVar11 + sVar6;
                            local_4e = psVar11[1] + sVar6;
                            psVar9 = psVar11;
                        }
                        local_4c = psVar9[2];
                        local_4a = *psVar11 - sVar6;
                        local_48 = psVar11[1] + sVar6;
                        local_46 = psVar11[2];
                        if (*psVar10 < *psVar11) {
                            local_44 = *psVar10 - sVar6;
                            local_42 = psVar10[1] + sVar6;
                        } else {
                            psVar8 = psVar11 + 2;
                            local_44 = *psVar11 - sVar6;
                            local_42 = psVar11[1] - sVar6;
                        }
                        local_40 = *psVar8;
                        lVar12 = 0;
                        do {
                            lVar14 = (ulong)uVar20 * 16;
                            *(undefined2*)(param_2 + lVar14 + 6) = 0;
                            *(ushort*)(param_2 + lVar14 + 8) = param_5;
                            *(undefined2*)(param_2 + lVar14 + 10) = 65535;
                            *(short*)(param_2 + lVar14) = sVar2 - sVar6;
                            *(short*)(param_2 + lVar14 + 2) = sVar3 - sVar6;
                            *(short*)(param_2 + lVar14 + 4) = sVar4;
                            lVar14 = (ulong)(uVar20 + 1) * 16;
                            *(undefined2*)(param_2 + lVar14 + 6) = 0;
                            *(ushort*)(param_2 + lVar14 + 8) = param_5;
                            *(undefined2*)(param_2 + lVar14 + 10) = 65535;
                            *(undefined2*)(param_2 + lVar14) = *(undefined2*)((long)local_62 + lVar12 + 6);
                            *(undefined2*)(param_2 + lVar14 + 2) = *(undefined2*)((long)local_62 + lVar12 + 8);
                            *(undefined2*)(param_2 + lVar14 + 4) = *(undefined2*)((long)local_62 + lVar12 + 10);
                            lVar14 = (ulong)(uVar20 + 2) * 16;
                            *(undefined2*)(param_2 + lVar14 + 6) = 0;
                            *(ushort*)(param_2 + lVar14 + 8) = param_5;
                            *(undefined2*)(param_2 + lVar14 + 10) = 65535;
                            *(undefined2*)(param_2 + lVar14) = *(undefined2*)((long)local_62 + lVar12);
                            *(undefined2*)(param_2 + lVar14 + 2) = *(undefined2*)((long)local_62 + lVar12 + 2);
                            *(undefined2*)(param_2 + lVar14 + 4) = *(undefined2*)((long)local_62 + lVar12 + 4);
                            uVar20 = uVar20 + 3;
                            lVar12 = lVar12 + 6;
                        } while (lVar12 != 30);
                        uVar18 = uVar18 + 1;
                    } while (uVar18 != (uint)(int)sVar1);
                }
                bVar5 = internal::minZ < lVar17;
                lVar17 = lVar17 + -1;
            } while (bVar5);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar20 - param_1;
    }

    // 0x1001ba4c0, 2048 bytes, placed by class name
    // Model::RenderTriangles(unsigned int, TriangleVertexData*)
    int Model::RenderTriangles(uint param_1, TriangleVertexData* param_2) {
        int* piVar1;
        Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>* this_00;
        short sVar2;
        short sVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        char cVar9;
        array<TriangleVertexData, 3ul>* paVar10;
        undefined8* puVar11;
        undefined4* puVar12;
        char* pcVar13;
        long lVar14;
        long lVar15;
        long lVar16;
        int iVar17;
        undefined2* puVar18;
        int iVar19;
        uint uVar20;
        ulong uVar21;
        int iVar22;
        ulong uVar23;
        bool bVar24;
        int aiStack_298[112];
        undefined4* local_d8;
        int local_c8;
        int local_c4;
        int local_c0;
        int local_a4;
        int* local_a0;
        undefined8 local_98;
        undefined8 uStack_70;
        undefined8 local_68;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        iVar19 = 0;
        if (internal::minZ <= internal::maxZ) {
            cVar9 = (&field_192)->empty();
            if (cVar9 == '\0') {
                local_68 = 0;
                uStack_70 = 0;
                local_98 = 0;
                if (internal::minZ <= internal::maxZ) {
                    puVar18 = &internal::zlist + (long)internal::maxZ * 512;
                    lVar14 = (long)internal::maxZ;
                    do {
                        sVar2 = (&internal::zsize)[lVar14];
                        if (0 < sVar2) {
                            uVar23 = 0;
                            do {
                                sVar3 = puVar18[uVar23];
                                pcVar13 = (char*)Array<signed char, eastl::allocator>::operator[](
                                    (Array<signed char, eastl::allocator>*)&field_192, (long)sVar3);
                                cVar9 = *pcVar13;
                                lVar15 = (long)cVar9;
                                iVar19 = *(int*)((long)&local_68 + lVar15 * 4);
                                *(int*)((long)&local_68 + lVar15 * 4) = iVar19 + 1;
                                (&RenderTriangles(unsigned int,
                                                  TriangleVertexData*)::poly)[lVar15 * 2000 + (long)iVar19] =
                                    (int)sVar3;
                                if (lVar15 < 10) {
                                    piVar1 = (int*)((long)&local_98 + lVar15 * 4);
                                    *piVar1 = *piVar1 + (int)lVar14;
                                } else {
                                    if (cVar9 == '\n') {
                                        puVar12 = &RenderTriangles(unsigned int, TriangleVertexData*)::pdepth;
                                    } else {
                                        puVar12 = &RenderTriangles(unsigned int, TriangleVertexData*)::pdepth2;
                                    }
                                    puVar12[iVar19] = (int)lVar14;
                                }
                                uVar23 = uVar23 + 1;
                            } while ((uint)(int)sVar2 != uVar23);
                        }
                        puVar18 = puVar18 + -512;
                        bVar24 = internal::minZ < lVar14;
                        lVar14 = lVar14 + -1;
                    } while (bVar24);
                }
                if ((0 < local_68._4_4_) || (local_c8 = 0, 0 < (int)0)) {
                    local_c8 = ((int)0 + local_98._4_4_) / ((int)0 + local_68._4_4_);
                }
                uVar23 = (ulong)param_1;
                if ((0 < (0)._4_4_) || (local_c4 = 0, 0 < (int)0)) {
                    local_c4 = ((int)0 + (0)._4_4_) / ((int)0 + (0)._4_4_);
                }
                if ((0 < (int)0) || (local_c0 = 0, 0 < (int)0)) {
                    local_c0 = ((int)0 + (int)0) / ((int)0 + (int)0);
                }
                iVar19 = (0)._4_4_;
                bVar24 = (int)0 == 0;
                local_a4 = (int)0;
                if (bVar24) {
                    local_a4 = (0)._4_4_;
                }
                local_d8 = (undefined4*)&DAT_104221300;
                if (bVar24) {
                    local_d8 = &DAT_104223240;
                }
                local_a0 = &RenderTriangles(unsigned int, TriangleVertexData*)::pdepth;
                if (bVar24) {
                    local_a0 = &RenderTriangles(unsigned int, TriangleVertexData*)::pdepth2;
                }
                iVar17 = -1000;
                if (0 < local_a4) {
                    iVar17 = *local_a0;
                }
                puVar12 = &RenderTriangles(unsigned int, TriangleVertexData*)::poly;
                this_00 = (Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>*)(m_tintMode + 8);
                lVar14 = 0;
                iVar22 = 0;
                do {
                    if (lVar14 == 0) {
                        while (local_c8 < iVar17) {
                            lVar16 = uVar23 * 16;
                            lVar15 = (long)iVar22;
                            iVar22 = iVar22 + 1;
                            paVar10 = (array<TriangleVertexData, 3ul>*)
                                Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>::operator[](
                                    this_00, (long)(int)local_d8[lVar15]);
                            puVar11 = (undefined8*)std::array<TriangleVertexData, 3ul>::operator[](paVar10, 0);
                            uVar4 = puVar11[1];
                            uVar5 = puVar11[2];
                            uVar6 = puVar11[3];
                            uVar7 = puVar11[4];
                            uVar8 = puVar11[5];
                            *(undefined8*)(param_2 + lVar16) = *puVar11;
                            *(undefined8*)(param_2 + lVar16 + 8) = uVar4;
                            *(undefined8*)(param_2 + lVar16 + 16) = uVar5;
                            *(undefined8*)(param_2 + lVar16 + 16 + 8) = uVar6;
                            *(undefined8*)(param_2 + lVar16 + 32) = uVar7;
                            *(undefined8*)(param_2 + lVar16 + 32 + 8) = uVar8;
                            if ((iVar22 == local_a4) && (local_d8 != &DAT_104223240)) {
                                iVar22 = 0;
                                local_d8 = &DAT_104223240;
                                local_a0 = &RenderTriangles(unsigned int, TriangleVertexData*)::pdepth2;
                                local_a4 = iVar19;
                            }
                            iVar17 = -1000;
                            if (iVar22 < local_a4) {
                                iVar17 = local_a0[iVar22];
                            }
                            uVar23 = (ulong)((int)uVar23 + 3);
                        }
                    }
                    while ((lVar14 == 3 && (local_c4 < iVar17))) {
                        lVar16 = uVar23 * 16;
                        lVar15 = (long)iVar22;
                        iVar22 = iVar22 + 1;
                        paVar10 = (array<TriangleVertexData, 3ul>*)
                            Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>::operator[](
                                this_00, (long)(int)local_d8[lVar15]);
                        puVar11 = (undefined8*)std::array<TriangleVertexData, 3ul>::operator[](paVar10, 0);
                        uVar4 = puVar11[1];
                        uVar5 = puVar11[2];
                        uVar6 = puVar11[3];
                        uVar7 = puVar11[4];
                        uVar8 = puVar11[5];
                        *(undefined8*)(param_2 + lVar16) = *puVar11;
                        *(undefined8*)(param_2 + lVar16 + 8) = uVar4;
                        *(undefined8*)(param_2 + lVar16 + 16) = uVar5;
                        *(undefined8*)(param_2 + lVar16 + 16 + 8) = uVar6;
                        *(undefined8*)(param_2 + lVar16 + 32) = uVar7;
                        *(undefined8*)(param_2 + lVar16 + 32 + 8) = uVar8;
                        if ((iVar22 == local_a4) && (local_d8 != &DAT_104223240)) {
                            iVar22 = 0;
                            local_d8 = &DAT_104223240;
                            local_a0 = &RenderTriangles(unsigned int, TriangleVertexData*)::pdepth2;
                            local_a4 = iVar19;
                        }
                        iVar17 = -1000;
                        if (iVar22 < local_a4) {
                            iVar17 = local_a0[iVar22];
                        }
                        uVar23 = (ulong)((int)uVar23 + 3);
                    }
                    if (lVar14 == 5) {
                        while (local_c0 < iVar17) {
                            lVar16 = uVar23 * 16;
                            lVar15 = (long)iVar22;
                            iVar22 = iVar22 + 1;
                            paVar10 = (array<TriangleVertexData, 3ul>*)
                                Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>::operator[](
                                    this_00, (long)(int)local_d8[lVar15]);
                            puVar11 = (undefined8*)std::array<TriangleVertexData, 3ul>::operator[](paVar10, 0);
                            uVar4 = puVar11[1];
                            uVar5 = puVar11[2];
                            uVar6 = puVar11[3];
                            uVar7 = puVar11[4];
                            uVar8 = puVar11[5];
                            *(undefined8*)(param_2 + lVar16) = *puVar11;
                            *(undefined8*)(param_2 + lVar16 + 8) = uVar4;
                            *(undefined8*)(param_2 + lVar16 + 16) = uVar5;
                            *(undefined8*)(param_2 + lVar16 + 16 + 8) = uVar6;
                            *(undefined8*)(param_2 + lVar16 + 32) = uVar7;
                            *(undefined8*)(param_2 + lVar16 + 32 + 8) = uVar8;
                            if ((iVar22 == local_a4) && (local_d8 != &DAT_104223240)) {
                                iVar22 = 0;
                                local_d8 = &DAT_104223240;
                                local_a0 = &RenderTriangles(unsigned int, TriangleVertexData*)::pdepth2;
                                local_a4 = iVar19;
                            }
                            iVar17 = -1000;
                            if (iVar22 < local_a4) {
                                iVar17 = local_a0[iVar22];
                            }
                            uVar23 = (ulong)((int)uVar23 + 3);
                        }
                    }
                    uVar20 = *(uint*)((long)&local_68 + lVar14 * 4);
                    if (0 < (int)uVar20) {
                        uVar21 = 0;
                        do {
                            lVar15 = uVar23 * 16;
                            paVar10 = (array<TriangleVertexData, 3ul>*)
                                Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>::operator[](
                                    this_00, (long)(int)puVar12[uVar21]);
                            puVar11 = (undefined8*)std::array<TriangleVertexData, 3ul>::operator[](paVar10, 0);
                            uVar4 = puVar11[1];
                            uVar5 = puVar11[2];
                            uVar6 = puVar11[3];
                            uVar7 = puVar11[4];
                            uVar8 = puVar11[5];
                            *(undefined8*)(param_2 + lVar15) = *puVar11;
                            *(undefined8*)(param_2 + lVar15 + 8) = uVar4;
                            *(undefined8*)(param_2 + lVar15 + 16) = uVar5;
                            *(undefined8*)(param_2 + lVar15 + 16 + 8) = uVar6;
                            *(undefined8*)(param_2 + lVar15 + 32) = uVar7;
                            *(undefined8*)(param_2 + lVar15 + 32 + 8) = uVar8;
                            uVar23 = (ulong)((int)uVar23 + 3);
                            uVar21 = uVar21 + 1;
                        } while (uVar20 != uVar21);
                    }
                    uVar20 = (uint)uVar23;
                    lVar14 = lVar14 + 1;
                    puVar12 = puVar12 + 2000;
                } while (lVar14 != 10);
                while (iVar17 != -1000) {
                    lVar15 = uVar23 * 16;
                    lVar14 = (long)iVar22;
                    iVar22 = iVar22 + 1;
                    paVar10 = (array<TriangleVertexData, 3ul>*)
                        Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>::operator[](
                            this_00, (long)(int)local_d8[lVar14]);
                    puVar11 = (undefined8*)std::array<TriangleVertexData, 3ul>::operator[](paVar10, 0);
                    uVar4 = puVar11[1];
                    uVar5 = puVar11[2];
                    uVar6 = puVar11[3];
                    uVar7 = puVar11[4];
                    uVar8 = puVar11[5];
                    *(undefined8*)(param_2 + lVar15) = *puVar11;
                    *(undefined8*)(param_2 + lVar15 + 8) = uVar4;
                    *(undefined8*)(param_2 + lVar15 + 16) = uVar5;
                    *(undefined8*)(param_2 + lVar15 + 16 + 8) = uVar6;
                    *(undefined8*)(param_2 + lVar15 + 32) = uVar7;
                    *(undefined8*)(param_2 + lVar15 + 32 + 8) = uVar8;
                    if ((iVar22 == local_a4) && (local_d8 != &DAT_104223240)) {
                        iVar22 = 0;
                        local_d8 = &DAT_104223240;
                        local_a0 = &RenderTriangles(unsigned int, TriangleVertexData*)::pdepth2;
                        local_a4 = iVar19;
                    }
                    iVar17 = -1000;
                    if (iVar22 < local_a4) {
                        iVar17 = local_a0[iVar22];
                    }
                    uVar20 = (int)uVar23 + 3;
                    uVar23 = (ulong)uVar20;
                }
            } else {
                uVar20 = param_1;
                if (internal::minZ <= internal::maxZ) {
                    puVar18 = &internal::zlist + (long)internal::maxZ * 512;
                    uVar23 = (ulong)param_1;
                    lVar14 = (long)internal::maxZ;
                    do {
                        sVar2 = (&internal::zsize)[lVar14];
                        if (0 < sVar2) {
                            uVar21 = 0;
                            do {
                                lVar15 = uVar23 * 16;
                                paVar10 = (array<TriangleVertexData, 3ul>*)
                                    Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>::operator[](
                                        (Array<std::array<TriangleVertexData, 3ul>, eastl::allocator>*)(m_tintMode + 8),
                                        (long)(short)puVar18[uVar21]);
                                puVar11 = (undefined8*)std::array<TriangleVertexData, 3ul>::operator[](paVar10, 0);
                                uVar4 = puVar11[1];
                                uVar5 = puVar11[2];
                                uVar6 = puVar11[3];
                                uVar7 = puVar11[4];
                                uVar8 = puVar11[5];
                                *(undefined8*)(param_2 + lVar15) = *puVar11;
                                *(undefined8*)(param_2 + lVar15 + 8) = uVar4;
                                *(undefined8*)(param_2 + lVar15 + 16) = uVar5;
                                *(undefined8*)(param_2 + lVar15 + 16 + 8) = uVar6;
                                *(undefined8*)(param_2 + lVar15 + 32) = uVar7;
                                *(undefined8*)(param_2 + lVar15 + 32 + 8) = uVar8;
                                uVar23 = (ulong)((int)uVar23 + 3);
                                uVar21 = uVar21 + 1;
                            } while ((uint)(int)sVar2 != uVar21);
                        }
                        uVar20 = (uint)uVar23;
                        puVar18 = puVar18 + -512;
                        bVar24 = internal::minZ < lVar14;
                        lVar14 = lVar14 + -1;
                    } while (bVar24);
                }
            }
            iVar19 = uVar20 - param_1;
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return iVar19;
    }

    // 0x1001bacc0, 480 bytes, placed by class name
    // Model::Calculate2DAABB(short&, short&, short&, short&)
    void Model::Calculate2DAABB(short* param_1, short* param_2, short* param_3, short* param_4) {
        int iVar1;
        int iVar2;
        int iVar3;
        int* piVar4;
        short* psVar5;
        ulong uVar6;

        *param_1 = 32767;
        *param_2 = 32767;
        *param_3 = -32768;
        *param_4 = -32768;
        if (field_8 != 0) {
            uVar6 = 0;
            do {
                piVar4 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_120, uVar6);
                iVar1 = *piVar4;
                piVar4 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_144, uVar6);
                iVar2 = *piVar4;
                piVar4 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_168, uVar6);
                iVar3 = *piVar4;
                psVar5 = std::min<short>((short*)(&internal::sx + (long)iVar3 * 2), param_1);
                psVar5 = std::min<short>((short*)(&internal::sx + (long)iVar2 * 2), psVar5);
                psVar5 = std::min<short>((short*)(&internal::sx + (long)iVar1 * 2), psVar5);
                *param_1 = *psVar5;
                psVar5 = std::min<short>((short*)(&internal::sy + (long)iVar3 * 2), param_2);
                psVar5 = std::min<short>((short*)(&internal::sy + (long)iVar2 * 2), psVar5);
                psVar5 = std::min<short>((short*)(&internal::sy + (long)iVar1 * 2), psVar5);
                *param_2 = *psVar5;
                psVar5 = std::max<short>((short*)(&internal::sx + (long)iVar3 * 2), param_3);
                psVar5 = std::max<short>((short*)(&internal::sx + (long)iVar2 * 2), psVar5);
                psVar5 = std::max<short>((short*)(&internal::sx + (long)iVar1 * 2), psVar5);
                *param_3 = *psVar5;
                psVar5 = std::max<short>((short*)(&internal::sy + (long)iVar3 * 2), param_4);
                psVar5 = std::max<short>((short*)(&internal::sy + (long)iVar2 * 2), psVar5);
                psVar5 = std::max<short>((short*)(&internal::sy + (long)iVar1 * 2), psVar5);
                *param_4 = *psVar5;
                uVar6 = uVar6 + 1;
            } while (uVar6 < field_8);
        }
    }

    // 0x1001baec0, 288 bytes, placed by class name
    // Model::Render2DAABB(unsigned int, TriangleVertexData*, int, unsigned char, unsigned short)
    undefined8 Model::Render2DAABB(uint param_1, TriangleVertexData* param_2, int param_3, uchar param_4,
                                   ushort param_5) {
        undefined8 in_RAX;
        long lVar1;
        long lVar2;
        undefined8 local_38;

        local_38 = in_RAX;
        Calculate2DAABB(this, (short*)&local_38, (short*)((long)&local_38 + 2), (short*)((long)&local_38 + 4),
                        (short*)((long)&local_38 + 6));
        lVar1 = 0;
        do {
            lVar2 = (ulong)(param_1 + (int)lVar1) * 16;
            *(undefined2*)(param_2 + lVar2 + 6) = 0;
            *(ushort*)(param_2 + lVar2 + 8) = param_5;
            *(ushort*)(param_2 + lVar2 + 10) = (ushort)param_4 << 8 | 255;
            lVar1 = lVar1 + 1;
        } while (lVar1 != 6);
        lVar1 = (ulong)param_1 * 16;
        *(short*)(param_2 + lVar1) = (short)local_38;
        *(undefined2*)(param_2 + lVar1 + 2) = local_38._2_2_;
        *(undefined2*)(param_2 + lVar1 + 4) = (undefined2)param_3;
        lVar1 = (ulong)(param_1 + 1) * 16;
        *(short*)(param_2 + lVar1) = (short)local_38;
        *(undefined2*)(param_2 + lVar1 + 2) = local_38._6_2_;
        *(undefined2*)(param_2 + lVar1 + 4) = (undefined2)param_3;
        lVar1 = (ulong)(param_1 + 2) * 16;
        *(undefined2*)(param_2 + lVar1) = local_38._4_2_;
        *(undefined2*)(param_2 + lVar1 + 2) = local_38._2_2_;
        *(undefined2*)(param_2 + lVar1 + 4) = (undefined2)param_3;
        lVar1 = (ulong)(param_1 + 3) * 16;
        *(undefined2*)(param_2 + lVar1) = local_38._4_2_;
        *(undefined2*)(param_2 + lVar1 + 2) = local_38._2_2_;
        *(undefined2*)(param_2 + lVar1 + 4) = (undefined2)param_3;
        lVar1 = (ulong)(param_1 + 4) * 16;
        *(short*)(param_2 + lVar1) = (short)local_38;
        *(undefined2*)(param_2 + lVar1 + 2) = local_38._6_2_;
        *(undefined2*)(param_2 + lVar1 + 4) = (undefined2)param_3;
        lVar1 = (ulong)(param_1 + 5) * 16;
        *(undefined2*)(param_2 + lVar1) = local_38._4_2_;
        *(undefined2*)(param_2 + lVar1 + 2) = local_38._6_2_;
        *(undefined2*)(param_2 + lVar1 + 4) = (undefined2)param_3;
        return 6;
    }

} // namespace jag
