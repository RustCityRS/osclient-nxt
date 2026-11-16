// libs/oldscape/jagex3/jstring/pixfont_generic.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "pixfont_generic.h"
#include "libs/oldscape/jagex3/javapal/loading/LoadingScreen.h"

namespace jag::oldscape::jstring {
    // 0x100f37c20, 4 bytes, __data
    PixfontGeneric::m_alpha = 255;

    // 0x100f37c24, 4 bytes, __data
    PixfontGeneric::m_currentShadow = -1;

    // 0x100f37c28, 4 bytes, __data
    PixfontGeneric::m_strikeout = -1;

    // 0x100f37c2c, 4 bytes, __data
    PixfontGeneric::m_underline = -1;

    // 0x100f37c30, 4 bytes, __data
    PixfontGeneric::m_defaultShadow = -1;

    // 0x1016c5e90, 16 bytes, __common; set at startup by ___cxx_global_var_init.168
    shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> PixfontGeneric::m_inlineImages;

    // 0x1016c5ea0, 24 bytes, __common; set at startup by ___cxx_global_var_init.166
    Array<eastl::string, eastl::allocator> PixfontGeneric::m_lines = Array<eastl::string, eastl::allocator>(100);

    // 0x1016c5eb8, 4 bytes, __common; zero-initialised
    PixfontGeneric::m_extraSpaceWidth;

    // 0x1016c5ebc, 4 bytes, __common; zero-initialised
    PixfontGeneric::m_currentCol;

    // 0x1016c5ec0, 24 bytes, __common; set at startup by ___cxx_global_var_init.167
    Array<int, eastl::allocator> PixfontGeneric::m_empty = Array<int, eastl::allocator>();

    // 0x1016c5ed8, 8 bytes, __common; set at startup by ___cxx_global_var_init.165
    jag::math::Random PixfontGeneric::m_rand = Random(123456789, 31415821);

    // 0x1016c5ee0, 4 bytes, __common; zero-initialised
    PixfontGeneric::m_defaultCol;

    // 0x1016c5ee4, 4 bytes, __common; zero-initialised
    PixfontGeneric::m_extraSpacePos;

    // 0x1001838b0: the linker folded this into Error::Error(), which has identical code
    PixfontGeneric::TransparentFontColour::TransparentFontColour();

    // 0x1001981a0: the linker folded this into Error::Error(), which has identical code
    PixfontGeneric::TransparentFontColour::TransparentFontColour();

    // 0x1002b5b40, 64 bytes, placed by class name and debug map
    // PixfontGeneric::DrawStringMultiline(eastl::string const&, int, int, int, int, int, int, int, int, int, graphics::Pix2D&)
    void PixfontGeneric::DrawStringMultiline(basic_string* param_1, int param_2, int param_3, int param_4, int param_5,
                                             int param_6, int param_7, int param_8, int param_9, int param_10,
                                             Pix2D* param_11) {
        DrawStringMultiline(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, 255, param_8, param_9,
                            param_10, param_11);
    }

