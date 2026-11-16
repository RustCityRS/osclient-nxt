// libs/graphics/primitive/debugbasic/DebugAABBRender.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.primitive.debugbasic

#include "DebugAABBRender.h"

namespace jag {
    // 0x1009be7f0, 240 bytes, base-object constructor, placed by class name and debug map
    // DebugAABBRender::DebugAABBRender(int)
    void DebugAABBRender::DebugAABBRender(int param_1) {
        new (this) Array<PrimVertPosCol, eastl::allocator>();
        new (&field_24) render::DynamicBuffer<render::VertexBuffer>();
        new (&field_112) render::IndexBuffer();
        new (&field_200) render::IndexBuffer();
        new (field_288) render::InputAssemblerState();
        new (field_480) render::InputAssemblerState();
        set_max_size((ulong)(uint)(param_1 << 3), 0);
        CreateRenderingResources(this);
    }

    // 0x1009bea60, 480 bytes, placed by class name and debug map
    // DebugAABBRender::CreateRenderingResources()
    ulong DebugAABBRender::CreateRenderingResources() {
        int iVar1;
        byte bVar2;
        ulong uVar3;
        ushort* puVar4;
        undefined8 uVar5;
        ulong uVar6;
        ushort uVar7;
        undefined1* puVar8;
        Array<unsigned short, eastl::allocator>* unaff_R15;
        Array<unsigned short, eastl::allocator> local_50[31];
        byte local_31;

        uVar3 = end();
        uVar3 = uVar3 >> 3;
        iVar1 = (int)uVar3;
        Array<unsigned short, eastl::allocator>::Array(local_50, (ulong)(uint)(iVar1 * 36));
        if (0 < iVar1) {
            uVar6 = 0;
            unaff_R15 = local_50;
            uVar7 = 0;
            do {
                puVar4 = (ushort*)Array<unsigned short, eastl::allocator>::operator[](unaff_R15, uVar6 & 4294967295);
                graphicutils::CreateCubeSharedTriListIndices<unsigned short>(puVar4, uVar7, false);
                uVar7 = uVar7 + 8;
                uVar6 = uVar6 + 36;
            } while ((uVar3 & 4294967295) * 36 != uVar6);
        }
        uVar5 = local_50->data();
        local_31 = (&field_112, iVar1 * 72, 0, uVar5, 5123)->Create();
        local_50->~Array();
        Array<unsigned short, eastl::allocator>::Array(local_50, (ulong)(uint)(iVar1 * 24));
        if (0 < iVar1) {
            unaff_R15 = (Array<unsigned short, eastl::allocator>*)0;
            uVar7 = 0;
            do {
                puVar4 = (ushort*)Array<unsigned short, eastl::allocator>::operator[](local_50,
                                                                                      (ulong)unaff_R15 & 4294967295);
                graphicutils::CreateCubeSharedLineListIndices<unsigned short>(puVar4, uVar7);
                uVar7 = uVar7 + 8;
                unaff_R15 = unaff_R15 + 24;
            } while ((Array<unsigned short, eastl::allocator>*)((uVar3 & 4294967295) * 24) != unaff_R15);
        }
        uVar5 = local_50->data();
        bVar2 = (&field_200, iVar1 * 48, 0, uVar5, 5123)->Create();
        bVar2 = local_31 & bVar2;
        local_50->~Array();
        puVar8 = field_288;
        new (puVar8) std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>(4);
        render::InputAssemblerState::SetIndexBuffer((IndexBuffer*)puVar8, (uint)&field_112);
        puVar8->SetFlags(1);
        puVar8 = field_480;
        new (puVar8) std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>(1);
        render::InputAssemblerState::SetIndexBuffer((IndexBuffer*)puVar8, (uint)&field_200);
        puVar8->SetFlags(1);
        return CONCAT71((int7)((ulong)unaff_R15 >> 8), bVar2) & 4294967295;
    }

    // 0x1009bec50, 16 bytes, complete-object constructor, placed by class name and debug map
    // DebugAABBRender::DebugAABBRender(int): jumps straight to the base-object constructor

    // 0x1009bed00, 80 bytes, placed by class name and debug map
    // DebugAABBRender::DestroyRenderingResources()
    void DebugAABBRender::DestroyRenderingResources() {
        field_480->Destroy();
        field_288->Destroy();
        (&field_24)->Destroy();
        (&field_112)->Destroy();
        (&field_200)->Destroy();
    }

