// libs/tweaky/Tweaky_Enum.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.tweaky

#include "Tweaky_Enum.h"

namespace jag::tweak {
    // 0x100a476e0
    Enum::Enum(const char* str, const StringEnum* stringEnum, int* arg3) : Control(0, 0, 4, str) {

        new (&field_216) eastl::string(str);
        new (&field_248) eastl::string("Default size");
        field_280 = stringEnum;
        field_288 = false;
        field_296 = arg3;
        field_304 = 0;
        field_308 = 12;
        field_312 = 12;
        field_316 = 0;
        field_320 = 0;
        field_324 = 0;
        if (arg3 != nullptr) {
            field_304 = *arg3;
        }
        GetLargestName();
    }

    // 0x100a477f0
    void Enum::GetLargestName() {
        uint8_t* this_00;
        char* str;
        unsigned long uVar3;
        long lVar5;

        Enum* local_38 = this;
        auto this_01 = field_280->HeapBeginPtr();
        if (this_01 == (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)0) {
            LogAssert("pEnumEntries != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/tweaky/Tweaky_Enum.cpp",
                      142, nullptr);
        }
        eastl::string local_58;
        local_58.reserve(64);
        int iVar1 = local_38->field_280->GetPos();
        if (0 < iVar1) {
            this_00 = &local_38->field_248;
            lVar5 = 0;
            do {
                if (this_01->end() != 0) {
                    str = (char*)this_01->end();
                    eastl::string::assign(&local_58, str);
                    uVar3 = local_58.size();
                    if (this_00->size() < uVar3) {
                        *this_00 = &local_58;
                    }
                }
                lVar5 = lVar5 + 1;
                iVar1 = local_38->field_280->GetPos();
                this_01 = this_01 + 16;
            } while (lVar5 < iVar1);
        }
    }

    // 0x100a47980
    void Enum::Draw(int arg1, int arg2) {
        int iVar2;
        int iVar3;
        int iVar4;
        Tweaky* pTVar5;
        int* piVar6;
        shared_ptr<oldscape::dash3d::Decor> local_50;

        shared_ptr local_40(arg1, arg2, field_36 + arg1, field_40 + arg2);
        field_136 = local_40._0_4_;
        field_140 = local_40._4_4_;
        *(long*)&field_144 = local_40.field_8;
        local_40 = field_104.lock();
        if (shared_ptr::operator_cast_to_bool(&local_40) != '\0') {
            field_316 = field_312 + arg1 + 3;
            field_320 = arg2;
            pTVar5 = (Tweaky*)local_40.operator->();
            iVar2 = pTVar5->GetTextCenterYOffset(field_40);
            SetColour(4294967295, false);
            pTVar5 = (Tweaky*)local_40.operator->();
            pTVar5->FillRect(arg1, arg2, field_312, field_40);
            pTVar5 = (Tweaky*)local_40.operator->();
            pTVar5->FillRect(field_316, field_320, field_324, field_40);
            SetColour(1886417151, field_208);
            pTVar5 = (Tweaky*)local_40.operator->();
            pTVar5->DrawRect(arg1, arg2, field_312, field_40, false);
            pTVar5 = (Tweaky*)local_40.operator->();
            pTVar5->DrawRect(field_316, field_320, field_324, field_40, false);
            SetColour(255, false);
            iVar3 = local_40.operator->();
            piVar6 = &field_304;
            if (field_296 != nullptr) {
                piVar6 = field_296;
            }
            iVar4 = field_280->GetName(*piVar6);
            Tweaky::TextDraw(iVar3, arg1, (char*)(unsigned long)(unsigned int)(iVar2 + arg2), iVar4, -1, true);
            iVar3 = field_316;
            iVar4 = field_320;
            local_50 = shared_ptr(&local_40);
            DrawScrollDirection(iVar3, iVar4, &local_50);
            SetColour(3772834047, field_208);
            iVar3 = local_40.operator->();
            Tweaky::TextDraw<eastl::string>(iVar3, field_312 + arg1 + field_324 + 5,
                                            *((fixed_string<char, _16>*)(unsigned long)(unsigned int)(iVar2 + arg2)),
                                            (int)this + 216, -1, true);
        }
    }

