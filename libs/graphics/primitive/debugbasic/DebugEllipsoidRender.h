// libs/graphics/primitive/debugbasic/DebugEllipsoidRender.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.graphics.primitive.debugbasic

namespace jag {
    class DebugEllipsoidRender {
    public:
        DebugEllipsoidRender(int);
        CreateRenderingResources();
        void DestroyRenderingResources();
        void Render(render::RenderContext&, render::DrawCallState const&, ViewTransforms const&,
                    eastl::vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>, eastl::allocator> const&,
                    bool);
        void OnEndFrame();
        ~DebugEllipsoidRender();

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

    // 0x1009c1ea0, 400 bytes, base-object constructor, placed by class name
    // DebugEllipsoidRender::DebugEllipsoidRender(int)
    void DebugEllipsoidRender::DebugEllipsoidRender(int param_1) {
        uint* puVar1;
        uint* puVar2;
        uint uVar3;
        Vector3T* pVVar4;

        new (this) Array<PrimVertPosCol, eastl::allocator>();
        new (&field_24) Array<PrimVertPosCol, eastl::allocator>();
        new (&field_48) render::DynamicBuffer<render::VertexBuffer>();
        new (&field_136) render::IndexBuffer();
        new (&field_224) render::IndexBuffer();
        new (field_312) render::InputAssemblerState();
        new (field_504) render::InputAssemblerState();
        puVar1 = &field_696;
        field_696 = 30;
        field_700 = 30;
        puVar2 = &field_700;
        graphicutils::GetSphereHorzVertSegCount(puVar1, puVar2, 30);
        uVar3 = graphicutils::GetSphereVertexCount(*puVar1, *puVar2);
        (&field_24, (ulong)(param_1 * uVar3), 0)->set_max_size();
        set_max_size((ulong)uVar3, 0);
        pVVar4 = (Vector3T*)Array<PrimVertPosCol, eastl::allocator>::operator[](
            (Array<PrimVertPosCol, eastl::allocator>*)this, 0);
        graphicutils::CreateSphereVertices(pVVar4, (Vector3T*)0, (Vector2T*)0, 28, *puVar1, *puVar2);
        CreateRenderingResources(this);
    }

    // 0x1009c2030, 576 bytes, placed by class name
    // DebugEllipsoidRender::CreateRenderingResources()
    undefined8 DebugEllipsoidRender::CreateRenderingResources() {
        byte bVar1;
        uint uVar2;
        ulong uVar3;
        uint* puVar4;
        undefined8 uVar5;
        undefined1* puVar6;
        ulong uVar7;
        int iVar8;
        ulong uVar9;
        ulong uVar10;
        Array<unsigned int, eastl::allocator> local_58[24];
        int local_40;
        uint local_3c;
        int local_38;
        byte local_31;

        uVar2 = graphicutils::GetSphereVertexCount(field_696, field_700);
        uVar3 = (&field_24)->end();
        uVar7 = 0;
        uVar3 = uVar3 / uVar2;
        local_3c = uVar2;
        local_38 = graphicutils::GetSphereTriListIndexCount(field_696, field_700);
        iVar8 = (int)uVar3;
        Array<unsigned int, eastl::allocator>::Array(local_58, (ulong)(uint)(local_38 * iVar8));
        if (0 < iVar8) {
            uVar2 = 0;
            uVar9 = 0;
            do {
                puVar4 = (uint*)Array<unsigned int, eastl::allocator>::operator[](local_58, uVar7);
                graphicutils::CreateSphereTriListIndices<unsigned int>(puVar4, uVar2, field_696, field_700, false);
                uVar9 = uVar9 + 1;
                uVar2 = uVar2 + local_3c;
                uVar7 = (ulong)(uint)((int)uVar7 + local_38);
            } while (uVar9 != (uVar3 & 4294967295));
        }
        local_40 = iVar8 * 4;
        uVar7 = (ulong)(uint)(local_38 * local_40);
        uVar5 = local_58->data();
        local_31 = (&field_136, uVar7, 0, uVar5, 5125)->Create();
        local_58->~Array();
        local_38 = graphicutils::GetSphereLineListIndexCount(field_696, field_700);
        Array<unsigned int, eastl::allocator>::Array(local_58, (ulong)(uint)(local_38 * iVar8));
        if (0 < iVar8) {
            uVar9 = 0;
            uVar7 = 0;
            uVar10 = 0;
            do {
                puVar4 = (uint*)Array<unsigned int, eastl::allocator>::operator[](local_58, uVar9);
                graphicutils::CreateSphereLineListIndices<unsigned int>(puVar4, (uint)uVar7, field_696, field_700);
                uVar10 = uVar10 + 1;
                uVar7 = (ulong)((uint)uVar7 + local_3c);
                uVar9 = (ulong)(uint)((int)uVar9 + local_38);
            } while (uVar10 != (uVar3 & 4294967295));
        }
        iVar8 = local_40 * local_38;
        uVar5 = local_58->data();
        bVar1 = (&field_224, iVar8, 0, uVar5, 5125)->Create();
        bVar1 = local_31 & bVar1;
        local_58->~Array();
        puVar6 = field_312;
        new (puVar6) std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>(4);
        render::InputAssemblerState::SetIndexBuffer((IndexBuffer*)puVar6, (uint)&field_136);
        puVar6->SetFlags(1);
        puVar6 = field_504;
        new (puVar6) std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>(1);
        render::InputAssemblerState::SetIndexBuffer((IndexBuffer*)puVar6, (uint)&field_224);
        puVar6->SetFlags(1);
        return CONCAT71((int7)(uVar7 >> 8), bVar1);
    }

