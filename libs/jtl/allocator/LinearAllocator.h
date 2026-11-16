// libs/jtl/allocator/LinearAllocator.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.hal.render

namespace jag {
    class LinearAllocator {
    public:
        // virtual methods in vtable order
        virtual ~LinearAllocator();
        virtual long AllocImpl(unsigned long, unsigned long);
        virtual void FreeImpl(void*, unsigned long);
        void Clear();
        LinearAllocator(unsigned long, unsigned long);

        // data members, from how the methods use this: 80 bytes
        undefined** field_0; // offset 0, vtable pointer
        ulong field_8;       // offset 8
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
        undefined8 field_32; // offset 32
        undefined8 field_40; // offset 40
        char _unknown_48[24];
        long field_72; // offset 72
    };

    // 0x100c19390, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // LinearAllocator::~LinearAllocator(): jumps straight to the base-object destructor

    // 0x100c19650, 32 bytes, inline, placed by class name and debug map
    // LinearAllocator::Clear()
    void LinearAllocator::Clear() {
        long lVar1;

        lVar1 = (&field_48)->data();
        field_72 = lVar1;
    }

    // 0x100c329b0, 48 bytes, base-object destructor, inline, placed by class name
    // LinearAllocator::~LinearAllocator()
    void LinearAllocator::~LinearAllocator() {
        field_0 = &PTR__LinearAllocator_100f2a270;
        (&field_48)->~Array();
        ~Allocator();
    }

    // 0x100cbec70, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // LinearAllocator::~LinearAllocator()
    void LinearAllocator::~LinearAllocator() {
        ~LinearAllocator(this);
        operator_delete(this);
    }

    // 0x100cbf550, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // BucketManager::DirectAllocation::DirectAllocation()
    void BucketManager::DirectAllocation::DirectAllocation() {
        new (this) SimpleAllocator::AllocatedBlock();
        field_24 = 0;
        field_32 = 0;
    }

} // namespace jag

namespace jag::shareduniquedebug {
    class PoolPair {
    public:
        PoolPair();
        ~PoolPair();

        // data members, from how the methods use this: 1 bytes
        char _unknown_0[1];
    };

    // 0x100cbfa80, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // PoolPair::PoolPair(): jumps straight to the base-object constructor

    // 0x100cbfa90, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // PoolPair::~PoolPair(): jumps straight to the base-object destructor

    // 0x100cbfaa0, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PoolPair::PoolPair()
    void PoolPair::PoolPair() {
        eastl::fixed_vector<
            eastl::pair<eastl::fixed_string<char, 128, true, eastl::allocator>, std::function<void(SharedPoolInfo&)>>,
            200ul, true, eastl::allocator>::
            fixed_vector((fixed_vector<eastl::pair<eastl::fixed_string<char, 128, true, eastl::allocator>,
                                                   std::function<void(SharedPoolInfo&)>>,
                                       200ul, true, eastl::allocator>*)this);
    }

    // 0x100cbfcd0, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // PoolPair::~PoolPair()
    void PoolPair::~PoolPair() {
        eastl::fixed_vector<
            eastl::pair<eastl::fixed_string<char, 128, true, eastl::allocator>, std::function<void(SharedPoolInfo&)>>,
            200ul, true, eastl::allocator>::
            ~fixed_vector((fixed_vector<eastl::pair<eastl::fixed_string<char, 128, true, eastl::allocator>,
                                                    std::function<void(SharedPoolInfo&)>>,
                                        200ul, true, eastl::allocator>*)this);
    }

    // 0x100cc4600, 112 bytes, inline, placed by debug map only (low confidence)
    // GetSharedUniquePoolListSub(eastl::fixed_vector<SharedPoolInfo, 200ul, true, eastl::allocator>&, PoolPair&)::$_0::operator()(eastl::pair<eastl::fixed_string<char, 128, true, eastl::allocator>, std::function<void (SharedPoolInfo&)> > const&, eastl::pair<eastl::fixed_string<char, 128, true, eastl::allocator>, std::function<void (SharedPoolInfo&)> > const&) const
    /* GetSharedUniquePoolListSub(eastl::fixed_vector<SharedPoolInfo,
   200ul, true, eastl::allocator>&,
   PoolPair&)::$_0::TEMPNAMEPLACEHOLDERVALUE(eastl::pair<eastl::fixed_string<char,
   128, true, eastl::allocator>, std::function<void (SharedPoolInfo&)> >
   const&, eastl::pair<eastl::fixed_string<char, 128, true, eastl::allocator>, std::function<void
   (SharedPoolInfo&)> > const&) const */

    uint
    shareduniquedebug::GetSharedUniquePoolListSub(eastl::fixed_vector<SharedPoolInfo, 200ul, true, eastl::allocator>&,
                                                  PoolPair&)::$_0::operator()(pair* param_1, pair* param_2) {
        uint uVar1;
        long lVar2;
        long lVar3;

        lVar2 = param_1->find(':', 0);
        lVar3 = param_2->find(':', 0);
        if ((lVar2 != -1) == (lVar3 != -1)) {
            uVar1 = param_1->comparei();
            uVar1 = uVar1 >> 31;
        } else {
            uVar1 = (uint)(lVar2 != -1 && lVar3 == -1);
        }
        return uVar1;
    }

} // namespace jag::shareduniquedebug

// 0x100cbeeb0, 64 bytes, inline, placed by debug map only (low confidence)
// __istype(int, unsigned long)
bool __istype(int param_1, ulong param_2) {
    uint uVar2;

    if (isascii(param_1) == 0) {
        uVar2 = ___maskrune(param_1, param_2);
    } else {
        uVar2 = *(uint*)(PTR___DefaultRuneLocale_100ee4030 + (long)param_1 * 4 + 60) & (uint)param_2;
    }
    return uVar2 != 0;
}

// 0x100cbeef0, 32 bytes, inline, placed by debug map only (low confidence)
// isascii(int)
bool isascii(int param_1) {
    return (uint)param_1 < 128;
}

// 0x100cbf450, 16 bytes, placed by debug map only (low confidence)
// __libcpp_strchr(char const*, int)
void __libcpp_strchr(char* param_1, int param_2) {
    _strchr(param_1, 46);
}

namespace jag::render {
    // 0x100c193a0, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // DeferredFrameData::DeferredFrameData(): jumps straight to the base-object constructor

} // namespace jag::render

namespace jag::internal {
    // 0x100cc0f40, 64 bytes, inline, placed by debug map only (low confidence)
    // bool find_token<char, char const*>(char const&, char const*, char const*)
    bool find_token<char, char const*>(char* param_1, char* param_2, char* param_3) {
        char cVar1;
        bool bVar2;

        bVar2 = param_2 == param_3;
        if (!bVar2) {
            cVar1 = *param_2;
            while (*param_1 != cVar1) {
                param_2 = param_2 + 1;
                bVar2 = param_2 == param_3;
                if (bVar2)
                    break;
                cVar1 = *param_2;
            }
        }
        return (bool)(bVar2 ^ 1);
    }

} // namespace jag::internal
