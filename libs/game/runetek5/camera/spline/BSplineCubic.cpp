// libs/game/runetek5/camera/spline/BSplineCubic.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "BSplineCubic.h"

namespace jag::game {
    // 0x1006159f0
    BSplineCubic* BSplineCubic::GetWorldPositionFromParameter(double arg1) const {
        vector<BSplineCubicSegment>* in_RSI;
        double arg1_00;

        int iVar1 = in_RSI->size();
        if ((int)arg1 < iVar1) {
            (*in_RSI)[(long)(int)arg1];
            arg1_00 = arg1 - (double)(int)arg1;
        } else {
            in_RSI->back();
            arg1_00 = 1.0;
        }
        GetWorldPosition(arg1_00);
        return this;
    }

    // 0x100615e40
    double BSplineCubic::GetWorldRollFromParameter(double arg1) const {
        double* pdVar2;
        double dVar4;

        int iVar1 = size();
        uint8_t* this_00 = &field_32;
        if ((int)arg1 < iVar1 - 1) {
            pdVar2 = (double*)(*this_00)[(long)(int)arg1];
            dVar4 = *pdVar2;
            pdVar2 = (double*)(*this_00)[(long)((int)arg1 + 1)];
            dVar4 = (*pdVar2 - dVar4) * (arg1 - (double)(int)arg1) + dVar4;
        } else {
            pdVar2 = (double*)this_00->back();
            dVar4 = *pdVar2;
        }
        return dVar4;
    }

    // 0x100617cb0
    double BSplineCubic::GetParameterFromWorldDistance(double arg1) const {
        BSplineCubicSegment* pBVar3;
        unsigned long arg1_00;
        double extraout_XMM0_Qa;
        double extraout_XMM0_Qa_00;
        double dVar6;
        double dVar7;
        uint8_t auVar8[16];

        int iVar2 = size();
        bool bVar1 = 0 < iVar2;
        double dVar5 = extraout_XMM0_Qa;
        if (iVar2 < 1) {
        LAB_100617d78:
            if (bVar1) {
                return dVar5;
            }
        } else {
            arg1_00 = 0;
            pBVar3 = (BSplineCubicSegment*)(*this)[0];
            dVar5 = (double)pBVar3->GetWorldLength();
            dVar7 = 0.0;
            if (dVar5 <= arg1) {
                arg1_00 = 0;
                do {
                    dVar7 = dVar5;
                    arg1_00 = arg1_00 + 1;
                    iVar2 = size();
                    bVar1 = (long)arg1_00 < (long)iVar2;
                    dVar5 = extraout_XMM0_Qa_00;
                    if ((long)iVar2 <= (long)arg1_00)
                        goto LAB_100617d78;
                    pBVar3 = (BSplineCubicSegment*)(*this)[arg1_00];
                    dVar6 = (double)pBVar3->GetWorldLength();
                    dVar5 = dVar6 + dVar7;
                } while (dVar6 + dVar7 <= arg1);
            }
            pBVar3 = (BSplineCubicSegment*)(*this)[arg1_00 & 4294967295];
            dVar5 = (double)pBVar3->GetSplineParameter(arg1 - dVar7);
            if (bVar1) {
                return dVar5 + (double)(int)arg1_00;
            }
        }
        uint64_t uVar4 = size();
        auVar8._8_4_ = (int)((unsigned long)uVar4 >> 32);
        auVar8._0_8_ = uVar4;
        auVar8._12_4_ = 1160773632;
        return (auVar8._8_8_ - 1.9342813113834067e+25) +
               ((double)(((uint64_t)1127219200 << 32) | (uint32_t)((int)uVar4)) - 4503599627370496.0);
    }

    // 0x100617ee0
    BSplineCubic::BSplineCubic(const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32,
                               const math::Vector3T<float>& vector33, const math::Vector3T<float>& vector34,
                               double arg5, double arg6)
        : eastl::vector<BSplineCubicSegment>() {
        uint8_t* this_00 = &field_32;
        new (this_00) eastl::vector<double>();
        emplace_back<math::Vector3T<float>&, math::Vector3T<float>&, math::Vector3T<float>&, math::Vector3T<float>&>(
            vector31, vector32, vector33, vector34);
        this_00->push_back(arg5);
        this_00->push_back(arg6);
    }

