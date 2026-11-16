// libs/graphics/runetek7/renderer/renderpasses/GeometryPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "GeometryPass.h"

namespace jag::graphics {
    // 0x1039bd14b
    bool GeometryPass::m_showGBuffer;

    // 0x1039bd14c
    bool GeometryPass::m_showGBufferDepth;

    // 0x1007a7e40
    GeometryPass::GeometryPass(render::RenderTargetsManager* renderTargetsManager, ThreadPool* threadPool)
        : SceneRenderPass(3, renderTargetsManager, threadPool) {}

    // 0x1007a7ea0
    GeometryPass::~GeometryPass() {
        field_800->~shared_ptr();
    }

    // 0x1007a7f00
    char GeometryPass::BeginPass(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                 EffectManager& effectManager, const SceneViewData& sceneViewData,
                                 const DrawableQueue& drawableQueue) {
        unsigned int arg4;
        OutputMergerState* pOVar3;
        Viewport* pVVar4;
        RenderTargets* pRVar5;
        RenderTargets* this_00;
        RenderContext* pRVar6;
        uint8_t* this_02;
        ImVec4 local_48;
        char local_31;

        uint8_t* this_01 = field_800;
        long lVar2 = this_01->end();
        if (lVar2 != 0) {
            if (sceneViewData.field_432.empty() == '\0') {
                local_31 = this_01->operator_cast_to_bool();
                if (local_31 != '\0') {
                    pOVar3 = drawCallState.GetOutputMergerState();
                    this_02 = &sceneViewData.field_432;
                    pVVar4 = (Viewport*)this_02->HeapBeginPtr();
                    pOVar3->SetViewports(pVVar4, 1);
                    pOVar3 = drawCallState.GetOutputMergerState();
                    pRVar5 = (RenderTargets*)this_01->end();
                    pOVar3->SetRenderTargets(pRVar5);
                    local_48 = ImVec4(0.0, 0.0, -1.0, 0.0);
                    pRVar6 = renderContext;
                    renderContext.SetShaders(nullptr);
                    lVar2 = pRVar6->Instance();
                    renderContext.SetBlendState((lVar2 + 1524));
                    pVVar4 = (Viewport*)this_02->HeapBeginPtr();
                    renderContext.SetViewports(pVVar4, 1);
                    pRVar5 = (RenderTargets*)this_01->end();
                    renderContext.ClearRenderTargets(pRVar5, &local_48, 1);
                    pVVar4 = (Viewport*)(*this_02)[0];
                    pRVar6 = renderContext;
                    renderContext.SetScissorRectangle(false, *pVVar4);
                    lVar2 = pRVar6->Instance();
                    renderContext.SetDepthStencilState((lVar2 + 720));
                    pRVar5 = (RenderTargets*)this_01->end();
                    this_00 = (RenderTargets*)(*this_01).operator->();
                    arg4 = render::GetDepthTextureClearFlags((Texture*)this_00->GetDepthStencilTargetTexture());
                    renderContext.ClearDepthStencilTarget(pRVar5, 1.0, 0, arg4);
                }
                return local_31;
            }
        }
        LogAssert("m_GBuffer.get() != nullptr && !viewData.m_renderTargetViewports.empty()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/renderer/"
                  "renderpasses/GeometryPass.cpp",
                  35, nullptr);
    }

    // 0x1007a80a0
    void GeometryPass::EndPass(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                               EffectManager& effectManager, const DrawableQueue& drawableQueue) {
        if (field_800->end() == 0) {
            LogAssert("m_GBuffer.get() != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/renderpasses/GeometryPass.cpp",
                      63, nullptr);
        }
        ~AutoSingleton();
    }

