// libs/graphics/primitive/debugbasic/DebugLineRender.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.primitive.debugbasic

#include "DebugLineRender.h"

namespace jag {
    // 0x1009c4450
    DebugLineRender::DebugLineRender(int arg1) : Array<PrimVertPosCol>() {
        set_max_size((long)(arg1 * 2), 0);
        CreateRenderingResources();
    }

    // 0x1009c44e0
    uint8_t DebugLineRender::CreateRenderingResources() {
        new (field_112) std::__cxx_atomic_base_impl(1);
        field_112->SetFlags(1);
        return 1;
    }

    // 0x1009c4520
    void DebugLineRender::DestroyRenderingResources() {
        field_24.Destroy();
        field_112->Destroy();
    }

    // 0x1009c4550
    void DebugLineRender::Render(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                                 const ViewTransforms& viewTransforms,
                                 eastl::vector<eastl::pair<DebugLine<DebugDataBasic> const*, float>> const& pairs,
                                 bool arg5) {
        int iVar2;
        long* plVar3;
        long* plVar4;
        PrimVertPosCol* pPVar5;
        void* arg3;
        ShaderProgram* this_01;
        VertexDeclaration* vertexDeclaration;
        VertexBuffer* vertexBuffer;
        Matrix44T<float>* matrix44;
        uint64_t in_register_00000081;
        unsigned long arg1;
        DrawCallState local_88;
        HashedString local_58;

        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_04 =
            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(((uint64_t)in_register_00000081
                                                                                     << 8) |
                                                                                    (uint8_t)arg5);
        if (this_04->empty() == '\0') {
            plVar3 = (long*)this_04->HeapBeginPtr();
            plVar4 = (long*)this_04->end();
            if (plVar3 != plVar4) {
                arg1 = 0;
                do {
                    pPVar5 = &renderContext[arg1];
                    pPVar5->Set(*(*plVar3), *(unsigned int*)((Vector3T<float>*)*plVar3 + 24));
                    pPVar5 = &renderContext[arg1 + 1];
                    pPVar5->Set(*((*plVar3 + 12)), *(unsigned int*)(*plVar3 + 24));
                    plVar3 = plVar3 + 2;
                    arg1 = arg1 + 2;
                } while (plVar3 != plVar4);
            }
            iVar2 = this_04->size();
            arg3 = (void*)renderContext.data();
            ((renderContext.m_immediateContext + 8))->Update(0, iVar2 * 56, arg3);
            local_88 = render::DrawCallState(viewTransforms);
            this_01 = ((PrimitiveShaderFamily*)local_88.Instance())->GetShaderProgram(1);
            ((RenderPipelineState*)local_88.GetRenderPipelineState())->SetShaderProgram(this_01);
            vertexDeclaration = (VertexDeclaration*)this_01->second();
            vertexBuffer = (VertexBuffer*)((renderContext.m_immediateContext + 8))->CurrentBuffer();
            ((renderContext.m_immediateContext + 96))->SetVertexStreamData(vertexDeclaration, vertexBuffer);
            local_88.SetInputAssemblerState((renderContext.m_immediateContext + 96));
            local_58 = HashedString("uWorldMat");
            this_01->SetShaderConstMatrix4(&local_58, 1, PTR_IDENTITY_100ee6730, 1);
            local_58 = HashedString("uViewProjMat");
            matrix44 = (Matrix44T<float>*)pairs.GetImmediateThreadPool();
            this_01->SetShaderConstMatrix4(&local_58, 1, matrix44, 1);
            iVar2 = this_04->size();
            drawCallState.DrawPrimitives(local_88, 1, 0, iVar2 * 2);
        }
    }

    // 0x1009c4790
    void DebugLineRender::OnEndFrame() {
        field_24.RotateBuffers();
    }

} // namespace jag
