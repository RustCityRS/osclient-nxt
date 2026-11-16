// libs/oldscape/jagex3/graphics/polygon.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "libs/game/runetek5/config/meltype/MapElementType.h"

namespace jag::oldscape::graphics::polygon {
    // 0x10392aac8, 4 bytes, __common; zero-initialised
    m_scanX1;

    // 0x10392aacc, 4 bytes, __common; zero-initialised
    m_scanX2;

    // 0x10392aad0, 4 bytes, __common; zero-initialised
    m_scanY;

    // 0x10392aad4, 4 bytes, __common; zero-initialised
    m_edgesLen;

    // 0x10392aad8, 24 bytes, __common; set at startup by ___cxx_global_var_init.107
    Array<int, eastl::allocator> m_edges = Array<int, eastl::allocator>();

    // 0x10392aaf0, 4 bytes, __common; zero-initialised
    m_polygonCurrentPos;

    // 0x10392aaf4, 4 bytes, __common; zero-initialised
    m_polygonCurrentEnd;

    // 0x10392aaf8, 8 bytes, __common; zero-initialised
    m_polygonCurrentStart;

    // 0x100320010, 64 bytes, placed by class name and debug map
    // SimpleFill(Array<int, eastl::allocator>&, unsigned int, Pix2D&)
    void SimpleFill(Array* param_1, uint param_2, Pix2D* param_3) {
        int iVar1;

        iVar1 = param_1->end();
        SimpleFill(param_1, 0, iVar1, param_2, param_3);
    }

