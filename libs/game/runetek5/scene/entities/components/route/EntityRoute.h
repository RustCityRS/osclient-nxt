// libs/game/runetek5/scene/entities/components/route/EntityRoute.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    class EntityRoute {
    public:
        // virtual methods in vtable order
        virtual ~EntityRoute();
        virtual void __pure_slot_2() = 0;
        virtual void RemoveFirstWaypoint();
        virtual void SkipToEnd();
        virtual void UpdateEntitySize(int, int);
        virtual void __pure_slot_6() = 0;
        virtual void ClearRoute();
        virtual void RenderDebug(game::CoordFine const&, game::HeightMap const&, game::LinkMap const&, unsigned int);
        bool HasWalkSmoothing();
        EntityRoute(bool);
        ulong IsWaypointTooFar(math::Vector3T<float> const&, int, EntityWaypoint const&) const;
        void PushWaypoint(EntityWaypoint&&);
        void GetFirstWaypoint() const;
        void AddStalledTick();
        void ResetStalledTickCount();
        bool HasMovement() const;
        int GetStalledTickCount() const;
        void Length() const;
        void GetLastWaypoint() const;
        void SetWaypointReachedCallback(std::function<void()>);

        // data members, from how the methods use this: 384 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined1 field_8;  // offset 8
        char _unknown_9[55];
        bool m_hasWalkSmoothing; // offset 64
        char _unknown_65[3];
        int m_stalledTickCount; // offset 68
        char _unknown_72[312];
    };

    // 0x1003e8d80, 16 bytes, inline, placed by class name
    // EntityRoute::ClearRoute()
    void EntityRoute::ClearRoute() {
        (&field_8)->clear();
    }

    // 0x1003ea720, 32 bytes, inline, placed by class name
    // EntityRoute::GetFirstWaypoint() const
    void EntityRoute::GetFirstWaypoint() {
        eastl::ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>::
        operator[](
            (ring_buffer<EntityWaypoint, eastl::vector<EntityWaypoint, eastl::allocator>, eastl::allocator>*)&field_8,
            0);
    }

    // 0x1003f4170, 16 bytes, inline, placed by class name
    // EntityRoute::AddStalledTick()
    void EntityRoute::AddStalledTick() {
        m_stalledTickCount = m_stalledTickCount + 1;
    }

    // 0x1003f4180, 16 bytes, inline, placed by class name
    // EntityRoute::ResetStalledTickCount()
    void EntityRoute::ResetStalledTickCount() {
        m_stalledTickCount = 0;
    }

    // 0x1003f50f0, 32 bytes, inline, placed by class name
    // EntityRoute::HasMovement() const
    bool EntityRoute::HasMovement() {
        return (&field_8)->GetAuthWrapper() != 0;
    }

    // 0x1003f65a0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // EntityRoute::GetStalledTickCount() const
    /* game::HitmarkType::GetDuration() const */

    uint game::HitmarkType::GetDuration() {
        return m_duration;
    }

    // 0x100418f70, 16 bytes, inline, placed by class name
    // EntityRoute::Length() const
    void EntityRoute::Length() {
        (&field_8)->GetAuthWrapper();
    }

    // 0x100418f80, 16 bytes, inline, placed by class name
    // EntityRoute::GetLastWaypoint() const
    void EntityRoute::GetLastWaypoint() {
        (&field_8)->back();
    }

    // 0x1004190c0, 16 bytes, inline, placed by class name
    // EntityRoute::SetWaypointReachedCallback(std::function<void ()>)
    /* EntityRoute::SetWaypointReachedCallback(std::function<void ()>) */

    void EntityRoute::SetWaypointReachedCallback(function* param_2) {
        std::function<void()>::operator=((function<void()>*)&field_80, param_2);
    }

    // 0x100425cd0, 64 bytes, base-object destructor, inline, placed by class name
    // EntityRoute::~EntityRoute()
    void EntityRoute::~EntityRoute() {
        field_0 = &PTR__OptionStore_100efe7d8;
        std::function<void()>::~function((function<void()>*)&field_80);
        (&field_8)->~ring_buffer();
    }

} // namespace jag
