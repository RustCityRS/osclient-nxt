// libs/tweaky/Tweaky_Window.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.tweaky

namespace jag::tweak {
    class Window {
    public:
        // virtual methods in vtable order
        virtual ~Window();
        Window(input::Input*, graphics::RT7Core*, int, shared_ptr<Tweaky> const&, int);
        void SetPosition(int, int);
        void Draw();
        HandleMouseDown(float, float, graphics::ScaleManager const&);
        WindowBoundsCheck(float, float);
        TweakyBoundsCheck(float, float);
        BoundsCheckTop(float, float);
        BoundsCheckLeftSide(float, float);
        BoundsCheckRightSide(float, float);
        BoundsCheckBottom(float, float);
        HandleMouseMove(float, float, graphics::ScaleManager const&);
        HandleMouseOver(float, float, graphics::ScaleManager const&);
        HandleMouseUp(float, float, graphics::ScaleManager const&);
        HandleMouseWheel(float, float, float, graphics::ScaleManager const&);

        // data members, from how the methods use this: 2712 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[264];
        InputHandler field_272; // offset 272
        char _unknown_2584[8];
        Input* field_2592;   // offset 2592
        RT7Core* field_2600; // offset 2600
        int field_2608;      // offset 2608
        uint field_2612;     // offset 2612
        uint field_2616;     // offset 2616
        char _unknown_2620[4];
        shared_ptr field_2624; // offset 2624
        int field_2640;        // offset 2640
        int field_2644;        // offset 2644
        int field_2648;        // offset 2648
        int field_2652;        // offset 2652
        int field_2656;        // offset 2656
        int field_2660;        // offset 2660
        int field_2664;        // offset 2664
        int field_2668;        // offset 2668
        int field_2672;        // offset 2672
        int field_2676;        // offset 2676
        int field_2680;        // offset 2680
        int field_2684;        // offset 2684
        int field_2688;        // offset 2688
        float field_2692;      // offset 2692
        float field_2696;      // offset 2696
        undefined1 field_2700; // offset 2700
        undefined1 field_2701; // offset 2701
        undefined1 field_2702; // offset 2702
        undefined1 field_2703; // offset 2703
        undefined1 field_2704; // offset 2704
        undefined1 field_2705; // offset 2705
        char _unknown_2706[6];
    };

