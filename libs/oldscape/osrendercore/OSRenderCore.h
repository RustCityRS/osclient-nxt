// libs/oldscape/osrendercore/OSRenderCore.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::oldscape {
    class NoJs5ResourceProvider {
    public:
        // virtual methods in vtable order
        virtual ~NoJs5ResourceProvider();
        virtual IndexReady(Js5ArchiveSettings const&);
        virtual EnsureArchiveLoadedIfAvailableOnDisk(Js5ArchiveSettings const&);
        NoJs5ResourceProvider();
        GroupPreloaded(Js5ArchiveSettings const&, unsigned int, bool, bool&);
        GetIndex(Js5Index const**, Js5ArchiveSettings const&);
        GetIndex(Js5Index**, Js5ArchiveSettings const&);
        FileReady(Js5ArchiveSettings const&, unsigned int, unsigned int, Priority const*, bool);
        GetMasterIndex(Js5MasterIndex const**) const;

        // data members, from how the methods use this: 3649 bytes
        undefined** field_0; // offset 0, vtable pointer
        shared_ptr field_8;  // offset 8
        char _unknown_24[16];
        undefined4 field_40; // offset 40
        undefined4 field_44; // offset 44
        char _unknown_48[32];
        Js5ArchiveSetSettings* field_80; // offset 80
        char _unknown_88[16];
        BigInteger* field_104; // offset 104
        BigInteger* field_112; // offset 112
        undefined1 field_120;  // offset 120
        char _unknown_121[7];
        Array<eastl::string, eastl::allocator>* field_128; // offset 128
        Array<std::unique_ptr<Js5LocalModeLoader, std::default_delete<Js5LocalModeLoader>>, eastl::allocator>*
            field_136;             // offset 136
        Js5MemoryCache* field_144; // offset 144
        Js5DiskCache* field_152;   // offset 152
        char _unknown_160[3489];
    };

    class OSRenderCore_AudioThread {
    public:
        Instance();
        void WriteAudioSamples(hal::audio::AudioBuffer&);
        uint GetAudioBufferSampleSize();
        GetNumberSamplesInAudioBuffer();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    class OSRenderCore_Impl {
    public:
        // virtual methods in vtable order
        virtual void TexturesUploaded();
        virtual void GetAudioAPI();
        virtual void FlipThreadRenderStates();
        virtual void OnResourcesCreatedOrDestroyed(bool);
        OSRenderCore_Impl(GraphicsApp&);
        ~OSRenderCore_Impl();
        void LockAudio();
        void UnlockAudio();
        void ResumeAudio();
        static /* 8 bytes */ m_pCore;

        // data members, from how the methods use this: 55398780 bytes
        NpcUID* field_0; // offset 0, vtable pointer
        char _unknown_8[8];
        OSRenderCore_LogicThread_RSeven field_16; // offset 16
        char _unknown_696[8];
        undefined4 field_704; // offset 704
        undefined4 field_708; // offset 708
        char _unknown_712[104];
        undefined** field_816; // offset 816
        char _unknown_824[1580248];
        undefined* field_1581072; // offset 1581072
        char _unknown_1581080[14439768];
        OSRenderCore_AnyThread field_16020848; // offset 16020848
        char _unknown_16020856[39377744];
        OSRenderCore_LogicThread_Common field_55398600; // offset 55398600
        char _unknown_55398649[7];
        OSRenderCore_RenderThread_Common field_55398656; // offset 55398656
    };

    class OSRenderCore_LogicThread {
    public:
        Instance();
        OSRenderCore_LogicThread();
        ~OSRenderCore_LogicThread();
        void DestroyResources();

        // data members, from how the methods use this: 696 bytes
        NpcUID* field_0; // offset 0
        char _unknown_8[8];
        OSRenderCore_LogicThread_RSeven field_16; // offset 16
    };

    class OSRenderCore_LogicThread_JavaStyle {
    public:
        OSRenderCore_LogicThread_JavaStyle();
        void SetTextureOffsets(int const*, int const*, int);
        void RenderTriangle(short, short, short, short, short, short, short, short, short, short, short, short, short,
                            short, short, short, short, short, short, short, short, short, short, short);
        void Instance();
        void UploadModel(unsigned int, unsigned int, unsigned int, unsigned int, bool, int const*, int const*,
                         int const*, int const*, int const*, int const*, int const*, int const*, int const*, int const*,
                         int const*, int const*, unsigned char const*, short const*, unsigned char const*,
                         signed char const*, int const*, int const*, signed char, signed char, signed char,
                         unsigned char, unsigned short);
        void DestroyModel(int);
        ModelLitWorldRender(int, long long, int, int, int, int, int, int, int, int, int, int, int, int, bool, bool,
                            RenderableOverlay const&);

        // data members, from how the methods use this: 48 bytes
        long field_0; // offset 0
        char _unknown_8[40];
    };

    class OSRenderCore_RenderThread {
    public:
        // virtual methods in vtable order
        virtual void GetUISize(unsigned int&, unsigned int&);
        long Instance();
        uint GetAtlasUV(int);
        int GetLocalU(float, int);
        OSRenderCore_RenderThread(GraphicsApp&);
        ~OSRenderCore_RenderThread();
        void Init();
        void MainLogic();
        void NewFrame3D();
        void EndFrame3D();
        void Paint();
        void PaintDirect();
        void UpdateRenderTargetSizes(render::RenderContext const&);
        void SetSkyboxColour(jag::math::Vector4T<float>);
        void SetFogParams(float, float);
        void SetScreenSize(unsigned int, unsigned int);
        void UploadBuffers(bool);
        void CreateRenderingResources();
        void DestroyRenderingResources();
        void UpdateWindowProperties();
        void ApplyWindowSetOptions();
        void OnBeginFrame();
        GetFrameCount();
        void GetRT7Core();

        // data members, from how the methods use this: 16020144 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[24];
        Js5ArchiveSettings field_32; // offset 32
        char _unknown_96[8];
        int field_104; // offset 104
        char _unknown_108[4];
        OSRenderCore_RenderThread_UI field_112; // offset 112
        undefined1 field_1580360;               // offset 1580360
        char _unknown_1580361[7];
        undefined8 field_1580368; // offset 1580368
        undefined1 field_1580376; // offset 1580376
        char _unknown_1580377[7];
        StaticPointLight field_1580384; // offset 1580384
        char _unknown_1580552[904];
        shared_ptr field_1581456; // offset 1581456
        char _unknown_1581472[14438664];
        GraphicsApp* field_16020136; // offset 16020136
    };

    class OSRenderCore_RenderThread_Common {
    public:
        GetNumVerts() const;
        GetConstRenderStateNXT() const;
        GetRenderStateNXT();
        OSRenderCore_RenderThread_Common();
        void SetThreadID();
        void ShowUI(bool);
        void ShowSkybox(bool);
        void SetRenderViewRect(int, int, int, int);
        bool IsRenderContextReady();
        bool IsRenderThread() const;

        // data members, from how the methods use this: 124 bytes
        char _unknown_0[48];
        undefined4 field_48; // offset 48
        char _unknown_52[28];
        undefined8 field_80;         // offset 80
        undefined8 m_renderStateNXT; // offset 88
        long field_96;               // offset 96
        undefined8 field_104;        // offset 104
        int field_112;               // offset 112
        int field_116;               // offset 116
        char _unknown_120[4];
    };

    class OSRenderCore_RenderThread_JavaStyle {
    public:
        class VertexBufferSection;
        OSRenderCore_RenderThread_JavaStyle();
        ~OSRenderCore_RenderThread_JavaStyle();
        void PaintJavaStyle(render::RenderContext&);
        void DrawSkybox(render::RenderContext&);
        void DrawTriangles(render::RenderContext&);
        void GetBrightnessAdjustedHSL(signed char, signed char, signed char);
        void UploadTexture(unsigned char, unsigned char const*);
        void UploadColTab(unsigned char const*);
        void GetNextWriteVB();
        void UploadVertexBuffer(bool);
        void SetupDepthStencils(bool);
        void SetTriangleShaderUniforms(render::ShaderProgram&);
        void SetTriangleShader(render::ShaderProgram&, render::DrawCallState&);
        GetNxtUploadedModels();
        ShouldUseRenderTargets();
        void SetDepthBufferEnabled(bool);
        long Instance();

        // data members, from how the methods use this: 14439712 bytes
        undefined8 field_0; // offset 0
        undefined1 field_8; // offset 8
        char _unknown_9[7];
        VBOMapper field_16; // offset 16
        char _unknown_48[14427024];
        float field_14427072; // offset 14427072
        float field_14427076; // offset 14427076
        char _unknown_14427080[12632];
    };

    class OSRenderCore_RenderThread_JavaStyle::VertexBufferSection {
    public:
        VertexBufferSection();
        VertexBufferSection(VertexBufferSection&&);

        // data members, from how the methods use this: 60 bytes
        undefined8 field_0;       // offset 0
        undefined4 field_8;       // offset 8
        UISceneSettings field_12; // offset 12
        char _unknown_36[8];
        Callstack field_44; // offset 44
    };

    class OSRenderCore_RenderThread_RSeven {
    public:
        OSRenderCore_RenderThread_RSeven();
        ~OSRenderCore_RenderThread_RSeven();
        void InitRSeven(int);
        void InitialiseEffects();
        void PaintRSeven(render::RenderContext&);
        void ProcessModelUpdates(shared_ptr<RenderState::ModelSubmissionRSeven> const*,
                                 shared_ptr<RenderState::ModelSubmissionRSeven> const*);
        void ProcessLightUpdates(RenderState::LightSubmissionRSeven const*, RenderState::LightSubmissionRSeven const*);
        void ProcessOverlayUpdates(RenderState::OverlayRSeven*, RenderState::OverlayRSeven*);
        void DestroyRSeven();
        void ApplyRSevenOptions(RenderState::RSevenOptions&);
        void UpdateHorizonEffects();
        void UpdateSkybox();
        void UpdateFog();
        void ClearRenderTargetsIfNecessary(render::RenderContext&, render::RenderTargets const*, bool);
        void CheckRebuild();
        void GetEffectManager();
        void UpdateGamma(float);
        void UpdateGBufferRenderTargets();
        void Instance();

        // data members, from how the methods use this: 236 bytes
        undefined* field_0; // offset 0
        char _unknown_8[24];
        Js5ArchiveSettings field_32; // offset 32
        char _unknown_96[8];
        int field_104; // offset 104
        char _unknown_108[4];
        OSRenderCore_RenderThread_Common field_112; // offset 112
    };

    class OSRenderCore_RenderThread_UI {
    public:
        OSRenderCore_RenderThread_UI();
        ~OSRenderCore_RenderThread_UI();
        void NewFrame2D();
        void EndFrame2D();
        void DrawUI(render::RenderContext&);
        void UploadUIRect(unsigned int*, int, int, int, int);
        void ClearUIRect(int, int, int, int);
        void UploadUI(unsigned int*);
        void SetScaledUIQuality(ScaledUIQuality);
        void SetUISize(unsigned int, unsigned int);
        void SetUIViewRect(int, int, int, int);
        void ClearPixelBuffer(unsigned int*, unsigned int);

        // data members, from how the methods use this: 1580248 bytes
        undefined** field_0; // offset 0
        GridRect field_8;    // offset 8
        char _unknown_28[1578900];
        int field_1578928; // offset 1578928
        char _unknown_1578932[1308];
        undefined8 field_1580240; // offset 1580240
    };

    // 0x10004f330, 64 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread_Common::SetFullScreen(bool)
    void OSRenderCore_LogicThread_Common::SetFullScreen(bool param_1) {
        byte* pbVar1;
        long lVar2;
        char cVar3;

        cVar3 = ((field_0 + 19677552), (WindowSetOptions*)(field_0 + 19677508))->GetIsFullScreen();
        if ((bool)cVar3 != param_1) {
            lVar2 = field_0;
            *(bool*)(lVar2 + 19677534) = param_1;
            pbVar1 = (byte*)(lVar2 + 19677544);
            *pbVar1 = *pbVar1 | 16;
        }
    }

    // 0x10004fb00, 32 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread_Common::SetAntialiasingSampleLevel(int)
    void OSRenderCore_LogicThread_Common::SetAntialiasingSampleLevel(int param_1) {
        byte* pbVar1;
        long lVar2;

        lVar2 = field_0;
        *(int*)(lVar2 + 19677536) = param_1;
        pbVar1 = (byte*)(lVar2 + 19677544);
        *pbVar1 = *pbVar1 | 64;
    }

    // 0x1001b8a30, 48 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread::GetAtlasUV(int)
    uint OSRenderCore_RenderThread::GetAtlasUV(int param_1) {
        uint uVar1;

        uVar1 = param_1 + 16;
        if (-1 < (int)(param_1 + 1U)) {
            uVar1 = param_1 + 1U;
        }
        return (((int)uVar1 >> 4) << 8 | (param_1 - (uVar1 & 4294967280)) + 1) & 65535;
    }

    // 0x1001b8a60, 16 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // OSRenderCore_RenderThread_Common::GetConstRenderStateNXT() const
    /* OSRenderCore_RenderThread_Common::GetRenderStateNXT() */

    undefined8 OSRenderCore_RenderThread_Common::GetRenderStateNXT() {
        return m_renderStateNXT;
    }

    // 0x1001b8a60: the linker folded this into OSRenderCore_RenderThread_Common::GetConstRenderStateNXT() const, which has identical code
    OSRenderCore_RenderThread_Common::GetRenderStateNXT();

    // 0x1001b8a80, 32 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_RenderThread::GetLocalU(float, int)
    int OSRenderCore_RenderThread::GetLocalU(float param_1, int param_2) {
        return (int)(short)((short)(int)(param_1 * 128.0) + (short)param_2);
    }

    // 0x1001bb130, 64 bytes, base-object constructor, inline, placed by class header (inline)
    // OSRenderCore_LogicThread::OSRenderCore_LogicThread()
    void OSRenderCore_LogicThread::OSRenderCore_LogicThread() {
        undefined8* in_RSI;

        new (this) eastl::generic_iterator<highlight::NpcUID*, void>((NpcUID**)(in_RSI + 1));
        new (field_16) OSRenderCore_LogicThread_RSeven();
        field_0 = (NpcUID*)*in_RSI;
        *(undefined8*)field_16 = in_RSI[3];
    }

    // 0x1001bb300, 32 bytes, base-object destructor, inline, placed by class header (inline)
    // OSRenderCore_LogicThread::~OSRenderCore_LogicThread()
    void OSRenderCore_LogicThread::~OSRenderCore_LogicThread() {
        field_16->~OSRenderCore_LogicThread_RSeven();
    }

    // 0x1001bbb20, 352 bytes, base-object constructor, inline, placed by class header (inline)
    // OSRenderCore_RenderThread_UI::OSRenderCore_RenderThread_UI()
    void OSRenderCore_RenderThread_UI::OSRenderCore_RenderThread_UI() {
        _func_decltype_nullptr* in_RSI;

        field_0 = *(undefined***)in_RSI;
        new (field_8, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new ((field_8 + 16))
            RoundRobin<eastl::fixed_vector<jag::math::Vector2T<float>, 98304ul, true, eastl::allocator>, 2ul>();
        new (&field_1572984) RoundRobin<render::VertexBuffer, 2ul>();
        new (&field_1573160) render::InputAssemblerState();
        new (&field_1573360, "") render::ShaderProgram();
        new (&field_1575216, "") render::ShaderProgram();
        new (&field_1577072, "") render::ShaderProgram();
        new (&field_1578944) RoundRobin<render::Texture2D, 2ul>();
        new (&field_1579984) RoundRobin<render::PixelUnpackBuffer, 2ul>();
        new (&field_1580160) RoundRobin<eastl::vector<bool, eastl::allocator>, 2ul>();
        field_1580240 = 0;
        *(undefined1*)&this[1].field_0 = 0;
    }

    // 0x1001bbc80, 912 bytes, base-object constructor, inline, placed by class header (inline)
    // OSRenderCore_RenderThread_JavaStyle::OSRenderCore_RenderThread_JavaStyle()
    void OSRenderCore_RenderThread_JavaStyle::OSRenderCore_RenderThread_JavaStyle() {
        undefined8* in_RSI;
        hash local_40[8];
        equal_to local_38[8];

        field_0 = *in_RSI;
        field_8 = 0;
        new (field_16) VBOMapper();
        make_shared<render::RenderTargets>((jag*)&field_48);
        new (&field_64, "Renderbuffer") render::TextureRenderBuffer();
        new (&field_576, "Renderbuffer") render::TextureRenderBuffer();
        make_shared<render::RenderTargets>((jag*)&field_1088);
        new (&field_1104, "Texture2D") render::Texture2D();
        new (&field_1616, "Texture2D") render::Texture2D();
        new (&field_2128, "Texture2D") render::Texture2D();
        new (&field_2640) render::VertexBuffer();
        new (&field_2720, "") render::ShaderProgram();
        new (&field_4576) RoundRobin<eastl::vector<render::VertexBuffer, eastl::allocator>, 2ul>();
        new (&field_4656) eastl::vector<render::VertexBuffer, eastl::allocator>();
        new (&field_4688) render::InputAssemblerState();
        new (&field_4880, "") render::ShaderProgram();
        new (&field_6736, "") render::ShaderProgram();
        new (&field_8592, local_40, local_38)
            eastl::fixed_hash_map<int, Model, 32768ul, 32769ul, true, eastl::hash<int>, eastl::equal_to<int>, false,
                                  eastl::allocator>();
        field_14427072 = 75.0;
        field_14427076 = 10000.0;
        new (&field_14427080) RoundRobin<eastl::fixed_vector<OSRenderCore_RenderThread_JavaStyle::VertexBufferSection,
                                                             128ul, true, eastl::allocator>,
                                         2ul>();
        new (&field_14439464) render::DepthStencilState();
        new (&field_14439524) render::DepthStencilState();
        new (&field_14439584) render::DepthStencilState();
        new (&field_14439644) render::DepthStencilState();
        new (&field_14439704) render::DepthStencilState();
    }

    // 0x1001bc010, 144 bytes, base-object destructor, inline, placed by class header (inline)
    // OSRenderCore_RenderThread_UI::~OSRenderCore_RenderThread_UI()
    void OSRenderCore_RenderThread_UI::~OSRenderCore_RenderThread_UI() {
        undefined8* in_RSI;

        field_0 = (undefined**)*in_RSI;
        (&field_1580160)->~RoundRobin();
        (&field_1579984)->~RoundRobin();
        (&field_1578944)->~RoundRobin();
        (&field_1577072)->~ShaderProgram();
        (&field_1575216)->~ShaderProgram();
        (&field_1573360)->~ShaderProgram();
        (&field_1573160)->~InputAssemblerState();
        (&field_1572984)->~RoundRobin();
        ((field_8 + 16))->~RoundRobin();
    }

    // 0x1001bc0a0, 64 bytes, base-object destructor, inline, placed by class header (inline)
    // OSRenderCore_RenderThread_RSeven::~OSRenderCore_RenderThread_RSeven()
    void OSRenderCore_RenderThread_RSeven::~OSRenderCore_RenderThread_RSeven() {
        undefined8* in_RSI;

        field_0 = (undefined*)*in_RSI;
        (&field_96)->~unique_ptr();
        (&field_24)->~unique_ptr();
        (&field_16)->~unique_ptr();
        (&field_8)->~unique_ptr();
    }

    // 0x1001bc0e0, 288 bytes, base-object destructor, inline, placed by class header (inline)
    // OSRenderCore_RenderThread_JavaStyle::~OSRenderCore_RenderThread_JavaStyle()
    void OSRenderCore_RenderThread_JavaStyle::~OSRenderCore_RenderThread_JavaStyle() {
        undefined8* in_RSI;

        field_0 = *in_RSI;
        (&field_14439704)->~DepthStencilState();
        (&field_14439644)->~DepthStencilState();
        (&field_14439584)->~DepthStencilState();
        (&field_14439524)->~DepthStencilState();
        (&field_14439464)->~DepthStencilState();
        (&field_14427080)->~RoundRobin();
        (&field_8592)->~fixed_hash_map();
        (&field_6736)->~ShaderProgram();
        (&field_4880)->~ShaderProgram();
        (&field_4688)->~InputAssemblerState();
        (&field_4656)->~vector();
        (&field_4576)->~RoundRobin();
        (&field_2720)->~ShaderProgram();
        (&field_2640)->~VertexBuffer();
        (&field_2128)->~Texture2D();
        (&field_1616)->~Texture2D();
        (&field_1104)->~Texture2D();
        (&field_1088)->~shared_ptr();
        (&field_576)->~TextureRenderBuffer();
        (&field_64)->~TextureRenderBuffer();
        (&field_48)->~shared_ptr();
        field_16->~VBOMapper();
    }

    // 0x1003659e0, 16 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread_JavaStyle::Instance()
    void OSRenderCore_LogicThread_JavaStyle::Instance() {
        OSRenderCore_AudioThread::Instance();
    }

    // 0x1003659f0, 432 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread_JavaStyle::UploadModel(unsigned int, unsigned int, unsigned int, unsigned int, bool, int const*, int const*, int const*, int const*, int const*, int const*, int const*, int const*, int const*, int const*, int const*, int const*, unsigned char const*, short const*, unsigned char const*, signed char const*, int const*, int const*, signed char, signed char, signed char, unsigned char, unsigned short)
    void OSRenderCore_LogicThread_JavaStyle::UploadModel(
        uint param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined1 param_5,
        undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10,
        undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, undefined8 param_15,
        undefined8 param_16, undefined8 param_17, undefined8 param_18, undefined8 param_19, undefined8 param_20,
        undefined8 param_21, undefined8 param_22, undefined8 param_23, char param_25, char param_26, char param_27,
        undefined1 param_28, undefined2 param_29) {
        long lVar1;
        pair* ppVar2;
        Model local_1e0;
        uint local_34;

        local_34 = param_1;
        lVar1 = (((long)&field_0 + *(long*)(field_0 + -24)))->HeapBeginPtr();
        new (&local_1e0) Model();
        ppVar2 = eastl::vector<eastl::pair<int, Model>,
                               eastl::fixed_vector_allocator<424ul, 32768ul, 8ul, 0ul, true, eastl::allocator>>::
            emplace_back<unsigned int&, Model>(
                (vector<eastl::pair<int, Model>,
                        eastl::fixed_vector_allocator<424ul, 32768ul, 8ul, 0ul, true, eastl::allocator>>*)(lVar1 +
                                                                                                           3539024),
                &local_34, &local_1e0);
        local_1e0.~Model();
        ((ppVar2 + 8))
            ->Init(local_34, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10, param_11,
                   param_12, param_13, param_14, param_15, param_16, param_17, param_18, param_19, param_20, param_21,
                   param_22, param_23, (int)param_25, (int)param_26, (int)param_27, param_28, param_29);
    }

    // 0x100365bf0, 48 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread_JavaStyle::DestroyModel(int)
    void OSRenderCore_LogicThread_JavaStyle::DestroyModel(int param_1) {
        long lVar1;
        int local_c;

        local_c = param_1;
        lVar1 = (((long)&field_0 + *(long*)(field_0 + -24)))->HeapBeginPtr();
        eastl::vector<int, eastl::fixed_vector_allocator<4ul, 32768ul, 4ul, 0ul, true, eastl::allocator>>::emplace_back<
            int&>(
            (vector<int, eastl::fixed_vector_allocator<4ul, 32768ul, 4ul, 0ul, true, eastl::allocator>>*)(lVar1 +
                                                                                                          17432696),
            &local_c);
    }

    // 0x100365ca0, 304 bytes, inline, placed by debug map only (low confidence)
    // OSRenderCore_LogicThread_JavaStyle::ModelLitWorldRender(int, long long, int, int, int, int, int, int, int, int, int, int, int, int, bool, bool, RenderableOverlay const&)
    undefined8 OSRenderCore_LogicThread_JavaStyle::ModelLitWorldRender(int param_1, longlong param_2, int param_3,
                                                                       int param_4, int param_5, int param_6,
                                                                       int param_7, int param_8, int param_9,
                                                                       int param_10, int param_11, int param_12,
                                                                       int param_13, int param_14, bool param_15,
                                                                       bool param_16, RenderableOverlay* param_17) {
        long lVar1;
        Renderable* pRVar2;
        UISceneSettings* this_00;
        long lVar3;
        int* piVar4;
        RenderableType local_32;
        RenderableType local_31;

        lVar3 = field_0;
        lVar1 = *(long*)(lVar3 + -24);
        if (*(char*)((long)&this[1].field_0 + lVar1) != '\0') {
            *(undefined1*)((long)&this[1].field_0 + lVar1) = 0;
            lVar3 = *(long*)(lVar3 + -24);
            lVar1 = (((long)&field_0 + lVar3))->HeapBeginPtr();
            local_32 = (RenderableType)2;
            pRVar2 = eastl::vector<Renderable,
                                   eastl::fixed_vector_allocator<72ul, 49152ul, 4ul, 0ul, true, eastl::allocator>>::
                emplace_back<RenderableType>(
                    (vector<Renderable,
                            eastl::fixed_vector_allocator<72ul, 49152ul, 4ul, 0ul, true, eastl::allocator>>*)(lVar1 +
                                                                                                              40),
                    &local_32);
            this_00 = (UISceneSettings*)pRVar2->y();
            UISceneSettings::operator=(this_00, (UISceneSettings*)(&field_16 + lVar3));
        }
        lVar3 = (((long)&field_0 + *(long*)(field_0 + -24)))->HeapBeginPtr();
        local_31 = (RenderableType)0;
        pRVar2 =
            eastl::vector<Renderable, eastl::fixed_vector_allocator<72ul, 49152ul, 4ul, 0ul, true, eastl::allocator>>::
                emplace_back<RenderableType>(
                    (vector<Renderable,
                            eastl::fixed_vector_allocator<72ul, 49152ul, 4ul, 0ul, true, eastl::allocator>>*)(lVar3 +
                                                                                                              40),
                    &local_31);
        piVar4 = (int*)pRVar2->y();
        *piVar4 = param_1;
        *(longlong*)(piVar4 + 1) = param_2;
        piVar4[3] = param_3;
        piVar4[4] = param_4;
        piVar4[5] = param_5;
        piVar4[6] = param_6;
        piVar4[7] = param_7;
        piVar4[8] = param_8;
        piVar4[9] = param_9;
        piVar4[10] = param_10;
        piVar4[11] = param_11;
        piVar4[12] = param_12;
        piVar4[13] = param_13;
        piVar4[14] = param_14;
        *(bool*)(piVar4 + 15) = param_15;
        *(bool*)((long)piVar4 + 61) = param_16;
        *(undefined4*)((long)piVar4 + 62) = *(undefined4*)param_17;
        *(RenderableOverlay*)((long)piVar4 + 66) = param_17[4];
        return 1;
    }

    // 0x1003670b0, 32 bytes, inline, placed by class header (inline)
    // OSRenderCore_RenderThread_JavaStyle::Instance()
    long OSRenderCore_RenderThread_JavaStyle::Instance() {
        return OSRenderCore_RenderThread::Instance() + 1580368;
    }

    // 0x1003672a0, 32 bytes, inline, placed by class header (inline)
    // OSRenderCore_RenderThread_Common::IsRenderThread() const
    bool OSRenderCore_RenderThread_Common::IsRenderThread() {
        long lVar1;
        long lVar2;

        lVar1 = field_96;
        lVar2 = this_thread::GetThreadID();
        return lVar1 == lVar2;
    }

    // 0x100367ac0, 80 bytes, inline, placed by class header (inline)
    // OSRenderCore_RenderThread_RSeven::Instance()
    void OSRenderCore_RenderThread_RSeven::Instance() {
        char cVar1;
        long* plVar2;

        plVar2 = (long*)OSRenderCore_RenderThread::Instance();
        cVar1 = (((long)plVar2 + *(long*)(*plVar2 + -24)))->IsRenderThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("OSRenderCore_RenderThread::Instance().IsRenderThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/osrendercore/"
                      "OSRenderCore.h",
                      973, "The RT7 renderer may only be accessed from the render thread.");
        }
        OSRenderCore_RenderThread::Instance();
    }

} // namespace jag::oldscape

