// libs/hal/system/callstack/posix/Callstack_Posix.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.hal.system.callstack

#include "libs/hal/system/callstack/Callstack.h"

namespace jag::callstack {
    // 0x103be25e8, 32 bytes, __common; zero-initialised
    CallstackResolved::m_filters;

    // 0x100cacfe0, 144 bytes, placed by class name and debug map
    // output_stack_trace(eastl::fixed_string<char, 16384, false, eastl::allocator>&, unsigned long, unsigned long const*)
    void output_stack_trace(fixed_string* param_1, ulong param_2, ulong* param_3) {
        ulong uVar1;
        int iVar2;
        char* pcVar3;
        ulong uVar4;
        undefined1 local_58[16];
        char* local_48;

        if (param_2 != 0) {
            uVar4 = 0;
            do {
                uVar1 = param_3[uVar4];
                if (uVar1 == 0) {
                    return;
                }
                iVar2 = _dladdr(uVar1, local_58);
                pcVar3 = local_48;
                if (local_48 == (char*)0) {
                    pcVar3 = "";
                }
                if (iVar2 == 0) {
                    pcVar3 = "";
                }
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 16384ul, 1ul, 0ul, false, eastl::allocator>>::
                    append_sprintf((char*)param_1, "|    %p, %s\n", uVar1, pcVar3);
                uVar4 = uVar4 + 1;
            } while (param_2 != uVar4);
        }
    }

