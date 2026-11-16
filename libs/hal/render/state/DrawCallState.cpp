// libs/hal/render/state/DrawCallState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.render

#include "DrawCallState.h"

namespace jag::render {
    // 0x100009d00: DrawCallState::GetDrawParams() has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second()

    // 0x10000b5b0: DrawCallState::HasInputAssemblerState() const has the same machine code as fixedfunction::function<void (BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::allocated() const

    // 0x100058b00: DrawCallState::HasRenderPipelineState() const has the same machine code as shared_ptr<oldscape::rs2lib::worldmap::MapElement>::operator bool() const

    // 0x1001a3cf0: DrawCallState::HasOutputMergerState() const has the same machine code as eastl::internal::function_detail<16, bool ()>::HaveManager() const

    // 0x100bdf420
    void DrawCallState::SetRenderPipelineState(RenderPipelineState* renderPipelineState) {
        if (OwnsRenderPipelineState() != '\0') {
            GetStateObjectPool<RenderPipelineState>()->Destroy(m_pRenderPipelineState);
        }
        m_pRenderPipelineState = renderPipelineState;
    }

    // 0x100bdf460
    void DrawCallState::SetOutputMergerState(OutputMergerState* outputMergerState) {
        if (OwnsOutputMergerState() != '\0') {
            GetStateObjectPool<OutputMergerState>()->Destroy(m_pOutputMergerState);
        }
        m_pOutputMergerState = outputMergerState;
    }

    // 0x100bdf490
    RenderPipelineState* DrawCallState::GetRenderPipelineState() {
        RenderPipelineState* pRVar1;

        if (m_pRenderPipelineState == nullptr) {
            pRVar1 = GetStateObjectPool<RenderPipelineState>()->Create<>();
            m_pRenderPipelineState = pRVar1;
            pRVar1 = m_pRenderPipelineState;
        } else {
            pRVar1 = m_pRenderPipelineState;
        }
        if (pRVar1 == nullptr) {
            LogAssert("m_pRenderPipelineState",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                      "DrawCallState.cpp",
                      100, nullptr);
        }
        return m_pRenderPipelineState;
    }

    // 0x100bdf4f0
    OutputMergerState* DrawCallState::GetOutputMergerState() {
        OutputMergerState* pOVar1;

        if (m_pOutputMergerState == nullptr) {
            pOVar1 = GetStateObjectPool<OutputMergerState>()->Create<>();
            m_pOutputMergerState = pOVar1;
            pOVar1 = m_pOutputMergerState;
        } else {
            pOVar1 = m_pOutputMergerState;
        }
        if (pOVar1 == nullptr) {
            LogAssert("m_pOutputMergerState",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                      "DrawCallState.cpp",
                      119, nullptr);
        }
        return m_pOutputMergerState;
    }

    // 0x100bdf750
    void DrawCallState::SetInputAssemblerState(InputAssemblerState* inputAssemblerState) {
        if (OwnsInputAssemblerState() != '\0') {
            GetStateObjectPool<InputAssemblerState>()->Destroy(m_pInputAssemblerState);
        }
        m_pInputAssemblerState = inputAssemblerState;
    }

    // 0x100bf4760
    DrawCallState::DrawCallState(const DrawCallState& drawCallState)
        : m_pInputAssemblerState(nullptr), m_pRenderPipelineState(nullptr), m_pOutputMergerState(nullptr) {
        VectorFastPool<InputAssemblerState>* this_00;
        InputAssemblerState* pIVar2;
        VectorFastPool<RenderPipelineState>* this_01;
        RenderPipelineState* pRVar3;
        VectorFastPool<OutputMergerState>* this_02;
        OutputMergerState* pOVar4;

        Clear();
        if (!(OwnsInputAssemblerState(drawCallState))) {
            pIVar2 = drawCallState.m_pInputAssemblerState;
        } else {
            this_00 = GetStateObjectPool<InputAssemblerState>();
            pIVar2 = (InputAssemblerState*)GetInputAssemblerState(drawCallState);
            pIVar2 = this_00->Create<InputAssemblerState&>(*pIVar2);
        }
        m_pInputAssemblerState = pIVar2;
        if (!(OwnsRenderPipelineState(drawCallState))) {
            pRVar3 = drawCallState.m_pRenderPipelineState;
        } else {
            this_01 = GetStateObjectPool<RenderPipelineState>();
            pRVar3 = (RenderPipelineState*)GetRenderPipelineState(drawCallState);
            pRVar3 = this_01->Create<RenderPipelineState&>(*pRVar3);
        }
        m_pRenderPipelineState = pRVar3;
        if (!(OwnsOutputMergerState(drawCallState))) {
            pOVar4 = drawCallState.m_pOutputMergerState;
        } else {
            this_02 = GetStateObjectPool<OutputMergerState>();
            pOVar4 = GetOutputMergerState(drawCallState);
            pOVar4 = this_02->Create<OutputMergerState&>(*pOVar4);
        }
        m_pOutputMergerState = pOVar4;
    }

    // 0x100bf4830
    void DrawCallState::Clear() {

        if (OwnsInputAssemblerState()) {
            GetStateObjectPool<InputAssemblerState>()->Destroy(m_pInputAssemblerState);
            m_pInputAssemblerState = nullptr;
        }
        if (OwnsRenderPipelineState()) {
            GetStateObjectPool<RenderPipelineState>()->Destroy(m_pRenderPipelineState);
            m_pRenderPipelineState = nullptr;
        }
        if (OwnsOutputMergerState()) {
            GetStateObjectPool<OutputMergerState>()->Destroy(m_pOutputMergerState);
            m_pOutputMergerState = nullptr;
        }
    }

