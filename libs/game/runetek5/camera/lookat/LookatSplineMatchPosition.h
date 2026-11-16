// libs/game/runetek5/camera/lookat/LookatSplineMatchPosition.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class LookatSplineMatchPosition {
    public:
        // virtual methods in vtable order
        virtual ~LookatSplineMatchPosition();
        virtual GetCurrentLookat() const;
        virtual void GetLookatData(LookatData&);
        virtual void GetLookatOffset(math::Vector3T<double>&) const;
        virtual void GetLookatPosition(math::Vector3T<double>&) const;
        virtual void SetCurrentLookat(math::Vector3T<double> const&);
        virtual void GetDestinationLookat(math::Vector3T<double>&) const;
        virtual void GetLookatFine(CoordFine&) const;
        virtual GetZRotation() const;
        virtual GetFinishTriggers(eastl::fixed_vector<int, 2ul, true, eastl::allocator>&);
        virtual bool Ready() const;
        virtual void ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&,
                                         std::function<shared_ptr<Entity>(CameraTrackableType, int)> const&);
        virtual void ToString(eastl::fixed_string<char, 512, true, eastl::allocator>&) const;
        LookatSplineMatchPosition();

        // data members, from how the methods use this: 112 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[8];
        AABB field_16;         // offset 16
        BSplineCubic field_40; // offset 40
        char _unknown_80[32];
    };

    // 0x1006195a0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // LookatSplineMatchPosition::~LookatSplineMatchPosition(): jumps straight to the base-object destructor

    // 0x1006195b0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // LookatSplineMatchPosition::~LookatSplineMatchPosition()
    void LookatSplineMatchPosition::~LookatSplineMatchPosition() {
        ~LookatSplineMatchPosition(this);
        operator_delete(this);
    }

    // 0x1006195d0, 48 bytes, inline, placed by class name and debug map
    // LookatSplineMatchPosition::GetLookatData(LookatData&)
    void LookatSplineMatchPosition::GetLookatData(LookatData* param_1) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "lookat/LookatSplineMatchPosition.h",
                        52, "Not implemented");
    }

    // 0x100619600, 64 bytes, inline, placed by class name and debug map
    // LookatSplineMatchPosition::GetLookatOffset(math::Vector3T<double>&) const
    void LookatSplineMatchPosition::GetLookatOffset(Vector3T* param_1) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "lookat/LookatSplineMatchPosition.h",
                        53, "Not implemented");
    }

    // 0x100619640, 48 bytes, inline, placed by class name and debug map
    // LookatSplineMatchPosition::SetCurrentLookat(math::Vector3T<double> const&)
    void LookatSplineMatchPosition::SetCurrentLookat(Vector3T* param_1) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "lookat/LookatSplineMatchPosition.h",
                        54, "Not implemented");
    }

    // 0x100619670, 48 bytes, inline, placed by class name and debug map
    // LookatSplineMatchPosition::GetDestinationLookat(math::Vector3T<double>&) const
    void LookatSplineMatchPosition::GetDestinationLookat(Vector3T* param_1) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "lookat/LookatSplineMatchPosition.h",
                        55, "Not implemented");
    }

    // 0x1006196a0, 48 bytes, inline, placed by class name and debug map
    // LookatSplineMatchPosition::GetLookatFine(CoordFine&) const
    void LookatSplineMatchPosition::GetLookatFine(CoordFine* param_1) {
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "lookat/LookatSplineMatchPosition.h",
                        56, "Not implemented");
    }

    // 0x1006196d0, 32 bytes, inline, placed by class name and debug map
    // LookatSplineMatchPosition::Ready() const
    bool LookatSplineMatchPosition::Ready() {
        int iVar1;

        iVar1 = field_40->GetSegmentCount();
        return 0 < iVar1;
    }

    // 0x10061a7f0, 64 bytes, base-object destructor, inline, placed by class name
    // LookatSplineMatchPosition::~LookatSplineMatchPosition()
    void LookatSplineMatchPosition::~LookatSplineMatchPosition() {
        field_0 = &PTR__LookatSplineMatchPosition_100f0bf18;
        (&field_104)->~weak_ptr();
        field_40->~BSplineCubic();
        ~AutoSingleton();
    }

    // 0x100640f60, 16 bytes, complete-object constructor, inline, placed by class name
    // LookatSplineMatchPosition::LookatSplineMatchPosition(): jumps straight to the base-object constructor

    // 0x100640f70, 112 bytes, base-object constructor, inline, placed by class name
    // LookatSplineMatchPosition::LookatSplineMatchPosition()
    void LookatSplineMatchPosition::LookatSplineMatchPosition() {
        ILookatManager::ILookatManager();
        field_0 = &PTR__LookatSplineMatchPosition_100f0bf18;
        new (field_16) oldscape::dash3d::ModelLit::AABB();
        new (field_40) BSplineCubic();
        new (&field_104, (_func_decltype_nullptr*)5) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

} // namespace jag::game
