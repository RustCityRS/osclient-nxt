// libs/hal/system/callstack/posix/Callstack_Posix.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.hal.system.callstack

#include "libs/hal/system/callstack/Callstack.h"

namespace jag::callstack {
    // 0x103be25e8
    eastl::basic_string::Layout CallstackResolved::m_filters;

    // 0x100cacfe0
    void output_stack_trace(eastl::fixed_string<char, 16384, false>& str, unsigned long arg2,
                            const unsigned long* arg3) {
        unsigned long uVar1;
        int iVar2;
        char* pcVar3;
        unsigned long uVar4;
        uint8_t local_58[16];
        char* local_48;

        if (arg2 != 0) {
            uVar4 = 0;
            do {
                uVar1 = arg3[uVar4];
                if (uVar1 == 0) {
                    return;
                }
                iVar2 = _dladdr(uVar1, local_58);
                pcVar3 = local_48;
                if (local_48 == nullptr) {
                    pcVar3 = "";
                }
                if (iVar2 == 0) {
                    pcVar3 = "";
                }
                str.append_sprintf("| %p, %s\n", uVar1, pcVar3);
                uVar4 = uVar4 + 1;
            } while (arg2 != uVar4);
        }
    }

    // 0x100cad070
    void output_footer(eastl::fixed_string<char, 16384, false>& str) {
        fixed_string<char, 128> local_c8("`");
        trail_with_dashes<eastl::fixed_string<char, 128>>(79, &local_c8);
        uint64_t uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        str.append_sprintf("%s", uVar1);
    }

    // 0x100cad210
    void capture_stack_back_trace_from(unsigned long arg1, unsigned long arg2, unsigned long* arg3) {
        int iVar1;
        unsigned long uVar3;
        long lVar4;
        unsigned int uVar5;
        unsigned long local_fd8[500];

        uint8_t* puStack_fe0 = (uint8_t*)4308259409;
        unsigned int uVar2 = capture_stack_back_trace(1, 500, local_fd8);
        if ((int)uVar2 < 1) {
            uVar5 = 0;
        } else {
            uVar5 = 0;
            uVar3 = 0;
            do {
                if (local_fd8[uVar3] == 0)
                    break;
                if (local_fd8[uVar3] == arg1) {
                    uVar5 = (unsigned int)uVar3;
                    break;
                }
                uVar3 = uVar3 + 1;
            } while (uVar2 != uVar3);
        }
        puStack_fe0 = (uint8_t*)4308259477;
        ___bzero(arg3, arg2 * 8);
        if ((int)uVar5 < (int)uVar2) {
            lVar4 = 1;
            do {
                arg3[lVar4 - 1] = (unsigned long)(&puStack_fe0)[uVar5 + lVar4];
                if ((int)arg2 <= lVar4)
                    break;
                iVar1 = (int)lVar4;
                lVar4 = lVar4 + 1;
            } while ((int)(uVar5 + iVar1) < (int)uVar2);
        }
    }

    // 0x100cad310
    unsigned long capture_stack_back_trace(unsigned long arg1, unsigned long arg2, unsigned long* arg3) {
        uint64_t local_40 = 0;
        unsigned long* local_28 = arg3 + arg2;
        unsigned long local_38 = arg1;
        __Unwind_Backtrace((anonymous namespace)::unwindCallback, &local_40);
        unsigned long uVar1 = (long)arg3 - (long)arg3 >> 3;
        if (uVar1 < arg2) {
            ___bzero(arg3 + uVar1, (arg2 - uVar1) * 8);
        }
        return uVar1 & 4294967295;
    }

    // 0x100cad380
    void Callstack::Capture(int arg1) {
        auto arg3 = field_8.data();
        m_stackFrames = capture_stack_back_trace((long)(arg1 + 2), 100, arg3);
    }

    // 0x100cad3c0
    void Callstack::Reset() {
        unsigned long in_RSI;

        uint64_t* puVar1 = &field_8[in_RSI];
        *puVar1 = 0;
        m_stackFrames = 0;
    }

    // 0x100cad400
    void CallstackResolved::GetLRUCacheMutex() {
        if (GetLRUCacheMutex()::m == '\0') {
            if (___cxa_guard_acquire(&GetLRUCacheMutex()::m) != 0) {
                new (&GetLRUCacheMutex()::m) std::recursive_mutex();
                ___cxa_atexit(PTR__recursive_mutex_100ee6e88, &GetLRUCacheMutex()::m, 4294967296);
                ___cxa_guard_release(&GetLRUCacheMutex()::m);
            }
        }
        return &GetLRUCacheMutex()::m;
    }

    // 0x100cad490
    void CallstackResolved::CheckForCachedResolutions(const Callstack& callstack) {
        long lVar3;
        ResolvedAddress* this_00;
        unsigned long arg1;
        ReturnValue local_68;
        ReturnValue local_58;
        unsigned long local_48;
        Callstack* local_38;

        GetLRUCache();
        int iVar2 = callstack.GetX();
        resize((long)iVar2);
        iVar2 = callstack.GetX();
        if (0 < iVar2) {
            arg1 = 0;
            local_38 = callstack;
            do {
                local_48 = callstack.GetFrameAddress((int)arg1);
                if (local_48 != 0) {
                    local_68 =
                        ((hashtable<unsigned long, eastl::pair<unsigned long const, ResolvedAddress>, eastl::allocator,
                                    eastl::use_first<eastl::pair<unsigned long const, ResolvedAddress>>,
                                    eastl::equal_to<unsigned long>, eastl::hash<unsigned long>,
                                    eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                                    false, true, true>*)&GetLRUCache()::cache)
                            ->find(local_48);
                    local_58 =
                        ((hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>,
                                    eastl::allocator,
                                    eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                    eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                    true>*)&GetLRUCache()::cache)
                            ->end();
                    if (local_68 != local_58 != '\0') {
                        lVar3 = local_68.HeapBeginPtr();
                        this_00 = (ResolvedAddress*)(*this)[arg1];
                        callstack = local_38;
                        *this_00 = (*((lVar3 + 8)));
                    }
                }
                arg1 = arg1 + 1;
                iVar2 = callstack.GetX();
            } while ((long)arg1 < (long)iVar2);
        }
    }

