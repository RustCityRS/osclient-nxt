// libs/game/runetek5/camera/ILookatManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.system.osclient

namespace jag::game {
    class ILookatManager {
    public:
        // virtual methods in vtable order
        virtual ~ILookatManager();
        virtual GetLookatEntity() const;
        virtual Update(float, math::Vector3T<double> const&, math::Vector3T<double> const&);
        DrawDebug(unsigned int);
        uint GetMode() const;
        IsSpline() const;
        ILookatManager(LookatMode);
        void ToString(eastl::fixed_string<char, 512, true, eastl::allocator>&) const;

        // data members, from how the methods use this: 16 bytes
        undefined* field_0; // offset 0, vtable pointer
        uint m_mode;        // offset 8
        char _unknown_12[4];
    };

    class LookatData {
    public:
        LookatData();
    };

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ILookatManager::Update(float, math::Vector3T<double> const&, math::Vector3T<double> const&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ILookatManager::DrawDebug(unsigned int);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ILookatManager::~ILookatManager();

    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    uint ILookatManager::GetMode() const;

    // 0x1005f9e90: the linker folded this into option::Option<int>::GetValueLabels() const, which has identical code
    ILookatManager::GetLookatEntity() const;

    // 0x10062fd00, 32 bytes, inline, placed by class name and debug map
    // ILookatManager::IsSpline() const
    undefined4 ILookatManager::IsSpline() {
        uint uVar1;

        uVar1 = m_mode - 2;
        return CONCAT31((int3)(uVar1 >> 8), (29U >> (uVar1 & 31) & 1) != 0 && uVar1 < 5);
    }

    // 0x10062fd20, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // LookatData::LookatData(): jumps straight to the base-object constructor

    // 0x100640a30, 32 bytes, base-object constructor, inline, placed by class name
    // ILookatManager::ILookatManager(LookatMode)
    void ILookatManager::ILookatManager(uint param_2) {
        field_0 = PTR_vtable_100ee7f50 + 16;
        m_mode = param_2;
    }

    // 0x100640a50, 32 bytes, inline, placed by class name
    // ILookatManager::ToString(eastl::fixed_string<char, 512, true, eastl::allocator>&) const
    /* IPositionManager::ToString(eastl::fixed_string<char, 512, true, eastl::allocator>&)
   const */

    void IPositionManager::ToString(fixed_string* param_1) {
        eastl::string::clear();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::begin();
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    ILookatManager::~ILookatManager();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    ILookatManager::~ILookatManager();

} // namespace jag::game

namespace jag::math {
    // 0x10062fd30, 32 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<double>::SetToZero()
    Vector3T<double>* Vector3T<double>::SetToZero() {
        *(undefined8*)this = 0;
        *(undefined8*)(this + 8) = 0;
        *(undefined8*)(this + 16) = 0;
        return this;
    }

    // 0x100630090, 576 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<double>::operator*=(QuaternionT<double> const&)
    /* Vector3T<double>::TEMPNAMEPLACEHOLDERVALUE(QuaternionT<double> const&) */

    Vector3T<double>* Vector3T<double>::operator*=(QuaternionT* param_1) {
        double dVar1;
        double* pdVar2;
        vector* pvVar3;
        double dVar5;
        double dVar6;
        double dVar7;
        double dVar8;

        pdVar2 = (double*)param_1->second();
        dVar8 = *pdVar2;
        pdVar2 = (double*)GetScreen();
        dVar1 = *pdVar2;
        pdVar2 = (double*)param_1->GetScreen();
        dVar7 = *pdVar2;
        pdVar2 = (double*)second();
        dVar5 = dVar8 * dVar1 - dVar7 * *pdVar2;
        pdVar2 = (double*)param_1->GetScreen();
        dVar8 = *pdVar2;
        pvVar3 = SSOBeginPtr(param_1);
        dVar1 = *(double*)pvVar3;
        pvVar3 = param_1->SSOBeginPtr(param_1);
        dVar7 = *(double*)pvVar3;
        pdVar2 = (double*)GetScreen();
        dVar6 = dVar8 * dVar1 - dVar7 * *pdVar2;
        pvVar3 = param_1->SSOBeginPtr(param_1);
        dVar8 = *(double*)pvVar3;
        pdVar2 = (double*)second();
        dVar1 = *pdVar2;
        pdVar2 = (double*)param_1->second();
        dVar7 = *pdVar2;
        pvVar3 = SSOBeginPtr(param_1);
        dVar7 = dVar8 * dVar1 - dVar7 * *(double*)pvVar3;
        pdVar2 = (double*)param_1->second();
        dVar8 = *pdVar2;
        pdVar2 = (double*)param_1->second();
        dVar1 = *pdVar2;
        pdVar2 = (double*)param_1->GetScreen();
        dVar8 = (dVar1 * dVar7 + dVar8 * dVar5) - *pdVar2 * dVar6;
        *(double*)this = dVar8 + dVar8 + *(double*)this;
        pdVar2 = (double*)param_1->second();
        dVar8 = *pdVar2;
        pdVar2 = (double*)param_1->GetScreen();
        dVar1 = *pdVar2;
        pvVar3 = param_1->SSOBeginPtr(param_1);
        dVar8 = (dVar1 * dVar5 + dVar8 * dVar6) - *(double*)pvVar3 * dVar7;
        *(double*)(this + 8) = dVar8 + dVar8 + *(double*)(this + 8);
        pdVar2 = (double*)param_1->second();
        dVar8 = *pdVar2;
        pvVar3 = param_1->SSOBeginPtr(param_1);
        dVar1 = *(double*)pvVar3;
        pdVar2 = (double*)param_1->second();
        dVar8 = (dVar6 * dVar1 + dVar7 * dVar8) - dVar5 * *pdVar2;
        *(double*)(this + 16) = dVar8 + dVar8 + *(double*)(this + 16);
        return this;
    }

    // 0x1006304a0, 48 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<double>::SetToIdentity()
    QuaternionT<double>* QuaternionT<double>::SetToIdentity() {
        Set(this, 0.0, 0.0, 0.0, 1.0);
        return this;
    }

    // 0x100630650, 64 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<double>::operator-=(Vector3T<double> const&)
    /* Vector3T<double>::TEMPNAMEPLACEHOLDERVALUE(Vector3T<double> const&) */

    Vector3T<double>* Vector3T<double>::operator-=(Vector3T* param_1) {
        *(double*)this = *(double*)this - *(double*)param_1;
        *(double*)(this + 8) = *(double*)(this + 8) - *(double*)(param_1 + 8);
        *(double*)(this + 16) = *(double*)(this + 16) - *(double*)(param_1 + 16);
        return this;
    }

    // 0x100631180, 96 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<double>::FromAxisAngle(Vector3T<double> const&, double)
    QuaternionT<double>* QuaternionT<double>::FromAxisAngle(Vector3T* param_1, double param_2) {
        double dVar1;
        double in_XMM1_Qa;
        undefined1 local_40[24];
        double local_28;

        dVar1 = (double)___sincos_stret(param_2 * 0.5);
        local_28 = in_XMM1_Qa;
        math::operator*((math*)local_40, dVar1, param_1);
        Set(this, (Vector3T*)local_40, local_28);
        return this;
    }

    // 0x1006311e0, 640 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<double> operator*<double>(Vector3T<double> const&, QuaternionT<double> const&)
    /* Vector3T<double> TEMPNAMEPLACEHOLDERVALUE(Vector3T<double>
   const&, QuaternionT<double> const&) */

    math* operator*(Vector3T* param_1, QuaternionT* param_2) {
        double dVar1;
        double dVar2;
        double* pdVar3;
        vector* pvVar4;
        double dVar6;
        double dVar7;
        double dVar8;
        double dVar9;
        double dVar10;

        pdVar3 = (double*)param_2->second();
        dVar1 = *pdVar3;
        pdVar3 = (double*)param_1->GetScreen();
        dVar2 = *pdVar3;
        pdVar3 = (double*)param_2->GetScreen();
        dVar8 = *pdVar3;
        pdVar3 = (double*)param_1->second();
        dVar6 = dVar1 * dVar2 - dVar8 * *pdVar3;
        pdVar3 = (double*)param_2->GetScreen();
        dVar1 = *pdVar3;
        pvVar4 = param_1->SSOBeginPtr(param_1);
        dVar2 = *(double*)pvVar4;
        pvVar4 = param_2->SSOBeginPtr(param_1);
        dVar8 = *(double*)pvVar4;
        pdVar3 = (double*)param_1->GetScreen();
        dVar7 = dVar1 * dVar2 - dVar8 * *pdVar3;
        pvVar4 = param_2->SSOBeginPtr(param_1);
        dVar1 = *(double*)pvVar4;
        pdVar3 = (double*)param_1->second();
        dVar2 = *pdVar3;
        pdVar3 = (double*)param_2->second();
        dVar8 = *pdVar3;
        pvVar4 = param_1->SSOBeginPtr(param_1);
        dVar8 = dVar1 * dVar2 - dVar8 * *(double*)pvVar4;
        pdVar3 = (double*)param_2->second();
        dVar1 = *pdVar3;
        pdVar3 = (double*)param_2->second();
        dVar2 = *pdVar3;
        pdVar3 = (double*)param_2->GetScreen();
        dVar9 = (dVar2 * dVar8 + dVar1 * dVar6) - *pdVar3 * dVar7;
        pdVar3 = (double*)param_2->second();
        dVar1 = *pdVar3;
        pdVar3 = (double*)param_2->GetScreen();
        dVar2 = *pdVar3;
        pvVar4 = param_2->SSOBeginPtr(param_1);
        dVar10 = (dVar2 * dVar6 + dVar1 * dVar7) - *(double*)pvVar4 * dVar8;
        pdVar3 = (double*)param_2->second();
        dVar1 = *pdVar3;
        pvVar4 = param_2->SSOBeginPtr(param_1);
        dVar2 = *(double*)pvVar4;
        pdVar3 = (double*)param_2->second();
        dVar8 = (dVar7 * dVar2 + dVar8 * dVar1) - dVar6 * *pdVar3;
        pvVar4 = param_1->SSOBeginPtr(param_1);
        dVar1 = *(double*)pvVar4;
        pdVar3 = (double*)param_1->second();
        dVar2 = *pdVar3;
        pdVar3 = (double*)param_1->GetScreen();
        new (this) Vector3T<double>(dVar9 + dVar9 + dVar1, dVar10 + dVar10 + dVar2, dVar8 + dVar8 + *pdVar3);
        return this;
    }

} // namespace jag::math
