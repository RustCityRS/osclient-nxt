// libs/tweaky/Tweaky_Slider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.tweaky

#include "Tweaky_Slider.h"

namespace jag::tweak {
    // 0x100a48450, 688 bytes, base-object constructor, placed by class name and debug map
    // Slider::Slider(char const*, float, float, float)
    void Slider::Slider(char* param_1, float param_2, float param_3, float param_4) {
        float* pfVar2;
        Tweaky* this_00;
        char* pcVar3;
        ulong uVar4;
        float local_5c;
        int* local_58;
        shared_ptr local_50;
        float local_40;
        float local_3c;
        fixed_string* local_38;

        local_5c = param_4;
        local_40 = param_2;
        local_3c = param_3;
        new (this) Control(0, 0, 10, param_1);
        field_0 = &PTR__Slider_100f1d6d8;
        field_212 = 4.0;
        field_216 = 4.0;
        field_220 = 3;
        field_224 = 0.75;
        field_228 = 0.5;
        field_232 = 10;
        field_236 = 7;
        field_240 = 20;
        field_244 = 250;
        field_248 = 10;
        new (&field_252, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_268, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_284, (_func_decltype_nullptr*)0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&local_50) eastl::allocator("EASTL basic_string");
        new (&field_304, param_1, (allocator*)&local_50) eastl::string();
        local_38 = (fixed_string*)&field_336;
        new (local_38) eastl::fixed_string<char, 16, true, eastl::allocator>();
        new (&field_392) eastl::fixed_string<char, 16, true, eastl::allocator>();
        new (&field_448) eastl::fixed_string<char, 16, true, eastl::allocator>();
        field_504 = 50;
        field_508 = 12;
        m_currentValue = 1.5;
        field_516 = 1.5;
        field_520 = 0.0;
        local_58 = (int*)CONCAT44(local_58._4_4_, local_40);
        field_524 = local_40;
        pfVar2 = std::max<float>(&local_40, &local_3c);
        field_528 = *pfVar2;
        local_50._0_4_ = local_3c - local_58._0_4_;
        pfVar2 = std::min<float>((float*)&local_50, &local_5c);
        field_532 = *pfVar2;
        field_536 = 0.01;
        field_540 = 0.0;
        *(undefined4*)((long)&field_540 + 3) = 0;
        weak_ptr<oldscape::rs2lib::IfType>::lock();
        if (shared_ptr::operator_cast_to_bool(&local_50)) {
            local_58 = &field_508;
            this_00 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_50);
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar4 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            this_00->GetTextSize(&field_504, local_58, pcVar3, uVar4, -1);
        } else {
            field_504 = 50;
            field_508 = 12;
        }
        field_508 = field_508 + 5;
        ToText<16, true>(local_38, field_524);
        ToText<16, true>((fixed_string*)&field_392, field_528);
        local_50.~shared_ptr();
    }

    // 0x100a497f0, 464 bytes, placed by class name and debug map
    // Slider::OnMouseMove(float, float)
    ulong Slider::OnMouseMove(float param_1, float param_2) {
        float fVar1;
        float fVar2;
        char cVar3;
        char cVar4;
        char cVar5;
        char cVar6;
        char cVar7;
        undefined8 unaff_R14;
        float fVar8;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_40[16];
        float local_30;

        cVar3 = field_546;
        if (cVar3 == '\0') {
            field_540 = param_1;
        } else {
            weak_ptr<oldscape::rs2lib::IfType>::lock();
            cVar4 = input::InputState::IsKeyDown(59);
            cVar5 = '\x01';
            if (cVar4 == '\0') {
                cVar5 = input::InputState::IsKeyDown(62);
            }
            cVar4 = input::InputState::IsKeyDown(56);
            cVar6 = '\x01';
            if (cVar4 == '\0') {
                cVar6 = input::InputState::IsKeyDown(60);
            }
            cVar4 = input::InputState::IsKeyDown(58);
            cVar7 = '\x01';
            if (cVar4 == '\0') {
                cVar7 = input::InputState::IsKeyDown(61);
            }
            if (cVar5 == '\0') {
                local_30 = ((field_528 - field_524) * (param_1 - (float)field_252)) / (float)field_244 + field_524;
            } else {
                fVar8 = param_1 - field_540;
                fVar1 = field_532;
                fVar2 = field_536;
                if (fVar2 <= fVar1) {
                    local_30 = fVar8 * fVar2;
                    if ((cVar6 != '\0') && (fVar1 / field_212 < fVar2)) {
                        local_30 = (fVar8 * fVar1) / field_212;
                    }
                } else {
                    local_30 = fVar8 * fVar1;
                    if (cVar6 != '\0') {
                        local_30 = local_30 / field_212;
                    }
                }
                if ((cVar7 != '\0') && (fVar1 * field_216 < fVar2)) {
                    local_30 = local_30 * field_216;
                }
                local_30 = local_30 + field_516;
            }
            local_30 = math::Clamp<float>(&local_30, &field_524, &field_528);
            SetSlider<float>(this, local_30);
            field_540 = param_1;
            local_40->~shared_ptr();
        }
        return CONCAT71((int7)((ulong)unaff_R14 >> 8), cVar3) & 4294967295;
    }

    // 0x100a4a360, 48 bytes, placed by class name and debug map
    // Slider::LoadSettings(TweakSettingsValue const&)
    undefined1 Slider::LoadSettings(TweakSettingsValue* param_1) {
        float fVar1;

        fVar1 = (float)eastl::stof((basic_string*)param_1);
        SetSlider<float>(this, fVar1);
        return 1;
    }

    // 0x100a4d040, 16 bytes, complete-object constructor, placed by class name
    // Slider::Slider(char const*, float, float, float): jumps straight to the base-object constructor

    // 0x100a4d050, 1280 bytes, placed by class name
    // Slider::Draw(int, int)
    void Slider::Draw(int param_1, int param_2) {
        bool bVar1;
        Tweaky* pTVar2;
        char* pcVar3;
        ulong uVar4;
        int iVar5;
        int iVar6;
        undefined1 local_58[16];
        int local_34;

        weak_ptr<oldscape::rs2lib::IfType>::lock();
        iVar6 = field_24 + param_1;
        iVar5 = field_28 + param_2;
        new (local_58) oldscape::dash3d::GridRect(iVar6, iVar5, field_36 + iVar6, field_40 + iVar5);
        field_136 = CONCAT44(local_58._4_4_, local_58._0_4_);
        field_144 = local_58._8_8_;
        iVar6 = field_24 + param_1;
        iVar5 = field_28 + param_2 + field_508 + field_220;
        new (local_58) oldscape::dash3d::GridRect(iVar6, iVar5, field_244 + iVar6 + field_236, field_248 + iVar5);
        field_252 = local_58._0_4_;
        field_256 = local_58._4_4_;
        field_260 = local_58._8_4_;
        field_264 = local_58._12_4_;
        bVar1 = ((local_58 + 16))->operator_cast_to_bool();
        if (bVar1) {
            iVar5 = (int)(((field_516 - field_524) * (float)(field_244 - field_236)) / (field_528 - field_524));
            field_232 = iVar5;
            iVar6 = field_248 / 2 - field_240 / 2;
            iVar5 = iVar5 + param_1 + field_24;
            new (local_58) oldscape::dash3d::GridRect(iVar5, field_256 + iVar6, field_236 + iVar5, field_264 - iVar6);
            field_268 = local_58._0_4_;
            field_272 = local_58._4_4_;
            field_276 = local_58._8_4_;
            field_280 = local_58._12_4_;
            SetColour(3772834047, false);
            pTVar2 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)(local_58 + 16));
            Tweaky::TextDraw<eastl::string>(pTVar2, field_24 + param_1, param_2 + field_28, (basic_string*)&field_304,
                                            -1, -1, false);
            SetColour(1886417151, false);
            pTVar2 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)(local_58 + 16));
            pTVar2->FillRect(field_252, field_256, field_244, field_248);
            if ((field_545 == '\0') && (field_546 == '\0')) {
                bVar1 = false;
            } else {
                bVar1 = field_208 != false;
            }
            iVar5 = field_268;
            iVar6 = field_272;
            SetColour(808464639, bVar1);
            pTVar2 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)(local_58 + 16));
            pTVar2->FillRect(iVar5 + 1, iVar6 + 1, field_236 + 1, field_240 + 1);
            if ((field_545 == '\0') && (field_546 == '\0')) {
                bVar1 = false;
            } else {
                bVar1 = field_208 != false;
            }
            SetColour(808501503, bVar1);
            pTVar2 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)(local_58 + 16));
            pTVar2->FillRect(iVar5, iVar6, field_236, field_240);
            if ((field_545 == '\0') && (field_546 == '\0')) {
                bVar1 = false;
            } else {
                bVar1 = field_208 != false;
            }
            SetColour(2155937791, bVar1);
            pTVar2 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)(local_58 + 16));
            pTVar2->DrawRect(iVar5, iVar6, field_236, field_240, false);
            SetColour(3772834047, false);
            local_34 = 0;
            pTVar2 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)(local_58 + 16));
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar4 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            pTVar2->GetTextSize(local_58, &local_34, pcVar3, uVar4, -1);
            if (local_58._0_4_ + field_24 <= field_232) {
                pTVar2 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)(local_58 + 16));
                Tweaky::TextDraw<eastl::string>(pTVar2, field_24 + param_1, field_280, (basic_string*)&field_336, -1,
                                                -1, false);
            }
            pTVar2 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)(local_58 + 16));
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar4 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            pTVar2->GetTextSize(local_58, &local_34, pcVar3, uVar4, -1);
            if (field_232 <= field_244 - (local_58._0_4_ + field_236)) {
                pTVar2 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)(local_58 + 16));
                Tweaky::TextDraw<eastl::string>(pTVar2, (field_24 + param_1 + field_244) - local_58._0_4_, field_280,
                                                (basic_string*)&field_392, -1, -1, false);
            }
            ToText<16, true>((fixed_string*)&field_448, m_currentValue);
            pTVar2 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)(local_58 + 16));
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar4 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            pTVar2->GetTextSize(local_58, &local_34, pcVar3, uVar4, -1);
            if (field_232 < field_244 / 2) {
                local_58._0_4_ = 0;
            }
            pTVar2 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)(local_58 + 16));
            Tweaky::TextDraw<eastl::string>(pTVar2, (param_1 + field_24 + field_232) - local_58._0_4_, field_280,
                                            (basic_string*)&field_448, -1, -1, false);
        }
        ((local_58 + 16))->~shared_ptr();
    }

    // 0x100a4d550, 400 bytes, placed by class name
    // Slider::GetControlSize(int&, int&)
    ulong Slider::GetControlSize(int* param_1, int* param_2) {
        int iVar3;
        Tweaky* pTVar4;
        char* pcVar5;
        ulong uVar6;
        int iVar7;
        shared_ptr local_40;

        weak_ptr<oldscape::rs2lib::IfType>::lock();
        if (shared_ptr::operator_cast_to_bool(&local_40)) {
            pTVar4 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
            pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar6 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (pTVar4->GetTextSize(&field_504, &field_508, pcVar5, uVar6, -1) != '\0') {
                pTVar4 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                iVar3 = pTVar4->GetMinControlHeight();
                field_240 = iVar3;
                iVar7 = (int)(field_228 * (float)iVar3);
                field_236 = iVar7;
                field_248 = (int)((float)iVar3 * field_224);
                iVar3 = eastl::max<int>(iVar7 * 2 + field_244, field_504);
                field_36 = iVar3;
                field_40 = (field_508 + field_220) * 2 + field_248;
                field_536 = (field_528 - field_524) / (float)iVar3;
            }
        }
        if ((field_36 < 1) || (field_40 < 1)) {
            uVar6 = 0;
        } else {
            *param_1 = field_36;
            *param_2 = field_40;
            uVar6 = CONCAT71((int7)((ulong)this >> 8), 1);
        }
        local_40.~shared_ptr();
        return uVar6 & 4294967295;
    }

    // 0x100a4d6e0, 256 bytes, placed by class name
    // Slider::OnClick(float, float, bool)
    bool Slider::OnClick(float param_1, float param_2, bool param_3) {
        char cVar1;
        undefined7 in_register_00000031;

        if ((int)CONCAT71(in_register_00000031, param_3) != 0) {
            if ((field_208 != false) && (field_545 != '\0')) {
                field_546 = '\x01';
                field_540 = param_1;
                Control::SetFocus();
                return field_546 != '\0';
            }
            if ((param_3) && (cVar1 = (&field_252, (int)param_1, (int)param_2)->IsInside(), cVar1 != '\0')) {
                Control::SetFocus();
                SetSlider<float>(this, ((field_528 - field_524) * (param_1 - (float)field_252)) /
                                               (float)(field_260 - field_252) +
                                           field_524);
                field_540 = param_1;
                field_546 = '\x01';
                return true;
            }
        }
        if (field_546 == '\0') {
            return false;
        }
        Control::ClearFocus();
        field_546 = '\0';
        return true;
    }

    // 0x100a4d7e0, 48 bytes, placed by class name
    // Slider::OnMouseOver(float, float)
    undefined8 Slider::OnMouseOver(float param_1, float param_2) {
        field_545 = HandleBoundsCheck(this, param_1, param_2);
        field_540 = param_1;
        return 0;
    }

    // 0x100a4d810, 112 bytes, placed by class name
    // Slider::HandleBoundsCheck(float, float)
    undefined4 Slider::HandleBoundsCheck(float param_1, float param_2) {
        if ((((float)(field_268 - field_236) <= param_1) && (param_1 <= (float)(field_236 + field_276))) &&
            ((float)field_272 <= param_2)) {
            return CONCAT31((int3)((uint)field_508 >> 8), param_2 <= (float)(field_508 / 2 + field_280));
        }
        return 0;
    }

    // 0x100a4d880, 160 bytes, placed by class name
    // Slider::ResetToDefault()
    void Slider::ResetToDefault() {
        Event local_40;
        enable_shared_from_this<PathingEntity> local_28[16];

        if (m_currentValue != field_520) {
            SetSlider<float>(this, field_520);
            local_28->shared_from_this();
            new (&local_40) Event(local_28, 3);
            DoCallback(&local_40);
            local_40.~LRUHashCacheWrapper();
            local_28->~shared_ptr();
        }
    }

    // 0x100a4d920, 80 bytes, placed by class name
    // Slider::SetCurrentValue(float)
    void Slider::SetCurrentValue(float param_1) {
        float fVar1;

        field_516 = param_1;
        fVar1 = math::RoundToNearest<float>(param_1, field_532);
        m_currentValue = fVar1;
        fVar1 = math::Clamp<float>(&m_currentValue, &field_524, &field_528);
        m_currentValue = fVar1;
    }

    // 0x100a4d970, 96 bytes, placed by class name
    // Slider::SaveSettings(TweakSettingsValue&)
    void Slider::SaveSettings(TweakSettingsValue* param_1) {
        jag local_38[32];

        ToString<eastl::string, float>(local_38, &m_currentValue, 10);
        eastl::string::operator=((eastl::string*)param_1, (basic_string*)local_38);
        local_38->~basic_string();
    }

} // namespace jag::tweak

