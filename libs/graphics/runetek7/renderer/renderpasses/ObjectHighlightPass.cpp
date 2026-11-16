// libs/graphics/runetek7/renderer/renderpasses/ObjectHighlightPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ObjectHighlightPass.h"

namespace jag::graphics {
    // 0x100f43797
    bool ObjectHighlightPass::m_enableOccludedOutlines = 1;

    // 0x1039bd14d
    bool ObjectHighlightPass::m_showBuffer;

    // 0x1007a87e0
    ObjectHighlightPass::ObjectHighlightPass(render::RenderTargetsManager* renderTargetsManager, ThreadPool* threadPool)
        : SceneRenderPass(8, renderTargetsManager, threadPool), m_enabled(true), m_blurSubPassEnabled(true),
          field_798(1), m_silhouetteDepthBias(0.0), field_804(0.0), m_silhouetteCoverPassEnabled(true) {
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>* psVar2 =
            (shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>*)field_880;
        long lVar1 = 0;
        do {
            new (psVar2) shared_ptr();
            lVar1 = lVar1 - 16;
            psVar2 = psVar2 + 16;
        } while (lVar1 != -32);
        new (field_912) shared_ptr();
        new (field_928) graphicutils::RenderToTextureHelper();
        psVar2 = (shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>*)(field_928 + 440);
        lVar1 = 0;
        do {
            new (psVar2) shared_ptr();
            lVar1 = lVar1 - 16;
            psVar2 = psVar2 + 16;
        } while (lVar1 != -32);
        new ((field_928 + 472)) shared_ptr();
        CreateRenderingResources();
        field_776 = true;
    }

    // 0x1007a8a40
    ObjectHighlightPass::~ObjectHighlightPass() {
        DestroyRenderingResources();
        ((field_928 + 472))->~shared_ptr();
        long lVar1 = 0;
        do {
            ((field_928 + lVar1 + 456))->~shared_ptr();
            lVar1 = lVar1 - 16;
        } while (lVar1 != -32);
        field_928->~RenderToTextureHelper();
        field_912->~shared_ptr();
        lVar1 = 0;
        do {
            ((field_896 + lVar1))->~shared_ptr();
            lVar1 = lVar1 - 16;
        } while (lVar1 != -32);
        field_864->~shared_ptr();
        field_848->~shared_ptr();
        field_812.~RasteriserState();
    }

    // 0x1007a8ba0
    unsigned long ObjectHighlightPass::BeginPass(render::DrawCallState& drawCallState,
                                                 render::RenderContext& renderContext, EffectManager& effectManager,
                                                 const SceneViewData& sceneViewData,
                                                 const DrawableQueue& drawableQueue) {
        bool cVar1;
        OutputMergerState* pOVar2;
        Viewport* pVVar3;
        RenderTargets* pRVar4;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_00;
        long lVar5;
        RenderPipelineState* this_01;
        uint8_t* this_02;
        DrawCallState* pDVar6;
        unsigned long uVar7;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_38;

        if (m_enabled != false) {
            cVar1 = HasValidRenderTargets();
            if (cVar1) {
                this_02 = &sceneViewData.field_432;
                cVar1 = this_02->empty();
                if (!cVar1) {
                    pOVar2 = drawCallState.GetOutputMergerState();
                    pVVar3 = (Viewport*)this_02->HeapBeginPtr();
                    pOVar2->SetViewports(pVVar3, 1);
                    pOVar2 = drawCallState.GetOutputMergerState();
                    local_38 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_880;
                    pRVar4 = (RenderTargets*)local_38->end();
                    pOVar2->SetRenderTargets(pRVar4);
                    pOVar2 = drawCallState.GetOutputMergerState();
                    pVVar3 = (Viewport*)this_02->HeapBeginPtr();
                    pOVar2->SetViewports(pVVar3, 1);
                    pDVar6 = drawCallState;
                    this_00 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                                  drawCallState.GetRenderPipelineState();
                    lVar5 = pDVar6->Instance();
                    eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::
                        compressed_pair_imp(this_00,
                                            (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar5 + 1524));
                    pDVar6 = drawCallState;
                    this_01 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
                    lVar5 = pDVar6->Instance();
                    this_01->SetRasteriserState((lVar5 + 1488));
                    cVar1 = NeedsResolve();
                    uVar7 = (((uint64_t)((int64_t)((unsigned long)drawCallState >> 8)) << 8) | (uint8_t)1);
                    if (cVar1) {
                        pRVar4 = (RenderTargets*)field_864->end();
                        renderContext.SetRenderTargets(pRVar4);
                        pRVar4 = (RenderTargets*)local_38->end();
                        local_58 = shared_ptr();
                        local_48 = shared_ptr();
                        renderContext.ResolveColourTargetData(pRVar4, 256, local_58, local_48);
                        pRVar4 = renderContext.GetBackBuffer();
                        renderContext.SetRenderTargets(pRVar4);
                    }
                    goto LAB_1007a8be5;
                }
            }
        }
        uVar7 = 0;
    LAB_1007a8be5:
        return uVar7 & 4294967295;
    }

    // 0x1007a8d20
    bool ObjectHighlightPass::HasValidRenderTargets() const {
        uint64_t uVar2;

        if (field_880->operator_cast_to_bool() == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = field_896->operator_cast_to_bool();
        }
        return uVar2;
    }

