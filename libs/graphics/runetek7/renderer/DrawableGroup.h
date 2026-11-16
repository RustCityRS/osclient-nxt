// libs/graphics/runetek7/renderer/DrawableGroup.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::graphics {
    class DrawableGroup {
    public:
        GetDrawableSortKeyType() const;
        SetDrawableSortKeyType(DrawableSortKeyType);
        GetDrawableElements();
        GetDrawableElements() const;
        void ClearDrawableElements();
        DrawableGroup(DrawableGroupType, DrawableSortKeyType);
        ~DrawableGroup();

        // data members, from how the methods use this: 24 bytes
        undefined4 field_0; // offset 0
        undefined4 field_4; // offset 4
        undefined4 field_8; // offset 8
        char _unknown_12[12];
    };

    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    DrawableGroup::GetDrawableSortKeyType() const;

    // 0x10005fd90: the linker folded this into oldscape::widgets::Widget::SetBackgroundColour(unsigned int), which has identical code
    DrawableGroup::SetDrawableSortKeyType(DrawableSortKeyType);

    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    DrawableGroup::GetDrawableElements();

    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    DrawableGroup::GetDrawableElements() const;

    // 0x1007e36e0, 32 bytes, inline, placed by class name and debug map
    // DrawableGroup::ClearDrawableElements()
    void DrawableGroup::ClearDrawableElements() {
        (&field_16)->clear();
        field_0 = 0;
    }

    // 0x1007e82f0, 16 bytes, complete-object constructor, inline, placed by class name
    // DrawableGroup::DrawableGroup(DrawableGroupType, DrawableSortKeyType): jumps straight to the base-object constructor

    // 0x1007e8300, 16 bytes, complete-object destructor, inline, placed by class name
    // DrawableGroup::~DrawableGroup(): jumps straight to the base-object destructor

    // 0x1007e8310, 32 bytes, base-object constructor, inline, placed by class name
    // DrawableGroup::DrawableGroup(DrawableGroupType, DrawableSortKeyType)
    void DrawableGroup::DrawableGroup(undefined4 param_2, undefined4 param_3) {
        field_0 = 0;
        field_4 = param_2;
        field_8 = param_3;
        new (&field_16) eastl::vector<DrawableElementInfo, eastl::allocator>();
    }

    // 0x1007e83a0, 16 bytes, base-object destructor, inline, placed by class name
    // DrawableGroup::~DrawableGroup()
    void DrawableGroup::~DrawableGroup() {
        (&field_16)->~vector();
    }

} // namespace jag::graphics
