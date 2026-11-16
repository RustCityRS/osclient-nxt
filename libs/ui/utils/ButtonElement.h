// libs/ui/utils/ButtonElement.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::ui {
    class ButtonElement {
    public:
        class UpdateResult;
        IsMouseOver() const;
        int GetTrigger() const;
        bool IsToggled() const;
        void Draw(graphics::RT7Core&, int, int, unsigned short, unsigned short, unsigned int, bool,
                  render::Texture const*, math::Rect<float> const&, SpriteData const&, bool);
        GetVisualUV(math::Rect<float> const&, VisualState) const;
        int GetCurrentVisualState(VisualState) const;
        ulong UpdateLogic(math::Vector2T<float>, int, int, int, int, bool, bool, bool);
        bool IsIdle() const;
        void UpdateAnimations(float);
        void FinishTransitions();
        SetToggled(bool, bool);
        void SetBehaviour(Behaviour, Trigger);
        uint GetStateCount() const;
        ButtonElement(Behaviour, Trigger);
        IsPressed() const;
        bool PressedRecently() const;
        static /* 8 bytes */ m_animationDurationMultiplier; // = 1065353216

        // data members, from how the methods use this: 32 bytes
        int field_0;            // offset 0
        int m_trigger;          // offset 4
        undefined1 field_8;     // offset 8
        undefined1 m_mouseOver; // offset 9
        undefined1 m_pressed;   // offset 10
        undefined1 field_11;    // offset 11
        float field_12;         // offset 12
        float field_16;         // offset 16
        undefined4 field_20;    // offset 20
        bool field_24;          // offset 24
        bool m_toggled;         // offset 25
        char _unknown_26[6];
    };

    class ButtonElement::UpdateResult {
    public:
        UpdateResult(ResultType);
        operator bool() const;
    };

    // 0x100688ea0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ButtonElement::ButtonElement(ButtonElement::Behaviour, ButtonElement::Trigger): jumps straight to the base-object constructor

    // 0x100689070, 16 bytes, inline, placed by class name and debug map
    // ButtonElement::IsPressed() const
    undefined1 ButtonElement::IsPressed() {
        return m_pressed;
    }

    // 0x1006892b0, 16 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ComponentDragConfig::GetRenderBehaviour() const
    /* SpriteData::GetSpriteAlpha() const */

    byte SpriteData::GetSpriteAlpha() {
        return m_spriteAlpha;
    }

    // 0x1006899c0, 16 bytes, inline, placed by class name and debug map
    // ButtonElement::PressedRecently() const
    bool ButtonElement::PressedRecently() {
        return field_16 == 0.0;
    }

    // 0x10068b670, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ButtonElement::UpdateResult::operator bool() const
    /* ImVector<ImGuiTextFilter::ImGuiTextRange>::empty() const */

    bool ImVector<ImGuiTextFilter::ImGuiTextRange>::empty() {
        return *(int*)this == 0;
    }

    // 0x1006af660, 48 bytes, base-object constructor, inline, placed by class name
    // ButtonElement::ButtonElement(ButtonElement::Behaviour, ButtonElement::Trigger)
    void ButtonElement::ButtonElement(int param_2, int param_3) {
        field_0 = param_2;
        m_trigger = param_3;
        field_8 = 0;
        m_mouseOver = 0;
        m_pressed = 0;
        field_11 = 0;
        field_12 = 0.0;
        field_16 = 0.2;
        field_20 = 0;
        field_24 = false;
        m_toggled = false;
    }

} // namespace jag::ui
