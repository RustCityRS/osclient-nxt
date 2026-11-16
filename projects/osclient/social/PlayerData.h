// projects/osclient/social/PlayerData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::social {
    template <typename...> // 3 instantiations, e.g. <FriendChatUser>, <FriendData>, <IgnoreData>
    class PlayerData {
    public:
        // virtual methods in vtable order
        virtual void CompareTo(const FriendChatUser& friendChatUser) const;
        uint8_t SetDisplayNames(const rs2lib::social::DisplayName& displayName1,
                                const rs2lib::social::DisplayName& displayName2);
        void ClearOldDisplayName();
        ~PlayerData();
        PlayerData();
        void GetFormattedCurrentDisplayName() const;
        void GetFormattedOldDisplayName() const;
    };

    // 0x1000564a0
    uint8_t PlayerData<FriendData>::SetDisplayNames(const rs2lib::social::DisplayName& displayName1,
                                                    const rs2lib::social::DisplayName& displayName2) {

        DisplayName local_60(displayName1);
        (*((this + 1))) = local_60;
        local_60 = rs2lib::social::DisplayName(displayName2);
        (*((this + 9))) = local_60;
        return 1;
    }

    // 0x1000565c0
    void PlayerData<FriendData>::ClearOldDisplayName() {

        DisplayName local_58;
        (*((this + 9))) = local_58;
    }

    // 0x100056eb0
    uint8_t PlayerData<IgnoreData>::SetDisplayNames(const rs2lib::social::DisplayName& displayName1,
                                                    const rs2lib::social::DisplayName& displayName2) {

        DisplayName local_60(displayName1);
        (*((this + 1))) = local_60;
        local_60 = rs2lib::social::DisplayName(displayName2);
        (*((this + 9))) = local_60;
        return 1;
    }

    // 0x100057040
    void PlayerData<IgnoreData>::ClearOldDisplayName() {

        DisplayName local_58;
        (*((this + 9))) = local_58;
    }

    // 0x10012eac0
    PlayerData<FriendChatUser>::~PlayerData() {
        ((this + 9))->~pair();
        ((this + 1))->~pair();
    }

    // 0x10012eb00
    void PlayerData<FriendChatUser>::CompareTo(const FriendChatUser& friendChatUser) const {
        ((this + 1))->CompareTo(friendChatUser.field_8);
    }

    // 0x10012ed70
    uint8_t PlayerData<FriendChatUser>::SetDisplayNames(const rs2lib::social::DisplayName& displayName1,
                                                        const rs2lib::social::DisplayName& displayName2) {

        DisplayName local_60(displayName1);
        (*((this + 1))) = local_60;
        local_60 = rs2lib::social::DisplayName(displayName2);
        (*((this + 9))) = local_60;
        return 1;
    }

    // 0x10012ef10
    void PlayerData<FriendChatUser>::ClearOldDisplayName() {

        DisplayName local_58;
        (*((this + 9))) = local_58;
    }

    // 0x10013a970
    PlayerData<IgnoreData>::PlayerData() {
        new ((this + 1)) rs2lib::social::DisplayName();
        new ((this + 9)) rs2lib::social::DisplayName();
    }

    // 0x10013aec0
    PlayerData<FriendData>::PlayerData() {
        new ((this + 1)) rs2lib::social::DisplayName();
        new ((this + 9)) rs2lib::social::DisplayName();
    }

    // 0x1001513a0
    PlayerData<FriendChatUser>::PlayerData() {
        new ((this + 1)) rs2lib::social::DisplayName();
        new ((this + 9)) rs2lib::social::DisplayName();
    }

    // 0x1001611e0
    void PlayerData<FriendData>::GetFormattedCurrentDisplayName() const {
        ((this + 1))->GetDisplayName();
    }

    // 0x1001611f0
    void PlayerData<FriendData>::GetFormattedOldDisplayName() const {
        ((this + 9))->GetDisplayName();
    }

    // 0x1001af890
    PlayerData<FriendData>::~PlayerData() {
        ((this + 9))->~pair();
        ((this + 1))->~pair();
    }

    // 0x1001afa20
    PlayerData<IgnoreData>::~PlayerData() {
        ((this + 9))->~pair();
        ((this + 1))->~pair();
    }

} // namespace jag::oldscape::social

namespace jag {
    // 0x10012f660
    unsigned int PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g4_alt1() {
        long lVar4 = *(long*)(this + 24);
        *(long*)(this + 24) = lVar4 + 4;
        uint8_t* pbVar5 = (uint8_t*)(*this)[lVar4 + 3];
        uint8_t bVar1 = *pbVar5;
        pbVar5 = (uint8_t*)(*this)[*(long*)(this + 24) - 2];
        uint8_t bVar2 = *pbVar5;
        pbVar5 = (uint8_t*)(*this)[*(long*)(this + 24) - 3];
        uint8_t bVar3 = *pbVar5;
        pbVar5 = (uint8_t*)(*this)[*(long*)(this + 24) - 4];
        return (unsigned int)*pbVar5 | (unsigned int)bVar3 << 8 | (unsigned int)bVar2 << 16 | (unsigned int)bVar1 << 24;
    }

