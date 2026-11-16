// libs/game/runetek5/camera/position/PositionPoint.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class PositionPoint {
    public:
        // virtual methods in vtable order
        virtual ~PositionPoint();
        virtual GetFinishTriggers(eastl::fixed_vector<int, 2ul, true, eastl::allocator>&);
        virtual char Ready() const;
        virtual SetCurrentPosition(math::Vector3T<double> const&);
        virtual GetCurrentPosition() const;
        virtual GetPositionOffset() const;
        virtual void GetPositionData(PositionData&, double);
        virtual GetPosition(math::Vector3T<double>&, unsigned long long) const;
        virtual Vector3T* GetDestinationPosition(math::Vector3T<double>&) const;
        virtual void GetPositionFine(CoordFine&, unsigned long long) const;
        virtual void ProcessServerUpdate(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&,
                                         std::function<shared_ptr<Entity>(CameraTrackableType, int)> const&);
        virtual void ToString(eastl::fixed_string<char, 512, true, eastl::allocator>&) const;
        void SetDestination(CoordFine const&);
        void TestAndResolveCollision(HeightMap const*, LinkMap const*, bool, bool);
        Vector3T* GetScaledPosition(math::Vector3T<double>&, unsigned long long, float) const;
        void SetGroundCollision(bool);
        PositionPoint();

        // data members, from how the methods use this: 121 bytes
        undefined** field_0; // offset 0, vtable pointer
        int field_8;         // offset 8
        char field_12;       // offset 12
        int3 field_13;       // offset 13
        AABB field_16;       // offset 16
        AABB field_40;       // offset 40
        AABB field_64;       // offset 64
        uint field_88;       // offset 88
        char _unknown_92[4];
        AABB field_96;          // offset 96
        bool m_groundCollision; // offset 120
    };

    // 0x100619970, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // PositionPoint::SetCurrentPosition(math::Vector3T<double> const&)
    /* LookatPoint::SetCurrentLookat(math::Vector3T<double> const&) */

    void LookatPoint::SetCurrentLookat(Vector3T* param_1) {
        math::Vector3T<double>::operator=((Vector3T<double>*)field_16, param_1);
    }

    // 0x100619980, 32 bytes, inline, placed by class name and debug map
    // PositionPoint::GetCurrentPosition() const
    PositionPoint* PositionPoint::GetCurrentPosition() {
        undefined8 uVar1;
        long in_RSI;

        *(undefined8*)field_16 = *(undefined8*)(in_RSI + 32);
        uVar1 = *(undefined8*)(in_RSI + 24);
        field_0 = *(undefined***)(in_RSI + 16);
        field_8 = (int)uVar1;
        field_12 = (char)((ulong)uVar1 >> 32);
        field_13 = (int3)((ulong)uVar1 >> 40);
        return this;
    }

    // 0x1006199a0, 32 bytes, inline, placed by class name and debug map
    // PositionPoint::GetPositionOffset() const
    PositionPoint* PositionPoint::GetPositionOffset() {
        undefined8 uVar1;
        long in_RSI;

        *(undefined8*)field_16 = *(undefined8*)(in_RSI + 112);
        uVar1 = *(undefined8*)(in_RSI + 104);
        field_0 = *(undefined***)(in_RSI + 96);
        field_8 = (int)uVar1;
        field_12 = (char)((ulong)uVar1 >> 32);
        field_13 = (int3)((ulong)uVar1 >> 40);
        return this;
    }

    // 0x1006199c0, 32 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // PositionPoint::GetPosition(math::Vector3T<double>&, unsigned long long) const
    /* PositionPoint::GetScaledPosition(math::Vector3T<double>&, unsigned long long,
   float) const */

    Vector3T* PositionPoint::GetScaledPosition(Vector3T* param_1, ulonglong param_2, float param_3) {
        math::Vector3T<double>::operator=((Vector3T<double>*)param_1, (Vector3T*)field_16);
        return param_1;
    }

    // 0x1006199e0, 32 bytes, inline, placed by class name and debug map
    // PositionPoint::GetDestinationPosition(math::Vector3T<double>&) const
    Vector3T* PositionPoint::GetDestinationPosition(Vector3T* param_1) {
        math::Vector3T<double>::operator=((Vector3T<double>*)param_1, (Vector3T*)field_40);
        return param_1;
    }

    // 0x1006320e0, 16 bytes, inline, placed by class name
    // PositionPoint::SetGroundCollision(bool)
    void PositionPoint::SetGroundCollision(bool param_1) {
        m_groundCollision = param_1;
    }

    // 0x100641070, 16 bytes, complete-object constructor, inline, placed by class name
    // PositionPoint::PositionPoint(): jumps straight to the base-object constructor

    // 0x100641080, 112 bytes, base-object constructor, inline, placed by class name
    // PositionPoint::PositionPoint()
    void PositionPoint::PositionPoint() {
        new (this) IPositionManager(0);
        field_0 = &PTR__ScriptOption_100f0c070;
        field_12 = '\0';
        new (field_16) oldscape::dash3d::ModelLit::AABB();
        new (field_40) oldscape::dash3d::ModelLit::AABB();
        new (field_64) oldscape::dash3d::ModelLit::AABB();
        field_88 = 4294967295;
        new (field_96) oldscape::dash3d::ModelLit::AABB();
        m_groundCollision = false;
    }

} // namespace jag::game

