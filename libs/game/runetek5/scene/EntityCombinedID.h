// libs/game/runetek5/scene/EntityCombinedID.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class EntityCombinedID {
    public:
        uint16_t GetEntityID() const;
        unsigned int GenerateCombinedID(EntityType entityType, int arg2);
        EntityCombinedID(EntityType entityType, int arg2);
        EntityCombinedID(int arg1);
        bool operator==(const EntityCombinedID& entityCombinedID) const;
        int GetEntityType() const;
        static int32_t MAP_COMBINED_ID;       // = GenerateCombinedID(10,0)
        static int32_t NO_ENTITY_COMBINED_ID; // = GenerateCombinedID(127,0)
        static EntityCombinedID NO_ENTITY;    // = EntityCombinedID(127, 0)

    private:
        uint16_t m_entityID;
        char m_entityType;
        uint8_t field_3;
    };

    // 0x10048f950
    unsigned int EntityCombinedID::GenerateCombinedID(EntityType entityType, int arg2) {
        return (entityType & 255) << 16 | arg2 & 65535U;
    }

    // 0x10048fa10
    int EntityCombinedID::GetEntityType() const {
        return (int)m_entityType;
    }

} // namespace jag::game