    // 0x100bf48b0
    uint32_t DrawCallState::OwnsInputAssemblerState() const {
        bool cVar1;
        uint32_t uVar2;

        if (m_pInputAssemblerState == nullptr) {
            uVar2 = 0;
        } else {
            uVar2 = GetStateObjectPool<InputAssemblerState>()->is_owner(m_pInputAssemblerState);
            if (((char)uVar2 != '\0') && (cVar1 = this_thread::IsMainThread(), !cVar1)) {
                LogAssert("!result || this_thread::IsMainThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                          "DrawCallState.cpp",
                          165, nullptr);
            }
        }
        return uVar2;
    }

    // 0x100bf4a90
    InputAssemblerState* DrawCallState::GetInputAssemblerState() const {
        if (m_pInputAssemblerState == nullptr) {
            m_pInputAssemblerState = GetStateObjectPool<InputAssemblerState>()->Create<>();
        }
        return m_pInputAssemblerState;
    }

    // 0x100bf4ac0
    uint32_t DrawCallState::OwnsRenderPipelineState() const {
        bool cVar1;
        uint32_t uVar2;

        if (m_pRenderPipelineState == nullptr) {
            uVar2 = 0;
        } else {
            uVar2 = GetStateObjectPool<RenderPipelineState>()->is_owner(m_pRenderPipelineState);
            if (((char)uVar2 != '\0') && (cVar1 = this_thread::IsMainThread(), !cVar1)) {
                LogAssert("!result || this_thread::IsMainThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                          "DrawCallState.cpp",
                          172, nullptr);
            }
        }
        return uVar2;
    }

    // 0x100bf4ca0
    RenderPipelineState* DrawCallState::GetRenderPipelineState() const {
        if (m_pRenderPipelineState == nullptr) {
            m_pRenderPipelineState = GetStateObjectPool<RenderPipelineState>()->Create<>();
        }
        return m_pRenderPipelineState;
    }

    // 0x100bf4cd0
    uint32_t DrawCallState::OwnsOutputMergerState() const {
        bool cVar1;
        uint32_t uVar2;

        if (m_pOutputMergerState == nullptr) {
            uVar2 = 0;
        } else {
            uVar2 = GetStateObjectPool<OutputMergerState>()->is_owner(m_pOutputMergerState);
            if (((char)uVar2 != '\0') && (cVar1 = this_thread::IsMainThread(), !cVar1)) {
                LogAssert("!result || this_thread::IsMainThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                          "DrawCallState.cpp",
                          179, nullptr);
            }
        }
        return uVar2;
    }

    // 0x100bf4eb0
    OutputMergerState* DrawCallState::GetOutputMergerState() const {
        if (m_pOutputMergerState == nullptr) {
            m_pOutputMergerState = GetStateObjectPool<OutputMergerState>()->Create<>();
        }
        return m_pOutputMergerState;
    }

    // 0x100bf4ef0
    DrawCallState::~DrawCallState() {
        Clear();
    }

    // 0x100bf5080
    InputAssemblerState* DrawCallState::GetInputAssemblerState() {
        InputAssemblerState* pIVar1;

        if (m_pInputAssemblerState == nullptr) {
            pIVar1 = GetStateObjectPool<InputAssemblerState>()->Create<>();
            m_pInputAssemblerState = pIVar1;
            pIVar1 = m_pInputAssemblerState;
        } else {
            pIVar1 = m_pInputAssemblerState;
        }
        if (pIVar1 == nullptr) {
            LogAssert("m_pInputAssemblerState",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                      "DrawCallState.cpp",
                      81, nullptr);
        }
        return m_pInputAssemblerState;
    }

    // 0x100bf5470
    DrawCallState* DrawCallState::operator=(const DrawCallState& drawCallState) {
        VectorFastPool<InputAssemblerState>* this_00;
        InputAssemblerState* pIVar2;
        VectorFastPool<RenderPipelineState>* this_01;
        RenderPipelineState* pRVar3;
        VectorFastPool<OutputMergerState>* this_02;
        OutputMergerState* pOVar4;

        Clear();
        if (!(OwnsInputAssemblerState(drawCallState))) {
            pIVar2 = drawCallState.m_pInputAssemblerState;
        } else {
            this_00 = GetStateObjectPool<InputAssemblerState>();
            pIVar2 = (InputAssemblerState*)GetInputAssemblerState(drawCallState);
            pIVar2 = this_00->Create<InputAssemblerState&>(*pIVar2);
        }
        m_pInputAssemblerState = pIVar2;
        if (!(OwnsRenderPipelineState(drawCallState))) {
            pRVar3 = drawCallState.m_pRenderPipelineState;
        } else {
            this_01 = GetStateObjectPool<RenderPipelineState>();
            pRVar3 = (RenderPipelineState*)GetRenderPipelineState(drawCallState);
            pRVar3 = this_01->Create<RenderPipelineState&>(*pRVar3);
        }
        m_pRenderPipelineState = pRVar3;
        if (!(OwnsOutputMergerState(drawCallState))) {
            pOVar4 = drawCallState.m_pOutputMergerState;
        } else {
            this_02 = GetStateObjectPool<OutputMergerState>();
            pOVar4 = GetOutputMergerState(drawCallState);
            pOVar4 = this_02->Create<OutputMergerState&>(*pOVar4);
        }
        m_pOutputMergerState = pOVar4;
        return this;
    }

} // namespace jag::render
