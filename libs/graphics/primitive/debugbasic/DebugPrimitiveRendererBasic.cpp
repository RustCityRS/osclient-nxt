// libs/graphics/primitive/debugbasic/DebugPrimitiveRendererBasic.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics.primitive.debugbasic

namespace jag {
    class DebugPrimitiveRendererBasic {
    public:
        // virtual methods in vtable order
        virtual ~DebugPrimitiveRendererBasic();
        virtual void OnEndFrame();
        DebugPrimitiveRendererBasic(DebugPrimitiveCollector<DebugDataBasic>::Config const&);
        void DestroyRenderingResources();
        void Render3D(render::RenderContext&, render::RenderTargets const*, ViewTransforms const&,
                      render::Viewport const&, DebugPrimitiveCollectorBasic&);
        void Render3DPrimitiveGroups(render::RenderContext&, render::DrawCallState const&, ViewTransforms const&,
                                     DebugPrimitiveCollectorBasic&, unsigned int);
        void Render2D(render::RenderContext&, render::RenderTargets const*, render::Viewport const&,
                      DebugPrimitiveCollectorBasic&);
        void Render2DPrimitiveGroups(render::RenderContext&, render::DrawCallState const&, unsigned int, unsigned int,
                                     render::Viewport const&, DebugPrimitiveCollectorBasic&, unsigned int);

        // data members, from how the methods use this: 9056 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined1 field_8;  // offset 8
        char _unknown_9[3];
        undefined4 field_12;  // offset 12
        undefined** field_16; // offset 16
        char _unknown_24[8];
        DebugLineRender field_32;        // offset 32
        DebugTriRender field_336;        // offset 336
        DebugAABBRender field_728;       // offset 728
        DebugOBBRender field_1400;       // offset 1400
        DebugEllipsoidRender field_2072; // offset 2072
        char _unknown_2780[700];
        DebugConeRender field_3480;     // offset 3480
        DebugCylinderRender field_4184; // offset 4184
        char _unknown_4888[8];
        DebugImageRender field_4896; // offset 4896
        char _unknown_5368[240];
        DebugRect2DRender field_5608;   // offset 5608
        DebugCircle2DRender field_6008; // offset 6008
        char _unknown_6416[2640];
    };

    // 0x1009c8fc0, 576 bytes, base-object constructor, placed by class name and debug map
    // DebugPrimitiveRendererBasic::DebugPrimitiveRendererBasic(DebugPrimitiveCollector<DebugDataBasic>::Config const&)
    void DebugPrimitiveRendererBasic::DebugPrimitiveRendererBasic(Config* param_1) {
        new (this) Singleton<DebugPrimitiveRendererBasic>();
        new (this) render::RenderDeviceCallback(true, 1);
        new (&field_16, true) render::RenderDeviceOnEndFrame();
        field_0 = &PTR__DebugPrimitiveRendererBasic_100f1cb18;
        field_16 = &PTR__DebugPrimitiveRendererBasic_100f1cb50;
        new (field_32, *(int*)(param_1 + 4) * 10) DebugLineRender();
        new (field_336, *(int*)param_1) DebugTriRender();
        new (field_728, *(int*)(param_1 + 24)) DebugAABBRender();
        new (field_1400, *(int*)(param_1 + 28)) DebugOBBRender();
        new (field_2072, *(int*)(param_1 + 8)) DebugEllipsoidRender();
        new ((field_2072 + 704), *(int*)(param_1 + 12)) DebugCapsuleRender();
        new (field_3480, *(int*)(param_1 + 16)) DebugConeRender();
        new (field_4184, *(int*)(param_1 + 20)) DebugCylinderRender();
        new (field_4896, *(int*)(param_1 + 40), *(int*)(param_1 + 44), *(int*)(param_1 + 48)) DebugImageRender();
        new (&field_5432) DebugText2DRender();
        new (field_5608, *(int*)(param_1 + 60) * 2) DebugRect2DRender();
        new (field_6008, *(int*)(param_1 + 64) * 2) DebugCircle2DRender();
    }

