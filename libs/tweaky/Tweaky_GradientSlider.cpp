// libs/tweaky/Tweaky_GradientSlider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.tweaky

#include "Tweaky_GradientSlider.h"

namespace jag::tweak {
    // 0x103bc2190, set at startup by ___cxx_global_var_init.38
    eastl::string GradientSlider::VALUE_TAG = "value";

    // 0x103bc21b0, set at startup by ___cxx_global_var_init.40
    eastl::string GradientSlider::LEFTCOLOUR_TAG = "leftColour";

    // 0x103bc21d0, set at startup by ___cxx_global_var_init.42
    eastl::string GradientSlider::RIGHTCOLOUR_TAG = "rightColour";

    // 0x10002d860: GradientSlider::HasKeyboardNavigation() const has the same machine code as oldscape::option::Option<int>::IsValidValue(int const&) const

    // 0x100a41170
    void GradientSlider::SetGradient(const math::Vector4T<float>& vector41, const math::Vector4T<float>& vector42) {
        *field_560 = vector41;
        (*((field_560 + 16))) = vector42;
    }

    // 0x100a41b40
    void GradientSlider::SetGradient(unsigned int arg1, unsigned int arg2) {
        uint64_t local_28[2];

        local_28[0] = math::Colour4FromR8G8B8A8(arg1);
        *field_560 = *local_28;
        local_28[0] = math::Colour4FromR8G8B8A8(arg2);
        (*((field_560 + 16))) = *local_28;
    }

    // 0x100a483d0
    GradientSlider::GradientSlider(const char* str, float arg2, float arg3, float arg4)
        : Slider(str, arg2, arg3, arg4), field_904(15) {
        field_908 = '\0';
        field_909 = 0;
        field_910 = 1;
        field_912 = 0;
        field_920 = 30;
    }

