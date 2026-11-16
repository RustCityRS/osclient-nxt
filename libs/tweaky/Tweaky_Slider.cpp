// libs/tweaky/Tweaky_Slider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.tweaky

#include "Tweaky_Slider.h"

namespace jag::tweak {
    // 0x100a48450
    Slider::Slider(const char* str, float arg2, float arg3, float arg4)
        : Control(0, 0, 10, str), field_212(4.0), field_216(4.0), field_220(3), field_224(0.75), field_228(0.5),
          field_232(10), field_236(7), field_240(20), field_244(250), field_248(10) {
        Tweaky* this_00;
        char* str_00;
        unsigned long arg4_00;
        int* local_58;

        new (&field_304) eastl::string(str);
        fixed_string<char, _16>* local_38 = (fixed_string<char, _16>*)&field_336;
        new (local_38) eastl::fixed_string<char, 16>();
        new (&field_392) eastl::fixed_string<char, 16>();
        new (&field_448) eastl::fixed_string<char, 16>();
        field_504 = 50;
        field_508 = 12;
        m_currentValue = 1.5;
        field_516 = 1.5;
        field_520 = 0.0;
        local_58 = (int*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)arg2);
        field_524 = arg2;
        auto pfVar2 = std::max<float>(arg2, arg3);
        field_528 = *pfVar2;
        local_50._0_4_ = arg3 - local_58._0_4_;
        pfVar2 = std::min<float>(local_50, arg4);
        field_532 = *pfVar2;
        field_536 = 0.01;
        field_540 = 0.0;
        *(uint32_t*)((long)&field_540 + 3) = 0;
        shared_ptr local_50 = field_104.lock();
        if (shared_ptr::operator_cast_to_bool(&local_50) == '\0') {
            field_504 = 50;
            field_508 = 12;
        } else {
            local_58 = &field_508;
            this_00 = (Tweaky*)local_50.operator->();
            str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            arg4_00 = field_304.size();
            this_00->GetTextSize(field_504, *local_58, str_00, arg4_00, -1);
        }
        field_508 = field_508 + 5;
        ToText<16, true>(local_38, field_524);
        ToText<16, true>((fixed_string<char, _16>*)&field_392, field_528);
    }

    // 0x100a497f0
    unsigned long Slider::OnMouseMove(float arg1, float arg2) {
        float fVar1;
        float fVar2;
        bool cVar4;
        char cVar5;
        char cVar6;
        char cVar7;
        float fVar8;
        ReturnValue local_40;
        float local_30;

        char cVar3 = field_546;
        if (!cVar3) {
            field_540 = arg1;
        } else {
            local_40 = field_104.lock();
            cVar4 = input::InputState::IsKeyDown(59);
            cVar5 = '\x01';
            if (!cVar4) {
                cVar5 = input::InputState::IsKeyDown(62);
            }
            cVar4 = input::InputState::IsKeyDown(56);
            cVar6 = '\x01';
            if (!cVar4) {
                cVar6 = input::InputState::IsKeyDown(60);
            }
            cVar4 = input::InputState::IsKeyDown(58);
            cVar7 = '\x01';
            if (!cVar4) {
                cVar7 = input::InputState::IsKeyDown(61);
            }
            if (!cVar5) {
                local_30 = ((field_528 - field_524) * (arg1 - (float)field_252)) / (float)field_244 + field_524;
            } else {
                fVar8 = arg1 - field_540;
                fVar1 = field_532;
                fVar2 = field_536;
                if (fVar2 <= fVar1) {
                    local_30 = fVar8 * fVar2;
                    if ((cVar6) && (fVar1 / field_212 < fVar2)) {
                        local_30 = (fVar8 * fVar1) / field_212;
                    }
                } else {
                    local_30 = fVar8 * fVar1;
                    if (cVar6) {
                        local_30 = local_30 / field_212;
                    }
                }
                if ((cVar7) && (fVar1 * field_216 < fVar2)) {
                    local_30 = local_30 * field_216;
                }
                local_30 = local_30 + field_516;
            }
            local_30 = math::Clamp<float>(local_30, field_524, field_528);
            SetSlider<float>(this, local_30);
            field_540 = arg1;
        }
        return cVar3 & 4294967295;
    }

    // 0x100a4a360
    uint8_t Slider::LoadSettings(const TweakSettingsValue& tweakSettingsValue) {
        float arg1 = (float)eastl::stof(tweakSettingsValue);
        SetSlider<float>(this, arg1);
        return 1;
    }

    // 0x100a4d050
    void Slider::Draw(int arg1, int arg2) {
        uint8_t* str;
        Tweaky* pTVar2;
        char* pcVar3;
        unsigned long uVar4;
        bool bVar7;
        uint8_t local_58[16];

        *((local_58 + 16)) = field_104.lock();
        int iVar6 = field_24 + arg1;
        int iVar5 = field_28 + arg2;
        new (local_58) oldscape::dash3d::GridRect(iVar6, iVar5, field_36 + iVar6, field_40 + iVar5);
        field_136 = (((uint64_t)local_58._4_4_ << 32) | (uint32_t)local_58._0_4_);
        field_144 = local_58._8_8_;
        iVar6 = field_24 + arg1;
        iVar5 = field_28 + arg2 + field_508 + field_220;
        new (local_58) oldscape::dash3d::GridRect(iVar6, iVar5, field_244 + iVar6 + field_236, field_248 + iVar5);
        field_252 = local_58._0_4_;
        field_256 = local_58._4_4_;
        field_260 = local_58._8_4_;
        field_264 = local_58._12_4_;
        if (((local_58 + 16))->operator_cast_to_bool() != '\0') {
            iVar5 = (int)(((field_516 - field_524) * (float)(field_244 - field_236)) / (field_528 - field_524));
            field_232 = iVar5;
            iVar6 = field_248 / 2 - field_240 / 2;
            iVar5 = iVar5 + arg1 + field_24;
            new (local_58) oldscape::dash3d::GridRect(iVar5, field_256 + iVar6, field_236 + iVar5, field_264 - iVar6);
            field_268 = local_58._0_4_;
            field_272 = local_58._4_4_;
            field_276 = local_58._8_4_;
            field_280 = local_58._12_4_;
            SetColour(3772834047, false);
            iVar5 = (*((local_58 + 16))).operator->();
            Tweaky::TextDraw<eastl::string>(iVar5, field_24 + arg1,
                                            *((fixed_string<char, _16>*)(unsigned long)(unsigned int)(arg2 + field_28)),
                                            (int)this + 304, -1, true);
            SetColour(1886417151, false);
            pTVar2 = (Tweaky*)(*((local_58 + 16))).operator->();
            pTVar2->FillRect(field_252, field_256, field_244, field_248);
            if ((field_545 == '\0') && (field_546 == '\0')) {
                bVar7 = false;
            } else {
                bVar7 = field_208 != false;
            }
            iVar5 = field_268;
            iVar6 = field_272;
            SetColour(808464639, bVar7);
            pTVar2 = (Tweaky*)(*((local_58 + 16))).operator->();
            pTVar2->FillRect(iVar5 + 1, iVar6 + 1, field_236 + 1, field_240 + 1);
            if ((field_545 == '\0') && (field_546 == '\0')) {
                bVar7 = false;
            } else {
                bVar7 = field_208 != false;
            }
            SetColour(808501503, bVar7);
            pTVar2 = (Tweaky*)(*((local_58 + 16))).operator->();
            pTVar2->FillRect(iVar5, iVar6, field_236, field_240);
            if ((field_545 == '\0') && (field_546 == '\0')) {
                bVar7 = false;
            } else {
                bVar7 = field_208 != false;
            }
            SetColour(2155937791, bVar7);
            pTVar2 = (Tweaky*)(*((local_58 + 16))).operator->();
            pTVar2->DrawRect(iVar5, iVar6, field_236, field_240, false);
            SetColour(3772834047, false);
            pTVar2 = (Tweaky*)(*((local_58 + 16))).operator->();
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar4 = field_336.size();
            pTVar2->GetTextSize(*local_58, 0, pcVar3, uVar4, -1);
            if (local_58._0_4_ + field_24 <= field_232) {
                iVar5 = (*((local_58 + 16))).operator->();
                Tweaky::TextDraw<eastl::string>(iVar5, field_24 + arg1,
                                                *((fixed_string<char, _16>*)(unsigned long)field_280), (int)&field_336,
                                                -1, true);
            }
            pTVar2 = (Tweaky*)(*((local_58 + 16))).operator->();
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar4 = field_392.size();
            pTVar2->GetTextSize(*local_58, 0, pcVar3, uVar4, -1);
            if (field_232 <= field_244 - (local_58._0_4_ + field_236)) {
                iVar5 = (*((local_58 + 16))).operator->();
                Tweaky::TextDraw<eastl::string>(iVar5, (field_24 + arg1 + field_244) - local_58._0_4_,
                                                *((fixed_string<char, _16>*)(unsigned long)field_280), (int)&field_392,
                                                -1, true);
            }
            str = &field_448;
            ToText<16, true>((fixed_string<char, _16>*)str, m_currentValue);
            pTVar2 = (Tweaky*)(*((local_58 + 16))).operator->();
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar4 = str->size();
            pTVar2->GetTextSize(*local_58, 0, pcVar3, uVar4, -1);
            if (field_232 < field_244 / 2) {
                local_58._0_4_ = 0;
            }
            iVar5 = (*((local_58 + 16))).operator->();
            Tweaky::TextDraw<eastl::string>(iVar5, (arg1 + field_24 + field_232) - local_58._0_4_,
                                            *((fixed_string<char, _16>*)(unsigned long)field_280), (int)str, -1, true);
        }
        ((local_58 + 16))->~shared_ptr();
    }

    // 0x100a4d550
    unsigned long Slider::GetControlSize(int& arg1, int& arg2) {
        int iVar2;
        Tweaky* pTVar3;
        char* str;
        unsigned long uVar4;
        int iVar5;

        shared_ptr local_40 = field_104.lock();
        if (shared_ptr::operator_cast_to_bool(&local_40)) {
            pTVar3 = (Tweaky*)local_40.operator->();
            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar4 = field_304.size();
            if (pTVar3->GetTextSize(field_504, field_508, str, uVar4, -1)) {
                pTVar3 = (Tweaky*)local_40.operator->();
                iVar2 = pTVar3->GetMinControlHeight();
                field_240 = iVar2;
                iVar5 = (int)(field_228 * (float)iVar2);
                field_236 = iVar5;
                field_248 = (int)((float)iVar2 * field_224);
                iVar2 = eastl::max<int>(iVar5 * 2 + field_244, field_504);
                field_36 = iVar2;
                field_40 = (field_508 + field_220) * 2 + field_248;
                field_536 = (field_528 - field_524) / (float)iVar2;
            }
        }
        if ((field_36 < 1) || (field_40 < 1)) {
            uVar4 = 0;
        } else {
            arg1 = field_36;
            arg2 = field_40;
            uVar4 = (((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)1);
        }
        return uVar4 & 4294967295;
    }

    // 0x100a4d6e0
    bool Slider::OnClick(float arg1, float arg2, bool arg3) {
        bool cVar1;
        uint64_t in_register_00000031;

        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg3) != 0) {
            if ((field_208 != false) && (field_545 != '\0')) {
                field_546 = '\x01';
                field_540 = arg1;
                SetFocus();
                return field_546 != '\0';
            }
            if ((arg3) && (cVar1 = field_252.IsInside((int)arg1, (int)arg2), cVar1)) {
                SetFocus();
                SetSlider<float>(
                    this,
                    ((field_528 - field_524) * (arg1 - (float)field_252)) / (float)(field_260 - field_252) + field_524);
                field_540 = arg1;
                field_546 = '\x01';
                return true;
            }
        }
        if (field_546 == '\0') {
            return false;
        }
        ClearFocus();
        field_546 = '\0';
        return true;
    }

    // 0x100a4d7e0
    uint64_t Slider::OnMouseOver(float arg1, float arg2) {
        field_545 = HandleBoundsCheck(arg1, arg2);
        field_540 = arg1;
        return 0;
    }

    // 0x100a4d810
    uint32_t Slider::HandleBoundsCheck(float arg1, float arg2) {
        if ((((float)(field_268 - field_236) <= arg1) && (arg1 <= (float)(field_236 + field_276))) &&
            ((float)field_272 <= arg2)) {
            return arg2 <= (float)(int)(field_508 / 2 + field_280);
        }
        return 0;
    }

    // 0x100a4d880
    void Slider::ResetToDefault() {
        Event local_40;
        enable_shared_from_this<PathingEntity> local_28;

        if (m_currentValue != field_520) {
            SetSlider<float>(this, field_520);
            local_28.shared_from_this();
            local_40 = Event(local_28, 3);
            DoCallback(local_40);
        }
    }

    // 0x100a4d920
    void Slider::SetCurrentValue(float arg1) {
        field_516 = arg1;
        float fVar1 = math::RoundToNearest<float>(arg1, field_532);
        m_currentValue = fVar1;
        fVar1 = math::Clamp<float>(m_currentValue, field_524, field_528);
        m_currentValue = fVar1;
    }

    // 0x100a4d970
    void Slider::SaveSettings(TweakSettingsValue& tweakSettingsValue) {
        eastl::string local_38;

        ToString<eastl::string, float>(&local_38, (int)this + 512);
        tweakSettingsValue = &local_38;
    }

} // namespace jag::tweak

