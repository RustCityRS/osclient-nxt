// libs/game/runetek5/config/npctype/NPCTypeList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "NPCTypeList.h"

namespace jag::game {
    // 0x100496cd0: the linker folded this into GraphicsDefaults::GetPlayerRecolDest() const, which has identical code
    NPCTypeList::GetBodyModelCache();

    // 0x1004de990: the linker folded this into SeqGroupType::IsWalkMerge() const, which has identical code
    NPCTypeList::IsMembersServer() const;

    // 0x100505a80, 176 bytes, base-object constructor, placed by class name and debug map
    // NPCTypeList::NPCTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, bool)
    void NPCTypeList::NPCTypeList() {
        bool in_R9B;

        BaseTemplateConfigTypeList<NPCType>::BaseTemplateConfigTypeList();
        field_0 = PTR_vtable_100ee7ef0 + 16;
        m_membersServer = in_R9B;
        new (&field_120, 128, "NPCTypeList:Body")
            AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>();
        new (&field_10656, 16, "NPCTypeList:Head")
            AssetLRUHashCache<graphics::Model, BuildModelMain, 16ul, 17ul, false>();
    }

    // 0x100505cd0, 16 bytes, complete-object constructor, placed by class name and debug map
    // NPCTypeList::NPCTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, bool): jumps straight to the base-object constructor

    // 0x1005654b0: the linker folded this into LocTypeList::SetMembersServer(bool), which has identical code
    NPCTypeList::SetMembersServer(bool);

} // namespace jag::game
