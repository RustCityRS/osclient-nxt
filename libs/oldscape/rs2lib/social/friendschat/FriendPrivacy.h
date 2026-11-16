// libs/oldscape/rs2lib/social/friendschat/FriendPrivacy.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x100113800, 96 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::g3()
    uint PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::g3(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this) {
        byte bVar1;
        byte bVar2;
        ulong uVar3;
        byte* pbVar4;

        uVar3 = *(ulong*)(this + 24);
        *(ulong*)(this + 24) = uVar3 + 3;
        pbVar4 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, uVar3);
        bVar1 = *pbVar4;
        pbVar4 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(long*)(this + 24) - 2);
        bVar2 = *pbVar4;
        pbVar4 = (byte*)Array<unsigned char, BucketAllocatorEASTL>::operator[](
            (Array<unsigned char, BucketAllocatorEASTL>*)this, *(long*)(this + 24) - 1);
        return (uint)*pbVar4 | (uint)bVar2 << 8 | (uint)bVar1 << 16;
    }

    // 0x100113880, 16 bytes, inline, placed by debug map only (low confidence)
    // PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL> > >::g2s()
    int PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::g2s(
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>* this) {
        short sVar1;

        sVar1 = gT<short>(this);
        return (int)sVar1;
    }

    // 0x100113890, 16 bytes, inline, placed by debug map only (low confidence)
    // ShuffledPacket3::g3()
    void ShuffledPacket3::g3() {
        g3_alt2();
    }

} // namespace jag

namespace jag::oldscape::rs2lib {
    class FriendPrivacyUtils {
    public:
        int GetBySaveValue(int);
    };

    // 0x1001137e0, 32 bytes, inline, placed by debug map only (low confidence)
    // FriendPrivacyUtils::GetBySaveValue(int)
    int FriendPrivacyUtils::GetBySaveValue(int param_1) {
        int iVar1;

        iVar1 = -1;
        if ((uint)param_1 < 3) {
            iVar1 = param_1;
        }
        return iVar1;
    }

} // namespace jag::oldscape::rs2lib