    // 0x1009c2270, 16 bytes, complete-object constructor, placed by class name
    // DebugEllipsoidRender::DebugEllipsoidRender(int): jumps straight to the base-object constructor

    // 0x1009c2480, 80 bytes, placed by class name
    // DebugEllipsoidRender::DestroyRenderingResources()
    void DebugEllipsoidRender::DestroyRenderingResources() {
        field_312->Destroy();
        field_504->Destroy();
        (&field_136)->Destroy();
        (&field_224)->Destroy();
        (&field_48)->Destroy();
    }

    // 0x1009c24d0, 1120 bytes, placed by class name
    // DebugEllipsoidRender::Render(render::RenderContext&, render::DrawCallState const&, ViewTransforms const&, eastl::vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>, eastl::allocator> const&, bool)
    void DebugEllipsoidRender::Render(RenderContext* param_1, DrawCallState* param_2, ViewTransforms* param_3,
                                      vector* param_4, bool param_5) {
        undefined1* puVar1;
        Layout* this_00;
        char cVar2;
        uint uVar3;
        int iVar4;
        undefined4 uVar5;
        undefined8* puVar6;
        vector* pvVar7;
        float* pfVar8;
        Vector3T* pVVar9;
        Vector4T<float>* this_02;
        long lVar10;
        void* pvVar11;
        PrimitiveShaderFamily* pPVar12;
        ShaderProgram* this_03;
        RenderPipelineState* this_04;
        Matrix44T* pMVar13;
        VertexDeclaration* pVVar14;
        VertexBuffer* pVVar15;
        CoordMapSquare* this_05;
        int iVar16;
        math* this_06;
        math* pmVar17;
        undefined3 in_register_00000089;
        ulong uVar18;
        undefined8 uVar19;
        float fVar20;
        undefined4 uVar21;
        undefined8 local_118;
        float fStack_110;
        undefined4 uStack_10c;
        Matrix44T local_108;
        undefined8* local_c8;
        undefined8* local_c0;
        undefined1 local_98[92];
        float local_3c;
        undefined4 local_38;
        int local_34;

        cVar2 = param_4->empty();
        if (cVar2 == '\0') {
            pmVar17 = (math*)(ulong)field_700;
            local_38 = CONCAT31(in_register_00000089, param_5);
            uVar3 = graphicutils::GetSphereVertexCount(field_696, field_700);
            uVar18 = (ulong)uVar3;
            puVar6 = (undefined8*)param_4->HeapBeginPtr();
            local_c0 = (undefined8*)param_4->end();
            puVar1 = &field_24;
            local_98._56_8_ = this;
            local_98._64_8_ = uVar18;
            local_98._72_8_ = puVar1;
            if (puVar6 == local_c0) {
                local_34 = 0;
            } else {
                lVar10 = 0;
                local_34 = 0;
                local_98._48_8_ = uVar18;
                do {
                    this_06 = (math*)local_98;
                    pVVar9 = (Vector3T*)*puVar6;
                    local_98._84_4_ = *(undefined4*)(pVVar9 + 24);
                    this_00 = (Layout*)(pVVar9 + 12);
                    local_c8 = puVar6;
                    local_98._40_8_ = lVar10;
                    pvVar7 = eastl::string::Layout::SSOBeginPtr(this_00, (type*)pmVar17);
                    local_98._88_4_ = *(undefined4*)pvVar7;
                    pfVar8 = (float*)this_00->y();
                    local_3c = *pfVar8;
                    pfVar8 = (float*)this_00->second();
                    uVar21 = 0;
                    fVar20 = local_3c;
                    math::Matrix33Scaling<float>(this_06, (float)local_98._88_4_, local_3c, *pfVar8);
                    new (&local_108) math::Matrix44T<float>(this_06, pVVar9);
                    if (0 < (int)local_98._64_4_) {
                        uVar18 = 0;
                        do {
                            pVVar9 = (Vector3T*)Array<PrimVertPosCol, eastl::allocator>::operator[](
                                (Array<PrimVertPosCol, eastl::allocator>*)local_98._56_8_, uVar18);
                            local_98._0_8_ = math::operator*(pVVar9, &local_108);
                            this_06 = (math*)(long)(local_98._40_4_ + (int)uVar18);
                            local_98._8_4_ = fVar20;
                            this_02 = (Vector4T<float>*)Array<PrimVertPosCol, eastl::allocator>::operator[](
                                (Array<PrimVertPosCol, eastl::allocator>*)puVar1, (ulong)this_06);
                            math::Vector4T<float>::SetXYZ(this_02, (Vector3T*)local_98);
                            uVar19 = math::Colour4FromA8R8G8B8(local_98._84_4_);
                            fStack_110 = fVar20;
                            uStack_10c = uVar21;
                            local_118 = uVar19;
                            new (local_98) math::Float4((Vector4T*)&local_118);
                            lVar10 = Array<PrimVertPosCol, eastl::allocator>::operator[](
                                (Array<PrimVertPosCol, eastl::allocator>*)puVar1, (ulong)this_06);
                            *(undefined8*)(lVar10 + 12) = local_98._0_8_;
                            *(ulong*)(lVar10 + 20) = CONCAT44(local_98._12_4_, local_98._8_4_);
                            uVar18 = uVar18 + 1;
                        } while (local_98._48_8_ != uVar18);
                    }
                    local_34 = local_34 + 1;
                    puVar6 = local_c8 + 2;
                    lVar10 = local_98._40_8_ + local_98._48_8_;
                    pmVar17 = this_06;
                } while (puVar6 != local_c0);
            }
            uVar19 = local_98._56_8_;
            puVar1 = (undefined1*)(local_98._56_8_ + 48);
            iVar16 = local_98._64_4_ * local_34;
            pvVar11 = (void*)local_98._72_8_->data();
            puVar1->Update(0, iVar16 * 28, pvVar11);
            pMVar13 = &local_108;
            new (pMVar13) render::DrawCallState(param_2);
            pPVar12 = (PrimitiveShaderFamily*)pMVar13->Instance();
            this_03 = (ShaderProgram*)pPVar12->GetShaderProgram(1);
            this_04 = (RenderPipelineState*)local_108.GetRenderPipelineState();
            this_04->SetShaderProgram(this_03);
            new (local_98) HashedString("uWorldMat");
            this_03->SetShaderConstMatrix4(local_98, 1, PTR_IDENTITY_100ee6730, 1);
            new (local_98) HashedString("uViewProjMat");
            pMVar13 = (Matrix44T*)param_3->GetImmediateThreadPool();
            this_03->SetShaderConstMatrix4(local_98, 1, pMVar13, 1);
            if ((char)local_38 == '\0') {
                pVVar14 = (VertexDeclaration*)this_03->second();
                pVVar15 = (VertexBuffer*)puVar1->CurrentBuffer();
                ((uVar19 + 312))->SetVertexStreamData(pVVar14, pVVar15);
                local_108.SetInputAssemblerState((InputAssemblerState*)(uVar19 + 312));
                iVar16 = graphicutils::GetSphereTriListIndexCount(*(uint*)(uVar19 + 696), *(uint*)(uVar19 + 700));
                iVar16 = iVar16 * local_34;
            } else {
                pVVar14 = (VertexDeclaration*)this_03->second();
                pVVar15 = (VertexBuffer*)puVar1->CurrentBuffer();
                ((uVar19 + 504))->SetVertexStreamData(pVVar14, pVVar15);
                local_108.SetInputAssemblerState((InputAssemblerState*)(uVar19 + 504));
                iVar4 = param_4->size();
                iVar16 = graphicutils::GetSphereLineListIndexCount(*(uint*)(uVar19 + 696), *(uint*)(uVar19 + 700));
                iVar16 = iVar16 * iVar4;
            }
            lVar10 = local_108.second();
            *(int*)(lVar10 + 12) = iVar16;
            this_05 = (CoordMapSquare*)local_108.GetInputAssemblerState();
            uVar5 = this_05->GetX();
            lVar10 = local_108.second();
            uVar21 = *(undefined4*)(lVar10 + 12);
            lVar10 = local_108.second();
            param_1->DrawIndexedPrimitives(&local_108, uVar5, uVar21, *(undefined4*)(lVar10 + 16));
            local_108.~DrawCallState();
        }
    }

