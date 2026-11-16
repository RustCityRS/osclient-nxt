// libs/graphics/runetek7/RT7Core.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "RT7Core.h"

namespace jag::graphics {
    // 0x100f44c40
    int32_t RT7Core::m_MSAAQuality__[16] = {
        0, 0, 14512292, 1, 1, 0, 15065569, 1, 2, 0, 14769915, 1, 3, 0, 15065580, 1,
    };

    // 0x103bc0ee0, set at startup by ___cxx_global_var_init.45
    StringEnum RT7Core::m_MSAAQuality = StringEnum((StringEnumEntry*)&RT7Core::m_MSAAQuality__, 4);

    // 0x103bc0ef0
    int64_t RT7Core::m_rasteriserDiscard;

    // 0x1000b7a70: RT7Core::GetViewportHeight() const has the same machine code as oldscape::minimenu::MinimenuEntry::GetObjType() const

    // 0x1000b7a80: RT7Core::GetViewportWidth() const has the same machine code as oldscape::minimenu::MinimenuEntry::GetObjCount() const

    // 0x10011c770: RT7Core::GetResourceProvider() has the same machine code as eastl::rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>, eastl::fixed_node_allocator<48ul, 5ul, 8ul, 0ul, true>, eastl::use_first<eastl::pair<int const, unsigned long>>, true, true>::size() const

    // 0x10017a5a0: RT7Core::GetMSAASampleCount() has the same machine code as http::HTTPRequest::GetData() const

    // 0x1001c4610: RT7Core::GetGBufferRT() const has the same machine code as RT7Core::GetGBufferRT()

    // 0x1001fb280: RT7Core::GetClippingRectangle() const has the same machine code as http::CRMData::GetActionInfo() const

    // 0x100414cb0: RT7Core::GetImmediateThreadPool() has the same machine code as math::Transitionable<IrradianceSHCoefConsts>::GetEndValue()

    // 0x1004491d0: RT7Core::GetRenderTargetsManager() has the same machine code as game::SceneManager::GetDebugCursorPosition() const

