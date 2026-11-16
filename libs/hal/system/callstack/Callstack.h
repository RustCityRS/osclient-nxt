// libs/hal/system/callstack/Callstack.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.system.callstack

namespace jag::callstack {
    class Callstack {
    public:
        int GetStackFrames() const;
        Callstack();
        void GetStack() const;
        void Capture(int arg1);
        void Reset();
        uint64_t GetFrameAddress(int arg1) const;

    private:
        int m_stackFrames;
        uint8_t _unknown_4[4];
        uint8_t field_8;
        uint8_t _unknown_9[7];
    };

    class CallstackResolved {
    public:
        void GetStack();
        ~CallstackResolved();
        CallstackResolved(const Callstack& callstack);
        void Resolve(const Callstack& callstack);
        void GetLRUCacheMutex();
        void CheckForCachedResolutions(const Callstack& callstack);
        void ResolveStack(const Callstack& callstack);
        void CacheResolvedEntries();
        void TrimStackOfGarbage();
        void GetLRUCache();
        void ExpireOldCacheEntries();
        unsigned long FindStackIndexForBaseAddress(unsigned long arg1);
        void Output(const char* str) const;
        auto Get(const char* str) const;
        static eastl::basic_string::Layout m_filters;

    private:
        long field_0;
        ResolvedAddress* field_8;
    };

    // 0x1004c1af0
    void Callstack::GetStack() const {
        field_8.data();
    }

    // 0x100cad9d0
    uint64_t Callstack::GetFrameAddress(int arg1) const {
        uint64_t* puVar1;

        if (arg1 < m_stackFrames) {
            puVar1 = &field_8[(long)arg1];
            return *puVar1;
        }
        return 0;
    }

    // 0x100cadad0
    ResolvedAddress* ResolvedAddress::operator=(const ResolvedAddress& resolvedAddress) {
        field_0 = resolvedAddress.field_0;
        field_8 = resolvedAddress.field_8;
        field_544 = resolvedAddress.field_544;
        uint32_t uVar2 = *(uint32_t*)&resolvedAddress.field_828;
        unsigned long uVar1 = resolvedAddress.field_832;
        field_824 = resolvedAddress.field_824;
        *(uint32_t*)&field_828 = uVar2;
        field_832 = uVar1;
        return this;
    }

    // 0x100cadb50
    void CallstackResolved::ExpireOldCacheEntries() {}

    // 0x100cadb60
    unsigned long CallstackResolved::FindStackIndexForBaseAddress(unsigned long arg1) {
        long lVar2;
        unsigned long arg1_00;

        int iVar1 = size();
        if (0 < iVar1) {
            arg1_00 = 0;
            do {
                lVar2 = (*this)[arg1_00];
                if (*(unsigned long*)(lVar2 + 832) == arg1) {
                    return arg1_00 & 4294967295;
                }
                arg1_00 = arg1_00 + 1;
                iVar1 = size();
            } while ((long)arg1_00 < (long)iVar1);
        }
        return 4294967295;
    }

    // 0x100cadd70
    char const* ResolvedAddress::Format<eastl::fixed_string<char, 16384, false>>(
        eastl::fixed_string<char, 16384, false>& str) const {
        uint64_t uVar3;

        str.append_sprintf("%012llX", field_0);
        if (!(field_544.empty())) {
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            str.append_sprintf(", %s", uVar3);
            if (field_824 != 0) {
                str.append_sprintf("(%d)");
            }
        }
        if (!(field_8.empty())) {
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            str.append_sprintf(": %s", uVar3);
        }
        unsigned long uVar1 = field_832;
        if ((uVar1 != 0) && (uVar1 < (unsigned long)field_0)) {
            str.append_sprintf(" + %d", (unsigned long)(unsigned int)((int)field_0 - (int)uVar1));
        }
        return (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x100cafa50
    void trail_with_dashes<eastl::fixed_string<char, 256>>(int arg1, eastl::fixed_string<char, 256>& str) {
        if ((str.size() & 18446744071562067968) != 0) {
            LogAssert("stringOut.length() <= (eastl_size_t)std::numeric_limits<int>::max()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/callstack/"
                      "Callstack.cpp",
                      55, nullptr);
        }
        int iVar1 = str.size();
        if (iVar1 < arg1) {
            iVar1 = arg1 - iVar1;
            do {
                str += "-";
                iVar1 = iVar1 - 1;
            } while (iVar1 != 0);
        }
    }

    // 0x100cafae0
    void trail_with_dashes<eastl::fixed_string<char, 128>>(int arg1, eastl::fixed_string<char, 128>& str) {
        if ((str.size() & 18446744071562067968) != 0) {
            LogAssert("stringOut.length() <= (eastl_size_t)std::numeric_limits<int>::max()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/hal/system/callstack/"
                      "Callstack.cpp",
                      55, nullptr);
        }
        int iVar1 = str.size();
        if (iVar1 < arg1) {
            iVar1 = arg1 - iVar1;
            do {
                str += "-";
                iVar1 = iVar1 - 1;
            } while (iVar1 != 0);
        }
    }

} // namespace jag::callstack
