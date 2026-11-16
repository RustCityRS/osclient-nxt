// libs/math/quaternion/Quaternion.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::math {
    template <typename...> // 2 instantiations, e.g. <double>, <float>
    class QuaternionT {
    public:
        QuaternionT<float>* FromAxisAngle(const Vector3T<float>& vector3, float arg2);
        QuaternionT<float>* Set(const Vector3T<float>& vector3, float arg2);
        auto Normalise();
        void Serialise<oldscape::PacketJ<Array<unsigned char>>>(oldscape::PacketJ<Array<unsigned char>>& packetJ,
                                                                bool arg2) const;
        Vector4T<float>* Set(const QuaternionT<float>& quaternion);
        QuaternionT<float>* SetToIdentity();
        QuaternionT<float>* Conjugate() const;
        QuaternionT<float>* operator*=(const QuaternionT<float>& quaternion);
        Vector4T<float>* operator*=(float arg1);
        QuaternionT<float>* Interpolate(const QuaternionT<float>& quaternion, float arg2) const;
        bool operator==(const QuaternionT<float>& quaternion);
        unsigned long operator!=(const QuaternionT<float>& quaternion);
        QuaternionT();
        void Length() const;
        QuaternionT<float>* operator/=(float arg1);
        void LengthSq() const;
        QuaternionT(PacketT<Array<unsigned char>>& arg1, bool arg2);
        Rect<float>* operator=(const QuaternionT<float>& quaternion);
        float Dot(const QuaternionT<float>& quaternion) const;
        QuaternionT<float>* Negate() const;
        QuaternionT(float arg1, float arg2, float arg3, float arg4);
        QuaternionT(const QuaternionT<float>& quaternion);
        void FromYawPitchRoll(const Vector3T<float>& vector3);
        QuaternionT<double>* operator*=(const QuaternionT<double>& quaternion);
        QuaternionT<double>* operator*=(double arg1);
        QuaternionT<double>* operator+=(const QuaternionT<double>& quaternion);
        QuaternionT(PacketT<Array<unsigned char>>& arg1, bool arg2);
        QuaternionT<double>* Conjugate() const;
        QuaternionT<double>* SetToIdentity();
        QuaternionT<double>* FromAxisAngle(const Vector3T<double>& vector3, double arg2);
        QuaternionT<double>* operator=(const QuaternionT<double>& quaternion);
        QuaternionT(double arg1, double arg2, double arg3, double arg4);
        QuaternionT<double>* Set(double arg1, double arg2, double arg3, double arg4);
        double Length() const;
        QuaternionT<double>* operator/=(double arg1);
        QuaternionT<double>* Set(const Vector3T<double>& vector3, double arg2);
        auto Inverse() const;
        QuaternionT(const Matrix33T<float>& matrix33);
        ReturnValue GetXAxis() const;
        ReturnValue GetYAxis() const;
        ReturnValue GetZAxis() const;
        void FromYawPitchRoll(float arg1, float arg2, float arg3);
        auto FromRotationMatrix(const Matrix33T<float>& matrix33);
        static QuaternionT<float> IDENTITY; // = QuaternionT<float>(0.0, 0.0, 0.0, 1.0)
    };

    // 0x100f3c200, set at startup by ___cxx_global_var_init.175
    QuaternionT<float> QuaternionT<float>::IDENTITY = QuaternionT<float>(0.0, 0.0, 0.0, 1.0);

    // 0x1002c9700
    bool QuaternionT<float>::operator==(const QuaternionT<float>& quaternion) {
        auto pfVar2 = SSOBeginPtr();
        float fVar1 = *pfVar2;
        pfVar2 = (float*)quaternion.SSOBeginPtr();
        if (fVar1 == *pfVar2) {
            pfVar2 = (float*)y();
            fVar1 = *pfVar2;
            pfVar2 = (float*)quaternion.y();
            if (fVar1 == *pfVar2) {
                pfVar2 = (float*)second();
                fVar1 = *pfVar2;
                pfVar2 = (float*)quaternion.second();
                if (fVar1 == *pfVar2) {
                    pfVar2 = (float*)qw(this);
                    fVar1 = *pfVar2;
                    pfVar2 = (float*)qw(quaternion);
                    return fVar1 == *pfVar2;
                }
            }
        }
        return false;
    }

    // 0x1002c97b0
    unsigned long QuaternionT<float>::operator!=(const QuaternionT<float>& quaternion) {
        uint64_t unaff_R15;

        auto pfVar2 = SSOBeginPtr();
        float fVar1 = *pfVar2;
        pfVar2 = (float*)quaternion.SSOBeginPtr();
        uint64_t uVar4 = (uint64_t)((unsigned long)unaff_R15 >> 8);
        unsigned long uVar3 = (((uint64_t)uVar4 << 8) | (uint8_t)1);
        if (fVar1 == *pfVar2) {
            pfVar2 = (float*)y();
            fVar1 = *pfVar2;
            pfVar2 = (float*)quaternion.y();
            if (fVar1 == *pfVar2) {
                pfVar2 = (float*)second();
                fVar1 = *pfVar2;
                pfVar2 = (float*)quaternion.second();
                if (fVar1 == *pfVar2) {
                    pfVar2 = (float*)qw(this);
                    fVar1 = *pfVar2;
                    pfVar2 = (float*)qw(quaternion);
                    uVar3 = (((uint64_t)uVar4 << 8) | (uint8_t)(fVar1 != *pfVar2));
                }
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x1002c9860
    bool operator!= <float>(const Vector3T<float>& vector31, const Vector3T<float>& vector32) {
        bool bVar1 = vector31 == vector32;
        return !bVar1;
    }

    // 0x1002c9870
    bool Vector3T<float>::IsUniform() const {
        if (*(float*)this == *(float*)(this + 4)) {
            return *(float*)this == *(float*)(this + 8);
        }
        return false;
    }

    // 0x1002e3200
    QuaternionT<float>::QuaternionT() {
        SetToIdentity(this);
    }

    // 0x1002e3400
    void QuaternionT<float>::Length() const {
        float arg1;

        arg1 = (float)LengthSq(this);
        ::sqrt(arg1);
    }

    // 0x1002e3410
    QuaternionT<float>* QuaternionT<float>::operator/=(float arg1) {
        float fVar1 = 1.0 / arg1;
        *(float*)this = *(float*)this * fVar1;
        *(float*)(this + 4) = *(float*)(this + 4) * fVar1;
        *(float*)(this + 8) = *(float*)(this + 8) * fVar1;
        *(float*)(this + 12) = fVar1 * *(float*)(this + 12);
        return this;
    }

    // 0x1002e3460
    void QuaternionT<float>::LengthSq() const {
        QuaternionDot<float>(this, this);
    }

    // 0x1002e35d0
    QuaternionT<float>::QuaternionT(PacketT<Array<unsigned char>>& arg1, bool arg2) {
        uint32_t in_register_00000011;
        float fVar1;

        if ((((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            fVar1 = arg1.gT<float>();
            *(float*)this = fVar1;
            fVar1 = arg1.gT<float>();
            *(float*)(this + 4) = fVar1;
            fVar1 = arg1.gT<float>();
            *(float*)(this + 8) = fVar1;
            fVar1 = arg1.gT<float>();
        } else {
            fVar1 = arg1.gTPE<float>();
            *(float*)this = fVar1;
            fVar1 = arg1.gTPE<float>();
            *(float*)(this + 4) = fVar1;
            fVar1 = arg1.gTPE<float>();
            *(float*)(this + 8) = fVar1;
            fVar1 = arg1.gTPE<float>();
        }
        *(float*)(this + 12) = fVar1;
    }

    // 0x1002e3770
    Rect<float>* QuaternionT<float>::operator=(const QuaternionT<float>& quaternion) {
        *(uint32_t*)this = *(uint32_t*)quaternion;
        *(uint32_t*)(this + 4) = *(uint32_t*)(quaternion + 4);
        *(uint32_t*)(this + 8) = *(uint32_t*)(quaternion + 8);
        *(uint32_t*)(this + 12) = *(uint32_t*)(quaternion + 12);
        return this;
    }

    // 0x1002e3c80
    float QuaternionT<float>::Dot(const QuaternionT<float>& quaternion) const {
        return *(float*)(quaternion + 12) * field_12 + *(float*)(quaternion + 8) * field_8 +
               *(float*)(quaternion + 4) * field_4 + *(float*)quaternion * field_0;
    }

    // 0x1002e3cc0
    QuaternionT<float>* QuaternionT<float>::Negate() const {
        float* in_RSI;

        QuaternionT(this, -*in_RSI, -in_RSI[1], -in_RSI[2], -in_RSI[3]);
        return this;
    }

    // 0x1004c91f0
    QuaternionT<float>::QuaternionT(const QuaternionT<float>& quaternion) {
        auto puVar1 = quaternion.SSOBeginPtr();
        *(uint32_t*)this = *puVar1;
        puVar1 = (uint32_t*)quaternion.y();
        *(uint32_t*)(this + 4) = *puVar1;
        puVar1 = (uint32_t*)quaternion.second();
        *(uint32_t*)(this + 8) = *puVar1;
        puVar1 = (uint32_t*)qw(quaternion);
        *(uint32_t*)(this + 12) = *puVar1;
    }

    // 0x1004c9250
    Matrix33T<float>::Matrix33T() {
        long lVar1 = 0;
        do {
            new ((this + lVar1)) Vector3T();
            lVar1 = lVar1 + 12;
        } while (lVar1 != 36);
    }

    // 0x1004cad80
    QuaternionT<float>::QuaternionT(float arg1, float arg2, float arg3, float arg4) {
        Set(this, arg1, arg2, arg3, arg4);
    }

    // 0x100540b90
    void QuaternionT<float>::FromYawPitchRoll(const Vector3T<float>& vector3) {
        auto pfVar1 = vector3.SSOBeginPtr();
        float arg1 = *pfVar1;
        pfVar1 = (float*)vector3.y();
        float arg2 = *pfVar1;
        pfVar1 = (float*)vector3.second();
        FromYawPitchRoll(this, arg1, arg2, *pfVar1);
    }

    // 0x100616850
    QuaternionT<double>* QuaternionT<double>::operator*=(const QuaternionT<double>& quaternion) {
        double* pdVar9 = (double*)SSOBeginPtr();
        double dVar1 = *pdVar9;
        pdVar9 = (double*)second();
        double dVar2 = *pdVar9;
        pdVar9 = (double*)GetScreen();
        double dVar3 = *pdVar9;
        pdVar9 = (double*)second();
        double dVar4 = *pdVar9;
        pdVar9 = (double*)quaternion.SSOBeginPtr();
        double dVar5 = *pdVar9;
        pdVar9 = (double*)quaternion.second();
        double dVar6 = *pdVar9;
        pdVar9 = (double*)quaternion.GetScreen();
        double dVar7 = *pdVar9;
        pdVar9 = (double*)quaternion.second();
        double dVar8 = *pdVar9;
        *(double*)this = (dVar5 * dVar4 - dVar6 * dVar3) + dVar7 * dVar2 + dVar8 * dVar1;
        *(double*)(this + 8) = ((dVar5 * dVar3 + dVar6 * dVar4) - dVar7 * dVar1) + dVar8 * dVar2;
        *(double*)(this + 16) = (dVar6 * dVar1 - dVar5 * dVar2) + dVar8 * dVar3 + dVar7 * dVar4;
        *(double*)(this + 24) = dVar8 * dVar4 - (dVar7 * dVar3 + dVar6 * dVar2 + dVar5 * dVar1);
        return this;
    }

    // 0x10061fd40
    QuaternionT<double>* QuaternionT<double>::Conjugate() const {
        double* in_RSI;

        QuaternionT(this, -*in_RSI, -in_RSI[1], -in_RSI[2], in_RSI[3]);
        return this;
    }

    // 0x1007a2490
    auto QuaternionT<float>::Inverse() const {
        auto result;

        QuaternionT(&result);
        float fVar1 = (float)LengthSq(this);
        fVar1 = 1.0 / fVar1;
        result = -*(float*)this * fVar1;
        *(float*)&result.field_4 = *(float*)(this + 4) * -fVar1;
        *(float*)(&result + 1) = -fVar1 * *(float*)(this + 8);
        *(float*) && result[1].field_4 = fVar1 * *(float*)(this + 12);
        return result;
    }

    // 0x1009dc3d0
    ReturnValue QuaternionT<float>::GetXAxis() const {
        float fVar1 = *(float*)this;
        float fVar2 = *(float*)(this + 4);
        float fVar3 = *(float*)(this + 8);
        float fVar4 = *(float*)(this + 12);
        float fVar6 = fVar3 * fVar4 + fVar2 * fVar1;
        float fVar7 = fVar3 * fVar1 - fVar2 * fVar4;
        ColourHSL local_20((fVar4 * fVar4 + fVar1 * fVar1) - (fVar2 * fVar2 + fVar3 * fVar3), fVar6 + fVar6,
                           fVar7 + fVar7);
        ReturnValue* pRVar5 = local_20 = Vector3T<float>::Normalize();
        return *pRVar5;
    }

    // 0x1009dc4c0
    ReturnValue QuaternionT<float>::GetYAxis() const {
        float fVar1 = *(float*)this;
        float fVar2 = *(float*)(this + 4);
        float fVar3 = *(float*)(this + 12);
        float fVar4 = *(float*)(this + 8);
        float fVar6 = fVar2 * fVar1 - fVar4 * fVar3;
        float fVar7 = fVar4 * fVar2 + fVar3 * fVar1;
        ColourHSL local_20(fVar6 + fVar6, (fVar3 * fVar3 + fVar2 * fVar2) - (fVar4 * fVar4 + fVar1 * fVar1),
                           fVar7 + fVar7);
        ReturnValue* pRVar5 = local_20 = Vector3T<float>::Normalize();
        return *pRVar5;
    }

    // 0x1009dc5b0
    ReturnValue QuaternionT<float>::GetZAxis() const {
        float fVar1 = *(float*)(this + 8);
        float fVar2 = *(float*)(this + 12);
        float fVar3 = *(float*)this;
        float fVar4 = *(float*)(this + 4);
        float fVar6 = fVar1 * fVar3 + fVar4 * fVar2;
        float fVar7 = fVar4 * fVar1 - fVar2 * fVar3;
        ColourHSL local_20(fVar6 + fVar6, fVar7 + fVar7,
                           (fVar2 * fVar2 + fVar1 * fVar1) - (fVar4 * fVar4 + fVar3 * fVar3));
        ReturnValue* pRVar5 = local_20 = Vector3T<float>::Normalize();
        return *pRVar5;
    }

    // 0x1009dc6d0
    void QuaternionT<float>::FromYawPitchRoll(float arg1, float arg2, float arg3) {
        float fVar1 = (float)::sin(arg1 * 0.5);
        float fVar2 = (float)::cos(arg1 * 0.5);
        float fVar3 = (float)::sin(arg2 * 0.5);
        float fVar4 = (float)::cos(arg2 * 0.5);
        float fVar5 = (float)::sin(arg3 * 0.5);
        float fVar6 = (float)::cos(arg3 * 0.5);
        Set(this, fVar6 * fVar3 * fVar2 + fVar4 * fVar1 * fVar5, fVar6 * fVar4 * fVar1 - fVar3 * fVar2 * fVar5,
            fVar4 * fVar2 * fVar5 - fVar6 * fVar3 * fVar1, fVar3 * fVar1 * fVar5 + fVar4 * fVar2 * fVar6);
    }

    // 0x1009ddde0
    QuaternionT<float>::QuaternionT(const Matrix33T<float>& matrix33) {
        FromRotationMatrix((ReturnValue*)this, matrix33);
    }

    // 0x1009dddf0
    auto QuaternionT<float>::FromRotationMatrix(const Matrix33T<float>& matrix33) {
        auto result;
        unsigned int arg1;
        bool bVar1;
        unsigned int uVar4;
        unsigned int arg1_00;
        unsigned long uVar5;
        float local_48[4];

        Vector3T<float>* pVVar2 = &matrix33[0];
        float* pfVar3 = (float*)(*pVVar2)[0];
        float fVar7 = *pfVar3;
        pVVar2 = &matrix33[1];
        pfVar3 = (float*)(*pVVar2)[1];
        float fVar6 = *pfVar3;
        pVVar2 = &matrix33[2];
        pfVar3 = (float*)(*pVVar2)[2];
        fVar7 = fVar7 + fVar6 + *pfVar3;
        if (fVar7 <= 0.0) {
            pVVar2 = &matrix33[1];
            pfVar3 = (float*)(*pVVar2)[1];
            fVar7 = *pfVar3;
            pVVar2 = &matrix33[0];
            pfVar3 = (float*)(*pVVar2)[0];
            bVar1 = *pfVar3 <= fVar7 && fVar7 != *pfVar3;
            pVVar2 = &matrix33[2];
            pfVar3 = (float*)(*pVVar2)[2];
            fVar7 = *pfVar3;
            uVar4 = (unsigned int)bVar1;
            pVVar2 = &matrix33[uVar4];
            pfVar3 = (float*)(*pVVar2)[(unsigned int)bVar1];
            uVar5 = (unsigned long)uVar4;
            if (*pfVar3 <= fVar7 && fVar7 != *pfVar3) {
                uVar5 = 2;
            }
            uVar4 = *(unsigned int*)(&reinterpret_cast<const uint64_t*>(&DEF_EXPOSURE_SPEED_MUL)[38] + uVar5 * 4);
            arg1 = *(unsigned int*)(&reinterpret_cast<const uint64_t*>(&DEF_EXPOSURE_SPEED_MUL)[38] +
                                    (long)(int)uVar4 * 4);
            arg1_00 = (unsigned int)uVar5;
            pVVar2 = &matrix33[arg1_00];
            pfVar3 = (float*)(*pVVar2)[arg1_00];
            fVar7 = *pfVar3;
            pVVar2 = &matrix33[uVar4];
            pfVar3 = (float*)(*pVVar2)[uVar4];
            fVar6 = *pfVar3;
            pVVar2 = &matrix33[arg1];
            pfVar3 = (float*)(*pVVar2)[arg1];
            fVar7 = (float)::sqrt((fVar7 + 1.0) - (fVar6 + *pfVar3));
            local_48[uVar5] = fVar7 * 0.5;
            if (fVar7 != 0.0) {
                fVar7 = 0.5 / fVar7;
            }
            pVVar2 = &matrix33[uVar4];
            pfVar3 = (float*)(*pVVar2)[arg1];
            fVar6 = *pfVar3;
            pVVar2 = &matrix33[arg1];
            pfVar3 = (float*)(*pVVar2)[uVar4];
            local_48[3] = (fVar6 - *pfVar3) * fVar7;
            pVVar2 = &matrix33[arg1_00];
            pfVar3 = (float*)(*pVVar2)[uVar4];
            fVar6 = *pfVar3;
            pVVar2 = &matrix33[uVar4];
            pfVar3 = (float*)(*pVVar2)[arg1_00];
            local_48[uVar4] = (fVar6 + *pfVar3) * fVar7;
            pVVar2 = &matrix33[arg1_00];
            pfVar3 = (float*)(*pVVar2)[arg1];
            fVar6 = *pfVar3;
            pVVar2 = &matrix33[arg1];
            pfVar3 = (float*)(*pVVar2)[arg1_00];
            local_48[arg1] = (fVar6 + *pfVar3) * fVar7;
            result = local_48[0];
            *(float*)&result.field_4 = local_48[1];
            *(float*)(&result + 1) = local_48[2];
            *(float*) && result[1].field_4 = local_48[3];
        } else {
            fVar6 = (float)::sqrt(fVar7 + 1.0);
            *(float*) && result[1].field_4 = fVar6 * 0.5;
            fVar6 = 0.5 / fVar6;
            pVVar2 = &matrix33[1];
            pfVar3 = (float*)(*pVVar2)[2];
            fVar7 = *pfVar3;
            pVVar2 = &matrix33[2];
            pfVar3 = (float*)(*pVVar2)[1];
            result = (fVar7 - *pfVar3) * fVar6;
            pVVar2 = &matrix33[2];
            pfVar3 = (float*)(*pVVar2)[0];
            fVar7 = *pfVar3;
            pVVar2 = &matrix33[0];
            pfVar3 = (float*)(*pVVar2)[2];
            *(float*)&result.field_4 = (fVar7 - *pfVar3) * fVar6;
            pVVar2 = &matrix33[0];
            pfVar3 = (float*)(*pVVar2)[1];
            fVar7 = *pfVar3;
            pVVar2 = &matrix33[1];
            pfVar3 = (float*)(*pVVar2)[0];
            *(float*)(&result + 1) = (fVar7 - *pfVar3) * fVar6;
        }
        return result;
    }

} // namespace jag::math

namespace jag::game {
    // 0x1004c86b0
    VarDomainTypePlayerNPC::VarDomainTypePlayerNPC(unsigned int arg1, const Js5ConfigGroup* js5ConfigGroup, bool arg3,
                                                   bool arg4)
        : VarDomainType(arg1, js5ConfigGroup, arg3, arg4), field_32(-1) {}

    // 0x1004c87a0
    uint8_t* VarDomainTypePlayerNPC::GetDefaultValue(const VarType* varType) const {
        long lVar2;
        NXTPixToolkit* this_00;

        if ((varType->LegacyDefaultValue() == '\0') ||
            (lVar2 = varType->GetOutputType(), lVar2 != ScriptVarType::BOOLEAN)) {
            this_00 = (NXTPixToolkit*)varType->GetOutputType();
            return (uint8_t*)this_00->GetScreen();
        }
        return &field_32;
    }

    // 0x1004c8b50
    VarDomainTypePlayerNPC::~VarDomainTypePlayerNPC() {
        field_32.~VarValue();
    }

    // 0x1004c8df0
    VarDomainTypeClient::VarDomainTypeClient(unsigned int arg1, const Js5ConfigGroup* js5ConfigGroup, bool arg3,
                                             bool arg4)
        : VarDomainType(arg1, js5ConfigGroup, arg3, arg4), field_32(-1) {}

    // 0x1004c8e70
    uint8_t* VarDomainTypeClient::GetDefaultValue(const VarType* varType) const {
        long lVar2;
        NXTPixToolkit* this_00;
        uint8_t* puVar3;

        if (varType->LegacyDefaultValue() == '\0') {
        LAB_1004c8eb1:
            this_00 = (NXTPixToolkit*)varType->GetOutputType();
            puVar3 = (uint8_t*)this_00->GetScreen();
        } else {
            lVar2 = varType->GetOutputType();
            if (lVar2 != ScriptVarType::INT) {
                lVar2 = varType->GetOutputType();
                if (lVar2 != ScriptVarType::BOOLEAN)
                    goto LAB_1004c8eb1;
            }
            puVar3 = &field_32;
        }
        return puVar3;
    }

    // 0x1004c8ee0
    VarDomainTypeClient::~VarDomainTypeClient() {
        field_32.~VarValue();
    }

    // 0x1004c8f10
    VarDomainTypeNormal::VarDomainTypeNormal(unsigned int arg1, const Js5ConfigGroup* js5ConfigGroup, bool arg3,
                                             bool arg4)
        : VarDomainType(arg1, js5ConfigGroup, arg3, arg4) {}

    // 0x1004c8f40
    void VarDomainTypeNormal::GetDefaultValue(const VarType* varType) const {
        ((NXTPixToolkit*)varType->GetOutputType())->GetScreen();
    }

} // namespace jag::game

namespace jag {
    // 0x1002c9890
    shared_ptr_if_not_array<math::QuaternionT<float>>::type
    make_shared<math::QuaternionT<float>, float&, float&, float&, float&>(float& arg1, float& arg2, float& arg3,
                                                                          float& arg4) {
        ref_counter_shared_trivial<math::QuaternionT<float> _>* ref_counter_shared_trivial;
        int local_44;
        QuaternionT<float>* local_40[2];

        auto arg1_00 = aligned_alloc(32, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<math::QuaternionT<float>>::type result;
        } else {
            local_40[0] = placement_new<math::QuaternionT<float>, float&, float&, float&, float&>(
                (void*)((long)arg1_00 + 16), arg1, arg2, arg3, arg4);
            local_44 = 1;
            ref_counter_shared_trivial =
                placement_new<ref_counter_shared_trivial<math::QuaternionT<float>>, int, math::QuaternionT<float>*&>(
                    arg1_00, &local_44, local_40);
            ref_counter_shared_trivial->~AutoSingleton();
            ref_counter_shared_trivial->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared_trivial, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x1004cbed0
    float PacketReaderMixin<PacketT<Array<unsigned char>>>::gT<float>() {
        uint64_t uVar3;
        uint64_t uVar6;

        long lVar4 = data();
        long lVar2 = *(long*)(this + 24);
        unsigned long uVar1 = lVar2 + 4;
        *(unsigned long*)(this + 24) = uVar1;
        if (end() < uVar1) {
            uVar3 = *(uint64_t*)(this + 24);
            uVar6 = end();
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                13, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        return local_2c = *(float*)(lVar4 + lVar2);
        ReorderToBE<float>(&local_2c);
        return local_2c;
    }

    // 0x1004cbf60
    void ReorderFromBE<float>(float& arg1) {
        if (IsLittleEndian() != '\0') {
            DoByteReorder<EndianSwap, float>(arg1);
        }
    }

    // 0x1004cbf90
    void DoByteReorder<EndianSwap, float>(float& arg1) {
        DoByteReorder<EndianSwap, int>((unsigned int*)arg1);
    }

    // 0x1004cbfa0
    short PacketReaderMixin<PacketT<Array<unsigned char>>>::gT<short>() {
        uint64_t uVar3;
        uint64_t uVar6;

        long lVar4 = data();
        long lVar2 = *(long*)(this + 24);
        unsigned long uVar1 = lVar2 + 2;
        *(unsigned long*)(this + 24) = uVar1;
        if (end() < uVar1) {
            uVar3 = *(uint64_t*)(this + 24);
            uVar6 = end();
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                13, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        return local_2a = *(short*)(lVar4 + lVar2);
        ReorderToBE<short>(&local_2a);
        return local_2a;
    }

} // namespace jag
