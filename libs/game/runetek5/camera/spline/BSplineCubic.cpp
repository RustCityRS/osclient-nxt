// libs/game/runetek5/camera/spline/BSplineCubic.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "BSplineCubic.h"

namespace jag::game {
    // 0x1006159f0, 112 bytes, placed by class name and debug map
    // BSplineCubic::GetWorldPositionFromParameter(double) const
    BSplineCubic* BSplineCubic::GetWorldPositionFromParameter(double param_1) {
        int iVar1;
        vector<BSplineCubicSegment, eastl::allocator>* in_RSI;
        double dVar3;

        iVar1 = eastl::vector<BSplineCubicSegment, eastl::allocator>::size(in_RSI);
        if ((int)param_1 < iVar1) {
            eastl::vector<BSplineCubicSegment, eastl::allocator>::operator[](in_RSI, (long)(int)param_1);
            dVar3 = param_1 - (double)(int)param_1;
        } else {
            eastl::vector<BSplineCubicSegment, eastl::allocator>::back(in_RSI);
            dVar3 = 1.0;
        }
        GetWorldPosition(dVar3);
        return this;
    }

    // 0x100615e40, 144 bytes, placed by class name
    // BSplineCubic::GetWorldRollFromParameter(double) const
    double BSplineCubic::GetWorldRollFromParameter(double param_1) {
        int iVar1;
        double* pdVar2;
        undefined1* this_00;
        double dVar4;

        iVar1 = size();
        this_00 = &field_32;
        if ((int)param_1 < iVar1 + -1) {
            pdVar2 = (double*)eastl::vector<double, eastl::allocator>::operator[](
                (vector<double, eastl::allocator>*)this_00, (long)(int)param_1);
            dVar4 = *pdVar2;
            pdVar2 = (double*)eastl::vector<double, eastl::allocator>::operator[](
                (vector<double, eastl::allocator>*)this_00, (long)((int)param_1 + 1));
            dVar4 = (*pdVar2 - dVar4) * (param_1 - (double)(int)param_1) + dVar4;
        } else {
            pdVar2 = (double*)this_00->back();
            dVar4 = *pdVar2;
        }
        return dVar4;
    }

    // 0x100617cb0, 272 bytes, placed by class name
    // BSplineCubic::GetParameterFromWorldDistance(double) const
    double BSplineCubic::GetParameterFromWorldDistance(double param_1) {
        bool bVar1;
        int iVar2;
        BSplineCubicSegment* pBVar3;
        undefined8 uVar4;
        ulong uVar5;
        double extraout_XMM0_Qa;
        double dVar6;
        double extraout_XMM0_Qa_00;
        double dVar7;
        double dVar8;
        undefined1 auVar9[16];

        iVar2 = size();
        bVar1 = 0 < iVar2;
        dVar6 = extraout_XMM0_Qa;
        if (iVar2 < 1) {
        LAB_100617d78:
            if (bVar1) {
                return dVar6;
            }
        } else {
            uVar5 = 0;
            pBVar3 = (BSplineCubicSegment*)eastl::vector<BSplineCubicSegment, eastl::allocator>::operator[](
                (vector<BSplineCubicSegment, eastl::allocator>*)this, 0);
            dVar6 = (double)pBVar3->GetWorldLength();
            dVar8 = 0.0;
            if (dVar6 <= param_1) {
                uVar5 = 0;
                do {
                    dVar8 = dVar6;
                    uVar5 = uVar5 + 1;
                    iVar2 = size();
                    bVar1 = (long)uVar5 < (long)iVar2;
                    dVar6 = extraout_XMM0_Qa_00;
                    if ((long)iVar2 <= (long)uVar5)
                        goto LAB_100617d78;
                    pBVar3 = (BSplineCubicSegment*)eastl::vector<BSplineCubicSegment, eastl::allocator>::operator[](
                        (vector<BSplineCubicSegment, eastl::allocator>*)this, uVar5);
                    dVar7 = (double)pBVar3->GetWorldLength();
                    dVar6 = dVar7 + dVar8;
                } while (dVar7 + dVar8 <= param_1);
            }
            pBVar3 = (BSplineCubicSegment*)eastl::vector<BSplineCubicSegment, eastl::allocator>::operator[](
                (vector<BSplineCubicSegment, eastl::allocator>*)this, uVar5 & 4294967295);
            dVar6 = (double)pBVar3->GetSplineParameter(param_1 - dVar8);
            if (bVar1) {
                return dVar6 + (double)(int)uVar5;
            }
        }
        uVar4 = size();
        auVar9._8_4_ = (int)((ulong)uVar4 >> 32);
        auVar9._0_8_ = uVar4;
        auVar9._12_4_ = 1160773632;
        return (auVar9._8_8_ - 1.9342813113834067e+25) +
               ((double)CONCAT44(1127219200, (int)uVar4) - 4503599627370496.0);
    }

