// libs/graphics/graphicutils/rendertotexture/RenderToTexture.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.graphicutils

namespace jag::graphicutils {
    class RenderToTextureHelper : public render::RenderDeviceOnEndFrame // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~RenderToTextureHelper();
        virtual void CreateRenderingResources();
        virtual void DestroyRenderingResources();
        void GetQuadVBPos() const;
        uint8_t* GetQuadVBPosUV() const;
        RenderToTextureHelper();
        void RenderTextureToQuad(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                                 const render::RenderTargets* renderTargets, const render::Texture* texture,
                                 const render::SamplerState* samplerState, const render::Viewport* viewport,
                                 int arg7) const;
        void RenderTextureToQuad(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                                 const render::RenderTargets* renderTargets, const render::Texture* texture,
                                 const render::ShaderProgramVariable& shaderProgramVariable,
                                 const render::ShaderProgram& shaderProgram, const render::SamplerState* samplerState,
                                 const render::Viewport* viewport, int arg9) const;
        void RenderTextureToQuadDepth(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                                      const render::RenderTargets* renderTargets, const render::Texture* texture,
                                      float arg5, const render::Viewport* viewport) const;
        void RenderQuad(render::RenderContext& renderContext, render::DrawCallState& drawCallState) const;
        void RenderQuad(render::RenderContext& renderContext) const;

