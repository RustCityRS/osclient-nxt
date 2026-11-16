// libs/hal/render/state/DispatchCallState.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.render

#include "DispatchCallState.h"

namespace jag::render {
    // 0x10000b5b0: the linker folded this into fixedfunction::function<void (BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::allocated() const, which has identical code
    DispatchCallState::HasComputePipelineState() const;

    // 0x100bf41e0, 112 bytes, base-object constructor, placed by class name
    // DispatchCallState::DispatchCallState(DispatchCallState const&)
    void DispatchCallState::DispatchCallState(DispatchCallState* param_1) {
        VectorFastPool* this_00;
        ComputePipelineState* pCVar2;

        m_pComputePipelineState = (ComputePipelineState*)0;
        new (&field_8) math::Vector3T<int>();
        Clear(this);
        if (OwnsComputePipelineState(param_1) == '\0') {
            pCVar2 = param_1->m_pComputePipelineState;
        } else {
            this_00 = GetStateObjectPool<ComputePipelineState>();
            pCVar2 = (ComputePipelineState*)GetComputePipelineState(param_1);
            pCVar2 = VectorFastPool<ComputePipelineState>::Create<ComputePipelineState&>(
                (VectorFastPool<ComputePipelineState>*)this_00, pCVar2);
        }
        m_pComputePipelineState = pCVar2;
    }

    // 0x100bf4250, 48 bytes, placed by class name
    // DispatchCallState::Clear()
    void DispatchCallState::Clear() {
        VectorFastPool* this_00;

        if (OwnsComputePipelineState(this) != '\0') {
            this_00 = GetStateObjectPool<ComputePipelineState>();
            this_00->Destroy(m_pComputePipelineState);
            m_pComputePipelineState = (ComputePipelineState*)0;
        }
    }

    // 0x100bf4280, 96 bytes, placed by class name
    // DispatchCallState::OwnsComputePipelineState() const
    undefined4 DispatchCallState::OwnsComputePipelineState() {
        char cVar1;
        undefined4 uVar2;
        VectorFastPool* this_00;

        if (m_pComputePipelineState == (ComputePipelineState*)0) {
            uVar2 = 0;
        } else {
            this_00 = GetStateObjectPool<ComputePipelineState>();
            uVar2 = this_00->is_owner(m_pComputePipelineState);
            if (((char)uVar2 != '\0') && (cVar1 = this_thread::IsMainThread(), cVar1 == '\0')) {
                /* WARNING: Subroutine does not return */
                LogAssert("!result || this_thread::IsMainThread()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                          "DispatchCallState.cpp",
                          72, (char*)0);
            }
        }
        return uVar2;
    }

    // 0x100bf4460, 48 bytes, placed by class name
    // DispatchCallState::GetComputePipelineState() const
    ComputePipelineState* DispatchCallState::GetComputePipelineState() {
        VectorFastPool* this_00;
        ComputePipelineState* pCVar1;

        if (m_pComputePipelineState == (ComputePipelineState*)0) {
            this_00 = GetStateObjectPool<ComputePipelineState>();
            pCVar1 = VectorFastPool<ComputePipelineState>::Create<>((VectorFastPool<ComputePipelineState>*)this_00);
            m_pComputePipelineState = pCVar1;
        }
        return m_pComputePipelineState;
    }

    // 0x100bf4490, 16 bytes, complete-object constructor, placed by class name
    // DispatchCallState::DispatchCallState(DispatchCallState const&): jumps straight to the base-object constructor

    // 0x100bf44a0, 16 bytes, base-object destructor, placed by class name
    // DispatchCallState::~DispatchCallState()
    void DispatchCallState::~DispatchCallState() {
        Clear(this);
    }

    // 0x100bf44b0, 16 bytes, complete-object destructor, placed by class name
    // DispatchCallState::~DispatchCallState(): jumps straight to the base-object destructor

    // 0x100bf4540, 96 bytes, placed by class name
    // DispatchCallState::GetComputePipelineState()
    ComputePipelineState* DispatchCallState::GetComputePipelineState() {
        VectorFastPool* this_00;
        ComputePipelineState* pCVar1;

        if (m_pComputePipelineState == (ComputePipelineState*)0) {
            this_00 = GetStateObjectPool<ComputePipelineState>();
            pCVar1 = VectorFastPool<ComputePipelineState>::Create<>((VectorFastPool<ComputePipelineState>*)this_00);
            m_pComputePipelineState = pCVar1;
            pCVar1 = m_pComputePipelineState;
        } else {
            pCVar1 = m_pComputePipelineState;
        }
        if (pCVar1 == (ComputePipelineState*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_pComputePipelineState",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/render/state/"
                      "DispatchCallState.cpp",
                      46, (char*)0);
        }
        return m_pComputePipelineState;
    }

    // 0x100bf4660, 48 bytes, placed by class name
    // DispatchCallState::SetComputePipelineState(ComputePipelineState*)
    void DispatchCallState::SetComputePipelineState(ComputePipelineState* param_1) {
        VectorFastPool* this_00;

        if (OwnsComputePipelineState(this) != '\0') {
            this_00 = GetStateObjectPool<ComputePipelineState>();
            this_00->Destroy(m_pComputePipelineState);
        }
        m_pComputePipelineState = param_1;
    }

    // 0x100bf4700, 96 bytes, placed by class name
    // DispatchCallState::operator=(DispatchCallState const&)
    /* DispatchCallState::TEMPNAMEPLACEHOLDERVALUE(DispatchCallState const&)
    */

    DispatchCallState* DispatchCallState::operator=(DispatchCallState* param_1) {
        VectorFastPool* this_00;
        ComputePipelineState* pCVar2;

        Clear(this);
        if (OwnsComputePipelineState(param_1) == '\0') {
            pCVar2 = param_1->m_pComputePipelineState;
        } else {
            this_00 = GetStateObjectPool<ComputePipelineState>();
            pCVar2 = (ComputePipelineState*)GetComputePipelineState(param_1);
            pCVar2 = VectorFastPool<ComputePipelineState>::Create<ComputePipelineState&>(
                (VectorFastPool<ComputePipelineState>*)this_00, pCVar2);
        }
        m_pComputePipelineState = pCVar2;
        return this;
    }

} // namespace jag::render
