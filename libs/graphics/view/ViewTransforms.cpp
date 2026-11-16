// libs/graphics/view/ViewTransforms.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.view

#include "ViewTransforms.h"

namespace jag {
    // 0x100009ca0: ViewTransforms::GetCameraPos() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x1000b9950: ViewTransforms::GetViewMatrix() const has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x100102fc0: ViewTransforms::GetProjMatrix() const has the same machine code as oldscape::rs2lib::InputField::GetPlaceholderContents() const

    // 0x1001d07b0: ViewTransforms::operator=(ViewTransforms&&) has the same machine code as ViewTransforms::operator=(ViewTransforms const&)

    // 0x100414cb0: ViewTransforms::GetViewProjMatrix() const has the same machine code as math::Transitionable<graphics::IrradianceSHCoefConsts>::GetEndValue()

    // 0x100468c10: ViewTransforms::SetProjMatrix(math::Matrix44T<float> const&) has the same machine code as graphics::SkyBoxRenderer::SetNonObliqueProjectionMatrix(math::Matrix44T<float> const&)

    // 0x1009dcf30
    void ViewTransforms::Set(const Camera& camera) {
        MATRIX_PROJECTION_RANGE MVar2;
        Matrix44T<float> local_a8;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;
        float local_30;
        float local_2c;

        auto pVVar3 = camera.GetPos();
        SetXYZ(*pVVar3);
        auto quaternion = camera.GetStats();
        Matrix33T<float> local_68(*quaternion);
        pVVar3 = (Vector3T<float>*)camera.GetPos();
        math::Matrix44View<float>(field_16, local_68, *pVVar3);
        if (camera.GetPos() == 0) {
            local_38 = (float)camera.GetOutlineRadiusAdjustment();
            local_34 = (float)camera.GetAmbientLight();
            local_30 = (float)camera.GetGameScale();
            local_2c = (float)camera.GetFarClip();
            MVar2 = camera.GetID();
            math::Matrix44PerspectiveFovLH<float>(*m_projMatrix, local_38, local_34, local_30, local_2c, MVar2);
        } else {
            local_38 = (float)camera.GetFogDepthAngleFalloff();
            local_34 = (float)camera.GetRightClip();
            local_30 = (float)camera.GetMainRenderTargetScaleFactor();
            local_2c = (float)camera.GetEnvMapIrradianceScale();
            local_40 = (float)camera.GetGameScale();
            local_3c = (float)camera.GetFarClip();
            MVar2 = camera.GetID();
            math::Matrix44OrthographicLH<float>(*m_projMatrix, local_38, local_34, local_30, local_2c, local_40,
                                                local_3c, MVar2);
        }
        auto matrix442 = GetScreen();
        GetOrigin();
        local_a8** matrix442;
        field_144 = local_a8;
    }

    // 0x1009dd0c0
    void ViewTransforms::Set(const math::Matrix44T<float>& matrix441, const math::Matrix44T<float>& matrix442) {
        ReturnValue local_98;
        uint64_t local_58[2];
        uint64_t local_48[2];
        uint64_t local_38[2];

        local_38[0] = matrix441.GetPos();
        local_48[0] = math::operator-((Vector3T<float>*)local_38);
        local_98.GetRot();
        ReturnValue* matrix33 = local_98 = math::Matrix33T<float>::Invert(nullptr);
        local_58[0] = *local_48 * *matrix33;
        SetXYZ(*local_58);
        field_16 = matrix441;
        *m_projMatrix = matrix442;
        local_98 matrix441;
        field_144 = local_98;
    }

    // 0x1009dd520
    void ViewTransforms::SetToIdentity() {
        Set(0.0, 0.0, 0.0);
        field_16.SetToIdentity();
        m_projMatrix->SetToIdentity();
        field_144.SetToIdentity();
    }

    // 0x1009dd560
    void ViewTransforms::GetNearFarPlaneDistances(float& arg1, float& arg2) const {
        uint64_t local_48;

        ReturnValue* pRVar1 = (ReturnValue*)GetOrigin();
        ReturnValue local_98 = *pRVar1;
        ReturnValue RStack_90 = pRVar1[1];
        ReturnValue local_88 = pRVar1[2];
        ReturnValue RStack_80 = pRVar1[3];
        ReturnValue local_78 = pRVar1[4];
        ReturnValue RStack_70 = pRVar1[5];
        ReturnValue local_68 = pRVar1[6];
        ReturnValue RStack_60 = pRVar1[7];
        local_98 = math::Matrix44T<float>::Invert(nullptr);
        uint32_t uVar3 = 0;
        uint32_t uVar4 = 0;
        new (&local_48) ImVec4(0.0, 0.0, -1.0, 1.0);
        uint64_t local_58 = local_48 * local_98;
        uint32_t uStack_50 = uVar3;
        uint32_t uStack_4c = uVar4;
        auto pfVar2 = local_58.qw();
        float local_34 = *pfVar2;
        pfVar2 = (float*)local_58.second();
        *pfVar2 = *pfVar2 / local_34;
        uVar3 = 0;
        uVar4 = 0;
        ImVec4 local_a8(0.0, 0.0, 1.0, 1.0);
        local_48 = local_a8 * local_98;
        uint32_t uStack_40 = uVar3;
        uint32_t uStack_3c = uVar4;
        pfVar2 = (float*)local_48.qw();
        local_34 = *pfVar2;
        pfVar2 = (float*)local_48.second();
        *pfVar2 = *pfVar2 / local_34;
        pfVar2 = (float*)local_58.second();
        arg1 = *pfVar2;
        pfVar2 = (float*)local_48.second();
        arg2 = *pfVar2;
    }

    // 0x1009dd6a0
    void ViewTransforms::hash() const {
        unsigned long local_30 = hash();
        unsigned long local_28 = field_16.hash();
        unsigned long local_20 = m_projMatrix->hash();
        unsigned long local_18 = field_144.hash();
        hash_val<unsigned long, unsigned long, unsigned long, unsigned long>(&local_30, &local_28, &local_20,
                                                                             &local_18);
    }

    // 0x1009dd700
    unsigned long hash_val<unsigned long, unsigned long, unsigned long, unsigned long>(const unsigned long& arg1,
                                                                                       const unsigned long& arg2,
                                                                                       const unsigned long& arg3,
                                                                                       const unsigned long& arg4) {

        return local_10 = 0;
        hash_combine<unsigned long, unsigned long, unsigned long, unsigned long>(&local_10, arg1, arg2, arg3, arg4);
        return local_10;
    }

} // namespace jag
