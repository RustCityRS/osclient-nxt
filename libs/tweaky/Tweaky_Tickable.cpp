// libs/tweaky/Tweaky_Tickable.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.tweaky

#include "Tweaky_Tickable.h"

namespace jag::tweak {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    Tickable::ResetToDefault();

    // 0x100a4ffa0, 320 bytes, placed by class name and debug map
    // Tickable::Draw(int, int)
    void Tickable::Draw(int param_1, int param_2) {
        uint uVar1;
        Tweaky* pTVar3;
        int iVar4;
        int iVar5;
        GridRect local_48;
        int local_34;

        iVar5 = field_24 + param_1;
        iVar4 = field_28 + param_2;
        new (&local_48) oldscape::dash3d::GridRect(iVar5, iVar4, field_36 + iVar5, field_40 + iVar4);
        field_136 = local_48.field_0;
        field_140 = local_48.field_4;
        field_144 = local_48.field_8;
        field_148 = local_48.field_12;
        weak_ptr<oldscape::rs2lib::IfType>::lock();
        if (local_48.operator_cast_to_bool()) {
            if (field_208 == '\0') {
                SetColour(3772834047, false);
            } else {
                SetColour(4294967295, false);
            }
            iVar4 = field_24;
            uVar1 = field_40;
            iVar5 = field_28;
            pTVar3 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_48);
            local_34 = pTVar3->GetTextCenterYOffset(field_40);
            pTVar3 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_48);
            Tweaky::TextDraw<eastl::string>(pTVar3, iVar4 + param_1 + uVar1, iVar5 + param_2 + local_34,
                                            (basic_string*)&field_48, -1, -1, false);
            (*(code*)field_0[30])(this, param_1 + field_24, param_2 + field_28);
        }
        local_48.~shared_ptr();
    }

    // 0x100a500e0, 208 bytes, placed by class name and debug map
    // Tickable::GetControlSize(int&, int&)
    ulong Tickable::GetControlSize(int* param_1, int* param_2) {
        uint uVar3;
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
                uVar3 = pTVar4->GetMinControlHeight();
                field_40 = uVar3;
                field_36 = uVar3 + local_2c;
            }
        }
        if (((int)field_40 < 1) && ((int)field_36 < 1)) {
            uVar5 = 0;
        } else {
            *param_1 = field_36;
            *param_2 = field_40;
            uVar5 = CONCAT71((int7)((ulong)this >> 8), 1);
        }
        local_40.~shared_ptr();
        return uVar5 & 4294967295;
    }

    // 0x100a501b0, 48 bytes, placed by class name and debug map
    // Tickable::SaveSettings(TweakSettingsValue&)
    void Tickable::SaveSettings(TweakSettingsValue* param_1) {
        char* pcVar1;

        pcVar1 = "1";
        if (m_ticked == false) {
            pcVar1 = "0";
        }
        param_1->assign(pcVar1);
    }

    // 0x100a501e0, 160 bytes, placed by class name and debug map
    // Tickable::LoadSettings(TweakSettingsValue const&)
    undefined8 Tickable::LoadSettings(TweakSettingsValue* param_1) {
        bool bVar1;
        bool bVar2;
        undefined7 extraout_var;
        undefined7 extraout_var_00;
        undefined7 uVar3;
        Event local_40;
        enable_shared_from_this<PathingEntity> local_28[16];

        bVar1 = m_ticked;
        bVar2 = eastl::operator==((basic_string*)param_1, (value_type*)&DAT_100e33d78);
        m_ticked = bVar2;
        uVar3 = extraout_var;
        if (bVar1 != bVar2) {
            local_28->shared_from_this();
            new (&local_40) Event(local_28, 3);
            DoCallback(&local_40);
            local_40.~LRUHashCacheWrapper();
            local_28->~shared_ptr();
            uVar3 = extraout_var_00;
        }
        return CONCAT71(uVar3, 1);
    }

    // 0x100a52a40: the linker folded this into Button::~Button(), which has identical code
    Tickable::~Tickable();

    // 0x100a54340, 48 bytes, placed by class name and neighbouring functions
    // Tweaky::AddGlobalControls()::$_0::operator()(Event const&) const
    /* Tweaky::AddGlobalControls()::$_0::TEMPNAMEPLACEHOLDERVALUE(Event const&)
   const */

    void Tweaky::AddGlobalControls()::$_0::operator()(Event* param_1) {
        long* plVar1;

        if (param_1->field_16 == 2) {
            plVar1 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)(*(long*)this + 16));
            (**(code**)(*plVar1 + 96))(plVar1);
        }
    }

    // 0x100a54c60, 48 bytes, placed by class name and neighbouring functions
    // Tweaky::AddGlobalControls()::$_1::operator()(Event const&) const
    /* Tweaky::AddGlobalControls()::$_1::TEMPNAMEPLACEHOLDERVALUE(Event const&)
   const */

    void Tweaky::AddGlobalControls()::$_1::operator()(Event* param_1) {
        long* plVar1;

        if (param_1->field_16 == 2) {
            plVar1 = (long*)shared_ptr<Container>::operator->((shared_ptr<Container>*)(*(long*)this + 16));
            (**(code**)(*plVar1 + 104))(plVar1);
        }
    }

    // 0x100a55aa0, 80 bytes, placed by class name and neighbouring functions
    // Tweaky::AddCheckBox(char const*, bool&)::$_2::operator()(Event const&) const
    /* Tweaky::AddCheckBox(char const*,
   bool&)::$_2::TEMPNAMEPLACEHOLDERVALUE(Event const&) const */

    void Tweaky::AddCheckBox(char const*, bool&)::$_2::operator()(Event* param_1) {
        undefined1 uVar1;
        long* plVar2;

        if (param_1->field_16 == 3) {
            plVar2 = (long*)shared_ptr<Control>::operator->((shared_ptr<Control>*)param_1);
            uVar1 = (**(code**)(*plVar2 + 120))(plVar2);
            **(undefined1**)this = uVar1;
        } else if (param_1->field_16 == 1) {
            plVar2 = (long*)shared_ptr<Control>::operator->((shared_ptr<Control>*)param_1);
            (**(code**)(*plVar2 + 128))(plVar2, **(undefined1**)this);
        }
    }

    // 0x100a56800, 80 bytes, placed by class name and neighbouring functions
    // Tweaky::AddSlider(char const*, float, float, float, int*)::$_3::operator()(Event const&) const
    /* Tweaky::AddSlider(char const*, float, float, float,
   int*)::$_3::TEMPNAMEPLACEHOLDERVALUE(Event const&) const */

    void Tweaky::AddSlider(char const*, float, float, float, int*)::$_3::operator()(Event* param_1) {
        Slider* this_00;
        float fVar1;

        this_00 = (Slider*)param_1->end();
        if (param_1->field_16 == 3) {
            fVar1 = (float)this_00->GetCurrentValue();
            **(int**)this = (int)fVar1;
        } else if (param_1->field_16 == 1) {
            Slider::SetSlider<float>(this_00, (float)**(int**)this);
        }
    }

    // 0x100a57140, 80 bytes, placed by class name and neighbouring functions
    // Tweaky::AddSlider(char const*, float, float, float, unsigned int*)::$_4::operator()(Event const&) const
    /* Tweaky::AddSlider(char const*, float, float, float, unsigned
   int*)::$_4::TEMPNAMEPLACEHOLDERVALUE(Event const&) const */

    void Tweaky::AddSlider(char const*, float, float, float, unsigned int*)::$_4::operator()(Event* param_1) {
        Slider* this_00;
        float fVar1;

        this_00 = (Slider*)param_1->end();
        if (param_1->field_16 == 3) {
            fVar1 = (float)this_00->GetCurrentValue();
            **(undefined4**)this = (int)(long)fVar1;
        } else if (param_1->field_16 == 1) {
            Slider::SetSlider<float>(this_00, (float)**(uint**)this);
        }
    }

    // 0x100a57a80, 80 bytes, placed by class name and neighbouring functions
    // Tweaky::AddSlider(char const*, float, float, float, float*)::$_5::operator()(Event const&) const
    /* Tweaky::AddSlider(char const*, float, float, float,
   float*)::$_5::TEMPNAMEPLACEHOLDERVALUE(Event const&) const */

    void Tweaky::AddSlider(char const*, float, float, float, float*)::$_5::operator()(Event* param_1) {
        Slider* this_00;
        undefined4 uVar1;

        this_00 = (Slider*)param_1->end();
        if (param_1->field_16 == 3) {
            uVar1 = this_00->GetCurrentValue();
            **(undefined4**)this = uVar1;
        } else if (param_1->field_16 == 1) {
            Slider::SetSlider<float>(this_00, **(float**)this);
        }
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    Tickable::~Tickable();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    Tickable::~Tickable();

} // namespace jag::tweak
