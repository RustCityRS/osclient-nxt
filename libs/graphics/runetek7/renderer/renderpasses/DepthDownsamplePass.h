// libs/graphics/runetek7/renderer/renderpasses/DepthDownsamplePass.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class DepthDownsamplePass : public ShadowCascadeSelectionPass // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~DepthDownsamplePass();
        virtual void Render(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&,
                            DrawableQueue&);
        virtual void CreateRenderingResources();
        virtual void DestroyRenderingResources();
        DepthDownsamplePass();
        SetDepthTexture(render::Texture const*);
        void SetCombineWithPrevious(bool);

        // data members, from how the methods use this: 1368 bytes, the first 640 are ShadowCascadeSelectionPass
        char _unknown_640[84];
        bool m_combineWithPrevious; // offset 724
        char _unknown_725[3];
        InputAssemblerState field_728; // offset 728
        char _unknown_920[448];
    };

    // 0x1007ae2f0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // DepthDownsamplePass::SetDepthTexture(render::Texture const*)
    /* SSAOPass::SetSSAOContext(SSAOContext*) */

    void SSAOPass::SetSSAOContext(SSAOContext* param_1) {
        m_pSSAOContext = param_1;
    }

    // 0x1007ae300, 16 bytes, inline, placed by class name
    // DepthDownsamplePass::SetCombineWithPrevious(bool)
    void DepthDownsamplePass::SetCombineWithPrevious(bool param_1) {
        m_combineWithPrevious = param_1;
    }

} // namespace jag::graphics