    // 0x100320050, 144 bytes, placed by class name and debug map
    // SimpleFill(Array<int, eastl::allocator>&, int, int, int, Pix2D&)
    void SimpleFill(Array* param_1, int param_2, int param_3, int param_4, Pix2D* param_5) {
        if ((param_3 & 1U) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "graphics/polygon.cpp",
                            27, "len argument must be even");
        }
        if (param_4 < 0) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "graphics/polygon.cpp",
                            33, "c must be a valid colour");
        }
        Init();
        AddLoop(param_1, param_2, param_3);
        Fill(param_4, param_5);
    }

    // 0x1003200e0, 64 bytes, placed by class name and debug map
    // TransFill(Array<int, eastl::allocator>&, int, int, Pix2D&)
    void TransFill(Array* param_1, int param_2, int param_3, Pix2D* param_4) {
        int iVar1;

        iVar1 = param_1->end();
        TransFill(param_1, 0, iVar1, param_2, param_3, param_4);
    }

    // 0x100320120, 160 bytes, placed by class name and debug map
    // TransFill(Array<int, eastl::allocator>&, int, int, int, int, Pix2D&)
    void TransFill(Array* param_1, int param_2, int param_3, int param_4, int param_5, Pix2D* param_6) {
        if ((param_3 & 1U) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "graphics/polygon.cpp",
                            46, "len argument must be even");
        }
        if (param_4 < 0) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "graphics/polygon.cpp",
                            52, "c must be a valid colour");
        }
        Init();
        AddLoop(param_1, param_2, param_3);
        FillTrans(param_4, param_5, param_6);
    }

    // 0x1003201c0, 16 bytes, placed by class name and debug map
    // Init()
    void Init() {
        m_edgesLen = 0;
    }

    // 0x1003201d0, 592 bytes, placed by class name and debug map
    // AddLoop(Array<int, eastl::allocator>&, int, unsigned int)
    void AddLoop(Array* param_1, int param_2, uint param_3) {
        undefined4 uVar1;
        int iVar2;
        uint uVar3;
        ulong uVar4;
        undefined4* puVar5;
        int* piVar6;
        undefined4 in_register_00000014;
        Array* this;
        ulong uVar7;
        int iVar8;
        uint uVar9;
        Array<int, eastl::allocator> local_58[24];
        ulong local_38;

        local_38 = CONCAT44(in_register_00000014, param_3);
        if ((param_3 & 1) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "graphics/polygon.cpp",
                            70, "len argument must be even");
        }
        uVar7 = (ulong)(param_3 * 2 + m_edgesLen);
        uVar4 = m_edges.end();
        if (uVar4 < uVar7) {
            Array<int, eastl::allocator>::Array(local_58, uVar7);
            if (0 < m_edgesLen) {
                uVar4 = 0;
                do {
                    puVar5 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&m_edges, uVar4);
                    uVar1 = *puVar5;
                    puVar5 = (undefined4*)Array<int, eastl::allocator>::operator[](local_58, uVar4);
                    *puVar5 = uVar1;
                    uVar4 = uVar4 + 1;
                } while ((long)uVar4 < (long)m_edgesLen);
            }
            Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&m_edges, (Array*)local_58);
            local_58->~Array();
        }
        uVar3 = (int)local_38 + param_2;
        local_38 = (ulong)uVar3;
        if ((uint)param_2 < uVar3) {
            uVar3 = uVar3 - 2;
            do {
                uVar9 = param_2;
                this = param_1;
                uVar4 = (ulong)uVar9;
                piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_1,
                                                                        (long)(int)(uVar3 + 1));
                iVar2 = *piVar6;
                piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this,
                                                                        (ulong)(uVar9 + 1));
                iVar8 = *piVar6;
                if (iVar2 < iVar8) {
                    puVar5 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this,
                                                                                   (long)(int)uVar3);
                    uVar1 = *puVar5;
                    uVar7 = (ulong)m_edgesLen;
                    m_edgesLen = m_edgesLen + 1;
                    puVar5 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&m_edges, uVar7);
                    *puVar5 = uVar1;
                    uVar7 = (ulong)m_edgesLen;
                    m_edgesLen = m_edgesLen + 1;
                    piVar6 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges, uVar7);
                    *piVar6 = iVar2;
                LAB_100320312:
                    puVar5 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this,
                                                                                   uVar4);
                    uVar1 = *puVar5;
                    uVar4 = (ulong)m_edgesLen;
                    m_edgesLen = m_edgesLen + 1;
                    puVar5 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&m_edges, uVar4);
                    *puVar5 = uVar1;
                    uVar4 = (ulong)m_edgesLen;
                    m_edgesLen = m_edgesLen + 1;
                    piVar6 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges, uVar4);
                    *piVar6 = iVar8;
                } else if (iVar8 < iVar2) {
                    puVar5 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this,
                                                                                   (ulong)uVar9);
                    uVar1 = *puVar5;
                    uVar4 = (ulong)m_edgesLen;
                    m_edgesLen = m_edgesLen + 1;
                    puVar5 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&m_edges, uVar4);
                    this = param_1;
                    *puVar5 = uVar1;
                    uVar4 = (ulong)m_edgesLen;
                    m_edgesLen = m_edgesLen + 1;
                    piVar6 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges, uVar4);
                    *piVar6 = iVar8;
                    uVar4 = (ulong)(int)uVar3;
                    iVar8 = iVar2;
                    goto LAB_100320312;
                }
                param_2 = uVar9 + 2;
                uVar3 = uVar9;
            } while (uVar9 + 2 < (uint)local_38);
        }
    }

    // 0x100320420, 96 bytes, placed by class name and debug map
    // Fill(int, Pix2D&)
    void Fill(int param_1, Pix2D* param_2) {
        InitScanLines(param_2);
        while (true) {
            if (GetScanLine(param_2) == '\0')
                break;
            (**(code**)(param_2->field_0 + 56))(param_2, m_scanX1, m_scanY, m_scanX2 - m_scanX1, param_1);
        }
    }

    // 0x100320480, 96 bytes, placed by class name and debug map
    // FillTrans(int, int, Pix2D&)
    void FillTrans(int param_1, int param_2, Pix2D* param_3) {
        InitScanLines(param_3);
        while (true) {
            if (GetScanLine(param_3) == '\0')
                break;
            (**(code**)(param_3->field_0 + 64))(param_3, m_scanX1, m_scanY, m_scanX2 - m_scanX1, param_1, param_2);
        }
    }

    // 0x1003204e0, 384 bytes, placed by class name and debug map
    // InitScanLines(Pix2D&)
    void InitScanLines(Pix2D* param_1) {
        int iVar1;
        int iVar2;
        int iVar3;
        int* piVar4;
        int iVar5;
        int iVar6;

        if (m_edgesLen < 0) {
            m_polygonCurrentEnd = 0;
            m_scanY = 2147483646;
        } else {
            iVar6 = 0;
            SortEdges(0, m_edgesLen);
            piVar4 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges, 1);
            iVar5 = *piVar4;
            if (*piVar4 < param_1->field_16) {
                iVar5 = param_1->field_16;
            }
            for (; iVar6 < m_edgesLen; iVar6 = iVar6 + 4) {
                piVar4 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                        (long)(iVar6 + 1));
                iVar1 = *piVar4;
                if (iVar5 < iVar1)
                    break;
                piVar4 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                        (long)iVar6);
                iVar2 = *piVar4;
                piVar4 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                        (long)(iVar6 + 2));
                iVar3 = *piVar4;
                piVar4 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                        (long)(iVar6 + 3));
                iVar3 = ((iVar3 - iVar2) * 65536) / (*piVar4 - iVar1);
                piVar4 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                        (long)iVar6);
                *piVar4 = (iVar5 - iVar1) * iVar3 + iVar2 * 65536 + 32768;
                piVar4 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                        (long)(iVar6 + 2));
                *piVar4 = iVar3;
            }
            m_scanY = iVar5 + -1;
            m_polygonCurrentEnd = iVar6;
        }
        m_polygonCurrentStart = 0;
        m_polygonCurrentPos = m_polygonCurrentEnd;
    }

    // 0x100320660, 832 bytes, placed by class name and debug map
    // GetScanLine(Pix2D&)
    undefined8 GetScanLine(Pix2D* param_1) {
        int iVar1;
        int iVar2;
        int iVar3;
        undefined4 uVar4;
        int iVar5;
        int iVar6;
        ulong uVar7;
        int* piVar8;
        uint* puVar9;
        undefined4* puVar10;
        int iVar11;
        uint uVar12;
        int iVar13;
        int iVar14;
        ulong uVar15;
        ulong local_38;

        uVar7 = (ulong)m_polygonCurrentPos;
        iVar13 = m_scanY;
        do {
            uVar12 = m_polygonCurrentStart;
            iVar5 = m_polygonCurrentEnd;
            iVar6 = (int)uVar7;
            if (iVar6 < m_polygonCurrentEnd) {
                piVar8 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                        (long)iVar6);
                m_scanX1 = *piVar8 >> 16;
                piVar8 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                        (long)(iVar6 + 4));
                m_scanX2 = *piVar8 >> 16;
                piVar8 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                        (long)(iVar6 + 2));
                iVar13 = *piVar8;
                piVar8 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                        (long)iVar6);
                *piVar8 = *piVar8 + iVar13;
                piVar8 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                        (long)(iVar6 + 6));
                iVar13 = *piVar8;
                piVar8 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                        (long)(iVar6 + 4));
                *piVar8 = *piVar8 + iVar13;
                m_polygonCurrentPos = iVar6 + 8;
            LAB_10032097e:
                return CONCAT71((int7)(uVar7 >> 8), iVar6 < iVar5);
            }
            iVar13 = iVar13 + 1;
            m_scanY = iVar13;
            if (param_1->field_20 <= iVar13)
                goto LAB_10032097e;
            local_38 = (ulong)m_polygonCurrentStart;
            uVar15 = (ulong)(int)m_polygonCurrentStart;
            for (iVar14 = m_polygonCurrentEnd; iVar14 < (int)m_edgesLen; iVar14 = iVar14 + 4) {
                piVar8 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                        (long)(iVar14 + 1));
                iVar11 = *piVar8;
                if (iVar13 < iVar11)
                    break;
                piVar8 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                        (long)iVar14);
                iVar1 = *piVar8;
                piVar8 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                        (long)(iVar14 + 2));
                iVar2 = *piVar8;
                piVar8 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                        (long)(iVar14 + 3));
                iVar3 = *piVar8;
                puVar9 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                         (long)iVar14);
                *puVar9 = iVar1 << 16 | 32768;
                piVar8 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                        (long)(iVar14 + 2));
                *piVar8 = ((iVar2 - iVar1) * 65536) / (iVar3 - iVar11);
            }
            if ((int)uVar12 < iVar14) {
                do {
                    piVar8 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                            uVar15 + 3);
                    if (*piVar8 <= iVar13) {
                        iVar11 = (int)local_38;
                        puVar10 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&m_edges, (long)iVar11);
                        uVar4 = *puVar10;
                        puVar10 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&m_edges, uVar15);
                        *puVar10 = uVar4;
                        puVar10 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&m_edges, (long)(iVar11 + 1));
                        uVar4 = *puVar10;
                        puVar10 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&m_edges, uVar15 + 1);
                        *puVar10 = uVar4;
                        puVar10 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&m_edges, (long)(iVar11 + 2));
                        uVar4 = *puVar10;
                        puVar10 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&m_edges, uVar15 + 2);
                        *puVar10 = uVar4;
                        puVar10 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&m_edges, (long)(iVar11 + 3));
                        uVar4 = *puVar10;
                        puVar10 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&m_edges, uVar15 + 3);
                        *puVar10 = uVar4;
                        local_38 = (ulong)(iVar11 + 4);
                    }
                    uVar15 = uVar15 + 4;
                } while ((long)uVar15 < (long)iVar14);
            }
            uVar12 = (uint)local_38;
            if (uVar12 == m_edgesLen) {
                m_edgesLen = 0;
                goto LAB_10032097e;
            }
            SortCurrentEdges(uVar12, iVar14);
            uVar7 = local_38;
            m_polygonCurrentEnd = iVar14;
            m_polygonCurrentStart = uVar12;
        } while (true);
    }

    // 0x1003209a0, 608 bytes, placed by class name and debug map
    // SortEdges(int, int)
    void SortEdges(int param_1, int param_2) {
        undefined4 uVar1;
        int iVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        int iVar5;
        undefined4 uVar6;
        undefined4* puVar7;
        int* piVar8;
        ulong uVar9;
        int local_34;

        if (param_1 + 4 < param_2) {
            puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                           (long)param_1);
            uVar1 = *puVar7;
            piVar8 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                    (long)(param_1 + 1));
            iVar2 = *piVar8;
            puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                           (long)(param_1 + 2));
            uVar3 = *puVar7;
            puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                           (long)(param_1 + 3));
            uVar4 = *puVar7;
            uVar9 = (ulong)(param_1 + 4);
            local_34 = param_1;
            do {
                piVar8 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges, uVar9 + 1);
                iVar5 = *piVar8;
                if (iVar5 < iVar2) {
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&m_edges, uVar9);
                    uVar6 = *puVar7;
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&m_edges, (long)local_34);
                    *puVar7 = uVar6;
                    piVar8 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                            (long)(local_34 + 1));
                    *piVar8 = iVar5;
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&m_edges, uVar9 + 2);
                    uVar6 = *puVar7;
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&m_edges, (long)(local_34 + 2));
                    *puVar7 = uVar6;
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&m_edges, uVar9 + 3);
                    uVar6 = *puVar7;
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&m_edges, (long)(local_34 + 3));
                    *puVar7 = uVar6;
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&m_edges, (long)(local_34 + 4));
                    uVar6 = *puVar7;
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&m_edges, uVar9);
                    *puVar7 = uVar6;
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&m_edges, (long)(local_34 + 5));
                    uVar6 = *puVar7;
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&m_edges, uVar9 + 1);
                    *puVar7 = uVar6;
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&m_edges, (long)(local_34 + 6));
                    uVar6 = *puVar7;
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&m_edges, uVar9 + 2);
                    *puVar7 = uVar6;
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&m_edges, (long)(local_34 + 7));
                    uVar6 = *puVar7;
                    puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&m_edges, uVar9 + 3);
                    *puVar7 = uVar6;
                    local_34 = local_34 + 4;
                }
                uVar9 = uVar9 + 4;
            } while ((long)uVar9 < (long)param_2);
            puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                           (long)local_34);
            *puVar7 = uVar1;
            piVar8 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                    (long)(local_34 + 1));
            *piVar8 = iVar2;
            puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                           (long)(local_34 + 2));
            *puVar7 = uVar3;
            puVar7 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                           (long)(local_34 + 3));
            *puVar7 = uVar4;
            SortEdges(param_1, local_34);
            SortEdges(local_34 + 4, param_2);
        }
    }

    // 0x100320c00, 432 bytes, placed by class name and debug map
    // SortCurrentEdges(int, int)
    void SortCurrentEdges(int param_1, int param_2) {
        long lVar1;
        int iVar2;
        int iVar3;
        undefined4 uVar4;
        undefined4 uVar5;
        bool bVar6;
        int iVar7;
        int* piVar8;
        undefined4* puVar9;
        ulong uVar10;
        ulong uVar11;
        int iVar12;
        long lVar13;

        iVar7 = param_1 + 4;
        do {
            if (param_2 < param_1 + 8) {
                return;
            }
            bVar6 = true;
            if (iVar7 < param_2) {
                bVar6 = true;
                lVar13 = 0;
                do {
                    iVar12 = (int)lVar13;
                    uVar10 = iVar7 + lVar13;
                    piVar8 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                            (long)(param_1 + iVar12));
                    iVar2 = *piVar8;
                    piVar8 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges, uVar10);
                    iVar3 = *piVar8;
                    if (iVar3 < iVar2) {
                        piVar8 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                                (long)(param_1 + iVar12));
                        *piVar8 = iVar3;
                        piVar8 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&m_edges,
                                                                                uVar10);
                        *piVar8 = iVar2;
                        uVar11 = (ulong)(param_1 + iVar12 + 2);
                        puVar9 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&m_edges, uVar11);
                        uVar4 = *puVar9;
                        uVar10 = (ulong)(param_1 + iVar12 + 6);
                        puVar9 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&m_edges, uVar10);
                        uVar5 = *puVar9;
                        puVar9 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&m_edges, uVar11);
                        *puVar9 = uVar5;
                        puVar9 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&m_edges, uVar10);
                        *puVar9 = uVar4;
                        uVar11 = (ulong)(param_1 + iVar12 + 3);
                        puVar9 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&m_edges, uVar11);
                        uVar4 = *puVar9;
                        uVar10 = (ulong)(param_1 + iVar12 + 7);
                        puVar9 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&m_edges, uVar10);
                        uVar5 = *puVar9;
                        puVar9 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&m_edges, uVar11);
                        *puVar9 = uVar5;
                        puVar9 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&m_edges, uVar10);
                        *puVar9 = uVar4;
                        bVar6 = false;
                    }
                    lVar1 = iVar7 + lVar13;
                    lVar13 = lVar13 + 4;
                } while (lVar1 + 4 < (long)param_2);
            }
            param_2 = param_2 + -4;
        } while (!bVar6);
    }

    // 0x10033e1e0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.107
    void ___cxx_global_var_init_107() {
        new (&m_edges) Array<int, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee6800, &m_edges, 4294967296);
    }

} // namespace jag::oldscape::graphics::polygon