    // 0x100617ee0, 160 bytes, base-object constructor, placed by class name
    // BSplineCubic::BSplineCubic(math::Vector3T<float> const&, math::Vector3T<float> const&, math::Vector3T<float> const&, math::Vector3T<float> const&, double, double)
    void BSplineCubic::BSplineCubic(Vector3T* param_1, Vector3T* param_2, Vector3T* param_3, Vector3T* param_4,
                                    double param_5, double param_6) {
        undefined1* this_00;
        double local_48;
        double local_40;

        local_48 = param_5;
        local_40 = param_6;
        new (this) eastl::vector<BSplineCubicSegment, eastl::allocator>();
        this_00 = &field_32;
        new (this_00) eastl::vector<double, eastl::allocator>();
        eastl::vector<BSplineCubicSegment, eastl::allocator>::emplace_back<
            math::Vector3T<float>&, math::Vector3T<float>&, math::Vector3T<float>&, math::Vector3T<float>&>(
            (vector<BSplineCubicSegment, eastl::allocator>*)this, param_1, param_2, param_3, param_4);
        this_00->push_back(&local_48);
        this_00->push_back(&local_40);
    }

    // 0x1006180a0, 16 bytes, complete-object constructor, placed by class name
    // BSplineCubic::BSplineCubic(math::Vector3T<float> const&, math::Vector3T<float> const&, math::Vector3T<float> const&, math::Vector3T<float> const&, double, double): jumps straight to the base-object constructor

    // 0x1006180b0, 160 bytes, base-object constructor, placed by class name
    // BSplineCubic::BSplineCubic(math::Vector3T<double> const&, math::Vector3T<double> const&, math::Vector3T<double> const&, math::Vector3T<double> const&, double, double)
    void BSplineCubic::BSplineCubic(Vector3T* param_1, Vector3T* param_2, Vector3T* param_3, Vector3T* param_4,
                                    double param_5, double param_6) {
        undefined1* this_00;
        double local_48;
        double local_40;

        local_48 = param_5;
        local_40 = param_6;
        new (this) eastl::vector<BSplineCubicSegment, eastl::allocator>();
        this_00 = &field_32;
        new (this_00) eastl::vector<double, eastl::allocator>();
        eastl::vector<BSplineCubicSegment,
                      eastl::allocator>::emplace_back<math::Vector3T<double> const&, math::Vector3T<double>&,
                                                      math::Vector3T<double> const&, math::Vector3T<double> const&>(
            (vector<BSplineCubicSegment, eastl::allocator>*)this, param_1, param_2, param_3, param_4);
        this_00->push_back(&local_48);
        this_00->push_back(&local_40);
    }

    // 0x100618220, 16 bytes, complete-object constructor, placed by class name
    // BSplineCubic::BSplineCubic(math::Vector3T<double> const&, math::Vector3T<double> const&, math::Vector3T<double> const&, math::Vector3T<double> const&, double, double): jumps straight to the base-object constructor

    // 0x100618230, 208 bytes, base-object constructor, placed by class name
    // BSplineCubic::BSplineCubic(std::array<math::Vector3T<double>, 4ul> const&, double, double)
    /* BSplineCubic::BSplineCubic(std::array<math::Vector3T<double>, 4ul> const&,
   double, double) */

