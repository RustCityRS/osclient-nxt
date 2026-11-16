// projects/osclient/OSClient.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "OSClient.h"
#include "libs/oldscape/osrendercore/OSRenderCore.h"

namespace jag {
    // 0x100187640
    void safe_delete<BaseApp>(BaseApp*& arg1) {
        if (arg1 != nullptr) {
            delete ((arg1));
        }
        arg1 = nullptr;
    }

    // 0x100187670
    OSClient::OSClient() : GraphicsApp() {
        field_1128 = &PTR__OSClient_100ef5bd0;
        field_1144 = &PTR__OSClient_100ef5c00;
        field_101440 = &PTR_HandleProgramCrash_100ef5c28;
        field_101448 = &PTR_AllocationFailed_100ef5c48;
        new (&field_101456) oldscape::OSRenderCore_Impl(*this);
        uint8_t* local_68 = &field_101456;
        new (field_55500240) oldscape::Client(*this);
        &field_62807088->unique_ptr<true, void>();
        uint8_t* local_50 = &field_62807096;
        new (local_50) std::thread();
        uint8_t* local_48 = &field_62807104;
        uint8_t* local_60 = field_55500240;
        new (local_48) input::Input();
        uint8_t* local_40 = &field_62807280;
        new (local_40) input::InputHandler();
        &field_62809600->unique_ptr<true, void>();
        new (&field_62809616) std::function<void(bool)>();
        field_62809664.unique_ptr<true, void>();
        field_62809672 = 1;
        field_62809676 = 0;
        field_62809677 = 0;
        field_62809678 = 0;
        callstack::CrashHandler::Set(&field_101440);
        callstack::OutOfMemoryHandler::Set(&field_101448);
        eastl::string local_b8("OSClient");
        eastl::string local_98("com.jagex.osclient");
        notifications::SetAppName(local_b8, local_98);
    }

