// libs/game/runetek5/config/loctype/LocTypeList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "LocTypeList.h"

namespace jag::game {
    // 0x1004de990: LocTypeList::IsMembersServer() const has the same machine code as SeqGroupType::IsWalkMerge() const

    // 0x100515900
    LocTypeList::LocTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                             const Language* language, Js5ResourceProvider& js5ResourceProvider, bool arg5)
        : BaseTemplateConfigTypeList<LocType>(configTypeListContainerStrategy, modeGame, language, js5ResourceProvider,
                                              *(Js5Archive::JS5_CONFIG_LOC), (Js5ConfigGroup*)Js5ConfigGroup::LOCTYPE,
                                              256),
          m_membersServer(arg5), field_120(1024, "LocTypeList") {}

} // namespace jag::game
