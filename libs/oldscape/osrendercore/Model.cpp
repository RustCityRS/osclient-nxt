// libs/oldscape/osrendercore/Model.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.osrendercore

#include "Model.h"
#include "libs/graphics/runetek7/model/Model.h"

namespace jag {
    // 0x1001b9550
    void Model::Init(unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4, bool arg5,
                     const int* arg6, const int* arg7, const int* arg8, const int* arg9, const int* arg10,
                     const int* arg11, const int* arg12, const int* arg13, const int* arg14, const int* arg15,
                     const int* arg16, const int* arg17, const unsigned char* arg18, const short* arg19,
                     const unsigned char* arg20, const signed char* arg21, const int* arg22, const int* arg23,
                     signed char arg24, signed char arg25, signed char arg26, unsigned char arg27,
                     unsigned short arg28) {
        int iVar1;
        int* piVar2;
        uint32_t* puVar3;
        array<TriangleVertexData, 3ul>* paVar4;
        long lVar5;
        long lVar6;
        long lVar7;
        unsigned short uVar8;
        short sVar9;
        int iVar10;
        unsigned long arg1_00;

        field_0 = arg1;
        field_4 = arg2;
        field_8 = arg3;
        field_12 = arg4;
        m_temporary = arg5;
        if (arg27 == '\0') {
            *(uint32_t*)m_tintMode = 0;
        } else {
            m_tintMode[0] = arg24;
            m_tintMode[1] = arg25;
            m_tintMode[2] = arg26;
            m_tintMode[3] = arg27;
        }
        CopyJavaArray<int, int const>((Array<int>*)&field_48, arg6, arg2, false);
        CopyJavaArray<int, int const>((Array<int>*)&field_72, arg7, field_4, false);
        CopyJavaArray<int, int const>((Array<int>*)&field_96, arg8, field_4, false);
        CopyJavaArray<int, int const>((Array<int>*)&field_288, arg15, field_12, false);
        CopyJavaArray<int, int const>((Array<int>*)&field_312, arg16, field_12, false);
        CopyJavaArray<int, int const>((Array<int>*)&field_336, arg17, field_12, false);
        CopyJavaArray<int, int const>((Array<int>*)&field_120, arg9, field_8, false);
        CopyJavaArray<int, int const>((Array<int>*)&field_144, arg10, field_8, false);
        CopyJavaArray<int, int const>((Array<int>*)&field_168, arg11, field_8, false);
        CopyJavaArray<signed char, signed char const>((Array<signed char>*)&field_192, arg21, field_8, true);
        CopyJavaArray<short, short const>((Array<short>*)&field_360, arg19, field_8, true);
        CopyJavaArray<unsigned char, unsigned char const>((Array<unsigned char>*)&field_384, arg20, field_8, true);
        CopyJavaArray<unsigned char, unsigned char const>((Array<unsigned char>*)&field_216, arg18, field_8, false);
        Array<std::array<TriangleVertexData, 3ul>>* this_00 =
            (Array<std::array<TriangleVertexData, 3ul>>*)(m_tintMode + 8);
        this_00->set_min_size((unsigned long)field_8, 5);
        if (field_8 != 0) {
            arg1_00 = 0;
            do {
                if (arg14[arg1_00] == -2) {
                    puVar3 = &field_120[arg1_00];
                    *puVar3 = 4294967294;
                    puVar3 = &field_144[arg1_00];
                    *puVar3 = 4294967294;
                    puVar3 = &field_168[arg1_00];
                    *puVar3 = 4294967294;
                } else {
                    paVar4 = (array<TriangleVertexData, 3ul>*)(*this_00)[arg1_00];
                    lVar5 = (*paVar4)[0];
                    paVar4 = (array<TriangleVertexData, 3ul>*)(*this_00)[arg1_00];
                    lVar6 = (*paVar4)[1];
                    paVar4 = (array<TriangleVertexData, 3ul>*)(*this_00)[arg1_00];
                    lVar7 = (*paVar4)[2];
                    iVar1 = *arg12;
                    *(short*)(lVar5 + 8) = (short)iVar1;
                    iVar10 = arg14[arg1_00];
                    piVar2 = arg13;
                    if (arg14[arg1_00] == -1) {
                        iVar10 = iVar1;
                        piVar2 = arg12;
                    }
                    *(short*)(lVar6 + 8) = (short)*piVar2;
                    *(short*)(lVar7 + 8) = (short)iVar10;
                    if (arg19 == nullptr) {
                        if (arg18 != nullptr)
                            goto LAB_1001b9840;
                    LAB_1001b985a:
                        sVar9 = 255;
                    } else {
                        sVar9 = 255;
                        if ((arg19[arg1_00] == -1) && (arg18 != nullptr)) {
                        LAB_1001b9840:
                            if (arg18[arg1_00] == 0)
                                goto LAB_1001b985a;
                            sVar9 = 256 - (unsigned short)arg18[arg1_00];
                        }
                    }
                    uVar8 = (arg1_00 < arg28 && arg27 != '\0') ^ 255 | sVar9 << 8;
                    *(unsigned short*)(lVar7 + 10) = uVar8;
                    *(unsigned short*)(lVar6 + 10) = uVar8;
                    *(unsigned short*)(lVar5 + 10) = uVar8;
                    *(uint16_t*)(lVar5 + 6) = 0;
                    *(uint16_t*)(lVar6 + 6) = 0;
                    *(uint16_t*)(lVar7 + 6) = 0;
                    *(uint32_t*)(lVar5 + 12) = 0;
                    *(uint32_t*)(lVar6 + 12) = 0;
                    *(uint32_t*)(lVar7 + 12) = 0;
                }
                arg1_00 = arg1_00 + 1;
                arg12 = arg12 + 1;
                arg13 = arg13 + 1;
            } while (arg1_00 < field_8);
        }
    }

