// libs/graphics/runetek7/fonts/FontHelpers.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "FontHelpers.h"
#include "TextRun.h"

namespace jag::graphics {
    // 0x100f442f8, 4 bytes, __data
    FontHelpers::ltCharCode = 60;

    // 0x100f442fc, 4 bytes, __data
    FontHelpers::gtCharCode = 62;

    // 0x100f44300, 4 bytes, __data
    FontHelpers::spaceCharCode = 32;

    // 0x100f44304, 4 bytes, __data
    FontHelpers::nbspCharCode = 160;

    // 0x100f44308, 4 bytes, __data
    FontHelpers::shyCharCode = 173;

    // 0x100f4430c, 4 bytes, __data
    FontHelpers::timesCharCode = 215;

    // 0x100f44310, 4 bytes, __data
    FontHelpers::euroCharCode = 128;

    // 0x100f44314, 4 bytes, __data
    FontHelpers::copyCharCode = 169;

    // 0x100f44318, 4 bytes, __data
    FontHelpers::regCharCode = 174;

    // 0x100f4431c, 4 bytes, __data
    FontHelpers::hyphenCharCode = 45;

    // 0x100f44320, 4 bytes, __data
    FontHelpers::newlineCharCode = 10;

    // 0x100f44324, 4 bytes, __data
    FontHelpers::tabCharCode = 9;

    // 0x100f44328, 4 bytes, __data
    FontHelpers::m_overrideDrawAutoWrapWidth = -1;

    // 0x100f44428, 8 bytes, __data
    FontHelpers::m_overrideTruncatedStringLength = 4294967295;

    // 0x103bc0410, 8 bytes, __common; zero-initialised
    FontHelpers::m_highlightNonVectorFonts;

    // 0x103bc0418, 24 bytes, __common; set at startup by ___cxx_global_var_init.14
    Array<FontHelpers::ModIconReference, eastl::allocator> FontHelpers::m_modIcons =
        Array<FontHelpers::ModIconReference, eastl::allocator>();

    // 0x103bc0430, 48 bytes, __common; zero-initialised
    FontHelpers::m_callbackGetSpriteReference;

    // 0x10011c9a0: the linker folded this into oldscape::dash3d::ModelAppender::~ModelAppender(), which has identical code
    FontHelpers::ModIconReference::~ModIconReference();

    // 0x10012a760: the linker folded this into eastl::pair<oldscape::Font const, shared_ptr<oldscape::jstring::PixfontGeneric> >::~pair(), which has identical code
    FontHelpers::ModIconReference::~ModIconReference();

    // 0x100426b40: the linker folded this into HardCodedSprites::SpriteReference::SpriteReference(HardCodedSprites::SpriteReference&&), which has identical code
    FontHelpers::ModIconReference::ModIconReference(FontHelpers::ModIconReference&&);

    // 0x100426b50: the linker folded this into HardCodedSprites::SpriteReference::SpriteReference(HardCodedSprites::SpriteReference&&), which has identical code
    FontHelpers::ModIconReference::ModIconReference(FontHelpers::ModIconReference&&);

    // 0x100426bc0: the linker folded this into HardCodedSprites::SpriteReference::SpriteReference(), which has identical code
    FontHelpers::ModIconReference::ModIconReference();

    // 0x100426bd0: the linker folded this into HardCodedSprites::SpriteReference::SpriteReference(), which has identical code
    FontHelpers::ModIconReference::ModIconReference();

    // 0x1008dfe70, 240 bytes, placed by debug map only (low confidence)
    // ParseSpriteData(StringView, int&, int&)
    ulong ParseSpriteData(StringView param_1, int* param_2, int* param_3) {
        bool bVar1;
        char cVar2;
        StringView* pSVar3;
        StringView* this;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        ulong uVar7;
        StringView local_58[2];
        int* local_38;

        *param_2 = 0;
        local_38 = param_2;
        local_58->split((char)param_1.field_0);
        pSVar3 = (StringView*)std::get<0ul, StringView, StringView>((pair*)local_58);
        this = (StringView*)std::get<1ul, StringView, StringView>((pair*)local_58);
        bVar1 = FromString<StringView, int>(pSVar3, (int*)param_1.field_8, 10);
        if (bVar1) {
            cVar2 = empty();
            uVar7 = CONCAT71(param_1.field_8._1_7_, 1);
            if (cVar2 != '\0')
                goto LAB_1008dff40;
            bVar1 = FromString<StringView, int>(this, local_38, 10);
            if (bVar1)
                goto LAB_1008dff40;
        }
        uVar4 = logger::default_logger();
        uVar5 = param_1.field_0->HeapBeginPtr();
        uVar6 = param_1.field_0->end();
        uVar7 = 0;
        logger::Logger::Log(uVar4, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "fonts/FontHelpers.cpp",
                            46, "could not parse sprite data from \'sprite=%.*s\'", uVar5, uVar6);
    LAB_1008dff40:
        return uVar7 & 4294967295;
    }

    // 0x1008e0060, 16 bytes, base-object constructor, placed by class name and debug map
    // FontHelpers::FontHelpers()
    void FontHelpers::FontHelpers() {
        field_32 = (GUIManager*)0;
    }

    // 0x1008e0070, 16 bytes, complete-object constructor, placed by class name and debug map
    // FontHelpers::FontHelpers(): jumps straight to the base-object constructor