    // 0x1002bde20, 48 bytes, placed by class name
    // PixfontGeneric::CharWid(char16_t) const
    undefined4 PixfontGeneric::CharWid(wchar16 param_1) {
        byte bVar1;
        undefined4* puVar2;

        bVar1 = SanitiseAndConvertWideChar(param_1);
        puVar2 = (undefined4*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)&field_48, (ulong)bVar1);
        return *puVar2;
    }

    // 0x1002bde50, 48 bytes, placed by class name
    // PixfontGeneric::CharHei(char16_t) const
    undefined4 PixfontGeneric::CharHei(wchar16 param_1) {
        byte bVar1;
        undefined4* puVar2;

        bVar1 = SanitiseAndConvertWideChar(param_1);
        puVar2 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_1096,
                                                                       (ulong)bVar1);
        return *puVar2;
    }

    // 0x1002bde80, 48 bytes, placed by class name
    // PixfontGeneric::CharBearingX(char16_t) const
    undefined4 PixfontGeneric::CharBearingX(wchar16 param_1) {
        byte bVar1;
        undefined4* puVar2;

        bVar1 = SanitiseAndConvertWideChar(param_1);
        puVar2 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_1120,
                                                                       (ulong)bVar1);
        return *puVar2;
    }

    // 0x1002bdeb0, 48 bytes, placed by class name
    // PixfontGeneric::CharBearingY(char16_t) const
    undefined4 PixfontGeneric::CharBearingY(wchar16 param_1) {
        byte bVar1;
        undefined4* puVar2;

        bVar1 = SanitiseAndConvertWideChar(param_1);
        puVar2 = (undefined4*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_1144,
                                                                       (ulong)bVar1);
        return *puVar2;
    }

    // 0x1002bdee0, 608 bytes, base-object constructor, placed by class name
    // PixfontGeneric::PixfontGeneric(Array<signed char, eastl::allocator>&&, Array<int, eastl::allocator>&&, Array<int, eastl::allocator>&&, Array<int, eastl::allocator>&&, Array<int, eastl::allocator>&&, SharedArray<unsigned int>&&, SharedArray<Array<unsigned char, eastl::allocator> >&&)
    void PixfontGeneric::PixfontGeneric(Array* param_1, Array* param_2, Array* param_3, Array* param_4, Array* param_5,
                                        SharedArray* param_6, SharedArray* param_7) {
        undefined1* this_00;
        undefined1* this_01;
        int iVar1;
        undefined8 uVar3;
        int* piVar4;
        ulong uVar5;
        int iVar6;
        int iVar7;

        field_0 = 0;
        new (&field_24) SharedArray<unsigned int>();
        new (&field_1072) Array<int, eastl::allocator>();
        this_00 = &field_1096;
        new (this_00) Array<int, eastl::allocator>();
        new (&field_1120) Array<int, eastl::allocator>();
        this_01 = &field_1144;
        new (this_01) Array<int, eastl::allocator>();
        new (&field_1168) Array<signed char, eastl::allocator>();
        if (param_7->HeapBeginPtr() != 256) {
            uVar3 = logger::default_logger();
            logger::Logger::Log(uVar3, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                                "jstring/pixfont_generic.cpp",
                                44, "Expected exactly 256 images");
        }
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&field_1120, param_2);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)this_01, param_3);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)&field_1072, param_4);
        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)this_00, param_5);
        UnpackMetrics(this, param_1);
        SharedArray<Array<unsigned char, eastl::allocator>>::operator=(
            (SharedArray<Array<unsigned char, eastl::allocator>>*)&field_24, param_7);
        iVar7 = 2147483647;
        iVar6 = -2147483648;
        uVar5 = 0;
        do {
            piVar4 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, uVar5);
            if (*piVar4 < iVar7) {
                piVar4 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar5);
                if (*piVar4 != 0) {
                    piVar4 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, uVar5);
                    iVar7 = *piVar4;
                }
            }
            piVar4 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, uVar5);
            iVar1 = *piVar4;
            piVar4 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar5);
            if (iVar6 < iVar1 + *piVar4) {
                piVar4 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, uVar5);
                iVar6 = *piVar4;
                piVar4 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, uVar5);
                iVar6 = iVar6 + *piVar4;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 != 256);
        iVar1 = field_0;
        field_4 = iVar1 - iVar7;
        field_8 = iVar6 - iVar1;
        piVar4 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, 88);
        field_12 = iVar1 - *piVar4;
        iVar7 = field_0;
        piVar4 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01, 120);
        field_16 = iVar7 - *piVar4;
    }

    // 0x1002be140, 1040 bytes, placed by class name
    // PixfontGeneric::UnpackMetrics(Array<signed char, eastl::allocator>&)
    void PixfontGeneric::UnpackMetrics(Array* param_1) {
        undefined1* puVar1;
        byte bVar2;
        char cVar3;
        int iVar4;
        undefined1 uVar5;
        long lVar6;
        byte* pbVar7;
        uint* puVar8;
        Array<signed char, eastl::allocator>* pAVar9;
        int* piVar10;
        long lVar11;
        char* pcVar12;
        undefined1* puVar13;
        ulong uVar14;
        ulong uVar15;
        char cVar16;
        long lVar17;
        array<Array<signed char, eastl::allocator>, 256ul> local_3850[6144];
        array<Array<signed char, eastl::allocator>, 256ul> local_2050[6144];
        array<int, 256ul> local_850[1024];
        array<int, 256ul> local_450[1024];
        array* local_50;
        ulong local_40;
        PixfontGeneric* local_38;

        lVar6 = param_1->end();
        puVar1 = &field_48;
        uVar14 = 0;
        local_38 = this;
        if (lVar6 == 257) {
            do {
                pbVar7 = (byte*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_1, uVar14);
                bVar2 = *pbVar7;
                puVar8 = (uint*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)puVar1, uVar14);
                *puVar8 = (uint)bVar2;
                uVar14 = uVar14 + 1;
            } while (uVar14 != 256);
            pbVar7 = (byte*)Array<signed char, eastl::allocator>::operator[](
                (Array<signed char, eastl::allocator>*)param_1, 256);
            local_38->field_0 = (uint)*pbVar7;
        } else {
            do {
                uVar15 = uVar14 + 1;
                pbVar7 = (byte*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_1, uVar14);
                bVar2 = *pbVar7;
                puVar8 = (uint*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)puVar1, uVar14);
                *puVar8 = (uint)bVar2;
                uVar14 = uVar15;
            } while (uVar15 != 256);
            uVar14 = 0;
            do {
                pbVar7 = (byte*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_1, uVar14 + 256);
                bVar2 = *pbVar7;
                puVar8 = (uint*)std::array<int, 256ul>::operator[](local_450, uVar14);
                *puVar8 = (uint)bVar2;
                uVar14 = uVar14 + 1;
            } while (uVar14 != 256);
            uVar14 = 0;
            do {
                pbVar7 = (byte*)Array<signed char, eastl::allocator>::operator[](
                    (Array<signed char, eastl::allocator>*)param_1, uVar14 + 512);
                bVar2 = *pbVar7;
                puVar8 = (uint*)std::array<int, 256ul>::operator[](local_850, uVar14);
                *puVar8 = (uint)bVar2;
                uVar14 = uVar14 + 1;
            } while (uVar14 != 256);
            std::array<Array<signed char, eastl::allocator>, 256ul>::array(local_3850);
            lVar6 = 768;
            uVar14 = 0;
            local_50 = (array*)puVar1;
            do {
                pAVar9 = (Array<signed char, eastl::allocator>*)
                    std::array<Array<signed char, eastl::allocator>, 256ul>::operator[](local_3850, uVar14);
                piVar10 = (int*)std::array<int, 256ul>::operator[](local_450, uVar14);
                pAVar9->set_max_size((long)*piVar10, 0);
                lVar11 = pAVar9->end();
                if (lVar11 != 0) {
                    uVar15 = 0;
                    cVar16 = '\0';
                    local_40 = uVar14;
                    do {
                        pcVar12 = (char*)Array<signed char, eastl::allocator>::operator[](
                            (Array<signed char, eastl::allocator>*)param_1, lVar6 + uVar15);
                        cVar3 = *pcVar12;
                        pcVar12 = (char*)Array<signed char, eastl::allocator>::operator[](pAVar9, uVar15);
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
            std::array<Array<signed char, eastl::allocator>, 256ul>::array(local_2050);
            uVar14 = 0;
            do {
                pAVar9 = (Array<signed char, eastl::allocator>*)
                    std::array<Array<signed char, eastl::allocator>, 256ul>::operator[](local_2050, uVar14);
                piVar10 = (int*)std::array<int, 256ul>::operator[](local_450, uVar14);
                pAVar9->set_max_size((long)*piVar10, 0);
                lVar11 = pAVar9->end();
                if (lVar11 != 0) {
                    uVar15 = 0;
                    cVar16 = '\0';
                    local_40 = uVar14;
                    do {
                        pcVar12 = (char*)Array<signed char, eastl::allocator>::operator[](
                            (Array<signed char, eastl::allocator>*)param_1, lVar6 + uVar15);
                        cVar3 = *pcVar12;
                        pcVar12 = (char*)Array<signed char, eastl::allocator>::operator[](pAVar9, uVar15);
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
            lVar11 = 0;
            do {
                if (((uint)lVar11 & 2147483519) != 32) {
                    lVar17 = 0;
                    do {
                        if (((uint)lVar17 & 2147483519) != 32) {
                            uVar5 = KernPair((array*)local_3850, (array*)local_2050, (array*)local_850, local_50,
                                             (array*)local_450, (uint)lVar11, (uint)lVar17);
                            puVar13 = (undefined1*)Array<signed char, eastl::allocator>::operator[](
                                (Array<signed char, eastl::allocator>*)puVar1, lVar17 + lVar6);
                            *puVar13 = uVar5;
                        }
                        lVar17 = lVar17 + 1;
                    } while (lVar17 != 256);
                }
                lVar11 = lVar11 + 1;
                lVar6 = lVar6 + 256;
            } while (lVar11 != 256);
            piVar10 = (int*)std::array<int, 256ul>::operator[](local_850, 32);
            iVar4 = *piVar10;
            piVar10 = (int*)std::array<int, 256ul>::operator[](local_450, 32);
            local_38->field_0 = iVar4 + *piVar10;
            std::array<Array<signed char, eastl::allocator>, 256ul>::~array(local_2050);
            std::array<Array<signed char, eastl::allocator>, 256ul>::~array(local_3850);
        }
    }

    // 0x1002be580, 32 bytes, complete-object constructor, placed by class name
    // PixfontGeneric::PixfontGeneric(Array<signed char, eastl::allocator>&&, Array<int, eastl::allocator>&&, Array<int, eastl::allocator>&&, Array<int, eastl::allocator>&&, Array<int, eastl::allocator>&&, SharedArray<unsigned int>&&, SharedArray<Array<unsigned char, eastl::allocator> >&&)
    void PixfontGeneric::PixfontGeneric(Array* param_1, Array* param_2, Array* param_3, Array* param_4, Array* param_5,
                                        SharedArray* param_6, SharedArray* param_7) {
        SharedArray* in_stack_ffffffffffffffe8;

        PixfontGeneric(this, param_1, param_2, param_3, param_4, param_5, in_stack_ffffffffffffffe8, param_7);
    }

    // 0x1002be5d0, 768 bytes, placed by class name
    // PixfontGeneric::StringWid(eastl::string const&)
    int PixfontGeneric::StringWid(basic_string* param_1) {
        ulong uVar1;
        int iVar2;
        bool bVar3;
        bool bVar4;
        char cVar5;
        wchar16 wVar6;
        uint uVar8;
        long lVar9;
        char* pcVar10;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar11;
        Array<graphics::Pix8, eastl::allocator>* this_00;
        undefined8 uVar12;
        undefined8 uVar13;
        int* piVar14;
        char* pcVar15;
        char* extraout_RDX;
        char* extraout_RDX_00;
        ulong uVar16;
        ulong uVar17;
        eastl local_a0[32];
        basic_string local_80[32];
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_58;
        array<int, 256ul>* local_50;
        ulong local_48;
        ulong local_40;
        int local_38;
        int local_34;

        lVar9 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (lVar9 == 0) {
            local_34 = 0;
        } else {
            pcVar10 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_48 = 0;
            if (*pcVar10 == '\0') {
                local_34 = 0;
            } else {
                local_50 = (array<int, 256ul>*)&field_48;
                local_58 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_1168;
                uVar17 = 4294967295;
                local_34 = 0;
                local_40 = 4294967295;
                do {
                    uVar1 = local_48;
                    wVar6 = stringtools::GetUTF8NextChar16(pcVar10, &local_48);
                    if (wVar6 == L'<') {
                        uVar17 = uVar1 & 4294967295;
                    } else {
                        if ((wVar6 == L'>') && ((int)uVar17 != -1)) {
                            eastl::string::substr((ulong)local_a0, (ulong)param_1);
                            bVar3 = eastl::operator==(local_a0, (basic_string*)"lt", extraout_RDX);
                            bVar4 = true;
                            if (bVar3) {
                                wVar6 = L'<';
                            } else {
                                bVar3 = eastl::operator==(local_a0, (basic_string*)"gt", extraout_RDX_00);
                                if (bVar3) {
                                    wVar6 = L'>';
                                } else {
                                    eastl::string::substr((ulong)local_80, (ulong)local_a0);
                                    bVar4 = eastl::operator==(local_80, (value_type*)"img=");
                                    local_80->~basic_string();
                                    if (bVar4) {
                                        eastl::string::substr((ulong)local_80, (ulong)local_a0);
                                        local_38 = 0;
                                        cVar5 = core::stringtools::general::StringTools::CheckedParseInt(&local_38,
                                                                                                         local_80);
                                        iVar2 = local_38;
                                        if ((cVar5 == '\0') || (local_38 < 0)) {
                                        LAB_1002be7a8:
                                            uVar12 = logger::default_logger();
                                            uVar13 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                            logger::Logger::Log(
                                                uVar12, 0, 8,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "oldscape/jagex3/jstring/pixfont_generic.cpp",
                                                134, "Invalid img tag: %s", uVar13);
                                        } else {
                                            pvVar11 =
                                                (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                                    shared_ptr<Array<graphics::Pix8, eastl::allocator>>::operator->(
                                                        (shared_ptr<
                                                            Array<graphics::Pix8, eastl::allocator>>*)&m_inlineImages);
                                            if (eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                                                    pvVar11) <= iVar2)
                                                goto LAB_1002be7a8;
                                            this_00 = (Array<graphics::Pix8, eastl::allocator>*)
                                                shared_ptr<Array<graphics::Pix8, eastl::allocator>>::operator*(
                                                    (shared_ptr<
                                                        Array<graphics::Pix8, eastl::allocator>>*)&m_inlineImages);
                                            lVar9 = Array<graphics::Pix8, eastl::allocator>::operator[](this_00,
                                                                                                        (long)local_38);
                                            local_34 = local_34 + *(int*)(lVar9 + 64);
                                            local_40 = 4294967295;
                                        }
                                        local_80->~basic_string();
                                    }
                                    bVar4 = false;
                                }
                            }
                            local_a0->~basic_string();
                            uVar17 = 4294967295;
                            if (!bVar4)
                                goto LAB_1002be653;
                        }
                        uVar1 = local_40;
                        uVar16 = local_40 & 4294967295;
                        wVar6 = SanitiseWideChar(wVar6);
                        if ((int)uVar17 == -1) {
                            uVar8 = stringtools::WideToCP1252(wVar6);
                            local_40 = (ulong)(uVar8 & 255);
                            piVar14 = (int*)std::array<int, 256ul>::operator[](local_50, local_40);
                            pvVar11 = local_58;
                            local_34 = local_34 + *piVar14;
                            lVar9 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_58);
                            if ((lVar9 != 0) && ((int)uVar1 != -1)) {
                                pcVar15 = (char*)Array<signed char, eastl::allocator>::operator[](
                                    (Array<signed char, eastl::allocator>*)pvVar11,
                                    (ulong)(uVar8 & 255 | (int)uVar1 << 8));
                                local_34 = local_34 + *pcVar15;
                            }
                        } else {
                            local_40 = uVar16;
                        }
                    }
                LAB_1002be653:
                } while (pcVar10[local_48] != '\0');
            }
        }
        return local_34;
    }

    // 0x1002be960, 1936 bytes, placed by class name
    // PixfontGeneric::SplitString(eastl::string const&, Array<int, eastl::allocator>&, Array<eastl::string, eastl::allocator>&)
    int PixfontGeneric::SplitString(basic_string* param_1, Array* param_2, Array* param_3) {
        bool bVar1;
        char cVar2;
        wchar16 wVar3;
        long lVar4;
        char* pcVar5;
        undefined8 uVar6;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar7;
        Array<graphics::Pix8, eastl::allocator>* this_01;
        undefined8 uVar8;
        ulong uVar9;
        long lVar10;
        int* piVar11;
        ulong uVar12;
        eastl::string* pbVar13;
        int iVar14;
        char* extraout_RDX;
        char* extraout_RDX_00;
        char* extraout_RDX_01;
        int iVar15;
        int iVar16;
        undefined7 uVar17;
        ulong uVar18;
        uint uVar19;
        basic_string local_108[32];
        allocator local_e0[32];
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_c0;
        eastl::string local_b8[32];
        ulong local_90;
        PixfontGeneric* local_80;
        uint local_74;
        char* local_70;
        ulong local_68;
        int local_60;
        undefined4 local_5c;
        int local_58;
        int local_54;
        ulong local_50;
        undefined4 local_44;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        local_80 = this;
        lVar4 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (lVar4 == 0) {
            local_54 = 0;
        } else {
            eastl::allocator::allocator(local_e0, "EASTL basic_string");
            eastl::string::basic_string(local_b8, "", local_e0);
            pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_90 = 0;
            lVar4 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            local_74 = 2;
            if (lVar4 == 0) {
                local_40 = 0;
                local_68 = 0;
                uVar19 = local_74;
            } else {
                local_c0 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&local_80->field_1168;
                local_50 = 4294967295;
                local_34 = 0;
                local_68 = 0;
                uVar12 = 0;
                local_40 = 0;
                local_3c = 0;
                uVar18 = 4294967295;
                local_5c = 0;
                local_58 = 0;
                local_70 = pcVar5;
                while (uVar19 = local_74, pcVar5[local_90] != '\0') {
                    wVar3 = stringtools::GetUTF8NextChar16(pcVar5, &local_90);
                    if (wVar3 == L'<') {
                        uVar19 = 4;
                        uVar18 = uVar12 & 4294967295;
                    } else {
                        if ((wVar3 == L'>') && ((int)uVar18 != -1)) {
                            eastl::string::substr((ulong)local_e0, (ulong)param_1);
                            eastl::string::append(local_b8, "<");
                            pvVar7 = local_c0;
                            local_b8->append();
                            eastl::string::append(local_b8, ">");
                            bVar1 = eastl::operator==((eastl*)local_e0, (basic_string*)"br", extraout_RDX);
                            if (bVar1) {
                                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true,
                                                                                        eastl::allocator>>::size();
                                eastl::string::substr((ulong)local_108, (ulong)local_b8);
                                pbVar13 = (eastl::string*)Array<eastl::string, eastl::allocator>::operator[](
                                    (Array<eastl::string, eastl::allocator>*)param_3, (long)local_40);
                                eastl::string::operator=(pbVar13, local_108);
                                local_108->~basic_string();
                                iVar15 = local_40 + 1;
                                iVar16 = param_3->end();
                                local_38 = 0;
                                local_40 = iVar15;
                                if (iVar15 == iVar16) {
                                    local_44 = 0;
                                    local_38 = local_34;
                                    iVar16 = local_3c;
                                    local_54 = iVar15;
                                } else {
                                    local_68 =
                                        eastl::basic_string<char,
                                                            eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true,
                                                                                          eastl::allocator>>::size();
                                    local_44 = (undefined4)CONCAT71((int7)(local_68 >> 8), 1);
                                    local_50 = 4294967295;
                                    wVar3 = L'\0';
                                    iVar16 = 0;
                                }
                            } else {
                                bVar1 = eastl::operator==((eastl*)local_e0, (basic_string*)"lt", extraout_RDX_00);
                                uVar17 = (undefined7)((ulong)pvVar7 >> 8);
                                if (bVar1) {
                                    local_38 = CharWid(local_80, L'<');
                                    local_38 = local_38 + local_34;
                                    lVar4 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar7);
                                    if (lVar4 == 0) {
                                        local_44 = 1;
                                        wVar3 = L'\0';
                                        iVar16 = (int)CONCAT71(uVar17, 60);
                                    } else {
                                        pcVar5 = (char*)Array<signed char, eastl::allocator>::operator[](
                                            (Array<signed char, eastl::allocator>*)pvVar7,
                                            (ulong)(byte)local_3c << 8 | 60);
                                        local_38 = local_38 + *pcVar5;
                                        wVar3 = L'\0';
                                        local_44 = (undefined4)CONCAT71((uint7)(uint3)((uint)(int)*pcVar5 >> 8), 1);
                                        iVar16 = (int)CONCAT71(uVar17, 60);
                                    }
                                } else {
                                    bVar1 = eastl::operator==((eastl*)local_e0, (basic_string*)"gt", extraout_RDX_01);
                                    if (bVar1) {
                                        local_38 = CharWid(local_80, L'>');
                                        local_38 = local_38 + local_34;
                                        lVar4 =
                                            eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar7);
                                        if (lVar4 == 0) {
                                            local_44 = 1;
                                            wVar3 = L'\0';
                                            iVar16 = (int)CONCAT71(uVar17, 62);
                                        } else {
                                            pcVar5 = (char*)Array<signed char, eastl::allocator>::operator[](
                                                (Array<signed char, eastl::allocator>*)pvVar7,
                                                (ulong)(byte)local_3c << 8 | 62);
                                            local_38 = local_38 + *pcVar5;
                                            wVar3 = L'\0';
                                            local_44 = (undefined4)CONCAT71((uint7)(uint3)((uint)(int)*pcVar5 >> 8), 1);
                                            iVar16 = (int)CONCAT71(uVar17, 62);
                                        }
                                    } else {
                                        eastl::string::substr((ulong)local_108, (ulong)local_e0);
                                        bVar1 = eastl::operator==(local_108, (value_type*)"img=");
                                        uVar6 = local_108->~basic_string();
                                        if (bVar1) {
                                            eastl::string::substr((ulong)local_108, (ulong)local_e0);
                                            local_60 = 0;
                                            cVar2 = core::stringtools::general::StringTools::CheckedParseInt(&local_60,
                                                                                                             local_108);
                                            iVar16 = local_60;
                                            if ((cVar2 == '\0') || (local_60 < 0)) {
                                            LAB_1002bed7d:
                                                uVar6 = logger::default_logger();
                                                uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                                logger::Logger::Log(
                                                    uVar6, 0, 8,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/oldscape/jagex3/jstring/pixfont_generic.cpp",
                                                    254, "Invalid img tag: %s", uVar8);
                                            } else {
                                                pvVar7 =
                                                    (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                                        shared_ptr<Array<graphics::Pix8, eastl::allocator>>::operator->(
                                                            (shared_ptr<Array<graphics::Pix8,
                                                                              eastl::allocator>>*)&m_inlineImages);
                                                iVar15 =
                                                    eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                                                        pvVar7);
                                                if (iVar15 <= iVar16)
                                                    goto LAB_1002bed7d;
                                                this_01 = (Array<graphics::Pix8, eastl::allocator>*)
                                                    shared_ptr<Array<graphics::Pix8, eastl::allocator>>::operator*(
                                                        (shared_ptr<
                                                            Array<graphics::Pix8, eastl::allocator>>*)&m_inlineImages);
                                                lVar4 = Array<graphics::Pix8, eastl::allocator>::operator[](
                                                    this_01, (long)local_60);
                                                local_34 = local_34 + *(int*)(lVar4 + 64);
                                                local_3c = 0;
                                            }
                                            uVar6 = local_108->~basic_string();
                                        }
                                        local_44 = (undefined4)CONCAT71((int7)((ulong)uVar6 >> 8), 1);
                                        wVar3 = L'\0';
                                        local_38 = local_34;
                                        iVar16 = local_3c;
                                    }
                                }
                            }
                            local_e0->~basic_string();
                            uVar19 = 1;
                            uVar18 = 4294967295;
                            if ((char)local_44 != '\0')
                                goto LAB_1002bedfa;
                        } else {
                            local_38 = local_34;
                            iVar16 = local_3c;
                        LAB_1002bedfa:
                            uVar19 = 0;
                            if ((int)uVar18 == -1) {
                                iVar15 = local_38;
                                if (wVar3 != L'\0') {
                                    local_34 = iVar16;
                                    lVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                    lVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                    eastl::string::append(local_b8, (char*)(uVar12 + lVar4),
                                                          (char*)(lVar10 + local_90));
                                    iVar15 = CharWid(local_80, wVar3);
                                    local_3c = stringtools::WideToCP1252(wVar3);
                                    pvVar7 = local_c0;
                                    iVar15 = local_38 + iVar15;
                                    lVar4 =
                                        eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_c0);
                                    if (lVar4 != 0) {
                                        pcVar5 = (char*)Array<signed char, eastl::allocator>::operator[](
                                            (Array<signed char, eastl::allocator>*)pvVar7,
                                            (ulong)CONCAT11((undefined1)local_34, (byte)local_3c));
                                        iVar15 = iVar15 + *pcVar5;
                                    }
                                    iVar16 = local_3c;
                                    if (wVar3 == L' ') {
                                        local_50 = eastl::basic_string<
                                            char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true,
                                                                                eastl::allocator>>::size();
                                        local_5c = 1;
                                        local_58 = iVar15;
                                        iVar16 = local_3c;
                                    }
                                }
                                local_3c = iVar16;
                                iVar16 = param_2->end();
                                if (iVar16 == 0) {
                                LAB_1002bef96:
                                    uVar12 = local_50;
                                } else {
                                    iVar14 = iVar16 + -1;
                                    if (local_40 < iVar16) {
                                        iVar14 = local_40;
                                    }
                                    piVar11 = (int*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)param_2, (long)iVar14);
                                    if (iVar15 <= *piVar11)
                                        goto LAB_1002bef96;
                                    if ((int)local_50 < 0) {
                                        uVar12 = local_50 & 4294967295;
                                    } else {
                                        eastl::string::substr((ulong)local_e0, (ulong)local_b8);
                                        pbVar13 = (eastl::string*)Array<eastl::string, eastl::allocator>::operator[](
                                            (Array<eastl::string, eastl::allocator>*)param_3, (long)local_40);
                                        eastl::string::operator=(pbVar13, (basic_string*)local_e0);
                                        local_e0->~basic_string();
                                        local_40 = local_40 + 1;
                                        iVar15 = iVar15 - local_58;
                                        local_3c = 0;
                                        local_68 = local_50;
                                        uVar12 = 4294967295;
                                    }
                                }
                                local_34 = iVar15;
                                if (wVar3 == L'-') {
                                    local_50 =
                                        eastl::basic_string<char,
                                                            eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true,
                                                                                          eastl::allocator>>::size();
                                    local_5c = 0;
                                    local_58 = local_34;
                                    uVar19 = 0;
                                } else {
                                    local_50 = uVar12;
                                }
                                goto LAB_1002bee0e;
                            }
                        }
                        local_34 = local_38;
                        local_3c = iVar16;
                    }
                LAB_1002bee0e:
                    pcVar5 = local_70;
                    uVar12 = local_90;
                    if (((uVar19 & 3) != 0) ||
                        (uVar9 = eastl::basic_string<
                             char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size(),
                         uVar19 = local_74, uVar9 <= uVar12))
                        break;
                }
            }
            local_74 = uVar19;
            if (local_74 == 2) {
                uVar12 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                if ((local_68 & 4294967295) < uVar12) {
                    eastl::string::substr((ulong)local_e0, (ulong)local_b8);
                    pbVar13 = (eastl::string*)Array<eastl::string, eastl::allocator>::operator[](
                        (Array<eastl::string, eastl::allocator>*)param_3, (long)local_40);
                    eastl::string::operator=(pbVar13, (basic_string*)local_e0);
                    iVar16 = local_40 + 1;
                    local_e0->~basic_string();
                    local_54 = iVar16;
                } else {
                    local_54 = local_40;
                }
            }
            eastl::string::~basic_string(local_b8);
        }
        return local_54;
    }

    // 0x1002bf0f0, 208 bytes, placed by class name
    // PixfontGeneric::PredictWidthMultiline(eastl::string const&, int)
    int PixfontGeneric::PredictWidthMultiline(basic_string* param_1, int param_2) {
        uint uVar1;
        int iVar2;
        basic_string* pbVar3;
        ulong uVar4;
        int iVar5;
        Array<int, eastl::allocator> local_60[24];
        int* local_48;
        undefined8 local_40;
        int local_34;

        local_48 = &local_34;
        local_40 = 1;
        local_34 = param_2;
        Array<int, eastl::allocator>::Array(local_60, (initializer_list*)&local_48);
        uVar1 = SplitString(this, param_1, (Array*)local_60, (Array*)&m_lines);
        if ((int)uVar1 < 1) {
            iVar5 = 0;
        } else {
            uVar4 = 0;
            iVar5 = 0;
            do {
                pbVar3 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
                    (Array<eastl::string, eastl::allocator>*)&m_lines, uVar4);
                iVar2 = StringWid(this, pbVar3);
                if (iVar5 < iVar2) {
                    iVar5 = iVar2;
                }
                uVar4 = uVar4 + 1;
            } while (uVar1 != uVar4);
        }
        local_60->~Array();
        return iVar5;
    }

    // 0x1002bf1d0, 128 bytes, placed by class name
    // PixfontGeneric::PredictLinesMultiline(eastl::string const&, int)
    undefined4 PixfontGeneric::PredictLinesMultiline(basic_string* param_1, int param_2) {
        undefined4 uVar1;
        Array<int, eastl::allocator> local_50[24];
        int* local_38;
        undefined8 local_30;
        int local_24;

        local_38 = &local_24;
        local_30 = 1;
        local_24 = param_2;
        Array<int, eastl::allocator>::Array(local_50, (initializer_list*)&local_38);
        uVar1 = SplitString(this, param_1, (Array*)local_50, (Array*)&m_lines);
        local_50->~Array();
        return uVar1;
    }

    // 0x1002bf250, 224 bytes, placed by class name
    // PixfontGeneric::Escape(char const*, unsigned long)
    PixfontGeneric* PixfontGeneric::Escape(char* param_1, ulong param_2) {
        char cVar1;
        ulong uVar2;
        ulong uVar3;

        uVar3 = 0;
        if (param_2 != 0) {
            uVar2 = 0;
            do {
                if ((param_1[uVar2] & 253U) == 60) {
                    uVar3 = (ulong)((int)uVar3 + 3);
                }
                uVar2 = uVar2 + 1;
            } while (param_2 != uVar2);
            uVar3 = (ulong)(int)uVar3;
        }
        new (this) eastl::string();
        reserve(uVar3 + param_2);
        if (param_2 != 0) {
            uVar3 = 0;
            do {
                cVar1 = param_1[uVar3];
                if (cVar1 == '>') {
                    append("<gt>");
                } else if (cVar1 == '<') {
                    append("<lt>");
                } else {
                    push_back(cVar1);
                }
                uVar3 = uVar3 + 1;
            } while (param_2 != uVar3);
        }
        return this;
    }

    // 0x1002bf330, 288 bytes, placed by class name
    // PixfontGeneric::GetCentreStringSubStringRect(int, int, eastl::string const&, int, int)
    PixfontGeneric* PixfontGeneric::GetCentreStringSubStringRect(int param_1, int param_2, basic_string* param_3,
                                                                 int param_4, int param_5) {
        int iVar1;
        undefined4 in_register_00000034;
        PixfontGeneric* this_00;
        int iVar3;
        undefined4 in_register_00000084;
        basic_string* pbVar4;
        int in_stack_00000008;
        basic_string local_68[32];
        undefined4 local_40;
        int local_3c;
        int local_38;
        int local_34;

        pbVar4 = (basic_string*)CONCAT44(in_register_00000084, param_4);
        this_00 = (PixfontGeneric*)CONCAT44(in_register_00000034, param_1);
        local_40 = SUB84(param_3, 0);
        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() ==
            0) {
            iVar1 = 0;
            iVar3 = 0;
        } else {
            local_38 = StringWid(this_00, pbVar4);
            eastl::string::substr((ulong)local_68, (ulong)pbVar4);
            local_3c = StringWid(this_00, local_68);
            local_68->~basic_string();
            local_34 = this_00->field_4;
            eastl::string::substr((ulong)local_68, (ulong)pbVar4);
            iVar1 = StringWid(this_00, local_68);
            in_stack_00000008 = in_stack_00000008 - local_34;
            param_5 = (param_5 - local_38 / 2) + local_3c;
            local_68->~basic_string();
            iVar3 = this_00->field_8 + this_00->field_4;
            this = (PixfontGeneric*)this;
        }
        new (this) dash3d::GridRect(param_5, in_stack_00000008, iVar1, iVar3);
        return this;
    }

    // 0x1002bf450, 544 bytes, placed by class name
    // PixfontGeneric::SupportedTag(eastl::string&)
    ulong PixfontGeneric::SupportedTag(basic_string* param_1) {
        bool bVar1;
        undefined7 extraout_var;
        char* extraout_RDX;
        char* extraout_RDX_00;
        char* extraout_RDX_01;
        char* extraout_RDX_02;
        char* extraout_RDX_03;
        char* extraout_RDX_04;
        char* extraout_RDX_05;
        char* extraout_RDX_06;
        char* extraout_RDX_07;
        char* extraout_RDX_08;
        undefined8 unaff_R14;
        ulong uVar2;
        basic_string local_40[32];

        eastl::string::substr((ulong)local_40, (ulong)param_1);
        bVar1 = eastl::operator==(local_40, (value_type*)"col=");
        local_40->~basic_string();
        uVar2 = CONCAT71((int7)((ulong)unaff_R14 >> 8), 1);
        if (!bVar1) {
            bVar1 = eastl::operator==((eastl*)param_1, (basic_string*)"/col", extraout_RDX);
            if (!bVar1) {
                eastl::string::substr((ulong)local_40, (ulong)param_1);
                bVar1 = eastl::operator==(local_40, (value_type*)"u=");
                local_40->~basic_string();
                if (!bVar1) {
                    bVar1 = eastl::operator==((eastl*)param_1, (basic_string*)"u", extraout_RDX_00);
                    if (!bVar1) {
                        bVar1 = eastl::operator==((eastl*)param_1, (basic_string*)"/u", extraout_RDX_01);
                        if (!bVar1) {
                            eastl::string::substr((ulong)local_40, (ulong)param_1);
                            bVar1 = eastl::operator==(local_40, (value_type*)"shad=");
                            local_40->~basic_string();
                            if (!bVar1) {
                                bVar1 = eastl::operator==((eastl*)param_1, (basic_string*)"shad", extraout_RDX_02);
                                if (!bVar1) {
                                    bVar1 = eastl::operator==((eastl*)param_1, (basic_string*)"/shad", extraout_RDX_03);
                                    if (!bVar1) {
                                        eastl::string::substr((ulong)local_40, (ulong)param_1);
                                        bVar1 = eastl::operator==(local_40, (value_type*)"str=");
                                        local_40->~basic_string();
                                        if (!bVar1) {
                                            bVar1 = eastl::operator==((eastl*)param_1, (basic_string*)"str",
                                                                      extraout_RDX_04);
                                            if (!bVar1) {
                                                bVar1 = eastl::operator==((eastl*)param_1, (basic_string*)"/str",
                                                                          extraout_RDX_05);
                                                if (!bVar1) {
                                                    bVar1 = eastl::operator==((eastl*)param_1, (basic_string*)"br",
                                                                              extraout_RDX_06);
                                                    if (!bVar1) {
                                                        bVar1 = eastl::operator==((eastl*)param_1, (basic_string*)"lt",
                                                                                  extraout_RDX_07);
                                                        if (!bVar1) {
                                                            bVar1 = eastl::operator==(
                                                                (eastl*)param_1, (basic_string*)"gt", extraout_RDX_08);
                                                            if (!bVar1) {
                                                                eastl::string::substr((ulong)local_40, (ulong)param_1);
                                                                bVar1 =
                                                                    eastl::operator==(local_40, (value_type*)"img=");
                                                                uVar2 = CONCAT71(extraout_var, bVar1) & 4294967295;
                                                                local_40->~basic_string();
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
        return uVar2 & 4294967295;
    }

    // 0x1002bf670, 208 bytes, placed by class name
    // PixfontGeneric::DrawString(eastl::string const&, int, int, int, int, graphics::Pix2D&)
    void PixfontGeneric::DrawString(basic_string* param_1, int param_2, int param_3, int param_4, int param_5,
                                    Pix2D* param_6) {
        Array<int, eastl::allocator> local_68[24];
        Array<int, eastl::allocator> local_50[28];

        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() !=
            0) {
            ResetState((PixfontGeneric*)param_1, param_4, param_5);
            Array<int, eastl::allocator>::Array(local_68);
            Array<int, eastl::allocator>::Array(local_50);
            DrawStringInner(this, param_1, param_2, param_3, param_6, 0, 0, 0, (Array*)local_68, (Array*)local_50);
            local_50->~Array();
            local_68->~Array();
        }
    }

    // 0x1002bf740, 96 bytes, placed by class name
    // PixfontGeneric::ResetState(int, int)
    void PixfontGeneric::ResetState(int param_1, int param_2) {
        m_strikeout = 4294967295;
        m_underline = 4294967295;
        m_defaultShadow = param_2;
        if (param_2 == 0) {
            param_2 = 1;
        }
        m_currentShadow = param_2;
        m_defaultCol = param_1;
        if (param_1 == 0) {
            param_1 = 1;
        }
        m_currentCol = param_1;
        m_alpha = 255;
        m_extraSpaceWidth = 0;
        m_extraSpacePos = 0;
    }

    // 0x1002bf7a0, 2224 bytes, placed by class name
    // PixfontGeneric::DrawStringInner(eastl::string const&, int, int, graphics::Pix2D&, int, int, int, Array<int, eastl::allocator> const&, Array<int, eastl::allocator> const&)
    void PixfontGeneric::DrawStringInner(basic_string* param_1, int param_2, int param_3, Pix2D* param_4, int param_5,
                                         int param_6, int param_7, Array* param_8, Array* param_9) {
        int iVar1;
        ulong uVar2;
        int iVar3;
        uchar uVar4;
        bool bVar5;
        bool bVar6;
        byte bVar7;
        char cVar8;
        wchar16 wVar9;
        uint uVar10;
        char* pcVar11;
        long lVar12;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        Array<graphics::Pix8, eastl::allocator>* this_01;
        undefined8 uVar13;
        undefined8 uVar14;
        int* piVar15;
        undefined4* puVar16;
        Array* pAVar17;
        undefined4 in_register_00000014;
        char* extraout_RDX;
        char* extraout_RDX_00;
        int iVar18;
        PixfontGeneric* pPVar19;
        ulong uVar20;
        ulong uVar21;
        eastl local_120[32];
        eastl::string local_100[32];
        TransparentFontColour local_e0[16];
        TransparentFontColour local_d0[16];
        char* local_c0;
        ulong local_b0;
        Array<int, eastl::allocator>* local_a8;
        Array<int, eastl::allocator>* local_a0;
        array<int, 256ul>* local_98;
        ulong local_90;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_88;
        ulong local_78;
        shared_ptr<Array<unsigned char, eastl::allocator>[]>* local_70;
        Array<int, eastl::allocator>* local_68;
        Array<int, eastl::allocator>* local_60;
        int local_58;
        int local_54;
        ulong local_48;
        PixfontGeneric* local_40;
        ulong local_38;

        local_38 = CONCAT44(in_register_00000014, param_2);
        local_78 = (ulong)(uint)(param_3 - field_0);
        local_40 = this;
        local_e0 = (TransparentFontColour[16])PrecalculateTransparentFontColour(m_alpha, m_currentCol);
        local_d0 = (TransparentFontColour[16])PrecalculateTransparentFontColour(m_alpha, m_currentShadow);
        pcVar11 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        lVar12 = eastl::basic_string<char, BucketAllocatorEASTL>::end();
        local_90 = 0;
        uVar20 = lVar12 - (long)pcVar11;
        if (uVar20 != 0) {
            local_88 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&local_40->field_1168;
            local_a8 = (Array<int, eastl::allocator>*)&local_40->field_1072;
            local_a0 = (Array<int, eastl::allocator>*)&local_40->field_1096;
            local_70 = (shared_ptr<Array<unsigned char, eastl::allocator>[]>*)&local_40->field_32;
            local_68 = (Array<int, eastl::allocator>*)&local_40->field_1120;
            local_60 = (Array<int, eastl::allocator>*)&local_40->field_1144;
            local_54 = (int)local_78 + 1;
            local_98 = (array<int, 256ul>*)&local_40->field_48;
            uVar21 = 4294967295;
            local_48 = 4294967295;
            local_c0 = pcVar11;
            local_b0 = uVar20;
            do {
                uVar2 = local_90;
                wVar9 = stringtools::GetUTF8NextChar16(local_c0, &local_90);
                uVar4 = stringtools::WideToCP1252(wVar9);
                if (uVar4 != '\0') {
                    if (uVar4 == '<') {
                        uVar21 = uVar2 & 4294967295;
                    } else {
                        if ((uVar4 == '>') && ((int)uVar21 != -1)) {
                            eastl::string::substr((ulong)local_120, (ulong)param_1);
                            bVar5 = eastl::operator==(local_120, (basic_string*)"lt", extraout_RDX);
                            bVar6 = true;
                            if (bVar5) {
                                uVar4 = '<';
                            } else {
                                bVar5 = eastl::operator==(local_120, (basic_string*)"gt", extraout_RDX_00);
                                if (bVar5) {
                                    uVar4 = '>';
                                } else {
                                    eastl::string::substr((ulong)local_100, (ulong)local_120);
                                    bVar6 = eastl::operator==((basic_string*)local_100, (value_type*)"img=");
                                    pPVar19 = (PixfontGeneric*)local_100;
                                    eastl::string::~basic_string(local_100);
                                    if (bVar6) {
                                        eastl::string::substr((ulong)local_100, (ulong)local_120);
                                        uVar21 = local_38;
                                        local_58 = 0;
                                        cVar8 = core::stringtools::general::StringTools::CheckedParseInt(
                                            &local_58, (basic_string*)local_100, 10, true);
                                        iVar1 = local_58;
                                        if ((cVar8 == '\0') || (local_58 < 0)) {
                                        LAB_1002bfa56:
                                            uVar13 = logger::default_logger();
                                            uVar14 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                            logger::Logger::Log(
                                                uVar13, 0, 8,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "oldscape/jagex3/jstring/pixfont_generic.cpp",
                                                1702, "Invalid img tag: %s", uVar14);
                                        } else {
                                            this_00 =
                                                (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                                    shared_ptr<Array<graphics::Pix8, eastl::allocator>>::operator->(
                                                        (shared_ptr<
                                                            Array<graphics::Pix8, eastl::allocator>>*)&m_inlineImages);
                                            iVar18 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                                                this_00);
                                            if (iVar18 <= iVar1)
                                                goto LAB_1002bfa56;
                                            this_01 = (Array<graphics::Pix8, eastl::allocator>*)
                                                shared_ptr<Array<graphics::Pix8, eastl::allocator>>::operator*(
                                                    (shared_ptr<
                                                        Array<graphics::Pix8, eastl::allocator>>*)&m_inlineImages);
                                            lVar12 = Array<graphics::Pix8, eastl::allocator>::operator[](
                                                this_01, (long)local_58);
                                            (**(code**)(param_4->field_0 + 184))(param_4, lVar12, uVar21 & 4294967295,
                                                                                 (local_40->field_0 + (int)local_78) -
                                                                                     *(int*)(lVar12 + 68));
                                            uVar21 = (ulong)(uint)((int)uVar21 + *(int*)(lVar12 + 64));
                                            local_48 = 4294967295;
                                        }
                                        local_38 = uVar21;
                                        eastl::string::~basic_string(local_100);
                                        bVar6 = false;
                                    } else {
                                        UpdateState(pPVar19, (basic_string*)local_120);
                                        bVar6 = false;
                                    }
                                }
                            }
                            local_120->~basic_string();
                            uVar21 = 4294967295;
                            if (!bVar6)
                                goto LAB_1002bf8c3;
                        }
                        bVar7 = SanitiseChar(uVar4);
                        if ((int)uVar21 == -1) {
                            lVar12 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_88);
                            if ((lVar12 != 0) && ((int)local_48 != -1)) {
                                pcVar11 = (char*)Array<signed char, eastl::allocator>::operator[](
                                    (Array<signed char, eastl::allocator>*)local_88,
                                    (long)(int)((uint)bVar7 | (int)local_48 << 8));
                                local_38 = (ulong)(uint)((int)local_38 + (int)*pcVar11);
                            }
                            pPVar19 = local_40;
                            uVar20 = (ulong)bVar7;
                            piVar15 = (int*)Array<int, eastl::allocator>::operator[](local_a8, uVar20);
                            iVar1 = *piVar15;
                            puVar16 = (undefined4*)Array<int, eastl::allocator>::operator[](local_a0, uVar20);
                            if (bVar7 == 32) {
                                if (0 < m_extraSpaceWidth) {
                                    uVar10 = m_extraSpaceWidth + m_extraSpacePos;
                                    m_extraSpacePos = uVar10 & 255;
                                    local_38 = (ulong)(uint)(((int)uVar10 >> 8) + (int)local_38);
                                }
                            } else {
                                local_48 = CONCAT44(local_48._4_4_, *puVar16);
                                if (m_alpha < 255) {
                                    if (0 < m_alpha) {
                                        if (m_currentShadow != -1) {
                                            if (*(ulong*)&pPVar19->field_24 <= uVar20) {
                                                /* WARNING: Subroutine does not return */
                                                LogAssert("(index < m_Size)",
                                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                          "OSRS-OS1669-BOXR/libs/jtl/SharedArray.h",
                                                          299, "Index of %d outside range 0 to %d", uVar20,
                                                          *(ulong*)&pPVar19->field_24 - 1);
                                            }
                                            pAVar17 = (Array*)
                                                shared_ptr<Array<unsigned char, eastl::allocator>[]>::operator[](
                                                    local_70, uVar20);
                                            piVar15 = (int*)Array<int, eastl::allocator>::operator[](local_68, uVar20);
                                            iVar18 = *piVar15;
                                            iVar3 = (int)local_38;
                                            piVar15 = (int*)Array<int, eastl::allocator>::operator[](local_60, uVar20);
                                            pPVar19 = local_40;
                                            PlotLetterTrans(local_40, pAVar17, iVar3 + iVar18 + 1, *piVar15 + local_54,
                                                            iVar1, (int)local_48, local_d0, param_4);
                                        }
                                        if (*(ulong*)&pPVar19->field_24 <= uVar20) {
                                            /* WARNING: Subroutine does not return */
                                            LogAssert("(index < m_Size)",
                                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                      "OSRS-OS1669-BOXR/libs/jtl/SharedArray.h",
                                                      299, "Index of %d outside range 0 to %d", uVar20,
                                                      *(ulong*)&pPVar19->field_24 - 1);
                                        }
                                        pAVar17 =
                                            (Array*)shared_ptr<Array<unsigned char, eastl::allocator>[]>::operator[](
                                                local_70, uVar20);
                                        piVar15 = (int*)Array<int, eastl::allocator>::operator[](local_68, uVar20);
                                        iVar18 = *piVar15 + (int)local_38;
                                        piVar15 = (int*)Array<int, eastl::allocator>::operator[](local_60, uVar20);
                                        pPVar19 = local_40;
                                        PlotLetterTrans(local_40, pAVar17, iVar18, *piVar15 + (int)local_78, iVar1,
                                                        (int)local_48, local_e0, param_4);
                                    }
                                } else {
                                    if (m_currentShadow != -1) {
                                        cVar8 = param_9->empty();
                                        uVar2 = *(ulong*)&pPVar19->field_24;
                                        if (cVar8 == '\0') {
                                            if (uVar2 <= uVar20) {
                                                /* WARNING: Subroutine does not return */
                                                LogAssert("(index < m_Size)",
                                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                          "OSRS-OS1669-BOXR/libs/jtl/SharedArray.h",
                                                          299, "Index of %d outside range 0 to %d", uVar20, uVar2 - 1);
                                            }
                                            pAVar17 = (Array*)
                                                shared_ptr<Array<unsigned char, eastl::allocator>[]>::operator[](
                                                    local_70, uVar20);
                                            piVar15 = (int*)Array<int, eastl::allocator>::operator[](local_68, uVar20);
                                            iVar18 = *piVar15;
                                            iVar3 = (int)local_38;
                                            piVar15 = (int*)Array<int, eastl::allocator>::operator[](local_60, uVar20);
                                            pPVar19 = local_40;
                                            PlotLetterScanline(local_40, pAVar17, iVar3 + iVar18 + 1,
                                                               *piVar15 + local_54, iVar1, (int)local_48,
                                                               m_currentShadow, param_5, param_6, param_7, param_8,
                                                               param_9, param_4);
                                        } else {
                                            if (uVar2 <= uVar20) {
                                                /* WARNING: Subroutine does not return */
                                                LogAssert("(index < m_Size)",
                                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                          "OSRS-OS1669-BOXR/libs/jtl/SharedArray.h",
                                                          299, "Index of %d outside range 0 to %d", uVar20, uVar2 - 1);
                                            }
                                            pAVar17 = (Array*)
                                                shared_ptr<Array<unsigned char, eastl::allocator>[]>::operator[](
                                                    local_70, uVar20);
                                            piVar15 = (int*)Array<int, eastl::allocator>::operator[](local_68, uVar20);
                                            iVar18 = *piVar15;
                                            iVar3 = (int)local_38;
                                            piVar15 = (int*)Array<int, eastl::allocator>::operator[](local_60, uVar20);
                                            pPVar19 = local_40;
                                            PlotLetter(local_40, pAVar17, iVar3 + iVar18 + 1, *piVar15 + local_54,
                                                       iVar1, (int)local_48, m_currentShadow, param_4);
                                        }
                                    }
                                    cVar8 = param_9->empty();
                                    uVar2 = *(ulong*)&pPVar19->field_24;
                                    if (cVar8 == '\0') {
                                        if (uVar2 <= uVar20) {
                                            /* WARNING: Subroutine does not return */
                                            LogAssert("(index < m_Size)",
                                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                      "OSRS-OS1669-BOXR/libs/jtl/SharedArray.h",
                                                      299, "Index of %d outside range 0 to %d", uVar20, uVar2 - 1);
                                        }
                                        pAVar17 =
                                            (Array*)shared_ptr<Array<unsigned char, eastl::allocator>[]>::operator[](
                                                local_70, uVar20);
                                        piVar15 = (int*)Array<int, eastl::allocator>::operator[](local_68, uVar20);
                                        iVar18 = *piVar15 + (int)local_38;
                                        piVar15 = (int*)Array<int, eastl::allocator>::operator[](local_60, uVar20);
                                        pPVar19 = local_40;
                                        PlotLetterScanline(local_40, pAVar17, iVar18, *piVar15 + (int)local_78, iVar1,
                                                           (int)local_48, m_currentCol, param_5, param_6, param_7,
                                                           param_8, param_9, param_4);
                                    } else {
                                        if (uVar2 <= uVar20) {
                                            /* WARNING: Subroutine does not return */
                                            LogAssert("(index < m_Size)",
                                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                      "OSRS-OS1669-BOXR/libs/jtl/SharedArray.h",
                                                      299, "Index of %d outside range 0 to %d", uVar20, uVar2 - 1);
                                        }
                                        pAVar17 =
                                            (Array*)shared_ptr<Array<unsigned char, eastl::allocator>[]>::operator[](
                                                local_70, uVar20);
                                        piVar15 = (int*)Array<int, eastl::allocator>::operator[](local_68, uVar20);
                                        iVar18 = *piVar15 + (int)local_38;
                                        piVar15 = (int*)Array<int, eastl::allocator>::operator[](local_60, uVar20);
                                        pPVar19 = local_40;
                                        PlotLetter(local_40, pAVar17, iVar18, *piVar15 + (int)local_78, iVar1,
                                                   (int)local_48, m_currentCol, param_4);
                                    }
                                }
                            }
                            piVar15 = (int*)std::array<int, 256ul>::operator[](local_98, uVar20);
                            iVar1 = *piVar15;
                            if (m_strikeout != -1) {
                                (**(code**)(param_4->field_0 + 56))(
                                    param_4, local_38, (int)((double)pPVar19->field_0 * 0.7) + (int)local_78, iVar1);
                            }
                            iVar18 = (int)local_38;
                            local_48 = uVar20;
                            if (m_underline != -1) {
                                (**(code**)(param_4->field_0 + 56))(param_4, local_38 & 4294967295,
                                                                    pPVar19->field_0 + local_54, iVar1);
                            }
                            local_38 = (ulong)(uint)(iVar1 + iVar18);
                            uVar20 = local_b0;
                        }
                    }
                }
            LAB_1002bf8c3:
            } while (local_90 < uVar20);
        }
    }

    // 0x1002c0050, 208 bytes, placed by class name
    // PixfontGeneric::DrawStringTrans(eastl::string const&, int, int, int, int, int, graphics::Pix2D&)
    void PixfontGeneric::DrawStringTrans(basic_string* param_1, int param_2, int param_3, int param_4, int param_5,
                                         int param_6, Pix2D* param_7) {
        Array<int, eastl::allocator> local_68[24];
        Array<int, eastl::allocator> local_50[28];

        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() !=
            0) {
            ResetState((PixfontGeneric*)param_1, param_4, param_5);
            m_alpha = param_6;
            Array<int, eastl::allocator>::Array(local_68);
            Array<int, eastl::allocator>::Array(local_50);
            DrawStringInner(this, param_1, param_2, param_3, param_7, 0, 0, 0, (Array*)local_68, (Array*)local_50);
            local_50->~Array();
            local_68->~Array();
        }
    }

    // 0x1002c0120, 96 bytes, placed by class name
    // PixfontGeneric::DrawStringUpwards(eastl::string const&, int, int, int, int, graphics::Pix2D&)
    void PixfontGeneric::DrawStringUpwards(basic_string* param_1, int param_2, int param_3, int param_4, int param_5,
                                           Pix2D* param_6) {
        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() !=
            0) {
            ResetState((PixfontGeneric*)param_1, param_4, param_5);
            DrawStringUpwardsInner(this, param_1, param_2, param_3, param_6);
        }
    }

    // 0x1002c0180, 1472 bytes, placed by class name
    // PixfontGeneric::DrawStringUpwardsInner(eastl::string const&, int, int, graphics::Pix2D&)
    void PixfontGeneric::DrawStringUpwardsInner(basic_string* param_1, int param_2, int param_3, Pix2D* param_4) {
        bool bVar1;
        uchar uVar2;
        uchar uVar3;
        bool bVar4;
        byte bVar5;
        wchar16 wVar6;
        char* pcVar7;
        long lVar8;
        int* piVar9;
        Array* pAVar10;
        char* extraout_RDX;
        char* extraout_RDX_00;
        int iVar11;
        PixfontGeneric* pPVar12;
        uint uVar13;
        ulong uVar14;
        ulong uVar15;
        undefined1 local_100[32];
        TransparentFontColour local_e0[16];
        TransparentFontColour local_d0[16];
        char* local_c0;
        ulong local_b8;
        Array<int, eastl::allocator>* local_a8;
        array<int, 256ul>* local_a0;
        Array<int, eastl::allocator>* local_98;
        ulong local_90;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_88;
        Array* local_80;
        PixfontGeneric* local_78;
        ulong local_70;
        shared_ptr<Array<unsigned char, eastl::allocator>[]>* local_68;
        Array<int, eastl::allocator>* local_60;
        Array<int, eastl::allocator>* local_58;
        int local_44;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        local_70 = (ulong)(uint)(param_2 - field_0);
        local_78 = this;
        local_e0 = (TransparentFontColour[16])PrecalculateTransparentFontColour(m_alpha, m_currentCol);
        local_d0 = (TransparentFontColour[16])PrecalculateTransparentFontColour(m_alpha, m_currentShadow);
        pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        lVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::end();
        local_90 = 0;
        local_b8 = lVar8 - (long)pcVar7;
        if (local_b8 != 0) {
            local_a8 = (Array<int, eastl::allocator>*)&local_78->field_1072;
            local_a0 = (array<int, 256ul>*)&local_78->field_48;
            local_98 = (Array<int, eastl::allocator>*)&local_78->field_1096;
            local_88 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&local_78->field_1168;
            local_68 = (shared_ptr<Array<unsigned char, eastl::allocator>[]>*)&local_78->field_32;
            local_60 = (Array<int, eastl::allocator>*)&local_78->field_1144;
            local_40 = (int)local_70 + 1;
            local_58 = (Array<int, eastl::allocator>*)&local_78->field_1120;
            uVar15 = 4294967295;
            uVar13 = 4294967295;
            local_c0 = pcVar7;
            do {
                uVar14 = local_90;
                wVar6 = stringtools::GetUTF8NextChar16(local_c0, &local_90);
                uVar3 = stringtools::WideToCP1252(wVar6);
                if (uVar3 != '\0') {
                    if (uVar3 == '<') {
                        uVar15 = uVar14 & 4294967295;
                    } else {
                        if ((uVar3 == '>') && ((int)uVar15 != -1)) {
                            local_3c = param_3;
                            eastl::string::substr((ulong)local_100, (ulong)param_1);
                            bVar4 = eastl::operator==((eastl*)local_100, (basic_string*)"lt", extraout_RDX);
                            bVar1 = true;
                            uVar2 = '<';
                            if (!bVar4) {
                                pPVar12 = (PixfontGeneric*)local_100;
                                bVar4 = eastl::operator==((eastl*)local_100, (basic_string*)"gt", extraout_RDX_00);
                                uVar2 = '>';
                                if (!bVar4) {
                                    UpdateState(pPVar12, (basic_string*)local_100);
                                    bVar1 = false;
                                    uVar2 = uVar3;
                                }
                            }
                            uVar3 = uVar2;
                            local_100->~basic_string();
                            uVar15 = 4294967295;
                            param_3 = local_3c;
                            if (!bVar1)
                                goto LAB_1002c0293;
                        }
                        bVar5 = SanitiseChar(uVar3);
                        if ((int)uVar15 == -1) {
                            uVar14 = (ulong)(uint)bVar5;
                            piVar9 = (int*)Array<int, eastl::allocator>::operator[](local_a8, uVar14);
                            local_38 = *piVar9;
                            piVar9 = (int*)std::array<int, 256ul>::operator[](local_a0, uVar14);
                            local_44 = *piVar9;
                            piVar9 = (int*)Array<int, eastl::allocator>::operator[](local_98, uVar14);
                            local_34 = *piVar9;
                            lVar8 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_88);
                            if ((lVar8 != 0) && (uVar13 != 4294967295)) {
                                pcVar7 = (char*)Array<signed char, eastl::allocator>::operator[](
                                    (Array<signed char, eastl::allocator>*)local_88,
                                    (long)(int)((uint)bVar5 | uVar13 << 8));
                                param_3 = param_3 - *pcVar7;
                            }
                            pPVar12 = local_78;
                            param_3 = param_3 - local_44;
                            if (bVar5 == 32) {
                                if (0 < m_extraSpaceWidth) {
                                    param_3 = param_3 - ((int)(m_extraSpaceWidth + m_extraSpacePos) >> 8);
                                    m_extraSpacePos = m_extraSpaceWidth + m_extraSpacePos & 255;
                                }
                            } else if (m_alpha < 255) {
                                if (0 < m_alpha) {
                                    local_3c = param_3;
                                    if (m_currentShadow != -1) {
                                        if (*(ulong*)&local_78->field_24 <= uVar14) {
                                            /* WARNING: Subroutine does not return */
                                            LogAssert("(index < m_Size)",
                                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                      "OSRS-OS1669-BOXR/libs/jtl/SharedArray.h",
                                                      299, "Index of %d outside range 0 to %d", uVar14,
                                                      *(ulong*)&local_78->field_24 - 1);
                                        }
                                        pAVar10 =
                                            (Array*)shared_ptr<Array<unsigned char, eastl::allocator>[]>::operator[](
                                                local_68, uVar14);
                                        piVar9 = (int*)Array<int, eastl::allocator>::operator[](local_60, uVar14);
                                        iVar11 = *piVar9 + local_40;
                                        piVar9 = (int*)Array<int, eastl::allocator>::operator[](local_58, uVar14);
                                        pPVar12 = local_78;
                                        PlotLetterUpwardsTrans(local_78, pAVar10, iVar11, (local_3c - *piVar9) + 1,
                                                               local_34, local_38, local_d0, param_4);
                                    }
                                    if (*(ulong*)&pPVar12->field_24 <= uVar14) {
                                        /* WARNING: Subroutine does not return */
                                        LogAssert("(index < m_Size)",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/jtl/SharedArray.h",
                                                  299, "Index of %d outside range 0 to %d", uVar14,
                                                  *(ulong*)&pPVar12->field_24 - 1);
                                    }
                                    pAVar10 = (Array*)shared_ptr<Array<unsigned char, eastl::allocator>[]>::operator[](
                                        local_68, uVar14);
                                    piVar9 = (int*)Array<int, eastl::allocator>::operator[](local_60, uVar14);
                                    iVar11 = *piVar9 + (int)local_70;
                                    piVar9 = (int*)Array<int, eastl::allocator>::operator[](local_58, uVar14);
                                    param_3 = local_3c;
                                    pPVar12 = local_78;
                                    PlotLetterUpwardsTrans(local_78, pAVar10, iVar11, local_3c - *piVar9, local_34,
                                                           local_38, local_e0, param_4);
                                }
                            } else {
                                if (m_currentShadow != -1) {
                                    if (*(ulong*)&local_78->field_24 <= uVar14) {
                                        /* WARNING: Subroutine does not return */
                                        LogAssert("(index < m_Size)",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/jtl/SharedArray.h",
                                                  299, "Index of %d outside range 0 to %d", uVar14,
                                                  *(ulong*)&local_78->field_24 - 1);
                                    }
                                    local_80 = (Array*)shared_ptr<Array<unsigned char, eastl::allocator>[]>::operator[](
                                        local_68, uVar14);
                                    piVar9 = (int*)Array<int, eastl::allocator>::operator[](local_60, uVar14);
                                    iVar11 = *piVar9 + local_40;
                                    piVar9 = (int*)Array<int, eastl::allocator>::operator[](local_58, uVar14);
                                    PlotLetterUpwards(pPVar12, local_80, iVar11, (param_3 - *piVar9) + 1, local_34,
                                                      local_38, m_currentShadow, param_4);
                                }
                                if (*(ulong*)&pPVar12->field_24 <= uVar14) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", uVar14,
                                              *(ulong*)&pPVar12->field_24 - 1);
                                }
                                local_80 = (Array*)shared_ptr<Array<unsigned char, eastl::allocator>[]>::operator[](
                                    local_68, uVar14);
                                piVar9 = (int*)Array<int, eastl::allocator>::operator[](local_60, uVar14);
                                iVar11 = *piVar9 + (int)local_70;
                                piVar9 = (int*)Array<int, eastl::allocator>::operator[](local_58, uVar14);
                                PlotLetterUpwards(pPVar12, local_80, iVar11, param_3 - *piVar9, local_34, local_38,
                                                  m_currentCol, param_4);
                            }
                            if (m_strikeout != -1) {
                                (**(code**)(param_4->field_0 + 72))(
                                    param_4, (int)((double)pPVar12->field_0 * 0.7) + (int)local_70, param_3, local_44);
                            }
                            if (m_underline != -1) {
                                (**(code**)(param_4->field_0 + 72))(param_4, pPVar12->field_0 + local_40, param_3,
                                                                    local_44);
                            }
                            uVar13 = (uint)bVar5;
                        }
                    }
                }
            LAB_1002c0293:
            } while (local_90 < local_b8);
        }
    }

    // 0x1002c0740, 224 bytes, placed by class name
    // PixfontGeneric::RightString(eastl::string const&, int, int, int, int, graphics::Pix2D&)
    void PixfontGeneric::RightString(basic_string* param_1, int param_2, int param_3, int param_4, int param_5,
                                     Pix2D* param_6) {
        int iVar1;
        Array<int, eastl::allocator> local_68[24];
        Array<int, eastl::allocator> local_50[28];

        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() !=
            0) {
            ResetState((PixfontGeneric*)param_1, param_4, param_5);
            iVar1 = StringWid(this, param_1);
            Array<int, eastl::allocator>::Array(local_50);
            Array<int, eastl::allocator>::Array(local_68);
            DrawStringInner(this, param_1, param_2 - iVar1, param_3, param_6, 0, 0, 0, (Array*)local_50,
                            (Array*)local_68);
            local_68->~Array();
            local_50->~Array();
        }
    }

    // 0x1002c0820, 240 bytes, placed by class name
    // PixfontGeneric::RightStringTrans(eastl::string const&, int, int, int, int, int, graphics::Pix2D&)
    void PixfontGeneric::RightStringTrans(basic_string* param_1, int param_2, int param_3, int param_4, int param_5,
                                          int param_6, Pix2D* param_7) {
        int iVar1;
        Array<int, eastl::allocator> local_68[24];
        Array<int, eastl::allocator> local_50[28];

        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() !=
            0) {
            ResetState((PixfontGeneric*)param_1, param_4, param_5);
            m_alpha = param_6;
            iVar1 = StringWid(this, param_1);
            Array<int, eastl::allocator>::Array(local_50);
            Array<int, eastl::allocator>::Array(local_68);
            DrawStringInner(this, param_1, param_2 - iVar1, param_3, param_7, 0, 0, 0, (Array*)local_50,
                            (Array*)local_68);
            local_68->~Array();
            local_50->~Array();
        }
    }

    // 0x1002c0910, 112 bytes, placed by class name
    // PixfontGeneric::RightStringUpwards(eastl::string const&, int, int, int, int, graphics::Pix2D&)
    void PixfontGeneric::RightStringUpwards(basic_string* param_1, int param_2, int param_3, int param_4, int param_5,
                                            Pix2D* param_6) {
        int iVar2;

        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() !=
            0) {
            ResetState((PixfontGeneric*)param_1, param_4, param_5);
            iVar2 = StringWid(this, param_1);
            DrawStringUpwardsInner(this, param_1, param_2, param_3 + iVar2, param_6);
        }
    }

    // 0x1002c0980, 240 bytes, placed by class name
    // PixfontGeneric::CentreString(eastl::string const&, int, int, int, int, graphics::Pix2D&)
    void PixfontGeneric::CentreString(basic_string* param_1, int param_2, int param_3, int param_4, int param_5,
                                      Pix2D* param_6) {
        int iVar1;
        Array<int, eastl::allocator> local_68[24];
        Array<int, eastl::allocator> local_50[28];

        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() !=
            0) {
            ResetState((PixfontGeneric*)param_1, param_4, param_5);
            iVar1 = StringWid(this, param_1);
            Array<int, eastl::allocator>::Array(local_50);
            Array<int, eastl::allocator>::Array(local_68);
            DrawStringInner(this, param_1, param_2 - iVar1 / 2, param_3, param_6, 0, 0, 0, (Array*)local_50,
                            (Array*)local_68);
            local_68->~Array();
            local_50->~Array();
        }
    }

    // 0x1002c0a70, 256 bytes, placed by class name
    // PixfontGeneric::CentreStringTrans(eastl::string const&, int, int, int, int, int, graphics::Pix2D&)
    void PixfontGeneric::CentreStringTrans(basic_string* param_1, int param_2, int param_3, int param_4, int param_5,
                                           int param_6, Pix2D* param_7) {
        int iVar1;
        Array<int, eastl::allocator> local_68[24];
        Array<int, eastl::allocator> local_50[28];

        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() !=
            0) {
            ResetState((PixfontGeneric*)param_1, param_4, param_5);
            m_alpha = param_6;
            iVar1 = StringWid(this, param_1);
            Array<int, eastl::allocator>::Array(local_50);
            Array<int, eastl::allocator>::Array(local_68);
            DrawStringInner(this, param_1, param_2 - iVar1 / 2, param_3, param_7, 0, 0, 0, (Array*)local_50,
                            (Array*)local_68);
            local_68->~Array();
            local_50->~Array();
        }
    }

    // 0x1002c0b70, 112 bytes, placed by class name
    // PixfontGeneric::CentreStringUpwards(eastl::string const&, int, int, int, int, graphics::Pix2D&)
    void PixfontGeneric::CentreStringUpwards(basic_string* param_1, int param_2, int param_3, int param_4, int param_5,
                                             Pix2D* param_6) {
        int iVar2;

        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() !=
            0) {
            ResetState((PixfontGeneric*)param_1, param_4, param_5);
            iVar2 = StringWid(this, param_1);
            DrawStringUpwardsInner(this, param_1, param_2, iVar2 / 2 + param_3, param_6);
        }
    }

    // 0x1002c0be0, 144 bytes, placed by class name
    // PixfontGeneric::CentreStringScanline(eastl::string const&, int, int, int, int, graphics::Pix2D&, int, int, int, Array<int, eastl::allocator> const&, Array<int, eastl::allocator> const&)
    void PixfontGeneric::CentreStringScanline(basic_string* param_1, int param_2, int param_3, int param_4, int param_5,
                                              Pix2D* param_6, int param_7, int param_8, int param_9, Array* param_10,
                                              Array* param_11) {
        int iVar1;

        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() !=
            0) {
            ResetState((PixfontGeneric*)param_1, param_4, param_5);
            iVar1 = StringWid(this, param_1);
            DrawStringInner(this, param_1, param_2 - iVar1 / 2, param_3, param_6, param_7, param_8, param_9, param_10,
                            param_11);
        }
    }

    // 0x1002c0c70, 224 bytes, placed by class name
    // PixfontGeneric::JustifyString(eastl::string&, int, int, int, int, int, graphics::Pix2D&)
    void PixfontGeneric::JustifyString(basic_string* param_1, int param_2, int param_3, int param_4, int param_5,
                                       int param_6, Pix2D* param_7) {
        Array<int, eastl::allocator> local_68[24];
        Array<int, eastl::allocator> local_50[28];

        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() !=
            0) {
            ResetState((PixfontGeneric*)param_1, param_4, param_5);
            CalculateSpaceWidth(this, param_1, param_6);
            Array<int, eastl::allocator>::Array(local_68);
            Array<int, eastl::allocator>::Array(local_50);
            DrawStringInner(this, param_1, param_2, param_3, param_7, 0, 0, 0, (Array*)local_68, (Array*)local_50);
            local_50->~Array();
            local_68->~Array();
        }
    }

    // 0x1002c0d50, 208 bytes, placed by class name
    // PixfontGeneric::CalculateSpaceWidth(eastl::string&, int)
    void PixfontGeneric::CalculateSpaceWidth(basic_string* param_1, int param_2) {
        char cVar1;
        bool bVar2;
        int iVar3;
        ulong uVar5;
        char* pcVar6;
        int iVar7;
        bool bVar8;
        ulong uVar9;

        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() ==
            0) {
            iVar7 = 0;
        } else {
            iVar7 = 0;
            bVar8 = false;
            uVar5 = 0;
            uVar9 = 1;
            do {
                pcVar6 = (char*)param_1->at(uVar5);
                cVar1 = *pcVar6;
                if (cVar1 == '<') {
                    bVar8 = true;
                } else if (cVar1 == '>') {
                    bVar8 = false;
                } else {
                    iVar7 = iVar7 + (uint)(cVar1 == ' ' && !bVar8);
                }
                uVar5 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                bVar2 = uVar9 < uVar5;
                uVar5 = uVar9;
                uVar9 = (ulong)((int)uVar9 + 1);
            } while (bVar2);
        }
        if (0 < iVar7) {
            iVar3 = StringWid(this, param_1);
            m_extraSpaceWidth = ((param_2 - iVar3) * 256) / iVar7;
        }
    }

    // 0x1002c0e20, 1328 bytes, placed by class name
    // PixfontGeneric::DrawStringMultiline(eastl::string const&, int, int, int, int, int, int, int, int, int, int, graphics::Pix2D&)
    ulong PixfontGeneric::DrawStringMultiline(basic_string* param_1, int param_2, int param_3, int param_4, int param_5,
                                              int param_6, int param_7, int param_8, int param_9, int param_10,
                                              int param_11, Pix2D* param_12) {
        uint uVar1;
        int iVar2;
        basic_string* pbVar4;
        basic_string* pbVar5;
        undefined4 in_register_00000014;
        undefined4 in_register_00000084;
        int iVar6;
        ulong uVar7;
        Array<int, eastl::allocator> local_b8[24];
        ulong local_a0;
        ulong local_98;
        ulong local_90;
        int local_84;
        undefined4 local_80[6];
        undefined8 local_68;
        undefined4* local_60;
        undefined8 local_58;
        undefined8 local_48;
        ulong local_40;

        local_68 = CONCAT44(in_register_00000084, param_4);
        local_48 = CONCAT44(in_register_00000014, param_2);
        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() ==
            0) {
            local_90 = 0;
        } else {
            ResetState((PixfontGeneric*)param_1, param_6, param_7);
            m_alpha = param_8;
            if (param_11 == 0) {
                param_11 = ((PixfontGeneric*)this)->field_0;
            }
            uVar7 = (ulong)(uint)param_11;
            local_80[0] = (undefined4)local_68;
            local_60 = local_80;
            local_58 = 1;
            Array<int, eastl::allocator>::Array(local_b8, (initializer_list*)&local_60);
            local_40 = uVar7;
            if ((param_5 < ((PixfontGeneric*)this)->field_4 + param_11 + ((PixfontGeneric*)this)->field_8) &&
                (param_5 < param_11 * 2)) {
                local_b8->clear();
            }
            uVar1 = SplitString((PixfontGeneric*)this, param_1, (Array*)local_b8, (Array*)&m_lines);
            local_90 = (ulong)uVar1;
            iVar6 = 1;
            if (uVar1 != 1 || param_10 != 3) {
                iVar6 = param_10;
            }
            if (iVar6 == 0) {
                iVar6 = param_3 + ((PixfontGeneric*)this)->field_4;
            } else if (iVar6 == 1) {
                iVar6 = param_3 + ((PixfontGeneric*)this)->field_4 +
                        (int)(((1 - uVar1) * (int)local_40 + param_5) -
                              (((PixfontGeneric*)this)->field_4 + ((PixfontGeneric*)this)->field_8)) /
                            2;
            } else if (iVar6 == 2) {
                iVar6 = (param_5 + param_3 + (1 - uVar1) * (int)local_40) - ((PixfontGeneric*)this)->field_8;
            } else {
                iVar6 = (int)(((1 - uVar1) * (int)local_40 + param_5) -
                              (((PixfontGeneric*)this)->field_8 + ((PixfontGeneric*)this)->field_4)) /
                        (int)(uVar1 + 1);
                iVar2 = 0;
                if (-1 < iVar6) {
                    iVar2 = iVar6;
                }
                iVar6 = param_3 + ((PixfontGeneric*)this)->field_4 + iVar2;
                local_40 = (ulong)(uint)(iVar2 + (int)local_40);
            }
            if (0 < (int)uVar1) {
                local_84 = (int)local_68 + (int)local_48;
                local_98 = (ulong)(uVar1 - 1);
                uVar7 = 0;
                local_a0 = local_90;
                do {
                    if (param_9 == 2) {
                        pbVar4 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
                            (Array<eastl::string, eastl::allocator>*)&m_lines, uVar7);
                        pbVar5 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
                            (Array<eastl::string, eastl::allocator>*)&m_lines, uVar7);
                        iVar2 = StringWid((PixfontGeneric*)this, pbVar5);
                        new (&local_60) Array<int, eastl::allocator>();
                        new (local_80) Array<int, eastl::allocator>();
                        DrawStringInner((PixfontGeneric*)this, pbVar4, local_84 - iVar2, iVar6, param_12, 0, 0, 0,
                                        (Array*)&local_60, (Array*)local_80);
                    LAB_1002c0ff0:
                        local_80->~Array();
                    LAB_1002c0ffb:
                        local_60.~Array();
                    } else {
                        if (param_9 == 1) {
                            pbVar4 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
                                (Array<eastl::string, eastl::allocator>*)&m_lines, uVar7);
                            pbVar5 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
                                (Array<eastl::string, eastl::allocator>*)&m_lines, uVar7);
                            iVar2 = StringWid((PixfontGeneric*)this, pbVar5);
                            new (&local_60) Array<int, eastl::allocator>();
                            new (local_80) Array<int, eastl::allocator>();
                            DrawStringInner((PixfontGeneric*)this, pbVar4, ((int)local_68 - iVar2) / 2 + (int)local_48,
                                            iVar6, param_12, 0, 0, 0, (Array*)&local_60, (Array*)local_80);
                            goto LAB_1002c0ff0;
                        }
                        if (param_9 == 0) {
                            pbVar4 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
                                (Array<eastl::string, eastl::allocator>*)&m_lines, uVar7);
                            new (&local_60) Array<int, eastl::allocator>();
                            new (local_80) Array<int, eastl::allocator>();
                            DrawStringInner((PixfontGeneric*)this, pbVar4, (int)local_48, iVar6, param_12, 0, 0, 0,
                                            (Array*)&local_60, (Array*)local_80);
                        LAB_1002c1227:
                            local_80->~Array();
                            goto LAB_1002c0ffb;
                        }
                        if (local_98 == uVar7) {
                            pbVar4 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
                                (Array<eastl::string, eastl::allocator>*)&m_lines, uVar7);
                            new (&local_60) Array<int, eastl::allocator>();
                            new (local_80) Array<int, eastl::allocator>();
                            DrawStringInner((PixfontGeneric*)this, pbVar4, (int)local_48, iVar6, param_12, 0, 0, 0,
                                            (Array*)&local_60, (Array*)local_80);
                            goto LAB_1002c1227;
                        }
                        pbVar4 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
                            (Array<eastl::string, eastl::allocator>*)&m_lines, uVar7);
                        CalculateSpaceWidth((PixfontGeneric*)this, pbVar4, (int)local_68);
                        pbVar4 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
                            (Array<eastl::string, eastl::allocator>*)&m_lines, uVar7);
                        new (&local_60) Array<int, eastl::allocator>();
                        new (local_80) Array<int, eastl::allocator>();
                        DrawStringInner((PixfontGeneric*)this, pbVar4, (int)local_48, iVar6, param_12, 0, 0, 0,
                                        (Array*)&local_60, (Array*)local_80);
                        local_80->~Array();
                        local_60.~Array();
                        m_extraSpaceWidth = 0;
                    }
                    iVar6 = iVar6 + (int)local_40;
                    uVar7 = uVar7 + 1;
                } while (local_a0 != uVar7);
            }
            local_b8->~Array();
        }
        return local_90;
    }

    // 0x1002c1350, 720 bytes, placed by class name
    // PixfontGeneric::DrawTextRunSlice(jag::graphics::TextRunSlice const&, int, int, unsigned int, unsigned int, graphics::Pix2D&, int)
    undefined8 PixfontGeneric::DrawTextRunSlice(TextRunSlice* param_1, int param_2, int param_3, uint param_4,
                                                uint param_5, Pix2D* param_6, int param_7) {
        undefined1* this_00;
        undefined1* this_01;
        int iVar1;
        char cVar2;
        byte bVar3;
        long lVar4;
        long lVar5;
        int* piVar6;
        Array* pAVar7;
        wchar16 wVar9;
        int iVar10;
        PixfontGeneric* pPVar11;
        ulong uVar12;
        int iVar13;
        int* piVar14;
        int* piVar15;
        undefined8 local_70;
        shared_ptr<Array<unsigned char, eastl::allocator>[]>* local_68;
        Array<int, eastl::allocator>* local_60;
        Array<int, eastl::allocator>* local_58;
        int local_4c;
        int local_48;
        int local_44;
        PixfontGeneric* local_40;
        int local_34;

        pPVar11 = (PixfontGeneric*)param_1;
        local_40 = this;
        local_34 = param_3;
        cVar2 = param_1->IsEmpty();
        if (cVar2 == '\0') {
            ResetState(pPVar11, param_4, param_5);
            local_34 = local_34 - local_40->field_0;
            lVar4 = param_1->end();
            lVar5 = param_1->data();
            if (lVar4 != lVar5) {
                this_00 = &local_40->field_1072;
                this_01 = &local_40->field_1096;
                local_68 = (shared_ptr<Array<unsigned char, eastl::allocator>[]>*)&local_40->field_32;
                local_60 = (Array<int, eastl::allocator>*)&local_40->field_1120;
                local_58 = (Array<int, eastl::allocator>*)&local_40->field_1144;
                piVar15 = (int*)(lVar4 + 8);
                do {
                    if ((param_7 != -1) && (param_7 < *piVar15)) {
                        std::pair<int, int>::pair<true, false>((pair<int, int>*)&local_70, piVar15 + -1, piVar15);
                        return local_70;
                    }
                    wVar9 = *(wchar16*)(piVar15 + -2);
                    if (wVar9 != L'\n') {
                        cVar2 = param_1->ShouldHide((TextRunCharacter*)(piVar15 + -2));
                        if (cVar2 != '\0') {
                            wVar9 = L'*';
                        }
                        if (wVar9 != L'\t') {
                            bVar3 = SanitiseAndConvertWideChar(wVar9);
                            iVar10 = piVar15[-1] + param_2;
                            iVar13 = *piVar15 + local_34;
                            uVar12 = (ulong)bVar3;
                            piVar6 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)this_00, uVar12);
                            local_48 = *piVar6;
                            piVar6 = (int*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)this_01, uVar12);
                            local_44 = *piVar6;
                            pPVar11 = local_40;
                            if (m_currentShadow != -1) {
                                if (*(ulong*)&local_40->field_24 <= uVar12) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", uVar12,
                                              *(ulong*)&local_40->field_24 - 1);
                                }
                                pAVar7 = (Array*)shared_ptr<Array<unsigned char, eastl::allocator>[]>::operator[](
                                    local_68, uVar12);
                                piVar6 = (int*)Array<int, eastl::allocator>::operator[](local_60, uVar12);
                                local_4c = *piVar6 + iVar10 + 1;
                                piVar6 = (int*)Array<int, eastl::allocator>::operator[](local_58, uVar12);
                                pPVar11 = local_40;
                                PlotLetter(local_40, pAVar7, local_4c, iVar13 + *piVar6 + 1, local_48, local_44,
                                           m_currentShadow, param_6);
                            }
                            if (*(ulong*)&pPVar11->field_24 <= uVar12) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("(index < m_Size)",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/jtl/"
                                          "SharedArray.h",
                                          299, "Index of %d outside range 0 to %d", uVar12,
                                          *(ulong*)&pPVar11->field_24 - 1);
                            }
                            pAVar7 = (Array*)shared_ptr<Array<unsigned char, eastl::allocator>[]>::operator[](local_68,
                                                                                                              uVar12);
                            piVar6 = (int*)Array<int, eastl::allocator>::operator[](local_60, uVar12);
                            iVar1 = *piVar6;
                            piVar6 = (int*)Array<int, eastl::allocator>::operator[](local_58, uVar12);
                            PlotLetter(local_40, pAVar7, iVar10 + iVar1, iVar13 + *piVar6, local_48, local_44,
                                       m_currentCol, param_6);
                        }
                    }
                    piVar6 = (int*)param_1->data();
                    piVar14 = piVar15 + 1;
                    piVar15 = piVar15 + 3;
                } while (piVar14 != piVar6);
            }
        }
        return param_1->GetLastCursorPosition();
    }

    // 0x1002c1630, 192 bytes, placed by class name
    // PixfontGeneric::PlotLetter(Array<unsigned char, eastl::allocator> const&, int, int, int, int, int, graphics::Pix2D&)
    void PixfontGeneric::PlotLetter(Array* param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                    Pix2D* param_7) {
        int iVar1;
        int iVar2;
        uint uVar3;
        int iVar4;
        PixfontGeneric* this_00;
        int iVar5;
        int iVar6;
        int iVar7;

        iVar7 = param_7->field_8;
        iVar4 = param_7->field_16;
        iVar6 = iVar7 * param_3 + param_2;
        iVar2 = iVar4 - param_3;
        if (iVar2 == 0 || iVar4 < param_3) {
            iVar5 = 0;
        } else {
            param_5 = param_5 - iVar2;
            iVar5 = iVar2 * param_4;
            iVar6 = iVar6 + iVar2 * iVar7;
            param_3 = iVar4;
        }
        iVar7 = iVar7 - param_4;
        iVar4 = param_7->m_subClipping;
        iVar2 = param_7->field_20 - (param_3 + param_5);
        if (param_3 + param_5 <= param_7->field_20) {
            iVar2 = 0;
        }
        iVar1 = iVar4 - param_2;
        if (iVar1 == 0 || iVar4 < param_2) {
            iVar1 = 0;
        } else {
            param_4 = param_4 - iVar1;
            iVar5 = iVar5 + iVar1;
            iVar6 = iVar6 + iVar1;
            iVar7 = iVar7 + iVar1;
            param_2 = iVar4;
        }
        uVar3 = (param_2 + param_4) - param_7->field_28;
        this_00 = (PixfontGeneric*)(ulong)uVar3;
        if (uVar3 == 0 || param_2 + param_4 < (int)param_7->field_28) {
            this_00 = (PixfontGeneric*)0;
        }
        iVar4 = (int)this_00;
        if ((param_4 - iVar4 != 0 && iVar4 <= param_4) && (0 < iVar2 + param_5)) {
            PlotLetter(this_00, (SharedArray*)&param_7->field_32, param_1, param_6, iVar5, iVar6, param_4 - iVar4,
                       iVar2 + param_5, iVar7 + iVar4, iVar1 + iVar4);
        }
    }

    // 0x1002c16f0, 352 bytes, placed by neighbouring functions
    // ColourPatternToPerCharacterArray(eastl::vector<int, eastl::allocator>, unsigned long)
    jstring* ColourPatternToPerCharacterArray(vector<unsigned int, eastl::allocator>* param_2, ulong param_3) {
        undefined4 uVar1;
        ulong uVar2;
        ulong uVar3;
        undefined4* puVar4;
        float fVar5;
        Array<int, eastl::allocator> local_58[24];
        float local_38;

        if (param_3 == 0) {
            new (this) Array<int, eastl::allocator>();
        } else {
            Array<int, eastl::allocator>::Array(local_58, param_3);
            uVar2 = eastl::vector<unsigned int, eastl::allocator>::size(param_2);
            local_38 = (float)uVar2;
            uVar2 = 0;
            do {
                fVar5 = ((float)uVar2 * local_38) / (float)param_3;
                uVar3 = (ulong)fVar5;
                puVar4 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                    (vector<int, eastl::allocator>*)param_2, (long)(fVar5 - 9.223372e+18) & (long)uVar3 >> 63 | uVar3);
                uVar1 = *puVar4;
                puVar4 = (undefined4*)Array<int, eastl::allocator>::operator[](local_58, uVar2);
                this = (jstring*)this;
                *puVar4 = uVar1;
                uVar2 = uVar2 + 1;
            } while (param_3 != uVar2);
            new ((jstring*)this) Array<int, eastl::allocator>(local_58);
            local_58->~Array();
        }
        return this;
    }

    // 0x1002c1850, 272 bytes, placed by class name
    // PixfontGeneric::DrawStringColourPattern(eastl::string const&, int, int, int, int, eastl::vector<int, eastl::allocator> const&, graphics::Pix2D&)
    void PixfontGeneric::DrawStringColourPattern(basic_string* param_1, int param_2, int param_3, int param_4,
                                                 int param_5, vector* param_6, Pix2D* param_7) {
        long lVar1;
        undefined8 uVar2;
        vector<int, eastl::allocator> local_88[32];
        jstring local_68[24];
        Array<int, eastl::allocator> local_50[24];

        lVar1 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (lVar1 != 0) {
            ResetState((PixfontGeneric*)param_1, param_4, param_5);
            Array<int, eastl::allocator>::Array(local_50);
            lVar1 = param_6->size();
            if (lVar1 != 0) {
                eastl::vector<int, eastl::allocator>::vector(local_88, param_6);
                uVar2 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                ColourPatternToPerCharacterArray(local_68, local_88, uVar2);
                Array<int, eastl::allocator>::operator=(local_50, (Array*)local_68);
                local_68->~Array();
                eastl::vector<int, eastl::allocator>::~vector(local_88);
            }
            DrawStringInnerCustomOffsetsAndColours(this, param_1, param_2, param_3, (Array*)local_50, (Array*)&m_empty,
                                                   (Array*)&m_empty, param_7);
            local_50->~Array();
        }
    }

    // 0x1002c1960, 2192 bytes, placed by class name
    // PixfontGeneric::DrawStringInnerCustomOffsetsAndColours(eastl::string const&, int, int, Array<int, eastl::allocator>&, Array<int, eastl::allocator>&, Array<int, eastl::allocator>&, graphics::Pix2D&)
    void PixfontGeneric::DrawStringInnerCustomOffsetsAndColours(basic_string* param_1, int param_2, int param_3,
                                                                Array* param_4, Array* param_5, Array* param_6,
                                                                Pix2D* param_7) {
        uchar uVar1;
        bool bVar2;
        bool bVar3;
        char cVar4;
        byte bVar5;
        wchar16 wVar6;
        int iVar7;
        uint uVar8;
        char* pcVar9;
        char* pcVar10;
        undefined4* puVar11;
        ulong uVar12;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        Array<graphics::Pix8, eastl::allocator>* this_02;
        undefined8 uVar13;
        undefined8 uVar14;
        long lVar15;
        char* pcVar16;
        int* piVar17;
        ulong uVar18;
        uint* puVar19;
        int iVar20;
        ulong uVar21;
        undefined4 in_register_00000014;
        char* extraout_RDX;
        char* extraout_RDX_00;
        int iVar22;
        PixfontGeneric* pPVar23;
        ulong uVar24;
        undefined1 auVar25[16];
        eastl local_148[32];
        basic_string local_128[32];
        TransparentFontColour local_108[16];
        char* local_f8;
        Array<int, eastl::allocator>* local_e0;
        Array<int, eastl::allocator>* local_d8;
        array<int, 256ul>* local_d0;
        TransparentFontColour local_c8[16];
        ulong local_b8;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_b0;
        Array* local_a8;
        ulong local_98;
        shared_ptr<Array<unsigned char, eastl::allocator>[]>* local_90;
        Array<int, eastl::allocator>* local_88;
        Array<int, eastl::allocator>* local_80;
        Array* local_78;
        ulong local_70;
        int local_64;
        ulong local_60;
        PixfontGeneric* local_58;
        ulong local_50;
        ulong local_48;
        int local_40;
        int local_3c;
        ulong local_38;

        local_38 = CONCAT44(in_register_00000014, param_2);
        local_60 = (ulong)(uint)(param_3 - field_0);
        local_58 = this;
        local_c8 = (TransparentFontColour[16])PrecalculateTransparentFontColour(m_alpha, m_currentCol);
        local_108 = (TransparentFontColour[16])PrecalculateTransparentFontColour(m_alpha, m_currentShadow);
        pcVar9 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pcVar10 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::end();
        local_b8 = 0;
        if (pcVar10 != pcVar9) {
            local_b0 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&local_58->field_1168;
            local_e0 = (Array<int, eastl::allocator>*)&local_58->field_1072;
            local_d8 = (Array<int, eastl::allocator>*)&local_58->field_1096;
            local_90 = (shared_ptr<Array<unsigned char, eastl::allocator>[]>*)&local_58->field_32;
            local_88 = (Array<int, eastl::allocator>*)&local_58->field_1120;
            local_80 = (Array<int, eastl::allocator>*)&local_58->field_1144;
            local_d0 = (array<int, 256ul>*)&local_58->field_48;
            uVar24 = 4294967295;
            local_50 = 4294967295;
            local_70 = 0;
            local_f8 = pcVar9;
            do {
                uVar12 = local_b8;
                wVar6 = stringtools::GetUTF8NextChar16(local_f8, &local_b8);
                uVar1 = stringtools::WideToCP1252(wVar6);
                if (uVar1 != '\0') {
                    if (uVar1 == '<') {
                        uVar24 = uVar12 & 4294967295;
                    } else {
                        if ((uVar1 == '>') && ((int)uVar24 != -1)) {
                            eastl::string::substr((ulong)local_148, (ulong)param_1);
                            bVar2 = eastl::operator==(local_148, (basic_string*)"lt", extraout_RDX);
                            bVar3 = true;
                            if (bVar2) {
                                uVar1 = '<';
                            } else {
                                bVar2 = eastl::operator==(local_148, (basic_string*)"gt", extraout_RDX_00);
                                if (bVar2) {
                                    uVar1 = '>';
                                } else {
                                    pPVar23 = (PixfontGeneric*)local_128;
                                    eastl::string::substr((ulong)pPVar23, (ulong)local_148);
                                    bVar3 = eastl::operator==((basic_string*)pPVar23, (value_type*)"img=");
                                    pPVar23->~basic_string();
                                    if (bVar3) {
                                        uVar24 = param_5->end();
                                        local_48 = local_48 & 18446744069414584320;
                                        if (local_70 < uVar24) {
                                            puVar11 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                                (Array<int, eastl::allocator>*)param_5, local_70);
                                            local_48 = CONCAT44(local_48._4_4_, *puVar11);
                                        }
                                        uVar24 = local_70;
                                        uVar12 = param_6->end();
                                        if (uVar24 < uVar12) {
                                            Array<int, eastl::allocator>::operator[](
                                                (Array<int, eastl::allocator>*)param_6, local_70);
                                        }
                                        eastl::string::substr((ulong)local_128, (ulong)local_148);
                                        local_64 = 0;
                                        cVar4 = core::stringtools::general::StringTools::CheckedParseInt(&local_64,
                                                                                                         local_128);
                                        iVar22 = local_64;
                                        if ((cVar4 == '\0') || (local_64 < 0)) {
                                        LAB_1002c1c72:
                                            uVar13 = logger::default_logger();
                                            uVar14 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                            logger::Logger::Log(
                                                uVar13, 0, 8,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "oldscape/jagex3/jstring/pixfont_generic.cpp",
                                                1158, "Invalid img tag: %s", uVar14);
                                        } else {
                                            this_01 =
                                                (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                                    shared_ptr<Array<graphics::Pix8, eastl::allocator>>::operator->(
                                                        (shared_ptr<
                                                            Array<graphics::Pix8, eastl::allocator>>*)&m_inlineImages);
                                            iVar7 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                                                this_01);
                                            if (iVar7 <= iVar22)
                                                goto LAB_1002c1c72;
                                            this_02 = (Array<graphics::Pix8, eastl::allocator>*)
                                                shared_ptr<Array<graphics::Pix8, eastl::allocator>>::operator*(
                                                    (shared_ptr<
                                                        Array<graphics::Pix8, eastl::allocator>>*)&m_inlineImages);
                                            lVar15 = Array<graphics::Pix8, eastl::allocator>::operator[](
                                                this_02, (long)local_64);
                                            (**(code**)(param_7->field_0 + 184))(param_7, lVar15,
                                                                                 (int)local_48 + (int)local_38);
                                            local_38 = (ulong)(uint)((int)local_38 + *(int*)(lVar15 + 64));
                                            local_50 = 4294967295;
                                        }
                                        local_70 = local_70 + 1;
                                        local_128->~basic_string();
                                    } else {
                                        UpdateState(pPVar23, (basic_string*)local_148);
                                    }
                                    bVar3 = false;
                                }
                            }
                            local_148->~basic_string();
                            uVar24 = 4294967295;
                            if (!bVar3)
                                goto LAB_1002c1a83;
                        }
                        bVar5 = SanitiseChar(uVar1);
                        if ((int)uVar24 == -1) {
                            lVar15 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_b0);
                            if ((lVar15 != 0) && ((int)local_50 != -1)) {
                                pcVar16 = (char*)Array<signed char, eastl::allocator>::operator[](
                                    (Array<signed char, eastl::allocator>*)local_b0,
                                    (long)(int)((uint)bVar5 | (int)local_50 << 8));
                                local_38 = (ulong)(uint)((int)local_38 + (int)*pcVar16);
                            }
                            uVar12 = (ulong)bVar5;
                            piVar17 = (int*)Array<int, eastl::allocator>::operator[](local_e0, uVar12);
                            local_40 = *piVar17;
                            local_50 = uVar12;
                            piVar17 = (int*)Array<int, eastl::allocator>::operator[](local_d8, uVar12);
                            local_3c = *piVar17;
                            uVar18 = param_5->end();
                            uVar12 = local_70;
                            local_48 = 0;
                            uVar21 = 0;
                            if (local_70 < uVar18) {
                                puVar19 = (uint*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)param_5, local_70);
                                uVar21 = (ulong)*puVar19;
                            }
                            local_98 = uVar21;
                            uVar18 = param_6->end();
                            if (uVar12 < uVar18) {
                                puVar19 = (uint*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)param_6, uVar12);
                                local_48 = (ulong)*puVar19;
                            }
                            uVar18 = param_4->end();
                            if (uVar12 < uVar18) {
                                piVar17 = (int*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)param_4, uVar12);
                                iVar22 = *piVar17;
                                auVar25 = PrecalculateTransparentFontColour(m_alpha, iVar22);
                                local_c8 = (TransparentFontColour[16])auVar25;
                            } else {
                                iVar22 = m_currentCol;
                            }
                            uVar12 = local_50;
                            pPVar23 = local_58;
                            iVar7 = (int)local_38;
                            uVar18 = local_38;
                            if (bVar5 == 32) {
                                if (0 < m_extraSpaceWidth) {
                                    uVar8 = m_extraSpaceWidth + m_extraSpacePos;
                                    m_extraSpacePos = uVar8 & 255;
                                    uVar18 = (ulong)(uint)(((int)uVar8 >> 8) + iVar7);
                                }
                            } else if (m_alpha < 255) {
                                if (0 < m_alpha) {
                                    if (m_currentShadow != -1) {
                                        if (*(ulong*)&local_58->field_24 <= local_50) {
                                            /* WARNING: Subroutine does not return */
                                            LogAssert("(index < m_Size)",
                                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                      "OSRS-OS1669-BOXR/libs/jtl/SharedArray.h",
                                                      299, "Index of %d outside range 0 to %d", local_50,
                                                      *(ulong*)&local_58->field_24 - 1);
                                        }
                                        local_78 =
                                            (Array*)shared_ptr<Array<unsigned char, eastl::allocator>[]>::operator[](
                                                local_90, local_50);
                                        piVar17 = (int*)Array<int, eastl::allocator>::operator[](local_88, uVar12);
                                        iVar22 = *piVar17;
                                        iVar20 = (int)local_98;
                                        piVar17 = (int*)Array<int, eastl::allocator>::operator[](local_80, uVar12);
                                        PlotLetterTrans(pPVar23, local_78, iVar22 + iVar20 + iVar7 + 1,
                                                        *piVar17 + 1 + (int)local_60 + (int)local_48, local_40,
                                                        local_3c, local_108, param_7);
                                    }
                                    if (*(ulong*)&pPVar23->field_24 <= uVar12) {
                                        /* WARNING: Subroutine does not return */
                                        LogAssert("(index < m_Size)",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/jtl/SharedArray.h",
                                                  299, "Index of %d outside range 0 to %d", uVar12,
                                                  *(ulong*)&pPVar23->field_24 - 1);
                                    }
                                    local_78 = (Array*)shared_ptr<Array<unsigned char, eastl::allocator>[]>::operator[](
                                        local_90, uVar12);
                                    piVar17 = (int*)Array<int, eastl::allocator>::operator[](local_88, uVar12);
                                    uVar18 = local_38;
                                    iVar7 = (int)local_38;
                                    iVar20 = (int)local_98;
                                    iVar22 = *piVar17;
                                    piVar17 = (int*)Array<int, eastl::allocator>::operator[](local_80, uVar12);
                                    PlotLetterTrans(local_58, local_78, iVar20 + iVar7 + iVar22,
                                                    (int)local_48 + (int)local_60 + *piVar17, local_40, local_3c,
                                                    local_c8, param_7);
                                }
                            } else {
                                local_78 = (Array*)CONCAT44(local_78._4_4_, iVar22);
                                if (m_currentShadow != -1) {
                                    if (*(ulong*)&local_58->field_24 <= local_50) {
                                        /* WARNING: Subroutine does not return */
                                        LogAssert("(index < m_Size)",
                                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/jtl/SharedArray.h",
                                                  299, "Index of %d outside range 0 to %d", local_50,
                                                  *(ulong*)&local_58->field_24 - 1);
                                    }
                                    local_a8 = (Array*)shared_ptr<Array<unsigned char, eastl::allocator>[]>::operator[](
                                        local_90, local_50);
                                    piVar17 = (int*)Array<int, eastl::allocator>::operator[](local_88, uVar12);
                                    iVar22 = *piVar17;
                                    iVar20 = (int)local_98;
                                    piVar17 = (int*)Array<int, eastl::allocator>::operator[](local_80, uVar12);
                                    PlotLetter(pPVar23, local_a8, iVar22 + iVar20 + iVar7 + 1,
                                               *piVar17 + 1 + (int)local_60 + (int)local_48, local_40, local_3c,
                                               m_currentShadow, param_7);
                                }
                                if (*(ulong*)&pPVar23->field_24 <= uVar12) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("(index < m_Size)",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "jtl/SharedArray.h",
                                              299, "Index of %d outside range 0 to %d", uVar12,
                                              *(ulong*)&pPVar23->field_24 - 1);
                                }
                                local_a8 = (Array*)shared_ptr<Array<unsigned char, eastl::allocator>[]>::operator[](
                                    local_90, uVar12);
                                piVar17 = (int*)Array<int, eastl::allocator>::operator[](local_88, uVar12);
                                uVar18 = local_38;
                                iVar7 = (int)local_38;
                                iVar20 = (int)local_98;
                                iVar22 = *piVar17;
                                piVar17 = (int*)Array<int, eastl::allocator>::operator[](local_80, uVar12);
                                PlotLetter(local_58, local_a8, iVar20 + iVar7 + iVar22,
                                           (int)local_48 + (int)local_60 + *piVar17, local_40, local_3c, (int)local_78,
                                           param_7);
                            }
                            piVar17 = (int*)std::array<int, 256ul>::operator[](local_d0, uVar12);
                            iVar22 = *piVar17;
                            if (m_strikeout != -1) {
                                (**(code**)(param_7->field_0 + 56))(param_7, uVar18 & 4294967295,
                                                                    (int)((double)local_58->field_0 * 0.7) +
                                                                        (int)local_60);
                            }
                            if (m_underline != -1) {
                                (**(code**)(param_7->field_0 + 56))(param_7, uVar18 & 4294967295,
                                                                    local_58->field_0 + (int)local_60);
                            }
                            local_70 = local_70 + 1;
                            local_38 = (ulong)(uint)(iVar22 + (int)uVar18);
                        }
                    }
                }
            LAB_1002c1a83:
            } while (local_b8 < (ulong)((long)pcVar10 - (long)pcVar9));
        }
    }

    // 0x1002c21f0, 304 bytes, placed by class name
    // PixfontGeneric::CentreStringColourPattern(eastl::string const&, int, int, int, int, eastl::vector<int, eastl::allocator> const&, graphics::Pix2D&)
    void PixfontGeneric::CentreStringColourPattern(basic_string* param_1, int param_2, int param_3, int param_4,
                                                   int param_5, vector* param_6, Pix2D* param_7) {
        int iVar1;
        long lVar2;
        undefined8 uVar3;
        vector<int, eastl::allocator> local_88[32];
        jstring local_68[24];
        Array<int, eastl::allocator> local_50[28];

        lVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (lVar2 != 0) {
            ResetState((PixfontGeneric*)param_1, param_4, param_5);
            Array<int, eastl::allocator>::Array(local_50);
            lVar2 = param_6->size();
            if (lVar2 != 0) {
                eastl::vector<int, eastl::allocator>::vector(local_88, param_6);
                uVar3 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                ColourPatternToPerCharacterArray(local_68, local_88, uVar3);
                Array<int, eastl::allocator>::operator=(local_50, (Array*)local_68);
                local_68->~Array();
                eastl::vector<int, eastl::allocator>::~vector(local_88);
            }
            iVar1 = StringWid(this, param_1);
            DrawStringInnerCustomOffsetsAndColours(this, param_1, param_2 - iVar1 / 2, param_3, (Array*)local_50,
                                                   (Array*)&m_empty, (Array*)&m_empty, param_7);
            local_50->~Array();
        }
    }

    // 0x1002c2320, 480 bytes, placed by class name
    // PixfontGeneric::CentreStringWave(eastl::string const&, int, int, int, int, int, eastl::vector<int, eastl::allocator> const&, graphics::Pix2D&)
    void PixfontGeneric::CentreStringWave(basic_string* param_1, int param_2, int param_3, int param_4, int param_5,
                                          int param_6, vector* param_7, Pix2D* param_8) {
        int iVar1;
        long lVar2;
        undefined8 uVar3;
        ulong uVar4;
        int* piVar5;
        ulong uVar6;
        PixfontGeneric* pPVar7;
        double dVar8;
        vector<int, eastl::allocator> local_98[32];
        Array<int, eastl::allocator> local_78[24];
        double local_60;
        jstring local_50[28];

        pPVar7 = (PixfontGeneric*)param_1;
        lVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (lVar2 != 0) {
            ResetState(pPVar7, param_4, param_5);
            Array<int, eastl::allocator>::Array(local_78);
            lVar2 = param_7->size();
            if (lVar2 != 0) {
                eastl::vector<int, eastl::allocator>::vector(local_98, param_7);
                uVar3 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                ColourPatternToPerCharacterArray(local_50, local_98, uVar3);
                Array<int, eastl::allocator>::operator=(local_78, (Array*)local_50);
                local_50->~Array();
                eastl::vector<int, eastl::allocator>::~vector(local_98);
            }
            uVar4 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            new (local_50) Array<int, eastl::allocator>(uVar4);
            lVar2 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (lVar2 != 0) {
                local_60 = (double)param_6 * 0.2;
                uVar4 = 0;
                do {
                    piVar5 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)local_50, uVar4);
                    dVar8 = (double)_sin((double)uVar4 * 0.5 + local_60);
                    *piVar5 = (int)(dVar8 * 5.0);
                    uVar4 = (ulong)((int)uVar4 + 1);
                    uVar6 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                } while (uVar4 < uVar6);
            }
            pPVar7 = (PixfontGeneric*)this;
            iVar1 = StringWid((PixfontGeneric*)this, param_1);
            DrawStringInnerCustomOffsetsAndColours(pPVar7, param_1, param_2 - iVar1 / 2, param_3, (Array*)local_78,
                                                   (Array*)&m_empty, (Array*)local_50, param_8);
            local_50->~Array();
            local_78->~Array();
        }
    }

    // 0x1002c2500, 608 bytes, placed by class name
    // PixfontGeneric::CentreStringWave2(eastl::string const&, int, int, int, int, int, eastl::vector<int, eastl::allocator> const&, graphics::Pix2D&)
    void PixfontGeneric::CentreStringWave2(basic_string* param_1, int param_2, int param_3, int param_4, int param_5,
                                           int param_6, vector* param_7, Pix2D* param_8) {
        int iVar1;
        long lVar2;
        undefined8 uVar3;
        ulong uVar4;
        int* piVar5;
        ulong uVar6;
        PixfontGeneric* pPVar7;
        double dVar8;
        vector<int, eastl::allocator> local_b8[32];
        Array<int, eastl::allocator> local_98[24];
        Array<int, eastl::allocator> local_80[24];
        double local_68;
        jstring local_58[24];
        double local_40;

        pPVar7 = (PixfontGeneric*)param_1;
        lVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (lVar2 != 0) {
            ResetState(pPVar7, param_4, param_5);
            Array<int, eastl::allocator>::Array(local_98);
            lVar2 = param_7->size();
            if (lVar2 != 0) {
                eastl::vector<int, eastl::allocator>::vector(local_b8, param_7);
                uVar3 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                ColourPatternToPerCharacterArray(local_58, local_b8, uVar3);
                Array<int, eastl::allocator>::operator=(local_98, (Array*)local_58);
                local_58->~Array();
                eastl::vector<int, eastl::allocator>::~vector(local_b8);
            }
            uVar4 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            new (local_58) Array<int, eastl::allocator>(uVar4);
            uVar4 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            Array<int, eastl::allocator>::Array(local_80, uVar4);
            lVar2 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (lVar2 != 0) {
                local_40 = (double)param_6 * 0.2;
                uVar4 = 0;
                do {
                    piVar5 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)local_58, uVar4);
                    local_68 = (double)uVar4;
                    dVar8 = (double)_sin(local_68 * 0.2 + local_40);
                    *piVar5 = (int)(dVar8 * 5.0);
                    piVar5 = (int*)Array<int, eastl::allocator>::operator[](local_80, uVar4);
                    dVar8 = (double)_sin(local_68 * 0.3333333333333333 + local_40);
                    *piVar5 = (int)(dVar8 * 5.0);
                    uVar4 = (ulong)((int)uVar4 + 1);
                    uVar6 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                } while (uVar4 < uVar6);
            }
            pPVar7 = (PixfontGeneric*)this;
            iVar1 = StringWid((PixfontGeneric*)this, param_1);
            DrawStringInnerCustomOffsetsAndColours(pPVar7, param_1, param_2 - iVar1 / 2, param_3, (Array*)local_98,
                                                   (Array*)local_58, (Array*)local_80, param_8);
            local_80->~Array();
            local_58->~Array();
            local_98->~Array();
        }
    }

    // 0x1002c2760, 528 bytes, placed by class name
    // PixfontGeneric::CentreStringWave3(eastl::string const&, int, int, int, int, int, int, eastl::vector<int, eastl::allocator> const&, graphics::Pix2D&)
    void PixfontGeneric::CentreStringWave3(basic_string* param_1, int param_2, int param_3, int param_4, int param_5,
                                           int param_6, int param_7, vector* param_8, Pix2D* param_9) {
        int iVar1;
        long lVar2;
        undefined8 uVar3;
        ulong uVar4;
        int* piVar5;
        ulong uVar6;
        PixfontGeneric* pPVar7;
        double dVar8;
        vector<int, eastl::allocator> local_a0[32];
        Array<int, eastl::allocator> local_80[24];
        double local_68;
        jstring local_50[28];

        pPVar7 = (PixfontGeneric*)param_1;
        lVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (lVar2 != 0) {
            ResetState(pPVar7, param_4, param_5);
            Array<int, eastl::allocator>::Array(local_80);
            lVar2 = param_8->size();
            if (lVar2 != 0) {
                eastl::vector<int, eastl::allocator>::vector(local_a0, param_8);
                uVar3 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                ColourPatternToPerCharacterArray(local_50, local_a0, uVar3);
                Array<int, eastl::allocator>::operator=(local_80, (Array*)local_50);
                local_50->~Array();
                eastl::vector<int, eastl::allocator>::~vector(local_a0);
            }
            uVar4 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            new (local_50) Array<int, eastl::allocator>(uVar4);
            lVar2 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (lVar2 != 0) {
                dVar8 = (double)param_7 * -0.125 + 7.0;
                local_68 = 0.0;
                if (0.0 <= dVar8) {
                    local_68 = dVar8;
                }
                uVar4 = 0;
                do {
                    piVar5 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)local_50, uVar4);
                    dVar8 = (double)_sin((double)uVar4 * 0.6666666666666666 + (double)param_6);
                    *piVar5 = (int)(dVar8 * local_68);
                    uVar4 = (ulong)((int)uVar4 + 1);
                    uVar6 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                } while (uVar4 < uVar6);
            }
            pPVar7 = (PixfontGeneric*)this;
            iVar1 = StringWid((PixfontGeneric*)this, param_1);
            DrawStringInnerCustomOffsetsAndColours(pPVar7, param_1, param_2 - iVar1 / 2, param_3, (Array*)local_80,
                                                   (Array*)&m_empty, (Array*)local_50, param_9);
            local_50->~Array();
            local_80->~Array();
        }
    }

    // 0x1002c2970, 304 bytes, placed by class name
    // PixfontGeneric::DrawstringAntiMacro(eastl::string const&, int, int, int, int, int, graphics::Pix2D&)
    void PixfontGeneric::DrawstringAntiMacro(basic_string* param_1, int param_2, int param_3, int param_4, int param_5,
                                             int param_6, Pix2D* param_7) {
        uint uVar1;
        uint uVar2;
        long lVar3;
        ulong uVar4;
        int* piVar5;
        ulong uVar6;
        int iVar7;
        Array<int, eastl::allocator> local_58[24];

        lVar3 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (lVar3 != 0) {
            ResetState((PixfontGeneric*)param_1, param_4, param_5);
            new (&m_rand) std::__cxx_atomic_base_impl<FolderSelection::FolderPathRequestStatus>(param_6);
            uVar1 = m_rand.Rand();
            m_alpha = uVar1 & 31 | 192;
            uVar4 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            Array<int, eastl::allocator>::Array(local_58, uVar4);
            lVar3 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (lVar3 != 0) {
                uVar4 = 0;
                uVar1 = 1;
                iVar7 = 0;
                do {
                    piVar5 = (int*)Array<int, eastl::allocator>::operator[](local_58, uVar4);
                    *piVar5 = iVar7;
                    uVar2 = m_rand.Rand();
                    iVar7 = iVar7 + (uint)((uVar2 & 3) == 0);
                    uVar4 = (ulong)uVar1;
                    uVar6 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                    uVar1 = uVar1 + 1;
                } while (uVar4 < uVar6);
            }
            DrawStringInnerCustomOffsetsAndColours((PixfontGeneric*)this, param_1, param_2, param_3, (Array*)&m_empty,
                                                   (Array*)local_58, (Array*)&m_empty, param_7);
            local_58->~Array();
        }
    }

    // 0x1002c2aa0, 96 bytes, placed by neighbouring functions
    // PrecalculateTransparentFontColour(int, int)
    undefined1[16] PrecalculateTransparentFontColour(int param_1, int param_2) {
        undefined1 auVar1[16];
        Callstack local_28;

        new (&local_28) callstack::Callstack();
        if ((param_1 - 1U < 255) && (param_2 != -1)) {
            local_28._4_4_ = 255 - param_1;
            local_28._8_4_ = param_1 << 24 | param_2;
            local_28.field_0 = param_1;
            local_28._12_4_ = graphics::ComputeCompositeRGB(param_2, param_1);
        }
        auVar1._4_4_ = local_28._4_4_;
        auVar1._0_4_ = local_28.field_0;
        auVar1._8_4_ = local_28._8_4_;
        auVar1._12_4_ = local_28._12_4_;
        return auVar1;
    }

    // 0x1002c2b00, 1040 bytes, placed by class name
    // PixfontGeneric::UpdateState(eastl::string&)
    void PixfontGeneric::UpdateState(basic_string* param_1) {
        bool bVar1;
        char cVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        char* extraout_RDX;
        char* extraout_RDX_00;
        char* extraout_RDX_01;
        char* extraout_RDX_02;
        char* extraout_RDX_03;
        char* extraout_RDX_04;
        char* extraout_RDX_05;
        char* extraout_RDX_06;
        basic_string local_38[32];

        eastl::string::substr((ulong)local_38, (ulong)param_1);
        bVar1 = eastl::operator==(local_38, (value_type*)"col=");
        local_38->~basic_string();
        if (bVar1) {
            eastl::string::substr((ulong)local_38, (ulong)param_1);
            cVar2 = core::stringtools::general::StringTools::CheckedParseInt(&m_currentCol, local_38, 16, true);
            if (cVar2 == '\0') {
                uVar3 = logger::default_logger();
                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(uVar3, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "jagex3/jstring/pixfont_generic.cpp",
                                    1558, "Error parsing tag: %s", uVar4);
            }
        } else {
            bVar1 = eastl::operator==((eastl*)param_1, (basic_string*)"/col", extraout_RDX);
            if (bVar1) {
                m_currentCol = m_defaultCol;
                return;
            }
            eastl::string::substr((ulong)local_38, (ulong)param_1);
            bVar1 = eastl::operator==(local_38, (value_type*)"str=");
            local_38->~basic_string();
            if (bVar1) {
                eastl::string::substr((ulong)local_38, (ulong)param_1);
                cVar2 = core::stringtools::general::StringTools::CheckedParseInt(&m_strikeout, local_38, 16, true);
                if (cVar2 == '\0') {
                    uVar3 = logger::default_logger();
                    uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    logger::Logger::Log(uVar3, 0, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "oldscape/jagex3/jstring/pixfont_generic.cpp",
                                        1571, "Error parsing tag: %s", uVar4);
                }
            } else {
                bVar1 = eastl::operator==((eastl*)param_1, (basic_string*)"str", extraout_RDX_00);
                if (bVar1) {
                    m_strikeout = 8388608;
                    return;
                }
                bVar1 = eastl::operator==((eastl*)param_1, (basic_string*)"/str", extraout_RDX_01);
                if (bVar1) {
                    m_strikeout = 4294967295;
                    return;
                }
                eastl::string::substr((ulong)local_38, (ulong)param_1);
                bVar1 = eastl::operator==(local_38, (value_type*)"u=");
                local_38->~basic_string();
                if (bVar1) {
                    eastl::string::substr((ulong)local_38, (ulong)param_1);
                    cVar2 = core::stringtools::general::StringTools::CheckedParseInt(&m_underline, local_38, 16, true);
                    if (cVar2 == '\0') {
                        uVar3 = logger::default_logger();
                        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        logger::Logger::Log(uVar3, 0, 8,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "oldscape/jagex3/jstring/pixfont_generic.cpp",
                                            1588, "Error parsing tag: %s", uVar4);
                    }
                } else {
                    bVar1 = eastl::operator==((eastl*)param_1, (basic_string*)"u", extraout_RDX_02);
                    if (bVar1) {
                        m_underline = 0;
                        return;
                    }
                    bVar1 = eastl::operator==((eastl*)param_1, (basic_string*)"/u", extraout_RDX_03);
                    if (bVar1) {
                        m_underline = 4294967295;
                        return;
                    }
                    eastl::string::substr((ulong)local_38, (ulong)param_1);
                    bVar1 = eastl::operator==(local_38, (value_type*)"shad=");
                    local_38->~basic_string();
                    if (!bVar1) {
                        bVar1 = eastl::operator==((eastl*)param_1, (basic_string*)"shad", extraout_RDX_04);
                        if (bVar1) {
                            m_currentShadow = 0;
                            return;
                        }
                        bVar1 = eastl::operator==((eastl*)param_1, (basic_string*)"/shad", extraout_RDX_05);
                        if (bVar1) {
                            m_currentShadow = m_defaultShadow;
                            return;
                        }
                        bVar1 = eastl::operator==((eastl*)param_1, (basic_string*)"br", extraout_RDX_06);
                        if (bVar1) {
                            ResetState((PixfontGeneric*)param_1, m_defaultCol, m_defaultShadow);
                            return;
                        }
                        return;
                    }
                    eastl::string::substr((ulong)local_38, (ulong)param_1);
                    cVar2 =
                        core::stringtools::general::StringTools::CheckedParseInt(&m_currentShadow, local_38, 16, true);
                    if (cVar2 == '\0') {
                        uVar3 = logger::default_logger();
                        uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        logger::Logger::Log(uVar3, 0, 8,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "oldscape/jagex3/jstring/pixfont_generic.cpp",
                                            1605, "Error parsing tag: %s", uVar4);
                    }
                }
            }
        }
        local_38->~basic_string();
    }

    // 0x1002c2f30, 192 bytes, placed by class name
    // PixfontGeneric::PlotLetterUpwards(Array<unsigned char, eastl::allocator> const&, int, int, int, int, int, graphics::Pix2D&)
    void PixfontGeneric::PlotLetterUpwards(Array* param_1, int param_2, int param_3, int param_4, int param_5,
                                           int param_6, Pix2D* param_7) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;

        iVar6 = param_7->field_8;
        iVar7 = param_7->field_16;
        iVar5 = iVar6 * param_3 + param_2;
        iVar4 = param_5 + -1;
        iVar3 = iVar7 - param_3;
        if (iVar3 == 0 || iVar7 < param_3) {
            iVar7 = param_5;
        } else {
            iVar4 = iVar4 - iVar3;
            iVar5 = iVar5 + iVar3 * iVar6;
            param_3 = iVar7;
            iVar7 = param_5 - iVar3;
        }
        iVar6 = iVar6 - param_4;
        iVar3 = param_7->m_subClipping;
        iVar2 = param_7->field_20 - (param_3 + iVar7);
        if (param_3 + iVar7 <= param_7->field_20) {
            iVar2 = 0;
        }
        iVar1 = iVar3 - param_2;
        if (!(iVar1 == 0 || iVar3 < param_2)) {
            param_4 = param_4 - iVar1;
            iVar4 = iVar4 + iVar1 * param_5;
            iVar5 = iVar5 + iVar1;
            iVar6 = iVar6 + iVar1;
            param_2 = iVar3;
        }
        iVar1 = (param_2 + param_4) - param_7->field_28;
        iVar3 = 0;
        if (iVar1 != 0 && (int)param_7->field_28 <= param_2 + param_4) {
            iVar3 = iVar1;
        }
        iVar1 = param_4 - iVar3;
        if ((iVar1 != 0 && iVar3 <= param_4) && (0 < iVar2 + iVar7)) {
            PlotLetterUpwards((PixfontGeneric*)(ulong)(uint)(iVar3 + iVar6), (SharedArray*)&param_7->field_32, param_1,
                              param_6, iVar4, iVar5, param_5, iVar1, iVar2 + iVar7, iVar3 + iVar6, ~(iVar1 * param_5));
        }
    }

    // 0x1002c2ff0, 256 bytes, placed by class name
    // PixfontGeneric::PlotLetterUpwardsTrans(Array<unsigned char, eastl::allocator> const&, int, int, int, int, PixfontGeneric::TransparentFontColour const&, graphics::Pix2D&)
    void PixfontGeneric::PlotLetterUpwardsTrans(Array* param_1, int param_2, int param_3, int param_4, int param_5,
                                                TransparentFontColour* param_6, Pix2D* param_7) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        uint uVar5;
        int iVar6;
        int iVar7;
        int iVar8;

        if (*(uint*)param_6 < 255) {
            iVar7 = param_7->field_8;
            iVar8 = param_7->field_16;
            iVar6 = iVar7 * param_3 + param_2;
            iVar2 = param_5 + -1;
            iVar1 = iVar8 - param_3;
            if (iVar1 == 0 || iVar8 < param_3) {
                iVar8 = param_5;
            } else {
                iVar2 = iVar2 - iVar1;
                iVar6 = iVar6 + iVar1 * iVar7;
                param_3 = iVar8;
                iVar8 = param_5 - iVar1;
            }
            iVar7 = iVar7 - param_4;
            iVar1 = param_7->m_subClipping;
            iVar4 = param_7->field_20 - (param_3 + iVar8);
            if (param_3 + iVar8 <= param_7->field_20) {
                iVar4 = 0;
            }
            iVar3 = iVar1 - param_2;
            if (!(iVar3 == 0 || iVar1 < param_2)) {
                param_4 = param_4 - iVar3;
                iVar2 = iVar2 + iVar3 * param_5;
                iVar6 = iVar6 + iVar3;
                iVar7 = iVar7 + iVar3;
                param_2 = iVar1;
            }
            iVar3 = (param_2 + param_4) - param_7->field_28;
            iVar1 = 0;
            if (iVar3 != 0 && (int)param_7->field_28 <= param_2 + param_4) {
                iVar1 = iVar3;
            }
            iVar3 = param_4 - iVar1;
            if (iVar3 != 0 && iVar1 <= param_4) {
                uVar5 = iVar4 + iVar8;
                if (0 < (int)uVar5) {
                    PlotLetterUpwardsTransInner((PixfontGeneric*)(ulong)uVar5, (SharedArray*)&param_7->field_32,
                                                param_1, iVar2, iVar6, param_5, iVar3, uVar5, iVar1 + iVar7,
                                                ~(iVar3 * param_5), param_6);
                }
            }
        } else {
            PlotLetterUpwards(this, param_1, param_2, param_3, param_4, param_5, *(int*)(param_6 + 8), param_7);
        }
    }

    // 0x1002c30f0, 224 bytes, placed by class name
    // PixfontGeneric::PlotLetterTrans(Array<unsigned char, eastl::allocator> const&, int, int, int, int, PixfontGeneric::TransparentFontColour const&, graphics::Pix2D&)
    void PixfontGeneric::PlotLetterTrans(Array* param_1, int param_2, int param_3, int param_4, int param_5,
                                         TransparentFontColour* param_6, Pix2D* param_7) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;

        if (*(uint*)param_6 < 255) {
            iVar6 = param_7->field_8;
            iVar3 = param_7->field_16;
            iVar5 = iVar6 * param_3 + param_2;
            iVar2 = iVar3 - param_3;
            if (iVar2 == 0 || iVar3 < param_3) {
                iVar1 = 0;
            } else {
                param_5 = param_5 - iVar2;
                iVar1 = iVar2 * param_4;
                iVar5 = iVar5 + iVar2 * iVar6;
                param_3 = iVar3;
            }
            iVar6 = iVar6 - param_4;
            iVar3 = param_7->m_subClipping;
            iVar2 = param_7->field_20 - (param_3 + param_5);
            if (param_3 + param_5 <= param_7->field_20) {
                iVar2 = 0;
            }
            iVar4 = iVar3 - param_2;
            if (iVar4 == 0 || iVar3 < param_2) {
                iVar4 = 0;
            } else {
                param_4 = param_4 - iVar4;
                iVar1 = iVar1 + iVar4;
                iVar5 = iVar5 + iVar4;
                iVar6 = iVar6 + iVar4;
                param_2 = iVar3;
            }
            iVar3 = (param_2 + param_4) - param_7->field_28;
            if (iVar3 == 0 || param_2 + param_4 < (int)param_7->field_28) {
                iVar3 = 0;
            }
            if ((param_4 - iVar3 != 0 && iVar3 <= param_4) && (0 < iVar2 + param_5)) {
                PlotLetterTransInner((PixfontGeneric*)(ulong)(uint)(iVar4 + iVar3), (SharedArray*)&param_7->field_32,
                                     param_1, iVar1, iVar5, param_4 - iVar3, iVar2 + param_5, iVar6 + iVar3,
                                     iVar4 + iVar3, param_6);
            }
        } else {
            PlotLetter(this, param_1, param_2, param_3, param_4, param_5, *(int*)(param_6 + 8), param_7);
        }
    }

    // 0x1002c31d0, 496 bytes, placed by class name
    // PixfontGeneric::PlotLetter(SharedArray<unsigned int>&, Array<unsigned char, eastl::allocator> const&, int, int, int, int, int, int, int)
    void PixfontGeneric::PlotLetter(SharedArray* param_1, Array* param_2, int param_3, int param_4, int param_5,
                                    int param_6, int param_7, int param_8, int param_9) {
        uint uVar1;
        char* pcVar2;
        uint* puVar3;
        int iVar4;
        uint uVar5;
        long lVar6;
        uint uVar7;
        int iVar8;
        int iVar9;
        long lVar10;
        ulong uVar11;
        long lVar12;
        ulong uVar13;
        int local_44;

        if (0 < param_7) {
            iVar4 = -(param_6 >> 2);
            uVar7 = param_6 & 3;
            iVar8 = -uVar7;
            uVar1 = param_3 | 4278190080;
            local_44 = -param_7;
            if (iVar4 < 0) {
                iVar4 = -1;
            }
            if (iVar8 < 0) {
                iVar8 = -1;
            }
            do {
                if (3 < param_6) {
                    lVar10 = (long)param_4;
                    lVar12 = (long)param_5;
                    lVar6 = 0;
                    iVar9 = (param_6 >> 2) + iVar4 + 1;
                    do {
                        pcVar2 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)param_2, lVar10 + lVar6);
                        if (*pcVar2 != '\0') {
                            puVar3 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  lVar12 + lVar6);
                            *puVar3 = uVar1;
                        }
                        pcVar2 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)param_2, lVar10 + lVar6 + 1);
                        if (*pcVar2 != '\0') {
                            puVar3 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  lVar12 + lVar6 + 1);
                            *puVar3 = uVar1;
                        }
                        pcVar2 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)param_2, lVar10 + lVar6 + 2);
                        if (*pcVar2 != '\0') {
                            puVar3 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  lVar12 + lVar6 + 2);
                            *puVar3 = uVar1;
                        }
                        pcVar2 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)param_2, lVar10 + lVar6 + 3);
                        if (*pcVar2 != '\0') {
                            puVar3 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  lVar12 + lVar6 + 3);
                            *puVar3 = uVar1;
                        }
                        lVar6 = lVar6 + 4;
                        iVar9 = iVar9 + -1;
                    } while (iVar9 != 0);
                    param_5 = param_5 + (int)lVar6;
                    param_4 = param_4 + (int)lVar6;
                }
                if (uVar7 != 0) {
                    uVar11 = (ulong)param_4;
                    uVar13 = (ulong)param_5;
                    uVar5 = 0;
                    do {
                        pcVar2 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)param_2, uVar11);
                        if (*pcVar2 != '\0') {
                            puVar3 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  uVar13);
                            *puVar3 = uVar1;
                        }
                        uVar13 = uVar13 + 1;
                        uVar5 = uVar5 - 1;
                        uVar11 = uVar11 + 1;
                    } while (~(iVar8 + uVar7) != uVar5);
                    param_5 = param_5 - uVar5;
                    param_4 = param_4 - uVar5;
                }
                param_4 = param_4 + param_9;
                param_5 = param_5 + param_8;
                local_44 = local_44 + 1;
            } while (local_44 != 0);
        }
    }

    // 0x1002c33c0, 240 bytes, placed by class name
    // PixfontGeneric::PlotLetterTransInner(SharedArray<unsigned int>&, Array<unsigned char, eastl::allocator> const&, int, int, int, int, int, int, PixfontGeneric::TransparentFontColour const&)
    void PixfontGeneric::PlotLetterTransInner(SharedArray* param_1, Array* param_2, int param_3, int param_4,
                                              int param_5, int param_6, int param_7, int param_8,
                                              TransparentFontColour* param_9) {
        int iVar1;
        undefined4 uVar2;
        undefined4* puVar3;
        char* pcVar4;
        uint* puVar5;
        int iVar6;
        ulong uVar7;
        ulong uVar8;

        if (0 < param_6) {
            iVar1 = -param_6;
            do {
                if (0 < param_5) {
                    uVar7 = (ulong)param_3;
                    uVar8 = (ulong)param_4;
                    iVar6 = 0;
                    do {
                        pcVar4 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)param_2, uVar7);
                        if (*pcVar4 != '\0') {
                            puVar5 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  uVar8);
                            if (*puVar5 == 0) {
                                uVar2 = *(undefined4*)(param_9 + 8);
                            } else {
                                uVar2 = graphics::BlendPixel(*(uint*)(param_9 + 12), *(uint*)param_9,
                                                             *(uint*)(param_9 + 4), *puVar5);
                            }
                            puVar3 = (undefined4*)SharedArray<unsigned int>::operator[](
                                (SharedArray<unsigned int>*)param_1, uVar8);
                            *puVar3 = uVar2;
                        }
                        uVar8 = uVar8 + 1;
                        iVar6 = iVar6 + -1;
                        uVar7 = uVar7 + 1;
                    } while (-param_5 != iVar6);
                    param_4 = param_4 - iVar6;
                    param_3 = param_3 - iVar6;
                }
                param_3 = param_3 + param_8;
                param_4 = param_4 + param_7;
                iVar1 = iVar1 + 1;
            } while (iVar1 != 0);
        }
    }

    // 0x1002c34b0, 560 bytes, placed by class name
    // PixfontGeneric::PlotLetterUpwards(SharedArray<unsigned int>&, Array<unsigned char, eastl::allocator> const&, int, int, int, int, int, int, int, int)
    void PixfontGeneric::PlotLetterUpwards(SharedArray* param_1, Array* param_2, int param_3, int param_4, int param_5,
                                           int param_6, int param_7, int param_8, int param_9, int param_10) {
        uint uVar1;
        long lVar2;
        char* pcVar3;
        uint* puVar4;
        int iVar5;
        uint uVar6;
        int iVar7;
        uint uVar8;
        int iVar9;
        int iVar10;
        int iVar11;
        ulong uVar12;
        long lVar13;
        ulong uVar14;

        if (0 < param_8) {
            uVar1 = param_3 | 4278190080;
            iVar5 = -(param_7 >> 2);
            uVar6 = param_7 & 3;
            iVar10 = -uVar6;
            iVar9 = -param_8;
            if (iVar5 < 0) {
                iVar5 = -1;
            }
            if (iVar10 < 0) {
                iVar10 = -1;
            }
            do {
                uVar12 = (ulong)(uint)param_4;
                if (3 < param_7) {
                    lVar2 = (long)param_5;
                    lVar13 = 0;
                    iVar11 = (param_7 >> 2) + 1 + iVar5;
                    do {
                        iVar7 = (int)uVar12;
                        pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)param_2, (long)iVar7);
                        if (*pcVar3 != '\0') {
                            puVar4 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  lVar2 + lVar13);
                            *puVar4 = uVar1;
                        }
                        pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)param_2, (long)(iVar7 + param_6));
                        if (*pcVar3 != '\0') {
                            puVar4 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  lVar2 + lVar13 + 1);
                            *puVar4 = uVar1;
                        }
                        param_4 = iVar7 + param_6 + param_6 * 3;
                        pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)param_2, (long)(param_6 * 2 + iVar7));
                        if (*pcVar3 != '\0') {
                            puVar4 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  lVar2 + lVar13 + 2);
                            *puVar4 = uVar1;
                        }
                        pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)param_2, (long)(iVar7 + param_6 * 3));
                        if (*pcVar3 != '\0') {
                            puVar4 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  lVar2 + lVar13 + 3);
                            *puVar4 = uVar1;
                        }
                        uVar12 = (ulong)(uint)param_4;
                        lVar13 = lVar13 + 4;
                        iVar11 = iVar11 + -1;
                    } while (iVar11 != 0);
                    param_5 = param_5 + (int)lVar13;
                }
                if (uVar6 != 0) {
                    uVar12 = (ulong)param_4;
                    uVar14 = (ulong)param_5;
                    uVar8 = 0;
                    do {
                        pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)param_2, uVar12);
                        if (*pcVar3 != '\0') {
                            puVar4 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  uVar14);
                            *puVar4 = uVar1;
                        }
                        uVar14 = uVar14 + 1;
                        uVar12 = uVar12 + (long)param_6;
                        uVar8 = uVar8 - 1;
                    } while (~(iVar10 + uVar6) != uVar8);
                    param_5 = param_5 - uVar8;
                }
                param_4 = (int)uVar12 + param_10;
                param_5 = param_5 + param_9;
                iVar9 = iVar9 + 1;
            } while (iVar9 != 0);
        }
    }

    // 0x1002c36e0, 224 bytes, placed by class name
    // PixfontGeneric::PlotLetterUpwardsTransInner(SharedArray<unsigned int>&, Array<unsigned char, eastl::allocator> const&, int, int, int, int, int, int, int, PixfontGeneric::TransparentFontColour const&)
    void PixfontGeneric::PlotLetterUpwardsTransInner(SharedArray* param_1, Array* param_2, int param_3, int param_4,
                                                     int param_5, int param_6, int param_7, int param_8, int param_9,
                                                     TransparentFontColour* param_10) {
        undefined4 uVar1;
        int iVar2;
        char* pcVar3;
        uint* puVar4;
        undefined4* puVar5;
        ulong uVar6;
        ulong uVar7;
        int iVar8;

        if (0 < param_7) {
            iVar2 = -param_7;
            do {
                uVar6 = (ulong)(uint)param_3;
                if (0 < param_6) {
                    uVar6 = (ulong)param_3;
                    iVar8 = param_6;
                    do {
                        pcVar3 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)param_2, uVar6);
                        if (*pcVar3 == '\0') {
                            param_4 = param_4 + 1;
                        } else {
                            uVar7 = (ulong)param_4;
                            puVar4 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  uVar7);
                            if (*puVar4 == 0) {
                                uVar1 = *(undefined4*)(param_10 + 8);
                                param_4 = param_4 + 1;
                                puVar5 = (undefined4*)SharedArray<unsigned int>::operator[](
                                    (SharedArray<unsigned int>*)param_1, uVar7);
                                *puVar5 = uVar1;
                            } else {
                                graphics::BlendPixel(*(uint*)(param_10 + 12), *(uint*)param_10, *(uint*)(param_10 + 4),
                                                     *puVar4);
                            }
                        }
                        uVar6 = uVar6 + (long)param_5;
                        iVar8 = iVar8 + -1;
                    } while (iVar8 != 0);
                }
                param_3 = (int)uVar6 + param_9;
                param_4 = param_4 + param_8;
                iVar2 = iVar2 + 1;
            } while (iVar2 != 0);
        }
    }

    // 0x1002c37c0, 112 bytes, placed by class name
    // PixfontGeneric::PlotLetterScanline(Array<unsigned char, eastl::allocator> const&, int, int, int, int, int, int, int, int, Array<int, eastl::allocator> const&, Array<int, eastl::allocator> const&, graphics::Pix2D&)
    void PixfontGeneric::PlotLetterScanline(Array* param_1, int param_2, int param_3, int param_4, int param_5,
                                            int param_6, int param_7, int param_8, int param_9, Array* param_10,
                                            Array* param_11, Pix2D* param_12) {
        PlotLetterScanline((PixfontGeneric*)(ulong)(uint)param_12->field_8, (SharedArray*)&param_12->field_32, param_1,
                           param_2, param_3, param_4, param_5, param_12->field_8, param_6, param_7, param_8, param_9,
                           param_10, param_11);
    }

    // 0x1002c3830, 400 bytes, placed by class name
    // PixfontGeneric::PlotLetterScanline(SharedArray<unsigned int>&, Array<unsigned char, eastl::allocator> const&, int, int, int, int, int, int, int, int, int, Array<int, eastl::allocator> const&, Array<int, eastl::allocator> const&)
    void PixfontGeneric::PlotLetterScanline(SharedArray* param_1, Array* param_2, int param_3, int param_4, int param_5,
                                            int param_6, int param_7, int param_8, int param_9, int param_10,
                                            int param_11, Array* param_12, Array* param_13) {
        int iVar1;
        uint uVar2;
        int iVar3;
        long lVar4;
        int* piVar5;
        char* pcVar6;
        uint* puVar7;
        int iVar8;
        uint uVar9;
        int iVar10;
        ulong uVar11;
        uint uVar12;
        long lVar13;
        long lVar14;
        ulong uVar15;
        int local_34;

        uVar2 = param_4 >> 31 & -param_4;
        iVar8 = param_11 - param_4;
        if (param_6 + param_4 <= param_11) {
            iVar8 = param_6;
        }
        if ((int)uVar2 < iVar8) {
            uVar12 = param_3 >> 31 & -param_3;
            uVar11 = (ulong)(param_4 + uVar2);
            local_34 = (param_10 + param_4 + uVar2) * param_7 + uVar12 + param_3 + param_9;
            lVar4 = (long)(int)uVar2;
            lVar13 = param_5 * lVar4;
            do {
                piVar5 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_12, uVar11);
                iVar1 = *piVar5;
                piVar5 =
                    (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)param_13, uVar11);
                uVar9 = iVar1 - param_3;
                uVar2 = uVar12;
                if (uVar9 != 0 && param_3 <= iVar1) {
                    uVar2 = uVar9;
                }
                iVar3 = (*piVar5 + iVar1) - param_3;
                if (param_5 + param_3 <= *piVar5 + iVar1) {
                    iVar3 = param_5;
                }
                if ((int)uVar2 < iVar3) {
                    iVar10 = uVar9 - uVar12;
                    if (iVar1 <= param_3) {
                        iVar10 = 0;
                    }
                    lVar14 = (long)(int)uVar2;
                    uVar15 = (ulong)(iVar10 + local_34);
                    do {
                        pcVar6 = (char*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)param_2, lVar13 + lVar14);
                        if (*pcVar6 != '\0') {
                            puVar7 = (uint*)SharedArray<unsigned int>::operator[]((SharedArray<unsigned int>*)param_1,
                                                                                  uVar15);
                            *puVar7 = param_8 | 4278190080;
                        }
                        uVar15 = uVar15 + 1;
                        lVar14 = lVar14 + 1;
                    } while (lVar14 < iVar3);
                }
                uVar11 = uVar11 + 1;
                local_34 = local_34 + param_7;
                lVar4 = lVar4 + 1;
                lVar13 = lVar13 + param_5;
            } while (lVar4 < iVar8);
        }
    }

    // 0x1002c39e0, 336 bytes, placed by class name
    // PixfontGeneric::KernPair(std::array<Array<signed char, eastl::allocator>, 256ul>&, std::array<Array<signed char, eastl::allocator>, 256ul>&, std::array<int, 256ul>&, std::array<int, 256ul>&, std::array<int, 256ul>&, int, int)
    /* PixfontGeneric::KernPair(std::array<Array<signed char,
   eastl::allocator>, 256ul>&, std::array<Array<signed char, eastl::allocator>, 256ul>&,
   std::array<int, 256ul>&, std::array<int, 256ul>&, std::array<int, 256ul>&, int, int) */

    int PixfontGeneric::KernPair(array* param_1, array* param_2, array* param_3, array* param_4, array* param_5,
                                 int param_6, int param_7) {
        char cVar1;
        int iVar2;
        int iVar3;
        int* piVar4;
        Array<signed char, eastl::allocator>* this;
        char* pcVar5;
        Array<signed char, eastl::allocator>* this_00;
        ulong uVar7;
        int iVar8;
        int iVar9;
        ulong uVar10;
        int iVar11;

        uVar10 = (ulong)param_6;
        piVar4 = (int*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)param_3, uVar10);
        iVar2 = *piVar4;
        piVar4 = (int*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)param_5, uVar10);
        iVar9 = *piVar4;
        piVar4 = (int*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)param_3, (ulong)param_7);
        iVar3 = *piVar4;
        piVar4 = (int*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)param_5, (ulong)param_7);
        iVar11 = iVar2;
        if (iVar2 < iVar3) {
            iVar11 = iVar3;
        }
        iVar8 = *piVar4 + iVar3;
        if (iVar9 + iVar2 <= *piVar4 + iVar3) {
            iVar8 = iVar9 + iVar2;
        }
        piVar4 = (int*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)param_4, uVar10);
        iVar9 = *piVar4;
        piVar4 = (int*)std::array<int, 256ul>::operator[]((array<int, 256ul>*)param_4, (ulong)param_7);
        if (*piVar4 < iVar9) {
            iVar9 = *piVar4;
        }
        if (iVar11 < iVar8) {
            this = (Array<signed char, eastl::allocator>*)
                std::array<Array<signed char, eastl::allocator>, 256ul>::operator[](
                    (array<Array<signed char, eastl::allocator>, 256ul>*)param_2, uVar10);
            iVar8 = iVar8 - iVar11;
            uVar10 = (long)(iVar11 - iVar3);
            uVar7 = (long)(iVar11 - iVar2);
            do {
                pcVar5 = (char*)Array<signed char, eastl::allocator>::operator[](this, uVar7);
                cVar1 = *pcVar5;
                this_00 = (Array<signed char, eastl::allocator>*)
                    std::array<Array<signed char, eastl::allocator>, 256ul>::operator[](
                        (array<Array<signed char, eastl::allocator>, 256ul>*)param_1, (ulong)param_7);
                pcVar5 = (char*)Array<signed char, eastl::allocator>::operator[](this_00, uVar10);
                iVar2 = (int)*pcVar5 + (int)cVar1;
                if (iVar9 <= (int)*pcVar5 + (int)cVar1) {
                    iVar2 = iVar9;
                }
                iVar9 = iVar2;
                iVar8 = iVar8 + -1;
                uVar10 = uVar10 + 1;
                uVar7 = uVar7 + 1;
            } while (iVar8 != 0);
        }
        return -iVar9;
    }

    // 0x1002ec270, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.165
    void ___cxx_global_var_init_165() {
        new (&PixfontGeneric::m_rand) jag::math::Random(123456789, 31415821);
    }

    // 0x1002ec290, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.166
    void ___cxx_global_var_init_166() {
        new (&PixfontGeneric::m_lines) Array<eastl::string, eastl::allocator>(100);
        ___cxa_atexit(PTR__Array_100ee6738, &PixfontGeneric::m_lines, 4294967296);
    }

    // 0x1002ec2d0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.167
    void ___cxx_global_var_init_167() {
        new (&PixfontGeneric::m_empty) Array<int, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee6800, &PixfontGeneric::m_empty, 4294967296);
    }

    // 0x1002ec310, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.168
    void ___cxx_global_var_init_168(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&PixfontGeneric::m_inlineImages) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee52f0, &PixfontGeneric::m_inlineImages, 4294967296);
    }

} // namespace jag::oldscape::jstring

namespace jag {
    // 0x100efa0d0, 8 bytes, __const
    LoadingScreenScript::BACKGROUND_LOADED_TRIGGER = "BgLoaded";

    // 0x100efa0d8, 8 bytes, __const
    LoadingScreenScript::ERROR_TRIGGER = "Error";

    // 0x1002b5b80, 16 bytes, placed by debug map only (low confidence)
    // LoadingScreenScript::SetLoadingText(eastl::string const&)
    void LoadingScreenScript::SetLoadingText(basic_string* param_1) {
        eastl::string::operator=((eastl::string*)&field_88, param_1);
    }

} // namespace jag
