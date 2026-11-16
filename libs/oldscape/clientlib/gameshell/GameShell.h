// libs/oldscape/clientlib/gameshell/GameShell.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape::javapal {
    class GameShell {
    public:
        ShowBasicPercentTidy();
        GraphicsApp* GetGraphicsApp();
        void SetFrameRate(int);
        GetSafeArea() const;
        void SwapRenderer();
        GameShell(GraphicsApp&);
        GetClientType();
        ~GameShell();
        void SetPublishingPlatformType(game::PublishingPlatformType);
        IsForceCrashQueued();
        void DoneSlowUpdate();
        void ShowError();
        void Destroy();
        int GetMinimumCanvasHeight() const;
        int GetMinimumCanvasWidth() const;
        void SetMinimumCanvasSize(int, int);
        void SetupKeyboard(jag::input::InputHandler*);
        void SetupMouse(jag::input::InputHandler*);
        void RegisterInputHandler(input::InputHandler*, unsigned char);
        void StartApp(int, int, int, int, int, int);
        void SetPixToolkit(int);
        GetUISafeArea() const;
        void SetDesiredCanvasSize(int, int);
        GetTopSize();
        int GetFrameWidth() const;
        int GetFrameHeight() const;
        ulong IsWindowedApplication() const;
        void CheckResize();
        GetPublishingPlatformType();
        void UnregisterInputHandler(unsigned char);
        GetVisibleAppHeight();
        void ResizeSafeArea();
        uint SetSafeArea(int, int, int, int);
        NXTPixToolkit* GetOrCreatePixToolkit(int);
        GetCanvasWidth();
        GetCanvasHeight();
        NXTPixToolkit* GetPixToolkit();
        void Run(jag::input::Input*, jag::input::InputHandler*);
        void SetShouldStopRunning();
        void MainLoopWrapper();
        void MainRedrawWrapper(float);
        void Shutdown();
        GameShell* GetOSName();
        void QuickResize();
        void UpdatePixToolKitViewport();
        int LoadJavConfigFromUrl();
        void SetParameter(int, eastl::string const&);
        SetCodeBase(eastl::string const&);
        void SetJavConfigReader(eastl::string const&);
        ulong CheckHost();
        GetCodeBaseHost() const;
        GetParameter(eastl::string const&);
        ulong GetAppletConfigString(eastl::string&, eastl::string const&);
        static /* 4 bytes */ m_delTime;           // = 16666667
        static /* 4 bytes */ m_minDel;            // = 1000000
        static /* 8 bytes */ m_lastLogoFrameTime; // = -1
        static /* 4 bytes */ m_fullRedrawForce;   // = 500
        static /* 1 bytes */ m_focusIn;           // = 1
        static /* 1 bytes */ m_focus;             // = 1
        static /* 4 bytes */ m_fps;
        static /* 4 bytes */ m_lps;
        static /* 8 bytes */ m_activeShell;
        static /* 8 bytes */ m_reloadCount;
        static /* 8 bytes */ m_killTime;
        static /* 4 bytes */ m_shutdown;
        static /* 4 bytes */ m_updateCount;
        static /* 256 bytes */ m_drawTime;
        static /* 8 bytes */ m_drawPos;
        static /* 256 bytes */ m_updateTime;
        static /* 8 bytes */ m_updatePos;
        static /* 8 bytes */ m_lastGameLoopTimeMillis;
        static /* 4 bytes */ m_sWid;
        static /* 4 bytes */ m_sHei;
        static /* 4 bytes */ m_logoFrame;
        static /* 4 bytes */ m_forceCrashQueued;
        static eastl::string /* 32 bytes */ m_osName; // = eastl::string()
        static shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ m_pApplicationContext;

        // data members, from how the methods use this: 8144 bytes
        char _unknown_0[4];
        int field_4;  // offset 4
        int field_8;  // offset 8
        int field_12; // offset 12
        char _unknown_16[104];
        int m_minimumCanvasWidth;  // offset 120
        int m_minimumCanvasHeight; // offset 124
        undefined1 field_128;      // offset 128
        char _unknown_129[7];
        int m_pixToolkit; // offset 136
        char _unknown_140[4];
        NXTPixToolkit* m_pPixToolkit; // offset 144
        GraphicsApp* m_pGraphicsApp;  // offset 152
        char _unknown_160[7936];
        int field_8096;          // offset 8096
        int m_frameWidth;        // offset 8100
        int m_frameHeight;       // offset 8104
        int m_desiredCanvasSize; // offset 8108
        int field_8112;          // offset 8112
        char _unknown_8116[16];
        undefined1 field_8132; // offset 8132
        char _unknown_8133[3];
        undefined4 m_publishingPlatformType; // offset 8136
        char _unknown_8140[4];
    };

    // 0x100029c40, 16 bytes, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // GameShell::GetGraphicsApp()
    /* jag::graphics::LayeredAnimationStateMachineLayerDescriptor::GetTransitionOutTime() const */

    undefined8 jag::graphics::LayeredAnimationStateMachineLayerDescriptor::GetTransitionOutTime() {
        return m_transitionOutTime;
    }

    // 0x10004dc70, 32 bytes, inline, placed by class name
    // GameShell::SetFrameRate(int)
    void GameShell::SetFrameRate(int param_1) {
        if (m_pPixToolkit != (NXTPixToolkit*)0) {
            (m_pPixToolkit, param_1)->SetFrameRate();
        }
    }

    // 0x100060700, 16 bytes, inline, placed by class name
    // GameShell::GetSafeArea() const
    undefined1* GameShell::GetSafeArea() {
        return &field_8116;
    }

    // 0x10008db10, 32 bytes, inline, placed by class name
    // GameShell::SwapRenderer()
    void GameShell::SwapRenderer() {
        SetPixToolkit(this, (uint)(m_pixToolkit == 0));
    }

    // 0x1000c3f20, 512 bytes, base-object constructor, inline, placed by class name
    // GameShell::GameShell(GraphicsApp&)
    void GameShell::GameShell(GraphicsApp* param_1) {
        allocator* paVar1;
        unique_ptr* puVar2;
        unique_ptr local_40[8];
        allocator local_38[8];

        *(undefined***)this = &PTR____cxa_pure_virtual_100efdd78;
        new (&field_8, 15) datastructure::RollingAverageCounter();
        new (&field_64, 15) datastructure::RollingAverageCounter();
        field_128 = 0;
        *(undefined8*)&field_132 = 18446744070484306950;
        m_pPixToolkit = (NXTPixToolkit*)0;
        m_pGraphicsApp = param_1;
        new (&field_160) input::InputEventQueue();
        new (&field_6944) input::ClientKeyboardListener();
        new (&field_7280) input::ClientMouseListener();
        new (&field_8000) eastl::string();
        std::unique_ptr<JavConfigReader, std::default_delete<JavConfigReader>>::unique_ptr<true, void>(
            (unique_ptr<JavConfigReader, std::default_delete<JavConfigReader>>*)&field_8032);
        eastl::allocator::allocator(local_38, "EASTL hash_map");
        paVar1 = local_38;
        new (&field_8040, paVar1) eastl::hash_map<eastl::string, eastl::string, eastl::hash<eastl::string>,
                                                  eastl::equal_to<eastl::string>, eastl::allocator, false>();
        field_8096 = 0;
        m_desiredCanvasSize = 0;
        field_8112 = 0;
        new (&field_8116, (_func_decltype_nullptr*)paVar1) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_8132 = 0;
        m_publishingPlatformType = 4294967295;
        std::make_unique<sound::NXTPCMPlayerFactory>();
        puVar2 = local_40;
        std::unique_ptr<sound::PCMPlayerFactory, std::default_delete<sound::PCMPlayerFactory>>::unique_ptr<
            sound::NXTPCMPlayerFactory, std::default_delete<sound::NXTPCMPlayerFactory>, void, void>(
            (unique_ptr<sound::PCMPlayerFactory, std::default_delete<sound::PCMPlayerFactory>>*)local_38, puVar2);
        local_38->SetPCMPlayerFactory(puVar2);
        local_38->~unique_ptr();
        local_40->~unique_ptr();
    }

    // 0x1000c46d0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // GameShell::GetClientType()
    /* rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2::GetID() const */

    undefined8 rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2::GetID() {
        return 5;
    }

    // 0x1000c4c20, 128 bytes, base-object destructor, inline, placed by class name
    // GameShell::~GameShell()
    void GameShell::~GameShell() {
        *(undefined***)this = &PTR____cxa_pure_virtual_100efdd78;
        (&field_8040)->~hash_map();
        (&field_8032)->~unique_ptr();
        (&field_8000)->~basic_string();
        (&field_7280)->~ClientMouseListener();
        (&field_6944)->~ClientKeyboardListener();
        (&field_160)->~InputEventQueue();
        (&field_64)->~RollingAverageCounter();
        (&field_8)->~RollingAverageCounter();
    }

    // 0x1000c5e30, 16 bytes, inline, placed by class name
    // GameShell::SetPublishingPlatformType(game::PublishingPlatformType)
    void GameShell::SetPublishingPlatformType(undefined4 param_2) {
        m_publishingPlatformType = param_2;
    }

    // 0x1000c6c50, 16 bytes, inline, placed by class name
    // GameShell::IsForceCrashQueued()
    undefined8 GameShell::IsForceCrashQueued() {
        return CONCAT71(17013033, m_forceCrashQueued);
    }

    // 0x1000c6c60, 112 bytes, inline, placed by class name
    // GameShell::DoneSlowUpdate()
    void GameShell::DoneSlowUpdate() {
        undefined8* puVar1;
        ulong uVar2;

        uVar2 = 0;
        do {
            puVar1 = (undefined8*)std::array<long long, 32ul>::operator[]((array<long long, 32ul>*)&m_drawTime, uVar2);
            *puVar1 = 0;
            uVar2 = uVar2 + 1;
        } while (uVar2 != 32);
        uVar2 = 0;
        do {
            puVar1 =
                (undefined8*)std::array<long long, 32ul>::operator[]((array<long long, 32ul>*)&m_updateTime, uVar2);
            *puVar1 = 0;
            uVar2 = uVar2 + 1;
        } while (uVar2 != 32);
        m_updateCount = 0;
    }

    // 0x1000d74e0, 32 bytes, inline, placed by class name
    // GameShell::ShowError()
    void GameShell::ShowError() {
        (*(code*)m_pPixToolkit->field_0[4])(m_pPixToolkit, 0, 0);
    }

    // 0x1000d8740, 48 bytes, inline, placed by class name
    // GameShell::Destroy()
    void GameShell::Destroy() {
        (&field_7280)->Destroy();
        (&field_6944)->Destroy();
    }

    // 0x1000dc670, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // GameShell::GetMinimumCanvasHeight() const
    /* game::MapArea::GetAdvisedZoom() const */

    undefined4 game::MapArea::GetAdvisedZoom() {
        return m_advisedZoom;
    }

    // 0x1000dc680, 16 bytes, inline, placed by class name
    // GameShell::GetMinimumCanvasWidth() const
    int GameShell::GetMinimumCanvasWidth() {
        return m_minimumCanvasWidth;
    }

    // 0x1000dc850, 192 bytes, inline, placed by class name
    // GameShell::SetMinimumCanvasSize(int, int)
    void GameShell::SetMinimumCanvasSize(int param_1, int param_2) {
        if (param_1 < 765) {
            /* WARNING: Subroutine does not return */
            LogAssert("width >= MIN_FIXED_WIDTH",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                      "gameshell/GameShell.h",
                      94, "Minimum canvas width cannot be smaller than: %d, it is set to %d", 765,
                      (ulong)(uint)param_1);
        }
        if (param_2 < 503) {
            /* WARNING: Subroutine does not return */
            LogAssert("height >= MIN_FIXED_HEIGHT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                      "gameshell/GameShell.h",
                      95, "Minimum canvas height cannot be smaller than: %d, it is set to %d", 503,
                      (ulong)(uint)param_2);
        }
        if ((m_minimumCanvasWidth != param_1) || (m_minimumCanvasHeight != param_2)) {
            field_8132 = 1;
        }
        m_minimumCanvasWidth = param_1;
        m_minimumCanvasHeight = param_2;
    }

    // 0x1000dfcb0, 48 bytes, inline, placed by class name
    // GameShell::SetupKeyboard(jag::input::InputHandler*)
    void GameShell::SetupKeyboard(InputHandler* param_1) {
        (&field_6944, param_1)->Init();
        (&field_6944, (InputHandler*)&field_160)->SetDispatchHandler();
    }

    // 0x1000dfce0, 64 bytes, inline, placed by class name
    // GameShell::SetupMouse(jag::input::InputHandler*)
    void GameShell::SetupMouse(InputHandler* param_1) {
        (&field_7280, param_1, (ClientKeyboardListener*)&field_6944)->Init();
        (&field_7280, (InputHandler*)&field_160)->SetDispatchHandler();
    }

    // 0x1000dfd20, 32 bytes, inline, placed by class name
    // GameShell::RegisterInputHandler(input::InputHandler*, unsigned char)
    void GameShell::RegisterInputHandler(InputHandler* param_1, uchar param_2) {
        (&field_160, param_1, param_2)->RegisterDispatchHandler();
    }

    // 0x1000dfd60, 48 bytes, inline, placed by class name
    // GameShell::StartApp(int, int, int, int, int, int)
    void GameShell::StartApp(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6) {
        undefined4 in_register_0000003c;

        m_activeShell = CONCAT44(in_register_0000003c, param_1);
        m_sWid = param_2;
        m_sHei = param_3;
        *(int*)(CONCAT44(in_register_0000003c, param_1) + 120) = param_4;
        *(int*)(CONCAT44(in_register_0000003c, param_1) + 124) = param_5;
        ResizeSafeArea((GameShell*)CONCAT44(in_register_0000003c, param_1));
    }

    // 0x1000dfd90, 48 bytes, inline, placed by class name
    // GameShell::SetPixToolkit(int)
    void GameShell::SetPixToolkit(int param_1) {
        m_pixToolkit = param_1;
        m_pPixToolkit = (NXTPixToolkit*)GetOrCreatePixToolkit(this, param_1);
    }

    // 0x1000dff00, 80 bytes, inline, placed by class name
    // GameShell::GetUISafeArea() const
    GameShell* GameShell::GetUISafeArea() {
        SoundInstance* this_00;
        long in_RSI;
        float fVar1;

        new (this) jag::math::Rect<unsigned int>((Rect*)(in_RSI + 8116));
        this_00 = (SoundInstance*)(*(NXTPixToolkit**)(in_RSI + 144))->GetScreen();
        fVar1 = (float)this_00->GetSoundSpatialSizeMax();
        Scale(1.0 / fVar1);
        return this;
    }

    // 0x1000e39f0, 48 bytes, inline, placed by class name
    // GameShell::SetDesiredCanvasSize(int, int)
    void GameShell::SetDesiredCanvasSize(int param_1, int param_2) {
        if ((m_desiredCanvasSize != param_1) || (field_8112 != param_2)) {
            field_8132 = 1;
        }
        m_desiredCanvasSize = param_1;
        field_8112 = param_2;
    }

    // 0x1000e3a20, 128 bytes, inline, placed by class name
    // GameShell::GetTopSize()
    GameShell* GameShell::GetTopSize() {
        int iVar1;
        RenderDevice* this_00;
        RenderContext* this_01;
        int* piVar2;
        long in_RSI;
        int local_30;
        int local_2c;

        this_00 = (RenderDevice*)Instance();
        this_01 = (RenderContext*)this_00->GetPrimaryRenderContext();
        local_30 = this_01->GetBackBufferWidth();
        piVar2 = std::max<int>(&local_30, (int*)(in_RSI + 120));
        iVar1 = *piVar2;
        local_2c = this_01->GetBackBufferHeight();
        piVar2 = std::max<int>(&local_2c, (int*)(in_RSI + 124));
        new (this) dash3d::GridRect(0, 0, iVar1, *piVar2);
        return this;
    }

    // 0x1000e3cb0, 16 bytes, inline, placed by class name
    // GameShell::GetFrameWidth() const
    int GameShell::GetFrameWidth() {
        return m_frameWidth;
    }

    // 0x1000e3ce0, 16 bytes, inline, placed by class name
    // GameShell::GetFrameHeight() const
    int GameShell::GetFrameHeight() {
        return m_frameHeight;
    }

    // 0x1000e6790, 80 bytes, inline, placed by class name
    // GameShell::IsWindowedApplication() const
    ulong GameShell::IsWindowedApplication() {
        long* plVar1;
        long lVar2;
        long lVar3;
        ulong uVar4;

        plVar1 = (long*)OSRenderCore_AudioThread::Instance();
        lVar2 = (((long)plVar1 + *(long*)(*plVar1 + -24)))->HeapBeginPtr();
        plVar1 = (long*)OSRenderCore_AudioThread::Instance();
        lVar3 = (((long)plVar1 + *(long*)(*plVar1 + -24)))->HeapBeginPtr();
        uVar4 = ((lVar2 + 19677552))->GetIsFullScreen((WindowSetOptions*)(lVar3 + 19677508));
        return uVar4 ^ 1;
    }

    // 0x1000fce90, 112 bytes, inline, placed by class name
    // GameShell::CheckResize()
    void GameShell::CheckResize() {
        int* piVar1;
        QuaternionT<float> local_28[16];

        GetTopSize((GameShell*)local_28);
        piVar1 = (int*)local_28->second();
        if (((*piVar1 == m_frameWidth) &&
             (piVar1 = (int*)jag::math::QuaternionT<float>::qw(local_28), *piVar1 == m_frameHeight)) &&
            (field_8132 == '\0')) {
            return;
        }
        field_8132 = 0;
        (**(code**)(*(long*)this + 64))(this);
    }

    // 0x1001117a0, 16 bytes, inline, placed by class name
    // GameShell::GetPublishingPlatformType()
    undefined4 GameShell::GetPublishingPlatformType() {
        return m_publishingPlatformType;
    }

    // 0x10011f4e0, 32 bytes, inline, placed by class name
    // GameShell::UnregisterInputHandler(unsigned char)
    void GameShell::UnregisterInputHandler(uchar param_1) {
        input::InputEventQueue::UnregisterDispatchHandler(param_1 + 160);
    }

    // 0x100120420, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // GameShell::GetVisibleAppHeight()
    /* ApplicationContext::GetOSVersion() */

    undefined8 ApplicationContext::GetOSVersion() {
        return 4294967295;
    }

    // 0x10012cd90, 128 bytes, inline, placed by class name
    // GameShell::ResizeSafeArea()
    void GameShell::ResizeSafeArea() {
        int iVar1;
        int iVar2;
        int iVar3;
        type* ptVar4;
        int* piVar5;
        vector* pvVar6;
        undefined1 local_40[16];

        ptVar4 = (type*)(*(code*)m_pGraphicsApp->field_0[12])();
        local_40->GetSafeAreaInsets();
        piVar5 = (int*)local_40->y();
        iVar1 = *piVar5;
        piVar5 = (int*)local_40->second();
        iVar2 = *piVar5;
        piVar5 = (int*)local_40->qw();
        iVar3 = *piVar5;
        pvVar6 = local_40->SSOBeginPtr(ptVar4);
        SetSafeArea(this, iVar1, iVar2, iVar3, *(int*)pvVar6);
    }

    // 0x10012ce10, 176 bytes, inline, placed by class name
    // GameShell::SetSafeArea(int, int, int, int)
    uint GameShell::SetSafeArea(int param_1, int param_2, int param_3, int param_4) {
        undefined1* this_00;
        uint uVar1;
        Rect local_38[16];

        uVar1 = 0;
        if ((((-1 < param_1) && (-1 < param_2)) && (-1 < param_3)) && (-1 < param_4)) {
            new (local_38)
                dash3d::GridRect(param_4, param_1, m_sWid - (param_2 + param_4), m_sHei - (param_3 + param_1));
            this_00 = &field_8116;
            uVar1 = render::StencilOpDesc::operator==((StencilOpDesc*)local_38, (StencilOpDesc*)this_00);
            if ((char)uVar1 == '\0') {
                jag::math::Rect<unsigned int>::operator=((Rect<unsigned int>*)this_00, local_38);
                if (m_pPixToolkit != (NXTPixToolkit*)0) {
                    (m_pPixToolkit, (Rect*)this_00)->SetSafeArea();
                }
            }
            uVar1 = uVar1 ^ 1;
        }
        return uVar1;
    }

    // 0x10012ced0, 176 bytes, inline, placed by class name
    // GameShell::GetOrCreatePixToolkit(int)
    NXTPixToolkit* GameShell::GetOrCreatePixToolkit(int param_1) {
        NXTPixToolkit* this_00;

        if (param_1 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("toolkitID != TOOLKIT_SOFTWARE",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/clientlib/"
                      "gameshell/GameShell.h",
                      736, (char*)0);
        }
        if (m_pPixToolkit == (NXTPixToolkit*)0) {
            this_00 = operator_new(6515840);
            graphics::NXTPixToolkit::NXTPixToolkit(this_00, m_frameWidth, m_frameHeight, m_minimumCanvasWidth,
                                                   m_minimumCanvasHeight);
            m_pPixToolkit = this_00;
            this_00->SetSafeArea((Rect*)&field_8116);
        }
        return m_pPixToolkit;
    }

    // 0x10015dba0, 16 bytes, inline, placed by class name
    // GameShell::GetCanvasWidth()
    undefined4 GameShell::GetCanvasWidth() {
        return m_sWid;
    }

    // 0x10015dbb0, 16 bytes, inline, placed by class name
    // GameShell::GetCanvasHeight()
    undefined4 GameShell::GetCanvasHeight() {
        return m_sHei;
    }

    // 0x10017f5b0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // GameShell::GetPixToolkit()
    /* Js5ResourceProvider::GetMemoryCache() */

    Js5MemoryCache* Js5ResourceProvider::GetMemoryCache() {
        return m_pMemoryCache;
    }

    // 0x100189350, 528 bytes, inline, placed by class name
    // GameShell::Run(jag::input::Input*, jag::input::InputHandler*)
    void GameShell::Run(Input* param_1, InputHandler* param_2) {
        long lVar1;
        Window* pWVar2;
        long lVar3;
        int* piVar4;
        ulonglong uVar5;
        ulonglong uVar6;
        int iVar7;
        GameShell* pGVar8;
        long lVar9;
        int local_70[2];
        function<void()> local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        m_killTime = 0;
        pWVar2 = (Window*)(*(code*)m_pGraphicsApp->field_0[12])();
        std::function<void()>::function<GameShell::Run(jag::input::Input*, jag::input::InputHandler*)::_lambda() _1_,
                                        void>(local_68, this);
        pWVar2->SetSafeAreaChangeCallback(local_68);
        std::function<void()>::~function(local_68);
        pGVar8 = this;
        (**(code**)(*(long*)this + 16))(this, param_1, param_2);
        lVar3 = pGVar8->CurrentTimeMillis();
        if ((m_killTime == 0) || (lVar3 < m_killTime)) {
            lVar9 = 0;
            do {
                lVar1 = lVar3 / 20;
                local_70[0] = (int)lVar1 - (int)lVar9;
                local_70[1] = 10;
                pGVar8 = (GameShell*)local_70;
                piVar4 = std::min<int>((int*)pGVar8, local_70 + 1);
                m_updateCount = *piVar4;
                uVar5 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)pGVar8);
                if (0 < m_updateCount) {
                    iVar7 = 0;
                    do {
                        pGVar8 = this;
                        MainLoopWrapper(this);
                        iVar7 = iVar7 + 1;
                    } while (iVar7 < m_updateCount);
                }
                m_lastGameLoopTimeMillis = lVar3;
                uVar6 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)pGVar8);
                (&field_64, uVar6 - uVar5)->AddSample();
                pGVar8 = this;
                MainRedrawWrapper(this, (float)(lVar1 * -20000000 + lVar3 * 1000000) * 5e-08);
                lVar3 = pGVar8->CurrentTimeMillis();
                uVar5 = SystemTimer::GetTimeNS<std::chrono::steady_clock>((SystemTimer*)pGVar8);
                (&field_8, uVar5 - uVar6)->AddSample();
                lVar9 = lVar1;
            } while ((m_killTime == 0) || (lVar3 < m_killTime));
        }
        Shutdown(this);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100189640, 32 bytes, inline, placed by class name
    // GameShell::SetShouldStopRunning()
    void GameShell::SetShouldStopRunning() {
        m_killTime = CurrentTimeMillis();
    }

    // 0x10019a340, 160 bytes, inline, placed by class name
    // GameShell::MainLoopWrapper()
    void GameShell::MainLoopWrapper() {
        long lVar1;
        long lVar2;
        long* plVar3;
        int iVar4;

        lVar2 = CurrentTimeMillis();
        iVar4 = m_updatePos;
        plVar3 = (long*)std::array<long long, 32ul>::operator[]((array<long long, 32ul>*)&m_updateTime,
                                                                (long)(int)m_updatePos);
        lVar1 = *plVar3;
        *plVar3 = lVar2;
        m_updatePos = iVar4 + 1U & 31;
        if ((lVar1 != 0) && (lVar1 < lVar2)) {
            iVar4 = (int)lVar2 - (int)lVar1;
            m_lps = ((iVar4 >> 1) + 32000) / iVar4;
        }
        m_focus = m_focusIn.operator_cast_to_bool();
        m_forceCrashQueued = (&field_6944)->IsForceCrashDown();
        (**(code**)(*(long*)this + 24))(this);
    }

    // 0x10019a3e0, 160 bytes, inline, placed by class name
    // GameShell::MainRedrawWrapper(float)
    void GameShell::MainRedrawWrapper(float param_1) {
        long lVar1;
        long lVar2;
        long* plVar3;
        int iVar4;

        lVar2 = CurrentTimeMillis();
        iVar4 = m_drawPos;
        plVar3 =
            (long*)std::array<long long, 32ul>::operator[]((array<long long, 32ul>*)&m_drawTime, (long)(int)m_drawPos);
        lVar1 = *plVar3;
        *plVar3 = lVar2;
        m_drawPos = iVar4 + 1U & 31;
        if ((lVar1 != 0) && (lVar1 < lVar2)) {
            iVar4 = (int)lVar2 - (int)lVar1;
            m_fps = ((iVar4 >> 1) + 32000) / iVar4;
        }
        (**(code**)(*(long*)this + 48))(this);
        (**(code**)(*(long*)this + 32))(param_1, this, field_128);
        field_128 = 0;
    }

    // 0x10019a480, 32 bytes, inline, placed by class name
    // GameShell::Shutdown()
    void GameShell::Shutdown() {
        m_shutdown = 1;
        (**(code**)(*(long*)this + 40))();
    }

    // 0x10019b0a0, 16 bytes, inline, placed by class name
    // GameShell::Run(jag::input::Input*, jag::input::InputHandler*)::{lambda()#1}::operator()() const
    /* GameShell::Run(jag::input::Input*,
   jag::input::InputHandler*)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

    void GameShell::Run(jag::input::Input*, jag::input::InputHandler*)::{
        lambda() #1
    }
    ::operator()() {
        *(undefined1*)(*(long*)this + 8132) = 1;
    }

    // 0x100391640, 112 bytes, inline, placed by class name
    // GameShell::UpdatePixToolKitViewport()
    void GameShell::UpdatePixToolKitViewport() {
        int iVar1;

        iVar1 = m_frameWidth - m_sWid;
        (m_pPixToolkit, m_minimumCanvasWidth, m_minimumCanvasHeight)->SetMinSize();
        (m_pPixToolkit, m_frameWidth, m_frameHeight)->SetScreenSize();
        (m_pPixToolkit, iVar1 / 2, 0, m_sWid, m_sHei)->SetViewportRect();
    }

} // namespace jag::oldscape::javapal

namespace jag::graphics {
    // 0x100029c40: the linker folded this into oldscape::javapal::GameShell::GetGraphicsApp(), which has identical code
    LayeredAnimationStateMachineLayerDescriptor::GetTransitionOutTime() const;

    // 0x10017f5b0: the linker folded this into oldscape::javapal::GameShell::GetPixToolkit(), which has identical code
    LayeredAnimationStateMachineLayerDescriptor::GetTransitionInTime() const;

} // namespace jag::graphics

// 0x100029c50, 400 bytes, placed by debug map only (low confidence)
// ___ZN3jag8oldscape15FolderSelection17RequestFolderPathEv_block_invoke_2
void ____ZN3jag8oldscape15FolderSelection17RequestFolderPathEv_block_invoke_2(long param_1, long param_2) {
    undefined* puVar1;
    undefined8 uVar2;
    undefined8 uVar3;
    char* pcVar4;
    ulong uVar5;
    long lVar6;
    atomic<jag::oldscape::FolderSelection::FolderPathRequestStatus>* paVar7;
    eastl::string local_58[32];
    allocator local_38[8];

    puVar1 = PTR__objc_msgSend_100ee9e50;
    if (param_2 == 1) {
        uVar2 = (*(code*)PTR__objc_msgSend_100ee9e50)(*(undefined8*)(param_1 + 32), "URLs");
        uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
        uVar3 = (*(code*)puVar1)(uVar2, "objectAtIndex:", 0);
        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
        (*(code*)PTR__objc_release_100ee9e60)(uVar2);
        uVar2 = (*(code*)PTR__objc_msgSend_100ee9e50)(uVar3, "path");
        uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
        uVar2 = _objc_retainAutorelease(uVar2);
        pcVar4 = (char*)(*(code*)PTR__objc_msgSend_100ee9e50)(uVar2, "UTF8String");
        uVar5 = (*(code*)PTR__objc_msgSend_100ee9e50)(uVar2, "lengthOfBytesUsingEncoding:", 4);
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        eastl::string::basic_string(local_58, pcVar4, uVar5, local_38);
        lVar6 = jag::shared_ptr<jag::oldscape::FolderSelection::FolderSelectionRequest>::operator->(
            (shared_ptr<jag::oldscape::FolderSelection::FolderSelectionRequest>*)(param_1 + 40));
        eastl::string::operator=((eastl::string*)(lVar6 + 8), (basic_string*)local_58);
        eastl::string::~basic_string(local_58);
        paVar7 = (atomic<jag::oldscape::FolderSelection::FolderPathRequestStatus>*)
                     jag::shared_ptr<jag::oldscape::FolderSelection::FolderSelectionRequest>::operator->(
                         (shared_ptr<jag::oldscape::FolderSelection::FolderSelectionRequest>*)(param_1 + 40));
        std::atomic<jag::oldscape::FolderSelection::FolderPathRequestStatus>::operator=(paVar7, 1);
        puVar1 = PTR__objc_release_100ee9e60;
        (*(code*)PTR__objc_release_100ee9e60)(uVar2);
        (*(code*)puVar1)(uVar3);
    } else {
        paVar7 = (atomic<jag::oldscape::FolderSelection::FolderPathRequestStatus>*)
                     jag::shared_ptr<jag::oldscape::FolderSelection::FolderSelectionRequest>::operator->(
                         (shared_ptr<jag::oldscape::FolderSelection::FolderSelectionRequest>*)(param_1 + 40));
        std::atomic<jag::oldscape::FolderSelection::FolderPathRequestStatus>::operator=(paVar7, 2);
    }
}
