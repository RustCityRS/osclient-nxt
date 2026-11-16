// libs/graphics/runetek7/lighting/shadowmapping/ShadowMapCascade.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class ShadowMapCascade {
    public:
        // virtual methods in vtable order
        virtual ~ShadowMapCascade();
        virtual uint64_t BeginPass(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                   EffectManager& effectManager, const SceneViewData& sceneViewData,
                                   const DrawableQueue& drawableQueue);
        virtual void Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState, EffectManager& effectManager,
                            const SceneViewData& sceneViewData, DrawableQueue& drawableQueue);
        virtual void RenderDebug(EffectManager& effectManager, DrawableQueue& drawableQueue);
        virtual void RegisterTweakVarsOcclusion(tweak::Container& container);
        virtual void OnOcclusionEnabled();
        virtual auto GetOcclusionRTName();
        uint8_t* GetLightOrthProjMax() const;
        uint8_t* GetWorldOBB() const;
        bool CanRender() const;
        void SetClearViewport(bool arg1);
        uint8_t* GetLightViewTransforms() const;
        Frustum* GetCasterCullFrustum() const;
        uint8_t* GetLightOrthProjMin() const;
        int GetCascadeID() const;
        void SetFrustum(const ViewTransforms& viewTransforms, float arg2, float arg3,
                        const math::Matrix44T<float>& matrix44);
        void SetCanRender(bool arg1);
        uint8_t* GetFrustumWorldBoundingSphere() const;
        void SetShadowMapViewport(const render::Viewport& viewport);
        ShadowMapCascade(int arg1, DirLightCsmManager* dirLightCsmManager,
                         render::RenderTargetsManager* renderTargetsManager, ThreadPool* threadPool);
        bool GetClearViewport() const;
        void UpdateLightViewMatrices(const DrawableQueue& drawableQueue);
        void GetDrawablesCasterReceiverAABB(float& arg1, math::AABB& aabb1, math::AABB& aabb2,
                                            const math::Vector4T<float>& vector4, const DrawableQueue& drawableQueue);
        void AddReceiverIfVisible(math::AABB& aabb1, const math::OBB& obb, const math::AABB& aabb2,
                                  const math::Matrix44T<float>& matrix44) const;
        bool IsLastCascade() const;

    private:
        uint8_t _unknown_8[16];
        bool field_24;
        uint8_t _unknown_25[751];
        uint8_t field_776;
        uint8_t field_777;
        bool field_778;
        uint8_t _unknown_779[5];
        RenderTargetsManager* field_784;
        uint8_t _unknown_792[4];
        int m_cascadeID;
        DirLightCsmManager* field_800;
        float field_808;
        float field_812;
        uint8_t _unknown_816[336];
        uint64_t field_1152;
        uint64_t field_1160;
        uint64_t field_1168;
        uint8_t _unknown_1176[168];
        bool m_canRender;
        bool m_clearViewport;
        bool field_1346;
        uint8_t _unknown_1347[7];
    };

    // 0x1001d0940
    bool ShadowMapCascade::CanRender() const {
        return m_canRender;
    }

    // 0x1001d0950
    void ShadowMapCascade::SetClearViewport(bool arg1) {
        m_clearViewport = arg1;
    }

    // 0x1001d0960
    uint8_t* ShadowMapCascade::GetLightViewTransforms() const {
        return &field_848;
    }

    // 0x1001d0980
    Frustum* ShadowMapCascade::GetCasterCullFrustum() const {
        return (Frustum*)&field_1184;
    }

    // 0x1007b12b0
    int ShadowMapCascade::GetCascadeID() const {
        return m_mode;
    }

    // 0x1008abab0
    void ShadowMapCascade::SetCanRender(bool arg1) {
        m_canRender = arg1;
    }

    // 0x1008ac110
    uint8_t* ShadowMapCascade::GetFrustumWorldBoundingSphere() const {
        return &field_1136;
    }

    // 0x1008acf80
    void ShadowMapCascade::SetShadowMapViewport(const render::Viewport& viewport) {
        field_1168 = *(uint64_t*)&viewport.field_16;
        uint64_t uVar1 = *(uint64_t*)&viewport.field_8;
        field_1152 = *(uint64_t*)viewport;
        field_1160 = uVar1;
    }

    // 0x1008b0770
    bool ShadowMapCascade::GetClearViewport() const {
        return m_clearViewport;
    }

    // 0x1008cc4c0
    auto ShadowMapCascade::GetOcclusionRTName() {
        auto result;
        eastl::string local_58;
        value_type local_38;

        ToString<eastl::string, int>(&local_58, (int)this + 796);
        local_38 + (*((eastl::string*)"Cascade"));
        result + local_38;
        return result;
    }

} // namespace jag::graphics
