// libs/math/primitives/Capsule3D.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.graphics

namespace jag::math {
    class Capsule3D {
    public:
        void GetStartPoint() const;
        uint8_t* GetEndPoint() const;
        float GetRadius() const;
        void GetCylinderLength() const;
        void SetEndPoint(const Vector3T<float>& vector3);
        Capsule3D(const Vector3T<float>& vector31, const Vector3T<float>& vector32, float arg3);
        Capsule3D* GetTransform() const;
        ReturnValue GetUpDirection() const;
        void GetCentrePos() const;
        float GetRadiusSq() const;

    private:
        float field_0;
        float field_4;
        float field_8;
        uint32_t field_12;
        uint64_t m_endPoint;
        uint32_t field_24;
        float m_radius;
        uint8_t _unknown_32[4];
    };

    // 0x100009ca0: Capsule3D::GetStartPoint() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x1000b9950: Capsule3D::GetEndPoint() const has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x10048fce0: Capsule3D::GetRadius() const has the same machine code as game::EnvLightingSettings::GetSpecularHorzOcclusionScale() const

    // 0x1007b0f80
    void Capsule3D::GetCylinderLength() const {
        uint64_t local_18[2];

        local_18[0] = *this - m_endPoint;
        local_18->Length();
    }

    // 0x1007b1020
    void Capsule3D::SetEndPoint(const Vector3T<float>& vector3) {
        m_halfSize.SetXYZ(vector3);
    }

    // 0x1007b14d0
    Matrix33T<float> Matrix33LookAt<float>(const Vector3T<float>& vector31, const Vector3T<float>& vector32) {
        Vector3T<float>* in_RDX;
        uint64_t local_40[2];

        new (vector31) Matrix33T<float>();
        local_40[0] = *in_RDX - vector32;
        ColourHSL local_30(0.0, 1.0, 0.0);
        Matrix33T<float>::LookAt(vector31, local_40);
        return vector31;
    }

    // 0x1009bfd40
    Capsule3D* Capsule3D::GetTransform() const {
        Capsule3D* in_RSI;
        uint64_t local_30[2];

        Matrix33T<float> local_58;
        local_30[0] = GetUpDirection(in_RSI);
        auto pVVar1 = local_58.qw();
        pVVar1->SetXYZ(*local_30);
        pVVar1 = (Vector4T<float>*)local_58.second();
        pVVar1->SetXYZ(*PTR_LOOK_100ee66e0);
        local_58.Orthonormalise(local_58);
        local_30[0] = GetCentrePos(in_RSI);
        new (this) Matrix44T<float>(local_58, *local_30);
        return this;
    }

    // 0x1009cbfe0
    ReturnValue Capsule3D::GetUpDirection() const {

        local_18[0] = (ReturnValue) * this - m_endPoint;
        if ((float)local_18.Length() <= 1e-06) {
            local_18.SetXYZ(*PTR_UP_100ee66d0);
        }
        return local_18 = Vector3T<float>::Normalize();
        return local_18[0];
    }

    // 0x1009cc040
    void Capsule3D::GetCentrePos() const {
        uint64_t local_18[2];

        local_18[0] = *this + m_endPoint;
        *0.5 * *local_18;
    }

    // 0x100c6b6a0
    float Capsule3D::GetRadiusSq() const {
        float fVar1 = (float)GetMainRenderTargetScaleFactor();
        return (float)GetMainRenderTargetScaleFactor() * fVar1;
    }

} // namespace jag::math

namespace jag::graphics {
    class SortKeyLessThan {
    public:
        SortKeyLessThan(RenderPassType arg1);
        SortKeyLessThan(RenderPassType resultType);
        uint64_t operator()(const DrawableElementInfo& drawableElementInfo1,
                            const DrawableElementInfo& drawableElementInfo2) const;

        uint8_t _unknown_0[1];
    };

    class UserKeyUtils {
    public:
        unsigned long GetUserBits(unsigned long long arg1);
        unique_ptr<DrawableElement, DrawableElementDeleter>* SetUserBits(unsigned long long arg1,
                                                                         unsigned long long arg2);
    };

