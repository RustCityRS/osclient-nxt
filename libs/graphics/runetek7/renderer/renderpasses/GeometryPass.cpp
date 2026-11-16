// libs/graphics/runetek7/renderer/renderpasses/GeometryPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "GeometryPass.h"

namespace jag::graphics {
    // 0x1039bd14b, 1 bytes, __common; zero-initialised
    GeometryPass::m_showGBuffer;

    // 0x1039bd14c, 1 bytes, __common; zero-initialised
    GeometryPass::m_showGBufferDepth;

    // 0x1007a7e40, 80 bytes, base-object constructor, placed by class name and debug map
    // GeometryPass::GeometryPass(render::RenderTargetsManager*, ThreadPool*)
    void GeometryPass::GeometryPass(RenderTargetsManager* param_1, ThreadPool* param_2) {
        new (this) SceneRenderPass(3, param_1, param_2);
        field_0 = &PTR__GeometryPass_100f14240;
        new (field_800, (_func_decltype_nullptr*)3) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x1007a7e90, 16 bytes, complete-object constructor, placed by class name and debug map
    // GeometryPass::GeometryPass(render::RenderTargetsManager*, ThreadPool*): jumps straight to the base-object constructor

    // 0x1007a7ea0, 48 bytes, base-object destructor, placed by class name and debug map
    // GeometryPass::~GeometryPass()
    void GeometryPass::~GeometryPass() {
        field_0 = &PTR__GeometryPass_100f14240;
        field_800->~shared_ptr();
        ~SceneRenderPass();
    }

    // 0x1007a7ed0, 16 bytes, complete-object destructor, placed by class name and debug map
    // GeometryPass::~GeometryPass(): jumps straight to the base-object destructor

    // 0x1007a7ee0, 32 bytes, deleting destructor, placed by class name and debug map
    // GeometryPass::~GeometryPass()
    void GeometryPass::~GeometryPass() {
        ~GeometryPass(this);
        operator_delete(this);
    }

    // 0x1007a7f00, 416 bytes, placed by class name and debug map
    // GeometryPass::BeginPass(render::DrawCallState&, render::RenderContext&, EffectManager&, SceneViewData const&, DrawableQueue const&)
    undefined1 GeometryPass::BeginPass(DrawCallState* param_1, RenderContext* param_2, EffectManager* param_3,
                                       SceneViewData* param_4, DrawableQueue* param_5) {
        char cVar1;
        uint uVar2;
        long lVar3;
        Viewport* pVVar4;
        OutputMergerState* this_00;
        RenderTargets* pRVar5;
        RenderTargets* this_01;
        Texture* pTVar6;
        undefined1* this_02;
        RenderContext* pRVar7;
        undefined1* this_03;
        ImVec4 local_48[23];
        undefined1 local_31;

        this_02 = field_800;
        lVar3 = this_02->end();
        if (lVar3 != 0) {
            cVar1 = (&param_4->field_432)->empty();
            if (cVar1 == '\0') {
                local_31 = this_02->operator_cast_to_bool();
                if ((bool)local_31) {
                    pVVar4 = (Viewport*)param_1->GetOutputMergerState();
                    this_03 = &param_4->field_432;
                    uVar2 = this_03->HeapBeginPtr();
                    render::OutputMergerState::SetViewports(pVVar4, uVar2);
                    this_00 = (OutputMergerState*)param_1->GetOutputMergerState();
                    pRVar5 = (RenderTargets*)this_02->end();
                    this_00->SetRenderTargets(pRVar5);
                    ImVec4::ImVec4(local_48, 0.0, 0.0, -1.0, 0.0);
                    pRVar7 = param_2;
                    param_2->SetShaders(0);
                    lVar3 = pRVar7->Instance();
                    param_2->SetBlendState((BlendState*)(lVar3 + 1524));
                    pVVar4 = (Viewport*)this_03->HeapBeginPtr();
                    param_2->SetViewports(pVVar4, 1);
                    pRVar5 = (RenderTargets*)this_02->end();
                    param_2->ClearRenderTargets(pRVar5, local_48, 1);
                    pVVar4 = (Viewport*)eastl::vector<
                        render::Viewport, eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<render::Viewport,
                                eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>*)this_03,
                        0);
                    pRVar7 = param_2;
                    param_2->SetScissorRectangle(false, pVVar4);
                    lVar3 = pRVar7->Instance();
                    param_2->SetDepthStencilState((DepthStencilState*)(lVar3 + 720));
                    pRVar5 = (RenderTargets*)this_02->end();
                    this_01 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                        (shared_ptr<render::RenderTargets>*)this_02);
                    pTVar6 = (Texture*)this_01->GetDepthStencilTargetTexture();
                    uVar2 = render::GetDepthTextureClearFlags(pTVar6);
                    param_2->ClearDepthStencilTarget(pRVar5, 1.0, 0, uVar2);
                }
                return local_31;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("m_GBuffer.get() != nullptr && !viewData.m_renderTargetViewports.empty()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/renderer/"
                  "renderpasses/GeometryPass.cpp",
                  35, (char*)0);
    }

