// libs/graphics/runetek7/fonts/FontMetrics.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "FontMetrics.h"

namespace jag::graphics {
    // 0x100009d00: FontMetrics::GetFontSheetPositions() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second()

    // 0x1008e02d0, the same machine code as FontMetrics::GetBaseLine() const
    unsigned int FontMetrics::GetVerticalSpacing() const {
        return m_verticalSpacing;
    }

    // 0x1008e62d0
    FontMetrics::FontMetrics()
        : MakeSharedPool<FontMetrics, 64>(), field_8(3), field_12(4294967295), m_sourcePackID(4294967295),
          m_pixelSize(0), m_upperCaseAscent(0), field_12361(0), m_maxAscent(0), m_maxDescent(0), m_fontSheetWidth(0),
          m_fontSheetHeight(0), m_verticalSpacing(0) {
        field_13688.unique_ptr<true, void>();
    }

    // 0x1008e6410
    FontMetrics::~FontMetrics() {
        field_13688.~unique_ptr();
        field_12368.~fixed_vector();
        field_24.~fixed_vector();
    }

    // 0x1008e64a0
    void FontMetrics::Clear() {
        field_12368.clear();
        field_13688.reset(nullptr);
        m_verticalSpacing = 0;
        m_upperCaseAscent = 0;
        field_12361 = 0;
        m_maxAscent = 0;
        m_maxDescent = 0;
        field_8 = 3;
    }

