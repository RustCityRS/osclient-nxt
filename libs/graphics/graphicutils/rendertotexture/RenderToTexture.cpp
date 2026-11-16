// libs/graphics/graphicutils/rendertotexture/RenderToTexture.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.graphicutils

namespace jag::graphicutils {
    class RenderToTextureHelper : public render::RenderDeviceOnEndFrame // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~RenderToTextureHelper();
        virtual void CreateRenderingResources();
        virtual void DestroyRenderingResources();
        GetQuadVBPos() const;
        GetQuadVBPosUV() const;
        RenderToTextureHelper();
        void RenderTextureToQuad(render::RenderContext&, render::DrawCallState const&, render::RenderTargets const*,
                                 render::Texture const*, render::SamplerState const*, render::Viewport const*,
                                 int) const;
        void RenderTextureToQuad(render::RenderContext&, render::DrawCallState const&, render::RenderTargets const*,
                                 render::Texture const*, render::ShaderProgramVariable const&,
                                 render::ShaderProgram const&, render::SamplerState const*, render::Viewport const*,
                                 int) const;
        void RenderTextureToQuadDepth(render::RenderContext&, render::DrawCallState const&,
                                      render::RenderTargets const*, render::Texture const*, float,
                                      render::Viewport const*) const;
        void RenderQuad(render::RenderContext&, render::DrawCallState&) const;
        void RenderQuad(render::RenderContext&) const;

