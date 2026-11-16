// libs/logger/Logger.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.logger

#include "Logger.h"

namespace jag::logger {
    // 0x100f29fd0
    const void* logLevelString[9] = {
        "none", "FATAL ERROR", "ERROR", "WARN", "PERF", "INFO", "TRACE", "PRINTF", "DEBUG",
    };

    // 0x100f48a10
    int32_t Logger::m_logLevels__[36] = {
        0, 0, 15081527, 1, 1, 0, 15081536, 1, 2, 0, 15081552, 1, 3, 0, 15081562, 1, 4, 0, 15081571, 1,
        5, 0, 15081580, 1, 6, 0, 15081589, 1, 7, 0, 15081599, 1, 8, 0, 15081610, 1,
    };

    // 0x103be2540, set at startup by ___cxx_global_var_init
    StringEnum Logger::m_logLevels = StringEnum((StringEnumEntry*)&Logger::m_logLevels__, 9);

    // 0x103be2550, set at startup by ___cxx_global_var_init.9
    LogStream LOGGER_UNCATEGORISED;

    // 0x1000b7910: Logger::GetLogStreams() has the same machine code as oldscape::minimenu::MinimenuEntry::GetSubjectName() const

    // 0x100ca6a40
    void LogLevel2String(LogLevel logLevel) {
        return (&logLevelString)[logLevel];
    }

    // 0x100ca6a60
    void GetDebugOutputLevel(LogLevel logLevel) {
        uint32_t uVar1 = 0;
        if (logLevel - 1 < 8) {
            uVar1 = *(uint32_t*)(&DAT_100d9e9c0 + (long)(int)(logLevel - 1) * 4);
        }
        return uVar1;
    }

    // 0x100ca6a80
    void DebugOutputSink::Write(const eastl::fixed_string<char, 2048>& str, LogLevel logLevel) {
        DEBUG_OUTPUT_LEVEL dEBUG_OUTPUT_LEVEL;

        unsigned int uVar1 = GetDebugOutputLevel(logLevel);
        str.WriteDebugString(*((fixed_string<char, _2048>*)(unsigned long)uVar1), dEBUG_OUTPUT_LEVEL);
    }

    // 0x100ca6ab0
    Logger* default_logger() {
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_30;
        ReturnValue local_20;

        if (default_logger()::static_logger == '\0') {
            if (___cxa_guard_acquire(&default_logger()::static_logger) != 0) {
                make_shared<DebugOutputSink>(&local_20);
                local_30.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(local_20);
                new ((Logger*)&default_logger()::static_logger) Logger(local_30);
                ___cxa_atexit(PTR__Logger_100ee6828, &default_logger()::static_logger, 4294967296);
                ___cxa_guard_release(&default_logger()::static_logger);
            }
        }
        return (Logger*)&default_logger()::static_logger;
    }

    // 0x100ca6c60
    Logger::Logger() : std::function<void(eastl::fixed_string<char, 64>&)>(), field_48(8) {

        new (&field_56) eastl::map(local_68);
        new (&field_104) eastl::vector<shared_ptr<Sink>>();
        local_68.function<void (*)(eastl::fixed_string<char, 64>&), void>(ThreadNameLoggingID);
        SetLoggingIdentifier(local_68);
    }

    // 0x100ca6d60
    void ThreadNameLoggingID(eastl::fixed_string<char, 64>& str) {
        unsigned int uVar2;
        long lVar3;

        if (this_thread::IsMainThread() == '\0') {
            lVar3 = this_thread::GetThreadName();
            if (lVar3 == 0) {
                uVar2 = this_thread::GetThreadID();
                str.sprintf("[%04X]", (unsigned long)uVar2);
            } else {
                str.sprintf("[%s]", lVar3);
            }
        } else {
            str = "[MAIN]";
        }
    }

    // 0x100ca6e30
    Logger::Logger(const shared_ptr<Sink>& sink) {
        Logger();
        field_104.push_back(sink);
    }