namespace jag::math {
    // 0x10061b230, 96 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<double> Lerp<QuaternionT<double>, float>(QuaternionT<double> const&, QuaternionT<double> const&, float)
    math* Lerp<QuaternionT<double>, float>(QuaternionT* param_1, QuaternionT* param_2, float param_3) {
        undefined1 local_70[32];
        undefined1 local_50[36];

        operator-((math*)local_50, param_2, param_1);
        operator*((math*)local_70, (QuaternionT*)local_50, param_3);
        operator+(this, param_1, (QuaternionT*)local_70);
        return this;
    }

    // 0x10061b290, 224 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<double> operator+<double>(QuaternionT<double> const&, QuaternionT<double> const&)
    /* QuaternionT<double> TEMPNAMEPLACEHOLDERVALUE(QuaternionT<double>
   const&, QuaternionT<double> const&) */

    math* operator+(QuaternionT* param_1, QuaternionT* param_2) {
        double dVar1;
        double dVar2;
        double dVar3;
        double dVar4;
        double dVar5;
        double dVar6;
        double dVar7;
        vector* pvVar8;
        double* pdVar9;

        pvVar8 = param_1->SSOBeginPtr(param_1);
        dVar1 = *(double*)pvVar8;
        pvVar8 = param_2->SSOBeginPtr(param_1);
        dVar2 = *(double*)pvVar8;
        pdVar9 = (double*)param_1->second();
        dVar3 = *pdVar9;
        pdVar9 = (double*)param_2->second();
        dVar4 = *pdVar9;
        pdVar9 = (double*)param_1->GetScreen();
        dVar5 = *pdVar9;
        pdVar9 = (double*)param_2->GetScreen();
        dVar6 = *pdVar9;
        pdVar9 = (double*)param_1->second();
        dVar7 = *pdVar9;
        pdVar9 = (double*)param_2->second();
        new (this) QuaternionT<double>(dVar1 + dVar2, dVar3 + dVar4, dVar5 + dVar6, dVar7 + *pdVar9);
        return this;
    }

    // 0x10061b370, 160 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<double> operator*<double>(QuaternionT<double> const&, float)
    /* QuaternionT<double> TEMPNAMEPLACEHOLDERVALUE(QuaternionT<double>
   const&, float) */

    math* operator*(QuaternionT* param_1, float param_2) {
        double dVar1;
        double dVar2;
        double dVar3;
        vector* pvVar4;
        double* pdVar5;

        pvVar4 = param_1->SSOBeginPtr(param_1);
        dVar1 = *(double*)pvVar4;
        pdVar5 = (double*)param_1->second();
        dVar2 = *pdVar5;
        pdVar5 = (double*)param_1->GetScreen();
        dVar3 = *pdVar5;
        pdVar5 = (double*)param_1->second();
        new (this) QuaternionT<double>(dVar1 * (double)param_2, dVar2 * (double)param_2, dVar3 * (double)param_2,
                                       (double)param_2 * *pdVar5);
        return this;
    }

    // 0x10061b410, 224 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<double> operator-<double>(QuaternionT<double> const&, QuaternionT<double> const&)
    /* QuaternionT<double> TEMPNAMEPLACEHOLDERVALUE(QuaternionT<double>
   const&, QuaternionT<double> const&) */