namespace jag::math {
    // 0x100a49410
    float RoundToNearest<float>(float arg1, float arg2) {
        bool bVar1;
        int iVar2;
        unsigned int uVar4;
        float fVar5;

        if (arg2 <= 0.0) {
            LogAssert("nearest > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/BasicUtils.h", 97,
                      nullptr);
        }
        unsigned int arg2_00 = GetDecimalPlaces<float>(arg2);
        float local_28 = arg1;
        float local_24 = arg2;
        if (0 < (int)arg2_00) {
            iVar2 = 1;
            do {
                fVar5 = (float)::abs(local_28 * 10.0);
                if (2.1474836e+09 < fVar5) {
                LAB_100a494c8:
                    bVar1 = false;
                    arg2_00 = iVar2 - 1;
                } else {
                    fVar5 = (float)::abs(local_24 * 10.0);
                    if (2.1474836e+09 < fVar5)
                        goto LAB_100a494c8;
                    bVar1 = true;
                    local_28 = local_28 * 10.0;
                    local_24 = local_24 * 10.0;
                }
            } while ((bVar1) && (bVar1 = iVar2 < (int)arg2_00, iVar2 = iVar2 + 1, bVar1));
        }
        iVar2 = RoundFloatToInt(local_28);
        int iVar3 = RoundFloatToInt(local_24);
        iVar2 = iVar3 / 2 + iVar2;
        fVar5 = (float)(iVar2 - iVar2 % iVar3);
        if (0 < (int)arg2_00) {
            uVar4 = arg2_00;
            do {
                fVar5 = fVar5 * 0.1;
                uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
        }
        fVar5 = RoundToDecimalPlaces<float>(fVar5, arg2_00);
        return fVar5;
    }

    // 0x100a495f0
    void Colour4FromR8G8B8A8(unsigned int arg1) {
        uint8_t auVar1[16];

        ImVec4 local_28((float)(arg1 >> 24) * 0.003921569f, (float)(arg1 >> 16 & 255) * 0.003921569f,
                        (float)(arg1 >> 8 & 255) * 0.003921569f, (float)(arg1 & 255) * 0.003921569f);
        auVar1[0] = local_28[0];
        auVar1[1] = local_28[1];
        auVar1[2] = local_28[2];
        auVar1[3] = local_28[3];
        auVar1[4] = local_28[4];
        auVar1[5] = local_28[5];
        auVar1[6] = local_28[6];
        auVar1[7] = local_28[7];
        auVar1[8] = local_28[8];
        auVar1[9] = local_28[9];
        auVar1[10] = local_28[10];
        auVar1[11] = local_28[11];
        auVar1[12] = local_28[12];
        auVar1[13] = local_28[13];
        auVar1[14] = local_28[14];
        auVar1[15] = local_28[15];
        return auVar1;
    }

} // namespace jag::math

namespace jag {
    // 0x100a49650
    eastl::string ToString<eastl::string, float>(const float& arg1, unsigned int arg2) {
        unsigned int in_EDX;
        uint32_t in_register_00000034;
        char local_68[64];

        ToText(local_68, 64, *(float*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2), in_EDX);
        new (arg1) eastl::string(local_68);
        return arg1;
    }

    // 0x100a4a180
    eastl::string ToString<eastl::string, unsigned int>(const unsigned int& arg1, unsigned int arg2) {
        unsigned int in_EDX;
        uint32_t in_register_00000034;
        char local_68[64];

        ToText(local_68, 64, *(unsigned int*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2), in_EDX);
        new (arg1) eastl::string(local_68);
        return arg1;
    }

} // namespace jag