    // 0x100ca6ef0
    void Logger::Log(bool arg1, LogLevel logLevel, const char* str1, int arg4, const char* str2, ...) {
        char in_AL;
        fixed_string<char, _32>* pfVar1;
        map<eastl::fixed_string<char, 32>, LogLevel>* this_00;
        int* piVar2;
        uint64_t in_XMM0_Qa;
        uint64_t in_XMM1_Qa;
        uint64_t in_XMM2_Qa;
        uint64_t in_XMM3_Qa;
        uint64_t in_XMM4_Qa;
        uint64_t in_XMM5_Qa;
        uint64_t in_XMM6_Qa;
        uint64_t in_XMM7_Qa;
        uint8_t uStack0000000000000008;
        uint8_t local_948[48];
        uint64_t local_918;
        uint64_t local_908;
        uint64_t local_8f8;
        uint64_t local_8e8;
        uint64_t local_8d8;
        uint64_t local_8c8;
        uint64_t local_8b8;
        uint64_t local_8a8;
        fixed_string<char, 2048> local_880;
        uint64_t local_58;
        uint8_t* local_50;
        uint8_t* local_48;

        if (in_AL != '\0') {
            local_918 = in_XMM0_Qa;
            local_908 = in_XMM1_Qa;
            local_8f8 = in_XMM2_Qa;
            local_8e8 = in_XMM3_Qa;
            local_8d8 = in_XMM4_Qa;
            local_8c8 = in_XMM5_Qa;
            local_8b8 = in_XMM6_Qa;
            local_8a8 = in_XMM7_Qa;
        }
        uint32_t local_884 = _arg1;
        if ((int)logLevel <= field_48) {
            pfVar1 = (fixed_string<char, _32>*)LOGGER_UNCATEGORISED.GetCallstackRaw();
            this_00 = &field_56[*pfVar1];
            pfVar1 = (fixed_string<char, _32>*)LOGGER_UNCATEGORISED.SSOBeginPtr();
            piVar2 = (int*)(*this_00)[*pfVar1];
            if ((int)logLevel <= *piVar2) {
                local_48 = local_948;
                local_50 = &uStack0000000000000008;
                local_58 = 206158430256;
                local_880 = eastl::fixed_string<char, 2048>();
                local_880.sprintf_va_list(str2, &local_58);
                LogMsg(local_884._0_1_, logLevel, str1, arg4, local_880);
            }
        }
    }

