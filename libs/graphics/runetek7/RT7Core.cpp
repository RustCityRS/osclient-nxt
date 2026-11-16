// libs/graphics/runetek7/RT7Core.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "RT7Core.h"

namespace jag::graphics {
    // 0x100f44c40, 64 bytes, __data
    RT7Core::m_MSAAQuality__ = {
        0, 0, 14512292, 1, 1, 0, 15065569, 1, 2, 0, 14769915, 1, 3, 0, 15065580, 1,
    };

    // 0x103bc0ee0, 16 bytes, __common; set at startup by ___cxx_global_var_init.45
    StringEnum RT7Core::m_MSAAQuality = StringEnum((StringEnumEntry*)&RT7Core::m_MSAAQuality__, 4);

    // 0x103bc0ef0, 8 bytes, __common; zero-initialised
    RT7Core::m_rasteriserDiscard;

    // 0x1000b7a70: the linker folded this into oldscape::minimenu::MinimenuEntry::GetObjType() const, which has identical code
    RT7Core::GetViewportHeight() const;

    // 0x1000b7a80: the linker folded this into oldscape::minimenu::MinimenuEntry::GetObjCount() const, which has identical code
    RT7Core::GetViewportWidth() const;

    // 0x10011c770: the linker folded this into eastl::rbtree<int, eastl::pair<int const, unsigned long>, eastl::less<int>, eastl::fixed_node_allocator<48ul, 5ul, 8ul, 0ul, true, eastl::allocator>, eastl::use_first<eastl::pair<int const, unsigned long> >, true, true>::size() const, which has identical code
    RT7Core::GetResourceProvider();

    // 0x10017a5a0: the linker folded this into http::HTTPRequest::GetData() const, which has identical code
    RT7Core::GetMSAASampleCount();

    // 0x1001c4610: the linker folded this into RT7Core::GetGBufferRT(), which has identical code
    RT7Core::GetGBufferRT() const;

    // 0x1001fb280: the linker folded this into http::CRMData::GetActionInfo() const, which has identical code
    RT7Core::GetClippingRectangle() const;

    // 0x100414cb0: the linker folded this into math::Transitionable<IrradianceSHCoefConsts>::GetEndValue(), which has identical code
    RT7Core::GetImmediateThreadPool();

    // 0x1004491d0: the linker folded this into game::SceneManager::GetDebugCursorPosition() const, which has identical code
    RT7Core::GetRenderTargetsManager();

