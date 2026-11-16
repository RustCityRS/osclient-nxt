// libs/graphics/runetek7/renderer/renderpasses/ObjectHighlightPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ObjectHighlightPass.h"

namespace jag::graphics {
    // 0x100f43797, 1 bytes, __data
    ObjectHighlightPass::m_enableOccludedOutlines = 1;

    // 0x1039bd14d, 1 bytes, __common; zero-initialised
    ObjectHighlightPass::m_showBuffer;

    // 0x1007a87e0, 592 bytes, base-object constructor, placed by class name and debug map
    // ObjectHighlightPass::ObjectHighlightPass(render::RenderTargetsManager*, ThreadPool*)
    void ObjectHighlightPass::ObjectHighlightPass(RenderTargetsManager* param_1, ThreadPool* param_2) {
        long lVar1;
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>* psVar3;

        new (this) SceneRenderPass(8, param_1, param_2);
        field_0 = &PTR__ObjectHighlightPass_100f142b0;
        m_enabled = true;
        m_blurSubPassEnabled = true;
        field_798 = 1;
        m_silhouetteDepthBias = 0.0;
        field_804 = 0.0;
        m_silhouetteCoverPassEnabled = true;
        new (&field_812) render::RasteriserState();
        new (field_848, (_func_decltype_nullptr*)8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_864, (_func_decltype_nullptr*)8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        psVar3 = (shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>*)field_880;
        lVar1 = 0;
        do {
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(psVar3,
                                                                                     (_func_decltype_nullptr*)8);
            lVar1 = lVar1 + -16;
            psVar3 = psVar3 + 16;
        } while (lVar1 != -32);
        new (field_912, (_func_decltype_nullptr*)8) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_928) graphicutils::RenderToTextureHelper();
        psVar3 = (shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>*)(field_928 + 440);
        lVar1 = 0;
        do {
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(psVar3,
                                                                                     (_func_decltype_nullptr*)8);
            lVar1 = lVar1 + -16;
            psVar3 = psVar3 + 16;
        } while (lVar1 != -32);
        new ((field_928 + 472), (_func_decltype_nullptr*)8)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        (*(code*)field_0[10])(this);
        field_776 = true;
    }

    // 0x1007a8a30, 16 bytes, complete-object constructor, placed by class name and debug map
    // ObjectHighlightPass::ObjectHighlightPass(render::RenderTargetsManager*, ThreadPool*): jumps straight to the base-object constructor

    // 0x1007a8a40, 304 bytes, base-object destructor, placed by class name and debug map
    // ObjectHighlightPass::~ObjectHighlightPass()
    void ObjectHighlightPass::~ObjectHighlightPass() {
        long lVar1;

        field_0 = &PTR__ObjectHighlightPass_100f142b0;
        DestroyRenderingResources(this);
        ((field_928 + 472))->~shared_ptr();
        lVar1 = 0;
        do {
            ((field_928 + lVar1 + 456))->~shared_ptr();
            lVar1 = lVar1 + -16;
        } while (lVar1 != -32);
        field_928->~RenderToTextureHelper();
        field_912->~shared_ptr();
        lVar1 = 0;
        do {
            ((field_896 + lVar1))->~shared_ptr();
            lVar1 = lVar1 + -16;
        } while (lVar1 != -32);
        field_864->~shared_ptr();
        field_848->~shared_ptr();
        (&field_812)->~RasteriserState();
        ~SceneRenderPass();
    }

    // 0x1007a8b70, 16 bytes, complete-object destructor, placed by class name and debug map
    // ObjectHighlightPass::~ObjectHighlightPass(): jumps straight to the base-object destructor

    // 0x1007a8b80, 32 bytes, deleting destructor, placed by class name and debug map
    // ObjectHighlightPass::~ObjectHighlightPass()
    void ObjectHighlightPass::~ObjectHighlightPass() {
        ~ObjectHighlightPass(this);
        operator_delete(this);
    }