    void BSplineCubic::BSplineCubic(array* param_1, double param_2, double param_3) {
        undefined1* this_00;
        Vector3T* pVVar1;
        Vector3T* pVVar2;
        Vector3T* pVVar3;
        double local_48;
        double local_40;
        Vector3T* local_38;

        local_48 = param_2;
        local_40 = param_3;
        new (this) eastl::vector<BSplineCubicSegment, eastl::allocator>();
        this_00 = &field_32;
        new (this_00) eastl::vector<double, eastl::allocator>();
        local_38 = (Vector3T*)std::array<math::Vector3T<double>, 4ul>::operator[](
            (array<math::Vector3T<double>, 4ul>*)param_1, 0);
        pVVar1 = (Vector3T*)std::array<math::Vector3T<double>, 4ul>::operator[](
            (array<math::Vector3T<double>, 4ul>*)param_1, 1);
        pVVar2 = (Vector3T*)std::array<math::Vector3T<double>, 4ul>::operator[](
            (array<math::Vector3T<double>, 4ul>*)param_1, 2);
        pVVar3 = (Vector3T*)std::array<math::Vector3T<double>, 4ul>::operator[](
            (array<math::Vector3T<double>, 4ul>*)param_1, 3);
        eastl::vector<BSplineCubicSegment,
                      eastl::allocator>::emplace_back<math::Vector3T<double> const&, math::Vector3T<double>&,
                                                      math::Vector3T<double> const&, math::Vector3T<double> const&>(
            (vector<BSplineCubicSegment, eastl::allocator>*)this, local_38, pVVar1, pVVar2, pVVar3);
        this_00->push_back(&local_48);
        this_00->push_back(&local_40);
    }

    // 0x100618310, 16 bytes, complete-object constructor, placed by class name
    // BSplineCubic::BSplineCubic(std::array<math::Vector3T<double>, 4ul> const&, double, double): jumps straight to the base-object constructor

    // 0x100618320, 176 bytes, placed by class name
    // BSplineCubic::AddSegment(math::Vector3T<double> const&, math::Vector3T<double> const&, double)
    void BSplineCubic::AddSegment(Vector3T* param_1, Vector3T* param_2, double param_3) {
        BSplineCubicSegment* this_00;
        Vector3T* pVVar1;
        Vector3T* pVVar2;
        double* pdVar3;
        undefined1 local_70[24];
        undefined1 local_58[24];

        this_00 = (BSplineCubicSegment*)back();
        pVVar1 = (Vector3T*)this_00->GetControlPoint(3);
        pVVar2 = (Vector3T*)this_00->GetControlPoint(2);
        math::operator-((math*)local_58, pVVar1, pVVar2);
        math::operator+((math*)local_70, (Vector3T*)local_58, pVVar1);
        eastl::vector<BSplineCubicSegment,
                      eastl::allocator>::emplace_back<math::Vector3T<double> const&, math::Vector3T<double>&,
                                                      math::Vector3T<double> const&, math::Vector3T<double> const&>(
            (vector<BSplineCubicSegment, eastl::allocator>*)this, pVVar1, (Vector3T*)local_70, param_2, param_1);
        pdVar3 = (double*)(&field_32)->push_back();
        *pdVar3 = param_3;
    }

