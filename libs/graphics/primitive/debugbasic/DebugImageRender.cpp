// libs/graphics/primitive/debugbasic/DebugImageRender.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.primitive.debugbasic

#include "DebugImageRender.h"

namespace jag {
    // 0x1009c2940
    DebugImageRender::DebugImageRender(int arg1, int arg2, int arg3) : Array<PrimVertPosUVCol>() {
        field_24 = arg3 * 16 + arg1 + arg2 * 6;
        field_28 = 0;
        new (&field_32) render::DynamicBuffer<render::VertexBuffer>();
        new (&field_120) render::IndexBuffer();
        new (field_208) render::InputAssemblerState();
        new (&field_400) render::SamplerState();
        new (&field_464) render::SamplerState();
        set_max_size((long)field_24 << 2, 0);
        CreateRenderingResources();
    }

    // 0x1009c2bc0
    uint64_t DebugImageRender::CreateRenderingResources() {
        if (field_24 < 1) {
            LogAssert("m_MaxQuads > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/primitive/"
                      "debugbasic/DebugImageRender.cpp",
                      25, nullptr);
        }
        int iVar1 = field_24;
        Desc local_78((long)iVar1 * 6);
        graphicutils::CreateQuadListIndices<unsigned short>(local_78, (long)field_24);
        auto arg3 = local_78.data();
        field_120.Create(iVar1 * 12, 0, arg3, 5123);
        uint8_t* this_00 = field_208;
        new (this_00) std::__cxx_atomic_base_impl(4);
        render::InputAssemblerState::SetIndexBuffer(this_00, (unsigned int)&field_120);
        this_00->SetFlags(1);
        local_78 = render::SamplerState::Desc();
        local_78.field_0 = 0;
        local_78.field_4 = 33071;
        local_78.field_8 = 33071;
        local_78.field_12 = 33071;
        local_78.field_16 = 0.0;
        local_78.field_20 = 1.0;
        local_78.field_24 = 512;
        local_78.field_48 = 0.0;
        local_78.field_52 = 0.0;
        field_400.Create(local_78);
        local_78.field_0 = 7;
        local_78.field_4 = 10497;
        local_78.field_8 = 10497;
        local_78.field_12 = 10497;
        field_464.Create(local_78);
        return 1;
    }

    // 0x1009c2d50
    void DebugImageRender::DestroyRenderingResources() {
        field_208->Destroy();
        field_32.Destroy();
        field_120.Destroy();
        render::SamplerState::Destroy();
        render::SamplerState::Destroy();
    }

