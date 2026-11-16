// libs/game/runetek5/scene/SceneRenderManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "SceneRenderManager.h"

namespace jag::game {
    // 0x100f39378
    int32_t SceneRenderManager::m_skipObliqueReflectionFrustum = 1;

    // 0x100f3937c
    float SceneRenderManager::m_stencilTransparencyNearClipRange = 50.0f;

    // 0x100f39380
    float SceneRenderManager::m_stencilTransparencyFarClipThreshold = 1750.0f;

    // 0x100f39384
    float SceneRenderManager::m_stencilTransparencyFarClipRange = 1250.0f;

    // 0x1039b4ed8
    bool SceneRenderManager::m_showCameraFrustum;

    // 0x1039b4ed9
    bool SceneRenderManager::m_debugRender;

    // 0x1039b4eda
    bool SceneRenderManager::m_freezeCulling;

    // 0x1039b4edb
    bool SceneRenderManager::m_enableZPrePass;

    // 0x1039b4edc
    int32_t SceneRenderManager::m_enableDeferredShadows;

    // 0x1039b4ee0
    int32_t SceneRenderManager::m_stencilTransparencyNearClipThreshold;

    // 0x100463920
    SceneRenderManager::SceneRenderManager(graphics::RT7Core* rt7Core, unsigned long arg2, unsigned long arg3) {

        RenderPassDrawableGroupsConfig local_1c8(3, 1024, 0);
        RenderPassDrawableGroupsConfig local_1b0(9, 256, 0);
        RenderPassDrawableGroupsConfig local_198(4, 1024, 2);
        RenderPassDrawableGroupsConfig local_180(5, 384, 2);
        RenderPassDrawableGroupsConfig local_168(8, 256, 5);
        fixed_vector<graphics::DrawableQueue::RenderPassDrawableGroupsConfig, 10ul> local_150(&local_1c8, *5);
        RenderPassDrawableGroupsConfig local_358(1, 256, 0);
        RenderPassDrawableGroupsConfig local_340(0, 768, 0);
        RenderPassDrawableGroupsConfig local_328(2, 768, 2);
        RenderPassDrawableGroupsConfig local_310(6, 256, 2);
        RenderPassDrawableGroupsConfig local_2f8(7, 16, 2);
        fixed_vector<graphics::DrawableQueue::RenderPassDrawableGroupsConfig, 10ul> local_2e0(&local_358, *5);
        SceneRenderManager(rt7Core, arg2, arg3, local_150, local_2e0);
    }

