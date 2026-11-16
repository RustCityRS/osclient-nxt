// projects/osclient/debug/PerformanceCapture.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "PerformanceCapture.h"

namespace jag::oldscape::debug {
    // 0x100f8a648
    int64_t PerformanceCapture::m_instance;

    // 0x100060da0
    PerformanceCapture::PerformanceCapture(unsigned long long arg1, unsigned long long arg2)
        : PerformanceData(), field_120(arg1), field_128(0), field_136(arg2), field_144(0) {
        field_152 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
        field_160 = 1;
        field_161 = '\0';
        field_162 = 0;
        auto this_00 = SystemPaths::GetUserFolder();
        field_168 = *this_00 / "PerformanceData";
        field_472 = field_168 / "PerformanceData.txt";
        field_776 = std::make_unique<File, Filename&, int const&>(field_472, *(&File::DEFAULT_CREATE_MODE));
    }

    // 0x100060f10
    void PerformanceCapture::Instance() {
        void* in_RSI;
        unique_ptr<PerformanceCapture, std::default_delete<PerformanceCapture> _>* performanceCapture;
        uint8_t local_20[12];
        uint32_t local_14;

        if (this == in_RSI) {
            local_14 = 0;
            this = (PerformanceCapture*)local_20;
            performanceCapture = (unique_ptr<PerformanceCapture, std::default_delete<PerformanceCapture> _>*)&local_14;
            std::make_unique<PerformanceCapture, int, int const&>(*this, *performanceCapture);
            *this = *performanceCapture;
            ~unique_ptr();
        }
        get();
    }

