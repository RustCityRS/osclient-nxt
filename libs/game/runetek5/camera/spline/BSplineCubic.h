// libs/game/runetek5/camera/spline/BSplineCubic.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class BSplineCubic {
    public:
        BSplineCubic();
        BSplineCubic* operator=(BSplineCubic&& bSplineCubic);
        ~BSplineCubic();
        void GetSegmentCount() const;
        BSplineCubic* GetWorldPositionFromParameter(double arg1) const;
        void GetWorldRollFromDistance(double arg1) const;
        double GetWorldRollFromParameter(double arg1) const;
        BSplineCubic(PacketT<Array<unsigned char>>& arg1);
        double GetParameterFromWorldDistance(double arg1) const;
        BSplineCubic(const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32,
                     const math::Vector3T<float>& vector33, const math::Vector3T<float>& vector34, double arg5,
                     double arg6);
        BSplineCubic(const math::Vector3T<double>& vector31, const math::Vector3T<double>& vector32,
                     const math::Vector3T<double>& vector33, const math::Vector3T<double>& vector34, double arg5,
                     double arg6);
        BSplineCubic(const std::array<math::Vector3T<double>, 4ul>& vector3s, double arg2, double arg3);
        void AddSegment(const math::Vector3T<double>& vector31, const math::Vector3T<double>& vector32, double arg3);
        void SetControlPoint(int arg1, bool arg2, const math::Vector3T<double>& vector3);
        void GetControlPoint(int arg1, bool arg2) const;
        double GetWorldLength() const;
        double GetPartialWorldLength(int arg1) const;
        BSplineCubic* GetWorldPosition(double arg1) const;
        double GetWorldDistanceFromParameter(double arg1) const;
        BSplineCubic* GetTangent(double arg1) const;
        auto GetSubSpline(int arg1, int arg2) const;
        BSplineCubic(const BSplineCubic& bSplineCubic);
        BSplineCubic(BSplineCubic&& bSplineCubic);
        void DumpSpline(const char* str) const;
        void Decode<PacketT<Array<unsigned char>>>(PacketT<Array<unsigned char>>& arg1);

    private:
        unsigned long field_0;
        BSplineCubicSegment* field_8;
        uint8_t _unknown_16[24];
    };

    // 0x1006071b0
    BSplineCubic* BSplineCubic::operator=(BSplineCubic&& bSplineCubic) {
        *this = bSplineCubic;
        field_32 = bSplineCubic.field_32;
        return this;
    }

    // 0x100607480
    void BSplineCubic::GetSegmentCount() const {
        size();
    }

    // 0x10060ec10
    BSplineCubic::BSplineCubic() : eastl::vector<BSplineCubicSegment>() {}

    // 0x10060ef80
    BSplineCubic::~BSplineCubic() {
        field_32.~vector();
    }

    // 0x100615ac0
    void BSplineCubic::GetWorldRollFromDistance(double arg1) const {
        GetWorldRollFromParameter((double)GetParameterFromWorldDistance(arg1));
    }

    // 0x100619cf0
    BSplineCubic::BSplineCubic(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1)
        : eastl::vector<BSplineCubicSegment>() {
        Decode<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>(this, arg1);
    }

    // 0x100619d50
    void BSplineCubic::Decode<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>(
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1) {
        int iVar1;
        Vector3T<float> local_b0;
        Vector3T<float> local_80;
        uint64_t local_70[3];
        double local_50[3];

        unsigned short local_32 = arg1.gSmart1or2();
        Vector3T<float> local_a0(arg1, false);
        Vector3T<float> local_90(arg1, false);
        float fVar2 = (float)arg1.gFloat();
        local_50[0] = (double)fVar2;
        field_32.push_back(*local_50);
        Vector3T<float> local_d0(arg1, false);
        Vector3T<float> local_c0(arg1, false);
        local_70[0] = local_d0 - local_c0;
        local_50[0] = (double)*local_70 + local_d0;
        local_c0.SetXYZ(*local_50);
        fVar2 = (float)arg1.gFloat();
        local_50[0] = (double)fVar2;
        field_32.push_back(*local_50);
        emplace_back<math::Vector3T<float>&, math::Vector3T<float>&, math::Vector3T<float>&, math::Vector3T<float>&>(
            local_a0, local_90, local_c0, local_d0);
        if (2 < local_32) {
            iVar1 = local_32 - 2;
            do {
                local_80 = math::Vector3T(arg1, false);
                local_b0 = math::Vector3T(arg1, false);
                local_70[0] = local_80 - local_b0;
                local_50[0] = (double)*local_70 + local_80;
                local_b0.SetXYZ(*local_50);
                local_50->Vector3T<float>(local_80);
                local_70->Vector3T<float>(local_b0);
                fVar2 = (float)arg1.gFloat();
                AddSegment(*local_50, *local_70, (double)fVar2);
                iVar1 = iVar1 - 1;
            } while (iVar1 != 0);
        }
    }

    // 0x10061a490
    BSplineCubic::BSplineCubic(const BSplineCubic& bSplineCubic)
        : eastl::vector<BSplineCubicSegment>(bSplineCubic), field_32(bSplineCubic.field_32) {}

    // 0x10061a770
    BSplineCubic::BSplineCubic(BSplineCubic&& bSplineCubic)
        : eastl::vector<BSplineCubicSegment>(bSplineCubic), field_32(bSplineCubic.field_32) {}

} // namespace jag::game

namespace jag {
    // 0x1006072d0
    bool ArrayValidPosition<std::array<game::BSplineCubic, 2ul>, int>(
        const std::array<game::BSplineCubic, 2ul>& bSplineCubics, const int& arg2) {
        integral_constant<bool, true> local_18;

        return ArrayPositivePos<int>(arg2, &local_18) && (unsigned int)*arg2 < 2;
    }

} // namespace jag
