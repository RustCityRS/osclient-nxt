// libs/graphics/postprocess/filters/AvgLuminanceFilterCompute.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.postprocess

namespace jag::postprocess {
    class AvgLuminanceFilterCompute {
    public:
        // virtual methods in vtable order
        virtual ~AvgLuminanceFilterCompute();
        virtual uint32_t Init();
        virtual void Destroy();
        virtual void DestroyRenderTargets();
        virtual void CalcAvgAndAdaptedLuminance(render::RenderContext& renderContext, const render::Texture& texture,
                                                float arg3, float arg4, graphics::ViewRenderTargets* viewRenderTargets);
        virtual void RenderDebug(const render::Viewport& viewport) const;
        virtual uint64_t GetAvgLuminanceTex() const;
        virtual uint64_t GetAdaptedLuminanceTex() const;
        AvgLuminanceFilterCompute(render::RenderTargetsManager* renderTargetsManager,
                                  const graphicutils::RenderToTextureHelper* renderToTextureHelper);
        uint64_t CreateRenderTargets();
        static float s_colourScaleMultiplier; // = 1.0f

    private:
        RenderTargetsManager* field_8;
        RenderToTextureHelper* field_16;
        int field_24;
        uint8_t field_28;
        uint8_t _unknown_29[19];
        shared_ptr field_48;
        uint8_t _unknown_64[56];
    };

    // 0x100d4fc88
    float AvgLuminanceFilterCompute::s_colourScaleMultiplier = 1.0f;

    // 0x1009b5410
    AvgLuminanceFilterCompute::AvgLuminanceFilterCompute(
        render::RenderTargetsManager* renderTargetsManager,
        const graphicutils::RenderToTextureHelper* renderToTextureHelper)
        : AvgLuminanceFilter(renderTargetsManager, renderToTextureHelper) {
        new (&field_32) shared_ptr();
        new (field_48) shared_ptr();
        new (&field_64) shared_ptr();
        new (&field_80) shared_ptr();
        new (&field_96) shared_ptr();
        new (&field_112) shared_ptr();
    }

    // 0x1009b5550
    AvgLuminanceFilterCompute::~AvgLuminanceFilterCompute() {
        Destroy();
        field_112.~shared_ptr();
        field_96.~shared_ptr();
        field_80.~shared_ptr();
        field_64.~shared_ptr();
        field_48->~shared_ptr();
        field_32.~shared_ptr();
    }

