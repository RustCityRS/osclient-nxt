// libs/tweaky/Tweaky_GradientSlider.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.tweaky

#include "Tweaky_GradientSlider.h"

namespace jag::tweak {
    // 0x103bc2190, 32 bytes, __common; set at startup by ___cxx_global_var_init.38
    eastl::string GradientSlider::VALUE_TAG = "value";

    // 0x103bc21b0, 32 bytes, __common; set at startup by ___cxx_global_var_init.40
    eastl::string GradientSlider::LEFTCOLOUR_TAG = "leftColour";

    // 0x103bc21d0, 32 bytes, __common; set at startup by ___cxx_global_var_init.42
    eastl::string GradientSlider::RIGHTCOLOUR_TAG = "rightColour";

    // 0x10002d860: the linker folded this into oldscape::option::Option<int>::IsValidValue(int const&) const, which has identical code
    GradientSlider::HasKeyboardNavigation() const;

    // 0x100a41170, 48 bytes, placed by class name and debug map
    // GradientSlider::SetGradient(math::Vector4T<float> const&, math::Vector4T<float> const&)
    void GradientSlider::SetGradient(Vector4T* param_1, Vector4T* param_2) {
        math::Rect<float>::operator=((Rect<float>*)field_560, (Rect*)param_1);
        math::Rect<float>::operator=((Rect<float>*)(field_560 + 16), (Rect*)param_2);
    }

    // 0x100a41b40, 96 bytes, placed by class name and debug map
    // GradientSlider::SetGradient(unsigned int, unsigned int)
    void GradientSlider::SetGradient(uint param_1, uint param_2) {
        undefined8 local_28[2];

        local_28[0] = math::Colour4FromR8G8B8A8(param_1);
        math::Rect<float>::operator=((Rect<float>*)field_560, (Rect*)local_28);
        local_28[0] = math::Colour4FromR8G8B8A8(param_2);
        math::Rect<float>::operator=((Rect<float>*)(field_560 + 16), (Rect*)local_28);
    }

    // 0x100a483d0, 128 bytes, base-object constructor, placed by class name
    // GradientSlider::GradientSlider(char const*, float, float, float)
    void GradientSlider::GradientSlider(char* param_1, float param_2, float param_3, float param_4) {
        new (this) Slider(param_1, param_2, param_3, param_4);
        field_0 = &PTR__GradientSlider_100f1d4c8;
        new (field_560) Gradient();
        new (&field_592) EditLine();
        field_904 = 15;
        field_908 = '\0';
        field_909 = 0;
        field_910 = 1;
        field_912 = 0;
        field_920 = 30;
    }

    // 0x100a48770, 16 bytes, complete-object constructor, placed by class name
    // GradientSlider::GradientSlider(char const*, float, float, float): jumps straight to the base-object constructor

