// libs/game/runetek5/config/npctype/NPCTypeList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "NPCTypeList.h"

namespace jag::game {
    // 0x100496cd0: NPCTypeList::GetBodyModelCache() has the same machine code as GraphicsDefaults::GetPlayerRecolDest() const

    // 0x1004de990: NPCTypeList::IsMembersServer() const has the same machine code as SeqGroupType::IsWalkMerge() const

    // 0x100505a80
    NPCTypeList::NPCTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                             const Language* language, Js5ResourceProvider& js5ResourceProvider, bool arg5)
        : BaseTemplateConfigTypeList<NPCType>(configTypeListContainerStrategy, modeGame, language, js5ResourceProvider,
                                              *(Js5Archive::JS5_CONFIG_NPC), (Js5ConfigGroup*)Js5ConfigGroup::NPCTYPE,
                                              128),
          m_membersServer(arg5), field_120(128, "NPCTypeList:Body"), field_10656(16, "NPCTypeList:Head") {}

    // 0x1005654b0: NPCTypeList::SetMembersServer(bool) has the same machine code as LocTypeList::SetMembersServer(bool)

} // namespace jag::game