namespace jag {
    // 0x100053d70, 16 bytes, inline, placed by debug map only (low confidence)
    // tolower(char)
    int tolower(char param_1) {
        char cVar1;
        undefined3 in_register_00000039;

        cVar1 = ::tolower(CONCAT31(in_register_00000039, param_1));
        return (int)cVar1;
    }

    // 0x100054db0, 32 bytes, inline, placed by debug map only (low confidence)
    // LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::Unlink()
    /* LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink() */

    void LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::Unlink() {
        long lVar1;

        lVar1 = *(long*)(this + 40);
        *(undefined8*)(lVar1 + 48) = *(undefined8*)(this + 48);
        *(long*)(*(long*)(this + 48) + 40) = lVar1;
    }

    // 0x100054f80, 32 bytes, inline, placed by debug map only (low confidence)
    // LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::InsertAfter(LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>&)
    /* LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>&)
    */

    void LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>::InsertAfter(LRUCacheWrapper* param_1) {
        long lVar1;

        lVar1 = *(long*)(param_1 + 48);
        *(LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>**)(lVar1 + 40) = this;
        *(long*)(this + 48) = lVar1;
        *(LRUCacheWrapper<oldscape::configdecoder::OldscapeVarType>**)(param_1 + 48) = this;
        *(LRUCacheWrapper**)(this + 40) = param_1;
    }

