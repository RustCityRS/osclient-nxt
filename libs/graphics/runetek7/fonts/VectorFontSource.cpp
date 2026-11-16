// libs/graphics/runetek7/fonts/VectorFontSource.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "VectorFontSource.h"

namespace jag::graphics {
    // 0x100f4432c
    float VectorFontSource::m_renderScaleFactor = 1.0f;

    // 0x100058b00: VectorFontSource::IsValid() const has the same machine code as shared_ptr<oldscape::rs2lib::worldmap::MapElement>::operator bool() const

    // 0x1008df6c0
    unsigned long
    VectorFontSource::RenderGlyphs(RGBAImage* rgbaImage, unsigned short arg2, unsigned short arg3,
                                   const eastl::fixed_vector<eastl::fixed_vector<unsigned short, 4ul>, 256ul>& arg4) {
        unsigned short uVar1;
        FT_FaceRec_* pFVar2;
        char cVar4;
        uint32_t uVar6;
        Logger* pLVar7;
        vector<unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true>>* this_01;
        unsigned short* puVar8;
        short* psVar9;
        uint64_t uVar10;
        Array<unsigned char, BucketAllocatorEASTL>* pAVar11;
        uint8_t* puVar12;
        LogLevel logLevel;
        char cVar13;
        unsigned long uVar14;
        char* pcVar15;
        unsigned int uVar16;
        int iVar17;
        unsigned int uVar18;
        unsigned short uVar19;
        FT_Bitmap_ local_98;
        vector<unsigned short, eastl::fixed_vector_allocator<2ul, 4ul, 2ul, 0ul, true>>* local_70;
        unsigned long local_68;
        unsigned long local_50;
        unsigned int local_44;
        unsigned int local_38;
        char local_31;

        int iVar5 = _FT_Set_Pixel_Sizes(field_8, 0, field_37);
        if (iVar5 == 0) {
            uVar16 = (unsigned int)arg2;
            cVar4 = rgbaImage->Create((unsigned int)arg2, (unsigned int)arg3, nullptr);
            if (!cVar4) {
                pLVar7 = logger::default_logger();
                pcVar15 = "Could not create %u x %u bitmap for font spritesheet for vector font source %d ";
                logLevel = 5;
                iVar5 = 219;
            } else {
                if (field_0 != nullptr) {
                    local_50 = 0;
                    do {
                        this_01 = &arg4[local_50];
                        puVar8 = (unsigned short*)(*this_01)[2];
                        uVar1 = *puVar8;
                        uVar16 = (unsigned int)uVar1;
                        psVar9 = (short*)(*this_01)[3];
                        if ((uVar1 != 0) && (*psVar9 != 0)) {
                            local_38 = (((uint32_t)local_38._2_2_ << 16) | (uint16_t)(*psVar9));
                            pFVar2 = field_8;
                            uVar18 = (unsigned int)local_50;
                            uVar6 = FontHelpers::FromCodeMap(uVar18);
                            uVar6 = _FT_Get_Char_Index(pFVar2, uVar6);
                            iVar5 = _FT_Load_Glyph(field_8, uVar6, 32);
                            if ((iVar5 == 0) && (iVar5 = _FT_Render_Glyph(*(uint64_t*)(field_8 + 152)), iVar5 == 0)) {
                                if (*(unsigned int*)(*(long*)(field_8 + 152) + 156) != (unsigned int)uVar1) {
                                    LogAssert("w == m_fontFace->glyph->bitmap.width",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "graphics/runetek7/fonts/VectorFontSource.cpp",
                                              247, nullptr);
                                }
                                uVar14 = (unsigned long)(unsigned short)local_38;
                                if (*(unsigned int*)(*(long*)(field_8 + 152) + 152) != (local_38 & 65535)) {
                                    LogAssert("h == m_fontFace->glyph->bitmap.rows",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "graphics/runetek7/fonts/VectorFontSource.cpp",
                                              248, nullptr);
                                }
                                local_31 = *(char*)(*(long*)(field_8 + 152) + 178);
                                uVar19 = (unsigned short)local_38;
                                if (local_31 == '\x01') {
                                    _FT_Bitmap_Init(&local_98);
                                    uVar10 = field_0->end();
                                    _FT_Bitmap_Convert(uVar10, *(long*)(field_8 + 152) + 152, &local_98, 1);
                                    uVar19 = (unsigned short)local_38;
                                    std::swap<FT_Bitmap_>(local_98, *((FT_Bitmap_*)(*(long*)(field_8 + 152) + 152)));
                                    uVar10 = field_0->end();
                                    _FT_Bitmap_Done(uVar10);
                                }
                                if (*(int*)(*(long*)(field_8 + 152) + 160) != *(int*)(*(long*)(field_8 + 152) + 156)) {
                                    LogAssert(
                                        "(uint)m_fontFace->glyph->bitmap.pitch == m_fontFace->glyph->bitmap.width",
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/fonts/VectorFontSource.cpp",
                                        264, nullptr);
                                }
                                if (*(char*)(*(long*)(field_8 + 152) + 178) != '\x02') {
                                    LogAssert("m_fontFace->glyph->bitmap.pixel_mode == FT_PIXEL_MODE_GRAY",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "graphics/runetek7/fonts/VectorFontSource.cpp",
                                              265, nullptr);
                                }
                                if (uVar19 < 2) {
                                    uVar14 = 1;
                                }
                                if (uVar1 < 2) {
                                    uVar16 = 1;
                                }
                                uVar18 = 0;
                                local_70 = this_01;
                                local_68 = uVar14;
                                local_44 = uVar16;
                                do {
                                    iVar5 = 0;
                                    local_38 = uVar18;
                                    do {
                                        uVar16 = local_38;
                                        uVar18 = *(int*)(*(long*)(field_8 + 152) + 160) * iVar5 + local_38;
                                        puVar8 = (unsigned short*)(*this_01)[0];
                                        uVar1 = *puVar8;
                                        puVar8 = (unsigned short*)(*this_01)[1];
                                        iVar17 = ((unsigned int)*puVar8 + iVar5) * (unsigned int)arg2 + uVar1 + uVar16;
                                        pAVar11 = (Array<unsigned char, BucketAllocatorEASTL>*)
                                                      rgbaImage->GetDevCredentialsOutputDirectory();
                                        puVar12 = (uint8_t*)(*pAVar11)[(unsigned long)(unsigned int)(iVar17 * 4)];
                                        *puVar12 = 255;
                                        pAVar11 = (Array<unsigned char, BucketAllocatorEASTL>*)
                                                      rgbaImage->GetDevCredentialsOutputDirectory();
                                        puVar12 = (uint8_t*)(*pAVar11)[(unsigned long)(iVar17 * 4 + 1)];
                                        *puVar12 = 255;
                                        pAVar11 = (Array<unsigned char, BucketAllocatorEASTL>*)
                                                      rgbaImage->GetDevCredentialsOutputDirectory();
                                        puVar12 = (uint8_t*)(*pAVar11)[(unsigned long)(iVar17 * 4 + 2)];
                                        *puVar12 = 255;
                                        cVar4 = *(char*)(*(long*)(*(long*)(field_8 + 152) + 168) +
                                                         (unsigned long)(uVar18 & 65535));
                                        cVar13 = -cVar4;
                                        if (local_31 != '\x01') {
                                            cVar13 = cVar4;
                                        }
                                        pAVar11 = (Array<unsigned char, BucketAllocatorEASTL>*)
                                                      rgbaImage->GetDevCredentialsOutputDirectory();
                                        this_01 = local_70;
                                        pcVar15 = (char*)(*pAVar11)[(unsigned long)(iVar17 * 4 + 3)];
                                        *pcVar15 = cVar13;
                                        iVar5 = iVar5 + 1;
                                    } while ((int)local_68 != iVar5);
                                    uVar18 = local_38 + 1;
                                } while (uVar18 != local_44);
                            } else {
                                pLVar7 = logger::default_logger();
                                pLVar7->Log(false, 2,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "graphics/runetek7/fonts/VectorFontSource.cpp",
                                            243, "Could not render glyph %u", uVar18);
                            }
                        }
                        local_50 = local_50 + 1;
                    } while (local_50 != 256);
                    uVar14 =
                        (((uint64_t)((int64_t)((unsigned long)(vector<eastl::fixed_vector<unsigned short, 4ul>,
                                                                      eastl::fixed_vector_allocator<48ul, 256ul, 8ul,
                                                                                                    0ul, true>>*)arg4 >>
                                               8))
                          << 8) |
                         (uint8_t)1);
                    goto LAB_1008dfb76;
                }
                pLVar7 = logger::default_logger();
                uVar16 = field_32;
                pcVar15 = "Could not render glyphs for vector font source %d - owning cache has expired.";
                logLevel = 5;
                iVar5 = 226;
            }
        } else {
            pLVar7 = logger::default_logger();
            uVar16 = field_32;
            pcVar15 = "Could not set size for vector font source %d";
            logLevel = 2;
            iVar5 = 213;
        }
        uVar14 = 0;
        pLVar7->Log(false, logLevel,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                    "VectorFontSource.cpp",
                    iVar5, pcVar15, uVar16);
    LAB_1008dfb76:
        return uVar14 & 4294967295;
    }

