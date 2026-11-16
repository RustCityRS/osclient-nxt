// libs/game/runetek5/camera/ICamera.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x10062f190
    shared_ptr_if_not_array<game::LookatPoint>::type make_shared<game::LookatPoint>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        LookatPoint* local_28[2];

        auto arg1 = aligned_alloc(152, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<game::LookatPoint>::type result;
        } else {
            local_28[0] = placement_new<game::LookatPoint>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<game::LookatPoint>, int, game::LookatPoint*&>(arg1, &local_2c,
                                                                                               local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x10062f260
    shared_ptr_if_not_array<game::LookatEntity>::type make_shared<game::LookatEntity>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        LookatEntity* local_28[2];

        auto arg1 = aligned_alloc(216, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<game::LookatEntity>::type result;
        } else {
            local_28[0] = placement_new<game::LookatEntity>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<game::LookatEntity>, int, game::LookatEntity*&>(arg1, &local_2c,
                                                                                                 local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x10062f2f0
    shared_ptr_if_not_array<game::LookatSpline>::type
    make_shared<game::LookatSpline, game::LookatMode&>(game::LookatMode& lookatMode) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        LookatSpline* local_30[2];

        auto arg1 = aligned_alloc(344, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<game::LookatSpline>::type result;
        } else {
            local_30[0] = placement_new<game::LookatSpline, game::LookatMode&>((void*)((long)arg1 + 32), lookatMode);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<game::LookatSpline>, int, game::LookatSpline*&>(arg1, &local_34,
                                                                                                 local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x10062f390
    shared_ptr_if_not_array<game::LookatOrientation>::type make_shared<game::LookatOrientation>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        LookatOrientation* local_28[2];

        auto arg1 = aligned_alloc(184, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<game::LookatOrientation>::type result;
        } else {
            local_28[0] = placement_new<game::LookatOrientation>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<game::LookatOrientation>, int, game::LookatOrientation*&>(
                    arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x10062f420
    shared_ptr_if_not_array<game::LookatSplineMatchPosition>::type make_shared<game::LookatSplineMatchPosition>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        LookatSplineMatchPosition* local_28[2];

        auto arg1 = aligned_alloc(152, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<game::LookatSplineMatchPosition>::type result;
        } else {
            local_28[0] = placement_new<game::LookatSplineMatchPosition>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<game::LookatSplineMatchPosition>, int,
                              game::LookatSplineMatchPosition*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x10062f600
    shared_ptr_if_not_array<game::PositionPoint>::type make_shared<game::PositionPoint>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        PositionPoint* local_28[2];

        auto arg1 = aligned_alloc(160, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<game::PositionPoint>::type result;
        } else {
            local_28[0] = placement_new<game::PositionPoint>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<game::PositionPoint>, int, game::PositionPoint*&>(arg1, &local_2c,
                                                                                                   local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x10062f6d0
    shared_ptr_if_not_array<game::PositionEntity>::type make_shared<game::PositionEntity>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        PositionEntity* local_28[2];

        auto arg1 = aligned_alloc(392, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<game::PositionEntity>::type result;
        } else {
            local_28[0] = placement_new<game::PositionEntity>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<game::PositionEntity>, int, game::PositionEntity*&>(arg1, &local_2c,
                                                                                                     local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x10062f760
    shared_ptr_if_not_array<game::PositionSpline>::type
    make_shared<game::PositionSpline, game::PositionMode&>(game::PositionMode& positionMode) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        PositionSpline* local_30[2];

        auto arg1 = aligned_alloc(344, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<game::PositionSpline>::type result;
        } else {
            local_30[0] =
                placement_new<game::PositionSpline, game::PositionMode&>((void*)((long)arg1 + 32), positionMode);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<game::PositionSpline>, int, game::PositionSpline*&>(arg1, &local_34,
                                                                                                     local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

} // namespace jag

namespace jag::game {
    class ICamera {
    public:
        ICamera();
    };

    // 0x10062ecc0
    ICamera::ICamera() {
        field_0 = PTR_vtable_100ee85d8 + 16;
    }

} // namespace jag::game

namespace jag::math {
    // 0x10062fa40
    auto QuaternionT<double>::Normalise() {
        auto result;

        double arg1 = (double)Length(&result);
        operator/=(&result, arg1);
        return result;
    }

    // 0x10062fa60
    void QuaternionT<double>::LengthSq() const {
        QuaternionDot<double>(this, this);
    }

} // namespace jag::math