    // 0x1001b9500, 80 bytes, inline, placed by debug map only (low confidence)
    // IsInsideTriangle(int, int, int, int, int, int, int, int)
    bool IsInsideTriangle(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7,
                          int param_8) {
        if ((((param_3 <= param_2) || (param_4 <= param_2)) || (param_5 <= param_2)) &&
            (((param_2 <= param_3 || (param_2 <= param_4)) || (param_2 <= param_5)))) {
            if (((param_6 <= param_1) || (param_7 <= param_1)) || (param_8 <= param_1)) {
                return param_1 <= param_8 || (param_1 <= param_7 || param_1 <= param_6);
            }
        }
        return false;
    }

    // 0x1001b98c0, 112 bytes, inline, placed by debug map only (low confidence)
    // void CopyJavaArray<int, int const>(Array<int, eastl::allocator>&, int const*, unsigned int, bool)
    void CopyJavaArray<int, int const>(Array* param_1, int* param_2, uint param_3, bool param_4) {
        void* pvVar1;
        long lVar2;

        if (param_2 == (int*)0) {
            if (param_4) {
                param_1->set_max_size(0, 5);
            }
        } else {
            param_1->set_min_size((ulong)param_3, 5);
            pvVar1 = (void*)param_1->data();
            lVar2 = param_1->end();
            _memcpy(pvVar1, param_2, lVar2 * 4);
        }
    }

