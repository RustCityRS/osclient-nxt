// libs/game/runetek5/debugstrings/NonSparseStringPool.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class NonSparseStringPool {
    public:
        // virtual methods in vtable order
        virtual Lookup(int) const;
        virtual ~NonSparseStringPool();
        NonSparseStringPool(shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>&);
        void Load(shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>&);

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[32];
    };

    // 0x1004c2c60, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // NonSparseStringPool::~NonSparseStringPool(): jumps straight to the base-object destructor

    // 0x1004c2c70, 32 bytes, deleting destructor, inline, placed by class name and debug map
    // NonSparseStringPool::~NonSparseStringPool()
    void NonSparseStringPool::~NonSparseStringPool() {
        ~NonSparseStringPool(this);
        operator_delete(this);
    }

    // 0x1004c2f90, 64 bytes, base-object destructor, inline, placed by class name
    // NonSparseStringPool::~NonSparseStringPool()
    void NonSparseStringPool::~NonSparseStringPool() {
        field_0 = &PTR_Lookup_100f01a68;
        (&field_32)->~Array();
        (&field_8)->~Array();
        ~AutoSingleton();
    }

} // namespace jag::game
