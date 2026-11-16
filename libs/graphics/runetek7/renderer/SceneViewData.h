// libs/graphics/runetek7/renderer/SceneViewData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class SceneViewData {
    public:
        void GetViewTransforms() const;
        uint8_t* GetRenderTargets() const;
        SceneViewData(const SceneViewData& sceneViewData);
        void SetRenderTargetViewports(const eastl::fixed_vector<render::Viewport, 2ul>& viewports);
        ~SceneViewData();
        void SetOcclusionTestEnabled(bool arg1);
        void SetMinOcclusionDrawableRadius(float arg1);
        void SetMinOcclusionDrawableAxisLength(float arg1);
        void SetStippleNearClipParams(float arg1, float arg2);
        void SetStippleFarClipParams(float arg1, float arg2);
        void SetRenderFlags(unsigned int arg1);
        void SetRenderTargets(const render::RenderTargetData& renderTargetData);
        float* GetViewFrustum() const;
        bool GetOcclusionTestEnabled() const;
        void HasShadowPass() const;
        float* GetStippleNearClipParams() const;
        void HasRenderPass(RenderPassType renderPassType) const;
        float* GetStippleFarClipParams() const;
        SceneViewData* operator=(const SceneViewData& sceneViewData);
        void GetRenderTargetViewports() const;
        bool IsForwardPassOnly() const;
        RenderPassBitSet* GetRenderPassBits() const;
        RenderPass* GetRenderPass(RenderPassType renderPassType) const;
        bool UseAsyncRenderingResources() const;
        SceneViewData();
        void Clear();
        void SetTransforms(const Camera& camera);
        void SetTransforms(const ViewTransforms& viewTransforms);
        void SetTransforms(const math::Matrix44T<float>& matrix441, const math::Matrix44T<float>& matrix442);
        void RenderPassPushBack(RenderPass* renderPass);
        void RenderPassPopBack();
        SceneViewData(SceneViewData&& sceneViewData);

    private:
        uint8_t _unknown_0[208];
        uint8_t m_pViewFrustum[4];
        uint8_t _unknown_212[412];
        uint8_t field_624;
        bool m_occlusionTestEnabled;
        uint16_t field_626;
        float m_minOcclusionDrawableRadius;
        float m_minOcclusionDrawableAxisLength;
        uint32_t m_renderPassBits;
        float m_stippleNearClipParams;
        float field_644;
        float m_stippleFarClipParams;
        float field_652;
        unsigned int m_renderFlags;
        uint8_t _unknown_660[4];
    };

    // 0x1001cb970
    void SceneViewData::SetRenderTargetViewports(const eastl::fixed_vector<render::Viewport, 2ul>& viewports) {
        field_432 = viewports;
    }

    // 0x1001cfe90
    void SceneViewData::SetOcclusionTestEnabled(bool arg1) {
        m_occlusionTestEnabled = arg1;
    }

    // 0x1001cfea0
    void SceneViewData::SetMinOcclusionDrawableRadius(float arg1) {
        m_minOcclusionDrawableRadius = arg1;
    }

    // 0x1001cfeb0
    void SceneViewData::SetMinOcclusionDrawableAxisLength(float arg1) {
        m_minOcclusionDrawableAxisLength = arg1;
    }

    // 0x1001cfec0
    void SceneViewData::SetStippleNearClipParams(float arg1, float arg2) {
        m_stippleNearClipParams = arg1;
        field_644 = arg2;
    }

    // 0x1001cfee0
    void SceneViewData::SetStippleFarClipParams(float arg1, float arg2) {
        m_stippleFarClipParams = arg1;
        field_652 = arg2;
    }

    // 0x1001cff00
    void SceneViewData::SetRenderFlags(unsigned int arg1) {
        m_renderFlags = arg1;
    }

    // 0x1001d0700
    void SceneViewData::SetRenderTargets(const render::RenderTargetData& renderTargetData) {
        field_368 = renderTargetData;
    }

    // 0x1001d07d0
    float* SceneViewData::GetViewFrustum() const {
        return &m_translation;
    }

    // 0x1001d0970
    bool SceneViewData::GetOcclusionTestEnabled() const {
        return m_occlusionTestEnabled;
    }

    // 0x1001d1700
    void SceneViewData::HasShadowPass() const {
        m_renderPassBits.HasShadowMapPass();
    }

    // 0x1001de4d0
    SceneViewData::SceneViewData(const SceneViewData& sceneViewData) {
        _memcpy(this, sceneViewData, 428);
        new (&field_432) eastl::fixed_vector<render::Viewport, 2ul>(sceneViewData.field_432);
        new (&field_520) eastl::fixed_vector<RenderPass*, 8ul>(sceneViewData.field_520);
        m_renderFlags = sceneViewData.m_renderFlags;
        uint8_t uVar4 = sceneViewData.field_624;
        bool bVar5 = sceneViewData.m_occlusionTestEnabled;
        uint16_t uVar6 = sceneViewData.field_626;
        float fVar7 = sceneViewData.m_minOcclusionDrawableRadius;
        float fVar8 = sceneViewData.m_minOcclusionDrawableAxisLength;
        uint32_t uVar9 = sceneViewData.m_renderPassBits;
        float fVar1 = sceneViewData.field_644;
        float fVar2 = sceneViewData.m_stippleFarClipParams;
        float fVar3 = sceneViewData.field_652;
        m_stippleNearClipParams = sceneViewData.m_stippleNearClipParams;
        field_644 = fVar1;
        m_stippleFarClipParams = fVar2;
        field_652 = fVar3;
        field_624 = uVar4;
        m_occlusionTestEnabled = bVar5;
        field_626 = uVar6;
        m_minOcclusionDrawableRadius = fVar7;
        m_minOcclusionDrawableAxisLength = fVar8;
        m_renderPassBits = uVar9;
    }

    // 0x1001dedb0
    SceneViewData::~SceneViewData() {
        field_520.~fixed_vector();
        field_432.~fixed_vector();
    }

    // 0x10042fd30
    void SceneViewData::HasRenderPass(RenderPassType renderPassType) const {
        m_renderPassBits.HasFormatType(
            oldscape::option::transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(renderPassType));
    }

    // 0x10047dee0
    SceneViewData* SceneViewData::operator=(const SceneViewData& sceneViewData) {
        *this = sceneViewData;
        *m_pViewFrustum = sceneViewData.m_pViewFrustum;
        field_368 = sceneViewData.field_368;
        field_432 = sceneViewData.field_432;
        field_520 = sceneViewData.field_520;
        bool bVar1 = sceneViewData.m_occlusionTestEnabled;
        uint16_t uVar2 = sceneViewData.field_626;
        float fVar3 = sceneViewData.m_minOcclusionDrawableRadius;
        float fVar4 = sceneViewData.m_minOcclusionDrawableAxisLength;
        uint32_t uVar5 = sceneViewData.m_renderPassBits;
        float fVar6 = sceneViewData.m_stippleNearClipParams;
        float fVar7 = sceneViewData.field_644;
        float fVar8 = sceneViewData.m_stippleFarClipParams;
        float fVar9 = sceneViewData.field_652;
        field_624 = sceneViewData.field_624;
        m_occlusionTestEnabled = bVar1;
        field_626 = uVar2;
        m_minOcclusionDrawableRadius = fVar3;
        m_minOcclusionDrawableAxisLength = fVar4;
        m_renderPassBits = uVar5;
        m_stippleNearClipParams = fVar6;
        field_644 = fVar7;
        m_stippleFarClipParams = fVar8;
        field_652 = fVar9;
        m_renderFlags = sceneViewData.m_renderFlags;
        return this;
    }

    // 0x1007a7dd0
    bool SceneViewData::IsForwardPassOnly() const {
        return ((uint8_t)m_renderFlags & 8) >> 3;
    }

    // 0x1007b7260
    RenderPassBitSet* SceneViewData::GetRenderPassBits() const {
        return (RenderPassBitSet*)&m_renderPassBits;
    }

    // 0x1007e4090
    bool SceneViewData::UseAsyncRenderingResources() const {
        return (m_renderFlags & 4) == 0;
    }

    // 0x1008d5b70
    SceneViewData::SceneViewData(SceneViewData&& sceneViewData) {
        _memcpy(this, sceneViewData, 428);
        new (&field_432) eastl::fixed_vector<render::Viewport, 2ul>(sceneViewData.field_432);
        new (&field_520) eastl::fixed_vector<RenderPass*, 8ul>(sceneViewData.field_520);
        m_renderFlags = sceneViewData.m_renderFlags;
        uint8_t uVar4 = sceneViewData.field_624;
        bool bVar5 = sceneViewData.m_occlusionTestEnabled;
        uint16_t uVar6 = sceneViewData.field_626;
        float fVar7 = sceneViewData.m_minOcclusionDrawableRadius;
        float fVar8 = sceneViewData.m_minOcclusionDrawableAxisLength;
        uint32_t uVar9 = sceneViewData.m_renderPassBits;
        float fVar1 = sceneViewData.field_644;
        float fVar2 = sceneViewData.m_stippleFarClipParams;
        float fVar3 = sceneViewData.field_652;
        m_stippleNearClipParams = sceneViewData.m_stippleNearClipParams;
        field_644 = fVar1;
        m_stippleFarClipParams = fVar2;
        field_652 = fVar3;
        field_624 = uVar4;
        m_occlusionTestEnabled = bVar5;
        field_626 = uVar6;
        m_minOcclusionDrawableRadius = fVar7;
        m_minOcclusionDrawableAxisLength = fVar8;
        m_renderPassBits = uVar9;
    }

} // namespace jag::graphics