    // 0x100a48780
    void GradientSlider::Draw(int arg1, int arg2) {
        int arg1_00;
        Tweaky* pTVar2;
        char* str;
        LoginManager* pLVar3;
        shared_ptr<graphics::Font>* font;
        RT7Core* rt7Core;
        Js5HTTPQueueRequest* this_00;
        FontHelpers* fontHelpers;
        bool bVar7;
        StringView local_c0;
        enable_shared_from_this<PathingEntity> local_b0;
        shared_ptr<oldscape::dash3d::Decor> local_a0;
        ReturnValue local_70;
        int local_60;
        int local_5c;
        int local_58;
        int local_54;
        EditLine* local_50;
        int local_34;

        int iVar6 = arg2 + 1;
        int iVar5 = field_24 + arg1;
        int iVar4 = field_28 + iVar6;
        GridRect local_90(iVar5, iVar4, field_36 + iVar5, field_40 + iVar4);
        field_136 = local_90.field_0;
        field_140 = local_90.field_4;
        field_144 = local_90.field_8;
        field_148 = local_90.field_12;
        iVar5 = field_24 + arg1 + field_904;
        iVar4 = field_28 + iVar6;
        local_90 = oldscape::dash3d::GridRect(iVar5, iVar4, field_244 + iVar5, field_248 + iVar4 + 2);
        field_252 = local_90.field_0;
        field_256 = local_90.field_4;
        field_260 = local_90.field_8;
        field_264 = local_90.field_12;
        local_90 = oldscape::dash3d::GridRect(field_252, field_256, field_920 + field_252, field_264);
        field_284 = local_90.field_0;
        field_288 = local_90.field_4;
        field_292 = local_90.field_8;
        field_296 = local_90.field_12;
        iVar4 = (int)(((field_512 - field_524) * (float)(int)field_244) / (field_528 - field_524) -
                      (float)(field_236 / 2)) +
                field_904;
        field_232 = iVar4;
        iVar4 = field_24 + arg1 + iVar4;
        iVar5 = field_28 + iVar6;
        local_90 = oldscape::dash3d::GridRect(iVar4, iVar5, field_236 + iVar4, field_240 + iVar5);
        field_268 = local_90.field_0;
        field_272 = local_90.field_4;
        field_276 = local_90.field_8;
        field_280 = local_90.field_12;
        shared_ptr local_48 = field_104.lock();
        bool cVar1 = shared_ptr::operator_cast_to_bool(&local_48);
        if (cVar1) {
            SetColour(3772834047, false);
            iVar4 = field_140;
            pTVar2 = (Tweaky*)local_48.operator->();
            iVar5 = pTVar2->GetTextCenterYOffset(field_40);
            arg1_00 = local_48.operator->();
            Tweaky::TextDraw<eastl::string>(arg1_00, field_136,
                                            *((fixed_string<char, _16>*)(unsigned long)(unsigned int)(iVar5 + iVar4)),
                                            (int)this + 304, -1, true);
            local_a0 = shared_ptr(&local_48);
            DrawBar(&local_a0, field_252, field_256);
            if ((field_545 == '\0') && (field_546 == '\0')) {
                bVar7 = false;
            } else {
                bVar7 = field_208 != '\0';
            }
            iVar4 = field_24 + arg1 + field_232;
            iVar5 = field_28 + iVar6;
            local_34 = arg1;
            SetColour(808464639, bVar7);
            pTVar2 = (Tweaky*)local_48.operator->();
            pTVar2->FillRect(iVar4 + 1, iVar5 + 1, field_236 + 1, field_240 + 1);
            if ((field_545 == '\0') && (field_546 == '\0')) {
                bVar7 = false;
            } else {
                bVar7 = field_208 != '\0';
            }
            SetColour(808501503, bVar7);
            pTVar2 = (Tweaky*)local_48.operator->();
            pTVar2->FillRect(iVar4, iVar5, field_236, field_240);
            if ((field_545 == '\0') && (field_546 == '\0')) {
                bVar7 = false;
            } else {
                bVar7 = field_208 != '\0';
            }
            SetColour(2155937791, bVar7);
            pTVar2 = (Tweaky*)local_48.operator->();
            pTVar2->DrawRect(iVar4, iVar5, field_236, field_240, false);
            local_50 = (EditLine*)&field_592;
            str = (char*)local_50->GetText();
            iVar4 = local_34;
            local_90 = eastl::string(str);
            pTVar2 = (Tweaky*)local_48.operator->();
            pTVar2->GetScroll(local_58, local_54);
            pTVar2 = (Tweaky*)local_48.operator->();
            local_c0.StringView<eastl::fixed_string<char, 40>>(local_90);
            pTVar2->GetTextSize(local_60, local_5c, &local_c0, -1);
            iVar5 = (int)(long)((double)local_60 * 1.3);
            field_920 = iVar5;
            field_292 = iVar5 + field_252;
            local_34 = (iVar4 + field_24 + field_904) - local_58;
            iVar4 = field_28;
            pTVar2 = (Tweaky*)local_48.operator->();
            iVar5 = pTVar2->GetTextCenterYOffset(field_40);
            cVar1 = field_908;
            if (!cVar1) {
                local_50->SetCursorShown(false);
            } else {
                pTVar2 = (Tweaky*)local_48.operator->();
                local_70 = pTVar2->GetFocus();
                local_b0.shared_from_this();
                bVar7 = local_70 == local_b0;
                local_50->SetCursorShown(bVar7);
            }
            local_34 = local_34 + 1;
            iVar5 = ((iVar6 + iVar4) - local_54) + iVar5;
            if (cVar1) {
            }
            iVar4 = field_920 + local_34;
            pLVar3 = (LoginManager*)local_48.operator->();
            font = (shared_ptr<graphics::Font>*)pLVar3->GetDevCredentialsOutputDirectory();
            pLVar3 = (LoginManager*)local_48.operator->();
            rt7Core = (RT7Core*)pLVar3->GetAuthWrapper();
            this_00 = (Js5HTTPQueueRequest*)local_48.operator->();
            fontHelpers = (FontHelpers*)this_00->GetPriority();
            local_50->Draw(local_34, iVar5, iVar4, local_5c + iVar5, *font, rt7Core, fontHelpers);
        }
    }

