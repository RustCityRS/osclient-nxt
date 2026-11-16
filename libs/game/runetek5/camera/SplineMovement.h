// libs/game/runetek5/camera/SplineMovement.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class SplineMovement {
    public:
        GetSplines() const;
        SplineMovement(InternalType);
        void SetSpeedProfile(SplineSpeedProfile);
        ~SplineMovement();
        double GetCurrentParameter() const;
        double GetCurrentPoint() const;
        ulong Ready() const;
        void AddSpline(BSplineCubic const&, int, float);
        void SetSpeedParameters(double, double);
        bool Finished() const;
        void ResetSplines();
        GetCurrentPosition() const;
        double GetSpeedGradient(double, double, double, double, double);
        double GetSpeedTrapezium(double, double, double, double, math::Vector3T<float> const&,
                                 math::Vector3T<float> const&);
        void ProcessServerUpdateSpline(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&);
        uint Update(float, math::Vector3T<float> const&, math::Vector3T<float> const&);
        GetOnFinishTriggers(eastl::fixed_vector<int, 2ul, true, eastl::allocator>&);
        void GetRollAngle() const;
        void DrawDebug(unsigned int);
        char* GetSpeedProfileDescription();

        // data members, from how the methods use this: 248 bytes
        undefined4 field_0; // offset 0
        undefined1 field_4; // offset 4
        char _unknown_5[3];
        int field_8; // offset 8
        char _unknown_12[132];
        double m_currentPoint;     // offset 144
        double m_currentParameter; // offset 152
        double field_160;          // offset 160
        int m_speedProfile;        // offset 168
        char _unknown_172[76];
    };

    // 0x1006158f0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // SplineMovement::SplineMovement(SplineMovement::InternalType): jumps straight to the base-object constructor

    // 0x100615900, 16 bytes, inline, placed by class name and debug map
    // SplineMovement::SetSpeedProfile(SplineSpeedProfile)
    void SplineMovement::SetSpeedProfile(int param_2) {
        m_speedProfile = param_2;
    }

    // 0x100615910, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // SplineMovement::~SplineMovement(): jumps straight to the base-object destructor

    // 0x100615a60, 16 bytes, inline, placed by class name
    // SplineMovement::GetCurrentParameter() const
    double SplineMovement::GetCurrentParameter() {
        return m_currentParameter;
    }

    // 0x100615ae0, 16 bytes, inline, placed by class name
    // SplineMovement::GetCurrentPoint() const
    double SplineMovement::GetCurrentPoint() {
        return m_currentPoint;
    }

    // 0x100619a70, 272 bytes, base-object constructor, inline, placed by class name
    // SplineMovement::SplineMovement(SplineMovement::InternalType)
    void SplineMovement::SplineMovement(undefined4 param_2) {
        field_0 = param_2;
        field_4 = 0;
        field_8 = 0;
        new (&field_16) eastl::vector<BSplineCubic, eastl::allocator>();
        new (&field_48) eastl::vector<float, eastl::allocator>();
        new (&field_80) eastl::vector<int, eastl::allocator>();
        new (&field_112) eastl::vector<int, eastl::allocator>();
        m_currentPoint = 0.0;
        m_currentParameter = 0.0;
        field_160 = 0.0;
        m_speedProfile = 2;
        new (&field_176) eastl::vector<double, eastl::allocator>();
        new (&field_208) eastl::vector<double, eastl::allocator>();
        new (&field_240) eastl::vector<double, eastl::allocator>();
    }

    // 0x100619c90, 96 bytes, base-object destructor, inline, placed by class name
    // SplineMovement::~SplineMovement()
    void SplineMovement::~SplineMovement() {
        (&field_240)->~vector();
        (&field_208)->~vector();
        (&field_176)->~vector();
        (&field_112)->~vector();
        (&field_80)->~vector();
        (&field_48)->~vector();
        (&field_16)->~vector();
    }

    // 0x10061a7d0, 32 bytes, inline, placed by class name
    // SplineMovement::Ready() const
    ulong SplineMovement::Ready() {
        ulong uVar1;

        if (field_4 == '\0') {
            return 0;
        }
        uVar1 = (&field_16)->empty();
        return uVar1 ^ 1;
    }

} // namespace jag::game
