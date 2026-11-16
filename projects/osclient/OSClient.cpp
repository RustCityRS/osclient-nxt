// projects/osclient/OSClient.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "OSClient.h"
#include "libs/oldscape/osrendercore/OSRenderCore.h"

namespace jag {
    // 0x1001875f0, 16 bytes, complete-object constructor, placed by class name and debug map
    // OSClient::OSClient(): jumps straight to the base-object constructor

    // 0x100187640, 48 bytes, inline, placed by debug map only (low confidence)
    // void safe_delete<BaseApp>(BaseApp*&)
    /* void safe_delete<game::VarDomainType>(game::VarDomainType*&) */

    void safe_delete<game::VarDomainType>(VarDomainType** param_1) {
        if (*param_1 != (VarDomainType*)0) {
            (**(code**)((*param_1)->field_0 + 8))();
        }
        *param_1 = (VarDomainType*)0;
    }

    // 0x100187670, 624 bytes, base-object constructor, placed by class name and debug map
    // OSClient::OSClient()
    void OSClient::OSClient() {
        eastl::string local_b8[32];
        eastl::string local_98[32];
        allocator local_78[8];
        allocator local_70[8];
        undefined1* local_68;
        undefined1* local_60;
        undefined1* local_58;
        undefined1* local_50;
        undefined1* local_48;
        undefined1* local_40;
        undefined1* local_38;

        new (this) GraphicsApp();
        new (&field_101440) callstack::CrashHandlerInterface();
        new (&field_101448) callstack::OutOfMemoryHandlerInterface();
        field_0 = &PTR__OSClient_100ef5a78;
        field_1128 = &PTR__OSClient_100ef5bd0;
        field_1144 = &PTR__OSClient_100ef5c00;
        field_101440 = &PTR_HandleProgramCrash_100ef5c28;
        field_101448 = &PTR_AllocationFailed_100ef5c48;
        new (&field_101456, (GraphicsApp*)this) oldscape::OSRenderCore_Impl();
        local_68 = &field_101456;
        new (field_55500240, this) oldscape::Client();
        local_58 = &field_62807088;
        std::unique_ptr<oldscape::TitleScreen, std::default_delete<oldscape::TitleScreen>>::unique_ptr<true, void>(
            (unique_ptr<oldscape::TitleScreen, std::default_delete<oldscape::TitleScreen>>*)local_58);
        local_50 = &field_62807096;
        new (local_50) std::thread();
        local_48 = &field_62807104;
        local_60 = field_55500240;
        new (local_48) input::Input();
        local_40 = &field_62807280;
        new (local_40) input::InputHandler();
        local_38 = &field_62809600;
        std::unique_ptr<Steam, std::default_delete<Steam>>::unique_ptr<true, void>(
            (unique_ptr<Steam, std::default_delete<Steam>>*)local_38);
        std::function<void(bool)>::function((function<void(bool)>*)&field_62809616);
        std::unique_ptr<render::RenderTargetsManager, std::default_delete<render::RenderTargetsManager>>::unique_ptr<
            true, void>((unique_ptr<render::RenderTargetsManager,
                                    std::default_delete<render::RenderTargetsManager>>*)&field_62809664);
        field_62809672 = 1;
        field_62809676 = 0;
        field_62809677 = 0;
        field_62809678 = 0;
        callstack::CrashHandler::Set((CrashHandlerInterface*)&field_101440);
        callstack::OutOfMemoryHandler::Set((OutOfMemoryHandlerInterface*)&field_101448);
        eastl::allocator::allocator(local_78, "EASTL basic_string");
        eastl::string::basic_string(local_b8, "OSClient", local_78);
        eastl::allocator::allocator(local_70, "EASTL basic_string");
        eastl::string::basic_string(local_98, "com.jagex.osclient", local_70);
        notifications::SetAppName((basic_string*)local_b8, (basic_string*)local_98);
        eastl::string::~basic_string(local_98);
        eastl::string::~basic_string(local_b8);
    }

