// libs/game/runetek5/scene/EntityCombinedID.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "EntityCombinedID.h"

namespace jag::game {
    // 0x1039b5028, 4 bytes, __common; set at startup by ___cxx_global_var_init.30
    EntityCombinedID::MAP_COMBINED_ID = EntityCombinedID::GenerateCombinedID(10, 0);

    // 0x1039b502c, 4 bytes, __common; set at startup by ___cxx_global_var_init.31
    EntityCombinedID::NO_ENTITY_COMBINED_ID = EntityCombinedID::GenerateCombinedID(127, 0);

    // 0x1039b5030, 8 bytes, __common; set at startup by ___cxx_global_var_init.32
    EntityCombinedID EntityCombinedID::NO_ENTITY = EntityCombinedID(127, 0);

    // 0x1001d15b0: the linker folded this into oldscape::dash3d::EntityHighlight::GetColour() const, which has identical code
    EntityCombinedID::GetEntityID() const;

    // 0x10048f970, 16 bytes, complete-object constructor, placed by class name and debug map
    // EntityCombinedID::EntityCombinedID(EntityType, int): jumps straight to the base-object constructor

    // 0x10048f980, 32 bytes, base-object constructor, placed by class name and debug map
    // EntityCombinedID::EntityCombinedID(EntityType, int)
    void EntityCombinedID::EntityCombinedID(byte param_2, ushort param_3) {
        m_entityID = (uint)param_3 | (uint)param_2 << 16 | (uint) * (byte*)((long)&m_entityID + 3) << 24;
    }

    // 0x10048f9a0, 16 bytes, base-object constructor, placed by class name and debug map
    // EntityCombinedID::EntityCombinedID(int)
    void EntityCombinedID::EntityCombinedID(int param_1) {
        m_entityID = param_1;
    }

    // 0x10048f9b0, 16 bytes, complete-object constructor, placed by class name and debug map
    // EntityCombinedID::EntityCombinedID(int): jumps straight to the base-object constructor

    // 0x10048f9c0, 80 bytes, placed by class name and debug map
    // EntityCombinedID::operator==(EntityCombinedID const&) const
    /* EntityCombinedID::TEMPNAMEPLACEHOLDERVALUE(EntityCombinedID const&) const
    */

    bool EntityCombinedID::operator==(EntityCombinedID* param_1) {
        char cVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        bool bVar5;

        cVar1 = GetEntityType(param_1);
        cVar2 = GetEntityType(this);
        if (cVar1 == cVar2) {
            iVar3 = GetEntityID(param_1);
            iVar4 = GetEntityID(this);
            bVar5 = iVar3 == iVar4;
        } else {
            bVar5 = false;
        }
        return bVar5;
    }

    // 0x100494430, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.30
    void ___cxx_global_var_init_30() {
        EntityCombinedID::MAP_COMBINED_ID = EntityCombinedID::GenerateCombinedID(10, 0);
    }

    // 0x100494450, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.31
    void ___cxx_global_var_init_31() {
        EntityCombinedID::NO_ENTITY_COMBINED_ID = EntityCombinedID::GenerateCombinedID(127, 0);
    }

    // 0x100494470, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.32
    void ___cxx_global_var_init_32() {
        new (&EntityCombinedID::NO_ENTITY) EntityCombinedID(127, 0);
    }

} // namespace jag::game
