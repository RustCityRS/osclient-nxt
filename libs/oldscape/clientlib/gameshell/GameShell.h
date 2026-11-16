// libs/oldscape/clientlib/gameshell/GameShell.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape::javapal {
    class GameShell {
    public:
        void ShowBasicPercentTidy();
        GraphicsApp* GetGraphicsApp();
        void SetFrameRate(int arg1);
        uint8_t* GetSafeArea() const;
        void SwapRenderer();
        GameShell(GraphicsApp& graphicsApp);
        uint64_t GetClientType();
        ~GameShell();
        void SetPublishingPlatformType(game::PublishingPlatformType publishingPlatformType);
        void IsForceCrashQueued();
        void DoneSlowUpdate();
        void ShowError();
        void Destroy();
        int GetMinimumCanvasHeight() const;
        int GetMinimumCanvasWidth() const;
        void SetMinimumCanvasSize(int arg1, int arg2);
        void SetupKeyboard(jag::input::InputHandler* inputHandler);
        void SetupMouse(jag::input::InputHandler* inputHandler);
        void RegisterInputHandler(input::InputHandler* inputHandler, unsigned char arg2);
        void StartApp(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6);
        void SetPixToolkit(int arg1);
        auto GetUISafeArea() const;
        void SetDesiredCanvasSize(int arg1, int arg2);
        dash3d::GridRect GetTopSize();
        int GetFrameWidth() const;
        int GetFrameHeight() const;
        unsigned long IsWindowedApplication() const;
        void CheckResize();
        PublishingPlatformType GetPublishingPlatformType();
        void UnregisterInputHandler(unsigned char arg1);
        uint64_t GetVisibleAppHeight();
        void ResizeSafeArea();
        unsigned int SetSafeArea(int arg1, int arg2, int arg3, int arg4);
        NXTPixToolkit* GetOrCreatePixToolkit(int arg1);
        void GetCanvasWidth();
        void GetCanvasHeight();
        NXTPixToolkit* GetPixToolkit();
        void Run(jag::input::Input* input, jag::input::InputHandler* inputHandler);
        void SetShouldStopRunning();
        void MainLoopWrapper();
        void MainRedrawWrapper(float arg1);
        void Shutdown();
        auto GetOSName();
        void QuickResize();
        void UpdatePixToolKitViewport();
        int LoadJavConfigFromUrl();
        void SetParameter(int arg1, const eastl::string& str);
        uint8_t SetCodeBase(const eastl::string& str);
        void SetJavConfigReader(const eastl::string& str);
        unsigned long CheckHost();
        auto GetCodeBaseHost() const;
        uint8_t* GetParameter(const eastl::string& str);
        unsigned int GetAppletConfigString(eastl::string& str1, const eastl::string& str2);
        static int32_t m_delTime;           // = 16666667
        static int32_t m_minDel;            // = 1000000
        static int64_t m_lastLogoFrameTime; // = -1
        static int32_t m_fullRedrawForce;   // = 500
        static bool m_focusIn;              // = 1
        static bool m_focus;                // = 1
        static int32_t m_fps;
        static int32_t m_lps;
        static int64_t m_activeShell;
        static int64_t m_reloadCount;
        static int64_t m_killTime;
        static int32_t m_shutdown;
        static int32_t m_updateCount;
        static std::array<long long, 32ul> m_drawTime;
        static int64_t m_drawPos;
        static std::array<long long, 32ul> m_updateTime;
        static int64_t m_updatePos;
        static int64_t m_lastGameLoopTimeMillis;
        static int32_t m_sWid;
        static int32_t m_sHei;
        static int32_t m_logoFrame;
        static int32_t m_forceCrashQueued;
        static eastl::string m_osName; // = eastl::string()
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>
            m_pApplicationContext; // = shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>()

    private:
        uint8_t _unknown_8[112];
        int m_minimumCanvasWidth;
        int m_minimumCanvasHeight;
        uint8_t field_128;
        uint8_t _unknown_129[7];
        int field_136;
        uint8_t _unknown_140[4];
        NXTPixToolkit* m_pPixToolkit;
        GraphicsApp* m_pGraphicsApp;
        uint8_t _unknown_160[7936];
        int field_8096;
        int m_frameWidth;
        int m_frameHeight;
        int field_8108;
        int field_8112;
        uint8_t _unknown_8116[16];
        uint8_t field_8132;
        uint8_t _unknown_8133[3];
        PublishingPlatformType m_publishingPlatformType;
        uint8_t _unknown_8140[4];
    };

    // 0x100029c40
    GraphicsApp* GameShell::GetGraphicsApp() {
        return m_transitionOutTime;
    }

    // 0x10004dc70
    void GameShell::SetFrameRate(int arg1) {
        if (m_pPixToolkit != nullptr) {
            m_pPixToolkit->SetFrameRate(arg1);
        }
    }

    // 0x100060700
    uint8_t* GameShell::GetSafeArea() const {
        return &field_8116;
    }

    // 0x10008db10
    void GameShell::SwapRenderer() {
        SetPixToolkit((unsigned int)(field_136 == 0));
    }

    // 0x1000c3f20
    GameShell::GameShell(GraphicsApp& graphicsApp) {
        field_0 = &PTR____cxa_pure_virtual_100efdd78;
        new (&field_8) datastructure::RollingAverageCounter(15);
        new (&field_64) datastructure::RollingAverageCounter(15);
        field_128 = 0;
        *(uint64_t*)&field_132 = 18446744070484306950;
        m_pPixToolkit = nullptr;
        m_pGraphicsApp = graphicsApp;
        new (&field_160) oldscape::input::InputEventQueue();
        new (&field_6944) oldscape::input::ClientKeyboardListener();
        new (&field_7280) oldscape::input::ClientMouseListener();
        new (&field_8000) eastl::string();
        field_8032.unique_ptr<true, void>();
        new (&field_8040) eastl::hash_map(local_38);
        field_8096 = 0;
        field_8108 = 0;
        field_8112 = 0;
        new (&field_8116) shared_ptr();
        field_8132 = 0;
        m_publishingPlatformType = 4294967295;
        auto local_40 = std::make_unique<sound::NXTPCMPlayerFactory>();
        std::unique_ptr<sound::PCMPlayerFactory>::unique_ptr<
            sound::NXTPCMPlayerFactory, std::default_delete<sound::NXTPCMPlayerFactory>, void, void>(
            &local_38,
            (unique_ptr<sound::NXTPCMPlayerFactory, std::default_delete<sound::NXTPCMPlayerFactory> _>*)&local_40);
        local_38.SetPCMPlayerFactory(local_40);
    }

    // 0x1000c46d0
    uint64_t GameShell::GetClientType() {
        return 5;
    }

    // 0x1000c4c20
    GameShell::~GameShell() {
        field_0 = &PTR____cxa_pure_virtual_100efdd78;
        field_8040.~hash_map();
        field_8032.~unique_ptr();
        field_8000.~basic_string();
        field_7280.~ClientMouseListener();
        field_6944.~ClientKeyboardListener();
        field_160.~InputEventQueue();
        field_64.~RollingAverageCounter();
        field_8.~RollingAverageCounter();
    }

    // 0x1000c5e30
    void GameShell::SetPublishingPlatformType(game::PublishingPlatformType publishingPlatformType) {
        m_publishingPlatformType = publishingPlatformType;
    }

    // 0x1000c6c50
    void GameShell::IsForceCrashQueued() {
        return m_forceCrashQueued;
    }

    // 0x1000c6c60
    void GameShell::DoneSlowUpdate() {
        uint64_t* puVar1;

        unsigned long uVar2 = 0;
        do {
            puVar1 = &m_drawTime[uVar2];
            *puVar1 = 0;
            uVar2 = uVar2 + 1;
        } while (uVar2 != 32);
        uVar2 = 0;
        do {
            puVar1 = &m_updateTime[uVar2];
            *puVar1 = 0;
            uVar2 = uVar2 + 1;
        } while (uVar2 != 32);
        m_updateCount = 0;
    }

    // 0x1000d74e0
    void GameShell::ShowError() {
        m_pPixToolkit->Render((int)m_pPixToolkit, 0);
    }

    // 0x1000d8740
    void GameShell::Destroy() {
        field_7280.Destroy();
        field_6944.Destroy();
    }

    // 0x1000dc670
    int GameShell::GetMinimumCanvasHeight() const {
        return m_advisedZoom;
    }

    // 0x1000dc680
    int GameShell::GetMinimumCanvasWidth() const {
        return m_minimumCanvasWidth;
    }

    // 0x1000dc850
    void GameShell::SetMinimumCanvasSize(int arg1, int arg2) {
        if (arg1 < 765) {
            LogAssert("width >= MIN_FIXED_WIDTH",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                      "gameshell/GameShell.h",
                      94, "Minimum canvas width cannot be smaller than: %d, it is set to %d", 765,
                      (unsigned long)(unsigned int)arg1);
        }
        if (arg2 < 503) {
            LogAssert("height >= MIN_FIXED_HEIGHT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                      "gameshell/GameShell.h",
                      95, "Minimum canvas height cannot be smaller than: %d, it is set to %d", 503,
                      (unsigned long)(unsigned int)arg2);
        }
        if ((m_minimumCanvasWidth != arg1) || (m_minimumCanvasHeight != arg2)) {
            field_8132 = 1;
        }
        m_minimumCanvasWidth = arg1;
        m_minimumCanvasHeight = arg2;
    }

    // 0x1000dfcb0
    void GameShell::SetupKeyboard(jag::input::InputHandler* inputHandler) {
        field_6944.Init(inputHandler);
        field_6944.SetDispatchHandler(&field_160);
    }

    // 0x1000dfce0
    void GameShell::SetupMouse(jag::input::InputHandler* inputHandler) {
        field_7280.Init(inputHandler, &field_6944);
        field_7280.SetDispatchHandler(&field_160);
    }

    // 0x1000dfd20
    void GameShell::RegisterInputHandler(input::InputHandler* inputHandler, unsigned char arg2) {
        field_160.RegisterDispatchHandler(inputHandler, arg2);
    }

    // 0x1000dfd60
    void GameShell::StartApp(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6) {
        m_activeShell = this;
        m_sWid = arg1;
        m_sHei = arg2;
        m_minimumCanvasWidth = arg3;
        m_minimumCanvasHeight = arg4;
        ResizeSafeArea();
    }

    // 0x1000dfd90
    void GameShell::SetPixToolkit(int arg1) {
        field_136 = arg1;
        m_pPixToolkit = (NXTPixToolkit*)GetOrCreatePixToolkit(arg1);
    }

    // 0x1000dff00
    auto GameShell::GetUISafeArea() const {
        auto result(field_8116);
        auto this_00 = m_pPixToolkit->GetScreen();
        float fVar1 = (float)this_00->GetSoundSpatialSizeMax();
        result.Scale(1.0 / fVar1);
        return result;
    }

    // 0x1000e39f0
    void GameShell::SetDesiredCanvasSize(int arg1, int arg2) {
        if ((field_8108 != arg1) || (field_8112 != arg2)) {
            field_8132 = 1;
        }
        field_8108 = arg1;
        field_8112 = arg2;
    }

    // 0x1000e3a20
    dash3d::GridRect GameShell::GetTopSize() {
        auto this_00 = result.Instance();
        auto this_01 = this_00->GetPrimaryRenderContext();
        int local_30 = this_01->GetBackBufferWidth();
        auto piVar1 = std::max<int>(local_30, m_minimumCanvasWidth);
        int arg3 = *piVar1;
        int local_2c = this_01->GetBackBufferHeight();
        piVar1 = std::max<int>(local_2c, m_minimumCanvasHeight);
        return dash3d::GridRect(0, 0, arg3, *piVar1);
    }

    // 0x1000e3cb0
    int GameShell::GetFrameWidth() const {
        return m_frameWidth;
    }

    // 0x1000e3ce0
    int GameShell::GetFrameHeight() const {
        return m_frameHeight;
    }

    // 0x1000e6790
    unsigned long GameShell::IsWindowedApplication() const {
        auto plVar1 = OSRenderCore_AudioThread::Instance();
        long lVar2 = ((Layout*)((long)plVar1 + *(long*)(*plVar1 - 24)))->HeapBeginPtr();
        plVar1 = (long*)OSRenderCore_AudioThread::Instance();
        long lVar3 = ((Layout*)((long)plVar1 + *(long*)(*plVar1 - 24)))->HeapBeginPtr();
        return ((lVar2 + 19677552))->GetIsFullScreen(*((lVar3 + 19677508))) ^ 1;
    }

    // 0x1000fce90
    void GameShell::CheckResize() {
        QuaternionT<float> local_28;

        GetTopSize(&local_28, this);
        auto piVar1 = local_28.second();
        if (((*piVar1 == m_frameWidth) && (piVar1 = (int*)local_28.qw(), *piVar1 == m_frameHeight)) &&
            (field_8132 == '\0')) {
            return;
        }
        field_8132 = 0;
        (*(void (*)(...))field_0[8])(this);
    }

    // 0x1001117a0
    PublishingPlatformType GameShell::GetPublishingPlatformType() {
        return m_publishingPlatformType;
    }

    // 0x10011f4e0
    void GameShell::UnregisterInputHandler(unsigned char arg1) {
        field_160.UnregisterDispatchHandler(arg1);
    }

    // 0x100120420
    uint64_t GameShell::GetVisibleAppHeight() {
        return 4294967295;
    }

    // 0x10012cd90
    void GameShell::ResizeSafeArea() {
        uint64_t extraout_var;

        uint8_t uVar1 = m_pGraphicsApp->GetWindow();
        auto local_40 = ((Window*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1))->GetSafeAreaInsets();
        auto piVar2 = local_40.y();
        int arg1 = *piVar2;
        piVar2 = (int*)local_40.second();
        int arg2 = *piVar2;
        piVar2 = (int*)local_40.qw();
        int arg3 = *piVar2;
        piVar2 = (int*)local_40.SSOBeginPtr();
        SetSafeArea(arg1, arg2, arg3, *piVar2);
    }

    // 0x10012ce10
    unsigned int GameShell::SetSafeArea(int arg1, int arg2, int arg3, int arg4) {
        uint8_t* rect;
        Rect<int> local_38;

        unsigned int uVar1 = 0;
        if ((((-1 < arg1) && (-1 < arg2)) && (-1 < arg3)) && (-1 < arg4)) {
            local_38 = dash3d::GridRect(arg4, arg1, m_sWid - (arg2 + arg4), m_sHei - (arg3 + arg1));
            rect = &field_8116;
            uVar1 = local_38 == *rect;
            if ((char)uVar1 == '\0') {
                *rect = local_38;
                if (m_pPixToolkit != nullptr) {
                    m_pPixToolkit->SetSafeArea(*rect);
                }
            }
            uVar1 = uVar1 ^ 1;
        }
        return uVar1;
    }

    // 0x10012ced0
    NXTPixToolkit* GameShell::GetOrCreatePixToolkit(int arg1) {
        NXTPixToolkit* this_00;

        if (arg1 == 0) {
            LogAssert("toolkitID != TOOLKIT_SOFTWARE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                      "gameshell/GameShell.h",
                      736, nullptr);
        }
        if (m_pPixToolkit == nullptr) {
            this_00 = (NXTPixToolkit*)operator new(6515840);
            new (this_00)
                graphics::NXTPixToolkit(m_frameWidth, m_frameHeight, m_minimumCanvasWidth, m_minimumCanvasHeight);
            m_pPixToolkit = this_00;
            this_00->SetSafeArea(field_8116);
        }
        return m_pPixToolkit;
    }

    // 0x10015dba0
    void GameShell::GetCanvasWidth() {
        return m_sWid;
    }

    // 0x10015dbb0
    void GameShell::GetCanvasHeight() {
        return m_sHei;
    }

    // 0x10017f5b0
    NXTPixToolkit* GameShell::GetPixToolkit() {
        return m_pMemoryCache;
    }

    // 0x100189350
    void GameShell::Run(jag::input::Input* input, jag::input::InputHandler* inputHandler) {
        long lVar1;
        uint64_t extraout_var;
        int* piVar4;
        unsigned long long uVar5;
        unsigned long long uVar6;
        int iVar7;
        long lVar8;
        int local_70[2];
        function<void()> local_68[48];
        long local_38;

        m_killTime = 0;
        uint8_t uVar2 = m_pGraphicsApp->GetWindow();
        std::function<void()>::function<GameShell::Run(jag::input::Input*, jag::input::InputHandler*)::_lambda() _1_,
                                        void>(local_68, (_lambda___1_*)this);
        ((Window*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2))->SetSafeAreaChangeCallback(local_68);
        (*(void (*)(...))field_0[2])(this, input, inputHandler);
        long lVar3 = core::SafeTime::CurrentTimeMillis();
        if ((m_killTime == 0) || (lVar3 < m_killTime)) {
            lVar8 = 0;
            do {
                lVar1 = lVar3 / 20;
                local_70[0] = (int)lVar1 - (int)lVar8;
                local_70[1] = 10;
                piVar4 = std::min<int>(*local_70, *(local_70 + 1));
                m_updateCount = *piVar4;
                uVar5 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                if (0 < m_updateCount) {
                    iVar7 = 0;
                    do {
                        MainLoopWrapper();
                        iVar7 = iVar7 + 1;
                    } while (iVar7 < m_updateCount);
                }
                m_lastGameLoopTimeMillis = lVar3;
                uVar6 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                field_64.AddSample(uVar6 - uVar5);
                MainRedrawWrapper((float)(lVar1 * -20000000 + lVar3 * 1000000) * 5e-08);
                lVar3 = core::SafeTime::CurrentTimeMillis();
                uVar5 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
                field_8.AddSample(uVar5 - uVar6);
                lVar8 = lVar1;
            } while ((m_killTime == 0) || (lVar3 < m_killTime));
        }
        Shutdown();
    }

    // 0x100189640
    void GameShell::SetShouldStopRunning() {
        m_killTime = core::SafeTime::CurrentTimeMillis();
    }

    // 0x10019a340
    void GameShell::MainLoopWrapper() {
        long lVar2 = core::SafeTime::CurrentTimeMillis();
        int iVar4 = m_updatePos;
        long* plVar3 = &m_updateTime[(long)(int)m_updatePos];
        long lVar1 = *plVar3;
        *plVar3 = lVar2;
        m_updatePos = iVar4 + 1U & 31;
        if ((lVar1 != 0) && (lVar1 < lVar2)) {
            iVar4 = (int)lVar2 - (int)lVar1;
            m_lps = ((iVar4 >> 1) + 32000) / iVar4;
        }
        m_focus = m_focusIn.operator_cast_to_bool();
        m_forceCrashQueued = field_6944.IsForceCrashDown();
        (*(void (*)(...))field_0[3])(this);
    }

    // 0x10019a3e0
    void GameShell::MainRedrawWrapper(float arg1) {
        long lVar2 = core::SafeTime::CurrentTimeMillis();
        int iVar4 = m_drawPos;
        long* plVar3 = &m_drawTime[(long)(int)m_drawPos];
        long lVar1 = *plVar3;
        *plVar3 = lVar2;
        m_drawPos = iVar4 + 1U & 31;
        if ((lVar1 != 0) && (lVar1 < lVar2)) {
            iVar4 = (int)lVar2 - (int)lVar1;
            m_fps = ((iVar4 >> 1) + 32000) / iVar4;
        }
        (*(void (*)(...))field_0[6])(this);
        (*(void (*)(...))field_0[4])(arg1, this, field_128);
        field_128 = 0;
    }

    // 0x10019a480
    void GameShell::Shutdown() {
        m_shutdown = 1;
        (*(void (*)(...))field_0[5])();
    }

    // 0x10019b0a0
    void GameShell::Run(jag::input::Input*, jag::input::InputHandler*)::{
        lambda() #1
    }
    ::operator()() const {
        *(uint8_t*)(*(long*)this + 8132) = 1;
    }

    // 0x100391640
    void GameShell::UpdatePixToolKitViewport() {
        int iVar1 = m_frameWidth - m_sWid;
        m_pPixToolkit->SetMinSize(m_minimumCanvasWidth, m_minimumCanvasHeight);
        m_pPixToolkit->SetScreenSize(m_frameWidth, m_frameHeight);
        m_pPixToolkit->SetViewportRect(iVar1 / 2, 0, m_sWid, m_sHei);
    }

} // namespace jag::oldscape::javapal

