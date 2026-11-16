// libs/game/runetek5/camera/lookat/LookatOrientation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class LookatOrientation : public LookatPoint // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~LookatOrientation();
        virtual AABB GetCurrentLookat() const;
        virtual GetLookatData(LookatData&);
        virtual Vector3T* GetLookatOffset(math::Vector3T<double>&) const;
        virtual void GetLookatPosition(math::Vector3T<double>&) const;
        virtual void SetCurrentLookat(math::Vector3T<double> const&);
        virtual void GetDestinationLookat(math::Vector3T<double>&) const;
        virtual void GetLookatFine(CoordFine&) const;
        virtual GetZRotation() const;
        virtual GetFinishTriggers(eastl::fixed_vector<int, 2ul, true, eastl::allocator>&);
        virtual Ready() const;
        virtual void ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&,
                                         std::function<shared_ptr<Entity>(CameraTrackableType, int)> const&);
        virtual void ToString(eastl::fixed_string<char, 512, true, eastl::allocator>&) const;
        virtual Service();
        virtual void SetLookatVector(math::Vector3T<float>);
        virtual GetCurrentOrientation() const;
        SetOrientationYRotation(int);
        SetOrientationXRotation(int);
        void SetOrientationXMovement(float);
        void SetOrientationZMovement(float);
        void ClampBoundary(math::Vector3T<double>&) const;
        void SetMaxDistanceClamping(math::Vector3T<float> const&, int, int, int, int, int, int);
        LookatOrientation();

        // data members, from how the methods use this: 144 bytes, the first 120 are LookatPoint
        double field_120;                    // offset 120
        double field_128;                    // offset 128
        undefined1 m_pCurrentOrientation[4]; // offset 136
        char _unknown_140[4];
    };

    // 0x10061da00, 64 bytes, inline, placed by class name and debug map
    // LookatOrientation::GetLookatOffset(math::Vector3T<double>&) const
    Vector3T* LookatOrientation::GetLookatOffset(Vector3T* param_1) {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "camera/lookat/LookatOrientation.h",
                            27, &DAT_100e32f27);
        return param_1;
    }

    // 0x100640e20, 16 bytes, complete-object constructor, inline, placed by class name
    // LookatOrientation::LookatOrientation(): jumps straight to the base-object constructor

    // 0x100640e30, 160 bytes, base-object constructor, inline, placed by class name
    // LookatOrientation::LookatOrientation()
    void LookatOrientation::LookatOrientation() {
        new (this) ILookatManager(3);
        field_0 = &PTR__ScriptOption_100f0c288;
        m_orientationXRotation = 0;
        m_orientationYRotation = 0;
        m_orientationXMovement = 0.0;
        m_orientationZMovement = 0.0;
        new (&field_32, -1.0, -1.0, -1.0) math::Vector3T<double>();
        new (&field_56, -1.0, -1.0, -1.0) math::Vector3T<double>();
        *(undefined2*)&field_80 = 0;
        new (m_currentLookat) oldscape::dash3d::ModelLit::AABB();
        new (&field_112) oldscape::dash3d::ModelLit::AABB();
        new (m_pCurrentOrientation) math::QuaternionT<float>();
    }

} // namespace jag::game