    // 0x1008e0080, 64 bytes, base-object destructor, placed by class name and debug map
    // FontHelpers::~FontHelpers()
    void FontHelpers::~FontHelpers() {
        char cVar1;

        cVar1 = m_modIcons.empty();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_modIcons.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "FontHelpers.cpp",
                      57, (char*)0);
        }
    }

    // 0x1008e00c0, 16 bytes, complete-object destructor, placed by class name and debug map
    // FontHelpers::~FontHelpers(): jumps straight to the base-object destructor

    // 0x1008e00d0, 16 bytes, placed by class name and debug map
    // FontHelpers::Initialise(GUIManager*)
    void FontHelpers::Initialise(GUIManager* param_1) {
        field_32 = param_1;
    }

    // 0x1008e00e0, 32 bytes, placed by class name and debug map
    // FontHelpers::Shutdown()
    void FontHelpers::Shutdown() {
        m_modIcons.clear();
    }

    // 0x1008e0150, 32 bytes, placed by class name and debug map
    // FontHelpers::SetModIcons(Array<FontHelpers::ModIconReference, eastl::allocator>&&)
    void FontHelpers::SetModIcons(Array* param_1) {
        m_modIcons.swap(param_1);
    }

    // 0x1008e0170, 208 bytes, placed by class name and debug map
    // FontHelpers::DrawString(StringView, int, int, unsigned int, TextProperties const&)
    undefined8 FontHelpers::DrawString(StringView param_1, int param_2, int param_3, uint param_4,
                                       TextProperties* param_5) {
        char cVar1;
        byte bVar2;
        byte bVar3;
        FontMetrics* this_00;
        undefined8 uVar4;
        undefined4 in_register_0000008c;
        TextProperties* this_01;
        int iVar5;
        StringView SVar6;
        TextProperties* in_stack_ffffffffffffffa0;
        StringView local_58;
        undefined4 local_34;

        this_01 = (TextProperties*)CONCAT44(in_register_0000008c, param_4);
        cVar1 = param_1.field_0->empty();
        uVar4 = 0;
        if (cVar1 == '\0') {
            local_34 = (int)param_1.field_8;
            ResetState(this_01);
            this_00 = (FontMetrics*)this_01->GetFontMetrics();
            cVar1 = this_00->IsVectorFont();
            if (cVar1 == '\0') {
                iVar5 = this_00->GetVerticalSpacing();
            } else {
                bVar2 = this_00->GetMaxAscent();
                bVar3 = this_00->GetMaxDescent();
                iVar5 = (uint)bVar2 - (uint)bVar3;
            }
            iVar5 = iVar5 + param_2;
            new (&local_58) StringView(param_1.field_0);
            SVar6.field_8._0_4_ = local_34;
            SVar6.field_0 = (ulong)&local_58;
            SVar6.field_8._4_4_ = 0;
            uVar4 = DrawAlignedString((FontHelpers*)this, SVar6, iVar5, param_3, 0, (fixed_vector*)this_01,
                                      in_stack_ffffffffffffffa0);
        }
        return uVar4;
    }

    // 0x1008e02e0, 576 bytes, placed by class name
    // FontHelpers::DrawAlignedString(StringView, int, int, int, eastl::fixed_vector<std::pair<int, int>, 256ul, true, eastl::allocator> const*, TextProperties const&)
    /* FontHelpers::DrawAlignedString(StringView, int, int, int,
   eastl::fixed_vector<std::pair<int, int>, 256ul, true, eastl::allocator> const*,
   TextProperties const&) */

    int FontHelpers::DrawAlignedString(StringView param_1, int param_2, int param_3, int param_4, fixed_vector* param_5,
                                       TextProperties* param_6) {
        char cVar1;
        undefined1 uVar2;
        byte bVar3;
        int iVar4;
        int iVar5;
        undefined4 uVar6;
        uchar* puVar7;
        StringView* this_00;
        StringView* this_01;
        FontHelpers* this_02;
        undefined4 in_register_0000008c;
        undefined8 uVar10;
        StringView SVar11;
        StringView SVar12;
        StringView SVar13;
        StringView SVar14;
        StringView SVar15;
        StringView SVar16;
        TextProperties* in_stack_ffffffffffffff28;
        StringView local_d0;
        StringView local_c0;
        StringView local_b0;
        StringView local_a0;
        StringView local_90;
        StringView local_80;
        StringView local_70;
        StringView local_60;
        FontHelpers* local_48;
        undefined8 local_40;

        uVar10 = CONCAT44(in_register_0000008c, param_4);
        this_01 = (StringView*)param_1.field_0;
        SVar11.field_8._0_4_ = (int)param_1.field_8;
        local_48 = this;
        cVar1 = this_01->empty();
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!string.empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "FontHelpers.cpp",
                      1241, (char*)0);
        }
        puVar7 = (uchar*)param_5->GetFontMetrics();
        uVar2 = param_5->GetHorizontalAlignment();
        local_40 = uVar10;
        switch (uVar2) {
        case 0:
            new (&local_d0) StringView(this_01);
            SVar11.field_0 = (ulong)&local_d0;
            SVar11.field_8._4_4_ = 0;
            iVar4 = DrawStringInner(local_48, SVar11, param_2, param_4, param_5, in_stack_ffffffffffffff28);
            return iVar4;
        case 1:
            new (&local_c0) StringView(this_01);
            bVar3 = param_5->HasFlag(1);
            SVar13.field_8 = puVar7;
            SVar13.field_0 = (ulong)&local_c0;
            iVar5 = GetStringWidth(SVar13, (FontMetrics*)(ulong)bVar3, (bool)12);
            this_00 = &local_b0;
            StringView::StringView(this_00, this_01);
            iVar4 = iVar5 / 2;
            break;
        case 2:
            new (&local_a0) StringView(this_01);
            bVar3 = param_5->HasFlag(1);
            SVar14.field_8 = puVar7;
            SVar14.field_0 = (ulong)&local_a0;
            iVar5 = GetStringWidth(SVar14, (FontMetrics*)(ulong)bVar3, (bool)12);
            this_00 = &local_90;
            StringView::StringView(this_00, this_01);
            iVar4 = iVar5;
            break;
        case 3:
            new (&local_80) StringView(this_01);
            bVar3 = param_5->HasFlag(1);
            SVar15.field_8 = puVar7;
            SVar15.field_0 = (ulong)&local_80;
            iVar5 = GetStringWidth(SVar15, (FontMetrics*)(ulong)bVar3, (bool)12);
            new (&local_70) StringView(this_01);
            bVar3 = param_5->HasFlag(1);
            SVar16.field_8._0_4_ = iVar5;
            SVar16.field_0 = (ulong)&local_70;
            SVar16.field_8._4_4_ = 0;
            uVar6 = CalculateExtraSpaceWidthForJustify(SVar16, (uint)param_3, (uint)bVar3, (bool)(undefined1)param_3);
            this_02 = local_48;
            *(undefined4*)&local_48->field_16 = uVar6;
            new (&local_60) StringView(this_01);
            this_00 = &local_60;
            iVar4 = iVar5;
            goto LAB_1008e04e4;
        default:
            bVar3 = param_5->GetHorizontalAlignment();
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "fonts/FontHelpers.cpp",
                            1269, "FontHelpers: Unknown align mode: %i", (ulong)bVar3);
        }
        this_02 = local_48;
    LAB_1008e04e4:
        SVar12.field_8._0_4_ = (int)SVar11.field_8 - iVar4;
        SVar12.field_0 = (ulong)this_00;
        SVar12.field_8._4_4_ = 0;
        DrawStringInner(this_02, SVar12, param_2, (int)local_40, param_5, in_stack_ffffffffffffff28);
        return iVar5;
    }

    // 0x1008e0520, 432 bytes, placed by class name
    // FontHelpers::DrawStringIn3DSpace(math::Vector3T<float> const&, math::Matrix44T<float> const&, math::Matrix44T<float> const&, char const*, unsigned long, TextProperties const&)
    void FontHelpers::DrawStringIn3DSpace(Vector3T* param_1, Matrix44T* param_2, Matrix44T* param_3, char* param_4,
                                          ulong param_5, TextProperties* param_6) {
        int iVar1;
        float* pfVar2;
        vector* pvVar3;
        Matrix44T* this_01;
        StringView SVar4;
        Matrix44T aMStackY_1ce8[128];
        TextProperties* in_stack_ffffffffffffff18;
        undefined1 local_a8[88];
        float local_38;
        float local_34;

        this_01 = aMStackY_1ce8 + 128;
        new (this_01) math::Matrix44T<float>();
        math::operator*((math*)local_a8, param_3, param_2);
        math::Matrix44T<float>::operator=((Matrix44T<float>*)this_01, (Matrix44T*)local_a8);
        new (local_a8) math::Vector4T<float>(param_1, 1.0);
        math::Vector4T<float>::operator*=((Vector4T<float>*)local_a8, this_01);
        pfVar2 = (float*)local_a8->qw();
        if (0.0 < *pfVar2) {
            pfVar2 = (float*)local_a8->qw();
            local_34 = *pfVar2;
            pvVar3 = local_a8->SSOBeginPtr(this_01);
            *(float*)pvVar3 = *(float*)pvVar3 / local_34;
            pfVar2 = (float*)local_a8->qw();
            local_34 = *pfVar2;
            pfVar2 = (float*)local_a8->y();
            *pfVar2 = *pfVar2 / local_34;
            pvVar3 = local_a8->SSOBeginPtr(this_01);
            local_34 = *(float*)pvVar3 * 0.5 + 0.5;
            iVar1 = (((FontHelpers*)this)->field_32)->GetStatus();
            local_34 = (float)iVar1 * local_34;
            pfVar2 = (float*)local_a8->y();
            local_38 = *pfVar2 * 0.5 + 0.5;
            iVar1 = (((FontHelpers*)this)->field_32)->GetAliveCount();
            local_38 = (float)iVar1 * local_38;
            new ((local_a8 + 72)) StringView(param_4, param_5);
            SVar4.field_8._0_4_ = (int)local_34;
            SVar4.field_0 = (ulong)(local_a8 + 72);
            SVar4.field_8._4_4_ = 0;
            DrawString((FontHelpers*)this, SVar4, (int)local_38, 0, (uint)param_6, in_stack_ffffffffffffff18);
        }
    }

    // 0x1008e0730, 1504 bytes, placed by class name
    // FontHelpers::DrawStringMultiline(StringView, int, int, int, int, unsigned int*, TextProperties const&)
    void FontHelpers::DrawStringMultiline(StringView param_1, int param_2, int param_3, int param_4, int param_5,
                                          uint* param_6, TextProperties* param_7) {
        FontHelpers* pFVar1;
        char cVar2;
        byte bVar3;
        undefined1 uVar4;
        int iVar5;
        uint uVar6;
        uint uVar7;
        int iVar8;
        undefined4 uVar9;
        int iVar10;
        FontMetrics* pFVar11;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        char* pcVar12;
        Layout* this_01;
        ulong uVar13;
        StringView* pSVar14;
        long lVar15;
        ulong uVar16;
        undefined1 uVar18;
        ulong uVar19;
        StringView SVar20;
        StringView SVar21;
        StringView SVar22;
        StringView SVar23;
        StringView SVar24;
        StringView SVar25;
        StringView SVar26;
        StringView SVar27;
        StringView SVar28;
        StringView SVar29;
        undefined4 in_stack_0000000c;
        TextFlags in_stack_fffffffffffffce8;
        undefined4 in_stack_fffffffffffffcec;
        StringView local_308;
        StringView local_2f8;
        StringView local_2e8;
        StringView local_2d8;
        StringView local_2c8;
        StringView local_2b8;
        StringView local_2a8;
        StringView local_298;
        StringView local_288;
        StringView local_278;
        StringView local_268;
        StringView* local_258;
        int local_24c;
        FontMetrics* local_248;
        FontHelpers* local_240;
        int local_234;
        uint local_230;
        uint local_22c;
        fixed_string<char, 256, true, eastl::allocator> local_228[296];
        fixed_vector<StringView, 10ul, true, BucketAllocatorEASTL> local_100[200];
        long local_38;

        pSVar14 = (StringView*)param_1.field_0;
        local_234 = (int)param_1.field_8;
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_230 = param_3;
        cVar2 = pSVar14->empty();
        if (cVar2 == '\0') {
            local_240 = this;
            local_22c = param_4;
            ResetState(param_6);
            pFVar11 = (FontMetrics*)param_6->GetFontMetrics();
            iVar5 = param_6->GetLineSpacing();
            local_24c = iVar5;
            uVar6 = pFVar11->GetMaxAscent();
            local_248 = pFVar11;
            uVar7 = pFVar11->GetMaxDescent();
            iVar8 = *(int*)PTR_m_overrideDrawAutoWrapWidth_100ee69a0;
            eastl::fixed_vector<StringView, 10ul, true, BucketAllocatorEASTL>::fixed_vector(local_100);
            local_258 = pSVar14;
            new (&local_308) StringView(pSVar14);
            pFVar11 = (FontMetrics*)0;
            if (iVar5 * 2 <= (int)local_22c) {
                pFVar11 = (FontMetrics*)&local_230;
            }
            if ((int)((uVar6 & 255) + iVar5 + (uVar7 & 255)) <= (int)local_22c) {
                pFVar11 = (FontMetrics*)&local_230;
            }
            if (-1 < iVar8) {
                pFVar11 = (FontMetrics*)PTR_m_overrideDrawAutoWrapWidth_100ee69a0;
            }
            bVar3 = param_6->GetLightLevelsBelow();
            SVar20.field_8 = (uchar*)local_248;
            SVar20.field_0 = (ulong)&local_308;
            iVar8 =
                SplitString((fixed_vector*)local_100, SVar20, pFVar11, (int*)(ulong)bVar3, in_stack_fffffffffffffce8);
            uVar6 = local_22c;
            pFVar1 = local_240;
            if ((int*)CONCAT44(in_stack_0000000c, param_5) == (int*)0) {
                iVar10 = 1;
                if (0 < (int)local_22c / iVar5) {
                    iVar10 = (int)local_22c / iVar5;
                }
            } else {
                iVar10 = *(int*)CONCAT44(in_stack_0000000c, param_5);
            }
            eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_228);
            if ((0 < iVar10) && (iVar10 <= iVar8)) {
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 10ul, 8ul, 0ul, true,
                                                                        BucketAllocatorEASTL>>::resize((ulong)
                                                                                                           local_100);
                this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)local_100->back();
                pcVar12 = (char*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
                this_01 = (Layout*)local_100->back();
                uVar13 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(this_01);
                local_228->assign(pcVar12, uVar13);
                StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_2f8,
                                                                                              (fixed_string*)local_228);
                uVar7 = local_230;
                bVar3 = param_6->GetLightLevelsBelow();
                SVar21.field_8 = (uchar*)local_248;
                SVar21.field_0 = (ulong)&local_2f8;
                TruncateString<eastl::fixed_string<char, 256, true, eastl::allocator>>(
                    (fixed_string*)local_228, SVar21, (FontMetrics*)(ulong)uVar7, (uint)bVar3,
                    in_stack_fffffffffffffce8, iVar10 < iVar8);
                StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_2e8,
                                                                                              (fixed_string*)local_228);
                pSVar14 = (StringView*)local_100->back();
                StringView::operator=(pSVar14, &local_2e8);
            }
            uVar4 = param_6->GetVerticalAlignment();
            uVar9 = local_100->size();
            uVar13 = (ulong)uVar6;
            iVar5 = param_2;
            iVar8 = GetAlignedYOffset(pFVar1, local_248, uVar4, &local_24c, uVar13, uVar9);
            local_22c = local_24c;
            lVar15 = local_100->size();
            if (lVar15 != 0) {
                uVar19 = 0;
                do {
                    uVar18 = (undefined1)uVar13;
                    pSVar14 = (StringView*)eastl::vector<
                        StringView, eastl::fixed_vector_allocator<16ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                    operator[](
                        (vector<StringView,
                                eastl::fixed_vector_allocator<16ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)
                            local_100,
                        uVar19);
                    uVar4 = param_6->GetHorizontalAlignment();
                    switch (uVar4) {
                    case 0:
                        new (&local_2d8) StringView(pSVar14);
                        uVar13 = 0;
                        SVar22.field_8._0_4_ = local_234;
                        SVar22.field_0 = (ulong)&local_2d8;
                        SVar22.field_8._4_4_ = 0;
                        DrawStringInner(local_240, SVar22, iVar8, 0, (fixed_vector*)param_6,
                                        (TextProperties*)CONCAT44(in_stack_fffffffffffffcec, iVar5));
                        break;
                    case 1:
                        new (&local_2c8) StringView(pSVar14);
                        bVar3 = param_6->HasFlag(1);
                        SVar26.field_8 = (uchar*)local_248;
                        SVar26.field_0 = (ulong)&local_2c8;
                        iVar10 = GetStringWidth(SVar26, (FontMetrics*)(ulong)bVar3, (bool)244);
                        new (&local_2b8) StringView(pSVar14);
                        SVar23.field_8._0_4_ = (int)(local_230 - iVar10) / 2 + local_234;
                        uVar13 = 0;
                        SVar23.field_0 = (ulong)&local_2b8;
                        SVar23.field_8._4_4_ = 0;
                        DrawStringInner(local_240, SVar23, iVar8, 0, (fixed_vector*)param_6,
                                        (TextProperties*)CONCAT44(in_stack_fffffffffffffcec, iVar5));
                        break;
                    case 2:
                        new (&local_2a8) StringView(pSVar14);
                        bVar3 = param_6->HasFlag(1);
                        SVar27.field_8 = (uchar*)local_248;
                        SVar27.field_0 = (ulong)&local_2a8;
                        iVar10 = GetStringWidth(SVar27, (FontMetrics*)(ulong)bVar3, (bool)244);
                        new (&local_298) StringView(pSVar14);
                        SVar24.field_8._0_4_ = (local_234 - iVar10) + local_230;
                        uVar13 = 0;
                        SVar24.field_0 = (ulong)&local_298;
                        SVar24.field_8._4_4_ = 0;
                        DrawStringInner(local_240, SVar24, iVar8, 0, (fixed_vector*)param_6,
                                        (TextProperties*)CONCAT44(in_stack_fffffffffffffcec, iVar5));
                        break;
                    case 3:
                        lVar15 = local_100->size();
                        if (uVar19 == lVar15 - 1U) {
                            new (&local_288) StringView(pSVar14);
                            bVar3 = param_6->HasFlag(1);
                            SVar28.field_8 = (uchar*)local_248;
                            SVar28.field_0 = (ulong)&local_288;
                            uVar9 = GetStringWidth(SVar28, (FontMetrics*)(ulong)bVar3, (bool)244);
                            new (&local_278) StringView(local_258);
                            uVar6 = local_230;
                            bVar3 = param_6->HasFlag(1);
                            SVar29.field_8._0_4_ = uVar9;
                            SVar29.field_0 = (ulong)&local_278;
                            SVar29.field_8._4_4_ = 0;
                            uVar9 = CalculateExtraSpaceWidthForJustify(SVar29, uVar6, (uint)bVar3, (bool)uVar18);
                            *(undefined4*)&local_240->field_16 = uVar9;
                        }
                        new (&local_268) StringView(pSVar14);
                        uVar13 = 0;
                        SVar25.field_8._0_4_ = local_234;
                        SVar25.field_0 = (ulong)&local_268;
                        SVar25.field_8._4_4_ = 0;
                        DrawStringInner(local_240, SVar25, iVar8, 0, (fixed_vector*)param_6,
                                        (TextProperties*)CONCAT44(in_stack_fffffffffffffcec, iVar5));
                        break;
                    default:
                        bVar3 = param_6->GetHorizontalAlignment();
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/fonts/FontHelpers.cpp",
                                        219, "FontHelpers: Unknown align mode: %i", (ulong)bVar3);
                    }
                    uVar19 = uVar19 + 1;
                    uVar16 = local_100->size();
                    iVar8 = iVar8 + local_22c;
                } while (uVar19 < uVar16);
            }
            /* WARNING: Subroutine does not return */
            local_228->~fixed_string();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008e0d50, 960 bytes, placed by class name
    // FontHelpers::SplitString(eastl::fixed_vector<StringView, 10ul, true, BucketAllocatorEASTL>&, StringView, FontMetrics const&, int*, TextFlags)
    void FontHelpers::SplitString(fixed_vector* param_1, StringView param_2, FontMetrics* param_3, int* param_4,
                                  TextFlags param_5) {
        undefined4 uVar1;
        FontMetrics* pFVar2;
        ulong uVar3;
        char cVar4;
        byte bVar5;
        long lVar6;
        ulong uVar7;
        type* ptVar8;
        undefined8 extraout_RAX;
        type* ptVar9;
        ulong uVar10;
        uchar* extraout_RDX;
        int iVar11;
        undefined1 uVar12;
        undefined7 uVar13;
        uint uVar14;
        uint uVar15;
        StringView* this;
        int iVar16;
        StringView SVar17;
        StringView SVar18;
        StringView SVar19;
        TextFlags in_stack_ffffffffffffff08;
        StringView local_f0;
        StringView local_e0;
        StringView local_d0;
        StringView local_c0;
        undefined8 local_b0;
        uchar* local_a8;
        FontMetrics* local_a0;
        ulong local_98;
        type* local_90;
        ulong local_88;
        ulong local_80;
        type* local_78;
        char* local_70;
        ulong local_68;
        uint local_58;
        int local_54;
        StringView* local_50;
        undefined4 local_44;
        uint local_40;
        uint local_3c;
        uint local_38[2];

        uVar12 = SUB81(param_4, 0);
        uVar13 = (undefined7)((ulong)param_4 >> 8);
        local_a8 = param_2.field_8;
        local_50 = (StringView*)param_2.field_0;
        local_38[0] = CONCAT31(local_38[0]._1_3_, uVar12);
        local_88 = 0;
        lVar6 = local_50->HeapBeginPtr();
        if (lVar6 == 0) {
            local_3c = 0;
            this = local_50;
        } else {
            uVar10 = 4294967295;
            iVar16 = 0;
            local_3c = 0;
            local_54 = 0;
            local_58 = 0;
            local_44 = 0;
            this = local_50;
            local_a0 = param_3;
            do {
                uVar3 = local_88;
                local_78 = (type*)CONCAT44(local_78._4_4_, iVar16);
                local_40 = (uint)uVar10;
                new (&local_f0) StringView(this);
                SVar17.field_8 = (uchar*)&local_88;
                SVar17.field_0 = (ulong)&local_f0;
                local_80 = GetNextElementLength(SVar17, (ulong*)(ulong)local_38[0], in_stack_ffffffffffffff08);
                std::get<0ul, unsigned int, unsigned int>((pair*)&local_80);
                ptVar8 = std::get<1ul, unsigned int, unsigned int>((pair*)&local_80);
                local_98 = uVar3;
                local_c0.substr((ulong)this, (long)(int)uVar3);
                new (&local_e0) StringView(&local_c0);
                SVar18.field_8._0_4_ = local_44;
                SVar18.field_0 = (ulong)&local_e0;
                SVar18.field_8._4_4_ = 0;
                GetElementWidth(SVar18, *(uint*)ptVar8, (uint)local_a8, (FontMetrics*)CONCAT71(uVar13, uVar12));
                local_b0 = extraout_RAX;
                ptVar9 = std::get<0ul, unsigned int, unsigned int>((pair*)&local_b0);
                ptVar8 = std::get<1ul, unsigned int, unsigned int>((pair*)&local_b0);
                uVar1 = *(undefined4*)ptVar8;
                StringView::StringView<5ul>(&local_d0, "<br>");
                SVar19.field_8 = extraout_RDX;
                SVar19.field_0 = (ulong)&local_d0;
                cVar4 = StringView::operator==(&local_c0, SVar19);
                this = local_50;
                uVar10 = local_98;
                pFVar2 = local_a0;
                local_44 = uVar1;
                if (cVar4 == '\0') {
                    local_90 = ptVar8;
                    if (*(int*)ptVar9 == 0) {
                        uVar10 = (ulong)local_40;
                        iVar16 = (int)local_78;
                    } else {
                        iVar16 = *(int*)ptVar9 + (int)local_78;
                        if ((local_a0 == (FontMetrics*)0) || (*(int*)&local_a0->field_0 < 1)) {
                            uVar10 = (ulong)local_40;
                        } else {
                            uVar15 = (uint)local_98;
                            uVar14 = local_40;
                            local_78 = ptVar9;
                            if (*(int*)ptVar8 == spaceCharCode) {
                                bVar5 = local_38->HasFlag(4);
                                local_58 = (uint)(bVar5 ^ 1);
                                uVar14 = uVar15;
                                local_54 = iVar16;
                            }
                            if (*(int*)&pFVar2->field_0 < iVar16) {
                                cVar4 = local_38->HasFlag(2);
                                if ((cVar4 == '\0') && (-1 < (int)uVar14)) {
                                    lVar6 = end();
                                    local_70 = (char*)((int)local_3c + lVar6);
                                    uVar15 = uVar14 + 1;
                                    local_68 = CONCAT44(local_68._4_4_, uVar15 - (local_3c + local_58));
                                    eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 10ul, 8ul, 0ul, true,
                                                                                            BucketAllocatorEASTL>>::
                                        emplace_back<char const*, int>(
                                            (vector<StringView, eastl::fixed_vector_allocator<
                                                                    16ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)
                                                param_1,
                                            &local_70, (int*)&local_68);
                                    iVar16 = iVar16 - local_54;
                                    local_44 = 0;
                                    uVar14 = 4294967295;
                                    this = local_50;
                                    local_3c = uVar15;
                                } else {
                                    lVar6 = end();
                                    local_70 = (char*)(lVar6 + (int)local_3c);
                                    local_68 = CONCAT44(local_68._4_4_, uVar15 - local_3c);
                                    eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 10ul, 8ul, 0ul, true,
                                                                                            BucketAllocatorEASTL>>::
                                        emplace_back<char const*, int>(
                                            (vector<StringView, eastl::fixed_vector_allocator<
                                                                    16ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)
                                                param_1,
                                            &local_70, (int*)&local_68);
                                    iVar16 = *(int*)local_78;
                                    uVar14 = 4294967295;
                                    local_44 = 0;
                                    local_3c = uVar15;
                                }
                            }
                            if (*(int*)local_90 == hyphenCharCode) {
                                local_58 = 0;
                                local_54 = iVar16;
                            } else {
                                uVar10 = (ulong)uVar14;
                            }
                        }
                    }
                } else {
                    lVar6 = local_50->end();
                    local_70 = (char*)((int)local_3c + lVar6);
                    iVar11 = (int)local_98;
                    iVar16 = iVar11 - local_3c;
                    lVar6 = local_c0.HeapBeginPtr();
                    local_68 = lVar6 + iVar16;
                    eastl::vector<StringView,
                                  eastl::fixed_vector_allocator<16ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                        emplace_back<char const*, unsigned long>(
                            (vector<StringView,
                                    eastl::fixed_vector_allocator<16ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)
                                param_1,
                            &local_70, &local_68);
                    local_3c = iVar11 + 4;
                    iVar16 = 0;
                    uVar10 = 4294967295;
                }
                uVar3 = local_88;
                uVar7 = HeapBeginPtr();
                uVar10 = uVar10 & 4294967295;
            } while (uVar3 < uVar7);
        }
        iVar16 = HeapBeginPtr();
        uVar14 = local_3c;
        if ((int)local_3c < iVar16) {
            lVar6 = end();
            local_c0.field_0 = lVar6 + (int)uVar14;
            lVar6 = HeapBeginPtr();
            local_80 = lVar6 - (int)uVar14;
            eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                emplace_back<char const*, unsigned long>(
                    (vector<StringView,
                            eastl::fixed_vector_allocator<16ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)param_1,
                    (char**)&local_c0, &local_80);
        }
        param_1->size();
    }

    // 0x1008e1560, 400 bytes, placed by class name
    // FontHelpers::GetAlignedYOffset(FontMetrics const&, FontAlign, int&, int, int, int) const
    int FontHelpers::GetAlignedYOffset(FontMetrics* param_1, byte param_3, int* param_4, int param_5, int param_6,
                                       int param_7) {
        int iVar1;
        byte bVar3;
        uint uVar4;
        uint uVar5;
        int iVar6;

        if (param_6 < 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("contentRows >= 1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "FontHelpers.cpp",
                      1308, (char*)0);
        }
        if (3 < param_3) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "fonts/FontHelpers.cpp",
                            1365, "FontHelpers: Unknown vertical align mode");
        }
        iVar6 = param_5 - (param_6 + -1) * *param_4;
        switch (param_3) {
        case 0:
            bVar3 = param_1->GetMaxAscent();
            param_7 = (uint)bVar3 + param_7;
            break;
        case 1:
            if (param_1->IsVectorFont() == '\0') {
                uVar4 = param_1->GetMaxAscent();
                bVar3 = param_1->GetMaxDescent();
                uVar5 = (uint)bVar3;
            } else {
                uVar4 = param_1->GetUpperCaseAscent();
                uVar5 = 0;
            }
            param_7 = (int)((iVar6 + (uVar4 & 255)) - uVar5) / 2 + param_7;
            break;
        case 2:
            bVar3 = param_1->GetMaxDescent();
            param_7 = (iVar6 + param_7) - (uint)bVar3;
            break;
        case 3:
            if (param_6 == 1) {
                param_7 = GetAlignedYOffset(this, param_1, 1, param_4, param_5, 1, param_7);
            } else {
                bVar3 = param_1->GetMaxAscent();
                param_7 = (uint)bVar3 + param_7;
                iVar1 = *param_4;
                if (iVar6 - iVar1 != 0 && iVar1 <= iVar6) {
                    iVar6 = (iVar6 - iVar1) / (param_6 + 1);
                    param_7 = param_7 + iVar6;
                    *param_4 = iVar1 + iVar6;
                }
            }
        }
        return param_7;
    }

    // 0x1008e1740, 3424 bytes, placed by class name
    // FontHelpers::DrawStringInner(StringView, int, int, eastl::fixed_vector<std::pair<int, int>, 256ul, true, eastl::allocator> const*, TextProperties const&)
    /* FontHelpers::DrawStringInner(StringView, int, int,
   eastl::fixed_vector<std::pair<int, int>, 256ul, true, eastl::allocator> const*,
   TextProperties const&) */

    int FontHelpers::DrawStringInner(StringView param_1, int param_2, int param_3, fixed_vector* param_4,
                                     TextProperties* param_5) {
        array<int, 2ul>* this_00;
        ulong uVar1;
        vector<eastl::pair<int, int>, eastl::allocator>* pvVar2;
        bool bVar3;
        char cVar4;
        byte bVar5;
        byte bVar6;
        uint uVar7;
        int iVar8;
        int iVar9;
        undefined4 uVar10;
        uint uVar11;
        Font* pFVar12;
        shared_ptr* psVar13;
        FontMetrics* pFVar14;
        long lVar15;
        char* pcVar16;
        ulong uVar17;
        int* piVar18;
        int* piVar19;
        undefined8 uVar20;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar21;
        GUIManager* this_01;
        SpriteAtlas* pSVar22;
        FastPool<audio::SoundInstance, int>* pFVar23;
        MapArea* pMVar24;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar25;
        undefined8 uVar26;
        uchar* extraout_RDX;
        uchar* extraout_RDX_00;
        int iVar27;
        FontHelpers* pFVar28;
        EntityHighlightState* this_02;
        Layout* pLVar29;
        undefined4 in_register_00000084;
        int iVar30;
        StringView SVar31;
        StringView SVar32;
        StringView SVar33;
        StringView SVar34;
        StringView SVar35;
        shared_ptr* in_stack_fffffffffffffe48;
        undefined8 in_stack_fffffffffffffe50;
        undefined4 uVar36;
        undefined8 in_stack_fffffffffffffe58;
        StringView local_1a0;
        StringView local_190;
        StringView local_180;
        undefined1 local_170[24];
        StringView local_158;
        StringView local_148;
        StringView local_138;
        shared_ptr local_128;
        StringView local_118;
        undefined1 local_108[24];
        int local_f0;
        uint local_ec;
        uint local_e8;
        undefined4 local_e4;
        undefined4 local_e0;
        undefined4 local_dc;
        ulong local_d8;
        TextProperties* local_d0;
        vector<eastl::pair<int, int>, eastl::allocator>* local_c8;
        shared_ptr* local_c0;
        int* local_b8;
        Layout* local_b0;
        int* local_a8;
        GUIManager* local_a0;
        GUIManager* local_98;
        ulong local_90;
        int local_84;
        int* local_80;
        uint local_74;
        FontMetrics* local_70;
        uint local_64;
        FontHelpers* local_60;
        char local_51;
        shared_ptr* local_50;
        int local_44;
        int* local_40;
        int local_34;

        pLVar29 = (Layout*)param_1.field_0;
        local_74 = (uint)param_1.field_8;
        local_60 = this;
        local_34 = param_2;
        pFVar12 = (Font*)param_4->GetFont();
        psVar13 = (shared_ptr*)pFVar12->GetCharactersTexture();
        new (&local_128) shared_ptr<oldscape::dash3d::Decor>(psVar13);
        bVar3 = shared_ptr::operator_cast_to_bool(&local_128);
        uVar36 = (undefined4)((ulong)in_stack_fffffffffffffe50 >> 32);
        if (bVar3) {
            pFVar14 = (FontMetrics*)param_4->GetFontMetrics();
            uVar7 = pFVar14->GetGlyphAdvance(tabCharCode);
            cVar4 = pFVar14->IsVectorFont();
            local_d0 = (TextProperties*)param_4;
            local_c8 = (vector<eastl::pair<int, int>, eastl::allocator>*)CONCAT44(in_register_00000084, param_3);
            local_70 = pFVar14;
            if (cVar4 == '\0') {
                iVar8 = pFVar14->GetVerticalSpacing();
                local_34 = local_34 - iVar8;
            }
            local_d8 = 0;
            lVar15 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar29);
            local_40 = (int*)(ulong)local_74;
            if (lVar15 != 0) {
                local_e8 = uVar7 & 255;
                local_50 = (shared_ptr*)4294967295;
                local_b8 = (int*)18446744073709551615;
                local_40 = (int*)(ulong)local_74;
                iVar8 = 0;
                local_90 = 0;
                local_b0 = pLVar29;
                do {
                    piVar19 = local_b8;
                    uVar1 = local_d8;
                    iVar30 = (int)local_d8;
                    pcVar16 = (char*)pLVar29->end();
                    uVar17 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(pLVar29);
                    uVar7 = stringtools::GetUTF8NextChar(pcVar16, &local_d8, uVar17);
                    local_80 = piVar19;
                    pcVar16 = (char*)((long)piVar19 + 1);
                    local_b8 = (int*)pcVar16;
                    local_44 = ToCodeMap(uVar7);
                    if (local_44 == tabCharCode) {
                        local_40 =
                            (int*)(ulong)(((int)((int)local_40 - local_74) / (int)local_e8 + 1) * local_e8 + local_74);
                    } else {
                        cVar4 = local_d0->HasFlag(1);
                        if (cVar4 == '\0') {
                            if (local_44 == ltCharCode) {
                                local_50 = (shared_ptr*)(uVar1 & 4294967295);
                                goto LAB_1008e1861;
                            }
                            pcVar16 = (char*)local_50;
                            if ((local_44 != gtCharCode) || (uVar7 = (uint)local_50, uVar7 == 4294967295))
                                goto LAB_1008e18f4;
                            pcVar16 = (char*)(long)(int)(iVar30 + ~uVar7);
                            local_118.substr((ulong)local_b0, (long)(int)(uVar7 + 1));
                            new (&local_1a0) StringView(&local_118);
                            SVar31.field_8 = extraout_RDX;
                            SVar31.field_0 = (ulong)&local_1a0;
                            ConvertTagCharCodes((FontHelpers*)local_170, SVar31);
                            local_51 = local_170->IsActive();
                            if ((bool)local_51) {
                                piVar19 = (int*)eastl::optional<unsigned int>::value();
                                local_44 = *piVar19;
                            LAB_1008e1a1b:
                                piVar19 = (int*)((ulong)local_40 & 4294967295);
                                iVar30 = local_34;
                            } else {
                                StringView::StringView<5ul>(&local_180, "img=");
                                SVar32.field_8 = (uchar*)&local_180;
                                SVar32.field_0 = (ulong)&local_118;
                                local_190.suffix_of(SVar32);
                                cVar4 = local_190.empty();
                                if (cVar4 == '\0') {
                                    bVar3 = FromString<StringView, int>(&local_190, (int*)local_108, 10);
                                    uVar36 = local_108._0_4_;
                                    if ((!bVar3) || (iVar30 = m_modIcons.end(), iVar30 <= (int)uVar36)) {
                                    LAB_1008e1d84:
                                        uVar7 = (uint)local_40;
                                        iVar30 = local_34;
                                    } else {
                                        piVar19 =
                                            (int*)Array<FontHelpers::ModIconReference, eastl::allocator>::operator[](
                                                (Array<FontHelpers::ModIconReference, eastl::allocator>*)&m_modIcons,
                                                (long)(int)local_108._0_4_);
                                        psVar13 = (shared_ptr*)(piVar19 + 2);
                                        bVar3 = shared_ptr::operator_cast_to_bool(psVar13);
                                        pvVar2 = local_c8;
                                        if (!bVar3)
                                            goto LAB_1008e1d84;
                                        if (local_c8 == (vector<eastl::pair<int, int>, eastl::allocator>*)0) {
                                            uVar7 = (uint)local_40;
                                            iVar30 = local_34;
                                        } else {
                                            iVar30 =
                                                eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(local_c8);
                                            uVar36 = (undefined4)((ulong)in_stack_fffffffffffffe48 >> 32);
                                            if ((long)local_80 < (long)iVar30) {
                                                piVar18 = (int*)
                                                    eastl::vector<std::pair<int, int>,
                                                                  eastl::fixed_vector_allocator<
                                                                      8ul, 256ul, 4ul, 0ul, true, eastl::allocator>>::
                                                    operator[](
                                                        (vector<std::pair<int, int>,
                                                                eastl::fixed_vector_allocator<8ul, 256ul, 4ul, 0ul,
                                                                                              true, eastl::allocator>>*)
                                                            pvVar2,
                                                        (ulong)local_b8);
                                                uVar7 = *piVar18 + (int)local_40;
                                                iVar30 = piVar18[1] + local_34;
                                            } else {
                                                uVar7 = (uint)local_40;
                                                iVar30 = local_34;
                                                if ((local_90 & 1) == 0) {
                                                    uVar20 = logger::default_logger();
                                                    pLVar29 = local_b0;
                                                    local_50 = (shared_ptr*)eastl::basic_string<
                                                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>::Layout::
                                                        HeapBeginPtr(local_b0);
                                                    in_stack_fffffffffffffe50 = pLVar29->end();
                                                    local_90 = CONCAT71((int7)((ulong)pcVar16 >> 8), 1);
                                                    in_stack_fffffffffffffe48 =
                                                        (shared_ptr*)CONCAT44(uVar36, (int)local_50);
                                                    logger::Logger::Log(
                                                        uVar20, 0, 3,
                                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                        "OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/FontHelpers.cpp",
                                                        1039,
                                                        "Custom Offsets supplied for string \'%.*s\' is shorter than "
                                                        "the string",
                                                        in_stack_fffffffffffffe48, in_stack_fffffffffffffe50);
                                                    uVar7 = (uint)local_40;
                                                    iVar30 = local_34;
                                                }
                                            }
                                        }
                                        local_50 = psVar13;
                                        pcVar21 =
                                            (compressed_pair_imp<
                                                std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                                eastl::allocator, 0>*)
                                                shared_ptr<SpriteAtlasReference>::operator->(
                                                    (shared_ptr<SpriteAtlasReference>*)psVar13);
                                        pFVar28 = local_60;
                                        local_c0 = (shared_ptr*)eastl::compressed_pair_imp<
                                            std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                            eastl::allocator, 0>::second(pcVar21);
                                        bVar3 = shared_ptr::operator_cast_to_bool(local_c0);
                                        uVar36 = (undefined4)((ulong)in_stack_fffffffffffffe50 >> 32);
                                        if (bVar3) {
                                            cVar4 = local_70->IsVectorFont();
                                            pFVar14 = local_70;
                                            local_a8 = piVar19;
                                            local_84 = iVar30;
                                            local_64 = uVar7;
                                            if (cVar4 == '\0') {
                                                uVar10 = local_70->GetVerticalSpacing();
                                                local_a0 = (GUIManager*)CONCAT44(local_a0._4_4_, uVar10);
                                                bVar5 = pFVar14->GetMaxDescent();
                                                uVar10 = pFVar14->GetVerticalSpacing();
                                                local_98 = (GUIManager*)CONCAT44(local_98._4_4_, uVar10);
                                                bVar6 = pFVar14->GetMaxAscent();
                                                iVar30 = (int)(((uint)bVar5 + (int)local_a0 + (int)local_98) -
                                                               ((uint)bVar6 + piVar19[1])) /
                                                         2;
                                            } else {
                                                bVar5 = local_70->GetMaxAscent();
                                                iVar30 = pFVar14->GetVerticalSpacing();
                                                iVar30 = (iVar30 - piVar19[1]) / 2 - (uint)bVar5;
                                            }
                                            psVar13 = local_c0;
                                            pSVar22 = (SpriteAtlas*)shared_ptr<SpriteAtlas>::operator->(
                                                (shared_ptr<SpriteAtlas>*)local_c0);
                                            pFVar23 = (FastPool<audio::SoundInstance, int>*)
                                                          shared_ptr<SpriteAtlasReference>::operator->(
                                                              (shared_ptr<SpriteAtlasReference>*)local_50);
                                            iVar9 = FastPool<audio::SoundInstance, int>::capacity(pFVar23);
                                            lVar15 = pSVar22->GetSpriteRenderMapping(iVar9);
                                            local_a0 = pFVar28->field_32;
                                            iVar9 = *local_a8;
                                            local_50 = (shared_ptr*)CONCAT44(local_50._4_4_, local_a8[1]);
                                            this_02 = (EntityHighlightState*)(lVar15 + 88);
                                            uVar10 = this_02->GetOverbright();
                                            local_98 = (GUIManager*)CONCAT44(local_98._4_4_, uVar10);
                                            local_e4 = this_02->GetAlpha();
                                            local_e0 = this_02->MaxU();
                                            local_dc = this_02->MaxV();
                                            pMVar24 = (MapArea*)shared_ptr<SpriteAtlas>::operator->(
                                                (shared_ptr<SpriteAtlas>*)psVar13);
                                            iVar30 = iVar30 + local_84;
                                            pvVar25 =
                                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                                    pMVar24->GetOrigin();
                                            in_stack_fffffffffffffe48 =
                                                (shared_ptr*)eastl::vector<oldscape::dash3d::EntityHighlight*,
                                                                           BucketAllocatorEASTL>::end(pvVar25);
                                            in_stack_fffffffffffffe50 = CONCAT44(uVar36, 1);
                                            ((int)local_98)
                                                ->AddTexturedRectangle(local_e4, local_e0, local_dc, local_a0, local_64,
                                                                       iVar30, iVar9, (ulong)local_50 & 4294967295,
                                                                       4294967295, in_stack_fffffffffffffe48,
                                                                       in_stack_fffffffffffffe50);
                                            local_40 = (int*)(ulong)(uint)((int)local_40 + *local_a8);
                                            uVar7 = local_64;
                                        } else {
                                        }
                                    }
                                    piVar19 = (int*)((ulong)local_40 & 4294967295);
                                } else {
                                    StringView::StringView<8ul>(&local_158, "sprite=");
                                    SVar33.field_8 = (uchar*)&local_158;
                                    SVar33.field_0 = (ulong)&local_118;
                                    ((local_170 + 8))->suffix_of(SVar33);
                                    cVar4 = ((local_170 + 8))->empty();
                                    if (cVar4 != '\0') {
                                        new (&local_138) StringView(&local_118);
                                        SVar34.field_8 = extraout_RDX_00;
                                        SVar34.field_0 = (ulong)&local_138;
                                        local_60->UpdateState(SVar34);
                                        piVar19 = (int*)((ulong)local_40 & 4294967295);
                                        iVar30 = local_34;
                                        goto LAB_1008e1d99;
                                    }
                                    new (&local_148) StringView((StringView*)(local_170 + 8));
                                    SVar35.field_0 = &local_148;
                                    SVar35.field_8 = (uchar*)&local_f0;
                                    SVar35.field_0 = (ulong)SVar35.field_0;
                                    cVar4 = ParseSpriteData(SVar35, (int*)&local_ec, (int*)pcVar16);
                                    if (cVar4 == '\0')
                                        goto LAB_1008e1a1b;
                                    bVar3 = SVar35.field_0->operator_cast_to_bool();
                                    uVar36 = (undefined4)((ulong)in_stack_fffffffffffffe48 >> 32);
                                    if (!bVar3) {
                                        uVar20 = logger::default_logger();
                                        uVar10 = local_118.HeapBeginPtr();
                                        in_stack_fffffffffffffe50 = local_118.end();
                                        in_stack_fffffffffffffe48 = (shared_ptr*)CONCAT44(uVar36, uVar10);
                                        pcVar16 = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                  "libs/graphics/runetek7/fonts/FontHelpers.cpp";
                                        logger::Logger::Log(
                                            uVar20, 0, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "graphics/runetek7/fonts/FontHelpers.cpp",
                                            1150, "%.*s in text, but no sprite reference callback has been set",
                                            in_stack_fffffffffffffe48, in_stack_fffffffffffffe50);
                                        piVar19 = (int*)((ulong)local_40 & 4294967295);
                                        iVar30 = local_34;
                                        goto LAB_1008e1d99;
                                    }
                                    new (local_108) ModIconReference();
                                    pFVar14 = local_70;
                                    pcVar16 = (char*)(ulong)local_ec;
                                    cVar4 = std::function<bool(FontHelpers::ModIconReference&, int, int)>::operator()(
                                        (function<bool(FontHelpers::ModIconReference&, int,
                                                       int)>*)&m_callbackGetSpriteReference,
                                        (ModIconReference*)local_108, local_f0, local_ec);
                                    pvVar2 = local_c8;
                                    uVar7 = (uint)local_40;
                                    iVar30 = local_34;
                                    if (cVar4 == '\0') {
                                        uVar11 = uVar7;
                                    } else {
                                        if (local_c8 != (vector<eastl::pair<int, int>, eastl::allocator>*)0) {
                                            iVar30 =
                                                eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(local_c8);
                                            uVar36 = (undefined4)((ulong)in_stack_fffffffffffffe48 >> 32);
                                            if ((long)local_80 < (long)iVar30) {
                                                piVar19 = (int*)
                                                    eastl::vector<std::pair<int, int>,
                                                                  eastl::fixed_vector_allocator<
                                                                      8ul, 256ul, 4ul, 0ul, true, eastl::allocator>>::
                                                    operator[](
                                                        (vector<std::pair<int, int>,
                                                                eastl::fixed_vector_allocator<8ul, 256ul, 4ul, 0ul,
                                                                                              true, eastl::allocator>>*)
                                                            pvVar2,
                                                        (ulong)local_b8);
                                                uVar7 = *piVar19 + (int)local_40;
                                                iVar30 = piVar19[1] + local_34;
                                            } else {
                                                uVar7 = (uint)local_40;
                                                iVar30 = local_34;
                                                if ((local_90 & 1) == 0) {
                                                    uVar20 = logger::default_logger();
                                                    pLVar29 = local_b0;
                                                    uVar10 = eastl::basic_string<
                                                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>::Layout::
                                                        HeapBeginPtr(local_b0);
                                                    in_stack_fffffffffffffe50 = pLVar29->end();
                                                    local_90 = CONCAT71((int7)((ulong)pcVar16 >> 8), 1);
                                                    in_stack_fffffffffffffe48 = (shared_ptr*)CONCAT44(uVar36, uVar10);
                                                    pcVar16 =
                                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                        "OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/FontHelpers.cpp";
                                                    logger::Logger::Log(
                                                        uVar20, 0, 3,
                                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                        "OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/FontHelpers.cpp",
                                                        1100,
                                                        "Custom Offsets supplied for string \'%.*s\' is shorter than "
                                                        "the string",
                                                        in_stack_fffffffffffffe48, in_stack_fffffffffffffe50);
                                                    uVar7 = (uint)local_40;
                                                    iVar30 = local_34;
                                                }
                                            }
                                        }
                                        pcVar21 =
                                            (compressed_pair_imp<
                                                std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                                eastl::allocator, 0>*)
                                                shared_ptr<SpriteAtlasReference>::operator->(
                                                    (shared_ptr<SpriteAtlasReference>*)(local_108 + 8));
                                        this_01 = (GUIManager*)eastl::compressed_pair_imp<
                                            std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                            eastl::allocator, 0>::second(pcVar21);
                                        bVar3 = this_01->operator_cast_to_bool();
                                        uVar36 = (undefined4)((ulong)in_stack_fffffffffffffe58 >> 32);
                                        if (bVar3) {
                                            local_c0 = (shared_ptr*)CONCAT44(local_c0._4_4_, uVar7);
                                            local_a0 = this_01;
                                            local_84 = iVar30;
                                            pSVar22 = (SpriteAtlas*)shared_ptr<SpriteAtlas>::operator->(
                                                (shared_ptr<SpriteAtlas>*)this_01);
                                            pFVar23 = (FastPool<audio::SoundInstance, int>*)
                                                          shared_ptr<SpriteAtlasReference>::operator->(
                                                              (shared_ptr<SpriteAtlasReference>*)(local_108 + 8));
                                            iVar30 = FastPool<audio::SoundInstance, int>::capacity(pFVar23);
                                            local_a8 = (int*)pSVar22->GetSpriteRenderMapping(iVar30);
                                            this_00 = (array<int, 2ul>*)(local_a8 + 26);
                                            piVar19 = (int*)std::array<int, 2ul>::operator[](this_00, 1);
                                            local_50 = (shared_ptr*)CONCAT44(local_50._4_4_, *piVar19);
                                            pFVar14->GetMaxAscent();
                                            pFVar14->GetMaxDescent();
                                            uVar11 = eastl::min<GraphicsQuality>((ulong)local_50 & 4294967295);
                                            piVar18 = (int*)std::array<int, 2ul>::operator[](this_00, 0);
                                            pFVar28 = local_60;
                                            uVar7 = uVar11;
                                            if (*piVar18 != *piVar19) {
                                                uVar7 =
                                                    (uint)(((float)*piVar18 * (float)(int)uVar11) / (float)*piVar19 +
                                                           0.5);
                                            }
                                            local_50 = (shared_ptr*)CONCAT44(local_50._4_4_, uVar7);
                                            local_64 = uVar11;
                                            cVar4 = pFVar14->IsVectorFont();
                                            iVar30 = local_84;
                                            if (cVar4 == '\0') {
                                                iVar9 = pFVar14->GetVerticalSpacing();
                                                bVar5 = pFVar14->GetMaxDescent();
                                                iVar9 = (iVar9 - local_64) + (uint)bVar5;
                                            } else {
                                                bVar5 = pFVar14->GetMaxAscent();
                                                iVar9 = pFVar14->GetVerticalSpacing();
                                                iVar9 = (iVar9 - local_108._4_4_) / 2 - (uint)bVar5;
                                            }
                                            local_98 = pFVar28->field_32;
                                            piVar19 = (int*)eastl::vector<
                                                int, eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true,
                                                                                   eastl::allocator>>::
                                            operator[](
                                                (vector<int,
                                                        eastl::fixed_vector_allocator<4ul, 4ul, 4ul, 0ul, true,
                                                                                      eastl::allocator>>*)(local_a8 +
                                                                                                           2),
                                                0);
                                            iVar27 = *piVar19;
                                            pMVar24 = (MapArea*)shared_ptr<SpriteAtlas>::operator->(
                                                (shared_ptr<SpriteAtlas>*)local_a0);
                                            in_stack_fffffffffffffe48 = (shared_ptr*)(local_a8 + 22);
                                            iVar27 = iVar27 + (uint)local_c0;
                                            pvVar25 =
                                                (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                                    pMVar24->GetOrigin();
                                            in_stack_fffffffffffffe50 =
                                                eastl::vector<oldscape::dash3d::EntityHighlight*,
                                                              BucketAllocatorEASTL>::end(pvVar25);
                                            in_stack_fffffffffffffe58 = CONCAT44(uVar36, 1);
                                            pcVar16 = (char*)((ulong)local_50 & 4294967295);
                                            local_98->AddTexturedRectangle(iVar27, iVar9 + iVar30, pcVar16, local_64,
                                                                           4294967295, in_stack_fffffffffffffe48,
                                                                           in_stack_fffffffffffffe50,
                                                                           in_stack_fffffffffffffe58);
                                            iVar30 = iVar9 + iVar30;
                                            uVar7 = (uint)local_c0;
                                            uVar11 = (int)local_50 + (int)local_40;
                                        } else {
                                            uVar11 = (uint)local_40;
                                        }
                                    }
                                    piVar19 = (int*)(ulong)uVar11;
                                    local_108->~pair();
                                    local_40 = (int*)pcVar16;
                                }
                                pcVar16 = (char*)local_40;
                                local_40 = (int*)(ulong)uVar7;
                            }
                        LAB_1008e1d99:
                            local_50 = (shared_ptr*)4294967295;
                            if (local_51 != '\0')
                                goto LAB_1008e1901;
                        } else {
                        LAB_1008e18f4:
                            piVar19 = (int*)((ulong)local_40 & 4294967295);
                            iVar30 = local_34;
                        LAB_1008e1901:
                            if ((int)local_50 == -1) {
                                iVar8 = local_70->GetKerning(local_44, iVar8);
                                pvVar2 = local_c8;
                                local_40 = (int*)(ulong)(uint)((int)local_40 + iVar8);
                                if (local_c8 != (vector<eastl::pair<int, int>, eastl::allocator>*)0) {
                                    iVar9 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(local_c8);
                                    uVar36 = (undefined4)((ulong)in_stack_fffffffffffffe48 >> 32);
                                    if ((long)local_80 < (long)iVar9) {
                                        piVar18 =
                                            (int*)eastl::vector<std::pair<int, int>,
                                                                eastl::fixed_vector_allocator<8ul, 256ul, 4ul, 0ul,
                                                                                              true, eastl::allocator>>::
                                            operator[]((vector<std::pair<int, int>,
                                                               eastl::fixed_vector_allocator<8ul, 256ul, 4ul, 0ul, true,
                                                                                             eastl::allocator>>*)pvVar2,
                                                       (ulong)local_b8);
                                        local_40 = (int*)(ulong)(uint)((int)local_40 + *piVar18);
                                        iVar30 = iVar30 + piVar18[1];
                                    } else if ((local_90 & 1) == 0) {
                                        uVar20 = logger::default_logger();
                                        pLVar29 = local_b0;
                                        local_80 = (int*)eastl::basic_string<
                                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                eastl::allocator>>::Layout::
                                            HeapBeginPtr(local_b0);
                                        in_stack_fffffffffffffe50 = pLVar29->end();
                                        local_90 = CONCAT71((int7)((ulong)pcVar16 >> 8), 1);
                                        in_stack_fffffffffffffe48 = (shared_ptr*)CONCAT44(uVar36, (int)local_80);
                                        logger::Logger::Log(
                                            uVar20, 0, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "graphics/runetek7/fonts/FontHelpers.cpp",
                                            1176,
                                            "Custom Offsets supplied for string \'%.*s\' is shorter than the string",
                                            in_stack_fffffffffffffe48, in_stack_fffffffffffffe50);
                                    }
                                }
                                iVar8 = iVar8 + (int)piVar19;
                                if (local_44 == spaceCharCode) {
                                    iVar9 = *(int*)&local_60->field_16;
                                    if (iVar9 < 0) {
                                        iVar9 = 0;
                                    }
                                    iVar8 = iVar8 + iVar9;
                                } else {
                                    if (local_60->field_20 != '\0') {
                                        uVar7 = *(uint*)&local_60->field_24;
                                        pFVar12 = (Font*)local_d0->GetFont();
                                        DrawLetter(local_60, local_44, (int)local_40 + 1, iVar30 + 1, uVar7, pFVar12,
                                                   &local_128);
                                    }
                                    uVar7 = *(uint*)&local_60->field_8;
                                    pFVar12 = (Font*)local_d0->GetFont();
                                    in_stack_fffffffffffffe48 = &local_128;
                                    DrawLetter(local_60, local_44, (int)local_40, iVar30, uVar7, pFVar12,
                                               in_stack_fffffffffffffe48);
                                }
                                pFVar14 = local_70;
                                bVar5 = local_70->GetGlyphAdvance(local_44);
                                uVar36 = (undefined4)((ulong)in_stack_fffffffffffffe48 >> 32);
                                pFVar28 = local_60;
                                if (*(int*)local_60 != -1) {
                                    local_80 = (int*)CONCAT44(local_80._4_4_, iVar8);
                                    uVar7 = pFVar14->GetMaxDescent();
                                    cVar4 = pFVar14->IsVectorFont();
                                    pFVar14 = local_70;
                                    iVar8 = (uVar7 & 255) + iVar30;
                                    if (cVar4 == '\0') {
                                        iVar9 = local_70->GetVerticalSpacing();
                                        iVar8 = iVar8 + iVar9;
                                    }
                                    bVar6 = pFVar14->GetAscentDescentDelta();
                                    pFVar28 = local_60;
                                    in_stack_fffffffffffffe48 = (shared_ptr*)CONCAT44(uVar36, 1);
                                    GUIManager::AddHorizontalLine(local_60->field_32, local_40,
                                                                  iVar8 - (int)((float)bVar6 * 0.5), bVar5, 1,
                                                                  *(int*)local_60, in_stack_fffffffffffffe48);
                                    iVar8 = (int)local_80;
                                }
                                uVar36 = (undefined4)((ulong)in_stack_fffffffffffffe48 >> 32);
                                if (*(int*)&pFVar28->field_4 != -1) {
                                    cVar4 = pFVar14->IsVectorFont();
                                    iVar30 = iVar30 + 1;
                                    if (cVar4 == '\0') {
                                        iVar9 = pFVar14->GetVerticalSpacing();
                                        iVar30 = iVar9 + iVar30;
                                    }
                                    in_stack_fffffffffffffe48 = (shared_ptr*)CONCAT44(uVar36, 1);
                                    GUIManager::AddHorizontalLine(pFVar28->field_32, local_40, iVar30, (uint)bVar5, 1,
                                                                  *(undefined4*)&pFVar28->field_4,
                                                                  in_stack_fffffffffffffe48);
                                }
                                local_40 = (int*)(ulong)(iVar8 + (uint)bVar5);
                                iVar8 = local_44;
                                goto LAB_1008e1861;
                            }
                        }
                        local_40 = piVar19;
                    }
                LAB_1008e1861:
                    pLVar29 = local_b0;
                    uVar1 = local_d8;
                    uVar17 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(local_b0);
                } while (uVar1 < uVar17);
            }
            iVar8 = (int)local_40 - local_74;
        } else {
            uVar20 = logger::default_logger();
            uVar10 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar29);
            uVar26 = pLVar29->end();
            iVar8 = 0;
            logger::Logger::Log(uVar20, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/fonts/FontHelpers.cpp",
                                969, "%s called with string \'%.*s\', while fontTexture was null", "DrawStringInner",
                                CONCAT44(uVar36, uVar10), uVar26);
        }
        local_128.~shared_ptr();
        return iVar8;
    }

    // 0x1008e24a0, 304 bytes, placed by class name
    // FontHelpers::GetStringWidth(StringView, FontMetrics const&, bool)
    int FontHelpers::GetStringWidth(StringView param_1, FontMetrics* param_2, bool param_3) {
        ulong uVar1;
        long lVar2;
        type* ptVar3;
        type* ptVar4;
        ulong uVar5;
        undefined4 uVar6;
        ShuffledPacketFactory* this;
        FontMetrics* in_R8;
        int iVar7;
        StringView SVar8;
        StringView SVar9;
        StringView aSStack_898[128];
        TextFlags in_stack_ffffffffffffff68;
        StringView local_88;
        StringView local_78;
        undefined8 local_68;
        undefined8 local_60;
        ulong local_58;
        uchar* local_50;
        undefined4 local_44;
        ulong local_40;
        uint local_38[2];

        local_50 = param_1.field_8;
        this = (ShuffledPacketFactory*)param_1.field_0;
        new (local_38) oldscape::configdecoder::VeccType();
        if ((int)param_2 != 0) {
            local_38->SetFlag(1);
        }
        local_40 = 0;
        lVar2 = ShuffledPacketFactory::p2_alt2(this);
        iVar7 = 0;
        if (lVar2 != 0) {
            uVar6 = 0;
            do {
                local_58 = local_40;
                local_44 = uVar6;
                StringView::StringView(aSStack_898 + 128, (StringView*)this);
                SVar8.field_8 = (uchar*)&local_40;
                SVar8.field_0 = (ulong)(aSStack_898 + 128);
                local_68 = GetNextElementLength(SVar8, (ulong*)(ulong)local_38[0], in_stack_ffffffffffffff68);
                std::get<0ul, unsigned int, unsigned int>((pair*)&local_68);
                ptVar3 = std::get<1ul, unsigned int, unsigned int>((pair*)&local_68);
                local_88.substr((ulong)this, local_58);
                new (&local_78) StringView(&local_88);
                SVar9.field_8._0_4_ = local_44;
                SVar9.field_0 = (ulong)&local_78;
                SVar9.field_8._4_4_ = 0;
                local_60 = GetElementWidth(SVar9, *(uint*)ptVar3, (uint)local_50, in_R8);
                ptVar4 = std::get<0ul, unsigned int, unsigned int>((pair*)&local_60);
                ptVar3 = std::get<1ul, unsigned int, unsigned int>((pair*)&local_60);
                uVar1 = local_40;
                uVar6 = *(undefined4*)ptVar3;
                iVar7 = iVar7 + *(int*)ptVar4;
                uVar5 = ShuffledPacketFactory::p2_alt2(this);
            } while (uVar1 < uVar5);
        }
        return iVar7;
    }

    // 0x1008e25e0, 208 bytes, placed by class name
    // FontHelpers::CalculateExtraSpaceWidthForJustify(StringView, unsigned int, unsigned int, bool)
    ulong FontHelpers::CalculateExtraSpaceWidthForJustify(StringView param_1, uint param_2, uint param_3,
                                                          bool param_4) {
        char* pcVar1;
        char* pcVar2;
        ulong uVar3;
        int iVar4;
        bool bVar5;
        uint uVar6;
        byte bVar7;

        pcVar1 = (char*)param_1.field_0->end();
        pcVar2 = (char*)param_1.field_0->end();
        uVar3 = 0;
        uVar6 = 0;
        if (pcVar1 != pcVar2) {
            bVar7 = (byte)param_3 ^ 1;
            uVar6 = 0;
            bVar5 = false;
            do {
                iVar4 = (int)*pcVar1;
                if ((bVar7 & ltCharCode == iVar4) == 0) {
                    if ((bVar7 & gtCharCode == iVar4) == 0) {
                        uVar6 = uVar6 + (spaceCharCode == iVar4 && !bVar5);
                    } else {
                        bVar5 = false;
                    }
                } else {
                    bVar5 = true;
                }
                pcVar1 = pcVar1 + 1;
            } while (pcVar1 != pcVar2);
        }
        if (0 < (int)uVar6) {
            uVar3 = (ulong)(param_2 - (int)param_1.field_8) / (ulong)uVar6;
        }
        return uVar3;
    }

    // 0x1008e26c0, 640 bytes, placed by class name
    // FontHelpers::DrawTextRunSlice(TextRunSlice const&, int, int, TextProperties const&, int)
    undefined8 FontHelpers::DrawTextRunSlice(TextRunSlice* param_1, int param_2, int param_3, TextProperties* param_4,
                                             int param_5) {
        FontMetrics* this_00;
        char cVar1;
        bool bVar2;
        byte bVar3;
        byte bVar4;
        uint uVar5;
        Font* pFVar6;
        shared_ptr* psVar7;
        long lVar8;
        long lVar9;
        int* piVar10;
        int* piVar12;
        int* piVar13;
        int iVar14;
        shared_ptr local_78;
        int local_68[3];
        undefined8 local_58;
        FontHelpers* local_50;
        FontMetrics* local_48;
        ulong local_40;
        int local_34;

        cVar1 = param_1->IsEmpty();
        if (cVar1 == '\0') {
            local_40 = CONCAT44(local_40._4_4_, param_3);
            ResetState(param_4);
            local_48 = (FontMetrics*)param_4->GetFontMetrics();
            pFVar6 = (Font*)param_4->GetFont();
            psVar7 = (shared_ptr*)pFVar6->GetCharactersTexture();
            new (&local_78) shared_ptr<oldscape::dash3d::Decor>(psVar7);
            bVar2 = shared_ptr::operator_cast_to_bool(&local_78);
            this_00 = local_48;
            if (!bVar2) {
                local_68[0] = 0;
                local_68[1] = 0;
                local_58 = std::make_pair<int, int>(local_68, local_68 + 1);
            LAB_1008e277d:
                local_78.~shared_ptr();
                return local_58;
            }
            cVar1 = local_48->IsVectorFont();
            local_50 = this;
            if (cVar1 == '\0') {
                bVar3 = this_00->GetMaxAscent();
                bVar4 = this_00->GetMaxDescent();
                local_34 = (uint)bVar4 - (uint)bVar3;
            } else {
                local_34 = param_1->GetVerticalOrigin();
            }
            lVar8 = param_1->end();
            lVar9 = param_1->data();
            if (lVar8 != lVar9) {
                local_34 = local_34 + (int)local_40;
                piVar13 = (int*)(lVar8 + 8);
                local_68[2] = param_5;
                do {
                    if ((local_68[2] != -1) && (local_68[2] < *piVar13)) {
                        std::pair<int, int>::pair<true, false>((pair<int, int>*)&local_58, piVar13 + -1, piVar13);
                        goto LAB_1008e277d;
                    }
                    iVar14 = piVar13[-2];
                    if (iVar14 != newlineCharCode) {
                        cVar1 = param_1->ShouldHide((TextRunCharacter*)(piVar13 + -2));
                        if (cVar1 != '\0') {
                            iVar14 = 42;
                        }
                        if (iVar14 != tabCharCode) {
                            local_48 = (FontMetrics*)(ulong)(uint)(piVar13[-1] + param_2);
                            local_40 = (ulong)(uint)(*piVar13 + local_34);
                            if (local_50->field_20 != '\0') {
                                uVar5 = *(uint*)&local_50->field_24;
                                pFVar6 = (Font*)param_4->GetFont();
                                DrawLetter(local_50, iVar14, (int)local_48 + 1, (int)local_40 + 1, uVar5, pFVar6,
                                           &local_78);
                            }
                            uVar5 = param_4->GetLevel();
                            pFVar6 = (Font*)param_4->GetFont();
                            DrawLetter(local_50, iVar14, (int)local_48, (int)local_40, uVar5, pFVar6, &local_78);
                        }
                    }
                    piVar10 = (int*)param_1->data();
                    piVar12 = piVar13 + 1;
                    piVar13 = piVar13 + 3;
                } while (piVar12 != piVar10);
            }
            local_78.~shared_ptr();
        }
        return param_1->GetLastCursorPosition();
    }

    // 0x1008e2ad0, 304 bytes, placed by class name
    // FontHelpers::DrawLetter(int, int, int, unsigned int, Font const&, shared_ptr<render::Texture> const&)
    void FontHelpers::DrawLetter(int param_1, int param_2, int param_3, uint param_4, Font* param_5,
                                 shared_ptr* param_6) {
        byte bVar1;
        byte bVar2;
        byte bVar3;
        byte bVar4;
        GUIManager* pGVar5;
        vector* this_00;
        EntityHighlightState* this_01;
        FontMetrics* pFVar7;
        byte* pbVar8;
        undefined8 uVar9;
        undefined4 in_register_00000034;
        undefined4 uVar10;
        undefined4 uVar11;
        undefined4 uVar12;
        undefined4 uVar13;
        uint local_34;

        this_00 = param_5->SSOBeginPtr((type*)CONCAT44(in_register_00000034, param_1));
        this_01 = (EntityHighlightState*)param_5->GetUV(param_1);
        pFVar7 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)this_00);
        pbVar8 = (byte*)pFVar7->GetGlyphInfo(param_1);
        local_34 = param_4;
        if (m_highlightNonVectorFonts != '\0') {
            pFVar7 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)this_00);
            if (pFVar7->IsVectorFont() == '\0') {
                param_4 = 3423731711;
            }
            local_34 = param_4;
        }
        bVar1 = pbVar8[3];
        bVar2 = pbVar8[4];
        pGVar5 = field_32;
        bVar3 = *pbVar8;
        bVar4 = pbVar8[1];
        uVar10 = this_01->GetOverbright();
        uVar11 = this_01->GetAlpha();
        uVar12 = this_01->MaxU();
        uVar13 = this_01->MaxV();
        uVar9 = param_6->end();
        uVar10->AddElement(uVar11, uVar12, uVar13, pGVar5, (char)bVar1 + param_2, (char)bVar2 + param_3,
                           (uint)bVar3 + (char)bVar1 + param_2, (uint)bVar4 + (char)bVar2 + param_3, local_34, uVar9,
                           1);
    }

    // 0x1008e2c00, 112 bytes, placed by neighbouring functions
    // TextRunSlice::GetLastCursorPosition() const
    void TextRunSlice::GetLastCursorPosition() {
        int iVar1;
        int local_24[3];

        if (IsEmpty(this) == '\0') {
            iVar1 = *(int*)(field_16 + -8);
            local_24[2] = GetLastCharAdvance(this);
            local_24[2] = local_24[2] + iVar1;
            std::make_pair<int, int const&>(local_24 + 2, (int*)(field_16 + -4));
        } else {
            local_24[0] = 0;
            local_24[1] = 0;
            std::make_pair<int, int>(local_24, local_24 + 1);
        }
    }

    // 0x1008e2c70, 160 bytes, placed by class name
    // FontHelpers::DrawStringCustomOffsets(StringView, int, int, int, eastl::fixed_vector<std::pair<int, int>, 256ul, true, eastl::allocator> const&, TextProperties const&)
    /* FontHelpers::DrawStringCustomOffsets(StringView, int, int, int,
   eastl::fixed_vector<std::pair<int, int>, 256ul, true, eastl::allocator> const&,
   TextProperties const&) */

    void FontHelpers::DrawStringCustomOffsets(StringView param_1, int param_2, int param_3, int param_4,
                                              fixed_vector* param_5, TextProperties* param_6) {
        char cVar1;
        undefined4 in_register_0000008c;
        StringView SVar2;
        TextProperties* in_stack_ffffffffffffff80;
        TextProperties local_78;
        StringView local_50;
        undefined8 local_40;

        SVar2.field_8._0_4_ = param_1.field_8._0_4_;
        cVar1 = param_1.field_0->empty();
        if (cVar1 == '\0') {
            ResetState(param_5);
            local_40 = CONCAT44(in_register_0000008c, param_4);
            new (&local_78) TextProperties(param_5);
            TextProperties::ClearFlag(&local_78, 1);
            new (&local_50) StringView(param_1.field_0);
            SVar2.field_0 = (ulong)&local_50;
            SVar2.field_8._4_4_ = 0;
            DrawAlignedString(this, SVar2, param_2, param_3, (int)local_40, param_5, in_stack_ffffffffffffff80);
        }
    }

    // 0x1008e2d50, 368 bytes, placed by class name
    // FontHelpers::GetNextElementLength(StringView, unsigned long&, TextFlags)
    undefined8 FontHelpers::GetNextElementLength(StringView param_1, ulong* param_2, TextFlags param_3) {
        ulong uVar1;
        ulong uVar2;
        uint uVar4;
        ulong uVar5;
        char* pcVar6;
        ulong* puVar7;
        Layout* this;
        int iVar8;
        bool bVar9;
        int local_58;
        int local_4c;
        undefined8 local_48;
        uint local_40;
        uint local_3c;
        TextFlags local_38[8];

        puVar7 = (ulong*)param_1.field_8;
        this = (Layout*)param_1.field_0;
        local_38[0] = SUB81(param_2, 0);
        uVar1 = *puVar7;
        iVar8 = -1;
        do {
            uVar2 = *puVar7;
            uVar5 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                        eastl::allocator>>::Layout::HeapBeginPtr(this);
            if (uVar5 <= uVar2) {
                *puVar7 = uVar1 + 1;
                local_40 = 1;
                std::pair<unsigned int, unsigned int>::pair<int, unsigned int&, false>(
                    (pair<unsigned int, unsigned int>*)&local_48, (int*)&local_40, &ltCharCode);
                return local_48;
            }
            uVar2 = *puVar7;
            pcVar6 = (char*)end();
            uVar5 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                        eastl::allocator>>::Layout::HeapBeginPtr(this);
            uVar4 = stringtools::GetUTF8NextChar(pcVar6, puVar7, uVar5);
            local_40 = ToCodeMap(uVar4);
            if (local_38->HasFlag(1) == '\0') {
                bVar9 = true;
                if (iVar8 == -1) {
                    iVar8 = (int)uVar2;
                    if (local_40 != ltCharCode) {
                        local_3c = 1;
                        std::pair<unsigned int, unsigned int>::pair<int, unsigned int&, false>(
                            (pair<unsigned int, unsigned int>*)&local_48, (int*)&local_3c, &local_40);
                        iVar8 = -1;
                        bVar9 = false;
                    }
                } else {
                    bVar9 = local_40 != gtCharCode;
                    if (!bVar9) {
                        local_3c = ((int)uVar2 - iVar8) + 1;
                        local_4c = 0;
                        std::pair<unsigned int, unsigned int>::pair<unsigned int, int, false>(
                            (pair<unsigned int, unsigned int>*)&local_48, &local_3c, &local_4c);
                    }
                }
            } else {
                local_58 = (int)uVar1;
                local_3c = (int)*puVar7 - local_58;
                std::pair<unsigned int, unsigned int>::pair<unsigned int, unsigned int&, false>(
                    (pair<unsigned int, unsigned int>*)&local_48, &local_3c, &local_40);
                bVar9 = false;
            }
        } while (bVar9);
        return local_48;
    }

    // 0x1008e2f40, 960 bytes, placed by class name
    // FontHelpers::GetElementWidth(StringView, unsigned int, unsigned int, FontMetrics const&)
    undefined8 FontHelpers::GetElementWidth(StringView param_1, uint param_2, uint param_3, FontMetrics* param_4) {
        char cVar1;
        bool bVar2;
        byte bVar3;
        int iVar4;
        undefined4 uVar5;
        ulong uVar6;
        long lVar7;
        char* pcVar8;
        uint* puVar9;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this;
        shared_ptr* this_00;
        SpriteAtlas* this_01;
        FastPool<audio::SoundInstance, int>* this_02;
        int* piVar10;
        int* piVar11;
        undefined8 uVar12;
        undefined8 uVar13;
        undefined4 in_register_0000000c;
        FontMetrics* this_03;
        uchar* extraout_RDX;
        uchar* extraout_RDX_00;
        Layout* this_04;
        StringView SVar14;
        StringView SVar15;
        StringView SVar16;
        StringView SVar17;
        StringView SVar18;
        StringView local_e8;
        StringView local_d8;
        StringView local_c8;
        StringView local_b8;
        StringView local_a8;
        StringView local_98;
        StringView local_88;
        undefined8 local_78;
        StringView local_70;
        undefined1 local_60[8];
        undefined1 local_58[24];
        int local_40;
        int local_3c;
        uint local_38;
        uint local_34;

        this_03 = (FontMetrics*)CONCAT44(in_register_0000000c, param_3);
        this_04 = (Layout*)param_1.field_0;
        local_38 = 0;
        local_34 = param_2;
        uVar6 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(this_04);
        if (uVar6 < 3) {
            lVar7 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_04);
            if (((lVar7 != 2) || (pcVar8 = (char*)WrapArray<char const>::operator[]((WrapArray<char const>*)this_04, 0),
                                  ltCharCode != *pcVar8)) ||
                (pcVar8 = (char*)WrapArray<char const>::operator[]((WrapArray<char const>*)this_04, 1),
                 gtCharCode != *pcVar8)) {
            LAB_1008e303c:
                bVar3 = this_03->GetGlyphAdvance(local_34);
                local_38 = local_38 + bVar3;
                iVar4 = this_03->GetKerning(local_34, (int)param_1.field_8);
                local_38 = local_38 + iVar4;
                goto LAB_1008e305b;
            }
        } else {
            lVar7 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_04);
            piVar10 = (int*)(lVar7 + -2);
            local_70.substr((ulong)this_04, 1);
            StringView::StringView<3ul>(&local_e8, "br");
            SVar15.field_8 = extraout_RDX;
            SVar15.field_0 = (ulong)&local_e8;
            cVar1 = StringView::operator==(&local_70, SVar15);
            if (cVar1 == '\0') {
                new (&local_d8) StringView(&local_70);
                SVar16.field_8 = extraout_RDX_00;
                SVar16.field_0 = (ulong)&local_d8;
                ConvertTagCharCodes((FontHelpers*)local_60, SVar16);
                bVar2 = local_60->IsActive();
                if (bVar2) {
                    puVar9 = (uint*)eastl::optional<unsigned int>::value();
                    local_34 = *puVar9;
                    goto LAB_1008e303c;
                }
                StringView::StringView<5ul>(&local_c8, "img=");
                SVar17.field_8 = (uchar*)&local_c8;
                SVar17.field_0 = (ulong)&local_70;
                local_98.suffix_of(SVar17);
                cVar1 = local_98.empty();
                if (cVar1 == '\0') {
                    bVar2 = FromString<StringView, int>(&local_98, (int*)local_58, 10);
                    uVar5 = local_58._0_4_;
                    if ((bVar2) && (iVar4 = m_modIcons.end(), (int)uVar5 < iVar4)) {
                        piVar10 = (int*)Array<FontHelpers::ModIconReference, eastl::allocator>::operator[](
                            (Array<FontHelpers::ModIconReference, eastl::allocator>*)&m_modIcons,
                            (long)(int)local_58._0_4_);
                        bVar2 = operator!=((shared_ptr*)(piVar10 + 2), (_func_decltype_nullptr*)0);
                        if (bVar2) {
                            local_38 = local_38 + *piVar10;
                        }
                    }
                } else {
                    StringView::StringView<8ul>(&local_b8, "sprite=");
                    SVar18.field_8 = (uchar*)&local_b8;
                    SVar18.field_0 = (ulong)&local_70;
                    local_88.suffix_of(SVar18);
                    cVar1 = local_88.empty();
                    if (cVar1 != '\0')
                        goto LAB_1008e305b;
                    SVar14.field_0 = &local_a8;
                    StringView::StringView(SVar14.field_0, &local_88);
                    SVar14.field_8 = (uchar*)&local_40;
                    SVar14.field_0 = (ulong)SVar14.field_0;
                    cVar1 = ParseSpriteData(SVar14, &local_3c, piVar10);
                    if (cVar1 != '\0') {
                        bVar2 = SVar14.field_0->operator_cast_to_bool();
                        if (bVar2) {
                            new (local_58) ModIconReference();
                            cVar1 = std::function<bool(FontHelpers::ModIconReference&, int, int)>::operator()(
                                (function<bool(FontHelpers::ModIconReference&, int,
                                               int)>*)&m_callbackGetSpriteReference,
                                (ModIconReference*)local_58, local_40, local_3c);
                            if (cVar1 != '\0') {
                                this = (compressed_pair_imp<
                                        std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                        eastl::allocator, 0>*)
                                           shared_ptr<SpriteAtlasReference>::operator->(
                                               (shared_ptr<SpriteAtlasReference>*)(local_58 + 8));
                                this_00 = (shared_ptr*)eastl::compressed_pair_imp<
                                    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                    eastl::allocator, 0>::second(this);
                                bVar2 = shared_ptr::operator_cast_to_bool(this_00);
                                if (bVar2) {
                                    this_01 = (SpriteAtlas*)shared_ptr<SpriteAtlas>::operator->(
                                        (shared_ptr<SpriteAtlas>*)this_00);
                                    this_02 = (FastPool<audio::SoundInstance, int>*)
                                                  shared_ptr<SpriteAtlasReference>::operator->(
                                                      (shared_ptr<SpriteAtlasReference>*)(local_58 + 8));
                                    iVar4 = FastPool<audio::SoundInstance, int>::capacity(this_02);
                                    lVar7 = this_01->GetSpriteRenderMapping(iVar4);
                                    piVar10 =
                                        (int*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)(lVar7 + 104), 1);
                                    iVar4 = *piVar10;
                                    this_03->GetMaxAscent();
                                    this_03->GetMaxDescent();
                                    iVar4 = eastl::min<GraphicsQuality>(iVar4);
                                    piVar11 =
                                        (int*)std::array<int, 2ul>::operator[]((array<int, 2ul>*)(lVar7 + 104), 0);
                                    if (*piVar11 != *piVar10) {
                                        iVar4 = (int)(((float)*piVar11 * (float)iVar4) / (float)*piVar10 + 0.5);
                                    }
                                    local_38 = local_38 + iVar4;
                                }
                            }
                            local_58->~pair();
                            local_34 = 0;
                            goto LAB_1008e305b;
                        }
                        uVar12 = logger::default_logger();
                        uVar5 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(this_04);
                        uVar13 = this_04->end();
                        logger::Logger::Log(uVar12, 0, 3,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "graphics/runetek7/fonts/FontHelpers.cpp",
                                            572, "%.*s in text, but no sprite reference callback has been set", uVar5,
                                            uVar13);
                    }
                }
            }
        }
        local_34 = 0;
    LAB_1008e305b:
        std::pair<unsigned int, unsigned int>::pair<unsigned int&, unsigned int&, false>(
            (pair<unsigned int, unsigned int>*)&local_78, &local_38, &local_34);
        return local_78;
    }

    // 0x1008e3300, 192 bytes, placed by class name
    // FontHelpers::PredictLines(StringView, int, FontMetrics const&, TextFlags)
    undefined4 FontHelpers::PredictLines(StringView param_1, int param_2, FontMetrics* param_3, TextFlags param_4) {
        undefined4 uVar1;
        undefined4 in_register_00000014;
        StringView SVar2;
        StringView aSStack_908[128];
        TextFlags in_stack_fffffffffffffef8;
        undefined4 local_f4;
        fixed_vector<StringView, 10ul, true, BucketAllocatorEASTL> local_f0[200];
        long local_28;

        SVar2.field_8._4_4_ = in_register_00000014;
        SVar2.field_8._0_4_ = param_2;
        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_f4 = param_1.field_8._0_4_;
        eastl::fixed_vector<StringView, 10ul, true, BucketAllocatorEASTL>::fixed_vector(local_f0);
        StringView::StringView(aSStack_908 + 128, (StringView*)param_1.field_0);
        SVar2.field_0 = (ulong)(aSStack_908 + 128);
        uVar1 = SplitString((fixed_vector*)local_f0, SVar2, (FontMetrics*)&local_f4, (int*)((ulong)param_3 & 255),
                            in_stack_fffffffffffffef8);
        eastl::fixed_vector<StringView, 10ul, true, BucketAllocatorEASTL>::~fixed_vector(local_f0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar1;
    }

    // 0x1008e33c0, 304 bytes, placed by class name
    // FontHelpers::GetPredictLinesLine(StringView, int, FontMetrics const&, unsigned int, TextFlags)
    FontHelpers* FontHelpers::GetPredictLinesLine(StringView param_1, int param_2, FontMetrics* param_3, uint param_4,
                                                  TextFlags param_5) {
        ulong uVar1;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        char* pcVar2;
        undefined4 in_register_0000000c;
        StringView SVar3;
        TextFlags in_stack_fffffffffffffed8;
        StringView local_120;
        allocator local_110[12];
        undefined4 local_104;
        fixed_vector<StringView, 10ul, true, BucketAllocatorEASTL> local_100[200];
        long local_38;

        SVar3.field_8._4_4_ = in_register_0000000c;
        SVar3.field_8._0_4_ = param_2;
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_104 = param_1.field_8._0_4_;
        eastl::fixed_vector<StringView, 10ul, true, BucketAllocatorEASTL>::fixed_vector(local_100);
        new (&local_120) StringView(param_1.field_0);
        SVar3.field_0 = (ulong)&local_120;
        SplitString((fixed_vector*)local_100, SVar3, (FontMetrics*)&local_104, (int*)(ulong)(param_4 & 255),
                    in_stack_fffffffffffffed8);
        uVar1 = local_100->size();
        if (((ulong)param_3 & 4294967295) < uVar1) {
            this_00 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)eastl::vector<
                StringView, eastl::fixed_vector_allocator<16ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
            operator[](
                (vector<StringView, eastl::fixed_vector_allocator<16ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)
                    local_100,
                (ulong)param_3 & 4294967295);
            pcVar2 = (char*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_00);
            eastl::allocator::allocator(local_110, "EASTL basic_string");
            new (this) eastl::string(pcVar2, local_110);
        } else {
            new (this) eastl::string((basic_string*)&eastl::EMPTY_STRING);
        }
        eastl::fixed_vector<StringView, 10ul, true, BucketAllocatorEASTL>::~fixed_vector(local_100);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x1008e34f0, 288 bytes, placed by class name
    // FontHelpers::PredictHeightAndLines(StringView, int, TextProperties const&)
    undefined8 FontHelpers::PredictHeightAndLines(StringView param_1, int param_2, TextProperties* param_3) {
        byte bVar1;
        byte bVar2;
        int iVar3;
        int iVar4;
        FontMetrics* this;
        undefined4 in_register_00000014;
        StaticPointLight* this_00;
        StringView SVar5;
        StringView aSStack_918[128];
        TextFlags in_stack_fffffffffffffee8;
        undefined8 local_108;
        undefined4 local_fc;
        int local_f8;
        uint local_f4;
        fixed_vector<StringView, 10ul, true, BucketAllocatorEASTL> local_f0[200];
        long local_28;

        this_00 = (StaticPointLight*)CONCAT44(in_register_00000014, param_2);
        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_fc = param_1.field_8._0_4_;
        this = (FontMetrics*)this_00->GetFontMetrics();
        eastl::fixed_vector<StringView, 10ul, true, BucketAllocatorEASTL>::fixed_vector(local_f0);
        StringView::StringView(aSStack_918 + 128, (StringView*)param_1.field_0);
        bVar1 = this_00->GetLightLevelsBelow();
        SVar5.field_8 = (uchar*)this;
        SVar5.field_0 = (ulong)(aSStack_918 + 128);
        iVar3 = SplitString((fixed_vector*)local_f0, SVar5, (FontMetrics*)&local_fc, (int*)(ulong)bVar1,
                            in_stack_fffffffffffffee8);
        local_f8 = iVar3;
        iVar4 = this_00->GetLineSpacing();
        bVar1 = GetMaxAscent();
        bVar2 = GetMaxDescent();
        local_f4 = (uint)bVar2 + (uint)bVar1 + iVar4 * (iVar3 + -1);
        std::pair<int, int>::pair<int, int&, false>((pair<int, int>*)&local_108, (int*)&local_f4, &local_f8);
        eastl::fixed_vector<StringView, 10ul, true, BucketAllocatorEASTL>::~fixed_vector(local_f0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return local_108;
    }

    // 0x1008e3620, 304 bytes, placed by class name
    // FontHelpers::PredictWidthMultiLine(StringView, int, FontMetrics const&, TextFlags)
    int FontHelpers::PredictWidthMultiLine(StringView param_1, int param_2, FontMetrics* param_3, TextFlags param_4) {
        byte bVar1;
        uint uVar2;
        int iVar3;
        StringView* pSVar4;
        undefined4 in_register_00000014;
        ulong uVar6;
        int iVar7;
        StringView SVar8;
        StringView SVar9;
        TextFlags in_stack_fffffffffffffec8;
        StringView local_130;
        StringView local_120;
        undefined4 local_10c;
        uint local_108[2];
        fixed_vector<StringView, 10ul, true, BucketAllocatorEASTL> local_100[200];
        long local_38;

        SVar8.field_8 = (uchar*)CONCAT44(in_register_00000014, param_2);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_108[0] = CONCAT31(local_108[0]._1_3_, (char)param_3);
        local_10c = param_1.field_8._0_4_;
        eastl::fixed_vector<StringView, 10ul, true, BucketAllocatorEASTL>::fixed_vector(local_100);
        new (&local_120) StringView(param_1.field_0);
        SVar8.field_0 = (ulong)&local_120;
        uVar2 = SplitString((fixed_vector*)local_100, SVar8, (FontMetrics*)&local_10c, (int*)(ulong)local_108[0],
                            in_stack_fffffffffffffec8);
        if ((int)uVar2 < 1) {
            iVar7 = 0;
        } else {
            uVar6 = 0;
            iVar7 = 0;
            do {
                pSVar4 = (StringView*)eastl::vector<
                    StringView, eastl::fixed_vector_allocator<16ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                operator[](
                    (vector<StringView,
                            eastl::fixed_vector_allocator<16ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)local_100,
                    uVar6);
                new (&local_130) StringView(pSVar4);
                bVar1 = local_108->HasFlag(1);
                SVar9.field_8 = SVar8.field_8;
                SVar9.field_0 = (ulong)&local_130;
                iVar3 = GetStringWidth(SVar9, (FontMetrics*)(ulong)bVar1, SUB81((FontMetrics*)&local_10c, 0));
                if (iVar7 < iVar3) {
                    iVar7 = iVar3;
                }
                uVar6 = uVar6 + 1;
            } while (uVar2 != uVar6);
        }
        eastl::fixed_vector<StringView, 10ul, true, BucketAllocatorEASTL>::~fixed_vector(local_100);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return iVar7;
    }

    // 0x1008e3870, 1216 bytes, placed by class name
    // FontHelpers::ToCodeMap(unsigned int)
    uint FontHelpers::ToCodeMap(uint param_1) {
        uint uVar1;

        if (param_1 - 1 < 127) {
            return param_1;
        }
        if (param_1 - 160 < 96) {
            return param_1;
        }
        if ((int)param_1 < 8211) {
            switch (param_1) {
            case 338:
                uVar1 = 140;
                break;
            case 339:
                uVar1 = 156;
                break;
            case 340:
            case 341:
            case 342:
            case 343:
            case 344:
            case 345:
            case 346:
            case 347:
            case 348:
            case 349:
            case 350:
            case 351:
            case 354:
            case 355:
            case 356:
            case 357:
            case 358:
            case 359:
            case 360:
            case 361:
            case 362:
            case 363:
            case 364:
            case 365:
            case 366:
            case 367:
            case 368:
            case 369:
            case 370:
            case 371:
            case 372:
            case 373:
            case 374:
            case 375:
            case 377:
            case 378:
            case 379:
            case 380:
            case 383:
            case 384:
            case 385:
            case 386:
            case 387:
            case 388:
            case 389:
            case 390:
            case 391:
            case 392:
            case 393:
            case 394:
            case 395:
            case 396:
            case 397:
            case 398:
            case 399:
            case 400:
            case 401:
                goto switchD_1008e38b9_caseD_2015;
            case 352:
                uVar1 = 138;
                break;
            case 353:
                uVar1 = 154;
                break;
            case 376:
                uVar1 = 159;
                break;
            case 381:
                uVar1 = 142;
                break;
            case 382:
                uVar1 = 158;
                break;
            case 402:
                uVar1 = 131;
                break;
            default:
                if (param_1 == 710) {
                    return 136;
                }
                if (param_1 == 732) {
                    return 152;
                }
                goto switchD_1008e38b9_caseD_2015;
            }
        } else {
            uVar1 = 128;
            switch (param_1) {
            case 8211:
                uVar1 = 150;
                break;
            case 8212:
                uVar1 = 151;
                break;
            case 8216:
                uVar1 = 145;
                break;
            case 8217:
                uVar1 = 146;
                break;
            case 8218:
                uVar1 = 130;
                break;
            case 8220:
                uVar1 = 147;
                break;
            case 8221:
                uVar1 = 148;
                break;
            case 8222:
                uVar1 = 132;
                break;
            case 8224:
                uVar1 = 134;
                break;
            case 8225:
                uVar1 = 135;
                break;
            case 8226:
                uVar1 = 149;
                break;
            case 8230:
                uVar1 = 133;
                break;
            case 8240:
                uVar1 = 137;
                break;
            case 8249:
                uVar1 = 139;
                break;
            case 8250:
                uVar1 = 155;
                break;
            case 8364:
                break;
            default:
                if (param_1 == 8482) {
                    return 153;
                }
            case 8213:
            case 8214:
            case 8215:
            case 8219:
            case 8223:
            case 8227:
            case 8228:
            case 8229:
            case 8231:
            case 8232:
            case 8233:
            case 8234:
            case 8235:
            case 8236:
            case 8237:
            case 8238:
            case 8239:
            case 8241:
            case 8242:
            case 8243:
            case 8244:
            case 8245:
            case 8246:
            case 8247:
            case 8248:
            case 8251:
            case 8252:
            case 8253:
            case 8254:
            case 8255:
            case 8256:
            case 8257:
            case 8258:
            case 8259:
            case 8260:
            case 8261:
            case 8262:
            case 8263:
            case 8264:
            case 8265:
            case 8266:
            case 8267:
            case 8268:
            case 8269:
            case 8270:
            case 8271:
            case 8272:
            case 8273:
            case 8274:
            case 8275:
            case 8276:
            case 8277:
            case 8278:
            case 8279:
            case 8280:
            case 8281:
            case 8282:
            case 8283:
            case 8284:
            case 8285:
            case 8286:
            case 8287:
            case 8288:
            case 8289:
            case 8290:
            case 8291:
            case 8292:
            case 8293:
            case 8294:
            case 8295:
            case 8296:
            case 8297:
            case 8298:
            case 8299:
            case 8300:
            case 8301:
            case 8302:
            case 8303:
            case 8304:
            case 8305:
            case 8306:
            case 8307:
            case 8308:
            case 8309:
            case 8310:
            case 8311:
            case 8312:
            case 8313:
            case 8314:
            case 8315:
            case 8316:
            case 8317:
            case 8318:
            case 8319:
            case 8320:
            case 8321:
            case 8322:
            case 8323:
            case 8324:
            case 8325:
            case 8326:
            case 8327:
            case 8328:
            case 8329:
            case 8330:
            case 8331:
            case 8332:
            case 8333:
            case 8334:
            case 8335:
            case 8336:
            case 8337:
            case 8338:
            case 8339:
            case 8340:
            case 8341:
            case 8342:
            case 8343:
            case 8344:
            case 8345:
            case 8346:
            case 8347:
            case 8348:
            case 8349:
            case 8350:
            case 8351:
            case 8352:
            case 8353:
            case 8354:
            case 8355:
            case 8356:
            case 8357:
            case 8358:
            case 8359:
            case 8360:
            case 8361:
            case 8362:
            case 8363:
            switchD_1008e38b9_caseD_2015:
                uVar1 = 63;
            }
        }
        return uVar1;
    }

    // 0x1008e3d70, 432 bytes, placed by class name
    // FontHelpers::ConvertTagCharCodes(StringView)
    FontHelpers* FontHelpers::ConvertTagCharCodes(StringView param_1) {
        char cVar1;
        uchar* extraout_RDX;
        uchar* extraout_RDX_00;
        uchar* extraout_RDX_01;
        uchar* extraout_RDX_02;
        uchar* extraout_RDX_03;
        uchar* extraout_RDX_04;
        uchar* extraout_RDX_05;
        uchar* extraout_RDX_06;
        StringView* this_00;
        uint* puVar2;
        StringView SVar3;
        StringView SVar4;
        StringView SVar5;
        StringView SVar6;
        StringView SVar7;
        StringView SVar8;
        StringView SVar9;
        StringView SVar10;
        StringView local_a0;
        StringView local_90;
        StringView local_80;
        StringView local_70;
        StringView local_60;
        StringView local_50;
        StringView local_40;
        StringView local_30;

        this_00 = (StringView*)param_1.field_0;
        StringView::StringView<3ul>(&local_a0, "lt");
        SVar3.field_8 = extraout_RDX;
        SVar3.field_0 = (ulong)&local_a0;
        cVar1 = StringView::operator==(this_00, SVar3);
        if (cVar1 == '\0') {
            StringView::StringView<3ul>(&local_90, "gt");
            SVar4.field_8 = extraout_RDX_00;
            SVar4.field_0 = (ulong)&local_90;
            cVar1 = StringView::operator==(this_00, SVar4);
            if (cVar1 == '\0') {
                StringView::StringView<5ul>(&local_80, "nbsp");
                SVar5.field_8 = extraout_RDX_01;
                SVar5.field_0 = (ulong)&local_80;
                cVar1 = StringView::operator==(this_00, SVar5);
                if (cVar1 == '\0') {
                    StringView::StringView<4ul>(&local_70, "shy");
                    SVar6.field_8 = extraout_RDX_02;
                    SVar6.field_0 = (ulong)&local_70;
                    cVar1 = StringView::operator==(this_00, SVar6);
                    if (cVar1 == '\0') {
                        StringView::StringView<6ul>(&local_60, "times");
                        SVar7.field_8 = extraout_RDX_03;
                        SVar7.field_0 = (ulong)&local_60;
                        cVar1 = StringView::operator==(this_00, SVar7);
                        if (cVar1 == '\0') {
                            StringView::StringView<5ul>(&local_50, "euro");
                            SVar8.field_8 = extraout_RDX_04;
                            SVar8.field_0 = (ulong)&local_50;
                            cVar1 = StringView::operator==(this_00, SVar8);
                            if (cVar1 == '\0') {
                                StringView::StringView<5ul>(&local_40, "copy");
                                SVar9.field_8 = extraout_RDX_05;
                                SVar9.field_0 = (ulong)&local_40;
                                cVar1 = StringView::operator==(this_00, SVar9);
                                if (cVar1 == '\0') {
                                    StringView::StringView<4ul>(&local_30, "reg");
                                    SVar10.field_8 = extraout_RDX_06;
                                    SVar10.field_0 = (ulong)&local_30;
                                    cVar1 = StringView::operator==(this_00, SVar10);
                                    if (cVar1 == '\0') {
                                        new (this) eastl::optional<game::option::EnumOptionToggle>();
                                        return this;
                                    }
                                    puVar2 = &regCharCode;
                                } else {
                                    puVar2 = &copyCharCode;
                                }
                            } else {
                                puVar2 = &euroCharCode;
                            }
                        } else {
                            puVar2 = &timesCharCode;
                        }
                    } else {
                        puVar2 = &shyCharCode;
                    }
                } else {
                    puVar2 = &nbspCharCode;
                }
            } else {
                puVar2 = &gtCharCode;
            }
        } else {
            puVar2 = &ltCharCode;
        }
        new (this) eastl::optional<unsigned int>(puVar2);
        return this;
    }

    // 0x1008e4110, 1152 bytes, placed by class name
    // FontHelpers::PredictCharPosAtIndexMultiline(StringView, int, int, FontMetrics const&, TextFlags, eastl::optional<int>)
    /* WARNING: Removing unreachable block (ram,4304291088) */
    /* FontHelpers::PredictCharPosAtIndexMultiline(StringView, int, int,
   FontMetrics const&, TextFlags, eastl::optional<int>) */

    undefined8 FontHelpers::PredictCharPosAtIndexMultiline(ShuffledPacketFactory* param_1, undefined4 param_2_00,
                                                           int param_2, FontMetrics* param_4, undefined1 param_5,
                                                           optional<int>* param_6) {
        bool bVar1;
        byte bVar2;
        undefined1 uVar3;
        uint uVar4;
        char* pcVar5;
        ulong uVar6;
        undefined8 uVar7;
        Layout* this_00;
        StringView* pSVar8;
        ulong uVar9;
        long lVar10;
        ulong uVar11;
        ulong uVar12;
        int iVar13;
        long lVar14;
        StringView SVar15;
        StringView SVar16;
        TextFlags in_stack_fffffffffffffc48;
        StringView local_3b0;
        StringView local_3a0;
        undefined8 local_390;
        undefined8 local_388;
        ulong local_380;
        undefined8 local_378;
        undefined4 local_36c;
        int local_368;
        uint local_364;
        uint local_360;
        uint local_35c;
        pair<int, int> local_350[8];
        int local_348;
        ulong local_340;
        int local_338;
        uint local_334;
        uint local_330[2];
        undefined8 local_328;
        int local_100[50];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_330[0] = CONCAT31(local_330[0]._1_3_, param_5);
        local_36c = param_2_00;
        local_328._0_4_ = param_4->GetVerticalSpacing();
        uVar4 = eastl::optional<int>::value_or<int>(param_6, (int*)&local_328);
        if (param_2 < 1) {
            local_328 = (ulong)local_328._4_4_ << 32;
            bVar2 = param_4->GetMaxAscent();
            local_100[0] = uVar4 + bVar2;
            local_350 = (pair<int, int>[8])eastl::make_pair<int, int&>((int*)&local_328, local_100);
        } else {
            pcVar5 = (char*)param_1->end();
            uVar6 = param_1->HeapBeginPtr();
            uVar7 = stringtools::GetUTF8StringWidth(pcVar5, uVar6);
            iVar13 = (int)uVar7;
            if (iVar13 != 0) {
                local_348 = param_2;
                if (iVar13 < param_2) {
                    local_348 = iVar13;
                }
                new (local_100) eastl::fixed_vector<StringView, 10ul, true, BucketAllocatorEASTL>();
                new (&local_3a0) StringView(param_1);
                SVar15.field_8 = (uchar*)param_4;
                SVar15.field_0 = (ulong)&local_3a0;
                local_388 = SplitString((fixed_vector*)local_100, SVar15, (FontMetrics*)&local_36c,
                                        (int*)(ulong)local_330[0], in_stack_fffffffffffffc48);
                local_35c = (int)local_388 - 1;
                local_338 = 0;
                uVar12 = 0;
                uVar6 = 0;
                local_390 = uVar7;
                local_360 = uVar4;
                while (true) {
                    uVar4 = (uint)uVar12;
                    if ((int)local_388 <= (int)uVar4) {
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways(
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "fonts/FontHelpers.cpp",
                            659, "FontHelpers::PredictCharPosAtIndexMultiline - Reached end of file before expected.");
                    }
                    local_334 = uVar4;
                    this_00 = (Layout*)eastl::vector<
                        StringView, eastl::fixed_vector_allocator<16ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                    operator[](
                        (vector<StringView,
                                eastl::fixed_vector_allocator<16ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)
                            local_100,
                        (long)(int)uVar4);
                    local_378 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(this_00);
                    pSVar8 = (StringView*)eastl::vector<
                        StringView, eastl::fixed_vector_allocator<16ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                    operator[](
                        (vector<StringView,
                                eastl::fixed_vector_allocator<16ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)
                            local_100,
                        (long)(int)uVar4);
                    uVar9 = stringtools::GetUTF8StringWidth<StringView>(pSVar8);
                    iVar13 = (int)uVar6;
                    uVar4 = (int)uVar9 + iVar13;
                    local_380 = (ulong)uVar4;
                    if ((local_348 < (int)uVar4) || ((local_334 == local_35c && ((int)local_390 <= param_2))))
                        break;
                    local_338 = local_338 + (int)local_378;
                    local_334 = local_334 + 1;
                    uVar12 = (ulong)local_334;
                    uVar6 = local_380;
                }
                new (&local_328) eastl::fixed_string<char, 512, true, eastl::allocator>();
                uVar3 = (undefined1)uVar12;
                local_340 = 0;
                uVar9 = (ulong)(uint)(local_348 - iVar13);
                if (local_348 - iVar13 != 0 && iVar13 <= local_348) {
                    lVar14 = (long)local_338;
                    do {
                        lVar10 = param_1->end();
                        uVar11 = ShuffledPacketFactory::p2_alt2(param_1);
                        uVar4 = stringtools::GetUTF8NextChar((char*)(lVar10 + lVar14), &local_340, uVar11);
                        stringtools::UTF8Append<eastl::fixed_string<char, 24, true, eastl::allocator>>(
                            uVar4, (fixed_string*)&local_328);
                        uVar3 = (undefined1)uVar12;
                        uVar9 = uVar9 - 1;
                    } while (uVar9 != 0);
                }
                bVar1 = ends_with<eastl::fixed_string<char, 512, true, eastl::allocator>>((fixed_string*)&local_328,
                                                                                          "<br>");
                uVar4 = local_360;
                if (bVar1) {
                    eastl::fixed_string<char, 16, true, eastl::allocator>::operator=(
                        (fixed_string<char, 16, true, eastl::allocator>*)&local_328, "");
                    local_338 = local_338 + (int)local_378;
                    local_334 = local_334 + 1;
                } else {
                    local_380 = uVar6;
                }
                StringView::StringView<eastl::fixed_string<char, 512, true, eastl::allocator>>(
                    &local_3b0, (fixed_string*)&local_328);
                bVar2 = local_330->HasFlag(1);
                SVar16.field_8 = (uchar*)param_4;
                SVar16.field_0 = (ulong)&local_3b0;
                local_368 = GetStringWidth(SVar16, (FontMetrics*)(ulong)bVar2, (bool)uVar3);
                bVar2 = param_4->GetMaxAscent();
                local_364 = local_334 * uVar4 + (uint)bVar2;
                local_350 = (pair<int, int>[8])eastl::make_pair<int, int&>(&local_368, (int*)&local_364);
                /* WARNING: Subroutine does not return */
                local_328.~fixed_string();
            }
            local_100[0] = 0;
            uVar3 = param_4->GetMaxAscent();
            local_340 = CONCAT71(local_340._1_7_, uVar3);
            local_328 = eastl::make_pair<int, unsigned char>(local_100, (uchar*)&local_340);
            eastl::pair<int, int>::pair<int, unsigned char, void>(local_350, (pair*)&local_328);
        }
        uVar7._0_1_ = local_350[0];
        uVar7._1_1_ = local_350[1];
        uVar7._2_1_ = local_350[2];
        uVar7._3_1_ = local_350[3];
        uVar7._4_1_ = local_350[4];
        uVar7._5_1_ = local_350[5];
        uVar7._6_1_ = local_350[6];
        uVar7._7_1_ = local_350[7];
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar7;
    }

    // 0x1008e46a0, 336 bytes, placed by class name
    // FontHelpers::PredictCharPosAtIndex(StringView, FontMetrics const&, int, bool)
    undefined8 FontHelpers::PredictCharPosAtIndex(StringView param_1, FontMetrics* param_2, int param_3, bool param_4) {
        uint uVar1;
        uint uVar2;
        char* pcVar3;
        ulong uVar4;
        ulong uVar5;
        undefined1 uVar6;
        ShuffledPacketFactory* this;
        StringView SVar7;
        StringView local_288;
        ulong local_278;
        uchar* local_270;
        fixed_string<char, 512, true, eastl::allocator> local_260[552];
        long local_38;

        local_270 = param_1.field_8;
        this = (ShuffledPacketFactory*)param_1.field_0;
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar2 = (uint)param_2;
        if (0 < (int)uVar2) {
            pcVar3 = (char*)end();
            uVar4 = HeapBeginPtr();
            uVar1 = stringtools::GetUTF8StringWidth(pcVar3, uVar4);
            if ((int)uVar1 < (int)uVar2) {
                uVar2 = uVar1;
            }
            eastl::fixed_string<char, 512, true, eastl::allocator>::fixed_string(local_260);
            uVar6 = (undefined1)param_3;
            local_278 = 0;
            if (0 < (int)uVar2) {
                uVar4 = (ulong)uVar2;
                do {
                    pcVar3 = (char*)end();
                    uVar5 = ShuffledPacketFactory::p2_alt2(this);
                    uVar2 = stringtools::GetUTF8NextChar(pcVar3, &local_278, uVar5);
                    stringtools::UTF8Append<eastl::fixed_string<char, 24, true, eastl::allocator>>(
                        uVar2, (fixed_string*)local_260);
                    uVar6 = (undefined1)param_3;
                    uVar4 = uVar4 - 1;
                } while (uVar4 != 0);
            }
            StringView::StringView<eastl::fixed_string<char, 512, true, eastl::allocator>>(&local_288,
                                                                                           (fixed_string*)local_260);
            SVar7.field_8 = local_270;
            SVar7.field_0 = (ulong)&local_288;
            GetStringWidth(SVar7, (FontMetrics*)(ulong)(byte)param_3, (bool)uVar6);
            /* WARNING: Subroutine does not return */
            local_260->~fixed_string();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return 0;
    }

    // 0x1008e47f0, 848 bytes, placed by class name
    // FontHelpers::PredictCharAtPosMultiline(StringView, int*, int, int, FontMetrics const&, TextFlags, eastl::optional<int>)
    ulong FontHelpers::PredictCharAtPosMultiline(StringView* param_1, FontMetrics* param_2, int param_3_00, int param_3,
                                                 FontMetrics* param_5, uint param_6_00, optional<int>* param_6) {
        bool bVar1;
        int iVar2;
        int iVar3;
        StringView* pSVar4;
        long lVar5;
        type* ptVar6;
        type* ptVar7;
        type* ptVar8;
        ulong uVar9;
        ulong uVar10;
        ulong uVar11;
        FontMetrics* pFVar12;
        undefined4 uVar13;
        int iVar14;
        uint uVar15;
        ulong uVar16;
        StringView SVar17;
        StringView SVar18;
        StringView SVar19;
        TextFlags in_stack_fffffffffffffe68;
        StringView local_190;
        StringView local_180;
        StringView local_170;
        StringView local_160;
        undefined8 local_150;
        undefined8 local_148;
        ulong local_140;
        undefined4 local_12c;
        int local_128;
        uint local_124;
        StringView local_120;
        ulong local_110;
        uint local_108;
        fixed_vector<StringView, 10ul, true, BucketAllocatorEASTL> local_100[200];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_vector<StringView, 10ul, true, BucketAllocatorEASTL>::fixed_vector(local_100);
        new (&local_160) StringView(param_1);
        local_124 = param_6_00 & 255;
        pFVar12 = (FontMetrics*)(ulong)local_124;
        SVar19.field_8 = (uchar*)param_5;
        SVar19.field_0 = (ulong)&local_160;
        iVar2 = SplitString((fixed_vector*)local_100, SVar19, param_2, (int*)pFVar12, in_stack_fffffffffffffe68);
        uVar16 = 0;
        if (iVar2 != 0) {
            iVar14 = 0;
            if (-1 < param_3) {
                iVar14 = param_3;
            }
            local_120.field_0._0_4_ = param_5->GetVerticalSpacing();
            iVar3 = eastl::optional<int>::value_or<int>(param_6, (int*)&local_120);
            local_108 = iVar2 - 1;
            if (iVar14 / iVar3 < iVar2) {
                local_108 = iVar14 / iVar3;
            }
            pSVar4 = (StringView*)eastl::vector<
                StringView, eastl::fixed_vector_allocator<16ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
            operator[](
                (vector<StringView, eastl::fixed_vector_allocator<16ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)
                    local_100,
                (long)(int)local_108);
            new (&local_120) StringView(pSVar4);
            local_110 = 0;
            lVar5 = local_120.HeapBeginPtr();
            uVar15 = 0;
            if (lVar5 == 0) {
                iVar2 = 0;
                uVar11 = 0;
            } else {
                iVar2 = 0;
                uVar11 = 0;
                if (0 < param_3_00) {
                    uVar11 = 0;
                    iVar2 = 0;
                    uVar16 = 0;
                    uVar13 = 0;
                    do {
                        uVar9 = local_110;
                        local_140 = uVar16;
                        local_12c = uVar13;
                        local_128 = iVar2;
                        new (&local_190) StringView(&local_120);
                        SVar17.field_8 = (uchar*)&local_110;
                        SVar17.field_0 = (ulong)&local_190;
                        local_150 = GetNextElementLength(SVar17, (ulong*)(ulong)local_124, in_stack_fffffffffffffe68);
                        ptVar6 = std::get<0ul, unsigned int, unsigned int>((pair*)&local_150);
                        ptVar7 = std::get<1ul, unsigned int, unsigned int>((pair*)&local_150);
                        local_180.substr((ulong)&local_120, uVar9);
                        new (&local_170) StringView(&local_180);
                        SVar18.field_8._0_4_ = local_12c;
                        SVar18.field_0 = (ulong)&local_170;
                        SVar18.field_8._4_4_ = 0;
                        local_148 = GetElementWidth(SVar18, *(uint*)ptVar7, (uint)param_5, pFVar12);
                        ptVar8 = std::get<0ul, unsigned int, unsigned int>((pair*)&local_148);
                        ptVar7 = std::get<1ul, unsigned int, unsigned int>((pair*)&local_148);
                        uVar16 = local_110;
                        uVar13 = *(undefined4*)ptVar7;
                        uVar11 = uVar11 + *(uint*)ptVar6;
                        uVar15 = *(int*)ptVar8 + (int)local_140;
                        iVar2 = local_128;
                        if (*(int*)ptVar8 != 0) {
                            iVar2 = (int)local_140;
                        }
                        uVar9 = local_120.HeapBeginPtr();
                    } while ((uVar16 < uVar9) && (uVar16 = (ulong)uVar15, (int)uVar15 < param_3_00));
                }
            }
            uVar16 = local_110;
            uVar9 = local_120.HeapBeginPtr();
            if (uVar16 == uVar9) {
                bVar1 = ends_with<StringView>(&local_120, "<br>");
                uVar16 = uVar11 - 4;
                if (!bVar1) {
                    uVar16 = uVar11;
                }
            } else {
                uVar16 = uVar11 - ((uint)(param_3_00 - iVar2) < uVar15 - param_3_00);
            }
            if (0 < (int)local_108) {
                uVar9 = (ulong)local_108;
                uVar11 = 0;
                do {
                    pSVar4 = (StringView*)eastl::vector<
                        StringView, eastl::fixed_vector_allocator<16ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>::
                    operator[](
                        (vector<StringView,
                                eastl::fixed_vector_allocator<16ul, 10ul, 8ul, 0ul, true, BucketAllocatorEASTL>>*)
                            local_100,
                        uVar11);
                    uVar10 = stringtools::GetUTF8StringWidth<StringView>(pSVar4);
                    uVar16 = uVar16 + uVar10;
                    uVar11 = uVar11 + 1;
                } while (uVar9 != uVar11);
            }
        }
        eastl::fixed_vector<StringView, 10ul, true, BucketAllocatorEASTL>::~fixed_vector(local_100);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar16 & 4294967295;
    }

    // 0x1008e4be0, 64 bytes, placed by class name
    // FontHelpers::FromCodeMap(unsigned int)
    uint FontHelpers::FromCodeMap(uint param_1) {
        uint uVar1;

        if ((param_1 - 1 < 127) || (param_1 - 160 < 96)) {
            return param_1;
        }
        uVar1 = 63;
        if (param_1 - 128 < 32) {
            uVar1 = *(uint*)(&DAT_100d4b8f8 + (long)(int)(param_1 - 128) * 4);
        }
        return uVar1;
    }

    // 0x1008e4c20, 1008 bytes, placed by class name
    // FontHelpers::IsDrawableCodepoint(unsigned int)
    undefined8 FontHelpers::IsDrawableCodepoint(uint param_1) {
        if (param_1 - 32 < 96) {
            return 1;
        }
        if (param_1 - 160 < 96) {
            return 1;
        }
        if ((int)param_1 < 732) {
            switch (param_1) {
            case 338:
            case 339:
            case 352:
            case 353:
            case 376:
            case 381:
            case 382:
            case 402:
                break;
            case 340:
            case 341:
            case 342:
            case 343:
            case 344:
            case 345:
            case 346:
            case 347:
            case 348:
            case 349:
            case 350:
            case 351:
            case 354:
            case 355:
            case 356:
            case 357:
            case 358:
            case 359:
            case 360:
            case 361:
            case 362:
            case 363:
            case 364:
            case 365:
            case 366:
            case 367:
            case 368:
            case 369:
            case 370:
            case 371:
            case 372:
            case 373:
            case 374:
            case 375:
            case 377:
            case 378:
            case 379:
            case 380:
            case 383:
            case 384:
            case 385:
            case 386:
            case 387:
            case 388:
            case 389:
            case 390:
            case 391:
            case 392:
            case 393:
            case 394:
            case 395:
            case 396:
            case 397:
            case 398:
            case 399:
            case 400:
            case 401:
                goto switchD_1008e4c5d_caseD_2015;
            default:
                if ((1 < param_1 - 9) && (param_1 != 710)) {
                    return 0;
                }
            }
        } else {
            switch (param_1) {
            case 8211:
            case 8212:
            case 8216:
            case 8217:
            case 8218:
            case 8220:
            case 8221:
            case 8222:
            case 8224:
            case 8225:
            case 8226:
            case 8230:
            case 8240:
            case 8249:
            case 8250:
            case 8364:
                break;
            case 8213:
            case 8214:
            case 8215:
            case 8219:
            case 8223:
            case 8227:
            case 8228:
            case 8229:
            case 8231:
            case 8232:
            case 8233:
            case 8234:
            case 8235:
            case 8236:
            case 8237:
            case 8238:
            case 8239:
            case 8241:
            case 8242:
            case 8243:
            case 8244:
            case 8245:
            case 8246:
            case 8247:
            case 8248:
            case 8251:
            case 8252:
            case 8253:
            case 8254:
            case 8255:
            case 8256:
            case 8257:
            case 8258:
            case 8259:
            case 8260:
            case 8261:
            case 8262:
            case 8263:
            case 8264:
            case 8265:
            case 8266:
            case 8267:
            case 8268:
            case 8269:
            case 8270:
            case 8271:
            case 8272:
            case 8273:
            case 8274:
            case 8275:
            case 8276:
            case 8277:
            case 8278:
            case 8279:
            case 8280:
            case 8281:
            case 8282:
            case 8283:
            case 8284:
            case 8285:
            case 8286:
            case 8287:
            case 8288:
            case 8289:
            case 8290:
            case 8291:
            case 8292:
            case 8293:
            case 8294:
            case 8295:
            case 8296:
            case 8297:
            case 8298:
            case 8299:
            case 8300:
            case 8301:
            case 8302:
            case 8303:
            case 8304:
            case 8305:
            case 8306:
            case 8307:
            case 8308:
            case 8309:
            case 8310:
            case 8311:
            case 8312:
            case 8313:
            case 8314:
            case 8315:
            case 8316:
            case 8317:
            case 8318:
            case 8319:
            case 8320:
            case 8321:
            case 8322:
            case 8323:
            case 8324:
            case 8325:
            case 8326:
            case 8327:
            case 8328:
            case 8329:
            case 8330:
            case 8331:
            case 8332:
            case 8333:
            case 8334:
            case 8335:
            case 8336:
            case 8337:
            case 8338:
            case 8339:
            case 8340:
            case 8341:
            case 8342:
            case 8343:
            case 8344:
            case 8345:
            case 8346:
            case 8347:
            case 8348:
            case 8349:
            case 8350:
            case 8351:
            case 8352:
            case 8353:
            case 8354:
            case 8355:
            case 8356:
            case 8357:
            case 8358:
            case 8359:
            case 8360:
            case 8361:
            case 8362:
            case 8363:
            switchD_1008e4c5d_caseD_2015:
                return 0;
            default:
                if ((param_1 != 732) && (param_1 != 8482)) {
                    return 0;
                }
            }
        }
        return 1;
    }

    // 0x1008e5180, 1392 bytes, placed by class name
    // FontHelpers::FontState::UpdateState(StringView)
    void FontHelpers::FontState::UpdateState(StringView param_1) {
        char cVar1;
        bool bVar2;
        uint uVar3;
        ulong uVar4;
        long lVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        uchar* extraout_RDX;
        uchar* extraout_RDX_00;
        uchar* extraout_RDX_01;
        uchar* extraout_RDX_02;
        uchar* extraout_RDX_03;
        uchar* extraout_RDX_04;
        uchar* extraout_RDX_05;
        uchar* extraout_RDX_06;
        uchar* extraout_RDX_07;
        uchar* extraout_RDX_08;
        undefined8 uVar9;
        char* pcVar10;
        StringView SVar11;
        StringView SVar12;
        StringView SVar13;
        StringView SVar14;
        StringView SVar15;
        StringView SVar16;
        StringView SVar17;
        StringView SVar18;
        StringView SVar19;
        StringView SVar20;
        StringView SVar21;
        StringView SVar22;
        StringView SVar23;
        StringView SVar24;
        StringView SVar25;
        StringView local_178;
        StringView local_168;
        StringView local_158;
        StringView local_148;
        StringView local_138;
        StringView local_128;
        StringView local_118;
        StringView local_108;
        StringView local_f8;
        StringView local_e8;
        StringView local_d8;
        StringView local_c8;
        StringView local_b8;
        StringView local_a8;
        StringView local_98;
        optional<unsigned int> local_88[8];
        StringView local_80;
        StringView local_70;
        StringView local_60;
        StringView local_50;
        StringView local_40;
        int local_2c;

        SVar12.field_0 = (StringView*)param_1.field_0;
        StringView::StringView<5ul>(&local_178, "/col");
        SVar11.field_8 = extraout_RDX;
        SVar11.field_0 = (ulong)&local_178;
        cVar1 = StringView::operator==(SVar12.field_0, SVar11);
        if (cVar1 != '\0') {
            field_8 = field_12 & 4294967040 | (uint)(byte)field_8;
            return;
        }
        StringView::StringView<5ul>(&local_168, "col=");
        SVar12.field_8 = (uchar*)&local_168;
        local_50.suffix_of(SVar12);
        cVar1 = local_50.empty();
        if (cVar1 != '\0') {
            StringView::StringView<6ul>(&local_148, "argb=");
            SVar13.field_8 = (uchar*)&local_148;
            SVar13.field_0 = (ulong)SVar12.field_0;
            local_40.suffix_of(SVar13);
            cVar1 = local_40.empty();
            if (cVar1 == '\0') {
                bVar2 = FromString<StringView, int>(&local_40, (int*)&local_80, 16);
                if (bVar2) {
                    field_8 = (uint)local_80.field_0 << 8 | (uint)local_80.field_0 >> 24;
                    return;
                }
                uVar6 = logger::default_logger();
                uVar7 = SVar12.field_0->HeapBeginPtr();
                uVar8 = SVar12.field_0->end();
                pcVar10 = "Failed to parse argb tag value from %.*s";
                uVar9 = 1408;
            } else {
                StringView::StringView<6ul>(&local_138, "/argb");
                SVar14.field_8 = extraout_RDX_00;
                SVar14.field_0 = (ulong)&local_138;
                cVar1 = StringView::operator==(SVar12.field_0, SVar14);
                if (cVar1 != '\0') {
                    field_8 = field_12;
                    return;
                }
                StringView::StringView<5ul>(&local_128, "str=");
                SVar15.field_8 = (uchar*)&local_128;
                SVar15.field_0 = (ulong)SVar12.field_0;
                local_80.suffix_of(SVar15);
                cVar1 = local_80.empty();
                if (cVar1 == '\0') {
                    bVar2 = FromString<StringView, int>(&local_80, (int*)&local_70, 16);
                    if (bVar2) {
                        field_0 = (int)local_70.field_0 << 8 | (uint)(byte)field_8;
                        return;
                    }
                    uVar6 = logger::default_logger();
                    uVar7 = SVar12.field_0->HeapBeginPtr();
                    uVar8 = SVar12.field_0->end();
                    pcVar10 = "Failed to parse strikethrough tag value from %.*s";
                    uVar9 = 1426;
                } else {
                    StringView::StringView<4ul>(&local_118, "str");
                    SVar16.field_8 = extraout_RDX_01;
                    SVar16.field_0 = (ulong)&local_118;
                    cVar1 = StringView::operator==(SVar12.field_0, SVar16);
                    if (cVar1 != '\0') {
                        field_0 = (byte)field_8 | 2147483648;
                        return;
                    }
                    StringView::StringView<5ul>(&local_108, "/str");
                    SVar18.field_8 = extraout_RDX_03;
                    SVar18.field_0 = (ulong)&local_108;
                    cVar1 = StringView::operator==(SVar12.field_0, SVar18);
                    if (cVar1 != '\0') {
                        field_0 = 4294967295;
                        return;
                    }
                    StringView::StringView<3ul>(&local_f8, "u=");
                    SVar19.field_8 = (uchar*)&local_f8;
                    SVar19.field_0 = (ulong)SVar12.field_0;
                    local_70.suffix_of(SVar19);
                    cVar1 = local_70.empty();
                    if (cVar1 != '\0') {
                        new (&local_e8) StringView("u");
                        SVar20.field_8 = extraout_RDX_04;
                        SVar20.field_0 = (ulong)&local_e8;
                        cVar1 = StringView::operator==(SVar12.field_0, SVar20);
                        if (cVar1 != '\0') {
                            field_4 = (uint)(byte)field_8;
                            return;
                        }
                        StringView::StringView<3ul>(&local_d8, "/u");
                        SVar21.field_8 = extraout_RDX_05;
                        SVar21.field_0 = (ulong)&local_d8;
                        cVar1 = StringView::operator==(SVar12.field_0, SVar21);
                        if (cVar1 != '\0') {
                            field_4 = 4294967295;
                            return;
                        }
                        StringView::StringView<6ul>(&local_c8, "shad=");
                        SVar22.field_8 = (uchar*)&local_c8;
                        SVar22.field_0 = (ulong)SVar12.field_0;
                        local_60.suffix_of(SVar22);
                        cVar1 = local_60.empty();
                        if (cVar1 == '\0') {
                            bVar2 = FromString<StringView, int>(&local_60, &local_2c, 16);
                            uVar3 = 0;
                            if ((bVar2) && (local_2c != -1)) {
                                uVar3 = local_2c << 8 | (uint)(byte)field_8;
                            }
                            field_24 = uVar3;
                            return;
                        }
                        StringView::StringView<5ul>(&local_b8, "shad");
                        SVar23.field_8 = extraout_RDX_06;
                        SVar23.field_0 = (ulong)&local_b8;
                        cVar1 = StringView::operator==(SVar12.field_0, SVar23);
                        if (cVar1 != '\0') {
                            field_24 = (uint)(byte)field_8;
                            return;
                        }
                        StringView::StringView<6ul>(&local_a8, "/shad");
                        SVar24.field_8 = extraout_RDX_07;
                        SVar24.field_0 = (ulong)&local_a8;
                        cVar1 = StringView::operator==(SVar12.field_0, SVar24);
                        if (cVar1 != '\0') {
                            field_24 = field_28;
                            return;
                        }
                        StringView::StringView<3ul>(&local_98, "br");
                        SVar25.field_8 = extraout_RDX_08;
                        SVar25.field_0 = (ulong)&local_98;
                        cVar1 = StringView::operator==(SVar12.field_0, SVar25);
                        if (cVar1 == '\0') {
                            return;
                        }
                        uVar3 = field_12;
                        eastl::optional<unsigned int>::optional(local_88, &field_28);
                        ResetState(this, uVar3, local_88);
                        return;
                    }
                    bVar2 = FromString<StringView, int>(&local_70, (int*)&local_60, 16);
                    if (bVar2) {
                        field_4 = (int)local_60.field_0 << 8 | (uint)(byte)field_8;
                        return;
                    }
                    uVar6 = logger::default_logger();
                    uVar7 = SVar12.field_0->HeapBeginPtr();
                    uVar8 = SVar12.field_0->end();
                    pcVar10 = "Failed to parse m_underline tag value from %.*s";
                    uVar9 = 1448;
                }
            }
        LAB_1008e5411:
            logger::Logger::Log(uVar6, 1, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/fonts/FontHelpers.cpp",
                                uVar9, pcVar10, uVar7, uVar8);
            return;
        }
        bVar2 = FromString<StringView, unsigned int>(&local_50, (uint*)&local_40, 16);
        if (!bVar2) {
            uVar6 = logger::default_logger();
            uVar7 = SVar12.field_0->HeapBeginPtr();
            uVar8 = SVar12.field_0->end();
            pcVar10 = "Failed to parse colour tag value from %.*s";
            uVar9 = 1394;
            goto LAB_1008e5411;
        }
        uVar4 = local_50.HeapBeginPtr();
        if (6 < uVar4) {
            StringView::StringView<3ul>(&local_158, "0x");
            SVar17.field_8 = extraout_RDX_02;
            SVar17.field_0 = (ulong)&local_158;
            cVar1 = local_50.starts_with(SVar17);
            if ((cVar1 == '\0') || (lVar5 = local_50.HeapBeginPtr(), lVar5 != 8))
                goto LAB_1008e53c9;
        }
        local_40.field_0._0_4_ = (uint)local_40.field_0 << 8 | 255;
    LAB_1008e53c9:
        field_8 = (uint)local_40.field_0;
    }

    // 0x1008e5850, 96 bytes, placed by class name
    // FontHelpers::FontState::ResetState(unsigned int, eastl::optional<unsigned int>)
    void FontHelpers::FontState::ResetState(uint param_1, optional* param_3) {
        uint* puVar1;
        bool bVar2;
        uint uVar3;
        optional<game::option::EnumOptionToggle> local_28[8];

        field_0 = 4294967295;
        field_4 = 4294967295;
        field_12 = param_1;
        field_8 = param_1;
        field_16 = 0;
        eastl::optional<game::option::EnumOptionToggle>::optional(local_28);
        bVar2 = eastl::operator!=(param_3, (optional*)local_28);
        field_20 = bVar2;
        uVar3 = 0;
        if (bVar2) {
            puVar1 = (uint*)eastl::optional<unsigned int>::value();
            uVar3 = *puVar1;
        }
        field_28 = uVar3;
        field_24 = uVar3;
    }

    // 0x100916d80, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.14
    void ___cxx_global_var_init_14() {
        new (&FontHelpers::m_modIcons) Array<FontHelpers::ModIconReference, eastl::allocator>();
        ___cxa_atexit(PTR__Array_100ee6770, &FontHelpers::m_modIcons, 4294967296);
    }

} // namespace jag::graphics

namespace jag {
    // 0x1008e0020, 64 bytes, inline, placed by debug map only (low confidence)
    // bool FromString<StringView, int>(StringView const&, int&, int)
    bool FromString<StringView, int>(StringView* param_1, int* param_2, int param_3) {
        int in_ECX;
        StringView SVar2;
        StringView local_30;

        new (&local_30) StringView(param_1);
        SVar2.field_8 = (uchar*)param_2;
        SVar2.field_0 = (ulong)&local_30;
        return (bool)FromText(SVar2, (int*)(ulong)(uint)param_3, in_ECX);
    }

} // namespace jag
