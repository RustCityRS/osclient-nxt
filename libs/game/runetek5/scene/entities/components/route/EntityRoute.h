// libs/game/runetek5/scene/entities/components/route/EntityRoute.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class EntityRoute {
    public:
        // virtual methods in vtable order
        virtual ~EntityRoute();
        virtual void __pure_slot_2() = 0;
        virtual void RemoveFirstWaypoint();
        virtual void SkipToEnd();
        virtual void UpdateEntitySize(int arg1, int arg2);
        virtual void __pure_slot_6() = 0;
        virtual void ClearRoute();
        virtual void RenderDebug(const game::CoordFine& coordFine, const game::HeightMap& heightMap,
                                 const game::LinkMap& linkMap, unsigned int arg4);
        bool HasWalkSmoothing();
        EntityRoute(bool arg1);
        unsigned long IsWaypointTooFar(const math::Vector3T<float>& vector3, int arg2,
                                       const EntityWaypoint& entityWaypoint) const;
        void PushWaypoint(EntityWaypoint&& entityWaypoint);
        void GetFirstWaypoint() const;
        void AddStalledTick();
        void ResetStalledTickCount();
        bool HasMovement() const;
        int GetStalledTickCount() const;
        void Length() const;
        void GetLastWaypoint() const;
        void SetWaypointReachedCallback(std::function<void()> callback);

    private:
        EntityWaypoint field_8;
        uint8_t _unknown_32[32];
        bool m_hasWalkSmoothing;
        uint8_t _unknown_65[3];
        int m_stalledTickCount;
        uint8_t _unknown_72[312];
    };

    // 0x1003e8d80
    void EntityRoute::ClearRoute() {
        field_8->clear();
    }

    // 0x1003ea720
    void EntityRoute::GetFirstWaypoint() const {
        (*field_8)[0];
    }

    // 0x1003f4170
    void EntityRoute::AddStalledTick() {
        m_stalledTickCount = m_stalledTickCount + 1;
    }

    // 0x1003f4180
    void EntityRoute::ResetStalledTickCount() {
        m_stalledTickCount = 0;
    }

    // 0x1003f50f0
    bool EntityRoute::HasMovement() const {
        return field_8->GetAuthWrapper() != 0;
    }

    // 0x1003f65a0
    int EntityRoute::GetStalledTickCount() const {
        return m_duration;
    }

    // 0x100418f70
    void EntityRoute::Length() const {
        field_8->GetAuthWrapper();
    }

    // 0x100418f80
    void EntityRoute::GetLastWaypoint() const {
        field_8->back();
    }

    // 0x1004190c0
    void EntityRoute::SetWaypointReachedCallback(std::function<void()> callback) {
        field_80 = *callback;
    }

    // 0x100425cd0
    EntityRoute::~EntityRoute() {
        field_80.~function();
        field_8->~ring_buffer();
    }

} // namespace jag