    // 0x1009c9340, 16 bytes, complete-object constructor, placed by class name
    // DebugPrimitiveRendererBasic::DebugPrimitiveRendererBasic(DebugPrimitiveCollector<DebugDataBasic>::Config const&): jumps straight to the base-object constructor

    // 0x1009c9350, 400 bytes, base-object destructor, placed by class name
    // DebugPrimitiveRendererBasic::~DebugPrimitiveRendererBasic()
    void DebugPrimitiveRendererBasic::~DebugPrimitiveRendererBasic() {
        field_0 = &PTR__DebugPrimitiveRendererBasic_100f1cb18;
        field_16 = &PTR__DebugPrimitiveRendererBasic_100f1cb50;
        DestroyRenderingResources(this);
        field_6008->~DebugCircle2DRender();
        field_5608->~DebugRect2DRender();
        (&field_5432)->~DebugText2DRender();
        field_4896->~DebugImageRender();
        field_4184->~DebugCylinderRender();
        field_3480->~DebugConeRender();
        ((field_2072 + 704))->~DebugCapsuleRender();
        field_2072->~DebugEllipsoidRender();
        field_1400->~DebugOBBRender();
        field_728->~DebugAABBRender();
        field_336->~DebugTriRender();
        field_32->~DebugLineRender();
        (&field_16)->~RenderDeviceOnEndFrame();
        ~RenderDeviceCallback();
        ~AutoSingleton();
    }

    // 0x1009c94e0, 192 bytes, placed by class name
    // DebugPrimitiveRendererBasic::DestroyRenderingResources()
    void DebugPrimitiveRendererBasic::DestroyRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_18[8];

