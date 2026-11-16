// libs/hal/render/state/DrawCallState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "DrawCallState.h"

namespace jag::render {
    // 0x100009d00: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second(), which has identical code
    DrawCallState::GetDrawParams();

    // 0x10000b5b0: the linker folded this into fixedfunction::function<void (BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::allocated() const, which has identical code
    DrawCallState::HasInputAssemblerState() const;

    // 0x100058b00: the linker folded this into shared_ptr<oldscape::rs2lib::worldmap::MapElement>::operator bool() const, which has identical code
    DrawCallState::HasRenderPipelineState() const;

    // 0x1001a3cf0: the linker folded this into eastl::internal::function_detail<16, bool ()>::HaveManager() const, which has identical code
    DrawCallState::HasOutputMergerState() const;

    // 0x100bdf420, 48 bytes, placed by class name and debug map
    // DrawCallState::SetRenderPipelineState(RenderPipelineState*)
    void DrawCallState::SetRenderPipelineState(RenderPipelineState* param_1) {
        VectorFastPool* this_00;

        if (OwnsRenderPipelineState(this) != '\0') {
            this_00 = GetStateObjectPool<RenderPipelineState>();
            this_00->Destroy(m_pRenderPipelineState);
        }
        m_pRenderPipelineState = param_1;
    }

    // 0x100bdf460, 48 bytes, placed by class name and debug map
    // DrawCallState::SetOutputMergerState(OutputMergerState*)
    void DrawCallState::SetOutputMergerState(OutputMergerState* param_1) {
        VectorFastPool* this_00;

        if (OwnsOutputMergerState(this) != '\0') {
            this_00 = GetStateObjectPool<OutputMergerState>();
            this_00->Destroy(m_pOutputMergerState);
        }
        m_pOutputMergerState = param_1;
    }

    // 0x100bdf490, 96 bytes, placed by class name and debug map
    // DrawCallState::GetRenderPipelineState()
    RenderPipelineState* DrawCallState::GetRenderPipelineState() {
        VectorFastPool* this_00;
        RenderPipelineState* pRVar1;

        if (m_pRenderPipelineState == (RenderPipelineState*)0) {
            this_00 = GetStateObjectPool<RenderPipelineState>();
            pRVar1 = VectorFastPool<RenderPipelineState>::Create<>((VectorFastPool<RenderPipelineState>*)this_00);
            m_pRenderPipelineState = pRVar1;
            pRVar1 = m_pRenderPipelineState;
        } else {
            pRVar1 = m_pRenderPipelineState;
        }
        if (pRVar1 == (RenderPipelineState*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pRenderPipelineState",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                      "DrawCallState.cpp",
                      100, (char*)0);
        }
        return m_pRenderPipelineState;
    }

    // 0x100bdf4f0, 96 bytes, placed by class name and debug map
    // DrawCallState::GetOutputMergerState()
    OutputMergerState* DrawCallState::GetOutputMergerState() {
        VectorFastPool* this_00;
        OutputMergerState* pOVar1;

        if (m_pOutputMergerState == (OutputMergerState*)0) {
            this_00 = GetStateObjectPool<OutputMergerState>();
            pOVar1 = VectorFastPool<OutputMergerState>::Create<>((VectorFastPool<OutputMergerState>*)this_00);
            m_pOutputMergerState = pOVar1;
            pOVar1 = m_pOutputMergerState;
        } else {
            pOVar1 = m_pOutputMergerState;
        }
        if (pOVar1 == (OutputMergerState*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pOutputMergerState",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                      "DrawCallState.cpp",
                      119, (char*)0);
        }
        return m_pOutputMergerState;
    }

    // 0x100bdf750, 48 bytes, placed by class name
    // DrawCallState::SetInputAssemblerState(InputAssemblerState*)
    void DrawCallState::SetInputAssemblerState(InputAssemblerState* param_1) {
        VectorFastPool* this_00;

        if (OwnsInputAssemblerState(this) != '\0') {
            this_00 = GetStateObjectPool<InputAssemblerState>();
            this_00->Destroy(m_pInputAssemblerState);
        }
        m_pInputAssemblerState = param_1;
    }

