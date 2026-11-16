// libs/graphics/runetek7/renderer/renderpasses/DepthDownsamplePass.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class DepthDownsamplePass : public ShadowCascadeSelectionPass // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~DepthDownsamplePass();
        virtual void Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState, EffectManager& effectManager,
                            const SceneViewData& sceneViewData, DrawableQueue& drawableQueue);
        virtual void CreateRenderingResources();
        virtual void DestroyRenderingResources();
        DepthDownsamplePass();
        void SetDepthTexture(const render::Texture* texture);
        void SetCombineWithPrevious(bool arg1);

    private:
        uint8_t _unknown_640[84];
        bool m_combineWithPrevious;
        uint8_t _unknown_725[3];
        InputAssemblerState field_728;
        uint8_t _unknown_920[448];
    };

    // 0x1007ae2f0
    void DepthDownsamplePass::SetDepthTexture(const render::Texture* texture) {
        m_pSSAOContext = texture;
    }

    // 0x1007ae300
    void DepthDownsamplePass::SetCombineWithPrevious(bool arg1) {
        m_combineWithPrevious = arg1;
    }

} // namespace jag::graphics
