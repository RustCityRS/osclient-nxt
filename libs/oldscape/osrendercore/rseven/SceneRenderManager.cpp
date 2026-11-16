// libs/oldscape/osrendercore/rseven/SceneRenderManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.osrendercore

#include "SceneRenderManager.h"

namespace jag::oldscape::rseven {
    // 0x1001ce0c0
    void SceneRenderManager::RenderView(Scene* scene, render::RenderTargets* renderTargets1,
                                        const shared_ptr<render::RenderTargets>& renderTargets2, int arg4,
                                        const ViewTransforms& viewTransforms, const render::Viewport& viewport,
                                        jag::graphics::EffectManager& effectManager) {
        GraphRoot* pGVar2;
        GraphNode* this_01;
        ReturnValue* pRVar3;
        Matrix44T<float>* matrix442;
        FogEffect* pFVar7;
        unsigned int* puVar8;
        SSAOPass* pSVar13;
        shared_ptr<render::RenderTargets>* psVar14;
        RenderTargets* this_06;
        int* piVar15;
        Renderer* pRVar16;
        ViewTransforms* viewTransforms_00;
        int extraout_EDX;
        int extraout_EDX_00;
        int arg2;
        unsigned int uVar18;
        uint8_t auVar19[12];
        uint8_t local_710[56];
        uint8_t local_6d8[56];
        uint8_t local_6a0[8];
        ViewTransforms* local_698;
        EffectManager* local_688;
        uint8_t local_678[16];
        ReturnValue local_668;
        ReturnValue RStack_660;
        ReturnValue local_658;
        ReturnValue RStack_650;
        ReturnValue local_648;
        ReturnValue RStack_640;
        uint8_t local_2d8[624];

        new (local_2d8) jag::graphics::SceneViewData();
        fixed_vector<render::Viewport, 2ul> local_330;
        local_330.push_back(viewport);
        local_2d8->SetRenderTargetViewports(local_330);
        if (scene == nullptr) {
            local_2d8->SetTransforms(viewTransforms);
        } else {
            _memcpy(&local_618, viewTransforms, 208);
            pGVar2 = scene->GetSceneGraphRoot();
            this_01 = (GraphNode*)pGVar2->GetRoot();
            pRVar3 = (ReturnValue*)this_01->GetWorldTransformationMatrix();
            local_678._0_8_ = *pRVar3;
            local_678._8_8_ = pRVar3[1];
            local_668 = pRVar3[2];
            RStack_660 = pRVar3[3];
            local_658 = pRVar3[4];
            RStack_650 = pRVar3[5];
            local_648 = pRVar3[6];
            RStack_640 = pRVar3[7];
            *local_678 = jag::math::Matrix44T<float>::Invert(nullptr);
            local_618.GetScreen();
            local_378** local_678;
            matrix442 = (Matrix44T<float>*)local_618.GetOrigin();
            local_618.Set(local_378, *matrix442);
            local_2d8->SetTransforms(local_618);
        }
        local_2d8->SetOcclusionTestEnabled(true);
        local_2d8->SetMinOcclusionDrawableRadius(25.0);
        local_2d8->SetMinOcclusionDrawableAxisLength(50.0);
        local_2d8->SetStippleNearClipParams(0.0, 50.0);
        local_2d8->SetStippleFarClipParams(1750.0, 1250.0);
        local_2d8->SetRenderFlags(0);
        uint8_t local_68 = 0;
        auto pvVar4 = renderTargets1->GetColourTargetTextures();
        uint64_t* puVar5 = (uint64_t*)(*pvVar4)[0];
        long lVar6 = (*puVar5)->second();
        effectManager.EnableEffect(89, 1 < *(unsigned int*)(lVar6 + 16));
        new ((local_6d8 + 24))
            eastl::vector<std::pair<jag::graphics::GraphEntity*, jag::graphics::GraphEntityTransformData>>();
        pGVar2 = scene->GetSceneGraphRoot();
        GraphRoot* graphRoot = nullptr;
        pGVar2->VisibilityTest(*((local_6d8 + 24)), (unsigned int)arg4, *((local_2d8 + 208)), 1, 1, field_16, nullptr,
                               nullptr);
        if (effectManager.IsEnabled(106)) {
            local_688 = (EffectManager*)renderTargets2;
            pFVar7 = effectManager.GetEffect<jag::graphics::SunlightDirectLighting>(106);
            pvVar4 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         renderTargets1->GetColourTargetTextures();
            puVar5 = (uint64_t*)(*pvVar4)[0];
            puVar8 = (unsigned int*)(*puVar5)->second();
            uVar18 = *puVar8;
            pvVar4 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         renderTargets1->GetColourTargetTextures();
            puVar5 = (uint64_t*)(*pvVar4)[0];
            local_698 = (ViewTransforms*)(((uint64_t)local_698._4_4_ << 32) | (uint32_t)((float)uVar18));
            lVar6 = (*puVar5)->second();
            local_618 = jag::math::Point(local_698._0_4_, (float)*(unsigned int*)(lVar6 + 4));
            pFVar7->SetViewportLookupScale(viewport, local_618);
            renderTargets2 = (shared_ptr<render::RenderTargets>*)local_688;
        }
        if (effectManager.IsEnabled(48)) {
            ((LightScatteringEffect*)effectManager.GetEffect<jag::graphics::SunlightDirectLighting>(48))->Update();
        }
        UpdateSunlightShadows(effectManager, *local_2d8, 1.0);
        if (scene == nullptr) {
            local_688 = nullptr;
        } else {
            pGVar2 = scene->GetSceneGraphRoot();
            local_688 = (EffectManager*)pGVar2->GetRoot();
        }
        local_698 = viewTransforms;
        auto pGVar9 = field_0->GetGeometryPass();
        pGVar9->SetGBufferRT(renderTargets2);
        auto pRVar10 = field_0->GetGeometryPass();
        local_2d8->RenderPassPushBack(pRVar10);
        pRVar10 = (RenderPass*)field_0->GetForwardLightingPass();
        local_2d8->RenderPassPushBack(pRVar10);
        SceneViewData local_618;
        local_618.AddFormatType(3);
        uint8_t* this_00 = &field_392;
        vector<std::pair<jag::graphics::GraphEntity*, jag::graphics::GraphEntityTransformData>>* pvVar11 =
            (vector<std::pair<jag::graphics::GraphEntity*, jag::graphics::GraphEntityTransformData>>*)(*this_00)
                .operator->();
        jag::graphics::Renderer::RenderView(pvVar11, (local_6d8 + 24), local_2d8, local_688, (uint8_t)effectManager,
                                            &DAT_00000001);
        local_2d8->RenderPassPopBack();
        local_2d8->RenderPassPopBack();
        auto this_03 = field_0->GetForwardLightingPass();
        this_03->SetAlphaBlendDepthWrite(false);
        ((SceneRenderPass*)field_0->GetGeometryPass())->SetOcclusionTestEnabled(true);
        this_03->SetOcclusionTestEnabled(false);
        vector<game::VisibleShadowCastingLightInfo>* this_05 =
            (vector<game::VisibleShadowCastingLightInfo>*)(local_710 + 24);
        new (this_05) eastl::vector<game::VisibleShadowCastingLightInfo>();
        if (scene == nullptr) {
            pGVar2 = nullptr;
            arg2 = extraout_EDX;
        } else {
            pGVar2 = scene->GetSceneGraphRoot();
            arg2 = extraout_EDX_00;
        }
        RenderSunlightShadows((unsigned int)arg4, arg2, effectManager, *local_2d8, pGVar2);
        if (scene != nullptr) {
            this_05 = (vector<game::VisibleShadowCastingLightInfo>*)scene->GetShadowCastingLights(*local_2d8);
            scene->GetSceneGraphRoot();
        }
        RenderPointLightShadows((vector<game::VisibleShadowCastingLightInfo>*)this, (unsigned int)this_05,
                                (unsigned int)arg4, nullptr, (SceneViewData*)effectManager, (GraphRoot*)local_2d8);
        new (local_6d8) jag::graphics::ClippingState(field_0);
        local_618 = ImVec4(0.0, 0.0, 0.0, 1.0);
        RenderTargetData local_378(nullptr, local_618, 1, 1.0, 0);
        local_378.field_0 = renderTargets1;
        local_378.field_48 = 0;
        local_68 = 1;
        local_2d8->SetRenderTargets(local_378);
        pRVar10 = (RenderPass*)field_0->GetForwardLightingPass();
        local_2d8->RenderPassPushBack(pRVar10);
        auto pEVar12 = field_0->GetEffectManager();
        pFVar7 = pEVar12->GetEffect<jag::graphics::SunlightDirectLighting>(110);
        if (pFVar7->IsValidValue()) {
            pEVar12 = field_0->GetEffectManager();
            if (pEVar12->IsEnabled(110)) {
                pSVar13 = (SSAOPass*)field_0->GetSSAOPass();
                psVar14 = field_0->GetGBufferRT();
                pSVar13->SetGBufferRT(*psVar14);
                pSVar13 = (SSAOPass*)field_0->GetSSAOPass();
                psVar14 = field_0->GetSSAORT();
                pSVar13->SetSSSAORT(*psVar14);
                psVar14 = field_0->GetSSAORT();
                this_06 = (RenderTargets*)(*psVar14).operator->();
                pvVar4 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                             this_06->GetColourTargetTextures();
                puVar5 = (uint64_t*)(*pvVar4)[0];
                piVar15 = (int*)(*puVar5)->second();
                new (local_710) render::Viewport(0, 0, *piVar15, piVar15[1], 0.0, 1.0);
                local_618 = jag::graphics::SceneViewData(*local_2d8);
                new (local_678) eastl::fixed_vector<render::Viewport, 2ul>();
                local_678->push_back(*local_710);
                local_618.SetRenderTargetViewports(*local_678);
                pRVar10 = (RenderPass*)field_0->GetSSAOPass();
                local_618.RenderPassPushBack(pRVar10);
                psVar14 = field_0->GetSSAORT();
                pFVar7->SetSSAORT(*psVar14);
                new (local_6a0) callstack::Callstack();
                local_6a0->AddFormatType(12);
                pRVar16 = (Renderer*)field_384.operator->();
                pEVar12 = field_0->GetEffectManager();
                pRVar16->RenderView(local_618, *pEVar12, false, *local_6a0);
                local_618.RenderPassPopBack();
            }
        }
        pSVar13 = (SSAOPass*)field_0->GetSSAOPass();
        pSVar13->SetGBufferRT(*((shared_ptr<render::RenderTargets>*)&render::RenderTargets::NullRenderTargets));
        field_0->SetClippingRectangle(viewport.field_0, viewport.field_4, viewport.field_8, viewport.field_12, true);
        local_618 =
            std::function<bool(std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&,
                               jag::math::Frustum const&, int, jag::math::AABB const&, jag::math::OBB const&)>();
        auto pSVar17 = field_0->GetSkyBoxManager();
        pSVar17->SetViewTransforms(*local_698);
        pSVar17 = field_0->GetSkyBoxManager();
        pSVar17->Render((unsigned int)arg4, 0, effectManager, viewport, local_618, nullptr);
        pRVar16 = (Renderer*)(*this_00).operator->();
        local_678._0_8_ = local_678._0_8_ & 18446744069414584320;
        Callstack* this_08 = (Callstack*)local_678;
        new (this_08) callstack::Callstack();
        pRVar16->RenderView(*local_2d8, effectManager, false, *this_08);
        local_2d8->RenderPassPopBack();
        auto this_07 = field_0->GetObjectHighlightPass();
        this_07->SetBlurSubPassEnabled(false);
        this_07->SetOcclusionTestEnabled(true);
        this_07->SetSilhouetteCoverPassEnabled(false);
        this_07->SetSilhouetteDepthBias(-5.0, -10.0);
        local_2d8->RenderPassPushBack(this_07);
        pvVar11 = (vector<std::pair<jag::graphics::GraphEntity*, jag::graphics::GraphEntityTransformData>>*)(*this_00)
                      .operator->();
        local_678._0_8_ = local_678._0_8_ & 18446744069414584320;
        new (this_08) callstack::Callstack();
        SceneViewData* sceneViewData = (SceneViewData*)(local_6d8 + 24);
        jag::graphics::Renderer::RenderView(pvVar11, sceneViewData, local_2d8, local_688, (uint8_t)effectManager,
                                            nullptr);
        uVar18 = (unsigned int)sceneViewData;
        local_2d8->RenderPassPopBack();
        auVar19 = field_480.operator->();
        auVar19._0_8_->Render(uVar18, auVar19._8_4_, effectManager, *local_2d8, viewport, *this_08, graphRoot);
        pGVar9 = (GeometryPass*)field_0->GetGeometryPass();
        pGVar9->SetGBufferRT(*((shared_ptr<render::RenderTargets>*)&render::RenderTargets::NullRenderTargets));
        viewTransforms_00 = (ViewTransforms*)local_2d8->SSOBeginPtr();
        *field_496 = *viewTransforms_00;
        auto frustum = local_2d8->GetTranslation();
        (*((field_496 + 208))) = *frustum;
        ((local_710 + 24))->~vector();
        ((local_6d8 + 24))->~vector();
    }