    // 0x1009bed50, 1040 bytes, placed by class name and debug map
    // DebugAABBRender::Render(render::RenderContext&, render::DrawCallState const&, ViewTransforms const&, eastl::vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>, eastl::allocator> const&, bool)
    void DebugAABBRender::Render(RenderContext* param_1, DrawCallState* param_2, ViewTransforms* param_3,
                                 vector* param_4, bool param_5) {
        ulong uVar1;
        AABB* this_00;
        undefined8 uVar3;
        char cVar4;
        undefined4 uVar5;
        Vector3T* pVVar6;
        undefined8* puVar7;
        Vector4T<float>* this_01;
        long lVar8;
        long lVar9;
        void* pvVar10;
        PrimitiveShaderFamily* pPVar11;
        ShaderProgram* this_02;
        RenderPipelineState* this_03;
        Matrix44T* pMVar12;
        VertexDeclaration* pVVar13;
        VertexBuffer* pVVar14;
        CoordMapSquare* this_04;
        int iVar15;
        DrawCallState* this_05;
        undefined3 in_register_00000089;
        undefined1* puVar16;
        int iVar17;
        ulong uVar18;
        float fVar19;
        undefined8 uVar20;
        float fVar21;
        undefined4 uVar22;
        DrawCallState local_1c8[4];
        Matrix44T local_e8;
        undefined8 local_a8;
        float fStack_a0;
        undefined4 uStack_9c;
        ulong local_98;
        undefined8* local_90;
        long local_88;
        undefined8* local_80;
        undefined1 local_60[24];
        uint local_48;
        float local_44;
        float local_40;
        undefined4 local_3c;
        long local_38;

        cVar4 = param_4->empty();
        if (cVar4 == '\0') {
            local_60._16_8_ = this;
            local_3c = CONCAT31(in_register_00000089, param_5);
            new (local_1c8) std::array<PrimVertPosCol, 8ul>();
            lVar8 = 0;
            pVVar6 = (Vector3T*)std::array<PrimVertPosCol, 8ul>::operator[]((array<PrimVertPosCol, 8ul>*)local_1c8, 0);
            new (&local_e8) math::ColourHSL(0.5, 0.5, 0.5);
            graphicutils::CreateCubeVerticesShared(pVVar6, (Vector3T*)0, 28, (Vector3T*)&local_e8, false);
            puVar7 = (undefined8*)param_4->HeapBeginPtr();
            local_80 = (undefined8*)param_4->end();
            if (puVar7 != local_80) {
                lVar9 = 0;
                lVar8 = 0;
                do {
                    local_98 = (ulong)((uint)lVar9 & 4294967288);
                    this_00 = (AABB*)*puVar7;
                    local_48 = *(uint*)&this_00->field_32;
                    local_90 = puVar7;
                    local_88 = lVar9;
                    local_38 = lVar8;
                    new (&local_e8) math::Matrix44T<float>();
                    local_44 = (float)this_00->GetWidth();
                    local_40 = (float)this_00->GetHeight();
                    fVar19 = (float)this_00->GetLength();
                    uVar22 = 0;
                    fVar21 = local_40;
                    local_44->SetToDiagonal(local_40, fVar19, 1.0);
                    local_60._0_8_ = this_00->GetCentrePos();
                    local_60._8_4_ = fVar21;
                    local_e8.SetPos(local_60);
                    uVar3 = local_60._16_8_;
                    uVar18 = 0;
                    do {
                        pVVar6 = (Vector3T*)std::array<PrimVertPosCol, 8ul>::operator[](
                            (array<PrimVertPosCol, 8ul>*)local_1c8, uVar18);
                        local_60._0_8_ = math::operator*(pVVar6, &local_e8);
                        uVar1 = local_98 + uVar18;
                        local_60._8_4_ = fVar21;
                        this_01 = (Vector4T<float>*)Array<PrimVertPosCol, eastl::allocator>::operator[](
                            (Array<PrimVertPosCol, eastl::allocator>*)uVar3, uVar1);
                        math::Vector4T<float>::SetXYZ(this_01, (Vector3T*)local_60);
                        uVar20 = math::Colour4FromA8R8G8B8(local_48);
                        fStack_a0 = fVar21;
                        uStack_9c = uVar22;
                        local_a8 = uVar20;
                        new (local_60) math::Float4((Vector4T*)&local_a8);
                        lVar8 = Array<PrimVertPosCol, eastl::allocator>::operator[](
                            (Array<PrimVertPosCol, eastl::allocator>*)uVar3, uVar1);
                        *(undefined8*)(lVar8 + 12) = local_60._0_8_;
                        *(ulong*)(lVar8 + 20) = CONCAT44(local_60._12_4_, local_60._8_4_);
                        uVar18 = uVar18 + 1;
                    } while (uVar18 != 8);
                    lVar8 = local_38 + 1;
                    puVar7 = local_90 + 2;
                    lVar9 = local_88 + 8;
                } while (puVar7 != local_80);
            }
            uVar3 = local_60._16_8_;
            puVar16 = (undefined1*)(local_60._16_8_ + 24);
            local_38 = lVar8;
            pvVar10 = (void*)local_60._16_8_->data();
            puVar16->Update(0, (int)lVar8 * 224, pvVar10);
            this_05 = local_1c8;
            render::DrawCallState::DrawCallState(this_05, param_2);
            pPVar11 = (PrimitiveShaderFamily*)this_05->Instance();
            this_02 = (ShaderProgram*)pPVar11->GetShaderProgram(1);
            this_03 = (RenderPipelineState*)local_1c8->GetRenderPipelineState();
            this_03->SetShaderProgram(this_02);
            new (&local_e8) HashedString("uWorldMat");
            this_02->SetShaderConstMatrix4((HashedString*)&local_e8, 1, PTR_IDENTITY_100ee6730, 1);
            new (&local_e8) HashedString("uViewProjMat");
            pMVar12 = (Matrix44T*)param_3->GetImmediateThreadPool();
            this_02->SetShaderConstMatrix4((HashedString*)&local_e8, 1, pMVar12, 1);
            if ((char)local_3c == '\0') {
                pVVar13 = (VertexDeclaration*)this_02->second();
                pVVar14 = (VertexBuffer*)puVar16->CurrentBuffer();
                puVar16 = (undefined1*)(uVar3 + 288);
                puVar16->SetVertexStreamData(pVVar13, pVVar14);
                iVar17 = 36;
                local_1c8->SetInputAssemblerState(puVar16);
            } else {
                pVVar13 = (VertexDeclaration*)this_02->second();
                pVVar14 = (VertexBuffer*)puVar16->CurrentBuffer();
                puVar16 = (undefined1*)(uVar3 + 480);
                puVar16->SetVertexStreamData(pVVar13, pVVar14);
                iVar17 = 24;
                local_1c8->SetInputAssemblerState(puVar16);
            }
            iVar15 = (int)local_38;
            lVar8 = local_1c8->second();
            *(int*)(lVar8 + 12) = iVar15 * iVar17;
            this_04 = (CoordMapSquare*)local_1c8->GetInputAssemblerState();
            uVar5 = this_04->GetX();
            lVar8 = local_1c8->second();
            uVar22 = *(undefined4*)(lVar8 + 12);
            lVar8 = local_1c8->second();
            param_1->DrawIndexedPrimitives(local_1c8, uVar5, uVar22, *(undefined4*)(lVar8 + 16));
            local_1c8->~DrawCallState();
        }
    }

