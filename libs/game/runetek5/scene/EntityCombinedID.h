// libs/game/runetek5/scene/EntityCombinedID.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class EntityCombinedID {
    public:
        GetEntityID() const;
        ulong GenerateCombinedID(EntityType, int);
        EntityCombinedID(EntityType, int);
        EntityCombinedID(int);
        bool operator==(EntityCombinedID const&) const;
        int GetEntityType() const;
        static /* 4 bytes */ MAP_COMBINED_ID;            // = GenerateCombinedID(10,0)
        static /* 4 bytes */ NO_ENTITY_COMBINED_ID;      // = GenerateCombinedID(127,0)
        static EntityCombinedID /* 8 bytes */ NO_ENTITY; // = EntityCombinedID(127, 0)

        // data members, from how the methods use this: 4 bytes
        uint m_entityID; // offset 0
    };

    // 0x10048f950, 32 bytes, inline, placed by class name and debug map
    // EntityCombinedID::GenerateCombinedID(EntityType, int)
    ulong EntityCombinedID::GenerateCombinedID(undefined1 param_1, undefined2 param_2) {
        return (ulong)CONCAT12(param_1, param_2);
    }

    // 0x10048fa10, 16 bytes, inline, placed by class name
    // EntityCombinedID::GetEntityType() const
    int EntityCombinedID::GetEntityType() {
        return (int)*(char*)((long)&m_entityID + 2);
    }

} // namespace jag::game
