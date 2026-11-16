// libs/graphics/runetek7/particles/ParticleSystemRenderer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ParticleSystemRenderer.h"

namespace jag::graphics {
    // 0x100f43894
    int32_t ParticleSystemRenderer::m_maxParticlesPerBatch = 10000;

    // 0x100f43898
    int32_t ParticleSystemRenderer::m_onlyShowModularEmitterIndex = -1;

    // 0x100f4389c
    bool ParticleSystemRenderer::m_testNullGPUBufferMappings = 0;

    // 0x100f4389d
    bool ParticleSystemRenderer::m_testParticleRenderLimitExceeded = 0;

    // 0x100f43a68
    bool ParticleSystemRenderer::m_renderAlphaEarlyParticles = 1;

    // 0x100f43a69
    bool ParticleSystemRenderer::m_renderAlphaLateParticles = 1;

    // 0x100030be0: ParticleSystemRenderer::Metrics::PassDrawInfo::PassDrawInfo() has the same machine code as weak_ptr<oldscape::rs2lib::IfType>::weak_ptr()

    // 0x10012d160: ParticleSystemRenderer::BatchData::ParticleDataWrapper::~ParticleDataWrapper() has the same machine code as oldscape::FoundObject::~FoundObject()

    // 0x1007d3d50
    ParticleSystemRenderer::ParticleSystemRenderer(render::RenderTargetsManager* renderTargetsManager,
                                                   ThreadPool* threadPool)
        : DrawableBatchRenderer(), field_8(true) {
        char* this_00;

        field_8 = &PTR__ParticleSystemRenderer_100f14ce8;
        field_24 = renderTargetsManager;
        field_32 = threadPool;
        new (&field_40) std::vector<std::future<void>>();
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
        field_4680 = nullptr;
        new (field_4688) shared_ptr();
        new (&field_4704) shared_ptr();
        new (m_metrics) Metrics();
        if (field_32 == nullptr) {
            this_00 = "m_sortingThreadPool";
            LogFatalError("m_sortingThreadPool",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "particles/ParticleSystemRenderer.cpp",
                          103, 0, nullptr);
            this_00->~OptionStore();
        }
        field_4360->ReserveRenderBuffers(1000);
    }

    // 0x1007d40e0
    ParticleSystemRenderer::~ParticleSystemRenderer() {
        field_8 = &PTR__ParticleSystemRenderer_100f14ce8;
        Destroy();
        field_4704.~shared_ptr();
        field_4688->~shared_ptr();
        field_4624->~BatchData();
        field_4360->~ParticleData();
        field_968->~ParticleCommonMaterials();
        field_872.~VertexDeclaration();
        field_784.~IndexBuffer();
        field_696.~DynamicBuffer();
        field_608.~DynamicBuffer();
        field_520.~DynamicBuffer();
        field_432.~DynamicBuffer();
        field_344.~DynamicBuffer();
        field_256.~DynamicBuffer();
        field_64->~InputAssemblerState();
        field_40.~vector();
        destruct<oldscape::highlight::NpcUID*>();
    }

    // 0x1007d42a0
    void ParticleSystemRenderer::Destroy() {
        DestroyRenderingResources();
    }

    // 0x1007d4300
    void ParticleSystemRenderer::Initialise(RT7Core& rt7Core) {
        field_968->Init(rt7Core);
        field_4680 = rt7Core.GetRenderToTexture();
        CreateRenderingResources();
    }

    // 0x1007d4340
    uint8_t ParticleSystemRenderer::CreateRenderingResources() {
        ReturnValue local_48;
        AutoSingleton<ShaderThreadPoolSingleton> local_38;

        auto pSVar3 = graphics::operator*(253);
        VertexElementDesc local_180 = pSVar3->GetVertexElementDesc(0);
        pSVar3 = (ShaderProgramVariable*)graphics::operator*(254);
        VertexElementDesc local_158 = pSVar3->GetVertexElementDesc(1);
        pSVar3 = (ShaderProgramVariable*)graphics::operator*(235);
        VertexElementDesc local_130 = pSVar3->GetVertexElementDesc(2);
        pSVar3 = (ShaderProgramVariable*)graphics::operator*(232);
        VertexElementDesc local_108 = pSVar3->GetVertexElementDesc(3);
        pSVar3 = (ShaderProgramVariable*)graphics::operator*(255);
        VertexElementDesc local_e0 = pSVar3->GetVertexElementDesc(4);
        pSVar3 = (ShaderProgramVariable*)graphics::operator*(256);
        VertexElementDesc local_b8 = pSVar3->GetVertexElementDesc(5);
        uint8_t* this_00 = &field_872;
        auto pVVar4 = local_180.data();
        Singleton<render::VertexDeclarationManager>* this_02 = (Singleton<render::VertexDeclarationManager>*)this_00;
        uint8_t bVar1 = this_00->Create(pVVar4, 6, nullptr, 0);
        this_02->Instance()->Register(this_00);
        Array<unsigned short> local_90;
        graphicutils::CreateQuadListIndices<unsigned short>(local_90, 16383);
        auto arg3 = local_90.data();
        uint8_t bVar2 = field_784.Create(196596, 0, arg3, 5123);
        Singleton<render::ShaderProgramManager>* this_03 = (Singleton<render::ShaderProgramManager>*)field_64;
        render::InputAssemblerState::SetIndexBuffer(this_03, (unsigned int)&field_784);
        this_03->SetFlags(1);
        auto str1 = this_03->Instance();
        auto local_78 = ParticleOverdrawComposite::BuildVSFragment();
        auto str2 = local_78.c_str();
        auto local_60 = ParticleOverdrawComposite::BuildFSFragment();
        pVVar4 = (VertexElementDesc*)local_60.c_str();
        local_48.RegisterFromSourceString(str1, str2, pVVar4, 62757712, '\x02');
        field_4704 = local_48;
        return bVar1 & bVar2;
    }

    // 0x1007d45c0
    void ParticleSystemRenderer::DestroyRenderingResources() {
        uint8_t* this_00 = field_4688;
        RenderTargetsManager* this_03 = (RenderTargetsManager*)this_00;
        if (this_00->operator_cast_to_bool() != '\0') {
            this_03 = field_24;
            this_03->Unregister(*this_00);
        }
        ((ShaderProgramManager*)this_03->Instance())->Unregister(field_4704);
        field_64->Destroy();
        field_784.Destroy();
        field_256.Destroy();
        field_344.Destroy();
        field_432.Destroy();
        field_520.Destroy();
        field_608.Destroy();
        Singleton<render::VertexDeclarationManager>* this_04 = (Singleton<render::VertexDeclarationManager>*)&field_696;
        this_04->Destroy();
        this_04->Instance()->Unregister(&field_872);
        field_872.Destroy();
    }