    // 0x1001879e0, 2400 bytes, placed by class name
    // OSClient::MainInit(SystemInitParams const&)
    undefined4 OSClient::MainInit(SystemInitParams* param_1) {
        OSClient* this_00;
        Args* pAVar1;
        char cVar2;
        bool bVar3;
        int iVar4;
        undefined4 uVar5;
        undefined8 uVar6;
        ulong uVar7;
        undefined8 uVar8;
        basic_string* pbVar9;
        ulong uVar10;
        basic_string* pbVar11;
        eastl::string* pbVar12;
        uint* puVar13;
        char* pcVar14;
        undefined** ppuVar15;
        ulong uVar16;
        vector<eastl::string, eastl::allocator>* this_01;
        long lVar17;
        eastl::string local_118[32];
        allocator local_f8[32];
        SystemInitParams local_d8;
        allocator local_a0[24];
        Client* local_80;
        uint local_70[2];
        uint local_68[2];
        vector<eastl::string, eastl::allocator> local_60[32];
        Args* local_40;
        basic_string* local_38;

        local_80 = (Client*)field_55500240;
        local_80->Init();
        cVar2 = Steam::ValidateSteamAPIExists();
        if (cVar2 != '\0') {
            std::make_unique<Steam>();
            std::unique_ptr<Steam, std::default_delete<Steam>>::operator=(
                (unique_ptr<Steam, std::default_delete<Steam>>*)&field_62809600, (unique_ptr*)&local_d8);
            local_d8.~unique_ptr();
            iVar4 = std::unique_ptr<Steam, std::default_delete<Steam>>::operator->(
                (unique_ptr<Steam, std::default_delete<Steam>>*)&field_62809600);
            cVar2 = Steam::Init(iVar4, false);
            if (cVar2 == '\0') {
                return 0;
            }
        }
        local_40 = (Args*)param_1->second();
        eastl::vector<eastl::string, eastl::allocator>::vector(local_60);
        eastl::vector<eastl::string, eastl::allocator>::reserve(local_60, 7);
        lVar17 = 0;
        this_01 = local_60;
        do {
            eastl::allocator::allocator(local_f8, "EASTL basic_string");
            new (&local_d8) eastl::string(*(char**)((long)&PTR_DAT_100ef5c50 + lVar17), local_f8);
            eastl::vector<eastl::string, eastl::allocator>::push_back(this_01, (basic_string*)&local_d8);
            local_d8.~basic_string();
            lVar17 = lVar17 + 8;
        } while (lVar17 != 56);
        new (local_f8) eastl::string();
        pAVar1 = local_40;
        lVar17 = local_40->GetArgc();
        if (lVar17 != 0) {
            uVar16 = 0;
            do {
                pAVar1->GetArgv(uVar16);
                uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                eastl::string::append_sprintf((char*)local_f8, " \"%s\"", uVar6);
                uVar16 = uVar16 + 1;
                uVar7 = pAVar1->GetArgc();
            } while (uVar16 < uVar7);
        }
        uVar6 = logger::default_logger();
        uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        pcVar14 = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/OSClient.cpp";
        logger::Logger::Log(
            uVar6, 0, 5,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/OSClient.cpp", 97,
            "OSCLIENT assemble Command-line args from: %s", uVar8);
        lVar17 = pAVar1->GetArgc();
        if (lVar17 == 0) {
            cVar2 = '\0';
        } else {
            pbVar9 = (basic_string*)pAVar1->GetArgv(0);
            new (&local_d8) eastl::allocator("EASTL basic_string");
            eastl::string::basic_string(local_118, "android", (allocator*)&local_d8);
            cVar2 = is_equal_ignore_case(pbVar9, (basic_string*)local_118);
            if (lVar17 != 0) {
                eastl::string::~basic_string(local_118);
            }
        }
        if (cVar2 == '\0') {
            uVar16 = pAVar1->GetArgc();
            if (1 < uVar16) {
                uVar16 = 1;
                local_38 = (basic_string*)((ulong)local_38 & 18446744069414584320);
                do {
                    pbVar9 = (basic_string*)local_40->GetArgv(uVar16);
                    bVar3 = starts_with<eastl::string>(pbVar9, "jagex-jav");
                    this_01 = (vector<eastl::string, eastl::allocator>*)CONCAT71((int7)((ulong)this_01 >> 8), 1);
                    if (bVar3) {
                    LAB_100188040:
                        if (((ulong)this_01 & 1) == 0) {
                            bVar3 = starts_with<eastl::string>(pbVar9, "--");
                            pcVar14 = (char*)CONCAT71((int7)((ulong)pcVar14 >> 8), 1);
                            local_38 = (basic_string*)CONCAT44(local_38._4_4_, (int)pcVar14);
                            if (!bVar3) {
                                pbVar12 = (eastl::string*)eastl::vector<eastl::string, eastl::allocator>::operator[](
                                    local_60, uVar16 - 1);
                                iVar4 = 12;
                                eastl::string::operator=(pbVar12, pbVar9);
                                local_38 = (basic_string*)CONCAT44(local_38._4_4_, (int)this_01);
                                goto LAB_1001880a4;
                            }
                        } else {
                            local_38 = (basic_string*)CONCAT44(local_38._4_4_, (int)this_01);
                        }
                        iVar4 = 0;
                        eastl::vector<eastl::string, eastl::allocator>::push_back(local_60, pbVar9);
                    } else {
                        eastl::allocator::allocator(local_a0, "EASTL basic_string");
                        new (&local_d8) eastl::string("-NSDocumentRevisionsDebugMode", local_a0);
                        cVar2 = is_equal_ignore_case(pbVar9, (basic_string*)&local_d8);
                        local_d8.~basic_string();
                        iVar4 = 10;
                        this_01 = (vector<eastl::string, eastl::allocator>*)((ulong)local_38 & 4294967295);
                        if (cVar2 == '\0')
                            goto LAB_100188040;
                    }
                LAB_1001880a4:
                    if ((iVar4 != 12) && (iVar4 != 0))
                        break;
                    uVar16 = uVar16 + 1;
                    uVar7 = local_40->GetArgc();
                } while (uVar16 < uVar7);
            }
        } else {
            uVar16 = pAVar1->GetArgc();
            if (1 < uVar16) {
                uVar16 = 1;
                do {
                    pAVar1 = local_40;
                    pbVar9 = (basic_string*)local_40->GetArgv(uVar16);
                    uVar7 = uVar16 + 1;
                    pcVar14 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    cVar2 = starts_with(pcVar14, "jagex-jav://");
                    if (cVar2 == '\0') {
                        uVar10 = pAVar1->GetArgc();
                        iVar4 = 8;
                        if (uVar7 != uVar10) {
                            local_38 = (basic_string*)pAVar1->GetArgv(uVar7);
                            eastl::allocator::allocator(local_a0, "EASTL basic_string");
                            new (&local_d8) eastl::string("worldid", local_a0);
                            cVar2 = is_equal_ignore_case(pbVar9, (basic_string*)&local_d8);
                            uVar7 = uVar16 + 2;
                            local_d8.~basic_string();
                            if (cVar2 == '\0') {
                                eastl::allocator::allocator(local_a0, "EASTL basic_string");
                                new (&local_d8) eastl::string("modewhere", local_a0);
                                cVar2 = is_equal_ignore_case(pbVar9, (basic_string*)&local_d8);
                                local_d8.~basic_string();
                                if (cVar2 == '\0') {
                                    eastl::allocator::allocator(local_a0, "EASTL basic_string");
                                    new (&local_d8) eastl::string("contentmode", local_a0);
                                    cVar2 = is_equal_ignore_case(pbVar9, (basic_string*)&local_d8);
                                    local_d8.~basic_string();
                                    if (cVar2 == '\0') {
                                        eastl::allocator::allocator(local_a0, "EASTL basic_string");
                                        new (&local_d8) eastl::string("mem", local_a0);
                                        cVar2 = is_equal_ignore_case(pbVar9, (basic_string*)&local_d8);
                                        local_d8.~basic_string();
                                        if (cVar2 == '\0') {
                                            eastl::allocator::allocator(local_a0, "EASTL basic_string");
                                            new (&local_d8) eastl::string("members", local_a0);
                                            cVar2 = is_equal_ignore_case(pbVar9, (basic_string*)&local_d8);
                                            local_d8.~basic_string();
                                            if (cVar2 == '\0') {
                                                eastl::allocator::allocator(local_a0, "EASTL basic_string");
                                                new (&local_d8) eastl::string("lang", local_a0);
                                                cVar2 = is_equal_ignore_case(pbVar9, (basic_string*)&local_d8);
                                                local_d8.~basic_string();
                                                if (cVar2 == '\0') {
                                                    eastl::allocator::allocator(local_a0, "EASTL basic_string");
                                                    new (&local_d8) eastl::string("modegame", local_a0);
                                                    cVar2 = is_equal_ignore_case(pbVar9, (basic_string*)&local_d8);
                                                    local_d8.~basic_string();
                                                    if (cVar2 == '\0') {
                                                        eastl::vector<eastl::string, eastl::allocator>::push_back(
                                                            local_60, pbVar9);
                                                        iVar4 = 0;
                                                        eastl::vector<eastl::string, eastl::allocator>::push_back(
                                                            local_60, local_38);
                                                    } else {
                                                        pbVar12 = (eastl::string*)
                                                            eastl::vector<eastl::string, eastl::allocator>::operator[](
                                                                local_60, 6);
                                                        iVar4 = 0;
                                                        eastl::string::operator=(pbVar12, local_38);
                                                    }
                                                } else {
                                                    pbVar12 = (eastl::string*)
                                                        eastl::vector<eastl::string, eastl::allocator>::operator[](
                                                            local_60, 5);
                                                    iVar4 = 0;
                                                    eastl::string::operator=(pbVar12, local_38);
                                                }
                                            } else {
                                                pbVar12 = (eastl::string*)
                                                    eastl::vector<eastl::string, eastl::allocator>::operator[](local_60,
                                                                                                               4);
                                                iVar4 = 0;
                                                eastl::string::operator=(pbVar12, local_38);
                                            }
                                        } else {
                                            pbVar12 = (eastl::string*)
                                                eastl::vector<eastl::string, eastl::allocator>::operator[](local_60, 3);
                                            iVar4 = 0;
                                            eastl::string::operator=(pbVar12, local_38);
                                        }
                                    } else {
                                        pbVar12 =
                                            (eastl::string*)eastl::vector<eastl::string, eastl::allocator>::operator[](
                                                local_60, 2);
                                        iVar4 = 0;
                                        eastl::string::operator=(pbVar12, local_38);
                                    }
                                } else {
                                    pbVar12 =
                                        (eastl::string*)eastl::vector<eastl::string, eastl::allocator>::operator[](
                                            local_60, 1);
                                    iVar4 = 0;
                                    eastl::string::operator=(pbVar12, local_38);
                                }
                            } else {
                                pbVar12 = (eastl::string*)eastl::vector<eastl::string, eastl::allocator>::operator[](
                                    local_60, 0);
                                iVar4 = 0;
                                eastl::string::operator=(pbVar12, local_38);
                            }
                        }
                    } else {
                        iVar4 = 9;
                        eastl::vector<eastl::string, eastl::allocator>::push_back(local_60, pbVar9);
                    }
                    if ((iVar4 != 9) && (iVar4 != 0))
                        break;
                    uVar10 = local_40->GetArgc();
                    uVar16 = uVar7;
                } while (uVar7 < uVar10);
            }
        }
        pbVar9 = (basic_string*)local_60->HeapBeginPtr();
        pbVar11 = (basic_string*)local_60->end();
        new (local_a0) Array<eastl::string, BucketAllocatorEASTL>(pbVar9, pbVar11);
        cVar2 = local_80->Main(local_a0);
        if (cVar2 == '\0') {
            local_a0->set_max_size(7, 3);
            uVar16 = 0;
            ppuVar15 = &PTR_DAT_100ef5c50;
            do {
                pcVar14 = *ppuVar15;
                pbVar12 = (eastl::string*)Array<eastl::string, BucketAllocatorEASTL>::operator[](
                    (Array<eastl::string, BucketAllocatorEASTL>*)local_a0, uVar16);
                eastl::string::assign(pbVar12, pcVar14);
                uVar16 = uVar16 + 1;
                ppuVar15 = ppuVar15 + 1;
            } while (uVar16 != 7);
            cVar2 = local_80->Main(local_a0);
            if (cVar2 == '\0') {
                uVar5 = 0;
                goto LAB_10018824d;
            }
        }
        this_00 = (OSClient*)this;
        new (&local_d8) SystemInitParams(param_1);
        input::Input::Init();
        (&this_00->field_62807104, (InputHandler*)&this_00->field_62807280)->SetDefaultInputHandler();
        std::make_unique<render::RenderTargetsManager, char const(&)[1], int const&>((char*)local_68,
                                                                                     &this_00->field_62809672);
        std::unique_ptr<render::RenderTargetsManager, std::default_delete<render::RenderTargetsManager>>::operator=(
            (unique_ptr<render::RenderTargetsManager, std::default_delete<render::RenderTargetsManager>>*)&this_00
                ->field_62809664,
            (unique_ptr*)local_68);
        local_68->~unique_ptr();
        SetupSteamOverlayCallbacks(this_00);
        uVar16 = _time((time_t*)0);
        new (&math::g_Rand)
            std::__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>(uVar16 & 4294967295);
        _srand((uint)uVar16);
        _srand((uint)uVar16);
        local_70[0] = std::thread::hardware_concurrency();
        local_70[1] = 4;
        puVar13 = std::min<unsigned int>(local_70, local_70 + 1);
        local_68[0] = *puVar13;
        AutoSingleton<ThreadPoolSingleton>::Create<unsigned int const&>(local_68);
        uVar5 = this_00->MainInit(&local_d8);
        local_d8.~SystemInitParams();
    LAB_10018824d:
        local_a0->~Array();
        local_f8->~basic_string();
        eastl::vector<eastl::string, eastl::allocator>::~vector(local_60);
        return uVar5;
    }

