// libs/oldscape/osrendercore/OSRenderCore.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::oldscape {
    class NoJs5ResourceProvider {
    public:
        // virtual methods in vtable order
        virtual ~NoJs5ResourceProvider();
        virtual uint8_t* IndexReady(const Js5ArchiveSettings& arg1);
        virtual uint64_t EnsureArchiveLoadedIfAvailableOnDisk(const Js5ArchiveSettings& arg1);
        NoJs5ResourceProvider();
        uint8_t* GroupPreloaded(const Js5ArchiveSettings& arg1, unsigned int arg2, bool arg3, bool& arg4);
        uint8_t* GetIndex(const Js5Index** arg1, const Js5ArchiveSettings& arg2);
        uint8_t* GetIndex(Js5Index** arg1, const Js5ArchiveSettings& arg2);
        uint8_t* FileReady(const Js5ArchiveSettings& arg1, unsigned int arg2, unsigned int arg3, const Priority* arg4,
                           bool arg5);
        uint8_t* GetMasterIndex(const Js5MasterIndex** arg1) const;

    private:
        shared_ptr field_8;
        uint8_t _unknown_24[16];
        uint64_t field_40;
        uint8_t _unknown_48[32];
        Js5ArchiveSetSettings* field_80;
        uint8_t _unknown_88[16];
        BigInteger* field_104;
        BigInteger* field_112;
        uint8_t field_120;
        uint8_t _unknown_121[7];
        Array<eastl::string>* field_128;
        Array<std::unique_ptr<Js5LocalModeLoader>>* field_136;
        Js5MemoryCache* field_144;
        Js5DiskCache* field_152;
        uint8_t _unknown_160[3489];
    };

    class OSRenderCore_AudioThread {
    public:
        void Instance();
        void WriteAudioSamples(hal::audio::AudioBuffer& audioBuffer);
        unsigned int GetAudioBufferSampleSize();
        void GetNumberSamplesInAudioBuffer();

        uint8_t _unknown_0[1];
    };

    class OSRenderCore_Impl {
    public:
        // virtual methods in vtable order
        virtual void TexturesUploaded();
        virtual void GetAudioAPI();
        virtual void FlipThreadRenderStates();
        virtual void OnResourcesCreatedOrDestroyed(bool arg1);
        OSRenderCore_Impl(GraphicsApp& graphicsApp);
        ~OSRenderCore_Impl();
        void LockAudio();
        void UnlockAudio();
        void ResumeAudio();
        static int64_t m_pCore;

    private:
        uint8_t _unknown_8[8];
        OSRenderCore_LogicThread_RSeven field_16;
        uint8_t _unknown_696[8];
        OSRenderCore_RenderThread field_704;
        OSRenderCore_AnyThread field_16020848;
        uint8_t _unknown_16020856[39377744];
        OSRenderCore_LogicThread_Common field_55398600;
        uint8_t _unknown_55398649[7];
        OSRenderCore_RenderThread_Common field_55398656;
    };

    class OSRenderCore_LogicThread {
    public:
        void Instance();
        OSRenderCore_LogicThread();
        ~OSRenderCore_LogicThread();
        void DestroyResources();

    private:
        void* field_0;
        uint8_t _unknown_8[8];
        OSRenderCore_LogicThread_RSeven field_16;
    };

    class OSRenderCore_LogicThread_JavaStyle {
    public:
        OSRenderCore_LogicThread_JavaStyle();
        void SetTextureOffsets(const int* arg1, const int* arg2, int arg3);
        void RenderTriangle(short arg1, short arg2, short arg3, short arg4, short arg5, short arg6, short arg7,
                            short arg8, short arg9, short arg10, short arg11, short arg12, short arg13, short arg14,
                            short arg15, short arg16, short arg17, short arg18, short arg19, short arg20, short arg21,
                            short arg22, short arg23, short arg24);
        OSRenderCore_LogicThread_JavaStyle* Instance();
        void UploadModel(unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4, bool arg5,
                         const int* arg6, const int* arg7, const int* arg8, const int* arg9, const int* arg10,
                         const int* arg11, const int* arg12, const int* arg13, const int* arg14, const int* arg15,
                         const int* arg16, const int* arg17, const unsigned char* arg18, const short* arg19,
                         const unsigned char* arg20, const signed char* arg21, const int* arg22, const int* arg23,
                         signed char arg24, signed char arg25, signed char arg26, unsigned char arg27,
                         unsigned short arg28);
        void DestroyModel(int arg1);
        uint64_t ModelLitWorldRender(int arg1, long long arg2, int arg3, int arg4, int arg5, int arg6, int arg7,
                                     int arg8, int arg9, int arg10, int arg11, int arg12, int arg13, int arg14,
                                     bool arg15, bool arg16, const RenderableOverlay& renderableOverlay);

    private:
        long field_0;
        uint8_t _unknown_8[40];
    };

    class OSRenderCore_RenderThread {
    public:
        // virtual methods in vtable order
        virtual void GetUISize(unsigned int& arg1, unsigned int& arg2);
        OSRenderCore_RenderThread* Instance();
        unsigned int GetAtlasUV(int arg1);
        int GetLocalU(float arg1, int arg2);
        OSRenderCore_RenderThread(GraphicsApp& graphicsApp);
        ~OSRenderCore_RenderThread();
        void Init();
        void MainLogic();
        void NewFrame3D();
        void EndFrame3D();
        void Paint();
        void PaintDirect();
        void UpdateRenderTargetSizes(const render::RenderContext& renderContext);
        void SetSkyboxColour(jag::math::Vector4T<float> vector4);
        void SetFogParams(float arg1, float arg2);
        void SetScreenSize(unsigned int arg1, unsigned int arg2);
        void UploadBuffers(bool arg1);
        void CreateRenderingResources();
        void DestroyRenderingResources();
        void UpdateWindowProperties();
        void ApplyWindowSetOptions();
        void OnBeginFrame();
        uint32_t GetFrameCount();
        void GetRT7Core();

    private:
        uint8_t _unknown_8[24];
        Js5ArchiveSettings field_32;
        uint8_t _unknown_96[8];
        int field_104;
        uint8_t _unknown_108[4];
        void* field_112;
        uint8_t _unknown_120[1580240];
        uint8_t field_1580360;
        uint8_t _unknown_1580361[7];
        void* field_1580368;
        uint8_t field_1580376;
        uint8_t _unknown_1580377[7];
        StaticPointLight field_1580384;
        uint8_t _unknown_1580552[14439584];
        GraphicsApp* field_16020136;
    };

    class OSRenderCore_RenderThread_Common {
    public:
        uint32_t GetNumVerts() const;
        uint64_t GetConstRenderStateNXT() const;
        uint64_t GetRenderStateNXT();
        OSRenderCore_RenderThread_Common();
        void SetThreadID();
        void ShowUI(bool arg1);
        void ShowSkybox(bool arg1);
        void SetRenderViewRect(int arg1, int arg2, int arg3, int arg4);
        bool IsRenderContextReady();
        bool IsRenderThread() const;

    private:
        uint8_t _unknown_0[48];
        uint32_t field_48;
        uint8_t _unknown_52[28];
        uint64_t field_80;
        uint64_t m_renderStateNXT;
        long field_96;
        uint64_t field_104;
        int field_112;
        int field_116;
        uint8_t _unknown_120[4];
    };

    class OSRenderCore_RenderThread_JavaStyle {
    public:
        class VertexBufferSection;
        OSRenderCore_RenderThread_JavaStyle();
        ~OSRenderCore_RenderThread_JavaStyle();
        void PaintJavaStyle(render::RenderContext& renderContext);
        void DrawSkybox(render::RenderContext& renderContext);
        void DrawTriangles(render::RenderContext& renderContext);
        void GetBrightnessAdjustedHSL(signed char arg1, signed char arg2, signed char arg3);
        void UploadTexture(unsigned char arg1, const unsigned char* arg2);
        void UploadColTab(const unsigned char* arg1);
        void GetNextWriteVB();
        void UploadVertexBuffer(bool arg1);
        void SetupDepthStencils(bool arg1);
        void SetTriangleShaderUniforms(render::ShaderProgram& shaderProgram);
        void SetTriangleShader(render::ShaderProgram& shaderProgram, render::DrawCallState& drawCallState);
        uint8_t* GetNxtUploadedModels();
        bool ShouldUseRenderTargets();
        void SetDepthBufferEnabled(bool arg1);
        OSRenderCore_RenderThread_JavaStyle* Instance();

    private:
        void* field_0;
        uint8_t field_8;
        uint8_t _unknown_9[7];
        VBOMapper field_16;
        uint8_t _unknown_48[14427024];
        float field_14427072;
        float field_14427076;
        uint8_t _unknown_14427080[12632];
    };

    class OSRenderCore_RenderThread_JavaStyle::VertexBufferSection {
    public:
        VertexBufferSection();
        VertexBufferSection(VertexBufferSection&& vertexBufferSection);

    private:
        uint64_t field_0;
        uint32_t field_8;
        UISceneSettings field_12;
        uint8_t _unknown_36[8];
        Callstack field_44;
    };

    class OSRenderCore_RenderThread_RSeven {
    public:
        OSRenderCore_RenderThread_RSeven();
        ~OSRenderCore_RenderThread_RSeven();
        void InitRSeven(int arg1);
        void InitialiseEffects();
        void PaintRSeven(render::RenderContext& renderContext);
        void ProcessModelUpdates(const shared_ptr<RenderState::ModelSubmissionRSeven>* modelSubmissionRSeven1,
                                 const shared_ptr<RenderState::ModelSubmissionRSeven>* modelSubmissionRSeven2);
        void ProcessLightUpdates(const RenderState::LightSubmissionRSeven* lightSubmissionRSeven1,
                                 const RenderState::LightSubmissionRSeven* lightSubmissionRSeven2);
        void ProcessOverlayUpdates(RenderState::OverlayRSeven* overlayRSeven1,
                                   RenderState::OverlayRSeven* overlayRSeven2);
        void DestroyRSeven();
        void ApplyRSevenOptions(RenderState::RSevenOptions& rSevenOptions);
        void UpdateHorizonEffects();
        void UpdateSkybox();
        void UpdateFog();
        void ClearRenderTargetsIfNecessary(render::RenderContext& renderContext,
                                           const render::RenderTargets* renderTargets, bool arg3);
        void CheckRebuild();
        void GetEffectManager();
        void UpdateGamma(float arg1);
        void UpdateGBufferRenderTargets();
        OSRenderCore_RenderThread_RSeven* Instance();

    private:
        void* field_0;
        uint8_t _unknown_8[24];
        Js5ArchiveSettings field_32;
        uint8_t _unknown_96[8];
        int field_104;
        uint8_t _unknown_108[4];
        OSRenderCore_RenderThread_Common field_112;
    };

    class OSRenderCore_RenderThread_UI {
    public:
        OSRenderCore_RenderThread_UI();
        ~OSRenderCore_RenderThread_UI();
        void NewFrame2D();
        void EndFrame2D();
        void DrawUI(render::RenderContext& renderContext);
        void UploadUIRect(unsigned int* arg1, int arg2, int arg3, int arg4, int arg5);
        void ClearUIRect(int arg1, int arg2, int arg3, int arg4);
        void UploadUI(unsigned int* arg1);
        void SetScaledUIQuality(ScaledUIQuality scaledUIQuality);
        void SetUISize(unsigned int arg1, unsigned int arg2);
        void SetUIViewRect(int arg1, int arg2, int arg3, int arg4);
        void ClearPixelBuffer(unsigned int* arg1, unsigned int arg2);

    private:
        void* field_0;
        GridRect field_8;
        uint8_t _unknown_28[1578900];
        ScaledUIQuality m_scaledUIQuality;
        uint8_t _unknown_1578932[1308];
        ReturnValue field_1580240;
    };

    // 0x10004f330
    void OSRenderCore_LogicThread_Common::SetFullScreen(bool arg1) {
        uint8_t* pbVar1;
        long lVar2;

        if (((field_0 + 19677552))->GetIsFullScreen(*((field_0 + 19677508))) != arg1) {
            lVar2 = field_0;
            *(bool*)(lVar2 + 19677534) = arg1;
            pbVar1 = (uint8_t*)(lVar2 + 19677544);
            *pbVar1 = *pbVar1 | 16;
        }
    }

    // 0x10004fb00
    void OSRenderCore_LogicThread_Common::SetAntialiasingSampleLevel(int arg1) {
        long lVar2 = field_0;
        *(int*)(lVar2 + 19677536) = arg1;
        uint8_t* pbVar1 = (uint8_t*)(lVar2 + 19677544);
        *pbVar1 = *pbVar1 | 64;
    }

    // 0x1001b8a30
    unsigned int OSRenderCore_RenderThread::GetAtlasUV(int arg1) {
        unsigned int uVar1 = arg1 + 16;
        if (-1 < (int)(arg1 + 1U)) {
            uVar1 = arg1 + 1U;
        }
        return (((int)uVar1 >> 4) << 8 | (arg1 - (uVar1 & 4294967280)) + 1) & 65535;
    }

    // 0x1001b8a60
    uint64_t OSRenderCore_RenderThread_Common::GetConstRenderStateNXT() const {
        return m_renderStateNXT;
    }

    // 0x1001b8a60, the same machine code as OSRenderCore_RenderThread_Common::GetConstRenderStateNXT() const
    uint64_t OSRenderCore_RenderThread_Common::GetRenderStateNXT() {
        return m_renderStateNXT;
    }

    // 0x1001b8a80
    int OSRenderCore_RenderThread::GetLocalU(float arg1, int arg2) {
        return (int)(short)((short)(int)(arg1 * 128.0) + (short)arg2);
    }

    // 0x1001bb130
    OSRenderCore_LogicThread::OSRenderCore_LogicThread() {
        new (field_16) OSRenderCore_LogicThread_RSeven();
    }

    // 0x1001bb300
    OSRenderCore_LogicThread::~OSRenderCore_LogicThread() {
        field_16->~OSRenderCore_LogicThread_RSeven();
    }

    // 0x1001bbb20
    OSRenderCore_RenderThread_UI::OSRenderCore_RenderThread_UI() {
        new (field_8) shared_ptr();
        new ((field_8 + 16)) RoundRobin<eastl::fixed_vector<jag::math::Vector2T<float>, 98304ul>, 2ul>();
        new (&field_1572984) RoundRobin<render::VertexBuffer, 2ul>();
        new (&field_1573160) render::InputAssemblerState();
        new (&field_1573360) render::ShaderProgram("");
        new (&field_1575216) render::ShaderProgram("");
        new (&field_1577072) render::ShaderProgram("");
        new (&field_1578944) RoundRobin<render::Texture2D, 2ul>();
        new (&field_1579984) RoundRobin<render::PixelUnpackBuffer, 2ul>();
        new (&field_1580160) RoundRobin<eastl::vector<bool>, 2ul>();
        *(uint64_t*)field_1580240 = 0;
        *(uint8_t*)&this[1].field_0 = 0;
    }

    // 0x1001bbc80
    OSRenderCore_RenderThread_JavaStyle::OSRenderCore_RenderThread_JavaStyle() : field_8(0) {
        hash<int> local_40;
        equal_to<int> local_38;

        make_shared<render::RenderTargets>((ReturnValue*)&field_48);
        new (&field_64) render::TextureRenderBuffer("Renderbuffer");
        new (&field_576) render::TextureRenderBuffer("Renderbuffer");
        make_shared<render::RenderTargets>((ReturnValue*)&field_1088);
        new (&field_1104) render::Texture2D("Texture2D");
        new (&field_1616) render::Texture2D("Texture2D");
        new (&field_2128) render::Texture2D("Texture2D");
        new (&field_2640) render::VertexBuffer();
        new (&field_2720) render::ShaderProgram("");
        new (&field_4576) RoundRobin<eastl::vector<render::VertexBuffer>, 2ul>();
        new (&field_4656) eastl::vector<render::VertexBuffer>();
        new (&field_4688) render::InputAssemblerState();
        new (&field_4880) render::ShaderProgram("");
        new (&field_6736) render::ShaderProgram("");
        new (&field_8592)
            eastl::fixed_hash_map<int, Model, 32768ul, 32769ul, true, eastl::hash<int>, eastl::equal_to<int>, false>(
                local_40, local_38);
        field_14427072 = 75.0;
        field_14427076 = 10000.0;
        new (&field_14427080)
            RoundRobin<eastl::fixed_vector<OSRenderCore_RenderThread_JavaStyle::VertexBufferSection, 128ul>, 2ul>();
        new (&field_14439464) render::DepthStencilState();
        new (&field_14439524) render::DepthStencilState();
        new (&field_14439584) render::DepthStencilState();
        new (&field_14439644) render::DepthStencilState();
        new (&field_14439704) render::DepthStencilState();
    }

    // 0x1001bc010
    OSRenderCore_RenderThread_UI::~OSRenderCore_RenderThread_UI() {
        field_1580160.~RoundRobin();
        field_1579984.~RoundRobin();
        field_1578944.~RoundRobin();
        field_1577072.~ShaderProgram();
        field_1575216.~ShaderProgram();
        field_1573360.~ShaderProgram();
        field_1573160.~InputAssemblerState();
        field_1572984.~RoundRobin();
        ((field_8 + 16))->~RoundRobin();
    }

    // 0x1001bc0a0
    OSRenderCore_RenderThread_RSeven::~OSRenderCore_RenderThread_RSeven() {
        field_96.~unique_ptr();
        field_24.~unique_ptr();
        field_16.~unique_ptr();
        field_8.~unique_ptr();
    }

    // 0x1001bc0e0
    OSRenderCore_RenderThread_JavaStyle::~OSRenderCore_RenderThread_JavaStyle() {
        field_14439704.~DepthStencilState();
        field_14439644.~DepthStencilState();
        field_14439584.~DepthStencilState();
        field_14439524.~DepthStencilState();
        field_14439464.~DepthStencilState();
        field_14427080.~RoundRobin();
        field_8592.~fixed_hash_map();
        field_6736.~ShaderProgram();
        field_4880.~ShaderProgram();
        field_4688.~InputAssemblerState();
        field_4656.~vector();
        field_4576.~RoundRobin();
        field_2720.~ShaderProgram();
        field_2640.~VertexBuffer();
        field_2128.~Texture2D();
        field_1616.~Texture2D();
        field_1104.~Texture2D();
        field_1088.~shared_ptr();
        field_576.~TextureRenderBuffer();
        field_64.~TextureRenderBuffer();
        field_48.~shared_ptr();
        field_16->~VBOMapper();
    }

    // 0x1003659e0
    OSRenderCore_LogicThread_JavaStyle* OSRenderCore_LogicThread_JavaStyle::Instance() {
        return (OSRenderCore_LogicThread_JavaStyle*)OSRenderCore_AudioThread::Instance();
    }

    // 0x1003659f0
    void OSRenderCore_LogicThread_JavaStyle::UploadModel(
        unsigned int arg1, unsigned int arg2, unsigned int arg3, unsigned int arg4, bool arg5, const int* arg6,
        const int* arg7, const int* arg8, const int* arg9, const int* arg10, const int* arg11, const int* arg12,
        const int* arg13, const int* arg14, const int* arg15, const int* arg16, const int* arg17,
        const unsigned char* arg18, const short* arg19, const unsigned char* arg20, const signed char* arg21,
        const int* arg22, const int* arg23, signed char arg24, signed char arg25, signed char arg26,
        unsigned char arg27, unsigned short arg28) {
        long lVar1 = ((Layout*)((long)&field_0 + *(long*)(field_0 - 24)))->HeapBeginPtr();
        Model local_1e0;
        pair<int, Model>* ppVar2 = ((lVar1 + 3539024))->emplace_back<unsigned int&, Model>(arg1, local_1e0);
        ((ppVar2 + 8))
            ->Init(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15,
                   arg16, arg17, arg18, arg19, arg20, arg21, arg22, arg23, arg24, arg25, arg26, arg27, arg28);
    }

    // 0x100365bf0
    void OSRenderCore_LogicThread_JavaStyle::DestroyModel(int arg1) {
        long lVar1 = ((Layout*)((long)&field_0 + *(long*)(field_0 - 24)))->HeapBeginPtr();
        ((lVar1 + 17432696))->emplace_back<int&>(arg1);
    }

    // 0x100365ca0
    uint64_t OSRenderCore_LogicThread_JavaStyle::ModelLitWorldRender(int arg1, long long arg2, int arg3, int arg4,
                                                                     int arg5, int arg6, int arg7, int arg8, int arg9,
                                                                     int arg10, int arg11, int arg12, int arg13,
                                                                     int arg14, bool arg15, bool arg16,
                                                                     const RenderableOverlay& renderableOverlay) {
        Renderable* pRVar2;
        UISceneSettings* this_00;

        long lVar3 = field_0;
        long lVar1 = *(long*)(lVar3 - 24);
        if (*(char*)((long)&this[1].field_0 + lVar1) != '\0') {
            *(uint8_t*)((long)&this[1].field_0 + lVar1) = 0;
            lVar3 = *(long*)(lVar3 - 24);
            lVar1 = ((Layout*)((long)&field_0 + lVar3))->HeapBeginPtr();
            pRVar2 = ((lVar1 + 40))->emplace_back<RenderableType>((RenderableType)2);
            this_00 = (UISceneSettings*)pRVar2->y();
            *this_00 = (*((&field_16 + lVar3)));
        }
        lVar3 = ((Layout*)((long)&field_0 + *(long*)(field_0 - 24)))->HeapBeginPtr();
        pRVar2 = ((lVar3 + 40))->emplace_back<RenderableType>((RenderableType)0);
        auto piVar4 = pRVar2->y();
        *piVar4 = arg1;
        *(long long*)(piVar4 + 1) = arg2;
        piVar4[3] = arg3;
        piVar4[4] = arg4;
        piVar4[5] = arg5;
        piVar4[6] = arg6;
        piVar4[7] = arg7;
        piVar4[8] = arg8;
        piVar4[9] = arg9;
        piVar4[10] = arg10;
        piVar4[11] = arg11;
        piVar4[12] = arg12;
        piVar4[13] = arg13;
        piVar4[14] = arg14;
        *(bool*)(piVar4 + 15) = arg15;
        *(bool*)((long)piVar4 + 61) = arg16;
        *(uint32_t*)((long)piVar4 + 62) = *(uint32_t*)renderableOverlay;
        *(RenderableOverlay*)((long)piVar4 + 66) = renderableOverlay[4];
        return 1;
    }

    // 0x1003670b0
    OSRenderCore_RenderThread_JavaStyle* OSRenderCore_RenderThread_JavaStyle::Instance() {
        auto pOVar1 = OSRenderCore_RenderThread::Instance();
        return (OSRenderCore_RenderThread_JavaStyle*)&pOVar1->field_1580368;
    }

    // 0x1003672a0
    bool OSRenderCore_RenderThread_Common::IsRenderThread() const {
        long lVar1 = field_96;
        long lVar2 = this_thread::GetThreadID();
        return lVar1 == lVar2;
    }

    // 0x100367ac0
    OSRenderCore_RenderThread_RSeven* OSRenderCore_RenderThread_RSeven::Instance() {
        auto pOVar2 = OSRenderCore_RenderThread::Instance();
        if (((OSRenderCore_RenderThread_Common*)(pOVar2->field_32 + (long)(pOVar2->_vptr[-3].GetUISize - 32)))
                ->IsRenderThread() == '\0') {
            LogAssert("OSRenderCore_RenderThread::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                      "OSRenderCore.h",
                      973, "The RT7 renderer may only be accessed from the render thread.");
        }
        pOVar2 = OSRenderCore_RenderThread::Instance();
        return (OSRenderCore_RenderThread_RSeven*)pOVar2;
    }

} // namespace jag::oldscape