    // 0x100130140
    unsigned int PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g3_alt3() {
        long lVar3 = *(long*)(this + 24);
        *(long*)(this + 24) = lVar3 + 3;
        uint8_t* pbVar4 = (uint8_t*)(*this)[lVar3 + 1];
        uint8_t bVar1 = *pbVar4;
        pbVar4 = (uint8_t*)(*this)[*(long*)(this + 24) - 3];
        uint8_t bVar2 = *pbVar4;
        pbVar4 = (uint8_t*)(*this)[*(long*)(this + 24) - 1];
        return (unsigned int)*pbVar4 | (unsigned int)bVar2 << 8 | (unsigned int)bVar1 << 16;
    }

    // 0x1001301d0
    unsigned int PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g3_alt2() {
        unsigned long arg1 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = arg1 + 3;
        uint8_t* pbVar3 = (uint8_t*)(*this)[arg1];
        uint8_t bVar1 = *pbVar3;
        pbVar3 = (uint8_t*)(*this)[*(long*)(this + 24) - 1];
        uint8_t bVar2 = *pbVar3;
        pbVar3 = (uint8_t*)(*this)[*(long*)(this + 24) - 2];
        return (unsigned int)*pbVar3 | (unsigned int)bVar2 << 8 | (unsigned int)bVar1 << 16;
    }

    // 0x100130230
    unsigned int PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g4_alt2() {
        long lVar4 = *(long*)(this + 24);
        *(long*)(this + 24) = lVar4 + 4;
        uint8_t* pbVar5 = (uint8_t*)(*this)[lVar4 + 2];
        uint8_t bVar1 = *pbVar5;
        pbVar5 = (uint8_t*)(*this)[*(long*)(this + 24) - 1];
        uint8_t bVar2 = *pbVar5;
        pbVar5 = (uint8_t*)(*this)[*(long*)(this + 24) - 4];
        uint8_t bVar3 = *pbVar5;
        pbVar5 = (uint8_t*)(*this)[*(long*)(this + 24) - 3];
        return (unsigned int)*pbVar5 | (unsigned int)bVar3 << 8 | (unsigned int)bVar2 << 16 | (unsigned int)bVar1 << 24;
    }

    // 0x1001302b0
    int PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g2s_alt1() {
        long lVar2 = *(long*)(this + 24);
        *(long*)(this + 24) = lVar2 + 2;
        uint8_t* puVar3 = (uint8_t*)(*this)[lVar2 + 1];
        uint8_t uVar1 = *puVar3;
        puVar3 = (uint8_t*)(*this)[*(long*)(this + 24) - 2];
        return (int)(((uint16_t)uVar1 << 8) | (uint8_t)(*puVar3));
    }

    // 0x100130300
    unsigned int PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g4_alt3() {
        long lVar4 = *(long*)(this + 24);
        *(long*)(this + 24) = lVar4 + 4;
        uint8_t* pbVar5 = (uint8_t*)(*this)[lVar4 + 1];
        uint8_t bVar1 = *pbVar5;
        pbVar5 = (uint8_t*)(*this)[*(long*)(this + 24) - 4];
        uint8_t bVar2 = *pbVar5;
        pbVar5 = (uint8_t*)(*this)[*(long*)(this + 24) - 1];
        uint8_t bVar3 = *pbVar5;
        pbVar5 = (uint8_t*)(*this)[*(long*)(this + 24) - 2];
        return (unsigned int)*pbVar5 | (unsigned int)bVar3 << 8 | (unsigned int)bVar2 << 16 | (unsigned int)bVar1 << 24;
    }

    // 0x100130380
    int PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g2s_alt2() {
        unsigned long arg1 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = arg1 + 2;
        uint8_t* pbVar2 = (uint8_t*)(*this)[arg1];
        uint8_t bVar1 = *pbVar2;
        pbVar2 = (uint8_t*)(*this)[*(long*)(this + 24) - 1];
        return (int)(short)(*pbVar2 ^ 128 | (unsigned short)bVar1 << 8);
    }

    // 0x1001303e0
    unsigned int PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g3s_alt2() {
        unsigned long arg1 = *(unsigned long*)(this + 24);
        *(unsigned long*)(this + 24) = arg1 + 3;
        uint8_t* pbVar3 = (uint8_t*)(*this)[arg1];
        uint8_t bVar2 = *pbVar3;
        pbVar3 = (uint8_t*)(*this)[*(long*)(this + 24) - 1];
        unsigned int uVar4 = (unsigned int)*pbVar3 << 8 | (unsigned int)bVar2 << 16;
        pbVar3 = (uint8_t*)(*this)[*(long*)(this + 24) - 2];
        unsigned int uVar1 = uVar4 + *pbVar3;
        uVar4 = (*pbVar3 - 16777216) + uVar4;
        if (uVar1 < 8388608) {
            uVar4 = uVar1;
        }
        return uVar4;
    }

    // 0x100130450
    unsigned int PacketT<Array<unsigned char, BucketAllocatorEASTL>>::g3s_alt1() {
        long lVar3 = *(long*)(this + 24);
        *(long*)(this + 24) = lVar3 + 3;
        uint8_t* pbVar4 = (uint8_t*)(*this)[lVar3 + 2];
        uint8_t bVar2 = *pbVar4;
        pbVar4 = (uint8_t*)(*this)[*(long*)(this + 24) - 2];
        unsigned int uVar5 = (unsigned int)*pbVar4 << 8 | (unsigned int)bVar2 << 16;
        pbVar4 = (uint8_t*)(*this)[*(long*)(this + 24) - 3];
        unsigned int uVar1 = uVar5 + *pbVar4;
        uVar5 = (*pbVar4 - 16777216) + uVar5;
        if (uVar1 < 8388608) {
            uVar5 = uVar1;
        }
        return uVar5;
    }

} // namespace jag
