// libs/game/runetek5/scene/SceneRenderManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class SceneRenderManager {
    public:
        // virtual methods in vtable order
        virtual ~SceneRenderManager();
        GetMainSceneRenderer();
        GetPrevViewFrustum() const;
        GetPrevViewTransforms() const;
        SceneRenderManager(graphics::RT7Core*, unsigned long, unsigned long);
        SceneRenderManager(graphics::RT7Core*, unsigned long, unsigned long,
                           eastl::fixed_vector<graphics::DrawableQueue::RenderPassDrawableGroupsConfig, 10ul, true,
                                               eastl::allocator> const&,
                           eastl::fixed_vector<graphics::DrawableQueue::RenderPassDrawableGroupsConfig, 10ul, true,
                                               eastl::allocator> const&);
        void Clear();
        void RenderView(render::RenderTargets*, shared_ptr<render::RenderTargets> const&, World&, unsigned int, int,
                        graphics::EffectManager&, ViewTransforms const&, render::Viewport const&, unsigned int);
        void RenderViewImpl(render::RenderTargets*, shared_ptr<render::RenderTargets> const&, World*, unsigned int, int,
                            graphics::EffectManager&, graphics::SkyBox const*,
                            eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL> const*, bool,
                            ViewTransforms const&, render::Viewport const&, math::Vector4T<float> const&, unsigned int,
                            unsigned int);
        void RenderView(render::RenderTargets*, unsigned int, graphics::EffectManager&, graphics::SkyBox const*,
                        eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL> const&, ViewTransforms const&,
                        render::Viewport const&, unsigned int);
        void RenderView(render::RenderTargets*, shared_ptr<render::RenderTargets> const&, unsigned int,
                        graphics::EffectManager&, graphics::SkyBox const*,
                        eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL> const&, bool,
                        ViewTransforms const&, render::Viewport const&, math::Vector4T<float> const&, unsigned int,
                        unsigned int);
        void SetupGeometryPass(bool&, bool&, render::RenderTargets*, render::RenderTargets*, graphics::EffectManager&);
        void GetVisiblePointLights(graphics::EffectManager&, graphics::SceneViewData const&, World const&);
        void GetVisiblePointLights(graphics::EffectManager&, graphics::SceneViewData const&,
                                   eastl::vector<shared_ptr<LightSource>, BucketAllocatorEASTL> const&);
        void UpdateSunlightShadows(graphics::EffectManager&, graphics::SceneViewData const&, float);
        void UpdateWaterReflection(graphics::EffectManager&, graphics::SceneViewData const&, World const&);
        void UpdateWaterCaustics(graphics::EffectManager&, graphics::SceneViewData const&);
        void UpdateRefraction(graphics::EffectManager&, render::Viewport const&);
        void UpdateSkyBoxes(graphics::EffectManager&, graphics::SceneViewData const&);
        void UpdateViewportMap(graphics::EffectManager&);
        void RenderSkyBoxes(unsigned int, int, graphics::EffectManager&, graphics::SceneViewData const&,
                            graphics::GraphRoot*);
        void RenderSunlightShadows(unsigned int, int, graphics::EffectManager&, graphics::SceneViewData const&,
                                   graphics::GraphRoot*);
        void RenderPointLightShadows(unsigned int, int, graphics::EffectManager&, graphics::SceneViewData const&,
                                     graphics::GraphRoot*);
        void RenderWaterReflection(unsigned int, int, graphics::EffectManager&, graphics::SceneViewData const&,
                                   graphics::GraphRoot*, math::Vector4T<float> const&);
        void RenderWaterCaustics(unsigned int, int, graphics::EffectManager&, graphics::SceneViewData const&,
                                 graphics::GraphRoot*);
        void UnregisterRenderTargets(graphics::EffectManager&);
        void RenderDebug(render::Viewport const&);
        void AddDrawableList(graphics::DrawableList*);
        void RemoveDrawableList(graphics::DrawableList*);
        void AddDrawable(graphics::Drawable*);
        void RemoveDrawable(graphics::Drawable*);
        void AddShadowCastingPointLight(graphics::SceneViewData const&, float, float, shared_ptr<LightSource> const&,
                                        math::Sphere const&);
        void UpdatePointLightShadows(graphics::EffectManager&, graphics::SceneViewData const&);
        static /* 4 bytes */ m_skipObliqueReflectionFrustum;              // = 1
        static float /* 4 bytes */ m_stencilTransparencyNearClipRange;    // = 50.0f
        static float /* 4 bytes */ m_stencilTransparencyFarClipThreshold; // = 1750.0f
        static float /* 4 bytes */ m_stencilTransparencyFarClipRange;     // = 1250.0f
        static /* 1 bytes */ m_showCameraFrustum;
        static /* 1 bytes */ m_debugRender;
        static /* 1 bytes */ m_freezeCulling;
        static /* 1 bytes */ m_enableZPrePass;
        static /* 4 bytes */ m_enableDeferredShadows;
        static /* 4 bytes */ m_stencilTransparencyNearClipThreshold;

        // data members, from how the methods use this: 6530368 bytes
        undefined** field_0; // offset 0, vtable pointer
        RT7Core* field_8;    // offset 8
        char _unknown_16[12720];
        PointLightShadowPassVisTestFunctor field_12736; // offset 12736
        char _unknown_12804[12];
        SunShadowPassVisTestFunctor field_12816; // offset 12816
        undefined1 field_13008;                  // offset 13008
        char _unknown_13009[63];
        undefined1 field_13072; // offset 13072
        char _unknown_13073[143];
        undefined8 field_13216; // offset 13216
        undefined8 field_13224; // offset 13224
        bool field_13232;       // offset 13232
        char _unknown_13233[15];
        ColourHSL field_13248; // offset 13248
        int field_13264;       // offset 13264
        char _unknown_13268[16];
        float field_13284;      // offset 13284
        undefined4 field_13288; // offset 13288
        char _unknown_13292[148];
        ViewTransforms field_13440; // offset 13440
        char _unknown_13592[120];
        ViewTransforms field_13712; // offset 13712
        char _unknown_13864[56];
        Frustum field_13920; // offset 13920
        char _unknown_14024[56];
        Frustum field_14080; // offset 14080
        char _unknown_14184[68];
        float field_14252; // offset 14252
        char _unknown_14256[16];
        undefined8 field_14272;              // offset 14272
        undefined8 field_14280;              // offset 14280
        undefined8 field_14288;              // offset 14288
        undefined8 field_14296;              // offset 14296
        undefined8 field_14304;              // offset 14304
        undefined8 field_14312;              // offset 14312
        undefined8 field_14320;              // offset 14320
        undefined8 field_14328;              // offset 14328
        undefined8 field_14336;              // offset 14336
        undefined8 field_14344;              // offset 14344
        undefined8 field_14352;              // offset 14352
        undefined8 field_14360;              // offset 14360
        undefined8 field_14368;              // offset 14368
        undefined8 field_14376;              // offset 14376
        undefined8 field_14384;              // offset 14384
        undefined8 field_14392;              // offset 14392
        undefined8 field_14400;              // offset 14400
        undefined8 field_14408;              // offset 14408
        undefined8 field_14416;              // offset 14416
        undefined8 field_14424;              // offset 14424
        undefined8 field_14432;              // offset 14432
        undefined8 field_14440;              // offset 14440
        undefined8 field_14448;              // offset 14448
        undefined8 field_14456;              // offset 14456
        undefined8 field_14464;              // offset 14464
        undefined8 field_14472;              // offset 14472
        undefined8 field_14480;              // offset 14480
        undefined8 field_14488;              // offset 14488
        undefined8 field_14496;              // offset 14496
        undefined8 field_14504;              // offset 14504
        undefined8 field_14512;              // offset 14512
        undefined8 field_14520;              // offset 14520
        ViewTransforms m_prevViewTransforms; // offset 14528
        char _unknown_14680[56];
        Frustum m_prevViewFrustum; // offset 14736
        char _unknown_14840[120];
        Frustum field_14960; // offset 14960
        char _unknown_15064[6515304];
    };

    // 0x1003c1200, 16 bytes, inline, placed by class name and debug map
    // SceneRenderManager::GetMainSceneRenderer()
    undefined1* SceneRenderManager::GetMainSceneRenderer() {
        return &field_6408;
    }

    // 0x100401980, 16 bytes, inline, placed by class name
    // SceneRenderManager::GetPrevViewFrustum() const
    undefined1* SceneRenderManager::GetPrevViewFrustum() {
        return m_prevViewFrustum;
    }

    // 0x100432380, 16 bytes, inline, placed by class name
    // SceneRenderManager::GetPrevViewTransforms() const
    undefined1* SceneRenderManager::GetPrevViewTransforms() {
        return m_prevViewTransforms;
    }

    // 0x100475c30, 608 bytes, inline, placed by class name
    // SceneRenderManager::GetVisiblePointLights(graphics::EffectManager&, graphics::SceneViewData const&, World const&)::$_9::operator()(shared_ptr<LightSource> const&) const
    /* SceneRenderManager::GetVisiblePointLights(graphics::EffectManager&,
   graphics::SceneViewData const&, World
   const&)::$_9::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<LightSource> const&) const */

    void SceneRenderManager::GetVisiblePointLights(graphics::EffectManager&, graphics::SceneViewData_const&,
                                                   World_const&)::$_9::operator()(shared_ptr* param_1) {
        SceneRenderManager* pSVar1;
        undefined8 uVar2;
        char cVar3;
        char cVar4;
        LightSource* pLVar5;
        Entity* pEVar6;
        AABB* pAVar7;
        SceneViewData* this_00;
        vector* pvVar8;
        long* plVar9;
        Vector3T* pVVar10;
        long lVar11;
        EntityHighlightGlobalState* pEVar12;
        float fVar13;
        SideBarData local_b8;
        undefined1 local_a8[31];
        char local_89;
        OBB local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pSVar1 = *(SceneRenderManager**)(this + 32);
        pLVar5 = (LightSource*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)param_1);
        pLVar5->SetVisibleLastFrame(false);
        pEVar6 = (Entity*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)param_1);
        pAVar7 = (AABB*)pEVar6->GetAABB();
        new (&local_88) math::OBB(pAVar7);
        cVar3 = (*(OcclusionManager**)this)->DepthBufferCanOcclude();
        cVar4 = '\x01';
        if (cVar3 != '\0') {
            cVar4 = (*(OcclusionManager**)this)
                        ->OBBVisible(&local_88, *(SceneViewData**)(this + 8),
                                     (SceneViewData*)**(undefined8**)(this + 16), 1.0);
        }
        lVar11 = *(long*)(this + 8);
        pEVar6 = (Entity*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)param_1);
        this_00 = (SceneViewData*)pEVar6->GetAABB();
        cVar3 = ((lVar11 + 208))->TestIntersection(this_00);
        uVar2._4_4_ = local_a8._4_4_;
        uVar2._0_1_ = local_a8[0];
        uVar2._1_1_ = local_a8[1];
        uVar2._2_1_ = local_a8[2];
        uVar2._3_1_ = local_a8[3];
        if ((cVar3 != '\0') && (local_a8._0_8_ = uVar2, cVar4 != '\0')) {
            local_a8._16_8_ = pSVar1;
            local_89 = cVar4;
            pLVar5 = (LightSource*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)param_1);
            local_a8._0_8_ = pLVar5->GetWorldSphere();
            pEVar12 = (EntityHighlightGlobalState*)local_a8;
            eastl::vector<math::Sphere, eastl::allocator>::push_back(
                *(vector<math::Sphere, eastl::allocator>**)(this + 24), (Sphere*)local_a8);
            lVar11 = *(long*)(this + 8);
            pvVar8 = local_a8->SSOBeginPtr(pEVar12);
            fVar13 = (float)local_a8->GetOutlineRadiusAdjustment();
            this_00 = (SceneViewData*)&local_b8;
            new (this_00) math::Sphere(pvVar8, fVar13 * 0.8);
            cVar4 = ((lVar11 + 208))->TestIntersection(this_00);
            if (cVar4 != '\0') {
                pLVar5 = (LightSource*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)param_1);
                pLVar5->SetVisibleLastFrame(true);
                this_00 = *(SceneViewData**)(this + 8);
                AddShadowCastingPointLight((SceneRenderManager*)local_a8._16_8_, this_00,
                                           *(float*)(*(long*)(this + 40) + 24), *(float*)(*(long*)(this + 40) + 20),
                                           param_1, (Sphere*)local_a8);
            }
            cVar4 = local_89;
        }
        if (World::m_showOccludedPointLights != '\0' && cVar4 == '\0') {
            plVar9 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar9 != (long*)0) {
                pEVar6 = (Entity*)shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)param_1);
                pVVar10 = (Vector3T*)pEVar6->GetWorldPosition();
                lVar11 = shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)param_1);
                pvVar8 = ((lVar11 + 192))->SSOBeginPtr(this_00);
                new (local_a8) math::Sphere(pVVar10, (float)*(uint*)pvVar8);
                lVar11 = shared_ptr<LightSource>::operator->((shared_ptr<LightSource>*)param_1);
                ((lVar11 + 192))->GetPos();
                new (&local_b8) oldscape::sidebars::SideBarData(-1, 3);
                (**(code**)(*plVar9 + 32))(plVar9, (Sphere*)local_a8, &local_b8);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::game