    // 0x1009c2da0
    void DebugImageRender::RenderImage2DGroup(
        render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
        const render::Viewport& viewport, const math::Matrix44T<float>& matrix44,
        eastl::vector<eastl::pair<DebugImage2D<DebugDataBasic> const*, float>> const& pairs, bool arg6) {
        unsigned int uVar1;
        int iVar4;
        long* plVar5;
        float* pfVar6;
        Vector3T<float>* pVVar7;
        void* arg3;
        PrimitiveShaderFamily* this_00;
        long lVar8;
        ShaderProgram* this_01;
        RenderPipelineState* pRVar9;
        VertexDeclaration* vertexDeclaration;
        VertexBuffer* vertexBuffer;
        SamplerState* samplerState;
        PRIM_SHADER_TYPE pRIM_SHADER_TYPE;
        DynamicBuffer<render::VertexBuffer>* this_02;
        Texture* this_03;
        Texture* pTVar10;
        uint64_t in_register_00000089;
        EntityHighlightState* this_05;
        float fVar11;
        uint32_t uVar12;
        uint64_t local_f8;
        uint64_t local_f0;
        long* local_e8;
        long* local_e0;
        SamplerState* local_b8;
        SamplerState* local_b0;
        DrawCallState local_a8;
        DynamicBuffer<render::VertexBuffer>* local_78;
        InputAssemblerState* local_70;
        Texture* local_68;
        uint8_t local_58[12];
        uint32_t uStack_4c;
        float local_48;
        unsigned int local_44;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_04 =
            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(((uint64_t)in_register_00000089
                                                                                     << 8) |
                                                                                    (uint8_t)arg6);
        bool cVar3 = this_04->empty();
        if (!cVar3) {
            plVar5 = (long*)this_04->HeapBeginPtr();
            local_e0 = (long*)this_04->end();
            if (plVar5 != local_e0) {
                local_78 = (DynamicBuffer<render::VertexBuffer>*)(renderContext.m_immediateContext + 16);
                local_70 = (InputAssemblerState*)(renderContext.m_immediateContext + 192);
                local_b8 = (SamplerState*)(renderContext.m_immediateContext + 448);
                local_b0 = (SamplerState*)(renderContext.m_immediateContext + 384);
                do {
                    pTVar10 = *(Texture**)*plVar5;
                    if (pTVar10 == nullptr) {
                    LAB_1009c2e40:
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/primitive/debugbasic/DebugImageRender.cpp",
                                        222, nullptr);
                    }
                    uVar1 = *(unsigned int*)((long)*plVar5 + 44);
                    iVar4 = pTVar10->GetMaxLineWidth();
                    if ((((iVar4 != 3553) && (iVar4 = pTVar10->GetMaxLineWidth(), iVar4 != 35866)) &&
                         (iVar4 = pTVar10->GetMaxLineWidth(), iVar4 != 37120)) &&
                        (iVar4 = pTVar10->GetMaxLineWidth(), iVar4 != 34037))
                        goto LAB_1009c2e40;
                    this_05 = (EntityHighlightState*)(*plVar5 + 8);
                    local_f8 = *(uint64_t*)(*plVar5 + 24);
                    local_f0 = *(uint64_t*)(*plVar5 + 32);
                    local_68 = pTVar10;
                    pfVar6 = (float*)local_f8.SSOBeginPtr();
                    local_48 = *pfVar6;
                    pfVar6 = (float*)local_f8.y();
                    local_40 = *pfVar6;
                    pfVar6 = (float*)local_f0.SSOBeginPtr();
                    local_38 = *pfVar6;
                    pfVar6 = (float*)local_f0.y();
                    local_3c = *pfVar6;
                    std::swap<float>(local_40, local_3c);
                    local_e8 = plVar5;
                    if (*(char*)(*plVar5 + 40) != '\0') {
                        std::swap<float>(local_40, local_3c);
                    }
                    pVVar7 = &renderContext[(long)*(int*)(renderContext.m_immediateContext + 12) << 2];
                    local_34 = (float)this_05->GetOverbright();
                    local_34 = local_34 * (float)*(int*)(matrix44 + 8);
                    fVar11 = (float)this_05->MaxV();
                    pVVar7->Set(local_34, (float)*(int*)(matrix44 + 12) * fVar11, 1.0);
                    uVar12 = 0;
                    fVar11 = local_3c;
                    ((pVVar7 + 12))->Set(local_48, local_3c);
                    math::Colour4FromA8R8G8B8(uVar1);
                    local_58._8_4_ = fVar11;
                    uStack_4c = uVar12;
                    local_44 = uVar1;
                    local_a8 = math::Float4(*local_58);
                    *(InputAssemblerState**)(pVVar7 + 20) = local_a8.m_pInputAssemblerState;
                    *(RenderPipelineState**)(pVVar7 + 28) = local_a8.m_pRenderPipelineState;
                    pVVar7 = &renderContext[(long)*(int*)(renderContext.m_immediateContext + 12) * 4 + 1];
                    local_34 = (float)this_05->MaxU();
                    local_34 = local_34 * (float)*(int*)(matrix44 + 8);
                    fVar11 = (float)this_05->MaxV();
                    pVVar7->Set(local_34, (float)*(int*)(matrix44 + 12) * fVar11, 1.0);
                    uVar12 = 0;
                    fVar11 = local_3c;
                    ((pVVar7 + 12))->Set(local_38, local_3c);
                    uVar1 = local_44;
                    math::Colour4FromA8R8G8B8(local_44);
                    local_58._8_4_ = fVar11;
                    uStack_4c = uVar12;
                    local_a8 = math::Float4(*local_58);
                    *(InputAssemblerState**)(pVVar7 + 20) = local_a8.m_pInputAssemblerState;
                    *(RenderPipelineState**)(pVVar7 + 28) = local_a8.m_pRenderPipelineState;
                    pVVar7 = &renderContext[(long)*(int*)(renderContext.m_immediateContext + 12) * 4 + 2];
                    local_34 = (float)this_05->MaxU();
                    local_34 = local_34 * (float)*(int*)(matrix44 + 8);
                    fVar11 = (float)this_05->GetAlpha();
                    pVVar7->Set(local_34, (float)*(int*)(matrix44 + 12) * fVar11, 1.0);
                    uVar12 = 0;
                    fVar11 = local_40;
                    ((pVVar7 + 12))->Set(local_38, local_40);
                    math::Colour4FromA8R8G8B8(uVar1);
                    local_58._8_4_ = fVar11;
                    uStack_4c = uVar12;
                    local_a8 = math::Float4(*local_58);
                    *(InputAssemblerState**)(pVVar7 + 20) = local_a8.m_pInputAssemblerState;
                    *(RenderPipelineState**)(pVVar7 + 28) = local_a8.m_pRenderPipelineState;
                    pVVar7 = &renderContext[(long)*(int*)(renderContext.m_immediateContext + 12) * 4 + 3];
                    local_38 = (float)this_05->GetOverbright();
                    local_38 = local_38 * (float)*(int*)(matrix44 + 8);
                    fVar11 = (float)this_05->GetAlpha();
                    pVVar7->Set(local_38, (float)*(int*)(matrix44 + 12) * fVar11, 1.0);
                    uVar12 = 0;
                    fVar11 = local_40;
                    ((pVVar7 + 12))->Set(local_48, local_40);
                    math::Colour4FromA8R8G8B8(local_44);
                    local_58._8_4_ = fVar11;
                    uStack_4c = uVar12;
                    local_a8 = math::Float4(*local_58);
                    *(InputAssemblerState**)(pVVar7 + 20) = local_a8.m_pInputAssemblerState;
                    *(RenderPipelineState**)(pVVar7 + 28) = local_a8.m_pRenderPipelineState;
                    arg3 = &renderContext[(long)*(int*)(renderContext.m_immediateContext + 12) << 2];
                    this_02 = local_78;
                    local_78->Update(0, 144, arg3);
                    pTVar10 = local_68;
                    plVar5 = local_e8;
                    if (*(char*)(*local_e8 + 41) == '\0') {
                        cVar3 = *(char*)(*local_e8 + 42);
                        this_03 = local_68;
                        iVar4 = local_68->GetMaxLineWidth();
                        if (!cVar3) {
                            pRIM_SHADER_TYPE = 8;
                            if (iVar4 != 37120) {
                                this_03 = pTVar10;
                                iVar4 = pTVar10->GetMaxLineWidth();
                                pRIM_SHADER_TYPE = 7;
                                if (iVar4 != 35866) {
                                    lVar8 = pTVar10->second();
                                    pRIM_SHADER_TYPE = (unsigned int)(*(int*)(lVar8 + 12) == 13) * 3 + 6;
                                    this_03 = pTVar10;
                                }
                            }
                            this_00 = (PrimitiveShaderFamily*)this_03->Instance();
                        } else {
                            if (iVar4 != 3553) {
                                LogAssert("pTexture->GetType() == TEXTURE_TYPE_2D",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/primitive/debugbasic/DebugImageRender.cpp",
                                          158, nullptr);
                            }
                            this_00 = (PrimitiveShaderFamily*)this_03->Instance();
                            pRIM_SHADER_TYPE = 15;
                        }
                    } else {
                        this_00 = (PrimitiveShaderFamily*)this_02->Instance();
                        iVar4 = local_68->GetMaxLineWidth();
                        pRIM_SHADER_TYPE = (iVar4 == 37120) + 13;
                    }
                    this_01 = this_00->GetShaderProgram(pRIM_SHADER_TYPE);
                    local_a8 = render::DrawCallState(viewport);
                    pRVar9 = (RenderPipelineState*)local_a8.GetRenderPipelineState();
                    pRVar9->SetShaderProgram(this_01);
                    vertexDeclaration = (VertexDeclaration*)this_01->second();
                    vertexBuffer = (VertexBuffer*)local_78->CurrentBuffer();
                    local_70->SetVertexStreamData(vertexDeclaration, vertexBuffer);
                    local_a8.SetInputAssemblerState(local_70);
                    samplerState = local_b8;
                    if (*(char*)(*plVar5 + 42) == '\0') {
                        samplerState = local_b0;
                    }
                    new (local_58) HashedString("sTexture");
                    iVar4 = this_01->GetConstIndex(*local_58);
                    pRVar9 = (RenderPipelineState*)local_a8.GetRenderPipelineState();
                    pRVar9->SetPSTextureSamplerPair(0, local_68, iVar4, samplerState, false);
                    new (local_58) HashedString("uWorldMat");
                    this_01->SetShaderConstMatrix4(local_58, 1, PTR_IDENTITY_100ee6730, 1);
                    new (local_58) HashedString("uViewProjMat");
                    this_01->SetShaderConstMatrix4(local_58, 1, pairs, 1);
                    drawCallState.DrawIndexedPrimitives(&local_a8, 4, 6, 0);
                    iVar4 = *(int*)(renderContext.m_immediateContext + 12) + 1;
                    if (iVar4 == *(int*)(renderContext.m_immediateContext + 8)) {
                        iVar4 = 0;
                    }
                    *(int*)(renderContext.m_immediateContext + 12) = iVar4;
                    plVar5 = plVar5 + 2;
                } while (plVar5 != local_e0);
            }
        }
    }

    // 0x1009c3500
    void DebugImageRender::RenderImageCubeGroup(
        render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
        const render::Viewport& viewport, const math::Matrix44T<float>& matrix44,
        eastl::vector<eastl::pair<DebugImageCube<DebugDataBasic> const*, float>> const& pairs, bool arg6) {
        uint8_t bVar1;
        EntityHighlightState* entityHighlightState;
        unsigned int arg1;
        int iVar4;
        long* plVar5;
        float* pfVar6;
        Vector3T<float>* pVVar7;
        void* arg3;
        ShaderProgram* this_01;
        RenderPipelineState* pRVar8;
        VertexDeclaration* vertexDeclaration;
        VertexBuffer* vertexBuffer;
        DynamicBuffer<render::VertexBuffer>* this_02;
        uint64_t in_register_00000089;
        Point<float>* this_04;
        long lVar9;
        float fVar10;
        uint32_t uVar11;
        DrawCallState local_150;
        uint64_t local_120;
        uint64_t local_118;
        Vector2T<float>* local_110;
        long* local_e8;
        Point<float> local_e0;
        DynamicBuffer<render::VertexBuffer>* local_d8;
        InputAssemblerState* local_d0;
        EntityHighlightState* local_c8;
        long* local_c0;
        Texture* local_b8;
        long local_b0;
        uint8_t local_a8[12];
        uint32_t uStack_9c;
        float local_90;
        float local_8c;
        float local_88;
        unsigned int local_84;
        RenderContext* local_80;
        float local_78;
        float local_74;
        float local_70;
        float local_6c;
        Point<float> local_68;
        Point<float> local_60;
        Point<float> local_58;
        Point<float> local_50;
        Point<float> local_48;
        Point<float> local_40;

        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_03 =
            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(((uint64_t)in_register_00000089
                                                                                     << 8) |
                                                                                    (uint8_t)arg6);
        if (this_03->empty() == '\0') {
            plVar5 = (long*)this_03->HeapBeginPtr();
            local_e8 = (long*)this_03->end();
            if (plVar5 != local_e8) {
                local_d8 = (DynamicBuffer<render::VertexBuffer>*)(renderContext.m_immediateContext + 16);
                local_d0 = (InputAssemblerState*)(renderContext.m_immediateContext + 192);
                local_80 = renderContext;
                do {
                    local_84 = *(unsigned int*)(*plVar5 + 44);
                    local_b8 = *(Texture**)*plVar5;
                    if (local_b8 == nullptr) {
                    LAB_1009c35cb:
                        LogAssert("pTexture && (pTexture->GetType() == TEXTURE_TYPE_CUBE)",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "primitive/debugbasic/DebugImageRender.cpp",
                                  251, nullptr);
                    }
                    iVar4 = local_b8->GetMaxLineWidth();
                    if (iVar4 != 34067)
                        goto LAB_1009c35cb;
                    local_c8 = (EntityHighlightState*)*plVar5;
                    local_120 = *(uint64_t*)(*plVar5 + 24);
                    local_118 = *(uint64_t*)(*plVar5 + 32);
                    pfVar6 = (float*)local_120.SSOBeginPtr();
                    local_90 = *pfVar6;
                    pfVar6 = (float*)local_120.y();
                    local_78 = *pfVar6;
                    pfVar6 = (float*)local_118.SSOBeginPtr();
                    local_8c = *pfVar6;
                    pfVar6 = (float*)local_118.y();
                    local_88 = *pfVar6;
                    std::swap<float>(local_78, local_88);
                    if (*(char*)(*plVar5 + 40) != '\0') {
                        std::swap<float>(local_78, local_88);
                    }
                    local_c8 = (EntityHighlightState*)((long)local_c8 + 8);
                    local_74 = (float)((*plVar5 + 8))->MaxU();
                    fVar10 = (float)((*plVar5 + 8))->GetOverbright();
                    local_6c = (float)::abs(local_74 - fVar10);
                    local_74 = local_6c * 0.25;
                    local_70 = (float)((*plVar5 + 8))->MaxV();
                    local_c0 = plVar5;
                    fVar10 = (float)((*plVar5 + 8))->GetAlpha();
                    local_70 = (float)::abs(local_70 - fVar10);
                    local_b0 = (((uint64_t)local_b0._4_4_ << 32) | (uint32_t)local_70);
                    local_70 = local_70 * 0.33333334f;
                    this_04 = &local_68;
                    new (this_04) math::Point(local_6c * 0.5, local_70);
                    local_60 = math::Point(0.0, local_70);
                    local_58 = math::Point(local_74, 0.0);
                    local_50 = math::Point(local_74, (float)local_b0 * 0.6666667f);
                    local_48 = math::Point(local_74, local_70);
                    local_40 = math::Point(local_6c * 0.75, local_70);
                    lVar9 = 0;
                    do {
                        entityHighlightState = local_c8;
                        local_b0 = lVar9;
                        local_6c = (float)local_c8->GetOverbright();
                        fVar10 = (float)entityHighlightState->GetAlpha();
                        local_e0 = math::Point(local_6c, fVar10);
                        local_110 = (Vector2T<float>*)this_04;
                        local_e0 += *this_04;
                        pVVar7 = &renderContext[(long)*(int*)(renderContext.m_immediateContext + 12) << 2];
                        pfVar6 = (float*)local_e0.SSOBeginPtr();
                        local_6c = (float)*(int*)(matrix44 + 8) * *pfVar6;
                        pfVar6 = (float*)local_e0.y();
                        pVVar7->Set(local_6c, (float)*(int*)(matrix44 + 12) * (*pfVar6 + local_70), 1.0);
                        uVar11 = 0;
                        fVar10 = local_88;
                        ((pVVar7 + 12))->Set(local_90, local_88);
                        math::Colour4FromA8R8G8B8(local_84);
                        local_a8._8_4_ = fVar10;
                        uStack_9c = uVar11;
                        local_150 = math::Float4(*local_a8);
                        *(InputAssemblerState**)(pVVar7 + 20) = local_150.m_pInputAssemblerState;
                        *(RenderPipelineState**)(pVVar7 + 28) = local_150.m_pRenderPipelineState;
                        pVVar7 =
                            (Vector3T<float>*)(*local_80)[(long)*(int*)(local_80->m_immediateContext + 12) * 4 + 1];
                        pfVar6 = (float*)local_e0.SSOBeginPtr();
                        local_6c = (float)*(int*)(matrix44 + 8) * (*pfVar6 + local_74);
                        pfVar6 = (float*)local_e0.y();
                        pVVar7->Set(local_6c, (float)*(int*)(matrix44 + 12) * (*pfVar6 + local_70), 1.0);
                        uVar11 = 0;
                        fVar10 = local_88;
                        ((pVVar7 + 12))->Set(local_8c, local_88);
                        arg1 = local_84;
                        math::Colour4FromA8R8G8B8(local_84);
                        local_a8._8_4_ = fVar10;
                        uStack_9c = uVar11;
                        local_150 = math::Float4(*local_a8);
                        *(InputAssemblerState**)(pVVar7 + 20) = local_150.m_pInputAssemblerState;
                        *(RenderPipelineState**)(pVVar7 + 28) = local_150.m_pRenderPipelineState;
                        pVVar7 =
                            (Vector3T<float>*)(*local_80)[(long)*(int*)(local_80->m_immediateContext + 12) * 4 + 2];
                        pfVar6 = (float*)local_e0.SSOBeginPtr();
                        local_6c = (float)*(int*)(matrix44 + 8) * (*pfVar6 + local_74);
                        pfVar6 = (float*)local_e0.y();
                        pVVar7->Set(local_6c, (float)*(int*)(matrix44 + 12) * *pfVar6, 1.0);
                        uVar11 = 0;
                        fVar10 = local_78;
                        ((pVVar7 + 12))->Set(local_8c, local_78);
                        math::Colour4FromA8R8G8B8(arg1);
                        local_a8._8_4_ = fVar10;
                        uStack_9c = uVar11;
                        local_150 = math::Float4(*local_a8);
                        *(InputAssemblerState**)(pVVar7 + 20) = local_150.m_pInputAssemblerState;
                        *(RenderPipelineState**)(pVVar7 + 28) = local_150.m_pRenderPipelineState;
                        pVVar7 =
                            (Vector3T<float>*)(*local_80)[(long)*(int*)(local_80->m_immediateContext + 12) * 4 + 3];
                        pfVar6 = (float*)local_e0.SSOBeginPtr();
                        local_6c = (float)*(int*)(matrix44 + 8) * *pfVar6;
                        pfVar6 = (float*)local_e0.y();
                        pVVar7->Set(local_6c, (float)*(int*)(matrix44 + 12) * *pfVar6, 1.0);
                        uVar11 = 0;
                        fVar10 = local_78;
                        ((pVVar7 + 12))->Set(local_90, local_78);
                        renderContext = local_80;
                        math::Colour4FromA8R8G8B8(local_84);
                        local_a8._8_4_ = fVar10;
                        uStack_9c = uVar11;
                        local_150 = math::Float4(*local_a8);
                        *(InputAssemblerState**)(pVVar7 + 20) = local_150.m_pInputAssemblerState;
                        *(RenderPipelineState**)(pVVar7 + 28) = local_150.m_pRenderPipelineState;
                        arg3 = &renderContext[(long)*(int*)(renderContext.m_immediateContext + 12) << 2];
                        this_02 = local_d8;
                        local_d8->Update(0, 144, arg3);
                        bVar1 = *(uint8_t*)(*local_c0 + 41);
                        this_01 = ((PrimitiveShaderFamily*)this_02->Instance())
                                      ->GetShaderProgram((unsigned int)bVar1 * 4 + 12);
                        local_150 = render::DrawCallState(viewport);
                        pRVar8 = (RenderPipelineState*)local_150.GetRenderPipelineState();
                        pRVar8->SetShaderProgram(this_01);
                        vertexDeclaration = (VertexDeclaration*)this_01->second();
                        vertexBuffer = (VertexBuffer*)local_d8->CurrentBuffer();
                        local_d0->SetVertexStreamData(vertexDeclaration, vertexBuffer);
                        local_150.SetInputAssemblerState(local_d0);
                        new (local_a8) HashedString("sTextureCube");
                        iVar4 = this_01->GetConstIndex(*local_a8);
                        pRVar8 = (RenderPipelineState*)local_150.GetRenderPipelineState();
                        lVar9 = local_b0;
                        pRVar8->SetPSTextureSamplerPair(0, local_b8, iVar4, nullptr, false);
                        new (local_a8) HashedString("uWorldMat");
                        this_01->SetShaderConstMatrix4(local_a8, 1, PTR_IDENTITY_100ee6730, 1);
                        new (local_a8) HashedString("uViewProjMat");
                        this_01->SetShaderConstMatrix4(local_a8, 1, pairs, 1);
                        new (local_a8) HashedString("uCubemapFace");
                        this_01->SetShaderConstInt1(local_a8, (int)lVar9);
                        drawCallState.DrawIndexedPrimitives(&local_150, 4, 6, 0);
                        iVar4 = *(int*)(renderContext.m_immediateContext + 12) + 1;
                        if (iVar4 == *(int*)(renderContext.m_immediateContext + 8)) {
                            iVar4 = 0;
                        }
                        *(int*)(renderContext.m_immediateContext + 12) = iVar4;
                        lVar9 = lVar9 + 1;
                        this_04 = (Point<float>*)(local_110 + 8);
                    } while (lVar9 != 6);
                    plVar5 = local_c0 + 2;
                } while (plVar5 != local_e8);
            }
        }
    }

    // 0x1009c3d00
    void DebugImageRender::RenderImage3DGroup(
        render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
        const render::Viewport& viewport, const math::Matrix44T<float>& matrix44,
        eastl::vector<eastl::pair<DebugImage3D<DebugDataBasic> const*, float>> const& pairs, bool arg6) {
        EntityHighlightGlobalState* pEVar1;
        Matrix44T<float>* pMVar2;
        unsigned int arg1;
        int iVar4;
        long* plVar5;
        float* pfVar6;
        long lVar7;
        Vector3T<float>* pVVar8;
        void* arg3;
        ShaderProgram* this_00;
        RenderPipelineState* pRVar9;
        VertexDeclaration* vertexDeclaration;
        VertexBuffer* vertexBuffer;
        uint64_t in_register_00000089;
        float fVar10;
        uint32_t uVar11;
        uint64_t local_118;
        uint64_t local_110;
        DrawCallState local_108;
        long* local_c0;
        DynamicBuffer<render::VertexBuffer>* local_b8;
        InputAssemblerState* local_b0;
        EntityHighlightGlobalState* local_a8;
        long* local_a0;
        uint8_t local_98[12];
        uint32_t uStack_8c;
        float local_84;
        int local_80;
        float local_7c;
        Texture* local_70;
        float local_68[2];
        float local_60;
        float local_5c;
        float local_58;
        int local_54;
        float local_50;
        unsigned int local_4c;
        RenderContext* local_48;
        float local_3c;
        float local_38;
        float local_34;

        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_02 =
            (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(((uint64_t)in_register_00000089
                                                                                     << 8) |
                                                                                    (uint8_t)arg6);
        if (this_02->empty() == '\0') {
            plVar5 = (long*)this_02->HeapBeginPtr();
            local_c0 = (long*)this_02->end();
            if (plVar5 != local_c0) {
                local_b8 = (DynamicBuffer<render::VertexBuffer>*)(renderContext.m_immediateContext + 16);
                local_b0 = (InputAssemblerState*)(renderContext.m_immediateContext + 192);
                local_48 = renderContext;
                do {
                    local_4c = *(unsigned int*)(*plVar5 + 44);
                    local_70 = *(Texture**)*plVar5;
                    if ((local_70 == nullptr) || (iVar4 = local_70->GetMaxLineWidth(), iVar4 != 32879)) {
                        LogAssert("pTexture && (pTexture->GetType() == TEXTURE_TYPE_3D)",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "primitive/debugbasic/DebugImageRender.cpp",
                                  390, nullptr);
                    }
                    local_a8 = (EntityHighlightGlobalState*)(*plVar5 + 8);
                    local_118 = *(uint64_t*)(*plVar5 + 24);
                    local_110 = *(uint64_t*)(*plVar5 + 32);
                    pfVar6 = (float*)local_118.SSOBeginPtr();
                    local_60 = *pfVar6;
                    pfVar6 = (float*)local_118.y();
                    local_3c = *pfVar6;
                    pfVar6 = (float*)local_110.SSOBeginPtr();
                    local_5c = *pfVar6;
                    pfVar6 = (float*)local_110.y();
                    local_50 = *pfVar6;
                    std::swap<float>(local_3c, local_50);
                    local_a0 = plVar5;
                    if (*(char*)(*plVar5 + 40) != '\0') {
                        std::swap<float>(local_3c, local_50);
                    }
                    lVar7 = local_70->second();
                    pEVar1 = local_a8;
                    iVar4 = *(int*)(lVar7 + 8);
                    local_38 = (float)local_a8->GetBrightpassThreshold();
                    local_58 = (float)pEVar1->GetOutlineRadiusAdjustment();
                    local_54 = iVar4;
                    if (0 < iVar4) {
                        local_7c = (float)iVar4;
                        local_38 = local_38 / local_7c;
                        iVar4 = 0;
                        do {
                            pEVar1 = local_a8;
                            local_34 = (float)local_a8->GetOverbright();
                            fVar10 = (float)pEVar1->GetAlpha();
                            new (local_68) math::Point(local_34, fVar10);
                            local_84 = (float)iVar4;
                            local_68[0] = local_38 * local_84 + local_68[0];
                            local_80 = iVar4;
                            pVVar8 = &renderContext[(long)*(int*)(renderContext.m_immediateContext + 12) << 2];
                            pfVar6 = (float*)local_68->SSOBeginPtr();
                            pMVar2 = matrix44;
                            local_34 = (float)*(int*)(matrix44 + 8) * *pfVar6;
                            pfVar6 = (float*)local_68->y();
                            pVVar8->Set(local_34, (float)*(int*)(pMVar2 + 12) * (*pfVar6 + local_58), 1.0);
                            uVar11 = 0;
                            fVar10 = local_50;
                            ((pVVar8 + 12))->Set(local_60, local_50);
                            math::Colour4FromA8R8G8B8(local_4c);
                            local_98._8_4_ = fVar10;
                            uStack_8c = uVar11;
                            local_108 = math::Float4(*local_98);
                            *(InputAssemblerState**)(pVVar8 + 20) = local_108.m_pInputAssemblerState;
                            *(RenderPipelineState**)(pVVar8 + 28) = local_108.m_pRenderPipelineState;
                            pVVar8 =
                                (Vector3T<float>*)(*local_48)[(long)*(int*)(local_48->m_immediateContext + 12) * 4 + 1];
                            pfVar6 = (float*)local_68->SSOBeginPtr();
                            local_34 = (float)*(int*)(pMVar2 + 8) * (*pfVar6 + local_38);
                            pfVar6 = (float*)local_68->y();
                            pVVar8->Set(local_34, (float)*(int*)(pMVar2 + 12) * (*pfVar6 + local_58), 1.0);
                            uVar11 = 0;
                            fVar10 = local_50;
                            ((pVVar8 + 12))->Set(local_5c, local_50);
                            arg1 = local_4c;
                            math::Colour4FromA8R8G8B8(local_4c);
                            local_98._8_4_ = fVar10;
                            uStack_8c = uVar11;
                            local_108 = math::Float4(*local_98);
                            *(InputAssemblerState**)(pVVar8 + 20) = local_108.m_pInputAssemblerState;
                            *(RenderPipelineState**)(pVVar8 + 28) = local_108.m_pRenderPipelineState;
                            pVVar8 =
                                (Vector3T<float>*)(*local_48)[(long)*(int*)(local_48->m_immediateContext + 12) * 4 + 2];
                            pfVar6 = (float*)local_68->SSOBeginPtr();
                            pMVar2 = matrix44;
                            local_34 = (float)*(int*)(matrix44 + 8) * (*pfVar6 + local_38);
                            pfVar6 = (float*)local_68->y();
                            pVVar8->Set(local_34, (float)*(int*)(pMVar2 + 12) * *pfVar6, 1.0);
                            uVar11 = 0;
                            fVar10 = local_3c;
                            ((pVVar8 + 12))->Set(local_5c, local_3c);
                            math::Colour4FromA8R8G8B8(arg1);
                            local_98._8_4_ = fVar10;
                            uStack_8c = uVar11;
                            local_108 = math::Float4(*local_98);
                            *(InputAssemblerState**)(pVVar8 + 20) = local_108.m_pInputAssemblerState;
                            *(RenderPipelineState**)(pVVar8 + 28) = local_108.m_pRenderPipelineState;
                            pVVar8 =
                                (Vector3T<float>*)(*local_48)[(long)*(int*)(local_48->m_immediateContext + 12) * 4 + 3];
                            pfVar6 = (float*)local_68->SSOBeginPtr();
                            pMVar2 = matrix44;
                            local_34 = (float)*(int*)(matrix44 + 8) * *pfVar6;
                            pfVar6 = (float*)local_68->y();
                            pVVar8->Set(local_34, (float)*(int*)(pMVar2 + 12) * *pfVar6, 1.0);
                            uVar11 = 0;
                            fVar10 = local_3c;
                            ((pVVar8 + 12))->Set(local_60, local_3c);
                            renderContext = local_48;
                            math::Colour4FromA8R8G8B8(local_4c);
                            local_98._8_4_ = fVar10;
                            uStack_8c = uVar11;
                            local_108 = math::Float4(*local_98);
                            *(InputAssemblerState**)(pVVar8 + 20) = local_108.m_pInputAssemblerState;
                            *(RenderPipelineState**)(pVVar8 + 28) = local_108.m_pRenderPipelineState;
                            arg3 = (void*)renderContext[(long)*(int*)(renderContext.m_immediateContext + 12) << 2];
                            local_b8->Update(0, 144, arg3);
                            local_108 = render::DrawCallState(viewport);
                            if (*(char*)(*local_a0 + 41) != '\0') {
                                LogAssert("!debugImage3D.first->m_DepthTexture",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/primitive/debugbasic/DebugImageRender.cpp",
                                          453, nullptr);
                            }
                            this_00 = ((PrimitiveShaderFamily*)local_108.Instance())->GetShaderProgram(17);
                            pRVar9 = (RenderPipelineState*)local_108.GetRenderPipelineState();
                            pRVar9->SetShaderProgram(this_00);
                            new (local_98) HashedString("uWorldMat");
                            this_00->SetShaderConstMatrix4(local_98, 1, PTR_IDENTITY_100ee6730, 1);
                            new (local_98) HashedString("uViewProjMat");
                            this_00->SetShaderConstMatrix4(local_98, 1, pairs, 1);
                            new (local_98) HashedString("uSliceZ");
                            this_00->SetShaderConstFloat1(local_98, local_84 / local_7c);
                            vertexDeclaration = (VertexDeclaration*)this_00->second();
                            vertexBuffer = (VertexBuffer*)local_b8->CurrentBuffer();
                            local_b0->SetVertexStreamData(vertexDeclaration, vertexBuffer);
                            local_108.SetInputAssemblerState(local_b0);
                            new (local_98) HashedString("sTexture3D");
                            iVar4 = this_00->GetConstIndex(*local_98);
                            pRVar9 = (RenderPipelineState*)local_108.GetRenderPipelineState();
                            pRVar9->SetPSTextureSamplerPair(0, local_70, iVar4, nullptr, false);
                            drawCallState.DrawIndexedPrimitives(&local_108, 4, 6, 0);
                            iVar4 = *(int*)(renderContext.m_immediateContext + 12) + 1;
                            if (iVar4 == *(int*)(renderContext.m_immediateContext + 8)) {
                                iVar4 = 0;
                            }
                            *(int*)(renderContext.m_immediateContext + 12) = iVar4;
                            iVar4 = local_80 + 1;
                        } while (local_54 != iVar4);
                    }
                    plVar5 = local_a0 + 2;
                } while (plVar5 != local_c0);
            }
        }
    }

    // 0x1009c4430
    void DebugImageRender::OnEndFrame() {
        field_32.RotateBuffers();
        field_28 = 0;
    }

} // namespace jag

// 0x1009c3cf0
unsigned long abs(float arg1) {
    uint32_t in_XMM0_Db;

    return (((uint64_t)in_XMM0_Db << 32) | (uint32_t)arg1) & 9223372034707292159;
}
