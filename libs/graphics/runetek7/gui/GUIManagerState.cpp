// libs/graphics/runetek7/gui/GUIManagerState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "GUIManagerState.h"

namespace jag::graphics {
    // 0x100009e70: GUIManagerState::~GUIManagerState() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1008f34e0
    GUIProjectionSaveRestore::GUIProjectionSaveRestore(GUIManager& guiManager) : GUIManagerState(guiManager) {
        new (&field_28) shared_ptr();
        uint32_t uVar1 = guiManager.GetPos();
        field_16 = uVar1;
        uVar1 = guiManager.GetStatus();
        field_20 = uVar1;
        uVar1 = guiManager.GetAliveCount();
        field_24 = uVar1;
        field_28 = guiManager.GetProjectionOverrideRect();
    }

} // namespace jag::graphics
