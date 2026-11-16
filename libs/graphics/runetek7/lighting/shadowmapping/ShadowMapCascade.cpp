// libs/graphics/runetek7/lighting/shadowmapping/ShadowMapCascade.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ShadowMapCascade.h"

namespace jag::graphics {
    // 0x10005cf50: the linker folded this into oldscape::OSClientConsole::GetCommandLineObject(), which has identical code
    ShadowMapCascade::GetLightOrthProjMax() const;

    // 0x1001d0810: the linker folded this into SunlightShadows::GetSunlightCsmManager(), which has identical code
    ShadowMapCascade::GetWorldOBB() const;

    // 0x1002eeed0: the linker folded this into Model::GetLabelCentres() const, which has identical code
    ShadowMapCascade::GetLightOrthProjMin() const;

    // 0x1008ab4e0, 1488 bytes, placed by class name and debug map
    // ShadowMapCascade::SetFrustum(ViewTransforms const&, float, float, math::Matrix44T<float> const&)
    void ShadowMapCascade::SetFrustum(ViewTransforms* param_1, float param_2, float param_3, Matrix44T* param_4) {
        undefined1* puVar1;
        undefined1* this_00;
        double dVar2;
        ulong uVar3;
        undefined8* puVar4;
        Matrix44T* pMVar5;
        long lVar6;
        int* piVar7;
        float* pfVar8;
        vector* pvVar9;
        undefined4* puVar10;
        Vector3T<double>* this_01;
        Vector4T<double>* this_02;
        float fVar11;
        undefined4 uVar12;
        uint extraout_XMM0_Dc;
        uint extraout_XMM0_Dc_00;
        uint extraout_XMM0_Dd;
        uint extraout_XMM0_Dd_00;
        array<math::Vector4T<float>, 8ul> local_2d8[128];
        undefined1 local_258[48];
        Matrix44T local_228;
        Matrix44T local_1e8;
        undefined8 uStack_1b0;
        Matrix44T local_1a8;
        undefined8 uStack_170;
        Vector3T<double> local_160[24];
        undefined1 local_148[64];
        undefined1 local_108[64];
        Vector4T<float> local_c8[16];
        Vector4T<float> local_b8[16];
        undefined1 local_a8[32];
        undefined8 local_88;
        undefined8 uStack_80;
        undefined8 local_78;
        undefined4 local_64;
        undefined4 local_60;
        undefined4 local_5c;
        double local_58;
        uint uStack_50;
        uint uStack_4c;
        double local_48;
        uint uStack_40;
        uint uStack_3c;
        Matrix44T* local_38;

        field_808 = param_2;
        field_812 = param_3;
        local_38 = param_4;
        puVar4 = (undefined8*)param_1->GetScreen();
        local_1e8._0_8_ = *puVar4;
        local_1e8._8_8_ = puVar4[1];
        local_1e8._16_8_ = puVar4[2];
        local_1e8._24_8_ = puVar4[3];
        local_1e8._32_8_ = puVar4[4];
        local_1e8._40_8_ = puVar4[5];
        local_1e8._48_8_ = puVar4[6];
        uStack_1b0 = puVar4[7];
        local_1a8._0_8_ = local_1e8._0_8_;
        local_1a8._8_8_ = local_1e8._8_8_;
        local_1a8._16_8_ = local_1e8._16_8_;
        local_1a8._24_8_ = local_1e8._24_8_;
        local_1a8._32_8_ = local_1e8._32_8_;
        local_1a8._40_8_ = local_1e8._40_8_;
        local_1a8._48_8_ = local_1e8._48_8_;
        uStack_170 = uStack_1b0;
        local_1a8.Invert(0);
        std::array<math::Vector4T<float>, 8ul>::array(local_2d8);
        local_58 = (double)CONCAT44(local_58._4_4_, field_808);
        local_48 = (double)CONCAT44(local_48._4_4_, field_812);
        pMVar5 = (Matrix44T*)param_1->GetOrigin();
        fVar11 = local_48._0_4_;
        CreateFrustumPointsFromCascadeInterval((array*)local_2d8, local_58._0_4_, local_48._0_4_, pMVar5);
        puVar1 = &field_1136;
        CreateFrustumBoundingSphere((Sphere*)puVar1, (array*)local_2d8);
        puVar1->Transform(&local_1a8);
        math::Vector4T<float>::Vector4T(local_c8);
        math::Vector4T<float>::Vector4T(local_b8);
        pMVar5 = local_38;
        CreateLightSpaceFrustumAABB((Vector4T*)local_c8, (Vector4T*)local_b8, (array*)local_2d8, &local_1e8, local_38);
        new (&local_228) math::Matrix44T<float>();
        lVar6 = field_800->GetHeadList();
        piVar7 = (int*)std::array<LightProjectionFit, 4ul>::operator[]((array<LightProjectionFit, 4ul>*)(lVar6 + 80),
                                                                       (long)field_796);
        if (*piVar7 == 2) {
            local_108._0_8_ = puVar1->GetAABBMin();
            local_108._8_4_ = fVar11;
            local_a8._0_8_ = puVar1->GetAABBMax();
            local_a8._8_4_ = fVar11;
            new (local_148) math::AABB(local_108, local_a8);
            pfVar8 = (float*)math::Matrix44T<float>::operator()((Matrix44T<float>*)pMVar5, 2);
            local_58 = (double)*pfVar8;
            pfVar8 = (float*)math::Matrix44T<float>::operator()((Matrix44T<float>*)pMVar5, 6);
            local_48 = (double)*pfVar8;
            pfVar8 = (float*)math::Matrix44T<float>::operator()((Matrix44T<float>*)pMVar5, 10);
            this_01 = (Vector3T<double>*)local_a8;
            math::Vector3T<double>::Vector3T(this_01, local_58, local_48, (double)*pfVar8);
            local_78 = *(undefined8*)(PTR_UP_100ee66b0 + 16);
            local_88 = *(undefined8*)PTR_UP_100ee66b0;
            uStack_80 = *(undefined8*)(PTR_UP_100ee66b0 + 8);
            dVar2 = math::Vector3Dot<double>((Vector3T*)&local_88, (Vector3T*)this_01);
            dVar2 = (double)::abs(dVar2);
            if (1.0 < dVar2 + 1.192092896e-07) {
                this_01 = (Vector3T<double>*)PTR_RIGHT_100ee66c8;
                math::Vector3T<double>::operator=((Vector3T<double>*)&local_88, (Vector3T*)PTR_RIGHT_100ee66c8);
            }
            pvVar9 = puVar1->SSOBeginPtr(this_01);
            math::Vector3T<double>::Vector3T<float>(local_160, (Vector3T*)pvVar9);
            new (local_108) math::Vector4T<double>(local_160, 1.0);
            this_02 = (Vector4T<double>*)local_160;
            this_02->GetXYZ();
            ((local_258 + 24))->GetXYZ();
            math::operator+((math*)local_258, (Vector3T*)(local_258 + 24), (Vector3T*)local_a8);
            math::Matrix44LookAtLH<float>(&local_228, (Vector3T*)this_02, (Vector3T*)local_258, (Vector3T*)&local_88);
            uVar3 = puVar1->GetOutlineRadiusAdjustment();
            uStack_50 = extraout_XMM0_Dc ^ 2147483648;
            uStack_4c = extraout_XMM0_Dd ^ 2147483648;
            local_58 = (double)(uVar3 ^ 9223372039002259456);
            uVar3 = puVar1->GetOutlineRadiusAdjustment();
            uStack_40 = extraout_XMM0_Dc_00 ^ 2147483648;
            uStack_3c = extraout_XMM0_Dd_00 ^ 2147483648;
            local_48 = (double)(uVar3 ^ 9223372039002259456);
            fVar11 = (float)puVar1->GetOutlineRadiusAdjustment();
            (&field_816, local_58._0_4_, local_48._0_4_, -fVar11, 1.0)->Set();
            uVar12 = puVar1->GetOutlineRadiusAdjustment();
            local_58 = (double)CONCAT44(local_58._4_4_, uVar12);
            uVar12 = puVar1->GetOutlineRadiusAdjustment();
            local_48 = (double)CONCAT44(local_48._4_4_, uVar12);
            fVar11 = (float)puVar1->GetOutlineRadiusAdjustment();
            (&field_832, local_58._0_4_, local_48._0_4_, fVar11, 1.0)->Set();
            pMVar5 = local_38;
        } else {
            math::Matrix44T<float>::operator=((Matrix44T<float>*)&local_228, pMVar5);
            local_148._0_8_ = local_c8->GetXYZ();
            local_148._8_4_ = fVar11;
            (&field_816, (Vector3T*)local_148, 1.0)->Set();
            local_148._0_8_ = local_b8->GetXYZ();
            this_02 = (Vector4T<double>*)local_148;
            local_148._8_4_ = fVar11;
            (&field_832, (Vector3T*)this_02, 1.0)->Set();
        }
        lVar6 = field_800->GetHeadList();
        if (0.0 < *(float*)(lVar6 + 52)) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pParentCsmManager->GetConfig().m_LightCamNearClipOffset <= 0.0f",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/ShadowMapCascade.cpp",
                      216, (char*)0);
        }
        new (local_148) math::Matrix44T<float>();
        puVar1 = &field_816;
        pvVar9 = puVar1->SSOBeginPtr(this_02);
        local_58 = (double)CONCAT44(local_58._4_4_, *(undefined4*)pvVar9);
        this_00 = &field_832;
        pvVar9 = this_00->SSOBeginPtr(this_02);
        local_48 = (double)CONCAT44(local_48._4_4_, *(undefined4*)pvVar9);
        puVar10 = (undefined4*)puVar1->y();
        local_64 = *puVar10;
        puVar10 = (undefined4*)this_00->y();
        local_60 = *puVar10;
        pfVar8 = (float*)puVar1->second();
        local_38._0_4_ = *pfVar8;
        lVar6 = field_800->GetHeadList();
        local_38 = (Matrix44T*)CONCAT44(local_38._4_4_, local_38._0_4_ + *(float*)(lVar6 + 52));
        puVar10 = (undefined4*)this_00->second();
        local_5c = *puVar10;
        lVar6 = field_800->GetHeadList();
        uVar12 = local_48._0_4_;
        math::Matrix44OrthographicLH<float>(local_58._0_4_, local_48._0_4_, local_64, local_60, local_38._0_4_,
                                            local_5c, (Matrix44T*)local_148, *(undefined4*)(lVar6 + 100));
        (&field_1184, &local_228, (Matrix44T*)local_148)->Set();
        (&field_848, &local_228, (Matrix44T*)local_148)->Set();
        local_108._0_8_ = local_c8->GetXYZ();
        local_108._8_4_ = uVar12;
        local_88 = local_b8->GetXYZ();
        uStack_80 = CONCAT44(uStack_80._4_4_, uVar12);
        new (local_a8) math::AABB(local_108, (Vector3T*)&local_88);
        (&field_1056, (AABB*)local_a8)->Set();
        new (local_108) math::Matrix44T<float>();
        math::Matrix44Inverse<float>((Matrix44T*)local_108, (float*)0, pMVar5);
        (&field_1056, (Matrix44T*)local_108)->Transform();
    }

    // 0x1008b0450, 256 bytes, base-object constructor, placed by class name
    // ShadowMapCascade::ShadowMapCascade(int, DirLightCsmManager*, render::RenderTargetsManager*, ThreadPool*)
    void ShadowMapCascade::ShadowMapCascade(int param_1, DirLightCsmManager* param_2, RenderTargetsManager* param_3,
                                            ThreadPool* param_4) {
        new (this) ShadowPass(0, param_3);
        field_0 = &PTR__ShadowMapCascade_100f18440;
        field_796 = param_1;
        field_800 = param_2;
        field_808 = 0.0;
        field_812 = 0.0;
        new (&field_816) math::Vector4T<float>();
        new (&field_832) math::Vector4T<float>();
        new (&field_848) ViewTransforms();
        new (&field_1056) math::OBB();
        new (&field_1136) math::Sphere();
        new (&field_1152, 0, 0, 0, 0, 0.0, 1.0) render::Viewport();
        new (&field_1184) math::Frustum();
        m_canRender = false;
        m_clearViewport = false;
        field_1346 = false;
        SetOcclusionTestEnabled(false);
        (&field_16, false)->SetRenderInvalidTransforms();
    }

    // 0x1008b0560, 16 bytes, complete-object constructor, placed by class name
    // ShadowMapCascade::ShadowMapCascade(int, DirLightCsmManager*, render::RenderTargetsManager*, ThreadPool*): jumps straight to the base-object constructor

    // 0x1008b0570, 16 bytes, base-object destructor, placed by class name
    // ShadowMapCascade::~ShadowMapCascade()
    void ShadowMapCascade::~ShadowMapCascade() {
        ~ShadowPass();
    }

    // 0x1008b0580, 16 bytes, complete-object destructor, placed by class name
    // ShadowMapCascade::~ShadowMapCascade(): jumps straight to the base-object destructor

    // 0x1008b0590, 32 bytes, deleting destructor, placed by class name
    // ShadowMapCascade::~ShadowMapCascade()
    void ShadowMapCascade::~ShadowMapCascade() {
        ~ShadowMapCascade(this);
        operator_delete(this);
    }

    // 0x1008b05b0, 448 bytes, placed by class name
    // ShadowMapCascade::BeginPass(render::DrawCallState&, render::RenderContext&, EffectManager&, SceneViewData const&, DrawableQueue const&)
    undefined8 ShadowMapCascade::BeginPass(DrawCallState* param_1, RenderContext* param_2, EffectManager* param_3,
                                           SceneViewData* param_4, DrawableQueue* param_5) {
        RenderTargets* pRVar1;
        uint uVar3;
        Viewport* pVVar4;
        OutputMergerState* this_00;
        undefined8* puVar5;
        long lVar6;
        undefined8* puVar7;
        Texture* pTVar8;
        SunlightDirectLighting* pSVar9;
        Matrix44T* pMVar10;
        undefined4* puVar11;
        float* pfVar12;
        ImVec4* this_02;
        ImVec4 local_58[24];
        EffectManager* local_38;

        local_38 = param_3;
        pVVar4 = (Viewport*)param_1->GetOutputMergerState();
        puVar7 = &field_1152;
        render::OutputMergerState::SetViewports(pVVar4, (uint)puVar7);
        this_00 = (OutputMergerState*)param_1->GetOutputMergerState();
        puVar5 = (undefined8*)param_4->GetRenderTargets();
        this_00->SetRenderTargets((RenderTargets*)*puVar5);
        if (GetClearViewport(this) == '\0') {
            param_2->SetScissorRectangle(false, puVar7);
        } else {
            param_2->SetScissorRectangle(true, puVar7);
            lVar6 = param_2->Instance();
            param_2->SetDepthStencilState((DepthStencilState*)(lVar6 + 720));
            puVar7 = (undefined8*)param_4->GetRenderTargets();
            pRVar1 = (RenderTargets*)*puVar7;
            puVar7 = (undefined8*)param_4->GetRenderTargets();
            pTVar8 = (Texture*)(*puVar7)->GetDepthStencilTargetTexture();
            uVar3 = render::GetDepthTextureClearFlags(pTVar8);
            param_2->ClearDepthStencilTarget(pRVar1, 1.0, 0, uVar3);
            this_02 = local_58;
            ImVec4::ImVec4(local_58, 1.0, 0.0, 0.0, 0.0);
            lVar6 = this_02->Instance();
            param_2->SetBlendState((BlendState*)(lVar6 + 1524));
            puVar7 = (undefined8*)param_4->GetRenderTargets();
            param_2->ClearRenderTargets((RenderTargets*)*puVar7, local_58, 1);
        }
        UpdateLightViewMatrices(this, param_5);
        pSVar9 = EffectManager::GetEffect<SunlightDirectLighting>(local_38, 79);
        pMVar10 = (Matrix44T*)(&field_848)->GetScreen();
        (&field_848)->GetOrigin();
        puVar11 = (undefined4*)(&field_816)->second();
        local_38 = (EffectManager*)CONCAT44(local_38._4_4_, *puVar11);
        pfVar12 = (float*)(&field_832)->second();
        ViewTransformsEffect::SetViewTransforms((Matrix44T*)pSVar9, pMVar10, local_38._0_4_, *pfVar12);
        return 1;
    }

    // 0x1008b0780, 1920 bytes, placed by class name
    // ShadowMapCascade::UpdateLightViewMatrices(DrawableQueue const&)
    void ShadowMapCascade::UpdateLightViewMatrices(DrawableQueue* param_1) {
        undefined1* puVar1;
        DrawableQueue* pDVar2;
        bool bVar3;
        uint uVar4;
        float* pfVar5;
        long lVar6;
        int* piVar7;
        vector* pvVar8;
        Vector3T* pVVar9;
        Vector3T<float>* pVVar10;
        type* ptVar11;
        float* pfVar12;
        undefined4* puVar13;
        Matrix44T* pMVar14;
        Config* this_00;
        Vector3T<float>* pVVar15;
        math* this_01;
        float fVar16;
        uint extraout_XMM0_Dc;
        uint extraout_XMM0_Dc_00;
        uint extraout_XMM0_Dd;
        uint extraout_XMM0_Dd_00;
        undefined1 local_168[32];
        undefined1 local_148[32];
        undefined1 local_128[80];
        ulong local_d8;
        uint uStack_d0;
        uint uStack_cc;
        Vector4T<float> local_c8[16];
        Vector4T<float> local_b8[20];
        float local_a4;
        float local_a0[4];
        QuaternionT<float>* local_90;
        undefined1 local_88[64];
        ulong local_48;
        uint uStack_40;
        uint uStack_3c;
        DrawableQueue* local_38;

        local_90 = (QuaternionT<float>*)&field_816;
        local_38 = param_1;
        local_88._0_8_ = local_90->GetXYZ();
        math::Vector4T<float>::Vector4T(local_c8, (Vector3T*)local_88, 1.0);
        local_128._72_8_ = &field_832;
        local_88._0_8_ = local_128._72_8_->GetXYZ();
        math::Vector4T<float>::Vector4T(local_b8, (Vector3T*)local_88, 1.0);
        pfVar5 = (float*)local_c8->second();
        local_a4 = *pfVar5;
        new (local_88) math::Vector3T<float>(3.4028235e+38);
        new (local_128) math::Vector3T<float>(-3.4028235e+38);
        new (local_168) math::AABB(local_88, local_128);
        new (local_88) math::Vector3T<float>(3.4028235e+38);
        new (local_128) math::Vector3T<float>(-3.4028235e+38);
        new (local_148) math::AABB(local_88, local_128);
        GetDrawablesCasterReceiverAABB(this, &local_a4, (AABB*)local_168, (AABB*)local_148, (Vector4T*)local_c8,
                                       local_38);
        lVar6 = field_800->GetHeadList();
        pVVar15 = (Vector3T<float>*)(long)field_796;
        local_38 = (DrawableQueue*)this;
        piVar7 = (int*)std::array<LightProjectionFit, 4ul>::operator[]((array<LightProjectionFit, 4ul>*)(lVar6 + 80),
                                                                       (ulong)pVVar15);
        if (*piVar7 == 2) {
            puVar1 = &local_38->field_1136;
            local_48 = puVar1->GetOutlineRadiusAdjustment();
            local_48 = local_48 ^ 9223372039002259456;
            uStack_40 = extraout_XMM0_Dc ^ 2147483648;
            uStack_3c = extraout_XMM0_Dd ^ 2147483648;
            local_d8 = puVar1->GetOutlineRadiusAdjustment();
            local_d8 = local_d8 ^ 9223372039002259456;
            uStack_d0 = extraout_XMM0_Dc_00 ^ 2147483648;
            uStack_cc = extraout_XMM0_Dd_00 ^ 2147483648;
            fVar16 = (float)puVar1->GetOutlineRadiusAdjustment();
            local_c8->Set((float)local_48, (float)local_d8, -fVar16, 1.0);
            fVar16 = (float)puVar1->GetOutlineRadiusAdjustment();
            pVVar15 = (Vector3T<float>*)local_88;
            math::Vector3T<float>::Vector3T(pVVar15, fVar16);
            local_128._0_4_ = puVar1->GetOutlineRadiusAdjustment();
            local_a0[0] = (float)local_148->GetMaxZ();
            pfVar5 = std::min<float>((float*)local_128, local_a0);
            local_b8->Set(pVVar15, *pfVar5);
        } else if (*piVar7 == 1) {
            pvVar8 = local_168->SSOBeginPtr(pVVar15);
            pVVar15 = (Vector3T<float>*)local_88;
            math::Vector3T<float>::Vector3T(pVVar15, 3.4028235e+38);
            bVar3 = math::operator==((Vector3T*)pvVar8, (Vector3T*)pVVar15);
            if (bVar3) {
                pvVar8 = local_168->SSOBeginPtr(pVVar15);
                local_88._0_8_ = local_c8->GetXYZ();
                pvVar8->Set(local_88);
            }
            pVVar9 = (Vector3T*)local_168->GetScreen();
            pVVar15 = (Vector3T<float>*)local_88;
            math::Vector3T<float>::Vector3T(pVVar15, -3.4028235e+38);
            bVar3 = math::operator==(pVVar9, (Vector3T*)pVVar15);
            if (bVar3) {
                pVVar10 = (Vector3T<float>*)local_168->GetScreen();
                local_88._0_8_ = local_b8->GetXYZ();
                pVVar15 = (Vector3T<float>*)local_88;
                pVVar10->Set(pVVar15);
            }
            pvVar8 = local_148->SSOBeginPtr(pVVar15);
            pVVar15 = (Vector3T<float>*)local_88;
            math::Vector3T<float>::Vector3T(pVVar15, 3.4028235e+38);
            bVar3 = math::operator==((Vector3T*)pvVar8, (Vector3T*)pVVar15);
            if (bVar3) {
                pvVar8 = local_148->SSOBeginPtr(pVVar15);
                local_88._0_8_ = local_c8->GetXYZ();
                pvVar8->Set(local_88);
            }
            pVVar9 = (Vector3T*)local_148->GetScreen();
            pVVar15 = (Vector3T<float>*)local_88;
            math::Vector3T<float>::Vector3T(pVVar15, -3.4028235e+38);
            bVar3 = math::operator==(pVVar9, (Vector3T*)pVVar15);
            if (bVar3) {
                pVVar10 = (Vector3T<float>*)local_148->GetScreen();
                local_88._0_8_ = local_b8->GetXYZ();
                pVVar15 = (Vector3T<float>*)local_88;
                pVVar10->Set(pVVar15);
            }
            pvVar8 = local_c8->SSOBeginPtr(pVVar15);
            fVar16 = (float)math::AABB::GetMinX();
            local_88._0_4_ = fVar16;
            local_128._0_4_ = math::AABB::GetMinX();
            ptVar11 = (type*)std::max<float>((float*)local_88, (float*)local_128);
            pfVar5 = std::max<float>((float*)pvVar8, (float*)ptVar11);
            local_48._0_4_ = *pfVar5;
            pvVar8 = local_c8->SSOBeginPtr(ptVar11);
            *(float*)pvVar8 = (float)local_48;
            pfVar5 = (float*)local_c8->y();
            local_88._0_4_ = local_148->GetMinY();
            local_128._0_4_ = local_168->GetMinY();
            ptVar11 = (type*)std::max<float>((float*)local_88, (float*)local_128);
            pfVar5 = std::max<float>(pfVar5, (float*)ptVar11);
            local_48._0_4_ = *pfVar5;
            pfVar5 = (float*)local_c8->y();
            *pfVar5 = (float)local_48;
            pvVar8 = local_b8->SSOBeginPtr(ptVar11);
            local_88._0_4_ = math::AABB::GetMaxX();
            local_128._0_4_ = math::AABB::GetMaxX();
            ptVar11 = (type*)std::min<float>((float*)local_88, (float*)local_128);
            pfVar5 = std::min<float>((float*)pvVar8, (float*)ptVar11);
            local_48._0_4_ = *pfVar5;
            pvVar8 = local_b8->SSOBeginPtr(ptVar11);
            *(float*)pvVar8 = (float)local_48;
            pfVar5 = (float*)local_b8->y();
            local_88._0_4_ = local_148->GetMaxY();
            local_128._0_4_ = local_168->GetMaxY();
            pfVar12 = std::min<float>((float*)local_88, (float*)local_128);
            pfVar5 = std::min<float>(pfVar5, pfVar12);
            local_48._0_4_ = *pfVar5;
            pfVar5 = (float*)local_b8->y();
            *pfVar5 = (float)local_48;
            pfVar5 = (float*)local_b8->second();
            local_88._0_4_ = local_148->GetMaxZ();
            pVVar15 = (Vector3T<float>*)local_88;
            pfVar5 = std::min<float>(pfVar5, (float*)pVVar15);
            local_48._0_4_ = *pfVar5;
            pfVar5 = (float*)local_b8->second();
            *pfVar5 = (float)local_48;
        }
        new (local_88) math::Matrix44T<float>();
        pvVar8 = local_c8->SSOBeginPtr(pVVar15);
        local_48._0_4_ = *(float*)pvVar8;
        pvVar8 = local_b8->SSOBeginPtr(pVVar15);
        local_d8._0_4_ = *(float*)pvVar8;
        puVar13 = (undefined4*)local_c8->y();
        local_a0[1] = (float)*puVar13;
        puVar13 = (undefined4*)local_b8->y();
        local_a0[2] = (float)*puVar13;
        puVar13 = (undefined4*)local_c8->second();
        local_a0[3] = (float)*puVar13;
        puVar13 = (undefined4*)local_b8->second();
        math::Matrix44OrthographicLH<float>((float)local_48, (float)local_d8, local_a0[1], local_a0[2], local_a0[3],
                                            *puVar13, (Matrix44T*)local_88, 0);
        pDVar2 = local_38;
        puVar1 = &local_38->field_848;
        pMVar14 = (Matrix44T*)puVar1->GetScreen();
        this_01 = (math*)local_128;
        math::operator*(this_01, pMVar14, (Matrix44T*)local_88);
        this_00 = (Config*)(*(NPCType**)&pDVar2->field_800)->GetHeadList();
        uVar4 = this_00->GetUseableCascadeResolution();
        SnapProjectionToTexelBoundaries((Vector4T*)(local_88 + 48), (Matrix44T*)this_01, uVar4);
        pvVar8 = local_c8->SSOBeginPtr(this_01);
        local_38._0_4_ = *(float*)pvVar8;
        pfVar5 = (float*)local_c8->y();
        local_48._0_4_ = *pfVar5;
        pfVar5 = (float*)local_c8->second();
        local_90->Set(local_38._0_4_, (float)local_48, *pfVar5, 1.0);
        pvVar8 = local_b8->SSOBeginPtr(this_01);
        local_38 = (DrawableQueue*)CONCAT44(local_38._4_4_, *(undefined4*)pvVar8);
        puVar13 = (undefined4*)local_b8->y();
        local_90 = (QuaternionT<float>*)CONCAT44(local_90._4_4_, *puVar13);
        pfVar5 = (float*)local_b8->second();
        local_128._72_8_->Set(local_38._0_4_, local_90._0_4_, *pfVar5, 1.0);
        puVar1->SetProjMatrix(local_88);
        pMVar14 = (Matrix44T*)puVar1->GetScreen();
        math::operator*((math*)local_128, pMVar14, (Matrix44T*)local_88);
        puVar1->SetViewProjMatrix(local_128);
    }

    // 0x1008b0f00, 656 bytes, placed by class name
    // ShadowMapCascade::Render(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&, DrawableQueue&)
    void ShadowMapCascade::Render(RT7Core* param_1, DrawCallState* param_2, EffectManager* param_3,
                                  SceneViewData* param_4, DrawableQueue* param_5) {
        byte bVar1;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_00;
        Layout* this_01;
        long lVar2;
        RenderPipelineState* pRVar3;
        RasteriserState* pRVar4;
        RenderTargets* this_02;
        Texture* pTVar5;
        DrawCallState* pDVar6;
        undefined1 auVar7[16];
        DrawCallState local_78;
        DrawableQueue* local_48;
        EffectManager* local_40;
        byte local_31;

        local_48 = param_5;
        local_40 = param_3;
        local_31 = GetOcclusionEnabled(param_4);
        pDVar6 = &local_78;
        render::DrawCallState::DrawCallState(pDVar6, param_2);
        this_00 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                      pDVar6->GetRenderPipelineState();
        auVar7 = pDVar6->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            this_00, (EntityHighlight**)(auVar7._0_8_ + 2208), auVar7._8_8_);
        pDVar6 = &local_78;
        this_01 = (Layout*)pDVar6->GetRenderPipelineState();
        lVar2 = pDVar6->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(this_01, lVar2 + 780);
        pRVar3 = (RenderPipelineState*)local_78.GetRenderPipelineState();
        pRVar4 = (RasteriserState*)(field_800, 1028)->GetShadowPassRS();
        pRVar3->SetRasteriserState(pRVar4);
        bVar1 = local_31;
        1065353216->RenderOccludedDrawableGroup(this, param_1, &local_78, local_40, param_4, local_48, 0, local_31, 0);
        pRVar3 = (RenderPipelineState*)local_78.GetRenderPipelineState();
        pRVar4 = (RasteriserState*)(field_800, 0)->GetShadowPassRS();
        pRVar3->SetRasteriserState(pRVar4);
        1065353216->RenderOccludedDrawableGroup(this, param_1, &local_78, local_40, param_4, local_48, 1, bVar1, 0);
        if (field_1346 != false) {
            local_31 = local_31 ^ 1;
            if (local_31 == 0) {
                this_02 = (RenderTargets*)field_800->GetShadowMapAtlasRT();
                pTVar5 = (Texture*)this_02->GetDepthStencilTargetTexture();
                DownsampleGPUDepthBuffer(param_1, local_40, param_4, local_48, pTVar5, false);
            }
        }
        1065353216->RenderOccludedDrawableGroup(this, param_1, &local_78, local_40, param_4, local_48, 8, bVar1, 0);
        1065353216->RenderOccludedDrawableGroup(this, param_1, &local_78, local_40, param_4, local_48, 4, bVar1, 0);
        1065353216->RenderOccludedDrawableGroup(this, param_1, &local_78, local_40, param_4, local_48, 2, bVar1, 0);
        1065353216->RenderOccludedDrawableGroup(this, param_1, &local_78, local_40, param_4, local_48, 5, bVar1, 0);
        local_78.~DrawCallState();
    }

    // 0x1008b11e0, 16 bytes, placed by class name
    // ShadowMapCascade::RenderDebug(EffectManager&, DrawableQueue&)
    void ShadowMapCascade::RenderDebug(EffectManager* param_1, DrawableQueue* param_2) {
        (&field_16)->RenderDebug();
    }

    // 0x1008b11f0, 640 bytes, placed by neighbouring functions
    // CreateFrustumPointsFromCascadeInterval(std::array<math::Vector4T<float>, 8ul>&, float, float, math::Matrix44T<float> const&)
    /* CreateFrustumPointsFromCascadeInterval(std::array<math::Vector4T<float>,
   8ul>&, float, float, math::Matrix44T<float> const&) */

    void CreateFrustumPointsFromCascadeInterval(array* param_1, float param_2, float param_3, Matrix44T* param_4) {
        Rect<float>* pRVar1;
        undefined8 uVar2;
        ImVec4 local_108[16];
        ImVec4 local_f8[16];
        ImVec4 local_e8[16];
        ImVec4 local_d8[16];
        undefined8 local_c8;
        float fStack_c0;
        undefined4 uStack_bc;
        undefined8 local_b8;
        float fStack_b0;
        undefined4 uStack_ac;
        undefined8 local_a8;
        float fStack_a0;
        undefined4 uStack_9c;
        undefined8 local_98;
        float fStack_90;
        undefined4 uStack_8c;
        mach_header* local_88;
        undefined8 uStack_80;
        undefined8 local_78;
        undefined8 uStack_70;
        float local_68;
        float local_64;
        float local_60;
        float local_5c;
        undefined8 local_48;
        float fStack_40;
        undefined4 uStack_3c;

        new (&local_68) Frustum(param_4);
        ImVec4::ImVec4(local_108, local_68, local_60, 1.0, 1.0);
        ImVec4::ImVec4(local_f8, local_64, local_5c, 1.0, 1.0);
        ImVec4::ImVec4(local_e8, param_2, param_2, param_2, 1.0);
        ImVec4::ImVec4(local_d8, param_3, param_3, param_3, 1.0);
        local_c8 = math::operator*((Vector4T*)local_108, (Vector4T*)local_e8);
        fStack_c0 = param_3;
        uStack_bc = 0;
        local_b8 = math::operator*((Vector4T*)local_108, (Vector4T*)local_d8);
        fStack_b0 = param_3;
        uStack_ac = 0;
        local_a8 = math::operator*((Vector4T*)local_f8, (Vector4T*)local_e8);
        fStack_a0 = param_3;
        uStack_9c = 0;
        local_98 = math::operator*((Vector4T*)local_f8, (Vector4T*)local_d8);
        local_88 = &__mh_execute_header;
        uStack_80 = 0;
        local_78 = 1;
        uStack_70 = 0;
        fStack_90 = param_3;
        uStack_8c = 0;
        pRVar1 = (Rect<float>*)std::array<math::Vector4T<float>, 8ul>::operator[](
            (array<math::Vector4T<float>, 8ul>*)param_1, 0);
        math::Rect<float>::operator=(pRVar1, (Rect*)&local_c8);
        local_48 = math::Vector4ComponentSelect<float>((Vector4T*)&local_c8, (Vector4T*)&local_a8, (array*)&local_78);
        fStack_40 = param_3;
        uStack_3c = 0;
        pRVar1 = (Rect<float>*)std::array<math::Vector4T<float>, 8ul>::operator[](
            (array<math::Vector4T<float>, 8ul>*)param_1, 1);
        math::Rect<float>::operator=(pRVar1, (Rect*)&local_48);
        pRVar1 = (Rect<float>*)std::array<math::Vector4T<float>, 8ul>::operator[](
            (array<math::Vector4T<float>, 8ul>*)param_1, 2);
        math::Rect<float>::operator=(pRVar1, (Rect*)&local_a8);
        uVar2 = math::Vector4ComponentSelect<float>((Vector4T*)&local_c8, (Vector4T*)&local_a8, (array*)&local_88);
        fStack_40 = param_3;
        uStack_3c = 0;
        local_48 = uVar2;
        pRVar1 = (Rect<float>*)std::array<math::Vector4T<float>, 8ul>::operator[](
            (array<math::Vector4T<float>, 8ul>*)param_1, 3);
        math::Rect<float>::operator=(pRVar1, (Rect*)&local_48);
        pRVar1 = (Rect<float>*)std::array<math::Vector4T<float>, 8ul>::operator[](
            (array<math::Vector4T<float>, 8ul>*)param_1, 4);
        math::Rect<float>::operator=(pRVar1, (Rect*)&local_b8);
        uVar2 = math::Vector4ComponentSelect<float>((Vector4T*)&local_b8, (Vector4T*)&local_98, (array*)&local_78);
        fStack_40 = param_3;
        uStack_3c = 0;
        local_48 = uVar2;
        pRVar1 = (Rect<float>*)std::array<math::Vector4T<float>, 8ul>::operator[](
            (array<math::Vector4T<float>, 8ul>*)param_1, 5);
        math::Rect<float>::operator=(pRVar1, (Rect*)&local_48);
        pRVar1 = (Rect<float>*)std::array<math::Vector4T<float>, 8ul>::operator[](
            (array<math::Vector4T<float>, 8ul>*)param_1, 6);
        math::Rect<float>::operator=(pRVar1, (Rect*)&local_98);
        uVar2 = math::Vector4ComponentSelect<float>((Vector4T*)&local_b8, (Vector4T*)&local_98, (array*)&local_88);
        fStack_40 = param_3;
        uStack_3c = 0;
        local_48 = uVar2;
        pRVar1 = (Rect<float>*)std::array<math::Vector4T<float>, 8ul>::operator[](
            (array<math::Vector4T<float>, 8ul>*)param_1, 7);
        math::Rect<float>::operator=(pRVar1, (Rect*)&local_48);
    }

    // 0x1008b1470, 320 bytes, placed by neighbouring functions
    // CreateFrustumBoundingSphere(math::Sphere&, std::array<math::Vector4T<float>, 8ul> const&)
    /* CreateFrustumBoundingSphere(math::Sphere&,
   std::array<math::Vector4T<float>, 8ul> const&) */

    void CreateFrustumBoundingSphere(Sphere* param_1, array* param_2) {
        Vector4T<float>* this;
        Vector4T<float>* pVVar1;
        PlaneT* pPVar2;
        Vector4T<float>* this_00;
        undefined8 local_108[2];
        BoundingSphereBuilder local_f8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_f8) graphicutils::BoundingSphereBuilder();
        local_f8.BeginPass1();
        this = (Vector4T<float>*)param_2->begin();
        pVVar1 = (Vector4T<float>*)param_2->end();
        if (this != pVVar1) {
            this_00 = this;
            do {
                local_108[0] = this_00->GetXYZ();
                local_f8.AddPointPass1(local_108);
                this_00 = this_00 + 16;
            } while (this_00 != pVVar1);
        }
        local_f8.BeginPass2();
        if (this != pVVar1) {
            do {
                local_108[0] = GetXYZ();
                local_f8.AddPointPass2(local_108);
                this = this + 16;
            } while (this != pVVar1);
        }
        local_f8.End();
        pPVar2 = (PlaneT*)local_f8.y();
        math::PlaneT<float>::operator=((PlaneT<float>*)param_1, pPVar2);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008b15c0, 304 bytes, placed by neighbouring functions
    // CreateLightSpaceFrustumAABB(math::Vector4T<float>*, math::Vector4T<float>*, std::array<math::Vector4T<float>, 8ul> const&, math::Matrix44T<float> const&, math::Matrix44T<float> const&)
    /* CreateLightSpaceFrustumAABB(math::Vector4T<float>*,
   math::Vector4T<float>*, std::array<math::Vector4T<float>, 8ul> const&,
   math::Matrix44T<float> const&, math::Matrix44T<float> const&) */

    void CreateLightSpaceFrustumAABB(Vector4T* param_1, Vector4T* param_2, array* param_3, Matrix44T* param_4,
                                     Matrix44T* param_5) {
        Vector4T<float>* this;
        Vector4T* pVVar1;
        ulong uVar2;
        undefined8 uVar3;
        undefined8 in_XMM1_Qa;
        Matrix44T local_108;
        undefined1 local_c8[80];
        Vector4T<float> local_78[16];
        undefined8 local_68;
        undefined4 uStack_60;
        undefined4 uStack_5c;
        undefined8 local_58;
        undefined4 uStack_50;
        undefined4 uStack_4c;

        new (&local_108) math::Matrix44T<float>();
        uVar2 = 0;
        math::Matrix44Inverse<float>(&local_108, (float*)0, param_4);
        math::operator*((math*)local_c8, &local_108, param_5);
        this = (Vector4T<float>*)(local_c8 + 64);
        math::Vector4T<float>::Vector4T(this, 3.4028235e+38);
        math::Vector4T<float>::Vector4T(local_78, -3.4028235e+38);
        do {
            pVVar1 = (Vector4T*)std::array<math::Vector4T<float>, 8ul>::operator[](
                (array<math::Vector4T<float>, 8ul>*)param_3, uVar2);
            uVar3 = math::operator*(pVVar1, (Matrix44T*)local_c8);
            uStack_60 = (undefined4)in_XMM1_Qa;
            uStack_5c = (undefined4)((ulong)in_XMM1_Qa >> 32);
            local_68 = uVar3;
            uVar3 = math::Vector4Min<float>((Vector4T*)&local_68, (Vector4T*)this);
            uStack_50 = (undefined4)in_XMM1_Qa;
            uStack_4c = (undefined4)((ulong)in_XMM1_Qa >> 32);
            local_58 = uVar3;
            math::Rect<float>::operator=((Rect<float>*)this, (Rect*)&local_58);
            uVar3 = math::Vector4Max<float>((Vector4T*)&local_68, (Vector4T*)local_78);
            uStack_50 = (undefined4)in_XMM1_Qa;
            uStack_4c = (undefined4)((ulong)in_XMM1_Qa >> 32);
            local_58 = uVar3;
            math::Rect<float>::operator=((Rect<float>*)local_78, (Rect*)&local_58);
            uVar2 = uVar2 + 1;
        } while (uVar2 != 8);
        math::Rect<float>::operator=((Rect<float>*)param_1, (Rect*)(local_c8 + 64));
        math::Rect<float>::operator=((Rect<float>*)param_2, (Rect*)local_78);
    }

    // 0x1008b1ab0, 208 bytes, placed by class name
    // ShadowMapCascade::OnOcclusionEnabled()
    void ShadowMapCascade::OnOcclusionEnabled() {
        RenderTargetsManager* pRVar1;
        char cVar2;
        char* pcVar3;
        eastl::string local_48[36];
        undefined4 local_24;

        pRVar1 = field_784;
        (*(code*)field_0[9])(local_48, this);
        pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        InitOcclusion(pRVar1, pcVar3, field_1346, 32, 32);
        eastl::string::~basic_string(local_48);
        local_24 = 1;
        std::make_unique<OcclusionReprojection, OcclusionManager&, ProjectionMode>((OcclusionManager*)local_48,
                                                                                   &field_16);
        std::unique_ptr<OcclusionReprojection, std::default_delete<OcclusionReprojection>>::operator=(
            (unique_ptr<OcclusionReprojection, std::default_delete<OcclusionReprojection>>*)&field_768,
            (unique_ptr*)local_48);
        local_48->~unique_ptr();
        cVar2 = (&field_744)->empty();
        if (cVar2 != '\0') {
            (&field_744, 1, 0)->set_max_size();
        }
    }

    // 0x1008b1d60, 736 bytes, placed by class name
    // ShadowMapCascade::RegisterTweakVarsOcclusion(tweak::Container&)
    void ShadowMapCascade::RegisterTweakVarsOcclusion(Container* param_1) {
        bool bVar1;
        char* pcVar2;
        jag local_b0[32];
        eastl local_90[36];
        int local_6c;
        eastl local_68[56];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_6c = field_796;
        ToString<eastl::string, int>(local_b0, &local_6c, 10);
        eastl::operator+(local_90, (value_type*)"Enable Shadow Cascade ", (basic_string*)local_b0);
        eastl::operator+(local_68, (basic_string*)local_90, (value_type*)" GPU Depth Readback");
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        param_1->AddCheckBox(pcVar2, &field_1346);
        local_68->~basic_string();
        local_90->~basic_string();
        local_b0->~basic_string();
        local_6c = field_796;
        ToString<eastl::string, int>(local_b0, &local_6c, 10);
        eastl::operator+(local_90, (value_type*)"Enable Shadow Cascade ", (basic_string*)local_b0);
        eastl::operator+(local_68, (basic_string*)local_90, (value_type*)" CPU Reprojection Mask");
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        param_1->AddCheckBox(pcVar2, &field_778);
        local_68->~basic_string();
        local_90->~basic_string();
        local_b0->~basic_string();
        local_6c = field_796;
        ToString<eastl::string, int>(local_b0, &local_6c, 10);
        eastl::operator+(local_90, (value_type*)"Show Shadow Cascade ", (basic_string*)local_b0);
        eastl::operator+(local_68, (basic_string*)local_90, (value_type*)" Depth Buffer");
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        param_1->AddCheckBox(pcVar2, &field_24);
        local_68->~basic_string();
        local_90->~basic_string();
        local_b0->~basic_string();
        local_6c = field_796;
        ToString<eastl::string, int>(local_b0, &local_6c, 10);
        eastl::operator+(local_90, (value_type*)"Enable On Shadow Cascade ", (basic_string*)local_b0);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::function<void(tweak::Event_const&)>::function<
            ShadowMapCascade::RegisterTweakVarsOcclusion(tweak::Container&)::__3, void>((function*)local_68, this);
        bVar1 = (bool)GetOcclusionTestEnabled();
        param_1->AddCheckBox(pcVar2, local_68, bVar1);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_68);
        local_90->~basic_string();
        local_b0->~basic_string();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008b20f0, 544 bytes, placed by class name
    // ShadowMapCascade::GetDrawablesCasterReceiverAABB(float&, math::AABB&, math::AABB&, math::Vector4T<float> const&, DrawableQueue const&)
    void ShadowMapCascade::GetDrawablesCasterReceiverAABB(float* param_1, AABB* param_2, AABB* param_3,
                                                          Vector4T* param_4, DrawableQueue* param_5) {
        undefined4 uVar1;
        float* pfVar2;
        undefined8* puVar3;
        Layout* this_00;
        long lVar4;
        long lVar5;
        long lVar6;
        Vector3T<float>* this_01;
        int iVar7;
        ShadowMapCascade* this_02;
        Matrix44T local_1a8;
        undefined8 uStack_170;
        Matrix44T local_168;
        undefined8 uStack_130;
        AABB local_128;
        int local_dc;
        OBB local_d8;
        OBB local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pfVar2 = (float*)param_4->second();
        *param_1 = *pfVar2;
        puVar3 = (undefined8*)field_800->GetOrigin();
        local_1a8._0_8_ = *puVar3;
        local_1a8._8_8_ = puVar3[1];
        local_1a8._16_8_ = puVar3[2];
        local_1a8._24_8_ = puVar3[3];
        local_1a8._32_8_ = puVar3[4];
        local_1a8._40_8_ = puVar3[5];
        local_1a8._48_8_ = puVar3[6];
        uStack_170 = puVar3[7];
        puVar3 = (undefined8*)(&field_848)->GetScreen();
        local_168._0_8_ = *puVar3;
        local_168._8_8_ = puVar3[1];
        local_168._16_8_ = puVar3[2];
        local_168._24_8_ = puVar3[3];
        local_168._32_8_ = puVar3[4];
        local_168._40_8_ = puVar3[5];
        local_168._48_8_ = puVar3[6];
        uStack_130 = puVar3[7];
        new (&local_88) math::OBB();
        new (&local_d8) math::OBB();
        iVar7 = 0;
        do {
            uVar1 = ((ShadowMapCascade*)this)->GetPos();
            local_dc = iVar7;
            this_00 = (Layout*)param_5->GetGroup(iVar7, uVar1);
            lVar4 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_00);
            lVar5 = this_00->end();
            for (; lVar4 != lVar5; lVar4 = lVar4 + 24) {
                lVar6 = std::unique_ptr<DrawableElement, DrawableElementDeleter>::operator*(
                    (unique_ptr<DrawableElement, DrawableElementDeleter>*)(lVar4 + 8));
                math::OBB::operator=(&local_88, (OBB*)(lVar6 + 16));
                if ((*(byte*)(lVar6 + 96) & 8) != 0) {
                    this_01 = (Vector3T<float>*)local_88.GetScreen();
                    math::Vector3T<float>::operator*=(this_01, 1.25);
                }
                math::OBB::operator=(&local_d8, &local_88);
                local_d8.Transform(&local_168);
                this_02 = (ShadowMapCascade*)&local_128;
                new (this_02) math::AABB(&local_d8);
                if ((*(byte*)(lVar6 + 96) & 1) != 0) {
                    this_02 = (ShadowMapCascade*)param_2;
                    ((ShadowMapCascade*)param_2)->AddAABB(&local_128);
                }
                if ((*(byte*)(lVar6 + 96) & 2) != 0) {
                    AddReceiverIfVisible(this_02, param_3, &local_88, &local_128, &local_1a8);
                }
            }
            iVar7 = local_dc + 1;
        } while (iVar7 != 13);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008b2440, 144 bytes, placed by class name
    // ShadowMapCascade::AddReceiverIfVisible(math::AABB&, math::OBB const&, math::AABB const&, math::Matrix44T<float> const&) const
    void ShadowMapCascade::AddReceiverIfVisible(AABB* param_1, OBB* param_2, AABB* param_3, Matrix44T* param_4) {
        OBB* this_00;
        undefined1 local_a8[120];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = (OBB*)(local_a8 + 32);
        math::OBB::OBB(this_00, param_2);
        this_00->Transform(param_4);
        new (local_a8) math::AABB(this_00);
        param_1->AddAABB(param_3);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1008b24e0, 48 bytes, placed by class name
    // ShadowMapCascade::IsLastCascade() const
    undefined4 ShadowMapCascade::IsLastCascade() {
        int iVar1;
        int iVar2;
        long lVar3;

        iVar1 = field_796;
        lVar3 = field_800->GetHeadList();
        iVar2 = *(int*)(lVar3 + 8) + -1;
        return CONCAT31((int3)((uint)iVar2 >> 8), iVar1 == iVar2);
    }

    // 0x1008d69d0, 64 bytes, placed by class name
    // ShadowMapCascade::RegisterTweakVarsOcclusion(tweak::Container&)::$_3::operator()(tweak::Event const&) const
    /* ShadowMapCascade::RegisterTweakVarsOcclusion(tweak::Container&)::$_3::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const */

    void ShadowMapCascade::RegisterTweakVarsOcclusion(tweak::Container&)::$_3::operator()(Event* param_1) {
        SceneRenderPass* this_00;
        bool bVar1;
        long* plVar2;

        if (param_1->field_16 == 3) {
            this_00 = *(SceneRenderPass**)this;
            plVar2 = (long*)shared_ptr<tweak::Control>::operator->((shared_ptr<tweak::Control>*)param_1);
            bVar1 = (bool)(**(code**)(*plVar2 + 120))(plVar2);
            this_00->SetOcclusionTestEnabled(bVar1);
        }
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x1008acd20, 576 bytes, inline, placed by debug map only (low confidence)
    // Matrix44T<float>& Matrix44LookAtLH<float>(Matrix44T<float>&, Vector3T<float> const&, Vector3T<float> const&, Vector3T<float> const&, float)
    Matrix44T* Matrix44LookAtLH<float>(Matrix44T* param_1, Vector3T* param_2, Vector3T* param_3, Vector3T* param_4,
                                       float param_5) {
        undefined8 uVar1;
        undefined8* puVar3;
        float fVar4;
        float fVar5;
        float fVar6;
        undefined8 local_98[2];
        undefined8 local_88;
        undefined4 local_80;
        float local_78;
        float local_74;
        float local_70;
        float local_6c;
        float local_68;
        float local_64;
        float local_60;
        float local_5c;
        undefined8 local_58;
        float local_50;
        undefined8 local_48;
        float local_40;
        float local_3c;
        undefined8 local_38;
        float local_30;

        local_80 = *(undefined4*)(param_2 + 8);
        local_88 = *(undefined8*)param_2;
        local_3c = param_5;
        if (local_88.IsNormal(1e-06) != '\0') {
            local_38 = operator*((Vector3T*)&local_88, local_3c);
            local_58 = operator+((Vector3T*)param_1, (Vector3T*)&local_38);
            local_88.SetXYZ((Vector3T*)&local_58);
        }
        local_38 = operator-((Vector3T*)&local_88, (Vector3T*)param_1);
        puVar3 = (undefined8*)local_38.Normalize();
        local_58 = *puVar3;
        local_50 = *(float*)(puVar3 + 1);
        local_48 = Vector3Cross<float>(param_3, (Vector3T*)&local_58);
        puVar3 = (undefined8*)local_48.Normalize();
        local_38 = *puVar3;
        local_30 = *(float*)(puVar3 + 1);
        local_98[0] = Vector3Cross<float>((Vector3T*)&local_58, (Vector3T*)&local_38);
        puVar3 = (undefined8*)local_98->Normalize();
        local_60 = *(float*)(puVar3 + 1);
        uVar1 = *puVar3;
        local_78 = (float)local_38;
        local_3c = local_38._4_4_;
        local_48._0_4_ = (float)uVar1;
        local_70 = (float)local_48;
        local_48._4_4_ = (float)((ulong)uVar1 >> 32);
        local_74 = local_48._4_4_;
        local_68 = (float)local_58;
        local_6c = local_58._4_4_;
        local_64 = local_30;
        local_5c = local_50;
        local_48 = uVar1;
        local_40 = local_60;
        fVar4 = Vector3Dot<float>((Vector3T*)&local_38, (Vector3T*)param_1);
        fVar5 = Vector3Dot<float>((Vector3T*)&local_48, (Vector3T*)param_1);
        fVar6 = Vector3Dot<float>((Vector3T*)&local_58, (Vector3T*)param_1);
        Set(local_78, local_70, local_68, 0.0, local_3c, local_74, local_6c, 0.0, local_64, local_60, local_5c, 0.0,
            -fVar4, -fVar5, -fVar6, 1.0);
        return (Matrix44T*)this;
    }

} // namespace jag::math

// 0x1008b1780, 16 bytes, placed by neighbouring functions
// abs(double)
double abs(double param_1) {
    return ABS(param_1);
}
