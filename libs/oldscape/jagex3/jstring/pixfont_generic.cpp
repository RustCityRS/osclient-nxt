// libs/oldscape/jagex3/jstring/pixfont_generic.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "pixfont_generic.h"
#include "libs/oldscape/jagex3/javapal/loading/LoadingScreen.h"

namespace jag::oldscape::jstring {
    // 0x100f37c20
    int32_t PixfontGeneric::m_alpha = 255;

    // 0x100f37c24
    int32_t PixfontGeneric::m_currentShadow = -1;

    // 0x100f37c28
    int32_t PixfontGeneric::m_strikeout = -1;

    // 0x100f37c2c
    int32_t PixfontGeneric::m_underline = -1;

    // 0x100f37c30
    int32_t PixfontGeneric::m_defaultShadow = -1;

    // 0x1016c5e90, set at startup by ___cxx_global_var_init.168
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> PixfontGeneric::m_inlineImages =
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x1016c5ea0, set at startup by ___cxx_global_var_init.166
    Array<eastl::string> PixfontGeneric::m_lines = Array<eastl::string>(100);

    // 0x1016c5eb8
    int32_t PixfontGeneric::m_extraSpaceWidth;

    // 0x1016c5ebc
    int32_t PixfontGeneric::m_currentCol;

    // 0x1016c5ec0, set at startup by ___cxx_global_var_init.167
    Array<int> PixfontGeneric::m_empty = Array<int>();

    // 0x1016c5ed8, set at startup by ___cxx_global_var_init.165
    jag::math::Random PixfontGeneric::m_rand = Random(123456789, 31415821);

    // 0x1016c5ee0
    int32_t PixfontGeneric::m_defaultCol;

    // 0x1016c5ee4
    int32_t PixfontGeneric::m_extraSpacePos;

    // 0x1001981a0: PixfontGeneric::TransparentFontColour::TransparentFontColour() has the same machine code as Error::Error()

    // 0x1002b5b40
    void PixfontGeneric::DrawStringMultiline(const eastl::string& str, int arg2, int arg3, int arg4, int arg5, int arg6,
                                             int arg7, int arg8, int arg9, int arg10, graphics::Pix2D& pix2D) {
        DrawStringMultiline(str, arg2, arg3, arg4, arg5, arg6, arg7, 255, arg8, arg9, arg10, pix2D);
    }

    // 0x1002bde20
    uint32_t PixfontGeneric::CharWid(char16_t arg1) const {
        uint8_t bVar1 = SanitiseAndConvertWideChar(arg1);
        uint32_t* puVar2 = &field_48[(unsigned long)bVar1];
        return *puVar2;
    }

    // 0x1002bde50
    uint32_t PixfontGeneric::CharHei(char16_t arg1) const {
        uint8_t bVar1 = SanitiseAndConvertWideChar(arg1);
        uint32_t* puVar2 = &field_1096[(unsigned long)bVar1];
        return *puVar2;
    }

    // 0x1002bde80
    uint32_t PixfontGeneric::CharBearingX(char16_t arg1) const {
        uint8_t bVar1 = SanitiseAndConvertWideChar(arg1);
        uint32_t* puVar2 = &field_1120[(unsigned long)bVar1];
        return *puVar2;
    }

    // 0x1002bdeb0
    uint32_t PixfontGeneric::CharBearingY(char16_t arg1) const {
        uint8_t bVar1 = SanitiseAndConvertWideChar(arg1);
        uint32_t* puVar2 = &field_1144[(unsigned long)bVar1];
        return *puVar2;
    }

