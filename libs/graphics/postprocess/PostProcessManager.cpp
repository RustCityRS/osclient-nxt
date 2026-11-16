// libs/graphics/postprocess/PostProcessManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.postprocess

#include "PostProcessManager.h"

namespace jag::postprocess {
    // 0x100009d50: PostProcessManager::GetPostProcessParams() has the same machine code as eastl::compressed_pair_imp<eastl::string*, eastl::allocator, 0>::second()

    // 0x100102fa0: PostProcessManager::GetRenderTargetsManager() has the same machine code as oldscape::rs2lib::InputField::GetSelectionStart() const

    // 0x1001c4880: PostProcessManager::GetBrightPassFilter() has the same machine code as graphics::RT7Core::GetPostProcessManager()

    // 0x1003c1fc0: PostProcessManager::GetDownSampledSourceDepthMinRTs() const has the same machine code as game::LocationContainer::GetDynamicChangedLocations() const

    // 0x100547950: PostProcessManager::GetDownSampledSourceRTs() const has the same machine code as ui::Component::GetServerConfig()

    // 0x1009a9bb0
    PostProcessManager::PostProcessManager(render::RenderTargetsManager* renderTargetsManager, unsigned int arg2) {
        field_0 = '\0';
        field_1 = '\0';
        new (&field_8) PostProcessParams();
        m_pRenderTargetsManager = renderTargetsManager;
        new (&field_216) eastl::vector<shared_ptr<PostProcessEffect>>();
        new (&field_248) shared_ptr();
        new (&field_264) shared_ptr();
        new (&field_280) shared_ptr();
        new (&field_296) Array<shared_ptr<render::RenderTargets>>();
        new (&field_320) Array<shared_ptr<render::RenderTargets>>();
        new (&field_344) Array<shared_ptr<render::RenderTargets>>();
        new (field_368) shared_ptr();
        new (field_384) shared_ptr();
        uint8_t* renderToTextureHelper = &field_1232;
        new (&field_400) DownSamplerFilter(*renderToTextureHelper);
        new (&field_408) DepthDownSamplerFilter(renderToTextureHelper);
        new (&field_448) BrightPassFilter(renderTargetsManager, renderToTextureHelper);
        new (&field_680) GaussianBlurFilter(renderTargetsManager, renderToTextureHelper);
        new (&field_728) KawaseBlurFilter(renderTargetsManager, renderToTextureHelper);
        new (&field_968) DualFilteringBlurFilter(renderTargetsManager, renderToTextureHelper);
        field_1016.unique_ptr<true, void>();
        new (&field_1024) ViewTransforms();
        new (renderToTextureHelper) graphicutils::RenderToTextureHelper();
        if (renderTargetsManager == nullptr) {
            LogAssert("pRenderTargetsManager != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "PostProcessManager.cpp",
                      21, nullptr);
        }
        field_216.reserve((unsigned long)arg2);
    }

    // 0x1009a9fb0
    PostProcessManager::~PostProcessManager() {
        Destroy();
        field_1232.~RenderToTextureHelper();
        field_1016.~unique_ptr();
        field_968.~DualFilteringBlurFilter();
        field_728.~KawaseBlurFilter();
        field_680.~GaussianBlurFilter();
        field_448.~BrightPassFilter();
        field_408.~DepthDownSamplerFilter();
        field_384->~shared_ptr();
        field_368->~shared_ptr();
        field_344.~Array();
        field_320.~Array();
        field_296.~Array();
        field_280.~shared_ptr();
        field_264.~shared_ptr();
        field_248.~shared_ptr();
        field_216.~vector();
    }

    // 0x1009aa160
    void PostProcessManager::Destroy() {
        field_216.clear();
        DestroyRenderingResources();
        if ((&field_1016)->operator_cast_to_bool() != '\0') {
            field_1016.reset(nullptr);
        }
    }

    // 0x1009aa1c0
    uint8_t PostProcessManager::Init() {
        bool cVar1;
        Logger* pLVar8;
        long* plVar9;
        ReturnValue local_40;
        RenderToTextureHelper* local_38;

        auto this_00 = Instance();
        long lVar7 = this_00->GetOrigin();
        if (*(char*)(lVar7 + 189) == '\0') {
        LAB_1009aa200:
            pLVar8 = logger::default_logger();
            pLVar8->Log(false, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                        "PostProcessManager.cpp",
                        59, "PostProcessManager: Using Vertex/Pixel AvgLuminanceFilter");
            local_38 = (RenderToTextureHelper*)&field_1232;
            local_40 = std::make_unique<AvgLuminanceFilterDownsample, render::RenderTargetsManager*&,
                                        graphicutils::RenderToTextureHelper*>(m_pRenderTargetsManager, local_38);
        } else {
            if (((NXTPixScreen*)this_00->Instance())->GetUIHeight() == 3)
                goto LAB_1009aa200;
            pLVar8 = logger::default_logger();
            pLVar8->Log(false, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                        "PostProcessManager.cpp",
                        45, "PostProcessManager: Using Compute AvgLuminanceFilter");
            local_38 = (RenderToTextureHelper*)&field_1232;
            local_40 = std::make_unique<AvgLuminanceFilterCompute, render::RenderTargetsManager*&,
                                        graphicutils::RenderToTextureHelper*>(m_pRenderTargetsManager, local_38);
            (&field_1016)->operator=(&local_40);
            plVar9 = (long*)field_1016.operator->();
            cVar1 = (**(void (**)(...))(*plVar9 + 16))(plVar9);
            if (cVar1)
                goto LAB_1009aa317;
            pLVar8 = logger::default_logger();
            pLVar8->Log(
                false, 5,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                "PostProcessManager.cpp",
                53,
                "PostProcessManager: could not initialize compute, falling back to Vertex/Pixel AvgLuminanceFilter");
            local_38 = (RenderToTextureHelper*)&field_1232;
            local_40 = std::make_unique<AvgLuminanceFilterDownsample, render::RenderTargetsManager*&,
                                        graphicutils::RenderToTextureHelper*>(m_pRenderTargetsManager, local_38);
        }
        (&field_1016)->operator=(&local_40);
        plVar9 = (long*)field_1016.operator->();
        cVar1 = (**(void (**)(...))(*plVar9 + 16))(plVar9);
        if (!cVar1) {
            field_1016.reset(nullptr);
        }
    LAB_1009aa317:
        uint8_t bVar2 = field_680.Init();
        uint8_t bVar3 = field_728.Init();
        uint8_t bVar4 = field_968.Init();
        return field_408.Init(false) & bVar4 & bVar3 & bVar2;
    }

