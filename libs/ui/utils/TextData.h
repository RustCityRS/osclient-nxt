// libs/ui/utils/TextData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class TextData {
    public:
        // virtual methods in vtable order
        virtual ~TextData();
        uint8_t* GetTextString();
        uint32_t GetTextColour() const;
        HeaderAlignment GetTextFontID() const;
        uint8_t GetTextAlpha() const;
        void PopulateTextProperties(graphics::TextProperties& textProperties, unsigned int arg2,
                                    unsigned char arg3) const;
        void PopulateBasicTextProperties(graphics::TextProperties& textProperties) const;
        void IsFlagEnabled(Flag flag) const;
        void LoadStyleSheetTextData(StyleEntryID styleEntryID, const StyleSheet& styleSheet);
        void SetFlag(Flag flag, bool arg2);
        void DecodeTextData(PacketT<Array<unsigned char>>& arg1, int arg2);
        TextData();
        void SetTextHAlign(graphics::FontAlign fontAlign);
        void SetTextVAlign(graphics::FontAlign fontAlign);
        uint8_t GetTextHAlign() const;
        uint8_t GetTextVAlign() const;
        unsigned int GetTextRGBA() const;
        unsigned char GetTextMaxLines() const;
        void SetTextMaxLines(unsigned char arg1);
        void SetTextColour(unsigned int arg1);
        void SetTextAlpha(unsigned char arg1);

    private:
        uint8_t _unknown_8[32];
        HeaderAlignment m_textFontID;
        uint8_t field_44;
        unsigned char m_textMaxLines;
        uint8_t m_textHAlign;
        uint8_t m_textVAlign;
        uint32_t m_textColour;
        uint8_t m_textAlpha;
        uint8_t _unknown_53[11];
    };

    // 0x100679f80
    void TextData::IsFlagEnabled(TextData::Flag flag) const {
        field_8.test((long)(int)flag);
    }

    // 0x10067a170
    void TextData::SetFlag(TextData::Flag flag, bool arg2) {
        field_8 = eastl::bitset<3ul, unsigned char>::set((long)(int)flag, arg2);
    }

    // 0x100688f20
    void TextData::SetTextHAlign(graphics::FontAlign fontAlign) {
        m_textHAlign = (char)fontAlign;
    }

    // 0x100688f30
    void TextData::SetTextVAlign(graphics::FontAlign fontAlign) {
        m_textVAlign = (char)fontAlign;
    }

    // 0x10068e480
    uint8_t TextData::GetTextHAlign() const {
        return m_textHAlign;
    }

    // 0x10068e490
    uint8_t TextData::GetTextVAlign() const {
        return m_textVAlign;
    }

    // 0x100690020
    unsigned int TextData::GetTextRGBA() const {
        return (unsigned int)m_textAlpha | m_textColour << 8;
    }

    // 0x10069ade0
    unsigned char TextData::GetTextMaxLines() const {
        return m_textMaxLines;
    }

    // 0x10069b6b0
    void TextData::SetTextMaxLines(unsigned char arg1) {
        m_textMaxLines = arg1;
    }

    // 0x1006acd00
    void TextData::SetTextColour(unsigned int arg1) {
        m_groupIDLimit = arg1;
    }

    // 0x1006acd10
    void TextData::SetTextAlpha(unsigned char arg1) {
        m_textAlpha = arg1;
    }

    // 0x1006af690
    TextData::TextData() : m_textFontID(4294967295), field_44(0) {
        m_textMaxLines = '\0';
        m_textHAlign = 0;
        m_textVAlign = 0;
        m_textColour = 16777215;
        m_textAlpha = 255;
        new (&field_56) eastl::optional();
    }

    // 0x1006af770
    TextData::~TextData() {
        field_16.~basic_string();
    }

} // namespace jag::ui
