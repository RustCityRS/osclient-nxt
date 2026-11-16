// libs/framework/graphicsapp/GraphicsApp.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.framework.graphicsapp

#include "GraphicsApp.h"

namespace jag {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    GraphicsApp::OnFirstUpdate();

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    GraphicsApp::SaveWindowPosition(Window const*);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    GraphicsApp::RenderContextInit(render::RenderContextDesc&) const;

    // 0x1000df740: the linker folded this into OSClient::OSInstance(), which has identical code
    GraphicsApp::Instance();

    // 0x100b03290, 496 bytes, placed by debug map only (low confidence)
    // DecodeRentalURL(ConnectionSettings&, eastl::string const&)
    undefined8 DecodeRentalURL(ConnectionSettings* param_1, basic_string* param_2) {
        ConnectionSettings* pCVar1;
        bool bVar2;
        long lVar3;
        ulong uVar4;
        basic_string local_a0[32];
        basic_string local_80[32];
        long local_60;
        basic_string local_50[32];

        lVar3 = param_2->find("tws", 0);
        if ((lVar3 != -1) && (lVar3 = param_2->find(".com", lVar3 + 3), lVar3 != -1)) {
            uVar4 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            local_60 = lVar3 + 4;
            if (lVar3 + 6U < uVar4) {
                eastl::string::substr((ulong)local_a0, (ulong)param_2);
                bVar2 = eastl::operator==(local_a0, (value_type*)&DecodeRentalURL(
                                                        ConnectionSettings&, eastl::stringconst&)::BASE_PORT_PREFIX);
                local_a0->~basic_string();
            } else {
                bVar2 = false;
            }
            if (bVar2 != false) {
                lVar3 = param_2->find("/", lVar3 + 6U);
                if (lVar3 == -1) {
                    eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                }
                eastl::string::substr((ulong)local_80, (ulong)param_2);
                eastl::string::substr((ulong)local_50, (ulong)param_2);
                pCVar1 = param_1;
                eastl::string::operator=((eastl::string*)param_1, local_50);
                local_50->~basic_string();
                eastl::operator+((eastl*)local_50, (value_type*)&DAT_100e35f64, local_80);
                eastl::string::operator=((eastl::string*)&pCVar1->field_32, local_50);
                local_50->~basic_string();
                eastl::operator+((eastl*)local_50, (value_type*)&DAT_100e35f67, local_80);
                eastl::string::operator=((eastl::string*)&pCVar1->field_64, local_50);
                local_50->~basic_string();
                local_80->~basic_string();
                return 1;
            }
        }
        return 0;
    }

    // 0x100b03510, 896 bytes, base-object constructor, placed by class name and debug map
    // GraphicsApp::GraphicsApp()
    void GraphicsApp::GraphicsApp() {
        int* piVar1;
        _func_decltype_nullptr* p_Var2;
        MainLoopFrameTimer* this_00;
        undefined1 local_d0[24];
        GraphicsApp* local_b8;
        undefined*** local_b0;
        undefined*** local_a8;
        undefined1* local_a0;
        undefined1* local_98;
        undefined1* local_90;
        undefined1* local_88;
        undefined1* local_80;
        undefined1* local_78;
        undefined1* local_70;
        undefined1* local_68;
        int* local_60;
        MainLoopFrameTimer* local_58;
        unique_ptr<testframework::GaiaConnection, std::default_delete<testframework::GaiaConnection>>* local_50;
        threading local_48;

        new (this) BaseApp();
        new (&field_1128, false, 1) render::RenderDeviceCallback();
        p_Var2 = (_func_decltype_nullptr*)0;
        local_b0 = &field_1128;
        new (&field_1144, false) render::RenderDeviceOnEndFrame();
        field_0 = &PTR__GraphicsApp_100f24f90;
        field_1128 = &PTR__GraphicsApp_100f250d0;
        field_1144 = &PTR__GraphicsApp_100f25100;
        field_1153 = 0;
        local_58 = (MainLoopFrameTimer*)field_1160;
        local_a8 = &field_1144;
        MainLoopFrameTimer::MainLoopFrameTimer(local_58);
        local_50 = (unique_ptr<testframework::GaiaConnection,
                               std::default_delete<testframework::GaiaConnection>>*)&field_99896;
        std::unique_ptr<testframework::GaiaConnection,
                        std::default_delete<testframework::GaiaConnection>>::unique_ptr<true, void>(local_50);
        m_maxForegroundFps = 0;
        m_maxBackgroundFps = 0;
        local_a0 = &field_99912;
        std::unique_ptr<Window, std::default_delete<Window>>::unique_ptr<true, void>(
            (unique_ptr<Window, std::default_delete<Window>>*)local_a0);
        new (field_99920, p_Var2) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        local_98 = field_99920;
        new (&field_99936) ConnectionSettings();
        local_90 = &field_99936;
        new (&local_48) eastl::allocator("EASTL basic_string");
        local_88 = &field_100096;
        new (local_88) eastl::string("127.0.0.1", (allocator*)&local_48);
        local_80 = &field_100128;
        new (local_80) eastl::string();
        local_78 = &field_100160;
        new (local_78) eastl::string();
        local_70 = &field_100192;
        new (local_70) eastl::string();
        local_48.field_0 = 281;
        local_48.field_8 = 0;
        local_b8 = this;
        std::bind<bool (GraphicsApp::*)(), GraphicsApp*>((_func_bool*)local_d0, (GraphicsApp**)&local_48);
        local_68 = &field_100224;
        std::function<bool()>::function<std::__bind<bool (GraphicsApp::*)(), GraphicsApp*>, void>(&field_100224);
        local_60 = &m_windowInitParams;
        new (local_60) WindowInitParams();
        field_100376 = 0;
        m_presentEnabled = true;
        m_insideMainLogic = 0;
        eastl::function<bool()>::function((function<bool()>*)&field_100384);
        eastl::fixed_queue<fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>, 4ul, true>::
            fixed_queue((fixed_queue<fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>,
                                     4ul, true>*)&field_100416);
        new (&field_101376) std::mutex();
        this_00 = local_58;
        local_58->SetMainLoopInterval(20);
        Singleton<hardware::HardwareInfo>::Create<>((Singleton<hardware::HardwareInfo>*)this_00);
        Singleton<render::RenderDevice>::Create<>((Singleton<render::RenderDevice>*)this_00);
        Singleton<graphicutils::Screengrabber>::Create<>((Singleton<graphicutils::Screengrabber>*)this_00);
        std::make_unique<testframework::GaiaConnection>();
        std::unique_ptr<testframework::GaiaConnection, std::default_delete<testframework::GaiaConnection>>::operator=(
            local_50, (unique_ptr*)&local_48);
        local_48.~unique_ptr();
        local_48.GetNumCoresByAffinity();
        piVar1 = (int*)std::array<unsigned int, 5ul>::operator[]((array<unsigned int, 5ul>*)&local_48, 1);
        if ((*piVar1 == 1) &&
            (piVar1 = (int*)std::array<unsigned int, 5ul>::operator[]((array<unsigned int, 5ul>*)&local_48, 2),
             *piVar1 != 0)) {
            this_thread::SetAffinity(3);
            return;
        }
        this_thread::SetAffinity(1);
    }

