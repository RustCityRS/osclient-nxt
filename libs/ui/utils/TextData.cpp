// libs/ui/utils/TextData.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "TextData.h"

namespace jag::ui {
    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    TextData::GetTextString();

    // 0x1000b9a40: the linker folded this into oldscape::configdecoder::DBRowType::GetDbTableId() const, which has identical code
    TextData::GetTextColour() const;

    // 0x100293ee0: the linker folded this into hal::audio::AudioRenderer::GetState() const, which has identical code
    TextData::GetTextFontID() const;

    // 0x100547830: the linker folded this into Component::GetModeWidth() const, which has identical code
    byte TextData::GetTextAlpha() const;

    // 0x100679e60, 192 bytes, placed by class name and debug map
    // TextData::PopulateTextProperties(graphics::TextProperties&, unsigned int, unsigned char) const
    void TextData::PopulateTextProperties(TextProperties* param_1, uint param_2, uchar param_3) {
        bool bVar2;
        uint uVar3;
        uint* puVar4;
        undefined7 in_register_00000009;
        uint uVar5;
        optional<unsigned int> local_38[12];
        uint local_2c;

        uVar5 = (uint)CONCAT71(in_register_00000009, param_3);
        PopulateBasicTextProperties(this, param_1);
        uVar3 = GetTextRGBA(this);
        uVar3 = math::Multiply(param_2, uVar3);
        if ((IsFlagEnabled(this, 1) == '\0') || (param_3 == '\0')) {
            param_1->SetColour(uVar3);
        } else {
            bVar2 = (&field_56)->IsActive();
            if (bVar2) {
                puVar4 = (uint*)eastl::optional<unsigned int>::operator*((optional<unsigned int>*)&field_56);
                uVar5 = ((*puVar4 & 255) * uVar5) / 255 | *puVar4 & 4294967040;
            }
            local_2c = uVar5;
            eastl::optional<unsigned int>::optional(local_38, &local_2c);
            param_1->SetColours(uVar3, local_38);
        }
    }

    // 0x100679f20, 96 bytes, placed by class name and debug map
    // TextData::PopulateBasicTextProperties(graphics::TextProperties&) const
    void TextData::PopulateBasicTextProperties(TextProperties* param_1) {
        optional<int>* this_00;
        optional<int> local_30[8];
        optional<game::option::EnumOptionToggle> local_28[12];
        uint local_1c;

        param_1->SetAlignment(m_textHAlign, m_textVAlign);
        if (field_44 == 0) {
            this_00 = (optional<int>*)local_28;
            new (this_00) eastl::optional<game::option::EnumOptionToggle>();
        } else {
            local_1c = (uint)field_44;
            this_00 = local_30;
            eastl::optional<int>::optional(this_00, (int*)&local_1c);
        }
        param_1->SetLineSpacing(this_00);
    }

    // 0x100679fd0, 336 bytes, placed by class name
    // TextData::LoadStyleSheetTextData(StyleEntryID, StyleSheet const&)
    void TextData::LoadStyleSheetTextData(int param_2, StyleSheet* param_3) {
        bool bVar2;
        undefined1 local_50[8];
        StyleSheetValue* local_48;
        uint local_34;
        int local_30;
        uint local_2c;

        if (599 < param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert("((int)StyleEntryID::COUNT) >= ((int)baseEntryID) + 8",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/ui/utils/TextData.cpp", 55,
                      (char*)0);
        }
        StyleSheet::LoadPropertyValueIfSet<int>(param_3, &m_textFontID, param_2, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned int>(param_3, &m_textColour, param_2 + 1, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_3, &m_textAlpha, param_2 + 2, 1);
        local_50->FindProperty(param_3, param_2 + 3, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_3, &m_textHAlign, param_2 + 4, 1);
        StyleSheet::LoadPropertyValueIfSet<unsigned char>(param_3, &m_textVAlign, param_2 + 5, 1);
        if (local_50->IsValid() != '\0') {
            bVar2 = StyleSheetValue::Get<bool>(local_48);
            SetFlag(this, 1, bVar2);
            if (bVar2) {
                local_30 = 0;
                local_2c = 255;
                StyleSheet::LoadPropertyValueIfSet<unsigned int>(param_3, &local_30, param_2 + 6, 1);
                StyleSheet::LoadPropertyValueIfSet<unsigned int>(param_3, &local_2c, param_2 + 7, 1);
                local_34 = local_30 << 8 | local_2c;
                eastl::optional<unsigned int>::operator=((optional<unsigned int>*)&field_56, &local_34);
            }
        }
    }

    // 0x10067a190, 208 bytes, placed by class name
    // TextData::DecodeTextData(PacketT<Array<unsigned char, eastl::allocator> >&, int)
    void TextData::DecodeTextData(PacketT* param_1, int param_2) {
        char cVar1;
        byte bVar2;
        undefined1 uVar3;
        uchar uVar4;
        undefined4 uVar5;

        uVar5 = param_1->gSmart2or4s();
        *(undefined4*)&m_textFontID = uVar5;
        if (1 < param_2) {
            cVar1 = param_1->g1();
            SetFlag(this, 0, cVar1 == '\x01');
        }
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
            eastl::basic_string<char, BucketAllocatorEASTL>>(
            (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, (basic_string*)&field_16,
            false);
        bVar2 = param_1->g1();
        field_44 = bVar2;
        uVar3 = param_1->g1();
        m_textHAlign = uVar3;
        uVar3 = param_1->g1();
        m_textVAlign = uVar3;
        cVar1 = param_1->g1();
        SetFlag(this, 1, cVar1 == '\x01');
        uVar5 = param_1->g4();
        m_textColour = uVar5;
        bVar2 = param_1->g1();
        m_textAlpha = ~bVar2;
        if (-1 < param_2) {
            uVar4 = param_1->g1();
            m_textMaxLines = uVar4;
        }
    }

} // namespace jag::ui
