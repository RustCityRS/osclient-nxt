// libs/graphics/primitive/debugbasic/DebugTriRender.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.primitive.debugbasic

#include "DebugTriRender.h"

namespace jag {
    // 0x1009c9250, 16 bytes, complete-object constructor, placed by class name and debug map
    // DebugTriRender::DebugTriRender(int): jumps straight to the base-object constructor

    // 0x1009ca060, 16 bytes, placed by class name
    // DebugTriRender::OnEndFrame()
    void DebugTriRender::OnEndFrame() {
        (&field_24)->RotateBuffers();
    }

    // 0x1009ca180, 720 bytes, placed by class name
    // DebugTriRender::Render(render::RenderContext&, render::DrawCallState const&, ViewTransforms const&, eastl::vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>, eastl::allocator> const&, bool)
    void DebugTriRender::Render(RenderContext* param_1, DrawCallState* param_2, ViewTransforms* param_3,
                                vector* param_4, bool param_5) {
        undefined4 uVar1;
        PrimVertPosCol* pPVar2;
        void* pvVar3;
        PrimitiveShaderFamily* pPVar4;
        ShaderProgram* this_00;
        RenderPipelineState* this_01;
        Matrix44T* pMVar5;
        VertexDeclaration* pVVar6;
        VertexBuffer* pVVar7;
        long lVar8;
        char cVar9;
        long* plVar10;
        long* plVar11;
        undefined3 in_register_00000089;
        int iVar12;
        ulong uVar13;
        undefined1* this_03;
        DrawCallState local_90;
        HashedString local_60;
        undefined8 local_48;
        undefined4 local_34;

        cVar9 = param_4->empty();
        if (cVar9 == '\0') {
            local_34 = CONCAT31(in_register_00000089, param_5);
            local_48 = param_4->size();
            plVar11 = (long*)param_4->HeapBeginPtr();
            plVar10 = (long*)param_4->end();
            if (plVar11 != plVar10) {
                uVar13 = 0;
                do {
                    pPVar2 = (PrimVertPosCol*)Array<PrimVertPosCol, eastl::allocator>::operator[](
                        (Array<PrimVertPosCol, eastl::allocator>*)this, uVar13);
                    pPVar2->Set((Vector3T*)*plVar11, *(uint*)((Vector3T*)*plVar11 + 36));
                    pPVar2 = (PrimVertPosCol*)Array<PrimVertPosCol, eastl::allocator>::operator[](
                        (Array<PrimVertPosCol, eastl::allocator>*)this, uVar13 + 1);
                    pPVar2->Set((Vector3T*)(*plVar11 + 12), *(uint*)(*plVar11 + 36));
                    pPVar2 = (PrimVertPosCol*)Array<PrimVertPosCol, eastl::allocator>::operator[](
                        (Array<PrimVertPosCol, eastl::allocator>*)this, uVar13 + 2);
                    pPVar2->Set((Vector3T*)(*plVar11 + 24), *(uint*)(*plVar11 + 36));
                    plVar11 = plVar11 + 2;
                    uVar13 = uVar13 + 3;
                } while (plVar11 != plVar10);
            }
            iVar12 = (int)local_48;
            pvVar3 = (void*)data();
            (&field_24, 0, iVar12 * 84, pvVar3)->Update();
            new (&local_90) render::DrawCallState(param_2);
            pPVar4 = (PrimitiveShaderFamily*)local_90.Instance();
            this_00 = (ShaderProgram*)pPVar4->GetShaderProgram(1);
            this_01 = (RenderPipelineState*)local_90.GetRenderPipelineState();
            this_01->SetShaderProgram(this_00);
            new (&local_60) HashedString("uWorldMat");
            this_00->SetShaderConstMatrix4(&local_60, 1, PTR_IDENTITY_100ee6730, 1);
            new (&local_60) HashedString("uViewProjMat");
            pMVar5 = (Matrix44T*)param_3->GetImmediateThreadPool();
            this_00->SetShaderConstMatrix4(&local_60, 1, pMVar5, 1);
            pVVar6 = (VertexDeclaration*)this_00->second();
            pVVar7 = (VertexBuffer*)(&field_24)->CurrentBuffer();
            this_03 = field_200;
            this_03->SetVertexStreamData(pVVar6, pVVar7);
            local_90.SetInputAssemblerState(this_03);
            if ((char)local_34 == '\0') {
                new (this_03) std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>(4);
                lVar8 = local_90.second();
                *(undefined4*)(lVar8 + 4) = 0;
                lVar8 = local_90.second();
                *(int*)(lVar8 + 8) = iVar12 * 3;
                lVar8 = local_90.second();
                uVar1 = *(undefined4*)(lVar8 + 4);
                lVar8 = local_90.second();
                param_1->DrawPrimitives(&local_90, 4, uVar1, *(undefined4*)(lVar8 + 8));
            } else {
                new (this_03) std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>(1);
                lVar8 = local_90.second();
                *(undefined4*)(lVar8 + 16) = 0;
                lVar8 = local_90.second();
                *(int*)(lVar8 + 12) = iVar12 * 6;
                lVar8 = local_90.second();
                uVar1 = *(undefined4*)(lVar8 + 12);
                lVar8 = local_90.second();
                param_1->DrawIndexedPrimitives(&local_90, 1, uVar1, *(undefined4*)(lVar8 + 16));
            }
            local_90.~DrawCallState();
        }
    }

