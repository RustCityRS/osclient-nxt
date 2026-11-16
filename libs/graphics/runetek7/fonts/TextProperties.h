// libs/graphics/runetek7/fonts/TextProperties.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class TextProperties {
    public:
        unsigned int GetColour() const;
        uint8_t GetFlags() const;
        TextProperties(const shared_ptr<Font>& font);
        long SetShadowColour(unsigned int arg1);
        uint8_t GetHorizontalAlignment() const;
        TextProperties* SetLineSpacing(eastl::optional<int> arg1);
        TextProperties(const TextProperties& textProperties, unsigned int arg2, unsigned int arg3);
        TextProperties* SetFlag(TextFlags::Flag flag, bool arg2);
        TextProperties(Font& font);
        FontMetrics* GetFontMetrics() const;
        void GetLineSpacing() const;
        uint8_t GetVerticalAlignment() const;
        void HasFlag(TextFlags::Flag flag) const;
        Font* GetFont() const;
        TextProperties(const TextProperties& textProperties);
        TextProperties* ClearFlag(TextFlags::Flag flag);
        TextProperties(const shared_ptr<Font>& font, TextFlags textFlags);
        TextProperties* SetAlignment(FontAlign fontAlign);
        TextProperties* SetColours(unsigned int arg1, eastl::optional<unsigned int> arg2);
        TextProperties* SetAlignment(FontAlign fontAlign1, FontAlign fontAlign2);
        TextProperties* SetColour(unsigned int arg1);
        TextProperties(Font& font, TextFlags textFlags);
        auto GetShadowColour() const;
        TextProperties(const TextProperties& textProperties, unsigned int arg2);

    private:
        Font* m_pFont;
        uint8_t m_horizontalAlignment;
        uint8_t m_verticalAlignment;
        uint16_t field_10;
        unsigned int m_colour;
        uint8_t _unknown_16[8];
        uint8_t m_flags;
        uint8_t _unknown_25[11];
    };

    // 0x1004b54a0
    TextProperties::TextProperties(const shared_ptr<Font>& font) {
        m_pFont = (Font*)font.end();
        m_horizontalAlignment = 0;
        m_verticalAlignment = 0;
        m_colour = 4294967295;
        new (&field_16) eastl::optional();
        new (&m_flags) oldscape::configdecoder::VeccType();
        new (&field_28) eastl::optional();
    }

    // 0x10053b3c0
    long TextProperties::SetShadowColour(unsigned int arg1) {
        uint32_t in_register_0000003c;
        unsigned int local_14;

        (*((optional<unsigned int>*)((((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1) + 16))) = local_14;
        return (((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
    }

    // 0x100679fb0
    TextProperties* TextProperties::SetLineSpacing(eastl::optional<int> arg1) {
        field_28 = *arg1;
        return this;
    }

    // 0x100681a50
    TextProperties::TextProperties(const TextProperties& textProperties, unsigned int arg2, unsigned int arg3) {

        TextProperties(textProperties);
        optional<unsigned int> local_30(arg3);
        SetColours(arg2, &local_30);
    }

    // 0x100685040
    TextProperties* TextProperties::SetFlag(TextFlags::Flag flag, bool arg2) {
        m_flags.SetFlag(flag, arg2);
        return this;
    }

    // 0x1008cc710
    TextProperties::TextProperties(Font& font)
        : m_pFont(font), m_horizontalAlignment(0), m_verticalAlignment(0), m_colour(4294967295) {}

    // 0x1008e16f0
    uint8_t TextProperties::GetVerticalAlignment() const {
        return m_verticalAlignment;
    }

    // 0x1008e25d0
    void TextProperties::HasFlag(TextFlags::Flag flag) const {
        m_flags.HasFlag(flag);
    }

    // 0x1008e2960
    Font* TextProperties::GetFont() const {
        if (m_pFont == nullptr) {
            LogAssert("m_font",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/fonts/"
                      "TextProperties.h",
                      80, nullptr);
        }
        return m_pFont;
    }

    // 0x1008e2d20
    TextProperties* TextProperties::ClearFlag(TextFlags::Flag flag) {
        m_flags = TextFlags::ClearFlag(flag);
        return this;
    }

    // 0x1008fa2e0
    TextProperties* TextProperties::SetAlignment(FontAlign fontAlign) {
        m_horizontalAlignment = (char)fontAlign;
        return this;
    }

    // 0x1008fa2f0
    TextProperties* TextProperties::SetColours(unsigned int arg1, eastl::optional<unsigned int> arg2) {
        m_colour = arg1;
        field_16 = *arg2;
        return this;
    }

    // 0x1008fb6d0
    TextProperties* TextProperties::SetAlignment(FontAlign fontAlign1, FontAlign fontAlign2) {
        m_horizontalAlignment = (char)fontAlign1;
        m_verticalAlignment = (char)fontAlign2;
        return this;
    }

    // 0x1008fb6e0
    TextProperties* TextProperties::SetColour(unsigned int arg1) {

        m_colour = arg1;
        optional<game::option::EnumOptionToggle> local_20;
        field_16 = local_20;
        return this;
    }

    // 0x1008fe880
    auto TextProperties::GetShadowColour() const {
        return auto(field_16);
    }

    // 0x1008fe9c0
    TextProperties::TextProperties(const TextProperties& textProperties) {
        uint8_t uVar1 = textProperties.m_horizontalAlignment;
        uint8_t uVar2 = textProperties.m_verticalAlignment;
        uint16_t uVar3 = textProperties.field_10;
        unsigned int uVar4 = textProperties.m_colour;
        m_pFont = textProperties.m_pFont;
        m_horizontalAlignment = uVar1;
        m_verticalAlignment = uVar2;
        field_10 = uVar3;
        m_colour = uVar4;
        new (&field_16) eastl::optional(textProperties.field_16);
        m_flags = textProperties.m_flags;
        new (&field_28) eastl::optional(textProperties.field_28);
    }

    // 0x1009047c0
    TextProperties::TextProperties(const shared_ptr<Font>& font, TextFlags textFlags) {
        m_pFont = (Font*)font.end();
        m_horizontalAlignment = 0;
        m_verticalAlignment = 0;
        m_colour = 4294967295;
        new (&field_16) eastl::optional();
        m_flags = textFlags.field_0;
        new (&field_28) eastl::optional();
    }

    // 0x100904e50
    TextProperties::TextProperties(Font& font, TextFlags textFlags)
        : m_pFont(font), m_horizontalAlignment(0), m_verticalAlignment(0), m_colour(4294967295),
          m_flags(textFlags.field_0) {}

    // 0x100a3eb20
    TextProperties::TextProperties(const TextProperties& textProperties, unsigned int arg2) {
        TextProperties(textProperties);
        SetColour(arg2);
    }

} // namespace jag::graphics