    // 0x100061010
    void PerformanceCapture::PerfCaptureSetup(unsigned long long arg1, unsigned long long arg2) {
        uint8_t* puVar1;
        File* pFVar3;
        Logger* this_00;
        uint64_t uVar4;
        int arg4;
        char* str2;
        ReturnValue local_c0;
        eastl::string local_a0;
        PerformanceCapture* local_80;
        unsigned long long uStack_78;
        unsigned long long local_70;
        Callstack local_68;

        field_120 = arg1;
        field_136 = arg2;
        field_160 = 1;
        if (field_161 == '\0') {
            field_161 = '\x01';
        LAB_100061092:
            puVar1 = &field_168;
            if (!(puVar1->Exists())) {
                local_68 = callstack::Callstack();
                puVar1->CreateDirectories(&local_68);
                if (local_68.IsValid()) {
                    this_00 = logger::default_logger();
                    puVar1->GetName();
                    str2 = "Error creating performance data directory at %s";
                    arg4 = 85;
                    goto LAB_100061249;
                }
            }
            GenerateLocalTime(&local_c0);
            if (!(field_472.Exists())) {
                pFVar3 = (File*)field_776.operator->();
                pFVar3->create(nullptr);
            }
            puVar1 = &field_776;
            if (!(((ClientCompositeZone*)(*puVar1).operator->())->IsValid())) {
                pFVar3 = (File*)(*puVar1).operator->();
                pFVar3->open(2, nullptr);
            }
            local_a0 = eastl::string();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_a0.sprintf(
                "\nOSClient Perf Log Starting at %s\nElapsed time, FPS, frametime(ms), triangle count,NPC number\n",
                uVar4);
            pFVar3 = (File*)(*puVar1).operator->();
            pFVar3->write(&local_a0, nullptr);
            field_162 = 1;
            field_152 = SystemTimer::GetTimeMS<std::chrono::steady_clock>();
            local_80 = this;
            uStack_78 = arg1;
            local_70 = arg2;
            std::function<bool()>::function<
                PerformanceCapture::PerfCaptureSetup(unsigned long long, unsigned long long)::__2, void>(
                (function<bool()>*)&local_68, (__2*)&local_a0);
            Client::Instance()->AddScheduledFunction(local_68, 0, 6);
        } else {
            if (field_168.Exists()) {
                pFVar3 = (File*)*field_776;
                StorePerformanceData(*pFVar3);
                ResetAllPerformanceData();
                goto LAB_100061092;
            }
            this_00 = logger::default_logger();
            str2 = "perfDataDir not exist!";
            arg4 = 64;
        LAB_100061249:
            this_00->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/"
                         "PerformanceCapture.cpp",
                         arg4, str2);
        }
    }

    // 0x1000612c0
    void PerformanceCapture::StorePerformanceData(File& file) {
        unsigned int uVar1;
        bool bVar2;
        float* pfVar4;
        uint64_t* puVar5;
        unsigned int* puVar6;
        unsigned long uVar7;
        unsigned long uVar8;
        uint64_t local_70;
        double local_68;
        uint64_t local_60;
        vector<unsigned long long>* local_50;
        vector<unsigned int>* local_48;
        vector<int>* local_40;

        eastl::string local_90;
        uint8_t* this_00 = &field_24;
        PerformanceCapture* local_38 = this;
        if (this_00->size() != 0) {
            local_50 = (vector<unsigned long long>*)&local_38->field_48;
            local_48 = (vector<unsigned int>*)&local_38->field_72;
            local_40 = (vector<int>*)&local_38->field_96;
            uVar7 = 0;
            uVar8 = 1;
            do {
                local_90.clear();
                (*local_38)[uVar7];
                local_70 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pfVar4 = (float*)(*this_00)[uVar7];
                local_68 = (double)*pfVar4;
                puVar5 = (uint64_t*)(*local_50)[uVar7];
                local_60 = *puVar5;
                puVar6 = (unsigned int*)(*local_48)[uVar7];
                uVar1 = *puVar6;
                puVar6 = (unsigned int*)(*local_40)[uVar7];
                local_90.sprintf("%s, %f, %llu, %lu, %d\n", local_68, local_70, local_60, (unsigned long)uVar1,
                                 (unsigned long)*puVar6);
                file.write((char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin(), nullptr);
                uVar7 = this_00->size();
                bVar2 = uVar8 < uVar7;
                uVar7 = uVar8;
                uVar8 = (unsigned long)((int)uVar8 + 1);
            } while (bVar2);
        }
    }

    // 0x100061430
    void PerformanceCapture::ResetAllPerformanceData() {
        std::vector<float>::clear();
        std::vector<unsigned long long>::clear();
        std::vector<int>::clear();
        std::vector<eastl::string>::clear();
        std::vector<unsigned int>::clear();
    }

    // 0x100061470
    auto PerformanceCapture::GenerateLocalTime() {
        uint64_t local_30 = std::chrono::system_clock::now();
        time_t local_38 = std::chrono::system_clock::to_time_t((time_point*)&local_30);
        auto ptVar1 = _localtime(&local_38);
        _strftime((char*)&local_30, 8, "[%R]", ptVar1);
        return auto(&local_30);
    }

    // 0x100061550
    void PerformanceCapture::PerfCaptureStop() {
        OnPerfCaptureStop();
        field_162 = 0;
    }

    // 0x100061570
    void PerformanceCapture::OnPerfCaptureStop() {
        File* file;
        Client* this_00;

        if (field_168.Exists() == '\0') {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/"
                      "PerformanceCapture.cpp",
                      167, "perfDataDir not exist!");
        } else {
            file = (File*)*field_776;
            StorePerformanceData(*file);
            this_00 = Client::Instance();
            ((Console*)this_00->GetConsole())->AddMessage(1, "PerformanceData Capture now stopped!");
            ResetAllPerformanceData();
            field_160 = 1;
        }
    }

    // 0x100061610
    void PerformanceCapture::PerfCaptureClear() {
        Logger* pLVar3;
        char* pcVar4;
        uint64_t uVar5;
        Client* this_03;
        void* in_RSI;
        unique_ptr<PerformanceCapture, std::default_delete<PerformanceCapture> _>* performanceCapture;
        ReturnValue local_48;
        Error local_28;

        uint8_t* this_00 = &field_168;
        performanceCapture = (unique_ptr<PerformanceCapture, std::default_delete<PerformanceCapture> _>*)this_00;
        if (!(this_00->Exists())) {
            pLVar3 = logger::default_logger();
            pLVar3->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/"
                        "PerformanceCapture.cpp",
                        189, "perfDataDir not exist!");
        } else {
            if (performanceCapture != in_RSI) {
                ResetAllPerformanceData();
                field_161 = '\0';
            }
            if (((ClientCompositeZone*)field_776.operator->())->IsValid()) {
                ((File*)field_776.operator->())->close(nullptr);
            }
            local_28 = callstack::Callstack();
            field_472.RemoveFile(&local_28);
            if (!(local_28.IsValid())) {
                this_03 = Client::Instance();
                ((Console*)this_03->GetConsole())->AddMessage(1, "Delete the performance data file successfully!");
                FileSystem::DeleteDirectory(*this_00);
            } else {
                pLVar3 = logger::default_logger();
                pcVar4 = field_472.GetName();
                local_48 = local_28.GetErrorString();
                uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pLVar3->Log(false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/debug/"
                            "PerformanceCapture.cpp",
                            210, "Error deleting performance data file %s: %s", pcVar4, uVar5);
            }
        }
    }

    // 0x1000617a0
    void PerformanceCapture::PerfCaptureHelp() {
        auto pCVar1 = Client::Instance();
        auto pCVar2 = pCVar1->GetConsole();
        pCVar2->AddMessage(1, "perfcapture start [duration] [interval] : Start capturing performance data. If a "
                              "duration is passed, will log for that many milliseconds and then stop. If an interval "
                              "is passed, will use that value as the log interval, otherwise, use a default (500ms).");
        pCVar1 = Client::Instance();
        pCVar2 = (Console*)pCVar1->GetConsole();
        pCVar2->AddMessage(1, "perfcapture stop : Stop logging and flushes data to disk.");
        pCVar1 = Client::Instance();
        pCVar2 = (Console*)pCVar1->GetConsole();
        pCVar2->AddMessage(1, "perfcapture clear : Delete the logfile and its folder");
        pCVar1 = Client::Instance();
        pCVar2 = (Console*)pCVar1->GetConsole();
        pCVar2->AddMessage(1, "perfcapture help : Print a message to the console explaining the usage of the command.");
    }

    // 0x100061840
    void PerformanceCapture::DoCommand(const eastl::fixed_vector<StringView, 4ul>& stringViews, eastl::string& str) {
        StringView* pSVar3;
        unsigned long uVar4;
        uint64_t uVar5;
        char* str_00;
        StringView local_98;
        StringView local_88;
        StringView local_78;
        StringView local_68;
        ReturnValue local_58;

        if (stringViews.size() != 0) {
            pSVar3 = &stringViews[0];
            local_98.StringView<5ul>(&DAT_100e614a8);
            if (!(*pSVar3 == &local_98)) {
                pSVar3 = &stringViews[0];
                local_88.StringView<6ul>("start");
                if (*pSVar3 == &local_88) {
                    uVar4 = stringViews.size();
                    if (1 < uVar4) {
                        pSVar3 = &stringViews[1];
                        local_58 = pSVar3->to_owned_string<eastl::string>();
                        core::stringtools::general::StringTools::CheckedParseInt(0, local_58);
                    }
                    uVar4 = stringViews.size();
                    if (2 < uVar4) {
                        pSVar3 = &stringViews[2];
                        local_58 = pSVar3->to_owned_string<eastl::string>();
                        core::stringtools::general::StringTools::CheckedParseInt(500, local_58);
                    }
                    if (0 < 0) {
                        return;
                    }
                    if ((int)500 < 1) {
                        return;
                    }
                    if (0 == 0) {
                        str.append_sprintf(
                            "Successful perfcapture start command, duration will be forever and interval will be %ims!",
                            (unsigned long)500);
                    } else {
                        str.append_sprintf(
                            "Successful perfcapture start command, duration will be %ims and interval will be %ims!");
                    }
                    PerfCaptureSetup((long)0, (long)(int)500);
                    return;
                }
                pSVar3 = &stringViews[0];
                local_78.StringView<5ul>("stop");
                if (!(*pSVar3 == &local_78)) {
                    pSVar3 = &stringViews[0];
                    local_68.StringView<6ul>("clear");
                    if (!(*pSVar3 == &local_68)) {
                        pSVar3 = &stringViews[0];
                        local_58 = pSVar3->to_owned_string<eastl::string>();
                        uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        str.append_sprintf("Don\'t recognize command %s", uVar5);
                        PerfCaptureHelp();
                        return;
                    }
                    PerfCaptureClear();
                    str_00 = "Successful perfcapture clear command!";
                } else {
                    PerfCaptureStop();
                    str_00 = "Successful perfcapture stop command!";
                }
                goto LAB_1000618a5;
            }
        }
        PerfCaptureHelp();
        str_00 = "Successful perfcapture help command!";
    LAB_1000618a5:
        str.append_sprintf(str_00);
    }

    // 0x100061ac0
    void PerformanceCapture::PerfCaptureStart() {
        ReturnValue local_40;

        GetElapsedTimeSinceCaptureStart(&local_40, this);
        emplace_back<eastl::string>(local_40);
        auto pGVar1 = GraphicsApp::Instance();
        auto pEVar2 = pGVar1->GetFPSCounter();
        local_40[0]._0_4_ = pEVar2->GetOverbright();
        field_24.emplace_back<float>(local_40);
        pGVar1 = (GraphicsApp*)GraphicsApp::Instance();
        pEVar2 = (EnvLightProbeSettings*)pGVar1->GetFPSCounter();
        float fVar4 = (float)pEVar2->GetOverbright();
        unsigned long uVar3 = (unsigned long)(1000.0 / fVar4);
        local_40[0] = (ReturnValue)((long)(1000.0 / fVar4 - 9.223372e+18) & (long)uVar3 >> 63 | uVar3);
        field_48.emplace_back<unsigned long long&>(local_40);
        pGVar1 = (GraphicsApp*)GraphicsApp::Instance();
        auto this_00 = pGVar1->GetDefaultRenderContext();
        unsigned int local_1c = ((MSIType*)this_00->GetStats())->GetTint();
        field_72.emplace_back<unsigned int>(local_1c);
        local_1c = Client::Instance()->GetNPCCount();
        field_96.emplace_back<int>(local_1c);
    }

    // 0x100061c30
    auto PerformanceCapture::GetElapsedTimeSinceCaptureStart() {
        unsigned long uVar2 = SystemTimer::GetTimeMS<std::chrono::steady_clock>() - field_152;
        unsigned long uVar3 = uVar2 % 3600000;
        unsigned long uVar4 = uVar3 % 60000;
        auto result;
        result.append_sprintf("[%ih", uVar2 / 3600000 & 4294967295);
        result.append_sprintf(":%im", uVar3 / 60000);
        result.append_sprintf(":%is", uVar4 / 1000);
        result.append_sprintf(":%ims]", uVar4 % 1000);
        return result;
    }

    // 0x10007f8c0
    uint64_t PerformanceCapture::PerfCaptureSetup(unsigned long long, unsigned long long)::$_2::operator()() const {
        unsigned long uVar2;
        uint64_t uVar4;

        PerformanceCapture* this_00 = *(PerformanceCapture**)this;
        bool cVar1 = this_00->field_160;
        long lVar3 = FrameTime::GetCurrentTimeMS();
        if (!cVar1) {
            this_00->field_144 = lVar3;
            uVar2 = *(unsigned long*)(this + 16);
            if ((uVar2 < (unsigned long)(lVar3 - this_00->field_128)) && (this_00->field_162 != '\0')) {
                this_00->field_128 = lVar3;
                if (this_00->field_120 != 0) {
                    this_00->field_120 = this_00->field_120 - uVar2;
                }
                PerfCaptureStart(this_00);
            }
            uVar4 = 1;
            if ((this_00->field_120 == 0) && (*(long*)(this + 8) != 0)) {
                PerfCaptureStop(this_00);
                uVar4 = 0;
            }
        } else {
            this_00->field_128 = lVar3;
            this_00->field_160 = 0;
            uVar4 = 1;
        }
        return uVar4;
    }

} // namespace jag::oldscape::debug