    // 0x100618480, 640 bytes, placed by class name
    // BSplineCubic::SetControlPoint(int, bool, math::Vector3T<double> const&)
    void BSplineCubic::SetControlPoint(int param_1, bool param_2, Vector3T* param_3) {
        BSplineCubicSegment* pBVar1;
        int iVar2;
        Vector3T* pVVar3;
        undefined7 in_register_00000011;
        ulong uVar4;
        BSplineCubicSegment* pBVar5;
        Vector3T local_68[24];
        Vector3T local_50[24];
        BSplineCubicSegment* local_38;

        iVar2 = size();
        if ((int)CONCAT71(in_register_00000011, param_2) == 0) {
            if (iVar2 == param_1) {
                pBVar5 = (BSplineCubicSegment*)eastl::vector<BSplineCubicSegment, eastl::allocator>::operator[](
                    (vector<BSplineCubicSegment, eastl::allocator>*)this, (long)(param_1 + -1));
                goto LAB_1006186dd;
            }
            pBVar5 = (BSplineCubicSegment*)eastl::vector<BSplineCubicSegment, eastl::allocator>::operator[](
                (vector<BSplineCubicSegment, eastl::allocator>*)this, (long)param_1);
            pVVar3 = (Vector3T*)pBVar5->GetControlPoint(1);
            math::operator-((math*)local_50, param_3, pVVar3);
            pBVar5 = (BSplineCubicSegment*)eastl::vector<BSplineCubicSegment, eastl::allocator>::operator[](
                (vector<BSplineCubicSegment, eastl::allocator>*)this, (long)param_1);
            pBVar5->SetControlPoint(1, param_3);
            if (param_1 < 1) {
                return;
            }
            pBVar5 = (BSplineCubicSegment*)eastl::vector<BSplineCubicSegment, eastl::allocator>::operator[](
                (vector<BSplineCubicSegment, eastl::allocator>*)this, (ulong)(param_1 - 1));
            pBVar1 = (BSplineCubicSegment*)eastl::vector<BSplineCubicSegment, eastl::allocator>::operator[](
                (vector<BSplineCubicSegment, eastl::allocator>*)this, (ulong)(param_1 - 1));
            pVVar3 = (Vector3T*)pBVar1->GetControlPoint(2);
            math::operator-((math*)local_68, pVVar3, local_50);
        } else {
            if (iVar2 == param_1) {
                uVar4 = (ulong)(param_1 + -1);
                pBVar5 = (BSplineCubicSegment*)eastl::vector<BSplineCubicSegment, eastl::allocator>::operator[](
                    (vector<BSplineCubicSegment, eastl::allocator>*)this, uVar4);
                pVVar3 = (Vector3T*)pBVar5->GetControlPoint(3);
                math::operator-((math*)local_50, param_3, pVVar3);
                pBVar5 = (BSplineCubicSegment*)eastl::vector<BSplineCubicSegment, eastl::allocator>::operator[](
                    (vector<BSplineCubicSegment, eastl::allocator>*)this, uVar4);
                pBVar5->SetControlPoint(3, param_3);
                pBVar5 = (BSplineCubicSegment*)eastl::vector<BSplineCubicSegment, eastl::allocator>::operator[](
                    (vector<BSplineCubicSegment, eastl::allocator>*)this, uVar4);
                pBVar1 = (BSplineCubicSegment*)eastl::vector<BSplineCubicSegment, eastl::allocator>::operator[](
                    (vector<BSplineCubicSegment, eastl::allocator>*)this, uVar4);
                pVVar3 = (Vector3T*)pBVar1->GetControlPoint(2);
            } else {
                uVar4 = (ulong)param_1;
                pBVar5 = (BSplineCubicSegment*)eastl::vector<BSplineCubicSegment, eastl::allocator>::operator[](
                    (vector<BSplineCubicSegment, eastl::allocator>*)this, uVar4);
                pVVar3 = (Vector3T*)pBVar5->GetControlPoint(0);
                math::operator-((math*)local_50, param_3, pVVar3);
                pBVar5 = (BSplineCubicSegment*)eastl::vector<BSplineCubicSegment, eastl::allocator>::operator[](
                    (vector<BSplineCubicSegment, eastl::allocator>*)this, uVar4);
                pBVar5->SetControlPoint(0, param_3);
                local_38 = (BSplineCubicSegment*)eastl::vector<BSplineCubicSegment, eastl::allocator>::operator[](
                    (vector<BSplineCubicSegment, eastl::allocator>*)this, uVar4);
                pBVar5 = (BSplineCubicSegment*)eastl::vector<BSplineCubicSegment, eastl::allocator>::operator[](
                    (vector<BSplineCubicSegment, eastl::allocator>*)this, uVar4);
                pVVar3 = (Vector3T*)pBVar5->GetControlPoint(1);
                math::operator+((math*)local_68, local_50, pVVar3);
                local_38->SetControlPoint(1, local_68);
                if (param_1 < 1) {
                    return;
                }
                uVar4 = (ulong)(param_1 - 1);
                pBVar5 = (BSplineCubicSegment*)eastl::vector<BSplineCubicSegment, eastl::allocator>::operator[](
                    (vector<BSplineCubicSegment, eastl::allocator>*)this, uVar4);
                pBVar5->SetControlPoint(3, param_3);
                pBVar5 = (BSplineCubicSegment*)eastl::vector<BSplineCubicSegment, eastl::allocator>::operator[](
                    (vector<BSplineCubicSegment, eastl::allocator>*)this, uVar4);
                pBVar1 = (BSplineCubicSegment*)eastl::vector<BSplineCubicSegment, eastl::allocator>::operator[](
                    (vector<BSplineCubicSegment, eastl::allocator>*)this, uVar4);
                pVVar3 = (Vector3T*)pBVar1->GetControlPoint(2);
            }
            math::operator+((math*)local_68, local_50, pVVar3);
        }
        param_3 = local_68;
    LAB_1006186dd:
        pBVar5->SetControlPoint(2, param_3);
    }

