// libs/ui/utils/DragState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.ui

#include "DragState.h"

namespace jag::ui {
    // 0x100674a70: the linker folded this into StyleSheet::GetParent() const, which has identical code
    DragState::GetTarget() const;

    // 0x100676670, 48 bytes, placed by class name and debug map
    // DragState::Clear()
    void DragState::Clear() {
        SetComponent((_func_decltype_nullptr*)this, (_func_decltype_nullptr*)0);
        SetLayer((_func_decltype_nullptr*)this);
        SetBeenDragged(this, false);
    }

    // 0x100676700, 32 bytes, placed by class name
    // DragState::SetLayer(shared_ptr<Component> const&)
    void DragState::SetLayer(shared_ptr* param_1) {
        field_112 = 0;
        weak_ptr<Component>::operator=((weak_ptr<Component>*)&field_32, param_1);
    }

} // namespace jag::ui
