// libs/graphics/runetek7/renderer/renderpasses/CausticsPass.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class CausticsPass {
    public:
        // virtual methods in vtable order
        virtual ~CausticsPass();
        virtual uint64_t BeginPass(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                   EffectManager& effectManager, const SceneViewData& sceneViewData,
                                   const DrawableQueue& drawableQueue);
        virtual void Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState, EffectManager& effectManager,
                            const SceneViewData& sceneViewData, DrawableQueue& drawableQueue);
        virtual void RenderDebug(EffectManager& effectManager, DrawableQueue& drawableQueue);
        virtual CausticsPass* GetOcclusionRTName();
        CausticsPass(render::RenderTargetsManager* renderTargetsManager, ThreadPool* threadPool);
        static float m_cameraHeight; // = 10000.0f
        static float m_cameraOffset; // = 7500.0f
        static bool m_showCausticsMap;

    private:
        EnumOptionToggle field_8;
        uint8_t _unknown_12[4];
        OcclusionManager field_16;
        uint8_t _unknown_729[47];
        uint16_t field_776;
        uint8_t field_778;
        uint8_t _unknown_779[1];
        uint32_t field_780;
        RenderTargetsManager* field_784;
        uint32_t field_792;
    };

    // 0x1007bbf60
    CausticsPass* CausticsPass::GetOcclusionRTName() {

        new (this) eastl::string("");
        return this;
    }

    // 0x10098df50
    CausticsPass::CausticsPass(render::RenderTargetsManager* renderTargetsManager, ThreadPool* threadPool)
        : SceneRenderPass(7, renderTargetsManager, threadPool) {}

    // 0x1009912a0
    CausticsPass::~CausticsPass() {}

} // namespace jag::graphics
