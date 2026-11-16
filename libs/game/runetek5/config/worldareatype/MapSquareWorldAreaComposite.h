// libs/game/runetek5/config/worldareatype/MapSquareWorldAreaComposite.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x1004c3710, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<game::MapSquareWorldAreaCompositeInner>::ref_counter_shared_trivial(unsigned long, game::MapSquareWorldAreaCompositeInner*): jumps straight to the base-object constructor

    // 0x1004c3720, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<game::MapSquareWorldAreaCompositeInner>::ref_counter_shared_trivial(unsigned long, game::MapSquareWorldAreaCompositeInner*)
    void ref_counter_shared_trivial<game::MapSquareWorldAreaCompositeInner>::ref_counter_shared_trivial(
        ulong param_1, MapSquareWorldAreaCompositeInner* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7c48 + 16;
    }

    // 0x1004c4c30, 32 bytes, inline, placed by debug map only (low confidence)
    // game::NonSparseStringPool* placement_new<game::NonSparseStringPool, shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&>(void*, shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&)
    NonSparseStringPool*
    jag::placement_new<game::NonSparseStringPool, shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>&>(
        void* param_1, shared_ptr* param_2) {
        game::NonSparseStringPool::NonSparseStringPool(param_1, param_2);
        return param_1;
    }

    // 0x1004c4c50, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::NonSparseStringPool>* placement_new<ref_counter_shared<game::NonSparseStringPool>, int, game::NonSparseStringPool*&>(void*, int&&, game::NonSparseStringPool*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<game::NonSparseStringPool>, int, game::NonSparseStringPool*&>(
        void* param_1, int* param_2, NonSparseStringPool** param_3) {
        ref_counter_shared<game::NonSparseStringPool>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1004c4c70, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::NonSparseStringPool>::ref_counter_shared(unsigned long, game::NonSparseStringPool*): jumps straight to the base-object constructor

    // 0x1004c4c80, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::NonSparseStringPool>::ref_counter_shared(unsigned long, game::NonSparseStringPool*)
    void ref_counter_shared<game::NonSparseStringPool>::ref_counter_shared(ulong param_1,
                                                                           NonSparseStringPool* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7358 + 16;
        *(ulong*)(this + 16) = param_1;
        *(NonSparseStringPool**)(this + 24) = param_2;
    }

    // 0x1004c4cc0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::NonSparseStringPool>::DeleteData()
    /* ref_counter_shared<game::SparseStringPool>::DeleteData() */

    void ref_counter_shared<game::SparseStringPool>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (**(code**)(*(long*)(*(long*)(this + 24) + lVar1) + 8))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 56;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1004c4d10, 32 bytes, inline, placed by debug map only (low confidence)
    // game::SparseStringPool* placement_new<game::SparseStringPool, shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&>(void*, shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&)
    SparseStringPool*
    jag::placement_new<game::SparseStringPool, shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>&>(
        void* param_1, shared_ptr* param_2) {
        game::SparseStringPool::SparseStringPool(param_1, param_2);
        return param_1;
    }

    // 0x1004c4d30, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::SparseStringPool>* placement_new<ref_counter_shared<game::SparseStringPool>, int, game::SparseStringPool*&>(void*, int&&, game::SparseStringPool*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<game::SparseStringPool>, int, game::SparseStringPool*&>(
        void* param_1, int* param_2, SparseStringPool** param_3) {
        ref_counter_shared<game::SparseStringPool>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1004c4d50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::SparseStringPool>::ref_counter_shared(unsigned long, game::SparseStringPool*): jumps straight to the base-object constructor

    // 0x1004c4d60, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::SparseStringPool>::ref_counter_shared(unsigned long, game::SparseStringPool*)
    void ref_counter_shared<game::SparseStringPool>::ref_counter_shared(ulong param_1, SparseStringPool* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7338 + 16;
        *(ulong*)(this + 16) = param_1;
        *(SparseStringPool**)(this + 24) = param_2;
    }

    // 0x1004c4da0, 64 bytes, inline, placed by debug map only (low confidence)
    // void ReorderArrFromBE<int>(int*, unsigned long)
    void ReorderArrFromBE<int>(int* param_1, ulong param_2) {
        if (IsLittleEndian() != '\0') {
            for (; param_2 != 0; param_2 = param_2 - 1) {
                DoByteReorder<EndianSwap, int>(param_1);
                param_1 = param_1 + 1;
            }
        }
    }

} // namespace jag

namespace jag::game {
    class MapSquareWorldAreaCompositeInner {
    public:
        MapSquareWorldAreaCompositeInner();

        // data members, from how the methods use this: 264 bytes
        char _unknown_0[256];
        undefined4 field_256; // offset 256
        char _unknown_260[4];
    };

    // 0x1004c36f0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // MapSquareWorldAreaCompositeInner::MapSquareWorldAreaCompositeInner(): jumps straight to the base-object constructor

    // 0x1004c3700, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // MapSquareWorldAreaCompositeInner::MapSquareWorldAreaCompositeInner()
    void MapSquareWorldAreaCompositeInner::MapSquareWorldAreaCompositeInner() {
        field_256 = 4294967295;
    }

} // namespace jag::game
