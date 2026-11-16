// libs/game/runetek5/scene/entities/components/route/EntitySmoothRoute.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class EntitySmoothRoute {
    public:
        // virtual methods in vtable order
        virtual ~EntitySmoothRoute();
        virtual void AddWaypoint(game::CoordFine const&, game::CoordFine const&, MoveSpeed const*);
        virtual void RemoveFirstWaypoint();
        virtual void SkipToEnd();
        virtual void UpdateEntitySize(int, int);
        virtual MoveAlongRoute(game::CoordFine const&, FacingController&, int);
        virtual void ClearRoute();
        virtual void RenderDebug(game::CoordFine const&, game::HeightMap const&, game::LinkMap const&, unsigned int);
        void AddWaypointAtFinePos(game::CoordFine const&, MoveSpeed const*);
        void RegenerateFromNewStartPos(game::CoordFine const&);
        IsCurveValid() const;
        UpdateSpeed(MoveSpeed const*);
        void UpdateEntityTurnSpeed(FacingController&, float, int);
        void UpdateCurvePosition(float);
        GetLocalTranslationOnCurve(float);
        CalculateMovementAngle(math::Vector3T<float> const&);
        void LocalTranslationToWorldTranslation(math::Vector3T<float> const&);
        void UpdateRoute(float);
        ulong InStraightLine();
        void GetCatchUpMultiplier(MoveSpeed const*);
        EntitySmoothRoute();

        // data members, from how the methods use this: 6516008 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[8];
        MoveSpeed* field_16; // offset 16
        undefined4 field_24; // offset 24
        char _unknown_28[36];
        bool field_64; // offset 64
        char _unknown_65[3];
        undefined4 field_68; // offset 68
        char _unknown_72[88];
        undefined8 field_160;     // offset 160
        EntityWaypoint field_168; // offset 168
        char _unknown_192[6515816];
    };

    class RouteMovement {
    public:
        RouteMovement(MoveType, math::Vector3T<float>, MoveSpeed const*, float);

        // data members, from how the methods use this: 32 bytes
        char _unknown_0[32];
    };

    // 0x1003e96c0, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // RouteMovement::RouteMovement(MoveType, math::Vector3T<float>, MoveSpeed const*, float): jumps straight to the base-object constructor

    // 0x1003e9b30, 48 bytes, inline, placed by class name and debug map
    // EntitySmoothRoute::LocalTranslationToWorldTranslation(math::Vector3T<float> const&)
    void EntitySmoothRoute::LocalTranslationToWorldTranslation(Vector3T* param_1) {
        Vector3T* pVVar1;

        pVVar1 = (Vector3T*)field_168->y();
        math::operator+(param_1, pVVar1);
    }

    // 0x1003ead80, 16 bytes, complete-object destructor, inline, placed by class name
    // EntitySmoothRoute::~EntitySmoothRoute(): jumps straight to the base-object destructor

    // 0x1003ead90, 32 bytes, deleting destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // EntitySmoothRoute::~EntitySmoothRoute()
    /* EntityStandardRoute::~EntityStandardRoute() */

    void EntityStandardRoute::~EntityStandardRoute() {
        ~EntityStandardRoute(this);
        operator_delete(this);
    }

    // 0x1003eb000, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // EntitySmoothRoute::~EntitySmoothRoute()
    /* EntityStandardRoute::~EntityStandardRoute() */

    void EntityStandardRoute::~EntityStandardRoute() {
        ~EntityRoute();
    }

    // 0x100425bf0, 16 bytes, complete-object constructor, inline, placed by class name
    // EntitySmoothRoute::EntitySmoothRoute(): jumps straight to the base-object constructor

    // 0x100425c10, 176 bytes, base-object constructor, inline, placed by class name
    // EntitySmoothRoute::EntitySmoothRoute()
    void EntitySmoothRoute::EntitySmoothRoute() {
        float local_28[4];

        new (this) EntityRoute(true);
        field_0 = &PTR__EntityStandardRoute_100efe830;
        local_28[0] = 0.0;
        new (&field_128, local_28) math::Transitionable<float>();
        field_160 = 4575657221408423936;
        new (local_28) game::CoordFine(-1, 0.0, 0.0);
        new (field_168, (CoordFine*)local_28, (MoveSpeed*)MoveSpeed::STATIONARY) EntityWaypoint();
        new (&field_192) math::Vector3T<int>();
    }

} // namespace jag
