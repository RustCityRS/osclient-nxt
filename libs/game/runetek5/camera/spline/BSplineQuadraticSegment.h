// libs/game/runetek5/camera/spline/BSplineQuadraticSegment.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class BSplineQuadraticSegment {
    public:
        BSplineQuadraticSegment();
        void Reset();
        unsigned long IsValid() const;
        BSplineQuadraticSegment* GetWorldPosition(double arg1);
        void SetControlPoint(int arg1, const math::Vector3T<double>& vector3);

        uint8_t _unknown_0[16];
    };

    // 0x100606580
    void BSplineQuadraticSegment::Reset() {
        Vector3T<double>* in_RSI;

        fill(*in_RSI);
    }

    // 0x100606610
    unsigned long BSplineQuadraticSegment::IsValid() const {
        uint64_t extraout_var;
        uint64_t unaff_RBX;

        Vector3T<double>* pVVar2 = (Vector3T<double>*)(*this)[0];
        bool bVar1 = *pVVar2 != *PTR_ZERO_100ee66c0;
        unsigned long uVar3 = (((uint64_t)((int64_t)((unsigned long)unaff_RBX >> 8)) << 8) | (uint8_t)1);
        if (!bVar1) {
            pVVar2 = (Vector3T<double>*)(*this)[1];
            bVar1 = *pVVar2 != *PTR_ZERO_100ee66c0;
            if (!bVar1) {
                pVVar2 = (Vector3T<double>*)(*this)[2];
                bVar1 = *pVVar2 != *PTR_ZERO_100ee66c0;
                uVar3 = (((uint64_t)extraout_var << 8) | (uint8_t)bVar1) & 4294967295;
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x100607070
    void BSplineQuadraticSegment::SetControlPoint(int arg1, const math::Vector3T<double>& vector3) {
        Vector3T<double>* this_00 = (Vector3T<double>*)(*this)[(long)arg1];
        *this_00 = vector3;
    }

    // 0x10060eb00
    BSplineQuadraticSegment::BSplineQuadraticSegment() {
        new (this) std::array<math::Vector3T<double>, 3ul>();
        Reset();
    }

} // namespace jag::game