    // 0x1007a80a0, 112 bytes, placed by class name and debug map
    // GeometryPass::EndPass(render::DrawCallState&, render::RenderContext&, EffectManager&, DrawableQueue const&)
    void GeometryPass::EndPass(DrawCallState* param_1, RenderContext* param_2, EffectManager* param_3,
                               DrawableQueue* param_4) {
        long lVar1;

        lVar1 = field_800->end();
        if (lVar1 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_GBuffer.get() != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/renderpasses/GeometryPass.cpp",
                      63, (char*)0);
        }
        ~AutoSingleton(param_1, param_2, param_3, param_4);
    }

    // 0x1007a8110, 768 bytes, placed by class name and debug map
    // GeometryPass::Render(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&, DrawableQueue&)
    void GeometryPass::Render(RT7Core* param_1, DrawCallState* param_2, EffectManager* param_3, SceneViewData* param_4,
                              DrawableQueue* param_5) {
        char cVar1;
        undefined4 uVar2;
        long lVar3;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_00;
        RenderPipelineState* this_01;
        Layout* this_02;
        Texture* pTVar4;
        DrawCallState* pDVar5;
        undefined1 auVar6[16];
        SceneViewData* pSVar7;
        undefined4 uVar9;
        ulong uVar8;
        DrawCallState local_d0;
        GeometryPass* local_a0;
        undefined8* puStack_98;
        SceneViewData* local_90;
        undefined8 local_88;
        undefined4 local_7c;
        EffectManager* local_78;
        DrawableQueue* local_70;
        function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_78 = param_3;
        local_70 = param_5;
        lVar3 = field_800->end();
        if (lVar3 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_GBuffer.get() != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/renderpasses/GeometryPass.cpp",
                      77, (char*)0);
        }
        cVar1 = GetCPUOcclusionEnabled(param_4);
        if (cVar1 != '\0') {
            (field_16, param_1, 4, param_4, local_70)->RasterizeToDepthBuffer();
        }
        pDVar5 = &local_d0;
        render::DrawCallState::DrawCallState(pDVar5, param_2);
        this_00 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                      pDVar5->GetRenderPipelineState();
        auVar6 = pDVar5->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            this_00, (EntityHighlight**)(auVar6._0_8_ + 1524), auVar6._8_8_);
        pDVar5 = &local_d0;
        this_01 = (RenderPipelineState*)pDVar5->GetRenderPipelineState();
        lVar3 = pDVar5->Instance();
        this_01->SetRasteriserState((RasteriserState*)(lVar3 + 1200));
        pDVar5 = &local_d0;
        this_02 = (Layout*)pDVar5->GetRenderPipelineState();
        lVar3 = pDVar5->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(this_02, lVar3 + 720);
        local_88 = GetOcclusionSceneViewData();
        puStack_98 = &local_88;
        pSVar7 = param_4;
        local_a0 = this;
        local_90 = param_4;
        std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>::function<
            GeometryPass::Render(RT7Core&, render::DrawCallState_const&, EffectManager&, SceneViewData_const&,
                                 DrawableQueue&)::__1,
            void>(local_68);
        uVar9 = (undefined4)((ulong)pSVar7 >> 32);
        cVar1 = GetOcclusionEnabled(param_4);
        if (cVar1 != '\0') {
            cVar1 = field_16->DepthBufferCanOcclude();
            if (cVar1 != '\0') {
                uVar2 = IsViewChangeValidForOcclusion(param_4);
                goto LAB_1007a8294;
            }
        }
        uVar2 = 0;
    LAB_1007a8294:
        uVar8 = CONCAT44(uVar9, uVar2) & 18446744069414584575;
        local_7c = uVar2;
        RenderOccludedDrawableGroup(param_1, &local_d0, local_78, param_4, local_70, 0, 4, uVar8, local_68);
        RenderOccludedDrawableGroup(param_1, &local_d0, local_78, param_4, local_70, 1, 4,
                                    CONCAT44((int)(uVar8 >> 32), uVar2) & 18446744069414584575, local_68);
        pTVar4 = (Texture*)param_1->GetForwardDepthTexture();
        DownsampleGPUDepthBuffer(param_1, local_78, param_4, local_70, pTVar4, false);
        if ((char)local_7c != '\0') {
            if (RenderPass::m_useAsyncRasterisation == '\0') {
                local_70->Filter(3, 4, local_68);
                local_70->Filter(2, 4, local_68);
            } else {
                local_70->FilterAsync(3, 4, local_68);
                local_70->FilterAsync(2, 4, local_68);
            }
        }
        std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>::~function(
            local_68);
        local_d0.~DrawCallState();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007a8570, 560 bytes, placed by class name and debug map
    // GeometryPass::RenderDebug(EffectManager&, DrawableQueue&)
    void GeometryPass::RenderDebug(EffectManager* param_1, DrawableQueue* param_2) {
        bool bVar1;
        char cVar2;
        undefined4 uVar3;
        long* plVar4;
        RenderTargets* pRVar5;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_00;
        undefined8* puVar6;
        undefined8 uVar7;
        int iVar8;
        ImVec4 local_60[16];
        Point<float> local_50[8];
        undefined1 local_48[16];
        Point<float> local_38[8];

        iVar8 = 0;
        do {
            uVar3 = GetPos();
            param_2->RenderDebug(iVar8, uVar3);
            iVar8 = iVar8 + 1;
        } while (iVar8 != 13);
        if (m_showGBuffer != '\0') {
            bVar1 = field_800->operator_cast_to_bool();
            if (bVar1) {
                plVar4 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar4 != (long*)0) {
                    pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                        (shared_ptr<render::RenderTargets>*)field_800);
                    this_00 = (vector<render::Texture*,
                                      eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                  pRVar5->GetColourTargetTextures();
                    puVar6 = (undefined8*)eastl::vector<
                        render::Texture*,
                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_00,
                                                                                                               0);
                    uVar7 = *puVar6;
                    ImVec4::ImVec4(local_60, 0.0, 0.0, 0.5, 0.5);
                    math::Point<float>::Point(local_38, 0.0, 0.0);
                    math::Point<float>::Point(local_50, 1.0, 1.0);
                    new (local_48) oldscape::sidebars::SideBarData(-1, 0);
                    (**(code**)(*plVar4 + 112))(plVar4, uVar7, local_60, local_38, local_50, 0, 0, 0,
                                                (SideBarData*)local_48);
                }
            }
        }
        if (m_showGBufferDepth != '\0') {
            bVar1 = field_800->operator_cast_to_bool();
            if (bVar1) {
                plVar4 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar4 != (long*)0) {
                    pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                        (shared_ptr<render::RenderTargets>*)field_800);
                    uVar7 = pRVar5->GetDepthStencilTargetTexture();
                    ImVec4::ImVec4(local_60, 0.0, 0.5, 0.5, 0.5);
                    math::Point<float>::Point(local_38, 0.0, 0.0);
                    math::Point<float>::Point(local_50, 1.0, 1.0);
                    new ((local_48 + 8)) math::ColourStorage8888<math::ARGB8StorageLayout>(255, 255, 255, 255);
                    iVar8 = ((local_48 + 8))->GetX();
                    new (local_48) oldscape::sidebars::SideBarData(iVar8, 0);
                    (**(code**)(*plVar4 + 112))(plVar4, uVar7, local_60, local_38, local_50, 0, 1, 0,
                                                (SideBarData*)local_48);
                }
            }
        }
        cVar2 = GetOcclusionTestEnabled();
        if (cVar2 != '\0') {
            field_16->RenderDebug();
        }
    }

    // 0x1007a87a0, 64 bytes, placed by class name and debug map
    // GeometryPass::RegisterTweakVarsOcclusion(tweak::Container&)
    void GeometryPass::RegisterTweakVarsOcclusion(Container* param_1) {
        param_1->AddCheckBox("Enable On Geometry Pass", &field_776);
        param_1->AddCheckBox("Show Geometry Pass Depth Buffer", (bool*)(field_16 + 8));
    }

} // namespace jag::graphics