    // 0x1001879e0
    uint32_t OSClient::MainInit(const SystemInitParams& systemInitParams) {
        bool bVar3;
        uint32_t uVar4;
        uint64_t uVar5;
        unsigned long uVar6;
        eastl::string* pbVar7;
        unsigned long uVar8;
        eastl::string* pbVar9;
        uint8_t** ppuVar13;
        unsigned long uVar14;
        int iVar15;
        eastl::string local_118;
        unsigned int local_70[2];
        unsigned int local_68[2];
        eastl::string* local_38;

        Client* local_80 = (Client*)field_55500240;
        local_80->Init();
        char cVar2 = Steam::ValidateSteamAPIExists();
        if (cVar2) {
            local_d8 = std::make_unique<Steam>();
            field_62809600 = local_d8;
            cVar2 = ((Steam*)field_62809600.operator->())->Init(0, false);
            if (!cVar2) {
                return 0;
            }
        }
        auto local_40 = systemInitParams.second();
        vector<eastl::string> local_60;
        local_60.reserve(7);
        long lVar16 = 0;
        vector<eastl::string>* this_03 = &local_60;
        do {
            local_d8 = eastl::string(*(char**)((long)&PTR_DAT_100ef5c50 + lVar16));
            this_03->push_back(local_d8);
            lVar16 = lVar16 + 8;
        } while (lVar16 != 56);
        local_f8 = eastl::string();
        Args* pAVar1 = local_40;
        lVar16 = local_40->GetArgc();
        if (lVar16 != 0) {
            uVar14 = 0;
            do {
                pAVar1->GetArgv(uVar14);
                uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_f8.append_sprintf(" \"%s\"", uVar5);
                uVar14 = uVar14 + 1;
                uVar6 = pAVar1->GetArgc();
            } while (uVar14 < uVar6);
        }
        auto this_02 = logger::default_logger();
        uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        char* pcVar12 =
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/OSClient.cpp";
        this_02->Log(false, 5,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/OSClient.cpp",
                     97, "OSCLIENT assemble Command-line args from: %s", uVar5);
        lVar16 = pAVar1->GetArgc();
        if (lVar16 == 0) {
            cVar2 = '\0';
        } else {
            pbVar7 = (eastl::string*)pAVar1->GetArgv(0);
            local_118 = eastl::string("android");
            cVar2 = is_equal_ignore_case(pbVar7, &local_118);
            if (lVar16 != 0) {
            }
        }
        if (!cVar2) {
            uVar14 = pAVar1->GetArgc();
            if (1 < uVar14) {
                uVar14 = 1;
                local_38 = (eastl::string*)((unsigned long)local_38 & 18446744069414584320);
                do {
                    pbVar7 = (eastl::string*)local_40->GetArgv(uVar14);
                    bVar3 = starts_with<eastl::string>(pbVar7, "jagex-jav");
                    this_03 = (vector<eastl::string>*)(((uint64_t)((int64_t)((unsigned long)this_03 >> 8)) << 8) |
                                                       (uint8_t)1);
                    if (bVar3) {
                    LAB_100188040:
                        if (((unsigned long)this_03 & 1) == 0) {
                            bVar3 = starts_with<eastl::string>(pbVar7, "--");
                            pcVar12 = (char*)(((uint64_t)((int64_t)((unsigned long)pcVar12 >> 8)) << 8) | (uint8_t)1);
                            local_38 = (eastl::string*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)((int)pcVar12));
                            if (!bVar3) {
                                pbVar9 = &local_60[uVar14 - 1];
                                iVar15 = 12;
                                *pbVar9 = pbVar7;
                                local_38 =
                                    (eastl::string*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)((int)this_03));
                                goto LAB_1001880a4;
                            }
                        } else {
                            local_38 = (eastl::string*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)((int)this_03));
                        }
                        iVar15 = 0;
                        local_60.push_back(*pbVar7);
                    } else {
                        local_d8 = eastl::string("-NSDocumentRevisionsDebugMode");
                        cVar2 = is_equal_ignore_case(pbVar7, (eastl::string*)&local_d8);
                        iVar15 = 10;
                        this_03 = (vector<eastl::string>*)((unsigned long)local_38 & 4294967295);
                        if (!cVar2)
                            goto LAB_100188040;
                    }
                LAB_1001880a4:
                    if ((iVar15 != 12) && (iVar15 != 0))
                        break;
                    uVar14 = uVar14 + 1;
                    uVar6 = local_40->GetArgc();
                } while (uVar14 < uVar6);
            }
        } else {
            uVar14 = pAVar1->GetArgc();
            if (1 < uVar14) {
                uVar14 = 1;
                do {
                    pAVar1 = local_40;
                    pbVar7 = (eastl::string*)local_40->GetArgv(uVar14);
                    uVar6 = uVar14 + 1;
                    pcVar12 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    cVar2 = starts_with(pcVar12, "jagex-jav://");
                    if (!cVar2) {
                        uVar8 = pAVar1->GetArgc();
                        iVar15 = 8;
                        if (uVar6 != uVar8) {
                            local_38 = (eastl::string*)pAVar1->GetArgv(uVar6);
                            local_d8 = eastl::string("worldid");
                            cVar2 = is_equal_ignore_case(pbVar7, (eastl::string*)&local_d8);
                            uVar6 = uVar14 + 2;
                            if (!cVar2) {
                                local_d8 = eastl::string("modewhere");
                                cVar2 = is_equal_ignore_case(pbVar7, (eastl::string*)&local_d8);
                                if (!cVar2) {
                                    local_d8 = eastl::string("contentmode");
                                    cVar2 = is_equal_ignore_case(pbVar7, (eastl::string*)&local_d8);
                                    if (!cVar2) {
                                        local_d8 = eastl::string("mem");
                                        cVar2 = is_equal_ignore_case(pbVar7, (eastl::string*)&local_d8);
                                        if (!cVar2) {
                                            local_d8 = eastl::string("members");
                                            cVar2 = is_equal_ignore_case(pbVar7, (eastl::string*)&local_d8);
                                            if (!cVar2) {
                                                local_d8 = eastl::string("lang");
                                                cVar2 = is_equal_ignore_case(pbVar7, (eastl::string*)&local_d8);
                                                if (!cVar2) {
                                                    local_d8 = eastl::string("modegame");
                                                    cVar2 = is_equal_ignore_case(pbVar7, (eastl::string*)&local_d8);
                                                    if (!cVar2) {
                                                        local_60.push_back(*pbVar7);
                                                        iVar15 = 0;
                                                        local_60.push_back(*local_38);
                                                    } else {
                                                        pbVar9 = &local_60[6];
                                                        iVar15 = 0;
                                                        *pbVar9 = local_38;
                                                    }
                                                } else {
                                                    pbVar9 = &local_60[5];
                                                    iVar15 = 0;
                                                    *pbVar9 = local_38;
                                                }
                                            } else {
                                                pbVar9 = &local_60[4];
                                                iVar15 = 0;
                                                *pbVar9 = local_38;
                                            }
                                        } else {
                                            pbVar9 = &local_60[3];
                                            iVar15 = 0;
                                            *pbVar9 = local_38;
                                        }
                                    } else {
                                        pbVar9 = &local_60[2];
                                        iVar15 = 0;
                                        *pbVar9 = local_38;
                                    }
                                } else {
                                    pbVar9 = &local_60[1];
                                    iVar15 = 0;
                                    *pbVar9 = local_38;
                                }
                            } else {
                                pbVar9 = &local_60[0];
                                iVar15 = 0;
                                *pbVar9 = local_38;
                            }
                        }
                    } else {
                        iVar15 = 9;
                        local_60.push_back(*pbVar7);
                    }
                    if ((iVar15 != 9) && (iVar15 != 0))
                        break;
                    uVar8 = local_40->GetArgc();
                    uVar14 = uVar6;
                } while (uVar6 < uVar8);
            }
        }
        pbVar7 = (eastl::string*)local_60.HeapBeginPtr();
        auto str2 = local_60.end();
        local_a0 = Array<eastl::string, BucketAllocatorEASTL>(pbVar7, str2);
        cVar2 = local_80->Main(local_a0);
        if (!cVar2) {
            local_a0.set_max_size(7, 3);
            uVar14 = 0;
            ppuVar13 = &PTR_DAT_100ef5c50;
            do {
                pcVar12 = *ppuVar13;
                pbVar9 = &local_a0[uVar14];
                eastl::string::assign(pbVar9, pcVar12);
                uVar14 = uVar14 + 1;
                ppuVar13 = ppuVar13 + 1;
            } while (uVar14 != 7);
            cVar2 = local_80->Main(local_a0);
            if (!cVar2) {
                uVar4 = 0;
                goto LAB_10018824d;
            }
        }
        OSClient* this_00 = this;
        SystemInitParams local_d8(systemInitParams);
        input::Input::Init();
        this_00->field_62807104.SetDefaultInputHandler(&this_00->field_62807280);
        std::make_unique<render::RenderTargetsManager, char const(&)[1], int const&>(local_68, this_00->field_62809672);
        this_00->field_62809664 = *local_68;
        SetupSteamOverlayCallbacks(this_00);
        auto tVar10 = _time(nullptr);
        unsigned int arg1 = (unsigned int)tVar10;
        new ((__cxx_atomic_base_impl<oldscape::FolderSelection::FolderPathRequestStatus>*)&math::g_Rand)
            std::__cxx_atomic_base_impl(arg1);
        _srand(arg1);
        _srand(arg1);
        local_70[0] = std::thread::hardware_concurrency();
        local_70[1] = 4;
        auto puVar11 = std::min<unsigned int>(*local_70, *(local_70 + 1));
        local_68[0] = *puVar11;
        AutoSingleton<ThreadPoolSingleton>::Create<unsigned int const&>(*local_68);
        uVar4 = this_00->MainInit(local_d8);
    LAB_10018824d:
        return uVar4;
    }

    // 0x100188900
    void OSClient::SetupSteamOverlayCallbacks() {
        uint8_t* this_01;
        Steam* pSVar2;
        unique_ptr<SteamOverlay, std::default_delete<SteamOverlay> _>* puVar3;
        SteamOverlay* pSVar4;

        uint8_t* this_00 = &field_62809600;
        if (this_00->operator_cast_to_bool()) {
            pSVar2 = (Steam*)(*this_00).operator->();
            puVar3 = pSVar2->GetSteamOverlayModule();
            pSVar4 = (SteamOverlay*)(*puVar3).operator->();
            pSVar4->SetNotificationPosition(0);
            this_01 = &field_62809616;
            if (!(this_01->operator_cast_to_bool())) {
                *this_01 = (__2)this;
                pSVar2 = (Steam*)(*this_00).operator->();
                puVar3 = pSVar2->GetSteamOverlayModule();
                pSVar4 = (SteamOverlay*)(*puVar3).operator->();
                pSVar4->SetOnChanged(*this_01);
            }
        }
    }

    // 0x100188a30
    uint64_t OSClient::OnMainInit(const SystemInitParams& systemInitParams) {
        uint64_t extraout_var;
        thread local_40;
        __atomic_base local_28;

        SetWindowTitle("Old School RuneScape");
        field_55500240->InitHostPlatformStats();
        uint8_t* puVar1 = PTR___dispatch_main_q_100ee9db8;
        _objc_retainAutorelease(PTR___dispatch_main_q_100ee9db8);
        _dispatch_async(puVar1, &___block_literal_global);
        uint8_t uVar2 = GetWindow();
        ((Window*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2))->Show(true);
        CreateRenderingResources();
        RenderThreadInit();
        auto local_38 = std::make_unique<oldscape::TitleScreen>();
        field_62807088 = local_38;
        UpdateMainAppWindow();
        local_28[0] = (__atomic_base)0;
        local_38 = (ReturnValue)&local_28;
        OSClient* local_30 = this;
        std::thread::thread<OSClient::OnMainInit(SystemInitParams const&)::__1, , void>(&local_40, (__1*)&local_38);
        field_62807096 = local_40;
        std::thread::~thread(&local_40);
        bool cVar3 = std::__atomic_base::operator_cast_to_bool(&local_28);
        if (!cVar3) {
            do {
                this_thread::Sleep(100);
                cVar3 = std::__atomic_base::operator_cast_to_bool(&local_28);
            } while (!cVar3);
        }
        return 1;
    }

    // 0x100188ef0
    void OSClient::CreateRenderingResources() {
        oldscape::OSRenderCore_RenderThread::Instance()->CreateRenderingResources();
    }

    // 0x100188f10
    void OSClient::RenderThreadInit() {
        auto pOVar1 = oldscape::OSRenderCore_RenderThread::Instance();
        ((OSRenderCore_RenderThread_Common*)(pOVar1->field_32 + (long)(pOVar1->_vptr[-3].GetUISize - 32)))
            ->SetThreadID();
        pOVar1 = oldscape::OSRenderCore_RenderThread::Instance();
        pOVar1->Init();
        oldscape::dash3d::NXTRenderer::GetInstance();
        oldscape::dash3d::NXTRenderer::RenderThread_Init();
        field_62809676 = 1;
        SetMaxForegroundFps(60);
        SetMaxBackgroundFps(60);
    }

    // 0x100189040
    void OSClient::DeviceLostFocus() {
        TitlescreenInputHandler local_40;

        if (this_thread::IsMainThread() == '\0') {
            LogAssert("this_thread::IsMainThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/OSClient.cpp",
                      342, nullptr);
        }
        (logger::default_logger())
            ->Log(false, 8,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/OSClient.cpp",
                  343, "DeviceLostFocus called");
        field_62807280.DeviceLostFocus();
        ((field_55500240 + 8496))->ResetState();
        field_62807088.operator->();
        local_40.GetTitleScreenInputHandler();
        local_40.ResetState();
        auto this_01 = field_55500240->GetConsole();
        auto plVar2 = this_01->GetHeadIconIndex();
        (**(void (**)(...))(*plVar2 + 96))(plVar2);
    }

    // 0x100189190
    void OSClient::PauseAudio() {
        long* plVar2;

        (logger::default_logger())
            ->Log(false, 8,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/OSClient.cpp",
                  355, "Pausing audio");
        auto this_01 = field_55500240->GetApplicationContext();
        if (shared_ptr::operator_cast_to_bool(this_01) != '\0') {
            plVar2 = (long*)(*this_01).operator->();
            (**(void (**)(...))(*plVar2 + 56))(plVar2);
        }
        field_55500240->CheckToQueueMutedAudio();
    }

    // 0x100189200
    void OSClient::ResumeAudio() {
        (logger::default_logger())
            ->Log(false, 8,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/OSClient.cpp",
                  368, "Resuming audio");
        auto this_01 = field_55500240->GetApplicationContext();
        if (shared_ptr::operator_cast_to_bool(this_01) != '\0') {
            ((ApplicationContext*)(*this_01).operator->())->ResumeApplication();
        }
        field_55500240->CheckToQueueMutedAudio();
    }

    // 0x1001892c0
    void OSClient::LogicThreadInit() {
        this_thread::SetThreadName("Logic thread");
        auto plVar1 = oldscape::OSRenderCore_AudioThread::Instance();
        ((OSRenderCore_LogicThread_Common*)((long)plVar1 + *(long*)(*plVar1 - 24)))->SetThreadID();
        oldscape::dash3d::NXTRenderer::GetInstance();
        oldscape::dash3d::NXTRenderer::LogicThread_Init();
        field_62809677 = 1;
    }

    // 0x100189320
    void OSClient::LogicThreadRun() {
        field_55500240->Run(&field_62807104, &field_62807280);
    }

    // 0x100189560
    void OSClient::RenderContextInit(render::RenderContextDesc& renderContextDesc) const {
        *(uint8_t*)((long)&renderContextDesc.field_8 + 3) = 0;
        *(uint16_t*)&renderContextDesc.field_4 = 4120;
    }

    // 0x100189570
    void OSClient::MainShutdown() {
        thread local_30;

        if (field_62809676 != '\0') {
            oldscape::dash3d::NXTRenderer::GetInstance()->Shutdown();
        }
        oldscape::javapal::GameShell::SetShouldStopRunning();
        if (field_62809677 != '\0') {
            std::thread::join();
            local_30 = std::thread();
            field_62807096 = local_30;
            std::thread::~thread(&local_30);
        }
        if (field_62809676 != '\0') {
            DestroyRenderingResources();
        }
        if (field_99920->operator_cast_to_bool() != '\0') {
            ((OpenGLView*)(*field_99920).operator->())->SetWindowEnabled(true);
        }
        field_55500240->Destroy();
        MainShutdown();
    }

    // 0x100189660
    void OSClient::DestroyRenderingResources() {
        ((OSRenderCore_LogicThread*)oldscape::OSRenderCore_AudioThread::Instance())->DestroyResources();
        oldscape::OSRenderCore_RenderThread::Instance()->DestroyRenderingResources();
    }

    // 0x100189680
    void OSClient::Update(float arg1) {
        field_62809678 = 0;
        Update(arg1);
        if (field_62809678 == '\0') {
            oldscape::dash3d::NXTRenderer::GetInstance()->RenderThead_Service(false);
        }
    }

    // 0x1001896c0
    void OSClient::MainLogic(bool arg1) {
        uint64_t in_register_00000031;

        if (&field_62809600 != ((void*)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1))) {
            field_62809600.operator->();
            Steam::MainLogic();
        }
        oldscape::OSRenderCore_RenderThread::Instance()->MainLogic();
    }

    // 0x100189710
    void OSClient::MainDraw(float arg1) {
        field_62809678 = 1;
        oldscape::dash3d::NXTRenderer::GetInstance()->RenderThead_Service(true);
    }

    // 0x1001897e0
    void OSClient::GenerateCrashLog(eastl::string str) {
        File* pFVar2;

        auto local_280 = oldscape::GameShell3Cache::GetRootStorage();
        Filename local_150 = local_280 / "CrashLogDump.txt";
        std::make_unique<File, Filename&, int const&>(local_280, local_150);
        if (std::unique_ptr::operator_cast_to_bool(&local_280)) {
            if (((ClientCompositeZone*)local_280.operator->())->IsValid()) {
                pFVar2 = (File*)local_280.operator->();
                pFVar2->write(str, nullptr);
                pFVar2 = (File*)local_280.operator->();
                pFVar2->close(nullptr);
                goto LAB_1001898c6;
            }
        }
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/OSClient.cpp",
                  542, "Error creating crash log dump");
    LAB_1001898c6:
    }

    // 0x100189a70
    void OSClient::AllocationFailed(unsigned long arg1) const {
        DEBUG_OUTPUT_LEVEL dEBUG_OUTPUT_LEVEL;
        uint64_t uStack_860;
        uint64_t local_858;

        ReturnValue local_868 = (ReturnValue)0;
        uStack_860._0_4_ = 0;
        uStack_860._4_4_ = 0;
        local_858._0_4_ = 0;
        local_858._4_4_ = 0;
        new (&local_868) oldscape::dash3d::ModelLit::AABB();
        if (((Singleton<hardware::HardwareInfo>*)(AABB*)&local_868)->InstancePtr() != 0) {
            ((Singleton<hardware::HardwareInfo>*)(AABB*)&local_868)->Instance();
            local_848 = hardware::HardwareInfo::GetMemoryStatistics();
            local_858 = local_848[2];
            local_868 = local_848[0];
            uStack_860 = local_848[1];
        }
        eastl::fixed_string<char, 2048> local_848;
        local_848.sprintf("Failed to allocate %zu bytes (PHYS %llu VIRT %llu SYST %llu)", arg1, local_868, uStack_860,
                          local_858);
        local_848.WriteDebugString(*4, dEBUG_OUTPUT_LEVEL);
    }

    // 0x100189cd0
    void OSClient::HandleProgramCrash(const callstack::JagException& jagException) {
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        uint64_t extraout_var_01;

        uint8_t uVar1 = (jagException._vptr->what)(jagException);
        eastl::string local_50((char*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1));
        GenerateCrashLog(&local_50, &local_50);
        uVar1 = (jagException._vptr->what)(jagException);
        auto callstack = jagException.GetCallstackRaw();
        oldscape::OldscapeClientError::ReportError((char*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar1),
                                                   callstack);
        auto this_00 = logger::default_logger();
        uVar1 = (jagException._vptr->what)(jagException);
        this_00->Log(false, 2,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/OSClient.cpp",
                     564, "%s", (((uint64_t)extraout_var_01 << 8) | (uint8_t)uVar1));
    }

    // 0x100189df0
    void OSClient::HandleProgramCrash(const std::exception& exception) {
        Callstack local_43d0;
        local_43d0.Capture(0);
        char* pcVar1 = (char*)(**(void (**)(...))(*(long*)exception + 16))(exception);
        oldscape::OldscapeClientError::ReportError(pcVar1, &local_43d0);
        CallstackResolved local_40a8(local_43d0);
        auto local_4040 = local_40a8.Get(nullptr);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::string local_4088(pcVar1);
        eastl::string local_4068(local_4088);
        GenerateCrashLog(&local_4068, &local_4068);
        auto this_00 = logger::default_logger();
        uint64_t uVar2 = (**(void (**)(...))(*(long*)exception + 16))(exception);
        this_00->Log(false, 2,
                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/OSClient.cpp",
                     575, "%s", uVar2);
    }

    // 0x100189fc0
    void OSClient::SaveWindowPosition(const Window* window) {
        WindowSavedPosition local_60;

        VBOMapper local_40;
        window->GetWindowSavePositionData(local_40);
        if (local_40.GetTextureAtlas() != 0) {
            local_60 = oldscape::WindowSavedPosition(local_40);
            field_55500240->SaveWindowPosition(local_60);
        }
    }

    // 0x1001b0fb0
    void OSClient::OnMainInit(SystemInitParams const&)::$_1::operator()() const {
        uint8_t in_SIL;

        OSClient* this_00 = field_8;
        LogicThreadInit(this_00);
        *field_0 = ((bool)in_SIL);
        LogicThreadRun(this_00);
    }

    // 0x1001b1ae0
    void OSClient::SetupSteamOverlayCallbacks()::$_2::operator()(bool arg1) const {
        __2 _Var1 = *this;
        ((OpenGLView*)(*((shared_ptr<OpenGLView>*)((long)_Var1 + 99920))).operator->())->SetWindowEnabled(!arg1);
        Window* this_01 = (Window*)(**(void (**)(...))(*(long*)_Var1 + 96))(_Var1);
        if (!arg1) {
            this_01->SetFocusGame();
        } else {
            this_01->SetFocusWindow();
        }
    }

} // namespace jag

