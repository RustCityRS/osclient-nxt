// libs/tweaky/Tweaky_Tickable.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.tweaky

#include "Tweaky_Tickable.h"

namespace jag::tweak {
    // 0x100009e70: Tickable::ResetToDefault() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100a4ffa0
    void Tickable::Draw(int arg1, int arg2) {
        int iVar4 = field_24 + arg1;
        int iVar3 = field_28 + arg2;
        GridRect local_48(iVar4, iVar3, field_36 + iVar4, field_40 + iVar3);
        field_136 = local_48.field_0;
        field_140 = local_48.field_4;
        field_144 = local_48.field_8;
        field_148 = local_48.field_12;
        local_48 = field_104.lock();
        if (local_48.operator_cast_to_bool() == '\0') {
            return;
        }
        if (field_208 == false) {
            SetColour(3772834047, false);
        } else {
            SetColour(4294967295, false);
        }
        iVar3 = field_24;
        unsigned int uVar1 = field_40;
        iVar4 = field_28;
        int local_34 = ((Tweaky*)local_48.operator->())->GetTextCenterYOffset(field_40);
        int arg1_00 = local_48.operator->();
        Tweaky::TextDraw<eastl::string>(
            arg1_00, iVar3 + arg1 + uVar1,
            *((fixed_string<char, _16>*)(unsigned long)(unsigned int)(iVar4 + arg2 + local_34)), (int)this + 48, -1,
            true);
        (*this->_vptr[1]._dtor)(this, (unsigned long)(unsigned int)(arg1 + field_24),
                                (unsigned long)(unsigned int)(arg2 + field_28));
    }

    // 0x100a500e0
    unsigned long Tickable::GetControlSize(int& arg1, int& arg2) {
        unsigned int uVar2;
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
                uVar2 = pTVar3->GetMinControlHeight();
                field_40 = uVar2;
                field_36 = uVar2 + local_2c;
            }
        }
        if (((int)field_40 < 1) && ((int)field_36 < 1)) {
            uVar4 = 0;
        } else {
            arg1 = field_36;
            arg2 = field_40;
            uVar4 = (((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)1);
        }
        return uVar4 & 4294967295;
    }

    // 0x100a501b0
    void Tickable::SaveSettings(TweakSettingsValue& tweakSettingsValue) {
        char* str = "1";
        if (m_ticked == false) {
            str = "0";
        }
        tweakSettingsValue.assign(str);
    }

    // 0x100a501e0
    uint64_t Tickable::LoadSettings(const TweakSettingsValue& tweakSettingsValue) {
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        Event local_40;
        enable_shared_from_this<PathingEntity> local_28;

        bool bVar1 = m_ticked;
        bool bVar2 = tweakSettingsValue == DAT_100e33d78;
        m_ticked = bVar2;
        uint64_t uVar3 = extraout_var;
        if (bVar1 != bVar2) {
            local_28.shared_from_this();
            local_40 = Event(local_28, 3);
            DoCallback(local_40);
            uVar3 = extraout_var_00;
        }
        return 1;
    }

    // 0x100a52a40: Tickable::~Tickable() has the same machine code as Button::~Button()

    // 0x100a54340
    void Tweaky::AddGlobalControls()::$_0::operator()(const Event& event) const {
        long* plVar1;

        if (event.field_16 == 2) {
            plVar1 = (long*)(*((field_0 + 16))).operator->();
            (**(void (**)(...))(*plVar1 + 96))(plVar1);
        }
    }

    // 0x100a54c60
    void Tweaky::AddGlobalControls()::$_1::operator()(const Event& event) const {
        long* plVar1;

        if (event.field_16 == 2) {
            plVar1 = (long*)(*((field_0 + 16))).operator->();
            (**(void (**)(...))(*plVar1 + 104))(plVar1);
        }
    }

    // 0x100a55aa0
    void Tweaky::AddCheckBox(char const*, bool&)::$_2::operator()(const Event& event) const {
        uint8_t uVar1;
        long* plVar2;

        if (event.field_16 == 3) {
            plVar2 = (long*)event.operator->();
            uVar1 = (**(void (**)(...))(*plVar2 + 120))(plVar2);
            **(uint8_t**)this = uVar1;
        } else if (event.field_16 == 1) {
            plVar2 = (long*)event.operator->();
            (**(void (**)(...))(*plVar2 + 128))(plVar2, **(uint8_t**)this);
        }
    }

    // 0x100a56800
    void Tweaky::AddSlider(char const*, float, float, float, int*)::$_3::operator()(const Event& event) const {
        float fVar1;

        auto this_00 = event.end();
        if (event.field_16 == 3) {
            fVar1 = (float)this_00->GetCurrentValue();
            **(int**)this = (int)fVar1;
        } else if (event.field_16 == 1) {
            this_00->SetSlider<float>((float)**(int**)this);
        }
    }

    // 0x100a57140
    void Tweaky::AddSlider(char const*, float, float, float, unsigned int*)::$_4::operator()(const Event& event) const {
        float fVar1;

        auto this_00 = event.end();
        if (event.field_16 == 3) {
            fVar1 = (float)this_00->GetCurrentValue();
            **(uint32_t**)this = (int)(long)fVar1;
        } else if (event.field_16 == 1) {
            this_00->SetSlider<float>((float)**(unsigned int**)this);
        }
    }

    // 0x100a57a80
    void Tweaky::AddSlider(char const*, float, float, float, float*)::$_5::operator()(const Event& event) const {
        uint32_t uVar1;

        auto this_00 = event.end();
        if (event.field_16 == 3) {
            uVar1 = this_00->GetCurrentValue();
            **(uint32_t**)this = uVar1;
        } else if (event.field_16 == 1) {
            this_00->SetSlider<float>(**(float**)this);
        }
    }

} // namespace jag::tweak
