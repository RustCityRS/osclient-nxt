// libs/oldscape/jagex3/sound/BitUnpacker.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

namespace jag::oldscape::sound {
    class BitUnpacker {
    public:
        BitUnpacker();
        ~BitUnpacker();
        int ReadBits(int arg1);
        uint8_t ReadBit();
        void SetBitPos(Array<unsigned char>& arg1, int arg2);

    private:
        uint8_t _unknown_0[8];
        unsigned long field_8;
        void* field_16;
        int field_24;
        unsigned int field_28;
        uint8_t _unknown_32[4];
    };

    // 0x1001a4f60: BitUnpacker::BitUnpacker() has the same machine code as PacketT<Array<unsigned char>>::PacketT()

    // 0x1001d9030: BitUnpacker::~BitUnpacker() has the same machine code as VBOMapper::~VBOMapper()

    // 0x1002930c0
    int BitUnpacker::ReadBits(int arg1) {
        uint8_t* pbVar1;
        int iVar5;

        int iVar3 = 8 - field_28;
        uint8_t bVar4 = 0;
        int iVar2 = 0;
        if (iVar3 <= arg1) {
            iVar5 = 0;
            do {
                pbVar1 = (uint8_t*)(*this)[(long)field_24];
                iVar2 = iVar2 + (((unsigned int)(*pbVar1 >> ((uint8_t)field_28 & 31)) & ~(-1 << ((uint8_t)iVar3 & 31)))
                                 << ((uint8_t)iVar5 & 31));
                field_28 = 0;
                field_24 = field_24 + 1;
                iVar5 = iVar5 + iVar3;
                bVar4 = (uint8_t)iVar5;
                arg1 = arg1 - iVar3;
                iVar3 = 8;
            } while (7 < arg1);
        }
        if (0 < arg1) {
            pbVar1 = (uint8_t*)(*this)[(long)field_24];
            iVar2 = iVar2 + (((unsigned int)(*pbVar1 >> ((uint8_t)field_28 & 31)) & ~(-1 << ((uint8_t)arg1 & 31)))
                             << (bVar4 & 31));
            field_28 = field_28 + arg1;
        }
        return iVar2;
    }

    // 0x1002931a0
    uint8_t BitUnpacker::ReadBit() {
        uint8_t* pbVar3 = (uint8_t*)(*this)[(long)field_24];
        uint8_t bVar1 = *pbVar3;
        unsigned int uVar2 = field_28;
        unsigned int uVar4 = uVar2 + 1;
        field_24 = field_24 + ((int)uVar4 >> 3);
        field_28 = uVar4 & 7;
        return bVar1 >> ((uint8_t)uVar2 & 31) & 1;
    }

    // 0x1002931e0
    void BitUnpacker::SetBitPos(Array<unsigned char>& arg1, int arg2) {
        *this = arg1;
        field_24 = arg2;
        field_28 = 0;
    }

} // namespace jag::oldscape::sound
