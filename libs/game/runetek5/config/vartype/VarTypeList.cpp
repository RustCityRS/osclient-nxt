// libs/game/runetek5/config/vartype/VarTypeList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "VarTypeList.h"

namespace jag::game {
    // 0x1004c5ce0: VarTypeList::GetDomain() has the same machine code as VarBitTypeList::GetConfigProvider()

    // 0x1004d1ab0
    VarTypeList::VarTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                             const Language* language, Js5ResourceProvider& js5ResourceProvider,
                             const Js5ConfigGroup* js5ConfigGroup, VarDomainType* varDomainType)
        : BaseTemplateConfigTypeList<VarType>(configTypeListContainerStrategy, modeGame, language, js5ResourceProvider,
                                              *(Js5Archive::JS5_CONFIG), js5ConfigGroup, 128),
          m_pDomain(varDomainType) {}

    // 0x1004d84b0: VarTypeList::~VarTypeList() has the same machine code as BaseTemplateConfigTypeList<VarType>::~BaseTemplateConfigTypeList()

} // namespace jag::game