    // 0x100ca71c0
    void Logger::LogMsg(bool arg1, LogLevel logLevel, const char* str1, int arg4,
                        const eastl::fixed_string<char, 2048>& str2) {
        shared_ptr<Sink>* this_01;
        shared_ptr<Sink>* psVar10;
        long* plVar11;
        type* arg2;
        uint64_t in_register_00000031;
        uint8_t auVar12[16];
        Callstack local_4f08;
        tm local_4be0;
        CallstackResolved local_4ba8;
        ReturnValue local_4b50;
        int local_ad0[74];
        char local_9a8[32];

        if ((int)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1) != 0) {
            if (!(TryLogOnce(str1, arg4, str2))) {
                return;
            }
        }
        fixed_string<char, 2048> local_860;
        if (logLevel == 7) {
            local_860 = str2;
            this_01 = (shared_ptr<Sink>*)field_104.HeapBeginPtr();
            psVar10 = (shared_ptr<Sink>*)field_104.end();
            if (this_01 != psVar10) {
                do {
                    plVar11 = (long*)(*this_01).operator->();
                    (**(void (**)(...))(*plVar11 + 16))(plVar11, &local_860, 7);
                    this_01 = this_01 + 16;
                } while (this_01 != psVar10);
            }
        }
        fixed_string<char, 256> local_988;
        uint64_t local_4b68 = std::chrono::system_clock::now();
        time_t local_4b88 = std::chrono::system_clock::to_time_t((time_point*)&local_4b68);
        _localtime_r(&local_4b88, &local_4be0);
        fixed_string<char, _2048>* local_4b70 = str2;
        _strftime(local_9a8, 32, "%d/%m/%Y %H:%M:%S", &local_4be0);
        auVar12 = local_4b68.time_since_epoch();
        uint64_t local_4b80 = auVar12._0_8_;
        local_ad0[0] = 1;
        local_4f08.duration<int>(*local_ad0, auVar12._8_8_);
        local_4b50.duration<long long, std::ratio<1l, 1l>>(local_4f08, arg2);
        local_4b80 %= local_4b50;
        uint64_t uVar3 = (std::chrono::duration_cast<std::chrono::duration<long long, std::ratio<1l, 1000l>>, long long,
                                                     std::ratio<1l, 1000000l>>(local_4b80))
                             .count();
        local_988.sprintf("%s.%03lld", local_9a8, uVar3);
        unsigned long uVar4 = __ZL7strrchrUa9enable_ifIXLb1EEEPKci(str1, 92);
        unsigned long uVar5 = __ZL7strrchrUa9enable_ifIXLb1EEEPKci(str1, 47);
        if (uVar4 == 0) {
            uVar4 = uVar5;
        }
        if (uVar4 != 0) {
            if (uVar5 < uVar4) {
                str1 = (char*)(uVar4 + 1);
            } else {
                str1 = (char*)(uVar5 + 1);
            }
        }
        new (local_ad0) eastl::fixed_string<char, 256>();
        local_ad0->sprintf("%s(%d):", str1, (unsigned long)(unsigned int)arg4);
        fixed_string<char, 64> local_b38;
        if (operator_cast_to_bool()) {
            std::function<void(eastl::fixed_string<char, 64>&)>::operator()(
                (function<void(eastl::fixed_string<char, 64>&)>*)this, &local_b38);
        }
        auto pcVar6 = LogLevel2String(logLevel);
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uint64_t uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uint64_t uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uint64_t uVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_860.sprintf("%-37s %s [%s]%s %s", uVar3, uVar7, pcVar6, uVar8, uVar9);
        if (logLevel == 6) {
            local_4f08 = callstack::Callstack();
            local_4f08.Capture(2);
            local_4ba8 = callstack::CallstackResolved(local_4f08);
            local_4b50 = local_4ba8.Get(pcVar6);
            local_860 += '\n';
            pcVar6 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar4 = local_4b50.size();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>::append(&local_860,
                                                                                                         pcVar6, uVar4);
        }
    }

    // 0x100ca7610
    void Logger::Log(bool arg1, LogStream logStream, LogLevel logLevel, const char* str1, int arg5, const char* str2,
                     ...) {
        char in_AL;
        map<eastl::fixed_string<char, 32>, LogLevel>* this_02;
        int* piVar3;
        uint64_t uVar4;
        uint64_t in_XMM0_Qa;
        uint64_t in_XMM1_Qa;
        uint64_t in_XMM2_Qa;
        uint64_t in_XMM3_Qa;
        uint64_t in_XMM4_Qa;
        uint64_t in_XMM5_Qa;
        uint64_t in_XMM6_Qa;
        uint64_t in_XMM7_Qa;
        char* in_stack_00000008;
        uint8_t uStack0000000000000010;
        uint8_t local_958[48];
        uint64_t local_928;
        uint64_t local_918;
        uint64_t local_908;
        uint64_t local_8f8;
        uint64_t local_8e8;
        uint64_t local_8d8;
        uint64_t local_8c8;
        uint64_t local_8b8;
        uint64_t local_58;
        uint8_t* local_50;
        uint8_t* local_48;

        if (in_AL != '\0') {
            local_928 = in_XMM0_Qa;
            local_918 = in_XMM1_Qa;
            local_908 = in_XMM2_Qa;
            local_8f8 = in_XMM3_Qa;
            local_8e8 = in_XMM4_Qa;
            local_8d8 = in_XMM5_Qa;
            local_8c8 = in_XMM6_Qa;
            local_8b8 = in_XMM7_Qa;
        }
        uint8_t* uint8_t = &_arg1->field_56;
        Logger* local_8a0 = _arg1;
        char* local_898 = _arg5;
        auto pfVar2 = _logLevel->GetCallstackRaw();
        auto local_880 = uint8_t->find(*pfVar2);
        local_58.end();
        bool cVar1 = local_880 != local_58;
        if (!cVar1) {
            LogAssert("m_streams.find(stream.GetGroup()) != m_streams.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/logger/Logger.cpp", 142,
                      nullptr);
        }
        pfVar2 = (fixed_string<char, _32>*)_logLevel->GetCallstackRaw();
        rbtree<eastl::fixed_string<char, 32>, eastl::pair<eastl::fixed_string<char, 32> const, LogLevel>,
               eastl::less<eastl::fixed_string<char, 32>>, eastl::allocator,
               eastl::use_first<eastl::pair<eastl::fixed_string<char, 32> const, LogLevel>>, true, true>* this_01 =
            (rbtree<eastl::fixed_string<char, 32>, eastl::pair<eastl::fixed_string<char, 32> const, LogLevel>,
                    eastl::less<eastl::fixed_string<char, 32>>, eastl::allocator,
                    eastl::use_first<eastl::pair<eastl::fixed_string<char, 32> const, LogLevel>>, true,
                    true>*)(*uint8_t)[*pfVar2];
        pfVar2 = (fixed_string<char, _32>*)_logLevel->SSOBeginPtr();
        local_880 = this_01->find(*pfVar2);
        pfVar2 = (fixed_string<char, _32>*)_logLevel->GetCallstackRaw();
        (*uint8_t)[*pfVar2];
        local_58.end();
        cVar1 = local_880 != local_58;
        Logger* this_00 = local_8a0;
        if (!cVar1) {
            LogAssert("m_streams[stream.GetGroup()].find(stream.GetName()) != m_streams[stream.GetGroup()].end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/logger/Logger.cpp", 143,
                      nullptr);
        }
        if ((int)(LogLevel)str1 <= local_8a0->field_48) {
            pfVar2 = (fixed_string<char, _32>*)_logLevel->GetCallstackRaw();
            this_02 = (map<eastl::fixed_string<char, 32>, LogLevel>*)(*uint8_t)[*pfVar2];
            pfVar2 = (fixed_string<char, _32>*)_logLevel->SSOBeginPtr();
            piVar3 = (int*)(*this_02)[*pfVar2];
            if ((int)(LogLevel)str1 <= *piVar3) {
                local_48 = local_958;
                local_50 = &uStack0000000000000010;
                local_58 = 206158430256;
                local_880 = eastl::fixed_string<char, 2048>();
                _logLevel->SSOBeginPtr();
                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_880.sprintf("%s: ", uVar4);
                local_880 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true>>::
                    append_sprintf_va_list(in_stack_00000008, &local_58);
                LogMsg(this_00, ((uint32_t)logStream)._0_1_, (LogLevel)str1, local_898, (int)str2, &local_880);
            }
        }
    }

    // 0x100ca7a60
    void Logger::LogVA(bool arg1, LogLevel logLevel, const char* str1, int arg4, const char* str2,
                       __va_list_tag* va_list_tag) {
        uint32_t in_register_0000000c;
        uint64_t in_register_00000039;
        __va_list_tag* in_stack_00000008;
        fixed_string<char, 2048> local_860;

        if ((int)(LogLevel)str1 <= ((Logger*)(((uint64_t)in_register_00000039 << 8) | (uint8_t)arg1))->field_48) {
            local_860 = eastl::fixed_string<char, 2048>();
            local_860.sprintf_va_list(va_list_tag, in_stack_00000008);
            LogMsg((Logger*)(((uint64_t)in_register_00000039 << 8) | (uint8_t)arg1), (uint8_t)logLevel, (LogLevel)str1,
                   (char*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)arg4), (int)str2, &local_860);
        }
    }

    // 0x100ca7b30
    void Logger::AddSink(const shared_ptr<Sink>& sink) {
        field_104.push_back(sink);
    }

    // 0x100ca7b40
    void Logger::RemoveSink(const shared_ptr<Sink>& sink) {
        uint8_t* this_00 = &field_104;
        auto psVar1 = this_00->HeapBeginPtr();
        auto psVar2 = this_00->end();
        psVar1 = eastl::remove<shared_ptr<Sink>*, shared_ptr<Sink>>(psVar1, psVar2, sink);
        psVar2 = (shared_ptr<Sink>*)this_00->end();
        this_00->erase(psVar1, psVar2);
    }

    // 0x100ca7c60
    void Logger::RegisterStream(eastl::fixed_string<char, 32> str1, eastl::fixed_string<char, 32> str2,
                                LogLevel logLevel) {
        uint64_t uVar1;
        uint64_t uVar2;
        ReturnValue local_98;
        char local_90;

        rbtree<eastl::fixed_string<char, 32>, eastl::pair<eastl::fixed_string<char, 32> const, LogLevel>,
               eastl::less<eastl::fixed_string<char, 32>>, eastl::allocator,
               eastl::use_first<eastl::pair<eastl::fixed_string<char, 32> const, LogLevel>>, true, true>* this_00 =
            &field_56[*str2];
        auto local_80 = eastl::make_pair<eastl::fixed_string<char, 32>&, LogLevel&>(*str1, logLevel);
        eastl::rbtree<eastl::fixed_string<char, 32>, eastl::pair<eastl::fixed_string<char, 32> const, LogLevel>,
                      eastl::less<eastl::fixed_string<char, 32>>, eastl::allocator,
                      eastl::use_first<eastl::pair<eastl::fixed_string<char, 32> const, LogLevel>>, true,
                      true>::insert<eastl::pair<eastl::fixed_string<char, 32>, LogLevel>,
                                    void>(&local_98, this_00,
                                          (pair<eastl::fixed_string<char, _32>, LogLevel>*)&local_80);
        if (local_90 == '\0') {
            default_logger();
            uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            Log((Logger*)&default_logger()::static_logger, false, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/logger/Logger.cpp", 189,
                "Log group \'%s\' already contains a stream named \'%s\'", uVar1, uVar2);
        }
    }

    // 0x100ca7dd0
    unsigned int Logger::TryLogOnce(const char* str1, int arg2, const eastl::fixed_string<char, 2048>& str2) {
        unsigned long uVar6;
        fixed_set<unsigned long, 4096ul>* this_02;
        uint8_t* puVar7;
        unsigned long local_30;

        char* pcVar2 = (char*)(*(void (*)(...))TryLogOnce(char const*, int,
                                                          eastl::fixed_string<char, int> const&)::logOnceHashMap)();
        if (*pcVar2 == '\0') {
            this_02 = (fixed_set<unsigned long, 4096ul>*)(*(void (*)(...))TryLogOnce(
                char const*, int, eastl::fixed_string<char, int> const&)::logOnceHashMap)();
            new (this_02) eastl::fixed_set<unsigned long, 4096ul>();
            __tlv_atexit(PTR__fixed_map_100ee6e48, this_02, 4294967296);
            puVar7 = (uint8_t*)(*(void (*)(...))TryLogOnce(char const*, int,
                                                           eastl::fixed_string<char, int> const&)::logOnceHashMap)();
            *puVar7 = 1;
        }
        long lVar3 = eastl::hash<char const*>::operator()((hash<char const*>*)&local_30, str1);
        long lVar4 = eastl::hash<short>::operator()((hash<short>*)&local_30, arg2);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_30 = eastl::hash<char const*>::operator()((hash<char const*>*)&local_30, pcVar2);
        local_30 = lVar3 * 2 ^ lVar4 << 2 ^ local_30;
        rbtree<unsigned long, unsigned long, eastl::less<unsigned long>,
               eastl::fixed_node_allocator<40ul, 4096ul, 8ul, 0ul, true>, eastl::use_self<unsigned long>, false,
               true>* prVar5 =
            (rbtree<unsigned long, unsigned long, eastl::less<unsigned long>,
                    eastl::fixed_node_allocator<40ul, 4096ul, 8ul, 0ul, true>, eastl::use_self<unsigned long>, false,
                    true>*)(*(void (*)(...))TryLogOnce(char const*, int,
                                                       eastl::fixed_string<char, int> const&)::logOnceHashMap)();
        uint64_t local_40 = prVar5->find(local_30);
        uint64_t local_38 = prVar5->end();
        unsigned int uVar1 = local_40 != local_38;
        if ((char)uVar1 == '\0') {
            uVar6 =
                ((FastPool<MakeSharedPool<PacketT<Array<unsigned char>>, 16192>::RefCounterAndData, unsigned long>*)(*(
                     void (*)(...))TryLogOnce(char const*, int,
                                              eastl::fixed_string<char, int> const&)::logOnceHashMap)())
                    ->capacity();
            if (4095 < uVar6) {
                ((rbtree<int, eastl::pair<int const, bool>, eastl::less<int>,
                         eastl::fixed_node_allocator<40ul, 512ul, 4ul, 0ul, true>,
                         eastl::use_first<eastl::pair<int const, bool>>, true,
                         true>*)(*(void (*)(...))TryLogOnce(char const*, int,
                                                            eastl::fixed_string<char, int> const&)::logOnceHashMap)())
                    ->clear();
            }
            prVar5 = (rbtree<unsigned long, unsigned long, eastl::less<unsigned long>,
                             eastl::fixed_node_allocator<40ul, 4096ul, 8ul, 0ul, true>, eastl::use_self<unsigned long>,
                             false, true>*)(*(void (*)(...))
                                                TryLogOnce(char const*, int,
                                                           eastl::fixed_string<char, int> const&)::logOnceHashMap)();
            prVar5->insert<unsigned long&, void>(local_30);
        }
        return uVar1 ^ 1;
    }

    // 0x100cac4f0
    void ___cxx_global_var_init_9(void) {

        fixed_string<char, 32> local_60(" Uncategorised");
        fixed_string<char, 32> local_a8(" Uncategorised");
        new ((LogStream*)&LOGGER_UNCATEGORISED) LogStream(&local_60, &local_a8, 8);
    }

} // namespace jag::logger

namespace jag {
    // 0x100ca6b80
    shared_ptr_if_not_array<logger::DebugOutputSink>::type make_shared<logger::DebugOutputSink>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        DebugOutputSink* local_28[2];

        auto arg1 = aligned_alloc(40, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<logger::DebugOutputSink>::type result;
        } else {
            local_28[0] = placement_new<logger::DebugOutputSink>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<logger::DebugOutputSink>, int, logger::DebugOutputSink*&>(
                    arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag

// 0x100ca8170
void __ZL7strrchrUa9enable_ifIXLb1EEEPKci(char* param_1, int param_2) {
    __libcpp_strrchr(param_1, param_2);
}