    // 0x100a48d10
    void GradientSlider::DrawBar(shared_ptr<Tweaky> tweaky, int arg2, int arg3) {
        bool bVar1;
        unsigned int uVar2;
        Tweaky* pTVar3;
        shared_ptr<Tweaky>* this_00;
        unsigned int uVar4;
        float arg3_00;
        shared_ptr<oldscape::dash3d::Decor> local_88;
        uint64_t uStack_70;
        uint8_t local_60[8];

        uint64_t local_78 = *(uint64_t*)field_560;
        uint64_t uVar5 = *(uint64_t*)(field_560 + 8);
        uint64_t local_58 = *(uint64_t*)(field_560 + 16);
        uint64_t uStack_50 = field_584;
        uStack_70._4_4_ = (float)((unsigned long)uVar5 >> 32);
        uStack_70 = uVar5;
        if ((uStack_70._4_4_ < 1.0) ||
            (uStack_50._4_4_ = (float)((unsigned long)uStack_50 >> 32), bVar1 = uStack_50._4_4_ < 1.0, bVar1)) {
            local_88 = shared_ptr(tweaky);
            DrawAlphaBackground(&local_88, arg2, arg3);
        }
        unsigned int local_44 = field_244 - 4;
        if (local_44 != 0) {
            uVar4 = 0;
            this_00 = tweaky;
            do {
                arg3_00 = (float)(int)field_244;
                uVar5 = math::Lerp<math::Vector4T<float>, float>(local_78, local_58, (float)uVar4 / arg3_00);
                new (local_60) math::ColourStorage8888((float)uVar5, (float)((unsigned long)uVar5 >> 32), arg3_00, 0.0);
                uVar2 = local_60->GetX();
                SetColour(uVar2, false);
                pTVar3 = (Tweaky*)(*this_00).operator->();
                pTVar3->FillRect(uVar4 + arg2, arg3, 4, field_248);
                uVar2 = uVar4;
                if (field_244 <= uVar4 + 8) {
                    local_60->Set((float)local_58, local_58._4_4_, (float)uStack_50, uStack_50._4_4_);
                    uVar2 = local_60->GetX();
                    SetColour(uVar2, false);
                    uVar2 = uVar4 + 4;
                    pTVar3 = (Tweaky*)(*tweaky).operator->();
                    pTVar3->FillRect(uVar4 + arg2 + 4, arg3, field_244 - uVar2, field_248);
                    this_00 = tweaky;
                }
                uVar4 = uVar2 + 4;
            } while (uVar4 < local_44);
        }
    }

    // 0x100a48ee0
    void GradientSlider::DrawAlphaBackground(shared_ptr<Tweaky> tweaky, int arg2, int arg3) {
        Tweaky* this_00;
        int iVar3;
        int arg4;
        int arg1;
        int arg3_00;
        int iVar5;
        int iVar6;
        unsigned int uVar7;
        bool bVar8;

        unsigned int uVar4 = field_244 / 7;
        unsigned int uVar1 = field_248 / 7;
        SetColour(2425393407, false);
        unsigned int uVar2 = 0;
        do {
            iVar3 = ~(uVar2 * 8) + uVar2;
            iVar5 = -8;
            uVar7 = 0;
            iVar6 = arg2;
            do {
                if ((uVar2 & 1) == 0) {
                    arg3_00 = 7;
                    arg4 = 7;
                    if (uVar2 == uVar1) {
                        arg4 = field_248 + iVar3;
                    }
                    if (uVar7 == uVar4) {
                        arg3_00 = field_244 + iVar5 + 7;
                    }
                    this_00 = (Tweaky*)(*tweaky).operator->();
                    arg1 = iVar6;
                } else {
                    arg3_00 = 7;
                    arg4 = 7;
                    if (uVar2 == uVar1) {
                        arg4 = field_248 + iVar3;
                    }
                    if (uVar7 - uVar4 == -1) {
                        arg3_00 = field_244 + iVar5;
                    }
                    this_00 = (Tweaky*)(*tweaky).operator->();
                    arg1 = iVar6 + 7;
                }
                this_00->FillRect(arg1, uVar2 * 7 + arg3, arg3_00, arg4);
                uVar7 = uVar7 + 2;
                iVar6 = iVar6 + 14;
                iVar5 = iVar5 - 14;
            } while (uVar7 <= uVar4);
            bVar8 = uVar2 != uVar1;
            uVar2 = uVar2 + 1;
        } while (bVar8);
    }

