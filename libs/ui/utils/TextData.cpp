// libs/ui/utils/TextData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "TextData.h"

namespace jag::ui {
    // 0x1000b9950: TextData::GetTextString() has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x1000b9a40: TextData::GetTextColour() const has the same machine code as oldscape::configdecoder::DBRowType::GetDbTableId() const

    // 0x100293ee0: TextData::GetTextFontID() const has the same machine code as hal::audio::AudioRenderer::GetState() const

    // 0x100547830: TextData::GetTextAlpha() const has the same machine code as Component::GetModeWidth() const

    // 0x100679e60
    void TextData::PopulateTextProperties(graphics::TextProperties& textProperties, unsigned int arg2,
                                          unsigned char arg3) const {
        unsigned int* puVar3;
        uint64_t in_register_00000009;
        optional<unsigned int> local_38;
        unsigned int local_2c;

        unsigned int uVar4 = (unsigned int)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3);
        PopulateBasicTextProperties(textProperties);
        unsigned int uVar2 = GetTextRGBA();
        uVar2 = math::Multiply(arg2, uVar2);
        bool cVar1 = IsFlagEnabled(1);
        if ((!cVar1) || (arg3 == '\0')) {
            textProperties.SetColour(uVar2);
        } else {
            cVar1 = field_56.IsActive();
            if (cVar1) {
                puVar3 = (unsigned int*)*field_56;
                uVar4 = ((*puVar3 & 255) * uVar4) / 255 | *puVar3 & 4294967040;
            }
            local_2c = uVar4;
            local_38 = eastl::optional(local_2c);
            textProperties.SetColours(uVar2, &local_38);
        }
    }

    // 0x100679f20
    void TextData::PopulateBasicTextProperties(graphics::TextProperties& textProperties) const {
        optional<int>* this_00;
        optional<int> local_30;
        optional<game::option::EnumOptionToggle> local_28;
        unsigned int local_1c;

        textProperties.SetAlignment((unsigned int)(uint8_t)m_textHAlign, (unsigned int)(uint8_t)m_textVAlign);
        if (field_44 == 0) {
            this_00 = &local_28;
            new (this_00) eastl::optional();
        } else {
            local_1c = (unsigned int)field_44;
            this_00 = &local_30;
            new (this_00) eastl::optional(local_1c);
        }
        textProperties.SetLineSpacing(this_00);
    }

    // 0x100679fd0
    void TextData::LoadStyleSheetTextData(StyleEntryID styleEntryID, const StyleSheet& styleSheet) {
        bool arg2;

        if (599 < (int)styleEntryID) {
            LogAssert("((int)StyleEntryID::COUNT) >= ((int)baseEntryID) + 8",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/TextData.cpp", 55,
                      nullptr);
        }
        styleSheet.LoadPropertyValueIfSet<int>(m_textFontID, styleEntryID, true);
        styleSheet.LoadPropertyValueIfSet<unsigned int>(m_textColour, styleEntryID + 1, true);
        styleSheet.LoadPropertyValueIfSet<unsigned char>(m_textAlpha, styleEntryID + 2, true);
        PropertyFindResult local_50 = styleSheet.FindProperty(styleEntryID + 3, true);
        styleSheet.LoadPropertyValueIfSet<unsigned char>(m_textHAlign, styleEntryID + 4, true);
        styleSheet.LoadPropertyValueIfSet<unsigned char>(m_textVAlign, styleEntryID + 5, true);
        if (local_50.IsValid() != '\0') {
            arg2 = local_50.field_8->Get<bool>();
            SetFlag(1, arg2);
            if (arg2) {
                styleSheet.LoadPropertyValueIfSet<unsigned int>(0, styleEntryID + 6, true);
                styleSheet.LoadPropertyValueIfSet<unsigned int>(255, styleEntryID + 7, true);
                field_56 = 0 << 8 | 255;
            }
        }
    }

    // 0x10067a190
    void TextData::DecodeTextData(PacketT<Array<unsigned char>>& arg1, int arg2) {
        char cVar1;

        m_textFontID = arg1.gSmart2or4s();
        if (1 < arg2) {
            cVar1 = arg1.g1();
            SetFlag(0, cVar1 == '\x01');
        }
        arg1.gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(&field_16, false);
        uint8_t bVar2 = arg1.g1();
        field_44 = bVar2;
        uint8_t uVar3 = arg1.g1();
        m_textHAlign = uVar3;
        uVar3 = arg1.g1();
        m_textVAlign = uVar3;
        cVar1 = arg1.g1();
        SetFlag(1, cVar1 == '\x01');
        m_textColour = arg1.g4();
        bVar2 = arg1.g1();
        m_textAlpha = ~bVar2;
        if (-1 < arg2) {
            m_textMaxLines = arg1.g1();
        }
    }

} // namespace jag::ui
