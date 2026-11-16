// libs/graphics/runetek7/renderer/renderpasses/SceneRenderPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "SceneRenderPass.h"

namespace jag::graphics {
    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    OcclusionManager SceneRenderPass::GetOcclusionManager();

    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    OcclusionManager SceneRenderPass::GetOcclusionManager() const;

    // 0x1007a42e0, 336 bytes, placed by class name and debug map
    // SceneRenderPass::ClearRenderTargets(render::RenderContext&, render::RenderTargetData const&, eastl::fixed_vector<render::Viewport, 2ul, true, eastl::allocator> const&)
    void SceneRenderPass::ClearRenderTargets(RenderContext* param_1, RenderTargetData* param_2, fixed_vector* param_3) {
        RenderTargets* pRVar1;
        Viewport* pVVar2;
        vector<eastl::pair<int, int>, eastl::allocator>* this_00;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_01;
        undefined8* puVar3;
        int* piVar4;
        Viewport* pVVar5;
        ulong uVar6;
        long lVar7;
        Vector4T* pVVar8;
        bool bVar9;
        RenderContext* this_02;
        ulong local_38;

        bVar9 = false;
        pVVar2 = (Viewport*)eastl::vector<render::Viewport,
                                          eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>::
        operator[](
            (vector<render::Viewport, eastl::fixed_vector_allocator<24ul, 2ul, 4ul, 0ul, true, eastl::allocator>>*)
                param_3,
            0);
        if (param_2->field_0 == (RenderTargets*)0) {
            local_38 = 1;
        } else {
            this_00 = (vector<eastl::pair<int, int>, eastl::allocator>*)param_2->field_0->GetColourTargetTextures();
            local_38 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(this_00);
            this_01 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    param_2->field_0->GetColourTargetTextures();
            puVar3 = (undefined8*)eastl::vector<
                render::Texture*,
                eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](this_01, 0);
            piVar4 = (int*)(*puVar3)->second();
            if (((pVVar2->field_0 == 0 && pVVar2->field_4 == 0) && (pVVar2->field_8 == *piVar4)) &&
                (pVVar2->field_12 == piVar4[1])) {
                bVar9 = false;
            } else {
                bVar9 = true;
            }
        }
        param_1->SetScissorRectangle(bVar9, pVVar2);
        pVVar5 = (Viewport*)param_3->HeapBeginPtr();
        uVar6 = param_3->size();
        this_02 = param_1;
        param_1->SetViewports(pVVar5, uVar6);
        if ((param_2->field_48 & 1) != 0) {
            lVar7 = this_02->Instance();
            param_1->SetBlendState((BlendState*)(lVar7 + 1524));
            pRVar1 = param_2->field_0;
            pVVar8 = (Vector4T*)std::array<math::Vector4T<float>, 2ul>::operator[]((ulong)&param_2->field_16);
            this_02 = param_1;
            param_1->ClearRenderTargets(pRVar1, pVVar8, local_38);
        }
        if ((param_2->field_48 & 6) != 0) {
            lVar7 = this_02->Instance();
            param_1->SetDepthStencilState((DepthStencilState*)(lVar7 + 720));
            param_1->ClearDepthStencilTarget(param_2->field_0, param_2->field_52, param_2->field_56, param_2->field_48);
        }
        param_1->SetScissorRectangle(false, pVVar2);
    }

    // 0x1007a5f80, 192 bytes, base-object constructor, placed by class name
    // SceneRenderPass::SceneRenderPass(RenderPassType, render::RenderTargetsManager*, ThreadPool*)
    void SceneRenderPass::SceneRenderPass(undefined8 param_2, undefined8 param_3, ThreadPool* param_4) {
        RenderPass::RenderPass();
        field_0 = &PTR__SceneRenderPass_100f14460;
        new (m_occlusionManager, param_4) OcclusionManager();
        std::unique_ptr<render::BufferedRenderTargets, std::default_delete<render::BufferedRenderTargets>>::unique_ptr<
            true, void>(
            (unique_ptr<render::BufferedRenderTargets, std::default_delete<render::BufferedRenderTargets>>*)&field_736);
        new (&field_744) Array<SceneViewData, eastl::allocator>();
        std::unique_ptr<OcclusionReprojection, std::default_delete<OcclusionReprojection>>::unique_ptr<true, void>(
            (unique_ptr<OcclusionReprojection, std::default_delete<OcclusionReprojection>>*)&field_768);
        field_776 = '\0';
        field_777 = true;
        field_778 = 1;
        field_780 = 0;
        field_784 = param_3;
        field_792 = 0;
    }

    // 0x1007a6040, 64 bytes, placed by class name
    // SceneRenderPass::SetOcclusionTestEnabled(bool)
    void SceneRenderPass::SetOcclusionTestEnabled(bool param_1) {
        if ((field_776 == '\0') && (param_1)) {
            field_776 = '\x01';
            (*(code*)field_0[8])();
            return;
        }
        if ((field_776 != '\0') && (!param_1)) {
            field_776 = '\0';
            OnOcclusionDisabled(this);
        }
    }

    // 0x1007a6080, 160 bytes, base-object destructor, placed by class name
    // SceneRenderPass::~SceneRenderPass()
    void SceneRenderPass::~SceneRenderPass() {
        field_0 = &PTR__SceneRenderPass_100f14460;
        DestroyRenderingResources(this);
        DestroyOcclusion((RenderTargetsManager*)this);
        (&field_768)->~unique_ptr();
        (&field_744)->~Array();
        (&field_736)->~unique_ptr();
        m_occlusionManager->~OcclusionManager();
        ~RenderPass();
    }

    // 0x1007a6d10, 80 bytes, placed by class name
    // SceneRenderPass::GetCPUOcclusionEnabled(SceneViewData const&) const
    undefined8 SceneRenderPass::GetCPUOcclusionEnabled(SceneViewData* param_1) {
        char cVar1;
        undefined8 uVar2;

        cVar1 = GetOcclusionTestEnabled(this);
        if (cVar1 == '\0') {
            uVar2 = 0;
        } else {
            cVar1 = param_1->GetOcclusionTestEnabled();
            uVar2 = 0;
            if ((cVar1 != '\0') && (OcclusionManager::m_OcclusionEnabled != '\0')) {
                uVar2 = CONCAT71(17021909, OcclusionManager::m_CPUDepthBufferGenerationEnabled != '\0');
            }
        }
        return uVar2;
    }

    // 0x1007a6d60, 48 bytes, placed by class name
    // SceneRenderPass::GetOcclusionEnabled(SceneViewData const&) const
    undefined8 SceneRenderPass::GetOcclusionEnabled(SceneViewData* param_1) {
        undefined8 uVar2;

        if (GetOcclusionEnabled(this) == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = param_1->GetOcclusionTestEnabled();
        }
        return uVar2;
    }

    // 0x1007a6d90, 192 bytes, placed by class name
    // SceneRenderPass::IsViewChangeValidForOcclusion(SceneViewData const&)
    ulong SceneRenderPass::IsViewChangeValidForOcclusion(SceneViewData* param_1) {
        uint uVar1;
        uint uVar3;
        GraphicsApp* pGVar5;
        undefined8 unaff_RBX;
        ulong uVar6;
        uint uVar7;
        float fVar8;
        float extraout_XMM0_Db;
        float extraout_XMM0_Db_00;

        if (OcclusionManager::m_disableOnVerticalCameraRotation == '\0') {
            uVar6 = CONCAT71((int7)((ulong)unaff_RBX >> 8), 1);
        } else {
            pGVar5 = (GraphicsApp*)this;
            if (GetOcclusionEnabled(this, param_1) == '\0') {
                uVar6 = 0;
            } else {
                uVar1 = field_792;
                pGVar5 = (GraphicsApp*)pGVar5->Instance();
                uVar3 = pGVar5->GetFrameCount();
                uVar7 = 0;
                uVar6 = 0;
                if (uVar1 <= uVar3) {
                    param_1->GetViewVector();
                    pGVar5 = (GraphicsApp*)GetOcclusionSceneViewData(this);
                    pGVar5->GetViewVector();
                    fVar8 = (float)::abs(extraout_XMM0_Db - extraout_XMM0_Db_00);
                    uVar6 = (ulong)(fVar8 < 0.07);
                    if (fVar8 >= 0.07) {
                        pGVar5 = (GraphicsApp*)pGVar5->Instance();
                        uVar7 = pGVar5->GetFrameCount() + 5;
                    }
                    field_792 = uVar7;
                }
            }
        }
        return uVar6 & 4294967295;
    }

    // 0x1007a6e60, 544 bytes, placed by class name
    // SceneRenderPass::RenderOccludedDrawableGroup(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&, DrawableQueue&, DrawableGroupType, bool, OcclusionManager*, float)
    void SceneRenderPass::RenderOccludedDrawableGroup(undefined4 param_1_00, SceneRenderPass* this, undefined8 param_1,
                                                      undefined8 param_2, undefined8 param_3, undefined8 param_4,
                                                      DrawableQueue* param_5, undefined4 param_8, char param_9,
                                                      OcclusionManager* param_10) {
        char cVar1;
        undefined4 uVar2;
        undefined8* puVar3;
        undefined8* puVar4;
        undefined4* puVar5;
        undefined8 local_90;
        undefined8 local_88;
        undefined8 local_80;
        undefined8 local_78;
        undefined4 local_6c;
        function<bool(math::OBB_const&, SceneViewData_const&)> local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_10 == (OcclusionManager*)0) {
            param_10 = (OcclusionManager*)m_occlusionManager;
        }
        local_88 = param_2;
        local_80 = param_1;
        local_78 = param_3;
        local_6c = param_1_00;
        UpdateMaterialDistanceKeys(this, param_5, param_8);
        uVar2 = GetPos();
        DrawableQueue::SortGroup<SortKeyLessThan>(param_5, param_8, uVar2);
        if ((param_9 != '\0') && (param_10 != (OcclusionManager*)0)) {
            cVar1 = param_10->DepthBufferCanOcclude();
            if (cVar1 != '\0') {
                local_90 = GetOcclusionSceneViewData(this);
                cVar1 = RenderPass::m_useAsyncRasterisation;
                uVar2 = GetPos();
                puVar3 = &param_10;
                if (cVar1 == '\0') {
                    std::function<bool(math::OBB_const&, SceneViewData_const&)>::function<
                        SceneRenderPass::RenderOccludedDrawableGroup(
                            RT7Core&, render::DrawCallState_const&, EffectManager&, SceneViewData_const&,
                            DrawableQueue&, DrawableGroupType, bool, OcclusionManager*, float)::__3,
                        void>(local_68);
                    param_5->RenderGroup(local_80, local_88, param_4, param_8, uVar2, local_78, local_68, param_4);
                } else {
                    puVar4 = &local_90;
                    puVar5 = &local_6c;
                    std::function<bool(math::OBB_const&, SceneViewData_const&)>::function<
                        SceneRenderPass::RenderOccludedDrawableGroup(
                            RT7Core&, render::DrawCallState_const&, EffectManager&, SceneViewData_const&,
                            DrawableQueue&, DrawableGroupType, bool, OcclusionManager*, float)::__2,
                        void>(local_68);
                    param_5->RenderGroupWithAsyncTest(local_80, local_88, param_4, param_8, uVar2, local_78, local_68,
                                                      param_4, puVar3, puVar4, puVar5);
                }
                std::function<bool(math::OBB_const&, SceneViewData_const&)>::~function(local_68);
                goto LAB_1007a7042;
            }
        }
        uVar2 = GetPos();
        param_5->RenderGroup(local_80, local_88, param_4, param_8, uVar2, local_78);
    LAB_1007a7042:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007a72e0, 496 bytes, placed by class name
    // SceneRenderPass::DownsampleGPUDepthBuffer(RT7Core&, EffectManager&, SceneViewData const&, DrawableQueue&, render::Texture const*, bool)
    void SceneRenderPass::DownsampleGPUDepthBuffer(RT7Core* param_1, EffectManager* param_2, SceneViewData* param_3,
                                                   DrawableQueue* param_4, Texture* param_5, bool param_6) {
        undefined1* this_00;
        int iVar1;
        char cVar2;
        uint uVar3;
        SSAOPass* this_01;
        BufferedRenderTargets* pBVar4;
        RenderTargets* pRVar5;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar6;
        undefined8* puVar7;
        int* piVar8;
        long lVar9;
        Viewport* pVVar10;
        OutputMergerState* this_02;
        SceneViewData* this_03;
        undefined1 local_98[72];
        DrawableQueue* local_50;
        EffectManager* local_48;
        RT7Core* local_40;
        SceneViewData* local_38;

        local_40 = param_1;
        if (param_5 == (Texture*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("srcDepthTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/renderpasses/SceneRenderPass.cpp",
                      324, (char*)0);
        }
        cVar2 = GetGPUOcclusionEnabled(this, param_3);
        if (cVar2 != '\0') {
            local_50 = param_4;
            local_48 = param_2;
            local_38 = param_3;
            this_01 = (SSAOPass*)local_40->GetDepthDownsamplePass();
            this_01->SetSSAOContext(param_5);
            this_01->SetCombineWithPrevious(param_6);
            new ((local_98 + 24)) render::DrawCallState();
            this_00 = &field_736;
            pBVar4 =
                (BufferedRenderTargets*)
                    std::unique_ptr<render::BufferedRenderTargets, std::default_delete<render::BufferedRenderTargets>>::
                    operator->(
                        (unique_ptr<render::BufferedRenderTargets, std::default_delete<render::BufferedRenderTargets>>*)
                            this_00);
            pRVar5 = (RenderTargets*)pBVar4->GetWriteRT();
            pvVar6 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar5->GetColourTargetTextures();
            puVar7 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar6, 0);
            piVar8 = (int*)(*puVar7)->second();
            iVar1 = *piVar8;
            pBVar4 =
                (BufferedRenderTargets*)
                    std::unique_ptr<render::BufferedRenderTargets, std::default_delete<render::BufferedRenderTargets>>::
                    operator->(
                        (unique_ptr<render::BufferedRenderTargets, std::default_delete<render::BufferedRenderTargets>>*)
                            this_00);
            pRVar5 = (RenderTargets*)pBVar4->GetWriteRT();
            pvVar6 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar5->GetColourTargetTextures();
            puVar7 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar6, 0);
            lVar9 = (*puVar7)->second();
            new (local_98) render::Viewport(0, 0, iVar1, *(int*)(lVar9 + 4), 0.0, 1.0);
            pVVar10 = (Viewport*)((local_98 + 24))->GetOutputMergerState();
            render::OutputMergerState::SetViewports(pVVar10, (uint)local_98);
            this_02 = (OutputMergerState*)((local_98 + 24))->GetOutputMergerState();
            pBVar4 =
                (BufferedRenderTargets*)
                    std::unique_ptr<render::BufferedRenderTargets, std::default_delete<render::BufferedRenderTargets>>::
                    operator->(
                        (unique_ptr<render::BufferedRenderTargets, std::default_delete<render::BufferedRenderTargets>>*)
                            this_00);
            pRVar5 = (RenderTargets*)pBVar4->GetWriteRT();
            this_02->SetRenderTargets(pRVar5);
            (*(code*)this_01->field_0[5])(this_01, local_40, local_98 + 24, local_48, local_38, local_50);
            pBVar4 =
                (BufferedRenderTargets*)
                    std::unique_ptr<render::BufferedRenderTargets, std::default_delete<render::BufferedRenderTargets>>::
                    operator->(
                        (unique_ptr<render::BufferedRenderTargets, std::default_delete<render::BufferedRenderTargets>>*)
                            this_00);
            uVar3 = pBVar4->GetWriteIndex();
            this_03 = (SceneViewData*)Array<SceneViewData, eastl::allocator>::operator[](
                (Array<SceneViewData, eastl::allocator>*)&field_744, (ulong)uVar3);
            SceneViewData::operator=(this_03, local_38);
            pBVar4 =
                (BufferedRenderTargets*)
                    std::unique_ptr<render::BufferedRenderTargets, std::default_delete<render::BufferedRenderTargets>>::
                    operator->(
                        (unique_ptr<render::BufferedRenderTargets, std::default_delete<render::BufferedRenderTargets>>*)
                            this_00);
            pBVar4->WriteFinished();
            ((local_98 + 24))->~DrawCallState();
        }
    }

    // 0x1007a84a0, 192 bytes, placed by class name
    // SceneRenderPass::RenderOccludedDrawableGroup(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&, DrawableQueue&, DrawableGroupType, RenderPassType, bool, std::function<bool (Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&)
    /* SceneRenderPass::RenderOccludedDrawableGroup(RT7Core&,
   render::DrawCallState const&, EffectManager&, SceneViewData
   const&, DrawableQueue&, DrawableGroupType,
   RenderPassType, bool, std::function<bool (Drawable*,
   std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)>
   const&) */

    void SceneRenderPass::RenderOccludedDrawableGroup(undefined8 param_1, undefined8 param_2, undefined8 param_3,
                                                      undefined8 param_4, DrawableQueue* param_5, undefined4 param_7,
                                                      undefined4 param_8, char param_9, undefined8 param_10) {
        char cVar1;
        undefined4 uVar2;

        UpdateMaterialDistanceKeys(this, param_5, param_7);
        cVar1 = RenderPass::m_useAsyncRasterisation;
        if (param_9 != '\0') {
            uVar2 = GetPos();
            if (cVar1 == '\0') {
                param_5->FilterMulti(param_7, uVar2, param_8, param_10);
            } else {
                DrawableQueue::FilterMultiAsync();
            }
        }
        uVar2 = GetPos();
        DrawableQueue::SortGroup<SortKeyLessThan>(param_5, param_7, uVar2);
        uVar2 = GetPos();
        param_5->RenderGroup(param_1, param_2, param_4, param_7, uVar2, param_3);
    }

    // 0x1007a8ed0, 64 bytes, placed by class name
    // SceneRenderPass::GetOcclusionEnabledIgnoringLocalBuffer(SceneViewData const&) const
    undefined8 SceneRenderPass::GetOcclusionEnabledIgnoringLocalBuffer(SceneViewData* param_1) {
        char cVar1;
        undefined8 uVar2;

        cVar1 = GetOcclusionTestEnabled(this);
        uVar2 = 0;
        if ((cVar1 != '\0') && (OcclusionManager::m_OcclusionEnabled != '\0')) {
            uVar2 = param_1->GetOcclusionTestEnabled();
        }
        return uVar2;
    }

    // 0x1007aa170, 368 bytes, placed by class name
    // SceneRenderPass::PreparePass(RT7Core&, EffectManager&, SceneViewData const&, DrawableQueue&)
    void SceneRenderPass::PreparePass(RT7Core* param_1, EffectManager* param_2, SceneViewData* param_3,
                                      DrawableQueue* param_4) {
        char cVar1;
        bool bVar2;
        undefined4 uVar3;
        int iVar4;
        SceneRenderPass* pSVar5;
        OcclusionReprojection* this_00;
        NXTPixToolkit* this_01;
        OcclusionManager* pOVar6;
        ThreadPool* pTVar7;
        SceneViewData* pSVar8;
        long lVar9;
        SceneViewData* pSVar10;
        uint uVar11;
        RT7Core* pRVar12;
        int iVar13;

        m_occlusionManager->UpdateStats();
        cVar1 = param_3->GetOcclusionTestEnabled();
        if (cVar1 != '\0') {
            uVar11 = 0;
            iVar13 = 0;
            do {
                uVar3 = GetPos();
                pRVar12 = (RT7Core*)(ulong)uVar11;
                iVar4 = param_4->GetGroupSize(pRVar12, uVar3);
                iVar13 = iVar13 + iVar4;
                uVar11 = uVar11 + 1;
            } while (uVar11 != 13);
            field_777 = field_780 <= iVar13;
            ResolveOcclusionBuffer(this, pRVar12, param_3);
            bVar2 = (&field_768)->operator_cast_to_bool();
            if (bVar2) {
                pSVar5 = (SceneRenderPass*)param_1->GetForwardOcclusionRenderPass();
                cVar1 = GetGPUOcclusionEnabled(pSVar5, param_3);
                if (((cVar1 != '\0') && (cVar1 = GetOcclusionTestEnabled(this), cVar1 != '\0')) &&
                    (field_778 != '\0')) {
                    this_00 =
                        (OcclusionReprojection*)std::unique_ptr<OcclusionReprojection,
                                                                std::default_delete<OcclusionReprojection>>::
                        operator->(
                            (unique_ptr<OcclusionReprojection, std::default_delete<OcclusionReprojection>>*)&field_768);
                    this_01 = (NXTPixToolkit*)param_1->GetForwardOcclusionRenderPass();
                    pOVar6 = (OcclusionManager*)this_01->GetScreen();
                    pTVar7 = (ThreadPool*)param_1->GetImmediateThreadPool();
                    pSVar5 = (SceneRenderPass*)param_1->GetForwardOcclusionRenderPass();
                    pSVar8 = (SceneViewData*)GetOcclusionSceneViewData(pSVar5);
                    bVar2 = (bool)GetGPUOcclusionEnabled(this, param_3);
                    lVar9 = (&field_744)->end();
                    if (lVar9 == 1) {
                        pSVar10 = (SceneViewData*)(&field_744)->data();
                    } else {
                        pSVar10 = (SceneViewData*)0;
                    }
                    this_00->ReprojectOcclusionBuffer(pOVar6, pTVar7, pSVar8, param_3, bVar2, pSVar10);
                    return;
                }
                field_777 = false;
            }
        }
    }

    // 0x1007aac50, 32 bytes, placed by class name
    // SceneRenderPass::CreateRenderingResources()
    void SceneRenderPass::CreateRenderingResources() {
        if (field_776 != '\0') {
            (*(code*)field_0[8])();
        }
    }

    // 0x1007aac90, 16 bytes, placed by class name
    // SceneRenderPass::DestroyRenderingResources()
    void SceneRenderPass::DestroyRenderingResources() {
        OnOcclusionDisabled(this);
    }

    // 0x1007ac0f0, 96 bytes, placed by class name
    // SceneRenderPass::GetGPUOcclusionEnabled(SceneViewData const&) const
    bool SceneRenderPass::GetGPUOcclusionEnabled(SceneViewData* param_1) {
        char cVar1;
        bool bVar2;

        cVar1 = GetOcclusionTestEnabled(this);
        if (cVar1 == '\0') {
            bVar2 = false;
        } else {
            cVar1 = param_1->GetOcclusionTestEnabled();
            bVar2 = false;
            if (((cVar1 != '\0') && (OcclusionManager::m_OcclusionEnabled != '\0')) &&
                (OcclusionManager::m_CPUDepthBufferGenerationEnabled == '\0')) {
                bVar2 = (&field_736)->operator_cast_to_bool();
            }
        }
        return bVar2;
    }

    // 0x1007ac360, 320 bytes, placed by class name
    // SceneRenderPass::InitOcclusion(render::RenderTargetsManager*, char const*, bool, unsigned int, unsigned int)
    void SceneRenderPass::InitOcclusion(RenderTargetsManager* param_1, char* param_2, bool param_3, uint param_4,
                                        uint param_5) {
        undefined1* puVar1;
        char cVar2;
        BufferedRenderTargets* pBVar4;
        undefined8 uVar5;
        unique_ptr local_50[8];
        char* local_48;
        uint local_40;
        undefined4 local_3c;
        int local_38;
        uint local_34;

        local_48 = param_2;
        cVar2 = GetGPUCullingSupported();
        if (cVar2 != '\0') {
            puVar1 = m_occlusionManager;
            pBVar4 = (BufferedRenderTargets*)puVar1;
            puVar1->Init(param_4, param_5);
            if (param_3) {
                local_38 = pBVar4->GetOptimalDepthReadbackFormat();
                local_34 = puVar1->GetBufferWidth();
                if ((local_38 != 11) && (local_38 != 21)) {
                    local_34 = local_34 >> 1;
                }
                local_40 = 4;
                local_3c = puVar1->GetBufferHeight();
                std::make_unique<render::BufferedRenderTargets, unsigned int const&, unsigned int&, unsigned int,
                                 render::Format&, char const*&>((uint*)local_50, &local_40, &local_34,
                                                                (Format*)&local_3c, (char**)&local_38);
                puVar1 = &field_736;
                std::unique_ptr<render::BufferedRenderTargets, std::default_delete<render::BufferedRenderTargets>>::
                operator=(
                    (unique_ptr<render::BufferedRenderTargets, std::default_delete<render::BufferedRenderTargets>>*)
                        puVar1,
                    local_50);
                local_50->~unique_ptr();
                pBVar4 =
                    (BufferedRenderTargets*)std::unique_ptr<render::BufferedRenderTargets,
                                                            std::default_delete<render::BufferedRenderTargets>>::
                    operator->(
                        (unique_ptr<render::BufferedRenderTargets, std::default_delete<render::BufferedRenderTargets>>*)
                            puVar1);
                cVar2 = pBVar4->Create(0, 0, 12);
                if (cVar2 == '\0') {
                    puVar1->reset(0);
                    uVar5 = logger::default_logger();
                    logger::Logger::Log(uVar5, 0, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/renderer/renderpasses/SceneRenderPass.cpp",
                                        141,
                                        "Failed to initialise GPU occlusion culling render targets - GPU occlusion "
                                        "culling will not be available.");
                }
                if (puVar1->operator_cast_to_bool()) {
                    (&field_744, 4, 0)->set_max_size();
                }
            }
        }
    }

    // 0x1007adbe0, 80 bytes, placed by class name
    // SceneRenderPass::DestroyOcclusion(render::RenderTargetsManager*)
    void SceneRenderPass::DestroyOcclusion(RenderTargetsManager* param_1) {
        undefined1* this;
        BufferedRenderTargets* this_00;

        this = &param_1[10].field_16;
        if (operator_cast_to_bool()) {
            this_00 =
                (BufferedRenderTargets*)
                    std::unique_ptr<render::BufferedRenderTargets, std::default_delete<render::BufferedRenderTargets>>::
                    operator->((unique_ptr<render::BufferedRenderTargets,
                                           std::default_delete<render::BufferedRenderTargets>>*)this);
            this_00->Destroy();
            reset(0);
        }
        (&param_1->field_16)->Destroy();
    }

    // 0x1007adc50, 16 bytes, complete-object destructor, placed by class name
    // SceneRenderPass::~SceneRenderPass(): jumps straight to the base-object destructor

    // 0x1007adc60, 16 bytes, deleting destructor, placed by class name
    // SceneRenderPass::~SceneRenderPass()
    void SceneRenderPass::~SceneRenderPass() {
        code* pcVar1;

        /* WARNING: Does not return */
        pcVar1 = (code*)invalidInstructionException();
        (*pcVar1)();
    }

    // 0x1007adc70, 16 bytes, placed by class name
    // SceneRenderPass::OnOcclusionDisabled()
    void SceneRenderPass::OnOcclusionDisabled() {
        DestroyOcclusion((RenderTargetsManager*)this);
    }

    // 0x1007adca0, 112 bytes, placed by class name
    // SceneRenderPass::GetOcclusionEnabled() const
    undefined4 SceneRenderPass::GetOcclusionEnabled() {
        char cVar1;
        bool bVar2;
        undefined4 uVar3;
        WorldmapRenderer* this_00;

        cVar1 = GetOcclusionTestEnabled(this);
        uVar3 = 0;
        if (((cVar1 != '\0') && (OcclusionManager::m_OcclusionEnabled != '\0')) &&
            (uVar3 = 1, OcclusionManager::m_CPUDepthBufferGenerationEnabled == '\0')) {
            bVar2 = (&field_736)->operator_cast_to_bool();
            if (!bVar2) {
                bVar2 = (&field_768)->operator_cast_to_bool();
                if (bVar2) {
                    this_00 =
                        (WorldmapRenderer*)std::unique_ptr<OcclusionReprojection,
                                                           std::default_delete<OcclusionReprojection>>::
                        operator->(
                            (unique_ptr<OcclusionReprojection, std::default_delete<OcclusionReprojection>>*)&field_768);
                    uVar3 = this_00->IsValid();
                } else {
                    uVar3 = 0;
                }
            }
        }
        return uVar3;
    }

    // 0x1007add70, 128 bytes, placed by class name
    // SceneRenderPass::ResolveOcclusionBuffer(RT7Core&, SceneViewData const&)
    void SceneRenderPass::ResolveOcclusionBuffer(RT7Core* param_1, SceneViewData* param_2) {
        BufferedRenderTargets* this_00;
        BufferedImageData local_48;

        if (GetGPUOcclusionEnabled(this, param_2) != '\0') {
            new (&local_48) render::BufferedImageData();
            this_00 =
                (BufferedRenderTargets*)
                    std::unique_ptr<render::BufferedRenderTargets, std::default_delete<render::BufferedRenderTargets>>::
                    operator->((unique_ptr<render::BufferedRenderTargets,
                                           std::default_delete<render::BufferedRenderTargets>>*)&field_736);
            this_00->MapColourTargetData(&local_48);
            if (local_48._8_8_ != 0) {
                (m_occlusionManager, local_48._8_8_, (undefined4)local_48.field_40)->LoadPackedDepthBuffer();
            }
            local_48.~BufferedImageData();
        }
    }

    // 0x1007adf10, 608 bytes, placed by class name
    // SceneRenderPass::UpdateMaterialDistanceKeys(DrawableQueue&, DrawableGroupType)
    void SceneRenderPass::UpdateMaterialDistanceKeys(DrawableQueue* param_1, undefined4 param_3) {
        ushort uVar1;
        undefined4 uVar3;
        int iVar4;
        CommandLine* this_00;
        short* psVar5;
        ushort* puVar6;
        float* pfVar7;
        ulong uVar8;
        Array<unsigned short, BucketAllocatorEASTL> local_b0[24];
        Array<float, BucketAllocatorEASTL> local_98[24];
        float local_68[12];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar3 = GetPos();
        this_00 = (CommandLine*)param_1->GetDrawableGroup(uVar3, param_3);
        iVar4 = this_00->GetPos();
        if (iVar4 != 2) {
            iVar4 = this_00->GetPos();
            if (iVar4 != 3)
                goto LAB_1007ae102;
        }
        if (*(int*)&this_00->field_0 == 0) {
            uVar1 = Shader::GetShaderCount();
            local_68[0] = 0.0;
            Array<float, BucketAllocatorEASTL>::Array(local_98, (ulong)uVar1, local_68);
            uVar1 = Shader::GetShaderCount();
            local_68[0] = (float)((uint)local_68[0] & 4294901760);
            Array<unsigned short, BucketAllocatorEASTL>::Array(local_b0, (ulong)uVar1, (ushort*)local_68);
            uVar3 = ((SceneRenderPass*)this)->GetPos();
            std::function<void(DrawableElementInfo&)>::function<
                SceneRenderPass::UpdateMaterialDistanceKeys(DrawableQueue&, DrawableGroupType)::__4, void>(
                local_68, local_98, local_b0);
            param_1->Iter(param_3, uVar3, local_68);
            std::function<void(DrawableElementInfo&)>::~function((function<void(DrawableElementInfo&)>*)local_68);
            if (Shader::GetShaderCount() != 0) {
                uVar8 = 0;
                do {
                    psVar5 = (short*)Array<unsigned short, BucketAllocatorEASTL>::operator[](local_b0, uVar8);
                    if (*psVar5 != 0) {
                        puVar6 = (ushort*)Array<unsigned short, BucketAllocatorEASTL>::operator[](local_b0, uVar8);
                        uVar1 = *puVar6;
                        pfVar7 = (float*)Array<float, BucketAllocatorEASTL>::operator[](local_98, uVar8);
                        *pfVar7 = *pfVar7 / (float)uVar1;
                    }
                    uVar8 = uVar8 + 1;
                    uVar1 = Shader::GetShaderCount();
                } while (uVar8 < uVar1);
            }
            iVar4 = this_00->GetPos();
            uVar3 = ((SceneRenderPass*)this)->GetPos();
            if (iVar4 == 2) {
                std::function<void(DrawableElementInfo&)>::function<
                    SceneRenderPass::UpdateMaterialDistanceKeys(DrawableQueue&, DrawableGroupType)::__5, void>(
                    local_68, local_98);
                param_1->Iter(param_3, uVar3, local_68);
            } else {
                std::function<void(DrawableElementInfo&)>::function<
                    SceneRenderPass::UpdateMaterialDistanceKeys(DrawableQueue&, DrawableGroupType)::__6, void>(
                    local_68, local_98);
                param_1->Iter(param_3, uVar3, local_68);
            }
            std::function<void(DrawableElementInfo&)>::~function((function<void(DrawableElementInfo&)>*)local_68);
            *(byte*)&this_00->field_0 = *(byte*)&this_00->field_0 | 1;
            local_b0->~Array();
            local_98->~Array();
        }
    LAB_1007ae102:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007ae390, 112 bytes, placed by class name
    // SceneRenderPass::OnOcclusionEnabled()
    void SceneRenderPass::OnOcclusionEnabled() {
        char* pcVar1;
        eastl::string local_38[32];

        (*(code*)field_0[9])(local_38);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        InitOcclusion(this, (RenderTargetsManager*)(SceneRenderPass*)this, pcVar1, true, 96, 54);
        eastl::string::~basic_string(local_38);
    }

    // 0x1007c06b0, 48 bytes, placed by class name
    // SceneRenderPass::RenderOccludedDrawableGroup(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&, DrawableQueue&, DrawableGroupType, bool, OcclusionManager*, float)::$_2::operator()(math::OBB const&, SceneViewData const&) const
    /* SceneRenderPass::RenderOccludedDrawableGroup(RT7Core&,
   render::DrawCallState const&, EffectManager&, SceneViewData
   const&, DrawableQueue&, DrawableGroupType, bool,
   OcclusionManager*, float)::$_2::TEMPNAMEPLACEHOLDERVALUE(math::OBB const&,
   SceneViewData const&) const */

    void SceneRenderPass::RenderOccludedDrawableGroup(RT7Core&, render::DrawCallState_const&, EffectManager&,
                                                      SceneViewData_const&, DrawableQueue&, DrawableGroupType, bool,
                                                      OcclusionManager*,
                                                      float)::$_2::operator()(OBB* param_1, SceneViewData* param_2) {
        (*field_0, param_1, param_2, (SceneViewData*)*field_8, *field_16)->OBBVisible();
    }

    // 0x1007c1020, 48 bytes, placed by class name
    // SceneRenderPass::RenderOccludedDrawableGroup(RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&, DrawableQueue&, DrawableGroupType, bool, OcclusionManager*, float)::$_3::operator()(math::OBB const&, SceneViewData const&) const
    /* SceneRenderPass::RenderOccludedDrawableGroup(RT7Core&,
   render::DrawCallState const&, EffectManager&, SceneViewData
   const&, DrawableQueue&, DrawableGroupType, bool,
   OcclusionManager*, float)::$_3::TEMPNAMEPLACEHOLDERVALUE(math::OBB const&,
   SceneViewData const&) const */

    void SceneRenderPass::RenderOccludedDrawableGroup(RT7Core&, render::DrawCallState_const&, EffectManager&,
                                                      SceneViewData_const&, DrawableQueue&, DrawableGroupType, bool,
                                                      OcclusionManager*,
                                                      float)::$_3::operator()(OBB* param_1, SceneViewData* param_2) {
        (*field_0, param_1, param_2, (SceneViewData*)*field_8, *field_16)->OBBVisible();
    }

    // 0x1007c1ce0, 112 bytes, placed by class name
    // SceneRenderPass::UpdateMaterialDistanceKeys(DrawableQueue&, DrawableGroupType)::$_4::operator()(DrawableElementInfo const&) const
    /* SceneRenderPass::UpdateMaterialDistanceKeys(DrawableQueue&,
   DrawableGroupType)::$_4::TEMPNAMEPLACEHOLDERVALUE(DrawableElementInfo
   const&) const */

    void SceneRenderPass::UpdateMaterialDistanceKeys(DrawableQueue&,
                                                     DrawableGroupType)::$_4::operator()(DrawableElementInfo* param_1) {
        float fVar1;
        long lVar2;
        uint uVar3;
        float* pfVar4;
        short* psVar5;

        uVar3 = UserKeyUtils::GetUserBits(param_1->field_0);
        lVar2 = std::unique_ptr<DrawableElement, DrawableElementDeleter>::operator->(
            (unique_ptr<DrawableElement, DrawableElementDeleter>*)&param_1->field_8);
        fVar1 = *(float*)(lVar2 + 100);
        pfVar4 = (float*)Array<float, BucketAllocatorEASTL>::operator[](*(Array<float, BucketAllocatorEASTL>**)this,
                                                                        (ulong)(uVar3 & 65535));
        *pfVar4 = fVar1 + *pfVar4;
        psVar5 = (short*)Array<unsigned short, BucketAllocatorEASTL>::operator[](
            *(Array<unsigned short, BucketAllocatorEASTL>**)(this + 8), (ulong)(uVar3 & 65535));
        *psVar5 = *psVar5 + 1;
    }

    // 0x1007c26b0, 128 bytes, placed by class name
    // SceneRenderPass::UpdateMaterialDistanceKeys(DrawableQueue&, DrawableGroupType)::$_5::operator()(DrawableElementInfo&) const
    /* SceneRenderPass::UpdateMaterialDistanceKeys(DrawableQueue&,
   DrawableGroupType)::$_5::TEMPNAMEPLACEHOLDERVALUE(DrawableElementInfo&)
   const */

    void SceneRenderPass::UpdateMaterialDistanceKeys(DrawableQueue&,
                                                     DrawableGroupType)::$_5::operator()(DrawableElementInfo* param_1) {
        ushort uVar1;
        float* pfVar2;
        long lVar3;
        ulonglong uVar5;

        uVar1 = UserKeyUtils::GetUserBits(param_1->field_0);
        pfVar2 = (float*)Array<float, BucketAllocatorEASTL>::operator[](*(Array<float, BucketAllocatorEASTL>**)this,
                                                                        (ulong)uVar1);
        if (*pfVar2 <= 0.0) {
            uVar5 = 0;
        } else {
            pfVar2 = (float*)Array<float, BucketAllocatorEASTL>::operator[](*(Array<float, BucketAllocatorEASTL>**)this,
                                                                            (ulong)uVar1);
            lVar3 = (long)(*pfVar2 + 0.5);
            uVar5 =
                (ulonglong)(((uint)lVar3 | (uint)(long)((*pfVar2 + 0.5) - 9.223372e+18) & (uint)(lVar3 >> 63)) & 65535);
        }
        param_1->field_0 = UserKeyUtils::SetUserBits(param_1->field_0, uVar5);
    }

    // 0x1007c3040, 144 bytes, placed by class name
    // SceneRenderPass::UpdateMaterialDistanceKeys(DrawableQueue&, DrawableGroupType)::$_6::operator()(DrawableElementInfo&) const
    /* SceneRenderPass::UpdateMaterialDistanceKeys(DrawableQueue&,
   DrawableGroupType)::$_6::TEMPNAMEPLACEHOLDERVALUE(DrawableElementInfo&)
   const */

    void SceneRenderPass::UpdateMaterialDistanceKeys(DrawableQueue&,
                                                     DrawableGroupType)::$_6::operator()(DrawableElementInfo* param_1) {
        ushort uVar1;
        float* pfVar2;
        long lVar3;
        ulonglong uVar5;

        uVar1 = UserKeyUtils::GetUserBits(param_1->field_0);
        pfVar2 = (float*)Array<float, BucketAllocatorEASTL>::operator[](*(Array<float, BucketAllocatorEASTL>**)this,
                                                                        (ulong)uVar1);
        uVar5 = 65535;
        if (0.0 < *pfVar2) {
            pfVar2 = (float*)Array<float, BucketAllocatorEASTL>::operator[](*(Array<float, BucketAllocatorEASTL>**)this,
                                                                            (ulong)uVar1);
            lVar3 = (long)(*pfVar2 + 0.5);
            uVar5 =
                (ulonglong)(65535 - ((uint)lVar3 | (uint)(long)((*pfVar2 + 0.5) - 9.223372e+18) & (uint)(lVar3 >> 63)) &
                            65535);
        }
        param_1->field_0 = UserKeyUtils::SetUserBits(param_1->field_0, uVar5);
    }

} // namespace jag::graphics
