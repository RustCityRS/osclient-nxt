// libs/graphics/runetek7/particles/ParticleSystemRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ParticleSystemRenderer.h"

namespace jag::graphics {
    // 0x100f43894, 4 bytes, __data
    ParticleSystemRenderer::m_maxParticlesPerBatch = 10000;

    // 0x100f43898, 4 bytes, __data
    ParticleSystemRenderer::m_onlyShowModularEmitterIndex = -1;

    // 0x100f4389c, 1 bytes, __data
    ParticleSystemRenderer::m_testNullGPUBufferMappings = 0;

    // 0x100f4389d, 1 bytes, __data
    ParticleSystemRenderer::m_testParticleRenderLimitExceeded = 0;

    // 0x100f43a68, 1 bytes, __data
    ParticleSystemRenderer::m_renderAlphaEarlyParticles = 1;

    // 0x100f43a69, 1 bytes, __data
    ParticleSystemRenderer::m_renderAlphaLateParticles = 1;

    // 0x100017ca0: the linker folded this into weak_ptr<oldscape::rs2lib::IfType>::weak_ptr(), which has identical code
    ParticleSystemRenderer::Metrics::PassDrawInfo::PassDrawInfo();

    // 0x100030be0: the linker folded this into weak_ptr<oldscape::rs2lib::IfType>::weak_ptr(), which has identical code
    ParticleSystemRenderer::Metrics::PassDrawInfo::PassDrawInfo();

    // 0x1000e10d0: the linker folded this into oldscape::FoundObject::~FoundObject(), which has identical code
    ParticleSystemRenderer::BatchData::ParticleDataWrapper::~ParticleDataWrapper();

    // 0x10012d160: the linker folded this into oldscape::FoundObject::~FoundObject(), which has identical code
    ParticleSystemRenderer::BatchData::ParticleDataWrapper::~ParticleDataWrapper();

