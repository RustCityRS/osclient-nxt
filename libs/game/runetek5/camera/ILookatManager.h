// libs/game/runetek5/camera/ILookatManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.system.osclient

namespace jag::game {
    class ILookatManager {
    public:
        // virtual methods in vtable order
        virtual ~ILookatManager();
        virtual Option<unsigned char>* GetLookatEntity() const;
        virtual void Update(float arg1, const math::Vector3T<double>& arg2, const math::Vector3T<double>& arg3);
        void DrawDebug(unsigned int arg1);
        LookatMode GetMode() const;
        bool IsSpline() const;
        ILookatManager(LookatMode lookatMode);
        void ToString(eastl::fixed_string<char, 512>& str) const;

    private:
        LookatMode m_mode;
        uint8_t _unknown_12[4];
    };

    class LookatData {
    public:
        LookatData();
    };

    // 0x100009e70: ILookatManager::Update(float, math::Vector3T<double> const&, math::Vector3T<double> const&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: ILookatManager::DrawDebug(unsigned int) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: ILookatManager::~ILookatManager() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100024170: ILookatManager::GetMode() const has the same machine code as oldscape::option::IScriptOption::GetId() const

    // 0x1005f9e90: ILookatManager::GetLookatEntity() const has the same machine code as option::Option<int>::GetValueLabels() const

    // 0x10062fd00
    bool ILookatManager::IsSpline() const {
        unsigned int uVar1 = m_mode - 2;
        return (29U >> (uVar1 & 31) & 1) != 0 && uVar1 < 5;
    }

    // 0x100640a30
    ILookatManager::ILookatManager(LookatMode lookatMode) : m_mode(lookatMode) {}

    // 0x100640a50
    void ILookatManager::ToString(eastl::fixed_string<char, 512>& str) const {
        str.clear();
        str.begin();
    }

} // namespace jag::game

namespace jag::math {
    // 0x10062fd30
    auto Vector3T<double>::SetToZero() {
        auto result;
        result = (ReturnValue)0;
        &result[1] = (ReturnValue)0;
        &result[2] = (ReturnValue)0;
        return result;
    }

    // 0x100630090
    Vector3T<double>* Vector3T<double>::operator*=(const QuaternionT<double>& quaternion) {
        auto pdVar2 = quaternion.second();
        double dVar6 = *pdVar2;
        pdVar2 = (double*)GetScreen();
        double dVar1 = *pdVar2;
        pdVar2 = (double*)quaternion.GetScreen();
        double dVar5 = *pdVar2;
        pdVar2 = (double*)second();
        double dVar3 = dVar6 * dVar1 - dVar5 * *pdVar2;
        pdVar2 = (double*)quaternion.GetScreen();
        dVar6 = *pdVar2;
        pdVar2 = (double*)SSOBeginPtr();
        dVar1 = *pdVar2;
        pdVar2 = (double*)quaternion.SSOBeginPtr();
        dVar5 = *pdVar2;
        pdVar2 = (double*)GetScreen();
        double dVar4 = dVar6 * dVar1 - dVar5 * *pdVar2;
        pdVar2 = (double*)quaternion.SSOBeginPtr();
        dVar6 = *pdVar2;
        pdVar2 = (double*)second();
        dVar1 = *pdVar2;
        pdVar2 = (double*)quaternion.second();
        dVar5 = *pdVar2;
        pdVar2 = (double*)SSOBeginPtr();
        dVar5 = dVar6 * dVar1 - dVar5 * *pdVar2;
        pdVar2 = (double*)quaternion.second();
        dVar6 = *pdVar2;
        pdVar2 = (double*)quaternion.second();
        dVar1 = *pdVar2;
        pdVar2 = (double*)quaternion.GetScreen();
        dVar6 = (dVar1 * dVar5 + dVar6 * dVar3) - *pdVar2 * dVar4;
        *(double*)this = dVar6 + dVar6 + *(double*)this;
        pdVar2 = (double*)quaternion.second();
        dVar6 = *pdVar2;
        pdVar2 = (double*)quaternion.GetScreen();
        dVar1 = *pdVar2;
        pdVar2 = (double*)quaternion.SSOBeginPtr();
        dVar6 = (dVar1 * dVar3 + dVar6 * dVar4) - *pdVar2 * dVar5;
        *(double*)(this + 8) = dVar6 + dVar6 + *(double*)(this + 8);
        pdVar2 = (double*)quaternion.second();
        dVar6 = *pdVar2;
        pdVar2 = (double*)quaternion.SSOBeginPtr();
        dVar1 = *pdVar2;
        pdVar2 = (double*)quaternion.second();
        dVar6 = (dVar4 * dVar1 + dVar5 * dVar6) - dVar3 * *pdVar2;
        *(double*)(this + 16) = dVar6 + dVar6 + *(double*)(this + 16);
        return this;
    }

