// libs/hal/system/callstack/Callstack.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.callstack

#include "Callstack.h"

namespace jag::callstack {
    // 0x103be2608, 8 bytes, __common; zero-initialised
    g_mainPtr;

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    int Callstack::GetStackFrames() const;

    // 0x1001838b0: the linker folded this into Error::Error(), which has identical code
    Callstack::Callstack();

    // 0x1001981a0: the linker folded this into Error::Error(), which has identical code
    Callstack::Callstack();

    // 0x100cacd00, 64 bytes, base-object constructor, placed by debug map only (low confidence)
    // CallstackResolved::CallstackResolved(Callstack const&)
    void CallstackResolved::CallstackResolved(Callstack* param_1) {
        new (this) eastl::vector<ResolvedAddress, eastl::allocator>();
        Resolve(this, param_1);
    }

    // 0x100cacd50, 112 bytes, placed by debug map only (low confidence)
    // CallstackResolved::Resolve(Callstack const&)
    void CallstackResolved::Resolve(Callstack* param_1) {
        recursive_mutex local_28[16];

        GetLRUCacheMutex();
        std::unique_lock<std::recursive_mutex>::unique_lock(local_28);
        CheckForCachedResolutions(this, param_1);
        ResolveStack(this, param_1);
        CacheResolvedEntries(this);
        TrimStackOfGarbage(this);
        local_28->~unique_lock();
    }

    // 0x100cacdc0, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // CallstackResolved::CallstackResolved(Callstack const&): jumps straight to the base-object constructor

    // 0x100cacdd0, 240 bytes, placed by class name and debug map
    // get_stack_back_trace(char const*, unsigned long, unsigned long const*)
    callstack* get_stack_back_trace(char* param_1, ulong param_2, ulong* param_3) {
        char* pcVar1;
        allocator local_4058[8];
        fixed_string local_4050[16408];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 16384, false, eastl::allocator>::fixed_string();
        output_title(local_4050, param_1);
        output_stack_trace(local_4050, param_2, param_3);
        output_footer(local_4050);
        pcVar1 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::allocator::allocator(local_4058, "EASTL basic_string");
        new (this) eastl::string(pcVar1, local_4058);
        local_4050->~fixed_string();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return this;
    }

    // 0x100cacec0, 288 bytes, placed by class name and debug map
    // output_title(eastl::fixed_string<char, 16384, false, eastl::allocator>&, char const*)
    void output_title(fixed_string* param_1, char* param_2) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        fixed_string<char, 256, true, eastl::allocator> local_158[296];
        undefined8 local_30;

