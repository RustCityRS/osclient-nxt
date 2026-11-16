// libs/graphics/runetek7/fonts/FontMetrics.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "FontMetrics.h"

namespace jag::graphics {
    // 0x100009d00: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second(), which has identical code
    FontMetrics::GetFontSheetPositions() const;

    // 0x1008e02d0: the linker folded this into FontMetrics::GetBaseLine() const, which has identical code
    FontMetrics::GetVerticalSpacing() const;

    // 0x1008e62d0, 144 bytes, base-object constructor, placed by class name and debug map
    // FontMetrics::FontMetrics()
    void FontMetrics::FontMetrics() {
        new (this) MakeSharedPool<FontMetrics, 64>();
        field_0 = &PTR__FontMetrics_100f18688;
        field_8 = 3;
        field_12 = 4294967295;
        m_sourcePackID = 4294967295;
        m_pixelSize = 0;
        new (&field_24) eastl::fixed_vector<eastl::fixed_vector<unsigned short, 4ul, true, eastl::allocator>, 256ul,
                                            true, eastl::allocator>();
        m_upperCaseAscent = 0;
        field_12361 = 0;
        m_maxAscent = 0;
        m_maxDescent = 0;
        m_fontSheetWidth = 0;
        m_fontSheetHeight = 0;
        m_verticalSpacing = 0;
        new (&field_12368) eastl::fixed_vector<FontGlyphInfo, 256ul, true, eastl::allocator>();
        std::unique_ptr<FontKerningData, std::default_delete<FontKerningData>>::unique_ptr<true, void>(
            (unique_ptr<FontKerningData, std::default_delete<FontKerningData>>*)&field_13688);
    }

    // 0x1008e6400, 16 bytes, complete-object constructor, placed by class name and debug map
    // FontMetrics::FontMetrics(): jumps straight to the base-object constructor

    // 0x1008e6410, 64 bytes, base-object destructor, placed by class name and debug map
    // FontMetrics::~FontMetrics()
    void FontMetrics::~FontMetrics() {
        field_0 = &PTR__FontMetrics_100f18688;
        (&field_13688)->~unique_ptr();
        (&field_12368)->~fixed_vector();
        (&field_24)->~fixed_vector();
    }

    // 0x1008e6470, 16 bytes, complete-object destructor, placed by class name and debug map
    // FontMetrics::~FontMetrics(): jumps straight to the base-object destructor

    // 0x1008e6480, 32 bytes, deleting destructor, placed by class name and debug map
    // FontMetrics::~FontMetrics()
    void FontMetrics::~FontMetrics() {
        ~FontMetrics(this);
        operator_delete(this);
    }

    // 0x1008e64a0, 64 bytes, placed by class name and debug map
    // FontMetrics::Clear()
    void FontMetrics::Clear() {
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        (&field_13688, (FontKerningData*)0)->reset();
        m_verticalSpacing = 0;
        m_upperCaseAscent = 0;
        field_12361 = 0;
        m_maxAscent = 0;
        m_maxDescent = 0;
        field_8 = 3;
    }

