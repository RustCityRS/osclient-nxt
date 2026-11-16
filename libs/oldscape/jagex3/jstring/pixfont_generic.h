// libs/oldscape/jagex3/jstring/pixfont_generic.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::jstring {
    class PixfontGeneric {
    public:
        class TransparentFontColour;
        PixfontGeneric(Array<signed char>& arg1);
        ~PixfontGeneric();
        PixfontGeneric(PixfontGeneric&& pixfontGeneric);
        void DrawStringMultiline(const eastl::string& str, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                 int arg8, int arg9, int arg10, graphics::Pix2D& pix2D);
        uint32_t CharWid(char16_t arg1) const;
        uint32_t CharHei(char16_t arg1) const;
        uint32_t CharBearingX(char16_t arg1) const;
        uint32_t CharBearingY(char16_t arg1) const;
        PixfontGeneric(Array<signed char>&& arg1, Array<int>&& arg2, Array<int>&& arg3, Array<int>&& arg4,
                       Array<int>&& arg5, SharedArray<unsigned int>&& sharedArray1,
                       SharedArray<Array<unsigned char>>&& sharedArray2);
        void UnpackMetrics(Array<signed char>& arg1);
        int StringWid(const eastl::string& str);
        int SplitString(const eastl::string& str, Array<int>& arg2, Array<eastl::string>& strs);
        int PredictWidthMultiline(const eastl::string& str, int arg2);
        uint32_t PredictLinesMultiline(const eastl::string& str, int arg2);
        auto Escape(const char* str, unsigned long arg2);
        dash3d::GridRect GetCentreStringSubStringRect(int arg1, int arg2, const eastl::string& str, int arg4, int arg5);
        unsigned long SupportedTag(eastl::string& str);
        void DrawString(const eastl::string& str, int arg2, int arg3, int arg4, int arg5, graphics::Pix2D& pix2D);
        void ResetState(int arg1, int arg2);
        void DrawStringInner(const eastl::string& str, int arg2, int arg3, graphics::Pix2D& pix2D, int arg5, int arg6,
                             int arg7, const Array<int>& arg8, const Array<int>& arg9);
        void DrawStringTrans(const eastl::string& str, int arg2, int arg3, int arg4, int arg5, int arg6,
                             graphics::Pix2D& pix2D);
        void DrawStringUpwards(const eastl::string& str, int arg2, int arg3, int arg4, int arg5,
                               graphics::Pix2D& pix2D);
        void DrawStringUpwardsInner(const eastl::string& str, int arg2, int arg3, graphics::Pix2D& pix2D);
        void RightString(const eastl::string& str, int arg2, int arg3, int arg4, int arg5, graphics::Pix2D& pix2D);
        void RightStringTrans(const eastl::string& str, int arg2, int arg3, int arg4, int arg5, int arg6,
                              graphics::Pix2D& pix2D);
        void RightStringUpwards(const eastl::string& str, int arg2, int arg3, int arg4, int arg5,
                                graphics::Pix2D& pix2D);
        void CentreString(const eastl::string& str, int arg2, int arg3, int arg4, int arg5, graphics::Pix2D& pix2D);
        void CentreStringTrans(const eastl::string& str, int arg2, int arg3, int arg4, int arg5, int arg6,
                               graphics::Pix2D& pix2D);
        void CentreStringUpwards(const eastl::string& str, int arg2, int arg3, int arg4, int arg5,
                                 graphics::Pix2D& pix2D);
        void CentreStringScanline(const eastl::string& str, int arg2, int arg3, int arg4, int arg5,
                                  graphics::Pix2D& pix2D, int arg7, int arg8, int arg9, const Array<int>& arg10,
                                  const Array<int>& arg11);
        void JustifyString(eastl::string& str, int arg2, int arg3, int arg4, int arg5, int arg6,
                           graphics::Pix2D& pix2D);
        void CalculateSpaceWidth(eastl::string& str, int arg2);
        unsigned long DrawStringMultiline(const eastl::string& str, int arg2, int arg3, int arg4, int arg5, int arg6,
                                          int arg7, int arg8, int arg9, int arg10, int arg11, graphics::Pix2D& pix2D);
        uint64_t DrawTextRunSlice(const jag::graphics::TextRunSlice& textRunSlice, int arg2, int arg3,
                                  unsigned int arg4, unsigned int arg5, graphics::Pix2D& pix2D, int arg7);
        void PlotLetter(const Array<unsigned char>& arg1, int arg2, int arg3, int arg4, int arg5, int arg6,
                        graphics::Pix2D& pix2D);
        void DrawStringColourPattern(const eastl::string& str, int arg2, int arg3, int arg4, int arg5,
                                     const eastl::vector<int>& arg6, graphics::Pix2D& pix2D);
        void DrawStringInnerCustomOffsetsAndColours(const eastl::string& str, int arg2, int arg3, Array<int>& arg4,
                                                    Array<int>& arg5, Array<int>& arg6, graphics::Pix2D& pix2D);
        void CentreStringColourPattern(const eastl::string& str, int arg2, int arg3, int arg4, int arg5,
                                       const eastl::vector<int>& arg6, graphics::Pix2D& pix2D);
        void CentreStringWave(const eastl::string& str, int arg2, int arg3, int arg4, int arg5, int arg6,
                              const eastl::vector<int>& arg7, graphics::Pix2D& pix2D);
        void CentreStringWave2(const eastl::string& str, int arg2, int arg3, int arg4, int arg5, int arg6,
                               const eastl::vector<int>& arg7, graphics::Pix2D& pix2D);
        void CentreStringWave3(const eastl::string& str, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                               const eastl::vector<int>& arg8, graphics::Pix2D& pix2D);
        void DrawstringAntiMacro(const eastl::string& str, int arg2, int arg3, int arg4, int arg5, int arg6,
                                 graphics::Pix2D& pix2D);
        void UpdateState(eastl::string& str);
        void PlotLetterUpwards(const Array<unsigned char>& arg1, int arg2, int arg3, int arg4, int arg5, int arg6,
                               graphics::Pix2D& pix2D);
        void PlotLetterUpwardsTrans(const Array<unsigned char>& arg1, int arg2, int arg3, int arg4, int arg5,
                                    const TransparentFontColour& transparentFontColour, graphics::Pix2D& pix2D);
        void PlotLetterTrans(const Array<unsigned char>& arg1, int arg2, int arg3, int arg4, int arg5,
                             const TransparentFontColour& transparentFontColour, graphics::Pix2D& pix2D);
        void PlotLetter(SharedArray<unsigned int>& sharedArray, const Array<unsigned char>& arg2, int arg3, int arg4,
                        int arg5, int arg6, int arg7, int arg8, int arg9);
        void PlotLetterTransInner(SharedArray<unsigned int>& sharedArray, const Array<unsigned char>& arg2, int arg3,
                                  int arg4, int arg5, int arg6, int arg7, int arg8,
                                  const TransparentFontColour& transparentFontColour);
        void PlotLetterUpwards(SharedArray<unsigned int>& sharedArray, const Array<unsigned char>& arg2, int arg3,
                               int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, int arg10);
        void PlotLetterUpwardsTransInner(SharedArray<unsigned int>& sharedArray, const Array<unsigned char>& arg2,
                                         int arg3, int arg4, int arg5, int arg6, int arg7, int arg8, int arg9,
                                         const TransparentFontColour& transparentFontColour);
        void PlotLetterScanline(const Array<unsigned char>& arg1, int arg2, int arg3, int arg4, int arg5, int arg6,
                                int arg7, int arg8, int arg9, const Array<int>& arg10, const Array<int>& arg11,
                                graphics::Pix2D& pix2D);
        void PlotLetterScanline(SharedArray<unsigned int>& sharedArray, const Array<unsigned char>& arg2, int arg3,
                                int arg4, int arg5, int arg6, int arg7, int arg8, int arg9, int arg10, int arg11,
                                const Array<int>& arg12, const Array<int>& arg13);
        int KernPair(std::array<Array<signed char>, 256ul>& arg1, std::array<Array<signed char>, 256ul>& arg2,
                     std::array<int, 256ul>& arg3, std::array<int, 256ul>& arg4, std::array<int, 256ul>& arg5, int arg6,
                     int arg7);
        static int32_t m_alpha;         // = 255
        static int32_t m_currentShadow; // = -1
        static int32_t m_strikeout;     // = -1
        static int32_t m_underline;     // = -1
        static int32_t m_defaultShadow; // = -1
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>
            m_inlineImages;                  // = shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>()
        static Array<eastl::string> m_lines; // = Array<eastl::string>(100)
        static int32_t m_extraSpaceWidth;
        static int32_t m_currentCol;
        static Array<int> m_empty;       // = Array<int>()
        static jag::math::Random m_rand; // = Random(123456789, 31415821)
        static int32_t m_defaultCol;
        static int32_t m_extraSpacePos;

    private:
        int field_0;
        int field_4;
        int field_8;
        int field_12;
        int field_16;
        uint8_t _unknown_20[28];
        uint8_t field_48;
        uint8_t _unknown_49[1127];
    };

    class PixfontGeneric::TransparentFontColour {
    public:
        TransparentFontColour();
    };

    // 0x10012d1f0
    PixfontGeneric::PixfontGeneric(Array<signed char>& arg1) : field_0(0) {
        UnpackMetrics(arg1);
    }

    // 0x10012d3b0
    PixfontGeneric::~PixfontGeneric() {
        field_1168.~Array();
        field_1144.~Array();
        field_1120.~Array();
        field_1096.~Array();
        field_1072.~Array();
        field_24.~SharedArray();
    }

    // 0x100145d50
    PixfontGeneric::PixfontGeneric(PixfontGeneric&& pixfontGeneric) : field_16(pixfontGeneric.field_16) {
        int iVar1 = pixfontGeneric.field_4;
        int iVar2 = pixfontGeneric.field_8;
        int iVar3 = pixfontGeneric.field_12;
        field_0 = pixfontGeneric.field_0;
        field_4 = iVar1;
        field_8 = iVar2;
        field_12 = iVar3;
        new (&field_24) SharedArray(&pixfontGeneric.field_24);
        _memcpy(&field_48, &pixfontGeneric.field_48, 1024);
        new (&field_1072) Array<int>(&pixfontGeneric.field_1072);
        new (&field_1096) Array<int>(&pixfontGeneric.field_1096);
        new (&field_1120) Array<int>(&pixfontGeneric.field_1120);
        new (&field_1144) Array<int>(&pixfontGeneric.field_1144);
        new (&field_1168) Array<signed char>(&pixfontGeneric.field_1168);
    }

    // 0x1002be5b0
    void SanitiseAndConvertWideChar(char16_t arg1) {
        uint64_t in_register_0000003a;

        if ((int)(((uint64_t)in_register_0000003a << 16) | (uint16_t)arg1) == 160) {
            arg1 = L' ';
        }
        return stringtools::WideToCP1252(arg1);
    }

    // 0x1002be930
    int SanitiseWideChar(char16_t arg1) {
        uint16_t in_register_0000003a;

        int iVar1 = 32;
        if ((((uint32_t)in_register_0000003a << 16) | (uint16_t)arg1) != 160) {
            iVar1 = (((uint32_t)in_register_0000003a << 16) | (uint16_t)arg1);
        }
        return iVar1;
    }

    // 0x1002c2f10
    void SanitiseChar(unsigned char arg1) {
        uint32_t in_register_00000039;

        uint32_t uVar1 = 32;
        if (arg1 != 160) {
            uVar1 = (((uint32_t)in_register_00000039 << 8) | (uint8_t)arg1);
        }
        return uVar1;
    }

} // namespace jag::oldscape::jstring

namespace jag::oldscape::graphics {
    // 0x1002c3b40
    unsigned int BlendPixel(unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4) {
        if (253 < arg2 - 1) {
            LogAssert("srcA > 0 && srcA < 255",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/graphics/"
                      "Pix2D.h",
                      49, "BlendPixel is only valid for sources that are not fully transparent or fully opaque");
        }
        if (255 - arg2 != arg3) {
            LogAssert("complementSrcA == (255 - srcA)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/graphics/"
                      "Pix2D.h",
                      50, "Precalculated inverse alpha is incorrect");
        }
        unsigned int uVar3 = (arg4 >> 24) * arg3 >> 8;
        unsigned int uVar2 = arg2 + uVar3 + 1;
        int iVar1 = ComputeCompositeRGB(arg4, uVar3);
        uVar3 = ComputeCompositeRGB(arg1 + iVar1, (unsigned int)(65280 / (unsigned long)uVar2));
        return uVar3 | uVar2 * 16777216;
    }

} // namespace jag::oldscape::graphics