    // 0x1007a8110
    void GeometryPass::Render(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                              EffectManager& effectManager, const SceneViewData& sceneViewData,
                              DrawableQueue& drawableQueue) {
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_00;
        DrawCallState local_d0;
        uint32_t local_7c;
        function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> local_68[48];
        long local_38;

        SceneViewData* local_78 = (SceneViewData*)effectManager;
        DrawableQueue* local_70 = drawableQueue;
        long lVar3 = field_800->end();
        if (lVar3 == 0) {
            LogAssert("m_GBuffer.get() != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/renderpasses/GeometryPass.cpp",
                      77, nullptr);
        }
        if (GetCPUOcclusionEnabled(sceneViewData)) {
            field_16->RasterizeToDepthBuffer(rt7Core, 4, sceneViewData, *local_70);
        }
        DrawCallState* pDVar4 = &local_d0;
        new (pDVar4) render::DrawCallState(drawCallState);
        this_00 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                      pDVar4->GetRenderPipelineState();
        lVar3 = pDVar4->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            this_00, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar3 + 1524));
        pDVar4 = &local_d0;
        auto this_01 = pDVar4->GetRenderPipelineState();
        lVar3 = pDVar4->Instance();
        this_01->SetRasteriserState((lVar3 + 1200));
        pDVar4 = &local_d0;
        auto this_02 = pDVar4->GetRenderPipelineState();
        lVar3 = pDVar4->Instance();
        __1* arg1 = (__1*)(lVar3 + 720);
        this_02->SetHeapSize(arg1);
        uint64_t local_88 = GetOcclusionSceneViewData();
        uint64_t* puStack_98 = &local_88;
        GeometryPass* local_a0 = this;
        SceneViewData* local_90 = sceneViewData;
        std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>::function<
            GeometryPass::Render(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&,
                                 DrawableQueue&)::__1,
            void>(local_68, arg1);
        if (GetOcclusionEnabled(sceneViewData)) {
            if (field_16->DepthBufferCanOcclude()) {
                local_7c = IsViewChangeValidForOcclusion(sceneViewData);
                goto LAB_1007a8294;
            }
        }
        local_7c = 0;
    LAB_1007a8294:
        bool bVar2 = (uint8_t)local_7c;
        RenderOccludedDrawableGroup(rt7Core, &local_d0, local_78, sceneViewData, local_70, 0, 4, bVar2, local_68);
        RenderOccludedDrawableGroup(rt7Core, &local_d0, local_78, sceneViewData, local_70, 1, 4, bVar2, local_68);
        bVar2 = (bool)rt7Core.GetForwardDepthTexture();
        SceneRenderPass::DownsampleGPUDepthBuffer(*this, rt7Core, *local_78, sceneViewData, local_70, bVar2);
        if ((char)local_7c != '\0') {
            if (RenderPass::m_useAsyncRasterisation == '\0') {
                local_70->Filter(3, 4, *local_68);
                local_70->Filter(2, 4, *local_68);
            } else {
                local_70->FilterAsync(3, 4, *local_68);
                local_70->FilterAsync(2, 4, *local_68);
            }
        }
    }

    // 0x1007a8570
    void GeometryPass::RenderDebug(EffectManager& effectManager, DrawableQueue& drawableQueue) {
        RenderPassType renderPassType;
        int arg1;
        long* plVar2;
        RenderTargets* pRVar3;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_00;
        uint64_t* puVar4;
        uint64_t uVar5;
        ImVec4 local_60;
        Point<float> local_50;
        uint8_t local_48[16];
        Point<float> local_38;

        DrawableGroupType drawableGroupType = 0;
        do {
            renderPassType = GetPos();
            drawableQueue.RenderDebug(drawableGroupType, renderPassType);
            drawableGroupType = drawableGroupType + 1;
        } while (drawableGroupType != 13);
        if (m_showGBuffer != '\0') {
            if (field_800->operator_cast_to_bool()) {
                plVar2 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar2 != nullptr) {
                    pRVar3 = (RenderTargets*)(*field_800).operator->();
                    this_00 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                  pRVar3->GetColourTargetTextures();
                    puVar4 = (uint64_t*)(*this_00)[0];
                    uVar5 = *puVar4;
                    local_60 = ImVec4(0.0, 0.0, 0.5, 0.5);
                    local_38 = math::Point(0.0, 0.0);
                    local_50 = math::Point(1.0, 1.0);
                    new (local_48) oldscape::sidebars::SideBarData(-1, 0);
                    (**(void (**)(...))(*plVar2 + 112))(plVar2, uVar5, &local_60, &local_38, &local_50, 0, 0, 0,
                                                        (SideBarData*)local_48);
                }
            }
        }
        if (m_showGBufferDepth != '\0') {
            if (field_800->operator_cast_to_bool()) {
                plVar2 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar2 != nullptr) {
                    pRVar3 = (RenderTargets*)(*field_800).operator->();
                    uVar5 = pRVar3->GetDepthStencilTargetTexture();
                    local_60 = ImVec4(0.0, 0.5, 0.5, 0.5);
                    local_38 = math::Point(0.0, 0.0);
                    local_50 = math::Point(1.0, 1.0);
                    new ((local_48 + 8)) math::ColourStorage8888(255, 255, 255, 255);
                    arg1 = ((local_48 + 8))->GetX();
                    new (local_48) oldscape::sidebars::SideBarData(arg1, 0);
                    (**(void (**)(...))(*plVar2 + 112))(plVar2, uVar5, &local_60, &local_38, &local_50, 0, 1, 0,
                                                        (SideBarData*)local_48);
                }
            }
        }
        if (GetOcclusionTestEnabled()) {
            field_16->RenderDebug();
        }
    }

    // 0x1007a87a0
    void GeometryPass::RegisterTweakVarsOcclusion(tweak::Container& container) {
        container.AddCheckBox("Enable On Geometry Pass", field_776);
        container.AddCheckBox("Show Geometry Pass Depth Buffer", *((field_16 + 8)));
    }

} // namespace jag::graphics