    // 0x100188900, 160 bytes, placed by class name
    // OSClient::SetupSteamOverlayCallbacks()
    void OSClient::SetupSteamOverlayCallbacks() {
        undefined1* this_00;
        undefined1* this_01;
        bool bVar1;
        Steam* pSVar2;
        unique_ptr<SteamOverlay, std::default_delete<SteamOverlay>>* puVar3;
        undefined8 uVar4;
        SteamOverlay* this_02;
        __2 local_28;

        this_00 = &field_62809600;
        bVar1 = this_00->operator_cast_to_bool();
        if (bVar1) {
            pSVar2 = (Steam*)std::unique_ptr<Steam, std::default_delete<Steam>>::operator->(
                (unique_ptr<Steam, std::default_delete<Steam>>*)this_00);
            puVar3 = (unique_ptr<SteamOverlay, std::default_delete<SteamOverlay>>*)pSVar2->GetSteamOverlayModule();
            uVar4 = std::unique_ptr<SteamOverlay, std::default_delete<SteamOverlay>>::operator->(puVar3);
            SteamOverlay::SetNotificationPosition(uVar4, 0);
            this_01 = &field_62809616;
            bVar1 = this_01->operator_cast_to_bool();
            if (!bVar1) {
                local_28.field_0 = (long*)this;
                std::function<void(bool)>::operator=((function<void(bool)>*)this_01, &local_28);
                pSVar2 = (Steam*)std::unique_ptr<Steam, std::default_delete<Steam>>::operator->(
                    (unique_ptr<Steam, std::default_delete<Steam>>*)this_00);
                puVar3 = (unique_ptr<SteamOverlay, std::default_delete<SteamOverlay>>*)pSVar2->GetSteamOverlayModule();
                this_02 =
                    (SteamOverlay*)std::unique_ptr<SteamOverlay, std::default_delete<SteamOverlay>>::operator->(puVar3);
                this_02->SetOnChanged(this_01);
            }
        }
    }

