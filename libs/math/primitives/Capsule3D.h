// libs/math/primitives/Capsule3D.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics

namespace jag::math {
    class Capsule3D {
    public:
        GetStartPoint() const;
        GetEndPoint() const;
        float GetRadius() const;
        void GetCylinderLength() const;
        SetEndPoint(Vector3T<float> const&);
        Capsule3D(Vector3T<float> const&, Vector3T<float> const&, float);
        GetTransform() const;
        GetUpDirection() const;
        void GetCentrePos() const;
        float GetRadiusSq() const;

        // data members, from how the methods use this: 36 bytes
        float field_0;         // offset 0
        float field_4;         // offset 4
        float field_8;         // offset 8
        undefined4 field_12;   // offset 12
        undefined8 m_endPoint; // offset 16
        undefined4 field_24;   // offset 24
        float m_radius;        // offset 28
        char _unknown_32[4];
    };

    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    Capsule3D::GetStartPoint() const;

    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    Capsule3D::GetEndPoint() const;

    // 0x10048fce0: the linker folded this into game::EnvLightingSettings::GetSpecularHorzOcclusionScale() const, which has identical code
    float Capsule3D::GetRadius() const;

    // 0x1007b0f80, 48 bytes, inline, placed by class name and debug map
    // Capsule3D::GetCylinderLength() const
    void Capsule3D::GetCylinderLength() {
        undefined8 local_18[2];

        local_18[0] = math::operator-((Vector3T*)this, (Vector3T*)&m_endPoint);
        local_18->Length();
    }

    // 0x1007b1020, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Capsule3D::SetEndPoint(Vector3T<float> const&)
    /* OBB::SetHalfSize(Vector3T<float> const&) */

    void OBB::SetHalfSize(Vector3T* param_1) {
        (&m_halfSize, param_1)->SetXYZ();
    }

    // 0x1007b14d0, 112 bytes, inline, placed by debug map only (low confidence)
    // Matrix33T<float> Matrix33LookAt<float>(Vector3T<float> const&, Vector3T<float> const&)
    Vector3T* Matrix33LookAt<float>(Vector3T* param_1, Vector3T* param_2) {
        Vector3T* in_RDX;
        undefined8 local_40[2];
        ColourHSL local_30;

        new (param_1) Matrix33T<float>();
        local_40[0] = operator-(in_RDX, param_2);
        new (&local_30) ColourHSL(0.0, 1.0, 0.0);
        Matrix33T<float>::LookAt(local_30._0_8_, local_30.field_8, param_1, local_40);
        return param_1;
    }

    // 0x1009bfd40, 160 bytes, inline, placed by class name
    // Capsule3D::GetTransform() const
    Capsule3D* Capsule3D::GetTransform() {
        Vector4T<float>* pVVar1;
        Matrix33T<float> local_58[40];
        undefined8 local_30[2];

        Matrix33T<float>::Matrix33T(local_58);
        local_30[0] = GetUpDirection();
        pVVar1 = (Vector4T<float>*)local_58->qw();
        Vector4T<float>::SetXYZ(pVVar1, (Vector3T*)local_30);
        pVVar1 = (Vector4T<float>*)local_58->second();
        Vector4T<float>::SetXYZ(pVVar1, (Vector3T*)PTR_LOOK_100ee66e0);
        local_58->Orthonormalise(local_58);
        local_30[0] = GetCentrePos();
        new (this) Matrix44T<float>(local_58, local_30);
        return this;
    }

    // 0x1009cbfe0, 96 bytes, inline, placed by class name
    // Capsule3D::GetUpDirection() const
    undefined8 Capsule3D::GetUpDirection() {
        Vector3T* in_RDI;
        undefined8 local_18[2];

        local_18[0] = math::operator-(in_RDI, in_RDI + 16);
        if ((float)local_18->Length() <= 1e-06) {
            local_18->SetXYZ(PTR_UP_100ee66d0);
        }
        local_18->Normalize();
        return local_18[0];
    }

    // 0x1009cc040, 64 bytes, inline, placed by class name
    // Capsule3D::GetCentrePos() const
    void Capsule3D::GetCentrePos() {
        Vector3T* in_RDI;
        undefined8 local_18[2];

        local_18[0] = math::operator+(in_RDI, in_RDI + 16);
        math::operator*((Vector3T*)local_18, 0.5);
    }

    // 0x100c6b6a0, 48 bytes, inline, placed by class name
    // Capsule3D::GetRadiusSq() const
    float Capsule3D::GetRadiusSq() {
        float fVar1;

        fVar1 = (float)GetMainRenderTargetScaleFactor();
        return (float)GetMainRenderTargetScaleFactor() * fVar1;
    }

} // namespace jag::math

namespace jag::graphics {
    class SortKeyLessThan {
    public:
        SortKeyLessThan(RenderPassType);
        operator()(DrawableElementInfo const&, DrawableElementInfo const&) const;

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    class UserKeyUtils {
    public:
        ulong GetUserBits(unsigned long long);
        ulong SetUserBits(unsigned long long, unsigned long long);
    };