    // 0x1008e6b60
    auto VectorFontSource::GenerateMetrics() {
        ReturnValue* this_00;
        unsigned short uVar1;
        unsigned short uVar2;
        FT_FaceRec_* pFVar3;
        long lVar4;
        unsigned long uVar5;
        unsigned short arg1;
        short sVar7;
        unsigned short arg1_00;
        uint16_t uVar8;
        uint32_t uVar10;
        Logger* pLVar11;
        FontGlyphInfo* pFVar12;
        int* piVar13;
        uint8_t* pbVar14;
        unsigned char* puVar15;
        fixed_vector<int, _256ul>* this_02;
        uint32_t* puVar16;
        uint32_t* puVar17;
        FontGlyphInfo FVar18;
        long lVar19;
        ReturnValue RVar20;
        unsigned long uVar21;
        unsigned int uVar22;
        long lVar23;
        unsigned long arg1_01;
        unsigned short arg2;
        int iVar24;
        unsigned char local_77;
        unsigned char local_76;
        uint8_t local_75;
        uint8_t local_74;
        unsigned char local_73;
        unsigned char local_72;
        unsigned char local_71;
        uint32_t local_70;
        unsigned short local_6c;
        unsigned short local_6a;
        ReturnValue local_68;
        uint64_t uStack_60;

        auto result;
        int iVar9 = _FT_Set_Pixel_Sizes(field_8, 0, field_36);
        if (iVar9 == 0) {
            if (((uint8_t)field_8[16] & 64) != 0) {
                local_68 = std::make_unique<FontKerningData>();
                (*((&result + 1708))) = local_68;
            }
            local_75 = 0;
            local_74 = 0;
            local_73 = '\0';
            local_72 = '\0';
            this_00 = &result + 1543;
            arg1_01 = 0;
            do {
                pFVar3 = field_8;
                uVar22 = (unsigned int)arg1_01;
                uVar10 = FontHelpers::FromCodeMap(uVar22);
                uVar10 = _FT_Get_Char_Index(pFVar3, uVar10);
                iVar9 = _FT_Load_Glyph(field_8, uVar10, 32);
                if (iVar9 != 0) {
                    pLVar11 = logger::default_logger();
                    pLVar11->Log(false, 2,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                 "runetek7/fonts/VectorFontSource.cpp",
                                 72, "Could not load glyph %u for vector font source %d", uVar22, field_32);
                }
                pFVar12 = this_00->emplace_back<>();
                lVar4 = *(long*)(field_8 + 152);
                uVar5 = *(unsigned long*)(lVar4 + 48);
                uVar21 = (unsigned long)((int)uVar5 + 63);
                if (-1 < (long)uVar5) {
                    uVar21 = uVar5;
                }
                *pFVar12 = (uint8_t)(uVar21 >> 6);
                uVar5 = *(unsigned long*)(lVar4 + 80);
                uVar21 = (unsigned long)((int)uVar5 + 63);
                if (-1 < (long)uVar5) {
                    uVar21 = uVar5;
                }
                pFVar12[2] = (uint8_t)(uVar21 >> 6);
                lVar19 = *(long*)(lVar4 + 56);
                lVar23 = lVar19 + 63;
                if (-1 < lVar19) {
                    lVar23 = lVar19;
                }
                pFVar12[1] = (uint8_t)(lVar23 >> 6);
                uVar5 = *(unsigned long*)(lVar4 + 64);
                uVar21 = (unsigned long)((int)uVar5 + 63);
                if (-1 < (long)uVar5) {
                    uVar21 = uVar5;
                }
                pFVar12[3] = (uint8_t)(uVar21 >> 6);
                lVar4 = *(long*)(lVar4 + 72);
                lVar19 = lVar4 + 63;
                if (-1 < lVar4) {
                    lVar19 = lVar4;
                }
                FVar18 = (uint8_t)(lVar19 >> 6);
                pFVar12[4] = FVar18;
                local_68 = (ReturnValue)((unsigned long)local_68 & 18446744069414584320);
                iVar24 = (int)(char)FVar18;
                local_70 = iVar24;
                piVar13 = std::max<int>(local_68, local_70);
                local_71 = (unsigned char)*piVar13;
                local_68 = (ReturnValue)((unsigned long)local_68 & 18446744069414584320);
                local_70 = iVar24;
                piVar13 = std::min<int>(local_68, local_70);
                iVar9 = -*piVar13;
                if (iVar9 < 0) {
                    iVar9 = *piVar13;
                }
                local_77 = (unsigned char)iVar9;
                local_68 = (ReturnValue)((unsigned long)local_68 & 18446744069414584320);
                local_70 = ((unsigned int)(lVar23 >> 6) & 255) - iVar24;
                piVar13 = std::max<int>(local_68, local_70);
                local_76 = (unsigned char)*piVar13;
                pbVar14 = std::max<unsigned char>(local_75, local_71);
                local_75 = *pbVar14;
                puVar15 = std::max<unsigned char>(local_77, local_76);
                pbVar14 = std::max<unsigned char>(local_74, *puVar15);
                local_74 = *pbVar14;
                if (uVar22 - 97 < 26) {
                    puVar15 = std::max<unsigned char>(local_72, local_71);
                    local_72 = *puVar15;
                }
                if (uVar22 - 65 < 26) {
                    puVar15 = std::max<unsigned char>(local_73, local_71);
                    local_73 = *puVar15;
                }
                pFVar12[4] = (FontGlyphInfo) - (char)pFVar12[4];
                if (((&result + 1708))->operator_cast_to_bool() != '\0') {
                    this_02 =
                        ((vector<eastl::fixed_vector<int, 256ul>,
                                 eastl::fixed_vector_allocator<1064ul, 256ul, 8ul, 0ul, true>>*)(*((&result + 1708)))
                             .operator->())
                            ->emplace_back<>();
                    iVar9 = 0;
                    do {
                        local_68 = (ReturnValue)0;
                        uStack_60 = 0;
                        iVar24 = _FT_Get_Kerning(field_8, arg1_01 & 4294967295, iVar9, 0, &local_68);
                        if (iVar24 == 0) {
                            RVar20 = (ReturnValue)((long)local_68 + 63);
                            if (-1 < (long)local_68) {
                                RVar20 = local_68;
                            }
                            local_68 = (ReturnValue)((long)RVar20 >> 6);
                        } else {
                            pbVar14 = (uint8_t*)(*this_00)[arg1_01];
                            local_68._1_7_ = 0;
                            local_68._0_1_ = *pbVar14;
                        }
                        local_70 = local_68._0_4_;
                        this_02->push_back(local_70);
                        iVar9 = iVar9 + 1;
                    } while (iVar9 != 256);
                }
                arg1_01 = arg1_01 + 1;
            } while (arg1_01 != 256);
            puVar16 = (uint32_t*)(*this_00)[9];
            puVar17 = (uint32_t*)(*this_00)[32];
            *puVar16 = *puVar17;
            *(uint8_t*)(puVar16 + 1) = *(uint8_t*)(puVar17 + 1);
            *(char*)((long)puVar16 + 2) = *(char*)((long)puVar16 + 2) << 2;
            &result[1542].field_2 = local_75;
            &result[1542].field_3 = local_74;
            *(unsigned char*)(&result + 1542) = local_73;
            &result[1542].field_1 = local_72;
            *(unsigned int*) && result[1541].field_4 = (unsigned int)local_74 + (unsigned int)local_75;
            iVar9 = _FT_Set_Pixel_Sizes(field_8, 0, field_37);
            if (iVar9 == 0) {
                sVar7 = 2;
                arg1 = 0;
                uVar22 = 0;
                arg1_00 = 2;
                arg2 = 2;
                do {
                    pFVar3 = field_8;
                    uVar10 = FontHelpers::FromCodeMap(uVar22);
                    uVar10 = _FT_Get_Char_Index(pFVar3, uVar10);
                    iVar9 = _FT_Load_Glyph(field_8, uVar10, 32);
                    if (iVar9 != 0) {
                        pLVar11 = logger::default_logger();
                        pLVar11->Log(false, 3,
                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                     "runetek7/fonts/VectorFontSource.cpp",
                                     167, "Could not load glyph %u for vector font source %d", uVar22, field_32);
                    }
                    uVar1 = *(unsigned short*)(*(long*)(field_8 + 152) + 48);
                    uVar2 = *(unsigned short*)(*(long*)(field_8 + 152) + 56);
                    new (&local_68) eastl::fixed_vector<unsigned short, 4ul>();
                    uVar1 = uVar1 >> 6;
                    uVar2 = uVar2 >> 6;
                    if ((unsigned short)(uVar1 + arg2) < 401) {
                        local_70 = (((uint32_t)sVar7 << 16) | (uint16_t)arg2);
                        local_6c = uVar1;
                        local_6a = uVar2;
                        local_68 = local_70 = 4;
                        arg2 = uVar1 + arg2 + 2;
                        arg1_00 = eastl::max<unsigned short>(arg1_00, uVar2 + 2);
                    } else {
                        arg1 = eastl::max<unsigned short>(arg1, arg2);
                        sVar7 = sVar7 + arg1_00;
                        local_70 = (((uint32_t)sVar7 << 16) | (uint16_t)2);
                        local_6c = uVar1;
                        local_6a = uVar2;
                        local_68 = local_70 = 4;
                        arg2 = uVar1 + 4;
                        arg1_00 = uVar2 + 2;
                    }
                    result.push_back(local_68);
                    uVar22 = uVar22 + 1;
                } while (uVar22 != 256);
                uVar8 = eastl::max<unsigned short>(arg1, arg2);
                *(uint16_t*)(&result + 1541) = uVar8;
                *(unsigned short*) && result[1541].field_2 = sVar7 + arg1_00 + 2;
            } else {
                pLVar11 = logger::default_logger();
                pLVar11->Log(false, 2,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                             "fonts/VectorFontSource.cpp",
                             149, "Could not set size for vector font source %d", field_32);
            }
        } else {
            pLVar11 = logger::default_logger();
            pLVar11->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                         "fonts/VectorFontSource.cpp",
                         45, "Could not set size for vector font source %d", field_32);
        }
        return result;
    }

    // 0x1008ea500
    VectorFontSource::VectorFontSource(FT_FaceRec_* fT_FaceRec_, int arg2, unsigned char arg3,
                                       VectorFontLoader* vectorFontLoader,
                                       const shared_ptr<PacketT<Array<unsigned char>>>& arg5)
        : field_0(vectorFontLoader), field_8(fT_FaceRec_), field_16(arg5), field_32(arg2), field_36(arg3) {
        uint32_t in_register_00000009;

        field_37 = (char)(int)((float)(((uint32_t)in_register_00000009 << 8) | (uint8_t)arg3) *
                               *(float*)PTR_m_renderScaleFactor_100ee69e8);
    }

    // 0x1008ea550
    VectorFontSource::~VectorFontSource() {
        if (field_8 != nullptr) {
            _FT_Done_Face();
        }
        field_16.~shared_ptr();
    }

} // namespace jag::graphics