    // 0x100cad070, 176 bytes, placed by class name and debug map
    // output_footer(eastl::fixed_string<char, 16384, false, eastl::allocator>&)
    void output_footer(fixed_string* param_1) {
        undefined8 uVar1;
        fixed_string<char, 128, true, eastl::allocator> local_c8[168];
        undefined8 local_20;

        local_20 = *(undefined8*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_string<char, 128, true, eastl::allocator>::fixed_string(local_c8, "`");
        trail_with_dashes<eastl::fixed_string<char, 128, true, eastl::allocator>>(79, (fixed_string*)local_c8);
        uVar1 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 16384ul, 1ul, 0ul, false, eastl::allocator>>::
            append_sprintf((char*)param_1, &DAT_100e377c0, uVar1);
        /* WARNING: Subroutine does not return */
        local_c8->~fixed_string();
    }

    // 0x100cad210, 256 bytes, placed by class name and debug map
    // capture_stack_back_trace_from(unsigned long, unsigned long, unsigned long*)
    void capture_stack_back_trace_from(ulong param_1, ulong param_2, ulong* param_3) {
        int iVar1;
        uint uVar2;
        ulong uVar3;
        long lVar4;
        uint uVar5;
        undefined* puStack_fe0;
        ulong local_fd8[500];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        puStack_fe0 = (undefined*)4308259409;
        uVar2 = capture_stack_back_trace(1, 500, local_fd8);
        if ((int)uVar2 < 1) {
            uVar5 = 0;
        } else {
            uVar5 = 0;
            uVar3 = 0;
            do {
                if (local_fd8[uVar3] == 0)
                    break;
                if (local_fd8[uVar3] == param_1) {
                    uVar5 = (uint)uVar3;
                    break;
                }
                uVar3 = uVar3 + 1;
            } while (uVar2 != uVar3);
        }
        puStack_fe0 = (undefined*)4308259477;
        ___bzero(param_3, param_2 * 8);
        if ((int)uVar5 < (int)uVar2) {
            lVar4 = 1;
            do {
                param_3[lVar4 + -1] = (ulong)(&puStack_fe0)[(ulong)uVar5 + lVar4];
                if ((int)param_2 <= lVar4)
                    break;
                iVar1 = (int)lVar4;
                lVar4 = lVar4 + 1;
            } while ((int)(uVar5 + iVar1) < (int)uVar2);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            puStack_fe0 = &UNK_100cad302;
            ___stack_chk_fail();
        }
    }

    // 0x100cad310, 112 bytes, placed by class name and debug map
    // capture_stack_back_trace(unsigned long, unsigned long, unsigned long*)
    ulong capture_stack_back_trace(ulong param_1, ulong param_2, ulong* param_3) {
        ulong uVar1;
        undefined8 local_40;
        ulong local_38;
        ulong* local_28;

        local_40 = 0;
        local_28 = param_3 + param_2;
        local_38 = param_1;
        __Unwind_Backtrace((anonymous namespace)::unwindCallback, &local_40);
        uVar1 = (long)param_3 - (long)param_3 >> 3;
        if (uVar1 < param_2) {
            ___bzero(param_3 + uVar1, (param_2 - uVar1) * 8);
        }
        return uVar1 & 4294967295;
    }

    // 0x100cad380, 48 bytes, placed by class name and debug map
    // Callstack::Capture(int)
    void Callstack::Capture(int param_1) {
        ulong* puVar1;

        puVar1 = (ulong*)(&field_8)->data();
        m_stackFrames = capture_stack_back_trace((long)(param_1 + 2), 100, puVar1);
    }

    // 0x100cad3c0, 48 bytes, placed by class name and debug map
    // Callstack::Reset()
    void Callstack::Reset() {
        undefined8* puVar1;

        puVar1 = (undefined8*)std::array<unsigned long, 100ul>::operator[]((ulong)&field_8);
        *puVar1 = 0;
        m_stackFrames = 0;
    }

    // 0x100cad400, 128 bytes, placed by debug map only (low confidence)
    // CallstackResolved::GetLRUCacheMutex()
    undefined1* CallstackResolved::GetLRUCacheMutex() {
        if (GetLRUCacheMutex()::m == '\0') {
            if (___cxa_guard_acquire(&GetLRUCacheMutex()::m) != 0) {
                new (&GetLRUCacheMutex()::m) std::recursive_mutex();
                ___cxa_atexit(PTR__recursive_mutex_100ee6e88, &GetLRUCacheMutex()::m, 4294967296);
                ___cxa_guard_release(&GetLRUCacheMutex()::m);
            }
        }
        return &GetLRUCacheMutex()::m;
    }

    // 0x100cad490, 256 bytes, placed by debug map only (low confidence)
    // CallstackResolved::CheckForCachedResolutions(Callstack const&)
    void CallstackResolved::CheckForCachedResolutions(Callstack* param_1) {
        int iVar2;
        long lVar3;
        ResolvedAddress* this_00;
        hashtable_iterator_base* extraout_RDX;
        ulong uVar4;
        eastl local_68[16];
        hashtable_iterator_base local_58[16];
        Callstack* local_38;

        GetLRUCache();
        iVar2 = param_1->GetX();
        resize((long)iVar2);
        iVar2 = param_1->GetX();
        if (0 < iVar2) {
            uVar4 = 0;
            local_38 = param_1;
            do {
                if (param_1->GetFrameAddress((int)uVar4) != 0) {
                    eastl::hashtable<unsigned long, eastl::pair<unsigned long const, ResolvedAddress>, eastl::allocator,
                                     eastl::use_first<eastl::pair<unsigned long const, ResolvedAddress>>,
                                     eastl::equal_to<unsigned long>, eastl::hash<unsigned long>,
                                     eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy,
                                     false, true, true>::find((ulong*)local_68);
                    eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>,
                                     eastl::allocator,
                                     eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                     eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                     eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                    if (eastl::operator!=(local_68, local_58, extraout_RDX)) {
                        lVar3 = local_68->HeapBeginPtr();
                        this_00 = (ResolvedAddress*)eastl::vector<ResolvedAddress, eastl::allocator>::operator[](
                            (vector<ResolvedAddress, eastl::allocator>*)(CallstackResolved*)this, uVar4);
                        param_1 = local_38;
                        ResolvedAddress::operator=(this_00, (ResolvedAddress*)(lVar3 + 8));
                    }
                }
                uVar4 = uVar4 + 1;
                iVar2 = param_1->GetX();
            } while ((long)uVar4 < (long)iVar2);
        }
    }

    // 0x100cad590, 352 bytes, placed by debug map only (low confidence)
    // CallstackResolved::ResolveStack(Callstack const&)
    void CallstackResolved::ResolveStack(Callstack* param_1) {
        int iVar2;
        int iVar3;
        ulong uVar4;
        long lVar5;
        ResolvedAddress* pRVar6;
        int iVar7;
        ulong uVar8;
        fixed_string local_250[536];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        iVar2 = param_1->GetX();
        resize((long)iVar2);
        iVar2 = param_1->GetX();
        if (0 < iVar2) {
            iVar7 = 0;
            iVar2 = 0;
            do {
                uVar4 = param_1->GetFrameAddress(iVar2);
                if (uVar4 != 0) {
                    uVar8 = (ulong)iVar7;
                    lVar5 = eastl::vector<ResolvedAddress, eastl::allocator>::operator[](
                        (vector<ResolvedAddress, eastl::allocator>*)this, uVar8);
                    if (*(long*)(lVar5 + 832) == 0) {
                    LAB_100cad651:
                        pRVar6 = (ResolvedAddress*)eastl::vector<ResolvedAddress, eastl::allocator>::operator[](
                            (vector<ResolvedAddress, eastl::allocator>*)this, uVar8);
                        ResolveAddress(uVar4, pRVar6);
                        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        GetSquashedSignature((char*)local_250);
                        eastl::fixed_string<char, 512, false, eastl::allocator>::operator=(
                            (fixed_string<char, 512, false, eastl::allocator>*)&pRVar6->field_8, local_250);
                        local_250->~fixed_string();
                    } else {
                        eastl::vector<ResolvedAddress, eastl::allocator>::operator[](
                            (vector<ResolvedAddress, eastl::allocator>*)this, uVar8);
                        if (eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true,
                                                                                    eastl::allocator>>::empty() != '\0')
                            goto LAB_100cad651;
                    }
                    iVar7 = iVar7 + 1;
                }
                iVar2 = iVar2 + 1;
                iVar3 = param_1->GetX();
            } while (iVar2 < iVar3);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100cad6f0, 176 bytes, placed by debug map only (low confidence)
    // CallstackResolved::CacheResolvedEntries()
    void CallstackResolved::CacheResolvedEntries() {
        ResolvedAddress* this_00;
        ResolvedAddress* pRVar2;
        hashtable_iterator_base* extraout_RDX;
        ResolvedAddress* pRVar3;
        eastl local_50[16];
        hashtable_iterator_base local_40[16];

        GetLRUCache();
        pRVar3 = (ResolvedAddress*)HeapBeginPtr();
        pRVar2 = (ResolvedAddress*)end();
        if (pRVar3 != pRVar2) {
            do {
                eastl::hashtable<unsigned long, eastl::pair<unsigned long const, ResolvedAddress>, eastl::allocator,
                                 eastl::use_first<eastl::pair<unsigned long const, ResolvedAddress>>,
                                 eastl::equal_to<unsigned long>, eastl::hash<unsigned long>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                 true>::find((ulong*)local_50);
                eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                if (eastl::operator==(local_50, local_40, extraout_RDX)) {
                    this_00 =
                        (ResolvedAddress*)eastl::hash_map<unsigned long, ResolvedAddress, eastl::hash<unsigned long>,
                                                          eastl::equal_to<unsigned long>, eastl::allocator, false>::
                        operator[](
                            (hash_map<unsigned long, ResolvedAddress, eastl::hash<unsigned long>,
                                      eastl::equal_to<unsigned long>, eastl::allocator, false>*)&GetLRUCache()::cache,
                            (ulong*)pRVar3);
                    ResolvedAddress::operator=(this_00, pRVar3);
                }
                pRVar3 = pRVar3 + 1;
            } while (pRVar3 != pRVar2);
        }
    }

    // 0x100cad7a0, 272 bytes, placed by debug map only (low confidence)
    // CallstackResolved::TrimStackOfGarbage()
    void CallstackResolved::TrimStackOfGarbage() {
        bool bVar1;
        int iVar2;
        long lVar3;
        function* this_00;
        function* pfVar4;
        ulong uVar5;
        basic_string* pbVar6;

        iVar2 = size();
        if (0 < iVar2) {
            uVar5 = 0;
            do {
                lVar3 = eastl::vector<ResolvedAddress, eastl::allocator>::operator[](
                    (vector<ResolvedAddress, eastl::allocator>*)this, uVar5);
                pbVar6 = (basic_string*)(lVar3 + 8);
                bVar1 = eastl::operator==(pbVar6, (value_type*)"_main");
                if ((((bVar1) || (bVar1 = eastl::operator==(pbVar6, (value_type*)&DAT_100e622f6), bVar1)) ||
                     (bVar1 = eastl::operator==(pbVar6, (value_type*)"WinMain"), bVar1)) ||
                    (bVar1 = eastl::operator==(pbVar6, (value_type*)"DllMain"), bVar1)) {
                    resize(uVar5);
                    break;
                }
                uVar5 = uVar5 + 1;
                iVar2 = size();
            } while ((long)uVar5 < (long)iVar2);
        }
        this_00 = (function*)m_filters.HeapBeginPtr();
        pfVar4 = (function*)m_filters.end();
        for (; this_00 != pfVar4; this_00 = this_00 + 48) {
            bVar1 = std::function::operator_cast_to_bool(this_00);
            if (bVar1) {
                std::function<void(CallstackResolved&)>::operator()((function<void(CallstackResolved&)>*)this_00, this);
            }
        }
    }

    // 0x100cad8c0, 144 bytes, placed by debug map only (low confidence)
    // CallstackResolved::GetLRUCache()
    undefined1* CallstackResolved::GetLRUCache() {
        allocator local_18[8];

        if (GetLRUCache()::cache == '\0') {
            if (___cxa_guard_acquire(&GetLRUCache()::cache) != 0) {
                eastl::allocator::allocator(local_18, "EASTL hash_map");
                new (&GetLRUCache()::cache)
                    eastl::hash_map<unsigned long, ResolvedAddress, eastl::hash<unsigned long>,
                                    eastl::equal_to<unsigned long>, eastl::allocator, false>(local_18);
                ___cxa_atexit(PTR__hash_map_100ee6dd0, &GetLRUCache()::cache, 4294967296);
                ___cxa_guard_release(&GetLRUCache()::cache);
            }
        }
        return &GetLRUCache()::cache;
    }

} // namespace jag::callstack
