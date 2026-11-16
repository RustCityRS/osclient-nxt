// libs/bytepacking/PacketMixins.inl
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x1000bc010, 128 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator> > >::gSmart1or2Enc(Isaac&)
    ushort PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gSmart1or2Enc(
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this, Isaac* param_1) {
        byte bVar1;
        byte bVar2;
        ulong uVar3;
        short sVar4;
        short sVar5;
        byte* pbVar6;
        ushort uVar7;

        uVar3 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar3 + 1;
        pbVar6 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
            (Array<unsigned char, eastl::allocator>*)this, uVar3);
        bVar1 = *pbVar6;
        sVar4 = param_1->TakeNextValue();
        uVar7 = (ushort)bVar1 - sVar4 & 255;
        if (127 < uVar7) {
            uVar3 = *(ulong*)(this + 24);
            *(ulong*)(this + 24) = uVar3 + 1;
            pbVar6 = (byte*)Array<unsigned char, eastl::allocator>::operator[](
                (Array<unsigned char, eastl::allocator>*)this, uVar3);
            bVar2 = *pbVar6;
            sVar5 = param_1->TakeNextValue();
            uVar7 = ((ushort)bVar1 - sVar4) * 256 + ((ushort)bVar2 - sVar5 & 255) + 32768;
        }
        return uVar7;
    }

    // 0x1000bc0a0, 112 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::gArrayBufferEncrypted(unsigned char*, int, int, Isaac&)
    void PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gArrayBufferEncrypted(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this, uchar* param_1, int param_2,
        int param_3, Isaac* param_4) {
        char cVar1;
        ulong uVar2;
        char cVar3;
        char* pcVar4;
        long lVar5;

        if (0 < param_3) {
            lVar5 = 0;
            do {
                uVar2 = *(ulong*)(this + 24);
                *(ulong*)(this + 24) = uVar2 + 1;
                pcVar4 = (char*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
                    (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar2);
                cVar1 = *pcVar4;
                cVar3 = param_4->TakeNextValue();
                param_1[lVar5 + param_2] = cVar1 - cVar3;
                lVar5 = lVar5 + 1;
            } while (param_3 != (int)lVar5);
        }
    }

} // namespace jag
