// libs/game/runetek5/camera/lookat/LookatSpline.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class LookatSpline : public ILookatManager // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~LookatSpline();
        virtual void Update(float, math::Vector3T<double> const&, math::Vector3T<double> const&);
        virtual GetCurrentLookat() const;
        virtual void GetLookatData(LookatData&);
        virtual void GetLookatOffset(math::Vector3T<double>&) const;
        virtual void GetLookatPosition(math::Vector3T<double>&) const;
        virtual void SetCurrentLookat(math::Vector3T<double> const&);
        virtual void GetDestinationLookat(math::Vector3T<double>&) const;
        virtual void GetLookatFine(CoordFine&) const;
        virtual GetZRotation() const;
        virtual void GetFinishTriggers(eastl::fixed_vector<int, 2ul, true, eastl::allocator>&);
        virtual void Ready() const;
        virtual void ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&,
                                         std::function<shared_ptr<Entity>(CameraTrackableType, int)> const&);
        virtual void DrawDebug(unsigned int);
        virtual void ToString(eastl::fixed_string<char, 512, true, eastl::allocator>&) const;
        GetSpline();
        LookatSpline(LookatMode);

        // data members, from how the methods use this: 6515880 bytes, the first 16 are ILookatManager
        AABB field_16;          // offset 16
        NXTPixToolkit field_40; // offset 40
    };

    // 0x100619400, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // LookatSpline::~LookatSpline(): jumps straight to the base-object destructor

    // 0x100619410, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // LookatSpline::~LookatSpline()
    void LookatSpline::~LookatSpline() {
        ~LookatSpline(this);
        operator_delete(this);
    }

    // 0x100619430, 48 bytes, inline, placed by class name and debug map
    // LookatSpline::GetLookatData(LookatData&)
    void LookatSpline::GetLookatData(LookatData* param_1) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "lookat/LookatSpline.h",
                        46, "Not implemented");
    }

    // 0x100619460, 64 bytes, inline, placed by class name and debug map
    // LookatSpline::GetLookatOffset(math::Vector3T<double>&) const
    void LookatSpline::GetLookatOffset(Vector3T* param_1) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "lookat/LookatSpline.h",
                        47, "Not implemented");
    }

    // 0x1006194a0, 64 bytes, inline, placed by class name and debug map
    // LookatSpline::GetLookatPosition(math::Vector3T<double>&) const
    void LookatSpline::GetLookatPosition(Vector3T* param_1) {
        undefined1 local_30[24];

        local_30->GetCurrentPosition();
        math::Vector3T<double>::operator=((Vector3T<double>*)param_1, (Vector3T*)local_30);
    }

    // 0x1006194e0, 48 bytes, inline, placed by class name and debug map
    // LookatSpline::SetCurrentLookat(math::Vector3T<double> const&)
    void LookatSpline::SetCurrentLookat(Vector3T* param_1) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "lookat/LookatSpline.h",
                        43, "Not implemented");
    }

    // 0x100619510, 48 bytes, inline, placed by class name and debug map
    // LookatSpline::GetDestinationLookat(math::Vector3T<double>&) const
    void LookatSpline::GetDestinationLookat(Vector3T* param_1) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "lookat/LookatSpline.h",
                        44, "Not implemented");
    }

    // 0x100619540, 48 bytes, inline, placed by class name and debug map
    // LookatSpline::GetLookatFine(CoordFine&) const
    void LookatSpline::GetLookatFine(CoordFine* param_1) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "lookat/LookatSpline.h",
                        45, "Not implemented");
    }

    // 0x100619570, 16 bytes, inline, placed by class name and debug map
    // LookatSpline::Ready() const
    void LookatSpline::Ready() {
        field_40->Ready();
    }

    // 0x100619580, 16 bytes, inline, placed by class name and debug map
    // LookatSpline::ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&, std::function<shared_ptr<Entity> (CameraTrackableType, int)> const&)
    /* LookatSpline::ProcessServerUpdate(PacketT<Array<unsigned char,
   BucketAllocatorEASTL> >&, std::function<shared_ptr<Entity>
   (CameraTrackableType, int)> const&) */

    void LookatSpline::ProcessServerUpdate(PacketT* param_1, function* param_2) {
        (field_40, param_1)->ProcessServerUpdateSpline();
    }

    // 0x100619590, 16 bytes, inline, placed by class name and debug map
    // LookatSpline::DrawDebug(unsigned int)
    void LookatSpline::DrawDebug(uint param_1) {
        (field_40, param_1)->DrawDebug();
    }

    // 0x10061a7a0, 48 bytes, base-object destructor, inline, placed by class name
    // LookatSpline::~LookatSpline()
    void LookatSpline::~LookatSpline() {
        field_0 = &PTR__LookatSpline_100f0bdc0;
        field_40->~SplineMovement();
        ~AutoSingleton();
    }

} // namespace jag::game
