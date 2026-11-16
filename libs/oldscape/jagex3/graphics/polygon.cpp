// libs/oldscape/jagex3/graphics/polygon.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "libs/game/runetek5/config/meltype/MapElementType.h"

namespace jag::oldscape::graphics::polygon {
    // 0x10392aac8
    int32_t m_scanX1;

    // 0x10392aacc
    int32_t m_scanX2;

    // 0x10392aad0
    int32_t m_scanY;

    // 0x10392aad4
    int32_t m_edgesLen;

    // 0x10392aad8, set at startup by ___cxx_global_var_init.107
    Array<int> m_edges = Array<int>();

    // 0x10392aaf0
    int32_t m_polygonCurrentPos;

    // 0x10392aaf4
    int32_t m_polygonCurrentEnd;

    // 0x10392aaf8
    int64_t m_polygonCurrentStart;

    // 0x100320010
    void SimpleFill(Array<int>& arg1, unsigned int arg2, Pix2D& pix2D) {
        int arg3 = arg1.end();
        SimpleFill(arg1, 0, arg3, arg2, pix2D);
    }

    // 0x100320050
    void SimpleFill(Array<int>& arg1, int arg2, int arg3, int arg4, Pix2D& pix2D) {
        if ((arg3 & 1U) != 0) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "graphics/polygon.cpp",
                            27, "len argument must be even");
        }
        if (arg4 < 0) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "graphics/polygon.cpp",
                            33, "c must be a valid colour");
        }
        Init();
        AddLoop(arg1, arg2, arg3);
        Fill(arg4, pix2D);
    }

    // 0x1003200e0
    void TransFill(Array<int>& arg1, int arg2, int arg3, Pix2D& pix2D) {
        int arg3_00 = arg1.end();
        TransFill(arg1, 0, arg3_00, arg2, arg3, pix2D);
    }

    // 0x100320120
    void TransFill(Array<int>& arg1, int arg2, int arg3, int arg4, int arg5, Pix2D& pix2D) {
        if ((arg3 & 1U) != 0) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "graphics/polygon.cpp",
                            46, "len argument must be even");
        }
        if (arg4 < 0) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "graphics/polygon.cpp",
                            52, "c must be a valid colour");
        }
        Init();
        AddLoop(arg1, arg2, arg3);
        FillTrans(arg4, arg5, pix2D);
    }

    // 0x1003201c0
    void Init() {
        m_edgesLen = 0;
    }

    // 0x1003201d0
    void AddLoop(Array<int>& arg1, int arg2, unsigned int arg3) {
        uint32_t uVar1;
        int iVar2;
        uint32_t* puVar5;
        int* piVar6;
        uint32_t in_register_00000014;
        Array<int>* array;
        int iVar8;
        unsigned int uVar9;
        Array<int> local_58;

        unsigned long local_38 = (((uint64_t)in_register_00000014 << 32) | (uint32_t)arg3);
        if ((arg3 & 1) != 0) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "graphics/polygon.cpp",
                            70, "len argument must be even");
        }
        unsigned long uVar7 = (unsigned long)(arg3 * 2 + m_edgesLen);
        unsigned long uVar4 = m_edges.end();
        if (uVar4 < uVar7) {
            local_58 = Array<int>(uVar7);
            if (0 < m_edgesLen) {
                uVar4 = 0;
                do {
                    puVar5 = &m_edges[uVar4];
                    uVar1 = *puVar5;
                    puVar5 = &local_58[uVar4];
                    *puVar5 = uVar1;
                    uVar4 = uVar4 + 1;
                } while ((long)uVar4 < (long)m_edgesLen);
            }
            m_edges = local_58;
        }
        unsigned int uVar3 = (int)local_38 + arg2;
        local_38 = (unsigned long)uVar3;
        if ((unsigned int)arg2 < uVar3) {
            uVar3 = uVar3 - 2;
            do {
                uVar9 = arg2;
                array = arg1;
                uVar4 = (unsigned long)uVar9;
                piVar6 = &arg1[(long)(int)(uVar3 + 1)];
                iVar2 = *piVar6;
                piVar6 = (int*)(*array)[(unsigned long)(uVar9 + 1)];
                iVar8 = *piVar6;
                if (iVar2 < iVar8) {
                    puVar5 = (uint32_t*)(*array)[(long)(int)uVar3];
                    uVar1 = *puVar5;
                    uVar7 = (unsigned long)m_edgesLen;
                    m_edgesLen = m_edgesLen + 1;
                    puVar5 = &m_edges[uVar7];
                    *puVar5 = uVar1;
                    uVar7 = (unsigned long)m_edgesLen;
                    m_edgesLen = m_edgesLen + 1;
                    piVar6 = &m_edges[uVar7];
                    *piVar6 = iVar2;
                LAB_100320312:
                    puVar5 = (uint32_t*)(*array)[uVar4];
                    uVar1 = *puVar5;
                    uVar4 = (unsigned long)m_edgesLen;
                    m_edgesLen = m_edgesLen + 1;
                    puVar5 = &m_edges[uVar4];
                    *puVar5 = uVar1;
                    uVar4 = (unsigned long)m_edgesLen;
                    m_edgesLen = m_edgesLen + 1;
                    piVar6 = &m_edges[uVar4];
                    *piVar6 = iVar8;
                } else if (iVar8 < iVar2) {
                    puVar5 = (uint32_t*)(*array)[(unsigned long)uVar9];
                    uVar1 = *puVar5;
                    uVar4 = (unsigned long)m_edgesLen;
                    m_edgesLen = m_edgesLen + 1;
                    puVar5 = &m_edges[uVar4];
                    array = arg1;
                    *puVar5 = uVar1;
                    uVar4 = (unsigned long)m_edgesLen;
                    m_edgesLen = m_edgesLen + 1;
                    piVar6 = &m_edges[uVar4];
                    *piVar6 = iVar8;
                    uVar4 = (unsigned long)(int)uVar3;
                    iVar8 = iVar2;
                    goto LAB_100320312;
                }
                arg2 = uVar9 + 2;
                uVar3 = uVar9;
            } while (uVar9 + 2 < (unsigned int)local_38);
        }
    }

    // 0x100320420
    void Fill(int arg1, Pix2D& pix2D) {
        InitScanLines(pix2D);
        while (true) {
            if (GetScanLine(pix2D) == '\0')
                break;
            (**(void (**)(...))(pix2D.field_0 + 56))(pix2D, m_scanX1, m_scanY, m_scanX2 - m_scanX1, arg1);
        }
    }

    // 0x100320480
    void FillTrans(int arg1, int arg2, Pix2D& pix2D) {
        InitScanLines(pix2D);
        while (true) {
            if (GetScanLine(pix2D) == '\0')
                break;
            (**(void (**)(...))(pix2D.field_0 + 64))(pix2D, m_scanX1, m_scanY, m_scanX2 - m_scanX1, arg1, arg2);
        }
    }

    // 0x1003204e0
    void InitScanLines(Pix2D& pix2D) {
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
            piVar4 = &m_edges[1];
            iVar5 = *piVar4;
            if (*piVar4 < pix2D.field_16) {
                iVar5 = pix2D.field_16;
            }
            for (; iVar6 < m_edgesLen; iVar6 = iVar6 + 4) {
                piVar4 = &m_edges[(long)(iVar6 + 1)];
                iVar1 = *piVar4;
                if (iVar5 < iVar1)
                    break;
                piVar4 = &m_edges[(long)iVar6];
                iVar2 = *piVar4;
                piVar4 = &m_edges[(long)(iVar6 + 2)];
                iVar3 = *piVar4;
                piVar4 = &m_edges[(long)(iVar6 + 3)];
                iVar3 = ((iVar3 - iVar2) * 65536) / (*piVar4 - iVar1);
                piVar4 = &m_edges[(long)iVar6];
                *piVar4 = (iVar5 - iVar1) * iVar3 + iVar2 * 65536 + 32768;
                piVar4 = &m_edges[(long)(iVar6 + 2)];
                *piVar4 = iVar3;
            }
            m_scanY = iVar5 - 1;
            m_polygonCurrentEnd = iVar6;
        }
        m_polygonCurrentStart = 0;
        m_polygonCurrentPos = m_polygonCurrentEnd;
    }

    // 0x100320660
    void GetScanLine(Pix2D& pix2D) {
        int iVar1;
        int iVar2;
        int iVar3;
        uint32_t uVar4;
        int iVar5;
        int iVar6;
        int* piVar8;
        unsigned int* puVar9;
        uint32_t* puVar10;
        int iVar11;
        unsigned int uVar12;
        int arg2;
        unsigned long arg1;
        unsigned long local_38;

        unsigned long uVar7 = (unsigned long)m_polygonCurrentPos;
        int iVar13 = m_scanY;
        do {
            uVar12 = m_polygonCurrentStart;
            iVar5 = m_polygonCurrentEnd;
            iVar6 = (int)uVar7;
            if (iVar6 < m_polygonCurrentEnd) {
                piVar8 = &m_edges[(long)iVar6];
                m_scanX1 = *piVar8 >> 16;
                piVar8 = &m_edges[(long)(iVar6 + 4)];
                m_scanX2 = *piVar8 >> 16;
                piVar8 = &m_edges[(long)(iVar6 + 2)];
                iVar13 = *piVar8;
                piVar8 = &m_edges[(long)iVar6];
                *piVar8 = *piVar8 + iVar13;
                piVar8 = &m_edges[(long)(iVar6 + 6)];
                iVar13 = *piVar8;
                piVar8 = &m_edges[(long)(iVar6 + 4)];
                *piVar8 = *piVar8 + iVar13;
                m_polygonCurrentPos = iVar6 + 8;
            LAB_10032097e:
                return iVar6 < iVar5;
            }
            iVar13 = iVar13 + 1;
            m_scanY = iVar13;
            if (pix2D.field_20 <= iVar13)
                goto LAB_10032097e;
            local_38 = (unsigned long)m_polygonCurrentStart;
            arg1 = (unsigned long)(int)m_polygonCurrentStart;
            for (arg2 = m_polygonCurrentEnd; arg2 < (int)m_edgesLen; arg2 = arg2 + 4) {
                piVar8 = &m_edges[(long)(arg2 + 1)];
                iVar11 = *piVar8;
                if (iVar13 < iVar11)
                    break;
                piVar8 = &m_edges[(long)arg2];
                iVar1 = *piVar8;
                piVar8 = &m_edges[(long)(arg2 + 2)];
                iVar2 = *piVar8;
                piVar8 = &m_edges[(long)(arg2 + 3)];
                iVar3 = *piVar8;
                puVar9 = &m_edges[(long)arg2];
                *puVar9 = iVar1 << 16 | 32768;
                piVar8 = &m_edges[(long)(arg2 + 2)];
                *piVar8 = ((iVar2 - iVar1) * 65536) / (iVar3 - iVar11);
            }
            if ((int)uVar12 < arg2) {
                do {
                    piVar8 = &m_edges[arg1 + 3];
                    if (*piVar8 <= iVar13) {
                        iVar11 = (int)local_38;
                        puVar10 = &m_edges[(long)iVar11];
                        uVar4 = *puVar10;
                        puVar10 = &m_edges[arg1];
                        *puVar10 = uVar4;
                        puVar10 = &m_edges[(long)(iVar11 + 1)];
                        uVar4 = *puVar10;
                        puVar10 = &m_edges[arg1 + 1];
                        *puVar10 = uVar4;
                        puVar10 = &m_edges[(long)(iVar11 + 2)];
                        uVar4 = *puVar10;
                        puVar10 = &m_edges[arg1 + 2];
                        *puVar10 = uVar4;
                        puVar10 = &m_edges[(long)(iVar11 + 3)];
                        uVar4 = *puVar10;
                        puVar10 = &m_edges[arg1 + 3];
                        *puVar10 = uVar4;
                        local_38 = (unsigned long)(iVar11 + 4);
                    }
                    arg1 = arg1 + 4;
                } while ((long)arg1 < (long)arg2);
            }
            uVar12 = (unsigned int)local_38;
            if (uVar12 == m_edgesLen) {
                m_edgesLen = 0;
                goto LAB_10032097e;
            }
            SortCurrentEdges(uVar12, arg2);
            uVar7 = local_38;
            m_polygonCurrentEnd = arg2;
            m_polygonCurrentStart = uVar12;
        } while (true);
    }

    // 0x1003209a0
    void SortEdges(int arg1, int arg2) {
        uint32_t uVar1;
        int iVar2;
        uint32_t uVar3;
        uint32_t uVar4;
        int iVar5;
        uint32_t uVar6;
        uint32_t* puVar7;
        int* piVar8;
        unsigned long arg1_00;
        int local_34;

        if (arg1 + 4 < arg2) {
            puVar7 = &m_edges[(long)arg1];
            uVar1 = *puVar7;
            piVar8 = &m_edges[(long)(arg1 + 1)];
            iVar2 = *piVar8;
            puVar7 = &m_edges[(long)(arg1 + 2)];
            uVar3 = *puVar7;
            puVar7 = &m_edges[(long)(arg1 + 3)];
            uVar4 = *puVar7;
            arg1_00 = (unsigned long)(arg1 + 4);
            local_34 = arg1;
            do {
                piVar8 = &m_edges[arg1_00 + 1];
                iVar5 = *piVar8;
                if (iVar5 < iVar2) {
                    puVar7 = &m_edges[arg1_00];
                    uVar6 = *puVar7;
                    puVar7 = &m_edges[(long)local_34];
                    *puVar7 = uVar6;
                    piVar8 = &m_edges[(long)(local_34 + 1)];
                    *piVar8 = iVar5;
                    puVar7 = &m_edges[arg1_00 + 2];
                    uVar6 = *puVar7;
                    puVar7 = &m_edges[(long)(local_34 + 2)];
                    *puVar7 = uVar6;
                    puVar7 = &m_edges[arg1_00 + 3];
                    uVar6 = *puVar7;
                    puVar7 = &m_edges[(long)(local_34 + 3)];
                    *puVar7 = uVar6;
                    puVar7 = &m_edges[(long)(local_34 + 4)];
                    uVar6 = *puVar7;
                    puVar7 = &m_edges[arg1_00];
                    *puVar7 = uVar6;
                    puVar7 = &m_edges[(long)(local_34 + 5)];
                    uVar6 = *puVar7;
                    puVar7 = &m_edges[arg1_00 + 1];
                    *puVar7 = uVar6;
                    puVar7 = &m_edges[(long)(local_34 + 6)];
                    uVar6 = *puVar7;
                    puVar7 = &m_edges[arg1_00 + 2];
                    *puVar7 = uVar6;
                    puVar7 = &m_edges[(long)(local_34 + 7)];
                    uVar6 = *puVar7;
                    puVar7 = &m_edges[arg1_00 + 3];
                    *puVar7 = uVar6;
                    local_34 = local_34 + 4;
                }
                arg1_00 = arg1_00 + 4;
            } while ((long)arg1_00 < (long)arg2);
            puVar7 = &m_edges[(long)local_34];
            *puVar7 = uVar1;
            piVar8 = &m_edges[(long)(local_34 + 1)];
            *piVar8 = iVar2;
            puVar7 = &m_edges[(long)(local_34 + 2)];
            *puVar7 = uVar3;
            puVar7 = &m_edges[(long)(local_34 + 3)];
            *puVar7 = uVar4;
            SortEdges(arg1, local_34);
            SortEdges(local_34 + 4, arg2);
        }
    }

    // 0x100320c00
    void SortCurrentEdges(int arg1, int arg2) {
        long lVar1;
        int iVar2;
        int iVar3;
        uint32_t uVar4;
        uint32_t uVar5;
        bool bVar6;
        int* piVar8;
        uint32_t* puVar9;
        unsigned long uVar10;
        unsigned long uVar11;
        int iVar12;
        long lVar13;

        int iVar7 = arg1 + 4;
        do {
            if (arg2 < arg1 + 8) {
                return;
            }
            bVar6 = true;
            if (iVar7 < arg2) {
                bVar6 = true;
                lVar13 = 0;
                do {
                    iVar12 = (int)lVar13;
                    uVar10 = iVar7 + lVar13;
                    piVar8 = &m_edges[(long)(arg1 + iVar12)];
                    iVar2 = *piVar8;
                    piVar8 = &m_edges[uVar10];
                    iVar3 = *piVar8;
                    if (iVar3 < iVar2) {
                        piVar8 = &m_edges[(long)(arg1 + iVar12)];
                        *piVar8 = iVar3;
                        piVar8 = &m_edges[uVar10];
                        *piVar8 = iVar2;
                        uVar11 = (unsigned long)(arg1 + iVar12 + 2);
                        puVar9 = &m_edges[uVar11];
                        uVar4 = *puVar9;
                        uVar10 = (unsigned long)(arg1 + iVar12 + 6);
                        puVar9 = &m_edges[uVar10];
                        uVar5 = *puVar9;
                        puVar9 = &m_edges[uVar11];
                        *puVar9 = uVar5;
                        puVar9 = &m_edges[uVar10];
                        *puVar9 = uVar4;
                        uVar11 = (unsigned long)(arg1 + iVar12 + 3);
                        puVar9 = &m_edges[uVar11];
                        uVar4 = *puVar9;
                        uVar10 = (unsigned long)(arg1 + iVar12 + 7);
                        puVar9 = &m_edges[uVar10];
                        uVar5 = *puVar9;
                        puVar9 = &m_edges[uVar11];
                        *puVar9 = uVar5;
                        puVar9 = &m_edges[uVar10];
                        *puVar9 = uVar4;
                        bVar6 = false;
                    }
                    lVar1 = iVar7 + lVar13;
                    lVar13 = lVar13 + 4;
                } while (lVar1 + 4 < (long)arg2);
            }
            arg2 = arg2 - 4;
        } while (!bVar6);
    }

} // namespace jag::oldscape::graphics::polygon

namespace jag::game {
    // 0x10051f6c0
    MapElementType::Polygon::Polygon()
        : MakeUniquePool<MapElementType::Polygon, 256>(), eastl::vector<math::Point<int>>(),
          field_32(9223372034707292159), field_40(9223372039002259456), field_48(18446744069414584320),
          field_56(18446744073709551615) {}

    // 0x1005ad910
    MapElementType::Polygon::~Polygon() {
        field_112.~vector();
        field_88.~Array();
        field_64.~Array();
    }

} // namespace jag::game
