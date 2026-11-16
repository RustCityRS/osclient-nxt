// libs/game/runetek5/camera/ICamera.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x10062f190, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::LookatPoint>::type make_shared<game::LookatPoint>()
    jag* make_shared<game::LookatPoint>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        LookatPoint* local_28[2];

        pvVar1 = (void*)aligned_alloc(152, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<game::LookatPoint>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<game::LookatPoint>, int, game::LookatPoint*&>(pvVar1, &local_2c,
                                                                                                    local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x10062f260, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::LookatEntity>::type make_shared<game::LookatEntity>()
    jag* make_shared<game::LookatEntity>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        LookatEntity* local_28[2];

        pvVar1 = (void*)aligned_alloc(216, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<game::LookatEntity>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<game::LookatEntity>, int, game::LookatEntity*&>(pvVar1, &local_2c,
                                                                                                      local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x10062f2f0, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::LookatSpline>::type make_shared<game::LookatSpline, game::LookatMode&>(game::LookatMode&)
    jag* make_shared<game::LookatSpline, game::LookatMode&>(LookatMode* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        LookatSpline* local_30[2];

        pvVar1 = (void*)aligned_alloc(344, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<game::LookatSpline, game::LookatMode&>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<game::LookatSpline>, int, game::LookatSpline*&>(pvVar1, &local_34,
                                                                                                      local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x10062f390, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::LookatOrientation>::type make_shared<game::LookatOrientation>()
    jag* make_shared<game::LookatOrientation>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        LookatOrientation* local_28[2];

        pvVar1 = (void*)aligned_alloc(184, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<game::LookatOrientation>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<game::LookatOrientation>, int, game::LookatOrientation*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x10062f420, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::LookatSplineMatchPosition>::type make_shared<game::LookatSplineMatchPosition>()
    jag* make_shared<game::LookatSplineMatchPosition>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        LookatSplineMatchPosition* local_28[2];

        pvVar1 = (void*)aligned_alloc(152, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<game::LookatSplineMatchPosition>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<game::LookatSplineMatchPosition>, int,
                                   game::LookatSplineMatchPosition*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x10062f600, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::PositionPoint>::type make_shared<game::PositionPoint>()
    jag* make_shared<game::PositionPoint>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        PositionPoint* local_28[2];

        pvVar1 = (void*)aligned_alloc(160, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<game::PositionPoint>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<game::PositionPoint>, int, game::PositionPoint*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x10062f6d0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::PositionEntity>::type make_shared<game::PositionEntity>()
    jag* make_shared<game::PositionEntity>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        PositionEntity* local_28[2];

        pvVar1 = (void*)aligned_alloc(392, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<game::PositionEntity>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<game::PositionEntity>, int, game::PositionEntity*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x10062f760, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::PositionSpline>::type make_shared<game::PositionSpline, game::PositionMode&>(game::PositionMode&)
    jag* make_shared<game::PositionSpline, game::PositionMode&>(PositionMode* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        PositionSpline* local_30[2];

        pvVar1 = (void*)aligned_alloc(344, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<game::PositionSpline, game::PositionMode&>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<ref_counter_shared<game::PositionSpline>, int, game::PositionSpline*&>(
                pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

} // namespace jag

namespace jag::math {
    // 0x10062ef10, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // QuaternionT<double>::QuaternionT(): jumps straight to the base-object constructor

    // 0x10062fa40, 32 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<double>::Normalise()
    QuaternionT<double>* QuaternionT<double>::Normalise() {
        double dVar1;

        dVar1 = (double)Length(this);
        operator/=(this, dVar1);
        return this;
    }

    // 0x10062fa60, 16 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<double>::LengthSq() const
    void QuaternionT<double>::LengthSq() {
        QuaternionDot<double>((QuaternionT*)this, (QuaternionT*)this);
    }

} // namespace jag::math

namespace jag::game {
    class ICamera {
    public:
        ICamera();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x10062ecc0, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // ICamera::ICamera()
    void ICamera::ICamera() {
        field_0 = PTR_vtable_100ee85d8 + 16;
    }

} // namespace jag::game