    // 0x10097e110
    RT7Core::RT7Core(Js5ResourceProvider& js5ResourceProvider, RT7GraphicsArchiveBundle& rt7GraphicsArchiveBundle,
                     MaterialRawProvider& materialRawProvider, TextureDataProvider& textureDataProvider,
                     IConfigProvider* iConfigProvider, unsigned int arg6, unsigned int arg7, unsigned int arg8,
                     unsigned int arg9) {
        RenderTargetsManager* local_58;
        ThreadPool* local_50;

        IConfigProvider* local_40 = iConfigProvider;
        new (this) render::RenderDeviceCallback(true, 2);
        new (&field_16) render::RenderDeviceOnEndFrame(true);
        field_16 = &PTR__RT7Core_100f1bae8;
        field_32 = js5ResourceProvider;
        Js5ArchiveSettings* pJVar1 = rt7GraphicsArchiveBundle.field_8;
        Js5ArchiveSettings* pJVar2 = rt7GraphicsArchiveBundle.field_16;
        Js5ArchiveSettings* pJVar3 = rt7GraphicsArchiveBundle.field_24;
        Js5ArchiveSettings* pJVar4 = rt7GraphicsArchiveBundle.field_32;
        Js5ArchiveSettings* pJVar5 = rt7GraphicsArchiveBundle.field_40;
        Js5ArchiveSettings* pJVar6 = rt7GraphicsArchiveBundle.field_48;
        MaterialManager* pMVar7 = (MaterialManager*)rt7GraphicsArchiveBundle.field_56;
        field_40 = rt7GraphicsArchiveBundle.field_0;
        field_48 = pJVar1;
        field_56 = pJVar2;
        field_64 = pJVar3;
        field_72 = pJVar4;
        field_80 = pJVar5;
        field_88 = pJVar6;
        field_96 = pMVar7;
        m_viewportWidth = 0;
        field_108 = 0;
        new (&m_clippingRectangle) ClippingRectangle();
        field_128 = -1;
        field_132 = -1;
        m_mSAASampleCount = arg8;
        field_140 = arg9;
        unsigned int uVar8 = threading::GetMaxHardwareThreads();
        uint8_t* this_00 = m_immediateThreadPool;
        local_58 = (RenderTargetsManager*)(((uint64_t)local_58._4_4_ << 32) | (uint32_t)(uVar8 >> 1));
        local_50 = (ThreadPool*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)2);
        auto puVar9 = std::max<unsigned int>(local_58, local_50);
        new (this_00) ThreadPool(*puVar9, "ImmediateTP");
        uint8_t* this_01 = &field_344;
        new (this_01) render::RenderTargetsManager("GlobalRTManager", 128, -1);
        new (m_postProcessManager) postprocess::PostProcessManager(this_01, 8);
        new (&field_2128) GeometryPass(this_01, this_00);
        new (&field_2944) QueryPass(this_01, this_00);
        new (&field_3792) ForwardLightingPass(this_01, *m_postProcessManager, this_00);
        new (&field_4672) ObjectHighlightPass(this_01, this_00);
        new (&field_6096) SSAOPass();
        new (&field_8192) ReflectionPass(this_01, this_00);
        new (&field_9056) DepthDownsamplePass();
        new (&field_9984) DeferredShadowPass();
        new (&field_10752) CausticsPass(this_01, this_00);
        field_11552 = std::make_unique<WaterPatchRenderer>();
        field_11560 = std::make_unique<TerrainPatchRenderer>();
        local_58 = (RenderTargetsManager*)this_01;
        local_50 = (ThreadPool*)this_00;
        field_11568 =
            std::make_unique<ParticleSystemRenderer, render::RenderTargetsManager*, ThreadPool*>(local_58, local_50);
        field_11576 = std::make_unique<GeometryBatchRenderer>();
        field_11584 = std::make_unique<BillboardBatchRenderer>();
        field_11592 = std::make_unique<SkyBoxRenderer>();
        field_11600 = std::make_unique<LightProbeRenderer>();
        m_drawableBatchRenderers = field_11568.get();
        new (m_gBufferRT) shared_ptr();
        new (m_sSAORT) shared_ptr();
        new (m_forwardLightingRT) shared_ptr();
        new (m_shadowBufferRT) shared_ptr();
        new (&field_11680) shared_ptr();
        new (&field_11696) std::array<shared_ptr<render::RenderTargets>, 4ul>();
        new (&field_11760) PostProcessController();
        new (&field_13064) shared_ptr();
        new (&field_13080) shared_ptr();
        new (&field_13096) shared_ptr();
        new (&field_13112) shared_ptr();
        new (&field_13128) shared_ptr();
        new (m_sSAOContext) SSAOContext();
        new ((m_sSAOContext + 56)) graphicutils::RenderToTextureHelper();
        new (&field_13640) ShaderManager(200);
        MaterialManager* local_48 = (MaterialManager*)&field_13824;
        new (local_48) MaterialManager();
        new (&field_14384) TextureManager();
        new (&field_18352) GUIManager();
        new (&field_20616) BillboardManager();
        Singleton<render::RenderDevice>* js5ResourceProvider_00 = (Singleton<render::RenderDevice>*)&field_20664;
        new (js5ResourceProvider_00) ParticleManager(local_40, 1024, this_00);
        Singleton<render::RenderDevice>* this_02 = (Singleton<render::RenderDevice>*)&field_20992;
        new (this_02) ShaderResourceSlotManager();
        Singleton<AnimationManager>* this_03 = (Singleton<AnimationManager>*)&field_21064;
        new (this_03) ShaderResourceSlotManager();
        new (&field_21136) EffectManager(*this);
        local_40 = (IConfigProvider*)m_scaleManager;
        new (local_40) ScaleManager(*this);
        new ((m_scaleManager + 104)) GeometryQueryManager();
        new ((m_scaleManager + 136)) SkyBoxManager(*this);
        this[1].field_6692 = 0;
        this_00->SetAffinity(4);
        math::RunetekColour::InitHSLToRGBTable();
        math::RunetekColour::InitHSVToRGBTable();
        GraphNode::InitPool();
        field_13640.Initialise(&field_21136);
        local_48->Initialise(materialRawProvider);
        field_14384.Initialise(this, field_32, textureDataProvider);
        field_18352.Initialise(this);
        field_20616.Initialise(field_32, field_80);
        ParticleManager::Initialise(js5ResourceProvider_00, field_32, field_88, field_96, (int)local_48, arg6);
        auto pMVar11 = js5ResourceProvider_00->Instance();
        long lVar12 = pMVar11->GetOrigin();
        this_02->SetMaxSize((long)*(int*)(lVar12 + 60));
        pMVar11 = (MapArea*)this_02->Instance();
        lVar12 = pMVar11->GetOrigin();
        this_03->SetMaxSize((long)*(int*)(lVar12 + 124));
        this_03->Create<>();
        this_03->Instance();
    }

    // 0x10097ef50
    RT7Core::~RT7Core() {
        field_16 = &PTR__RT7Core_100f1bae8;
        Shutdown();
        ((m_scaleManager + 136))->~SkyBoxManager();
        ((m_scaleManager + 104))->~GeometryQueryManager();
        m_scaleManager->~ScaleManager();
        field_21136.~EffectManager();
        field_21064.~ShaderResourceSlotManager();
        field_20992.~ShaderResourceSlotManager();
        field_20664.~ParticleManager();
        field_20616.~BillboardManager();
        field_18352.~GUIManager();
        field_14384.~TextureManager();
        field_13824.~MaterialManager();
        field_13640.~ShaderManager();
        ((m_sSAOContext + 56))->~RenderToTextureHelper();
        m_sSAOContext->~SSAOContext();
        field_13128.~shared_ptr();
        field_13112.~shared_ptr();
        field_13096.~shared_ptr();
        field_13080.~shared_ptr();
        field_13064.~shared_ptr();
        field_11760.~PostProcessController();
        field_11696.~array();
        field_11680.~shared_ptr();
        m_shadowBufferRT->~shared_ptr();
        m_forwardLightingRT->~shared_ptr();
        m_sSAORT->~shared_ptr();
        m_gBufferRT->~shared_ptr();
        field_11600.~unique_ptr();
        field_11592.~unique_ptr();
        field_11584.~unique_ptr();
        field_11576.~unique_ptr();
        field_11568.~unique_ptr();
        field_11560.~unique_ptr();
        field_11552.~unique_ptr();
        field_10752.~CausticsPass();
        field_9984.~DeferredShadowPass();
        field_9056.~DepthDownsamplePass();
        field_8192.~ReflectionPass();
        field_6096.~SSAOPass();
        field_4672.~ObjectHighlightPass();
        field_3792.~ForwardLightingPass();
        field_2944.~QueryPass();
        field_2128.~GeometryPass();
        m_postProcessManager->~PostProcessManager();
        field_344.~RenderTargetsManager();
        m_immediateThreadPool->~ThreadPool();
    }

    // 0x10097f3f0
    void RT7Core::Shutdown() {
        Destroy();
        Destroy();
        uint8_t* this_00 = &field_20664;
        Singleton<render::RenderDevice>* this_04 = (Singleton<render::RenderDevice>*)this_00;
        this_00->FlushModularParticleSystems();
        auto this_01 = this_04->Instance();
        ((RenderContext*)this_01->GetPrimaryRenderContext())->FinishRendering();
        if (!(MakeSharedPool<TextureAtlasReference, 8192>::IsPoolEmpty())) {
            LogAssert(
                "TextureAtlasReference::IsPoolEmpty()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/RT7Core.cpp",
                153, nullptr);
        }
        if (!(MakeSharedPool<Model, 3072>::IsPoolEmpty())) {
            LogAssert(
                "Model::IsPoolEmpty()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/RT7Core.cpp",
                154, nullptr);
        }
        this_00->Destroy();
        field_20616.Destroy();
        field_18352.Destroy();
        field_13824.Destroy();
        field_13640.Destroy();
        field_21136.Destroy();
        ((m_scaleManager + 104))->Destroy();
        ((m_scaleManager + 136))->Destroy();
        field_14384.Destroy();
        DestroyPostProcessing();
        DestroySSAO();
        DestroyRenderers();
        DestroyRenderTargets();
        GraphNode::DeletePool();
        math::RunetekColour::DestroyHSLToRGBTable();
        math::RunetekColour::DestroyHSVToRGBTable();
    }

    // 0x10097f570
    uint8_t RT7Core::Initialise(SystemSettings* systemSettings) {
        unsigned int arg1 = GetBackBufferWidth();
        unsigned int arg2 = GetBackBufferHeight();
        SetViewportRTSize(arg1, arg2);
        (logger::default_logger())
            ->Log(false, 8,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/RT7Core.cpp",
                  116, "RT7Core::Initialise(SystemSettings* pSystemSettings)");
        uint8_t bVar1 = InitRenderers();
        uint8_t bVar2 = InitRenderTargets(m_mSAASampleCount);
        uint8_t bVar3 = InitSSAO();
        bVar2 = InitPostProcessing() & bVar3 & bVar1 & bVar2;
        GetShaderManager()->InitialisePreloadFromDisk(systemSettings);
        if (bVar2 == 0) {
            Shutdown();
        }
        return bVar2;
    }

    // 0x10097f640
    uint32_t RT7Core::SetViewportRTSize(unsigned int arg1, unsigned int arg2) {
        unsigned int uVar2;
        unsigned int uVar3;
        Logger* pLVar5;
        OpenGLView* pOVar6;
        unsigned int* puVar7;
        float fVar10;
        unsigned int local_44;
        unsigned int local_40;
        float local_3c;

        unsigned int local_38 = arg1;
        unsigned int local_34 = arg2;
        long lVar4 = ((RenderContext*)GetRenderContext())->GetDesc();
        shared_ptr* this_01 = (shared_ptr*)(lVar4 + 16);
        if (shared_ptr::operator_cast_to_bool(this_01)) {
            pOVar6 = (OpenGLView*)(*this_01).operator->();
            pOVar6->GetFixedMaxScreenSize(local_44, local_40);
            pOVar6 = (OpenGLView*)(*this_01).operator->();
            if (!(pOVar6->IsFullScreen())) {
                if ((local_44 != 0) && (local_40 != 0)) {
                    puVar7 = std::min<unsigned int>(local_38, local_44);
                    local_38 = *puVar7;
                    puVar7 = std::min<unsigned int>(local_34, local_40);
                    local_34 = *puVar7;
                }
            } else {
                pOVar6 = (OpenGLView*)(*this_01).operator->();
                pOVar6->GetFullScreenResolution(local_38, local_34);
            }
            local_3c = (float)local_38;
            pOVar6 = (OpenGLView*)(*this_01).operator->();
            fVar10 = (float)pOVar6->GetMainRenderTargetScaleFactor();
            local_38 = (unsigned int)(long)(fVar10 * local_3c);
            local_3c = (float)local_34;
            pOVar6 = (OpenGLView*)(*this_01).operator->();
            fVar10 = (float)pOVar6->GetMainRenderTargetScaleFactor();
            local_34 = (unsigned int)(long)(fVar10 * local_3c);
        }
        if (local_38 == 0) {
            local_38 = arg1;
            pLVar5 = logger::default_logger();
            this_01 = (shared_ptr*)(unsigned long)local_38;
            pLVar5->Log(
                false, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/RT7Core.cpp",
                708,
                "Attempting to set a fullscreen resolution with width == 0, falling back to current back buffer width "
                "(%u)",
                this_01);
        }
        if (local_34 == 0) {
            local_34 = arg2;
            pLVar5 = logger::default_logger();
            this_01 = (shared_ptr*)(unsigned long)local_34;
            pLVar5->Log(
                false, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/RT7Core.cpp",
                713,
                "Attempting to set a fullscreen resolution with height == 0, falling back to current back buffer "
                "height (%u)",
                this_01);
        }
        uint64_t uVar9 = (uint64_t)((unsigned long)this_01 >> 8);
        uint32_t uVar8 = (uint32_t)(((uint64_t)uVar9 << 8) | (uint8_t)1);
        if (m_viewportWidth == local_38) {
            uVar8 = (uint32_t)(((uint64_t)uVar9 << 8) | (uint8_t)(field_108 != local_34));
        }
        if ((char)uVar8 != '\0') {
            m_viewportWidth = local_38;
            field_108 = local_34;
            pLVar5 = logger::default_logger();
            pLVar5->Log(
                false, 5,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/RT7Core.cpp",
                725, "RT7Core Main Render Target Viewport Resolution: %u, %u", (unsigned long)m_viewportWidth,
                (unsigned long)field_108);
            pLVar5 = logger::default_logger();
            uVar2 = GetBackBufferWidth();
            uVar3 = GetBackBufferHeight();
            pLVar5->Log(
                false, 5,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/RT7Core.cpp",
                726, "Render Context Back Buffer Resolution: %d, %d", (unsigned long)uVar2, (unsigned long)uVar3);
        }
        return uVar8;
    }

    // 0x10097f8c0
    uint8_t RT7Core::InitRenderers() {
        uint8_t bVar1 = ((WaterPatchRenderer*)field_11552.operator->())->Initialise(*this);
        uint8_t bVar2 = ((TerrainPatchRenderer*)field_11560.operator->())->Initialise(*this);
        uint8_t bVar3 = ((ParticleSystemRenderer*)field_11568.operator->())->Initialise(*this);
        uint8_t bVar4 = ((GeometryBatchRenderer*)field_11576.operator->())->Initialise(*this);
        uint8_t bVar5 = ((BillboardBatchRenderer*)field_11584.operator->())->Initialise(*this);
        uint8_t bVar6 = ((SkyBoxRenderer*)field_11592.operator->())->Initialise(*this);
        bVar1 = ((LightProbeRenderer*)field_11600.operator->())->Initialise(*this) & bVar6 & bVar5 & bVar4 & bVar3 &
                bVar2 & bVar1;
        if (bVar1 == 0) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "RT7Core.cpp",
                      541, "Failed to initialise RT7Core renderers");
        }
        return bVar1;
    }

    // 0x10097f9d0
    unsigned long RT7Core::InitRenderTargets(int arg1) {
        int* piVar10;
        AutoSingleton<ShaderThreadPoolSingleton> local_80;
        vector<render::Format, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true>> local_70;

        auto this_01 = &local_80->Instance();
        auto pRVar8 = this_01->GetOrigin();
        auto pRVar9 = this_01->Instance();
        uint32_t uVar5 = pRVar9->GetLowestPrecisionRGBFloatFormat();
        GetDepthFormats(&local_70);
        int iVar6 = GetMaxMapZ();
        RT7Core* pRVar17 = this;
        int iVar7 = GetNumVerts();
        uint8_t local_71 = iVar6 == 0 && iVar7 == 0;
        if (iVar6 == 0 && iVar7 == 0) {
            LogAssert(
                "false",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/RT7Core.cpp",
                374, "Attempt to create render targets with a width and height of zero size");
        }
        pRVar9 = (RenderDevice*)pRVar17->Instance();
        pRVar9->ValidateMSAATextureSamples((unsigned int)arg1);
        RenderDeviceCaps* local_d8 = pRVar8;
        local_d0._68_4_ = uVar5;
        std::array<render::Texture::Desc, 2ul> local_1a8;
        unsigned long arg1_00 = 0;
        do {
            piVar10 = &local_1a8[arg1_00];
            piVar10[1] = iVar7;
            *piVar10 = iVar6;
            piVar10[6] = 0;
            *(uint8_t*)(piVar10 + 8) = 0;
            piVar10[3] = 16;
            piVar10[4] = (unsigned int)arg1;
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 2);
        Desc local_128;
        uVar5 = local_d0._68_4_;
        pRVar17 = this;
        local_128.field_4 = iVar7;
        local_128.field_0 = iVar6;
        local_128.field_16 = (unsigned int)arg1;
        local_128._24_8_ = (unsigned long)(unsigned int)local_128.field_28 << 32;
        local_128._32_8_ = local_128._32_8_ & 18446744073709551360;
        piVar10 = &local_70[0];
        local_128.field_12 = *piVar10;
        make_shared<render::RenderTargets>((ReturnValue*)&local_d0);
        uint8_t* puVar1 = pRVar17->m_gBufferRT;
        *puVar1 = local_d0;
        shared_ptr<render::RenderTargets>* local_88 = (shared_ptr<render::RenderTargets>*)puVar1;
        char* pcVar11 = (char*)(*puVar1).operator->();
        render::RenderTargets::Create(pcVar11, 14770251, *3553, (int)&local_1a8,
                                      *((Desc*)(unsigned long)pRVar17->field_140), (unsigned int)&local_128);
        RenderTargets* pRVar12 = (RenderTargets*)(*local_88).operator->();
        auto pvVar13 = pRVar12->GetColourTargetTextures();
        uint64_t* puVar14 = (uint64_t*)(*pvVar13)[0];
        long* plVar16 = (long*)*puVar14;
        long lVar15 = pvVar13->Instance();
        (**(void (**)(...))(*plVar16 + 24))(plVar16, lVar15 + 80, 0);
        pRVar12 = (RenderTargets*)(*local_88).operator->();
        pvVar13 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                      pRVar12->GetColourTargetTextures();
        puVar14 = (uint64_t*)(*pvVar13)[1];
        plVar16 = (long*)*puVar14;
        lVar15 = pvVar13->Instance();
        (**(void (**)(...))(*plVar16 + 24))(plVar16, lVar15 + 80, 0);
        pRVar12 = (RenderTargets*)(*local_88).operator->();
        plVar16 = (long*)pRVar12->GetDepthStencilTargetTexture();
        lVar15 = pRVar12->Instance();
        (**(void (**)(...))(*plVar16 + 24))(plVar16, lVar15 + 80, 0);
        lVar15 = local_1a8[0];
        *(uint32_t*)(lVar15 + 12) = uVar5;
        RenderTargetsManager local_d0;
        local_128.field_48._0_4_ = local_d0.field_48;
        local_128.field_48._4_4_ = local_d0.field_52;
        local_128._56_8_ = local_d0._56_8_;
        local_128.field_32 = local_d0._32_1_;
        local_128._33_3_ = local_d0._33_3_;
        local_128.field_36 = local_d0._36_4_;
        local_128.field_40 = local_d0._40_1_;
        local_128._41_7_ = local_d0._41_7_;
        local_128.field_16 = local_d0._16_4_;
        local_128.field_20 = local_d0._20_4_;
        local_128.field_24 = local_d0._24_4_;
        local_128.field_28 = local_d0._28_4_;
        local_128._0_8_ = local_d0._vptr;
        local_128._8_8_ = local_d0._8_8_;
        puVar1 = pRVar17->m_forwardLightingRT;
        if (puVar1->operator_cast_to_bool() != '\0') {
            LogAssert(
                "!m_forwardLightingRT",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/RT7Core.cpp",
                416, nullptr);
        }
        make_shared<render::RenderTargets>((ReturnValue*)&local_d0);
        *puVar1 = local_d0;
        pcVar11 = (char*)(*puVar1).operator->();
        render::RenderTargets::Create(pcVar11, 14770291, *3553, (int)&local_1a8, DAT_00000001,
                                      (unsigned int)&local_128);
        pRVar12 = (RenderTargets*)(*puVar1).operator->();
        RenderTargets* this_02 = (RenderTargets*)(*local_88).operator->();
        pRVar12->BindDepthStencilTargetTexture((Texture*)this_02->GetDepthStencilTargetTexture());
        uVar5 = render::GetAlpha8TextureFormat(*local_d8);
        *(uint32_t*)(lVar15 + 12) = uVar5;
        *(uint32_t*)(lVar15 + 16) = 1;
        local_d0.Register(&pRVar17->field_344, 14754927, *3553, (int)&local_1a8, DAT_00000001, (unsigned int)&local_128,
                          false);
        uint8_t* this_00 = pRVar17->m_sSAORT;
        *this_00 = local_d0;
        if (!*this_00 != nullptr) {
            LogAssert(
                "m_SSAORT != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/RT7Core.cpp",
                426, nullptr);
        }
        pRVar12 = (RenderTargets*)(*this_00).operator->();
        pvVar13 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                      pRVar12->GetColourTargetTextures();
        puVar14 = (uint64_t*)(*pvVar13)[0];
        plVar16 = (long*)*puVar14;
        lVar15 = pvVar13->Instance();
        (**(void (**)(...))(*plVar16 + 24))(plVar16, lVar15 + 80, 0);
        pRVar12 = (RenderTargets*)(*puVar1).operator->();
        shared_ptr<render::RenderTargets>* renderTargets = local_88;
        pvVar13 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                      pRVar12->GetColourTargetTextures();
        puVar14 = (uint64_t*)(*pvVar13)[0];
        plVar16 = (long*)*puVar14;
        lVar15 = pvVar13->Instance();
        (**(void (**)(...))(*plVar16 + 24))(plVar16, lVar15 + 80, 0);
        pRVar12 = (RenderTargets*)(*puVar1).operator->();
        lVar15 = pRVar12->GetDepthStencilTargetTexture();
        if (lVar15 != 0) {
            pRVar12 = (RenderTargets*)(*puVar1).operator->();
            plVar16 = (long*)pRVar12->GetDepthStencilTargetTexture();
            lVar15 = pRVar12->Instance();
            (**(void (**)(...))(*plVar16 + 24))(plVar16, lVar15 + 80, 0);
        }
        pRVar17->field_2128.SetGBufferRT(*renderTargets);
        pRVar17->field_6096.SetGBufferRT(*renderTargets);
        pRVar17->field_6096.SetSSSAORT(*this_00);
        pRVar17->field_9984.SetGBufferRT(*renderTargets);
        pRVar17->field_9984.SetShadowBufferRT(*pRVar17->m_shadowBufferRT);
        pRVar17->field_4672.SetDepthProviderRT(*puVar1);
        make_shared<render::RenderTargets>(&local_1a8);
        pRVar17->field_11680 = local_1a8;
        pRVar17->field_2944.SetQueryRenderTargetSize(320, 240);
        pRVar17->m_mSAASampleCount = (unsigned int)arg1;
        return local_71 ^ 1;
    }

    // 0x10097ffe0
    uint32_t RT7Core::InitSSAO() {
        uint8_t* texture = m_sSAOContext;
        uint32_t uVar1 = SSAOContext::Init();
        auto puVar2 = texture->SSOBeginPtr();
        *puVar2 = 1132068864;
        long lVar3 = texture->SSOBeginPtr();
        *(uint32_t*)(lVar3 + 20) = 1076887552;
        lVar3 = texture->SSOBeginPtr();
        *(uint32_t*)(lVar3 + 44) = 1036831949;
        lVar3 = texture->GetAuthWrapper();
        if (lVar3 != 0) {
            field_6096.SetSSAOContext(texture);
        }
        if ((char)uVar1 == '\0') {
            (logger::default_logger())
                ->Log(false, 3,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "RT7Core.cpp",
                      621, "Failed to initialise RT7 SSAO effect");
        }
        return uVar1;
    }

    // 0x100980090
    uint8_t RT7Core::InitPostProcessing() {
        RenderTargetsManager* renderTargetsManager;
        AutoSingleton<ShaderThreadPoolSingleton> local_50;

        uint8_t* puVar7 = m_postProcessManager;
        uint8_t bVar2 = puVar7->Init();
        renderTargetsManager = (RenderTargetsManager*)puVar7->GetRenderTargetsManager();
        auto local_88 = puVar7->GetAvgLuminanceFilter();
        make_shared<postprocess::ColourGradingBloomEffect, render::RenderTargetsManager&,
                    postprocess::AvgLuminanceFilter*>(&local_48, renderTargetsManager, &local_88);
        uint8_t* puVar1 = &field_13064;
        *puVar1 = local_48;
        PostProcessManager* local_80 = (PostProcessManager*)puVar7;
        long* plVar4 = (long*)(*puVar1).operator->();
        uint8_t local_33 = (**(void (**)(...))(*plVar4 + 40))(plVar4);
        shared_ptr<oldscape::dash3d::GroundDecor>* local_78 = (shared_ptr<oldscape::dash3d::GroundDecor>*)puVar1;
        DebugUIElement* pDVar5 = (DebugUIElement*)(*puVar1).operator->();
        pDVar5->NotifyDebugRegistration(true);
        make_shared<postprocess::FXAAEffect>(&local_48);
        puVar7 = &field_13080;
        *puVar7 = local_48;
        plVar4 = (long*)(*puVar7).operator->();
        uint8_t local_32 = (**(void (**)(...))(*plVar4 + 40))(plVar4);
        pDVar5 = (DebugUIElement*)(*puVar7).operator->();
        pDVar5->NotifyDebugRegistration(false);
        make_shared<postprocess::OutlineAndShadowEffect>(&local_48);
        puVar1 = &field_13096;
        *puVar1 = local_48;
        shared_ptr<oldscape::dash3d::GroundDecor>* local_68 = (shared_ptr<oldscape::dash3d::GroundDecor>*)puVar7;
        plVar4 = (long*)(*puVar1).operator->();
        uint8_t local_31 = (**(void (**)(...))(*plVar4 + 40))(plVar4);
        shared_ptr<oldscape::dash3d::GroundDecor>* local_70 = (shared_ptr<oldscape::dash3d::GroundDecor>*)puVar1;
        pDVar5 = (DebugUIElement*)(*puVar1).operator->();
        pDVar5->NotifyDebugRegistration(false);
        make_shared<postprocess::EquirectangularEffect>(&local_48);
        puVar7 = &field_13112;
        *puVar7 = local_48;
        plVar4 = (long*)(*puVar7).operator->();
        uint8_t bVar3 = (**(void (**)(...))(*plVar4 + 40))(plVar4);
        shared_ptr<oldscape::dash3d::GroundDecor>* local_60 = (shared_ptr<oldscape::dash3d::GroundDecor>*)puVar7;
        pDVar5 = (DebugUIElement*)(*puVar7).operator->();
        pDVar5->NotifyDebugRegistration(false);
        make_shared<postprocess::DepthOfFieldEffect>(&local_48);
        puVar7 = &field_13128;
        RT7Core* local_58 = this;
        *puVar7 = local_48;
        uint8_t bVar6 = bVar2 & local_33 & local_32 & local_31;
        plVar4 = (long*)(*puVar7).operator->();
        bVar2 = (**(void (**)(...))(*plVar4 + 40))(plVar4);
        bVar2 = bVar2 & bVar6 & bVar3;
        pDVar5 = (DebugUIElement*)(*puVar7).operator->();
        pDVar5->NotifyDebugRegistration(false);
        PostProcessManager* this_00 = local_80;
        if (bVar2 == 0) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "RT7Core.cpp",
                      591, "Failed to initialise RT7 post processing");
        }
        shared_ptr local_48(local_78);
        this_00->AddEffect(local_48);
        shared_ptr<oldscape::dash3d::GroundDecor>* groundDecor = local_70;
        local_48 = shared_ptr(local_68);
        this_00->AddEffect(local_48);
        local_48 = shared_ptr(groundDecor);
        this_00->AddEffect(local_48);
        local_48 = shared_ptr(local_60);
        this_00->AddEffect(local_48);
        local_48 = shared_ptr(puVar7);
        this_00->AddEffect(local_48);
        RT7Core* arg1 = local_58;
        puVar7 = &local_58->field_11760;
        puVar7->SetPostProcessManager(this_00);
        puVar7->SetHeapSize(arg1);
        return bVar2;
    }

    // 0x100980680
    void RT7Core::DestroyPostProcessing() {
        auto plVar1 = field_13064.operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
        plVar1 = (long*)field_13080.operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
        plVar1 = (long*)field_13096.operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
        plVar1 = (long*)field_13112.operator->();
        (**(void (**)(...))(*plVar1 + 48))(plVar1);
        m_postProcessManager->Destroy();
    }

    // 0x100980700
    void RT7Core::DestroySSAO() {
        SSAOContext::Destroy();
    }

    // 0x100980720
    void RT7Core::DestroyRenderers() {
        ((LightProbeRenderer*)field_11600.operator->())->Destroy();
        ((SkyBoxRenderer*)field_11592.operator->())->Destroy();
        ((BillboardBatchRenderer*)field_11584.operator->())->Destroy();
        field_11576.operator->();
        GeometryBatchRenderer::Destroy();
        ((ParticleSystemRenderer*)field_11568.operator->())->Destroy();
        ((TerrainPatchRenderer*)field_11560.operator->())->Destroy();
        ((WaterPatchRenderer*)field_11552.operator->())->Destroy();
    }

    // 0x1009807c0
    void RT7Core::DestroyRenderTargets() {
        shared_ptr<render::RenderTargets>* renderTargets;
        AutoSingleton<ShaderThreadPoolSingleton> local_38;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_30;
        field_9984.SetGBufferRT(local_30);
        local_30 = shared_ptr();
        field_9984.SetShadowBufferRT(local_30);
        local_30 = shared_ptr();
        field_2128.SetGBufferRT(local_30);
        local_30 = shared_ptr();
        field_6096.SetGBufferRT(local_30);
        local_30 = shared_ptr();
        field_6096.SetSSSAORT(local_30);
        local_30 = shared_ptr();
        field_4672.SetDepthProviderRT(local_30);
        uint8_t* this_00 = &field_344;
        this_00->Unregister(*m_shadowBufferRT);
        render::RenderTargets::SafeReset(*m_forwardLightingRT);
        render::RenderTargets::SafeReset(*m_gBufferRT);
        this_00->Unregister(*m_sSAORT);
        render::RenderTargets::SafeReset(field_11680);
        renderTargets = (shared_ptr<render::RenderTargets>*)std::array<shared_ptr<render::RenderTargets>, 4ul>::begin();
        shared_ptr<render::RenderTargets>* psVar1 =
            (shared_ptr<render::RenderTargets>*)std::array<shared_ptr<render::RenderTargets>, 4ul>::end();
        for (; renderTargets != psVar1; renderTargets = renderTargets + 16) {
            this_00->Unregister(*renderTargets);
        }
        this_00->GarbageCollect(true);
    }

    // 0x100980990
    void RT7Core::MainLogic() {
        field_13824.MainLogic();
        field_14384.MainLogic();
        field_20616.MainLogic();
        field_13640.MainLogic();
        m_scaleManager->MainLogic();
    }

    // 0x1009809e0
    void RT7Core::BeginFrame() {
        uint8_t bVar2;
        uint8_t local_48[25];

        this[1].field_6692 = 1;
        long lVar3 = Instance();
        uint64_t* puVar4 = (uint64_t*)((lVar3 + 1200))->second();
        local_48._0_8_ = *puVar4;
        local_48._16_4_ = (uint32_t)((unsigned long)*(uint64_t*)((long)puVar4 + 12) >> 32);
        local_48._20_4_ = (uint32_t)(*(uint64_t*)((long)puVar4 + 20));
        local_48._8_4_ = (uint32_t)puVar4[1];
        local_48._12_4_ = (uint32_t)((unsigned long)puVar4[1] >> 32);
        uint32_t uStack_2f = (uint32_t)((unsigned long)*(uint64_t*)((long)puVar4 + 20) >> 40);
        local_48[24] = m_rasteriserDiscard;
        ((lVar3 + 1200))->Create(*local_48);
        puVar4 = (uint64_t*)((lVar3 + 1272))->second();
        local_48._0_8_ = *puVar4;
        local_48[16] = (uint8_t)((unsigned long)*(uint64_t*)((long)puVar4 + 9) >> 56);
        local_48._17_3_ = (uint32_t)(*(uint64_t*)((long)puVar4 + 17));
        local_48._20_4_ = (uint32_t)((unsigned long)*(uint64_t*)((long)puVar4 + 17) >> 24);
        local_48._8_4_ = (uint32_t)puVar4[1];
        local_48._12_4_ = (uint32_t)((unsigned long)puVar4[1] >> 32);
        stack0xffffffffffffffd0 = (((uint32_t)uStack_2f << 8) | (uint8_t)m_rasteriserDiscard);
        ((lVar3 + 1272))->Create(*local_48);
        long* plVar5 = std::array<DrawableBatchRenderer*, 1ul>::begin();
        long* plVar6 = std::array<DrawableBatchRenderer*, 1ul>::end();
        for (; plVar5 != plVar6; plVar5 = plVar5 + 1) {
            (**(void (**)(...))(*(long*)*plVar5 + 24))();
        }
        m_scaleManager->MainDraw();
        field_14384.MainDraw();
        bool cVar1 = ((m_scaleManager + 104))->HasDestructiveQueries();
        Mode mode = 1;
        if (!cVar1) {
            bVar2 = ((m_scaleManager + 104))->HasQueries();
            mode = (unsigned int)bVar2 * 2;
        }
        field_2944.SetMode(mode);
    }

    // 0x100980b30
    void RT7Core::EndFrame() {}

    // 0x100980b40
    void RT7Core::PerformComposition(const render::RenderTargets* renderTargets, const render::Viewport& viewport) {
        RT7Core* this_01 = (RT7Core*)&field_11568;
        ParticleSystemRenderer* this_00 = (ParticleSystemRenderer*)(*this_01).operator->();
        auto renderContext = GetRenderContext(this_01);
        this_00->CompositeOverdraw(*renderContext, renderTargets, viewport);
        field_4672.CompositeToScreen(*this, renderTargets, viewport);
    }

    // 0x100980bb0
    void RT7Core::SetClippingRectangle(int arg1, int arg2, int arg3, int arg4, bool arg5) {
        int* piVar2;
        uint32_t in_register_00000089;
        int local_34;

        if ((((uint32_t)in_register_00000089 << 8) | (uint8_t)arg5) == 0) {
            if ((((m_clippingRectangle == arg1) && (field_116 == arg2)) && (field_128 == arg3)) &&
                (field_132 == arg4)) {
                return;
            }
            if ((!arg5) && (m_clippingRectangle != -1)) {
                piVar2 = std::max<int>(m_clippingRectangle, arg1);
                m_clippingRectangle = *piVar2;
                piVar2 = std::max<int>(field_116, arg2);
                field_116 = *piVar2;
                local_34 = arg3 + arg1;
                piVar2 = std::min<int>(field_120, local_34);
                field_120 = *piVar2;
                local_34 = arg4 + arg2;
                piVar2 = std::min<int>(field_124, local_34);
                field_124 = *piVar2;
                goto LAB_100980c7e;
            }
        }
        m_clippingRectangle = arg1;
        field_116 = arg2;
        field_120 = arg3 + arg1;
        field_124 = arg4 + arg2;
    LAB_100980c7e:
        int iVar1 = m_clippingRectangle.GetWidth();
        field_128 = iVar1;
        iVar1 = m_clippingRectangle.GetHeight();
        field_132 = iVar1;
    }

    // 0x100980cf0
    auto RT7Core::GetScissorRectFromClippingRect() const {
        int iVar2 = GetInterfaceHeight();
        int arg1 = m_clippingRectangle;
        int iVar1 = field_124;
        int arg3 = m_clippingRectangle.GetWidth();
        int arg4 = m_clippingRectangle.GetHeight();
        return auto(arg1, iVar2 - iVar1, arg3, arg4);
    }

    // 0x100980d60
    bool RT7Core::ClippingTest(int arg1, int arg2, int arg3, int arg4) {
        if (m_clippingRectangle == -1) {
            return true;
        }
        if (((field_120 < arg1) || (arg3 < m_clippingRectangle)) || (field_124 < arg2)) {
            return false;
        }
        return field_116 <= arg4;
    }

    // 0x100980d90
    bool RT7Core::CanUseGBuffer(render::RenderTargets* renderTargets1, render::RenderTargets* renderTargets2) {
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>* pvVar1;
        uint64_t* puVar2;
        int* piVar3;
        int* piVar4;

        bool bVar5 = false;
        if ((renderTargets1 != nullptr) && (renderTargets2 != nullptr)) {
            pvVar1 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         renderTargets1->GetColourTargetTextures();
            puVar2 = (uint64_t*)(*pvVar1)[0];
            piVar3 = (int*)(*puVar2)->second();
            pvVar1 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true>>*)
                         renderTargets2->GetColourTargetTextures();
            puVar2 = (uint64_t*)(*pvVar1)[0];
            piVar4 = (int*)(*puVar2)->second();
            bVar5 = piVar3[1] == piVar4[1] && *piVar3 == *piVar4;
        }
        return bVar5;
    }

    // 0x100980e00
    void RT7Core::CreateRenderingResources() {
        field_21136.CreateRenderingResources();
        InitRenderers();
        InitRenderTargets(m_mSAASampleCount);
        InitSSAO();
        m_postProcessManager->CreateRenderingResources();
        field_20664.CreateRenderingResources();
        field_14384.CreateRenderingResources();
        field_18352.Initialise(this);
        ((ColourGradingBloomEffect*)field_13064.operator->())->CreateRenderingResources();
    }

    // 0x100980ed0
    void RT7Core::DestroyRenderingResources() {
        ((ColourGradingBloomEffect*)field_13064.operator->())->DestroyRenderingResources();
        m_postProcessManager->DestroyRenderingResources();
        field_18352.Destroy();
        field_14384.DestroyRenderingResources();
        field_20664.DestroyRenderingResources();
        DestroySSAO();
        DestroyRenderers();
        DestroyRenderTargets();
        field_21136.DestroyRenderingResources();
    }

    // 0x100980f50
    RT7Core* RT7Core::GetDepthFormats() const {
        long lVar1 = ((MapArea*)Instance())->GetOrigin();
        new (this) eastl::fixed_vector<render::Format, 3ul>();
        if (*(char*)(lVar1 + 149) != '\0') {
            local_1c = 12;
            push_back(local_1c);
        }
        if (*(char*)(lVar1 + 148) != '\0') {
            local_1c = 15;
            push_back(local_1c);
        }
        if (*(char*)(lVar1 + 150) != '\0') {
            local_1c = 14;
            push_back(local_1c);
        }
        Format local_1c = 22;
        push_back(local_1c);
        return this;
    }

    // 0x1009816e0
    void RT7Core::OnWindowResize(const math::Rect<unsigned int>& rect) {
        unsigned int uVar3;
        unsigned int uVar4;
        Logger* this_00;
        float fVar5;
        float fVar6;

        int iVar2 = rect.GetPos();
        if (iVar2 != 0) {
            iVar2 = rect.GetLevel();
            if (iVar2 != 0) {
                uVar3 = GetBackBufferWidth();
                uVar4 = GetBackBufferHeight();
                fVar5 = (float)m_scaleManager->GetSoundSpatialSizeMax();
                fVar5 = (float)ceil(fVar5 * (float)uVar3);
                fVar6 = (float)m_scaleManager->GetSoundSpatialSizeMax();
                fVar6 = (float)ceil(fVar6 * (float)uVar4);
                if (SetViewportRTSize((unsigned int)(long)fVar5, (unsigned int)(long)fVar6) != '\0') {
                    DestroyRenderTargets();
                    InitRenderTargets(m_mSAASampleCount);
                }
                this_00 = logger::default_logger();
                uVar3 = rect.GetPos();
                uVar4 = rect.GetLevel();
                this_00->Log(false, 8,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                             "RT7Core.cpp",
                             655,
                             "void RT7Core::OnWindowResize() windowRect.width: %u, windowRect.height: %u, "
                             "viewportRTWidth: %u, viewportRTHeight: %u",
                             (unsigned long)uVar3, (unsigned long)uVar4, (long)fVar5, (long)fVar6);
                return;
            }
        }
        LogAssert("windowRect.Width() != 0 && windowRect.Height() != 0",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/RT7Core.cpp",
                  642, nullptr);
    }

    // 0x100981830
    void RT7Core::OnEndFrame() {
        RenderTargets* pRVar2;
        RenderTargets* this_01;

        if (this[1].field_6692 == '\0') {
            LogAssert(
                "m_beginFrameCalled",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/RT7Core.cpp",
                662, nullptr);
        }
        field_18352.OnEndFrame();
        ((m_scaleManager + 104))->OnEndFrame();
        field_21136.OnEndFrame();
        uint8_t* this_00 = m_gBufferRT;
        if (this_00->operator_cast_to_bool() != '\0') {
            pRVar2 = (RenderTargets*)(*this_00).operator->();
            if (pRVar2->GetDepthStencilTargetTexture() == 0) {
                LogAssert("m_GBufferRT->GetDepthStencilTargetTexture()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "RT7Core.cpp",
                          673, nullptr);
            }
            pRVar2 = (RenderTargets*)(*m_forwardLightingRT).operator->();
            this_01 = (RenderTargets*)(*this_00).operator->();
            pRVar2->BindDepthStencilTargetTexture((Texture*)this_01->GetDepthStencilTargetTexture());
        }
    }

} // namespace jag::graphics

// 0x100981820
void ceil(float arg1) {
    _ceilf();
}
