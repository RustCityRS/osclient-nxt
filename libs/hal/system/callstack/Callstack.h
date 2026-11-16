// libs/hal/system/callstack/Callstack.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.system.callstack

namespace jag::callstack {
    class Callstack {
    public:
        GetStackFrames() const;
        Callstack();
        void GetStack() const;
        void Capture(int);
        void Reset();
        GetFrameAddress(int) const;

        // data members, from how the methods use this: 16 bytes
        int field_0; // offset 0
        char _unknown_4[4];
        undefined1 field_8; // offset 8
        char _unknown_9[7];
    };

    class CallstackResolved {
    public:
        GetStack();
        ~CallstackResolved();
        CallstackResolved(Callstack const&);
        void Resolve(Callstack const&);
        GetLRUCacheMutex();
        void CheckForCachedResolutions(Callstack const&);
        void ResolveStack(Callstack const&);
        void CacheResolvedEntries();
        void TrimStackOfGarbage();
        GetLRUCache();
        void ExpireOldCacheEntries();
        ulong FindStackIndexForBaseAddress(unsigned long);
        void Output(char const*) const;
        Get(char const*) const;
        static /* 32 bytes */ m_filters;

        // data members, from how the methods use this: 16 bytes
        long field_0;             // offset 0
        ResolvedAddress* field_8; // offset 8
    };

    // 0x100189fa0, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // CallstackResolved::~CallstackResolved(): jumps straight to the base-object destructor

    // 0x1004c1af0, 16 bytes, inline, placed by class name
    // Callstack::GetStack() const
    void Callstack::GetStack() {
        (&field_8)->data();
    }

    // 0x100cad9d0, 32 bytes, inline, placed by class name and debug map
    // Callstack::GetFrameAddress(int) const
    undefined8 Callstack::GetFrameAddress(int param_1) {
        undefined8* puVar1;

        if (param_1 < field_0) {
            puVar1 = (undefined8*)std::array<unsigned long, 100ul>::operator[]((array<unsigned long, 100ul>*)&field_8,
                                                                               (long)param_1);
            return *puVar1;
        }
        return 0;
    }

    // 0x100cadad0, 80 bytes, inline, placed by debug map only (low confidence)
    // ResolvedAddress::operator=(ResolvedAddress const&)
    /* ResolvedAddress::TEMPNAMEPLACEHOLDERVALUE(ResolvedAddress const&)
    */

    ResolvedAddress* ResolvedAddress::operator=(ResolvedAddress* param_1) {
        ulong uVar1;
        undefined4 uVar2;

        field_0 = param_1->field_0;
        eastl::fixed_string<char, 512, false, eastl::allocator>::operator=(
            (fixed_string<char, 512, false, eastl::allocator>*)&field_8, (fixed_string*)&param_1->field_8);
        eastl::fixed_string<char, 256, false, eastl::allocator>::operator=(
            (fixed_string<char, 256, false, eastl::allocator>*)&field_544, (fixed_string*)&param_1->field_544);
        uVar2 = *(undefined4*)&param_1->field_828;
        uVar1 = param_1->field_832;
        field_824 = param_1->field_824;
        *(undefined4*)&field_828 = uVar2;
        field_832 = uVar1;
        return this;
    }

    // 0x100cadb50, 16 bytes, placed by debug map only (low confidence)
    // CallstackResolved::ExpireOldCacheEntries()
    void CallstackResolved::ExpireOldCacheEntries() {}

    // 0x100cadb60, 112 bytes, placed by debug map only (low confidence)
    // CallstackResolved::FindStackIndexForBaseAddress(unsigned long)
    ulong CallstackResolved::FindStackIndexForBaseAddress(ulong param_1) {
        int iVar1;
        long lVar2;
        ulong uVar3;

        iVar1 = size();
        if (0 < iVar1) {
            uVar3 = 0;
            do {
                lVar2 = eastl::vector<ResolvedAddress, eastl::allocator>::operator[](
                    (vector<ResolvedAddress, eastl::allocator>*)this, uVar3);
                if (*(ulong*)(lVar2 + 832) == param_1) {
                    return uVar3 & 4294967295;
                }
                uVar3 = uVar3 + 1;
                iVar1 = size();
            } while ((long)uVar3 < (long)iVar1);
        }
        return 4294967295;
    }

