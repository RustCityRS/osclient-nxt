// libs/graphics/runetek7/effects/reflection/PlanarReflection.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class PlanarReflection {
    public:
        // virtual methods in vtable order
        virtual ~PlanarReflection();
        virtual bool Initialise();
        virtual void SetShaderConstants(render::DrawCallState&, render::RenderContext&, Shader&) const;
        virtual OnQualityChange(GraphicsQuality);
        GetReflectionManager();
        void SetReflectionMapContribution(float);
        void SetWaterReflectionStrength(float);
        float GetReflectionMapContribution() const;
        PlanarReflection(RT7Core&);

        // data members, from how the methods use this: 704 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        RT7Core* field_16; // offset 16
        char _unknown_24[664];
        uint field_688;                    // offset 688
        float m_reflectionMapContribution; // offset 692
        float m_waterReflectionStrength;   // offset 696
        char _unknown_700[4];
    };

    // 0x100468ca0, 16 bytes, inline, placed by class name and debug map
    // PlanarReflection::SetReflectionMapContribution(float)
    void PlanarReflection::SetReflectionMapContribution(float param_1) {
        m_reflectionMapContribution = param_1;
    }

    // 0x1007a2e50, 16 bytes, inline, placed by class name
    // PlanarReflection::SetWaterReflectionStrength(float)
    void PlanarReflection::SetWaterReflectionStrength(float param_1) {
        m_waterReflectionStrength = param_1;
    }

    // 0x1007bbf10, 16 bytes, inline, placed by class name
    // PlanarReflection::GetReflectionMapContribution() const
    float PlanarReflection::GetReflectionMapContribution() {
        return m_reflectionMapContribution;
    }

    // 0x100921e40, 16 bytes, complete-object destructor, inline, placed by class name
    // PlanarReflection::~PlanarReflection(): jumps straight to the base-object destructor

    // 0x100921e50, 32 bytes, deleting destructor, inline, placed by class name
    // PlanarReflection::~PlanarReflection()
    void PlanarReflection::~PlanarReflection() {
        ~PlanarReflection(this);
        operator_delete(this);
    }

    // 0x100923320, 48 bytes, base-object destructor, inline, placed by class name
    // PlanarReflection::~PlanarReflection()
    void PlanarReflection::~PlanarReflection() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = &PTR__PlanarReflection_100f19170;
        (&field_32)->~ReflectionManager();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)this, in_RSI, extraout_RDX);
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x100468cb0, 240 bytes, inline, placed by debug map only (low confidence)
    // Matrix44T<float> Matrix44Reflection<float>(Vector3T<float> const&, float)
    Matrix44T* Matrix44Reflection<float>(Matrix44T* __return_storage_ptr__, math* this, Vector3T* param_1,
                                         float param_2) {
        float fVar1;
        float fVar2;
        float fVar3;
        float fVar4;
        float fVar5;

        fVar1 = field_0;
        fVar2 = field_4;
        fVar4 = fVar1 * -2.0;
        fVar3 = field_8;
        fVar5 = fVar2 * -2.0 * fVar3;
        new (__return_storage_ptr__)
            Matrix44T<float>(1.0 - (fVar1 * fVar1 + fVar1 * fVar1), fVar4 * fVar2, fVar3 * fVar4, 0.0, fVar4 * fVar2,
                             1.0 - (fVar2 * fVar2 + fVar2 * fVar2), fVar5, 0.0, fVar3 * fVar4, fVar5,
                             1.0 - (fVar3 * fVar3 + fVar3 * fVar3), 0.0, fVar4 * param_2, fVar2 * -2.0 * param_2,
                             param_2 * -2.0 * fVar3, 1.0);
        return __return_storage_ptr__;
    }

    // 0x100468da0, 48 bytes, inline, placed by debug map only (low confidence)
    // PlaneT<float> operator*<float>(PlaneT<float> const&, Matrix44T<float> const&)
    /* PlaneT<float> TEMPNAMEPLACEHOLDERVALUE(PlaneT<float> const&,
   Matrix44T<float> const&) */

    undefined8 operator*(PlaneT* param_1, Matrix44T* param_2) {
        undefined8 local_18;
        undefined8 uStack_10;

        local_18 = *(undefined8*)param_1;
        uStack_10 = *(undefined8*)(param_1 + 8);
        PlaneT<float>::operator*=((PlaneT<float>*)&local_18, param_2);
        return local_18;
    }

    // 0x100468dd0, 560 bytes, inline, placed by debug map only (low confidence)
    // Matrix44T<float>& Matrix44Oblique<float>(Matrix44T<float>&, Matrix44T<float> const&, Vector4T<float> const&)
    Matrix44T* Matrix44Oblique<float>(Matrix44T* param_1, Matrix44T* param_2, Vector4T* param_3) {
        int iVar1;
        Vector4T<float>* pVVar2;
        float* pfVar3;
        Vector4T* extraout_RDX;
        float fVar4;
        undefined4 extraout_XMM0_Dd;
        ImVec4 local_b8[16];
        Matrix44T local_a8;
        undefined8 uStack_70;
        float local_68;
        undefined4 uStack_60;
        float local_4c;
        undefined8 local_48;
        undefined4 uStack_40;
        undefined4 uStack_3c;

        local_a8._0_8_ = *(undefined8*)param_2;
        local_a8._8_8_ = *(undefined8*)&param_2->field_8;
        local_a8._16_8_ = *(undefined8*)&param_2->field_16;
        local_a8._24_8_ = *(undefined8*)&param_2->field_24;
        local_a8._32_8_ = *(undefined8*)&param_2->field_32;
        local_a8._40_8_ = *(undefined8*)&param_2->field_40;
        local_a8._48_8_ = *(undefined8*)&param_2->field_48;
        uStack_70 = *(undefined8*)(param_2 + 1);
        local_a8.Invert(0);
        iVar1 = sign<float>(*(float*)param_3);
        local_48._0_4_ = (float)iVar1;
        iVar1 = sign<float>(*(float*)(param_3 + 4));
        ImVec4::ImVec4(local_b8, (float)local_48, (float)iVar1, 1.0, 1.0);
        Vector4T<float>::operator*=((Vector4T<float>*)local_b8, &local_a8);
        fVar4 = Vector4Dot<float>((math*)param_3, (Vector4T*)local_b8, extraout_RDX);
        fVar4 = 2.0 / fVar4;
        local_48 = operator*(param_3, fVar4);
        local_68 = fVar4;
        uStack_60 = 0;
        uStack_3c = extraout_XMM0_Dd;
        Matrix44T<float>::operator=((Matrix44T<float>*)param_1, param_2);
        pVVar2 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_2, 0);
        pfVar3 = (float*)Vector4T<float>::operator[](pVVar2, 3);
        local_4c = (float)local_48 - *pfVar3;
        pVVar2 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 0);
        pfVar3 = (float*)Vector4T<float>::operator[](pVVar2, 2);
        *pfVar3 = local_4c;
        local_48._0_4_ = local_48._4_4_;
        uStack_40 = uStack_3c;
        pVVar2 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_2, 1);
        pfVar3 = (float*)Vector4T<float>::operator[](pVVar2, 3);
        local_48._0_4_ = (float)local_48 - *pfVar3;
        pVVar2 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 1);
        pfVar3 = (float*)Vector4T<float>::operator[](pVVar2, 2);
        *pfVar3 = (float)local_48;
        pVVar2 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_2, 2);
        pfVar3 = (float*)Vector4T<float>::operator[](pVVar2, 3);
        local_48._0_4_ = local_68 - *pfVar3;
        pVVar2 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 2);
        pfVar3 = (float*)Vector4T<float>::operator[](pVVar2, 2);
        *pfVar3 = (float)local_48;
        local_48._0_4_ = 0.0;
        local_48._4_4_ = 0.0;
        uStack_40 = 0;
        uStack_3c = 0;
        pVVar2 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_2, 3);
        pfVar3 = (float*)Vector4T<float>::operator[](pVVar2, 3);
        local_48._0_4_ = (float)local_48 - *pfVar3;
        pVVar2 = (Vector4T<float>*)Matrix44T<float>::operator[]((Matrix44T<float>*)param_1, 3);
        pfVar3 = (float*)Vector4T<float>::operator[](pVVar2, 2);
        *pfVar3 = (float)local_48;
        return param_1;
    }

} // namespace jag::math
