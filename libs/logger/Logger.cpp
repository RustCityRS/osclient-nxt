// libs/logger/Logger.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.logger

#include "Logger.h"

namespace jag::logger {
    // 0x100f29fd0, 72 bytes, __const
    logLevelString = {
        "none", "FATAL ERROR", "ERROR", "WARN", "PERF", "INFO", "TRACE", "PRINTF", "DEBUG",
    };

    // 0x100f48a10, 144 bytes, __data
    Logger::m_logLevels__ = {
        0, 0, 15081527, 1, 1, 0, 15081536, 1, 2, 0, 15081552, 1, 3, 0, 15081562, 1, 4, 0, 15081571, 1,
        5, 0, 15081580, 1, 6, 0, 15081589, 1, 7, 0, 15081599, 1, 8, 0, 15081610, 1,
    };

    // 0x103be2540, 16 bytes, __common; set at startup by ___cxx_global_var_init
    StringEnum Logger::m_logLevels = StringEnum((StringEnumEntry*)&Logger::m_logLevels__, 9);

    // 0x103be2550, 144 bytes, __common; set at startup by ___cxx_global_var_init.9
    LogStream LOGGER_UNCATEGORISED;

    // 0x1000b7910: the linker folded this into oldscape::minimenu::MinimenuEntry::GetSubjectName() const, which has identical code
    Logger::GetLogStreams();

    // 0x100ca6a40, 32 bytes, placed by class name and debug map
    // LogLevel2String(LogLevel)
    undefined* LogLevel2String(int param_1) {
        return (&logLevelString)[param_1];
    }

    // 0x100ca6a60, 32 bytes, placed by class name and debug map
    // GetDebugOutputLevel(LogLevel)
    undefined4 GetDebugOutputLevel(int param_1) {
        undefined4 uVar1;

        uVar1 = 0;
        if (param_1 - 1U < 8) {
            uVar1 = *(undefined4*)(&DAT_100d9e9c0 + (long)(int)(param_1 - 1U) * 4);
        }
        return uVar1;
    }

    // 0x100ca6a80, 48 bytes, placed by neighbouring functions
    // DebugOutputSink::Write(eastl::fixed_string<char, 2048, true, eastl::allocator> const&, LogLevel)
    void DebugOutputSink::Write(undefined8 param_1_00, undefined8 param_1, undefined4 param_3) {
        undefined4 uVar1;

        uVar1 = GetDebugOutputLevel(param_3);
        DebugOutput::WriteDebugString(param_1, uVar1);
    }

    // 0x100ca6ab0, 208 bytes, placed by class name and debug map
    // default_logger()
    undefined1* default_logger() {
        shared_ptr local_30;
        shared_ptr local_20;

        if (default_logger()::static_logger == '\0') {
            if (___cxa_guard_acquire(&default_logger()::static_logger) != 0) {
                make_shared<DebugOutputSink>((jag*)&local_20);
                shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider,
                                                                            void>(
                    (shared_ptr<oldscape::RSevenDebugPresetProvider>*)&local_30, &local_20);
                new (&default_logger()::static_logger) Logger(&local_30);
                local_30.~shared_ptr();
                local_20.~shared_ptr();
                ___cxa_atexit(PTR__Logger_100ee6828, &default_logger()::static_logger, 4294967296);
                ___cxa_guard_release(&default_logger()::static_logger);
            }
        }
        return &default_logger()::static_logger;
    }

    // 0x100ca6c10, 64 bytes, complete-object constructor, placed by class name and debug map
    // Logger::Logger(shared_ptr<Sink> const&)
    void Logger::Logger(shared_ptr* param_1) {
        Logger(this);
        (&field_104, param_1)->push_back();
    }

