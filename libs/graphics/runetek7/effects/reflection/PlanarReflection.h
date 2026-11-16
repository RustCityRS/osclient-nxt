// libs/graphics/runetek7/effects/reflection/PlanarReflection.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class PlanarReflection {
    public:
        // virtual methods in vtable order
        virtual ~PlanarReflection();
        virtual bool Initialise();
        virtual void SetShaderConstants(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                        Shader& shader) const;
        virtual uint64_t OnQualityChange(GraphicsQuality graphicsQuality);
        Option<float>* GetReflectionManager();
        void SetReflectionMapContribution(float arg1);
        void SetWaterReflectionStrength(float arg1);
        float GetReflectionMapContribution() const;
        PlanarReflection(RT7Core& rt7Core);

    private:
        GraphicsQuality field_8;
        uint8_t _unknown_12[4];
        RT7Core* field_16;
        uint8_t _unknown_24[664];
        unsigned int field_688;
        float m_reflectionMapContribution;
        float m_waterReflectionStrength;
        uint8_t _unknown_700[4];
    };

    // 0x100468ca0
    void PlanarReflection::SetReflectionMapContribution(float arg1) {
        m_reflectionMapContribution = arg1;
    }

    // 0x1007a2e50
    void PlanarReflection::SetWaterReflectionStrength(float arg1) {
        m_waterReflectionStrength = arg1;
    }

    // 0x1007bbf10
    float PlanarReflection::GetReflectionMapContribution() const {
        return m_reflectionMapContribution;
    }

    // 0x100923320
    PlanarReflection::~PlanarReflection() {
        field_32.~ReflectionManager();
        destruct<oldscape::highlight::NpcUID*>();
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x100468cb0
    Matrix44T<float> Matrix44Reflection<float>(const Vector3T<float>& vector3, float arg2) {
        float* in_RSI;

        float fVar1 = *in_RSI;
        float fVar2 = in_RSI[1];
        float fVar4 = fVar1 * -2.0;
        float fVar3 = in_RSI[2];
        float arg7 = fVar2 * -2.0 * fVar3;
        new (vector3) Matrix44T<float>(1.0 - (fVar1 * fVar1 + fVar1 * fVar1), fVar4 * fVar2, fVar3 * fVar4, 0.0,
                                       fVar4 * fVar2, 1.0 - (fVar2 * fVar2 + fVar2 * fVar2), arg7, 0.0, fVar3 * fVar4,
                                       arg7, 1.0 - (fVar3 * fVar3 + fVar3 * fVar3), 0.0, fVar4 * arg2,
                                       fVar2 * -2.0 * arg2, arg2 * -2.0 * fVar3, 1.0);
        return vector3;
    }

    // 0x100468da0
    PlaneT<float> operator* <float>(const PlaneT<float>& plane, const Matrix44T<float>& matrix44) {
        return local_18 = *(uint64_t*)plane;
        uint64_t uStack_10 = *(uint64_t*)(plane + 8);
        local_18 *= matrix44;
        return local_18;
    }

    // 0x100468dd0
    Matrix44T<float>& Matrix44Oblique<float>(Matrix44T<float>& matrix441, const Matrix44T<float>& matrix442,
                                             const Vector4T<float>& vector4) {
        uint32_t extraout_XMM0_Dd;
        uint64_t local_48;

        ReturnValue local_a8 = *(ReturnValue*)matrix442;
        uint64_t uStack_a0 = *(uint64_t*)(matrix442 + 8);
        uint64_t local_98 = *(uint64_t*)(matrix442 + 16);
        uint64_t uStack_90 = *(uint64_t*)(matrix442 + 24);
        uint64_t local_88 = *(uint64_t*)(matrix442 + 32);
        uint64_t uStack_80 = *(uint64_t*)(matrix442 + 40);
        uint64_t local_78 = *(uint64_t*)(matrix442 + 48);
        uint64_t uStack_70 = *(uint64_t*)(matrix442 + 56);
        local_a8 = Matrix44T<float>::Invert(nullptr);
        int iVar1 = sign<float>(*(float*)vector4);
        local_48._0_4_ = (float)iVar1;
        iVar1 = sign<float>(*(float*)(vector4 + 4));
        ImVec4 local_b8((float)local_48, (float)iVar1, 1.0, 1.0);
        local_b8 *= &local_a8;
        float fVar4 = (float)Vector4Dot<float>((math*)vector4, &local_b8);
        fVar4 = 2.0 / fVar4;
        local_48 = vector4 * fVar4;
        float local_68 = fVar4;
        uint32_t uStack_60 = 0;
        uint32_t uStack_3c = extraout_XMM0_Dd;
        matrix441 = matrix442;
        Vector4T<float>* pVVar2 = &matrix442[0];
        float* pfVar3 = (float*)(*pVVar2)[3];
        float local_4c = (float)local_48 - *pfVar3;
        pVVar2 = &matrix441[0];
        pfVar3 = (float*)(*pVVar2)[2];
        *pfVar3 = local_4c;
        local_48._0_4_ = local_48._4_4_;
        uint32_t uStack_40 = uStack_3c;
        pVVar2 = &matrix442[1];
        pfVar3 = (float*)(*pVVar2)[3];
        local_48._0_4_ = (float)local_48 - *pfVar3;
        pVVar2 = &matrix441[1];
        pfVar3 = (float*)(*pVVar2)[2];
        *pfVar3 = (float)local_48;
        pVVar2 = &matrix442[2];
        pfVar3 = (float*)(*pVVar2)[3];
        local_48._0_4_ = local_68 - *pfVar3;
        pVVar2 = &matrix441[2];
        pfVar3 = (float*)(*pVVar2)[2];
        *pfVar3 = (float)local_48;
        local_48._0_4_ = 0.0;
        local_48._4_4_ = 0.0;
        uStack_40 = 0;
        uStack_3c = 0;
        pVVar2 = &matrix442[3];
        pfVar3 = (float*)(*pVVar2)[3];
        local_48._0_4_ = (float)local_48 - *pfVar3;
        pVVar2 = &matrix441[3];
        pfVar3 = (float*)(*pVVar2)[2];
        *pfVar3 = (float)local_48;
        return matrix441;
    }

} // namespace jag::math
