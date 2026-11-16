// libs/game/runetek5/scene/minimap/MiniMapRenderPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "MiniMapRenderPass.h"

namespace jag {
    // 0x1000e5d50: the linker folded this into oldscape::rs2lib::CoordZoneSource::GetRotation() const, which has identical code
    int MiniMapRenderPass::GetStartingRenderLevel() const;

    // 0x1003bc740, 16 bytes, complete-object constructor, placed by class name and debug map
    // MiniMapRenderPass::MiniMapRenderPass(): jumps straight to the base-object constructor

    // 0x1003c4e50, 48 bytes, base-object constructor, placed by class name
    // MiniMapRenderPass::MiniMapRenderPass()
    void MiniMapRenderPass::MiniMapRenderPass() {
        new (this) graphics::RenderPass(5);
        field_0 = &PTR__MiniMapRenderPass_100efe570;
        m_startingRenderLevel = 0;
    }

    // 0x1003c4e80, 464 bytes, placed by class name
    // MiniMapRenderPass::BeginPass(render::DrawCallState&, render::RenderContext&, graphics::EffectManager&, graphics::SceneViewData const&, graphics::DrawableQueue const&)
    undefined8 MiniMapRenderPass::BeginPass(DrawCallState* param_1, RenderContext* param_2, EffectManager* param_3,
                                            SceneViewData* param_4, DrawableQueue* param_5) {
        undefined1* this_00;
        RenderTargets* pRVar1;
        bool bVar2;
        uint uVar3;
        Viewport* pVVar4;
        OutputMergerState* this_01;
        vector<eastl::pair<int, int>, eastl::allocator>* this_02;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_03;
        undefined8* puVar5;
        int* piVar6;
        Rect* pRVar7;
        long lVar8;
        Vector4T* pVVar9;
        RenderContext* this_04;
        RenderContext* this_05;
        ulong uVar10;
        undefined1 local_50[24];
        RenderContext* local_38;

        local_38 = param_2;
        pVVar4 = (Viewport*)param_1->GetOutputMergerState();
        this_00 = &param_4->field_432;
        uVar3 = this_00->HeapBeginPtr();
        this_00->size();
        render::OutputMergerState::SetViewports(pVVar4, uVar3);
        this_01 = (OutputMergerState*)param_1->GetOutputMergerState();
        this_01->SetRenderTargets(*(RenderTargets**)&param_4->field_368);
        if (*(RenderTargets**)&param_4->field_368 == (RenderTargets*)0) {
            uVar10 = 1;
            this_04 = (RenderContext*)0;
            this_05 = local_38;
            if ((param_4->field_416 & 1) == 0) {
                this_04 = (RenderContext*)0;
                goto LAB_1003c4fd2;
            }
        } else {
            this_02 = (vector<eastl::pair<int, int>, eastl::allocator>*)(*(RenderTargets**)&param_4->field_368)
                          ->GetColourTargetTextures();
            local_50._16_8_ = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(this_02);
            pVVar4 = (Viewport*)eastl::vector<
                render::Viewport, eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>::
            operator[](
                (vector<render::Viewport, eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>*)
                    this_00,
                0);
            this_03 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                        eastl::allocator>>*)(*(RenderTargets**)&param_4
                                                                                                  ->field_368)
                    ->GetColourTargetTextures();
            puVar5 = (undefined8*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_03, 0);
            piVar6 = (int*)(*puVar5)->second();
            if (((pVVar4->field_0 == 0 && pVVar4->field_4 == 0) && (pVVar4->field_8 == *piVar6)) &&
                (pVVar4->field_12 == piVar6[1])) {
                bVar2 = false;
            } else {
                pRVar7 = (Rect*)param_1->GetOutputMergerState();
                new (local_50)
                    oldscape::dash3d::GridRect(pVVar4->field_0, pVVar4->field_4, pVVar4->field_8, pVVar4->field_12);
                render::OutputMergerState::PushScissorRect(pRVar7);
                bVar2 = true;
            }
            this_05 = local_38;
            this_04 = local_38;
            local_38->SetScissorRectangle(bVar2, pVVar4);
            uVar10 = local_50._16_8_;
            if ((param_4->field_416 & 1) == 0)
                goto LAB_1003c4fd2;
        }
        lVar8 = this_04->Instance();
        this_05->SetBlendState((BlendState*)(lVar8 + 1524));
        pRVar1 = *(RenderTargets**)&param_4->field_368;
        pVVar9 = (Vector4T*)std::array<math::Vector4T<float>, 2ul>::operator[]((ulong)&param_4->field_384);
        this_04 = this_05;
        this_05->ClearRenderTargets(pRVar1, pVVar9, uVar10);
    LAB_1003c4fd2:
        if ((param_4->field_416 & 6) != 0) {
            lVar8 = this_04->Instance();
            this_05->SetDepthStencilState((DepthStencilState*)(lVar8 + 720));
            this_05->ClearDepthStencilTarget(*(RenderTargets**)&param_4->field_368, *(float*)&param_4->field_420,
                                             *(uint*)&param_4->field_424, *(uint*)&param_4->field_416);
        }
        return 1;
    }

    // 0x1003c5070, 944 bytes, placed by class name
    // MiniMapRenderPass::Render(graphics::RT7Core&, render::DrawCallState const&, graphics::EffectManager&, graphics::SceneViewData const&, graphics::DrawableQueue&)
    void MiniMapRenderPass::Render(RT7Core* param_1, DrawCallState* param_2, EffectManager* param_3,
                                   SceneViewData* param_4, DrawableQueue* param_5) {
        undefined4 uVar3;
        RenderContext* pRVar4;
        long lVar5;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* pcVar6;
        Layout* pLVar7;
        RenderPipelineState* pRVar8;
        RenderContext* pRVar9;
        DrawCallState* pDVar10;
        undefined1 auVar11[16];
        DrawCallState local_88;
        RenderContext* local_48;

        pRVar4 = (RenderContext*)GetRenderContext();
        lVar5 = ((MiniMapRenderPass*)this)->Instance();
        pRVar9 = pRVar4;
        pRVar4->SetBlendState((BlendState*)(lVar5 + 2284));
        lVar5 = pRVar9->Instance();
        pRVar9 = pRVar4;
        pRVar4->SetDepthStencilState((DepthStencilState*)(lVar5 + 720));
        lVar5 = pRVar9->Instance();
        local_48 = pRVar4;
        pRVar4->SetRasteriserState((RasteriserState*)(lVar5 + 1200));
        pDVar10 = &local_88;
        render::DrawCallState::DrawCallState(pDVar10, param_2);
        pcVar6 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pDVar10->GetRenderPipelineState();
        auVar11 = pDVar10->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar6, (EntityHighlight**)(auVar11._0_8_ + 2284), auVar11._8_8_);
        pDVar10 = &local_88;
        pLVar7 = (Layout*)pDVar10->GetRenderPipelineState();
        lVar5 = pDVar10->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(pLVar7, lVar5 + 720);
        pDVar10 = &local_88;
        pRVar8 = (RenderPipelineState*)pDVar10->GetRenderPipelineState();
        lVar5 = pDVar10->Instance();
        pRVar8->SetRasteriserState((RasteriserState*)(lVar5 + 1200));
        uVar3 = GetPos();
        graphics::DrawableQueue::SortGroup<graphics::SortKeyLessThan>(param_5, 0, uVar3);
        uVar3 = GetPos();
        param_5->RenderGroup(param_1, &local_88, param_4, 0, uVar3, param_3);
        local_88.~DrawCallState();
        uVar3 = GetPos();
        graphics::DrawableQueue::SortGroup<graphics::SortKeyLessThan>(param_5, 1, uVar3);
        uVar3 = GetPos();
        param_5->RenderGroup(param_1, param_2, param_4, 1, uVar3, param_3);
        lVar5 = param_5->Instance();
        pRVar9 = local_48;
        pRVar4 = local_48;
        local_48->SetBlendState((BlendState*)(lVar5 + 1676));
        lVar5 = pRVar4->Instance();
        pRVar4 = pRVar9;
        pRVar9->SetDepthStencilState((DepthStencilState*)(lVar5 + 720));
        lVar5 = pRVar4->Instance();
        pRVar9->SetRasteriserState((RasteriserState*)(lVar5 + 1200));
        pDVar10 = &local_88;
        render::DrawCallState::DrawCallState(pDVar10, param_2);
        pcVar6 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pDVar10->GetRenderPipelineState();
        auVar11 = pDVar10->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar6, (EntityHighlight**)(auVar11._0_8_ + 1676), auVar11._8_8_);
        pDVar10 = &local_88;
        pLVar7 = (Layout*)pDVar10->GetRenderPipelineState();
        lVar5 = pDVar10->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(pLVar7, lVar5 + 720);
        pDVar10 = &local_88;
        pRVar8 = (RenderPipelineState*)pDVar10->GetRenderPipelineState();
        lVar5 = pDVar10->Instance();
        pRVar8->SetRasteriserState((RasteriserState*)(lVar5 + 1200));
        uVar3 = GetPos();
        graphics::DrawableQueue::SortGroup<graphics::SortKeyLessThan>(param_5, 3, uVar3);
        uVar3 = GetPos();
        param_5->RenderGroup(param_1, &local_88, param_4, 3, uVar3, param_3);
        pDVar10 = &local_88;
        pDVar10->~DrawCallState();
        lVar5 = pDVar10->Instance();
        pRVar9 = local_48;
        pRVar4 = local_48;
        local_48->SetBlendState((BlendState*)(lVar5 + 1676));
        lVar5 = pRVar4->Instance();
        pRVar4 = pRVar9;
        pRVar9->SetDepthStencilState((DepthStencilState*)(lVar5 + 720));
        lVar5 = pRVar4->Instance();
        pRVar9->SetRasteriserState((RasteriserState*)(lVar5 + 1200));
        pDVar10 = &local_88;
        render::DrawCallState::DrawCallState(pDVar10, param_2);
        pcVar6 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                     pDVar10->GetRenderPipelineState();
        auVar11 = pDVar10->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            pcVar6, (EntityHighlight**)(auVar11._0_8_ + 1676), auVar11._8_8_);
        pDVar10 = &local_88;
        pLVar7 = (Layout*)pDVar10->GetRenderPipelineState();
        lVar5 = pDVar10->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(pLVar7, lVar5 + 720);
        pDVar10 = &local_88;
        pRVar8 = (RenderPipelineState*)pDVar10->GetRenderPipelineState();
        lVar5 = pDVar10->Instance();
        pRVar8->SetRasteriserState((RasteriserState*)(lVar5 + 1200));
        uVar3 = GetPos();
        graphics::DrawableQueue::SortGroup<graphics::SortKeyLessThan>(param_5, 2, uVar3);
        uVar3 = GetPos();
        param_5->RenderGroup(param_1, &local_88, param_4, 2, uVar3, param_3);
        local_88.~DrawCallState();
        local_48->SetInputAssemblerState(0);
    }

    // 0x1003c5420, 80 bytes, placed by class name
    // MiniMapRenderPass::RenderDebug(graphics::EffectManager&, graphics::DrawableQueue&)
    void MiniMapRenderPass::RenderDebug(EffectManager* param_1, DrawableQueue* param_2) {
        undefined4 uVar1;
        int iVar2;

        iVar2 = 0;
        do {
            uVar1 = GetPos();
            param_2->RenderDebug(iVar2, uVar1);
            iVar2 = iVar2 + 1;
        } while (iVar2 != 13);
    }

} // namespace jag