    // 0x100bdf780, 16 bytes, complete-object destructor, placed by class name
    // DrawCallState::~DrawCallState(): jumps straight to the base-object destructor

    // 0x100bf4760, 208 bytes, base-object constructor, placed by class name
    // DrawCallState::DrawCallState(DrawCallState const&)
    void DrawCallState::DrawCallState(DrawCallState* param_1) {
        char cVar1;
        VectorFastPool* pVVar2;
        InputAssemblerState* pIVar3;
        RenderPipelineState* pRVar4;
        OutputMergerState* pOVar5;

        m_pInputAssemblerState = (InputAssemblerState*)0;
        m_pRenderPipelineState = (RenderPipelineState*)0;
        m_pOutputMergerState = (OutputMergerState*)0;
        new (field_24) game::EntityHighlightGlobalState::RadialHighlightState();
        Clear(this);
        cVar1 = OwnsInputAssemblerState(param_1);
        if (cVar1 == '\0') {
            pIVar3 = param_1->m_pInputAssemblerState;
        } else {
            pVVar2 = GetStateObjectPool<InputAssemblerState>();
            pIVar3 = (InputAssemblerState*)GetInputAssemblerState(param_1);
            pIVar3 = VectorFastPool<InputAssemblerState>::Create<InputAssemblerState&>(
                (VectorFastPool<InputAssemblerState>*)pVVar2, pIVar3);
        }
        m_pInputAssemblerState = pIVar3;
        cVar1 = OwnsRenderPipelineState(param_1);
        if (cVar1 == '\0') {
            pRVar4 = param_1->m_pRenderPipelineState;
        } else {
            pVVar2 = GetStateObjectPool<RenderPipelineState>();
            pRVar4 = (RenderPipelineState*)GetRenderPipelineState(param_1);
            pRVar4 = VectorFastPool<RenderPipelineState>::Create<RenderPipelineState&>(
                (VectorFastPool<RenderPipelineState>*)pVVar2, pRVar4);
        }
        m_pRenderPipelineState = pRVar4;
        cVar1 = OwnsOutputMergerState(param_1);
        if (cVar1 == '\0') {
            pOVar5 = param_1->m_pOutputMergerState;
        } else {
            pVVar2 = GetStateObjectPool<OutputMergerState>();
            pOVar5 = (OutputMergerState*)GetOutputMergerState(param_1);
            pOVar5 = VectorFastPool<OutputMergerState>::Create<OutputMergerState&>(
                (VectorFastPool<OutputMergerState>*)pVVar2, pOVar5);
        }
        m_pOutputMergerState = pOVar5;
    }

    // 0x100bf4830, 128 bytes, placed by class name
    // DrawCallState::Clear()
    void DrawCallState::Clear() {
        char cVar1;
        VectorFastPool* pVVar2;

        cVar1 = OwnsInputAssemblerState(this);
        if (cVar1 != '\0') {
            pVVar2 = GetStateObjectPool<InputAssemblerState>();
            pVVar2->Destroy(m_pInputAssemblerState);
            m_pInputAssemblerState = (InputAssemblerState*)0;
        }
        cVar1 = OwnsRenderPipelineState(this);
        if (cVar1 != '\0') {
            pVVar2 = GetStateObjectPool<RenderPipelineState>();
            pVVar2->Destroy(m_pRenderPipelineState);
            m_pRenderPipelineState = (RenderPipelineState*)0;
        }
        cVar1 = OwnsOutputMergerState(this);
        if (cVar1 != '\0') {
            pVVar2 = GetStateObjectPool<OutputMergerState>();
            pVVar2->Destroy(m_pOutputMergerState);
            m_pOutputMergerState = (OutputMergerState*)0;
        }
    }

