// libs/game/runetek5/scene/entities/components/route/EntitySmoothRoute.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class EntitySmoothRoute {
    public:
        // virtual methods in vtable order
        virtual ~EntitySmoothRoute();
        virtual void AddWaypoint(const game::CoordFine& coordFine1, const game::CoordFine& coordFine2,
                                 const MoveSpeed* moveSpeed);
        virtual void RemoveFirstWaypoint();
        virtual void SkipToEnd();
        virtual void UpdateEntitySize(int arg1, int arg2);
        virtual auto MoveAlongRoute(const game::CoordFine& coordFine, FacingController& facingController, int arg3);
        virtual void ClearRoute();
        virtual void RenderDebug(const game::CoordFine& coordFine, const game::HeightMap& heightMap,
                                 const game::LinkMap& linkMap, unsigned int arg4);
        void AddWaypointAtFinePos(const game::CoordFine& coordFine, const MoveSpeed* moveSpeed);
        void RegenerateFromNewStartPos(const game::CoordFine& coordFine);
        bool IsCurveValid() const;
        uint64_t UpdateSpeed(const MoveSpeed* moveSpeed);
        void UpdateEntityTurnSpeed(FacingController& facingController, float arg2, int arg3);
        void UpdateCurvePosition(float arg1);
        uint64_t GetLocalTranslationOnCurve(float arg1);
        uint32_t CalculateMovementAngle(const math::Vector3T<float>& vector3);
        void LocalTranslationToWorldTranslation(const math::Vector3T<float>& vector3);
        void UpdateRoute(float arg1);
        unsigned long InStraightLine();
        void GetCatchUpMultiplier(const MoveSpeed* moveSpeed);
        EntitySmoothRoute();

    private:
        EntityWaypoint field_8;
        uint8_t _unknown_32[32];
        bool field_64;
        uint8_t _unknown_65[3];
        uint32_t field_68;
        uint8_t _unknown_72[88];
        uint64_t field_160;
        EntityWaypoint field_168;
        uint8_t _unknown_192[6515816];
    };

    class RouteMovement {
    public:
        RouteMovement(MoveType moveType, math::Vector3T<float> vector3, const MoveSpeed* moveSpeed, float arg4);

    private:
        MoveType field_0;
        unsigned long field_4;
        uint32_t field_12;
        Vector3T<float>* field_16;
        uint32_t field_24;
        uint8_t _unknown_28[4];
    };

    // 0x1003e9b30
    void EntitySmoothRoute::LocalTranslationToWorldTranslation(const math::Vector3T<float>& vector3) {
        auto vector32 = field_168->y();
        vector3 + *vector32;
    }

    // 0x1003eb000
    EntitySmoothRoute::~EntitySmoothRoute() {}

    // 0x100425c10
    EntitySmoothRoute::EntitySmoothRoute() : EntityRoute(true) {
        float local_28[4];

        local_28[0] = 0.0;
        new (&field_128) math::Transitionable<float>(*local_28);
        field_160 = 4575657221408423936;
        new (local_28) game::CoordFine(-1, 0.0, 0.0);
        new (field_168) EntityWaypoint(*local_28, (MoveSpeed*)MoveSpeed::STATIONARY);
        new (&field_192) math::Vector3T();
    }

} // namespace jag
