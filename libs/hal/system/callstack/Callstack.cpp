// libs/hal/system/callstack/Callstack.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.callstack

#include "Callstack.h"

namespace jag::callstack {
    // 0x103be2608
    int64_t g_mainPtr;

    // 0x1000b9960: Callstack::GetStackFrames() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x1001981a0: Callstack::Callstack() has the same machine code as Error::Error()

    // 0x100cacd00
    CallstackResolved::CallstackResolved(const Callstack& callstack) : eastl::vector<ResolvedAddress>() {
        Resolve(callstack);
    }

    // 0x100cacd50
    void CallstackResolved::Resolve(const Callstack& callstack) {

        GetLRUCacheMutex();
        unique_lock<std::recursive_mutex> local_28(callstack);
        CheckForCachedResolutions(callstack);
        ResolveStack(callstack);
        CacheResolvedEntries();
        TrimStackOfGarbage();
        std::unique_lock<std::callstack>::~unique_lock(&local_28);
    }

    // 0x100cacdd0
    auto get_stack_back_trace(const char* str, unsigned long arg2, const unsigned long* arg3) {
        fixed_string<char, 16384, false> local_4050;
        output_title(&local_4050, str);
        output_stack_trace(&local_4050, arg2, arg3);
        output_footer(&local_4050);
        char* str_00 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        auto result(str_00);
        return result;
    }

    // 0x100cacec0
    void output_title(eastl::fixed_string<char, 16384, false>& str1, const char* str2) {
        fixed_string<char, 256> local_158;
        uint64_t uVar1 = this_thread::GetThreadID();
        uint64_t uVar2 = this_thread::GetThreadName();
        uint64_t uVar3 = GetBinaryAddress(g_mainPtr);
        local_158.sprintf(",-- callstack (Thread: %zu %s) (Main function: %llX)", uVar1, uVar2, uVar3);
        if (str2 != nullptr) {
            local_158 += ": ";
            local_158 += str2;
        }
        local_158 += " --";
        trail_with_dashes<eastl::fixed_string<char, 256>>(79, &local_158);
        uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        str1.append_sprintf("%s\n", uVar1);
    }

    // 0x100cad120
    void print_stack_back_trace(const char* str, unsigned long arg2, const unsigned long* arg3) {
        Logger* logger;

        fixed_string<char, 16384, false> local_4048;
        output_title(&local_4048, str);
        output_stack_trace(&local_4048, arg2, arg3);
        output_footer(&local_4048);
        logger = logger::default_logger();
        uint64_t uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger->Log(
            false, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/callstack/Callstack.cpp",
            107, "%s\n", uVar1);
    }

    // 0x100cadc10
    void CallstackResolved::Output(const char* str) const {
        fixed_string<char, 16384, false> local_4050;
        output_title(&local_4050, str);
        auto this_00 = HeapBeginPtr();
        auto pRVar1 = end();
        if (this_00 != pRVar1) {
            do {
                local_4050 += "| ";
                this_00->Format<eastl::fixed_string<char, 16384, false>>(local_4050);
                local_4050 += "\n";
                this_00 = this_00 + 1;
            } while (this_00 != pRVar1);
        }
        output_footer(&local_4050);
        auto this_01 = logger::default_logger();
        uint64_t uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        this_01->Log(
            false, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/callstack/Callstack.cpp",
            294, "%s", uVar2);
    }

    // 0x100cade50
    auto CallstackResolved::Get(const char* str) const {
        auto result;
        output_title(&result, str);
        auto this_00 = HeapBeginPtr();
        auto pRVar1 = end();
        for (; this_00 != pRVar1; this_00 = this_00 + 1) {
            result += "| ";
            this_00->Format<eastl::fixed_string<char, 16384, false>>(result);
            result += "\n";
        }
        output_footer(&result);
        return result;
    }