    // 0x100bf48b0, 96 bytes, placed by class name
    // DrawCallState::OwnsInputAssemblerState() const
    undefined4 DrawCallState::OwnsInputAssemblerState() {
        char cVar1;
        undefined4 uVar2;
        VectorFastPool* this_00;

        if (m_pInputAssemblerState == (InputAssemblerState*)0) {
            uVar2 = 0;
        } else {
            this_00 = GetStateObjectPool<InputAssemblerState>();
            uVar2 = this_00->is_owner(m_pInputAssemblerState);
            if (((char)uVar2 != '\0') && (cVar1 = this_thread::IsMainThread(), cVar1 == '\0')) {
                /* WARNING: Subroutine does not return */
                LogAssert("!result || this_thread::IsMainThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                          "DrawCallState.cpp",
                          165, (char*)0);
            }
        }
        return uVar2;
    }

    // 0x100bf4a90, 48 bytes, placed by class name
    // DrawCallState::GetInputAssemblerState() const
    InputAssemblerState* DrawCallState::GetInputAssemblerState() {
        VectorFastPool* this_00;
        InputAssemblerState* pIVar1;

        if (m_pInputAssemblerState == (InputAssemblerState*)0) {
            this_00 = GetStateObjectPool<InputAssemblerState>();
            pIVar1 = VectorFastPool<InputAssemblerState>::Create<>((VectorFastPool<InputAssemblerState>*)this_00);
            m_pInputAssemblerState = pIVar1;
        }
        return m_pInputAssemblerState;
    }

    // 0x100bf4ac0, 96 bytes, placed by class name
    // DrawCallState::OwnsRenderPipelineState() const
    undefined4 DrawCallState::OwnsRenderPipelineState() {
        char cVar1;
        undefined4 uVar2;
        VectorFastPool* this_00;

        if (m_pRenderPipelineState == (RenderPipelineState*)0) {
            uVar2 = 0;
        } else {
            this_00 = GetStateObjectPool<RenderPipelineState>();
            uVar2 = this_00->is_owner(m_pRenderPipelineState);
            if (((char)uVar2 != '\0') && (cVar1 = this_thread::IsMainThread(), cVar1 == '\0')) {
                /* WARNING: Subroutine does not return */
                LogAssert("!result || this_thread::IsMainThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                          "DrawCallState.cpp",
                          172, (char*)0);
            }
        }
        return uVar2;
    }

    // 0x100bf4ca0, 48 bytes, placed by class name
    // DrawCallState::GetRenderPipelineState() const
    RenderPipelineState* DrawCallState::GetRenderPipelineState() {
        VectorFastPool* this_00;
        RenderPipelineState* pRVar1;

        if (m_pRenderPipelineState == (RenderPipelineState*)0) {
            this_00 = GetStateObjectPool<RenderPipelineState>();
            pRVar1 = VectorFastPool<RenderPipelineState>::Create<>((VectorFastPool<RenderPipelineState>*)this_00);
            m_pRenderPipelineState = pRVar1;
        }
        return m_pRenderPipelineState;
    }

    // 0x100bf4cd0, 96 bytes, placed by class name
    // DrawCallState::OwnsOutputMergerState() const
    undefined4 DrawCallState::OwnsOutputMergerState() {
        char cVar1;
        undefined4 uVar2;
        VectorFastPool* this_00;

        if (m_pOutputMergerState == (OutputMergerState*)0) {
            uVar2 = 0;
        } else {
            this_00 = GetStateObjectPool<OutputMergerState>();
            uVar2 = this_00->is_owner(m_pOutputMergerState);
            if (((char)uVar2 != '\0') && (cVar1 = this_thread::IsMainThread(), cVar1 == '\0')) {
                /* WARNING: Subroutine does not return */
                LogAssert("!result || this_thread::IsMainThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                          "DrawCallState.cpp",
                          179, (char*)0);
            }
        }
        return uVar2;
    }