        // data members, from how the methods use this: 440 bytes, the first 9 are RenderDeviceOnEndFrame
        char _unknown_9[239];
        InputAssemblerState field_248; // offset 248
    };

    // 0x100bb8120, 1744 bytes, placed by debug map only (low confidence)
    // RenderToTexture(render::RenderTargets&, render::Texture&, render::RenderContext&, render::DrawCallState const&, int)
    void RenderToTexture(RenderTargets* param_1, Texture* param_2, RenderContext* param_3, DrawCallState* param_4,
                         int param_5) {
        char cVar1;
        uint uVar2;
        int iVar3;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this;
        void* pvVar4;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar5;
        undefined8* puVar6;
        int* piVar7;
        long lVar8;
        Viewport* pVVar9;
        OutputMergerState* pOVar10;
        Vector4T* pVVar11;
        Texture* pTVar12;
        IndexBuffer* pIVar13;
        PrimitiveShaderFamily* pPVar14;
        ShaderProgram* pSVar15;
        RenderPipelineState* pRVar16;
        InputAssemblerState* pIVar17;
        VertexDeclaration* pVVar18;
        TextRun* this_00;
        IndexBuffer local_208;
        VertexBuffer local_1a8;
        undefined1 local_158[20];
        undefined1 local_144[28];
        Point<float> local_128[8];
        undefined1 local_120[28];
        Point<float> local_104[8];
        undefined1 local_fc[28];
        Point<float> local_e0[8];
        undefined1 local_d8[16];
        Viewport local_c8;
        ImVec4 local_a8[24];
        DrawCallState* local_90;
        DrawCallState local_88;
        Texture* local_58;
        undefined4 local_4c;
        undefined2 local_48;
        uint local_44;
        HashedString local_40;

        local_90 = param_4;
        local_58 = param_2;
        local_44 = param_5;
        this = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                   param_1->GetColourTargetTextures();
        cVar1 =
            eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(this);
        if (cVar1 != '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("!dstTextureRT.GetColourTargetTextures().empty()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "rendertotexture/RenderToTexture.cpp",
                      21, (char*)0);
        }
        new (local_158) math::ColourHSL(-1.0, 1.0, 0.0);
        new ((local_158 + 12)) math::Point<float>(0.0, 1.0);
        new (&local_208) ImVec4(1.0, 1.0, 1.0, 1.0);
        new (local_144) math::Float4((Vector4T*)&local_208);
        new ((local_144 + 16)) math::ColourHSL(1.0, 1.0, 0.0);
        math::Point<float>::Point(local_128, 1.0, 1.0);
        new (&local_1a8) ImVec4(1.0, 1.0, 1.0, 1.0);
        new (local_120) math::Float4((Vector4T*)&local_1a8);
        new ((local_120 + 16)) math::ColourHSL(1.0, -1.0, 0.0);
        math::Point<float>::Point(local_104, 1.0, 0.0);
        new (&local_88) ImVec4(1.0, 1.0, 1.0, 1.0);
        new (local_fc) math::Float4((Vector4T*)&local_88);
        new ((local_fc + 16)) math::ColourHSL(-1.0, -1.0, 0.0);
        math::Point<float>::Point(local_e0, 0.0, 0.0);
        new ((local_d8 + 16)) ImVec4(1.0, 1.0, 1.0, 1.0);
        new (local_d8) math::Float4((Vector4T*)(local_d8 + 16));
        new (&local_1a8) render::VertexBuffer();
        pvVar4 = (void*)local_158->data();
        local_1a8.Create(144, 0, pvVar4);
        local_48 = 3;
        local_4c = 33685760;
        new (&local_208) render::IndexBuffer();
        local_208.Create(6, 0, &local_4c, 5121);
        new (&local_88) render::DrawCallState(local_90);
        pvVar5 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                     param_1->GetColourTargetTextures();
        puVar6 = (undefined8*)
            eastl::vector<render::Texture*,
                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar5,
                                                                                                                 0);
        piVar7 = (int*)(*puVar6)->second();
        iVar3 = *piVar7;
        pvVar5 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                     param_1->GetColourTargetTextures();
        puVar6 = (undefined8*)
            eastl::vector<render::Texture*,
                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar5,
                                                                                                                 0);
        lVar8 = (*puVar6)->second();
        new ((local_d8 + 16)) render::Viewport(0, 0, iVar3, *(int*)(lVar8 + 4), 0.0, 1.0);
        pVVar9 = (Viewport*)local_88.GetOutputMergerState();
        render::OutputMergerState::SetViewports(pVVar9, (int)local_d8 + 16);
        pOVar10 = (OutputMergerState*)local_88.GetOutputMergerState();
        pOVar10->SetRenderTargets(param_1);
        ImVec4::ImVec4(local_a8, 0.0, 0.0, 0.0, 1.0);
        pVVar11 = (Vector4T*)local_88.GetOutputMergerState();
        render::OutputMergerState::SetClearColours(pVVar11, (uint)local_a8);
        pOVar10 = (OutputMergerState*)local_88.GetOutputMergerState();
        pTVar12 = (Texture*)param_1->GetDepthStencilTargetTexture();
        uVar2 = render::GetDepthTextureClearFlags(pTVar12);
        pOVar10->SetClearFlags(uVar2 | 1);
        pOVar10 = (OutputMergerState*)local_88.GetOutputMergerState();
        pOVar10->SetDepthStencilClear(1.0, '\0');
        pIVar13 = (IndexBuffer*)local_88.GetInputAssemblerState();
        render::InputAssemblerState::SetIndexBuffer(pIVar13, (uint)&local_208);
        pvVar5 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                     param_1->GetColourTargetTextures();
        puVar6 = (undefined8*)
            eastl::vector<render::Texture*,
                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar5,
                                                                                                                 0);
        this_00 = (TextRun*)*puVar6;
        iVar3 = this_00->GetMaxLineWidth();
        if (iVar3 < 34067) {
            if (iVar3 != 3553) {
                if (iVar3 == 32879) {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "graphicutils/rendertotexture/RenderToTexture.cpp",
                                    100, (char*)0);
                }
            LAB_100bb874a:
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "graphicutils/rendertotexture/RenderToTexture.cpp",
                                104, (char*)0);
            }
        } else {
            if (iVar3 == 34067) {
                if (5 < local_44) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("iCubemapFace >= 0 && iCubemapFace < CUBEFACE_NTYPES",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                              "graphicutils/rendertotexture/RenderToTexture.cpp",
                              82, (char*)0);
                }
                pPVar14 = (PrimitiveShaderFamily*)this_00->Instance();
                pSVar15 = (ShaderProgram*)pPVar14->GetShaderProgram(12);
                pIVar17 = (InputAssemblerState*)local_88.GetInputAssemblerState();
                pVVar18 = (VertexDeclaration*)pSVar15->second();
                pIVar17->SetVertexStreamData(pVVar18, &local_1a8);
                pRVar16 = (RenderPipelineState*)local_88.GetRenderPipelineState();
                pRVar16->SetShaderProgram(pSVar15);
                new (&local_40) HashedString("sTextureCube");
                iVar3 = pSVar15->GetConstIndex(&local_40);
                pRVar16 = (RenderPipelineState*)local_88.GetRenderPipelineState();
                pRVar16->SetPSTextureSamplerPair(0, local_58, iVar3, 0, false);
                new (&local_40) HashedString("uWorldMat");
                pSVar15->SetShaderConstMatrix4(&local_40, 1, PTR_IDENTITY_100ee6730, 1);
                new (&local_40) HashedString("uViewProjMat");
                pSVar15->SetShaderConstMatrix4(&local_40, 1, PTR_IDENTITY_100ee6730, 1);
                new (&local_40) HashedString("uCubemapFace");
                pSVar15->SetShaderConstInt1(&local_40, local_44);
                goto LAB_100bb8715;
            }
            if (iVar3 != 37120)
                goto LAB_100bb874a;
        }
        pPVar14 = (PrimitiveShaderFamily*)this_00->Instance();
        pSVar15 = (ShaderProgram*)pPVar14->GetShaderProgram(6);
        pRVar16 = (RenderPipelineState*)local_88.GetRenderPipelineState();
        pRVar16->SetShaderProgram(pSVar15);
        pIVar17 = (InputAssemblerState*)local_88.GetInputAssemblerState();
        pVVar18 = (VertexDeclaration*)pSVar15->second();
        pIVar17->SetVertexStreamData(pVVar18, &local_1a8);
        new (&local_40) HashedString("uWorldMat");
        pSVar15->SetShaderConstMatrix4(&local_40, 1, PTR_IDENTITY_100ee6730, 1);
        new (&local_40) HashedString("uViewProjMat");
        pSVar15->SetShaderConstMatrix4(&local_40, 1, PTR_IDENTITY_100ee6730, 1);
        new (&local_40) HashedString("sTexture");
        iVar3 = pSVar15->GetConstIndex(&local_40);
        pRVar16 = (RenderPipelineState*)local_88.GetRenderPipelineState();
        pRVar16->SetPSTextureSamplerPair(0, local_58, iVar3, 0, false);
    LAB_100bb8715:
        param_3->DrawIndexedPrimitives(&local_88, 4, 6, 0);
        param_3->SetVertexBuffer(0, 0, 0);
        param_3->SetIndexBuffer(0, 0);
        local_88.~DrawCallState();
        local_208.~IndexBuffer();
        local_1a8.~VertexBuffer();
    }

    // 0x100bb8860, 176 bytes, base-object constructor, placed by neighbouring functions
    // RenderToTextureHelper::RenderToTextureHelper()
    void RenderToTextureHelper::RenderToTextureHelper() {
        field_0 = &PTR__RenderToTextureHelper_100f27af0;
        new (&field_8) render::VertexBuffer();
        new (&field_88) render::VertexBuffer();
        new (&field_168) render::VertexBuffer();
        new (field_248) render::InputAssemblerState();
        (*(code*)field_0[2])(this);
    }

    // 0x100bb8910, 16 bytes, complete-object constructor, placed by neighbouring functions
    // RenderToTextureHelper::RenderToTextureHelper(): jumps straight to the base-object constructor

    // 0x100bb8920, 144 bytes, base-object destructor, placed by neighbouring functions
    // RenderToTextureHelper::~RenderToTextureHelper()
    void RenderToTextureHelper::~RenderToTextureHelper() {
        field_0 = &PTR__RenderToTextureHelper_100f27af0;
        DestroyRenderingResources(this);
        field_248->~InputAssemblerState();
        (&field_168)->~VertexBuffer();
        (&field_88)->~VertexBuffer();
        (&field_8)->~VertexBuffer();
    }

    // 0x100bb89b0, 16 bytes, complete-object destructor, placed by neighbouring functions
    // RenderToTextureHelper::~RenderToTextureHelper(): jumps straight to the base-object destructor

    // 0x100bb89c0, 32 bytes, deleting destructor, placed by neighbouring functions
    // RenderToTextureHelper::~RenderToTextureHelper()
    void RenderToTextureHelper::~RenderToTextureHelper() {
        ~RenderToTextureHelper(this);
        operator_delete(this);
    }

    // 0x100bb89e0, 1328 bytes, placed by __FILE__ string
    // RenderToTextureHelper::RenderTextureToQuad(render::RenderContext&, render::DrawCallState const&, render::RenderTargets const*, render::Texture const*, render::SamplerState const*, render::Viewport const*, int) const
    void RenderToTextureHelper::RenderTextureToQuad(RenderContext* param_1, DrawCallState* param_2,
                                                    RenderTargets* param_3, Texture* param_4, SamplerState* param_5,
                                                    Viewport* param_6, int param_7) {
        char cVar1;
        int iVar2;
        int* piVar3;
        Viewport* pVVar4;
        OutputMergerState* pOVar5;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar6;
        undefined8* puVar7;
        PrimitiveShaderFamily* pPVar8;
        ShaderProgram* pSVar9;
        RenderPipelineState* pRVar10;
        VertexDeclaration* pVVar11;
        long lVar12;
        Layout* this_00;
        MapArea* this_01;
        RenderTargets* this_02;
        Texture* this_03;
        DrawCallState* pDVar13;
        VertexBuffer* pVVar14;
        undefined1 local_98[32];
        DrawCallState local_78;
        SamplerState* local_48;
        HashedString local_40;

        local_98._24_8_ = param_1;
        local_48 = param_5;
        if (param_4 == (Texture*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("srcTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "rendertotexture/RenderToTexture.cpp",
                      137, (char*)0);
        }
        if (param_3 == (RenderTargets*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("dstTextureRT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "rendertotexture/RenderToTexture.cpp",
                      138, (char*)0);
        }
        new (&local_78) render::DrawCallState(param_2);
        new (local_98) render::Viewport(0, 0, 0, 0, 0.0, 1.0);
        if (param_6 == (Viewport*)0) {
            pvVar6 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    param_3->GetColourTargetTextures();
            puVar7 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar6, 0);
            piVar3 = (int*)(*puVar7)->second();
            iVar2 = *piVar3;
            pvVar6 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    param_3->GetColourTargetTextures();
            puVar7 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar6, 0);
            lVar12 = (*puVar7)->second();
            new (local_98) render::Viewport(0, 0, iVar2, *(int*)(lVar12 + 4), 0.0, 1.0);
        } else {
            local_98._16_4_ = param_6->field_16;
            local_98._20_4_ = param_6->field_20;
            local_98._0_4_ = param_6->field_0;
            local_98._4_4_ = param_6->field_4;
            local_98._8_4_ = param_6->field_8;
            local_98._12_4_ = param_6->field_12;
        }
        pVVar4 = (Viewport*)local_78.GetOutputMergerState();
        render::OutputMergerState::SetViewports(pVVar4, (uint)local_98);
        pOVar5 = (OutputMergerState*)local_78.GetOutputMergerState();
        pOVar5->SetRenderTargets(param_3);
        this_02 = param_3;
        cVar1 = param_3->HasColourTargets();
        iVar2 = 3553;
        if (cVar1 != '\0') {
            pvVar6 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    param_3->GetColourTargetTextures();
            puVar7 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar6, 0);
            this_02 = (RenderTargets*)*puVar7;
            iVar2 = this_02->GetMaxLineWidth();
        }
        if (iVar2 < 36161) {
            if (iVar2 != 3553) {
                if (iVar2 != 34067)
                    goto LAB_100bb8eae;
                if (5 < (uint)param_7) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("iCubemapFace >= 0 && iCubemapFace < CUBEFACE_NTYPES",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                              "graphicutils/rendertotexture/RenderToTexture.cpp",
                              211, (char*)0);
                }
                pPVar8 = (PrimitiveShaderFamily*)this_02->Instance();
                pSVar9 = (ShaderProgram*)pPVar8->GetShaderProgram(12);
                pRVar10 = (RenderPipelineState*)local_78.GetRenderPipelineState();
                pRVar10->SetShaderProgram(pSVar9);
                pVVar11 = (VertexDeclaration*)pSVar9->second();
                (field_248, pVVar11, (VertexBuffer*)&field_168)->SetVertexStreamData();
                local_78.SetInputAssemblerState(field_248);
                new (&local_40) HashedString("sTextureCube");
                iVar2 = pSVar9->GetConstIndex(&local_40);
                pRVar10 = (RenderPipelineState*)local_78.GetRenderPipelineState();
                pRVar10->SetPSTextureSamplerPair(0, param_4, iVar2, local_48, false);
                new (&local_40) HashedString("uWorldMat");
                pSVar9->SetShaderConstMatrix4(&local_40, 1, PTR_IDENTITY_100ee6730, 1);
                new (&local_40) HashedString("uViewProjMat");
                pSVar9->SetShaderConstMatrix4(&local_40, 1, PTR_IDENTITY_100ee6730, 1);
                new (&local_40) HashedString("uCubemapFace");
                pSVar9->SetShaderConstInt1(&local_40, param_7);
                goto LAB_100bb8e92;
            }
        } else if ((iVar2 != 36161) && (iVar2 != 37120)) {
        LAB_100bb8eae:
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                            "graphicutils/rendertotexture/RenderToTexture.cpp",
                            232, (char*)0);
        }
        lVar12 = param_4->second();
        iVar2 = render::GetFormatDepthBits(*(undefined4*)(lVar12 + 12));
        if (iVar2 == 0) {
        LAB_100bb8d43:
            this_03 = param_4;
            iVar2 = param_4->GetMaxLineWidth();
            if (iVar2 == 37120) {
                this_01 = (MapArea*)this_03->Instance();
                lVar12 = this_01->GetOrigin();
                iVar2 = 8;
                if (*(char*)(lVar12 + 167) == '\0')
                    goto LAB_100bb8d6e;
            } else {
            LAB_100bb8d6e:
                iVar2 = 3;
            }
            pDVar13 = &local_78;
            pOVar5 = (OutputMergerState*)pDVar13->GetRenderPipelineState();
            lVar12 = pDVar13->Instance();
            pOVar5->SetHeapSize(lVar12 + 1080);
        } else {
            lVar12 = param_3->GetDepthStencilTargetTexture();
            if (lVar12 == 0)
                goto LAB_100bb8d43;
            pDVar13 = &local_78;
            this_00 = (Layout*)pDVar13->GetRenderPipelineState();
            lVar12 = pDVar13->Instance();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                Layout::SetHeapSize(this_00, lVar12 + 720);
            pOVar5 = (OutputMergerState*)local_78.GetOutputMergerState();
            pOVar5->SetClearFlags(2);
            pOVar5 = (OutputMergerState*)local_78.GetOutputMergerState();
            pOVar5->SetDepthStencilClear(1.0, '\0');
            iVar2 = 11;
        }
        pPVar8 = (PrimitiveShaderFamily*)pOVar5->Instance();
        pSVar9 = (ShaderProgram*)pPVar8->GetShaderProgram(iVar2);
        pRVar10 = (RenderPipelineState*)local_78.GetRenderPipelineState();
        pRVar10->SetShaderProgram(pSVar9);
        pVVar11 = (VertexDeclaration*)pSVar9->second();
        pVVar14 = (VertexBuffer*)&field_168;
        if (iVar2 != 8) {
            pVVar14 = (VertexBuffer*)&field_88;
        }
        (field_248, pVVar11, pVVar14)->SetVertexStreamData();
        local_78.SetInputAssemblerState(field_248);
        new (&local_40) HashedString("uWorldMat");
        pSVar9->SetShaderConstMatrix4(&local_40, 1, PTR_IDENTITY_100ee6730, 1);
        new (&local_40) HashedString("uViewProjMat");
        pSVar9->SetShaderConstMatrix4(&local_40, 1, PTR_IDENTITY_100ee6730, 1);
        new (&local_40) HashedString("sTexture");
        iVar2 = pSVar9->GetConstIndex(&local_40);
        pRVar10 = (RenderPipelineState*)local_78.GetRenderPipelineState();
        pRVar10->SetPSTextureSamplerPair(0, param_4, iVar2, local_48, false);
    LAB_100bb8e92:
        local_98._24_8_->DrawPrimitives(&local_78, 5, 0, 4);
        local_78.~DrawCallState();
    }

    // 0x100bb8f10, 496 bytes, placed by __FILE__ string
    // RenderToTextureHelper::RenderTextureToQuad(render::RenderContext&, render::DrawCallState const&, render::RenderTargets const*, render::Texture const*, render::ShaderProgramVariable const&, render::ShaderProgram const&, render::SamplerState const*, render::Viewport const*, int) const
    void RenderToTextureHelper::RenderTextureToQuad(RenderContext* param_1, DrawCallState* param_2,
                                                    RenderTargets* param_3, Texture* param_4,
                                                    ShaderProgramVariable* param_5, ShaderProgram* param_6,
                                                    SamplerState* param_7, Viewport* param_8, int param_9) {
        int iVar1;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar2;
        undefined8* puVar3;
        int* piVar4;
        long lVar5;
        Viewport* pVVar6;
        OutputMergerState* this_00;
        RenderPipelineState* pRVar7;
        VertexDeclaration* pVVar8;
        DrawCallState local_88;
        undefined1 local_58[32];
        RenderContext* local_38;

        local_58._24_8_ = param_5;
        local_38 = param_1;
        if (param_4 == (Texture*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("srcTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "rendertotexture/RenderToTexture.cpp",
                      253, (char*)0);
        }
        if (param_3 == (RenderTargets*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("dstTextureRT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "rendertotexture/RenderToTexture.cpp",
                      254, (char*)0);
        }
        new (local_58) render::Viewport(0, 0, 0, 0, 0.0, 1.0);
        if (param_8 == (Viewport*)0) {
            pvVar2 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    param_3->GetColourTargetTextures();
            puVar3 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar2, 0);
            piVar4 = (int*)(*puVar3)->second();
            iVar1 = *piVar4;
            pvVar2 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    param_3->GetColourTargetTextures();
            puVar3 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar2, 0);
            lVar5 = (*puVar3)->second();
            new (local_58) render::Viewport(0, 0, iVar1, *(int*)(lVar5 + 4), 0.0, 1.0);
        } else {
            local_58._16_4_ = param_8->field_16;
            local_58._20_4_ = param_8->field_20;
            local_58._0_4_ = param_8->field_0;
            local_58._4_4_ = param_8->field_4;
            local_58._8_4_ = param_8->field_8;
            local_58._12_4_ = param_8->field_12;
        }
        new (&local_88) render::DrawCallState(param_2);
        pVVar6 = (Viewport*)local_88.GetOutputMergerState();
        render::OutputMergerState::SetViewports(pVVar6, (uint)local_58);
        this_00 = (OutputMergerState*)local_88.GetOutputMergerState();
        this_00->SetRenderTargets(param_3);
        pRVar7 = (RenderPipelineState*)local_88.GetRenderPipelineState();
        pRVar7->SetShaderProgram(param_6);
        pVVar8 = (VertexDeclaration*)param_6->second();
        (field_248, pVVar8, (VertexBuffer*)&field_88)->SetVertexStreamData();
        local_88.SetInputAssemblerState(field_248);
        iVar1 = param_6->GetConstIndex(local_58._24_8_);
        pRVar7 = (RenderPipelineState*)local_88.GetRenderPipelineState();
        pRVar7->SetPSTextureSamplerPair(0, param_4, iVar1, param_7, false);
        local_38->DrawPrimitives(&local_88, 5, 0, 4);
        local_88.~DrawCallState();
    }

    // 0x100bb9100, 880 bytes, placed by __FILE__ string
    // RenderToTextureHelper::RenderTextureToQuadDepth(render::RenderContext&, render::DrawCallState const&, render::RenderTargets const*, render::Texture const*, float, render::Viewport const*) const
    void RenderToTextureHelper::RenderTextureToQuadDepth(RenderContext* param_1, DrawCallState* param_2,
                                                         RenderTargets* param_3, Texture* param_4, float param_5,
                                                         Viewport* param_6) {
        int iVar1;
        int* piVar2;
        long lVar3;
        Viewport* pVVar4;
        OutputMergerState* this_00;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar5;
        undefined8* puVar6;
        PrimitiveShaderFamily* pPVar7;
        ShaderProgram* this_01;
        RenderPipelineState* pRVar8;
        VertexDeclaration* pVVar9;
        float* pfVar10;
        byte bVar11;
        Texture* this_02;
        DrawCallState local_a8;
        Viewport local_78;
        RenderContext* local_58;
        float local_4c;
        float local_48;
        float local_44;
        HashedString local_40;

        local_58 = param_1;
        local_4c = param_5;
        if (param_4 == (Texture*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("srcTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "rendertotexture/RenderToTexture.cpp",
                      301, (char*)0);
        }
        if (param_3 == (RenderTargets*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("dstTextureRT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                      "rendertotexture/RenderToTexture.cpp",
                      302, (char*)0);
        }
        new (&local_a8) render::DrawCallState(param_2);
        new (&local_78) render::Viewport(0, 0, 0, 0, 0.0, 1.0);
        if (param_6 == (Viewport*)0) {
            pvVar5 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    param_3->GetColourTargetTextures();
            puVar6 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar5, 0);
            piVar2 = (int*)(*puVar6)->second();
            iVar1 = *piVar2;
            pvVar5 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    param_3->GetColourTargetTextures();
            puVar6 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar5, 0);
            lVar3 = (*puVar6)->second();
            new (&local_78) render::Viewport(0, 0, iVar1, *(int*)(lVar3 + 4), 0.0, 1.0);
        } else {
            local_78.field_16 = param_6->field_16;
            local_78.field_20 = param_6->field_20;
            local_78.field_0 = param_6->field_0;
            local_78.field_4 = param_6->field_4;
            local_78.field_8 = param_6->field_8;
            local_78.field_12 = param_6->field_12;
        }
        pVVar4 = (Viewport*)local_a8.GetOutputMergerState();
        render::OutputMergerState::SetViewports(pVVar4, (uint)&local_78);
        this_00 = (OutputMergerState*)local_a8.GetOutputMergerState();
        this_00->SetRenderTargets(param_3);
        pvVar5 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                     param_3->GetColourTargetTextures();
        puVar6 = (undefined8*)
            eastl::vector<render::Texture*,
                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar5,
                                                                                                                 0);
        iVar1 = (*puVar6)->GetMaxLineWidth();
        if (iVar1 < 34067) {
            if ((iVar1 == 3553) || (iVar1 == 34037)) {
            LAB_100bb928c:
                this_02 = param_4;
                iVar1 = param_4->GetMaxLineWidth();
                bVar11 = 4;
                if (iVar1 != 3553) {
                    this_02 = param_4;
                    iVar1 = param_4->GetMaxLineWidth();
                    bVar11 = iVar1 == 34037 ^ 5;
                }
                pPVar7 = (PrimitiveShaderFamily*)this_02->Instance();
                this_01 = (ShaderProgram*)pPVar7->GetShaderProgram(bVar11);
                pRVar8 = (RenderPipelineState*)local_a8.GetRenderPipelineState();
                pRVar8->SetShaderProgram(this_01);
                pVVar9 = (VertexDeclaration*)this_01->second();
                (field_248, pVVar9, (VertexBuffer*)&field_88)->SetVertexStreamData();
                local_a8.SetInputAssemblerState(field_248);
                new (&local_40) HashedString("uWorldMat");
                this_01->SetShaderConstMatrix4(&local_40, 1, PTR_IDENTITY_100ee6730, 1);
                new (&local_40) HashedString("uViewProjMat");
                this_01->SetShaderConstMatrix4(&local_40, 1, PTR_IDENTITY_100ee6730, 1);
                new (&local_40) HashedString("uExplicitDepth");
                local_48 = 1.0;
                local_44 = 0.0;
                pfVar10 = std::max<float>(&local_44, &local_4c);
                pfVar10 = std::min<float>(&local_48, pfVar10);
                this_01->SetShaderConstFloat1(&local_40, *pfVar10);
                new (&local_40) HashedString("sTexture");
                iVar1 = this_01->GetConstIndex(&local_40);
                pRVar8 = (RenderPipelineState*)local_a8.GetRenderPipelineState();
                pRVar8->SetPSTextureSamplerPair(0, param_4, iVar1, 0, false);
                local_58->DrawPrimitives(&local_a8, 5, 0, 4);
                local_a8.~DrawCallState();
                return;
            }
        } else if ((iVar1 == 37120) || (iVar1 == 34067))
            goto LAB_100bb928c;
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/graphicutils/"
                        "rendertotexture/RenderToTexture.cpp",
                        357, (char*)0);
    }

} // namespace jag::graphicutils
