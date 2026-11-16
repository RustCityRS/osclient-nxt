// libs/game/runetek5/scene/minimap/MiniMapRenderPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "MiniMapRenderPass.h"

namespace jag {
    // 0x1000e5d50: MiniMapRenderPass::GetStartingRenderLevel() const has the same machine code as oldscape::rs2lib::CoordZoneSource::GetRotation() const

    // 0x1003c4e50
    MiniMapRenderPass::MiniMapRenderPass() : graphics::RenderPass(5), m_startingRenderLevel(0) {}

    // 0x1003c4e80
    uint64_t MiniMapRenderPass::BeginPass(render::DrawCallState& drawCallState, render::RenderContext& renderContext,
                                          graphics::EffectManager& effectManager,
                                          const graphics::SceneViewData& sceneViewData,
                                          const graphics::DrawableQueue& drawableQueue) {
        bool arg1;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_02;
        uint64_t* puVar3;
        int* piVar4;
        RenderContext* this_03;
        RenderContext* this_04;
        unsigned long arg3;
        uint8_t local_50[24];

        auto pOVar1 = drawCallState.GetOutputMergerState();
        uint8_t* this_00 = &sceneViewData.field_432;
        auto pVVar2 = this_00->HeapBeginPtr();
        unsigned int arg2 = this_00->size();
        pOVar1->SetViewports(pVVar2, arg2);
        pOVar1 = drawCallState.GetOutputMergerState();
        pOVar1->SetRenderTargets(*(RenderTargets**)&sceneViewData.field_368);
        if (*(RenderTargets**)&sceneViewData.field_368 == nullptr) {
            arg3 = 1;
            this_03 = nullptr;
            this_04 = renderContext;
            if ((sceneViewData.field_416 & 1) == 0) {
                this_03 = nullptr;
                goto LAB_1003c4fd2;
            }
        } else {
            local_50._16_8_ = ((vector<eastl::pair<int, int>>*)(*(RenderTargets**)&sceneViewData.field_368)
                                   ->GetColourTargetTextures())
                                  ->size();
            pVVar2 = (Viewport*)(*this_00)[0];
            this_02 =
                (vector<render::Texture*,
                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)(*(RenderTargets**)&sceneViewData
                                                                                        .field_368)
                    ->GetColourTargetTextures();
            puVar3 = (uint64_t*)(*this_02)[0];
            piVar4 = (int*)(*puVar3)->second();
            if (((pVVar2->field_0 == 0 && pVVar2->field_4 == 0) && (pVVar2->field_8 == *piVar4)) &&
                (pVVar2->field_12 == piVar4[1])) {
                arg1 = false;
            } else {
                pOVar1 = drawCallState.GetOutputMergerState();
                new (local_50)
                    oldscape::dash3d::GridRect(pVVar2->field_0, pVVar2->field_4, pVVar2->field_8, pVVar2->field_12);
                pOVar1->PushScissorRect(*local_50);
                arg1 = true;
            }
            this_04 = renderContext;
            this_03 = renderContext;
            renderContext.SetScissorRectangle(arg1, *pVVar2);
            arg3 = local_50._16_8_;
            if ((sceneViewData.field_416 & 1) == 0)
                goto LAB_1003c4fd2;
        }
        long lVar5 = this_03->Instance();
        BlendState* blendState = (BlendState*)(lVar5 + 1524);
        this_04->SetBlendState(blendState);
        RenderTargets* renderTargets = *(RenderTargets**)&sceneViewData.field_368;
        Vector4T<float>* vector4 = &sceneViewData.field_384[(unsigned long)blendState];
        this_03 = this_04;
        this_04->ClearRenderTargets(renderTargets, vector4, arg3);
    LAB_1003c4fd2:
        if ((sceneViewData.field_416 & 6) != 0) {
            lVar5 = this_03->Instance();
            this_04->SetDepthStencilState((lVar5 + 720));
            this_04->ClearDepthStencilTarget(
                *(RenderTargets**)&sceneViewData.field_368, *(float*)&sceneViewData.field_420,
                *(unsigned int*)&sceneViewData.field_424, *(unsigned int*)&sceneViewData.field_416);
        }
        return 1;
    }

