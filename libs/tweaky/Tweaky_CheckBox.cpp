// libs/tweaky/Tweaky_CheckBox.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.tweaky

#include "Tweaky_CheckBox.h"

namespace jag::tweak {
    // 0x10002d860: CheckBox::OnMouseOver(float, float) has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x100a3ff00
    void CheckBox::DrawTick(int arg1, int arg2) {
        Tweaky* pTVar2;
        int iVar3;
        int iVar4;

        shared_ptr local_38 = field_104.lock();
        if (shared_ptr::operator_cast_to_bool(&local_38) != '\0') {
            SetColour(1886417151, field_208);
            pTVar2 = (Tweaky*)local_38.operator->();
            iVar3 = field_40 - 5;
            pTVar2->FillRect(arg1 + 1, arg2 + 2, iVar3, iVar3);
            pTVar2 = (Tweaky*)local_38.operator->();
            iVar3 = field_40 - 4;
            pTVar2->DrawRect(arg1, arg2 + 1, iVar3, iVar3, true);
            pTVar2 = (Tweaky*)local_38.operator->();
            iVar3 = field_40 - 7;
            pTVar2->FillRect(arg1 + 3, arg2 + 4, iVar3, iVar3);
            if (field_211 != false) {
                SetColour(4294967295, false);
                iVar3 = field_40;
                iVar4 = iVar3 + 3;
                if (-1 < iVar3) {
                    iVar4 = iVar3;
                }
                pTVar2 = (Tweaky*)local_38.operator->();
                pTVar2->FillRect(arg1 + (iVar4 >> 2) - 1, (iVar4 >> 2) + arg2, iVar3 / 2, iVar3 / 2);
            }
        }
    }

    // 0x100a40050
    uint8_t CheckBox::OnClick(float arg1, float arg2, bool arg3) {
        uint64_t in_register_00000031;
        Event local_48;
        enable_shared_from_this<PathingEntity> local_30;

        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg3) == 0) {
            field_211 = (bool)(field_211 ^ 1);
            local_30.shared_from_this();
            local_48 = Event(local_30, 2);
            DoCallback(local_48);
            local_30.shared_from_this();
            local_48 = Event(local_30, 3);
            DoCallback(local_48);
        } else {
            SetFocus();
        }
        return 1;
    }

    // 0x100a40130
    void CheckBox::ResetToDefault() {
        Event local_48;
        enable_shared_from_this<PathingEntity> local_30;

        if (field_211 != field_212) {
            field_211 = field_212;
            local_30.shared_from_this();
            local_48 = Event(local_30, 2);
            DoCallback(local_48);
            local_30.shared_from_this();
            local_48 = Event(local_30, 3);
            DoCallback(local_48);
        }
    }

    // 0x100a514a0: CheckBox::~CheckBox() has the same machine code as Button::~Button()

} // namespace jag::tweak
