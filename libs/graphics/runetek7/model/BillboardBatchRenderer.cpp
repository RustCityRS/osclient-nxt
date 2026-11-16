// libs/graphics/runetek7/model/BillboardBatchRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "BillboardBatchRenderer.h"

namespace jag::graphics {
    // 0x103bbdf18, 96 bytes, __common; set at startup by ___cxx_global_var_init.228
    render::VertexDeclaration BillboardBatchRenderer::m_vertexDecl = VertexDeclaration();

    // 0x103bbdf78, 104 bytes, __common; set at startup by ___cxx_global_var_init.229
    render::VertexDeclaration BillboardBatchRenderer::m_vertexDeclLP = VertexDeclaration();

    // 0x100868e00, 48 bytes, base-object constructor, placed by class name and debug map
    // BillboardBatchRenderer::BillboardBatchRenderer()
    void BillboardBatchRenderer::BillboardBatchRenderer() {
        new (this) DrawableRenderer();
        field_0 = &PTR__BillboardBatchRenderer_100f16190;
        field_8 = 4294967295;
        field_12 = 4294967295;
    }

    // 0x100868e30, 16 bytes, complete-object constructor, placed by class name and debug map
    // BillboardBatchRenderer::BillboardBatchRenderer(): jumps straight to the base-object constructor

    // 0x100868e40, 64 bytes, base-object destructor, placed by class name and debug map
    // BillboardBatchRenderer::~BillboardBatchRenderer()
    void BillboardBatchRenderer::~BillboardBatchRenderer() {
        field_0 = &PTR__BillboardBatchRenderer_100f16190;
        Destroy(this);
        ~AutoSingleton();
    }

    // 0x100868e80, 16 bytes, placed by class name and debug map
    // BillboardBatchRenderer::Destroy()
    void BillboardBatchRenderer::Destroy() {
        DestroyRenderingResources(this);
    }

    // 0x100868e90, 16 bytes, complete-object destructor, placed by class name and debug map
    // BillboardBatchRenderer::~BillboardBatchRenderer(): jumps straight to the base-object destructor

    // 0x100868ea0, 32 bytes, deleting destructor, placed by class name and debug map
    // BillboardBatchRenderer::~BillboardBatchRenderer()
    void BillboardBatchRenderer::~BillboardBatchRenderer() {
        ~BillboardBatchRenderer(this);
        operator_delete(this);
    }

    // 0x100868ec0, 80 bytes, placed by class name and debug map
    // BillboardBatchRenderer::Initialise(RT7Core&)
    undefined4 BillboardBatchRenderer::Initialise(RT7Core* param_1) {
        uint uVar1;
        undefined4 uVar2;

        uVar1 = param_1->GetPSTextureSlotManager();
        uVar2 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        field_8 = uVar2;
        uVar1 = param_1->GetPSTextureSlotManager();
        uVar2 = ShaderResourceSlotManager::RegisterSlotID(uVar1);
        field_12 = uVar2;
        CreateRenderingResources();
        return 1;
    }

    // 0x100868f10, 48 bytes, placed by class name and debug map
    // BillboardBatchRenderer::CreateRenderingResources()
    undefined8 BillboardBatchRenderer::CreateRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_10[8];

