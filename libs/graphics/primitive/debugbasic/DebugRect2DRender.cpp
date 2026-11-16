// libs/graphics/primitive/debugbasic/DebugRect2DRender.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.primitive.debugbasic

#include "DebugRect2DRender.h"

namespace jag {
    // 0x1009c9280, 16 bytes, complete-object constructor, placed by class name and debug map
    // DebugRect2DRender::DebugRect2DRender(int): jumps straight to the base-object constructor

    // 0x1009ca070, 32 bytes, placed by class name
    // DebugRect2DRender::OnEndFrame()
    void DebugRect2DRender::OnEndFrame() {
        (&field_32)->RotateBuffers();
        field_28 = 0;
    }

    // 0x1009cadf0, 784 bytes, placed by class name
    // DebugRect2DRender::RenderRect2DGroup(render::RenderContext&, render::DrawCallState const&, unsigned int, unsigned int, render::Viewport const&, math::Matrix44T<float> const&, eastl::vector<eastl::pair<DebugRect2D<DebugDataBasic> const*, float>, eastl::allocator> const&, bool)
    void DebugRect2DRender::RenderRect2DGroup(RenderContext* param_1, DrawCallState* param_2, uint param_3,
                                              uint param_4, Viewport* param_5, Matrix44T* param_6, vector* param_7,
                                              bool param_8) {
        uint uVar2;
        char cVar3;
        int iVar4;
        long* plVar5;
        float* pfVar6;
        PrimVertPosCol* pPVar7;
        vector* pvVar8;
        type* ptVar9;
        float fVar10;
        undefined1 local_88[16];
        ImVec4 local_78[16];
        long* local_68;
        uint local_44;
        float local_40;
        float local_38;
        float local_34;

        cVar3 = param_7->empty();
        if (cVar3 == '\0') {
            plVar5 = (long*)param_7->HeapBeginPtr();
            local_68 = (long*)param_7->end();
            if (plVar5 != local_68) {
                do {
                    local_44 = *(uint*)(*plVar5 + 20);
                    new (local_88) math::Rect<unsigned int>((Rect*)*plVar5);
                    iVar4 = local_88->GetX();
                    local_34 = (float)iVar4;
                    iVar4 = local_88->GetZ();
                    local_38 = (float)iVar4;
                    iVar4 = local_88->GetPos();
                    local_40 = (float)iVar4;
                    iVar4 = local_88->GetLevel();
                    ImVec4::ImVec4(local_78, local_34, local_38, local_40, (float)iVar4);
                    if (*(char*)(*plVar5 + 16) != '\0') {
                        pfVar6 = (float*)local_78->y();
                        local_34 = (float)param_4 - *pfVar6;
                        local_38 = (float)local_78->MaxV();
                        local_38 = (float)param_4 - local_38;
                        pfVar6 = (float*)local_78->y();
                        *pfVar6 = local_38;
                        local_78->SetBottom(local_34);
                    }
                    local_78->Translate((float)param_5->field_0, (float)param_5->field_4);
                    ptVar9 = (type*)((long)field_28 << 2);
                    pPVar7 = (PrimVertPosCol*)Array<PrimVertPosCol, eastl::allocator>::operator[](
                        (Array<PrimVertPosCol, eastl::allocator>*)this, (ulong)ptVar9);
                    pvVar8 = local_78->SSOBeginPtr(ptVar9);
                    local_34 = *(float*)pvVar8;
                    fVar10 = (float)local_78->MaxV();
                    uVar2 = local_44;
                    pPVar7->Set(local_34, fVar10, 1.0, local_44);
                    pPVar7 = (PrimVertPosCol*)Array<PrimVertPosCol, eastl::allocator>::operator[](
                        (Array<PrimVertPosCol, eastl::allocator>*)this, (long)field_28 * 4 + 1);
                    local_34 = (float)local_78->MaxU();
                    fVar10 = (float)local_78->MaxV();
                    pPVar7->Set(local_34, fVar10, 1.0, uVar2);
                    pPVar7 = (PrimVertPosCol*)Array<PrimVertPosCol, eastl::allocator>::operator[](
                        (Array<PrimVertPosCol, eastl::allocator>*)this, (long)field_28 * 4 + 2);
                    local_34 = (float)local_78->MaxU();
                    pfVar6 = (float*)local_78->y();
                    pPVar7->Set(local_34, *pfVar6, 1.0, uVar2);
                    ptVar9 = (type*)((long)field_28 * 4 + 3);
                    pPVar7 = (PrimVertPosCol*)Array<PrimVertPosCol, eastl::allocator>::operator[](
                        (Array<PrimVertPosCol, eastl::allocator>*)this, (ulong)ptVar9);
                    pvVar8 = local_78->SSOBeginPtr(ptVar9);
                    local_34 = *(float*)pvVar8;
                    pfVar6 = (float*)local_78->y();
                    pPVar7->Set(local_34, *pfVar6, 1.0, uVar2);
                    iVar4 = field_28 + 1;
                    field_28 = iVar4;
                    if (iVar4 == field_24) {
                        RenderBatch(this, param_1, param_2, param_6, (long)field_24);
                        field_28 = 0;
                    }
                    plVar5 = plVar5 + 2;
                } while (plVar5 != local_68);
            }
            if (0 < (long)field_28) {
                RenderBatch(this, param_1, param_2, param_6, (long)field_28);
                field_28 = 0;
            }
        }
    }