    // 0x100cadf00
    auto GetSquashedSignature(const char* str) {
        char cVar1;
        long lVar4;
        char* pcVar5;
        unsigned long uVar6;
        unsigned long uVar7;
        fixed_string<char, 512, false> local_250;

        auto result(str);
        long lVar2 = result.find(' ', 0);
        long lVar3 = result.find("::", 0);
        if (lVar3 != -1) {
            uVar6 = lVar2 + 1;
            uVar7 = uVar6;
            lVar3 = 0;
            do {
                do {
                    lVar4 = result.find("::", uVar7);
                    if (lVar4 == -1)
                        goto LAB_100cadfc1;
                    uVar7 = lVar4 + 2;
                    pcVar5 = (char*)(result)[uVar7];
                    lVar3 = lVar4;
                } while (*pcVar5 < 'A');
                pcVar5 = (char*)(result)[uVar7];
            } while ('Z' < *pcVar5);
        LAB_100cadfc1:
            if (lVar3 != 0) {
                local_250 = eastl::fixed_string<char, 512, false>();
                lVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, false>>::assign(
                    &local_250, (char*)(lVar4 + uVar6), lVar3 - uVar6);
                cVar1 = local_250.empty();
                if (!cVar1) {
                    while (true) {
                        pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        uVar6 = result.find(pcVar5, lVar2 + 2);
                        if (uVar6 == 18446744073709551615)
                            break;
                        lVar3 = local_250.size();
                        pcVar5 = (char*)(result)[lVar3 + uVar6];
                        cVar1 = *pcVar5;
                        uVar7 = local_250.size();
                        if (cVar1 == ':') {
                            eastl::basic_string<
                                char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, false>>::erase(&result, uVar6,
                                                                                                         uVar7 + 2);
                        } else {
                            eastl::basic_string<
                                char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, false>>::erase(&result, uVar6,
                                                                                                         uVar7);
                        }
                    }
                }
            }
        }
        return result;
    }

    // 0x100cae210
    void ResolveAddress(unsigned long arg1, ResolvedAddress& resolvedAddress) {
        char* pcVar2;
        size_t sVar3;
        unsigned long uVar4;
        char* pcVar5;
        char* local_278;
        long local_270;
        char* local_268;
        long local_260;
        uint64_t local_258;
        int local_24c;
        ReturnValue local_248;

        resolvedAddress.field_0 = arg1;
        if (_dladdr(arg1, &local_278) != 0) {
            if (local_268 != nullptr) {
                local_24c = 0;
                local_258 = 0;
                pcVar2 = (char*)___cxa_demangle(local_268, 0, &local_258, &local_24c);
                pcVar5 = pcVar2;
                if (local_24c != 0) {
                    pcVar5 = local_268;
                }
                sVar3 = _strlen(pcVar5);
                uVar4 = eastl::min_alt<unsigned long>(511, sVar3);
                (&resolvedAddress.field_8)->assign(pcVar5, uVar4);
                _free(pcVar2);
                pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                GetSquashedSignature(&local_248, pcVar5);
                resolvedAddress.field_8 = local_248;
            }
            if (local_278 != nullptr) {
                sVar3 = _strlen(local_278);
                uVar4 = eastl::min_alt<unsigned long>(255, sVar3);
                (&resolvedAddress.field_544)->assign(local_278, uVar4);
                stringtools::SanitiseFileName<256, false>(resolvedAddress.field_544);
            }
            if (local_260 != 0) {
                resolvedAddress.field_832 = local_260 - local_270;
            }
            resolvedAddress.field_0 = resolvedAddress.field_0 - local_270;
        }
    }

    // 0x100caf230
    long GetBinaryAddress(const void* arg1) {
        uint8_t local_30[8];
        long local_28;

        if (_dladdr(arg1, local_30) == 0) {
            local_28 = 0;
        }
        return (long)arg1 - local_28;
    }

    // 0x100caf5c0
    char* GetSignalErrorName(int arg1) {
        if (arg1 - 1U < 12) {
            return (&PTR_s_Hangup_detected_100f2a1a0)[(arg1 - 1U)];
        }
        return "Unknown";
    }

} // namespace jag::callstack
