// projects/osclient/options/DeviceOptions.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "DeviceOptions.h"

namespace jag::oldscape::option {
    // 0x1000208d0, 16 bytes, base-object constructor, placed by class name and debug map
    // DeviceOptions::DeviceOptions()
    void DeviceOptions::DeviceOptions() {
        DeviceOptions(this, false);
    }

    // 0x1000208e0, 4896 bytes, base-object constructor, placed by class name
    // DeviceOptions::DeviceOptions(bool)
    void DeviceOptions::DeviceOptions(bool param_1) {
        Filename* this_00;
        char* pcVar1;
        undefined7 in_register_00000031;
        SystemPaths* this_01;
        undefined1 local_5a8[8];
        undefined1* local_5a0;
        undefined1* local_598;
        undefined1* local_590;
        undefined1* local_588;
        undefined1* local_580;
        allocator local_530[36];
        undefined4 local_50c;
        undefined1 local_508[32];
        allocator local_4e8[304];
        SideBarData local_3b8[50];
        fixed_string<char, 256, true, eastl::allocator> local_160[296];
        undefined8 local_38;

        local_38 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        new (this) OptionStore();
        field_0 = &PTR__DeviceOptions_100ef0e20;
        new (&field_88) Filename();
        field_392 = 1;
        eastl::allocator::allocator(local_4e8, "EASTL basic_string");
        new (local_3b8) eastl::string("WindowSavedPosition", local_4e8);
        local_50c = (undefined4)CONCAT71(in_register_00000031, param_1);
        eastl::allocator::allocator(local_530, "EASTL hash_set");
        new (&field_400, local_3b8, 1, 0, local_5a8, local_508, local_530)
            eastl::hash_set<eastl::string, eastl::hash<eastl::string>, eastl::equal_to<eastl::string>, eastl::allocator,
                            false>();
        local_3b8->~basic_string();
        new (&field_464, (OptionStore*)this, "HideUserName", false) Option<bool>();
        new (&field_576, this, "WindowMode", 2) Option<ClientWindowMode>();
        local_590 = &field_704;
        new (local_590) Option<ScaledUIQuality>(this, "UIQuality");
        local_5a0 = &field_832;
        new (local_5a0) Option<bool>(this, "MuteTitleScreen", false);
        local_598 = &field_944;
        new (local_598) Option<bool>(this, "DisplayFps", false);
        sidebars::SideBarData::SideBarData(local_3b8, 0, 2147483647);
        local_588 = &field_1056;
        new (local_588) RangeOption<int>(this, "FpsLimit", local_3b8, 0);
        sidebars::SideBarData::SideBarData(local_3b8, 0, 100);
        this_01 = (SystemPaths*)&field_1184;
        local_580 = this_01;
        new (this_01) RangeOption<int>(this, "Brightness", local_3b8, 55);
        this_00 = (Filename*)this_01->GetUserPicturesFolder();
        pcVar1 = (char*)this_00->GetName();
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_160, pcVar1);
        new (&field_1312, this, "ScreenshotPath", local_160)
            Option<eastl::fixed_string<char, 256, true, eastl::allocator>>();
        /* WARNING: Subroutine does not return */
        local_160->~fixed_string();
    }

    // 0x100021c00, 16 bytes, complete-object constructor, placed by class name
    // DeviceOptions::DeviceOptions(): jumps straight to the base-object constructor

    // 0x100021c10, 16 bytes, complete-object constructor, placed by class name
    // DeviceOptions::DeviceOptions(bool): jumps straight to the base-object constructor

    // 0x100021e20, 1152 bytes, placed by class name
    // DeviceOptions::InitFromFile(File&)
    undefined8 DeviceOptions::InitFromFile(File* param_1) {
        char cVar1;
        undefined8 uVar2;
        long lVar3;
        long lVar4;
        char* pcVar5;
        long* plVar6;
        undefined8 uVar7;
        File local_1e0;
        allocator local_1c0[8];
        eastl::string local_1b8[32];
        long local_198;
        eastl::string local_190[32];
        int local_164;
        basic_string local_160[296];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar2 = logger::default_logger();
        logger::Logger::Log(uVar2, 0, 5,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "options/DeviceOptions.cpp",
                            135, "%sInitialising from file", "PREFS: ");
        lVar3 = param_1->length(0);
        lVar4 = param_1->tell();
        local_198 = lVar3;
        if (lVar4 < lVar3) {
            local_164 = 0;
            do {
                local_1e0.readline();
                lVar3 = local_1e0.find_first_of(" \t", 0);
                if (lVar3 != -1) {
                    lVar3 = local_1e0.find_first_not_of(" \t", lVar3 + 1);
                    if (lVar3 != -1) {
                        eastl::string::substr((ulong)local_1b8, (ulong)&local_1e0);
                        if (((DeviceOptions*)this)->field_393 != '\0') {
                            cVar1 = IsStartupOption((DeviceOptions*)this, (basic_string*)local_1b8);
                            if (cVar1 == '\0') {
                                eastl::string::~basic_string(local_1b8);
                                goto LAB_100021edf;
                            }
                        }
                        eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                        eastl::string::substr((ulong)local_190, (ulong)&local_1e0);
                        cVar1 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                        if (cVar1 == '\0') {
                            pcVar5 = (char*)eastl::string::operator[](local_190, 0);
                            if (*pcVar5 == '\'') {
                            LAB_100021fd1:
                                lVar3 = local_190->find_first_of("\'\"", 1);
                                if (lVar3 == -1) {
                                    eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>::size();
                                }
                                eastl::string::substr((ulong)local_160, (ulong)local_190);
                                eastl::string::operator=(local_190, local_160);
                                local_160->~basic_string();
                            } else {
                                pcVar5 = (char*)eastl::string::operator[](local_190, 0);
                                if (*pcVar5 == '\"')
                                    goto LAB_100021fd1;
                            }
                            cVar1 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true,
                                                                                            eastl::allocator>>::empty();
                            if (cVar1 == '\0') {
                                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                eastl::allocator::allocator(local_1c0, "EASTL basic_string");
                                new (local_160) eastl::string(pcVar5, local_1c0);
                                plVar6 = (long*)OptionStore::GetOptionByName((basic_string*)(DeviceOptions*)this);
                                local_160->~basic_string();
                                if (plVar6 != (long*)0) {
                                    pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                                    new (local_160) eastl::fixed_string<char, 256, true, eastl::allocator>(pcVar5);
                                    (**(code**)(*plVar6 + 24))(
                                        plVar6, (fixed_string<char, 256, true, eastl::allocator>*)local_160);
                                    /* WARNING: Subroutine does not return */
                                    local_160->~fixed_string();
                                }
                            }
                        }
                        cVar1 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                        if (cVar1 != '\0') {
                            uVar2 = logger::default_logger();
                            uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                            logger::Logger::Log(uVar2, 0, 3,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                "projects/osclient/options/DeviceOptions.cpp",
                                                183, "%sNo value specified for \'%s\' (%d)", "PREFS: ", uVar7,
                                                local_164);
                        }
                        eastl::string::~basic_string(local_190);
                        eastl::string::~basic_string(local_1b8);
                    }
                    local_164 = local_164 + 1;
                }
            LAB_100021edf:
                local_1e0.~basic_string();
                lVar3 = param_1->tell();
            } while (lVar3 < local_198);
        }
        uVar2 = logger::default_logger();
        logger::Logger::Log(uVar2, 0, 5,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "options/DeviceOptions.cpp",
                            191, "%sInit from file successful", "PREFS: ");
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return CONCAT71((int7)((ulong) * (long*)PTR____stack_chk_guard_100ee9d98 >> 8), 1);
    }

    // 0x100022300, 976 bytes, placed by class name
    // DeviceOptions::InitFromLegacyFormat(PacketJ<Array<unsigned char, eastl::allocator> >&&)
    undefined4 DeviceOptions::InitFromLegacyFormat(PacketJ* param_1) {
        char cVar1;
        char cVar2;
        bool bVar3;
        byte bVar4;
        undefined4 uVar5;
        int iVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        undefined8 uVar9;
        char* pcVar10;
        char* pcVar11;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>> local_2a8[32];
        fixed_string<char, 256, true, eastl::allocator> local_288[296];
        fixed_string<char, 256, true, eastl::allocator> local_160[296];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        uVar7 = logger::default_logger();
        pcVar11 = "PREFS: ";
        logger::Logger::Log(uVar7, 0, 5,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "options/DeviceOptions.cpp",
                            197, "%sInitialising from legacy format", "PREFS: ");
        uVar5 = param_1->IsValid();
        if ((char)uVar5 == '\0') {
            uVar7 = logger::default_logger();
            pcVar10 = "Invalid legacy packet passed in.";
            uVar8 = 2;
            uVar9 = 201;
        } else {
            if (field_393 == '\0') {
                cVar1 = param_1->g1s();
                param_1->g1s();
                if ('\x01' < cVar1) {
                    cVar2 = param_1->g1s();
                    (&field_832, cVar2 == '\x01', true)->SetValue();
                }
                if ('\x03' < cVar1) {
                    cVar2 = param_1->g1s();
                    bVar3 = IsValidEnumValue<ClientWindowMode>((int)cVar2);
                    if (bVar3) {
                        (&field_576, (int)cVar2, true)->SetValue();
                    }
                }
                if ('\x02' < cVar1) {
                    cVar2 = param_1->g1s();
                    param_1->Skip((long)cVar2 << 3);
                }
                if ('\x04' < cVar1) {
                    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                        eastl::string>(local_2a8, SUB81(param_1, 0));
                    pcVar11 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_160, pcVar11);
                    (&field_2304, local_160, 1)->SetValue();
                    /* WARNING: Subroutine does not return */
                    local_160->~fixed_string();
                }
                if ('\x05' < cVar1) {
                    cVar2 = param_1->g1();
                    (&field_464, cVar2 != '\0', true)->SetValue();
                }
                if ('\x06' < cVar1) {
                    param_1->g1();
                }
                if ('\a' < cVar1) {
                    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                        eastl::string>(local_2a8, SUB81(param_1, 0));
                    pcVar11 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_288, pcVar11);
                    (&field_1312, local_288, 1)->SetValue();
                    /* WARNING: Subroutine does not return */
                    local_288->~fixed_string();
                }
                if ('\b' < cVar1) {
                    bVar4 = param_1->g1();
                    (&field_1184, 100 - (uint)bVar4, true)->SetValue();
                    param_1->g1();
                    param_1->g1();
                    param_1->g1();
                }
                if ('\t' < cVar1) {
                    iVar6 = param_1->g4s();
                    (&field_3296, iVar6, true)->SetValue();
                }
                if ('\n' < cVar1) {
                    bVar4 = param_1->g1();
                    bVar3 = IsValidEnumValue<ChatTimestampMode>((uint)bVar4);
                    if (bVar3) {
                        (&field_704, (uint)bVar4, true)->SetValue();
                    }
                }
                if ('\v' < cVar1) {
                    bVar4 = param_1->g1();
                    (&field_4240, (uint)bVar4, true)->SetValue();
                }
            }
            uVar7 = logger::default_logger();
            pcVar11 = "PREFS: ";
            pcVar10 = "%sInit from legacy format successful";
            uVar8 = 5;
            uVar9 = 277;
        }
        logger::Logger::Log(uVar7, 0, uVar8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "options/DeviceOptions.cpp",
                            uVar9, pcVar10, pcVar11);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return uVar5;
    }

    // 0x1000226d0, 1088 bytes, placed by class name
    // DeviceOptions::SaveToFile()
    undefined8 DeviceOptions::SaveToFile() {
        char cVar1;
        uint uVar2;
        long lVar3;
        undefined8 uVar4;
        long lVar5;
        File* pFVar6;
        char* pcVar7;
        vector<eastl::string, eastl::allocator> local_4d0[32];
        undefined1 local_4a8[16];
        allocator local_498[56];
        File local_460[44];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::vector<eastl::string, eastl::allocator>::vector(local_4d0);
        lVar3 = Client::Instance();
        new (local_4a8) callstack::Callstack();
        if (field_393 != '\0') {
            pcVar7 = *(char**)(*(long*)(lVar3 + 8440) + 24);
            eastl::allocator::allocator(local_498, "EASTL basic_string");
            new (local_460) eastl::string(pcVar7, local_498);
            ((local_4a8 + 8))
                ->OpenPrefsForRead((Filename*)&field_88, "_client", (basic_string*)local_460, (Error*)local_4a8);
            local_460->~basic_string();
            cVar1 = local_4a8->IsValid();
            if (cVar1 == '\0') {
                pFVar6 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                    (unique_ptr<File, std::default_delete<File>>*)(local_4a8 + 8));
                lVar3 = pFVar6->length(0);
                while (true) {
                    pFVar6 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                        (unique_ptr<File, std::default_delete<File>>*)(local_4a8 + 8));
                    lVar5 = pFVar6->tell();
                    if (lVar3 <= lVar5)
                        break;
                    std::unique_ptr<File, std::default_delete<File>>::operator->(
                        (unique_ptr<File, std::default_delete<File>>*)(local_4a8 + 8));
                    local_460->readline();
                    lVar5 = local_460->find_first_of(" \t", 0);
                    if (lVar5 != -1) {
                        lVar5 = local_460->find_first_not_of(" \t", lVar5 + 1);
                        if (lVar5 != -1) {
                            eastl::string::substr((ulong)local_498, (ulong)local_460);
                            cVar1 = IsStartupOption((DeviceOptions*)this, (basic_string*)local_498);
                            if (cVar1 == '\0') {
                                eastl::vector<eastl::string, eastl::allocator>::push_back(local_4d0,
                                                                                          (basic_string*)local_460);
                            }
                            local_498->~basic_string();
                        }
                    }
                    local_460->~basic_string();
                }
            }
            ((local_4a8 + 8))->~unique_ptr();
            this = (DeviceOptions*)this;
        }
        ((local_4a8 + 8))->OpenPrefsForWrite((Filename*)&field_88, (Error*)local_4a8);
        cVar1 = local_4a8->IsValid();
        if (cVar1 != '\0') {
            uVar4 = logger::default_logger();
            logger::Logger::Log(uVar4, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                                "options/DeviceOptions.cpp",
                                356, "%sERROR - unable to save to file", "PREFS: ");
            ((local_4a8 + 8))->~unique_ptr();
            eastl::vector<eastl::string, eastl::allocator>::~vector(local_4d0);
            if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                /* WARNING: Subroutine does not return */
                ___stack_chk_fail();
            }
            return CONCAT71((int7)((ulong) * (long*)PTR____stack_chk_guard_100ee9d98 >> 8), 1);
        }
        new (local_460) eastl::fixed_string<char, 1024, true, eastl::allocator>();
        std::function<void(IOption&)>::function<DeviceOptions::SaveToFile()::__31, void>((function*)local_498,
                                                                                         local_460, this);
        ForEachOption(local_498);
        std::function<void(IOption&)>::~function((function<void(IOption&)>*)local_498);
        lVar3 = local_4d0->HeapBeginPtr();
        lVar5 = local_4d0->end();
        if (lVar3 != lVar5) {
            do {
                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 1024ul, 1ul, 0ul, true, eastl::allocator>>::
                    append_sprintf((char*)local_460, "%s\r\n", uVar4);
                lVar3 = lVar3 + 32;
                lVar5 = local_4d0->end();
            } while (lVar3 != lVar5);
        }
        pFVar6 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(
            (unique_ptr<File, std::default_delete<File>>*)(local_4a8 + 8));
        pcVar7 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar2 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        pFVar6->write(pcVar7, uVar2, 0);
        pFVar6 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(
            (unique_ptr<File, std::default_delete<File>>*)(local_4a8 + 8));
        pFVar6->close(0);
        uVar4 = logger::default_logger();
        logger::Logger::Log(uVar4, 0, 5,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/"
                            "options/DeviceOptions.cpp",
                            352, "%sSaved to file", "PREFS: ");
        /* WARNING: Subroutine does not return */
        local_460->~fixed_string();
    }

    // 0x100022be0, 1232 bytes, placed by class name
    // DeviceOptions::BindHandlers()
    void DeviceOptions::BindHandlers() {
        undefined1 local_140[24];
        undefined1 local_128[24];
        undefined1 local_110[24];
        undefined1 local_f8[24];
        undefined1 local_e0[24];
        undefined1 local_c8[24];
        undefined1 local_b0[24];
        undefined1 local_98[24];
        undefined8 local_80;
        Client* local_78;
        undefined8 local_70;
        function local_68[56];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_80 = Client::Instance();
        local_78 = (Client*)Client::OnWindowModeChanged;
        local_70 = 0;
        std::bind<void (Client::*)(), Client*&>((_func_void*)local_140, &local_78);
        std::function<void(ClientWindowMode)>::function<std::__bind<void (Client::*)(), Client*&>, void>(local_68);
        (&field_576, local_68)->Bind();
        std::function<void(ClientWindowMode)>::~function((function<void(ClientWindowMode)>*)local_68);
        local_78 = (Client*)Client::OnWindowModeChanged;
        local_70 = 0;
        std::bind<void (Client::*)(), Client*&>((_func_void*)local_128, &local_78);
        std::function<void(int)>::function<std::__bind<void (Client::*)(), Client*&>, void>(local_68);
        (&field_3552, local_68)->Bind();
        std::function<void(int)>::~function((function<void(int)>*)local_68);
        local_78 = (Client*)Client::OnWindowModeChanged;
        local_70 = 0;
        std::bind<void (Client::*)(), Client*&>((_func_void*)local_110, &local_78);
        std::function<void(int)>::function<std::__bind<void (Client::*)(), Client*&>, void>(local_68);
        (&field_3680, local_68)->Bind();
        std::function<void(int)>::~function((function<void(int)>*)local_68);
        local_78 = (Client*)Client::OnWindowTopmostChanged;
        local_70 = 0;
        std::bind<void (Client::*)(), Client*&>((_func_void*)local_f8, &local_78);
        std::function<void(bool)>::function<std::__bind<void (Client::*)(), Client*&>, void>(local_68);
        (&field_3808, local_68)->Bind();
        std::function<void(bool)>::~function((function<void(bool)>*)local_68);
        local_78 = (Client*)Client::OnBrightnessChanged;
        local_70 = 0;
        std::bind<void (Client::*)(), Client*&>((_func_void*)local_e0, &local_78);
        std::function<void(int)>::function<std::__bind<void (Client::*)(), Client*&>, void>(local_68);
        (&field_1184, local_68)->Bind();
        std::function<void(int)>::~function((function<void(int)>*)local_68);
        local_78 = (Client*)Client::OnScaledUIQualityChanged;
        local_70 = 0;
        std::bind<void (Client::*)(), Client*&>((_func_void*)local_c8, &local_78);
        std::function<void(ScaledUIQuality)>::function<std::__bind<void (Client::*)(), Client*&>, void>(local_68);
        (&field_704, local_68)->Bind();
        std::function<void(ScaledUIQuality)>::~function((function<void(ScaledUIQuality)>*)local_68);
        std::function<void(int)>::function<DeviceOptions::BindHandlers()::__25, void>(local_68);
        (&field_1056, local_68)->Bind();
        std::function<void(int)>::~function((function<void(int)>*)local_68);
        std::function<void(bool)>::function<DeviceOptions::BindHandlers()::__26, void>(local_68);
        (&field_832, local_68)->Bind();
        std::function<void(bool)>::~function((function<void(bool)>*)local_68);
        std::function<void(int)>::function<DeviceOptions::BindHandlers()::__27, void>(local_68);
        (&field_4720, local_68)->Bind();
        std::function<void(int)>::~function((function<void(int)>*)local_68);
        local_78 = (Client*)Client::OnDrawDistanceChange;
        local_70 = 0;
        std::bind<void (Client::*)(), Client*&>((_func_void*)local_b0, &local_78);
        std::function<void(int)>::function<std::__bind<void (Client::*)(), Client*&>, void>(local_68);
        (&field_3920, local_68)->Bind();
        std::function<void(int)>::~function((function<void(int)>*)local_68);
        std::function<void(bool)>::function<DeviceOptions::BindHandlers()::__28, void>(local_68);
        (&field_4608, local_68)->Bind();
        std::function<void(bool)>::~function((function<void(bool)>*)local_68);
        std::function<void(int)>::function<DeviceOptions::BindHandlers()::__29, void>(local_68);
        (&field_4848, local_68)->Bind();
        std::function<void(int)>::~function((function<void(int)>*)local_68);
        local_78 = (Client*)Client::OnMidiVolumeChanged;
        local_70 = 0;
        std::bind<void (Client::*)(), Client*&>((_func_void*)local_98, &local_78);
        std::function<void(int)>::function<std::__bind<void (Client::*)(), Client*&>, void>(local_68);
        (&field_5104, local_68)->Bind();
        std::function<void(int)>::~function((function<void(int)>*)local_68);
        std::function<void(IOption&)>::function<DeviceOptions::BindHandlers()::__30, void>(local_68);
        ForEachOption(local_68);
        std::function<void(IOption&)>::~function((function<void(IOption&)>*)local_68);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1000233f0, 48 bytes, placed by class name
    // DeviceOptions::MainLogic()
    void DeviceOptions::MainLogic() {
        MainLogic();
        if (field_392 != '\0') {
            SaveToFile(this);
            field_392 = 0;
        }
    }

    // 0x100023470, 16 bytes, placed by class name
    // DeviceOptions::GetScriptOption(DeviceOptionScriptID)
    void DeviceOptions::GetScriptOption(int param_2) {
        GetScriptOption(param_2);
    }

    // 0x1000235e0, 16 bytes, placed by class name
    // DeviceOptions::OnOptionValueChanged(IOption*)
    void DeviceOptions::OnOptionValueChanged(IOption* param_1) {
        field_392 = 1;
    }

    // 0x10004dc50, 32 bytes, placed by class name
    // DeviceOptions::BindHandlers()::$_25::operator()(int) const
    /* DeviceOptions::BindHandlers()::$_25::TEMPNAMEPLACEHOLDERVALUE(int) const
    */

    void DeviceOptions::BindHandlers()::$_25::operator()(int param_1) {
        GameShell* this_00;

        this_00 = (GameShell*)Client::Instance();
        this_00->SetFrameRate((int)this);
    }

    // 0x10004e3f0, 32 bytes, placed by class name
    // DeviceOptions::BindHandlers()::$_26::operator()(bool) const
    /* DeviceOptions::BindHandlers()::$_26::TEMPNAMEPLACEHOLDERVALUE(bool) const
    */

    void DeviceOptions::BindHandlers()::$_26::operator()(bool param_1) {
        if (TitleScreen::IsOpen() != '\0') {
            OnMuteTitleScreenChanged();
        }
    }

    // 0x10004eb80, 32 bytes, placed by class name
    // DeviceOptions::BindHandlers()::$_27::operator()(int) const
    /* DeviceOptions::BindHandlers()::$_27::TEMPNAMEPLACEHOLDERVALUE(int) const
    */

    void DeviceOptions::BindHandlers()::$_27::operator()(int param_1) {
        if (TitleScreen::IsOpen() != '\0') {
            OnMidiVolumeChanged();
        }
    }

    // 0x10004f300, 48 bytes, placed by class name
    // DeviceOptions::BindHandlers()::$_28::operator()(bool) const
    /* DeviceOptions::BindHandlers()::$_28::TEMPNAMEPLACEHOLDERVALUE(bool) const
    */

    void DeviceOptions::BindHandlers()::$_28::operator()(bool param_1) {
        long* plVar1;

        plVar1 = (long*)OSRenderCore_AudioThread::Instance();
        (((long)plVar1 + *(long*)(*plVar1 + -24)))->SetFullScreen(SUB81(this, 0));
    }

    // 0x10004fad0, 48 bytes, placed by class name
    // DeviceOptions::BindHandlers()::$_29::operator()(int) const
    /* DeviceOptions::BindHandlers()::$_29::TEMPNAMEPLACEHOLDERVALUE(int) const
    */

    void DeviceOptions::BindHandlers()::$_29::operator()(int param_1) {
        long* plVar1;

        plVar1 = (long*)OSRenderCore_AudioThread::Instance();
        (((long)plVar1 + *(long*)(*plVar1 + -24)))->SetAntialiasingSampleLevel((int)this);
    }

    // 0x1000502c0, 16 bytes, placed by class name
    // DeviceOptions::BindHandlers()::$_30::operator()(IOption&) const
    /* DeviceOptions::BindHandlers()::$_30::TEMPNAMEPLACEHOLDERVALUE(IOption&)
   const */

    void DeviceOptions::BindHandlers()::$_30::operator()(IOption* param_1) {
        (**(code**)(*(long*)this + 48))();
    }

    // 0x100050d40, 336 bytes, placed by class name
    // DeviceOptions::SaveToFile()::$_31::operator()(IOption const&) const
    /* DeviceOptions::SaveToFile()::$_31::TEMPNAMEPLACEHOLDERVALUE(IOption
   const&) const */

    void DeviceOptions::SaveToFile()::$_31::operator()(IOption* param_1) {
        char cVar1;
        DeviceOptions* this_00;
        char cVar2;
        char* pcVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        eastl::string local_180[32];
        allocator local_160[296];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = *(DeviceOptions**)(this + 8);
        cVar1 = this_00->field_393;
        if (cVar1 == '\0') {
            cVar2 = '\x01';
        } else {
            pcVar3 = (char*)param_1->data();
            eastl::allocator::allocator(local_160, "EASTL basic_string");
            eastl::string::basic_string(local_180, pcVar3, local_160);
            cVar2 = IsStartupOption(this_00, (basic_string*)local_180);
            if (cVar1 != '\0') {
                eastl::string::~basic_string(local_180);
            }
        }
        if (cVar2 != '\0') {
            pcVar3 = *(char**)this;
            uVar4 = param_1->data();
            (**(code**)(param_1->field_0 + 32))(local_160, param_1);
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 1024ul, 1ul, 0ul, true, eastl::allocator>>::
                append_sprintf(pcVar3, "%s %s\r\n", uVar4, uVar5);
            /* WARNING: Subroutine does not return */
            local_160->~fixed_string();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::oldscape::option