    // 0x1008e6510
    void FontMetrics::LoadFromPacket(unsigned int arg1, PacketT<Array<unsigned char>>& arg2) {
        field_12 = arg1;
        uint8_t bVar1 = arg2.g1();
        field_8 = (unsigned int)bVar1;
        if (bVar1 < 2) {
            LoadSpriteFontMetricsFromPacket(arg2);
        } else {
            if (bVar1 != 2) {
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "fonts/FontMetrics.cpp",
                          50, "FontMetricsLoader: Unsupported font type %d", field_8);
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/fonts/FontMetrics.cpp",
                                51, nullptr);
            }
            LoadVectorFontMetricsFromPacket(arg2);
        }
    }

    // 0x1008e65b0
    void FontMetrics::LoadVectorFontMetricsFromPacket(PacketT<Array<unsigned char>>& arg1) {
        m_sourcePackID = arg1.g4();
        m_pixelSize = arg1.g1();
    }

    // 0x1008e65e0
    void FontMetrics::LoadSpriteFontMetricsFromPacket(PacketT<Array<unsigned char>>& arg1) {
        uint8_t uVar2;
        uint8_t bVar3;
        unsigned int uVar6;
        vector<unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true>>* pvVar11;
        uint8_t* pbVar12;
        unsigned short* puVar13;
        uint16_t* puVar14;
        uint8_t* pbVar15;
        Layout* pLVar16;
        Layout* this_01;
        int* piVar17;
        int* piVar18;

        uint8_t bVar1 = arg1.g1();
        if (field_8 == 0) {
            uVar6 = field_12;
        } else {
            uVar6 = arg1.g4();
        }
        m_sourcePackID = uVar6;
        uint8_t* this_00 = &field_12368;
        this_00->resize(256);
        auto puVar7 = this_00->HeapBeginPtr();
        auto puVar8 = this_00->end();
        for (; puVar7 != puVar8; puVar7 = puVar7 + 5) {
            uVar2 = arg1.g1();
            *puVar7 = uVar2;
        }
        long lVar9 = this_00->HeapBeginPtr();
        long lVar10 = this_00->end();
        for (; lVar9 != lVar10; lVar9 = lVar9 + 5) {
            uVar2 = arg1.g1();
            *(uint8_t*)(lVar9 + 1) = uVar2;
        }
        lVar9 = this_00->HeapBeginPtr();
        lVar10 = this_00->end();
        for (; lVar9 != lVar10; lVar9 = lVar9 + 5) {
            uVar2 = arg1.g1();
            *(uint8_t*)(lVar9 + 4) = uVar2;
        }
        uint16_t uVar5 = arg1.g2();
        m_fontSheetWidth = uVar5;
        uVar5 = arg1.g2();
        m_fontSheetHeight = uVar5;
        puVar7 = &field_24;
        puVar7->resize(256);
        unsigned long uVar20 = 0;
        do {
            pvVar11 =
                (vector<unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true>>*)(*puVar7)[uVar20];
            pvVar11->resize(4);
            pbVar12 = (uint8_t*)(*this_00)[uVar20];
            bVar3 = *pbVar12;
            pvVar11 =
                (vector<unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true>>*)(*puVar7)[uVar20];
            puVar13 = (unsigned short*)(*pvVar11)[2];
            *puVar13 = (unsigned short)bVar3;
            lVar9 = (*this_00)[uVar20];
            bVar3 = *(uint8_t*)(lVar9 + 1);
            pvVar11 =
                (vector<unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true>>*)(*puVar7)[uVar20];
            puVar13 = (unsigned short*)(*pvVar11)[3];
            *puVar13 = (unsigned short)bVar3;
            uVar20 = uVar20 + 1;
        } while (uVar20 != 256);
        uVar20 = 0;
        do {
            uVar5 = arg1.g2();
            pvVar11 =
                (vector<unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true>>*)(*puVar7)[uVar20];
            puVar14 = (uint16_t*)(*pvVar11)[0];
            *puVar14 = uVar5;
            uVar20 = uVar20 + 1;
        } while (uVar20 != 256);
        uVar20 = 0;
        do {
            uVar5 = arg1.g2();
            pvVar11 =
                (vector<unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true>>*)(*puVar7)[uVar20];
            puVar14 = (uint16_t*)(*pvVar11)[1];
            *puVar14 = uVar5;
            uVar20 = uVar20 + 1;
        } while (uVar20 != 256);
        m_verticalSpacing = 0;
        if ((bVar1 & 1) == 0) {
            bVar3 = arg1.g1();
            m_verticalSpacing = (unsigned int)bVar3;
        } else {
            LoadComplexKerning(arg1);
        }
        bVar3 = arg1.g1();
        m_upperCaseAscent = bVar3;
        bVar3 = arg1.g1();
        field_12361 = bVar3;
        bVar3 = arg1.g1();
        m_maxAscent = bVar3;
        bVar3 = arg1.g1();
        m_maxDescent = bVar3;
        bVar3 = arg1.g1();
        if (bVar3 != 1) {
            uVar6 = (unsigned int)bVar3;
            m_verticalSpacing = (int)m_verticalSpacing / (int)uVar6;
            m_upperCaseAscent = m_upperCaseAscent / bVar3;
            field_12361 = field_12361 / bVar3;
            m_maxAscent = m_maxAscent / bVar3;
            m_maxDescent = m_maxDescent / bVar3;
            pbVar12 = (uint8_t*)this_00->HeapBeginPtr();
            pbVar15 = (uint8_t*)this_00->end();
            for (; pbVar12 != pbVar15; pbVar12 = pbVar12 + 5) {
                *pbVar12 = *pbVar12 / bVar3;
                pbVar12[1] = pbVar12[1] / bVar3;
                pbVar12[4] = (uint8_t)((int)(char)pbVar12[4] / (int)uVar6);
            }
            if ((bVar1 & 1) != 0) {
                pLVar16 = (Layout*)field_13688.operator->();
                this_01 = (Layout*)pLVar16->HeapBeginPtr();
                pLVar16 = (Layout*)pLVar16->end();
                for (; this_01 != pLVar16; this_01 = this_01 + 1064) {
                    piVar17 = (int*)this_01->HeapBeginPtr();
                    piVar18 = (int*)this_01->end();
                    for (; piVar17 != piVar18; piVar17 = piVar17 + 1) {
                        *piVar17 = *piVar17 / (int)uVar6;
                    }
                }
            }
        }
        puVar7 = (uint8_t*)this_00->HeapBeginPtr();
        puVar8 = (uint8_t*)this_00->end();
        for (; puVar7 != puVar8; puVar7 = puVar7 + 5) {
            puVar7[2] = *puVar7;
            puVar7[3] = 0;
        }
        char* pcVar19 = (char*)(*this_00)[9];
        lVar9 = (*this_00)[77];
        char cVar4 = *(char*)(lVar9 + 2) << 2;
        *pcVar19 = cVar4;
        pcVar19[1] = '\0';
        pcVar19[2] = cVar4;
        pcVar19[3] = '\0';
        pcVar19[4] = '\0';
    }

    // 0x1008e6a10
    void FontMetrics::UpdateFromVectorFontSource(VectorFontSource* vectorFontSource) {
        uint8_t local_3588[13664];
        unique_ptr<FontKerningData, std::default_delete<FontKerningData> _> local_28;

        if (vectorFontSource == nullptr) {
            LogAssert("source",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "FontMetrics.cpp",
                      57, nullptr);
        }
        if (IsVectorFont() == '\0') {
            LogAssert("IsVectorFont()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "FontMetrics.cpp",
                      58, nullptr);
        }
        *local_3588 = vectorFontSource->GenerateMetrics();
        m_fontSheetWidth = local_3588._12328_2_;
        m_fontSheetHeight = local_3588._12330_2_;
        m_upperCaseAscent = local_3588[12336];
        field_12361 = local_3588[12337];
        m_verticalSpacing = local_3588._12332_4_;
        m_maxAscent = local_3588[12338];
        m_maxDescent = local_3588[12339];
        field_12368 = (*((local_3588 + 12344)));
        field_13688 = local_28;
        field_24 = *local_3588;
    }

    // 0x1008e7490
    void FontMetrics::LoadComplexKerning(PacketT<Array<unsigned char>>& arg1) {
        vector<FontGlyphInfo, eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true>>* this_00;
        bool cVar1;
        uint32_t uVar2;
        long lVar3;
        Array<int, BucketAllocatorEASTL>* pAVar4;
        int* piVar5;
        unsigned long uVar6;
        vector<int, eastl::fixed_vector_allocator<4ul, 256ul, 4ul, 0ul, true>>* this_01;
        uint32_t* puVar7;
        int iVar9;
        Array<int, BucketAllocatorEASTL> local_68;
        unsigned long local_38;

        auto local_3068 = std::make_unique<FontKerningData>();
        field_13688 = local_3068;
        auto local_50 = field_13688.operator->();
        local_50->resize(256);
        local_3068 = std::array<Array<int, BucketAllocatorEASTL>, 256ul>();
        vector<FontGlyphInfo, eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true>>* local_40 =
            (vector<FontGlyphInfo, eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true>>*)&field_12368;
        unsigned long uVar8 = 0;
        do {
            local_38 = uVar8;
            lVar3 = (*local_40)[uVar8];
            local_1868 = Array<int, BucketAllocatorEASTL>((unsigned long)*(uint8_t*)(lVar3 + 1));
            pAVar4 = &local_3068[local_38];
            *pAVar4 = local_1868;
            lVar3 = pAVar4->end();
            if (lVar3 != 0) {
                uVar8 = 0;
                iVar9 = 0;
                do {
                    cVar1 = arg1.g1s();
                    piVar5 = (int*)(*pAVar4)[uVar8];
                    iVar9 = iVar9 + cVar1;
                    *piVar5 = iVar9;
                    uVar8 = uVar8 + 1;
                    uVar6 = pAVar4->end();
                } while (uVar8 < uVar6);
            }
            uVar8 = local_38 + 1;
        } while (uVar8 != 256);
        Array<int, BucketAllocatorEASTL> local_1868;
        uVar8 = 0;
        do {
            local_38 = uVar8;
            lVar3 = (*local_40)[uVar8];
            local_68 = Array<int, BucketAllocatorEASTL>((unsigned long)*(uint8_t*)(lVar3 + 1));
            pAVar4 = &local_1868[local_38];
            *pAVar4 = local_68;
            lVar3 = pAVar4->end();
            if (lVar3 != 0) {
                uVar8 = 0;
                iVar9 = 0;
                do {
                    cVar1 = arg1.g1s();
                    piVar5 = (int*)(*pAVar4)[uVar8];
                    iVar9 = iVar9 + cVar1;
                    *piVar5 = iVar9;
                    uVar8 = uVar8 + 1;
                    uVar6 = pAVar4->end();
                } while (uVar8 < uVar6);
            }
            uVar8 = local_38 + 1;
        } while (uVar8 != 256);
        uVar8 = 0;
        do {
            if (uVar8 != 32) {
                uVar6 = 0;
                do {
                    if (uVar6 != 32) {
                        uVar2 = CalculateSpriteKerning(&local_3068, &local_1868,
                                                       (fixed_vector<FontGlyphInfo, _256ul>*)local_40, uVar8, uVar6);
                        this_01 =
                            (vector<int, eastl::fixed_vector_allocator<4ul, 256ul, 4ul, 0ul, true>>*)(*local_50)[uVar8];
                        puVar7 = (uint32_t*)(*this_01)[uVar6];
                        *puVar7 = uVar2;
                    }
                    uVar6 = uVar6 + 1;
                } while (uVar6 != 256);
            }
            this_00 = local_40;
            uVar8 = uVar8 + 1;
        } while (uVar8 != 256);
        lVar3 = (*local_40)[32];
        cVar1 = *(char*)(lVar3 + 4);
        lVar3 = (*this_00)[32];
        m_verticalSpacing = (unsigned int)*(uint8_t*)(lVar3 + 1) + (int)cVar1;
    }

    // 0x1008e79a0
    int FontMetrics::CalculateSpriteKerning(const std::array<Array<int, BucketAllocatorEASTL>, 256ul>& arg1,
                                            const std::array<Array<int, BucketAllocatorEASTL>, 256ul>& arg2,
                                            const eastl::fixed_vector<FontGlyphInfo, 256ul>& fontGlyphInfos,
                                            unsigned long arg4, unsigned long arg5) {
        int* piVar7;
        unsigned int uVar9;
        unsigned long arg1_00;
        unsigned long arg1_01;
        Array<int> local_80;
        Array<int> local_68;

        unsigned char* puVar4 = &fontGlyphInfos[arg4];
        unsigned char* puVar5 = &fontGlyphInfos[arg5];
        unsigned char uVar8 = puVar4[4];
        int local_34 = (int)(char)uVar8;
        unsigned char uVar1 = puVar5[4];
        int iVar10 = (unsigned int)puVar5[1] + (int)(char)uVar1;
        if ((char)uVar8 < (char)uVar1) {
            uVar8 = uVar1;
        }
        if ((int)((unsigned int)puVar4[1] + local_34) <= iVar10) {
            iVar10 = (unsigned int)puVar4[1] + local_34;
        }
        unsigned int uVar2 = eastl::min<unsigned char>(*puVar4, *puVar5);
        Array<int, BucketAllocatorEASTL>* pAVar6 = &arg2[arg4];
        local_80.Array<BucketAllocatorEASTL>(*pAVar6);
        pAVar6 = &arg1[arg5];
        local_68.Array<BucketAllocatorEASTL>(*pAVar6);
        int iVar3 = (int)(char)uVar8;
        uVar2 = uVar2 & 255;
        int iVar11 = iVar10 - iVar3;
        if (!(iVar11 == 0 || iVar10 < iVar3)) {
            arg1_01 = (unsigned long)(iVar3 - (char)uVar1);
            arg1_00 = (unsigned long)(iVar3 - local_34);
            uVar9 = uVar2;
            do {
                piVar7 = &local_80[arg1_00];
                iVar10 = *piVar7;
                piVar7 = &local_68[arg1_01];
                arg1_01 = arg1_01 + 1;
                uVar2 = iVar10 + *piVar7;
                if ((int)uVar9 <= iVar10 + *piVar7) {
                    uVar2 = uVar9;
                }
                arg1_00 = arg1_00 + 1;
                iVar11 = iVar11 - 1;
                uVar9 = uVar2;
            } while (iVar11 != 0);
        }
        return -uVar2;
    }

    // 0x1008e7b90
    void FontMetrics::SetCoreMetricData(unsigned int arg1, eastl::fixed_vector<FontGlyphInfo, 256ul>&& fontGlyphInfos,
                                        unsigned int arg3, unsigned char arg4, unsigned char arg5, unsigned char arg6,
                                        unsigned char arg7) {
        field_12 = arg1;
        field_12368 = fontGlyphInfos;
        m_verticalSpacing = arg3;
        m_upperCaseAscent = arg4;
        field_12361 = arg5;
        m_maxAscent = arg6;
        m_maxDescent = arg7;
    }

} // namespace jag::graphics
