// libs/graphics/primitive/debugbasic/DebugCylinderRender.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics.primitive.debugbasic

namespace jag {
    class DebugCylinderRender {
    public:
        DebugCylinderRender(int);
        byte CreateRenderingResources();
        void DestroyRenderingResources();
        void Render(render::RenderContext&, render::DrawCallState const&, ViewTransforms const&,
                    eastl::vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>, eastl::allocator> const&,
                    bool);
        void OnEndFrame();
        ~DebugCylinderRender();

        // data members, from how the methods use this: 704 bytes
        char _unknown_0[8];
        ulong field_8;            // offset 8
        PrimVertPosCol* field_16; // offset 16
        char _unknown_24[288];
        InputAssemblerState field_312; // offset 312
        InputAssemblerState field_504; // offset 504
        uint field_696;                // offset 696
        char _unknown_700[4];
    };

    // 0x1009c13a0, 352 bytes, base-object constructor, placed by class name
    // DebugCylinderRender::DebugCylinderRender(int)
    void DebugCylinderRender::DebugCylinderRender(int param_1) {
        Vector3T* pVVar1;
        uint uVar2;

        new (this) Array<PrimVertPosCol, eastl::allocator>();
        new (&field_24) Array<PrimVertPosCol, eastl::allocator>();
        new (&field_48) render::DynamicBuffer<render::VertexBuffer>();
        new (&field_136) render::IndexBuffer();
        new (&field_224) render::IndexBuffer();
        new (field_312) render::InputAssemblerState();
        new (field_504) render::InputAssemblerState();
        field_696 = 24;
        uVar2 = graphicutils::GetCylinderVertexCount(24);
        set_max_size((ulong)uVar2, 0);
        pVVar1 = (Vector3T*)Array<PrimVertPosCol, eastl::allocator>::operator[](
            (Array<PrimVertPosCol, eastl::allocator>*)this, 0);
        graphicutils::CreateCylinderVertices(pVVar1, (Vector3T*)0, 28, field_696, 0.5, 1.0);
        (&field_24, (ulong)(uVar2 * param_1), 0)->set_max_size();
        CreateRenderingResources(this);
    }

    // 0x1009c1500, 544 bytes, placed by class name
    // DebugCylinderRender::CreateRenderingResources()
    byte DebugCylinderRender::CreateRenderingResources() {
        undefined1* puVar1;
        DebugCylinderRender* pDVar2;
        byte bVar3;
        uint uVar4;
        int iVar5;
        int iVar6;
        ulong uVar7;
        uint* puVar8;
        undefined8 uVar9;
        uint uVar10;
        ulong uVar11;
        int iVar12;
        ulong uVar13;
        undefined1* puVar14;
        Array<unsigned int, eastl::allocator> local_60[24];
        uint local_48;
        int local_44;
        DebugCylinderRender* local_40;
        byte local_31;

        uVar4 = graphicutils::GetCylinderVertexCount(field_696);
        uVar7 = (&field_24)->end();
        uVar10 = 0;
        iVar5 = graphicutils::GetCylinderTriListIndexCount(field_696);
        local_40 = (DebugCylinderRender*)CONCAT44(local_40._4_4_, iVar5);
        iVar12 = (int)(uVar7 / uVar4);
        Array<unsigned int, eastl::allocator>::Array(local_60, (ulong)(uint)(iVar5 * iVar12));
        if (0 < iVar12) {
            iVar5 = 0;
            do {
                iVar6 = graphicutils::GetCylinderTriListIndexCount(24);
                puVar8 =
                    (uint*)Array<unsigned int, eastl::allocator>::operator[](local_60, (ulong)(uint)(iVar6 * iVar5));
                graphicutils::CreateCylinderTriListIndices<unsigned int>(puVar8, uVar10, field_696, false);
                iVar5 = iVar5 + 1;
                uVar10 = uVar10 + uVar4;
            } while (iVar5 != iVar12);
        }
        iVar5 = (int)local_40 * iVar12 * 4;
        local_48 = uVar4;
        uVar9 = local_60->data();
        local_31 = (&field_136, iVar5, 0, uVar9, 5125)->Create();
        local_44 = iVar12 * 4;
        local_60->~Array();
        local_40 = this;
        iVar5 = graphicutils::GetCylinderLineListIndexCount(field_696);
        Array<unsigned int, eastl::allocator>::Array(local_60, (ulong)(uint)(iVar5 * iVar12));
        if (0 < iVar12) {
            uVar13 = 0;
            uVar10 = 0;
            uVar11 = 0;
            do {
                puVar8 = (uint*)Array<unsigned int, eastl::allocator>::operator[](local_60, uVar13);
                graphicutils::CreateCylinderLineListIndices<unsigned int>(puVar8, uVar10, local_40->field_696);
                uVar11 = uVar11 + 1;
                uVar10 = uVar10 + local_48;
                uVar13 = (ulong)(uint)((int)uVar13 + iVar5);
            } while (uVar11 != (uVar7 / uVar4 & 4294967295));
        }
        pDVar2 = local_40;
        puVar1 = &local_40->field_224;
        iVar5 = local_44 * iVar5;
        uVar9 = local_60->data();
        bVar3 = puVar1->Create(iVar5, 0, uVar9, 5125);
        bVar3 = local_31 & bVar3;
        local_60->~Array();
        puVar14 = pDVar2->field_312;
        new (puVar14) std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>(4);
        render::InputAssemblerState::SetIndexBuffer((IndexBuffer*)puVar14, (uint)&field_136);
        puVar14->SetFlags(1);
        puVar14 = pDVar2->field_504;
        new (puVar14) std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>(1);
        render::InputAssemblerState::SetIndexBuffer((IndexBuffer*)puVar14, (uint)puVar1);
        puVar14->SetFlags(1);
        return bVar3;
    }