    // 0x100bf4eb0, 48 bytes, placed by class name
    // DrawCallState::GetOutputMergerState() const
    OutputMergerState* DrawCallState::GetOutputMergerState() {
        VectorFastPool* this_00;
        OutputMergerState* pOVar1;

        if (m_pOutputMergerState == (OutputMergerState*)0) {
            this_00 = GetStateObjectPool<OutputMergerState>();
            pOVar1 = VectorFastPool<OutputMergerState>::Create<>((VectorFastPool<OutputMergerState>*)this_00);
            m_pOutputMergerState = pOVar1;
        }
        return m_pOutputMergerState;
    }

    // 0x100bf4ee0, 16 bytes, complete-object constructor, placed by class name
    // DrawCallState::DrawCallState(DrawCallState const&): jumps straight to the base-object constructor

    // 0x100bf4ef0, 16 bytes, base-object destructor, placed by class name
    // DrawCallState::~DrawCallState()
    void DrawCallState::~DrawCallState() {
        Clear(this);
    }

    // 0x100bf5080, 96 bytes, placed by class name
    // DrawCallState::GetInputAssemblerState()
    InputAssemblerState* DrawCallState::GetInputAssemblerState() {
        VectorFastPool* this_00;
        InputAssemblerState* pIVar1;

        if (m_pInputAssemblerState == (InputAssemblerState*)0) {
            this_00 = GetStateObjectPool<InputAssemblerState>();
            pIVar1 = VectorFastPool<InputAssemblerState>::Create<>((VectorFastPool<InputAssemblerState>*)this_00);
            m_pInputAssemblerState = pIVar1;
            pIVar1 = m_pInputAssemblerState;
        } else {
            pIVar1 = m_pInputAssemblerState;
        }
        if (pIVar1 == (InputAssemblerState*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pInputAssemblerState",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                      "DrawCallState.cpp",
                      81, (char*)0);
        }
        return m_pInputAssemblerState;
    }

    // 0x100bf5470, 192 bytes, placed by class name
    // DrawCallState::operator=(DrawCallState const&)
    /* DrawCallState::TEMPNAMEPLACEHOLDERVALUE(DrawCallState const&) */

    DrawCallState* DrawCallState::operator=(DrawCallState* param_1) {
        char cVar1;
        VectorFastPool* pVVar2;
        InputAssemblerState* pIVar3;
        RenderPipelineState* pRVar4;
        OutputMergerState* pOVar5;

        Clear(this);
        cVar1 = OwnsInputAssemblerState(param_1);
        if (cVar1 == '\0') {
            pIVar3 = param_1->m_pInputAssemblerState;
        } else {
            pVVar2 = GetStateObjectPool<InputAssemblerState>();
            pIVar3 = (InputAssemblerState*)GetInputAssemblerState(param_1);
            pIVar3 = VectorFastPool<InputAssemblerState>::Create<InputAssemblerState&>(
                (VectorFastPool<InputAssemblerState>*)pVVar2, pIVar3);
        }
        m_pInputAssemblerState = pIVar3;
        cVar1 = OwnsRenderPipelineState(param_1);
        if (cVar1 == '\0') {
            pRVar4 = param_1->m_pRenderPipelineState;
        } else {
            pVVar2 = GetStateObjectPool<RenderPipelineState>();
            pRVar4 = (RenderPipelineState*)GetRenderPipelineState(param_1);
            pRVar4 = VectorFastPool<RenderPipelineState>::Create<RenderPipelineState&>(
                (VectorFastPool<RenderPipelineState>*)pVVar2, pRVar4);
        }
        m_pRenderPipelineState = pRVar4;
        cVar1 = OwnsOutputMergerState(param_1);
        if (cVar1 == '\0') {
            pOVar5 = param_1->m_pOutputMergerState;
        } else {
            pVVar2 = GetStateObjectPool<OutputMergerState>();
            pOVar5 = (OutputMergerState*)GetOutputMergerState(param_1);
            pOVar5 = VectorFastPool<OutputMergerState>::Create<OutputMergerState&>(
                (VectorFastPool<OutputMergerState>*)pVVar2, pOVar5);
        }
        m_pOutputMergerState = pOVar5;
        return this;
    }

} // namespace jag::render
