// libs/graphics/runetek7/renderer/DrawableGroup.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::graphics {
    class DrawableGroup {
    public:
        EnumOptionToggle GetDrawableSortKeyType() const;
        void SetDrawableSortKeyType(DrawableSortKeyType arg1);
        uint8_t* GetDrawableElements();
        uint8_t* GetDrawableElements() const;
        void ClearDrawableElements();
        DrawableGroup(DrawableGroupType drawableGroupType, DrawableSortKeyType drawableSortKeyType);
        ~DrawableGroup();

    private:
        uint32_t field_0;
        DrawableGroupType field_4;
        DrawableSortKeyType m_drawableSortKeyType;
        uint8_t _unknown_12[12];
    };

    // 0x100024170: DrawableGroup::GetDrawableSortKeyType() const has the same machine code as oldscape::option::IScriptOption::GetId() const

    // 0x10005fd90: DrawableGroup::SetDrawableSortKeyType(DrawableSortKeyType) has the same machine code as oldscape::widgets::Widget::SetBackgroundColour(unsigned int)

    // 0x1000b9950: DrawableGroup::GetDrawableElements() has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x1000b9950: DrawableGroup::GetDrawableElements() const has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x1007e36e0
    void DrawableGroup::ClearDrawableElements() {
        field_16.clear();
        field_0 = 0;
    }

    // 0x1007e8310
    DrawableGroup::DrawableGroup(DrawableGroupType drawableGroupType, DrawableSortKeyType drawableSortKeyType)
        : field_0(0), field_4(drawableGroupType), m_drawableSortKeyType(drawableSortKeyType) {}

    // 0x1007e83a0
    DrawableGroup::~DrawableGroup() {
        field_16.~vector();
    }

} // namespace jag::graphics
