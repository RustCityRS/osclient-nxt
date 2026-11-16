// libs/game/runetek5/group/PlayerGroupMember.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class PlayerGroupMember {
    public:
        GetKnownVariablesAtJoin() const;
        void SetStatus(PlayerGroupMemberStatus);
        GetStatus() const;
        uchar GetRank() const;
        void SetRank(unsigned char);
        void SetOnline(bool);
        void SetLastSeenNodeID(short);
        void SetTeam(unsigned char);
        void UpdateBase(PlayerGroupMember const&);
        PlayerGroupMember(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&, bool, PlayerGroupResourceProvider&);
        PlayerGroupMember* operator=(PlayerGroupMember&&);
        ~PlayerGroupMember();
        PlayerGroupMember();
        PlayerGroupMember(PlayerGroupMember&&);
        PlayerGroupMember(PlayerGroupMember const&);

        // data members, from how the methods use this: 152 bytes
        char _unknown_0[8];
        ulong field_8; // offset 8
        long field_16; // offset 16
        char _unknown_24[32];
        byte field_56;          // offset 56
        undefined1 field_57;    // offset 57
        short m_lastSeenNodeID; // offset 58
        bool m_online;          // offset 60
        uchar m_rank;           // offset 61
        undefined2 field_62;    // offset 62
        uint field_64;          // offset 64
        uchar m_team;           // offset 68
        char _unknown_69[3];
        VarContainerSparse field_72; // offset 72
        char _unknown_88[48];
        VarContainerSparse field_136; // offset 136
    };

    // 0x1004b9c60, 16 bytes, inline, placed by class name and debug map
    // PlayerGroupMember::GetRank() const
    uchar PlayerGroupMember::GetRank() {
        return m_rank;
    }

    // 0x1004ba040, 16 bytes, inline, placed by class name and debug map
    // PlayerGroupMember::SetRank(unsigned char)
    void PlayerGroupMember::SetRank(uchar param_1) {
        m_rank = param_1;
    }

    // 0x1004ba0a0, 16 bytes, inline, placed by class name and debug map
    // PlayerGroupMember::SetOnline(bool)
    void PlayerGroupMember::SetOnline(bool param_1) {
        m_online = param_1;
    }

    // 0x1004ba0b0, 16 bytes, inline, placed by class name and debug map
    // PlayerGroupMember::SetLastSeenNodeID(short)
    void PlayerGroupMember::SetLastSeenNodeID(short param_1) {
        m_lastSeenNodeID = param_1;
    }

    // 0x1004ba140, 16 bytes, inline, placed by class name and debug map
    // PlayerGroupMember::SetTeam(unsigned char)
    void PlayerGroupMember::SetTeam(uchar param_1) {
        m_team = param_1;
    }

    // 0x1004baa80, 96 bytes, inline, placed by class name
    // PlayerGroupMember::operator=(PlayerGroupMember&&)
    /* PlayerGroupMember::TEMPNAMEPLACEHOLDERVALUE(PlayerGroupMember&&) */

    PlayerGroupMember* PlayerGroupMember::operator=(PlayerGroupMember* param_1) {
        undefined1 uVar1;
        short sVar2;
        bool bVar3;
        uchar uVar4;
        undefined2 uVar5;
        uchar uVar6;
        undefined2 uVar7;
        uint uVar8;
        uchar uVar9;

        Array<PlayerStat, eastl::allocator>::operator=((Array<PlayerStat, eastl::allocator>*)this, (Array*)param_1);
        eastl::string::operator=((eastl::string*)&field_24, (basic_string*)&param_1->field_24);
        uVar1 = param_1->field_57;
        sVar2 = param_1->m_lastSeenNodeID;
        bVar3 = param_1->m_online;
        uVar4 = param_1->m_rank;
        uVar5 = param_1->field_62;
        uVar6 = param_1->m_rank;
        uVar7 = param_1->field_62;
        uVar8 = param_1->field_64;
        uVar9 = param_1->m_team;
        field_56 = param_1->field_56;
        field_57 = uVar1;
        m_lastSeenNodeID = sVar2;
        m_online = bVar3;
        m_rank = uVar4;
        field_62 = uVar5;
        m_rank = uVar6;
        field_62 = uVar7;
        field_64 = uVar8;
        m_team = uVar9;
        VarContainerSparse::operator=((VarContainerSparse*)field_72, (VarContainerSparse*)param_1->field_72);
        VarContainerSparse::operator=((VarContainerSparse*)field_136, (VarContainerSparse*)param_1->field_136);
        return this;
    }

    // 0x1004baae0, 16 bytes, complete-object destructor, inline, placed by class name
    // PlayerGroupMember::~PlayerGroupMember(): jumps straight to the base-object destructor

    // 0x1004bcf80, 16 bytes, complete-object constructor, inline, placed by class name
    // PlayerGroupMember::PlayerGroupMember(): jumps straight to the base-object constructor

    // 0x1004bcf90, 112 bytes, base-object constructor, inline, placed by class name
    // PlayerGroupMember::PlayerGroupMember()
    void PlayerGroupMember::PlayerGroupMember() {
        new (this) Array<PlayerStat, eastl::allocator>();
        new (&field_24) eastl::string();
        new (field_72) VarContainerSparse();
        new (field_136) VarContainerSparse();
    }

    // 0x1004bd2c0, 64 bytes, base-object destructor, inline, placed by class name
    // PlayerGroupMember::~PlayerGroupMember()
    void PlayerGroupMember::~PlayerGroupMember() {
        field_136->~VarContainerSparse();
        field_72->~VarContainerSparse();
        (&field_24)->~basic_string();
        ~Array();
    }

    // 0x1004be460, 16 bytes, complete-object constructor, inline, placed by class name
    // PlayerGroupMember::PlayerGroupMember(PlayerGroupMember&&): jumps straight to the base-object constructor

    // 0x1004be480, 144 bytes, base-object constructor, inline, placed by class name
    // PlayerGroupMember::PlayerGroupMember(PlayerGroupMember&&)
    void PlayerGroupMember::PlayerGroupMember(PlayerGroupMember* param_1) {
        undefined2 uVar1;
        uint uVar2;
        uchar uVar3;
        byte bVar4;
        undefined1 uVar5;
        short sVar6;
        bool bVar7;
        uchar uVar8;
        undefined2 uVar9;

        new (this) Array<PlayerStat, eastl::allocator>(param_1);
        new (&field_24, (basic_string*)&param_1->field_24) eastl::string();
        bVar4 = param_1->field_56;
        uVar5 = param_1->field_57;
        sVar6 = param_1->m_lastSeenNodeID;
        bVar7 = param_1->m_online;
        uVar8 = param_1->m_rank;
        uVar9 = param_1->field_62;
        uVar1 = param_1->field_62;
        uVar2 = param_1->field_64;
        uVar3 = param_1->m_team;
        m_rank = param_1->m_rank;
        field_62 = uVar1;
        field_64 = uVar2;
        m_team = uVar3;
        field_56 = bVar4;
        field_57 = uVar5;
        m_lastSeenNodeID = sVar6;
        m_online = bVar7;
        m_rank = uVar8;
        field_62 = uVar9;
        new (field_72, (VarContainerSparse*)param_1->field_72) VarContainerSparse();
        new (field_136, (VarContainerSparse*)param_1->field_136) VarContainerSparse();
    }

    // 0x1004beb60, 16 bytes, complete-object constructor, inline, placed by class name
    // PlayerGroupMember::PlayerGroupMember(PlayerGroupMember const&): jumps straight to the base-object constructor

    // 0x1004bec50, 160 bytes, base-object constructor, inline, placed by class name
    // PlayerGroupMember::PlayerGroupMember(PlayerGroupMember const&)
    void PlayerGroupMember::PlayerGroupMember(PlayerGroupMember* param_1) {
        undefined2 uVar1;
        uint uVar2;
        uchar uVar3;
        byte bVar4;
        undefined1 uVar5;
        short sVar6;
        bool bVar7;
        uchar uVar8;
        undefined2 uVar9;

        new (this) Array<PlayerStat, eastl::allocator>(param_1);
        new (&field_24, (basic_string*)&param_1->field_24) eastl::string();
        bVar4 = param_1->field_56;
        uVar5 = param_1->field_57;
        sVar6 = param_1->m_lastSeenNodeID;
        bVar7 = param_1->m_online;
        uVar8 = param_1->m_rank;
        uVar9 = param_1->field_62;
        uVar1 = param_1->field_62;
        uVar2 = param_1->field_64;
        uVar3 = param_1->m_team;
        m_rank = param_1->m_rank;
        field_62 = uVar1;
        field_64 = uVar2;
        m_team = uVar3;
        field_56 = bVar4;
        field_57 = uVar5;
        m_lastSeenNodeID = sVar6;
        m_online = bVar7;
        m_rank = uVar8;
        field_62 = uVar9;
        new (field_72, (VarContainerSparse*)param_1->field_72) VarContainerSparse();
        new (field_136, (VarContainerSparse*)param_1->field_136) VarContainerSparse();
    }

} // namespace jag::game
