// libs/ui/utils/TextData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class TextData {
    public:
        // virtual methods in vtable order
        virtual ~TextData();
        GetTextString();
        GetTextColour() const;
        GetTextFontID() const;
        byte GetTextAlpha() const;
        void PopulateTextProperties(graphics::TextProperties&, unsigned int, unsigned char) const;
        void PopulateBasicTextProperties(graphics::TextProperties&) const;
        void IsFlagEnabled(Flag) const;
        void LoadStyleSheetTextData(StyleEntryID, StyleSheet const&);
        void SetFlag(Flag, bool);
        void DecodeTextData(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        TextData();
        void SetTextHAlign(graphics::FontAlign);
        void SetTextVAlign(graphics::FontAlign);
        GetTextHAlign() const;
        GetTextVAlign() const;
        uint GetTextRGBA() const;
        uchar GetTextMaxLines() const;
        void SetTextMaxLines(unsigned char);
        SetTextColour(unsigned int);
        void SetTextAlpha(unsigned char);

        // data members, from how the methods use this: 64 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[32];
        undefined1 m_textFontID; // offset 40
        char _unknown_41[3];
        byte field_44;           // offset 44
        uchar m_textMaxLines;    // offset 45
        undefined1 m_textHAlign; // offset 46
        undefined1 m_textVAlign; // offset 47
        undefined4 m_textColour; // offset 48
        byte m_textAlpha;        // offset 52
        char _unknown_53[11];
    };

    // 0x100679f80, 32 bytes, inline, placed by class name and debug map
    // TextData::IsFlagEnabled(TextData::Flag) const
    void TextData::IsFlagEnabled(int param_2) {
        (&field_8, (long)param_2)->test();
    }

    // 0x10067a170, 32 bytes, inline, placed by class name and debug map
    // TextData::SetFlag(TextData::Flag, bool)
    void TextData::SetFlag(int param_2, bool param_3) {
        (&field_8, (long)param_2, param_3)->set();
    }

    // 0x100688eb0, 16 bytes, complete-object constructor, inline, placed by class name
    // TextData::TextData(): jumps straight to the base-object constructor

    // 0x100688f20, 16 bytes, inline, placed by class name
    // TextData::SetTextHAlign(graphics::FontAlign)
    void TextData::SetTextHAlign(undefined1 param_2) {
        m_textHAlign = param_2;
    }

    // 0x100688f30, 16 bytes, inline, placed by class name
    // TextData::SetTextVAlign(graphics::FontAlign)
    void TextData::SetTextVAlign(undefined1 param_2) {
        m_textVAlign = param_2;
    }

    // 0x100688f40, 16 bytes, complete-object destructor, inline, placed by class name
    // TextData::~TextData(): jumps straight to the base-object destructor

    // 0x10068e480, 16 bytes, inline, placed by class name
    // TextData::GetTextHAlign() const
    undefined1 TextData::GetTextHAlign() {
        return m_textHAlign;
    }

    // 0x10068e490, 16 bytes, inline, placed by class name
    // TextData::GetTextVAlign() const
    undefined1 TextData::GetTextVAlign() {
        return m_textVAlign;
    }

    // 0x100690020, 32 bytes, inline, placed by class name
    // TextData::GetTextRGBA() const
    uint TextData::GetTextRGBA() {
        return (uint)m_textAlpha | m_textColour << 8;
    }

    // 0x10069ade0, 16 bytes, inline, placed by class name
    // TextData::GetTextMaxLines() const
    uchar TextData::GetTextMaxLines() {
        return m_textMaxLines;
    }

    // 0x10069b6b0, 16 bytes, inline, placed by class name
    // TextData::SetTextMaxLines(unsigned char)
    void TextData::SetTextMaxLines(uchar param_1) {
        m_textMaxLines = param_1;
    }

    // 0x1006acd00, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // TextData::SetTextColour(unsigned int)
    /* Js5ArchiveSettings::SetGroupIDLimit(unsigned int) */

    void Js5ArchiveSettings::SetGroupIDLimit(uint param_1) {
        m_groupIDLimit = param_1;
    }

    // 0x1006acd10, 16 bytes, inline, placed by class name
    // TextData::SetTextAlpha(unsigned char)
    void TextData::SetTextAlpha(uchar param_1) {
        m_textAlpha = param_1;
    }

    // 0x1006af690, 80 bytes, base-object constructor, inline, placed by class name
    // TextData::TextData()
    void TextData::TextData() {
        field_0 = PTR_vtable_100ee7db0 + 16;
        new (&field_8) eastl::bitset<4ul, unsigned char>();
        eastl::basic_string<char, BucketAllocatorEASTL>::basic_string();
        m_textFontID = 255;
        *(undefined3*)&field_41 = 16777215;
        field_44 = 0;
        m_textMaxLines = '\0';
        m_textHAlign = 0;
        m_textVAlign = 0;
        m_textColour = 16777215;
        m_textAlpha = 255;
        new (&field_56) eastl::optional<game::option::EnumOptionToggle>();
    }

    // 0x1006af6e0, 32 bytes, deleting destructor, inline, placed by class name
    // TextData::~TextData()
    void TextData::~TextData() {
        ~TextData(this);
        operator_delete(this);
    }

    // 0x1006af770, 32 bytes, base-object destructor, inline, placed by class name
    // TextData::~TextData()
    void TextData::~TextData() {
        field_0 = PTR_vtable_100ee7db0 + 16;
        (&field_16)->~basic_string();
    }

} // namespace jag::ui