// 0x1001875b0
OSClient* CreateAppInstanceCallback() {
    OSClient* oSClient = (OSClient*)operator new(62809680);
    new (oSClient) jag::OSClient();
    jag::BaseApp::SetAppInstance(oSClient);
    return oSClient;
}

// 0x100187610
void DestroyAppInstanceCallback(jag::BaseApp* baseApp) {
    jag::safe_delete<jag::game::VarDomainType>((DebugPrimitiveCollectorBasic*)baseApp);
    jag::BaseApp::SetAppInstance(nullptr);
}

// 0x100188b70
void ____ZN3jag8OSClient10OnMainInitERKNS_16SystemInitParamsE_block_invoke(void) {
    uint64_t uVar4;
    cfstringStruct* pcVar5;

    uint8_t* puVar1 = PTR__objc_msgSend_100ee9e50;
    auto self = NSMenu::alloc((ID)&_OBJC_CLASS___NSMenu, "alloc");
    (*(void (*)(...))puVar1)(*(uint64_t*)PTR__NSApp_100ee4008, "setMainMenu:", self);
    auto self_00 = NSMenu::new ((ID)&_OBJC_CLASS___NSMenu, "new");
    auto IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle, "mainBundle");
    long lVar3 = _objc_retainAutoreleasedReturnValue(IVar2);
    if (lVar3 == 0) {
        pcVar5 = nullptr;
    } else {
        uVar4 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(lVar3,
                                                              "objectForInfoDictionaryKey:", &cf_CFBundleDisplayName);
        pcVar5 = (cfstringStruct*)_objc_retainAutoreleasedReturnValue(uVar4);
        if (pcVar5 == nullptr) {
            uVar4 =
                (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(lVar3, "objectForInfoDictionaryKey:", &cf_CFBundleName);
            pcVar5 = (cfstringStruct*)_objc_retainAutoreleasedReturnValue(uVar4);
            (*(void (*)(...))PTR__objc_release_100ee9e60)(0);
        }
    }
    cfstringStruct* pcVar9 = &cf_OSClient;
    if (pcVar5 != nullptr) {
        pcVar9 = pcVar5;
    }
    uVar4 = (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(&cf_Quit, "stringByAppendingString:", pcVar9);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    IVar2 = NSMenuItem::alloc((ID)&_OBJC_CLASS___NSMenuItem, "alloc");
    IVar2 = NSMenuItem::initWithTitle_action_keyEquivalent_(IVar2, "initWithTitle:action:keyEquivalent:", uVar4,
                                                            "terminate:", &cf_q);
    auto self_01 = NSMenuItem::new ((ID)&_OBJC_CLASS___NSMenuItem, "new");
    NSMenu::addItem_(self_00, "addItem:", IVar2);
    NSMenu::addItem_(self, "addItem:", self_01);
    NSMenuItem::setSubmenu_(self_01, "setSubmenu:", self_00);
    auto IVar6 = NSMenu::alloc((ID)&_OBJC_CLASS___NSMenu, "alloc");
    IVar6 = NSMenu::initWithTitle_(IVar6, "initWithTitle:", &cf_Window);
    auto IVar7 = NSMenu::addItemWithTitle_action_keyEquivalent_(
        IVar6, "addItemWithTitle:action:keyEquivalent:", &cf_Close, "terminate:", &cf_w);
    uint64_t uVar8 = _objc_retainAutoreleasedReturnValue(IVar7);
    (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar8);
    IVar7 = NSMenu::addItemWithTitle_action_keyEquivalent_(
        IVar6, "addItemWithTitle:action:keyEquivalent:", &cf_Minimize, "performMiniaturize:", &cf_m);
    uVar8 = _objc_retainAutoreleasedReturnValue(IVar7);
    (*(void (*)(...))PTR__objc_release_100ee9e60)(uVar8);
    IVar7 = NSMenuItem::new ((ID)&_OBJC_CLASS___NSMenuItem, "new");
    NSMenu::addItem_(self, "addItem:", IVar7);
    NSMenuItem::setSubmenu_(IVar7, "setSubmenu:", IVar6);
    (*(void (*)(...))PTR__objc_msgSend_100ee9e50)(*(uint64_t*)PTR__NSApp_100ee4008, "setWindowsMenu:", IVar6);
    puVar1 = PTR__objc_release_100ee9e60;
    (*(void (*)(...))PTR__objc_release_100ee9e60)(IVar7);
    (*(void (*)(...))puVar1)(IVar6);
    (*(void (*)(...))puVar1)(self_01);
    (*(void (*)(...))puVar1)(IVar2);
    (*(void (*)(...))puVar1)(uVar4);
    (*(void (*)(...))puVar1)(pcVar9);
    (*(void (*)(...))puVar1)(lVar3);
    (*(void (*)(...))puVar1)(self_00);
    (*(void (*)(...))puVar1)(self);
}

namespace jag::oldscape {
    // 0x100189310: OSRenderCore_AudioThread::Instance() has the same machine code as OSRenderCore_LogicThread::Instance()

} // namespace jag::oldscape