namespace jag {
    // 0x100053d70
    int tolower(char arg1) {
        uint32_t in_register_00000039;

        bool cVar1 = ::tolower((((uint32_t)in_register_00000039 << 8) | (uint8_t)arg1));
        return (int)cVar1;
    }

    // 0x100054db0
    void LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::Unlink() {
        long lVar1 = *(long*)(this + 40);
        *(uint64_t*)(lVar1 + 48) = *(uint64_t*)(this + 48);
        *(long*)(*(long*)(this + 48) + 40) = lVar1;
    }

    // 0x100054f80
    void LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::InsertAfter(
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>& lruHashCacheWrapper) {
        long lVar1 = *(long*)(lruHashCacheWrapper + 48);
        *(LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>**)(lVar1 + 40) = this;
        *(long*)(this + 48) = lVar1;
        *(LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>**)(lruHashCacheWrapper + 48) = this;
        *(LRUHashCacheWrapper<oldscape::ClientScript, unsigned long long>**)(this + 40) = lruHashCacheWrapper;
    }

    // 0x1001b9500
    bool IsInsideTriangle(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7, int arg8) {
        if ((((arg3 <= arg2) || (arg4 <= arg2)) || (arg5 <= arg2)) &&
            (((arg2 <= arg3 || (arg2 <= arg4)) || (arg2 <= arg5)))) {
            if (((arg6 <= arg1) || (arg7 <= arg1)) || (arg8 <= arg1)) {
                return arg1 <= arg8 || (arg1 <= arg7 || arg1 <= arg6);
            }
        }
        return false;
    }