    // 0x1009aad70
    void PostProcessManager::DestroyRenderingResources() {
        long* plVar2;

        if ((&field_1016)->operator_cast_to_bool() != '\0') {
            plVar2 = (long*)field_1016.operator->();
            (**(void (**)(...))(*plVar2 + 24))(plVar2);
        }
        field_448.Destroy();
        field_680.Destroy();
        field_728.Destroy();
        field_968.Destroy();
        field_408.Destroy();
        auto this_00 = field_216.HeapBeginPtr();
        auto psVar3 = field_216.end();
        for (; this_00 != psVar3; this_00 = this_00 + 16) {
            plVar2 = (long*)(*this_00).operator->();
            (**(void (**)(...))(*plVar2 + 48))(plVar2);
        }
        DestroyRenderTargets();
        render::RenderTargets::SafeReset(field_248);
        render::RenderTargets::SafeReset(*field_368);
    }

    // 0x1009aae70
    unsigned long PostProcessManager::CreateRenderingResources() {
        long* plVar7;

        bool cVar1 = (&field_1016)->operator_cast_to_bool();
        uint8_t bVar2 = 1;
        if (cVar1) {
            plVar7 = (long*)field_1016.operator->();
            bVar2 = (**(void (**)(...))(*plVar7 + 16))(plVar7);
        }
        uint8_t bVar3 = field_680.Init();
        uint8_t bVar4 = field_728.Init();
        uint8_t bVar5 = field_968.Init();
        uint32_t uVar6 = field_408.Init(false);
        unsigned long uVar9 = (unsigned long)(((uint32_t)((int32_t)((unsigned int)uVar6 >> 8)) << 8) |
                                              (uint8_t)((uint8_t)uVar6 & bVar5 & bVar4 & bVar3 & bVar2));
        auto this_00 = field_216.HeapBeginPtr();
        auto psVar8 = field_216.end();
        for (; this_00 != psVar8; this_00 = this_00 + 16) {
            plVar7 = (long*)(*this_00).operator->();
            bVar2 = (**(void (**)(...))(*plVar7 + 40))(plVar7);
            uVar9 = (((uint64_t)((int64_t)(uVar9 >> 8)) << 8) | (uint8_t)((uint8_t)uVar9 & bVar2));
        }
        return uVar9;
    }

    // 0x1009ab0f0
    void PostProcessManager::DestroyRenderTargets() {
        auto psVar3 = field_296.data();
        auto psVar2 = field_296.end();
        for (; psVar3 != psVar2; psVar3 = psVar3 + 16) {
            m_pRenderTargetsManager->Unregister(*psVar3);
        }
        psVar3 = (shared_ptr<render::RenderTargets>*)field_320.data();
        psVar2 = (shared_ptr<render::RenderTargets>*)field_320.end();
        for (; psVar3 != psVar2; psVar3 = psVar3 + 16) {
            m_pRenderTargetsManager->Unregister(*psVar3);
        }
        psVar3 = (shared_ptr<render::RenderTargets>*)field_344.data();
        psVar2 = (shared_ptr<render::RenderTargets>*)field_344.end();
        for (; psVar3 != psVar2; psVar3 = psVar3 + 16) {
            m_pRenderTargetsManager->Unregister(*psVar3);
        }
        m_pRenderTargetsManager->Unregister(field_264);
        m_pRenderTargetsManager->Unregister(field_280);
        if (field_384->operator_cast_to_bool() != '\0') {
            m_pRenderTargetsManager->Unregister(*field_384);
        }
    }

    // 0x1009ab210
    void PostProcessManager::AddEffect(const shared_ptr<PostProcessEffect>& postProcessEffect) {
        uint8_t auVar3[16];

        uint8_t* this_00 = &field_216;
        auto psVar1 = this_00->HeapBeginPtr();
        auto psVar2 = this_00->end();
        psVar1 = eastl::find<shared_ptr<game::Entity>*, shared_ptr<game::Entity>>(psVar1, psVar2, postProcessEffect);
        psVar2 = (shared_ptr<PostProcessEffect>*)this_00->end();
        if (psVar1 == psVar2) {
            this_00->push_back(postProcessEffect);
            psVar1 = (shared_ptr<PostProcessEffect>*)this_00->HeapBeginPtr();
            auVar3 = this_00->end();
            eastl::sort<shared_ptr<PostProcessEffect>*, (shared_ptr<PostProcessEffect> const&)->AddEffect()::__0>(
                psVar1, auVar3._0_8_, auVar3._8_8_);
        } else {
            psVar2 = (shared_ptr<PostProcessEffect>*)this_00->end();
            if (psVar1 == psVar2) {
                LogAssert("it != m_effects.end()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                          "PostProcessManager.cpp",
                          153, "Effect already added!");
            }
        }
    }

    // 0x1009ab320
    void PostProcessManager::RemoveEffect(const shared_ptr<PostProcessEffect>& postProcessEffect) {
        uint8_t* this_00 = &field_216;
        auto psVar1 = this_00->HeapBeginPtr();
        auto psVar2 = this_00->end();
        psVar1 = eastl::find<shared_ptr<game::Entity>*, shared_ptr<game::Entity>>(psVar1, psVar2, postProcessEffect);
        psVar2 = (shared_ptr<PostProcessEffect>*)this_00->end();
        if (psVar1 != psVar2) {
            this_00->erase(psVar1);
        }
    }

