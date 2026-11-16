// libs/tweaky/Tweaky_Window.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.tweaky

namespace jag::tweak {
    class Window {
    public:
        // virtual methods in vtable order
        virtual ~Window();
        Window(input::Input* input, graphics::RT7Core* rt7Core, int arg3, const shared_ptr<Tweaky>& tweaky, int arg5);
        void SetPosition(int arg1, int arg2);
        void Draw();
        uint32_t HandleMouseDown(float arg1, float arg2, const graphics::ScaleManager& scaleManager);
        uint32_t WindowBoundsCheck(float arg1, float arg2);
        uint32_t TweakyBoundsCheck(float arg1, float arg2);
        uint32_t BoundsCheckTop(float arg1, float arg2);
        uint32_t BoundsCheckLeftSide(float arg1, float arg2);
        uint32_t BoundsCheckRightSide(float arg1, float arg2);
        uint32_t BoundsCheckBottom(float arg1, float arg2);
        uint32_t HandleMouseMove(float arg1, float arg2, const graphics::ScaleManager& scaleManager);
        uint32_t HandleMouseOver(float arg1, float arg2, const graphics::ScaleManager& scaleManager);
        uint64_t HandleMouseUp(float arg1, float arg2, const graphics::ScaleManager& scaleManager);
        uint32_t HandleMouseWheel(float arg1, float arg2, float arg3, const graphics::ScaleManager& scaleManager);

    private:
        uint8_t _unknown_8[2584];
        Input* field_2592;
        RT7Core* field_2600;
        int field_2608;
        unsigned int field_2612;
        unsigned int field_2616;
        uint8_t _unknown_2620[4];
        shared_ptr field_2624;
        int field_2640;
        int field_2644;
        int field_2648;
        EnumOptionToggle field_2652;
        EnumOptionToggle field_2656;
        int field_2660;
        int field_2664;
        int field_2668;
        int field_2672;
        int field_2676;
        int field_2680;
        int field_2684;
        int field_2688;
        float field_2692;
        float field_2696;
        uint8_t field_2700;
        uint8_t field_2701;
        uint8_t field_2702;
        uint8_t field_2703;
        uint8_t field_2704;
        uint8_t field_2705;
        uint8_t _unknown_2706[6];
    };

    // 0x100a50280
    Window::Window(input::Input* input, graphics::RT7Core* rt7Core, int arg3, const shared_ptr<Tweaky>& tweaky,
                   int arg5) {
        new (&field_8) oldscape::graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob();
        uint8_t* this_00 = &field_32;
        new (this_00) std::function<bool(float, float)>();
        uint8_t* this_01 = &field_80;
        new (this_01) std::function<bool(float, float)>();
        uint8_t* this_02 = &field_128;
        new (this_02) std::function<bool(float, float)>();
        uint8_t* this_03 = &field_176;
        new (this_03) std::function<bool(float, float)>();
        uint8_t* this_04 = &field_224;
        new (this_04) std::function<bool(float, float, float, float)>();
        uint8_t* this_05 = &field_272;
        new (this_05) input::InputHandler();
        field_2592 = input;
        field_2600 = rt7Core;
        field_2608 = arg3;
        field_2612 = 1720254463;
        field_2616 = 255;
        new (field_2624) shared_ptr(tweaky);
        field_2640 = arg5;
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
        Window* local_38 = this;
        ((function<bool(float, float)>*)this_00)->operator=(&local_38);
        local_38 = this;
        ((function<bool(float, float)>*)this_01)->operator=(&local_38);
        local_38 = this;
        ((function<bool(float, float)>*)this_02)->operator=(&local_38);
        local_38 = this;
        ((function<bool(float, float)>*)this_03)->operator=(&local_38);
        local_38 = this;
        ((function<bool(float, float, float, float)>*)this_04)->operator=(&local_38);
        this_05->RegisterLMouseDown(this_00);
        this_05->RegisterLMouseUp(this_01);
        this_05->RegisterMouseMove(this_02);
        this_05->RegisterMouseMove(this_03);
        this_05->RegisterMouseWheel(this_04);
        field_2592->RegisterInputHandler("1tweaky", this_05);
        auto EVar1 = field_2600->GetInterfaceWidth();
        field_2652 = EVar1;
        EVar1 = field_2600->GetInterfaceHeight();
        field_2656 = EVar1;
        EVar1 = field_2652;
        (*field_2624).operator->();
        SetPosition(EVar1 + field_2640 * -3 - 300, field_2640);
        field_2676 = field_2640 * 2;
    }