    // 0x1002bdee0
    PixfontGeneric::PixfontGeneric(Array<signed char>&& arg1, Array<int>&& arg2, Array<int>&& arg3, Array<int>&& arg4,
                                   Array<int>&& arg5, SharedArray<unsigned int>&& sharedArray1,
                                   SharedArray<Array<unsigned char>>&& sharedArray2)
        : field_0(0) {
        int iVar1;
        int* piVar3;

        uint8_t* this_00 = &field_1096;
        new (this_00) Array<int>();
        new (&field_1120) Array<int>();
        uint8_t* this_01 = &field_1144;
        new (this_01) Array<int>();
        new (&field_1168) Array<signed char>();
        if (sharedArray2.HeapBeginPtr() != 256) {
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/jstring/"
                      "pixfont_generic.cpp",
                      44, "Expected exactly 256 images");
        }
        field_1120 = arg2;
        *this_01 = arg3;
        field_1072 = arg4;
        *this_00 = arg5;
        UnpackMetrics(arg1);
        field_24 = sharedArray2;
        int iVar5 = 2147483647;
        int iVar4 = -2147483648;
        unsigned long arg1_00 = 0;
        do {
            piVar3 = (int*)(*this_01)[arg1_00];
            if (*piVar3 < iVar5) {
                piVar3 = (int*)(*this_00)[arg1_00];
                if (*piVar3 != 0) {
                    piVar3 = (int*)(*this_01)[arg1_00];
                    iVar5 = *piVar3;
                }
            }
            piVar3 = (int*)(*this_01)[arg1_00];
            iVar1 = *piVar3;
            piVar3 = (int*)(*this_00)[arg1_00];
            if (iVar4 < iVar1 + *piVar3) {
                piVar3 = (int*)(*this_01)[arg1_00];
                iVar4 = *piVar3;
                piVar3 = (int*)(*this_00)[arg1_00];
                iVar4 = iVar4 + *piVar3;
            }
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 256);
        iVar1 = field_0;
        field_4 = iVar1 - iVar5;
        field_8 = iVar4 - iVar1;
        piVar3 = (int*)(*this_01)[88];
        field_12 = iVar1 - *piVar3;
        iVar5 = field_0;
        piVar3 = (int*)(*this_01)[120];
        field_16 = iVar5 - *piVar3;
    }

    // 0x1002be140
    void PixfontGeneric::UnpackMetrics(Array<signed char>& arg1) {
        uint8_t bVar2;
        bool cVar3;
        int iVar4;
        uint8_t uVar5;
        uint8_t* pbVar7;
        unsigned int* puVar8;
        Array<signed char>* pAVar9;
        int* piVar10;
        long lVar11;
        char* pcVar12;
        uint8_t* puVar13;
        unsigned long uVar15;
        char cVar16;
        array<Array<signed char>, 256ul> aaStack_3854;
        int in_stack_ffffffffffffc7b0;
        array<Array<signed char>, 256ul> local_2050;
        array<int, 256ul> local_850;
        array<int, 256ul> local_450;
        array<int, _256ul>* local_50;
        unsigned long local_40;

        long lVar6 = arg1.end();
        uint8_t* puVar1 = &field_48;
        unsigned long uVar14 = 0;
        PixfontGeneric* local_38 = this;
        if (lVar6 == 257) {
            do {
                pbVar7 = &arg1[uVar14];
                bVar2 = *pbVar7;
                puVar8 = (unsigned int*)(*puVar1)[uVar14];
                *puVar8 = (unsigned int)bVar2;
                uVar14 = uVar14 + 1;
            } while (uVar14 != 256);
            pbVar7 = &arg1[256];
            local_38->field_0 = (unsigned int)*pbVar7;
        } else {
            do {
                uVar15 = uVar14 + 1;
                pbVar7 = &arg1[uVar14];
                bVar2 = *pbVar7;
                puVar8 = (unsigned int*)(*puVar1)[uVar14];
                *puVar8 = (unsigned int)bVar2;
                uVar14 = uVar15;
            } while (uVar15 != 256);
            uVar14 = 0;
            do {
                pbVar7 = &arg1[uVar14 + 256];
                bVar2 = *pbVar7;
                puVar8 = &local_450[uVar14];
                *puVar8 = (unsigned int)bVar2;
                uVar14 = uVar14 + 1;
            } while (uVar14 != 256);
            uVar14 = 0;
            do {
                pbVar7 = &arg1[uVar14 + 512];
                bVar2 = *pbVar7;
                puVar8 = &local_850[uVar14];
                *puVar8 = (unsigned int)bVar2;
                uVar14 = uVar14 + 1;
            } while (uVar14 != 256);
            new (&aaStack_3854 + 4) std::array<Array<signed char>, 256ul>();
            lVar6 = 768;
            uVar14 = 0;
            local_50 = (array<int, _256ul>*)puVar1;
            do {
                pAVar9 = (Array<signed char>*)(*(&aaStack_3854 + 4))[uVar14];
                piVar10 = &local_450[uVar14];
                pAVar9->set_max_size((long)*piVar10, 0);
                lVar11 = pAVar9->end();
                if (lVar11 != 0) {
                    uVar15 = 0;
                    cVar16 = '\0';
                    local_40 = uVar14;
                    do {
                        pcVar12 = &arg1[lVar6 + uVar15];
                        cVar3 = *pcVar12;
                        pcVar12 = (char*)(*pAVar9)[uVar15];
                        cVar16 = cVar16 + cVar3;
                        *pcVar12 = cVar16;
                        uVar15 = uVar15 + 1;
                        uVar14 = pAVar9->end();
                    } while (uVar15 < uVar14);
                    lVar6 = lVar6 + uVar15;
                    uVar14 = local_40;
                }
                uVar14 = uVar14 + 1;
            } while (uVar14 != 256);
            local_2050 = std::array<Array<signed char>, 256ul>();
            uVar14 = 0;
            do {
                pAVar9 = &local_2050[uVar14];
                piVar10 = &local_450[uVar14];
                pAVar9->set_max_size((long)*piVar10, 0);
                lVar11 = pAVar9->end();
                if (lVar11 != 0) {
                    uVar15 = 0;
                    cVar16 = '\0';
                    local_40 = uVar14;
                    do {
                        pcVar12 = &arg1[lVar6 + uVar15];
                        cVar3 = *pcVar12;
                        pcVar12 = (char*)(*pAVar9)[uVar15];
                        cVar16 = cVar16 + cVar3;
                        *pcVar12 = cVar16;
                        uVar15 = uVar15 + 1;
                        uVar14 = pAVar9->end();
                    } while (uVar15 < uVar14);
                    lVar6 = lVar6 + uVar15;
                    uVar14 = local_40;
                }
                uVar14 = uVar14 + 1;
            } while (uVar14 != 256);
            puVar1 = &local_38->field_1168;
            puVar1->clear();
            puVar1->set_max_size(65536, 0);
            lVar6 = 0;
            uVar14 = 0;
            do {
                if (((unsigned int)uVar14 & 2147483519) != 32) {
                    lVar11 = 0;
                    do {
                        if (((unsigned int)lVar11 & 2147483519) != 32) {
                            uVar5 = KernPair((PixfontGeneric*)(&aaStack_3854 + 4), &local_2050, &local_850, local_50,
                                             &local_450, (array<int, _256ul>*)(uVar14 & 4294967295),
                                             (unsigned int)lVar11, in_stack_ffffffffffffc7b0);
                            puVar13 = (uint8_t*)(*puVar1)[lVar11 + lVar6];
                            *puVar13 = uVar5;
                        }
                        lVar11 = lVar11 + 1;
                    } while (lVar11 != 256);
                }
                uVar14 = uVar14 + 1;
                lVar6 = lVar6 + 256;
            } while (uVar14 != 256);
            piVar10 = &local_850[32];
            iVar4 = *piVar10;
            piVar10 = &local_450[32];
            local_38->field_0 = iVar4 + *piVar10;
            (&aaStack_3854 + 4)->~array();
        }
    }

    // 0x1002be5d0
    int PixfontGeneric::StringWid(const eastl::string& str) {
        unsigned long uVar1;
        bool cVar3;
        bool bVar4;
        char16_t wVar5;
        unsigned int uVar7;
        char* str_00;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar9;
        Array<graphics::Pix8>* this_00;
        Logger* this_01;
        uint64_t uVar10;
        int* piVar11;
        char* pcVar12;
        unsigned long uVar13;
        unsigned long uVar14;
        ReturnValue local_a0;
        ReturnValue local_80;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_58;
        array<int, 256ul>* local_50;
        unsigned long local_40;
        int local_34;

        long lVar8 = str.size();
        if (lVar8 == 0) {
            local_34 = 0;
        } else {
            str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            if (*str_00 == '\0') {
                local_34 = 0;
            } else {
                local_50 = (array<int, 256ul>*)&field_48;
                local_58 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_1168;
                uVar14 = 4294967295;
                local_34 = 0;
                local_40 = 4294967295;
                do {
                    uVar1 = 0;
                    wVar5 = stringtools::GetUTF8NextChar16(str_00, 0);
                    if (wVar5 == L'<') {
                        uVar14 = uVar1 & 4294967295;
                    } else {
                        if ((wVar5 == L'>') && ((int)uVar14 != -1)) {
                            uVar14 = (unsigned long)((int)uVar14 + 1);
                            local_a0 = str.substr(uVar14, uVar1 - uVar14);
                            cVar3 = local_a0 == "lt";
                            bVar4 = true;
                            if (!cVar3) {
                                cVar3 = local_a0 == "gt";
                                if (!cVar3) {
                                    local_80 = local_a0.substr(0, 4);
                                    bVar4 = local_80 == (*((value_type*)"img="));
                                    if (bVar4) {
                                        local_80 = local_a0.substr(4, 18446744073709551615);
                                        cVar3 = core::stringtools::general::StringTools::CheckedParseInt(0, local_80);
                                        if ((!cVar3) || (0 < 0)) {
                                        LAB_1002be7a8:
                                            this_01 = logger::default_logger();
                                            uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                            this_01->Log(
                                                false, 8,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "oldscape/jagex3/jstring/pixfont_generic.cpp",
                                                134, "Invalid img tag: %s", uVar10);
                                        } else {
                                            pvVar9 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                                         m_inlineImages.operator->();
                                            if (pvVar9->end() <= 0)
                                                goto LAB_1002be7a8;
                                            this_00 = (Array<graphics::Pix8>*)*m_inlineImages;
                                            lVar8 = (*this_00)[(long)0];
                                            local_34 = local_34 + *(int*)(lVar8 + 64);
                                            local_40 = 4294967295;
                                        }
                                    }
                                    bVar4 = false;
                                } else {
                                    wVar5 = L'>';
                                }
                            } else {
                                wVar5 = L'<';
                            }
                            uVar14 = 4294967295;
                            if (!bVar4)
                                goto LAB_1002be653;
                        }
                        uVar1 = local_40;
                        uVar13 = local_40 & 4294967295;
                        wVar5 = SanitiseWideChar(wVar5);
                        if ((int)uVar14 == -1) {
                            uVar7 = stringtools::WideToCP1252(wVar5);
                            local_40 = (unsigned long)(uVar7 & 255);
                            piVar11 = (int*)(*local_50)[local_40];
                            pvVar9 = local_58;
                            local_34 = local_34 + *piVar11;
                            lVar8 = local_58->end();
                            if ((lVar8 != 0) && ((int)uVar1 != -1)) {
                                pcVar12 = (char*)(*pvVar9)[(unsigned long)(uVar7 & 255 | (int)uVar1 << 8)];
                                local_34 = local_34 + *pcVar12;
                            }
                        } else {
                            local_40 = uVar13;
                        }
                    }
                LAB_1002be653:
                } while (str_00[0] != '\0');
            }
        }
        return local_34;
    }

    // 0x1002be960
    int PixfontGeneric::SplitString(const eastl::string& str, Array<int>& arg2, Array<eastl::string>& strs) {
        bool cVar1;
        bool bVar2;
        char16_t arg1;
        char* pcVar4;
        uint64_t extraout_RAX;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar5;
        Array<graphics::Pix8>* this_01;
        Logger* this_02;
        uint64_t uVar6;
        uint64_t extraout_RAX_00;
        unsigned long uVar7;
        long lVar8;
        int* piVar9;
        unsigned long uVar10;
        eastl::string* pbVar11;
        int iVar12;
        int iVar13;
        int iVar14;
        uint64_t uVar15;
        unsigned long uVar16;
        unsigned int uVar17;
        ReturnValue local_108;
        ReturnValue local_e0;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_c0;
        ReturnValue local_b8;
        unsigned int local_74;
        char* local_70;
        unsigned long local_68;
        int local_5c;
        int local_58;
        int local_54;
        unsigned long local_50;
        uint32_t local_44;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        PixfontGeneric* local_80 = this;
        long lVar3 = str.size();
        if (lVar3 == 0) {
            local_54 = 0;
        } else {
            local_b8 = eastl::string("");
            pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            lVar3 = str.size();
            local_74 = 2;
            if (lVar3 == 0) {
                local_40 = 0;
                local_68 = 0;
                uVar17 = local_74;
            } else {
                local_c0 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&local_80->field_1168;
                local_50 = 4294967295;
                local_34 = 0;
                local_68 = 0;
                uVar10 = 0;
                local_40 = 0;
                local_3c = 0;
                uVar16 = 4294967295;
                local_5c = 0;
                local_58 = 0;
                local_70 = pcVar4;
                while (uVar17 = local_74, pcVar4[0] != '\0') {
                    arg1 = stringtools::GetUTF8NextChar16(pcVar4, 0);
                    if (arg1 == L'<') {
                        uVar17 = 4;
                        uVar16 = uVar10 & 4294967295;
                    } else {
                        if ((arg1 == L'>') && ((int)uVar16 != -1)) {
                            uVar16 = (unsigned long)((int)uVar16 + 1);
                            local_e0 = str.substr(uVar16, uVar10 - uVar16);
                            local_b8.append("<");
                            pvVar5 = local_c0;
                            local_b8.append(&local_e0);
                            local_b8.append(">");
                            cVar1 = local_e0 == "br";
                            if (!cVar1) {
                                cVar1 = local_e0 == "lt";
                                uVar15 = (uint64_t)((unsigned long)pvVar5 >> 8);
                                if (!cVar1) {
                                    cVar1 = local_e0 == "gt";
                                    if (!cVar1) {
                                        local_108 = local_e0.substr(0, 4);
                                        bVar2 = local_108 == (*((value_type*)"img="));
                                        uVar6 = extraout_RAX;
                                        if (bVar2) {
                                            local_108 = local_e0.substr(4, 18446744073709551615);
                                            cVar1 =
                                                core::stringtools::general::StringTools::CheckedParseInt(0, local_108);
                                            iVar14 = 0;
                                            if ((!cVar1) || (0 < 0)) {
                                            LAB_1002bed7d:
                                                this_02 = logger::default_logger();
                                                uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                                this_02->Log(
                                                    false, 8,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/oldscape/jagex3/jstring/pixfont_generic.cpp",
                                                    254, "Invalid img tag: %s", uVar6);
                                            } else {
                                                pvVar5 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                                             m_inlineImages.operator->();
                                                iVar13 = pvVar5->end();
                                                if (iVar13 <= iVar14)
                                                    goto LAB_1002bed7d;
                                                this_01 = (Array<graphics::Pix8>*)*m_inlineImages;
                                                lVar3 = (*this_01)[(long)0];
                                                local_34 = local_34 + *(int*)(lVar3 + 64);
                                                local_3c = 0;
                                            }
                                            uVar6 = extraout_RAX_00;
                                        }
                                        local_44 = (uint32_t)(((uint64_t)((int64_t)((unsigned long)uVar6 >> 8)) << 8) |
                                                              (uint8_t)1);
                                        arg1 = L'\0';
                                        local_38 = local_34;
                                        iVar14 = local_3c;
                                    } else {
                                        local_38 = CharWid(local_80, L'>');
                                        local_38 = local_38 + local_34;
                                        lVar3 = pvVar5->end();
                                        if (lVar3 == 0) {
                                            local_44 = 1;
                                            arg1 = L'\0';
                                            iVar14 = (int)(((uint64_t)uVar15 << 8) | (uint8_t)62);
                                        } else {
                                            pcVar4 = (char*)(*pvVar5)[(unsigned long)(uint8_t)local_3c << 8 | 62];
                                            local_38 = local_38 + *pcVar4;
                                            arg1 = L'\0';
                                            local_44 =
                                                (uint32_t)(((uint64_t)((
                                                                uint64_t)(uint32_t)((unsigned int)(int)*pcVar4 >> 8))
                                                            << 8) |
                                                           (uint8_t)1);
                                            iVar14 = (int)(((uint64_t)uVar15 << 8) | (uint8_t)62);
                                        }
                                    }
                                } else {
                                    local_38 = CharWid(local_80, L'<');
                                    local_38 = local_38 + local_34;
                                    lVar3 = pvVar5->end();
                                    if (lVar3 == 0) {
                                        local_44 = 1;
                                        arg1 = L'\0';
                                        iVar14 = (int)(((uint64_t)uVar15 << 8) | (uint8_t)60);
                                    } else {
                                        pcVar4 = (char*)(*pvVar5)[(unsigned long)(uint8_t)local_3c << 8 | 60];
                                        local_38 = local_38 + *pcVar4;
                                        arg1 = L'\0';
                                        local_44 = (uint32_t)(((uint64_t)((
                                                                   uint64_t)(uint32_t)((unsigned int)(int)*pcVar4 >> 8))
                                                               << 8) |
                                                              (uint8_t)1);
                                        iVar14 = (int)(((uint64_t)uVar15 << 8) | (uint8_t)60);
                                    }
                                }
                            } else {
                                uVar16 = local_68 & 4294967295;
                                lVar3 = local_b8.size();
                                local_108 = local_b8.substr(uVar16, lVar3 - uVar16);
                                pbVar11 = &strs[(long)local_40];
                                *pbVar11 = &local_108;
                                iVar13 = local_40 + 1;
                                iVar14 = strs.end();
                                local_38 = 0;
                                local_40 = iVar13;
                                if (iVar13 == iVar14) {
                                    local_44 = 0;
                                    local_38 = local_34;
                                    iVar14 = local_3c;
                                    local_54 = iVar13;
                                } else {
                                    local_68 = local_b8.size();
                                    local_44 = (uint32_t)(((uint64_t)((int64_t)(local_68 >> 8)) << 8) | (uint8_t)1);
                                    local_50 = 4294967295;
                                    arg1 = L'\0';
                                    iVar14 = 0;
                                }
                            }
                            uVar17 = 1;
                            uVar16 = 4294967295;
                            if ((char)local_44 != '\0')
                                goto LAB_1002bedfa;
                        } else {
                            local_38 = local_34;
                            iVar14 = local_3c;
                        LAB_1002bedfa:
                            uVar17 = 0;
                            if ((int)uVar16 == -1) {
                                iVar13 = local_38;
                                if (arg1 != L'\0') {
                                    local_34 = iVar14;
                                    lVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                    lVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                    eastl::string::append(&local_b8, (char*)(uVar10 + lVar3), (char*)(lVar8 + 0));
                                    iVar13 = CharWid(local_80, arg1);
                                    local_3c = stringtools::WideToCP1252(arg1);
                                    pvVar5 = local_c0;
                                    iVar13 = local_38 + iVar13;
                                    lVar3 = local_c0->end();
                                    if (lVar3 != 0) {
                                        pcVar4 = (char*)(*pvVar5)[(unsigned long)(((uint16_t)((uint8_t)local_34) << 8) |
                                                                                  (uint8_t)((uint8_t)local_3c))];
                                        iVar13 = iVar13 + *pcVar4;
                                    }
                                    iVar14 = local_3c;
                                    if (arg1 == L' ') {
                                        local_50 = local_b8.size();
                                        local_5c = 1;
                                        local_58 = iVar13;
                                        iVar14 = local_3c;
                                    }
                                }
                                local_3c = iVar14;
                                iVar14 = arg2.end();
                                if (iVar14 == 0) {
                                LAB_1002bef96:
                                    uVar10 = local_50;
                                } else {
                                    iVar12 = iVar14 - 1;
                                    if (local_40 < iVar14) {
                                        iVar12 = local_40;
                                    }
                                    piVar9 = &arg2[(long)iVar12];
                                    if (iVar13 <= *piVar9)
                                        goto LAB_1002bef96;
                                    if ((int)local_50 < 0) {
                                        uVar10 = local_50 & 4294967295;
                                    } else {
                                        local_e0 = local_b8.substr(
                                            local_68 & 4294967295,
                                            (unsigned long)(unsigned int)((int)local_50 - ((int)local_68 + local_5c)));
                                        pbVar11 = &strs[(long)local_40];
                                        *pbVar11 = &local_e0;
                                        local_40 = local_40 + 1;
                                        iVar13 = iVar13 - local_58;
                                        local_3c = 0;
                                        local_68 = local_50;
                                        uVar10 = 4294967295;
                                    }
                                }
                                local_34 = iVar13;
                                if (arg1 == L'-') {
                                    local_50 = local_b8.size();
                                    local_5c = 0;
                                    local_58 = local_34;
                                    uVar17 = 0;
                                } else {
                                    local_50 = uVar10;
                                }
                                goto LAB_1002bee0e;
                            }
                        }
                        local_34 = local_38;
                        local_3c = iVar14;
                    }
                LAB_1002bee0e:
                    pcVar4 = local_70;
                    uVar10 = 0;
                    if (((uVar17 & 3) != 0) || (uVar7 = str.size(), uVar17 = local_74, uVar7 <= uVar10))
                        break;
                }
            }
            local_74 = uVar17;
            if (local_74 == 2) {
                uVar10 = local_b8.size();
                if ((local_68 & 4294967295) < uVar10) {
                    local_e0 = local_b8.substr(local_68 & 4294967295, 18446744073709551615);
                    pbVar11 = &strs[(long)local_40];
                    *pbVar11 = &local_e0;
                    iVar14 = local_40 + 1;
                    local_54 = iVar14;
                } else {
                    local_54 = local_40;
                }
            }
        }
        return local_54;
    }

    // 0x1002bf0f0
    int PixfontGeneric::PredictWidthMultiline(const eastl::string& str, int arg2) {
        int iVar2;
        eastl::string* str_00;
        unsigned long arg1;
        int iVar3;
        int local_34;

        int* local_48 = &local_34;
        uint64_t local_40 = 1;
        local_34 = arg2;
        Array<int> local_60(&local_48);
        unsigned int uVar1 = SplitString(str, local_60, m_lines);
        if ((int)uVar1 < 1) {
            iVar3 = 0;
        } else {
            arg1 = 0;
            iVar3 = 0;
            do {
                str_00 = &m_lines[arg1];
                iVar2 = StringWid(*str_00);
                if (iVar3 < iVar2) {
                    iVar3 = iVar2;
                }
                arg1 = arg1 + 1;
            } while (uVar1 != arg1);
        }
        return iVar3;
    }

    // 0x1002bf1d0
    uint32_t PixfontGeneric::PredictLinesMultiline(const eastl::string& str, int arg2) {
        int local_24;

        int* local_38 = &local_24;
        uint64_t local_30 = 1;
        local_24 = arg2;
        Array<int> local_50(&local_38);
        uint32_t uVar1 = SplitString(str, local_50, m_lines);
        return uVar1;
    }

    // 0x1002bf250
    auto PixfontGeneric::Escape(const char* str, unsigned long arg2) {
        char arg1;
        unsigned long uVar1;

        unsigned long uVar2 = 0;
        if (arg2 != 0) {
            uVar1 = 0;
            do {
                if ((str[uVar1] & 253U) == 60) {
                    uVar2 = (unsigned long)((int)uVar2 + 3);
                }
                uVar1 = uVar1 + 1;
            } while (arg2 != uVar1);
            uVar2 = (unsigned long)(int)uVar2;
        }
        auto result;
        result.reserve(uVar2 + arg2);
        if (arg2 != 0) {
            uVar2 = 0;
            do {
                arg1 = str[uVar2];
                if (arg1 == '>') {
                    result.append("<gt>");
                } else if (arg1 == '<') {
                    result.append("<lt>");
                } else {
                    result.push_back(arg1);
                }
                uVar2 = uVar2 + 1;
            } while (arg2 != uVar2);
        }
        return result;
    }

    // 0x1002bf330
    dash3d::GridRect PixfontGeneric::GetCentreStringSubStringRect(int arg1, int arg2, const eastl::string& str,
                                                                  int arg4, int arg5) {
        dash3d::GridRect result;
        int arg3;
        uint32_t in_register_00000034;
        int arg4_00;
        uint32_t in_register_00000084;
        int in_stack_00000008;
        ReturnValue local_68;
        GridRect* local_48;
        int local_3c;
        int local_38;
        int local_34;

        basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>* this_00 =
            (basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true>>*)(((uint64_t)
                                                                                                 in_register_00000084
                                                                                             << 32) |
                                                                                            (uint32_t)arg4);
        PixfontGeneric* pixfontGeneric = (PixfontGeneric*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        if (this_00->size() == 0) {
            arg3 = 0;
            arg4_00 = 0;
        } else {
            local_48 = &result;
            local_38 = StringWid(pixfontGeneric, (eastl::string*)this_00);
            local_68 = this_00->substr(0, (long)arg2);
            local_3c = StringWid(pixfontGeneric, &local_68);
            local_34 = pixfontGeneric->field_4;
            local_68 = this_00->substr((long)arg2, (long)(int)str);
            arg3 = StringWid(pixfontGeneric, &local_68);
            in_stack_00000008 = in_stack_00000008 - local_34;
            arg5 = (arg5 - local_38 / 2) + local_3c;
            arg4_00 = pixfontGeneric->field_8 + pixfontGeneric->field_4;
            &result = (Margin*)local_48;
        }
        new (&result) dash3d::GridRect(arg5, in_stack_00000008, arg3, arg4_00);
        return (Margin*)&result;
    }

    // 0x1002bf450
    unsigned long PixfontGeneric::SupportedTag(eastl::string& str) {
        uint64_t extraout_var;
        uint64_t unaff_R14;

        auto local_40 = str.substr(0, 4);
        bool bVar1 = local_40 == (*((value_type*)"col="));
        unsigned long uVar3 = (((uint64_t)((int64_t)((unsigned long)unaff_R14 >> 8)) << 8) | (uint8_t)1);
        if (!bVar1) {
            if (!(str == "/col")) {
                local_40 = str.substr(0, 2);
                bVar1 = local_40 == (*((value_type*)"u="));
                if (!bVar1) {
                    if (!(str == "u")) {
                        if (!(str == "/u")) {
                            local_40 = str.substr(0, 5);
                            bVar1 = local_40 == (*((value_type*)"shad="));
                            if (!bVar1) {
                                if (!(str == "shad")) {
                                    if (!(str == "/shad")) {
                                        local_40 = str.substr(0, 4);
                                        bVar1 = local_40 == (*((value_type*)"str="));
                                        if (!bVar1) {
                                            if (!(str == "str")) {
                                                if (!(str == "/str")) {
                                                    if (!(str == "br")) {
                                                        if (!(str == "lt")) {
                                                            if (!(str == "gt")) {
                                                                local_40 = str.substr(0, 4);
                                                                bVar1 = local_40 == (*((value_type*)"img="));
                                                                uVar3 =
                                                                    (((uint64_t)extraout_var << 8) | (uint8_t)bVar1) &
                                                                    4294967295;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x1002bf670
    void PixfontGeneric::DrawString(const eastl::string& str, int arg2, int arg3, int arg4, int arg5,
                                    graphics::Pix2D& pix2D) {
        uint32_t in_register_00000034;
        Pix2D* in_stack_00000008;
        Array<int> local_68;
        Array<int> local_50;

        PixfontGeneric* pixfontGeneric = (PixfontGeneric*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        if (pixfontGeneric->size() != 0) {
            ResetState(pixfontGeneric, arg5, (int)pix2D);
            local_68 = Array<int>();
            local_50 = Array<int>();
            DrawStringInner((PixfontGeneric*)str, (eastl::string*)pixfontGeneric, arg3, arg4, in_stack_00000008, 0, 0,
                            0, &local_68, &local_50);
        }
    }

    // 0x1002bf740
    void PixfontGeneric::ResetState(int arg1, int arg2) {
        m_strikeout = 4294967295;
        m_underline = 4294967295;
        m_defaultShadow = arg2;
        if (arg2 == 0) {
            arg2 = 1;
        }
        m_currentShadow = arg2;
        m_defaultCol = arg1;
        if (arg1 == 0) {
            arg1 = 1;
        }
        m_currentCol = arg1;
        m_alpha = 255;
        m_extraSpaceWidth = 0;
        m_extraSpacePos = 0;
    }

    // 0x1002bf7a0
    void PixfontGeneric::DrawStringInner(const eastl::string& str, int arg2, int arg3, graphics::Pix2D& pix2D, int arg5,
                                         int arg6, int arg7, const Array<int>& arg8, const Array<int>& arg9) {
        int iVar1;
        unsigned long uVar2;
        int iVar3;
        unsigned char arg1;
        bool cVar4;
        bool bVar5;
        uint8_t bVar6;
        unsigned int uVar7;
        Array<graphics::Pix8>* this_01;
        Logger* this_02;
        uint64_t uVar10;
        int* piVar11;
        uint32_t* puVar12;
        Array<unsigned char>* pAVar13;
        uint32_t in_register_00000014;
        int iVar14;
        PixfontGeneric* pPVar15;
        unsigned long uVar17;
        ReturnValue local_120;
        eastl::string local_100;
        TransparentFontColour local_e0;
        TransparentFontColour local_d0;
        char* local_c0;
        unsigned long local_b0;
        Array<int>* local_a8;
        Array<int>* local_a0;
        array<int, 256ul>* local_98;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_88;
        shared_ptr<Array<unsigned char>[]>* local_70;
        Array<int>* local_68;
        Array<int>* local_60;
        int local_54;
        unsigned long local_48;

        unsigned long local_38 = (((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        unsigned long local_78 = (unsigned long)(unsigned int)(arg3 - field_0);
        PixfontGeneric* local_40 = this;
        &local_e0 = (TransparentFontColour[16])PrecalculateTransparentFontColour(m_alpha, m_currentCol);
        &local_d0 = (TransparentFontColour[16])PrecalculateTransparentFontColour(m_alpha, m_currentShadow);
        char* pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        long lVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::end();
        unsigned long uVar16 = lVar9 - (long)pcVar8;
        if (uVar16 != 0) {
            local_88 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&local_40->field_1168;
            local_a8 = (Array<int>*)&local_40->field_1072;
            local_a0 = (Array<int>*)&local_40->field_1096;
            local_70 = (shared_ptr<Array<unsigned char>[]>*)&local_40->field_32;
            local_68 = (Array<int>*)&local_40->field_1120;
            local_60 = (Array<int>*)&local_40->field_1144;
            local_54 = (int)local_78 + 1;
            local_98 = (array<int, 256ul>*)&local_40->field_48;
            uVar17 = 4294967295;
            local_48 = 4294967295;
            local_c0 = pcVar8;
            local_b0 = uVar16;
            do {
                uVar2 = 0;
                arg1 = stringtools::WideToCP1252(stringtools::GetUTF8NextChar16(local_c0, 0));
                if (arg1 != '\0') {
                    if (arg1 == '<') {
                        uVar17 = uVar2 & 4294967295;
                    } else {
                        if ((arg1 == '>') && ((int)uVar17 != -1)) {
                            uVar17 = (unsigned long)((int)uVar17 + 1);
                            local_120 = str.substr(uVar17, uVar2 - uVar17);
                            cVar4 = local_120 == "lt";
                            bVar5 = true;
                            if (!cVar4) {
                                cVar4 = local_120 == "gt";
                                if (!cVar4) {
                                    local_100 = local_120.substr(0, 4);
                                    bVar5 = local_100 == (*((value_type*)"img="));
                                    pPVar15 = &local_100;
                                    if (bVar5) {
                                        local_100 = local_120.substr(4, 18446744073709551615);
                                        uVar17 = local_38;
                                        cVar4 = core::stringtools::general::StringTools::CheckedParseInt(0, local_100,
                                                                                                         10, true);
                                        iVar1 = 0;
                                        if ((!cVar4) || (0 < 0)) {
                                        LAB_1002bfa56:
                                            this_02 = logger::default_logger();
                                            uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                            this_02->Log(
                                                false, 8,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "oldscape/jagex3/jstring/pixfont_generic.cpp",
                                                1702, "Invalid img tag: %s", uVar10);
                                        } else {
                                            iVar14 = ((vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                                          m_inlineImages.operator->())
                                                         ->end();
                                            if (iVar14 <= iVar1)
                                                goto LAB_1002bfa56;
                                            this_01 = (Array<graphics::Pix8>*)*m_inlineImages;
                                            lVar9 = (*this_01)[(long)0];
                                            (**(void (**)(...))(pix2D.field_0 + 184))(
                                                pix2D, lVar9, uVar17 & 4294967295,
                                                (local_40->field_0 + (int)local_78) - *(int*)(lVar9 + 68));
                                            uVar17 = (unsigned long)(unsigned int)((int)uVar17 + *(int*)(lVar9 + 64));
                                            local_48 = 4294967295;
                                        }
                                        local_38 = uVar17;
                                        bVar5 = false;
                                    } else {
                                        UpdateState(pPVar15, &local_120);
                                        bVar5 = false;
                                    }
                                } else {
                                    arg1 = '>';
                                }
                            } else {
                                arg1 = '<';
                            }
                            uVar17 = 4294967295;
                            if (!bVar5)
                                goto LAB_1002bf8c3;
                        }
                        bVar6 = SanitiseChar(arg1);
                        if ((int)uVar17 == -1) {
                            lVar9 = local_88->end();
                            if ((lVar9 != 0) && ((int)local_48 != -1)) {
                                pcVar8 = (char*)(*local_88)[(long)(int)((unsigned int)bVar6 | (int)local_48 << 8)];
                                local_38 = (unsigned long)(unsigned int)((int)local_38 + (int)*pcVar8);
                            }
                            pPVar15 = local_40;
                            uVar16 = (unsigned long)bVar6;
                            piVar11 = (int*)(*local_a8)[uVar16];
                            iVar1 = *piVar11;
                            puVar12 = (uint32_t*)(*local_a0)[uVar16];
                            if (bVar6 == 32) {
                                if (0 < m_extraSpaceWidth) {
                                    uVar7 = m_extraSpaceWidth + m_extraSpacePos;
                                    m_extraSpacePos = uVar7 & 255;
                                    local_38 = (unsigned long)(unsigned int)(((int)uVar7 >> 8) + (int)local_38);
                                }
                            } else {
                                local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)(*puVar12));
                                if (m_alpha < 255) {
                                    if (0 < m_alpha) {
                                        if (m_currentShadow != -1) {
                                            if (*(unsigned long*)&pPVar15->field_24 <= uVar16) {
                                                LogAssert("(index < m_Size)",
                                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                          "OSRS-OS1669-BOXR/libs/jtl/SharedArray.h",
                                                          299, "Index of %d outside range 0 to %d", uVar16,
                                                          *(unsigned long*)&pPVar15->field_24 - 1);
                                            }
                                            pAVar13 = (Array<unsigned char>*)(*local_70)[uVar16];
                                            piVar11 = (int*)(*local_68)[uVar16];
                                            iVar14 = *piVar11;
                                            iVar3 = (int)local_38;
                                            piVar11 = (int*)(*local_60)[uVar16];
                                            pPVar15 = local_40;
                                            PlotLetterTrans(local_40, pAVar13, iVar3 + iVar14 + 1, *piVar11 + local_54,
                                                            iVar1, (int)local_48, &local_d0, pix2D);
                                        }
                                        if (*(unsigned long*)&pPVar15->field_24 <= uVar16) {
                                            LogAssert("(index < m_Size)",
                                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                      "OSRS-OS1669-BOXR/libs/jtl/SharedArray.h",
                                                      299, "Index of %d outside range 0 to %d", uVar16,
                                                      *(unsigned long*)&pPVar15->field_24 - 1);
                                        }
                                        pAVar13 = (Array<unsigned char>*)(*local_70)[uVar16];
                                        piVar11 = (int*)(*local_68)[uVar16];
                                        iVar14 = *piVar11 + (int)local_38;
                                        piVar11 = (int*)(*local_60)[uVar16];
                                        pPVar15 = local_40;
                                        PlotLetterTrans(local_40, pAVar13, iVar14, *piVar11 + (int)local_78, iVar1,
                                                        (int)local_48, &local_e0, pix2D);
                                    }
                                } else {
                                    if (m_currentShadow != -1) {
                                        cVar4 = arg9.empty();
                                        uVar2 = *(unsigned long*)&pPVar15->field_24;
                                        if (!cVar4) {
                                            if (uVar2 <= uVar16) {
                                                LogAssert("(index < m_Size)",
                                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                          "OSRS-OS1669-BOXR/libs/jtl/SharedArray.h",
                                                          299, "Index of %d outside range 0 to %d", uVar16, uVar2 - 1);
                                            }
                                            pAVar13 = (Array<unsigned char>*)(*local_70)[uVar16];
                                            piVar11 = (int*)(*local_68)[uVar16];
                                            iVar14 = *piVar11;
                                            iVar3 = (int)local_38;
                                            piVar11 = (int*)(*local_60)[uVar16];
                                            pPVar15 = local_40;
                                            PlotLetterScanline(local_40, pAVar13, iVar3 + iVar14 + 1,
                                                               *piVar11 + local_54, iVar1, (int)local_48,
                                                               m_currentShadow, arg5, arg6, arg7, arg8, arg9, pix2D);
                                        } else {
                                            if (uVar2 <= uVar16) {
                                                LogAssert("(index < m_Size)",
                                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                          "OSRS-OS1669-BOXR/libs/jtl/SharedArray.h",
                                                          299, "Index of %d outside range 0 to %d", uVar16, uVar2 - 1);
                                            }
                                            pAVar13 = (Array<unsigned char>*)(*local_70)[uVar16];
                                            piVar11 = (int*)(*local_68)[uVar16];
                                            iVar14 = *piVar11;
                                            iVar3 = (int)local_38;
                                            piVar11 = (int*)(*local_60)[uVar16];
                                            pPVar15 = local_40;
                                            PlotLetter(local_40, pAVar13, iVar3 + iVar14 + 1, *piVar11 + local_54,
                                                       iVar1, (int)local_48, m_currentShadow, pix2D);
                                        }
                                    }
                                    cVar4 = arg9.empty();
                                    uVar2 = *(unsigned long*)&pPVar15->field_24;
                                    if (!cVar4) {
                                        if (uVar2 <= uVar16) {
                                            LogAssert("(index < m_Size)",
                                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                      "OSRS-OS1669-BOXR/libs/jtl/SharedArray.h",
                                                      299, "Index of %d outside range 0 to %d", uVar16, uVar2 - 1);
                                        }
                                        pAVar13 = (Array<unsigned char>*)(*local_70)[uVar16];
                                        piVar11 = (int*)(*local_68)[uVar16];
                                        iVar14 = *piVar11 + (int)local_38;
                                        piVar11 = (int*)(*local_60)[uVar16];
                                        pPVar15 = local_40;
                                        PlotLetterScanline(local_40, pAVar13, iVar14, *piVar11 + (int)local_78, iVar1,
                                                           (int)local_48, m_currentCol, arg5, arg6, arg7, arg8, arg9,
                                                           pix2D);
                                    } else {
                                        if (uVar2 <= uVar16) {
                                            LogAssert("(index < m_Size)",
                                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                      "OSRS-OS1669-BOXR/libs/jtl/SharedArray.h",
                                                      299, "Index of %d outside range 0 to %d", uVar16, uVar2 - 1);
                                        }
                                        pAVar13 = (Array<unsigned char>*)(*local_70)[uVar16];
                                        piVar11 = (int*)(*local_68)[uVar16];
                                        iVar14 = *piVar11 + (int)local_38;
                                        piVar11 = (int*)(*local_60)[uVar16];
                                        pPVar15 = local_40;
                                        PlotLetter(local_40, pAVar13, iVar14, *piVar11 + (int)local_78, iVar1,
                                                   (int)local_48, m_currentCol, pix2D);
                                    }
                                }
                            }
                            piVar11 = (int*)(*local_98)[uVar16];
                            iVar1 = *piVar11;
                            if (m_strikeout != -1) {
                                (**(void (**)(...))(pix2D.field_0 + 56))(
                                    pix2D, local_38, (int)((double)pPVar15->field_0 * 0.7) + (int)local_78, iVar1);
                            }
                            iVar14 = (int)local_38;
                            local_48 = uVar16;
                            if (m_underline != -1) {
                                (**(void (**)(...))(pix2D.field_0 + 56))(pix2D, local_38 & 4294967295,
                                                                         pPVar15->field_0 + local_54, iVar1);
                            }
                            local_38 = (unsigned long)(unsigned int)(iVar1 + iVar14);
                            uVar16 = local_b0;
                        }
                    }
                }
            LAB_1002bf8c3:
            } while (0 < uVar16);
        }
    }

    // 0x1002c0050
    void PixfontGeneric::DrawStringTrans(const eastl::string& str, int arg2, int arg3, int arg4, int arg5, int arg6,
                                         graphics::Pix2D& pix2D) {
        Array<int> local_68;
        Array<int> local_50;

        if (str.size() != 0) {
            ResetState((PixfontGeneric*)str, arg4, arg5);
            m_alpha = arg6;
            local_68 = Array<int>();
            local_50 = Array<int>();
            DrawStringInner(str, arg2, arg3, pix2D, 0, 0, 0, local_68, local_50);
        }
    }

    // 0x1002c0120
    void PixfontGeneric::DrawStringUpwards(const eastl::string& str, int arg2, int arg3, int arg4, int arg5,
                                           graphics::Pix2D& pix2D) {
        uint32_t in_register_00000034;
        Pix2D* in_stack_00000008;

        PixfontGeneric* pixfontGeneric = (PixfontGeneric*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        if (pixfontGeneric->size() != 0) {
            ResetState(pixfontGeneric, arg5, (int)pix2D);
            DrawStringUpwardsInner((PixfontGeneric*)str, (eastl::string*)pixfontGeneric, arg3, arg4, in_stack_00000008);
        }
    }

    // 0x1002c0180
    void PixfontGeneric::DrawStringUpwardsInner(const eastl::string& str, int arg2, int arg3, graphics::Pix2D& pix2D) {
        bool bVar1;
        unsigned char uVar2;
        unsigned char arg1;
        bool cVar3;
        uint8_t bVar4;
        int* piVar7;
        Array<unsigned char>* pAVar8;
        int iVar9;
        PixfontGeneric* pPVar10;
        unsigned int uVar11;
        unsigned long uVar12;
        unsigned long uVar13;
        uint8_t local_100[32];
        TransparentFontColour local_e0;
        TransparentFontColour local_d0;
        char* local_c0;
        Array<int>* local_a8;
        array<int, 256ul>* local_a0;
        Array<int>* local_98;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_88;
        Array<unsigned char>* local_80;
        shared_ptr<Array<unsigned char>[]>* local_68;
        Array<int>* local_60;
        Array<int>* local_58;
        int local_44;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        unsigned long local_70 = (unsigned long)(unsigned int)(arg2 - field_0);
        PixfontGeneric* local_78 = this;
        &local_e0 = (TransparentFontColour[16])PrecalculateTransparentFontColour(m_alpha, m_currentCol);
        &local_d0 = (TransparentFontColour[16])PrecalculateTransparentFontColour(m_alpha, m_currentShadow);
        char* pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        long lVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::end();
        unsigned long local_b8 = lVar6 - (long)pcVar5;
        if (local_b8 != 0) {
            local_a8 = (Array<int>*)&local_78->field_1072;
            local_a0 = (array<int, 256ul>*)&local_78->field_48;
            local_98 = (Array<int>*)&local_78->field_1096;
            local_88 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&local_78->field_1168;
            local_68 = (shared_ptr<Array<unsigned char>[]>*)&local_78->field_32;
            local_60 = (Array<int>*)&local_78->field_1144;
            local_40 = (int)local_70 + 1;
            local_58 = (Array<int>*)&local_78->field_1120;
            uVar13 = 4294967295;
            uVar11 = 4294967295;
            local_c0 = pcVar5;
            do {
                uVar12 = 0;
                arg1 = stringtools::WideToCP1252(stringtools::GetUTF8NextChar16(local_c0, 0));
                if (arg1 != '\0') {
                    if (arg1 == '<') {
                        uVar13 = uVar12 & 4294967295;
                    } else {
                        if ((arg1 == '>') && ((int)uVar13 != -1)) {
                            uVar13 = (unsigned long)((int)uVar13 + 1);
                            local_3c = arg3;
                            *local_100 = str.substr(uVar13, uVar12 - uVar13);
                            cVar3 = *local_100 == "lt";
                            bVar1 = true;
                            uVar2 = '<';
                            if (!cVar3) {
                                pPVar10 = (PixfontGeneric*)local_100;
                                cVar3 = *local_100 == "gt";
                                uVar2 = '>';
                                if (!cVar3) {
                                    UpdateState(pPVar10, (eastl::string*)local_100);
                                    bVar1 = false;
                                    uVar2 = arg1;
                                }
                            }
                            arg1 = uVar2;
                            uVar13 = 4294967295;
                            arg3 = local_3c;
                            if (!bVar1)
                                goto LAB_1002c0293;
                        }
                        bVar4 = SanitiseChar(arg1);
                        if ((int)uVar13 == -1) {
                            uVar12 = (unsigned long)(unsigned int)bVar4;
                            piVar7 = (int*)(*local_a8)[uVar12];
                            local_38 = *piVar7;
                            piVar7 = (int*)(*local_a0)[uVar12];
                            local_44 = *piVar7;
                            piVar7 = (int*)(*local_98)[uVar12];
                            local_34 = *piVar7;
                            lVar6 = local_88->end();
                            if ((lVar6 != 0) && (uVar11 != 4294967295)) {
                                pcVar5 = (char*)(*local_88)[(long)(int)((unsigned int)bVar4 | uVar11 << 8)];
                                arg3 = arg3 - *pcVar5;
                            }
                            pPVar10 = local_78;
                            arg3 = arg3 - local_44;
                            if (bVar4 == 32) {
                                if (0 < m_extraSpaceWidth) {
                                    arg3 = arg3 - ((int)(m_extraSpaceWidth + m_extraSpacePos) >> 8);
                                    m_extraSpacePos = m_extraSpaceWidth + m_extraSpacePos & 255;
                                }
                            } else if (m_alpha < 255) {
                                if (0 < m_alpha) {
                                    local_3c = arg3;
                                    if (m_currentShadow != -1) {
                                        if (*(unsigned long*)&local_78->field_24 <= uVar12) {
                                            LogAssert("(index < m_Size)",
                                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                      "OSRS-OS1669-BOXR/libs/jtl/SharedArray.h",
                                                      299, "Index of %d outside range 0 to %d", uVar12,
                                                      *(unsigned long*)&local_78->field_24 - 1);
                                        }
                                        pAVar8 = (Array<unsigned char>*)(*local_68)[uVar12];
                                        piVar7 = (int*)(*local_60)[uVar12];
                                        iVar9 = *piVar7 + local_40;
                                        piVar7 = (int*)(*local_58)[uVar12];
                                        pPVar10 = local_78;
                                        PlotLetterUpwardsTrans(local_78, pAVar8, iVar9, (local_3c - *piVar7) + 1,
                                                               local_34, local_38, &local_d0, pix2D);
                                    }
                                    if (*(unsigned long*)&pPVar10->field_24 <= uVar12) {
                                        LogAssert("(index < m_Size)",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/jtl/SharedArray.h",
                                                  299, "Index of %d outside range 0 to %d", uVar12,
                                                  *(unsigned long*)&pPVar10->field_24 - 1);
                                    }
                                    pAVar8 = (Array<unsigned char>*)(*local_68)[uVar12];
                                    piVar7 = (int*)(*local_60)[uVar12];
                                    iVar9 = *piVar7 + (int)local_70;
                                    piVar7 = (int*)(*local_58)[uVar12];
                                    arg3 = local_3c;
                                    pPVar10 = local_78;
                                    PlotLetterUpwardsTrans(local_78, pAVar8, iVar9, local_3c - *piVar7, local_34,
                                                           local_38, &local_e0, pix2D);
                                }
                            } else {
                                if (m_currentShadow != -1) {
                                    if (*(unsigned long*)&local_78->field_24 <= uVar12) {
                                        LogAssert("(index < m_Size)",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/jtl/SharedArray.h",
                                                  299, "Index of %d outside range 0 to %d", uVar12,
                                                  *(unsigned long*)&local_78->field_24 - 1);
                                    }
                                    local_80 = (Array<unsigned char>*)(*local_68)[uVar12];
                                    piVar7 = (int*)(*local_60)[uVar12];
                                    iVar9 = *piVar7 + local_40;
                                    piVar7 = (int*)(*local_58)[uVar12];
                                    PlotLetterUpwards(pPVar10, local_80, iVar9, (arg3 - *piVar7) + 1, local_34,
                                                      local_38, m_currentShadow, pix2D);
                                }
                                if (*(unsigned long*)&pPVar10->field_24 <= uVar12) {
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", uVar12,
                                              *(unsigned long*)&pPVar10->field_24 - 1);
                                }
                                local_80 = (Array<unsigned char>*)(*local_68)[uVar12];
                                piVar7 = (int*)(*local_60)[uVar12];
                                iVar9 = *piVar7 + (int)local_70;
                                piVar7 = (int*)(*local_58)[uVar12];
                                PlotLetterUpwards(pPVar10, local_80, iVar9, arg3 - *piVar7, local_34, local_38,
                                                  m_currentCol, pix2D);
                            }
                            if (m_strikeout != -1) {
                                (**(void (**)(...))(pix2D.field_0 + 72))(
                                    pix2D, (int)((double)pPVar10->field_0 * 0.7) + (int)local_70, arg3, local_44);
                            }
                            if (m_underline != -1) {
                                (**(void (**)(...))(pix2D.field_0 + 72))(pix2D, pPVar10->field_0 + local_40, arg3,
                                                                         local_44);
                            }
                            uVar11 = (unsigned int)bVar4;
                        }
                    }
                }
            LAB_1002c0293:
            } while (0 < local_b8);
        }
    }

    // 0x1002c0740
    void PixfontGeneric::RightString(const eastl::string& str, int arg2, int arg3, int arg4, int arg5,
                                     graphics::Pix2D& pix2D) {
        int iVar1;
        uint32_t in_register_00000034;
        Pix2D* in_stack_00000008;
        Array<int> local_68;
        Array<int> local_50;

        PixfontGeneric* pixfontGeneric = (PixfontGeneric*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        if (pixfontGeneric->size() != 0) {
            ResetState(pixfontGeneric, arg5, (int)pix2D);
            iVar1 = StringWid((PixfontGeneric*)str, (eastl::string*)pixfontGeneric);
            local_50 = Array<int>();
            local_68 = Array<int>();
            DrawStringInner((PixfontGeneric*)str, (eastl::string*)pixfontGeneric, arg3 - iVar1, arg4, in_stack_00000008,
                            0, 0, 0, &local_50, &local_68);
        }
    }

    // 0x1002c0820
    void PixfontGeneric::RightStringTrans(const eastl::string& str, int arg2, int arg3, int arg4, int arg5, int arg6,
                                          graphics::Pix2D& pix2D) {
        int iVar1;
        Array<int> local_68;
        Array<int> local_50;

        if (str.size() != 0) {
            ResetState((PixfontGeneric*)str, arg4, arg5);
            m_alpha = arg6;
            iVar1 = StringWid(str);
            local_50 = Array<int>();
            local_68 = Array<int>();
            DrawStringInner(str, arg2 - iVar1, arg3, pix2D, 0, 0, 0, local_50, local_68);
        }
    }

    // 0x1002c0910
    void PixfontGeneric::RightStringUpwards(const eastl::string& str, int arg2, int arg3, int arg4, int arg5,
                                            graphics::Pix2D& pix2D) {
        int iVar2;
        uint32_t in_register_00000034;
        Pix2D* in_stack_00000008;

        PixfontGeneric* pixfontGeneric = (PixfontGeneric*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        if (pixfontGeneric->size() != 0) {
            ResetState(pixfontGeneric, arg5, (int)pix2D);
            iVar2 = StringWid((PixfontGeneric*)str, (eastl::string*)pixfontGeneric);
            DrawStringUpwardsInner((PixfontGeneric*)str, (eastl::string*)pixfontGeneric, arg3, arg4 + iVar2,
                                   in_stack_00000008);
        }
    }

    // 0x1002c0980
    void PixfontGeneric::CentreString(const eastl::string& str, int arg2, int arg3, int arg4, int arg5,
                                      graphics::Pix2D& pix2D) {
        int iVar1;
        uint32_t in_register_00000034;
        Pix2D* in_stack_00000008;
        Array<int> local_68;
        Array<int> local_50;

        PixfontGeneric* pixfontGeneric = (PixfontGeneric*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        if (pixfontGeneric->size() != 0) {
            ResetState(pixfontGeneric, arg5, (int)pix2D);
            iVar1 = StringWid((PixfontGeneric*)str, (eastl::string*)pixfontGeneric);
            local_50 = Array<int>();
            local_68 = Array<int>();
            DrawStringInner((PixfontGeneric*)str, (eastl::string*)pixfontGeneric, arg3 - iVar1 / 2, arg4,
                            in_stack_00000008, 0, 0, 0, &local_50, &local_68);
        }
    }

    // 0x1002c0a70
    void PixfontGeneric::CentreStringTrans(const eastl::string& str, int arg2, int arg3, int arg4, int arg5, int arg6,
                                           graphics::Pix2D& pix2D) {
        int iVar1;
        Array<int> local_68;
        Array<int> local_50;

        if (str.size() != 0) {
            ResetState((PixfontGeneric*)str, arg4, arg5);
            m_alpha = arg6;
            iVar1 = StringWid(str);
            local_50 = Array<int>();
            local_68 = Array<int>();
            DrawStringInner(str, arg2 - iVar1 / 2, arg3, pix2D, 0, 0, 0, local_50, local_68);
        }
    }

    // 0x1002c0b70
    void PixfontGeneric::CentreStringUpwards(const eastl::string& str, int arg2, int arg3, int arg4, int arg5,
                                             graphics::Pix2D& pix2D) {
        int iVar2;
        uint32_t in_register_00000034;
        Pix2D* in_stack_00000008;

        PixfontGeneric* pixfontGeneric = (PixfontGeneric*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        if (pixfontGeneric->size() != 0) {
            ResetState(pixfontGeneric, arg5, (int)pix2D);
            iVar2 = StringWid((PixfontGeneric*)str, (eastl::string*)pixfontGeneric);
            DrawStringUpwardsInner((PixfontGeneric*)str, (eastl::string*)pixfontGeneric, arg3, iVar2 / 2 + arg4,
                                   in_stack_00000008);
        }
    }

    // 0x1002c0be0
    void PixfontGeneric::CentreStringScanline(const eastl::string& str, int arg2, int arg3, int arg4, int arg5,
                                              graphics::Pix2D& pix2D, int arg7, int arg8, int arg9,
                                              const Array<int>& arg10, const Array<int>& arg11) {
        int iVar1;

        if (str.size() != 0) {
            ResetState((PixfontGeneric*)str, arg4, arg5);
            iVar1 = StringWid(str);
            DrawStringInner(str, arg2 - iVar1 / 2, arg3, pix2D, arg7, arg8, arg9, arg10, arg11);
        }
    }

    // 0x1002c0c70
    void PixfontGeneric::JustifyString(eastl::string& str, int arg2, int arg3, int arg4, int arg5, int arg6,
                                       graphics::Pix2D& pix2D) {
        Array<int> local_68;
        Array<int> local_50;

        if (str.size() != 0) {
            ResetState((PixfontGeneric*)str, arg4, arg5);
            CalculateSpaceWidth(str, arg6);
            local_68 = Array<int>();
            local_50 = Array<int>();
            DrawStringInner(str, arg2, arg3, pix2D, 0, 0, 0, local_68, local_50);
        }
    }

    // 0x1002c0d50
    void PixfontGeneric::CalculateSpaceWidth(eastl::string& str, int arg2) {
        char cVar1;
        bool bVar2;
        int iVar3;
        unsigned long uVar5;
        char* pcVar6;
        int iVar7;
        bool bVar8;
        unsigned long uVar9;

        if (str.size() == 0) {
            iVar7 = 0;
        } else {
            iVar7 = 0;
            bVar8 = false;
            uVar5 = 0;
            uVar9 = 1;
            do {
                pcVar6 = (char*)str.at(uVar5);
                cVar1 = *pcVar6;
                if (cVar1 == '<') {
                    bVar8 = true;
                } else if (cVar1 == '>') {
                    bVar8 = false;
                } else {
                    iVar7 = iVar7 + (unsigned int)(cVar1 == ' ' && !bVar8);
                }
                uVar5 = str.size();
                bVar2 = uVar9 < uVar5;
                uVar5 = uVar9;
                uVar9 = (unsigned long)((int)uVar9 + 1);
            } while (bVar2);
        }
        if (0 < iVar7) {
            iVar3 = StringWid(str);
            m_extraSpaceWidth = ((arg2 - iVar3) * 256) / iVar7;
        }
    }

    // 0x1002c0e20
    unsigned long PixfontGeneric::DrawStringMultiline(const eastl::string& str, int arg2, int arg3, int arg4, int arg5,
                                                      int arg6, int arg7, int arg8, int arg9, int arg10, int arg11,
                                                      graphics::Pix2D& pix2D) {
        unsigned int uVar1;
        int iVar2;
        eastl::string* pbVar4;
        eastl::string* pbVar5;
        uint32_t in_register_00000014;
        uint32_t in_register_00000084;
        int iVar6;
        unsigned long uVar7;
        Array<int> local_b8;
        unsigned long local_a0;
        unsigned long local_98;
        unsigned long local_90;
        int local_84;
        uint32_t local_80[6];
        uint32_t* local_60;
        uint64_t local_58;
        unsigned long local_40;

        uint64_t local_68 = (((uint64_t)in_register_00000084 << 32) | (uint32_t)arg4);
        uint64_t local_48 = (((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        if (str.size() == 0) {
            local_90 = 0;
        } else {
            ResetState((PixfontGeneric*)str, arg6, arg7);
            m_alpha = arg8;
            if (arg11 == 0) {
                arg11 = field_0;
            }
            uVar7 = (unsigned long)(unsigned int)arg11;
            local_80[0] = (uint32_t)local_68;
            local_60 = local_80;
            local_58 = 1;
            local_b8 = Array<int>(&local_60);
            local_40 = uVar7;
            if ((arg5 < field_4 + arg11 + field_8) && (arg5 < arg11 * 2)) {
                local_b8.clear();
            }
            uVar1 = SplitString(str, local_b8, m_lines);
            local_90 = (unsigned long)uVar1;
            iVar6 = 1;
            if (uVar1 != 1 || arg10 != 3) {
                iVar6 = arg10;
            }
            if (iVar6 == 0) {
                iVar6 = arg3 + field_4;
            } else if (iVar6 == 1) {
                iVar6 = arg3 + field_4 + (int)(((1 - uVar1) * (int)local_40 + arg5) - (field_4 + field_8)) / 2;
            } else if (iVar6 == 2) {
                iVar6 = (arg5 + arg3 + (1 - uVar1) * (int)local_40) - field_8;
            } else {
                iVar6 = (int)(((1 - uVar1) * (int)local_40 + arg5) - (field_8 + field_4)) / (int)(uVar1 + 1);
                iVar2 = 0;
                if (-1 < iVar6) {
                    iVar2 = iVar6;
                }
                iVar6 = arg3 + field_4 + iVar2;
                local_40 = (unsigned long)(unsigned int)(iVar2 + (int)local_40);
            }
            if (0 < (int)uVar1) {
                local_84 = (int)local_68 + (int)local_48;
                local_98 = (unsigned long)(uVar1 - 1);
                uVar7 = 0;
                local_a0 = local_90;
                do {
                    if (arg9 == 2) {
                        pbVar4 = &m_lines[uVar7];
                        pbVar5 = &m_lines[uVar7];
                        iVar2 = StringWid(*pbVar5);
                        new (&local_60) Array<int>();
                        new (local_80) Array<int>();
                        DrawStringInner(*pbVar4, local_84 - iVar2, iVar6, pix2D, 0, 0, 0, local_60, *local_80);
                    LAB_1002c0ff0:
                    LAB_1002c0ffb:
                    } else {
                        if (arg9 == 1) {
                            pbVar4 = &m_lines[uVar7];
                            pbVar5 = &m_lines[uVar7];
                            iVar2 = StringWid(*pbVar5);
                            new (&local_60) Array<int>();
                            new (local_80) Array<int>();
                            DrawStringInner(*pbVar4, ((int)local_68 - iVar2) / 2 + (int)local_48, iVar6, pix2D, 0, 0, 0,
                                            local_60, *local_80);
                            goto LAB_1002c0ff0;
                        }
                        if (arg9 == 0) {
                            pbVar4 = &m_lines[uVar7];
                            new (&local_60) Array<int>();
                            new (local_80) Array<int>();
                            DrawStringInner(*pbVar4, (int)local_48, iVar6, pix2D, 0, 0, 0, local_60, *local_80);
                        LAB_1002c1227:
                            goto LAB_1002c0ffb;
                        }
                        if (local_98 == uVar7) {
                            pbVar4 = &m_lines[uVar7];
                            new (&local_60) Array<int>();
                            new (local_80) Array<int>();
                            DrawStringInner(*pbVar4, (int)local_48, iVar6, pix2D, 0, 0, 0, local_60, *local_80);
                            goto LAB_1002c1227;
                        }
                        pbVar4 = &m_lines[uVar7];
                        CalculateSpaceWidth(*pbVar4, (int)local_68);
                        pbVar4 = &m_lines[uVar7];
                        new (&local_60) Array<int>();
                        new (local_80) Array<int>();
                        DrawStringInner(*pbVar4, (int)local_48, iVar6, pix2D, 0, 0, 0, local_60, *local_80);
                        m_extraSpaceWidth = 0;
                    }
                    iVar6 = iVar6 + (int)local_40;
                    uVar7 = uVar7 + 1;
                } while (local_a0 != uVar7);
            }
        }
        return local_90;
    }

    // 0x1002c1350
    uint64_t PixfontGeneric::DrawTextRunSlice(const jag::graphics::TextRunSlice& textRunSlice, int arg2, int arg3,
                                              unsigned int arg4, unsigned int arg5, graphics::Pix2D& pix2D, int arg7) {
        uint8_t* this_00;
        uint8_t* this_01;
        int iVar1;
        uint8_t bVar3;
        long lVar4;
        long lVar5;
        int* piVar6;
        Array<unsigned char>* pAVar7;
        char16_t arg1;
        int iVar9;
        unsigned long arg1_00;
        int iVar11;
        int* piVar12;
        int* arg2_00;
        uint64_t local_70;
        shared_ptr<Array<unsigned char>[]>* local_68;
        Array<int>* local_60;
        Array<int>* local_58;
        int local_4c;
        int local_48;
        int local_44;

        PixfontGeneric* pPVar10 = (PixfontGeneric*)textRunSlice;
        PixfontGeneric* local_40 = this;
        int local_34 = arg3;
        if (!(textRunSlice.IsEmpty())) {
            ResetState(pPVar10, arg4, arg5);
            local_34 = local_34 - local_40->field_0;
            lVar4 = textRunSlice.end();
            lVar5 = textRunSlice.data();
            if (lVar4 != lVar5) {
                this_00 = &local_40->field_1072;
                this_01 = &local_40->field_1096;
                local_68 = (shared_ptr<Array<unsigned char>[]>*)&local_40->field_32;
                local_60 = (Array<int>*)&local_40->field_1120;
                local_58 = (Array<int>*)&local_40->field_1144;
                arg2_00 = (int*)(lVar4 + 8);
                do {
                    if ((arg7 != -1) && (arg7 < *arg2_00)) {
                        local_70.pair<true, false>(*(arg2_00 - 1), *arg2_00);
                        return local_70;
                    }
                    arg1 = *(char16_t*)(arg2_00 - 2);
                    if (arg1 != L'\n') {
                        if (textRunSlice.ShouldHide(*((arg2_00 - 2)))) {
                            arg1 = L'*';
                        }
                        if (arg1 != L'\t') {
                            bVar3 = SanitiseAndConvertWideChar(arg1);
                            iVar9 = arg2_00[-1] + arg2;
                            iVar11 = *arg2_00 + local_34;
                            arg1_00 = (unsigned long)bVar3;
                            piVar6 = (int*)(*this_00)[arg1_00];
                            local_48 = *piVar6;
                            piVar6 = (int*)(*this_01)[arg1_00];
                            local_44 = *piVar6;
                            pPVar10 = local_40;
                            if (m_currentShadow != -1) {
                                if (*(unsigned long*)&local_40->field_24 <= arg1_00) {
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", arg1_00,
                                              *(unsigned long*)&local_40->field_24 - 1);
                                }
                                pAVar7 = (Array<unsigned char>*)(*local_68)[arg1_00];
                                piVar6 = (int*)(*local_60)[arg1_00];
                                local_4c = *piVar6 + iVar9 + 1;
                                piVar6 = (int*)(*local_58)[arg1_00];
                                pPVar10 = local_40;
                                PlotLetter(local_40, pAVar7, local_4c, iVar11 + *piVar6 + 1, local_48, local_44,
                                           m_currentShadow, pix2D);
                            }
                            if (*(unsigned long*)&pPVar10->field_24 <= arg1_00) {
                                LogAssert("(index < m_Size)",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                          "SharedArray.h",
                                          299, "Index of %d outside range 0 to %d", arg1_00,
                                          *(unsigned long*)&pPVar10->field_24 - 1);
                            }
                            pAVar7 = (Array<unsigned char>*)(*local_68)[arg1_00];
                            piVar6 = (int*)(*local_60)[arg1_00];
                            iVar1 = *piVar6;
                            piVar6 = (int*)(*local_58)[arg1_00];
                            PlotLetter(local_40, pAVar7, iVar9 + iVar1, iVar11 + *piVar6, local_48, local_44,
                                       m_currentCol, pix2D);
                        }
                    }
                    piVar6 = (int*)textRunSlice.data();
                    piVar12 = arg2_00 + 1;
                    arg2_00 = arg2_00 + 3;
                } while (piVar12 != piVar6);
            }
        }
        return textRunSlice.GetLastCursorPosition();
    }

    // 0x1002c1630
    void PixfontGeneric::PlotLetter(const Array<unsigned char>& arg1, int arg2, int arg3, int arg4, int arg5, int arg6,
                                    graphics::Pix2D& pix2D) {
        int arg4_00;

        int iVar5 = pix2D.field_8;
        int iVar4 = pix2D.field_16;
        int arg5_00 = iVar5 * arg3 + arg2;
        int iVar2 = iVar4 - arg3;
        if (iVar2 == 0 || iVar4 < arg3) {
            arg4_00 = 0;
        } else {
            arg5 = arg5 - iVar2;
            arg4_00 = iVar2 * arg4;
            arg5_00 = arg5_00 + iVar2 * iVar5;
            arg3 = iVar4;
        }
        iVar5 = iVar5 - arg4;
        iVar4 = pix2D.field_24;
        iVar2 = pix2D.field_20 - (arg3 + arg5);
        if (arg3 + arg5 <= pix2D.field_20) {
            iVar2 = 0;
        }
        int iVar1 = iVar4 - arg2;
        if (iVar1 == 0 || iVar4 < arg2) {
            iVar1 = 0;
        } else {
            arg4 = arg4 - iVar1;
            arg4_00 = arg4_00 + iVar1;
            arg5_00 = arg5_00 + iVar1;
            iVar5 = iVar5 + iVar1;
            arg2 = iVar4;
        }
        unsigned int uVar3 = (arg2 + arg4) - pix2D.field_28;
        PixfontGeneric* this_00 = (PixfontGeneric*)(unsigned long)uVar3;
        if (uVar3 == 0 || arg2 + arg4 < pix2D.field_28) {
            this_00 = nullptr;
        }
        iVar4 = (int)this_00;
        if ((arg4 - iVar4 != 0 && iVar4 <= arg4) && (0 < iVar2 + arg5)) {
            PlotLetter(this_00, (SharedArray<unsigned int>*)&pix2D.field_32, arg1, arg6, arg4_00, arg5_00, arg4 - iVar4,
                       iVar2 + arg5, iVar5 + iVar4, iVar1 + iVar4);
        }
    }

    // 0x1002c16f0
    Array<int> ColourPatternToPerCharacterArray(eastl::vector<int> arg1, unsigned long arg2) {
        uint32_t uVar1;
        unsigned long uVar2;
        unsigned long uVar3;
        uint32_t* puVar4;
        float fVar5;
        Array<int> local_58;
        ReturnValue* local_40;
        float local_38;

        if (arg2 == 0) {
            Array<int> result;
        } else {
            local_58 = Array<int>(arg2);
            uVar2 = arg1->size();
            local_38 = (float)uVar2;
            uVar2 = 0;
            local_40 = &result;
            do {
                fVar5 = ((float)uVar2 * local_38) / (float)arg2;
                uVar3 = (unsigned long)fVar5;
                puVar4 = (uint32_t*)(*arg1)[(long)(fVar5 - 9.223372e+18) & (long)uVar3 >> 63 | uVar3];
                uVar1 = *puVar4;
                puVar4 = &local_58[uVar2];
                &result = local_40;
                *puVar4 = uVar1;
                uVar2 = uVar2 + 1;
            } while (arg2 != uVar2);
            new (local_40) Array<int>(&local_58);
        }
        return result;
    }

    // 0x1002c1850
    void PixfontGeneric::DrawStringColourPattern(const eastl::string& str, int arg2, int arg3, int arg4, int arg5,
                                                 const eastl::vector<int>& arg6, graphics::Pix2D& pix2D) {
        unsigned long arg2_00;
        vector<int> local_88;
        ReturnValue local_68;
        Array<int> local_50;

        long lVar1 = str.size();
        if (lVar1 != 0) {
            ResetState((PixfontGeneric*)str, arg4, arg5);
            local_50 = Array<int>();
            lVar1 = arg6.size();
            if (lVar1 != 0) {
                local_88 = eastl::vector<int>(arg6);
                arg2_00 = str.size();
                ColourPatternToPerCharacterArray(&local_68, &local_88, arg2_00);
                local_50 = local_68;
            }
            DrawStringInnerCustomOffsetsAndColours(str, arg2, arg3, local_50, m_empty, m_empty, pix2D);
        }
    }

    // 0x1002c1960
    void PixfontGeneric::DrawStringInnerCustomOffsetsAndColours(const eastl::string& str, int arg2, int arg3,
                                                                Array<int>& arg4, Array<int>& arg5, Array<int>& arg6,
                                                                graphics::Pix2D& pix2D) {
        unsigned char arg1;
        bool cVar1;
        bool bVar2;
        uint8_t bVar3;
        int iVar4;
        unsigned int uVar5;
        uint32_t* puVar8;
        unsigned long uVar9;
        Array<graphics::Pix8>* this_02;
        Logger* this_03;
        uint64_t uVar10;
        long lVar11;
        char* pcVar12;
        int* piVar13;
        unsigned long uVar14;
        unsigned int* puVar15;
        int iVar16;
        unsigned long uVar17;
        uint32_t in_register_00000014;
        int iVar18;
        PixfontGeneric* pPVar19;
        unsigned long uVar20;
        uint8_t auVar21[16];
        ReturnValue local_148;
        ReturnValue local_128;
        TransparentFontColour local_108;
        char* local_f8;
        Array<int>* local_e0;
        Array<int>* local_d8;
        array<int, 256ul>* local_d0;
        TransparentFontColour local_c8;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_b0;
        Array<unsigned char>* local_a8;
        unsigned long local_98;
        shared_ptr<Array<unsigned char>[]>* local_90;
        Array<int>* local_88;
        Array<int>* local_80;
        Array<unsigned char>* local_78;
        unsigned long local_70;
        unsigned long local_50;
        unsigned long local_48;
        int local_40;
        int local_3c;

        unsigned long local_38 = (((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        unsigned long local_60 = (unsigned long)(unsigned int)(arg3 - field_0);
        PixfontGeneric* local_58 = this;
        &local_c8 = (TransparentFontColour[16])PrecalculateTransparentFontColour(m_alpha, m_currentCol);
        &local_108 = (TransparentFontColour[16])PrecalculateTransparentFontColour(m_alpha, m_currentShadow);
        char* pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        char* pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
        if (pcVar7 != pcVar6) {
            local_b0 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&local_58->field_1168;
            local_e0 = (Array<int>*)&local_58->field_1072;
            local_d8 = (Array<int>*)&local_58->field_1096;
            local_90 = (shared_ptr<Array<unsigned char>[]>*)&local_58->field_32;
            local_88 = (Array<int>*)&local_58->field_1120;
            local_80 = (Array<int>*)&local_58->field_1144;
            local_d0 = (array<int, 256ul>*)&local_58->field_48;
            uVar20 = 4294967295;
            local_50 = 4294967295;
            local_70 = 0;
            local_f8 = pcVar6;
            do {
                uVar9 = 0;
                arg1 = stringtools::WideToCP1252(stringtools::GetUTF8NextChar16(local_f8, 0));
                if (arg1 != '\0') {
                    if (arg1 == '<') {
                        uVar20 = uVar9 & 4294967295;
                    } else {
                        if ((arg1 == '>') && ((int)uVar20 != -1)) {
                            uVar20 = (unsigned long)((int)uVar20 + 1);
                            local_148 = str.substr(uVar20, uVar9 - uVar20);
                            cVar1 = local_148 == "lt";
                            bVar2 = true;
                            if (!cVar1) {
                                cVar1 = local_148 == "gt";
                                if (!cVar1) {
                                    pPVar19 = &local_128;
                                    *pPVar19 = local_148.substr(0, 4);
                                    bVar2 = *pPVar19 == (*((value_type*)"img="));
                                    pPVar19->~basic_string();
                                    if (bVar2) {
                                        uVar20 = arg5.end();
                                        local_48 = local_48 & 18446744069414584320;
                                        if (local_70 < uVar20) {
                                            puVar8 = &arg5[local_70];
                                            local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)(*puVar8));
                                        }
                                        uVar20 = local_70;
                                        uVar9 = arg6.end();
                                        if (uVar20 < uVar9) {
                                            arg6[local_70];
                                        }
                                        local_128 = local_148.substr(4, 18446744073709551615);
                                        cVar1 = core::stringtools::general::StringTools::CheckedParseInt(0, local_128);
                                        iVar18 = 0;
                                        if ((!cVar1) || (0 < 0)) {
                                        LAB_1002c1c72:
                                            this_03 = logger::default_logger();
                                            uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                            this_03->Log(
                                                false, 8,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "oldscape/jagex3/jstring/pixfont_generic.cpp",
                                                1158, "Invalid img tag: %s", uVar10);
                                        } else {
                                            iVar4 = ((vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                                         m_inlineImages.operator->())
                                                        ->end();
                                            if (iVar4 <= iVar18)
                                                goto LAB_1002c1c72;
                                            this_02 = (Array<graphics::Pix8>*)*m_inlineImages;
                                            lVar11 = (*this_02)[(long)0];
                                            (**(void (**)(...))(pix2D.field_0 + 184))(pix2D, lVar11,
                                                                                      (int)local_48 + (int)local_38);
                                            local_38 =
                                                (unsigned long)(unsigned int)((int)local_38 + *(int*)(lVar11 + 64));
                                            local_50 = 4294967295;
                                        }
                                        local_70 = local_70 + 1;
                                    } else {
                                        UpdateState(pPVar19, &local_148);
                                    }
                                    bVar2 = false;
                                } else {
                                    arg1 = '>';
                                }
                            } else {
                                arg1 = '<';
                            }
                            uVar20 = 4294967295;
                            if (!bVar2)
                                goto LAB_1002c1a83;
                        }
                        bVar3 = SanitiseChar(arg1);
                        if ((int)uVar20 == -1) {
                            lVar11 = local_b0->end();
                            if ((lVar11 != 0) && ((int)local_50 != -1)) {
                                pcVar12 = (char*)(*local_b0)[(long)(int)((unsigned int)bVar3 | (int)local_50 << 8)];
                                local_38 = (unsigned long)(unsigned int)((int)local_38 + (int)*pcVar12);
                            }
                            uVar9 = (unsigned long)bVar3;
                            piVar13 = (int*)(*local_e0)[uVar9];
                            local_40 = *piVar13;
                            local_50 = uVar9;
                            piVar13 = (int*)(*local_d8)[uVar9];
                            local_3c = *piVar13;
                            uVar14 = arg5.end();
                            uVar9 = local_70;
                            local_48 = 0;
                            uVar17 = 0;
                            if (local_70 < uVar14) {
                                puVar15 = &arg5[local_70];
                                uVar17 = (unsigned long)*puVar15;
                            }
                            local_98 = uVar17;
                            uVar14 = arg6.end();
                            if (uVar9 < uVar14) {
                                puVar15 = &arg6[uVar9];
                                local_48 = (unsigned long)*puVar15;
                            }
                            uVar14 = arg4.end();
                            if (uVar9 < uVar14) {
                                piVar13 = &arg4[uVar9];
                                iVar18 = *piVar13;
                                auVar21 = PrecalculateTransparentFontColour(m_alpha, iVar18);
                                &local_c8 = (TransparentFontColour[16])auVar21;
                            } else {
                                iVar18 = m_currentCol;
                            }
                            uVar9 = local_50;
                            pPVar19 = local_58;
                            iVar4 = (int)local_38;
                            uVar14 = local_38;
                            if (bVar3 == 32) {
                                if (0 < m_extraSpaceWidth) {
                                    uVar5 = m_extraSpaceWidth + m_extraSpacePos;
                                    m_extraSpacePos = uVar5 & 255;
                                    uVar14 = (unsigned long)(unsigned int)(((int)uVar5 >> 8) + iVar4);
                                }
                            } else if (m_alpha < 255) {
                                if (0 < m_alpha) {
                                    if (m_currentShadow != -1) {
                                        if (*(unsigned long*)&local_58->field_24 <= local_50) {
                                            LogAssert("(index < m_Size)",
                                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                      "OSRS-OS1669-BOXR/libs/jtl/SharedArray.h",
                                                      299, "Index of %d outside range 0 to %d", local_50,
                                                      *(unsigned long*)&local_58->field_24 - 1);
                                        }
                                        local_78 = (Array<unsigned char>*)(*local_90)[local_50];
                                        piVar13 = (int*)(*local_88)[uVar9];
                                        iVar18 = *piVar13;
                                        iVar16 = (int)local_98;
                                        piVar13 = (int*)(*local_80)[uVar9];
                                        PlotLetterTrans(pPVar19, local_78, iVar18 + iVar16 + iVar4 + 1,
                                                        *piVar13 + 1 + (int)local_60 + (int)local_48, local_40,
                                                        local_3c, &local_108, pix2D);
                                    }
                                    if (*(unsigned long*)&pPVar19->field_24 <= uVar9) {
                                        LogAssert("(index < m_Size)",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/jtl/SharedArray.h",
                                                  299, "Index of %d outside range 0 to %d", uVar9,
                                                  *(unsigned long*)&pPVar19->field_24 - 1);
                                    }
                                    local_78 = (Array<unsigned char>*)(*local_90)[uVar9];
                                    piVar13 = (int*)(*local_88)[uVar9];
                                    uVar14 = local_38;
                                    iVar4 = (int)local_38;
                                    iVar16 = (int)local_98;
                                    iVar18 = *piVar13;
                                    piVar13 = (int*)(*local_80)[uVar9];
                                    PlotLetterTrans(local_58, local_78, iVar16 + iVar4 + iVar18,
                                                    (int)local_48 + (int)local_60 + *piVar13, local_40, local_3c,
                                                    &local_c8, pix2D);
                                }
                            } else {
                                local_78 = (Array<unsigned char>*)(((uint64_t)local_78._4_4_ << 32) | (uint32_t)iVar18);
                                if (m_currentShadow != -1) {
                                    if (*(unsigned long*)&local_58->field_24 <= local_50) {
                                        LogAssert("(index < m_Size)",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/jtl/SharedArray.h",
                                                  299, "Index of %d outside range 0 to %d", local_50,
                                                  *(unsigned long*)&local_58->field_24 - 1);
                                    }
                                    local_a8 = (Array<unsigned char>*)(*local_90)[local_50];
                                    piVar13 = (int*)(*local_88)[uVar9];
                                    iVar18 = *piVar13;
                                    iVar16 = (int)local_98;
                                    piVar13 = (int*)(*local_80)[uVar9];
                                    PlotLetter(pPVar19, local_a8, iVar18 + iVar16 + iVar4 + 1,
                                               *piVar13 + 1 + (int)local_60 + (int)local_48, local_40, local_3c,
                                               m_currentShadow, pix2D);
                                }
                                if (*(unsigned long*)&pPVar19->field_24 <= uVar9) {
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", uVar9,
                                              *(unsigned long*)&pPVar19->field_24 - 1);
                                }
                                local_a8 = (Array<unsigned char>*)(*local_90)[uVar9];
                                piVar13 = (int*)(*local_88)[uVar9];
                                uVar14 = local_38;
                                iVar4 = (int)local_38;
                                iVar16 = (int)local_98;
                                iVar18 = *piVar13;
                                piVar13 = (int*)(*local_80)[uVar9];
                                PlotLetter(local_58, local_a8, iVar16 + iVar4 + iVar18,
                                           (int)local_48 + (int)local_60 + *piVar13, local_40, local_3c, (int)local_78,
                                           pix2D);
                            }
                            piVar13 = (int*)(*local_d0)[uVar9];
                            iVar18 = *piVar13;
                            if (m_strikeout != -1) {
                                (**(void (**)(...))(pix2D.field_0 + 56))(
                                    pix2D, uVar14 & 4294967295, (int)((double)local_58->field_0 * 0.7) + (int)local_60);
                            }
                            if (m_underline != -1) {
                                (**(void (**)(...))(pix2D.field_0 + 56))(pix2D, uVar14 & 4294967295,
                                                                         local_58->field_0 + (int)local_60);
                            }
                            local_70 = local_70 + 1;
                            local_38 = (unsigned long)(unsigned int)(iVar18 + (int)uVar14);
                        }
                    }
                }
            LAB_1002c1a83:
            } while (0 < (unsigned long)((long)pcVar7 - (long)pcVar6));
        }
    }

    // 0x1002c21f0
    void PixfontGeneric::CentreStringColourPattern(const eastl::string& str, int arg2, int arg3, int arg4, int arg5,
                                                   const eastl::vector<int>& arg6, graphics::Pix2D& pix2D) {
        int iVar1;
        unsigned long arg2_00;
        vector<int> local_88;
        ReturnValue local_68;
        Array<int> local_50;

        long lVar2 = str.size();
        if (lVar2 != 0) {
            ResetState((PixfontGeneric*)str, arg4, arg5);
            local_50 = Array<int>();
            lVar2 = arg6.size();
            if (lVar2 != 0) {
                local_88 = eastl::vector<int>(arg6);
                arg2_00 = str.size();
                ColourPatternToPerCharacterArray(&local_68, &local_88, arg2_00);
                local_50 = local_68;
            }
            iVar1 = StringWid(str);
            DrawStringInnerCustomOffsetsAndColours(str, arg2 - iVar1 / 2, arg3, local_50, m_empty, m_empty, pix2D);
        }
    }

    // 0x1002c2320
    void PixfontGeneric::CentreStringWave(const eastl::string& str, int arg2, int arg3, int arg4, int arg5, int arg6,
                                          const eastl::vector<int>& arg7, graphics::Pix2D& pix2D) {
        int iVar1;
        unsigned long uVar3;
        int* piVar4;
        unsigned long uVar5;
        double dVar7;
        vector<int> local_98;
        Array<int> local_78;
        double local_60;
        ReturnValue local_50;

        PixfontGeneric* pPVar6 = (PixfontGeneric*)str;
        long lVar2 = str.size();
        if (lVar2 != 0) {
            ResetState(pPVar6, arg4, arg5);
            local_78 = Array<int>();
            lVar2 = arg7.size();
            if (lVar2 != 0) {
                local_98 = eastl::vector<int>(arg7);
                uVar3 = str.size();
                ColourPatternToPerCharacterArray(&local_50, &local_98, uVar3);
                local_78 = local_50;
            }
            uVar3 = str.size();
            local_50 = Array<int>(uVar3);
            lVar2 = str.size();
            if (lVar2 != 0) {
                local_60 = (double)arg6 * 0.2;
                uVar3 = 0;
                do {
                    piVar4 = &local_50[uVar3];
                    dVar7 = (double)_sin((double)uVar3 * 0.5 + local_60);
                    *piVar4 = (int)(dVar7 * 5.0);
                    uVar3 = (unsigned long)((int)uVar3 + 1);
                    uVar5 = str.size();
                } while (uVar3 < uVar5);
            }
            pPVar6 = this;
            iVar1 = StringWid(str);
            DrawStringInnerCustomOffsetsAndColours(pPVar6, str, arg2 - iVar1 / 2, arg3, &local_78,
                                                   (Array<int>*)&m_empty, &local_50, pix2D);
        }
    }

    // 0x1002c2500
    void PixfontGeneric::CentreStringWave2(const eastl::string& str, int arg2, int arg3, int arg4, int arg5, int arg6,
                                           const eastl::vector<int>& arg7, graphics::Pix2D& pix2D) {
        int iVar1;
        unsigned long uVar3;
        int* piVar4;
        unsigned long uVar5;
        double dVar7;
        vector<int> local_b8;
        Array<int> local_98;
        Array<int> local_80;
        double local_68;
        ReturnValue local_58;
        double local_40;

        PixfontGeneric* pPVar6 = (PixfontGeneric*)str;
        long lVar2 = str.size();
        if (lVar2 != 0) {
            ResetState(pPVar6, arg4, arg5);
            local_98 = Array<int>();
            lVar2 = arg7.size();
            if (lVar2 != 0) {
                local_b8 = eastl::vector<int>(arg7);
                uVar3 = str.size();
                ColourPatternToPerCharacterArray(&local_58, &local_b8, uVar3);
                local_98 = local_58;
            }
            uVar3 = str.size();
            local_58 = Array<int>(uVar3);
            uVar3 = str.size();
            local_80 = Array<int>(uVar3);
            lVar2 = str.size();
            if (lVar2 != 0) {
                local_40 = (double)arg6 * 0.2;
                uVar3 = 0;
                do {
                    piVar4 = &local_58[uVar3];
                    local_68 = (double)uVar3;
                    dVar7 = (double)_sin(local_68 * 0.2 + local_40);
                    *piVar4 = (int)(dVar7 * 5.0);
                    piVar4 = &local_80[uVar3];
                    dVar7 = (double)_sin(local_68 * 0.3333333333333333 + local_40);
                    *piVar4 = (int)(dVar7 * 5.0);
                    uVar3 = (unsigned long)((int)uVar3 + 1);
                    uVar5 = str.size();
                } while (uVar3 < uVar5);
            }
            pPVar6 = this;
            iVar1 = StringWid(str);
            DrawStringInnerCustomOffsetsAndColours(pPVar6, str, arg2 - iVar1 / 2, arg3, &local_98, &local_58, &local_80,
                                                   pix2D);
        }
    }

    // 0x1002c2760
    void PixfontGeneric::CentreStringWave3(const eastl::string& str, int arg2, int arg3, int arg4, int arg5, int arg6,
                                           int arg7, const eastl::vector<int>& arg8, graphics::Pix2D& pix2D) {
        int iVar1;
        unsigned long uVar3;
        int* piVar4;
        unsigned long uVar5;
        double dVar7;
        vector<int> local_a0;
        Array<int> local_80;
        double local_68;
        ReturnValue local_50;

        PixfontGeneric* pPVar6 = (PixfontGeneric*)str;
        long lVar2 = str.size();
        if (lVar2 != 0) {
            ResetState(pPVar6, arg4, arg5);
            local_80 = Array<int>();
            lVar2 = arg8.size();
            if (lVar2 != 0) {
                local_a0 = eastl::vector<int>(arg8);
                uVar3 = str.size();
                ColourPatternToPerCharacterArray(&local_50, &local_a0, uVar3);
                local_80 = local_50;
            }
            uVar3 = str.size();
            local_50 = Array<int>(uVar3);
            lVar2 = str.size();
            if (lVar2 != 0) {
                dVar7 = (double)arg7 * -0.125 + 7.0;
                local_68 = 0.0;
                if (0.0 <= dVar7) {
                    local_68 = dVar7;
                }
                uVar3 = 0;
                do {
                    piVar4 = &local_50[uVar3];
                    dVar7 = (double)_sin((double)uVar3 * 0.6666666666666666 + (double)arg6);
                    *piVar4 = (int)(dVar7 * local_68);
                    uVar3 = (unsigned long)((int)uVar3 + 1);
                    uVar5 = str.size();
                } while (uVar3 < uVar5);
            }
            pPVar6 = this;
            iVar1 = StringWid(str);
            DrawStringInnerCustomOffsetsAndColours(pPVar6, str, arg2 - iVar1 / 2, arg3, &local_80,
                                                   (Array<int>*)&m_empty, &local_50, pix2D);
        }
    }

    // 0x1002c2970
    void PixfontGeneric::DrawstringAntiMacro(const eastl::string& str, int arg2, int arg3, int arg4, int arg5, int arg6,
                                             graphics::Pix2D& pix2D) {
        unsigned int uVar1;
        unsigned int uVar2;
        unsigned long uVar4;
        int* piVar5;
        unsigned long uVar6;
        int iVar7;
        Array<int> local_58;

        long lVar3 = str.size();
        if (lVar3 != 0) {
            ResetState((PixfontGeneric*)str, arg4, arg5);
            new (&m_rand) std::__cxx_atomic_base_impl(arg6);
            uVar1 = m_rand.Rand();
            m_alpha = uVar1 & 31 | 192;
            uVar4 = str.size();
            local_58 = Array<int>(uVar4);
            lVar3 = str.size();
            if (lVar3 != 0) {
                uVar4 = 0;
                uVar1 = 1;
                iVar7 = 0;
                do {
                    piVar5 = &local_58[uVar4];
                    *piVar5 = iVar7;
                    uVar2 = m_rand.Rand();
                    iVar7 = iVar7 + (unsigned int)((uVar2 & 3) == 0);
                    uVar4 = (unsigned long)uVar1;
                    uVar6 = str.size();
                    uVar1 = uVar1 + 1;
                } while (uVar4 < uVar6);
            }
            DrawStringInnerCustomOffsetsAndColours(str, arg2, arg3, m_empty, local_58, m_empty, pix2D);
        }
    }

    // 0x1002c2aa0
    void PrecalculateTransparentFontColour(int arg1, int arg2) {
        uint8_t auVar1[16];

        Callstack local_28;
        if ((arg1 - 1U < 255) && (arg2 != -1)) {
            local_28._4_4_ = 255 - arg1;
            local_28._8_4_ = arg1 << 24 | arg2;
            local_28.m_stackFrames = arg1;
            local_28._12_4_ = graphics::ComputeCompositeRGB(arg2, arg1);
        }
        auVar1._4_4_ = local_28._4_4_;
        auVar1._0_4_ = local_28.m_stackFrames;
        auVar1._8_4_ = local_28._8_4_;
        auVar1._12_4_ = local_28._12_4_;
        return auVar1;
    }

    // 0x1002c2b00
    void PixfontGeneric::UpdateState(eastl::string& str) {
        Logger* pLVar3;
        uint64_t uVar4;

        auto local_38 = str.substr(0, 4);
        bool bVar1 = local_38 == (*((value_type*)"col="));
        if (bVar1) {
            local_38 = str.substr(4, 18446744073709551615);
            if (!(core::stringtools::general::StringTools::CheckedParseInt(m_currentCol, local_38, 16, true))) {
                pLVar3 = logger::default_logger();
                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pLVar3->Log(false, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                            "jstring/pixfont_generic.cpp",
                            1558, "Error parsing tag: %s", uVar4);
            }
        } else {
            if (str == "/col") {
                m_currentCol = m_defaultCol;
                return;
            }
            local_38 = str.substr(0, 4);
            bVar1 = local_38 == (*((value_type*)"str="));
            if (bVar1) {
                local_38 = str.substr(4, 18446744073709551615);
                if (!(core::stringtools::general::StringTools::CheckedParseInt(m_strikeout, local_38, 16, true))) {
                    pLVar3 = logger::default_logger();
                    uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    pLVar3->Log(false, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                                "jstring/pixfont_generic.cpp",
                                1571, "Error parsing tag: %s", uVar4);
                }
            } else {
                if (str == "str") {
                    m_strikeout = 8388608;
                    return;
                }
                if (str == "/str") {
                    m_strikeout = 4294967295;
                    return;
                }
                local_38 = str.substr(0, 2);
                bVar1 = local_38 == (*((value_type*)"u="));
                if (bVar1) {
                    local_38 = str.substr(2, 18446744073709551615);
                    if (!(core::stringtools::general::StringTools::CheckedParseInt(m_underline, local_38, 16, true))) {
                        pLVar3 = logger::default_logger();
                        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pLVar3->Log(false, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "jagex3/jstring/pixfont_generic.cpp",
                                    1588, "Error parsing tag: %s", uVar4);
                    }
                } else {
                    if (str == "u") {
                        m_underline = 0;
                        return;
                    }
                    if (str == "/u") {
                        m_underline = 4294967295;
                        return;
                    }
                    local_38 = str.substr(0, 5);
                    bVar1 = local_38 == (*((value_type*)"shad="));
                    if (!bVar1) {
                        if (str == "shad") {
                            m_currentShadow = 0;
                            return;
                        }
                        if (str == "/shad") {
                            m_currentShadow = m_defaultShadow;
                            return;
                        }
                        if (!(str == "br")) {
                            return;
                        }
                        ResetState((PixfontGeneric*)str, m_defaultCol, m_defaultShadow);
                        return;
                    }
                    local_38 = str.substr(5, 18446744073709551615);
                    if (!(core::stringtools::general::StringTools::CheckedParseInt(m_currentShadow, local_38, 16,
                                                                                   true))) {
                        pLVar3 = logger::default_logger();
                        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pLVar3->Log(false, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "jagex3/jstring/pixfont_generic.cpp",
                                    1605, "Error parsing tag: %s", uVar4);
                    }
                }
            }
        }
    }

    // 0x1002c2f30
    void PixfontGeneric::PlotLetterUpwards(const Array<unsigned char>& arg1, int arg2, int arg3, int arg4, int arg5,
                                           int arg6, graphics::Pix2D& pix2D) {
        int iVar4 = pix2D.field_8;
        int iVar5 = pix2D.field_16;
        int arg5_00 = iVar4 * arg3 + arg2;
        int arg4_00 = arg5 - 1;
        int iVar3 = iVar5 - arg3;
        if (iVar3 == 0 || iVar5 < arg3) {
            iVar5 = arg5;
        } else {
            arg4_00 = arg4_00 - iVar3;
            arg5_00 = arg5_00 + iVar3 * iVar4;
            arg3 = iVar5;
            iVar5 = arg5 - iVar3;
        }
        iVar4 = iVar4 - arg4;
        iVar3 = pix2D.field_24;
        int iVar2 = pix2D.field_20 - (arg3 + iVar5);
        if (arg3 + iVar5 <= pix2D.field_20) {
            iVar2 = 0;
        }
        int iVar1 = iVar3 - arg2;
        if (!(iVar1 == 0 || iVar3 < arg2)) {
            arg4 = arg4 - iVar1;
            arg4_00 = arg4_00 + iVar1 * arg5;
            arg5_00 = arg5_00 + iVar1;
            iVar4 = iVar4 + iVar1;
            arg2 = iVar3;
        }
        iVar1 = (arg2 + arg4) - pix2D.field_28;
        iVar3 = 0;
        if (iVar1 != 0 && pix2D.field_28 <= arg2 + arg4) {
            iVar3 = iVar1;
        }
        iVar1 = arg4 - iVar3;
        if ((iVar1 != 0 && iVar3 <= arg4) && (0 < iVar2 + iVar5)) {
            PlotLetterUpwards((PixfontGeneric*)(unsigned long)(unsigned int)(iVar3 + iVar4),
                              (SharedArray<unsigned int>*)&pix2D.field_32, arg1, arg6, arg4_00, arg5_00, arg5, iVar1,
                              iVar2 + iVar5, iVar3 + iVar4, ~(iVar1 * arg5));
        }
    }

    // 0x1002c2ff0
    void PixfontGeneric::PlotLetterUpwardsTrans(const Array<unsigned char>& arg1, int arg2, int arg3, int arg4,
                                                int arg5,
                                                const PixfontGeneric::TransparentFontColour& transparentFontColour,
                                                graphics::Pix2D& pix2D) {
        int iVar1;
        int arg3_00;
        int iVar2;
        int iVar3;
        unsigned int arg7;
        int arg4_00;
        int iVar4;
        int iVar5;

        if (*(unsigned int*)transparentFontColour < 255) {
            iVar4 = pix2D.field_8;
            iVar5 = pix2D.field_16;
            arg4_00 = iVar4 * arg3 + arg2;
            arg3_00 = arg5 - 1;
            iVar1 = iVar5 - arg3;
            if (iVar1 == 0 || iVar5 < arg3) {
                iVar5 = arg5;
            } else {
                arg3_00 = arg3_00 - iVar1;
                arg4_00 = arg4_00 + iVar1 * iVar4;
                arg3 = iVar5;
                iVar5 = arg5 - iVar1;
            }
            iVar4 = iVar4 - arg4;
            iVar1 = pix2D.field_24;
            iVar3 = pix2D.field_20 - (arg3 + iVar5);
            if (arg3 + iVar5 <= pix2D.field_20) {
                iVar3 = 0;
            }
            iVar2 = iVar1 - arg2;
            if (!(iVar2 == 0 || iVar1 < arg2)) {
                arg4 = arg4 - iVar2;
                arg3_00 = arg3_00 + iVar2 * arg5;
                arg4_00 = arg4_00 + iVar2;
                iVar4 = iVar4 + iVar2;
                arg2 = iVar1;
            }
            iVar2 = (arg2 + arg4) - pix2D.field_28;
            iVar1 = 0;
            if (iVar2 != 0 && pix2D.field_28 <= arg2 + arg4) {
                iVar1 = iVar2;
            }
            iVar2 = arg4 - iVar1;
            if (iVar2 != 0 && iVar1 <= arg4) {
                arg7 = iVar3 + iVar5;
                if (0 < (int)arg7) {
                    PlotLetterUpwardsTransInner(
                        (PixfontGeneric*)(unsigned long)arg7, (SharedArray<unsigned int>*)&pix2D.field_32, arg1,
                        arg3_00, arg4_00, arg5, iVar2, arg7, iVar1 + iVar4, ~(iVar2 * arg5), transparentFontColour);
                }
            }
        } else {
            PlotLetterUpwards(arg1, arg2, arg3, arg4, arg5, *(int*)(transparentFontColour + 8), pix2D);
        }
    }

    // 0x1002c30f0
    void PixfontGeneric::PlotLetterTrans(const Array<unsigned char>& arg1, int arg2, int arg3, int arg4, int arg5,
                                         const PixfontGeneric::TransparentFontColour& transparentFontColour,
                                         graphics::Pix2D& pix2D) {
        int arg3_00;
        int iVar1;
        int iVar2;
        int iVar3;
        int arg4_00;
        int iVar4;

        if (*(unsigned int*)transparentFontColour < 255) {
            iVar4 = pix2D.field_8;
            iVar2 = pix2D.field_16;
            arg4_00 = iVar4 * arg3 + arg2;
            iVar1 = iVar2 - arg3;
            if (iVar1 == 0 || iVar2 < arg3) {
                arg3_00 = 0;
            } else {
                arg5 = arg5 - iVar1;
                arg3_00 = iVar1 * arg4;
                arg4_00 = arg4_00 + iVar1 * iVar4;
                arg3 = iVar2;
            }
            iVar4 = iVar4 - arg4;
            iVar2 = pix2D.field_24;
            iVar1 = pix2D.field_20 - (arg3 + arg5);
            if (arg3 + arg5 <= pix2D.field_20) {
                iVar1 = 0;
            }
            iVar3 = iVar2 - arg2;
            if (iVar3 == 0 || iVar2 < arg2) {
                iVar3 = 0;
            } else {
                arg4 = arg4 - iVar3;
                arg3_00 = arg3_00 + iVar3;
                arg4_00 = arg4_00 + iVar3;
                iVar4 = iVar4 + iVar3;
                arg2 = iVar2;
            }
            iVar2 = (arg2 + arg4) - pix2D.field_28;
            if (iVar2 == 0 || arg2 + arg4 < pix2D.field_28) {
                iVar2 = 0;
            }
            if ((arg4 - iVar2 != 0 && iVar2 <= arg4) && (0 < iVar1 + arg5)) {
                PlotLetterTransInner((PixfontGeneric*)(unsigned long)(unsigned int)(iVar3 + iVar2),
                                     (SharedArray<unsigned int>*)&pix2D.field_32, arg1, arg3_00, arg4_00, arg4 - iVar2,
                                     iVar1 + arg5, iVar4 + iVar2, iVar3 + iVar2, transparentFontColour);
            }
        } else {
            PlotLetter(arg1, arg2, arg3, arg4, arg5, *(int*)(transparentFontColour + 8), pix2D);
        }
    }

    // 0x1002c31d0
    void PixfontGeneric::PlotLetter(SharedArray<unsigned int>& sharedArray, const Array<unsigned char>& arg2, int arg3,
                                    int arg4, int arg5, int arg6, int arg7, int arg8, int arg9) {
        unsigned int uVar1;
        char* pcVar2;
        unsigned int* puVar3;
        int iVar4;
        unsigned int uVar5;
        long lVar6;
        unsigned int uVar7;
        int iVar8;
        int iVar9;
        long lVar10;
        unsigned long arg1;
        long lVar11;
        unsigned long arg1_00;
        int local_44;

        if (0 < arg7) {
            iVar4 = -(arg6 >> 2);
            uVar7 = arg6 & 3;
            iVar8 = -uVar7;
            uVar1 = arg3 | 4278190080;
            local_44 = -arg7;
            if (iVar4 < 0) {
                iVar4 = -1;
            }
            if (iVar8 < 0) {
                iVar8 = -1;
            }
            do {
                if (3 < arg6) {
                    lVar10 = (long)arg4;
                    lVar11 = (long)arg5;
                    lVar6 = 0;
                    iVar9 = (arg6 >> 2) + iVar4 + 1;
                    do {
                        pcVar2 = &arg2[lVar10 + lVar6];
                        if (*pcVar2 != '\0') {
                            puVar3 = &sharedArray[lVar11 + lVar6];
                            *puVar3 = uVar1;
                        }
                        pcVar2 = &arg2[lVar10 + lVar6 + 1];
                        if (*pcVar2 != '\0') {
                            puVar3 = (unsigned int*)sharedArray[lVar11 + lVar6 + 1];
                            *puVar3 = uVar1;
                        }
                        pcVar2 = &arg2[lVar10 + lVar6 + 2];
                        if (*pcVar2 != '\0') {
                            puVar3 = (unsigned int*)sharedArray[lVar11 + lVar6 + 2];
                            *puVar3 = uVar1;
                        }
                        pcVar2 = &arg2[lVar10 + lVar6 + 3];
                        if (*pcVar2 != '\0') {
                            puVar3 = (unsigned int*)sharedArray[lVar11 + lVar6 + 3];
                            *puVar3 = uVar1;
                        }
                        lVar6 = lVar6 + 4;
                        iVar9 = iVar9 - 1;
                    } while (iVar9 != 0);
                    arg5 = arg5 + (int)lVar6;
                    arg4 = arg4 + (int)lVar6;
                }
                if (uVar7 != 0) {
                    arg1 = (unsigned long)arg4;
                    arg1_00 = (unsigned long)arg5;
                    uVar5 = 0;
                    do {
                        pcVar2 = &arg2[arg1];
                        if (*pcVar2 != '\0') {
                            puVar3 = &sharedArray[arg1_00];
                            *puVar3 = uVar1;
                        }
                        arg1_00 = arg1_00 + 1;
                        uVar5 = uVar5 - 1;
                        arg1 = arg1 + 1;
                    } while (~(iVar8 + uVar7) != uVar5);
                    arg5 = arg5 - uVar5;
                    arg4 = arg4 - uVar5;
                }
                arg4 = arg4 + arg9;
                arg5 = arg5 + arg8;
                local_44 = local_44 + 1;
            } while (local_44 != 0);
        }
    }

    // 0x1002c33c0
    void PixfontGeneric::PlotLetterTransInner(SharedArray<unsigned int>& sharedArray, const Array<unsigned char>& arg2,
                                              int arg3, int arg4, int arg5, int arg6, int arg7, int arg8,
                                              const PixfontGeneric::TransparentFontColour& transparentFontColour) {
        int iVar1;
        uint32_t uVar2;
        uint32_t* puVar3;
        char* pcVar4;
        unsigned int* puVar5;
        int iVar6;
        unsigned long arg1;
        unsigned long arg1_00;

        if (0 < arg6) {
            iVar1 = -arg6;
            do {
                if (0 < arg5) {
                    arg1 = (unsigned long)arg3;
                    arg1_00 = (unsigned long)arg4;
                    iVar6 = 0;
                    do {
                        pcVar4 = &arg2[arg1];
                        if (*pcVar4 != '\0') {
                            puVar5 = &sharedArray[arg1_00];
                            if (*puVar5 == 0) {
                                uVar2 = *(uint32_t*)(transparentFontColour + 8);
                            } else {
                                uVar2 = graphics::BlendPixel(*(unsigned int*)(transparentFontColour + 12),
                                                             *(unsigned int*)transparentFontColour,
                                                             *(unsigned int*)(transparentFontColour + 4), *puVar5);
                            }
                            puVar3 = &sharedArray[arg1_00];
                            *puVar3 = uVar2;
                        }
                        arg1_00 = arg1_00 + 1;
                        iVar6 = iVar6 - 1;
                        arg1 = arg1 + 1;
                    } while (-arg5 != iVar6);
                    arg4 = arg4 - iVar6;
                    arg3 = arg3 - iVar6;
                }
                arg3 = arg3 + arg8;
                arg4 = arg4 + arg7;
                iVar1 = iVar1 + 1;
            } while (iVar1 != 0);
        }
    }

    // 0x1002c34b0
    void PixfontGeneric::PlotLetterUpwards(SharedArray<unsigned int>& sharedArray, const Array<unsigned char>& arg2,
                                           int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9,
                                           int arg10) {
        unsigned int uVar1;
        long lVar2;
        char* pcVar3;
        unsigned int* puVar4;
        int iVar5;
        unsigned int uVar6;
        int iVar7;
        unsigned int uVar8;
        int iVar9;
        int iVar10;
        int iVar11;
        unsigned long arg1;
        long lVar12;
        unsigned long arg1_00;

        if (0 < arg8) {
            uVar1 = arg3 | 4278190080;
            iVar5 = -(arg7 >> 2);
            uVar6 = arg7 & 3;
            iVar10 = -uVar6;
            iVar9 = -arg8;
            if (iVar5 < 0) {
                iVar5 = -1;
            }
            if (iVar10 < 0) {
                iVar10 = -1;
            }
            do {
                arg1 = (unsigned long)(unsigned int)arg4;
                if (3 < arg7) {
                    lVar2 = (long)arg5;
                    lVar12 = 0;
                    iVar11 = (arg7 >> 2) + 1 + iVar5;
                    do {
                        iVar7 = (int)arg1;
                        pcVar3 = &arg2[(long)iVar7];
                        if (*pcVar3 != '\0') {
                            puVar4 = &sharedArray[lVar2 + lVar12];
                            *puVar4 = uVar1;
                        }
                        pcVar3 = &arg2[(long)(iVar7 + arg6)];
                        if (*pcVar3 != '\0') {
                            puVar4 = (unsigned int*)sharedArray[lVar2 + lVar12 + 1];
                            *puVar4 = uVar1;
                        }
                        arg4 = iVar7 + arg6 + arg6 * 3;
                        pcVar3 = &arg2[(long)(arg6 * 2 + iVar7)];
                        if (*pcVar3 != '\0') {
                            puVar4 = (unsigned int*)sharedArray[lVar2 + lVar12 + 2];
                            *puVar4 = uVar1;
                        }
                        pcVar3 = &arg2[(long)(iVar7 + arg6 * 3)];
                        if (*pcVar3 != '\0') {
                            puVar4 = (unsigned int*)sharedArray[lVar2 + lVar12 + 3];
                            *puVar4 = uVar1;
                        }
                        arg1 = (unsigned long)(unsigned int)arg4;
                        lVar12 = lVar12 + 4;
                        iVar11 = iVar11 - 1;
                    } while (iVar11 != 0);
                    arg5 = arg5 + (int)lVar12;
                }
                if (uVar6 != 0) {
                    arg1 = (unsigned long)arg4;
                    arg1_00 = (unsigned long)arg5;
                    uVar8 = 0;
                    do {
                        pcVar3 = &arg2[arg1];
                        if (*pcVar3 != '\0') {
                            puVar4 = &sharedArray[arg1_00];
                            *puVar4 = uVar1;
                        }
                        arg1_00 = arg1_00 + 1;
                        arg1 = arg1 + (long)arg6;
                        uVar8 = uVar8 - 1;
                    } while (~(iVar10 + uVar6) != uVar8);
                    arg5 = arg5 - uVar8;
                }
                arg4 = (int)arg1 + arg10;
                arg5 = arg5 + arg9;
                iVar9 = iVar9 + 1;
            } while (iVar9 != 0);
        }
    }

    // 0x1002c36e0
    void PixfontGeneric::PlotLetterUpwardsTransInner(
        SharedArray<unsigned int>& sharedArray, const Array<unsigned char>& arg2, int arg3, int arg4, int arg5,
        int arg6, int arg7, int arg8, int arg9, const PixfontGeneric::TransparentFontColour& transparentFontColour) {
        uint32_t uVar1;
        int iVar2;
        char* pcVar3;
        unsigned int* puVar4;
        uint32_t* puVar5;
        unsigned long arg1;
        unsigned long arg1_00;
        int iVar6;

        if (0 < arg7) {
            iVar2 = -arg7;
            do {
                arg1 = (unsigned long)(unsigned int)arg3;
                if (0 < arg6) {
                    arg1 = (unsigned long)arg3;
                    iVar6 = arg6;
                    do {
                        pcVar3 = &arg2[arg1];
                        if (*pcVar3 == '\0') {
                            arg4 = arg4 + 1;
                        } else {
                            arg1_00 = (unsigned long)arg4;
                            puVar4 = &sharedArray[arg1_00];
                            if (*puVar4 == 0) {
                                uVar1 = *(uint32_t*)(transparentFontColour + 8);
                                arg4 = arg4 + 1;
                                puVar5 = &sharedArray[arg1_00];
                                *puVar5 = uVar1;
                            } else {
                                graphics::BlendPixel(*(unsigned int*)(transparentFontColour + 12),
                                                     *(unsigned int*)transparentFontColour,
                                                     *(unsigned int*)(transparentFontColour + 4), *puVar4);
                            }
                        }
                        arg1 = arg1 + (long)arg5;
                        iVar6 = iVar6 - 1;
                    } while (iVar6 != 0);
                }
                arg3 = (int)arg1 + arg9;
                arg4 = arg4 + arg8;
                iVar2 = iVar2 + 1;
            } while (iVar2 != 0);
        }
    }

    // 0x1002c37c0
    void PixfontGeneric::PlotLetterScanline(const Array<unsigned char>& arg1, int arg2, int arg3, int arg4, int arg5,
                                            int arg6, int arg7, int arg8, int arg9, const Array<int>& arg10,
                                            const Array<int>& arg11, graphics::Pix2D& pix2D) {
        PlotLetterScanline((PixfontGeneric*)(unsigned long)(unsigned int)pix2D.field_8,
                           (SharedArray<unsigned int>*)&pix2D.field_32, arg1, arg2, arg3, arg4, arg5, pix2D.field_8,
                           arg6, arg7, arg8, arg9, arg10, arg11);
    }

    // 0x1002c3830
    void PixfontGeneric::PlotLetterScanline(SharedArray<unsigned int>& sharedArray, const Array<unsigned char>& arg2,
                                            int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9,
                                            int arg10, int arg11, const Array<int>& arg12, const Array<int>& arg13) {
        int iVar1;
        int iVar3;
        long lVar4;
        int* piVar5;
        char* pcVar6;
        unsigned int* puVar7;
        unsigned int uVar9;
        int iVar10;
        unsigned long arg1;
        unsigned int uVar11;
        long lVar12;
        long lVar13;
        unsigned long arg1_00;
        int local_34;

        unsigned int uVar2 = arg4 >> 31 & -arg4;
        int iVar8 = arg11 - arg4;
        if (arg6 + arg4 <= arg11) {
            iVar8 = arg6;
        }
        if ((int)uVar2 < iVar8) {
            uVar11 = arg3 >> 31 & -arg3;
            arg1 = (unsigned long)(arg4 + uVar2);
            local_34 = (arg10 + arg4 + uVar2) * arg7 + uVar11 + arg3 + arg9;
            lVar4 = (long)(int)uVar2;
            lVar12 = arg5 * lVar4;
            do {
                piVar5 = &arg12[arg1];
                iVar1 = *piVar5;
                piVar5 = &arg13[arg1];
                uVar9 = iVar1 - arg3;
                uVar2 = uVar11;
                if (uVar9 != 0 && arg3 <= iVar1) {
                    uVar2 = uVar9;
                }
                iVar3 = (*piVar5 + iVar1) - arg3;
                if (arg5 + arg3 <= *piVar5 + iVar1) {
                    iVar3 = arg5;
                }
                if ((int)uVar2 < iVar3) {
                    iVar10 = uVar9 - uVar11;
                    if (iVar1 <= arg3) {
                        iVar10 = 0;
                    }
                    lVar13 = (long)(int)uVar2;
                    arg1_00 = (unsigned long)(iVar10 + local_34);
                    do {
                        pcVar6 = (char*)arg2[lVar12 + lVar13];
                        if (*pcVar6 != '\0') {
                            puVar7 = &sharedArray[arg1_00];
                            *puVar7 = arg8 | 4278190080;
                        }
                        arg1_00 = arg1_00 + 1;
                        lVar13 = lVar13 + 1;
                    } while (lVar13 < iVar3);
                }
                arg1 = arg1 + 1;
                local_34 = local_34 + arg7;
                lVar4 = lVar4 + 1;
                lVar12 = lVar12 + arg5;
            } while (lVar4 < iVar8);
        }
    }

    // 0x1002c39e0
    int PixfontGeneric::KernPair(std::array<Array<signed char>, 256ul>& arg1,
                                 std::array<Array<signed char>, 256ul>& arg2, std::array<int, 256ul>& arg3,
                                 std::array<int, 256ul>& arg4, std::array<int, 256ul>& arg5, int arg6, int arg7) {
        bool cVar1;
        Array<signed char>* this_00;
        char* pcVar5;
        Array<signed char>* this_01;
        unsigned long arg1_01;

        unsigned long uVar8 = (unsigned long)(int)arg5;
        int* piVar4 = &arg2[uVar8];
        int iVar2 = *piVar4;
        piVar4 = &arg4[uVar8];
        int iVar7 = *piVar4;
        piVar4 = &arg2[(unsigned long)arg6];
        int iVar3 = *piVar4;
        piVar4 = &arg4[(unsigned long)arg6];
        int iVar9 = iVar2;
        if (iVar2 < iVar3) {
            iVar9 = iVar3;
        }
        int iVar6 = *piVar4 + iVar3;
        if (iVar7 + iVar2 <= *piVar4 + iVar3) {
            iVar6 = iVar7 + iVar2;
        }
        piVar4 = &arg3[uVar8];
        iVar7 = *piVar4;
        piVar4 = &arg3[(unsigned long)arg6];
        if (*piVar4 < iVar7) {
            iVar7 = *piVar4;
        }
        if (iVar9 < iVar6) {
            this_00 = &arg1[uVar8];
            iVar6 = iVar6 - iVar9;
            uVar8 = (long)(iVar9 - iVar3);
            arg1_01 = (long)(iVar9 - iVar2);
            do {
                pcVar5 = (char*)(*this_00)[arg1_01];
                cVar1 = *pcVar5;
                this_01 = (Array<signed char>*)(*this)[(unsigned long)arg6];
                pcVar5 = (char*)(*this_01)[uVar8];
                iVar2 = (int)*pcVar5 + (int)cVar1;
                if (iVar7 <= (int)*pcVar5 + (int)cVar1) {
                    iVar2 = iVar7;
                }
                iVar7 = iVar2;
                iVar6 = iVar6 - 1;
                uVar8 = uVar8 + 1;
                arg1_01 = arg1_01 + 1;
            } while (iVar6 != 0);
        }
        return -iVar7;
    }

} // namespace jag::oldscape::jstring

namespace jag {
    // 0x100efa0d0
    const char* LoadingScreenScript::BACKGROUND_LOADED_TRIGGER = "BgLoaded";

    // 0x100efa0d8
    const char* LoadingScreenScript::ERROR_TRIGGER = "Error";

    // 0x1002b5b80
    void LoadingScreenScript::SetLoadingText(const eastl::string& str) {
        field_88 = str;
    }

} // namespace jag
