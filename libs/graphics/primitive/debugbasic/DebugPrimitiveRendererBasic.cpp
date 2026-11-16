// libs/graphics/primitive/debugbasic/DebugPrimitiveRendererBasic.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics.primitive.debugbasic

namespace jag {
    class DebugPrimitiveRendererBasic {
    public:
        // virtual methods in vtable order
        virtual ~DebugPrimitiveRendererBasic();
        virtual void OnEndFrame();
        DebugPrimitiveRendererBasic(const DebugPrimitiveCollector<DebugDataBasic>::Config& config);
        void DestroyRenderingResources();
        void Render3D(render::RenderContext& renderContext, const render::RenderTargets* renderTargets,
                      const ViewTransforms& viewTransforms, const render::Viewport& viewport,
                      DebugPrimitiveCollectorBasic& debugPrimitiveCollectorBasic);
        void Render3DPrimitiveGroups(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                                     const ViewTransforms& viewTransforms,
                                     DebugPrimitiveCollectorBasic& debugPrimitiveCollectorBasic, unsigned int arg5);
        void Render2D(render::RenderContext& renderContext, const render::RenderTargets* renderTargets,
                      const render::Viewport& viewport, DebugPrimitiveCollectorBasic& debugPrimitiveCollectorBasic);
        void Render2DPrimitiveGroups(render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
                                     unsigned int arg3, unsigned int arg4, const render::Viewport& viewport,
                                     DebugPrimitiveCollectorBasic& debugPrimitiveCollectorBasic, unsigned int arg7);

    private:
        uint8_t field_8;
        uint8_t _unknown_9[3];
        uint32_t field_12;
        uint8_t** field_16;
        uint8_t _unknown_24[8];
        DebugLineRender field_32;
        DebugTriRender field_336;
        DebugAABBRender field_728;
        DebugOBBRender field_1400;
        DebugEllipsoidRender field_2072;
        uint8_t _unknown_2780[700];
        DebugConeRender field_3480;
        DebugCylinderRender field_4184;
        uint8_t _unknown_4888[8];
        DebugImageRender field_4896;
        uint8_t _unknown_5368[240];
        DebugRect2DRender field_5608;
        DebugCircle2DRender field_6008;
        uint8_t _unknown_6416[2640];
    };

    // 0x1009c8fc0
    DebugPrimitiveRendererBasic::DebugPrimitiveRendererBasic(
        const DebugPrimitiveCollector<DebugDataBasic>::Config& config)
        : Singleton<DebugPrimitiveRendererBasic>(), render::RenderDeviceCallback(true, 1), field_16(true) {
        field_16 = &PTR__DebugPrimitiveRendererBasic_100f1cb50;
        new (field_32) DebugLineRender(*(int*)(config + 4) * 10);
        new (field_336) DebugTriRender(*(int*)config);
        new (field_728) DebugAABBRender(*(int*)(config + 24));
        new (field_1400) DebugOBBRender(*(int*)(config + 28));
        new (field_2072) DebugEllipsoidRender(*(int*)(config + 8));
        new ((field_2072 + 704)) DebugCapsuleRender(*(int*)(config + 12));
        new (field_3480) DebugConeRender(*(int*)(config + 16));
        new (field_4184) DebugCylinderRender(*(int*)(config + 20));
        new (field_4896) DebugImageRender(*(int*)(config + 40), *(int*)(config + 44), *(int*)(config + 48));
        new (&field_5432) DebugText2DRender();
        new (field_5608) DebugRect2DRender(*(int*)(config + 60) * 2);
        new (field_6008) DebugCircle2DRender(*(int*)(config + 64) * 2);
    }

    // 0x1009c9350
    DebugPrimitiveRendererBasic::~DebugPrimitiveRendererBasic() {
        field_16 = &PTR__DebugPrimitiveRendererBasic_100f1cb50;
        DestroyRenderingResources();
        field_6008->~DebugCircle2DRender();
        field_5608->~DebugRect2DRender();
        field_5432.~DebugText2DRender();
        field_4896->~DebugImageRender();
        field_4184->~DebugCylinderRender();
        field_3480->~DebugConeRender();
        ((field_2072 + 704))->~DebugCapsuleRender();
        field_2072->~DebugEllipsoidRender();
        field_1400->~DebugOBBRender();
        field_728->~DebugAABBRender();
        field_336->~DebugTriRender();
        field_32->~DebugLineRender();
    }

