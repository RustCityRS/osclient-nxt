// libs/tweaky/Tweaky_Button.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.tweaky

#include "Tweaky_Button.h"

namespace jag::tweak {
    // 0x100a3f7c0, 368 bytes, placed by class name and debug map
    // Button::Draw(int, int)
    void Button::Draw(int param_1, int param_2) {
        int iVar1;
        Tweaky* pTVar2;
        bool bVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        shared_ptr local_40;

        iVar6 = field_24 + param_1;
        iVar5 = field_28 + param_2;
        new (&local_40) oldscape::dash3d::GridRect(iVar6, iVar5, field_36 + iVar6, field_40 + iVar5);
        field_136 = local_40._0_4_;
        field_140 = local_40._4_4_;
        *(long*)&field_144 = local_40.field_8;
        weak_ptr<oldscape::rs2lib::IfType>::lock();
        bVar3 = shared_ptr::operator_cast_to_bool(&local_40);
        if (bVar3) {
            SetColour(1886417151, field_208);
            pTVar2 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
            pTVar2->FillRect(field_24 + param_1, field_28 + param_2, field_36, field_40);
            pTVar2 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
            pTVar2->DrawRect(field_24 + param_1, field_28 + param_2, field_36, field_40, field_211);
            SetColour(3772834047, field_208);
            iVar5 = field_24;
            iVar6 = field_216;
            iVar1 = field_28;
            pTVar2 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
            iVar4 = pTVar2->GetTextCenterYOffset(field_40);
            bVar3 = field_211;
            pTVar2 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
            Tweaky::TextDraw<eastl::string>(pTVar2, param_1 + iVar5 + iVar6 + (uint)bVar3,
                                            param_2 + iVar1 + iVar4 + (uint)bVar3, (basic_string*)&field_48, field_36,
                                            field_40, field_210);
        }
        local_40.~shared_ptr();
    }

    // 0x100a3fb40, 224 bytes, placed by class name
    // Button::OnClick(float, float, bool)
    undefined1 Button::OnClick(float param_1, float param_2, bool param_3) {
        Tweaky* this_00;
        undefined7 in_register_00000031;
        enable_shared_from_this<PathingEntity> local_40[16];
        Event local_30;

        field_211 = param_3;
        if ((int)CONCAT71(in_register_00000031, param_3) == 0) {
            local_40->shared_from_this();
            new (&local_30) Event(local_40, 2);
            DoCallback(&local_30);
            local_30.~LRUHashCacheWrapper();
            local_40->~shared_ptr();
            weak_ptr<oldscape::rs2lib::IfType>::lock();
            if (local_30.operator_cast_to_bool()) {
                this_00 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_30);
                this_00->ClearFocus();
            }
            local_30.~shared_ptr();
        } else {
            Control::SetFocus();
        }
        return 1;
    }

    // 0x100a3fda0, 32 bytes, placed by class name
    // Button::OnMouseMove(float, float)
    undefined1 Button::OnMouseMove(float param_1, float param_2) {
        field_211 = (bool)BoundsCheck(param_1, param_2);
        return 1;
    }

    // 0x100a3fdc0, 288 bytes, placed by class name
    // Button::GetControlSize(int&, int&)
    ulong Button::GetControlSize(int* param_1, int* param_2) {
        bool bVar1;
        int iVar3;
        Tweaky* pTVar4;
        ulong uVar5;
        int in_R9D;
        StringView SVar6;
        StringView local_60;
        int local_4c;
        shared_ptr local_48;
        int local_34;

        weak_ptr<oldscape::rs2lib::IfType>::lock();
        bVar1 = shared_ptr::operator_cast_to_bool(&local_48);
        if (bVar1) {
            bVar1 = shared_ptr::operator_cast_to_bool(&local_48);
            if (bVar1) {
                pTVar4 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_48);
                StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_60,
                                                                                              (fixed_string*)&field_48);
                SVar6.field_8 = (uchar*)4294967295;
                SVar6.field_0 = (ulong)&local_60;
                if (pTVar4->GetTextSize(&local_34, &local_4c, SVar6, in_R9D) != '\0') {
                    iVar3 = field_212;
                    if (iVar3 == -1) {
                        field_36 = local_34 + 8;
                        iVar3 = 2;
                    } else {
                        field_36 = iVar3;
                        iVar3 = (iVar3 - local_34) / 2;
                    }
                    field_216 = iVar3;
                    pTVar4 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_48);
                    iVar3 = pTVar4->GetMinControlHeight();
                    field_40 = iVar3 + 4;
                }
            }
            if ((0 < field_36) && (0 < (int)field_40)) {
                *param_1 = field_36;
                *param_2 = field_40;
                uVar5 = CONCAT71((int7)((ulong)&local_48 >> 8), 1);
                goto LAB_100a3fead;
            }
        }
        uVar5 = 0;
    LAB_100a3fead:
        local_48.~shared_ptr();
        return uVar5 & 4294967295;
    }

    // 0x100a3fee0, 32 bytes, placed by class name
    // Button::OnFocusChanged(bool)
    void Button::OnFocusChanged(bool param_1) {
        undefined3 in_register_00000031;

        if (CONCAT31(in_register_00000031, param_1) == 0) {
            field_211 = false;
        }
    }

} // namespace jag::tweak
