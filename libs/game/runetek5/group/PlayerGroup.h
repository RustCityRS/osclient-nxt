// libs/game/runetek5/group/PlayerGroup.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class PlayerGroup {
    public:
        GetVarValues();
        int GetUpdateNumber() const;
        void Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&, PlayerGroupResourceProvider&);
        void UpdateOwnerSlot();
        ulong GetOverallStatus() const;
        void ApplyAddMember(PlayerGroupMember const&);
        void ApplyDeleteMember(unsigned short);
        void ApplyAddBanned(PlayerGroupBannedUser const&);
        void ApplyDeleteBanned(unsigned short);
        void ApplySetMemberRank(unsigned short, unsigned char);
        void ApplySetMemberOnline(unsigned short, short);
        void ApplySetMemberOffline(unsigned short);
        void ApplySetMemberReady(unsigned short, bool);
        void ApplySetMemberTeam(unsigned short, unsigned char);
        void ApplySetGameLoading();
        void ApplyStartGame();
        void ApplyUpdateMemberBase(unsigned short, PlayerGroupMember const&);
        void IncrementUpdateNumber();

        // data members, from how the methods use this: 200 bytes
        undefined8 field_0; // offset 0
        char _unknown_8[32];
        byte field_40; // offset 40
        char _unknown_41[1];
        undefined2 field_42; // offset 42
        char _unknown_44[132];
        short field_176; // offset 176
        char _unknown_178[2];
        int m_updateNumber;   // offset 180
        undefined4 field_184; // offset 184
        char _unknown_188[4];
        undefined8 field_192; // offset 192
    };

    // 0x1004ba930, 16 bytes, inline, placed by class name and debug map
    // PlayerGroup::IncrementUpdateNumber()
    void PlayerGroup::IncrementUpdateNumber() {
        m_updateNumber = m_updateNumber + 1;
    }

} // namespace jag::game
