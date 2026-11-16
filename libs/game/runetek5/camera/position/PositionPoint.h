// libs/game/runetek5/camera/position/PositionPoint.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class PositionPoint {
    public:
        // virtual methods in vtable order
        virtual ~PositionPoint();
        virtual uint64_t GetFinishTriggers(eastl::fixed_vector<int, 2ul>& arg1);
        virtual uint8_t Ready() const;
        virtual void SetCurrentPosition(const math::Vector3T<double>& vector3);
        virtual auto GetCurrentPosition() const;
        virtual auto GetPositionOffset() const;
        virtual void GetPositionData(PositionData& positionData, double arg2);
        virtual Vector3T<double>* GetPosition(math::Vector3T<double>& vector3, unsigned long long arg2) const;
        virtual Vector3T<double>* GetDestinationPosition(math::Vector3T<double>& vector3) const;
        virtual void GetPositionFine(CoordFine& coordFine, unsigned long long arg2) const;
        virtual void ProcessServerUpdate(PacketT<Array<unsigned char>>& arg1,
                                         const std::function<shared_ptr<Entity>(CameraTrackableType, int)>& callback);
        virtual void ToString(eastl::fixed_string<char, 512>& str) const;
        void SetDestination(const CoordFine& coordFine);
        void TestAndResolveCollision(const HeightMap* heightMap, const LinkMap* linkMap, bool arg3, bool arg4);
        Vector3T<double>* GetScaledPosition(math::Vector3T<double>& vector3, unsigned long long arg2, float arg3) const;
        void SetGroundCollision(bool arg1);
        PositionPoint();

    private:
        PositionMode field_8;
        uint8_t field_12;
        uint8_t _unknown_13[11];
        ReturnValue field_24;
        ReturnValue field_32;
        AABB field_40;
        AABB field_64;
        unsigned int field_88;
        uint8_t _unknown_92[12];
        ReturnValue field_104;
        ReturnValue field_112;
        bool m_groundCollision;
    };

    // 0x100619970
    void PositionPoint::SetCurrentPosition(const math::Vector3T<double>& vector3) {
        *m_currentLookat = vector3;
    }

    // 0x100619980
    auto PositionPoint::GetCurrentPosition() const {
        auto result;

        &result[2] = *(ReturnValue*)field_32;
        ReturnValue RVar1 = *(ReturnValue*)field_24;
        result = *(ReturnValue*)&field_16;
        &result[1] = RVar1;
        return result;
    }

    // 0x1006199a0
    auto PositionPoint::GetPositionOffset() const {
        auto result;

        &result[2] = *(ReturnValue*)field_112;
        ReturnValue RVar1 = *(ReturnValue*)field_104;
        result = *(ReturnValue*)&field_96;
        &result[1] = RVar1;
        return result;
    }

    // 0x1006199c0
    Vector3T<double>* PositionPoint::GetPosition(math::Vector3T<double>& vector3, unsigned long long arg2) const {
        vector3 = field_16;
        return vector3;
    }

    // 0x1006199e0
    Vector3T<double>* PositionPoint::GetDestinationPosition(math::Vector3T<double>& vector3) const {
        vector3 = *field_40;
        return vector3;
    }

    // 0x1006320e0
    void PositionPoint::SetGroundCollision(bool arg1) {
        m_groundCollision = arg1;
    }

    // 0x100641080
    PositionPoint::PositionPoint() : IPositionManager(0), field_12(0), field_88(4294967295), m_groundCollision(false) {}

} // namespace jag::game

namespace jag::math {
    // 0x10061b230
    QuaternionT<double> Lerp<QuaternionT<double>, float>(const QuaternionT<double>& quaternion1,
                                                         const QuaternionT<double>& quaternion2, float arg3) {
        QuaternionT<double>* in_RDX;
        QuaternionT<double> local_70;
        QuaternionT<double> local_50;

        local_50 - *in_RDX;
        &local_70* arg3;
        quaternion1 + quaternion2;
        return quaternion1;
    }

    // 0x10061b290
    QuaternionT<double> operator+
        <double>(const QuaternionT<double>& quaternion1, const QuaternionT<double>& quaternion2) {
        NXTPixToolkit* in_RDX;

        auto pdVar8 = quaternion2.SSOBeginPtr();
        double dVar1 = *pdVar8;
        pdVar8 = (double*)in_RDX->SSOBeginPtr();
        double dVar2 = *pdVar8;
        pdVar8 = (double*)quaternion2.second();
        double dVar3 = *pdVar8;
        pdVar8 = (double*)in_RDX->second();
        double dVar4 = *pdVar8;
        pdVar8 = (double*)quaternion2.GetScreen();
        double dVar5 = *pdVar8;
        pdVar8 = (double*)in_RDX->GetScreen();
        double dVar6 = *pdVar8;
        pdVar8 = (double*)quaternion2.second();
        double dVar7 = *pdVar8;
        pdVar8 = (double*)in_RDX->second();
        new (quaternion1) QuaternionT<double>(dVar1 + dVar2, dVar3 + dVar4, dVar5 + dVar6, dVar7 + *pdVar8);
        return quaternion1;
    }