    // 0x100a50710
    void Window::SetPosition(int arg1, int arg2) {
        field_2684 = arg1;
        field_2688 = arg2;
        int local_20 = 0;
        int local_1c = field_2652 - field_2640;
        int iVar1 = math::Clamp<int>(field_2684, local_20, local_1c);
        field_2684 = iVar1;
        local_20 = 0;
        local_1c = field_2656 - field_2640;
        iVar1 = math::Clamp<int>(field_2688, local_20, local_1c);
        field_2688 = iVar1;
    }

    // 0x100a507b0
    Window::~Window() {
        field_272.Reset();
        field_2592->UnregisterInputHandler("1tweaky");
        field_2624->reset();
        field_2624->~shared_ptr();
        field_272.~InputHandler();
        field_224.~function();
        field_176.~function();
        field_128.~function();
        field_80.~function();
        field_32.~function();
        field_8.~enable_shared_from_this();
    }

    // 0x100a50930
    void Window::Draw() {
        EnumOptionToggle EVar2;
        EnumOptionToggle EVar3;
        int iVar4;
        GUIManager* this_01;
        NXTPixToolkit* this_02;
        shared_ptr<Container>* this_03;
        long* plVar5;
        OutputMergerState* pOVar6;
        Tweaky* pTVar7;
        uint8_t local_88[48];
        DrawCallState local_58;

        uint8_t* this_00 = field_2624;
        if (this_00->operator_cast_to_bool() != '\0') {
            this_01 = field_2600->GetGUIManager();
            this_02 = (NXTPixToolkit*)(*this_00).operator->();
            this_03 = (shared_ptr<Container>*)this_02->GetScreen();
            plVar5 = (long*)(*this_03).operator->();
            (**(void (**)(...))(*plVar5 + 40))(plVar5, &field_2660, &field_2664);
            EVar2 = field_2600->GetInterfaceWidth();
            field_2652 = EVar2;
            EVar2 = field_2600->GetInterfaceHeight();
            field_2656 = EVar2;
            EVar2 = field_2652;
            EVar3 = eastl::max<int>(field_2660 + field_2676, field_2640 << 2);
            iVar4 = eastl::min<graphics::GraphicsQuality>(EVar2, EVar3);
            field_2644 = iVar4;
            EVar2 = field_2656;
            EVar3 = eastl::max<int>(field_2664 + field_2680, field_2640 << 2);
            iVar4 = eastl::min<graphics::GraphicsQuality>(EVar2, EVar3);
            field_2648 = iVar4;
            iVar4 = field_2640 * 2;
            field_2668 = field_2660 + iVar4;
            field_2672 = iVar4 + field_2664;
            new ((local_88 + 24)) graphics::ClippingState(field_2600);
            field_2600->SetClippingRectangle(field_2684, field_2688, field_2668, field_2672, true);
            local_58 = render::DrawCallState();
            pOVar6 = local_58.GetOutputMergerState();
            new (local_88) render::Viewport(0, 0, field_2652, field_2656, 0.0, 1.0);
            pOVar6->PushViewport(*local_88);
            pOVar6 = ((DrawCallState*)(RT7Core*)&local_58)->GetOutputMergerState();
            pOVar6->SetRenderTargets(((RenderContext*)local_58.GetRenderContext())->GetBackBuffer());
            this_01->Begin(local_58);
            this_01->AddElement(field_2684, field_2688, field_2644 + field_2684, field_2648 + field_2688,
                                field_2616 | field_2608, 0.0, 0.0, 0.0, 0.0, nullptr, 1);
            this_01->AddElement(field_2684, field_2688, field_2644 + field_2684, field_2640 + field_2688,
                                field_2616 | field_2612, 0.0, 0.0, 0.0, 0.0, nullptr, 1);
            pTVar7 = (Tweaky*)(*this_00).operator->();
            pTVar7->SetVisibleArea(field_2644 + field_2640 * -2, field_2648 + field_2640 * -2);
            pTVar7 = (Tweaky*)(*this_00).operator->();
            iVar4 = field_2640;
            pTVar7->Draw(field_2684 + iVar4, field_2688 + iVar4, field_2644 + iVar4 * -2, field_2648 + iVar4 * -2);
            this_01->Render(nullptr);
            this_01->End();
            ((local_88 + 24))->~ClippingState();
        }
    }

