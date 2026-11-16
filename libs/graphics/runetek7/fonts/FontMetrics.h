// libs/graphics/runetek7/fonts/FontMetrics.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class FontMetrics {
    public:
        // virtual methods in vtable order
        virtual ~FontMetrics();
        GetFontSheetPositions() const;
        bool IsVectorFont() const;
        GetFontSheetWidth() const;
        GetFontSheetHeight() const;
        uint GetSourcePackID() const;
        GetFontSheetPosition(int) const;
        byte GetMaxAscent() const;
        byte GetMaxDescent() const;
        GetBaseLine() const;
        uint GetVerticalSpacing() const;
        GetGlyphAdvance(int) const;
        GetKerning(int, int) const;
        char GetAscentDescentDelta() const;
        void GetGlyphInfo(int) const;
        byte GetUpperCaseAscent() const;
        byte IsSpriteFont() const;
        GetPixelSize() const;
        FontMetrics();
        void Clear();
        void LoadFromPacket(unsigned int, PacketT<Array<unsigned char, eastl::allocator>>&);
        void LoadVectorFontMetricsFromPacket(PacketT<Array<unsigned char, eastl::allocator>>&);
        void LoadSpriteFontMetricsFromPacket(PacketT<Array<unsigned char, eastl::allocator>>&);
        void UpdateFromVectorFontSource(VectorFontSource*);
        void LoadComplexKerning(PacketT<Array<unsigned char, eastl::allocator>>&);
        int CalculateSpriteKerning(std::array<Array<int, BucketAllocatorEASTL>, 256ul> const&,
                                   std::array<Array<int, BucketAllocatorEASTL>, 256ul> const&,
                                   eastl::fixed_vector<FontGlyphInfo, 256ul, true, eastl::allocator> const&,
                                   unsigned long, unsigned long);
        void SetCoreMetricData(unsigned int, eastl::fixed_vector<FontGlyphInfo, 256ul, true, eastl::allocator>&&,
                               unsigned int, unsigned char, unsigned char, unsigned char, unsigned char);
        ulong IsKerningComplex() const;

        // data members, from how the methods use this: 13696 bytes
        undefined** field_0;    // offset 0, vtable pointer
        uint field_8;           // offset 8
        uint field_12;          // offset 12
        uint m_sourcePackID;    // offset 16
        undefined1 m_pixelSize; // offset 20
        char _unknown_21[12331];
        undefined2 m_fontSheetWidth;  // offset 12352
        undefined2 m_fontSheetHeight; // offset 12354
        uint m_verticalSpacing;       // offset 12356
        byte m_upperCaseAscent;       // offset 12360
        byte field_12361;             // offset 12361
        byte m_maxAscent;             // offset 12362
        byte m_maxDescent;            // offset 12363
        char _unknown_12364[1332];
    };

    // 0x1008df680, 64 bytes, inline, placed by class name and debug map
    // FontMetrics::IsVectorFont() const
    bool FontMetrics::IsVectorFont() {
        if (field_8 == 3) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_fontSourceType != FontSourceType::INVALID",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "FontMetrics.h",
                      28, (char*)0);
        }
        return field_8 == 2;
    }

    // 0x1008dfb90, 16 bytes, inline, placed by class name
    // FontMetrics::GetFontSheetWidth() const
    undefined2 FontMetrics::GetFontSheetWidth() {
        return m_fontSheetWidth;
    }

    // 0x1008dfba0, 16 bytes, inline, placed by class name
    // FontMetrics::GetFontSheetHeight() const
    undefined2 FontMetrics::GetFontSheetHeight() {
        return m_fontSheetHeight;
    }

    // 0x1008dfbf0, 64 bytes, inline, placed by class name
    // FontMetrics::GetSourcePackID() const
    uint FontMetrics::GetSourcePackID() {
        if (field_8 == 3) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_fontSourceType != FontSourceType::INVALID",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "FontMetrics.h",
                      27, (char*)0);
        }
        return m_sourcePackID;
    }

    // 0x1008dfd40, 48 bytes, inline, placed by class name
    // FontMetrics::GetFontSheetPosition(int) const
    FontMetrics* FontMetrics::GetFontSheetPosition(int param_1) {
        fixed_vector* pfVar1;
        int in_EDX;
        undefined4 in_register_00000034;

        pfVar1 =
            (fixed_vector*)eastl::vector<eastl::fixed_vector<unsigned short, 4ul, true, eastl::allocator>,
                                         eastl::fixed_vector_allocator<48ul, 256ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[](
                (vector<eastl::fixed_vector<unsigned short, 4ul, true, eastl::allocator>,
                        eastl::fixed_vector_allocator<48ul, 256ul, 8ul, 0ul, true,
                                                      eastl::allocator>>*)(CONCAT44(in_register_00000034, param_1) +
                                                                           24),
                (long)in_EDX);
        new (this) eastl::fixed_vector<unsigned short, 4ul, true, eastl::allocator>(pfVar1);
        return this;
    }

    // 0x1008e02b0, 16 bytes, inline, placed by class name
    // FontMetrics::GetMaxAscent() const
    byte FontMetrics::GetMaxAscent() {
        return m_maxAscent;
    }

    // 0x1008e02c0, 16 bytes, inline, placed by class name
    // FontMetrics::GetMaxDescent() const
    byte FontMetrics::GetMaxDescent() {
        return m_maxDescent;
    }

    // 0x1008e02d0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // FontMetrics::GetBaseLine() const
    /* FontMetrics::GetVerticalSpacing() const */

    uint FontMetrics::GetVerticalSpacing() {
        return m_verticalSpacing;
    }

    // 0x1008e3f30, 32 bytes, inline, placed by class name
    // FontMetrics::GetGlyphAdvance(int) const
    undefined1 FontMetrics::GetGlyphAdvance(int param_1) {
        long lVar1;

        lVar1 =
            eastl::vector<FontGlyphInfo, eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
            operator[](
                (vector<FontGlyphInfo,
                        eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)&field_12368,
                (long)param_1);
        return *(undefined1*)(lVar1 + 2);
    }

    // 0x1008e3f50, 96 bytes, inline, placed by class name
    // FontMetrics::GetKerning(int, int) const
    undefined4 FontMetrics::GetKerning(int param_1, int param_2) {
        char cVar1;
        undefined4 uVar2;
        vector<eastl::fixed_vector<int, 256ul, true, eastl::allocator>,
               eastl::fixed_vector_allocator<1064ul, 256ul, 8ul, 0ul, true, eastl::allocator>>* this_00;
        vector<int, eastl::fixed_vector_allocator<4ul, 256ul, 4ul, 0ul, true, eastl::allocator>>* this_01;
        undefined4* puVar3;

        cVar1 = IsKerningComplex(this);
        uVar2 = 0;
        if ((cVar1 != '\0') && (param_2 != -1)) {
            this_00 = (vector<eastl::fixed_vector<int, 256ul, true, eastl::allocator>,
                              eastl::fixed_vector_allocator<1064ul, 256ul, 8ul, 0ul, true, eastl::allocator>>*)
                          std::unique_ptr<FontKerningData, std::default_delete<FontKerningData>>::operator->(
                              (unique_ptr<FontKerningData, std::default_delete<FontKerningData>>*)&field_13688);
            this_01 = (vector<int, eastl::fixed_vector_allocator<4ul, 256ul, 4ul, 0ul, true, eastl::allocator>>*)
                eastl::vector<eastl::fixed_vector<int, 256ul, true, eastl::allocator>,
                              eastl::fixed_vector_allocator<1064ul, 256ul, 8ul, 0ul, true,
                                                            eastl::allocator>>::operator[](this_00, (long)param_2);
            puVar3 = (undefined4*)eastl::
                vector<int, eastl::fixed_vector_allocator<4ul, 256ul, 4ul, 0ul, true, eastl::allocator>>::operator[](
                    this_01, (long)param_1);
            uVar2 = *puVar3;
        }
        return uVar2;
    }

    // 0x1008e56f0, 32 bytes, inline, placed by class name
    // FontMetrics::GetAscentDescentDelta() const
    char FontMetrics::GetAscentDescentDelta() {
        return m_maxAscent + m_maxDescent;
    }

    // 0x1008e5730, 32 bytes, inline, placed by class name
    // FontMetrics::GetGlyphInfo(int) const
    void FontMetrics::GetGlyphInfo(int param_1) {
        eastl::vector<FontGlyphInfo, eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
        operator[]((vector<FontGlyphInfo,
                           eastl::fixed_vector_allocator<5ul, 256ul, 1ul, 0ul, true, eastl::allocator>>*)&field_12368,
                   (long)param_1);
    }

    // 0x1008e5770, 16 bytes, inline, placed by class name
    // FontMetrics::GetUpperCaseAscent() const
    byte FontMetrics::GetUpperCaseAscent() {
        return m_upperCaseAscent;
    }

    // 0x1008e5ec0, 16 bytes, inline, placed by class name
    // FontMetrics::IsSpriteFont() const
    byte FontMetrics::IsSpriteFont() {
        return IsVectorFont(this) ^ 1;
    }

    // 0x1008e6100, 16 bytes, inline, placed by class name
    // FontMetrics::GetPixelSize() const
    undefined1 FontMetrics::GetPixelSize() {
        return m_pixelSize;
    }

    // 0x1008fea70, 64 bytes, inline, placed by class name
    // FontMetrics::IsKerningComplex() const
    ulong FontMetrics::IsKerningComplex() {
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;
        ulong uVar2;

        if ((&field_13688)->operator_cast_to_bool()) {
            this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                          std::unique_ptr<FontKerningData, std::default_delete<FontKerningData>>::operator->(
                              (unique_ptr<FontKerningData, std::default_delete<FontKerningData>>*)&field_13688);
            uVar2 =
                eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                    this_00);
            uVar2 = uVar2 ^ 1;
        } else {
            uVar2 = 0;
        }
        return uVar2;
    }

} // namespace jag::graphics