    // 0x1009c2930, 16 bytes, placed by class name
    // DebugEllipsoidRender::OnEndFrame()
    void DebugEllipsoidRender::OnEndFrame() {
        (&field_48)->RotateBuffers();
    }

    // 0x1009c92f0, 16 bytes, complete-object destructor, inline, placed by class name
    // DebugEllipsoidRender::~DebugEllipsoidRender(): jumps straight to the base-object destructor

    // 0x1009cd0f0, 96 bytes, base-object destructor, inline, placed by class name
    // DebugEllipsoidRender::~DebugEllipsoidRender()
    void DebugEllipsoidRender::~DebugEllipsoidRender() {
        field_504->~InputAssemblerState();
        field_312->~InputAssemblerState();
        (&field_224)->~IndexBuffer();
        (&field_136)->~IndexBuffer();
        (&field_48)->~DynamicBuffer();
        (&field_24)->~Array();
        ~Array();
    }

} // namespace jag

namespace jag::graphicutils {
    // 0x1009c2280, 512 bytes, inline, placed by debug map only (low confidence)
    // void CreateSphereLineListIndices<unsigned int>(unsigned int*, unsigned int, unsigned int, unsigned int)
    void CreateSphereLineListIndices<unsigned int>(uint* param_1, uint param_2, uint param_3, uint param_4) {
        uint uVar1;
        uint* puVar2;
        uint* puVar3;
        uint* puVar4;
        ulong uVar5;
        uint uVar6;
        int iVar7;
        uint uVar8;
        uint uVar9;
        int iVar10;
        uint uVar11;
        uint local_4c;
        uint local_48;
        uint local_44;
        uint local_40;
        uint local_3c;
        int local_38;

        if (param_1 == (uint*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pIndexDataOut",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "createprimitive/CreateSphere.h",
                      123, (char*)0);
        }
        uVar1 = GetSphereVertexCount(param_3, param_4);
        if (param_1 != (uint*)0) {
            puVar2 = param_1;
            if (param_3 == 0) {
                uVar11 = 0;
            } else {
                local_44 = uVar1 - 1;
                local_38 = param_4 * 2;
                uVar6 = 0;
                uVar11 = 0;
                do {
                    uVar6 = uVar6 + 1;
                    if (param_4 != 0) {
                        local_40 = uVar11;
                        local_3c = uVar6;
                        uVar9 = 0;
                        uVar11 = param_4;
                        do {
                            uVar8 = uVar6;
                            puVar3 = puVar2;
                            *puVar3 = uVar9;
                            puVar3[1] = uVar8;
                            local_4c = uVar8 + param_3;
                            local_48 = local_44;
                            puVar4 = std::min<unsigned int>(&local_4c, &local_48);
                            if (uVar1 <= *puVar4) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("nextVertex < vertexCount",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/graphicutils/createprimitive/CreateSphere.h",
                                          147, (char*)0);
                            }
                            uVar11 = uVar11 - 1;
                            puVar2 = puVar3 + 2;
                            uVar6 = *puVar4;
                            uVar9 = uVar8;
                        } while (uVar11 != 0);
                        puVar2 = puVar3 + 2;
                        uVar11 = local_40 + local_38;
                        uVar6 = local_3c;
                    }
                } while (uVar6 != param_3);
            }
            uVar1 = param_2;
            if (param_4 != 1) {
                iVar10 = 0;
                iVar7 = 0;
                do {
                    if (param_3 != 0) {
                        uVar6 = iVar7 * param_3 + 1;
                        uVar9 = param_3;
                        do {
                            *puVar2 = uVar6;
                            uVar6 = iVar10 + uVar9;
                            puVar2[1] = uVar6;
                            puVar2 = puVar2 + 2;
                            uVar9 = uVar9 - 1;
                        } while (uVar9 != 0);
                        uVar11 = uVar11 + param_3 * 2;
                    }
                    iVar7 = iVar7 + 1;
                    iVar10 = iVar10 + param_3;
                } while (iVar7 != param_4 - 1);
            }
            uVar6 = GetSphereLineListIndexCount(param_3, param_4);
            if (uVar11 != uVar6) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "indexCount == static_cast<IndexType>(GetSphereLineListIndexCount(horzSegments, vertSegments))",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                    "createprimitive/CreateSphere.h",
                    171, (char*)0);
            }
            if (uVar11 != 0) {
                uVar5 = 0;
                do {
                    param_1[uVar5] = param_1[uVar5] + uVar1;
                    uVar5 = uVar5 + 1;
                } while (uVar11 != uVar5);
            }
        }
    }

} // namespace jag::graphicutils
