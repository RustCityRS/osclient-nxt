// libs/graphics/primitive/debugbasic/DebugTriRender.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.primitive.debugbasic

#include "DebugTriRender.h"

namespace jag {
    // 0x1009ca060
    void DebugTriRender::OnEndFrame() {
        field_24.RotateBuffers();
    }

    // 0x1009ca180
    void DebugTriRender::Render(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                                const ViewTransforms& viewTransforms,
                                eastl::vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>> const& pairs,
                                bool arg5) {
        unsigned int arg3;
        long* plVar2;
        long* plVar3;
        PrimVertPosCol* pPVar4;
        void* arg3_00;
        ShaderProgram* this_01;
        Matrix44T<float>* matrix44;
        VertexDeclaration* vertexDeclaration;
        VertexBuffer* vertexBuffer;
        long lVar5;
        uint32_t in_register_00000089;
        int iVar6;
        unsigned long arg1;
        uint8_t* this_04;
        DrawCallState local_90;
        HashedString local_60;
        uint64_t local_48;
        uint32_t local_34;

        if (pairs.empty() == '\0') {
            local_34 = (((uint32_t)in_register_00000089 << 8) | (uint8_t)arg5);
            local_48 = pairs.size();
            plVar2 = (long*)pairs.HeapBeginPtr();
            plVar3 = (long*)pairs.end();
            if (plVar2 != plVar3) {
                arg1 = 0;
                do {
                    pPVar4 = (PrimVertPosCol*)(*this)[arg1];
                    pPVar4->Set(*(*plVar2), *(unsigned int*)((Vector3T<float>*)*plVar2 + 36));
                    pPVar4 = (PrimVertPosCol*)(*this)[arg1 + 1];
                    pPVar4->Set(*((*plVar2 + 12)), *(unsigned int*)(*plVar2 + 36));
                    pPVar4 = (PrimVertPosCol*)(*this)[arg1 + 2];
                    pPVar4->Set(*((*plVar2 + 24)), *(unsigned int*)(*plVar2 + 36));
                    plVar2 = plVar2 + 2;
                    arg1 = arg1 + 3;
                } while (plVar2 != plVar3);
            }
            iVar6 = (int)local_48;
            arg3_00 = (void*)data();
            field_24.Update(0, iVar6 * 84, arg3_00);
            local_90 = render::DrawCallState(drawCallState);
            this_01 = ((PrimitiveShaderFamily*)local_90.Instance())->GetShaderProgram(1);
            ((RenderPipelineState*)local_90.GetRenderPipelineState())->SetShaderProgram(this_01);
            local_60 = HashedString("uWorldMat");
            this_01->SetShaderConstMatrix4(&local_60, 1, PTR_IDENTITY_100ee6730, 1);
            local_60 = HashedString("uViewProjMat");
            matrix44 = (Matrix44T<float>*)viewTransforms.GetImmediateThreadPool();
            this_01->SetShaderConstMatrix4(&local_60, 1, matrix44, 1);
            vertexDeclaration = (VertexDeclaration*)this_01->second();
            vertexBuffer = (VertexBuffer*)field_24.CurrentBuffer();
            this_04 = field_200;
            this_04->SetVertexStreamData(vertexDeclaration, vertexBuffer);
            local_90.SetInputAssemblerState(this_04);
            if ((char)local_34 == '\0') {
                new (this_04) std::__cxx_atomic_base_impl(4);
                lVar5 = local_90.second();
                *(uint32_t*)(lVar5 + 4) = 0;
                lVar5 = local_90.second();
                *(int*)(lVar5 + 8) = iVar6 * 3;
                lVar5 = local_90.second();
                iVar6 = *(int*)(lVar5 + 4);
                lVar5 = local_90.second();
                renderContext.DrawPrimitives(local_90, 4, iVar6, *(int*)(lVar5 + 8));
            } else {
                new (this_04) std::__cxx_atomic_base_impl(1);
                lVar5 = local_90.second();
                *(uint32_t*)(lVar5 + 16) = 0;
                lVar5 = local_90.second();
                *(int*)(lVar5 + 12) = iVar6 * 6;
                lVar5 = local_90.second();
                arg3 = *(unsigned int*)(lVar5 + 12);
                lVar5 = local_90.second();
                renderContext.DrawIndexedPrimitives(&local_90, 1, arg3, *(unsigned int*)(lVar5 + 16));
            }
        }
    }

    // 0x1009cb580
    void DebugTriRender::DestroyRenderingResources() {
        field_200->Destroy();
        field_112.Destroy();
        field_24.Destroy();
    }

    // 0x1009cbc70
    DebugTriRender::DebugTriRender(int arg1) : Array<PrimVertPosCol>() {
        set_max_size((long)(arg1 * 3), 0);
        CreateRenderingResources();
    }

    // 0x1009cbd20
    uint32_t DebugTriRender::CreateRenderingResources() {
        unsigned int uVar2;
        short* psVar5;
        unsigned short uVar7;
        short sVar8;

        DebugTriRender* local_40 = this;
        unsigned long uVar4 = end();
        uVar4 = uVar4 / 3;
        unsigned long local_38 = (unsigned long)(unsigned short)((short)uVar4 * 6);
        Array<unsigned short> local_60(local_38);
        unsigned long local_48 = uVar4;
        if (0 < (int)uVar4) {
            sVar8 = 0;
            uVar4 = 0;
            uVar7 = 1;
            do {
                psVar5 = &local_60[uVar4 & 65535];
                *psVar5 = sVar8;
                uVar2 = (unsigned int)(uVar4 & 65535);
                psVar5 = &local_60[(unsigned long)(uVar2 | 1)];
                *psVar5 = sVar8 + 1;
                psVar5 = &local_60[(unsigned long)(uVar2 + 2)];
                *psVar5 = sVar8 + 1;
                psVar5 = &local_60[(unsigned long)(uVar2 + 3)];
                *psVar5 = sVar8 + 2;
                psVar5 = &local_60[(unsigned long)(uVar2 + 4)];
                *psVar5 = sVar8 + 2;
                psVar5 = &local_60[(unsigned long)(uVar2 + 5)];
                *psVar5 = sVar8;
                uVar4 = (unsigned long)(uVar2 + 6);
                sVar8 = sVar8 + 3;
                uVar2 = (unsigned int)uVar7;
                uVar7 = uVar7 + 1;
            } while ((int)uVar2 < (int)local_48);
        }
        DebugTriRender* pDVar1 = local_40;
        uint8_t* this_00 = &local_40->field_112;
        int iVar6 = (int)local_38;
        auto arg3 = local_60.data();
        uint32_t uVar3 = this_00->Create(iVar6 * 2, 0, arg3, 5123);
        pDVar1->field_200->SetFlags(1);
        render::InputAssemblerState::SetIndexBuffer(pDVar1->field_200, (unsigned int)this_00);
        return uVar3;
    }

} // namespace jag
