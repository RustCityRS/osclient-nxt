// libs/game/runetek5/config/loctype/LocTypeList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "LocTypeList.h"

namespace jag::game {
    // 0x1004de990: the linker folded this into SeqGroupType::IsWalkMerge() const, which has identical code
    LocTypeList::IsMembersServer() const;

    // 0x100515900, 128 bytes, base-object constructor, placed by class name and debug map
    // LocTypeList::LocTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, bool)
    void LocTypeList::LocTypeList() {
        undefined1 in_R9B;

        BaseTemplateConfigTypeList<LocType>::BaseTemplateConfigTypeList();
        field_0 = PTR_vtable_100ee7ee0 + 16;
        field_112 = in_R9B;
        new (&field_120, 1024, "LocTypeList")
            AssetLRUHashCache<graphics::Model, BuildModelMain, 1024ul, 1025ul, false>();
    }

    // 0x100515b00, 16 bytes, complete-object constructor, placed by class name and debug map
    // LocTypeList::LocTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, bool): jumps straight to the base-object constructor

} // namespace jag::game