    // 0x100a491a0
    unsigned long GradientSlider::GetControlSize(int& arg1, int& arg2) {
        int iVar2;
        unsigned int uVar3;
        Tweaky* pTVar4;
        char* str;
        unsigned long uVar5;

        shared_ptr local_40 = field_104.lock();
        if (shared_ptr::operator_cast_to_bool(&local_40)) {
            pTVar4 = (Tweaky*)local_40.operator->();
            str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar5 = field_304.size();
            if (pTVar4->GetTextSize(field_504, field_508, str, uVar5, -1)) {
                iVar2 = eastl::max<int>(15, field_236 + field_504);
                field_904 = iVar2;
                pTVar4 = (Tweaky*)local_40.operator->();
                uVar3 = pTVar4->GetMinControlHeight();
                field_248 = uVar3;
                field_244 = 250 - field_904;
                field_508 = field_508 + 5;
                iVar2 = eastl::max<int>(field_236 / 2 + 250, field_504);
                field_36 = iVar2;
                uVar3 = field_248;
                field_40 = uVar3 + 2;
                field_240 = uVar3;
                field_236 = (int)((float)(int)uVar3 * 0.5);
                field_536 = (field_528 - field_524) / (float)(int)field_244;
            }
        }
        if ((field_36 < 1) || ((int)field_40 < 1)) {
            uVar5 = 0;
        } else {
            arg1 = field_36;
            arg2 = field_40;
            uVar5 = (((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)1);
        }
        return uVar5 & 4294967295;
    }

    // 0x100a493b0
    void GradientSlider::SetCurrentValue(float arg1) {
        field_516 = arg1;
        float fVar1 = math::RoundToNearest<float>(arg1, field_532);
        field_512 = fVar1;
        fVar1 = math::Clamp<float>(field_512, field_524, field_528);
        field_512 = fVar1;
        if (field_910 != '\0') {
            UpdateText();
        }
    }

    // 0x100a49560
    void GradientSlider::UpdateText() {
        basic_string<char, BucketAllocatorEASTL> local_50;
        StringView local_30;

        ToString<eastl::string, float>(&local_50, (unsigned int)&field_512);
        local_30.StringView<eastl::fixed_string<char, 40>>(local_50);
        field_592.SetText(&local_30);
        if (field_512 == 0.0) {
            field_592.End();
        }
    }

    // 0x100a496d0
    uint32_t GradientSlider::OnMouseMove(float arg1, float arg2) {
        int iVar3;
        LoginManager* this_00;
        shared_ptr<graphics::Font>* font;
        TextProperties local_80;
        StringView local_58;
        shared_ptr local_48;
        char* local_30;
        TextFlags local_28;

        uint32_t uVar2 = OnMouseMove(arg1, arg2);
        if (((char)uVar2 == '\0') && (field_909 != '\0')) {
            local_48 = field_104.lock();
            if (shared_ptr::operator_cast_to_bool(&local_48) != '\0') {
                this_00 = (LoginManager*)local_48.operator->();
                font = (shared_ptr<graphics::Font>*)this_00->GetDevCredentialsOutputDirectory();
                local_30 = (char*)(((uint64_t)local_30._4_4_ << 32) | (uint32_t)1);
                local_28 = graphics::TextFlags(&local_30);
                local_80 = graphics::TextProperties(*font, local_28[0]);
                iVar3 = field_252;
                ((Js5HTTPQueueRequest*)local_48.operator->())->GetPriority();
                local_30 = (char*)field_592.GetText();
                local_58.StringView<char const*>(local_30);
                iVar3 = graphics::FontHelpers::PredictCharAtPosMultiline(&local_58, nullptr, ((int)arg1 - iVar3) - 2, 0,
                                                                         local_80);
                field_592.SetPos(iVar3);
            }
        }
        return uVar2;
    }

    // 0x100a499c0
    uint64_t GradientSlider::OnClick(float arg1, float arg2, bool arg3) {
        LoginManager* this_01;
        shared_ptr<graphics::Font>* font;
        long lVar2;
        uint64_t uVar3;
        uint64_t in_register_00000031;
        TextProperties local_98;
        StringView local_70;
        shared_ptr local_60;
        char* local_48;
        TextFlags local_38;

        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg3) == 0) {
            field_546 = '\0';
            field_909 = 0;
            field_592.SetSelecting(false);
            UpdateText();
            return 1;
        }
        uint8_t* this_00 = &field_592;
        this_00->SelectNone();
        field_908 = '\0';
        int iVar4 = (int)arg2;
        bool cVar1 = field_268.IsInside((int)arg1, iVar4);
        if (!cVar1) {
            cVar1 = field_284.IsInside((int)arg1, iVar4);
            if (!cVar1) {
                cVar1 = field_252.IsInside((int)arg1, iVar4);
                if (cVar1) {
                    field_546 = '\x01';
                    SetFocus();
                    SetSlider<float>(((field_528 - field_524) * (arg1 - (float)field_252)) /
                                         (float)(field_260 - field_252) +
                                     field_524);
                    field_910 = 1;
                    UpdateText();
                    goto LAB_100a49bea;
                }
            } else {
                SetFocus();
                local_60 = field_104.lock();
                cVar1 = shared_ptr::operator_cast_to_bool(&local_60);
                if (!cVar1) {
                } else {
                    this_01 = (LoginManager*)local_60.operator->();
                    font = (shared_ptr<graphics::Font>*)this_01->GetDevCredentialsOutputDirectory();
                    local_48 = (char*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)1);
                    local_38 = graphics::TextFlags(&local_48);
                    local_98 = graphics::TextProperties(*font, local_38[0]);
                    iVar4 = field_252;
                    ((Js5HTTPQueueRequest*)local_60.operator->())->GetPriority();
                    local_48 = (char*)this_00->GetText();
                    local_70.StringView<char const*>(local_48);
                    iVar4 = graphics::FontHelpers::PredictCharAtPosMultiline(&local_70, nullptr,
                                                                             ((int)arg1 - iVar4) - 2, 0, local_98);
                    lVar2 = FrameTime::GetCurrentTimeMS();
                    if ((unsigned long)(lVar2 - field_912) < 400) {
                        this_00->SelectAll();
                    } else {
                        this_00->SetPos(iVar4);
                        this_00->SetSelecting(true);
                        this_00->SetSelectionStart(iVar4);
                    }
                    field_912 = lVar2;
                    field_908 = '\x01';
                    field_909 = 1;
                    field_910 = 0;
                    if (cVar1) {
                        return 1;
                    }
                }
            }
            uVar3 = 0;
        } else {
            field_910 = 1;
            field_546 = '\x01';
            SetFocus();
        LAB_100a49bea:
            field_540 = arg1;
            uVar3 = 1;
        }
        return uVar3;
    }

    // 0x100a49c80
    char GradientSlider::HandleChar(int arg1) {
        uint8_t* this_00;
        char* pcVar1;
        long lVar2;
        long lVar3;
        eastl::string local_88;
        enable_shared_from_this<PathingEntity> local_68;
        Event local_58;
        float local_3c;

        return local_31 = field_908;
        if (local_31 != '\0') {
            this_00 = &field_592;
            pcVar1 = (char*)this_00->GetText();
            new (&local_88) eastl::string(pcVar1);
            lVar2 = std::hash<eastl::string>::operator()((hash<eastl::string>*)&local_58, &local_88);
            this_00->HandleChar(arg1);
            lVar3 = std::hash<eastl::string>::operator()((hash<eastl::string>*)&local_58, &local_88);
            pcVar1 = (char*)this_00->GetText();
            FromText<float>(pcVar1, &local_3c);
            SetSlider<float>(local_3c);
            if (lVar2 != lVar3) {
                local_68.shared_from_this();
                local_58 = Event(local_68, 3);
                DoCallback(local_58);
            }
        }
        return local_31;
    }

    // 0x100a49dc0
    unsigned long GradientSlider::HandleKeyDown(int arg1) {
        bool cVar1;
        Tweaky* pTVar3;
        unsigned long in_RCX;
        enable_shared_from_this<PathingEntity> local_48;
        Event local_38;

        if (field_908 == '\0') {
            in_RCX = 0;
            goto LAB_100a49f16;
        }
        if (arg1 < 63232) {
            if (arg1 == 36) {
            LAB_100a49e9a:
                field_908 = '\0';
                field_910 = 1;
                UpdateText();
                local_48.shared_from_this();
                local_38 = Event(local_48, 2);
                DoCallback(local_38);
                in_RCX = (((uint64_t)((int64_t)(in_RCX >> 8)) << 8) | (uint8_t)1);
                goto LAB_100a49f16;
            }
            if (arg1 == 48) {
            LAB_100a49e16:
                local_38 = field_104.lock();
                cVar1 = local_38.operator_cast_to_bool();
                if (!cVar1)
                    goto LAB_100a49ef3;
                pTVar3 = (Tweaky*)local_38.operator->();
                pTVar3->SetFocusNext();
            LAB_100a49e80:
                in_RCX = (((uint64_t)((int64_t)(in_RCX >> 8)) << 8) | (uint8_t)1);
                if (cVar1)
                    goto LAB_100a49f16;
                goto joined_r0x000100a49f00;
            }
        } else if (arg1 == 63232) {
            local_38 = field_104.lock();
            cVar1 = local_38.operator_cast_to_bool();
            if (cVar1) {
                pTVar3 = (Tweaky*)local_38.operator->();
                pTVar3->SetFocusPrevious();
                goto LAB_100a49e80;
            }
        LAB_100a49ef3:
        joined_r0x000100a49f00:
            if (arg1 == 36)
                goto LAB_100a49e9a;
        } else if (arg1 == 63233)
            goto LAB_100a49e16;
        unsigned int uVar2 = field_592.HandleKeyDown(arg1);
        in_RCX = (unsigned long)uVar2;
    LAB_100a49f16:
        return in_RCX & 4294967295;
    }

    // 0x100a49f60
    void GradientSlider::OnFocusChanged(bool arg1) {
        uint64_t in_register_00000031;

        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) == 0) {
            field_592.SetSelecting(false);
            field_592.SetSelectionStart(-1);
            field_910 = 1;
            UpdateText();
        } else if (field_546 == '\0') {
            field_592.SelectAll();
            field_908 = '\x01';
            field_909 = 0;
            field_910 = 0;
        }
    }

    // 0x100a49fd0
    void GradientSlider::SaveSettings(TweakSettingsValue& tweakSettingsValue) {
        eastl::string local_40;

        ToString<eastl::string, float>(&local_40, (int)this + 512);
        uint8_t* this_00 = &tweakSettingsValue.field_32;
        eastl::string* pbVar1 = (eastl::string*)(*this_00)[VALUE_TAG];
        *pbVar1 = &local_40;
        uint32_t local_20 = math::R8G8B8A8FromColour4(*field_560);
        ToString<eastl::string, unsigned int>(&local_40, (unsigned int)&local_20);
        pbVar1 = (eastl::string*)(*this_00)[LEFTCOLOUR_TAG];
        *pbVar1 = &local_40;
        uint32_t local_1c = math::R8G8B8A8FromColour4(*((field_560 + 16)));
        ToString<eastl::string, unsigned int>(&local_40, (unsigned int)&local_1c);
        pbVar1 = (eastl::string*)(*this_00)[RIGHTCOLOUR_TAG];
        *pbVar1 = &local_40;
    }

    // 0x100a4a200
    unsigned long GradientSlider::LoadSettings(const TweakSettingsValue& tweakSettingsValue) {
        bool bVar1;
        unsigned int uVar2;
        eastl::string* str1;
        Rect<float>* this_00;
        uint64_t local_68[3];

        uint64_t local_50 = tweakSettingsValue.field_32.begin();
        uint64_t local_48 = tweakSettingsValue.field_32.end();
        uint64_t uVar3 = local_50 != local_48;
        char local_31 = (char)uVar3;
        if (local_31 != '\0') {
            do {
                str1 = (eastl::string*)*local_50;
                bVar1 = *str1 == VALUE_TAG;
                if (bVar1) {
                    LoadSettings(*((str1 + 32)));
                } else {
                    bVar1 = *str1 == LEFTCOLOUR_TAG;
                    if (bVar1) {
                        uVar2 = eastl::stoul(*tweakSettingsValue, 10);
                        local_68[0] = math::Colour4FromR8G8B8A8(uVar2);
                        this_00 = (Rect<float>*)field_560;
                    } else {
                        bVar1 = *str1 == RIGHTCOLOUR_TAG;
                        if (!bVar1)
                            goto LAB_100a4a28f;
                        uVar2 = eastl::stoul(*tweakSettingsValue, 10);
                        local_68[0] = math::Colour4FromR8G8B8A8(uVar2);
                        this_00 = (Rect<float>*)(field_560 + 16);
                    }
                    *this_00 = *local_68;
                }
            LAB_100a4a28f:
                ++local_50;
                uVar3 = local_50 != local_48;
            } while ((char)uVar3 != '\0');
        }
        return local_31 ^ 1;
    }

} // namespace jag::tweak