    // 0x1001b9930, 112 bytes, inline, placed by debug map only (low confidence)
    // void CopyJavaArray<signed char, signed char const>(Array<signed char, eastl::allocator>&, signed char const*, unsigned int, bool)
    void CopyJavaArray<signed char, signed char const>(Array* param_1, signed* param_2, uint param_3, bool param_4) {
        void* pvVar1;
        size_t sVar2;

        if (param_2 == (signed*)0) {
            if (param_4) {
                param_1->set_max_size(0, 5);
            }
        } else {
            param_1->set_min_size((ulong)param_3, 5);
            pvVar1 = (void*)param_1->data();
            sVar2 = param_1->end();
            _memcpy(pvVar1, param_2, sVar2);
        }
    }

    // 0x1001b99a0, 112 bytes, inline, placed by debug map only (low confidence)
    // void CopyJavaArray<short, short const>(Array<short, eastl::allocator>&, short const*, unsigned int, bool)
    void CopyJavaArray<short, short const>(Array* param_1, short* param_2, uint param_3, bool param_4) {
        void* pvVar1;
        long lVar2;

        if (param_2 == (short*)0) {
            if (param_4) {
                param_1->set_max_size(0, 5);
            }
        } else {
            param_1->set_min_size((ulong)param_3, 5);
            pvVar1 = (void*)param_1->data();
            lVar2 = param_1->end();
            _memcpy(pvVar1, param_2, lVar2 * 2);
        }
    }

