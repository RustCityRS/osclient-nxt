// libs/oldscape/jagex3/jstring/pixfont_generic.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::jstring {
    class PixfontGeneric {
    public:
        class TransparentFontColour;
        PixfontGeneric(Array<signed char, eastl::allocator>&);
        ~PixfontGeneric();
        PixfontGeneric(PixfontGeneric&&);
        void DrawStringMultiline(eastl::string const&, int, int, int, int, int, int, int, int, int, graphics::Pix2D&);
        CharWid(char16_t) const;
        CharHei(char16_t) const;
        CharBearingX(char16_t) const;
        CharBearingY(char16_t) const;
        PixfontGeneric(Array<signed char, eastl::allocator>&&, Array<int, eastl::allocator>&&,
                       Array<int, eastl::allocator>&&, Array<int, eastl::allocator>&&, Array<int, eastl::allocator>&&,
                       SharedArray<unsigned int>&&, SharedArray<Array<unsigned char, eastl::allocator>>&&);
        void UnpackMetrics(Array<signed char, eastl::allocator>&);
        int StringWid(eastl::string const&);
        int SplitString(eastl::string const&, Array<int, eastl::allocator>&, Array<eastl::string, eastl::allocator>&);
        int PredictWidthMultiline(eastl::string const&, int);
        PredictLinesMultiline(eastl::string const&, int);
        PixfontGeneric* Escape(char const*, unsigned long);
        GetCentreStringSubStringRect(int, int, eastl::string const&, int, int);
        ulong SupportedTag(eastl::string&);
        void DrawString(eastl::string const&, int, int, int, int, graphics::Pix2D&);
        void ResetState(int, int);
        void DrawStringInner(eastl::string const&, int, int, graphics::Pix2D&, int, int, int,
                             Array<int, eastl::allocator> const&, Array<int, eastl::allocator> const&);
        void DrawStringTrans(eastl::string const&, int, int, int, int, int, graphics::Pix2D&);
        void DrawStringUpwards(eastl::string const&, int, int, int, int, graphics::Pix2D&);
        void DrawStringUpwardsInner(eastl::string const&, int, int, graphics::Pix2D&);
        void RightString(eastl::string const&, int, int, int, int, graphics::Pix2D&);
        void RightStringTrans(eastl::string const&, int, int, int, int, int, graphics::Pix2D&);
        void RightStringUpwards(eastl::string const&, int, int, int, int, graphics::Pix2D&);
        void CentreString(eastl::string const&, int, int, int, int, graphics::Pix2D&);
        void CentreStringTrans(eastl::string const&, int, int, int, int, int, graphics::Pix2D&);
        void CentreStringUpwards(eastl::string const&, int, int, int, int, graphics::Pix2D&);
        void CentreStringScanline(eastl::string const&, int, int, int, int, graphics::Pix2D&, int, int, int,
                                  Array<int, eastl::allocator> const&, Array<int, eastl::allocator> const&);
        void JustifyString(eastl::string&, int, int, int, int, int, graphics::Pix2D&);
        void CalculateSpaceWidth(eastl::string&, int);
        ulong DrawStringMultiline(eastl::string const&, int, int, int, int, int, int, int, int, int, int,
                                  graphics::Pix2D&);
        DrawTextRunSlice(jag::graphics::TextRunSlice const&, int, int, unsigned int, unsigned int, graphics::Pix2D&,
                         int);
        void PlotLetter(Array<unsigned char, eastl::allocator> const&, int, int, int, int, int, graphics::Pix2D&);
        void DrawStringColourPattern(eastl::string const&, int, int, int, int,
                                     eastl::vector<int, eastl::allocator> const&, graphics::Pix2D&);
        void DrawStringInnerCustomOffsetsAndColours(eastl::string const&, int, int, Array<int, eastl::allocator>&,
                                                    Array<int, eastl::allocator>&, Array<int, eastl::allocator>&,
                                                    graphics::Pix2D&);
        void CentreStringColourPattern(eastl::string const&, int, int, int, int,
                                       eastl::vector<int, eastl::allocator> const&, graphics::Pix2D&);
        void CentreStringWave(eastl::string const&, int, int, int, int, int,
                              eastl::vector<int, eastl::allocator> const&, graphics::Pix2D&);
        void CentreStringWave2(eastl::string const&, int, int, int, int, int,
                               eastl::vector<int, eastl::allocator> const&, graphics::Pix2D&);
        void CentreStringWave3(eastl::string const&, int, int, int, int, int, int,
                               eastl::vector<int, eastl::allocator> const&, graphics::Pix2D&);
        void DrawstringAntiMacro(eastl::string const&, int, int, int, int, int, graphics::Pix2D&);
        void UpdateState(eastl::string&);
        void PlotLetterUpwards(Array<unsigned char, eastl::allocator> const&, int, int, int, int, int,
                               graphics::Pix2D&);
        void PlotLetterUpwardsTrans(Array<unsigned char, eastl::allocator> const&, int, int, int, int,
                                    TransparentFontColour const&, graphics::Pix2D&);
        void PlotLetterTrans(Array<unsigned char, eastl::allocator> const&, int, int, int, int,
                             TransparentFontColour const&, graphics::Pix2D&);
        void PlotLetter(SharedArray<unsigned int>&, Array<unsigned char, eastl::allocator> const&, int, int, int, int,
                        int, int, int);
        void PlotLetterTransInner(SharedArray<unsigned int>&, Array<unsigned char, eastl::allocator> const&, int, int,
                                  int, int, int, int, TransparentFontColour const&);
        void PlotLetterUpwards(SharedArray<unsigned int>&, Array<unsigned char, eastl::allocator> const&, int, int, int,
                               int, int, int, int, int);
        void PlotLetterUpwardsTransInner(SharedArray<unsigned int>&, Array<unsigned char, eastl::allocator> const&, int,
                                         int, int, int, int, int, int, TransparentFontColour const&);
        void PlotLetterScanline(Array<unsigned char, eastl::allocator> const&, int, int, int, int, int, int, int, int,
                                Array<int, eastl::allocator> const&, Array<int, eastl::allocator> const&,
                                graphics::Pix2D&);
        void PlotLetterScanline(SharedArray<unsigned int>&, Array<unsigned char, eastl::allocator> const&, int, int,
                                int, int, int, int, int, int, int, Array<int, eastl::allocator> const&,
                                Array<int, eastl::allocator> const&);
        int KernPair(std::array<Array<signed char, eastl::allocator>, 256ul>&,
                     std::array<Array<signed char, eastl::allocator>, 256ul>&, std::array<int, 256ul>&,
                     std::array<int, 256ul>&, std::array<int, 256ul>&, int, int);
        static /* 4 bytes */ m_alpha;         // = 255
        static /* 4 bytes */ m_currentShadow; // = -1
        static /* 4 bytes */ m_strikeout;     // = -1
        static /* 4 bytes */ m_underline;     // = -1
        static /* 4 bytes */ m_defaultShadow; // = -1
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ m_inlineImages;
        static Array<eastl::string, eastl::allocator> /* 24 bytes */
            m_lines;                                  // = Array<eastl::string,eastl::allocator>(100)
        static /* 4 bytes */ m_extraSpaceWidth;
        static /* 4 bytes */ m_currentCol;
        static Array<int, eastl::allocator> /* 24 bytes */ m_empty; // = Array<int,eastl::allocator>()
        static jag::math::Random /* 8 bytes */ m_rand;              // = Random(123456789, 31415821)
        static /* 4 bytes */ m_defaultCol;
        static /* 4 bytes */ m_extraSpacePos;

        // data members, from how the methods use this: 1176 bytes
        int field_0;  // offset 0
        int field_4;  // offset 4
        int field_8;  // offset 8
        int field_12; // offset 12
        int field_16; // offset 16
        char _unknown_20[28];
        undefined1 field_48; // offset 48
        char _unknown_49[1127];
    };

    class PixfontGeneric::TransparentFontColour {
    public:
        TransparentFontColour();
    };

    // 0x1000e1a80, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // PixfontGeneric::PixfontGeneric(Array<signed char, eastl::allocator>&): jumps straight to the base-object constructor

    // 0x1000e1a90, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // PixfontGeneric::~PixfontGeneric(): jumps straight to the base-object destructor

    // 0x10012d1f0, 240 bytes, base-object constructor, inline, placed by class name
    // PixfontGeneric::PixfontGeneric(Array<signed char, eastl::allocator>&)
    void PixfontGeneric::PixfontGeneric(Array* param_1) {
        field_0 = 0;
        new (&field_24) SharedArray<unsigned int>();
        new (&field_1072) Array<int, eastl::allocator>();
        new (&field_1096) Array<int, eastl::allocator>();
        new (&field_1120) Array<int, eastl::allocator>();
        new (&field_1144) Array<int, eastl::allocator>();
        new (&field_1168) Array<signed char, eastl::allocator>();
        UnpackMetrics(this, param_1);
    }

    // 0x10012d3b0, 96 bytes, base-object destructor, inline, placed by class name
    // PixfontGeneric::~PixfontGeneric()
    void PixfontGeneric::~PixfontGeneric() {
        (&field_1168)->~Array();
        (&field_1144)->~Array();
        (&field_1120)->~Array();
        (&field_1096)->~Array();
        (&field_1072)->~Array();
        (&field_24)->~SharedArray();
    }

    // 0x100145d40, 16 bytes, complete-object constructor, inline, placed by class name
    // PixfontGeneric::PixfontGeneric(PixfontGeneric&&): jumps straight to the base-object constructor

    // 0x100145d50, 176 bytes, base-object constructor, inline, placed by class name
    // PixfontGeneric::PixfontGeneric(PixfontGeneric&&)
    void PixfontGeneric::PixfontGeneric(PixfontGeneric* param_1) {
        int iVar1;
        int iVar2;
        int iVar3;

        field_16 = param_1->field_16;
        iVar1 = param_1->field_4;
        iVar2 = param_1->field_8;
        iVar3 = param_1->field_12;
        field_0 = param_1->field_0;
        field_4 = iVar1;
        field_8 = iVar2;
        field_12 = iVar3;
        new (&field_24, (SharedArray*)&param_1->field_24) SharedArray<Array<unsigned char, eastl::allocator>>();
        _memcpy(&field_48, &param_1->field_48, 1024);
        new (&field_1072, (Array*)&param_1->field_1072) Array<int, eastl::allocator>();
        new (&field_1096, (Array*)&param_1->field_1096) Array<int, eastl::allocator>();
        new (&field_1120, (Array*)&param_1->field_1120) Array<int, eastl::allocator>();
        new (&field_1144, (Array*)&param_1->field_1144) Array<int, eastl::allocator>();
        new (&field_1168, (Array*)&param_1->field_1168) Array<signed char, eastl::allocator>();
    }

    // 0x1002be5b0, 32 bytes, inline, placed by debug map only (low confidence)
    // SanitiseAndConvertWideChar(char16_t)
    undefined1 SanitiseAndConvertWideChar(wchar16 param_1) {
        undefined6 in_register_0000003a;

        if ((int)CONCAT62(in_register_0000003a, param_1) == 160) {
            param_1 = L' ';
        }
        return stringtools::WideToCP1252(param_1);
    }

    // 0x1002be930, 32 bytes, inline, placed by debug map only (low confidence)
    // SanitiseWideChar(char16_t)
    int SanitiseWideChar(wchar16 param_1) {
        int iVar1;
        undefined2 in_register_0000003a;

        iVar1 = 32;
        if (CONCAT22(in_register_0000003a, param_1) != 160) {
            iVar1 = CONCAT22(in_register_0000003a, param_1);
        }
        return iVar1;
    }

    // 0x1002c2f10, 32 bytes, inline, placed by debug map only (low confidence)
    // SanitiseChar(unsigned char)
    undefined4 SanitiseChar(uchar param_1) {
        undefined4 uVar1;
        undefined3 in_register_00000039;

        uVar1 = 32;
        if (param_1 != 160) {
            uVar1 = CONCAT31(in_register_00000039, param_1);
        }
        return uVar1;
    }

} // namespace jag::oldscape::jstring

namespace jag::oldscape::graphics {
    // 0x1002c3b40, 176 bytes, inline, placed by debug map only (low confidence)
    // BlendPixel(unsigned int, unsigned int, unsigned int, unsigned int)
    uint BlendPixel(uint param_1, uint param_2, uint param_3, uint param_4) {
        int iVar1;
        uint uVar2;
        uint uVar3;

        if (253 < param_2 - 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("srcA > 0 && srcA < 255",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/graphics/"
                      "Pix2D.h",
                      49, "BlendPixel is only valid for sources that are not fully transparent or fully opaque");
        }
        if (255 - param_2 != param_3) {
            /* WARNING: Subroutine does not return */
            LogAssert("complementSrcA == (255 - srcA)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/graphics/"
                      "Pix2D.h",
                      50, "Precalculated inverse alpha is incorrect");
        }
        uVar3 = (param_4 >> 24) * param_3 >> 8;
        uVar2 = param_2 + uVar3 + 1;
        iVar1 = ComputeCompositeRGB(param_4, uVar3);
        uVar3 = ComputeCompositeRGB(param_1 + iVar1, (uint)(65280 / (ulong)uVar2));
        return uVar3 | uVar2 * 16777216;
    }

} // namespace jag::oldscape::graphics