    // 0x100cadd70, 224 bytes, inline, placed by debug map only (low confidence)
    // char const* ResolvedAddress::Format<eastl::fixed_string<char, 16384, false, eastl::allocator> >(eastl::fixed_string<char, 16384, false, eastl::allocator>&) const
    char* ResolvedAddress::Format<eastl::fixed_string<char, 16384, false, eastl::allocator>>(fixed_string* param_1) {
        ulong uVar1;
        char cVar2;
        undefined8 uVar3;

        eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 16384ul, 1ul, 0ul, false, eastl::allocator>>::
            append_sprintf((char*)param_1, "%012llX", field_0);
        cVar2 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar2 == '\0') {
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 16384ul, 1ul, 0ul, false, eastl::allocator>>::
                append_sprintf((char*)param_1, &DAT_100e624e9, uVar3);
            if (field_824 != 0) {
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 16384ul, 1ul, 0ul, false, eastl::allocator>>::
                    append_sprintf((char*)param_1, &DAT_100e624ee);
            }
        }
        cVar2 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar2 == '\0') {
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 16384ul, 1ul, 0ul, false, eastl::allocator>>::
                append_sprintf((char*)param_1, &DAT_100e624f3, uVar3);
        }
        uVar1 = field_832;
        if ((uVar1 != 0) && (uVar1 < (ulong)field_0)) {
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 16384ul, 1ul, 0ul, false, eastl::allocator>>::
                append_sprintf((char*)param_1, " + %d", (ulong)(uint)((int)field_0 - (int)uVar1));
        }
        return (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x100cafa50, 128 bytes, inline, placed by class name
    // void trail_with_dashes<eastl::fixed_string<char, 256, true, eastl::allocator> >(int, eastl::fixed_string<char, 256, true, eastl::allocator>&)
    void trail_with_dashes<eastl::fixed_string<char, 256, true, eastl::allocator>>(int param_1, fixed_string* param_2) {
        int iVar1;

        if ((eastl::basic_string<char,
                                 eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() &
             18446744071562067968) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("stringOut.length() <= (eastl_size_t)std::numeric_limits<int>::max()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/callstack/"
                      "Callstack.cpp",
                      55, (char*)0);
        }
        iVar1 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (iVar1 < param_1) {
            iVar1 = param_1 - iVar1;
            do {
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>::
                operator+=(
                    (basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>*)
                        param_2,
                    "-");
                iVar1 = iVar1 + -1;
            } while (iVar1 != 0);
        }
    }

    // 0x100cafae0, 128 bytes, inline, placed by class name
    // void trail_with_dashes<eastl::fixed_string<char, 128, true, eastl::allocator> >(int, eastl::fixed_string<char, 128, true, eastl::allocator>&)
    void trail_with_dashes<eastl::fixed_string<char, 128, true, eastl::allocator>>(int param_1, fixed_string* param_2) {
        int iVar1;

        if ((eastl::basic_string<char,
                                 eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() &
             18446744071562067968) != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("stringOut.length() <= (eastl_size_t)std::numeric_limits<int>::max()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/callstack/"
                      "Callstack.cpp",
                      55, (char*)0);
        }
        iVar1 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (iVar1 < param_1) {
            iVar1 = param_1 - iVar1;
            do {
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>::
                operator+=(
                    (basic_string<char, eastl::fixed_vector_allocator<1ul, 4096ul, 1ul, 0ul, true, eastl::allocator>>*)
                        param_2,
                    "-");
                iVar1 = iVar1 + -1;
            } while (iVar1 != 0);
        }
    }

} // namespace jag::callstack