    // 0x1001ceb20
    void SceneRenderManager::ProcessOverlayUpdates(RenderState::OverlayRSeven* overlayRSeven1,
                                                   RenderState::OverlayRSeven* overlayRSeven2) {
        ((OverlayManager*)field_480.operator->())->UpdateModels(overlayRSeven1, overlayRSeven2);
    }

    // 0x1001cee10
    SceneRenderManager::SceneRenderManager(jag::graphics::RT7Core* rt7Core, unsigned long arg2, unsigned long arg3) {
        __ph<4>* in_R9;
        member_function_ptr arg1_00;
        member_function_ptr arg1_01;
        __ph<5>* in_stack_fffffffffffffca8;
        __ph<6>* in_stack_fffffffffffffcb0;
        __ph<5>* local_338;
        __ph<6>* p_Stack_330;
        __ph<5>* local_320;
        __ph<6>* p_Stack_318;
        bool__jag__graphics__PointLightShadowPassVisTestFunctor_______std__array<jag::math::IntersectionType, _10ul>
            ___jag__math__Frustum___jag__math__Frustum_const___int__jag__math__AABB_const___jag__math__OBB_const__
                local_308;
        uint8_t* local_268[35];

        SunShadowPassVisTestFunctor* local_150 = (SunShadowPassVisTestFunctor*)PTR_operator___100ee6e70;
        uint64_t local_148 = 0;
        local_268[0] = &field_8;
        SunShadowPassVisTestFunctor** ppSVar1 = &local_150;
        member_function_ptr mVar2 =
            std::bind<bool (jag::graphics::DefaultVisTestFunctor::*)(
                          std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum const&,
                          jag::math::Frustum const&, int, jag::math::AABB const&, jag::math::OBB const&) const,
                      jag::graphics::DefaultVisTestFunctor*, std::placeholders::__ph<1> const&,
                      std::placeholders::__ph<2> const&, std::placeholders::__ph<3> const&,
                      std::placeholders::__ph<4> const&, std::placeholders::__ph<5> const&,
                      std::placeholders::__ph<6> const&>(&local_338, *ppSVar1, *local_268, *arg2, *arg3, *in_R9,
                                                         *in_stack_fffffffffffffca8, *in_stack_fffffffffffffcb0);
        mVar2.ptr = ppSVar1;
        uint8_t* local_2e8 = &field_16;
        std::function<bool(std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&,
                           jag::math::Frustum const&, int, jag::math::AABB const&, jag::math::OBB const&)>::
            function<
                std::__bind<bool (jag::graphics::DefaultVisTestFunctor::*)(
                                std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum const&,
                                jag::math::Frustum const&, int, jag::math::AABB const&, jag::math::OBB const&) const,
                            jag::graphics::DefaultVisTestFunctor*, std::placeholders::__ph<1> const&,
                            std::placeholders::__ph<2> const&, std::placeholders::__ph<3> const&,
                            std::placeholders::__ph<4> const&, std::placeholders::__ph<5> const&,
                            std::placeholders::__ph<6> const&>,
                void>((function<bool(std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&,
                                     jag::math::Frustum const&, int, jag::math::AABB const&,
                                     jag::math::OBB const&)>*)&field_16,
                      mVar2);
        local_150 = (SunShadowPassVisTestFunctor*)jag::graphics::SunShadowPassVisTestFunctor::operator();
        local_148 = 0;
        ppSVar1 = &local_150;
        local_268[0] = &field_112;
        mVar2 = std::bind<bool (jag::graphics::SunShadowPassVisTestFunctor::*)(
                              std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&,
                              jag::math::Frustum const&, int, jag::math::AABB const&, jag::math::OBB const&) const,
                          jag::graphics::SunShadowPassVisTestFunctor*, std::placeholders::__ph<1> const&,
                          std::placeholders::__ph<2> const&, std::placeholders::__ph<3> const&,
                          std::placeholders::__ph<4> const&, std::placeholders::__ph<5> const&,
                          std::placeholders::__ph<6> const&>(&local_320, *ppSVar1, *local_268, *arg2, *arg3, *in_R9,
                                                             *local_338, *p_Stack_330);
        arg1_00.adj = mVar2.adj;
        arg1_00.ptr = ppSVar1;
        std::function<bool(std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&,
                           jag::math::Frustum const&, int, jag::math::AABB const&, jag::math::OBB const&)>::
            function<
                std::__bind<bool (jag::graphics::SunShadowPassVisTestFunctor::*)(
                                std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&,
                                jag::math::Frustum const&, int, jag::math::AABB const&, jag::math::OBB const&) const,
                            jag::graphics::SunShadowPassVisTestFunctor*, std::placeholders::__ph<1> const&,
                            std::placeholders::__ph<2> const&, std::placeholders::__ph<3> const&,
                            std::placeholders::__ph<4> const&, std::placeholders::__ph<5> const&,
                            std::placeholders::__ph<6> const&>,
                void>((function<bool(std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&,
                                     jag::math::Frustum const&, int, jag::math::AABB const&,
                                     jag::math::OBB const&)>*)&field_64,
                      arg1_00);
        uint8_t* local_2e0 = &field_64;
        new (&field_112) jag::graphics::SunShadowPassVisTestFunctor();
        new (&field_304) jag::graphics::PointLightShadowPassVisTestFunctor();
        local_150 = (SunShadowPassVisTestFunctor*)jag::graphics::PointLightShadowPassVisTestFunctor::operator();
        local_148 = 0;
        ppSVar1 = &local_150;
        local_268[0] = &field_304;
        mVar2 = std::bind<bool (jag::graphics::PointLightShadowPassVisTestFunctor::*)(
                              std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&,
                              jag::math::Frustum const&, int, jag::math::AABB const&, jag::math::OBB const&) const,
                          jag::graphics::PointLightShadowPassVisTestFunctor*, std::placeholders::__ph<1> const&,
                          std::placeholders::__ph<2> const&, std::placeholders::__ph<3> const&,
                          std::placeholders::__ph<4> const&, std::placeholders::__ph<5> const&,
                          std::placeholders::__ph<6> const&>(&local_308, *ppSVar1, *local_268, *arg2, *arg3, *in_R9,
                                                             *local_320, *p_Stack_318);
        arg1_01.adj = mVar2.adj;
        arg1_01.ptr = ppSVar1;
        std::function<bool(std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&,
                           jag::math::Frustum const&, int, jag::math::AABB const&, jag::math::OBB const&)>::
            function<
                std::__bind<bool (jag::graphics::PointLightShadowPassVisTestFunctor::*)(
                                std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&,
                                jag::math::Frustum const&, int, jag::math::AABB const&, jag::math::OBB const&) const,
                            jag::graphics::PointLightShadowPassVisTestFunctor*, std::placeholders::__ph<1> const&,
                            std::placeholders::__ph<2> const&, std::placeholders::__ph<3> const&,
                            std::placeholders::__ph<4> const&, std::placeholders::__ph<5> const&,
                            std::placeholders::__ph<6> const&>,
                void>((function<bool(std::array<jag::math::IntersectionType, 10ul>&, jag::math::Frustum&,
                                     jag::math::Frustum const&, int, jag::math::AABB const&,
                                     jag::math::OBB const&)>*)&field_336,
                      arg1_01);
        uint8_t* local_2d8 = &field_336;
        field_384.unique_ptr<true, void>();
        field_392.unique_ptr<true, void>();
        uint8_t* local_2d0 = &field_400;
        new (local_2d0) eastl::vector<std::pair<jag::graphics::GraphEntity*, jag::graphics::GraphEntityTransformData>>(
            (unsigned long)rt7Core, local_150);
        new (&field_432) jag::math::Vector3T();
        new (&field_444) jag::math::Vector3T();
        field_472 = false;
        field_480 = std::make_unique<OverlayManager, jag::graphics::RT7Core&>(*field_0);
        new (field_496) ViewTransforms();
        new ((field_496 + 208)) jag::math::Frustum();
        new ((field_496 + 368)) jag::math::Matrix44T<float>();
        local_150 = (SunShadowPassVisTestFunctor*)((unsigned long)local_150 & 18446744069414584320);
        field_456.fill(local_150);
        new (local_268) jag::graphics::DrawableQueue::RenderPassDrawableGroupsConfig(0, 768, 0);
        new (&local_150) eastl::fixed_vector<jag::graphics::DrawableQueue::RenderPassDrawableGroupsConfig, 10ul>(
            local_268, DAT_00000001);
        field_384 = *local_268;
        RenderPassDrawableGroupsConfig local_298(4, 1024, 2);
        RenderPassDrawableGroupsConfig local_280(8, 256, 5);
    }