    // 0x1009b5630
    uint32_t AvgLuminanceFilterCompute::Init() {
        Format format;
        RenderTargets* this_00;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_01;
        uint64_t* puVar2;
        long lVar3;
        ShaderProgramManager* this_02;
        char* pcVar4;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* this_04;
        ReturnValue local_58;
        ReturnValue local_40;

        uint32_t uVar1 = CreateRenderTargets();
        if ((char)uVar1 == '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilterCompute.cpp",
                      42, "Failed to determine AvgLuminanceFilterCompute render target format");
            Destroy();
        } else {
            this_00 = (RenderTargets*)(*field_48).operator->();
            this_01 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          this_00->GetColourTargetTextures();
            puVar2 = (uint64_t*)(*this_01)[0];
            this_04 = (compressed_pair_imp<
                       eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                       eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)*puVar2;
            lVar3 = this_04->second();
            format = *(Format*)(lVar3 + 12);
            this_02 = (ShaderProgramManager*)this_04->Instance();
            local_58 = RGBLogLuminanceCompute::BuildFirstPassCSFragment(format, false, true, false);
            pcVar4 = (char*)local_58.c_str();
            local_40 = this_02->RegisterFromSourceString(pcVar4, '\x01');
            field_96 = local_40;
            local_58 = RGBLogLuminanceCompute::BuildSecondPassCSFragment(format, false, true, false);
            pcVar4 = (char*)local_58.c_str();
            local_40 = this_02->RegisterFromSourceString(pcVar4, '\x01');
            field_112 = local_40;
        }
        return uVar1;
    }

    // 0x1009b57a0
    uint64_t AvgLuminanceFilterCompute::CreateRenderTargets() {
        uint8_t* puVar1;
        long* plVar2;
        uint64_t uVar3;
        uint64_t uVar4;
        uint64_t uVar5;
        uint64_t uVar6;
        uint64_t uVar7;
        uint64_t uVar8;
        uint64_t uVar9;
        RenderTargets* pRVar11;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar12;
        uint64_t* puVar13;
        uint64_t* puVar14;
        long lVar15;
        unsigned long uVar16;
        shared_ptr<render::RenderTargets> local_110;
        uint8_t local_90[72];
        shared_ptr<render::RenderTargets>* local_48;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_40;

        luminance::TryCreateRenderTarget(local_110, &field_24, field_8, 14780772, 1, 1);
        uint8_t* this_00 = field_48;
        *this_00 = local_110;
        if (this_00->operator_cast_to_bool() != '\0') {
            local_110 = std::array<render::Texture::Desc, 2ul>();
            pRVar11 = (RenderTargets*)(*this_00).operator->();
            pvVar12 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          pRVar11->GetColourTargetTextures();
            uVar16 = 0;
            puVar13 = (uint64_t*)(*pvVar12)[0];
            puVar13 = (uint64_t*)(*puVar13)->second();
            puVar14 = &local_110[uVar16];
            uVar3 = puVar13[1];
            uVar4 = puVar13[2];
            uVar5 = puVar13[3];
            uVar6 = puVar13[4];
            uVar7 = puVar13[5];
            uVar8 = puVar13[6];
            uVar9 = puVar13[7];
            *puVar14 = *puVar13;
            puVar14[1] = uVar3;
            puVar14[2] = uVar4;
            puVar14[3] = uVar5;
            puVar14[4] = uVar6;
            puVar14[5] = uVar7;
            puVar14[6] = uVar8;
            puVar14[7] = uVar9;
            *puVar14 = 34359738376;
            new (local_90) render::Texture::Desc();
            local_40.Register(field_8, 14780784, *3553, (int)&local_110, DAT_00000001, (unsigned int)(Desc*)local_90,
                              false);
            puVar1 = &field_32;
            *puVar1 = local_40;
            lVar15 = puVar1->end();
            if (lVar15 != 0) {
                local_90._64_8_ = puVar1;
                local_110 = std::array<render::Texture::Desc, 2ul>();
                pRVar11 = (RenderTargets*)(*this_00).operator->();
                pvVar12 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                              pRVar11->GetColourTargetTextures();
                uVar16 = 0;
                puVar13 = (uint64_t*)(*pvVar12)[0];
                puVar13 = (uint64_t*)(*puVar13)->second();
                puVar14 = &local_110[uVar16];
                uVar3 = puVar13[1];
                uVar4 = puVar13[2];
                uVar5 = puVar13[3];
                uVar6 = puVar13[4];
                uVar7 = puVar13[5];
                uVar8 = puVar13[6];
                uVar9 = puVar13[7];
                *puVar14 = *puVar13;
                puVar14[1] = uVar3;
                puVar14[2] = uVar4;
                puVar14[3] = uVar5;
                puVar14[4] = uVar6;
                puVar14[5] = uVar7;
                puVar14[6] = uVar8;
                puVar14[7] = uVar9;
                new (local_90) render::Texture::Desc();
                local_40.Register(field_8, 14780796, *3553, (int)&local_110, DAT_00000001,
                                  (unsigned int)(Desc*)local_90, false);
                puVar1 = &field_64;
                *puVar1 = local_40;
                lVar15 = puVar1->end();
                if (lVar15 != 0) {
                    local_48 = (shared_ptr<render::RenderTargets>*)puVar1;
                    local_40.Register(field_8, 14780810, *3553, (int)&local_110, DAT_00000001, (unsigned int)local_90,
                                      false);
                    puVar1 = &field_80;
                    *puVar1 = local_40;
                    lVar15 = puVar1->end();
                    uVar3 = local_90._64_8_;
                    if (lVar15 != 0) {
                        pRVar11 = (RenderTargets*)(*local_90._64_8_).operator->();
                        pvVar12 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                      pRVar11->GetColourTargetTextures();
                        puVar13 = (uint64_t*)(*pvVar12)[0];
                        plVar2 = (long*)*puVar13;
                        lVar15 = pvVar12->Instance();
                        (**(void (**)(...))(*plVar2 + 24))(plVar2, lVar15 + 208, 0);
                        pRVar11 = (RenderTargets*)(*this_00).operator->();
                        pvVar12 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                      pRVar11->GetColourTargetTextures();
                        puVar13 = (uint64_t*)(*pvVar12)[0];
                        plVar2 = (long*)*puVar13;
                        lVar15 = pvVar12->Instance();
                        (**(void (**)(...))(*plVar2 + 24))(plVar2, lVar15 + 80, 0);
                        pRVar11 = (RenderTargets*)(*local_48).operator->();
                        pvVar12 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                      pRVar11->GetColourTargetTextures();
                        puVar13 = (uint64_t*)(*pvVar12)[0];
                        plVar2 = (long*)*puVar13;
                        lVar15 = pvVar12->Instance();
                        (**(void (**)(...))(*plVar2 + 24))(plVar2, lVar15 + 80, 0);
                        pRVar11 = (RenderTargets*)(*puVar1).operator->();
                        pvVar12 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                      pRVar11->GetColourTargetTextures();
                        puVar13 = (uint64_t*)(*pvVar12)[0];
                        plVar2 = (long*)*puVar13;
                        lVar15 = pvVar12->Instance();
                        (**(void (**)(...))(*plVar2 + 24))(plVar2, lVar15 + 80, 0);
                        pRVar11 = (RenderTargets*)(*uVar3).operator->();
                        lVar15 = pRVar11->GetDepthStencilTargetTexture();
                        if (lVar15 != 0) {
                            LogAssert("m_AvgLuminanceRT8x8->GetDepthStencilTargetTexture() == nullptr",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "postprocess/filters/AvgLuminanceFilterCompute.cpp",
                                      400, nullptr);
                        }
                        pRVar11 = (RenderTargets*)(*this_00).operator->();
                        lVar15 = pRVar11->GetDepthStencilTargetTexture();
                        if (lVar15 != 0) {
                            LogAssert("m_AvgLuminanceRT1x1->GetDepthStencilTargetTexture() == nullptr",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "postprocess/filters/AvgLuminanceFilterCompute.cpp",
                                      401, nullptr);
                        }
                        pRVar11 = (RenderTargets*)(*local_48).operator->();
                        lVar15 = pRVar11->GetDepthStencilTargetTexture();
                        if (lVar15 != 0) {
                            LogAssert("m_CurrAdaptedLuminanceRT->GetDepthStencilTargetTexture() == nullptr",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "postprocess/filters/AvgLuminanceFilterCompute.cpp",
                                      402, nullptr);
                        }
                        pRVar11 = (RenderTargets*)(*puVar1).operator->();
                        lVar15 = pRVar11->GetDepthStencilTargetTexture();
                        if (lVar15 != 0) {
                            LogAssert("m_PrevAdaptedLuminanceRT->GetDepthStencilTargetTexture() == nullptr",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "postprocess/filters/AvgLuminanceFilterCompute.cpp",
                                      403, nullptr);
                        }
                        field_28 = 1;
                        return 1;
                    }
                }
            }
        }
        return 0;
    }

    // 0x1009b5dd0
    void AvgLuminanceFilterCompute::Destroy() {
        DestroyRenderTargets();
        auto this_00 = Instance();
        this_00->Unregister(field_96);
        this_00->Unregister(field_112);
    }

    // 0x1009b5e10
    void AvgLuminanceFilterCompute::CalcAvgAndAdaptedLuminance(render::RenderContext& renderContext,
                                                               const render::Texture& texture, float arg3, float arg4,
                                                               graphics::ViewRenderTargets* viewRenderTargets) {
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_03;
        long lVar7;
        RenderTargets* pRVar8;
        shared_ptr<render::RenderTargets>* local_90;
        Texture* local_78;

        Texture* local_80 = texture;
        if (viewRenderTargets == nullptr) {
            eastl::swap<shared_ptr<render::RenderTargets>>(field_80, field_64);
        LAB_1009b5e83:
            local_90 = (shared_ptr<render::RenderTargets>*)field_48;
        } else {
            if (EnsureRenderTargetsAvailable(viewRenderTargets) == '\0') {
                return;
            }
            viewRenderTargets->Swap(*(HashedString*)PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588,
                                    *(HashedString*)PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578);
            if (viewRenderTargets == nullptr)
                goto LAB_1009b5e83;
            local_90 = (shared_ptr<render::RenderTargets>*)viewRenderTargets->Get(
                *(HashedString*)PTR_VIEWRT_LUMINANCE_AVERAGE_100ee5580);
        }
        if (viewRenderTargets == nullptr) {
            this_03 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_64;
        } else {
            this_03 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)viewRenderTargets->Get(
                *(HashedString*)PTR_VIEWRT_LUMINANCE_ADAPTED_100ee5578);
            if (viewRenderTargets != nullptr) {
                local_78 =
                    (Texture*)viewRenderTargets->Get(*(HashedString*)PTR_VIEWRT_LUMINANCE_ADAPTED_PREVIOUS_100ee5588);
                goto LAB_1009b5f00;
            }
        }
        local_78 = (Texture*)&field_80;
    LAB_1009b5f00:
        if (field_28 != '\0') {
            local_68 = ImVec4(1.0, 1.0, 1.0, 1.0);
            lVar7 = &local_68->Instance();
            renderContext.SetBlendState((lVar7 + 1524));
            pRVar8 = (RenderTargets*)this_03->end();
            renderContext.ClearRenderTargets(pRVar8, &local_68, 1);
            pRVar8 = (RenderTargets*)local_78->end();
            renderContext.ClearRenderTargets(pRVar8, &local_68, 1);
            field_28 = 0;
        }
        DispatchCallState local_a8;
        auto pCVar9 = local_a8.GetComputePipelineState();
        uint8_t* this_00 = &field_96;
        auto pSVar10 = this_00->end();
        pCVar9->SetShaderProgram(pSVar10);
        pSVar10 = (ShaderProgram*)(*this_00).operator->();
        HashedString local_68("uSampleOffsets4x4");
        unsigned int local_3c = pSVar10->GetUniformLocationIndex(local_68);
        uint8_t* this_01 = &field_112;
        pSVar10 = (ShaderProgram*)(*this_01).operator->();
        local_68 = HashedString("uColourScale");
        int local_70 = pSVar10->GetUniformLocationIndex(local_68);
        pSVar10 = (ShaderProgram*)(*this_01).operator->();
        local_68 = HashedString("uInverseColourScale");
        int local_6c = pSVar10->GetUniformLocationIndex(local_68);
        pSVar10 = (ShaderProgram*)(*this_00).operator->();
        local_68 = HashedString("sSourceTex");
        unsigned int local_38 = pSVar10->GetUniformLocationIndex(local_68);
        pSVar10 = (ShaderProgram*)(*this_00).operator->();
        local_68 = HashedString("uTargetAvgLumTex");
        unsigned int local_34 = pSVar10->GetUniformBindingIndex(local_68);
        if ((int)local_38 < 0) {
            LogAssert("srcTextureSamplerSlot >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilterCompute.cpp",
                      136, nullptr);
        }
        if ((int)local_3c < 0) {
            LogAssert("sampleOffsetsSlot >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilterCompute.cpp",
                      137, nullptr);
        }
        if ((int)local_34 < 0) {
            LogAssert("destTextureSlot >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilterCompute.cpp",
                      138, nullptr);
        }
        pRVar8 = (RenderTargets*)field_32.operator->();
        auto pvVar11 = pRVar8->GetColourTargetTextures();
        uint64_t* puVar12 = (uint64_t*)(*pvVar11)[0];
        Texture* pTVar1 = (Texture*)*puVar12;
        local_68 = std::array<math::Vector4T<float>, 2ul>();
        Texture* pTVar2 = local_80;
        auto piVar13 = local_80->second();
        int iVar4 = *piVar13;
        lVar7 = pTVar2->second();
        Calc4x4OffsetsBilinear(&local_68, iVar4, *(int*)(lVar7 + 4));
        pSVar10 = (ShaderProgram*)(*this_00).operator->();
        auto pVVar14 = local_68.data();
        pSVar10->SetShaderConstVector4(local_3c, 2, pVVar14, 1);
        pSVar10 = (ShaderProgram*)(*this_00).operator->();
        pSVar10->SetShaderConstFloat1(local_70, 1.0);
        pSVar10 = (ShaderProgram*)(*this_00).operator->();
        pSVar10->SetShaderConstFloat1(local_6c, 1.0);
        pCVar9 = local_a8.GetComputePipelineState();
        pCVar9->SetCSTextureSamplerPair(0, local_80, local_38, nullptr, false);
        pCVar9 = local_a8.GetComputePipelineState();
        pCVar9->SetCSTextureImage(local_34, pTVar1, 35001);
        renderContext.DispatchCompute(local_a8, 8, 8, 1);
        renderContext.MemoryBarrier(8);
        local_a8 = render::DispatchCallState();
        pCVar9 = local_a8.GetComputePipelineState();
        pSVar10 = (ShaderProgram*)this_01->end();
        pCVar9->SetShaderProgram(pSVar10);
        pSVar10 = (ShaderProgram*)(*this_01).operator->();
        local_68 = HashedString("uSampleOffsets4x4");
        iVar4 = pSVar10->GetUniformLocationIndex(local_68);
        pSVar10 = (ShaderProgram*)(*this_01).operator->();
        local_68 = HashedString("uTimeDelta");
        int arg1 = pSVar10->GetUniformLocationIndex(local_68);
        pSVar10 = (ShaderProgram*)(*this_01).operator->();
        local_68 = HashedString("uExposureSpeedMul");
        uint32_t uVar5 = pSVar10->GetUniformLocationIndex(local_68);
        local_80 = (Texture*)(((uint64_t)local_80._4_4_ << 32) | (uint32_t)uVar5);
        pSVar10 = (ShaderProgram*)(*this_01).operator->();
        local_68 = HashedString("uColourScale");
        local_70 = pSVar10->GetUniformLocationIndex(local_68);
        pSVar10 = (ShaderProgram*)(*this_01).operator->();
        local_68 = HashedString("uInverseColourScale");
        local_6c = pSVar10->GetUniformLocationIndex(local_68);
        pSVar10 = (ShaderProgram*)(*this_01).operator->();
        local_68 = HashedString("sSourceTex");
        local_3c = pSVar10->GetUniformLocationIndex(local_68);
        pSVar10 = (ShaderProgram*)(*this_01).operator->();
        local_68 = HashedString("uPrevAdaptedLumTex");
        local_38 = pSVar10->GetUniformBindingIndex(local_68);
        pSVar10 = (ShaderProgram*)(*this_01).operator->();
        local_68 = HashedString("uTargetAvgLumTex");
        local_34 = pSVar10->GetUniformBindingIndex(local_68);
        pSVar10 = (ShaderProgram*)(*this_01).operator->();
        local_68 = HashedString("uTargetAdaptedLumTex");
        int iVar6 = pSVar10->GetUniformBindingIndex(local_68);
        if (iVar4 < 0) {
            LogAssert("sampleOffsetsSlot >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilterCompute.cpp",
                      211, nullptr);
        }
        if (arg1 < 0) {
            LogAssert("timeDeltaSlot >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilterCompute.cpp",
                      212, nullptr);
        }
        if ((int)local_80 < 0) {
            LogAssert("exposureSpeedMulSlot >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilterCompute.cpp",
                      213, nullptr);
        }
        if ((int)local_3c < 0) {
            LogAssert("srcAvgLumTextureSamplerSlot >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilterCompute.cpp",
                      215, nullptr);
        }
        if ((int)local_38 < 0) {
            LogAssert("prevAdaptedLumTexSlot >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilterCompute.cpp",
                      216, nullptr);
        }
        if ((int)local_34 < 0) {
            LogAssert("avgLumTextSlot >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilterCompute.cpp",
                      217, nullptr);
        }
        if (iVar6 < 0) {
            LogAssert("curAdaptedLumTexSlot >= 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilterCompute.cpp",
                      218, nullptr);
        }
        pRVar8 = (RenderTargets*)field_32.operator->();
        pvVar11 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                      pRVar8->GetColourTargetTextures();
        puVar12 = (uint64_t*)(*pvVar11)[0];
        pTVar1 = (Texture*)*puVar12;
        pRVar8 = (RenderTargets*)(*local_78).operator->();
        pvVar11 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                      pRVar8->GetColourTargetTextures();
        puVar12 = (uint64_t*)(*pvVar11)[0];
        local_78 = (Texture*)*puVar12;
        pRVar8 = (RenderTargets*)(*local_90).operator->();
        pvVar11 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                      pRVar8->GetColourTargetTextures();
        puVar12 = (uint64_t*)(*pvVar11)[0];
        pTVar2 = (Texture*)*puVar12;
        pRVar8 = (RenderTargets*)(*this_03).operator->();
        pvVar11 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                      pRVar8->GetColourTargetTextures();
        puVar12 = (uint64_t*)(*pvVar11)[0];
        local_90 = (shared_ptr<render::RenderTargets>*)(((uint64_t)local_90._4_4_ << 32) | (uint32_t)iVar6);
        Texture* texture_00 = (Texture*)*puVar12;
        local_68 = std::array<math::Vector4T<float>, 2ul>();
        piVar13 = (int*)pTVar1->second();
        iVar6 = *piVar13;
        lVar7 = pTVar1->second();
        Calc4x4OffsetsBilinear(&local_68, iVar6, *(int*)(lVar7 + 4));
        pSVar10 = (ShaderProgram*)(*this_01).operator->();
        pVVar14 = (Vector4T<float>*)local_68.data();
        pSVar10->SetShaderConstVector4(iVar4, 2, pVVar14, 1);
        pSVar10 = (ShaderProgram*)(*this_01).operator->();
        pSVar10->SetShaderConstFloat1(arg1, arg3);
        pSVar10 = (ShaderProgram*)(*this_01).operator->();
        pSVar10->SetShaderConstFloat1((int)local_80, 1.0 / arg4);
        pSVar10 = (ShaderProgram*)(*this_01).operator->();
        pSVar10->SetShaderConstFloat1(local_70, 1.0);
        pSVar10 = (ShaderProgram*)(*this_01).operator->();
        pSVar10->SetShaderConstFloat1(local_6c, 1.0);
        pCVar9 = local_a8.GetComputePipelineState();
        pCVar9->SetCSTextureSamplerPair(0, pTVar1, local_3c, nullptr, false);
        pCVar9 = local_a8.GetComputePipelineState();
        pCVar9->SetCSTextureImage(local_38, local_78, 35002);
        pCVar9 = local_a8.GetComputePipelineState();
        pCVar9->SetCSTextureImage(local_34, pTVar2, 35001);
        pCVar9 = local_a8.GetComputePipelineState();
        pCVar9->SetCSTextureImage((unsigned int)local_90, texture_00, 35001);
        renderContext.DispatchCompute(local_a8, 1, 1, 1);
        renderContext.MemoryBarrier(40);
    }

    // 0x1009b6900
    void AvgLuminanceFilterCompute::RenderDebug(const render::Viewport& viewport) const {
        uint64_t uVar1;
        int iVar2;
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
            pRVar4 = (RenderTargets*)(*field_48).operator->();
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
            pRVar4 = (RenderTargets*)field_64.operator->();
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
            pRVar4 = (RenderTargets*)field_80.operator->();
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

    // 0x1009b6bf0
    uint64_t AvgLuminanceFilterCompute::GetAvgLuminanceTex() const {
        if (field_24 == 1) {
            LogAssert("m_shaderOutputFormat != LuminanceShaderOutputFormat::DEPTH",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilterCompute.cpp",
                      301, nullptr);
        }
        RenderTargets* this_00 = (RenderTargets*)(*field_48).operator->();
        auto this_01 = this_00->GetColourTargetTextures();
        uint64_t* puVar1 = (uint64_t*)(*this_01)[0];
        return *puVar1;
    }

    // 0x1009b6c50
    uint64_t AvgLuminanceFilterCompute::GetAdaptedLuminanceTex() const {
        if (field_24 == 1) {
            LogAssert("m_shaderOutputFormat != LuminanceShaderOutputFormat::DEPTH",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "filters/AvgLuminanceFilterCompute.cpp",
                      307, nullptr);
        }
        auto this_00 = field_64.operator->();
        auto this_01 = this_00->GetColourTargetTextures();
        uint64_t* puVar1 = (uint64_t*)(*this_01)[0];
        return *puVar1;
    }

    // 0x1009b6cb0
    void AvgLuminanceFilterCompute::DestroyRenderTargets() {
        field_8->Unregister(field_32);
        field_8->Unregister(*field_48);
        field_8->Unregister(field_80);
        field_8->Unregister(field_64);
    }

} // namespace jag::postprocess