    // 0x1007a8da0
    void ObjectHighlightPass::Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                                     EffectManager& effectManager, const SceneViewData& sceneViewData,
                                     DrawableQueue& drawableQueue) {
        uint8_t arg7;

        if (m_enabled == false) {
        LAB_1007a8ddb:
            LogAssert("m_enabled && HasValidRenderTargets()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/renderpasses/ObjectHighlightPass.cpp",
                      88, nullptr);
        }
        bool cVar1 = HasValidRenderTargets();
        if (!cVar1)
            goto LAB_1007a8ddb;
        auto this_00 = rt7Core.GetForwardOcclusionRenderPass();
        auto occlusionManager = this_00->GetScreen();
        if (m_enableOccludedOutlines != '\0') {
            cVar1 = GetOcclusionEnabledIgnoringLocalBuffer(sceneViewData);
            if (cVar1) {
                arg7 = ((SceneRenderPass*)rt7Core.GetForwardOcclusionRenderPass())
                           ->IsViewChangeValidForOcclusion(sceneViewData);
                goto LAB_1007a8e3c;
            }
        }
        arg7 = false;
    LAB_1007a8e3c:
        RenderOutlines(rt7Core, drawCallState, effectManager, sceneViewData, drawableQueue, *occlusionManager,
                       (bool)arg7);
        RenderSilhouettes(rt7Core, drawCallState, effectManager, sceneViewData, drawableQueue, *occlusionManager,
                          (bool)arg7);
    }

    // 0x1007a8f10
    void ObjectHighlightPass::RenderOutlines(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                                             EffectManager& effectManager, const SceneViewData& sceneViewData,
                                             DrawableQueue& drawableQueue, OcclusionManager& occlusionManager,
                                             bool arg7) {
        RT7Core* this_00;
        long lVar2;
        RenderContext* this_01;
        RenderTargets* pRVar3;
        OutputMergerState* this_04;
        void* arg1;
        DrawCallState local_78;

        if (field_798 != '\0') {
            local_78 = ImVec4(0.0, 0.0, 0.0, 0.0);
            this_00 = (RT7Core*)local_78.GetRenderContext();
            lVar2 = ((Singleton<render::BuiltinStates>*)(RT7Core*)&local_78)->Instance();
            this_00->SetBlendState((lVar2 + 1524));
            this_01 = (RenderContext*)this_00->GetRenderContext();
            pRVar3 = (RenderTargets*)field_880->end();
            this_01->ClearRenderTargets(pRVar3, &local_78, 1);
            field_798 = 0;
        }
        auto renderPassType = GetPos();
        auto this_02 = drawableQueue.GetDrawableGroup(renderPassType, 10);
        if (((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)this_02->GetScreen())->empty() ==
            '\0') {
            field_798 = 1;
            local_78 = render::DrawCallState(drawCallState);
            this_04 = local_78.GetOutputMergerState();
            pRVar3 = (RenderTargets*)field_880->end();
            this_04->SetRenderTargets(pRVar3);
            if (m_enableOccludedOutlines == '\0') {
                lVar2 = this_04->Instance();
                arg1 = (void*)(lVar2 + 1080);
            } else {
                lVar2 = this_04->Instance();
                arg1 = (void*)(lVar2 + 1140);
            }
            ((Layout*)local_78.GetRenderPipelineState())->SetHeapSize(arg1);
            RenderOccludedDrawableGroup(rt7Core, &local_78, effectManager, sceneViewData, drawableQueue, 10, arg7,
                                        occlusionManager, 1.0);
            if (m_blurSubPassEnabled != false) {
                PerformBlur((RT7Core*)this);
            }
        }
    }

    // 0x1007a90d0
    void ObjectHighlightPass::RenderSilhouettes(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                                                EffectManager& effectManager, const SceneViewData& sceneViewData,
                                                DrawableQueue& drawableQueue, OcclusionManager& occlusionManager,
                                                bool arg7) {
        Layout* pLVar4;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_03;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* this_04;
        uint64_t* puVar5;
        DrawCallState* pDVar6;
        uint8_t local_b8[16];
        uint8_t** local_a8;
        float fStack_a0;
        float fStack_9c;
        float fStack_98;
        uint64_t uStack_94;

        bool cVar1 = field_912->operator_cast_to_bool();
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_07 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_896;
        if (cVar1) {
            this_07 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_912;
        }
        RT7Core* this_06 = (RT7Core*)local_b8;
        new (local_b8) ImVec4(0.0, 0.0, 0.0, 0.0);
        auto this_00 = this_06->GetRenderContext();
        long lVar2 = this_06->Instance();
        this_00->SetBlendState((lVar2 + 1524));
        auto this_01 = this_00->GetRenderContext();
        auto pRVar3 = this_07->end();
        this_01->ClearRenderTargets(pRVar3, local_b8, 1);
        DrawCallState local_80(drawCallState);
        auto this_02 = local_80.GetOutputMergerState();
        pRVar3 = (RenderTargets*)this_07->end();
        this_02->SetRenderTargets(pRVar3);
        if (m_silhouetteCoverPassEnabled == false) {
            pDVar6 = &local_80;
            pLVar4 = (Layout*)pDVar6->GetRenderPipelineState();
            lVar2 = pDVar6->Instance();
            pLVar4->SetHeapSize((lVar2 + 960));
            this_03 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)local_80.GetRenderPipelineState();
            this_04 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)this_03->data();
            puVar5 = (uint64_t*)this_04->second();
            local_a8 = (uint8_t**)*puVar5;
            uStack_94 = *(uint64_t*)((long)puVar5 + 20);
            fStack_98 = (float)((unsigned long)*(uint64_t*)((long)puVar5 + 12) >> 32);
            fStack_9c = field_804;
            fStack_a0 = m_silhouetteDepthBias;
            field_812.Create(local_a8);
            ((RenderPipelineState*)local_80.GetRenderPipelineState())->SetRasteriserState(&field_812);
            RenderOccludedDrawableGroup(rt7Core, &local_80, effectManager, sceneViewData, drawableQueue, 11, arg7,
                                        occlusionManager, 1.0);
        } else {
            pDVar6 = &local_80;
            pLVar4 = (Layout*)pDVar6->GetRenderPipelineState();
            lVar2 = pDVar6->Instance();
            pLVar4->SetHeapSize((lVar2 + 1080));
            RenderOccludedDrawableGroup(rt7Core, &local_80, effectManager, sceneViewData, drawableQueue, 11, arg7,
                                        occlusionManager, 1.0);
            pDVar6 = &local_80;
            pLVar4 = (Layout*)pDVar6->GetRenderPipelineState();
            lVar2 = pDVar6->Instance();
            pLVar4->SetHeapSize((lVar2 + 960));
            RenderOccludedDrawableGroup(rt7Core, &local_80, effectManager, sceneViewData, drawableQueue, 12, arg7,
                                        occlusionManager, 1.0);
        }
    }

    // 0x1007a9370
    void ObjectHighlightPass::RenderDebug(EffectManager& effectManager, DrawableQueue& drawableQueue) {
        uint64_t uVar1;
        RenderPassType renderPassType;
        long* plVar3;
        RenderTargets* pRVar4;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar5;
        uint64_t* puVar6;
        ImVec4 local_58;
        Point<float> local_48;
        uint8_t local_40[16];

        DrawableGroupType drawableGroupType = 0;
        do {
            renderPassType = GetPos();
            drawableQueue.RenderDebug(drawableGroupType, renderPassType);
            drawableGroupType = drawableGroupType + 1;
        } while (drawableGroupType != 13);
        if (m_showBuffer != '\0') {
            if (HasValidRenderTargets()) {
                plVar3 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar3 != nullptr) {
                    pRVar4 = (RenderTargets*)(*field_880).operator->();
                    pvVar5 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                 pRVar4->GetColourTargetTextures();
                    puVar6 = (uint64_t*)(*pvVar5)[0];
                    uVar1 = *puVar6;
                    local_58 = ImVec4(0.0, 0.0, 0.5, 0.5);
                    new ((local_40 + 8)) math::Point(0.0, 0.0);
                    local_48 = math::Point(1.0, 1.0);
                    new (local_40) oldscape::sidebars::SideBarData(-1, 0);
                    (**(void (**)(...))(*plVar3 + 112))(plVar3, uVar1, &local_58, local_40 + 8, &local_48, 0, 0, 0,
                                                        (SideBarData*)local_40);
                }
                plVar3 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar3 != nullptr) {
                    pRVar4 = (RenderTargets*)(*field_896).operator->();
                    pvVar5 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                 pRVar4->GetColourTargetTextures();
                    puVar6 = (uint64_t*)(*pvVar5)[0];
                    uVar1 = *puVar6;
                    local_58 = ImVec4(0.0, 0.5, 0.5, 1.0);
                    new ((local_40 + 8)) math::Point(0.0, 0.0);
                    local_48 = math::Point(1.0, 1.0);
                    new (local_40) oldscape::sidebars::SideBarData(-1, 0);
                    (**(void (**)(...))(*plVar3 + 112))(plVar3, uVar1, &local_58, local_40 + 8, &local_48, 0, 0, 0,
                                                        (SideBarData*)local_40);
                }
            }
        }
        if (GetOcclusionTestEnabled()) {
            field_16->RenderDebug();
        }
    }

    // 0x1007a9560
    void ObjectHighlightPass::CompositeToScreen(RT7Core& rt7Core, const render::RenderTargets* renderTargets,
                                                const render::Viewport& viewport) {
        uint8_t* puVar1;
        bool cVar2;
        Layout* this_00;
        long lVar3;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_01;
        RenderContext* pRVar4;
        RenderTargets* pRVar5;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar6;
        uint64_t* puVar7;
        DrawCallState* pDVar8;
        RT7Core* pRVar9;
        shared_ptr<render::RenderTargets>* this_02;
        DrawCallState local_70;

        if (m_enabled != false) {
            cVar2 = HasValidRenderTargets();
            if (cVar2) {
                pDVar8 = &local_70;
                new (pDVar8) render::DrawCallState();
                this_00 = (Layout*)pDVar8->GetRenderPipelineState();
                lVar3 = pDVar8->Instance();
                this_00->SetHeapSize((lVar3 + 1080));
                pDVar8 = &local_70;
                this_01 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                              pDVar8->GetRenderPipelineState();
                lVar3 = pDVar8->Instance();
                eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::
                    compressed_pair_imp(this_01,
                                        (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar3 + 1676));
                puVar1 = field_912;
                pRVar9 = (RT7Core*)puVar1;
                cVar2 = puVar1->operator_cast_to_bool();
                pRVar4 = (RenderContext*)pRVar9->GetRenderContext();
                this_02 = (shared_ptr<render::RenderTargets>*)field_896;
                if (cVar2) {
                    this_02 = (shared_ptr<render::RenderTargets>*)puVar1;
                }
                pRVar5 = (RenderTargets*)(*this_02).operator->();
                pvVar6 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                             pRVar5->GetColourTargetTextures();
                puVar7 = (uint64_t*)(*pvVar6)[0];
                puVar1 = field_928;
                pRVar9 = (RT7Core*)puVar1;
                puVar1->RenderTextureToQuad(*pRVar4, local_70, renderTargets, *puVar7, nullptr, viewport, -1);
                pRVar4 = (RenderContext*)pRVar9->GetRenderContext();
                pRVar5 = (RenderTargets*)(*field_880).operator->();
                pvVar6 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                             pRVar5->GetColourTargetTextures();
                puVar7 = (uint64_t*)(*pvVar6)[0];
                puVar1->RenderTextureToQuad(*pRVar4, local_70, renderTargets, *puVar7, nullptr, viewport, -1);
            }
        }
    }

    // 0x1007a96e0
    void ObjectHighlightPass::ClearRenderTargets(RT7Core& rt7Core) {
        RenderTargets* pRVar1;
        RenderContext* renderContext;
        long lVar3;
        RT7Core* pRVar4;
        RT7Core* this_00;
        Vector4T<float> local_48;

        if (HasValidRenderTargets((ObjectHighlightPass*)rt7Core)) {
            UnbindDepthTargets((ObjectHighlightPass*)rt7Core);
            pRVar4 = &local_48;
            local_48 = ImVec4(0.0, 0.0, 0.0, 0.0);
            lVar3 = 0;
            do {
                pRVar4 = (RT7Core*)pRVar4->GetRenderContext();
                pRVar1 = (RenderTargets*)((rt7Core.m_postProcessManager + lVar3 + 432))->end();
                pRVar4->ClearRenderTargets(pRVar1, &local_48, 1);
                lVar3 = lVar3 + 16;
            } while (lVar3 != 32);
            this_00 = (RT7Core*)(rt7Core.m_postProcessManager + 464);
            pRVar4 = this_00;
            if (this_00->operator_cast_to_bool()) {
                renderContext = (RenderContext*)pRVar4->GetRenderContext();
                pRVar1 = (RenderTargets*)this_00->end();
                renderContext->ClearRenderTargets(pRVar1, &local_48, 1);
            }
        }
    }

    // 0x1007a97b0
    void ObjectHighlightPass::UnbindDepthTargets() {
        RenderTargets* pRVar1 = (RenderTargets*)(*field_864).operator->();
        pRVar1->UnbindDepthStencilTargetTexture();
        pRVar1 = (RenderTargets*)(*field_896).operator->();
        pRVar1->UnbindDepthStencilTargetTexture();
        if (field_912->operator_cast_to_bool() != '\0') {
            pRVar1 = (RenderTargets*)(*field_912).operator->();
            pRVar1->UnbindDepthStencilTargetTexture();
        }
    }

    // 0x1007a9810
    void ObjectHighlightPass::RegisterTweakVarsOcclusion(tweak::Container& container) {
        container.AddCheckBox("Enable On Object Highlight Pass", field_776);
        container.AddCheckBox("Show Object Highlight Pass Occlusion Depth Buffer", *((field_16 + 8)));
    }

    // 0x1007a9850
    void ObjectHighlightPass::PreparePass(RT7Core& rt7Core, EffectManager& effectManager,
                                          const SceneViewData& sceneViewData, DrawableQueue& drawableQueue) {
        bool bVar1;
        RenderTargets* this_00;
        EffectManager* effectManager_00;

        bool cVar2 = field_848->operator_cast_to_bool();
        if (!cVar2) {
            m_enabled = false;
        }
        if (m_enabled != false) {
            this_00 = (RenderTargets*)(*field_848).operator->();
            cVar2 = EnsureRenderTargets((Texture*)this_00->GetDepthStencilTargetTexture());
            if (cVar2) {
                PreparePass(rt7Core, *effectManager_00, sceneViewData, drawableQueue);
                bVar1 = m_blurSubPassEnabled;
                cVar2 = HasBlurRenderTargets();
                if (bVar1 == false) {
                    if (!cVar2) {
                        return;
                    }
                    DestroyBlurRenderTargets();
                    return;
                }
                if (cVar2) {
                    return;
                }
                cVar2 = InitBlurRenderTargets();
                if (!cVar2) {
                    (logger::default_logger())
                        ->Log(false, 2,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "renderer/renderpasses/ObjectHighlightPass.cpp",
                              210, "Could not initialise blur render targets - disabling blur");
                    m_blurSubPassEnabled = false;
                    return;
                }
                return;
            }
        }
        DestroyRenderTargets();
        m_enabled = false;
    }

    // 0x1007a9950
    unsigned long ObjectHighlightPass::EnsureRenderTargets(render::Texture* texture) {
        bool bVar1;
        char cVar2;
        unsigned int uVar3;
        int* piVar4;
        RenderTargets* pRVar5;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar6;
        long* plVar7;
        uint64_t* puVar8;
        int* piVar9;
        char* pcVar10;
        Logger* pLVar11;
        uint64_t unaff_RBX;
        uint8_t* renderTargets;
        Texture* arg1;
        unsigned long arg1_00;
        int arg4;
        shared_ptr* this_00;
        array<render::Texture::Desc, 2ul> local_118;
        Desc local_98;
        shared_ptr* local_50;
        Texture* local_48;
        ReturnValue local_40;

        if (texture == nullptr) {
            pLVar11 = logger::default_logger();
            pcVar10 = "Could not initialise render targets for the object highlight pass - No depth source provided.";
            arg4 = 241;
        } else {
            arg1 = texture;
            piVar4 = (int*)texture->second();
            uVar3 = piVar4[4];
            local_50 = (shared_ptr*)field_880;
            cVar2 = shared_ptr::operator_cast_to_bool(local_50);
            if (cVar2) {
                pRVar5 = (RenderTargets*)(*local_50).operator->();
                pvVar6 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                             pRVar5->GetColourTargetTextures();
                arg1 = nullptr;
                plVar7 = (long*)(*pvVar6)[0];
                if (*plVar7 != 0) {
                    renderTargets =
                        (uint8_t*)(((uint64_t)((int64_t)((unsigned long)unaff_RBX >> 8)) << 8) | (uint8_t)(1 < uVar3));
                    cVar2 = NeedsResolve();
                    if (cVar2 == 1 < uVar3) {
                        local_48 = texture;
                        cVar2 = field_864->operator_cast_to_bool();
                        if (!cVar2) {
                            LogAssert("m_resolveRT",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/renderer/renderpasses/ObjectHighlightPass.cpp",
                                      252, nullptr);
                        }
                        pRVar5 = (RenderTargets*)(*local_50).operator->();
                        pvVar6 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                     pRVar5->GetColourTargetTextures();
                        arg1 = nullptr;
                        puVar8 = (uint64_t*)(*pvVar6)[0];
                        piVar9 = (int*)(*puVar8)->second();
                        bVar1 = true;
                        if ((*piVar9 == *piVar4) && (piVar9[1] == piVar4[1])) {
                            arg1_00 = (unsigned long)(unsigned int)piVar4[4];
                            cVar2 = CheckMultiSampleCountChanged(piVar4[4]);
                            if (cVar2) {
                                local_118 = std::array<render::Texture::Desc, 2ul>();
                                piVar9 = &local_118[arg1_00];
                                *piVar9 = *piVar4;
                                piVar9[1] = piVar4[1];
                                piVar9[4] = piVar4[4];
                                piVar9[6] = 0;
                                piVar9[3] = 7;
                                *(uint8_t*)(piVar9 + 8) = 0;
                                local_98 = render::Texture::Desc();
                                renderTargets = field_912;
                                render::RenderTargets::SafeReset(*renderTargets);
                                make_shared<render::RenderTargets>(&local_40);
                                *renderTargets = local_40;
                                pcVar10 = (char*)(*renderTargets).operator->();
                                cVar2 = render::RenderTargets::Create(pcVar10, 14637231, *3553, (int)&local_118,
                                                                      DAT_00000001, (unsigned int)&local_98);
                                if (!cVar2) {
                                    DestroyRenderTargets();
                                    pLVar11 = logger::default_logger();
                                    bVar1 = false;
                                    arg1 = nullptr;
                                    pLVar11->Log(
                                        false, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/renderer/renderpasses/ObjectHighlightPass.cpp",
                                        276,
                                        "Could not initialise MSAA silhouette render target (size=%u x %u samples=%u)",
                                        *piVar4, piVar4[1], piVar4[4]);
                                    renderTargets = nullptr;
                                    goto LAB_1007a9b4d;
                                }
                            }
                            arg1 = local_48;
                            RebindDepthRenderTargets(local_48);
                            renderTargets = (uint8_t*)(((uint64_t)((int64_t)((unsigned long)renderTargets >> 8)) << 8) |
                                                       (uint8_t)1);
                            bVar1 = false;
                        }
                    LAB_1007a9b4d:
                        texture = local_48;
                        if (!bVar1)
                            goto LAB_1007aa0dc;
                    }
                }
            }
            DestroyRenderTargets();
            field_798 = 1;
            local_118 = std::array<render::Texture::Desc, 2ul>();
            piVar9 = &local_118[(unsigned long)arg1];
            *piVar9 = *piVar4;
            piVar9[1] = piVar4[1];
            piVar9[6] = 0;
            piVar9[3] = 7;
            piVar9[4] = 1;
            *(uint8_t*)(piVar9 + 8) = 0;
            local_98 = render::Texture::Desc();
            local_98.field_0 = 0;
            local_98.field_4 = 0;
            local_98._24_8_ = (unsigned long)(unsigned int)local_98.field_28 << 32;
            local_98.field_12 = 0;
            local_98.field_16 = 1;
            local_98._32_8_ = local_98._32_8_ & 18446744073709551360;
            if (uVar3 < 2) {
                make_shared<render::RenderTargets>(&local_40);
                *field_896 = local_40;
                pcVar10 = (char*)(*field_896).operator->();
                cVar2 = render::RenderTargets::Create(pcVar10, 14637428, *3553, (int)&local_118, DAT_00000001,
                                                      (unsigned int)&local_98);
                this_00 = local_50;
                if (!cVar2) {
                    DestroyRenderTargets();
                    pLVar11 = logger::default_logger();
                    pcVar10 = "Could not create silhouette target (size=%u x %u samples=%u)";
                    arg4 = 363;
                } else {
                    make_shared<render::RenderTargets>(&local_40);
                    *this_00 = local_40;
                    pcVar10 = (char*)(*this_00).operator->();
                    cVar2 = render::RenderTargets::Create(pcVar10, 14637518, *3553, (int)&local_118, DAT_00000001,
                                                          (unsigned int)&local_98);
                    if (!cVar2) {
                        DestroyRenderTargets();
                        pLVar11 = logger::default_logger();
                        pcVar10 = "Could not create outline target (size=%u x %u samples=%u)";
                        arg4 = 371;
                    } else {
                        *field_864 = *this_00;
                    LAB_1007a9edb:
                        cVar2 = field_864->operator_cast_to_bool();
                        if (cVar2) {
                            cVar2 = field_896->operator_cast_to_bool();
                            if (cVar2) {
                                cVar2 = shared_ptr::operator_cast_to_bool(this_00);
                                if (cVar2) {
                                    RebindDepthRenderTargets(texture);
                                    uVar3 = InitBlurRenderTargets();
                                    renderTargets = (uint8_t*)(unsigned long)uVar3;
                                    goto LAB_1007aa0dc;
                                }
                            }
                        }
                        DestroyRenderTargets();
                        pLVar11 = logger::default_logger();
                        pcVar10 = "Could not initialise render targets for the object highlight pass (size=%u x %u "
                                  "samples=%u)";
                        arg4 = 386;
                    }
                }
            } else {
                piVar9[4] = piVar4[4];
                local_48 = texture;
                make_shared<render::RenderTargets>(&local_40);
                *field_912 = local_40;
                pcVar10 = (char*)(*field_912).operator->();
                cVar2 = render::RenderTargets::Create(pcVar10, 14637231, *3553, (int)&local_118, DAT_00000001,
                                                      (unsigned int)&local_98);
                if (!cVar2) {
                    DestroyRenderTargets();
                    pLVar11 = logger::default_logger();
                    pcVar10 = "Could not initialise MSAA silhouette render target (size=%u x %u samples=%u)";
                    arg4 = 321;
                } else {
                    piVar9[4] = 1;
                    make_shared<render::RenderTargets>(&local_40);
                    *field_864 = local_40;
                    pcVar10 = (char*)(*field_864).operator->();
                    cVar2 = render::RenderTargets::Create(pcVar10, 14637341, *3553, (int)&local_118, nullptr,
                                                          (unsigned int)&local_98);
                    texture = local_48;
                    if (!cVar2) {
                        DestroyRenderTargets();
                        pLVar11 = logger::default_logger();
                        pcVar10 = "Could not create resolve target (size=%u x %u samples=%u)";
                        arg4 = 332;
                    } else {
                        make_shared<render::RenderTargets>(&local_40);
                        *field_896 = local_40;
                        pcVar10 = (char*)(*field_896).operator->();
                        cVar2 = render::RenderTargets::Create(pcVar10, 14637428, *3553, (int)&local_118, DAT_00000001,
                                                              (unsigned int)&local_98);
                        this_00 = local_50;
                        if (!cVar2) {
                            DestroyRenderTargets();
                            pLVar11 = logger::default_logger();
                            pcVar10 = "Could not create silhouette target (size=%u x %u samples=%u)";
                            arg4 = 341;
                        } else {
                            local_98.field_0 = piVar4[0];
                            local_98.field_4 = piVar4[1];
                            local_98._24_8_ = *(uint64_t*)(piVar4 + 6);
                            local_98._32_8_ = *(uint64_t*)(piVar4 + 8);
                            local_98._40_8_ = *(uint64_t*)(piVar4 + 10);
                            local_98.field_48 = *(uint64_t*)(piVar4 + 12);
                            local_98._56_8_ = *(uint64_t*)(piVar4 + 14);
                            local_98.field_20 = (int)((unsigned long)*(uint64_t*)(piVar4 + 4) >> 32);
                            local_98.field_8 = (int)*(uint64_t*)(piVar4 + 2);
                            local_98.field_12 = (int)((unsigned long)*(uint64_t*)(piVar4 + 2) >> 32);
                            local_98.field_16 = 1;
                            make_shared<render::RenderTargets>(&local_40);
                            *this_00 = local_40;
                            pcVar10 = (char*)(*this_00).operator->();
                            cVar2 = render::RenderTargets::Create(pcVar10, 14637518, *3553, (int)&local_118,
                                                                  DAT_00000001, (unsigned int)&local_98);
                            if (cVar2)
                                goto LAB_1007a9edb;
                            DestroyRenderTargets();
                            pLVar11 = logger::default_logger();
                            pcVar10 = "Could not create outline target (size=%u x %u samples=%u)";
                            arg4 = 353;
                        }
                    }
                }
            }
        }
        renderTargets = nullptr;
        pLVar11->Log(false, 2,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/renderer/"
                     "renderpasses/ObjectHighlightPass.cpp",
                     arg4, pcVar10);
    LAB_1007aa0dc:
        return (unsigned long)renderTargets & 4294967041;
    }

    // 0x1007aa320
    unsigned long ObjectHighlightPass::InitBlurRenderTargets() {
        shared_ptr<render::RenderTargets>* this_00;
        shared_ptr<render::RenderTargets>* this_01;
        RenderTargets* pRVar2;
        RenderTargets* pRVar3;
        fixed_vector<render::Texture*, _2ul>* pfVar4;
        Logger* this_02;
        unsigned long uVar5;
        ReturnValue local_38;

        bool cVar1 = HasValidRenderTargets();
        if (!cVar1) {
            uVar5 = 0;
        } else {
            DestroyBlurRenderTargets();
            make_shared<render::RenderTargets>(&local_38);
            this_00 = (shared_ptr<render::RenderTargets>*)(field_928 + 440);
            *this_00 = local_38;
            make_shared<render::RenderTargets>(&local_38);
            this_01 = (shared_ptr<render::RenderTargets>*)(field_928 + 456);
            *this_01 = local_38;
            pRVar2 = (RenderTargets*)(*this_00).operator->();
            pRVar2->Create("", 0);
            pRVar2 = (RenderTargets*)(*this_01).operator->();
            pRVar2->Create("", 0);
            pRVar2 = (RenderTargets*)(*this_00).operator->();
            pRVar3 = (RenderTargets*)(*field_880).operator->();
            pfVar4 = (fixed_vector<render::Texture*, _2ul>*)pRVar3->GetColourTargetTextures();
            cVar1 = pRVar2->BindColourTargetTextures(*pfVar4, 0, 0, 34069);
            if (cVar1) {
                pRVar2 = (RenderTargets*)(*this_01).operator->();
                pRVar3 = (RenderTargets*)(*field_896).operator->();
                pfVar4 = (fixed_vector<render::Texture*, _2ul>*)pRVar3->GetColourTargetTextures();
                cVar1 = pRVar2->BindColourTargetTextures(*pfVar4, 0, 0, 34069);
                uVar5 = (((uint64_t)((int64_t)((unsigned long)pRVar2 >> 8)) << 8) | (uint8_t)1);
                if (cVar1)
                    goto LAB_1007aa474;
            }
            DestroyBlurRenderTargets();
            this_02 = logger::default_logger();
            uVar5 = 0;
            this_02->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                         "renderer/renderpasses/ObjectHighlightPass.cpp",
                         517, "Could not create blur render targets for the object highlight pass.");
        }
    LAB_1007aa474:
        return uVar5 & 4294967295;
    }

    // 0x1007aa4a0
    void ObjectHighlightPass::DestroyBlurRenderTargets() {
        long lVar1 = 0;
        do {
            render::RenderTargets::SafeReset(*((field_928 + lVar1 + 440)));
            lVar1 = lVar1 + 16;
        } while (lVar1 != 32);
    }

    // 0x1007aa4e0
    void ObjectHighlightPass::DestroyRenderTargets() {
        DestroyBlurRenderTargets();
        render::RenderTargets::SafeReset(*field_864);
        render::RenderTargets::SafeReset(*field_912);
        long lVar1 = 0;
        do {
            render::RenderTargets::SafeReset(*((field_880 + lVar1)));
            lVar1 = lVar1 + 16;
        } while (lVar1 != 32);
    }

    // 0x1007aa530
    bool ObjectHighlightPass::CheckMultiSampleCountChanged(unsigned int arg1) const {
        RenderTargets* this_00;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_01;
        uint64_t* puVar2;
        long lVar3;
        bool bVar4;

        if (field_912->operator_cast_to_bool() == '\0') {
            bVar4 = false;
        } else {
            this_00 = (RenderTargets*)(*field_912).operator->();
            this_01 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          this_00->GetColourTargetTextures();
            puVar2 = (uint64_t*)(*this_01)[0];
            lVar3 = (*puVar2)->second();
            bVar4 = *(unsigned int*)(lVar3 + 16) != arg1;
        }
        return bVar4;
    }

    // 0x1007aa5a0
    void ObjectHighlightPass::RebindDepthRenderTargets(render::Texture* texture) {
        RenderTargets* pRVar1 = (RenderTargets*)(*field_864).operator->();
        pRVar1->BindDepthStencilTargetTexture(texture);
        pRVar1 = (RenderTargets*)(*field_896).operator->();
        RenderTargets* this_00 = (RenderTargets*)(*field_880).operator->();
        pRVar1->BindDepthStencilTargetTexture((Texture*)this_00->GetDepthStencilTargetTexture());
        if (field_912->operator_cast_to_bool() != '\0') {
            pRVar1 = (RenderTargets*)(*field_912).operator->();
            pRVar1->BindDepthStencilTargetTexture(texture);
        }
    }

    // 0x1007aa630
    void ObjectHighlightPass::PerformBlur(RT7Core& rt7Core) {
        VertexDeclaration* vertexDeclaration;
        float local_120;
        float local_11c;

        if (HasBlurRenderTargets((ObjectHighlightPass*)rt7Core) == '\0') {
            LogAssert("HasBlurRenderTargets()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/renderpasses/ObjectHighlightPass.cpp",
                      587, nullptr);
        }
        auto local_98 = rt7Core.GetRenderContext();
        RenderTargets* renderTargets = (RenderTargets*)(*((rt7Core.m_postProcessManager + 432))).operator->();
        auto pTVar3 = renderTargets->GetDepthStencilTargetTexture();
        RenderTargets* local_a8 = (RenderTargets*)((rt7Core.m_postProcessManager + 936))->end();
        RenderTargets* local_a0 = (RenderTargets*)((rt7Core.m_postProcessManager + 920))->end();
        auto pvVar4 = local_a0->GetColourTargetTextures();
        uint64_t* puVar5 = (uint64_t*)(*pvVar4)[0];
        unsigned int* puVar6 = (unsigned int*)(*puVar5)->second();
        ImVec4 local_128((float)*puVar6, (float)puVar6[1], 1.0 / (float)*puVar6, 1.0 / (float)puVar6[1]);
        fixed_vector<render::Viewport, 2ul> local_90;
        DrawCallState local_118(0, 0, *puVar6, puVar6[1], 0.0, 1.0);
        local_90.push_back(local_118);
        auto this_00 = *(*((rt7Core.m_postProcessManager + 952)));
        local_118 = render::DrawCallState();
        auto this_01 = local_118.GetInputAssemblerState();
        vertexDeclaration = (VertexDeclaration*)this_00->second();
        GeometryBatch* this_03 = (GeometryBatch*)(rt7Core.m_postProcessManager + 480);
        auto vertexBuffer = this_03->GetBoneIDMap();
        this_01->SetVertexStreamData(vertexDeclaration, vertexBuffer);
        auto pOVar7 = local_118.GetOutputMergerState();
        pOVar7->SetViewports((Viewport*)local_90.HeapBeginPtr(), 1);
        auto pRVar8 = local_118.GetRenderPipelineState();
        pRVar8->SetShaderProgram(this_00);
        pRVar8 = (RenderPipelineState*)local_118.GetRenderPipelineState();
        auto pHVar9 = graphics::operator*(179);
        int iVar2 = this_00->GetConstIndex(*pHVar9);
        pRVar8->SetPSTextureSamplerPair(1, pTVar3, iVar2, nullptr, false);
        DrawCallState local_e8(local_118);
        pOVar7 = local_e8.GetOutputMergerState();
        pOVar7->SetRenderTargets(local_a8);
        pRVar8 = (RenderPipelineState*)local_e8.GetRenderPipelineState();
        pvVar4 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                     local_a0->GetColourTargetTextures();
        puVar5 = (uint64_t*)(*pvVar4)[0];
        pTVar3 = (Texture*)*puVar5;
        pHVar9 = (HashedString*)postprocess::operator*(2);
        iVar2 = this_00->GetConstIndex(*pHVar9);
        pRVar8->SetPSTextureSamplerPair(0, pTVar3, iVar2, nullptr, false);
        ImVec4 local_b8(local_120, 0.0, 40.0, 0.0);
        pHVar9 = (HashedString*)graphics::operator*(194);
        this_00->SetShaderConstVector4(pHVar9, &local_b8);
        this_03->RenderQuad(*local_98, local_e8);
        local_e8 = render::DrawCallState(local_118);
        pOVar7 = local_e8.GetOutputMergerState();
        pOVar7->SetRenderTargets(local_a0);
        pRVar8 = (RenderPipelineState*)local_e8.GetRenderPipelineState();
        pvVar4 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                     local_a8->GetColourTargetTextures();
        puVar5 = (uint64_t*)(*pvVar4)[0];
        pTVar3 = (Texture*)*puVar5;
        pHVar9 = (HashedString*)postprocess::operator*(2);
        iVar2 = this_00->GetConstIndex(*pHVar9);
        pRVar8->SetPSTextureSamplerPair(0, pTVar3, iVar2, nullptr, false);
        local_b8 = ImVec4(0.0, local_11c, 40.0, 0.0);
        pHVar9 = (HashedString*)graphics::operator*(194);
        this_00->SetShaderConstVector4(pHVar9, &local_b8);
        this_03->RenderQuad(*local_98, local_e8);
    }

    // 0x1007aaa70
    void ObjectHighlightPass::CreateBlurShader() {
        VertexElementDesc* vertexElementDesc;
        basic_ostream<char, std::char_traits<char> _>* basic_ostream;
        uint8_t local_178[280];
        ReturnValue local_30;

        new (local_178) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        auto pcVar1 = shadersourceprovider::GetShaderString(2);
        basic_ostream = (basic_ostream<char, std::char_traits<char> _>*)(local_178 + 16);
        std::operator<<(basic_ostream, pcVar1);
        pcVar1 = (char*)basic_ostream->Instance();
        auto local_60 = postprocess::PostProcessVS::BuildVSFragment();
        auto str2 = local_60.c_str();
        auto local_48 = local_178->str();
        vertexElementDesc = (VertexElementDesc*)local_48.c_str();
        local_30.RegisterFromSourceString(pcVar1, str2, vertexElementDesc, 62757712, '\x02');
        (*((field_928 + 472))) = local_30;
    }

    // 0x1007aabf0
    void ObjectHighlightPass::SetBlurSubPassEnabled(bool arg1) {
        m_blurSubPassEnabled = arg1;
    }

    // 0x1007aac00
    void ObjectHighlightPass::SetSilhouetteDepthBias(float arg1, float arg2) {
        m_silhouetteDepthBias = arg1;
        field_804 = arg2;
    }

    // 0x1007aac20
    void ObjectHighlightPass::SetSilhouetteCoverPassEnabled(bool arg1) {
        m_silhouetteCoverPassEnabled = arg1;
    }

    // 0x1007aac30
    void ObjectHighlightPass::CreateRenderingResources() {
        CreateRenderingResources();
        CreateBlurShader();
    }

    // 0x1007aac70
    void ObjectHighlightPass::DestroyRenderingResources() {
        DestroyRenderTargets();
        DestroyRenderingResources();
    }

} // namespace jag::graphics
