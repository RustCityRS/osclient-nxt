// libs/game/runetek5/debugstrings/SparseStringPool.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class SparseStringPool {
    public:
        // virtual methods in vtable order
        virtual uint64_t Lookup(int arg1) const;
        virtual ~SparseStringPool();
        SparseStringPool(shared_ptr<PacketT<Array<unsigned char>>>& arg1);
        void Load(shared_ptr<PacketT<Array<unsigned char>>>& arg1);

    private:
        uint8_t _unknown_8[32];
    };

    // 0x1004c2fd0
    SparseStringPool::~SparseStringPool() {
        field_32.~Array();
        field_8.~Array();
    }

    // 0x1004c4fc0
    auto SparseStringPool::Lookup(int) const ::$_0::operator()<std::pair<int, int>, std::pair<int, int>>(
        const std::pair<int, int>& arg1, const std::pair<int, int>& arg2) const {
        return *(int*)this < *(int*)arg1;
    }

} // namespace jag::game

namespace jag {
    // 0x1004c36a0
    game::MapSquareWorldAreaCompositeInner* placement_new<game::MapSquareWorldAreaCompositeInner>(void* arg1) {
        ___bzero(arg1, 260);
        new (arg1) game::MapSquareWorldAreaCompositeInner();
        return arg1;
    }

    // 0x1004c36d0
    ref_counter_shared_trivial<game::MapSquareWorldAreaCompositeInner>*
    placement_new<ref_counter_shared_trivial<game::MapSquareWorldAreaCompositeInner>, int,
                  game::MapSquareWorldAreaCompositeInner*&>(void* arg1, int&& arg2,
                                                            game::MapSquareWorldAreaCompositeInner*& arg3) {
        new (arg1) ref_counter_shared_trivial<game::MapSquareWorldAreaCompositeInner>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag
