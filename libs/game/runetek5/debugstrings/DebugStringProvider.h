// libs/game/runetek5/debugstrings/DebugStringProvider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class DebugStringProvider {
    public:
        class IStringPool;
        DebugStringProvider(
            std::function<DataStatus const*(shared_ptr<PacketT<Array<unsigned char>>>&, int)>& callback);
        uint8_t* Fetch(int arg1, int arg2, const char** arg3);
        auto LoadPool(shared_ptr<PacketT<Array<unsigned char>>>& arg1);
        static uint8_t DISABLED[48];

    private:
        uint8_t _unknown_0[48];
        int field_48;
        uint8_t _unknown_52[4];
    };

    class DebugStringProvider::IStringPool {
    public:
        // virtual methods in vtable order
        virtual void __pure_slot_0() = 0;
        virtual ~IStringPool();
        IStringPool();
    };

    // 0x1004c2270
    DebugStringProvider::IStringPool::IStringPool() {}

} // namespace jag::game

namespace jag {
    // 0x1004c23f0
    void PacketReaderMixin<PacketT<Array<unsigned char>>>::g4sArr(int* arg1, unsigned long arg2) {
        size_t sVar1 = arg2 * 4;
        long lVar3 = *(long*)(this + 24);
        if (end() < lVar3 + sVar1) {
            LogAssert(
                "self->m_pos + sizeof(int32_t) * count <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                341, nullptr);
        }
        lVar3 = data();
        _memcpy(arg1, (void*)(lVar3 + *(long*)(this + 24)), sVar1);
        *(size_t*)(this + 24) = *(long*)(this + 24) + sVar1;
        ReorderArrFromBE<int>(arg1, arg2);
    }

} // namespace jag
