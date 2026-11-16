// libs/hal/render/state/DispatchCallState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::render {
    class DispatchCallState {
    public:
        bool HasComputePipelineState() const;
        DispatchCallState(const DispatchCallState& dispatchCallState);
        void Clear();
        uint32_t OwnsComputePipelineState() const;
        ComputePipelineState* GetComputePipelineState() const;
        ~DispatchCallState();
        ComputePipelineState* GetComputePipelineState();
        void SetComputePipelineState(ComputePipelineState* computePipelineState);
        DispatchCallState* operator=(const DispatchCallState& dispatchCallState);
        DispatchCallState();

    private:
        ComputePipelineState* m_pComputePipelineState;
        uint8_t _unknown_8[8];
    };

    // 0x100c32c70
    DispatchCallState::DispatchCallState() : m_pComputePipelineState(nullptr) {}

} // namespace jag::render
