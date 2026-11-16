// libs/graphics/runetek7/fonts/TextRun.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class TextRun {
    public:
        void GetFontMetrics() const;
        int GetMaxLineWidth() const;
        TextContentVisibility GetVisibility() const;
        TextWrapMode GetWrapMode() const;
        TextVerticalAlignment GetVerticalAlignment() const;
        uint8_t* GetContents() const;
        TextRun();
        ~TextRun();
        void Set(const char* str, unsigned long arg2);
        void GetCodepointCount() const;
        void GetCharacter(unsigned long arg1) const;
        void Clear();
        void Append(const char* str, unsigned long arg2, unsigned long arg3);
        TextHorizontalAlignment GetHorizontalAlignment() const;
        operator TextRunSlice() const;
        uint8_t[16] GetLastChar() const;
        void SetShowLastChar(bool arg1);
        unsigned char GetMaxLineCount() const;
        void ConvertToUTF8(eastl::string& str) const;
        TextRunSlice Slice(unsigned long arg1, unsigned long arg2) const;
        void SetMaxLineWidth(int arg1);
        void UpdatePositioning();
        void SetMaxLineCount(unsigned char arg1);
        void SetContentVisibility(TextContentVisibility textContentVisibility);
        void SetFontMetrics(const shared_ptr<FontMetrics>& fontMetrics);
        void IsEmpty() const;
        void SetWrapMode(TextWrapMode textWrapMode);
        void SetLineSpacing(int arg1);
        uint8_t SetAlignment(TextHorizontalAlignment textHorizontalAlignment,
                             TextVerticalAlignment textVerticalAlignment);
        uint8_t[16] InsertCodepoints(unsigned int* arg1, unsigned long arg2, unsigned long arg3, unsigned long arg4);
        uint8_t[16] InsertCodepointsFiltered(
            unsigned int* arg1, unsigned long arg2, unsigned long arg3,
            const fixedfunction::function<bool(unsigned int), 64ul, 16ul, (fixedfunction::Methods)0>& callback,
            unsigned long arg5);
        void UpdatePositioning(unsigned long arg1, unsigned long arg2);
        uint8_t[16] GetNumLines() const;
        void Remove(unsigned long arg1);
        uint8_t[16] Insert(const char* str, unsigned long arg2, unsigned long arg3, unsigned long arg4);
        void InsertFiltered(
            const char* str, unsigned long arg2, unsigned long arg3,
            const fixedfunction::function<bool(unsigned int), 64ul, 16ul, (fixedfunction::Methods)0>& callback,
            bool arg5, unsigned long arg6);
        void GetPreviousCharacterDetails(unsigned long arg1, TextRunCharacter& textRunCharacter, int& arg3);
        void GetLineHeight() const;
        unsigned int GetCharacterAdvance(const TextRunCharacter& textRunCharacter, bool arg2) const;
        unsigned long Remove(unsigned long arg1, unsigned long arg2);
        unsigned long GetIndexAtPos(int arg1, int arg2) const;
        uint64_t GetLastCharAdvance() const;
        unsigned long GetIndexAtLineOffset(unsigned long arg1, int arg2) const;
        uint64_t GetCharacterAdvance(unsigned long arg1) const;
        int GetWidth() const;
        int GetLeftOffsetForHorizontalAlignment(int arg1) const;
        int GetTopOffsetForVerticalAlignment(int arg1) const;
        int GetHeight() const;

    private:
        uint8_t _unknown_0[8];
        long field_8;
        int m_maxLineWidth;
        int field_20;
        TextHorizontalAlignment m_horizontalAlignment;
        TextVerticalAlignment m_verticalAlignment;
        unsigned char m_maxLineCount;
        uint8_t _unknown_33[3];
        TextContentVisibility m_visibility;
        bool m_showLastChar;
        uint8_t _unknown_41[31];
        TextWrapMode m_wrapMode;
        uint8_t _unknown_76[4];
    };

    class TextRunCharacter {
    public:
        TextRunCharacter();
    };

    class TextRunSlice {
    public:
        void begin() const;
        uint64_t end() const;
        bool IsEmpty() const;
        int GetVerticalOrigin() const;
        bool ShouldHide(const TextRunCharacter& textRunCharacter) const;
        void GetLastCursorPosition() const;
        auto Slice(unsigned long arg1, unsigned long arg2) const;
        void GetCodepointCount() const;
        TextRunSlice(const TextRun& textRun, const TextRunCharacter* textRunCharacter1,
                     const TextRunCharacter* textRunCharacter2, bool arg4);
        TextRunCharacter* back() const;
        int GetHeight() const;
        unsigned int GetLastCharAdvance() const;
        void ConvertToUTF8(eastl::string& str) const;

    private:
        TextRun* field_0;
        TextRunCharacter* field_8;
        TextRunCharacter* field_16;
        bool field_24;
    };

    // 0x1001fcc50
    void TextRun::Set(const char* str, unsigned long arg2) {
        Clear();
        Append(str, arg2, 0);
    }

    // 0x1001fd450
    void TextRun::GetCodepointCount() const {
        field_48.size();
    }

    // 0x1001fd540
    void TextRun::GetCharacter(unsigned long arg1) const {
        if (field_48.size() <= arg1) {
            LogAssert("index < m_contents.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextRun.h",
                      183, nullptr);
        }
        field_48[arg1];
    }

    // 0x100216030
    TextRun::TextRun()
        : shared_ptr(), m_maxLineWidth(2147483647), field_20(0), m_horizontalAlignment(0), m_verticalAlignment(0),
          m_maxLineCount(255), m_visibility(0), m_showLastChar(true) {
        new (&field_48) eastl::vector<TextRunCharacter, BucketAllocatorEASTL>();
        m_wrapMode = 0;
    }

    // 0x100216100
    TextRun::~TextRun() {
        field_48.~vector();
    }

    // 0x100216180
    void TextRun::Clear() {
        field_48.clear();
    }

    // 0x100216190
    void TextRun::Append(const char* str, unsigned long arg2, unsigned long arg3) {
        unsigned long arg3_00 = field_48.size();
        Insert(str, arg2, arg3_00, arg3);
    }

    // 0x10068ff80
    TextRun::operator TextRunSlice() const {
        auto result;

        unsigned long arg2 = field_48.size();
        Slice(&result, this, 0, arg2);
        return result;
    }

    // 0x10069b3c0
    uint8_t[16] TextRun::GetLastChar() const {
        unsigned long uVar2;
        unsigned long* puVar3;
        unsigned long uVar4;
        unsigned long uVar5;
        uint8_t auVar6[16];
        ReturnValue local_20;

        if (field_48.empty() == '\0') {
            local_20 = field_48.rbegin();
            puVar3 = (unsigned long*)*local_20;
            uVar4 = *puVar3 & 18446744069414584320;
            uVar5 = (unsigned long)(unsigned int)puVar3[1];
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

    // 0x10069b6c0
    void TextRun::SetShowLastChar(bool arg1) {
        m_showLastChar = arg1;
    }

    // 0x1008e8910
    void TextRun::IsEmpty() const {
        field_48.empty();
    }

    // 0x1008e9200
    uint8_t[16] TextRun::GetNumLines() const {
        uint8_t auVar4[16];

        if (operator_cast_to_bool() == '\0') {
            LogAssert("m_textFontMetrics",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextRun.h",
                      190, nullptr);
        }
        int iVar2 = GetHeight();
        int iVar3 = ((FontMetrics*)(*this).operator->())->GetVerticalSpacing();
        auVar4._0_8_ = (long)iVar2 / (long)iVar3 & 4294967295;
        auVar4._8_8_ = (long)iVar2 % (long)iVar3 & 4294967295;
        return auVar4;
    }

    // 0x1008e96b0
    void TextRun::GetLineHeight() const {
        if (operator_cast_to_bool() == '\0') {
            LogAssert("m_textFontMetrics",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextRun.h",
                      189, nullptr);
        }
        if (field_20 == 0) {
            ((FontMetrics*)(*this).operator->())->GetVerticalSpacing();
        }
    }

    // 0x1008e9d00
    uint64_t TextRun::GetLastCharAdvance() const {
        TextRunCharacter* textRunCharacter;
        ReturnValue local_28;

        bool cVar1 = field_48.empty();
        uint64_t uVar2 = 0;
        if (!cVar1) {
            local_28 = field_48.rbegin();
            textRunCharacter = (TextRunCharacter*)*local_28;
            uVar2 = GetCharacterAdvance(*textRunCharacter, false);
        }
        return uVar2;
    }

    // 0x1008e9fe0
    uint64_t TextRun::GetCharacterAdvance(unsigned long arg1) const {
        TextRunCharacter* textRunCharacter;

        unsigned long uVar1 = field_48.size();
        uint64_t uVar2 = 0;
        if (arg1 < uVar1) {
            textRunCharacter = (TextRunCharacter*)field_48[arg1];
            uVar2 = GetCharacterAdvance(*textRunCharacter, false);
        }
        return uVar2;
    }

    // 0x1008ff7b0
    int TextRun::GetHeight() const {
        long lVar3;

        bool cVar1 = IsEmpty();
        int iVar2 = 0;
        if (!cVar1) {
            iVar2 = GetLineHeight();
            lVar3 = field_48.back();
            iVar2 = iVar2 + *(int*)(lVar3 + 8);
        }
        return iVar2;
    }

} // namespace jag::graphics

namespace jag {
    // 0x1001fda50
    void is_ascii_alpha_numeric(char arg1) {
        uint32_t in_register_00000039;

        unsigned long uVar1 =
            (unsigned long)(((uint32_t)in_register_00000039 << 8) | (uint8_t)arg1) & 18446744073709551583;
        return (uint8_t)(arg1 - 48U) < 10 || (uint8_t)((char)uVar1 + 191U) < 26;
    }

    // 0x1001fda70
    bool is_ascii_alpha(char arg1) {
        return (uint8_t)((arg1 & 223U) + 191) < 26;
    }

    // 0x1001fda90
    bool is_ascii_numeric(char arg1) {
        return (uint8_t)(arg1 - 48U) < 10;
    }

} // namespace jag
