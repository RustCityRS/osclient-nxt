// libs/hal/render/state/DrawCallState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class DrawCallState {
    public:
        void GetDrawParams();
        bool HasInputAssemblerState() const;
        bool HasRenderPipelineState() const;
        void HasOutputMergerState() const;
        void SetRenderPipelineState(RenderPipelineState* renderPipelineState);
        void SetOutputMergerState(OutputMergerState* outputMergerState);
        RenderPipelineState* GetRenderPipelineState();
        OutputMergerState* GetOutputMergerState();
        void SetInputAssemblerState(InputAssemblerState* inputAssemblerState);
        ~DrawCallState();
        DrawCallState(const DrawCallState& drawCallState);
        void Clear();
        uint32_t OwnsInputAssemblerState() const;
        InputAssemblerState* GetInputAssemblerState() const;
        uint32_t OwnsRenderPipelineState() const;
        RenderPipelineState* GetRenderPipelineState() const;
        uint32_t OwnsOutputMergerState() const;
        OutputMergerState* GetOutputMergerState() const;
        InputAssemblerState* GetInputAssemblerState();
        DrawCallState* operator=(const DrawCallState& drawCallState);
        DrawCallState();

    private:
        InputAssemblerState* m_pInputAssemblerState;
        RenderPipelineState* m_pRenderPipelineState;
        OutputMergerState* m_pOutputMergerState;
        RadialHighlightState field_24;
    };

    // 0x100c32c10
    DrawCallState::DrawCallState()
        : m_pInputAssemblerState(nullptr), m_pRenderPipelineState(nullptr), m_pOutputMergerState(nullptr) {}

} // namespace jag::render
