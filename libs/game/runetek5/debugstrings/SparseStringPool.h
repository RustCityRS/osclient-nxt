// libs/game/runetek5/debugstrings/SparseStringPool.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class SparseStringPool {
    public:
        // virtual methods in vtable order
        virtual Lookup(int) const;
        virtual ~SparseStringPool();
        SparseStringPool(shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>&);
        void Load(shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>&);

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[32];
    };

    // 0x1004c2c90, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // SparseStringPool::~SparseStringPool(): jumps straight to the base-object destructor

    // 0x1004c2ca0, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // SparseStringPool::~SparseStringPool()
    void SparseStringPool::~SparseStringPool() {
        ~SparseStringPool(this);
        operator_delete(this);
    }

    // 0x1004c2fd0, 64 bytes, base-object destructor, inline, placed by class name and debug map
    // SparseStringPool::~SparseStringPool()
    void SparseStringPool::~SparseStringPool() {
        field_0 = &PTR_Lookup_100f01a90;
        (&field_32)->~Array();
        (&field_8)->~Array();
        ~AutoSingleton();
    }

    // 0x1004c4fc0, 16 bytes, inline, placed by class name
    // auto SparseStringPool::Lookup(int) const::$_0::operator()<std::pair<int, int>, std::pair<int, int> >(std::pair<int, int> const&, std::pair<int, int> const&) const
    /* auto SparseStringPool::Lookup(int) const::$_0::TEMPNAMEPLACEHOLDERVALUE(std::pair<int,
   int> const&, std::pair<int, int> const&) const */

    _func_Lookup_int* const ::$_0::operator()(pair * param_1, pair * param_2) {
        return (_func_Lookup_int*)(ulong)CONCAT31((int3)((uint) * (int*)param_1 >> 8), *(int*)param_1 < *(int*)param_2);
    }

} // namespace jag::game

namespace jag {
    // 0x1004c36a0, 48 bytes, inline, placed by debug map only (low confidence)
    // game::MapSquareWorldAreaCompositeInner* placement_new<game::MapSquareWorldAreaCompositeInner>(void*)
    MapSquareWorldAreaCompositeInner* placement_new<game::MapSquareWorldAreaCompositeInner>(void* param_1) {
        ___bzero(param_1, 260);
        game::MapSquareWorldAreaCompositeInner::MapSquareWorldAreaCompositeInner(param_1);
        return param_1;
    }

    // 0x1004c36d0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<game::MapSquareWorldAreaCompositeInner>* placement_new<ref_counter_shared_trivial<game::MapSquareWorldAreaCompositeInner>, int, game::MapSquareWorldAreaCompositeInner*&>(void*, int&&, game::MapSquareWorldAreaCompositeInner*&)
    ref_counter_shared_trivial*
    jag::placement_new<ref_counter_shared_trivial<game::MapSquareWorldAreaCompositeInner>, int,
                       game::MapSquareWorldAreaCompositeInner*&>(void* param_1, int* param_2,
                                                                 MapSquareWorldAreaCompositeInner** param_3) {
        ref_counter_shared_trivial<game::MapSquareWorldAreaCompositeInner>::ref_counter_shared_trivial(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

} // namespace jag