    // 0x1001b98c0
    void CopyJavaArray<int, int const>(Array<int>& arg1, const int* arg2, unsigned int arg3, bool arg4) {
        void* pvVar1;
        long lVar2;

        if (arg2 == nullptr) {
            if (arg4) {
                arg1.set_max_size(0, 5);
            }
        } else {
            arg1.set_min_size((unsigned long)arg3, 5);
            pvVar1 = (void*)arg1.data();
            lVar2 = arg1.end();
            _memcpy(pvVar1, arg2, lVar2 * 4);
        }
    }

    // 0x1001b9930
    void CopyJavaArray<signed char, signed char const>(Array<signed char>& arg1, const signed char* arg2,
                                                       unsigned int arg3, bool arg4) {
        void* pvVar1;
        size_t sVar2;

        if (arg2 == nullptr) {
            if (arg4) {
                arg1.set_max_size(0, 5);
            }
        } else {
            arg1.set_min_size((unsigned long)arg3, 5);
            pvVar1 = (void*)arg1.data();
            sVar2 = arg1.end();
            _memcpy(pvVar1, arg2, sVar2);
        }
    }

    // 0x1001b99a0
    void CopyJavaArray<short, short const>(Array<short>& arg1, const short* arg2, unsigned int arg3, bool arg4) {
        void* pvVar1;
        long lVar2;

        if (arg2 == nullptr) {
            if (arg4) {
                arg1.set_max_size(0, 5);
            }
        } else {
            arg1.set_min_size((unsigned long)arg3, 5);
            pvVar1 = (void*)arg1.data();
            lVar2 = arg1.end();
            _memcpy(pvVar1, arg2, lVar2 * 2);
        }
    }

