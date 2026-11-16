// libs/jtl/allocator/LinearAllocator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.hal.render

namespace jag {
    class LinearAllocator {
    public:
        // virtual methods in vtable order
        virtual ~LinearAllocator();
        virtual long AllocImpl(unsigned long arg1, unsigned long arg2);
        virtual void FreeImpl(void* arg1, unsigned long arg2);
        void Clear();
        LinearAllocator(unsigned long arg1, unsigned long arg2);

    private:
        unsigned long field_8;
        uint64_t field_16;
        uint64_t field_24;
        uint64_t field_32;
        uint64_t field_40;
        uint8_t _unknown_48[24];
        long field_72;
    };

    // 0x100c19650
    void LinearAllocator::Clear() {
        field_72 = field_48.data();
    }

    // 0x100c329b0
    LinearAllocator::~LinearAllocator() {
        field_48.~Array();
    }

    // 0x100cbf550
    BucketManager::DirectAllocation::DirectAllocation() : SimpleAllocator::AllocatedBlock(), field_24(0), field_32(0) {}

} // namespace jag

namespace jag::shareduniquedebug {
    class PoolPair {
    public:
        PoolPair();
        ~PoolPair();

        uint8_t _unknown_0[1];
    };

    // 0x100cbfaa0
    PoolPair::PoolPair()
        : eastl::fixed_vector<eastl::pair<eastl::fixed_string<char, 128>, std::function<void(SharedPoolInfo&)>>,
                              200ul>() {}

    // 0x100cbfcd0
    PoolPair::~PoolPair() {}

    // 0x100cc4600
    unsigned int GetSharedUniquePoolListSub(eastl::fixed_vector<SharedPoolInfo, 200ul>&, PoolPair&)::$_0::operator()(
        eastl::pair<eastl::fixed_string<char, 128>, std::function<void(SharedPoolInfo&)>> const& arg1,
        eastl::pair<eastl::fixed_string<char, 128>, std::function<void(SharedPoolInfo&)>> const& arg2) const {
        unsigned int uVar1;

        long lVar2 = find(':', 0);
        long lVar3 = arg1.find(':', 0);
        if ((lVar2 != -1) == (lVar3 != -1)) {
            uVar1 = comparei(arg1);
            uVar1 = uVar1 >> 31;
        } else {
            uVar1 = (unsigned int)(lVar2 != -1 && lVar3 == -1);
        }
        return uVar1;
    }

} // namespace jag::shareduniquedebug

// 0x100cbeeb0
bool __istype(int arg1, unsigned long arg2) {
    unsigned int uVar2;

    if (isascii(arg1) == 0) {
        uVar2 = ___maskrune(arg1, arg2);
    } else {
        uVar2 = *(unsigned int*)(PTR___DefaultRuneLocale_100ee4030 + (long)arg1 * 4 + 60) & (unsigned int)arg2;
    }
    return uVar2 != 0;
}

// 0x100cbeef0
bool isascii(int arg1) {
    return (unsigned int)arg1 < 128;
}

// 0x100cbf450
void __libcpp_strchr(const char* str, int arg2) {
    _strchr(str, 46);
}

namespace jag::internal {
    // 0x100cc0f40
    bool find_token<char, char const*>(const char& str1, const char* str2, const char* str3) {
        char cVar1;

        bool bVar2 = str2 == str3;
        if (!bVar2) {
            cVar1 = *str2;
            while (str1 != cVar1) {
                str2 = str2 + 1;
                bVar2 = str2 == str3;
                if (bVar2)
                    break;
                cVar1 = *str2;
            }
        }
        return (bool)(bVar2 ^ 1);
    }

} // namespace jag::internal