    // 0x1003c5070
    void MiniMapRenderPass::Render(graphics::RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                                   graphics::EffectManager& effectManager, const graphics::SceneViewData& sceneViewData,
                                   graphics::DrawableQueue& drawableQueue) {
        DrawCallState local_88;

        EffectManager* local_38 = effectManager;
        auto pRVar3 = GetRenderContext();
        long lVar4 = Instance();
        RenderContext* pRVar8 = pRVar3;
        pRVar3->SetBlendState((lVar4 + 2284));
        lVar4 = pRVar8->Instance();
        pRVar8 = pRVar3;
        pRVar3->SetDepthStencilState((lVar4 + 720));
        lVar4 = pRVar8->Instance();
        RenderContext* local_48 = pRVar3;
        pRVar3->SetRasteriserState((lVar4 + 1200));
        DrawCallState* pDVar9 = &local_88;
        new (pDVar9) render::DrawCallState(drawCallState);
        auto pcVar5 = pDVar9->GetRenderPipelineState();
        lVar4 = pDVar9->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar5, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar4 + 2284));
        pDVar9 = &local_88;
        auto pLVar6 = pDVar9->GetRenderPipelineState();
        lVar4 = pDVar9->Instance();
        pLVar6->SetHeapSize((lVar4 + 720));
        pDVar9 = &local_88;
        auto pRVar7 = pDVar9->GetRenderPipelineState();
        lVar4 = pDVar9->Instance();
        pRVar7->SetRasteriserState((lVar4 + 1200));
        auto RVar1 = GetPos();
        drawableQueue.SortGroup<graphics::SortKeyLessThan>(0, RVar1);
        unsigned int uVar2 = GetPos();
        graphics::DrawableQueue::RenderGroup(drawableQueue, rt7Core, local_88, (DrawableGroupType)sceneViewData, 0,
                                             *((EffectManager*)(unsigned long)uVar2));
        RVar1 = GetPos();
        drawableQueue.SortGroup<graphics::SortKeyLessThan>(1, RVar1);
        uVar2 = GetPos();
        graphics::DrawableQueue::RenderGroup(drawableQueue, rt7Core, drawCallState, (DrawableGroupType)sceneViewData, 1,
                                             *((EffectManager*)(unsigned long)uVar2));
        lVar4 = drawableQueue.Instance();
        pRVar8 = local_48;
        pRVar3 = local_48;
        local_48->SetBlendState((lVar4 + 1676));
        lVar4 = pRVar3->Instance();
        pRVar3 = pRVar8;
        pRVar8->SetDepthStencilState((lVar4 + 720));
        lVar4 = pRVar3->Instance();
        pRVar8->SetRasteriserState((lVar4 + 1200));
        pDVar9 = &local_88;
        new (pDVar9) render::DrawCallState(*((DrawCallState*)(SceneViewData*)drawCallState));
        pcVar5 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pDVar9->GetRenderPipelineState();
        lVar4 = pDVar9->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar5, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar4 + 1676));
        pDVar9 = &local_88;
        pLVar6 = (Layout*)pDVar9->GetRenderPipelineState();
        lVar4 = pDVar9->Instance();
        pLVar6->SetHeapSize((lVar4 + 720));
        pDVar9 = &local_88;
        pRVar7 = (RenderPipelineState*)pDVar9->GetRenderPipelineState();
        lVar4 = pDVar9->Instance();
        pRVar7->SetRasteriserState((lVar4 + 1200));
        RVar1 = GetPos();
        drawableQueue.SortGroup<graphics::SortKeyLessThan>(3, RVar1);
        uVar2 = GetPos();
        graphics::DrawableQueue::RenderGroup(drawableQueue, rt7Core, local_88, (DrawableGroupType)sceneViewData, 3,
                                             *((EffectManager*)(unsigned long)uVar2));
        pDVar9 = &local_88;
        pDVar9->~DrawCallState();
        lVar4 = pDVar9->Instance();
        pRVar8 = local_48;
        pRVar3 = local_48;
        local_48->SetBlendState((lVar4 + 1676));
        lVar4 = pRVar3->Instance();
        pRVar3 = pRVar8;
        pRVar8->SetDepthStencilState((lVar4 + 720));
        lVar4 = pRVar3->Instance();
        pRVar8->SetRasteriserState((lVar4 + 1200));
        pDVar9 = &local_88;
        new (pDVar9) render::DrawCallState(*((DrawCallState*)(SceneViewData*)drawCallState));
        pcVar5 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pDVar9->GetRenderPipelineState();
        lVar4 = pDVar9->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar5, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar4 + 1676));
        pDVar9 = &local_88;
        pLVar6 = (Layout*)pDVar9->GetRenderPipelineState();
        lVar4 = pDVar9->Instance();
        pLVar6->SetHeapSize((lVar4 + 720));
        pDVar9 = &local_88;
        pRVar7 = (RenderPipelineState*)pDVar9->GetRenderPipelineState();
        lVar4 = pDVar9->Instance();
        pRVar7->SetRasteriserState((lVar4 + 1200));
        RVar1 = GetPos();
        drawableQueue.SortGroup<graphics::SortKeyLessThan>(2, RVar1);
        uVar2 = GetPos();
        graphics::DrawableQueue::RenderGroup(drawableQueue, rt7Core, local_88, (DrawableGroupType)sceneViewData, 2,
                                             *((EffectManager*)(unsigned long)uVar2));
        local_48->SetInputAssemblerState(nullptr);
    }

    // 0x1003c5420
    void MiniMapRenderPass::RenderDebug(graphics::EffectManager& effectManager,
                                        graphics::DrawableQueue& drawableQueue) {
        RenderPassType renderPassType;

        DrawableGroupType drawableGroupType = 0;
        do {
            renderPassType = GetPos();
            drawableQueue.RenderDebug(drawableGroupType, renderPassType);
            drawableGroupType = drawableGroupType + 1;
        } while (drawableGroupType != 13);
    }

} // namespace jag