    // 0x1009cb580, 64 bytes, placed by class name
    // DebugTriRender::DestroyRenderingResources()
    void DebugTriRender::DestroyRenderingResources() {
        field_200->Destroy();
        (&field_112)->Destroy();
        (&field_24)->Destroy();
    }

    // 0x1009cbc70, 176 bytes, base-object constructor, placed by class name
    // DebugTriRender::DebugTriRender(int)
    void DebugTriRender::DebugTriRender(int param_1) {
        new (this) Array<PrimVertPosCol, eastl::allocator>();
        new (&field_24) render::DynamicBuffer<render::VertexBuffer>();
        new (&field_112) render::IndexBuffer();
        new (field_200) render::InputAssemblerState();
        set_max_size((long)(param_1 * 3), 0);
        CreateRenderingResources(this);
    }

    // 0x1009cbd20, 352 bytes, placed by class name
    // DebugTriRender::CreateRenderingResources()
    undefined4 DebugTriRender::CreateRenderingResources() {
        undefined1* puVar1;
        DebugTriRender* pDVar2;
        uint uVar3;
        undefined4 uVar4;
        ulong uVar5;
        short* psVar6;
        undefined8 uVar7;
        int iVar8;
        ushort uVar9;
        short sVar10;
        Array<unsigned short, eastl::allocator> local_60[24];
        ulong local_48;
        DebugTriRender* local_40;
        ulong local_38;

        local_40 = this;
        uVar5 = end();
        uVar5 = uVar5 / 3;
        local_38 = (ulong)(ushort)((short)uVar5 * 6);
        Array<unsigned short, eastl::allocator>::Array(local_60, local_38);
        local_48 = uVar5;
        if (0 < (int)uVar5) {
            sVar10 = 0;
            uVar5 = 0;
            uVar9 = 1;
            do {
                psVar6 = (short*)Array<unsigned short, eastl::allocator>::operator[](local_60, uVar5 & 65535);
                *psVar6 = sVar10;
                uVar3 = (uint)(uVar5 & 65535);
                psVar6 = (short*)Array<unsigned short, eastl::allocator>::operator[](local_60, (ulong)(uVar3 | 1));
                *psVar6 = sVar10 + 1;
                psVar6 = (short*)Array<unsigned short, eastl::allocator>::operator[](local_60, (ulong)(uVar3 + 2));
                *psVar6 = sVar10 + 1;
                psVar6 = (short*)Array<unsigned short, eastl::allocator>::operator[](local_60, (ulong)(uVar3 + 3));
                *psVar6 = sVar10 + 2;
                psVar6 = (short*)Array<unsigned short, eastl::allocator>::operator[](local_60, (ulong)(uVar3 + 4));
                *psVar6 = sVar10 + 2;
                psVar6 = (short*)Array<unsigned short, eastl::allocator>::operator[](local_60, (ulong)(uVar3 + 5));
                *psVar6 = sVar10;
                uVar5 = (ulong)(uVar3 + 6);
                sVar10 = sVar10 + 3;
                uVar3 = (uint)uVar9;
                uVar9 = uVar9 + 1;
            } while ((int)uVar3 < (int)local_48);
        }
        pDVar2 = local_40;
        puVar1 = &local_40->field_112;
        iVar8 = (int)local_38;
        uVar7 = local_60->data();
        uVar4 = puVar1->Create(iVar8 * 2, 0, uVar7, 5123);
        (pDVar2->field_200, 1)->SetFlags();
        render::InputAssemblerState::SetIndexBuffer((IndexBuffer*)pDVar2->field_200, (uint)puVar1);
        local_60->~Array();
        return uVar4;
    }

} // namespace jag
