// libs/oldscape/rs2lib/social/friendschat/FriendPrivacy.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100113800
    unsigned int PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::g3() {
        unsigned long arg1 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = arg1 + 3;
        uint8_t* pbVar3 = (uint8_t*)(*this)[arg1];
        uint8_t bVar1 = *pbVar3;
        pbVar3 = (uint8_t*)(*this)[*(long*)(this + 24) - 2];
        uint8_t bVar2 = *pbVar3;
        pbVar3 = (uint8_t*)(*this)[*(long*)(this + 24) - 1];
        return (unsigned int)*pbVar3 | (unsigned int)bVar2 << 8 | (unsigned int)bVar1 << 16;
    }

    // 0x100113880
    int PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::g2s() {
        short sVar1 = gT<short>(this);
        return (int)sVar1;
    }

    // 0x100113890
    void ShuffledPacket3::g3() {
        g3_alt2();
    }

} // namespace jag

namespace jag::oldscape::rs2lib {
    class FriendPrivacyUtils {
    public:
        int GetBySaveValue(int arg1);
    };

    // 0x1001137e0
    int FriendPrivacyUtils::GetBySaveValue(int arg1) {
        int iVar1 = -1;
        if ((unsigned int)arg1 < 3) {
            iVar1 = arg1;
        }
        return iVar1;
    }

} // namespace jag::oldscape::rs2lib