        local_18->~AutoSingleton("Debug_Primitive_Renderer");
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
        (&field_5432)->DestroyRenderingResources();
    }

    // 0x1009c95b0, 16 bytes, complete-object destructor, placed by class name
    // DebugPrimitiveRendererBasic::~DebugPrimitiveRendererBasic(): jumps straight to the base-object destructor

    // 0x1009c95d0, 32 bytes, deleting destructor, placed by class name
    // DebugPrimitiveRendererBasic::~DebugPrimitiveRendererBasic()
    void DebugPrimitiveRendererBasic::~DebugPrimitiveRendererBasic() {
        ~DebugPrimitiveRendererBasic(this);
        operator_delete(this);
    }

    // 0x1009c9600, 768 bytes, placed by class name
    // DebugPrimitiveRendererBasic::Render3D(render::RenderContext&, render::RenderTargets const*, ViewTransforms const&, render::Viewport const&, DebugPrimitiveCollectorBasic&)
    void DebugPrimitiveRendererBasic::Render3D(RenderContext* param_1, RenderTargets* param_2, ViewTransforms* param_3,
                                               Viewport* param_4, DebugPrimitiveCollectorBasic* param_5) {
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_00;
        OutputMergerState* this_01;
        Viewport* pVVar1;
        Layout* pLVar2;
        long lVar3;
        RenderPipelineState* pRVar4;
        DrawCallState* pDVar5;
        undefined1 auVar6[16];
        DrawCallState local_78;
        DebugPrimitiveCollectorBasic* local_48;
        ViewTransforms* local_40;
        RenderContext* local_38;

        pDVar5 = &local_78;
        local_48 = param_5;
        local_40 = param_3;
        local_38 = param_1;
        render::DrawCallState::DrawCallState(pDVar5);
        this_00 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                      pDVar5->GetRenderPipelineState();
        auVar6 = pDVar5->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            this_00, (EntityHighlight**)(auVar6._0_8_ + 1676), auVar6._8_8_);
        this_01 = (OutputMergerState*)local_78.GetOutputMergerState();
        this_01->SetRenderTargets(param_2);
        pVVar1 = (Viewport*)local_78.GetOutputMergerState();
        render::OutputMergerState::SetViewports(pVVar1, (uint)param_4);
        pDVar5 = &local_78;
        pLVar2 = (Layout*)pDVar5->GetRenderPipelineState();
        lVar3 = pDVar5->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(pLVar2, lVar3 + 720);
        pDVar5 = &local_78;
        pRVar4 = (RenderPipelineState*)pDVar5->GetRenderPipelineState();
        lVar3 = pDVar5->Instance();
        pRVar4->SetRasteriserState((RasteriserState*)(lVar3 + 1200));
        Render3DPrimitiveGroups(this, local_38, &local_78, local_40, local_48, 0);
        pDVar5 = &local_78;
        pLVar2 = (Layout*)pDVar5->GetRenderPipelineState();
        lVar3 = pDVar5->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(pLVar2, lVar3 + 720);
        pDVar5 = &local_78;
        pRVar4 = (RenderPipelineState*)pDVar5->GetRenderPipelineState();
        lVar3 = pDVar5->Instance();
        pRVar4->SetRasteriserState((RasteriserState*)(lVar3 + 1308));
        Render3DPrimitiveGroups(this, local_38, &local_78, local_40, local_48, 4);
        pDVar5 = &local_78;
        pLVar2 = (Layout*)pDVar5->GetRenderPipelineState();
        lVar3 = pDVar5->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(pLVar2, lVar3 + 720);
        pDVar5 = &local_78;
        pRVar4 = (RenderPipelineState*)pDVar5->GetRenderPipelineState();
        lVar3 = pDVar5->Instance();
        pRVar4->SetRasteriserState((RasteriserState*)(lVar3 + 1236));
        Render3DPrimitiveGroups(this, local_38, &local_78, local_40, local_48, 2);
        pDVar5 = &local_78;
        pLVar2 = (Layout*)pDVar5->GetRenderPipelineState();
        lVar3 = pDVar5->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(pLVar2, lVar3 + 1020);
        pDVar5 = &local_78;
        pRVar4 = (RenderPipelineState*)pDVar5->GetRenderPipelineState();
        lVar3 = pDVar5->Instance();
        pRVar4->SetRasteriserState((RasteriserState*)(lVar3 + 1200));
        Render3DPrimitiveGroups(this, local_38, &local_78, local_40, local_48, 1);
        pDVar5 = &local_78;
        pLVar2 = (Layout*)pDVar5->GetRenderPipelineState();
        lVar3 = pDVar5->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(pLVar2, lVar3 + 1020);
        pDVar5 = &local_78;
        pRVar4 = (RenderPipelineState*)pDVar5->GetRenderPipelineState();
        lVar3 = pDVar5->Instance();
        pRVar4->SetRasteriserState((RasteriserState*)(lVar3 + 1308));
        Render3DPrimitiveGroups(this, local_38, &local_78, local_40, local_48, 5);
        pDVar5 = &local_78;
        pLVar2 = (Layout*)pDVar5->GetRenderPipelineState();
        lVar3 = pDVar5->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(pLVar2, lVar3 + 1020);
        pDVar5 = &local_78;
        pRVar4 = (RenderPipelineState*)pDVar5->GetRenderPipelineState();
        lVar3 = pDVar5->Instance();
        pRVar4->SetRasteriserState((RasteriserState*)(lVar3 + 1236));
        Render3DPrimitiveGroups(this, local_38, &local_78, local_40, local_48, 3);
        local_78.~DrawCallState();
    }

    // 0x1009c9900, 896 bytes, placed by class name
    // DebugPrimitiveRendererBasic::Render3DPrimitiveGroups(render::RenderContext&, render::DrawCallState const&, ViewTransforms const&, DebugPrimitiveCollectorBasic&, unsigned int)
    void DebugPrimitiveRendererBasic::Render3DPrimitiveGroups(RenderContext* param_1, DrawCallState* param_2,
                                                              ViewTransforms* param_3,
                                                              DebugPrimitiveCollectorBasic* param_4, uint param_5) {
        undefined1* puVar1;
        ViewTransforms* pVVar2;
        DebugPrimitiveRendererBasic* pDVar3;
        DebugPrimitiveCollectorBasic* pDVar4;
        uint uVar5;
        ViewTransforms* pVVar6;
        bool bVar7;
        Matrix44T* pMVar8;
        Matrix44T* pMVar9;
        vector* pvVar10;
        DrawCallState* pDVar11;
        RenderContext* pRVar12;
        Frustum local_118;
        RenderContext* local_70;
        DebugPrimitiveCollectorBasic* local_58;
        uint local_34;

        local_34 = param_5 >> 1 & 1;
        local_58 = param_4;
        pMVar8 = (Matrix44T*)param_3->GetScreen();
        pMVar9 = (Matrix44T*)param_3->GetOrigin();
        new (&local_118) math::Frustum(pMVar8, pMVar9);
        pvVar10 = (vector*)(&param_4->field_624, param_5)->GetRenderGroup();
        SortDebugPrimitiveGroup<DebugTri<DebugDataBasic>>(&local_118, pvVar10);
        pvVar10 = (vector*)(&param_4->field_624, param_5)->GetRenderGroup();
        pRVar12 = param_1;
        pVVar2 = (ViewTransforms*)param_2;
        (field_336, param_1, (DrawCallState*)(ViewTransforms*)param_2, param_3, pvVar10, SUB41(local_34)->Render(0));
        pDVar4 = local_58;
        puVar1 = &local_58->field_944;
        pvVar10 = (vector*)puVar1->GetRenderGroup(param_5);
        SortDebugPrimitiveGroup<DebugLine<DebugDataBasic>>(&local_118, pvVar10);
        local_70 = (RenderContext*)((DebugPrimitiveRendererBasic*)this)->field_32;
        bVar7 = (bool)puVar1->GetRenderGroup(param_5);
        pVVar6 = param_3;
        DebugLineRender::Render(local_70, (DrawCallState*)pRVar12, pVVar2, (vector*)param_3, bVar7);
        pvVar10 = (vector*)(&pDVar4->field_2544, param_5)->GetRenderGroup();
        SortDebugPrimitiveGroup<DebugAABB<DebugDataBasic>>(&local_118, pvVar10);
        pDVar3 = (DebugPrimitiveRendererBasic*)this;
        puVar1 = ((DebugPrimitiveRendererBasic*)this)->field_728;
        pvVar10 = (vector*)(&pDVar4->field_2544, param_5)->GetRenderGroup();
        pVVar2 = (ViewTransforms*)param_2;
        puVar1->Render(param_1, (DrawCallState*)(ViewTransforms*)param_2, pVVar6, pvVar10, SUB41(local_34, 0));
        uVar5 = param_5;
        pDVar4 = local_58;
        puVar1 = &local_58->field_2864;
        pvVar10 = (vector*)puVar1->GetRenderGroup(param_5);
        SortDebugPrimitiveGroup<DebugOBB<DebugDataBasic>>(&local_118, pvVar10);
        pvVar10 = (vector*)puVar1->GetRenderGroup(uVar5);
        pVVar6 = param_3;
        (pDVar3->field_1400, param_1, (DrawCallState*)pVVar2, param_3, pvVar10, SUB41(local_34)->Render(0));
        pvVar10 = (vector*)(&pDVar4->field_1264, uVar5)->GetRenderGroup();
        SortDebugPrimitiveGroup<DebugEllipsoid<DebugDataBasic>>(&local_118, pvVar10);
        pDVar3 = (DebugPrimitiveRendererBasic*)this;
        puVar1 = ((DebugPrimitiveRendererBasic*)this)->field_2072;
        pvVar10 = (vector*)(&pDVar4->field_1264, uVar5)->GetRenderGroup();
        pVVar2 = (ViewTransforms*)param_2;
        puVar1->Render(param_1, (DrawCallState*)(ViewTransforms*)param_2, pVVar6, pvVar10, SUB41(local_34, 0));
        pDVar4 = local_58;
        puVar1 = &local_58->field_1584;
        pvVar10 = (vector*)puVar1->GetRenderGroup(uVar5);
        SortDebugPrimitiveGroup<DebugCapsule<DebugDataBasic>>(&local_118, pvVar10);
        pvVar10 = (vector*)puVar1->GetRenderGroup(uVar5);
        pRVar12 = param_1;
        bVar7 = SUB41(local_34, 0);
        ((pDVar3->field_2072 + 704), param_1, (DrawCallState*)pVVar2, param_3, pvVar10, bVar7)->Render();
        uVar5 = param_5;
        pvVar10 = (vector*)(&pDVar4->field_1904, param_5)->GetRenderGroup();
        SortDebugPrimitiveGroup<DebugCone<DebugDataBasic>>(&local_118, pvVar10);
        pDVar3 = (DebugPrimitiveRendererBasic*)this;
        local_70 = (RenderContext*)((DebugPrimitiveRendererBasic*)this)->field_3480;
        pvVar10 = (vector*)(&pDVar4->field_1904, uVar5)->GetRenderGroup();
        pVVar2 = (ViewTransforms*)param_2;
        local_70->Render(pRVar12, (DrawCallState*)(ViewTransforms*)param_2, param_3, pvVar10, bVar7);
        pDVar4 = local_58;
        puVar1 = &local_58->field_2224;
        pvVar10 = (vector*)puVar1->GetRenderGroup(uVar5);
        SortDebugPrimitiveGroup<DebugCylinder<DebugDataBasic>>(&local_118, pvVar10);
        pvVar10 = (vector*)puVar1->GetRenderGroup(uVar5);
        pVVar6 = param_3;
        (pDVar3->field_4184, param_1, (DrawCallState*)pVVar2, param_3, pvVar10, SUB41(local_34)->Render(0));
        pRVar12 = (RenderContext*)&pDVar4->field_4784;
        pvVar10 = (vector*)pRVar12->GetRenderGroup(uVar5);
        SortDebugPrimitiveGroup<DebugText<DebugDataBasic>>(&local_118, pvVar10);
        pDVar11 = (DrawCallState*)(ulong)uVar5;
        bVar7 = (bool)pRVar12->GetRenderGroup(uVar5);
        DebugTextRender::Render(pRVar12, pDVar11, pVVar2, (vector*)pVVar6, bVar7);
    }

    // 0x1009c9c80, 320 bytes, placed by class name
    // DebugPrimitiveRendererBasic::Render2D(render::RenderContext&, render::RenderTargets const*, render::Viewport const&, DebugPrimitiveCollectorBasic&)
    void DebugPrimitiveRendererBasic::Render2D(RenderContext* param_1, RenderTargets* param_2, Viewport* param_3,
                                               DebugPrimitiveCollectorBasic* param_4) {
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_00;
        Layout* this_01;
        long lVar1;
        RenderPipelineState* this_02;
        OutputMergerState* this_03;
        Viewport* pVVar2;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_04;
        undefined8* puVar3;
        uint* puVar4;
        DrawCallState* pDVar5;
        undefined1 auVar6[16];
        DrawCallState local_70;
        RenderContext* local_40;
        DebugPrimitiveCollectorBasic* local_38;

        pDVar5 = &local_70;
        local_40 = param_1;
        local_38 = param_4;
        render::DrawCallState::DrawCallState(pDVar5);
        this_00 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                      pDVar5->GetRenderPipelineState();
        auVar6 = pDVar5->Instance();
        eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::compressed_pair_imp(
            this_00, (EntityHighlight**)(auVar6._0_8_ + 1676), auVar6._8_8_);
        pDVar5 = &local_70;
        this_01 = (Layout*)pDVar5->GetRenderPipelineState();
        lVar1 = pDVar5->Instance();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::Layout::
            SetHeapSize(this_01, lVar1 + 1080);
        pDVar5 = &local_70;
        this_02 = (RenderPipelineState*)pDVar5->GetRenderPipelineState();
        lVar1 = pDVar5->Instance();
        this_02->SetRasteriserState((RasteriserState*)(lVar1 + 1200));
        this_03 = (OutputMergerState*)local_70.GetOutputMergerState();
        this_03->SetRenderTargets(param_2);
        pVVar2 = (Viewport*)local_70.GetOutputMergerState();
        render::OutputMergerState::SetViewports(pVVar2, (uint)param_3);
        this_04 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      param_2->GetColourTargetTextures();
        puVar3 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](this_04, 0);
        puVar4 = (uint*)(*puVar3)->second();
        Render2DPrimitiveGroups(this, local_40, &local_70, *puVar4, puVar4[1], param_3, local_38, 0);
        local_70.~DrawCallState();
    }

    // 0x1009c9dc0, 512 bytes, placed by class name
    // DebugPrimitiveRendererBasic::Render2DPrimitiveGroups(render::RenderContext&, render::DrawCallState const&, unsigned int, unsigned int, render::Viewport const&, DebugPrimitiveCollectorBasic&, unsigned int)
    void DebugPrimitiveRendererBasic::Render2DPrimitiveGroups(RenderContext* param_1, DrawCallState* param_2,
                                                              uint param_3, uint param_4, Viewport* param_5,
                                                              DebugPrimitiveCollectorBasic* param_6, uint param_7) {
        undefined1* puVar1;
        DebugPrimitiveRendererBasic* pDVar2;
        DrawCallState* pDVar5;
        bool bVar6;
        vector* pvVar7;
        uint uVar8;
        Matrix44T local_a8;
        RenderContext* local_48;

        new (&local_a8) math::Matrix44T<float>();
        math::Matrix44OrthographicLH<float>((float)param_5->field_0, (float)param_3 + (float)param_5->field_0,
                                            (float)param_4 + (float)param_5->field_4, (float)param_5->field_4,
                                            1036831949, 1167867904, &local_a8, 0);
        puVar1 = field_4896;
        bVar6 = (bool)(&param_6->field_3824, param_7)->GetRenderGroup();
        pDVar5 = param_2;
        DebugImageRender::RenderImage2DGroup((RenderContext*)puVar1, (DrawCallState*)param_1, (Viewport*)param_2,
                                             (Matrix44T*)param_5, (vector*)&local_a8, bVar6);
        bVar6 = (bool)(&param_6->field_4144, param_7)->GetRenderGroup();
        DebugImageRender::RenderImageCubeGroup((RenderContext*)puVar1, (DrawCallState*)param_1, (Viewport*)pDVar5,
                                               (Matrix44T*)param_5, (vector*)&local_a8, bVar6);
        bVar6 = (bool)(&param_6->field_4464, param_7)->GetRenderGroup();
        DebugImageRender::RenderImage3DGroup((RenderContext*)puVar1, (DrawCallState*)param_1, (Viewport*)pDVar5,
                                             (Matrix44T*)param_5, (vector*)&local_a8, bVar6);
        pDVar2 = (DebugPrimitiveRendererBasic*)this;
        uVar8 = (uint)param_5;
        puVar1 = ((DebugPrimitiveRendererBasic*)this)->field_5608;
        pvVar7 = (vector*)(&param_6->field_5424, param_7)->GetRenderGroup();
        pDVar5 = param_2;
        puVar1->RenderRect2DGroup(param_1, param_2, uVar8, param_4, (Viewport*)(Matrix44T*)param_5, &local_a8, pvVar7,
                                  false);
        local_48 = (RenderContext*)&pDVar2->field_5432;
        bVar6 = (bool)(&param_6->field_5104, param_7)->GetRenderGroup();
        DebugText2DRender::Render(local_48, (DrawCallState*)param_1, (Viewport*)pDVar5, (Matrix44T*)param_5,
                                  (vector*)&local_a8, bVar6);
        uVar8 = (uint)(Matrix44T*)param_5;
        pvVar7 = (vector*)(&param_6->field_5744, param_7)->GetRenderGroup();
        (pDVar2->field_6008, param_1, param_2, uVar8, param_4, (Viewport*)(Matrix44T*)param_5, &local_a8, pvVar7)
            ->RenderCircle2DGroup();
    }

    // 0x1009c9fc0, 160 bytes, placed by class name
    // DebugPrimitiveRendererBasic::OnEndFrame()
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
        (&field_5432)->OnEndFrame();
    }

} // namespace jag
