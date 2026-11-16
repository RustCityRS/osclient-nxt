// libs/game/runetek5/camera/SplineMovement.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class SplineMovement {
    public:
        uint8_t* GetSplines() const;
        SplineMovement(InternalType internalType);
        void SetSpeedProfile(SplineSpeedProfile splineSpeedProfile);
        ~SplineMovement();
        double GetCurrentParameter() const;
        double GetCurrentPoint() const;
        unsigned long Ready() const;
        void AddSpline(const BSplineCubic& bSplineCubic, int arg2, float arg3);
        void SetSpeedParameters(double arg1, double arg2);
        bool Finished() const;
        void ResetSplines();
        auto GetCurrentPosition() const;
        double GetSpeedGradient(double arg1, double arg2, double arg3, double arg4, double arg5);
        double GetSpeedTrapezium(double arg1, double arg2, double arg3, double arg4,
                                 const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32);
        void ProcessServerUpdateSpline(PacketT<Array<unsigned char>>& arg1);
        unsigned int Update(float arg1, const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32);
        uint64_t GetOnFinishTriggers(eastl::fixed_vector<int, 2ul>& arg1);
        void GetRollAngle() const;
        void DrawDebug(unsigned int arg1);
        char* GetSpeedProfileDescription();

    private:
        InternalType field_0;
        uint8_t field_4;
        uint8_t _unknown_5[3];
        int field_8;
        uint8_t _unknown_12[132];
        double m_currentPoint;
        double m_currentParameter;
        double field_160;
        SplineSpeedProfile m_speedProfile;
        uint8_t _unknown_172[76];
    };

    // 0x100615900
    void SplineMovement::SetSpeedProfile(SplineSpeedProfile splineSpeedProfile) {
        m_speedProfile = splineSpeedProfile;
    }

    // 0x100615a60
    double SplineMovement::GetCurrentParameter() const {
        return m_currentParameter;
    }

    // 0x100615ae0
    double SplineMovement::GetCurrentPoint() const {
        return m_currentPoint;
    }

    // 0x100619a70
    SplineMovement::SplineMovement(SplineMovement::InternalType internalType)
        : field_0(internalType), field_4(0), field_8(0) {
        new (&field_48) eastl::vector<float>();
        new (&field_80) eastl::vector<int>();
        new (&field_112) eastl::vector<int>();
        m_currentPoint = 0.0;
        m_currentParameter = 0.0;
        field_160 = 0.0;
        m_speedProfile = 2;
        new (&field_176) eastl::vector<double>();
        new (&field_208) eastl::vector<double>();
        new (&field_240) eastl::vector<double>();
    }

    // 0x100619c90
    SplineMovement::~SplineMovement() {
        field_240.~vector();
        field_208.~vector();
        field_176.~vector();
        field_112.~vector();
        field_80.~vector();
        field_48.~vector();
        field_16.~vector();
    }

    // 0x10061a7d0
    unsigned long SplineMovement::Ready() const {
        if (field_4 == '\0') {
            return 0;
        }
        return field_16.empty() ^ 1;
    }

} // namespace jag::game