    // 0x1007d3d50, 736 bytes, base-object constructor, placed by class name
    // ParticleSystemRenderer::ParticleSystemRenderer(render::RenderTargetsManager*, ThreadPool*)
    void ParticleSystemRenderer::ParticleSystemRenderer(RenderTargetsManager* param_1, ThreadPool* param_2) {
        _func_decltype_nullptr* p_Var1;
        char* this_00;

        new (this) DrawableBatchRenderer();
        p_Var1 = (_func_decltype_nullptr*)&DAT_00000001;
        new (&field_8, true) render::RenderDeviceOnEndFrame();
        field_0 = &PTR__ParticleSystemRenderer_100f14cb0;
        field_8 = &PTR__ParticleSystemRenderer_100f14ce8;
        field_24 = param_1;
        field_32 = param_2;
        std::vector<std::future<void>, std::allocator<std::future<void>>>::vector();
        new (field_64) render::InputAssemblerState();
        new (&field_256) render::DynamicBuffer<render::VertexBuffer>();
        new (&field_344) render::DynamicBuffer<render::VertexBuffer>();
        new (&field_432) render::DynamicBuffer<render::VertexBuffer>();
        new (&field_520) render::DynamicBuffer<render::VertexBuffer>();
        new (&field_608) render::DynamicBuffer<render::VertexBuffer>();
        new (&field_696) render::DynamicBuffer<render::VertexBuffer>();
        new (&field_784) render::IndexBuffer();
        new (&field_872) render::VertexDeclaration();
        new (field_968) ParticleCommonMaterials();
        new (field_4360) ParticleData();
        new (field_4624) BatchData();
        field_4680 = (RenderToTextureHelper*)0;
        new (field_4688, p_Var1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_4704, p_Var1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (m_metrics) Metrics();
        if (field_32 == (ThreadPool*)0) {
            this_00 = "m_sortingThreadPool";
            LogFatalError("m_sortingThreadPool",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "particles/ParticleSystemRenderer.cpp",
                          103, 0, (char*)0);
            /* WARNING: Subroutine does not return */
            this_00->~OptionStore();
        }
        (field_4360, 1000)->ReserveRenderBuffers();
    }

    // 0x1007d40d0, 16 bytes, complete-object constructor, placed by class name
    // ParticleSystemRenderer::ParticleSystemRenderer(render::RenderTargetsManager*, ThreadPool*): jumps straight to the base-object constructor

    // 0x1007d40e0, 448 bytes, base-object destructor, placed by class name
    // ParticleSystemRenderer::~ParticleSystemRenderer()
    void ParticleSystemRenderer::~ParticleSystemRenderer() {
        NpcUID* extraout_RDX;
        NpcUID* in_RSI;

        field_0 = &PTR__ParticleSystemRenderer_100f14cb0;
        field_8 = &PTR__ParticleSystemRenderer_100f14ce8;
        Destroy(this);
        field_4704->~shared_ptr();
        field_4688->~shared_ptr();
        field_4624->~BatchData();
        field_4360->~ParticleData();
        field_968->~ParticleCommonMaterials();
        (&field_872)->~VertexDeclaration();
        (&field_784)->~IndexBuffer();
        (&field_696)->~DynamicBuffer();
        (&field_608)->~DynamicBuffer();
        (&field_520)->~DynamicBuffer();
        (&field_432)->~DynamicBuffer();
        (&field_344)->~DynamicBuffer();
        (&field_256)->~DynamicBuffer();
        field_64->~InputAssemblerState();
        (&field_40)->~vector();
        (&field_8)->~RenderDeviceOnEndFrame();
        eastl::destruct<oldscape::highlight::NpcUID*>((eastl*)this, in_RSI, extraout_RDX);
    }

    // 0x1007d42a0, 16 bytes, placed by class name
    // ParticleSystemRenderer::Destroy()
    void ParticleSystemRenderer::Destroy() {
        DestroyRenderingResources(this);
    }

    // 0x1007d42b0, 16 bytes, complete-object destructor, placed by class name
    // ParticleSystemRenderer::~ParticleSystemRenderer(): jumps straight to the base-object destructor

    // 0x1007d42d0, 32 bytes, deleting destructor, placed by class name
    // ParticleSystemRenderer::~ParticleSystemRenderer()
    void ParticleSystemRenderer::~ParticleSystemRenderer() {
        ~ParticleSystemRenderer(this);
        operator_delete(this);
    }

    // 0x1007d4300, 64 bytes, placed by class name
    // ParticleSystemRenderer::Initialise(RT7Core&)
    void ParticleSystemRenderer::Initialise(RT7Core* param_1) {
        (field_968, param_1)->Init();
        field_4680 = (RenderToTextureHelper*)param_1->GetRenderToTexture();
        CreateRenderingResources(this);
    }

    // 0x1007d4340, 640 bytes, placed by class name
    // ParticleSystemRenderer::CreateRenderingResources()
    byte ParticleSystemRenderer::CreateRenderingResources() {
        undefined1* puVar1;
        byte bVar2;
        byte bVar3;
        uint uVar4;
        ulong uVar5;
        VertexDeclarationManager* this_00;
        undefined8 uVar6;
        char* pcVar7;
        char* pcVar8;
        VertexElementDesc* pVVar9;
        Singleton<render::VertexDeclarationManager>* this_01;
        Singleton<render::ShaderProgramManager>* this_02;
        ShaderProgramVariable local_180;
        ShaderProgramVariable local_158;
        ShaderProgramVariable local_130;
        ShaderProgramVariable local_108;
        ShaderProgramVariable local_e0;
        ShaderProgramVariable local_b8;
        Array<unsigned short, eastl::allocator> local_90[24];
        ParticleOverdrawComposite local_78[24];
        ParticleOverdrawComposite local_60[24];
        shared_ptr local_48;
        AutoSingleton<ShaderThreadPoolSingleton> local_38[8];

        local_38->~AutoSingleton("ParticleSystemRenderer");
        uVar4 = graphics::operator*((graphics*)253);
        local_180.GetVertexElementDesc(uVar4);
        uVar4 = graphics::operator*((graphics*)254);
        local_158.GetVertexElementDesc(uVar4);
        uVar4 = graphics::operator*((graphics*)235);
        local_130.GetVertexElementDesc(uVar4);
        uVar4 = graphics::operator*((graphics*)232);
        local_108.GetVertexElementDesc(uVar4);
        uVar4 = graphics::operator*((graphics*)255);
        local_e0.GetVertexElementDesc(uVar4);
        uVar4 = graphics::operator*((graphics*)256);
        local_b8.GetVertexElementDesc(uVar4);
        puVar1 = &field_872;
        uVar5 = local_180.data();
        this_01 = (Singleton<render::VertexDeclarationManager>*)puVar1;
        bVar2 = render::VertexDeclaration::Create((VertexElementDesc*)puVar1, uVar5, (void*)6, 0);
        this_00 = (VertexDeclarationManager*)this_01->Instance();
        this_00->Register(puVar1);
        Array<unsigned short, eastl::allocator>::Array(local_90);
        graphicutils::CreateQuadListIndices<unsigned short>((Array*)local_90, 16383);
        uVar6 = local_90->data();
        bVar3 = (&field_784, 196596, 0, uVar6, 5123)->Create();
        this_02 = (Singleton<render::ShaderProgramManager>*)field_64;
        render::InputAssemblerState::SetIndexBuffer((IndexBuffer*)this_02, (uint)&field_784);
        this_02->SetFlags(1);
        pcVar7 = (char*)this_02->Instance();
        local_78->BuildVSFragment();
        pcVar8 = (char*)local_78->c_str();
        local_60->BuildFSFragment();
        pVVar9 = (VertexElementDesc*)local_60->c_str();
        local_48.RegisterFromSourceString(pcVar7, pcVar8, pVVar9, 62757712, '\x02');
        shared_ptr<render::ShaderProgram>::operator=((shared_ptr<render::ShaderProgram>*)field_4704, &local_48);
        local_48.~shared_ptr();
        local_60->~basic_string();
        local_78->~basic_string();
        local_90->~Array();
        return bVar2 & bVar3;
    }

    // 0x1007d45c0, 192 bytes, placed by class name
    // ParticleSystemRenderer::DestroyRenderingResources()
    void ParticleSystemRenderer::DestroyRenderingResources() {
        undefined1* this_00;
        ShaderProgramManager* this_01;
        VertexDeclarationManager* this_02;
        RenderTargetsManager* this_03;
        Singleton<render::VertexDeclarationManager>* this_04;

        this_00 = field_4688;
        this_03 = (RenderTargetsManager*)this_00;
        if (this_00->operator_cast_to_bool()) {
            this_03 = field_24;
            this_03->Unregister(this_00);
        }
        this_01 = (ShaderProgramManager*)this_03->Instance();
        this_01->Unregister(field_4704);
        field_64->Destroy();
        (&field_784)->Destroy();
        (&field_256)->Destroy();
        (&field_344)->Destroy();
        (&field_432)->Destroy();
        (&field_520)->Destroy();
        (&field_608)->Destroy();
        this_04 = (Singleton<render::VertexDeclarationManager>*)&field_696;
        this_04->Destroy();
        this_02 = (VertexDeclarationManager*)this_04->Instance();
        this_02->Unregister((VertexDeclaration*)&field_872);
        (&field_872)->Destroy();
    }

    // 0x1007d4680, 1728 bytes, placed by class name
    // ParticleSystemRenderer::AddDrawableToBatch(ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, SceneViewData const&, RenderPassType, EffectManager&)
    void ParticleSystemRenderer::AddDrawableToBatch(long param_1, undefined8 param_2, undefined8 param_3,
                                                    NXTPixToolkit* param_4, int param_6, EffectManager* param_7) {
        shared_ptr* this_00;
        ModularParticleSystemDrawable* this_01;
        ThreadPool* pTVar1;
        undefined* puVar2;
        ParticleSystemRenderer* pPVar3;
        bool bVar4;
        char cVar5;
        byte bVar6;
        uint uVar7;
        LoginManager* this_02;
        ParticleMaterial* this_03;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_04;
        RenderMaterial* pRVar8;
        RenderPassEffect* this_05;
        shared_ptr* this_06;
        Shader* this_07;
        Layout* pLVar9;
        ulong uVar10;
        ModularParticleEmitter* pMVar11;
        long lVar12;
        ParticleEmitter* pPVar13;
        ModularParticleEmitter* pMVar14;
        undefined8* puVar15;
        ParticleEmitter* pPVar16;
        int iVar17;
        byte bVar18;
        __11 local_140;
        shared_ptr* local_c0;
        ModularParticleSystemDrawable* local_b0;
        long local_a8;
        future<void> local_a0[12];
        int local_94;
        int local_90;
        bool local_89;
        undefined1 local_88[64];
        ModularParticleSystemDrawable* local_48;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_90 = param_6;
        (field_968, param_6, param_7)->Update();
        this_00 = (shared_ptr*)(param_1 + 104);
        this_01 = *(ModularParticleSystemDrawable**)(param_1 + 120);
        bVar4 = shared_ptr::operator_cast_to_bool(this_00);
        if ((!bVar4) && (this_01 == (ModularParticleSystemDrawable*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("pParticleSystem || pModularParticleSystem",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleSystemRenderer.cpp",
                      143, (char*)0);
        }
        local_89 = true;
        bVar4 = shared_ptr::operator_cast_to_bool(this_00);
        local_b0 = this_01;
        if (bVar4) {
            this_02 = (LoginManager*)shared_ptr<ParticleSystem>::operator->((shared_ptr<ParticleSystem>*)this_00);
            this_03 = (ParticleMaterial*)this_02->GetDevCredentialsOutputDirectory();
            local_94 = this_03->GetEndPosition();
            local_a8 = this_03->GetTextureAtlasReference();
            uVar7 = this_03->GetOption(0);
            local_89 = (bool)this_03->GetOption(1);
        } else {
            local_94 = this_01->GetEndPosition();
            this_04 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_01->second();
            local_a8 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_04);
            uVar7 = 0;
        }
        if (local_a8 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("textureAtlasReference != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleSystemRenderer.cpp",
                      172, (char*)0);
        }
        if (*PTR_m_showOverdraw_100ee6a50 == '\0') {
            if (*(char*)(param_1 + 128) == '\0') {
                if (local_94 == -1) {
                    iVar17 = (uVar7 & 255) << 2;
                } else {
                    iVar17 = (uVar7 & 255) * 4 + 1;
                }
            } else {
                cVar5 = param_7->IsEnabled(104);
                iVar17 = 2;
                if (cVar5 == '\0')
                    goto LAB_1007d4cbc;
            }
        } else {
            iVar17 = 3;
            if (local_90 != 4) {
                /* WARNING: Subroutine does not return */
                LogAssert("renderPass == FORWARD_LIGHTING",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "particles/ParticleSystemRenderer.cpp",
                          180, (char*)0);
            }
        }
        pRVar8 = (RenderMaterial*)(field_968, iVar17)->GetMaterial();
        this_05 = (RenderPassEffect*)pRVar8->GetRenderPassEffect(local_90);
        this_06 = (shared_ptr*)this_05->GetShader(param_4);
        bVar4 = operator!=(this_06, (_func_decltype_nullptr*)0);
        if (!bVar4) {
            /* WARNING: Subroutine does not return */
            LogAssert("shader != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleSystemRenderer.cpp",
                      206, "No shader program available for this render pass");
        }
        this_07 = (Shader*)shared_ptr<Shader>::operator->((shared_ptr<Shader>*)this_06);
        cVar5 = this_07->IsReady();
        if (cVar5 == '\0')
            goto LAB_1007d4cbc;
        local_140.field_16 = this;
        local_140.field_32 = pRVar8;
        local_140.field_64 = param_4;
        if (local_b0 == (ModularParticleSystemDrawable*)0) {
            bVar4 = shared_ptr::operator_cast_to_bool(this_00);
            if (!bVar4) {
                /* WARNING: Subroutine does not return */
                LogAssert("pParticleSystem",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "particles/ParticleSystemRenderer.cpp",
                          284, (char*)0);
            }
            local_140.field_0 = &local_90;
            local_140.field_8 = param_1;
            local_140.field_24 = &local_a8;
            local_140.field_40 = &local_94;
            local_140.field_48 = param_2;
            local_140.field_56 = param_3;
            local_140.field_72 = param_7;
            local_140.field_88 = &local_89;
            local_140.field_80 = this_00;
            lVar12 = shared_ptr<ParticleSystem>::operator->((shared_ptr<ParticleSystem>*)this_00);
            puVar2 = PTR_m_onlyShowModularEmitterIndex_100ee6a28;
            pLVar9 = (Layout*)(lVar12 + 640);
            local_c0 = this_00;
            if (*(int*)PTR_m_onlyShowModularEmitterIndex_100ee6a28 == -1) {
                pPVar13 = (ParticleEmitter*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(pLVar9);
                pPVar16 = (ParticleEmitter*)pLVar9->end();
                if (pPVar13 == pPVar16)
                    goto LAB_1007d4cbc;
                bVar18 = 0;
                do {
                    bVar6 = AddDrawableToBatch(ParticleSystem_DE_const&, render::RenderContext&,
                                               render::DrawCallState_const&, SceneViewData_const&, RenderPassType,
                                               EffectManager&)::$_11::operator()(&local_140, pPVar13);
                    bVar18 = bVar18 | bVar6;
                    pPVar13 = (ParticleEmitter*)&pPVar13->field_10528;
                } while (pPVar13 != pPVar16);
            LAB_1007d4c1f:
                if ((bVar18 & 1) == 0)
                    goto LAB_1007d4cbc;
            } else {
                uVar10 = pLVar9->size();
                if (uVar10 <= (ulong)(long)*(int*)puVar2) {
                    bVar18 = 0;
                    goto LAB_1007d4c1f;
                }
                pPVar13 = (ParticleEmitter*)eastl::vector<
                    ParticleEmitter, eastl::fixed_vector_allocator<10528ul, 4ul, 16ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<ParticleEmitter,
                            eastl::fixed_vector_allocator<10528ul, 4ul, 16ul, 0ul, true, eastl::allocator>>*)pLVar9,
                    (long)*(int*)puVar2);
                uVar7 = AddDrawableToBatch(ParticleSystem_DE_const&, render::RenderContext&,
                                           render::DrawCallState_const&, SceneViewData_const&, RenderPassType,
                                           EffectManager&)::$_11::operator()(&local_140, pPVar13);
                if ((uVar7 & 1) == 0)
                    goto LAB_1007d4cbc;
            }
            cVar5 = (anonymous namespace)::MustSortUsingViewProjMatrix(local_90);
            if (cVar5 == '\0') {
                puVar15 = (undefined8*)param_4->GetScreen();
            } else {
                puVar15 = (undefined8*)param_4->GetImmediateThreadPool();
            }
            pPVar3 = (ParticleSystemRenderer*)this;
            pTVar1 = ((ParticleSystemRenderer*)this)->field_32;
            local_88._0_8_ = *puVar15;
            local_88._8_8_ = puVar15[1];
            local_88._16_8_ = puVar15[2];
            local_88._24_8_ = puVar15[3];
            local_88._32_8_ = puVar15[4];
            local_88._40_8_ = puVar15[5];
            local_88._48_8_ = puVar15[6];
            local_88._56_8_ = puVar15[7];
            new (&local_48) shared_ptr<oldscape::dash3d::Decor>(local_c0);
            ThreadPool::AddTask<ParticleSystemRenderer::AddDrawableToBatch(
                ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&, SceneViewData_const&,
                RenderPassType, EffectManager&)::__12>((ThreadPool*)local_a0, (char*)pTVar1, (__12*)local_88);
            std::vector<std::future<void>, std::allocator<std::future<void>>>::emplace_back<std::future<void>>(
                (vector<std::future<void>, std::allocator<std::future<void>>>*)&pPVar3->field_40, (future*)local_a0);
            std::future<void>::~future(local_a0);
            AddDrawableToBatch(ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
                               SceneViewData_const&, RenderPassType, EffectManager&)::$_12::~__12((__12*)local_88);
            goto LAB_1007d4cbc;
        }
        local_140.field_0 = &local_90;
        local_140.field_8 = param_1;
        local_140.field_24 = &local_a8;
        local_140.field_40 = &local_94;
        local_140.field_48 = param_2;
        local_140.field_56 = param_3;
        local_140.field_72 = param_7;
        pLVar9 = (Layout*)local_b0->field_16->GetImmediateThreadPool();
        puVar2 = PTR_m_onlyShowModularEmitterIndex_100ee6a28;
        if (*(int*)PTR_m_onlyShowModularEmitterIndex_100ee6a28 == -1) {
            pMVar11 = (ModularParticleEmitter*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar9);
            pMVar14 = (ModularParticleEmitter*)pLVar9->end();
            if (pMVar11 == pMVar14)
                goto LAB_1007d4cbc;
            bVar18 = 0;
            do {
                bVar6 = AddDrawableToBatch(ParticleSystem_DE_const&, render::RenderContext&,
                                           render::DrawCallState_const&, SceneViewData_const&, RenderPassType,
                                           EffectManager&)::$_9::operator()((__9*)&local_140, pMVar11);
                bVar18 = bVar18 | bVar6;
                pMVar11 = (ModularParticleEmitter*)(pMVar11[1].field_12 + 12);
            } while (pMVar11 != pMVar14);
        LAB_1007d4b3f:
            if ((bVar18 & 1) == 0)
                goto LAB_1007d4cbc;
        } else {
            uVar10 = pLVar9->size();
            if (uVar10 <= (ulong)(long)*(int*)puVar2) {
                bVar18 = 0;
                goto LAB_1007d4b3f;
            }
            pMVar11 = (ModularParticleEmitter*)eastl::vector<
                ModularParticleEmitter, eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<ModularParticleEmitter,
                               eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>*)pLVar9,
                       (long)*(int*)puVar2);
            uVar7 = AddDrawableToBatch(ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&,
                                       SceneViewData_const&, RenderPassType,
                                       EffectManager&)::$_9::operator()((__9*)&local_140, pMVar11);
            if ((uVar7 & 1) == 0)
                goto LAB_1007d4cbc;
        }
        cVar5 = (anonymous namespace)::MustSortUsingViewProjMatrix(local_90);
        if (cVar5 == '\0') {
            puVar15 = (undefined8*)param_4->GetScreen();
        } else {
            puVar15 = (undefined8*)param_4->GetImmediateThreadPool();
        }
        local_88._0_8_ = *puVar15;
        local_88._8_8_ = puVar15[1];
        local_88._16_8_ = puVar15[2];
        local_88._24_8_ = puVar15[3];
        local_88._32_8_ = puVar15[4];
        local_88._40_8_ = puVar15[5];
        local_88._48_8_ = puVar15[6];
        local_88._56_8_ = puVar15[7];
        local_48 = local_b0;
        ThreadPool::AddTask<ParticleSystemRenderer::AddDrawableToBatch(
            ParticleSystem_DE_const&, render::RenderContext&, render::DrawCallState_const&, SceneViewData_const&,
            RenderPassType, EffectManager&)::__10>((ThreadPool*)local_a0, (char*)field_32, (__10*)local_88);
        std::vector<std::future<void>, std::allocator<std::future<void>>>::emplace_back<std::future<void>>(
            (vector<std::future<void>, std::allocator<std::future<void>>>*)&field_40, (future*)local_a0);
        std::future<void>::~future(local_a0);
    LAB_1007d4cbc:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007d4db0, 352 bytes, placed by class name
    // ParticleSystemRenderer::AddDrawableToBatch(ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, SceneViewData const&, RenderPassType, EffectManager&)::$_9::operator()(ModularParticleEmitter const&) const
    /* ParticleSystemRenderer::AddDrawableToBatch(ParticleSystem_DE
   const&, render::RenderContext&, render::DrawCallState const&,
   SceneViewData const&, RenderPassType,
   EffectManager&)::$_9::TEMPNAMEPLACEHOLDERVALUE(ModularParticleEmitter
   const&) const */