    // 0x100cad590
    void CallstackResolved::ResolveStack(const Callstack& callstack) {
        int iVar3;
        unsigned long arg1;
        long lVar4;
        ResolvedAddress* resolvedAddress;
        char* str;
        int iVar5;
        unsigned long arg1_00;
        ReturnValue local_250;

        int iVar2 = callstack.GetX();
        resize((long)iVar2);
        iVar2 = callstack.GetX();
        if (0 < iVar2) {
            iVar5 = 0;
            iVar2 = 0;
            do {
                arg1 = callstack.GetFrameAddress(iVar2);
                if (arg1 != 0) {
                    arg1_00 = (unsigned long)iVar5;
                    lVar4 = (*this)[arg1_00];
                    if (*(long*)(lVar4 + 832) == 0) {
                    LAB_100cad651:
                        resolvedAddress = (ResolvedAddress*)(*this)[arg1_00];
                        ResolveAddress(arg1, resolvedAddress);
                        str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        GetSquashedSignature(&local_250, str);
                        resolvedAddress->field_8 = local_250;
                    } else {
                        lVar4 = (*this)[arg1_00];
                        if (((lVar4 + 8))->empty() != '\0')
                            goto LAB_100cad651;
                    }
                    iVar5 = iVar5 + 1;
                }
                iVar2 = iVar2 + 1;
                iVar3 = callstack.GetX();
            } while (iVar2 < iVar3);
        }
    }

    // 0x100cad6f0
    void CallstackResolved::CacheResolvedEntries() {
        ResolvedAddress* resolvedAddress;
        ResolvedAddress* this_00;
        ReturnValue local_50;
        ReturnValue local_40;

        GetLRUCache();
        resolvedAddress = (ResolvedAddress*)HeapBeginPtr();
        auto pRVar2 = end();
        if (resolvedAddress != pRVar2) {
            do {
                local_50 =
                    ((hashtable<unsigned long, eastl::pair<unsigned long const, ResolvedAddress>, eastl::allocator,
                                eastl::use_first<eastl::pair<unsigned long const, ResolvedAddress>>,
                                eastl::equal_to<unsigned long>, eastl::hash<unsigned long>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                true>*)&GetLRUCache()::cache)
                        ->find(*resolvedAddress);
                local_40 =
                    ((hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                                eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                true>*)&GetLRUCache()::cache)
                        ->end();
                if (local_50 == local_40 != '\0') {
                    this_00 = (ResolvedAddress*)(*(
                        (hash_map<unsigned long, ResolvedAddress>*)&GetLRUCache()::cache))[*resolvedAddress];
                    *this_00 = *resolvedAddress;
                }
                resolvedAddress = resolvedAddress + 1;
            } while (resolvedAddress != pRVar2);
        }
    }

    // 0x100cad7a0
    void CallstackResolved::TrimStackOfGarbage() {
        bool bVar1;
        long lVar4;
        unsigned long arg1;
        basic_string<char, BucketAllocatorEASTL>* str;

        int iVar3 = size();
        if (0 < iVar3) {
            arg1 = 0;
            do {
                lVar4 = (*this)[arg1];
                str = (basic_string<char, BucketAllocatorEASTL>*)(lVar4 + 8);
                bVar1 = *str == (*((value_type*)"_main"));
                if ((((bVar1) || (bVar1 = *str == DAT_100e622f6, bVar1)) ||
                     (bVar1 = *str == (*((value_type*)"WinMain")), bVar1)) ||
                    (bVar1 = *str == (*((value_type*)"DllMain")), bVar1)) {
                    resize(arg1);
                    break;
                }
                arg1 = arg1 + 1;
                iVar3 = size();
            } while ((long)arg1 < (long)iVar3);
        }
        auto this_00 = m_filters.HeapBeginPtr();
        auto pfVar5 = m_filters.end();
        for (; this_00 != pfVar5; this_00 = this_00 + 48) {
            if (std::function::operator_cast_to_bool(this_00) != '\0') {
                std::function<void(CallstackResolved&)>::operator()((function<void(CallstackResolved&)>*)this_00, this);
            }
        }
    }

    // 0x100cad8c0
    void CallstackResolved::GetLRUCache() {

        if (GetLRUCache()::cache == '\0') {
            if (___cxa_guard_acquire(&GetLRUCache()::cache) != 0) {
                new ((hash_map<unsigned long, ResolvedAddress>*)&GetLRUCache()::cache)
                    eastl::hash_map<unsigned long, ResolvedAddress>(local_18);
                ___cxa_atexit(PTR__hash_map_100ee6dd0, &GetLRUCache()::cache, 4294967296);
                ___cxa_guard_release(&GetLRUCache()::cache);
            }
        }
        return &GetLRUCache()::cache;
    }

} // namespace jag::callstack
