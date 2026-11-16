// libs/graphics/runetek7/renderer/renderpasses/ForwardLightingPass.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class ForwardLightingPass {
    public:
        // virtual methods in vtable order
        virtual ~ForwardLightingPass();
        virtual uint64_t BeginPass(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                   EffectManager& effectManager, const SceneViewData& sceneViewData,
                                   const DrawableQueue& drawableQueue);
        virtual void Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState, EffectManager& effectManager,
                            const SceneViewData& sceneViewData, DrawableQueue& drawableQueue);
        virtual void RenderDebug(EffectManager& effectManager, DrawableQueue& drawableQueue);
        virtual void RegisterTweakVarsOcclusion(tweak::Container& container);
        virtual ForwardLightingPass* GetOcclusionRTName();
        void SetAlphaBlendDepthWrite(bool arg1);
        ForwardLightingPass(render::RenderTargetsManager* renderTargetsManager,
                            postprocess::PostProcessManager& postProcessManager, ThreadPool* threadPool);
        void RenderFullscreenEffects(RT7Core& rt7Core, render::RenderContext& renderContext,
                                     const render::RenderTargets* renderTargets,
                                     const graphicutils::RenderToTextureHelper& renderToTextureHelper,
                                     EffectManager& effectManager, const SceneViewData& sceneViewData) const;
        void RenderBlurredRefractionBuffers(RT7Core& rt7Core, render::RenderContext& renderContext,
                                            EffectManager& effectManager, const SceneViewData& sceneViewData,
                                            DrawableQueue& drawableQueue, bool arg6);
        void GetSortByMaterial();
        static bool m_sortByMaterial;   // = 1
        static bool m_DrawOpaque;       // = 1
        static bool m_DrawAlphaTested;  // = 1
        static bool m_DrawRefracted;    // = 1
        static bool m_DrawAlphaBlended; // = 1
        static bool m_DrawRT7Materials; // = 1
        static bool m_DrawRT5Materials; // = 1
        static bool m_showOpaqueScene;
        static bool m_showOpaqueSceneDepth;

    private:
        EnumOptionToggle field_8;
        uint8_t _unknown_12[4];
        OcclusionManager field_16;
        uint8_t _unknown_729[47];
        bool field_776;
        uint8_t field_777;
        uint8_t field_778;
        uint8_t _unknown_779[1];
        uint32_t field_780;
        RenderTargetsManager* field_784;
        unsigned int field_792;
        uint8_t _unknown_796[4];
        PostProcessManager* field_800;
        uint8_t _unknown_808[60];
        bool m_alphaBlendDepthWrite;
    };

    // 0x1001d01d0
    void ForwardLightingPass::SetAlphaBlendDepthWrite(bool arg1) {
        m_alphaBlendDepthWrite = arg1;
    }

    // 0x1007bbfd0
    ForwardLightingPass* ForwardLightingPass::GetOcclusionRTName() {

        new (this) eastl::string("ForwardOcclusion");
        return this;
    }

    // 0x1007e4c80
    void ForwardLightingPass::GetSortByMaterial() {
        return m_sortByMaterial;
    }

} // namespace jag::graphics
