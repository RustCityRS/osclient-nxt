// libs/graphics/runetek7/fonts/FontMetrics.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class FontMetrics {
    public:
        // virtual methods in vtable order
        virtual ~FontMetrics();
        void GetFontSheetPositions() const;
        bool IsVectorFont() const;
        uint16_t GetFontSheetWidth() const;
        uint16_t GetFontSheetHeight() const;
        unsigned int GetSourcePackID() const;
        auto GetFontSheetPosition(int arg1) const;
        uint8_t GetMaxAscent() const;
        uint8_t GetMaxDescent() const;
        unsigned int GetBaseLine() const;
        unsigned int GetVerticalSpacing() const;
        uint8_t GetGlyphAdvance(int arg1) const;
        uint32_t GetKerning(int arg1, int arg2) const;
        char GetAscentDescentDelta() const;
        void GetGlyphInfo(int arg1) const;
        uint8_t GetUpperCaseAscent() const;
        bool IsSpriteFont() const;
        uint8_t GetPixelSize() const;
        FontMetrics();
        void Clear();
        void LoadFromPacket(unsigned int arg1, PacketT<Array<unsigned char>>& arg2);
        void LoadVectorFontMetricsFromPacket(PacketT<Array<unsigned char>>& arg1);
        void LoadSpriteFontMetricsFromPacket(PacketT<Array<unsigned char>>& arg1);
        void UpdateFromVectorFontSource(VectorFontSource* vectorFontSource);
        void LoadComplexKerning(PacketT<Array<unsigned char>>& arg1);
        int CalculateSpriteKerning(const std::array<Array<int>, 256ul>& arg1, const std::array<Array<int>, 256ul>& arg2,
                                   const eastl::fixed_vector<FontGlyphInfo, 256ul>& fontGlyphInfos, unsigned long arg4,
                                   unsigned long arg5);
        void SetCoreMetricData(unsigned int arg1, eastl::fixed_vector<FontGlyphInfo, 256ul>&& fontGlyphInfos,
                               unsigned int arg3, unsigned char arg4, unsigned char arg5, unsigned char arg6,
                               unsigned char arg7);
        unsigned long IsKerningComplex() const;

    private:
        unsigned int field_8;
        unsigned int field_12;
        unsigned int m_sourcePackID;
        uint8_t m_pixelSize;
        uint8_t _unknown_21[12331];
        uint16_t m_fontSheetWidth;
        uint16_t m_fontSheetHeight;
        unsigned int m_verticalSpacing;
        uint8_t m_upperCaseAscent;
        uint8_t field_12361;
        uint8_t m_maxAscent;
        uint8_t m_maxDescent;
        uint8_t _unknown_12364[1332];
    };

    // 0x1008df680
    bool FontMetrics::IsVectorFont() const {
        if (field_8 == 3) {
            LogAssert("m_fontSourceType != FontSourceType::INVALID",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "FontMetrics.h",
                      28, nullptr);
        }
        return field_8 == 2;
    }

    // 0x1008dfb90
    uint16_t FontMetrics::GetFontSheetWidth() const {
        return m_fontSheetWidth;
    }

    // 0x1008dfba0
    uint16_t FontMetrics::GetFontSheetHeight() const {
        return m_fontSheetHeight;
    }

    // 0x1008dfbf0
    unsigned int FontMetrics::GetSourcePackID() const {
        if (field_8 == 3) {
            LogAssert("m_fontSourceType != FontSourceType::INVALID",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "FontMetrics.h",
                      27, nullptr);
        }
        return m_sourcePackID;
    }

    // 0x1008dfd40
    auto FontMetrics::GetFontSheetPosition(int arg1) const {
        fixed_vector<unsigned short, _4ul>* arg1_00 = &field_24[(long)arg1];
        return auto(*arg1_00);
    }

    // 0x1008e02b0
    uint8_t FontMetrics::GetMaxAscent() const {
        return m_maxAscent;
    }

    // 0x1008e02c0
    uint8_t FontMetrics::GetMaxDescent() const {
        return m_maxDescent;
    }

    // 0x1008e02d0
    unsigned int FontMetrics::GetBaseLine() const {
        return m_verticalSpacing;
    }

    // 0x1008e3f30
    uint8_t FontMetrics::GetGlyphAdvance(int arg1) const {
        long lVar1 = field_12368[(long)arg1];
        return *(uint8_t*)(lVar1 + 2);
    }

    // 0x1008e3f50
    uint32_t FontMetrics::GetKerning(int arg1, int arg2) const {
        vector<eastl::fixed_vector<int, 256ul>, eastl::fixed_vector_allocator<1064ul, 256ul, 8ul, 0ul, true>>* this_00;
        vector<int, eastl::fixed_vector_allocator<4ul, 256ul, 4ul, 0ul, true>>* this_01;
        uint32_t* puVar3;

        bool cVar1 = IsKerningComplex();
        uint32_t uVar2 = 0;
        if ((cVar1) && (arg2 != -1)) {
            this_00 =
                (vector<eastl::fixed_vector<int, 256ul>, eastl::fixed_vector_allocator<1064ul, 256ul, 8ul, 0ul, true>>*)
                    field_13688.operator->();
            this_01 = (vector<int, eastl::fixed_vector_allocator<4ul, 256ul, 4ul, 0ul, true>>*)(*this_00)[(long)arg2];
            puVar3 = (uint32_t*)(*this_01)[(long)arg1];
            uVar2 = *puVar3;
        }
        return uVar2;
    }

    // 0x1008e56f0
    char FontMetrics::GetAscentDescentDelta() const {
        return m_maxAscent + m_maxDescent;
    }

    // 0x1008e5730
    void FontMetrics::GetGlyphInfo(int arg1) const {
        field_12368[(long)arg1];
    }

    // 0x1008e5770
    uint8_t FontMetrics::GetUpperCaseAscent() const {
        return m_upperCaseAscent;
    }

    // 0x1008e5ec0
    bool FontMetrics::IsSpriteFont() const {
        return IsVectorFont() ^ 1;
    }

    // 0x1008e6100
    uint8_t FontMetrics::GetPixelSize() const {
        return m_pixelSize;
    }

    // 0x1008fea70
    unsigned long FontMetrics::IsKerningComplex() const {
        unsigned long uVar2;

        if ((&field_13688)->operator_cast_to_bool() == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = ((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)field_13688.operator->())
                        ->empty();
            uVar2 = uVar2 ^ 1;
        }
        return uVar2;
    }

} // namespace jag::graphics
