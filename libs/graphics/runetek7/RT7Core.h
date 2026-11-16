// libs/graphics/runetek7/RT7Core.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::graphics {
    class RT7Core {
    public:
        // virtual methods in vtable order
        virtual ~RT7Core();
        virtual void OnWindowResize(const math::Rect<unsigned int>& rect);
        virtual void OnEndFrame();
        uint32_t GetViewportHeight() const;
        unsigned int GetViewportWidth() const;
        void GetResourceProvider();
        unsigned int* GetMSAASampleCount();
        uint8_t* GetGeometryPass();
        uint8_t* GetForwardLightingPass();
        LoginManager GetSSAOContext();
        SkyBoxManager* GetSkyBoxManager();
        MaterialManager* GetMaterialManager();
        shared_ptr<render::RenderTargets>* GetGBufferRT();
        shared_ptr<render::RenderTargets>* GetGBufferRT() const;
        shared_ptr GetForwardLightingRT();
        uint8_t* GetObjectHighlightPass();
        PostProcessController* GetPostProcessController();
        PostProcessManager GetPostProcessManager();
        uint64_t GetForwardDepthTexture();
        uint8_t* GetSSAOPass();
        shared_ptr<render::RenderTargets>* GetSSAORT();
        int GetClippingRectangle() const;
        uint8_t* GetGeometryQueryManager();
        ThreadPool GetImmediateThreadPool();
        uint8_t* GetRenderTargetsManager();
        uint8_t* GetShadowBufferRT();
        uint8_t* GetDeferredShadowPass();
        RenderPass* GetWaterCausticsPass();
        TextureManager* GetTextureManager();
        EffectManager* GetEffectManager();
        void GetRenderContext();
        shared_ptr* GetObjectSpriteRT(unsigned long arg1);
        uint8_t* GetForwardOcclusionRenderPass();
        uint8_t* GetDepthDownsamplePass();
        void GetTerrainPatchRenderer();
        void GetWaterPatchRenderer();
        uint8_t* GetEquirectangularEffect();
        RT7Core* GetDrawableBatchRenderers();
        uint8_t* GetQueryPass();
        GeometryBatch_DE* GetGeometryBatchRenderer();
        void SetClippingRectToViewport();
        BillboardBatch_DE* GetBillboardBatchRenderer();
        uint8_t* GetWaterReflectionPass();
        uint8_t* GetParticleManager();
        void GetParticleRenderer();
        void GetInterfaceWidth() const;
        void GetInterfaceHeight() const;
        ShaderManager* GetShaderManager();
        GUIManager* GetGUIManager();
        void GetBackBufferWidth() const;
        void GetBackBufferHeight() const;
        ScaleManager* GetScaleManager();
        void GetSkyBoxRenderer();
        uint8_t* GetPSTextureSlotManager();
        RenderToTextureHelper* GetRenderToTexture();
        LightProbeRenderer* GetLightProbeRenderer();
        RT7Core(Js5ResourceProvider& js5ResourceProvider, RT7GraphicsArchiveBundle& rt7GraphicsArchiveBundle,
                MaterialRawProvider& materialRawProvider, TextureDataProvider& textureDataProvider,
                IConfigProvider* iConfigProvider, unsigned int arg6, unsigned int arg7, unsigned int arg8,
                unsigned int arg9);
        void Shutdown();
        uint8_t Initialise(SystemSettings* systemSettings);
        uint32_t SetViewportRTSize(unsigned int arg1, unsigned int arg2);
        uint8_t InitRenderers();
        unsigned long InitRenderTargets(int arg1);
        uint32_t InitSSAO();
        uint8_t InitPostProcessing();
        void DestroyPostProcessing();
        void DestroySSAO();
        void DestroyRenderers();
        void DestroyRenderTargets();
        void MainLogic();
        void BeginFrame();
        void EndFrame();
        void PerformComposition(const render::RenderTargets* renderTargets, const render::Viewport& viewport);
        void SetClippingRectangle(int arg1, int arg2, int arg3, int arg4, bool arg5);
        auto GetScissorRectFromClippingRect() const;
        bool ClippingTest(int arg1, int arg2, int arg3, int arg4);
        bool CanUseGBuffer(render::RenderTargets* renderTargets1, render::RenderTargets* renderTargets2);
        void CreateRenderingResources();
        void DestroyRenderingResources();
        RT7Core* GetDepthFormats() const;
        static int32_t m_MSAAQuality__[16]; // initialised in its definition
        static StringEnum m_MSAAQuality;    // = StringEnum((StringEnumEntry *)&m_MSAAQuality__, 4)
        static int64_t m_rasteriserDiscard;

    private:
        uint8_t field_8;
        uint8_t _unknown_9[3];
        uint32_t field_12;
        uint8_t** field_16;
        uint8_t _unknown_24[8];
        Js5ResourceProvider* field_32;
        uint64_t field_40;
        uint64_t field_48;
        uint64_t field_56;
        uint64_t field_64;
        uint64_t field_72;
        Js5ArchiveSettings* field_80;
        Js5ArchiveSettings* field_88;
        MaterialManager* field_96;
        unsigned int m_viewportWidth;
        unsigned int field_108;
        int m_clippingRectangle;
        int field_116;
        int field_120;
        int field_124;
        int field_128;
        int field_132;
        unsigned int m_mSAASampleCount;
        unsigned int field_140;
        ThreadPool m_immediateThreadPool;
        uint8_t _unknown_344[104];
        PostProcessManager m_postProcessManager;
        uint8_t _unknown_1688[9920];
        uint64_t m_drawableBatchRenderers;
        shared_ptr m_gBufferRT;
        uint8_t m_sSAORT[16];
        shared_ptr m_forwardLightingRT;
        uint8_t m_shadowBufferRT[16];
        uint8_t _unknown_11680[1464];
        LoginManager m_sSAOContext;
        uint8_t _unknown_13520[8648];
        SoundInstance m_scaleManager;
    };

    class RT7GraphicsArchiveBundle {
    public:
        RT7GraphicsArchiveBundle(
            const Js5ArchiveSettings& js5ArchiveSettings1, const Js5ArchiveSettings& js5ArchiveSettings2,
            const Js5ArchiveSettings& js5ArchiveSettings3, const Js5ArchiveSettings& js5ArchiveSettings4,
            const Js5ArchiveSettings& js5ArchiveSettings5, const Js5ArchiveSettings& js5ArchiveSettings6,
            const Js5ArchiveSettings& js5ArchiveSettings7, const Js5ArchiveSettings& js5ArchiveSettings8);

    private:
        Js5ArchiveSettings* field_0;
        Js5ArchiveSettings* field_8;
        Js5ArchiveSettings* field_16;
        Js5ArchiveSettings* field_24;
        Js5ArchiveSettings* field_32;
        Js5ArchiveSettings* field_40;
        Js5ArchiveSettings* field_48;
        Js5ArchiveSettings* field_56;
    };

    // 0x1001bc560
    RT7GraphicsArchiveBundle::RT7GraphicsArchiveBundle(
        const Js5ArchiveSettings& js5ArchiveSettings1, const Js5ArchiveSettings& js5ArchiveSettings2,
        const Js5ArchiveSettings& js5ArchiveSettings3, const Js5ArchiveSettings& js5ArchiveSettings4,
        const Js5ArchiveSettings& js5ArchiveSettings5, const Js5ArchiveSettings& js5ArchiveSettings6,
        const Js5ArchiveSettings& js5ArchiveSettings7, const Js5ArchiveSettings& js5ArchiveSettings8) {
        RT7GraphicsArchiveBundle(js5ArchiveSettings1, js5ArchiveSettings2, js5ArchiveSettings3, js5ArchiveSettings4,
                                 js5ArchiveSettings5, js5ArchiveSettings6, js5ArchiveSettings7, js5ArchiveSettings8);
    }

    // 0x1001bca40
    uint8_t* RT7Core::GetGeometryPass() {
        return &field_2128;
    }

    // 0x1001bca60
    uint8_t* RT7Core::GetForwardLightingPass() {
        return &field_3792;
    }

    // 0x1001c2250
    LoginManager RT7Core::GetSSAOContext() {
        return m_sSAOContext;
    }

    // 0x1001c2450
    SkyBoxManager* RT7Core::GetSkyBoxManager() {
        return (SkyBoxManager*)(m_scaleManager + 136);
    }

    // 0x1001c3aa0
    MaterialManager* RT7Core::GetMaterialManager() {
        return (MaterialManager*)&field_13824;
    }

    // 0x1001c4610
    shared_ptr<render::RenderTargets>* RT7Core::GetGBufferRT() {
        return (shared_ptr<render::RenderTargets>*)m_gBufferRT;
    }

    // 0x1001c4640
    shared_ptr RT7Core::GetForwardLightingRT() {
        return m_forwardLightingRT;
    }

    // 0x1001c4860
    uint8_t* RT7Core::GetObjectHighlightPass() {
        return &field_4672;
    }

    // 0x1001c4870
    PostProcessController* RT7Core::GetPostProcessController() {
        return (PostProcessController*)&field_11760;
    }

    // 0x1001c4880
    PostProcessManager RT7Core::GetPostProcessManager() {
        return &field_448;
    }

    // 0x1001c4890
    uint64_t RT7Core::GetForwardDepthTexture() {
        shared_ptr<render::RenderTargets>* this_01 = (shared_ptr<render::RenderTargets>*)m_gBufferRT;
        if (!(this_01->operator_cast_to_bool())) {
            this_01 = (shared_ptr<render::RenderTargets>*)m_forwardLightingRT;
            if (!(this_01->operator_cast_to_bool())) {
                return 0;
            }
        }
        return ((RenderTargets*)(*this_01).operator->())->GetDepthStencilTargetTexture();
    }

    // 0x1001d0720
    uint8_t* RT7Core::GetSSAOPass() {
        return &field_6096;
    }

    // 0x1001d0770
    shared_ptr<render::RenderTargets>* RT7Core::GetSSAORT() {
        return (shared_ptr<render::RenderTargets>*)m_sSAORT;
    }

    // 0x1003dae40
    uint8_t* RT7Core::GetGeometryQueryManager() {
        return m_scaleManager + 104;
    }

    // 0x100465480
    uint8_t* RT7Core::GetShadowBufferRT() {
        return m_shadowBufferRT;
    }

    // 0x100467d30
    uint8_t* RT7Core::GetDeferredShadowPass() {
        return &field_9984;
    }

    // 0x100469010
    RenderPass* RT7Core::GetWaterCausticsPass() {
        return (RenderPass*)&field_10752;
    }

    // 0x1005f8070
    TextureManager* RT7Core::GetTextureManager() {
        return (TextureManager*)&field_14384;
    }

    // 0x1005f84c0
    EffectManager* RT7Core::GetEffectManager() {
        return (EffectManager*)&field_21136;
    }

    // 0x1005f8800
    void RT7Core::GetRenderContext() {
        ((RenderDevice*)Instance())->GetPrimaryRenderContext();
    }

    // 0x1006ac7c0
    shared_ptr* RT7Core::GetObjectSpriteRT(unsigned long arg1) {
        return (shared_ptr*)field_11696[arg1];
    }

    // 0x1007a8ea0
    uint8_t* RT7Core::GetForwardOcclusionRenderPass() {
        bool cVar1 = field_2128.GetOcclusionEnabled();
        uint8_t* puVar2 = &field_3792;
        if (cVar1) {
            puVar2 = &field_2128;
        }
        return puVar2;
    }

    // 0x1007ae2e0
    uint8_t* RT7Core::GetDepthDownsamplePass() {
        return &field_9056;
    }

    // 0x1007c6620
    void RT7Core::GetTerrainPatchRenderer() {
        *field_11560;
    }

    // 0x1007c8d60
    void RT7Core::GetWaterPatchRenderer() {
        *field_11552;
    }

    // 0x1007de930
    uint8_t* RT7Core::GetEquirectangularEffect() {
        return &field_13112;
    }

    // 0x1007e1e50
    RT7Core* RT7Core::GetDrawableBatchRenderers() {
        return (RT7Core*)&m_drawableBatchRenderers;
    }

    // 0x100813740
    uint8_t* RT7Core::GetQueryPass() {
        return &field_2944;
    }

    // 0x100838600
    GeometryBatch_DE* RT7Core::GetGeometryBatchRenderer() {
        return (GeometryBatch_DE*)*field_11576;
    }

    // 0x100861330
    void RT7Core::SetClippingRectToViewport() {
        int arg3 = GetBackBufferWidth();
        int arg4 = GetBackBufferHeight();
        SetClippingRectangle(0, 0, arg3, arg4, true);
    }

    // 0x100887e40
    BillboardBatch_DE* RT7Core::GetBillboardBatchRenderer() {
        return (BillboardBatch_DE*)*field_11584;
    }

    // 0x1008a7250
    uint8_t* RT7Core::GetWaterReflectionPass() {
        return &field_8192;
    }

    // 0x1008a75e0
    uint8_t* RT7Core::GetParticleManager() {
        return &field_20664;
    }

    // 0x1008a7a10
    void RT7Core::GetParticleRenderer() {
        *field_11568;
    }

    // 0x1008eb6f0
    void RT7Core::GetInterfaceWidth() const {
        m_scaleManager->ScreenToInterfaceSize(GetBackBufferWidth(), false);
    }

    // 0x1008eb720
    void RT7Core::GetInterfaceHeight() const {
        m_scaleManager->ScreenToInterfaceSize(GetBackBufferHeight(), false);
    }

    // 0x1008f2970
    ShaderManager* RT7Core::GetShaderManager() {
        return (ShaderManager*)&field_13640;
    }

    // 0x1008f3b50
    GUIManager* RT7Core::GetGUIManager() {
        return (GUIManager*)&field_18352;
    }

    // 0x1008f3b60
    void RT7Core::GetBackBufferWidth() const {
        ((RenderContext*)GetRenderContext())->GetBackBufferWidth();
    }

    // 0x1008f3b80
    void RT7Core::GetBackBufferHeight() const {
        ((RenderContext*)GetRenderContext())->GetBackBufferHeight();
    }

    // 0x1008fa030
    ScaleManager* RT7Core::GetScaleManager() {
        return (ScaleManager*)m_scaleManager;
    }

    // 0x10091bf10
    void RT7Core::GetSkyBoxRenderer() {
        *field_11592;
    }

    // 0x10092cf90
    uint8_t* RT7Core::GetPSTextureSlotManager() {
        return &field_20992;
    }

    // 0x1009329e0
    RenderToTextureHelper* RT7Core::GetRenderToTexture() {
        return (RenderToTextureHelper*)(m_sSAOContext + 56);
    }

    // 0x10093f3e0
    LightProbeRenderer* RT7Core::GetLightProbeRenderer() {
        return (LightProbeRenderer*)*field_11600;
    }

} // namespace jag::graphics