    // 0x1001b9a10
    void CopyJavaArray<unsigned char, unsigned char const>(Array<unsigned char>& arg1, const unsigned char* arg2,
                                                           unsigned int arg3, bool arg4) {
        void* pvVar1;
        size_t sVar2;

        if (arg2 == nullptr) {
            if (arg4) {
                arg1.set_max_size(0, 5);
            }
        } else {
            arg1.set_min_size((unsigned long)arg3, 5);
            pvVar1 = (void*)arg1.data();
            sVar2 = arg1.end();
            _memcpy(pvVar1, arg2, sVar2);
        }
    }

    // 0x1001bafe0
    void operator==(const TintMode& tintMode1, const TintMode& tintMode2) {
        return *(int*)tintMode1 == *(int*)tintMode2;
    }

    // 0x1001baff0
    uint8_t operator!=(const TintMode& tintMode1, const TintMode& tintMode2) {
        return tintMode1 == tintMode2 ^ 1;
    }

} // namespace jag

namespace jag::oldscape::option::transforms {
    template <typename...> // 2 instantiations, e.g. <bool>, <float>
    class IntegerToValueTypeTransform {
    public:
        bool IntegerToValueType(int arg1);
        void ValueTypeToInteger(bool arg1);
        float IntegerToValueType(int arg1);
        void ValueTypeToInteger(float arg1);
    };