    // 0x1007a8ba0, 384 bytes, placed by class name and debug map
    // ObjectHighlightPass::BeginPass(render::DrawCallState&, render::RenderContext&, EffectManager&, SceneViewData const&, DrawableQueue const&)
    ulong ObjectHighlightPass::BeginPass(DrawCallState* param_1, RenderContext* param_2, EffectManager* param_3,
                                         SceneViewData* param_4, DrawableQueue* param_5) {
        char cVar1;
        uint uVar2;
        Viewport* pVVar3;
        OutputMergerState* this_00;
        RenderTargets* pRVar4;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_01;
        RenderPipelineState* this_02;
        long lVar5;
        RenderTargets* pRVar6;
        undefined1* this_03;
        DrawCallState* pDVar7;
        ulong uVar8;
        undefined1 auVar9[16];
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_58[16];
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_48[16];
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_38;

        if (m_enabled != false) {
            cVar1 = HasValidRenderTargets(this);
            if (cVar1 != '\0') {
                this_03 = &param_4->field_432;
                cVar1 = this_03->empty();
                if (cVar1 == '\0') {
                    pVVar3 = (Viewport*)param_1->GetOutputMergerState();
                    uVar2 = this_03->HeapBeginPtr();
                    render::OutputMergerState::SetViewports(pVVar3, uVar2);
                    this_00 = (OutputMergerState*)param_1->GetOutputMergerState();
                    local_38 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_880;
                    pRVar4 =
                        (RenderTargets*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                            local_38);
                    this_00->SetRenderTargets(pRVar4);
                    pVVar3 = (Viewport*)param_1->GetOutputMergerState();
                    uVar2 = this_03->HeapBeginPtr();
                    render::OutputMergerState::SetViewports(pVVar3, uVar2);
                    pDVar7 = param_1;
                    this_01 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                                  param_1->GetRenderPipelineState();
                    auVar9 = pDVar7->Instance();
                    eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL,
                                               2>::compressed_pair_imp(this_01,
                                                                       (EntityHighlight**)(auVar9._0_8_ + 1524),
                                                                       auVar9._8_8_);
                    pDVar7 = param_1;
                    this_02 = (RenderPipelineState*)param_1->GetRenderPipelineState();
                    lVar5 = pDVar7->Instance();
                    this_02->SetRasteriserState((RasteriserState*)(lVar5 + 1488));
                    cVar1 = NeedsResolve(this);
                    uVar8 = CONCAT71((int7)((ulong)param_1 >> 8), 1);
                    if (cVar1 != '\0') {
                        pRVar4 = (RenderTargets*)field_864->end();
                        param_2->SetRenderTargets(pRVar4);
                        pRVar6 = (RenderTargets*)
                            eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_38);
                        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(
                            local_58, (_func_decltype_nullptr*)pRVar4);
                        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>::shared_ptr(
                            local_48, (_func_decltype_nullptr*)pRVar4);
                        param_2->ResolveColourTargetData(pRVar6, 256, local_58, local_48);
                        pRVar4 = (RenderTargets*)param_2->GetBackBuffer();
                        param_2->SetRenderTargets(pRVar4);
                    }
                    goto LAB_1007a8be5;
                }
            }
        }
        uVar8 = 0;
    LAB_1007a8be5:
        return uVar8 & 4294967295;
    }

    // 0x1007a8d20, 64 bytes, placed by class name and debug map
    // ObjectHighlightPass::HasValidRenderTargets() const
    bool ObjectHighlightPass::HasValidRenderTargets() {
        bool bVar1;

        bVar1 = field_880->operator_cast_to_bool();
        if (bVar1) {
            bVar1 = field_896->operator_cast_to_bool();
        } else {
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x1007a8da0, 256 bytes, placed by class name and debug map
    // ObjectHighlightPass::Render(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&, DrawableQueue&)
    void ObjectHighlightPass::Render(RT7Core* param_1, DrawCallState* param_2, EffectManager* param_3,
                                     SceneViewData* param_4, DrawableQueue* param_5) {
        char cVar1;
        undefined1 uVar2;
        NXTPixToolkit* this_00;
        OcclusionManager* pOVar3;
        SceneRenderPass* this_01;

        if (m_enabled == false) {
        LAB_1007a8ddb:
            /* WARNING: Subroutine does not return */
            LogAssert("m_enabled && HasValidRenderTargets()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/renderpasses/ObjectHighlightPass.cpp",
                      88, (char*)0);
        }
        cVar1 = HasValidRenderTargets(this);
        if (cVar1 == '\0')
            goto LAB_1007a8ddb;
        this_00 = (NXTPixToolkit*)param_1->GetForwardOcclusionRenderPass();
        pOVar3 = (OcclusionManager*)this_00->GetScreen();
        if (m_enableOccludedOutlines != '\0') {
            cVar1 = GetOcclusionEnabledIgnoringLocalBuffer(param_4);
            if (cVar1 != '\0') {
                this_01 = (SceneRenderPass*)param_1->GetForwardOcclusionRenderPass();
                uVar2 = this_01->IsViewChangeValidForOcclusion(param_4);
                goto LAB_1007a8e3c;
            }
        }
        uVar2 = false;
    LAB_1007a8e3c:
        RenderOutlines(this, param_1, param_2, param_3, param_4, param_5, pOVar3, (bool)uVar2);
        RenderSilhouettes(this, param_1, param_2, param_3, param_4, param_5, pOVar3, (bool)uVar2);
    }

    // 0x1007a8f10, 448 bytes, placed by class name and debug map
    // ObjectHighlightPass::RenderOutlines(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&, DrawableQueue&, OcclusionManager&, bool)
    void ObjectHighlightPass::RenderOutlines(RT7Core* param_1, DrawCallState* param_2, EffectManager* param_3,
                                             SceneViewData* param_4, DrawableQueue* param_5, OcclusionManager* param_6,
                                             bool param_7) {
        undefined4 uVar2;
        RT7Core* this_00;
        long lVar3;
        RenderContext* this_01;
        RenderTargets* pRVar4;
        NXTPixToolkit* this_02;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_03;
        OutputMergerState* this_04;
        Layout* this_05;
        ulong uVar5;
        DrawCallState local_78;

        if (field_798 != '\0') {
            new (&local_78) ImVec4(0.0, 0.0, 0.0, 0.0);
            this_00 = (RT7Core*)local_78.GetRenderContext();
            lVar3 = ((RT7Core*)&local_78)->Instance();
            this_00->SetBlendState((BlendState*)(lVar3 + 1524));
            this_01 = (RenderContext*)this_00->GetRenderContext();
            pRVar4 = (RenderTargets*)field_880->end();
            this_01->ClearRenderTargets(pRVar4, (Vector4T*)&local_78, 1);
            field_798 = 0;
        }
        uVar2 = GetPos();
        this_02 = (NXTPixToolkit*)param_5->GetDrawableGroup(uVar2, 10);
        this_03 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                      this_02->GetScreen();
        if (eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                this_03) == '\0') {
            field_798 = 1;
            new (&local_78) render::DrawCallState(param_2);
            this_04 = (OutputMergerState*)local_78.GetOutputMergerState();
            pRVar4 = (RenderTargets*)field_880->end();
            this_04->SetRenderTargets(pRVar4);
            if (m_enableOccludedOutlines == '\0') {
                lVar3 = this_04->Instance();
                uVar5 = lVar3 + 1080;
            } else {
                lVar3 = this_04->Instance();
                uVar5 = lVar3 + 1140;
            }
            this_05 = (Layout*)local_78.GetRenderPipelineState();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                Layout::SetHeapSize(this_05, uVar5);
            1065353216->RenderOccludedDrawableGroup(this, param_1, &local_78, param_3, param_4, param_5, 10, param_7,
                                                    param_6);
            if (m_blurSubPassEnabled != false) {
                PerformBlur((RT7Core*)this);
            }
            local_78.~DrawCallState();
        }
    }

    // 0x1007a90d0, 672 bytes, placed by class name and debug map
    // ObjectHighlightPass::RenderSilhouettes(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&, DrawableQueue&, OcclusionManager&, bool)
    void ObjectHighlightPass::RenderSilhouettes(RT7Core* param_1, DrawCallState* param_2, EffectManager* param_3,
                                                SceneViewData* param_4, DrawableQueue* param_5,
                                                OcclusionManager* param_6, bool param_7) {
        bool bVar1;
        RT7Core* this_00;
        long lVar2;
        RenderContext* this_01;
        RenderTargets* pRVar3;
        OutputMergerState* this_02;
        Layout* pLVar4;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_03;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_04;
        undefined8* puVar5;
        RenderPipelineState* this_05;
        RT7Core* this_06;
        DrawCallState* pDVar6;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_07;
        undefined1 local_b8[16];
        undefined** local_a8;
        float fStack_a0;
        float fStack_9c;
        float fStack_98;
        undefined8 uStack_94;
        DrawCallState local_80;
        DrawableQueue* local_50;
        SceneViewData* local_48;
        EffectManager* local_40;
        RT7Core* local_38;

        local_50 = param_5;
        local_48 = param_4;
        local_40 = param_3;
        local_38 = param_1;
        bVar1 = field_912->operator_cast_to_bool();
        this_07 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_896;
        if (bVar1) {
            this_07 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)field_912;
        }
        this_06 = (RT7Core*)local_b8;
        new (local_b8) ImVec4(0.0, 0.0, 0.0, 0.0);
        this_00 = (RT7Core*)this_06->GetRenderContext();
        lVar2 = this_06->Instance();
        this_00->SetBlendState((BlendState*)(lVar2 + 1524));
        this_01 = (RenderContext*)this_00->GetRenderContext();
        pRVar3 = (RenderTargets*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_07);
        this_01->ClearRenderTargets(pRVar3, local_b8, 1);
        new (&local_80) render::DrawCallState(param_2);
        this_02 = (OutputMergerState*)local_80.GetOutputMergerState();
        pRVar3 = (RenderTargets*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_07);
        this_02->SetRenderTargets(pRVar3);
        if (m_silhouetteCoverPassEnabled == false) {
            pDVar6 = &local_80;
            pLVar4 = (Layout*)pDVar6->GetRenderPipelineState();
            lVar2 = pDVar6->Instance();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                Layout::SetHeapSize(pLVar4, lVar2 + 960);
            this_03 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                             std::default_delete<LoadingScreenScript::AnimLayer>>,
                             eastl::allocator>*)local_80.GetRenderPipelineState();
            this_04 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>*)this_03->data();
            puVar5 = (undefined8*)
                eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>::second(this_04);
            local_a8 = (undefined**)*puVar5;
            uStack_94 = *(undefined8*)((long)puVar5 + 20);
            fStack_98 = (float)((ulong) * (undefined8*)((long)puVar5 + 12) >> 32);
            fStack_9c = field_804;
            fStack_a0 = m_silhouetteDepthBias;
            (&field_812, (Desc*)&local_a8)->Create();
            this_05 = (RenderPipelineState*)local_80.GetRenderPipelineState();
            this_05->SetRasteriserState((RasteriserState*)&field_812);
            1065353216->RenderOccludedDrawableGroup(this, local_38, &local_80, local_40, local_48, local_50, 11,
                                                    param_7, param_6);
        } else {
            pDVar6 = &local_80;
            pLVar4 = (Layout*)pDVar6->GetRenderPipelineState();
            lVar2 = pDVar6->Instance();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                Layout::SetHeapSize(pLVar4, lVar2 + 1080);
            1065353216->RenderOccludedDrawableGroup(this, local_38, &local_80, local_40, local_48, local_50, 11,
                                                    param_7, param_6);
            pDVar6 = &local_80;
            pLVar4 = (Layout*)pDVar6->GetRenderPipelineState();
            lVar2 = pDVar6->Instance();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                Layout::SetHeapSize(pLVar4, lVar2 + 960);
            1065353216->RenderOccludedDrawableGroup(this, local_38, &local_80, local_40, local_48, local_50, 12,
                                                    param_7, param_6);
        }
        local_80.~DrawCallState();
    }

    // 0x1007a9370, 496 bytes, placed by class name and debug map
    // ObjectHighlightPass::RenderDebug(EffectManager&, DrawableQueue&)
    void ObjectHighlightPass::RenderDebug(EffectManager* param_1, DrawableQueue* param_2) {
        undefined8 uVar1;
        char cVar2;
        undefined4 uVar3;
        long* plVar4;
        RenderTargets* pRVar5;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar6;
        undefined8* puVar7;
        int iVar8;
        ImVec4 local_58[16];
        Point<float> local_48[8];
        undefined1 local_40[16];

        iVar8 = 0;
        do {
            uVar3 = GetPos();
            param_2->RenderDebug(iVar8, uVar3);
            iVar8 = iVar8 + 1;
        } while (iVar8 != 13);
        if (m_showBuffer != '\0') {
            cVar2 = HasValidRenderTargets(this);
            if (cVar2 != '\0') {
                plVar4 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar4 != (long*)0) {
                    pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                        (shared_ptr<render::RenderTargets>*)field_880);
                    pvVar6 = (vector<render::Texture*,
                                     eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                 pRVar5->GetColourTargetTextures();
                    puVar7 = (undefined8*)eastl::vector<
                        render::Texture*,
                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar6,
                                                                                                               0);
                    uVar1 = *puVar7;
                    ImVec4::ImVec4(local_58, 0.0, 0.0, 0.5, 0.5);
                    new ((local_40 + 8)) math::Point<float>(0.0, 0.0);
                    math::Point<float>::Point(local_48, 1.0, 1.0);
                    new (local_40) oldscape::sidebars::SideBarData(-1, 0);
                    (**(code**)(*plVar4 + 112))(plVar4, uVar1, local_58, local_40 + 8, local_48, 0, 0, 0,
                                                (SideBarData*)local_40);
                }
                plVar4 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar4 != (long*)0) {
                    pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                        (shared_ptr<render::RenderTargets>*)field_896);
                    pvVar6 = (vector<render::Texture*,
                                     eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                 pRVar5->GetColourTargetTextures();
                    puVar7 = (undefined8*)eastl::vector<
                        render::Texture*,
                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar6,
                                                                                                               0);
                    uVar1 = *puVar7;
                    ImVec4::ImVec4(local_58, 0.0, 0.5, 0.5, 1.0);
                    new ((local_40 + 8)) math::Point<float>(0.0, 0.0);
                    math::Point<float>::Point(local_48, 1.0, 1.0);
                    new (local_40) oldscape::sidebars::SideBarData(-1, 0);
                    (**(code**)(*plVar4 + 112))(plVar4, uVar1, local_58, local_40 + 8, local_48, 0, 0, 0,
                                                (SideBarData*)local_40);
                }
            }
        }
        cVar2 = GetOcclusionTestEnabled();
        if (cVar2 != '\0') {
            field_16->RenderDebug();
        }
    }

    // 0x1007a9560, 384 bytes, placed by class name and debug map
    // ObjectHighlightPass::CompositeToScreen(RT7Core&, render::RenderTargets const*, render::Viewport const&)
    void ObjectHighlightPass::CompositeToScreen(RT7Core* param_1, RenderTargets* param_2, Viewport* param_3) {
        undefined1* puVar1;
        char cVar2;
        bool bVar3;
        Layout* this_00;
        long lVar4;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_01;
        RenderContext* pRVar5;
        RenderTargets* pRVar6;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar7;
        undefined8* puVar8;
        DrawCallState* pDVar9;
        RT7Core* pRVar10;
        shared_ptr<render::RenderTargets>* this_02;
        undefined1 auVar11[16];
        DrawCallState local_70;
        RenderTargets* local_40;
        Viewport* local_38;

        if (m_enabled != false) {
            cVar2 = HasValidRenderTargets(this);
            if (cVar2 != '\0') {
                pDVar9 = &local_70;
                local_40 = param_2;
                local_38 = param_3;
                render::DrawCallState::DrawCallState(pDVar9);
                this_00 = (Layout*)pDVar9->GetRenderPipelineState();
                lVar4 = pDVar9->Instance();
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::SetHeapSize(this_00, lVar4 + 1080);
                pDVar9 = &local_70;
                this_01 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                              pDVar9->GetRenderPipelineState();
                auVar11 = pDVar9->Instance();
                eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL,
                                           2>::compressed_pair_imp(this_01, (EntityHighlight**)(auVar11._0_8_ + 1676),
                                                                   auVar11._8_8_);
                puVar1 = field_912;
                pRVar10 = (RT7Core*)puVar1;
                bVar3 = puVar1->operator_cast_to_bool();
                pRVar5 = (RenderContext*)pRVar10->GetRenderContext();
                this_02 = (shared_ptr<render::RenderTargets>*)field_896;
                if (bVar3) {
                    this_02 = (shared_ptr<render::RenderTargets>*)puVar1;
                }
                pRVar6 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(this_02);
                pvVar7 = (vector<render::Texture*,
                                 eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                             pRVar6->GetColourTargetTextures();
                puVar8 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar7, 0);
                puVar1 = field_928;
                pRVar10 = (RT7Core*)puVar1;
                puVar1->RenderTextureToQuad(pRVar5, &local_70, local_40, (Texture*)*puVar8, 0, local_38, -1);
                pRVar5 = (RenderContext*)pRVar10->GetRenderContext();
                pRVar6 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)field_880);
                pvVar7 = (vector<render::Texture*,
                                 eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                             pRVar6->GetColourTargetTextures();
                puVar8 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar7, 0);
                puVar1->RenderTextureToQuad(pRVar5, &local_70, local_40, (Texture*)*puVar8, 0, local_38, -1);
                local_70.~DrawCallState();
            }
        }
    }

    // 0x1007a96e0, 208 bytes, placed by class name and debug map
    // ObjectHighlightPass::ClearRenderTargets(RT7Core&)
    void ObjectHighlightPass::ClearRenderTargets(RT7Core* param_1) {
        RenderTargets* pRVar1;
        RenderContext* this;
        long lVar4;
        RT7Core* pRVar5;
        RT7Core* this_00;
        Vector4T local_48[24];

        if (HasValidRenderTargets((ObjectHighlightPass*)param_1) != '\0') {
            UnbindDepthTargets((ObjectHighlightPass*)param_1);
            pRVar5 = (RT7Core*)local_48;
            new (local_48) ImVec4(0.0, 0.0, 0.0, 0.0);
            lVar4 = 0;
            do {
                pRVar5 = (RT7Core*)pRVar5->GetRenderContext();
                pRVar1 = (RenderTargets*)((param_1->field_448 + lVar4 + 432))->end();
                pRVar5->ClearRenderTargets(pRVar1, local_48, 1);
                lVar4 = lVar4 + 16;
            } while (lVar4 != 32);
            this_00 = (RT7Core*)(param_1->field_448 + 464);
            pRVar5 = this_00;
            if (this_00->operator_cast_to_bool()) {
                this = (RenderContext*)pRVar5->GetRenderContext();
                pRVar1 = (RenderTargets*)this_00->end();
                ClearRenderTargets(pRVar1, local_48, 1);
            }
        }
    }

    // 0x1007a97b0, 96 bytes, placed by class name and debug map
    // ObjectHighlightPass::UnbindDepthTargets()
    void ObjectHighlightPass::UnbindDepthTargets() {
        RenderTargets* pRVar1;

        pRVar1 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
            (shared_ptr<render::RenderTargets>*)field_864);
        pRVar1->UnbindDepthStencilTargetTexture();
        pRVar1 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
            (shared_ptr<render::RenderTargets>*)field_896);
        pRVar1->UnbindDepthStencilTargetTexture();
        if (field_912->operator_cast_to_bool()) {
            pRVar1 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)field_912);
            pRVar1->UnbindDepthStencilTargetTexture();
        }
    }

    // 0x1007a9810, 64 bytes, placed by class name and debug map
    // ObjectHighlightPass::RegisterTweakVarsOcclusion(tweak::Container&)
    void ObjectHighlightPass::RegisterTweakVarsOcclusion(Container* param_1) {
        param_1->AddCheckBox("Enable On Object Highlight Pass", &field_776);
        param_1->AddCheckBox("Show Object Highlight Pass Occlusion Depth Buffer", (bool*)(field_16 + 8));
    }

    // 0x1007a9850, 256 bytes, placed by class name and debug map
    // ObjectHighlightPass::PreparePass(RT7Core&, EffectManager&, SceneViewData const&, DrawableQueue&)
    void ObjectHighlightPass::PreparePass(RT7Core* param_1, EffectManager* param_2, SceneViewData* param_3,
                                          DrawableQueue* param_4) {
        bool bVar1;
        char cVar2;
        RenderTargets* this_00;
        Texture* pTVar3;
        undefined8 uVar4;
        EffectManager* extraout_RDX;

        bVar1 = field_848->operator_cast_to_bool();
        if (!bVar1) {
            m_enabled = false;
        }
        if (m_enabled != false) {
            this_00 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)field_848);
            pTVar3 = (Texture*)this_00->GetDepthStencilTargetTexture();
            cVar2 = EnsureRenderTargets(this, pTVar3);
            if (cVar2 != '\0') {
                PreparePass(param_1, extraout_RDX, param_3, param_4);
                bVar1 = m_blurSubPassEnabled;
                cVar2 = HasBlurRenderTargets(this);
                if (bVar1 == false) {
                    if (cVar2 == '\0') {
                        return;
                    }
                    DestroyBlurRenderTargets(this);
                    return;
                }
                if (cVar2 != '\0') {
                    return;
                }
                cVar2 = InitBlurRenderTargets(this);
                if (cVar2 == '\0') {
                    uVar4 = logger::default_logger();
                    logger::Logger::Log(uVar4, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/renderer/renderpasses/ObjectHighlightPass.cpp",
                                        210, "Could not initialise blur render targets - disabling blur");
                    m_blurSubPassEnabled = false;
                    return;
                }
                return;
            }
        }
        DestroyRenderTargets(this);
        m_enabled = false;
    }

    // 0x1007a9950, 2080 bytes, placed by class name and debug map
    // ObjectHighlightPass::EnsureRenderTargets(render::Texture*)
    ulong ObjectHighlightPass::EnsureRenderTargets(Texture* param_1) {
        bool bVar1;
        char cVar2;
        uint uVar3;
        int* piVar4;
        RenderTargets* pRVar5;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar6;
        long* plVar7;
        undefined8* puVar8;
        int* piVar9;
        undefined8 uVar10;
        undefined8 unaff_RBX;
        undefined1* this_00;
        undefined8 uVar11;
        char* pcVar12;
        shared_ptr* this_01;
        array<render::Texture::Desc, 2ul> local_118[128];
        Desc local_98;
        shared_ptr* local_50;
        Texture* local_48;
        shared_ptr local_40;

        if (param_1 == (Texture*)0) {
            uVar10 = logger::default_logger();
            pcVar12 = "Could not initialise render targets for the object highlight pass - No depth source provided.";
            uVar11 = 241;
        } else {
            piVar4 = (int*)param_1->second();
            uVar3 = piVar4[4];
            local_50 = (shared_ptr*)field_880;
            bVar1 = shared_ptr::operator_cast_to_bool(local_50);
            if (bVar1) {
                pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)local_50);
                pvVar6 = (vector<render::Texture*,
                                 eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                             pRVar5->GetColourTargetTextures();
                plVar7 = (long*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar6, 0);
                if (*plVar7 != 0) {
                    this_00 = (undefined1*)CONCAT71((int7)((ulong)unaff_RBX >> 8), 1 < uVar3);
                    cVar2 = NeedsResolve(this);
                    if ((bool)cVar2 == 1 < uVar3) {
                        local_48 = param_1;
                        bVar1 = field_864->operator_cast_to_bool();
                        if (!bVar1) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("m_resolveRT",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/renderer/renderpasses/ObjectHighlightPass.cpp",
                                      252, (char*)0);
                        }
                        pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                            (shared_ptr<render::RenderTargets>*)local_50);
                        pvVar6 = (vector<render::Texture*,
                                         eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                     pRVar5->GetColourTargetTextures();
                        puVar8 = (undefined8*)eastl::vector<
                            render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](pvVar6, 0);
                        piVar9 = (int*)(*puVar8)->second();
                        bVar1 = true;
                        if ((*piVar9 == *piVar4) && (piVar9[1] == piVar4[1])) {
                            cVar2 = CheckMultiSampleCountChanged(this, piVar4[4]);
                            if (cVar2 != '\0') {
                                std::array<render::Texture::Desc, 2ul>::array(local_118);
                                piVar9 = (int*)std::array<render::Texture::Desc, 2ul>::operator[]((ulong)local_118);
                                *piVar9 = *piVar4;
                                piVar9[1] = piVar4[1];
                                piVar9[4] = piVar4[4];
                                piVar9[6] = 0;
                                piVar9[3] = 7;
                                *(undefined1*)(piVar9 + 8) = 0;
                                new (&local_98) render::Texture::Desc();
                                this_00 = field_912;
                                render::RenderTargets::SafeReset((shared_ptr*)this_00);
                                make_shared<render::RenderTargets>((jag*)&local_40);
                                shared_ptr<render::RenderTargets>::operator=(
                                    (shared_ptr<render::RenderTargets>*)this_00, &local_40);
                                local_40.~shared_ptr();
                                pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                                    (shared_ptr<render::RenderTargets>*)this_00);
                                cVar2 = pRVar5->Create("ObjectHighlight_MSAASilhouetteRT", 3553, local_118, 1,
                                                       &local_98, 0);
                                if (cVar2 == '\0') {
                                    DestroyRenderTargets(this);
                                    uVar10 = logger::default_logger();
                                    bVar1 = false;
                                    logger::Logger::Log(
                                        uVar10, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/renderer/renderpasses/ObjectHighlightPass.cpp",
                                        276,
                                        "Could not initialise MSAA silhouette render target (size=%u x %u samples=%u)",
                                        *piVar4, piVar4[1], piVar4[4]);
                                    this_00 = (undefined1*)0;
                                    goto LAB_1007a9b4d;
                                }
                            }
                            RebindDepthRenderTargets(this, local_48);
                            this_00 = (undefined1*)CONCAT71((int7)((ulong)this_00 >> 8), 1);
                            bVar1 = false;
                        }
                    LAB_1007a9b4d:
                        param_1 = local_48;
                        if (!bVar1)
                            goto LAB_1007aa0dc;
                    }
                }
            }
            DestroyRenderTargets(this);
            field_798 = 1;
            std::array<render::Texture::Desc, 2ul>::array(local_118);
            piVar9 = (int*)std::array<render::Texture::Desc, 2ul>::operator[]((ulong)local_118);
            *piVar9 = *piVar4;
            piVar9[1] = piVar4[1];
            piVar9[6] = 0;
            piVar9[3] = 7;
            piVar9[4] = 1;
            *(undefined1*)(piVar9 + 8) = 0;
            new (&local_98) render::Texture::Desc();
            local_98.field_0 = 0;
            local_98.field_4 = 0;
            local_98._24_8_ = (ulong)(uint)local_98.field_28 << 32;
            local_98.field_12 = 0;
            local_98.field_16 = 1;
            local_98._32_8_ = local_98._32_8_ & 18446744073709551360;
            if (uVar3 < 2) {
                make_shared<render::RenderTargets>((jag*)&local_40);
                shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)field_896, &local_40);
                local_40.~shared_ptr();
                pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)field_896);
                cVar2 = pRVar5->Create("ObjectHighlight_SilhouetteRT", 3553, local_118, 1, &local_98, 0);
                this_01 = local_50;
                if (cVar2 == '\0') {
                    DestroyRenderTargets(this);
                    uVar10 = logger::default_logger();
                    pcVar12 = "Could not create silhouette target (size=%u x %u samples=%u)";
                    uVar11 = 363;
                } else {
                    make_shared<render::RenderTargets>((jag*)&local_40);
                    shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)this_01,
                                                                 &local_40);
                    local_40.~shared_ptr();
                    pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                        (shared_ptr<render::RenderTargets>*)this_01);
                    cVar2 = pRVar5->Create("ObjectHighlight_OutlineRT", 3553, local_118, 1, &local_98, 0);
                    if (cVar2 == '\0') {
                        DestroyRenderTargets(this);
                        uVar10 = logger::default_logger();
                        pcVar12 = "Could not create outline target (size=%u x %u samples=%u)";
                        uVar11 = 371;
                    } else {
                        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)field_864,
                                                                     this_01);
                    LAB_1007a9edb:
                        bVar1 = field_864->operator_cast_to_bool();
                        if (bVar1) {
                            bVar1 = field_896->operator_cast_to_bool();
                            if (bVar1) {
                                bVar1 = shared_ptr::operator_cast_to_bool(this_01);
                                if (bVar1) {
                                    RebindDepthRenderTargets(this, param_1);
                                    uVar3 = InitBlurRenderTargets(this);
                                    this_00 = (undefined1*)(ulong)uVar3;
                                    goto LAB_1007aa0dc;
                                }
                            }
                        }
                        DestroyRenderTargets(this);
                        uVar10 = logger::default_logger();
                        pcVar12 = "Could not initialise render targets for the object highlight pass (size=%u x %u "
                                  "samples=%u)";
                        uVar11 = 386;
                    }
                }
            } else {
                piVar9[4] = piVar4[4];
                local_48 = param_1;
                make_shared<render::RenderTargets>((jag*)&local_40);
                shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)field_912, &local_40);
                local_40.~shared_ptr();
                pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)field_912);
                cVar2 = pRVar5->Create("ObjectHighlight_MSAASilhouetteRT", 3553, local_118, 1, &local_98, 0);
                if (cVar2 == '\0') {
                    DestroyRenderTargets(this);
                    uVar10 = logger::default_logger();
                    pcVar12 = "Could not initialise MSAA silhouette render target (size=%u x %u samples=%u)";
                    uVar11 = 321;
                } else {
                    piVar9[4] = 1;
                    make_shared<render::RenderTargets>((jag*)&local_40);
                    shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)field_864,
                                                                 &local_40);
                    local_40.~shared_ptr();
                    pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                        (shared_ptr<render::RenderTargets>*)field_864);
                    cVar2 = pRVar5->Create("ObjectHighlight_UnresolvedRT", 3553, local_118, 0, &local_98, 0);
                    param_1 = local_48;
                    if (cVar2 == '\0') {
                        DestroyRenderTargets(this);
                        uVar10 = logger::default_logger();
                        pcVar12 = "Could not create resolve target (size=%u x %u samples=%u)";
                        uVar11 = 332;
                    } else {
                        make_shared<render::RenderTargets>((jag*)&local_40);
                        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)field_896,
                                                                     &local_40);
                        local_40.~shared_ptr();
                        pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                            (shared_ptr<render::RenderTargets>*)field_896);
                        cVar2 = pRVar5->Create("ObjectHighlight_SilhouetteRT", 3553, local_118, 1, &local_98, 0);
                        this_01 = local_50;
                        if (cVar2 == '\0') {
                            DestroyRenderTargets(this);
                            uVar10 = logger::default_logger();
                            pcVar12 = "Could not create silhouette target (size=%u x %u samples=%u)";
                            uVar11 = 341;
                        } else {
                            local_98.field_0 = piVar4[0];
                            local_98.field_4 = piVar4[1];
                            local_98._24_8_ = *(undefined8*)(piVar4 + 6);
                            local_98._32_8_ = *(undefined8*)(piVar4 + 8);
                            local_98._40_8_ = *(undefined8*)(piVar4 + 10);
                            local_98.field_48 = *(undefined8*)(piVar4 + 12);
                            local_98._56_8_ = *(undefined8*)(piVar4 + 14);
                            local_98.field_20 = (int)((ulong) * (undefined8*)(piVar4 + 4) >> 32);
                            local_98.field_8 = (int)*(undefined8*)(piVar4 + 2);
                            local_98.field_12 = (int)((ulong) * (undefined8*)(piVar4 + 2) >> 32);
                            local_98.field_16 = 1;
                            make_shared<render::RenderTargets>((jag*)&local_40);
                            shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)this_01,
                                                                         &local_40);
                            local_40.~shared_ptr();
                            pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                                (shared_ptr<render::RenderTargets>*)this_01);
                            cVar2 = pRVar5->Create("ObjectHighlight_OutlineRT", 3553, local_118, 1, &local_98, 0);
                            if (cVar2 != '\0')
                                goto LAB_1007a9edb;
                            DestroyRenderTargets(this);
                            uVar10 = logger::default_logger();
                            pcVar12 = "Could not create outline target (size=%u x %u samples=%u)";
                            uVar11 = 353;
                        }
                    }
                }
            }
        }
        this_00 = (undefined1*)0;
        logger::Logger::Log(uVar10, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/renderpasses/ObjectHighlightPass.cpp",
                            uVar11, pcVar12);
    LAB_1007aa0dc:
        return (ulong)this_00 & 4294967041;
    }

    // 0x1007aa320, 384 bytes, placed by class name and debug map
    // ObjectHighlightPass::InitBlurRenderTargets()
    ulong ObjectHighlightPass::InitBlurRenderTargets() {
        shared_ptr<render::RenderTargets>* this_00;
        shared_ptr<render::RenderTargets>* this_01;
        char cVar1;
        RenderTargets* pRVar2;
        RenderTargets* pRVar3;
        undefined8 uVar4;
        ulong uVar5;
        shared_ptr local_38;

        cVar1 = HasValidRenderTargets(this);
        if (cVar1 == '\0') {
            uVar5 = 0;
        } else {
            DestroyBlurRenderTargets(this);
            make_shared<render::RenderTargets>((jag*)&local_38);
            this_00 = (shared_ptr<render::RenderTargets>*)(field_928 + 440);
            shared_ptr<render::RenderTargets>::operator=(this_00, &local_38);
            local_38.~shared_ptr();
            make_shared<render::RenderTargets>((jag*)&local_38);
            this_01 = (shared_ptr<render::RenderTargets>*)(field_928 + 456);
            shared_ptr<render::RenderTargets>::operator=(this_01, &local_38);
            local_38.~shared_ptr();
            pRVar2 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(this_00);
            pRVar2->Create("", 0);
            pRVar2 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(this_01);
            pRVar2->Create("", 0);
            pRVar2 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(this_00);
            pRVar3 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)field_880);
            uVar4 = pRVar3->GetColourTargetTextures();
            cVar1 = pRVar2->BindColourTargetTextures(uVar4, 0, 0, 34069);
            if (cVar1 != '\0') {
                pRVar2 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(this_01);
                pRVar3 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)field_896);
                uVar4 = pRVar3->GetColourTargetTextures();
                cVar1 = pRVar2->BindColourTargetTextures(uVar4, 0, 0, 34069);
                uVar5 = CONCAT71((int7)((ulong)pRVar2 >> 8), 1);
                if (cVar1 != '\0')
                    goto LAB_1007aa474;
            }
            DestroyBlurRenderTargets(this);
            uVar4 = logger::default_logger();
            uVar5 = 0;
            logger::Logger::Log(uVar4, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/renderer/renderpasses/ObjectHighlightPass.cpp",
                                517, "Could not create blur render targets for the object highlight pass.");
        }
    LAB_1007aa474:
        return uVar5 & 4294967295;
    }

    // 0x1007aa4a0, 64 bytes, placed by class name and debug map
    // ObjectHighlightPass::DestroyBlurRenderTargets()
    void ObjectHighlightPass::DestroyBlurRenderTargets() {
        long lVar1;

        lVar1 = 0;
        do {
            render::RenderTargets::SafeReset((shared_ptr*)(field_928 + lVar1 + 440));
            lVar1 = lVar1 + 16;
        } while (lVar1 != 32);
    }

    // 0x1007aa4e0, 80 bytes, placed by class name and debug map
    // ObjectHighlightPass::DestroyRenderTargets()
    void ObjectHighlightPass::DestroyRenderTargets() {
        long lVar1;

        DestroyBlurRenderTargets(this);
        render::RenderTargets::SafeReset((shared_ptr*)field_864);
        render::RenderTargets::SafeReset((shared_ptr*)field_912);
        lVar1 = 0;
        do {
            render::RenderTargets::SafeReset((shared_ptr*)(field_880 + lVar1));
            lVar1 = lVar1 + 16;
        } while (lVar1 != 32);
    }

    // 0x1007aa530, 96 bytes, placed by class name and debug map
    // ObjectHighlightPass::CheckMultiSampleCountChanged(unsigned int) const
    bool ObjectHighlightPass::CheckMultiSampleCountChanged(uint param_1) {
        bool bVar1;
        RenderTargets* this_00;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_01;
        undefined8* puVar2;
        long lVar3;

        bVar1 = field_912->operator_cast_to_bool();
        if (bVar1) {
            this_00 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)field_912);
            this_01 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    this_00->GetColourTargetTextures();
            puVar2 = (undefined8*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_01, 0);
            lVar3 = (*puVar2)->second();
            bVar1 = *(uint*)(lVar3 + 16) != param_1;
        } else {
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x1007aa5a0, 144 bytes, placed by class name and debug map
    // ObjectHighlightPass::RebindDepthRenderTargets(render::Texture*)
    void ObjectHighlightPass::RebindDepthRenderTargets(Texture* param_1) {
        RenderTargets* pRVar1;
        RenderTargets* this_00;
        Texture* pTVar2;

        pRVar1 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
            (shared_ptr<render::RenderTargets>*)field_864);
        pRVar1->BindDepthStencilTargetTexture(param_1);
        pRVar1 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
            (shared_ptr<render::RenderTargets>*)field_896);
        this_00 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
            (shared_ptr<render::RenderTargets>*)field_880);
        pTVar2 = (Texture*)this_00->GetDepthStencilTargetTexture();
        pRVar1->BindDepthStencilTargetTexture(pTVar2);
        if (field_912->operator_cast_to_bool()) {
            pRVar1 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)field_912);
            pRVar1->BindDepthStencilTargetTexture(param_1);
        }
    }

    // 0x1007aa630, 1088 bytes, placed by class name and debug map
    // ObjectHighlightPass::PerformBlur(RT7Core&)
    void ObjectHighlightPass::PerformBlur(RT7Core* param_1) {
        char cVar1;
        uint uVar2;
        int iVar3;
        RenderTargets* this;
        Texture* pTVar4;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar5;
        undefined8* puVar6;
        uint* puVar7;
        ShaderProgram* this_00;
        InputAssemblerState* this_01;
        VertexDeclaration* pVVar8;
        VertexBuffer* pVVar9;
        Viewport* pVVar10;
        RenderPipelineState* pRVar11;
        HashedString* pHVar12;
        OutputMergerState* pOVar13;
        RT7Core* this_02;
        GeometryBatch* this_03;
        ImVec4 local_128[8];
        float local_120;
        float local_11c;
        DrawCallState local_118;
        DrawCallState local_e8;
        ImVec4 local_b8[16];
        RenderTargets* local_a8;
        RenderTargets* local_a0;
        RenderContext* local_98;
        fixed_vector<render::Viewport, 2ul, true, eastl::allocator> local_90[88];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_02 = param_1;
        cVar1 = HasBlurRenderTargets((ObjectHighlightPass*)param_1);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("HasBlurRenderTargets()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/renderpasses/ObjectHighlightPass.cpp",
                      587, (char*)0);
        }
        local_98 = (RenderContext*)this_02->GetRenderContext();
        this = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
            (shared_ptr<render::RenderTargets>*)(param_1->field_448 + 432));
        pTVar4 = (Texture*)GetDepthStencilTargetTexture();
        local_a8 = (RenderTargets*)((param_1->field_448 + 936))->end();
        local_a0 = (RenderTargets*)((param_1->field_448 + 920))->end();
        pvVar5 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                     local_a0->GetColourTargetTextures();
        puVar6 = (undefined8*)
            eastl::vector<render::Texture*,
                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar5,
                                                                                                                 0);
        puVar7 = (uint*)(*puVar6)->second();
        ImVec4::ImVec4(local_128, (float)*puVar7, (float)puVar7[1], 1.0 / (float)*puVar7, 1.0 / (float)puVar7[1]);
        eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>::fixed_vector(local_90);
        new (&local_118) render::Viewport(0, 0, *puVar7, puVar7[1], 0.0, 1.0);
        eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>::push_back(local_90, (Viewport*)&local_118);
        this_00 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator*(
            (shared_ptr<render::ShaderProgram>*)(param_1->field_448 + 952));
        new (&local_118) render::DrawCallState();
        this_01 = (InputAssemblerState*)local_118.GetInputAssemblerState();
        pVVar8 = (VertexDeclaration*)this_00->second();
        this_03 = (GeometryBatch*)(param_1->field_448 + 480);
        pVVar9 = (VertexBuffer*)this_03->GetBoneIDMap();
        this_01->SetVertexStreamData(pVVar8, pVVar9);
        pVVar10 = (Viewport*)local_118.GetOutputMergerState();
        uVar2 = local_90->HeapBeginPtr();
        render::OutputMergerState::SetViewports(pVVar10, uVar2);
        pRVar11 = (RenderPipelineState*)local_118.GetRenderPipelineState();
        pRVar11->SetShaderProgram(this_00);
        pRVar11 = (RenderPipelineState*)local_118.GetRenderPipelineState();
        pHVar12 = (HashedString*)graphics::operator*((graphics*)179);
        iVar3 = this_00->GetConstIndex(pHVar12);
        pRVar11->SetPSTextureSamplerPair(1, pTVar4, iVar3, 0, false);
        new (&local_e8) render::DrawCallState(&local_118);
        pOVar13 = (OutputMergerState*)local_e8.GetOutputMergerState();
        pOVar13->SetRenderTargets(local_a8);
        pRVar11 = (RenderPipelineState*)local_e8.GetRenderPipelineState();
        pvVar5 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                     local_a0->GetColourTargetTextures();
        puVar6 = (undefined8*)
            eastl::vector<render::Texture*,
                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar5,
                                                                                                                 0);
        pTVar4 = (Texture*)*puVar6;
        pHVar12 = (HashedString*)postprocess::operator*((postprocess*)2);
        iVar3 = this_00->GetConstIndex(pHVar12);
        pRVar11->SetPSTextureSamplerPair(0, pTVar4, iVar3, 0, false);
        ImVec4::ImVec4(local_b8, local_120, 0.0, 40.0, 0.0);
        pHVar12 = (HashedString*)graphics::operator*((graphics*)194);
        this_00->SetShaderConstVector4(pHVar12, local_b8);
        this_03->RenderQuad(local_98, &local_e8);
        local_e8.~DrawCallState();
        new (&local_e8) render::DrawCallState(&local_118);
        pOVar13 = (OutputMergerState*)local_e8.GetOutputMergerState();
        pOVar13->SetRenderTargets(local_a0);
        pRVar11 = (RenderPipelineState*)local_e8.GetRenderPipelineState();
        pvVar5 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                     local_a8->GetColourTargetTextures();
        puVar6 = (undefined8*)
            eastl::vector<render::Texture*,
                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar5,
                                                                                                                 0);
        pTVar4 = (Texture*)*puVar6;
        pHVar12 = (HashedString*)postprocess::operator*((postprocess*)2);
        iVar3 = this_00->GetConstIndex(pHVar12);
        pRVar11->SetPSTextureSamplerPair(0, pTVar4, iVar3, 0, false);
        ImVec4::ImVec4(local_b8, 0.0, local_11c, 40.0, 0.0);
        pHVar12 = (HashedString*)graphics::operator*((graphics*)194);
        this_00->SetShaderConstVector4(pHVar12, local_b8);
        this_03->RenderQuad(local_98, &local_e8);
        local_e8.~DrawCallState();
        local_118.~DrawCallState();
        eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>::~fixed_vector(local_90);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007aaa70, 336 bytes, placed by class name and debug map
    // ObjectHighlightPass::CreateBlurShader()
    void ObjectHighlightPass::CreateBlurShader() {
        char* pcVar1;
        char* pcVar2;
        VertexElementDesc* pVVar3;
        ostream* this_00;
        undefined1 local_178[280];
        PostProcessVS local_60[24];
        basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>> local_48[24];
        shared_ptr local_30;

        new (local_178) render::PixelShaderSourceStream(1, 1, 1, 1, 1, 1, 24);
        pcVar1 = (char*)shadersourceprovider::GetShaderString(2);
        this_00 = (ostream*)(local_178 + 16);
        std::operator<<(this_00, pcVar1);
        pcVar1 = (char*)this_00->Instance();
        local_60->BuildVSFragment();
        pcVar2 = (char*)local_60->c_str();
        std::basic_stringstream<char, std::char_traits<char>, BucketAllocatorSTL<char>>::str(local_48);
        pVVar3 = (VertexElementDesc*)local_48->c_str();
        local_30.RegisterFromSourceString(pcVar1, pcVar2, pVVar3, 62757712, '\x02');
        shared_ptr<render::ShaderProgram>::operator=((shared_ptr<render::ShaderProgram>*)(field_928 + 472), &local_30);
        local_30.~shared_ptr();
        local_48->~basic_string();
        local_60->~basic_string();
        local_178->~PixelShaderSourceStream();
    }

    // 0x1007aabf0, 16 bytes, placed by class name and debug map
    // ObjectHighlightPass::SetBlurSubPassEnabled(bool)
    void ObjectHighlightPass::SetBlurSubPassEnabled(bool param_1) {
        m_blurSubPassEnabled = param_1;
    }

    // 0x1007aac00, 32 bytes, placed by class name and debug map
    // ObjectHighlightPass::SetSilhouetteDepthBias(float, float)
    void ObjectHighlightPass::SetSilhouetteDepthBias(float param_1, float param_2) {
        m_silhouetteDepthBias = param_1;
        field_804 = param_2;
    }

    // 0x1007aac20, 16 bytes, placed by class name and debug map
    // ObjectHighlightPass::SetSilhouetteCoverPassEnabled(bool)
    void ObjectHighlightPass::SetSilhouetteCoverPassEnabled(bool param_1) {
        m_silhouetteCoverPassEnabled = param_1;
    }

    // 0x1007aac30, 32 bytes, placed by class name and debug map
    // ObjectHighlightPass::CreateRenderingResources()
    void ObjectHighlightPass::CreateRenderingResources() {
        CreateRenderingResources();
        CreateBlurShader(this);
    }

    // 0x1007aac70, 32 bytes, placed by class name and debug map
    // ObjectHighlightPass::DestroyRenderingResources()
    void ObjectHighlightPass::DestroyRenderingResources() {
        DestroyRenderTargets(this);
        DestroyRenderingResources();
    }

} // namespace jag::graphics
