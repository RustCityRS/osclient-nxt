// libs/graphics/view/ViewTransforms.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.view

#include "ViewTransforms.h"

namespace jag {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    ViewTransforms::GetCameraPos() const;

    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    ViewTransforms::GetViewMatrix() const;

    // 0x100102fc0: the linker folded this into oldscape::rs2lib::InputField::GetPlaceholderContents() const, which has identical code
    ViewTransforms::GetProjMatrix() const;

    // 0x1001d07b0: the linker folded this into ViewTransforms::operator=(ViewTransforms const&), which has identical code
    ViewTransforms::operator=(ViewTransforms&&);

    // 0x100414cb0: the linker folded this into math::Transitionable<graphics::IrradianceSHCoefConsts>::GetEndValue(), which has identical code
    ViewTransforms::GetViewProjMatrix() const;

    // 0x100468c10: the linker folded this into graphics::SkyBoxRenderer::SetNonObliqueProjectionMatrix(math::Matrix44T<float> const&), which has identical code
    ViewTransforms::SetProjMatrix(math::Matrix44T<float> const&);

    // 0x1009dcf30, 400 bytes, placed by class name and debug map
    // ViewTransforms::Set(Camera const&)
    void ViewTransforms::Set(Camera* param_1) {
        undefined4 uVar2;
        Vector3T* pVVar3;
        QuaternionT* pQVar4;
        Matrix44T* pMVar5;
        Matrix44T* pMVar6;
        undefined1 local_a8[104];
        undefined4 local_40;
        undefined4 local_3c;
        undefined4 local_38;
        undefined4 local_34;
        undefined4 local_30;
        undefined4 local_2c;

        pVVar3 = (Vector3T*)param_1->GetPos();
        SetXYZ(pVVar3);
        pQVar4 = (QuaternionT*)param_1->GetStats();
        new ((local_a8 + 64)) math::Matrix33T<float>(pQVar4);
        pVVar3 = (Vector3T*)param_1->GetPos();
        math::Matrix44View<float>((Matrix44T*)&field_16, (Matrix33T<float>*)(local_a8 + 64), pVVar3);
        if (param_1->GetPos() == 0) {
            local_38 = param_1->GetOutlineRadiusAdjustment();
            local_34 = param_1->GetAmbientLight();
            local_30 = param_1->GetGameScale();
            local_2c = param_1->GetFarClip();
            uVar2 = param_1->GetID();
            math::Matrix44PerspectiveFovLH<float>(local_38, local_34, local_30, local_2c, &field_80, uVar2);
        } else {
            local_38 = param_1->GetFogDepthAngleFalloff();
            local_34 = param_1->GetRightClip();
            local_30 = param_1->GetMainRenderTargetScaleFactor();
            local_2c = param_1->GetEnvMapIrradianceScale();
            local_40 = param_1->GetGameScale();
            local_3c = param_1->GetFarClip();
            uVar2 = param_1->GetID();
            math::Matrix44OrthographicLH<float>(local_38, local_34, local_30, local_2c, local_40, local_3c, &field_80,
                                                uVar2);
        }
        pMVar5 = (Matrix44T*)GetScreen();
        pMVar6 = (Matrix44T*)GetOrigin();
        math::operator*((math*)local_a8, pMVar5, pMVar6);
        math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_144, (Matrix44T*)local_a8);
    }

    // 0x1009dd0c0, 208 bytes, placed by class name and debug map
    // ViewTransforms::Set(math::Matrix44T<float> const&, math::Matrix44T<float> const&)
    void ViewTransforms::Set(Matrix44T* param_1, Matrix44T* param_2) {
        Matrix33T* pMVar1;
        undefined1 local_98[64];
        undefined8 local_58;
        undefined8 local_48[2];
        undefined1 local_38[16];

        local_38._0_8_ = param_1->GetPos();
        local_48[0] = math::operator-((math*)local_38, (Vector3T*)param_1);
        local_98->GetRot();
        pMVar1 = (Matrix33T*)local_98->Invert(0);
        local_58 = math::operator*((Vector3T*)local_48, pMVar1);
        SetXYZ((Vector3T*)&local_58);
        math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_16, param_1);
        math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_80, param_2);
        math::operator*((math*)local_98, param_1, param_2);
        math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_144, (Matrix44T*)local_98);
    }

    // 0x1009dd520, 64 bytes, placed by class name and debug map
    // ViewTransforms::SetToIdentity()
    void ViewTransforms::SetToIdentity() {
        Set(0.0, 0.0, 0.0);
        (&field_16)->SetToIdentity();
        (&field_80)->SetToIdentity();
        (&field_144)->SetToIdentity();
    }

    // 0x1009dd560, 320 bytes, placed by class name and debug map
    // ViewTransforms::GetNearFarPlaneDistances(float&, float&) const
    void ViewTransforms::GetNearFarPlaneDistances(float* param_1, float* param_2) {
        undefined8* puVar1;
        float* pfVar2;
        undefined4 uVar3;
        undefined4 uVar4;
        ImVec4 local_a8[16];
        Matrix44T local_98;
        undefined8 uStack_60;
        undefined8 local_58;
        undefined4 uStack_50;
        undefined4 uStack_4c;
        undefined8 local_48;
        undefined4 uStack_40;
        undefined4 uStack_3c;
        float local_34;

        puVar1 = (undefined8*)GetOrigin();
        local_98._0_8_ = *puVar1;
        local_98._8_8_ = puVar1[1];
        local_98._16_8_ = puVar1[2];
        local_98._24_8_ = puVar1[3];
        local_98._32_8_ = puVar1[4];
        local_98._40_8_ = puVar1[5];
        local_98._48_8_ = puVar1[6];
        uStack_60 = puVar1[7];
        local_98.Invert(0);
        uVar3 = 0;
        uVar4 = 0;
        new (&local_48) ImVec4(0.0, 0.0, -1.0, 1.0);
        local_58 = math::operator*((Vector4T*)&local_48, &local_98);
        uStack_50 = uVar3;
        uStack_4c = uVar4;
        pfVar2 = (float*)local_58.qw();
        local_34 = *pfVar2;
        pfVar2 = (float*)local_58.second();
        *pfVar2 = *pfVar2 / local_34;
        uVar3 = 0;
        uVar4 = 0;
        ImVec4::ImVec4(local_a8, 0.0, 0.0, 1.0, 1.0);
        local_48 = math::operator*((Vector4T*)local_a8, &local_98);
        uStack_40 = uVar3;
        uStack_3c = uVar4;
        pfVar2 = (float*)local_48.qw();
        local_34 = *pfVar2;
        pfVar2 = (float*)local_48.second();
        *pfVar2 = *pfVar2 / local_34;
        pfVar2 = (float*)local_58.second();
        *param_1 = *pfVar2;
        pfVar2 = (float*)local_48.second();
        *param_2 = *pfVar2;
    }

    // 0x1009dd6a0, 96 bytes, placed by class name and debug map
    // ViewTransforms::hash() const
    void ViewTransforms::hash() {
        ulong local_30;
        ulong local_28;
        ulong local_20;
        ulong local_18;

        local_30 = hash();
        local_28 = (&field_16)->hash();
        local_20 = (&field_80)->hash();
        local_18 = (&field_144)->hash();
        hash_val<unsigned long, unsigned long, unsigned long, unsigned long>(&local_30, &local_28, &local_20,
                                                                             &local_18);
    }

    // 0x1009dd700, 48 bytes, inline, placed by debug map only (low confidence)
    // unsigned long hash_val<unsigned long, unsigned long, unsigned long, unsigned long>(unsigned long const&, unsigned long const&, unsigned long const&, unsigned long const&)
    ulong hash_val<unsigned long, unsigned long, unsigned long, unsigned long>(ulong* param_1, ulong* param_2,
                                                                               ulong* param_3, ulong* param_4) {
        ulong local_10;

        local_10 = 0;
        hash_combine<unsigned long, unsigned long, unsigned long, unsigned long>(&local_10, param_1, param_2, param_3,
                                                                                 param_4);
        return local_10;
    }

} // namespace jag