    // 0x100a48780, 1424 bytes, placed by class name
    // GradientSlider::Draw(int, int)
    void GradientSlider::Draw(int param_1, int param_2) {
        char cVar1;
        shared_ptr sVar2;
        bool bVar3;
        Tweaky* pTVar4;
        char* pcVar5;
        LoginManager* pLVar6;
        shared_ptr* psVar7;
        RT7Core* pRVar8;
        Js5HTTPQueueRequest* this_00;
        FontHelpers* pFVar9;
        int iVar10;
        shared_ptr* extraout_RDX;
        int iVar11;
        int iVar13;
        StringView SVar14;
        undefined4 in_stack_ffffffffffffff2c;
        long in_stack_ffffffffffffff30;
        StringView local_c0;
        shared_ptr local_b0;
        shared_ptr<oldscape::dash3d::Decor> local_a0[16];
        GridRect local_90;
        allocator local_70[16];
        int local_60;
        int local_5c;
        int local_58;
        int local_54;
        EditLine* local_50;
        shared_ptr local_48;
        int local_34;

        iVar13 = param_2 + 1;
        iVar11 = field_24 + param_1;
        iVar10 = field_28 + iVar13;
        new (&local_90) oldscape::dash3d::GridRect(iVar11, iVar10, field_36 + iVar11, field_40 + iVar10);
        field_136 = local_90.field_0;
        field_140 = local_90.field_4;
        field_144 = local_90.field_8;
        field_148 = local_90.field_12;
        iVar11 = field_24 + param_1 + field_904;
        iVar10 = field_28 + iVar13;
        new (&local_90) oldscape::dash3d::GridRect(iVar11, iVar10, field_244 + iVar11, field_248 + iVar10 + 2);
        field_252 = local_90.field_0;
        field_256 = local_90.field_4;
        field_260 = local_90.field_8;
        field_264 = local_90.field_12;
        new (&local_90) oldscape::dash3d::GridRect(field_252, field_256, field_920 + field_252, field_264);
        field_284 = local_90.field_0;
        field_288 = local_90.field_4;
        field_292 = local_90.field_8;
        field_296 = local_90.field_12;
        iVar10 = (int)(((field_512 - field_524) * (float)(int)field_244) / (field_528 - field_524) -
                       (float)(field_236 / 2)) +
                 field_904;
        field_232 = iVar10;
        iVar10 = field_24 + param_1 + iVar10;
        iVar11 = field_28 + iVar13;
        new (&local_90) oldscape::dash3d::GridRect(iVar10, iVar11, field_236 + iVar10, field_240 + iVar11);
        field_268 = local_90.field_0;
        field_272 = local_90.field_4;
        field_276 = local_90.field_8;
        field_280 = local_90.field_12;
        weak_ptr<oldscape::rs2lib::IfType>::lock();
        bVar3 = shared_ptr::operator_cast_to_bool(&local_48);
        if (bVar3) {
            SetColour(3772834047, false);
            iVar10 = field_140;
            pTVar4 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_48);
            iVar11 = pTVar4->GetTextCenterYOffset(field_40);
            pTVar4 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_48);
            Tweaky::TextDraw<eastl::string>(pTVar4, field_136, iVar11 + iVar10, (basic_string*)&field_304, -1, -1,
                                            false);
            shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_a0, &local_48);
            sVar2._4_4_ = in_stack_ffffffffffffff2c;
            sVar2._0_4_ = 0;
            sVar2.field_8 = in_stack_ffffffffffffff30;
            DrawBar(this, sVar2, (int)local_a0, field_252);
            local_a0->~shared_ptr();
            if ((field_545 == '\0') && (field_546 == '\0')) {
                bVar3 = false;
            } else {
                bVar3 = field_208 != '\0';
            }
            iVar10 = field_24 + param_1 + field_232;
            iVar11 = field_28 + iVar13;
            local_34 = param_1;
            SetColour(808464639, bVar3);
            pTVar4 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_48);
            pTVar4->FillRect(iVar10 + 1, iVar11 + 1, field_236 + 1, field_240 + 1);
            if ((field_545 == '\0') && (field_546 == '\0')) {
                bVar3 = false;
            } else {
                bVar3 = field_208 != '\0';
            }
            SetColour(808501503, bVar3);
            pTVar4 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_48);
            pTVar4->FillRect(iVar10, iVar11, field_236, field_240);
            if ((field_545 == '\0') && (field_546 == '\0')) {
                bVar3 = false;
            } else {
                bVar3 = field_208 != '\0';
            }
            SetColour(2155937791, bVar3);
            pTVar4 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_48);
            pTVar4->DrawRect(iVar10, iVar11, field_236, field_240, false);
            local_50 = (EditLine*)&field_592;
            pcVar5 = (char*)local_50->GetText();
            eastl::allocator::allocator(local_70, "EASTL basic_string");
            iVar10 = local_34;
            new (&local_90) eastl::string(pcVar5, local_70);
            pTVar4 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_48);
            pTVar4->GetScroll(&local_58, &local_54);
            pTVar4 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_48);
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_c0,
                                                                                          (fixed_string*)&local_90);
            SVar14.field_8 = (uchar*)4294967295;
            SVar14.field_0 = (ulong)&local_c0;
            pTVar4->GetTextSize(&local_60, &local_5c, SVar14, 0);
            iVar11 = (int)(long)((double)local_60 * 1.3);
            field_920 = iVar11;
            field_292 = iVar11 + field_252;
            local_34 = (iVar10 + field_24 + field_904) - local_58;
            iVar10 = field_28;
            pTVar4 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_48);
            iVar11 = pTVar4->GetTextCenterYOffset(field_40);
            cVar1 = field_908;
            if (cVar1 == '\0') {
                local_50->SetCursorShown(false);
            } else {
                shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_48);
                local_70->GetFocus();
                local_b0.shared_from_this();
                bVar3 = operator==((jag*)local_70, &local_b0, extraout_RDX);
                local_50->SetCursorShown(bVar3);
                local_b0.~shared_ptr();
            }
            local_34 = local_34 + 1;
            iVar11 = ((iVar13 + iVar10) - local_54) + iVar11;
            if (cVar1 != '\0') {
                local_70->~shared_ptr();
            }
            iVar10 = field_920 + local_34;
            pLVar6 = (LoginManager*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_48);
            psVar7 = (shared_ptr*)pLVar6->GetDevCredentialsOutputDirectory();
            pLVar6 = (LoginManager*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_48);
            pRVar8 = (RT7Core*)pLVar6->GetAuthWrapper();
            this_00 = (Js5HTTPQueueRequest*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_48);
            pFVar9 = (FontHelpers*)this_00->GetPriority();
            local_50->Draw(local_34, iVar11, iVar10, local_5c + iVar11, psVar7, pRVar8, pFVar9);
            local_90.~basic_string();
        }
        local_48.~shared_ptr();
    }

    // 0x100a48d10, 464 bytes, placed by class name
    // GradientSlider::DrawBar(shared_ptr<Tweaky>, int, int)
    void GradientSlider::DrawBar(shared_ptr param_1, int param_2, int param_3) {
        bool bVar1;
        uint uVar2;
        Tweaky* pTVar3;
        int in_ECX;
        undefined4 in_register_00000014;
        Vector4T* pVVar4;
        Vector4T* extraout_RDX;
        Vector4T* extraout_RDX_00;
        Vector4T* extraout_RDX_01;
        undefined4 in_register_00000034;
        shared_ptr* this_00;
        uint uVar5;
        undefined8 uVar6;
        float fVar7;
        shared_ptr<oldscape::dash3d::Decor> asStackY_108[128];
        shared_ptr in_stack_ffffffffffffff78;
        undefined1 local_78[12];
        float fStack_6c;
        undefined1 local_60[8];
        undefined8 local_58;
        undefined8 uStack_50;
        uint local_44;
        shared_ptr* local_40;
        int local_34;

        local_40 = (shared_ptr*)CONCAT44(in_register_00000034, param_2);
        pVVar4 = (Vector4T*)CONCAT44(in_register_00000014, param_3);
        local_78._0_4_ = *(float*)(field_560 + 0);
        local_78._4_4_ = *(float*)(field_560 + 4);
        unique0x10000198 = *(undefined8*)(field_560 + 8);
        local_58 = *(undefined8*)(field_560 + 16);
        uStack_50 = field_584;
        local_34 = in_ECX;
        if ((fStack_6c < 1.0) ||
            (uStack_50._4_4_ = (float)((ulong)uStack_50 >> 32), bVar1 = uStack_50._4_4_ < 1.0, bVar1)) {
            shared_ptr<oldscape::dash3d::Decor>::shared_ptr(asStackY_108 + 128, local_40);
            DrawAlphaBackground(this, in_stack_ffffffffffffff78, (int)(asStackY_108 + 128), param_3);
            ((asStackY_108 + 128))->~shared_ptr();
            pVVar4 = extraout_RDX;
        }
        local_44 = field_244 - 4;
        if (local_44 != 0) {
            uVar5 = 0;
            this_00 = local_40;
            do {
                fVar7 = (float)(int)field_244;
                uVar6 = math::Lerp<math::Vector4T<float>, float>((math*)local_78, (Vector4T*)&local_58, pVVar4,
                                                                 (float)uVar5 / fVar7);
                new (local_60) math::ColourStorage8888<math::RGBA8StorageLayout>(
                    (float)uVar6, (float)((ulong)uVar6 >> 32), fVar7, 0.0);
                uVar2 = local_60->GetX();
                SetColour(uVar2, false);
                pTVar3 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)this_00);
                pTVar3->FillRect(uVar5 + param_3, local_34, 4, field_248);
                pVVar4 = extraout_RDX_00;
                uVar2 = uVar5;
                if (field_244 <= uVar5 + 8) {
                    local_60->Set((float)local_58, local_58._4_4_, (float)uStack_50, uStack_50._4_4_);
                    uVar2 = local_60->GetX();
                    SetColour(uVar2, false);
                    uVar2 = uVar5 + 4;
                    pTVar3 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)local_40);
                    pTVar3->FillRect(uVar5 + param_3 + 4, local_34, field_244 - uVar2, field_248);
                    pVVar4 = extraout_RDX_01;
                    this_00 = local_40;
                }
                uVar5 = uVar2 + 4;
            } while (uVar5 < local_44);
        }
    }

    // 0x100a48ee0, 432 bytes, placed by class name
    // GradientSlider::DrawAlphaBackground(shared_ptr<Tweaky>, int, int)
    void GradientSlider::DrawAlphaBackground(shared_ptr param_1, int param_2, int param_3) {
        Tweaky* this_00;
        int in_ECX;
        uint uVar1;
        uint uVar2;
        int iVar3;
        uint uVar4;
        int iVar5;
        int iVar6;
        undefined4 in_register_00000034;
        int iVar7;
        int iVar8;
        int iVar9;
        uint uVar10;
        bool bVar11;

        uVar4 = field_244 / 7;
        uVar1 = field_248 / 7;
        SetColour(2425393407, false);
        uVar2 = 0;
        do {
            iVar3 = ~(uVar2 * 8) + uVar2;
            iVar8 = -8;
            uVar10 = 0;
            iVar9 = param_3;
            do {
                if ((uVar2 & 1) == 0) {
                    iVar7 = 7;
                    iVar5 = 7;
                    if (uVar2 == uVar1) {
                        iVar5 = field_248 + iVar3;
                    }
                    if (uVar10 == uVar4) {
                        iVar7 = field_244 + iVar8 + 7;
                    }
                    this_00 = (Tweaky*)shared_ptr<Tweaky>::operator->(
                        (shared_ptr<Tweaky>*)CONCAT44(in_register_00000034, param_2));
                    iVar6 = iVar9;
                } else {
                    iVar7 = 7;
                    iVar5 = 7;
                    if (uVar2 == uVar1) {
                        iVar5 = field_248 + iVar3;
                    }
                    if (uVar10 - uVar4 == -1) {
                        iVar7 = field_244 + iVar8;
                    }
                    this_00 = (Tweaky*)shared_ptr<Tweaky>::operator->(
                        (shared_ptr<Tweaky>*)CONCAT44(in_register_00000034, param_2));
                    iVar6 = iVar9 + 7;
                }
                this_00->FillRect(iVar6, uVar2 * 7 + in_ECX, iVar7, iVar5);
                uVar10 = uVar10 + 2;
                iVar9 = iVar9 + 14;
                iVar8 = iVar8 + -14;
            } while (uVar10 <= uVar4);
            bVar11 = uVar2 != uVar1;
            uVar2 = uVar2 + 1;
        } while (bVar11);
    }

    // 0x100a491a0, 432 bytes, placed by class name
    // GradientSlider::GetControlSize(int&, int&)
    ulong GradientSlider::GetControlSize(int* param_1, int* param_2) {
        int iVar3;
        uint uVar4;
        Tweaky* pTVar5;
        char* pcVar6;
        ulong uVar7;
        shared_ptr local_40;

        weak_ptr<oldscape::rs2lib::IfType>::lock();
        if (shared_ptr::operator_cast_to_bool(&local_40)) {
            pTVar5 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
            pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar7 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (pTVar5->GetTextSize(&field_504, &field_508, pcVar6, uVar7, -1) != '\0') {
                iVar3 = eastl::max<int>(15, field_236 + field_504);
                field_904 = iVar3;
                pTVar5 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_40);
                uVar4 = pTVar5->GetMinControlHeight();
                field_248 = uVar4;
                field_244 = 250 - field_904;
                field_508 = field_508 + 5;
                iVar3 = eastl::max<int>(field_236 / 2 + 250, field_504);
                field_36 = iVar3;
                uVar4 = field_248;
                field_40 = uVar4 + 2;
                field_240 = uVar4;
                field_236 = (int)((float)(int)uVar4 * 0.5);
                field_536 = (field_528 - field_524) / (float)(int)field_244;
            }
        }
        if ((field_36 < 1) || ((int)field_40 < 1)) {
            uVar7 = 0;
        } else {
            *param_1 = field_36;
            *param_2 = field_40;
            uVar7 = CONCAT71((int7)((ulong)this >> 8), 1);
        }
        local_40.~shared_ptr();
        return uVar7 & 4294967295;
    }

    // 0x100a493b0, 96 bytes, placed by class name
    // GradientSlider::SetCurrentValue(float)
    void GradientSlider::SetCurrentValue(float param_1) {
        float fVar1;

        field_516 = param_1;
        fVar1 = math::RoundToNearest<float>(param_1, field_532);
        field_512 = fVar1;
        fVar1 = math::Clamp<float>(&field_512, &field_524, &field_528);
        field_512 = fVar1;
        if (field_910 != '\0') {
            UpdateText(this);
        }
    }

    // 0x100a49560, 144 bytes, placed by class name
    // GradientSlider::UpdateText()
    void GradientSlider::UpdateText() {
        uchar* extraout_RDX;
        StringView SVar1;
        jag local_50[32];
        StringView local_30;

        ToString<eastl::string, float>(local_50, &field_512, 10);
        StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_30,
                                                                                      (fixed_string*)local_50);
        SVar1.field_8 = extraout_RDX;
        SVar1.field_0 = (ulong)&local_30;
        (&field_592, SVar1)->SetText();
        if (field_512 == 0.0) {
            (&field_592)->End();
        }
        local_50->~basic_string();
    }

    // 0x100a496d0, 288 bytes, placed by class name
    // GradientSlider::OnMouseMove(float, float)
    undefined4 GradientSlider::OnMouseMove(float param_1, float param_2) {
        undefined4 uVar2;
        int iVar3;
        LoginManager* this_00;
        shared_ptr* psVar4;
        Js5HTTPQueueRequest* this_01;
        TextProperties* in_R9;
        StringView SVar6;
        TextFlags in_stack_ffffffffffffff78;
        TextProperties local_80;
        StringView local_58;
        shared_ptr local_48;
        char* local_30;
        TextFlags local_28[8];

        uVar2 = OnMouseMove(param_1, param_2);
        if (((char)uVar2 == '\0') && (field_909 != '\0')) {
            weak_ptr<oldscape::rs2lib::IfType>::lock();
            if (shared_ptr::operator_cast_to_bool(&local_48)) {
                this_00 = (LoginManager*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_48);
                psVar4 = (shared_ptr*)this_00->GetDevCredentialsOutputDirectory();
                local_30 = (char*)CONCAT44(local_30._4_4_, 1);
                graphics::TextFlags::TextFlags(local_28, &local_30, 1);
                new (&local_80) graphics::TextProperties(psVar4, in_stack_ffffffffffffff78);
                iVar3 = field_252;
                this_01 = (Js5HTTPQueueRequest*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_48);
                this_01->GetPriority();
                local_30 = (char*)(&field_592)->GetText();
                StringView::StringView<char const*>(&local_58, &local_30);
                SVar6.field_8 = (uchar*)0;
                SVar6.field_0 = (ulong)&local_58;
                iVar3 = graphics::FontHelpers::PredictCharAtPosMultiline(
                    SVar6, (int*)(ulong)(((int)param_1 - iVar3) - 2), 0, (int)&local_80, in_R9);
                (&field_592, iVar3)->SetPos();
            }
            local_48.~shared_ptr();
        }
        return uVar2;
    }

    // 0x100a499c0, 704 bytes, placed by class name
    // GradientSlider::OnClick(float, float, bool)
    undefined8 GradientSlider::OnClick(float param_1, float param_2, bool param_3) {
        undefined1* this_00;
        char cVar1;
        bool bVar2;
        LoginManager* this_01;
        shared_ptr* psVar3;
        Js5HTTPQueueRequest* this_02;
        long lVar4;
        undefined8 uVar5;
        int iVar6;
        undefined7 in_register_00000031;
        TextProperties* in_R9;
        StringView SVar8;
        TextProperties aTStack_1298[128];
        TextFlags in_stack_ffffffffffffff68;
        StringView local_70;
        shared_ptr local_60;
        char* local_48;
        TextFlags local_38[8];

        if ((int)CONCAT71(in_register_00000031, param_3) == 0) {
            field_546 = '\0';
            field_909 = 0;
            (&field_592, false)->SetSelecting();
            UpdateText(this);
            return 1;
        }
        this_00 = &field_592;
        this_00->SelectNone();
        field_908 = '\0';
        iVar6 = (int)param_2;
        cVar1 = (&field_268, (int)param_1, iVar6)->IsInside();
        if (cVar1 == '\0') {
            cVar1 = (&field_284, (int)param_1, iVar6)->IsInside();
            if (cVar1 == '\0') {
                cVar1 = (&field_252, (int)param_1, iVar6)->IsInside();
                if (cVar1 != '\0') {
                    field_546 = '\x01';
                    Control::SetFocus();
                    Slider::SetSlider<float>((Slider*)this, ((field_528 - field_524) * (param_1 - (float)field_252)) /
                                                                    (float)(field_260 - field_252) +
                                                                field_524);
                    field_910 = 1;
                    UpdateText(this);
                    goto LAB_100a49bea;
                }
            } else {
                Control::SetFocus();
                weak_ptr<oldscape::rs2lib::IfType>::lock();
                bVar2 = shared_ptr::operator_cast_to_bool(&local_60);
                if (bVar2) {
                    this_01 = (LoginManager*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_60);
                    psVar3 = (shared_ptr*)this_01->GetDevCredentialsOutputDirectory();
                    local_48 = (char*)CONCAT44(local_48._4_4_, 1);
                    graphics::TextFlags::TextFlags(local_38, &local_48, 1);
                    graphics::TextProperties::TextProperties(aTStack_1298 + 128, psVar3, in_stack_ffffffffffffff68);
                    iVar6 = field_252;
                    this_02 = (Js5HTTPQueueRequest*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_60);
                    this_02->GetPriority();
                    local_48 = (char*)this_00->GetText();
                    StringView::StringView<char const*>(&local_70, &local_48);
                    SVar8.field_8 = (uchar*)0;
                    SVar8.field_0 = (ulong)&local_70;
                    iVar6 = graphics::FontHelpers::PredictCharAtPosMultiline(
                        SVar8, (int*)(ulong)(((int)param_1 - iVar6) - 2), 0, (int)aTStack_1298 + 4608, in_R9);
                    lVar4 = FrameTime::GetCurrentTimeMS();
                    if ((ulong)(lVar4 - field_912) < 400) {
                        this_00->SelectAll();
                    } else {
                        this_00->SetPos(iVar6);
                        this_00->SetSelecting(true);
                        this_00->SetSelectionStart(iVar6);
                    }
                    field_912 = lVar4;
                    field_908 = '\x01';
                    field_909 = 1;
                    field_910 = 0;
                    local_60.~shared_ptr();
                    if (bVar2) {
                        return 1;
                    }
                } else {
                    local_60.~shared_ptr();
                }
            }
            uVar5 = 0;
        } else {
            field_910 = 1;
            field_546 = '\x01';
            Control::SetFocus();
        LAB_100a49bea:
            field_540 = param_1;
            uVar5 = 1;
        }
        return uVar5;
    }

    // 0x100a49c80, 320 bytes, placed by class name
    // GradientSlider::HandleChar(int)
    char GradientSlider::HandleChar(int param_1) {
        undefined1* this_00;
        char* pcVar1;
        long lVar2;
        long lVar3;
        jag* this_01;
        float* extraout_RDX;
        eastl::string local_88[32];
        enable_shared_from_this<PathingEntity> local_68[16];
        Event local_58;
        float local_3c;
        char local_31;

        local_31 = field_908;
        if (local_31 != '\0') {
            this_00 = &field_592;
            pcVar1 = (char*)this_00->GetText();
            new (&local_58) eastl::allocator("EASTL basic_string");
            eastl::string::basic_string(local_88, pcVar1, (allocator*)&local_58);
            lVar2 = std::hash<eastl::string>::operator()((hash<eastl::string>*)&local_58, (basic_string*)local_88);
            this_00->HandleChar(param_1);
            lVar3 = std::hash<eastl::string>::operator()((hash<eastl::string>*)&local_58, (basic_string*)local_88);
            this_01 = (jag*)this_00->GetText();
            FromText<float>(this_01, (char*)&local_3c, extraout_RDX);
            Slider::SetSlider<float>((Slider*)this, local_3c);
            if (lVar2 != lVar3) {
                local_68->shared_from_this();
                new (&local_58) Event(local_68, 3);
                DoCallback(&local_58);
                local_58.~LRUHashCacheWrapper();
                local_68->~shared_ptr();
            }
            eastl::string::~basic_string(local_88);
        }
        return local_31;
    }

    // 0x100a49dc0, 416 bytes, placed by class name
    // GradientSlider::HandleKeyDown(int)
    ulong GradientSlider::HandleKeyDown(int param_1) {
        bool bVar1;
        uint uVar2;
        Tweaky* pTVar3;
        ulong in_RCX;
        enable_shared_from_this<PathingEntity> local_48[16];
        Event local_38;

        if (field_908 == '\0') {
            in_RCX = 0;
            goto LAB_100a49f16;
        }
        if (param_1 < 63232) {
            if (param_1 == 36) {
            LAB_100a49e9a:
                field_908 = '\0';
                field_910 = 1;
                UpdateText(this);
                local_48->shared_from_this();
                new (&local_38) Event(local_48, 2);
                DoCallback(&local_38);
                local_38.~LRUHashCacheWrapper();
                local_48->~shared_ptr();
                in_RCX = CONCAT71((int7)(in_RCX >> 8), 1);
                goto LAB_100a49f16;
            }
            if (param_1 == 48) {
            LAB_100a49e16:
                weak_ptr<oldscape::rs2lib::IfType>::lock();
                bVar1 = local_38.operator_cast_to_bool();
                if (!bVar1)
                    goto LAB_100a49ef3;
                pTVar3 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_38);
                pTVar3->SetFocusNext();
            LAB_100a49e80:
                local_38.~shared_ptr();
                in_RCX = CONCAT71((int7)(in_RCX >> 8), 1);
                if (bVar1 != false)
                    goto LAB_100a49f16;
                goto joined_r0x000100a49f00;
            }
        } else if (param_1 == 63232) {
            weak_ptr<oldscape::rs2lib::IfType>::lock();
            bVar1 = local_38.operator_cast_to_bool();
            if (bVar1) {
                pTVar3 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)&local_38);
                pTVar3->SetFocusPrevious();
                bVar1 = true;
                goto LAB_100a49e80;
            }
        LAB_100a49ef3:
            local_38.~shared_ptr();
        joined_r0x000100a49f00:
            if (param_1 == 36)
                goto LAB_100a49e9a;
        } else if (param_1 == 63233)
            goto LAB_100a49e16;
        uVar2 = (&field_592, param_1)->HandleKeyDown();
        in_RCX = (ulong)uVar2;
    LAB_100a49f16:
        return in_RCX & 4294967295;
    }

    // 0x100a49f60, 112 bytes, placed by class name
    // GradientSlider::OnFocusChanged(bool)
    void GradientSlider::OnFocusChanged(bool param_1) {
        undefined7 in_register_00000031;

        if ((int)CONCAT71(in_register_00000031, param_1) == 0) {
            (&field_592, false)->SetSelecting();
            (&field_592, -1)->SetSelectionStart();
            field_910 = 1;
            UpdateText(this);
        } else if (field_546 == '\0') {
            (&field_592)->SelectAll();
            field_908 = '\x01';
            field_909 = 0;
            field_910 = 0;
        }
    }

    // 0x100a49fd0, 256 bytes, placed by class name
    // GradientSlider::SaveSettings(TweakSettingsValue&)
    void GradientSlider::SaveSettings(TweakSettingsValue* param_1) {
        eastl::string* pbVar1;
        undefined1* this_00;
        jag local_40[32];
        uint local_20;
        uint local_1c;

        ToString<eastl::string, float>(local_40, &field_512, 10);
        this_00 = &param_1->field_32;
        pbVar1 = (eastl::string*)
            eastl::map<eastl::string, TweakSettingsValue, eastl::less<eastl::string>, eastl::allocator>::operator[](
                (map<eastl::string, TweakSettingsValue, eastl::less<eastl::string>, eastl::allocator>*)this_00,
                (basic_string*)&VALUE_TAG);
        eastl::string::operator=(pbVar1, (basic_string*)local_40);
        local_40->~basic_string();
        local_20 = math::R8G8B8A8FromColour4((Vector4T*)field_560);
        ToString<eastl::string, unsigned int>(local_40, &local_20, 10);
        pbVar1 = (eastl::string*)
            eastl::map<eastl::string, TweakSettingsValue, eastl::less<eastl::string>, eastl::allocator>::operator[](
                (map<eastl::string, TweakSettingsValue, eastl::less<eastl::string>, eastl::allocator>*)this_00,
                (basic_string*)&LEFTCOLOUR_TAG);
        eastl::string::operator=(pbVar1, (basic_string*)local_40);
        local_40->~basic_string();
        local_1c = math::R8G8B8A8FromColour4((Vector4T*)(field_560 + 16));
        ToString<eastl::string, unsigned int>(local_40, &local_1c, 10);
        pbVar1 = (eastl::string*)
            eastl::map<eastl::string, TweakSettingsValue, eastl::less<eastl::string>, eastl::allocator>::operator[](
                (map<eastl::string, TweakSettingsValue, eastl::less<eastl::string>, eastl::allocator>*)this_00,
                (basic_string*)&RIGHTCOLOUR_TAG);
        eastl::string::operator=(pbVar1, (basic_string*)local_40);
        local_40->~basic_string();
    }

    // 0x100a4a200, 352 bytes, placed by class name
    // GradientSlider::LoadSettings(TweakSettingsValue const&)
    ulong GradientSlider::LoadSettings(TweakSettingsValue* param_1) {
        bool bVar1;
        uint uVar2;
        undefined7 extraout_var;
        undefined7 extraout_var_00;
        basic_string* pbVar3;
        undefined7 uVar4;
        hashtable_iterator_base* extraout_RDX;
        Rect<float>* this_00;
        undefined1 auVar5[16];
        undefined8 local_68[3];
        undefined8 local_50;
        undefined8 local_48;
        undefined1 local_31;

        local_50 = eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                                 eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true,
                                 true>::begin();
        auVar5 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        local_48 = auVar5._0_8_;
        local_31 = eastl::operator!=((eastl*)&local_50, (hashtable_iterator_base*)&local_48, auVar5._8_8_);
        uVar4 = extraout_var;
        if ((bool)local_31) {
            do {
                pbVar3 = (basic_string*)eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator*(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_50);
                bVar1 = eastl::operator==(pbVar3, (basic_string*)&VALUE_TAG);
                if (bVar1) {
                    LoadSettings((TweakSettingsValue*)(pbVar3 + 32));
                } else {
                    bVar1 = eastl::operator==(pbVar3, (basic_string*)&LEFTCOLOUR_TAG);
                    if (bVar1) {
                        uVar2 = eastl::stoul((basic_string*)param_1, 10);
                        local_68[0] = math::Colour4FromR8G8B8A8(uVar2);
                        this_00 = (Rect<float>*)field_560;
                    } else {
                        bVar1 = eastl::operator==(pbVar3, (basic_string*)&RIGHTCOLOUR_TAG);
                        if (!bVar1)
                            goto LAB_100a4a28f;
                        uVar2 = eastl::stoul((basic_string*)param_1, 10);
                        local_68[0] = math::Colour4FromR8G8B8A8(uVar2);
                        this_00 = (Rect<float>*)(field_560 + 16);
                    }
                    math::Rect<float>::operator=(this_00, (Rect*)local_68);
                }
            LAB_100a4a28f:
                eastl::rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                operator++(
                    (rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)&local_50);
                bVar1 = eastl::operator!=((eastl*)&local_50, (hashtable_iterator_base*)&local_48, extraout_RDX);
                uVar4 = extraout_var_00;
            } while (bVar1);
        }
        return CONCAT71(uVar4, local_31) ^ 1;
    }

    // 0x100a68b50, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.38
    void ___cxx_global_var_init_38() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&GradientSlider::VALUE_TAG) eastl::string("value", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &GradientSlider::VALUE_TAG, 4294967296);
    }

    // 0x100a68bb0, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.40
    void ___cxx_global_var_init_40() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&GradientSlider::LEFTCOLOUR_TAG) eastl::string("leftColour", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &GradientSlider::LEFTCOLOUR_TAG, 4294967296);
    }

    // 0x100a68c10, 96 bytes, placed by the data it initialises
    // ___cxx_global_var_init.42
    void ___cxx_global_var_init_42() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (&GradientSlider::RIGHTCOLOUR_TAG) eastl::string("rightColour", local_20);
        ___cxa_atexit(PTR__basic_string_100ee6c80, &GradientSlider::RIGHTCOLOUR_TAG, 4294967296);
    }

} // namespace jag::tweak

