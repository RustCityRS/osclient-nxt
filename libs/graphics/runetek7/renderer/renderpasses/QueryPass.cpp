// libs/graphics/runetek7/renderer/renderpasses/QueryPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "QueryPass.h"

namespace jag::graphics {
    // 0x100f43798
    bool QueryPass::m_enablePreciseCulling = 1;

    // 0x100f43799
    bool QueryPass::m_DrawQueryTests = 1;

    // 0x1039bd14e
    bool QueryPass::m_showBuffer;

    // 0x1007aaca0
    QueryPass::QueryPass(render::RenderTargetsManager* renderTargetsManager, ThreadPool* threadPool)
        : SceneRenderPass(9, renderTargetsManager, threadPool), m_mode(0), field_800(4294967295),
          m_queryRenderTargetSize(320), field_808(240), field_812(-1.0) {
        make_shared<render::RenderTargets>((ReturnValue*)&field_832);
        field_776 = true;
        ((RenderTargets*)field_832.operator->())->Create("", 0);
    }

    // 0x1007aad70
    QueryPass::~QueryPass() {
        DestroyRenderingResources();
        field_832.~shared_ptr();
        field_816->~shared_ptr();
    }

    // 0x1007aae10
    uint64_t QueryPass::BeginPass(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                  EffectManager& effectManager, const SceneViewData& sceneViewData,
                                  const DrawableQueue& drawableQueue) {
        uint8_t* this_00;
        bool cVar1;
        int arg3;
        int arg4;
        unsigned int arg4_00;
        RenderTargets* pRVar2;
        OutputMergerState* pOVar3;
        Viewport* pVVar4;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_01;
        long lVar5;
        Layout* this_02;
        RenderPipelineState* this_03;
        RenderTargets* this_04;
        uint64_t uVar6;
        DrawCallState* pDVar7;
        Singleton<render::BuiltinStates>* this_05;
        Viewport local_b8;
        fixed_vector<render::Viewport, 2ul> local_90;

        if (m_mode != 0) {
            pRVar2 = (RenderTargets*)GetPreferredRT();
            cVar1 = pRVar2->HasDepthTarget();
            if (cVar1) {
                cVar1 = sceneViewData.field_432.empty();
                if (!cVar1) {
                    new (&local_90) eastl::fixed_vector<render::Viewport, 2ul>();
                    arg3 = GetOcclusionTargetWidth();
                    arg4 = GetOcclusionTargetHeight();
                    local_b8 = render::Viewport(0, 0, arg3, arg4, 0.0, 1.0);
                    local_90.push_back(local_b8);
                    pOVar3 = drawCallState.GetOutputMergerState();
                    pVVar4 = (Viewport*)local_90.HeapBeginPtr();
                    pOVar3->SetViewports(pVVar4, 1);
                    pOVar3 = drawCallState.GetOutputMergerState();
                    pOVar3->SetRenderTargets(pRVar2);
                    pDVar7 = drawCallState;
                    this_01 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                                  drawCallState.GetRenderPipelineState();
                    lVar5 = pDVar7->Instance();
                    eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::
                        compressed_pair_imp(this_01,
                                            (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar5 + 1524));
                    pDVar7 = drawCallState;
                    this_02 = (Layout*)drawCallState.GetRenderPipelineState();
                    lVar5 = pDVar7->Instance();
                    this_02->SetHeapSize((lVar5 + 720));
                    this_03 = (RenderPipelineState*)drawCallState.GetRenderPipelineState();
                    lVar5 = drawCallState.Instance();
                    this_03->SetRasteriserState((lVar5 + 1200));
                    cVar1 = pRVar2->HasColourTargets();
                    if (cVar1) {
                        pVVar4 = &local_b8;
                        new (pVVar4) ImVec4(0.0, 0.0, -1.0, 0.0);
                        lVar5 = pVVar4->Instance();
                        renderContext.SetBlendState((lVar5 + 1524));
                        renderContext.ClearRenderTargets(pRVar2, &local_b8, 1);
                    }
                    this_00 = field_816;
                    this_05 = (Singleton<render::BuiltinStates>*)this_00;
                    cVar1 = this_00->operator_cast_to_bool();
                    if ((cVar1) && (m_mode == 1)) {
                        lVar5 = this_05->Instance();
                        renderContext.SetDepthStencilState((lVar5 + 720));
                        pRVar2 = (RenderTargets*)this_00->end();
                        this_04 = (RenderTargets*)(*this_00).operator->();
                        arg4_00 = render::GetDepthTextureClearFlags((Texture*)this_04->GetDepthStencilTargetTexture());
                        renderContext.ClearDepthStencilTarget(pRVar2, 1.0, 0, arg4_00);
                    }
                    uVar6 = 1;
                    goto LAB_1007aae74;
                }
            }
        }
        uVar6 = 0;
    LAB_1007aae74:
        return uVar6;
    }