        local_10->~AutoSingleton("BillboardBatchRenderer");
        InitialiseVertexDeclarations();
        return 1;
    }

    // 0x100868f40, 80 bytes, placed by class name and debug map
    // BillboardBatchRenderer::DestroyRenderingResources()
    void BillboardBatchRenderer::DestroyRenderingResources() {
        VertexDeclarationManager* pVVar1;
        Singleton<render::VertexDeclarationManager>* this_00;

        pVVar1 = (VertexDeclarationManager*)Instance();
        pVVar1->Unregister((VertexDeclaration*)&m_vertexDecl);
        this_00 = (Singleton<render::VertexDeclarationManager>*)&m_vertexDecl;
        m_vertexDecl.Destroy();
        pVVar1 = (VertexDeclarationManager*)this_00->Instance();
        pVVar1->Unregister((VertexDeclaration*)&m_vertexDeclLP);
        m_vertexDeclLP.Destroy();
    }

    // 0x100868f90, 928 bytes, placed by class name and debug map
    // BillboardBatchRenderer::Render(BillboardBatch_DE const&, render::RenderContext&, render::DrawCallState const&, SceneViewData const&, RenderPassType, EffectManager&)
    void BillboardBatchRenderer::Render(long param_1, RenderContext* param_2, DrawCallState* param_3,
                                        SceneViewData* param_4, undefined4 param_6, EffectManager* param_7) {
        BillboardBatchInstance* this_00;
        GeometryBatch* pGVar1;
        char cVar3;
        byte bVar4;
        undefined4 uVar5;
        uint uVar6;
        uint uVar7;
        RenderMaterial* pRVar8;
        RenderPassEffect* this_01;
        shared_ptr* psVar9;
        shared_ptr<Shader>* this_02;
        Shader* this_03;
        ShaderProgram* this_04;
        Layout* this_05;
        RenderPipelineState* this_06;
        HashedString* pHVar10;
        VertexAnimation* this_07;
        vector_map* pvVar11;
        vector_map* pvVar12;
        vector_map* pvVar13;
        TextureAtlasReference* pTVar14;
        undefined* puVar15;
        IrradianceEffect* this_08;
        Matrix44T* pMVar16;
        Layout* this_09;
        long lVar17;
        InputAssemblerState* pIVar18;
        DrawCallState* pDVar19;
        RenderContext* pRVar20;
        float fVar21;
        EffectList in_stack_ffffffffffffff48;
        DrawCallState local_b0;
        ShaderProgram* local_68;
        VertexAnimation* local_60;
        Model* local_58;
        ParticleMaterial* local_50;
        BillboardBatchInstance* local_48;
        vector_map* local_40;
        GeometryBatch* local_38;

        this_00 = *(BillboardBatchInstance**)(param_1 + 112);
        if (this_00 == (BillboardBatchInstance*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("pBillboardBatchInstance != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "BillboardBatchRenderer.cpp",
                      49, (char*)0);
        }
        local_38 = (GeometryBatch*)this_00->GetBillboardBatch();
        local_58 = (Model*)this_00->size();
        pRVar8 = (RenderMaterial*)this_00->GetMaterial();
        this_01 = (RenderPassEffect*)pRVar8->GetRenderPassEffect(param_6);
        psVar9 = (shared_ptr*)this_01->GetShader(param_4);
        if (!operator!=(psVar9, (_func_decltype_nullptr*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("renderPassEffect.GetShader(viewData) != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "BillboardBatchRenderer.cpp",
                      56, "No shader program available for this render pass");
        }
        this_02 = (shared_ptr<Shader>*)this_01->GetShader(param_4);
        this_03 = (Shader*)shared_ptr<Shader>::operator*(this_02);
        cVar3 = this_03->IsReady();
        if (cVar3 != '\0') {
            local_48 = this_00;
            new (&local_b0) render::DrawCallState(param_3);
            this_04 = (ShaderProgram*)this_03->GetProgram();
            pRVar20 = param_2;
            this_04->GetNativeShaderProgram();
            this_05 = (Layout*)this_03->second();
            eastl::string::Layout::SSOBeginPtr(this_05, (type*)param_3);
            this_06 = (RenderPipelineState*)local_b0.GetRenderPipelineState();
            local_68 = this_04;
            this_06->SetShaderProgram(this_04);
            local_50 = (ParticleMaterial*)local_48->GetMaterial();
            EffectManager::SetShaderConstants((DrawCallState*)param_7, (RenderContext*)&local_b0, (Shader*)pRVar20,
                                              in_stack_ffffffffffffff48);
            pHVar10 = (HashedString*)graphics::operator*((graphics*)116);
            fVar21 = (float)local_58->GetCurrentFade();
            local_68->SetShaderConstFloat1(pHVar10, fVar21);
            cVar3 = local_38->HasBones();
            if (cVar3 != '\0') {
                this_07 = (VertexAnimation*)local_48->GetBatchList();
                pGVar1 = local_38;
                uVar5 = local_38->GetBoneCount();
                local_40 = (vector_map*)CONCAT44(local_40._4_4_, uVar5);
                uVar6 = pGVar1->GetFaceLabelCount();
                uVar7 = pGVar1->GetBillboardLabelCount();
                local_60 = this_07;
                this_07->SetMaxSize((uint)local_40, uVar6, uVar7);
                pGVar1 = local_38;
                pvVar11 = (vector_map*)local_38->GetBoneIDMap();
                local_40 = (vector_map*)pGVar1->GetWorld();
                pvVar12 = (vector_map*)pGVar1->get_overflow_allocator();
                pvVar13 = (vector_map*)pGVar1->GetBillboardLabelIDMap();
                pRVar20 = param_2;
                local_60->DeferredUpdateAnimation(pvVar11, local_40, pvVar12, pvVar13);
                local_60->SetShaderConstants(pRVar20, this_03);
            }
            pTVar14 = (TextureAtlasReference*)local_50->GetTextureAtlasReference();
            TextureAtlasing::SetShaderConstants(&local_b0, pRVar20, this_03, pTVar14,
                                                ((BillboardBatchRenderer*)this)->field_8,
                                                ((BillboardBatchRenderer*)this)->field_12);
            puVar15 = (undefined*)local_50->data();
            if (puVar15 == AlphaMode::ALPHA_OPAQUE) {
                uVar6 = 4294967295;
            } else {
                bVar4 = local_50->GetAlphaTestThreshold();
                uVar6 = (uint)bVar4;
            }
            AlphaTesting::SetShaderConstants(this_03, uVar6);
            cVar3 = (&this_01->field_16, 21)->Contains();
            if (cVar3 != '\0') {
                cVar3 = param_7->IsEnabled(40);
                if (cVar3 == '\0') {
                    this_08 = (IrradianceEffect*)local_58->GetIrradianceEffect();
                    this_08->SetShaderConstants(this_03);
                } else {
                    IrradianceEffect::SetIdentityShaderConstants(this_03);
                }
            }
            pHVar10 = (HashedString*)graphics::operator*((graphics*)0);
            pMVar16 = (Matrix44T*)local_58->GetMaterial();
            local_68->SetShaderConstMatrix4(pHVar10, 1, pMVar16, 0);
            pDVar19 = &local_b0;
            this_09 = (Layout*)pDVar19->GetRenderPipelineState();
            lVar17 = pDVar19->Instance();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                Layout::SetHeapSize(this_09, lVar17 + 960);
            pIVar18 = (InputAssemblerState*)local_38->GetForwardPassIAState();
            pDVar19 = &local_b0;
            pDVar19->SetInputAssemblerState(pIVar18);
            DrawPrimitives((BillboardBatchRenderer*)pDVar19, (BillboardBatch*)local_38, pRVar20, &local_b0,
                           (vector*)(local_48->m_vertexAnimation + 80), *(vector_map**)(param_1 + 104));
            local_b0.~DrawCallState();
        }
    }

    // 0x100869350, 784 bytes, placed by class name and debug map
    // BillboardBatchRenderer::DrawPrimitives(BillboardBatch const&, render::RenderContext&, render::DrawCallState&, eastl::vector<SourceModelExternalIndexSection, eastl::allocator> const&, eastl::vector_map<int, FaceGroupRenderMasks, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, FaceGroupRenderMasks>, eastl::allocator> > const*)
    void BillboardBatchRenderer::DrawPrimitives(BillboardBatch* param_1, RenderContext* param_2, DrawCallState* param_3,
                                                vector* param_4, vector_map* param_5) {
        uint uVar2;
        uint uVar3;
        undefined4 uVar4;
        ulong uVar5;
        type* ptVar6;
        uint* puVar7;
        long lVar8;
        long lVar9;
        AnimationDescriptor* pAVar10;
        Component* pCVar11;
        vector* this_00;
        undefined8 uVar12;
        Layout* this_01;
        undefined8 uVar13;
        ulong uVar14;
        int local_ea0;
        uint local_e9c;
        FixedIndexPrimitiveBatchData<300ul> local_e98[3680];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        render::FixedIndexPrimitiveBatchData<300ul>::FixedIndexPrimitiveBatchData(local_e98);
        uVar5 = param_4->size();
        if ((param_5 == (vector_map*)0) || (uVar5 == 0)) {
            uVar3 = param_1->GetIndexCount();
            ptVar6 = (type*)(ulong)uVar3;
            pCVar11 = (Component*)param_1->GetLinearLookatAcceleration();
            uVar4 = pCVar11->GetCurrentX();
            local_e98->AddPrimitiveBatch(ptVar6, 0, uVar4);
        } else {
            local_e9c = 0;
            local_ea0 = 0;
            uVar14 = 0;
            do {
                ptVar6 = (type*)eastl::vector<SourceModelExternalIndexSection, eastl::allocator>::operator[](
                    (vector<SourceModelExternalIndexSection, eastl::allocator>*)param_4, uVar14);
                puVar7 = (uint*)std::array<IndexRange, 5ul>::operator[]((ulong)(ptVar6 + 20));
                lVar8 = param_5->find(ptVar6);
                lVar9 = param_5->end();
                if (lVar8 == lVar9) {
                LAB_100869500:
                    if (uVar5 - 1 == uVar14) {
                        uVar3 = puVar7[1];
                        pAVar10 = (AnimationDescriptor*)param_1->GetLinearLookatAcceleration();
                        uVar2 = pAVar10->GetLoopLength();
                        if (uVar2 < uVar3) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("(currentIndexStart + (indexRange.m_indexEnd - currentIndexStart)) <= "
                                      "billboardBatch.GetIndexBuffer().GetIndexCount()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/model/BillboardBatchRenderer.cpp",
                                      222, (char*)0);
                        }
                        uVar3 = puVar7[1];
                        pCVar11 = (Component*)param_1->GetLinearLookatAcceleration();
                        pCVar11->GetCurrentX();
                        ptVar6 = (type*)(ulong)(uVar3 - local_e9c);
                        local_e98->AddPrimitiveBatch(ptVar6, local_e9c);
                    } else {
                        local_ea0 = local_ea0 + 1;
                    }
                } else {
                    if (((lVar8 + 4))->IsHidden() == '\0')
                        goto LAB_100869500;
                    if (local_ea0 != 0) {
                        uVar3 = *puVar7;
                        pAVar10 = (AnimationDescriptor*)param_1->GetLinearLookatAcceleration();
                        uVar2 = pAVar10->GetLoopLength();
                        if (uVar2 < uVar3) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("(currentIndexStart + (indexRange.m_indexStart - currentIndexStart)) <= "
                                      "billboardBatch.GetIndexBuffer().GetIndexCount()",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/model/BillboardBatchRenderer.cpp",
                                      210, (char*)0);
                        }
                        uVar3 = *puVar7;
                        pCVar11 = (Component*)param_1->GetLinearLookatAcceleration();
                        pCVar11->GetCurrentX();
                        ptVar6 = (type*)(ulong)(uVar3 - local_e9c);
                        local_e98->AddPrimitiveBatch(ptVar6, local_e9c);
                    }
                    local_e9c = puVar7[1];
                    local_ea0 = 0;
                }
                uVar14 = uVar14 + 1;
            } while (uVar5 != uVar14);
        }
        uVar4 = render::FixedIndexPrimitiveBatchData<300ul>::GetBatchCount(local_e98);
        this_00 = local_e98->SSOBeginPtr(ptVar6);
        uVar12 = this_00->HeapBeginPtr();
        this_01 = (Layout*)local_e98->GetStartIndexByteOffset();
        uVar13 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
            Layout::HeapBeginPtr(this_01);
        param_2->DrawMultiIndexedPrimitives(param_3, 4, uVar4, uVar12, uVar13);
        local_e98->~FixedIndexPrimitiveBatchData();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100869660, 528 bytes, placed by class name and debug map
    // BillboardBatchRenderer::InitialiseVertexDeclarations()
    void BillboardBatchRenderer::InitialiseVertexDeclarations() {
        uint uVar1;
        int iVar2;
        ulong uVar3;
        VertexDeclarationManager* pVVar4;
        Singleton<render::VertexDeclarationManager>* pSVar5;
        ShaderProgramVariable local_e0;
        ShaderProgramVariable local_b8;
        ShaderProgramVariable local_90;
        ShaderProgramVariable local_68;
        ShaderProgramVariable local_40;

        uVar1 = graphics::operator*((graphics*)216);
        local_e0.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)235);
        local_b8.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)252);
        local_90.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)231);
        local_68.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)249);
        local_40.GetVertexElementDesc(uVar1);
        uVar3 = local_e0.data();
        render::VertexDeclaration::Create((VertexElementDesc*)&m_vertexDecl, uVar3, (void*)5, 0);
        pSVar5 = (Singleton<render::VertexDeclarationManager>*)&m_vertexDecl;
        iVar2 = m_vertexDecl.GetVertexStride(0);
        if (iVar2 != 36) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_vertexDecl.GetVertexStride() == sizeof(BillboardBatchVertex)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "BillboardBatchRenderer.cpp",
                      158, (char*)0);
        }
        pVVar4 = (VertexDeclarationManager*)pSVar5->Instance();
        pVVar4->Register((VertexDeclaration*)&m_vertexDecl);
        uVar1 = graphics::operator*((graphics*)212);
        local_e0.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)235);
        local_b8.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)252);
        local_90.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)231);
        local_68.GetVertexElementDesc(uVar1);
        uVar1 = graphics::operator*((graphics*)249);
        local_40.GetVertexElementDesc(uVar1);
        uVar3 = local_e0.data();
        render::VertexDeclaration::Create((VertexElementDesc*)&m_vertexDeclLP, uVar3, (void*)5, 0);
        pSVar5 = (Singleton<render::VertexDeclarationManager>*)&m_vertexDeclLP;
        iVar2 = m_vertexDeclLP.GetVertexStride(0);
        if (iVar2 != 28) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_vertexDeclLP.GetVertexStride() == sizeof(BillboardBatchVertexLP)",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/model/"
                      "BillboardBatchRenderer.cpp",
                      178, (char*)0);
        }
        pVVar4 = (VertexDeclarationManager*)pSVar5->Instance();
        pVVar4->Register((VertexDeclaration*)&m_vertexDeclLP);
    }

    // 0x100889460, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.228
    void ___cxx_global_var_init_228() {
        new (&BillboardBatchRenderer::m_vertexDecl) render::VertexDeclaration();
        ___cxa_atexit(render::VertexDeclaration::~VertexDeclaration, &BillboardBatchRenderer::m_vertexDecl, 4294967296);
    }

    // 0x1008894a0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.229
    void ___cxx_global_var_init_229() {
        new (&BillboardBatchRenderer::m_vertexDeclLP) render::VertexDeclaration();
        ___cxa_atexit(render::VertexDeclaration::~VertexDeclaration, &BillboardBatchRenderer::m_vertexDeclLP,
                      4294967296);
    }

} // namespace jag::graphics

