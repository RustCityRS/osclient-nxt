// libs/graphics/runetek7/fonts/TextRun.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class TextRun {
    public:
        GetFontMetrics() const;
        int GetMaxLineWidth() const;
        GetVisibility() const;
        int GetWrapMode() const;
        GetVerticalAlignment() const;
        GetContents() const;
        TextRun();
        ~TextRun();
        void Set(char const*, unsigned long);
        void GetCodepointCount() const;
        void GetCharacter(unsigned long) const;
        void Clear();
        void Append(char const*, unsigned long, unsigned long);
        GetHorizontalAlignment() const;
        operator TextRunSlice() const;
        GetLastChar() const;
        void SetShowLastChar(bool);
        GetMaxLineCount() const;
        void ConvertToUTF8(eastl::basic_string<char, BucketAllocatorEASTL>&) const;
        Slice(unsigned long, unsigned long) const;
        void SetMaxLineWidth(int);
        void UpdatePositioning();
        void SetMaxLineCount(unsigned char);
        void SetContentVisibility(TextContentVisibility);
        void SetFontMetrics(shared_ptr<FontMetrics> const&);
        void IsEmpty() const;
        void SetWrapMode(TextWrapMode);
        void SetLineSpacing(int);
        SetAlignment(TextHorizontalAlignment, TextVerticalAlignment);
        InsertCodepoints(unsigned int*, unsigned long, unsigned long, unsigned long);
        InsertCodepointsFiltered(
            unsigned int*, unsigned long, unsigned long,
            fixedfunction::function<bool(unsigned int), 64ul, 16ul, (fixedfunction::Methods)0> const&, unsigned long);
        void UpdatePositioning(unsigned long, unsigned long);
        GetNumLines() const;
        void Remove(unsigned long);
        Insert(char const*, unsigned long, unsigned long, unsigned long);
        InsertFiltered(char const*, unsigned long, unsigned long,
                       fixedfunction::function<bool(unsigned int), 64ul, 16ul, (fixedfunction::Methods)0> const&, bool,
                       unsigned long);
        void GetPreviousCharacterDetails(unsigned long, TextRunCharacter&, int&);
        void GetLineHeight() const;
        uint GetCharacterAdvance(TextRunCharacter const&, bool) const;
        ulong Remove(unsigned long, unsigned long);
        ulong GetIndexAtPos(int, int) const;
        GetLastCharAdvance() const;
        ulong GetIndexAtLineOffset(unsigned long, int) const;
        GetCharacterAdvance(unsigned long) const;
        int GetWidth() const;
        int GetLeftOffsetForHorizontalAlignment(int) const;
        int GetTopOffsetForVerticalAlignment(int) const;
        int GetHeight() const;

        // data members, from how the methods use this: 80 bytes
        char _unknown_0[8];
        long field_8;         // offset 8
        int m_maxLineWidth;   // offset 16
        int m_lineSpacing;    // offset 20
        int field_24;         // offset 24
        int field_28;         // offset 28
        uchar m_maxLineCount; // offset 32
        char _unknown_33[3];
        int field_36;        // offset 36
        bool m_showLastChar; // offset 40
        char _unknown_41[31];
        int m_wrapMode; // offset 72
        char _unknown_76[4];
    };

    class TextRunCharacter {
    public:
        TextRunCharacter();
    };

    class TextRunSlice {
    public:
        begin() const;
        end() const;
        IsEmpty() const;
        int GetVerticalOrigin() const;
        bool ShouldHide(TextRunCharacter const&) const;
        void GetLastCursorPosition() const;
        Slice(unsigned long, unsigned long) const;
        void GetCodepointCount() const;
        TextRunSlice(TextRun const&, TextRunCharacter const*, TextRunCharacter const*, bool);
        TextRunCharacter* back() const;
        int GetHeight() const;
        uint GetLastCharAdvance() const;
        void ConvertToUTF8(eastl::basic_string<char, BucketAllocatorEASTL>&) const;

        // data members, from how the methods use this: 25 bytes
        TextRun* field_0;           // offset 0
        TextRunCharacter* field_8;  // offset 8
        TextRunCharacter* field_16; // offset 16
        bool field_24;              // offset 24
    };

    // 0x1001fc800, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // TextRun::TextRun(): jumps straight to the base-object constructor

    // 0x1001fc820, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // TextRun::~TextRun(): jumps straight to the base-object destructor

    // 0x1001fcc50, 64 bytes, inline, placed by class name and debug map
    // TextRun::Set(char const*, unsigned long)
    void TextRun::Set(char* param_1, ulong param_2) {
        Clear();
        Append(this, param_1, param_2, 0);
    }

    // 0x1001fd450, 16 bytes, inline, placed by class name and debug map
    // TextRun::GetCodepointCount() const
    void TextRun::GetCodepointCount() {
        (&field_48)->size();
    }

    // 0x1001fd540, 80 bytes, inline, placed by class name and debug map
    // TextRun::GetCharacter(unsigned long) const
    void TextRun::GetCharacter(ulong param_1) {
        ulong uVar1;

        uVar1 = (&field_48)->size();
        if (uVar1 <= param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("index < m_contents.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextRun.h",
                      183, (char*)0);
        }
        eastl::vector<TextRunCharacter, BucketAllocatorEASTL>::operator[](
            (vector<TextRunCharacter, BucketAllocatorEASTL>*)&field_48, param_1);
    }

    // 0x100216030, 96 bytes, base-object constructor, inline, placed by class name
    // TextRun::TextRun()
    void TextRun::TextRun() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
        m_maxLineWidth = 2147483647;
        m_lineSpacing = 0;
        field_24 = 0;
        field_28 = 0;
        m_maxLineCount = 255;
        field_36 = 0;
        m_showLastChar = true;
        eastl::vector<TextRunCharacter, BucketAllocatorEASTL>::vector();
        m_wrapMode = 0;
    }

    // 0x100216100, 48 bytes, base-object destructor, inline, placed by class name
    // TextRun::~TextRun()
    void TextRun::~TextRun() {
        (&field_48)->~vector();
        ~shared_ptr();
    }

    // 0x100216180, 16 bytes, inline, placed by class name
    // TextRun::Clear()
    void TextRun::Clear() {
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    }

    // 0x100216190, 64 bytes, inline, placed by class name
    // TextRun::Append(char const*, unsigned long, unsigned long)
    void TextRun::Append(char* param_1, ulong param_2, ulong param_3) {
        ulong uVar1;

        uVar1 = (&field_48)->size();
        Insert(this, param_1, param_2, uVar1, param_3);
    }

    // 0x10068ff80, 48 bytes, inline, placed by class name
    // TextRun::operator TextRunSlice() const
    TextRunSlice* TextRun::operator_cast_to_TextRunSlice(TextRunSlice* __return_storage_ptr__, TextRun* this) {
        (&field_48)->size();
        Slice((TextRun*)__return_storage_ptr__, (ulong)this, 0);
        return __return_storage_ptr__;
    }

    // 0x10069b3c0, 96 bytes, inline, placed by class name
    // TextRun::GetLastChar() const
    undefined1[16] TextRun::GetLastChar() {
        char cVar1;
        ulong uVar2;
        ulong* puVar3;
        ulong uVar4;
        ulong uVar5;
        undefined1 auVar6[16];
        reverse_iterator<TextRunCharacter_const*> local_20[8];

        cVar1 = (&field_48)->empty();
        if (cVar1 == '\0') {
            eastl::vector<unsigned long,
                          eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
            puVar3 = (ulong*)eastl::reverse_iterator<TextRunCharacter_const*>::operator*(local_20);
            uVar4 = *puVar3 & 18446744069414584320;
            uVar5 = (ulong)(uint)puVar3[1];
            uVar2 = *puVar3 & 4294967295;
        } else {
            uVar5 = 0;
            uVar2 = 0;
            uVar4 = 0;
        }
        auVar6._0_8_ = uVar2 | uVar4;
        auVar6._8_8_ = uVar5;
        return auVar6;
    }

    // 0x10069b6c0, 16 bytes, inline, placed by class name
    // TextRun::SetShowLastChar(bool)
    void TextRun::SetShowLastChar(bool param_1) {
        m_showLastChar = param_1;
    }

    // 0x1008e8910, 16 bytes, inline, placed by class name
    // TextRun::IsEmpty() const
    void TextRun::IsEmpty() {
        (&field_48)->empty();
    }

    // 0x1008e9200, 96 bytes, inline, placed by class name
    // TextRun::GetNumLines() const
    undefined1[16] TextRun::GetNumLines() {
        int iVar2;
        int iVar3;
        FontMetrics* this_00;
        undefined1 auVar4[16];

        if (!operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_textFontMetrics",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextRun.h",
                      190, (char*)0);
        }
        iVar2 = GetHeight(this);
        this_00 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)this);
        iVar3 = this_00->GetVerticalSpacing();
        auVar4._0_8_ = (long)iVar2 / (long)iVar3 & 4294967295;
        auVar4._8_8_ = (long)iVar2 % (long)iVar3 & 4294967295;
        return auVar4;
    }

    // 0x1008e96b0, 80 bytes, inline, placed by class name
    // TextRun::GetLineHeight() const
    void TextRun::GetLineHeight() {
        FontMetrics* this_00;

        if (!operator_cast_to_bool()) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_textFontMetrics",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextRun.h",
                      189, (char*)0);
        }
        if (m_lineSpacing == 0) {
            this_00 = (FontMetrics*)shared_ptr<FontMetrics>::operator->((shared_ptr<FontMetrics>*)this);
            this_00->GetVerticalSpacing();
        }
    }

    // 0x1008e9d00, 80 bytes, inline, placed by class name
    // TextRun::GetLastCharAdvance() const
    undefined8 TextRun::GetLastCharAdvance() {
        char cVar1;
        TextRunCharacter* pTVar2;
        undefined8 uVar3;
        reverse_iterator<TextRunCharacter_const*> local_28[8];

        cVar1 = (&field_48)->empty();
        uVar3 = 0;
        if (cVar1 == '\0') {
            eastl::vector<unsigned long,
                          eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
            pTVar2 = (TextRunCharacter*)eastl::reverse_iterator<TextRunCharacter_const*>::operator*(local_28);
            uVar3 = GetCharacterAdvance(this, pTVar2, false);
        }
        return uVar3;
    }

    // 0x1008e9fe0, 80 bytes, inline, placed by class name
    // TextRun::GetCharacterAdvance(unsigned long) const
    undefined8 TextRun::GetCharacterAdvance(ulong param_1) {
        ulong uVar1;
        TextRunCharacter* pTVar2;
        undefined8 uVar3;

        uVar1 = (&field_48)->size();
        uVar3 = 0;
        if (param_1 < uVar1) {
            pTVar2 = (TextRunCharacter*)eastl::vector<TextRunCharacter, BucketAllocatorEASTL>::operator[](
                (vector<TextRunCharacter, BucketAllocatorEASTL>*)&field_48, param_1);
            uVar3 = GetCharacterAdvance(this, pTVar2, false);
        }
        return uVar3;
    }

    // 0x1008ff7b0, 64 bytes, inline, placed by class name
    // TextRun::GetHeight() const
    int TextRun::GetHeight() {
        char cVar1;
        int iVar2;
        long lVar3;

        cVar1 = IsEmpty(this);
        iVar2 = 0;
        if (cVar1 == '\0') {
            iVar2 = GetLineHeight(this);
            lVar3 = (&field_48)->back();
            iVar2 = iVar2 + *(int*)(lVar3 + 8);
        }
        return iVar2;
    }

} // namespace jag::graphics

