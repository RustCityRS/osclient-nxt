// libs/oldscape/jagex3/sound/wave.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::sound {
    class Wave {
    public:
        ~Wave();
        Wave(int arg1, int arg2);
        Wave(int arg1, Array<signed char>&& arg2, int arg3, int arg4);
        Wave(int arg1, Array<signed char>&& arg2, int arg3, int arg4, bool arg5);
        void Normalise(int arg1);
        Wave* Decimate(Decimator& decimator);

    private:
        uint32_t field_0;
        int field_4;
        uint8_t _unknown_8[24];
        int field_32;
        int field_36;
        bool field_40;
        uint8_t _unknown_41[3];
    };

    // 0x1001380f0
    Wave::~Wave() {
        field_8.~Array();
    }

} // namespace jag::oldscape::sound

namespace jag {
    // 0x100138410
    short PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gT<short>() {
        uint64_t uVar3;
        uint64_t uVar6;

        long lVar4 = data();
        long lVar2 = *(long*)(this + 24);
        unsigned long uVar1 = lVar2 + 2;
        *(unsigned long*)(this + 24) = uVar1;
        if (end() < uVar1) {
            uVar3 = *(uint64_t*)(this + 24);
            uVar6 = end();
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                13, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        return local_2a = *(short*)(lVar4 + lVar2);
        ReorderToBE<short>(&local_2a);
        return local_2a;
    }

    // 0x100139920
    LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper() : shared_ptr() {
        *(uint64_t*)(this + 16) = 0;
        *(uint32_t*)(this + 24) = 0;
        *(uint64_t*)(this + 32) = 0;
        *(uint64_t*)(this + 40) = 0;
        *(uint64_t*)(this + 48) = 0;
    }

} // namespace jag