    // 0x1001b9a10, 112 bytes, inline, placed by debug map only (low confidence)
    // void CopyJavaArray<unsigned char, unsigned char const>(Array<unsigned char, eastl::allocator>&, unsigned char const*, unsigned int, bool)
    void CopyJavaArray<unsigned char, unsigned char const>(Array* param_1, uchar* param_2, uint param_3, bool param_4) {
        void* pvVar1;
        size_t sVar2;

        if (param_2 == (uchar*)0) {
            if (param_4) {
                param_1->set_max_size(0, 5);
            }
        } else {
            param_1->set_min_size((ulong)param_3, 5);
            pvVar1 = (void*)param_1->data();
            sVar2 = param_1->end();
            _memcpy(pvVar1, param_2, sVar2);
        }
    }

    // 0x1001bafe0, 16 bytes, placed by debug map only (low confidence)
    // operator==(TintMode const&, TintMode const&)
    /* TEMPNAMEPLACEHOLDERVALUE(TintMode const&, TintMode const&) */

    undefined4 operator==(TintMode* param_1, TintMode* param_2) {
        return CONCAT31((int3)((uint) * (int*)param_1 >> 8), *(int*)param_1 == *(int*)param_2);
    }

    // 0x1001baff0, 16 bytes, placed by debug map only (low confidence)
    // operator!=(TintMode const&, TintMode const&)
    /* TEMPNAMEPLACEHOLDERVALUE(TintMode const&, TintMode const&) */

