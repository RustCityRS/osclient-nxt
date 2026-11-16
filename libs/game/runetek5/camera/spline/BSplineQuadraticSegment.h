// libs/game/runetek5/camera/spline/BSplineQuadraticSegment.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class BSplineQuadraticSegment {
    public:
        BSplineQuadraticSegment();
        void Reset();
        ulong IsValid() const;
        GetWorldPosition(double);
        void SetControlPoint(int, math::Vector3T<double> const&);

        // data members, from how the methods use this: 16 bytes
        char _unknown_0[16];
    };

    // 0x100606300, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // BSplineQuadraticSegment::BSplineQuadraticSegment(): jumps straight to the base-object constructor

    // 0x100606580, 16 bytes, inline, placed by class name and debug map
    // BSplineQuadraticSegment::Reset()
    void BSplineQuadraticSegment::Reset() {
        Vector3T* in_RSI;

        fill(in_RSI);
    }

    // 0x100606610, 112 bytes, inline, placed by class name and debug map
    // BSplineQuadraticSegment::IsValid() const
    ulong BSplineQuadraticSegment::IsValid() {
        bool bVar1;
        Vector3T* pVVar2;
        undefined7 extraout_var;
        undefined8 unaff_RBX;
        ulong uVar3;

        pVVar2 = (Vector3T*)std::array<math::Vector3T<double>, 3ul>::operator[](
            (array<math::Vector3T<double>, 3ul>*)this, 0);
        bVar1 = math::operator!=(pVVar2, (Vector3T*)PTR_ZERO_100ee66c0);
        uVar3 = CONCAT71((int7)((ulong)unaff_RBX >> 8), 1);
        if (!bVar1) {
            pVVar2 = (Vector3T*)std::array<math::Vector3T<double>, 3ul>::operator[](
                (array<math::Vector3T<double>, 3ul>*)this, 1);
            bVar1 = math::operator!=(pVVar2, (Vector3T*)PTR_ZERO_100ee66c0);
            if (!bVar1) {
                pVVar2 = (Vector3T*)std::array<math::Vector3T<double>, 3ul>::operator[](
                    (array<math::Vector3T<double>, 3ul>*)this, 2);
                bVar1 = math::operator!=(pVVar2, (Vector3T*)PTR_ZERO_100ee66c0);
                uVar3 = CONCAT71(extraout_var, bVar1) & 4294967295;
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x100607070, 48 bytes, inline, placed by class name
    // BSplineQuadraticSegment::SetControlPoint(int, math::Vector3T<double> const&)
    void BSplineQuadraticSegment::SetControlPoint(int param_1, Vector3T* param_2) {
        Vector3T<double>* this_00;

        this_00 = (Vector3T<double>*)std::array<math::Vector3T<double>, 3ul>::operator[](
            (array<math::Vector3T<double>, 3ul>*)this, (long)param_1);
        math::Vector3T<double>::operator=(this_00, param_2);
    }

    // 0x10060eb00, 32 bytes, base-object constructor, inline, placed by class name
    // BSplineQuadraticSegment::BSplineQuadraticSegment()
    void BSplineQuadraticSegment::BSplineQuadraticSegment() {
        new (this) std::array<math::Vector3T<double>, 3ul>();
        Reset(this);
    }

} // namespace jag::game