    // 0x100188a30, 272 bytes, placed by class name
    // OSClient::OnMainInit(SystemInitParams const&)
    undefined8 OSClient::OnMainInit(SystemInitParams* param_1) {
        undefined* puVar1;
        bool bVar2;
        OSClient* this_00;
        undefined7 extraout_var;
        undefined7 extraout_var_00;
        undefined7 uVar3;
        thread local_40[8];
        __1 local_38;
        __atomic_base local_28[8];

        SetWindowTitle("Old School RuneScape");
        field_55500240->InitHostPlatformStats();
        puVar1 = PTR___dispatch_main_q_100ee9db8;
        _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
        _dispatch_async(puVar1, &___block_literal_global);
        this_00 = (OSClient*)(*(code*)field_0[12])(this);
        Window::Show(SUB81(this_00, 0));
        CreateRenderingResources(this_00);
        RenderThreadInit(this);
        std::make_unique<oldscape::TitleScreen>();
        std::unique_ptr<oldscape::TitleScreen, std::default_delete<oldscape::TitleScreen>>::operator=(
            (unique_ptr<oldscape::TitleScreen, std::default_delete<oldscape::TitleScreen>>*)&field_62807088,
            (unique_ptr*)&local_38);
        local_38.~unique_ptr();
        UpdateMainAppWindow();
        local_28[0] = (__atomic_base)0;
        local_38.field_0 = (atomic<bool>*)local_28;
        local_38.field_8 = this;
        std::thread::thread<OSClient::OnMainInit(SystemInitParams_const&)::__1, , void>(local_40, &local_38);
        std::thread::operator=((thread*)&field_62807096, local_40);
        std::thread::~thread(local_40);
        bVar2 = std::__atomic_base::operator_cast_to_bool(local_28);
        uVar3 = extraout_var;
        if (!bVar2) {
            do {
                this_thread::Sleep(100);
                bVar2 = std::__atomic_base::operator_cast_to_bool(local_28);
                uVar3 = extraout_var_00;
            } while (!bVar2);
        }
        return CONCAT71(uVar3, 1);
    }