    byte operator!=(TintMode* param_1, TintMode* param_2) {
        return operator==(param_1, param_2) ^ 1;
    }

} // namespace jag

namespace jag::oldscape::option::transforms {
    template <typename...> // 2 instantiations, e.g. <bool>, <float>
    class IntegerToValueTypeTransform {
    public:
        bool IntegerToValueType(int);
        ValueTypeToInteger(bool);
        float IntegerToValueType(int);
        void ValueTypeToInteger(float);
    };

    // 0x100051ab0, 32 bytes, inline, placed by debug map only (low confidence)
    // IntegerToValueTypeTransform<float>::IntegerToValueType(int)
    float IntegerToValueTypeTransform<float>::IntegerToValueType(int param_1) {
        return (float)param_1 * 0.01;
    }

    // 0x100051ad0, 32 bytes, inline, placed by debug map only (low confidence)
    // IntegerToValueTypeTransform<float>::ValueTypeToInteger(float)
    void IntegerToValueTypeTransform<float>::ValueTypeToInteger(float param_1) {
        jag::math::RoundFloatToInt(param_1 * 100.0);
    }

} // namespace jag::oldscape::option::transforms

namespace jag::math {
    // 0x100051580, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Range<float>::Range(float, float)
    /* Point<float>::Point(float, float) */