    // 0x1007d4680
    void ParticleSystemRenderer::AddDrawableToBatch(const ParticleSystem_DE& particleSystem_DE,
                                                    render::RenderContext& renderContext,
                                                    const render::DrawCallState& drawCallState,
                                                    const SceneViewData& sceneViewData, RenderPassType renderPassType,
                                                    EffectManager& effectManager) {
        shared_ptr* shared_ptr;
        char* str;
        uint8_t* puVar1;
        ParticleSystem_DE* pPVar2;
        uint8_t bVar5;
        unsigned int uVar6;
        LoginManager* this_02;
        ParticleMaterial* pPVar7;
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        Layout* pLVar8;
        unsigned long uVar9;
        ModularParticleEmitter* pMVar10;
        long lVar11;
        ParticleEmitter* pPVar12;
        ModularParticleEmitter* pMVar13;
        uint64_t* puVar14;
        ParticleEmitter* pPVar15;
        MaterialType materialType;
        uint32_t in_register_00000084;
        uint8_t bVar16;
        EffectManager* in_stack_00000008;
        __11 local_140;
        ParticleSystem_DE* local_c8;
        long local_a8;
        ReturnValue local_a0;
        int local_94;
        uint8_t local_88[64];
        TcpConnectionMessageBase* local_48;

        RenderPassType local_90 = (RenderPassType)effectManager;
        NXTPixToolkit* this_01 = (NXTPixToolkit*)(((uint64_t)in_register_00000084 << 32) | (uint32_t)renderPassType);
        particleSystem_DE[6].field_104->Update(local_90, *in_stack_00000008, particleSystem_DE[6].field_8);
        shared_ptr = (shared_ptr*)(renderContext.m_immediateContext + 88);
        TcpConnectionMessageBase* this_00 = *(TcpConnectionMessageBase**)(renderContext.m_immediateContext + 104);
        bool cVar3 = shared_ptr::operator_cast_to_bool(shared_ptr);
        if ((!cVar3) && (this_00 == nullptr)) {
            LogAssert("pParticleSystem || pModularParticleSystem",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleSystemRenderer.cpp",
                      143, nullptr);
        }
        bool local_89 = true;
        cVar3 = shared_ptr::operator_cast_to_bool(shared_ptr);
        TcpConnectionMessageBase* local_b0 = this_00;
        if (!cVar3) {
            local_94 = this_00->GetEndPosition();
            local_a8 = ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)this_00->second())->end();
            uVar6 = 0;
        } else {
            this_02 = (LoginManager*)(*shared_ptr).operator->();
            pPVar7 = (ParticleMaterial*)this_02->GetDevCredentialsOutputDirectory();
            local_94 = pPVar7->GetEndPosition();
            local_a8 = pPVar7->GetTextureAtlasReference();
            uVar6 = pPVar7->GetOption(0);
            local_89 = (bool)pPVar7->GetOption(1);
        }
        if (local_a8 == 0) {
            LogAssert("textureAtlasReference != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleSystemRenderer.cpp",
                      172, nullptr);
        }
        if (*PTR_m_showOverdraw_100ee6a50 == '\0') {
            if (renderContext.m_immediateContext[112] == '\0') {
                if (local_94 == -1) {
                    materialType = (uVar6 & 255) << 2;
                } else {
                    materialType = (uVar6 & 255) * 4 + 1;
                }
            } else {
                cVar3 = in_stack_00000008->IsEnabled(104);
                materialType = 2;
                if (!cVar3)
                    goto LAB_1007d4cbc;
            }
        } else {
            materialType = 3;
            if (local_90 != 4) {
                LogAssert("renderPass == FORWARD_LIGHTING",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "particles/ParticleSystemRenderer.cpp",
                          180, nullptr);
            }
        }
        pPVar7 = (ParticleMaterial*)particleSystem_DE[6].field_104->GetMaterial(materialType);
        auto this_04 = pPVar7->GetRenderPassEffect(local_90);
        midiPlayerMainThread = (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)this_04->GetShader(*this_01);
        if (!*midiPlayerMainThread != nullptr) {
            LogAssert("shader != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleSystemRenderer.cpp",
                      206, "No shader program available for shared_ptr render pass");
        }
        cVar3 = ((Shader*)(*midiPlayerMainThread).operator->())->IsReady();
        if (!cVar3)
            goto LAB_1007d4cbc;
        local_140.field_16 = (ParticleSystemRenderer*)particleSystem_DE;
        local_140.field_32 = pPVar7;
        local_140.field_64 = (SceneViewData*)this_01;
        if (local_b0 == nullptr) {
            cVar3 = shared_ptr::operator_cast_to_bool(shared_ptr);
            if (!cVar3) {
                LogAssert("pParticleSystem",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "particles/ParticleSystemRenderer.cpp",
                          284, nullptr);
            }
            local_140.field_0 = &local_90;
            local_140.field_8 = (long)renderContext;
            local_140.field_24 = &local_a8;
            local_140.field_40 = &local_94;
            local_140.field_48 = (RenderContext*)drawCallState;
            local_140.field_56 = (DrawCallState*)sceneViewData;
            local_140.field_88 = &local_89;
            local_140.field_80 = (shared_ptr<ParticleSystem>*)shared_ptr;
            lVar11 = (*shared_ptr).operator->();
            puVar1 = PTR_m_onlyShowModularEmitterIndex_100ee6a28;
            pLVar8 = (Layout*)(lVar11 + 640);
            local_c8 = particleSystem_DE;
            if (*(int*)PTR_m_onlyShowModularEmitterIndex_100ee6a28 == -1) {
                pPVar12 = (ParticleEmitter*)pLVar8->HeapBeginPtr();
                pPVar15 = (ParticleEmitter*)pLVar8->end();
                if (pPVar12 == pPVar15)
                    goto LAB_1007d4cbc;
                bVar16 = 0;
                do {
                    bVar5 = AddDrawableToBatch(ParticleSystem_DE const&, render::RenderContext&,
                                               render::DrawCallState const&, SceneViewData const&, RenderPassType,
                                               EffectManager&)::$_11::operator()(&local_140, pPVar12);
                    bVar16 = bVar16 | bVar5;
                    pPVar12 = (ParticleEmitter*)&pPVar12->field_10528;
                } while (pPVar12 != pPVar15);
            LAB_1007d4c1f:
                if ((bVar16 & 1) == 0)
                    goto LAB_1007d4cbc;
            } else {
                uVar9 = pLVar8->size();
                if (uVar9 <= (unsigned long)(long)*(int*)puVar1) {
                    bVar16 = 0;
                    goto LAB_1007d4c1f;
                }
                pPVar12 = (ParticleEmitter*)(*pLVar8)[(long)*(int*)puVar1];
                uVar6 = AddDrawableToBatch(ParticleSystem_DE const&, render::RenderContext&,
                                           render::DrawCallState const&, SceneViewData const&, RenderPassType,
                                           EffectManager&)::$_11::operator()(&local_140, pPVar12);
                if ((uVar6 & 1) == 0)
                    goto LAB_1007d4cbc;
            }
            cVar3 = (anonymous namespace)::MustSortUsingViewProjMatrix(local_90);
            if (!cVar3) {
                puVar14 = (uint64_t*)this_01->GetScreen();
            } else {
                puVar14 = (uint64_t*)this_01->GetImmediateThreadPool();
            }
            pPVar2 = local_c8;
            str = *(char**)&local_c8->field_32;
            local_88._0_8_ = *puVar14;
            local_88._8_8_ = puVar14[1];
            local_88._16_8_ = puVar14[2];
            local_88._24_8_ = puVar14[3];
            local_88._32_8_ = puVar14[4];
            local_88._40_8_ = puVar14[5];
            local_88._48_8_ = puVar14[6];
            local_88._56_8_ = puVar14[7];
            new (&local_48) shared_ptr(shared_ptr);
            ThreadPool::AddTask<ParticleSystemRenderer::AddDrawableToBatch(
                ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, SceneViewData const&,
                RenderPassType, EffectManager&)::__12>(&local_a0, str, (__12*)local_88);
            pPVar2->field_40.emplace_back<std::future<void>>(local_a0);
            AddDrawableToBatch(ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
                               SceneViewData const&, RenderPassType, EffectManager&)::$_12::~__12((__12*)local_88);
            goto LAB_1007d4cbc;
        }
        local_140.field_0 = &local_90;
        local_140.field_8 = (long)renderContext;
        local_140.field_24 = &local_a8;
        local_140.field_40 = &local_94;
        local_140.field_48 = (RenderContext*)drawCallState;
        local_140.field_56 = (DrawCallState*)sceneViewData;
        pLVar8 = (Layout*)(*(RT7Core**)&local_b0->field_16)->GetImmediateThreadPool();
        puVar1 = PTR_m_onlyShowModularEmitterIndex_100ee6a28;
        NXTPixToolkit* local_d0 = this_01;
        if (*(int*)PTR_m_onlyShowModularEmitterIndex_100ee6a28 == -1) {
            pMVar10 = (ModularParticleEmitter*)pLVar8->HeapBeginPtr();
            pMVar13 = (ModularParticleEmitter*)pLVar8->end();
            if (pMVar10 == pMVar13)
                goto LAB_1007d4cbc;
            bVar16 = 0;
            do {
                bVar5 = AddDrawableToBatch(ParticleSystem_DE const&, render::RenderContext&,
                                           render::DrawCallState const&, SceneViewData const&, RenderPassType,
                                           EffectManager&)::$_9::operator()((__9*)&local_140, pMVar10);
                bVar16 = bVar16 | bVar5;
                pMVar10 = (ModularParticleEmitter*)(pMVar10[1].field_12 + 12);
            } while (pMVar10 != pMVar13);
        LAB_1007d4b3f:
            if ((bVar16 & 1) == 0)
                goto LAB_1007d4cbc;
        } else {
            uVar9 = pLVar8->size();
            if (uVar9 <= (unsigned long)(long)*(int*)puVar1) {
                bVar16 = 0;
                goto LAB_1007d4b3f;
            }
            pMVar10 = (ModularParticleEmitter*)(*pLVar8)[(long)*(int*)puVar1];
            uVar6 = AddDrawableToBatch(ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&,
                                       SceneViewData const&, RenderPassType,
                                       EffectManager&)::$_9::operator()((__9*)&local_140, pMVar10);
            if ((uVar6 & 1) == 0)
                goto LAB_1007d4cbc;
        }
        cVar3 = (anonymous namespace)::MustSortUsingViewProjMatrix(local_90);
        if (!cVar3) {
            puVar14 = (uint64_t*)local_d0->GetScreen();
        } else {
            puVar14 = (uint64_t*)local_d0->GetImmediateThreadPool();
        }
        local_88._0_8_ = *puVar14;
        local_88._8_8_ = puVar14[1];
        local_88._16_8_ = puVar14[2];
        local_88._24_8_ = puVar14[3];
        local_88._32_8_ = puVar14[4];
        local_88._40_8_ = puVar14[5];
        local_88._48_8_ = puVar14[6];
        local_88._56_8_ = puVar14[7];
        local_48 = local_b0;
        ThreadPool::AddTask<ParticleSystemRenderer::AddDrawableToBatch(
            ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, SceneViewData const&,
            RenderPassType, EffectManager&)::__10>(&local_a0, *(char**)&particleSystem_DE.field_32, (__10*)local_88);
        particleSystem_DE.field_40.emplace_back<std::future<void>>(local_a0);
    LAB_1007d4cbc:
    }

    // 0x1007d4db0
    uint64_t ParticleSystemRenderer::AddDrawableToBatch(
        ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, SceneViewData const&,
        RenderPassType, EffectManager&)::$_9::operator()(const ModularParticleEmitter& modularParticleEmitter) const {
        ParticleSystemRenderer* this_00 = field_16;
        auto this_02 = modularParticleEmitter.second();
        auto pMVar4 = modularParticleEmitter.HeapBeginPtr();
        bool cVar1 = this_02->CanRender();
        if ((!cVar1) ||
            (cVar1 = (anonymous namespace)::CheckEmitterDrawable(*field_0, (ModularParticleEmitterTemplate*)pMVar4,
                                                                 *(bool*)(field_8 + 128), *(bool*)(field_8 + 129)),
             !cVar1)) {
            return 0;
        }
        BatchData* local_48 = (BatchData*)this_00->field_4624;
        ParticleMaterial* local_58 = field_32;
        TextureAtlasReference* local_50 = (TextureAtlasReference*)*field_24;
        int local_34 = *field_40;
        uint64_t local_40 = this_02->GetCount();
        BatchData* this_01 = local_48;
        auto particleRenderMode = pMVar4->GetLevel();
        cVar1 = this_01->IsCompatible(local_50, local_58, local_34, (unsigned int)local_40, particleRenderMode);
        if (!cVar1) {
            RenderPendingBatch(this_00, field_48, field_56, field_64, *field_0, field_72);
        }
        ParticleData* local_60 = this_02;
        this_01->emplace_back<ParticleData const*>(local_60);
        *(ParticleMaterial**)(this_00->field_4624 + 32) = field_32;
        *(int*)(this_00->field_4624 + 40) = *field_40;
        *(uint64_t*)(this_00->field_4624 + 24) = *field_24;
        pMVar4 = (Minimap*)modularParticleEmitter.HeapBeginPtr();
        uint32_t uVar2 = pMVar4->GetLevel();
        *(uint32_t*)(this_00->field_4624 + 48) = uVar2;
        int iVar3 = this_02->GetCount();
        *(int*)(this_00->field_4624 + 44) = *(int*)(this_00->field_4624 + 44) + iVar3;
        return 1;
    }

    // 0x1007d51b0
    uint64_t ParticleSystemRenderer::AddDrawableToBatch(
        ParticleSystem_DE const&, render::RenderContext&, render::DrawCallState const&, SceneViewData const&,
        RenderPassType, EffectManager&)::$_11::operator()(const ParticleEmitter& particleEmitter) const {
        long lVar3;

        ParticleSystemRenderer* this_00 = field_16;
        auto this_01 = particleEmitter.GetParticles();
        bool cVar1 = particleEmitter.ShouldRender();
        if ((!cVar1) || (cVar1 = this_01->empty(), cVar1)) {
            return 0;
        }
        if ((*field_0 == 4) || (*field_0 == 2)) {
            lVar3 = particleEmitter.data();
            cVar1 = *(char*)(field_8 + 129);
            if (*(char*)(lVar3 + 112) != cVar1) {
                return 0;
            }
            if ((*PTR_m_renderAlphaEarlyParticles_100ee6a18 == '\0') && (cVar1)) {
                return 0;
            }
            if (!cVar1 && *PTR_m_renderAlphaLateParticles_100ee6a10 == '\0') {
                return 0;
            }
        }
        ParticleMaterial* local_48 = field_32;
        TextureAtlasReference* local_40 = (TextureAtlasReference*)*field_24;
        int local_38 = *field_40;
        unsigned int arg4 = this_01->size();
        vector<ParticleSystemRenderer::BatchData::ParticleDataWrapper, BucketAllocatorEASTL>* local_50 =
            (vector<ParticleSystemRenderer::BatchData::ParticleDataWrapper, BucketAllocatorEASTL>*)this_00->field_4624;
        cVar1 = this_00->field_4624->IsCompatible(local_40, local_48, local_38, arg4, 0);
        if (!cVar1) {
            RenderPendingBatch(this_00, field_48, field_56, field_64, *field_0, field_72);
        }
        shared_ptr<ParticleSystem>* particleSystem = field_80;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* local_58 = this_01;
        unsigned short local_32 = particleEmitter.GetAtlasMaterialSettingsSlotXY();
        eastl::vector<ParticleSystemRenderer::BatchData::ParticleDataWrapper, BucketAllocatorEASTL>::emplace_back<
            shared_ptr<ParticleSystem> const&, eastl::fixed_vector<Particle, 128ul> const*, unsigned short, bool&>(
            local_50, particleSystem, (fixed_vector<Particle, _128ul>**)&local_58, &local_32, field_88);
        *(ParticleMaterial**)(this_00->field_4624 + 32) = field_32;
        *(int*)(this_00->field_4624 + 40) = *field_40;
        *(uint64_t*)(this_00->field_4624 + 24) = *field_24;
        *(uint32_t*)(this_00->field_4624 + 48) = 0;
        int iVar2 = this_01->size();
        *(int*)(this_00->field_4624 + 44) = *(int*)(this_00->field_4624 + 44) + iVar2;
        return 1;
    }

    // 0x1007d55b0
    void ParticleSystemRenderer::RenderPendingBatch(render::RenderContext& renderContext,
                                                    const render::DrawCallState& drawCallState,
                                                    const SceneViewData& sceneViewData, RenderPassType renderPassType,
                                                    EffectManager& effectManager) {
        ReturnValue* this_01;
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        Layout* this_08;
        long lVar8;
        void* arg1;
        OutputMergerState* this_09;
        RenderTargets* renderTargets;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* pcVar9;
        DrawCallState* pDVar10;
        EffectList effectList;
        ReturnValue aRStack_4e8;
        ShaderProgram* local_40;

        uint8_t* this_00 = field_4624;
        bool cVar2 = this_00->IsValid();
        if (!cVar2) {
            return;
        }
        field_40.begin();
        local_a0.m_pInputAssemblerState = (InputAssemblerState*)field_40.end();
        bool bVar3 = ((&aRStack_4e8 + 128)) != &local_a0;
        if (bVar3) {
            this_01 = &aRStack_4e8 + 128;
            do {
                ((future<void>*)**this_01)->wait();
                ++*this_01;
                bVar3 = this_01 != &local_a0;
            } while (bVar3);
        }
        std::vector<std::future<void>>::clear();
        ParticleSystemRenderer* pPVar1 = this;
        RenderPassEffect* this_03 =
            (RenderPassEffect*)(*(RenderMaterial**)(field_4624 + 32))->GetRenderPassEffect(renderPassType);
        midiPlayerMainThread = (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)this_03->GetShader(sceneViewData);
        bVar3 = *midiPlayerMainThread != nullptr;
        if (!bVar3) {
            LogAssert("renderPassEffect.GetShader(viewData) != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleSystemRenderer.cpp",
                      391, "No shader program available for this render pass");
        }
        auto this_04 = this_03->GetShader(sceneViewData);
        Shader* local_48 = (Shader*)**this_04;
        cVar2 = local_48->IsReady();
        if (!cVar2)
            goto LAB_1007d5ae2;
        DrawCallState local_a0(drawCallState);
        local_a0.SetInputAssemblerState(pPVar1->field_64);
        auto pSVar5 = local_48->GetProgram();
        pSVar5->GetNativeShaderProgram();
        ((Layout*)local_48->second())->SSOBeginPtr();
        auto pRVar6 = local_a0.GetRenderPipelineState();
        pRVar6->SetShaderProgram(pSVar5);
        FrameTime::GetSecondsSinceProgramStart();
        float fVar11 = math::Wrap<float>(*((&aRStack_4e8 + 128)), 0.0, 65535.0);
        local_40 = (ShaderProgram*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)fVar11);
        auto pHVar7 = graphics::operator*(24);
        pSVar5->SetShaderConstFloat1(pHVar7, local_40._0_4_);
        cVar2 = this_03->field_16.Contains(54);
        if (cVar2) {
            effectManager.GetEffect<SunlightDirectLighting>(54)->SetViewportMapID(*(int*)(pPVar1->field_4624 + 40));
        }
        effectManager.SetShaderConstants(local_a0, renderContext, *local_48, effectList);
        if (*(long*)(pPVar1->field_4624 + 24) == 0) {
            LogAssert("m_currentBatch.m_textureAtlasReference != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleSystemRenderer.cpp",
                      418, nullptr);
        }
        TextureAtlasReference* textureAtlasReference = *(TextureAtlasReference**)(pPVar1->field_4624 + 24);
        local_40 = pSVar5;
        int iVar4 = pPVar1->field_968->GetTextureUnitAtlas();
        pSVar5 = local_40;
        int arg6 = pPVar1->field_968->GetTextureUnitAtlasSettings();
        pPVar1 = this;
        TextureAtlasing::SetShaderConstants(local_a0, renderContext, *local_48, *textureAtlasReference, iVar4, arg6);
        cVar2 = this_03->field_16.Contains(103);
        if (cVar2) {
            fVar11 = (float)(*(ParticleMaterial**)(pPVar1->field_4624 + 32))->GetSoftScale();
            if (fVar11 == 0.0) {
                LogAssert("m_currentBatch.m_material->GetSoftScale() != 0.0f",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "particles/ParticleSystemRenderer.cpp",
                          429, nullptr);
            }
            pHVar7 = (HashedString*)graphics::operator*(197);
            fVar11 = (float)(*(ParticleMaterial**)(pPVar1->field_4624 + 32))->GetSoftScale();
            pSVar5 = local_40;
            local_40->SetShaderConstFloat1(pHVar7, 1.0 / fVar11);
        }
        ((NXTPixToolkit*)sceneViewData.SSOBeginPtr())->GetScreen();
        *(&aRStack_4e8 + 128) = math::Matrix44T<float>::Invert(nullptr);
        pHVar7 = (HashedString*)graphics::operator*(3);
        pSVar5->SetShaderConstMatrix4(pHVar7, 1, (&aRStack_4e8 + 128), 1);
        if (renderPassType == 0) {
            cVar2 = effectManager.IsEnabled(37);
            if (cVar2) {
                pDVar10 = &local_a0;
                pcVar9 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                             pDVar10->GetRenderPipelineState();
                lVar8 = pDVar10->Instance();
                eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::
                    compressed_pair_imp(pcVar9,
                                        (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar8 + 2056));
                pDVar10 = &local_a0;
                this_08 = (Layout*)pDVar10->GetRenderPipelineState();
                lVar8 = pDVar10->Instance();
                arg1 = (void*)(lVar8 + 1140);
                goto LAB_1007d598e;
            }
        } else {
            if ((renderPassType != 2) && (renderPassType != 4)) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/particles/ParticleSystemRenderer.cpp",
                                465, "Unsupported render pass type");
            }
            pDVar10 = &local_a0;
            this_08 = (Layout*)pDVar10->GetRenderPipelineState();
            lVar8 = pDVar10->Instance();
            arg1 = (void*)(lVar8 + 960);
        LAB_1007d598e:
            this_08->SetHeapSize(arg1);
        }
        pDVar10 = &local_a0;
        pRVar6 = (RenderPipelineState*)pDVar10->GetRenderPipelineState();
        lVar8 = pDVar10->Instance();
        pRVar6->SetRasteriserState((lVar8 + 1308));
        iVar4 = UpdateVertexBufferContents(pPVar1, (BatchData*)this_00, renderPassType);
        if (iVar4 != 0) {
            if (*PTR_m_showOverdraw_100ee6a50 != '\0') {
                cVar2 = pPVar1->field_4688->operator_cast_to_bool();
                if (cVar2) {
                    this_09 = local_a0.GetOutputMergerState();
                    renderTargets = (RenderTargets*)pPVar1->field_4688->end();
                    this_09->SetRenderTargets(renderTargets);
                    pDVar10 = &local_a0;
                    pcVar9 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                                 pDVar10->GetRenderPipelineState();
                    lVar8 = pDVar10->Instance();
                    eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::
                        compressed_pair_imp(pcVar9,
                                            (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar8 + 1828));
                }
            }
            renderContext.DrawIndexedPrimitives(&local_a0, 4, iVar4 * 6, 0);
            *(short*)pPVar1->m_metrics = *(short*)pPVar1->m_metrics + 1;
        }
    LAB_1007d5ae2:
        this_00->Clear();
    }

    // 0x1007d5b20
    bool ParticleSystemRenderer::BatchData::IsValid() const {
        if ((field_24 == nullptr) || (field_32 == nullptr)) {
            return false;
        }
        return field_44 != 0;
    }

    // 0x1007d5b70
    unsigned long ParticleSystemRenderer::UpdateVertexBufferContents(const ParticleSystemRenderer::BatchData& batchData,
                                                                     RenderPassType renderPassType) {
        int iVar2;
        long lVar6;
        ResourceDataT<unsigned char>* resourceData;
        unsigned long uVar7;
        uint8_t local_e0[24];
        __8* local_38;

        local_38 = (__8*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)renderPassType);
        long lVar4 = batchData.HeapBeginPtr();
        long lVar5 = batchData.end();
        if (lVar4 == lVar5) {
            uVar7 = 0;
        } else {
            uVar7 = 0;
            do {
                if (*(vector<game::LocationAudioProperties>**)(lVar4 + 24) == nullptr) {
                    if (*(long*)(lVar4 + 16) == 0) {
                        LogAssert("batchEntry.m_modularParticleData",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/particles/ParticleSystemRenderer.cpp",
                                  652, nullptr);
                    }
                    lVar6 = (*(ParticleData**)(lVar4 + 16))->GetCount();
                } else {
                    lVar6 = (*(vector<game::LocationAudioProperties>**)(lVar4 + 24))->size();
                }
                uVar7 = uVar7 + lVar6;
                lVar4 = lVar4 + 40;
            } while (lVar4 != lVar5);
        }
        ParticleSystemRenderer* this_02 = this;
        if (uVar7 != (unsigned int)batchData.field_44) {
            LogAssert("totalParticlesExpected == (eastl_size_t)batch.m_totalParticles",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleSystemRenderer.cpp",
                      662, nullptr);
        }
        PassDrawInfo* passDrawInfo = (PassDrawInfo*)(*((m_metrics + 4)))[(unsigned long)local_38 & 4294967295];
        local_38 = (__8*)&this_02->field_256;
        *local_e0 = local_38->MapWrite(4, 0, batchData.field_44 << 6, 0);
        __8* local_50 = (__8*)&this_02->field_344;
        auto local_c8 = local_50->MapWrite(4, 0, batchData.field_44 << 5, 0);
        __8* local_48 = (__8*)&this_02->field_432;
        auto local_b0 = local_48->MapWrite(4, 0, batchData.field_44 << 4, 0);
        __8* local_40 = (__8*)&this_02->field_520;
        auto local_98 = local_40->MapWrite(4, 0, batchData.field_44 << 4, 0);
        uint8_t* this_00 = &this_02->field_608;
        auto local_80 = this_00->MapWrite(4, 0, batchData.field_44 << 4, 0);
        uint8_t* this_01 = &this_02->field_696;
        auto local_68 = this_01->MapWrite(4, 0, batchData.field_44 * 48, 0);
        if ((*PTR_m_testNullGPUBufferMappings_100ee6a20 != '\0') && (iVar2 = math::Rand(100), 50 < iVar2)) {
            switch (math::Rand(6)) {
            case 0:
                UpdateVertexBufferContents(ParticleSystemRenderer::BatchData const&, RenderPassType)::$_8::operator()(
                    local_38, (DynamicBuffer<render::VertexBuffer>*)local_e0, resourceData);
                break;
            case 1:
                UpdateVertexBufferContents(ParticleSystemRenderer::BatchData const&,
                                           RenderPassType)::$_8::operator()(local_50, &local_c8, resourceData);
                break;
            case 2:
                UpdateVertexBufferContents(ParticleSystemRenderer::BatchData const&,
                                           RenderPassType)::$_8::operator()(local_48, &local_b0, resourceData);
                break;
            case 3:
                UpdateVertexBufferContents(ParticleSystemRenderer::BatchData const&,
                                           RenderPassType)::$_8::operator()(local_40, &local_98, resourceData);
                break;
            case 4:
                UpdateVertexBufferContents(ParticleSystemRenderer::BatchData const&,
                                           RenderPassType)::$_8::operator()((__8*)this_00, &local_80, resourceData);
                break;
            case 5:
                UpdateVertexBufferContents(ParticleSystemRenderer::BatchData const&,
                                           RenderPassType)::$_8::operator()((__8*)this_01, &local_68, resourceData);
                break;
            default:
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/particles/ParticleSystemRenderer.cpp",
                                737, nullptr);
            }
        }
        bool cVar1 = local_e0->operator_cast_to_bool();
        if ((((!cVar1) || (cVar1 = fixedfunction::function::operator_cast_to_bool(&local_c8), !cVar1)) ||
             (cVar1 = fixedfunction::function::operator_cast_to_bool(&local_b0), !cVar1)) ||
            (((cVar1 = fixedfunction::function::operator_cast_to_bool(&local_98),
               !cVar1 || (cVar1 = fixedfunction::function::operator_cast_to_bool(&local_80), !cVar1)) ||
              (cVar1 = fixedfunction::function::operator_cast_to_bool(&local_68), !cVar1)))) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "particles/ParticleSystemRenderer.cpp",
                            757, "Particle vertex buffer mapping failed");
        }
        ReturnValue local_118 = (ReturnValue)local_e0._0_8_;
        ReturnValue local_110 = local_c8[0];
        ReturnValue local_108 = local_b0[0];
        ReturnValue local_100 = local_98[0];
        ReturnValue local_f8 = local_80[0];
        ReturnValue local_f0 = local_68[0];
        uVar7 = batchData.WriteToBuffers(local_118, this_02->field_4360, passDrawInfo);
        if ((unsigned int)batchData.field_44 < uVar7) {
            LogAssert("totalNumParticles <= batch.m_totalParticles",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleSystemRenderer.cpp",
                      753, nullptr);
        }
        cVar1 = local_e0->operator_cast_to_bool();
        if (cVar1) {
            local_38->Unmap();
        }
        cVar1 = fixedfunction::function::operator_cast_to_bool(&local_c8);
        if (cVar1) {
            local_50->Unmap();
        }
        cVar1 = fixedfunction::function::operator_cast_to_bool(&local_b0);
        if (cVar1) {
            local_48->Unmap();
        }
        cVar1 = fixedfunction::function::operator_cast_to_bool(&local_98);
        if (cVar1) {
            local_40->Unmap();
        }
        cVar1 = fixedfunction::function::operator_cast_to_bool(&local_80);
        if (cVar1) {
            this_00->Unmap();
        }
        cVar1 = fixedfunction::function::operator_cast_to_bool(&local_68);
        if (cVar1) {
            this_01->Unmap();
        }
        if (uVar7 != 0) {
            UpdateVertexStreamData(this_02);
        }
        return uVar7;
    }

    // 0x1007d60a0
    void ParticleSystemRenderer::BatchData::Clear() {
        clear();
        field_24 = nullptr;
        field_32 = nullptr;
        field_40 = -1;
        field_44 = 0;
        field_48 = 0;
    }

    // 0x1007d60d0
    void ParticleSystemRenderer::ClearPendingBatchData() {
        field_4624->Clear();
    }

    // 0x1007d60f0
    void ParticleSystemRenderer::CompositeOverdraw(render::RenderContext& renderContext,
                                                   const render::RenderTargets* renderTargets,
                                                   const render::Viewport& viewport) {
        RenderToTextureHelper* this_01;
        RenderTargets* pRVar7;
        long lVar8;
        Layout* this_02;
        compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>* this_03;
        ShaderProgramVariable* shaderProgramVariable;
        ShaderProgram* shaderProgram;
        Desc* pDVar9;
        RenderContext* renderContext_00;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_60;
        Texture* local_40;

        if (renderTargets == nullptr) {
            LogAssert("dstRT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleSystemRenderer.cpp",
                      502, nullptr);
        }
        if (*PTR_m_showOverdraw_100ee6a50 == '\0') {
            field_24->Unregister(*field_4688);
            return;
        }
        array<render::Texture::Desc, 2ul> local_128;
        auto pvVar3 = renderTargets->GetColourTargetTextures();
        uint64_t* puVar4 = (uint64_t*)(*pvVar3)[0];
        int* piVar5 = (int*)(*puVar4)->second();
        int iVar1 = *piVar5;
        int* piVar6 = &local_128[0];
        *piVar6 = iVar1;
        piVar6[1] = piVar5[1];
        uint8_t* this_00 = field_4688;
        if (this_00->operator_cast_to_bool() != '\0') {
            pRVar7 = (RenderTargets*)(*this_00).operator->();
            pvVar3 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         pRVar7->GetColourTargetTextures();
            puVar4 = (uint64_t*)(*pvVar3)[0];
            piVar5 = (int*)(*puVar4)->second();
            if (*piVar5 == *piVar6) {
                pRVar7 = (RenderTargets*)(*this_00).operator->();
                pvVar3 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                             pRVar7->GetColourTargetTextures();
                puVar4 = (uint64_t*)(*pvVar3)[0];
                lVar8 = (*puVar4)->second();
                if (*(int*)(lVar8 + 4) == piVar6[1]) {
                    pDVar9 = &local_a8;
                    new (pDVar9) render::DrawCallState();
                    this_02 = (Layout*)pDVar9->GetRenderPipelineState();
                    renderContext_00 = renderContext;
                    lVar8 = pDVar9->Instance();
                    this_02->SetHeapSize((lVar8 + 1080));
                    pDVar9 = &local_a8;
                    this_03 = (compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>*)
                                  pDVar9->GetRenderPipelineState();
                    lVar8 = pDVar9->Instance();
                    eastl::compressed_pair_imp<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL, 2>::
                        compressed_pair_imp(this_03,
                                            (PlayerDataComparator<oldscape::social::FriendChatUser>*)(lVar8 + 1676));
                    if (field_4680 == nullptr) {
                        LogAssert("m_textureRenderHelper",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/particles/ParticleSystemRenderer.cpp",
                                  535,
                                  "m_textureRenderHelper not set - ensure ParticleSystemRenderer::Initialise has been "
                                  "called prior to this");
                    }
                    this_01 = field_4680;
                    pRVar7 = (RenderTargets*)(*this_00).operator->();
                    pvVar3 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                                 pRVar7->GetColourTargetTextures();
                    puVar4 = (uint64_t*)(*pvVar3)[0];
                    local_40 = (Texture*)*puVar4;
                    shaderProgramVariable = (ShaderProgramVariable*)graphics::operator*(119);
                    shaderProgram = (ShaderProgram*)*field_4704;
                    this_01->RenderTextureToQuad(*renderContext_00, local_a8, renderTargets, local_40,
                                                 *shaderProgramVariable, *shaderProgram, nullptr, viewport, -1);
                    goto LAB_1007d6398;
                }
            }
        }
        field_24->Unregister(*this_00);
        piVar6[3] = 23;
        piVar6[4] = 1;
        Desc local_a8;
        local_60.Register(field_24, 14647971, *3553, (int)&local_128, DAT_00000001, (unsigned int)&local_a8, false);
        *this_00 = local_60;
        renderContext_00 = renderContext;
    LAB_1007d6398:
        local_a8 = math::Vector4T(0.0);
        pRVar7 = (RenderTargets*)this_00->end();
        renderContext_00->ClearRenderTargets(pRVar7, &local_a8, 1);
    }

    // 0x1007d6450
    void ParticleSystemRenderer::OnEndFrame() {
        field_256.RotateBuffers();
        field_344.RotateBuffers();
        field_432.RotateBuffers();
        field_520.RotateBuffers();
        field_608.RotateBuffers();
        field_696.RotateBuffers();
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
        m_metrics[2] = 0;
        m_metrics[3] = 0;
        m_metrics[4] = 0;
        field_4725 = 0;
        field_4728 = 0;
        field_4880 = 0;
    }

    // 0x1007d66f0
    unsigned long ParticleSystemRenderer::BatchData::WriteToBuffers(
        std::array<unsigned char*, 6ul> const& arg1, ParticleData* particleData,
        ParticleSystemRenderer::Metrics::PassDrawInfo* passDrawInfo) const {
        uint8_t* this_00;
        unsigned int uVar1;
        ParticleData* this_01;
        bool cVar2;
        unsigned long uVar4;
        EntityHighlightGlobalState* pEVar5;
        Particle* pPVar6;
        Particle* particle1;
        long* plVar8;
        long* plVar9;
        unsigned int* puVar10;
        PassDrawInfo* pPVar11;
        ParticleData* pPVar12;
        unsigned long uVar13;
        unsigned long uVar14;
        float fVar15;
        uint8_t auVar16[16];
        WrapArray<game::Cutscene2DAnimation<float>::Key const> local_138;
        uint32_t uStack_124;
        uint32_t uStack_120;
        uint32_t uStack_11c;
        uint64_t local_118;
        uint64_t local_108;
        uint64_t local_100;
        uint64_t local_f8;
        uint64_t local_f0;
        uint64_t local_e8;
        uint64_t local_e0;
        uint64_t local_d8;
        uint64_t local_d0;
        uint64_t local_c8;
        uint64_t local_c0;
        uint64_t local_b8;
        uint64_t local_b0;
        long local_a0;
        Layout* local_98;
        Layout* local_90;
        Layout* local_88;
        Layout* local_80;
        PassDrawInfo* local_70;
        unsigned long local_68;
        PassDrawInfo* local_58;
        unsigned long local_40;
        Layout* local_38;

        if (particleData == nullptr) {
            LogAssert("monolithicToModularTempBuffer != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleSystemRenderer.cpp",
                      831, nullptr);
        }
        if (passDrawInfo == nullptr) {
            LogAssert("passMetrics != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleSystemRenderer.cpp",
                      833, nullptr);
        }
        long lVar3 = HeapBeginPtr();
        long local_78 = end();
        if (lVar3 == local_78) {
            uVar14 = 0;
        } else {
            local_58 = passDrawInfo + 12;
            local_70 = passDrawInfo + 8;
            uVar14 = 0;
            do {
                pPVar12 = particleData;
                this_01 = *(ParticleData**)(lVar3 + 16);
                if (this_01 == nullptr) {
                    if (*(long*)(lVar3 + 24) == 0) {
                        LogAssert("batchElement.m_monolithicParticleData",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/particles/ParticleSystemRenderer.cpp",
                                  858, nullptr);
                    }
                    particleData->Clear();
                    pEVar5 =
                        (EntityHighlightGlobalState*)(*(vector<Particle, eastl::fixed_vector_allocator<
                                                                             80ul, 128ul, 16ul, 0ul, true>>**)(lVar3 +
                                                                                                               24))
                            ->front();
                    fVar15 = (float)pEVar5->GetOutlineRadiusAdjustment();
                    if (fVar15 <= 0.0) {
                        uVar13 = 0;
                    } else {
                        pEVar5 =
                            (EntityHighlightGlobalState*)(*(vector<Particle,
                                                                   eastl::fixed_vector_allocator<80ul, 128ul, 16ul, 0ul,
                                                                                                 true>>**)(lVar3 + 24))
                                ->back();
                        fVar15 = (float)pEVar5->GetOutlineRadiusAdjustment();
                        if (0.0 <= fVar15) {
                            uVar13 = (*(vector<game::LocationAudioProperties>**)(lVar3 + 24))->size();
                        } else {
                            pPVar6 = (Particle*)((Layout*)*(vector<game::LocationAudioProperties>**)(lVar3 + 24))
                                         ->HeapBeginPtr();
                            auVar16 =
                                (*(vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>**)(lVar3 + 24))
                                    ->end();
                            pPVar6 = std::partition_point<
                                Particle const*,
                                (std::array<unsigned char*, 6ul> const&)
                                    ->WriteToBuffers(ParticleData*, ParticleSystemRenderer::Metrics::PassDrawInfo*)
                                        const ::__13>(pPVar6, auVar16._0_8_, auVar16._8_8_);
                            particle1 = (Particle*)(*(Layout**)(lVar3 + 24))->HeapBeginPtr();
                            uVar13 = std::distance<Particle const*>(particle1, pPVar6);
                        }
                        if (uVar13 != 0) {
                            pPVar6 = (Particle*)(*(Layout**)(lVar3 + 24))->HeapBeginPtr();
                            new (&local_d8) WrapArray(pPVar6, uVar13);
                            pPVar12 = particleData;
                            local_138.WrapArray<WrapArray<game::Cutscene2DAnimation<float>::Key const>>(local_d8);
                            pPVar12->AddDeprecatedParticleRenderData(&local_138, *(unsigned short*)(lVar3 + 32),
                                                                     *(bool*)(lVar3 + 34));
                        }
                    }
                    uVar4 = pPVar12->GetCount();
                    if (uVar4 != uVar13) {
                        LogAssert("monolithicToModularTempBuffer->GetCount() == numParticlesBatchEntry",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                  "runetek7/particles/ParticleSystemRenderer.cpp",
                                  891, nullptr);
                    }
                    *(int*)(passDrawInfo + 4) = *(int*)(passDrawInfo + 4) + (int)uVar13;
                    uVar4 = (*(vector<game::LocationAudioProperties>**)(lVar3 + 24))->size() - uVar13;
                    pPVar11 = local_70;
                } else {
                    cVar2 = this_01->HasPotentiallyVisibleParticles();
                    pPVar12 = this_01;
                    if (!cVar2) {
                        uVar4 = 0;
                        uVar13 = 0;
                        pPVar11 = local_58;
                    } else {
                        uVar4 = this_01->GetCount();
                        pPVar11 = local_58;
                        uVar13 = uVar4;
                    }
                }
                *(int*)pPVar11 = *(int*)pPVar11 + (int)uVar4;
                if (uVar13 != 0) {
                    this_00 = &pPVar12->field_120;
                    local_a0 = lVar3;
                    local_40 = uVar13;
                    local_d8 = this_00->size();
                    local_98 = (Layout*)&pPVar12->field_144;
                    local_d0 = local_98->size();
                    local_90 = (Layout*)&pPVar12->field_192;
                    local_c8 = local_90->size();
                    local_88 = (Layout*)&pPVar12->field_216;
                    local_c0 = local_88->size();
                    local_80 = (Layout*)&pPVar12->field_240;
                    local_b8 = local_80->size();
                    local_b0 = pPVar12->field_168.size();
                    local_38 = (Layout*)this_00;
                    lVar3 = this_00->size();
                    plVar8 = (long*)std::array<unsigned long, 6ul>::begin();
                    plVar9 = (long*)std::array<unsigned long, 6ul>::end();
                    for (; plVar8 != plVar9; plVar8 = plVar8 + 1) {
                        if (lVar3 != *plVar8) {
                            LogAssert("expectedElementcount == elementCount",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/particles/ParticleSystemRenderer.cpp",
                                      917, nullptr);
                        }
                    }
                    local_108 = local_38->HeapBeginPtr();
                    local_100 = local_98->HeapBeginPtr();
                    local_f8 = local_90->HeapBeginPtr();
                    local_f0 = local_88->HeapBeginPtr();
                    local_e8 = local_80->HeapBeginPtr();
                    local_e0 = pPVar12->field_168.HeapBeginPtr();
                    local_118 = 206158430224;
                    uVar4 = local_40 + uVar14 << (*PTR_m_testParticleRenderLimitExceeded_100ee6a30 & 63);
                    uStack_124 = 32;
                    uStack_120 = 16;
                    uStack_11c = 16;
                    uVar1 = field_44;
                    if (uVar1 < uVar4) {
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "graphics/runetek7/particles/ParticleSystemRenderer.cpp",
                                        974,
                                        "Maximum number of particles exceeded while attempting to copy range [%u;%u] "
                                        "(expected %u particles total)",
                                        uVar14 & 4294967295, uVar4 & 4294967295, (unsigned long)uVar1);
                    }
                    uVar13 = 0;
                    local_38 = (Layout*)(unsigned long)uVar1;
                    do {
                        plVar8 = &arg1[uVar13];
                        if (*plVar8 == 0) {
                            LogAssert("destinations[n]",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/particles/ParticleSystemRenderer.cpp",
                                      959, nullptr);
                        }
                        plVar9 = &local_108[uVar13];
                        if (*plVar9 == 0) {
                            LogAssert("sources[n]",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/particles/ParticleSystemRenderer.cpp",
                                      960, nullptr);
                        }
                        puVar10 = &64 [uVar13];
                        _memcpy((void*)(uVar14 * *puVar10 + *plVar8), (void*)*plVar9, *puVar10 * local_40);
                        uVar13 = uVar13 + 1;
                    } while (uVar13 != 6);
                    uVar13 = local_40;
                    lVar3 = local_a0;
                    if (local_38 < uVar4) {
                        return local_68;
                    }
                }
                uVar14 = uVar14 + uVar13;
                lVar3 = lVar3 + 40;
            } while (lVar3 != local_78);
        }
        return uVar14;
    }

    // 0x1007d6c80
    void ParticleSystemRenderer::UpdateVertexStreamData() {
        uint64_t local_70 = field_256.CurrentBuffer();
        uint64_t local_68 = field_344.CurrentBuffer();
        uint64_t local_60 = field_432.CurrentBuffer();
        uint64_t local_58 = field_520.CurrentBuffer();
        uint64_t local_50 = field_608.CurrentBuffer();
        uint64_t local_48 = field_696.CurrentBuffer();
        uint8_t* this_00 = &field_872;
        uint32_t local_40 = this_00->GetVertexStride(0);
        uint32_t local_3c = this_00->GetVertexStride(1);
        uint32_t local_38 = this_00->GetVertexStride(2);
        uint32_t local_34 = this_00->GetVertexStride(3);
        uint32_t local_30 = this_00->GetVertexStride(4);
        uint32_t local_2c = this_00->GetVertexStride(5);
        uint64_t uStack_80 = 0;
        uint64_t local_78 = 0;
        auto arg3 = local_70.data();
        auto arg4 = local_40.data();
        unsigned int* arg5 = (unsigned int*)(0).data();
        field_64->SetVertexStreamData(this_00, 6, arg3, arg4, arg5);
    }

    // 0x1007d6f70
    unsigned long ParticleSystemRenderer::BatchData::IsCompatible(const TextureAtlasReference* textureAtlasReference,
                                                                  const ParticleMaterial* particleMaterial, int arg3,
                                                                  unsigned int arg4,
                                                                  ParticleRenderMode particleRenderMode) const {
        ParticleRenderMode PVar1;
        long lVar2;
        long lVar3;
        uint64_t unaff_R15;

        unsigned long uVar4 = (((uint64_t)((int64_t)((unsigned long)unaff_R15 >> 8)) << 8) | (uint8_t)1);
        if (field_44 != 0) {
            if (((field_44 + arg4 <= m_maxParticlesPerBatch) && (field_40 == arg3)) && (field_32 == particleMaterial)) {
                lVar2 = field_24->GetTextureAtlas();
                lVar3 = textureAtlasReference->GetTextureAtlas();
                if ((lVar2 == lVar3) && ((PVar1 = field_48, PVar1 == particleRenderMode ||
                                                                (((PVar1 != 0 || (particleRenderMode == 1)) &&
                                                                  ((PVar1 != 1 || (particleRenderMode == 0))))))))
                    goto LAB_1007d6fc3;
            }
            uVar4 = 0;
        }
    LAB_1007d6fc3:
        return uVar4 & 4294967295;
    }

    // 0x1007e75c0
    ParticleSystemRenderer::AddDrawableToBatch(ParticleSystem_DE const&, render::RenderContext&,
                                               render::DrawCallState const&, SceneViewData const&, RenderPassType,
                                               EffectManager&)::$_12::~$_12() {
        field_64.~shared_ptr();
    }

    // 0x1007f83c0
    void ParticleSystemRenderer::AddDrawableToBatch(ParticleSystem_DE const&, render::RenderContext&,
                                                    render::DrawCallState const&, SceneViewData const&, RenderPassType,
                                                    EffectManager&)::$_10::operator()() const {
        field_64->CalculateViewDistanceAndSort(*this);
    }

    // 0x1007f9660
    ParticleSystemRenderer::AddDrawableToBatch(ParticleSystem_DE const&, render::RenderContext&,
                                               render::DrawCallState const&, SceneViewData const&, RenderPassType,
                                               EffectManager&)::$_12::$_12($_12&& arg1) {
        uint64_t uVar1 = *(uint64_t*)arg1;
        uint64_t uVar2 = *(uint64_t*)(arg1 + 8);
        uint64_t uVar3 = *(uint64_t*)(arg1 + 16);
        uint64_t uVar4 = *(uint64_t*)(arg1 + 24);
        uint64_t uVar5 = *(uint64_t*)(arg1 + 32);
        uint64_t uVar6 = *(uint64_t*)(arg1 + 40);
        uint64_t uVar7 = *(uint64_t*)(arg1 + 56);
        field_48 = *(uint64_t*)(arg1 + 48);
        field_56 = uVar7;
        field_32 = uVar5;
        field_40 = uVar6;
        field_16 = uVar3;
        field_24 = uVar4;
        field_0 = uVar1;
        field_8 = uVar2;
        new (&field_64) shared_ptr((arg1 + 64));
    }

    // 0x1007f9770
    void ParticleSystemRenderer::AddDrawableToBatch(ParticleSystem_DE const&, render::RenderContext&,
                                                    render::DrawCallState const&, SceneViewData const&, RenderPassType,
                                                    EffectManager&)::$_12::operator()() const {
        ((ParticleSystem*)field_64.operator->())->CalculateViewDistanceAndSort(*this);
    }

} // namespace jag::graphics

