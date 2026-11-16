// libs/framework/graphicsapp/GraphicsApp.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.framework.graphicsapp

#include "GraphicsApp.h"

namespace jag {
    // 0x100009e70: GraphicsApp::OnFirstUpdate() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: GraphicsApp::SaveWindowPosition(Window const*) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: GraphicsApp::RenderContextInit(render::RenderContextDesc&) const has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1000df740: GraphicsApp::Instance() has the same machine code as OSClient::OSInstance()

    // 0x100b03290
    void DecodeRentalURL(ConnectionSettings& connectionSettings, const eastl::string& str) {
        unsigned long uVar1;
        ConnectionSettings* pCVar2;
        bool bVar3;
        long lVar4;
        unsigned long uVar5;
        unsigned long arg2;
        ReturnValue local_a0;
        ReturnValue local_80;
        unsigned long local_60;
        ReturnValue local_50;

        unsigned long arg1 = str.find("tws", 0);
        if ((arg1 != 18446744073709551615) && (lVar4 = str.find(".com", arg1 + 3), lVar4 != -1)) {
            uVar1 = lVar4 + 4;
            uVar5 = str.size();
            arg2 = lVar4 + 6;
            local_60 = uVar1;
            if (arg2 < uVar5) {
                local_a0 = str.substr(uVar1, 2);
                bVar3 = local_a0 ==
                        (*((value_type*)&DecodeRentalURL(ConnectionSettings&, eastl::stringconst&)::BASE_PORT_PREFIX));
            } else {
                bVar3 = false;
            }
            uVar1 = local_60;
            if (bVar3 != false) {
                lVar4 = str.find("/", arg2);
                if (lVar4 == -1) {
                    lVar4 = str.size();
                }
                local_80 = str.substr(arg2, lVar4 - arg2);
                local_50 = str.substr(arg1, uVar1 - arg1);
                pCVar2 = connectionSettings;
                connectionSettings = &local_50;
                local_50 + DAT_100e35f64;
                pCVar2->field_32 = &local_50;
                local_50 + DAT_100e35f67;
                pCVar2->field_64 = &local_50;
                return 1;
            }
        }
        return 0;
    }

    // 0x100b03510
    GraphicsApp::GraphicsApp() : BaseApp(), field_1128(false, 1) {
        uint8_t local_d0[24];

        uint8_t*** local_b0 = &field_1128;
        new (&field_1144) render::RenderDeviceOnEndFrame(false);
        field_1128 = &PTR__GraphicsApp_100f250d0;
        field_1144 = &PTR__GraphicsApp_100f25100;
        field_1153 = 0;
        MainLoopFrameTimer* local_58 = (MainLoopFrameTimer*)field_1160;
        uint8_t*** local_a8 = &field_1144;
        new (local_58) MainLoopFrameTimer();
        unique_ptr<testframework::GaiaConnection>* local_50 = (unique_ptr<testframework::GaiaConnection>*)&field_99896;
        local_50->unique_ptr<true, void>();
        m_maxForegroundFps = 0;
        m_maxBackgroundFps = 0;
        &field_99912->unique_ptr<true, void>();
        new (field_99920) shared_ptr();
        uint8_t* local_98 = field_99920;
        new (&field_99936) ConnectionSettings();
        uint8_t* local_90 = &field_99936;
        uint8_t* local_88 = &field_100096;
        new (local_88) eastl::string("127.0.0.1");
        uint8_t* local_80 = &field_100128;
        new (local_80) eastl::string();
        uint8_t* local_78 = &field_100160;
        new (local_78) eastl::string();
        uint8_t* local_70 = &field_100192;
        new (local_70) eastl::string();
        ReturnValue local_48 = (ReturnValue)281;
        uint64_t local_40 = 0;
        GraphicsApp* local_b8 = this;
        member_function_ptr mVar2 =
            std::bind<bool (GraphicsApp::*)(), GraphicsApp*>((bool__jag__GraphicsApp________)local_d0, local_48);
        mVar2.ptr = &local_48;
        uint8_t* local_68 = &field_100224;
        field_100224.function<std::__bind<bool (GraphicsApp::*)(), GraphicsApp*>, void>(mVar2);
        int* local_60 = &m_windowInitParams;
        new (local_60) WindowInitParams();
        field_100376 = 0;
        m_presentEnabled = true;
        m_insideMainLogic = 0;
        new (&field_100384) eastl::function<bool()>();
        new (&field_100416)
            eastl::fixed_queue<fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>, 4ul,
                               true>();
        new (&field_101376) std::mutex();
        MainLoopFrameTimer* this_00 = local_58;
        local_58->SetMainLoopInterval(20);
        this_00->Create<>();
        this_00->Create<>();
        this_00->Create<>();
        local_48 = std::make_unique<testframework::GaiaConnection>();
        *local_50 = local_48;
        local_48 = threading::GetNumCoresByAffinity();
        int* piVar1 = &local_48[1];
        if ((*piVar1 == 1) && (piVar1 = (int*)local_48[2], *piVar1 != 0)) {
            this_thread::SetAffinity(3);
            return;
        }
        this_thread::SetAffinity(1);
    }