    // 0x100051ab0
    float IntegerToValueTypeTransform<float>::IntegerToValueType(int arg1) {
        return (float)arg1 * 0.01;
    }

    // 0x100051ad0
    void IntegerToValueTypeTransform<float>::ValueTypeToInteger(float arg1) {
        jag::math::RoundFloatToInt(arg1 * 100.0);
    }

} // namespace jag::oldscape::option::transforms

namespace jag::math {
    // 0x100051580
    Range<float>::Range(float arg1, float arg2) {
        *(float*)this = arg1;
        *(float*)(this + 4) = arg2;
    }

    // 0x100051680
    float Range<float>::GetMin() const {
        return m_overbright;
    }

    // 0x100051690
    float Range<float>::GetMax() const {
        return m_alpha;
    }

} // namespace jag::math

namespace jag::oldscape::option {
    // 0x100051250
    void OptionEnumValueSerialiser<ChatTimestampMode>::StringToValue(const eastl::fixed_string<char, 256>& str) {
        ChatTimestampMode local_10;

        FromString<eastl::fixed_string<char, 64>, int>(str, (int*)&local_10, 10);
        bool local_9 = IsValidEnumValue<ChatTimestampMode>((type*)(unsigned long)local_10);
        ChatTimestampMode local_14 = local_10;
        std::make_tuple<bool const&, ChatTimestampMode>(local_9, local_14);
    }

    // 0x100051490
    auto OptionEnumValueSerialiser<ChatTimestampMode>::ValueToString(ChatTimestampMode chatTimestampMode) {
        auto result;
        ToText<256, true>(&result, chatTimestampMode, 10);
        return result;
    }

} // namespace jag::oldscape::option

namespace jag::game {
    // 0x100051690: EnvBloomSettings::GetBloomCoefficient() const has the same machine code as math::Range<float>::GetMax() const

    // 0x100051690: Cutscene2DPlaybackState::GetElapsedTimeSec() const has the same machine code as math::Range<float>::GetMax() const

} // namespace jag::game

namespace jag::render {
    // 0x100051690: VertexArrayObject::GetLastUsageSeconds() const has the same machine code as math::Range<float>::GetMax() const

} // namespace jag::render

namespace jag::oldscape::rseven {
    // 0x1001b8a60: OSRenderCore_TextureDataProvider::GetTexturesCompressedETCArchive() const has the same machine code as OSRenderCore_RenderThread_Common::GetConstRenderStateNXT() const

} // namespace jag::oldscape::rseven
