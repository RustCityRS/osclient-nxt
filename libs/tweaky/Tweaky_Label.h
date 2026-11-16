// libs/tweaky/Tweaky_Label.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.tweaky

namespace jag::tweak {
    class Label {
    public:
        // virtual methods in vtable order
        virtual ~Label();
        virtual void ResetToDefault();
        virtual void Draw(int arg1, int arg2);
        virtual unsigned long GetControlSize(int& arg1, int& arg2);
        virtual uint64_t OnMouseOver(float arg1, float arg2);
        uint64_t OnClick(float arg1, float arg2, bool arg3);
        void SetMaxWidth(int arg1);
        void SetNonShrinking();
        Label(const char* str);

    private:
        uint8_t _unknown_8[16];
        int field_24;
        int field_28;
        Type field_32;
        ShaderVariablePrecision field_36;
        unsigned int field_40;
        uint8_t _unknown_44[92];
        uint64_t field_136;
        long field_144;
        uint8_t _unknown_152[56];
        bool field_208;
        uint8_t _unknown_209[1];
        bool field_210;
        uint8_t field_211;
        int m_maxWidth;
        uint8_t _unknown_216[4];
    };

    // 0x100009e70: Label::ResetToDefault() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100029ea0: Label::OnMouseOver(float, float) has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: Label::OnClick(float, float, bool) has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100688110
    void Label::SetMaxWidth(int arg1) {
        m_maxWidth = arg1;
    }

    // 0x100688120
    void Label::SetNonShrinking() {
        field_211 = 1;
    }

    // 0x100a4fd80
    void Label::Draw(int arg1, int arg2) {
        int arg1_00;

        int iVar3 = field_24 + arg1;
        int iVar2 = field_28 + arg2;
        shared_ptr local_38(iVar3, iVar2, field_36 + iVar3, field_40 + iVar2);
        field_136 = local_38._0_8_;
        field_144 = local_38.field_8;
        local_38 = field_104.lock();
        if (shared_ptr::operator_cast_to_bool(&local_38) != '\0') {
            SetColour(3772834047, field_208);
            iVar2 = field_28;
            iVar3 = ((Tweaky*)local_38.operator->())->GetTextCenterYOffset(field_40);
            arg1_00 = local_38.operator->();
            Tweaky::TextDraw<eastl::string>(
                arg1_00, arg1 + field_24,
                *((fixed_string<char, _16>*)(unsigned long)(unsigned int)(arg2 + iVar2 + iVar3)), (int)this + 48,
                m_maxWidth, (uint8_t)field_40);
        }
    }

    // 0x100a4fe70
    unsigned long Label::GetControlSize(int& arg1, int& arg2) {
        ShaderVariablePrecision shaderVariablePrecision1;
        unsigned int uVar3;
        Tweaky* pTVar4;
        unsigned long uVar5;
        StringView local_58;
        ShaderVariablePrecision local_38;
        ShaderVariablePrecision local_34;

        shared_ptr local_48 = field_104.lock();
        bool cVar1 = shared_ptr::operator_cast_to_bool(&local_48);
        if ((cVar1) && (cVar1 = shared_ptr::operator_cast_to_bool(&local_48), cVar1)) {
            pTVar4 = (Tweaky*)local_48.operator->();
            local_58.StringView<eastl::fixed_string<char, 40>>(field_48);
            cVar1 = pTVar4->GetTextSize(local_38, local_34, &local_58, m_maxWidth);
            if (cVar1) {
                pTVar4 = (Tweaky*)local_48.operator->();
                shaderVariablePrecision1 = pTVar4->GetMinControlHeight();
                local_34 = shaderVariablePrecision1;
                if (field_211 == '\0') {
                    field_36 = local_38;
                    field_40 = shaderVariablePrecision1;
                    uVar3 = field_40;
                    goto joined_r0x000100a4ff35;
                }
                field_36 = eastl::max<int>(local_38, field_36);
                uVar3 = eastl::max<int>(shaderVariablePrecision1, field_40);
                field_40 = uVar3;
            }
        }
        uVar3 = field_40;
    joined_r0x000100a4ff35:
        if (((int)uVar3 < 1) && ((int)field_36 < 1)) {
            uVar5 = 0;
        } else {
            arg1 = field_36;
            arg2 = field_40;
            uVar5 = (((uint64_t)((int64_t)((unsigned long)&local_48 >> 8)) << 8) | (uint8_t)1);
        }
        return uVar5 & 4294967295;
    }

    // 0x100a52a40: Label::~Label() has the same machine code as Button::~Button()

    // 0x100a5de10
    Label::Label(const char* str) : Control(0, 0, 1, str), field_211(0), m_maxWidth(-1) {}

} // namespace jag::tweak
