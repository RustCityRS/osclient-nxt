// projects/osclient/debug/PerformanceCapture.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "PerformanceCapture.h"

namespace jag::oldscape::debug {
    // 0x100f8a648, 8 bytes, __common; zero-initialised
    PerformanceCapture::m_instance;

    // 0x100060da0, 224 bytes, base-object constructor, placed by class name and debug map
    // PerformanceCapture::PerformanceCapture(unsigned long long, unsigned long long)
    void PerformanceCapture::PerformanceCapture(ulonglong param_1, ulonglong param_2) {
        char* pcVar2;

        new (this) PerformanceData();
        field_120 = param_1;
        field_128 = 0;
        field_136 = param_2;
        field_144 = 0;
        field_152 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)(PerformanceCapture*)this);
        field_160 = 1;
        field_161 = '\0';
        field_162 = 0;
        pcVar2 = (char*)((PerformanceCapture*)this)->GetUserFolder();
        Filename::operator/((Filename*)field_168, pcVar2);
        Filename::operator/((Filename*)field_472, field_168);
        std::make_unique<File, Filename&, int const&>((Filename*)field_776, (int*)field_472);
    }

    // 0x100060f00, 16 bytes, complete-object constructor, placed by class name
    // PerformanceCapture::PerformanceCapture(unsigned long long, unsigned long long): jumps straight to the base-object constructor

    // 0x100060f10, 80 bytes, placed by class name
    // PerformanceCapture::Instance()
    void PerformanceCapture::Instance() {
        bool bVar1;
        _func_decltype_nullptr* in_RSI;
        unique_ptr* puVar2;
        unique_ptr<PerformanceCapture, std::default_delete<PerformanceCapture>> local_20[12];
        undefined4 local_14;

        bVar1 = std::operator==((unique_ptr*)this, in_RSI);
        if (bVar1) {
            local_14 = 0;
            puVar2 = (unique_ptr*)&local_14;
            std::make_unique<PerformanceCapture, int, int const&>((int*)local_20, (int*)puVar2);
            std::unique_ptr<PerformanceCapture, std::default_delete<PerformanceCapture>>::operator=(local_20, puVar2);
            std::unique_ptr<PerformanceCapture, std::default_delete<PerformanceCapture>>::~unique_ptr(local_20);
        }
        std::unique_ptr<PerformanceCapture, std::default_delete<PerformanceCapture>>::get();
    }

    // 0x100061010, 688 bytes, placed by class name
    // PerformanceCapture::PerfCaptureSetup(unsigned long long, unsigned long long)
    void PerformanceCapture::PerfCaptureSetup(ulonglong param_1, ulonglong param_2) {
        undefined1* puVar1;
        char cVar2;
        File* pFVar3;
        undefined8 uVar4;
        ClientCompositeZone* this_00;
        Client* this_01;
        undefined8 uVar6;
        char* pcVar7;
        eastl::string local_c0[32];
        eastl::string local_a0[32];
        PerformanceCapture* local_80;
        ulonglong uStack_78;
        ulonglong local_70;
        Callstack local_68[3];
        ulonglong local_38;

        local_38 = *(ulonglong*)PTR____stack_chk_guard_100ee9d98;
        field_120 = param_1;
        field_136 = param_2;
        field_160 = 1;
        if (field_161 == '\0') {
            field_161 = '\x01';
        LAB_100061092:
            puVar1 = field_168;
            cVar2 = puVar1->Exists();
            if (cVar2 == '\0') {
                callstack::Callstack::Callstack(local_68);
                puVar1->CreateDirectories(local_68);
                cVar2 = local_68->IsValid();
                if (cVar2 != '\0') {
                    uVar4 = logger::default_logger();
                    puVar1->GetName();
                    pcVar7 = "Error creating performance data directory at %s";
                    uVar6 = 85;
                    goto LAB_100061249;
                }
            }
            GenerateLocalTime((PerformanceCapture*)local_c0);
            cVar2 = field_472->Exists();
            if (cVar2 == '\0') {
                pFVar3 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                    (unique_ptr<File, std::default_delete<File>>*)field_776);
                pFVar3->create(0);
            }
            puVar1 = field_776;
            this_00 = (ClientCompositeZone*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                (unique_ptr<File, std::default_delete<File>>*)puVar1);
            cVar2 = this_00->IsValid();
            if (cVar2 == '\0') {
                pFVar3 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                    (unique_ptr<File, std::default_delete<File>>*)puVar1);
                pFVar3->open(2, 0);
            }
            eastl::string::basic_string(local_a0);
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::string::sprintf(
                (char*)local_a0,
                "\nOSClient Perf Log Starting at %s\nElapsed time, FPS, frametime(ms), triangle count,NPC number\n",
                uVar4);
            pFVar3 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                (unique_ptr<File, std::default_delete<File>>*)puVar1);
            pFVar3->write(local_a0, 0);
            field_162 = 1;
            field_152 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)pFVar3);
            local_80 = this;
            uStack_78 = param_1;
            local_70 = param_2;
            std::function<bool()>::function<
                PerformanceCapture::PerfCaptureSetup(unsigned long long, unsigned long long)::__2, void>(local_68);
            this_01 = (Client*)Client::Instance();
            this_01->AddScheduledFunction(local_68, 0, 6);
            std::function<bool()>::~function((function<bool()>*)local_68);
            eastl::string::~basic_string(local_a0);
            eastl::string::~basic_string(local_c0);
        } else {
            cVar2 = field_168->Exists();
            if (cVar2 != '\0') {
                pFVar3 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator*(
                    (unique_ptr<File, std::default_delete<File>>*)field_776);
                StorePerformanceData(this, pFVar3);
                ResetAllPerformanceData(this);
                goto LAB_100061092;
            }
            uVar4 = logger::default_logger();
            pcVar7 = "perfDataDir not exist!";
            uVar6 = 64;
        LAB_100061249:
            logger::Logger::Log(uVar4, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "debug/PerformanceCapture.cpp",
                                uVar6, pcVar7);
        }
        if (*(ulonglong*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1000612c0, 352 bytes, placed by class name
    // PerformanceCapture::StorePerformanceData(File&)
    void PerformanceCapture::StorePerformanceData(File* param_1) {
        uint uVar1;
        bool bVar2;
        long lVar3;
        float* pfVar4;
        undefined8* puVar5;
        uint* puVar6;
        char* pcVar7;
        ulong uVar8;
        undefined1* this_00;
        ulong uVar9;
        eastl::string local_90[32];
        undefined8 local_70;
        double local_68;
        undefined8 local_60;
        vector<unsigned long long, std::allocator<unsigned long long>>* local_50;
        vector<unsigned int, std::allocator<unsigned int>>* local_48;
        vector<int, std::allocator<int>>* local_40;
        PerformanceCapture* local_38;

        eastl::string::basic_string(local_90);
        this_00 = &field_24;
        local_38 = this;
        lVar3 = this_00->size();
        if (lVar3 != 0) {
            local_50 = (vector<unsigned long long, std::allocator<unsigned long long>>*)&local_38->field_48;
            local_48 = (vector<unsigned int, std::allocator<unsigned int>>*)&local_38->field_72;
            local_40 = (vector<int, std::allocator<int>>*)&local_38->field_96;
            uVar8 = 0;
            uVar9 = 1;
            do {
                eastl::string::clear();
                std::vector<eastl::string, std::allocator<eastl::string>>::operator[](
                    (vector<eastl::string, std::allocator<eastl::string>>*)local_38, uVar8);
                local_70 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                pfVar4 = (float*)std::vector<float, std::allocator<float>>::operator[](
                    (vector<float, std::allocator<float>>*)this_00, uVar8);
                local_68 = (double)*pfVar4;
                puVar5 = (undefined8*)std::vector<unsigned long long, std::allocator<unsigned long long>>::operator[](
                    local_50, uVar8);
                local_60 = *puVar5;
                puVar6 = (uint*)std::vector<unsigned int, std::allocator<unsigned int>>::operator[](local_48, uVar8);
                uVar1 = *puVar6;
                puVar6 = (uint*)std::vector<int, std::allocator<int>>::operator[](local_40, uVar8);
                eastl::string::sprintf((char*)local_90, local_68, "%s, %f, %llu, %lu, %d\n", local_70, local_60,
                                       (ulong)uVar1, (ulong)*puVar6);
                pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                param_1->write(pcVar7, 0);
                uVar8 = this_00->size();
                bVar2 = uVar9 < uVar8;
                uVar8 = uVar9;
                uVar9 = (ulong)((int)uVar9 + 1);
            } while (bVar2);
        }
        eastl::string::~basic_string(local_90);
    }

    // 0x100061430, 64 bytes, placed by class name
    // PerformanceCapture::ResetAllPerformanceData()
    void PerformanceCapture::ResetAllPerformanceData() {
        (&field_24)->clear();
        (&field_48)->clear();
        (&field_96)->clear();
        clear();
        (&field_72)->clear();
    }

    // 0x100061470, 160 bytes, placed by class name
    // PerformanceCapture::GenerateLocalTime()
    PerformanceCapture* PerformanceCapture::GenerateLocalTime() {
        tm* ptVar1;
        allocator local_40[8];
        time_t local_38;
        undefined8 local_30;
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_30 = std::chrono::system_clock::now();
        local_38 = std::chrono::system_clock::to_time_t((time_point*)&local_30);
        ptVar1 = _localtime(&local_38);
        _strftime((char*)&local_30, 8, "[%R]", ptVar1);
        eastl::allocator::allocator(local_40, "EASTL basic_string");
        new (this) eastl::string((char*)&local_30, local_40);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x100061550, 32 bytes, placed by class name
    // PerformanceCapture::PerfCaptureStop()
    void PerformanceCapture::PerfCaptureStop() {
        OnPerfCaptureStop(this);
        field_162 = 0;
    }

    // 0x100061570, 160 bytes, placed by class name
    // PerformanceCapture::OnPerfCaptureStop()
    void PerformanceCapture::OnPerfCaptureStop() {
        File* pFVar2;
        Client* this_00;
        undefined8 uVar3;

        if (field_168->Exists() == '\0') {
            uVar3 = logger::default_logger();
            logger::Logger::Log(uVar3, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "debug/PerformanceCapture.cpp",
                                167, "perfDataDir not exist!");
        } else {
            pFVar2 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator*(
                (unique_ptr<File, std::default_delete<File>>*)field_776);
            StorePerformanceData(this, pFVar2);
            this_00 = (Client*)Client::Instance();
            uVar3 = this_00->GetConsole();
            console::Console::AddMessage(uVar3, 1, "PerformanceData Capture now stopped!");
            ResetAllPerformanceData(this);
            field_160 = 1;
        }
    }

    // 0x100061610, 384 bytes, placed by class name
    // PerformanceCapture::PerfCaptureClear()
    void PerformanceCapture::PerfCaptureClear() {
        undefined1* this_00;
        char cVar1;
        ClientCompositeZone* this_01;
        File* this_02;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        Client* this_03;
        _func_decltype_nullptr* in_RSI;
        unique_ptr* puVar6;
        Error local_48[8];
        undefined1 local_28[8];

        this_00 = field_168;
        puVar6 = (unique_ptr*)this_00;
        cVar1 = this_00->Exists();
        if (cVar1 == '\0') {
            uVar3 = logger::default_logger();
            logger::Logger::Log(uVar3, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "debug/PerformanceCapture.cpp",
                                189, "perfDataDir not exist!");
        } else {
            if (std::operator!=(puVar6, in_RSI)) {
                ResetAllPerformanceData(this);
                field_161 = '\0';
            }
            this_01 = (ClientCompositeZone*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                (unique_ptr<File, std::default_delete<File>>*)field_776);
            cVar1 = this_01->IsValid();
            if (cVar1 != '\0') {
                this_02 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                    (unique_ptr<File, std::default_delete<File>>*)field_776);
                this_02->close(0);
            }
            new (local_28) callstack::Callstack();
            (field_472, (Error*)local_28)->RemoveFile();
            cVar1 = local_28->IsValid();
            if (cVar1 == '\0') {
                this_03 = (Client*)Client::Instance();
                uVar3 = this_03->GetConsole();
                console::Console::AddMessage(uVar3, 1, "Delete the performance data file successfully!");
                FileSystem::DeleteDirectory((Filename*)this_00);
            } else {
                uVar3 = logger::default_logger();
                uVar4 = field_472->GetName();
                local_48->GetErrorString();
                uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(uVar3, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/debug/PerformanceCapture.cpp",
                                    210, "Error deleting performance data file %s: %s", uVar4, uVar5);
                local_48->~basic_string();
            }
        }
    }

    // 0x1000617a0, 160 bytes, placed by class name
    // PerformanceCapture::PerfCaptureHelp()
    void PerformanceCapture::PerfCaptureHelp() {
        Client* pCVar1;
        undefined8 uVar2;

        pCVar1 = (Client*)Client::Instance();
        uVar2 = pCVar1->GetConsole();
        console::Console::AddMessage(
            uVar2, 1,
            "perfcapture start [duration] [interval] : Start capturing performance data. If a duration is passed, will "
            "log for that many milliseconds and then stop. If an interval is passed, will use that value as the log "
            "interval, otherwise, use a default (500ms).");
        pCVar1 = (Client*)Client::Instance();
        uVar2 = pCVar1->GetConsole();
        console::Console::AddMessage(uVar2, 1, "perfcapture stop : Stop logging and flushes data to disk.");
        pCVar1 = (Client*)Client::Instance();
        uVar2 = pCVar1->GetConsole();
        console::Console::AddMessage(uVar2, 1, "perfcapture clear : Delete the logfile and its folder");
        pCVar1 = (Client*)Client::Instance();
        uVar2 = pCVar1->GetConsole();
        console::Console::AddMessage(
            uVar2, 1, "perfcapture help : Print a message to the console explaining the usage of the command.");
    }

    // 0x100061840, 640 bytes, placed by class name
    // PerformanceCapture::DoCommand(eastl::fixed_vector<StringView, 4ul, true, eastl::allocator> const&, eastl::string&)
    void PerformanceCapture::DoCommand(fixed_vector* param_1, basic_string* param_2) {
        char cVar1;
        long lVar2;
        PerformanceCapture* pPVar3;
        StringView* pSVar4;
        ulong uVar5;
        undefined8 uVar6;
        uchar* extraout_RDX;
        uchar* extraout_RDX_00;
        uchar* extraout_RDX_01;
        uchar* extraout_RDX_02;
        char* pcVar7;
        StringView SVar8;
        StringView SVar9;
        StringView SVar10;
        StringView SVar11;
        StringView local_98;
        StringView local_88;
        StringView local_78;
        StringView local_68;
        StringView local_58[2];
        int local_38;
        uint local_34;

        pPVar3 = (PerformanceCapture*)param_1;
        lVar2 = param_1->size();
        if (lVar2 != 0) {
            pPVar3 = (PerformanceCapture*)
                eastl::vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
            StringView::StringView<5ul>(&local_98, "help");
            SVar8.field_8 = extraout_RDX;
            SVar8.field_0 = (ulong)&local_98;
            cVar1 = StringView::operator==((StringView*)pPVar3, SVar8);
            if (cVar1 == '\0') {
                pSVar4 = (StringView*)eastl::vector<
                    StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
                StringView::StringView<6ul>(&local_88, "start");
                SVar9.field_8 = extraout_RDX_00;
                SVar9.field_0 = (ulong)&local_88;
                cVar1 = StringView::operator==(pSVar4, SVar9);
                if (cVar1 != '\0') {
                    local_38 = 0;
                    local_34 = 500;
                    uVar5 = param_1->size();
                    if (1 < uVar5) {
                        eastl::vector<StringView,
                                      eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<StringView,
                                           eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                                       param_1,
                                   1);
                        StringView::to_owned_string<eastl::string>(local_58);
                        core::stringtools::general::StringTools::CheckedParseInt(&local_38, (basic_string*)local_58);
                        local_58->~basic_string();
                    }
                    uVar5 = param_1->size();
                    if (2 < uVar5) {
                        eastl::vector<StringView,
                                      eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<StringView,
                                           eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                                       param_1,
                                   2);
                        StringView::to_owned_string<eastl::string>(local_58);
                        core::stringtools::general::StringTools::CheckedParseInt((int*)&local_34,
                                                                                 (basic_string*)local_58);
                        local_58->~basic_string();
                    }
                    if (local_38 < 0) {
                        return;
                    }
                    if ((int)local_34 < 1) {
                        return;
                    }
                    if (local_38 == 0) {
                        eastl::string::append_sprintf(
                            (char*)param_2,
                            "Successful perfcapture start command, duration will be forever and interval will be %ims!",
                            (ulong)local_34);
                    } else {
                        eastl::string::append_sprintf(
                            (char*)param_2,
                            "Successful perfcapture start command, duration will be %ims and interval will be %ims!");
                    }
                    PerfCaptureSetup(this, (long)local_38, (long)(int)local_34);
                    return;
                }
                pSVar4 = (StringView*)eastl::vector<
                    StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                        param_1,
                    0);
                StringView::StringView<5ul>(&local_78, "stop");
                SVar10.field_8 = extraout_RDX_01;
                SVar10.field_0 = (ulong)&local_78;
                cVar1 = StringView::operator==(pSVar4, SVar10);
                if (cVar1 == '\0') {
                    pSVar4 = (StringView*)eastl::vector<
                        StringView, eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<StringView,
                                eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)param_1,
                        0);
                    StringView::StringView<6ul>(&local_68, "clear");
                    SVar11.field_8 = extraout_RDX_02;
                    SVar11.field_0 = (ulong)&local_68;
                    cVar1 = StringView::operator==(pSVar4, SVar11);
                    if (cVar1 == '\0') {
                        eastl::vector<StringView,
                                      eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<StringView,
                                           eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                                       param_1,
                                   0);
                        StringView::to_owned_string<eastl::string>(local_58);
                        uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        eastl::string::append_sprintf((char*)param_2, "Don\'t recognize command %s", uVar6);
                        pPVar3 = (PerformanceCapture*)local_58;
                        pPVar3->~basic_string();
                        PerfCaptureHelp(pPVar3);
                        return;
                    }
                    PerfCaptureClear(this);
                    pcVar7 = "Successful perfcapture clear command!";
                } else {
                    PerfCaptureStop(this);
                    pcVar7 = "Successful perfcapture stop command!";
                }
                goto LAB_1000618a5;
            }
        }
        PerfCaptureHelp(pPVar3);
        pcVar7 = "Successful perfcapture help command!";
    LAB_1000618a5:
        eastl::string::append_sprintf((char*)param_2, pcVar7);
    }

    // 0x100061ac0, 288 bytes, placed by class name
    // PerformanceCapture::PerfCaptureStart()
    void PerformanceCapture::PerfCaptureStart() {
        GraphicsApp* pGVar1;
        EnvLightProbeSettings* pEVar2;
        ulong uVar3;
        RenderContext* this_00;
        MSIType* this_01;
        Client* this_02;
        GraphicsApp* this_03;
        undefined4 uVar4;
        float fVar5;
        undefined** local_40[4];
        uint local_1c;

        GetElapsedTimeSinceCaptureStart((PerformanceCapture*)local_40);
        std::vector<eastl::string, std::allocator<eastl::string>>::emplace_back<eastl::string>(
            (vector<eastl::string, std::allocator<eastl::string>>*)this, (basic_string*)local_40);
        pGVar1 = (GraphicsApp*)local_40;
        pGVar1->~basic_string();
        this_03 = (GraphicsApp*)&field_24;
        pGVar1 = (GraphicsApp*)pGVar1->Instance();
        pEVar2 = (EnvLightProbeSettings*)pGVar1->GetFPSCounter();
        uVar4 = pEVar2->GetOverbright();
        local_40[0] = (undefined**)CONCAT44(local_40[0]._4_4_, uVar4);
        std::vector<float, std::allocator<float>>::emplace_back<float>((vector<float, std::allocator<float>>*)this_03,
                                                                       (float*)local_40);
        pGVar1 = (GraphicsApp*)this_03->Instance();
        pEVar2 = (EnvLightProbeSettings*)pGVar1->GetFPSCounter();
        fVar5 = (float)pEVar2->GetOverbright();
        uVar3 = (ulong)(1000.0 / fVar5);
        local_40[0] = (undefined**)((long)(1000.0 / fVar5 - 9.223372e+18) & (long)uVar3 >> 63 | uVar3);
        pGVar1 = (GraphicsApp*)&field_48;
        std::vector<unsigned long long, std::allocator<unsigned long long>>::emplace_back<unsigned long long&>(
            (vector<unsigned long long, std::allocator<unsigned long long>>*)pGVar1, (ulonglong*)local_40);
        pGVar1 = (GraphicsApp*)pGVar1->Instance();
        this_00 = (RenderContext*)pGVar1->GetDefaultRenderContext();
        this_01 = (MSIType*)this_00->GetStats();
        local_1c = this_01->GetTint();
        std::vector<unsigned int, std::allocator<unsigned int>>::emplace_back<unsigned int>(
            (vector<unsigned int, std::allocator<unsigned int>>*)&field_72, &local_1c);
        this_02 = (Client*)Client::Instance();
        local_1c = this_02->GetNPCCount();
        std::vector<int, std::allocator<int>>::emplace_back<int>((vector<int, std::allocator<int>>*)&field_96,
                                                                 (int*)&local_1c);
    }

    // 0x100061c30, 272 bytes, placed by class name
    // PerformanceCapture::GetElapsedTimeSinceCaptureStart()
    PerformanceCapture* PerformanceCapture::GetElapsedTimeSinceCaptureStart() {
        ulong uVar2;
        long in_RSI;
        ulong uVar3;
        ulong uVar4;

        uVar2 = SystemTimer::GetTimeMS<std::chrono::steady_clock>((SystemTimer*)this) - *(long*)(in_RSI + 152);
        uVar3 = uVar2 % 3600000;
        uVar4 = uVar3 % 60000;
        new (this) eastl::string();
        eastl::string::append_sprintf((char*)this, "[%ih", uVar2 / 3600000 & 4294967295);
        eastl::string::append_sprintf((char*)this, ":%im", uVar3 / 60000);
        eastl::string::append_sprintf((char*)this, ":%is", uVar4 / 1000);
        eastl::string::append_sprintf((char*)this, ":%ims]", uVar4 % 1000);
        return this;
    }

    // 0x10007f8c0, 160 bytes, placed by class name
    // PerformanceCapture::PerfCaptureSetup(unsigned long long, unsigned long long)::$_2::operator()() const
    /* PerformanceCapture::PerfCaptureSetup(unsigned long long, unsigned long
   long)::$_2::TEMPNAMEPLACEHOLDERVALUE() const */

    undefined8 PerformanceCapture::PerfCaptureSetup(unsigned long long, unsigned long long)::$_2::operator()() {
        char cVar1;
        PerformanceCapture* this_00;
        ulong uVar2;
        long lVar3;
        undefined8 uVar4;

        this_00 = *(PerformanceCapture**)this;
        cVar1 = this_00->field_160;
        lVar3 = FrameTime::GetCurrentTimeMS();
        if (cVar1 == '\0') {
            this_00->field_144 = lVar3;
            uVar2 = *(ulong*)(this + 16);
            if ((uVar2 < (ulong)(lVar3 - this_00->field_128)) && (this_00->field_162 != '\0')) {
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
