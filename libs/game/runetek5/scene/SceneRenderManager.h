// libs/game/runetek5/scene/SceneRenderManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class SceneRenderManager {
    public:
        // virtual methods in vtable order
        virtual ~SceneRenderManager();
        Renderer GetMainSceneRenderer();
        Frustum GetPrevViewFrustum() const;
        ViewTransforms GetPrevViewTransforms() const;
        SceneRenderManager(graphics::RT7Core* rt7Core, unsigned long arg2, unsigned long arg3);
        SceneRenderManager(graphics::RT7Core* rt7Core, unsigned long arg2, unsigned long arg3,
                           const eastl::fixed_vector<graphics::DrawableQueue::RenderPassDrawableGroupsConfig, 10ul>&
                               renderPassDrawableGroupsConfigs1,
                           const eastl::fixed_vector<graphics::DrawableQueue::RenderPassDrawableGroupsConfig, 10ul>&
                               renderPassDrawableGroupsConfigs2);
        void Clear();
        void RenderView(render::RenderTargets* renderTargets1, const shared_ptr<render::RenderTargets>& renderTargets2,
                        World& world, unsigned int arg4, int arg5, graphics::EffectManager& effectManager,
                        const ViewTransforms& viewTransforms, const render::Viewport& viewport, unsigned int arg9);
        void RenderViewImpl(render::RenderTargets* renderTargets1,
                            const shared_ptr<render::RenderTargets>& renderTargets2, World* world, unsigned int arg4,
                            int arg5, graphics::EffectManager& effectManager, const graphics::SkyBox* skyBox,
                            const eastl::vector<shared_ptr<LightSource>>* lightSources, bool arg9,
                            const ViewTransforms& viewTransforms, const render::Viewport& viewport,
                            const math::Vector4T<float>& vector4, unsigned int arg13, unsigned int arg14);
        void RenderView(render::RenderTargets* renderTargets, unsigned int arg2, graphics::EffectManager& effectManager,
                        const graphics::SkyBox* skyBox, const eastl::vector<shared_ptr<LightSource>>& lightSources,
                        const ViewTransforms& viewTransforms, const render::Viewport& viewport, unsigned int arg8);
        void RenderView(render::RenderTargets* renderTargets1, const shared_ptr<render::RenderTargets>& renderTargets2,
                        unsigned int arg3, graphics::EffectManager& effectManager, const graphics::SkyBox* skyBox,
                        const eastl::vector<shared_ptr<LightSource>>& lightSources, bool arg7,
                        const ViewTransforms& viewTransforms, const render::Viewport& viewport,
                        const math::Vector4T<float>& vector4, unsigned int arg11, unsigned int arg12);
        void SetupGeometryPass(bool& arg1, bool& arg2, render::RenderTargets* renderTargets1,
                               render::RenderTargets* renderTargets2, graphics::EffectManager& effectManager);
        void GetVisiblePointLights(graphics::EffectManager& effectManager, const graphics::SceneViewData& sceneViewData,
                                   const World& world);
        void GetVisiblePointLights(graphics::EffectManager& effectManager, const graphics::SceneViewData& sceneViewData,
                                   const eastl::vector<shared_ptr<LightSource>>& lightSources);
        void UpdateSunlightShadows(graphics::EffectManager& effectManager, const graphics::SceneViewData& sceneViewData,
                                   float arg3);
        void UpdateWaterReflection(graphics::EffectManager& effectManager, const graphics::SceneViewData& sceneViewData,
                                   const World& world);
        void UpdateWaterCaustics(graphics::EffectManager& effectManager, const graphics::SceneViewData& sceneViewData);
        void UpdateRefraction(graphics::EffectManager& effectManager, const render::Viewport& viewport);
        void UpdateSkyBoxes(graphics::EffectManager& effectManager, const graphics::SceneViewData& sceneViewData);
        void UpdateViewportMap(graphics::EffectManager& effectManager);
        void RenderSkyBoxes(unsigned int arg1, int arg2, graphics::EffectManager& effectManager,
                            const graphics::SceneViewData& sceneViewData, graphics::GraphRoot* graphRoot);
        void RenderSunlightShadows(unsigned int arg1, int arg2, graphics::EffectManager& effectManager,
                                   const graphics::SceneViewData& sceneViewData, graphics::GraphRoot* graphRoot);
        void RenderPointLightShadows(unsigned int arg1, int arg2, graphics::EffectManager& effectManager,
                                     const graphics::SceneViewData& sceneViewData, graphics::GraphRoot* graphRoot);
        void RenderWaterReflection(unsigned int arg1, int arg2, graphics::EffectManager& effectManager,
                                   const graphics::SceneViewData& sceneViewData, graphics::GraphRoot* graphRoot,
                                   const math::Vector4T<float>& vector4);
        void RenderWaterCaustics(unsigned int arg1, int arg2, graphics::EffectManager& effectManager,
                                 const graphics::SceneViewData& sceneViewData, graphics::GraphRoot* graphRoot);
        void UnregisterRenderTargets(graphics::EffectManager& effectManager);
        void RenderDebug(const render::Viewport& viewport);
        void AddDrawableList(graphics::DrawableList* drawableList);
        void RemoveDrawableList(graphics::DrawableList* drawableList);
        void AddDrawable(graphics::Drawable* drawable);
        void RemoveDrawable(graphics::Drawable* drawable);
        void AddShadowCastingPointLight(const graphics::SceneViewData& sceneViewData, float arg2, float arg3,
                                        const shared_ptr<LightSource>& lightSource, const math::Sphere& sphere);
        void UpdatePointLightShadows(graphics::EffectManager& effectManager,
                                     const graphics::SceneViewData& sceneViewData);
        static int32_t m_skipObliqueReflectionFrustum;      // = 1
        static float m_stencilTransparencyNearClipRange;    // = 50.0f
        static float m_stencilTransparencyFarClipThreshold; // = 1750.0f
        static float m_stencilTransparencyFarClipRange;     // = 1250.0f
        static bool m_showCameraFrustum;
        static bool m_debugRender;
        static bool m_freezeCulling;
        static bool m_enableZPrePass;
        static int32_t m_enableDeferredShadows;
        static int32_t m_stencilTransparencyNearClipThreshold;

    private:
        RT7Core* field_8;
        uint8_t _unknown_16[64];
        Renderer field_80;
        uint8_t _unknown_168[6240];
        Renderer m_mainSceneRenderer;
        uint8_t _unknown_6496[6240];
        PointLightShadowPassVisTestFunctor field_12736;
        uint8_t _unknown_12804[12];
        SunShadowPassVisTestFunctor field_12816;
        uint8_t _unknown_13008[144];
        RenderDeviceSecondaryContext* field_13152;
        uint8_t _unknown_13160[56];
        uint64_t field_13216;
        uint64_t field_13224;
        bool field_13232;
        uint8_t _unknown_13233[15];
        ColourHSL field_13248;
        int field_13264;
        uint8_t _unknown_13268[16];
        float field_13284;
        uint32_t field_13288;
        uint8_t _unknown_13292[148];
        ViewTransforms field_13440;
        uint8_t _unknown_13592[120];
        ViewTransforms field_13712;
        uint8_t _unknown_13864[56];
        Frustum field_13920;
        uint8_t _unknown_14024[56];
        Frustum field_14080;
        uint8_t _unknown_14184[88];
        uint64_t field_14272;
        uint64_t field_14280;
        uint64_t field_14288;
        uint64_t field_14296;
        uint64_t field_14304;
        uint64_t field_14312;
        uint64_t field_14320;
        uint64_t field_14328;
        uint64_t field_14336;
        uint64_t field_14344;
        uint64_t field_14352;
        uint64_t field_14360;
        uint64_t field_14368;
        uint64_t field_14376;
        uint64_t field_14384;
        uint64_t field_14392;
        uint64_t field_14400;
        uint64_t field_14408;
        uint64_t field_14416;
        uint64_t field_14424;
        uint64_t field_14432;
        uint64_t field_14440;
        uint64_t field_14448;
        uint64_t field_14456;
        uint64_t field_14464;
        uint64_t field_14472;
        uint64_t field_14480;
        uint64_t field_14488;
        uint64_t field_14496;
        uint64_t field_14504;
        uint64_t field_14512;
        uint64_t field_14520;
        ViewTransforms m_prevViewTransforms;
        uint8_t _unknown_14680[56];
        Frustum m_prevViewFrustum;
        uint8_t _unknown_14840[120];
        Frustum field_14960;
        uint8_t _unknown_15064[6515304];
    };

    // 0x1003c1200
    Renderer SceneRenderManager::GetMainSceneRenderer() {
        return m_mainSceneRenderer;
    }

    // 0x100401980
    Frustum SceneRenderManager::GetPrevViewFrustum() const {
        return m_prevViewFrustum;
    }

    // 0x100432380
    ViewTransforms SceneRenderManager::GetPrevViewTransforms() const {
        return m_prevViewTransforms;
    }

    // 0x100475c30
    void SceneRenderManager::GetVisiblePointLights(
        graphics::EffectManager&, graphics::SceneViewData const&,
        World const&)::$_9::operator()(const shared_ptr<LightSource>& lightSource) const {
        uint64_t uVar2;
        Vector3T<float>* pVVar8;
        long* plVar9;
        unsigned int* puVar11;
        float fVar12;
        uint8_t local_b8[16];
        uint8_t local_a8[31];
        char local_89;

        SceneRenderManager* pSVar1 = *(SceneRenderManager**)(this + 32);
        auto pLVar5 = lightSource.operator->();
        pLVar5->SetVisibleLastFrame(false);
        auto pEVar6 = lightSource.operator->();
        auto pAVar7 = pEVar6->GetAABB();
        OBB local_88(*pAVar7);
        bool cVar3 = (*(OcclusionManager**)this)->DepthBufferCanOcclude();
        char cVar4 = '\x01';
        if (cVar3) {
            cVar4 = (*(OcclusionManager**)this)
                        ->OBBVisible(local_88, *(*(SceneViewData**)(this + 8)),
                                     (SceneViewData*)**(uint64_t**)(this + 16), 1.0);
        }
        long lVar10 = *(long*)(this + 8);
        pEVar6 = (Entity*)lightSource.operator->();
        pAVar7 = (AABB*)pEVar6->GetAABB();
        cVar3 = ((lVar10 + 208))->TestIntersection(*pAVar7);
        uVar2._4_4_ = local_a8._4_4_;
        uVar2._0_1_ = local_a8[0];
        uVar2._1_1_ = local_a8[1];
        uVar2._2_1_ = local_a8[2];
        uVar2._3_1_ = local_a8[3];
        if ((cVar3) && (local_a8._0_8_ = uVar2, cVar4)) {
            local_a8._16_8_ = pSVar1;
            local_89 = cVar4;
            pLVar5 = (LightSource*)lightSource.operator->();
            local_a8._0_8_ = pLVar5->GetWorldSphere();
            (*(vector<math::Sphere>**)(this + 24))->push_back(*local_a8);
            lVar10 = *(long*)(this + 8);
            pVVar8 = (Vector3T<float>*)local_a8->SSOBeginPtr();
            fVar12 = (float)local_a8->GetOutlineRadiusAdjustment();
            new (local_b8) math::Sphere(*pVVar8, fVar12 * 0.8);
            cVar4 = ((lVar10 + 208))->TestIntersection(*local_b8);
            if (cVar4) {
                pLVar5 = (LightSource*)lightSource.operator->();
                pLVar5->SetVisibleLastFrame(true);
                AddShadowCastingPointLight((SceneRenderManager*)local_a8._16_8_, *(SceneViewData**)(this + 8),
                                           *(float*)(*(long*)(this + 40) + 24), *(float*)(*(long*)(this + 40) + 20),
                                           lightSource, (Sphere*)local_a8);
            }
            cVar4 = local_89;
        }
        if (World::m_showOccludedPointLights != '\0' && !cVar4) {
            plVar9 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar9 != nullptr) {
                pEVar6 = (Entity*)lightSource.operator->();
                pVVar8 = (Vector3T<float>*)pEVar6->GetWorldPosition();
                lVar10 = lightSource.operator->();
                puVar11 = (unsigned int*)((lVar10 + 192))->SSOBeginPtr();
                new (local_a8) math::Sphere(*pVVar8, (float)*puVar11);
                lVar10 = lightSource.operator->();
                ((lVar10 + 192))->GetPos();
                new (local_b8) oldscape::sidebars::SideBarData(-1, 3);
                (**(void (**)(...))(*plVar9 + 32))(plVar9, (Sphere*)local_a8, (SideBarData*)local_b8);
            }
        }
    }

} // namespace jag::game
