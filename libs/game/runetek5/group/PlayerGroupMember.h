// libs/game/runetek5/group/PlayerGroupMember.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class PlayerGroupMember {
    public:
        VarContainerSparse GetKnownVariablesAtJoin() const;
        void SetStatus(PlayerGroupMemberStatus arg1);
        unsigned int GetStatus() const;
        unsigned char GetRank() const;
        void SetRank(unsigned char arg1);
        void SetOnline(bool arg1);
        void SetLastSeenNodeID(short arg1);
        void SetTeam(unsigned char arg1);
        void UpdateBase(const PlayerGroupMember& playerGroupMember);
        PlayerGroupMember(PacketT<Array<unsigned char>>& arg1, bool arg2,
                          PlayerGroupResourceProvider& playerGroupResourceProvider);
        PlayerGroupMember* operator=(PlayerGroupMember&& playerGroupMember);
        ~PlayerGroupMember();
        PlayerGroupMember();
        PlayerGroupMember(PlayerGroupMember&& playerGroupMember);
        PlayerGroupMember(const PlayerGroupMember& playerGroupMember);

    private:
        uint8_t _unknown_0[8];
        unsigned long field_8;
        long field_16;
        uint8_t _unknown_24[32];
        uint8_t field_56;
        uint8_t field_57;
        short m_lastSeenNodeID;
        bool m_online;
        unsigned char m_rank;
        uint16_t field_62;
        unsigned int m_status;
        unsigned char m_team;
        uint8_t _unknown_69[3];
        VarContainerSparse field_72;
        uint8_t _unknown_88[48];
        VarContainerSparse m_pKnownVariablesAtJoin;
    };

    // 0x1004b9c60
    unsigned char PlayerGroupMember::GetRank() const {
        return m_rank;
    }

    // 0x1004ba040
    void PlayerGroupMember::SetRank(unsigned char arg1) {
        m_rank = arg1;
    }

    // 0x1004ba0a0
    void PlayerGroupMember::SetOnline(bool arg1) {
        m_online = arg1;
    }

    // 0x1004ba0b0
    void PlayerGroupMember::SetLastSeenNodeID(short arg1) {
        m_lastSeenNodeID = arg1;
    }

    // 0x1004ba140
    void PlayerGroupMember::SetTeam(unsigned char arg1) {
        m_team = arg1;
    }

    // 0x1004baa80
    PlayerGroupMember* PlayerGroupMember::operator=(PlayerGroupMember&& playerGroupMember) {
        *this = playerGroupMember;
        field_24 = &playerGroupMember.field_24;
        uint8_t uVar1 = playerGroupMember.field_57;
        short sVar2 = playerGroupMember.m_lastSeenNodeID;
        bool bVar3 = playerGroupMember.m_online;
        unsigned char uVar4 = playerGroupMember.m_rank;
        uint16_t uVar5 = playerGroupMember.field_62;
        unsigned char uVar6 = playerGroupMember.m_rank;
        uint16_t uVar7 = playerGroupMember.field_62;
        unsigned int uVar8 = playerGroupMember.m_status;
        unsigned char uVar9 = playerGroupMember.m_team;
        field_56 = playerGroupMember.field_56;
        field_57 = uVar1;
        m_lastSeenNodeID = sVar2;
        m_online = bVar3;
        m_rank = uVar4;
        field_62 = uVar5;
        m_rank = uVar6;
        field_62 = uVar7;
        m_status = uVar8;
        m_team = uVar9;
        *field_72 = playerGroupMember.field_72;
        *m_pKnownVariablesAtJoin = playerGroupMember.m_pKnownVariablesAtJoin;
        return this;
    }

    // 0x1004bcf90
    PlayerGroupMember::PlayerGroupMember() : Array<PlayerStat>() {}

    // 0x1004bd2c0
    PlayerGroupMember::~PlayerGroupMember() {
        m_pKnownVariablesAtJoin->~VarContainerSparse();
        field_72->~VarContainerSparse();
        field_24.~basic_string();
    }

    // 0x1004be480
    PlayerGroupMember::PlayerGroupMember(PlayerGroupMember&& playerGroupMember)
        : Array<PlayerStat>(playerGroupMember), field_24(playerGroupMember.field_24) {
        uint8_t bVar4 = playerGroupMember.field_56;
        uint8_t uVar5 = playerGroupMember.field_57;
        short sVar6 = playerGroupMember.m_lastSeenNodeID;
        bool bVar7 = playerGroupMember.m_online;
        unsigned char uVar8 = playerGroupMember.m_rank;
        uint16_t uVar9 = playerGroupMember.field_62;
        uint16_t uVar1 = playerGroupMember.field_62;
        unsigned int uVar2 = playerGroupMember.m_status;
        unsigned char uVar3 = playerGroupMember.m_team;
        m_rank = playerGroupMember.m_rank;
        field_62 = uVar1;
        m_status = uVar2;
        m_team = uVar3;
        field_56 = bVar4;
        field_57 = uVar5;
        m_lastSeenNodeID = sVar6;
        m_online = bVar7;
        m_rank = uVar8;
        field_62 = uVar9;
        new (field_72) VarContainerSparse(playerGroupMember.field_72);
        new (m_pKnownVariablesAtJoin) VarContainerSparse(playerGroupMember.m_pKnownVariablesAtJoin);
    }

    // 0x1004bec50
    PlayerGroupMember::PlayerGroupMember(const PlayerGroupMember& playerGroupMember)
        : Array<PlayerStat>(playerGroupMember), field_24(playerGroupMember.field_24) {
        uint8_t bVar4 = playerGroupMember.field_56;
        uint8_t uVar5 = playerGroupMember.field_57;
        short sVar6 = playerGroupMember.m_lastSeenNodeID;
        bool bVar7 = playerGroupMember.m_online;
        unsigned char uVar8 = playerGroupMember.m_rank;
        uint16_t uVar9 = playerGroupMember.field_62;
        uint16_t uVar1 = playerGroupMember.field_62;
        unsigned int uVar2 = playerGroupMember.m_status;
        unsigned char uVar3 = playerGroupMember.m_team;
        m_rank = playerGroupMember.m_rank;
        field_62 = uVar1;
        m_status = uVar2;
        m_team = uVar3;
        field_56 = bVar4;
        field_57 = uVar5;
        m_lastSeenNodeID = sVar6;
        m_online = bVar7;
        m_rank = uVar8;
        field_62 = uVar9;
        new (field_72) VarContainerSparse(playerGroupMember.field_72);
        new (m_pKnownVariablesAtJoin) VarContainerSparse(playerGroupMember.m_pKnownVariablesAtJoin);
    }

} // namespace jag::game
