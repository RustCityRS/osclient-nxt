// libs/tweaky/Tweaky_EditField.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.tweaky

#include "Tweaky_EditField.h"

namespace jag::tweak {
    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    EditField::OnMouseOver(float, float);

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    EditField::HasKeyboardNavigation() const;

    // 0x100a46c40, 720 bytes, placed by class name and debug map
    // EditField::Draw(int, int)
    void EditField::Draw(int param_1, int param_2) {
        int iVar1;
        ulong uVar2;
        bool bVar3;
        undefined4 uVar5;
        Tweaky* pTVar6;
        LoginManager* pLVar7;
        RT7Core* pRVar8;
        Js5HTTPQueueRequest* this_00;
        FontHelpers* pFVar9;
        int iVar10;
        int iVar11;
        shared_ptr* extraout_RDX;
        int iVar12;
        int iVar13;
        shared_ptr local_80;
        EditLine* local_70;
        ulong local_68;
        shared_ptr* local_60;
        int local_58[4];
        ulong local_48;
        shared_ptr local_40;

        iVar12 = field_24 + param_1;
        iVar10 = field_28 + param_2;
        new (&local_40) oldscape::dash3d::GridRect(iVar12, iVar10, field_36 + iVar12, field_40 + iVar10 + -2);
        field_136 = local_40._0_8_;
        field_144 = local_40.field_8;
        weak_ptr<oldscape::rs2lib::IfType>::lock();
        bVar3 = shared_ptr::operator_cast_to_bool(&local_40);
        if (bVar3) {
            iVar10 = field_28;
            pTVar6 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
            uVar5 = pTVar6->GetTextCenterYOffset(field_40);
            local_48 = CONCAT44(local_48._4_4_, uVar5);
            if (eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() ==
                '\0') {
                bVar3 = (bool)field_248->GetCursorShown();
                SetColour(3772834047, bVar3);
                pTVar6 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                Tweaky::TextDraw<eastl::string>(pTVar6, field_24 + param_1, iVar10 + param_2 + (int)local_48,
                                                (basic_string*)&field_48, -1, -1, false);
                iVar10 = (param_1 + field_24 + field_36) - field_212;
            } else {
                iVar10 = param_1 + field_24;
            }
            SetColour(1886417151, field_208);
            pTVar6 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
            pTVar6->FillRect(iVar10, field_28 + param_2, field_212 - 2, field_40 - 2);
            pTVar6 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
            pTVar6->DrawRect(iVar10, field_28 + param_2, field_212 - 2, field_40 - 2, true);
            shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
            local_58->GetFocus();
            local_48 = (ulong)(uint)param_2;
            local_80.shared_from_this();
            bVar3 = operator==((jag*)local_58, &local_80, extraout_RDX);
            local_70 = (EditLine*)field_248;
            (field_248, bVar3)->SetCursorShown();
            local_80.~shared_ptr();
            local_58->~shared_ptr();
            pTVar6 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
            uVar2 = local_48;
            pTVar6->GetScroll(local_58, (int*)&local_80);
            iVar13 = (int)uVar2 - local_80._0_4_;
            iVar12 = field_28;
            local_48 = (ulong)field_40;
            local_68 = (ulong)field_212;
            pLVar7 = (LoginManager*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
            local_60 = (shared_ptr*)pLVar7->GetDevCredentialsOutputDirectory();
            pLVar7 = (LoginManager*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
            pRVar8 = (RT7Core*)pLVar7->GetAuthWrapper();
            this_00 = (Js5HTTPQueueRequest*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
            iVar11 = (int)local_68;
            iVar1 = (int)local_48;
            pFVar9 = (FontHelpers*)this_00->GetPriority();
            local_70->Draw((iVar10 - local_58[0]) + 2, iVar13 + iVar12 + 2, (iVar10 - local_58[0]) + iVar11 + -2,
                           iVar1 + iVar13 + iVar12 + -4, local_60, pRVar8, pFVar9);
        }
        local_40.~shared_ptr();
    }

    // 0x100a46f40, 224 bytes, placed by class name and debug map
    // EditField::GetControlSize(int&, int&)
    ulong EditField::GetControlSize(int* param_1, int* param_2) {
        Tweaky* pTVar4;
        ulong uVar5;
        int in_R9D;
        StringView SVar6;
        StringView local_58;
        int local_44;
        shared_ptr local_40;
        int local_2c;

        weak_ptr<oldscape::rs2lib::IfType>::lock();
        if (shared_ptr::operator_cast_to_bool(&local_40)) {
            pTVar4 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_58,
                                                                                          (fixed_string*)&field_48);
            SVar6.field_8 = (uchar*)4294967295;
            SVar6.field_0 = (ulong)&local_58;
            if (pTVar4->GetTextSize(&local_2c, &local_44, SVar6, in_R9D) != '\0') {
                pTVar4 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                field_40 = pTVar4->GetMinControlHeight() + 4;
                field_36 = local_2c + field_212 + 2;
            }
        }
        if (((int)field_40 < 1) && ((int)field_36 < 1)) {
            uVar5 = 0;
        } else {
            *param_1 = field_36;
            *param_2 = field_40 + 2;
            uVar5 = CONCAT71((int7)((ulong)this >> 8), 1);
        }
        local_40.~shared_ptr();
        return uVar5 & 4294967295;
    }

    // 0x100a47020, 288 bytes, placed by class name and debug map
    // EditField::OnClick(float, float, bool)
    undefined4 EditField::OnClick(float param_1, float param_2, bool param_3) {
        undefined1* this_00;
        uint uVar1;
        LoginManager* this_01;
        shared_ptr* psVar2;
        Js5HTTPQueueRequest* this_02;
        long lVar3;
        int iVar5;
        undefined7 in_register_00000031;
        TextProperties* in_R9;
        StringView SVar7;
        TextFlags in_stack_ffffffffffffff78;
        TextProperties local_80;
        StringView local_58;
        shared_ptr local_48;
        char* local_30;
        TextFlags local_28[8];

        if ((int)CONCAT71(in_register_00000031, param_3) != 0) {
            Control::SetFocus();
            weak_ptr<oldscape::rs2lib::IfType>::lock();
            if (shared_ptr::operator_cast_to_bool(&local_48)) {
                this_01 = (LoginManager*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_48);
                psVar2 = (shared_ptr*)this_01->GetDevCredentialsOutputDirectory();
                local_30 = (char*)CONCAT44(local_30._4_4_, 1);
                graphics::TextFlags::TextFlags(local_28, &local_30, 1);
                new (&local_80) graphics::TextProperties(psVar2, in_stack_ffffffffffffff78);
                this_00 = field_248;
                lVar3 = field_144;
                uVar1 = field_212;
                iVar5 = this_00->GetX();
                this_02 = (Js5HTTPQueueRequest*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_48);
                this_02->GetPriority();
                local_30 = (char*)this_00->GetText();
                StringView::StringView<char const*>(&local_58, &local_30);
                SVar7.field_8 = (uchar*)0;
                SVar7.field_0 = (ulong)&local_58;
                iVar5 = graphics::FontHelpers::PredictCharAtPosMultiline(
                    SVar7, (int*)(ulong)(((int)param_1 - (int)lVar3) + uVar1 + iVar5), 0, (int)&local_80, in_R9);
                this_00->SetPos(iVar5);
            }
            local_48.~shared_ptr();
        }
        return 1;
    }

    // 0x100a471d0, 352 bytes, placed by class name and debug map
    // EditField::HandleChar(int)
    undefined1 EditField::HandleChar(int param_1) {
        undefined1* this_00;
        char* pcVar1;
        long lVar2;
        long lVar3;
        eastl::string local_a0[32];
        allocator local_80[32];
        enable_shared_from_this<PathingEntity> local_60[16];
        Event local_48;

        this_00 = field_248;
        pcVar1 = (char*)this_00->GetText();
        eastl::allocator::allocator(local_80, "EASTL basic_string");
        eastl::string::basic_string(local_a0, pcVar1, local_80);
        lVar2 = std::hash<eastl::string>::operator()((hash<eastl::string>*)local_80, (basic_string*)local_a0);
        this_00->HandleChar(param_1);
        pcVar1 = (char*)this_00->GetText();
        new (&local_48) eastl::allocator("EASTL basic_string");
        new (local_80) eastl::string(pcVar1, (allocator*)&local_48);
        lVar3 = std::hash<eastl::string>::operator()((hash<eastl::string>*)&local_48, (basic_string*)local_80);
        if (lVar2 != lVar3) {
            local_60->shared_from_this();
            new (&local_48) Event(local_60, 3);
            ((EditField*)this)->DoCallback(&local_48);
            local_48.~LRUHashCacheWrapper();
            local_60->~shared_ptr();
        }
        local_80->~basic_string();
        eastl::string::~basic_string(local_a0);
        return 1;
    }

    // 0x100a47360, 368 bytes, placed by class name and debug map
    // EditField::HandleKeyDown(int)
    undefined1 EditField::HandleKeyDown(int param_1) {
        char* pcVar1;
        long lVar2;
        long lVar3;
        enable_shared_from_this<PathingEntity> local_78[16];
        Event local_68;
        Event local_48;

        if (param_1 == 36) {
            local_48.shared_from_this();
            new (&local_68) Event(&local_48, 2);
            DoCallback(&local_68);
            local_68.~LRUHashCacheWrapper();
            local_48.~shared_ptr();
        } else {
            pcVar1 = (char*)field_248->GetText();
            new (&local_48) eastl::allocator("EASTL basic_string");
            new (&local_68) eastl::string(pcVar1, (allocator*)&local_48);
            lVar2 = std::hash<eastl::string>::operator()((hash<eastl::string>*)&local_48, (basic_string*)&local_68);
            (field_248, param_1)->HandleKeyDown();
            lVar3 = std::hash<eastl::string>::operator()((hash<eastl::string>*)&local_48, (basic_string*)&local_68);
            if (lVar2 != lVar3) {
                local_78->shared_from_this();
                new (&local_48) Event(local_78, 3);
                DoCallback(&local_48);
                local_48.~LRUHashCacheWrapper();
                local_78->~shared_ptr();
            }
            local_68.~basic_string();
        }
        return 1;
    }

    // 0x100a474d0, 192 bytes, placed by class name and debug map
    // EditField::ResetToDefault()
    void EditField::ResetToDefault() {
        long lVar1;
        long lVar2;
        uchar* extraout_RDX;
        StringView SVar3;
        StringView local_60;
        Event local_50;
        enable_shared_from_this<PathingEntity> local_38[16];

        lVar1 = field_248->GetText();
        lVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        if (lVar1 != lVar2) {
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_60,
                                                                                          (fixed_string*)&field_216);
            SVar3.field_8 = extraout_RDX;
            SVar3.field_0 = (ulong)&local_60;
            (field_248, SVar3)->SetText();
            local_38->shared_from_this();
            new (&local_50) Event(local_38, 3);
            DoCallback(&local_50);
            local_50.~LRUHashCacheWrapper();
            local_38->~shared_ptr();
        }
    }

    // 0x100a475e0, 48 bytes, placed by class name and debug map
    // EditField::SaveSettings(TweakSettingsValue&)
    void EditField::SaveSettings(TweakSettingsValue* param_1) {
        char* pcVar1;

        pcVar1 = (char*)field_248->GetText();
        param_1->assign(pcVar1);
    }

    // 0x100a47610, 192 bytes, placed by class name and debug map
    // EditField::LoadSettings(TweakSettingsValue const&)
    undefined1 EditField::LoadSettings(TweakSettingsValue* param_1) {
        value_type* pvVar1;
        uchar* extraout_RDX;
        StringView SVar3;
        StringView local_60;
        Event local_50;
        enable_shared_from_this<PathingEntity> local_38[16];

        pvVar1 = (value_type*)field_248->GetText();
        if (eastl::operator!=(pvVar1, (basic_string*)param_1)) {
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_60,
                                                                                          (fixed_string*)param_1);
            SVar3.field_8 = extraout_RDX;
            SVar3.field_0 = (ulong)&local_60;
            (field_248, SVar3)->SetText();
            local_38->shared_from_this();
            new (&local_50) Event(local_38, 3);
            DoCallback(&local_50);
            local_50.~LRUHashCacheWrapper();
            local_38->~shared_ptr();
        }
        return 1;
    }

} // namespace jag::tweak