    // 0x1001b9aa0
    void Model::TransformVertices(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                                  int arg9, int arg10, int arg11) const {
        TransformVerticesScalar(0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    }

    // 0x1001b9b00
    void Model::TransformVerticesScalar(unsigned int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                        int arg8, int arg9, int arg10, int arg11, int arg12) const {
        unsigned long arg1_00;
        short sVar2;
        int iVar3;
        int* piVar4;
        int iVar5;
        long lVar6;
        int iVar7;
        unsigned int uVar8;
        int iVar9;
        long lVar10;

        if (arg1 < field_4) {
            lVar10 = 0;
            do {
                arg1_00 = (unsigned long)arg1 + lVar10;
                piVar4 = &field_48[arg1_00];
                iVar3 = *piVar4;
                piVar4 = &field_72[arg1_00];
                iVar9 = *piVar4;
                piVar4 = &field_96[arg1_00];
                iVar5 = iVar3 * arg8 + *piVar4 * arg7;
                iVar3 = *piVar4 * arg8 - iVar3 * arg7;
                *(short*)(&internal::wx + lVar10 * 2 + (unsigned long)arg1 * 2) = (short)((unsigned int)iVar5 >> 16);
                *(short*)(&internal::wy + lVar10 * 2 + (unsigned long)arg1 * 2) = (short)iVar9;
                *(short*)(&internal::wz + lVar10 * 2 + (unsigned long)arg1 * 2) = (short)((unsigned int)iVar3 >> 16);
                iVar5 = (iVar5 >> 16) + arg9;
                iVar9 = iVar9 + arg10;
                iVar3 = (iVar3 >> 16) + arg11;
                iVar7 = iVar5 * arg6 + iVar3 * arg5;
                iVar3 = iVar3 * arg6 - iVar5 * arg5 >> 16;
                iVar5 = iVar9 * arg4 - iVar3 * arg3;
                iVar3 = iVar3 * arg4 + iVar9 * arg3;
                sVar2 = (short)((unsigned int)iVar3 >> 16);
                *(short*)(&internal::cz + lVar10 * 2 + (unsigned long)arg1 * 2) = sVar2;
                *(short*)(&internal::sortz + lVar10 * 2 + (unsigned long)arg1 * 2) = sVar2 - (short)arg12;
                uVar8 = iVar3 >> 16 | 1;
                *(short*)(&internal::cx + lVar10 * 2 + (unsigned long)arg1 * 2) = (short)((unsigned int)iVar7 >> 16);
                *(short*)(&internal::cy + lVar10 * 2 + (unsigned long)arg1 * 2) = (short)((unsigned int)iVar5 >> 16);
                iVar3 = (iVar7 >> 16) * arg2;
                *(short*)(&internal::sx + lVar10 * 2 + (unsigned long)arg1 * 2) = (short)(iVar3 / (int)uVar8);
                iVar9 = (iVar5 >> 16) * arg2;
                *(short*)(&internal::sy + lVar10 * 2 + (unsigned long)arg1 * 2) = (short)(iVar9 / (int)uVar8);
                *(float*)(&internal::sxf + lVar10 * 4 + (unsigned long)arg1 * 4) =
                    (float)iVar3 * (1.0 / (float)(int)uVar8);
                *(float*)(&internal::syf + lVar10 * 4 + (unsigned long)arg1 * 4) =
                    (float)iVar9 * (1.0 / (float)(int)uVar8);
                lVar6 = (unsigned long)arg1 + lVar10;
                lVar10 = lVar10 + 1;
            } while (lVar6 + 1U < (unsigned long)field_4);
        }
    }

    // 0x1001b9db0
    void Model::DummySortTriangles() {
        Array<std::array<TriangleVertexData, 3ul>>* this_00;
        int* piVar1;
        array<TriangleVertexData, 3ul>* paVar2;
        uint16_t* puVar3;
        uint16_t* puVar4;
        uint16_t* puVar5;
        long lVar6;
        long lVar7;
        unsigned long arg1;
        long lVar8;

        zsize = 0;
        internal::minZ = 0;
        internal::maxZ = 0;
        if (field_8 != 0) {
            this_00 = (Array<std::array<TriangleVertexData, 3ul>>*)(m_tintMode + 8);
            arg1 = 0;
            do {
                piVar1 = &field_120[arg1];
                lVar7 = (long)*piVar1;
                piVar1 = &field_144[arg1];
                lVar6 = (long)*piVar1;
                piVar1 = &field_168[arg1];
                if ((lVar7 != -2) &&
                    (lVar8 = (long)*piVar1,
                     (*(float*)(&internal::sxf + lVar8 * 4) - *(float*)(&internal::sxf + lVar6 * 4)) *
                             (*(float*)(&internal::syf + lVar7 * 4) - *(float*)(&internal::syf + lVar6 * 4)) <
                         (*(float*)(&internal::syf + lVar8 * 4) - *(float*)(&internal::syf + lVar6 * 4)) *
                             (*(float*)(&internal::sxf + lVar7 * 4) - *(float*)(&internal::sxf + lVar6 * 4)))) {
                    paVar2 = (array<TriangleVertexData, 3ul>*)(*this_00)[arg1];
                    puVar3 = (uint16_t*)(*paVar2)[0];
                    paVar2 = (array<TriangleVertexData, 3ul>*)(*this_00)[arg1];
                    puVar4 = (uint16_t*)(*paVar2)[1];
                    paVar2 = (array<TriangleVertexData, 3ul>*)(*this_00)[arg1];
                    puVar5 = (uint16_t*)(*paVar2)[2];
                    *puVar3 = *(uint16_t*)(&internal::cx + lVar7 * 2);
                    puVar3[1] = *(uint16_t*)(&internal::cy + lVar7 * 2);
                    puVar3[2] = *(uint16_t*)(&internal::cz + lVar7 * 2);
                    *puVar4 = *(uint16_t*)(&internal::cx + lVar6 * 2);
                    puVar4[1] = *(uint16_t*)(&internal::cy + lVar6 * 2);
                    puVar4[2] = *(uint16_t*)(&internal::cz + lVar6 * 2);
                    *puVar5 = *(uint16_t*)(&internal::cx + lVar8 * 2);
                    puVar5[1] = *(uint16_t*)(&internal::cy + lVar8 * 2);
                    puVar5[2] = *(uint16_t*)(&internal::cz + lVar8 * 2);
                    lVar6 = (long)internal::zsize;
                    zsize = (((uint32_t)(internal::zsize_2) << 16) | (uint16_t)(internal::zsize + 1));
                    (&internal::zlist)[lVar6] = (short)arg1;
                }
                arg1 = arg1 + 1;
            } while (arg1 < field_8);
        }
    }

    // 0x1001b9fb0
    int Model::GetNumOutlineVerts() const {
        long lVar2;
        short* psVar3;

        int iVar1 = 0;
        if (internal::minZ <= internal::maxZ) {
            psVar3 = &internal::zsize + internal::maxZ;
            lVar2 = (long)internal::maxZ + 1;
            iVar1 = 0;
            do {
                iVar1 = iVar1 + *psVar3 * 15;
                lVar2 = lVar2 - 1;
                psVar3 = psVar3 - 1;
            } while (internal::minZ < lVar2);
        }
        return iVar1;
    }

    // 0x1001ba000
    Callstack Model::GetTintMode() const {
        return m_tintMode;
    }

    // 0x1001ba010
    int Model::RenderOutline(unsigned int arg1, TriangleVertexData* triangleVertexData, int arg3, unsigned short arg4,
                             unsigned short arg5) {
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
        unsigned int uVar15;
        unsigned int uVar16;
        uint64_t in_register_00000082;
        long lVar17;
        unsigned long uVar18;
        unsigned long arg1_00;
        unsigned long local_80;
        unsigned long local_78;
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

        unsigned int uVar19 = arg1;
        if (internal::minZ <= internal::maxZ) {
            lVar17 = (long)internal::maxZ;
            do {
                sVar1 = (&internal::zsize)[lVar17];
                if (0 < sVar1) {
                    uVar18 = 0;
                    do {
                        this_00 = (array<TriangleVertexData, 3ul>*)(*(
                            (m_tintMode + 8)))[(long)(short)(&internal::zlist)[lVar17 * 512 + uVar18]];
                        psVar8 = (short*)(*this_00)[1];
                        sVar2 = psVar8[1];
                        psVar9 = (short*)(*this_00)[0];
                        if (sVar2 < psVar9[1]) {
                        LAB_1001ba15d:
                            arg1_00 = 1;
                            uVar16 = 2;
                            uVar15 = 0;
                        } else {
                            arg1_00 = 0;
                            uVar16 = 1;
                            uVar15 = 2;
                            if ((sVar2 == psVar9[1]) && (*psVar8 < *psVar9))
                                goto LAB_1001ba15d;
                        }
                        local_78 = (unsigned long)uVar16;
                        local_80 = (unsigned long)uVar15;
                        psVar8 = (short*)(*this_00)[2];
                        sVar2 = psVar8[1];
                        psVar9 = (short*)(*this_00)[arg1_00];
                        if ((sVar2 < psVar9[1]) || ((sVar2 == psVar9[1] && (*psVar8 < *psVar9)))) {
                            arg1_00 = 2;
                            local_78 = 0;
                            local_80 = 1;
                        }
                        psVar10 = (short*)(*this_00)[arg1_00];
                        psVar11 = (short*)(*this_00)[local_78];
                        psVar9 = (short*)(*this_00)[local_80];
                        psVar8 = psVar10 + 2;
                        iVar7 = ((int)psVar10[2] * (int)(((uint64_t)in_register_00000082 << 16) | (uint16_t)arg4)) /
                                (((arg3 - (arg3 - 1024 >> 31)) - 1024 >> 1) + 1024);
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
                            lVar14 = (unsigned long)uVar19 * 16;
                            *(uint16_t*)(triangleVertexData + lVar14 + 6) = 0;
                            *(unsigned short*)(triangleVertexData + lVar14 + 8) = arg5;
                            *(uint16_t*)(triangleVertexData + lVar14 + 10) = 65535;
                            *(short*)(triangleVertexData + lVar14) = sVar2 - sVar6;
                            *(short*)(triangleVertexData + lVar14 + 2) = sVar3 - sVar6;
                            *(short*)(triangleVertexData + lVar14 + 4) = sVar4;
                            lVar14 = (unsigned long)(uVar19 + 1) * 16;
                            *(uint16_t*)(triangleVertexData + lVar14 + 6) = 0;
                            *(unsigned short*)(triangleVertexData + lVar14 + 8) = arg5;
                            *(uint16_t*)(triangleVertexData + lVar14 + 10) = 65535;
                            *(uint16_t*)(triangleVertexData + lVar14) = *(uint16_t*)((long)local_62 + lVar12 + 6);
                            *(uint16_t*)(triangleVertexData + lVar14 + 2) = *(uint16_t*)((long)local_62 + lVar12 + 8);
                            *(uint16_t*)(triangleVertexData + lVar14 + 4) = *(uint16_t*)((long)local_62 + lVar12 + 10);
                            lVar14 = (unsigned long)(uVar19 + 2) * 16;
                            *(uint16_t*)(triangleVertexData + lVar14 + 6) = 0;
                            *(unsigned short*)(triangleVertexData + lVar14 + 8) = arg5;
                            *(uint16_t*)(triangleVertexData + lVar14 + 10) = 65535;
                            *(uint16_t*)(triangleVertexData + lVar14) = *(uint16_t*)((long)local_62 + lVar12);
                            *(uint16_t*)(triangleVertexData + lVar14 + 2) = *(uint16_t*)((long)local_62 + lVar12 + 2);
                            *(uint16_t*)(triangleVertexData + lVar14 + 4) = *(uint16_t*)((long)local_62 + lVar12 + 4);
                            uVar19 = uVar19 + 3;
                            lVar12 = lVar12 + 6;
                        } while (lVar12 != 30);
                        uVar18 = uVar18 + 1;
                    } while (uVar18 != (unsigned int)(int)sVar1);
                }
                bVar5 = internal::minZ < lVar17;
                lVar17 = lVar17 - 1;
            } while (bVar5);
        }
        return uVar19 - arg1;
    }