    // 0x100a50c60
    void Tweaky::SetVisibleArea(int arg1, int arg2) {
        m_visibleX = arg1;
        m_visibleY = arg2;
    }

    // 0x100a50c80
    uint32_t Window::HandleMouseDown(float arg1, float arg2, const graphics::ScaleManager& scaleManager) {
        uint8_t uVar2;

        uint32_t uVar3 = 0;
        scaleManager.ScreenToInterfacePosition(arg1, arg2, false);
        if (WindowBoundsCheck(arg1, arg2)) {
            field_2701 = 1;
            if (!(TweakyBoundsCheck(arg1, arg2))) {
                field_2692 = arg1;
                field_2696 = arg2;
                uVar2 = BoundsCheckTop(arg1, arg2);
                field_2702 = uVar2;
                uVar2 = BoundsCheckLeftSide(arg1, arg2);
                field_2704 = uVar2;
                uVar2 = BoundsCheckRightSide(arg1, arg2);
                field_2703 = uVar2;
                uVar2 = BoundsCheckBottom(arg1, arg2);
                field_2705 = uVar2;
                field_2700 = 1;
                uVar3 = 1;
            } else {
                uVar3 = ((Tweaky*)(*field_2624).operator->())->HandleMouseDown(arg1, arg2);
            }
        }
        return uVar3;
    }

    // 0x100a50da0
    uint32_t Window::WindowBoundsCheck(float arg1, float arg2) {
        int iVar2;

        if ((((((Tweaky*)(*field_2624).operator->())->IsAttached() == '\0') && ((float)field_2684 < arg1)) &&
             (arg1 < (float)(field_2684 + field_2644))) &&
            ((float)field_2688 < arg2)) {
            iVar2 = field_2688 + field_2648;
            return arg2 < (float)iVar2;
        }
        return 0;
    }

    // 0x100a50e30
    uint32_t Window::TweakyBoundsCheck(float arg1, float arg2) {
        int iVar1 = field_2640;
        if ((((float)(iVar1 + field_2684) < arg1) && (arg1 < (float)((field_2684 - iVar1) + field_2644))) &&
            ((float)(field_2688 + iVar1) < arg2)) {
            return arg2 < (float)((field_2688 - iVar1) + field_2648);
        }
        return 0;
    }

    // 0x100a50e90
    uint32_t Window::BoundsCheckTop(float arg1, float arg2) {
        int iVar1;

        if ((((float)field_2684 < arg1) && (arg1 < (float)(field_2684 + field_2644))) && ((float)field_2688 < arg2)) {
            iVar1 = field_2688 + field_2640;
            return arg2 < (float)iVar1;
        }
        return 0;
    }

    // 0x100a50ee0
    uint32_t Window::BoundsCheckLeftSide(float arg1, float arg2) {
        int iVar1;

        if ((((float)field_2684 < arg1) && (arg1 < (float)(field_2684 + field_2640))) && ((float)field_2688 < arg2)) {
            iVar1 = field_2688 + field_2648;
            return arg2 < (float)iVar1;
        }
        return 0;
    }