    void Point<float>::Point(float param_1, float param_2) {
        *(float*)this = param_1;
        *(float*)(this + 4) = param_2;
    }

    // 0x100051680, 16 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Range<float>::GetMin() const
    /* game::EnvLightProbeSettings::GetOverbright() const */

    float game::EnvLightProbeSettings::GetOverbright() {
        return m_overbright;
    }

    // 0x100051690, 16 bytes, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // Range<float>::GetMax() const
    /* game::EntityHighlightState::GetAlpha() const */

    float game::EntityHighlightState::GetAlpha() {
        return m_alpha;
    }

} // namespace jag::math

namespace jag::oldscape::option {
    // 0x100051250, 64 bytes, inline, placed by debug map only (low confidence)
    // OptionEnumValueSerialiser<ChatTimestampMode>::StringToValue(eastl::fixed_string<char, 256, true, eastl::allocator> const&)
    void OptionEnumValueSerialiser<ChatTimestampMode>::StringToValue(fixed_string* param_1) {
        int local_14;
        int local_10;
        bool local_9;

        FromString<eastl::fixed_string<char, 64, true, eastl::allocator>, int>(param_1, &local_10, 10);
        local_9 = IsValidEnumValue<ChatTimestampMode>(local_10);
        local_14 = local_10;
        std::make_tuple<bool const&, ChatTimestampMode>(&local_9, (ChatTimestampMode*)&local_14);
    }

