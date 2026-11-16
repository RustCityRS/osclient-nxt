// libs/tweaky/Tweaky_Label.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.tweaky

namespace jag::tweak {
    class Label {
    public:
        // virtual methods in vtable order
        virtual ~Label();
        virtual ResetToDefault();
        virtual void Draw(int, int);
        virtual ulong GetControlSize(int&, int&);
        virtual OnMouseOver(float, float);
        OnClick(float, float, bool);
        void SetMaxWidth(int);
        void SetNonShrinking();
        Label(char const*);

        // data members, from how the methods use this: 220 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        undefined4 field_24; // offset 24
        int field_28;        // offset 28
        undefined4 field_32; // offset 32
        int field_36;        // offset 36
        uint field_40;       // offset 40
        char _unknown_44[92];
        undefined8 field_136; // offset 136
        long field_144;       // offset 144
        char _unknown_152[56];
        bool field_208; // offset 208
        char _unknown_209[1];
        undefined1 field_210; // offset 210
        undefined1 field_211; // offset 211
        int m_maxWidth;       // offset 212
        char _unknown_216[4];
    };

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Label::ResetToDefault();

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    Label::OnMouseOver(float, float);

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    Label::OnClick(float, float, bool);

    // 0x100688110, 16 bytes, inline, placed by class name and debug map
    // Label::SetMaxWidth(int)
    void Label::SetMaxWidth(int param_1) {
        m_maxWidth = param_1;
    }

    // 0x100688120, 16 bytes, inline, placed by class name and debug map
    // Label::SetNonShrinking()
    void Label::SetNonShrinking() {
        field_211 = 1;
    }

    // 0x100a4fd80, 240 bytes, placed by class name
    // Label::Draw(int, int)
    void Label::Draw(int param_1, int param_2) {
        Tweaky* pTVar1;
        int iVar3;
        int iVar4;
        shared_ptr local_38;

        iVar4 = field_24 + param_1;
        iVar3 = field_28 + param_2;
        new (&local_38) oldscape::dash3d::GridRect(iVar4, iVar3, field_36 + iVar4, field_40 + iVar3);
        field_136 = local_38._0_8_;
        field_144 = local_38.field_8;
        weak_ptr<oldscape::rs2lib::IfType>::lock();
        if (shared_ptr::operator_cast_to_bool(&local_38)) {
            SetColour(3772834047, field_208);
            iVar3 = field_28;
            pTVar1 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_38);
            iVar4 = pTVar1->GetTextCenterYOffset(field_40);
            pTVar1 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_38);
            Tweaky::TextDraw<eastl::string>(pTVar1, param_1 + field_24, param_2 + iVar3 + iVar4,
                                            (basic_string*)&field_48, m_maxWidth, field_40, false);
        }
        local_38.~shared_ptr();
    }

    // 0x100a4fe70, 304 bytes, placed by class name
    // Label::GetControlSize(int&, int&)
    ulong Label::GetControlSize(int* param_1, int* param_2) {
        bool bVar1;
        uint uVar3;
        Tweaky* pTVar5;
        ulong uVar6;
        int in_R9D;
        StringView SVar7;
        StringView local_58;
        shared_ptr local_48;
        int local_38;
        uint local_34;

        weak_ptr<oldscape::rs2lib::IfType>::lock();
        bVar1 = shared_ptr::operator_cast_to_bool(&local_48);
        if ((bVar1) && (bVar1 = shared_ptr::operator_cast_to_bool(&local_48), bVar1)) {
            pTVar5 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_48);
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_58,
                                                                                          (fixed_string*)&field_48);
            SVar7.field_8._0_4_ = m_maxWidth;
            SVar7.field_0 = (ulong)&local_58;
            SVar7.field_8._4_4_ = 0;
            if (pTVar5->GetTextSize(&local_38, (int*)&local_34, SVar7, in_R9D) != '\0') {
                pTVar5 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_48);
                uVar3 = pTVar5->GetMinControlHeight();
                local_34 = uVar3;
                if (field_211 == '\0') {
                    field_36 = local_38;
                    field_40 = uVar3;
                    uVar3 = field_40;
                    goto joined_r0x000100a4ff35;
                }
                field_36 = eastl::max<int>(local_38, field_36);
                uVar3 = eastl::max<int>(uVar3, field_40);
                field_40 = uVar3;
            }
        }
        uVar3 = field_40;
    joined_r0x000100a4ff35:
        if (((int)uVar3 < 1) && (field_36 < 1)) {
            uVar6 = 0;
        } else {
            *param_1 = field_36;
            *param_2 = field_40;
            uVar6 = CONCAT71((int7)((ulong)&local_48 >> 8), 1);
        }
        local_48.~shared_ptr();
        return uVar6 & 4294967295;
    }

    // 0x100a514a0: the linker folded this into Button::~Button(), which has identical code
    Label::~Label();

    // 0x100a514b0: the linker folded this into Button::~Button(), which has identical code
    Label::~Label();

    // 0x100a52a40: the linker folded this into Button::~Button(), which has identical code
    Label::~Label();

    // 0x100a5de00, 16 bytes, complete-object constructor, inline, placed by class name
    // Label::Label(char const*): jumps straight to the base-object constructor

    // 0x100a5de10, 64 bytes, base-object constructor, inline, placed by class name
    // Label::Label(char const*)
    void Label::Label(char* param_1) {
        new (this) Control(0, 0, 1, param_1);
        field_0 = &PTR__Label_100f1df20;
        field_211 = 0;
        m_maxWidth = -1;
    }

} // namespace jag::tweak