    // 0x100b03b70, 304 bytes, base-object destructor, placed by class name
    // GraphicsApp::~GraphicsApp()
    void GraphicsApp::~GraphicsApp() {
        undefined1* this_00;
        Singleton<graphicutils::Screengrabber>* this_02;

        field_0 = &PTR__GraphicsApp_100f24f90;
        field_1128 = &PTR__GraphicsApp_100f250d0;
        field_1144 = &PTR__GraphicsApp_100f25100;
        Destroy();
        ((GraphicsApp*)this)->Destroy();
        ((GraphicsApp*)this)->Destroy();
        this_00 = &field_99896;
        this_02 = (Singleton<graphicutils::Screengrabber>*)this_00;
        this_00->reset(0);
        this_02->Destroy();
        (&field_101376)->~mutex();
        eastl::fixed_queue<fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>, 4ul, true>::
            ~fixed_queue((fixed_queue<fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>,
                                      4ul, true>*)&field_100416);
        eastl::function<void()>::~function((function<void()>*)&field_100384);
        (&m_windowInitParams)->~WindowInitParams();
        std::function<bool()>::~function((function<bool()>*)&field_100224);
        (&field_100192)->~basic_string();
        (&field_100160)->~basic_string();
        (&field_100128)->~basic_string();
        (&field_100096)->~basic_string();
        (&field_99936)->~ConnectionSettings();
        field_99920->~shared_ptr();
        (&field_99912)->~unique_ptr();
        this_00->~unique_ptr();
        field_1160->~MainLoopFrameTimer();
        (&field_1144)->~RenderDeviceOnEndFrame();
        (&field_1128)->~RenderDeviceCallback();
        ~BaseApp();
    }

    // 0x100b03d30, 16 bytes, complete-object destructor, placed by class name
    // GraphicsApp::~GraphicsApp(): jumps straight to the base-object destructor

    // 0x100b03d60, 16 bytes, deleting destructor, placed by class name
    // GraphicsApp::~GraphicsApp()
    void GraphicsApp::~GraphicsApp() {
        code* pcVar1;

        /* WARNING: Does not return */
        pcVar1 = (code*)invalidInstructionException();
        (*pcVar1)();
    }

    // 0x100b03d90, 384 bytes, placed by class name
    // GraphicsApp::MainWindowInit(SystemInitParams const&)
    void GraphicsApp::MainWindowInit(SystemInitParams* param_1) {
        undefined1* this_00;
        char cVar1;
        char cVar2;
        HardwareInfo* this_01;
        Window* pWVar3;
        WindowInitParams* pWVar4;
        GraphicsApp* pGVar5;
        jag local_50[16];
        Window* local_40;
        Input* local_38;
        float local_30;
        float local_2c;
        float local_28;
        float local_24;

        pGVar5 = this;
        (*(code*)field_0[16])();
        this_01 = (HardwareInfo*)pGVar5->Instance();
        this_01->InitPost();
        pWVar3 = operator_new(752);
        pWVar4 = (WindowInitParams*)GetWindowInitParams(this);
        Window::Window(pWVar3, this, param_1, pWVar4);
        this_00 = &field_99912;
        this_00->reset(pWVar3);
        local_30 = 0.0;
        local_2c = 0.0;
        pWVar3 = (Window*)std::unique_ptr<Window, std::default_delete<Window>>::operator->(
            (unique_ptr<Window, std::default_delete<Window>>*)this_00);
        local_28 = (float)pWVar3->GetWidth();
        pWVar3 = (Window*)std::unique_ptr<Window, std::default_delete<Window>>::operator->(
            (unique_ptr<Window, std::default_delete<Window>>*)this_00);
        local_24 = (float)pWVar3->GetHeight();
        local_40 = (Window*)this_00->get();
        local_38 = (Input*)(*(code*)field_0[11])(this);
        make_shared<OpenGLView, float, float, float, float, Window*, input::Input*>(
            local_50, &local_30, &local_2c, &local_28, &local_24, &local_40, &local_38);
        (*(code*)field_0[15])(this, local_50);
        local_50->~shared_ptr();
        cVar1 = Window::SupportsFullScreen();
        if (cVar1 != '\0') {
            pWVar3 = (Window*)std::unique_ptr<Window, std::default_delete<Window>>::operator->(
                (unique_ptr<Window, std::default_delete<Window>>*)this_00);
            cVar1 = pWVar3->WasFullScreenInPreviousSession();
            pGVar5 = (GraphicsApp*)std::unique_ptr<Window, std::default_delete<Window>>::operator->(
                (unique_ptr<Window, std::default_delete<Window>>*)this_00);
            cVar2 = pGVar5->IsFullScreen();
            if (cVar1 != cVar2) {
                pGVar5 = (GraphicsApp*)Instance(pGVar5);
                ToggleFullscreenMode(pGVar5);
            }
        }
        pWVar3 = (Window*)std::unique_ptr<Window, std::default_delete<Window>>::operator->(
            (unique_ptr<Window, std::default_delete<Window>>*)this_00);
        pWVar3->RegisterWindowClosedHandler((function*)&field_100224);
    }

    // 0x100b04040, 64 bytes, placed by class name
    // GraphicsApp::ToggleFullscreenMode()
    void GraphicsApp::ToggleFullscreenMode() {
        Window* this_00;
        byte bVar1;

        this_00 = (Window*)std::unique_ptr<Window, std::default_delete<Window>>::operator->(
            (unique_ptr<Window, std::default_delete<Window>>*)&field_99912);
        bVar1 = this_00->IsFullScreen();
        SetFullScreenMode(this, (bool)(bVar1 ^ 1));
    }