    private:
        uint8_t _unknown_9[239];
        InputAssemblerState field_248;
    };

    // 0x100bb8120
    void RenderToTexture(render::RenderTargets& renderTargets, render::Texture& texture,
                         render::RenderContext& renderContext, const render::DrawCallState& drawCallState, int arg5) {
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* vector;
        PrimitiveShaderFamily* pPVar9;
        ShaderProgram* pSVar10;
        RenderPipelineState* pRVar11;
        InputAssemblerState* pIVar12;
        VertexDeclaration* pVVar13;
        uint8_t local_158[20];
        uint8_t local_144[28];
        uint8_t local_120[28];
        uint8_t local_fc[28];
        uint8_t local_d8[16];

        vector = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)
                     renderTargets.GetColourTargetTextures();
        if (vector->empty() != '\0') {
            LogAssert("!dstTextureRT.GetColourTargetTextures().empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "rendertotexture/RenderToTexture.cpp",
                      21, nullptr);
        }
        new (local_158) math::ColourHSL(-1.0, 1.0, 0.0);
        new ((local_158 + 12)) math::Point(0.0, 1.0);
        IndexBuffer local_208(1.0, 1.0, 1.0, 1.0);
        new (local_144) math::Float4(local_208);
        new ((local_144 + 16)) math::ColourHSL(1.0, 1.0, 0.0);
        Point<float> local_128(1.0, 1.0);
        VertexBuffer local_1a8(1.0, 1.0, 1.0, 1.0);
        new (local_120) math::Float4(local_1a8);
        new ((local_120 + 16)) math::ColourHSL(1.0, -1.0, 0.0);
        Point<float> local_104(1.0, 0.0);
        DrawCallState local_88(1.0, 1.0, 1.0, 1.0);
        new (local_fc) math::Float4(local_88);
        new ((local_fc + 16)) math::ColourHSL(-1.0, -1.0, 0.0);
        Point<float> local_e0(0.0, 0.0);
        new ((local_d8 + 16)) ImVec4(1.0, 1.0, 1.0, 1.0);
        new (local_d8) math::Float4(*((local_d8 + 16)));
        local_1a8 = render::VertexBuffer();
        auto arg3 = local_158->data();
        local_1a8.Create(144, 0, arg3);
        uint16_t local_48 = 3;
        uint32_t local_4c = 33685760;
        local_208 = render::IndexBuffer();
        local_208.Create(6, 0, &local_4c, 5121);
        local_88 = render::DrawCallState(drawCallState);
        auto pvVar4 = renderTargets.GetColourTargetTextures();
        uint64_t* puVar5 = (uint64_t*)(*pvVar4)[0];
        int* piVar6 = (int*)(*puVar5)->second();
        int iVar3 = *piVar6;
        pvVar4 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                     renderTargets.GetColourTargetTextures();
        puVar5 = (uint64_t*)(*pvVar4)[0];
        long lVar7 = (*puVar5)->second();
        new ((local_d8 + 16)) render::Viewport(0, 0, iVar3, *(int*)(lVar7 + 4), 0.0, 1.0);
        auto pOVar8 = local_88.GetOutputMergerState();
        pOVar8->SetViewports((local_d8 + 16), 1);
        pOVar8 = local_88.GetOutputMergerState();
        pOVar8->SetRenderTargets(renderTargets);
        ImVec4 local_a8(0.0, 0.0, 0.0, 1.0);
        pOVar8 = local_88.GetOutputMergerState();
        pOVar8->SetClearColours(&local_a8, 1);
        pOVar8 = local_88.GetOutputMergerState();
        pOVar8->SetClearFlags(
            render::GetDepthTextureClearFlags((Texture*)renderTargets.GetDepthStencilTargetTexture()) | 1);
        pOVar8 = local_88.GetOutputMergerState();
        pOVar8->SetDepthStencilClear(1.0, '\0');
        render::InputAssemblerState::SetIndexBuffer((IndexBuffer*)local_88.GetInputAssemblerState(),
                                                    (unsigned int)&local_208);
        pvVar4 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                     renderTargets.GetColourTargetTextures();
        puVar5 = (uint64_t*)(*pvVar4)[0];
        TextRun* this_00 = (TextRun*)*puVar5;
        iVar3 = this_00->GetMaxLineWidth();
        if (iVar3 < 34067) {
            if (iVar3 != 3553) {
                if (iVar3 == 32879) {
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "graphicutils/rendertotexture/RenderToTexture.cpp",
                                    100, nullptr);
                }
            LAB_100bb874a:
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "graphicutils/rendertotexture/RenderToTexture.cpp",
                                104, nullptr);
            }
        } else {
            if (iVar3 == 34067) {
                if (5 < (unsigned int)arg5) {
                    LogAssert("iCubemapFace >= 0 && iCubemapFace < CUBEFACE_NTYPES",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                              "graphicutils/rendertotexture/RenderToTexture.cpp",
                              82, nullptr);
                }
                pPVar9 = (PrimitiveShaderFamily*)this_00->Instance();
                pSVar10 = pPVar9->GetShaderProgram(12);
                pIVar12 = (InputAssemblerState*)local_88.GetInputAssemblerState();
                pVVar13 = (VertexDeclaration*)pSVar10->second();
                pIVar12->SetVertexStreamData(pVVar13, &local_1a8);
                pRVar11 = (RenderPipelineState*)local_88.GetRenderPipelineState();
                pRVar11->SetShaderProgram(pSVar10);
                local_40 = HashedString("sTextureCube");
                iVar3 = pSVar10->GetConstIndex(local_40);
                pRVar11 = (RenderPipelineState*)local_88.GetRenderPipelineState();
                pRVar11->SetPSTextureSamplerPair(0, texture, iVar3, nullptr, false);
                local_40 = HashedString("uWorldMat");
                pSVar10->SetShaderConstMatrix4(&local_40, 1, PTR_IDENTITY_100ee6730, 1);
                local_40 = HashedString("uViewProjMat");
                pSVar10->SetShaderConstMatrix4(&local_40, 1, PTR_IDENTITY_100ee6730, 1);
                local_40 = HashedString("uCubemapFace");
                pSVar10->SetShaderConstInt1(&local_40, (unsigned int)arg5);
                goto LAB_100bb8715;
            }
            if (iVar3 != 37120)
                goto LAB_100bb874a;
        }
        pPVar9 = (PrimitiveShaderFamily*)this_00->Instance();
        pSVar10 = pPVar9->GetShaderProgram(6);
        pRVar11 = (RenderPipelineState*)local_88.GetRenderPipelineState();
        pRVar11->SetShaderProgram(pSVar10);
        pIVar12 = (InputAssemblerState*)local_88.GetInputAssemblerState();
        pVVar13 = (VertexDeclaration*)pSVar10->second();
        pIVar12->SetVertexStreamData(pVVar13, &local_1a8);
        HashedString local_40("uWorldMat");
        pSVar10->SetShaderConstMatrix4(&local_40, 1, PTR_IDENTITY_100ee6730, 1);
        local_40 = HashedString("uViewProjMat");
        pSVar10->SetShaderConstMatrix4(&local_40, 1, PTR_IDENTITY_100ee6730, 1);
        local_40 = HashedString("sTexture");
        iVar3 = pSVar10->GetConstIndex(local_40);
        pRVar11 = (RenderPipelineState*)local_88.GetRenderPipelineState();
        pRVar11->SetPSTextureSamplerPair(0, texture, iVar3, nullptr, false);
    LAB_100bb8715:
        renderContext.DrawIndexedPrimitives(&local_88, 4, 6, 0);
        renderContext.SetVertexBuffer(nullptr, 0, 0);
        renderContext.SetIndexBuffer(nullptr, 0);
    }

    // 0x100bb8860
    RenderToTextureHelper::RenderToTextureHelper() {
        new (&field_8) render::VertexBuffer();
        new (&field_88) render::VertexBuffer();
        new (&field_168) render::VertexBuffer();
        new (field_248) render::InputAssemblerState();
        CreateRenderingResources();
    }

    // 0x100bb8920
    RenderToTextureHelper::~RenderToTextureHelper() {
        DestroyRenderingResources();
        field_248->~InputAssemblerState();
        field_168.~VertexBuffer();
        field_88.~VertexBuffer();
        field_8.~VertexBuffer();
    }

    // 0x100bb89e0
    void RenderToTextureHelper::RenderTextureToQuad(render::RenderContext& renderContext,
                                                    const render::DrawCallState& drawCallState,
                                                    const render::RenderTargets* renderTargets,
                                                    const render::Texture* texture,
                                                    const render::SamplerState* samplerState,
                                                    const render::Viewport* viewport, int arg7) const {
        int iVar2;
        int* piVar3;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar5;
        uint64_t* puVar6;
        PrimitiveShaderFamily* pPVar7;
        ShaderProgram* pSVar8;
        RenderPipelineState* pRVar9;
        VertexDeclaration* pVVar10;
        long lVar11;
        Layout* this_00;
        DrawCallState* pDVar12;
        PRIM_SHADER_TYPE pRIM_SHADER_TYPE;
        uint8_t local_98[32];

        local_98._24_8_ = renderContext;
        if (texture == nullptr) {
            LogAssert("srcTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "rendertotexture/RenderToTexture.cpp",
                      137, nullptr);
        }
        if (renderTargets == nullptr) {
            LogAssert("dstTextureRT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "rendertotexture/RenderToTexture.cpp",
                      138, nullptr);
        }
        DrawCallState local_78(drawCallState);
        new (local_98) render::Viewport(0, 0, 0, 0, 0.0, 1.0);
        if (viewport == nullptr) {
            pvVar5 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         renderTargets->GetColourTargetTextures();
            puVar6 = (uint64_t*)(*pvVar5)[0];
            piVar3 = (int*)(*puVar6)->second();
            iVar2 = *piVar3;
            pvVar5 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         renderTargets->GetColourTargetTextures();
            puVar6 = (uint64_t*)(*pvVar5)[0];
            lVar11 = (*puVar6)->second();
            new (local_98) render::Viewport(0, 0, iVar2, *(int*)(lVar11 + 4), 0.0, 1.0);
        } else {
            local_98._16_4_ = viewport->field_16;
            local_98._20_4_ = viewport->field_20;
            local_98._0_4_ = viewport->field_0;
            local_98._4_4_ = viewport->field_4;
            local_98._8_4_ = viewport->field_8;
            local_98._12_4_ = viewport->field_12;
        }
        auto pOVar4 = local_78.GetOutputMergerState();
        pOVar4->SetViewports(local_98, 1);
        pOVar4 = local_78.GetOutputMergerState();
        pOVar4->SetRenderTargets(renderTargets);
        RenderTargets* this_02 = renderTargets;
        bool cVar1 = renderTargets->HasColourTargets();
        iVar2 = 3553;
        if (cVar1) {
            pvVar5 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         renderTargets->GetColourTargetTextures();
            puVar6 = (uint64_t*)(*pvVar5)[0];
            this_02 = (RenderTargets*)*puVar6;
            iVar2 = this_02->GetMaxLineWidth();
        }
        if (iVar2 < 36161) {
            if (iVar2 != 3553) {
                if (iVar2 != 34067)
                    goto LAB_100bb8eae;
                if (5 < (unsigned int)arg7) {
                    LogAssert("iCubemapFace >= 0 && iCubemapFace < CUBEFACE_NTYPES",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                              "graphicutils/rendertotexture/RenderToTexture.cpp",
                              211, nullptr);
                }
                pPVar7 = (PrimitiveShaderFamily*)this_02->Instance();
                pSVar8 = pPVar7->GetShaderProgram(12);
                pRVar9 = (RenderPipelineState*)local_78.GetRenderPipelineState();
                pRVar9->SetShaderProgram(pSVar8);
                pVVar10 = (VertexDeclaration*)pSVar8->second();
                field_248->SetVertexStreamData(pVVar10, &field_168);
                local_78.SetInputAssemblerState(field_248);
                local_40 = HashedString("sTextureCube");
                iVar2 = pSVar8->GetConstIndex(local_40);
                pRVar9 = (RenderPipelineState*)local_78.GetRenderPipelineState();
                pRVar9->SetPSTextureSamplerPair(0, texture, iVar2, samplerState, false);
                local_40 = HashedString("uWorldMat");
                pSVar8->SetShaderConstMatrix4(&local_40, 1, PTR_IDENTITY_100ee6730, 1);
                local_40 = HashedString("uViewProjMat");
                pSVar8->SetShaderConstMatrix4(&local_40, 1, PTR_IDENTITY_100ee6730, 1);
                local_40 = HashedString("uCubemapFace");
                pSVar8->SetShaderConstInt1(&local_40, arg7);
                goto LAB_100bb8e92;
            }
        } else if ((iVar2 != 36161) && (iVar2 != 37120)) {
        LAB_100bb8eae:
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                            "graphicutils/rendertotexture/RenderToTexture.cpp",
                            232, nullptr);
        }
        lVar11 = texture->second();
        iVar2 = render::GetFormatDepthBits(*(Format*)(lVar11 + 12));
        if (iVar2 == 0) {
        LAB_100bb8d43:
            iVar2 = texture->GetMaxLineWidth();
            if (iVar2 == 37120) {
                lVar11 = ((MapArea*)texture->Instance())->GetOrigin();
                pRIM_SHADER_TYPE = 8;
                if (*(char*)(lVar11 + 167) == '\0')
                    goto LAB_100bb8d6e;
            } else {
            LAB_100bb8d6e:
                pRIM_SHADER_TYPE = 3;
            }
            pDVar12 = &local_78;
            pOVar4 = (OutputMergerState*)pDVar12->GetRenderPipelineState();
            lVar11 = pDVar12->Instance();
            pOVar4->SetHeapSize((lVar11 + 1080));
        } else {
            lVar11 = renderTargets->GetDepthStencilTargetTexture();
            if (lVar11 == 0)
                goto LAB_100bb8d43;
            pDVar12 = &local_78;
            this_00 = (Layout*)pDVar12->GetRenderPipelineState();
            lVar11 = pDVar12->Instance();
            this_00->SetHeapSize((lVar11 + 720));
            pOVar4 = local_78.GetOutputMergerState();
            pOVar4->SetClearFlags(2);
            pOVar4 = local_78.GetOutputMergerState();
            pOVar4->SetDepthStencilClear(1.0, '\0');
            pRIM_SHADER_TYPE = 11;
        }
        pPVar7 = (PrimitiveShaderFamily*)pOVar4->Instance();
        pSVar8 = pPVar7->GetShaderProgram(pRIM_SHADER_TYPE);
        pRVar9 = (RenderPipelineState*)local_78.GetRenderPipelineState();
        pRVar9->SetShaderProgram(pSVar8);
        pVVar10 = (VertexDeclaration*)pSVar8->second();
        VertexBuffer* vertexBuffer = (VertexBuffer*)&field_168;
        if (pRIM_SHADER_TYPE != 8) {
            vertexBuffer = (VertexBuffer*)&field_88;
        }
        field_248->SetVertexStreamData(pVVar10, vertexBuffer);
        local_78.SetInputAssemblerState(field_248);
        HashedString local_40("uWorldMat");
        pSVar8->SetShaderConstMatrix4(&local_40, 1, PTR_IDENTITY_100ee6730, 1);
        local_40 = HashedString("uViewProjMat");
        pSVar8->SetShaderConstMatrix4(&local_40, 1, PTR_IDENTITY_100ee6730, 1);
        local_40 = HashedString("sTexture");
        iVar2 = pSVar8->GetConstIndex(local_40);
        pRVar9 = (RenderPipelineState*)local_78.GetRenderPipelineState();
        pRVar9->SetPSTextureSamplerPair(0, texture, iVar2, samplerState, false);
    LAB_100bb8e92:
        local_98._24_8_->DrawPrimitives(local_78, 5, 0, 4);
    }

    // 0x100bb8f10
    void RenderToTextureHelper::RenderTextureToQuad(
        render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
        const render::RenderTargets* renderTargets, const render::Texture* texture,
        const render::ShaderProgramVariable& shaderProgramVariable, const render::ShaderProgram& shaderProgram,
        const render::SamplerState* samplerState, const render::Viewport* viewport, int arg9) const {
        int iVar1;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar2;
        uint64_t* puVar3;
        int* piVar4;
        long lVar5;
        VertexDeclaration* vertexDeclaration;
        uint8_t local_58[32];

        local_58._24_8_ = shaderProgramVariable;
        if (texture == nullptr) {
            LogAssert("srcTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "rendertotexture/RenderToTexture.cpp",
                      253, nullptr);
        }
        if (renderTargets == nullptr) {
            LogAssert("dstTextureRT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "rendertotexture/RenderToTexture.cpp",
                      254, nullptr);
        }
        new (local_58) render::Viewport(0, 0, 0, 0, 0.0, 1.0);
        if (viewport == nullptr) {
            pvVar2 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         renderTargets->GetColourTargetTextures();
            puVar3 = (uint64_t*)(*pvVar2)[0];
            piVar4 = (int*)(*puVar3)->second();
            iVar1 = *piVar4;
            pvVar2 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         renderTargets->GetColourTargetTextures();
            puVar3 = (uint64_t*)(*pvVar2)[0];
            lVar5 = (*puVar3)->second();
            new (local_58) render::Viewport(0, 0, iVar1, *(int*)(lVar5 + 4), 0.0, 1.0);
        } else {
            local_58._16_4_ = viewport->field_16;
            local_58._20_4_ = viewport->field_20;
            local_58._0_4_ = viewport->field_0;
            local_58._4_4_ = viewport->field_4;
            local_58._8_4_ = viewport->field_8;
            local_58._12_4_ = viewport->field_12;
        }
        DrawCallState local_88(drawCallState);
        auto pOVar6 = local_88.GetOutputMergerState();
        pOVar6->SetViewports(local_58, 1);
        pOVar6 = local_88.GetOutputMergerState();
        pOVar6->SetRenderTargets(renderTargets);
        auto pRVar7 = local_88.GetRenderPipelineState();
        pRVar7->SetShaderProgram(shaderProgram);
        vertexDeclaration = (VertexDeclaration*)shaderProgram.second();
        field_248->SetVertexStreamData(vertexDeclaration, &field_88);
        local_88.SetInputAssemblerState(field_248);
        iVar1 = shaderProgram.GetConstIndex(*local_58._24_8_);
        pRVar7 = (RenderPipelineState*)local_88.GetRenderPipelineState();
        pRVar7->SetPSTextureSamplerPair(0, texture, iVar1, samplerState, false);
        renderContext.DrawPrimitives(local_88, 5, 0, 4);
    }

    // 0x100bb9100
    void RenderToTextureHelper::RenderTextureToQuadDepth(render::RenderContext& renderContext,
                                                         const render::DrawCallState& drawCallState,
                                                         const render::RenderTargets* renderTargets,
                                                         const render::Texture* texture, float arg5,
                                                         const render::Viewport* viewport) const {
        int iVar1;
        int* piVar2;
        long lVar3;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar5;
        uint64_t* puVar6;
        ShaderProgram* this_01;
        RenderPipelineState* pRVar7;
        VertexDeclaration* vertexDeclaration;
        float* pfVar8;
        PRIM_SHADER_TYPE pRIM_SHADER_TYPE;
        Texture* this_02;
        HashedString local_40;

        if (texture == nullptr) {
            LogAssert("srcTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "rendertotexture/RenderToTexture.cpp",
                      301, nullptr);
        }
        if (renderTargets == nullptr) {
            LogAssert("dstTextureRT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "rendertotexture/RenderToTexture.cpp",
                      302, nullptr);
        }
        DrawCallState local_a8(drawCallState);
        Viewport local_78(0, 0, 0, 0, 0.0, 1.0);
        if (viewport == nullptr) {
            pvVar5 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         renderTargets->GetColourTargetTextures();
            puVar6 = (uint64_t*)(*pvVar5)[0];
            piVar2 = (int*)(*puVar6)->second();
            iVar1 = *piVar2;
            pvVar5 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         renderTargets->GetColourTargetTextures();
            puVar6 = (uint64_t*)(*pvVar5)[0];
            lVar3 = (*puVar6)->second();
            local_78 = render::Viewport(0, 0, iVar1, *(int*)(lVar3 + 4), 0.0, 1.0);
        } else {
            local_78.field_16 = viewport->field_16;
            local_78.field_20 = viewport->field_20;
            local_78.field_0 = viewport->field_0;
            local_78.field_4 = viewport->field_4;
            local_78.field_8 = viewport->field_8;
            local_78.field_12 = viewport->field_12;
        }
        auto pOVar4 = local_a8.GetOutputMergerState();
        pOVar4->SetViewports(&local_78, 1);
        pOVar4 = local_a8.GetOutputMergerState();
        pOVar4->SetRenderTargets(renderTargets);
        pvVar5 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                     renderTargets->GetColourTargetTextures();
        puVar6 = (uint64_t*)(*pvVar5)[0];
        iVar1 = (*puVar6)->GetMaxLineWidth();
        if (iVar1 < 34067) {
            if ((iVar1 == 3553) || (iVar1 == 34037)) {
            LAB_100bb928c:
                this_02 = texture;
                iVar1 = texture->GetMaxLineWidth();
                pRIM_SHADER_TYPE = 4;
                if (iVar1 != 3553) {
                    this_02 = texture;
                    iVar1 = texture->GetMaxLineWidth();
                    pRIM_SHADER_TYPE = iVar1 == 34037 ^ 5;
                }
                this_01 = ((PrimitiveShaderFamily*)this_02->Instance())->GetShaderProgram(pRIM_SHADER_TYPE);
                pRVar7 = (RenderPipelineState*)local_a8.GetRenderPipelineState();
                pRVar7->SetShaderProgram(this_01);
                vertexDeclaration = (VertexDeclaration*)this_01->second();
                field_248->SetVertexStreamData(vertexDeclaration, &field_88);
                local_a8.SetInputAssemblerState(field_248);
                local_40 = HashedString("uWorldMat");
                this_01->SetShaderConstMatrix4(&local_40, 1, PTR_IDENTITY_100ee6730, 1);
                local_40 = HashedString("uViewProjMat");
                this_01->SetShaderConstMatrix4(&local_40, 1, PTR_IDENTITY_100ee6730, 1);
                local_40 = HashedString("uExplicitDepth");
                pfVar8 = std::max<float>(0.0, arg5);
                pfVar8 = std::min<float>(1.0, *pfVar8);
                this_01->SetShaderConstFloat1(&local_40, *pfVar8);
                local_40 = HashedString("sTexture");
                iVar1 = this_01->GetConstIndex(local_40);
                pRVar7 = (RenderPipelineState*)local_a8.GetRenderPipelineState();
                pRVar7->SetPSTextureSamplerPair(0, texture, iVar1, nullptr, false);
                renderContext.DrawPrimitives(local_a8, 5, 0, 4);
                return;
            }
        } else if ((iVar1 == 37120) || (iVar1 == 34067))
            goto LAB_100bb928c;
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                        "rendertotexture/RenderToTexture.cpp",
                        357, nullptr);
    }

} // namespace jag::graphicutils
