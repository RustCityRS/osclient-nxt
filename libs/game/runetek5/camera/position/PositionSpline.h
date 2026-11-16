// libs/game/runetek5/camera/position/PositionSpline.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class PositionSpline {
    public:
        // virtual methods in vtable order
        virtual ~PositionSpline();
        virtual IsSpline() const;
        virtual void Update(float, math::Vector3T<double> const&, math::Vector3T<double> const&);
        virtual void Ready() const;
        virtual void SetCurrentPosition(math::Vector3T<double> const&);
        virtual PositionSpline* GetCurrentPosition() const;
        virtual GetPositionOffset() const;
        virtual void GetPositionData(PositionData&, double);
        virtual GetPosition(math::Vector3T<double>&, unsigned long long) const;
        virtual void GetDestinationPosition(math::Vector3T<double>&) const;
        virtual void GetPositionFine(CoordFine&, unsigned long long) const;
        virtual void ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&,
                                         std::function<shared_ptr<Entity>(CameraTrackableType, int)> const&);
        virtual void GetRollAngle() const;
        virtual void GetFinishTriggers(eastl::fixed_vector<int, 2ul, true, eastl::allocator>&);
        virtual void DrawDebug(unsigned int);
        virtual void ToString(eastl::fixed_string<char, 512, true, eastl::allocator>&) const;
        SplineMovement GetSpline();
        GetSplineParameter();
        PositionSpline(PositionMode);
        Vector3T* GetScaledPosition(math::Vector3T<double>&, unsigned long long, float) const;
        void Finished() const;

        // data members, from how the methods use this: 6515856 bytes
        undefined** field_0;     // offset 0, vtable pointer
        undefined8 field_8;      // offset 8
        SplineMovement m_spline; // offset 16
        char _unknown_264[24];
        AABB field_288; // offset 288
        char _unknown_312[6515544];
    };

    // 0x1006196f0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // PositionSpline::~PositionSpline(): jumps straight to the base-object destructor

    // 0x100619700, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // PositionSpline::~PositionSpline()
    void PositionSpline::~PositionSpline() {
        ~PositionSpline(this);
        operator_delete(this);
    }

    // 0x100619720, 16 bytes, inline, placed by class name and debug map
    // PositionSpline::Ready() const
    void PositionSpline::Ready() {
        m_spline->Ready();
    }

    // 0x100619730, 48 bytes, inline, placed by class name and debug map
    // PositionSpline::SetCurrentPosition(math::Vector3T<double> const&)
    void PositionSpline::SetCurrentPosition(Vector3T* param_1) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "position/PositionSpline.h",
                        53, "Not implemented");
    }

    // 0x100619760, 32 bytes, inline, placed by class name and debug map
    // PositionSpline::GetCurrentPosition() const
    PositionSpline* PositionSpline::GetCurrentPosition() {
        GetCurrentPosition();
        return this;
    }

    // 0x100619780, 32 bytes, inline, placed by class name and debug map
    // PositionSpline::GetPositionOffset() const
    PositionSpline* PositionSpline::GetPositionOffset() {
        undefined8 uVar1;
        long in_RSI;

        *(undefined8*)m_spline = *(undefined8*)(in_RSI + 304);
        uVar1 = *(undefined8*)(in_RSI + 296);
        field_0 = *(undefined***)(in_RSI + 288);
        field_8 = uVar1;
        return this;
    }

    // 0x1006197a0, 48 bytes, inline, placed by class name and debug map
    // PositionSpline::GetPositionData(PositionData&, double)
    void PositionSpline::GetPositionData(PositionData* param_1, double param_2) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "position/PositionSpline.h",
                        52, "Not implemented");
    }

    // 0x1006197d0, 64 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // PositionSpline::GetPosition(math::Vector3T<double>&, unsigned long long) const
    /* PositionSpline::GetScaledPosition(math::Vector3T<double>&, unsigned long long,
   float) const */

    Vector3T* PositionSpline::GetScaledPosition(Vector3T* param_1, ulonglong param_2, float param_3) {
        undefined1 local_30[24];

        local_30->GetCurrentPosition();
        math::Vector3T<double>::operator=((Vector3T<double>*)param_1, (Vector3T*)local_30);
        return param_1;
    }

    // 0x100619810, 48 bytes, inline, placed by class name and debug map
    // PositionSpline::GetDestinationPosition(math::Vector3T<double>&) const
    void PositionSpline::GetDestinationPosition(Vector3T* param_1) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "position/PositionSpline.h",
                        55, "Not implemented");
    }

    // 0x100619840, 48 bytes, inline, placed by class name and debug map
    // PositionSpline::GetPositionFine(CoordFine&, unsigned long long) const
    void PositionSpline::GetPositionFine(CoordFine* param_1, ulonglong param_2) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "position/PositionSpline.h",
                        54, "Not implemented");
    }

    // 0x100619870, 16 bytes, inline, placed by class name and debug map
    // PositionSpline::ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&, std::function<shared_ptr<Entity> (CameraTrackableType, int)> const&)
    /* PositionSpline::ProcessServerUpdate(PacketT<Array<unsigned char,
   BucketAllocatorEASTL> >&, std::function<shared_ptr<Entity>
   (CameraTrackableType, int)> const&) */

    void PositionSpline::ProcessServerUpdate(PacketT* param_1, function* param_2) {
        (m_spline, param_1)->ProcessServerUpdateSpline();
    }

    // 0x100619880, 16 bytes, inline, placed by class name and debug map
    // PositionSpline::GetRollAngle() const
    void PositionSpline::GetRollAngle() {
        m_spline->GetRollAngle();
    }

    // 0x100619890, 16 bytes, inline, placed by class name and debug map
    // PositionSpline::GetFinishTriggers(eastl::fixed_vector<int, 2ul, true, eastl::allocator>&)
    void PositionSpline::GetFinishTriggers(fixed_vector* param_1) {
        (m_spline, param_1)->GetOnFinishTriggers();
    }

    // 0x1006198a0, 16 bytes, inline, placed by class name and debug map
    // PositionSpline::DrawDebug(unsigned int)
    void PositionSpline::DrawDebug(uint param_1) {
        (m_spline, param_1)->DrawDebug();
    }

    // 0x10061a860, 48 bytes, base-object destructor, inline, placed by class name
    // PositionSpline::~PositionSpline()
    void PositionSpline::~PositionSpline() {
        field_0 = &PTR__PositionSpline_100f0be58;
        m_spline->~SplineMovement();
        ~AutoSingleton();
    }

    // 0x100620b10, 16 bytes, inline, placed by class name
    // PositionSpline::Finished() const
    void PositionSpline::Finished() {
        m_spline->Finished();
    }

} // namespace jag::game