    // 0x100188ef0, 32 bytes, placed by class name
    // OSClient::CreateRenderingResources()
    void OSClient::CreateRenderingResources() {
        OSRenderCore_RenderThread* this_00;

        this_00 = (OSRenderCore_RenderThread*)oldscape::OSRenderCore_RenderThread::Instance();
        this_00->CreateRenderingResources();
    }

    // 0x100188f10, 96 bytes, placed by class name
    // OSClient::RenderThreadInit()
    void OSClient::RenderThreadInit() {
        long* plVar1;
        OSRenderCore_RenderThread* this_00;
        NXTRenderer* this_01;

        plVar1 = (long*)oldscape::OSRenderCore_RenderThread::Instance();
        (((long)plVar1 + *(long*)(*plVar1 + -24)))->SetThreadID();
        this_00 = (OSRenderCore_RenderThread*)oldscape::OSRenderCore_RenderThread::Instance();
        this_00->Init();
        this_01 = (NXTRenderer*)oldscape::dash3d::NXTRenderer::GetInstance();
        this_01->RenderThread_Init();
        field_62809676 = 1;
        SetMaxForegroundFps(60);
        SetMaxBackgroundFps(60);
    }

    // 0x100189040, 208 bytes, placed by class name
    // OSClient::DeviceLostFocus()
    void OSClient::DeviceLostFocus() {
        undefined8 uVar2;
        NPCType* this_00;
        long* plVar3;
        TitlescreenInputHandler local_40;

        if (this_thread::IsMainThread() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/OSClient.cpp",
                      342, (char*)0);
        }
        uVar2 = logger::default_logger();
        logger::Logger::Log(
            uVar2, 0, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/OSClient.cpp", 343,
            "DeviceLostFocus called");
        (&field_62807280)->DeviceLostFocus();
        ((field_55500240 + 8496))->ResetState();
        std::unique_ptr<oldscape::TitleScreen, std::default_delete<oldscape::TitleScreen>>::operator->(
            (unique_ptr<oldscape::TitleScreen, std::default_delete<oldscape::TitleScreen>>*)&field_62807088);
        local_40.GetTitleScreenInputHandler();
        local_40.ResetState();
        this_00 = (NPCType*)field_55500240->GetConsole();
        plVar3 = (long*)this_00->GetHeadIconIndex();
        (**(code**)(*plVar3 + 96))(plVar3);
    }

    // 0x100189190, 112 bytes, placed by class name
    // OSClient::PauseAudio()
    void OSClient::PauseAudio() {
        undefined8 uVar2;
        shared_ptr* this_00;
        long* plVar3;

        uVar2 = logger::default_logger();
        logger::Logger::Log(
            uVar2, 0, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/OSClient.cpp", 355,
            "Pausing audio");
        this_00 = (shared_ptr*)field_55500240->GetApplicationContext();
        if (shared_ptr::operator_cast_to_bool(this_00)) {
            plVar3 = (long*)shared_ptr<oldscape::ApplicationContext>::operator->(
                (shared_ptr<oldscape::ApplicationContext>*)this_00);
            (**(code**)(*plVar3 + 56))(plVar3);
        }
        field_55500240->CheckToQueueMutedAudio();
    }

    // 0x100189200, 112 bytes, placed by class name
    // OSClient::ResumeAudio()
    void OSClient::ResumeAudio() {
        undefined8 uVar2;
        shared_ptr* this_00;
        ApplicationContext* this_01;

        uVar2 = logger::default_logger();
        logger::Logger::Log(
            uVar2, 0, 8,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/OSClient.cpp", 368,
            "Resuming audio");
        this_00 = (shared_ptr*)field_55500240->GetApplicationContext();
        if (shared_ptr::operator_cast_to_bool(this_00)) {
            this_01 = (ApplicationContext*)shared_ptr<oldscape::ApplicationContext>::operator->(
                (shared_ptr<oldscape::ApplicationContext>*)this_00);
            this_01->ResumeApplication();
        }
        field_55500240->CheckToQueueMutedAudio();
    }

    // 0x1001892c0, 80 bytes, placed by class name
    // OSClient::LogicThreadInit()
    void OSClient::LogicThreadInit() {
        long* plVar1;
        NXTRenderer* this_00;

        this_thread::SetThreadName("Logic thread");
        plVar1 = (long*)oldscape::OSRenderCore_AudioThread::Instance();
        (((long)plVar1 + *(long*)(*plVar1 + -24)))->SetThreadID();
        this_00 = (NXTRenderer*)oldscape::dash3d::NXTRenderer::GetInstance();
        this_00->LogicThread_Init();
        field_62809677 = 1;
    }

    // 0x100189320, 48 bytes, placed by class name
    // OSClient::LogicThreadRun()
    void OSClient::LogicThreadRun() {
        (field_55500240, (Input*)&field_62807104, (InputHandler*)&field_62807280)->Run();
    }

    // 0x100189560, 16 bytes, placed by class name
    // OSClient::RenderContextInit(render::RenderContextDesc&) const
    void OSClient::RenderContextInit(RenderContextDesc* param_1) {
        *(undefined1*)((long)&param_1->field_8 + 3) = 0;
        *(undefined2*)&param_1->field_4 = 4120;
    }

    // 0x100189570, 208 bytes, placed by class name
    // OSClient::MainShutdown()
    void OSClient::MainShutdown() {
        undefined1* this_00;
        NXTRenderer* this_01;
        bool bVar1;
        OSClient* this_02;
        undefined1 local_30[8];

        if (field_62809676 != '\0') {
            this_01 = (NXTRenderer*)oldscape::dash3d::NXTRenderer::GetInstance();
            this_01->Shutdown();
        }
        this_00 = field_55500240;
        this_02 = (OSClient*)this_00;
        this_00->SetShouldStopRunning();
        if (field_62809677 != '\0') {
            std::thread::join();
            this_02 = (OSClient*)local_30;
            new (this_02) std::thread();
            std::thread::operator=((thread*)&field_62807096, (thread*)this_02);
            this_02->~thread();
        }
        if (field_62809676 != '\0') {
            DestroyRenderingResources(this_02);
        }
        bVar1 = field_99920->operator_cast_to_bool();
        if (bVar1) {
            bVar1 = (bool)shared_ptr<OpenGLView>::operator->((shared_ptr<OpenGLView>*)field_99920);
            OpenGLView::SetWindowEnabled(bVar1);
        }
        this_00->Destroy();
        MainShutdown();
    }

    // 0x100189660, 32 bytes, placed by class name
    // OSClient::DestroyRenderingResources()
    void OSClient::DestroyRenderingResources() {
        OSRenderCore_LogicThread* this_00;
        OSRenderCore_RenderThread* this_01;

        this_00 = (OSRenderCore_LogicThread*)oldscape::OSRenderCore_AudioThread::Instance();
        this_00->DestroyResources();
        this_01 = (OSRenderCore_RenderThread*)oldscape::OSRenderCore_RenderThread::Instance();
        this_01->DestroyRenderingResources();
    }

    // 0x100189680, 64 bytes, placed by class name
    // OSClient::Update(float)
    void OSClient::Update(float param_1) {
        NXTRenderer* this_00;

        field_62809678 = 0;
        Update(param_1);
        if (field_62809678 == '\0') {
            this_00 = (NXTRenderer*)oldscape::dash3d::NXTRenderer::GetInstance();
            this_00->RenderThead_Service(false);
        }
    }

    // 0x1001896c0, 64 bytes, placed by class name
    // OSClient::MainLogic(bool)
    void OSClient::MainLogic(bool param_1) {
        OSRenderCore_RenderThread* this_00;
        bool bVar1;
        undefined7 in_register_00000031;

        bVar1 = std::operator!=((unique_ptr*)&field_62809600,
                                (_func_decltype_nullptr*)CONCAT71(in_register_00000031, param_1));
        if (bVar1) {
            std::unique_ptr<Steam, std::default_delete<Steam>>::operator->(
                (unique_ptr<Steam, std::default_delete<Steam>>*)&field_62809600);
            Steam::MainLogic();
        }
        this_00 = (OSRenderCore_RenderThread*)oldscape::OSRenderCore_RenderThread::Instance();
        this_00->MainLogic();
    }

    // 0x100189710, 32 bytes, placed by class name
    // OSClient::MainDraw(float)
    void OSClient::MainDraw(float param_1) {
        NXTRenderer* this_00;

        field_62809678 = 1;
        this_00 = (NXTRenderer*)oldscape::dash3d::NXTRenderer::GetInstance();
        this_00->RenderThead_Service(true);
    }

    // 0x1001897e0, 352 bytes, placed by class name
    // OSClient::GenerateCrashLog(eastl::string)
    void OSClient::GenerateCrashLog(undefined8 param_1, basic_string* param_2) {
        ClientCompositeZone* this;
        File* pFVar3;
        undefined8 uVar4;
        GameShell3Cache local_280[12];
        Filename local_150[19];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_280->GetRootStorage();
        Filename::operator/(local_150, (char*)local_280);
        local_280->~pair();
        std::make_unique<File, Filename&, int const&>((Filename*)local_280, (int*)local_150);
        if (local_280->operator_cast_to_bool()) {
            this = (ClientCompositeZone*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                (unique_ptr<File, std::default_delete<File>>*)local_280);
            if (IsValid() != '\0') {
                pFVar3 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                    (unique_ptr<File, std::default_delete<File>>*)local_280);
                pFVar3->write(param_2, 0);
                pFVar3 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                    (unique_ptr<File, std::default_delete<File>>*)local_280);
                pFVar3->close(0);
                goto LAB_1001898c6;
            }
        }
        uVar4 = logger::default_logger();
        logger::Logger::Log(
            uVar4, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/OSClient.cpp", 542,
            "Error creating crash log dump");
    LAB_1001898c6:
        local_280->~unique_ptr();
        local_150->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100189a70, 272 bytes, placed by class name
    // OSClient::AllocationFailed(unsigned long) const
    void OSClient::AllocationFailed(ulong param_1) {
        AABB local_868;
        HardwareInfo local_848[7];
        undefined8 local_20;

        local_20 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        local_868.field_0 = 0;
        local_868.field_4 = 0;
        local_868._8_8_ = 0;
        local_868._16_8_ = 0;
        new (&local_868) oldscape::dash3d::ModelLit::AABB();
        if (Singleton<hardware::HardwareInfo>::InstancePtr() != 0) {
            local_868.Instance();
            local_848->GetMemoryStatistics();
            local_868._16_8_ = local_848[0]._16_8_;
            local_868.field_0 = (undefined4)local_848[0].field_0;
            local_868.field_4 = local_848[0].field_0._4_4_;
            local_868._8_8_ = local_848[0]._8_8_;
        }
        new (local_848) eastl::fixed_string<char, 2048, true, eastl::allocator>();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true, eastl::allocator>>::
            sprintf((char*)local_848, "Failed to allocate %zu bytes (PHYS %llu VIRT %llu SYST %llu)", param_1,
                    local_868._0_8_, local_868._8_8_, local_868._16_8_);
        DebugOutput::WriteDebugString(local_848, 4);
        /* WARNING: Subroutine does not return */
        local_848->~fixed_string();
    }

    // 0x100189cd0, 208 bytes, placed by class name
    // OSClient::HandleProgramCrash(callstack::JagException const&)
    void OSClient::HandleProgramCrash(JagException* param_1) {
        char* pcVar1;
        Callstack* pCVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        eastl::string local_50[32];
        allocator local_30[8];

        pcVar1 = (char*)(*(code*)param_1->field_0[2])(param_1);
        eastl::allocator::allocator(local_30, "EASTL basic_string");
        eastl::string::basic_string(local_50, pcVar1, local_30);
        GenerateCrashLog();
        eastl::string::~basic_string(local_50);
        pcVar1 = (char*)(*(code*)param_1->field_0[2])(param_1);
        pCVar2 = (Callstack*)param_1->GetCallstackRaw();
        oldscape::OldscapeClientError::ReportError(pcVar1, pCVar2);
        uVar3 = logger::default_logger();
        uVar4 = (*(code*)param_1->field_0[2])(param_1);
        logger::Logger::Log(
            uVar3, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/OSClient.cpp", 564,
            &DAT_100e377c0, uVar4);
    }

    // 0x100189df0, 416 bytes, placed by class name
    // OSClient::HandleProgramCrash(std::exception const&)
    void OSClient::HandleProgramCrash(exception* param_1) {
        char* pcVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        Callstack local_43d0[50];
        CallstackResolved local_40a8[2];
        eastl::string local_4088[32];
        eastl::string local_4068[32];
        allocator local_4048[8];
        CallstackResolved local_4040[1025];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        callstack::Callstack::Callstack(local_43d0);
        local_43d0->Capture(0);
        pcVar1 = (char*)(**(code**)(*(long*)param_1 + 16))(param_1);
        oldscape::OldscapeClientError::ReportError(pcVar1, local_43d0);
        callstack::CallstackResolved::CallstackResolved(local_40a8, local_43d0);
        local_4040->Get(local_40a8);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::allocator::allocator(local_4048, "EASTL basic_string");
        eastl::string::basic_string(local_4088, pcVar1, local_4048);
        local_4040->~fixed_string();
        eastl::string::basic_string(local_4068, (basic_string*)local_4088);
        GenerateCrashLog();
        eastl::string::~basic_string(local_4068);
        uVar2 = logger::default_logger();
        uVar3 = (**(code**)(*(long*)param_1 + 16))(param_1);
        logger::Logger::Log(
            uVar2, 0, 2,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/OSClient.cpp", 575,
            &DAT_100e377c0, uVar3);
        eastl::string::~basic_string(local_4088);
        local_40a8->~CallstackResolved();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100189fc0, 160 bytes, placed by class name
    // OSClient::SaveWindowPosition(Window const*)
    void OSClient::SaveWindowPosition(Window* param_1) {
        WindowSavedPosition local_60;
        VBOMapper local_40;

        new (&local_40) PacketT<Array<unsigned char, eastl::allocator>>();
        param_1->GetWindowSavePositionData((PacketT*)&local_40);
        if (local_40.GetTextureAtlas() != 0) {
            new (&local_60) oldscape::WindowSavedPosition((PacketT*)&local_40);
            (field_55500240, &local_60)->SaveWindowPosition();
            local_60.~WindowSavedPosition();
        }
        local_40.~VBOMapper();
    }

    // 0x1001b0fb0, 48 bytes, placed by class name
    // OSClient::OnMainInit(SystemInitParams const&)::$_1::operator()() const
    /* OSClient::OnMainInit(SystemInitParams const&)::$_1::TEMPNAMEPLACEHOLDERVALUE() const */

    void OSClient::OnMainInit(SystemInitParams_const&)::$_1::operator()() {
        OSClient* this_00;
        undefined1 in_SIL;

        this_00 = field_8;
        LogicThreadInit(this_00);
        std::atomic<bool>::operator=(field_0, (bool)in_SIL);
        LogicThreadRun(this_00);
    }

    // 0x1001b1ae0, 80 bytes, placed by class name
    // OSClient::SetupSteamOverlayCallbacks()::$_2::operator()(bool) const
    /* OSClient::SetupSteamOverlayCallbacks()::$_2::TEMPNAMEPLACEHOLDERVALUE(bool) const */

    void OSClient::SetupSteamOverlayCallbacks()::$_2::operator()(bool param_1) {
        long* plVar1;
        bool bVar2;
        Window* this_00;

        plVar1 = field_0;
        bVar2 = (bool)shared_ptr<OpenGLView>::operator->((shared_ptr<OpenGLView>*)(plVar1 + 12490));
        OpenGLView::SetWindowEnabled(bVar2);
        this_00 = (Window*)(**(code**)(*plVar1 + 96))(plVar1);
        if (param_1) {
            this_00->SetFocusWindow();
        } else {
            this_00->SetFocusGame();
        }
    }

} // namespace jag