namespace jag::game {
    // 0x10051f490, 16 bytes, complete-object constructor, inline, placed by class name
    // MapElementType::Polygon::Polygon(): jumps straight to the base-object constructor

    // 0x10051f6c0, 144 bytes, base-object constructor, inline, placed by class name
    // MapElementType::Polygon::Polygon()
    void MapElementType::Polygon::Polygon() {
        new (this) MakeUniquePool<MapElementType::Polygon, 256>();
        new (this) eastl::vector<math::Point<int>, eastl::allocator>();
        field_32 = 9223372034707292159;
        field_40 = 9223372039002259456;
        field_48 = 18446744069414584320;
        field_56 = 18446744073709551615;
        new (&field_64) Array<unsigned int, eastl::allocator>();
        new (&field_88) Array<int, eastl::allocator>();
        new (&field_112) eastl::vector<int, eastl::allocator>();
    }

    // 0x1005ad7d0, 16 bytes, complete-object destructor, inline, placed by class name
    // MapElementType::Polygon::~Polygon(): jumps straight to the base-object destructor

    // 0x1005ad910, 64 bytes, base-object destructor, inline, placed by class name
    // MapElementType::Polygon::~Polygon()
    void MapElementType::Polygon::~Polygon() {
        (&field_112)->~vector();
        (&field_88)->~Array();
        (&field_64)->~Array();
        ~vector();
    }

} // namespace jag::game