    // 0x100051490, 64 bytes, inline, placed by debug map only (low confidence)
    // OptionEnumValueSerialiser<ChatTimestampMode>::ValueToString(ChatTimestampMode)
    OptionEnumValueSerialiser<ChatTimestampMode>*
    OptionEnumValueSerialiser<ChatTimestampMode>::ValueToString(int param_2) {
        new (this) eastl::fixed_string<char, 256, true, eastl::allocator>();
        ToText<256, true>((fixed_string*)this, param_2, 10);
        return this;
    }

} // namespace jag::oldscape::option

namespace jag::game {
    // 0x100051690: the linker folded this into math::Range<float>::GetMax() const, which has identical code
    EnvBloomSettings::GetBloomCoefficient() const;

    // 0x100051690: the linker folded this into math::Range<float>::GetMax() const, which has identical code
    Cutscene2DPlaybackState::GetElapsedTimeSec() const;

} // namespace jag::game

namespace jag::render {
    // 0x100051690: the linker folded this into math::Range<float>::GetMax() const, which has identical code
    VertexArrayObject::GetLastUsageSeconds() const;

} // namespace jag::render

namespace jag::oldscape::rseven {
    // 0x1001b8a60: the linker folded this into OSRenderCore_RenderThread_Common::GetConstRenderStateNXT() const, which has identical code
    OSRenderCore_TextureDataProvider::GetTexturesCompressedETCArchive() const;

} // namespace jag::oldscape::rseven