    // 0x1009c1720, 16 bytes, complete-object constructor, placed by class name
    // DebugCylinderRender::DebugCylinderRender(int): jumps straight to the base-object constructor

    // 0x1009c1a70, 80 bytes, placed by class name
    // DebugCylinderRender::DestroyRenderingResources()
    void DebugCylinderRender::DestroyRenderingResources() {
        field_504->Destroy();
        field_312->Destroy();
        (&field_136)->Destroy();
        (&field_48)->Destroy();
        (&field_224)->Destroy();
    }

    // 0x1009c1ac0, 976 bytes, placed by class name
    // DebugCylinderRender::Render(render::RenderContext&, render::DrawCallState const&, ViewTransforms const&, eastl::vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>, eastl::allocator> const&, bool)
    void DebugCylinderRender::Render(RenderContext* param_1, DrawCallState* param_2, ViewTransforms* param_3,
                                     vector* param_4, bool param_5) {
        undefined1* this_00;
        undefined8* puVar1;
        Array<PrimVertPosCol, eastl::allocator>* this_01;
        char cVar2;
        uint uVar3;
        int iVar4;
        undefined4 uVar5;
        long* plVar6;
        Vector3T* pVVar7;
        Vector4T<float>* this_02;
        long lVar8;
        void* pvVar9;
        PrimitiveShaderFamily* pPVar10;
        ShaderProgram* this_03;
        RenderPipelineState* this_04;
        Matrix44T* pMVar11;
        VertexDeclaration* pVVar12;
        VertexBuffer* pVVar13;
        CoordMapSquare* this_05;
        DrawCallState* this_06;
        undefined3 in_register_00000089;
        int iVar14;
        ulong uVar15;
        ulong uVar16;
        undefined8 uVar17;
        undefined4 uVar18;
        undefined8 local_f8;
        undefined4 uStack_f0;
        undefined4 uStack_ec;
        undefined1 local_e8[56];
        undefined8 uStack_b0;
        ulong local_a0;
        long* local_90;
        long* local_88;
        ulong local_80;
        long local_60;
        Array<PrimVertPosCol, eastl::allocator>* local_58;
        uint local_4c;
        int local_48;
        undefined4 local_44;
        HashedString local_40;

        cVar2 = param_4->empty();
        if (cVar2 == '\0') {
            local_44 = CONCAT31(in_register_00000089, param_5);
            uVar3 = graphicutils::GetCylinderVertexCount(field_696);
            uVar15 = (ulong)uVar3;
            plVar6 = (long*)param_4->HeapBeginPtr();
            local_88 = (long*)param_4->end();
            local_58 = (Array<PrimVertPosCol, eastl::allocator>*)&field_24;
            if (plVar6 == local_88) {
                iVar14 = 0;
            } else {
                lVar8 = 0;
                iVar14 = 0;
                local_a0 = uVar15;
                local_80 = uVar15;
                do {
                    this_01 = local_58;
                    local_4c = *(uint*)(*plVar6 + 64);
                    puVar1 = (undefined8*)*plVar6;
                    local_e8._0_8_ = *puVar1;
                    local_e8._8_8_ = puVar1[1];
                    uVar18 = *(undefined4*)(puVar1 + 2);
                    uVar5 = *(undefined4*)((long)puVar1 + 20);
                    local_e8._24_4_ = *(undefined4*)(puVar1 + 3);
                    local_e8._28_4_ = *(undefined4*)((long)puVar1 + 28);
                    local_e8._32_8_ = puVar1[4];
                    local_e8._40_8_ = puVar1[5];
                    local_e8._48_8_ = puVar1[6];
                    uStack_b0 = puVar1[7];
                    local_e8._16_4_ = uVar18;
                    local_e8._20_4_ = uVar5;
                    local_90 = plVar6;
                    local_60 = lVar8;
                    local_48 = iVar14;
                    if (0 < (int)local_80) {
                        uVar16 = 0;
                        do {
                            pVVar7 = (Vector3T*)Array<PrimVertPosCol, eastl::allocator>::operator[](
                                (Array<PrimVertPosCol, eastl::allocator>*)this, uVar16);
                            local_40.field_0 = (char*)math::operator*(pVVar7, (Matrix44T*)local_e8);
                            uVar15 = (ulong)((int)local_60 + (int)uVar16);
                            local_40.field_8._0_4_ = uVar18;
                            this_02 =
                                (Vector4T<float>*)Array<PrimVertPosCol, eastl::allocator>::operator[](this_01, uVar15);
                            math::Vector4T<float>::SetXYZ(this_02, (Vector3T*)&local_40);
                            uVar17 = math::Colour4FromA8R8G8B8(local_4c);
                            uStack_f0 = uVar18;
                            uStack_ec = uVar5;
                            local_f8 = uVar17;
                            new (&local_40) math::Float4((Vector4T*)&local_f8);
                            this = (DebugCylinderRender*)this;
                            lVar8 = Array<PrimVertPosCol, eastl::allocator>::operator[](this_01, uVar15);
                            *(char**)(lVar8 + 12) = local_40.field_0;
                            *(ulong*)(lVar8 + 20) = CONCAT44(local_40.field_8._4_4_, (undefined4)local_40.field_8);
                            uVar16 = uVar16 + 1;
                            uVar15 = local_a0;
                        } while (local_a0 != uVar16);
                    }
                    iVar14 = local_48 + 1;
                    plVar6 = local_90 + 2;
                    lVar8 = local_60 + uVar15;
                    uVar3 = (uint)local_80;
                } while (plVar6 != local_88);
            }
            this_00 = &field_48;
            pvVar9 = (void*)local_58->data();
            this_00->Update(0, uVar3 * iVar14 * 28, pvVar9);
            this_06 = (DrawCallState*)local_e8;
            render::DrawCallState::DrawCallState(this_06, param_2);
            pPVar10 = (PrimitiveShaderFamily*)this_06->Instance();
            this_03 = (ShaderProgram*)pPVar10->GetShaderProgram(1);
            this_04 = (RenderPipelineState*)local_e8->GetRenderPipelineState();
            this_04->SetShaderProgram(this_03);
            new (&local_40) HashedString("uWorldMat");
            this_03->SetShaderConstMatrix4(&local_40, 1, PTR_IDENTITY_100ee6730, 1);
            new (&local_40) HashedString("uViewProjMat");
            pMVar11 = (Matrix44T*)param_3->GetImmediateThreadPool();
            this_03->SetShaderConstMatrix4(&local_40, 1, pMVar11, 1);
            if ((char)local_44 == '\0') {
                pVVar12 = (VertexDeclaration*)this_03->second();
                pVVar13 = (VertexBuffer*)this_00->CurrentBuffer();
                (field_312, pVVar12, pVVar13)->SetVertexStreamData();
                local_e8->SetInputAssemblerState(field_312);
                iVar4 = graphicutils::GetCylinderTriListIndexCount(field_696);
            } else {
                pVVar12 = (VertexDeclaration*)this_03->second();
                pVVar13 = (VertexBuffer*)this_00->CurrentBuffer();
                (field_504, pVVar12, pVVar13)->SetVertexStreamData();
                local_e8->SetInputAssemblerState(field_504);
                iVar4 = graphicutils::GetCylinderLineListIndexCount(field_696);
            }
            lVar8 = local_e8->second();
            *(int*)(lVar8 + 12) = iVar4 * iVar14;
            this_05 = (CoordMapSquare*)local_e8->GetInputAssemblerState();
            uVar5 = this_05->GetX();
            lVar8 = local_e8->second();
            uVar18 = *(undefined4*)(lVar8 + 12);
            lVar8 = local_e8->second();
            param_1->DrawIndexedPrimitives(local_e8, uVar5, uVar18, *(undefined4*)(lVar8 + 16));
            local_e8->~DrawCallState();
        }
    }

    // 0x1009c1e90, 16 bytes, placed by class name
    // DebugCylinderRender::OnEndFrame()
    void DebugCylinderRender::OnEndFrame() {
        (&field_48)->RotateBuffers();
    }

    // 0x1009c92c0, 16 bytes, complete-object destructor, inline, placed by class name
    // DebugCylinderRender::~DebugCylinderRender(): jumps straight to the base-object destructor

    // 0x1009cceb0, 192 bytes, base-object destructor, inline, placed by class name
    // DebugCylinderRender::~DebugCylinderRender()
    void DebugCylinderRender::~DebugCylinderRender() {
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
