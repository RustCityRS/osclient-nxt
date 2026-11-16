// libs/graphics/primitive/debugbasic/DebugCapsuleRender.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics.primitive.debugbasic

namespace jag {
    class DebugCapsuleRender {
    public:
        DebugCapsuleRender(int);
        CreateRenderingResources();
        void DestroyRenderingResources();
        void Render(render::RenderContext&, render::DrawCallState const&, ViewTransforms const&,
                    eastl::vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>, eastl::allocator> const&,
                    bool);
        void OnEndFrame();
        ~DebugCapsuleRender();

        // data members, from how the methods use this: 708 bytes
        char _unknown_0[8];
        ulong field_8;            // offset 8
        PrimVertPosCol* field_16; // offset 16
        char _unknown_24[288];
        InputAssemblerState field_312; // offset 312
        InputAssemblerState field_504; // offset 504
        uint field_696;                // offset 696
        uint field_700;                // offset 700
        char _unknown_704[4];
    };

    // 0x1009bf220, 320 bytes, base-object constructor, placed by class name
    // DebugCapsuleRender::DebugCapsuleRender(int)
    void DebugCapsuleRender::DebugCapsuleRender(int param_1) {
        uint uVar1;

        new (this) Array<PrimVertPosCol, eastl::allocator>();
        new (&field_24) Array<PrimVertPosCol, eastl::allocator>();
        new (&field_48) render::DynamicBuffer<render::VertexBuffer>();
        new (&field_136) render::IndexBuffer();
        new (&field_224) render::IndexBuffer();
        new (field_312) render::InputAssemblerState();
        new (field_504) render::InputAssemblerState();
        field_696 = 16;
        field_700 = 12;
        uVar1 = graphicutils::GetCapsuleVertexCount(16, 12);
        (&field_24, (ulong)(param_1 * uVar1), 0)->set_max_size();
        set_max_size((ulong)uVar1, 0);
        CreateRenderingResources(this);
    }

    // 0x1009bf360, 576 bytes, placed by class name
    // DebugCapsuleRender::CreateRenderingResources()
    undefined4 DebugCapsuleRender::CreateRenderingResources() {
        byte bVar1;
        uint uVar2;
        ulong uVar3;
        uint* puVar4;
        undefined8 uVar5;
        int iVar6;
        int iVar7;
        ulong uVar8;
        uint uVar9;
        ulong uVar10;
        undefined1* puVar11;
        Array<unsigned int, eastl::allocator> local_58[24];
        int local_40;
        uint local_3c;
        int local_38;
        byte local_31;

        uVar2 = graphicutils::GetCapsuleVertexCount(field_696, field_700);
        uVar3 = (&field_24)->end();
        uVar10 = 0;
        uVar3 = uVar3 / uVar2;
        local_3c = uVar2;
        local_38 = graphicutils::GetCapsuleTriListIndexCount(field_696, field_700);
        iVar7 = (int)uVar3;
        Array<unsigned int, eastl::allocator>::Array(local_58, (ulong)(uint)(local_38 * iVar7));
        if (0 < iVar7) {
            uVar2 = 0;
            uVar8 = 0;
            do {
                puVar4 = (uint*)Array<unsigned int, eastl::allocator>::operator[](local_58, uVar10);
                graphicutils::CreateCapsuleTriListIndices<unsigned int>(puVar4, uVar2, field_696, field_700);
                uVar8 = uVar8 + 1;
                uVar2 = uVar2 + local_3c;
                uVar10 = (ulong)(uint)((int)uVar10 + local_38);
            } while (uVar8 != (uVar3 & 4294967295));
        }
        iVar6 = local_38 * iVar7 * 4;
        uVar5 = local_58->data();
        local_31 = (&field_136, iVar6, 0, uVar5, 5125)->Create();
        local_40 = iVar7 * 4;
        local_58->~Array();
        local_38 = graphicutils::GetCapsuleLineListIndexCount(field_696, field_700);
        Array<unsigned int, eastl::allocator>::Array(local_58, (ulong)(uint)(local_38 * iVar7));
        if (0 < iVar7) {
            uVar2 = 0;
            uVar9 = 0;
            uVar10 = 0;
            do {
                puVar4 = (uint*)Array<unsigned int, eastl::allocator>::operator[](local_58, (ulong)uVar2);
                graphicutils::CreateCapsuleLineListIndices<unsigned int>(puVar4, uVar9, field_696, field_700);
                uVar10 = uVar10 + 1;
                uVar9 = uVar9 + local_3c;
                uVar2 = uVar2 + local_38;
            } while (uVar10 != (uVar3 & 4294967295));
        }
        iVar7 = local_40 * local_38;
        uVar5 = local_58->data();
        bVar1 = (&field_224, iVar7, 0, uVar5, 5125)->Create();
        bVar1 = local_31 & bVar1;
        local_58->~Array();
        puVar11 = field_312;
        new (puVar11) std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>(4);
        render::InputAssemblerState::SetIndexBuffer((IndexBuffer*)puVar11, (uint)&field_136);
        puVar11->SetFlags(1);
        puVar11 = field_504;
        new (puVar11) std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>(1);
        render::InputAssemblerState::SetIndexBuffer((IndexBuffer*)puVar11, (uint)&field_224);
        puVar11->SetFlags(1);
        return CONCAT31((int3)((uint)iVar7 >> 8), bVar1);
    }