    // 0x1001cf590
    void SceneRenderManager::Clear() {
        field_400.clear();
        auto pRVar1 = field_384.operator->();
        pRVar1->Clear();
        pRVar1 = (Renderer*)field_392.operator->();
        pRVar1->Clear();
    }

    // 0x1001cff80
    void SceneRenderManager::UpdateSunlightShadows(jag::graphics::EffectManager& effectManager,
                                                   const jag::graphics::SceneViewData& sceneViewData, float arg3) {
        uint8_t* vector3;
        DirLightCsmManager* this_00;
        unsigned long long uVar2;
        SunlightDirectLighting* this_01;
        Vector3T<float>* pVVar3;
        Vector3T<float>* pVVar4;
        Layout* this_02;
        Transitionable<jag::math::Vector3T<float>>* this_03;
        unsigned long long uVar5;
        long lVar6;
        float arg1;
        Matrix44T<float> local_a8;
        uint64_t local_80[5];
        DirLightCsmManager* local_58;
        SunlightShadows* local_50;
        Vector3T<float>* local_48;
        float local_3c;
        float local_38;

        float local_34 = arg3;
        bool cVar1 = effectManager.IsEnabled(30);
        if (cVar1) {
            local_50 = (SunlightShadows*)effectManager.GetEffect<jag::graphics::SunlightDirectLighting>(30);
            local_58 = (DirLightCsmManager*)local_50->GetSunlightCsmManager();
            uVar2 = FrameTime::GetCurrentTimeMS();
            cVar1 = effectManager.IsEnabled(94);
            uVar5 = 18446744073709551615;
            if (cVar1) {
                uVar5 = uVar2;
            }
            this_01 = (SunlightDirectLighting*)effectManager.GetEffect<jag::graphics::SunlightDirectLighting>(29);
            vector3 = &field_432;
            field_444.SetXYZ(*vector3);
            local_80[0] = this_01->GetDirection(uVar5);
            local_48 = (Vector3T<float>*)vector3;
            vector3->SetXYZ(*local_80);
            field_472 = true;
            pVVar3 = (Vector3T<float>*)field_496->SSOBeginPtr();
            pVVar4 = (Vector3T<float>*)sceneViewData.SSOBeginPtr();
            local_80[0] = *pVVar3 - *pVVar4;
            local_3c = (float)local_80->Length();
            field_496->GetScreen();
            local_80->GetRot();
            pVVar3 = (Vector3T<float>*)local_80->second();
            sceneViewData.GetScreen();
            local_a8.GetRot();
            pVVar4 = (Vector3T<float>*)local_a8.second();
            arg1 = jag::math::Vector3Dot<float>(*pVVar3, *pVVar4);
            local_38 = (float)::abs(arg1);
            this_02 = (Layout*)this_01->GetDefaultValue();
            this_03 = (Transitionable<jag::math::Vector3T<float>>*)this_02->SSOBeginPtr();
            uVar5 = FrameTime::GetCurrentTimeMS();
            cVar1 = this_03->IsTransitioning(uVar5);
            if (((12.5 <= local_3c) || (1e-06 <= 1.0 - local_38)) || (cVar1)) {
                field_472 = false;
            }
            local_34 = (float)round(local_34 * 5.0);
            local_34 = local_34 * 0.2;
            lVar6 = ((NPCType*)local_50->GetSunlightCsmManager())->GetHeadList();
            this_00 = local_58;
            local_58->SetCascadeSplitWeight(local_34 * *(float*)(lVar6 + 28));
            this_00->Update(sceneViewData, *local_48, field_456, field_472);
        }
    }