    // 0x100a47c60
    void Enum::DrawScrollDirection(int arg1, int arg2, shared_ptr<Tweaky> tweaky) {
        int arg4;
        unsigned int uVar1;
        int arg2_00;
        int iVar2;
        Tweaky* pTVar3;
        int arg3;
        int iVar4;
        int iVar5;

        if (field_296 != nullptr) {
            uVar1 = field_40;
            iVar5 = (int)((uVar1 - ((int)(uVar1 - 4) >> 31)) - 4) >> 1;
            arg2_00 = field_28 + arg2 + 2;
            arg4 = (uVar1 - 2) + field_28 + arg2;
            arg3 = iVar5 + 2 + arg1;
            SetColour(808464639, false);
            iVar4 = *field_296;
            iVar2 = field_280->GetPos();
            if (iVar4 < iVar2 - 1) {
                pTVar3 = (Tweaky*)(*tweaky).operator->();
                pTVar3->DrawLine(arg1 + 2, arg2_00, arg3, arg4, true);
                pTVar3 = (Tweaky*)(*tweaky).operator->();
                pTVar3->DrawLine(arg3, arg4, arg3 + iVar5, arg2_00, true);
            }
            if (0 < *field_296) {
                iVar4 = arg3 + iVar5 + iVar5 + 4;
                pTVar3 = (Tweaky*)(*tweaky).operator->();
                pTVar3->DrawLine(arg3 + iVar5 + 4, arg4, iVar4, arg2_00, true);
                pTVar3 = (Tweaky*)(*tweaky).operator->();
                pTVar3->DrawLine(iVar4, arg2_00, iVar5 + iVar4, arg4, true);
            }
        }
    }

    // 0x100a47dd0
    unsigned long Enum::GetControlSize(int& arg1, int& arg2) {
        int iVar1;
        unsigned int uVar3;
        Tweaky* pTVar4;
        unsigned long uVar5;
        StringView local_68;
        StringView local_58;

        shared_ptr local_48 = field_104.lock();
        if (shared_ptr::operator_cast_to_bool(&local_48)) {
            if (shared_ptr::operator_cast_to_bool(&local_48)) {
                pTVar4 = (Tweaky*)local_48.operator->();
                local_68.StringView<eastl::fixed_string<char, 40>>(field_216);
                if (pTVar4->GetTextSize(field_308, 0, &local_68, -1)) {
                    pTVar4 = (Tweaky*)local_48.operator->();
                    local_58.StringView<eastl::fixed_string<char, 40>>(field_248);
                    if (pTVar4->GetTextSize(field_312, 0, &local_58, -1)) {
                        pTVar4 = (Tweaky*)local_48.operator->();
                        uVar3 = pTVar4->GetMinControlHeight();
                        field_40 = uVar3;
                        iVar1 = field_308;
                        field_308 = iVar1 + 5;
                        field_324 = uVar3 * 2;
                        field_36 = iVar1 + uVar3 * 2 + field_312 + 10;
                    }
                }
            }
            if ((0 < (int)field_36) && (0 < (int)field_40)) {
                arg1 = field_36;
                arg2 = field_40;
                uVar5 = (((uint64_t)((int64_t)((unsigned long)&local_48 >> 8)) << 8) | (uint8_t)1);
                goto LAB_100a47f05;
            }
        }
        uVar5 = 0;
    LAB_100a47f05:
        return uVar5 & 4294967295;
    }

