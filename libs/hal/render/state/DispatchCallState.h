// libs/hal/render/state/DispatchCallState.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::render {
    class DispatchCallState {
    public:
        HasComputePipelineState() const;
        DispatchCallState(DispatchCallState const&);
        void Clear();
        OwnsComputePipelineState() const;
        ComputePipelineState* GetComputePipelineState() const;
        ~DispatchCallState();
        ComputePipelineState* GetComputePipelineState();
        void SetComputePipelineState(ComputePipelineState*);
        DispatchCallState* operator=(DispatchCallState const&);
        DispatchCallState();

        // data members, from how the methods use this: 16 bytes
        ComputePipelineState* m_pComputePipelineState; // offset 0
        char _unknown_8[8];
    };

    // 0x100c1e380, 16 bytes, complete-object constructor, inline, placed by class name
    // DispatchCallState::DispatchCallState(): jumps straight to the base-object constructor

    // 0x100c32c70, 32 bytes, base-object constructor, inline, placed by class name
    // DispatchCallState::DispatchCallState()
    void DispatchCallState::DispatchCallState() {
        m_pComputePipelineState = (ComputePipelineState*)0;
        new (&field_8) math::Vector3T<int>();
    }

} // namespace jag::render