// 0x1001875b0, 64 bytes, placed by debug map only (low confidence)
// CreateAppInstanceCallback()
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CreateAppInstanceCallback() */

OSClient* CreateAppInstanceCallback() {
    OSClient* this;

    this = operator_new(62809680);
    jag::OSClient::OSClient(this);
    SetAppInstance();
    return this;
}

// 0x100187610, 48 bytes, placed by neighbouring functions
// DestroyAppInstanceCallback(jag::BaseApp*)
void DestroyAppInstanceCallback(BaseApp* param_1) {
    BaseApp* local_10;

    local_10 = param_1;
    jag::safe_delete<jag::game::VarDomainType>((VarDomainType**)&local_10);
    0->SetAppInstance();
}

// 0x100188b70, 896 bytes, placed by neighbouring functions
// ___ZN3jag8OSClient10OnMainInitERKNS_16SystemInitParamsE_block_invoke
void ____ZN3jag8OSClient10OnMainInitERKNS_16SystemInitParamsE_block_invoke() {
    undefined* puVar1;
    ID self;
    ID self_00;
    ID IVar2;
    long lVar3;
    undefined8 uVar4;
    cfstringStruct* pcVar5;
    ID self_01;
    ID IVar6;
    ID IVar7;
    undefined8 uVar8;
    cfstringStruct* pcVar9;

    puVar1 = PTR__objc_msgSend_100ee9e50;
    self = NSMenu::alloc((ID)&_OBJC_CLASS___NSMenu, "alloc");
    (*(code*)puVar1)(*(undefined8*)PTR__NSApp_100ee4008, "setMainMenu:", self);
    self_00 = NSMenu::new ((ID)&_OBJC_CLASS___NSMenu, "new");
    IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle, "mainBundle");
    lVar3 = _objc_retainAutoreleasedReturnValue(IVar2);
    if (lVar3 == 0) {
        pcVar5 = (cfstringStruct*)0;
    } else {
        uVar4 = (*(code*)PTR__objc_msgSend_100ee9e50)(lVar3, "objectForInfoDictionaryKey:", &cf_CFBundleDisplayName);
        pcVar5 = (cfstringStruct*)_objc_retainAutoreleasedReturnValue(uVar4);
        if (pcVar5 == (cfstringStruct*)0) {
            uVar4 = (*(code*)PTR__objc_msgSend_100ee9e50)(lVar3, "objectForInfoDictionaryKey:", &cf_CFBundleName);
            pcVar5 = (cfstringStruct*)_objc_retainAutoreleasedReturnValue(uVar4);
            (*(code*)PTR__objc_release_100ee9e60)(0);
        }
    }
    pcVar9 = &cf_OSClient;
    if (pcVar5 != (cfstringStruct*)0) {
        pcVar9 = pcVar5;
    }
    uVar4 = (*(code*)PTR__objc_msgSend_100ee9e50)(&cf_Quit, "stringByAppendingString:", pcVar9);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    IVar2 = NSMenuItem::alloc((ID)&_OBJC_CLASS___NSMenuItem, "alloc");
    IVar2 = NSMenuItem::initWithTitle_action_keyEquivalent_(IVar2, "initWithTitle:action:keyEquivalent:", uVar4,
                                                            "terminate:", &cf_q);
    self_01 = NSMenuItem::new ((ID)&_OBJC_CLASS___NSMenuItem, "new");
    NSMenu::addItem_(self_00, "addItem:", IVar2);
    NSMenu::addItem_(self, "addItem:", self_01);
    NSMenuItem::setSubmenu_(self_01, "setSubmenu:", self_00);
    IVar6 = NSMenu::alloc((ID)&_OBJC_CLASS___NSMenu, "alloc");
    IVar6 = NSMenu::initWithTitle_(IVar6, "initWithTitle:", &cf_Window);
    IVar7 = NSMenu::addItemWithTitle_action_keyEquivalent_(IVar6, "addItemWithTitle:action:keyEquivalent:", &cf_Close,
                                                           "terminate:", &cf_w);
    uVar8 = _objc_retainAutoreleasedReturnValue(IVar7);
    (*(code*)PTR__objc_release_100ee9e60)(uVar8);
    IVar7 = NSMenu::addItemWithTitle_action_keyEquivalent_(
        IVar6, "addItemWithTitle:action:keyEquivalent:", &cf_Minimize, "performMiniaturize:", &cf_m);
    uVar8 = _objc_retainAutoreleasedReturnValue(IVar7);
    (*(code*)PTR__objc_release_100ee9e60)(uVar8);
    IVar7 = NSMenuItem::new ((ID)&_OBJC_CLASS___NSMenuItem, "new");
    NSMenu::addItem_(self, "addItem:", IVar7);
    NSMenuItem::setSubmenu_(IVar7, "setSubmenu:", IVar6);
    (*(code*)PTR__objc_msgSend_100ee9e50)(*(undefined8*)PTR__NSApp_100ee4008, "setWindowsMenu:", IVar6);
    puVar1 = PTR__objc_release_100ee9e60;
    (*(code*)PTR__objc_release_100ee9e60)(IVar7);
    (*(code*)puVar1)(IVar6);
    (*(code*)puVar1)(self_01);
    (*(code*)puVar1)(IVar2);
    (*(code*)puVar1)(uVar4);
    (*(code*)puVar1)(pcVar9);
    (*(code*)puVar1)(lVar3);
    (*(code*)puVar1)(self_00);
    (*(code*)puVar1)(self);
}

namespace jag::oldscape {
    // 0x100189310: the linker folded this into OSRenderCore_LogicThread::Instance(), which has identical code
    OSRenderCore_AudioThread::Instance();

} // namespace jag::oldscape
