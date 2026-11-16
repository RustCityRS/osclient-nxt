// libs/ui/utils/ButtonElement.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::ui {
    class ButtonElement {
    public:
        class UpdateResult;
        bool IsMouseOver() const;
        Trigger GetTrigger() const;
        bool IsToggled() const;
        void Draw(graphics::RT7Core& rt7Core, int arg2, int arg3, unsigned short arg4, unsigned short arg5,
                  unsigned int arg6, bool arg7, const render::Texture* texture, const math::Rect<float>& rect,
                  const SpriteData& spriteData, bool arg11);
        ButtonElement* GetVisualUV(const math::Rect<float>& rect, VisualState visualState) const;
        VisualState GetCurrentVisualState(VisualState visualState) const;
        unsigned long UpdateLogic(math::Vector2T<float> vector2, int arg2, int arg3, int arg4, int arg5, bool arg6,
                                  bool arg7, bool arg8);
        bool IsIdle() const;
        void UpdateAnimations(float arg1);
        void FinishTransitions();
        uint64_t SetToggled(bool arg1, bool arg2);
        void SetBehaviour(Behaviour behaviour, Trigger trigger);
        unsigned int GetStateCount() const;
        ButtonElement(Behaviour behaviour, Trigger trigger);
        bool IsPressed() const;
        bool PressedRecently() const;
        static int64_t m_animationDurationMultiplier; // = 1065353216

    private:
        Behaviour field_0;
        Trigger m_trigger;
        uint8_t field_8;
        bool m_mouseOver;
        uint8_t m_pressed;
        uint8_t field_11;
        float field_12;
        float field_16;
        int field_20;
        bool field_24;
        bool m_toggled;
        uint8_t _unknown_26[6];
    };

    class ButtonElement::UpdateResult {
    public:
        UpdateResult(ResultType arg1);
        UpdateResult(ResultType resultType);
        operator bool() const;
    };

    // 0x100689070
    bool ButtonElement::IsPressed() const {
        return m_pressed;
    }

    // 0x1006892b0
    uint8_t ComponentDragConfig::GetRenderBehaviour() const {
        return m_spriteAlpha;
    }

    // 0x1006899c0
    bool ButtonElement::PressedRecently() const {
        return field_16 == 0.0;
    }

    // 0x10068b670
    ButtonElement::UpdateResult::operator bool() const {
        return *(int*)this == 0;
    }

    // 0x1006af660
    ButtonElement::ButtonElement(ButtonElement::Behaviour behaviour, ButtonElement::Trigger trigger)
        : field_0(behaviour), m_trigger(trigger), field_8(0), m_mouseOver(false), m_pressed(0), field_11(0),
          field_12(0.0), field_16(0.2), field_20(0), field_24(false), m_toggled(false) {}

} // namespace jag::ui
