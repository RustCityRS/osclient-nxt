// libs/graphics/runetek7/renderer/SceneViewData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class SceneViewData {
    public:
        GetViewTransforms() const;
        GetRenderTargets() const;
        SceneViewData(SceneViewData const&);
        void SetRenderTargetViewports(eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator> const&);
        ~SceneViewData();
        void SetOcclusionTestEnabled(bool);
        void SetMinOcclusionDrawableRadius(float);
        void SetMinOcclusionDrawableAxisLength(float);
        void SetStippleNearClipParams(float, float);
        void SetStippleFarClipParams(float, float);
        void SetRenderFlags(unsigned int);
        void SetRenderTargets(render::RenderTargetData const&);
        GetViewFrustum() const;
        bool GetOcclusionTestEnabled() const;
        void HasShadowPass() const;
        float* GetStippleNearClipParams() const;
        void HasRenderPass(RenderPassType) const;
        float* GetStippleFarClipParams() const;
        SceneViewData* operator=(SceneViewData const&);
        GetRenderTargetViewports() const;
        byte IsForwardPassOnly() const;
        GetRenderPassBits() const;
        RenderPass* GetRenderPass(RenderPassType) const;
        bool UseAsyncRenderingResources() const;
        SceneViewData();
        void Clear();
        void SetTransforms(Camera const&);
        void SetTransforms(ViewTransforms const&);
        void SetTransforms(math::Matrix44T<float> const&, math::Matrix44T<float> const&);
        void RenderPassPushBack(RenderPass*);
        void RenderPassPopBack();
        SceneViewData(SceneViewData&&);

        // data members, from how the methods use this: 664 bytes
        char _unknown_0[80];
        undefined1 field_80; // offset 80
        char _unknown_81[127];
        undefined1 m_pViewFrustum[4]; // offset 208
        char _unknown_212[308];
        RenderPass* field_520; // offset 520
        char _unknown_528[96];
        undefined1 field_624;                   // offset 624
        bool m_occlusionTestEnabled;            // offset 625
        undefined2 field_626;                   // offset 626
        float m_minOcclusionDrawableRadius;     // offset 628
        float m_minOcclusionDrawableAxisLength; // offset 632
        undefined4 m_renderPassBits;            // offset 636
        float m_stippleNearClipParams;          // offset 640
        float field_644;                        // offset 644
        float m_stippleFarClipParams;           // offset 648
        float field_652;                        // offset 652
        uint m_renderFlags;                     // offset 656
        char _unknown_660[4];
    };

    // 0x1001cb960, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // SceneViewData::SceneViewData(SceneViewData const&): jumps straight to the base-object constructor

    // 0x1001cb970, 32 bytes, inline, placed by class name and debug map
    // SceneViewData::SetRenderTargetViewports(eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator> const&)
    void SceneViewData::SetRenderTargetViewports(fixed_vector* param_1) {
        eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>::operator=(
            (fixed_vector<render::Viewport, 2ul, true, eastl::allocator>*)&field_432, param_1);
    }

    // 0x1001cbc40, 16 bytes, complete-object destructor, inline, placed by class name
    // SceneViewData::~SceneViewData(): jumps straight to the base-object destructor

    // 0x1001cfe90, 16 bytes, inline, placed by class name
    // SceneViewData::SetOcclusionTestEnabled(bool)
    void SceneViewData::SetOcclusionTestEnabled(bool param_1) {
        m_occlusionTestEnabled = param_1;
    }

    // 0x1001cfea0, 16 bytes, inline, placed by class name
    // SceneViewData::SetMinOcclusionDrawableRadius(float)
    void SceneViewData::SetMinOcclusionDrawableRadius(float param_1) {
        m_minOcclusionDrawableRadius = param_1;
    }

    // 0x1001cfeb0, 16 bytes, inline, placed by class name
    // SceneViewData::SetMinOcclusionDrawableAxisLength(float)
    void SceneViewData::SetMinOcclusionDrawableAxisLength(float param_1) {
        m_minOcclusionDrawableAxisLength = param_1;
    }

    // 0x1001cfec0, 32 bytes, inline, placed by class name
    // SceneViewData::SetStippleNearClipParams(float, float)
    void SceneViewData::SetStippleNearClipParams(float param_1, float param_2) {
        m_stippleNearClipParams = param_1;
        field_644 = param_2;
    }

    // 0x1001cfee0, 32 bytes, inline, placed by class name
    // SceneViewData::SetStippleFarClipParams(float, float)
    void SceneViewData::SetStippleFarClipParams(float param_1, float param_2) {
        m_stippleFarClipParams = param_1;
        field_652 = param_2;
    }

    // 0x1001cff00, 16 bytes, inline, placed by class name
    // SceneViewData::SetRenderFlags(unsigned int)
    void SceneViewData::SetRenderFlags(uint param_1) {
        m_renderFlags = param_1;
    }

    // 0x1001d0700, 32 bytes, inline, placed by class name
    // SceneViewData::SetRenderTargets(render::RenderTargetData const&)
    void SceneViewData::SetRenderTargets(RenderTargetData* param_1) {
        render::RenderTargetData::operator=((RenderTargetData*)&field_368, param_1);
    }

    // 0x1001d07d0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SceneViewData::GetViewFrustum() const
    /* GraphNode::GetTranslation() */

    float* GraphNode::GetTranslation() {
        return &m_translation;
    }

    // 0x1001d0970, 16 bytes, inline, placed by class name
    // SceneViewData::GetOcclusionTestEnabled() const
    undefined1 SceneViewData::GetOcclusionTestEnabled() {
        return m_occlusionTestEnabled;
    }

    // 0x1001d1700, 32 bytes, inline, placed by class name
    // SceneViewData::HasShadowPass() const
    void SceneViewData::HasShadowPass() {
        (&m_renderPassBits)->HasShadowMapPass();
    }

    // 0x1001de4d0, 144 bytes, base-object constructor, inline, placed by class name
    // SceneViewData::SceneViewData(SceneViewData const&)
    void SceneViewData::SceneViewData(SceneViewData* param_1) {
        float fVar1;
        float fVar2;
        float fVar3;
        undefined1 uVar4;
        bool bVar5;
        undefined2 uVar6;
        float fVar7;
        float fVar8;
        undefined4 uVar9;

        _memcpy(this, param_1, 428);
        new (&field_432, (fixed_vector*)&param_1->field_432)
            eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>();
        new (&field_520, (fixed_vector*)&param_1->field_520)
            eastl::fixed_vector<RenderPass*, 8ul, true, eastl::allocator>();
        m_renderFlags = param_1->m_renderFlags;
        uVar4 = param_1->field_624;
        bVar5 = param_1->m_occlusionTestEnabled;
        uVar6 = param_1->field_626;
        fVar7 = param_1->m_minOcclusionDrawableRadius;
        fVar8 = param_1->m_minOcclusionDrawableAxisLength;
        uVar9 = param_1->m_renderPassBits;
        fVar1 = param_1->field_644;
        fVar2 = param_1->m_stippleFarClipParams;
        fVar3 = param_1->field_652;
        m_stippleNearClipParams = param_1->m_stippleNearClipParams;
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

    // 0x1001dedb0, 48 bytes, base-object destructor, inline, placed by class name
    // SceneViewData::~SceneViewData()
    void SceneViewData::~SceneViewData() {
        (&field_520)->~fixed_vector();
        (&field_432)->~fixed_vector();
    }

    // 0x10042fd30, 48 bytes, inline, placed by class name
    // SceneViewData::HasRenderPass(RenderPassType) const
    void SceneViewData::HasRenderPass(undefined4 param_2) {
        undefined4 uVar1;

        uVar1 = oldscape::option::transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(param_2);
        (&m_renderPassBits, uVar1)->HasFormatType();
    }

    // 0x10047dee0, 160 bytes, inline, placed by class name
    // SceneViewData::operator=(SceneViewData const&)
    /* SceneViewData::TEMPNAMEPLACEHOLDERVALUE(SceneViewData const&) */

    SceneViewData* SceneViewData::operator=(SceneViewData* param_1) {
        bool bVar1;
        undefined2 uVar2;
        float fVar3;
        float fVar4;
        undefined4 uVar5;
        float fVar6;
        float fVar7;
        float fVar8;
        float fVar9;

        ViewTransforms::operator=((ViewTransforms*)this, (ViewTransforms*)param_1);
        math::Frustum::operator=((Frustum*)m_pViewFrustum, (Frustum*)param_1->m_pViewFrustum);
        render::RenderTargetData::operator=((RenderTargetData*)&field_368, (RenderTargetData*)&param_1->field_368);
        eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>::operator=(
            (fixed_vector<render::Viewport, 2ul, true, eastl::allocator>*)&field_432,
            (fixed_vector*)&param_1->field_432);
        eastl::fixed_vector<RenderPass*, 8ul, true, eastl::allocator>::operator=(
            (fixed_vector<RenderPass*, 8ul, true, eastl::allocator>*)&field_520, (fixed_vector*)&param_1->field_520);
        bVar1 = param_1->m_occlusionTestEnabled;
        uVar2 = param_1->field_626;
        fVar3 = param_1->m_minOcclusionDrawableRadius;
        fVar4 = param_1->m_minOcclusionDrawableAxisLength;
        uVar5 = param_1->m_renderPassBits;
        fVar6 = param_1->m_stippleNearClipParams;
        fVar7 = param_1->field_644;
        fVar8 = param_1->m_stippleFarClipParams;
        fVar9 = param_1->field_652;
        field_624 = param_1->field_624;
        m_occlusionTestEnabled = bVar1;
        field_626 = uVar2;
        m_minOcclusionDrawableRadius = fVar3;
        m_minOcclusionDrawableAxisLength = fVar4;
        m_renderPassBits = uVar5;
        m_stippleNearClipParams = fVar6;
        field_644 = fVar7;
        m_stippleFarClipParams = fVar8;
        field_652 = fVar9;
        m_renderFlags = param_1->m_renderFlags;
        return this;
    }

    // 0x1007a7dd0, 32 bytes, inline, placed by class name and debug map
    // SceneViewData::IsForwardPassOnly() const
    byte SceneViewData::IsForwardPassOnly() {
        return ((byte)m_renderFlags & 8) >> 3;
    }

    // 0x1007b7260, 16 bytes, inline, placed by class name
    // SceneViewData::GetRenderPassBits() const
    undefined4* SceneViewData::GetRenderPassBits() {
        return &m_renderPassBits;
    }

    // 0x1007e4090, 16 bytes, inline, placed by class name and debug map
    // SceneViewData::UseAsyncRenderingResources() const
    bool SceneViewData::UseAsyncRenderingResources() {
        return (m_renderFlags & 4) == 0;
    }

    // 0x1008d5b20, 16 bytes, complete-object constructor, inline, placed by class name
    // SceneViewData::SceneViewData(SceneViewData&&): jumps straight to the base-object constructor

    // 0x1008d5b70, 144 bytes, base-object constructor, inline, placed by class name
    // SceneViewData::SceneViewData(SceneViewData&&)
    void SceneViewData::SceneViewData(SceneViewData* param_1) {
        float fVar1;
        float fVar2;
        float fVar3;
        undefined1 uVar4;
        bool bVar5;
        undefined2 uVar6;
        float fVar7;
        float fVar8;
        undefined4 uVar9;

        _memcpy(this, param_1, 428);
        new (&field_432, (fixed_vector*)&param_1->field_432)
            eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>();
        new (&field_520, (fixed_vector*)&param_1->field_520)
            eastl::fixed_vector<RenderPass*, 8ul, true, eastl::allocator>();
        m_renderFlags = param_1->m_renderFlags;
        uVar4 = param_1->field_624;
        bVar5 = param_1->m_occlusionTestEnabled;
        uVar6 = param_1->field_626;
        fVar7 = param_1->m_minOcclusionDrawableRadius;
        fVar8 = param_1->m_minOcclusionDrawableAxisLength;
        uVar9 = param_1->m_renderPassBits;
        fVar1 = param_1->field_644;
        fVar2 = param_1->m_stippleFarClipParams;
        fVar3 = param_1->field_652;
        m_stippleNearClipParams = param_1->m_stippleNearClipParams;
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
