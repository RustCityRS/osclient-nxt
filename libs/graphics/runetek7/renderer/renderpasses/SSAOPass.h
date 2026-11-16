// libs/graphics/runetek7/renderer/renderpasses/SSAOPass.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class SSAOPass {
    public:
        // virtual methods in vtable order
        virtual ~SSAOPass();
        virtual BeginPass(render::DrawCallState&, render::RenderContext&, EffectManager&, SceneViewData const&,
                          DrawableQueue const&);
        virtual void Render(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&,
                            DrawableQueue&);
        virtual void RenderDebug(EffectManager&, DrawableQueue&);
        virtual void CreateRenderingResources();
        virtual void DestroyRenderingResources();
        void SetGBufferRT(shared_ptr<render::RenderTargets> const&);
        void SetSSSAORT(shared_ptr<render::RenderTargets> const&);
        SSAOPass();
        void ClearSSAORT(RT7Core&);
        void SetSharedState(render::DrawCallState&, render::RenderContext&, render::ShaderProgram const&,
                            SceneViewData const&);
        void SetSSAOContext(SSAOContext*);
        static /* 64 bytes */ m_SSAOModeNiceNames__; // initialised in its definition
        static /* 4 bytes */ m_SSAOMode;             // = 1
        static StringEnum                            /* 16 bytes */
            m_SSAOModeNiceNames;                     // = StringEnum((StringEnumEntry *)&m_SSAOModeNiceNames__, 4)

        // data members, from how the methods use this: 1912 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[616];
        SSAOContext* m_pSSAOContext; // offset 624
        shared_ptr field_632;        // offset 632
        shared_ptr field_648;        // offset 648
        char _unknown_664[1248];
    };

    // 0x1001d0730, 32 bytes, inline, placed by class name and debug map
    // SSAOPass::SetGBufferRT(shared_ptr<render::RenderTargets> const&)
    void SSAOPass::SetGBufferRT(shared_ptr* param_1) {
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)field_632, param_1);
    }

    // 0x1001d0750, 32 bytes, inline, placed by class name and debug map
    // SSAOPass::SetSSSAORT(shared_ptr<render::RenderTargets> const&)
    void SSAOPass::SetSSSAORT(shared_ptr* param_1) {
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)field_648, param_1);
    }

} // namespace jag::graphics
