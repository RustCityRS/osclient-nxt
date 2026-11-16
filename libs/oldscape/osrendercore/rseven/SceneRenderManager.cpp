// libs/oldscape/osrendercore/rseven/SceneRenderManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.osrendercore

#include "SceneRenderManager.h"

namespace jag::oldscape::rseven {
    // 0x1001cc4e0, 16 bytes, complete-object constructor, placed by class name and debug map
    // SceneRenderManager::SceneRenderManager(jag::graphics::RT7Core*, unsigned long, unsigned long): jumps straight to the base-object constructor

    // 0x1001ce0c0, 2656 bytes, placed by class name
    // SceneRenderManager::RenderView(Scene*, render::RenderTargets*, shared_ptr<render::RenderTargets> const&, int, ViewTransforms const&, render::Viewport const&, jag::graphics::EffectManager&)
    void SceneRenderManager::RenderView(Scene* param_1, RenderTargets* param_2, shared_ptr* param_3, int param_4,
                                        ViewTransforms* param_5, Viewport* param_6, EffectManager* param_7) {
        undefined1* this_00;
        char cVar1;
        uint uVar2;
        GraphRoot* pGVar3;
        GraphNode* this_01;
        ulong* puVar4;
        Matrix44T* pMVar5;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar6;
        undefined8* puVar7;
        long lVar8;
        SunlightDirectLighting* pSVar9;
        uint* puVar10;
        LightScatteringEffect* this_02;
        GeometryPass* pGVar11;
        RenderPass* pRVar12;
        Renderer* pRVar13;
        ForwardLightingPass* this_03;
        SceneRenderPass* this_04;
        vector<game::VisibleShadowCastingLightInfo, eastl::allocator>* this_05;
        EffectManager* pEVar14;
        SSAOPass* pSVar15;
        shared_ptr* psVar16;
        shared_ptr<render::RenderTargets>* this_06;
        RenderTargets* this_07;
        int* piVar17;
        SkyBoxManager* this_08;
        ObjectHighlightPass* this_09;
        ViewTransforms* pVVar18;
        Frustum* pFVar19;
        uint extraout_EDX;
        EffectManager* extraout_RDX;
        int iVar20;
        vector* pvVar21;
        type* ptVar22;
        undefined1 auVar23[12];
        undefined1 local_710[56];
        ClippingState local_6d8[2];
        undefined1 local_6a0[8];
        ViewTransforms* local_698;
        RenderTargets* local_690;
        GraphNode* local_688;
        uint local_67c;
        GraphRoot local_678;
        SceneViewData local_618;
        undefined1 local_378[72];
        Viewport local_330[3];
        undefined1 local_2d8[624];
        undefined1 local_68;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_690 = param_2;
        local_67c = param_4;
        new (local_2d8) jag::graphics::SceneViewData();
        new ((local_378 + 72)) eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>();
        eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>::push_back((Viewport*)(local_378 + 72));
        local_2d8->SetRenderTargetViewports((fixed_vector*)(local_378 + 72));
        if (param_1 == (Scene*)0) {
            local_2d8->SetTransforms(param_5);
        } else {
            _memcpy(&local_618, param_5, 208);
            pGVar3 = (GraphRoot*)param_1->GetSceneGraphRoot();
            this_01 = (GraphNode*)pGVar3->GetRoot();
            puVar4 = (ulong*)this_01->GetWorldTransformationMatrix();
            local_678._0_8_ = *puVar4;
            local_678._8_8_ = puVar4[1];
            local_678._16_8_ = puVar4[2];
            local_678._24_8_ = puVar4[3];
            local_678._32_8_ = puVar4[4];
            local_678._40_8_ = puVar4[5];
            local_678._48_8_ = puVar4[6];
            local_678._56_8_ = puVar4[7];
            local_678.Invert(0);
            pMVar5 = (Matrix44T*)local_618.GetScreen();
            jag::math::operator*((math*)local_378, (Matrix44T*)&local_678, pMVar5);
            pMVar5 = (Matrix44T*)local_618.GetOrigin();
            local_618.Set(local_378, pMVar5);
            local_2d8->SetTransforms((ViewTransforms*)&local_618);
        }
        local_2d8->SetOcclusionTestEnabled(true);
        local_2d8->SetMinOcclusionDrawableRadius(25.0);
        local_2d8->SetMinOcclusionDrawableAxisLength(50.0);
        local_2d8->SetStippleNearClipParams(0.0, 50.0);
        local_2d8->SetStippleFarClipParams(1750.0, 1250.0);
        local_2d8->SetRenderFlags(0);
        local_68 = 0;
        pvVar6 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                     local_690->GetColourTargetTextures();
        puVar7 = (undefined8*)
            eastl::vector<render::Texture*,
                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar6,
                                                                                                                 0);
        lVar8 = (*puVar7)->second();
        param_7->EnableEffect(89, 1 < *(uint*)(lVar8 + 16));
        new ((local_6d8[0].field_8 + 16))
            eastl::vector<std::pair<jag::graphics::GraphEntity*, jag::graphics::GraphEntityTransformData>,
                          eastl::allocator>();
        pGVar3 = (GraphRoot*)param_1->GetSceneGraphRoot();
        pGVar3->VisibilityTest((vector*)(local_6d8[0].field_8 + 16), local_67c, (Frustum*)(local_2d8 + 208), 1, 1,
                               (function*)&field_16, (AABB*)0, (Frustum*)0);
        cVar1 = param_7->IsEnabled(106);
        if (cVar1 != '\0') {
            local_688 = (GraphNode*)param_3;
            pSVar9 = jag::graphics::EffectManager::GetEffect<jag::graphics::SunlightDirectLighting>(param_7);
            pvVar6 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    local_690->GetColourTargetTextures();
            puVar7 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar6, 0);
            puVar10 = (uint*)(*puVar7)->second();
            uVar2 = *puVar10;
            pvVar6 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    local_690->GetColourTargetTextures();
            puVar7 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar6, 0);
            local_698 = (ViewTransforms*)CONCAT44(local_698._4_4_, (float)uVar2);
            lVar8 = (*puVar7)->second();
            new (&local_618) jag::math::Point<float>(local_698._0_4_, (float)*(uint*)(lVar8 + 4));
            pSVar9->SetViewportLookupScale(param_6, (Vector2T*)&local_618);
            param_3 = (shared_ptr*)local_688;
        }
        cVar1 = param_7->IsEnabled(48);
        if (cVar1 != '\0') {
            this_02 =
                (LightScatteringEffect*)jag::graphics::EffectManager::GetEffect<jag::graphics::SunlightDirectLighting>(
                    param_7, 48);
            this_02->Update();
        }
        UpdateSunlightShadows(this, param_7, (SceneViewData*)local_2d8, 1.0);
        if (param_1 == (Scene*)0) {
            local_688 = (GraphNode*)0;
        } else {
            pGVar3 = (GraphRoot*)param_1->GetSceneGraphRoot();
            local_688 = (GraphNode*)pGVar3->GetRoot();
        }
        local_698 = param_5;
        pGVar11 = (GeometryPass*)field_0->GetGeometryPass();
        pGVar11->SetGBufferRT(param_3);
        pRVar12 = (RenderPass*)field_0->GetGeometryPass();
        local_2d8->RenderPassPushBack(pRVar12);
        pRVar12 = (RenderPass*)field_0->GetForwardLightingPass();
        local_2d8->RenderPassPushBack(pRVar12);
        new (&local_618) callstack::Callstack();
        local_618.AddFormatType(3);
        this_00 = &field_392;
        pRVar13 = (Renderer*)std::unique_ptr<SceneGraphRenderer, std::default_delete<SceneGraphRenderer>>::operator->(
            (unique_ptr<SceneGraphRenderer, std::default_delete<SceneGraphRenderer>>*)this_00);
        pRVar13->RenderView((vector*)(local_6d8[0].field_8 + 16), local_2d8, local_688, param_7, true,
                            (RenderPassBitSet*)&local_618);
        local_2d8->RenderPassPopBack();
        local_2d8->RenderPassPopBack();
        this_03 = (ForwardLightingPass*)field_0->GetForwardLightingPass();
        this_03->SetAlphaBlendDepthWrite(false);
        this_04 = (SceneRenderPass*)field_0->GetGeometryPass();
        this_04->SetOcclusionTestEnabled(true);
        this_03->SetOcclusionTestEnabled(false);
        this_05 = (vector<game::VisibleShadowCastingLightInfo, eastl::allocator>*)(local_710 + 24);
        eastl::vector<game::VisibleShadowCastingLightInfo, eastl::allocator>::vector(this_05);
        if (param_1 == (Scene*)0) {
            auVar23._4_8_ = 0;
            auVar23._0_4_ = extraout_EDX;
            auVar23 = auVar23 << 64;
        } else {
            auVar23 = param_1->GetSceneGraphRoot();
        }
        RenderSunlightShadows(this, local_67c, auVar23._8_4_, param_7, (SceneViewData*)local_2d8, auVar23._0_8_);
        if (param_1 != (Scene*)0) {
            this_05 = (vector<game::VisibleShadowCastingLightInfo, eastl::allocator>*)param_1->GetShadowCastingLights(
                local_2d8);
            param_1->GetSceneGraphRoot();
        }
        RenderPointLightShadows((vector*)this, (uint)this_05, local_67c, (EffectManager*)0, (SceneViewData*)param_7,
                                (GraphRoot*)local_2d8);
        jag::graphics::ClippingState::ClippingState(local_6d8, field_0);
        new (&local_618) ImVec4(0.0, 0.0, 0.0, 1.0);
        new (local_378) render::RenderTargetData(0, (Vector4T*)&local_618, 1, 1.0, 0);
        local_378._0_8_ = local_690;
        local_378._48_4_ = 0;
        local_68 = 1;
        local_2d8->SetRenderTargets(local_378);
        pRVar12 = (RenderPass*)field_0->GetForwardLightingPass();
        local_2d8->RenderPassPushBack(pRVar12);
        pEVar14 = (EffectManager*)field_0->GetEffectManager();
        pSVar9 = jag::graphics::EffectManager::GetEffect<jag::graphics::SunlightDirectLighting>(pEVar14, 110);
        cVar1 = (*(code*)pSVar9->field_0[5])(pSVar9);
        if (cVar1 != '\0') {
            pEVar14 = (EffectManager*)field_0->GetEffectManager();
            cVar1 = pEVar14->IsEnabled(110);
            if (cVar1 != '\0') {
                pSVar15 = (SSAOPass*)field_0->GetSSAOPass();
                psVar16 = (shared_ptr*)field_0->GetGBufferRT();
                pSVar15->SetGBufferRT(psVar16);
                pSVar15 = (SSAOPass*)field_0->GetSSAOPass();
                psVar16 = (shared_ptr*)field_0->GetSSAORT();
                pSVar15->SetSSSAORT(psVar16);
                this_06 = (shared_ptr<render::RenderTargets>*)field_0->GetSSAORT();
                this_07 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(this_06);
                pvVar6 = (vector<render::Texture*,
                                 eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                             this_07->GetColourTargetTextures();
                puVar7 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar6, 0);
                piVar17 = (int*)(*puVar7)->second();
                new (local_710) render::Viewport(0, 0, *piVar17, piVar17[1], 0.0, 1.0);
                new (&local_618) jag::graphics::SceneViewData(local_2d8);
                new (&local_678) eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>();
                eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>::push_back((Viewport*)&local_678);
                local_618.SetRenderTargetViewports((fixed_vector*)&local_678);
                pRVar12 = (RenderPass*)field_0->GetSSAOPass();
                local_618.RenderPassPushBack(pRVar12);
                psVar16 = (shared_ptr*)field_0->GetSSAORT();
                pSVar9->SetSSAORT(psVar16);
                new (local_6a0) callstack::Callstack();
                local_6a0->AddFormatType(12);
                pRVar13 =
                    (Renderer*)std::unique_ptr<SceneGraphRenderer, std::default_delete<SceneGraphRenderer>>::operator->(
                        (unique_ptr<SceneGraphRenderer, std::default_delete<SceneGraphRenderer>>*)&field_384);
                pEVar14 = (EffectManager*)field_0->GetEffectManager();
                pRVar13->RenderView(&local_618, pEVar14, false, local_6a0);
                local_618.RenderPassPopBack();
                local_678.~fixed_vector();
                local_618.~SceneViewData();
            }
        }
        pSVar15 = (SSAOPass*)field_0->GetSSAOPass();
        pSVar15->SetGBufferRT((shared_ptr*)&render::RenderTargets::NullRenderTargets);
        (field_0, param_6->field_0, param_6->field_4, param_6->field_8, param_6->field_12, true)
            ->SetClippingRectangle();
        std::function<bool(std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&,
                           jag::math::Frustum_const&, int, jag::math::AABB_const&, jag::math::OBB_const&)>::
            function((function<bool(std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&,
                                    jag::math::Frustum_const&, int, jag::math::AABB_const&,
                                    jag::math::OBB_const&)>*)&local_618);
        this_08 = (SkyBoxManager*)field_0->GetSkyBoxManager();
        this_08->SetViewTransforms(local_698);
        uVar2 = field_0->GetSkyBoxManager();
        jag::graphics::SkyBoxManager::Render(uVar2, local_67c, (EffectManager*)0, (Viewport*)param_7,
                                             (function*)param_6, (GraphRoot*)&local_618);
        pRVar13 = (Renderer*)std::unique_ptr<SceneGraphRenderer, std::default_delete<SceneGraphRenderer>>::operator->(
            (unique_ptr<SceneGraphRenderer, std::default_delete<SceneGraphRenderer>>*)this_00);
        local_678._0_8_ = local_678._0_8_ & 18446744069414584320;
        pGVar3 = &local_678;
        new (pGVar3) callstack::Callstack();
        pRVar13->RenderView(local_2d8, param_7, false, pGVar3);
        local_2d8->RenderPassPopBack();
        this_09 = (ObjectHighlightPass*)field_0->GetObjectHighlightPass();
        this_09->SetBlurSubPassEnabled(false);
        this_09->SetOcclusionTestEnabled(true);
        this_09->SetSilhouetteCoverPassEnabled(false);
        this_09->SetSilhouetteDepthBias(-5.0, -10.0);
        local_2d8->RenderPassPushBack(this_09);
        pRVar13 = (Renderer*)std::unique_ptr<SceneGraphRenderer, std::default_delete<SceneGraphRenderer>>::operator->(
            (unique_ptr<SceneGraphRenderer, std::default_delete<SceneGraphRenderer>>*)this_00);
        local_678._0_8_ = local_678._0_8_ & 18446744069414584320;
        new (pGVar3) callstack::Callstack();
        pvVar21 = (vector*)(local_6d8[0].field_8 + 16);
        pRVar13->RenderView(pvVar21, local_2d8, local_688, param_7, false, pGVar3);
        iVar20 = (int)pvVar21;
        local_2d8->RenderPassPopBack();
        uVar2 = std::unique_ptr<OverlayManager, std::default_delete<OverlayManager>>::operator->(
            (unique_ptr<OverlayManager, std::default_delete<OverlayManager>>*)&field_480);
        OverlayManager::Render(uVar2, iVar20, extraout_RDX, (SceneViewData*)param_7, (Viewport*)local_2d8,
                               (function*)param_6, pGVar3);
        pGVar11 = (GeometryPass*)field_0->GetGeometryPass();
        ptVar22 = (type*)&render::RenderTargets::NullRenderTargets;
        pGVar11->SetGBufferRT((shared_ptr*)&render::RenderTargets::NullRenderTargets);
        pVVar18 = (ViewTransforms*)local_2d8->SSOBeginPtr(ptVar22);
        ViewTransforms::operator=((ViewTransforms*)field_496, pVVar18);
        pFVar19 = (Frustum*)local_2d8->GetTranslation();
        jag::math::Frustum::operator=((Frustum*)(field_496 + 208), pFVar19);
        std::function<bool(std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&,
                           jag::math::Frustum_const&, int, jag::math::AABB_const&, jag::math::OBB_const&)>::
            ~function((function<bool(std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&,
                                     jag::math::Frustum_const&, int, jag::math::AABB_const&,
                                     jag::math::OBB_const&)>*)&local_618);
        local_6d8->~ClippingState();
        ((local_710 + 24))->~vector();
        ((local_6d8[0].field_8 + 16))->~vector();
        ((local_378 + 72))->~fixed_vector();
        local_2d8->~SceneViewData();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1001ceb20, 48 bytes, placed by class name
    // SceneRenderManager::ProcessOverlayUpdates(RenderState::OverlayRSeven*, RenderState::OverlayRSeven*)
    void SceneRenderManager::ProcessOverlayUpdates(OverlayRSeven* param_1, OverlayRSeven* param_2) {
        OverlayManager* this_00;

        this_00 = (OverlayManager*)std::unique_ptr<OverlayManager, std::default_delete<OverlayManager>>::operator->(
            (unique_ptr<OverlayManager, std::default_delete<OverlayManager>>*)&field_480);
        this_00->UpdateModels(param_1, param_2);
    }

    // 0x1001cee10, 1168 bytes, base-object constructor, placed by class name
    // SceneRenderManager::SceneRenderManager(jag::graphics::RT7Core*, unsigned long, unsigned long)
    void SceneRenderManager::SceneRenderManager(RT7Core* param_1, ulong param_2, ulong param_3) {
        ulong uVar1;
        __ph* in_R8;
        __ph* in_R9;
        undefined4 in_stack_fffffffffffffca8;
        undefined4 in_stack_fffffffffffffcac;
        undefined4 in_stack_fffffffffffffcb0;
        undefined4 in_stack_fffffffffffffcb4;
        undefined4 local_338;
        undefined4 uStack_334;
        undefined4 uStack_330;
        undefined4 uStack_32c;
        undefined4 local_320;
        undefined4 uStack_31c;
        undefined4 uStack_318;
        undefined4 uStack_314;
        undefined1 local_308[24];
        allocator local_2f0[8];
        undefined1* local_2e8;
        undefined1* local_2e0;
        undefined1* local_2d8;
        undefined1* local_2d0;
        RT7Core* local_2c8;
        ulong local_2c0;
        ulong local_2b8;
        RenderPassDrawableGroupsConfig local_2b0;
        RenderPassDrawableGroupsConfig local_298;
        RenderPassDrawableGroupsConfig local_280;
        undefined1* local_268[35];
        SunShadowPassVisTestFunctor* local_150;
        undefined8 local_148;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        field_0 = param_1;
        local_150 = (SunShadowPassVisTestFunctor*)PTR_operator___100ee6e70;
        local_148 = 0;
        local_268[0] = &field_8;
        local_2c8 = param_1;
        local_2c0 = param_3;
        local_2b8 = param_2;
        std::bind<bool (jag::graphics::DefaultVisTestFunctor::*)(
                      std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum_const&,
                      jag::math::Frustum_const&, int, jag::math::AABB_const&, jag::math::OBB_const&) const,
                  jag::graphics::DefaultVisTestFunctor*, std::placeholders::__ph<1> const&,
                  std::placeholders::__ph<2> const&, std::placeholders::__ph<3> const&,
                  std::placeholders::__ph<4> const&, std::placeholders::__ph<5> const&,
                  std::placeholders::__ph<6> const&>(
            (_func_bool_array_ptr_Frustum_ptr_Frustum_ptr_int_AABB_ptr_OBB_ptr*)&local_338,
            (DefaultVisTestFunctor**)&local_150, (__ph*)local_268, (__ph*)param_3, in_R8, in_R9,
            (__ph*)CONCAT44(in_stack_fffffffffffffcac, in_stack_fffffffffffffca8),
            (__ph*)CONCAT44(in_stack_fffffffffffffcb4, in_stack_fffffffffffffcb0));
        local_2e8 = &field_16;
        std::function<bool(std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&,
                           jag::math::Frustum_const&, int, jag::math::AABB_const&, jag::math::OBB_const&)>::
            function<
                std::__bind<bool (jag::graphics::DefaultVisTestFunctor::*)(
                                std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum_const&,
                                jag::math::Frustum_const&, int, jag::math::AABB_const&, jag::math::OBB_const&) const,
                            jag::graphics::DefaultVisTestFunctor*, std::placeholders::__ph<1> const&,
                            std::placeholders::__ph<2> const&, std::placeholders::__ph<3> const&,
                            std::placeholders::__ph<4> const&, std::placeholders::__ph<5> const&,
                            std::placeholders::__ph<6> const&>,
                void>(&field_16);
        local_150 = (SunShadowPassVisTestFunctor*)jag::graphics::SunShadowPassVisTestFunctor::operator();
        local_148 = 0;
        local_268[0] = &field_112;
        std::bind<bool (jag::graphics::SunShadowPassVisTestFunctor::*)(
                      std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&, jag::math::Frustum_const&,
                      int, jag::math::AABB_const&, jag::math::OBB_const&) const,
                  jag::graphics::SunShadowPassVisTestFunctor*, std::placeholders::__ph<1> const&,
                  std::placeholders::__ph<2> const&, std::placeholders::__ph<3> const&,
                  std::placeholders::__ph<4> const&, std::placeholders::__ph<5> const&,
                  std::placeholders::__ph<6> const&>(
            (_func_bool_array_ptr_Frustum_ptr_Frustum_ptr_int_AABB_ptr_OBB_ptr*)&local_320, &local_150,
            (__ph*)local_268, (__ph*)param_3, in_R8, in_R9, (__ph*)CONCAT44(uStack_334, local_338),
            (__ph*)CONCAT44(uStack_32c, uStack_330));
        std::function<bool(std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&,
                           jag::math::Frustum_const&, int, jag::math::AABB_const&, jag::math::OBB_const&)>::
            function<
                std::__bind<bool (jag::graphics::SunShadowPassVisTestFunctor::*)(
                                std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&,
                                jag::math::Frustum_const&, int, jag::math::AABB_const&, jag::math::OBB_const&) const,
                            jag::graphics::SunShadowPassVisTestFunctor*, std::placeholders::__ph<1> const&,
                            std::placeholders::__ph<2> const&, std::placeholders::__ph<3> const&,
                            std::placeholders::__ph<4> const&, std::placeholders::__ph<5> const&,
                            std::placeholders::__ph<6> const&>,
                void>(&field_64);
        local_2e0 = &field_64;
        new (&field_112) jag::graphics::SunShadowPassVisTestFunctor();
        new (&field_304) jag::graphics::PointLightShadowPassVisTestFunctor();
        local_150 = (SunShadowPassVisTestFunctor*)jag::graphics::PointLightShadowPassVisTestFunctor::operator();
        local_148 = 0;
        local_268[0] = &field_304;
        std::bind<bool (jag::graphics::PointLightShadowPassVisTestFunctor::*)(
                      std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&, jag::math::Frustum_const&,
                      int, jag::math::AABB_const&, jag::math::OBB_const&) const,
                  jag::graphics::PointLightShadowPassVisTestFunctor*, std::placeholders::__ph<1> const&,
                  std::placeholders::__ph<2> const&, std::placeholders::__ph<3> const&,
                  std::placeholders::__ph<4> const&, std::placeholders::__ph<5> const&,
                  std::placeholders::__ph<6> const&>(
            (_func_bool_array_ptr_Frustum_ptr_Frustum_ptr_int_AABB_ptr_OBB_ptr*)local_308,
            (PointLightShadowPassVisTestFunctor**)&local_150, (__ph*)local_268, (__ph*)param_3, in_R8, in_R9,
            (__ph*)CONCAT44(uStack_31c, local_320), (__ph*)CONCAT44(uStack_314, uStack_318));
        std::function<bool(std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&,
                           jag::math::Frustum_const&, int, jag::math::AABB_const&, jag::math::OBB_const&)>::
            function<
                std::__bind<bool (jag::graphics::PointLightShadowPassVisTestFunctor::*)(
                                std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&,
                                jag::math::Frustum_const&, int, jag::math::AABB_const&, jag::math::OBB_const&) const,
                            jag::graphics::PointLightShadowPassVisTestFunctor*, std::placeholders::__ph<1> const&,
                            std::placeholders::__ph<2> const&, std::placeholders::__ph<3> const&,
                            std::placeholders::__ph<4> const&, std::placeholders::__ph<5> const&,
                            std::placeholders::__ph<6> const&>,
                void>(&field_336);
        local_2d8 = &field_336;
        std::unique_ptr<SceneGraphRenderer, std::default_delete<SceneGraphRenderer>>::unique_ptr<true, void>(
            (unique_ptr<SceneGraphRenderer, std::default_delete<SceneGraphRenderer>>*)&field_384);
        std::unique_ptr<SceneGraphRenderer, std::default_delete<SceneGraphRenderer>>::unique_ptr<true, void>(
            (unique_ptr<SceneGraphRenderer, std::default_delete<SceneGraphRenderer>>*)&field_392);
        uVar1 = local_2b8;
        new (&local_150) eastl::allocator("EASTL vector");
        local_2d0 = &field_400;
        new (local_2d0) eastl::vector<std::pair<jag::graphics::GraphEntity*, jag::graphics::GraphEntityTransformData>,
                                      eastl::allocator>(uVar1, (allocator*)&local_150);
        new (&field_432) jag::math::Vector3T<int>();
        new (&field_444) jag::math::Vector3T<int>();
        field_472 = false;
        std::make_unique<OverlayManager, jag::graphics::RT7Core&>((RT7Core*)&field_480);
        new (field_496) ViewTransforms();
        new ((field_496 + 208)) jag::math::Frustum();
        new ((field_496 + 368)) jag::math::Matrix44T<float>();
        local_150 = (SunShadowPassVisTestFunctor*)((ulong)local_150 & 18446744069414584320);
        (&field_456, (uint*)&local_150)->fill();
        new (local_268) jag::graphics::DrawableQueue::RenderPassDrawableGroupsConfig(0, 768, 0);
        new (&local_2b0) eastl::allocator("EASTL fixed_vector");
        new (&local_150) eastl::fixed_vector<jag::graphics::DrawableQueue::RenderPassDrawableGroupsConfig, 10ul, true,
                                             eastl::allocator>(local_268, 1, &local_2b0);
        std::make_unique<SceneGraphRenderer, jag::graphics::RT7Core*&,
                         eastl::fixed_vector<jag::graphics::DrawableQueue::RenderPassDrawableGroupsConfig, 10ul, true,
                                             eastl::allocator> const&,
                         unsigned long&, unsigned long&>((RT7Core**)local_268, (fixed_vector*)&local_2c8,
                                                         (ulong*)&local_150, &local_2b8);
        std::unique_ptr<SceneGraphRenderer, std::default_delete<SceneGraphRenderer>>::operator=(
            (unique_ptr<SceneGraphRenderer, std::default_delete<SceneGraphRenderer>>*)&field_384,
            (unique_ptr*)local_268);
        local_268->~unique_ptr();
        new (&local_2b0) jag::graphics::DrawableQueue::RenderPassDrawableGroupsConfig(3, 1024, 0);
        new (&local_298) jag::graphics::DrawableQueue::RenderPassDrawableGroupsConfig(4, 1024, 2);
        new (&local_280) jag::graphics::DrawableQueue::RenderPassDrawableGroupsConfig(8, 256, 5);
        eastl::allocator::allocator(local_2f0, "EASTL fixed_vector");
        eastl::fixed_vector<jag::graphics::DrawableQueue::RenderPassDrawableGroupsConfig, 10ul, true,
                            eastl::allocator>::fixed_vector((RenderPassDrawableGroupsConfig*)local_268, &local_2b0, 3,
                                                            local_2f0);
        std::make_unique<SceneGraphRenderer, jag::graphics::RT7Core*&,
                         eastl::fixed_vector<jag::graphics::DrawableQueue::RenderPassDrawableGroupsConfig, 10ul, true,
                                             eastl::allocator> const&,
                         unsigned long&, unsigned long&>((RT7Core**)&local_2b0, (fixed_vector*)&local_2c8,
                                                         (ulong*)local_268, &local_2b8);
        std::unique_ptr<SceneGraphRenderer, std::default_delete<SceneGraphRenderer>>::operator=(
            (unique_ptr<SceneGraphRenderer, std::default_delete<SceneGraphRenderer>>*)&field_392,
            (unique_ptr*)&local_2b0);
        local_2b0.~unique_ptr();
        local_268->~fixed_vector();
        local_150.~fixed_vector();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1001cf590, 80 bytes, placed by class name
    // SceneRenderManager::Clear()
    void SceneRenderManager::Clear() {
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        std::unique_ptr<SceneGraphRenderer, std::default_delete<SceneGraphRenderer>>::operator->(
            (unique_ptr<SceneGraphRenderer, std::default_delete<SceneGraphRenderer>>*)&field_384);
        jag::graphics::Renderer::Clear();
        std::unique_ptr<SceneGraphRenderer, std::default_delete<SceneGraphRenderer>>::operator->(
            (unique_ptr<SceneGraphRenderer, std::default_delete<SceneGraphRenderer>>*)&field_392);
        jag::graphics::Renderer::Clear();
    }

    // 0x1001cff80, 560 bytes, placed by class name
    // SceneRenderManager::UpdateSunlightShadows(jag::graphics::EffectManager&, jag::graphics::SceneViewData const&, float)
    void SceneRenderManager::UpdateSunlightShadows(EffectManager* param_1, SceneViewData* param_2, float param_3) {
        undefined1* this_00;
        DirLightCsmManager* this_01;
        char cVar1;
        ulonglong uVar2;
        SunlightDirectLighting* this_02;
        vector* pvVar3;
        vector* pvVar4;
        Vector3T* pVVar5;
        Vector3T* pVVar6;
        Layout* this_03;
        ulonglong uVar7;
        NPCType* this_04;
        long lVar8;
        float fVar9;
        Matrix44T<float> local_a8[40];
        undefined8 local_80[5];
        DirLightCsmManager* local_58;
        SunlightShadows* local_50;
        Vector3T* local_48;
        float local_3c;
        float local_38;
        float local_34;

        local_34 = param_3;
        cVar1 = param_1->IsEnabled(30);
        if (cVar1 != '\0') {
            local_50 = (SunlightShadows*)jag::graphics::EffectManager::GetEffect<jag::graphics::SunlightDirectLighting>(
                param_1, 30);
            local_58 = (DirLightCsmManager*)local_50->GetSunlightCsmManager();
            uVar2 = FrameTime::GetCurrentTimeMS();
            cVar1 = param_1->IsEnabled(94);
            uVar7 = 18446744073709551615;
            if (cVar1 != '\0') {
                uVar7 = uVar2;
            }
            this_02 = jag::graphics::EffectManager::GetEffect<jag::graphics::SunlightDirectLighting>(param_1, 29);
            this_00 = &field_432;
            (&field_444, (Vector3T*)this_00)->SetXYZ();
            local_80[0] = this_02->GetDirection(uVar7);
            pVVar5 = (Vector3T*)local_80;
            local_48 = (Vector3T*)this_00;
            this_00->SetXYZ(pVVar5);
            field_472 = true;
            pvVar3 = (field_496, (type*)pVVar5)->SSOBeginPtr();
            pvVar4 = param_2->SSOBeginPtr(pVVar5);
            local_80[0] = jag::math::operator-((Vector3T*)pvVar3, (Vector3T*)pvVar4);
            local_3c = (float)local_80->Length();
            field_496->GetScreen();
            local_80->GetRot();
            pVVar5 = (Vector3T*)local_80->second();
            param_2->GetScreen();
            local_a8->GetRot();
            pVVar6 = (Vector3T*)local_a8->second();
            fVar9 = jag::math::Vector3Dot<float>(pVVar5, pVVar6);
            local_38 = (float)::abs(fVar9);
            this_03 = (Layout*)this_02->GetDefaultValue();
            pvVar3 = eastl::string::Layout::SSOBeginPtr(this_03, (type*)pVVar6);
            uVar7 = FrameTime::GetCurrentTimeMS();
            cVar1 = pvVar3->IsTransitioning(uVar7);
            if (((12.5 <= local_3c) || (1e-06 <= 1.0 - local_38)) || (cVar1 != '\0')) {
                field_472 = false;
            }
            local_34 = (float)round(local_34 * 5.0);
            local_34 = local_34 * 0.2;
            this_04 = (NPCType*)local_50->GetSunlightCsmManager();
            lVar8 = this_04->GetHeadList();
            this_01 = local_58;
            local_58->SetCascadeSplitWeight(local_34 * *(float*)(lVar8 + 28));
            this_01->Update(param_2, local_48, (array*)&field_456, field_472);
        }
    }

    // 0x1001d01e0, 1136 bytes, placed by class name
    // SceneRenderManager::RenderSunlightShadows(unsigned int, int, jag::graphics::EffectManager&, jag::graphics::SceneViewData const&, jag::graphics::GraphRoot*)
    void SceneRenderManager::RenderSunlightShadows(uint param_1, int param_2, EffectManager* param_3,
                                                   SceneViewData* param_4, GraphRoot* param_5) {
        int iVar1;
        undefined1* this_00;
        undefined1* puVar2;
        undefined1* puVar3;
        undefined1* puVar4;
        undefined1* this_01;
        undefined1* this_02;
        char cVar5;
        bool bVar6;
        SunlightShadows* this_03;
        RT7Core* this_04;
        RenderContext* this_05;
        long lVar7;
        Vector4T* pVVar8;
        ShadowMapCascade* this_06;
        ViewTransforms* pVVar9;
        Frustum* pFVar10;
        Renderer* this_07;
        GraphNode* pGVar11;
        undefined4 in_register_00000014;
        uint uVar12;
        RT7Core* this_08;
        RenderContext* this_10;
        uint uVar13;
        undefined1 local_320[32];
        uint local_2f0;
        SceneRenderManager* local_2e0;
        undefined1 local_2d8[368];
        RenderTargetData local_168;
        fixed_vector<render::Viewport, 2ul, true, eastl::allocator> local_128[240];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_2e0 = this;
        cVar5 = param_3->IsEnabled(30, CONCAT44(in_register_00000014, param_2));
        if (cVar5 != '\0') {
            this_03 = (SunlightShadows*)jag::graphics::EffectManager::GetEffect<jag::graphics::SunlightDirectLighting>(
                param_3, 30);
            this_04 = (RT7Core*)this_03->GetSunlightCsmManager();
            this_08 = this_04;
            cVar5 = this_04->UpdatePaused();
            if (cVar5 == '\0') {
                this_05 = (RenderContext*)this_08->GetRenderContext();
                new (local_2d8) jag::graphics::SceneViewData();
                this_04->GetShadowMapAtlasRenderTargetData(&local_168);
                local_320->GetShadowMapAtlasViewport();
                eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>::push_back(local_128,
                                                                                              (Viewport*)local_320);
                this_05->SetRenderTargets(local_168.field_0);
                if (local_2e0->field_472 == false) {
                    local_320->GetShadowMapAtlasViewport();
                    this_05->SetViewports(local_320, 1);
                    this_05->SetScissorRectangle(false, local_320);
                    cVar5 = param_3->IsEnabled(37);
                    if (cVar5 != '\0') {
                        local_168.field_48 = local_168.field_48 | 1;
                    }
                    lVar7 = param_3->Instance();
                    this_10 = this_05;
                    this_05->SetBlendState((BlendState*)(lVar7 + 1524));
                    if ((local_168.field_48 & 1) != 0) {
                        pVVar8 = (Vector4T*)std::array<jag::math::Vector4T<float>, 2ul>::operator[](
                            (ulong)&local_168.field_16);
                        this_10 = this_05;
                        this_05->ClearRenderTargets(pVVar8, 1);
                    }
                    if ((local_168.field_48 & 6) != 0) {
                        lVar7 = this_10->Instance();
                        this_05->SetDepthStencilState((DepthStencilState*)(lVar7 + 720));
                        this_05->ClearDepthStencilTarget(local_168.field_52, local_168.field_56, local_168.field_48);
                    }
                }
                lVar7 = this_04->GetHeadList();
                uVar12 = *(uint*)(lVar7 + 8);
                if (uVar12 != 0) {
                    puVar3 = &local_2e0->field_400;
                    local_320._24_8_ = param_4->m_pViewFrustum;
                    this_00 = &local_2e0->field_112;
                    puVar4 = &local_2e0->field_432;
                    this_01 = &local_2e0->field_272;
                    puVar2 = &local_2e0->field_64;
                    this_02 = &local_2e0->field_384;
                    uVar13 = 0;
                    local_2f0 = uVar12;
                    do {
                        this_06 = (ShadowMapCascade*)this_04->GetShadowMapCascade(uVar13);
                        if (this_06 == (ShadowMapCascade*)0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("pCascade",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                      "osrendercore/rseven/SceneRenderManager.cpp",
                                      386, (char*)0);
                        }
                        cVar5 = this_06->CanRender();
                        if (cVar5 != '\0') {
                            this_06->SetClearViewport(local_2e0->field_472);
                            pVVar9 = (ViewTransforms*)this_06->GetLightViewTransforms();
                            ViewTransforms::operator=((ViewTransforms*)local_2d8, pVVar9);
                            bVar6 = (bool)param_4->GetOcclusionTestEnabled();
                            local_2d8->SetOcclusionTestEnabled(bVar6);
                            local_2d8->RenderPassPushBack(this_06);
                            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                            jag::math::Frustum::operator=((Frustum*)this_00, (Frustum*)local_320._24_8_);
                            iVar1 = uVar13 + 2;
                            this_01->SetXYZ(puVar4);
                            *(ShadowMapCascade**)&local_2e0->field_288 = this_06;
                            *(int*)&local_2e0->field_296 = iVar1;
                            if (param_5 != (GraphRoot*)0) {
                                pFVar10 = (Frustum*)this_06->GetCasterCullFrustum();
                                param_5->VisibilityTest(puVar3, param_1, pFVar10, iVar1, iVar1, puVar2, 0,
                                                        local_320._24_8_);
                            }
                            this_07 =
                                (Renderer*)std::
                                    unique_ptr<SceneGraphRenderer, std::default_delete<SceneGraphRenderer>>::operator->(
                                        (unique_ptr<SceneGraphRenderer, std::default_delete<SceneGraphRenderer>>*)
                                            this_02);
                            if (param_5 == (GraphRoot*)0) {
                                pGVar11 = (GraphNode*)0;
                            } else {
                                pGVar11 = (GraphNode*)param_5->GetRoot();
                            }
                            local_320._0_4_ = 0;
                            new (local_320) callstack::Callstack();
                            this_07->RenderView(puVar3, local_2d8, pGVar11, param_3, true, local_320);
                            local_2d8->RenderPassPopBack();
                            uVar12 = local_2f0;
                        }
                        uVar13 = uVar13 + 1;
                    } while (uVar12 != uVar13);
                }
                this_03->Update();
                local_2d8->~SceneViewData();
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1001d0650, 160 bytes, placed by class name
    // SceneRenderManager::RenderPointLightShadows(eastl::vector<game::VisibleShadowCastingLightInfo, eastl::allocator>&, unsigned int, int, jag::graphics::EffectManager&, jag::graphics::SceneViewData const&, jag::graphics::GraphRoot*)
    void SceneRenderManager::RenderPointLightShadows(vector* param_1, uint param_2, int param_3, EffectManager* param_4,
                                                     SceneViewData* param_5, GraphRoot* param_6) {
        RT7Core* pRVar1;
        Renderer* pRVar2;
        undefined4 in_register_00000034;
        GraphRoot* in_stack_00000008;
        PointLightShadowRenderer local_88;
        undefined8 local_58;
        undefined4 local_50;

        local_50 = *(undefined4*)(PTR_ZERO_100ee66e8 + 8);
        local_58 = *(undefined8*)PTR_ZERO_100ee66e8;
        pRVar1 = *(RT7Core**)param_1;
        pRVar2 = (Renderer*)std::unique_ptr<SceneGraphRenderer, std::default_delete<SceneGraphRenderer>>::operator*(
            (unique_ptr<SceneGraphRenderer, std::default_delete<SceneGraphRenderer>>*)(param_1 + 384));
        new (&local_88) game::PointLightShadowRenderer(
            pRVar1, pRVar2, (PointLightShadowPassVisTestFunctor*)(param_1 + 304), (function*)(param_1 + 336),
            (vector*)CONCAT44(in_register_00000034, param_2), (Vector3T*)&local_58);
        local_88.RenderPointLightShadows(param_3, (int)param_4, param_5, param_6, in_stack_00000008);
    }

} // namespace jag::oldscape::rseven
