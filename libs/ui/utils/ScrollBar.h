// libs/ui/utils/ScrollBar.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class ScrollBar {
    public:
        GetBackgroundSprite();
        GetButtonSprite();
        GetHandleSprite();
        ScrollBar();
        void Decode(PacketT<Array<unsigned char, eastl::allocator>>&, int);
        void Draw(graphics::RT7Core&, int, int, int, int, int, int, bool, unsigned char);
        void GetVisible() const;
        GetVisualUV(math::Rect<float> const&, VisualState) const;
        ProcessInputImpl(MouseState const&, int, int, int, int, math::Rect<int> const&, int, int, int);
        void GetInteractionHeld() const;
        bool UpdateButtonState(InteractionTarget, bool);
        float GetGraphicSliceOffset(VisualState);
        GetGraphicSliceHeightPercent();
        ~ScrollBar();
        byte GetSize() const;
        bool ProcessInput<ComboField::LogicFocus(ComponentDependencies const&, bool)::$_26&>(
            MouseState const&, int, int, int, int, math::Rect<int> const&, int, int, int,
            ComboField::LogicFocus(ComponentDependencies const&, bool)::$_26&);
        void ClearInteractionState();
        void GetAutoHide() const;
        bool ProcessInput<InputField::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool)::$_50&>(
            MouseState const&, int, int, int, int, math::Rect<int> const&, int, int, int,
            InputField::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool)::$_50&);
        bool ProcessInput<List::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool)::$_53&>(
            MouseState const&, int, int, int, int, math::Rect<int> const&, int, int, int,
            List::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool)::$_53&);
        bool ProcessInput<List::LogicFocus(ComponentDependencies const&, bool)::$_54&>(
            MouseState const&, int, int, int, int, math::Rect<int> const&, int, int, int,
            List::LogicFocus(ComponentDependencies const&, bool)::$_54&);

        // data members, from how the methods use this: 204 bytes
        int field_0;        // offset 0
        uint field_4;       // offset 4
        undefined2 field_8; // offset 8
        byte field_10;      // offset 10
        char _unknown_11[1];
        float field_12; // offset 12
        byte field_16;  // offset 16
        char _unknown_17[31];
        SpriteData field_48; // offset 48
        SpriteData field_96; // offset 96
        byte m_size;         // offset 144
        byte field_145;      // offset 145
        char _unknown_146[2];
        int field_148;        // offset 148
        int field_152;        // offset 152
        int field_156;        // offset 156
        int field_160;        // offset 160
        undefined4 field_164; // offset 164
        char _unknown_168[36];
    };

    // 0x1006781d0, 32 bytes, inline, placed by class name and debug map
    // ScrollBar::GetVisible() const
    void ScrollBar::GetVisible() {
        (&field_146, 0)->test();
    }

    // 0x100678aa0, 32 bytes, inline, placed by class name and debug map
    // ScrollBar::GetInteractionHeld() const
    void ScrollBar::GetInteractionHeld() {
        (&field_146, 2)->test();
    }

    // 0x100678b60, 32 bytes, inline, placed by class name and debug map
    // ScrollBar::GetGraphicSliceOffset(ScrollBar::VisualState)
    float ScrollBar::GetGraphicSliceOffset(int param_1) {
        return (float)param_1 * 0.25;
    }

    // 0x100678b80, 16 bytes, inline, placed by class name and debug map
    // ScrollBar::GetGraphicSliceHeightPercent()
    undefined8 ScrollBar::GetGraphicSliceHeightPercent() {
        return 1048576000;
    }

    // 0x10068d960, 16 bytes, complete-object destructor, inline, placed by class name
    // ScrollBar::~ScrollBar(): jumps straight to the base-object destructor

    // 0x10068e860, 16 bytes, inline, placed by class name
    // ScrollBar::GetSize() const
    byte ScrollBar::GetSize() {
        return m_size;
    }

    // 0x10068e870, 80 bytes, inline, placed by class name
    // bool ScrollBar::ProcessInput<ComboField::LogicFocus(ComponentDependencies const&, bool)::$_26&>(MouseState const&, int, int, int, int, math::Rect<int> const&, int, int, int, ComboField::LogicFocus(ComponentDependencies const&, bool)::$_26&)
    bool ScrollBar::ProcessInput<ComboField::LogicFocus(ComponentDependencies_const&, bool)::__26&>(
        MouseState* param_1, int param_2, int param_3, int param_4, int param_5, Rect* param_6, int param_7,
        int param_8, int param_9, __26* param_10) {
        ulong uVar1;
        int iVar2;

        uVar1 = ProcessInputImpl(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9);
        if (((uVar1 & 1) != 0) && (iVar2 = (int)(uVar1 >> 32), iVar2 != param_7)) {
            (ComponentDependencies_const&)->LogicFocus(bool)::$_26::operator()((ScrollBar*)param_10, iVar2);
        }
        return (bool)((byte)uVar1 & 1);
    }

    // 0x10068eac0, 48 bytes, inline, placed by class name
    // ScrollBar::ClearInteractionState()
    void ScrollBar::ClearInteractionState() {
        field_160 = 0;
        (&field_146, 2)->reset();
    }

    // 0x100698f60, 32 bytes, inline, placed by class name
    // ScrollBar::GetAutoHide() const
    void ScrollBar::GetAutoHide() {
        (&field_146, 1)->test();
    }

    // 0x100699070, 80 bytes, inline, placed by class name
    // bool ScrollBar::ProcessInput<InputField::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool)::$_50&>(MouseState const&, int, int, int, int, math::Rect<int> const&, int, int, int, InputField::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool)::$_50&)
    bool ScrollBar::ProcessInput<InputField::MainLogic(ComponentDependencies_const&, int, int, bool, bool, bool,
                                                       bool)::__50&>(MouseState* param_1, int param_2, int param_3,
                                                                     int param_4, int param_5, Rect* param_6,
                                                                     int param_7, int param_8, int param_9,
                                                                     __50* param_10) {
        ulong uVar1;
        int iVar2;

        uVar1 = ProcessInputImpl(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9);
        if (((uVar1 & 1) != 0) && (iVar2 = (int)(uVar1 >> 32), iVar2 != param_7)) {
            (ComponentDependencies_const&)
                ->MainLogic(int, int, bool, bool, bool, bool)::$_50::operator()((ScrollBar*)param_10, iVar2);
        }
        return (bool)((byte)uVar1 & 1);
    }

    // 0x10069dc80, 80 bytes, inline, placed by class name
    // bool ScrollBar::ProcessInput<List::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool)::$_53&>(MouseState const&, int, int, int, int, math::Rect<int> const&, int, int, int, List::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool)::$_53&)
    bool
    ScrollBar::ProcessInput<List::MainLogic(ComponentDependencies_const&, int, int, bool, bool, bool, bool)::__53&>(
        MouseState* param_1, int param_2, int param_3, int param_4, int param_5, Rect* param_6, int param_7,
        int param_8, int param_9, __53* param_10) {
        ulong uVar1;
        int iVar2;

        uVar1 = ProcessInputImpl(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9);
        if (((uVar1 & 1) != 0) && (iVar2 = (int)(uVar1 >> 32), iVar2 != param_7)) {
            (ComponentDependencies_const&)
                ->MainLogic(int, int, bool, bool, bool, bool)::$_53::operator()((ScrollBar*)param_10, iVar2);
        }
        return (bool)((byte)uVar1 & 1);
    }

    // 0x10069e4f0, 80 bytes, inline, placed by class name
    // bool ScrollBar::ProcessInput<List::LogicFocus(ComponentDependencies const&, bool)::$_54&>(MouseState const&, int, int, int, int, math::Rect<int> const&, int, int, int, List::LogicFocus(ComponentDependencies const&, bool)::$_54&)
    bool ScrollBar::ProcessInput<List::LogicFocus(ComponentDependencies_const&, bool)::__54&>(
        MouseState* param_1, int param_2, int param_3, int param_4, int param_5, Rect* param_6, int param_7,
        int param_8, int param_9, __54* param_10) {
        ulong uVar1;
        int iVar2;

        uVar1 = ProcessInputImpl(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9);
        if (((uVar1 & 1) != 0) && (iVar2 = (int)(uVar1 >> 32), iVar2 != param_7)) {
            (ComponentDependencies_const&)->LogicFocus(bool)::$_54::operator()((ScrollBar*)param_10, iVar2);
        }
        return (bool)((byte)uVar1 & 1);
    }

    // 0x1006b0320, 48 bytes, base-object destructor, inline, placed by class name
    // ScrollBar::~ScrollBar()
    void ScrollBar::~ScrollBar() {
        field_96->~Sprite();
        field_48->~Sprite();
        ~Sprite();
    }

} // namespace jag::ui