    math* operator-(QuaternionT* param_1, QuaternionT* param_2) {
        double dVar1;
        double dVar2;
        double dVar3;
        double dVar4;
        double dVar5;
        double dVar6;
        double dVar7;
        vector* pvVar8;
        double* pdVar9;

        pvVar8 = param_1->SSOBeginPtr(param_1);
        dVar1 = *(double*)pvVar8;
        pvVar8 = param_2->SSOBeginPtr(param_1);
        dVar2 = *(double*)pvVar8;
        pdVar9 = (double*)param_1->second();
        dVar3 = *pdVar9;
        pdVar9 = (double*)param_2->second();
        dVar4 = *pdVar9;
        pdVar9 = (double*)param_1->GetScreen();
        dVar5 = *pdVar9;
        pdVar9 = (double*)param_2->GetScreen();
        dVar6 = *pdVar9;
        pdVar9 = (double*)param_1->second();
        dVar7 = *pdVar9;
        pdVar9 = (double*)param_2->second();
        new (this) QuaternionT<double>(dVar1 - dVar2, dVar3 - dVar4, dVar5 - dVar6, dVar7 - *pdVar9);
        return this;
    }

    // 0x10061b590, 144 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<double> operator-<double>(QuaternionT<double> const&)
    /* QuaternionT<double> TEMPNAMEPLACEHOLDERVALUE(QuaternionT<double>
   const&) */

    math* operator-(QuaternionT* param_1) {
        double dVar1;
        double dVar2;
        double dVar3;
        vector* pvVar4;
        double* pdVar5;

        pvVar4 = param_1->SSOBeginPtr(param_1);
        dVar1 = *(double*)pvVar4;
        pdVar5 = (double*)param_1->second();
        dVar2 = *pdVar5;
        pdVar5 = (double*)param_1->GetScreen();
        dVar3 = *pdVar5;
        pdVar5 = (double*)param_1->second();
        new (this) QuaternionT<double>(-dVar1, -dVar2, -dVar3, -*pdVar5);
        return this;
    }

    // 0x10061b620, 64 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<double>::operator*=(double)
    /* QuaternionT<double>::TEMPNAMEPLACEHOLDERVALUE(double) */

    QuaternionT<double>* QuaternionT<double>::operator*=(double param_1) {
        *(double*)this = *(double*)this * param_1;
        *(double*)(this + 8) = *(double*)(this + 8) * param_1;
        *(double*)(this + 16) = *(double*)(this + 16) * param_1;
        *(double*)(this + 24) = param_1 * *(double*)(this + 24);
        return this;
    }

    // 0x10061b660, 144 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<double> operator*<double>(QuaternionT<double> const&, double)
    /* QuaternionT<double> TEMPNAMEPLACEHOLDERVALUE(QuaternionT<double>
   const&, double) */

    math* operator*(QuaternionT* param_1, double param_2) {
        double dVar1;
        double dVar2;
        double dVar3;
        vector* pvVar4;
        double* pdVar5;

        pvVar4 = param_1->SSOBeginPtr(param_1);
        dVar1 = *(double*)pvVar4;
        pdVar5 = (double*)param_1->second();
        dVar2 = *pdVar5;
        pdVar5 = (double*)param_1->GetScreen();
        dVar3 = *pdVar5;
        pdVar5 = (double*)param_1->second();
        new (this) QuaternionT<double>(dVar1 * param_2, dVar2 * param_2, dVar3 * param_2, param_2 * *pdVar5);
        return this;
    }

    // 0x10061b6f0, 80 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<double>::operator+=(QuaternionT<double> const&)
    /* QuaternionT<double>::TEMPNAMEPLACEHOLDERVALUE(QuaternionT<double> const&)
    */

    QuaternionT<double>* QuaternionT<double>::operator+=(QuaternionT* param_1) {
        *(double*)this = *(double*)this + *(double*)param_1;
        *(double*)(this + 8) = *(double*)(this + 8) + *(double*)(param_1 + 8);
        *(double*)(this + 16) = *(double*)(this + 16) + *(double*)(param_1 + 16);
        *(double*)(this + 24) = *(double*)(this + 24) + *(double*)(param_1 + 24);
        return this;
    }

} // namespace jag::math

// 0x10061b580, 16 bytes, placed by debug map only (low confidence)
// abs(double)
double abs(double param_1) {
    return ABS(param_1);
}
