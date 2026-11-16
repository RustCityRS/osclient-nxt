// projects/osclient/options/DeviceOptions.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "DeviceOptions.h"

namespace jag::oldscape::option {
    // 0x1000208d0
    DeviceOptions::DeviceOptions() {
        DeviceOptions(false);
    }

    // 0x1000208e0
    DeviceOptions::DeviceOptions(bool arg1) : OptionStore(), field_392(1) {
        uint64_t in_register_00000031;
        equal_to<eastl::string_> local_5a8;
        allocator local_508;

        SideBarData local_3b8("WindowSavedPosition");
        uint32_t local_50c = (uint32_t)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1);
        new (&field_400) eastl::hash_set<eastl::string>(&local_3b8, 1, nullptr, local_5a8, local_508);
        new (&field_464) Option<bool>(*this, "HideUserName", false);
        new (&field_576) Option<ClientWindowMode>(*this, "WindowMode", 2);
        uint8_t* local_590 = &field_704;
        new (local_590) Option<ScaledUIQuality>(*this, "UIQuality", 2);
        uint8_t* local_5a0 = &field_832;
        new (local_5a0) Option<bool>(*this, "MuteTitleScreen", false);
        uint8_t* local_598 = &field_944;
        new (local_598) Option<bool>(*this, "DisplayFps", false);
        local_3b8 = sidebars::SideBarData(0, 2147483647);
        uint8_t* local_588 = &field_1056;
        new (local_588) RangeOption<int>(*this, "FpsLimit", local_3b8, 0);
        local_3b8 = sidebars::SideBarData(0, 100);
        uint8_t* local_580 = &field_1184;
        new (local_580) RangeOption<int>(*this, "Brightness", local_3b8, 55);
        char* str = SystemPaths::GetUserPicturesFolder()->GetName();
        fixed_string<char, 256> local_160(str);
        new (&field_1312) Option<eastl::fixed_string<char, 256>>(*this, "ScreenshotPath", &local_160);
    }

    // 0x100021e20
    uint64_t DeviceOptions::InitFromFile(File& file) {
        unsigned long arg2;
        unsigned long arg1;
        char* pcVar5;
        IOption* pIVar6;
        uint64_t uVar7;
        ReturnValue local_1e0;
        ReturnValue local_1b8;
        ReturnValue local_190;
        int local_164;
        ReturnValue local_160;

        auto pLVar2 = logger::default_logger();
        pLVar2->Log(false, 5,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/options/"
                    "DeviceOptions.cpp",
                    135, "%sInitialising from file", "PREFS: ");
        long lVar3 = file.length(nullptr);
        long lVar4 = file.tell();
        long local_198 = lVar3;
        if (lVar4 < lVar3) {
            local_164 = 0;
            do {
                local_1e0 = file.readline();
                arg2 = local_1e0.find_first_of(" \t", 0);
                if (arg2 != 18446744073709551615) {
                    arg1 = local_1e0.find_first_not_of(" \t", arg2 + 1);
                    if (arg1 != 18446744073709551615) {
                        local_1b8 = local_1e0.substr(0, arg2);
                        if (field_393 != '\0') {
                            if (!(IsStartupOption(local_1b8))) {
                                goto LAB_100021edf;
                            }
                        }
                        lVar3 = local_1e0.size();
                        local_190 = local_1e0.substr(arg1, lVar3 - arg1);
                        if (!(local_190.empty())) {
                            pcVar5 = &local_190[0];
                            if (*pcVar5 == '\'') {
                            LAB_100021fd1:
                                lVar3 = local_190.find_first_of("\'\"", 1);
                                if (lVar3 == -1) {
                                    lVar3 = local_190.size();
                                }
                                local_160 = local_190.substr(1, lVar3 - 1);
                                local_190 = &local_160;
                            } else {
                                pcVar5 = &local_190[0];
                                if (*pcVar5 == '\"')
                                    goto LAB_100021fd1;
                            }
                            if (!(local_190.empty())) {
                                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                local_160 = eastl::string(pcVar5);
                                pIVar6 = OptionStore::GetOptionByName(*this);
                                if (pIVar6 != nullptr) {
                                    pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                    local_160 = eastl::fixed_string<char, 256>(pcVar5);
                                    (*pIVar6->_vptr[1]._x7e___2)(pIVar6, &local_160);
                                }
                            }
                        }
                        if (local_190.empty()) {
                            pLVar2 = logger::default_logger();
                            uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            pLVar2->Log(false, 3,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                        "osclient/options/DeviceOptions.cpp",
                                        183, "%sNo value specified for \'%s\' (%d)", "PREFS: ", uVar7, local_164);
                        }
                    }
                    local_164 = local_164 + 1;
                }
            LAB_100021edf:
                lVar3 = file.tell();
            } while (lVar3 < local_198);
        }
        pLVar2 = logger::default_logger();
        pLVar2->Log(false, 5,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/options/"
                    "DeviceOptions.cpp",
                    191, "%sInit from file successful", "PREFS: ");
        return 1;
    }

    // 0x100022300
    uint32_t DeviceOptions::InitFromLegacyFormat(PacketJ<Array<unsigned char>>&& packetJ) {
        char cVar1;
        char cVar2;
        uint8_t bVar4;
        LogLevel logLevel;
        int arg4;
        char* str2;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_2a8;
        fixed_string<char, 256> local_288;
        fixed_string<char, 256> local_160;

        auto pLVar6 = logger::default_logger();
        char* pcVar7 = "PREFS: ";
        pLVar6->Log(false, 5,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/options/"
                    "DeviceOptions.cpp",
                    197, "%sInitialising from legacy format", "PREFS: ");
        uint32_t uVar5 = packetJ.IsValid();
        if ((char)uVar5 == '\0') {
            pLVar6 = logger::default_logger();
            str2 = "Invalid legacy packet passed in.";
            logLevel = 2;
            arg4 = 201;
        } else {
            if (field_393 == '\0') {
                cVar1 = packetJ.g1s();
                packetJ.g1s();
                if ('\x01' < cVar1) {
                    cVar2 = packetJ.g1s();
                    field_832.SetValue(cVar2 == '\x01', true);
                }
                if ('\x03' < cVar1) {
                    cVar2 = packetJ.g1s();
                    if (IsValidEnumValue<ClientWindowMode>((type*)(unsigned long)(unsigned int)(int)cVar2)) {
                        field_576.SetValue((int)cVar2, true);
                    }
                }
                if ('\x02' < cVar1) {
                    cVar2 = packetJ.g1s();
                    packetJ.Skip((long)cVar2 << 3);
                }
                if ('\x04' < cVar1) {
                    PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(
                        &local_2a8, (uint8_t)packetJ);
                    pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    local_160 = eastl::fixed_string<char, 256>(pcVar7);
                    field_2304.SetValue(&local_160, true);
                }
                if ('\x05' < cVar1) {
                    cVar2 = packetJ.g1();
                    field_464.SetValue(cVar2, true);
                }
                if ('\x06' < cVar1) {
                    packetJ.g1();
                }
                if ('\a' < cVar1) {
                    PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(
                        &local_2a8, (uint8_t)packetJ);
                    pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    local_288 = eastl::fixed_string<char, 256>(pcVar7);
                    field_1312.SetValue(&local_288, true);
                }
                if ('\b' < cVar1) {
                    bVar4 = packetJ.g1();
                    field_1184.SetValue(100 - (unsigned int)bVar4, true);
                    packetJ.g1();
                    packetJ.g1();
                    packetJ.g1();
                }
                if ('\t' < cVar1) {
                    field_3296.SetValue(packetJ.g4s(), true);
                }
                if ('\n' < cVar1) {
                    bVar4 = packetJ.g1();
                    if (IsValidEnumValue<ChatTimestampMode>((type*)(unsigned long)(unsigned int)bVar4)) {
                        field_704.SetValue((unsigned int)bVar4, true);
                    }
                }
                if ('\v' < cVar1) {
                    bVar4 = packetJ.g1();
                    field_4240.SetValue((unsigned int)bVar4, true);
                }
            }
            pLVar6 = logger::default_logger();
            pcVar7 = "PREFS: ";
            str2 = "%sInit from legacy format successful";
            logLevel = 5;
            arg4 = 277;
        }
        pLVar6->Log(false, logLevel,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/options/"
                    "DeviceOptions.cpp",
                    arg4, str2, pcVar7);
        return uVar5;
    }

    // 0x1000226d0
    uint64_t DeviceOptions::SaveToFile() {
        Logger* pLVar3;
        long lVar4;
        long lVar5;
        uint64_t uVar6;
        File* pFVar7;
        char* pcVar8;
        unsigned long arg2_00;
        uint8_t local_4a8[16];
        ReturnValue local_498;

        vector<eastl::string> local_4d0;
        auto pCVar2 = Client::Instance();
        new (local_4a8) callstack::Callstack();
        if (field_393 != '\0') {
            pcVar8 = pCVar2->field_8440->field_24;
            local_460 = eastl::string(pcVar8);
            *((local_4a8 + 8)) = GameShell3Cache::OpenPrefsForRead(field_88, "_client", local_460, *local_4a8);
            if (!(local_4a8->IsValid())) {
                pFVar7 = (File*)(*((local_4a8 + 8))).operator->();
                lVar4 = pFVar7->length(nullptr);
                while (true) {
                    pFVar7 = (File*)(*((local_4a8 + 8))).operator->();
                    lVar5 = pFVar7->tell();
                    if (lVar4 <= lVar5)
                        break;
                    pFVar7 = (File*)(*((local_4a8 + 8))).operator->();
                    local_460 = pFVar7->readline();
                    arg2_00 = local_460.find_first_of(" \t", 0);
                    if (arg2_00 != 18446744073709551615) {
                        lVar5 = local_460.find_first_not_of(" \t", arg2_00 + 1);
                        if (lVar5 != -1) {
                            local_498 = local_460.substr(0, arg2_00);
                            if (!(IsStartupOption(local_498))) {
                                local_4d0.push_back(local_460);
                            }
                        }
                    }
                }
            }
            ((local_4a8 + 8))->~unique_ptr();
            this = this;
        }
        *((local_4a8 + 8)) = GameShell3Cache::OpenPrefsForWrite(field_88, *local_4a8);
        if (local_4a8->IsValid()) {
            pLVar3 = logger::default_logger();
            pLVar3->Log(false, 2,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/options/"
                        "DeviceOptions.cpp",
                        356, "%sERROR - unable to save to file", "PREFS: ");
            ((local_4a8 + 8))->~unique_ptr();
            return 1;
        }
        __31 local_460;
        std::function<void(IOption&)>::function<DeviceOptions::SaveToFile()::__31, void>(
            (function<void(IOption&)>*)&local_498, &local_460);
        ForEachOption(local_498);
        lVar4 = local_4d0.HeapBeginPtr();
        lVar5 = local_4d0.end();
        if (lVar4 != lVar5) {
            do {
                uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_460.append_sprintf("%s\r\n", uVar6);
                lVar4 = lVar4 + 32;
                lVar5 = local_4d0.end();
            } while (lVar4 != lVar5);
        }
        pFVar7 = (File*)(*((local_4a8 + 8))).operator->();
        pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        unsigned int arg2 = local_460.size();
        pFVar7->write(pcVar8, arg2, nullptr);
        pFVar7 = (File*)(*((local_4a8 + 8))).operator->();
        pFVar7->close(nullptr);
        pLVar3 = logger::default_logger();
        pLVar3->Log(false, 5,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/options/"
                    "DeviceOptions.cpp",
                    352, "%sSaved to file", "PREFS: ");
    }

    // 0x100022be0
    void DeviceOptions::BindHandlers() {
        function<void(ScaledUIQuality)>* this_00;
        function<void(int)>* pfVar2;
        function<void(bool)>* pfVar3;
        member_function_ptr arg1;
        member_function_ptr arg1_00;
        member_function_ptr arg1_01;
        member_function_ptr arg1_02;
        member_function_ptr arg1_03;
        member_function_ptr arg1_04;
        member_function_ptr arg1_05;
        uint8_t local_140[24];
        uint8_t local_128[24];
        uint8_t local_110[24];
        uint8_t local_f8[24];
        uint8_t local_e0[24];
        uint8_t local_c8[24];
        uint8_t local_b0[24];
        uint8_t local_98[24];
        function<void(ClientWindowMode)> local_68[56];
        long local_30;

        auto local_80 = Client::Instance();
        Client* local_78 = (Client*)Client::OnWindowModeChanged;
        uint64_t local_70 = 0;
        Client** ppCVar1 = &local_78;
        member_function_ptr mVar4 =
            std::bind<void (Client::*)(), Client*&>((void__jag__oldscape__Client________)local_140, *ppCVar1);
        mVar4.ptr = ppCVar1;
        local_68->function<std::__bind<void (Client::*)(), Client*&>, void>(mVar4);
        field_576.Bind(*local_68);
        local_78 = (Client*)Client::OnWindowModeChanged;
        local_70 = 0;
        ppCVar1 = &local_78;
        mVar4 = std::bind<void (Client::*)(), Client*&>((void__jag__oldscape__Client________)local_128, *ppCVar1);
        arg1.adj = mVar4.adj;
        arg1.ptr = ppCVar1;
        local_68->function<std::__bind<void (Client::*)(), Client*&>, void>(arg1);
        field_3552.Bind(*local_68);
        local_78 = (Client*)Client::OnWindowModeChanged;
        local_70 = 0;
        ppCVar1 = &local_78;
        mVar4 = std::bind<void (Client::*)(), Client*&>((void__jag__oldscape__Client________)local_110, *ppCVar1);
        arg1_00.adj = mVar4.adj;
        arg1_00.ptr = ppCVar1;
        local_68->function<std::__bind<void (Client::*)(), Client*&>, void>(arg1_00);
        field_3680.Bind(*local_68);
        local_78 = (Client*)Client::OnWindowTopmostChanged;
        local_70 = 0;
        ppCVar1 = &local_78;
        mVar4 = std::bind<void (Client::*)(), Client*&>((void__jag__oldscape__Client________)local_f8, *ppCVar1);
        arg1_01.adj = mVar4.adj;
        arg1_01.ptr = ppCVar1;
        local_68->function<std::__bind<void (Client::*)(), Client*&>, void>(arg1_01);
        field_3808.Bind(*local_68);
        local_78 = (Client*)Client::OnBrightnessChanged;
        local_70 = 0;
        ppCVar1 = &local_78;
        mVar4 = std::bind<void (Client::*)(), Client*&>((void__jag__oldscape__Client________)local_e0, *ppCVar1);
        arg1_02.adj = mVar4.adj;
        arg1_02.ptr = ppCVar1;
        local_68->function<std::__bind<void (Client::*)(), Client*&>, void>(arg1_02);
        field_1184.Bind(*local_68);
        local_78 = (Client*)Client::OnScaledUIQualityChanged;
        local_70 = 0;
        ppCVar1 = &local_78;
        mVar4 = std::bind<void (Client::*)(), Client*&>((void__jag__oldscape__Client________)local_c8, *ppCVar1);
        arg1_03.adj = mVar4.adj;
        this_00 = (function<void(ScaledUIQuality)>*)local_68;
        arg1_03.ptr = ppCVar1;
        this_00->function<std::__bind<void (Client::*)(), Client*&>, void>(arg1_03);
        field_704.Bind(*this_00);
        pfVar2 = (function<void(int)>*)local_68;
        std::function<void(int)>::function<DeviceOptions::BindHandlers()::__25, void>(pfVar2, (__25*)this_00);
        field_1056.Bind(*pfVar2);
        pfVar3 = (function<void(bool)>*)local_68;
        std::function<void(bool)>::function<DeviceOptions::BindHandlers()::__26, void>(pfVar3, (__26*)pfVar2);
        field_832.Bind(*pfVar3);
        std::function<void(int)>::function<DeviceOptions::BindHandlers()::__27, void>((function<void(int)>*)local_68,
                                                                                      (__27*)pfVar3);
        field_4720.Bind(*local_68);
        local_78 = (Client*)Client::OnDrawDistanceChange;
        local_70 = 0;
        ppCVar1 = &local_78;
        mVar4 = std::bind<void (Client::*)(), Client*&>((void__jag__oldscape__Client________)local_b0, *ppCVar1);
        arg1_04.adj = mVar4.adj;
        pfVar2 = (function<void(int)>*)local_68;
        arg1_04.ptr = ppCVar1;
        pfVar2->function<std::__bind<void (Client::*)(), Client*&>, void>(arg1_04);
        field_3920.Bind(*pfVar2);
        pfVar3 = (function<void(bool)>*)local_68;
        std::function<void(bool)>::function<DeviceOptions::BindHandlers()::__28, void>(pfVar3, (__28*)pfVar2);
        field_4608.Bind(*pfVar3);
        std::function<void(int)>::function<DeviceOptions::BindHandlers()::__29, void>((function<void(int)>*)local_68,
                                                                                      (__29*)pfVar3);
        field_4848.Bind(*local_68);
        local_78 = (Client*)Client::OnMidiVolumeChanged;
        local_70 = 0;
        ppCVar1 = &local_78;
        mVar4 = std::bind<void (Client::*)(), Client*&>((void__jag__oldscape__Client________)local_98, *ppCVar1);
        arg1_05.adj = mVar4.adj;
        pfVar2 = (function<void(int)>*)local_68;
        arg1_05.ptr = ppCVar1;
        pfVar2->function<std::__bind<void (Client::*)(), Client*&>, void>(arg1_05);
        field_5104.Bind(*pfVar2);
        std::function<void(IOption&)>::function<DeviceOptions::BindHandlers()::__30, void>(
            (function<void(IOption&)>*)local_68, (__30*)pfVar2);
        ForEachOption(*local_68);
    }

    // 0x1000233f0
    void DeviceOptions::MainLogic() {
        MainLogic();
        if (field_392 != '\0') {
            SaveToFile();
            field_392 = 0;
        }
    }

    // 0x100023470
    long* DeviceOptions::GetScriptOption(DeviceOptionScriptID deviceOptionScriptID) {
        return (long*)GetScriptOption(deviceOptionScriptID);
    }

    // 0x1000235e0
    void DeviceOptions::OnOptionValueChanged(IOption* iOption) {
        field_392 = 1;
    }

    // 0x10004dc50
    void DeviceOptions::BindHandlers()::$_25::operator()(int arg1) const {
        Client::Instance()->SetFrameRate((int)this);
    }

    // 0x10004e3f0
    void DeviceOptions::BindHandlers()::$_26::operator()(bool arg1) const {
        if (TitleScreen::IsOpen() != '\0') {
            TitleScreen::OnMuteTitleScreenChanged();
        }
    }

    // 0x10004eb80
    void DeviceOptions::BindHandlers()::$_27::operator()(int arg1) const {
        if (TitleScreen::IsOpen() != '\0') {
            TitleScreen::OnMidiVolumeChanged();
        }
    }

    // 0x10004f300
    void DeviceOptions::BindHandlers()::$_28::operator()(bool arg1) const {
        auto plVar1 = OSRenderCore_AudioThread::Instance();
        ((OSRenderCore_LogicThread_Common*)((long)plVar1 + *(long*)(*plVar1 - 24)))->SetFullScreen((uint8_t)this);
    }

    // 0x10004fad0
    void DeviceOptions::BindHandlers()::$_29::operator()(int arg1) const {
        auto plVar1 = OSRenderCore_AudioThread::Instance();
        ((OSRenderCore_LogicThread_Common*)((long)plVar1 + *(long*)(*plVar1 - 24)))
            ->SetAntialiasingSampleLevel((int)this);
    }

    // 0x1000502c0
    void DeviceOptions::BindHandlers()::$_30::operator()(IOption& iOption) const {
        (**(void (**)(...))(field_0 + 48))();
    }

    // 0x100050d40
    void DeviceOptions::SaveToFile()::$_31::operator()(const IOption& iOption) const {
        char cVar2;
        char* str;
        eastl::string local_180;

        DeviceOptions* this_00 = field_8;
        bool cVar1 = this_00->field_393;
        if (!cVar1) {
            cVar2 = '\x01';
        } else {
            str = (char*)iOption.data();
            local_180 = eastl::string(str);
            cVar2 = IsStartupOption(this_00, &local_180);
            if (cVar1) {
            }
        }
        if (cVar2) {
            iOption.data();
            (iOption._vptr[2]._dtor)(&local_160, iOption);
        }
    }

} // namespace jag::oldscape::option