namespace jag::oldscape {
    // 0x1001bc680
    void OSRenderCore_RenderThread_RSeven::InitialiseEffects() {
        EffectManager* this_01 = ((RT7Core*)field_8.operator->())->GetEffectManager();
        this_01->EnableEffect(7, true);
        this_01->EnableEffect(20, true);
        this_01->EnableEffect(22, true);
        this_01->EnableEffect(23, true);
        this_01->EnableEffect(25, true);
        this_01->EnableEffect(59, true);
        this_01->EnableEffect(27, true);
        this_01->EnableEffect(29, true);
        this_01->EnableEffect(35, true);
        this_01->SetEffectQuality(35, 2);
        this_01->EnableEffect(30, true);
        this_01->EnableEffect(34, true);
        this_01->SetEffectQuality(30, 3);
        this_01->EnableEffect(37, true);
        this_01->EnableEffect(50, true);
        this_01->EnableEffect(51, true);
        this_01->EnableEffect(57, true);
        this_01->EnableEffect(60, true);
        this_01->EnableEffect(26, true);
        this_01->EnableEffect(55, true);
        this_01->EnableEffect(56, true);
        this_01->EnableEffect(61, true);
        this_01->EnableEffect(63, true);
        this_01->EnableEffect(67, true);
        this_01->EnableEffect(68, true);
        this_01->EnableEffect(70, true);
        this_01->EnableEffect(75, true);
        this_01->EnableEffect(74, true);
        this_01->EnableEffect(76, true);
        this_01->EnableEffect(78, true);
        this_01->EnableEffect(77, true);
        this_01->EnableEffect(79, true);
        this_01->EnableEffect(80, true);
        this_01->EnableEffect(81, true);
        this_01->EnableEffect(82, true);
        this_01->EnableEffect(83, true);
        this_01->EnableEffect(84, true);
        this_01->EnableEffect(85, true);
        this_01->EnableEffect(86, true);
        this_01->EnableEffect(87, true);
        this_01->EnableEffect(88, true);
        this_01->EnableEffect(94, true);
        this_01->EnableEffect(99, true);
        this_01->EnableEffect(101, true);
        this_01->EnableEffect(106, true);
        this_01->EnableEffect(54, true);
        this_01->EnableEffect(45, true);
        this_01->EnableEffect(47, true);
        this_01->EnableEffect(114, true);
        this_01->EnableEffect(92, true);
        this_01->GetEffect<jag::graphics::SunlightDirectLighting>(48)->CreateRenderingResources();
    }

} // namespace jag::oldscape
