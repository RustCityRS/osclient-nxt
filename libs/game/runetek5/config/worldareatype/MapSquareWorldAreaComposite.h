// libs/game/runetek5/config/worldareatype/MapSquareWorldAreaComposite.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x1004c3720
    ref_counter_shared_trivial<game::MapSquareWorldAreaCompositeInner>::ref_counter_shared_trivial(
        unsigned long arg1, game::MapSquareWorldAreaCompositeInner* mapSquareWorldAreaCompositeInner)
        : ref_counter_base() {}

    // 0x1004c4c30
    game::NonSparseStringPool* placement_new<game::NonSparseStringPool, shared_ptr<PacketT<Array<unsigned char>>>&>(
        void* arg1, shared_ptr<PacketT<Array<unsigned char>>>& arg2) {
        new (arg1) game::NonSparseStringPool(arg2);
        return arg1;
    }

    // 0x1004c4c50
    ref_counter_shared<game::NonSparseStringPool>*
    placement_new<ref_counter_shared<game::NonSparseStringPool>, int, game::NonSparseStringPool*&>(
        void* arg1, int&& arg2, game::NonSparseStringPool*& arg3) {
        new (arg1) ref_counter_shared<game::NonSparseStringPool>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1004c4c80
    ref_counter_shared<game::NonSparseStringPool>::ref_counter_shared(unsigned long arg1,
                                                                      game::NonSparseStringPool* nonSparseStringPool)
        : ref_counter_base() {}

    // 0x1004c4cc0
    void ref_counter_shared<game::NonSparseStringPool>::DeleteData() {
        long lVar1;
        ref_counter_shared<game::SparseStringPool> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (**(void (**)(...))(*(long*)((long)&(this[3]._vptr)->_dtor + lVar1) + 8))(
                        (long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<game::SparseStringPool> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 56;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1004c4d10
    game::SparseStringPool* placement_new<game::SparseStringPool, shared_ptr<PacketT<Array<unsigned char>>>&>(
        void* arg1, shared_ptr<PacketT<Array<unsigned char>>>& arg2) {
        new (arg1) game::SparseStringPool(arg2);
        return arg1;
    }

    // 0x1004c4d30
    ref_counter_shared<game::SparseStringPool>*
    placement_new<ref_counter_shared<game::SparseStringPool>, int, game::SparseStringPool*&>(
        void* arg1, int&& arg2, game::SparseStringPool*& arg3) {
        new (arg1) ref_counter_shared<game::SparseStringPool>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1004c4d60
    ref_counter_shared<game::SparseStringPool>::ref_counter_shared(unsigned long arg1,
                                                                   game::SparseStringPool* sparseStringPool)
        : ref_counter_base() {}

    // 0x1004c4da0
    void ReorderArrFromBE<int>(int* arg1, unsigned long arg2) {
        if (IsLittleEndian() != '\0') {
            for (; arg2 != 0; arg2 = arg2 - 1) {
                DoByteReorder<EndianSwap, int>((unsigned int*)arg1);
                arg1 = arg1 + 1;
            }
        }
    }

} // namespace jag

namespace jag::game {
    class MapSquareWorldAreaCompositeInner {
    public:
        MapSquareWorldAreaCompositeInner();

    private:
        uint8_t _unknown_0[256];
        uint32_t field_256;
        uint8_t _unknown_260[4];
    };

    // 0x1004c3700
    MapSquareWorldAreaCompositeInner::MapSquareWorldAreaCompositeInner() : field_256(4294967295) {}

} // namespace jag::game