    // 0x10097e110, 2432 bytes, base-object constructor, placed by class name and debug map
    // RT7Core::RT7Core(Js5ResourceProvider&, RT7GraphicsArchiveBundle&, MaterialRawProvider&, TextureDataProvider&, IConfigProvider*, unsigned int, unsigned int, unsigned int, unsigned int)
    void RT7Core::RT7Core(Js5ResourceProvider* param_1, RT7GraphicsArchiveBundle* param_2, MaterialRawProvider* param_3,
                          TextureDataProvider* param_4, IConfigProvider* param_5, uint param_6, uint param_7,
                          uint param_8, uint param_9) {
        undefined1* this_00;
        undefined1* this_01;
        Js5ArchiveSettings* pJVar1;
        Js5ArchiveSettings* pJVar2;
        Js5ArchiveSettings* pJVar3;
        Js5ArchiveSettings* pJVar4;
        Js5ArchiveSettings* pJVar5;
        Js5ArchiveSettings* pJVar6;
        Js5ArchiveSettings* pJVar7;
        uint uVar8;
        uint* puVar9;
        undefined8 uVar10;
        MapArea* pMVar11;
        long lVar12;
        Singleton<render::RenderDevice>* this_02;
        Singleton<render::RenderDevice>* this_03;
        Singleton<AnimationManager>* this_04;
        ThreadPool* local_58;
        ThreadPool* local_50;
        MaterialManager* local_48;
        IConfigProvider* local_40;

        local_40 = param_5;
        new (this) render::RenderDeviceCallback(true, 2);
        new (&field_16, true) render::RenderDeviceOnEndFrame();
        field_0 = &PTR__RT7Core_100f1bab0;
        field_16 = &PTR__RT7Core_100f1bae8;
        field_32 = param_1;
        pJVar1 = param_2->field_8;
        pJVar2 = param_2->field_16;
        pJVar3 = param_2->field_24;
        pJVar4 = param_2->field_32;
        pJVar5 = param_2->field_40;
        pJVar6 = param_2->field_48;
        pJVar7 = param_2->field_56;
        field_40 = param_2->field_0;
        field_48 = pJVar1;
        field_56 = pJVar2;
        field_64 = pJVar3;
        field_72 = pJVar4;
        field_80 = pJVar5;
        field_88 = pJVar6;
        field_96 = pJVar7;
        field_104 = 0;
        field_108 = 0;
        new (&field_112) ClippingRectangle();
        field_128 = -1;
        field_132 = -1;
        m_mSAASampleCount = param_8;
        field_140 = param_9;
        uVar8 = threading::GetMaxHardwareThreads();
        this_00 = m_immediateThreadPool;
        local_58 = (ThreadPool*)CONCAT44(local_58._4_4_, uVar8 >> 1);
        local_50 = (ThreadPool*)CONCAT44(local_50._4_4_, 2);
        puVar9 = std::max<unsigned int>((uint*)&local_58, (uint*)&local_50);
        new (this_00) ThreadPool(*puVar9, "ImmediateTP");
        this_01 = &field_344;
        new (this_01) render::RenderTargetsManager("GlobalRTManager", 128, -1);
        new (field_448, (RenderTargetsManager*)this_01, 8) postprocess::PostProcessManager();
        new (&field_2128, (RenderTargetsManager*)this_01, (ThreadPool*)this_00) GeometryPass();
        new (&field_2944, (RenderTargetsManager*)this_01, (ThreadPool*)this_00) QueryPass();
        new (&field_3792, (RenderTargetsManager*)this_01, (PostProcessManager*)field_448, (ThreadPool*)this_00)
            ForwardLightingPass();
        new (&field_4672, (RenderTargetsManager*)this_01, (ThreadPool*)this_00) ObjectHighlightPass();
        new (&field_6096) SSAOPass();
        new (&field_8192, (RenderTargetsManager*)this_01, (ThreadPool*)this_00) ReflectionPass();
        new (&field_9056) DepthDownsamplePass();
        new (&field_9984) DeferredShadowPass();
        new (&field_10752, (RenderTargetsManager*)this_01, (ThreadPool*)this_00) CausticsPass();
        std::make_unique<WaterPatchRenderer>();
        std::make_unique<TerrainPatchRenderer>();
        local_58 = (ThreadPool*)this_01;
        local_50 = (ThreadPool*)this_00;
        std::make_unique<ParticleSystemRenderer, render::RenderTargetsManager*, ThreadPool*>(&field_11568, &local_58);
        std::make_unique<GeometryBatchRenderer>();
        std::make_unique<BillboardBatchRenderer>();
        std::make_unique<SkyBoxRenderer>();
        std::make_unique<LightProbeRenderer>();
        uVar10 = (&field_11568)->get();
        m_drawableBatchRenderers = uVar10;
        new (m_gBufferRT, (_func_decltype_nullptr*)&local_58)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (m_sSAORT, (_func_decltype_nullptr*)&local_58)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (m_forwardLightingRT, (_func_decltype_nullptr*)&local_58)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (m_shadowBufferRT, (_func_decltype_nullptr*)&local_58)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_11680, (_func_decltype_nullptr*)&local_58)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        std::array<shared_ptr<render::RenderTargets>, 4ul>::array();
        new (&field_11760) PostProcessController();
        new (&field_13064, (_func_decltype_nullptr*)&local_58)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_13080, (_func_decltype_nullptr*)&local_58)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_13096, (_func_decltype_nullptr*)&local_58)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_13112, (_func_decltype_nullptr*)&local_58)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_13128, (_func_decltype_nullptr*)&local_58)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (m_sSAOContext) SSAOContext();
        new ((m_sSAOContext + 56)) graphicutils::RenderToTextureHelper();
        new (&field_13640, 200) ShaderManager();
        local_48 = (MaterialManager*)&field_13824;
        MaterialManager::MaterialManager(local_48);
        new (&field_14384) TextureManager();
        new (&field_18352) GUIManager();
        new (&field_20616) BillboardManager();
        this_02 = (Singleton<render::RenderDevice>*)&field_20664;
        new (this_02) ParticleManager(local_40, 1024, this_00);
        this_03 = (Singleton<render::RenderDevice>*)&field_20992;
        new (this_03) ShaderResourceSlotManager();
        this_04 = (Singleton<AnimationManager>*)&field_21064;
        new (this_04) ShaderResourceSlotManager();
        new (&field_21136, this) EffectManager();
        local_40 = (IConfigProvider*)m_scaleManager;
        new (local_40) ScaleManager(this);
        new ((m_scaleManager + 104)) GeometryQueryManager();
        new ((m_scaleManager + 136), this) SkyBoxManager();
        this[1].field_6692 = 0;
        this_00->SetAffinity(4);
        math::RunetekColour::InitHSLToRGBTable();
        math::RunetekColour::InitHSVToRGBTable();
        GraphNode::InitPool();
        (&field_13640, (EffectManager*)&field_21136)->Initialise();
        local_48->Initialise(param_3);
        (&field_14384, this, field_32, param_4)->Initialise();
        (&field_18352, this)->Initialise();
        (&field_20616, field_32, field_80)->Initialise();
        this_02->Initialise(field_32, field_88, field_96, local_48, param_6, param_7);
        pMVar11 = (MapArea*)this_02->Instance();
        lVar12 = pMVar11->GetOrigin();
        this_03->SetMaxSize((long)*(int*)(lVar12 + 60));
        pMVar11 = (MapArea*)this_03->Instance();
        lVar12 = pMVar11->GetOrigin();
        this_04->SetMaxSize((long)*(int*)(lVar12 + 124));
        Singleton<AnimationManager>::Create<>(this_04);
        this_04->Instance();
    }

    // 0x10097ef20, 48 bytes, complete-object constructor, placed by class name
    // RT7Core::RT7Core(Js5ResourceProvider&, RT7GraphicsArchiveBundle&, MaterialRawProvider&, TextureDataProvider&, IConfigProvider*, unsigned int, unsigned int, unsigned int, unsigned int)
    void RT7Core::RT7Core(Js5ResourceProvider* param_1, RT7GraphicsArchiveBundle* param_2, MaterialRawProvider* param_3,
                          TextureDataProvider* param_4, IConfigProvider* param_5, uint param_6, uint param_7,
                          uint param_8, uint param_9) {
        RT7Core(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9);
    }

    // 0x10097ef50, 1184 bytes, base-object destructor, placed by class name
    // RT7Core::~RT7Core()
    void RT7Core::~RT7Core() {
        field_0 = &PTR__RT7Core_100f1bab0;
        field_16 = &PTR__RT7Core_100f1bae8;
        Shutdown(this);
        ((m_scaleManager + 136))->~SkyBoxManager();
        ((m_scaleManager + 104))->~GeometryQueryManager();
        m_scaleManager->~ScaleManager();
        (&field_21136)->~EffectManager();
        (&field_21064)->~ShaderResourceSlotManager();
        (&field_20992)->~ShaderResourceSlotManager();
        (&field_20664)->~ParticleManager();
        (&field_20616)->~BillboardManager();
        (&field_18352)->~GUIManager();
        (&field_14384)->~TextureManager();
        (&field_13824)->~MaterialManager();
        (&field_13640)->~ShaderManager();
        ((m_sSAOContext + 56))->~RenderToTextureHelper();
        m_sSAOContext->~SSAOContext();
        field_13128->~shared_ptr();
        (&field_13112)->~shared_ptr();
        (&field_13096)->~shared_ptr();
        (&field_13080)->~shared_ptr();
        (&field_13064)->~shared_ptr();
        (&field_11760)->~PostProcessController();
        (&field_11696)->~array();
        field_11680->~shared_ptr();
        m_shadowBufferRT->~shared_ptr();
        m_forwardLightingRT->~shared_ptr();
        m_sSAORT->~shared_ptr();
        m_gBufferRT->~shared_ptr();
        (&field_11600)->~unique_ptr();
        (&field_11592)->~unique_ptr();
        (&field_11584)->~unique_ptr();
        (&field_11576)->~unique_ptr();
        (&field_11568)->~unique_ptr();
        (&field_11560)->~unique_ptr();
        (&field_11552)->~unique_ptr();
        (&field_10752)->~CausticsPass();
        (&field_9984)->~DeferredShadowPass();
        (&field_9056)->~DepthDownsamplePass();
        (&field_8192)->~ReflectionPass();
        (&field_6096)->~SSAOPass();
        (&field_4672)->~ObjectHighlightPass();
        (&field_3792)->~ForwardLightingPass();
        (&field_2944)->~QueryPass();
        (&field_2128)->~GeometryPass();
        field_448->~PostProcessManager();
        (&field_344)->~RenderTargetsManager();
        m_immediateThreadPool->~ThreadPool();
        (&field_16)->~RenderDeviceOnEndFrame();
        ~RenderDeviceCallback();
    }

    // 0x10097f3f0, 304 bytes, placed by class name
    // RT7Core::Shutdown()
    void RT7Core::Shutdown() {
        undefined1* this_00;
        char cVar1;
        RenderDevice* this_01;
        RenderContext* this_02;
        Singleton<render::RenderDevice>* this_04;

        Destroy();
        ((RT7Core*)this)->Destroy();
        this_00 = &field_20664;
        this_04 = (Singleton<render::RenderDevice>*)this_00;
        this_00->FlushModularParticleSystems();
        this_01 = (RenderDevice*)this_04->Instance();
        this_02 = (RenderContext*)this_01->GetPrimaryRenderContext();
        this_02->FinishRendering();
        cVar1 = MakeSharedPool<TextureAtlasReference, 8192>::IsPoolEmpty();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "TextureAtlasReference::IsPoolEmpty()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/RT7Core.cpp",
                153, (char*)0);
        }
        cVar1 = MakeSharedPool<Model, 3072>::IsPoolEmpty();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "Model::IsPoolEmpty()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/RT7Core.cpp",
                154, (char*)0);
        }
        this_00->Destroy();
        (&field_20616)->Destroy();
        (&field_18352)->Destroy();
        (&field_13824)->Destroy();
        (&field_13640)->Destroy();
        (&field_21136)->Destroy();
        ((m_scaleManager + 104))->Destroy();
        ((m_scaleManager + 136))->Destroy();
        (&field_14384)->Destroy();
        DestroyPostProcessing(this);
        DestroySSAO(this);
        DestroyRenderers(this);
        DestroyRenderTargets(this);
        GraphNode::DeletePool();
        math::RunetekColour::DestroyHSLToRGBTable();
        math::RunetekColour::DestroyHSVToRGBTable();
    }

    // 0x10097f520, 16 bytes, complete-object destructor, placed by class name
    // RT7Core::~RT7Core(): jumps straight to the base-object destructor

    // 0x10097f540, 32 bytes, deleting destructor, placed by class name
    // RT7Core::~RT7Core()
    void RT7Core::~RT7Core() {
        ~RT7Core(this);
        operator_delete(this);
    }

    // 0x10097f570, 208 bytes, placed by class name
    // RT7Core::Initialise(SystemSettings*)
    byte RT7Core::Initialise(SystemSettings* param_1) {
        byte bVar1;
        byte bVar2;
        byte bVar3;
        uint uVar5;
        uint uVar6;
        undefined8 uVar7;
        ShaderManager* this_00;

        uVar5 = GetBackBufferWidth(this);
        uVar6 = GetBackBufferHeight(this);
        SetViewportRTSize(this, uVar5, uVar6);
        uVar7 = logger::default_logger();
        logger::Logger::Log(
            uVar7, 0, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/RT7Core.cpp", 116,
            "RT7Core::Initialise(SystemSettings* pSystemSettings)");
        bVar1 = InitRenderers(this);
        bVar2 = InitRenderTargets(this, m_mSAASampleCount);
        bVar3 = InitSSAO(this);
        bVar2 = InitPostProcessing(this) & bVar3 & bVar1 & bVar2;
        this_00 = (ShaderManager*)GetShaderManager(this);
        this_00->InitialisePreloadFromDisk(param_1);
        if (bVar2 == 0) {
            Shutdown(this);
        }
        return bVar2;
    }

    // 0x10097f640, 640 bytes, placed by class name
    // RT7Core::SetViewportRTSize(unsigned int, unsigned int)
    undefined4 RT7Core::SetViewportRTSize(uint param_1, uint param_2) {
        undefined4 uVar3;
        undefined4 uVar4;
        RenderContext* this_00;
        long lVar5;
        undefined8 uVar6;
        OpenGLView* pOVar7;
        uint* puVar8;
        undefined4 uVar9;
        shared_ptr* this_01;
        undefined7 uVar10;
        float fVar11;
        uint local_44;
        uint local_40;
        float local_3c;
        uint local_38;
        uint local_34;

        local_38 = param_1;
        local_34 = param_2;
        this_00 = (RenderContext*)GetRenderContext(this);
        lVar5 = this_00->GetDesc();
        this_01 = (shared_ptr*)(lVar5 + 16);
        if (shared_ptr::operator_cast_to_bool(this_01)) {
            pOVar7 = (OpenGLView*)shared_ptr<OpenGLView>::operator->((shared_ptr<OpenGLView>*)this_01);
            pOVar7->GetFixedMaxScreenSize(&local_44, &local_40);
            pOVar7 = (OpenGLView*)shared_ptr<OpenGLView>::operator->((shared_ptr<OpenGLView>*)this_01);
            if (pOVar7->IsFullScreen() == '\0') {
                if ((local_44 != 0) && (local_40 != 0)) {
                    puVar8 = std::min<unsigned int>(&local_38, &local_44);
                    local_38 = *puVar8;
                    puVar8 = std::min<unsigned int>(&local_34, &local_40);
                    local_34 = *puVar8;
                }
            } else {
                pOVar7 = (OpenGLView*)shared_ptr<OpenGLView>::operator->((shared_ptr<OpenGLView>*)this_01);
                pOVar7->GetFullScreenResolution(&local_38, &local_34);
            }
            local_3c = (float)local_38;
            pOVar7 = (OpenGLView*)shared_ptr<OpenGLView>::operator->((shared_ptr<OpenGLView>*)this_01);
            fVar11 = (float)pOVar7->GetMainRenderTargetScaleFactor();
            local_38 = (uint)(long)(fVar11 * local_3c);
            local_3c = (float)local_34;
            pOVar7 = (OpenGLView*)shared_ptr<OpenGLView>::operator->((shared_ptr<OpenGLView>*)this_01);
            fVar11 = (float)pOVar7->GetMainRenderTargetScaleFactor();
            local_34 = (uint)(long)(fVar11 * local_3c);
        }
        if (local_38 == 0) {
            local_38 = param_1;
            uVar6 = logger::default_logger();
            this_01 = (shared_ptr*)(ulong)local_38;
            logger::Logger::Log(
                uVar6, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/RT7Core.cpp",
                708,
                "Attempting to set a fullscreen resolution with width == 0, falling back to current back buffer width "
                "(%u)",
                this_01);
        }
        if (local_34 == 0) {
            local_34 = param_2;
            uVar6 = logger::default_logger();
            this_01 = (shared_ptr*)(ulong)local_34;
            logger::Logger::Log(
                uVar6, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/RT7Core.cpp",
                713,
                "Attempting to set a fullscreen resolution with height == 0, falling back to current back buffer "
                "height (%u)",
                this_01);
        }
        uVar10 = (undefined7)((ulong)this_01 >> 8);
        uVar9 = (undefined4)CONCAT71(uVar10, 1);
        if (field_104 == local_38) {
            uVar9 = (undefined4)CONCAT71(uVar10, field_108 != local_34);
        }
        if ((char)uVar9 != '\0') {
            field_104 = local_38;
            field_108 = local_34;
            uVar6 = logger::default_logger();
            logger::Logger::Log(
                uVar6, 0, 5,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/RT7Core.cpp",
                725, "RT7Core Main Render Target Viewport Resolution: %u, %u", field_104, field_108);
            uVar6 = logger::default_logger();
            uVar3 = GetBackBufferWidth(this);
            uVar4 = GetBackBufferHeight(this);
            logger::Logger::Log(
                uVar6, 0, 5,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/RT7Core.cpp",
                726, "Render Context Back Buffer Resolution: %d, %d", uVar3, uVar4);
        }
        return uVar9;
    }

    // 0x10097f8c0, 272 bytes, placed by class name
    // RT7Core::InitRenderers()
    byte RT7Core::InitRenderers() {
        byte bVar1;
        byte bVar2;
        byte bVar3;
        byte bVar4;
        byte bVar5;
        byte bVar6;
        WaterPatchRenderer* this_00;
        TerrainPatchRenderer* this_01;
        ParticleSystemRenderer* this_02;
        GeometryBatchRenderer* this_03;
        BillboardBatchRenderer* this_04;
        RT7Core* pRVar8;
        undefined8 uVar9;

        this_00 = (WaterPatchRenderer*)
                      std::unique_ptr<WaterPatchRenderer, std::default_delete<WaterPatchRenderer>>::operator->(
                          (unique_ptr<WaterPatchRenderer, std::default_delete<WaterPatchRenderer>>*)&field_11552);
        bVar1 = this_00->Initialise(this);
        this_01 = (TerrainPatchRenderer*)
                      std::unique_ptr<TerrainPatchRenderer, std::default_delete<TerrainPatchRenderer>>::operator->(
                          (unique_ptr<TerrainPatchRenderer, std::default_delete<TerrainPatchRenderer>>*)&field_11560);
        bVar2 = this_01->Initialise(this);
        this_02 =
            (ParticleSystemRenderer*)
                std::unique_ptr<ParticleSystemRenderer, std::default_delete<ParticleSystemRenderer>>::operator->(
                    (unique_ptr<ParticleSystemRenderer, std::default_delete<ParticleSystemRenderer>>*)&field_11568);
        bVar3 = this_02->Initialise(this);
        this_03 = (GeometryBatchRenderer*)
                      std::unique_ptr<GeometryBatchRenderer, std::default_delete<GeometryBatchRenderer>>::operator->(
                          (unique_ptr<GeometryBatchRenderer, std::default_delete<GeometryBatchRenderer>>*)&field_11576);
        bVar4 = this_03->Initialise(this);
        this_04 =
            (BillboardBatchRenderer*)
                std::unique_ptr<BillboardBatchRenderer, std::default_delete<BillboardBatchRenderer>>::operator->(
                    (unique_ptr<BillboardBatchRenderer, std::default_delete<BillboardBatchRenderer>>*)&field_11584);
        bVar5 = this_04->Initialise(this);
        pRVar8 = (RT7Core*)std::unique_ptr<SkyBoxRenderer, std::default_delete<SkyBoxRenderer>>::operator->(
            (unique_ptr<SkyBoxRenderer, std::default_delete<SkyBoxRenderer>>*)&field_11592);
        bVar6 = SkyBoxRenderer::Initialise(pRVar8);
        pRVar8 = (RT7Core*)std::unique_ptr<LightProbeRenderer, std::default_delete<LightProbeRenderer>>::operator->(
            (unique_ptr<LightProbeRenderer, std::default_delete<LightProbeRenderer>>*)&field_11600);
        bVar1 = LightProbeRenderer::Initialise(pRVar8) & bVar6 & bVar5 & bVar4 & bVar3 & bVar2 & bVar1;
        if (bVar1 == 0) {
            uVar9 = logger::default_logger();
            logger::Logger::Log(
                uVar9, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/RT7Core.cpp",
                541, "Failed to initialise RT7Core renderers");
        }
        return bVar1;
    }

    // 0x10097f9d0, 1552 bytes, placed by class name
    // RT7Core::InitRenderTargets(int)
    ulong RT7Core::InitRenderTargets(int param_1) {
        undefined1* puVar1;
        undefined1* this_00;
        shared_ptr* psVar2;
        uint uVar3;
        bool bVar4;
        undefined4 uVar5;
        int iVar6;
        int iVar7;
        MapArea* this_01;
        RenderDeviceCaps* pRVar8;
        RenderDevice* pRVar9;
        int* piVar10;
        RenderTargets* pRVar11;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar12;
        undefined8* puVar13;
        long lVar14;
        long* plVar15;
        RenderTargets* this_02;
        Texture* pTVar16;
        ulong uVar17;
        AutoSingleton<ShaderThreadPoolSingleton>* this_03;
        RT7Core* pRVar18;
        undefined8 in_stack_fffffffffffffe38;
        uint uVar19;
        shared_ptr local_1a8[8];
        Desc local_128;
        RT7Core* local_e0;
        RenderDeviceCaps* local_d8;
        RenderTargetsManager local_d0;
        shared_ptr* local_88;
        AutoSingleton<ShaderThreadPoolSingleton> local_80[8];
        uint local_78;
        undefined1 local_71;
        vector<render::Format, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true, eastl::allocator>> local_70[56];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_03 = local_80;
        local_78 = param_1;
        this_03->~AutoSingleton("RT7Core_Render_Targets");
        this_01 = (MapArea*)this_03->Instance();
        pRVar8 = (RenderDeviceCaps*)this_01->GetOrigin();
        pRVar9 = (RenderDevice*)this_01->Instance();
        uVar5 = pRVar9->GetLowestPrecisionRGBFloatFormat();
        GetDepthFormats((RT7Core*)local_70);
        iVar6 = GetMaxMapZ();
        pRVar18 = this;
        iVar7 = GetNumVerts();
        local_71 = iVar6 == 0 && iVar7 == 0;
        if (iVar6 == 0 && iVar7 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "false",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/RT7Core.cpp",
                374, "Attempt to create render targets with a width and height of zero size");
        }
        pRVar9 = (RenderDevice*)pRVar18->Instance();
        pRVar9->ValidateMSAATextureSamples((int*)&local_78);
        local_e0 = this;
        local_d8 = pRVar8;
        local_d0._68_4_ = uVar5;
        new (local_1a8) std::array<render::Texture::Desc, 2ul>();
        uVar3 = local_78;
        uVar17 = 0;
        do {
            piVar10 = (int*)std::array<render::Texture::Desc, 2ul>::operator[](
                (array<render::Texture::Desc, 2ul>*)local_1a8, uVar17);
            uVar19 = (uint)((ulong)in_stack_fffffffffffffe38 >> 32);
            piVar10[1] = iVar7;
            *piVar10 = iVar6;
            piVar10[6] = 0;
            *(undefined1*)(piVar10 + 8) = 0;
            piVar10[3] = 16;
            piVar10[4] = uVar3;
            uVar17 = uVar17 + 1;
        } while (uVar17 != 2);
        new (&local_128) render::Texture::Desc();
        uVar5 = local_d0._68_4_;
        pRVar18 = local_e0;
        local_128.field_4 = iVar7;
        local_128.field_0 = iVar6;
        local_128.field_16 = local_78;
        local_128._24_8_ = (ulong)(uint)local_128.field_28 << 32;
        local_128._32_8_ = local_128._32_8_ & 18446744073709551360;
        piVar10 =
            (int*)eastl::vector<render::Format, eastl::fixed_vector_allocator<4ul, 3ul, 4ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](local_70,
                                                                                                             0);
        local_128.field_12 = *piVar10;
        make_shared<render::RenderTargets>((jag*)&local_d0);
        puVar1 = pRVar18->m_gBufferRT;
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)puVar1,
                                                     (shared_ptr*)&local_d0);
        local_d0.~shared_ptr();
        local_88 = (shared_ptr*)puVar1;
        pRVar11 =
            (RenderTargets*)shared_ptr<render::RenderTargets>::operator->((shared_ptr<render::RenderTargets>*)puVar1);
        uVar17 = (ulong)uVar19 << 32;
        pRVar11->Create("GBufferNormalDepth", 3553, local_1a8, pRVar18->field_140, &local_128, uVar17);
        pRVar11 =
            (RenderTargets*)shared_ptr<render::RenderTargets>::operator->((shared_ptr<render::RenderTargets>*)local_88);
        pvVar12 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      pRVar11->GetColourTargetTextures();
        puVar13 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](pvVar12, 0);
        plVar15 = (long*)*puVar13;
        lVar14 = pvVar12->Instance();
        (**(code**)(*plVar15 + 24))(plVar15, lVar14 + 80, 0);
        pRVar11 =
            (RenderTargets*)shared_ptr<render::RenderTargets>::operator->((shared_ptr<render::RenderTargets>*)local_88);
        pvVar12 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      pRVar11->GetColourTargetTextures();
        puVar13 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](pvVar12, 1);
        plVar15 = (long*)*puVar13;
        lVar14 = pvVar12->Instance();
        (**(code**)(*plVar15 + 24))(plVar15, lVar14 + 80, 0);
        pRVar11 =
            (RenderTargets*)shared_ptr<render::RenderTargets>::operator->((shared_ptr<render::RenderTargets>*)local_88);
        plVar15 = (long*)pRVar11->GetDepthStencilTargetTexture();
        lVar14 = pRVar11->Instance();
        (**(code**)(*plVar15 + 24))(plVar15, lVar14 + 80, 0);
        lVar14 = std::array<render::Texture::Desc, 2ul>::operator[]((array<render::Texture::Desc, 2ul>*)local_1a8, 0);
        *(undefined4*)(lVar14 + 12) = uVar5;
        new (&local_d0) render::Texture::Desc();
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
        local_128._0_8_ = local_d0.field_0;
        local_128._8_8_ = local_d0._8_8_;
        puVar1 = pRVar18->m_forwardLightingRT;
        bVar4 = puVar1->operator_cast_to_bool();
        if (bVar4) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "!m_forwardLightingRT",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/RT7Core.cpp",
                416, (char*)0);
        }
        make_shared<render::RenderTargets>((jag*)&local_d0);
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)puVar1,
                                                     (shared_ptr*)&local_d0);
        local_d0.~shared_ptr();
        pRVar11 =
            (RenderTargets*)shared_ptr<render::RenderTargets>::operator->((shared_ptr<render::RenderTargets>*)puVar1);
        pRVar11->Create("ForwardLighting", 3553, local_1a8, 1, &local_128, uVar17 & 18446744069414584320);
        pRVar11 =
            (RenderTargets*)shared_ptr<render::RenderTargets>::operator->((shared_ptr<render::RenderTargets>*)puVar1);
        this_02 =
            (RenderTargets*)shared_ptr<render::RenderTargets>::operator->((shared_ptr<render::RenderTargets>*)local_88);
        pTVar16 = (Texture*)this_02->GetDepthStencilTargetTexture();
        pRVar11->BindDepthStencilTargetTexture(pTVar16);
        uVar5 = render::GetAlpha8TextureFormat(local_d8);
        *(undefined4*)(lVar14 + 12) = uVar5;
        *(undefined4*)(lVar14 + 16) = 1;
        local_d0.Register(&pRVar18->field_344, "SSAO", 3553, local_1a8, 1, &local_128, 0, 1);
        this_00 = pRVar18->m_sSAORT;
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)this_00,
                                                     (shared_ptr*)&local_d0);
        local_d0.~shared_ptr();
        bVar4 = operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
        if (!bVar4) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_SSAORT != nullptr",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/RT7Core.cpp",
                426, (char*)0);
        }
        pRVar11 =
            (RenderTargets*)shared_ptr<render::RenderTargets>::operator->((shared_ptr<render::RenderTargets>*)this_00);
        pvVar12 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      pRVar11->GetColourTargetTextures();
        puVar13 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](pvVar12, 0);
        plVar15 = (long*)*puVar13;
        lVar14 = pvVar12->Instance();
        (**(code**)(*plVar15 + 24))(plVar15, lVar14 + 80, 0);
        pRVar11 =
            (RenderTargets*)shared_ptr<render::RenderTargets>::operator->((shared_ptr<render::RenderTargets>*)puVar1);
        psVar2 = local_88;
        pvVar12 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      pRVar11->GetColourTargetTextures();
        puVar13 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](pvVar12, 0);
        plVar15 = (long*)*puVar13;
        lVar14 = pvVar12->Instance();
        (**(code**)(*plVar15 + 24))(plVar15, lVar14 + 80, 0);
        pRVar11 =
            (RenderTargets*)shared_ptr<render::RenderTargets>::operator->((shared_ptr<render::RenderTargets>*)puVar1);
        lVar14 = pRVar11->GetDepthStencilTargetTexture();
        if (lVar14 != 0) {
            pRVar11 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)puVar1);
            plVar15 = (long*)pRVar11->GetDepthStencilTargetTexture();
            lVar14 = pRVar11->Instance();
            (**(code**)(*plVar15 + 24))(plVar15, lVar14 + 80, 0);
        }
        (&pRVar18->field_2128, psVar2)->SetGBufferRT();
        (&pRVar18->field_6096, psVar2)->SetGBufferRT();
        (&pRVar18->field_6096, (shared_ptr*)this_00)->SetSSSAORT();
        (&pRVar18->field_9984, psVar2)->SetGBufferRT();
        (&pRVar18->field_9984, (shared_ptr*)pRVar18->m_shadowBufferRT)->SetShadowBufferRT();
        (&pRVar18->field_4672, (shared_ptr*)puVar1)->SetDepthProviderRT();
        make_shared<render::RenderTargets>((jag*)local_1a8);
        shared_ptr<render::RenderTargets>::operator=((shared_ptr<render::RenderTargets>*)pRVar18->field_11680,
                                                     local_1a8);
        local_1a8->~shared_ptr();
        (&pRVar18->field_2944, 320, 240)->SetQueryRenderTargetSize();
        pRVar18->m_mSAASampleCount = local_78;
        local_70->~fixed_vector();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return CONCAT71((int7)((ulong) * (long*)PTR____stack_chk_guard_100ee9d98 >> 8), local_71) ^ 1;
    }

    // 0x10097ffe0, 176 bytes, placed by class name
    // RT7Core::InitSSAO()
    undefined4 RT7Core::InitSSAO() {
        undefined1* this_00;
        undefined4 uVar1;
        vector* pvVar2;
        undefined8 uVar4;
        type* in_RSI;

        this_00 = m_sSAOContext;
        uVar1 = SSAOContext::Init();
        pvVar2 = this_00->SSOBeginPtr(in_RSI);
        *(undefined4*)pvVar2 = 1132068864;
        pvVar2 = this_00->SSOBeginPtr(in_RSI);
        *(undefined4*)(pvVar2 + 20) = 1076887552;
        pvVar2 = this_00->SSOBeginPtr(in_RSI);
        *(undefined4*)(pvVar2 + 44) = 1036831949;
        if (this_00->GetAuthWrapper() != 0) {
            (&field_6096, (SSAOContext*)this_00)->SetSSAOContext();
        }
        if ((char)uVar1 == '\0') {
            uVar4 = logger::default_logger();
            logger::Logger::Log(
                uVar4, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/RT7Core.cpp",
                621, "Failed to initialise RT7 SSAO effect");
        }
        return uVar1;
    }

    // 0x100980090, 944 bytes, placed by class name
    // RT7Core::InitPostProcessing()
    byte RT7Core::InitPostProcessing() {
        undefined1* puVar1;
        PostProcessManager* this_00;
        shared_ptr* psVar2;
        RT7Core* pRVar3;
        byte bVar4;
        byte bVar5;
        RenderTargetsManager* pRVar6;
        long* plVar7;
        DebugUIElement* pDVar8;
        undefined8 uVar9;
        byte bVar10;
        undefined1* puVar11;
        AvgLuminanceFilter* local_88;
        PostProcessManager* local_80;
        shared_ptr* local_78;
        shared_ptr* local_70;
        shared_ptr* local_68;
        shared_ptr* local_60;
        RT7Core* local_58;
        AutoSingleton<ShaderThreadPoolSingleton> local_50[8];
        shared_ptr local_48;
        byte local_33;
        byte local_32;
        byte local_31;

        local_50->~AutoSingleton("Post_Processing");
        puVar11 = field_448;
        bVar4 = puVar11->Init();
        pRVar6 = (RenderTargetsManager*)puVar11->GetRenderTargetsManager();
        local_88 = (AvgLuminanceFilter*)puVar11->GetAvgLuminanceFilter();
        make_shared<postprocess::ColourGradingBloomEffect, render::RenderTargetsManager&,
                    postprocess::AvgLuminanceFilter*>((jag*)&local_48, pRVar6, &local_88);
        puVar1 = &field_13064;
        shared_ptr<postprocess::ColourGradingBloomEffect>::operator=(
            (shared_ptr<postprocess::ColourGradingBloomEffect>*)puVar1, &local_48);
        local_80 = (PostProcessManager*)puVar11;
        local_48.~shared_ptr();
        plVar7 = (long*)shared_ptr<postprocess::ColourGradingBloomEffect>::operator->(
            (shared_ptr<postprocess::ColourGradingBloomEffect>*)puVar1);
        local_33 = (**(code**)(*plVar7 + 40))(plVar7);
        local_78 = (shared_ptr*)puVar1;
        pDVar8 = (DebugUIElement*)shared_ptr<postprocess::ColourGradingBloomEffect>::operator->(
            (shared_ptr<postprocess::ColourGradingBloomEffect>*)puVar1);
        pDVar8->NotifyDebugRegistration(true);
        make_shared<postprocess::FXAAEffect>((jag*)&local_48);
        puVar11 = &field_13080;
        shared_ptr<postprocess::FXAAEffect>::operator=((shared_ptr<postprocess::FXAAEffect>*)puVar11, &local_48);
        local_48.~shared_ptr();
        plVar7 = (long*)shared_ptr<postprocess::FXAAEffect>::operator->((shared_ptr<postprocess::FXAAEffect>*)puVar11);
        local_32 = (**(code**)(*plVar7 + 40))(plVar7);
        pDVar8 = (DebugUIElement*)shared_ptr<postprocess::FXAAEffect>::operator->(
            (shared_ptr<postprocess::FXAAEffect>*)puVar11);
        pDVar8->NotifyDebugRegistration(false);
        make_shared<postprocess::OutlineAndShadowEffect>((jag*)&local_48);
        puVar1 = &field_13096;
        shared_ptr<postprocess::OutlineAndShadowEffect>::operator=(
            (shared_ptr<postprocess::OutlineAndShadowEffect>*)puVar1, &local_48);
        local_68 = (shared_ptr*)puVar11;
        local_48.~shared_ptr();
        plVar7 = (long*)shared_ptr<postprocess::OutlineAndShadowEffect>::operator->(
            (shared_ptr<postprocess::OutlineAndShadowEffect>*)puVar1);
        local_31 = (**(code**)(*plVar7 + 40))(plVar7);
        local_70 = (shared_ptr*)puVar1;
        pDVar8 = (DebugUIElement*)shared_ptr<postprocess::OutlineAndShadowEffect>::operator->(
            (shared_ptr<postprocess::OutlineAndShadowEffect>*)puVar1);
        pDVar8->NotifyDebugRegistration(false);
        make_shared<postprocess::EquirectangularEffect>((jag*)&local_48);
        puVar11 = &field_13112;
        shared_ptr<postprocess::EquirectangularEffect>::operator=(
            (shared_ptr<postprocess::EquirectangularEffect>*)puVar11, &local_48);
        local_48.~shared_ptr();
        plVar7 = (long*)shared_ptr<postprocess::EquirectangularEffect>::operator->(
            (shared_ptr<postprocess::EquirectangularEffect>*)puVar11);
        bVar5 = (**(code**)(*plVar7 + 40))(plVar7);
        local_60 = (shared_ptr*)puVar11;
        pDVar8 = (DebugUIElement*)shared_ptr<postprocess::EquirectangularEffect>::operator->(
            (shared_ptr<postprocess::EquirectangularEffect>*)puVar11);
        pDVar8->NotifyDebugRegistration(false);
        make_shared<postprocess::DepthOfFieldEffect>((jag*)&local_48);
        puVar11 = field_13128;
        local_58 = this;
        shared_ptr<postprocess::DepthOfFieldEffect>::operator=((shared_ptr<postprocess::DepthOfFieldEffect>*)puVar11,
                                                               &local_48);
        bVar10 = bVar4 & local_33 & local_32 & local_31;
        local_48.~shared_ptr();
        plVar7 = (long*)shared_ptr<postprocess::DepthOfFieldEffect>::operator->(
            (shared_ptr<postprocess::DepthOfFieldEffect>*)puVar11);
        bVar4 = (**(code**)(*plVar7 + 40))(plVar7);
        bVar4 = bVar4 & bVar10 & bVar5;
        pDVar8 = (DebugUIElement*)shared_ptr<postprocess::DepthOfFieldEffect>::operator->(
            (shared_ptr<postprocess::DepthOfFieldEffect>*)puVar11);
        pDVar8->NotifyDebugRegistration(false);
        this_00 = local_80;
        if (bVar4 == 0) {
            uVar9 = logger::default_logger();
            logger::Logger::Log(
                uVar9, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/RT7Core.cpp",
                591, "Failed to initialise RT7 post processing");
        }
        new (&local_48) shared_ptr<oldscape::dash3d::Decor>(local_78);
        this_00->AddEffect(&local_48);
        psVar2 = local_70;
        local_48.~shared_ptr();
        new (&local_48) shared_ptr<oldscape::dash3d::Decor>(local_68);
        this_00->AddEffect(&local_48);
        local_48.~shared_ptr();
        new (&local_48) shared_ptr<oldscape::dash3d::Decor>(psVar2);
        this_00->AddEffect(&local_48);
        local_48.~shared_ptr();
        new (&local_48) shared_ptr<oldscape::dash3d::Decor>(local_60);
        this_00->AddEffect(&local_48);
        local_48.~shared_ptr();
        new (&local_48) shared_ptr<oldscape::dash3d::Decor>(puVar11);
        this_00->AddEffect(&local_48);
        local_48.~shared_ptr();
        pRVar3 = local_58;
        puVar11 = &local_58->field_11760;
        puVar11->SetPostProcessManager(this_00);
        puVar11->SetHeapSize((ulong)pRVar3);
        return bVar4;
    }

    // 0x100980680, 128 bytes, placed by class name
    // RT7Core::DestroyPostProcessing()
    void RT7Core::DestroyPostProcessing() {
        long* plVar1;

        plVar1 = (long*)shared_ptr<postprocess::ColourGradingBloomEffect>::operator->(
            (shared_ptr<postprocess::ColourGradingBloomEffect>*)&field_13064);
        (**(code**)(*plVar1 + 48))(plVar1);
        plVar1 =
            (long*)shared_ptr<postprocess::FXAAEffect>::operator->((shared_ptr<postprocess::FXAAEffect>*)&field_13080);
        (**(code**)(*plVar1 + 48))(plVar1);
        plVar1 = (long*)shared_ptr<postprocess::OutlineAndShadowEffect>::operator->(
            (shared_ptr<postprocess::OutlineAndShadowEffect>*)&field_13096);
        (**(code**)(*plVar1 + 48))(plVar1);
        plVar1 = (long*)shared_ptr<postprocess::EquirectangularEffect>::operator->(
            (shared_ptr<postprocess::EquirectangularEffect>*)&field_13112);
        (**(code**)(*plVar1 + 48))(plVar1);
        field_448->Destroy();
    }

    // 0x100980700, 32 bytes, placed by class name
    // RT7Core::DestroySSAO()
    void RT7Core::DestroySSAO() {
        SSAOContext::Destroy();
    }

    // 0x100980720, 160 bytes, placed by class name
    // RT7Core::DestroyRenderers()
    void RT7Core::DestroyRenderers() {
        LightProbeRenderer* this_00;
        SkyBoxRenderer* this_01;
        BillboardBatchRenderer* this_02;
        ParticleSystemRenderer* this_03;
        TerrainPatchRenderer* this_04;
        WaterPatchRenderer* this_05;

        this_00 = (LightProbeRenderer*)
                      std::unique_ptr<LightProbeRenderer, std::default_delete<LightProbeRenderer>>::operator->(
                          (unique_ptr<LightProbeRenderer, std::default_delete<LightProbeRenderer>>*)&field_11600);
        this_00->Destroy();
        this_01 = (SkyBoxRenderer*)std::unique_ptr<SkyBoxRenderer, std::default_delete<SkyBoxRenderer>>::operator->(
            (unique_ptr<SkyBoxRenderer, std::default_delete<SkyBoxRenderer>>*)&field_11592);
        this_01->Destroy();
        this_02 =
            (BillboardBatchRenderer*)
                std::unique_ptr<BillboardBatchRenderer, std::default_delete<BillboardBatchRenderer>>::operator->(
                    (unique_ptr<BillboardBatchRenderer, std::default_delete<BillboardBatchRenderer>>*)&field_11584);
        this_02->Destroy();
        std::unique_ptr<GeometryBatchRenderer, std::default_delete<GeometryBatchRenderer>>::operator->(
            (unique_ptr<GeometryBatchRenderer, std::default_delete<GeometryBatchRenderer>>*)&field_11576);
        GeometryBatchRenderer::Destroy();
        this_03 =
            (ParticleSystemRenderer*)
                std::unique_ptr<ParticleSystemRenderer, std::default_delete<ParticleSystemRenderer>>::operator->(
                    (unique_ptr<ParticleSystemRenderer, std::default_delete<ParticleSystemRenderer>>*)&field_11568);
        this_03->Destroy();
        this_04 = (TerrainPatchRenderer*)
                      std::unique_ptr<TerrainPatchRenderer, std::default_delete<TerrainPatchRenderer>>::operator->(
                          (unique_ptr<TerrainPatchRenderer, std::default_delete<TerrainPatchRenderer>>*)&field_11560);
        this_04->Destroy();
        this_05 = (WaterPatchRenderer*)
                      std::unique_ptr<WaterPatchRenderer, std::default_delete<WaterPatchRenderer>>::operator->(
                          (unique_ptr<WaterPatchRenderer, std::default_delete<WaterPatchRenderer>>*)&field_11552);
        this_05->Destroy();
    }

    // 0x1009807c0, 464 bytes, placed by class name
    // RT7Core::DestroyRenderTargets()
    void RT7Core::DestroyRenderTargets() {
        undefined1* this_00;
        shared_ptr* psVar1;
        shared_ptr* psVar2;
        AutoSingleton<ShaderThreadPoolSingleton> local_38[8];
        shared_ptr local_30;

        local_38->~AutoSingleton();
        new (&local_30) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        (&field_9984, &local_30)->SetGBufferRT();
        local_30.~shared_ptr();
        new (&local_30) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        (&field_9984, &local_30)->SetShadowBufferRT();
        local_30.~shared_ptr();
        new (&local_30) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        (&field_2128, &local_30)->SetGBufferRT();
        local_30.~shared_ptr();
        new (&local_30) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        (&field_6096, &local_30)->SetGBufferRT();
        local_30.~shared_ptr();
        new (&local_30) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        (&field_6096, &local_30)->SetSSSAORT();
        local_30.~shared_ptr();
        new (&local_30) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        (&field_4672, &local_30)->SetDepthProviderRT();
        local_30.~shared_ptr();
        this_00 = &field_344;
        this_00->Unregister(m_shadowBufferRT);
        render::RenderTargets::SafeReset((shared_ptr*)m_forwardLightingRT);
        render::RenderTargets::SafeReset((shared_ptr*)m_gBufferRT);
        this_00->Unregister(m_sSAORT);
        render::RenderTargets::SafeReset((shared_ptr*)field_11680);
        psVar1 = (shared_ptr*)(&field_11696)->begin();
        psVar2 = (shared_ptr*)(&field_11696)->end();
        for (; psVar1 != psVar2; psVar1 = psVar1 + 1) {
            this_00->Unregister(psVar1);
        }
        this_00->GarbageCollect(true);
    }

    // 0x100980990, 80 bytes, placed by class name
    // RT7Core::MainLogic()
    void RT7Core::MainLogic() {
        (&field_13824)->MainLogic();
        (&field_14384)->MainLogic();
        (&field_20616)->MainLogic();
        (&field_13640)->MainLogic();
        m_scaleManager->MainLogic();
    }

    // 0x1009809e0, 288 bytes, placed by class name
    // RT7Core::BeginFrame()
    void RT7Core::BeginFrame() {
        char cVar1;
        byte bVar2;
        long lVar3;
        undefined8* puVar4;
        undefined8* puVar5;
        int iVar6;
        undefined1 local_48[25];
        undefined3 uStack_2f;

        this[1].field_6692 = 1;
        lVar3 = Instance();
        puVar4 = (undefined8*)((lVar3 + 1200))->second();
        local_48._0_8_ = *puVar4;
        local_48._16_4_ = SUB84((ulong) * (undefined8*)((long)puVar4 + 12) >> 32, 0);
        local_48._20_4_ = SUB84(*(undefined8*)((long)puVar4 + 20), 0);
        local_48._8_4_ = SUB84(puVar4[1], 0);
        local_48._12_4_ = SUB84((ulong)puVar4[1] >> 32, 0);
        uStack_2f = (undefined3)((ulong) * (undefined8*)((long)puVar4 + 20) >> 40);
        local_48[24] = m_rasteriserDiscard;
        ((lVar3 + 1200))->Create(local_48);
        puVar4 = (undefined8*)((lVar3 + 1272))->second();
        local_48._0_8_ = *puVar4;
        local_48[16] = (undefined1)((ulong) * (undefined8*)((long)puVar4 + 9) >> 56);
        local_48._17_3_ = SUB83(*(undefined8*)((long)puVar4 + 17), 0);
        local_48._20_4_ = SUB84((ulong) * (undefined8*)((long)puVar4 + 17) >> 24, 0);
        local_48._8_4_ = SUB84(puVar4[1], 0);
        local_48._12_4_ = SUB84((ulong)puVar4[1] >> 32, 0);
        stack0xffffffffffffffd0 = CONCAT31(uStack_2f, m_rasteriserDiscard);
        ((lVar3 + 1272))->Create(local_48);
        puVar4 = (undefined8*)(&m_drawableBatchRenderers)->begin();
        puVar5 = (undefined8*)(&m_drawableBatchRenderers)->end();
        for (; puVar4 != puVar5; puVar4 = puVar4 + 1) {
            (**(code**)(*(long*)*puVar4 + 24))();
        }
        m_scaleManager->MainDraw();
        (&field_14384)->MainDraw();
        cVar1 = ((m_scaleManager + 104))->HasDestructiveQueries();
        iVar6 = 1;
        if (cVar1 == '\0') {
            bVar2 = ((m_scaleManager + 104))->HasQueries();
            iVar6 = (uint)bVar2 * 2;
        }
        (&field_2944, iVar6)->SetMode();
    }

    // 0x100980b30, 16 bytes, placed by class name
    // RT7Core::EndFrame()
    void RT7Core::EndFrame() {}

    // 0x100980b40, 96 bytes, placed by class name
    // RT7Core::PerformComposition(render::RenderTargets const*, render::Viewport const&)
    void RT7Core::PerformComposition(RenderTargets* param_1, Viewport* param_2) {
        ParticleSystemRenderer* this_00;
        RenderContext* pRVar1;
        RT7Core* this_01;

        this_01 = (RT7Core*)&field_11568;
        this_00 = (ParticleSystemRenderer*)
                      std::unique_ptr<ParticleSystemRenderer, std::default_delete<ParticleSystemRenderer>>::operator->(
                          (unique_ptr<ParticleSystemRenderer, std::default_delete<ParticleSystemRenderer>>*)this_01);
        pRVar1 = (RenderContext*)GetRenderContext(this_01);
        this_00->CompositeOverdraw(pRVar1, param_1, param_2);
        (&field_4672, this, param_1, param_2)->CompositeToScreen();
    }

    // 0x100980bb0, 256 bytes, placed by class name
    // RT7Core::SetClippingRectangle(int, int, int, int, bool)
    void RT7Core::SetClippingRectangle(int param_1, int param_2, int param_3, int param_4, bool param_5) {
        int iVar1;
        int* piVar2;
        undefined3 in_register_00000089;
        int local_3c;
        int local_38;
        int local_34;

        local_3c = param_1;
        local_38 = param_2;
        if (CONCAT31(in_register_00000089, param_5) == 0) {
            if ((((field_112 == param_1) && (field_116 == param_2)) && (field_128 == param_3)) &&
                (field_132 == param_4)) {
                return;
            }
            if ((!param_5) && (field_112 != -1)) {
                piVar2 = std::max<int>(&field_112, &local_3c);
                field_112 = *piVar2;
                piVar2 = std::max<int>(&field_116, &local_38);
                field_116 = *piVar2;
                local_34 = param_3 + param_1;
                piVar2 = std::min<int>(&field_120, &local_34);
                field_120 = *piVar2;
                local_34 = param_4 + param_2;
                piVar2 = std::min<int>(&field_124, &local_34);
                field_124 = *piVar2;
                goto LAB_100980c7e;
            }
        }
        field_112 = param_1;
        field_116 = param_2;
        field_120 = param_3 + param_1;
        field_124 = param_4 + param_2;
    LAB_100980c7e:
        iVar1 = (&field_112)->GetWidth();
        field_128 = iVar1;
        iVar1 = (&field_112)->GetHeight();
        field_132 = iVar1;
    }

    // 0x100980cf0, 112 bytes, placed by class name
    // RT7Core::GetScissorRectFromClippingRect() const
    RT7Core* RT7Core::GetScissorRectFromClippingRect() {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        RT7Core* in_RSI;

        iVar3 = GetInterfaceHeight(in_RSI);
        iVar1 = in_RSI->field_112;
        iVar2 = in_RSI->field_124;
        iVar4 = (&in_RSI->field_112)->GetWidth();
        iVar5 = (&in_RSI->field_112)->GetHeight();
        new (this) oldscape::dash3d::GridRect(iVar1, iVar3 - iVar2, iVar4, iVar5);
        return this;
    }

    // 0x100980d60, 48 bytes, placed by class name
    // RT7Core::ClippingTest(int, int, int, int)
    bool RT7Core::ClippingTest(int param_1, int param_2, int param_3, int param_4) {
        if (field_112 == -1) {
            return true;
        }
        if (((field_120 < param_1) || (param_3 < field_112)) || (field_124 < param_2)) {
            return false;
        }
        return field_116 <= param_4;
    }

    // 0x100980d90, 112 bytes, placed by class name
    // RT7Core::CanUseGBuffer(render::RenderTargets*, render::RenderTargets*)
    bool RT7Core::CanUseGBuffer(RenderTargets* param_1, RenderTargets* param_2) {
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* pvVar1;
        undefined8* puVar2;
        int* piVar3;
        int* piVar4;
        bool bVar5;

        bVar5 = false;
        if ((param_1 != (RenderTargets*)0) && (param_2 != (RenderTargets*)0)) {
            pvVar1 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    param_1->GetColourTargetTextures();
            puVar2 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar1, 0);
            piVar3 = (int*)(*puVar2)->second();
            pvVar1 =
                (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                    param_2->GetColourTargetTextures();
            puVar2 = (undefined8*)
                eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](pvVar1, 0);
            piVar4 = (int*)(*puVar2)->second();
            bVar5 = piVar3[1] == piVar4[1] && *piVar3 == *piVar4;
        }
        return bVar5;
    }

    // 0x100980e00, 144 bytes, placed by class name
    // RT7Core::CreateRenderingResources()
    void RT7Core::CreateRenderingResources() {
        ColourGradingBloomEffect* this_00;

        (&field_21136)->CreateRenderingResources();
        InitRenderers(this);
        InitRenderTargets(this, m_mSAASampleCount);
        InitSSAO(this);
        field_448->CreateRenderingResources();
        (&field_20664)->CreateRenderingResources();
        (&field_14384)->CreateRenderingResources();
        (&field_18352, this)->Initialise();
        this_00 = (ColourGradingBloomEffect*)shared_ptr<postprocess::ColourGradingBloomEffect>::operator->(
            (shared_ptr<postprocess::ColourGradingBloomEffect>*)&field_13064);
        this_00->CreateRenderingResources();
    }

    // 0x100980ed0, 128 bytes, placed by class name
    // RT7Core::DestroyRenderingResources()
    void RT7Core::DestroyRenderingResources() {
        ColourGradingBloomEffect* this_00;

        this_00 = (ColourGradingBloomEffect*)shared_ptr<postprocess::ColourGradingBloomEffect>::operator->(
            (shared_ptr<postprocess::ColourGradingBloomEffect>*)&field_13064);
        this_00->DestroyRenderingResources();
        field_448->DestroyRenderingResources();
        (&field_18352)->Destroy();
        (&field_14384)->DestroyRenderingResources();
        (&field_20664)->DestroyRenderingResources();
        DestroySSAO(this);
        DestroyRenderers(this);
        DestroyRenderTargets(this);
        (&field_21136)->DestroyRenderingResources();
    }

    // 0x100980f50, 192 bytes, placed by class name
    // RT7Core::GetDepthFormats() const
    RT7Core* RT7Core::GetDepthFormats() {
        MapArea* this_00;
        long lVar1;
        undefined4 local_1c;

        this_00 = (MapArea*)Instance();
        lVar1 = this_00->GetOrigin();
        new (this) eastl::fixed_vector<render::Format, 3ul, true, eastl::allocator>();
        if (*(char*)(lVar1 + 149) != '\0') {
            local_1c = 12;
            push_back((Format*)&local_1c);
        }
        if (*(char*)(lVar1 + 148) != '\0') {
            local_1c = 15;
            push_back((Format*)&local_1c);
        }
        if (*(char*)(lVar1 + 150) != '\0') {
            local_1c = 14;
            push_back((Format*)&local_1c);
        }
        local_1c = 22;
        push_back((Format*)&local_1c);
        return this;
    }

    // 0x1009816e0, 320 bytes, placed by class name
    // RT7Core::OnWindowResize(math::Rect<unsigned int> const&)
    void RT7Core::OnWindowResize(Rect* param_1) {
        int iVar2;
        uint uVar3;
        uint uVar4;
        undefined4 uVar5;
        undefined4 uVar6;
        undefined8 uVar7;
        float fVar8;
        float fVar9;

        iVar2 = param_1->GetPos();
        if (iVar2 != 0) {
            iVar2 = param_1->GetLevel();
            if (iVar2 != 0) {
                uVar3 = GetBackBufferWidth(this);
                uVar4 = GetBackBufferHeight(this);
                fVar8 = (float)m_scaleManager->GetSoundSpatialSizeMax();
                fVar8 = (float)ceil(fVar8 * (float)uVar3);
                fVar9 = (float)m_scaleManager->GetSoundSpatialSizeMax();
                fVar9 = (float)ceil(fVar9 * (float)uVar4);
                if (SetViewportRTSize(this, (uint)(long)fVar8, (uint)(long)fVar9) != '\0') {
                    DestroyRenderTargets(this);
                    InitRenderTargets(this, m_mSAASampleCount);
                }
                uVar7 = logger::default_logger();
                uVar5 = param_1->GetPos();
                uVar6 = param_1->GetLevel();
                logger::Logger::Log(uVar7, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/RT7Core.cpp",
                                    655,
                                    "void RT7Core::OnWindowResize() windowRect.width: %u, windowRect.height: %u, "
                                    "viewportRTWidth: %u, viewportRTHeight: %u",
                                    uVar5, uVar6, (long)fVar8, (long)fVar9);
                return;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("windowRect.Width() != 0 && windowRect.Height() != 0",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/RT7Core.cpp",
                  642, (char*)0);
    }

    // 0x100981830, 208 bytes, placed by class name
    // RT7Core::OnEndFrame()
    void RT7Core::OnEndFrame() {
        undefined1* this_00;
        RenderTargets* pRVar2;
        RenderTargets* this_01;
        Texture* pTVar4;

        if (this[1].field_6692 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "m_beginFrameCalled",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/RT7Core.cpp",
                662, (char*)0);
        }
        (&field_18352)->OnEndFrame();
        ((m_scaleManager + 104))->OnEndFrame();
        (&field_21136)->OnEndFrame();
        this_00 = m_gBufferRT;
        if (this_00->operator_cast_to_bool()) {
            pRVar2 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)this_00);
            if (pRVar2->GetDepthStencilTargetTexture() == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("m_GBufferRT->GetDepthStencilTargetTexture()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "RT7Core.cpp",
                          673, (char*)0);
            }
            pRVar2 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)m_forwardLightingRT);
            this_01 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(
                (shared_ptr<render::RenderTargets>*)this_00);
            pTVar4 = (Texture*)this_01->GetDepthStencilTargetTexture();
            pRVar2->BindDepthStencilTargetTexture(pTVar4);
        }
    }

    // 0x1009a71c0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.45
    void ___cxx_global_var_init_45() {
        new (&RT7Core::m_MSAAQuality) StringEnum((StringEnumEntry*)&RT7Core::m_MSAAQuality__, 4);
        ___cxa_atexit(StringEnum::~StringEnum, &RT7Core::m_MSAAQuality, 4294967296);
    }

} // namespace jag::graphics

// 0x100981820, 16 bytes, placed by neighbouring functions
// ceil(float)
void ceil(float param_1) {
    _ceilf();
}
