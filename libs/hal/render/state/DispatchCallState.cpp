// libs/hal/render/state/DispatchCallState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "DispatchCallState.h"

namespace jag::render {
    // 0x10000b5b0: DispatchCallState::HasComputePipelineState() const has the same machine code as fixedfunction::function<void (BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::allocated() const

    // 0x100bf41e0
    DispatchCallState::DispatchCallState(const DispatchCallState& dispatchCallState)
        : m_pComputePipelineState(nullptr) {
        VectorFastPool<ComputePipelineState>* this_00;
        ComputePipelineState* pCVar2;

        Clear();
        if (OwnsComputePipelineState(dispatchCallState) == '\0') {
            pCVar2 = dispatchCallState.m_pComputePipelineState;
        } else {
            this_00 = GetStateObjectPool<ComputePipelineState>();
            pCVar2 = GetComputePipelineState(dispatchCallState);
            pCVar2 = this_00->Create<ComputePipelineState&>(*pCVar2);
        }
        m_pComputePipelineState = pCVar2;
    }

    // 0x100bf4250
    void DispatchCallState::Clear() {
        if (OwnsComputePipelineState() != '\0') {
            GetStateObjectPool<ComputePipelineState>()->Destroy(m_pComputePipelineState);
            m_pComputePipelineState = nullptr;
        }
    }

    // 0x100bf4280
    uint32_t DispatchCallState::OwnsComputePipelineState() const {
        bool cVar1;
        uint32_t uVar2;

        if (m_pComputePipelineState == nullptr) {
            uVar2 = 0;
        } else {
            uVar2 = GetStateObjectPool<ComputePipelineState>()->is_owner(m_pComputePipelineState);
            if (((char)uVar2 != '\0') && (cVar1 = this_thread::IsMainThread(), !cVar1)) {
                LogAssert("!result || this_thread::IsMainThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                          "DispatchCallState.cpp",
                          72, nullptr);
            }
        }
        return uVar2;
    }

    // 0x100bf4460
    ComputePipelineState* DispatchCallState::GetComputePipelineState() const {
        if (m_pComputePipelineState == nullptr) {
            m_pComputePipelineState = GetStateObjectPool<ComputePipelineState>()->Create<>();
        }
        return m_pComputePipelineState;
    }

    // 0x100bf44a0
    DispatchCallState::~DispatchCallState() {
        Clear();
    }

    // 0x100bf4540
    ComputePipelineState* DispatchCallState::GetComputePipelineState() {
        ComputePipelineState* pCVar1;

        if (m_pComputePipelineState == nullptr) {
            pCVar1 = GetStateObjectPool<ComputePipelineState>()->Create<>();
            m_pComputePipelineState = pCVar1;
            pCVar1 = m_pComputePipelineState;
        } else {
            pCVar1 = m_pComputePipelineState;
        }
        if (pCVar1 == nullptr) {
            LogAssert("m_pComputePipelineState",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                      "DispatchCallState.cpp",
                      46, nullptr);
        }
        return m_pComputePipelineState;
    }

    // 0x100bf4660
    void DispatchCallState::SetComputePipelineState(ComputePipelineState* computePipelineState) {
        if (OwnsComputePipelineState() != '\0') {
            GetStateObjectPool<ComputePipelineState>()->Destroy(m_pComputePipelineState);
        }
        m_pComputePipelineState = computePipelineState;
    }

    // 0x100bf4700
    DispatchCallState* DispatchCallState::operator=(const DispatchCallState& dispatchCallState) {
        VectorFastPool<ComputePipelineState>* this_00;
        ComputePipelineState* pCVar2;

        Clear();
        if (OwnsComputePipelineState(dispatchCallState) == '\0') {
            pCVar2 = dispatchCallState.m_pComputePipelineState;
        } else {
            this_00 = GetStateObjectPool<ComputePipelineState>();
            pCVar2 = GetComputePipelineState(dispatchCallState);
            pCVar2 = this_00->Create<ComputePipelineState&>(*pCVar2);
        }
        m_pComputePipelineState = pCVar2;
        return this;
    }

} // namespace jag::render