    // 0x10061b370
    QuaternionT<double> operator* <double>(const QuaternionT<double>& quaternion, float arg2) {
        NXTPixToolkit* in_RSI;

        auto pdVar4 = in_RSI->SSOBeginPtr();
        double dVar1 = *pdVar4;
        pdVar4 = (double*)in_RSI->second();
        double dVar2 = *pdVar4;
        pdVar4 = (double*)in_RSI->GetScreen();
        double dVar3 = *pdVar4;
        pdVar4 = (double*)in_RSI->second();
        new (quaternion) QuaternionT<double>(dVar1 * (double)arg2, dVar2 * (double)arg2, dVar3 * (double)arg2,
                                             (double)arg2 * *pdVar4);
        return quaternion;
    }

    // 0x10061b410
    QuaternionT<double> operator-
        <double>(const QuaternionT<double>& quaternion1, const QuaternionT<double>& quaternion2) {
        NXTPixToolkit* in_RDX;

        auto pdVar8 = quaternion2.SSOBeginPtr();
        double dVar1 = *pdVar8;
        pdVar8 = (double*)in_RDX->SSOBeginPtr();
        double dVar2 = *pdVar8;
        pdVar8 = (double*)quaternion2.second();
        double dVar3 = *pdVar8;
        pdVar8 = (double*)in_RDX->second();
        double dVar4 = *pdVar8;
        pdVar8 = (double*)quaternion2.GetScreen();
        double dVar5 = *pdVar8;
        pdVar8 = (double*)in_RDX->GetScreen();
        double dVar6 = *pdVar8;
        pdVar8 = (double*)quaternion2.second();
        double dVar7 = *pdVar8;
        pdVar8 = (double*)in_RDX->second();
        new (quaternion1) QuaternionT<double>(dVar1 - dVar2, dVar3 - dVar4, dVar5 - dVar6, dVar7 - *pdVar8);
        return quaternion1;
    }

    // 0x10061b590
    QuaternionT<double> operator- <double>(const QuaternionT<double>& quaternion) {
        NXTPixToolkit* in_RSI;

        auto pdVar4 = in_RSI->SSOBeginPtr();
        double dVar1 = *pdVar4;
        pdVar4 = (double*)in_RSI->second();
        double dVar2 = *pdVar4;
        pdVar4 = (double*)in_RSI->GetScreen();
        double dVar3 = *pdVar4;
        pdVar4 = (double*)in_RSI->second();
        new (quaternion) QuaternionT<double>(-dVar1, -dVar2, -dVar3, -*pdVar4);
        return quaternion;
    }

    // 0x10061b620
    QuaternionT<double>* QuaternionT<double>::operator*=(double arg1) {
        *(double*)this = *(double*)this * arg1;
        *(double*)(this + 8) = *(double*)(this + 8) * arg1;
        *(double*)(this + 16) = *(double*)(this + 16) * arg1;
        *(double*)(this + 24) = arg1 * *(double*)(this + 24);
        return this;
    }

    // 0x10061b660
    QuaternionT<double> operator* <double>(const QuaternionT<double>& quaternion, double arg2) {
        NXTPixToolkit* in_RSI;

        auto pdVar4 = in_RSI->SSOBeginPtr();
        double dVar1 = *pdVar4;
        pdVar4 = (double*)in_RSI->second();
        double dVar2 = *pdVar4;
        pdVar4 = (double*)in_RSI->GetScreen();
        double dVar3 = *pdVar4;
        pdVar4 = (double*)in_RSI->second();
        new (quaternion) QuaternionT<double>(dVar1 * arg2, dVar2 * arg2, dVar3 * arg2, arg2 * *pdVar4);
        return quaternion;
    }

    // 0x10061b6f0
    QuaternionT<double>* QuaternionT<double>::operator+=(const QuaternionT<double>& quaternion) {
        *(double*)this = *(double*)this + *(double*)quaternion;
        *(double*)(this + 8) = *(double*)(this + 8) + *(double*)(quaternion + 8);
        *(double*)(this + 16) = *(double*)(this + 16) + *(double*)(quaternion + 16);
        *(double*)(this + 24) = *(double*)(this + 24) + *(double*)(quaternion + 24);
        return this;
    }

} // namespace jag::math

// 0x10061b580
double abs(double arg1) {
    return ABS(arg1);
}
