// libs/graphics/primitive/debugbasic/DebugImageRender.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.primitive.debugbasic

#include "DebugImageRender.h"

namespace jag {
    // 0x1009c2940, 272 bytes, base-object constructor, placed by class name and debug map
    // DebugImageRender::DebugImageRender(int, int, int)
    void DebugImageRender::DebugImageRender(int param_1, int param_2, int param_3) {
        new (this) Array<PrimVertPosUVCol, eastl::allocator>();
        field_24 = param_3 * 16 + param_1 + param_2 * 6;
        field_28 = 0;
        new (&field_32) render::DynamicBuffer<render::VertexBuffer>();
        new (&field_120) render::IndexBuffer();
        new (field_208) render::InputAssemblerState();
        new (&field_400) render::SamplerState();
        new (&field_464) render::SamplerState();
        set_max_size((long)field_24 << 2, 0);
        CreateRenderingResources(this);
    }

    // 0x1009c2bc0, 368 bytes, placed by class name and debug map
    // DebugImageRender::CreateRenderingResources()
    undefined8 DebugImageRender::CreateRenderingResources() {
        undefined1* this_00;
        int iVar1;
        undefined8 uVar2;
        Desc local_78;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (field_24 < 1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_MaxQuads > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/primitive/"
                      "debugbasic/DebugImageRender.cpp",
                      25, (char*)0);
        }
        iVar1 = field_24;
        new (&local_78) Array<unsigned short, eastl::allocator>((long)iVar1 * 6);
        graphicutils::CreateQuadListIndices<unsigned short>((Array*)&local_78, (long)field_24);
        uVar2 = local_78.data();
        (&field_120, iVar1 * 12, 0, uVar2, 5123)->Create();
        local_78.~Array();
        this_00 = field_208;
        new (this_00) std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>(4);
        render::InputAssemblerState::SetIndexBuffer((IndexBuffer*)this_00, (uint)&field_120);
        this_00->SetFlags(1);
        new (&local_78) render::SamplerState::Desc();
        local_78.field_0 = 0;
        local_78.field_4 = 33071;
        local_78.field_8 = 33071;
        local_78.field_12 = 33071;
        local_78.field_16 = 0.0;
        local_78.field_20 = 1.0;
        local_78.field_24 = 512;
        local_78.field_48 = 0.0;
        local_78.field_52 = 0.0;
        (&field_400, &local_78)->Create();
        local_78.field_0 = 7;
        local_78.field_4 = 10497;
        local_78.field_8 = 10497;
        local_78.field_12 = 10497;
        (&field_464, &local_78)->Create();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return CONCAT71((int7)((ulong) * (long*)PTR____stack_chk_guard_100ee9d98 >> 8), 1);
    }

    // 0x1009c2d40, 16 bytes, complete-object constructor, placed by class name and debug map
    // DebugImageRender::DebugImageRender(int, int, int): jumps straight to the base-object constructor

    // 0x1009c2d50, 80 bytes, placed by class name and debug map
    // DebugImageRender::DestroyRenderingResources()
    void DebugImageRender::DestroyRenderingResources() {
        field_208->Destroy();
        (&field_32)->Destroy();
        (&field_120)->Destroy();
        render::SamplerState::Destroy();
        render::SamplerState::Destroy();
    }

    // 0x1009c2da0, 1728 bytes, placed by class name and debug map
    // DebugImageRender::RenderImage2DGroup(render::RenderContext&, render::DrawCallState const&, render::Viewport const&, math::Matrix44T<float> const&, eastl::vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>, eastl::allocator> const&, bool)
    void DebugImageRender::RenderImage2DGroup(RenderContext* param_1, DrawCallState* param_2, Viewport* param_3,
                                              Matrix44T* param_4, vector* param_5, bool param_6) {
        uint uVar1;
        Matrix44T* pMVar2;
        char cVar3;
        int iVar4;
        long* plVar5;
        vector* pvVar6;
        float* pfVar7;
        Vector3T<float>* pVVar8;
        void* pvVar9;
        PrimitiveShaderFamily* pPVar10;
        long lVar11;
        ShaderProgram* this_00;
        RenderPipelineState* pRVar12;
        VertexDeclaration* pVVar13;
        VertexBuffer* pVVar14;
        SamplerState* pSVar15;
        DynamicBuffer<render::VertexBuffer>* this_01;
        Texture* this_02;
        Texture* pTVar16;
        undefined7 in_register_00000089;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_03;
        EntityHighlightState* this_04;
        float fVar17;
        char* pcVar18;
        undefined4 uVar19;
        undefined8 local_f8;
        undefined8 local_f0;
        long* local_e8;
        long* local_e0;
        Matrix44T* local_d8;
        RenderContext* local_c0;
        SamplerState* local_b8;
        SamplerState* local_b0;
        DrawCallState local_a8;
        DynamicBuffer<render::VertexBuffer>* local_78;
        InputAssemblerState* local_70;
        Texture* local_68;
        undefined1 local_58[12];
        undefined4 uStack_4c;
        float local_48;
        uint local_44;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        this_03 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)CONCAT71(
            in_register_00000089, param_6);
        local_d8 = param_4;
        local_c0 = (RenderContext*)param_2;
        cVar3 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
            this_03);
        if (cVar3 == '\0') {
            plVar5 = (long*)this_03->HeapBeginPtr();
            local_e0 = (long*)this_03->end();
            if (plVar5 != local_e0) {
                local_78 = (DynamicBuffer<render::VertexBuffer>*)(param_1->m_immediateContext + 16);
                local_70 = (InputAssemblerState*)(param_1->m_immediateContext + 192);
                local_b8 = (SamplerState*)(param_1->m_immediateContext + 448);
                local_b0 = (SamplerState*)(param_1->m_immediateContext + 384);
                do {
                    pTVar16 = *(Texture**)*plVar5;
                    if (pTVar16 == (Texture*)0) {
                    LAB_1009c2e40:
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/primitive/debugbasic/DebugImageRender.cpp",
                                        222, (char*)0);
                    }
                    uVar1 = *(uint*)((long)*plVar5 + 44);
                    iVar4 = pTVar16->GetMaxLineWidth();
                    if (iVar4 != 3553) {
                        iVar4 = pTVar16->GetMaxLineWidth();
                        if (iVar4 != 35866) {
                            iVar4 = pTVar16->GetMaxLineWidth();
                            if (iVar4 != 37120) {
                                iVar4 = pTVar16->GetMaxLineWidth();
                                if (iVar4 != 34037)
                                    goto LAB_1009c2e40;
                            }
                        }
                    }
                    this_04 = (EntityHighlightState*)(*plVar5 + 8);
                    local_f8 = *(undefined8*)(*plVar5 + 24);
                    local_f0 = *(undefined8*)(*plVar5 + 32);
                    local_68 = pTVar16;
                    pvVar6 = local_f8.SSOBeginPtr(param_2);
                    local_48 = *(float*)pvVar6;
                    pfVar7 = (float*)local_f8.y();
                    local_40 = *pfVar7;
                    pvVar6 = local_f0.SSOBeginPtr(param_2);
                    local_38 = *(float*)pvVar6;
                    pfVar7 = (float*)local_f0.y();
                    local_3c = *pfVar7;
                    std::swap<float>(&local_40, &local_3c);
                    local_e8 = plVar5;
                    if (*(char*)(*plVar5 + 40) != '\0') {
                        std::swap<float>(&local_40, &local_3c);
                    }
                    pVVar8 = (Vector3T<float>*)Array<PrimVertPosUVCol, eastl::allocator>::operator[](
                        (Array<PrimVertPosUVCol, eastl::allocator>*)param_1,
                        (long)*(int*)(param_1->m_immediateContext + 12) << 2);
                    local_34 = (float)this_04->GetOverbright();
                    pMVar2 = local_d8;
                    local_34 = local_34 * (float)*(int*)&local_d8->field_8;
                    fVar17 = (float)this_04->MaxV();
                    pVVar8->Set(local_34, (float)*(int*)&pMVar2->field_12 * fVar17, 1.0);
                    uVar19 = 0;
                    fVar17 = local_3c;
                    ((pVVar8 + 12))->Set(local_48, local_3c);
                    pcVar18 = (char*)math::Colour4FromA8R8G8B8(uVar1);
                    local_58._8_4_ = fVar17;
                    uStack_4c = uVar19;
                    local_44 = uVar1;
                    local_58._0_8_ = pcVar18;
                    new (&local_a8) math::Float4(local_58);
                    *(InputAssemblerState**)(pVVar8 + 20) = local_a8.m_pInputAssemblerState;
                    *(RenderPipelineState**)(pVVar8 + 28) = local_a8.m_pRenderPipelineState;
                    pVVar8 = (Vector3T<float>*)Array<PrimVertPosUVCol, eastl::allocator>::operator[](
                        (Array<PrimVertPosUVCol, eastl::allocator>*)param_1,
                        (long)*(int*)(param_1->m_immediateContext + 12) * 4 + 1);
                    local_34 = (float)this_04->MaxU();
                    local_34 = local_34 * (float)*(int*)&pMVar2->field_8;
                    fVar17 = (float)this_04->MaxV();
                    pVVar8->Set(local_34, (float)*(int*)&pMVar2->field_12 * fVar17, 1.0);
                    uVar19 = 0;
                    fVar17 = local_3c;
                    ((pVVar8 + 12))->Set(local_38, local_3c);
                    uVar1 = local_44;
                    pcVar18 = (char*)math::Colour4FromA8R8G8B8(local_44);
                    local_58._8_4_ = fVar17;
                    uStack_4c = uVar19;
                    local_58._0_8_ = pcVar18;
                    new (&local_a8) math::Float4(local_58);
                    *(InputAssemblerState**)(pVVar8 + 20) = local_a8.m_pInputAssemblerState;
                    *(RenderPipelineState**)(pVVar8 + 28) = local_a8.m_pRenderPipelineState;
                    pVVar8 = (Vector3T<float>*)Array<PrimVertPosUVCol, eastl::allocator>::operator[](
                        (Array<PrimVertPosUVCol, eastl::allocator>*)param_1,
                        (long)*(int*)(param_1->m_immediateContext + 12) * 4 + 2);
                    local_34 = (float)this_04->MaxU();
                    local_34 = local_34 * (float)*(int*)&pMVar2->field_8;
                    fVar17 = (float)this_04->GetAlpha();
                    pVVar8->Set(local_34, (float)*(int*)&pMVar2->field_12 * fVar17, 1.0);
                    uVar19 = 0;
                    fVar17 = local_40;
                    ((pVVar8 + 12))->Set(local_38, local_40);
                    pcVar18 = (char*)math::Colour4FromA8R8G8B8(uVar1);
                    local_58._8_4_ = fVar17;
                    uStack_4c = uVar19;
                    local_58._0_8_ = pcVar18;
                    new (&local_a8) math::Float4(local_58);
                    *(InputAssemblerState**)(pVVar8 + 20) = local_a8.m_pInputAssemblerState;
                    *(RenderPipelineState**)(pVVar8 + 28) = local_a8.m_pRenderPipelineState;
                    pVVar8 = (Vector3T<float>*)Array<PrimVertPosUVCol, eastl::allocator>::operator[](
                        (Array<PrimVertPosUVCol, eastl::allocator>*)param_1,
                        (long)*(int*)(param_1->m_immediateContext + 12) * 4 + 3);
                    local_38 = (float)this_04->GetOverbright();
                    local_38 = local_38 * (float)*(int*)&pMVar2->field_8;
                    fVar17 = (float)this_04->GetAlpha();
                    pVVar8->Set(local_38, (float)*(int*)&pMVar2->field_12 * fVar17, 1.0);
                    uVar19 = 0;
                    fVar17 = local_40;
                    ((pVVar8 + 12))->Set(local_48, local_40);
                    pcVar18 = (char*)math::Colour4FromA8R8G8B8(local_44);
                    local_58._8_4_ = fVar17;
                    uStack_4c = uVar19;
                    local_58._0_8_ = pcVar18;
                    new (&local_a8) math::Float4(local_58);
                    *(InputAssemblerState**)(pVVar8 + 20) = local_a8.m_pInputAssemblerState;
                    *(RenderPipelineState**)(pVVar8 + 28) = local_a8.m_pRenderPipelineState;
                    pvVar9 = (void*)Array<PrimVertPosUVCol, eastl::allocator>::operator[](
                        (Array<PrimVertPosUVCol, eastl::allocator>*)param_1,
                        (long)*(int*)(param_1->m_immediateContext + 12) << 2);
                    this_01 = local_78;
                    local_78->Update(0, 144, pvVar9);
                    pTVar16 = local_68;
                    plVar5 = local_e8;
                    if (*(char*)(*local_e8 + 41) == '\0') {
                        cVar3 = *(char*)(*local_e8 + 42);
                        this_02 = local_68;
                        iVar4 = local_68->GetMaxLineWidth();
                        if (cVar3 == '\0') {
                            cVar3 = '\b';
                            if (iVar4 != 37120) {
                                this_02 = pTVar16;
                                iVar4 = pTVar16->GetMaxLineWidth();
                                cVar3 = '\a';
                                if (iVar4 != 35866) {
                                    lVar11 = pTVar16->second();
                                    cVar3 = (*(int*)(lVar11 + 12) == 13) * '\x03' + '\x06';
                                    this_02 = pTVar16;
                                }
                            }
                            pPVar10 = (PrimitiveShaderFamily*)this_02->Instance();
                        } else {
                            if (iVar4 != 3553) {
                                /* WARNING: Subroutine does not return */
                                LogAssert("pTexture->GetType() == TEXTURE_TYPE_2D",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/primitive/debugbasic/DebugImageRender.cpp",
                                          158, (char*)0);
                            }
                            pPVar10 = (PrimitiveShaderFamily*)this_02->Instance();
                            cVar3 = '\x0f';
                        }
                    } else {
                        pPVar10 = (PrimitiveShaderFamily*)this_01->Instance();
                        iVar4 = local_68->GetMaxLineWidth();
                        cVar3 = (iVar4 == 37120) + '\r';
                    }
                    this_00 = (ShaderProgram*)pPVar10->GetShaderProgram(cVar3);
                    new (&local_a8) render::DrawCallState(param_3);
                    pRVar12 = (RenderPipelineState*)local_a8.GetRenderPipelineState();
                    pRVar12->SetShaderProgram(this_00);
                    pVVar13 = (VertexDeclaration*)this_00->second();
                    pVVar14 = (VertexBuffer*)local_78->CurrentBuffer();
                    local_70->SetVertexStreamData(pVVar13, pVVar14);
                    local_a8.SetInputAssemblerState(local_70);
                    pSVar15 = local_b8;
                    if (*(char*)(*plVar5 + 42) == '\0') {
                        pSVar15 = local_b0;
                    }
                    new (local_58) HashedString("sTexture");
                    iVar4 = this_00->GetConstIndex(local_58);
                    pRVar12 = (RenderPipelineState*)local_a8.GetRenderPipelineState();
                    pRVar12->SetPSTextureSamplerPair(0, local_68, iVar4, pSVar15, false);
                    new (local_58) HashedString("uWorldMat");
                    this_00->SetShaderConstMatrix4(local_58, 1, PTR_IDENTITY_100ee6730, 1);
                    new (local_58) HashedString("uViewProjMat");
                    this_00->SetShaderConstMatrix4(local_58, 1, param_5, 1);
                    param_2 = &local_a8;
                    local_c0->DrawIndexedPrimitives(param_2, 4, 6, 0);
                    local_a8.~DrawCallState();
                    iVar4 = *(int*)(param_1->m_immediateContext + 12) + 1;
                    if (iVar4 == *(int*)(param_1->m_immediateContext + 8)) {
                        iVar4 = 0;
                    }
                    *(int*)(param_1->m_immediateContext + 12) = iVar4;
                    plVar5 = plVar5 + 2;
                } while (plVar5 != local_e0);
            }
        }
    }

    // 0x1009c3500, 2032 bytes, placed by class name and debug map
    // DebugImageRender::RenderImageCubeGroup(render::RenderContext&, render::DrawCallState const&, render::Viewport const&, math::Matrix44T<float> const&, eastl::vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>, eastl::allocator> const&, bool)
    void DebugImageRender::RenderImageCubeGroup(RenderContext* param_1, DrawCallState* param_2, Viewport* param_3,
                                                Matrix44T* param_4, vector* param_5, bool param_6) {
        byte bVar1;
        Matrix44T* pMVar2;
        EntityHighlightState* this;
        uint uVar3;
        int iVar5;
        long* plVar6;
        vector* pvVar7;
        float* pfVar8;
        Vector3T<float>* pVVar9;
        void* pvVar10;
        PrimitiveShaderFamily* pPVar11;
        ShaderProgram* this_00;
        RenderPipelineState* pRVar12;
        VertexDeclaration* pVVar13;
        VertexBuffer* pVVar14;
        type* ptVar15;
        DynamicBuffer<render::VertexBuffer>* this_01;
        undefined7 in_register_00000089;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_02;
        Point<float>* this_03;
        long lVar16;
        float fVar17;
        char* pcVar18;
        undefined4 uVar19;
        DrawCallState local_150;
        undefined8 local_120;
        undefined8 local_118;
        Vector2T* local_110;
        Matrix44T* local_108;
        RenderContext* local_f0;
        long* local_e8;
        Point<float> local_e0[8];
        DynamicBuffer<render::VertexBuffer>* local_d8;
        InputAssemblerState* local_d0;
        EntityHighlightState* local_c8;
        long* local_c0;
        Texture* local_b8;
        long local_b0;
        undefined1 local_a8[12];
        undefined4 uStack_9c;
        float local_90;
        float local_8c;
        float local_88;
        uint local_84;
        RenderContext* local_80;
        float local_78;
        float local_74;
        float local_70;
        float local_6c;
        Point<float> local_68[8];
        Point<float> local_60[8];
        Point<float> local_58[8];
        Point<float> local_50[8];
        Point<float> local_48[8];
        Point<float> local_40[8];
        long local_38;

        this_02 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)CONCAT71(
            in_register_00000089, param_6);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_108 = param_4;
        local_f0 = (RenderContext*)param_2;
        if (eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                this_02) == '\0') {
            plVar6 = (long*)this_02->HeapBeginPtr();
            local_e8 = (long*)this_02->end();
            if (plVar6 != local_e8) {
                local_d8 = (DynamicBuffer<render::VertexBuffer>*)(param_1->m_immediateContext + 16);
                local_d0 = (InputAssemblerState*)(param_1->m_immediateContext + 192);
                local_80 = param_1;
                do {
                    local_84 = *(uint*)(*plVar6 + 44);
                    local_b8 = *(Texture**)*plVar6;
                    if (local_b8 == (Texture*)0) {
                    LAB_1009c35cb:
                        /* WARNING: Subroutine does not return */
                        LogAssert("pTexture && (pTexture->GetType() == TEXTURE_TYPE_CUBE)",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "primitive/debugbasic/DebugImageRender.cpp",
                                  251, (char*)0);
                    }
                    iVar5 = local_b8->GetMaxLineWidth();
                    if (iVar5 != 34067)
                        goto LAB_1009c35cb;
                    local_c8 = (EntityHighlightState*)*plVar6;
                    local_120 = *(undefined8*)(*plVar6 + 24);
                    local_118 = *(undefined8*)(*plVar6 + 32);
                    pvVar7 = local_120.SSOBeginPtr(param_2);
                    local_90 = *(float*)pvVar7;
                    pfVar8 = (float*)local_120.y();
                    local_78 = *pfVar8;
                    pvVar7 = local_118.SSOBeginPtr(param_2);
                    local_8c = *(float*)pvVar7;
                    pfVar8 = (float*)local_118.y();
                    local_88 = *pfVar8;
                    std::swap<float>(&local_78, &local_88);
                    if (*(char*)(*plVar6 + 40) != '\0') {
                        std::swap<float>(&local_78, &local_88);
                    }
                    local_c8 = (EntityHighlightState*)((long)local_c8 + 8);
                    local_74 = (float)((*plVar6 + 8))->MaxU();
                    fVar17 = (float)((*plVar6 + 8))->GetOverbright();
                    local_6c = (float)::abs(local_74 - fVar17);
                    local_74 = local_6c * 0.25;
                    local_70 = (float)((*plVar6 + 8))->MaxV();
                    local_c0 = plVar6;
                    fVar17 = (float)((*plVar6 + 8))->GetAlpha();
                    local_70 = (float)::abs(local_70 - fVar17);
                    local_b0 = CONCAT44(local_b0._4_4_, local_70);
                    local_70 = local_70 * 0.33333334;
                    this_03 = local_68;
                    math::Point<float>::Point(this_03, local_6c * 0.5, local_70);
                    math::Point<float>::Point(local_60, 0.0, local_70);
                    math::Point<float>::Point(local_58, local_74, 0.0);
                    math::Point<float>::Point(local_50, local_74, (float)local_b0 * 0.6666667);
                    math::Point<float>::Point(local_48, local_74, local_70);
                    math::Point<float>::Point(local_40, local_6c * 0.75, local_70);
                    lVar16 = 0;
                    do {
                        this = local_c8;
                        local_b0 = lVar16;
                        local_6c = (float)local_c8->GetOverbright();
                        fVar17 = (float)GetAlpha();
                        math::Point<float>::Point(local_e0, local_6c, fVar17);
                        local_110 = (Vector2T*)this_03;
                        math::Vector2T<float>::operator+=((Vector2T<float>*)local_e0, (Vector2T*)this_03);
                        ptVar15 = (type*)((long)*(int*)(param_1->m_immediateContext + 12) << 2);
                        pVVar9 = (Vector3T<float>*)Array<PrimVertPosUVCol, eastl::allocator>::operator[](
                            (Array<PrimVertPosUVCol, eastl::allocator>*)param_1, (ulong)ptVar15);
                        pvVar7 = local_e0->SSOBeginPtr(ptVar15);
                        pMVar2 = local_108;
                        local_6c = (float)*(int*)&local_108->field_8 * *(float*)pvVar7;
                        pfVar8 = (float*)local_e0->y();
                        pVVar9->Set(local_6c, (float)*(int*)&pMVar2->field_12 * (*pfVar8 + local_70), 1.0);
                        uVar19 = 0;
                        fVar17 = local_88;
                        ((pVVar9 + 12))->Set(local_90, local_88);
                        pcVar18 = (char*)math::Colour4FromA8R8G8B8(local_84);
                        local_a8._8_4_ = fVar17;
                        uStack_9c = uVar19;
                        local_a8._0_8_ = pcVar18;
                        new (&local_150) math::Float4(local_a8);
                        *(InputAssemblerState**)(pVVar9 + 20) = local_150.m_pInputAssemblerState;
                        *(RenderPipelineState**)(pVVar9 + 28) = local_150.m_pRenderPipelineState;
                        ptVar15 = (type*)((long)*(int*)(local_80->m_immediateContext + 12) * 4 + 1);
                        pVVar9 = (Vector3T<float>*)Array<PrimVertPosUVCol, eastl::allocator>::operator[](
                            (Array<PrimVertPosUVCol, eastl::allocator>*)local_80, (ulong)ptVar15);
                        pvVar7 = local_e0->SSOBeginPtr(ptVar15);
                        local_6c = (float)*(int*)&pMVar2->field_8 * (*(float*)pvVar7 + local_74);
                        pfVar8 = (float*)local_e0->y();
                        pVVar9->Set(local_6c, (float)*(int*)&pMVar2->field_12 * (*pfVar8 + local_70), 1.0);
                        uVar19 = 0;
                        fVar17 = local_88;
                        ((pVVar9 + 12))->Set(local_8c, local_88);
                        uVar3 = local_84;
                        pcVar18 = (char*)math::Colour4FromA8R8G8B8(local_84);
                        local_a8._8_4_ = fVar17;
                        uStack_9c = uVar19;
                        local_a8._0_8_ = pcVar18;
                        new (&local_150) math::Float4(local_a8);
                        *(InputAssemblerState**)(pVVar9 + 20) = local_150.m_pInputAssemblerState;
                        *(RenderPipelineState**)(pVVar9 + 28) = local_150.m_pRenderPipelineState;
                        ptVar15 = (type*)((long)*(int*)(local_80->m_immediateContext + 12) * 4 + 2);
                        pVVar9 = (Vector3T<float>*)Array<PrimVertPosUVCol, eastl::allocator>::operator[](
                            (Array<PrimVertPosUVCol, eastl::allocator>*)local_80, (ulong)ptVar15);
                        pvVar7 = local_e0->SSOBeginPtr(ptVar15);
                        local_6c = (float)*(int*)&pMVar2->field_8 * (*(float*)pvVar7 + local_74);
                        pfVar8 = (float*)local_e0->y();
                        pVVar9->Set(local_6c, (float)*(int*)&pMVar2->field_12 * *pfVar8, 1.0);
                        uVar19 = 0;
                        fVar17 = local_78;
                        ((pVVar9 + 12))->Set(local_8c, local_78);
                        pcVar18 = (char*)math::Colour4FromA8R8G8B8(uVar3);
                        local_a8._8_4_ = fVar17;
                        uStack_9c = uVar19;
                        local_a8._0_8_ = pcVar18;
                        new (&local_150) math::Float4(local_a8);
                        *(InputAssemblerState**)(pVVar9 + 20) = local_150.m_pInputAssemblerState;
                        *(RenderPipelineState**)(pVVar9 + 28) = local_150.m_pRenderPipelineState;
                        ptVar15 = (type*)((long)*(int*)(local_80->m_immediateContext + 12) * 4 + 3);
                        pVVar9 = (Vector3T<float>*)Array<PrimVertPosUVCol, eastl::allocator>::operator[](
                            (Array<PrimVertPosUVCol, eastl::allocator>*)local_80, (ulong)ptVar15);
                        pvVar7 = local_e0->SSOBeginPtr(ptVar15);
                        local_6c = (float)*(int*)&pMVar2->field_8 * *(float*)pvVar7;
                        pfVar8 = (float*)local_e0->y();
                        pVVar9->Set(local_6c, (float)*(int*)&pMVar2->field_12 * *pfVar8, 1.0);
                        uVar19 = 0;
                        fVar17 = local_78;
                        ((pVVar9 + 12))->Set(local_90, local_78);
                        param_1 = local_80;
                        pcVar18 = (char*)math::Colour4FromA8R8G8B8(local_84);
                        local_a8._8_4_ = fVar17;
                        uStack_9c = uVar19;
                        local_a8._0_8_ = pcVar18;
                        new (&local_150) math::Float4(local_a8);
                        *(InputAssemblerState**)(pVVar9 + 20) = local_150.m_pInputAssemblerState;
                        *(RenderPipelineState**)(pVVar9 + 28) = local_150.m_pRenderPipelineState;
                        pvVar10 = (void*)Array<PrimVertPosUVCol, eastl::allocator>::operator[](
                            (Array<PrimVertPosUVCol, eastl::allocator>*)param_1,
                            (long)*(int*)(param_1->m_immediateContext + 12) << 2);
                        this_01 = local_d8;
                        local_d8->Update(0, 144, pvVar10);
                        bVar1 = *(byte*)(*local_c0 + 41);
                        pPVar11 = (PrimitiveShaderFamily*)this_01->Instance();
                        this_00 = (ShaderProgram*)pPVar11->GetShaderProgram((uint)bVar1 * 4 + 12);
                        new (&local_150) render::DrawCallState(param_3);
                        pRVar12 = (RenderPipelineState*)local_150.GetRenderPipelineState();
                        pRVar12->SetShaderProgram(this_00);
                        pVVar13 = (VertexDeclaration*)this_00->second();
                        pVVar14 = (VertexBuffer*)local_d8->CurrentBuffer();
                        local_d0->SetVertexStreamData(pVVar13, pVVar14);
                        local_150.SetInputAssemblerState(local_d0);
                        new (local_a8) HashedString("sTextureCube");
                        iVar5 = this_00->GetConstIndex(local_a8);
                        pRVar12 = (RenderPipelineState*)local_150.GetRenderPipelineState();
                        lVar16 = local_b0;
                        pRVar12->SetPSTextureSamplerPair(0, local_b8, iVar5, 0, false);
                        new (local_a8) HashedString("uWorldMat");
                        this_00->SetShaderConstMatrix4(local_a8, 1, PTR_IDENTITY_100ee6730, 1);
                        new (local_a8) HashedString("uViewProjMat");
                        this_00->SetShaderConstMatrix4(local_a8, 1, param_5, 1);
                        new (local_a8) HashedString("uCubemapFace");
                        this_00->SetShaderConstInt1(local_a8, (int)lVar16);
                        param_2 = &local_150;
                        local_f0->DrawIndexedPrimitives(&local_150, 4, 6);
                        local_150.~DrawCallState();
                        iVar5 = *(int*)(param_1->m_immediateContext + 12) + 1;
                        if (iVar5 == *(int*)(param_1->m_immediateContext + 8)) {
                            iVar5 = 0;
                        }
                        *(int*)(param_1->m_immediateContext + 12) = iVar5;
                        lVar16 = lVar16 + 1;
                        this_03 = (Point<float>*)(local_110 + 8);
                    } while (lVar16 != 6);
                    plVar6 = local_c0 + 2;
                } while (plVar6 != local_e8);
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1009c3d00, 1840 bytes, placed by class name and debug map
    // DebugImageRender::RenderImage3DGroup(render::RenderContext&, render::DrawCallState const&, render::Viewport const&, math::Matrix44T<float> const&, eastl::vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>, eastl::allocator> const&, bool)
    void DebugImageRender::RenderImage3DGroup(RenderContext* param_1, DrawCallState* param_2, Viewport* param_3,
                                              Matrix44T* param_4, vector* param_5, bool param_6) {
        EntityHighlightGlobalState* pEVar1;
        Matrix44T* pMVar2;
        uint uVar3;
        int iVar5;
        long* plVar6;
        vector* pvVar7;
        float* pfVar8;
        long lVar9;
        Vector3T<float>* pVVar10;
        void* pvVar11;
        PrimitiveShaderFamily* pPVar12;
        ShaderProgram* this;
        RenderPipelineState* pRVar13;
        VertexDeclaration* pVVar14;
        VertexBuffer* pVVar15;
        DrawCallState* pDVar16;
        type* ptVar17;
        undefined7 in_register_00000089;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;
        float fVar18;
        char* pcVar19;
        undefined4 uVar20;
        undefined8 local_118;
        undefined8 local_110;
        DrawCallState local_108;
        RenderContext* local_c8;
        long* local_c0;
        DynamicBuffer<render::VertexBuffer>* local_b8;
        InputAssemblerState* local_b0;
        EntityHighlightGlobalState* local_a8;
        long* local_a0;
        undefined1 local_98[12];
        undefined4 uStack_8c;
        float local_84;
        int local_80;
        float local_7c;
        Matrix44T* local_78;
        Texture* local_70;
        float local_68[2];
        float local_60;
        float local_5c;
        float local_58;
        int local_54;
        float local_50;
        uint local_4c;
        RenderContext* local_48;
        float local_3c;
        float local_38;
        float local_34;

        this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)CONCAT71(
            in_register_00000089, param_6);
        local_c8 = (RenderContext*)param_2;
        local_78 = param_4;
        if (eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                this_00) == '\0') {
            plVar6 = (long*)this_00->HeapBeginPtr();
            local_c0 = (long*)this_00->end();
            if (plVar6 != local_c0) {
                local_b8 = (DynamicBuffer<render::VertexBuffer>*)(param_1->m_immediateContext + 16);
                local_b0 = (InputAssemblerState*)(param_1->m_immediateContext + 192);
                local_48 = param_1;
                do {
                    local_4c = *(uint*)(*plVar6 + 44);
                    local_70 = *(Texture**)*plVar6;
                    if (local_70 == (Texture*)0) {
                    LAB_1009c3dd1:
                        /* WARNING: Subroutine does not return */
                        LogAssert("pTexture && (pTexture->GetType() == TEXTURE_TYPE_3D)",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "primitive/debugbasic/DebugImageRender.cpp",
                                  390, (char*)0);
                    }
                    iVar5 = local_70->GetMaxLineWidth();
                    if (iVar5 != 32879)
                        goto LAB_1009c3dd1;
                    local_a8 = (EntityHighlightGlobalState*)(*plVar6 + 8);
                    local_118 = *(undefined8*)(*plVar6 + 24);
                    local_110 = *(undefined8*)(*plVar6 + 32);
                    pvVar7 = local_118.SSOBeginPtr(param_2);
                    local_60 = *(float*)pvVar7;
                    pfVar8 = (float*)local_118.y();
                    local_3c = *pfVar8;
                    pvVar7 = local_110.SSOBeginPtr(param_2);
                    local_5c = *(float*)pvVar7;
                    pfVar8 = (float*)local_110.y();
                    local_50 = *pfVar8;
                    pDVar16 = (DrawCallState*)&local_50;
                    param_2 = pDVar16;
                    std::swap<float>(&local_3c, (float*)pDVar16);
                    local_a0 = plVar6;
                    if (*(char*)(*plVar6 + 40) != '\0') {
                        std::swap<float>(&local_3c, (float*)pDVar16);
                        param_2 = pDVar16;
                    }
                    lVar9 = local_70->second();
                    pEVar1 = local_a8;
                    iVar5 = *(int*)(lVar9 + 8);
                    local_38 = (float)local_a8->GetBrightpassThreshold();
                    local_58 = (float)pEVar1->GetOutlineRadiusAdjustment();
                    local_54 = iVar5;
                    if (0 < iVar5) {
                        local_7c = (float)iVar5;
                        local_38 = local_38 / local_7c;
                        iVar5 = 0;
                        do {
                            pEVar1 = local_a8;
                            local_34 = (float)local_a8->GetOverbright();
                            fVar18 = (float)pEVar1->GetAlpha();
                            new (local_68) math::Point<float>(local_34, fVar18);
                            local_84 = (float)iVar5;
                            local_68[0] = local_38 * local_84 + local_68[0];
                            ptVar17 = (type*)((long)*(int*)(param_1->m_immediateContext + 12) << 2);
                            local_80 = iVar5;
                            pVVar10 = (Vector3T<float>*)Array<PrimVertPosUVCol, eastl::allocator>::operator[](
                                (Array<PrimVertPosUVCol, eastl::allocator>*)param_1, (ulong)ptVar17);
                            pvVar7 = local_68->SSOBeginPtr(ptVar17);
                            pMVar2 = local_78;
                            local_34 = (float)*(int*)&local_78->field_8 * *(float*)pvVar7;
                            pfVar8 = (float*)local_68->y();
                            pVVar10->Set(local_34, (float)*(int*)&pMVar2->field_12 * (*pfVar8 + local_58), 1.0);
                            uVar20 = 0;
                            fVar18 = local_50;
                            ((pVVar10 + 12))->Set(local_60, local_50);
                            pcVar19 = (char*)math::Colour4FromA8R8G8B8(local_4c);
                            local_98._8_4_ = fVar18;
                            uStack_8c = uVar20;
                            local_98._0_8_ = pcVar19;
                            new (&local_108) math::Float4(local_98);
                            *(InputAssemblerState**)(pVVar10 + 20) = local_108.m_pInputAssemblerState;
                            *(RenderPipelineState**)(pVVar10 + 28) = local_108.m_pRenderPipelineState;
                            ptVar17 = (type*)((long)*(int*)(local_48->m_immediateContext + 12) * 4 + 1);
                            pVVar10 = (Vector3T<float>*)Array<PrimVertPosUVCol, eastl::allocator>::operator[](
                                (Array<PrimVertPosUVCol, eastl::allocator>*)local_48, (ulong)ptVar17);
                            pvVar7 = local_68->SSOBeginPtr(ptVar17);
                            local_34 = (float)*(int*)&pMVar2->field_8 * (*(float*)pvVar7 + local_38);
                            pfVar8 = (float*)local_68->y();
                            pVVar10->Set(local_34, (float)*(int*)&pMVar2->field_12 * (*pfVar8 + local_58), 1.0);
                            uVar20 = 0;
                            fVar18 = local_50;
                            ((pVVar10 + 12))->Set(local_5c, local_50);
                            uVar3 = local_4c;
                            pcVar19 = (char*)math::Colour4FromA8R8G8B8(local_4c);
                            local_98._8_4_ = fVar18;
                            uStack_8c = uVar20;
                            local_98._0_8_ = pcVar19;
                            new (&local_108) math::Float4(local_98);
                            *(InputAssemblerState**)(pVVar10 + 20) = local_108.m_pInputAssemblerState;
                            *(RenderPipelineState**)(pVVar10 + 28) = local_108.m_pRenderPipelineState;
                            ptVar17 = (type*)((long)*(int*)(local_48->m_immediateContext + 12) * 4 + 2);
                            pVVar10 = (Vector3T<float>*)Array<PrimVertPosUVCol, eastl::allocator>::operator[](
                                (Array<PrimVertPosUVCol, eastl::allocator>*)local_48, (ulong)ptVar17);
                            pvVar7 = local_68->SSOBeginPtr(ptVar17);
                            pMVar2 = local_78;
                            local_34 = (float)*(int*)&local_78->field_8 * (*(float*)pvVar7 + local_38);
                            pfVar8 = (float*)local_68->y();
                            pVVar10->Set(local_34, (float)*(int*)&pMVar2->field_12 * *pfVar8, 1.0);
                            uVar20 = 0;
                            fVar18 = local_3c;
                            ((pVVar10 + 12))->Set(local_5c, local_3c);
                            pcVar19 = (char*)math::Colour4FromA8R8G8B8(uVar3);
                            local_98._8_4_ = fVar18;
                            uStack_8c = uVar20;
                            local_98._0_8_ = pcVar19;
                            new (&local_108) math::Float4(local_98);
                            *(InputAssemblerState**)(pVVar10 + 20) = local_108.m_pInputAssemblerState;
                            *(RenderPipelineState**)(pVVar10 + 28) = local_108.m_pRenderPipelineState;
                            ptVar17 = (type*)((long)*(int*)(local_48->m_immediateContext + 12) * 4 + 3);
                            pVVar10 = (Vector3T<float>*)Array<PrimVertPosUVCol, eastl::allocator>::operator[](
                                (Array<PrimVertPosUVCol, eastl::allocator>*)local_48, (ulong)ptVar17);
                            pvVar7 = local_68->SSOBeginPtr(ptVar17);
                            pMVar2 = local_78;
                            local_34 = (float)*(int*)&local_78->field_8 * *(float*)pvVar7;
                            pfVar8 = (float*)local_68->y();
                            pVVar10->Set(local_34, (float)*(int*)&pMVar2->field_12 * *pfVar8, 1.0);
                            uVar20 = 0;
                            fVar18 = local_3c;
                            ((pVVar10 + 12))->Set(local_60, local_3c);
                            param_1 = local_48;
                            pcVar19 = (char*)math::Colour4FromA8R8G8B8(local_4c);
                            pDVar16 = &local_108;
                            local_98._8_4_ = fVar18;
                            uStack_8c = uVar20;
                            local_98._0_8_ = pcVar19;
                            new (pDVar16) math::Float4(local_98);
                            *(InputAssemblerState**)(pVVar10 + 20) = local_108.m_pInputAssemblerState;
                            *(RenderPipelineState**)(pVVar10 + 28) = local_108.m_pRenderPipelineState;
                            pvVar11 = (void*)Array<PrimVertPosUVCol, eastl::allocator>::operator[](
                                (Array<PrimVertPosUVCol, eastl::allocator>*)param_1,
                                (long)*(int*)(param_1->m_immediateContext + 12) << 2);
                            local_b8->Update(0, 144, pvVar11);
                            render::DrawCallState::DrawCallState(pDVar16, (DrawCallState*)param_3);
                            if (*(char*)(*local_a0 + 41) != '\0') {
                                /* WARNING: Subroutine does not return */
                                LogAssert("!debugImage3D.first->m_DepthTexture",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/primitive/debugbasic/DebugImageRender.cpp",
                                          453, (char*)0);
                            }
                            pPVar12 = (PrimitiveShaderFamily*)pDVar16->Instance();
                            this = (ShaderProgram*)pPVar12->GetShaderProgram(17);
                            pRVar13 = (RenderPipelineState*)local_108.GetRenderPipelineState();
                            pRVar13->SetShaderProgram(this);
                            new (local_98) HashedString("uWorldMat");
                            SetShaderConstMatrix4(local_98, 1, PTR_IDENTITY_100ee6730, 1);
                            new (local_98) HashedString("uViewProjMat");
                            SetShaderConstMatrix4(local_98, 1, param_5, 1);
                            new (local_98) HashedString("uSliceZ");
                            SetShaderConstFloat1(local_98, local_84 / local_7c);
                            pVVar14 = (VertexDeclaration*)second();
                            pVVar15 = (VertexBuffer*)local_b8->CurrentBuffer();
                            local_b0->SetVertexStreamData(pVVar14, pVVar15);
                            local_108.SetInputAssemblerState(local_b0);
                            new (local_98) HashedString("sTexture3D");
                            iVar5 = GetConstIndex(local_98);
                            pRVar13 = (RenderPipelineState*)local_108.GetRenderPipelineState();
                            pRVar13->SetPSTextureSamplerPair(0, local_70, iVar5, 0, false);
                            param_2 = &local_108;
                            local_c8->DrawIndexedPrimitives(param_2, 4, 6, 0);
                            local_108.~DrawCallState();
                            iVar5 = *(int*)(param_1->m_immediateContext + 12) + 1;
                            if (iVar5 == *(int*)(param_1->m_immediateContext + 8)) {
                                iVar5 = 0;
                            }
                            *(int*)(param_1->m_immediateContext + 12) = iVar5;
                            iVar5 = local_80 + 1;
                        } while (local_54 != iVar5);
                    }
                    plVar6 = local_a0 + 2;
                } while (plVar6 != local_c0);
            }
        }
    }

    // 0x1009c4430, 32 bytes, placed by class name and debug map
    // DebugImageRender::OnEndFrame()
    void DebugImageRender::OnEndFrame() {
        (&field_32)->RotateBuffers();
        field_28 = 0;
    }

} // namespace jag

// 0x1009c3cf0, 16 bytes, placed by neighbouring functions
// abs(float)
ulong abs(float param_1) {
    undefined4 in_XMM0_Db;

    return CONCAT44(in_XMM0_Db, param_1) & 9223372034707292159;
}
