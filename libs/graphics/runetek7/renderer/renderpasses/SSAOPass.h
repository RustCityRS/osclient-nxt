// libs/graphics/runetek7/renderer/renderpasses/SSAOPass.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class SSAOPass {
    public:
        // virtual methods in vtable order
        virtual ~SSAOPass();
        virtual uint64_t BeginPass(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                   EffectManager& effectManager, const SceneViewData& sceneViewData,
                                   const DrawableQueue& drawableQueue);
        virtual void Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState, EffectManager& effectManager,
                            const SceneViewData& sceneViewData, DrawableQueue& drawableQueue);
        virtual void RenderDebug(EffectManager& effectManager, DrawableQueue& drawableQueue);
        virtual void CreateRenderingResources();
        virtual void DestroyRenderingResources();
        void SetGBufferRT(const shared_ptr<render::RenderTargets>& renderTargets);
        void SetSSSAORT(const shared_ptr<render::RenderTargets>& renderTargets);
        SSAOPass();
        void ClearSSAORT(RT7Core& rt7Core);
        void SetSharedState(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                            const render::ShaderProgram& shaderProgram, const SceneViewData& sceneViewData);
        void SetSSAOContext(SSAOContext* texture);
        static int32_t m_SSAOModeNiceNames__[16]; // initialised in its definition
        static int32_t m_SSAOMode;                // = 1
        static StringEnum m_SSAOModeNiceNames;    // = StringEnum((StringEnumEntry *)&m_SSAOModeNiceNames__, 4)

    private:
        uint8_t _unknown_8[616];
        Texture* m_pSSAOContext;
        shared_ptr field_632;
        shared_ptr field_648;
        uint8_t _unknown_664[1048];
        InputAssemblerState field_1712;
        InputAssemblerState field_1904;
    };

    // 0x1001d0730
    void SSAOPass::SetGBufferRT(const shared_ptr<render::RenderTargets>& renderTargets) {
        *field_632 = renderTargets;
    }

    // 0x1001d0750
    void SSAOPass::SetSSSAORT(const shared_ptr<render::RenderTargets>& renderTargets) {
        *field_648 = renderTargets;
    }

} // namespace jag::graphics