    // 0x1001ba4c0
    int Model::RenderTriangles(unsigned int arg1, TriangleVertexData* triangleVertexData) {
        int* piVar1;
        Array<std::array<TriangleVertexData, 3ul>>* this_00;
        short sVar2;
        short sVar3;
        uint64_t uVar4;
        uint64_t uVar5;
        uint64_t uVar6;
        uint64_t uVar7;
        uint64_t uVar8;
        char cVar9;
        array<TriangleVertexData, 3ul>* paVar10;
        uint64_t* puVar11;
        uint32_t* puVar12;
        char* pcVar13;
        long lVar14;
        long lVar15;
        long lVar16;
        int iVar17;
        uint16_t* puVar18;
        unsigned int uVar20;
        unsigned long uVar21;
        int iVar22;
        unsigned long uVar23;
        bool bVar24;
        int aiStack_298[112];
        uint32_t* local_d8;
        int local_c8;
        int local_c4;
        int local_c0;
        int local_a4;
        int* local_a0;
        uint64_t local_98;
        uint64_t uStack_70;
        uint64_t local_68;

        int iVar19 = 0;
        if (internal::minZ <= internal::maxZ) {
            cVar9 = field_192.empty();
            if (!cVar9) {
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
                                pcVar13 = &field_192[(long)sVar3];
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
                            } while ((unsigned int)(int)sVar2 != uVar23);
                        }
                        puVar18 = puVar18 - 512;
                        bVar24 = internal::minZ < lVar14;
                        lVar14 = lVar14 - 1;
                    } while (bVar24);
                }
                if ((0 < local_68._4_4_) || (local_c8 = 0, 0 < (int)0)) {
                    local_c8 = ((int)0 + local_98._4_4_) / ((int)0 + local_68._4_4_);
                }
                uVar23 = (unsigned long)arg1;
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
                local_d8 = (uint32_t*)&DAT_104221300;
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
                this_00 = (Array<std::array<TriangleVertexData, 3ul>>*)(m_tintMode + 8);
                lVar14 = 0;
                iVar22 = 0;
                do {
                    if (lVar14 == 0) {
                        while (local_c8 < iVar17) {
                            lVar16 = uVar23 * 16;
                            lVar15 = (long)iVar22;
                            iVar22 = iVar22 + 1;
                            paVar10 = (array<TriangleVertexData, 3ul>*)(*this_00)[(long)(int)local_d8[lVar15]];
                            puVar11 = (uint64_t*)(*paVar10)[0];
                            uVar4 = puVar11[1];
                            uVar5 = puVar11[2];
                            uVar6 = puVar11[3];
                            uVar7 = puVar11[4];
                            uVar8 = puVar11[5];
                            *(uint64_t*)(triangleVertexData + lVar16) = *puVar11;
                            *(uint64_t*)(triangleVertexData + lVar16 + 8) = uVar4;
                            *(uint64_t*)(triangleVertexData + lVar16 + 16) = uVar5;
                            *(uint64_t*)(triangleVertexData + lVar16 + 16 + 8) = uVar6;
                            *(uint64_t*)(triangleVertexData + lVar16 + 32) = uVar7;
                            *(uint64_t*)(triangleVertexData + lVar16 + 32 + 8) = uVar8;
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
                            uVar23 = (unsigned long)((int)uVar23 + 3);
                        }
                    }
                    while ((lVar14 == 3 && (local_c4 < iVar17))) {
                        lVar16 = uVar23 * 16;
                        lVar15 = (long)iVar22;
                        iVar22 = iVar22 + 1;
                        paVar10 = (array<TriangleVertexData, 3ul>*)(*this_00)[(long)(int)local_d8[lVar15]];
                        puVar11 = (uint64_t*)(*paVar10)[0];
                        uVar4 = puVar11[1];
                        uVar5 = puVar11[2];
                        uVar6 = puVar11[3];
                        uVar7 = puVar11[4];
                        uVar8 = puVar11[5];
                        *(uint64_t*)(triangleVertexData + lVar16) = *puVar11;
                        *(uint64_t*)(triangleVertexData + lVar16 + 8) = uVar4;
                        *(uint64_t*)(triangleVertexData + lVar16 + 16) = uVar5;
                        *(uint64_t*)(triangleVertexData + lVar16 + 16 + 8) = uVar6;
                        *(uint64_t*)(triangleVertexData + lVar16 + 32) = uVar7;
                        *(uint64_t*)(triangleVertexData + lVar16 + 32 + 8) = uVar8;
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
                        uVar23 = (unsigned long)((int)uVar23 + 3);
                    }
                    if (lVar14 == 5) {
                        while (local_c0 < iVar17) {
                            lVar16 = uVar23 * 16;
                            lVar15 = (long)iVar22;
                            iVar22 = iVar22 + 1;
                            paVar10 = (array<TriangleVertexData, 3ul>*)(*this_00)[(long)(int)local_d8[lVar15]];
                            puVar11 = (uint64_t*)(*paVar10)[0];
                            uVar4 = puVar11[1];
                            uVar5 = puVar11[2];
                            uVar6 = puVar11[3];
                            uVar7 = puVar11[4];
                            uVar8 = puVar11[5];
                            *(uint64_t*)(triangleVertexData + lVar16) = *puVar11;
                            *(uint64_t*)(triangleVertexData + lVar16 + 8) = uVar4;
                            *(uint64_t*)(triangleVertexData + lVar16 + 16) = uVar5;
                            *(uint64_t*)(triangleVertexData + lVar16 + 16 + 8) = uVar6;
                            *(uint64_t*)(triangleVertexData + lVar16 + 32) = uVar7;
                            *(uint64_t*)(triangleVertexData + lVar16 + 32 + 8) = uVar8;
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
                            uVar23 = (unsigned long)((int)uVar23 + 3);
                        }
                    }
                    uVar20 = *(unsigned int*)((long)&local_68 + lVar14 * 4);
                    if (0 < (int)uVar20) {
                        uVar21 = 0;
                        do {
                            lVar15 = uVar23 * 16;
                            paVar10 = (array<TriangleVertexData, 3ul>*)(*this_00)[(long)(int)puVar12[uVar21]];
                            puVar11 = (uint64_t*)(*paVar10)[0];
                            uVar4 = puVar11[1];
                            uVar5 = puVar11[2];
                            uVar6 = puVar11[3];
                            uVar7 = puVar11[4];
                            uVar8 = puVar11[5];
                            *(uint64_t*)(triangleVertexData + lVar15) = *puVar11;
                            *(uint64_t*)(triangleVertexData + lVar15 + 8) = uVar4;
                            *(uint64_t*)(triangleVertexData + lVar15 + 16) = uVar5;
                            *(uint64_t*)(triangleVertexData + lVar15 + 16 + 8) = uVar6;
                            *(uint64_t*)(triangleVertexData + lVar15 + 32) = uVar7;
                            *(uint64_t*)(triangleVertexData + lVar15 + 32 + 8) = uVar8;
                            uVar23 = (unsigned long)((int)uVar23 + 3);
                            uVar21 = uVar21 + 1;
                        } while (uVar20 != uVar21);
                    }
                    uVar20 = (unsigned int)uVar23;
                    lVar14 = lVar14 + 1;
                    puVar12 = puVar12 + 2000;
                } while (lVar14 != 10);
                while (iVar17 != -1000) {
                    lVar15 = uVar23 * 16;
                    lVar14 = (long)iVar22;
                    iVar22 = iVar22 + 1;
                    paVar10 = (array<TriangleVertexData, 3ul>*)(*this_00)[(long)(int)local_d8[lVar14]];
                    puVar11 = (uint64_t*)(*paVar10)[0];
                    uVar4 = puVar11[1];
                    uVar5 = puVar11[2];
                    uVar6 = puVar11[3];
                    uVar7 = puVar11[4];
                    uVar8 = puVar11[5];
                    *(uint64_t*)(triangleVertexData + lVar15) = *puVar11;
                    *(uint64_t*)(triangleVertexData + lVar15 + 8) = uVar4;
                    *(uint64_t*)(triangleVertexData + lVar15 + 16) = uVar5;
                    *(uint64_t*)(triangleVertexData + lVar15 + 16 + 8) = uVar6;
                    *(uint64_t*)(triangleVertexData + lVar15 + 32) = uVar7;
                    *(uint64_t*)(triangleVertexData + lVar15 + 32 + 8) = uVar8;
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
                    uVar23 = (unsigned long)uVar20;
                }
            } else {
                uVar20 = arg1;
                if (internal::minZ <= internal::maxZ) {
                    puVar18 = &internal::zlist + (long)internal::maxZ * 512;
                    uVar23 = (unsigned long)arg1;
                    lVar14 = (long)internal::maxZ;
                    do {
                        sVar2 = (&internal::zsize)[lVar14];
                        if (0 < sVar2) {
                            uVar21 = 0;
                            do {
                                lVar15 = uVar23 * 16;
                                paVar10 = (array<TriangleVertexData, 3ul>*)(*(
                                    (m_tintMode + 8)))[(long)(short)puVar18[uVar21]];
                                puVar11 = (uint64_t*)(*paVar10)[0];
                                uVar4 = puVar11[1];
                                uVar5 = puVar11[2];
                                uVar6 = puVar11[3];
                                uVar7 = puVar11[4];
                                uVar8 = puVar11[5];
                                *(uint64_t*)(triangleVertexData + lVar15) = *puVar11;
                                *(uint64_t*)(triangleVertexData + lVar15 + 8) = uVar4;
                                *(uint64_t*)(triangleVertexData + lVar15 + 16) = uVar5;
                                *(uint64_t*)(triangleVertexData + lVar15 + 16 + 8) = uVar6;
                                *(uint64_t*)(triangleVertexData + lVar15 + 32) = uVar7;
                                *(uint64_t*)(triangleVertexData + lVar15 + 32 + 8) = uVar8;
                                uVar23 = (unsigned long)((int)uVar23 + 3);
                                uVar21 = uVar21 + 1;
                            } while ((unsigned int)(int)sVar2 != uVar21);
                        }
                        uVar20 = (unsigned int)uVar23;
                        puVar18 = puVar18 - 512;
                        bVar24 = internal::minZ < lVar14;
                        lVar14 = lVar14 - 1;
                    } while (bVar24);
                }
            }
            iVar19 = uVar20 - arg1;
        }
        return iVar19;
    }

    // 0x1001bacc0
    void Model::Calculate2DAABB(short& arg1, short& arg2, short& arg3, short& arg4) {
        int iVar1;
        int iVar2;
        int iVar3;
        int* piVar4;
        short* psVar5;
        unsigned long arg1_00;

        arg1 = 32767;
        arg2 = 32767;
        arg3 = -32768;
        arg4 = -32768;
        if (field_8 != 0) {
            arg1_00 = 0;
            do {
                piVar4 = &field_120[arg1_00];
                iVar1 = *piVar4;
                piVar4 = &field_144[arg1_00];
                iVar2 = *piVar4;
                piVar4 = &field_168[arg1_00];
                iVar3 = *piVar4;
                psVar5 = std::min<short>(*((short*)(&internal::sx + (long)iVar3 * 2)), arg1);
                psVar5 = std::min<short>(*((short*)(&internal::sx + (long)iVar2 * 2)), *psVar5);
                psVar5 = std::min<short>(*((short*)(&internal::sx + (long)iVar1 * 2)), *psVar5);
                arg1 = *psVar5;
                psVar5 = std::min<short>(*((short*)(&internal::sy + (long)iVar3 * 2)), arg2);
                psVar5 = std::min<short>(*((short*)(&internal::sy + (long)iVar2 * 2)), *psVar5);
                psVar5 = std::min<short>(*((short*)(&internal::sy + (long)iVar1 * 2)), *psVar5);
                arg2 = *psVar5;
                psVar5 = std::max<short>(*((short*)(&internal::sx + (long)iVar3 * 2)), arg3);
                psVar5 = std::max<short>(*((short*)(&internal::sx + (long)iVar2 * 2)), *psVar5);
                psVar5 = std::max<short>(*((short*)(&internal::sx + (long)iVar1 * 2)), *psVar5);
                arg3 = *psVar5;
                psVar5 = std::max<short>(*((short*)(&internal::sy + (long)iVar3 * 2)), arg4);
                psVar5 = std::max<short>(*((short*)(&internal::sy + (long)iVar2 * 2)), *psVar5);
                psVar5 = std::max<short>(*((short*)(&internal::sy + (long)iVar1 * 2)), *psVar5);
                arg4 = *psVar5;
                arg1_00 = arg1_00 + 1;
            } while (arg1_00 < field_8);
        }
    }

    // 0x1001baec0
    uint64_t Model::Render2DAABB(unsigned int arg1, TriangleVertexData* triangleVertexData, int arg3,
                                 unsigned char arg4, unsigned short arg5) {
        uint64_t in_RAX;
        long lVar2;

        uint64_t local_38 = in_RAX;
        Calculate2DAABB(local_38, *((short*)((long)&local_38 + 2)), *((short*)((long)&local_38 + 4)),
                        *((short*)((long)&local_38 + 6)));
        long lVar1 = 0;
        do {
            lVar2 = (unsigned long)(arg1 + (int)lVar1) * 16;
            *(uint16_t*)(triangleVertexData + lVar2 + 6) = 0;
            *(unsigned short*)(triangleVertexData + lVar2 + 8) = arg5;
            *(unsigned short*)(triangleVertexData + lVar2 + 10) = (unsigned short)arg4 << 8 | 255;
            lVar1 = lVar1 + 1;
        } while (lVar1 != 6);
        lVar1 = (unsigned long)arg1 * 16;
        *(short*)(triangleVertexData + lVar1) = (short)local_38;
        *(uint16_t*)(triangleVertexData + lVar1 + 2) = local_38._2_2_;
        *(uint16_t*)(triangleVertexData + lVar1 + 4) = (uint16_t)arg3;
        lVar1 = (unsigned long)(arg1 + 1) * 16;
        *(short*)(triangleVertexData + lVar1) = (short)local_38;
        *(uint16_t*)(triangleVertexData + lVar1 + 2) = local_38._6_2_;
        *(uint16_t*)(triangleVertexData + lVar1 + 4) = (uint16_t)arg3;
        lVar1 = (unsigned long)(arg1 + 2) * 16;
        *(uint16_t*)(triangleVertexData + lVar1) = local_38._4_2_;
        *(uint16_t*)(triangleVertexData + lVar1 + 2) = local_38._2_2_;
        *(uint16_t*)(triangleVertexData + lVar1 + 4) = (uint16_t)arg3;
        lVar1 = (unsigned long)(arg1 + 3) * 16;
        *(uint16_t*)(triangleVertexData + lVar1) = local_38._4_2_;
        *(uint16_t*)(triangleVertexData + lVar1 + 2) = local_38._2_2_;
        *(uint16_t*)(triangleVertexData + lVar1 + 4) = (uint16_t)arg3;
        lVar1 = (unsigned long)(arg1 + 4) * 16;
        *(short*)(triangleVertexData + lVar1) = (short)local_38;
        *(uint16_t*)(triangleVertexData + lVar1 + 2) = local_38._6_2_;
        *(uint16_t*)(triangleVertexData + lVar1 + 4) = (uint16_t)arg3;
        lVar1 = (unsigned long)(arg1 + 5) * 16;
        *(uint16_t*)(triangleVertexData + lVar1) = local_38._4_2_;
        *(uint16_t*)(triangleVertexData + lVar1 + 2) = local_38._6_2_;
        *(uint16_t*)(triangleVertexData + lVar1 + 4) = (uint16_t)arg3;
        return 6;
    }

} // namespace jag
