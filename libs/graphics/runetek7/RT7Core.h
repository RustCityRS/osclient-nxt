// libs/graphics/runetek7/RT7Core.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::graphics {
    class RT7Core {
    public:
        // virtual methods in vtable order
        virtual ~RT7Core();
        virtual void OnWindowResize(math::Rect<unsigned int> const&);
        virtual void OnEndFrame();
        GetViewportHeight() const;
        uint GetViewportWidth() const;
        GetResourceProvider();
        uint* GetMSAASampleCount();
        GetGeometryPass();
        GetForwardLightingPass();
        LoginManager GetSSAOContext();
        GetSkyBoxManager();
        GetMaterialManager();
        shared_ptr GetGBufferRT();
        shared_ptr GetGBufferRT() const;
        shared_ptr GetForwardLightingRT();
        GetObjectHighlightPass();
        GetPostProcessController();
        PostProcessManager GetPostProcessManager();
        GetForwardDepthTexture();
        GetSSAOPass();
        shared_ptr GetSSAORT();
        int GetClippingRectangle() const;
        GetGeometryQueryManager();
        ThreadPool GetImmediateThreadPool();
        GetRenderTargetsManager();
        shared_ptr GetShadowBufferRT();
        GetDeferredShadowPass();
        GetWaterCausticsPass();
        GetTextureManager();
        GetEffectManager();
        void GetRenderContext();
        void GetObjectSpriteRT(unsigned long);
        GetForwardOcclusionRenderPass();
        GetDepthDownsamplePass();
        void GetTerrainPatchRenderer();
        void GetWaterPatchRenderer();
        GetEquirectangularEffect();
        GetDrawableBatchRenderers();
        GetQueryPass();
        void GetGeometryBatchRenderer();
        void SetClippingRectToViewport();
        void GetBillboardBatchRenderer();
        GetWaterReflectionPass();
        GetParticleManager();
        void GetParticleRenderer();
        void GetInterfaceWidth() const;
        void GetInterfaceHeight() const;
        GetShaderManager();
        GetGUIManager();
        void GetBackBufferWidth() const;
        void GetBackBufferHeight() const;
        SoundInstance GetScaleManager();
        void GetSkyBoxRenderer();
        GetPSTextureSlotManager();
        GetRenderToTexture();
        void GetLightProbeRenderer();
        RT7Core(Js5ResourceProvider&, RT7GraphicsArchiveBundle&, MaterialRawProvider&, TextureDataProvider&,
                IConfigProvider*, unsigned int, unsigned int, unsigned int, unsigned int);
        void Shutdown();
        byte Initialise(SystemSettings*);
        SetViewportRTSize(unsigned int, unsigned int);
        byte InitRenderers();
        ulong InitRenderTargets(int);
        InitSSAO();
        byte InitPostProcessing();
        void DestroyPostProcessing();
        void DestroySSAO();
        void DestroyRenderers();
        void DestroyRenderTargets();
        void MainLogic();
        void BeginFrame();
        void EndFrame();
        void PerformComposition(render::RenderTargets const*, render::Viewport const&);
        void SetClippingRectangle(int, int, int, int, bool);
        GetScissorRectFromClippingRect() const;
        bool ClippingTest(int, int, int, int);
        bool CanUseGBuffer(render::RenderTargets*, render::RenderTargets*);
        void CreateRenderingResources();
        void DestroyRenderingResources();
        RT7Core* GetDepthFormats() const;
        static /* 64 bytes */ m_MSAAQuality__;          // initialised in its definition
        static StringEnum /* 16 bytes */ m_MSAAQuality; // = StringEnum((StringEnumEntry *)&m_MSAAQuality__, 4)
        static /* 8 bytes */ m_rasteriserDiscard;

        // data members, from how the methods use this: 22364 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined1 field_8;  // offset 8
        char _unknown_9[3];
        undefined4 field_12;  // offset 12
        undefined** field_16; // offset 16
        char _unknown_24[8];
        Js5ResourceProvider* field_32;    // offset 32
        undefined8 field_40;              // offset 40
        undefined8 field_48;              // offset 48
        undefined8 field_56;              // offset 56
        undefined8 field_64;              // offset 64
        undefined8 field_72;              // offset 72
        Js5ArchiveSettings* field_80;     // offset 80
        Js5ArchiveSettings* field_88;     // offset 88
        Js5ArchiveSettings* field_96;     // offset 96
        uint m_viewportWidth;             // offset 104
        uint field_108;                   // offset 108
        int m_clippingRectangle;          // offset 112
        int field_116;                    // offset 116
        int field_120;                    // offset 120
        int field_124;                    // offset 124
        int field_128;                    // offset 128
        int field_132;                    // offset 132
        uint m_mSAASampleCount;           // offset 136
        uint field_140;                   // offset 140
        ThreadPool m_immediateThreadPool; // offset 144
        char _unknown_344[104];
        PostProcessManager m_postProcessManager; // offset 448
        char _unknown_1688[9880];
        RenderTargetsManager* field_11568; // offset 11568
        char _unknown_11576[32];
        undefined8 m_drawableBatchRenderers; // offset 11608
        shared_ptr m_gBufferRT;              // offset 11616
        shared_ptr m_sSAORT;                 // offset 11632
        shared_ptr m_forwardLightingRT;      // offset 11648
        shared_ptr m_shadowBufferRT;         // offset 11664
        shared_ptr field_11680;              // offset 11680
        char _unknown_11696[1432];
        shared_ptr field_13128;     // offset 13128
        LoginManager m_sSAOContext; // offset 13144
        char _unknown_13520[8648];
        SoundInstance m_scaleManager; // offset 22168
    };

    class RT7GraphicsArchiveBundle {
    public:
        RT7GraphicsArchiveBundle(Js5ArchiveSettings const&, Js5ArchiveSettings const&, Js5ArchiveSettings const&,
                                 Js5ArchiveSettings const&, Js5ArchiveSettings const&, Js5ArchiveSettings const&,
                                 Js5ArchiveSettings const&, Js5ArchiveSettings const&);

        // data members, from how the methods use this: 64 bytes
        Js5ArchiveSettings* field_0;  // offset 0
        Js5ArchiveSettings* field_8;  // offset 8
        Js5ArchiveSettings* field_16; // offset 16
        Js5ArchiveSettings* field_24; // offset 24
        Js5ArchiveSettings* field_32; // offset 32
        Js5ArchiveSettings* field_40; // offset 40
        Js5ArchiveSettings* field_48; // offset 48
        Js5ArchiveSettings* field_56; // offset 56
    };

    // 0x1001bc560, 48 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // RT7GraphicsArchiveBundle::RT7GraphicsArchiveBundle(Js5ArchiveSettings const&, Js5ArchiveSettings const&, Js5ArchiveSettings const&, Js5ArchiveSettings const&, Js5ArchiveSettings const&, Js5ArchiveSettings const&, Js5ArchiveSettings const&, Js5ArchiveSettings const&)
    void RT7GraphicsArchiveBundle::RT7GraphicsArchiveBundle(Js5ArchiveSettings* param_1, Js5ArchiveSettings* param_2,
                                                            Js5ArchiveSettings* param_3, Js5ArchiveSettings* param_4,
                                                            Js5ArchiveSettings* param_5, Js5ArchiveSettings* param_6,
                                                            Js5ArchiveSettings* param_7, Js5ArchiveSettings* param_8) {
        RT7GraphicsArchiveBundle(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
    }

    // 0x1001bca40, 16 bytes, inline, placed by class name and debug map
    // RT7Core::GetGeometryPass()
    undefined1* RT7Core::GetGeometryPass() {
        return &field_2128;
    }

    // 0x1001bca60, 16 bytes, inline, placed by class name
    // RT7Core::GetForwardLightingPass()
    undefined1* RT7Core::GetForwardLightingPass() {
        return &field_3792;
    }

    // 0x1001c2250, 16 bytes, inline, placed by class name
    // RT7Core::GetSSAOContext()
    undefined1* RT7Core::GetSSAOContext() {
        return m_sSAOContext;
    }

    // 0x1001c2450, 16 bytes, inline, placed by class name
    // RT7Core::GetSkyBoxManager()
    undefined1* RT7Core::GetSkyBoxManager() {
        return m_scaleManager + 136;
    }

    // 0x1001c3aa0, 16 bytes, inline, placed by class name
    // RT7Core::GetMaterialManager()
    undefined1* RT7Core::GetMaterialManager() {
        return &field_13824;
    }

    // 0x1001c4610, 16 bytes, inline, placed by class name
    // RT7Core::GetGBufferRT()
    /* RT7Core::GetGBufferRT() const */

    undefined1* RT7Core::GetGBufferRT() {
        return m_gBufferRT;
    }

    // 0x1001c4640, 16 bytes, inline, placed by class name
    // RT7Core::GetForwardLightingRT()
    undefined1* RT7Core::GetForwardLightingRT() {
        return m_forwardLightingRT;
    }

    // 0x1001c4860, 16 bytes, inline, placed by class name
    // RT7Core::GetObjectHighlightPass()
    undefined1* RT7Core::GetObjectHighlightPass() {
        return &field_4672;
    }

    // 0x1001c4870, 16 bytes, inline, placed by class name
    // RT7Core::GetPostProcessController()
    undefined1* RT7Core::GetPostProcessController() {
        return &field_11760;
    }

    // 0x1001c4880, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // RT7Core::GetPostProcessManager()
    /* GeometryBatch::GetVertexDataBuffer() */

    undefined1* GeometryBatch::GetVertexDataBuffer() {
        return &field_448;
    }

    // 0x1001c4890, 80 bytes, inline, placed by class name
    // RT7Core::GetForwardDepthTexture()
    undefined8 RT7Core::GetForwardDepthTexture() {
        bool bVar1;
        RenderTargets* this_00;
        shared_ptr<render::RenderTargets>* this_01;

        this_01 = (shared_ptr<render::RenderTargets>*)m_gBufferRT;
        bVar1 = this_01->operator_cast_to_bool();
        if (!bVar1) {
            this_01 = (shared_ptr<render::RenderTargets>*)m_forwardLightingRT;
            bVar1 = this_01->operator_cast_to_bool();
            if (!bVar1) {
                return 0;
            }
        }
        this_00 = (RenderTargets*)shared_ptr<render::RenderTargets>::operator->(this_01);
        return this_00->GetDepthStencilTargetTexture();
    }

    // 0x1001d0720, 16 bytes, inline, placed by class name
    // RT7Core::GetSSAOPass()
    undefined1* RT7Core::GetSSAOPass() {
        return &field_6096;
    }

    // 0x1001d0770, 16 bytes, inline, placed by class name
    // RT7Core::GetSSAORT()
    undefined1* RT7Core::GetSSAORT() {
        return m_sSAORT;
    }

    // 0x1003dae40, 16 bytes, inline, placed by class name
    // RT7Core::GetGeometryQueryManager()
    undefined1* RT7Core::GetGeometryQueryManager() {
        return m_scaleManager + 104;
    }

    // 0x100465480, 16 bytes, inline, placed by class name
    // RT7Core::GetShadowBufferRT()
    undefined1* RT7Core::GetShadowBufferRT() {
        return m_shadowBufferRT;
    }

    // 0x100467d30, 16 bytes, inline, placed by class name
    // RT7Core::GetDeferredShadowPass()
    undefined1* RT7Core::GetDeferredShadowPass() {
        return &field_9984;
    }

    // 0x100469010, 16 bytes, inline, placed by class name
    // RT7Core::GetWaterCausticsPass()
    undefined1* RT7Core::GetWaterCausticsPass() {
        return &field_10752;
    }

    // 0x1005f8070, 16 bytes, inline, placed by class name
    // RT7Core::GetTextureManager()
    undefined1* RT7Core::GetTextureManager() {
        return &field_14384;
    }

    // 0x1005f84c0, 16 bytes, inline, placed by class name
    // RT7Core::GetEffectManager()
    undefined1* RT7Core::GetEffectManager() {
        return &field_21136;
    }

    // 0x1005f8800, 32 bytes, inline, placed by class name
    // RT7Core::GetRenderContext()
    void RT7Core::GetRenderContext() {
        RenderDevice* this_00;

        this_00 = (RenderDevice*)Instance();
        this_00->GetPrimaryRenderContext();
    }

    // 0x1006ac7c0, 32 bytes, inline, placed by class name
    // RT7Core::GetObjectSpriteRT(unsigned long)
    void RT7Core::GetObjectSpriteRT(ulong param_1) {
        std::array<shared_ptr<render::RenderTargets>, 4ul>::operator[](
            (array<shared_ptr<render::RenderTargets>, 4ul>*)&field_11696, param_1);
    }

    // 0x1007a8ea0, 48 bytes, inline, placed by class name
    // RT7Core::GetForwardOcclusionRenderPass()
    undefined1* RT7Core::GetForwardOcclusionRenderPass() {
        char cVar1;
        undefined1* puVar2;

        cVar1 = (&field_2128)->GetOcclusionEnabled();
        puVar2 = &field_3792;
        if (cVar1 != '\0') {
            puVar2 = &field_2128;
        }
        return puVar2;
    }

    // 0x1007ae2e0, 16 bytes, inline, placed by class name
    // RT7Core::GetDepthDownsamplePass()
    undefined1* RT7Core::GetDepthDownsamplePass() {
        return &field_9056;
    }

    // 0x1007c6620, 32 bytes, inline, placed by class name
    // RT7Core::GetTerrainPatchRenderer()
    void RT7Core::GetTerrainPatchRenderer() {
        std::unique_ptr<TerrainPatchRenderer, std::default_delete<TerrainPatchRenderer>>::operator*(
            (unique_ptr<TerrainPatchRenderer, std::default_delete<TerrainPatchRenderer>>*)&field_11560);
    }

    // 0x1007c8d60, 32 bytes, inline, placed by class name
    // RT7Core::GetWaterPatchRenderer()
    void RT7Core::GetWaterPatchRenderer() {
        std::unique_ptr<WaterPatchRenderer, std::default_delete<WaterPatchRenderer>>::operator*(
            (unique_ptr<WaterPatchRenderer, std::default_delete<WaterPatchRenderer>>*)&field_11552);
    }

    // 0x1007de930, 16 bytes, inline, placed by class name
    // RT7Core::GetEquirectangularEffect()
    undefined1* RT7Core::GetEquirectangularEffect() {
        return &field_13112;
    }

    // 0x1007e1e50, 16 bytes, inline, placed by class name
    // RT7Core::GetDrawableBatchRenderers()
    undefined8* RT7Core::GetDrawableBatchRenderers() {
        return &m_drawableBatchRenderers;
    }

    // 0x100813740, 16 bytes, inline, placed by class name
    // RT7Core::GetQueryPass()
    undefined1* RT7Core::GetQueryPass() {
        return &field_2944;
    }

    // 0x100838600, 32 bytes, inline, placed by class name
    // RT7Core::GetGeometryBatchRenderer()
    void RT7Core::GetGeometryBatchRenderer() {
        std::unique_ptr<GeometryBatchRenderer, std::default_delete<GeometryBatchRenderer>>::operator*(
            (unique_ptr<GeometryBatchRenderer, std::default_delete<GeometryBatchRenderer>>*)&field_11576);
    }

    // 0x100861330, 64 bytes, inline, placed by class name
    // RT7Core::SetClippingRectToViewport()
    void RT7Core::SetClippingRectToViewport() {
        int iVar1;
        int iVar2;

        iVar1 = GetBackBufferWidth(this);
        iVar2 = GetBackBufferHeight(this);
        SetClippingRectangle(this, 0, 0, iVar1, iVar2, true);
    }

    // 0x100887e40, 32 bytes, inline, placed by class name
    // RT7Core::GetBillboardBatchRenderer()
    void RT7Core::GetBillboardBatchRenderer() {
        std::unique_ptr<BillboardBatchRenderer, std::default_delete<BillboardBatchRenderer>>::operator*(
            (unique_ptr<BillboardBatchRenderer, std::default_delete<BillboardBatchRenderer>>*)&field_11584);
    }

    // 0x1008a7250, 16 bytes, inline, placed by class name
    // RT7Core::GetWaterReflectionPass()
    undefined1* RT7Core::GetWaterReflectionPass() {
        return &field_8192;
    }

    // 0x1008a75e0, 16 bytes, inline, placed by class name
    // RT7Core::GetParticleManager()
    undefined1* RT7Core::GetParticleManager() {
        return &field_20664;
    }

    // 0x1008a7a10, 32 bytes, inline, placed by class name
    // RT7Core::GetParticleRenderer()
    void RT7Core::GetParticleRenderer() {
        std::unique_ptr<ParticleSystemRenderer, std::default_delete<ParticleSystemRenderer>>::operator*(
            (unique_ptr<ParticleSystemRenderer, std::default_delete<ParticleSystemRenderer>>*)&field_11568);
    }

    // 0x1008eb6f0, 48 bytes, inline, placed by class name
    // RT7Core::GetInterfaceWidth() const
    void RT7Core::GetInterfaceWidth() {
        int iVar1;

        iVar1 = GetBackBufferWidth(this);
        (m_scaleManager, iVar1, false)->ScreenToInterfaceSize();
    }

    // 0x1008eb720, 48 bytes, inline, placed by class name
    // RT7Core::GetInterfaceHeight() const
    void RT7Core::GetInterfaceHeight() {
        int iVar1;

        iVar1 = GetBackBufferHeight(this);
        (m_scaleManager, iVar1, false)->ScreenToInterfaceSize();
    }

    // 0x1008f2970, 16 bytes, inline, placed by class name
    // RT7Core::GetShaderManager()
    undefined1* RT7Core::GetShaderManager() {
        return &field_13640;
    }

    // 0x1008f3b50, 16 bytes, inline, placed by class name
    // RT7Core::GetGUIManager()
    undefined1* RT7Core::GetGUIManager() {
        return &field_18352;
    }

    // 0x1008f3b60, 32 bytes, inline, placed by class name
    // RT7Core::GetBackBufferWidth() const
    void RT7Core::GetBackBufferWidth() {
        RenderContext* this_00;

        this_00 = (RenderContext*)GetRenderContext(this);
        this_00->GetBackBufferWidth();
    }

    // 0x1008f3b80, 32 bytes, inline, placed by class name
    // RT7Core::GetBackBufferHeight() const
    void RT7Core::GetBackBufferHeight() {
        RenderContext* this_00;

        this_00 = (RenderContext*)GetRenderContext(this);
        this_00->GetBackBufferHeight();
    }

    // 0x1008fa030, 16 bytes, inline, placed by class name
    // RT7Core::GetScaleManager()
    undefined1* RT7Core::GetScaleManager() {
        return m_scaleManager;
    }

    // 0x10091bf10, 32 bytes, inline, placed by class name and debug map
    // RT7Core::GetSkyBoxRenderer()
    void RT7Core::GetSkyBoxRenderer() {
        std::unique_ptr<SkyBoxRenderer, std::default_delete<SkyBoxRenderer>>::operator*(
            (unique_ptr<SkyBoxRenderer, std::default_delete<SkyBoxRenderer>>*)&field_11592);
    }

    // 0x10092cf90, 16 bytes, inline, placed by class name and debug map
    // RT7Core::GetPSTextureSlotManager()
    undefined1* RT7Core::GetPSTextureSlotManager() {
        return &field_20992;
    }

    // 0x1009329e0, 16 bytes, inline, placed by class name
    // RT7Core::GetRenderToTexture()
    undefined1* RT7Core::GetRenderToTexture() {
        return m_sSAOContext + 56;
    }

    // 0x10093f3e0, 32 bytes, inline, placed by class name
    // RT7Core::GetLightProbeRenderer()
    void RT7Core::GetLightProbeRenderer() {
        std::unique_ptr<LightProbeRenderer, std::default_delete<LightProbeRenderer>>::operator*(
            (unique_ptr<LightProbeRenderer, std::default_delete<LightProbeRenderer>>*)&field_11600);
    }

} // namespace jag::graphics