    // 0x1001d01e0
    void SceneRenderManager::RenderSunlightShadows(unsigned int arg1, int arg2,
                                                   jag::graphics::EffectManager& effectManager,
                                                   const jag::graphics::SceneViewData& sceneViewData,
                                                   jag::graphics::GraphRoot* graphRoot) {
        int arg4;
        uint8_t* this_00;
        uint8_t* callback;
        uint8_t* sceneViewData_00;
        uint8_t* vector3;
        uint8_t* this_01;
        uint8_t* this_02;
        SunlightShadows* this_03;
        RT7Core* this_04;
        RenderContext* this_05;
        long lVar2;
        BlendState* blendState;
        Vector4T<float>* vector4;
        ShadowMapCascade* this_06;
        ViewTransforms* viewTransforms;
        Frustum* frustum1;
        vector<std::pair<jag::graphics::GraphEntity*, jag::graphics::GraphEntityTransformData>>* pairs;
        EffectManager* pEVar3;
        unsigned int uVar4;
        RT7Core* this_07;
        RenderContext* this_08;
        unsigned int arg1_01;
        uint8_t local_320[32];
        unsigned int local_2f0;
        uint8_t local_2d8[368];
        uint8_t local_168[48];
        unsigned int local_138;
        float local_134;
        unsigned int local_130;
        fixed_vector<render::Viewport, 2ul> local_128;

        SceneRenderManager* local_2e0 = this;
        if (effectManager.IsEnabled(30)) {
            this_03 = (SunlightShadows*)effectManager.GetEffect<jag::graphics::SunlightDirectLighting>(30);
            this_04 = (RT7Core*)this_03->GetSunlightCsmManager();
            this_07 = this_04;
            if (!(this_04->UpdatePaused())) {
                this_05 = (RenderContext*)this_07->GetRenderContext();
                new (local_2d8) jag::graphics::SceneViewData();
                this_04->GetShadowMapAtlasRenderTargetData(*local_168);
                local_320->GetShadowMapAtlasViewport();
                local_128.push_back(*local_320);
                this_05->SetRenderTargets(local_168._0_8_);
                if (local_2e0->field_472 == false) {
                    local_320->GetShadowMapAtlasViewport();
                    this_05->SetViewports(local_320, 1);
                    this_05->SetScissorRectangle(false, *local_320);
                    pEVar3 = effectManager;
                    if (effectManager.IsEnabled(37)) {
                        local_138 = local_138 | 1;
                    }
                    lVar2 = pEVar3->Instance();
                    blendState = (BlendState*)(lVar2 + 1524);
                    this_08 = this_05;
                    this_05->SetBlendState(blendState);
                    if ((local_138 & 1) != 0) {
                        vector4 = (Vector4T<float>*)(*((local_168 + 16)))[(unsigned long)blendState];
                        this_08 = this_05;
                        this_05->ClearRenderTargets(vector4, 1);
                    }
                    if ((local_138 & 6) != 0) {
                        lVar2 = this_08->Instance();
                        this_05->SetDepthStencilState((lVar2 + 720));
                        this_05->ClearDepthStencilTarget(local_134, local_130, local_138);
                    }
                }
                lVar2 = this_04->GetHeadList();
                uVar4 = *(unsigned int*)(lVar2 + 8);
                if (uVar4 != 0) {
                    sceneViewData_00 = &local_2e0->field_400;
                    local_320._24_8_ = sceneViewData.m_pViewFrustum;
                    this_00 = &local_2e0->field_112;
                    vector3 = &local_2e0->field_432;
                    this_01 = &local_2e0->field_272;
                    callback = &local_2e0->field_64;
                    this_02 = &local_2e0->field_384;
                    arg1_01 = 0;
                    local_2f0 = uVar4;
                    do {
                        this_06 = (ShadowMapCascade*)this_04->GetShadowMapCascade(arg1_01);
                        if (this_06 == nullptr) {
                            LogAssert("pCascade",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                      "osrendercore/rseven/SceneRenderManager.cpp",
                                      386, nullptr);
                        }
                        if (this_06->CanRender()) {
                            this_06->SetClearViewport(local_2e0->field_472);
                            viewTransforms = (ViewTransforms*)this_06->GetLightViewTransforms();
                            *local_2d8 = *viewTransforms;
                            local_2d8->SetOcclusionTestEnabled((bool)sceneViewData.GetOcclusionTestEnabled());
                            local_2d8->RenderPassPushBack(this_06);
                            sceneViewData_00->clear();
                            *this_00 = *local_320._24_8_;
                            arg4 = arg1_01 + 2;
                            this_01->SetXYZ(*vector3);
                            *(ShadowMapCascade**)&local_2e0->field_288 = this_06;
                            *(int*)&local_2e0->field_296 = arg4;
                            if (graphRoot != nullptr) {
                                frustum1 = (Frustum*)this_06->GetCasterCullFrustum();
                                graphRoot->VisibilityTest(*sceneViewData_00, arg1, *frustum1, arg4, arg4, *callback,
                                                          nullptr, local_320._24_8_);
                            }
                            pairs = (vector<std::pair<jag::graphics::GraphEntity*,
                                                      jag::graphics::GraphEntityTransformData>>*)(*this_02)
                                        .operator->();
                            if (graphRoot == nullptr) {
                                pEVar3 = nullptr;
                            } else {
                                pEVar3 = (EffectManager*)graphRoot->GetRoot();
                            }
                            local_320._0_4_ = 0;
                            new (local_320) callstack::Callstack();
                            jag::graphics::Renderer::RenderView(pairs, sceneViewData_00, local_2d8, pEVar3,
                                                                (uint8_t)effectManager, &DAT_00000001);
                            local_2d8->RenderPassPopBack();
                            uVar4 = local_2f0;
                        }
                        arg1_01 = arg1_01 + 1;
                    } while (uVar4 != arg1_01);
                }
                this_03->Update();
            }
        }
    }