    // 0x100618750, 112 bytes, placed by class name
    // BSplineCubic::GetControlPoint(int, bool) const
    void BSplineCubic::GetControlPoint(int param_1, bool param_2) {
        int iVar1;
        BSplineCubicSegment* this_00;

        iVar1 = size();
        if (iVar1 == param_1) {
            this_00 = (BSplineCubicSegment*)eastl::vector<BSplineCubicSegment, eastl::allocator>::operator[](
                (vector<BSplineCubicSegment, eastl::allocator>*)this, (long)(param_1 + -1));
            if (param_2) {
                iVar1 = 3;
            } else {
                iVar1 = 2;
            }
        } else {
            this_00 = (BSplineCubicSegment*)eastl::vector<BSplineCubicSegment, eastl::allocator>::operator[](
                (vector<BSplineCubicSegment, eastl::allocator>*)this, (long)param_1);
            if (param_2) {
                iVar1 = 0;
            } else {
                iVar1 = 1;
            }
        }
        this_00->GetControlPoint(iVar1);
    }

    // 0x100618810, 112 bytes, placed by class name
    // BSplineCubic::GetWorldLength() const
    double BSplineCubic::GetWorldLength() {
        BSplineCubicSegment* this_00;
        BSplineCubicSegment* pBVar1;
        double dVar2;
        double dVar3;

        this_00 = (BSplineCubicSegment*)HeapBeginPtr();
        pBVar1 = (BSplineCubicSegment*)end();
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

    // 0x100618880, 128 bytes, placed by class name
    // BSplineCubic::GetPartialWorldLength(int) const
    double BSplineCubic::GetPartialWorldLength(int param_1) {
        BSplineCubicSegment* this_00;
        int iVar1;
        uint uVar2;
        ulong uVar3;
        double dVar4;
        double dVar5;

        iVar1 = size();
        uVar2 = eastl::min<graphics::GraphicsQuality>(param_1, iVar1 + -1);
        if ((int)uVar2 < 1) {
            dVar4 = 0.0;
        } else {
            dVar4 = 0.0;
            uVar3 = 0;
            do {
                this_00 = (BSplineCubicSegment*)eastl::vector<BSplineCubicSegment, eastl::allocator>::operator[](
                    (vector<BSplineCubicSegment, eastl::allocator>*)this, uVar3);
                dVar5 = (double)this_00->GetWorldLength();
                dVar4 = dVar4 + dVar5;
                uVar3 = uVar3 + 1;
            } while (uVar2 != uVar3);
        }
        return dVar4;
    }

    // 0x100618900, 128 bytes, placed by class name
    // BSplineCubic::GetWorldPosition(double) const
    BSplineCubic* BSplineCubic::GetWorldPosition(double param_1) {
        int iVar1;
        BSplineCubic* in_RSI;
        int iVar2;
        double dVar3;

        dVar3 = (double)GetParameterFromWorldDistance(in_RSI, param_1);
        iVar2 = (int)dVar3;
        iVar1 = in_RSI->size();
        if (iVar2 < iVar1) {
            eastl::vector<BSplineCubicSegment, eastl::allocator>::operator[](
                (vector<BSplineCubicSegment, eastl::allocator>*)in_RSI, (long)iVar2);
            dVar3 = dVar3 - (double)iVar2;
        } else {
            in_RSI->back();
            dVar3 = 1.0;
        }
        GetWorldPosition(dVar3);
        return this;
    }

    // 0x1006189c0, 144 bytes, placed by class name
    // BSplineCubic::GetWorldDistanceFromParameter(double) const
    double BSplineCubic::GetWorldDistanceFromParameter(double param_1) {
        BSplineCubicSegment* this_00;
        int iVar1;
        double dVar2;
        double dVar3;

        dVar2 = 0.0;
        if (0.0 < param_1) {
            iVar1 = size();
            if ((double)iVar1 <= param_1) {
                dVar2 = (double)GetWorldLength(this);
            } else {
                dVar3 = (double)GetPartialWorldLength(this, (int)param_1);
                this_00 = (BSplineCubicSegment*)eastl::vector<BSplineCubicSegment, eastl::allocator>::operator[](
                    (vector<BSplineCubicSegment, eastl::allocator>*)this, (long)(int)param_1);
                dVar2 = (double)this_00->GetPartialLength(param_1 - (double)(int)param_1);
                dVar2 = dVar2 + dVar3;
            }
        }
        return dVar2;
    }

    // 0x100618ad0, 128 bytes, placed by class name
    // BSplineCubic::GetTangent(double) const
    BSplineCubic* BSplineCubic::GetTangent(double param_1) {
        int iVar1;
        BSplineCubic* in_RSI;
        int iVar2;
        double dVar3;

        dVar3 = (double)GetParameterFromWorldDistance(in_RSI, param_1);
        iVar2 = (int)dVar3;
        iVar1 = in_RSI->size();
        if (iVar2 < iVar1) {
            eastl::vector<BSplineCubicSegment, eastl::allocator>::operator[](
                (vector<BSplineCubicSegment, eastl::allocator>*)in_RSI, (long)iVar2);
            dVar3 = dVar3 - (double)iVar2;
        } else {
            in_RSI->back();
            dVar3 = 1.0;
        }
        GetTangent(dVar3);
        return this;
    }

    // 0x100618b50, 608 bytes, placed by class name
    // BSplineCubic::GetSubSpline(int, int) const
    BSplineCubic* BSplineCubic::GetSubSpline(int param_1, int param_2) {
        undefined1* this_00;
        BSplineCubic* pBVar1;
        uint uVar2;
        uint uVar3;
        int iVar4;
        ulong uVar5;
        Layout* this_01;
        vector* pvVar6;
        double* pdVar7;
        BSplineCubicSegment* pBVar8;
        Vector3T* pVVar9;
        Vector3T* pVVar10;
        uint in_ECX;
        undefined4 in_register_00000034;
        BSplineCubic* this_02;
        type* ptVar11;
        BSplineCubic local_90;
        double local_50;
        int local_3c;
        uint local_38;
        uint local_34;

        this_02 = (BSplineCubic*)CONCAT44(in_register_00000034, param_1);
        local_38 = in_ECX;
        local_34 = param_2;
        if (in_ECX == 4294967295) {
            local_38 = this_02->size();
        }
        if ((int)local_38 < (int)local_34) {
            eastl::swap<unsigned int>(&local_38, &local_34);
        }
        uVar2 = local_38;
        if (((local_34 == 0) && (uVar3 = this_02->size(), uVar2 == uVar3)) ||
            (uVar5 = this_02->size(), uVar2 = local_34, uVar5 < 2)) {
            BSplineCubic(this, this_02);
            return this;
        }
        iVar4 = this_02->size();
        if (iVar4 <= (int)uVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("startJoint < (int)m_segments.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                      "spline/BSplineCubic.cpp",
                      277, "%s: startJoint may not be the end of the spline.", "GetSubSpline");
        }
        if (local_34 == local_38) {
            /* WARNING: Subroutine does not return */
            LogAssert("startJoint != endJoint",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/camera/"
                      "spline/BSplineCubic.cpp",
                      278, "%s: startJoint may not equal endJoint.", "GetSubSpline");
        }
        local_90.field_0._0_4_ = 0;
        local_3c = this_02->size();
        local_3c = local_3c + -1;
        local_34 = math::Clamp<int>((int*)&local_34, (int*)&local_90, &local_3c);
        local_90.field_0._0_4_ = 0;
        local_3c = this_02->size();
        local_38 = math::Clamp<int>((int*)&local_38, (int*)&local_90, &local_3c);
        ptVar11 = (type*)(long)(int)local_34;
        this_01 = (Layout*)eastl::vector<BSplineCubicSegment, eastl::allocator>::operator[](
            (vector<BSplineCubicSegment, eastl::allocator>*)this_02, (ulong)ptVar11);
        pvVar6 = eastl::string::Layout::SSOBeginPtr(this_01, ptVar11);
        this_00 = &this_02->field_32;
        pdVar7 = (double*)eastl::vector<double, eastl::allocator>::operator[](
            (vector<double, eastl::allocator>*)this_00, (long)(int)local_34);
        local_50 = *pdVar7;
        pdVar7 = (double*)eastl::vector<double, eastl::allocator>::operator[](
            (vector<double, eastl::allocator>*)this_00, (long)(int)local_34 + 1);
        BSplineCubic(&local_90, (array*)pvVar6, local_50, *pdVar7);
        uVar5 = (ulong)(int)(local_34 + 1);
        while (pBVar1 = (BSplineCubic*)this, (long)uVar5 < (long)(int)local_38) {
            pBVar8 = (BSplineCubicSegment*)eastl::vector<BSplineCubicSegment, eastl::allocator>::operator[](
                (vector<BSplineCubicSegment, eastl::allocator>*)this_02, uVar5);
            pVVar9 = (Vector3T*)pBVar8->GetControlPoint(3);
            pBVar8 = (BSplineCubicSegment*)eastl::vector<BSplineCubicSegment, eastl::allocator>::operator[](
                (vector<BSplineCubicSegment, eastl::allocator>*)this_02, uVar5);
            pVVar10 = (Vector3T*)pBVar8->GetControlPoint(2);
            uVar5 = uVar5 + 1;
            pdVar7 = (double*)eastl::vector<double, eastl::allocator>::operator[](
                (vector<double, eastl::allocator>*)this_00, uVar5);
            AddSegment(&local_90, pVVar9, pVVar10, *pdVar7);
        }
        BSplineCubic((BSplineCubic*)this, &local_90);
        ~BSplineCubic(&local_90);
        return pBVar1;
    }

    // 0x100618dd0, 1376 bytes, placed by class name
    // BSplineCubic::DumpSpline(char const*) const
    void BSplineCubic::DumpSpline(char* param_1) {
        undefined8 uVar2;
        char* pcVar3;
        undefined8 uVar4;
        CoordFine local_1130[2];
        char* local_1108;
        BSplineCubic local_10f0;
        fixed_string<char, 32, true, eastl::allocator> local_10a8[72];
        fixed_string<char, 4096, true, eastl::allocator> local_1060[4136];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (Camera::m_debugCameraEffects == '\0') {
            if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                /* WARNING: Subroutine does not return */
                ___stack_chk_fail();
            }
            return;
        }
        uVar2 = logger::default_logger();
        logger::Logger::Log(uVar2, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "camera/spline/BSplineCubic.cpp",
                            303, "=== START %s Spline Dump ===", param_1);
        eastl::fixed_string<char, 4096, true, eastl::allocator>::fixed_string(local_1060);
        local_1108 = param_1;
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>::
            sprintf((char*)local_1060, "Spline Dump 1.0 [%s]: ", param_1);
        if (GetSegmentCount((BSplineCubic*)this) < 0) {
            uVar2 = logger::default_logger();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar2, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "camera/spline/BSplineCubic.cpp",
                                318, uVar4);
            /* WARNING: Subroutine does not return */
            local_1060->~fixed_string();
        }
        GetWorldPositionFromParameter(&local_10f0, 0.0);
        CoordFine::CoordFine<double>(local_1130, 0, (Vector3T*)&local_10f0);
        eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_10a8);
        pcVar3 = CoordFine::ToString<32, true>(local_1130, (fixed_string*)local_10a8);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>::
            append_sprintf((char*)local_1060, "%s(%d=%s)", &DAT_100e35820, 0, pcVar3);
        /* WARNING: Subroutine does not return */
        local_10a8->~fixed_string();
    }

} // namespace jag::game