namespace jag::fixedfunction {
    // 0x10086fff0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::TextureAtlas::UploadDelayedMaterials()::$_1, void>(graphics::TextureAtlas::UploadDelayedMaterials()::$_1&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::UploadDelayedMaterials()::$_1, void>(
        graphics::TextureAtlas::UploadDelayedMaterials()::$_1&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100870000, 48 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::TextureAtlas::UploadDelayedMaterials()::$_1, void>(graphics::TextureAtlas::UploadDelayedMaterials()::$_1&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<graphics::TextureAtlas::UploadDelayedMaterials()::$_1,
   void>(graphics::TextureAtlas::UploadDelayedMaterials()::$_1&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::UploadDelayedMaterials()::$_1, void>(
        graphics::TextureAtlas::UploadDelayedMaterials()::$_1&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        *(undefined8*)((long)param_2 + 64) = *(undefined8*)((long)param_1 + 64);
        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)((long)param_1 + 8);
        uVar3 = *(undefined8*)((long)param_1 + 16);
        uVar4 = *(undefined8*)((long)param_1 + 24);
        uVar5 = *(undefined8*)((long)param_1 + 32);
        uVar6 = *(undefined8*)((long)param_1 + 40);
        uVar7 = *(undefined8*)((long)param_1 + 56);
        *(undefined8*)((long)param_2 + 48) = *(undefined8*)((long)param_1 + 48);
        *(undefined8*)((long)param_2 + 56) = uVar7;
        *(undefined8*)((long)param_2 + 32) = uVar5;
        *(undefined8*)((long)param_2 + 40) = uVar6;
        *(undefined8*)((long)param_2 + 16) = uVar3;
        *(undefined8*)((long)param_2 + 24) = uVar4;
        *(undefined8*)param_2 = uVar1;
        *(undefined8*)((long)param_2 + 8) = uVar2;
    }

    // 0x100870030, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::TextureAtlas::UploadDelayedMaterials()::$_1, void>(graphics::TextureAtlas::UploadDelayedMaterials()::$_1&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::UploadDelayedMaterials()::$_1, void>(
        graphics::TextureAtlas::UploadDelayedMaterials()::$_1&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100870040, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::TextureAtlas::UploadDelayedMaterials()::$_1, void>(graphics::TextureAtlas::UploadDelayedMaterials()::$_1&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<graphics::TextureAtlas::UploadDelayedMaterials()::$_1,
   void>(graphics::TextureAtlas::UploadDelayedMaterials()::$_1&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::UploadDelayedMaterials()::$_1, void>(
        graphics::TextureAtlas::UploadDelayedMaterials()::$_1&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        graphics::TextureAtlas::UploadDelayedMaterials()::$_1::operator()(param_1, param_2);
    }

    // 0x100870100, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::TextureAtlas::UploadDelayedMaterials()::$_1, void>(graphics::TextureAtlas::UploadDelayedMaterials()::$_1&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::UploadDelayedMaterials()::$_1, void>(
        graphics::TextureAtlas::UploadDelayedMaterials()::$_1&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x1008715d0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (graphicutils::TextureAtlasSlot const&), 64ul, 16ul, (Methods)0>::function<graphics::TextureAtlas::GetTextureSlots(eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*, WrapArray<graphics::MaterialInfo const> const&)::$_5, void>(graphics::TextureAtlas::GetTextureSlots(eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*, WrapArray<graphics::MaterialInfo const> const&)::$_5&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::GetTextureSlots(
            eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*,
            WrapArray<graphics::MaterialInfo_const> const&)::$_5,
        void>(graphics::TextureAtlas::GetTextureSlots(
        eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*,
        WrapArray<graphics::MaterialInfo_const> const&)::$_5&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {}

    // 0x1008715e0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (graphicutils::TextureAtlasSlot const&), 64ul, 16ul, (Methods)0>::function<graphics::TextureAtlas::GetTextureSlots(eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*, WrapArray<graphics::MaterialInfo const> const&)::$_5, void>(graphics::TextureAtlas::GetTextureSlots(eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*, WrapArray<graphics::MaterialInfo const> const&)::$_5&&)::{lambda(void*, graphicutils::TextureAtlasSlot const&)#1}::__invoke(void*, graphicutils::TextureAtlasSlot const&)
    void fixedfunction::function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::GetTextureSlots(
            eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*,
            WrapArray<graphics::MaterialInfo_const> const&)::$_5,
        void>(graphics::TextureAtlas::GetTextureSlots(
        eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*,
        WrapArray<graphics::MaterialInfo_const> const&)::$_5&&)::{
        lambda(void*, graphicutils::TextureAtlasSlot_const&) #1
    }
    ::TextureAtlasSlot_const__() {}

    // 0x1008715f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (graphicutils::TextureAtlasSlot const&), 64ul, 16ul, (Methods)0>::function<graphics::TextureAtlas::GetTextureSlots(eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*, WrapArray<graphics::MaterialInfo const> const&)::$_5, void>(graphics::TextureAtlas::GetTextureSlots(eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*, WrapArray<graphics::MaterialInfo const> const&)::$_5&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(graphicutils::TextureAtlasSlot_const&), 64ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::GetTextureSlots(
            eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*,
            WrapArray<graphics::MaterialInfo_const> const&)::$_5,
        void>(graphics::TextureAtlas::GetTextureSlots(
        eastl::fixed_vector<graphics::TextureAtlasSlot2DGroup, 32ul, true, eastl::allocator>*,
        WrapArray<graphics::MaterialInfo_const> const&)::$_5&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {}

    // 0x1008716f0, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8, void>(graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
    /* __invoke(void*, void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8, void>(
        graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8&&)::{
        lambda(void*, void*) #1
    }
    ::__invoke(void* param_1, void* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100871700, 32 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8, void>(graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<graphics::TextureAtlas::UploadTexture(int,
   graphics::TextureAtlasTextureMapping&)::$_8,
   void>(graphics::TextureAtlas::UploadTexture(int,
   graphics::TextureAtlasTextureMapping&)::$_8&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8, void>(
        graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(void* param_1, void* param_2) {
        int->UploadTexture(graphics::TextureAtlasTextureMapping&)::$_8::__8(param_2, param_1);
    }

    // 0x100871770, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8, void>(graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8, void>(
        graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::RenderContext__(void* param_1, RenderContext* param_2) {
        operator()(param_1, param_2);
    }

    // 0x100871780, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8, void>(graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<graphics::TextureAtlas::UploadTexture(int,
   graphics::TextureAtlasTextureMapping&)::$_8,
   void>(graphics::TextureAtlas::UploadTexture(int,
   graphics::TextureAtlasTextureMapping&)::$_8&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8, void>(
        graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(void* param_1, RenderContext * param_2) {
        int->UploadTexture(graphics::TextureAtlasTextureMapping&)::$_8::operator()(param_1, param_2);
    }

    // 0x100871830, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8, void>(graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8&&)::{lambda(void*)#1}::__invoke(void*)
    /* __invoke(void*) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8, void>(
        graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8&&)::{
        lambda(void*) #1
    }
    ::__invoke(void* param_1) {
        operator()(this, param_1);
    }

    // 0x100871840, 16 bytes, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8, void>(graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8&&)::{lambda(void*)#1}::operator()(void*) const
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<graphics::TextureAtlas::UploadTexture(int,
   graphics::TextureAtlasTextureMapping&)::$_8,
   void>(graphics::TextureAtlas::UploadTexture(int,
   graphics::TextureAtlasTextureMapping&)::$_8&&)::{lambda(void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*)
   const */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function<
        graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8, void>(
        graphics::TextureAtlas::UploadTexture(int, graphics::TextureAtlasTextureMapping&)::$_8&&)::{
        lambda(void*) #1
    }
    ::operator()(void* param_1) {
        int->UploadTexture(graphics::TextureAtlasTextureMapping&)::$_8::~__8((__8*)this);
    }

} // namespace jag::fixedfunction

namespace jag {
    // 0x100873480, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::TextureAtlasReference* placement_new<graphics::TextureAtlasReference, graphics::TextureAtlasReference>(void*, graphics::TextureAtlasReference&&)
    TextureAtlasReference*
    placement_new<graphics::TextureAtlasReference, graphics::TextureAtlasReference>(void* param_1,
                                                                                    TextureAtlasReference* param_2) {
        graphics::TextureAtlasReference::TextureAtlasReference(param_1, param_2);
        return param_1;
    }

    // 0x1008734a0, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::TextureAtlasReference, MakeSharedPool<graphics::TextureAtlasReference, 8192> >* placement_new<MakeSharedPoolRefCounter<graphics::TextureAtlasReference, MakeSharedPool<graphics::TextureAtlasReference, 8192> >, MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData*&, graphics::TextureAtlasReference*>(void*, MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData*&, graphics::TextureAtlasReference*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<graphics::TextureAtlasReference,
                                                MakeSharedPool<graphics::TextureAtlasReference, 8192>>,
                       MakeSharedPool<graphics::TextureAtlasReference, 8192>::RefCounterAndData*&,
                       graphics::TextureAtlasReference*>(void* param_1, RefCounterAndData** param_2,
                                                         TextureAtlasReference** param_3) {
        MakeSharedPoolRefCounter<
            graphics::TextureAtlasReference,
            MakeSharedPool<graphics::TextureAtlasReference, 8192>>::MakeSharedPoolRefCounter(param_1, *param_2,
                                                                                             *param_3);
        return param_1;
    }

    // 0x100875820, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::TextureAtlas* placement_new<graphics::TextureAtlas, graphics::TextureManager&, unsigned int&, std::recursive_mutex&, graphicutils::TextureAtlasUsage const* const&>(void*, graphics::TextureManager&, unsigned int&, std::recursive_mutex&, graphicutils::TextureAtlasUsage const* const&)
    /* graphics::TextureAtlas* placement_new<graphics::TextureAtlas,
   graphics::TextureManager&, unsigned int&, std::recursive_mutex&,
   graphicutils::TextureAtlasUsage const* const&>(void*, graphics::TextureManager&,
   unsigned int&, std::recursive_mutex&, graphicutils::TextureAtlasUsage const* const&) */

    TextureAtlas* jag::placement_new<graphics::TextureAtlas, graphics::TextureManager&, unsigned int&,
                                     std::recursive_mutex&, graphicutils::TextureAtlasUsage_const* const&>(
        void* param_1, TextureManager* param_2, uint* param_3, recursive_mutex* param_4, TextureAtlasUsage** param_5) {
        graphics::TextureAtlas::TextureAtlas(param_1, param_2, *param_3, param_4, *param_5);
        return param_1;
    }

    // 0x100875840, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::TextureAtlas>* placement_new<ref_counter_shared<graphics::TextureAtlas>, int, graphics::TextureAtlas*&>(void*, int&&, graphics::TextureAtlas*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<graphics::TextureAtlas>, int, graphics::TextureAtlas*&>(
        void* param_1, int* param_2, TextureAtlas** param_3) {
        ref_counter_shared<graphics::TextureAtlas>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10087fcc0, 48 bytes, inline, placed by debug map only (low confidence)
    // graphics::TextureData* placement_new<graphics::TextureData>(void*)
    TextureData* placement_new<graphics::TextureData>(void* param_1) {
        *(undefined8*)param_1 = 0;
        *(undefined8*)((long)param_1 + 8) = 0;
        *(undefined8*)((long)param_1 + 16) = 0;
        graphics::TextureData::TextureData(param_1);
        return param_1;
    }

    // 0x10087fcf0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::TextureData>* placement_new<ref_counter_shared<graphics::TextureData>, int, graphics::TextureData*&>(void*, int&&, graphics::TextureData*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<graphics::TextureData>, int, graphics::TextureData*&>(
        void* param_1, int* param_2, TextureData** param_3) {
        ref_counter_shared<graphics::TextureData>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100882290, 48 bytes, inline, placed by debug map only (low confidence)
    // void ReorderFromLE<unsigned short>(unsigned short&)
    /* void ReorderFromLE<short>(short&) */

    void ReorderFromLE<short>(short* param_1) {
        if (IsBigEndian() != '\0') {
            DoByteReorder<EndianSwap, unsigned short>((ushort*)param_1);
        }
    }

    // 0x100882510, 48 bytes, inline, placed by debug map only (low confidence)
    // void ReorderFromLE<float>(float&)
    void ReorderFromLE<float>(float* param_1) {
        if (IsBigEndian() != '\0') {
            DoByteReorder<EndianSwap, float>(param_1);
        }
    }

    // 0x100884d60, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::BillboardBatch* placement_new<graphics::BillboardBatch>(void*)
    BillboardBatch* placement_new<graphics::BillboardBatch>(void* param_1) {
        graphics::BillboardBatch::BillboardBatch(param_1);
        return param_1;
    }

    // 0x100884d80, 32 bytes, inline, placed by debug map only (low confidence)
    // MakeSharedPoolRefCounter<graphics::BillboardBatch, MakeSharedPool<graphics::BillboardBatch, 64> >* placement_new<MakeSharedPoolRefCounter<graphics::BillboardBatch, MakeSharedPool<graphics::BillboardBatch, 64> >, MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData*&, graphics::BillboardBatch*>(void*, MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData*&, graphics::BillboardBatch*&&)
    MakeSharedPoolRefCounter*
    jag::placement_new<MakeSharedPoolRefCounter<graphics::BillboardBatch, MakeSharedPool<graphics::BillboardBatch, 64>>,
                       MakeSharedPool<graphics::BillboardBatch, 64>::RefCounterAndData*&, graphics::BillboardBatch*>(
        void* param_1, RefCounterAndData** param_2, BillboardBatch** param_3) {
        MakeSharedPoolRefCounter<graphics::BillboardBatch,
                                 MakeSharedPool<graphics::BillboardBatch, 64>>::MakeSharedPoolRefCounter(param_1,
                                                                                                         *param_2,
                                                                                                         *param_3);
        return param_1;
    }

    // 0x100886320, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::BillboardBatch* placement_new<graphics::BillboardBatch, graphics::BillboardBatch&>(void*, graphics::BillboardBatch&)
    BillboardBatch* placement_new<graphics::BillboardBatch, graphics::BillboardBatch&>(void* param_1,
                                                                                       BillboardBatch* param_2) {
        graphics::BillboardBatch::BillboardBatch(param_1, param_2);
        return param_1;
    }

} // namespace jag

namespace jag::math {
    // 0x10086aef0, 96 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<short> Vector3TFromVector3<short>(Vector3T<float> const&)
    undefined8 Vector3TFromVector3<short>(Vector3T* param_1) {
        float fVar1;
        float fVar2;
        undefined8 in_RAX;
        vector* pvVar3;
        float* pfVar4;
        undefined8 uVar5;
        undefined1 local_28[8];

        local_28 = (undefined1[8])in_RAX;
        pvVar3 = SSOBeginPtr(param_1);
        fVar1 = *(float*)pvVar3;
        pfVar4 = (float*)y();
        fVar2 = *pfVar4;
        pfVar4 = (float*)second();
        new (local_28)
            graphics::GUIAnimationRGB((int)(short)(int)fVar1, (int)(short)(int)fVar2, (int)(short)(int)*pfVar4);
        uVar5._0_2_ = local_28._0_2_;
        uVar5._2_2_ = local_28._2_2_;
        uVar5._4_2_ = local_28._4_2_;
        uVar5._6_2_ = local_28._6_2_;
        return uVar5;
    }

} // namespace jag::math
