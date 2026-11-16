// libs/game/runetek5/debugstrings/NonSparseStringPool.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class NonSparseStringPool {
    public:
        // virtual methods in vtable order
        virtual uint64_t Lookup(int arg1) const;
        virtual ~NonSparseStringPool();
        NonSparseStringPool(shared_ptr<PacketT<Array<unsigned char>>>& arg1);
        void Load(shared_ptr<PacketT<Array<unsigned char>>>& arg1);

    private:
        uint8_t _unknown_8[32];
    };

    // 0x1004c2f90
    NonSparseStringPool::~NonSparseStringPool() {
        field_32.~Array();
        field_8.~Array();
    }

} // namespace jag::game
