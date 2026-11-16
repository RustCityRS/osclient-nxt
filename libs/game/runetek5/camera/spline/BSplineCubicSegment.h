// libs/game/runetek5/camera/spline/BSplineCubicSegment.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class BSplineCubicSegment {
    public:
        void GetAllControlPoints() const;
        BSplineCubicSegment(PacketT<Array<unsigned char>>& arg1);
        BSplineCubicSegment(const math::Vector3T<float>& vector31, const math::Vector3T<float>& vector32,
                            const math::Vector3T<float>& vector33, const math::Vector3T<float>& vector34);
        BSplineCubicSegment(const math::Vector3T<double>& vector31, const math::Vector3T<double>& vector32,
                            const math::Vector3T<double>& vector33, const math::Vector3T<double>& vector34);
        void Dirty();
        void SetControlPoint(int arg1, const math::Vector3T<double>& vector3);
        BSplineCubicSegment* GetTangent(double arg1) const;
        void CalculateHodograph() const;
        BSplineCubicSegment* GetWorldPosition(double arg1) const;
        double GetPartialLength(double arg1) const;
        double GetWorldLength() const;
        double GetSplineParameter(double arg1) const;
        void CalculateWorldLength() const;
        ~BSplineCubicSegment();
        Vector3T<double>* GetControlPoint(int arg1) const;
        BSplineCubicSegment(const BSplineCubicSegment& bSplineCubicSegment);

    private:
        uint64_t field_0;
        uint64_t field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint64_t field_40;
        uint64_t field_48;
        uint64_t field_56;
        uint64_t field_64;
        uint64_t field_72;
        uint64_t field_80;
        uint64_t field_88;
        uint8_t _unknown_96[32];
        double m_worldLength;
        uint8_t _unknown_136[8];
    };

    // 0x100009ca0: BSplineCubicSegment::GetAllControlPoints() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100606220
    BSplineCubicSegment::BSplineCubicSegment(PacketT<Array<unsigned char>>& arg1) {
        Vector3T<double>* this_00;
        Vector3T<double> local_60;
        Vector3T<float> local_48;

        new (this) std::array<math::Vector3T<double>, 4ul>();
        uint8_t* local_38 = &field_96;
        new (local_38) eastl::vector<double>();
        m_worldLength = -1.0;
        new (&field_136) BSplineQuadraticSegment();
        unsigned long arg1_00 = 0;
        do {
            local_48 = math::Vector3T(arg1, false);
            local_60.Vector3T<float>(local_48);
            this_00 = (Vector3T<double>*)(*this)[arg1_00];
            *this_00 = local_60;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 4);
    }

    // 0x100606340
    BSplineCubicSegment::BSplineCubicSegment(const math::Vector3T<float>& vector31,
                                             const math::Vector3T<float>& vector32,
                                             const math::Vector3T<float>& vector33,
                                             const math::Vector3T<float>& vector34) {
        Vector3T<double> local_48;

        new (this) std::array<math::Vector3T<double>, 4ul>();
        new (&field_96) eastl::vector<double>();
        m_worldLength = -1.0;
        new (&field_136) BSplineQuadraticSegment();
        local_48.Vector3T<float>(vector31);
        Vector3T<double>* pVVar1 = (Vector3T<double>*)(*this)[0];
        *pVVar1 = local_48;
        local_48.Vector3T<float>(vector32);
        pVVar1 = (Vector3T<double>*)(*this)[1];
        *pVVar1 = local_48;
        local_48.Vector3T<float>(vector33);
        pVVar1 = (Vector3T<double>*)(*this)[2];
        *pVVar1 = local_48;
        local_48.Vector3T<float>(vector34);
        pVVar1 = (Vector3T<double>*)(*this)[3];
        *pVVar1 = local_48;
    }

    // 0x100606460
    BSplineCubicSegment::BSplineCubicSegment(const math::Vector3T<double>& vector31,
                                             const math::Vector3T<double>& vector32,
                                             const math::Vector3T<double>& vector33,
                                             const math::Vector3T<double>& vector34) {
        new (this) std::array<math::Vector3T<double>, 4ul>();
        new (&field_96) eastl::vector<double>();
        m_worldLength = -1.0;
        new (&field_136) BSplineQuadraticSegment();
        Vector3T<double>* pVVar1 = (Vector3T<double>*)(*this)[0];
        *pVVar1 = vector31;
        pVVar1 = (Vector3T<double>*)(*this)[1];
        *pVVar1 = vector32;
        pVVar1 = (Vector3T<double>*)(*this)[2];
        *pVVar1 = vector33;
        pVVar1 = (Vector3T<double>*)(*this)[3];
        *pVVar1 = vector34;
    }

    // 0x100606540
    void BSplineCubicSegment::Dirty() {
        m_worldLength = -1.0;
        field_96.clear();
        field_136.Reset();
    }

    // 0x100606590
    void BSplineCubicSegment::SetControlPoint(int arg1, const math::Vector3T<double>& vector3) {
        Vector3T<double>* this_00 = (Vector3T<double>*)(*this)[(long)arg1];
        *this_00 = vector3;
        Dirty();
    }

    // 0x1006065c0
    BSplineCubicSegment* BSplineCubicSegment::GetTangent(double arg1) const {
        BSplineCubicSegment* in_RSI;

        if (in_RSI->field_136.IsValid() != '\0') {
            CalculateHodograph(in_RSI);
        }
        GetWorldPosition(arg1);
        return this;
    }

    // 0x100606680
    void BSplineCubicSegment::CalculateHodograph() const {
        unsigned long arg1;
        NXTPixToolkit* this_00;
        double* pdVar1;
        NXTPixToolkit* this_01;
        Vector3T<double> local_68;
        double local_50;
        double local_40;
        double local_38;

        BSplineQuadraticSegment* local_48 = (BSplineQuadraticSegment*)&field_136;
        unsigned long arg1_00 = 0;
        do {
            arg1 = arg1_00 + 1;
            this_00 = (NXTPixToolkit*)(*this)[arg1];
            pdVar1 = (double*)this_00->SSOBeginPtr();
            local_40 = *pdVar1;
            this_01 = (NXTPixToolkit*)(*this)[arg1_00];
            pdVar1 = (double*)this_01->SSOBeginPtr();
            local_40 = (local_40 - *pdVar1) * 3.0;
            pdVar1 = (double*)this_00->second();
            local_38 = *pdVar1;
            pdVar1 = (double*)this_01->second();
            local_38 = (local_38 - *pdVar1) * 3.0;
            pdVar1 = (double*)this_00->GetScreen();
            local_50 = *pdVar1;
            pdVar1 = (double*)this_01->GetScreen();
            local_68 = math::Vector3T(local_40, local_38, (local_50 - *pdVar1) * 3.0);
            local_48->SetControlPoint((int)arg1_00, local_68);
            arg1_00 = arg1;
        } while (arg1 != 3);
    }

    // 0x100606940
    BSplineCubicSegment* BSplineCubicSegment::GetWorldPosition(double arg1) const {
        double dVar1;
        double dVar2;
        double dVar3;
        double* pdVar4;
        Vector3T<double>* this_01;
        Vector3T<double>* pVVar5;
        array<math::Vector3T<double>, 4ul>* in_RSI;
        double dVar6;
        double dVar7;

        new (this) oldscape::dash3d::ModelLit::AABB();
        Vector3T<double>* this_00 = (Vector3T<double>*)(*in_RSI)[1];
        unsigned int arg1_00 = 0;
        do {
            pdVar4 = (double*)(*this_00)[arg1_00];
            dVar1 = *pdVar4;
            this_01 = (Vector3T<double>*)(*in_RSI)[0];
            pdVar4 = (double*)(*this_01)[arg1_00];
            dVar7 = (dVar1 - *pdVar4) * 3.0;
            pVVar5 = (Vector3T<double>*)(*in_RSI)[2];
            pdVar4 = (double*)(*pVVar5)[arg1_00];
            dVar1 = *pdVar4;
            pdVar4 = (double*)(*this_00)[arg1_00];
            dVar6 = (dVar1 - *pdVar4) * 3.0;
            pVVar5 = (Vector3T<double>*)(*in_RSI)[3];
            pdVar4 = (double*)(*pVVar5)[arg1_00];
            dVar1 = *pdVar4;
            pdVar4 = (double*)(*this_01)[arg1_00];
            dVar2 = *pdVar4;
            pdVar4 = (double*)(*this_01)[arg1_00];
            dVar3 = *pdVar4;
            pdVar4 = (double*)(*this)[arg1_00];
            *pdVar4 = (((dVar1 - (dVar6 + dVar2)) * arg1 + (dVar6 - dVar7)) * arg1 + dVar7) * arg1 + dVar3;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 3);
        return this;
    }

    // 0x100606b50
    double BSplineCubicSegment::GetPartialLength(double arg1) const {
        double* pdVar1;
        int iVar2;
        unsigned long arg1_00;
        uint8_t* this_00;
        unsigned int uVar3;

        double dVar4 = (double)GetWorldLength();
        return local_30 = 0.0;
        if ((0.0 < arg1) && (local_30 = dVar4, arg1 < 1.0)) {
            this_00 = &field_96;
            iVar2 = this_00->size();
            dVar4 = (double)iVar2 * arg1;
            uVar3 = (unsigned int)dVar4;
            if ((int)uVar3 < 1) {
                local_30 = 0.0;
            } else {
                local_30 = 0.0;
                arg1_00 = 0;
                do {
                    pdVar1 = (double*)(*this_00)[arg1_00];
                    local_30 = local_30 + *pdVar1;
                    arg1_00 = arg1_00 + 1;
                } while (uVar3 != arg1_00);
            }
            pdVar1 = (double*)(*this_00)[(long)(int)uVar3];
            local_30 = (dVar4 - (double)(int)dVar4) * *pdVar1 + local_30;
        }
        return local_30;
    }

    // 0x100606c40
    double BSplineCubicSegment::GetWorldLength() const {
        if (m_worldLength <= 0.0 && m_worldLength != 0.0) {
            CalculateWorldLength();
        }
        return m_worldLength;
    }

    // 0x100606cb0
    double BSplineCubicSegment::GetSplineParameter(double arg1) const {
        long lVar1;
        bool bVar2;
        unsigned int uVar3;
        double* pdVar4;
        unsigned long arg1_00;
        uint8_t* this_00;
        double extraout_XMM0_Qa;
        double extraout_XMM0_Qa_00;
        double dVar7;

        double dVar5 = (double)GetWorldLength();
        double dVar6 = 0.0;
        if (0.0 < arg1) {
            if (dVar5 <= arg1) {
                dVar6 = 1.0;
            } else {
                this_00 = &field_96;
                uVar3 = this_00->size();
                pdVar4 = (double*)(*this_00)[0];
                dVar5 = *pdVar4;
                bVar2 = 1 < (int)uVar3;
                if ((int)uVar3 < 2) {
                    dVar7 = 0.0;
                    dVar6 = extraout_XMM0_Qa;
                LAB_100606d3a:
                    if (bVar2) {
                        return dVar6;
                    }
                } else {
                    if (dVar5 <= arg1) {
                        arg1_00 = 1;
                        do {
                            dVar7 = dVar5;
                            pdVar4 = (double*)(*this_00)[arg1_00];
                            dVar5 = *pdVar4 + dVar7;
                            lVar1 = arg1_00 + (2 - (unsigned long)uVar3);
                            arg1_00 = arg1_00 + 1;
                            bVar2 = (long)arg1_00 < (long)(int)uVar3;
                            dVar6 = extraout_XMM0_Qa_00;
                            if (lVar1 == 1)
                                goto LAB_100606d3a;
                        } while (dVar5 <= arg1);
                    } else {
                        dVar7 = 0.0;
                        bVar2 = true;
                        arg1_00 = 1;
                    }
                    dVar6 = (double)((int)arg1_00 - 1) * (1.0 / (double)(int)uVar3);
                    if (bVar2) {
                        return (((double)(int)arg1_00 * (1.0 / (double)(int)uVar3) - dVar6) * (arg1 - dVar7)) /
                                   (dVar5 - dVar7) +
                               dVar6;
                    }
                }
                dVar6 = (double)(int)(uVar3 - 1) / (double)(int)uVar3;
                dVar6 = ((1.0 - dVar6) * (arg1 - dVar7)) / (dVar5 - dVar7) + dVar6;
            }
        }
        return dVar6;
    }

    // 0x100606e40
    void BSplineCubicSegment::CalculateWorldLength() const {
        double* pdVar1;
        unsigned long uVar3;
        Vector3T<double> local_a0;
        uint8_t local_70[24];
        unsigned long local_50;
        double local_48;
        double local_38;

        double local_40 = 0.0;
        GetWorldPosition(&local_88, 0.0);
        double dVar4 = 1.0;
        int iVar2 = 20;
        do {
            local_38 = dVar4;
            GetWorldPosition((BSplineCubicSegment*)local_70, dVar4 * 0.05);
            local_a0 - *local_70;
            dVar4 = (double)local_a0.Length();
            local_40 = local_40 + dVar4;
            local_88 = *local_70;
            dVar4 = local_38 + 1.0;
            iVar2 = iVar2 - 1;
        } while (iVar2 != 0);
        iVar2 = eastl::max<int>((int)(local_40 * 0.05), 20);
        uint8_t* this_00 = &field_96;
        this_00->clear();
        vector<double>* local_58 = (vector<double>*)this_00;
        this_00->resize((long)iVar2);
        local_38 = 0.0;
        GetWorldPosition((BSplineCubicSegment*)local_70, 0.0);
        Vector3T<double> local_88 = *local_70;
        if (0 < iVar2) {
            local_48 = (double)iVar2;
            local_50 = (unsigned long)(iVar2 + 1);
            local_38 = 0.0;
            uVar3 = 1;
            do {
                GetWorldPosition((BSplineCubicSegment*)local_70, (double)(int)uVar3 / local_48);
                local_a0 - *local_70;
                local_40 = (double)local_a0.Length();
                local_38 = local_38 + local_40;
                pdVar1 = (double*)(*local_58)[uVar3 - 1];
                *pdVar1 = local_40;
                local_88 = *local_70;
                uVar3 = uVar3 + 1;
            } while (uVar3 != local_50);
        }
        m_worldLength = local_38;
    }

    // 0x10060ed60
    BSplineCubicSegment::~BSplineCubicSegment() {
        field_96.~vector();
    }

    // 0x100618410
    Vector3T<double>* BSplineCubicSegment::GetControlPoint(int arg1) const {
        return (Vector3T<double>*)(*this)[(long)arg1];
    }

    // 0x10061a340
    BSplineCubicSegment::BSplineCubicSegment(const BSplineCubicSegment& bSplineCubicSegment) {
        uint64_t uVar1 = bSplineCubicSegment.field_88;
        field_80 = bSplineCubicSegment.field_80;
        field_88 = uVar1;
        uVar1 = bSplineCubicSegment.field_72;
        field_64 = bSplineCubicSegment.field_64;
        field_72 = uVar1;
        uVar1 = bSplineCubicSegment.field_0;
        uint64_t uVar2 = bSplineCubicSegment.field_8;
        uint64_t uVar3 = bSplineCubicSegment.field_16;
        uint64_t uVar4 = bSplineCubicSegment.field_24;
        uint64_t uVar5 = bSplineCubicSegment.field_32;
        uint64_t uVar6 = bSplineCubicSegment.field_40;
        uint64_t uVar7 = bSplineCubicSegment.field_56;
        field_48 = bSplineCubicSegment.field_48;
        field_56 = uVar7;
        field_32 = uVar5;
        field_40 = uVar6;
        field_16 = uVar3;
        field_24 = uVar4;
        field_0 = uVar1;
        field_8 = uVar2;
        new (&field_96) eastl::vector<double>();
        m_worldLength = -1.0;
        new (&field_136) BSplineQuadraticSegment();
    }

} // namespace jag::game