    // 0x100ca6c60, 224 bytes, base-object constructor, placed by class name and debug map
    // Logger::Logger()
    void Logger::Logger() {
        allocator local_68[56];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::function<void(eastl::fixed_string<char, 64, true, eastl::allocator>&)>::function(
            (function<void(eastl::fixed_string<char, 64, true, eastl::allocator>&)>*)this);
        field_48 = 8;
        eastl::allocator::allocator(local_68, "EASTL map");
        eastl::map<eastl::string, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>,
                   eastl::less<eastl::string>, eastl::allocator>::map((allocator*)&field_56);
        new (&field_104) eastl::vector<shared_ptr<Sink>, eastl::allocator>();
        std::function<void(eastl::fixed_string<char, 64, true, eastl::allocator>&)>::function<
            void (*)(eastl::fixed_string<char, 64, true, eastl::allocator>&), void>(
            (function<void(eastl::fixed_string<char, 64, true, eastl::allocator>&)>*)local_68, ThreadNameLoggingID);
        SetLoggingIdentifier(this, (function*)local_68);
        std::function<void(eastl::fixed_string<char, 64, true, eastl::allocator>&)>::~function(
            (function<void(eastl::fixed_string<char, 64, true, eastl::allocator>&)>*)local_68);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100ca6d60, 112 bytes, placed by class name and debug map
    // ThreadNameLoggingID(eastl::fixed_string<char, 64, true, eastl::allocator>&)
    void ThreadNameLoggingID(fixed_string* param_1) {
        uint uVar2;
        long lVar3;

        if (this_thread::IsMainThread() == '\0') {
            lVar3 = this_thread::GetThreadName();
            if (lVar3 == 0) {
                uVar2 = this_thread::GetThreadID();
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    sprintf((char*)param_1, "[%04X]", (ulong)uVar2);
            } else {
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    sprintf((char*)param_1, &DAT_100e6226e, lVar3);
            }
        } else {
            eastl::fixed_string<char, 16, true, eastl::allocator>::operator=(
                (fixed_string<char, 16, true, eastl::allocator>*)param_1, "[MAIN]");
        }
    }

    // 0x100ca6e20, 16 bytes, complete-object constructor, placed by class name and debug map
    // Logger::Logger(): jumps straight to the base-object constructor

    // 0x100ca6e30, 64 bytes, base-object constructor, placed by class name and debug map
    // Logger::Logger(shared_ptr<Sink> const&)
    void Logger::Logger(shared_ptr* param_1) {
        Logger(this);
        (&field_104, param_1)->push_back();
    }

    // 0x100ca6ef0, 368 bytes, placed by class name and debug map
    // Logger::Log(bool, LogLevel, char const*, int, char const*, ...)
    void Logger::Log(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5,
                     undefined8 param_6, undefined8 param_7, undefined8 param_8, Logger* param_9, undefined4 param_10,
                     int param_11, undefined8 param_12, undefined4 param_13, char* param_14, undefined1 param_15, ...) {
        char in_AL;
        fixed_string* pfVar1;
        map<eastl::fixed_string<char, 32, true, eastl::allocator>, LogLevel,
            eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>* this;
        vector* pvVar2;
        int* piVar3;
        undefined1 local_948[48];
        undefined8 local_918;
        undefined8 local_908;
        undefined8 local_8f8;
        undefined8 local_8e8;
        undefined8 local_8d8;
        undefined8 local_8c8;
        undefined8 local_8b8;
        undefined8 local_8a8;
        char* local_890;
        undefined4 local_884;
        fixed_string<char, 2048, true, eastl::allocator> local_880[2088];
        undefined8 local_58;
        undefined1* local_50;
        undefined1* local_48;
        long local_38;

        if (in_AL != '\0') {
            local_918 = param_1;
            local_908 = param_2;
            local_8f8 = param_3;
            local_8e8 = param_4;
            local_8d8 = param_5;
            local_8c8 = param_6;
            local_8b8 = param_7;
            local_8a8 = param_8;
        }
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_890 = param_14;
        local_884 = param_10;
        if (param_11 <= param_9->field_48) {
            pfVar1 = (fixed_string*)LOGGER_UNCATEGORISED.GetCallstackRaw();
            this = (map<eastl::fixed_string<char, 32, true, eastl::allocator>, LogLevel,
                        eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>*)
                eastl::map<
                    eastl::fixed_string<char, 32, true, eastl::allocator>,
                    eastl::map<eastl::fixed_string<char, 32, true, eastl::allocator>, LogLevel,
                               eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>,
                    eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>::
                operator[](
                    (map<eastl::fixed_string<char, 32, true, eastl::allocator>,
                         eastl::map<eastl::fixed_string<char, 32, true, eastl::allocator>, LogLevel,
                                    eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>,
                                    eastl::allocator>,
                         eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>*)&param_9
                        ->field_56,
                    pfVar1);
            pvVar2 = LOGGER_UNCATEGORISED.SSOBeginPtr(pfVar1);
            piVar3 = (int*)eastl::map<eastl::fixed_string<char, 32, true, eastl::allocator>, LogLevel,
                                      eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>,
                                      eastl::allocator>::operator[](this, (fixed_string*)pvVar2);
            if (param_11 <= *piVar3) {
                local_48 = local_948;
                local_50 = &param_15;
                local_58 = 206158430256;
                eastl::fixed_string<char, 2048, true, eastl::allocator>::fixed_string(local_880);
                local_880->sprintf_va_list(local_890, (__va_list_tag*)&local_58);
                LogMsg(param_9, (undefined1)local_884, param_11, param_12, param_13, local_880);
                /* WARNING: Subroutine does not return */
                local_880->~fixed_string();
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100ca71c0, 1104 bytes, placed by class name and debug map
    // Logger::LogMsg(bool, LogLevel, char const*, int, eastl::fixed_string<char, 2048, true, eastl::allocator> const&)
    void Logger::LogMsg(int param_2, int param_3, long param_4, uint param_5, fixed_string* param_6) {
        undefined8 uVar4;
        ulong uVar5;
        ulong uVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        undefined8 uVar9;
        undefined8 uVar10;
        char* pcVar11;
        shared_ptr<Sink>* this_01;
        shared_ptr<Sink>* psVar12;
        long* plVar13;
        CallstackResolved* pCVar14;
        Callstack local_4f08[50];
        tm local_4be0;
        CallstackResolved local_4ba8[2];
        time_t local_4b88;
        undefined8 local_4b80;
        undefined8 local_4b78;
        fixed_string* local_4b70;
        undefined8 local_4b68;
        CallstackResolved local_4b50[1025];
        fixed_string<char, 64, true, eastl::allocator> local_b38[104];
        undefined4 local_ad0[74];
        char local_9a8[32];
        fixed_string<char, 256, true, eastl::allocator> local_988[296];
        fixed_string<char, 2048, true, eastl::allocator> local_860[2088];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_2 != 0) {
            if (TryLogOnce((char*)this, (int)param_4, (fixed_string*)(ulong)param_5) == '\0') {
                if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                    /* WARNING: Subroutine does not return */
                    ___stack_chk_fail();
                }
                return;
            }
        }
        eastl::fixed_string<char, 2048, true, eastl::allocator>::fixed_string(local_860);
        if (param_3 == 7) {
            eastl::fixed_string<char, 32, true, eastl::allocator>::operator=(
                (fixed_string<char, 32, true, eastl::allocator>*)local_860, param_6);
            this_01 = (shared_ptr<Sink>*)(&field_104)->HeapBeginPtr();
            psVar12 = (shared_ptr<Sink>*)(&field_104)->end();
            if (this_01 != psVar12) {
                do {
                    plVar13 = (long*)shared_ptr<Sink>::operator->(this_01);
                    (**(code**)(*plVar13 + 16))(plVar13, local_860, 7);
                    this_01 = this_01 + 16;
                } while (this_01 != psVar12);
            }
            /* WARNING: Subroutine does not return */
            local_860->~fixed_string();
        }
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_988);
        local_4b68 = std::chrono::system_clock::now();
        local_4b88 = std::chrono::system_clock::to_time_t((time_point*)&local_4b68);
        _localtime_r(&local_4b88, &local_4be0);
        local_4b70 = param_6;
        _strftime(local_9a8, 32, "%d/%m/%Y %H:%M:%S", &local_4be0);
        local_4b80 = local_4b68.time_since_epoch();
        local_ad0[0] = 1;
        std::chrono::duration<long long, std::ratio<1l, 1l>>::duration<int>(&local_4f08[0].field_0, (type*)local_ad0);
        pCVar14 = local_4b50;
        std::chrono::duration<long long, std::ratio<1l, 1000000l>>::duration<long long, std::ratio<1l, 1l>>(
            (duration*)pCVar14, (type*)local_4f08);
        std::chrono::duration<long long, std::ratio<1l, 1000000l>>::operator%=(
            (duration<long long, std::ratio<1l, 1000000l>>*)&local_4b80, (duration*)pCVar14);
        local_4b78 = std::chrono::duration_cast<std::chrono::duration<long long, std::ratio<1l, 1000l>>, long long,
                                                std::ratio<1l, 1000000l>>((chrono*)&local_4b80, (duration*)pCVar14);
        uVar4 = local_4b78.count();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)local_988, "%s.%03lld", local_9a8, uVar4);
        uVar5 = __ZL7strrchrUa9enable_ifIXLb1EEEPKci(param_4, 92);
        uVar6 = __ZL7strrchrUa9enable_ifIXLb1EEEPKci(param_4, 47);
        if (uVar5 == 0) {
            uVar5 = uVar6;
        }
        if (uVar5 != 0) {
            if (uVar6 < uVar5) {
                param_4 = uVar5 + 1;
            } else {
                param_4 = uVar6 + 1;
            }
        }
        new (local_ad0) eastl::fixed_string<char, 256, true, eastl::allocator>();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)local_ad0, "%s(%d):", param_4, (ulong)param_5);
        eastl::fixed_string<char, 64, true, eastl::allocator>::fixed_string(local_b38);
        if (((Logger*)this)->operator_cast_to_bool()) {
            std::function<void(eastl::fixed_string<char, 64, true, eastl::allocator>&)>::operator()(
                (function<void(eastl::fixed_string<char, 64, true, eastl::allocator>&)>*)(Logger*)this,
                (fixed_string*)local_b38);
        }
        uVar4 = LogLevel2String(param_3);
        uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar8 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar9 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        uVar10 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true, eastl::allocator>>::
            sprintf((char*)local_860, "%-37s %s [%s]%s %s", uVar7, uVar8, uVar4, uVar9, uVar10);
        if (param_3 == 6) {
            callstack::Callstack::Callstack(local_4f08);
            local_4f08->Capture(2);
            callstack::CallstackResolved::CallstackResolved(local_4ba8, local_4f08);
            local_4b50->Get(local_4ba8);
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>::
            operator+=(
                (basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, true, eastl::allocator>>*)
                    local_860,
                '\n');
            pcVar11 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar5 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            local_860->append(pcVar11, uVar5);
            local_4b50->~fixed_string();
            local_4ba8->~CallstackResolved();
        }
        /* WARNING: Subroutine does not return */
        local_b38->~fixed_string();
    }

    // 0x100ca7610, 656 bytes, placed by class name and debug map
    // Logger::Log(bool, LogStream, LogLevel, char const*, int, char const*, ...)
    void Logger::Log(undefined8 param_1, undefined8 param_2_00, undefined8 param_3, undefined8 param_4,
                     undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, Logger* param_9,
                     undefined4 param_10, JagException* param_11, int param_12, undefined8 param_13,
                     undefined4 param_14, char* param_2, undefined1 param_16, ...) {
        undefined1* this;
        Logger* pLVar1;
        int iVar2;
        char in_AL;
        bool bVar3;
        fixed_string* pfVar4;
        map<eastl::fixed_string<char, 32, true, eastl::allocator>, LogLevel,
            eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>* this_00;
        vector* pvVar5;
        int* piVar6;
        undefined8 uVar7;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        undefined1 local_958[48];
        undefined8 local_928;
        undefined8 local_918;
        undefined8 local_908;
        undefined8 local_8f8;
        undefined8 local_8e8;
        undefined8 local_8d8;
        undefined8 local_8c8;
        undefined8 local_8b8;
        Logger* local_8a0;
        undefined8 local_898;
        int local_88c;
        undefined4 local_888;
        undefined4 local_884;
        fixed_string local_880[2088];
        undefined8 local_58;
        undefined1* local_50;
        undefined1* local_48;
        long local_38;

        if (in_AL != '\0') {
            local_928 = param_1;
            local_918 = param_2_00;
            local_908 = param_3;
            local_8f8 = param_4;
            local_8e8 = param_5;
            local_8d8 = param_6;
            local_8c8 = param_7;
            local_8b8 = param_8;
        }
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this = &param_9->field_56;
        local_8a0 = param_9;
        local_898 = param_13;
        local_88c = param_12;
        local_888 = param_14;
        local_884 = param_10;
        param_11->GetCallstackRaw();
        eastl::rbtree<
            eastl::fixed_string<char, 32, true, eastl::allocator>,
            eastl::pair<
                eastl::fixed_string<char, 32, true, eastl::allocator> const,
                eastl::map<eastl::fixed_string<char, 32, true, eastl::allocator>, LogLevel,
                           eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>>,
            eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator,
            eastl::use_first<eastl::pair<
                eastl::fixed_string<char, 32, true, eastl::allocator> const,
                eastl::map<eastl::fixed_string<char, 32, true, eastl::allocator>, LogLevel,
                           eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>>>,
            true, true>::find(local_880);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar3 = eastl::operator!=((eastl*)local_880, (hashtable_iterator_base*)&local_58, extraout_RDX);
        if (!bVar3) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_streams.find(stream.GetGroup()) != m_streams.end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/logger/Logger.cpp", 142,
                      (char*)0);
        }
        pfVar4 = (fixed_string*)param_11->GetCallstackRaw();
        eastl::map<eastl::fixed_string<char, 32, true, eastl::allocator>,
                   eastl::map<eastl::fixed_string<char, 32, true, eastl::allocator>, LogLevel,
                              eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>,
                   eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>::
        operator[](
            (map<eastl::fixed_string<char, 32, true, eastl::allocator>,
                 eastl::map<eastl::fixed_string<char, 32, true, eastl::allocator>, LogLevel,
                            eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>,
                 eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>*)this,
            pfVar4);
        param_11->SSOBeginPtr(pfVar4);
        eastl::rbtree<
            eastl::fixed_string<char, 32, true, eastl::allocator>,
            eastl::pair<eastl::fixed_string<char, 32, true, eastl::allocator> const, LogLevel>,
            eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator,
            eastl::use_first<eastl::pair<eastl::fixed_string<char, 32, true, eastl::allocator> const, LogLevel>>, true,
            true>::find(local_880);
        pfVar4 = (fixed_string*)param_11->GetCallstackRaw();
        eastl::map<eastl::fixed_string<char, 32, true, eastl::allocator>,
                   eastl::map<eastl::fixed_string<char, 32, true, eastl::allocator>, LogLevel,
                              eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>,
                   eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>::
        operator[](
            (map<eastl::fixed_string<char, 32, true, eastl::allocator>,
                 eastl::map<eastl::fixed_string<char, 32, true, eastl::allocator>, LogLevel,
                            eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>,
                 eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>*)this,
            pfVar4);
        eastl::rbtree<unsigned int,
                      eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                      eastl::less<unsigned int>, eastl::allocator,
                      eastl::use_first<eastl::pair<unsigned int const,
                                                   eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                      true, true>::end();
        bVar3 = eastl::operator!=((eastl*)local_880, (hashtable_iterator_base*)&local_58, extraout_RDX_00);
        iVar2 = local_88c;
        pLVar1 = local_8a0;
        if (!bVar3) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_streams[stream.GetGroup()].find(stream.GetName()) != m_streams[stream.GetGroup()].end()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/logger/Logger.cpp", 143,
                      (char*)0);
        }
        if (local_88c <= local_8a0->field_48) {
            pfVar4 = (fixed_string*)param_11->GetCallstackRaw();
            this_00 = (map<eastl::fixed_string<char, 32, true, eastl::allocator>, LogLevel,
                           eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>*)
                eastl::map<
                    eastl::fixed_string<char, 32, true, eastl::allocator>,
                    eastl::map<eastl::fixed_string<char, 32, true, eastl::allocator>, LogLevel,
                               eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>,
                    eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>::
                operator[](
                    (map<eastl::fixed_string<char, 32, true, eastl::allocator>,
                         eastl::map<eastl::fixed_string<char, 32, true, eastl::allocator>, LogLevel,
                                    eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>,
                                    eastl::allocator>,
                         eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>*)this,
                    pfVar4);
            pvVar5 = param_11->SSOBeginPtr(pfVar4);
            piVar6 = (int*)eastl::map<eastl::fixed_string<char, 32, true, eastl::allocator>, LogLevel,
                                      eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>,
                                      eastl::allocator>::operator[](this_00, (fixed_string*)pvVar5);
            if (iVar2 <= *piVar6) {
                local_48 = local_958;
                local_50 = &param_16;
                local_58 = 206158430256;
                new (local_880) eastl::fixed_string<char, 2048, true, eastl::allocator>();
                param_11->SSOBeginPtr(pvVar5);
                uVar7 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 2048ul, 1ul, 0ul, true,
                                                                        eastl::allocator>>::sprintf((char*)local_880,
                                                                                                    &DAT_100e6218a,
                                                                                                    uVar7);
                local_880->append_sprintf_va_list(param_2, (__va_list_tag*)&local_58);
                LogMsg(pLVar1, (undefined1)local_884, iVar2, local_898, local_888, local_880);
                /* WARNING: Subroutine does not return */
                local_880->~fixed_string();
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100ca7a60, 208 bytes, placed by class name and debug map
    // Logger::LogVA(bool, LogLevel, char const*, int, char const*, __va_list_tag*)
    void Logger::LogVA(undefined1 param_1, int param_3, undefined8 param_4, undefined4 param_5, char* param_6,
                       __va_list_tag* param_7) {
        fixed_string<char, 2048, true, eastl::allocator> local_860[2088];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_3 <= field_48) {
            eastl::fixed_string<char, 2048, true, eastl::allocator>::fixed_string(local_860);
            local_860->sprintf_va_list(param_6, param_7);
            LogMsg(this, param_1, param_3, param_4, param_5, local_860);
            /* WARNING: Subroutine does not return */
            local_860->~fixed_string();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100ca7b30, 16 bytes, placed by class name and debug map
    // Logger::AddSink(shared_ptr<Sink> const&)
    void Logger::AddSink(shared_ptr* param_1) {
        (&field_104, param_1)->push_back();
    }

    // 0x100ca7b40, 96 bytes, placed by class name and debug map
    // Logger::RemoveSink(shared_ptr<Sink> const&)
    void Logger::RemoveSink(shared_ptr* param_1) {
        shared_ptr* psVar1;
        shared_ptr* psVar2;
        undefined1* this_00;

        this_00 = &field_104;
        psVar1 = (shared_ptr*)this_00->HeapBeginPtr();
        psVar2 = (shared_ptr*)this_00->end();
        psVar1 = eastl::remove<shared_ptr<Sink>*, shared_ptr<Sink>>(psVar1, psVar2, param_1);
        psVar2 = (shared_ptr*)this_00->end();
        this_00->erase(psVar1, psVar2);
    }

    // 0x100ca7c60, 256 bytes, placed by class name and debug map
    // Logger::RegisterStream(eastl::fixed_string<char, 32, true, eastl::allocator>, eastl::fixed_string<char, 32, true, eastl::allocator>, LogLevel)
    void Logger::RegisterStream(fixed_string* param_2, fixed_string* param_3, undefined4 param_4) {
        undefined8 uVar1;
        undefined8 uVar2;
        pair local_98[8];
        char local_90;
        undefined4 local_84;
        eastl local_80[80];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_84 = param_4;
        eastl::map<eastl::fixed_string<char, 32, true, eastl::allocator>,
                   eastl::map<eastl::fixed_string<char, 32, true, eastl::allocator>, LogLevel,
                              eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>,
                   eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>::
        operator[](
            (map<eastl::fixed_string<char, 32, true, eastl::allocator>,
                 eastl::map<eastl::fixed_string<char, 32, true, eastl::allocator>, LogLevel,
                            eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>,
                 eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator>*)&field_56,
            param_3);
        eastl::make_pair<eastl::fixed_string<char, 32, true, eastl::allocator>&, LogLevel&>(local_80, param_2,
                                                                                            (LogLevel*)&local_84);
        eastl::rbtree<
            eastl::fixed_string<char, 32, true, eastl::allocator>,
            eastl::pair<eastl::fixed_string<char, 32, true, eastl::allocator> const, LogLevel>,
            eastl::less<eastl::fixed_string<char, 32, true, eastl::allocator>>, eastl::allocator,
            eastl::use_first<eastl::pair<eastl::fixed_string<char, 32, true, eastl::allocator> const, LogLevel>>, true,
            true>::insert<eastl::pair<eastl::fixed_string<char, 32, true, eastl::allocator>, LogLevel>, void>(local_98);
        local_80->~pair();
        if (local_90 == '\0') {
            default_logger();
            uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            Log(&default_logger()::static_logger, 0, 2,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/logger/Logger.cpp", 189,
                "Log group \'%s\' already contains a stream named \'%s\'", uVar1, uVar2);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100ca7dd0, 320 bytes, placed by class name and debug map
    // Logger::TryLogOnce(char const*, int, eastl::fixed_string<char, 2048, true, eastl::allocator> const&)
    ulong Logger::TryLogOnce(char* param_1, int param_2, fixed_string* param_3) {
        bool bVar1;
        char* pcVar2;
        long lVar3;
        long lVar4;
        ulong* puVar5;
        undefined7 extraout_var;
        FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                 unsigned long>* this;
        ulong uVar6;
        rbtree<int, eastl::pair<int const, bool>, eastl::less<int>,
               eastl::fixed_node_allocator<40ul, 512ul, 4ul, 0ul, true, eastl::allocator>,
               eastl::use_first<eastl::pair<int const, bool>>, true, true>* this_00;
        rbtree<unsigned long, unsigned long, eastl::less<unsigned long>,
               eastl::fixed_node_allocator<40ul, 4096ul, 8ul, 0ul, true, eastl::allocator>,
               eastl::use_self<unsigned long>, false, true>* this_01;
        fixed_set<unsigned long, 4096ul, true, eastl::less<unsigned long>, eastl::allocator>* this_02;
        undefined1* puVar7;
        undefined4 in_register_00000034;
        undefined1 auVar8[16];
        undefined8 local_40;
        undefined8 local_38;
        ulong local_30;

        pcVar2 = (char*)(*(code*)TryLogOnce(
            char const*, int, eastl::fixed_string<char, int, true, eastl::allocator> const&)::logOnceHashMap)();
        if (*pcVar2 == '\0') {
            this_02 = (fixed_set<unsigned long, 4096ul, true, eastl::less<unsigned long>, eastl::allocator>*)(*(
                code*)TryLogOnce(char const*, int,
                                 eastl::fixed_string<char, int, true, eastl::allocator> const&)::logOnceHashMap)();
            eastl::fixed_set<unsigned long, 4096ul, true, eastl::less<unsigned long>, eastl::allocator>::fixed_set(
                this_02);
            __tlv_atexit(PTR__fixed_map_100ee6e48, this_02, 4294967296);
            puVar7 = (undefined1*)(*(code*)TryLogOnce(
                char const*, int, eastl::fixed_string<char, int, true, eastl::allocator> const&)::logOnceHashMap)();
            *puVar7 = 1;
        }
        lVar3 = eastl::hash<char const*>::operator()((hash<char const*>*)&local_30,
                                                     (char*)CONCAT44(in_register_00000034, param_2));
        lVar4 = eastl::hash<short>::operator()((hash<short>*)&local_30, (short)param_3);
        pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        local_30 = eastl::hash<char const*>::operator()((hash<char const*>*)&local_30, pcVar2);
        local_30 = lVar3 * 2 ^ lVar4 << 2 ^ local_30;
        puVar5 = (ulong*)(*(code*)TryLogOnce(
            char const*, int, eastl::fixed_string<char, int, true, eastl::allocator> const&)::logOnceHashMap)();
        local_40 = eastl::rbtree<unsigned long, unsigned long, eastl::less<unsigned long>,
                                 eastl::fixed_node_allocator<40ul, 4096ul, 8ul, 0ul, true, eastl::allocator>,
                                 eastl::use_self<unsigned long>, false, true>::find(puVar5);
        auVar8 =
            eastl::rbtree<eastl::string, eastl::pair<eastl::stringconst, bool>, eastl::less<eastl::string>,
                          eastl::allocator, eastl::use_first<eastl::pair<eastl::stringconst, bool>>, true, true>::end();
        local_38 = auVar8._0_8_;
        bVar1 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_38, auVar8._8_8_);
        if (!bVar1) {
            this = (FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                             unsigned long>*)(*(code*)
                                                  TryLogOnce(
                                                      char const*, int,
                                                      eastl::fixed_string<char, int, true,
                                                                          eastl::allocator> const&)::logOnceHashMap)();
            uVar6 = FastPool<MakeSharedPool<PacketT<Array<unsigned char, eastl::allocator>>, 16192>::RefCounterAndData,
                             unsigned long>::capacity(this);
            if (4095 < uVar6) {
                this_00 =
                    (rbtree<int, eastl::pair<int const, bool>, eastl::less<int>,
                            eastl::fixed_node_allocator<40ul, 512ul, 4ul, 0ul, true, eastl::allocator>,
                            eastl::use_first<eastl::pair<int const, bool>>, true,
                            true>*)(*(code*)TryLogOnce(char const*, int,
                                                       eastl::fixed_string<char, int, true,
                                                                           eastl::allocator> const&)::logOnceHashMap)();
                eastl::rbtree<int, eastl::pair<int const, bool>, eastl::less<int>,
                              eastl::fixed_node_allocator<40ul, 512ul, 4ul, 0ul, true, eastl::allocator>,
                              eastl::use_first<eastl::pair<int const, bool>>, true, true>::clear(this_00);
            }
            this_01 =
                (rbtree<unsigned long, unsigned long, eastl::less<unsigned long>,
                        eastl::fixed_node_allocator<40ul, 4096ul, 8ul, 0ul, true, eastl::allocator>,
                        eastl::use_self<unsigned long>, false,
                        true>*)(*(code*)TryLogOnce(char const*, int,
                                                   eastl::fixed_string<char, int, true,
                                                                       eastl::allocator> const&)::logOnceHashMap)();
            eastl::rbtree<unsigned long, unsigned long, eastl::less<unsigned long>,
                          eastl::fixed_node_allocator<40ul, 4096ul, 8ul, 0ul, true, eastl::allocator>,
                          eastl::use_self<unsigned long>, false, true>::insert<unsigned long&, void>(this_01,
                                                                                                     &local_30);
        }
        return CONCAT71(extraout_var, bVar1) & 4294967295 ^ 1;
    }

    // 0x100cac4b0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init
    void ___cxx_global_var_init() {
        new (&Logger::m_logLevels) StringEnum((StringEnumEntry*)&Logger::m_logLevels__, 9);
        ___cxa_atexit(StringEnum::~StringEnum, &Logger::m_logLevels, 4294967296);
    }

    // 0x100cac4f0, 208 bytes, placed by the data it initialises
    // ___cxx_global_var_init.9
    void ___cxx_global_var_init_9() {
        fixed_string<char, 32, true, eastl::allocator> local_a8[72];
        fixed_string<char, 32, true, eastl::allocator> local_60[72];
        undefined8 local_18;

        local_18 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_60, " Uncategorised");
        eastl::fixed_string<char, 32, true, eastl::allocator>::fixed_string(local_a8, " Uncategorised");
        new (&LOGGER_UNCATEGORISED) LogStream(local_60, local_a8, 8);
        /* WARNING: Subroutine does not return */
        local_a8->~fixed_string();
    }

} // namespace jag::logger

namespace jag {
    // 0x100ca6b80, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<logger::DebugOutputSink>::type make_shared<logger::DebugOutputSink>()
    jag* make_shared<logger::DebugOutputSink>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        DebugOutputSink* local_28[2];

        pvVar1 = (void*)aligned_alloc(40, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<logger::DebugOutputSink>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<logger::DebugOutputSink>, int, logger::DebugOutputSink*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag

// 0x100ca8170, 16 bytes, placed by debug map only (low confidence)
// _ZL7strrchrUa9enable_ifIXLb1EEEPKci
void __ZL7strrchrUa9enable_ifIXLb1EEEPKci(char* param_1, int param_2) {
    __libcpp_strrchr(param_1, param_2);
}