    undefined8
    ParticleSystemRenderer::AddDrawableToBatch(ParticleSystem_DE_const&, render::RenderContext&,
                                               render::DrawCallState_const&, SceneViewData_const&, RenderPassType,
                                               EffectManager&)::$_9::operator()(ModularParticleEmitter* param_1) {
        ParticleSystemRenderer* pPVar1;
        BatchData* this_00;
        char cVar2;
        undefined4 uVar3;
        int iVar4;
        ParticleData* this_01;
        Minimap* pMVar5;
        ParticleData* local_60;
        undefined8 local_58;
        undefined8 local_50;
        BatchData* local_48;
        undefined8 local_40;
        undefined4 local_34;

        pPVar1 = field_16;
        this_01 = (ParticleData*)param_1->second();
        pMVar5 = (Minimap*)param_1->HeapBeginPtr();
        cVar2 = this_01->CanRender();
        if ((cVar2 == '\0') || (cVar2 = (anonymous namespace)::CheckEmitterDrawable(
                                    *field_0, pMVar5, *(undefined1*)(field_8 + 128), *(undefined1*)(field_8 + 129)),
                                cVar2 == '\0')) {
            return 0;
        }
        local_48 = (BatchData*)pPVar1->field_4624;
        local_58 = field_32;
        local_50 = *field_24;
        local_34 = *field_40;
        local_40 = this_01->GetCount();
        this_00 = local_48;
        uVar3 = pMVar5->GetLevel();
        cVar2 = this_00->IsCompatible(local_50, local_58, local_34, local_40, uVar3);
        if (cVar2 == '\0') {
            RenderPendingBatch(pPVar1, field_48, field_56, field_64, *field_0, field_72);
        }
        local_60 = this_01;
        eastl::vector<ParticleSystemRenderer::BatchData::ParticleDataWrapper, BucketAllocatorEASTL>::emplace_back<
            ParticleData_const*>(
            (vector<ParticleSystemRenderer::BatchData::ParticleDataWrapper, BucketAllocatorEASTL>*)this_00, &local_60);
        *(undefined8*)(pPVar1->field_4624 + 32) = field_32;
        *(undefined4*)(pPVar1->field_4624 + 40) = *field_40;
        *(undefined8*)(pPVar1->field_4624 + 24) = *field_24;
        pMVar5 = (Minimap*)param_1->HeapBeginPtr();
        uVar3 = pMVar5->GetLevel();
        *(undefined4*)(pPVar1->field_4624 + 48) = uVar3;
        iVar4 = this_01->GetCount();
        *(int*)(pPVar1->field_4624 + 44) = *(int*)(pPVar1->field_4624 + 44) + iVar4;
        return 1;
    }

    // 0x1007d51b0, 400 bytes, placed by class name
    // ParticleSystemRenderer::AddDrawableToBatch(ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, SceneViewData const&, RenderPassType, EffectManager&)::$_11::operator()(ParticleEmitter const&) const
    /* ParticleSystemRenderer::AddDrawableToBatch(ParticleSystem_DE
   const&, render::RenderContext&, render::DrawCallState const&,
   SceneViewData const&, RenderPassType,
   EffectManager&)::$_11::TEMPNAMEPLACEHOLDERVALUE(ParticleEmitter
   const&) const */