namespace jag {
    // 0x100a418f0
    shared_ptr_if_not_array<tweak::GradientSlider>::type
    make_shared<tweak::GradientSlider, char const*&, float, float, float>(const char*& arg1, float&& arg2, float&& arg3,
                                                                          float&& arg4) {
        ref_counter_base* ref_counter_base;
        int local_44;
        GradientSlider* local_40[2];

        auto arg1_00 = aligned_alloc(960, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<tweak::GradientSlider>::type result;
        } else {
            local_40[0] = placement_new<tweak::GradientSlider, char const*&, float&, float&, float&>(
                (void*)((long)arg1_00 + 32), arg1, arg2, arg3, arg4);
            local_44 = 1;
            ref_counter_base = (ref_counter_base*)
                placement_new<ref_counter_shared<tweak::GradientSlider>, int, tweak::GradientSlider*&>(
                    arg1_00, &local_44, local_40);
            shared_ptr_do_enable_shared_from_this<tweak::GradientSlider>(ref_counter_base, local_40[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x100a41a70
    shared_ptr_if_not_array<tweak::GradientSlider>::type
    make_shared<tweak::GradientSlider, char const (&)[10], float, float, float&>(char const (&arg1)[10], float&& arg2,
                                                                                 float&& arg3, float& arg4) {
        ref_counter_base* ref_counter_base;
        int local_44;
        GradientSlider* local_40[2];

        auto arg1_00 = aligned_alloc(960, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<tweak::GradientSlider>::type result;
        } else {
            local_40[0] = placement_new<tweak::GradientSlider, char const(&)[11], float, float, float>(
                (void*)((long)arg1_00 + 32), arg1, arg2, arg3, arg4);
            local_44 = 1;
            ref_counter_base = (ref_counter_base*)
                placement_new<ref_counter_shared<tweak::GradientSlider>, int, tweak::GradientSlider*&>(
                    arg1_00, &local_44, local_40);
            shared_ptr_do_enable_shared_from_this<tweak::GradientSlider>(ref_counter_base, local_40[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x100a41d60
    shared_ptr_if_not_array<tweak::Button>::type make_shared<tweak::Button, char const (&)[2]>(char const (&arg1)[2]) {
        ref_counter_base* ref_counter_base;
        int local_34;
        Button* local_30[2];

        auto arg1_00 = aligned_alloc(256, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<tweak::Button>::type result;
        } else {
            local_30[0] = placement_new<tweak::Button, char const(&)[2]>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            ref_counter_base =
                (ref_counter_base*)placement_new<ref_counter_shared<tweak::Button>, int, tweak::Button*&>(
                    arg1_00, &local_34, local_30);
            shared_ptr_do_enable_shared_from_this<tweak::Button>(ref_counter_base, local_30[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x100a42c10
    bool operator!= <tweak::Button, tweak::Control>(const shared_ptr<tweak::Button>& button,
                                                    const shared_ptr<tweak::Control>& control) {
        long lVar1 = button.end();
        return control.end() != lVar1;
    }

    // 0x100a43050
    shared_ptr_if_not_array<tweak::Button>::type make_shared<tweak::Button, char const*&, int&>(const char*& arg1,
                                                                                                int& arg2) {
        ref_counter_base* ref_counter_base;
        int local_3c;
        Button* local_38[2];

        auto arg1_00 = aligned_alloc(256, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<tweak::Button>::type result;
        } else {
            local_38[0] = placement_new<tweak::Button, char const*&, int&>((void*)((long)arg1_00 + 32), arg1, arg2);
            local_3c = 1;
            ref_counter_base =
                (ref_counter_base*)placement_new<ref_counter_shared<tweak::Button>, int, tweak::Button*&>(
                    arg1_00, &local_3c, local_38);
            shared_ptr_do_enable_shared_from_this<tweak::Button>(ref_counter_base, local_38[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x100a436e0
    shared_ptr_if_not_array<tweak::ColourPicker>::type
    make_shared<tweak::ColourPicker, char const*&, bool, math::Range<float>&>(const char*& arg1, bool&& arg2,
                                                                              math::Range<float>& range) {
        ref_counter_base* ref_counter_base;
        int local_44;
        ColourPicker* local_40[2];

        auto arg1_00 = aligned_alloc(496, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<tweak::ColourPicker>::type result;
        } else {
            local_40[0] = placement_new<tweak::ColourPicker, char const*&, bool&, math::Range<float>&>(
                (void*)((long)arg1_00 + 32), arg1, arg2, range);
            local_44 = 1;
            ref_counter_base =
                (ref_counter_base*)placement_new<ref_counter_shared<tweak::ColourPicker>, int, tweak::ColourPicker*&>(
                    arg1_00, &local_44, local_40);
            shared_ptr_do_enable_shared_from_this<tweak::ColourPicker>(ref_counter_base, local_40[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x100a43aa0
    shared_ptr_if_not_array<tweak::ColourPicker>::type
    make_shared<tweak::ColourPicker, char const*&, bool, math::Range<float>&, math::Range<float>&>(
        const char*& arg1, bool&& arg2, math::Range<float>& range1, math::Range<float>& range2) {
        ref_counter_base* ref_counter_base;
        int local_44;
        ColourPicker* local_40[2];

        auto arg1_00 = aligned_alloc(496, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<tweak::ColourPicker>::type result;
        } else {
            local_40[0] =
                placement_new<tweak::ColourPicker, char const*&, bool&, math::Range<float>&, math::Range<float>&>(
                    (void*)((long)arg1_00 + 32), arg1, arg2, range1, range2);
            local_44 = 1;
            ref_counter_base =
                (ref_counter_base*)placement_new<ref_counter_shared<tweak::ColourPicker>, int, tweak::ColourPicker*&>(
                    arg1_00, &local_44, local_40);
            shared_ptr_do_enable_shared_from_this<tweak::ColourPicker>(ref_counter_base, local_40[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x100a43dc0
    shared_ptr_if_not_array<tweak::Label>::type make_shared<tweak::Label, char const*&>(const char*& arg1) {
        ref_counter_base* ref_counter_base;
        int local_34;
        Label* local_30[2];

        auto arg1_00 = aligned_alloc(256, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<tweak::Label>::type result;
        } else {
            local_30[0] = placement_new<tweak::Label, char const*&>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            ref_counter_base = (ref_counter_base*)placement_new<ref_counter_shared<tweak::Label>, int, tweak::Label*&>(
                arg1_00, &local_34, local_30);
            shared_ptr_do_enable_shared_from_this<tweak::Label>(ref_counter_base, local_30[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x100a44190
    shared_ptr_if_not_array<tweak::Container>::type
    make_shared<tweak::Container, char const*&, bool&>(const char*& arg1, bool& arg2) {
        ref_counter_base* ref_counter_base;
        int local_3c;
        Container* local_38[2];

        auto arg1_00 = aligned_alloc(336, 16);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<tweak::Container>::type result;
        } else {
            local_38[0] = placement_new<tweak::Container, char const*&, bool&>((void*)((long)arg1_00 + 32), arg1, arg2);
            local_3c = 1;
            ref_counter_base =
                (ref_counter_base*)placement_new<ref_counter_shared<tweak::Container>, int, tweak::Container*&>(
                    arg1_00, &local_3c, local_38);
            shared_ptr_do_enable_shared_from_this<tweak::Container>(ref_counter_base, local_38[0], nullptr);
            ref_counter_base->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_base, (unsigned long)local_38[0]);
        }
        return result;
    }

} // namespace jag

namespace jag::math {
    // 0x100a419c0
    unsigned int GetDecimalPlaces<float>(float arg1) {
        float fVar2 = (float)::abs(arg1 * 0.1);
        float local_14 = (float)::floor(arg1 + 0.5);
        local_14 = arg1 - local_14;
        float fVar3 = (float)::abs(local_14);
        unsigned int uVar1 = 0;
        if (fVar2 < fVar3) {
            uVar1 = 0;
            do {
                uVar1 = uVar1 + 1;
                fVar3 = (float)::floor(local_14 * 10.0 + 0.5);
                local_14 = local_14 * 10.0 - fVar3;
                fVar3 = (float)::abs(local_14);
            } while (fVar2 < fVar3);
        }
        return uVar1;
    }

} // namespace jag::math
