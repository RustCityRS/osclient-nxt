// libs/graphics/runetek7/fonts/TextProperties.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class TextProperties {
    public:
        uint GetColour() const;
        byte GetFlags() const;
        TextProperties(shared_ptr<Font> const&);
        long SetShadowColour(unsigned int);
        GetHorizontalAlignment() const;
        TextProperties* SetLineSpacing(eastl::optional<int>);
        TextProperties(TextProperties const&, unsigned int, unsigned int);
        long SetFlag(TextFlags::Flag, bool);
        TextProperties(Font&);
        void GetFontMetrics() const;
        void GetLineSpacing() const;
        GetVerticalAlignment() const;
        void HasFlag(TextFlags::Flag) const;
        Font* GetFont() const;
        TextProperties(TextProperties const&);
        long ClearFlag(TextFlags::Flag);
        TextProperties(shared_ptr<Font> const&, TextFlags);
        TextProperties* SetAlignment(FontAlign);
        TextProperties* SetColours(unsigned int, eastl::optional<unsigned int>);
        TextProperties* SetAlignment(FontAlign, FontAlign);
        TextProperties* SetColour(unsigned int);
        TextProperties(Font&, TextFlags);
        GetShadowColour() const;
        TextProperties(TextProperties const&, unsigned int);

        // data members, from how the methods use this: 36 bytes
        Font* m_pFont;                    // offset 0
        undefined1 m_horizontalAlignment; // offset 8
        undefined1 m_verticalAlignment;   // offset 9
        undefined2 field_10;              // offset 10
        uint m_colours;                   // offset 12
        char _unknown_16[8];
        byte m_flags; // offset 24
        char _unknown_25[11];
    };

    // 0x1004b46c0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // TextProperties::TextProperties(shared_ptr<Font> const&): jumps straight to the base-object constructor

    // 0x1004b54a0, 80 bytes, base-object constructor, inline, placed by class name
    // TextProperties::TextProperties(shared_ptr<Font> const&)
    void TextProperties::TextProperties(shared_ptr* param_1) {
        Font* pFVar1;

        pFVar1 = (Font*)param_1->end();
        m_pFont = pFVar1;
        m_horizontalAlignment = 0;
        m_verticalAlignment = 0;
        m_colours = 4294967295;
        new (&field_16) eastl::optional<game::option::EnumOptionToggle>();
        new (&m_flags) oldscape::configdecoder::VeccType();
        new (&field_28) eastl::optional<game::option::EnumOptionToggle>();
    }

    // 0x10053b3c0, 48 bytes, inline, placed by class name
    // TextProperties::SetShadowColour(unsigned int)
    long TextProperties::SetShadowColour(uint param_1) {
        undefined4 in_register_0000003c;
        uint local_14;

        eastl::optional<unsigned int>::operator=(
            (optional<unsigned int>*)(CONCAT44(in_register_0000003c, param_1) + 16), &local_14);
        return CONCAT44(in_register_0000003c, param_1);
    }

    // 0x100679fb0, 32 bytes, inline, placed by class name
    // TextProperties::SetLineSpacing(eastl::optional<int>)
    TextProperties* TextProperties::SetLineSpacing(optional* param_2) {
        eastl::optional<int>::operator=((optional<int>*)&field_28, param_2);
        return this;
    }

    // 0x100681a50, 80 bytes, complete-object constructor, inline, placed by class name
    // TextProperties::TextProperties(TextProperties const&, unsigned int, unsigned int)
    void TextProperties::TextProperties(TextProperties* param_1, uint param_2, uint param_3) {
        optional<unsigned int> local_30[12];
        uint local_24;

        local_24 = param_3;
        TextProperties(this, param_1);
        eastl::optional<unsigned int>::optional(local_30, &local_24);
        SetColours(this, param_2, local_30);
    }

    // 0x100685040, 32 bytes, inline, placed by class name
    // TextProperties::SetFlag(TextFlags::Flag, bool)
    long TextProperties::SetFlag(long param_1) {
        ((param_1 + 24))->SetFlag();
        return param_1;
    }

    // 0x1008a8bb0, 16 bytes, complete-object constructor, inline, placed by class name
    // TextProperties::TextProperties(Font&): jumps straight to the base-object constructor

    // 0x1008cc710, 64 bytes, base-object constructor, inline, placed by class name
    // TextProperties::TextProperties(Font&)
    void TextProperties::TextProperties(Font* param_1) {
        m_pFont = param_1;
        m_horizontalAlignment = 0;
        m_verticalAlignment = 0;
        m_colours = 4294967295;
        new (&field_16) eastl::optional<game::option::EnumOptionToggle>();
        new (&m_flags) oldscape::configdecoder::VeccType();
        new (&field_28) eastl::optional<game::option::EnumOptionToggle>();
    }

    // 0x1008e16f0, 16 bytes, inline, placed by class name
    // TextProperties::GetVerticalAlignment() const
    undefined1 TextProperties::GetVerticalAlignment() {
        return m_verticalAlignment;
    }

    // 0x1008e25d0, 16 bytes, inline, placed by class name
    // TextProperties::HasFlag(TextFlags::Flag) const
    void TextProperties::HasFlag() {
        (&m_flags)->HasFlag();
    }

    // 0x1008e2960, 64 bytes, inline, placed by class name
    // TextProperties::GetFont() const
    Font* TextProperties::GetFont() {
        if (m_pFont == (Font*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_font",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextProperties.h",
                      80, (char*)0);
        }
        return m_pFont;
    }

    // 0x1008e2d10, 16 bytes, complete-object constructor, inline, placed by class name
    // TextProperties::TextProperties(TextProperties const&): jumps straight to the base-object constructor

    // 0x1008e2d20, 32 bytes, inline, placed by class name
    // TextProperties::ClearFlag(TextFlags::Flag)
    long TextProperties::ClearFlag(long param_1) {
        ((param_1 + 24))->ClearFlag();
        return param_1;
    }

    // 0x1008fa2d0, 16 bytes, complete-object constructor, inline, placed by class name
    // TextProperties::TextProperties(shared_ptr<Font> const&, TextFlags): jumps straight to the base-object constructor

    // 0x1008fa2e0, 16 bytes, inline, placed by class name
    // TextProperties::SetAlignment(FontAlign)
    TextProperties* TextProperties::SetAlignment(undefined1 param_2) {
        m_horizontalAlignment = param_2;
        return this;
    }

    // 0x1008fa2f0, 48 bytes, inline, placed by class name
    // TextProperties::SetColours(unsigned int, eastl::optional<unsigned int>)
    TextProperties* TextProperties::SetColours(uint param_1, optional* param_3) {
        m_colours = param_1;
        eastl::optional<unsigned int>::operator=((optional<unsigned int>*)&field_16, param_3);
        return this;
    }

    // 0x1008fb6d0, 16 bytes, inline, placed by class name
    // TextProperties::SetAlignment(FontAlign, FontAlign)
    TextProperties* TextProperties::SetAlignment(undefined1 param_2, undefined1 param_3) {
        m_horizontalAlignment = param_2;
        m_verticalAlignment = param_3;
        return this;
    }

    // 0x1008fb6e0, 64 bytes, inline, placed by class name
    // TextProperties::SetColour(unsigned int)
    TextProperties* TextProperties::SetColour(uint param_1) {
        optional<game::option::EnumOptionToggle> local_20[8];

        m_colours = param_1;
        eastl::optional<game::option::EnumOptionToggle>::optional(local_20);
        eastl::optional<unsigned int>::operator=((optional<unsigned int>*)&field_16, (optional*)local_20);
        return this;
    }

    // 0x1008fc080, 16 bytes, complete-object constructor, inline, placed by class name
    // TextProperties::TextProperties(Font&, TextFlags): jumps straight to the base-object constructor

    // 0x1008fe880, 32 bytes, inline, placed by class name
    // TextProperties::GetShadowColour() const
    TextProperties* TextProperties::GetShadowColour() {
        long in_RSI;

        new (this) eastl::optional<int>((optional*)(in_RSI + 16));
        return this;
    }

    // 0x1008fe9c0, 64 bytes, base-object constructor, inline, placed by class name
    // TextProperties::TextProperties(TextProperties const&)
    void TextProperties::TextProperties(TextProperties* param_1) {
        undefined1 uVar1;
        undefined1 uVar2;
        undefined2 uVar3;
        uint uVar4;

        uVar1 = param_1->m_horizontalAlignment;
        uVar2 = param_1->m_verticalAlignment;
        uVar3 = param_1->field_10;
        uVar4 = param_1->m_colours;
        m_pFont = param_1->m_pFont;
        m_horizontalAlignment = uVar1;
        m_verticalAlignment = uVar2;
        field_10 = uVar3;
        m_colours = uVar4;
        new (&field_16, (optional*)&param_1->field_16) eastl::optional<int>();
        m_flags = param_1->m_flags;
        new (&field_28, (optional*)&param_1->field_28) eastl::optional<int>();
    }

    // 0x1009047c0, 80 bytes, base-object constructor, inline, placed by class name
    // TextProperties::TextProperties(shared_ptr<Font> const&, TextFlags)
    void TextProperties::TextProperties(shared_ptr* param_1, TextFlags param_2) {
        Font* pFVar1;
        byte in_DL;

        pFVar1 = (Font*)param_1->end();
        m_pFont = pFVar1;
        m_horizontalAlignment = 0;
        m_verticalAlignment = 0;
        m_colours = 4294967295;
        new (&field_16) eastl::optional<game::option::EnumOptionToggle>();
        m_flags = in_DL;
        new (&field_28) eastl::optional<game::option::EnumOptionToggle>();
    }

    // 0x100904e50, 64 bytes, base-object constructor, inline, placed by class name
    // TextProperties::TextProperties(Font&, TextFlags)
    void TextProperties::TextProperties(Font* param_1, TextFlags param_2) {
        byte in_DL;

        m_pFont = param_1;
        m_horizontalAlignment = 0;
        m_verticalAlignment = 0;
        m_colours = 4294967295;
        new (&field_16) eastl::optional<game::option::EnumOptionToggle>();
        m_flags = in_DL;
        new (&field_28) eastl::optional<game::option::EnumOptionToggle>();
    }

    // 0x100a3eb20, 48 bytes, complete-object constructor, inline, placed by class name
    // TextProperties::TextProperties(TextProperties const&, unsigned int)
    void TextProperties::TextProperties(TextProperties* param_1, uint param_2) {
        TextProperties(this, param_1);
        SetColour(this, param_2);
    }

} // namespace jag::graphics
