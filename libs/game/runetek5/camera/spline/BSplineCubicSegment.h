// libs/game/runetek5/camera/spline/BSplineCubicSegment.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class BSplineCubicSegment {
    public:
        GetAllControlPoints() const;
        BSplineCubicSegment(PacketT<Array<unsigned char, eastl::allocator>>&);
        BSplineCubicSegment(math::Vector3T<float> const&, math::Vector3T<float> const&, math::Vector3T<float> const&,
                            math::Vector3T<float> const&);
        BSplineCubicSegment(math::Vector3T<double> const&, math::Vector3T<double> const&, math::Vector3T<double> const&,
                            math::Vector3T<double> const&);
        void Dirty();
        void SetControlPoint(int, math::Vector3T<double> const&);
        GetTangent(double) const;
        void CalculateHodograph() const;
        GetWorldPosition(double) const;
        double GetPartialLength(double) const;
        double GetWorldLength() const;
        double GetSplineParameter(double) const;
        void CalculateWorldLength() const;
        ~BSplineCubicSegment();
        void GetControlPoint(int) const;
        BSplineCubicSegment(BSplineCubicSegment const&);

        // data members, from how the methods use this: 144 bytes
        undefined8 field_0;  // offset 0
        undefined8 field_8;  // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        undefined8 field_40; // offset 40
        undefined8 field_48; // offset 48
        undefined8 field_56; // offset 56
        undefined8 field_64; // offset 64
        undefined8 field_72; // offset 72
        undefined8 field_80; // offset 80
        undefined8 field_88; // offset 88
        undefined1 field_96; // offset 96
        char _unknown_97[31];
        double m_worldLength; // offset 128
        char _unknown_136[8];
    };

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    BSplineCubicSegment::GetAllControlPoints() const;

    // 0x100606220, 192 bytes, base-object constructor, placed by class name
    // BSplineCubicSegment::BSplineCubicSegment(PacketT<Array<unsigned char, eastl::allocator> >&)
    void BSplineCubicSegment::BSplineCubicSegment(PacketT* param_1) {
        Vector3T<double>* this_00;
        ulong uVar1;
        Vector3T<double> local_60[24];
        Vector3T<float> local_48[16];
        undefined1* local_38;

        new (this) std::array<math::Vector3T<double>, 4ul>();
        local_38 = &field_96;
        new (local_38) eastl::vector<double, eastl::allocator>();
        m_worldLength = -1.0;
        new (&field_136) BSplineQuadraticSegment();
        uVar1 = 0;
        do {
            math::Vector3T<float>::Vector3T(local_48, param_1, false);
            math::Vector3T<double>::Vector3T<float>(local_60, (Vector3T*)local_48);
            this_00 = (Vector3T<double>*)std::array<math::Vector3T<double>, 4ul>::operator[](
                (array<math::Vector3T<double>, 4ul>*)this, uVar1);
            math::Vector3T<double>::operator=(this_00, (Vector3T*)local_60);
            uVar1 = uVar1 + 1;
        } while (uVar1 != 4);
    }

    // 0x100606330, 16 bytes, complete-object constructor, placed by class name
    // BSplineCubicSegment::BSplineCubicSegment(PacketT<Array<unsigned char, eastl::allocator> >&): jumps straight to the base-object constructor

    // 0x100606340, 272 bytes, base-object constructor, placed by class name
    // BSplineCubicSegment::BSplineCubicSegment(math::Vector3T<float> const&, math::Vector3T<float> const&, math::Vector3T<float> const&, math::Vector3T<float> const&)
    void BSplineCubicSegment::BSplineCubicSegment(Vector3T* param_1, Vector3T* param_2, Vector3T* param_3,
                                                  Vector3T* param_4) {
        Vector3T<double>* pVVar1;
        Vector3T<double> local_48[24];

        new (this) std::array<math::Vector3T<double>, 4ul>();
        new (&field_96) eastl::vector<double, eastl::allocator>();
        m_worldLength = -1.0;
        new (&field_136) BSplineQuadraticSegment();
        math::Vector3T<double>::Vector3T<float>(local_48, param_1);
        pVVar1 = (Vector3T<double>*)std::array<math::Vector3T<double>, 4ul>::operator[](
            (array<math::Vector3T<double>, 4ul>*)this, 0);
        math::Vector3T<double>::operator=(pVVar1, (Vector3T*)local_48);
        math::Vector3T<double>::Vector3T<float>(local_48, param_2);
        pVVar1 = (Vector3T<double>*)std::array<math::Vector3T<double>, 4ul>::operator[](
            (array<math::Vector3T<double>, 4ul>*)this, 1);
        math::Vector3T<double>::operator=(pVVar1, (Vector3T*)local_48);
        math::Vector3T<double>::Vector3T<float>(local_48, param_3);
        pVVar1 = (Vector3T<double>*)std::array<math::Vector3T<double>, 4ul>::operator[](
            (array<math::Vector3T<double>, 4ul>*)this, 2);
        math::Vector3T<double>::operator=(pVVar1, (Vector3T*)local_48);
        math::Vector3T<double>::Vector3T<float>(local_48, param_4);
        pVVar1 = (Vector3T<double>*)std::array<math::Vector3T<double>, 4ul>::operator[](
            (array<math::Vector3T<double>, 4ul>*)this, 3);
        math::Vector3T<double>::operator=(pVVar1, (Vector3T*)local_48);
    }

    // 0x100606450, 16 bytes, complete-object constructor, placed by class name
    // BSplineCubicSegment::BSplineCubicSegment(math::Vector3T<float> const&, math::Vector3T<float> const&, math::Vector3T<float> const&, math::Vector3T<float> const&): jumps straight to the base-object constructor

    // 0x100606460, 208 bytes, base-object constructor, placed by class name
    // BSplineCubicSegment::BSplineCubicSegment(math::Vector3T<double> const&, math::Vector3T<double> const&, math::Vector3T<double> const&, math::Vector3T<double> const&)
    void BSplineCubicSegment::BSplineCubicSegment(Vector3T* param_1, Vector3T* param_2, Vector3T* param_3,
                                                  Vector3T* param_4) {
        Vector3T<double>* pVVar1;

        new (this) std::array<math::Vector3T<double>, 4ul>();
        new (&field_96) eastl::vector<double, eastl::allocator>();
        m_worldLength = -1.0;
        new (&field_136) BSplineQuadraticSegment();
        pVVar1 = (Vector3T<double>*)std::array<math::Vector3T<double>, 4ul>::operator[](
            (array<math::Vector3T<double>, 4ul>*)this, 0);
        math::Vector3T<double>::operator=(pVVar1, param_1);
        pVVar1 = (Vector3T<double>*)std::array<math::Vector3T<double>, 4ul>::operator[](
            (array<math::Vector3T<double>, 4ul>*)this, 1);
        math::Vector3T<double>::operator=(pVVar1, param_2);
        pVVar1 = (Vector3T<double>*)std::array<math::Vector3T<double>, 4ul>::operator[](
            (array<math::Vector3T<double>, 4ul>*)this, 2);
        math::Vector3T<double>::operator=(pVVar1, param_3);
        pVVar1 = (Vector3T<double>*)std::array<math::Vector3T<double>, 4ul>::operator[](
            (array<math::Vector3T<double>, 4ul>*)this, 3);
        math::Vector3T<double>::operator=(pVVar1, param_4);
    }

    // 0x100606530, 16 bytes, complete-object constructor, placed by class name
    // BSplineCubicSegment::BSplineCubicSegment(math::Vector3T<double> const&, math::Vector3T<double> const&, math::Vector3T<double> const&, math::Vector3T<double> const&): jumps straight to the base-object constructor

    // 0x100606540, 64 bytes, placed by class name
    // BSplineCubicSegment::Dirty()
    void BSplineCubicSegment::Dirty() {
        m_worldLength = -1.0;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        (&field_136)->Reset();
    }

    // 0x100606590, 48 bytes, placed by class name
    // BSplineCubicSegment::SetControlPoint(int, math::Vector3T<double> const&)
    void BSplineCubicSegment::SetControlPoint(int param_1, Vector3T* param_2) {
        Vector3T<double>* this_00;

        this_00 = (Vector3T<double>*)std::array<math::Vector3T<double>, 4ul>::operator[](
            (array<math::Vector3T<double>, 4ul>*)this, (long)param_1);
        math::Vector3T<double>::operator=(this_00, param_2);
        Dirty(this);
    }

    // 0x1006065c0, 80 bytes, placed by class name
    // BSplineCubicSegment::GetTangent(double) const
    BSplineCubicSegment* BSplineCubicSegment::GetTangent(double param_1) {
        BSplineCubicSegment* in_RSI;

        if ((&in_RSI->field_136)->IsValid() != '\0') {
            CalculateHodograph(in_RSI);
        }
        GetWorldPosition(param_1);
        return this;
    }

    // 0x100606680, 288 bytes, placed by class name
    // BSplineCubicSegment::CalculateHodograph() const
    void BSplineCubicSegment::CalculateHodograph() {
        type* ptVar1;
        NXTPixToolkit* this_00;
        vector* pvVar2;
        NXTPixToolkit* this_01;
        double* pdVar3;
        type* ptVar4;
        type* ptVar5;
        Vector3T<double> local_68[24];
        double local_50;
        BSplineQuadraticSegment* local_48;
        double local_40;
        double local_38;

        local_48 = (BSplineQuadraticSegment*)&field_136;
        ptVar4 = (type*)0;
        do {
            ptVar1 = ptVar4 + 1;
            ptVar5 = ptVar1;
            this_00 = (NXTPixToolkit*)std::array<math::Vector3T<double>, 4ul>::operator[](
                (array<math::Vector3T<double>, 4ul>*)this, (ulong)ptVar1);
            pvVar2 = this_00->SSOBeginPtr(ptVar5);
            local_40 = *(double*)pvVar2;
            ptVar5 = ptVar4;
            this_01 = (NXTPixToolkit*)std::array<math::Vector3T<double>, 4ul>::operator[](
                (array<math::Vector3T<double>, 4ul>*)this, (ulong)ptVar4);
            pvVar2 = this_01->SSOBeginPtr(ptVar5);
            local_40 = (local_40 - *(double*)pvVar2) * 3.0;
            pdVar3 = (double*)this_00->second();
            local_38 = *pdVar3;
            pdVar3 = (double*)this_01->second();
            local_38 = (local_38 - *pdVar3) * 3.0;
            pdVar3 = (double*)this_00->GetScreen();
            local_50 = *pdVar3;
            pdVar3 = (double*)this_01->GetScreen();
            math::Vector3T<double>::Vector3T(local_68, local_40, local_38, (local_50 - *pdVar3) * 3.0);
            local_48->SetControlPoint((int)ptVar4, local_68);
            ptVar4 = ptVar1;
        } while (ptVar1 != (type*)3);
    }

    // 0x100606940, 384 bytes, placed by class name
    // BSplineCubicSegment::GetWorldPosition(double) const
    BSplineCubicSegment* BSplineCubicSegment::GetWorldPosition(double param_1) {
        double dVar1;
        double dVar2;
        double dVar3;
        Vector3T<double>* this_00;
        double* pdVar4;
        Vector3T<double>* this_01;
        Vector3T<double>* pVVar5;
        uint uVar6;
        array<math::Vector3T<double>, 4ul>* in_RSI;
        double dVar7;
        double dVar8;

        new (this) oldscape::dash3d::ModelLit::AABB();
        this_00 = (Vector3T<double>*)std::array<math::Vector3T<double>, 4ul>::operator[](in_RSI, 1);
        uVar6 = 0;
        do {
            pdVar4 = (double*)math::Vector3T<double>::operator[](this_00, uVar6);
            dVar1 = *pdVar4;
            this_01 = (Vector3T<double>*)std::array<math::Vector3T<double>, 4ul>::operator[](in_RSI, 0);
            pdVar4 = (double*)math::Vector3T<double>::operator[](this_01, uVar6);
            dVar8 = (dVar1 - *pdVar4) * 3.0;
            pVVar5 = (Vector3T<double>*)std::array<math::Vector3T<double>, 4ul>::operator[](in_RSI, 2);
            pdVar4 = (double*)math::Vector3T<double>::operator[](pVVar5, uVar6);
            dVar1 = *pdVar4;
            pdVar4 = (double*)math::Vector3T<double>::operator[](this_00, uVar6);
            dVar7 = (dVar1 - *pdVar4) * 3.0;
            pVVar5 = (Vector3T<double>*)std::array<math::Vector3T<double>, 4ul>::operator[](in_RSI, 3);
            pdVar4 = (double*)math::Vector3T<double>::operator[](pVVar5, uVar6);
            dVar1 = *pdVar4;
            pdVar4 = (double*)math::Vector3T<double>::operator[](this_01, uVar6);
            dVar2 = *pdVar4;
            pdVar4 = (double*)math::Vector3T<double>::operator[](this_01, uVar6);
            dVar3 = *pdVar4;
            pdVar4 = (double*)math::Vector3T<double>::operator[]((Vector3T<double>*)this, uVar6);
            *pdVar4 = (((dVar1 - (dVar7 + dVar2)) * param_1 + (dVar7 - dVar8)) * param_1 + dVar8) * param_1 + dVar3;
            uVar6 = uVar6 + 1;
        } while (uVar6 != 3);
        return this;
    }

    // 0x100606b50, 240 bytes, placed by class name
    // BSplineCubicSegment::GetPartialLength(double) const
    double BSplineCubicSegment::GetPartialLength(double param_1) {
        double* pdVar1;
        int iVar2;
        ulong uVar3;
        undefined1* this_00;
        uint uVar4;
        double dVar5;
        double local_30;

        dVar5 = (double)GetWorldLength(this);
        local_30 = 0.0;
        if ((0.0 < param_1) && (local_30 = dVar5, param_1 < 1.0)) {
            this_00 = &field_96;
            iVar2 = this_00->size();
            dVar5 = (double)iVar2 * param_1;
            uVar4 = (uint)dVar5;
            if ((int)uVar4 < 1) {
                local_30 = 0.0;
            } else {
                local_30 = 0.0;
                uVar3 = 0;
                do {
                    pdVar1 = (double*)eastl::vector<double, eastl::allocator>::operator[](
                        (vector<double, eastl::allocator>*)this_00, uVar3);
                    local_30 = local_30 + *pdVar1;
                    uVar3 = uVar3 + 1;
                } while (uVar4 != uVar3);
            }
            pdVar1 = (double*)eastl::vector<double, eastl::allocator>::operator[](
                (vector<double, eastl::allocator>*)this_00, (long)(int)uVar4);
            local_30 = (dVar5 - (double)(int)dVar5) * *pdVar1 + local_30;
        }
        return local_30;
    }

    // 0x100606c40, 48 bytes, inline, placed by class name
    // BSplineCubicSegment::GetWorldLength() const
    double BSplineCubicSegment::GetWorldLength() {
        if (m_worldLength <= 0.0 && m_worldLength != 0.0) {
            CalculateWorldLength(this);
        }
        return m_worldLength;
    }

    // 0x100606cb0, 400 bytes, placed by class name
    // BSplineCubicSegment::GetSplineParameter(double) const
    double BSplineCubicSegment::GetSplineParameter(double param_1) {
        long lVar1;
        bool bVar2;
        uint uVar3;
        double* pdVar4;
        ulong uVar5;
        undefined1* this_00;
        double dVar6;
        double dVar7;
        double extraout_XMM0_Qa;
        double extraout_XMM0_Qa_00;
        double dVar8;

        dVar6 = (double)GetWorldLength(this);
        dVar7 = 0.0;
        if (0.0 < param_1) {
            if (dVar6 <= param_1) {
                dVar7 = 1.0;
            } else {
                this_00 = &field_96;
                uVar3 = this_00->size();
                pdVar4 = (double*)eastl::vector<double, eastl::allocator>::operator[](
                    (vector<double, eastl::allocator>*)this_00, 0);
                dVar6 = *pdVar4;
                bVar2 = 1 < (int)uVar3;
                if ((int)uVar3 < 2) {
                    dVar8 = 0.0;
                    dVar7 = extraout_XMM0_Qa;
                LAB_100606d3a:
                    if (bVar2) {
                        return dVar7;
                    }
                } else {
                    if (dVar6 <= param_1) {
                        uVar5 = 1;
                        do {
                            dVar8 = dVar6;
                            pdVar4 = (double*)eastl::vector<double, eastl::allocator>::operator[](
                                (vector<double, eastl::allocator>*)this_00, uVar5);
                            dVar6 = *pdVar4 + dVar8;
                            lVar1 = uVar5 + (2 - (ulong)uVar3);
                            uVar5 = uVar5 + 1;
                            bVar2 = (long)uVar5 < (long)(int)uVar3;
                            dVar7 = extraout_XMM0_Qa_00;
                            if (lVar1 == 1)
                                goto LAB_100606d3a;
                        } while (dVar6 <= param_1);
                    } else {
                        dVar8 = 0.0;
                        bVar2 = true;
                        uVar5 = 1;
                    }
                    dVar7 = (double)((int)uVar5 + -1) * (1.0 / (double)(int)uVar3);
                    if (bVar2) {
                        return (((double)(int)uVar5 * (1.0 / (double)(int)uVar3) - dVar7) * (param_1 - dVar8)) /
                                   (dVar6 - dVar8) +
                               dVar7;
                    }
                }
                dVar7 = (double)(int)(uVar3 - 1) / (double)(int)uVar3;
                dVar7 = ((1.0 - dVar7) * (param_1 - dVar8)) / (dVar6 - dVar8) + dVar7;
            }
        }
        return dVar7;
    }

    // 0x100606e40, 480 bytes, placed by class name
    // BSplineCubicSegment::CalculateWorldLength() const
    void BSplineCubicSegment::CalculateWorldLength() {
        BSplineCubicSegment* this_00;
        double* pdVar1;
        int iVar2;
        ulong uVar3;
        double dVar4;
        undefined1 local_a0[48];
        undefined1 local_70[24];
        vector<double, eastl::allocator>* local_58;
        ulong local_50;
        double local_48;
        double local_40;
        double local_38;

        this_00 = (BSplineCubicSegment*)(local_a0 + 24);
        local_40 = 0.0;
        GetWorldPosition(this_00, 0.0);
        dVar4 = 1.0;
        iVar2 = 20;
        do {
            local_38 = dVar4;
            GetWorldPosition((BSplineCubicSegment*)local_70, dVar4 * 0.05);
            math::operator-((math*)local_a0, (Vector3T*)local_70, (Vector3T*)this_00);
            dVar4 = (double)local_a0->Length();
            local_40 = local_40 + dVar4;
            math::Vector3T<double>::operator=((Vector3T<double>*)this_00, (Vector3T*)local_70);
            dVar4 = local_38 + 1.0;
            iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        iVar2 = eastl::max<int>((int)(local_40 * 0.05), 20);
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        local_58 = (vector<double, eastl::allocator>*)&field_96;
        eastl::vector<double, eastl::allocator>::resize((ulong)&field_96);
        local_38 = 0.0;
        GetWorldPosition((BSplineCubicSegment*)local_70, 0.0);
        math::Vector3T<double>::operator=((Vector3T<double>*)(local_a0 + 24), (Vector3T*)local_70);
        if (0 < iVar2) {
            local_48 = (double)iVar2;
            local_50 = (ulong)(iVar2 + 1);
            local_38 = 0.0;
            uVar3 = 1;
            do {
                GetWorldPosition((BSplineCubicSegment*)local_70, (double)(int)uVar3 / local_48);
                math::operator-((math*)local_a0, (Vector3T*)local_70, (Vector3T*)(local_a0 + 24));
                local_40 = (double)local_a0->Length();
                local_38 = local_38 + local_40;
                pdVar1 = (double*)eastl::vector<double, eastl::allocator>::operator[](local_58, uVar3 - 1);
                *pdVar1 = local_40;
                math::Vector3T<double>::operator=((Vector3T<double>*)(local_a0 + 24), (Vector3T*)local_70);
                uVar3 = uVar3 + 1;
            } while (uVar3 != local_50);
        }
        m_worldLength = local_38;
    }

    // 0x10060ed50, 16 bytes, complete-object destructor, inline, placed by class name
    // BSplineCubicSegment::~BSplineCubicSegment(): jumps straight to the base-object destructor

    // 0x10060ed60, 16 bytes, base-object destructor, inline, placed by class name
    // BSplineCubicSegment::~BSplineCubicSegment()
    void BSplineCubicSegment::~BSplineCubicSegment() {
        (&field_96)->~vector();
    }

    // 0x100618410, 16 bytes, inline, placed by class name
    // BSplineCubicSegment::GetControlPoint(int) const
    void BSplineCubicSegment::GetControlPoint(int param_1) {
        std::array<math::Vector3T<double>, 4ul>::operator[]((array<math::Vector3T<double>, 4ul>*)this, (long)param_1);
    }

    // 0x10061a320, 16 bytes, complete-object constructor, inline, placed by class name
    // BSplineCubicSegment::BSplineCubicSegment(BSplineCubicSegment const&): jumps straight to the base-object constructor

    // 0x10061a340, 128 bytes, base-object constructor, inline, placed by class name
    // BSplineCubicSegment::BSplineCubicSegment(BSplineCubicSegment const&)
    void BSplineCubicSegment::BSplineCubicSegment(BSplineCubicSegment* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        uVar1 = param_1->field_88;
        field_80 = param_1->field_80;
        field_88 = uVar1;
        uVar1 = param_1->field_72;
        field_64 = param_1->field_64;
        field_72 = uVar1;
        uVar1 = param_1->field_0;
        uVar2 = param_1->field_8;
        uVar3 = param_1->field_16;
        uVar4 = param_1->field_24;
        uVar5 = param_1->field_32;
        uVar6 = param_1->field_40;
        uVar7 = param_1->field_56;
        field_48 = param_1->field_48;
        field_56 = uVar7;
        field_32 = uVar5;
        field_40 = uVar6;
        field_16 = uVar3;
        field_24 = uVar4;
        field_0 = uVar1;
        field_8 = uVar2;
        new (&field_96) eastl::vector<double, eastl::allocator>();
        m_worldLength = -1.0;
        new (&field_136) BSplineQuadraticSegment();
    }

} // namespace jag::game