    // 0x1001d0650
    void SceneRenderManager::RenderPointLightShadows(
        eastl::vector<game::VisibleShadowCastingLightInfo>& visibleShadowCastingLightInfos, unsigned int arg2, int arg3,
        jag::graphics::EffectManager& effectManager, const jag::graphics::SceneViewData& sceneViewData,
        jag::graphics::GraphRoot* graphRoot) {
        uint32_t in_register_00000034;
        GraphRoot* in_stack_00000008;

        uint32_t local_50 = *(uint32_t*)(PTR_ZERO_100ee66e8 + 8);
        uint64_t local_58 = *(uint64_t*)PTR_ZERO_100ee66e8;
        RT7Core* rt7Core = *(RT7Core**)visibleShadowCastingLightInfos;
        auto renderer = *(*((visibleShadowCastingLightInfos + 384)));
        PointLightShadowRenderer local_88(
            *rt7Core, *renderer, *((visibleShadowCastingLightInfos + 304)), *((visibleShadowCastingLightInfos + 336)),
            *((vector<game::VisibleShadowCastingLightInfo>*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2)),
            local_58);
        local_88.RenderPointLightShadows(arg3, (int)effectManager, sceneViewData, *graphRoot, in_stack_00000008);
    }

} // namespace jag::oldscape::rseven