    // 0x1006180b0
    BSplineCubic::BSplineCubic(const math::Vector3T<double>& vector31, const math::Vector3T<double>& vector32,
                               const math::Vector3T<double>& vector33, const math::Vector3T<double>& vector34,
                               double arg5, double arg6)
        : eastl::vector<BSplineCubicSegment>() {
        uint8_t* this_00 = &field_32;
        new (this_00) eastl::vector<double>();
        emplace_back<math::Vector3T<double> const&, math::Vector3T<double>&, math::Vector3T<double> const&,
                     math::Vector3T<double> const&>(vector31, vector32, vector33, vector34);
        this_00->push_back(arg5);
        this_00->push_back(arg6);
    }

    // 0x100618230
    BSplineCubic::BSplineCubic(const std::array<math::Vector3T<double>, 4ul>& vector3s, double arg2, double arg3)
        : eastl::vector<BSplineCubicSegment>() {
        uint8_t* this_00 = &field_32;
        new (this_00) eastl::vector<double>();
        Vector3T<double>* local_38 = &vector3s[0];
        Vector3T<double>* vector32 = &vector3s[1];
        Vector3T<double>* vector33 = &vector3s[2];
        Vector3T<double>* vector34 = &vector3s[3];
        emplace_back<math::Vector3T<double> const&, math::Vector3T<double>&, math::Vector3T<double> const&,
                     math::Vector3T<double> const&>(*local_38, *vector32, *vector33, *vector34);
        this_00->push_back(arg2);
        this_00->push_back(arg3);
    }

    // 0x100618320
    void BSplineCubic::AddSegment(const math::Vector3T<double>& vector31, const math::Vector3T<double>& vector32,
                                  double arg3) {
        Vector3T<double> local_70;
        Vector3T<double> local_58;

        auto this_00 = back();
        auto vector32_00 = this_00->GetControlPoint(3);
        this_00->GetControlPoint(2);
        local_58 - *vector32_00;
        local_70 + local_58;
        emplace_back<math::Vector3T<double> const&, math::Vector3T<double>&, math::Vector3T<double> const&,
                     math::Vector3T<double> const&>(*vector32_00, local_70, vector32, vector31);
        auto pdVar1 = field_32.push_back();
        *pdVar1 = arg3;
    }