    // 0x1009ab3e0
    void PostProcessManager::RenderEffects(render::RenderContext& renderContext,
                                           const render::RenderTargets* renderTargets, const render::Texture* texture1,
                                           const render::Texture* texture2, const render::Viewport& viewport,
                                           const ViewTransforms& viewTransforms, float arg7, unsigned int arg8,
                                           bool arg9, graphics::ViewRenderTargets* viewRenderTargets) {
        uint8_t* puVar1;
        uint64_t uVar2;
        vector<unsigned long, eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true>>* pvVar3;
        PostProcessManager* pPVar4;
        char cVar5;
        uint8_t bVar6;
        uint8_t bVar7;
        bool bVar8;
        shared_ptr<PostProcessEffect>* psVar10;
        shared_ptr<PostProcessEffect>* psVar11;
        long* plVar12;
        int* piVar13;
        long lVar14;
        Desc* desc1;
        ReturnValue* pRVar15;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar16;
        RenderTargets* pRVar17;
        Texture* pTVar18;
        unsigned long long arg1;
        shared_ptr<render::RenderTargets>* this_02;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_03;
        long* plVar19;
        uint64_t* puVar20;
        Texture* pTVar21;
        unsigned int uVar22;
        uint8_t bVar23;
        uint32_t uVar24;
        ReturnValue local_f8;
        ReturnValue local_f0;
        uint8_t local_e8[16];
        ReturnValue local_d8;
        ReturnValue RStack_d0;
        ReturnValue local_c8;
        ReturnValue RStack_c0;
        ReturnValue local_b8;
        ReturnValue RStack_b0;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_a0;
        vector<unsigned long, eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true>>* local_80;
        RenderTargets* local_70;
        uint64_t local_68;
        uint64_t local_60;
        Texture* local_58;
        RenderTargets* local_50;
        unsigned int local_38;
        char local_31;

        PostProcessManager* local_40 = this;
        if (renderTargets == nullptr) {
            LogAssert("pDstRT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "PostProcessManager.cpp",
                      183, nullptr);
        }
        if (texture1 == nullptr) {
            LogAssert("pSrcColourTexture != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "PostProcessManager.cpp",
                      184, nullptr);
        }
        field_1024 = viewTransforms;
        int iVar9 = GetEnabledEffectCount();
        if (iVar9 < 1) {
            pvVar16 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          renderTargets->GetColourTargetTextures();
            plVar12 = (long*)(*pvVar16)[0];
            if ((Texture*)*plVar12 != texture1) {
                puVar1 = &field_248;
                pRVar17 = (RenderTargets*)(*puVar1).operator->();
                pRVar17->BindColourTargetTexture(texture1, 0, 0, 34069);
                pRVar17 = (RenderTargets*)puVar1->end();
                renderContext.SetRenderTargets(pRVar17);
                new (local_e8) shared_ptr();
                local_a0 = shared_ptr();
                renderContext.ResolveColourTargetData(renderTargets, 16384, *local_e8, local_a0);
                pRVar17 = (RenderTargets*)(*puVar1).operator->();
                pRVar17->Invalidate();
                pRVar17 = renderContext.GetBackBuffer();
                renderContext.SetRenderTargets(pRVar17);
            }
        } else {
            puVar1 = &field_216;
            psVar10 = (shared_ptr<PostProcessEffect>*)puVar1->HeapBeginPtr();
            local_80 = (vector<unsigned long, eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true>>*)puVar1;
            psVar11 = (shared_ptr<PostProcessEffect>*)puVar1->end();
            local_58 = texture2;
            if (psVar10 == psVar11) {
                bVar23 = 0;
            } else {
                bVar23 = 0;
                do {
                    plVar12 = (long*)(*psVar10).operator->();
                    cVar5 = (**(void (**)(...))(*plVar12 + 32))(plVar12);
                    if (cVar5) {
                        plVar12 = (long*)(*psVar10).operator->();
                        bVar6 = (**(void (**)(...))(*plVar12 + 56))(plVar12);
                        bVar23 = bVar23 | bVar6;
                    }
                    psVar10 = psVar10 + 16;
                } while (psVar10 != psVar11);
            }
            bVar7 = bVar23 >> 4 & 1 | bVar23;
            bVar6 = bVar7 | 2;
            if ((bVar23 & 12) == 0) {
                bVar6 = bVar7;
            }
            local_38 = (unsigned int)bVar6;
            local_60 = (long*)((((uint64_t)local_60._4_4_ << 32) | (uint32_t)local_38) & 18446744069414584322);
            if (((bVar6 & 2) != 0) && (local_58 == nullptr)) {
                LogAssert(
                    "((requirements & PostProcessEffectRequirements::DEPTH) == 0) || (pSrcDepthTexture != nullptr)",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                    "PostProcessManager.cpp",
                    215, nullptr);
            }
            if ((arg9) && ((iVar9 = viewport.field_8, piVar13 = (int*)texture1->second(),
                            iVar9 != *piVar13 || (iVar9 = viewport.field_12, lVar14 = texture1->second(),
                                                  iVar9 != *(int*)(lVar14 + 4))))) {
                pPVar4 = local_40;
                PerformViewportResolve(local_40, renderContext, texture1, local_58, viewport, bVar6);
                pRVar17 = (RenderTargets*)(*pPVar4->field_384).operator->();
                pvVar16 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                              pRVar17->GetColourTargetTextures();
                puVar20 = (uint64_t*)(*pvVar16)[0];
                texture1 = (Texture*)*puVar20;
                pRVar17 = (RenderTargets*)(*pPVar4->field_384).operator->();
                pTVar18 = (Texture*)pRVar17->GetDepthStencilTargetTexture();
            } else {
                pTVar18 = local_58;
            }
            local_58 = texture1;
            desc1 = (Desc*)texture1->second();
            if (pTVar18 == nullptr) {
                new (local_e8) render::Texture::Desc();
            } else {
                pRVar15 = (ReturnValue*)pTVar18->second();
                local_e8._0_8_ = *pRVar15;
                local_e8._8_8_ = pRVar15[1];
                local_d8 = pRVar15[2];
                RStack_d0 = pRVar15[3];
                local_c8 = pRVar15[4];
                RStack_c0 = pRVar15[5];
                local_b8 = pRVar15[6];
                RStack_b0 = pRVar15[7];
            }
            this = local_40;
            cVar5 = CreateRenderTargets(local_40, desc1, (Desc*)local_e8, arg8, bVar6);
            if (!cVar5) {
                return;
            }
            if (((int)local_60 != 0) && (pTVar18 == nullptr)) {
                LogAssert("pSrcDepthTexture != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                          "PostProcessManager.cpp",
                          236, nullptr);
            }
            local_70 = (RenderTargets*)field_280.end();
            local_50 = (RenderTargets*)field_264.end();
            pTVar21 = local_58;
            local_40 = (PostProcessManager*)(((uint64_t)local_40._1_7_ << 8) | (uint8_t)1);
            if (((int)local_60 == 0) && (lVar14 = local_58->second(), *(unsigned int*)(lVar14 + 16) < 2)) {
                pvVar16 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                              renderTargets->GetColourTargetTextures();
                plVar12 = (long*)(*pvVar16)[0];
                local_40 =
                    (PostProcessManager*)(((uint64_t)local_40._1_7_ << 8) | (uint8_t)(pTVar21 == (Texture*)*plVar12));
            }
            local_31 = cVar5;
            if ((uint8_t)local_40 == '\0') {
                local_68 = 0;
            } else {
                puVar1 = &field_248;
                pRVar17 = (RenderTargets*)puVar1->end();
                renderContext.SetRenderTargets(pRVar17);
                pRVar17 = (RenderTargets*)(*puVar1).operator->();
                local_68 = 0;
                pRVar17->BindColourTargetTexture(pTVar21, 0, 0, 34069);
                if ((int)local_60 != 0) {
                    if (pTVar18 == nullptr) {
                        LogAssert("pSrcDepthTexture",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "postprocess/PostProcessManager.cpp",
                                  251, "An enabled effect requires depth, but no depth texture was provided");
                    }
                    pRVar17 = (RenderTargets*)(*puVar1).operator->();
                    pRVar17->BindDepthStencilTargetTexture(pTVar18);
                    local_68 = local_50->GetDepthStencilTargetTexture();
                }
                pRVar17 = local_50;
                uVar22 = (int)local_60 << 7;
                new (local_e8) shared_ptr();
                local_a0 = shared_ptr();
                renderContext.ResolveColourTargetData(pRVar17, uVar22 | 16384, *local_e8, local_a0);
                pTVar21 = local_58;
            }
            if ((local_38 & 1) != 0) {
                if ((uint8_t)local_40 != '\0') {
                    pvVar16 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                  local_50->GetColourTargetTextures();
                    puVar20 = (uint64_t*)(*pvVar16)[0];
                    pTVar21 = (Texture*)*puVar20;
                }
                uVar22 = field_296.end();
                field_400.DownSample2x2(renderContext, field_296, *pTVar21, uVar22);
            }
            if ((local_38 & 4) != 0) {
                if ((int)local_60 == 0) {
                    LogAssert("requirements & PostProcessEffectRequirements::DEPTH",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                              "postprocess/PostProcessManager.cpp",
                              266, nullptr);
                }
                local_e8->WrapArray<Array<unsigned char>>(field_320);
                pTVar18 = (Texture*)local_50->GetDepthStencilTargetTexture();
                uVar22 = field_320.end();
                field_408.DownSample2x2(renderContext, *local_e8, *pTVar18, uVar22, false);
            }
            if ((local_38 & 8) != 0) {
                if ((int)local_60 == 0) {
                    LogAssert("requirements & PostProcessEffectRequirements::DEPTH",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                              "postprocess/PostProcessManager.cpp",
                              271, nullptr);
                }
                local_e8->WrapArray<Array<unsigned char>>(field_344);
                pTVar18 = (Texture*)local_50->GetDepthStencilTargetTexture();
                uVar22 = field_344.end();
                field_408.DownSample2x2(renderContext, *local_e8, *pTVar18, uVar22, true);
            }
            if ((local_38 & 16) != 0) {
                cVar5 = (&field_1016)->operator_cast_to_bool();
                if (cVar5) {
                    cVar5 = (field_296[1])->operator_cast_to_bool();
                    if (cVar5) {
                        arg1 = FrameTime::GetCurrentTimeMS();
                        plVar12 = (long*)field_1016.operator->();
                        this_02 = &field_296[1];
                        pRVar17 = (RenderTargets*)(*this_02).operator->();
                        pvVar16 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                      pRVar17->GetColourTargetTextures();
                        puVar20 = (uint64_t*)(*pvVar16)[0];
                        uVar2 = *puVar20;
                        uVar24 = field_168.GetValue(arg1);
                        (**(void (**)(...))(*plVar12 + 40))(arg7, uVar24, plVar12, renderContext, uVar2,
                                                            viewRenderTargets);
                    }
                }
            }
            pvVar3 = local_80;
            local_f8 = local_80->rbegin();
            local_f0 = pvVar3->rend();
            eastl::find_if<eastl::reverse_iterator<shared_ptr<PostProcessEffect>*>,
                           (render::RenderContext&)
                               ->RenderEffects(render::RenderTargets const*, render::Texture const*,
                                               render::Texture const*, render::Viewport const&, ViewTransforms const&,
                                               float, unsigned int, bool, graphics::ViewRenderTargets*)::__1>(
                (reverse_iterator<shared_ptr<PostProcessEffect>*>*)&local_a0,
                (reverse_iterator<shared_ptr<PostProcessEffect>*>*)&local_f8, (__1*)&local_f0);
            *local_e8 = pvVar3->rend();
            bVar8 = local_a0 != *local_e8;
            if (bVar8) {
                this_03 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)local_a0.operator->();
                plVar12 = (long*)this_03->end();
            } else {
                plVar12 = nullptr;
            }
            pvVar3 = local_80;
            psVar10 = (shared_ptr<PostProcessEffect>*)local_80->HeapBeginPtr();
            psVar11 = (shared_ptr<PostProcessEffect>*)pvVar3->end();
            pTVar18 = nullptr;
            if (psVar10 != psVar11) {
                local_60 = plVar12;
                do {
                    plVar19 = (long*)psVar10->end();
                    if (plVar19 == plVar12)
                        break;
                    plVar19 = (long*)(*psVar10).operator->();
                    cVar5 = (**(void (**)(...))(*plVar19 + 32))(plVar19);
                    if (cVar5) {
                        bVar8 = pTVar18 != nullptr;
                        pTVar18 = local_58;
                        if ((bVar8 | (uint8_t)local_40) == 1) {
                            pvVar16 =
                                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                    local_50->GetColourTargetTextures();
                            puVar20 = (uint64_t*)(*pvVar16)[0];
                            pTVar18 = (Texture*)*puVar20;
                        }
                        pvVar16 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                      local_70->GetColourTargetTextures();
                        puVar20 = (uint64_t*)(*pvVar16)[0];
                        piVar13 = (int*)(*puVar20)->second();
                        iVar9 = *piVar13;
                        pvVar16 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                      local_70->GetColourTargetTextures();
                        puVar20 = (uint64_t*)(*pvVar16)[0];
                        lVar14 = (*puVar20)->second();
                        new (local_e8) render::Viewport(0, 0, iVar9, *(int*)(lVar14 + 4), 0.0, 1.0);
                        plVar12 = (long*)(*psVar10).operator->();
                        (**(void (**)(...))(*plVar12 + 16))(plVar12, renderContext, local_70, pTVar18, local_68,
                                                            (Viewport*)local_e8, viewRenderTargets, this);
                        local_50->Invalidate();
                        eastl::swap<oldscape::graphics::Pix8*>(local_70, local_50);
                        plVar12 = local_60;
                    }
                    psVar10 = psVar10 + 16;
                    psVar11 = (shared_ptr<PostProcessEffect>*)local_80->end();
                } while (psVar10 != psVar11);
            }
            cVar5 = local_31;
            if (plVar12 != nullptr) {
                pTVar21 = local_58;
                if ((pTVar18 != nullptr | (uint8_t)local_40) == 1) {
                    pvVar16 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                  local_50->GetColourTargetTextures();
                    puVar20 = (uint64_t*)(*pvVar16)[0];
                    pTVar21 = (Texture*)*puVar20;
                }
                (**(void (**)(...))(*plVar12 + 16))(plVar12, renderContext, renderTargets, pTVar21, local_68, viewport,
                                                    viewRenderTargets, this);
                local_50->Invalidate();
            }
            DestroyRenderTargets();
            if (!cVar5) {
                return;
            }
        }
        pRVar17 = (RenderTargets*)field_248.operator->();
        pRVar17->Unbind();
    }

    // 0x1009abcf0
    int PostProcessManager::GetEnabledEffectCount() const {
        uint8_t bVar1;
        int iVar3;

        auto this_00 = field_216.HeapBeginPtr();
        auto psVar2 = field_216.end();
        if (this_00 == psVar2) {
            iVar3 = 0;
        } else {
            iVar3 = 0;
            do {
                bVar1 = ((WorldmapRenderer*)(*this_00).operator->())->IsValid();
                iVar3 = iVar3 + (unsigned int)bVar1;
                this_00 = this_00 + 16;
            } while (this_00 != psVar2);
        }
        return iVar3;
    }

    // 0x1009abd70
    void PostProcessManager::PerformViewportResolve(render::RenderContext& renderContext,
                                                    const render::Texture* texture1, const render::Texture* texture2,
                                                    const render::Viewport& viewport, unsigned char arg5) {
        uint32_t uVar1;
        uint32_t* puVar5;
        uint32_t* puVar6;
        char* str;
        long lVar10;
        uint64_t in_register_00000089;
        uint64_t local_128;
        uint8_t local_e8[64];
        uint8_t local_a8[72];
        uint8_t local_60[24];
        Viewport* local_40;
        Texture* local_38;

        local_40 = (Viewport*)(((uint64_t)local_40._4_4_ << 32) |
                               (uint32_t)((int)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg5)));
        shared_ptr<render::RenderTargets>* psVar11 = (shared_ptr<render::RenderTargets>*)field_368;
        local_a8._64_8_ = renderContext;
        bool cVar4 = psVar11->operator_cast_to_bool();
        local_60._16_8_ = this;
        shared_ptr<render::RenderTargets>* local_48 = psVar11;
        if (!cVar4) {
            local_38 = texture2;
            puVar5 = (uint32_t*)texture1->second();
            new (&local_128) std::array<render::Texture::Desc, 2ul>();
            psVar11 = local_48;
            uVar1 = *puVar5;
            puVar6 = &local_128[(unsigned long)renderContext];
            *puVar6 = uVar1;
            puVar6[1] = puVar5[1];
            puVar6[3] = puVar5[3];
            make_shared<render::RenderTargets>((ReturnValue*)local_a8);
            *psVar11 = *local_a8;
            str = (char*)(*psVar11).operator->();
            new (local_a8) render::Texture::Desc();
            psVar11 = local_48;
            render::RenderTargets::Create(str, 14778986, *3553, (int)&local_128, nullptr,
                                          (unsigned int)(Desc*)local_a8);
            texture2 = local_38;
        }
        uint64_t uVar3 = local_60._16_8_;
        RenderTargets* pRVar7 = (RenderTargets*)(*psVar11).operator->();
        Texture* pTVar12 = texture1;
        pRVar7->BindColourTargetTexture(texture1, 0, 0, 34069);
        if (texture2 != nullptr) {
            pRVar7 = (RenderTargets*)(*psVar11).operator->();
            pTVar12 = texture2;
            pRVar7->BindDepthStencilTargetTexture(texture2);
        }
        local_38 = (Texture*)(uVar3 + 384);
        cVar4 = local_38->operator_cast_to_bool();
        if (cVar4) {
            LogAssert("!m_viewportResolveRT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                      "PostProcessManager.cpp",
                      567, nullptr);
        }
        auto puVar8 = texture1->second();
        local_128 = *puVar8;
        uint64_t uStack_120 = puVar8[1];
        uint64_t local_118 = puVar8[2];
        uint64_t uStack_110 = puVar8[3];
        uint64_t local_108 = puVar8[4];
        uint64_t uStack_100 = puVar8[5];
        uint64_t local_f8 = puVar8[6];
        uint64_t uStack_f0 = puVar8[7];
        new (local_e8) render::Texture::Desc();
        new (local_a8) render::Texture::Desc();
        int iVar2 = viewport.field_8;
        int* piVar9 = &local_128[(unsigned long)pTVar12];
        uint8_t bVar13 = (uint8_t)local_40;
        *piVar9 = iVar2;
        piVar9[1] = viewport.field_12;
        if ((texture2 != nullptr) && (((unsigned long)local_40 & 2) != 0)) {
            lVar10 = texture2->second();
            local_a8._8_8_ = *(uint64_t*)(lVar10 + 8);
            local_a8._16_8_ = *(uint64_t*)(lVar10 + 16);
            local_a8._24_8_ = *(uint64_t*)(lVar10 + 24);
            local_a8._32_8_ = *(uint64_t*)(lVar10 + 32);
            local_a8._40_8_ = *(uint64_t*)(lVar10 + 40);
            local_a8._48_8_ = *(uint64_t*)(lVar10 + 48);
            local_a8._56_8_ = *(uint64_t*)(lVar10 + 56);
            local_a8._0_8_ = *(uint64_t*)&viewport.field_8;
        }
        local_40 = viewport;
        local_60->Register((char*)*(RenderTargetsManager**)(local_60._16_8_ + 208), 14779030, *3553, (int)&local_128,
                           DAT_00000001, (unsigned int)(Desc*)local_a8, false);
        pTVar12 = local_38;
        *local_38 = *local_60;
        psVar11 = local_48;
        pRVar7 = (RenderTargets*)local_48->end();
        uVar3 = local_a8._64_8_;
        local_a8._64_8_->SetRenderTargets(pRVar7);
        pRVar7 = (RenderTargets*)pTVar12->end();
        *local_60 = local_40->GetScreenRect();
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_138;
        uVar3->ResolveColourTargetData(pRVar7, (unsigned int)(bVar13 & 2) << 7 | 16384, *local_60, local_138);
        pRVar7 = (RenderTargets*)(*psVar11).operator->();
        pRVar7->Unbind();
    }

    // 0x1009ac0a0
    unsigned long PostProcessManager::CreateRenderTargets(const render::Texture::Desc& desc1,
                                                          const render::Texture::Desc& desc2, unsigned int arg3,
                                                          unsigned char arg4) {
        unsigned int uVar1;
        uint64_t uVar2;
        TextureType textureType;
        long lVar5;
        unsigned long uVar6;
        shared_ptr<render::RenderTargets>* psVar7;
        shared_ptr* psVar8;
        Logger* pLVar9;
        unsigned long uVar10;
        uint64_t in_register_00000081;
        uint32_t uVar18;
        uint8_t* puVar16;
        uint8_t local_188[64];
        uint64_t local_148;
        uint64_t uStack_140;
        uint64_t local_138;
        uint64_t uStack_130;
        uint64_t local_128;
        uint64_t uStack_120;
        uint64_t local_118;
        uint64_t uStack_110;
        uint64_t local_108;
        uint64_t uStack_100;
        uint64_t local_f8;
        uint64_t uStack_f0;
        uint64_t local_e8;
        uint64_t uStack_e0;
        uint64_t local_d8;
        uint64_t uStack_d0;
        uint8_t local_c8[72];
        unsigned int* local_80;
        unsigned long local_78;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_70;
        unsigned int local_54;
        AutoSingleton<ShaderThreadPoolSingleton> local_50;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_48;

        local_48 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(((uint64_t)local_48._4_4_ << 32) |
                                                                                (uint32_t)arg3);
        char* pcVar12 = "Post_Processing";
        PostProcessManager* local_38 = this;
        new (&local_148) std::array<render::Texture::Desc, 2ul>();
        int iVar14 = desc1.field_0;
        int* piVar4 = &local_148[(unsigned long)pcVar12];
        *piVar4 = iVar14;
        piVar4[1] = desc1.field_4;
        piVar4[3] = desc1.field_12;
        new (local_c8) render::Texture::Desc();
        PostProcessManager* pPVar15 = local_38;
        unsigned int local_3c = (unsigned int)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4);
        if ((arg4 & 2) != 0) {
            local_c8._0_4_ = desc2.field_0;
            local_c8._4_4_ = desc2.field_4;
            local_c8._12_4_ = desc2.field_12;
        }
        local_188->Register(local_38->m_pRenderTargetsManager, 14778639, *3553, (int)&local_148, DAT_00000001,
                            (unsigned int)(Desc*)local_c8, false);
        pPVar15->field_264 = *local_188;
        Desc* pDVar17 = (Desc*)local_188;
        pDVar17->~shared_ptr();
        uint8_t* puVar11 = &pPVar15->field_248;
        if (!(puVar11->operator_cast_to_bool())) {
            make_shared<render::RenderTargets>((ReturnValue*)local_188);
            *puVar11 = *local_188;
            ((RenderTargets*)(*puVar11).operator->())->Create("PostProcessResolveRT", 0);
        }
        pPVar15 = local_38;
        RenderTargetsManager* str = local_38->m_pRenderTargetsManager;
        new (pDVar17) render::Texture::Desc();
        RenderTargetsManager* pRVar13 = &local_70;
        pRVar13->Register(str, 14778683, *3553, (int)&local_148, DAT_00000001, (unsigned int)pDVar17, false);
        puVar11 = &pPVar15->field_280;
        *puVar11 = *pRVar13;
        if (!(puVar11->operator_cast_to_bool())) {
            pLVar9 = logger::default_logger();
            pcVar12 = "Failed to create PostProcess destination resolve target";
            iVar14 = 446;
        LAB_1009ac44f:
            uVar6 = 0;
            pLVar9->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/postprocess/"
                        "PostProcessManager.cpp",
                        iVar14, pcVar12, pDVar17);
            DestroyRenderTargets(local_38);
        } else {
            uVar10 = (unsigned long)local_48 & 4294967295;
            if ((local_3c & 1) != 0) {
                new (&local_148) std::array<render::Texture::Desc, 2ul>();
                pDVar17 = desc1;
                uVar1 = desc1.field_0;
                local_80 = &local_148[(unsigned long)pRVar13];
                pPVar15 = local_38;
                *local_80 = uVar1;
                local_80[1] = pDVar17->field_4;
                local_80[3] = pDVar17->field_12;
                puVar11 = &local_38->field_296;
                local_78 = uVar10;
                puVar11->set_max_size(uVar10, 0);
                local_48 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)puVar11;
                lVar5 = puVar11->end();
                if (lVar5 != 0) {
                    puVar11 = &DAT_00000001;
                    uVar10 = 0;
                    do {
                        local_54 = (int)puVar11 - 1;
                        *local_80 = *local_80 >> 1;
                        local_80[1] = local_80[1] >> 1;
                        local_c8._64_8_ = puVar11;
                        new (local_188) eastl::basic_string<char, BucketAllocatorEASTL>(
                            (CtorSprintf*)"PostProcessDownsampleRT%d", (char*)(unsigned long)local_54);
                        pRVar13 = pPVar15->m_pRenderTargetsManager;
                        textureType = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        pDVar17 = (Desc*)local_c8;
                        new (pDVar17) render::Texture::Desc();
                        local_70.Register(pRVar13, textureType, *3553, (int)&local_148, DAT_00000001,
                                          (unsigned int)pDVar17, false);
                        uVar18 = (uint32_t)((unsigned long)pDVar17 >> 32);
                        psVar7 = (shared_ptr<render::RenderTargets>*)(*local_48)[uVar10];
                        *psVar7 = local_70;
                        psVar8 = (shared_ptr*)(*local_48)[uVar10];
                        pPVar15 = local_38;
                        uVar2 = local_c8._64_8_;
                        if (!(shared_ptr::operator_cast_to_bool(psVar8))) {
                            pLVar9 = logger::default_logger();
                            pLVar9->Log(false, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/postprocess/PostProcessManager.cpp",
                                        470, "Failed to create downsample target %u",
                                        (((uint64_t)uVar18 << 32) | (uint32_t)local_54));
                            DestroyRenderTargets(pPVar15);
                            uVar6 = 0;
                            goto LAB_1009ac6e3;
                        }
                        uVar10 = uVar2 & 4294967295;
                        uVar6 = local_48->end();
                        puVar11 = (uint8_t*)(unsigned long)((int)uVar2 + 1);
                    } while (uVar10 < uVar6);
                }
                uVar10 = local_78;
            }
            uVar6 = (((uint64_t)((int64_t)((unsigned long)puVar11 >> 8)) << 8) | (uint8_t)1);
            if ((local_3c & 12) != 0) {
                new (local_c8) render::Texture::Desc();
                local_c8._0_4_ = desc1.field_0;
                local_c8._4_4_ = desc1.field_4;
                local_c8._12_4_ = 22;
                puVar11 = &local_38->field_320;
                puVar11->set_max_size(uVar10, 0);
                puVar11->set_max_size(uVar10, 0);
                lVar5 = puVar11->end();
                if (lVar5 != 0) {
                    local_48 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&local_38->field_344;
                    uVar6 = 0;
                    do {
                        local_c8._0_4_ = (unsigned int)local_c8._0_4_ >> 1;
                        local_c8._4_4_ = (unsigned int)local_c8._4_4_ >> 1;
                        iVar14 = (int)uVar6;
                        if ((local_3c & 4) != 0) {
                            pRVar13 = local_38->m_pRenderTargetsManager;
                            local_d8 = 0;
                            uStack_d0 = 0;
                            local_e8 = 0;
                            uStack_e0 = 0;
                            local_f8 = 0;
                            uStack_f0 = 0;
                            local_108 = 0;
                            uStack_100 = 0;
                            local_118 = 0;
                            uStack_110 = 0;
                            local_128 = 0;
                            uStack_120 = 0;
                            local_138 = 0;
                            uStack_130 = 0;
                            local_148 = 0;
                            uStack_140 = 0;
                            new (&local_148) std::array<render::Texture::Desc, 2ul>();
                            puVar16 = local_c8;
                            local_188->Register(pRVar13, 14778826, *3553,
                                                (int)(array<render::Texture::Desc, 2ul>*)&local_148, nullptr,
                                                (unsigned int)puVar16, false);
                            uVar18 = (uint32_t)((unsigned long)puVar16 >> 32);
                            psVar7 = (shared_ptr<render::RenderTargets>*)(*puVar11)[uVar6];
                            *psVar7 = *local_188;
                            psVar8 = (shared_ptr*)(*puVar11)[uVar6];
                            if (!(shared_ptr::operator_cast_to_bool(psVar8))) {
                                pLVar9 = logger::default_logger();
                                pDVar17 = (Desc*)(((uint64_t)uVar18 << 32) | (uint32_t)iVar14);
                                pcVar12 = "Failed to create min depth downsample target %u";
                                iVar14 = 497;
                                goto LAB_1009ac44f;
                            }
                        }
                        if ((local_3c & 8) != 0) {
                            pRVar13 = local_38->m_pRenderTargetsManager;
                            local_d8 = 0;
                            uStack_d0 = 0;
                            local_e8 = 0;
                            uStack_e0 = 0;
                            local_f8 = 0;
                            uStack_f0 = 0;
                            local_108 = 0;
                            uStack_100 = 0;
                            local_118 = 0;
                            uStack_110 = 0;
                            local_128 = 0;
                            uStack_120 = 0;
                            local_138 = 0;
                            uStack_130 = 0;
                            local_148 = 0;
                            uStack_140 = 0;
                            new (&local_148) std::array<render::Texture::Desc, 2ul>();
                            puVar16 = local_c8;
                            local_188->Register(pRVar13, 14778906, *3553,
                                                (int)(array<render::Texture::Desc, 2ul>*)&local_148, nullptr,
                                                (unsigned int)puVar16, false);
                            uVar18 = (uint32_t)((unsigned long)puVar16 >> 32);
                            psVar7 = (shared_ptr<render::RenderTargets>*)(*local_48)[uVar6];
                            *psVar7 = *local_188;
                            psVar8 = (shared_ptr*)(*local_48)[uVar6];
                            if (!(shared_ptr::operator_cast_to_bool(psVar8))) {
                                pLVar9 = logger::default_logger();
                                pDVar17 = (Desc*)(((uint64_t)uVar18 << 32) | (uint32_t)iVar14);
                                pcVar12 = "Failed to create max depth downsample target %u";
                                iVar14 = 507;
                                goto LAB_1009ac44f;
                            }
                        }
                        uVar6 = (unsigned long)(iVar14 + 1);
                        uVar10 = puVar11->end();
                    } while (uVar6 < uVar10);
                }
                uVar6 = (((uint64_t)((int64_t)(uVar6 >> 8)) << 8) | (uint8_t)1);
            }
        }
    LAB_1009ac6e3:
        return uVar6 & 4294967295;
    }

    // 0x1009acdd0
    void PostProcessManager::RenderDebug(const render::Viewport& viewport) {
        uint8_t* this_00;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* this_01;
        int iVar4;
        long lVar5;
        unsigned long uVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        RenderTargets* this_03;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_04;
        uint64_t* puVar7;
        unsigned int* puVar8;
        long* plVar9;
        float* pfVar10;
        unsigned int uVar12;
        Array<shared_ptr<render::RenderTargets>>* this_07;
        unsigned long arg1;
        ImVec4 local_98;
        Point<float> local_88;
        uint8_t local_80[16];
        uint8_t local_70[16];
        Point<float> local_60;
        unsigned int local_4c;
        float local_48;
        float local_44;
        float local_38;
        float local_34;

        PostProcessManager* local_58 = this;
        if (field_0 != '\0') {
            this_07 = (Array<shared_ptr<render::RenderTargets>>*)&field_296;
            lVar5 = this_07->end();
            if (lVar5 != 0) {
                local_34 = 0.0;
                uVar12 = 1;
                arg1 = 0;
                local_70._8_8_ = this_07;
                do {
                    this_02 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_07)[arg1];
                    this_03 = (RenderTargets*)this_02->end();
                    if (this_03 == nullptr) {
                        LogAssert("pDownSampledRT",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "postprocess/PostProcessManager.cpp",
                                  355, nullptr);
                    }
                    local_4c = uVar12;
                    this_04 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                  this_03->GetColourTargetTextures();
                    puVar7 = (uint64_t*)(*this_04)[0];
                    this_01 =
                        (compressed_pair_imp<
                            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)*puVar7;
                    if (this_01 == nullptr) {
                        LogAssert("pDownSampledTex",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "postprocess/PostProcessManager.cpp",
                                  356, nullptr);
                    }
                    local_60 = math::Point(0.0, local_34);
                    puVar8 = (unsigned int*)this_01->second();
                    uVar12 = *puVar8;
                    iVar4 = viewport.field_8;
                    lVar5 = this_01->second();
                    local_38 = (float)*(unsigned int*)(lVar5 + 4) / (float)viewport.field_12;
                    plVar9 = DebugPrimitiveCollectorBasic::GetCollector("");
                    if (plVar9 != nullptr) {
                        local_48 = (float)uVar12 / (float)iVar4;
                        pfVar10 = (float*)local_60.SSOBeginPtr();
                        local_44 = *pfVar10;
                        pfVar10 = (float*)local_60.y();
                        local_98 = ImVec4(local_44, *pfVar10, local_48, local_38);
                        new ((local_80 + 8)) math::Point(0.0, 0.0);
                        local_88 = math::Point(1.0, 1.0);
                        new (local_70) math::ColourStorage8888(255, 255, 255, 255);
                        iVar4 = local_70->GetX();
                        new (local_80) oldscape::sidebars::SideBarData(iVar4, 0);
                        (**(void (**)(...))(*plVar9 + 112))(plVar9, this_01, &local_98, local_80 + 8, &local_88, 0, 0,
                                                            0, (SideBarData*)local_80);
                    }
                    uVar12 = local_4c;
                    this_07 = (Array<shared_ptr<render::RenderTargets>>*)local_70._8_8_;
                    local_34 = local_34 + local_38;
                    arg1 = (unsigned long)local_4c;
                    uVar6 = local_70._8_8_->end();
                    uVar12 = uVar12 + 1;
                } while (arg1 < uVar6);
            }
        }
        PostProcessManager* pPVar1 = local_58;
        if (local_58->field_1 != '\0') {
            this_00 = &local_58->field_1016;
            if (this_00->operator_cast_to_bool()) {
                plVar9 = (long*)(*this_00).operator->();
                (**(void (**)(...))(*plVar9 + 48))(plVar9, viewport);
            }
        }
        auto this_05 = pPVar1->field_216.HeapBeginPtr();
        auto psVar11 = pPVar1->field_216.end();
        for (; this_05 != psVar11; this_05 = this_05 + 16) {
            if (((WorldmapRenderer*)(*this_05).operator->())->IsValid()) {
                plVar9 = (long*)(*this_05).operator->();
                (**(void (**)(...))(*plVar9 + 24))(plVar9, viewport);
            }
        }
    }

    // 0x1009ad0d0
    shared_ptr* PostProcessManager::GetEffect(int arg1) const {
        auto this_00 = field_216.HeapBeginPtr();
        auto psVar2 = field_216.end();
        while (true) {
            if (this_00 == psVar2) {
                return (shared_ptr*)&PostProcessEffect::NullPostProcessEffect;
            }
            if (((Minimap*)(*this_00).operator->())->GetLevel() == arg1)
                break;
            this_00 = this_00 + 1;
        }
        return this_00;
    }

} // namespace jag::postprocess
