// libs/game/runetek5/debugstrings/DebugStringProvider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class DebugStringProvider {
    public:
        class IStringPool;
        DebugStringProvider(
            std::function<DataStatus const*(shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>&, int)>&);
        Fetch(int, int, char const**);
        LoadPool(shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>&);
        static /* 48 bytes */ DISABLED;

        // data members, from how the methods use this: 56 bytes
        char _unknown_0[56];
    };

    class DebugStringProvider::IStringPool {
    public:
        // virtual methods in vtable order
        virtual void __pure_slot_0() = 0;
        virtual ~IStringPool();
        IStringPool();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    // 0x1004c2270, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // DebugStringProvider::IStringPool::IStringPool()
    void DebugStringProvider::IStringPool::IStringPool() {
        field_0 = PTR_vtable_100ee7fd8 + 16;
    }

} // namespace jag::game

namespace jag {
    // 0x1004c23f0, 144 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::g4sArr(int*, unsigned long)
    void PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::g4sArr(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this, int* param_1, ulong param_2) {
        size_t sVar1;
        ulong uVar2;
        long lVar3;

        sVar1 = param_2 * 4;
        lVar3 = *(long*)(this + 24);
        uVar2 = end();
        if (uVar2 < lVar3 + sVar1) {
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos + sizeof(int32_t) * count <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                341, (char*)0);
        }
        lVar3 = data();
        _memcpy(param_1, (void*)(lVar3 + *(long*)(this + 24)), sVar1);
        *(size_t*)(this + 24) = *(long*)(this + 24) + sVar1;
        ReorderArrFromBE<int>(param_1, param_2);
    }

} // namespace jag