namespace jag::graphics {
    namespace {
        // 0x1007d4f60
        bool MustSortUsingViewProjMatrix(RenderPassType renderPassType) {
            return renderPassType < 2;
        }

        // 0x1007e6e30
        unsigned long CheckEmitterDrawable(RenderPassType renderPassType,
                                           const ModularParticleEmitterTemplate& modularParticleEmitterTemplate,
                                           bool arg3, bool arg4) {
            bool cVar1;
            int iVar2;
            uint64_t unaff_R12;
            unsigned long uVar3;

            uint64_t uVar4 = (uint64_t)((unsigned long)unaff_R12 >> 8);
            if (*PTR_m_showOverdraw_100ee6a50 == '\0') {
                iVar2 = modularParticleEmitterTemplate.GetLevel();
                uVar3 = (((uint64_t)uVar4 << 8) | (uint8_t)(iVar2 == 2 && arg3));
                if ((iVar2 != 2) && (!arg3)) {
                    if ((renderPassType == 4) || (renderPassType == 2)) {
                        cVar1 = modularParticleEmitterTemplate.IsFlagSet(1);
                        if (cVar1 == arg4) {
                            if ((*PTR_m_renderAlphaEarlyParticles_100ee6a18 == '\0') ||
                                (uVar3 = (((uint64_t)uVar4 << 8) | (uint8_t)1), !arg4)) {
                                uVar3 = (((uint64_t)((int64_t)(uVar3 >> 8)) << 8) |
                                         (uint8_t)(*PTR_m_renderAlphaLateParticles_100ee6a10 != '\0' && !arg4));
                            }
                        } else {
                            uVar3 = 0;
                        }
                    } else {
                        uVar3 = 0;
                        if (renderPassType == 0) {
                            cVar1 = modularParticleEmitterTemplate.IsFlagSet(0);
                            if (cVar1) {
                                iVar2 = modularParticleEmitterTemplate.GetLevel();
                                uVar3 = (unsigned long)(iVar2 == 0);
                            }
                        }
                    }
                }
            } else {
                uVar3 = (((uint64_t)uVar4 << 8) | (uint8_t)1);
                if (renderPassType != 4) {
                    LogAssert("renderPass == FORWARD_LIGHTING",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                              "particles/ParticleSystemRenderer.cpp",
                              41, nullptr);
                }
            }
            return uVar3 & 4294967295;
        }

    } // namespace

} // namespace jag::graphics