namespace jag::oldscape {
    // 0x1001bc680, 960 bytes, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread_RSeven::InitialiseEffects()
    void OSRenderCore_RenderThread_RSeven::InitialiseEffects() {
        RT7Core* this_00;
        EffectManager* pEVar1;
        SunlightDirectLighting* pSVar2;

        this_00 =
            (RT7Core*)std::unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>::operator->(
                (unique_ptr<jag::graphics::RT7Core, std::default_delete<jag::graphics::RT7Core>>*)&field_8);
        pEVar1 = (EffectManager*)this_00->GetEffectManager();
        pEVar1->EnableEffect(7, 1);
        pEVar1->EnableEffect(20, 1);
        pEVar1->EnableEffect(22, 1);
        pEVar1->EnableEffect(23, 1);
        pEVar1->EnableEffect(25, 1);
        pEVar1->EnableEffect(59, 1);
        pEVar1->EnableEffect(27, 1);
        pEVar1->EnableEffect(29, 1);
        pEVar1->EnableEffect(35, 1);
        pEVar1->SetEffectQuality(35, 2);
        pEVar1->EnableEffect(30, 1);
        pEVar1->EnableEffect(34, 1);
        pEVar1->SetEffectQuality(30, 3);
        pEVar1->EnableEffect(37, 1);
        pEVar1->EnableEffect(50, 1);
        pEVar1->EnableEffect(51, 1);
        pEVar1->EnableEffect(57, 1);
        pEVar1->EnableEffect(60, 1);
        pEVar1->EnableEffect(26, 1);
        pEVar1->EnableEffect(55, 1);
        pEVar1->EnableEffect(56, 1);
        pEVar1->EnableEffect(61, 1);
        pEVar1->EnableEffect(63, 1);
        pEVar1->EnableEffect(67, 1);
        pEVar1->EnableEffect(68, 1);
        pEVar1->EnableEffect(70, 1);
        pEVar1->EnableEffect(75, 1);
        pEVar1->EnableEffect(74, 1);
        pEVar1->EnableEffect(76, 1);
        pEVar1->EnableEffect(78, 1);
        pEVar1->EnableEffect(77, 1);
        pEVar1->EnableEffect(79, 1);
        pEVar1->EnableEffect(80, 1);
        pEVar1->EnableEffect(81, 1);
        pEVar1->EnableEffect(82, 1);
        pEVar1->EnableEffect(83, 1);
        pEVar1->EnableEffect(84, 1);
        pEVar1->EnableEffect(85, 1);
        pEVar1->EnableEffect(86, 1);
        pEVar1->EnableEffect(87, 1);
        pEVar1->EnableEffect(88, 1);
        pEVar1->EnableEffect(94, 1);
        pEVar1->EnableEffect(99, 1);
        pEVar1->EnableEffect(101, 1);
        pEVar1->EnableEffect(106, 1);
        pEVar1->EnableEffect(54, 1);
        pEVar1->EnableEffect(45, 1);
        pEVar1->EnableEffect(47, 1);
        pEVar1->EnableEffect(114, 1);
        pEVar1->EnableEffect(92, 1);
        pSVar2 = jag::graphics::EffectManager::GetEffect<jag::graphics::SunlightDirectLighting>(pEVar1, 48);
        (*(code*)pSVar2->field_0[9])(pSVar2);
    }

} // namespace jag::oldscape
