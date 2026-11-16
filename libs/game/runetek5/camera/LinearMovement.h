// libs/game/runetek5/camera/LinearMovement.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class LinearMovement {
    public:
        void LinearMovementUpdateWorldSpace(float arg1, math::Vector3T<double>& vector31,
                                            const math::Vector3T<double>& vector32, math::Vector3T<double>& vector33,
                                            const math::Vector3T<double>& vector34,
                                            const math::Vector3T<double>& vector35, int arg7, double arg8, int arg9,
                                            int arg10);
        LinearMovement* GetDesiredVelocity(float arg1, const math::Vector3T<double>& vector31,
                                           const math::Vector3T<double>& vector32,
                                           const math::Vector3T<double>& vector33,
                                           const math::Vector3T<double>& vector34);
        void LinearMovementUpdateCameraSpace(float arg1, math::Vector3T<double>& vector31,
                                             const math::QuaternionT<double>& quaternion,
                                             const math::Vector3T<double>& vector32, math::Vector3T<double>& vector33,
                                             const math::Vector3T<double>& vector34,
                                             const math::Vector3T<double>& vector35, int arg8, double arg9, int arg10,
                                             int arg11);
        void LinearSpringMovementUpdateCameraSpace(float arg1, math::Vector3T<double>& vector31,
                                                   const math::QuaternionT<double>& quaternion,
                                                   const math::Vector3T<double>& vector32,
                                                   math::Vector3T<double>& vector33,
                                                   const math::Vector3T<double>& vector34, double arg7, int arg8,
                                                   int arg9);
        void IsModeBasic(Mode mode);
        static double velocityLerp;               // = 0.8
        static int32_t ACCELERATION_INFINITE[56]; // initialised in its definition

    private:
        double field_0;
        double field_8;
        double field_16;
    };

    // 0x100631ab0
    void LinearMovement::IsModeBasic(LinearMovement::Mode mode) {
        return mode < 2;
    }

} // namespace jag::game

namespace jag {
    // 0x100632ce0
    shared_ptr_if_not_array<game::camera::Shake>::type
    make_shared<game::camera::Shake, int&, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&>(
        int& arg1, PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        Shake* local_38[2];

        auto arg1_00 = aligned_alloc(72, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<game::camera::Shake>::type result;
        } else {
            local_38[0] =
                placement_new<game::camera::Shake, int&, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&>(
                    (void*)((long)arg1_00 + 32), arg1, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<game::camera::Shake>, int, game::camera::Shake*&>(arg1_00, &local_3c,
                                                                                                   local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x100632d90
    shared_ptr_if_not_array<game::camera::ZTilt>::type
    make_shared<game::camera::ZTilt, int&, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&>(
        int& arg1, PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        ZTilt* local_38[2];

        auto arg1_00 = aligned_alloc(56, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<game::camera::ZTilt>::type result;
        } else {
            local_38[0] =
                placement_new<game::camera::ZTilt, int&, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&>(
                    (void*)((long)arg1_00 + 32), arg1, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<game::camera::ZTilt>, int, game::camera::ZTilt*&>(arg1_00, &local_3c,
                                                                                                   local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

} // namespace jag