    // 0x1007b11b0, 256 bytes, inline, placed by debug map only (low confidence)
    // ConstructDirLightShadowVolumeCapsule(math::OBB const&, math::Vector3T<float> const&)
    OBB* ConstructDirLightShadowVolumeCapsule(OBB* param_1, Vector3T* param_2) {
        vector* pvVar1;
        float* pfVar2;
        vector* pvVar3;
        Vector3T* in_RDX;
        Vector3T* pVVar4;
        float fVar5;
        undefined8 local_50;
        float local_48;
        undefined8 local_40;
        float local_38;
        float local_34;

        pVVar4 = param_2;
        pvVar1 = param_2->SSOBeginPtr(param_2);
        pfVar2 = (float*)pvVar1->y();
        local_34 = *pfVar2;
        local_40 = math::operator-((math*)PTR_UP_100ee66d0, pVVar4);
        pVVar4 = (Vector3T*)&local_40;
        fVar5 = math::Vector3Dot<float>(in_RDX, pVVar4);
        local_34 = (float)fabs(local_34 / fVar5);
        fVar5 = (1.0 - SunShadowPassVisTestFunctor::m_shadowCasterVolumeRadiusScale) * local_34;
        local_34 = local_34 + fVar5;
        pvVar1 = param_2->SSOBeginPtr(pVVar4);
        pvVar3 = param_2->SSOBeginPtr(pVVar4);
        local_50 = math::operator*(in_RDX, local_34);
        local_48 = fVar5;
        local_40 = math::operator+((Vector3T*)pvVar3, (Vector3T*)&local_50);
        local_38 = fVar5;
        fVar5 = (float)param_2->GetMaximumRadius();
        new (param_1) math::Capsule3D(pvVar1, (Vector3T*)&local_40,
                                      fVar5 * SunShadowPassVisTestFunctor::m_shadowCasterVolumeRadiusScale);
        return param_1;
    }

    // 0x1007b12c0, 528 bytes, placed by debug map only (low confidence)
    // PointLightShadowPassVisTestFunctor::operator()(std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum const&, int, math::AABB const&, math::OBB const&) const
    /* PointLightShadowPassVisTestFunctor::TEMPNAMEPLACEHOLDERVALUE(std::array<math::IntersectionType,
   10ul>&, math::Frustum&, math::Frustum const&, int, math::AABB const&,
   math::OBB const&) const */

    bool PointLightShadowPassVisTestFunctor::operator()(array* param_1, Frustum* param_2, Frustum* param_3, int param_4,
                                                        AABB* param_5, OBB* param_6) {
        char cVar1;
        char* pcVar2;
        vector* pvVar3;
        vector* pvVar4;
        math* this_00;
        Frustum* this_01;
        long* plVar5;
        type* ptVar6;
        EntityHighlightGlobalState* pEVar7;
        EntityHighlightGlobalState* this_02;
        float fVar8;
        Frustum local_148;
        Vector3T local_a0[40];
        undefined1 local_78[16];
        undefined1 local_68[32];
        SideBarData local_40;

        cVar1 = param_3->TestIntersection(param_6);
        ptVar6 = (type*)(long)param_4;
        pcVar2 = (char*)std::array<math::IntersectionType, 10ul>::operator[](
            (array<math::IntersectionType, 10ul>*)param_1, (ulong)ptVar6);
        *pcVar2 = cVar1;
        if (cVar1 != '\0') {
            pvVar3 = eastl::string::Layout::SSOBeginPtr(field_0, ptVar6);
            pvVar3 = pvVar3->SSOBeginPtr(ptVar6);
            fVar8 = (float)field_16->GetOutlineRadiusAdjustment();
            new (local_68) math::Sphere(pvVar3, fVar8);
            this_02 = (EntityHighlightGlobalState*)local_78;
            new (this_02) math::Sphere();
            pEVar7 = this_02;
            param_5->GetMinimumEnclosingSphere(this_02);
            pvVar3 = local_68->SSOBeginPtr(pEVar7);
            this_02->SSOBeginPtr(pEVar7);
            math::Matrix33LookAt<float>(local_a0, (Vector3T*)pvVar3);
            pvVar4 = this_02->SSOBeginPtr(pvVar3);
            this_00 = (math*)local_a0->second();
            local_40._0_8_ = math::operator-(this_00, (Vector3T*)pvVar3);
            fVar8 = (float)this_02->GetOutlineRadiusAdjustment();
            local_148.field_0 = math::operator*((Vector3T*)&local_40, fVar8);
            local_68._16_8_ = math::operator+((Vector3T*)pvVar4, (Vector3T*)&local_148);
            cVar1 = local_68->TestIntersection(this_02);
            if (cVar1 != '\0') {
                pvVar3 = local_68->SSOBeginPtr(this_02);
                cVar1 = local_78->IsInside(pvVar3);
                if (cVar1 != '\0') {
                    return true;
                }
                new (&local_148) math::Frustum();
                ConstructShadowProjectionFrustum(&local_148, (Sphere*)local_78, local_a0, (Vector3T*)(local_68 + 16),
                                                 (Sphere*)local_68);
                this_01 = (Frustum*)field_8->GetTranslation();
                cVar1 = this_01->TestIntersection(&local_148);
                if (((m_showPointLightShadowCasterFrustums != '\0') && (cVar1 != '\0')) &&
                    (plVar5 = (long*)DebugPrimitiveCollectorBasic::GetCollector(""), plVar5 != (long*)0)) {
                    new (&local_40) oldscape::sidebars::SideBarData(-16711936, 2);
                    (**(code**)(*plVar5 + 96))(plVar5, &local_148, PTR_IDENTITY_100ee6730, &local_40);
                }
                math::Frustum::operator=(param_2, &local_148);
                return m_shadowCasterVolumeCulling == '\0' || cVar1 != '\0';
            }
        }
        return false;
    }

} // namespace jag::graphics
