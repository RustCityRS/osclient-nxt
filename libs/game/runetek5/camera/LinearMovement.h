// libs/game/runetek5/camera/LinearMovement.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class LinearMovement {
    public:
        void LinearMovementUpdateWorldSpace(float, math::Vector3T<double>&, math::Vector3T<double> const&,
                                            math::Vector3T<double>&, math::Vector3T<double> const&,
                                            math::Vector3T<double> const&, int, double, int, int);
        LinearMovement* GetDesiredVelocity(float, math::Vector3T<double> const&, math::Vector3T<double> const&,
                                           math::Vector3T<double> const&, math::Vector3T<double> const&);
        void LinearMovementUpdateCameraSpace(float, math::Vector3T<double>&, math::QuaternionT<double> const&,
                                             math::Vector3T<double> const&, math::Vector3T<double>&,
                                             math::Vector3T<double> const&, math::Vector3T<double> const&, int, double,
                                             int, int);
        void LinearSpringMovementUpdateCameraSpace(float, math::Vector3T<double>&, math::QuaternionT<double> const&,
                                                   math::Vector3T<double> const&, math::Vector3T<double>&,
                                                   math::Vector3T<double> const&, double, int, int);
        IsModeBasic(Mode);
        static double /* 8 bytes */ velocityLerp;     // = 0.8
        static /* 224 bytes */ ACCELERATION_INFINITE; // initialised in its definition

        // data members, from how the methods use this: 24 bytes
        double field_0;  // offset 0
        double field_8;  // offset 8
        double field_16; // offset 16
    };

    // 0x100631ab0, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LinearMovement::IsModeBasic(LinearMovement::Mode)
    /* graphics::IsShadowPass(graphics::RenderPassType) */

    bool graphics::IsShadowPass(uint param_1) {
        return param_1 < 2;
    }

} // namespace jag::game

namespace jag {
    // 0x100632ce0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::camera::Shake>::type make_shared<game::camera::Shake, int&, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&>(int&, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&)
    jag* jag::make_shared<game::camera::Shake, int&, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&>(
        int* param_1, PacketT* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        Shake* local_38[2];

        pvVar1 = (void*)aligned_alloc(72, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] =
                placement_new<game::camera::Shake, int&, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&>(
                    (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<game::camera::Shake>, int, game::camera::Shake*&>(
                pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x100632d90, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::camera::ZTilt>::type make_shared<game::camera::ZTilt, int&, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&>(int&, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&)
    jag* jag::make_shared<game::camera::ZTilt, int&, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&>(
        int* param_1, PacketT* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        ZTilt* local_38[2];

        pvVar1 = (void*)aligned_alloc(56, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] =
                placement_new<game::camera::ZTilt, int&, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&>(
                    (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<game::camera::ZTilt>, int, game::camera::ZTilt*&>(
                pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

} // namespace jag
