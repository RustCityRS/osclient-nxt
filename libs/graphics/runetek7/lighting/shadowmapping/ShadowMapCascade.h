// libs/graphics/runetek7/lighting/shadowmapping/ShadowMapCascade.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class ShadowMapCascade {
    public:
        // virtual methods in vtable order
        virtual ~ShadowMapCascade();
        virtual BeginPass(render::DrawCallState&, render::RenderContext&, EffectManager&, SceneViewData const&,
                          DrawableQueue const&);
        virtual void Render(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&,
                            DrawableQueue&);
        virtual void RenderDebug(EffectManager&, DrawableQueue&);
        virtual void RegisterTweakVarsOcclusion(tweak::Container&);
        virtual void OnOcclusionEnabled();
        virtual GetOcclusionRTName();
        GetLightOrthProjMax() const;
        GetWorldOBB() const;
        CanRender() const;
        void SetClearViewport(bool);
        GetLightViewTransforms() const;
        GetCasterCullFrustum() const;
        GetLightOrthProjMin() const;
        int GetCascadeID() const;
        void SetFrustum(ViewTransforms const&, float, float, math::Matrix44T<float> const&);
        void SetCanRender(bool);
        GetFrustumWorldBoundingSphere() const;
        void SetShadowMapViewport(render::Viewport const&);
        ShadowMapCascade(int, DirLightCsmManager*, render::RenderTargetsManager*, ThreadPool*);
        bool GetClearViewport() const;
        void UpdateLightViewMatrices(DrawableQueue const&);
        void GetDrawablesCasterReceiverAABB(float&, math::AABB&, math::AABB&, math::Vector4T<float> const&,
                                            DrawableQueue const&);
        void AddReceiverIfVisible(math::AABB&, math::OBB const&, math::AABB const&,
                                  math::Matrix44T<float> const&) const;
        IsLastCascade() const;

        // data members, from how the methods use this: 1354 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[8];
        undefined1 field_16; // offset 16
        char _unknown_17[7];
        bool field_24; // offset 24
        char _unknown_25[751];
        undefined1 field_776; // offset 776
        undefined1 field_777; // offset 777
        bool field_778;       // offset 778
        char _unknown_779[5];
        RenderTargetsManager* field_784; // offset 784
        char _unknown_792[4];
        int m_cascadeID;               // offset 796
        DirLightCsmManager* field_800; // offset 800
        float field_808;               // offset 808
        float field_812;               // offset 812
        char _unknown_816[336];
        undefined8 field_1152; // offset 1152
        undefined8 field_1160; // offset 1160
        undefined8 field_1168; // offset 1168
        char _unknown_1176[168];
        bool m_canRender;     // offset 1344
        bool m_clearViewport; // offset 1345
        bool field_1346;      // offset 1346
        char _unknown_1347[7];
    };

    // 0x1001d0940, 16 bytes, inline, placed by class name and debug map
    // ShadowMapCascade::CanRender() const
    undefined1 ShadowMapCascade::CanRender() {
        return m_canRender;
    }

    // 0x1001d0950, 16 bytes, inline, placed by class name and debug map
    // ShadowMapCascade::SetClearViewport(bool)
    void ShadowMapCascade::SetClearViewport(bool param_1) {
        m_clearViewport = param_1;
    }

    // 0x1001d0960, 16 bytes, inline, placed by class name and debug map
    // ShadowMapCascade::GetLightViewTransforms() const
    undefined1* ShadowMapCascade::GetLightViewTransforms() {
        return &field_848;
    }

    // 0x1001d0980, 16 bytes, inline, placed by class name and debug map
    // ShadowMapCascade::GetCasterCullFrustum() const
    undefined1* ShadowMapCascade::GetCasterCullFrustum() {
        return &field_1184;
    }

    // 0x1007b12b0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ShadowMapCascade::GetCascadeID() const
    /* QueryPass::GetMode() const */

    int QueryPass::GetMode() {
        return m_mode;
    }

    // 0x1008abab0, 16 bytes, inline, placed by class name
    // ShadowMapCascade::SetCanRender(bool)
    void ShadowMapCascade::SetCanRender(bool param_1) {
        m_canRender = param_1;
    }

    // 0x1008ac110, 16 bytes, inline, placed by class name
    // ShadowMapCascade::GetFrustumWorldBoundingSphere() const
    undefined1* ShadowMapCascade::GetFrustumWorldBoundingSphere() {
        return &field_1136;
    }

    // 0x1008acf80, 32 bytes, inline, placed by class name
    // ShadowMapCascade::SetShadowMapViewport(render::Viewport const&)
    void ShadowMapCascade::SetShadowMapViewport(Viewport* param_1) {
        undefined8 uVar1;

        field_1168 = *(undefined8*)&param_1->field_16;
        uVar1 = *(undefined8*)&param_1->field_8;
        field_1152 = *(undefined8*)param_1;
        field_1160 = uVar1;
    }

    // 0x1008b0770, 16 bytes, inline, placed by class name
    // ShadowMapCascade::GetClearViewport() const
    undefined1 ShadowMapCascade::GetClearViewport() {
        return m_clearViewport;
    }

    // 0x1008cc4c0, 144 bytes, inline, placed by class name
    // ShadowMapCascade::GetOcclusionRTName()
    ShadowMapCascade* ShadowMapCascade::GetOcclusionRTName() {
        long in_RSI;
        jag local_58[32];
        eastl local_38[32];

        ToString<eastl::string, int>(local_58, (int*)(in_RSI + 796), 10);
        eastl::operator+(local_38, (value_type*)"Cascade", (basic_string*)local_58);
        eastl::operator+((eastl*)this, (basic_string*)local_38, (value_type*)"Occlusion");
        local_38->~basic_string();
        local_58->~basic_string();
        return this;
    }

} // namespace jag::graphics
