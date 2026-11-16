// libs/graphics/runetek7/fonts/FontHelpers.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class FontHelpers {
    public:
        class FontState;
        class ModIconReference;
        void StripTags<eastl::fixed_string<char, 1024>>(eastl::fixed_string<char, 1024>& str, StringView stringView);
        void PredictWidthMultiLine(StringView stringView, int arg2, const TextProperties& textProperties);
        FontHelpers();
        ~FontHelpers();
        void Initialise(GUIManager* guiManager);
        void Shutdown();
        void SetModIcons(Array<ModIconReference>&& modIconReferences);
        uint64_t DrawString(StringView stringView, int arg2, int arg3, unsigned int arg4,
                            const TextProperties& textProperties);
        unsigned int DrawAlignedString(StringView stringView, int arg2, int arg3, int arg4,
                                       const eastl::fixed_vector<std::pair<int, int>, 256ul>* pairs,
                                       const TextProperties& textProperties);
        void DrawStringIn3DSpace(const math::Vector3T<float>& vector3, const math::Matrix44T<float>& matrix441,
                                 const math::Matrix44T<float>& matrix442, const char* str, unsigned long arg5,
                                 const TextProperties& textProperties);
        void DrawStringMultiline(StringView stringView, int arg2, int arg3, int arg4, int arg5, unsigned int* arg6,
                                 const TextProperties& textProperties);
        void SplitString(eastl::fixed_vector<StringView, 10ul>& stringViews, StringView stringView,
                         const FontMetrics& fontMetrics, int* arg4, TextFlags textFlags);
        void TruncateString<eastl::fixed_string<char, 256>>(eastl::fixed_string<char, 256>& str, StringView stringView,
                                                            const FontMetrics& fontMetrics, unsigned int arg4,
                                                            TextFlags textFlags, bool arg6);
        int GetAlignedYOffset(const FontMetrics& fontMetrics, FontAlign fontAlign, int& arg3, int arg4, int arg5,
                              int arg6) const;
        int DrawStringInner(StringView stringView, int arg2, int arg3,
                            const eastl::fixed_vector<std::pair<int, int>, 256ul>* pairs,
                            const TextProperties& textProperties);
        int GetStringWidth(StringView stringView, const FontMetrics& fontMetrics, bool arg3);
        unsigned long CalculateExtraSpaceWidthForJustify(StringView stringView, unsigned int arg2, unsigned int arg3,
                                                         bool arg4);
        uint64_t DrawTextRunSlice(const TextRunSlice& textRunSlice, int arg2, int arg3,
                                  const TextProperties& textProperties, int arg5);
        void DrawLetter(int arg1, int arg2, int arg3, unsigned int arg4, const Font& font,
                        const shared_ptr<render::Texture>& texture);
        void DrawStringCustomOffsets(StringView stringView, int arg2, int arg3, int arg4,
                                     const eastl::fixed_vector<std::pair<int, int>, 256ul>& pairs,
                                     const TextProperties& textProperties);
        void GetNextElementLength(StringView stringView, unsigned long& arg2, TextFlags textFlags);
        void GetElementWidth(StringView stringView, unsigned int arg2, unsigned int arg3,
                             const FontMetrics& fontMetrics);
        void PredictLines(StringView stringView, int arg2, const FontMetrics& fontMetrics, TextFlags textFlags);
        auto GetPredictLinesLine(StringView stringView, int arg2, const FontMetrics& fontMetrics, unsigned int arg4,
                                 TextFlags textFlags);
        void PredictHeightAndLines(StringView stringView, int arg2, const TextProperties& textProperties);
        int PredictWidthMultiLine(StringView stringView, int arg2, const FontMetrics& fontMetrics, TextFlags textFlags);
        unsigned int ToCodeMap(unsigned int arg1);
        eastl::optional<unsigned int> ConvertTagCharCodes(StringView stringView);
        void PredictCharPosAtIndexMultiline(StringView stringView, int arg2, int arg3, const FontMetrics& fontMetrics,
                                            TextFlags textFlags, eastl::optional<int> arg6);
        void PredictCharPosAtIndex(StringView stringView, const FontMetrics& fontMetrics, int arg3, bool arg4);
        unsigned long PredictCharAtPosMultiline(StringView stringView, int* arg2, int arg3, int arg4,
                                                const FontMetrics& fontMetrics, TextFlags textFlags,
                                                eastl::optional<int> arg7);
        unsigned int FromCodeMap(unsigned int arg1);
        void IsDrawableCodepoint(unsigned int arg1);
        int GetEllipsisWidth(const FontMetrics& fontMetrics);
        void PredictCharAtPosMultiline(StringView stringView, int* arg2, int arg3, int arg4,
                                       const TextProperties& textProperties);
        static int32_t ltCharCode;                      // = 60
        static int32_t gtCharCode;                      // = 62
        static int32_t spaceCharCode;                   // = 32
        static int32_t nbspCharCode;                    // = 160
        static int32_t shyCharCode;                     // = 173
        static int32_t timesCharCode;                   // = 215
        static int32_t euroCharCode;                    // = 128
        static int32_t copyCharCode;                    // = 169
        static int32_t regCharCode;                     // = 174
        static int32_t hyphenCharCode;                  // = 45
        static int32_t newlineCharCode;                 // = 10
        static int32_t tabCharCode;                     // = 9
        static int32_t m_overrideDrawAutoWrapWidth;     // = -1
        static int64_t m_overrideTruncatedStringLength; // = 4294967295
        static int64_t m_highlightNonVectorFonts;
        static Array<ModIconReference> m_modIcons; // = Array<ModIconReference>()
        static uint8_t m_callbackGetSpriteReference[48];

    private:
        uint8_t _unknown_0[32];
        GUIManager* field_32;
    };

    class FontHelpers::FontState {
    public:
        void ResetState(const TextProperties& textProperties);
        void UpdateState(StringView stringView);
        void ResetState(unsigned int arg1, eastl::optional<unsigned int> arg2);

    private:
        unsigned int field_0;
        unsigned int field_4;
        unsigned int field_8;
        unsigned int field_12;
        uint32_t field_16;
        bool field_20;
        uint8_t _unknown_21[3];
        unsigned int field_24;
        unsigned int field_28;
        uint8_t _unknown_32[4];
    };

    class FontHelpers::ModIconReference {
    public:
        ~ModIconReference();
        ModIconReference(ModIconReference&& modIconReference);
        ModIconReference();

    private:
        uint64_t field_0;
        uint8_t _unknown_8[8];
    };

    // 0x100060820
    void FontHelpers::StripTags<eastl::fixed_string<char, 1024>>(eastl::fixed_string<char, 1024>& str,
                                                                 StringView stringView) {
        bool bVar1;
        char arg1;
        char* pcVar4;
        bool bVar5;

        str.clear();
        unsigned long uVar3 = ShuffledPacketFactory::p2_alt2();
        str.reserve(uVar3);
        int iVar2 = ShuffledPacketFactory::p2_alt2();
        if (0 < iVar2) {
            uVar3 = 0;
            bVar5 = false;
            do {
                pcVar4 = (char*)(*stringView)[uVar3];
                arg1 = *pcVar4;
                if (*pcVar4 == '\b') {
                    arg1 = '\n';
                }
                if (bVar5) {
                    bVar1 = bVar5;
                    if (arg1 == '>') {
                        bVar1 = false;
                    }
                } else {
                    bVar1 = true;
                    if (arg1 != '<') {
                        str += arg1;
                        bVar1 = bVar5;
                    }
                }
                bVar5 = bVar1;
                uVar3 = uVar3 + 1;
                iVar2 = ShuffledPacketFactory::p2_alt2();
            } while ((long)uVar3 < (long)iVar2);
        }
    }

    // 0x100861490
    void FontHelpers::PredictWidthMultiLine(StringView stringView, int arg2, const TextProperties& textProperties) {
        TextFlags textFlags;

        StringView local_38(*stringView);
        auto fontMetrics = textProperties.GetFontMetrics();
        textFlags.field_0 = textProperties.GetLightLevelsBelow();
        PredictWidthMultiLine(&local_38, arg2, fontMetrics, textFlags);
    }

    // 0x1008e0240
    void FontHelpers::FontState::ResetState(const TextProperties& textProperties) {
        unsigned int arg1 = textProperties.GetLevel();
        auto local_30 = textProperties.GetShadowColour();
        ResetState(arg1, &local_30);
    }

    // 0x100906410
    int FontHelpers::GetEllipsisWidth(const FontMetrics& fontMetrics) {
        uint8_t bVar1 = fontMetrics.GetGlyphAdvance(46);
        int iVar2 = fontMetrics.GetKerning(46, 46);
        return (unsigned int)bVar1 * 3 + iVar2 * 2;
    }

    // 0x100a47140
    void FontHelpers::PredictCharAtPosMultiline(StringView stringView, int* arg2, int arg3, int arg4,
                                                const TextProperties& textProperties) {
        optional<int>* in_stack_ffffffffffffffb0;

        new ((&local_40 - 16)) StringView(*stringView);
        auto pFVar2 = textProperties.GetFontMetrics();
        unsigned int uVar1 = textProperties.GetLightLevelsBelow();
        unsigned int local_38 = textProperties.GetLineSpacing();
        optional<int> local_40(local_38);
        PredictCharAtPosMultiline((FontHelpers*)(&local_40 - 16), (StringView*)arg2,
                                  (int*)(unsigned long)(unsigned int)arg3, arg4, (int)pFVar2,
                                  (FontMetrics*)((unsigned long)uVar1 & 255), (TextFlags)(uint8_t)&local_40,
                                  in_stack_ffffffffffffffb0);
    }

} // namespace jag::graphics