    // 0x1009bf210, 16 bytes, placed by class name and debug map
    // DebugAABBRender::OnEndFrame()
    void DebugAABBRender::OnEndFrame() {
        (&field_24)->RotateBuffers();
    }

} // namespace jag

namespace jag::graphicutils {
    // 0x1009bec70, 144 bytes, inline, placed by debug map only (low confidence)
    // void CreateCubeSharedLineListIndices<unsigned short>(unsigned short*, unsigned short)
    void CreateCubeSharedLineListIndices<unsigned short>(ushort* param_1, ushort param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8* puVar6;
        long lVar7;
        undefined1 local_50[48];

        if (param_1 == (ushort*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pIndexDataOut",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createprimitive/CreateCube.h",
                      94, (char*)0);
        }
        math::BOX_EDGE_LINE_INDICES<unsigned short>((math*)local_50);
        puVar6 = (undefined8*)local_50->data();
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        uVar4 = puVar6[4];
        uVar5 = puVar6[5];
        *(undefined8*)param_1 = *puVar6;
        *(undefined8*)(param_1 + 4) = uVar1;
        *(undefined8*)(param_1 + 8) = uVar2;
        *(undefined8*)(param_1 + 12) = uVar3;
        *(undefined8*)(param_1 + 16) = uVar4;
        *(undefined8*)(param_1 + 20) = uVar5;
        lVar7 = 0;
        do {
            param_1[lVar7] = param_1[lVar7] + param_2;
            lVar7 = lVar7 + 1;
        } while (lVar7 != 24);
    }

} // namespace jag::graphicutils