    // 0x1009cb5c0, 64 bytes, placed by class name
    // DebugRect2DRender::DestroyRenderingResources()
    void DebugRect2DRender::DestroyRenderingResources() {
        field_208->Destroy();
        (&field_32)->Destroy();
        (&field_120)->Destroy();
    }

    // 0x1009cb630, 176 bytes, base-object constructor, placed by class name
    // DebugRect2DRender::DebugRect2DRender(int)
    void DebugRect2DRender::DebugRect2DRender(int param_1) {
        new (this) Array<PrimVertPosCol, eastl::allocator>();
        field_24 = param_1;
        field_28 = 0;
        new (&field_32) render::DynamicBuffer<render::VertexBuffer>();
        new (&field_120) render::IndexBuffer();
        new (field_208) render::InputAssemblerState();
        set_max_size((long)field_24 << 2, 0);
        CreateRenderingResources(this);
    }

    // 0x1009cb6e0, 224 bytes, placed by class name
    // DebugRect2DRender::CreateRenderingResources()
    undefined8 DebugRect2DRender::CreateRenderingResources() {
        int iVar1;
        undefined8 uVar2;
        undefined1* this_00;
        Array<unsigned short, eastl::allocator> local_38[24];

        if (field_24 < 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_MaxQuads > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/primitive/"
                      "debugbasic/DebugRect2DRender.cpp",
                      24, (char*)0);
        }
        iVar1 = field_24;
        Array<unsigned short, eastl::allocator>::Array(local_38);
        graphicutils::CreateQuadListIndices<unsigned short>((Array*)local_38, (long)field_24);
        uVar2 = local_38->data();
        (&field_120, iVar1 * 12, 0, uVar2, 5123)->Create();
        this_00 = field_208;
        new (this_00) std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>(4);
        render::InputAssemblerState::SetIndexBuffer((IndexBuffer*)this_00, (uint)&field_120);
        this_00->SetFlags(1);
        local_38->~Array();
        return 1;
    }

    // 0x1009cb7f0, 400 bytes, placed by class name
    // DebugRect2DRender::RenderBatch(render::RenderContext&, render::DrawCallState const&, math::Matrix44T<float> const&, unsigned long)
    void DebugRect2DRender::RenderBatch(RenderContext* param_1, DrawCallState* param_2, Matrix44T* param_3,
                                        ulong param_4) {
        undefined4 uVar1;
        void* pvVar2;
        PrimitiveShaderFamily* pPVar3;
        ShaderProgram* this_00;
        RenderPipelineState* this_01;
        VertexDeclaration* pVVar4;
        VertexBuffer* pVVar5;
        CoordMapSquare* this_02;
        DrawCallState local_80;
        HashedString local_50;

        if ((ulong)(long)field_24 < param_4) {
            /* WARNING: Subroutine does not return */
            LogAssert("numRects <= (size_t)m_MaxQuads",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/primitive/"
                      "debugbasic/DebugRect2DRender.cpp",
                      121, (char*)0);
        }
        pvVar2 = (void*)data();
        (&field_32, 0, (int)param_4 * 112, pvVar2)->Update();
        new (&local_80) render::DrawCallState(param_2);
        pPVar3 = (PrimitiveShaderFamily*)local_80.Instance();
        this_00 = (ShaderProgram*)pPVar3->GetShaderProgram(1);
        this_01 = (RenderPipelineState*)local_80.GetRenderPipelineState();
        this_01->SetShaderProgram(this_00);
        new (&local_50) HashedString("uWorldMat");
        this_00->SetShaderConstMatrix4(&local_50, 1, PTR_IDENTITY_100ee6730, 1);
        new (&local_50) HashedString("uViewProjMat");
        this_00->SetShaderConstMatrix4(&local_50, 1, param_3, 1);
        pVVar4 = (VertexDeclaration*)this_00->second();
        pVVar5 = (VertexBuffer*)(&field_32)->CurrentBuffer();
        (field_208, pVVar4, pVVar5)->SetVertexStreamData();
        local_80.SetInputAssemblerState(field_208);
        this_02 = (CoordMapSquare*)local_80.GetInputAssemblerState();
        uVar1 = this_02->GetX();
        param_1->DrawIndexedPrimitives(&local_80, uVar1, (int)param_4 * 6, 0);
        local_80.~DrawCallState();
    }

} // namespace jag