namespace jag::math {
    // 0x100a49410, 336 bytes, inline, placed by debug map only (low confidence)
    // float RoundToNearest<float>(float, float)
    float RoundToNearest<float>(float param_1, float param_2) {
        bool bVar1;
        uint uVar2;
        int iVar3;
        int iVar4;
        uint uVar5;
        float fVar6;
        float local_28;
        float local_24;

        if (param_2 <= 0.0) {
            /* WARNING: Subroutine does not return */
            LogAssert("nearest > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/math/BasicUtils.h", 97,
                      (char*)0);
        }
        uVar2 = GetDecimalPlaces<float>(param_2);
        local_28 = param_1;
        local_24 = param_2;
        if (0 < (int)uVar2) {
            iVar3 = 1;
            do {
                fVar6 = (float)::abs(local_28 * 10.0);
                if (2.1474836e+09 < fVar6) {
                LAB_100a494c8:
                    bVar1 = false;
                    uVar2 = iVar3 - 1;
                } else {
                    fVar6 = (float)::abs(local_24 * 10.0);
                    if (2.1474836e+09 < fVar6)
                        goto LAB_100a494c8;
                    bVar1 = true;
                    local_28 = local_28 * 10.0;
                    local_24 = local_24 * 10.0;
                }
            } while ((bVar1) && (bVar1 = iVar3 < (int)uVar2, iVar3 = iVar3 + 1, bVar1));
        }
        iVar3 = RoundFloatToInt(local_28);
        iVar4 = RoundFloatToInt(local_24);
        iVar3 = iVar4 / 2 + iVar3;
        fVar6 = (float)(iVar3 - iVar3 % iVar4);
        if (0 < (int)uVar2) {
            uVar5 = uVar2;
            do {
                fVar6 = fVar6 * 0.1;
                uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
        }
        fVar6 = RoundToDecimalPlaces<float>(fVar6, uVar2);
        return fVar6;
    }

    // 0x100a495f0, 96 bytes, inline, placed by debug map only (low confidence)
    // Colour4FromR8G8B8A8(unsigned int)
    undefined1[16] Colour4FromR8G8B8A8(uint param_1) {
        undefined1 auVar1[16];
        ImVec4 local_28[24];

        ImVec4::ImVec4(local_28, (float)(param_1 >> 24) * 0.003921569, (float)(param_1 >> 16 & 255) * 0.003921569,
                       (float)(param_1 >> 8 & 255) * 0.003921569, (float)(param_1 & 255) * 0.003921569);
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
    // 0x100a49650, 128 bytes, inline, placed by debug map only (low confidence)
    // eastl::string ToString<eastl::string, float>(float const&, unsigned int)
    jag* ToString<eastl::string, float>(float* param_1, uint param_2) {
        allocator local_70[8];
        char local_68[64];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        ToText(local_68, 64, *param_1, param_2);
        eastl::allocator::allocator(local_70, "EASTL basic_string");
        new (this) eastl::string(local_68, local_70);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x100a4a180, 128 bytes, inline, placed by debug map only (low confidence)
    // eastl::string ToString<eastl::string, unsigned int>(unsigned int const&, unsigned int)
    jag* ToString<eastl::string, unsigned int>(uint* param_1, uint param_2) {
        allocator local_70[8];
        char local_68[64];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        ToText(local_68, 64, *param_1, param_2);
        eastl::allocator::allocator(local_70, "EASTL basic_string");
        new (this) eastl::string(local_68, local_70);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

} // namespace jag
