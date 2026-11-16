// libs/graphics/primitive/debugbasic/DebugLineRender.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.primitive.debugbasic

#include "DebugLineRender.h"

namespace jag {
    // 0x1009c4450, 144 bytes, base-object constructor, placed by class name and debug map
    // DebugLineRender::DebugLineRender(int)
    void DebugLineRender::DebugLineRender(int param_1) {
        new (this) Array<PrimVertPosCol, eastl::allocator>();
        new (&field_24) render::DynamicBuffer<render::VertexBuffer>();
        new (field_112) render::InputAssemblerState();
        set_max_size((long)(param_1 * 2), 0);
        CreateRenderingResources(this);
    }

    // 0x1009c44e0, 48 bytes, placed by class name and debug map
    // DebugLineRender::CreateRenderingResources()
    undefined1 DebugLineRender::CreateRenderingResources() {
        new (field_112, 1) std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>();
        (field_112, 1)->SetFlags();
        return 1;
    }

    // 0x1009c4510, 16 bytes, complete-object constructor, placed by class name and debug map
    // DebugLineRender::DebugLineRender(int): jumps straight to the base-object constructor

    // 0x1009c4520, 48 bytes, placed by class name and debug map
    // DebugLineRender::DestroyRenderingResources()
    void DebugLineRender::DestroyRenderingResources() {
        (&field_24)->Destroy();
        field_112->Destroy();
    }

    // 0x1009c4550, 496 bytes, placed by class name and debug map
    // DebugLineRender::Render(render::RenderContext&, render::DrawCallState const&, ViewTransforms const&, eastl::vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>, eastl::allocator> const&, bool)
    void DebugLineRender::Render(RenderContext* param_1, DrawCallState* param_2, ViewTransforms* param_3,
                                 vector* param_4, bool param_5) {
        PrimVertPosCol* pPVar1;
        void* pvVar2;
        PrimitiveShaderFamily* pPVar3;
        ShaderProgram* this;
        RenderPipelineState* this_00;
        VertexDeclaration* pVVar4;
        VertexBuffer* pVVar5;
        Matrix44T* pMVar6;
        int iVar9;
        long* plVar10;
        long* plVar11;
        undefined7 in_register_00000081;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_02;
        ulong uVar12;
        DrawCallState local_88;
        HashedString local_58;

        this_02 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)CONCAT71(
            in_register_00000081, param_5);
        if (eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                this_02) == '\0') {
            plVar11 = (long*)this_02->HeapBeginPtr();
            plVar10 = (long*)this_02->end();
            if (plVar11 != plVar10) {
                uVar12 = 0;
                do {
                    pPVar1 = (PrimVertPosCol*)Array<PrimVertPosCol, eastl::allocator>::operator[](
                        (Array<PrimVertPosCol, eastl::allocator>*)param_1, uVar12);
                    pPVar1->Set((Vector3T*)*plVar11, *(uint*)((Vector3T*)*plVar11 + 24));
                    pPVar1 = (PrimVertPosCol*)Array<PrimVertPosCol, eastl::allocator>::operator[](
                        (Array<PrimVertPosCol, eastl::allocator>*)param_1, uVar12 + 1);
                    pPVar1->Set((Vector3T*)(*plVar11 + 12), *(uint*)(*plVar11 + 24));
                    plVar11 = plVar11 + 2;
                    uVar12 = uVar12 + 2;
                } while (plVar11 != plVar10);
            }
            iVar9 = this_02->size();
            pvVar2 = (void*)param_1->data();
            ((param_1->m_immediateContext + 8), 0, iVar9 * 56, pvVar2)->Update();
            new (&local_88) render::DrawCallState(param_3);
            pPVar3 = (PrimitiveShaderFamily*)local_88.Instance();
            this = (ShaderProgram*)pPVar3->GetShaderProgram(1);
            this_00 = (RenderPipelineState*)local_88.GetRenderPipelineState();
            this_00->SetShaderProgram(this);
            pVVar4 = (VertexDeclaration*)second();
            pVVar5 = (VertexBuffer*)((param_1->m_immediateContext + 8))->CurrentBuffer();
            ((param_1->m_immediateContext + 96), pVVar4, pVVar5)->SetVertexStreamData();
            local_88.SetInputAssemblerState((InputAssemblerState*)(param_1->m_immediateContext + 96));
            new (&local_58) HashedString("uWorldMat");
            SetShaderConstMatrix4(&local_58, 1, PTR_IDENTITY_100ee6730, 1);
            new (&local_58) HashedString("uViewProjMat");
            pMVar6 = (Matrix44T*)param_4->GetImmediateThreadPool();
            SetShaderConstMatrix4(&local_58, 1, pMVar6, 1);
            iVar9 = this_02->size();
            param_2->DrawPrimitives(&local_88, 1, 0, iVar9 * 2);
            local_88.~DrawCallState();
        }
    }

    // 0x1009c4790, 16 bytes, placed by class name and debug map
    // DebugLineRender::OnEndFrame()
    void DebugLineRender::OnEndFrame() {
        (&field_24)->RotateBuffers();
    }

} // namespace jag
