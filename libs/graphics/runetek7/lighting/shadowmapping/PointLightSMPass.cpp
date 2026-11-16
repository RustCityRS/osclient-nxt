// libs/graphics/runetek7/lighting/shadowmapping/PointLightSMPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "PointLightSMPass.h"

namespace jag::graphics {
    // 0x1008af900
    PointLightSMPass::PointLightSMPass(PointLightSM* pointLightSM, render::CubeFace cubeFace, ThreadPool* threadPool) {
        auto this_00 = pointLightSM->end();
        auto renderTargetsManager = this_00->GetConfigGroup();
        new (this) ShadowPass(1, renderTargetsManager, threadPool);
        field_800 = pointLightSM;
        new (field_816) ViewTransforms();
        new (field_1024) math::OBB();
        new (field_1104) math::Sphere();
        *(uint64_t*)(field_1104 + 16) = 4294967295;
        field_1128 = 4294967295;
    }

    // 0x1008af9a0
    PointLightSMPass::~PointLightSMPass() {}

    // 0x1008af9d0
    void PointLightSMPass::PreparePass(RT7Core& rt7Core, EffectManager& effectManager,
                                       const SceneViewData& sceneViewData, DrawableQueue& drawableQueue) {
        PreparePass(rt7Core, effectManager, sceneViewData, drawableQueue);
    }