    // 0x100b04080, 144 bytes, placed by class name
    // GraphicsApp::MainWindowShutdown()
    void GraphicsApp::MainWindowShutdown() {
        bool bVar1;
        HTTPRequest* this_00;
        shared_ptr* this_01;
        undefined1* this_02;

        if (GetDefaultRenderContext(this) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("GetDefaultRenderContext() == nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/graphicsapp/"
                      "GraphicsApp.cpp",
                      176, "Call MainShutdown() before calling MainWindowShutdown()!");
        }
        this_02 = &field_99912;
        bVar1 = this_02->operator_cast_to_bool();
        if (bVar1) {
            this_00 = (HTTPRequest*)std::unique_ptr<Window, std::default_delete<Window>>::operator->(
                (unique_ptr<Window, std::default_delete<Window>>*)this_02);
            this_01 = (shared_ptr*)this_00->GetContentType();
            bVar1 = shared_ptr::operator_cast_to_bool(this_01);
            if (bVar1) {
                shared_ptr<OpenGLView>::operator->((shared_ptr<OpenGLView>*)this_01);
                OpenGLView::StopUpdating();
            }
            this_02->reset(0);
        }
    }

    // 0x100b04160, 416 bytes, placed by class name
    // GraphicsApp::MainInit(SystemInitParams const&)
    undefined4 GraphicsApp::MainInit(SystemInitParams* param_1) {
        undefined1* this_00;
        bool bVar1;
        undefined4 uVar3;
        RenderDevice* pRVar4;
        undefined8 uVar5;
        RenderContext* pRVar6;
        GraphicsApp* pGVar7;
        Singleton<render::RenderDevice>* this_01;
        RenderContextDesc local_48;

        bVar1 = (&field_99912)->operator_cast_to_bool();
        if ((!bVar1) && (bVar1 = field_99920->operator_cast_to_bool(), !bVar1)) {
            (*(code*)field_0[3])(this, param_1);
        }
        new (&local_48) render::ResourceConfig();
        render::CreateGlobalResources((ResourceConfig*)&local_48);
        this_00 = field_99920;
        new (&local_48) render::RenderContextDesc(this_00);
        pGVar7 = this;
        (*(code*)field_0[34])(this, &local_48);
        pRVar4 = (RenderDevice*)pGVar7->Instance();
        if (pRVar4->CreateRenderContexts(&local_48) == '\0') {
            uVar5 = logger::default_logger();
            logger::Logger::Log(uVar5, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/"
                                "graphicsapp/GraphicsApp.cpp",
                                219, "Failed to init RenderContext");
            local_48.~InterfaceMouseEvent();
            uVar3 = 0;
        } else {
            local_48.~InterfaceMouseEvent();
            (&field_1128, 1)->RegisterRenderDeviceCallback();
            (&field_1144)->RegisterOnEndFrame();
            pGVar7 = this;
            (*(code*)field_0[16])(this, param_1);
            Singleton<PrimitiveShaderFamily>::Create<>((Singleton<PrimitiveShaderFamily>*)pGVar7);
            this_01 = (Singleton<render::RenderDevice>*)field_1160;
            this_01->MainInit();
            pRVar4 = (RenderDevice*)this_01->Instance();
            pRVar6 = (RenderContext*)pRVar4->GetCurrentThreadRenderContext();
            pRVar6->LockContext();
            UpdateMainAppWindow(this);
            uVar3 = (*(code*)field_0[26])(this, param_1);
            if ((char)uVar3 == '\0') {
                pRVar4 = (RenderDevice*)Instance();
                pRVar6 = (RenderContext*)pRVar4->GetCurrentThreadRenderContext();
                pRVar6->UnlockContext();
            } else {
                pRVar6 = (RenderContext*)shared_ptr<OpenGLView>::operator->((shared_ptr<OpenGLView>*)this_00);
                OpenGLView::StartUpdating();
            }
            pRVar6->NewFrame();
        }
        return uVar3;
    }

    // 0x100b04310, 16 bytes, placed by class name
    // GraphicsApp::EnableNVAPI()
    void GraphicsApp::EnableNVAPI() {}

    // 0x100b04390, 128 bytes, placed by class name
    // GraphicsApp::UpdateMainAppWindow()
    void GraphicsApp::UpdateMainAppWindow() {
        Window* this_00;
        RenderDevice* this_01;
        RenderContext* this_02;
        bool bVar1;
        GraphicsApp* this_03;

        bVar1 = (&field_99912)->operator_cast_to_bool();
        if (bVar1) {
            this_00 = (Window*)std::unique_ptr<Window, std::default_delete<Window>>::operator->(
                (unique_ptr<Window, std::default_delete<Window>>*)&field_99912);
            this_00->Update();
        }
        this_03 = this;
        if (HasMainWindowView(this) == '\0') {
            this_03 = (GraphicsApp*)field_99920;
            bVar1 = this_03->operator_cast_to_bool();
            if (!bVar1) {
                return;
            }
        }
        this_01 = (RenderDevice*)this_03->Instance();
        if (this_01->GetReadyState() == 0) {
            this_02 = (RenderContext*)GetDefaultRenderContext(this);
            this_02->UpdateBackBufferSize(false);
        }
    }

    // 0x100b04410, 128 bytes, placed by class name
    // GraphicsApp::MainShutdown()
    void GraphicsApp::MainShutdown() {
        Layout* this_00;
        ThreadPool* this_01;
        GraphicsApp* this_02;
        __0* extraout_RDX;
        type* in_RSI;
        AutoSingleton<ThreadPoolSingleton>* this_03;

        this_03 = (AutoSingleton<ThreadPoolSingleton>*)&field_1128;
        this_03->UnregisterRenderDeviceCallback();
        this_00 = (Layout*)this_03->Instance();
        this_01 = (ThreadPool*)eastl::string::Layout::SSOBeginPtr(this_00, in_RSI);
        ThreadPool::RunOnceOnAllThreads<GraphicsApp::MainShutdown()::__0>(this_01, (char*)in_RSI, extraout_RDX);
        ExecuteMainThreadEvents();
        this_02 = this;
        if (GetDefaultRenderContext(this) != 0) {
            this_02 = (GraphicsApp*)GetDefaultRenderContext(this);
            this_02->Shutdown();
        }
        this_02->Destroy();
        render::DestroyGlobalResources();
        this_02->Destroy();
        BucketManager::PrintMetrics();
        AutoSingleton<ThreadPoolSingleton>::Destroy();
        shareduniquedebug::ValidatePoolsAreEmpty();
    }