    // 0x1009bf5a0, 16 bytes, complete-object constructor, placed by class name
    // DebugCapsuleRender::DebugCapsuleRender(int): jumps straight to the base-object constructor

    // 0x1009bf8f0, 80 bytes, placed by class name
    // DebugCapsuleRender::DestroyRenderingResources()
    void DebugCapsuleRender::DestroyRenderingResources() {
        field_504->Destroy();
        field_312->Destroy();
        (&field_224)->Destroy();
        (&field_136)->Destroy();
        (&field_48)->Destroy();
    }

    // 0x1009bf940, 1024 bytes, placed by class name
    // DebugCapsuleRender::Render(render::RenderContext&, render::DrawCallState const&, ViewTransforms const&, eastl::vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>, eastl::allocator> const&, bool)
    void DebugCapsuleRender::Render(RenderContext* param_1, DrawCallState* param_2, ViewTransforms* param_3,
                                    vector* param_4, bool param_5) {
        undefined1* this_00;
        undefined1* this_01;
        OpenGLView* this_02;
        char cVar1;
        uint uVar2;
        int iVar3;
        undefined4 uVar4;
        long* plVar5;
        Vector3T* pVVar6;
        Vector4T<float>* this_03;
        long lVar7;
        void* pvVar8;
        PrimitiveShaderFamily* pPVar9;
        ShaderProgram* this_04;
        RenderPipelineState* this_05;
        Matrix44T* pMVar10;
        VertexDeclaration* pVVar11;
        VertexBuffer* pVVar12;
        CoordMapSquare* this_06;
        int iVar13;
        undefined3 in_register_00000089;
        ulong uVar14;
        ulong uVar15;
        undefined8 uVar16;
        undefined8 local_f8;
        undefined8 uStack_f0;
        Matrix44T local_e8;
        long* local_98;
        long local_78;
        ulong local_70;
        ulong local_68;
        int local_5c;
        float local_58;
        undefined4 local_54;
        undefined1 local_50[28];
        uint local_34;

        cVar1 = param_4->empty();
        if (cVar1 == '\0') {
            local_54 = CONCAT31(in_register_00000089, param_5);
            uVar2 = graphicutils::GetCapsuleVertexCount(field_696, field_700);
            uVar14 = (ulong)uVar2;
            plVar5 = (long*)param_4->HeapBeginPtr();
            local_98 = (long*)param_4->end();
            this_00 = &field_24;
            local_68 = uVar14;
            if (plVar5 == local_98) {
                iVar13 = 0;
            } else {
                lVar7 = 0;
                iVar13 = 0;
                local_70 = uVar14;
                do {
                    this_02 = (OpenGLView*)*plVar5;
                    local_78 = lVar7;
                    local_5c = iVar13;
                    pVVar6 = (Vector3T*)Array<PrimVertPosCol, eastl::allocator>::operator[](
                        (Array<PrimVertPosCol, eastl::allocator>*)this, 0);
                    local_34 = field_696;
                    local_50._16_4_ = field_700;
                    local_58 = (float)this_02->GetMainRenderTargetScaleFactor();
                    uVar16 = this_02->GetCylinderLength();
                    graphicutils::CreateCapsuleVertices(pVVar6, (Vector3T*)0, 28, local_34, local_50._16_4_, local_58,
                                                        (float)uVar16);
                    local_34 = *(uint*)(*plVar5 + 32);
                    local_50._16_8_ = plVar5;
                    local_e8.GetTransform();
                    if (0 < (int)local_68) {
                        uVar14 = 0;
                        do {
                            pVVar6 = (Vector3T*)Array<PrimVertPosCol, eastl::allocator>::operator[](
                                (Array<PrimVertPosCol, eastl::allocator>*)this, uVar14);
                            local_50._0_8_ = math::operator*(pVVar6, &local_e8);
                            local_50._8_4_ = SUB84(uVar16, 0);
                            uVar15 = (ulong)((int)local_78 + (int)uVar14);
                            this_03 = (Vector4T<float>*)Array<PrimVertPosCol, eastl::allocator>::operator[](
                                (Array<PrimVertPosCol, eastl::allocator>*)this_00, uVar15);
                            math::Vector4T<float>::SetXYZ(this_03, (Vector3T*)local_50);
                            local_f8 = math::Colour4FromA8R8G8B8(local_34);
                            uStack_f0 = uVar16;
                            new (local_50) math::Float4((Vector4T*)&local_f8);
                            this = (DebugCapsuleRender*)this;
                            lVar7 = Array<PrimVertPosCol, eastl::allocator>::operator[](
                                (Array<PrimVertPosCol, eastl::allocator>*)this_00, uVar15);
                            *(undefined8*)(lVar7 + 12) = local_50._0_8_;
                            *(ulong*)(lVar7 + 20) = CONCAT44(local_50._12_4_, local_50._8_4_);
                            uVar14 = uVar14 + 1;
                        } while (local_70 != uVar14);
                    }
                    iVar13 = local_5c + 1;
                    plVar5 = (long*)(local_50._16_8_ + 16);
                    lVar7 = local_78 + local_70;
                } while (plVar5 != local_98);
            }
            this_01 = &field_48;
            iVar3 = (int)local_68;
            pvVar8 = (void*)this_00->data();
            this_01->Update(0, iVar3 * iVar13 * 28, pvVar8);
            pMVar10 = &local_e8;
            new (pMVar10) render::DrawCallState(param_2);
            pPVar9 = (PrimitiveShaderFamily*)pMVar10->Instance();
            this_04 = (ShaderProgram*)pPVar9->GetShaderProgram(1);
            this_05 = (RenderPipelineState*)local_e8.GetRenderPipelineState();
            this_05->SetShaderProgram(this_04);
            new (local_50) HashedString("uWorldMat");
            this_04->SetShaderConstMatrix4(local_50, 1, PTR_IDENTITY_100ee6730, 1);
            new (local_50) HashedString("uViewProjMat");
            pMVar10 = (Matrix44T*)param_3->GetImmediateThreadPool();
            this_04->SetShaderConstMatrix4(local_50, 1, pMVar10, 1);
            if ((char)local_54 == '\0') {
                pVVar11 = (VertexDeclaration*)this_04->second();
                pVVar12 = (VertexBuffer*)this_01->CurrentBuffer();
                (field_312, pVVar11, pVVar12)->SetVertexStreamData();
                local_e8.SetInputAssemblerState(field_312);
                iVar3 = graphicutils::GetCapsuleTriListIndexCount(field_696, field_700);
            } else {
                pVVar11 = (VertexDeclaration*)this_04->second();
                pVVar12 = (VertexBuffer*)this_01->CurrentBuffer();
                (field_504, pVVar11, pVVar12)->SetVertexStreamData();
                local_e8.SetInputAssemblerState(field_504);
                iVar3 = graphicutils::GetCapsuleLineListIndexCount(field_696, field_700);
            }
            lVar7 = local_e8.second();
            *(int*)(lVar7 + 12) = iVar3 * iVar13;
            this_06 = (CoordMapSquare*)local_e8.GetInputAssemblerState();
            uVar4 = this_06->GetX();
            lVar7 = local_e8.second();
            param_1->DrawIndexedPrimitives(&local_e8, uVar4, *(undefined4*)(lVar7 + 12), 0);
            local_e8.~DrawCallState();
        }
    }

    // 0x1009bfde0, 16 bytes, placed by class name
    // DebugCapsuleRender::OnEndFrame()
    void DebugCapsuleRender::OnEndFrame() {
        (&field_48)->RotateBuffers();
    }

    // 0x1009c92e0, 16 bytes, complete-object destructor, inline, placed by class name
    // DebugCapsuleRender::~DebugCapsuleRender(): jumps straight to the base-object destructor

    // 0x1009cd030, 192 bytes, base-object destructor, inline, placed by class name
    // DebugCapsuleRender::~DebugCapsuleRender()
    void DebugCapsuleRender::~DebugCapsuleRender() {
        DestroyRenderingResources(this);
        field_504->~InputAssemblerState();
        field_312->~InputAssemblerState();
        (&field_224)->~IndexBuffer();
        (&field_136)->~IndexBuffer();
        (&field_48)->~DynamicBuffer();
        (&field_24)->~Array();
        ~Array();
    }

} // namespace jag