    // 0x1008af9e0
    uint64_t PointLightSMPass::BeginPass(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                         EffectManager& effectManager, const SceneViewData& sceneViewData,
                                         const DrawableQueue& drawableQueue) {
        VertexDeclaration* vertexDeclaration;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_12;
        uint8_t local_138[64];

        DrawableQueue* local_48 = drawableQueue;
        ((ViewTransforms*)sceneViewData.SSOBeginPtr())->GetNearFarPlaneDistances(0.0, 0.0);
        Vector3T<float> local_f8(3.4028235e+38);
        DrawCallState local_98(-3.4028235e+38);
        new ((local_138 + 32)) math::AABB(&local_f8, &local_98);
        local_f8 = math::Vector3T(3.4028235e+38);
        local_98 = math::Vector3T(-3.4028235e+38);
        new (local_138) math::AABB(&local_f8, &local_98);
        float local_38 = 0.0;
        float local_34 = 0.0;
        auto pNVar3 = sceneViewData.SSOBeginPtr();
        auto pMVar4 = pNVar3->GetScreen();
        uint8_t uVar1 =
            UpdateLightViewMatrices(local_38, local_34, 0, 0, *((local_138 + 32)), *local_138, *pMVar4, *local_48);
        local_48 = (DrawableQueue*)(((uint64_t)local_48._1_7_ << 8) | (uint8_t)uVar1);
        long lVar5 = field_800->GetShadowParams();
        if (*(int*)(lVar5 + 4) == 0) {
            local_38 = 0.0;
            local_34 = 0.0;
        }
        local_f8 = math::Matrix44T<float>();
        float local_68 = (float)math::Deg2Rad(90.0);
        auto pvVar6 = sceneViewData.GetStaticChildren();
        AddMemberOldV1* this_03 = (AddMemberOldV1*)(*pvVar6)[0];
        float local_64 = (float)this_03->GetViewAspectRatio();
        float local_60 = local_38;
        float local_5c = local_34;
        auto mATRIX_PROJECTION_RANGE = this_03->GetID();
        math::Matrix44PerspectiveFovLH<float>(local_f8, local_68, local_64, local_60, local_5c,
                                              mATRIX_PROJECTION_RANGE);
        uint8_t* this_00 = field_816;
        pNVar3 = (NXTPixToolkit*)sceneViewData.SSOBeginPtr();
        pMVar4 = (Matrix44T<float>*)pNVar3->GetScreen();
        this_00->Set(*pMVar4, local_f8);
        auto this_04 = effectManager.GetEffect<SunlightDirectLighting>(36);
        RT7Core* this_05 = (RT7Core*)sceneViewData.SSOBeginPtr();
        pMVar4 = (Matrix44T<float>*)this_05->GetImmediateThreadPool();
        this_04->SetLightViewProjTrans(*pMVar4);
        Layout* this_06 = (Layout*)sceneViewData.SSOBeginPtr();
        auto vector3 = this_06->SSOBeginPtr();
        this_04->SetLightPos(*vector3);
        this_04->SetNearFarClip(0.0, 0.0);
        auto this_07 = effectManager.GetEffect<SunlightDirectLighting>(79);
        pMVar4 = (Matrix44T<float>*)this_00->GetScreen();
        auto pMVar7 = this_00->GetOrigin();
        this_07->SetViewTransforms(*pMVar4, *pMVar7, local_38, local_34);
        if (((((char)local_48 == '\0') && (PointLightSMManager::m_enableForcedUpdates == '\0')) &&
             (*(unsigned long*)(field_1104 + 16) == 0)) &&
            (field_1128 == 0)) {
            pMVar4 = (Matrix44T<float>*)this_00->GetScreen();
            pNVar3 = (NXTPixToolkit*)sceneViewData.SSOBeginPtr();
            pMVar7 = (Matrix44T<float>*)pNVar3->GetScreen();
            if (!(*pMVar4 != *pMVar7)) {
                pMVar4 = (Matrix44T<float>*)this_00->GetOrigin();
                if (!(*pMVar4 != local_f8)) {
                    return 0;
                }
            }
        }
        DrawCallState* pDVar13 = drawCallState;
        auto pOVar8 = drawCallState.GetOutputMergerState();
        pvVar6 = sceneViewData.GetStaticChildren();
        Viewport* pVVar9 = (Viewport*)(*pvVar6)[0];
        pOVar8->SetViewports(pVVar9, 1);
        pOVar8 = pDVar13->GetOutputMergerState();
        auto puVar10 = sceneViewData.GetRenderTargets();
        pOVar8->SetRenderTargets(*puVar10);
        *(unsigned long*)(field_1104 + 16) = 0;
        field_1128 = 0;
        pDVar13 = &local_98;
        new (pDVar13) render::DrawCallState();
        ShaderProgram* this_09 = ((PrimitiveShaderFamily*)pDVar13->Instance())->GetShaderProgram(0);
        auto this_10 = local_98.GetInputAssemblerState();
        vertexDeclaration = (VertexDeclaration*)this_09->second();
        auto pOVar11 = field_800->end();
        auto this_11 = pOVar11->GetRenderStateNXT();
        auto vertexBuffer = this_11->second();
        this_10->SetVertexStreamData(vertexDeclaration, vertexBuffer);
        auto pRVar12 = local_98.GetRenderPipelineState();
        pRVar12->SetShaderProgram(this_09);
        pDVar13 = &local_98;
        this_12 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                      pDVar13->GetRenderPipelineState();
        lVar5 = pDVar13->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            this_12, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar5 + 1524));
        pDVar13 = &local_98;
        pRVar12 = (RenderPipelineState*)pDVar13->GetRenderPipelineState();
        lVar5 = pDVar13->Instance();
        pRVar12->SetRasteriserState((lVar5 + 1200));
        pDVar13 = &local_98;
        auto this_13 = pDVar13->GetRenderPipelineState();
        lVar5 = pDVar13->Instance();
        this_13->SetHeapSize((lVar5 + 900));
        pOVar8 = local_98.GetOutputMergerState();
        pvVar6 = sceneViewData.GetStaticChildren();
        pVVar9 = (Viewport*)(*pvVar6)[0];
        pOVar8->SetViewports(pVVar9, 1);
        pOVar8 = local_98.GetOutputMergerState();
        puVar10 = (uint64_t*)sceneViewData.GetRenderTargets();
        pOVar8->SetRenderTargets(*puVar10);
        pOVar11 = (OSRenderCore_RenderThread_Common*)field_800->end();
        ((RenderToTextureHelper*)pOVar11->GetRenderStateNXT())->RenderQuad(renderContext, local_98);
        return 1;
    }

    // 0x1008aff00
    uint64_t PointLightSMPass::UpdateLightViewMatrices(float& arg1, float& arg2, unsigned long& arg3,
                                                       unsigned long& arg4, math::AABB& aabb1, math::AABB& aabb2,
                                                       const math::Matrix44T<float>& matrix44,
                                                       const DrawableQueue& drawableQueue) {
        float fVar1;
        float* pfVar2;
        unsigned long* puVar3;
        RenderPassType renderPassType;
        Layout* this_00;
        long lVar5;
        long lVar6;
        Vector3T<float>* pVVar7;
        unsigned long uVar8;
        float* pfVar9;
        uint8_t local_138[40];
        DrawableGroupType local_e4;

        OBB local_88;
        OBB local_d8;
        arg3 = 0;
        arg4 = 0;
        uint64_t uVar10 = 0;
        DrawableGroupType drawableGroupType = 0;
        unsigned long* local_f8 = arg4;
        unsigned long* local_f0 = arg3;
        do {
            renderPassType = GetPos();
            local_e4 = drawableGroupType;
            this_00 = (Layout*)drawableQueue.GetGroup(drawableGroupType, renderPassType);
            lVar5 = this_00->HeapBeginPtr();
            local_138._32_8_ = this_00->end();
            if (lVar5 != local_138._32_8_) {
                do {
                    lVar6 = *(*((lVar5 + 8)));
                    local_88 = (*((lVar6 + 16)));
                    local_d8 = local_88;
                    local_d8.Transform(matrix44);
                    new (local_138) math::AABB(local_d8);
                    if ((*(uint8_t*)(lVar6 + 96) & 1) != 0) {
                        aabb1.AddAABB(*local_138);
                        pVVar7 = (Vector3T<float>*)local_138->SSOBeginPtr();
                        uVar8 = pVVar7->hash();
                        puVar3 = local_f0;
                        hash_combine(local_f0, uVar8);
                        pVVar7 = (Vector3T<float>*)local_138->GetScreen();
                        uVar8 = pVVar7->hash();
                        hash_combine(puVar3, uVar8);
                    }
                    if ((*(uint8_t*)(lVar6 + 96) & 2) != 0) {
                        aabb2.AddAABB(*local_138);
                        pVVar7 = (Vector3T<float>*)aabb2.SSOBeginPtr();
                        uVar8 = pVVar7->hash();
                        puVar3 = local_f8;
                        hash_combine(local_f8, uVar8);
                        pVVar7 = (Vector3T<float>*)aabb2.GetScreen();
                        uVar8 = pVVar7->hash();
                        hash_combine(puVar3, uVar8);
                    }
                    if ((*(uint8_t*)(lVar6 + 96) & 8) != 0) {
                        uVar10 = 1;
                    }
                    lVar5 = lVar5 + 24;
                } while (lVar5 != local_138._32_8_);
            }
            drawableGroupType = local_e4 + 1;
        } while (drawableGroupType != 13);
        if (aabb1.IsValid()) {
            local_138._0_4_ = aabb1.GetMinZ();
            pfVar2 = arg1;
            pfVar9 = std::max<float>(*local_138, arg1);
            *pfVar2 = *pfVar9;
            hash_combine<float>(local_f0, pfVar2);
        }
        if (aabb2.IsValid()) {
            local_138._0_4_ = aabb2.GetMaxZ();
            pfVar2 = arg2;
            pfVar9 = std::min<float>(*local_138, arg2);
            fVar1 = *pfVar9;
            *pfVar2 = fVar1;
            *pfVar2 = fVar1 + 0.1;
            hash_combine<float>(local_f8, pfVar2);
        }
        return uVar10;
    }

    // 0x1008b0210
    void PointLightSMPass::Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                                  EffectManager& effectManager, const SceneViewData& sceneViewData,
                                  DrawableQueue& drawableQueue) {
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_00;
        DrawCallState local_70;

        DrawCallState* pDVar6 = &local_70;
        new (pDVar6) render::DrawCallState(drawCallState);
        this_00 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                      pDVar6->GetRenderPipelineState();
        long lVar2 = pDVar6->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            this_00, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar2 + 2208));
        pDVar6 = &local_70;
        auto this_01 = pDVar6->GetRenderPipelineState();
        lVar2 = pDVar6->Instance();
        this_01->SetHeapSize((lVar2 + 780));
        pDVar6 = &local_70;
        auto pRVar3 = pDVar6->GetRenderPipelineState();
        auto pBVar4 = pDVar6->Instance();
        auto pAVar5 = pBVar4->GetShadowPassRS(1028);
        pRVar3->SetRasteriserState(pAVar5);
        unsigned int uVar1 = GetPos();
        DrawableQueue::RenderGroup(drawableQueue, rt7Core, local_70, (DrawableGroupType)sceneViewData, 0,
                                   *((EffectManager*)(unsigned long)uVar1));
        pDVar6 = &local_70;
        pRVar3 = (RenderPipelineState*)pDVar6->GetRenderPipelineState();
        pBVar4 = (BuiltinStates*)pDVar6->Instance();
        pAVar5 = pBVar4->GetShadowPassRS(0);
        pRVar3->SetRasteriserState(pAVar5);
        uVar1 = GetPos();
        DrawableQueue::RenderGroup(drawableQueue, rt7Core, local_70, (DrawableGroupType)sceneViewData, 1,
                                   *((EffectManager*)(unsigned long)uVar1));
        uVar1 = GetPos();
        DrawableQueue::RenderGroup(drawableQueue, rt7Core, local_70, (DrawableGroupType)sceneViewData, 2,
                                   *((EffectManager*)(unsigned long)uVar1));
    }

    // 0x1008b03b0
    void PointLightSMPass::RenderDebug(EffectManager& effectManager, DrawableQueue& drawableQueue) {}

} // namespace jag::graphics