    // 0x100b04730, 64 bytes, placed by class name
    // GraphicsApp::SetSystemInitParams(SystemInitParams const&)
    void GraphicsApp::SetSystemInitParams(SystemInitParams* param_1) {
        SetSystemInitParams(param_1);
        if (m_windowInitParams == 0) {
            m_windowInitParams = *(int*)&param_1->field_0;
            field_100276 = *(undefined4*)((long)&param_1->field_0 + 4);
            field_100280 = param_1->field_8;
        }
    }

    // 0x100b04770, 1184 bytes, placed by class name
    // GraphicsApp::Update(float)
    void GraphicsApp::Update(float param_1) {
        byte bVar1;
        char cVar2;
        bool bVar3;
        byte bVar4;
        uint uVar6;
        RenderDevice* pRVar7;
        RenderContext* pRVar8;
        RenderContext* this_00;
        RenderTargets* pRVar9;
        FPSCounter* pFVar11;
        ulonglong uVar12;
        Screengrabber* this_01;
        ScopedGPUMemoryZone* this_02;
        GraphicsApp* pGVar13;
        SystemTimer* this_03;
        Singleton<render::RenderDevice>* this_04;
        uint uVar14;
        lock_guard<render::RenderContext> local_48[8];
        ScopedGPUMemoryZone local_40[8];
        ScopedGPUMemoryZone local_38[8];

        render::ScopedGPUMemoryZone::ScopedGPUMemoryZone(local_40, "GraphicsAppUpdate");
        this_04 = (Singleton<render::RenderDevice>*)field_1160;
        if (this_04->GetX() == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_Timer.GetMainLoopInterval() > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/graphicsapp/"
                      "GraphicsApp.cpp",
                      320, (char*)0);
        }
        UpdateInternal();
        if (field_100376 == '\0') {
            pGVar13 = this;
            (*(code*)field_0[37])();
            pRVar7 = (RenderDevice*)pGVar13->Instance();
            pRVar8 = (RenderContext*)pRVar7->GetPrimaryRenderContext();
            this_00 = (RenderContext*)GetDefaultRenderContext(this);
            pRVar9 = (RenderTargets*)this_00->GetBackBuffer();
            pRVar8->SetRenderTargets(pRVar9);
            pRVar7 = (RenderDevice*)pRVar8->Instance();
            pRVar8 = (RenderContext*)pRVar7->GetCurrentThreadRenderContext();
            pRVar8->UnlockContext();
            field_100376 = 1;
        }
        bVar1 = HasFocus(this);
        uVar6 = this_04->Update((ulong) * (uint*)(field_99920 + (ulong)(bVar1 ^ 1) * 4 + -16));
        cVar2 = this_04->IsRenderingDisabled();
        if (cVar2 != '\0') {
            this_02 = local_38;
            render::ScopedGPUMemoryZone::ScopedGPUMemoryZone(this_02, "GraphicsAppUpdate_RenderingDisabled");
            if (uVar6 != 0) {
                m_insideMainLogic = 1;
                pRVar7 = (RenderDevice*)this_02->Instance();
                pRVar8 = (RenderContext*)pRVar7->GetCurrentThreadRenderContext();
                lock_guard<render::RenderContext>::lock_guard(local_48, pRVar8);
                UpdateMainAppWindow(this);
                do {
                    uVar6 = uVar6 - 1;
                    (*(code*)field_0[32])(this, uVar6 == 0);
                    this_04->MainLogic();
                    if (uVar6 != 0) {
                        bVar3 = (&field_100384)->operator_cast_to_bool();
                        if (bVar3) {
                            cVar2 = eastl::function<bool()>::operator()((function<bool()>*)&field_100384);
                            if (cVar2 == '\0')
                                goto LAB_100b04911;
                        }
                    }
                    cVar2 = this_04->IsRenderingDisabled();
                    if ((cVar2 == '\0') || (uVar6 == 0))
                        goto LAB_100b04911;
                } while (true);
            }
            this_thread::Sleep(1);
            goto LAB_100b04b8f;
        }
        render::ScopedGPUMemoryZone::ScopedGPUMemoryZone(local_38, "GraphicsAppUpdate_RenderingEnabled");
        cVar2 = input::InputState::IsKeyDown(55);
        bVar1 = 1;
        if (cVar2 == '\0') {
            bVar1 = input::InputState::IsKeyDown(54);
        }
        cVar2 = input::InputState::IsKeyDown(59);
        bVar4 = 1;
        if (cVar2 == '\0') {
            bVar4 = input::InputState::IsKeyDown(62);
        }
        if ((bVar1 & bVar4) == 1) {
            cVar2 = input::InputState::IsKeyDown(3);
            if (cVar2 == '\0')
                goto LAB_100b04996;
            if (Update(float)::fsKeyDownLastFrame == '\0') {
                cVar2 = '\x01';
                ToggleFullscreenMode(this);
                goto LAB_100b04998;
            }
        } else {
        LAB_100b04996:
            cVar2 = '\0';
        LAB_100b04998:
            Update(float)::fsKeyDownLastFrame = cVar2;
        }
        pGVar13 = (GraphicsApp*)55;
        cVar2 = input::InputState::IsKeyDown(55);
        if (cVar2 != '\0') {
            pGVar13 = (GraphicsApp*)12;
            cVar2 = input::InputState::IsKeyDown(12);
            if (cVar2 != '\0') {
                pGVar13 = this;
                (*(code*)field_0[35])();
            }
        }
        pRVar7 = (RenderDevice*)pGVar13->Instance();
        if (pRVar7->GetCurrentThreadRenderContext() == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("render::RenderDevice::Instance().GetCurrentThreadRenderContext()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/graphicsapp/"
                      "GraphicsApp.cpp",
                      429, (char*)0);
        }
        pRVar7 = (RenderDevice*)pRVar7->Instance();
        pRVar8 = (RenderContext*)pRVar7->GetCurrentThreadRenderContext();
        lock_guard<render::RenderContext>::lock_guard(local_48, pRVar8);
        UpdateMainAppWindow(this);
        ExecuteMainDrawEvents(this);
        m_insideMainLogic = 1;
        if (uVar6 != 0) {
            uVar14 = 0;
        LAB_100b04a59:
            do {
                (*(code*)field_0[32])(this, uVar14 == uVar6 - 1);
                this_04->MainLogic();
                if (uVar14 != uVar6 - 1) {
                    bVar3 = (&field_100384)->operator_cast_to_bool();
                    if (bVar3) {
                        bVar1 = eastl::function<bool()>::operator()((function<bool()>*)&field_100384);
                        uVar14 = uVar14 + 1;
                        if ((bVar1 & uVar14 < uVar6) == 0)
                            break;
                        goto LAB_100b04a59;
                    }
                }
                uVar14 = uVar14 + 1;
            } while (uVar14 < uVar6);
        }
        m_insideMainLogic = 0;
        pRVar8 = (RenderContext*)GetDefaultRenderContext(this);
        cVar2 = pRVar8->Begin();
        if (cVar2 != '\0') {
            pRVar8->NewFrame();
            pFVar11 = (FPSCounter*)this_04->GetMaterial();
            uVar12 = FrameTime::GetCurrentTimeNS();
            pFVar11->RecordDrawStartTime(uVar12);
            (*(code*)field_0[33])(param_1, this);
            this_03 = (SystemTimer*)this_04;
            pFVar11 = (FPSCounter*)this_04->GetMaterial();
            uVar12 = SystemTimer::GetTimeNS<std::chrono::steady_clock>(this_03);
            pFVar11->RecordDrawEndTime(uVar12);
            pFVar11 = (FPSCounter*)this_04->GetMaterial();
            pFVar11->UpdateFPSCounter();
            pFVar11 = (FPSCounter*)this_04->GetMaterial();
            pFVar11->UpdateLPSCounter();
            pRVar8 = (RenderContext*)GetDefaultRenderContext(this);
            pRVar8->End();
        }
        this_01 = (Screengrabber*)pRVar8->Instance();
        this_01->OnScreenGrabbed();
        cVar2 = HasMainWindowView(this);
        if ((cVar2 != '\0') && (m_presentEnabled != false)) {
            pRVar8 = (RenderContext*)GetDefaultRenderContext(this);
            pRVar8->Present();
        }
        this_04->PostFrameUpdate();
        pRVar7 = (RenderDevice*)this_04->Instance();
        pRVar7->OnEndFrame();
    LAB_100b04b86:
        local_48->~lock_guard();
    LAB_100b04b8f:
        local_38->~ScopedGPUMemoryZone();
        local_40->~ScopedGPUMemoryZone();
        return;
    LAB_100b04911:
        m_insideMainLogic = 0;
        goto LAB_100b04b86;
    }

    // 0x100b04c10, 144 bytes, placed by class name
    // GraphicsApp::HasFocus()
    ulong GraphicsApp::HasFocus() {
        bool bVar1;
        HTTPRequest* pHVar2;
        shared_ptr* psVar3;
        OpenGLView* this_00;
        ulong uVar4;
        undefined1* this_01;

        this_01 = &field_99912;
        bVar1 = this_01->operator_cast_to_bool();
        if (bVar1) {
            pHVar2 = (HTTPRequest*)std::unique_ptr<Window, std::default_delete<Window>>::operator->(
                (unique_ptr<Window, std::default_delete<Window>>*)this_01);
            psVar3 = (shared_ptr*)pHVar2->GetContentType();
            bVar1 = shared_ptr::operator_cast_to_bool(psVar3);
            if (bVar1) {
                pHVar2 = (HTTPRequest*)std::unique_ptr<Window, std::default_delete<Window>>::operator->(
                    (unique_ptr<Window, std::default_delete<Window>>*)this_01);
                psVar3 = (shared_ptr*)pHVar2->GetContentType();
                bVar1 = shared_ptr::operator_cast_to_bool(psVar3);
                if (bVar1) {
                    this_00 = (OpenGLView*)shared_ptr<OpenGLView>::operator->((shared_ptr<OpenGLView>*)psVar3);
                    uVar4 = this_00->HasFocus();
                    goto LAB_100b04c93;
                }
            }
        }
        uVar4 = 0;
    LAB_100b04c93:
        return uVar4 & 18446744073709551361;
    }

    // 0x100b04da0, 368 bytes, placed by class name
    // GraphicsApp::ExecuteMainDrawEvents()
    void GraphicsApp::ExecuteMainDrawEvents() {
        undefined1* puVar1;
        undefined1* this_00;
        char cVar2;
        int iVar3;
        RenderDevice* this_01;
        function* pfVar4;
        GraphicsApp* local_e8;
        GraphicsApp* local_e0;
        undefined1 local_d8[160];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_e0 = this;
        cVar2 = this_thread::IsMainThread();
        if (cVar2 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/graphicsapp/"
                      "GraphicsApp.cpp",
                      794, (char*)0);
        }
        puVar1 = &local_e0->field_101376;
        this_00 = &local_e0->field_100416;
        do {
            this_01 = (RenderDevice*)Instance();
            iVar3 = this_01->GetReadyState();
            if (iVar3 != 0)
                break;
            new (local_d8) math::Vector2T<int>();
            new (&local_e8) std::scoped_lock<std::mutex>(puVar1);
            cVar2 = this_00->empty();
            iVar3 = 3;
            if (cVar2 == '\0') {
                pfVar4 = (function*)eastl::queue<
                    fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>,
                    eastl::fixed_list<fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>,
                                      4ul, true, eastl::allocator>>::front();
                fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::operator=(
                    (function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>*)local_d8, pfVar4);
                iVar3 = 0;
                eastl::queue<
                    fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>,
                    eastl::fixed_list<fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>,
                                      4ul, true, eastl::allocator>>::
                    pop((queue<fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>,
                               eastl::fixed_list<
                                   fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>, 4ul,
                                   true, eastl::allocator>>*)this_00);
            }
            local_e8.~scoped_lock();
            if (cVar2 == '\0') {
                local_e8 = local_e0;
                fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>::operator()(
                    (function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>*)local_d8, (BaseApp**)&local_e8);
                iVar3 = 0;
            }
            this = (GraphicsApp*)local_d8;
            fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)local_d8);
        } while (iVar3 == 0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b04f60, 112 bytes, placed by class name
    // GraphicsApp::HasMainWindowView() const
    bool GraphicsApp::HasMainWindowView() {
        bool bVar1;
        HTTPRequest* this_00;
        shared_ptr* this_01;
        RenderContext* this_02;
        undefined1 auVar2[16];

        this_00 = (HTTPRequest*)std::unique_ptr<Window, std::default_delete<Window>>::operator->(
            (unique_ptr<Window, std::default_delete<Window>>*)&field_99912);
        this_01 = (shared_ptr*)this_00->GetContentType();
        bVar1 = (&field_99912)->operator_cast_to_bool();
        if ((bVar1) && (bVar1 = shared_ptr::operator_cast_to_bool(this_01), bVar1)) {
            this_02 = (RenderContext*)GetDefaultRenderContext(this);
            auVar2 = this_02->GetDesc();
            bVar1 = operator==((jag*)this_01, (shared_ptr*)(auVar2._0_8_ + 16), auVar2._8_8_);
            return bVar1;
        }
        return false;
    }

    // 0x100b04fe0, 160 bytes, placed by class name
    // GraphicsApp::SetFullScreenMode(bool)
    void GraphicsApp::SetFullScreenMode(bool param_1) {
        HTTPRequest* this_00;
        OpenGLView* pOVar1;
        Window* this_01;
        shared_ptr* this_02;
        undefined8 uVar3;
        uint uVar4;

        this_00 = (HTTPRequest*)std::unique_ptr<Window, std::default_delete<Window>>::operator->(
            (unique_ptr<Window, std::default_delete<Window>>*)&field_99912);
        this_02 = (shared_ptr*)this_00->GetContentType();
        if (shared_ptr::operator_cast_to_bool(this_02)) {
            pOVar1 = (OpenGLView*)shared_ptr<OpenGLView>::operator->((shared_ptr<OpenGLView>*)this_02);
            uVar3 = pOVar1->GetNativeFullscreenResolution();
            if (((uint)uVar3 != 0) && (uVar4 = (uint)((ulong)uVar3 >> 32), uVar4 != 0)) {
                pOVar1 = (OpenGLView*)shared_ptr<OpenGLView>::operator->((shared_ptr<OpenGLView>*)this_02);
                pOVar1->SetFullScreenResolution((uint)uVar3, uVar4);
                this_01 = (Window*)std::unique_ptr<Window, std::default_delete<Window>>::operator->(
                    (unique_ptr<Window, std::default_delete<Window>>*)&field_99912);
                this_01->SetFullScreen(param_1);
            }
        }
    }

    // 0x100b05080, 96 bytes, placed by class name
    // GraphicsApp::SetCursor(RGBAImage const&, unsigned int, unsigned int)
    void GraphicsApp::SetCursor(RGBAImage* param_1, uint param_2, uint param_3) {
        HTTPRequest* this_00;
        OpenGLView* this_01;
        shared_ptr* this_02;

        this_00 = (HTTPRequest*)std::unique_ptr<Window, std::default_delete<Window>>::operator->(
            (unique_ptr<Window, std::default_delete<Window>>*)&field_99912);
        this_02 = (shared_ptr*)this_00->GetContentType();
        if (shared_ptr::operator_cast_to_bool(this_02)) {
            this_01 = (OpenGLView*)shared_ptr<OpenGLView>::operator->((shared_ptr<OpenGLView>*)this_02);
            this_01->SetCursor(param_1, param_2, param_3);
        }
    }

    // 0x100b050e0, 64 bytes, placed by class name
    // GraphicsApp::ResetCursor()
    void GraphicsApp::ResetCursor() {
        HTTPRequest* this_00;
        OpenGLView* this_01;
        shared_ptr* this_02;

        this_00 = (HTTPRequest*)std::unique_ptr<Window, std::default_delete<Window>>::operator->(
            (unique_ptr<Window, std::default_delete<Window>>*)&field_99912);
        this_02 = (shared_ptr*)this_00->GetContentType();
        if (shared_ptr::operator_cast_to_bool(this_02)) {
            this_01 = (OpenGLView*)shared_ptr<OpenGLView>::operator->((shared_ptr<OpenGLView>*)this_02);
            this_01->ResetCursor();
        }
    }

    // 0x100b05120, 16 bytes, placed by class name
    // GraphicsApp::WindowClosedCallback()
    undefined8 GraphicsApp::WindowClosedCallback() {
        (*(code*)field_0[10])(this, 0);
        return 0;
    }

    // 0x100b05130, 16 bytes, placed by class name
    // GraphicsApp::OnEndFrame()
    void GraphicsApp::OnEndFrame() {}

    // 0x100b05150, 16 bytes, placed by class name
    // GraphicsApp::LoadingComplete()
    void GraphicsApp::LoadingComplete() {}

    // 0x100b05160, 96 bytes, placed by class name
    // GraphicsApp::QueueMainDrawThreadEvent(fixedfunction::function<void (BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0> const&)
    void GraphicsApp::QueueMainDrawThreadEvent(function* param_1) {
        scoped_lock<std::mutex> local_20[8];

        std::scoped_lock<std::mutex>::scoped_lock(local_20, (mutex*)&field_101376);
        eastl::queue<fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>,
                     eastl::fixed_list<fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>,
                                       4ul, true, eastl::allocator>>::
            push((queue<
                     fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>,
                     eastl::fixed_list<fixedfunction::function<void(BaseApp*), 128ul, 16ul, (fixedfunction::Methods)0>,
                                       4ul, true, eastl::allocator>>*)&field_100416,
                 param_1);
        std::scoped_lock<std::mutex>::~scoped_lock(local_20);
    }

    // 0x100b051c0, 352 bytes, placed by class name
    // GraphicsApp::SetupGaiaConnection(unsigned char)
    void GraphicsApp::SetupGaiaConnection(uchar param_1) {
        char cVar1;
        undefined8 uVar2;
        GaiaConnection* pGVar3;
        RenderMaterial* this_00;
        function<void()>* this_01;
        function<void()> local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            cVar1 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            if (cVar1 == '\0') {
                pGVar3 = (GaiaConnection*)std::unique_ptr<testframework::GaiaConnection,
                                                          std::default_delete<testframework::GaiaConnection>>::
                         operator->((unique_ptr<testframework::GaiaConnection,
                                                std::default_delete<testframework::GaiaConnection>>*)&field_99896);
                cVar1 = pGVar3->Init((basic_string*)&field_100160, (basic_string*)&field_100192, param_1);
                if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/"
                                    "graphicsapp/GraphicsApp.cpp",
                                    635, "Failed to init Testframework Connection");
                }
                pGVar3 = (GaiaConnection*)std::unique_ptr<testframework::GaiaConnection,
                                                          std::default_delete<testframework::GaiaConnection>>::
                         operator->((unique_ptr<testframework::GaiaConnection,
                                                std::default_delete<testframework::GaiaConnection>>*)&field_99896);
                std::function<void()>::function<GraphicsApp::SetupGaiaConnection(unsigned char)::__1, void>(local_68,
                                                                                                            this);
                pGVar3->SetDoShutdown(local_68);
                this_01 = local_68;
                std::function<void()>::~function(this_01);
                this_00 = (RenderMaterial*)this_01->Instance();
                this_00->SetAlphaTestThreshold('\x04');
                goto LAB_100b05246;
            }
        }
        (&field_99896, (GaiaConnection*)0)->reset();
        uVar2 = logger::default_logger();
        logger::Logger::Log(uVar2, 0, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/"
                            "graphicsapp/GraphicsApp.cpp",
                            652, "Port and IP not specified, skipping Gaia init");
    LAB_100b05246:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b05350, 64 bytes, placed by class name
    // GraphicsApp::ProcessGaiaConnection()
    void GraphicsApp::ProcessGaiaConnection() {
        GaiaConnection* this_00;

        if ((&field_99896)->operator_cast_to_bool()) {
            this_00 =
                (GaiaConnection*)
                    std::unique_ptr<testframework::GaiaConnection, std::default_delete<testframework::GaiaConnection>>::
                    operator->((unique_ptr<testframework::GaiaConnection,
                                           std::default_delete<testframework::GaiaConnection>>*)&field_99896);
            this_00->MainLogic();
        }
    }

    // 0x100b053b0, 64 bytes, placed by class name
    // GraphicsApp::SignalApplicationReadyForGaiaProcessing()
    void GraphicsApp::SignalApplicationReadyForGaiaProcessing() {
        GaiaConnection* this_00;

        if ((&field_99896)->operator_cast_to_bool()) {
            this_00 =
                (GaiaConnection*)
                    std::unique_ptr<testframework::GaiaConnection, std::default_delete<testframework::GaiaConnection>>::
                    operator->((unique_ptr<testframework::GaiaConnection,
                                           std::default_delete<testframework::GaiaConnection>>*)&field_99896);
            this_00->SetApplicationIsReady();
        }
    }

    // 0x100b05400, 1536 bytes, placed by class name
    // GraphicsApp::ProcessArguments(SystemInitParams const&)
    void GraphicsApp::ProcessArguments(SystemInitParams* param_1) {
        char cVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        Args* this_00;
        eastl::string local_70[32];
        SystemInitParams local_50;

        eastl::string::basic_string(local_70);
        local_50.GetParameter(param_1);
        eastl::string::operator=(local_70, (basic_string*)&local_50);
        local_50.~basic_string();
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            cVar1 = DecodeRentalURL((ConnectionSettings*)&field_99936, (basic_string*)local_70);
            if (cVar1 == '\0') {
                uVar2 = logger::default_logger();
                uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(uVar2, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/"
                                    "graphicsapp/GraphicsApp.cpp",
                                    693, "Malformed rental URL \'%s\', ignoring -rental", uVar3);
            } else {
                uVar2 = logger::default_logger();
                uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(uVar2, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/"
                                    "graphicsapp/GraphicsApp.cpp",
                                    689, "Will connect to game server at %s on port %s and HTTP port %s", uVar3, uVar4,
                                    uVar5);
            }
        }
        local_50.GetParameter(param_1);
        eastl::string::operator=(local_70, (basic_string*)&local_50);
        local_50.~basic_string();
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            eastl::string::operator=((eastl::string*)&field_99936, (basic_string*)local_70);
            uVar2 = logger::default_logger();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar2, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/"
                                "graphicsapp/GraphicsApp.cpp",
                                702, "Will look for game server at: %s", uVar3);
        }
        local_50.GetParameter(param_1);
        eastl::string::operator=(local_70, (basic_string*)&local_50);
        local_50.~basic_string();
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            eastl::string::operator=((eastl::string*)&field_99968, (basic_string*)local_70);
            uVar2 = logger::default_logger();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar2, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/"
                                "graphicsapp/GraphicsApp.cpp",
                                710, "Will connect to game server on port: %s", uVar3);
        }
        local_50.GetParameter(param_1);
        eastl::string::operator=(local_70, (basic_string*)&local_50);
        local_50.~basic_string();
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            eastl::string::operator=((eastl::string*)&field_100000, (basic_string*)local_70);
            uVar2 = logger::default_logger();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar2, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/"
                                "graphicsapp/GraphicsApp.cpp",
                                718, "Will connect to game server on http port: %s", uVar3);
        }
        local_50.GetParameter(param_1);
        eastl::string::operator=(local_70, (basic_string*)&local_50);
        local_50.~basic_string();
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/"
                                "graphicsapp/GraphicsApp.cpp",
                                728, "Local mode loading is not supported in Final build");
        }
        local_50.GetParameter(param_1);
        eastl::string::operator=(local_70, (basic_string*)&local_50);
        local_50.~basic_string();
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            eastl::string::operator=((eastl::string*)&field_100064, (basic_string*)local_70);
            uVar2 = logger::default_logger();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar2, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/"
                                "graphicsapp/GraphicsApp.cpp",
                                736, "Got client token: %s", uVar3);
        }
        local_50.GetParameter(param_1);
        eastl::string::operator=(local_70, (basic_string*)&local_50);
        local_50.~basic_string();
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            eastl::string::operator=((eastl::string*)&field_100096, (basic_string*)local_70);
            uVar2 = logger::default_logger();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar2, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/"
                                "graphicsapp/GraphicsApp.cpp",
                                743, "Got tool server address: %s", uVar3);
        }
        local_50.GetParameter(param_1);
        eastl::string::operator=(local_70, (basic_string*)&local_50);
        local_50.~basic_string();
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            eastl::string::operator=((eastl::string*)&field_100128, (basic_string*)local_70);
            uVar2 = logger::default_logger();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar2, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/"
                                "graphicsapp/GraphicsApp.cpp",
                                750, "Got tool port address: %s", uVar3);
        }
        local_50.GetParameter(param_1);
        eastl::string::operator=(local_70, (basic_string*)&local_50);
        local_50.~basic_string();
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            eastl::string::operator=((eastl::string*)&field_100160, (basic_string*)local_70);
            uVar2 = logger::default_logger();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar2, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/"
                                "graphicsapp/GraphicsApp.cpp",
                                757, "Got automate server address: %s", uVar3);
        }
        local_50.GetParameter(param_1);
        eastl::string::operator=(local_70, (basic_string*)&local_50);
        local_50.~basic_string();
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            eastl::string::operator=((eastl::string*)&field_100192, (basic_string*)local_70);
            uVar2 = logger::default_logger();
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar2, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/"
                                "graphicsapp/GraphicsApp.cpp",
                                764, "Got automate port: %s", uVar3);
        }
        this_00 = (Args*)param_1->second();
        if (this_00->GetArgc() < 2) {
            (*(code*)field_0[31])(this);
        }
        eastl::string::~basic_string(local_70);
    }

    // 0x100b05ab0, 48 bytes, placed by class name
    // GraphicsApp::PrintArgUsage()
    void GraphicsApp::PrintArgUsage() {
        undefined8 uVar1;

        uVar1 = logger::default_logger();
        logger::Logger::Log(uVar1, 0, 7,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/"
                            "graphicsapp/GraphicsApp.cpp",
                            789,
                            "Usage: GraphicsTestApp [-server <connect address> | -port <connect port> | -httpport "
                            "<connect port> | -pack <pack path> | -clienttoken <token> | -toolserver <connect address> "
                            "| -toolport <connect port> | -debugger <bool> ]");
    }

    // 0x100b05b00, 32 bytes, placed by class name
    // GraphicsApp::SetWindow(std::unique_ptr<Window, std::default_delete<Window> >&&)
    /* GraphicsApp::SetWindow(std::unique_ptr<Window, std::default_delete<Window> >&&) */

    void GraphicsApp::SetWindow(unique_ptr* param_1) {
        std::unique_ptr<Window, std::default_delete<Window>>::operator=(
            (unique_ptr<Window, std::default_delete<Window>>*)&field_99912, param_1);
    }

    // 0x100b05b50, 624 bytes, placed by class name
    // GraphicsApp::SetView(shared_ptr<OpenGLView> const&)
    void GraphicsApp::SetView(shared_ptr* param_1) {
        char cVar1;
        bool bVar2;
        uint uVar3;
        RenderDevice* this_00;
        Window* this_01;
        long lVar4;
        long lVar5;
        RenderContext* pRVar6;
        function* pfVar7;
        undefined1 local_f8[16];
        function local_d8;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar1 = this_thread::IsMainThread();
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/graphicsapp/"
                      "GraphicsApp.cpp",
                      829, (char*)0);
        }
        this_00 = (RenderDevice*)((GraphicsApp*)this)->Instance();
        new ((local_f8 + 16)) shared_ptr<oldscape::dash3d::Decor>(field_99920);
        shared_ptr<OpenGLView>::operator=((shared_ptr<OpenGLView>*)field_99920, param_1);
        bVar2 = (&field_99912)->operator_cast_to_bool();
        if (bVar2) {
            this_01 = (Window*)std::unique_ptr<Window, std::default_delete<Window>>::operator->(
                (unique_ptr<Window, std::default_delete<Window>>*)&field_99912);
            this_01->SetView(param_1);
        }
        lVar4 = this_00->GetOrigin();
        if (*(char*)(lVar4 + 224) != '\0') {
            pfVar7 = (function*)local_f8;
            local_f8._0_8_ = param_1;
            fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::__2, void>(
                (function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8,
                (__2*)pfVar7);
            local_d8.RunWithThreadPoolRenderContexts(pfVar7);
            fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
        }
        lVar4 = this_00->GetCurrentThreadRenderContext();
        if (lVar4 != 0) {
            lVar4 = this_00->GetCurrentThreadRenderContext();
            lVar5 = this_00->GetPrimaryRenderContext();
            if (lVar4 != lVar5) {
                pRVar6 = (RenderContext*)this_00->GetCurrentThreadRenderContext();
                pRVar6->SetView(param_1);
            }
        }
        lVar4 = this_00->GetPrimaryRenderContext();
        if (lVar4 != 0) {
            pRVar6 = (RenderContext*)this_00->GetPrimaryRenderContext();
            new (local_f8) shared_ptr<oldscape::dash3d::Decor>(param_1);
            fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
                GraphicsApp::SetView(shared_ptr<OpenGLView> const&)::__3, void>(
                (function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8,
                (__3*)local_f8);
            pRVar6->RunSynchronouslyOnRenderThread(&local_d8, true);
            fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
                (function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8);
            SetView(shared_ptr<OpenGLView> const&)::$_3::~__3((__3*)local_f8);
        }
        bVar2 = ((local_f8 + 16))->operator_cast_to_bool();
        if (bVar2) {
            lVar4 = ((local_f8 + 16))->end();
            lVar5 = param_1->end();
            if (lVar4 != lVar5) {
                cVar1 = ((local_f8 + 16))->unique();
                if (cVar1 == '\0') {
                    uVar3 = ((local_f8 + 16))->use_count();
                    /* WARNING: Subroutine does not return */
                    LogAssert("!oldView || oldView.get() == view.get() || oldView.unique()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/"
                              "graphicsapp/GraphicsApp.cpp",
                              861, "Leaked OpenGLView shared_ptr (count %i)", (ulong)uVar3);
                }
            }
        }
        ((local_f8 + 16))->~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b05df0, 384 bytes, placed by __FILE__ string
    // SetConnectionSettingsAddressPort(ConnectionSettings&, SystemSettings const&)
    void SetConnectionSettingsAddressPort(ConnectionSettings* param_1, SystemSettings* param_2) {
        char cVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        Settings local_f8;
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_f8) Settings(param_2, 1, "Connection");
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 != '\0') {
            cVar1 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            if (cVar1 != '\0') {
                cVar1 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                if (cVar1 != '\0') {
                    Settings::GetValue<eastl::string>(&local_f8, (basic_string*)param_1, "address");
                    Settings::GetValue<eastl::string>(&local_f8, (basic_string*)&param_1->field_32, "port");
                    uVar2 = logger::default_logger();
                    uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    logger::Logger::Log(
                        uVar2, 0, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/framework/graphicsapp/"
                        "GraphicsApp.cpp",
                        872, "GraphicsApp: Using previously stored server address and port: -server %s, -port %s",
                        uVar3, uVar4);
                }
            }
        }
        cVar1 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar1 == '\0') {
            cVar1 = eastl::basic_string<
                char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
            if (cVar1 == '\0') {
                Settings::SetValue<char, eastl::allocator>((char*)&local_f8, (basic_string*)"address");
                Settings::SetValue<char, eastl::allocator>((char*)&local_f8, (basic_string*)&DAT_100e364bb);
            }
        }
        local_f8.~Settings();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100b0adc0, 32 bytes, placed by class name
    // GraphicsApp::SetupGaiaConnection(unsigned char)::$_1::operator()() const
    /* GraphicsApp::SetupGaiaConnection(unsigned char)::$_1::TEMPNAMEPLACEHOLDERVALUE() const */

    void GraphicsApp::SetupGaiaConnection(unsigned char)::$_1::operator()() {
        (**(code**)(**(long**)this + 80))(*(long**)this, 0);
    }

} // namespace jag