    // 0x1007b11b0
    OBB* ConstructDirLightShadowVolumeCapsule(const math::OBB& obb, const math::Vector3T<float>& vector3) {
        Vector3T<float>* in_RDX;

        auto vector2T = vector3.SSOBeginPtr();
        auto pfVar1 = vector2T->y();
        float local_34 = *pfVar1;
        uint64_t local_40 = math::operator-((Vector3T<float>*)PTR_UP_100ee66d0);
        float fVar2 = math::Vector3Dot<float>(*in_RDX, local_40);
        local_34 = (float)fabs(local_34 / fVar2);
        fVar2 = (1.0 - SunShadowPassVisTestFunctor::m_shadowCasterVolumeRadiusScale) * local_34;
        local_34 = local_34 + fVar2;
        auto vector31 = vector3.SSOBeginPtr();
        auto vector31_00 = vector3.SSOBeginPtr();
        uint64_t local_50 = *local_34 * *in_RDX;
        float local_48 = fVar2;
        local_40 = *vector31_00 + local_50;
        float local_38 = fVar2;
        fVar2 = (float)vector3.GetMaximumRadius();
        new (obb)
            math::Capsule3D(*vector31, local_40, fVar2 * SunShadowPassVisTestFunctor::m_shadowCasterVolumeRadiusScale);
        return obb;
    }

    // 0x1007b12c0
    bool PointLightShadowPassVisTestFunctor::operator()(std::array<math::IntersectionType, 10ul>& intersectionTypes,
                                                        math::Frustum& frustum1, const math::Frustum& frustum2,
                                                        int arg4, const math::AABB& aabb, const math::OBB& obb) const {
        Layout* this_00;
        Vector3T<float>* pVVar3;
        long* plVar4;
        float fVar5;
        Frustum local_148;
        Vector3T<float> local_a0;
        uint8_t local_78[16];
        uint8_t local_68[32];
        SideBarData local_40;

        char cVar1 = frustum2.TestIntersection(obb);
        char* pcVar2 = &intersectionTypes[(long)arg4];
        *pcVar2 = cVar1;
        if (cVar1) {
            this_00 = (Layout*)field_0->SSOBeginPtr();
            pVVar3 = (Vector3T<float>*)this_00->SSOBeginPtr();
            fVar5 = (float)field_16->GetOutlineRadiusAdjustment();
            new (local_68) math::Sphere(*pVVar3, fVar5);
            new (local_78) math::Sphere();
            aabb.GetMinimumEnclosingSphere(*local_78);
            pVVar3 = (Vector3T<float>*)local_68->SSOBeginPtr();
            local_78->SSOBeginPtr();
            math::Matrix33LookAt<float>(local_a0, *pVVar3);
            pVVar3 = (Vector3T<float>*)local_78->SSOBeginPtr();
            local_40._0_8_ = math::operator-((Vector3T<float>*)local_a0.second());
            fVar5 = (float)local_78->GetOutlineRadiusAdjustment();
            local_148.field_0 = *fVar5 * local_40;
            local_68._16_8_ = *pVVar3 + local_148;
            cVar1 = local_68->TestIntersection(*local_78);
            if (cVar1) {
                pVVar3 = (Vector3T<float>*)local_68->SSOBeginPtr();
                cVar1 = local_78->IsInside(*pVVar3);
                if (cVar1) {
                    return true;
                }
                local_148 = math::Frustum();
                ConstructShadowProjectionFrustum(&local_148, (Sphere*)local_78, &local_a0,
                                                 (Vector3T<float>*)(local_68 + 16), (Sphere*)local_68);
                cVar1 = ((Frustum*)field_8->GetTranslation())->TestIntersection(local_148);
                if (((m_showPointLightShadowCasterFrustums != '\0') && (cVar1)) &&
                    (plVar4 = DebugPrimitiveCollectorBasic::GetCollector(""), plVar4 != nullptr)) {
                    local_40 = oldscape::sidebars::SideBarData(-16711936, 2);
                    (**(void (**)(...))(*plVar4 + 96))(plVar4, &local_148, PTR_IDENTITY_100ee6730, &local_40);
                }
                frustum1 = local_148;
                return m_shadowCasterVolumeCulling == '\0' || cVar1;
            }
        }
        return false;
    }

} // namespace jag::graphics