    // 0x100a50f30
    uint32_t Window::BoundsCheckRightSide(float arg1, float arg2) {
        int iVar2 = field_2644 + field_2684;
        uint32_t uVar1 = 0;
        if (((float)(iVar2 - field_2640) < arg1) && (arg1 < (float)iVar2)) {
            if (arg2 <= (float)field_2688) {
                return 0;
            }
            iVar2 = field_2688 + field_2648;
            uVar1 = (((uint32_t)((int32_t)((unsigned int)iVar2 >> 8)) << 8) | (uint8_t)(arg2 < (float)iVar2));
        }
        return uVar1;
    }

    // 0x100a50f90
    uint32_t Window::BoundsCheckBottom(float arg1, float arg2) {
        int iVar1;

        if ((((float)field_2684 < arg1) && (arg1 < (float)(field_2684 + field_2644))) &&
            (iVar1 = field_2648 + field_2688, (float)(iVar1 - field_2640) < arg2)) {
            return arg2 < (float)iVar1;
        }
        return 0;
    }

    // 0x100a50ff0
    uint32_t Window::HandleMouseMove(float arg1, float arg2, const graphics::ScaleManager& scaleManager) {
        int iVar2;
        Tweaky* pTVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        int iVar11;
        int iVar12;
        enable_shared_from_this<PathingEntity> local_38;
        int local_28;
        int local_24;

        uint32_t uVar3 = 0;
        scaleManager.ScreenToInterfacePosition(arg1, arg2, false);
        local_38.shared_from_this();
        if (field_2701 != '\0') {
            if (field_2700 == '\0') {
                if (TweakyBoundsCheck(arg1, arg2) == '\0') {
                    uVar3 = 0;
                } else {
                    pTVar4 = (Tweaky*)(*field_2624).operator->();
                    uVar3 = pTVar4->HandleMouseMove(arg1, arg2);
                }
            } else {
                iVar8 = (int)(arg1 - field_2692);
                iVar2 = (int)(arg2 - field_2696);
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
                    iVar2 = math::Clamp<int>(field_2684, local_28, local_24);
                    field_2684 = iVar2;
                    local_28 = 0;
                    local_24 = field_2656 - field_2640;
                    iVar2 = math::Clamp<int>(field_2688, local_28, local_24);
                    field_2688 = iVar2;
                    pTVar4 = (Tweaky*)(*field_2624).operator->();
                    pTVar4->ValidateScroll();
                }
                field_2692 = arg1;
                field_2696 = arg2;
                uVar3 = 1;
            }
        }
        return uVar3;
    }

    // 0x100a51250
    uint32_t Window::HandleMouseOver(float arg1, float arg2, const graphics::ScaleManager& scaleManager) {
        uint32_t uVar2 = 0;
        scaleManager.ScreenToInterfacePosition(arg1, arg2, false);
        if (TweakyBoundsCheck(arg1, arg2) != '\0') {
            uVar2 = ((Tweaky*)(*field_2624).operator->())->HandleMouseOver(arg1, arg2);
        }
        return uVar2;
    }

    // 0x100a512d0
    uint64_t Window::HandleMouseUp(float arg1, float arg2, const graphics::ScaleManager& scaleManager) {
        uint64_t uVar2;

        scaleManager.ScreenToInterfacePosition(arg1, arg2, false);
        field_2701 = 0;
        if (field_2700 != '\0') {
            field_2700 = 0;
        }
        if (TweakyBoundsCheck(arg1, arg2) == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = ((Tweaky*)(*field_2624).operator->())->HandleMouseUp(arg1, arg2);
        }
        return uVar2;
    }

    // 0x100a51360
    uint32_t Window::HandleMouseWheel(float arg1, float arg2, float arg3, const graphics::ScaleManager& scaleManager) {
        uint32_t uVar2 = 0;
        scaleManager.ScreenToInterfacePosition(arg1, arg2, false);
        if (WindowBoundsCheck(arg1, arg2) != '\0') {
            uVar2 = ((Tweaky*)(*field_2624).operator->())->HandleMouseWheel(arg1, arg2, arg3);
        }
        return uVar2;
    }

} // namespace jag::tweak
