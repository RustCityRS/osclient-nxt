// libs/bytepacking/PacketMixins.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x1000bc010
    unsigned short PacketReaderMixin<PacketT<Array<unsigned char>>>::gSmart1or2Enc(Isaac& isaac) {
        uint8_t bVar2;
        short sVar5;

        unsigned long uVar3 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = uVar3 + 1;
        uint8_t* pbVar6 = (uint8_t*)(*this)[uVar3];
        uint8_t bVar1 = *pbVar6;
        short sVar4 = isaac.TakeNextValue();
        unsigned short uVar7 = (unsigned short)bVar1 - sVar4 & 255;
        if (127 < uVar7) {
            uVar3 = *(unsigned long*)(this + 24);
            *(unsigned long*)(this + 24) = uVar3 + 1;
            pbVar6 = (uint8_t*)(*this)[uVar3];
            bVar2 = *pbVar6;
            sVar5 = isaac.TakeNextValue();
            uVar7 = ((unsigned short)bVar1 - sVar4) * 256 + ((unsigned short)bVar2 - sVar5 & 255) + 32768;
        }
        return uVar7;
    }

    // 0x1000bc0a0
    void PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gArrayBufferEncrypted(
        unsigned char* arg1, int arg2, int arg3, Isaac& isaac) {
        bool cVar1;
        unsigned long arg1_00;
        bool cVar2;
        char* pcVar3;
        long lVar4;

        if (0 < arg3) {
            lVar4 = 0;
            do {
                arg1_00 = *(unsigned long*)(this + 24);
                *(unsigned long*)(this + 24) = arg1_00 + 1;
                pcVar3 = (char*)(*this)[arg1_00];
                cVar1 = *pcVar3;
                cVar2 = isaac.TakeNextValue();
                arg1[lVar4 + arg2] = cVar1 - cVar2;
                lVar4 = lVar4 + 1;
            } while (arg3 != (int)lVar4);
        }
    }

} // namespace jag
