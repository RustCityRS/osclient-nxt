// libs/game/runetek5/camera/lookat/LookatPoint.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class LookatPoint {
    public:
        // virtual methods in vtable order
        virtual ~LookatPoint();
        virtual AABB GetCurrentLookat() const;
        virtual void GetLookatData(LookatData&);
        virtual Vector3T* GetLookatOffset(math::Vector3T<double>&) const;
        virtual void GetLookatPosition(math::Vector3T<double>&) const;
        virtual void SetCurrentLookat(math::Vector3T<double> const&);
        virtual void GetDestinationLookat(math::Vector3T<double>&) const;
        virtual void GetLookatFine(CoordFine&) const;
        virtual GetZRotation() const;
        virtual GetFinishTriggers(eastl::fixed_vector<int, 2ul, true, eastl::allocator>&);
        virtual char Ready() const;
        virtual void ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&,
                                         std::function<shared_ptr<Entity>(CameraTrackableType, int)> const&);
        virtual void ToString(eastl::fixed_string<char, 512, true, eastl::allocator>&) const;
        void SetLookat(CoordFine const&);
        LookatPoint();

        // data members, from how the methods use this: 120 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined4 field_8;  // offset 8
        undefined1 field_12; // offset 12
        char _unknown_13[3];
        AABB m_currentLookat; // offset 16
        AABB field_40;        // offset 40
        AABB field_64;        // offset 64
        uint field_88;        // offset 88
        char _unknown_92[4];
        AABB field_96; // offset 96
    };

    // 0x10061da40, 64 bytes, inline, placed by class name and debug map
    // LookatPoint::GetLookatOffset(math::Vector3T<double>&) const
    Vector3T* LookatPoint::GetLookatOffset(Vector3T* param_1) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "camera/lookat/LookatPoint.h",
                            34, &DAT_100e32f27);
        return param_1;
    }

    // 0x10061da80, 32 bytes, inline, placed by class name and debug map
    // LookatPoint::GetLookatPosition(math::Vector3T<double>&) const
    void LookatPoint::GetLookatPosition(Vector3T* param_1) {
        math::Vector3T<double>::operator=((Vector3T<double>*)param_1, (Vector3T*)m_currentLookat);
    }

    // 0x10061daa0, 32 bytes, inline, placed by class name and debug map
    // LookatPoint::GetDestinationLookat(math::Vector3T<double>&) const
    void LookatPoint::GetDestinationLookat(Vector3T* param_1) {
        math::Vector3T<double>::operator=((Vector3T<double>*)param_1, (Vector3T*)field_64);
    }

    // 0x1006409b0, 16 bytes, complete-object constructor, inline, placed by class name
    // LookatPoint::LookatPoint(): jumps straight to the base-object constructor

    // 0x1006409c0, 112 bytes, base-object constructor, inline, placed by class name
    // LookatPoint::LookatPoint()
    void LookatPoint::LookatPoint() {
        new (this) ILookatManager(0);
        field_0 = &PTR__ScriptOption_100f0c338;
        field_12 = 0;
        new (m_currentLookat) oldscape::dash3d::ModelLit::AABB();
        new (field_40) oldscape::dash3d::ModelLit::AABB();
        new (field_64) oldscape::dash3d::ModelLit::AABB();
        field_88 = 4294967295;
        new (field_96) oldscape::dash3d::ModelLit::AABB();
    }

} // namespace jag::game