    // 0x100b03b70
    GraphicsApp::~GraphicsApp() {
        field_1128 = &PTR__GraphicsApp_100f250d0;
        field_1144 = &PTR__GraphicsApp_100f25100;
        Destroy();
        Destroy();
        Destroy();
        uint8_t* this_00 = &field_99896;
        Singleton<graphicutils::Screengrabber>* this_02 = (Singleton<graphicutils::Screengrabber>*)this_00;
        this_00->reset(nullptr);
        this_02->Destroy();
        (&field_101376)->~mutex();
        field_100416.~fixed_queue();
        field_100384.~function();
        field_100224.~function();
        field_100192.~basic_string();
        field_100160.~basic_string();
        field_100128.~basic_string();
        field_100096.~basic_string();
        field_99936.~ConnectionSettings();
        field_99920->~shared_ptr();
        field_99912.~unique_ptr();
        this_00->~unique_ptr();
        field_1160->~MainLoopFrameTimer();
    }

    // 0x100b03d90
    void GraphicsApp::MainWindowInit(const SystemInitParams& systemInitParams) {
        char cVar3;
        uint64_t extraout_var;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_50;

        GraphicsApp* pGVar5 = this;
        SetSystemInitParams();
        ((HardwareInfo*)pGVar5->Instance())->InitPost();
        Window* pWVar4 = (Window*)operator new(752);
        auto windowInitParams = GetWindowInitParams();
        new (pWVar4) Window(this, systemInitParams, *windowInitParams);
        uint8_t* this_00 = &field_99912;
        this_00->reset(pWVar4);
        float local_30 = 0.0;
        float local_2c = 0.0;
        pWVar4 = (Window*)(*this_00).operator->();
        float local_28 = (float)pWVar4->GetWidth();
        pWVar4 = (Window*)(*this_00).operator->();
        uint32_t local_24 = pWVar4->GetHeight();
        auto local_40 = this_00->get();
        uint8_t uVar1 = PointerRelease();
        uint64_t local_38 = (((uint64_t)extraout_var << 8) | (uint8_t)uVar1);
        make_shared<OpenGLView, float, float, float, float, Window*, input::Input*>(
            &local_50, &local_30, &local_2c, &local_28, (Window**)&local_24, &local_40);
        SetView();
        bool cVar2 = Window::SupportsFullScreen();
        if (cVar2) {
            pWVar4 = (Window*)(*this_00).operator->();
            cVar2 = pWVar4->WasFullScreenInPreviousSession();
            pWVar4 = (Window*)(*this_00).operator->();
            cVar3 = pWVar4->IsFullScreen();
            if (cVar2 != cVar3) {
                pGVar5 = (GraphicsApp*)Instance();
                ToggleFullscreenMode(pGVar5);
            }
        }
        pWVar4 = (Window*)(*this_00).operator->();
        pWVar4->RegisterWindowClosedHandler(&field_100224);
    }

    // 0x100b04040
    void GraphicsApp::ToggleFullscreenMode() {
        uint8_t bVar1 = ((Window*)field_99912.operator->())->IsFullScreen();
        SetFullScreenMode((bool)(bVar1 ^ 1));
    }

    // 0x100b04080
    void GraphicsApp::MainWindowShutdown() {
        HTTPRequest* this_00;
        shared_ptr* this_01;

        if (GetDefaultRenderContext() != nullptr) {
            LogAssert("GetDefaultRenderContext() == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/graphicsapp/"
                      "GraphicsApp.cpp",
                      176, "Call MainShutdown() before calling MainWindowShutdown()!");
        }
        uint8_t* this_02 = &field_99912;
        if (this_02->operator_cast_to_bool()) {
            this_00 = (HTTPRequest*)(*this_02).operator->();
            this_01 = (shared_ptr*)this_00->GetContentType();
            if (shared_ptr::operator_cast_to_bool(this_01)) {
                (*this_01).operator->();
                OpenGLView::StopUpdating();
            }
            this_02->reset(nullptr);
        }
    }

