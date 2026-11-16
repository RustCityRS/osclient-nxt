// libs/graphics/runetek7/renderer/renderpasses/ForwardLightingPass.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class ForwardLightingPass {
    public:
        // virtual methods in vtable order
        virtual ~ForwardLightingPass();
        virtual BeginPass(render::DrawCallState&, render::RenderContext&, EffectManager&, SceneViewData const&,
                          DrawableQueue const&);
        virtual void Render(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&,
                            DrawableQueue&);
        virtual void RenderDebug(EffectManager&, DrawableQueue&);
        virtual void RegisterTweakVarsOcclusion(tweak::Container&);
        virtual ForwardLightingPass* GetOcclusionRTName();
        void SetAlphaBlendDepthWrite(bool);
        ForwardLightingPass(render::RenderTargetsManager*, postprocess::PostProcessManager&, ThreadPool*);
        void RenderFullscreenEffects(RT7Core&, render::RenderContext&, render::RenderTargets const*,
                                     graphicutils::RenderToTextureHelper const&, EffectManager&,
                                     SceneViewData const&) const;
        void RenderBlurredRefractionBuffers(RT7Core&, render::RenderContext&, EffectManager&, SceneViewData const&,
                                            DrawableQueue&, bool);
        GetSortByMaterial();
        static /* 1 bytes */ m_sortByMaterial;   // = 1
        static /* 1 bytes */ m_DrawOpaque;       // = 1
        static /* 1 bytes */ m_DrawAlphaTested;  // = 1
        static /* 1 bytes */ m_DrawRefracted;    // = 1
        static /* 1 bytes */ m_DrawAlphaBlended; // = 1
        static /* 1 bytes */ m_DrawRT7Materials; // = 1
        static /* 1 bytes */ m_DrawRT5Materials; // = 1
        static /* 1 bytes */ m_showOpaqueScene;
        static /* 1 bytes */ m_showOpaqueSceneDepth;

        // data members, from how the methods use this: 869 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        char _unknown_12[4];
        OcclusionManager field_16; // offset 16
        char _unknown_729[47];
        bool field_776;       // offset 776
        undefined1 field_777; // offset 777
        undefined1 field_778; // offset 778
        char _unknown_779[1];
        undefined4 field_780; // offset 780
        undefined8 field_784; // offset 784
        uint field_792;       // offset 792
        char _unknown_796[4];
        PostProcessManager* field_800; // offset 800
        undefined1 field_808;          // offset 808
        char _unknown_809[59];
        bool m_alphaBlendDepthWrite; // offset 868
    };

    // 0x1001d01d0, 16 bytes, inline, placed by class name and debug map
    // ForwardLightingPass::SetAlphaBlendDepthWrite(bool)
    void ForwardLightingPass::SetAlphaBlendDepthWrite(bool param_1) {
        m_alphaBlendDepthWrite = param_1;
    }

    // 0x1007bbfd0, 64 bytes, inline, placed by class name
    // ForwardLightingPass::GetOcclusionRTName()
    ForwardLightingPass* ForwardLightingPass::GetOcclusionRTName() {
        allocator local_20[8];

        eastl::allocator::allocator(local_20, "EASTL basic_string");
        new (this) eastl::string("ForwardOcclusion", local_20);
        return this;
    }

    // 0x1007e4c80, 16 bytes, inline, placed by class name
    // ForwardLightingPass::GetSortByMaterial()
    undefined8 ForwardLightingPass::GetSortByMaterial() {
        return CONCAT71(16839735, m_sortByMaterial);
    }

} // namespace jag::graphics