    // 0x1006304a0
    QuaternionT<double>* QuaternionT<double>::SetToIdentity() {
        Set(this, 0.0, 0.0, 0.0, 1.0);
        return this;
    }

    // 0x100630650
    Vector3T<double>* Vector3T<double>::operator-=(const Vector3T<double>& vector3) {
        *(double*)this = *(double*)this - *(double*)vector3;
        *(double*)(this + 8) = *(double*)(this + 8) - *(double*)(vector3 + 8);
        *(double*)(this + 16) = *(double*)(this + 16) - *(double*)(vector3 + 16);
        return this;
    }

    // 0x100631180
    QuaternionT<double>* QuaternionT<double>::FromAxisAngle(const Vector3T<double>& vector3, double arg2) {
        double in_XMM1_Qa;
        Vector3T<double> local_40;

        double arg2_00 = (double)___sincos_stret(arg2 * 0.5);
        double local_28 = in_XMM1_Qa;
        local_40** arg2_00;
        Set(this, &local_40, local_28);
        return this;
    }

    // 0x1006311e0
    Vector3T<double> operator* <double>(const Vector3T<double>& vector3, const QuaternionT<double>& quaternion) {
        NXTPixToolkit* in_RDX;

        auto pdVar3 = in_RDX->second();
        double dVar1 = *pdVar3;
        pdVar3 = (double*)quaternion.GetScreen();
        double dVar2 = *pdVar3;
        pdVar3 = (double*)in_RDX->GetScreen();
        double dVar6 = *pdVar3;
        pdVar3 = (double*)quaternion.second();
        double dVar4 = dVar1 * dVar2 - dVar6 * *pdVar3;
        pdVar3 = (double*)in_RDX->GetScreen();
        dVar1 = *pdVar3;
        pdVar3 = (double*)quaternion.SSOBeginPtr();
        dVar2 = *pdVar3;
        pdVar3 = (double*)in_RDX->SSOBeginPtr();
        dVar6 = *pdVar3;
        pdVar3 = (double*)quaternion.GetScreen();
        double dVar5 = dVar1 * dVar2 - dVar6 * *pdVar3;
        pdVar3 = (double*)in_RDX->SSOBeginPtr();
        dVar1 = *pdVar3;
        pdVar3 = (double*)quaternion.second();
        dVar2 = *pdVar3;
        pdVar3 = (double*)in_RDX->second();
        dVar6 = *pdVar3;
        pdVar3 = (double*)quaternion.SSOBeginPtr();
        dVar6 = dVar1 * dVar2 - dVar6 * *pdVar3;
        pdVar3 = (double*)in_RDX->second();
        dVar1 = *pdVar3;
        pdVar3 = (double*)in_RDX->second();
        dVar2 = *pdVar3;
        pdVar3 = (double*)in_RDX->GetScreen();
        double dVar7 = (dVar2 * dVar6 + dVar1 * dVar4) - *pdVar3 * dVar5;
        pdVar3 = (double*)in_RDX->second();
        dVar1 = *pdVar3;
        pdVar3 = (double*)in_RDX->GetScreen();
        dVar2 = *pdVar3;
        pdVar3 = (double*)in_RDX->SSOBeginPtr();
        double dVar8 = (dVar2 * dVar4 + dVar1 * dVar5) - *pdVar3 * dVar6;
        pdVar3 = (double*)in_RDX->second();
        dVar1 = *pdVar3;
        pdVar3 = (double*)in_RDX->SSOBeginPtr();
        dVar2 = *pdVar3;
        pdVar3 = (double*)in_RDX->second();
        dVar6 = (dVar5 * dVar2 + dVar6 * dVar1) - dVar4 * *pdVar3;
        pdVar3 = (double*)quaternion.SSOBeginPtr();
        dVar1 = *pdVar3;
        pdVar3 = (double*)quaternion.second();
        dVar2 = *pdVar3;
        pdVar3 = (double*)quaternion.GetScreen();
        new (vector3) Vector3T(dVar7 + dVar7 + dVar1, dVar8 + dVar8 + dVar2, dVar6 + dVar6 + *pdVar3);
        return vector3;
    }

} // namespace jag::math
