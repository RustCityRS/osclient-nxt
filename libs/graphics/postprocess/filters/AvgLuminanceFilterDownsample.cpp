// libs/graphics/postprocess/filters/AvgLuminanceFilterDownsample.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.postprocess

namespace jag::postprocess {
    class AvgLuminanceFilterDownsample {
    public:
        // virtual methods in vtable order
        virtual ~AvgLuminanceFilterDownsample();
        virtual uint32_t Init();
        virtual void Destroy();
        virtual void DestroyRenderTargets();
        virtual void CalcAvgAndAdaptedLuminance(render::RenderContext& renderContext, const render::Texture& texture,
                                                float arg3, float arg4, graphics::ViewRenderTargets* viewRenderTargets);
        virtual void RenderDebug(const render::Viewport& viewport) const;
        virtual uint64_t GetAvgLuminanceTex() const;
        virtual uint64_t GetAdaptedLuminanceTex() const;
        AvgLuminanceFilterDownsample(render::RenderTargetsManager* renderTargetsManager,
                                     const graphicutils::RenderToTextureHelper* renderToTextureHelper);
        unsigned long CreateRenderTargets();

    private:
        RenderTargetsManager* field_8;
        RenderToTextureHelper* field_16;
        LuminanceShaderOutputFormat field_24;
        char field_28;
        uint8_t _unknown_29[155];
        InputAssemblerState field_184;
    };

    // 0x1009b6d00
    AvgLuminanceFilterDownsample::AvgLuminanceFilterDownsample(
        render::RenderTargetsManager* renderTargetsManager,
        const graphicutils::RenderToTextureHelper* renderToTextureHelper)
        : AvgLuminanceFilter(renderTargetsManager, renderToTextureHelper) {
        new (&field_56) shared_ptr();
        new (&field_72) shared_ptr();
        new (&field_88) shared_ptr();
        new (&field_104) shared_ptr();
        new (&field_120) shared_ptr();
        new (&field_136) shared_ptr();
        new (&field_152) shared_ptr();
        new (&field_168) shared_ptr();
        new (field_184) render::InputAssemblerState();
    }

    // 0x1009b6e70
    AvgLuminanceFilterDownsample::~AvgLuminanceFilterDownsample() {
        Destroy();
        field_184->~InputAssemblerState();
        field_168.~shared_ptr();
        field_152.~shared_ptr();
        field_136.~shared_ptr();
        field_120.~shared_ptr();
        field_104.~shared_ptr();
        field_88.~shared_ptr();
        field_72.~shared_ptr();
        field_56.~shared_ptr();
        field_32.~Array();
    }

