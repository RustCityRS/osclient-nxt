// libs/oldscape/jagex3/sound/BitUnpacker.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

namespace jag::oldscape::sound {
    class BitUnpacker {
    public:
        BitUnpacker();
        ~BitUnpacker();
        int ReadBits(int);
        byte ReadBit();
        void SetBitPos(Array<unsigned char, eastl::allocator>&, int);

        // data members, from how the methods use this: 36 bytes
        char _unknown_0[8];
        ulong field_8;  // offset 8
        void* field_16; // offset 16
        int field_24;   // offset 24
        uint field_28;  // offset 28
        char _unknown_32[4];
    };

    // 0x100126050: the linker folded this into PacketJ<Array<unsigned char, eastl::allocator> >::PacketJ(), which has identical code
    BitUnpacker::BitUnpacker();

    // 0x100198190: the linker folded this into PacketJ<Array<unsigned char, eastl::allocator> >::~PacketJ(), which has identical code
    BitUnpacker::~BitUnpacker();

    // 0x1001a4f60: the linker folded this into PacketT<Array<unsigned char, eastl::allocator> >::PacketT(), which has identical code
    BitUnpacker::BitUnpacker();

    // 0x1001d9030: the linker folded this into VBOMapper::~VBOMapper(), which has identical code
    BitUnpacker::~BitUnpacker();

    // 0x1002930c0, 224 bytes, placed by class name and debug map
    // BitUnpacker::ReadBits(int)
    int BitUnpacker::ReadBits(int param_1) {
        byte* pbVar1;
        int iVar2;
        int iVar3;
        byte bVar4;
        int iVar5;

        iVar3 = 8 - field_28;
        bVar4 = 0;
        iVar2 = 0;
        if (iVar3 <= param_1) {
            iVar5 = 0;
            do {
                pbVar1 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                    (Array<unsigned char, eastl::allocator>*)this, (long)field_24);
                iVar2 = iVar2 + (((uint)(*pbVar1 >> ((byte)field_28 & 31)) & ~(-1 << ((byte)iVar3 & 31)))
                                 << ((byte)iVar5 & 31));
                field_28 = 0;
                field_24 = field_24 + 1;
                iVar5 = iVar5 + iVar3;
                bVar4 = (byte)iVar5;
                param_1 = param_1 - iVar3;
                iVar3 = 8;
            } while (7 < param_1);
        }
        if (0 < param_1) {
            pbVar1 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                (Array<unsigned char, eastl::allocator>*)this, (long)field_24);
            iVar2 =
                iVar2 + (((uint)(*pbVar1 >> ((byte)field_28 & 31)) & ~(-1 << ((byte)param_1 & 31))) << (bVar4 & 31));
            field_28 = field_28 + param_1;
        }
        return iVar2;
    }

    // 0x1002931a0, 64 bytes, placed by class name and debug map
    // BitUnpacker::ReadBit()
    byte BitUnpacker::ReadBit() {
        byte bVar1;
        uint uVar2;
        byte* pbVar3;
        uint uVar4;

        pbVar3 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, (long)field_24);
        bVar1 = *pbVar3;
        uVar2 = field_28;
        uVar4 = uVar2 + 1;
        field_24 = field_24 + ((int)uVar4 >> 3);
        field_28 = uVar4 & 7;
        return bVar1 >> ((byte)uVar2 & 31) & 1;
    }

    // 0x1002931e0, 48 bytes, placed by class name and debug map
    // BitUnpacker::SetBitPos(Array<unsigned char, eastl::allocator>&, int)
    void BitUnpacker::SetBitPos(Array* param_1, int param_2) {
        Array<unsigned char, eastl::allocator>::operator=((Array<unsigned char, eastl::allocator>*)this, param_1);
        field_24 = param_2;
        field_28 = 0;
    }

} // namespace jag::oldscape::sound
