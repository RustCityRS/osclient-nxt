// libs/game/runetek5/group/PlayerGroup.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class PlayerGroup {
    public:
        uint8_t* GetVarValues();
        int GetUpdateNumber() const;
        void Decode(PacketT<Array<unsigned char>>& arg1, PlayerGroupResourceProvider& playerGroupResourceProvider);
        void UpdateOwnerSlot();
        unsigned long GetOverallStatus() const;
        void ApplyAddMember(const PlayerGroupMember& playerGroupMember);
        void ApplyDeleteMember(unsigned short arg1);
        void ApplyAddBanned(const PlayerGroupBannedUser& playerGroupBannedUser);
        void ApplyDeleteBanned(unsigned short arg1);
        void ApplySetMemberRank(unsigned short arg1, unsigned char arg2);
        void ApplySetMemberOnline(unsigned short arg1, short arg2);
        void ApplySetMemberOffline(unsigned short arg1);
        void ApplySetMemberReady(unsigned short arg1, bool arg2);
        void ApplySetMemberTeam(unsigned short arg1, unsigned char arg2);
        void ApplySetGameLoading();
        void ApplyStartGame();
        void ApplyUpdateMemberBase(unsigned short arg1, const PlayerGroupMember& playerGroupMember);
        void IncrementUpdateNumber();

    private:
        uint64_t field_0;
        uint8_t _unknown_8[32];
        uint8_t field_40;
        uint8_t _unknown_41[1];
        uint16_t field_42;
        uint8_t _unknown_44[132];
        short field_176;
        uint8_t _unknown_178[2];
        int m_updateNumber;
        uint32_t field_184;
        uint8_t _unknown_188[4];
        uint64_t field_192;
    };

    // 0x1004ba930
    void PlayerGroup::IncrementUpdateNumber() {
        m_updateNumber = m_updateNumber + 1;
    }

} // namespace jag::game