    // 0x1008e6510, 160 bytes, placed by class name and debug map
    // FontMetrics::LoadFromPacket(unsigned int, PacketT<Array<unsigned char, eastl::allocator> >&)
    void FontMetrics::LoadFromPacket(uint param_1, PacketT* param_2) {
        byte bVar1;
        undefined8 uVar2;

        field_12 = param_1;
        bVar1 = param_2->g1();
        field_8 = (uint)bVar1;
        if (bVar1 < 2) {
            LoadSpriteFontMetricsFromPacket(this, param_2);
        } else {
            if (bVar1 != 2) {
                uVar2 = logger::default_logger();
                logger::Logger::Log(uVar2, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/fonts/FontMetrics.cpp",
                                    50, "FontMetricsLoader: Unsupported font type %d", field_8);
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/fonts/FontMetrics.cpp",
                                51, (char*)0);
            }
            LoadVectorFontMetricsFromPacket(this, param_2);
        }
    }

    // 0x1008e65b0, 48 bytes, placed by class name and debug map
    // FontMetrics::LoadVectorFontMetricsFromPacket(PacketT<Array<unsigned char, eastl::allocator> >&)
    void FontMetrics::LoadVectorFontMetricsFromPacket(PacketT* param_1) {
        undefined1 uVar1;
        uint uVar2;

        uVar2 = param_1->g4();
        m_sourcePackID = uVar2;
        uVar1 = param_1->g1();
        m_pixelSize = uVar1;
    }

    // 0x1008e65e0, 1072 bytes, placed by class name and debug map
    // FontMetrics::LoadSpriteFontMetricsFromPacket(PacketT<Array<unsigned char, eastl::allocator> >&)
    void FontMetrics::LoadSpriteFontMetricsFromPacket(PacketT* param_1) {
        undefined1* this_00;
        byte bVar1;
        undefined1 uVar2;
        byte bVar3;
        char cVar4;
        undefined2 uVar5;
        uint uVar6;
        undefined1* puVar7;
        undefined1* puVar8;
        long lVar9;
        long lVar10;
        ulong uVar11;
        byte* pbVar12;
        vector<unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true, eastl::allocator>>* pvVar13;
        ushort* puVar14;
        undefined2* puVar15;
        byte* pbVar16;
        Layout* pLVar17;
        Layout* this_01;
        int* piVar18;
        int* piVar19;
        char* pcVar20;
        ulong uVar21;

        bVar1 = param_1->g1();
        if (field_8 == 0) {
            uVar6 = field_12;
        } else {
            uVar6 = param_1->g4();
        }
        m_sourcePackID = uVar6;
        this_00 = &field_12368;
        this_00->resize(256);
        puVar7 = (undefined1*)this_00->HeapBeginPtr();
        puVar8 = (undefined1*)this_00->end();
        for (; puVar7 != puVar8; puVar7 = puVar7 + 5) {
            uVar2 = param_1->g1();
            *puVar7 = uVar2;
        }
        lVar9 = this_00->HeapBeginPtr();
        lVar10 = this_00->end();
        for (; lVar9 != lVar10; lVar9 = lVar9 + 5) {
            uVar2 = param_1->g1();
            *(undefined1*)(lVar9 + 1) = uVar2;
        }
        lVar9 = this_00->HeapBeginPtr();
        lVar10 = this_00->end();
        for (; lVar9 != lVar10; lVar9 = lVar9 + 5) {
            uVar2 = param_1->g1();
            *(undefined1*)(lVar9 + 4) = uVar2;
        }
        uVar5 = param_1->g2();
        m_fontSheetWidth = uVar5;
        uVar5 = param_1->g2();
        m_fontSheetHeight = uVar5;
        puVar7 = &field_24;
        puVar7->resize(256);
        uVar21 = 0;
        do {
            uVar11 = eastl::vector<eastl::fixed_vector<unsigned short, 4ul, true, eastl::allocator>,
                                   eastl::fixed_vector_allocator<48ul, 256ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<eastl::fixed_vector<unsigned short, 4ul, true, eastl::allocator>,
                               eastl::fixed_vector_allocator<48ul, 256ul, 8ul, 0ul, true, eastl::allocator>>*)puVar7,
                       uVar21);
            eastl::vector<unsigned short,
                          eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true, eastl::allocator>>::resize(uVar11);
            pbVar12 = (byte*)eastl::vector<
                FontGlyphInfo, eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
            operator[](
                (vector<FontGlyphInfo, eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)
                    this_00,
                uVar21);
            bVar3 = *pbVar12;
            pvVar13 =
                (vector<unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true, eastl::allocator>>*)
                    eastl::vector<eastl::fixed_vector<unsigned short, 4ul, true, eastl::allocator>,
                                  eastl::fixed_vector_allocator<48ul, 256ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<eastl::fixed_vector<unsigned short, 4ul, true, eastl::allocator>,
                                eastl::fixed_vector_allocator<48ul, 256ul, 8ul, 0ul, true, eastl::allocator>>*)puVar7,
                        uVar21);
            puVar14 = (ushort*)
                eastl::vector<unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](pvVar13, 2);
            *puVar14 = (ushort)bVar3;
            lVar9 = eastl::vector<FontGlyphInfo,
                                  eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
            operator[](
                (vector<FontGlyphInfo, eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)
                    this_00,
                uVar21);
            bVar3 = *(byte*)(lVar9 + 1);
            pvVar13 =
                (vector<unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true, eastl::allocator>>*)
                    eastl::vector<eastl::fixed_vector<unsigned short, 4ul, true, eastl::allocator>,
                                  eastl::fixed_vector_allocator<48ul, 256ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<eastl::fixed_vector<unsigned short, 4ul, true, eastl::allocator>,
                                eastl::fixed_vector_allocator<48ul, 256ul, 8ul, 0ul, true, eastl::allocator>>*)puVar7,
                        uVar21);
            puVar14 = (ushort*)
                eastl::vector<unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](pvVar13, 3);
            *puVar14 = (ushort)bVar3;
            uVar21 = uVar21 + 1;
        } while (uVar21 != 256);
        uVar21 = 0;
        do {
            uVar5 = param_1->g2();
            pvVar13 =
                (vector<unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true, eastl::allocator>>*)
                    eastl::vector<eastl::fixed_vector<unsigned short, 4ul, true, eastl::allocator>,
                                  eastl::fixed_vector_allocator<48ul, 256ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<eastl::fixed_vector<unsigned short, 4ul, true, eastl::allocator>,
                                eastl::fixed_vector_allocator<48ul, 256ul, 8ul, 0ul, true, eastl::allocator>>*)puVar7,
                        uVar21);
            puVar15 = (undefined2*)
                eastl::vector<unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](pvVar13, 0);
            *puVar15 = uVar5;
            uVar21 = uVar21 + 1;
        } while (uVar21 != 256);
        uVar21 = 0;
        do {
            uVar5 = param_1->g2();
            pvVar13 =
                (vector<unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true, eastl::allocator>>*)
                    eastl::vector<eastl::fixed_vector<unsigned short, 4ul, true, eastl::allocator>,
                                  eastl::fixed_vector_allocator<48ul, 256ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<eastl::fixed_vector<unsigned short, 4ul, true, eastl::allocator>,
                                eastl::fixed_vector_allocator<48ul, 256ul, 8ul, 0ul, true, eastl::allocator>>*)puVar7,
                        uVar21);
            puVar15 = (undefined2*)
                eastl::vector<unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](pvVar13, 1);
            *puVar15 = uVar5;
            uVar21 = uVar21 + 1;
        } while (uVar21 != 256);
        m_verticalSpacing = 0;
        if ((bVar1 & 1) == 0) {
            bVar3 = param_1->g1();
            m_verticalSpacing = (uint)bVar3;
        } else {
            LoadComplexKerning(this, param_1);
        }
        bVar3 = param_1->g1();
        m_upperCaseAscent = bVar3;
        bVar3 = param_1->g1();
        field_12361 = bVar3;
        bVar3 = param_1->g1();
        m_maxAscent = bVar3;
        bVar3 = param_1->g1();
        m_maxDescent = bVar3;
        bVar3 = param_1->g1();
        if (bVar3 != 1) {
            uVar6 = (uint)bVar3;
            m_verticalSpacing = (int)m_verticalSpacing / (int)uVar6;
            m_upperCaseAscent = m_upperCaseAscent / bVar3;
            field_12361 = field_12361 / bVar3;
            m_maxAscent = m_maxAscent / bVar3;
            m_maxDescent = m_maxDescent / bVar3;
            pbVar12 = (byte*)this_00->HeapBeginPtr();
            pbVar16 = (byte*)this_00->end();
            for (; pbVar12 != pbVar16; pbVar12 = pbVar12 + 5) {
                *pbVar12 = *pbVar12 / bVar3;
                pbVar12[1] = pbVar12[1] / bVar3;
                pbVar12[4] = (byte)((int)(char)pbVar12[4] / (int)uVar6);
            }
            if ((bVar1 & 1) != 0) {
                pLVar17 = (Layout*)std::unique_ptr<FontKerningData, std::default_delete<FontKerningData>>::operator->(
                    (unique_ptr<FontKerningData, std::default_delete<FontKerningData>>*)&field_13688);
                this_01 = (Layout*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(pLVar17);
                pLVar17 = (Layout*)pLVar17->end();
                for (; this_01 != pLVar17; this_01 = this_01 + 1064) {
                    piVar18 = (int*)eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(this_01);
                    piVar19 = (int*)this_01->end();
                    for (; piVar18 != piVar19; piVar18 = piVar18 + 1) {
                        *piVar18 = *piVar18 / (int)uVar6;
                    }
                }
            }
        }
        puVar7 = (undefined1*)this_00->HeapBeginPtr();
        puVar8 = (undefined1*)this_00->end();
        for (; puVar7 != puVar8; puVar7 = puVar7 + 5) {
            puVar7[2] = *puVar7;
            puVar7[3] = 0;
        }
        pcVar20 = (char*)
            eastl::vector<FontGlyphInfo, eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
            operator[](
                (vector<FontGlyphInfo, eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)
                    this_00,
                9);
        lVar9 =
            eastl::vector<FontGlyphInfo, eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
            operator[](
                (vector<FontGlyphInfo, eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)
                    this_00,
                77);
        cVar4 = *(char*)(lVar9 + 2) << 2;
        *pcVar20 = cVar4;
        pcVar20[1] = '\0';
        pcVar20[2] = cVar4;
        pcVar20[3] = '\0';
        pcVar20[4] = '\0';
    }

    // 0x1008e6a10, 336 bytes, placed by class name and debug map
    // FontMetrics::UpdateFromVectorFontSource(VectorFontSource*)
    void FontMetrics::UpdateFromVectorFontSource(VectorFontSource* param_1) {
        undefined1 local_3588[13664];
        unique_ptr local_28[8];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_1 == (VectorFontSource*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("source",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "FontMetrics.cpp",
                      57, (char*)0);
        }
        if (IsVectorFont(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsVectorFont()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "FontMetrics.cpp",
                      58, (char*)0);
        }
        local_3588->GenerateMetrics();
        m_fontSheetWidth = local_3588._12328_2_;
        m_fontSheetHeight = local_3588._12330_2_;
        m_upperCaseAscent = local_3588[12336];
        field_12361 = local_3588[12337];
        m_verticalSpacing = local_3588._12332_4_;
        m_maxAscent = local_3588[12338];
        m_maxDescent = local_3588[12339];
        eastl::fixed_vector<FontGlyphInfo, 256ul, true, eastl::allocator>::operator=(
            (fixed_vector<FontGlyphInfo, 256ul, true, eastl::allocator>*)&field_12368,
            (fixed_vector*)(local_3588 + 12344));
        std::unique_ptr<FontKerningData, std::default_delete<FontKerningData>>::operator=(
            (unique_ptr<FontKerningData, std::default_delete<FontKerningData>>*)&field_13688, local_28);
        eastl::fixed_vector<
            eastl::fixed_vector<unsigned short, 4ul, true, eastl::allocator>, 256ul, true,
            eastl::allocator>::operator=((fixed_vector<eastl::fixed_vector<unsigned short, 4ul, true, eastl::allocator>,
                                                       256ul, true, eastl::allocator>*)&field_24,
                                         (fixed_vector*)local_3588);
        local_3588->~RuntimeGeneratedFontMetrics();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008e7490, 816 bytes, placed by class name
    // FontMetrics::LoadComplexKerning(PacketT<Array<unsigned char, eastl::allocator> >&)
    void FontMetrics::LoadComplexKerning(PacketT* param_1) {
        vector<FontGlyphInfo, eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true, eastl::allocator>>* this_00;
        char cVar1;
        undefined4 uVar2;
        long lVar3;
        Array<int, BucketAllocatorEASTL>* pAVar4;
        int* piVar5;
        ulong uVar6;
        vector<int, eastl::fixed_vector_allocator<4ul, 256ul, 4ul, 0ul, true, eastl::allocator>>* this_01;
        undefined4* puVar7;
        ulong uVar8;
        int iVar9;
        unique_ptr local_3068[6144];
        Array<int, BucketAllocatorEASTL> local_1868[6144];
        Array<int, BucketAllocatorEASTL> local_68[24];
        vector<eastl::fixed_vector<int, 256ul, true, eastl::allocator>,
               eastl::fixed_vector_allocator<1064ul, 256ul, 8ul, 0ul, true, eastl::allocator>>* local_50;
        FontMetrics* local_48;
        vector<FontGlyphInfo, eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true, eastl::allocator>>* local_40;
        ulong local_38;

        std::make_unique<FontKerningData>();
        std::unique_ptr<FontKerningData, std::default_delete<FontKerningData>>::operator=(
            (unique_ptr<FontKerningData, std::default_delete<FontKerningData>>*)&field_13688, local_3068);
        local_3068->~unique_ptr();
        local_50 = (vector<eastl::fixed_vector<int, 256ul, true, eastl::allocator>,
                           eastl::fixed_vector_allocator<1064ul, 256ul, 8ul, 0ul, true, eastl::allocator>>*)
                       std::unique_ptr<FontKerningData, std::default_delete<FontKerningData>>::operator->(
                           (unique_ptr<FontKerningData, std::default_delete<FontKerningData>>*)&field_13688);
        eastl::vector<eastl::fixed_vector<int, 256ul, true, eastl::allocator>,
                      eastl::fixed_vector_allocator<1064ul, 256ul, 8ul, 0ul, true, eastl::allocator>>::resize(local_50,
                                                                                                              256);
        std::array<Array<int, BucketAllocatorEASTL>, 256ul>::array();
        local_40 = (vector<FontGlyphInfo,
                           eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)&field_12368;
        uVar8 = 0;
        local_48 = this;
        do {
            local_38 = uVar8;
            lVar3 = eastl::vector<FontGlyphInfo, eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true,
                                                                               eastl::allocator>>::operator[](local_40,
                                                                                                              uVar8);
            Array<int, BucketAllocatorEASTL>::Array(local_1868, (ulong) * (byte*)(lVar3 + 1));
            pAVar4 = (Array<int, BucketAllocatorEASTL>*)std::array<Array<int, BucketAllocatorEASTL>, 256ul>::operator[](
                (array<Array<int, BucketAllocatorEASTL>, 256ul>*)local_3068, local_38);
            Array<int, BucketAllocatorEASTL>::operator=(pAVar4, (Array*)local_1868);
            local_1868->~Array();
            lVar3 = pAVar4->end();
            if (lVar3 != 0) {
                uVar8 = 0;
                iVar9 = 0;
                do {
                    cVar1 = param_1->g1s();
                    piVar5 = (int*)Array<int, BucketAllocatorEASTL>::operator[](pAVar4, uVar8);
                    iVar9 = iVar9 + cVar1;
                    *piVar5 = iVar9;
                    uVar8 = uVar8 + 1;
                    uVar6 = pAVar4->end();
                } while (uVar8 < uVar6);
            }
            uVar8 = local_38 + 1;
        } while (uVar8 != 256);
        std::array<Array<int, BucketAllocatorEASTL>, 256ul>::array();
        uVar8 = 0;
        do {
            local_38 = uVar8;
            lVar3 = eastl::vector<FontGlyphInfo, eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true,
                                                                               eastl::allocator>>::operator[](local_40,
                                                                                                              uVar8);
            Array<int, BucketAllocatorEASTL>::Array(local_68, (ulong) * (byte*)(lVar3 + 1));
            pAVar4 = (Array<int, BucketAllocatorEASTL>*)std::array<Array<int, BucketAllocatorEASTL>, 256ul>::operator[](
                (array<Array<int, BucketAllocatorEASTL>, 256ul>*)local_1868, local_38);
            Array<int, BucketAllocatorEASTL>::operator=(pAVar4, (Array*)local_68);
            local_68->~Array();
            lVar3 = pAVar4->end();
            if (lVar3 != 0) {
                uVar8 = 0;
                iVar9 = 0;
                do {
                    cVar1 = param_1->g1s();
                    piVar5 = (int*)Array<int, BucketAllocatorEASTL>::operator[](pAVar4, uVar8);
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
                        uVar2 = CalculateSpriteKerning((array*)local_3068, (array*)local_1868, (fixed_vector*)local_40,
                                                       uVar8, uVar6);
                        this_01 =
                            (vector<int, eastl::fixed_vector_allocator<4ul, 256ul, 4ul, 0ul, true, eastl::allocator>>*)
                                eastl::vector<eastl::fixed_vector<int, 256ul, true, eastl::allocator>,
                                              eastl::fixed_vector_allocator<1064ul, 256ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](local_50,
                                                                                                           uVar8);
                        puVar7 = (undefined4*)
                            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 256ul, 4ul, 0ul, true,
                                                                             eastl::allocator>>::operator[](this_01,
                                                                                                            uVar6);
                        *puVar7 = uVar2;
                    }
                    uVar6 = uVar6 + 1;
                } while (uVar6 != 256);
            }
            this_00 = local_40;
            uVar8 = uVar8 + 1;
        } while (uVar8 != 256);
        lVar3 = eastl::vector<FontGlyphInfo, eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true,
                                                                           eastl::allocator>>::operator[](local_40, 32);
        cVar1 = *(char*)(lVar3 + 4);
        lVar3 = eastl::vector<FontGlyphInfo, eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true,
                                                                           eastl::allocator>>::operator[](this_00, 32);
        local_48->m_verticalSpacing = (uint) * (byte*)(lVar3 + 1) + (int)cVar1;
        local_1868->~array();
        local_3068->~array();
    }

    // 0x1008e79a0, 336 bytes, placed by class name
    // FontMetrics::CalculateSpriteKerning(std::array<Array<int, BucketAllocatorEASTL>, 256ul> const&, std::array<Array<int, BucketAllocatorEASTL>, 256ul> const&, eastl::fixed_vector<FontGlyphInfo, 256ul, true, eastl::allocator> const&, unsigned long, unsigned long)
    /* FontMetrics::CalculateSpriteKerning(std::array<Array<int,
   BucketAllocatorEASTL>, 256ul> const&, std::array<Array<int, BucketAllocatorEASTL>,
   256ul> const&, eastl::fixed_vector<FontGlyphInfo, 256ul, true, eastl::allocator>
   const&, unsigned long, unsigned long) */

    int FontMetrics::CalculateSpriteKerning(array* param_1, array* param_2, fixed_vector* param_3, ulong param_4,
                                            ulong param_5) {
        uchar uVar1;
        uint uVar2;
        int iVar3;
        uchar* puVar4;
        uchar* puVar5;
        Array* pAVar6;
        int* piVar7;
        uchar uVar8;
        uint uVar9;
        ulong uVar10;
        ulong uVar11;
        int iVar12;
        int iVar13;
        Array<int, eastl::allocator> local_80[24];
        Array<int, eastl::allocator> local_68[24];
        int local_34;

        puVar4 = (uchar*)
            eastl::vector<FontGlyphInfo, eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
            operator[](
                (vector<FontGlyphInfo, eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)
                    param_3,
                param_4);
        puVar5 = (uchar*)
            eastl::vector<FontGlyphInfo, eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
            operator[](
                (vector<FontGlyphInfo, eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)
                    param_3,
                param_5);
        uVar8 = puVar4[4];
        local_34 = (int)(char)uVar8;
        uVar1 = puVar5[4];
        iVar12 = (uint)puVar5[1] + (int)(char)uVar1;
        if ((char)uVar8 < (char)uVar1) {
            uVar8 = uVar1;
        }
        if ((int)((uint)puVar4[1] + local_34) <= iVar12) {
            iVar12 = (uint)puVar4[1] + local_34;
        }
        uVar2 = eastl::min<unsigned char>(*puVar4, *puVar5);
        pAVar6 = (Array*)std::array<Array<int, BucketAllocatorEASTL>, 256ul>::operator[](
            (array<Array<int, BucketAllocatorEASTL>, 256ul>*)param_2, param_4);
        Array<int, eastl::allocator>::Array<BucketAllocatorEASTL>(local_80, pAVar6);
        pAVar6 = (Array*)std::array<Array<int, BucketAllocatorEASTL>, 256ul>::operator[](
            (array<Array<int, BucketAllocatorEASTL>, 256ul>*)param_1, param_5);
        Array<int, eastl::allocator>::Array<BucketAllocatorEASTL>(local_68, pAVar6);
        iVar3 = (int)(char)uVar8;
        uVar2 = uVar2 & 255;
        iVar13 = iVar12 - iVar3;
        if (!(iVar13 == 0 || iVar12 < iVar3)) {
            uVar11 = (ulong)(iVar3 - (char)uVar1);
            uVar10 = (ulong)(iVar3 - local_34);
            uVar9 = uVar2;
            do {
                piVar7 = (int*)Array<int, eastl::allocator>::operator[](local_80, uVar10);
                iVar12 = *piVar7;
                piVar7 = (int*)Array<int, eastl::allocator>::operator[](local_68, uVar11);
                uVar11 = uVar11 + 1;
                uVar2 = iVar12 + *piVar7;
                if ((int)uVar9 <= iVar12 + *piVar7) {
                    uVar2 = uVar9;
                }
                uVar10 = uVar10 + 1;
                iVar13 = iVar13 + -1;
                uVar9 = uVar2;
            } while (iVar13 != 0);
        }
        local_68->~Array();
        local_80->~Array();
        return -uVar2;
    }

    // 0x1008e7b90, 112 bytes, placed by class name
    // FontMetrics::SetCoreMetricData(unsigned int, eastl::fixed_vector<FontGlyphInfo, 256ul, true, eastl::allocator>&&, unsigned int, unsigned char, unsigned char, unsigned char, unsigned char)
    void FontMetrics::SetCoreMetricData(uint param_1, fixed_vector* param_2, uint param_3, uchar param_4, uchar param_5,
                                        uchar param_6, uchar param_7) {
        field_12 = param_1;
        eastl::fixed_vector<FontGlyphInfo, 256ul, true, eastl::allocator>::operator=(
            (fixed_vector<FontGlyphInfo, 256ul, true, eastl::allocator>*)&field_12368, param_2);
        m_verticalSpacing = param_3;
        m_upperCaseAscent = param_4;
        field_12361 = param_5;
        m_maxAscent = param_6;
        m_maxDescent = param_7;
    }

} // namespace jag::graphics
