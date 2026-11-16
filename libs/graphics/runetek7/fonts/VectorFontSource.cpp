// libs/graphics/runetek7/fonts/VectorFontSource.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "VectorFontSource.h"

namespace jag::graphics {
    // 0x100f4432c, 4 bytes, __data
    float VectorFontSource::m_renderScaleFactor = 1.0f;

    // 0x100058b00: the linker folded this into shared_ptr<oldscape::rs2lib::worldmap::MapElement>::operator bool() const, which has identical code
    VectorFontSource::IsValid() const;

    // 0x1008df6c0, 1232 bytes, placed by class name and debug map
    // VectorFontSource::RenderGlyphs(RGBAImage*, unsigned short, unsigned short, eastl::fixed_vector<eastl::fixed_vector<unsigned short, 4ul, true, eastl::allocator>, 256ul, true, eastl::allocator> const&)
    ulong VectorFontSource::RenderGlyphs(RGBAImage* param_1, ushort param_2, ushort param_3, fixed_vector* param_4) {
        ushort uVar1;
        FT_FaceRec_* pFVar2;
        LoginManager* this_00;
        VectorFontSource* pVVar3;
        char cVar4;
        int iVar5;
        undefined4 uVar6;
        undefined8 uVar7;
        vector<unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true, eastl::allocator>>* this_01;
        ushort* puVar8;
        short* psVar9;
        Array<unsigned char, BucketAllocatorEASTL>* pAVar10;
        undefined1* puVar11;
        undefined8 uVar12;
        char cVar13;
        ulong uVar14;
        undefined8 uVar15;
        char* pcVar16;
        uint uVar17;
        int iVar18;
        uint uVar19;
        ushort uVar20;
        FT_Bitmap_ local_98[40];
        vector<unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true, eastl::allocator>>* local_70;
        ulong local_68;
        LoginManager* local_60;
        vector<eastl::fixed_vector<unsigned short, 4ul, true, eastl::allocator>,
               eastl::fixed_vector_allocator<48ul, 256ul, 8ul, 0ul, true, eastl::allocator>>* local_58;
        ulong local_50;
        uint local_48;
        uint local_44;
        VectorFontSource* local_40;
        uint local_38;
        char local_31;

        iVar5 = _FT_Set_Pixel_Sizes(field_8, 0, field_37);
        if (iVar5 == 0) {
            uVar17 = (uint)param_2;
            cVar4 = param_1->Create((uint)param_2, (uint)param_3, 0);
            if (cVar4 == '\0') {
                uVar7 = logger::default_logger();
                pcVar16 = "Could not create %u x %u bitmap for font spritesheet for vector font source %d ";
                uVar12 = 5;
                uVar15 = 219;
            } else {
                if (field_0 != (VectorFontLoader*)0) {
                    local_50 = 0;
                    local_60 = (LoginManager*)param_1;
                    local_58 =
                        (vector<eastl::fixed_vector<unsigned short, 4ul, true, eastl::allocator>,
                                eastl::fixed_vector_allocator<48ul, 256ul, 8ul, 0ul, true, eastl::allocator>>*)param_4;
                    local_48 = (uint)param_2;
                    local_40 = this;
                    do {
                        this_01 = (vector<unsigned short,
                                          eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true, eastl::allocator>>*)
                            eastl::vector<eastl::fixed_vector<unsigned short, 4ul, true, eastl::allocator>,
                                          eastl::fixed_vector_allocator<48ul, 256ul, 8ul, 0ul, true,
                                                                        eastl::allocator>>::operator[](local_58,
                                                                                                       local_50);
                        puVar8 =
                            (ushort*)eastl::vector<unsigned short,
                                                   eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true,
                                                                                 eastl::allocator>>::operator[](this_01,
                                                                                                                2);
                        uVar1 = *puVar8;
                        uVar17 = (uint)uVar1;
                        psVar9 =
                            (short*)eastl::vector<unsigned short,
                                                  eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true,
                                                                                eastl::allocator>>::operator[](this_01,
                                                                                                               3);
                        pVVar3 = local_40;
                        if ((uVar1 != 0) && (*psVar9 != 0)) {
                            local_38 = CONCAT22(local_38._2_2_, *psVar9);
                            pFVar2 = local_40->field_8;
                            uVar19 = (uint)local_50;
                            uVar6 = FontHelpers::FromCodeMap(uVar19);
                            uVar6 = _FT_Get_Char_Index(pFVar2, uVar6);
                            iVar5 = _FT_Load_Glyph(pVVar3->field_8, uVar6, 32);
                            if ((iVar5 == 0) &&
                                (iVar5 = _FT_Render_Glyph(*(undefined8*)(pVVar3->field_8 + 152)), iVar5 == 0)) {
                                if (*(uint*)(*(long*)(pVVar3->field_8 + 152) + 156) != (uint)uVar1) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("w == m_fontFace->glyph->bitmap.width",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "graphics/runetek7/fonts/VectorFontSource.cpp",
                                              247, (char*)0);
                                }
                                uVar14 = (ulong)(ushort)local_38;
                                if (*(uint*)(*(long*)(pVVar3->field_8 + 152) + 152) != (local_38 & 65535)) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("h == m_fontFace->glyph->bitmap.rows",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "graphics/runetek7/fonts/VectorFontSource.cpp",
                                              248, (char*)0);
                                }
                                local_31 = *(char*)(*(long*)(pVVar3->field_8 + 152) + 178);
                                uVar20 = (ushort)local_38;
                                if (local_31 == '\x01') {
                                    _FT_Bitmap_Init(local_98);
                                    uVar7 = pVVar3->field_0->end();
                                    _FT_Bitmap_Convert(uVar7, *(long*)(pVVar3->field_8 + 152) + 152, local_98, 1);
                                    uVar20 = (ushort)local_38;
                                    std::swap<FT_Bitmap_>(local_98,
                                                          (FT_Bitmap_*)(*(long*)(pVVar3->field_8 + 152) + 152));
                                    uVar7 = pVVar3->field_0->end();
                                    _FT_Bitmap_Done(uVar7);
                                }
                                if (*(int*)(*(long*)(pVVar3->field_8 + 152) + 160) !=
                                    *(int*)(*(long*)(pVVar3->field_8 + 152) + 156)) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert(
                                        "(uint)m_fontFace->glyph->bitmap.pitch == m_fontFace->glyph->bitmap.width",
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/fonts/VectorFontSource.cpp",
                                        264, (char*)0);
                                }
                                if (*(char*)(*(long*)(pVVar3->field_8 + 152) + 178) != '\x02') {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("m_fontFace->glyph->bitmap.pixel_mode == FT_PIXEL_MODE_GRAY",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "graphics/runetek7/fonts/VectorFontSource.cpp",
                                              265, (char*)0);
                                }
                                if (uVar20 < 2) {
                                    uVar14 = 1;
                                }
                                if (uVar1 < 2) {
                                    uVar17 = 1;
                                }
                                uVar19 = 0;
                                local_70 = this_01;
                                local_68 = uVar14;
                                local_44 = uVar17;
                                do {
                                    iVar5 = 0;
                                    local_38 = uVar19;
                                    do {
                                        uVar17 = local_38;
                                        uVar19 = *(int*)(*(long*)(local_40->field_8 + 152) + 160) * iVar5 + local_38;
                                        puVar8 = (ushort*)eastl::vector<
                                            unsigned short,
                                            eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](this_01, 0);
                                        uVar1 = *puVar8;
                                        puVar8 = (ushort*)eastl::vector<
                                            unsigned short,
                                            eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](this_01, 1);
                                        this_00 = local_60;
                                        iVar18 = ((uint)*puVar8 + iVar5) * local_48 + uVar1 + uVar17;
                                        pAVar10 = (Array<unsigned char, BucketAllocatorEASTL>*)
                                                      local_60->GetDevCredentialsOutputDirectory();
                                        puVar11 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                                            pAVar10, (ulong)(uint)(iVar18 * 4));
                                        *puVar11 = 255;
                                        pAVar10 = (Array<unsigned char, BucketAllocatorEASTL>*)
                                                      this_00->GetDevCredentialsOutputDirectory();
                                        puVar11 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                                            pAVar10, (ulong)(iVar18 * 4 + 1));
                                        *puVar11 = 255;
                                        pAVar10 = (Array<unsigned char, BucketAllocatorEASTL>*)
                                                      this_00->GetDevCredentialsOutputDirectory();
                                        puVar11 = (undefined1*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                                            pAVar10, (ulong)(iVar18 * 4 + 2));
                                        *puVar11 = 255;
                                        cVar4 = *(char*)(*(long*)(*(long*)(local_40->field_8 + 152) + 168) +
                                                         (ulong)(uVar19 & 65535));
                                        cVar13 = -cVar4;
                                        if (local_31 != '\x01') {
                                            cVar13 = cVar4;
                                        }
                                        pAVar10 = (Array<unsigned char, BucketAllocatorEASTL>*)
                                                      this_00->GetDevCredentialsOutputDirectory();
                                        this_01 = local_70;
                                        pcVar16 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                                            pAVar10, (ulong)(iVar18 * 4 + 3));
                                        *pcVar16 = cVar13;
                                        iVar5 = iVar5 + 1;
                                    } while ((int)local_68 != iVar5);
                                    uVar19 = local_38 + 1;
                                } while (uVar19 != local_44);
                            } else {
                                uVar7 = logger::default_logger();
                                logger::Logger::Log(uVar7, 0, 2,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/graphics/runetek7/fonts/VectorFontSource.cpp",
                                                    243, "Could not render glyph %u", uVar19);
                            }
                        }
                        local_50 = local_50 + 1;
                    } while (local_50 != 256);
                    uVar14 = CONCAT71((int7)((ulong)local_58 >> 8), 1);
                    goto LAB_1008dfb76;
                }
                uVar7 = logger::default_logger();
                uVar17 = field_32;
                pcVar16 = "Could not render glyphs for vector font source %d - owning cache has expired.";
                uVar12 = 5;
                uVar15 = 226;
            }
        } else {
            uVar7 = logger::default_logger();
            uVar17 = field_32;
            pcVar16 = "Could not set size for vector font source %d";
            uVar12 = 2;
            uVar15 = 213;
        }
        uVar14 = 0;
        logger::Logger::Log(uVar7, 0, uVar12,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "fonts/VectorFontSource.cpp",
                            uVar15, pcVar16, uVar17);
    LAB_1008dfb76:
        return uVar14 & 4294967295;
    }

    // 0x1008e61d0, 16 bytes, complete-object destructor, placed by class name
    // VectorFontSource::~VectorFontSource(): jumps straight to the base-object destructor

    // 0x1008e6b60, 1600 bytes, placed by class name
    // VectorFontSource::GenerateMetrics()
    VectorFontSource* VectorFontSource::GenerateMetrics() {
        undefined1* this_00;
        ushort uVar1;
        ushort uVar2;
        long lVar3;
        bool bVar4;
        ushort uVar5;
        short sVar6;
        ushort uVar7;
        undefined2 uVar8;
        int iVar9;
        undefined4 uVar10;
        undefined8 uVar11;
        FontGlyphInfo* pFVar12;
        int* piVar13;
        byte* pbVar14;
        uchar* puVar15;
        vector<eastl::fixed_vector<int, 256ul, true, eastl::allocator>,
               eastl::fixed_vector_allocator<1064ul, 256ul, 8ul, 0ul, true, eastl::allocator>>* this_01;
        fixed_vector* this_02;
        undefined4* puVar16;
        undefined4* puVar17;
        FontGlyphInfo FVar18;
        long lVar19;
        ulong uVar20;
        ulong uVar21;
        uint uVar22;
        long lVar23;
        long in_RSI;
        ulong uVar24;
        ushort uVar25;
        int iVar26;
        uchar local_77;
        uchar local_76;
        byte local_75;
        byte local_74;
        uchar local_73;
        uchar local_72;
        uchar local_71;
        undefined4 local_70;
        ushort local_6c;
        ushort local_6a;
        ulong local_68[6];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (this) RuntimeGeneratedFontMetrics();
        iVar9 = _FT_Set_Pixel_Sizes(*(undefined8*)(in_RSI + 8), 0, *(undefined1*)(in_RSI + 36));
        if (iVar9 == 0) {
            if ((*(byte*)(*(long*)(in_RSI + 8) + 16) & 64) != 0) {
                std::make_unique<FontKerningData>();
                std::unique_ptr<FontKerningData, std::default_delete<FontKerningData>>::operator=(
                    (unique_ptr<FontKerningData, std::default_delete<FontKerningData>>*)&field_13664,
                    (unique_ptr*)local_68);
                local_68->~unique_ptr();
            }
            local_75 = 0;
            local_74 = 0;
            local_73 = '\0';
            local_72 = '\0';
            this_00 = &field_12344;
            uVar24 = 0;
            do {
                uVar11 = *(undefined8*)(in_RSI + 8);
                uVar22 = (uint)uVar24;
                uVar10 = FontHelpers::FromCodeMap(uVar22);
                uVar10 = _FT_Get_Char_Index(uVar11, uVar10);
                iVar9 = _FT_Load_Glyph(*(undefined8*)(in_RSI + 8), uVar10, 32);
                if (iVar9 != 0) {
                    uVar11 = logger::default_logger();
                    logger::Logger::Log(uVar11, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/fonts/VectorFontSource.cpp",
                                        72, "Could not load glyph %u for vector font source %d", uVar22,
                                        *(undefined4*)(in_RSI + 32));
                }
                pFVar12 = eastl::vector<FontGlyphInfo,
                                        eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                    emplace_back<>(
                        (vector<FontGlyphInfo,
                                eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)this_00);
                lVar3 = *(long*)(*(long*)(in_RSI + 8) + 152);
                uVar20 = *(ulong*)(lVar3 + 48);
                uVar21 = (ulong)((int)uVar20 + 63);
                if (-1 < (long)uVar20) {
                    uVar21 = uVar20;
                }
                *pFVar12 = SUB81(uVar21 >> 6, 0);
                uVar20 = *(ulong*)(lVar3 + 80);
                uVar21 = (ulong)((int)uVar20 + 63);
                if (-1 < (long)uVar20) {
                    uVar21 = uVar20;
                }
                pFVar12[2] = SUB81(uVar21 >> 6, 0);
                lVar19 = *(long*)(lVar3 + 56);
                lVar23 = lVar19 + 63;
                if (-1 < lVar19) {
                    lVar23 = lVar19;
                }
                pFVar12[1] = SUB81(lVar23 >> 6, 0);
                uVar20 = *(ulong*)(lVar3 + 64);
                uVar21 = (ulong)((int)uVar20 + 63);
                if (-1 < (long)uVar20) {
                    uVar21 = uVar20;
                }
                pFVar12[3] = SUB81(uVar21 >> 6, 0);
                lVar3 = *(long*)(lVar3 + 72);
                lVar19 = lVar3 + 63;
                if (-1 < lVar3) {
                    lVar19 = lVar3;
                }
                FVar18 = SUB81(lVar19 >> 6, 0);
                pFVar12[4] = FVar18;
                local_68[0] = local_68[0] & 18446744069414584320;
                iVar26 = (int)(char)FVar18;
                local_70 = iVar26;
                piVar13 = std::max<int>((int*)local_68, &local_70);
                local_71 = (uchar)*piVar13;
                local_68[0] = local_68[0] & 18446744069414584320;
                local_70 = iVar26;
                piVar13 = std::min<int>((int*)local_68, &local_70);
                iVar9 = -*piVar13;
                if (iVar9 < 0) {
                    iVar9 = *piVar13;
                }
                local_77 = (uchar)iVar9;
                local_68[0] = local_68[0] & 18446744069414584320;
                local_70 = ((uint)(lVar23 >> 6) & 255) - iVar26;
                piVar13 = std::max<int>((int*)local_68, &local_70);
                local_76 = (uchar)*piVar13;
                pbVar14 = std::max<unsigned char>(&local_75, &local_71);
                local_75 = *pbVar14;
                puVar15 = std::max<unsigned char>(&local_77, &local_76);
                pbVar14 = std::max<unsigned char>(&local_74, puVar15);
                local_74 = *pbVar14;
                if (uVar22 - 97 < 26) {
                    puVar15 = std::max<unsigned char>(&local_72, &local_71);
                    local_72 = *puVar15;
                }
                if (uVar22 - 65 < 26) {
                    puVar15 = std::max<unsigned char>(&local_73, &local_71);
                    local_73 = *puVar15;
                }
                pFVar12[4] = (FontGlyphInfo) - (char)pFVar12[4];
                bVar4 = (&field_13664)->operator_cast_to_bool();
                if (bVar4) {
                    this_01 = (vector<eastl::fixed_vector<int, 256ul, true, eastl::allocator>,
                                      eastl::fixed_vector_allocator<1064ul, 256ul, 8ul, 0ul, true, eastl::allocator>>*)
                                  std::unique_ptr<FontKerningData, std::default_delete<FontKerningData>>::operator->(
                                      (unique_ptr<FontKerningData, std::default_delete<FontKerningData>>*)&field_13664);
                    this_02 = eastl::vector<eastl::fixed_vector<int, 256ul, true, eastl::allocator>,
                                            eastl::fixed_vector_allocator<1064ul, 256ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::emplace_back<>(this_01);
                    iVar9 = 0;
                    do {
                        local_68[0] = 0;
                        local_68[1] = 0;
                        iVar26 = _FT_Get_Kerning(*(undefined8*)(in_RSI + 8), uVar24 & 4294967295, iVar9, 0, local_68);
                        if (iVar26 == 0) {
                            uVar20 = local_68[0] + 63;
                            if (-1 < (long)local_68[0]) {
                                uVar20 = local_68[0];
                            }
                            local_68[0] = (long)uVar20 >> 6;
                        } else {
                            pbVar14 = (byte*)eastl::vector<
                                FontGlyphInfo,
                                eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<FontGlyphInfo,
                                        eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)
                                    this_00,
                                uVar24);
                            local_68[0] = (ulong)*pbVar14;
                        }
                        local_70 = (int)local_68[0];
                        this_02->push_back(&local_70);
                        iVar9 = iVar9 + 1;
                    } while (iVar9 != 256);
                }
                uVar24 = uVar24 + 1;
            } while (uVar24 != 256);
            puVar16 = (undefined4*)eastl::vector<
                FontGlyphInfo, eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
            operator[](
                (vector<FontGlyphInfo, eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)
                    this_00,
                9);
            puVar17 = (undefined4*)eastl::vector<
                FontGlyphInfo, eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
            operator[](
                (vector<FontGlyphInfo, eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)
                    this_00,
                32);
            *puVar16 = *puVar17;
            *(undefined1*)(puVar16 + 1) = *(undefined1*)(puVar17 + 1);
            *(char*)((long)puVar16 + 2) = *(char*)((long)puVar16 + 2) << 2;
            field_12338 = local_75;
            field_12339 = local_74;
            field_12336 = local_73;
            field_12337 = local_72;
            field_12332 = (uint)local_74 + (uint)local_75;
            iVar9 = _FT_Set_Pixel_Sizes(*(undefined8*)(in_RSI + 8), 0, *(undefined1*)(in_RSI + 37));
            if (iVar9 == 0) {
                sVar6 = 2;
                uVar5 = 0;
                uVar22 = 0;
                uVar7 = 2;
                uVar25 = 2;
                do {
                    uVar11 = *(undefined8*)(in_RSI + 8);
                    uVar10 = FontHelpers::FromCodeMap(uVar22);
                    uVar10 = _FT_Get_Char_Index(uVar11, uVar10);
                    iVar9 = _FT_Load_Glyph(*(undefined8*)(in_RSI + 8), uVar10, 32);
                    if (iVar9 != 0) {
                        uVar11 = logger::default_logger();
                        logger::Logger::Log(uVar11, 0, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "graphics/runetek7/fonts/VectorFontSource.cpp",
                                            167, "Could not load glyph %u for vector font source %d", uVar22,
                                            *(undefined4*)(in_RSI + 32));
                    }
                    lVar3 = *(long*)(*(long*)(in_RSI + 8) + 152);
                    uVar1 = *(ushort*)(lVar3 + 48);
                    uVar2 = *(ushort*)(lVar3 + 56);
                    new (local_68) eastl::fixed_vector<unsigned short, 4ul, true, eastl::allocator>();
                    uVar1 = uVar1 >> 6;
                    uVar2 = uVar2 >> 6;
                    if ((ushort)(uVar1 + uVar25) < 401) {
                        local_70 = CONCAT22(sVar6, uVar25);
                        local_6c = uVar1;
                        local_6a = uVar2;
                        eastl::fixed_vector<unsigned short, 4ul, true, eastl::allocator>::operator=(
                            (fixed_vector<unsigned short, 4ul, true, eastl::allocator>*)local_68, &local_70, 4);
                        uVar25 = uVar1 + uVar25 + 2;
                        uVar7 = eastl::max<unsigned short>(uVar7, uVar2 + 2);
                    } else {
                        uVar5 = eastl::max<unsigned short>(uVar5, uVar25);
                        sVar6 = sVar6 + uVar7;
                        local_70 = CONCAT22(sVar6, 2);
                        local_6c = uVar1;
                        local_6a = uVar2;
                        eastl::fixed_vector<unsigned short, 4ul, true, eastl::allocator>::operator=(
                            (fixed_vector<unsigned short, 4ul, true, eastl::allocator>*)local_68, &local_70, 4);
                        uVar25 = uVar1 + 4;
                        uVar7 = uVar2 + 2;
                    }
                    push_back();
                    local_68->~fixed_vector();
                    uVar22 = uVar22 + 1;
                } while (uVar22 != 256);
                uVar8 = eastl::max<unsigned short>(uVar5, uVar25);
                field_12328 = uVar8;
                field_12330 = sVar6 + uVar7 + 2;
            } else {
                uVar11 = logger::default_logger();
                logger::Logger::Log(uVar11, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/fonts/VectorFontSource.cpp",
                                    149, "Could not set size for vector font source %d", *(undefined4*)(in_RSI + 32));
            }
        } else {
            uVar11 = logger::default_logger();
            logger::Logger::Log(uVar11, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/fonts/VectorFontSource.cpp",
                                45, "Could not set size for vector font source %d", *(undefined4*)(in_RSI + 32));
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x1008ea4e0, 16 bytes, complete-object constructor, placed by class name
    // VectorFontSource::VectorFontSource(FT_FaceRec_*, int, unsigned char, VectorFontLoader*, shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > > const&): jumps straight to the base-object constructor

    // 0x1008ea500, 80 bytes, base-object constructor, placed by class name
    // VectorFontSource::VectorFontSource(FT_FaceRec_*, int, unsigned char, VectorFontLoader*, shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > > const&)
    void VectorFontSource::VectorFontSource(FT_FaceRec_* param_1, int param_2, uchar param_3, VectorFontLoader* param_4,
                                            shared_ptr* param_5) {
        undefined3 in_register_00000009;

        field_0 = param_4;
        field_8 = param_1;
        new (&field_16, param_5) shared_ptr<oldscape::dash3d::Decor>();
        field_32 = param_2;
        field_36 = param_3;
        field_37 =
            (char)(int)((float)CONCAT31(in_register_00000009, param_3) * *(float*)PTR_m_renderScaleFactor_100ee69e8);
    }

    // 0x1008ea550, 64 bytes, base-object destructor, placed by class name
    // VectorFontSource::~VectorFontSource()
    void VectorFontSource::~VectorFontSource() {
        if (field_8 != (FT_FaceRec_*)0) {
            _FT_Done_Face();
        }
        (&field_16)->~shared_ptr();
    }

} // namespace jag::graphics