    undefined8 ParticleSystemRenderer::AddDrawableToBatch(ParticleSystem_DE_const&, render::RenderContext&,
                                                          render::DrawCallState_const&, SceneViewData_const&,
                                                          RenderPassType,
                                                          EffectManager&)::$_11::operator()(ParticleEmitter* param_1) {
        ParticleSystemRenderer* pPVar1;
        shared_ptr* psVar2;
        char cVar3;
        undefined4 uVar4;
        int iVar5;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;
        long lVar6;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* local_58;
        vector<ParticleSystemRenderer::BatchData::ParticleDataWrapper, BucketAllocatorEASTL>* local_50;
        undefined8 local_48;
        undefined8 local_40;
        undefined4 local_38;
        ushort local_32;

        pPVar1 = field_16;
        this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                      param_1->GetParticles();
        cVar3 = param_1->ShouldRender();
        if ((cVar3 == '\0') ||
            (cVar3 =
                 eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                     this_00),
             cVar3 != '\0')) {
            return 0;
        }
        if ((*field_0 == 4) || (*field_0 == 2)) {
            lVar6 = param_1->data();
            cVar3 = *(char*)(field_8 + 129);
            if (*(char*)(lVar6 + 112) != cVar3) {
                return 0;
            }
            if ((*PTR_m_renderAlphaEarlyParticles_100ee6a18 == '\0') && (cVar3 != '\0')) {
                return 0;
            }
            if (cVar3 == '\0' && *PTR_m_renderAlphaLateParticles_100ee6a10 == '\0') {
                return 0;
            }
        }
        local_48 = field_32;
        local_40 = *field_24;
        local_38 = *field_40;
        uVar4 = this_00->size();
        local_50 =
            (vector<ParticleSystemRenderer::BatchData::ParticleDataWrapper, BucketAllocatorEASTL>*)pPVar1->field_4624;
        cVar3 = (pPVar1->field_4624, local_40, local_48, local_38, uVar4, 0)->IsCompatible();
        if (cVar3 == '\0') {
            RenderPendingBatch(pPVar1, field_48, field_56, field_64, *field_0, field_72);
        }
        psVar2 = field_80;
        local_58 = this_00;
        local_32 = param_1->GetAtlasMaterialSettingsSlotXY();
        eastl::vector<ParticleSystemRenderer::BatchData::ParticleDataWrapper, BucketAllocatorEASTL>::emplace_back<
            shared_ptr<ParticleSystem> const&, eastl::fixed_vector<Particle, 128ul, true, eastl::allocator> const*,
            unsigned short, bool&>(local_50, psVar2, (fixed_vector**)&local_58, &local_32, field_88);
        *(undefined8*)(pPVar1->field_4624 + 32) = field_32;
        *(undefined4*)(pPVar1->field_4624 + 40) = *field_40;
        *(undefined8*)(pPVar1->field_4624 + 24) = *field_24;
        *(undefined4*)(pPVar1->field_4624 + 48) = 0;
        iVar5 = this_00->size();
        *(int*)(pPVar1->field_4624 + 44) = *(int*)(pPVar1->field_4624 + 44) + iVar5;
        return 1;
    }

    // 0x1007d55a0, 16 bytes, complete-object destructor, placed by class name
    // ParticleSystemRenderer::AddDrawableToBatch(ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, SceneViewData const&, RenderPassType, EffectManager&)::$_12::~$_12(): jumps straight to the base-object destructor

    // 0x1007d55b0, 1392 bytes, placed by class name
    // ParticleSystemRenderer::RenderPendingBatch(render::RenderContext&, render::DrawCallState const&, SceneViewData const&, RenderPassType, EffectManager&)
    void ParticleSystemRenderer::RenderPendingBatch(RenderContext* param_1, DrawCallState* param_2,
                                                    SceneViewData* param_3, int param_5, EffectManager* param_6) {
        undefined1* this_00;
        undefined1* this_01;
        Matrix44T* this_02;
        TextureAtlasReference* pTVar1;
        ParticleSystemRenderer* pPVar2;
        char cVar3;
        bool bVar4;
        int iVar5;
        int iVar6;
        RenderPassEffect* this_03;
        shared_ptr* psVar7;
        shared_ptr<Shader>* this_04;
        ShaderProgram* pSVar8;
        Layout* this_05;
        RenderPipelineState* pRVar9;
        HashedString* pHVar10;
        SunlightDirectLighting* this_06;
        NXTPixToolkit* this_07;
        Layout* this_08;
        long lVar11;
        ulong uVar12;
        OutputMergerState* this_09;
        RenderTargets* pRVar13;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* pcVar14;
        type* ptVar15;
        DrawCallState* pDVar16;
        EffectList extraout_XMM0_Ba;
        float fVar17;
        undefined1 auVar18[16];
        Matrix44T aMStack_1ce8[128];
        DrawCallState local_a0;
        ParticleSystemRenderer* local_70;
        float local_68;
        float local_64;
        SceneViewData* local_60;
        EffectManager* local_58;
        RenderContext* local_50;
        Shader* local_48;
        ShaderProgram* local_40;
        int local_34;

        this_01 = field_4624;
        local_60 = param_3;
        local_58 = param_6;
        cVar3 = this_01->IsValid();
        if (cVar3 == '\0') {
            return;
        }
        this_00 = &field_40;
        local_70 = this;
        local_50 = param_1;
        local_34 = param_5;
        this_00->begin();
        local_a0.m_pInputAssemblerState = (InputAssemblerState*)this_00->end();
        bVar4 = std::operator!=((__wrap_iter*)(aMStack_1ce8 + 128), (__wrap_iter*)&local_a0);
        if (bVar4) {
            this_02 = aMStack_1ce8 + 128;
            do {
                std::__wrap_iter<std::future<void>*>::operator*((__wrap_iter<std::future<void>*>*)this_02);
                std::future<void>::wait();
                std::__wrap_iter<std::future<void>*>::operator++((__wrap_iter<std::future<void>*>*)this_02);
                bVar4 = std::operator!=((__wrap_iter*)this_02, (__wrap_iter*)&local_a0);
            } while (bVar4);
        }
        this_00->clear();
        pPVar2 = local_70;
        this_03 = (RenderPassEffect*)(*(RenderMaterial**)(local_70->field_4624 + 32), local_34)->GetRenderPassEffect();
        psVar7 = (shared_ptr*)this_03->GetShader(local_60);
        bVar4 = operator!=(psVar7, (_func_decltype_nullptr*)0);
        if (!bVar4) {
            /* WARNING: Subroutine does not return */
            LogAssert("renderPassEffect.GetShader(viewData) != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleSystemRenderer.cpp",
                      391, "No shader program available for this render pass");
        }
        this_04 = (shared_ptr<Shader>*)this_03->GetShader(local_60);
        local_48 = (Shader*)shared_ptr<Shader>::operator*(this_04);
        cVar3 = local_48->IsReady();
        if (cVar3 == '\0')
            goto LAB_1007d5ae2;
        new (&local_a0) render::DrawCallState(param_2);
        ptVar15 = (type*)pPVar2->field_64;
        local_a0.SetInputAssemblerState(ptVar15);
        pSVar8 = (ShaderProgram*)local_48->GetProgram();
        pSVar8->GetNativeShaderProgram();
        this_05 = (Layout*)local_48->second();
        eastl::string::Layout::SSOBeginPtr(this_05, ptVar15);
        pRVar9 = (RenderPipelineState*)local_a0.GetRenderPipelineState();
        pRVar9->SetShaderProgram(pSVar8);
        FrameTime::GetSecondsSinceProgramStart();
        local_68 = 0.0;
        local_64 = 65535.0;
        fVar17 = math::Wrap<float>((float*)(aMStack_1ce8 + 128), &local_68, &local_64);
        local_40 = (ShaderProgram*)CONCAT44(local_40._4_4_, fVar17);
        pHVar10 = (HashedString*)graphics::operator*((graphics*)24);
        pSVar8->SetShaderConstFloat1(pHVar10, local_40._0_4_);
        cVar3 = (&this_03->field_16, 54)->Contains();
        if (cVar3 != '\0') {
            this_06 = EffectManager::GetEffect<SunlightDirectLighting>(local_58, 54);
            this_06->SetViewportMapID(*(int*)(pPVar2->field_4624 + 40));
        }
        EffectManager::SetShaderConstants((DrawCallState*)local_58, (RenderContext*)&local_a0, (Shader*)local_50,
                                          extraout_XMM0_Ba);
        if (*(long*)(pPVar2->field_4624 + 24) == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_currentBatch.m_textureAtlasReference != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleSystemRenderer.cpp",
                      418, (char*)0);
        }
        pTVar1 = *(TextureAtlasReference**)(pPVar2->field_4624 + 24);
        local_40 = pSVar8;
        iVar5 = pPVar2->field_968->GetTextureUnitAtlas();
        pSVar8 = local_40;
        iVar6 = pPVar2->field_968->GetTextureUnitAtlasSettings();
        pPVar2 = local_70;
        TextureAtlasing::SetShaderConstants(&local_a0, local_50, local_48, pTVar1, iVar5, iVar6);
        pHVar10 = (HashedString*)103;
        cVar3 = (&this_03->field_16)->Contains();
        if (cVar3 != '\0') {
            fVar17 = (float)(*(ParticleMaterial**)(pPVar2->field_4624 + 32))->GetSoftScale();
            if (fVar17 == 0.0) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_currentBatch.m_material->GetSoftScale() != 0.0f",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "particles/ParticleSystemRenderer.cpp",
                          429, (char*)0);
            }
            pHVar10 = (HashedString*)graphics::operator*((graphics*)197);
            fVar17 = (float)(*(ParticleMaterial**)(pPVar2->field_4624 + 32))->GetSoftScale();
            pSVar8 = local_40;
            local_40->SetShaderConstFloat1(pHVar10, 1.0 / fVar17);
        }
        this_07 = (NXTPixToolkit*)local_60->SSOBeginPtr(pHVar10);
        this_07->GetScreen();
        ((aMStack_1ce8 + 128))->Invert(0);
        pHVar10 = (HashedString*)graphics::operator*((graphics*)3);
        pSVar8->SetShaderConstMatrix4(pHVar10, 1, aMStack_1ce8 + 128, 1);
        if (local_34 == 0) {
            cVar3 = local_58->IsEnabled(37);
            if (cVar3 != '\0') {
                pDVar16 = &local_a0;
                pcVar14 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                              pDVar16->GetRenderPipelineState();
                auVar18 = pDVar16->Instance();
                eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL,
                                           2>::compressed_pair_imp(pcVar14, (EntityHighlight**)(auVar18._0_8_ + 2056),
                                                                   auVar18._8_8_);
                pDVar16 = &local_a0;
                this_08 = (Layout*)pDVar16->GetRenderPipelineState();
                lVar11 = pDVar16->Instance();
                uVar12 = lVar11 + 1140;
                goto LAB_1007d598e;
            }
        } else {
            if ((local_34 != 2) && (local_34 != 4)) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/particles/ParticleSystemRenderer.cpp",
                                465, "Unsupported render pass type");
            }
            pDVar16 = &local_a0;
            this_08 = (Layout*)pDVar16->GetRenderPipelineState();
            lVar11 = pDVar16->Instance();
            uVar12 = lVar11 + 960;
        LAB_1007d598e:
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                Layout::SetHeapSize(this_08, uVar12);
        }
        pDVar16 = &local_a0;
        pRVar9 = (RenderPipelineState*)pDVar16->GetRenderPipelineState();
        lVar11 = pDVar16->Instance();
        pRVar9->SetRasteriserState((RasteriserState*)(lVar11 + 1308));
        iVar5 = UpdateVertexBufferContents(pPVar2, this_01, local_34);
        if (iVar5 != 0) {
            if (*PTR_m_showOverdraw_100ee6a50 != '\0') {
                bVar4 = pPVar2->field_4688->operator_cast_to_bool();
                if (bVar4) {
                    this_09 = (OutputMergerState*)local_a0.GetOutputMergerState();
                    pRVar13 = (RenderTargets*)pPVar2->field_4688->end();
                    this_09->SetRenderTargets(pRVar13);
                    pDVar16 = &local_a0;
                    pcVar14 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                                  pDVar16->GetRenderPipelineState();
                    auVar18 = pDVar16->Instance();
                    eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL,
                                               2>::compressed_pair_imp(pcVar14,
                                                                       (EntityHighlight**)(auVar18._0_8_ + 1828),
                                                                       auVar18._8_8_);
                }
            }
            local_50->DrawIndexedPrimitives(&local_a0, 4, iVar5 * 6, 0);
            *(short*)pPVar2->m_metrics = *(short*)pPVar2->m_metrics + 1;
        }
        local_a0.~DrawCallState();
    LAB_1007d5ae2:
        this_01->Clear();
    }

    // 0x1007d5b20, 32 bytes, placed by class name
    // ParticleSystemRenderer::BatchData::IsValid() const
    bool ParticleSystemRenderer::BatchData::IsValid() {
        if ((field_24 == (TextureAtlasReference*)0) || (field_32 == 0)) {
            return false;
        }
        return field_44 != 0;
    }

    // 0x1007d5b70, 1328 bytes, placed by class name
    // ParticleSystemRenderer::UpdateVertexBufferContents(ParticleSystemRenderer::BatchData const&, RenderPassType)
    ulong ParticleSystemRenderer::UpdateVertexBufferContents(BatchData* param_1, undefined4 param_3) {
        ParticleSystemRenderer* this_00;
        bool bVar1;
        int iVar2;
        undefined4 uVar3;
        long lVar4;
        long lVar5;
        long lVar6;
        PassDrawInfo* pPVar7;
        ulong uVar8;
        long local_118;
        long local_110;
        long local_108;
        long local_100;
        long local_f8;
        long local_f0;
        ParticleSystemRenderer* local_e8;
        undefined1 local_e0[24];
        long local_c8[3];
        long local_b0[3];
        long local_98[3];
        long local_80[3];
        long local_68[3];
        DynamicBuffer* local_50;
        DynamicBuffer* local_48;
        DynamicBuffer* local_40;
        DynamicBuffer* local_38;

        local_38 = (DynamicBuffer*)CONCAT44(local_38._4_4_, param_3);
        local_e8 = this;
        lVar4 = param_1->HeapBeginPtr();
        lVar5 = param_1->end();
        if (lVar4 == lVar5) {
            uVar8 = 0;
        } else {
            uVar8 = 0;
            do {
                if (*(vector<game::LocationAudioProperties, eastl::allocator>**)(lVar4 + 24) ==
                    (vector<game::LocationAudioProperties, eastl::allocator>*)0) {
                    if (*(long*)(lVar4 + 16) == 0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("batchEntry.m_modularParticleData",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/particles/ParticleSystemRenderer.cpp",
                                  652, (char*)0);
                    }
                    lVar6 = (*(ParticleData**)(lVar4 + 16))->GetCount();
                } else {
                    lVar6 = eastl::vector<game::LocationAudioProperties, eastl::allocator>::size(
                        *(vector<game::LocationAudioProperties, eastl::allocator>**)(lVar4 + 24));
                }
                uVar8 = uVar8 + lVar6;
                lVar4 = lVar4 + 40;
            } while (lVar4 != lVar5);
        }
        this_00 = local_e8;
        if (uVar8 != (uint)param_1->field_44) {
            /* WARNING: Subroutine does not return */
            LogAssert("totalParticlesExpected == (eastl_size_t)batch.m_totalParticles",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleSystemRenderer.cpp",
                      662, (char*)0);
        }
        pPVar7 = (PassDrawInfo*)std::array<ParticleSystemRenderer::Metrics::PassDrawInfo, 10ul>::operator[](
            (array<ParticleSystemRenderer::Metrics::PassDrawInfo, 10ul>*)((long)&local_e8->field_4722 + 2),
            (ulong)local_38 & 4294967295);
        local_38 = (DynamicBuffer*)&this_00->field_256;
        render::DynamicBuffer<render::VertexBuffer>::MapWrite(local_e0, local_38, 4, 0, param_1->field_44 << 6, 0);
        local_50 = (DynamicBuffer*)&this_00->field_344;
        render::DynamicBuffer<render::VertexBuffer>::MapWrite(local_c8, local_50, 4, 0, param_1->field_44 << 5, 0);
        local_48 = (DynamicBuffer*)&this_00->field_432;
        render::DynamicBuffer<render::VertexBuffer>::MapWrite(local_b0, local_48, 4, 0, param_1->field_44 << 4, 0);
        local_40 = (DynamicBuffer*)&this_00->field_520;
        render::DynamicBuffer<render::VertexBuffer>::MapWrite(local_98, local_40, 4, 0, param_1->field_44 << 4, 0);
        render::DynamicBuffer<render::VertexBuffer>::MapWrite(local_80, &this_00->field_608, 4, 0,
                                                              param_1->field_44 << 4, 0);
        render::DynamicBuffer<render::VertexBuffer>::MapWrite(local_68, &this_00->field_696, 4, 0,
                                                              param_1->field_44 * 48, 0);
        if ((*PTR_m_testNullGPUBufferMappings_100ee6a20 != '\0') && (iVar2 = math::Rand(100), 50 < iVar2)) {
            uVar3 = math::Rand(6);
            switch (uVar3) {
            case 0:
                UpdateVertexBufferContents(ParticleSystemRenderer::BatchData_const&,
                                           RenderPassType)::$_8::operator()(local_38, (ResourceDataT*)local_e0);
                break;
            case 1:
                UpdateVertexBufferContents(ParticleSystemRenderer::BatchData_const&,
                                           RenderPassType)::$_8::operator()(local_50, (ResourceDataT*)local_c8);
                break;
            case 2:
                UpdateVertexBufferContents(ParticleSystemRenderer::BatchData_const&,
                                           RenderPassType)::$_8::operator()(local_48, (ResourceDataT*)local_b0);
                break;
            case 3:
                UpdateVertexBufferContents(ParticleSystemRenderer::BatchData_const&,
                                           RenderPassType)::$_8::operator()(local_40, (ResourceDataT*)local_98);
                break;
            case 4:
                UpdateVertexBufferContents(ParticleSystemRenderer::BatchData_const&, RenderPassType)::$_8::operator()(
                    (DynamicBuffer*)&this_00->field_608, (ResourceDataT*)local_80);
                break;
            case 5:
                UpdateVertexBufferContents(ParticleSystemRenderer::BatchData_const&, RenderPassType)::$_8::operator()(
                    (DynamicBuffer*)&this_00->field_696, (ResourceDataT*)local_68);
                break;
            default:
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/particles/ParticleSystemRenderer.cpp",
                                737, (char*)0);
            }
        }
        bVar1 = local_e0->operator_cast_to_bool();
        if ((((bVar1) && (bVar1 = local_c8->operator_cast_to_bool(), bVar1)) &&
             (bVar1 = local_b0->operator_cast_to_bool(), bVar1)) &&
            (((bVar1 = local_98->operator_cast_to_bool(),
               bVar1 && (bVar1 = local_80->operator_cast_to_bool(), bVar1)) &&
              (bVar1 = local_68->operator_cast_to_bool(), bVar1)))) {
            local_118 = local_e0._0_8_;
            local_110 = local_c8[0];
            local_108 = local_b0[0];
            local_100 = local_98[0];
            local_f8 = local_80[0];
            local_f0 = local_68[0];
            uVar8 = param_1->WriteToBuffers((array*)&local_118, (ParticleData*)this_00->field_4360, pPVar7);
            if ((uint)param_1->field_44 < uVar8) {
                /* WARNING: Subroutine does not return */
                LogAssert("totalNumParticles <= batch.m_totalParticles",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "particles/ParticleSystemRenderer.cpp",
                          753, (char*)0);
            }
            bVar1 = local_e0->operator_cast_to_bool();
            if (bVar1) {
                render::DynamicBuffer<render::VertexBuffer>::Unmap();
            }
            bVar1 = local_c8->operator_cast_to_bool();
            if (bVar1) {
                render::DynamicBuffer<render::VertexBuffer>::Unmap();
            }
            bVar1 = local_b0->operator_cast_to_bool();
            if (bVar1) {
                render::DynamicBuffer<render::VertexBuffer>::Unmap();
            }
            bVar1 = local_98->operator_cast_to_bool();
            if (bVar1) {
                render::DynamicBuffer<render::VertexBuffer>::Unmap();
            }
            bVar1 = local_80->operator_cast_to_bool();
            if (bVar1) {
                render::DynamicBuffer<render::VertexBuffer>::Unmap();
            }
            bVar1 = local_68->operator_cast_to_bool();
            if (bVar1) {
                render::DynamicBuffer<render::VertexBuffer>::Unmap();
            }
            if (uVar8 != 0) {
                UpdateVertexStreamData(this_00);
            }
            local_68->~ResourceDataT();
            local_80->~ResourceDataT();
            local_98->~ResourceDataT();
            local_b0->~ResourceDataT();
            local_c8->~ResourceDataT();
            local_e0->~ResourceDataT();
            return uVar8;
        }
        /* WARNING: Subroutine does not return */
        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                        "particles/ParticleSystemRenderer.cpp",
                        757, "Particle vertex buffer mapping failed");
    }

    // 0x1007d60a0, 48 bytes, placed by class name
    // ParticleSystemRenderer::BatchData::Clear()
    void ParticleSystemRenderer::BatchData::Clear() {
        clear();
        field_24 = (TextureAtlasReference*)0;
        field_32 = 0;
        field_40 = -1;
        field_44 = 0;
        field_48 = 0;
    }

    // 0x1007d60d0, 32 bytes, placed by class name
    // ParticleSystemRenderer::ClearPendingBatchData()
    void ParticleSystemRenderer::ClearPendingBatchData() {
        field_4624->Clear();
    }

    // 0x1007d60f0, 816 bytes, placed by class name
    // ParticleSystemRenderer::CompositeOverdraw(render::RenderContext&, render::RenderTargets const*, render::Viewport const&)
    void ParticleSystemRenderer::CompositeOverdraw(RenderContext* param_1, RenderTargets* param_2, Viewport* param_3) {
        undefined1* this_00;
        int iVar1;
        RenderToTextureHelper* this_01;
        bool bVar2;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar3;
        undefined8* puVar4;
        int* piVar5;
        int* piVar6;
        RenderTargets* pRVar7;
        long lVar8;
        Layout* this_02;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_03;
        ShaderProgramVariable* pSVar9;
        ShaderProgram* pSVar10;
        Desc* pDVar11;
        RenderContext* this_04;
        undefined1 auVar12[16];
        undefined8 in_stack_fffffffffffffec0;
        uint uVar13;
        undefined8 in_stack_fffffffffffffec8;
        undefined4 uVar14;
        array<render::Texture::Desc, 2ul> local_128[128];
        Desc local_a8;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_60[16];
        RenderTargets* local_50;
        Viewport* local_48;
        Texture* local_40;
        RenderContext* local_38;

        uVar13 = (uint)((ulong)in_stack_fffffffffffffec0 >> 32);
        uVar14 = (undefined4)((ulong)in_stack_fffffffffffffec8 >> 32);
        if (param_2 == (RenderTargets*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("dstRT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleSystemRenderer.cpp",
                      502, (char*)0);
        }
        if (*PTR_m_showOverdraw_100ee6a50 == '\0') {
            (field_24, (shared_ptr*)field_4688)->Unregister();
            return;
        }
        local_48 = param_3;
        local_38 = param_1;
        std::array<render::Texture::Desc, 2ul>::array(local_128);
        local_50 = param_2;
        pvVar3 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                     param_2->GetColourTargetTextures();
        puVar4 = (undefined8*)
            eastl::vector<render::Texture*,
                          eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar3,
                                                                                                                 0);
        piVar5 = (int*)(*puVar4)->second();
        iVar1 = *piVar5;
        piVar6 = (int*)std::array<render::Texture::Desc, 2ul>::operator[]((ulong)local_128);
        *piVar6 = iVar1;
        piVar6[1] = piVar5[1];
        this_00 = field_4688;
        bVar2 = this_00->operator_cast_to_bool();
        if (bVar2) {
            pRVar7 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)this_00);
            pvVar3 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    pRVar7->GetColourTargetTextures();
            puVar4 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar3, 0);
            piVar5 = (int*)(*puVar4)->second();
            if (*piVar5 == *piVar6) {
                pRVar7 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                    (shared_ptr<render::RenderTargets>*)this_00);
                pvVar3 = (vector<render::Texture*,
                                 eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                             pRVar7->GetColourTargetTextures();
                puVar4 = (undefined8*)eastl::vector<
                    render::Texture*,
                    eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar3, 0);
                lVar8 = (*puVar4)->second();
                if (*(int*)(lVar8 + 4) == piVar6[1]) {
                    pDVar11 = &local_a8;
                    new (pDVar11) render::DrawCallState();
                    this_02 = (Layout*)pDVar11->GetRenderPipelineState();
                    this_04 = local_38;
                    lVar8 = pDVar11->Instance();
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::
                        Layout::SetHeapSize(this_02, lVar8 + 1080);
                    pDVar11 = &local_a8;
                    this_03 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                                  pDVar11->GetRenderPipelineState();
                    auVar12 = pDVar11->Instance();
                    eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL,
                                               2>::compressed_pair_imp(this_03,
                                                                       (EntityHighlight**)(auVar12._0_8_ + 1676),
                                                                       auVar12._8_8_);
                    if (field_4680 == (RenderToTextureHelper*)0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("m_textureRenderHelper",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/particles/ParticleSystemRenderer.cpp",
                                  535,
                                  "m_textureRenderHelper not set - ensure ParticleSystemRenderer::Initialise has been "
                                  "called prior to this");
                    }
                    this_01 = field_4680;
                    pRVar7 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                        (shared_ptr<render::RenderTargets>*)this_00);
                    pvVar3 = (vector<render::Texture*,
                                     eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                                 pRVar7->GetColourTargetTextures();
                    puVar4 = (undefined8*)eastl::vector<
                        render::Texture*,
                        eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>::operator[](pvVar3,
                                                                                                               0);
                    local_40 = (Texture*)*puVar4;
                    pSVar9 = (ShaderProgramVariable*)graphics::operator*((graphics*)119);
                    pSVar10 = (ShaderProgram*)shared_ptr<render::ShaderProgram>::operator*(
                        (shared_ptr<render::ShaderProgram>*)field_4704);
                    this_01->RenderTextureToQuad(this_04, (DrawCallState*)&local_a8, local_50, local_40, pSVar9,
                                                 pSVar10, 0, local_48, -1);
                    local_a8.~DrawCallState();
                    goto LAB_1007d6398;
                }
            }
        }
        (field_24, (shared_ptr*)this_00)->Unregister();
        piVar6[3] = 23;
        piVar6[4] = 1;
        new (&local_a8) render::Texture::Desc();
        local_60->Register(field_24, "ParticleSystemRenderer_OverdrawRT", 3553, local_128, 1, &local_a8,
                           (ulong)uVar13 << 32, CONCAT44(uVar14, 1));
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)this_00,
                                                     (shared_ptr*)local_60);
        this_04 = local_38;
        local_60->~shared_ptr();
    LAB_1007d6398:
        new (&local_a8) math::Vector4T<float>(0.0);
        pRVar7 = (RenderTargets*)this_00->end();
        this_04->ClearRenderTargets(pRVar7, (Vector4T*)&local_a8, 1);
    }

    // 0x1007d6450, 192 bytes, placed by class name
    // ParticleSystemRenderer::OnEndFrame()
    void ParticleSystemRenderer::OnEndFrame() {
        (&field_256)->RotateBuffers();
        (&field_344)->RotateBuffers();
        (&field_432)->RotateBuffers();
        (&field_520)->RotateBuffers();
        (&field_608)->RotateBuffers();
        (&field_696)->RotateBuffers();
        field_968->FlagDirty();
        field_4864 = 0;
        field_4872 = 0;
        field_4848 = 0;
        field_4856 = 0;
        field_4832 = 0;
        field_4840 = 0;
        field_4816 = 0;
        field_4824 = 0;
        field_4800 = 0;
        field_4808 = 0;
        field_4784 = 0;
        field_4792 = 0;
        field_4768 = 0;
        field_4776 = 0;
        field_4752 = 0;
        field_4760 = 0;
        field_4736 = 0;
        field_4744 = 0;
        m_metrics[0] = 0;
        m_metrics[1] = 0;
        field_4722 = 0;
        field_4728 = 0;
        field_4880 = 0;
    }

    // 0x1007d66f0, 1392 bytes, placed by class name
    // ParticleSystemRenderer::BatchData::WriteToBuffers(std::array<unsigned char*, 6ul> const&, ParticleData*, ParticleSystemRenderer::Metrics::PassDrawInfo*) const
    /* ParticleSystemRenderer::BatchData::WriteToBuffers(std::array<unsigned char*, 6ul>
   const&, ParticleData*,
   ParticleSystemRenderer::Metrics::PassDrawInfo*) const */

    ulong ParticleSystemRenderer::BatchData::WriteToBuffers(array* param_1, ParticleData* param_2,
                                                            PassDrawInfo* param_3) {
        undefined1* this_00;
        uint uVar1;
        ParticleData* this_01;
        char cVar2;
        long lVar3;
        ulong uVar4;
        EntityHighlightGlobalState* pEVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        Particle* pPVar8;
        Particle* pPVar9;
        uchar* puVar10;
        long lVar11;
        long* plVar12;
        long* plVar13;
        uint* puVar14;
        PassDrawInfo* pPVar15;
        ParticleData* pPVar16;
        ulong uVar17;
        ulong uVar18;
        float fVar19;
        WrapArray<game::Cutscene2DAnimation<float>::Key_const> local_138[16];
        undefined4 local_128;
        undefined4 uStack_124;
        undefined4 uStack_120;
        undefined4 uStack_11c;
        undefined8 local_118;
        undefined8 local_108;
        undefined8 local_100;
        undefined8 local_f8;
        undefined8 local_f0;
        undefined8 local_e8;
        undefined8 local_e0;
        undefined8 local_d8;
        undefined8 local_d0;
        undefined8 local_c8;
        undefined8 local_c0;
        undefined8 local_b8;
        undefined8 local_b0;
        long local_a0;
        Layout* local_98;
        Layout* local_90;
        Layout* local_88;
        Layout* local_80;
        long local_78;
        PassDrawInfo* local_70;
        ulong local_68;
        PassDrawInfo* local_58;
        ulong local_40;
        Layout* local_38;

        if (param_2 == (ParticleData*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("monolithicToModularTempBuffer != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleSystemRenderer.cpp",
                      831, (char*)0);
        }
        if (param_3 == (PassDrawInfo*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("passMetrics != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleSystemRenderer.cpp",
                      833, (char*)0);
        }
        lVar3 = HeapBeginPtr();
        local_78 = end();
        if (lVar3 == local_78) {
            uVar18 = 0;
        } else {
            local_58 = param_3 + 12;
            local_70 = param_3 + 8;
            uVar18 = 0;
            do {
                pPVar16 = param_2;
                this_01 = *(ParticleData**)(lVar3 + 16);
                if (this_01 == (ParticleData*)0) {
                    if (*(long*)(lVar3 + 24) == 0) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("batchElement.m_monolithicParticleData",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/particles/ParticleSystemRenderer.cpp",
                                  858, (char*)0);
                    }
                    ParticleData::Clear();
                    pEVar5 = (EntityHighlightGlobalState*)eastl::vector<
                        Particle, eastl::fixed_vector_allocator<80ul, 128ul, 16ul, 0ul, true, eastl::allocator>>::
                        front(*(vector<Particle, eastl::fixed_vector_allocator<80ul, 128ul, 16ul, 0ul, true,
                                                                               eastl::allocator>>**)(lVar3 + 24));
                    fVar19 = (float)pEVar5->GetOutlineRadiusAdjustment();
                    if (fVar19 <= 0.0) {
                        uVar17 = 0;
                    } else {
                        pEVar5 = (EntityHighlightGlobalState*)eastl::vector<
                            Particle, eastl::fixed_vector_allocator<80ul, 128ul, 16ul, 0ul, true, eastl::allocator>>::
                            back(*(vector<Particle, eastl::fixed_vector_allocator<80ul, 128ul, 16ul, 0ul, true,
                                                                                  eastl::allocator>>**)(lVar3 + 24));
                        fVar19 = (float)pEVar5->GetOutlineRadiusAdjustment();
                        if (0.0 <= fVar19) {
                            uVar17 = eastl::vector<game::LocationAudioProperties, eastl::allocator>::size(
                                *(vector<game::LocationAudioProperties, eastl::allocator>**)(lVar3 + 24));
                        } else {
                            uVar6 = (*(vector<game::LocationAudioProperties, eastl::allocator>**)(lVar3 + 24))
                                        ->HeapBeginPtr();
                            uVar7 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                                *(vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>**)(lVar3 + 24));
                            pPVar8 = std::partition_point<
                                Particle_const*,
                                (std::array<unsigned char*, 6ul> const&)
                                    ->WriteToBuffers(ParticleData*, ParticleSystemRenderer::Metrics::PassDrawInfo*)
                                        const ::__13>(uVar6, uVar7);
                            pPVar9 = (Particle*)eastl::basic_string<
                                char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                                Layout::HeapBeginPtr(*(Layout**)(lVar3 + 24));
                            uVar17 = std::distance<Particle_const*>(pPVar9, pPVar8);
                        }
                        if (uVar17 != 0) {
                            puVar10 = (uchar*)eastl::basic_string<
                                char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                                Layout::HeapBeginPtr(*(Layout**)(lVar3 + 24));
                            new (&local_d8) WrapArray<unsigned char>(puVar10, uVar17);
                            pPVar16 = param_2;
                            WrapArray<game::Cutscene2DAnimation<float>::Key_const>::WrapArray<
                                WrapArray<game::Cutscene2DAnimation<float>::Key_const>>(
                                local_138, (WrapArray<unsigned char>*)&local_d8);
                            pPVar16->AddDeprecatedParticleRenderData(local_138, *(undefined2*)(lVar3 + 32));
                        }
                    }
                    uVar4 = pPVar16->GetCount();
                    if (uVar4 != uVar17) {
                        /* WARNING: Subroutine does not return */
                        LogAssert("monolithicToModularTempBuffer->GetCount() == numParticlesBatchEntry",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/particles/ParticleSystemRenderer.cpp",
                                  891, (char*)0);
                    }
                    *(int*)(param_3 + 4) = *(int*)(param_3 + 4) + (int)uVar17;
                    lVar11 = eastl::vector<game::LocationAudioProperties, eastl::allocator>::size(
                        *(vector<game::LocationAudioProperties, eastl::allocator>**)(lVar3 + 24));
                    uVar4 = lVar11 - uVar17;
                    pPVar15 = local_70;
                } else {
                    cVar2 = this_01->HasPotentiallyVisibleParticles();
                    pPVar16 = this_01;
                    if (cVar2 == '\0') {
                        uVar4 = 0;
                        uVar17 = 0;
                        pPVar15 = local_58;
                    } else {
                        uVar4 = this_01->GetCount();
                        pPVar15 = local_58;
                        uVar17 = uVar4;
                    }
                }
                *(int*)pPVar15 = *(int*)pPVar15 + (int)uVar4;
                if (uVar17 != 0) {
                    this_00 = &pPVar16->field_120;
                    local_a0 = lVar3;
                    local_40 = uVar17;
                    local_d8 = this_00->size();
                    local_98 = (Layout*)&pPVar16->field_144;
                    local_d0 = local_98->size();
                    local_90 = (Layout*)&pPVar16->field_192;
                    local_c8 = local_90->size();
                    local_88 = (Layout*)&pPVar16->field_216;
                    local_c0 = local_88->size();
                    local_80 = (Layout*)&pPVar16->field_240;
                    local_b8 = local_80->size();
                    local_b0 = (&pPVar16->field_168)->size();
                    local_38 = (Layout*)this_00;
                    lVar3 = this_00->size();
                    plVar12 = (long*)local_d8.begin();
                    plVar13 = (long*)local_d8.end();
                    for (; plVar12 != plVar13; plVar12 = plVar12 + 1) {
                        if (lVar3 != *plVar12) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("expectedElementcount == elementCount",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/particles/ParticleSystemRenderer.cpp",
                                      917, (char*)0);
                        }
                    }
                    local_108 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(local_38);
                    local_100 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(local_98);
                    local_f8 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(local_90);
                    local_f0 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(local_88);
                    local_e8 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(local_80);
                    local_e0 = (&pPVar16->field_168)->HeapBeginPtr();
                    local_118 = 206158430224;
                    uVar4 = local_40 + uVar18 << (*PTR_m_testParticleRenderLimitExceeded_100ee6a30 & 63);
                    local_128 = 64;
                    uStack_124 = 32;
                    uStack_120 = 16;
                    uStack_11c = 16;
                    uVar1 = ((BatchData*)this)->field_44;
                    if (uVar1 < uVar4) {
                        /* WARNING: Subroutine does not return */
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/particles/ParticleSystemRenderer.cpp",
                                        974,
                                        "Maximum number of particles exceeded while attempting to copy range [%u;%u] "
                                        "(expected %u particles total)",
                                        uVar18 & 4294967295, uVar4 & 4294967295, (ulong)uVar1);
                    }
                    uVar17 = 0;
                    local_38 = (Layout*)(ulong)uVar1;
                    do {
                        plVar12 = (long*)std::array<unsigned char*, 6ul>::operator[](
                            (array<unsigned char*, 6ul>*)param_1, uVar17);
                        if (*plVar12 == 0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("destinations[n]",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/particles/ParticleSystemRenderer.cpp",
                                      959, (char*)0);
                        }
                        plVar13 = (long*)std::array<unsigned char*, 6ul>::operator[](
                            (array<unsigned char*, 6ul>*)&local_108, uVar17);
                        if (*plVar13 == 0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("sources[n]",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/particles/ParticleSystemRenderer.cpp",
                                      960, (char*)0);
                        }
                        puVar14 = (uint*)std::array<unsigned int, 6ul>::operator[](
                            (array<unsigned int, 6ul>*)&local_128, uVar17);
                        _memcpy((void*)(uVar18 * *puVar14 + *plVar12), (void*)*plVar13, *puVar14 * local_40);
                        uVar17 = uVar17 + 1;
                    } while (uVar17 != 6);
                    uVar17 = local_40;
                    lVar3 = local_a0;
                    if (local_38 < uVar4) {
                        return local_68;
                    }
                }
                uVar18 = uVar18 + uVar17;
                lVar3 = lVar3 + 40;
            } while (lVar3 != local_78);
        }
        return uVar18;
    }

    // 0x1007d6c80, 304 bytes, placed by class name
    // ParticleSystemRenderer::UpdateVertexStreamData()
    void ParticleSystemRenderer::UpdateVertexStreamData() {
        undefined1* this_00;
        uint* puVar1;
        uint* puVar2;
        undefined8 local_88;
        undefined8 uStack_80;
        undefined8 local_78;
        undefined8 local_70;
        undefined8 local_68;
        undefined8 local_60;
        undefined8 local_58;
        undefined8 local_50;
        undefined8 local_48;
        undefined4 local_40;
        undefined4 local_3c;
        undefined4 local_38;
        undefined4 local_34;
        undefined4 local_30;
        undefined4 local_2c;

        local_70 = (&field_256)->CurrentBuffer();
        local_68 = (&field_344)->CurrentBuffer();
        local_60 = (&field_432)->CurrentBuffer();
        local_58 = (&field_520)->CurrentBuffer();
        local_50 = (&field_608)->CurrentBuffer();
        local_48 = (&field_696)->CurrentBuffer();
        this_00 = &field_872;
        local_40 = this_00->GetVertexStride(0);
        local_3c = this_00->GetVertexStride(1);
        local_38 = this_00->GetVertexStride(2);
        local_34 = this_00->GetVertexStride(3);
        local_30 = this_00->GetVertexStride(4);
        local_2c = this_00->GetVertexStride(5);
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        puVar1 = (uint*)local_70.data();
        puVar2 = (uint*)local_40.data();
        local_88.data();
        ((VertexDeclaration*)field_64, (uint)this_00, (VertexBuffer**)6, puVar1, puVar2)->SetVertexStreamData();
    }

    // 0x1007d6f70, 144 bytes, placed by class name
    // ParticleSystemRenderer::BatchData::IsCompatible(TextureAtlasReference const*, ParticleMaterial const*, int, unsigned int, ParticleRenderMode) const
    ulong ParticleSystemRenderer::BatchData::IsCompatible(TextureAtlasReference* param_1, long param_2, int param_3,
                                                          int param_4, int param_6) {
        int iVar1;
        long lVar2;
        long lVar3;
        undefined8 unaff_R15;
        ulong uVar4;

        uVar4 = CONCAT71((int7)((ulong)unaff_R15 >> 8), 1);
        if (field_44 != 0) {
            if ((((uint)(field_44 + param_4) <= m_maxParticlesPerBatch) && (field_40 == param_3)) &&
                (field_32 == param_2)) {
                lVar2 = field_24->GetTextureAtlas();
                lVar3 = param_1->GetTextureAtlas();
                if ((lVar2 == lVar3) && ((iVar1 = field_48, iVar1 == param_6 || (((iVar1 != 0 || (param_6 == 1)) &&
                                                                                  ((iVar1 != 1 || (param_6 == 0))))))))
                    goto LAB_1007d6fc3;
            }
            uVar4 = 0;
        }
    LAB_1007d6fc3:
        return uVar4 & 4294967295;
    }

    // 0x1007e75c0, 16 bytes, base-object destructor, placed by class name
    // ParticleSystemRenderer::AddDrawableToBatch(ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, SceneViewData const&, RenderPassType, EffectManager&)::$_12::~$_12()
    /* ~$_12() */

    void ParticleSystemRenderer::AddDrawableToBatch(ParticleSystem_DE_const&, render::RenderContext&,
                                                    render::DrawCallState_const&, SceneViewData_const&, RenderPassType,
                                                    EffectManager&)::$_12::~__12() {
        (&field_64)->~shared_ptr();
    }

    // 0x1007f83c0, 32 bytes, placed by class name
    // ParticleSystemRenderer::AddDrawableToBatch(ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, SceneViewData const&, RenderPassType, EffectManager&)::$_10::operator()() const
    /* ParticleSystemRenderer::AddDrawableToBatch(ParticleSystem_DE
   const&, render::RenderContext&, render::DrawCallState const&,
   SceneViewData const&, RenderPassType,
   EffectManager&)::$_10::TEMPNAMEPLACEHOLDERVALUE() const */

    void ParticleSystemRenderer::AddDrawableToBatch(ParticleSystem_DE_const&, render::RenderContext&,
                                                    render::DrawCallState_const&, SceneViewData_const&, RenderPassType,
                                                    EffectManager&)::$_10::operator()() {
        (field_64, (Matrix44T*)this)->CalculateViewDistanceAndSort();
    }

    // 0x1007f9650, 16 bytes, complete-object constructor, placed by class name
    // ParticleSystemRenderer::AddDrawableToBatch(ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, SceneViewData const&, RenderPassType, EffectManager&)::$_12::$_12($_12&&): jumps straight to the base-object constructor

    // 0x1007f9660, 64 bytes, base-object constructor, placed by class name
    // ParticleSystemRenderer::AddDrawableToBatch(ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, SceneViewData const&, RenderPassType, EffectManager&)::$_12::$_12($_12&&)
    /* $_12($_12&&) */

    void ParticleSystemRenderer::AddDrawableToBatch(ParticleSystem_DE_const&, render::RenderContext&,
                                                    render::DrawCallState_const&, SceneViewData_const&, RenderPassType,
                                                    EffectManager&)::$_12::__12(__12* param_1) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;

        uVar1 = *(undefined8*)param_1;
        uVar2 = *(undefined8*)(param_1 + 8);
        uVar3 = *(undefined8*)(param_1 + 16);
        uVar4 = *(undefined8*)(param_1 + 24);
        uVar5 = *(undefined8*)(param_1 + 32);
        uVar6 = *(undefined8*)(param_1 + 40);
        uVar7 = *(undefined8*)(param_1 + 56);
        field_48 = *(undefined8*)(param_1 + 48);
        field_56 = uVar7;
        field_32 = uVar5;
        field_40 = uVar6;
        field_16 = uVar3;
        field_24 = uVar4;
        field_0 = uVar1;
        field_8 = uVar2;
        new (&field_64, (shared_ptr*)(param_1 + 64)) shared_ptr<oldscape::dash3d::Decor>();
    }

    // 0x1007f9770, 48 bytes, placed by class name
    // ParticleSystemRenderer::AddDrawableToBatch(ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, SceneViewData const&, RenderPassType, EffectManager&)::$_12::operator()() const
    /* ParticleSystemRenderer::AddDrawableToBatch(ParticleSystem_DE
   const&, render::RenderContext&, render::DrawCallState const&,
   SceneViewData const&, RenderPassType,
   EffectManager&)::$_12::TEMPNAMEPLACEHOLDERVALUE() const */

    void ParticleSystemRenderer::AddDrawableToBatch(ParticleSystem_DE_const&, render::RenderContext&,
                                                    render::DrawCallState_const&, SceneViewData_const&, RenderPassType,
                                                    EffectManager&)::$_12::operator()() {
        ParticleSystem* this_00;

        this_00 = (ParticleSystem*)shared_ptr<ParticleSystem>::operator->((shared_ptr<ParticleSystem>*)&field_64);
        this_00->CalculateViewDistanceAndSort(this);
    }

} // namespace jag::graphics