    // 0x100b04160
    unsigned long GraphicsApp::MainInit(const SystemInitParams& systemInitParams) {
        RenderContext* pRVar3;
        uint64_t extraout_var;
        unsigned long uVar4;
        Singleton<render::RenderDevice>* this_01;

        bool cVar1 = (&field_99912)->operator_cast_to_bool();
        if ((!cVar1) && (cVar1 = field_99920->operator_cast_to_bool(), !cVar1)) {
            MainWindowInit();
        }
        RenderContextDesc local_48;
        render::CreateGlobalResources(local_48);
        uint8_t* openGLView = field_99920;
        local_48 = render::RenderContextDesc(*openGLView);
        GraphicsApp* pGVar5 = this;
        OnFirstUpdate(&local_48);
        auto pRVar2 = pGVar5->Instance();
        cVar1 = pRVar2->CreateRenderContexts(local_48);
        if (!cVar1) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/graphicsapp/"
                      "GraphicsApp.cpp",
                      219, "Failed to init RenderContext");
            uVar4 = 0;
        } else {
            field_1128.RegisterRenderDeviceCallback(1);
            field_1144.RegisterOnEndFrame();
            pGVar5 = this;
            SetSystemInitParams();
            pGVar5->Create<>();
            this_01 = (Singleton<render::RenderDevice>*)field_1160;
            this_01->MainInit();
            pRVar2 = (RenderDevice*)this_01->Instance();
            pRVar3 = pRVar2->GetCurrentThreadRenderContext();
            pRVar3->LockContext();
            UpdateMainAppWindow();
            cVar1 = IsValidValue(systemInitParams);
            uVar4 = (((uint64_t)extraout_var << 8) | (uint8_t)cVar1) & 4294967295;
            if (!cVar1) {
                pRVar2 = (RenderDevice*)Instance();
                pRVar3 = pRVar2->GetCurrentThreadRenderContext();
                pRVar3->UnlockContext();
            } else {
                (*openGLView).operator->();
                OpenGLView::StartUpdating();
            }
            FrameTime::NewFrame();
        }
        return uVar4;
    }

    // 0x100b04310
    void GraphicsApp::EnableNVAPI() {}

    // 0x100b04390
    void GraphicsApp::UpdateMainAppWindow() {
        if ((&field_99912)->operator_cast_to_bool()) {
            ((Window*)field_99912.operator->())->Update();
        }
        GraphicsApp* this_03 = this;
        if (!(HasMainWindowView())) {
            this_03 = (GraphicsApp*)field_99920;
            if (!(this_03->operator_cast_to_bool())) {
                return;
            }
        }
        if (((RenderDevice*)this_03->Instance())->GetReadyState() == 0) {
            GetDefaultRenderContext()->UpdateBackBufferSize(false);
        }
    }

    // 0x100b04410
    void GraphicsApp::MainShutdown() {
        char* in_RSI;
        uint8_t auVar2[16];

        AutoSingleton<ThreadPoolSingleton>* this_02 = (AutoSingleton<ThreadPoolSingleton>*)&field_1128;
        this_02->UnregisterRenderDeviceCallback();
        auVar2 = ((Layout*)this_02->Instance())->SSOBeginPtr();
        ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::__0>(auVar2._0_8_, in_RSI, auVar2._8_8_);
        ExecuteMainThreadEvents();
        GraphicsApp* this_01 = this;
        if (GetDefaultRenderContext() != nullptr) {
            this_01 = (GraphicsApp*)GetDefaultRenderContext();
            this_01->Shutdown();
        }
        this_01->Destroy();
        render::DestroyGlobalResources();
        this_01->Destroy();
        BucketManager::PrintMetrics();
        AutoSingleton<ThreadPoolSingleton>::Destroy();
        shareduniquedebug::ValidatePoolsAreEmpty();
    }

    // 0x100b04730
    void GraphicsApp::SetSystemInitParams(const SystemInitParams& systemInitParams) {
        SetSystemInitParams(systemInitParams);
        if (m_windowInitParams == 0) {
            m_windowInitParams = *(int*)&systemInitParams.field_0;
            field_100276 = *(uint32_t*)((long)&systemInitParams.field_0 + 4);
            field_100280 = systemInitParams.field_8;
        }
    }

    // 0x100b04770
    void GraphicsApp::Update(float arg1) {
        RenderDevice* pRVar6;
        RenderContext* pRVar7;
        FPSCounter* pFVar8;
        unsigned long long uVar9;
        GraphicsApp* pGVar10;
        unsigned int uVar11;

        ScopedGPUMemoryZone local_40("GraphicsAppUpdate");
        Singleton<render::RenderDevice>* this_03 = (Singleton<render::RenderDevice>*)field_1160;
        if (this_03->GetX() == 0) {
            LogAssert("m_Timer.GetMainLoopInterval() > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/graphicsapp/"
                      "GraphicsApp.cpp",
                      320, nullptr);
        }
        UpdateInternal();
        if (field_100376 == '\0') {
            pGVar10 = this;
            OnFirstUpdate();
            pRVar6 = (RenderDevice*)pGVar10->Instance();
            pRVar7 = (RenderContext*)pRVar6->GetPrimaryRenderContext();
            pRVar7->SetRenderTargets(GetDefaultRenderContext()->GetBackBuffer());
            pRVar6 = (RenderDevice*)pRVar7->Instance();
            pRVar7 = pRVar6->GetCurrentThreadRenderContext();
            pRVar7->UnlockContext();
            field_100376 = 1;
        }
        uint8_t bVar1 = HasFocus();
        unsigned int uVar5 =
            this_03->Update((unsigned long)*(unsigned int*)(field_99920 + (unsigned long)(bVar1 ^ 1) * 4 - 16));
        char cVar2 = this_03->IsRenderingDisabled();
        if (cVar2) {
            local_38 = render::ScopedGPUMemoryZone("GraphicsAppUpdate_RenderingDisabled");
            if (uVar5 != 0) {
                m_insideMainLogic = 1;
                pRVar6 = (RenderDevice*)&local_38->Instance();
                pRVar7 = pRVar6->GetCurrentThreadRenderContext();
                local_48 = lock_guard<render::RenderContext>(*pRVar7);
                UpdateMainAppWindow();
                do {
                    uVar5 = uVar5 - 1;
                    slot32(uVar5 == 0);
                    this_03->MainLogic();
                    if (uVar5 != 0) {
                        cVar2 = (&field_100384)->operator_cast_to_bool();
                        if (cVar2) {
                            cVar2 = eastl::function<bool()>::operator()((function<bool()>*)&field_100384);
                            if (!cVar2)
                                goto LAB_100b04911;
                        }
                    }
                    cVar2 = this_03->IsRenderingDisabled();
                    if ((!cVar2) || (uVar5 == 0))
                        goto LAB_100b04911;
                } while (true);
            }
            this_thread::Sleep(1);
            goto LAB_100b04b8f;
        }
        ScopedGPUMemoryZone local_38("GraphicsAppUpdate_RenderingEnabled");
        cVar2 = input::InputState::IsKeyDown(55);
        bVar1 = 1;
        if (!cVar2) {
            bVar1 = input::InputState::IsKeyDown(54);
        }
        cVar2 = input::InputState::IsKeyDown(59);
        uint8_t bVar3 = 1;
        if (!cVar2) {
            bVar3 = input::InputState::IsKeyDown(62);
        }
        if ((bVar1 & bVar3) == 1) {
            cVar2 = input::InputState::IsKeyDown(3);
            if (!cVar2)
                goto LAB_100b04996;
            if (Update(float)::fsKeyDownLastFrame == '\0') {
                cVar2 = '\x01';
                ToggleFullscreenMode();
                goto LAB_100b04998;
            }
        } else {
        LAB_100b04996:
            cVar2 = '\0';
        LAB_100b04998:
            Update(float)::fsKeyDownLastFrame = cVar2;
        }
        pGVar10 = (GraphicsApp*)55;
        cVar2 = input::InputState::IsKeyDown(55);
        if (cVar2) {
            pGVar10 = (GraphicsApp*)12;
            cVar2 = input::InputState::IsKeyDown(12);
            if (cVar2) {
                pGVar10 = this;
                WindowClosedCallback();
            }
        }
        pRVar6 = (RenderDevice*)pGVar10->Instance();
        pRVar7 = pRVar6->GetCurrentThreadRenderContext();
        if (pRVar7 == nullptr) {
            LogAssert("render::RenderDevice::Instance().GetCurrentThreadRenderContext()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/graphicsapp/"
                      "GraphicsApp.cpp",
                      429, nullptr);
        }
        pRVar6 = (RenderDevice*)pRVar6->Instance();
        pRVar7 = pRVar6->GetCurrentThreadRenderContext();
        lock_guard<render::RenderContext> local_48(*pRVar7);
        UpdateMainAppWindow();
        ExecuteMainDrawEvents();
        m_insideMainLogic = 1;
        if (uVar5 != 0) {
            uVar11 = 0;
        LAB_100b04a59:
            do {
                slot32(uVar11 == uVar5 - 1);
                this_03->MainLogic();
                if (uVar11 != uVar5 - 1) {
                    cVar2 = (&field_100384)->operator_cast_to_bool();
                    if (cVar2) {
                        bVar1 = eastl::function<bool()>::operator()((function<bool()>*)&field_100384);
                        uVar11 = uVar11 + 1;
                        if ((bVar1 & uVar11 < uVar5) == 0)
                            break;
                        goto LAB_100b04a59;
                    }
                }
                uVar11 = uVar11 + 1;
            } while (uVar11 < uVar5);
        }
        m_insideMainLogic = 0;
        pRVar7 = GetDefaultRenderContext();
        cVar2 = pRVar7->Begin();
        if (cVar2) {
            FrameTime::NewFrame();
            pFVar8 = (FPSCounter*)this_03->GetMaterial();
            uVar9 = FrameTime::GetCurrentTimeNS();
            pFVar8->RecordDrawStartTime(uVar9);
            slot33(arg1, this);
            pFVar8 = (FPSCounter*)this_03->GetMaterial();
            uVar9 = SystemTimer::GetTimeNS<std::chrono::steady_clock>();
            pFVar8->RecordDrawEndTime(uVar9);
            pFVar8 = (FPSCounter*)this_03->GetMaterial();
            pFVar8->UpdateFPSCounter();
            pFVar8 = (FPSCounter*)this_03->GetMaterial();
            pFVar8->UpdateLPSCounter();
            pRVar7 = GetDefaultRenderContext();
            pRVar7->End();
        }
        ((Screengrabber*)pRVar7->Instance())->OnScreenGrabbed();
        cVar2 = HasMainWindowView();
        if ((cVar2) && (m_presentEnabled != false)) {
            pRVar7 = GetDefaultRenderContext();
            pRVar7->Present();
        }
        this_03->PostFrameUpdate();
        pRVar6 = (RenderDevice*)this_03->Instance();
        pRVar6->OnEndFrame();
    LAB_100b04b86:
    LAB_100b04b8f:
        return;
    LAB_100b04911:
        m_insideMainLogic = 0;
        goto LAB_100b04b86;
    }

    // 0x100b04c10
    unsigned long GraphicsApp::HasFocus() {
        HTTPRequest* pHVar2;
        shared_ptr* psVar3;
        unsigned long uVar4;

        uint8_t* this_01 = &field_99912;
        if (this_01->operator_cast_to_bool()) {
            pHVar2 = (HTTPRequest*)(*this_01).operator->();
            psVar3 = (shared_ptr*)pHVar2->GetContentType();
            if (shared_ptr::operator_cast_to_bool(psVar3)) {
                pHVar2 = (HTTPRequest*)(*this_01).operator->();
                psVar3 = (shared_ptr*)pHVar2->GetContentType();
                if (shared_ptr::operator_cast_to_bool(psVar3)) {
                    uVar4 = ((OpenGLView*)(*psVar3).operator->())->HasFocus();
                    goto LAB_100b04c93;
                }
            }
        }
        uVar4 = 0;
    LAB_100b04c93:
        return uVar4 & 18446744073709551361;
    }

    // 0x100b04da0
    void GraphicsApp::ExecuteMainDrawEvents() {
        int iVar2;
        RenderDevice* this_01;
        function<void_(BaseApp*), _128ul, _16ul, _(fixedfunction::Methods) 0>* callback;
        GraphicsApp* local_e8;
        uint8_t local_d8[160];
        long local_38;

        GraphicsApp* local_e0 = this;
        bool cVar1 = this_thread::IsMainThread();
        if (!cVar1) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/graphicsapp/"
                      "GraphicsApp.cpp",
                      794, nullptr);
        }
        uint8_t* mutex = &local_e0->field_101376;
        uint8_t* this_00 = &local_e0->field_100416;
        do {
            this_01 = (RenderDevice*)Instance();
            iVar2 = this_01->GetReadyState();
            if (iVar2 != 0)
                break;
            new (local_d8) math::Vector2T();
            new (&local_e8) std::scoped_lock(*mutex);
            cVar1 = this_00->empty();
            iVar2 = 3;
            if (!cVar1) {
                callback = (function<void_(BaseApp*), _128ul, _16ul, _(fixedfunction::Methods) 0>*)eastl::queue<
                    fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>,
                    eastl::fixed_list<fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>,
                                      4ul>>::front();
                *local_d8 = *callback;
                iVar2 = 0;
                eastl::queue<
                    fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>,
                    eastl::fixed_list<fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>,
                                      4ul>>::pop();
            }
            if (!cVar1) {
                local_e8 = local_e0;
                fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::operator()(
                    (function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>*)local_d8, (BaseApp**)&local_e8);
                iVar2 = 0;
            }
            this = (GraphicsApp*)local_d8;
        } while (iVar2 == 0);
    }

    // 0x100b04f60
    bool GraphicsApp::HasMainWindowView() const {
        auto this_00 = field_99912.operator->();
        auto this_01 = this_00->GetContentType();
        bool cVar1 = (&field_99912)->operator_cast_to_bool();
        if ((!cVar1) || (cVar1 = shared_ptr::operator_cast_to_bool(this_01), !cVar1)) {
            return false;
        }
        long lVar3 = GetDefaultRenderContext()->GetDesc();
        return *this_01 == (*((lVar3 + 16)));
    }

    // 0x100b04fe0
    void GraphicsApp::SetFullScreenMode(bool arg1) {
        OpenGLView* pOVar1;
        uint64_t uVar3;
        int arg2;

        auto this_00 = field_99912.operator->();
        auto this_02 = this_00->GetContentType();
        if (shared_ptr::operator_cast_to_bool(this_02) != '\0') {
            pOVar1 = (OpenGLView*)(*this_02).operator->();
            uVar3 = pOVar1->GetNativeFullscreenResolution();
            if (((int)uVar3 != 0) && (arg2 = (int)((unsigned long)uVar3 >> 32), arg2 != 0)) {
                pOVar1 = (OpenGLView*)(*this_02).operator->();
                pOVar1->SetFullScreenResolution((int)uVar3, arg2);
                ((Window*)field_99912.operator->())->SetFullScreen(arg1);
            }
        }
    }

    // 0x100b05080
    void GraphicsApp::SetCursor(const RGBAImage& rgbaImage, unsigned int arg2, unsigned int arg3) {
        auto this_00 = field_99912.operator->();
        auto this_02 = this_00->GetContentType();
        if (shared_ptr::operator_cast_to_bool(this_02) != '\0') {
            ((OpenGLView*)(*this_02).operator->())->SetCursor(rgbaImage, arg2, arg3);
        }
    }

    // 0x100b050e0
    void GraphicsApp::ResetCursor() {
        auto this_00 = field_99912.operator->();
        auto this_02 = this_00->GetContentType();
        if (shared_ptr::operator_cast_to_bool(this_02) != '\0') {
            ((OpenGLView*)(*this_02).operator->())->ResetCursor();
        }
    }

    // 0x100b05120
    uint64_t GraphicsApp::WindowClosedCallback() {
        SetAppRunning((uint8_t)this);
        return 0;
    }

    // 0x100b05130
    void GraphicsApp::OnEndFrame() {}

    // 0x100b05150
    void GraphicsApp::LoadingComplete() {}

    // 0x100b05160
    void GraphicsApp::QueueMainDrawThreadEvent(
        fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0> const& callback) {

        scoped_lock<std::mutex> local_20(field_101376);
        field_100416.push(callback);
    }

    // 0x100b051c0
    void GraphicsApp::SetupGaiaConnection(unsigned char arg1) {
        GaiaConnection* pGVar2;
        RenderMaterial* this_01;
        function<void()>* this_02;
        function<void()> local_68[48];
        long local_38;

        if (!(field_100160.empty())) {
            if (!(field_100192.empty())) {
                pGVar2 = (GaiaConnection*)field_99896.operator->();
                if (!(pGVar2->Init(field_100160, field_100192, arg1))) {
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/"
                                    "graphicsapp/GraphicsApp.cpp",
                                    635, "Failed to init Testframework Connection");
                }
                pGVar2 = (GaiaConnection*)field_99896.operator->();
                std::function<void()>::function<GraphicsApp::SetupGaiaConnection(unsigned char)::__1, void>(local_68,
                                                                                                            (__1*)this);
                pGVar2->SetDoShutdown(local_68);
                this_02 = local_68;
                this_02->~function();
                this_01 = (RenderMaterial*)this_02->Instance();
                this_01->SetAlphaTestThreshold('\x04');
                goto LAB_100b05246;
            }
        }
        field_99896.reset(nullptr);
        auto this_00 = logger::default_logger();
        this_00->Log(false, 8,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/graphicsapp/"
                     "GraphicsApp.cpp",
                     652, "Port and IP not specified, skipping Gaia init");
    LAB_100b05246:
    }

    // 0x100b05350
    void GraphicsApp::ProcessGaiaConnection() {
        if ((&field_99896)->operator_cast_to_bool() != '\0') {
            ((GaiaConnection*)field_99896.operator->())->MainLogic();
        }
    }

    // 0x100b053b0
    void GraphicsApp::SignalApplicationReadyForGaiaProcessing() {
        if ((&field_99896)->operator_cast_to_bool() != '\0') {
            ((GaiaConnection*)field_99896.operator->())->SetApplicationIsReady();
        }
    }

    // 0x100b05400
    void GraphicsApp::ProcessArguments(const SystemInitParams& systemInitParams) {
        Logger* pLVar2;
        uint64_t uVar3;
        uint64_t uVar4;
        uint64_t uVar5;

        eastl::string local_70;
        auto local_50 = systemInitParams.GetParameter("-rental");
        local_70 = &local_50;
        if (!(local_70.empty())) {
            if (!(DecodeRentalURL((ConnectionSettings*)&field_99936, &local_70))) {
                pLVar2 = logger::default_logger();
                uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pLVar2->Log(false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/"
                            "graphicsapp/GraphicsApp.cpp",
                            693, "Malformed rental URL \'%s\', ignoring -rental", uVar3);
            } else {
                pLVar2 = logger::default_logger();
                uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pLVar2->Log(false, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/"
                            "graphicsapp/GraphicsApp.cpp",
                            689, "Will connect to game server at %s on port %s and HTTP port %s", uVar3, uVar4, uVar5);
            }
        }
        local_50 = systemInitParams.GetParameter("-server");
        local_70 = &local_50;
        if (!(local_70.empty())) {
            field_99936 = &local_70;
            pLVar2 = logger::default_logger();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar2->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/graphicsapp/"
                        "GraphicsApp.cpp",
                        702, "Will look for game server at: %s", uVar3);
        }
        local_50 = systemInitParams.GetParameter("-port");
        local_70 = &local_50;
        if (!(local_70.empty())) {
            field_99968 = &local_70;
            pLVar2 = logger::default_logger();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar2->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/graphicsapp/"
                        "GraphicsApp.cpp",
                        710, "Will connect to game server on port: %s", uVar3);
        }
        local_50 = systemInitParams.GetParameter("-httpport");
        local_70 = &local_50;
        if (!(local_70.empty())) {
            field_100000 = &local_70;
            pLVar2 = logger::default_logger();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar2->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/graphicsapp/"
                        "GraphicsApp.cpp",
                        718, "Will connect to game server on http port: %s", uVar3);
        }
        local_50 = systemInitParams.GetParameter("-pack");
        local_70 = &local_50;
        if (!(local_70.empty())) {
            pLVar2 = logger::default_logger();
            pLVar2->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/graphicsapp/"
                        "GraphicsApp.cpp",
                        728, "Local mode loading is not supported in Final build");
        }
        local_50 = systemInitParams.GetParameter("-clienttoken");
        local_70 = &local_50;
        if (!(local_70.empty())) {
            field_100064 = &local_70;
            pLVar2 = logger::default_logger();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar2->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/graphicsapp/"
                        "GraphicsApp.cpp",
                        736, "Got client token: %s", uVar3);
        }
        local_50 = systemInitParams.GetParameter("-toolserver");
        local_70 = &local_50;
        if (!(local_70.empty())) {
            field_100096 = &local_70;
            pLVar2 = logger::default_logger();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar2->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/graphicsapp/"
                        "GraphicsApp.cpp",
                        743, "Got tool server address: %s", uVar3);
        }
        local_50 = systemInitParams.GetParameter("-toolport");
        local_70 = &local_50;
        if (!(local_70.empty())) {
            field_100128 = &local_70;
            pLVar2 = logger::default_logger();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar2->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/graphicsapp/"
                        "GraphicsApp.cpp",
                        750, "Got tool port address: %s", uVar3);
        }
        local_50 = systemInitParams.GetParameter("-automate_ip");
        local_70 = &local_50;
        if (!(local_70.empty())) {
            field_100160 = &local_70;
            pLVar2 = logger::default_logger();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar2->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/graphicsapp/"
                        "GraphicsApp.cpp",
                        757, "Got automate server address: %s", uVar3);
        }
        local_50 = systemInitParams.GetParameter("-automate_port");
        local_70 = &local_50;
        if (!(local_70.empty())) {
            field_100192 = &local_70;
            pLVar2 = logger::default_logger();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar2->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/graphicsapp/"
                        "GraphicsApp.cpp",
                        764, "Got automate port: %s", uVar3);
        }
        if (((Args*)systemInitParams.second())->GetArgc() < 2) {
            PrintArgUsage();
        }
    }

    // 0x100b05ab0
    void GraphicsApp::PrintArgUsage() {
        (logger::default_logger())
            ->Log(false, 7,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/graphicsapp/"
                  "GraphicsApp.cpp",
                  789,
                  "Usage: GraphicsTestApp [-server <connect address> | -port <connect port> | -httpport <connect port> "
                  "| -pack <pack path> | -clienttoken <token> | -toolserver <connect address> | -toolport <connect "
                  "port> | -debugger <bool> ]");
    }

    // 0x100b05b00
    void GraphicsApp::SetWindow(std::unique_ptr<Window>&& window) {
        field_99912 = window;
    }

    // 0x100b05b50
    void GraphicsApp::SetView(const shared_ptr<OpenGLView>& openGLView) {
        unsigned int uVar2;
        Window* this_01;
        RenderContext* pRVar5;
        long lVar6;
        shared_ptr<OpenGLView>* local_f8[2];
        function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0> local_d8[168];
        long local_30;

        GraphicsApp* this_02 = this;
        if (!(this_thread::IsMainThread())) {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/graphicsapp/"
                      "GraphicsApp.cpp",
                      829, nullptr);
        }
        auto this_00 = this_02->Instance();
        shared_ptr local_e8(field_99920);
        *field_99920 = openGLView;
        if ((&field_99912)->operator_cast_to_bool()) {
            this_01 = (Window*)field_99912.operator->();
            this_01->SetView(openGLView);
        }
        long lVar3 = this_00->GetOrigin();
        if (*(char*)(lVar3 + 224) != '\0') {
            local_f8[0] = openGLView;
            fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::__2, void>(local_d8, (__2*)local_f8);
            render::RenderDevice::RunWithThreadPoolRenderContexts(*local_d8);
        }
        auto pRVar4 = this_00->GetCurrentThreadRenderContext();
        if (pRVar4 != nullptr) {
            pRVar4 = this_00->GetCurrentThreadRenderContext();
            pRVar5 = (RenderContext*)this_00->GetPrimaryRenderContext();
            if (pRVar4 != pRVar5) {
                pRVar4 = this_00->GetCurrentThreadRenderContext();
                pRVar4->SetView(openGLView);
            }
        }
        lVar3 = this_00->GetPrimaryRenderContext();
        if (lVar3 != 0) {
            pRVar4 = (RenderContext*)this_00->GetPrimaryRenderContext();
            new (local_f8) shared_ptr(openGLView);
            fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::__3, void>(local_d8, (__3*)local_f8);
            pRVar4->RunSynchronouslyOnRenderThread(*local_d8, true);
            SetView(shared_ptr<OpenGLView> const&)::$_3::~__3((__3*)local_f8);
        }
        if (shared_ptr::operator_cast_to_bool(&local_e8)) {
            lVar3 = local_e8.end();
            lVar6 = openGLView.end();
            if (lVar3 != lVar6) {
                if (!(local_e8.unique())) {
                    uVar2 = local_e8.use_count();
                    LogAssert("!oldView || oldView.get() == view.get() || oldView.unique()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/"
                              "graphicsapp/GraphicsApp.cpp",
                              861, "Leaked OpenGLView shared_ptr (count %i)", (unsigned long)uVar2);
                }
            }
        }
    }

    // 0x100b05df0
    void SetConnectionSettingsAddressPort(ConnectionSettings& connectionSettings,
                                          const SystemSettings& systemSettings) {
        Logger* logger;
        uint64_t uVar2;
        uint64_t uVar3;

        Settings local_f8(systemSettings, 1, "Connection");
        if (connectionSettings.empty()) {
            if (connectionSettings.field_32.empty()) {
                if (connectionSettings.field_96.empty()) {
                    local_f8.GetValue<eastl::string>(connectionSettings, "address");
                    local_f8.GetValue<eastl::string>(connectionSettings.field_32, "port");
                    logger = logger::default_logger();
                    uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    logger->Log(false, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/"
                                "graphicsapp/GraphicsApp.cpp",
                                872,
                                "GraphicsApp: Using previously stored server address and port: -server %s, -port %s",
                                uVar2, uVar3);
                }
            }
        }
        if (!(connectionSettings.empty())) {
            if (!(connectionSettings.field_32.empty())) {
                local_f8.SetValue<char>("address", connectionSettings);
                local_f8.SetValue<char>("port", connectionSettings.field_32);
            }
        }
    }

    // 0x100b0adc0
    void GraphicsApp::SetupGaiaConnection(unsigned char)::$_1::operator()() const {
        (**(void (**)(...))(**(long**)this + 80))(*(long**)this, 0);
    }

} // namespace jag