    // 0x1007ab090: QueryPass::GetPreferredRT() const has the same machine code as QueryPass::GetPreferredRT()

    // 0x1007ab0d0
    uint32_t QueryPass::GetOcclusionTargetWidth() const {
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* this_01;
        uint32_t* puVar3;

        auto this_00 = GetPreferredRT();
        bool cVar1 = this_00->HasDepthTarget();
        uint32_t uVar2 = 0;
        if (cVar1) {
            this_01 = (compressed_pair_imp<
                       eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                       eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)
                          this_00->GetDepthStencilTargetTexture();
            puVar3 = (uint32_t*)this_01->second();
            uVar2 = *puVar3;
        }
        return uVar2;
    }

    // 0x1007ab110
    uint32_t QueryPass::GetOcclusionTargetHeight() const {
        long lVar3;

        auto this_00 = GetPreferredRT();
        bool cVar1 = this_00->HasDepthTarget();
        uint32_t uVar2 = 0;
        if (cVar1) {
            lVar3 = ((compressed_pair_imp<
                         eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                         eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)
                         this_00->GetDepthStencilTargetTexture())
                        ->second();
            uVar2 = *(uint32_t*)(lVar3 + 4);
        }
        return uVar2;
    }

    // 0x1007ab150
    void QueryPass::Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState, EffectManager& effectManager,
                           const SceneViewData& sceneViewData, DrawableQueue& drawableQueue) {
        uint8_t arg7;
        NXTPixToolkit* this_01;
        OcclusionManager* occlusionManager;

        if (m_mode != 0) {
            if (((RenderTargets*)GetPreferredRT())->HasDepthTarget()) {
                this_01 = (NXTPixToolkit*)rt7Core.GetForwardOcclusionRenderPass();
                occlusionManager = (OcclusionManager*)this_01->GetScreen();
                if (!(GetOcclusionEnabledIgnoringLocalBuffer(sceneViewData))) {
                    arg7 = false;
                } else {
                    arg7 = ((SceneRenderPass*)rt7Core.GetForwardOcclusionRenderPass())
                               ->IsViewChangeValidForOcclusion(sceneViewData);
                }
                RenderOccludedDrawableGroup(rt7Core, drawCallState, effectManager, sceneViewData, drawableQueue, 0,
                                            (bool)arg7, occlusionManager, 1.0);
                RenderOccludedDrawableGroup(rt7Core, drawCallState, effectManager, sceneViewData, drawableQueue, 1,
                                            (bool)arg7, occlusionManager, 1.0);
                RenderOccludedDrawableGroup(rt7Core, drawCallState, effectManager, sceneViewData, drawableQueue, 2,
                                            (bool)arg7, occlusionManager, 1.0);
                RenderOccludedDrawableGroup(rt7Core, drawCallState, effectManager, sceneViewData, drawableQueue, 3,
                                            (bool)arg7, occlusionManager, 1.0);
                RenderOccludedDrawableGroup(rt7Core, drawCallState, effectManager, sceneViewData, drawableQueue, 9,
                                            false, nullptr, 1.0);
            }
        }
    }

    // 0x1007ab300
    void QueryPass::RenderDebug(EffectManager& effectManager, DrawableQueue& drawableQueue) {
        RenderPassType renderPassType;
        RenderTargets* pRVar2;
        long* plVar3;
        uint64_t uVar4;
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
            pRVar2 = (RenderTargets*)GetPreferredRT();
            if (pRVar2->IsCreated()) {
                plVar3 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar3 != nullptr) {
                    pRVar2 = (RenderTargets*)GetPreferredRT();
                    uVar4 = pRVar2->GetDepthStencilTargetTexture();
                    local_58 = ImVec4(0.0, 0.0, 0.5, 0.5);
                    new ((local_40 + 8)) math::Point(0.0, 0.0);
                    local_48 = math::Point(1.0, 1.0);
                    new (local_40) oldscape::sidebars::SideBarData(-1, 0);
                    (**(void (**)(...))(*plVar3 + 112))(plVar3, uVar4, &local_58, local_40 + 8, &local_48, 0, 0, 0,
                                                        (SideBarData*)local_40);
                }
            }
        }
        if (GetOcclusionTestEnabled()) {
            field_16->RenderDebug();
        }
    }

    // 0x1007ab430
    void QueryPass::RegisterTweakVarsOcclusion(tweak::Container& container) {
        container.AddCheckBox("Enable On Query Pass", field_776);
        container.AddCheckBox("Show Query Pass Depth Buffer", *((field_16 + 8)));
    }

    // 0x1007ab470
    void QueryPass::PreparePass(RT7Core& rt7Core, EffectManager& effectManager, const SceneViewData& sceneViewData,
                                DrawableQueue& drawableQueue) {
        Logger* this_00;
        RenderTargets* pRVar3;
        int arg4;
        char* str2;

        PreparePass(rt7Core, effectManager, sceneViewData, drawableQueue);
        if (m_mode == 1) {
            if (PrepareQueryRT(rt7Core)) {
                return;
            }
            this_00 = logger::default_logger();
            str2 = "Could not prepare the owned RT for query pass";
            arg4 = 186;
        } else {
            if (field_816->operator_cast_to_bool()) {
                field_784->Unregister(*field_816);
            }
            if (m_mode != 2) {
                pRVar3 = (RenderTargets*)field_832.operator->();
                if (!(pRVar3->HasDepthTarget())) {
                    return;
                }
                pRVar3 = (RenderTargets*)field_832.operator->();
                pRVar3->Unbind();
                return;
            }
            if (rt7Core.GetForwardDepthTexture() == 0) {
                return;
            }
            pRVar3 = (RenderTargets*)field_832.operator->();
            if (pRVar3->BindDepthStencilTargetTexture((Texture*)rt7Core.GetForwardDepthTexture())) {
                return;
            }
            this_00 = logger::default_logger();
            str2 = "Could not prepare the unowned RT for query pass";
            arg4 = 203;
        }
        this_00->Log(false, 2,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/renderer/"
                     "renderpasses/QueryPass.cpp",
                     arg4, str2);
    }

    // 0x1007ab590
    unsigned long QueryPass::PrepareQueryRT(RT7Core& rt7Core) {
        RenderTargets* pRVar4;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>* pcVar5;
        unsigned int* puVar6;
        uint64_t unaff_RBX;
        unsigned long uVar7;
        uint8_t local_80[80];

        if ((m_queryRenderTargetSize == 0) || (field_808 == 0)) {
        LAB_1007ab779:
            LogAssert("false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/renderpasses/QueryPass.cpp",
                      218, "No valid forward depth texture for query pass prepare");
        }
        long lVar3 = rt7Core.GetForwardDepthTexture();
        if (lVar3 == 0)
            goto LAB_1007ab779;
        uint8_t* this_00 = field_816;
        if (this_00->operator_cast_to_bool()) {
            pRVar4 = (RenderTargets*)(*this_00).operator->();
            lVar3 = pRVar4->GetDepthStencilTargetTexture();
            if (lVar3 != 0) {
                pRVar4 = (RenderTargets*)(*this_00).operator->();
                pcVar5 = (compressed_pair_imp<
                          eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                          eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)
                             pRVar4->GetDepthStencilTargetTexture();
                puVar6 = (unsigned int*)pcVar5->second();
                if ((*puVar6 == m_queryRenderTargetSize) &&
                    (uVar7 = (((uint64_t)((int64_t)((unsigned long)unaff_RBX >> 8)) << 8) | (uint8_t)1),
                     puVar6[1] == field_808))
                    goto LAB_1007ab79e;
            }
            field_784->Unregister(*this_00);
        }
        pRVar4 = (RenderTargets*)field_832.operator->();
        if (pRVar4->HasDepthTarget()) {
            pRVar4 = (RenderTargets*)field_832.operator->();
            pRVar4->Unbind();
        }
        array<render::Texture::Desc, 2ul> local_100;
        Desc* this_02 = (Desc*)local_80;
        new (this_02) render::Texture::Desc();
        local_80._0_4_ = m_queryRenderTargetSize;
        local_80._4_4_ = field_808;
        local_80._16_4_ = 1;
        local_80._24_4_ = 0;
        pcVar5 = (compressed_pair_imp<
                  eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>>::Layout,
                  eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true>, 0>*)rt7Core.GetForwardDepthTexture();
        lVar3 = pcVar5->second();
        local_80._12_4_ = *(int*)(lVar3 + 12);
        local_80[32] = 0;
        ((local_80 + 64))->Register(field_784, 14638107, *3553, (int)&local_100, nullptr, (unsigned int)this_02, false);
        uint32_t uVar8 = (uint32_t)((unsigned long)this_02 >> 32);
        *this_00 = (*((local_80 + 64)));
        ((local_80 + 64))->~shared_ptr();
        unsigned int uVar2 = this_00->operator_cast_to_bool();
        uVar7 = (unsigned long)uVar2;
        if ((char)uVar2 == '\0') {
            field_784->Unregister(*this_00);
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/renderpasses/QueryPass.cpp",
                      258, "Could not create the depth target for the query render pass (Size %u x %u)",
                      (((uint64_t)uVar8 << 32) | (uint32_t)m_queryRenderTargetSize), field_808);
        }
    LAB_1007ab79e:
        return uVar7 & 4294967295;
    }

    // 0x1007ab7d0
    void QueryPass::SetupDistanceCulling(const math::AABB& aabb, const math::Matrix44T<float>& matrix44) {
        unsigned int arg1;
        float in_XMM1_Da;
        uint64_t local_40;
        float local_38;
        float local_34;

        if (m_enablePreciseCulling == '\0') {
            DisableDistanceCulling();
        } else {
            arg1 = 0;
            local_34 = 0.0;
            do {
                local_40 = aabb.GetCornerPos(arg1);
                local_38 = in_XMM1_Da;
                in_XMM1_Da = (float)DstFromCameraPlaneUnclamped((Vector3T<float>*)&local_40, matrix44);
                local_34 = (float)eastl::max_alt(local_34, in_XMM1_Da);
                arg1 = arg1 + 1;
            } while (arg1 != 8);
            field_812 = local_34;
        }
    }

    // 0x1007ab860: DstFromCameraPlaneUnclamped(math::Vector3T<float> const&, math::Matrix44T<float> const&) has the same machine code as jag::DstFromCameraPlaneUnclamped(math::Vector3T<float> const&, math::Matrix44T<float> const&)

    // 0x1007ab910
    void QueryPass::DestroyRenderingResources() {
        field_784->Unregister(*field_816);
        render::RenderTargets::SafeReset(field_832);
        DestroyRenderingResources();
    }

    // 0x1007b12b0: QueryPass::GetMode() const has the same machine code as ShadowMapCascade::GetCascadeID() const

} // namespace jag::graphics
