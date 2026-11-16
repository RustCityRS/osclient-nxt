// libs/ui/utils/ScrollBar.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class ScrollBar {
    public:
        void GetBackgroundSprite();
        SpriteData GetButtonSprite();
        SpriteData GetHandleSprite();
        ScrollBar();
        void Decode(PacketT<Array<unsigned char>>& arg1, int arg2);
        void Draw(graphics::RT7Core& rt7Core, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, bool arg8,
                  unsigned char arg9);
        void GetVisible() const;
        ScrollBar* GetVisualUV(const math::Rect<float>& rect, VisualState visualState) const;
        uint64_t ProcessInputImpl(const MouseState& mouseState, int arg2, int arg3, int arg4, int arg5,
                                  const math::Rect<int>& rect, int arg7, int arg8, int arg9);
        void GetInteractionHeld() const;
        bool UpdateButtonState(InteractionTarget interactionTarget, bool arg2);
        float GetGraphicSliceOffset(VisualState visualState);
        void GetGraphicSliceHeightPercent();
        ~ScrollBar();
        uint8_t GetSize() const;
        bool ProcessInput<ComboField::LogicFocus(ComponentDependencies const&, bool)::$_26&>(
            const MouseState& mouseState, int arg2, int arg3, int arg4, int arg5, const math::Rect<int>& rect, int arg7,
            int arg8, int arg9, ComboField::LogicFocus(ComponentDependencies const&, bool)::$_26& arg10);
        void ClearInteractionState();
        void GetAutoHide() const;
        bool ProcessInput<InputField::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool)::$_50&>(
            const MouseState& mouseState, int arg2, int arg3, int arg4, int arg5, const math::Rect<int>& rect, int arg7,
            int arg8, int arg9,
            InputField::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool)::$_50& arg10);
        bool ProcessInput<List::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool)::$_53&>(
            const MouseState& mouseState, int arg2, int arg3, int arg4, int arg5, const math::Rect<int>& rect, int arg7,
            int arg8, int arg9,
            List::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool)::$_53& arg10);
        bool ProcessInput<List::LogicFocus(ComponentDependencies const&, bool)::$_54&>(
            const MouseState& mouseState, int arg2, int arg3, int arg4, int arg5, const math::Rect<int>& rect, int arg7,
            int arg8, int arg9, List::LogicFocus(ComponentDependencies const&, bool)::$_54& arg10);

    private:
        unsigned int field_0;
        unsigned int field_4;
        unsigned short field_8;
        uint8_t field_10;
        uint8_t _unknown_11[1];
        float field_12;
        uint8_t field_16;
        uint8_t _unknown_17[31];
        SpriteData m_buttonSprite;
        SpriteData m_handleSprite;
        uint8_t m_size;
        uint8_t field_145;
        uint8_t _unknown_146[2];
        int field_148;
        int field_152;
        int field_156;
        InteractionTarget field_160;
        uint32_t field_164;
        uint8_t _unknown_168[36];
    };

    // 0x1006781d0
    void ScrollBar::GetVisible() const {
        field_146.test(0);
    }

    // 0x100678aa0
    void ScrollBar::GetInteractionHeld() const {
        field_146.test(2);
    }

    // 0x100678b60
    float ScrollBar::GetGraphicSliceOffset(ScrollBar::VisualState visualState) {
        return (float)(int)visualState * 0.25;
    }

    // 0x100678b80
    void ScrollBar::GetGraphicSliceHeightPercent() {
        return 1048576000;
    }

    // 0x10068e860
    uint8_t ScrollBar::GetSize() const {
        return m_size;
    }

    // 0x10068e870
    bool ScrollBar::ProcessInput<ComboField::LogicFocus(ComponentDependencies const&, bool)::$_26&>(
        const MouseState& mouseState, int arg2, int arg3, int arg4, int arg5, const math::Rect<int>& rect, int arg7,
        int arg8, int arg9, ComboField::LogicFocus(ComponentDependencies const&, bool)::$_26& arg10) {
        uint8_t auVar1[12];

        auVar1 = ProcessInputImpl(mouseState, arg2, arg3, arg4, arg5, rect, arg7, arg8, arg9);
        if (((auVar1._0_8_ & 1) != 0) && (auVar1._4_4_ != arg7)) {
            (ComponentDependencies const&)
                ->LogicFocus(bool)::$_26::operator()((__26*)arg10, (ScrollBar*)(auVar1._0_8_ >> 32), auVar1._8_4_);
        }
        return (bool)(auVar1[0] & 1);
    }

    // 0x10068eac0
    void ScrollBar::ClearInteractionState() {
        field_160 = 0;
        field_146 = eastl::bitset<3ul, unsigned char>::reset(2);
    }

    // 0x100698f60
    void ScrollBar::GetAutoHide() const {
        field_146.test(1);
    }

    // 0x100699070
    bool ScrollBar::ProcessInput<InputField::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool,
                                                       bool)::$_50&>(
        const MouseState& mouseState, int arg2, int arg3, int arg4, int arg5, const math::Rect<int>& rect, int arg7,
        int arg8, int arg9,
        InputField::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool)::$_50& arg10) {
        uint8_t auVar1[12];

        auVar1 = ProcessInputImpl(mouseState, arg2, arg3, arg4, arg5, rect, arg7, arg8, arg9);
        if (((auVar1._0_8_ & 1) != 0) && (auVar1._4_4_ != arg7)) {
            (ComponentDependencies const&)
                ->MainLogic(int, int, bool, bool, bool,
                            bool)::$_50::operator()((__50*)arg10, (ScrollBar*)(auVar1._0_8_ >> 32), auVar1._8_4_);
        }
        return (bool)(auVar1[0] & 1);
    }

    // 0x10069dc80
    bool
    ScrollBar::ProcessInput<List::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool)::$_53&>(
        const MouseState& mouseState, int arg2, int arg3, int arg4, int arg5, const math::Rect<int>& rect, int arg7,
        int arg8, int arg9,
        List::MainLogic(ComponentDependencies const&, int, int, bool, bool, bool, bool)::$_53& arg10) {
        uint8_t auVar1[12];

        auVar1 = ProcessInputImpl(mouseState, arg2, arg3, arg4, arg5, rect, arg7, arg8, arg9);
        if (((auVar1._0_8_ & 1) != 0) && (auVar1._4_4_ != arg7)) {
            (ComponentDependencies const&)
                ->MainLogic(int, int, bool, bool, bool,
                            bool)::$_53::operator()((__53*)arg10, (ScrollBar*)(auVar1._0_8_ >> 32), auVar1._8_4_);
        }
        return (bool)(auVar1[0] & 1);
    }

    // 0x10069e4f0
    bool ScrollBar::ProcessInput<List::LogicFocus(ComponentDependencies const&, bool)::$_54&>(
        const MouseState& mouseState, int arg2, int arg3, int arg4, int arg5, const math::Rect<int>& rect, int arg7,
        int arg8, int arg9, List::LogicFocus(ComponentDependencies const&, bool)::$_54& arg10) {
        uint8_t auVar1[12];

        auVar1 = ProcessInputImpl(mouseState, arg2, arg3, arg4, arg5, rect, arg7, arg8, arg9);
        if (((auVar1._0_8_ & 1) != 0) && (auVar1._4_4_ != arg7)) {
            (ComponentDependencies const&)
                ->LogicFocus(bool)::$_54::operator()((__54*)arg10, (ScrollBar*)(auVar1._0_8_ >> 32), auVar1._8_4_);
        }
        return (bool)(auVar1[0] & 1);
    }

    // 0x1006b0320
    ScrollBar::~ScrollBar() {
        m_handleSprite->~Sprite();
        m_buttonSprite->~Sprite();
    }

} // namespace jag::ui
