// libs/graphics/runetek7/gui/GUIManagerState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "GUIManagerState.h"

namespace jag::graphics {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    GUIManagerState::~GUIManagerState();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    GUIManagerState::~GUIManagerState();

    // 0x10004af40: the linker folded this into std::__function::__func<std::__bind<void (oldscape::Client::*)(), oldscape::Client*&>, std::allocator<std::__bind<void (oldscape::Client::*)(), oldscape::Client*&> >, void (oldscape::ClientWindowMode)>::~__func(), which has identical code
    GUIManagerState::~GUIManagerState();

    // 0x1008f34e0, 144 bytes, base-object constructor, placed by debug map only (low confidence)
    // GUIProjectionSaveRestore::GUIProjectionSaveRestore(GUIManager&)
    void GUIProjectionSaveRestore::GUIProjectionSaveRestore(GUIManager* param_1) {
        undefined4 uVar2;
        Rect local_30[16];

        new (this) GUIManagerState(param_1);
        field_0 = &PTR__GUIProjectionSaveRestore_100f186a8;
        new (&field_28, (_func_decltype_nullptr*)param_1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_16 = param_1->GetPos();
        uVar2 = param_1->GetStatus();
        field_20 = uVar2;
        uVar2 = param_1->GetAliveCount();
        field_24 = uVar2;
        local_30->GetProjectionOverrideRect();
        math::Rect<unsigned int>::operator=((Rect<unsigned int>*)&field_28, local_30);
    }

} // namespace jag::graphics
