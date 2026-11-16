// libs/graphics/runetek7/fonts/FontHelpers.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class FontHelpers {
    public:
        class FontState;
        class ModIconReference;
        void StripTags<eastl::fixed_string<char, 1024, true, eastl::allocator>>(
            eastl::fixed_string<char, 1024, true, eastl::allocator>&, StringView);
        void PredictWidthMultiLine(StringView, int, TextProperties const&);
        FontHelpers();
        ~FontHelpers();
        void Initialise(GUIManager*);
        void Shutdown();
        void SetModIcons(Array<ModIconReference, eastl::allocator>&&);
        DrawString(StringView, int, int, unsigned int, TextProperties const&);
        int DrawAlignedString(StringView, int, int, int,
                              eastl::fixed_vector<std::pair<int, int>, 256ul, true, eastl::allocator> const*,
                              TextProperties const&);
        void DrawStringIn3DSpace(math::Vector3T<float> const&, math::Matrix44T<float> const&,
                                 math::Matrix44T<float> const&, char const*, unsigned long, TextProperties const&);
        void DrawStringMultiline(StringView, int, int, int, int, unsigned int*, TextProperties const&);
        void SplitString(eastl::fixed_vector<StringView, 10ul, true, BucketAllocatorEASTL>&, StringView,
                         FontMetrics const&, int*, TextFlags);
        void TruncateString<eastl::fixed_string<char, 256, true, eastl::allocator>>(
            eastl::fixed_string<char, 256, true, eastl::allocator>&, StringView, FontMetrics const&, unsigned int,
            TextFlags, bool);
        int GetAlignedYOffset(FontMetrics const&, FontAlign, int&, int, int, int) const;
        int DrawStringInner(StringView, int, int,
                            eastl::fixed_vector<std::pair<int, int>, 256ul, true, eastl::allocator> const*,
                            TextProperties const&);
        int GetStringWidth(StringView, FontMetrics const&, bool);
        ulong CalculateExtraSpaceWidthForJustify(StringView, unsigned int, unsigned int, bool);
        DrawTextRunSlice(TextRunSlice const&, int, int, TextProperties const&, int);
        void DrawLetter(int, int, int, unsigned int, Font const&, shared_ptr<render::Texture> const&);
        void DrawStringCustomOffsets(StringView, int, int, int,
                                     eastl::fixed_vector<std::pair<int, int>, 256ul, true, eastl::allocator> const&,
                                     TextProperties const&);
        GetNextElementLength(StringView, unsigned long&, TextFlags);
        GetElementWidth(StringView, unsigned int, unsigned int, FontMetrics const&);
        PredictLines(StringView, int, FontMetrics const&, TextFlags);
        FontHelpers* GetPredictLinesLine(StringView, int, FontMetrics const&, unsigned int, TextFlags);
        PredictHeightAndLines(StringView, int, TextProperties const&);
        int PredictWidthMultiLine(StringView, int, FontMetrics const&, TextFlags);
        uint ToCodeMap(unsigned int);
        FontHelpers* ConvertTagCharCodes(StringView);
        PredictCharPosAtIndexMultiline(StringView, int, int, FontMetrics const&, TextFlags, eastl::optional<int>);
        PredictCharPosAtIndex(StringView, FontMetrics const&, int, bool);
        ulong PredictCharAtPosMultiline(StringView, int*, int, int, FontMetrics const&, TextFlags,
                                        eastl::optional<int>);
        uint FromCodeMap(unsigned int);
        IsDrawableCodepoint(unsigned int);
        int GetEllipsisWidth(FontMetrics const&);
        void PredictCharAtPosMultiline(StringView, int*, int, int, TextProperties const&);
        static /* 4 bytes */ ltCharCode;                      // = 60
        static /* 4 bytes */ gtCharCode;                      // = 62
        static /* 4 bytes */ spaceCharCode;                   // = 32
        static /* 4 bytes */ nbspCharCode;                    // = 160
        static /* 4 bytes */ shyCharCode;                     // = 173
        static /* 4 bytes */ timesCharCode;                   // = 215
        static /* 4 bytes */ euroCharCode;                    // = 128
        static /* 4 bytes */ copyCharCode;                    // = 169
        static /* 4 bytes */ regCharCode;                     // = 174
        static /* 4 bytes */ hyphenCharCode;                  // = 45
        static /* 4 bytes */ newlineCharCode;                 // = 10
        static /* 4 bytes */ tabCharCode;                     // = 9
        static /* 4 bytes */ m_overrideDrawAutoWrapWidth;     // = -1
        static /* 8 bytes */ m_overrideTruncatedStringLength; // = 4294967295
        static /* 8 bytes */ m_highlightNonVectorFonts;
        static Array<ModIconReference, eastl::allocator> /* 24 bytes */
            m_modIcons;                                  // = Array<ModIconReference,eastl::allocator>()
        static /* 48 bytes */ m_callbackGetSpriteReference;

        // data members, from how the methods use this: 40 bytes
        char _unknown_0[32];
        GUIManager* field_32; // offset 32
    };

    class FontHelpers::FontState {
    public:
        void ResetState(TextProperties const&);
        void UpdateState(StringView);
        void ResetState(unsigned int, eastl::optional<unsigned int>);

        // data members, from how the methods use this: 36 bytes
        uint field_0;        // offset 0
        uint field_4;        // offset 4
        uint field_8;        // offset 8
        uint field_12;       // offset 12
        undefined4 field_16; // offset 16
        bool field_20;       // offset 20
        char _unknown_21[3];
        uint field_24; // offset 24
        uint field_28; // offset 28
        char _unknown_32[4];
    };

    class FontHelpers::ModIconReference {
    public:
        ~ModIconReference();
        ModIconReference(ModIconReference&&);
        ModIconReference();

        // data members, from how the methods use this: 16 bytes
        undefined8 field_0; // offset 0
        char _unknown_8[8];
    };

    // 0x100060820, 192 bytes, inline, placed by class name and debug map
    // void FontHelpers::StripTags<eastl::fixed_string<char, 1024, true, eastl::allocator> >(eastl::fixed_string<char, 1024, true, eastl::allocator>&, StringView)
    /* void FontHelpers::StripTags<eastl::fixed_string<char, 512, true, eastl::allocator>
   >(eastl::fixed_string<char, 512, true, eastl::allocator>&, StringView) */

    void FontHelpers::StripTags<eastl::fixed_string<char, 512, true, eastl::allocator>>(fixed_string* param_1,
                                                                                        StringView param_2) {
        bool bVar1;
        char cVar2;
        int iVar3;
        ulong uVar4;
        char* pcVar5;
        ShuffledPacketFactory* this;
        bool bVar6;

        this = (ShuffledPacketFactory*)param_2.field_0;
        eastl::string::clear();
        uVar4 = ShuffledPacketFactory::p2_alt2(this);
        param_1->reserve(uVar4);
        iVar3 = ShuffledPacketFactory::p2_alt2(this);
        if (0 < iVar3) {
            uVar4 = 0;
            bVar6 = false;
            do {
                pcVar5 = (char*)WrapArray<char const>::operator[]((WrapArray<char const>*)this, uVar4);
                cVar2 = *pcVar5;
                if (*pcVar5 == '\b') {
                    cVar2 = '\n';
                }
                if (bVar6) {
                    bVar1 = bVar6;
                    if (cVar2 == '>') {
                        bVar1 = false;
                    }
                } else {
                    bVar1 = true;
                    if (cVar2 != '<') {
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
                        operator+=(
                            (basic_string<char,
                                          eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>*)
                                param_1,
                            cVar2);
                        bVar1 = bVar6;
                    }
                }
                bVar6 = bVar1;
                uVar4 = uVar4 + 1;
                iVar3 = ShuffledPacketFactory::p2_alt2(this);
            } while ((long)uVar4 < (long)iVar3);
        }
    }

    // 0x100861490, 96 bytes, inline, placed by class name
    // FontHelpers::PredictWidthMultiLine(StringView, int, TextProperties const&)
    void FontHelpers::PredictWidthMultiLine(StringView param_1, int param_2, TextProperties* param_3) {
        int iVar1;
        byte bVar2;
        undefined4 in_register_00000014;
        StringView SVar3;
        StringView aSStack_838[128];
        TextFlags in_stack_ffffffffffffffc8;

        SVar3.field_8._0_4_ = param_1.field_8._0_4_;
        StringView::StringView(aSStack_838 + 128, (StringView*)param_1.field_0);
        iVar1 = (CONCAT44(in_register_00000014, param_2))->GetFontMetrics();
        bVar2 = (CONCAT44(in_register_00000014, param_2))->GetLightLevelsBelow();
        SVar3.field_0 = (ulong)(aSStack_838 + 128);
        SVar3.field_8._4_4_ = 0;
        PredictWidthMultiLine(SVar3, iVar1, (FontMetrics*)(ulong)bVar2, in_stack_ffffffffffffffc8);
    }

    // 0x1008e0240, 80 bytes, inline, placed by class name
    // FontHelpers::FontState::ResetState(TextProperties const&)
    void FontHelpers::FontState::ResetState(TextProperties* param_1) {
        undefined4 uVar1;
        undefined1 local_30[8];

        uVar1 = param_1->GetLevel();
        local_30->GetShadowColour();
        ResetState(this, uVar1, (TextProperties*)local_30);
    }

    // 0x100906410, 64 bytes, inline, placed by class name
    // FontHelpers::GetEllipsisWidth(FontMetrics const&)
    int FontHelpers::GetEllipsisWidth(FontMetrics* param_1) {
        byte bVar1;
        int iVar2;

        bVar1 = param_1->GetGlyphAdvance(46);
        iVar2 = param_1->GetKerning(46, 46);
        return (uint)bVar1 * 3 + iVar2 * 2;
    }

    // 0x100a47140, 144 bytes, inline, placed by class name
    // FontHelpers::PredictCharAtPosMultiline(StringView, int*, int, int, TextProperties const&)
    void FontHelpers::PredictCharAtPosMultiline(StringView param_1, int* param_2, int param_3, int param_4,
                                                TextProperties* param_5) {
        undefined8 uVar1;
        undefined1 uVar2;
        undefined4 in_register_00000084;
        StaticPointLight* this;
        StringView local_50;
        optional<int> local_40[8];
        int local_38;

        this = (StaticPointLight*)CONCAT44(in_register_00000084, param_4);
        new (&local_50) StringView(param_1.field_0);
        uVar1 = GetFontMetrics();
        uVar2 = GetLightLevelsBelow();
        local_38 = GetLineSpacing();
        eastl::optional<int>::optional(local_40, &local_38);
        PredictCharAtPosMultiline(&local_50, param_1.field_8, (ulong)param_2 & 4294967295, param_3, uVar1, uVar2,
                                  local_40);
    }

} // namespace jag::graphics
