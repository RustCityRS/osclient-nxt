// libs/game/runetek5/config/vartype/constants/VarDomainType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "VarDomainType.h"

namespace jag::game {
    // 0x1039bb700
    int64_t VarDomainType::PLAYER;

    // 0x1039bb708
    int64_t VarDomainType::NPC;

    // 0x1039bb710
    int64_t VarDomainType::CLIENT;

    // 0x1039bb718
    int64_t VarDomainType::OBJECT;

    // 0x1039bb720
    int64_t VarDomainType::CLAN;

    // 0x1039bb728
    int64_t VarDomainType::CLAN_SETTING;

    // 0x1039bb730
    int64_t VarDomainType::PLAYER_GROUP;

    // 0x1039bb738
    uint8_t VarDomainType::LOOKUP_MAP[56];

    // 0x100009e70: VarDomainType::~VarDomainType() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1004c5db0
    void VarDomainType::Initialise() {
        VarDomainTypePlayerNPC* pVVar1 = (VarDomainTypePlayerNPC*)operator new(64);
        new (pVVar1) VarDomainTypePlayerNPC(0, (Js5ConfigGroup*)Js5ConfigGroup::VAR_PLAYER, true, true);
        PLAYER = pVVar1;
        pVVar1 = (VarDomainTypePlayerNPC*)operator new(64);
        new (pVVar1) VarDomainTypePlayerNPC(1, (Js5ConfigGroup*)Js5ConfigGroup::VAR_NPC, false, true);
        NPC = pVVar1;
        VarDomainTypeClient* varDomainTypeClient = (VarDomainTypeClient*)operator new(64);
        new (varDomainTypeClient) VarDomainTypeClient(2, (Js5ConfigGroup*)Js5ConfigGroup::VAR_CLIENT, true, true);
        CLIENT = varDomainTypeClient;
        VarDomainTypeNormal* pVVar2 = (VarDomainTypeNormal*)operator new(32);
        new (pVVar2) VarDomainTypeNormal(5, (Js5ConfigGroup*)Js5ConfigGroup::VAR_OBJECT, true, true);
        OBJECT = pVVar2;
        pVVar2 = (VarDomainTypeNormal*)operator new(32);
        new (pVVar2) VarDomainTypeNormal(6, (Js5ConfigGroup*)Js5ConfigGroup::VAR_CLAN, true, true);
        CLAN = pVVar2;
        pVVar2 = (VarDomainTypeNormal*)operator new(32);
        new (pVVar2) VarDomainTypeNormal(7, (Js5ConfigGroup*)Js5ConfigGroup::VAR_CLAN_SETTING, true, false);
        CLAN_SETTING = pVVar2;
        pVVar2 = (VarDomainTypeNormal*)operator new(32);
        new (pVVar2) VarDomainTypeNormal(9, (Js5ConfigGroup*)Js5ConfigGroup::VAR_PLAYER_GROUP, true, true);
        PLAYER_GROUP = pVVar2;
    }

    // 0x1004c5f80
    void VarDomainType::Destroy() {
        safe_delete<VarDomainType>((DebugPrimitiveCollectorBasic**)&PLAYER);
        safe_delete<VarDomainType>((DebugPrimitiveCollectorBasic**)&NPC);
        safe_delete<VarDomainType>((DebugPrimitiveCollectorBasic**)&CLIENT);
        safe_delete<VarDomainType>((DebugPrimitiveCollectorBasic**)&OBJECT);
        safe_delete<VarDomainType>((DebugPrimitiveCollectorBasic**)&CLAN);
        safe_delete<VarDomainType>((DebugPrimitiveCollectorBasic**)&CLAN_SETTING);
        safe_delete<VarDomainType>((DebugPrimitiveCollectorBasic**)&PLAYER_GROUP);
    }

} // namespace jag::game
