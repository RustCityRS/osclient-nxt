// libs/graphics/runetek7/renderer/renderpasses/SceneRenderPass.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "SceneRenderPass.h"

namespace jag::graphics {
    // 0x1000b9950: SceneRenderPass::GetOcclusionManager() has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x1000b9950: SceneRenderPass::GetOcclusionManager() const has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x1007a42e0
    void SceneRenderPass::ClearRenderTargets(render::RenderContext& renderContext,
                                             const render::RenderTargetData& renderTargetData,
                                             const eastl::fixed_vector<render::Viewport, 2ul>& viewports) {
        RenderTargets* renderTargets;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* this_01;
        uint64_t* puVar1;
        int* piVar2;
        long lVar3;
        Vector4T<float>* vector4;
        BlendState* blendState;
        unsigned long local_38;

        bool arg1 = false;
        Viewport* viewport = &viewports[0];
        if (renderTargetData.field_0 == nullptr) {
            local_38 = 1;
        } else {
            local_38 = ((vector<eastl::pair<int, int>>*)renderTargetData.field_0->GetColourTargetTextures())->size();
            this_01 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                          renderTargetData.field_0->GetColourTargetTextures();
            puVar1 = (uint64_t*)(*this_01)[0];
            piVar2 = (int*)(*puVar1)->second();
            if (((viewport->field_0 == 0 && viewport->field_4 == 0) && (viewport->field_8 == *piVar2)) &&
                (viewport->field_12 == piVar2[1])) {
                arg1 = false;
            } else {
                arg1 = true;
            }
        }
        renderContext.SetScissorRectangle(arg1, *viewport);
        auto viewport_00 = viewports.HeapBeginPtr();
        unsigned long arg2 = viewports.size();
        RenderContext* this_02 = renderContext;
        renderContext.SetViewports(viewport_00, arg2);
        if ((renderTargetData.field_48 & 1) != 0) {
            lVar3 = this_02->Instance();
            blendState = (BlendState*)(lVar3 + 1524);
            renderContext.SetBlendState(blendState);
            renderTargets = renderTargetData.field_0;
            vector4 = &renderTargetData.field_16[(unsigned long)blendState];
            this_02 = renderContext;
            renderContext.ClearRenderTargets(renderTargets, vector4, local_38);
        }
        if ((renderTargetData.field_48 & 6) != 0) {
            lVar3 = this_02->Instance();
            renderContext.SetDepthStencilState((lVar3 + 720));
            renderContext.ClearDepthStencilTarget(renderTargetData.field_0, renderTargetData.field_52,
                                                  renderTargetData.field_56, renderTargetData.field_48);
        }
        renderContext.SetScissorRectangle(false, *viewport);
    }

    // 0x1007a5f80
    SceneRenderPass::SceneRenderPass(RenderPassType renderPassType, render::RenderTargetsManager* renderTargetsManager,
                                     ThreadPool* threadPool)
        : RenderPass(renderPassType), m_occlusionManager(threadPool) {
        field_736.unique_ptr<true, void>();
        new (&field_744) Array<SceneViewData>();
        field_768.unique_ptr<true, void>();
        field_776 = '\0';
        field_777 = true;
        field_778 = 1;
        field_780 = 0;
        field_784 = renderTargetsManager;
        field_792 = 0;
    }

    // 0x1007a6040
    void SceneRenderPass::SetOcclusionTestEnabled(bool arg1) {
        if ((field_776 == '\0') && (arg1)) {
            field_776 = '\x01';
            OnOcclusionEnabled();
            return;
        }
        if ((field_776 != '\0') && (!arg1)) {
            field_776 = '\0';
            OnOcclusionDisabled();
        }
    }

    // 0x1007a6080
    SceneRenderPass::~SceneRenderPass() {
        DestroyRenderingResources();
        DestroyOcclusion((RenderTargetsManager*)this);
        field_768.~unique_ptr();
        field_744.~Array();
        field_736.~unique_ptr();
        m_occlusionManager->~OcclusionManager();
    }

