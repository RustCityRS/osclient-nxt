// libs/tweaky/Tweaky_CheckBox.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.tweaky

#include "Tweaky_CheckBox.h"

namespace jag::tweak {
    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    CheckBox::OnMouseOver(float, float);

    // 0x100a3ff00, 336 bytes, placed by class name and debug map
    // CheckBox::DrawTick(int, int)
    void CheckBox::DrawTick(int param_1, int param_2) {
        Tweaky* pTVar1;
        int iVar3;
        int iVar4;
        shared_ptr local_38;

        weak_ptr<oldscape::rs2lib::IfType>::lock();
        if (shared_ptr::operator_cast_to_bool(&local_38)) {
            SetColour(1886417151, field_208);
            pTVar1 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_38);
            iVar3 = field_40 + -5;
            pTVar1->FillRect(param_1 + 1, param_2 + 2, iVar3, iVar3);
            pTVar1 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_38);
            iVar3 = field_40 + -4;
            pTVar1->DrawRect(param_1, param_2 + 1, iVar3, iVar3, true);
            pTVar1 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_38);
            iVar3 = field_40 + -7;
            pTVar1->FillRect(param_1 + 3, param_2 + 4, iVar3, iVar3);
            if (field_211 != 0) {
                SetColour(4294967295, false);
                iVar3 = field_40;
                iVar4 = iVar3 + 3;
                if (-1 < iVar3) {
                    iVar4 = iVar3;
                }
                pTVar1 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_38);
                pTVar1->FillRect(param_1 + (iVar4 >> 2) + -1, (iVar4 >> 2) + param_2, iVar3 / 2, iVar3 / 2);
            }
        }
        local_38.~shared_ptr();
    }

    // 0x100a40050, 224 bytes, placed by class name and debug map
    // CheckBox::OnClick(float, float, bool)
    undefined1 CheckBox::OnClick(float param_1, float param_2, bool param_3) {
        undefined7 in_register_00000031;
        Event local_48;
        enable_shared_from_this<PathingEntity> local_30[16];

        if ((int)CONCAT71(in_register_00000031, param_3) == 0) {
            field_211 = field_211 ^ 1;
            local_30->shared_from_this();
            new (&local_48) Event(local_30, 2);
            DoCallback(&local_48);
            local_48.~LRUHashCacheWrapper();
            local_30->~shared_ptr();
            local_30->shared_from_this();
            new (&local_48) Event(local_30, 3);
            DoCallback(&local_48);
            local_48.~LRUHashCacheWrapper();
            local_30->~shared_ptr();
        } else {
            Control::SetFocus();
        }
        return 1;
    }

    // 0x100a40130, 224 bytes, placed by class name and debug map
    // CheckBox::ResetToDefault()
    void CheckBox::ResetToDefault() {
        Event local_48;
        enable_shared_from_this<PathingEntity> local_30[16];

        if (field_211 != field_212) {
            field_211 = field_212;
            local_30->shared_from_this();
            new (&local_48) Event(local_30, 2);
            DoCallback(&local_48);
            local_48.~LRUHashCacheWrapper();
            local_30->~shared_ptr();
            local_30->shared_from_this();
            new (&local_48) Event(local_30, 3);
            DoCallback(&local_48);
            local_48.~LRUHashCacheWrapper();
            local_30->~shared_ptr();
        }
    }

    // 0x100a514a0: the linker folded this into Button::~Button(), which has identical code
    CheckBox::~CheckBox();

} // namespace jag::tweak
