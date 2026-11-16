// libs/game/runetek5/scene/entities/components/route/EntityStandardRoute.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class EntityStandardRoute : public EntityRoute // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~EntityStandardRoute();
        virtual void AddWaypoint(game::CoordFine const&, game::CoordFine const&, MoveSpeed const*);
        virtual EntityStandardRoute* MoveAlongRoute(game::CoordFine const&, FacingController&, int);
        uint CalculateDistanceToMove(FacingController const&, MoveSpeed const*);
        void CalculateMovementAngle(math::Vector3T<float> const&, math::Vector3T<float> const&);
        EntityStandardRoute(bool);

        // data members, from how the methods use this: 384 bytes, the first 384 are EntityRoute
    };

    // 0x100425a50, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // EntityStandardRoute::EntityStandardRoute(bool): jumps straight to the base-object constructor

    // 0x100425a70, 48 bytes, base-object constructor, inline, placed by class name and debug map
    // EntityStandardRoute::EntityStandardRoute(bool)
    void EntityStandardRoute::EntityStandardRoute(bool param_1) {
        new (this) EntityRoute(param_1);
        field_0 = &PTR__EntityStandardRoute_100efe888;
    }

    // 0x100425cc0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // EntityWaypoint::EntityWaypoint(game::CoordFine const&, MoveSpeed const*): jumps straight to the base-object constructor

    // 0x100425d10, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // EntityWaypoint::EntityWaypoint(game::CoordFine const&, MoveSpeed const*)
    void EntityWaypoint::EntityWaypoint(CoordFine* param_1, MoveSpeed* param_2) {
        float fVar1;
        float fVar2;
        float fVar3;

        fVar1 = param_1->field_4;
        fVar2 = param_1->field_8;
        fVar3 = param_1->field_12;
        m_level = param_1->field_0;
        field_4 = fVar1;
        field_8 = fVar2;
        field_12 = fVar3;
        m_pMoveSpeed = param_2;
    }

} // namespace jag
