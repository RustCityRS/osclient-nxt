// libs/graphics/primitive/debugbasic/DebugCircle2DRender.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.primitive.debugbasic

#include "DebugCircle2DRender.h"

namespace jag {
    // 0x1009bfdf0, 224 bytes, base-object constructor, placed by class name and debug map
    // DebugCircle2DRender::DebugCircle2DRender(int)
    void DebugCircle2DRender::DebugCircle2DRender(int param_1) {
        new (this) Array<PrimVertPosCol, eastl::allocator>();
        field_24 = param_1;
        field_28 = 0;
        new (&field_32) render::DynamicBuffer<render::VertexBuffer>();
        new (&field_120) render::IndexBuffer();
        new (field_208) render::InputAssemblerState();
        new (&field_400) Array<math::Point<float>, eastl::allocator>();
        set_max_size((long)field_24 * 17, 0);
        CreateRenderingResources(this);
    }

    // 0x1009bfee0, 1168 bytes, placed by class name and debug map
    // DebugCircle2DRender::CreateRenderingResources()
    undefined8 DebugCircle2DRender::CreateRenderingResources() {
        short sVar1;
        short* psVar2;
        undefined2* puVar3;
        ulong uVar4;
        undefined8 uVar5;
        Point<float>* pPVar6;
        short sVar7;
        undefined8 in_RCX;
        uint uVar8;
        ulong uVar9;
        ulong uVar10;
        undefined1* puVar11;
        int iVar12;
        int iVar13;
        Array<unsigned short, eastl::allocator> local_70[24];
        ulong local_58;
        long local_48;
        int local_3c;
        int local_38;
        int local_34;

        if (field_24 < 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_MaxCircles > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/primitive/"
                      "debugbasic/DebugCircle2DRender.cpp",
                      23, (char*)0);
        }
        iVar12 = field_24;
        Array<unsigned short, eastl::allocator>::Array(local_70, (long)iVar12 * 48);
        uVar10 = 0;
        if (0 < field_24) {
            uVar4 = CONCAT62((int6)((ulong)in_RCX >> 16), 2);
            uVar9 = 0;
            local_48 = (long)iVar12;
            do {
                iVar12 = (int)uVar10;
                sVar1 = (short)uVar9 * 17;
                local_3c = (int)uVar9 * 17 + 1;
                local_38 = (int)uVar9 * 17 + 16;
                iVar13 = 0;
                local_34 = (int)uVar4;
                uVar4 = uVar4 & 4294967295;
                local_58 = uVar9;
                do {
                    if ((short)iVar13 == 45) {
                        psVar2 = (short*)Array<unsigned short, eastl::allocator>::operator[](
                            local_70, (ulong)(uint)(iVar12 + iVar13));
                        *psVar2 = sVar1;
                        puVar3 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](
                            local_70, (ulong)(iVar12 + iVar13 + 1));
                        *puVar3 = (short)local_3c;
                        psVar2 = (short*)Array<unsigned short, eastl::allocator>::operator[](
                            local_70, (ulong)(iVar12 + iVar13 + 2));
                        sVar7 = (short)local_38;
                    } else {
                        psVar2 = (short*)Array<unsigned short, eastl::allocator>::operator[](
                            local_70, (ulong)(uint)(iVar12 + iVar13));
                        *psVar2 = sVar1;
                        psVar2 = (short*)Array<unsigned short, eastl::allocator>::operator[](
                            local_70, (ulong)(iVar12 + iVar13 + 1));
                        *psVar2 = (short)uVar4;
                        psVar2 = (short*)Array<unsigned short, eastl::allocator>::operator[](
                            local_70, (ulong)(iVar12 + iVar13 + 2));
                        sVar7 = (short)uVar4 + -1;
                    }
                    *psVar2 = sVar7;
                    iVar13 = iVar13 + 3;
                    uVar4 = (ulong)((int)uVar4 + 1);
                } while ((short)iVar13 != 48);
                uVar8 = (int)local_58 + 1;
                uVar9 = (ulong)uVar8;
                uVar4 = (ulong)(local_34 + 17);
                uVar10 = (ulong)(uint)(iVar12 + iVar13);
            } while ((int)(uVar8 & 65535) < ((DebugCircle2DRender*)this)->field_24);
            uVar10 = (ulong)(uint)(iVar12 + iVar13);
            iVar12 = (int)local_48;
            this = (DebugCircle2DRender*)this;
        }
        uVar4 = local_70->end();
        if (uVar4 != uVar10) {
            /* WARNING: Subroutine does not return */
            LogAssert("shortOffset == circleIndexData.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/primitive/"
                      "debugbasic/DebugCircle2DRender.cpp",
                      49, (char*)0);
        }
        uVar5 = local_70->data();
        (&field_120, iVar12 * 96, 0, uVar5, 5123)->Create();
        local_70->~Array();
        puVar11 = &field_400;
        puVar11->set_max_size(17, 0);
        pPVar6 = (Point<float>*)Array<math::Point<float>, eastl::allocator>::operator[](
            (Array<math::Point<float>, eastl::allocator>*)puVar11, 0);
        math::Point<float>::Point(pPVar6, 0.0, 0.0);
        pPVar6 = (Point<float>*)Array<math::Point<float>, eastl::allocator>::operator[](
            (Array<math::Point<float>, eastl::allocator>*)puVar11, 1);
        math::Point<float>::Point(pPVar6, 0.0, 1.0);
        pPVar6 = (Point<float>*)Array<math::Point<float>, eastl::allocator>::operator[](
            (Array<math::Point<float>, eastl::allocator>*)puVar11, 2);
        math::Point<float>::Point(pPVar6, 0.383, 0.924);
        pPVar6 = (Point<float>*)Array<math::Point<float>, eastl::allocator>::operator[](
            (Array<math::Point<float>, eastl::allocator>*)puVar11, 3);
        math::Point<float>::Point(pPVar6, 0.707, 0.707);
        pPVar6 = (Point<float>*)Array<math::Point<float>, eastl::allocator>::operator[](
            (Array<math::Point<float>, eastl::allocator>*)puVar11, 4);
        math::Point<float>::Point(pPVar6, 0.924, 0.383);
        pPVar6 = (Point<float>*)Array<math::Point<float>, eastl::allocator>::operator[](
            (Array<math::Point<float>, eastl::allocator>*)puVar11, 5);
        math::Point<float>::Point(pPVar6, 1.0, 0.0);
        pPVar6 = (Point<float>*)Array<math::Point<float>, eastl::allocator>::operator[](
            (Array<math::Point<float>, eastl::allocator>*)puVar11, 6);
        math::Point<float>::Point(pPVar6, 0.924, -0.383);
        pPVar6 = (Point<float>*)Array<math::Point<float>, eastl::allocator>::operator[](
            (Array<math::Point<float>, eastl::allocator>*)puVar11, 7);
        math::Point<float>::Point(pPVar6, 0.707, -0.707);
        pPVar6 = (Point<float>*)Array<math::Point<float>, eastl::allocator>::operator[](
            (Array<math::Point<float>, eastl::allocator>*)puVar11, 8);
        math::Point<float>::Point(pPVar6, 0.383, -0.924);
        pPVar6 = (Point<float>*)Array<math::Point<float>, eastl::allocator>::operator[](
            (Array<math::Point<float>, eastl::allocator>*)puVar11, 9);
        math::Point<float>::Point(pPVar6, 0.0, -1.0);
        pPVar6 = (Point<float>*)Array<math::Point<float>, eastl::allocator>::operator[](
            (Array<math::Point<float>, eastl::allocator>*)puVar11, 10);
        math::Point<float>::Point(pPVar6, -0.383, -0.924);
        pPVar6 = (Point<float>*)Array<math::Point<float>, eastl::allocator>::operator[](
            (Array<math::Point<float>, eastl::allocator>*)puVar11, 11);
        math::Point<float>::Point(pPVar6, -0.707, -0.707);
        pPVar6 = (Point<float>*)Array<math::Point<float>, eastl::allocator>::operator[](
            (Array<math::Point<float>, eastl::allocator>*)puVar11, 12);
        math::Point<float>::Point(pPVar6, -0.924, -0.383);
        pPVar6 = (Point<float>*)Array<math::Point<float>, eastl::allocator>::operator[](
            (Array<math::Point<float>, eastl::allocator>*)puVar11, 13);
        math::Point<float>::Point(pPVar6, -1.0, 0.0);
        pPVar6 = (Point<float>*)Array<math::Point<float>, eastl::allocator>::operator[](
            (Array<math::Point<float>, eastl::allocator>*)puVar11, 14);
        math::Point<float>::Point(pPVar6, -0.924, 0.383);
        pPVar6 = (Point<float>*)Array<math::Point<float>, eastl::allocator>::operator[](
            (Array<math::Point<float>, eastl::allocator>*)puVar11, 15);
        math::Point<float>::Point(pPVar6, -0.707, 0.707);
        pPVar6 = (Point<float>*)Array<math::Point<float>, eastl::allocator>::operator[](
            (Array<math::Point<float>, eastl::allocator>*)puVar11, 16);
        math::Point<float>::Point(pPVar6, -0.383, 0.924);
        puVar11 = field_208;
        new (puVar11) std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>(4);
        render::InputAssemblerState::SetIndexBuffer((IndexBuffer*)puVar11, (uint)&field_120);
        puVar11->SetFlags(1);
        return 1;
    }

    // 0x1009c0380, 16 bytes, complete-object constructor, placed by class name and debug map
    // DebugCircle2DRender::DebugCircle2DRender(int): jumps straight to the base-object constructor

    // 0x1009c0550, 64 bytes, placed by class name and debug map
    // DebugCircle2DRender::DestroyRenderingResources()
    void DebugCircle2DRender::DestroyRenderingResources() {
        (&field_32)->Destroy();
        (&field_120)->Destroy();
        field_208->Destroy();
    }

    // 0x1009c0590, 560 bytes, placed by class name and debug map
    // DebugCircle2DRender::RenderCircle2DGroup(render::RenderContext&, render::DrawCallState const&, unsigned int, unsigned int, render::Viewport const&, math::Matrix44T<float> const&, eastl::vector<eastl::pair<DebugCircle2D<DebugDataBasic> const*, float>, eastl::allocator> const&)
    void DebugCircle2DRender::RenderCircle2DGroup(RenderContext* param_1, DrawCallState* param_2, uint param_3,
                                                  uint param_4, Viewport* param_5, Matrix44T* param_6,
                                                  vector* param_7) {
        undefined1* this_00;
        char cVar2;
        int iVar3;
        long* plVar4;
        float* pfVar5;
        PrimVertPosCol* this_01;
        vector* pvVar6;
        Layout* this_02;
        Vector2T<int>* this_03;
        type* ptVar7;
        type* ptVar8;
        undefined8 local_88;
        long* local_80;
        long* local_78;
        undefined1* local_68;
        float local_44;
        uint local_40;
        float local_38;
        float local_34;

        cVar2 = param_7->empty();
        if (cVar2 == '\0') {
            field_28 = 0;
            plVar4 = (long*)param_7->HeapBeginPtr();
            local_78 = (long*)param_7->end();
            if (plVar4 != local_78) {
                this_00 = &field_400;
                local_68 = this_00;
                do {
                    local_40 = *(uint*)(*plVar4 + 16);
                    local_88 = *(undefined8*)*plVar4;
                    local_38 = *(float*)(*plVar4 + 8);
                    local_80 = plVar4;
                    if (*(char*)(*plVar4 + 12) != '\0') {
                        pfVar5 = (float*)local_88.y();
                        local_34 = (float)param_4 - *pfVar5;
                        pfVar5 = (float*)local_88.y();
                        *pfVar5 = local_34;
                    }
                    ptVar8 = (type*)0;
                    do {
                        ptVar7 = (type*)(long)(((DebugCircle2DRender*)this)->field_28 * 17 + (int)ptVar8);
                        this_01 = (PrimVertPosCol*)Array<PrimVertPosCol, eastl::allocator>::operator[](
                            (Array<PrimVertPosCol, eastl::allocator>*)(DebugCircle2DRender*)this, (ulong)ptVar7);
                        pvVar6 = local_88.SSOBeginPtr(ptVar7);
                        local_34 = *(float*)pvVar6;
                        ptVar7 = ptVar8;
                        this_02 = (Layout*)Array<math::Point<float>, eastl::allocator>::operator[](
                            (Array<math::Point<float>, eastl::allocator>*)this_00, (ulong)ptVar8);
                        pvVar6 = eastl::string::Layout::SSOBeginPtr(this_02, ptVar7);
                        local_34 = (float)param_5->field_0 + local_34 + *(float*)pvVar6 * local_38;
                        pfVar5 = (float*)local_88.y();
                        local_44 = *pfVar5;
                        this_03 = (Vector2T<int>*)Array<math::Point<float>, eastl::allocator>::operator[](
                            (Array<math::Point<float>, eastl::allocator>*)this_00, (ulong)ptVar8);
                        pfVar5 = (float*)this_03->y();
                        this_01->Set(local_34, (float)param_5->field_4 + local_44 + *pfVar5 * local_38, 1.0, local_40);
                        this = (DebugCircle2DRender*)this;
                        ptVar8 = ptVar8 + 1;
                    } while (ptVar8 != (type*)17);
                    iVar3 = ((DebugCircle2DRender*)this)->field_28 + 1;
                    ((DebugCircle2DRender*)this)->field_28 = iVar3;
                    if (iVar3 == ((DebugCircle2DRender*)this)->field_24) {
                        RenderBatch((DebugCircle2DRender*)this, param_1, param_2, param_6,
                                    (long)((DebugCircle2DRender*)this)->field_24);
                        field_28 = 0;
                    }
                    plVar4 = local_80 + 2;
                } while (plVar4 != local_78);
            }
            if (0 < (long)field_28) {
                RenderBatch(this, param_1, param_2, param_6, (long)field_28);
                field_28 = 0;
            }
        }
    }

    // 0x1009c0810, 400 bytes, placed by class name
    // DebugCircle2DRender::RenderBatch(render::RenderContext&, render::DrawCallState const&, math::Matrix44T<float> const&, unsigned long)
    void DebugCircle2DRender::RenderBatch(RenderContext* param_1, DrawCallState* param_2, Matrix44T* param_3,
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
            LogAssert("numCircles <= (size_t)m_MaxCircles",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/primitive/"
                      "debugbasic/DebugCircle2DRender.cpp",
                      151, (char*)0);
        }
        pvVar2 = (void*)data();
        (&field_32, 0, (int)param_4 * 476, pvVar2)->Update();
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
        param_1->DrawIndexedPrimitives(&local_80, uVar1, (int)param_4 * 48, 0);
        local_80.~DrawCallState();
    }

    // 0x1009c09a0, 16 bytes, placed by class name
    // DebugCircle2DRender::OnEndFrame()
    void DebugCircle2DRender::OnEndFrame() {
        (&field_32)->RotateBuffers();
    }

} // namespace jag
