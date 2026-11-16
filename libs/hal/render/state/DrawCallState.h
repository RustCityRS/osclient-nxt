// libs/hal/render/state/DrawCallState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    class DrawCallState {
    public:
        GetDrawParams();
        HasInputAssemblerState() const;
        HasRenderPipelineState() const;
        HasOutputMergerState() const;
        void SetRenderPipelineState(RenderPipelineState*);
        void SetOutputMergerState(OutputMergerState*);
        RenderPipelineState* GetRenderPipelineState();
        OutputMergerState* GetOutputMergerState();
        void SetInputAssemblerState(InputAssemblerState*);
        ~DrawCallState();
        DrawCallState(DrawCallState const&);
        void Clear();
        OwnsInputAssemblerState() const;
        InputAssemblerState* GetInputAssemblerState() const;
        OwnsRenderPipelineState() const;
        RenderPipelineState* GetRenderPipelineState() const;
        OwnsOutputMergerState() const;
        OutputMergerState* GetOutputMergerState() const;
        InputAssemblerState* GetInputAssemblerState();
        DrawCallState* operator=(DrawCallState const&);
        DrawCallState();

        // data members, from how the methods use this: 48 bytes
        InputAssemblerState* m_pInputAssemblerState; // offset 0
        RenderPipelineState* m_pRenderPipelineState; // offset 8
        OutputMergerState* m_pOutputMergerState;     // offset 16
        RadialHighlightState field_24;               // offset 24
    };

    // 0x100c1d9a0, 16 bytes, complete-object constructor, inline, placed by class name
    // DrawCallState::DrawCallState(): jumps straight to the base-object constructor

    // 0x100c32c10, 32 bytes, base-object constructor, inline, placed by class name
    // DrawCallState::DrawCallState()
    void DrawCallState::DrawCallState() {
        m_pInputAssemblerState = (InputAssemblerState*)0;
        m_pRenderPipelineState = (RenderPipelineState*)0;
        m_pOutputMergerState = (OutputMergerState*)0;
        new (field_24) game::EntityHighlightGlobalState::RadialHighlightState();
    }

} // namespace jag::render
