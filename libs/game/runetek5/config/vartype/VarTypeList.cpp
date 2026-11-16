// libs/game/runetek5/config/vartype/VarTypeList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "VarTypeList.h"

namespace jag::game {
    // 0x1004c5ce0: the linker folded this into VarBitTypeList::GetConfigProvider(), which has identical code
    VarTypeList::GetDomain();

    // 0x1004d1ab0, 80 bytes, base-object constructor, placed by class name and debug map
    // VarTypeList::VarTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ConfigGroup const*, VarDomainType*)
    void VarTypeList::VarTypeList() {
        undefined8 in_stack_00000008;

        new (this) BaseTemplateConfigTypeList<VarType>();
        field_0 = PTR_vtable_100ee7f00 + 16;
        m_domain = in_stack_00000008;
    }

    // 0x1004d1c40, 32 bytes, complete-object constructor, placed by class name and debug map
    // VarTypeList::VarTypeList(ConfigTypeListContainerStrategy, ModeGame const*, Language const*, Js5ResourceProvider&, Js5ConfigGroup const*, VarDomainType*)
    void VarTypeList::VarTypeList() {
        VarTypeList();
    }

    // 0x1004d84b0: the linker folded this into BaseTemplateConfigTypeList<VarType>::~BaseTemplateConfigTypeList(), which has identical code
    VarTypeList::~VarTypeList();

} // namespace jag::game
