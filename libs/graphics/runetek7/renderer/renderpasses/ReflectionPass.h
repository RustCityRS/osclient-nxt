// libs/graphics/runetek7/renderer/renderpasses/ReflectionPass.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class ReflectionPass {
    public:
        // virtual methods in vtable order
        virtual ~ReflectionPass();
        virtual void PreparePass(RT7Core& rt7Core, EffectManager& effectManager, const SceneViewData& sceneViewData,
                                 DrawableQueue& drawableQueue);
        virtual uint64_t BeginPass(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                   EffectManager& effectManager, const SceneViewData& sceneViewData,
                                   const DrawableQueue& drawableQueue);
        virtual void Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState, EffectManager& effectManager,
                            const SceneViewData& sceneViewData, DrawableQueue& drawableQueue);
        virtual void RenderDebug(EffectManager& effectManager, DrawableQueue& drawableQueue);
        virtual void RegisterTweakVarsOcclusion(tweak::Container& container);
        virtual void OnOcclusionEnabled();
        virtual ReflectionPass* GetOcclusionRTName();
        ReflectionPass(render::RenderTargetsManager* renderTargetsManager, ThreadPool* threadPool);
        static bool m_showReflectionMap;

    private:
        EnumOptionToggle field_8;
        uint8_t _unknown_12[4];
        OcclusionManager field_16;
        uint8_t _unknown_729[47];
        bool field_776;
        bool field_777;
        bool field_778;
        uint8_t _unknown_779[1];
        int field_780;
        RenderTargetsManager* field_784;
        unsigned int field_792;
        uint8_t field_796;
        uint8_t _unknown_797[7];
    };

    // 0x1007bc0d0
    ReflectionPass* ReflectionPass::GetOcclusionRTName() {

        new (this) eastl::string("ReflectionOcclusion");
        return this;
    }

} // namespace jag::graphics