    // 0x100618480
    void BSplineCubic::SetControlPoint(int arg1, bool arg2, const math::Vector3T<double>& vector3) {
        BSplineCubicSegment* pBVar2;
        BSplineCubicSegment* pBVar3;
        Vector3T<double>* vector32;
        uint64_t in_register_00000011;
        unsigned long uVar4;
        Vector3T<double> local_68;
        Vector3T<double> local_50;
        BSplineCubicSegment* local_38;

        int iVar1 = size();
        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            if (iVar1 == arg1) {
                pBVar2 = (BSplineCubicSegment*)(*this)[(long)(arg1 - 1)];
                goto LAB_1006186dd;
            }
            pBVar2 = (BSplineCubicSegment*)(*this)[(long)arg1];
            pBVar2->GetControlPoint(1);
            local_50 - vector3;
            pBVar2 = (BSplineCubicSegment*)(*this)[(long)arg1];
            pBVar2->SetControlPoint(1, vector3);
            if (arg1 < 1) {
                return;
            }
            pBVar2 = (BSplineCubicSegment*)(*this)[(unsigned long)(arg1 - 1)];
            pBVar3 = (BSplineCubicSegment*)(*this)[(unsigned long)(arg1 - 1)];
            vector32 = pBVar3->GetControlPoint(2);
            local_68 - *vector32;
        } else {
            if (iVar1 == arg1) {
                uVar4 = (unsigned long)(arg1 - 1);
                pBVar2 = (BSplineCubicSegment*)(*this)[uVar4];
                pBVar2->GetControlPoint(3);
                local_50 - vector3;
                pBVar2 = (BSplineCubicSegment*)(*this)[uVar4];
                pBVar2->SetControlPoint(3, vector3);
                pBVar2 = (BSplineCubicSegment*)(*this)[uVar4];
                pBVar3 = (BSplineCubicSegment*)(*this)[uVar4];
                pBVar3->GetControlPoint(2);
            } else {
                uVar4 = (unsigned long)arg1;
                pBVar2 = (BSplineCubicSegment*)(*this)[uVar4];
                pBVar2->GetControlPoint(0);
                local_50 - vector3;
                pBVar2 = (BSplineCubicSegment*)(*this)[uVar4];
                pBVar2->SetControlPoint(0, vector3);
                local_38 = (BSplineCubicSegment*)(*this)[uVar4];
                pBVar2 = (BSplineCubicSegment*)(*this)[uVar4];
                pBVar2->GetControlPoint(1);
                local_68 + local_50;
                local_38->SetControlPoint(1, local_68);
                if (arg1 < 1) {
                    return;
                }
                uVar4 = (unsigned long)(arg1 - 1);
                pBVar2 = (BSplineCubicSegment*)(*this)[uVar4];
                pBVar2->SetControlPoint(3, vector3);
                pBVar2 = (BSplineCubicSegment*)(*this)[uVar4];
                pBVar3 = (BSplineCubicSegment*)(*this)[uVar4];
                pBVar3->GetControlPoint(2);
            }
            local_68 + local_50;
        }
        vector3 = &local_68;
    LAB_1006186dd:
        pBVar2->SetControlPoint(2, vector3);
    }

    // 0x100618750
    void BSplineCubic::GetControlPoint(int arg1, bool arg2) const {
        BSplineCubicSegment* this_00;

        int iVar1 = size();
        if (iVar1 == arg1) {
            this_00 = (BSplineCubicSegment*)(*this)[(long)(arg1 - 1)];
            if (arg2) {
                iVar1 = 3;
            } else {
                iVar1 = 2;
            }
        } else {
            this_00 = (BSplineCubicSegment*)(*this)[(long)arg1];
            if (arg2) {
                iVar1 = 0;
            } else {
                iVar1 = 1;
            }
        }
        this_00->GetControlPoint(iVar1);
    }

    // 0x100618810
    double BSplineCubic::GetWorldLength() const {
        double dVar2;
        double dVar3;

        auto this_00 = HeapBeginPtr();
        auto pBVar1 = end();
        if (this_00 == pBVar1) {
            dVar2 = 0.0;
        } else {
            dVar2 = 0.0;
            do {
                dVar3 = (double)this_00->GetWorldLength();
                dVar2 = dVar2 + dVar3;
                this_00 = (BSplineCubicSegment*)&this_00[1].field_64;
            } while (this_00 != pBVar1);
        }
        return dVar2;
    }

    // 0x100618880
    double BSplineCubic::GetPartialWorldLength(int arg1) const {
        BSplineCubicSegment* this_00;
        unsigned long arg1_00;
        double dVar3;
        double dVar4;

        int iVar1 = size();
        unsigned int uVar2 = eastl::min<graphics::GraphicsQuality>(arg1, iVar1 - 1);
        if ((int)uVar2 < 1) {
            dVar3 = 0.0;
        } else {
            dVar3 = 0.0;
            arg1_00 = 0;
            do {
                this_00 = (BSplineCubicSegment*)(*this)[arg1_00];
                dVar4 = (double)this_00->GetWorldLength();
                dVar3 = dVar3 + dVar4;
                arg1_00 = arg1_00 + 1;
            } while (uVar2 != arg1_00);
        }
        return dVar3;
    }

    // 0x100618900
    BSplineCubic* BSplineCubic::GetWorldPosition(double arg1) const {
        BSplineCubic* in_RSI;

        double dVar3 = (double)GetParameterFromWorldDistance(in_RSI, arg1);
        int iVar2 = (int)dVar3;
        int iVar1 = in_RSI->size();
        if (iVar2 < iVar1) {
            (*in_RSI)[(long)iVar2];
            dVar3 = dVar3 - (double)iVar2;
        } else {
            in_RSI->back();
            dVar3 = 1.0;
        }
        GetWorldPosition(dVar3);
        return this;
    }

    // 0x1006189c0
    double BSplineCubic::GetWorldDistanceFromParameter(double arg1) const {
        BSplineCubicSegment* this_00;
        int iVar1;
        double dVar3;

        double dVar2 = 0.0;
        if (0.0 < arg1) {
            iVar1 = size();
            if ((double)iVar1 <= arg1) {
                dVar2 = (double)GetWorldLength();
            } else {
                dVar3 = (double)GetPartialWorldLength((int)arg1);
                this_00 = (BSplineCubicSegment*)(*this)[(long)(int)arg1];
                dVar2 = (double)this_00->GetPartialLength(arg1 - (double)(int)arg1);
                dVar2 = dVar2 + dVar3;
            }
        }
        return dVar2;
    }

    // 0x100618ad0
    BSplineCubic* BSplineCubic::GetTangent(double arg1) const {
        BSplineCubic* in_RSI;

        double dVar3 = (double)GetParameterFromWorldDistance(in_RSI, arg1);
        int iVar2 = (int)dVar3;
        int iVar1 = in_RSI->size();
        if (iVar2 < iVar1) {
            (*in_RSI)[(long)iVar2];
            dVar3 = dVar3 - (double)iVar2;
        } else {
            in_RSI->back();
            dVar3 = 1.0;
        }
        GetTangent(dVar3);
        return this;
    }

    // 0x100618b50
    auto BSplineCubic::GetSubSpline(int arg1, int arg2) const {
        auto result;
        BSplineCubic* pBVar1;
        int iVar3;
        unsigned long uVar4;
        BSplineCubicSegment* pBVar6;
        Vector3T<double>* vector31;
        Vector3T<double>* vector32;
        BSplineCubic local_90;

        int local_38 = arg2;
        int local_34 = arg1;
        if (arg2 == -1) {
            local_38 = size();
        }
        if (local_38 < local_34) {
            eastl::swap<unsigned int>(local_38, local_34);
        }
        int iVar2 = local_38;
        if (((local_34 == 0) && (iVar3 = size(), iVar2 == iVar3)) || (uVar4 = size(), iVar2 = local_34, uVar4 < 2)) {
            BSplineCubic(&result, this);
            return result;
        }
        iVar3 = size();
        if (iVar3 <= iVar2) {
            LogAssert("startJoint < (int)m_segments.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                      "spline/BSplineCubic.cpp",
                      277, "%s: startJoint may not be the end of the spline.", "GetSubSpline");
        }
        if (local_34 == local_38) {
            LogAssert("startJoint != endJoint",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                      "spline/BSplineCubic.cpp",
                      278, "%s: startJoint may not equal endJoint.", "GetSubSpline");
        }
        local_90.field_0._0_4_ = 0;
        int local_3c = size();
        local_3c = local_3c - 1;
        local_34 = math::Clamp<int>(local_34, local_90, local_3c);
        local_90.field_0._0_4_ = 0;
        local_3c = size();
        local_38 = math::Clamp<int>(local_38, local_90, local_3c);
        Layout* this_01 = (Layout*)(*this)[(long)local_34];
        auto vector3s = this_01->SSOBeginPtr();
        uint8_t* this_00 = &field_32;
        double* pdVar5 = (double*)(*this_00)[(long)local_34];
        double local_50 = *pdVar5;
        pdVar5 = (double*)(*this_00)[(long)local_34 + 1];
        BSplineCubic(&local_90, vector3s, local_50, *pdVar5);
        uVar4 = (unsigned long)(local_34 + 1);
        while (pBVar1 = &result, (long)uVar4 < (long)local_38) {
            pBVar6 = (BSplineCubicSegment*)(*this)[uVar4];
            vector31 = pBVar6->GetControlPoint(3);
            pBVar6 = (BSplineCubicSegment*)(*this)[uVar4];
            vector32 = pBVar6->GetControlPoint(2);
            uVar4 = uVar4 + 1;
            pdVar5 = (double*)(*this_00)[uVar4];
            AddSegment(&local_90, vector31, vector32, *pdVar5);
        }
        BSplineCubic(&result, &local_90);
        ~BSplineCubic(&local_90);
        return pBVar1;
    }

    // 0x100618dd0
    void BSplineCubic::DumpSpline(const char* str) const {
        char* pcVar3;
        CoordFine local_1130;
        BSplineCubic local_10f0;

        if (Camera::m_debugCameraEffects == '\0') {
            return;
        }
        auto pLVar2 = logger::default_logger();
        pLVar2->Log(false, 8,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/spline/"
                    "BSplineCubic.cpp",
                    303, "=== START %s Spline Dump ===", str);
        fixed_string<char, 4096> local_1060;
        char* local_1108 = str;
        local_1060.sprintf("Spline Dump 1.0 [%s]: ", str);
        if (GetSegmentCount() < 0) {
            pLVar2 = logger::default_logger();
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar2->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                        "spline/BSplineCubic.cpp",
                        318, pcVar3);
        }
        GetWorldPositionFromParameter(&local_10f0, 0.0);
        local_1130.CoordFine<double>(0, local_10f0);
        fixed_string<char, 32> local_10a8;
        pcVar3 = local_1130.ToString<32, true>(local_10a8);
        local_1060.append_sprintf("%s(%d=%s)", &DAT_100e35820, 0, pcVar3);
    }

} // namespace jag::game