        local_30 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_158);
        uVar1 = this_thread::GetThreadID();
        uVar2 = this_thread::GetThreadName();
        uVar3 = GetBinaryAddress(g_mainPtr);
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::sprintf(
            (char*)local_158, ",-- callstack (Thread: %zu %s) (Main function: %llX)", uVar1, uVar2, uVar3);
        if (param_2 != (char*)0) {
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>::
            operator+=(
                (basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>*)
                    local_158,
                ": ");
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>::
            operator+=(
                (basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>*)
                    local_158,
                param_2);
        }
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>::
        operator+=((basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>*)
                       local_158,
                   " --");
        trail_with_dashes<eastl::fixed_string<char, 256, true, eastl::allocator>>(79, (fixed_string*)local_158);
        uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 16384ul, 1ul, 0ul, false, eastl::allocator>>::
            append_sprintf((char*)param_1, &DAT_100e622ec, uVar1);
        /* WARNING: Subroutine does not return */
        local_158->~fixed_string();
    }

    // 0x100cad120, 240 bytes, placed by __FILE__ string
    // print_stack_back_trace(char const*, unsigned long, unsigned long const*)
    void print_stack_back_trace(char* param_1, ulong param_2, ulong* param_3) {
        undefined8 uVar1;
        undefined8 uVar2;
        fixed_string local_4048[16408];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 16384, false, eastl::allocator>::fixed_string();
        output_title(local_4048, param_1);
        output_stack_trace(local_4048, param_2, param_3);
        output_footer(local_4048);
        uVar1 = logger::default_logger();
        uVar2 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(
            uVar1, 0, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/callstack/Callstack.cpp",
            107, &DAT_100e622ec, uVar2);
        local_4048->~fixed_string();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100cadc10, 336 bytes, placed by __FILE__ string
    // CallstackResolved::Output(char const*) const
    void CallstackResolved::Output(char* param_1) {
        ResolvedAddress* this_00;
        ResolvedAddress* pRVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        fixed_string local_4050[16408];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 16384, false, eastl::allocator>::fixed_string();
        output_title(local_4050, param_1);
        this_00 = (ResolvedAddress*)HeapBeginPtr();
        pRVar1 = (ResolvedAddress*)end();
        if (this_00 != pRVar1) {
            do {
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 16384ul, 1ul, 0ul, false, eastl::allocator>>::
                operator+=(
                    (basic_string<char,
                                  eastl::fixed_vector_allocator<1ul, 16384ul, 1ul, 0ul, false, eastl::allocator>>*)
                        local_4050,
                    "| ");
                ResolvedAddress::Format<eastl::fixed_string<char, 16384, false, eastl::allocator>>(this_00, local_4050);
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 16384ul, 1ul, 0ul, false, eastl::allocator>>::
                operator+=(
                    (basic_string<char,
                                  eastl::fixed_vector_allocator<1ul, 16384ul, 1ul, 0ul, false, eastl::allocator>>*)
                        local_4050,
                    "\n");
                this_00 = this_00 + 1;
            } while (this_00 != pRVar1);
        }
        output_footer(local_4050);
        uVar2 = logger::default_logger();
        uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        logger::Logger::Log(
            uVar2, 0, 7,
            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/callstack/Callstack.cpp",
            294, &DAT_100e377c0, uVar3);
        local_4050->~fixed_string();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100cade50, 176 bytes, placed by neighbouring functions
    // CallstackResolved::Get(char const*) const
    CallstackResolved* CallstackResolved::Get(char* param_1) {
        ResolvedAddress* this_00;
        ResolvedAddress* pRVar1;
        char* in_RDX;

        eastl::fixed_string<char, 16384, false, eastl::allocator>::fixed_string();
        output_title((fixed_string*)this, in_RDX);
        this_00 = (ResolvedAddress*)param_1->HeapBeginPtr();
        pRVar1 = (ResolvedAddress*)param_1->end();
        for (; this_00 != pRVar1; this_00 = this_00 + 1) {
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 16384ul, 1ul, 0ul, false, eastl::allocator>>::
            operator+=(
                (basic_string<char,
                              eastl::fixed_vector_allocator<1ul, 16384ul, 1ul, 0ul, false, eastl::allocator>>*)this,
                "| ");
            ResolvedAddress::Format<eastl::fixed_string<char, 16384, false, eastl::allocator>>(this_00,
                                                                                               (fixed_string*)this);
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 16384ul, 1ul, 0ul, false, eastl::allocator>>::
            operator+=(
                (basic_string<char,
                              eastl::fixed_vector_allocator<1ul, 16384ul, 1ul, 0ul, false, eastl::allocator>>*)this,
                "\n");
        }
        output_footer((fixed_string*)this);
        return this;
    }

    // 0x100cadf00, 496 bytes, placed by class name
    // GetSquashedSignature(char const*)
    char* GetSquashedSignature(char* param_1) {
        char cVar1;
        long lVar2;
        long lVar3;
        long lVar4;
        char* pcVar5;
        ulong uVar6;
        ulong uVar7;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, false, eastl::allocator>> local_250[536];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 512, false, eastl::allocator>::fixed_string(param_1);
        lVar2 = param_1->find(' ', 0);
        lVar3 = param_1->find("::", 0);
        if (lVar3 != -1) {
            uVar6 = lVar2 + 1;
            uVar7 = uVar6;
            lVar3 = 0;
            do {
                do {
                    lVar4 = param_1->find("::", uVar7);
                    if (lVar4 == -1)
                        goto LAB_100cadfc1;
                    uVar7 = lVar4 + 2;
                    pcVar5 = (char*)eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, false, eastl::allocator>>::
                    operator[](
                        (basic_string<char,
                                      eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, false, eastl::allocator>>*)
                            param_1,
                        uVar7);
                    lVar3 = lVar4;
                } while (*pcVar5 < 'A');
                pcVar5 = (char*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, false, eastl::allocator>>::
                operator[](
                    (basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, false, eastl::allocator>>*)
                        param_1,
                    uVar7);
            } while ('Z' < *pcVar5);
        LAB_100cadfc1:
            if (lVar3 != 0) {
                eastl::fixed_string<char, 512, false, eastl::allocator>::fixed_string();
                lVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, false,
                                                                        eastl::allocator>>::assign(local_250,
                                                                                                   (char*)(lVar4 +
                                                                                                           uVar6),
                                                                                                   lVar3 - uVar6);
                cVar1 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                if (cVar1 == '\0') {
                    while (true) {
                        pcVar5 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        uVar6 = param_1->find(pcVar5, lVar2 + 2);
                        if (uVar6 == 18446744073709551615)
                            break;
                        lVar3 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                        pcVar5 = (char*)eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, false, eastl::allocator>>::
                        operator[]((basic_string<char, eastl::fixed_vector_allocator<1ul, 512ul, 1ul, 0ul, false,
                                                                                     eastl::allocator>>*)param_1,
                                   lVar3 + uVar6);
                        cVar1 = *pcVar5;
                        uVar7 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
                        if (cVar1 == ':') {
                            param_1->erase(uVar6, uVar7 + 2);
                        } else {
                            param_1->erase(uVar6, uVar7);
                        }
                    }
                }
                local_250->~fixed_string();
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_1;
    }

    // 0x100cae210, 400 bytes, placed by class name
    // ResolveAddress(unsigned long, ResolvedAddress&)
    void ResolveAddress(ulong param_1, ResolvedAddress* param_2) {
        char* pcVar2;
        size_t sVar3;
        ulong uVar4;
        char* pcVar5;
        char* local_278;
        long local_270;
        char* local_268;
        long local_260;
        undefined8 local_258;
        int local_24c;
        fixed_string local_248[536];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        param_2->field_0 = param_1;
        if (_dladdr(param_1, &local_278) != 0) {
            if (local_268 != (char*)0) {
                local_24c = 0;
                local_258 = 0;
                pcVar2 = (char*)___cxa_demangle(local_268, 0, &local_258, &local_24c);
                pcVar5 = pcVar2;
                if (local_24c != 0) {
                    pcVar5 = local_268;
                }
                sVar3 = _strlen(pcVar5);
                uVar4 = eastl::min_alt<unsigned long>(511, sVar3);
                (&param_2->field_8, pcVar5, uVar4)->assign();
                _free(pcVar2);
                eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                GetSquashedSignature((char*)local_248);
                eastl::fixed_string<char, 512, false, eastl::allocator>::operator=(
                    (fixed_string<char, 512, false, eastl::allocator>*)&param_2->field_8, local_248);
                local_248->~fixed_string();
            }
            if (local_278 != (char*)0) {
                sVar3 = _strlen(local_278);
                uVar4 = eastl::min_alt<unsigned long>(255, sVar3);
                (&param_2->field_544, local_278, uVar4)->assign();
                stringtools::SanitiseFileName<256, false, eastl::allocator>((fixed_string*)&param_2->field_544);
            }
            if (local_260 != 0) {
                param_2->field_832 = local_260 - local_270;
            }
            param_2->field_0 = param_2->field_0 - local_270;
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100caf230, 48 bytes, placed by class name
    // GetBinaryAddress(void const*)
    long GetBinaryAddress(void* param_1) {
        undefined1 local_30[8];
        long local_28;

        if (_dladdr(param_1, local_30) == 0) {
            local_28 = 0;
        }
        return (long)param_1 - local_28;
    }

    // 0x100caf5c0, 48 bytes, placed by class name
    // GetSignalErrorName(int)
    char* GetSignalErrorName(int param_1) {
        if (param_1 - 1U < 12) {
            return (&PTR_s_Hangup_detected_100f2a1a0)[(int)(param_1 - 1U)];
        }
        return "Unknown";
    }

} // namespace jag::callstack
