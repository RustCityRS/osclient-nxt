// libs/oldscape/jagex3/sound/wave.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::sound {
    class Wave {
    public:
        ~Wave();
        Wave(int, int);
        Wave(int, Array<signed char, eastl::allocator>&&, int, int);
        Wave(int, Array<signed char, eastl::allocator>&&, int, int, bool);
        void Normalise(int);
        Wave* Decimate(Decimator&);

        // data members, from how the methods use this: 44 bytes
        undefined4 field_0; // offset 0
        int field_4;        // offset 4
        char _unknown_8[24];
        int field_32;  // offset 32
        int field_36;  // offset 36
        bool field_40; // offset 40
        char _unknown_41[3];
    };

    // 0x1001380e0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // Wave::~Wave(): jumps straight to the base-object destructor

    // 0x1001380f0, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // Wave::~Wave()
    void Wave::~Wave() {
        (&field_8)->~Array();
    }

} // namespace jag::oldscape::sound

namespace jag {
    // 0x100138410, 144 bytes, inline, placed by debug map only (low confidence)
    // short PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::gT<short>()
    short PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gT<short>(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this) {
        ulong uVar1;
        long lVar2;
        undefined8 uVar3;
        long lVar4;
        ulong uVar5;
        undefined8 uVar6;
        short local_2a;

        lVar4 = data();
        lVar2 = *(long*)(this + 24);
        uVar1 = lVar2 + 2;
        *(ulong*)(this + 24) = uVar1;
        uVar5 = end();
        if (uVar5 < uVar1) {
            uVar3 = *(undefined8*)(this + 24);
            uVar6 = end();
            /* WARNING: Subroutine does not return */
            LogAssert(
                "self->m_pos <= self->m_data.size()",
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/bytepacking/PacketMixins.inl",
                13, "Expected pos(%d) to be <= size(%d)", uVar3, uVar6);
        }
        local_2a = *(short*)(lVar4 + lVar2);
        ReorderToBE<short>(&local_2a);
        return local_2a;
    }

    // 0x100139480, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper(): jumps straight to the base-object constructor

    // 0x100139920, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // LRUHashCacheWrapper<oldscape::graphics::Pix32, unsigned long long>::LRUHashCacheWrapper()
    /* LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper()
    */

    void LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>::LRUHashCacheWrapper(
        LRUHashCacheWrapper<oldscape::DBTableIndex, unsigned long long>* this) {
        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        *(undefined8*)(this + 16) = 0;
        *(undefined4*)(this + 24) = 0;
        *(undefined8*)(this + 32) = 0;
        *(undefined8*)(this + 40) = 0;
        *(undefined8*)(this + 48) = 0;
    }

} // namespace jag
