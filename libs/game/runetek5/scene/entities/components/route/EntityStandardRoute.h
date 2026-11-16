// libs/game/runetek5/scene/entities/components/route/EntityStandardRoute.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class EntityStandardRoute : public EntityRoute // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~EntityStandardRoute();
        virtual void AddWaypoint(const game::CoordFine& coordFine1, const game::CoordFine& coordFine2,
                                 const MoveSpeed* moveSpeed);
        virtual EntityStandardRoute* MoveAlongRoute(const game::CoordFine& coordFine,
                                                    FacingController& facingController, int arg3);
        unsigned int CalculateDistanceToMove(const FacingController& facingController, const MoveSpeed* moveSpeed);
        void CalculateMovementAngle(const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32);
        EntityStandardRoute(bool arg1);
    };

    // 0x100425a70
    EntityStandardRoute::EntityStandardRoute(bool arg1) : EntityRoute(arg1) {}

    // 0x100425d10
    EntityWaypoint::EntityWaypoint(const game::CoordFine& coordFine, const MoveSpeed* moveSpeed) {
        float fVar1 = coordFine.field_4;
        float fVar2 = coordFine.field_8;
        float fVar3 = coordFine.field_12;
        m_level = coordFine.field_0;
        field_4 = fVar1;
        field_8 = fVar2;
        field_12 = fVar3;
        m_pMoveSpeed = moveSpeed;
    }

} // namespace jag
