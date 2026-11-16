// libs/tweaky/Tweaky_SizeControls.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::tweak {
    class SizeControl : public RadioGroup // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~SizeControl();
        virtual void ResetToDefault();
        virtual void Draw(int arg1, int arg2);
        virtual void GetControlSize(int& arg1, int& arg2);
        virtual void SetTweaky(weak_ptr<Tweaky> tweaky);
        void Initialise();
        SizeControl();

    private:
        uint8_t _unknown_217[47];
        int field_264;
        ShaderVariablePrecision field_268;
        shared_ptr field_272;
        ContainerDirection field_288;
        bool field_292;
        uint8_t field_293;
        char field_294;
        uint8_t _unknown_295[6];
    };

    // 0x100a51de0
    void Tweaky::TextDraw<std::basic_string_view<char>>(int arg1, int arg2, const std::basic_string_view<char>& str,
                                                        int arg4, int arg5, bool arg6) {
        uint32_t in_register_0000000c;
        uint32_t in_register_0000003c;
        uint64_t in_register_00000089;
        bool in_stack_00000008;
        StringView local_a0;
        StringView local_90;

        long lVar1 = (((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        basic_string_view<char, std::char_traits<char> _>* local_50 =
            (basic_string_view<char, std::char_traits<char> _>*)(((uint64_t)in_register_0000000c << 32) |
                                                                 (uint32_t)arg4);
        int local_44 = (int)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg6);
        TextFlags local_38(1, in_stack_00000008);
        TextProperties local_80(*((lVar1 + 64)), local_38[0]);
        local_80.SetAlignment(0, 0);
        unsigned int arg1_00 = *(unsigned int*)(lVar1 + 148);
        optional<unsigned int> local_58(*((lVar1 + 152)));
        local_80.SetColours(arg1_00, &local_58);
        FontHelpers* fontHelpers = *(FontHelpers**)(lVar1 + 56);
        if (arg5 < 1) {
            local_90.StringView<std::basic_string_view<char>>(*local_50);
            fontHelpers->DrawString(&local_90, arg2 - *(int*)(lVar1 + 136),
                                    (int)str - (*(int*)(lVar1 + 132) + *(int*)(lVar1 + 80)), 512, local_80);
        } else {
            local_a0.StringView<std::basic_string_view<char>>(*local_50);
            fontHelpers->DrawStringMultiline(&local_a0, arg2 - *(int*)(lVar1 + 136),
                                             (int)str - (*(int*)(lVar1 + 132) + *(int*)(lVar1 + 80)), arg5, local_44,
                                             nullptr, local_80);
        }
    }

    // 0x100a51ff0
    EditLine::EditLine()
        : m_drawOffset(0), m_pos(0), m_selectionStart(4294967295), m_selecting(false), m_cursorShown(true) {}

    // 0x100a52030
    TweakSettingsValue::TweakSettingsValue() : eastl::string() {

        new (&field_32) eastl::map(local_20);
        field_80 = 0;
    }

    // 0x100a52090
    TweakSettingsValue::~TweakSettingsValue() {
        field_32.~map();
    }

    // 0x100a521d0
    TweakSettingsValue::TweakSettingsValue(const TweakSettingsValue& tweakSettingsValue)
        : eastl::string(tweakSettingsValue), field_32(tweakSettingsValue.field_32),
          field_80(tweakSettingsValue.field_80) {}

} // namespace jag::tweak