    // 0x1007a6d10
    uint64_t SceneRenderPass::GetCPUOcclusionEnabled(const SceneViewData& sceneViewData) const {
        uint64_t uVar2;

        bool cVar1 = GetOcclusionTestEnabled();
        if (!cVar1) {
            uVar2 = 0;
        } else {
            cVar1 = sceneViewData.GetOcclusionTestEnabled();
            uVar2 = 0;
            if ((cVar1) && (OcclusionManager::m_OcclusionEnabled != '\0')) {
                uVar2 = (((uint64_t)17021909 << 8) |
                         (uint8_t)(OcclusionManager::m_CPUDepthBufferGenerationEnabled != '\0'));
            }
        }
        return uVar2;
    }

    // 0x1007a6d60
    uint64_t SceneRenderPass::GetOcclusionEnabled(const SceneViewData& sceneViewData) const {
        uint64_t uVar2;

        if (GetOcclusionEnabled() == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = sceneViewData.GetOcclusionTestEnabled();
        }
        return uVar2;
    }

    // 0x1007a6d90
    unsigned long SceneRenderPass::IsViewChangeValidForOcclusion(const SceneViewData& sceneViewData) {
        unsigned int uVar1;
        unsigned int uVar3;
        GraphicsApp* pGVar5;
        uint64_t unaff_RBX;
        unsigned long uVar6;
        unsigned int uVar7;
        float fVar8;
        float extraout_XMM0_Db;
        float extraout_XMM0_Db_00;

        if (OcclusionManager::m_disableOnVerticalCameraRotation == '\0') {
            uVar6 = (((uint64_t)((int64_t)((unsigned long)unaff_RBX >> 8)) << 8) | (uint8_t)1);
        } else {
            if (GetOcclusionEnabled(sceneViewData) == '\0') {
                uVar6 = 0;
            } else {
                uVar1 = field_792;
                pGVar5 = (GraphicsApp*)GraphicsApp::Instance();
                uVar3 = pGVar5->GetFrameCount();
                uVar7 = 0;
                uVar6 = 0;
                if (uVar1 <= uVar3) {
                    sceneViewData.GetViewVector();
                    ((ViewTransforms*)GetOcclusionSceneViewData())->GetViewVector();
                    fVar8 = (float)::abs(extraout_XMM0_Db - extraout_XMM0_Db_00);
                    uVar6 = (unsigned long)(fVar8 < 0.07);
                    if (fVar8 >= 0.07) {
                        pGVar5 = (GraphicsApp*)GraphicsApp::Instance();
                        uVar7 = pGVar5->GetFrameCount() + 5;
                    }
                    field_792 = uVar7;
                }
            }
        }
        return uVar6 & 4294967295;
    }

    // 0x1007a6e60
    void SceneRenderPass::RenderOccludedDrawableGroup(RT7Core& rt7Core, const render::DrawCallState& drawCallState,
                                                      EffectManager& effectManager, const SceneViewData& sceneViewData,
                                                      DrawableQueue& drawableQueue, DrawableGroupType drawableGroupType,
                                                      bool arg7, OcclusionManager* occlusionManager, float arg9) {
        bool cVar1;
        function<bool(math::OBB const&, SceneViewData const&)> local_68[48];
        long local_38;

        if (occlusionManager == nullptr) {
            occlusionManager = (OcclusionManager*)m_occlusionManager;
        }
        UpdateMaterialDistanceKeys(drawableQueue, drawableGroupType);
        auto RVar2 = GetPos();
        __3* arg1 = (__3*)(unsigned long)drawableGroupType;
        drawableQueue.SortGroup<SortKeyLessThan>(drawableGroupType, RVar2);
        if ((arg7) && (occlusionManager != nullptr)) {
            cVar1 = occlusionManager->DepthBufferCanOcclude();
            if (cVar1) {
                GetOcclusionSceneViewData();
                cVar1 = RenderPass::m_useAsyncRasterisation;
                RVar2 = GetPos();
                if (!cVar1) {
                    std::function<bool(math::OBB const&, SceneViewData const&)>::function<
                        SceneRenderPass::RenderOccludedDrawableGroup(
                            RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&,
                            DrawableQueue&, DrawableGroupType, bool, OcclusionManager*, float)::__3,
                        void>(local_68, arg1);
                    drawableQueue.RenderGroup(rt7Core, drawCallState, sceneViewData, drawableGroupType, RVar2,
                                              effectManager, *local_68, sceneViewData);
                } else {
                    std::function<bool(math::OBB const&, SceneViewData const&)>::function<
                        SceneRenderPass::RenderOccludedDrawableGroup(
                            RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&,
                            DrawableQueue&, DrawableGroupType, bool, OcclusionManager*, float)::__2,
                        void>(local_68, (__2*)arg1);
                    drawableQueue.RenderGroupWithAsyncTest(rt7Core, drawCallState, sceneViewData, drawableGroupType,
                                                           RVar2, effectManager, *local_68, sceneViewData);
                }
                goto LAB_1007a7042;
            }
        }
        unsigned int uVar3 = GetPos();
        DrawableQueue::RenderGroup(drawableQueue, rt7Core, drawCallState, (DrawableGroupType)sceneViewData,
                                   drawableGroupType, *((EffectManager*)(unsigned long)uVar3));
    LAB_1007a7042:
    }