    // 0x100463b40
    SceneRenderManager::SceneRenderManager(
        graphics::RT7Core* rt7Core, unsigned long arg2, unsigned long arg3,
        const eastl::fixed_vector<graphics::DrawableQueue::RenderPassDrawableGroupsConfig, 10ul>&
            renderPassDrawableGroupsConfigs1,
        const eastl::fixed_vector<graphics::DrawableQueue::RenderPassDrawableGroupsConfig, 10ul>&
            renderPassDrawableGroupsConfigs2)
        : field_8(rt7Core) {
        member_function_ptr arg1;
        member_function_ptr arg1_00;
        __ph<5>* in_stack_ffffffffffffff28;
        __ph<6>* in_stack_ffffffffffffff30;
        __ph<5>* local_c0;
        __ph<6>* p_Stack_b8;
        __ph<5>* local_a8;
        __ph<6>* p_Stack_a0;
        bool__jag__graphics__DefaultVisTestFunctor_______std__array<math::IntersectionType, _10ul>
            ___jag__math__Frustum_const___jag__math__Frustum_const___int__jag__math__AABB_const___jag__math__OBB_const__
                local_90;
        SunShadowPassVisTestFunctor* local_48;

        __ph<3>* local_58 = (__ph<3>*)arg3;
        fixed_vector<graphics::DrawableQueue::RenderPassDrawableGroupsConfig, _10ul>* local_50 =
            renderPassDrawableGroupsConfigs2;
        uint8_t* local_70 = &field_16;
        new (&field_16)
            eastl::vector<std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData>>(arg2, local_48);
        uint8_t* local_68 = &field_48;
        new (local_68)
            eastl::vector<std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData>>(arg2, local_48);
        __ph<3>* ph3 = local_58;
        new (field_80) SceneGraphRenderer(rt7Core, *local_50, arg2, (unsigned long)local_58);
        local_50 = (fixed_vector<graphics::DrawableQueue::RenderPassDrawableGroupsConfig, _10ul>*)m_mainSceneRenderer;
        uint8_t* local_60 = field_80;
        new (local_50) SceneGraphRenderer(rt7Core, renderPassDrawableGroupsConfigs1, arg2, (unsigned long)ph3);
        new (field_12736) graphics::PointLightShadowPassVisTestFunctor();
        local_48 = (SunShadowPassVisTestFunctor*)graphics::PointLightShadowPassVisTestFunctor::operator();
        uint64_t local_40 = 0;
        SunShadowPassVisTestFunctor** ppSVar9 = &local_48;
        uint8_t* local_38 = field_12736;
        member_function_ptr mVar10 =
            std::bind<bool (graphics::PointLightShadowPassVisTestFunctor::*)(std::array<math::IntersectionType, 10ul>&,
                                                                             math::Frustum&, math::Frustum const&, int,
                                                                             math::AABB const&, math::OBB const&) const,
                      graphics::PointLightShadowPassVisTestFunctor*, std::placeholders::__ph<1> const&,
                      std::placeholders::__ph<2> const&, std::placeholders::__ph<3> const&,
                      std::placeholders::__ph<4> const&, std::placeholders::__ph<5> const&,
                      std::placeholders::__ph<6> const&>(&local_c0, *ppSVar9, local_38, *arg2, *ph3,
                                                         renderPassDrawableGroupsConfigs2, *in_stack_ffffffffffffff28,
                                                         *in_stack_ffffffffffffff30);
        mVar10.ptr = ppSVar9;
        std::function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum const&, int,
                           math::AABB const&, math::OBB const&)>::
            function<std::__bind<bool (graphics::PointLightShadowPassVisTestFunctor::*)(
                                     std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum const&,
                                     int, math::AABB const&, math::OBB const&) const,
                                 graphics::PointLightShadowPassVisTestFunctor*, std::placeholders::__ph<1> const&,
                                 std::placeholders::__ph<2> const&, std::placeholders::__ph<3> const&,
                                 std::placeholders::__ph<4> const&, std::placeholders::__ph<5> const&,
                                 std::placeholders::__ph<6> const&>,
                     void>(
                (function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum const&, int,
                               math::AABB const&, math::OBB const&)>*)(field_12736 + 32),
                mVar10);
        local_58 = (__ph<3>*)(field_12736 + 32);
        new (field_12816) graphics::SunShadowPassVisTestFunctor();
        local_48 = (SunShadowPassVisTestFunctor*)graphics::SunShadowPassVisTestFunctor::operator();
        local_40 = 0;
        ppSVar9 = &local_48;
        local_38 = field_12816;
        mVar10 = std::bind<bool (graphics::SunShadowPassVisTestFunctor::*)(std::array<math::IntersectionType, 10ul>&,
                                                                           math::Frustum&, math::Frustum const&, int,
                                                                           math::AABB const&, math::OBB const&) const,
                           graphics::SunShadowPassVisTestFunctor*, std::placeholders::__ph<1> const&,
                           std::placeholders::__ph<2> const&, std::placeholders::__ph<3> const&,
                           std::placeholders::__ph<4> const&, std::placeholders::__ph<5> const&,
                           std::placeholders::__ph<6> const&>(&local_a8, *ppSVar9, local_38, *arg2, *ph3,
                                                              renderPassDrawableGroupsConfigs2, *local_c0, *p_Stack_b8);
        arg1.adj = mVar10.adj;
        arg1.ptr = ppSVar9;
        std::function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum const&, int,
                           math::AABB const&, math::OBB const&)>::
            function<std::__bind<bool (graphics::SunShadowPassVisTestFunctor::*)(
                                     std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum const&,
                                     int, math::AABB const&, math::OBB const&) const,
                                 graphics::SunShadowPassVisTestFunctor*, std::placeholders::__ph<1> const&,
                                 std::placeholders::__ph<2> const&, std::placeholders::__ph<3> const&,
                                 std::placeholders::__ph<4> const&, std::placeholders::__ph<5> const&,
                                 std::placeholders::__ph<6> const&>,
                     void>(
                (function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum const&, int,
                               math::AABB const&, math::OBB const&)>*)&field_13008,
                arg1);
        local_48 = (SunShadowPassVisTestFunctor*)PTR_operator___100ee6e70;
        local_40 = 0;
        local_38 = &field_13056;
        ppSVar9 = &local_48;
        mVar10 = std::bind<bool (graphics::DefaultVisTestFunctor::*)(std::array<math::IntersectionType, 10ul>&,
                                                                     math::Frustum const&, math::Frustum const&, int,
                                                                     math::AABB const&, math::OBB const&) const,
                           graphics::DefaultVisTestFunctor*, std::placeholders::__ph<1> const&,
                           std::placeholders::__ph<2> const&, std::placeholders::__ph<3> const&,
                           std::placeholders::__ph<4> const&, std::placeholders::__ph<5> const&,
                           std::placeholders::__ph<6> const&>(&local_90, *ppSVar9, local_38, *arg2, *ph3,
                                                              renderPassDrawableGroupsConfigs2, *local_a8, *p_Stack_a0);
        arg1_00.adj = mVar10.adj;
        arg1_00.ptr = ppSVar9;
        std::function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum const&, int,
                           math::AABB const&, math::OBB const&)>::
            function<std::__bind<bool (graphics::DefaultVisTestFunctor::*)(
                                     std::array<math::IntersectionType, 10ul>&, math::Frustum const&,
                                     math::Frustum const&, int, math::AABB const&, math::OBB const&) const,
                                 graphics::DefaultVisTestFunctor*, std::placeholders::__ph<1> const&,
                                 std::placeholders::__ph<2> const&, std::placeholders::__ph<3> const&,
                                 std::placeholders::__ph<4> const&, std::placeholders::__ph<5> const&,
                                 std::placeholders::__ph<6> const&>,
                     void>(
                (function<bool(std::array<math::IntersectionType, 10ul>&, math::Frustum&, math::Frustum const&, int,
                               math::AABB const&, math::OBB const&)>*)&field_13072,
                arg1_00);
        new (&field_13120) eastl::vector<VisibleShadowCastingLightInfo>();
        new (&field_13152)
            eastl::vector_set<LightSource*, eastl::less<LightSource*>, eastl::allocator, eastl::vector<LightSource*>>();
        new (&field_13192) math::Vector3T();
        new (&field_13204) math::Vector3T();
        field_13216 = 0;
        field_13224 = 0;
        field_13232 = false;
        new (&field_13236) LightShadowImportanceKeyGenerator(0.6, 0.1, 0.3);
        new (field_13248) math::ColourHSL(0.0, 0.0, 0.0);
        field_13248[12] = 1;
        field_13264 = 0;
        new (&field_13268) math::Vector3T();
        new (&field_13280) math::Vector3T();
        new (&field_13292) math::Vector3T();
        new (&field_13312) math::Matrix44T<float>();
        new (&field_13376) math::Matrix44T<float>();
        new (field_13440) ViewTransforms();
        new (&field_13648) math::Matrix44T<float>();
        new (field_13712) ViewTransforms();
        new (field_13920) math::Frustum();
        new (field_14080) math::Frustum();
        new (&field_14240) math::PlaneT<float>();
        new (&field_14256) math::PlaneT<float>();
        uint8_t* puVar8 = PTR_IDENTITY_100ee6730;
        uint64_t uVar1 = *(uint64_t*)PTR_IDENTITY_100ee6730;
        uint64_t uVar2 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 8);
        uint64_t uVar3 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 16);
        uint64_t uVar4 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 24);
        uint64_t uVar5 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 32);
        uint64_t uVar6 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 40);
        uint64_t uVar7 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 56);
        field_14320 = *(uint64_t*)(PTR_IDENTITY_100ee6730 + 48);
        field_14328 = uVar7;
        field_14304 = uVar5;
        field_14312 = uVar6;
        field_14288 = uVar3;
        field_14296 = uVar4;
        field_14272 = uVar1;
        field_14280 = uVar2;
        uVar1 = *(uint64_t*)puVar8;
        uVar2 = *(uint64_t*)(puVar8 + 8);
        uVar3 = *(uint64_t*)(puVar8 + 16);
        uVar4 = *(uint64_t*)(puVar8 + 24);
        uVar5 = *(uint64_t*)(puVar8 + 32);
        uVar6 = *(uint64_t*)(puVar8 + 40);
        uVar7 = *(uint64_t*)(puVar8 + 56);
        field_14384 = *(uint64_t*)(puVar8 + 48);
        field_14392 = uVar7;
        field_14368 = uVar5;
        field_14376 = uVar6;
        field_14352 = uVar3;
        field_14360 = uVar4;
        field_14336 = uVar1;
        field_14344 = uVar2;
        uVar1 = *(uint64_t*)(puVar8 + 8);
        uVar2 = *(uint64_t*)(puVar8 + 16);
        uVar3 = *(uint64_t*)(puVar8 + 24);
        uVar4 = *(uint64_t*)(puVar8 + 32);
        uVar5 = *(uint64_t*)(puVar8 + 40);
        uVar6 = *(uint64_t*)(puVar8 + 48);
        uVar7 = *(uint64_t*)(puVar8 + 56);
        field_14400 = *(uint64_t*)puVar8;
        field_14408 = uVar1;
        field_14416 = uVar2;
        field_14424 = uVar3;
        field_14432 = uVar4;
        field_14440 = uVar5;
        field_14448 = uVar6;
        field_14456 = uVar7;
        uVar1 = *(uint64_t*)puVar8;
        uVar2 = *(uint64_t*)(puVar8 + 8);
        uVar3 = *(uint64_t*)(puVar8 + 24);
        uVar4 = *(uint64_t*)(puVar8 + 32);
        uVar5 = *(uint64_t*)(puVar8 + 40);
        uVar6 = *(uint64_t*)(puVar8 + 48);
        uVar7 = *(uint64_t*)(puVar8 + 56);
        field_14480 = *(uint64_t*)(puVar8 + 16);
        field_14488 = uVar3;
        field_14496 = uVar4;
        field_14504 = uVar5;
        field_14512 = uVar6;
        field_14520 = uVar7;
        field_14464 = uVar1;
        field_14472 = uVar2;
        new (m_prevViewTransforms) ViewTransforms();
        new (m_prevViewFrustum) math::Frustum();
        new (&field_14896) math::Matrix44T<float>();
        new (field_14960) math::Frustum();
        field_13120.reserve(4);
        field_13152.reserve(4);
    }

    // 0x100464320
    SceneRenderManager::~SceneRenderManager() {
        field_13120.~vector();
        field_13072.~function();
        field_13008.~function();
        ((field_12736 + 32))->~function();
        m_mainSceneRenderer->~SceneGraphRenderer();
        field_80->~SceneGraphRenderer();
        field_48.~vector();
        field_16.~vector();
    }

    // 0x1004643d0
    void SceneRenderManager::Clear() {
        unsigned int in_EAX;
        uint64_t uStack_18;

        uStack_18._0_4_ = in_EAX;
        field_80->Clear();
        m_mainSceneRenderer->Clear();
        field_16.clear();
        field_48.clear();
        uStack_18 = (unsigned long)(unsigned int)uStack_18;
        field_13216.fill(*((unsigned int*)((long)&uStack_18 + 4)));
    }

    // 0x100464450
    void SceneRenderManager::RenderView(render::RenderTargets* renderTargets1,
                                        const shared_ptr<render::RenderTargets>& renderTargets2, World& world,
                                        unsigned int arg4, int arg5, graphics::EffectManager& effectManager,
                                        const ViewTransforms& viewTransforms, const render::Viewport& viewport,
                                        unsigned int arg9) {
        if (RenderView(render::RenderTargets*, shared_ptr<render::RenderTargets> const&, World&, unsigned int, int,
                       graphics::EffectManager&, ViewTransforms const&, render::Viewport const&,
                       unsigned int)::nullRT == '\0') {
            if (___cxa_guard_acquire(&RenderView(render::RenderTargets*, shared_ptr<render::RenderTargets> const&,
                                                 World&, unsigned int, int, graphics::EffectManager&,
                                                 ViewTransforms const&, render::Viewport const&,
                                                 unsigned int)::nullRT) != 0) {
                new ((shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>*)&RenderView(
                    render::RenderTargets*, shared_ptr<render::RenderTargets> const&, World&, unsigned int, int,
                    graphics::EffectManager&, ViewTransforms const&, render::Viewport const&, unsigned int)::nullRT)
                    shared_ptr();
                ___cxa_atexit(PTR__shared_ptr_100ee5318,
                              &RenderView(render::RenderTargets*, shared_ptr<render::RenderTargets> const&, World&,
                                          unsigned int, int, graphics::EffectManager&, ViewTransforms const&,
                                          render::Viewport const&, unsigned int)::nullRT,
                              4294967296);
                ___cxa_guard_release(&RenderView(render::RenderTargets*, shared_ptr<render::RenderTargets> const&,
                                                 World&, unsigned int, int, graphics::EffectManager&,
                                                 ViewTransforms const&, render::Viewport const&, unsigned int)::nullRT);
            }
        }
        auto this_00 = world.GetSkyBox();
        auto skyBox = this_00->end();
        auto vector4 = world.GetClearColour();
        RenderViewImpl(renderTargets1, renderTargets2, world, arg4, arg5, effectManager, skyBox, nullptr, false,
                       viewTransforms, viewport, *vector4, 1, arg9);
    }

    // 0x100464570
    void SceneRenderManager::RenderViewImpl(
        render::RenderTargets* renderTargets1, const shared_ptr<render::RenderTargets>& renderTargets2, World* world,
        unsigned int arg4, int arg5, graphics::EffectManager& effectManager, const graphics::SkyBox* skyBox,
        const eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>* lightSources, bool arg9,
        const ViewTransforms& viewTransforms, const render::Viewport& viewport, const math::Vector4T<float>& vector4,
        unsigned int arg13, unsigned int arg14) {
        bool cVar2;
        uint8_t arg2;
        unsigned int uVar3;
        RenderTargets* renderTargets2_00;
        long lVar4;
        GraphRoot* pGVar7;
        FogEffect* pFVar8;
        Viewport* viewport_00;
        unsigned int* puVar9;
        GeometryPass* pGVar10;
        RenderPass* pRVar11;
        SceneRenderPass* pSVar12;
        shared_ptr<render::RenderTargets>* renderTargets;
        Rect<float>* this_02;
        ViewTransforms* viewTransforms_00;
        Frustum* pFVar14;
        int extraout_EDX;
        int extraout_EDX_00;
        int arg2_00;
        EffectManager* effectManager_00;
        int iVar17;
        SceneViewData* sceneViewData;
        bool bVar19;
        bool bVar20;
        float arg3_00;
        uint32_t uVar21;
        uint64_t local_3e8;
        uint64_t uStack_3e0;
        uint8_t local_3d0[32];
        EffectManager* local_388;
        uint8_t local_378[48];
        uint8_t local_2d8[432];
        vector<render::Viewport, eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true>> local_128;

        local_388 = (EffectManager*)(((uint64_t)local_388._4_4_ << 32) | (uint32_t)arg5);
        SceneRenderManager* local_390 = (SceneRenderManager*)renderTargets2;
        if (world != nullptr) {
            cVar2 = (world->GetCentreSquare())->operator_cast_to_bool();
            if (!cVar2) {
                LogAssert("!world || world->GetCentreSquare()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "SceneRenderManager.cpp",
                          187, nullptr);
            }
        }
        if (renderTargets1 == nullptr) {
            LogAssert("pDstRT != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "SceneRenderManager.cpp",
                      188, nullptr);
        }
        bool local_37a = false;
        bool local_37b = false;
        renderTargets2_00 = (RenderTargets*)local_390->end();
        SetupGeometryPass(local_37a, local_37b, renderTargets1, renderTargets2_00, effectManager);
        new (local_2d8) graphics::SceneViewData();
        fixed_vector<render::Viewport, 2ul> local_330;
        local_330.push_back(viewport);
        local_2d8->SetRenderTargetViewports(local_330);
        local_2d8->SetTransforms(viewTransforms);
        local_3d0._24_8_ = renderTargets1;
        local_2d8->SetOcclusionTestEnabled((arg14 & 1) == 0);
        local_2d8->SetMinOcclusionDrawableRadius(100.0);
        local_2d8->SetMinOcclusionDrawableAxisLength(200.0);
        local_2d8->SetStippleNearClipParams(m_stencilTransparencyNearClipThreshold, m_stencilTransparencyNearClipRange);
        local_2d8->SetStippleFarClipParams(m_stencilTransparencyFarClipThreshold, m_stencilTransparencyFarClipRange);
        RT7Core* pRVar15 = (RT7Core*)local_3d0._24_8_;
        bool local_68 = arg9;
        local_2d8->SetRenderFlags(arg14);
        bool local_379 = local_37a;
        if (local_37a != false) {
            if (m_enableDeferredShadows == '\0') {
                bVar19 = false;
            } else {
                lVar4 =
                    ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_8->GetShadowBufferRT())
                        ->end();
                bVar19 = lVar4 != 0;
            }
            effectManager.EnableEffect(28, bVar19);
        }
        auto pvVar5 = pRVar15->GetColourTargetTextures();
        uint64_t* puVar6 = (uint64_t*)(*pvVar5)[0];
        lVar4 = (*puVar6)->second();
        effectManager.EnableEffect(89, 1 < *(unsigned int*)(lVar4 + 16));
        if (skyBox == nullptr) {
            arg2 = false;
        } else {
            arg2 = skyBox->HasVisibleSkyTexture();
        }
        effectManager.EnableEffect(85, (bool)arg2);
        SceneViewData* local_3b0 = (SceneViewData*)&field_16;
        local_3b0->clear();
        if (world != nullptr) {
            iVar17 = 1;
            if (local_388._0_4_ != -NAN) {
                iVar17 = (int)local_388._0_4_;
            }
            pGVar7 = world->GetSceneGraphRoot();
            pFVar14 = (Frustum*)(local_2d8 + 208);
            if (m_freezeCulling != '\0') {
                pFVar14 = (Frustum*)field_14960;
            }
            pGVar7->VisibilityTest(*local_3b0, arg4, *pFVar14, iVar17, iVar17, field_13072, nullptr, nullptr);
        }
        cVar2 = effectManager.IsEnabled(26);
        if (cVar2) {
            if (world == nullptr) {
                if (lightSources != nullptr) {
                    GetVisiblePointLights(effectManager, *local_2d8, *lightSources);
                }
            } else {
                GetVisiblePointLights(effectManager, *local_2d8, *world);
            }
        }
        cVar2 = effectManager.IsEnabled(106);
        if (cVar2) {
            pFVar8 = effectManager.GetEffect<graphics::SunlightDirectLighting>(106);
            viewport_00 = &local_128[0];
            pvVar5 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         local_3d0._24_8_->GetColourTargetTextures();
            puVar6 = (uint64_t*)(*pvVar5)[0];
            puVar9 = (unsigned int*)(*puVar6)->second();
            uVar3 = *puVar9;
            pvVar5 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         local_3d0._24_8_->GetColourTargetTextures();
            puVar6 = (uint64_t*)(*pvVar5)[0];
            local_388 = (EffectManager*)(((uint64_t)local_388._4_4_ << 32) | (uint32_t)((float)uVar3));
            lVar4 = (*puVar6)->second();
            new (local_378) math::Point(local_388._0_4_, (float)*(unsigned int*)(lVar4 + 4));
            pFVar8->SetViewportLookupScale(*viewport_00, *local_378);
            pRVar15 = (RT7Core*)local_3d0._24_8_;
        }
        if ((arg14 & 8) == 0) {
            if (world == nullptr) {
                arg3_00 = 1.0;
            } else {
                arg3_00 = (float)world->GetPlayerCameraOffsetScale();
            }
            UpdateSunlightShadows(effectManager, *local_2d8, arg3_00);
            if (world != nullptr) {
                UpdateWaterReflection(effectManager, *local_2d8, *world);
                UpdateWaterCaustics(effectManager, *local_2d8);
            }
        }
        UpdateRefraction(effectManager, viewport);
        SceneRenderManager* pSVar18 = this;
        UpdateSkyBoxes(effectManager, *local_2d8);
        UpdateViewportMap(pSVar18, effectManager);
        if (world == nullptr) {
            local_388 = nullptr;
        } else {
            pGVar7 = world->GetSceneGraphRoot();
            local_388 = (EffectManager*)pGVar7->GetRoot();
        }
        bVar19 = (uint8_t)effectManager;
        if (local_379 != false) {
            pGVar10 = (GeometryPass*)field_8->GetGeometryPass();
            pGVar10->SetGBufferRT(*local_390);
            pRVar11 = (RenderPass*)field_8->GetGeometryPass();
            local_2d8->RenderPassPushBack(pRVar11);
            pRVar11 = (RenderPass*)field_8->GetForwardLightingPass();
            local_2d8->RenderPassPushBack(pRVar11);
            new (local_378) callstack::Callstack();
            local_378->AddFormatType(3);
            graphics::Renderer::RenderView(m_mainSceneRenderer, local_3b0, local_2d8, local_388, bVar19, &DAT_00000001);
            local_2d8->RenderPassPopBack();
            local_2d8->RenderPassPopBack();
        }
        if ((arg14 & 1) == 0) {
            pSVar12 = (SceneRenderPass*)field_8->GetGeometryPass();
            pSVar12->SetOcclusionTestEnabled(local_379);
            bVar20 = local_379 == false;
            pSVar12 = (SceneRenderPass*)field_8->GetForwardLightingPass();
            pSVar12->SetOcclusionTestEnabled(bVar20);
        }
        if ((arg14 & 8) == 0) {
            if (world == nullptr) {
                pGVar7 = nullptr;
            } else {
                pGVar7 = world->GetSceneGraphRoot();
            }
            RenderSkyBoxes(arg4, 0, effectManager, *local_2d8, pGVar7);
            if (world == nullptr) {
                pGVar7 = nullptr;
                iVar17 = extraout_EDX;
            } else {
                pGVar7 = world->GetSceneGraphRoot();
                iVar17 = extraout_EDX_00;
            }
            RenderSunlightShadows(arg4, iVar17, effectManager, *local_2d8, pGVar7);
            if (world == nullptr) {
                pGVar7 = nullptr;
            } else {
                pGVar7 = world->GetSceneGraphRoot();
            }
            RenderPointLightShadows(this, arg4, 0, effectManager, (SceneViewData*)local_2d8, pGVar7);
            if (world != nullptr) {
                pGVar7 = world->GetSceneGraphRoot();
                world->GetClearColour();
                sceneViewData = (SceneViewData*)local_2d8;
                RenderWaterReflection((unsigned int)this, arg4, effectManager_00, (SceneViewData*)effectManager,
                                      (GraphRoot*)sceneViewData, (Vector4T<float>*)pGVar7);
                pGVar7 = world->GetSceneGraphRoot();
                RenderWaterCaustics(arg4, arg2_00, effectManager, *sceneViewData, pGVar7);
            }
            if (local_379 != false) {
                new (local_378) graphics::ClippingState(field_8);
                pFVar8 = effectManager.GetEffect<graphics::SunlightDirectLighting>(28);
                cVar2 = effectManager.IsEnabled(28);
                if (!cVar2) {
                    new (local_3d0) shared_ptr();
                    pFVar8->SetShadowBufferRT(*local_3d0);
                } else {
                    pRVar11 = (RenderPass*)field_8->GetDeferredShadowPass();
                    local_2d8->RenderPassPushBack(pRVar11);
                    renderTargets = (shared_ptr<render::RenderTargets>*)field_8->GetShadowBufferRT();
                    pFVar8->SetShadowBufferRT(*renderTargets);
                }
                bVar20 = m_debugRender != '\0';
                local_3d0._0_4_ = 0;
                new (local_3d0) callstack::Callstack();
                m_mainSceneRenderer->RenderView(*local_2d8, effectManager, (bool)((uint8_t)((arg14 & 2) >> 1) | bVar20),
                                                *local_3d0);
                cVar2 = effectManager.IsEnabled(28);
                pRVar15 = (RT7Core*)local_3d0._24_8_;
                if (cVar2) {
                    local_2d8->RenderPassPopBack();
                }
            }
        }
        new (local_3d0) graphics::ClippingState(field_8);
        uVar21._0_1_ = 0;
        uVar21._1_3_ = 0;
        uint32_t uVar22 = 0;
        Callstack local_3a8(0.0, 0.0, 0.0, 1.0);
        new (local_378) render::RenderTargetData(nullptr, local_3a8, 1, 1.0, 0);
        unsigned int local_348 = arg13;
        local_378._0_8_ = pRVar15;
        if (skyBox == nullptr) {
            this_02 = (Rect<float>*)(*((local_378 + 16)))[0];
        } else {
            if (world == nullptr) {
                uVar21._0_1_ = 0;
                uVar21._1_3_ = 0;
                uVar22 = 0;
                new (&local_3e8) ImVec4(0.0, 0.0, 0.0, 1.0);
            } else {
                puVar6 = (uint64_t*)world->GetClearColour();
                local_3e8 = *puVar6;
                uStack_3e0 = puVar6[1];
            }
            local_3a8._0_8_ = skyBox->GetDesiredClearColour(local_3e8);
            local_3a8._8_4_ = uVar21;
            local_3a8._12_4_ = uVar22;
            this_02 = (Rect<float>*)(*((local_378 + 16)))[(unsigned long)(Vector4T<float>*)&local_3e8];
            vector4 = (Vector4T<float>*)&local_3a8;
        }
        *this_02 = vector4;
        bVar20 = local_37a;
        if (local_37a == false) {
            uVar3 = render::GetDepthTextureClearFlags((Texture*)local_378._0_8_->GetDepthStencilTargetTexture());
            local_348 = local_348 | uVar3;
        } else {
            local_68 = true;
        }
        local_2d8->SetRenderTargets(*local_378);
        bool bVar1 = local_37b;
        if (local_37b != false) {
            pRVar11 = (RenderPass*)field_8->GetSSAOPass();
            local_2d8->RenderPassPushBack(pRVar11);
        }
        pRVar11 = (RenderPass*)field_8->GetForwardLightingPass();
        local_2d8->RenderPassPushBack(pRVar11);
        auto pSVar13 = field_8->GetSSAOPass();
        if (bVar20 == false) {
            local_390 = (SceneRenderManager*)&render::RenderTargets::NullRenderTargets;
        }
        pSVar13->SetGBufferRT(*local_390);
        field_8->SetClippingRectangle(viewport.field_0, viewport.field_4, viewport.field_8, viewport.field_12, true);
        uint8_t* this_03 = m_mainSceneRenderer;
        uint8_t bVar16 = (uint8_t)((arg14 & 2) >> 1);
        bool arg3 = (bool)(bVar16 | m_debugRender != '\0');
        local_390 = this;
        if (bVar20 == false) {
            local_3a8.m_stackFrames = 0;
            local_3a8 = callstack::Callstack();
            graphics::Renderer::RenderView(this_03, local_3b0, local_2d8, local_388, bVar19,
                                           (RenderPassBitSet*)(unsigned long)arg3);
        } else {
            local_3a8.m_stackFrames = 0;
            local_3a8 = callstack::Callstack();
            this_03->RenderView(*local_2d8, effectManager, arg3, local_3a8);
        }
        pSVar18 = local_390;
        local_2d8->RenderPassPopBack();
        if (bVar1 != false) {
            local_2d8->RenderPassPopBack();
        }
        if ((arg14 & 8) == 0) {
            if (-1 < (char)arg14) {
                pRVar11 = (RenderPass*)pSVar18->field_8->GetObjectHighlightPass();
                local_2d8->RenderPassPushBack(pRVar11);
                bVar20 = m_debugRender != '\0';
                local_3a8.m_stackFrames = 0;
                local_3a8 = callstack::Callstack();
                graphics::Renderer::RenderView(this_03, local_3b0, local_2d8, local_388, bVar19,
                                               (RenderPassBitSet*)(unsigned long)(bVar20 | bVar16));
                local_2d8->RenderPassPopBack();
            }
            if ((arg14 & 64) == 0) {
                pRVar11 = (RenderPass*)pSVar18->field_8->GetForwardLightingPass();
                local_2d8->RenderPassPushBack(pRVar11);
                pRVar11 = (RenderPass*)pSVar18->field_8->GetQueryPass();
                local_2d8->RenderPassPushBack(pRVar11);
                local_3a8 = callstack::Callstack();
                local_3a8.AddFormatType(9);
                graphics::Renderer::RenderView(this_03, local_3b0, local_2d8, local_388, bVar19,
                                               (RenderPassBitSet*)(unsigned long)(m_debugRender != '\0' | bVar16));
                local_2d8->RenderPassPopBack();
                local_2d8->RenderPassPopBack();
            }
        }
        pGVar10 = (GeometryPass*)pSVar18->field_8->GetGeometryPass();
        pGVar10->SetGBufferRT(*((shared_ptr<render::RenderTargets>*)&render::RenderTargets::NullRenderTargets));
        pSVar13 = (SSAOPass*)pSVar18->field_8->GetSSAOPass();
        pSVar13->SetGBufferRT(*((shared_ptr<render::RenderTargets>*)&render::RenderTargets::NullRenderTargets));
        UnregisterRenderTargets(pSVar18, effectManager);
        viewTransforms_00 = (ViewTransforms*)local_2d8->SSOBeginPtr();
        *pSVar18->m_prevViewTransforms = *viewTransforms_00;
        pFVar14 = (Frustum*)local_2d8->GetTranslation();
        *pSVar18->m_prevViewFrustum = *pFVar14;
        pRVar15 = (RT7Core*)local_2d8->SSOBeginPtr();
        auto matrix44 = pRVar15->GetImmediateThreadPool();
        pSVar18->field_14896 = *matrix44;
        pSVar18->field_14896 = math::Matrix44T<float>::Invert(nullptr);
        if (m_freezeCulling == '\0') {
            *pSVar18->field_14960 = (*((local_2d8 + 208)));
        }
    }

    // 0x100465230
    void
    SceneRenderManager::RenderView(render::RenderTargets* renderTargets, unsigned int arg2,
                                   graphics::EffectManager& effectManager, const graphics::SkyBox* skyBox,
                                   const eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>& lightSources,
                                   const ViewTransforms& viewTransforms, const render::Viewport& viewport,
                                   unsigned int arg8) {

        if (RenderView(render::RenderTargets*, unsigned int, graphics::EffectManager&, graphics::SkyBox const*,
                       eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL> const&, ViewTransforms const&,
                       render::Viewport const&, unsigned int)::nullRT == '\0') {
            if (___cxa_guard_acquire(
                    &RenderView(render::RenderTargets*, unsigned int, graphics::EffectManager&, graphics::SkyBox const*,
                                eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL> const&,
                                ViewTransforms const&, render::Viewport const&, unsigned int)::nullRT) != 0) {
                new ((shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>*)&RenderView(
                    render::RenderTargets*, unsigned int, graphics::EffectManager&, graphics::SkyBox const*,
                    eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL> const&, ViewTransforms const&,
                    render::Viewport const&, unsigned int)::nullRT) shared_ptr();
                ___cxa_atexit(PTR__shared_ptr_100ee5318,
                              &RenderView(render::RenderTargets*, unsigned int, graphics::EffectManager&,
                                          graphics::SkyBox const*,
                                          eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL> const&,
                                          ViewTransforms const&, render::Viewport const&, unsigned int)::nullRT,
                              4294967296);
                ___cxa_guard_release(&RenderView(render::RenderTargets*, unsigned int, graphics::EffectManager&,
                                                 graphics::SkyBox const*,
                                                 eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL> const&,
                                                 ViewTransforms const&, render::Viewport const&, unsigned int)::nullRT);
            }
        }
        ImVec4 local_58(1.0, 1.0, 1.0, 1.0);
        if (skyBox != nullptr) {
            skyBox->GetDesiredClearColour(local_58);
        }
        RenderViewImpl(renderTargets,
                       *((shared_ptr<render::RenderTargets>*)&RenderView(
                           render::RenderTargets*, unsigned int, graphics::EffectManager&, graphics::SkyBox const*,
                           eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL> const&, ViewTransforms const&,
                           render::Viewport const&, unsigned int)::nullRT),
                       nullptr, arg2, 0, effectManager, skyBox, lightSources, false, viewTransforms, viewport, local_58,
                       1, arg8);
    }

    // 0x100465360
    void
    SceneRenderManager::RenderView(render::RenderTargets* renderTargets1,
                                   const shared_ptr<render::RenderTargets>& renderTargets2, unsigned int arg3,
                                   graphics::EffectManager& effectManager, const graphics::SkyBox* skyBox,
                                   const eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>& lightSources,
                                   bool arg7, const ViewTransforms& viewTransforms, const render::Viewport& viewport,
                                   const math::Vector4T<float>& vector4, unsigned int arg11, unsigned int arg12) {
        RenderViewImpl(renderTargets1, renderTargets2, nullptr, arg3, 0, effectManager, skyBox, lightSources, arg7,
                       viewTransforms, viewport, vector4, arg11, arg12);
    }

    // 0x1004653d0
    void SceneRenderManager::SetupGeometryPass(bool& arg1, bool& arg2, render::RenderTargets* renderTargets1,
                                               render::RenderTargets* renderTargets2,
                                               graphics::EffectManager& effectManager) {
        uint8_t uVar2;
        bool arg2_00;

        char cVar1 = field_8->CanUseGBuffer(renderTargets1, renderTargets2);
        if (cVar1) {
            cVar1 = effectManager.IsEnabled(110);
            uVar2 = true;
            if (!cVar1) {
                cVar1 = effectManager.IsEnabled(111);
                if (!cVar1) {
                    uVar2 = effectManager.IsEnabled(112);
                }
            }
            arg2 = (bool)uVar2;
            cVar1 = m_enableDeferredShadows;
            if (uVar2 != false) {
                cVar1 = '\x01';
            }
            if (m_enableZPrePass != '\0') {
                cVar1 = true;
            }
            arg1 = (bool)cVar1;
            if (m_enableZPrePass == '\0' && m_enableDeferredShadows == '\0') {
                arg2_00 = false;
            } else {
                arg2_00 = arg2 == false;
            }
            effectManager.EnableEffect(91, arg2_00);
        }
    }

    // 0x1004654c0
    void SceneRenderManager::GetVisiblePointLights(graphics::EffectManager& effectManager,
                                                   const graphics::SceneViewData& sceneViewData, const World& world) {
        World* pWVar2;
        uint8_t bVar4;
        uint8_t bVar5;
        int iVar8;
        int* piVar12;
        unsigned int* puVar13;
        PointLightShadows* this_01;
        NXTPixToolkit* this_03;
        OpenGLView* this_04;
        vector<eastl::pair<int, int>>* this_05;
        __9* p_Var14;
        shared_ptr* this_06;
        vector<MapSquareStatus>* pvVar15;
        shared_ptr<MapSquare>* this_08;
        MapSquare* this_09;
        AABB* aabb;
        Layout* pLVar16;
        unsigned long arg1;
        unsigned long arg1_00;
        int local_e8[12];
        unsigned long local_a8;
        vector<eastl::pair<int, int>>* local_a0;
        Frustum* local_98;
        unsigned long local_90;
        Layout* local_88;
        uint64_t local_80;
        uint64_t local_78;
        shared_ptr<LightSource>* local_68;
        vector<eastl::vector<MapSquareStatus>>* local_60;
        Layout* local_50;
        int local_3c;
        uint64_t local_38;

        auto puVar9 = sceneViewData.SSOBeginPtr();
        uint64_t local_b8 = *puVar9;
        uint32_t local_b0 = *(uint32_t*)(puVar9 + 1);
        float* pfVar10 = &local_b8[0];
        uint32_t uVar17 = ::floor(*pfVar10 * 0.00012207031f);
        local_60 = (vector<eastl::vector<MapSquareStatus>>*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)uVar17);
        int iVar6 = world.GetMapSquareMinX();
        pfVar10 = &local_b8[2];
        float local_40 = (float)::floor(*pfVar10 * 0.00012207031f);
        int iVar7 = world.GetMapSquareMinZ();
        auto pvVar11 = world.GetMapSquares();
        bool cVar3 = pvVar11->empty();
        if (!cVar3) {
            iVar6 = (int)(local_60._0_4_ - (float)iVar6);
            if (-3 < iVar6) {
                pvVar11 = world.GetMapSquares();
                iVar8 = pvVar11->size();
                if ((iVar6 < iVar8 + 2) && (iVar7 = (int)(local_40 - (float)iVar7), -3 < iVar7)) {
                    pvVar11 = world.GetMapSquares();
                    iVar8 =
                        ((vector<oldscape::highlight::EntityWithCoord<oldscape::dash3d::Decor>>*)(*pvVar11)[0])->size();
                    if (iVar7 < iVar8 + 2) {
                        local_e8[0] = iVar6 - 2;
                        local_38 = (unsigned long)local_38._4_4_ << 32;
                        piVar12 = std::max<int>(*local_e8, local_38);
                        pWVar2 = world;
                        iVar8 = *piVar12;
                        arg1 = (unsigned long)iVar8;
                        local_e8[0] = iVar6 + 2;
                        iVar6 = world.GetMapSquareWidth();
                        local_38._0_4_ = iVar6;
                        piVar12 = std::min<int>(*local_e8, local_38);
                        local_3c = *piVar12;
                        local_e8[0] = iVar7 - 2;
                        local_38 = (unsigned long)local_38._4_4_ << 32;
                        piVar12 = std::max<int>(*local_e8, local_38);
                        local_a8 = (unsigned long)*piVar12;
                        local_e8[0] = iVar7 + 2;
                        uVar17 = pWVar2->GetMapSquareLength();
                        local_38 = (((uint64_t)local_38._4_4_ << 32) | (uint32_t)uVar17);
                        puVar13 = (unsigned int*)std::min<int>(*local_e8, local_38);
                        local_90 = (unsigned long)*puVar13;
                        field_13120.clear();
                        field_13152.clear();
                        this_01 = (PointLightShadows*)effectManager.GetEffect<graphics::SunlightDirectLighting>(35);
                        local_80 = ((Layout*)this_01->GetPointLightSMManager())->SSOBeginPtr();
                        this_03 = (NXTPixToolkit*)field_8->GetForwardOcclusionRenderPass();
                        local_38 = this_03->GetOcclusionSceneViewData();
                        local_78 = this_03->GetScreen();
                        local_60 = pWVar2->GetMapSquares();
                        if (iVar8 <= local_3c) {
                            local_98 = (Frustum*)sceneViewData.m_pViewFrustum;
                            local_40 = (float)((int)local_90 + 1);
                            local_3c = local_3c + 1;
                            do {
                                arg1_00 = local_a8;
                                if ((int)local_a8 <= (int)local_90) {
                                    do {
                                        pWVar2 = world;
                                        iVar6 = world.GetMapSquareMinX();
                                        iVar7 = pWVar2->GetMapSquareMinZ();
                                        this_06 = ((int)arg1 + iVar6)->GetEffect((int)arg1_00 + iVar7);
                                        pvVar15 = (vector<MapSquareStatus>*)(*local_60)[arg1];
                                        cVar3 = ((*pvVar15)[arg1_00])->operator_cast_to_bool();
                                        if ((cVar3) && (cVar3 = shared_ptr::operator_cast_to_bool(this_06), cVar3)) {
                                            pvVar15 = (vector<MapSquareStatus>*)(*local_60)[arg1];
                                            this_08 = (shared_ptr<MapSquare>*)(*pvVar15)[arg1_00];
                                            this_09 = (MapSquare*)**this_08;
                                            bVar4 = this_09->GetTargetLOD();
                                            if (bVar4 < 4) {
                                                bVar4 = this_09->GetTargetLOD();
                                                bVar5 = world.GetLODSettings()->GetLowestUsableLOD();
                                                if ((bVar4 <= bVar5) &&
                                                    (cVar3 = this_09->GetStaticPointLightsLoaded(), cVar3)) {
                                                    aabb = (AABB*)this_09->GetWorldAABB();
                                                    cVar3 = local_98->TestIntersection(*aabb);
                                                    if (cVar3) {
                                                        pLVar16 = (Layout*)this_09->GetLightSourcesLocal();
                                                        local_50 = (Layout*)this_09->GetLightSourcesRemote();
                                                        local_88 = (Layout*)this_09->GetLightSourcesDynamic();
                                                        cVar3 = pLVar16->empty();
                                                        if (((!cVar3) || (cVar3 = local_50->empty(), !cVar3)) ||
                                                            (cVar3 = local_88->empty(), !cVar3)) {
                                                            this_04 = (OpenGLView*)(*this_06).operator->();
                                                            this_05 = (vector<eastl::pair<int, int>>*)
                                                                          this_04->GetCursorMutex();
                                                            this_05->clear();
                                                            local_68 =
                                                                (shared_ptr<LightSource>*)pLVar16->HeapBeginPtr();
                                                            p_Var14 = (__9*)pLVar16->end();
                                                            local_a0 = this_05;
                                                            eastl::for_each<shared_ptr<LightSource> const*,
                                                                            (graphics::EffectManager&)
                                                                                ->GetVisiblePointLights(
                                                                                    graphics::SceneViewData const&,
                                                                                    World const&)::__9>(
                                                                (shared_ptr<LightSource>*)local_e8, local_68, p_Var14);
                                                            pLVar16 = local_50;
                                                            local_68 =
                                                                (shared_ptr<LightSource>*)local_50->HeapBeginPtr();
                                                            p_Var14 = (__9*)pLVar16->end();
                                                            eastl::for_each<shared_ptr<LightSource> const*,
                                                                            (graphics::EffectManager&)
                                                                                ->GetVisiblePointLights(
                                                                                    graphics::SceneViewData const&,
                                                                                    World const&)::__9>(
                                                                (shared_ptr<LightSource>*)local_e8, local_68, p_Var14);
                                                            pLVar16 = local_88;
                                                            local_50 = (Layout*)local_88->HeapBeginPtr();
                                                            p_Var14 = (__9*)pLVar16->end();
                                                            eastl::for_each<shared_ptr<LightSource> const*,
                                                                            (graphics::EffectManager&)
                                                                                ->GetVisiblePointLights(
                                                                                    graphics::SceneViewData const&,
                                                                                    World const&)::__9>(
                                                                (shared_ptr<LightSource>*)local_e8,
                                                                (shared_ptr<LightSource>*)local_50, p_Var14);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        arg1_00 = arg1_00 + 1;
                                    } while (local_40 != (float)(int)arg1_00);
                                }
                                arg1 = arg1 + 1;
                            } while (local_3c != (int)arg1);
                        }
                    }
                }
            }
        }
    }

    // 0x100465a80
    void SceneRenderManager::GetVisiblePointLights(
        graphics::EffectManager& effectManager, const graphics::SceneViewData& sceneViewData,
        const eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL>& lightSources) {
        long lVar3;
        OpenGLView* this_04;
        shared_ptr<LightSource>* this_05;
        shared_ptr<LightSource>* psVar4;
        LightSource* pLVar5;
        uint8_t local_a8[12];
        float local_9c;
        uint8_t local_78[24];
        vector<eastl::pair<int, int>>* local_60;
        obj_iterator local_48;
        eastl local_38;

        field_13120.clear();
        field_13152.clear();
        auto this_01 = effectManager.GetEffect<graphics::SunlightDirectLighting>(35);
        long lVar2 = ((Layout*)this_01->GetPointLightSMManager())->SSOBeginPtr();
        auto this_03 = graphics::PointLightIndicesEffect::GetEffects();
        &local_38 = (eastl[8])this_03->begin();
        &local_48 = (obj_iterator[8])this_03->end();
        bool cVar1 = local_38 != local_48;
        if (cVar1) {
            local_78._16_8_ = sceneViewData.m_pViewFrustum;
            do {
                lVar3 = *local_38;
                cVar1 = ((lVar3 + 8))->operator_cast_to_bool();
                if (cVar1) {
                    this_04 = (OpenGLView*)(*((lVar3 + 8))).operator->();
                    local_60 = (vector<eastl::pair<int, int>>*)this_04->GetCursorMutex();
                    local_60->clear();
                    this_05 = (shared_ptr<LightSource>*)lightSources.HeapBeginPtr();
                    psVar4 = (shared_ptr<LightSource>*)lightSources.end();
                    for (; this_05 != psVar4; this_05 = this_05 + 16) {
                        (*this_05).operator->();
                        local_a8->GetPointLight();
                        new (local_78) math::Sphere(*local_a8, local_9c);
                        pLVar5 = (LightSource*)(*this_05).operator->();
                        pLVar5->SetVisibleLastFrame(false);
                        cVar1 = local_78._16_8_->TestIntersection(*local_78);
                        if (cVar1) {
                            local_60->push_back(*local_78);
                            pLVar5 = (LightSource*)(*this_05).operator->();
                            pLVar5->SetVisibleLastFrame(true);
                            AddShadowCastingPointLight(sceneViewData, *(float*)(lVar2 + 24), *(float*)(lVar2 + 20),
                                                       *this_05, *local_78);
                        }
                    }
                }
                ++local_38;
                cVar1 = local_38 != local_48;
            } while (cVar1);
        }
    }

    // 0x100465cc0
    void SceneRenderManager::UpdateSunlightShadows(graphics::EffectManager& effectManager,
                                                   const graphics::SceneViewData& sceneViewData, float arg3) {
        uint8_t* vector3;
        DirLightCsmManager* this_00;
        unsigned long long uVar2;
        SunlightDirectLighting* this_01;
        Vector3T<float>* pVVar3;
        Vector3T<float>* pVVar4;
        Layout* this_02;
        Transitionable<math::Vector3T<float>>* this_03;
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
            local_50 = (SunlightShadows*)effectManager.GetEffect<graphics::SunlightDirectLighting>(30);
            local_58 = (DirLightCsmManager*)local_50->GetSunlightCsmManager();
            uVar2 = FrameTime::GetCurrentTimeMS();
            cVar1 = effectManager.IsEnabled(94);
            uVar5 = 18446744073709551615;
            if (cVar1) {
                uVar5 = uVar2;
            }
            this_01 = (SunlightDirectLighting*)effectManager.GetEffect<graphics::SunlightDirectLighting>(29);
            vector3 = &field_13192;
            field_13204.SetXYZ(*vector3);
            local_80[0] = this_01->GetDirection(uVar5);
            local_48 = (Vector3T<float>*)vector3;
            vector3->SetXYZ(*local_80);
            field_13232 = true;
            pVVar3 = (Vector3T<float>*)m_prevViewTransforms->SSOBeginPtr();
            pVVar4 = (Vector3T<float>*)sceneViewData.SSOBeginPtr();
            local_80[0] = *pVVar3 - *pVVar4;
            local_3c = (float)local_80->Length();
            m_prevViewTransforms->GetScreen();
            local_80->GetRot();
            pVVar3 = (Vector3T<float>*)local_80->second();
            sceneViewData.GetScreen();
            local_a8.GetRot();
            pVVar4 = (Vector3T<float>*)local_a8.second();
            arg1 = math::Vector3Dot<float>(*pVVar3, *pVVar4);
            local_38 = (float)::abs(arg1);
            this_02 = (Layout*)this_01->GetDefaultValue();
            this_03 = (Transitionable<math::Vector3T<float>>*)this_02->SSOBeginPtr();
            uVar5 = FrameTime::GetCurrentTimeMS();
            cVar1 = this_03->IsTransitioning(uVar5);
            if (((12.5 <= local_3c) || (1e-06 <= 1.0 - local_38)) || (cVar1)) {
                field_13232 = false;
            }
            local_34 = (float)round(local_34 * 5.0);
            local_34 = local_34 * 0.2;
            lVar6 = ((NPCType*)local_50->GetSunlightCsmManager())->GetHeadList();
            this_00 = local_58;
            local_58->SetCascadeSplitWeight(local_34 * *(float*)(lVar6 + 28));
            this_00->Update(sceneViewData, *local_48, field_13216, field_13232);
        }
    }

    // 0x100465f00
    void SceneRenderManager::UpdateWaterReflection(graphics::EffectManager& effectManager,
                                                   const graphics::SceneViewData& sceneViewData, const World& world) {
        uint64_t* puVar2;
        int iVar3;
        bool cVar5;
        float fVar7;
        unsigned int uVar8;
        unsigned int* puVar12;
        int* piVar13;
        long* plVar15;
        char* str;
        shared_ptr* this_07;
        MapSquare* this_08;
        Layout* this_09;
        shared_ptr<graphics::WaterPatch>* this_10;
        shared_ptr<graphics::WaterPatch>* psVar17;
        WaterPatch* this_11;
        Location* this_12;
        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* this_13;
        AABB* aabb;
        uint32_t in_XMM1_Da;
        uint8_t local_268[112];
        uint8_t local_1f8[64];
        uint64_t local_1b8;
        uint64_t uStack_1b0;
        uint64_t local_1a8;
        uint64_t uStack_1a0;
        uint64_t local_198;
        uint64_t uStack_190;
        uint64_t local_188;
        uint64_t uStack_180;
        shared_ptr* local_178;
        unsigned long local_170;
        AABB local_158;
        uint64_t local_110[2];
        float local_dc;
        Terrain* local_d8;
        Vector3T<float>* local_c8;
        uint8_t local_b0[8];
        float local_a4;
        uint8_t local_88[16];

        field_13248[12] = 0;
        auto this_04 = field_8->GetSkyBoxRenderer();
        auto pMVar9 = sceneViewData.GetOrigin();
        this_04->SetProjMatrix(*pMVar9);
        bool cVar4 = effectManager.IsEnabled(107);
        if (!cVar4)
            goto LAB_100466711;
        SceneRenderManager* local_a0 = this;
        auto local_160 = effectManager.GetEffect<graphics::SunlightDirectLighting>(107);
        auto local_100 = local_160->GetDefaultValue();
        local_100->ResetScissorRect();
        unsigned int local_98 = 2147483647;
        int local_90 = -2147483648;
        unsigned int local_94 = 2147483647;
        int local_8c = -2147483648;
        sceneViewData.GetTranslation();
        local_268->GetBoundaryPoints();
        auto pVVar10 = local_268->begin();
        auto pVVar11 = local_268->end();
        if (pVVar10 != pVVar11) {
            do {
                new (local_88) CoordFine(0, pVVar10);
                fVar7 = (float)local_88->GetMapSquareX();
                local_158[0].field_0 = fVar7;
                puVar12 = (unsigned int*)std::min<int>(local_98, local_158);
                local_98 = *puVar12;
                local_158[0].field_0 = (float)local_88->GetMapSquareX();
                piVar13 = std::max<int>(local_90, local_158);
                local_90 = *piVar13;
                local_158[0].field_0 = (float)local_88->GetMapSquareZ();
                puVar12 = (unsigned int*)std::min<int>(local_94, local_158);
                local_94 = *puVar12;
                local_158[0].field_0 = (float)local_88->GetMapSquareZ();
                piVar13 = std::max<int>(local_8c, local_158);
                local_8c = *piVar13;
                pVVar10 = pVVar10 + 12;
            } while (pVVar10 != pVVar11);
        }
        local_88._0_4_ = world.GetMapSquareMinX();
        puVar12 = (unsigned int*)std::max<int>(local_98, *local_88);
        local_98 = *puVar12;
        local_88._0_4_ = world.GetMapSquareMaxX();
        piVar13 = std::min<int>(local_90, *local_88);
        local_90 = *piVar13;
        local_88._0_4_ = world.GetMapSquareMinZ();
        puVar12 = (unsigned int*)std::max<int>(local_94, *local_88);
        local_94 = *puVar12;
        local_88._0_4_ = world.GetMapSquareMaxZ();
        piVar13 = std::min<int>(local_8c, *local_88);
        local_8c = *piVar13;
        new (local_1f8) math::AABB();
        new ((local_1f8 + 32)) math::AABB();
        auto pNVar14 = local_a0->field_8->GetForwardOcclusionRenderPass();
        auto local_168 = pNVar14->GetOcclusionSceneViewData();
        auto local_f0 = pNVar14->GetScreen();
        cVar4 = ((SceneManager*)world.size())->IsSphericalCameraEnabled();
        unsigned long local_d0 = (unsigned long)local_98;
        Frustum* local_f8 = (Frustum*)(((NXTPixToolkit*)sceneViewData)->m_screen + 192);
        if (local_90 < (int)local_98) {
            local_d8 = nullptr;
        } else {
            local_c8 = (Vector3T<float>*)(((uint64_t)local_c8._4_4_ << 32) | (uint32_t)2139095039);
            local_d8 = nullptr;
            do {
                uVar8 = local_94;
                if ((int)local_94 <= local_8c) {
                    do {
                        local_170 = (unsigned long)uVar8;
                        this_07 = (shared_ptr*)world.GetMapSquare((int)local_d0, uVar8);
                        cVar5 = shared_ptr::operator_cast_to_bool(this_07);
                        if (cVar5) {
                            local_178 = this_07;
                            this_08 = (MapSquare*)(*this_07).operator->();
                            this_09 = (Layout*)this_08->GetWaterPatches();
                            this_10 = (shared_ptr<graphics::WaterPatch>*)this_09->HeapBeginPtr();
                            psVar17 = (shared_ptr<graphics::WaterPatch>*)this_09->end();
                            for (; this_10 != psVar17; this_10 = this_10 + 16) {
                                this_11 = (WaterPatch*)(*this_10).operator->();
                                *local_88 = this_11->GetWorldOBB();
                                local_158 = math::AABB();
                                local_88->GetMinimumEnclosingAABB(local_158);
                                if ((cVar4) ||
                                    ((cVar5 = local_f8->TestIntersection(*local_88),
                                      cVar5 &&
                                          ((cVar5 = local_f0->DepthBufferCanOcclude(),
                                            !cVar5 || (cVar5 = local_f0->AABBVisible(
                                                           local_158, *((SceneViewData*)(NXTPixToolkit*)sceneViewData),
                                                           local_168),
                                                       cVar5)))))) {
                                    pVVar10 = world.GetLastCameraFocusPosition();
                                    fVar7 = (float)local_158.GetDistanceToPointSquared(*pVVar10);
                                    if (fVar7 < local_c8._0_4_) {
                                        local_dc = fVar7;
                                        local_1b8 = local_158.GetDimensions();
                                        uStack_1b0 = (((uint64_t)uStack_1b0._4_4_ << 32) | (uint32_t)in_XMM1_Da);
                                        if (local_1b8 != *PTR_ZERO_100ee66e8) {
                                            this_12 = (Location*)(*local_178).operator->();
                                            this_13 =
                                                (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)
                                                    this_12->GetParentLocationType();
                                            local_d8 = (Terrain*)this_13->get();
                                            aabb = (AABB*)local_d8->GetWorldAABB();
                                            *local_1f8 = *aabb;
                                            (*((local_1f8 + 32))) = local_158;
                                            cVar5 = local_1f8->TestIntersection(local_158);
                                            if (!cVar5) {
                                                LogAssert(
                                                    "closestTerrainAABB.TestIntersection(patchAABB)",
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/game/runetek5/scene/SceneRenderManager.cpp",
                                                    887, nullptr);
                                            }
                                            local_a0->field_13248[12] = 1;
                                            local_c8 = (Vector3T<float>*)(((uint64_t)local_c8._4_4_ << 32) |
                                                                          (uint32_t)local_dc);
                                        }
                                    }
                                    local_100->AddWaterPatchAABB(local_158);
                                }
                            }
                        }
                        uVar8 = (int)local_170 + 1;
                    } while ((int)local_170 < local_8c);
                }
                iVar3 = (int)local_d0;
                local_d0 = (unsigned long)(iVar3 + 1);
            } while (iVar3 < local_90);
        }
        if (local_a0->field_13248[12] == '\0')
            goto LAB_100466711;
        pVVar10 = world.GetLastCameraFocusPosition();
        local_110[0] = local_1f8->GetClosestPoint(*pVVar10);
        CoordFine* this_00 = (CoordFine*)(local_268 + 96);
        new (this_00) CoordFine(0, local_110);
        unsigned int arg1 = this_00->GetLocalX();
        unsigned int arg2 = this_00->GetLocalZ();
        uVar8 = local_d8->CalculatePrimaryWaterHeightNearTile(arg1, arg2);
        if (uVar8 == 2147483647) {
            fVar7 = (float)((local_1f8 + 32))->GetMinY();
            uVar8 = (unsigned int)fVar7;
        }
        SceneRenderManager* pSVar18 = local_a0;
        if (World::m_showWaterHeights != '\0') {
            new (local_88) eastl::fixed_string<char, 32>();
            local_88->sprintf("Focus %i (%i %i)", (unsigned long)uVar8, (unsigned long)arg1, (unsigned long)arg2);
            plVar15 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar15 != nullptr) {
                str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_158 = eastl::string(str);
                new (local_b0) oldscape::sidebars::SideBarData(-16776961, 0);
                (**(void (**)(...))(*plVar15 + 136))(plVar15, local_110, &local_158, local_b0);
            }
        }
        local_a0->field_13264 = uVar8;
        local_160->SetReflectionMapContribution(1.0);
        *pSVar18->field_13920 = *local_f8;
        fVar7 = (float)pSVar18->field_13264;
        math::Matrix44Reflection<float>(*local_88, -25.0 - fVar7);
        uint8_t* puVar1 = &pSVar18->field_13376;
        *puVar1 = *local_88;
        pNVar14 = (NXTPixToolkit*)sceneViewData;
        pVVar10 = (Vector3T<float>*)((Layout*)(NXTPixToolkit*)sceneViewData)->SSOBeginPtr();
        local_88._0_8_ = *pVVar10 * *puVar1;
        local_c8 = (Vector3T<float>*)&pSVar18->field_13268;
        local_88._8_4_ = fVar7;
        local_c8->SetXYZ(*local_88);
        pVVar10 = (Vector3T<float>*)pNVar14->SSOBeginPtr();
        local_b0 = (uint8_t[8])pNVar14->GetViewVector();
        float local_a8 = fVar7;
        local_1b8 = *1000.0 * *local_b0;
        uStack_1b0 = (((uint64_t)uStack_1b0._4_4_ << 32) | (uint32_t)fVar7);
        local_158[0]._0_8_ = *pVVar10 + local_1b8;
        local_158[0].field_8 = fVar7;
        local_88._0_8_ = local_158 * *puVar1;
        local_88._8_4_ = fVar7;
        pSVar18->field_13292.SetXYZ(*local_88);
        auto pRVar16 = pNVar14->GetScreen();
        local_88._0_8_ = *pRVar16;
        local_88._8_8_ = pRVar16[1];
        ReturnValue local_78 = pRVar16[2];
        ReturnValue RStack_70 = pRVar16[3];
        ReturnValue local_68 = pRVar16[4];
        ReturnValue RStack_60 = pRVar16[5];
        ReturnValue local_58 = pRVar16[6];
        ReturnValue RStack_50 = pRVar16[7];
        *local_88 = math::Matrix44T<float>::Invert(nullptr);
        fVar7 = 1.0;
        new (&local_1b8) ImVec4(0.0, 1.0, 0.0, 0.0);
        local_158[0]._0_8_ = local_1b8 * *local_88;
        local_158[0].field_8 = fVar7;
        local_158[0].field_12 = 0;
        unsigned long local_e8 = local_158.GetXYZ();
        local_e8 = local_e8 ^ 9223372036854775808;
        puVar1 = &pSVar18->field_13312;
        float local_e0 = fVar7;
        math::Matrix44LookAtLH<float>(*puVar1, *local_c8, pSVar18->field_13292, local_e8, 0.1);
        uint64_t* this_01 = &pSVar18->field_14464;
        *this_01 = *PTR_IDENTITY_100ee6730;
        pMVar9 = (Matrix44T<float>*)pNVar14->GetOrigin();
        new (local_b0) math::PlaneT<float>(PTR_UP_100ee66d0, -(float)pSVar18->field_13264);
        pSVar18->field_14240 = *local_b0;
        if (m_skipObliqueReflectionFrustum == '\0') {
            cVar4 = ((SceneRenderPass*)pSVar18->field_8->GetWaterReflectionPass())->GetOcclusionEnabled();
            if ((cVar4) && (graphics::OcclusionManager::m_CPUDepthBufferGenerationEnabled == '\0'))
                goto LAB_1004665d7;
            local_158[0]._0_8_ = *local_b0 * *puVar1;
            local_158[0].field_8 = fVar7;
            local_158[0].field_12 = 0;
            *local_b0 = local_158;
            local_b0->Normalise();
            local_158 = ImVec4((float)local_b0._0_4_, (float)local_b0._4_4_, local_a8, local_a4);
            math::Matrix44Oblique<float>(*this_01, *pMVar9, local_158);
        } else {
        LAB_1004665d7:
            *this_01 = *pMVar9;
        }
        pNVar14 = (NXTPixToolkit*)sceneViewData;
        if (m_showCameraFrustum != '\0') {
            pMVar9 = (Matrix44T<float>*)((RT7Core*)(NXTPixToolkit*)sceneViewData)->GetImmediateThreadPool();
            pSVar18->field_14272 = *pMVar9;
            pSVar18->field_14272 = math::Matrix44T<float>::Invert(nullptr);
            local_1b8 = *(uint64_t*)puVar1;
            uStack_1b0 = *(uint64_t*)&pSVar18->field_13320;
            local_1a8 = *(uint64_t*)&pSVar18->field_13328;
            uStack_1a0 = *(uint64_t*)&pSVar18->field_13336;
            local_198 = *(uint64_t*)&pSVar18->field_13344;
            uStack_190 = *(uint64_t*)&pSVar18->field_13352;
            local_188 = *(uint64_t*)&pSVar18->field_13360;
            uStack_180 = *(uint64_t*)&pSVar18->field_13368;
            pNVar14->GetOrigin();
            local_158* local_1b8;
            puVar2 = &local_a0->field_14336;
            *puVar2 = local_158;
            *puVar2 = math::Matrix44T<float>::Invert(nullptr);
            local_158** puVar1;
            pSVar18 = local_a0;
            puVar2 = &local_a0->field_14400;
            *puVar2 = local_158;
            *puVar2 = math::Matrix44T<float>::Invert(nullptr);
        }
        pSVar18->field_13440->Set(*puVar1, *this_01);
        NXTPixToolkit* this_02 = local_100;
        local_100->Update(*pSVar18->field_13440, *pNVar14);
        auto frustum = this_02->GetScreen();
        *pSVar18->field_14080 = *frustum;
    LAB_100466711:
    }

    // 0x100466a50
    void SceneRenderManager::UpdateWaterCaustics(graphics::EffectManager& effectManager,
                                                 const graphics::SceneViewData& sceneViewData) {
        uint8_t* this_00;
        LoginManager* this_01;
        Vector3T<float>* vector3;
        Matrix44T<float>* matrix442;
        uint64_t local_58[2];
        CausticsManager* local_48;
        uint64_t local_40;
        uint32_t local_38;

        if (effectManager.IsEnabled(44) != '\0') {
            this_01 = (LoginManager*)effectManager.GetEffect<graphics::SunlightDirectLighting>(44);
            local_48 = (CausticsManager*)this_01->GetDevCredentialsOutputDirectory();
            vector3 = (Vector3T<float>*)sceneViewData.SSOBeginPtr();
            this_00 = &field_13280;
            this_00->SetXYZ(*vector3);
            local_58[0] = sceneViewData.GetViewVector();
            local_40 = (*(graphics::CausticsPass::m_cameraOffset)) * *local_58;
            *this_00 += local_40;
            local_38 = field_13288;
            field_13284 = graphics::CausticsPass::m_cameraHeight + (float)field_13264;
            local_40 = (((uint64_t)((float)field_13264) << 32) | (uint32_t)((int)*(uint64_t*)&field_13280));
            matrix442 = (Matrix44T<float>*)sceneViewData.GetOrigin();
            math::Matrix44LookAtLH<float>(field_13648, *this_00, local_40, *PTR_RIGHT_100ee66f0, 0.1);
            field_13712->Set(field_13648, *matrix442);
            local_48->Update(*field_13712, (float)field_13264);
        }
    }

    // 0x100466ba0
    void SceneRenderManager::UpdateRefraction(graphics::EffectManager& effectManager,
                                              const render::Viewport& viewport) {
        int iVar1;
        FogEffect* this_01;
        shared_ptr<render::RenderTargets>* psVar3;
        RenderTargets* pRVar4;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_02;
        uint64_t* puVar5;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* this_03;
        int* piVar6;
        uint64_t local_f8;
        uint64_t uStack_f0;
        uint64_t local_e8;
        uint64_t uStack_e0;
        uint64_t local_d8;
        uint64_t uStack_d0;
        uint64_t local_c8;
        uint64_t uStack_c0;
        uint8_t local_b8[64];
        Desc local_78;

        if (effectManager.IsEnabled(108)) {
            if ((field_8->GetForwardLightingRT())->operator_cast_to_bool()) {
                this_01 = effectManager.GetEffect<graphics::SunlightDirectLighting>(108);
                psVar3 = (shared_ptr<render::RenderTargets>*)field_8->GetForwardLightingRT();
                pRVar4 = (RenderTargets*)(*psVar3).operator->();
                this_02 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                              pRVar4->GetColourTargetTextures();
                puVar5 = (uint64_t*)(*this_02)[0];
                puVar5 = (uint64_t*)(*puVar5)->second();
                local_f8 = *puVar5;
                uStack_f0 = puVar5[1];
                local_e8 = puVar5[2];
                uStack_e0 = puVar5[3];
                local_d8 = puVar5[4];
                uStack_d0 = puVar5[5];
                local_c8 = puVar5[6];
                uStack_c0 = puVar5[7];
                new (local_b8) render::Texture::Desc();
                psVar3 = (shared_ptr<render::RenderTargets>*)field_8->GetForwardLightingRT();
                pRVar4 = (RenderTargets*)(*psVar3).operator->();
                this_03 = (compressed_pair_imp<
                           eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                           eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)
                              pRVar4->GetDepthStencilTargetTexture();
                puVar5 = (uint64_t*)this_03->second();
                local_78._0_8_ = *puVar5;
                local_78._16_8_ = puVar5[2];
                local_78._24_8_ = puVar5[3];
                local_78._32_8_ = puVar5[4];
                local_78._40_8_ = puVar5[5];
                local_78.field_48 = puVar5[6];
                local_78._56_8_ = puVar5[7];
                local_78.field_8 = (int)puVar5[1];
                local_78.field_12 = 22;
                iVar1 = viewport.field_8;
                piVar6 = &local_f8[0];
                *piVar6 = iVar1;
                local_78.field_4 = viewport.field_12;
                piVar6[1] = local_78.field_4;
                local_78.field_0 = iVar1;
                if (effectManager.IsEnabled(109)) {
                    piVar6[2] = 4;
                }
                if (!(this_01->CreateRefractionTexture(local_f8, *((local_b8 + 64))))) {
                    effectManager.DisableEffect(108);
                    effectManager.DisableEffect(109);
                }
            }
        }
    }

    // 0x100466d30
    void SceneRenderManager::UpdateSkyBoxes(graphics::EffectManager& effectManager,
                                            const graphics::SceneViewData& sceneViewData) {
        field_8->GetSkyBoxManager()->SetViewTransforms(sceneViewData);
    }

    // 0x100466d60
    void SceneRenderManager::UpdateViewportMap(graphics::EffectManager& effectManager) {
        auto this_00 = effectManager.GetEffect<graphics::SunlightDirectLighting>(54);
        ((ViewportMapManager*)this_00->GetDefaultValue())->Update();
    }

    // 0x100466d90
    void SceneRenderManager::RenderSkyBoxes(unsigned int arg1, int arg2, graphics::EffectManager& effectManager,
                                            const graphics::SceneViewData& sceneViewData,
                                            graphics::GraphRoot* graphRoot) {
        auto this_00 = field_8->GetSkyBoxManager();
        auto this_01 = sceneViewData.GetStaticChildren();
        Viewport* viewport = (Viewport*)(*this_01)[0];
        this_00->Render(arg1, arg2, effectManager, *viewport, field_13072, graphRoot);
    }

    // 0x100466e10
    void SceneRenderManager::RenderSunlightShadows(unsigned int arg1, int arg2, graphics::EffectManager& effectManager,
                                                   const graphics::SceneViewData& sceneViewData,
                                                   graphics::GraphRoot* graphRoot) {
        int arg4;
        uint8_t* pairs;
        uint8_t* this_00;
        uint8_t* vector3;
        uint8_t* callback;
        uint8_t* puVar1;
        SunlightShadows* this_02;
        RT7Core* this_03;
        RenderContext* this_04;
        Vector4T<float>* vector4;
        long lVar3;
        ShadowMapCascade* this_05;
        ViewTransforms* viewTransforms;
        Frustum* frustum1;
        EffectManager* effectManager_00;
        RT7Core* pRVar4;
        RenderContext* this_06;
        unsigned int arg1_02;
        uint8_t local_328[32];
        Frustum* local_300;
        unsigned int local_2f8;
        SceneViewData* local_2f0;
        RT7Core* local_2e0;
        uint8_t local_2d8[368];
        uint8_t local_168[48];
        unsigned int local_138;
        float local_134;
        unsigned int local_130;
        fixed_vector<render::Viewport, 2ul> local_128;

        local_328._24_8_ = sceneViewData;
        SceneRenderManager* local_2e8 = this;
        if (effectManager.IsEnabled(30)) {
            this_02 = (SunlightShadows*)effectManager.GetEffect<graphics::SunlightDirectLighting>(30);
            this_03 = (RT7Core*)this_02->GetSunlightCsmManager();
            pRVar4 = this_03;
            if (!(this_03->UpdatePaused())) {
                this_04 = (RenderContext*)pRVar4->GetRenderContext();
                new (local_2d8) graphics::SceneViewData();
                local_2e0 = this_03;
                this_03->GetShadowMapAtlasRenderTargetData(*local_168);
                local_328->GetShadowMapAtlasViewport();
                local_128.push_back(*local_328);
                this_04->SetRenderTargets(local_168._0_8_);
                if (local_2e8->field_13232 == false) {
                    local_328->GetShadowMapAtlasViewport();
                    this_04->SetViewports(local_328, 1);
                    this_04->SetScissorRectangle(false, *local_328);
                    this_06 = (RenderContext*)effectManager;
                    if (effectManager.IsEnabled(37)) {
                        local_138 = local_138 | 1;
                    }
                    if ((local_138 & 1) != 0) {
                        vector4 = (Vector4T<float>*)(*((local_168 + 16)))[37];
                        this_06 = this_04;
                        this_04->ClearRenderTargets(vector4, 1);
                    }
                    if ((local_138 & 6) != 0) {
                        lVar3 = this_06->Instance();
                        this_04->SetDepthStencilState((lVar3 + 720));
                        this_04->ClearDepthStencilTarget(local_134, local_130, local_138);
                    }
                }
                pRVar4 = local_2e0;
                lVar3 = local_2e0->GetHeadList();
                if (0.0 < *(float*)(lVar3 + 104)) {
                    lVar3 = pRVar4->GetHeadList();
                    local_2f8 = *(unsigned int*)(lVar3 + 8);
                    if (local_2f8 != 0) {
                        local_2f0 = (SceneViewData*)&local_2e8->field_48;
                        local_300 = (Frustum*)(local_328._24_8_ + 208);
                        this_00 = local_2e8->field_12816;
                        vector3 = &local_2e8->field_13192;
                        puVar1 = local_2e8->field_12816;
                        callback = &local_2e8->field_13008;
                        pairs = local_2e8->field_80;
                        arg1_02 = 0;
                        do {
                            this_05 = (ShadowMapCascade*)pRVar4->GetShadowMapCascade(arg1_02);
                            if (this_05 == nullptr) {
                                LogAssert("pCascade",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                          "runetek5/scene/SceneRenderManager.cpp",
                                          1128, nullptr);
                            }
                            if (this_05->CanRender()) {
                                this_05->SetClearViewport(local_2e8->field_13232);
                                viewTransforms = (ViewTransforms*)this_05->GetLightViewTransforms();
                                *local_2d8 = *viewTransforms;
                                local_2d8->SetOcclusionTestEnabled((bool)local_328._24_8_->GetOcclusionTestEnabled());
                                local_2d8->RenderPassPushBack(this_05);
                                local_2f0->clear();
                                *this_00 = *local_300;
                                arg4 = arg1_02 + 2;
                                ((puVar1 + 160))->SetXYZ(*vector3);
                                *(ShadowMapCascade**)(local_2e8->field_12816 + 176) = this_05;
                                *(int*)(local_2e8->field_12816 + 184) = arg4;
                                if (graphRoot == nullptr) {
                                    effectManager_00 = nullptr;
                                    pRVar4 = local_2e0;
                                } else {
                                    frustum1 = (Frustum*)this_05->GetCasterCullFrustum();
                                    graphRoot->VisibilityTest(*local_2f0, arg1, *frustum1, arg4, arg4, *callback,
                                                              nullptr, local_300);
                                    pRVar4 = local_2e0;
                                    effectManager_00 = (EffectManager*)graphRoot->GetRoot();
                                }
                                local_328._0_4_ = 0;
                                new (local_328) callstack::Callstack();
                                graphics::Renderer::RenderView(pairs, local_2f0, local_2d8, effectManager_00,
                                                               (uint8_t)effectManager, &DAT_00000001);
                                local_2d8->RenderPassPopBack();
                            }
                            arg1_02 = arg1_02 + 1;
                        } while (local_2f8 != arg1_02);
                    }
                }
                this_02->Update();
            }
        }
    }

    // 0x100467290
    void SceneRenderManager::RenderPointLightShadows(unsigned int arg1, int arg2,
                                                     graphics::EffectManager& effectManager,
                                                     const graphics::SceneViewData& sceneViewData,
                                                     graphics::GraphRoot* graphRoot) {

        PointLightShadowRenderer local_68(*field_8, *field_80, *field_12736, *((field_12736 + 32)), field_13120,
                                          *field_13248);
        local_68.RenderPointLightShadows(arg1, arg2, effectManager, sceneViewData, graphRoot);
    }

    // 0x100467310
    void SceneRenderManager::RenderWaterReflection(unsigned int arg1, int arg2, graphics::EffectManager& effectManager,
                                                   const graphics::SceneViewData& sceneViewData,
                                                   graphics::GraphRoot* graphRoot,
                                                   const math::Vector4T<float>& vector4) {
        SceneViewData* sceneViewData_00;
        uint64_t this;
        bool cVar1;
        FogEffect* pFVar2;
        NXTPixToolkit* pNVar3;
        Rect<float>* this_01;
        uint32_t* puVar4;
        ViewTransforms* viewTransforms;
        uint8_t* puVar5;
        Frustum* frustum1;
        EffectManager* effectManager_00;
        RenderTargetData* renderTargetData;
        uint32_t in_register_0000003c;
        QuaternionT<float>* in_stack_00000008;
        uint8_t local_2a10[32];
        uint8_t local_29d8[16];
        EffectStateSaveRestore local_29c8;
        fixed_map<graphics::EffectType, bool, 121ul> local_1678;
        fixed_vector<render::Viewport, 2ul> local_330;
        uint8_t local_2d8[384];
        array<math::Vector4T<float>, 2ul> local_158;
        uint64_t local_138;

        long lVar6 = (((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        if ((*(char*)(lVar6 + 13260) != '\0') && (cVar1 = sceneViewData.IsEnabled(107), cVar1)) {
            local_2a10._24_8_ = sceneViewData;
            pFVar2 = sceneViewData.GetEffect<graphics::SunlightDirectLighting>(107);
            pNVar3 = (NXTPixToolkit*)pFVar2->GetDefaultValue();
            new (local_2d8) graphics::SceneViewData();
            local_29d8._8_8_ = pNVar3;
            local_2a10->GetReflectionMapViewport();
            local_330 = eastl::fixed_vector<render::Viewport, 2ul>();
            local_330.push_back(*local_2a10);
            this = local_2a10._24_8_;
            local_2d8->SetRenderTargetViewports(local_330);
            renderTargetData = (RenderTargetData*)(local_2d8 + 368);
            local_29d8._8_8_->GetReflectionMapRenderTargets(*renderTargetData);
            local_138 = 3;
            this_01 = &local_158[(unsigned long)renderTargetData];
            *this_01 = *in_stack_00000008;
            puVar4 = (uint32_t*)this_01->qw();
            *puVar4 = 0;
            viewTransforms = (ViewTransforms*)local_29d8._8_8_->GetWorld();
            local_2d8->SetTransforms(*viewTransforms);
            local_2d8->SetOcclusionTestEnabled((bool)graphRoot->GetOcclusionTestEnabled());
            local_1678 = eastl::fixed_map<graphics::EffectType, bool, 121ul>();
            local_29c8[0].field_0._0_1_ = 107;
            puVar5 = &local_1678[local_29c8];
            *puVar5 = 0;
            local_29c8[0].field_0._0_1_ = 108;
            puVar5 = &local_1678[local_29c8];
            *puVar5 = 0;
            local_29c8[0].field_0._0_1_ = 44;
            puVar5 = &local_1678[local_29c8];
            *puVar5 = 0;
            local_29c8[0].field_0._0_1_ = 30;
            puVar5 = &local_1678[local_29c8];
            *puVar5 = 0;
            local_29c8[0].field_0._0_1_ = 35;
            puVar5 = &local_1678[local_29c8];
            *puVar5 = 0;
            local_29c8[0].field_0._0_1_ = 28;
            puVar5 = &local_1678[local_29c8];
            *puVar5 = 0;
            local_29c8[0].field_0._0_1_ = 110;
            puVar5 = &local_1678[local_29c8];
            *puVar5 = 0;
            local_29c8[0].field_0._0_1_ = 26;
            puVar5 = &local_1678[local_29c8];
            *puVar5 = 1;
            local_29c8[0].field_0._0_1_ = 64;
            puVar5 = &local_1678[local_29c8];
            *puVar5 = 0;
            local_29c8[0].field_0._0_1_ = 57;
            puVar5 = &local_1678[local_29c8];
            *puVar5 = 1;
            local_29c8[0].field_0._0_1_ = 50;
            puVar5 = &local_1678[local_29c8];
            *puVar5 = 1;
            pFVar2 = GetEffect<graphics::SunlightDirectLighting>(87);
            local_29c8 = math::Vector4T(*((lVar6 + 14240)), *(float*)(lVar6 + 14252));
            pFVar2->SetClipPlane(local_29c8);
            local_29c8 = graphics::EffectStateSaveRestore(*this, local_1678);
            local_2d8->RenderPassPushBack((RenderPass*)(*(RT7Core**)(lVar6 + 8))->GetWaterReflectionPass());
            sceneViewData_00 = (SceneViewData*)(lVar6 + 48);
            sceneViewData_00->clear();
            if ((GraphRoot*)vector4 == nullptr) {
                effectManager_00 = nullptr;
            } else {
                frustum1 = (Frustum*)local_29d8._8_8_->GetScreen();
                vector4.VisibilityTest(*sceneViewData_00, (unsigned int)arg2, *frustum1, 7, 7, *((lVar6 + 13072)),
                                       nullptr, nullptr);
                effectManager_00 = (EffectManager*)vector4.GetRoot();
            }
            local_29d8._0_4_ = 0;
            new (local_29d8) callstack::Callstack();
            graphics::Renderer::RenderView((lVar6 + 80), sceneViewData_00, local_2d8, effectManager_00, (uint8_t)this,
                                           &DAT_00000001);
        }
    }

    // 0x1004677a0
    void SceneRenderManager::RenderWaterCaustics(unsigned int arg1, int arg2, graphics::EffectManager& effectManager,
                                                 const graphics::SceneViewData& sceneViewData,
                                                 graphics::GraphRoot* graphRoot) {
        uint64_t uVar1;
        RT7Core* this_00;
        NXTPixToolkit* this_01;
        RenderContext* this_02;
        long lVar3;
        RenderPass* pRVar4;
        uint8_t* puVar5;
        Frustum* frustum1;
        EffectManager* pEVar6;
        Rect<float>* this_03;
        uint8_t* puVar7;
        RenderTargetData* renderTargetData;
        RenderContext* this_04;
        uint8_t local_2a10[32];
        vector<std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData>>* local_29f0;
        uint8_t local_29e0[8];
        RenderTargetData local_29d8;
        CausticsManager local_1680;
        ImVec4 local_338;
        uint8_t local_2d8[384];
        array<math::Vector4T<float>, 2ul> local_158;
        uint32_t local_138;

        if (effectManager.IsEnabled(44) != '\0') {
            this_00 = (RT7Core*)effectManager.GetEffect<graphics::SunlightDirectLighting>(44);
            this_01 = (NXTPixToolkit*)this_00->GetDevCredentialsOutputDirectory();
            this_02 = (RenderContext*)this_00->GetRenderContext();
            new (local_2d8) graphics::SceneViewData();
            local_1680.GetCausticsMapViewport();
            this_02->SetViewports(&local_1680, 1);
            local_338 = ImVec4(0.0, 0.0, 0.0, 1.0);
            new ((local_29e0 + 8)) render::RenderTargetData(nullptr, local_338, 1, 1.0, 0);
            this_01->GetCausticsIntegerMapRenderTargets(*((local_29e0 + 8)));
            this_04 = this_02;
            this_02->SetRenderTargets(
                (RenderTargets*)(((uint64_t)local_29d8[0].field_0._1_7_ << 8) | (uint8_t)local_29d8[0].field_0._0_1_));
            lVar3 = this_04->Instance();
            this_02->SetBlendState((lVar3 + 1524));
            local_338 = ImVec4(0.0, 0.0, 0.0, 0.0);
            this_02->ClearRenderTargets(&local_338, 1);
            local_2a10->GetCausticsComputeMapViewport();
            local_338 = eastl::fixed_vector<render::Viewport, 2ul>();
            local_338.push_back(*local_2a10);
            local_2d8->SetRenderTargetViewports(local_338);
            this_01->GetCausticsComputeMapRenderTargets(*((local_2d8 + 368)));
            local_138 = 0;
            local_2d8->SetTransforms(*field_13712);
            pRVar4 = field_8->GetWaterCausticsPass();
            local_2d8->RenderPassPushBack(pRVar4);
            local_1680 = eastl::fixed_map<graphics::EffectType, bool, 121ul>();
            local_29d8[0].field_0._0_1_ = 107;
            puVar5 = &local_1680[*((local_29e0 + 8))];
            *puVar5 = 0;
            local_29d8[0].field_0._0_1_ = 30;
            puVar5 = &local_1680[*((local_29e0 + 8))];
            *puVar5 = 0;
            local_29d8[0].field_0._0_1_ = 35;
            puVar5 = &local_1680[*((local_29e0 + 8))];
            *puVar5 = 0;
            new ((local_29e0 + 8)) graphics::EffectStateSaveRestore(effectManager, local_1680);
            puVar5 = &field_48;
            puVar5->clear();
            if (graphRoot != nullptr) {
                frustum1 = (Frustum*)this_01->GetScreen();
                graphRoot->VisibilityTest(*puVar5, arg1, *frustum1, 0, 0, field_13072, nullptr, nullptr);
            }
            local_29f0 = (vector<std::pair<graphics::GraphEntity*, graphics::GraphEntityTransformData>>*)field_80;
            local_2a10._24_8_ = this;
            if (graphRoot == nullptr) {
                pEVar6 = nullptr;
            } else {
                pEVar6 = (EffectManager*)graphRoot->GetRoot();
            }
            local_29e0._0_4_ = 0;
            new (local_29e0) callstack::Callstack();
            graphics::Renderer::RenderView(local_29f0, puVar5, local_2d8, pEVar6, (uint8_t)effectManager,
                                           &DAT_00000001);
            ((local_29e0 + 8))->~EffectStateSaveRestore();
            local_2a10->GetCausticsMapViewport();
            uVar1 = local_2a10._24_8_;
            renderTargetData = (RenderTargetData*)(local_2d8 + 368);
            local_338 = eastl::fixed_vector<render::Viewport, 2ul>();
            local_338.push_back(*local_2a10);
            local_2d8->SetRenderTargetViewports(local_338);
            this_01->GetCausticsFloatMapRenderTargets(*renderTargetData);
            local_138 = 1;
            new ((local_29e0 + 8)) ImVec4(0.0, 0.0, 0.0, 0.0);
            this_03 = &local_158[(unsigned long)renderTargetData];
            *this_03 = (*((local_29e0 + 8)));
            local_1680 = eastl::fixed_map<graphics::EffectType, bool, 121ul>();
            local_29d8[0].field_0._0_1_ = 46;
            puVar7 = &local_1680[*((local_29e0 + 8))];
            *puVar7 = 1;
            local_29d8[0].field_0._0_1_ = 107;
            puVar7 = &local_1680[*((local_29e0 + 8))];
            *puVar7 = 0;
            local_29d8[0].field_0._0_1_ = 30;
            puVar7 = &local_1680[*((local_29e0 + 8))];
            *puVar7 = 0;
            local_29d8[0].field_0._0_1_ = 35;
            puVar7 = &local_1680[*((local_29e0 + 8))];
            *puVar7 = 0;
            new ((local_29e0 + 8)) graphics::EffectStateSaveRestore(effectManager, local_1680);
            pRVar4 = (*(RT7Core**)(uVar1 + 8))->GetWaterCausticsPass();
            local_2d8->RenderPassPushBack(pRVar4);
            if (graphRoot == nullptr) {
                pEVar6 = nullptr;
            } else {
                pEVar6 = (EffectManager*)graphRoot->GetRoot();
            }
            local_29e0._0_4_ = 0;
            new (local_29e0) callstack::Callstack();
            graphics::Renderer::RenderView(local_29f0, puVar5, local_2d8, pEVar6, (uint8_t)effectManager, nullptr);
            ((local_29e0 + 8))->~EffectStateSaveRestore();
        }
    }

    // 0x100467d60
    void SceneRenderManager::UnregisterRenderTargets(graphics::EffectManager& effectManager) {
        field_8->GetSkyBoxManager()->UnregisterRenderTargets();
        effectManager.GetEffect<graphics::SunlightDirectLighting>(108)->DestroyRenderingResources();
    }

    // 0x100467da0
    void SceneRenderManager::RenderDebug(const render::Viewport& viewport) {
        int* piVar1;
        float* float;
        long* plVar2;
        uint64_t local_c8[2];
        uint64_t local_b8[2];
        uint64_t local_a8[2];
        uint64_t local_98[2];
        uint64_t local_88;
        SideBarData local_70;
        uint8_t local_60[16];
        SideBarData local_50;
        SideBarData local_40;

        if (m_showCameraFrustum != '\0') {
            plVar2 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != nullptr) {
                local_40._0_8_ = viewport[497].field_4.GetNearBottomLeft();
                new (local_60) math::Sphere(local_40, 1.0);
                new ((local_60 + 16)) oldscape::sidebars::SideBarData(-1, 3);
                (**(void (**)(...))(*plVar2 + 32))(plVar2, (Sphere*)local_60, (SideBarData*)(local_60 + 16));
            }
            plVar2 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != nullptr) {
                local_40._0_8_ = viewport[497].field_4.GetNearBottomRight();
                new (local_60) math::Sphere(local_40, 1.0);
                new ((local_60 + 16)) oldscape::sidebars::SideBarData(-1, 3);
                (**(void (**)(...))(*plVar2 + 32))(plVar2, (Sphere*)local_60, (SideBarData*)(local_60 + 16));
            }
            plVar2 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != nullptr) {
                local_40._0_8_ = viewport[497].field_4.GetNearTopLeft();
                new (local_60) math::Sphere(local_40, 1.0);
                new ((local_60 + 16)) oldscape::sidebars::SideBarData(-1, 3);
                (**(void (**)(...))(*plVar2 + 32))(plVar2, (Sphere*)local_60, (SideBarData*)(local_60 + 16));
            }
            plVar2 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != nullptr) {
                local_40._0_8_ = viewport[497].field_4.GetNearTopRight();
                new (local_60) math::Sphere(local_40, 1.0);
                new ((local_60 + 16)) oldscape::sidebars::SideBarData(-1, 3);
                (**(void (**)(...))(*plVar2 + 32))(plVar2, (Sphere*)local_60, (SideBarData*)(local_60 + 16));
            }
            plVar2 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != nullptr) {
                new (local_60) oldscape::sidebars::SideBarData(-1, 3);
                (**(void (**)(...))(*plVar2 + 96))(plVar2, &viewport[497].field_4, &viewport[509].field_20,
                                                   (SideBarData*)local_60);
            }
            plVar2 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != nullptr) {
                local_40._0_8_ = viewport[502].field_24.GetNearBottomLeft();
                new (local_60) math::Sphere(local_40, 1.0);
                new ((local_60 + 16)) oldscape::sidebars::SideBarData(-65536, 3);
                (**(void (**)(...))(*plVar2 + 32))(plVar2, (Sphere*)local_60, (SideBarData*)(local_60 + 16));
            }
            plVar2 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != nullptr) {
                local_40._0_8_ = viewport[502].field_24.GetNearBottomRight();
                new (local_60) math::Sphere(local_40, 1.0);
                new ((local_60 + 16)) oldscape::sidebars::SideBarData(-65536, 3);
                (**(void (**)(...))(*plVar2 + 32))(plVar2, (Sphere*)local_60, (SideBarData*)(local_60 + 16));
            }
            plVar2 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != nullptr) {
                local_40._0_8_ = viewport[502].field_24.GetNearTopLeft();
                new (local_60) math::Sphere(local_40, 1.0);
                new ((local_60 + 16)) oldscape::sidebars::SideBarData(-65536, 3);
                (**(void (**)(...))(*plVar2 + 32))(plVar2, (Sphere*)local_60, (SideBarData*)(local_60 + 16));
            }
            plVar2 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != nullptr) {
                local_40._0_8_ = viewport[502].field_24.GetNearTopRight();
                new (local_60) math::Sphere(local_40, 1.0);
                new ((local_60 + 16)) oldscape::sidebars::SideBarData(-65536, 3);
                (**(void (**)(...))(*plVar2 + 32))(plVar2, (Sphere*)local_60, (SideBarData*)(local_60 + 16));
            }
            plVar2 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != nullptr) {
                new (local_60) oldscape::sidebars::SideBarData(-65536, 3);
                (**(void (**)(...))(*plVar2 + 96))(plVar2, &viewport[502].field_24, &viewport[514].field_8,
                                                   (SideBarData*)local_60);
            }
            plVar2 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != nullptr) {
                new (local_60) oldscape::sidebars::SideBarData(-256, 3);
                (**(void (**)(...))(*plVar2 + 96))(plVar2, &viewport[502].field_24, viewport + 512,
                                                   (SideBarData*)local_60);
            }
            piVar1 = &viewport[497].field_4;
            local_c8[0] = piVar1->GetNearBottomLeft();
            local_b8[0] = piVar1->GetNearBottomRight();
            local_70._0_8_ = *local_c8 + *local_b8;
            local_a8[0] = piVar1->GetNearTopLeft();
            local_50._0_8_ = local_70 + *local_a8;
            local_98[0] = piVar1->GetNearTopRight();
            local_40._0_8_ = (*((local_60 + 16))) + *local_98;
            local_60._0_8_ = *0.25 * local_40;
            float = &viewport[508].field_16;
            local_88 = float->SignedDistanceTo(*local_60);
            plVar2 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != nullptr) {
                local_40 = oldscape::sidebars::SideBarData(-16711681, 3);
                (**(void (**)(...))(*plVar2 + 104))(plVar2, local_60, float, 2048, 2048, &local_40);
            }
            plVar2 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != nullptr) {
                local_50._0_8_ = (*(-(float)local_88)) * *float;
                local_40._0_8_ = *local_60 + (*((local_60 + 16)));
                local_70 = oldscape::sidebars::SideBarData(-16711681, 3);
                (**(void (**)(...))(*plVar2 + 24))(plVar2, (Vector3T<float>*)local_60, &local_40, &local_70);
            }
            piVar1 = &viewport[509].field_4;
            local_88 = piVar1->SignedDistanceTo(*local_60);
            plVar2 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != nullptr) {
                local_40 = oldscape::sidebars::SideBarData(-65281, 3);
                (**(void (**)(...))(*plVar2 + 104))(plVar2, local_60, piVar1, 2048, 2048, &local_40);
            }
            plVar2 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != nullptr) {
                local_50._0_8_ = (*(-(float)local_88)) * *piVar1;
                local_40._0_8_ = *local_60 + (*((local_60 + 16)));
                local_70 = oldscape::sidebars::SideBarData(-65281, 3);
                (**(void (**)(...))(*plVar2 + 24))(plVar2, (Vector3T<float>*)local_60, &local_40, &local_70);
            }
            plVar2 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar2 != nullptr) {
                local_40._0_8_ = (*(-(float)viewport[509].field_0)) * *float;
                new ((local_60 + 16)) oldscape::sidebars::SideBarData(-16777216, 3);
                (**(void (**)(...))(*plVar2 + 24))(plVar2, PTR_ZERO_100ee66e8, &local_40,
                                                   (SideBarData*)(local_60 + 16));
            }
        }
    }

    // 0x1004684c0
    void SceneRenderManager::AddDrawableList(graphics::DrawableList* drawableList) {
        if (drawableList == nullptr) {
            LogAssert("drawableList != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "SceneRenderManager.cpp",
                      512, nullptr);
        }
        field_80->AddDrawableList(drawableList);
        m_mainSceneRenderer->AddDrawableList(drawableList);
    }

    // 0x100468520
    void SceneRenderManager::RemoveDrawableList(graphics::DrawableList* drawableList) {
        if (drawableList == nullptr) {
            LogAssert("drawableList != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "SceneRenderManager.cpp",
                      520, nullptr);
        }
        field_80->RemoveDrawableList(drawableList);
        m_mainSceneRenderer->RemoveDrawableList(drawableList);
    }

    // 0x100468580
    void SceneRenderManager::AddDrawable(graphics::Drawable* drawable) {
        if (drawable == nullptr) {
            LogAssert("drawable != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "SceneRenderManager.cpp",
                      528, nullptr);
        }
        field_80->AddDrawable(drawable);
        m_mainSceneRenderer->AddDrawable(drawable);
    }

    // 0x1004685e0
    void SceneRenderManager::RemoveDrawable(graphics::Drawable* drawable) {
        if (drawable == nullptr) {
            LogAssert("drawable != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "SceneRenderManager.cpp",
                      536, nullptr);
        }
        field_80->RemoveDrawable(drawable);
        m_mainSceneRenderer->RemoveDrawable(drawable);
    }

    // 0x100468640
    void SceneRenderManager::AddShadowCastingPointLight(const graphics::SceneViewData& sceneViewData, float arg2,
                                                        float arg3, const shared_ptr<LightSource>& lightSource,
                                                        const math::Sphere& sphere) {
        RenderDeviceSecondaryContext** this_00;
        uint8_t* this_01;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        GraphNode* this_05;
        char* pcVar4;
        long lVar5;
        long lVar6;
        Layout* this_06;
        Vector3T<float>* vector31;
        Vector3T<float>* vector32;
        ViewTransforms* viewTransforms;
        float fVar7;
        uint64_t local_90;
        float local_88;
        unsigned long long local_70;
        float local_68;
        uint64_t local_58;
        float local_50;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_48;
        LightSource* local_40;
        float local_38;

        auto pLVar3 = lightSource.operator->();
        auto this_03 = pLVar3->GetConfigurationSource();
        if (((StaticPointLight*)(*this_03).operator->())->GetShadowsEnabled()) {
            this_05 = (GraphNode*)lightSource.operator->();
            pcVar4 = (char*)this_05->GetChildren();
            if (*pcVar4 != '\0') {
                this_00 = &field_13152;
                local_58 = lightSource.end();
                lVar5 = eastl::vector_set<render::IndexBuffer const*, eastl::less<render::IndexBuffer const*>,
                                          eastl::allocator, eastl::vector<render::IndexBuffer const*>>::find(*this_00);
                lVar6 = this_00->end();
                if (lVar5 == lVar6) {
                    local_48 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_00;
                    this_06 = (Layout*)sceneViewData.SSOBeginPtr();
                    vector31 = (Vector3T<float>*)sphere.SSOBeginPtr();
                    vector32 = (Vector3T<float>*)this_06->SSOBeginPtr();
                    local_58 = *vector31 - *vector32;
                    local_50 = arg3;
                    local_90 = math::Vector3Normalize<float>(local_58);
                    local_88 = arg3;
                    fVar7 = (float)sphere.GetOutlineRadiusAdjustment();
                    local_40 = (LightSource*)*fVar7 * local_90;
                    local_38 = arg3;
                    local_70 = local_58 - local_40;
                    local_68 = arg3;
                    fVar7 = (float)local_70.Length();
                    if (fVar7 < arg3) {
                        fVar7 = (float)sphere.GetOutlineRadiusAdjustment();
                        if (arg2 <= fVar7) {
                            this_01 = field_13248;
                            if (!(this_01->SloppyCompare(*PTR_ZERO_100ee66e8, 1e-06))) {
                                pLVar3 = (LightSource*)lightSource.operator->();
                                fVar7 = (float)pLVar3->GetCurrentIntensity();
                                local_70 = field_13236.CalculateShadowCastingImportanceKey(*this_01, sphere, fVar7);
                            } else {
                                viewTransforms = (ViewTransforms*)sceneViewData.SSOBeginPtr();
                                pLVar3 = (LightSource*)lightSource.operator->();
                                fVar7 = (float)pLVar3->GetCurrentIntensity();
                                local_70 = field_13236.CalculateShadowCastingImportanceKey(*viewTransforms, local_58,
                                                                                           sphere, fVar7);
                            }
                            this_02 = local_48;
                            local_40 = (LightSource*)lightSource.end();
                            lVar5 = eastl::vector_set<render::IndexBuffer const*,
                                                      eastl::less<render::IndexBuffer const*>, eastl::allocator,
                                                      eastl::vector<render::IndexBuffer const*>>::find(*this_02);
                            lVar6 = this_02->end();
                            if (lVar5 != lVar6) {
                                LogAssert("m_visibleShadowCastingLights.find(lightSource.get()) == "
                                          "m_visibleShadowCastingLights.end()",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                          "runetek5/scene/SceneRenderManager.cpp",
                                          742, nullptr);
                            }
                            field_13120.emplace_back<shared_ptr<LightSource> const&, unsigned long long&>(lightSource,
                                                                                                          local_70);
                            local_40 = (LightSource*)lightSource.end();
                            local_48->insert<LightSource*>(local_40);
                        }
                    }
                }
            }
        }
    }

    // 0x100468c00
    void SceneRenderManager::UpdatePointLightShadows(graphics::EffectManager& effectManager,
                                                     const graphics::SceneViewData& sceneViewData) {}

} // namespace jag::game

// 0x1004688a0
void floor(float arg1) {
    _floorf();
}

// 0x100468be0
unsigned long abs(float arg1) {
    uint32_t in_XMM0_Db;

    return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1) & 9223372034707292159;
}

// 0x100468bf0
void round(float arg1) {
    _roundf();
}