namespace jag::graphics {
    // 0x100029c40: LayeredAnimationStateMachineLayerDescriptor::GetTransitionOutTime() const has the same machine code as oldscape::javapal::GameShell::GetGraphicsApp()

    // 0x10017f5b0: LayeredAnimationStateMachineLayerDescriptor::GetTransitionInTime() const has the same machine code as oldscape::javapal::GameShell::GetPixToolkit()

} // namespace jag::graphics

// 0x100029c50
void ____ZN3jag8oldscape15FolderSelection17RequestFolderPathEv_block_invoke_2(long param_1, long param_2) {
    uint64_t uVar2;
    uint64_t uVar3;
    char* str;
    unsigned long arg2;
    long lVar4;
    atomic<jag::oldscape::FolderSelection::FolderPathRequestStatus>* paVar5;
    eastl::string local_58;

    uint8_t* puVar1 = PTR__objc_msgSend_100ee9e50;
    if (param_2 == 1) {
        uVar2 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(*(uint64_t*)(param_1 + 32), "URLs");
        uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
        uVar3 = (*(void (*)(...))puVar1)(uVar2, "objectAtIndex:", 0);
        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
        (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar2);
        uVar2 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar3, "path");
        uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
        uVar2 = _objc_retainAutorelease(uVar2);
        str = (char*)(*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar2, "UTF8String");
        arg2 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(uVar2, "lengthOfBytesUsingEncoding:", 4);
        local_58 = eastl::string(str, arg2);
        lVar4 = (*((param_1 + 40))).operator->();
        (*((lVar4 + 8))) = &local_58;
        paVar5 = (atomic<jag::oldscape::FolderSelection::FolderPathRequestStatus>*)(*((param_1 + 40))).operator->();
        *paVar5 = 1;
        puVar1 = PTR__objc_release_100ee9e60;
        (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar2);
        (*(void (*)(...))puVar1)(uVar3);
    } else {
        paVar5 = (atomic<jag::oldscape::FolderSelection::FolderPathRequestStatus>*)(*((param_1 + 40))).operator->();
        *paVar5 = 2;
    }
}