    // 0x1009b6fb0
    uint32_t AvgLuminanceFilterDownsample::Init() {
        char* str1;
        char* pcVar2;
        VertexElementDesc* pVVar3;
        ReturnValue local_70;
        ReturnValue local_58;
        ReturnValue local_40;

        uint32_t uVar1 = CreateRenderTargets();
        if ((char)uVar1 == '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilterDownsample.cpp",
                      49, "Failed to determine AvgLuminanceFilterDownsample render target format");
            Destroy();
        } else {
            str1 = (char*)Instance();
            local_70 = PostProcessVS::BuildVSFragment();
            pcVar2 = (char*)local_70.c_str();
            local_58 = RGBLogLuminance3x3::BuildFSFragment(field_24);
            pVVar3 = (VertexElementDesc*)local_58.c_str();
            local_40.RegisterFromSourceString(str1, pcVar2, pVVar3, 62757712, '\x02');
            field_56 = local_40;
            local_70 = PostProcessVS::BuildVSFragment();
            pcVar2 = (char*)local_70.c_str();
            local_58 = RGBLogLuminance2x2::BuildFSFragment(field_24);
            pVVar3 = (VertexElementDesc*)local_58.c_str();
            local_40.RegisterFromSourceString(str1, pcVar2, pVVar3, 62757712, '\x02');
            field_72 = local_40;
            local_70 = PostProcessVS::BuildVSFragment();
            pcVar2 = (char*)local_70.c_str();
            local_58 = RGBLogLuminance::BuildFSFragment(field_24);
            pVVar3 = (VertexElementDesc*)local_58.c_str();
            local_40.RegisterFromSourceString(str1, pcVar2, pVVar3, 62757712, '\x02');
            field_88 = local_40;
            local_70 = PostProcessVS::BuildVSFragment();
            pcVar2 = (char*)local_70.c_str();
            local_58 = LogLuminance4x4::BuildFSFragment(field_24, false);
            pVVar3 = (VertexElementDesc*)local_58.c_str();
            local_40.RegisterFromSourceString(str1, pcVar2, pVVar3, 62757712, '\x02');
            field_104 = local_40;
            local_70 = PostProcessVS::BuildVSFragment();
            pcVar2 = (char*)local_70.c_str();
            local_58 = LogLuminance4x4::BuildFSFragment(field_24, true);
            pVVar3 = (VertexElementDesc*)local_58.c_str();
            local_40.RegisterFromSourceString(str1, pcVar2, pVVar3, 62757712, '\x02');
            field_120 = local_40;
            local_70 = PostProcessVS::BuildVSFragment();
            pcVar2 = (char*)local_70.c_str();
            local_58 = AdaptiveLuminance::BuildFSFragment(field_24);
            pVVar3 = (VertexElementDesc*)local_58.c_str();
            local_40.RegisterFromSourceString(str1, pcVar2, pVVar3, 62757712, '\x02');
            field_168 = local_40;
        }
        return uVar1;
    }

    // 0x1009b7380
    unsigned long AvgLuminanceFilterDownsample::CreateRenderTargets() {
        uint8_t* this_01;
        long* plVar1;
        uint64_t uVar2;
        uint64_t uVar3;
        uint64_t uVar4;
        uint64_t uVar5;
        uint64_t uVar6;
        uint64_t uVar7;
        uint64_t uVar8;
        shared_ptr<render::RenderTargets>* this_02;
        RenderTargets* pRVar11;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar12;
        uint64_t* puVar13;
        uint64_t* puVar14;
        long lVar15;
        shared_ptr<render::RenderTargets>* psVar16;
        long lVar17;
        unsigned int arg6;
        uint8_t local_118[64];
        LuminanceShaderOutputFormat local_d8;
        WrapArray<unsigned char const> local_58;
        shared_ptr<render::RenderTargets>* local_48;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_40;

        uint8_t* this_00 = &field_32;
        this_00->set_max_size(4, 0);
        luminance::TryCreateRenderTarget(local_d8, &field_24, field_8, 14781288, 64, 64);
        shared_ptr<render::RenderTargets>* psVar10 = (shared_ptr<render::RenderTargets>*)(*this_00)[0];
        *psVar10 = local_d8;
        if (((*this_00)[0])->operator_cast_to_bool()) {
            local_58.WrapArray<Array<unsigned char>>(*this_00);
            if (luminance::CreateDownsampleChain(&local_58, field_8, "AvgLumIntermediateRT", 4)) {
                local_d8 = std::array<render::Texture::Desc, 2ul>();
                psVar10 = (shared_ptr<render::RenderTargets>*)this_00->back();
                pRVar11 = (RenderTargets*)(*psVar10).operator->();
                pvVar12 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                              pRVar11->GetColourTargetTextures();
                puVar13 = (uint64_t*)(*pvVar12)[0];
                puVar13 = (uint64_t*)(*puVar13)->second();
                puVar14 = &local_d8[0];
                uVar2 = puVar13[1];
                uVar3 = puVar13[2];
                uVar4 = puVar13[3];
                uVar5 = puVar13[4];
                uVar6 = puVar13[5];
                uVar7 = puVar13[6];
                uVar8 = puVar13[7];
                *puVar14 = *puVar13;
                puVar14[1] = uVar2;
                puVar14[2] = uVar3;
                puVar14[3] = uVar4;
                puVar14[4] = uVar5;
                puVar14[5] = uVar6;
                puVar14[6] = uVar7;
                puVar14[7] = uVar8;
                new (local_118) render::Texture::Desc();
                arg6 = (unsigned int)(Desc*)local_118;
                local_40.Register(field_8, 14780796, *3553, (int)&local_d8, DAT_00000001, arg6, false);
                this_01 = &field_136;
                *this_01 = local_40;
                local_48 = (shared_ptr<render::RenderTargets>*)this_01;
                lVar15 = this_01->end();
                if (lVar15 != 0) {
                    local_40.Register(field_8, 14780810, *3553, (int)&local_d8, DAT_00000001, arg6, false);
                    field_152 = local_40;
                    lVar15 = field_152.end();
                    if (lVar15 != 0) {
                        psVar10 = (shared_ptr<render::RenderTargets>*)this_00->data();
                        psVar16 = (shared_ptr<render::RenderTargets>*)this_00->end();
                        this_02 = local_48;
                        for (; local_48 = this_02, psVar10 != psVar16; psVar10 = psVar10 + 16) {
                            pRVar11 = (RenderTargets*)(*psVar10).operator->();
                            pvVar12 =
                                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                    pRVar11->GetColourTargetTextures();
                            puVar13 = (uint64_t*)(*pvVar12)[0];
                            plVar1 = (long*)*puVar13;
                            lVar17 = pvVar12->Instance();
                            (**(void (**)(...))(*plVar1 + 24))(plVar1, lVar17 + 80, 0);
                            pRVar11 = (RenderTargets*)(*psVar10).operator->();
                            lVar17 = pRVar11->GetDepthStencilTargetTexture();
                            if (lVar17 != 0) {
                                LogAssert("avgLumRT->GetDepthStencilTargetTexture() == nullptr",
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                          "graphics/postprocess/filters/AvgLuminanceFilterDownsample.cpp",
                                          327, nullptr);
                            }
                            this_02 = local_48;
                        }
                        pRVar11 = (RenderTargets*)(*this_02).operator->();
                        pvVar12 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                      pRVar11->GetColourTargetTextures();
                        puVar13 = (uint64_t*)(*pvVar12)[0];
                        plVar1 = (long*)*puVar13;
                        lVar17 = pvVar12->Instance();
                        (**(void (**)(...))(*plVar1 + 24))(plVar1, lVar17 + 80, 0);
                        pRVar11 = (RenderTargets*)(*this_02).operator->();
                        lVar17 = pRVar11->GetDepthStencilTargetTexture();
                        if (lVar17 != 0) {
                            LogAssert("m_CurrAdaptedLuminanceRT->GetDepthStencilTargetTexture() == nullptr",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "postprocess/filters/AvgLuminanceFilterDownsample.cpp",
                                      331, nullptr);
                        }
                        pRVar11 = (RenderTargets*)field_152.operator->();
                        pvVar12 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                      pRVar11->GetColourTargetTextures();
                        puVar13 = (uint64_t*)(*pvVar12)[0];
                        plVar1 = (long*)*puVar13;
                        lVar17 = pvVar12->Instance();
                        (**(void (**)(...))(*plVar1 + 24))(plVar1, lVar17 + 80, 0);
                        pRVar11 = (RenderTargets*)field_152.operator->();
                        lVar17 = pRVar11->GetDepthStencilTargetTexture();
                        if (lVar17 != 0) {
                            LogAssert("m_PrevAdaptedLuminanceRT->GetDepthStencilTargetTexture() == nullptr",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "postprocess/filters/AvgLuminanceFilterDownsample.cpp",
                                      334, nullptr);
                        }
                        field_28 = '\x01';
                        return lVar15 != 0 & 4294967295;
                    }
                }
            }
        }
        return 0;
    }

    // 0x1009b7ba0
    void AvgLuminanceFilterDownsample::Destroy() {
        DestroyRenderTargets();
        Singleton<render::ShaderProgramManager>* this_01 = (Singleton<render::ShaderProgramManager>*)field_184;
        this_01->Destroy();
        auto this_00 = this_01->Instance();
        this_00->Unregister(field_72);
        this_00->Unregister(field_56);
        this_00->Unregister(field_88);
        this_00->Unregister(field_104);
        this_00->Unregister(field_120);
        this_00->Unregister(field_168);
    }

    // 0x1009b7c20
    void AvgLuminanceFilterDownsample::CalcAvgAndAdaptedLuminance(render::RenderContext& renderContext,
                                                                  const render::Texture& texture, float arg3,
                                                                  float arg4,
                                                                  graphics::ViewRenderTargets* viewRenderTargets) {
        bool cVar5;
        long lVar7;
        RenderTargets* pRVar8;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_01;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar17;
        RenderTargets* pRVar18;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar19;
        uint64_t* puVar20;
        VertexDeclaration* vertexDeclaration;
        unsigned long arg1;
        uint8_t local_b8[32];
        DrawCallState local_98;
        shared_ptr<render::RenderTargets>* local_60;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_50;

        Texture* local_48 = texture;
        if (viewRenderTargets == nullptr) {
            eastl::swap<shared_ptr<render::RenderTargets>>(field_152, field_136);
        } else {
            cVar5 = EnsureRenderTargetsAvailable(viewRenderTargets);
            if (!cVar5) {
                return;
            }
            viewRenderTargets->Swap(*(HashedString*)PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588,
                                    *(HashedString*)PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578);
            if (viewRenderTargets != nullptr) {
                local_60 = (shared_ptr<render::RenderTargets>*)viewRenderTargets->Get(
                    *(HashedString*)PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580);
                goto LAB_1009b7cc6;
            }
        }
        local_60 = (shared_ptr<render::RenderTargets>*)field_32.back();
    LAB_1009b7cc6:
        if (viewRenderTargets == nullptr) {
            local_50 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_136;
            local_b8._24_8_ = &field_152;
            cVar5 = field_28;
        } else {
            local_50 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)viewRenderTargets->Get(
                *(HashedString*)PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578);
            local_b8._24_8_ = viewRenderTargets->Get(*(HashedString*)PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588);
            cVar5 = field_28;
        }
        if (cVar5) {
            local_138 = ImVec4(1.0, 1.0, 1.0, 1.0);
            lVar7 = &local_138->Instance();
            renderContext.SetBlendState((lVar7 + 1524));
            pRVar8 = (RenderTargets*)local_50->end();
            renderContext.ClearRenderTargets(pRVar8, &local_138, 1);
            pRVar8 = (RenderTargets*)local_b8._24_8_->end();
            renderContext.ClearRenderTargets(pRVar8, &local_138, 1);
            field_28 = '\0';
        }
        DrawCallState* pDVar22 = &local_98;
        AvgLuminanceFilterDownsample* local_38 = this;
        new (pDVar22) render::DrawCallState();
        this_01 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                      pDVar22->GetRenderPipelineState();
        lVar7 = pDVar22->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            this_01, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar7 + 1524));
        pDVar22 = &local_98;
        auto pRVar9 = pDVar22->GetRenderPipelineState();
        lVar7 = pDVar22->Instance();
        pRVar9->SetRasteriserState((lVar7 + 1200));
        pDVar22 = &local_98;
        auto this_02 = pDVar22->GetRenderPipelineState();
        lVar7 = pDVar22->Instance();
        this_02->SetHeapSize((lVar7 + 1080));
        array<math::Vector4T<float>, 5ul> local_188;
        Texture* pTVar3 = local_48;
        auto piVar10 = local_48->second();
        int iVar6 = *piVar10;
        lVar7 = pTVar3->second();
        Calc3x3OffsetsNearestNeighbour(&local_188, iVar6, *(int*)(lVar7 + 4));
        pRVar9 = (RenderPipelineState*)local_98.GetRenderPipelineState();
        uint8_t* puVar1 = &local_38->field_56;
        auto pBVar11 = puVar1->end();
        pRVar9->SetShaderProgram(pBVar11);
        ShaderProgram* pSVar12 = (ShaderProgram*)(*puVar1).operator->();
        auto pHVar13 = postprocess::operator*(13);
        auto pVVar14 = local_188.data();
        pSVar12->SetShaderConstVector4(pHVar13, 5, pVVar14, 1);
        RenderToTextureHelper* pRVar2 = local_38->field_16;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_68 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&local_38->field_32;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar15 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*local_68)[0];
        pRVar8 = (RenderTargets*)pvVar15->end();
        auto pSVar16 = postprocess::operator*(0);
        pSVar12 = (ShaderProgram*)**puVar1;
        pRVar2->RenderTextureToQuad(renderContext, local_98, pRVar8, local_48, *pSVar16, *pSVar12, nullptr, nullptr,
                                    -1);
        pRVar9 = (RenderPipelineState*)local_98.GetRenderPipelineState();
        local_48 = (Texture*)&local_38->field_104;
        pBVar11 = (BlendMode*)local_48->end();
        pRVar9->SetShaderProgram(pBVar11);
        ImVec4 local_138;
        pvVar15 = local_68;
        lVar7 = local_68->end();
        if (1 < lVar7 - 1U) {
            arg1 = 1;
            do {
                pvVar17 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*pvVar15)[arg1];
                pRVar8 = (RenderTargets*)pvVar17->end();
                pvVar15 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*pvVar15)[arg1 - 1];
                pRVar18 = (RenderTargets*)pvVar15->end();
                pvVar19 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                              pRVar18->GetColourTargetTextures();
                puVar20 = (uint64_t*)(*pvVar19)[0];
                piVar10 = (int*)(*puVar20)->second();
                pRVar8->Invalidate();
                Calc4x4OffsetsNearestNeighbour(&local_138, *piVar10, piVar10[1]);
                pSVar12 = (ShaderProgram*)(*local_48).operator->();
                pHVar13 = (HashedString*)postprocess::operator*(15);
                pVVar14 = (Vector4T<float>*)local_138.data();
                pSVar12->SetShaderConstVector4(pHVar13, 8, pVVar14, 1);
                pRVar2 = local_38->field_16;
                pvVar19 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                              pRVar18->GetColourTargetTextures();
                puVar20 = (uint64_t*)(*pvVar19)[0];
                pTVar3 = (Texture*)*puVar20;
                pSVar16 = (ShaderProgramVariable*)postprocess::operator*(16);
                pSVar12 = (ShaderProgram*)**local_48;
                pRVar2->RenderTextureToQuad(renderContext, local_98, pRVar8, pTVar3, *pSVar16, *pSVar12, nullptr,
                                            nullptr, -1);
                pvVar15 = local_68;
                lVar7 = local_68->end();
                arg1 = arg1 + 1;
            } while (arg1 < lVar7 - 1U);
        }
        lVar7 = pvVar15->end();
        pvVar17 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*pvVar15)[lVar7 - 1];
        pRVar8 = (RenderTargets*)pvVar17->end();
        lVar7 = pvVar15->end();
        pvVar15 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*pvVar15)[lVar7 - 2];
        pRVar18 = (RenderTargets*)pvVar15->end();
        pvVar19 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                      pRVar18->GetColourTargetTextures();
        puVar20 = (uint64_t*)(*pvVar19)[0];
        piVar10 = (int*)(*puVar20)->second();
        iVar6 = *piVar10;
        pvVar19 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                      pRVar18->GetColourTargetTextures();
        puVar20 = (uint64_t*)(*pvVar19)[0];
        lVar7 = (*puVar20)->second();
        Calc4x4OffsetsNearestNeighbour(&local_138, iVar6, *(int*)(lVar7 + 4));
        pRVar9 = (RenderPipelineState*)local_98.GetRenderPipelineState();
        puVar1 = &local_38->field_120;
        pBVar11 = (BlendMode*)puVar1->end();
        pRVar9->SetShaderProgram(pBVar11);
        pSVar12 = (ShaderProgram*)(*puVar1).operator->();
        pHVar13 = (HashedString*)postprocess::operator*(15);
        pVVar14 = (Vector4T<float>*)local_138.data();
        pSVar12->SetShaderConstVector4(pHVar13, 8, pVVar14, 1);
        pRVar2 = local_38->field_16;
        pvVar19 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                      pRVar18->GetColourTargetTextures();
        puVar20 = (uint64_t*)(*pvVar19)[0];
        pTVar3 = (Texture*)*puVar20;
        pSVar16 = (ShaderProgramVariable*)postprocess::operator*(16);
        pSVar12 = (ShaderProgram*)**puVar1;
        pRVar2->RenderTextureToQuad(renderContext, local_98, pRVar8, pTVar3, *pSVar16, *pSVar12, nullptr, nullptr, -1);
        new (local_b8) render::Viewport(0, 0, 1, 1, 0.0, 1.0);
        AvgLuminanceFilterDownsample* pAVar4 = local_38;
        auto pOVar21 = local_98.GetOutputMergerState();
        pOVar21->SetViewports(local_b8, 1);
        pOVar21 = local_98.GetOutputMergerState();
        pRVar8 = (RenderTargets*)local_50->end();
        pOVar21->SetRenderTargets(pRVar8);
        pRVar9 = (RenderPipelineState*)local_98.GetRenderPipelineState();
        puVar1 = &pAVar4->field_168;
        pBVar11 = (BlendMode*)puVar1->end();
        pRVar9->SetShaderProgram(pBVar11);
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* this_03 =
            (compressed_pair_imp<
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)(*puVar1)
                .operator->();
        vertexDeclaration = (VertexDeclaration*)this_03->second();
        auto vertexBuffer = pAVar4->field_16->GetBoneIDMap();
        pAVar4->field_184->SetVertexStreamData(vertexDeclaration, vertexBuffer);
        local_98.SetInputAssemblerState(pAVar4->field_184);
        pRVar8 = (RenderTargets*)(*local_60).operator->();
        pvVar19 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                      pRVar8->GetColourTargetTextures();
        puVar20 = (uint64_t*)(*pvVar19)[0];
        pTVar3 = (Texture*)*puVar20;
        pSVar12 = (ShaderProgram*)(*puVar1).operator->();
        pHVar13 = (HashedString*)postprocess::operator*(1);
        iVar6 = pSVar12->GetConstIndex(*pHVar13);
        pRVar9 = (RenderPipelineState*)local_98.GetRenderPipelineState();
        pRVar9->SetPSTextureSamplerPair(0, pTVar3, iVar6, nullptr, false);
        pSVar12 = (ShaderProgram*)(*puVar1).operator->();
        pHVar13 = (HashedString*)postprocess::operator*(19);
        iVar6 = pSVar12->GetConstIndex(*pHVar13);
        pRVar9 = (RenderPipelineState*)local_98.GetRenderPipelineState();
        pRVar8 = (RenderTargets*)(*local_b8._24_8_).operator->();
        pvVar19 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                      pRVar8->GetColourTargetTextures();
        puVar20 = (uint64_t*)(*pvVar19)[0];
        pRVar9->SetPSTextureSamplerPair(1, *puVar20, iVar6, nullptr, false);
        pSVar12 = (ShaderProgram*)(*puVar1).operator->();
        pHVar13 = (HashedString*)postprocess::operator*(17);
        pSVar12->SetShaderConstFloat1(pHVar13, arg3);
        pSVar12 = (ShaderProgram*)(*puVar1).operator->();
        pHVar13 = (HashedString*)postprocess::operator*(18);
        pSVar12->SetShaderConstFloat1(pHVar13, 1.0 / arg4);
        pAVar4->field_16->RenderQuad(renderContext, local_98);
    }

    // 0x1009b84c0
    void AvgLuminanceFilterDownsample::RenderDebug(const render::Viewport& viewport) const {
        uint64_t uVar1;
        int iVar2;
        shared_ptr<render::RenderTargets>* this_00;
        RenderTargets* pRVar4;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar5;
        uint64_t* puVar6;
        ImVec4 local_70;
        Point<float> local_60;
        SideBarData local_58;
        float local_4c;
        Point<float> local_48;
        uint8_t local_40[12];

        local_40._8_4_ = 128.0 / (float)viewport.field_8;
        float local_34 = 128.0 / (float)viewport.field_12;
        auto plVar3 = DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar3 != nullptr) {
            this_00 = (shared_ptr<render::RenderTargets>*)field_32.back();
            pRVar4 = (RenderTargets*)(*this_00).operator->();
            pvVar5 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         pRVar4->GetColourTargetTextures();
            puVar6 = (uint64_t*)(*pvVar5)[0];
            uVar1 = *puVar6;
            local_70 = ImVec4(0.0, 0.0, (float)local_40._8_4_, local_34);
            local_48 = math::Point(0.0, 0.0);
            local_60 = math::Point(1.0, 1.0);
            new (local_40) math::ColourStorage8888(255, 255, 255, 255);
            iVar2 = local_40->GetX();
            local_58 = oldscape::sidebars::SideBarData(iVar2, 0);
            (**(void (**)(...))(*plVar3 + 112))(plVar3, uVar1, &local_70, &local_48, &local_60, 0, 0, 0, &local_58);
        }
        plVar3 = DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar3 != nullptr) {
            pRVar4 = (RenderTargets*)field_136.operator->();
            pvVar5 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         pRVar4->GetColourTargetTextures();
            puVar6 = (uint64_t*)(*pvVar5)[0];
            uVar1 = *puVar6;
            local_70 = ImVec4(0.0, local_34, (float)local_40._8_4_, local_34);
            local_48 = math::Point(0.0, 0.0);
            local_60 = math::Point(1.0, 1.0);
            new (local_40) math::ColourStorage8888(255, 255, 255, 255);
            iVar2 = local_40->GetX();
            local_58 = oldscape::sidebars::SideBarData(iVar2, 0);
            (**(void (**)(...))(*plVar3 + 112))(plVar3, uVar1, &local_70, &local_48, &local_60, 0, 0, 0, &local_58);
        }
        plVar3 = DebugPrimitiveCollectorBasic::GetCollector("");
        if (plVar3 != nullptr) {
            local_4c = local_34 + local_34;
            pRVar4 = (RenderTargets*)field_152.operator->();
            pvVar5 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         pRVar4->GetColourTargetTextures();
            puVar6 = (uint64_t*)(*pvVar5)[0];
            uVar1 = *puVar6;
            local_70 = ImVec4(0.0, local_4c, (float)local_40._8_4_, local_34);
            local_48 = math::Point(0.0, 0.0);
            local_60 = math::Point(1.0, 1.0);
            new (local_40) math::ColourStorage8888(255, 255, 255, 255);
            iVar2 = local_40->GetX();
            local_58 = oldscape::sidebars::SideBarData(iVar2, 0);
            (**(void (**)(...))(*plVar3 + 112))(plVar3, uVar1, &local_70, &local_48, &local_60, 0, 0, 0, &local_58);
        }
    }

    // 0x1009b87c0
    uint64_t AvgLuminanceFilterDownsample::GetAvgLuminanceTex() const {
        if (field_24 == 1) {
            LogAssert("m_shaderOutputFormat != LuminanceShaderOutputFormat::DEPTH",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilterDownsample.cpp",
                      248, nullptr);
        }
        auto this_00 = field_32.back();
        RenderTargets* this_01 = (RenderTargets*)(*this_00).operator->();
        auto this_02 = this_01->GetColourTargetTextures();
        uint64_t* puVar1 = (uint64_t*)(*this_02)[0];
        return *puVar1;
    }

    // 0x1009b8820
    uint64_t AvgLuminanceFilterDownsample::GetAdaptedLuminanceTex() const {
        if (field_24 == 1) {
            LogAssert("m_shaderOutputFormat != LuminanceShaderOutputFormat::DEPTH",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilterDownsample.cpp",
                      254, nullptr);
        }
        auto this_00 = field_136.operator->();
        auto this_01 = this_00->GetColourTargetTextures();
        uint64_t* puVar1 = (uint64_t*)(*this_01)[0];
        return *puVar1;
    }

    // 0x1009b8c70
    void AvgLuminanceFilterDownsample::DestroyRenderTargets() {
        shared_ptr<render::RenderTargets>* renderTargets;

        renderTargets = (shared_ptr<render::RenderTargets>*)field_32.data();
        auto psVar1 = field_32.end();
        for (; renderTargets != psVar1; renderTargets = renderTargets + 16) {
            field_8->Unregister(*renderTargets);
        }
        field_8->Unregister(field_152);
        field_8->Unregister(field_136);
    }

} // namespace jag::postprocess