namespace jag {
    // 0x100a418f0, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<tweak::GradientSlider>::type make_shared<tweak::GradientSlider, char const*&, float, float, float>(char const*&, float&&, float&&, float&&)
    /* shared_ptr_if_not_array<tweak::GradientSlider>::type
   make_shared<tweak::GradientSlider, char const*&, float&, float&, float&>(char const*&,
   float&, float&, float&) */

    jag* make_shared<tweak::GradientSlider, char const*&, float&, float&, float&>(char** param_1, float* param_2,
                                                                                  float* param_3, float* param_4) {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_44;
        GradientSlider* local_40[2];

        pvVar1 = (void*)aligned_alloc(960, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_40[0] = placement_new<tweak::GradientSlider, char const*&, float&, float&, float&>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4);
            local_44 = 1;
            prVar2 = (ref_counter_base*)
                placement_new<ref_counter_shared<tweak::GradientSlider>, int, tweak::GradientSlider*&>(
                    pvVar1, &local_44, local_40);
            shared_ptr_do_enable_shared_from_this<tweak::GradientSlider>(prVar2, local_40[0], (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100a41a70, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<tweak::GradientSlider>::type make_shared<tweak::GradientSlider, char const (&) [10], float, float, float&>(char const (&) [10], float&&, float&&, float&)
    /* shared_ptr_if_not_array<tweak::GradientSlider>::type
   make_shared<tweak::GradientSlider, char const (&) [11], float, float, float>(char const
   (&) [11], float&&, float&&, float&&) */

    jag* make_shared<tweak::GradientSlider, char const (&)[11], float, float, float>(char* param_1, float* param_2,
                                                                                     float* param_3, float* param_4) {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_44;
        GradientSlider* local_40[2];

        pvVar1 = (void*)aligned_alloc(960, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_40[0] = placement_new<tweak::GradientSlider, char const(&)[11], float, float, float>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4);
            local_44 = 1;
            prVar2 = (ref_counter_base*)
                placement_new<ref_counter_shared<tweak::GradientSlider>, int, tweak::GradientSlider*&>(
                    pvVar1, &local_44, local_40);
            shared_ptr_do_enable_shared_from_this<tweak::GradientSlider>(prVar2, local_40[0], (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100a41d60, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<tweak::Button>::type make_shared<tweak::Button, char const (&) [2]>(char const (&) [2])
    jag* make_shared<tweak::Button, char const (&)[2]>(char* param_1) {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_34;
        Button* local_30[2];

        pvVar1 = (void*)aligned_alloc(256, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_30[0] = placement_new<tweak::Button, char const(&)[2]>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = (ref_counter_base*)placement_new<ref_counter_shared<tweak::Button>, int, tweak::Button*&>(
                pvVar1, &local_34, local_30);
            shared_ptr_do_enable_shared_from_this<tweak::Button>(prVar2, local_30[0], (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x100a42c10, 48 bytes, inline, placed by debug map only (low confidence)
    // bool operator!=<tweak::Button, tweak::Control>(shared_ptr<tweak::Button> const&, shared_ptr<tweak::Control> const&)
    /* bool TEMPNAMEPLACEHOLDERVALUE(shared_ptr<tweak::Button> const&,
   shared_ptr<tweak::Control> const&) */

    bool operator!=(shared_ptr* param_1, shared_ptr* param_2) {
        long lVar1;
        long lVar2;

        lVar1 = param_1->end();
        lVar2 = param_2->end();
        return lVar2 != lVar1;
    }

    // 0x100a43050, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<tweak::Button>::type make_shared<tweak::Button, char const*&, int&>(char const*&, int&)
    jag* make_shared<tweak::Button, char const*&, int&>(char** param_1, int* param_2) {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_3c;
        Button* local_38[2];

        pvVar1 = (void*)aligned_alloc(256, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_38[0] =
                placement_new<tweak::Button, char const*&, int&>((void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = (ref_counter_base*)placement_new<ref_counter_shared<tweak::Button>, int, tweak::Button*&>(
                pvVar1, &local_3c, local_38);
            shared_ptr_do_enable_shared_from_this<tweak::Button>(prVar2, local_38[0], (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x100a436e0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<tweak::ColourPicker>::type make_shared<tweak::ColourPicker, char const*&, bool, math::Range<float>&>(char const*&, bool&&, math::Range<float>&)
    /* shared_ptr_if_not_array<tweak::ColourPicker>::type
   make_shared<tweak::ColourPicker, char const*&, bool&, math::Range<float>&>(char
   const*&, bool&, math::Range<float>&) */

    jag* make_shared<tweak::ColourPicker, char const*&, bool&, math::Range<float>&>(char** param_1, bool* param_2,
                                                                                    Range* param_3) {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_44;
        ColourPicker* local_40[2];

        pvVar1 = (void*)aligned_alloc(496, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_40[0] = placement_new<tweak::ColourPicker, char const*&, bool&, math::Range<float>&>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3);
            local_44 = 1;
            prVar2 =
                (ref_counter_base*)placement_new<ref_counter_shared<tweak::ColourPicker>, int, tweak::ColourPicker*&>(
                    pvVar1, &local_44, local_40);
            shared_ptr_do_enable_shared_from_this<tweak::ColourPicker>(prVar2, local_40[0], (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100a43aa0, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<tweak::ColourPicker>::type make_shared<tweak::ColourPicker, char const*&, bool, math::Range<float>&, math::Range<float>&>(char const*&, bool&&, math::Range<float>&, math::Range<float>&)
    /* shared_ptr_if_not_array<tweak::ColourPicker>::type
   make_shared<tweak::ColourPicker, char const*&, bool&, math::Range<float>&,
   math::Range<float>&>(char const*&, bool&, math::Range<float>&,
   math::Range<float>&) */

    jag* jag::make_shared<tweak::ColourPicker, char const*&, bool&, math::Range<float>&, math::Range<float>&>(
        char** param_1, bool* param_2, Range* param_3, Range* param_4) {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_44;
        ColourPicker* local_40[2];

        pvVar1 = (void*)aligned_alloc(496, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_40[0] =
                placement_new<tweak::ColourPicker, char const*&, bool&, math::Range<float>&, math::Range<float>&>(
                    (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4);
            local_44 = 1;
            prVar2 =
                (ref_counter_base*)placement_new<ref_counter_shared<tweak::ColourPicker>, int, tweak::ColourPicker*&>(
                    pvVar1, &local_44, local_40);
            shared_ptr_do_enable_shared_from_this<tweak::ColourPicker>(prVar2, local_40[0], (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100a43dc0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<tweak::Label>::type make_shared<tweak::Label, char const*&>(char const*&)
    jag* make_shared<tweak::Label, char const*&>(char** param_1) {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_34;
        Label* local_30[2];

        pvVar1 = (void*)aligned_alloc(256, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_30[0] = placement_new<tweak::Label, char const*&>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = (ref_counter_base*)placement_new<ref_counter_shared<tweak::Label>, int, tweak::Label*&>(
                pvVar1, &local_34, local_30);
            shared_ptr_do_enable_shared_from_this<tweak::Label>(prVar2, local_30[0], (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x100a44190, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<tweak::Container>::type make_shared<tweak::Container, char const*&, bool&>(char const*&, bool&)
    jag* make_shared<tweak::Container, char const*&, bool&>(char** param_1, bool* param_2) {
        void* pvVar1;
        ref_counter_base* prVar2;
        int local_3c;
        Container* local_38[2];

        pvVar1 = (void*)aligned_alloc(336, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_38[0] =
                placement_new<tweak::Container, char const*&, bool&>((void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = (ref_counter_base*)placement_new<ref_counter_shared<tweak::Container>, int, tweak::Container*&>(
                pvVar1, &local_3c, local_38);
            shared_ptr_do_enable_shared_from_this<tweak::Container>(prVar2, local_38[0], (enable_shared_type*)0);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

} // namespace jag

namespace jag::math {
    // 0x100a419c0, 176 bytes, inline, placed by debug map only (low confidence)
    // unsigned int GetDecimalPlaces<float>(float)
    uint GetDecimalPlaces<float>(float param_1) {
        uint uVar1;
        float fVar2;
        float fVar3;
        float local_14;

        fVar2 = (float)::abs(param_1 * 0.1);
        local_14 = (float)floor(param_1 + 0.5);
        local_14 = param_1 - local_14;
        fVar3 = (float)::abs(local_14);
        uVar1 = 0;
        if (fVar2 < fVar3) {
            uVar1 = 0;
            do {
                uVar1 = uVar1 + 1;
                fVar3 = (float)floor(local_14 * 10.0 + 0.5);
                local_14 = local_14 * 10.0 - fVar3;
                fVar3 = (float)::abs(local_14);
            } while (fVar2 < fVar3);
        }
        return uVar1;
    }

} // namespace jag::math