namespace jag::graphics {
    namespace {
        // 0x1007d4f60, 16 bytes, placed by neighbouring functions
        // MustSortUsingViewProjMatrix(RenderPassType)
        bool MustSortUsingViewProjMatrix(uint param_1) {
            return param_1 < 2;
        }

        // 0x1007e6e30, 256 bytes, placed by __FILE__ string
        // CheckEmitterDrawable(RenderPassType, ModularParticleEmitterTemplate const&, bool, bool)
        ulong CheckEmitterDrawable(int param_1, Minimap* param_2, byte param_3, byte param_4) {
            char cVar1;
            byte bVar2;
            int iVar3;
            undefined8 unaff_R12;
            undefined7 uVar5;
            ulong uVar4;

            uVar5 = (undefined7)((ulong)unaff_R12 >> 8);
            if (*PTR_m_showOverdraw_100ee6a50 == '\0') {
                iVar3 = param_2->GetLevel();
                uVar4 = CONCAT71(uVar5, iVar3 == 2 & param_3);
                if ((iVar3 != 2) && (param_3 == 0)) {
                    if ((param_1 == 4) || (param_1 == 2)) {
                        bVar2 = param_2->IsFlagSet(1);
                        if (bVar2 == param_4) {
                            if ((*PTR_m_renderAlphaEarlyParticles_100ee6a18 == '\0') ||
                                (uVar4 = CONCAT71(uVar5, 1), (param_4 ^ 1) != 0)) {
                                uVar4 = CONCAT71((int7)(uVar4 >> 8),
                                                 *PTR_m_renderAlphaLateParticles_100ee6a10 != '\0' & (param_4 ^ 1));
                            }
                        } else {
                            uVar4 = 0;
                        }
                    } else {
                        uVar4 = 0;
                        if (param_1 == 0) {
                            cVar1 = param_2->IsFlagSet(0);
                            if (cVar1 != '\0') {
                                iVar3 = param_2->GetLevel();
                                uVar4 = (ulong)(iVar3 == 0);
                            }
                        }
                    }
                }
            } else {
                uVar4 = CONCAT71(uVar5, 1);
                if (param_1 != 4) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("renderPass == FORWARD_LIGHTING",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "particles/ParticleSystemRenderer.cpp",
                              41, (char*)0);
                }
            }
            return uVar4 & 4294967295;
        }

    } // namespace

} // namespace jag::graphics