namespace jag {
    // 0x1001fda50, 32 bytes, inline, placed by debug map only (low confidence)
    // is_ascii_alpha_numeric(char)
    undefined8 is_ascii_alpha_numeric(char param_1) {
        ulong uVar1;
        undefined3 in_register_00000039;

        uVar1 = (ulong)CONCAT31(in_register_00000039, param_1) & 18446744073709551583;
        return CONCAT71((int7)(uVar1 >> 8), (byte)(param_1 - 48U) < 10 || (byte)((char)uVar1 + 191U) < 26);
    }

    // 0x1001fda70, 32 bytes, inline, placed by debug map only (low confidence)
    // is_ascii_alpha(char)
    bool is_ascii_alpha(char param_1) {
        return (byte)((param_1 & 223U) + 191) < 26;
    }

    // 0x1001fda90, 32 bytes, inline, placed by debug map only (low confidence)
    // is_ascii_numeric(char)
    bool is_ascii_numeric(char param_1) {
        return (byte)(param_1 - 48U) < 10;
    }

} // namespace jag

namespace jag::fixedfunction {
    // 0x1001fc9f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (BaseApp*), 128ul, 16ul, (Methods)0>::function<oldscape::rs2lib::InputField::SetFocus(bool)::$_0, void>(oldscape::rs2lib::InputField::SetFocus(bool)::$_0&&): jumps straight to the base-object constructor

} // namespace jag::fixedfunction
