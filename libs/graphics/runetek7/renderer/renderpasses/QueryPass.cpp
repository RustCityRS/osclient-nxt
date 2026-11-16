// libs/graphics/runetek7/renderer/renderpasses/QueryPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "QueryPass.h"

namespace jag::graphics {
    // 0x100f43798, 1 bytes, __data
    QueryPass::m_enablePreciseCulling = 1;

    // 0x100f43799, 1 bytes, __data
    QueryPass::m_DrawQueryTests = 1;

    // 0x1039bd14e, 1 bytes, __common; zero-initialised
    QueryPass::m_showBuffer;

    // 0x1007aaca0, 192 bytes, base-object constructor, placed by class name
    // QueryPass::QueryPass(render::RenderTargetsManager*, ThreadPool*)
    void QueryPass::QueryPass(RenderTargetsManager* param_1, ThreadPool* param_2) {
        RenderTargets* this_00;

        new (this) SceneRenderPass(9, param_1, param_2);
        field_0 = &PTR__QueryPass_100f14320;
        m_mode = 0;
        field_800 = 4294967295;
        m_queryRenderTargetSize = 320;
        field_808 = 240;
        field_812 = -1.0;
        new (field_816, (_func_decltype_nullptr*)9) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        make_shared<render::RenderTargets>((jag*)field_832);
        field_776 = true;
        this_00 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
            (shared_ptr<render::RenderTargets>*)field_832);
        this_00->Create("", 0);
    }

    // 0x1007aad60, 16 bytes, complete-object constructor, placed by class name
    // QueryPass::QueryPass(render::RenderTargetsManager*, ThreadPool*): jumps straight to the base-object constructor

    // 0x1007aad70, 112 bytes, base-object destructor, placed by class name
    // QueryPass::~QueryPass()
    void QueryPass::~QueryPass() {
        field_0 = &PTR__QueryPass_100f14320;
        DestroyRenderingResources(this);
        field_832->~shared_ptr();
        field_816->~shared_ptr();
        ~SceneRenderPass();
    }

    // 0x1007aade0, 16 bytes, complete-object destructor, placed by class name
    // QueryPass::~QueryPass(): jumps straight to the base-object destructor

    // 0x1007aadf0, 32 bytes, deleting destructor, placed by class name
    // QueryPass::~QueryPass()
    void QueryPass::~QueryPass() {
        ~QueryPass(this);
        operator_delete(this);
    }

    // 0x1007aae10, 640 bytes, placed by class name
    // QueryPass::BeginPass(render::DrawCallState&, render::RenderContext&, EffectManager&, SceneViewData const&, DrawableQueue const&)
    undefined8 QueryPass::BeginPass(DrawCallState* param_1, RenderContext* param_2, EffectManager* param_3,
                                    SceneViewData* param_4, DrawableQueue* param_5) {
        undefined1* this_00;
        char cVar1;
        bool bVar2;
        int iVar3;
        int iVar4;
        uint uVar5;
        RenderTargets* pRVar6;
        Viewport* pVVar7;
        OutputMergerState* this_01;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_02;
        Layout* this_03;
        long lVar8;
        RenderPipelineState* this_04;
        RenderTargets* this_05;
        Texture* pTVar9;
        undefined8 uVar10;
        DrawCallState* pDVar11;
        Singleton<render::BuiltinStates>* this_06;
        undefined1 auVar12[16];
        Viewport local_b8;
        RenderContext* local_98;
        fixed_vector<render::Viewport, 2ul, true, eastl::allocator> local_90[88];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (m_mode != 0) {
            local_98 = param_2;
            pRVar6 = (RenderTargets*)GetPreferredRT(this);
            cVar1 = pRVar6->HasDepthTarget();
            if (cVar1 != '\0') {
                cVar1 = (&param_4->field_432)->empty();
                if (cVar1 == '\0') {
                    eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>::fixed_vector(local_90);
                    iVar3 = GetOcclusionTargetWidth(this);
                    iVar4 = GetOcclusionTargetHeight(this);
                    new (&local_b8) render::Viewport(0, 0, iVar3, iVar4, 0.0, 1.0);
                    eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>::push_back(local_90, &local_b8);
                    pVVar7 = (Viewport*)param_1->GetOutputMergerState();
                    uVar5 = local_90->HeapBeginPtr();
                    render::OutputMergerState::SetViewports(pVVar7, uVar5);
                    this_01 = (OutputMergerState*)param_1->GetOutputMergerState();
                    this_01->SetRenderTargets(pRVar6);
                    pDVar11 = param_1;
                    this_02 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                                  param_1->GetRenderPipelineState();
                    auVar12 = pDVar11->Instance();
                    eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL,
                                               2>::compressed_pair_imp(this_02,
                                                                       (EntityHighlight**)(auVar12._0_8_ + 1524),
                                                                       auVar12._8_8_);
                    pDVar11 = param_1;
                    this_03 = (Layout*)param_1->GetRenderPipelineState();
                    lVar8 = pDVar11->Instance();
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                        Layout::SetHeapSize(this_03, lVar8 + 720);
                    this_04 = (RenderPipelineState*)param_1->GetRenderPipelineState();
                    lVar8 = param_1->Instance();
                    this_04->SetRasteriserState((RasteriserState*)(lVar8 + 1200));
                    cVar1 = pRVar6->HasColourTargets();
                    if (cVar1 != '\0') {
                        pVVar7 = &local_b8;
                        new (pVVar7) ImVec4(0.0, 0.0, -1.0, 0.0);
                        lVar8 = pVVar7->Instance();
                        local_98->SetBlendState((BlendState*)(lVar8 + 1524));
                        local_98->ClearRenderTargets(pRVar6, (Vector4T*)&local_b8, 1);
                    }
                    this_00 = field_816;
                    this_06 = (Singleton<render::BuiltinStates>*)this_00;
                    bVar2 = this_00->operator_cast_to_bool();
                    if ((bVar2) && (m_mode == 1)) {
                        lVar8 = this_06->Instance();
                        local_98->SetDepthStencilState((DepthStencilState*)(lVar8 + 720));
                        pRVar6 = (RenderTargets*)this_00->end();
                        this_05 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                            (shared_ptr<render::RenderTargets>*)this_00);
                        pTVar9 = (Texture*)this_05->GetDepthStencilTargetTexture();
                        uVar5 = render::GetDepthTextureClearFlags(pTVar9);
                        local_98->ClearDepthStencilTarget(pRVar6, 1.0, 0, uVar5);
                    }
                    eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator>::~fixed_vector(local_90);
                    uVar10 = 1;
                    goto LAB_1007aae74;
                }
            }
        }
        uVar10 = 0;
    LAB_1007aae74:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar10;
    }

    // 0x1007ab090: the linker folded this into QueryPass::GetPreferredRT(), which has identical code
    QueryPass::GetPreferredRT() const;

    // 0x1007ab0d0, 64 bytes, placed by class name
    // QueryPass::GetOcclusionTargetWidth() const
    undefined4 QueryPass::GetOcclusionTargetWidth() {
        char cVar1;
        undefined4 uVar2;
        RenderTargets* this_00;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* this_01;
        undefined4* puVar3;

        this_00 = (RenderTargets*)GetPreferredRT(this);
        cVar1 = this_00->HasDepthTarget();
        uVar2 = 0;
        if (cVar1 != '\0') {
            this_01 =
                (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                             eastl::allocator>>::Layout,
                                     eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                    this_00->GetDepthStencilTargetTexture();
            puVar3 = (undefined4*)eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(this_01);
            uVar2 = *puVar3;
        }
        return uVar2;
    }

    // 0x1007ab110, 64 bytes, placed by class name
    // QueryPass::GetOcclusionTargetHeight() const
    undefined4 QueryPass::GetOcclusionTargetHeight() {
        char cVar1;
        undefined4 uVar2;
        RenderTargets* this_00;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* this_01;
        long lVar3;

        this_00 = (RenderTargets*)GetPreferredRT(this);
        cVar1 = this_00->HasDepthTarget();
        uVar2 = 0;
        if (cVar1 != '\0') {
            this_01 =
                (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                             eastl::allocator>>::Layout,
                                     eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                    this_00->GetDepthStencilTargetTexture();
            lVar3 = eastl::compressed_pair_imp<
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(this_01);
            uVar2 = *(undefined4*)(lVar3 + 4);
        }
        return uVar2;
    }

    // 0x1007ab150, 432 bytes, placed by class name
    // QueryPass::Render(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&, DrawableQueue&)
    void QueryPass::Render(RT7Core* param_1, DrawCallState* param_2, EffectManager* param_3, SceneViewData* param_4,
                           DrawableQueue* param_5) {
        char cVar1;
        undefined1 uVar2;
        RenderTargets* this_00;
        NXTPixToolkit* this_01;
        undefined8 uVar3;
        SceneRenderPass* this_02;

        if (m_mode != 0) {
            this_00 = (RenderTargets*)GetPreferredRT(this);
            cVar1 = this_00->HasDepthTarget();
            if (cVar1 != '\0') {
                this_01 = (NXTPixToolkit*)param_1->GetForwardOcclusionRenderPass();
                uVar3 = this_01->GetScreen();
                cVar1 = GetOcclusionEnabledIgnoringLocalBuffer(param_4);
                if (cVar1 == '\0') {
                    uVar2 = 0;
                } else {
                    this_02 = (SceneRenderPass*)param_1->GetForwardOcclusionRenderPass();
                    uVar2 = this_02->IsViewChangeValidForOcclusion(param_4);
                }
                1065353216->RenderOccludedDrawableGroup(this, param_1, param_2, param_3, param_4, param_5, 0, uVar2,
                                                        uVar3);
                1065353216->RenderOccludedDrawableGroup(this, param_1, param_2, param_3, param_4, param_5, 1, uVar2,
                                                        uVar3);
                1065353216->RenderOccludedDrawableGroup(this, param_1, param_2, param_3, param_4, param_5, 2, uVar2,
                                                        uVar3);
                1065353216->RenderOccludedDrawableGroup(this, param_1, param_2, param_3, param_4, param_5, 3, uVar2,
                                                        uVar3);
                1065353216->RenderOccludedDrawableGroup(this, param_1, param_2, param_3, param_4, param_5, 9, 0, 0);
            }
        }
    }

    // 0x1007ab300, 304 bytes, placed by class name
    // QueryPass::RenderDebug(EffectManager&, DrawableQueue&)
    void QueryPass::RenderDebug(EffectManager* param_1, DrawableQueue* param_2) {
        char cVar1;
        undefined4 uVar2;
        RenderTargets* pRVar3;
        long* plVar4;
        undefined8 uVar5;
        int iVar6;
        ImVec4 local_58[16];
        Point<float> local_48[8];
        undefined1 local_40[16];

        iVar6 = 0;
        do {
            uVar2 = GetPos();
            param_2->RenderDebug(iVar6, uVar2);
            iVar6 = iVar6 + 1;
        } while (iVar6 != 13);
        if (m_showBuffer != '\0') {
            pRVar3 = (RenderTargets*)GetPreferredRT(this);
            cVar1 = pRVar3->IsCreated();
            if (cVar1 != '\0') {
                plVar4 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar4 != (long*)0) {
                    pRVar3 = (RenderTargets*)GetPreferredRT(this);
                    uVar5 = pRVar3->GetDepthStencilTargetTexture();
                    ImVec4::ImVec4(local_58, 0.0, 0.0, 0.5, 0.5);
                    new ((local_40 + 8)) math::Point<float>(0.0, 0.0);
                    math::Point<float>::Point(local_48, 1.0, 1.0);
                    new (local_40) oldscape::sidebars::SideBarData(-1, 0);
                    (**(code**)(*plVar4 + 112))(plVar4, uVar5, local_58, local_40 + 8, local_48, 0, 0, 0,
                                                (SideBarData*)local_40);
                }
            }
        }
        cVar1 = GetOcclusionTestEnabled();
        if (cVar1 != '\0') {
            field_16->RenderDebug();
        }
    }

    // 0x1007ab430, 64 bytes, placed by class name
    // QueryPass::RegisterTweakVarsOcclusion(tweak::Container&)
    void QueryPass::RegisterTweakVarsOcclusion(Container* param_1) {
        param_1->AddCheckBox("Enable On Query Pass", &field_776);
        param_1->AddCheckBox("Show Query Pass Depth Buffer", (bool*)(field_16 + 8));
    }

    // 0x1007ab470, 288 bytes, placed by class name
    // QueryPass::PreparePass(RT7Core&, EffectManager&, SceneViewData const&, DrawableQueue&)
    void QueryPass::PreparePass(RT7Core* param_1, EffectManager* param_2, SceneViewData* param_3,
                                DrawableQueue* param_4) {
        char cVar1;
        undefined8 uVar3;
        RenderTargets* pRVar5;
        Texture* pTVar6;
        undefined8 uVar7;
        char* pcVar8;

        PreparePass(param_1, param_2, param_3, param_4);
        if (m_mode == 1) {
            cVar1 = PrepareQueryRT(this, param_1);
            if (cVar1 != '\0') {
                return;
            }
            uVar3 = logger::default_logger();
            pcVar8 = "Could not prepare the owned RT for query pass";
            uVar7 = 186;
        } else {
            if (field_816->operator_cast_to_bool()) {
                (field_784, (shared_ptr*)field_816)->Unregister();
            }
            if (m_mode != 2) {
                pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)field_832);
                cVar1 = pRVar5->HasDepthTarget();
                if (cVar1 == '\0') {
                    return;
                }
                pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)field_832);
                pRVar5->Unbind();
                return;
            }
            if (param_1->GetForwardDepthTexture() == 0) {
                return;
            }
            pRVar5 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)field_832);
            pTVar6 = (Texture*)param_1->GetForwardDepthTexture();
            cVar1 = pRVar5->BindDepthStencilTargetTexture(pTVar6);
            if (cVar1 != '\0') {
                return;
            }
            uVar3 = logger::default_logger();
            pcVar8 = "Could not prepare the unowned RT for query pass";
            uVar7 = 203;
        }
        logger::Logger::Log(uVar3, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/renderpasses/QueryPass.cpp",
                            uVar7, pcVar8);
    }

    // 0x1007ab590, 576 bytes, placed by class name
    // QueryPass::PrepareQueryRT(RT7Core&)
    ulong QueryPass::PrepareQueryRT(RT7Core* param_1) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        long lVar3;
        RenderTargets* pRVar4;
        compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::Layout,
                            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>* pcVar5;
        uint* puVar6;
        undefined7 extraout_var;
        undefined8 uVar7;
        undefined8 unaff_RBX;
        ulong uVar8;
        Desc* this_01;
        undefined4 uVar9;
        array<render::Texture::Desc, 2ul> local_100[128];
        undefined1 local_80[80];

        if ((m_queryRenderTargetSize == 0) || (field_808 == 0)) {
        LAB_1007ab779:
            /* WARNING: Subroutine does not return */
            LogAssert("false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/renderpasses/QueryPass.cpp",
                      218, "No valid forward depth texture for query pass prepare");
        }
        lVar3 = param_1->GetForwardDepthTexture();
        if (lVar3 == 0)
            goto LAB_1007ab779;
        this_00 = field_816;
        bVar1 = this_00->operator_cast_to_bool();
        if (bVar1) {
            pRVar4 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)this_00);
            lVar3 = pRVar4->GetDepthStencilTargetTexture();
            if (lVar3 != 0) {
                pRVar4 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)this_00);
                pcVar5 = (compressed_pair_imp<
                          eastl::basic_string<
                              char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                          eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                             pRVar4->GetDepthStencilTargetTexture();
                puVar6 = (uint*)eastl::compressed_pair_imp<
                    eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
                    eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(pcVar5);
                if ((*puVar6 == m_queryRenderTargetSize) &&
                    (uVar8 = CONCAT71((int7)((ulong)unaff_RBX >> 8), 1), puVar6[1] == field_808))
                    goto LAB_1007ab79e;
            }
            (field_784, (shared_ptr*)this_00)->Unregister();
        }
        pRVar4 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
            (shared_ptr<render::RenderTargets>*)field_832);
        cVar2 = pRVar4->HasDepthTarget();
        if (cVar2 != '\0') {
            pRVar4 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)field_832);
            pRVar4->Unbind();
        }
        std::array<render::Texture::Desc, 2ul>::array(local_100);
        this_01 = (Desc*)local_80;
        render::Texture::Desc::Desc(this_01);
        local_80._0_4_ = m_queryRenderTargetSize;
        local_80._4_4_ = field_808;
        local_80._16_4_ = 1;
        local_80._24_4_ = 0;
        pcVar5 =
            (compressed_pair_imp<eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                                         eastl::allocator>>::Layout,
                                 eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>*)
                param_1->GetForwardDepthTexture();
        lVar3 = eastl::compressed_pair_imp<
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::Layout,
            eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>, 0>::second(pcVar5);
        local_80._12_4_ = *(int*)(lVar3 + 12);
        local_80[32] = 0;
        ((local_80 + 64))->Register(field_784, "OcclusionDepth", 3553, local_100, 0, this_01, 0, 1);
        uVar9 = (undefined4)((ulong)this_01 >> 32);
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)this_00,
                                                     (shared_ptr*)(local_80 + 64));
        ((local_80 + 64))->~shared_ptr();
        bVar1 = this_00->operator_cast_to_bool();
        uVar8 = CONCAT71(extraout_var, bVar1) & 4294967295;
        if (!bVar1) {
            (field_784, (shared_ptr*)this_00)->Unregister();
            uVar7 = logger::default_logger();
            logger::Logger::Log(uVar7, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/renderer/renderpasses/QueryPass.cpp",
                                258, "Could not create the depth target for the query render pass (Size %u x %u)",
                                CONCAT44(uVar9, m_queryRenderTargetSize), field_808);
        }
    LAB_1007ab79e:
        return uVar8 & 4294967295;
    }

    // 0x1007ab7d0, 144 bytes, placed by class name
    // QueryPass::SetupDistanceCulling(math::AABB const&, math::Matrix44T<float> const&)
    void QueryPass::SetupDistanceCulling(AABB* param_1, Matrix44T* param_2) {
        uint uVar1;
        float in_XMM1_Da;
        undefined8 local_40;
        float local_38;
        float local_34;

        if (m_enablePreciseCulling == '\0') {
            DisableDistanceCulling(this);
        } else {
            uVar1 = 0;
            local_34 = 0.0;
            do {
                local_40 = param_1->GetCornerPos(uVar1);
                local_38 = in_XMM1_Da;
                in_XMM1_Da = (float)DstFromCameraPlaneUnclamped((Vector3T*)&local_40, param_2);
                local_34 = (float)eastl::max_alt(local_34, in_XMM1_Da);
                uVar1 = uVar1 + 1;
            } while (uVar1 != 8);
            field_812 = local_34;
        }
    }

    // 0x1007ab860: the linker folded this into jag::DstFromCameraPlaneUnclamped(math::Vector3T<float> const&, math::Matrix44T<float> const&), which has identical code
    DstFromCameraPlaneUnclamped(math::Vector3T<float> const&, math::Matrix44T<float> const&);

    // 0x1007ab910, 64 bytes, placed by class name
    // QueryPass::DestroyRenderingResources()
    void QueryPass::DestroyRenderingResources() {
        (field_784, (shared_ptr*)field_816)->Unregister();
        render::RenderTargets::SafeReset((shared_ptr*)field_832);
        DestroyRenderingResources();
    }

    // 0x1007b12b0: the linker folded this into ShadowMapCascade::GetCascadeID() const, which has identical code
    QueryPass::GetMode() const;

} // namespace jag::graphics
