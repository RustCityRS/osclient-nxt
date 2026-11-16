// libs/tweaky/Tweaky_Button.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.tweaky

#include "Tweaky_Button.h"

namespace jag::tweak {
    // 0x100a3f7c0
    void Button::Draw(int arg1, int arg2) {
        bool bVar1;
        int iVar2;
        int iVar4;
        int arg1_00;
        Tweaky* pTVar5;

        int iVar7 = field_24 + arg1;
        int iVar6 = field_28 + arg2;
        shared_ptr local_40(iVar7, iVar6, field_36 + iVar7, field_40 + iVar6);
        field_136 = local_40._0_4_;
        field_140 = local_40._4_4_;
        *(long*)&field_144 = local_40.field_8;
        local_40 = field_104.lock();
        if (shared_ptr::operator_cast_to_bool(&local_40) != '\0') {
            SetColour(1886417151, field_208);
            pTVar5 = (Tweaky*)local_40.operator->();
            pTVar5->FillRect(field_24 + arg1, field_28 + arg2, field_36, field_40);
            pTVar5 = (Tweaky*)local_40.operator->();
            pTVar5->DrawRect(field_24 + arg1, field_28 + arg2, field_36, field_40, field_211);
            SetColour(3772834047, field_208);
            iVar6 = field_24;
            iVar7 = field_216;
            iVar2 = field_28;
            pTVar5 = (Tweaky*)local_40.operator->();
            iVar4 = pTVar5->GetTextCenterYOffset(field_40);
            bVar1 = field_211;
            arg1_00 = local_40.operator->();
            Tweaky::TextDraw<eastl::string>(
                arg1_00, arg1 + iVar6 + iVar7 + (unsigned int)bVar1,
                *((fixed_string<char, _16>*)(unsigned long)(arg2 + iVar2 + iVar4 + (unsigned int)bVar1)),
                (int)this + 48, field_36, (uint8_t)field_40);
        }
    }

    // 0x100a3fb40
    uint64_t Button::OnClick(float arg1, float arg2, bool arg3) {
        uint64_t in_register_00000031;
        enable_shared_from_this<PathingEntity> local_40;
        Event local_30;

        field_211 = arg3;
        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg3) == 0) {
            local_40.shared_from_this();
            local_30 = Event(local_40, 2);
            DoCallback(local_30);
            local_30 = field_104.lock();
            if (local_30.operator_cast_to_bool() != '\0') {
                ((Tweaky*)local_30.operator->())->ClearFocus();
            }
        } else {
            SetFocus();
        }
        return 1;
    }

    // 0x100a3fda0
    uint8_t Button::OnMouseMove(float arg1, float arg2) {
        field_211 = (bool)BoundsCheck(arg1, arg2);
        return 1;
    }

    // 0x100a3fdc0
    unsigned long Button::GetControlSize(int& arg1, int& arg2) {
        int iVar2;
        Tweaky* pTVar3;
        unsigned long uVar4;
        StringView local_60;
        int local_4c;
        int local_34;

        shared_ptr local_48 = field_104.lock();
        if (shared_ptr::operator_cast_to_bool(&local_48)) {
            if (shared_ptr::operator_cast_to_bool(&local_48)) {
                pTVar3 = (Tweaky*)local_48.operator->();
                local_60.StringView<eastl::fixed_string<char, 40>>(field_48);
                if (pTVar3->GetTextSize(local_34, local_4c, &local_60, -1)) {
                    iVar2 = field_212;
                    if (iVar2 == -1) {
                        field_36 = local_34 + 8;
                        iVar2 = 2;
                    } else {
                        field_36 = iVar2;
                        iVar2 = (iVar2 - local_34) / 2;
                    }
                    field_216 = iVar2;
                    pTVar3 = (Tweaky*)local_48.operator->();
                    iVar2 = pTVar3->GetMinControlHeight();
                    field_40 = iVar2 + 4;
                }
            }
            if ((0 < field_36) && (0 < (int)field_40)) {
                arg1 = field_36;
                arg2 = field_40;
                uVar4 = (((uint64_t)((int64_t)((unsigned long)&local_48 >> 8)) << 8) | (uint8_t)1);
                goto LAB_100a3fead;
            }
        }
        uVar4 = 0;
    LAB_100a3fead:
        return uVar4 & 4294967295;
    }

    // 0x100a3fee0
    void Button::OnFocusChanged(bool arg1) {
        uint32_t in_register_00000031;

        if ((((uint32_t)in_register_00000031 << 8) | (uint8_t)arg1) == 0) {
            field_211 = false;
        }
    }

} // namespace jag::tweak
