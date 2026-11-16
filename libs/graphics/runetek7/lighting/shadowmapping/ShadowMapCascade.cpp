// libs/graphics/runetek7/lighting/shadowmapping/ShadowMapCascade.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ShadowMapCascade.h"

namespace jag::graphics {
    // 0x10005cf50: ShadowMapCascade::GetLightOrthProjMax() const has the same machine code as oldscape::OSClientConsole::GetCommandLineObject()

    // 0x1001d0810: ShadowMapCascade::GetWorldOBB() const has the same machine code as SunlightShadows::GetSunlightCsmManager()

    // 0x1002eeed0: ShadowMapCascade::GetLightOrthProjMin() const has the same machine code as Model::GetLabelCentres() const

    // 0x1008ab4e0
    void ShadowMapCascade::SetFrustum(const ViewTransforms& viewTransforms, float arg2, float arg3,
                                      const math::Matrix44T<float>& matrix44) {
        double dVar2;
        unsigned long uVar3;
        float* pfVar8;
        Vector3T<float>* vector3;
        uint32_t uVar11;
        unsigned int extraout_XMM0_Dc;
        unsigned int extraout_XMM0_Dc_00;
        unsigned int extraout_XMM0_Dd;
        unsigned int extraout_XMM0_Dd_00;
        Vector3T<double> local_258;
        Vector4T<double> local_240;
        Vector3T<double> local_160;
        uint64_t local_108;
        float local_100;
        uint8_t local_a8[32];
        uint64_t local_88;
        uint64_t uStack_80;
        uint64_t local_78;
        double local_58;
        unsigned int uStack_50;
        unsigned int uStack_4c;
        double local_48;
        unsigned int uStack_40;
        unsigned int uStack_3c;

        field_808 = arg2;
        field_812 = arg3;
        Matrix44T<float>* local_38 = matrix44;
        auto pRVar4 = viewTransforms.GetScreen();
        ReturnValue local_1e8 = *pRVar4;
        ReturnValue RStack_1e0 = pRVar4[1];
        ReturnValue local_1d8 = pRVar4[2];
        ReturnValue RStack_1d0 = pRVar4[3];
        ReturnValue local_1c8 = pRVar4[4];
        ReturnValue RStack_1c0 = pRVar4[5];
        ReturnValue local_1b8 = pRVar4[6];
        ReturnValue RStack_1b0 = pRVar4[7];
        ReturnValue local_1a8 = local_1e8;
        ReturnValue RStack_1a0 = RStack_1e0;
        ReturnValue local_198 = local_1d8;
        ReturnValue RStack_190 = RStack_1d0;
        ReturnValue local_188 = local_1c8;
        ReturnValue RStack_180 = RStack_1c0;
        ReturnValue local_178 = local_1b8;
        ReturnValue RStack_170 = RStack_1b0;
        local_1a8 = math::Matrix44T<float>::Invert(nullptr);
        array<math::Vector4T<float>, 8ul> local_2d8;
        local_58 = (double)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)field_808);
        local_48 = (double)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)field_812);
        auto pMVar5 = viewTransforms.GetOrigin();
        float fVar10 = local_48._0_4_;
        CreateFrustumPointsFromCascadeInterval(&local_2d8, local_58._0_4_, local_48._0_4_, pMVar5);
        uint8_t* puVar1 = &field_1136;
        CreateFrustumBoundingSphere((Sphere*)puVar1, &local_2d8);
        puVar1->Transform(local_1a8);
        Vector4T<float> local_c8;
        Vector4T<float> local_b8;
        pMVar5 = local_38;
        CreateLightSpaceFrustumAABB(&local_c8, &local_b8, &local_2d8, (Matrix44T<float>*)&local_1e8, local_38);
        Matrix44T<float> local_228;
        long lVar6 = field_800->GetHeadList();
        int* piVar7 = (int*)(*((lVar6 + 80)))[(long)m_cascadeID];
        if (*piVar7 == 2) {
            local_108 = puVar1->GetAABBMin();
            local_100 = fVar10;
            local_a8._0_8_ = puVar1->GetAABBMax();
            local_a8._8_4_ = fVar10;
            local_148 = math::AABB(&local_108, local_a8);
            pfVar8 = (float*)math::Matrix44T<float>::operator()(pMVar5, 2);
            local_58 = (double)*pfVar8;
            pfVar8 = (float*)math::Matrix44T<float>::operator()(pMVar5, 6);
            local_48 = (double)*pfVar8;
            pfVar8 = (float*)math::Matrix44T<float>::operator()(pMVar5, 10);
            new (local_a8) math::Vector3T(local_58, local_48, (double)*pfVar8);
            local_78 = *(uint64_t*)(PTR_UP_100ee66b0 + 16);
            local_88 = *(uint64_t*)PTR_UP_100ee66b0;
            uStack_80 = *(uint64_t*)(PTR_UP_100ee66b0 + 8);
            dVar2 = math::Vector3Dot<double>(local_88, *local_a8);
            dVar2 = (double)::abs(dVar2);
            if (1.0 < dVar2 + 1.192092896e-07) {
                local_88 = *PTR_RIGHT_100ee66c8;
            }
            vector3 = (Vector3T<float>*)puVar1->SSOBeginPtr();
            local_160.Vector3T<float>(*vector3);
            new (&local_108) math::Vector4T<double>(local_160, 1.0);
            local_160.GetXYZ();
            local_240.GetXYZ();
            local_258 + local_240;
            math::Matrix44LookAtLH<float>(local_228, local_160, local_258, local_88);
            uVar3 = puVar1->GetOutlineRadiusAdjustment();
            uStack_50 = extraout_XMM0_Dc ^ 2147483648;
            uStack_4c = extraout_XMM0_Dd ^ 2147483648;
            local_58 = (double)(uVar3 ^ 9223372039002259456);
            uVar3 = puVar1->GetOutlineRadiusAdjustment();
            uStack_40 = extraout_XMM0_Dc_00 ^ 2147483648;
            uStack_3c = extraout_XMM0_Dd_00 ^ 2147483648;
            local_48 = (double)(uVar3 ^ 9223372039002259456);
            fVar10 = (float)puVar1->GetOutlineRadiusAdjustment();
            field_816.Set(local_58._0_4_, local_48._0_4_, -fVar10, 1.0);
            uVar11 = puVar1->GetOutlineRadiusAdjustment();
            local_58 = (double)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)uVar11);
            uVar11 = puVar1->GetOutlineRadiusAdjustment();
            local_48 = (double)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)uVar11);
            fVar10 = (float)puVar1->GetOutlineRadiusAdjustment();
            field_832.Set(local_58._0_4_, local_48._0_4_, fVar10, 1.0);
            pMVar5 = local_38;
        } else {
            local_228 = *pMVar5;
            local_148._0_8_ = local_c8.GetXYZ();
            local_148.field_8 = fVar10;
            field_816.Set(local_148, 1.0);
            local_148._0_8_ = local_b8.GetXYZ();
            local_148.field_8 = fVar10;
            field_832.Set(local_148, 1.0);
        }
        lVar6 = field_800->GetHeadList();
        if (0.0 < *(float*)(lVar6 + 52)) {
            LogAssert("m_pParentCsmManager->GetConfig().m_LightCamNearClipOffset <= 0.0f",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "lighting/shadowmapping/ShadowMapCascade.cpp",
                      216, nullptr);
        }
        AABB local_148;
        puVar1 = &field_816;
        auto puVar9 = puVar1->SSOBeginPtr();
        local_58 = (double)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)(*puVar9));
        uint8_t* this_00 = &field_832;
        puVar9 = (uint32_t*)this_00->SSOBeginPtr();
        local_48 = (double)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)(*puVar9));
        pfVar8 = (float*)puVar1->y();
        float local_64 = *pfVar8;
        pfVar8 = (float*)this_00->y();
        float local_60 = *pfVar8;
        pfVar8 = (float*)puVar1->second();
        local_38._0_4_ = *pfVar8;
        lVar6 = field_800->GetHeadList();
        local_38 =
            (Matrix44T<float>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)(local_38._0_4_ + *(float*)(lVar6 + 52)));
        pfVar8 = (float*)this_00->second();
        float local_5c = *pfVar8;
        lVar6 = field_800->GetHeadList();
        fVar10 = local_48._0_4_;
        math::Matrix44OrthographicLH<float>(local_148, local_58._0_4_, local_48._0_4_, local_64, local_60,
                                            local_38._0_4_, local_5c, *(MATRIX_PROJECTION_RANGE*)(lVar6 + 100));
        field_1184.Set(local_228, local_148);
        field_848.Set(local_228, local_148);
        local_108 = local_c8.GetXYZ();
        local_100 = fVar10;
        local_88 = local_b8.GetXYZ();
        uStack_80 = (((uint64_t)uStack_80._4_4_ << 32) | (uint32_t)fVar10);
        new (local_a8) math::AABB(&local_108, &local_88);
        field_1056.Set(*local_a8);
        new (&local_108) math::Matrix44T<float>();
        math::Matrix44Inverse<float>(local_108, nullptr, *pMVar5);
        field_1056.Transform(local_108);
    }

    // 0x1008b0450
    ShadowMapCascade::ShadowMapCascade(int arg1, DirLightCsmManager* dirLightCsmManager,
                                       render::RenderTargetsManager* renderTargetsManager, ThreadPool* threadPool)
        : ShadowPass(0, renderTargetsManager, threadPool), m_cascadeID(arg1), field_800(dirLightCsmManager),
          field_808(0.0), field_812(0.0), field_1152(0, 0, 0, 0, 0.0, 1.0), m_canRender(false), m_clearViewport(false),
          field_1346(false) {
        SetOcclusionTestEnabled(false);
        field_16.SetRenderInvalidTransforms(false);
    }

    // 0x1008b0570
    ShadowMapCascade::~ShadowMapCascade() {}

    // 0x1008b05b0
    uint64_t ShadowMapCascade::BeginPass(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                         EffectManager& effectManager, const SceneViewData& sceneViewData,
                                         const DrawableQueue& drawableQueue) {
        RenderTargets* renderTargets;
        unsigned int arg4;
        long lVar4;
        ImVec4 local_58;

        EffectManager* local_38 = effectManager;
        auto pOVar2 = drawCallState.GetOutputMergerState();
        uint64_t* puVar5 = &field_1152;
        pOVar2->SetViewports(puVar5, 1);
        pOVar2 = drawCallState.GetOutputMergerState();
        auto puVar3 = sceneViewData.GetRenderTargets();
        pOVar2->SetRenderTargets(*puVar3);
        if (GetClearViewport() == '\0') {
            renderContext.SetScissorRectangle(false, *puVar5);
        } else {
            renderContext.SetScissorRectangle(true, *puVar5);
            lVar4 = renderContext.Instance();
            renderContext.SetDepthStencilState((lVar4 + 720));
            puVar5 = (uint64_t*)sceneViewData.GetRenderTargets();
            renderTargets = (RenderTargets*)*puVar5;
            puVar5 = (uint64_t*)sceneViewData.GetRenderTargets();
            arg4 = render::GetDepthTextureClearFlags((Texture*)(*puVar5)->GetDepthStencilTargetTexture());
            renderContext.ClearDepthStencilTarget(renderTargets, 1.0, 0, arg4);
            local_58 = ImVec4(1.0, 0.0, 0.0, 0.0);
            lVar4 = &local_58->Instance();
            renderContext.SetBlendState((lVar4 + 1524));
            puVar5 = (uint64_t*)sceneViewData.GetRenderTargets();
            renderContext.ClearRenderTargets(*puVar5, &local_58, 1);
        }
        UpdateLightViewMatrices(drawableQueue);
        auto this_00 = local_38->GetEffect<SunlightDirectLighting>(79);
        auto matrix441 = field_848.GetScreen();
        auto matrix442 = field_848.GetOrigin();
        auto puVar6 = field_816.second();
        local_38 = (EffectManager*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)(*puVar6));
        auto pfVar7 = field_832.second();
        this_00->SetViewTransforms(*matrix441, *matrix442, local_38._0_4_, *pfVar7);
        return 1;
    }

    // 0x1008b0780
    void ShadowMapCascade::UpdateLightViewMatrices(const DrawableQueue& drawableQueue) {
        uint8_t* puVar1;
        Vector3T<float>* pVVar7;
        float* pfVar8;
        float fVar11;
        unsigned int extraout_XMM0_Dc;
        unsigned int extraout_XMM0_Dc_00;
        unsigned int extraout_XMM0_Dd;
        unsigned int extraout_XMM0_Dd_00;
        uint8_t local_168[32];
        uint8_t local_148[32];
        float local_128[18];
        unsigned long local_d8;
        unsigned int uStack_d0;
        unsigned int uStack_cc;
        float local_a0;
        float local_88[12];
        Vector4T<float> local_58;
        unsigned long local_48;
        unsigned int uStack_40;
        unsigned int uStack_3c;

        QuaternionT<float>* local_90 = (QuaternionT<float>*)&field_816;
        DrawableQueue* local_38 = drawableQueue;
        local_88._0_8_ = local_90->GetXYZ();
        Vector4T<float> local_c8(*local_88, 1.0);
        QuaternionT<float>* local_e0 = (QuaternionT<float>*)&field_832;
        local_88._0_8_ = local_e0->GetXYZ();
        Vector4T<float> local_b8(*local_88, 1.0);
        auto pfVar4 = local_c8.second();
        float local_a4 = *pfVar4;
        new (local_88) math::Vector3T(3.4028235e+38);
        new (local_128) math::Vector3T(-3.4028235e+38);
        new (local_168) math::AABB(local_88, local_128);
        new (local_88) math::Vector3T(3.4028235e+38);
        new (local_128) math::Vector3T(-3.4028235e+38);
        new (local_148) math::AABB(local_88, local_128);
        GetDrawablesCasterReceiverAABB(local_a4, *local_168, *local_148, local_c8, *local_38);
        long lVar5 = field_800->GetHeadList();
        local_38 = (DrawableQueue*)this;
        int* piVar6 = (int*)(*((lVar5 + 80)))[(long)m_cascadeID];
        if (*piVar6 == 2) {
            puVar1 = &local_38->field_1136;
            local_48 = puVar1->GetOutlineRadiusAdjustment();
            local_48 = local_48 ^ 9223372039002259456;
            uStack_40 = extraout_XMM0_Dc ^ 2147483648;
            uStack_3c = extraout_XMM0_Dd ^ 2147483648;
            local_d8 = puVar1->GetOutlineRadiusAdjustment();
            local_d8 = local_d8 ^ 9223372039002259456;
            uStack_d0 = extraout_XMM0_Dc_00 ^ 2147483648;
            uStack_cc = extraout_XMM0_Dd_00 ^ 2147483648;
            fVar11 = (float)puVar1->GetOutlineRadiusAdjustment();
            local_c8.Set((float)local_48, (float)local_d8, -fVar11, 1.0);
            fVar11 = (float)puVar1->GetOutlineRadiusAdjustment();
            new (local_88) math::Vector3T(fVar11);
            local_128[0] = (float)puVar1->GetOutlineRadiusAdjustment();
            local_a0 = (float)local_148->GetMaxZ();
            pfVar4 = std::min<float>(*local_128, local_a0);
            local_b8.Set(*local_88, *pfVar4);
        } else if (*piVar6 == 1) {
            pVVar7 = (Vector3T<float>*)local_168->SSOBeginPtr();
            new (local_88) math::Vector3T(3.4028235e+38);
            if (*pVVar7 == *local_88) {
                pVVar7 = (Vector3T<float>*)local_168->SSOBeginPtr();
                local_88._0_8_ = local_c8.GetXYZ();
                pVVar7->Set(*local_88);
            }
            pVVar7 = (Vector3T<float>*)local_168->GetScreen();
            new (local_88) math::Vector3T(-3.4028235e+38);
            if (*pVVar7 == *local_88) {
                pVVar7 = (Vector3T<float>*)local_168->GetScreen();
                local_88._0_8_ = local_b8.GetXYZ();
                pVVar7->Set(*local_88);
            }
            pVVar7 = (Vector3T<float>*)local_148->SSOBeginPtr();
            new (local_88) math::Vector3T(3.4028235e+38);
            if (*pVVar7 == *local_88) {
                pVVar7 = (Vector3T<float>*)local_148->SSOBeginPtr();
                local_88._0_8_ = local_c8.GetXYZ();
                pVVar7->Set(*local_88);
            }
            pVVar7 = (Vector3T<float>*)local_148->GetScreen();
            new (local_88) math::Vector3T(-3.4028235e+38);
            if (*pVVar7 == *local_88) {
                pVVar7 = (Vector3T<float>*)local_148->GetScreen();
                local_88._0_8_ = local_b8.GetXYZ();
                pVVar7->Set(*local_88);
            }
            pfVar4 = (float*)local_c8.SSOBeginPtr();
            fVar11 = (float)local_148->GetMinX();
            local_88[0] = fVar11;
            local_128[0] = (float)local_168->GetMinX();
            pfVar8 = std::max<float>(*local_88, *local_128);
            pfVar4 = std::max<float>(*pfVar4, *pfVar8);
            local_48._0_4_ = *pfVar4;
            pfVar4 = (float*)local_c8.SSOBeginPtr();
            *pfVar4 = (float)local_48;
            pfVar4 = (float*)local_c8.y();
            local_88[0] = (float)local_148->GetMinY();
            local_128[0] = (float)local_168->GetMinY();
            pfVar8 = std::max<float>(*local_88, *local_128);
            pfVar4 = std::max<float>(*pfVar4, *pfVar8);
            local_48._0_4_ = *pfVar4;
            pfVar4 = (float*)local_c8.y();
            *pfVar4 = (float)local_48;
            pfVar4 = (float*)local_b8.SSOBeginPtr();
            local_88[0] = (float)local_148->GetMaxX();
            local_128[0] = (float)local_168->GetMaxX();
            pfVar8 = std::min<float>(*local_88, *local_128);
            pfVar4 = std::min<float>(*pfVar4, *pfVar8);
            local_48._0_4_ = *pfVar4;
            pfVar4 = (float*)local_b8.SSOBeginPtr();
            *pfVar4 = (float)local_48;
            pfVar4 = (float*)local_b8.y();
            local_88[0] = (float)local_148->GetMaxY();
            local_128[0] = (float)local_168->GetMaxY();
            pfVar8 = std::min<float>(*local_88, *local_128);
            pfVar4 = std::min<float>(*pfVar4, *pfVar8);
            local_48._0_4_ = *pfVar4;
            pfVar4 = (float*)local_b8.y();
            *pfVar4 = (float)local_48;
            pfVar4 = (float*)local_b8.second();
            local_88[0] = (float)local_148->GetMaxZ();
            pfVar4 = std::min<float>(*pfVar4, *local_88);
            local_48._0_4_ = *pfVar4;
            pfVar4 = (float*)local_b8.second();
            *pfVar4 = (float)local_48;
        }
        new (local_88) math::Matrix44T<float>();
        pfVar4 = (float*)local_c8.SSOBeginPtr();
        local_48._0_4_ = *pfVar4;
        pfVar4 = (float*)local_b8.SSOBeginPtr();
        local_d8._0_4_ = *pfVar4;
        pfVar4 = (float*)local_c8.y();
        float local_9c = *pfVar4;
        pfVar4 = (float*)local_b8.y();
        float local_98 = *pfVar4;
        pfVar4 = (float*)local_c8.second();
        float local_94 = *pfVar4;
        pfVar4 = (float*)local_b8.second();
        math::Matrix44OrthographicLH<float>(*local_88, (float)local_48, (float)local_d8, local_9c, local_98, local_94,
                                            *pfVar4, 0);
        DrawableQueue* pDVar2 = local_38;
        puVar1 = &local_38->field_848;
        Matrix44T<float>* pMVar9 = (Matrix44T<float>*)puVar1->GetScreen();
        *local_128** pMVar9;
        unsigned int arg3 = ((Config*)(*(NPCType**)&pDVar2->field_800)->GetHeadList())->GetUseableCascadeResolution();
        SnapProjectionToTexelBoundaries(&local_58, (Matrix44T<float>*)local_128, arg3);
        pfVar4 = (float*)local_c8.SSOBeginPtr();
        local_38._0_4_ = *pfVar4;
        pfVar4 = (float*)local_c8.y();
        local_48._0_4_ = *pfVar4;
        pfVar4 = (float*)local_c8.second();
        local_90->Set(local_38._0_4_, (float)local_48, *pfVar4, 1.0);
        auto puVar10 = local_b8.SSOBeginPtr();
        local_38 = (DrawableQueue*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)(*puVar10));
        puVar10 = (uint32_t*)local_b8.y();
        local_90 = (QuaternionT<float>*)(((uint64_t)local_90._4_4_ << 32) | (uint32_t)(*puVar10));
        pfVar4 = (float*)local_b8.second();
        local_e0->Set(local_38._0_4_, local_90._0_4_, *pfVar4, 1.0);
        puVar1->SetProjMatrix(*local_88);
        pMVar9 = (Matrix44T<float>*)puVar1->GetScreen();
        *local_128** pMVar9;
        puVar1->SetViewProjMatrix(*local_128);
    }

    // 0x1008b0f00
    void ShadowMapCascade::Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                                  EffectManager& effectManager, const SceneViewData& sceneViewData,
                                  DrawableQueue& drawableQueue) {
        bool arg6;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_00;
        RenderTargets* this_02;
        DrawCallState local_78;

        bool local_31 = (bool)GetOcclusionEnabled(sceneViewData);
        DrawCallState* pDVar4 = &local_78;
        new (pDVar4) render::DrawCallState(drawCallState);
        this_00 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                      pDVar4->GetRenderPipelineState();
        long lVar1 = pDVar4->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            this_00, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar1 + 2208));
        pDVar4 = &local_78;
        auto this_01 = pDVar4->GetRenderPipelineState();
        lVar1 = pDVar4->Instance();
        this_01->SetHeapSize((lVar1 + 780));
        auto pRVar2 = local_78.GetRenderPipelineState();
        auto pAVar3 = field_800->GetShadowPassRS(1028);
        pRVar2->SetRasteriserState(pAVar3);
        bool arg7 = local_31;
        RenderOccludedDrawableGroup(rt7Core, &local_78, (EffectManager*)(SceneViewData*)effectManager, sceneViewData,
                                    drawableQueue, 0, local_31, nullptr, 1.0);
        pRVar2 = (RenderPipelineState*)local_78.GetRenderPipelineState();
        pAVar3 = field_800->GetShadowPassRS(0);
        pRVar2->SetRasteriserState(pAVar3);
        RenderOccludedDrawableGroup(rt7Core, &local_78, (EffectManager*)(SceneViewData*)effectManager, sceneViewData,
                                    drawableQueue, 1, arg7, nullptr, 1.0);
        if (field_1346 != false) {
            local_31 = (bool)(local_31 ^ 1);
            if (local_31 == false) {
                this_02 = (RenderTargets*)field_800->GetShadowMapAtlasRT();
                arg6 = (bool)this_02->GetDepthStencilTargetTexture();
                SceneRenderPass::DownsampleGPUDepthBuffer(*this, rt7Core, effectManager, sceneViewData, drawableQueue,
                                                          arg6);
            }
        }
        RenderOccludedDrawableGroup(rt7Core, &local_78, (EffectManager*)(SceneViewData*)effectManager, sceneViewData,
                                    drawableQueue, 8, arg7, nullptr, 1.0);
        RenderOccludedDrawableGroup(rt7Core, &local_78, (EffectManager*)(SceneViewData*)effectManager, sceneViewData,
                                    drawableQueue, 4, arg7, nullptr, 1.0);
        RenderOccludedDrawableGroup(rt7Core, &local_78, (EffectManager*)(SceneViewData*)effectManager, sceneViewData,
                                    drawableQueue, 2, arg7, nullptr, 1.0);
        RenderOccludedDrawableGroup(rt7Core, &local_78, (EffectManager*)(SceneViewData*)effectManager, sceneViewData,
                                    drawableQueue, 5, arg7, nullptr, 1.0);
    }

    // 0x1008b11e0
    void ShadowMapCascade::RenderDebug(EffectManager& effectManager, DrawableQueue& drawableQueue) {
        field_16.RenderDebug();
    }

    // 0x1008b11f0
    void CreateFrustumPointsFromCascadeInterval(std::array<math::Vector4T<float>, 8ul>& vector4s, float arg2,
                                                float arg3, const math::Matrix44T<float>& matrix44) {
        float local_68;
        float local_64;
        float local_60;
        float local_5c;

        new (&local_68) Frustum(matrix44);
        ImVec4 local_108(local_68, local_60, 1.0, 1.0);
        ImVec4 local_f8(local_64, local_5c, 1.0, 1.0);
        ImVec4 local_e8(arg2, arg2, arg2, 1.0);
        ImVec4 local_d8(arg3, arg3, arg3, 1.0);
        uint64_t local_c8 = local_108 * local_e8;
        float fStack_c0 = arg3;
        uint32_t uStack_bc = 0;
        uint64_t local_b8 = local_108 * local_d8;
        float fStack_b0 = arg3;
        uint32_t uStack_ac = 0;
        uint64_t local_a8 = local_f8 * local_e8;
        float fStack_a0 = arg3;
        uint32_t uStack_9c = 0;
        uint64_t local_98 = local_f8 * local_d8;
        mach_header* local_88 = &__mh_execute_header;
        uint64_t uStack_80 = 0;
        uint64_t uStack_70 = 0;
        float fStack_90 = arg3;
        uint32_t uStack_8c = 0;
        Rect<float>* pRVar1 = &vector4s[0];
        *pRVar1 = local_c8;
        uint64_t local_48 = math::Vector4ComponentSelect<float>(local_c8, local_a8, 1);
        float fStack_40 = arg3;
        uint32_t uStack_3c = 0;
        pRVar1 = &vector4s[1];
        *pRVar1 = local_48;
        pRVar1 = &vector4s[2];
        *pRVar1 = local_a8;
        uint64_t uVar2 = math::Vector4ComponentSelect<float>(local_c8, local_a8, local_88);
        fStack_40 = arg3;
        uStack_3c = 0;
        local_48 = uVar2;
        pRVar1 = &vector4s[3];
        *pRVar1 = local_48;
        pRVar1 = &vector4s[4];
        *pRVar1 = local_b8;
        uVar2 = math::Vector4ComponentSelect<float>(local_b8, local_98, 1);
        fStack_40 = arg3;
        uStack_3c = 0;
        local_48 = uVar2;
        pRVar1 = &vector4s[5];
        *pRVar1 = local_48;
        pRVar1 = &vector4s[6];
        *pRVar1 = local_98;
        uVar2 = math::Vector4ComponentSelect<float>(local_b8, local_98, local_88);
        fStack_40 = arg3;
        uStack_3c = 0;
        local_48 = uVar2;
        pRVar1 = &vector4s[7];
        *pRVar1 = local_48;
    }

    // 0x1008b1470
    void CreateFrustumBoundingSphere(math::Sphere& sphere, const std::array<math::Vector4T<float>, 8ul>& vector4s) {
        Vector4T<float>* this_00;
        uint64_t local_108[2];

        BoundingSphereBuilder local_f8;
        local_f8.BeginPass1();
        auto vector4T = vector4s.begin();
        auto pVVar1 = vector4s.end();
        if (vector4T != pVVar1) {
            this_00 = vector4T;
            do {
                local_108[0] = this_00->GetXYZ();
                local_f8.AddPointPass1(*local_108);
                this_00 = this_00 + 16;
            } while (this_00 != pVVar1);
        }
        local_f8.BeginPass2();
        if (vector4T != pVVar1) {
            do {
                local_108[0] = vector4T->GetXYZ();
                local_f8.AddPointPass2(*local_108);
                vector4T = vector4T + 16;
            } while (vector4T != pVVar1);
        }
        local_f8.End();
        auto positionTimeData = local_f8.y();
        sphere = *positionTimeData;
    }

    // 0x1008b15c0
    void CreateLightSpaceFrustumAABB(math::Vector4T<float>* vector41, math::Vector4T<float>* vector42,
                                     const std::array<math::Vector4T<float>, 8ul>& vector4s,
                                     const math::Matrix44T<float>& matrix441, const math::Matrix44T<float>& matrix442) {
        Vector4T<float>* vector4;
        uint64_t uVar1;
        uint64_t in_XMM1_Qa;
        Matrix44T<float> local_c8;
        uint64_t local_68;
        uint32_t uStack_60;
        uint32_t uStack_5c;
        uint64_t local_58;
        uint32_t uStack_50;
        uint32_t uStack_4c;

        Matrix44T<float> local_108;
        unsigned long arg1 = 0;
        math::Matrix44Inverse<float>(local_108, nullptr, matrix441);
        local_c8* local_108;
        Vector4T<float> local_88(3.4028235e+38);
        Vector4T<float> local_78(-3.4028235e+38);
        do {
            vector4 = &vector4s[arg1];
            uVar1 = *vector4 * local_c8;
            uStack_60 = (uint32_t)in_XMM1_Qa;
            uStack_5c = (uint32_t)((unsigned long)in_XMM1_Qa >> 32);
            local_68 = uVar1;
            uVar1 = math::Vector4Min<float>(local_68, local_88);
            uStack_50 = (uint32_t)in_XMM1_Qa;
            uStack_4c = (uint32_t)((unsigned long)in_XMM1_Qa >> 32);
            local_58 = uVar1;
            local_88 = local_58;
            uVar1 = math::Vector4Max<float>(local_68, local_78);
            uStack_50 = (uint32_t)in_XMM1_Qa;
            uStack_4c = (uint32_t)((unsigned long)in_XMM1_Qa >> 32);
            local_58 = uVar1;
            local_78 = local_58;
            arg1 = arg1 + 1;
        } while (arg1 != 8);
        *vector41 = local_88;
        *vector42 = local_78;
    }

    // 0x1008b1ab0
    void ShadowMapCascade::OnOcclusionEnabled() {
        RenderTargetsManager* renderTargetsManager = field_784;
        GetOcclusionRTName(&local_48, this);
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        InitOcclusion(renderTargetsManager, str, field_1346, 32, 32);
        auto local_48 = std::make_unique<OcclusionReprojection, OcclusionManager&, ProjectionMode>(field_16, 1);
        field_768 = local_48;
        if (field_744.empty() != '\0') {
            field_744.set_max_size(1, 0);
        }
    }

    // 0x1008b1d60
    void ShadowMapCascade::RegisterTweakVarsOcclusion(tweak::Container& container) {
        eastl::string local_b0;
        value_type local_90;
        eastl::string local_68;

        int local_6c = m_cascadeID;
        ToString<eastl::string, int>(&local_b0, (unsigned int)&local_6c);
        local_90 + (*((eastl::string*)"Enable Shadow Cascade "));
        local_68 + local_90;
        char* pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        container.AddCheckBox(pcVar1, field_1346);
        local_6c = m_cascadeID;
        ToString<eastl::string, int>(&local_b0, (unsigned int)&local_6c);
        local_90 + (*((eastl::string*)"Enable Shadow Cascade "));
        local_68 + local_90;
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        container.AddCheckBox(pcVar1, field_778);
        local_6c = m_cascadeID;
        ToString<eastl::string, int>(&local_b0, (unsigned int)&local_6c);
        local_90 + (*((eastl::string*)"Show Shadow Cascade "));
        local_68 + local_90;
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        container.AddCheckBox(pcVar1, field_24);
        local_6c = m_cascadeID;
        ToString<eastl::string, int>(&local_b0, (unsigned int)&local_6c);
        local_90 + (*((eastl::string*)"Enable On Shadow Cascade "));
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        std::function<void(tweak::Event const&)>::function<
            ShadowMapCascade::RegisterTweakVarsOcclusion(tweak::Container&)::__3, void>(
            (function<void(tweak::Event const&)>*)&local_68, (__3*)this);
        bool arg3 = (bool)GetOcclusionTestEnabled();
        container.AddCheckBox(pcVar1, local_68, arg3);
    }

    // 0x1008b20f0
    void ShadowMapCascade::GetDrawablesCasterReceiverAABB(float& arg1, math::AABB& aabb1, math::AABB& aabb2,
                                                          const math::Vector4T<float>& vector4,
                                                          const DrawableQueue& drawableQueue) {
        RenderPassType renderPassType;
        Layout* this_00;
        long lVar3;
        long lVar4;
        long lVar5;
        Vector3T<float>* this_01;
        ShadowMapCascade* this_02;
        AABB local_128;
        DrawableGroupType local_dc;

        auto pfVar1 = vector4.second();
        arg1 = *pfVar1;
        auto puVar2 = field_800->GetOrigin();
        uint64_t local_1a8 = *puVar2;
        uint64_t uStack_1a0 = puVar2[1];
        uint64_t local_198 = puVar2[2];
        uint64_t uStack_190 = puVar2[3];
        uint64_t local_188 = puVar2[4];
        uint64_t uStack_180 = puVar2[5];
        uint64_t local_178 = puVar2[6];
        uint64_t uStack_170 = puVar2[7];
        puVar2 = (uint64_t*)field_848.GetScreen();
        uint64_t local_168 = *puVar2;
        uint64_t uStack_160 = puVar2[1];
        uint64_t local_158 = puVar2[2];
        uint64_t uStack_150 = puVar2[3];
        uint64_t local_148 = puVar2[4];
        uint64_t uStack_140 = puVar2[5];
        uint64_t local_138 = puVar2[6];
        uint64_t uStack_130 = puVar2[7];
        OBB local_88;
        OBB local_d8;
        DrawableGroupType drawableGroupType = 0;
        do {
            renderPassType = GetPos();
            local_dc = drawableGroupType;
            this_00 = (Layout*)drawableQueue.GetGroup(drawableGroupType, renderPassType);
            lVar3 = this_00->HeapBeginPtr();
            lVar4 = this_00->end();
            for (; lVar3 != lVar4; lVar3 = lVar3 + 24) {
                lVar5 = *(*((lVar3 + 8)));
                local_88 = (*((lVar5 + 16)));
                if ((*(uint8_t*)(lVar5 + 96) & 8) != 0) {
                    this_01 = (Vector3T<float>*)local_88.GetScreen();
                    *this_01 *= 1.25;
                }
                local_d8 = local_88;
                local_d8.Transform(local_168);
                this_02 = (ShadowMapCascade*)&local_128;
                new (this_02) math::AABB(local_d8);
                if ((*(uint8_t*)(lVar5 + 96) & 1) != 0) {
                    this_02 = (ShadowMapCascade*)aabb1;
                    ((AABB*)(ShadowMapCascade*)aabb1)->AddAABB(local_128);
                }
                if ((*(uint8_t*)(lVar5 + 96) & 2) != 0) {
                    AddReceiverIfVisible(this_02, aabb2, &local_88, &local_128, (Matrix44T<float>*)&local_1a8);
                }
            }
            drawableGroupType = local_dc + 1;
        } while (drawableGroupType != 13);
    }

    // 0x1008b2440
    void ShadowMapCascade::AddReceiverIfVisible(math::AABB& aabb1, const math::OBB& obb, const math::AABB& aabb2,
                                                const math::Matrix44T<float>& matrix44) const {
        uint8_t local_a8[120];

        OBB* this_00 = (OBB*)(local_a8 + 32);
        new (this_00) math::OBB(obb);
        this_00->Transform(matrix44);
        new (local_a8) math::AABB(*this_00);
        aabb1.AddAABB(aabb2);
    }

    // 0x1008b24e0
    bool ShadowMapCascade::IsLastCascade() const {
        int iVar1 = m_cascadeID;
        long lVar3 = field_800->GetHeadList();
        int iVar2 = *(int*)(lVar3 + 8) - 1;
        return iVar1 == iVar2;
    }

    // 0x1008d69d0
    void
    ShadowMapCascade::RegisterTweakVarsOcclusion(tweak::Container&)::$_3::operator()(const tweak::Event& event) const {
        SceneRenderPass* this_00;
        long* plVar1;

        if (event.field_16 == 3) {
            this_00 = field_0;
            plVar1 = (long*)event.operator->();
            this_00->SetOcclusionTestEnabled((bool)(**(void (**)(...))(*plVar1 + 120))(plVar1));
        }
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x1008acd20
    Matrix44T<float>& Matrix44LookAtLH<float>(Matrix44T<float>& matrix44, const Vector3T<float>& vector31,
                                              const Vector3T<float>& vector32, const Vector3T<float>& vector33,
                                              float arg5) {
        ReturnValue local_98;
        uint64_t local_58;
        uint64_t local_38;

        uint32_t local_80 = *(uint32_t*)(vector32 + 8);
        uint64_t local_88 = *(uint64_t*)vector32;
        float local_3c = arg5;
        if (local_88.IsNormal(1e-06) != '\0') {
            local_38 = (ReturnValue)local_3c * &local_88;
            local_58 = (ReturnValue)vector31 + local_38;
            local_88.SetXYZ(local_58);
        }
        local_38 = (ReturnValue)local_88 - vector31;
        ReturnValue* pRVar2 = local_38 = Vector3T<float>::Normalize();
        local_58 = *pRVar2;
        float local_50 = *(float*)(pRVar2 + 1);
        uint64_t local_48 = (ReturnValue)Vector3Cross<float>(vector33, (Vector3T<float>*)&local_58);
        pRVar2 = local_48 = Vector3T<float>::Normalize();
        local_38 = *pRVar2;
        float local_30 = *(float*)(pRVar2 + 1);
        local_98[0] = (ReturnValue)Vector3Cross<float>((Vector3T<float>*)&local_58, (Vector3T<float>*)&local_38);
        pRVar2 = local_98 = Vector3T<float>::Normalize();
        float local_60 = *(float*)(pRVar2 + 1);
        local_48 = *pRVar2;
        float local_78 = (float)local_38;
        local_3c = local_38._4_4_;
        float local_70 = (float)local_48;
        float local_74 = local_48._4_4_;
        float local_68 = (float)local_58;
        float local_6c = local_58._4_4_;
        float local_64 = local_30;
        float local_5c = local_50;
        float local_40 = local_60;
        float fVar3 = Vector3Dot<float>((Vector3T<float>*)&local_38, vector31);
        float fVar4 = Vector3Dot<float>((Vector3T<float>*)&local_48, vector31);
        float fVar5 = Vector3Dot<float>((Vector3T<float>*)&local_58, vector31);
        matrix44.Set(local_78, local_70, local_68, 0.0, local_3c, local_74, local_6c, 0.0, local_64, local_60, local_5c,
                     0.0, -fVar3, -fVar4, -fVar5, 1.0);
        return matrix44;
    }

} // namespace jag::math

// 0x1008b1780
double abs(double arg1) {
    return ABS(arg1);
}
