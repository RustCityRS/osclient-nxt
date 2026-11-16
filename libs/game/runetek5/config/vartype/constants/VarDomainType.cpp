// libs/game/runetek5/config/vartype/constants/VarDomainType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "VarDomainType.h"

namespace jag::game {
    // 0x1039bb700, 8 bytes, __common; zero-initialised
    VarDomainType::PLAYER;

    // 0x1039bb708, 8 bytes, __common; zero-initialised
    VarDomainType::NPC;

    // 0x1039bb710, 8 bytes, __common; zero-initialised
    VarDomainType::CLIENT;

    // 0x1039bb718, 8 bytes, __common; zero-initialised
    VarDomainType::OBJECT;

    // 0x1039bb720, 8 bytes, __common; zero-initialised
    VarDomainType::CLAN;

    // 0x1039bb728, 8 bytes, __common; zero-initialised
    VarDomainType::CLAN_SETTING;

    // 0x1039bb730, 8 bytes, __common; zero-initialised
    VarDomainType::PLAYER_GROUP;

    // 0x1039bb738, 56 bytes, __common; zero-initialised
    VarDomainType::LOOKUP_MAP;

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    VarDomainType::~VarDomainType();

    // 0x1004c5db0, 416 bytes, placed by class name and debug map
    // VarDomainType::Initialise()
    void VarDomainType::Initialise() {
        VarDomainTypePlayerNPC* pVVar1;
        VarDomainTypeClient* this;
        VarDomainTypeNormal* pVVar2;

        pVVar1 = operator_new(64);
        VarDomainTypePlayerNPC::VarDomainTypePlayerNPC(pVVar1, 0, (Js5ConfigGroup*)Js5ConfigGroup::VAR_PLAYER, true,
                                                       true);
        PLAYER = pVVar1;
        pVVar1 = operator_new(64);
        VarDomainTypePlayerNPC::VarDomainTypePlayerNPC(pVVar1, 1, (Js5ConfigGroup*)Js5ConfigGroup::VAR_NPC, false,
                                                       true);
        NPC = pVVar1;
        this = operator_new(64);
        VarDomainTypeClient::VarDomainTypeClient(this, 2, (Js5ConfigGroup*)Js5ConfigGroup::VAR_CLIENT, true, true);
        CLIENT = this;
        pVVar2 = operator_new(32);
        VarDomainTypeNormal::VarDomainTypeNormal(pVVar2, 5, (Js5ConfigGroup*)Js5ConfigGroup::VAR_OBJECT, true, true);
        OBJECT = pVVar2;
        pVVar2 = operator_new(32);
        VarDomainTypeNormal::VarDomainTypeNormal(pVVar2, 6, (Js5ConfigGroup*)Js5ConfigGroup::VAR_CLAN, true, true);
        CLAN = pVVar2;
        pVVar2 = operator_new(32);
        VarDomainTypeNormal::VarDomainTypeNormal(pVVar2, 7, (Js5ConfigGroup*)Js5ConfigGroup::VAR_CLAN_SETTING, true,
                                                 false);
        CLAN_SETTING = pVVar2;
        pVVar2 = operator_new(32);
        VarDomainTypeNormal::VarDomainTypeNormal(pVVar2, 9, (Js5ConfigGroup*)Js5ConfigGroup::VAR_PLAYER_GROUP, true,
                                                 true);
        PLAYER_GROUP = pVVar2;
    }

    // 0x1004c5f80, 96 bytes, placed by class name and debug map
    // VarDomainType::Destroy()
    void VarDomainType::Destroy() {
        safe_delete<VarDomainType>((VarDomainType**)&PLAYER);
        safe_delete<VarDomainType>((VarDomainType**)&NPC);
        safe_delete<VarDomainType>((VarDomainType**)&CLIENT);
        safe_delete<VarDomainType>((VarDomainType**)&OBJECT);
        safe_delete<VarDomainType>((VarDomainType**)&CLAN);
        safe_delete<VarDomainType>((VarDomainType**)&CLAN_SETTING);
        safe_delete<VarDomainType>((VarDomainType**)&PLAYER_GROUP);
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    VarDomainType::~VarDomainType();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    VarDomainType::~VarDomainType();

} // namespace jag::game
