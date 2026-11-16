// libs/ui/utils/DragState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.ui

#include "DragState.h"

namespace jag::ui {
    // 0x100674a70: DragState::GetTarget() const has the same machine code as StyleSheet::GetParent() const

    // 0x100676670
    void DragState::Clear() {
        SetComponent(nullptr, nullptr);
        SetLayer(this);
        SetBeenDragged(false);
    }

    // 0x100676700
    void DragState::SetLayer(const shared_ptr<Component>& component) {
        field_112 = 0;
        field_32 = component;
    }

} // namespace jag::ui
