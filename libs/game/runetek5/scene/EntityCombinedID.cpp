// libs/game/runetek5/scene/EntityCombinedID.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "EntityCombinedID.h"

namespace jag::game {
    // 0x1039b5028, set at startup by ___cxx_global_var_init.30
    int32_t EntityCombinedID::MAP_COMBINED_ID = EntityCombinedID::GenerateCombinedID(10, 0);

    // 0x1039b502c, set at startup by ___cxx_global_var_init.31
    int32_t EntityCombinedID::NO_ENTITY_COMBINED_ID = EntityCombinedID::GenerateCombinedID(127, 0);

    // 0x1039b5030, set at startup by ___cxx_global_var_init.32
    EntityCombinedID EntityCombinedID::NO_ENTITY = EntityCombinedID(127, 0);

    // 0x1001d15b0: EntityCombinedID::GetEntityID() const has the same machine code as oldscape::dash3d::EntityHighlight::GetColour() const

    // 0x10048f980
    EntityCombinedID::EntityCombinedID(EntityType entityType, int arg2) {
        *this = (EntityCombinedID)(arg2 & 65535U | (entityType & 255) << 16 | (unsigned int)field_3 << 24);
    }

    // 0x10048f9a0
    EntityCombinedID::EntityCombinedID(int arg1) {
        m_entityID = (short)arg1;
        m_entityType = (char)((unsigned int)arg1 >> 16);
        field_3 = (char)((unsigned int)arg1 >> 24);
    }

    // 0x10048f9c0
    bool EntityCombinedID::operator==(const EntityCombinedID& entityCombinedID) const {
        int iVar3;
        int iVar4;
        bool bVar5;

        bool cVar1 = GetEntityType(entityCombinedID);
        char cVar2 = GetEntityType();
        if (cVar1 == cVar2) {
            iVar3 = GetEntityID(entityCombinedID);
            iVar4 = GetEntityID();
            bVar5 = iVar3 == iVar4;
        } else {
            bVar5 = false;
        }
        return bVar5;
    }

} // namespace jag::game