    // 0x1007a72e0
    void SceneRenderPass::DownsampleGPUDepthBuffer(RT7Core& rt7Core, EffectManager& effectManager,
                                                   const SceneViewData& sceneViewData, DrawableQueue& drawableQueue,
                                                   const render::Texture* texture, bool arg6) {
        unique_ptr<render::BufferedRenderTargets>* unique_ptr;
        int arg3;
        unsigned int uVar2;
        RT7Core* rt7Core_00;
        BufferedRenderTargets* pBVar3;
        RenderTargets* pRVar4;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar5;
        uint64_t* puVar6;
        int* piVar7;
        long lVar8;
        OutputMergerState* pOVar9;
        SceneViewData* this_00;
        uint64_t in_register_00000089;
        bool in_stack_00000008;
        uint8_t local_98[24];
        uint8_t local_80[72];

        local_80._64_8_ = effectManager;
        if ((Texture*)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg6) == nullptr) {
            LogAssert("srcDepthTexture",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "renderer/renderpasses/SceneRenderPass.cpp",
                      324, nullptr);
        }
        if (GetGPUOcclusionEnabled((SceneRenderPass*)rt7Core, (SceneViewData*)drawableQueue) != '\0') {
            local_80._48_8_ = texture;
            local_80._56_8_ = sceneViewData;
            rt7Core_00 = (RT7Core*)local_80._64_8_->GetDepthDownsamplePass();
            rt7Core_00->SetSSAOContext((Texture*)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg6));
            rt7Core_00->SetCombineWithPrevious(in_stack_00000008);
            new ((local_98 + 24)) render::DrawCallState();
            unique_ptr = (unique_ptr<render::BufferedRenderTargets>*)(rt7Core.m_postProcessManager + 288);
            pBVar3 = (BufferedRenderTargets*)(*unique_ptr).operator->();
            pRVar4 = pBVar3->GetWriteRT();
            pvVar5 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         pRVar4->GetColourTargetTextures();
            puVar6 = (uint64_t*)(*pvVar5)[0];
            piVar7 = (int*)(*puVar6)->second();
            arg3 = *piVar7;
            pBVar3 = (BufferedRenderTargets*)(*unique_ptr).operator->();
            pRVar4 = pBVar3->GetWriteRT();
            pvVar5 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         pRVar4->GetColourTargetTextures();
            puVar6 = (uint64_t*)(*pvVar5)[0];
            lVar8 = (*puVar6)->second();
            new (local_98) render::Viewport(0, 0, arg3, *(int*)(lVar8 + 4), 0.0, 1.0);
            pOVar9 = ((local_98 + 24))->GetOutputMergerState();
            pOVar9->SetViewports(local_98, 1);
            pOVar9 = ((local_98 + 24))->GetOutputMergerState();
            pBVar3 = (BufferedRenderTargets*)(*unique_ptr).operator->();
            pRVar4 = pBVar3->GetWriteRT();
            pOVar9->SetRenderTargets(pRVar4);
            (*rt7Core_00->_vptr[1]._dtor)(rt7Core_00, (DrawCallState*)local_80._64_8_, (EffectManager*)(local_98 + 24),
                                          (SceneViewData*)local_80._56_8_, drawableQueue);
            pBVar3 = (BufferedRenderTargets*)(*unique_ptr).operator->();
            uVar2 = pBVar3->GetWriteIndex();
            this_00 = (SceneViewData*)(*((rt7Core.m_postProcessManager + 296)))[(unsigned long)uVar2];
            *this_00 = drawableQueue;
            pBVar3 = (BufferedRenderTargets*)(*unique_ptr).operator->();
            pBVar3->WriteFinished();
            ((local_98 + 24))->~DrawCallState();
        }
    }

    // 0x1007a84a0
    void SceneRenderPass::RenderOccludedDrawableGroup(
        RT7Core& rt7Core, const render::DrawCallState& drawCallState, EffectManager& effectManager,
        const SceneViewData& sceneViewData, DrawableQueue& drawableQueue, DrawableGroupType drawableGroupType,
        RenderPassType renderPassType, bool arg8,
        std::function<bool(Drawable*, std::unique_ptr<DrawableElement, DrawableElementDeleter> const&)> const&
            callback) {
        RenderPassType RVar2;

        UpdateMaterialDistanceKeys(drawableQueue, drawableGroupType);
        bool cVar1 = RenderPass::m_useAsyncRasterisation;
        if (arg8) {
            RVar2 = GetPos();
            if (!cVar1) {
                drawableQueue.FilterMulti(drawableGroupType, RVar2, renderPassType, callback);
            } else {
                drawableQueue.FilterMultiAsync(drawableGroupType, RVar2, renderPassType, callback);
            }
        }
        RVar2 = GetPos();
        drawableQueue.SortGroup<SortKeyLessThan>(drawableGroupType, RVar2);
        unsigned int uVar3 = GetPos();
        DrawableQueue::RenderGroup(drawableQueue, rt7Core, drawCallState, (DrawableGroupType)sceneViewData,
                                   drawableGroupType, *((EffectManager*)(unsigned long)uVar3));
    }

    // 0x1007a8ed0
    uint64_t SceneRenderPass::GetOcclusionEnabledIgnoringLocalBuffer(const SceneViewData& sceneViewData) const {
        bool cVar1 = GetOcclusionTestEnabled();
        uint64_t uVar2 = 0;
        if ((cVar1) && (OcclusionManager::m_OcclusionEnabled != '\0')) {
            uVar2 = sceneViewData.GetOcclusionTestEnabled();
        }
        return uVar2;
    }

    // 0x1007aa170
    void SceneRenderPass::PreparePass(RT7Core& rt7Core, EffectManager& effectManager,
                                      const SceneViewData& sceneViewData, DrawableQueue& drawableQueue) {
        uint8_t bVar2;
        RenderPassType renderPassType;
        int iVar3;
        SceneRenderPass* pSVar4;
        OcclusionManager* occlusionManager;
        NXTPixToolkit* this_00;
        ThreadPool* threadPool;
        SceneViewData* sceneViewData1;
        SceneViewData* sceneViewData2;
        DrawableGroupType drawableGroupType;
        RT7Core* rt7Core_00;
        int iVar6;

        m_occlusionManager->UpdateStats();
        bool cVar1 = sceneViewData.GetOcclusionTestEnabled();
        if (cVar1) {
            drawableGroupType = 0;
            iVar6 = 0;
            do {
                renderPassType = GetPos();
                rt7Core_00 = (RT7Core*)(unsigned long)drawableGroupType;
                iVar3 = drawableQueue.GetGroupSize(drawableGroupType, renderPassType);
                iVar6 = iVar6 + iVar3;
                drawableGroupType = drawableGroupType + 1;
            } while (drawableGroupType != 13);
            field_777 = field_780 <= iVar6;
            ResolveOcclusionBuffer(*rt7Core_00, sceneViewData);
            cVar1 = (&field_768)->operator_cast_to_bool();
            if (cVar1) {
                pSVar4 = (SceneRenderPass*)rt7Core.GetForwardOcclusionRenderPass();
                cVar1 = GetGPUOcclusionEnabled(pSVar4, sceneViewData);
                if (((!cVar1) || (cVar1 = GetOcclusionTestEnabled(), !cVar1)) || (field_778 == '\0')) {
                    field_777 = false;
                } else {
                    occlusionManager = (OcclusionManager*)field_768.operator->();
                    this_00 = (NXTPixToolkit*)rt7Core.GetForwardOcclusionRenderPass();
                    threadPool = (ThreadPool*)this_00->GetScreen();
                    sceneViewData1 = (SceneViewData*)rt7Core.GetImmediateThreadPool();
                    pSVar4 = (SceneRenderPass*)rt7Core.GetForwardOcclusionRenderPass();
                    sceneViewData2 = (SceneViewData*)GetOcclusionSceneViewData(pSVar4);
                    bVar2 = GetGPUOcclusionEnabled(sceneViewData);
                    if (field_744.end() == 1) {
                        field_744.data();
                    }
                    OcclusionReprojection::ReprojectOcclusionBuffer(*occlusionManager, *threadPool, *sceneViewData1,
                                                                    *sceneViewData2, (uint8_t)sceneViewData,
                                                                    (SceneViewData*)(unsigned long)bVar2);
                }
            }
        }
    }

    // 0x1007aac50
    void SceneRenderPass::CreateRenderingResources() {
        if (field_776 != '\0') {
            OnOcclusionEnabled();
        }
    }

    // 0x1007aac90
    void SceneRenderPass::DestroyRenderingResources() {
        OnOcclusionDisabled();
    }

    // 0x1007ac0f0
    uint64_t SceneRenderPass::GetGPUOcclusionEnabled(const SceneViewData& sceneViewData) const {
        uint64_t uVar2;

        bool cVar1 = GetOcclusionTestEnabled();
        if (!cVar1) {
            uVar2 = 0;
        } else {
            cVar1 = sceneViewData.GetOcclusionTestEnabled();
            uVar2 = 0;
            if (((cVar1) && (OcclusionManager::m_OcclusionEnabled != '\0')) &&
                (OcclusionManager::m_CPUDepthBufferGenerationEnabled == '\0')) {
                uVar2 = (&field_736)->operator_cast_to_bool();
            }
        }
        return uVar2;
    }

    // 0x1007ac360
    void SceneRenderPass::InitOcclusion(render::RenderTargetsManager* renderTargetsManager, const char* str, bool arg3,
                                        unsigned int arg4, unsigned int arg5) {
        uint8_t* puVar1;
        BufferedRenderTargets* pBVar3;
        ReturnValue local_50;
        unsigned int local_3c;
        Format local_38;
        unsigned int local_34;

        if (GetGPUCullingSupported()) {
            puVar1 = m_occlusionManager;
            pBVar3 = (BufferedRenderTargets*)puVar1;
            puVar1->Init(arg4, arg5);
            if (arg3) {
                local_38 = pBVar3->GetOptimalDepthReadbackFormat();
                local_34 = puVar1->GetBufferWidth();
                if ((local_38 != 11) && (local_38 != 21)) {
                    local_34 = local_34 >> 1;
                }
                local_3c = puVar1->GetBufferHeight();
                local_50 =
                    std::make_unique<render::BufferedRenderTargets, unsigned int const&, unsigned int&, unsigned int,
                                     render::Format&, char const*&>(4, local_34, local_3c, local_38, str);
                puVar1 = &field_736;
                *puVar1 = local_50;
                pBVar3 = (BufferedRenderTargets*)(*puVar1).operator->();
                if (!(pBVar3->Create(0, 0, 12))) {
                    puVar1->reset(nullptr);
                    (logger::default_logger())
                        ->Log(false, 2,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "renderer/renderpasses/SceneRenderPass.cpp",
                              141,
                              "Failed to initialise GPU occlusion culling render targets - GPU occlusion culling will "
                              "not be available.");
                }
                if (puVar1->operator_cast_to_bool()) {
                    field_744.set_max_size(4, 0);
                }
            }
        }
    }

    // 0x1007adbe0
    void SceneRenderPass::DestroyOcclusion(render::RenderTargetsManager* renderTargetsManager) {
        uint8_t* uint8_t = &renderTargetsManager[10].field_16;
        if (uint8_t->operator_cast_to_bool() != '\0') {
            ((BufferedRenderTargets*)(*uint8_t).operator->())->Destroy();
            uint8_t->reset(nullptr);
        }
        renderTargetsManager->field_16.Destroy();
    }

    // 0x1007adc70
    void SceneRenderPass::OnOcclusionDisabled() {
        DestroyOcclusion((RenderTargetsManager*)this);
    }

    // 0x1007adca0
    uint32_t SceneRenderPass::GetOcclusionEnabled() const {
        bool cVar1 = GetOcclusionTestEnabled();
        uint32_t uVar2 = 0;
        if (((cVar1) && (OcclusionManager::m_OcclusionEnabled != '\0')) &&
            (uVar2 = 1, OcclusionManager::m_CPUDepthBufferGenerationEnabled == '\0')) {
            cVar1 = (&field_736)->operator_cast_to_bool();
            if (!cVar1) {
                cVar1 = (&field_768)->operator_cast_to_bool();
                if (!cVar1) {
                    uVar2 = 0;
                } else {
                    uVar2 = ((WorldmapRenderer*)field_768.operator->())->IsValid();
                }
            }
        }
        return uVar2;
    }

    // 0x1007add70
    void SceneRenderPass::ResolveOcclusionBuffer(RT7Core& rt7Core, const SceneViewData& sceneViewData) {
        uint8_t local_48[40];
        Format local_20;

        if (GetGPUOcclusionEnabled(sceneViewData) != '\0') {
            new (local_48) render::BufferedImageData();
            ((BufferedRenderTargets*)field_736.operator->())->MapColourTargetData(*local_48);
            if ((unsigned char*)local_48._8_8_ != nullptr) {
                m_occlusionManager->LoadPackedDepthBuffer(local_48._8_8_, local_20);
            }
        }
    }

    // 0x1007adf10
    void SceneRenderPass::UpdateMaterialDistanceKeys(DrawableQueue& drawableQueue,
                                                     DrawableGroupType drawableGroupType) {
        unsigned short uVar1;
        short* psVar5;
        unsigned short* puVar6;
        float* pfVar7;
        unsigned long arg1;
        Array<unsigned short, BucketAllocatorEASTL> local_b0;
        Array<float, BucketAllocatorEASTL> local_98;
        float local_68[12];

        auto RVar3 = GetPos();
        auto this_00 = drawableQueue.GetDrawableGroup(RVar3, drawableGroupType);
        int iVar4 = this_00->GetPos();
        if (iVar4 != 2) {
            iVar4 = this_00->GetPos();
            if (iVar4 != 3)
                goto LAB_1007ae102;
        }
        if (*(int*)&this_00->_vptr == 0) {
            uVar1 = Shader::GetShaderCount();
            local_68[0] = 0.0;
            local_98 = Array<float, BucketAllocatorEASTL>((unsigned long)uVar1, *local_68);
            uVar1 = Shader::GetShaderCount();
            local_68[0] = (float)((unsigned int)local_68[0] & 4294901760);
            new (&local_b0) Array<unsigned short, BucketAllocatorEASTL>((unsigned long)uVar1, *local_68);
            RVar3 = GetPos();
            std::function<void(DrawableElementInfo&)>::function<
                SceneRenderPass::UpdateMaterialDistanceKeys(DrawableQueue&, DrawableGroupType)::__4, void>(
                (function<void(DrawableElementInfo&)>*)local_68, &local_98);
            drawableQueue.Iter(drawableGroupType, RVar3, *local_68);
            if (Shader::GetShaderCount() != 0) {
                arg1 = 0;
                do {
                    psVar5 = (short*)local_b0[arg1];
                    if (*psVar5 != 0) {
                        puVar6 = &local_b0[arg1];
                        uVar1 = *puVar6;
                        pfVar7 = &local_98[arg1];
                        *pfVar7 = *pfVar7 / (float)uVar1;
                    }
                    arg1 = arg1 + 1;
                    uVar1 = Shader::GetShaderCount();
                } while (arg1 < uVar1);
            }
            iVar4 = this_00->GetPos();
            RVar3 = GetPos();
            if (iVar4 == 2) {
                std::function<void(DrawableElementInfo&)>::function<
                    SceneRenderPass::UpdateMaterialDistanceKeys(DrawableQueue&, DrawableGroupType)::__5, void>(
                    (function<void(DrawableElementInfo&)>*)local_68, &local_98);
                drawableQueue.Iter(drawableGroupType, RVar3, *local_68);
            } else {
                std::function<void(DrawableElementInfo&)>::function<
                    SceneRenderPass::UpdateMaterialDistanceKeys(DrawableQueue&, DrawableGroupType)::__6, void>(
                    (function<void(DrawableElementInfo&)>*)local_68, &local_98);
                drawableQueue.Iter(drawableGroupType, RVar3, *local_68);
            }
            *(uint8_t*)&this_00->_vptr = *(uint8_t*)&this_00->_vptr | 1;
        }
    LAB_1007ae102:
    }

    // 0x1007ae390
    void SceneRenderPass::OnOcclusionEnabled() {
        eastl::string local_38;

        slot9(&local_38);
        char* str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        InitOcclusion(this, str, true, 96, 54);
    }

    // 0x1007c06b0
    void SceneRenderPass::RenderOccludedDrawableGroup(
        RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&, DrawableQueue&, DrawableGroupType,
        bool, OcclusionManager*,
        float)::$_2::operator()(const math::OBB& obb, const SceneViewData& sceneViewData) const {
        (*field_0)->OBBVisible(obb, sceneViewData, *field_8, *field_16);
    }

    // 0x1007c1020
    void SceneRenderPass::RenderOccludedDrawableGroup(
        RT7Core&, render::DrawCallState const&, EffectManager&, SceneViewData const&, DrawableQueue&, DrawableGroupType,
        bool, OcclusionManager*,
        float)::$_3::operator()(const math::OBB& obb, const SceneViewData& sceneViewData) const {
        (*field_0)->OBBVisible(obb, sceneViewData, *field_8, *field_16);
    }

    // 0x1007c1ce0
    void SceneRenderPass::UpdateMaterialDistanceKeys(DrawableQueue&, DrawableGroupType)::$_4::operator()(
        const DrawableElementInfo& drawableElementInfo) const {
        unsigned int uVar3 = UserKeyUtils::GetUserBits((unsigned long long)drawableElementInfo.field_0);
        long lVar2 = drawableElementInfo.field_8.operator->();
        float fVar1 = *(float*)(lVar2 + 100);
        float* pfVar4 = (float*)(*(*(Array<float, BucketAllocatorEASTL>**)this))[(unsigned long)(uVar3 & 65535)];
        *pfVar4 = fVar1 + *pfVar4;
        short* psVar5 =
            (short*)(*(*(Array<unsigned short, BucketAllocatorEASTL>**)(this + 8)))[(unsigned long)(uVar3 & 65535)];
        *psVar5 = *psVar5 + 1;
    }

    // 0x1007c26b0
    void SceneRenderPass::UpdateMaterialDistanceKeys(DrawableQueue&, DrawableGroupType)::$_5::operator()(
        DrawableElementInfo& drawableElementInfo) const {
        long lVar3;
        unsigned long long arg2;

        unsigned short uVar1 = UserKeyUtils::GetUserBits((unsigned long long)drawableElementInfo.field_0);
        float* pfVar2 = (float*)(*(*(Array<float, BucketAllocatorEASTL>**)this))[(unsigned long)uVar1];
        if (*pfVar2 <= 0.0) {
            arg2 = 0;
        } else {
            pfVar2 = (float*)(*(*(Array<float, BucketAllocatorEASTL>**)this))[(unsigned long)uVar1];
            lVar3 = (long)(*pfVar2 + 0.5);
            arg2 = (unsigned long long)(((unsigned int)lVar3 | (unsigned int)(long)((*pfVar2 + 0.5) - 9.223372e+18) &
                                                                   (unsigned int)(lVar3 >> 63)) &
                                        65535);
        }
        drawableElementInfo.field_0 = UserKeyUtils::SetUserBits((unsigned long long)drawableElementInfo.field_0, arg2);
    }

    // 0x1007c3040
    void SceneRenderPass::UpdateMaterialDistanceKeys(DrawableQueue&, DrawableGroupType)::$_6::operator()(
        DrawableElementInfo& drawableElementInfo) const {
        long lVar3;

        unsigned short uVar1 = UserKeyUtils::GetUserBits((unsigned long long)drawableElementInfo.field_0);
        float* pfVar2 = (float*)(*(*(Array<float, BucketAllocatorEASTL>**)this))[(unsigned long)uVar1];
        unsigned long long arg2 = 65535;
        if (0.0 < *pfVar2) {
            pfVar2 = (float*)(*(*(Array<float, BucketAllocatorEASTL>**)this))[(unsigned long)uVar1];
            lVar3 = (long)(*pfVar2 + 0.5);
            arg2 = (unsigned long long)(65535 - ((unsigned int)lVar3 |
                                                 (unsigned int)(long)((*pfVar2 + 0.5) - 9.223372e+18) &
                                                     (unsigned int)(lVar3 >> 63)) &
                                        65535);
        }
        drawableElementInfo.field_0 = UserKeyUtils::SetUserBits((unsigned long long)drawableElementInfo.field_0, arg2);
    }

} // namespace jag::graphics