    // 0x1009c94e0
    void DebugPrimitiveRendererBasic::DestroyRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_18;

        field_32->DestroyRenderingResources();
        field_336->DestroyRenderingResources();
        field_728->DestroyRenderingResources();
        field_1400->DestroyRenderingResources();
        field_2072->DestroyRenderingResources();
        ((field_2072 + 704))->DestroyRenderingResources();
        field_3480->DestroyRenderingResources();
        field_4184->DestroyRenderingResources();
        field_4896->DestroyRenderingResources();
        field_5608->DestroyRenderingResources();
        field_6008->DestroyRenderingResources();
        field_5432.DestroyRenderingResources();
    }

    // 0x1009c9600
    void DebugPrimitiveRendererBasic::Render3D(render::RenderContext& renderContext,
                                               const render::RenderTargets* renderTargets,
                                               const ViewTransforms& viewTransforms, const render::Viewport& viewport,
                                               DebugPrimitiveCollectorBasic& debugPrimitiveCollectorBasic) {
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_00;
        DrawCallState local_78;

        DrawCallState* pDVar5 = &local_78;
        new (pDVar5) render::DrawCallState();
        this_00 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                      pDVar5->GetRenderPipelineState();
        long lVar1 = pDVar5->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            this_00, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar1 + 1676));
        auto pOVar2 = local_78.GetOutputMergerState();
        pOVar2->SetRenderTargets(renderTargets);
        pOVar2 = local_78.GetOutputMergerState();
        pOVar2->SetViewports(viewport, 1);
        pDVar5 = &local_78;
        auto pLVar3 = pDVar5->GetRenderPipelineState();
        lVar1 = pDVar5->Instance();
        pLVar3->SetHeapSize((lVar1 + 720));
        pDVar5 = &local_78;
        auto pRVar4 = pDVar5->GetRenderPipelineState();
        lVar1 = pDVar5->Instance();
        pRVar4->SetRasteriserState((lVar1 + 1200));
        Render3DPrimitiveGroups(renderContext, local_78, viewTransforms, debugPrimitiveCollectorBasic, 0);
        pDVar5 = &local_78;
        pLVar3 = (Layout*)pDVar5->GetRenderPipelineState();
        lVar1 = pDVar5->Instance();
        pLVar3->SetHeapSize((lVar1 + 720));
        pDVar5 = &local_78;
        pRVar4 = (RenderPipelineState*)pDVar5->GetRenderPipelineState();
        lVar1 = pDVar5->Instance();
        pRVar4->SetRasteriserState((lVar1 + 1308));
        Render3DPrimitiveGroups(renderContext, local_78, viewTransforms, debugPrimitiveCollectorBasic, 4);
        pDVar5 = &local_78;
        pLVar3 = (Layout*)pDVar5->GetRenderPipelineState();
        lVar1 = pDVar5->Instance();
        pLVar3->SetHeapSize((lVar1 + 720));
        pDVar5 = &local_78;
        pRVar4 = (RenderPipelineState*)pDVar5->GetRenderPipelineState();
        lVar1 = pDVar5->Instance();
        pRVar4->SetRasteriserState((lVar1 + 1236));
        Render3DPrimitiveGroups(renderContext, local_78, viewTransforms, debugPrimitiveCollectorBasic, 2);
        pDVar5 = &local_78;
        pLVar3 = (Layout*)pDVar5->GetRenderPipelineState();
        lVar1 = pDVar5->Instance();
        pLVar3->SetHeapSize((lVar1 + 1020));
        pDVar5 = &local_78;
        pRVar4 = (RenderPipelineState*)pDVar5->GetRenderPipelineState();
        lVar1 = pDVar5->Instance();
        pRVar4->SetRasteriserState((lVar1 + 1200));
        Render3DPrimitiveGroups(renderContext, local_78, viewTransforms, debugPrimitiveCollectorBasic, 1);
        pDVar5 = &local_78;
        pLVar3 = (Layout*)pDVar5->GetRenderPipelineState();
        lVar1 = pDVar5->Instance();
        pLVar3->SetHeapSize((lVar1 + 1020));
        pDVar5 = &local_78;
        pRVar4 = (RenderPipelineState*)pDVar5->GetRenderPipelineState();
        lVar1 = pDVar5->Instance();
        pRVar4->SetRasteriserState((lVar1 + 1308));
        Render3DPrimitiveGroups(renderContext, local_78, viewTransforms, debugPrimitiveCollectorBasic, 5);
        pDVar5 = &local_78;
        pLVar3 = (Layout*)pDVar5->GetRenderPipelineState();
        lVar1 = pDVar5->Instance();
        pLVar3->SetHeapSize((lVar1 + 1020));
        pDVar5 = &local_78;
        pRVar4 = (RenderPipelineState*)pDVar5->GetRenderPipelineState();
        lVar1 = pDVar5->Instance();
        pRVar4->SetRasteriserState((lVar1 + 1236));
        Render3DPrimitiveGroups(renderContext, local_78, viewTransforms, debugPrimitiveCollectorBasic, 3);
    }

    // 0x1009c9900
    void DebugPrimitiveRendererBasic::Render3DPrimitiveGroups(
        render::RenderContext& renderContext, const render::DrawCallState& drawCallState,
        const ViewTransforms& viewTransforms, DebugPrimitiveCollectorBasic& debugPrimitiveCollectorBasic,
        unsigned int arg5) {
        vector<eastl::pair<DebugText<DebugDataBasic> const*, float>>* pairs_00;

        unsigned int local_34 = arg5 >> 1 & 1;
        DebugPrimitiveCollectorBasic* local_58 = debugPrimitiveCollectorBasic;
        auto matrix441 = viewTransforms.GetScreen();
        auto matrix442 = viewTransforms.GetOrigin();
        Frustum local_118(*matrix441, *matrix442);
        auto pvVar8 = debugPrimitiveCollectorBasic.field_624.GetRenderGroup(arg5);
        SortDebugPrimitiveGroup<DebugTri<DebugDataBasic>>(&local_118, pvVar8);
        pvVar8 = (vector<eastl::pair<DebugTri<DebugDataBasic> const*, float>>*)
                     debugPrimitiveCollectorBasic.field_624.GetRenderGroup(arg5);
        RenderContext* pRVar15 = renderContext;
        ViewTransforms* pVVar2 = (ViewTransforms*)drawCallState;
        field_336->Render(renderContext, *((DrawCallState*)(ViewTransforms*)drawCallState), viewTransforms, *pvVar8,
                          (uint8_t)local_34);
        DebugPrimitiveCollectorBasic* pDVar4 = local_58;
        uint8_t* puVar1 = &local_58->field_944;
        auto pairs = puVar1->GetRenderGroup(arg5);
        SortDebugPrimitiveGroup<DebugLine<DebugDataBasic>>(&local_118, pairs);
        RenderContext* local_70 = (RenderContext*)field_32;
        bool bVar7 = (bool)puVar1->GetRenderGroup(arg5);
        ViewTransforms* pVVar6 = viewTransforms;
        DebugLineRender::Render(*local_70, *pRVar15, *pVVar2, viewTransforms, bVar7);
        auto pvVar9 = pDVar4->field_2544.GetRenderGroup(arg5);
        SortDebugPrimitiveGroup<DebugAABB<DebugDataBasic>>(&local_118, pvVar9);
        DebugPrimitiveRendererBasic* pDVar3 = this;
        puVar1 = field_728;
        pvVar9 = (vector<eastl::pair<DebugAABB<DebugDataBasic> const*, float>>*)pDVar4->field_2544.GetRenderGroup(arg5);
        pVVar2 = (ViewTransforms*)drawCallState;
        puVar1->Render(renderContext, *((DrawCallState*)(ViewTransforms*)drawCallState), *pVVar6, *pvVar9,
                       (uint8_t)local_34);
        unsigned int uVar5 = arg5;
        pDVar4 = local_58;
        puVar1 = &local_58->field_2864;
        auto pvVar10 = puVar1->GetRenderGroup(arg5);
        SortDebugPrimitiveGroup<DebugOBB<DebugDataBasic>>(&local_118, pvVar10);
        pvVar10 = (vector<eastl::pair<DebugOBB<DebugDataBasic> const*, float>>*)puVar1->GetRenderGroup(uVar5);
        pVVar6 = viewTransforms;
        pDVar3->field_1400->Render(renderContext, *pVVar2, viewTransforms, *pvVar10, (uint8_t)local_34);
        auto pvVar11 = pDVar4->field_1264.GetRenderGroup(uVar5);
        SortDebugPrimitiveGroup<DebugEllipsoid<DebugDataBasic>>(&local_118, pvVar11);
        pDVar3 = this;
        puVar1 = field_2072;
        pvVar11 = (vector<eastl::pair<DebugEllipsoid<DebugDataBasic> const*, float>>*)pDVar4->field_1264.GetRenderGroup(
            uVar5);
        pVVar2 = (ViewTransforms*)drawCallState;
        puVar1->Render(renderContext, *((DrawCallState*)(ViewTransforms*)drawCallState), *pVVar6, *pvVar11,
                       (uint8_t)local_34);
        pDVar4 = local_58;
        puVar1 = &local_58->field_1584;
        auto pvVar12 = puVar1->GetRenderGroup(uVar5);
        SortDebugPrimitiveGroup<DebugCapsule<DebugDataBasic>>(&local_118, pvVar12);
        pvVar12 = (vector<eastl::pair<DebugCapsule<DebugDataBasic> const*, float>>*)puVar1->GetRenderGroup(uVar5);
        pRVar15 = renderContext;
        bVar7 = (uint8_t)local_34;
        ((pDVar3->field_2072 + 704))->Render(renderContext, *pVVar2, viewTransforms, *pvVar12, bVar7);
        uVar5 = arg5;
        auto pvVar13 = pDVar4->field_1904.GetRenderGroup(arg5);
        SortDebugPrimitiveGroup<DebugCone<DebugDataBasic>>(&local_118, pvVar13);
        pDVar3 = this;
        local_70 = (RenderContext*)field_3480;
        pvVar13 =
            (vector<eastl::pair<DebugCone<DebugDataBasic> const*, float>>*)pDVar4->field_1904.GetRenderGroup(uVar5);
        pVVar2 = (ViewTransforms*)drawCallState;
        local_70->Render(*pRVar15, *((DrawCallState*)(ViewTransforms*)drawCallState), viewTransforms, *pvVar13, bVar7);
        pDVar4 = local_58;
        puVar1 = &local_58->field_2224;
        auto pvVar14 = puVar1->GetRenderGroup(uVar5);
        SortDebugPrimitiveGroup<DebugCylinder<DebugDataBasic>>(&local_118, pvVar14);
        pvVar14 = (vector<eastl::pair<DebugCylinder<DebugDataBasic> const*, float>>*)puVar1->GetRenderGroup(uVar5);
        pVVar6 = viewTransforms;
        pDVar3->field_4184->Render(renderContext, *pVVar2, viewTransforms, *pvVar14, (uint8_t)local_34);
        pRVar15 = (RenderContext*)&pDVar4->field_4784;
        pairs_00 = (vector<eastl::pair<DebugText<DebugDataBasic> const*, float>>*)pRVar15->GetRenderGroup(uVar5);
        SortDebugPrimitiveGroup<DebugText<DebugDataBasic>>(&local_118, pairs_00);
        DrawCallState* drawCallState_00 = (DrawCallState*)(unsigned long)uVar5;
        bVar7 = (bool)pRVar15->GetRenderGroup(uVar5);
        DebugTextRender::Render(*pRVar15, *drawCallState_00, *pVVar2, *pVVar6, bVar7);
    }

    // 0x1009c9c80
    void DebugPrimitiveRendererBasic::Render2D(render::RenderContext& renderContext,
                                               const render::RenderTargets* renderTargets,
                                               const render::Viewport& viewport,
                                               DebugPrimitiveCollectorBasic& debugPrimitiveCollectorBasic) {
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_00;
        DrawCallState local_70;

        DrawCallState* pDVar5 = &local_70;
        new (pDVar5) render::DrawCallState();
        this_00 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                      pDVar5->GetRenderPipelineState();
        long lVar1 = pDVar5->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            this_00, (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar1 + 1676));
        pDVar5 = &local_70;
        auto this_01 = pDVar5->GetRenderPipelineState();
        lVar1 = pDVar5->Instance();
        this_01->SetHeapSize((lVar1 + 1080));
        pDVar5 = &local_70;
        auto this_02 = pDVar5->GetRenderPipelineState();
        lVar1 = pDVar5->Instance();
        this_02->SetRasteriserState((lVar1 + 1200));
        auto pOVar2 = local_70.GetOutputMergerState();
        pOVar2->SetRenderTargets(renderTargets);
        pOVar2 = local_70.GetOutputMergerState();
        pOVar2->SetViewports(viewport, 1);
        auto this_03 = renderTargets->GetColourTargetTextures();
        uint64_t* puVar3 = (uint64_t*)(*this_03)[0];
        unsigned int* puVar4 = (unsigned int*)(*puVar3)->second();
        Render2DPrimitiveGroups(renderContext, local_70, *puVar4, puVar4[1], viewport, debugPrimitiveCollectorBasic, 0);
    }

    // 0x1009c9dc0
    void DebugPrimitiveRendererBasic::Render2DPrimitiveGroups(
        render::RenderContext& renderContext, const render::DrawCallState& drawCallState, unsigned int arg3,
        unsigned int arg4, const render::Viewport& viewport, DebugPrimitiveCollectorBasic& debugPrimitiveCollectorBasic,
        unsigned int arg7) {
        Matrix44T<float> local_a8;
        math::Matrix44OrthographicLH<float>(local_a8, (float)viewport.field_0, (float)arg3 + (float)viewport.field_0,
                                            (float)arg4 + (float)viewport.field_4, (float)viewport.field_4, 0.1, 5000.0,
                                            0);
        uint8_t* puVar1 = field_4896;
        bool bVar4 = (bool)debugPrimitiveCollectorBasic.field_3824.GetRenderGroup(arg7);
        DrawCallState* pDVar3 = drawCallState;
        DebugImageRender::RenderImage2DGroup(*puVar1, renderContext, drawCallState, viewport, local_a8, bVar4);
        bVar4 = (bool)debugPrimitiveCollectorBasic.field_4144.GetRenderGroup(arg7);
        DebugImageRender::RenderImageCubeGroup(*puVar1, renderContext, *pDVar3, viewport, local_a8, bVar4);
        bVar4 = (bool)debugPrimitiveCollectorBasic.field_4464.GetRenderGroup(arg7);
        DebugImageRender::RenderImage3DGroup(*puVar1, renderContext, *pDVar3, viewport, local_a8, bVar4);
        DebugPrimitiveRendererBasic* pDVar2 = this;
        unsigned int uVar5 = (unsigned int)viewport;
        puVar1 = field_5608;
        auto pairs = debugPrimitiveCollectorBasic.field_5424.GetRenderGroup(arg7);
        pDVar3 = drawCallState;
        puVar1->RenderRect2DGroup(renderContext, drawCallState, uVar5, arg4, viewport, local_a8, *pairs, false);
        RenderContext* local_48 = (RenderContext*)&pDVar2->field_5432;
        bVar4 = (bool)debugPrimitiveCollectorBasic.field_5104.GetRenderGroup(arg7);
        DebugText2DRender::Render(*local_48, renderContext, *pDVar3, viewport, local_a8, bVar4);
        uVar5 = (unsigned int)viewport;
        auto pairs_00 = debugPrimitiveCollectorBasic.field_5744.GetRenderGroup(arg7);
        pDVar2->field_6008->RenderCircle2DGroup(renderContext, drawCallState, uVar5, arg4, viewport, local_a8,
                                                *pairs_00);
    }

    // 0x1009c9fc0
    void DebugPrimitiveRendererBasic::OnEndFrame() {
        field_32->OnEndFrame();
        field_336->OnEndFrame();
        field_728->OnEndFrame();
        field_1400->OnEndFrame();
        field_2072->OnEndFrame();
        ((field_2072 + 704))->OnEndFrame();
        field_3480->OnEndFrame();
        field_4184->OnEndFrame();
        field_4896->OnEndFrame();
        field_5608->OnEndFrame();
        field_6008->OnEndFrame();
        field_5432.OnEndFrame();
    }

} // namespace jag