    // 0x100a47f40
    uint64_t Enum::OnClick(float arg1, float arg2, bool arg3) {
        uint64_t in_register_00000031;
        enable_shared_from_this<PathingEntity> local_48;

        field_288 = arg3;
        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg3) == 0) {
            local_38 = field_104.lock();
            if (local_38.operator_cast_to_bool() != '\0') {
                ((Tweaky*)local_38.operator->())->ClearFocus();
            }
        } else {
            SetFocus();
            CheckScrollBoxBounds(arg1, arg2);
        }
        local_48.shared_from_this();
        Event local_38(local_48, 2);
        DoCallback(local_38);
        return 1;
    }

    // 0x100a48040
    void Enum::CheckScrollBoxBounds(float arg1, float arg2) {
        int arg1_00;

        int iVar2 = (int)field_324 / 2;
        int iVar1 = iVar2 + field_316;
        float fVar5 = (float)iVar1;
        float fVar4 = (float)field_320;
        float fVar3 = (float)(int)(field_40 + field_320);
        if ((((((float)field_316 < arg1) && (arg1 < fVar5)) && (fVar4 < arg2)) && (arg1_00 = -1, arg2 < fVar3)) ||
            (((fVar5 < arg1 && (arg1 < (float)(iVar1 + iVar2))) && ((fVar4 < arg2 && (arg1_00 = 1, arg2 < fVar3)))))) {
            ChangeValue(arg1_00);
        }
    }

    // 0x100a480d0
    uint64_t Enum::OnMouseOver(float arg1, float arg2) {
        uint64_t uVar2;
        shared_ptr local_28;

        if (!(BoundsCheck(arg1, arg2))) {
            local_28 = field_104.lock();
            if (shared_ptr::operator_cast_to_bool(&local_28)) {
                ((Tweaky*)local_28.operator->())->ClearFocus();
            }
            uVar2 = 0;
        } else {
            SetFocus();
            uVar2 = 1;
        }
        return uVar2;
    }

    // 0x100a48150
    uint8_t Enum::OnMouseWheel(float arg1, float arg2, float arg3) {
        ChangeValue((int)arg3);
        return 1;
    }

    // 0x100a48170
    void Enum::ChangeValue(int arg1) {
        int iVar1;
        int iVar2;
        Event local_48;
        enable_shared_from_this<PathingEntity> local_30;

        if ((field_296 != nullptr) && (iVar2 = *field_296 - arg1, -1 < iVar2)) {
            iVar1 = field_280->GetPos();
            if (iVar2 < iVar1) {
                *field_296 = *field_296 - arg1;
                local_30.shared_from_this();
                local_48 = Event(local_30, 3);
                DoCallback(local_48);
            }
        }
    }

    // 0x100a48220
    void Enum::OnFocusChanged(bool arg1) {
        uint32_t in_register_00000031;

        if ((((uint32_t)in_register_00000031 << 8) | (uint8_t)arg1) == 0) {
            field_288 = false;
        }
    }

    // 0x100a48240
    void Enum::ResetToDefault() {
        Event local_40;
        enable_shared_from_this<PathingEntity> local_28;

        int* piVar1 = field_296;
        if ((piVar1 != nullptr) && (*piVar1 != field_304)) {
            *piVar1 = field_304;
            local_28.shared_from_this();
            local_40 = Event(local_28, 3);
            DoCallback(local_40);
        }
    }

    // 0x100a482d0
    void Enum::SaveSettings(TweakSettingsValue& tweakSettingsValue) {
        eastl::string local_38;

        ToString<eastl::string, int>(&local_38, (unsigned int)field_296);
        tweakSettingsValue = &local_38;
    }

    // 0x100a48330
    uint32_t Enum::LoadSettings(const TweakSettingsValue& tweakSettingsValue) {
        Event local_40;
        enable_shared_from_this<PathingEntity> local_28;

        int iVar2 = eastl::stoi<eastl::string>(tweakSettingsValue, 10);
        int* piVar1 = field_296;
        if ((piVar1 != nullptr) && (*piVar1 != iVar2)) {
            *piVar1 = iVar2;
            local_28.shared_from_this();
            local_40 = Event(local_28, 3);
            DoCallback(local_40);
        }
        return 1;
    }

} // namespace jag::tweak