    // 0x100a50280, 656 bytes, base-object constructor, placed by class name
    // Window::Window(input::Input*, graphics::RT7Core*, int, shared_ptr<Tweaky> const&, int)
    void Window::Window(Input* param_1, RT7Core* param_2, int param_3, shared_ptr* param_4, int param_5) {
        undefined1* this_00;
        undefined1* this_01;
        undefined1* this_02;
        undefined1* this_03;
        undefined1* this_04;
        undefined1* this_05;
        int iVar1;
        Window* local_38;

        new (&field_8) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        field_0 = &PTR__Window_100f1d8e0;
        this_00 = &field_32;
        std::function<bool(float, float)>::function((function<bool(float, float)>*)this_00);
        this_01 = &field_80;
        std::function<bool(float, float)>::function((function<bool(float, float)>*)this_01);
        this_02 = &field_128;
        std::function<bool(float, float)>::function((function<bool(float, float)>*)this_02);
        this_03 = &field_176;
        std::function<bool(float, float)>::function((function<bool(float, float)>*)this_03);
        this_04 = &field_224;
        std::function<bool(float, float, float, float)>::function((function<bool(float, float, float, float)>*)this_04);
        this_05 = field_272;
        new (this_05) input::InputHandler();
        field_2592 = param_1;
        field_2600 = param_2;
        field_2608 = param_3;
        field_2612 = 1720254463;
        field_2616 = 255;
        new (field_2624, param_4) shared_ptr<oldscape::dash3d::Decor>();
        field_2640 = param_5;
        field_2644 = 0;
        field_2648 = 0;
        field_2652 = 0;
        field_2656 = 0;
        field_2660 = 0;
        field_2664 = 0;
        field_2668 = 0;
        field_2672 = 0;
        field_2676 = 0;
        field_2680 = 0;
        field_2684 = 0;
        field_2688 = 0;
        field_2700 = 0;
        field_2701 = 0;
        field_2702 = 0;
        field_2703 = 0;
        field_2704 = 0;
        field_2705 = 0;
        local_38 = this;
        std::function<bool(float, float)>::operator=((function<bool(float, float)>*)this_00, (__24*)&local_38);
        local_38 = this;
        std::function<bool(float, float)>::operator=((function<bool(float, float)>*)this_01, (__25*)&local_38);
        local_38 = this;
        std::function<bool(float, float)>::operator=((function<bool(float, float)>*)this_02, (__26*)&local_38);
        local_38 = this;
        std::function<bool(float, float)>::operator=((function<bool(float, float)>*)this_03, (__27*)&local_38);
        local_38 = this;
        std::function<bool(float, float, float, float)>::operator=((function<bool(float, float, float, float)>*)this_04,
                                                                   (__28*)&local_38);
        this_05->RegisterLMouseDown(this_00);
        this_05->RegisterLMouseUp(this_01);
        this_05->RegisterMouseMove(this_02);
        this_05->RegisterMouseMove(this_03);
        this_05->RegisterMouseWheel(this_04);
        (field_2592, "1tweaky", (InputHandler*)this_05)->RegisterInputHandler();
        iVar1 = field_2600->GetInterfaceWidth();
        field_2652 = iVar1;
        iVar1 = field_2600->GetInterfaceHeight();
        field_2656 = iVar1;
        iVar1 = field_2652;
        shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)field_2624);
        SetPosition(this, iVar1 + field_2640 * -3 + -300, field_2640);
        field_2676 = field_2640 * 2;
    }

    // 0x100a50710, 144 bytes, placed by class name
    // Window::SetPosition(int, int)
    void Window::SetPosition(int param_1, int param_2) {
        int iVar1;
        int local_20;
        int local_1c;

        field_2684 = param_1;
        field_2688 = param_2;
        local_20 = 0;
        local_1c = field_2652 - field_2640;
        iVar1 = math::Clamp<int>(&field_2684, &local_20, &local_1c);
        field_2684 = iVar1;
        local_20 = 0;
        local_1c = field_2656 - field_2640;
        iVar1 = math::Clamp<int>(&field_2688, &local_20, &local_1c);
        field_2688 = iVar1;
    }

    // 0x100a507a0, 16 bytes, complete-object constructor, placed by class name
    // Window::Window(input::Input*, graphics::RT7Core*, int, shared_ptr<Tweaky> const&, int): jumps straight to the base-object constructor

    // 0x100a507b0, 272 bytes, base-object destructor, placed by class name
    // Window::~Window()
    void Window::~Window() {
        field_0 = &PTR__Window_100f1d8e0;
        field_272->Reset();
        (field_2592, "1tweaky")->UnregisterInputHandler();
        shared_ptr<Tweaky>::reset();
        field_2624->~shared_ptr();
        field_272->~InputHandler();
        std::function<bool(float, float, float, float)>::~function(
            (function<bool(float, float, float, float)>*)&field_224);
        std::function<bool(float, float)>::~function((function<bool(float, float)>*)&field_176);
        std::function<bool(float, float)>::~function((function<bool(float, float)>*)&field_128);
        std::function<bool(float, float)>::~function((function<bool(float, float)>*)&field_80);
        std::function<bool(float, float)>::~function((function<bool(float, float)>*)&field_32);
        (&field_8)->~enable_shared_from_this();
    }

    // 0x100a50900, 16 bytes, complete-object destructor, placed by class name
    // Window::~Window(): jumps straight to the base-object destructor

    // 0x100a50910, 32 bytes, deleting destructor, placed by class name
    // Window::~Window()
    void Window::~Window() {
        ~Window(this);
        operator_delete(this);
    }

    // 0x100a50930, 800 bytes, placed by class name
    // Window::Draw()
    void Window::Draw() {
        undefined1* this_00;
        int iVar2;
        undefined4 uVar3;
        GUIManager* this_01;
        NXTPixToolkit* this_02;
        shared_ptr<Container>* this_03;
        long* plVar4;
        Viewport* pVVar5;
        OutputMergerState* this_04;
        RenderContext* this_05;
        RenderTargets* pRVar6;
        Tweaky* pTVar7;
        undefined1 local_88[48];
        DrawCallState local_58;

        this_00 = field_2624;
        if (this_00->operator_cast_to_bool()) {
            this_01 = (GUIManager*)field_2600->GetGUIManager();
            this_02 = (NXTPixToolkit*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)this_00);
            this_03 = (shared_ptr<Container>*)this_02->GetScreen();
            plVar4 = (long*)shared_ptr<Container>::operator->(this_03);
            (**(code**)(*plVar4 + 40))(plVar4, &field_2660, &field_2664);
            iVar2 = field_2600->GetInterfaceWidth();
            field_2652 = iVar2;
            iVar2 = field_2600->GetInterfaceHeight();
            field_2656 = iVar2;
            iVar2 = field_2652;
            uVar3 = eastl::max<int>(field_2660 + field_2676, field_2640 << 2);
            iVar2 = eastl::min<graphics::GraphicsQuality>(iVar2, uVar3);
            field_2644 = iVar2;
            iVar2 = field_2656;
            uVar3 = eastl::max<int>(field_2664 + field_2680, field_2640 << 2);
            iVar2 = eastl::min<graphics::GraphicsQuality>(iVar2, uVar3);
            field_2648 = iVar2;
            iVar2 = field_2640 * 2;
            field_2668 = field_2660 + iVar2;
            field_2672 = iVar2 + field_2664;
            new ((local_88 + 24)) graphics::ClippingState(field_2600);
            (field_2600, field_2684, field_2688, field_2668, field_2672, true)->SetClippingRectangle();
            new (&local_58) render::DrawCallState();
            pVVar5 = (Viewport*)local_58.GetOutputMergerState();
            new (local_88) render::Viewport(0, 0, field_2652, field_2656, 0.0, 1.0);
            render::OutputMergerState::PushViewport(pVVar5);
            this_04 = (OutputMergerState*)((RT7Core*)&local_58)->GetOutputMergerState();
            this_05 = (RenderContext*)local_58.GetRenderContext();
            pRVar6 = (RenderTargets*)this_05->GetBackBuffer();
            this_04->SetRenderTargets(pRVar6);
            this_01->Begin(&local_58);
            0->AddElement(0, 0, 0, this_01, field_2684, field_2688, field_2644 + field_2684, field_2648 + field_2688,
                          field_2616 | field_2608, 0, 1);
            0->AddElement(0, 0, 0, this_01, field_2684, field_2688, field_2644 + field_2684, field_2640 + field_2688,
                          field_2616 | field_2612, 0, 1);
            pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)this_00);
            pTVar7->SetVisibleArea(field_2644 + field_2640 * -2, field_2648 + field_2640 * -2);
            pTVar7 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)this_00);
            iVar2 = field_2640;
            pTVar7->Draw(field_2684 + iVar2, field_2688 + iVar2, field_2644 + iVar2 * -2, field_2648 + iVar2 * -2);
            this_01->Render(0);
            this_01->End();
            local_58.~DrawCallState();
            ((local_88 + 24))->~ClippingState();
        }
    }

    // 0x100a50c60, 32 bytes, inline, placed by class name and debug map
    // Tweaky::SetVisibleArea(int, int)
    void Tweaky::SetVisibleArea(int param_1, int param_2) {
        m_visibleX = param_1;
        m_visibleY = param_2;
    }

    // 0x100a50c80, 288 bytes, placed by class name
    // Window::HandleMouseDown(float, float, graphics::ScaleManager const&)
    undefined4 Window::HandleMouseDown(float param_1, float param_2, ScaleManager* param_3) {
        char cVar1;
        undefined1 uVar2;
        undefined4 uVar3;
        Tweaky* this_00;
        float local_28;
        float local_24;
        float local_20;
        float local_1c;

        uVar3 = 0;
        local_28 = param_1;
        local_24 = param_2;
        param_3->ScreenToInterfacePosition(&local_28, &local_24, false);
        cVar1 = WindowBoundsCheck(this, local_28, local_24);
        if (cVar1 != '\0') {
            field_2701 = 1;
            local_20 = local_28;
            local_1c = local_24;
            cVar1 = TweakyBoundsCheck(this, local_28, local_24);
            if (cVar1 == '\0') {
                field_2692 = local_20;
                field_2696 = local_1c;
                uVar2 = BoundsCheckTop(this, local_20, local_1c);
                field_2702 = uVar2;
                uVar2 = BoundsCheckLeftSide(this, local_20, local_1c);
                field_2704 = uVar2;
                uVar2 = BoundsCheckRightSide(this, local_20, local_1c);
                field_2703 = uVar2;
                uVar2 = BoundsCheckBottom(this, local_20, local_1c);
                field_2705 = uVar2;
                field_2700 = 1;
                uVar3 = 1;
            } else {
                this_00 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)field_2624);
                uVar3 = this_00->HandleMouseDown(local_28, local_24);
            }
        }
        return uVar3;
    }

    // 0x100a50da0, 144 bytes, placed by class name
    // Window::WindowBoundsCheck(float, float)
    undefined4 Window::WindowBoundsCheck(float param_1, float param_2) {
        int iVar2;
        Tweaky* this_00;

        this_00 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)field_2624);
        if ((((this_00->IsAttached() == '\0') && ((float)field_2684 < param_1)) &&
             (param_1 < (float)(field_2684 + field_2644))) &&
            ((float)field_2688 < param_2)) {
            iVar2 = field_2688 + field_2648;
            return CONCAT31((int3)((uint)iVar2 >> 8), param_2 < (float)iVar2);
        }
        return 0;
    }

    // 0x100a50e30, 96 bytes, placed by class name
    // Window::TweakyBoundsCheck(float, float)
    undefined4 Window::TweakyBoundsCheck(float param_1, float param_2) {
        int iVar1;

        iVar1 = field_2640;
        if ((((float)(iVar1 + field_2684) < param_1) && (param_1 < (float)((field_2684 - iVar1) + field_2644))) &&
            ((float)(field_2688 + iVar1) < param_2)) {
            return CONCAT31((int3)((uint)iVar1 >> 8), param_2 < (float)((field_2688 - iVar1) + field_2648));
        }
        return 0;
    }

    // 0x100a50e90, 80 bytes, placed by class name
    // Window::BoundsCheckTop(float, float)
    undefined4 Window::BoundsCheckTop(float param_1, float param_2) {
        int iVar1;

        if ((((float)field_2684 < param_1) && (param_1 < (float)(field_2684 + field_2644))) &&
            ((float)field_2688 < param_2)) {
            iVar1 = field_2688 + field_2640;
            return CONCAT31((int3)((uint)iVar1 >> 8), param_2 < (float)iVar1);
        }
        return 0;
    }

    // 0x100a50ee0, 80 bytes, placed by class name
    // Window::BoundsCheckLeftSide(float, float)
    undefined4 Window::BoundsCheckLeftSide(float param_1, float param_2) {
        int iVar1;

        if ((((float)field_2684 < param_1) && (param_1 < (float)(field_2684 + field_2640))) &&
            ((float)field_2688 < param_2)) {
            iVar1 = field_2688 + field_2648;
            return CONCAT31((int3)((uint)iVar1 >> 8), param_2 < (float)iVar1);
        }
        return 0;
    }

    // 0x100a50f30, 96 bytes, placed by class name
    // Window::BoundsCheckRightSide(float, float)
    undefined4 Window::BoundsCheckRightSide(float param_1, float param_2) {
        undefined4 uVar1;
        int iVar2;

        iVar2 = field_2644 + field_2684;
        uVar1 = 0;
        if (((float)(iVar2 - field_2640) < param_1) && (param_1 < (float)iVar2)) {
            if (param_2 <= (float)field_2688) {
                return 0;
            }
            iVar2 = field_2688 + field_2648;
            uVar1 = CONCAT31((int3)((uint)iVar2 >> 8), param_2 < (float)iVar2);
        }
        return uVar1;
    }

    // 0x100a50f90, 96 bytes, placed by class name
    // Window::BoundsCheckBottom(float, float)
    undefined4 Window::BoundsCheckBottom(float param_1, float param_2) {
        int iVar1;

        if ((((float)field_2684 < param_1) && (param_1 < (float)(field_2684 + field_2644))) &&
            (iVar1 = field_2648 + field_2688, (float)(iVar1 - field_2640) < param_2)) {
            return CONCAT31((int3)((uint)iVar1 >> 8), param_2 < (float)iVar1);
        }
        return 0;
    }

    // 0x100a50ff0, 592 bytes, placed by class name
    // Window::HandleMouseMove(float, float, graphics::ScaleManager const&)
    undefined4 Window::HandleMouseMove(float param_1, float param_2, ScaleManager* param_3) {
        int iVar2;
        undefined4 uVar3;
        Tweaky* pTVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        int iVar11;
        int iVar12;
        enable_shared_from_this<PathingEntity> local_38[16];
        int local_28;
        int local_24;
        float local_20;
        float local_1c;

        uVar3 = 0;
        local_20 = param_1;
        local_1c = param_2;
        param_3->ScreenToInterfacePosition(&local_20, &local_1c, false);
        local_38->shared_from_this();
        if (field_2701 != '\0') {
            if (field_2700 == '\0') {
                if (TweakyBoundsCheck(this, local_20, local_1c) == '\0') {
                    uVar3 = 0;
                } else {
                    pTVar4 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)field_2624);
                    uVar3 = pTVar4->HandleMouseMove(local_20, local_1c);
                }
            } else {
                iVar8 = (int)(local_20 - field_2692);
                iVar2 = (int)(local_1c - field_2696);
                if (field_2702 == '\0') {
                    iVar10 = field_2640 * 2;
                    iVar7 = field_2640 * 4;
                    iVar9 = iVar7 - field_2660;
                    if (field_2704 != '\0') {
                        iVar6 = field_2676;
                        iVar5 = iVar6 - iVar8;
                        field_2676 = iVar5;
                        iVar11 = iVar10;
                        if ((iVar10 <= iVar5) || (iVar12 = iVar8, iVar11 = iVar9, iVar5 <= iVar9)) {
                            field_2676 = iVar11;
                            iVar12 = iVar6 - iVar11;
                        }
                        field_2684 = field_2684 + iVar12;
                    }
                    if (field_2703 != '\0') {
                        iVar8 = iVar8 + field_2676;
                        field_2676 = iVar8;
                        iVar6 = iVar10;
                        if ((iVar10 <= iVar8) || (iVar6 = iVar9, iVar8 <= iVar9)) {
                            field_2676 = iVar6;
                        }
                    }
                    if (field_2705 != '\0') {
                        iVar7 = iVar7 - field_2664;
                        iVar2 = iVar2 + field_2680;
                        field_2680 = iVar2;
                        if ((iVar10 <= iVar2) || (iVar10 = iVar7, iVar2 <= iVar7)) {
                            field_2680 = iVar10;
                        }
                    }
                } else {
                    field_2684 = field_2684 + iVar8;
                    field_2688 = field_2688 + iVar2;
                    local_28 = 0;
                    local_24 = field_2652 - field_2640;
                    iVar2 = math::Clamp<int>(&field_2684, &local_28, &local_24);
                    field_2684 = iVar2;
                    local_28 = 0;
                    local_24 = field_2656 - field_2640;
                    iVar2 = math::Clamp<int>(&field_2688, &local_28, &local_24);
                    field_2688 = iVar2;
                    pTVar4 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)field_2624);
                    pTVar4->ValidateScroll();
                }
                field_2692 = local_20;
                field_2696 = local_1c;
                uVar3 = 1;
            }
        }
        local_38->~shared_ptr();
        return uVar3;
    }

    // 0x100a51250, 128 bytes, placed by class name
    // Window::HandleMouseOver(float, float, graphics::ScaleManager const&)
    undefined4 Window::HandleMouseOver(float param_1, float param_2, ScaleManager* param_3) {
        undefined4 uVar2;
        Tweaky* this_00;
        float local_20;
        float local_1c;

        uVar2 = 0;
        local_20 = param_1;
        local_1c = param_2;
        param_3->ScreenToInterfacePosition(&local_20, &local_1c, false);
        if (TweakyBoundsCheck(this, local_20, local_1c) != '\0') {
            this_00 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)field_2624);
            uVar2 = this_00->HandleMouseOver(local_20, local_1c);
        }
        return uVar2;
    }

    // 0x100a512d0, 144 bytes, placed by class name
    // Window::HandleMouseUp(float, float, graphics::ScaleManager const&)
    undefined8 Window::HandleMouseUp(float param_1, float param_2, ScaleManager* param_3) {
        Tweaky* this_00;
        undefined8 uVar2;
        float local_18;
        float local_14;

        local_18 = param_1;
        local_14 = param_2;
        param_3->ScreenToInterfacePosition(&local_18, &local_14, false);
        field_2701 = 0;
        if (field_2700 != '\0') {
            field_2700 = 0;
        }
        if (TweakyBoundsCheck(this, local_18, local_14) == '\0') {
            uVar2 = 0;
        } else {
            this_00 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)field_2624);
            uVar2 = this_00->HandleMouseUp(local_18, local_14);
        }
        return uVar2;
    }

    // 0x100a51360, 128 bytes, placed by class name
    // Window::HandleMouseWheel(float, float, float, graphics::ScaleManager const&)
    undefined4 Window::HandleMouseWheel(float param_1, float param_2, float param_3, ScaleManager* param_4) {
        undefined4 uVar2;
        Tweaky* this_00;
        float local_20;
        float local_1c;

        uVar2 = 0;
        local_20 = param_1;
        local_1c = param_2;
        param_4->ScreenToInterfacePosition(&local_20, &local_1c, false);
        if (WindowBoundsCheck(this, local_20, local_1c) != '\0') {
            this_00 = (Tweaky*)shared_ptr<Tweaky>::operator->((shared_ptr<Tweaky>*)field_2624);
            uVar2 = this_00->HandleMouseWheel(local_20, local_1c, param_3);
        }
        return uVar2;
    }

} // namespace jag::tweak
