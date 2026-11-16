// libs/tweaky/Tweaky_EditField.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.tweaky

#include "Tweaky_EditField.h"

namespace jag::tweak {
    // 0x100029ea0: EditField::OnMouseOver(float, float) has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x10002d860: EditField::HasKeyboardNavigation() const has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x100a46c40
    void EditField::Draw(int arg1, int arg2) {
        int iVar1;
        unsigned long uVar2;
        bool bVar4;
        uint32_t uVar5;
        Tweaky* pTVar6;
        LoginManager* pLVar7;
        RT7Core* rt7Core;
        Js5HTTPQueueRequest* this_00;
        FontHelpers* fontHelpers;
        int iVar9;
        int iVar11;
        int local_80[4];
        EditLine* local_70;
        unsigned long local_68;
        shared_ptr<graphics::Font>* local_60;
        ReturnValue local_58;
        unsigned long local_48;

        int iVar10 = field_24 + arg1;
        int iVar8 = field_28 + arg2;
        shared_ptr local_40(iVar10, iVar8, field_36 + iVar10, field_40 + iVar8 - 2);
        field_136 = local_40._0_8_;
        field_144 = local_40.field_8;
        local_40 = field_104.lock();
        if (shared_ptr::operator_cast_to_bool(&local_40)) {
            iVar8 = field_28;
            pTVar6 = (Tweaky*)local_40.operator->();
            uVar5 = pTVar6->GetTextCenterYOffset(field_40);
            local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)uVar5);
            if (!(field_48.empty())) {
                bVar4 = (bool)field_248->GetCursorShown();
                SetColour(3772834047, bVar4);
                iVar10 = local_40.operator->();
                Tweaky::TextDraw<eastl::string>(
                    iVar10, field_24 + arg1,
                    *((fixed_string<char, _16>*)(unsigned long)(unsigned int)(iVar8 + arg2 + (int)local_48)),
                    (int)&field_48, -1, true);
                iVar8 = (arg1 + field_24 + field_36) - field_212;
            } else {
                iVar8 = arg1 + field_24;
            }
            SetColour(1886417151, field_208);
            pTVar6 = (Tweaky*)local_40.operator->();
            pTVar6->FillRect(iVar8, field_28 + arg2, field_212 - 2, field_40 - 2);
            pTVar6 = (Tweaky*)local_40.operator->();
            pTVar6->DrawRect(iVar8, field_28 + arg2, field_212 - 2, field_40 - 2, true);
            pTVar6 = (Tweaky*)local_40.operator->();
            local_58 = pTVar6->GetFocus();
            local_48 = (unsigned long)(unsigned int)arg2;
            local_80->shared_from_this();
            bVar4 = local_58 == *local_80;
            local_70 = (EditLine*)field_248;
            field_248->SetCursorShown(bVar4);
            pTVar6 = (Tweaky*)local_40.operator->();
            uVar2 = local_48;
            pTVar6->GetScroll(local_58, *local_80);
            iVar11 = (int)uVar2 - local_80[0];
            iVar10 = field_28;
            local_48 = (unsigned long)field_40;
            local_68 = (unsigned long)field_212;
            pLVar7 = (LoginManager*)local_40.operator->();
            local_60 = (shared_ptr<graphics::Font>*)pLVar7->GetDevCredentialsOutputDirectory();
            pLVar7 = (LoginManager*)local_40.operator->();
            rt7Core = (RT7Core*)pLVar7->GetAuthWrapper();
            this_00 = (Js5HTTPQueueRequest*)local_40.operator->();
            iVar9 = (int)local_68;
            iVar1 = (int)local_48;
            fontHelpers = (FontHelpers*)this_00->GetPriority();
            local_70->Draw((iVar8 - local_58[0]._0_4_) + 2, iVar11 + iVar10 + 2,
                           (iVar8 - local_58[0]._0_4_) + iVar9 - 2, iVar1 + iVar11 + iVar10 - 4, *local_60, rt7Core,
                           fontHelpers);
        }
    }

    // 0x100a46f40
    unsigned long EditField::GetControlSize(int& arg1, int& arg2) {
        Tweaky* pTVar3;
        unsigned long uVar4;
        StringView local_58;
        int local_44;
        int local_2c;

        shared_ptr local_40 = field_104.lock();
        if (shared_ptr::operator_cast_to_bool(&local_40)) {
            pTVar3 = (Tweaky*)local_40.operator->();
            local_58.StringView<eastl::fixed_string<char, 40>>(field_48);
            if (pTVar3->GetTextSize(local_2c, local_44, &local_58, -1)) {
                pTVar3 = (Tweaky*)local_40.operator->();
                field_40 = pTVar3->GetMinControlHeight() + 4;
                field_36 = local_2c + field_212 + 2;
            }
        }
        if (((int)field_40 < 1) && ((int)field_36 < 1)) {
            uVar4 = 0;
        } else {
            arg1 = field_36;
            arg2 = field_40 + 2;
            uVar4 = (((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)1);
        }
        return uVar4 & 4294967295;
    }

    // 0x100a47020
    uint64_t EditField::OnClick(float arg1, float arg2, bool arg3) {
        uint8_t* this_00;
        unsigned int uVar1;
        long lVar2;
        int iVar4;
        LoginManager* this_01;
        shared_ptr<graphics::Font>* font;
        uint64_t in_register_00000031;
        TextProperties local_80;
        StringView local_58;
        shared_ptr local_48;
        char* local_30;
        TextFlags local_28;

        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg3) != 0) {
            SetFocus();
            local_48 = field_104.lock();
            if (shared_ptr::operator_cast_to_bool(&local_48) != '\0') {
                this_01 = (LoginManager*)local_48.operator->();
                font = (shared_ptr<graphics::Font>*)this_01->GetDevCredentialsOutputDirectory();
                local_30 = (char*)(((uint64_t)local_30._4_4_ << 32) | (uint32_t)1);
                local_28 = graphics::TextFlags(&local_30);
                local_80 = graphics::TextProperties(*font, local_28[0]);
                this_00 = field_248;
                lVar2 = field_144;
                uVar1 = field_212;
                iVar4 = this_00->GetX();
                ((Js5HTTPQueueRequest*)local_48.operator->())->GetPriority();
                local_30 = (char*)this_00->GetText();
                local_58.StringView<char const*>(local_30);
                iVar4 = graphics::FontHelpers::PredictCharAtPosMultiline(
                    &local_58, nullptr, ((int)arg1 - (int)lVar2) + uVar1 + iVar4, 0, local_80);
                this_00->SetPos(iVar4);
            }
        }
        return 1;
    }

    // 0x100a471d0
    uint8_t EditField::HandleChar(int arg1) {
        enable_shared_from_this<PathingEntity> local_60;
        Event local_48;

        uint8_t* this_00 = field_248;
        auto pcVar1 = this_00->GetText();
        eastl::string local_a0(pcVar1);
        long lVar2 = std::hash<eastl::string>::operator()(&local_80, &local_a0);
        this_00->HandleChar(arg1);
        pcVar1 = (char*)this_00->GetText();
        local_80 = eastl::string(pcVar1);
        long lVar3 = std::hash<eastl::string>::operator()((hash<eastl::string>*)&local_48);
        if (lVar2 != lVar3) {
            local_60.shared_from_this();
            local_48 = Event(local_60, 3);
            DoCallback(local_48);
        }
        return 1;
    }

    // 0x100a47360
    uint8_t EditField::HandleKeyDown(int arg1) {
        char* str;
        long lVar1;
        long lVar2;
        enable_shared_from_this<PathingEntity> local_78;
        Event local_68;
        Event local_48;

        if (arg1 == 36) {
            local_48.shared_from_this();
            local_68 = Event(local_48, 2);
            DoCallback(local_68);
        } else {
            str = (char*)field_248->GetText();
            local_68 = eastl::string(str);
            lVar1 = std::hash<eastl::string>::operator()((hash<eastl::string>*)&local_48, (eastl::string*)&local_68);
            field_248->HandleKeyDown(arg1);
            lVar2 = std::hash<eastl::string>::operator()((hash<eastl::string>*)&local_48, (eastl::string*)&local_68);
            if (lVar1 != lVar2) {
                local_78.shared_from_this();
                local_48 = Event(local_78, 3);
                DoCallback(local_48);
            }
        }
        return 1;
    }

    // 0x100a474d0
    void EditField::ResetToDefault() {
        StringView local_60;
        Event local_50;
        enable_shared_from_this<PathingEntity> local_38;

        long lVar1 = field_248->GetText();
        long lVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (lVar1 != lVar2) {
            local_60.StringView<eastl::fixed_string<char, 40>>(field_216);
            field_248->SetText(&local_60);
            local_38.shared_from_this();
            local_50 = Event(local_38, 3);
            DoCallback(local_50);
        }
    }

    // 0x100a475e0
    void EditField::SaveSettings(TweakSettingsValue& tweakSettingsValue) {
        tweakSettingsValue.assign((char*)field_248->GetText());
    }

    // 0x100a47610
    uint8_t EditField::LoadSettings(const TweakSettingsValue& tweakSettingsValue) {
        value_type* value_type;
        StringView local_60;
        Event local_50;
        enable_shared_from_this<PathingEntity> local_38;

        value_type = (value_type*)field_248->GetText();
        if (*value_type != tweakSettingsValue) {
            local_60.StringView<eastl::fixed_string<char, 40>>(tweakSettingsValue);
            field_248->SetText(&local_60);
            local_38.shared_from_this();
            local_50 = Event(local_38, 3);
            DoCallback(local_50);
        }
        return 1;
    }

} // namespace jag::tweak
