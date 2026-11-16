// libs/game/runetek5/group/PlayerGroupDelta.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class PlayerGroupDelta {
    public:
        class AddBanned;
        class AddMember;
        class DeleteBanned;
        class DeleteMember;
        class PlayerGroupDeltaEntry;
        class SetGameLoading;
        class SetMemberOffline;
        class SetMemberOnline;
        class SetMemberRank;
        class SetMemberReady;
        class SetMemberTeam;
        class SetVarBitValue;
        class SetVarValue;
        class StartGame;
        class UpdateMemberBase;
        void Decode(PacketT<Array<unsigned char>>& arg1, PlayerGroupResourceProvider& playerGroupResourceProvider);
        void ApplyToGroup(PlayerGroup& playerGroup, PlayerGroupResourceProvider& playerGroupResourceProvider);
        ~PlayerGroupDelta();

    private:
        unsigned int field_0;
        uint8_t _unknown_4[12];
    };

    class PlayerGroupDelta::AddBanned {
    public:
        // virtual methods in vtable order
        virtual ~AddBanned();
        virtual void Decode(PacketT<Array<unsigned char>>& arg1,
                            PlayerGroupResourceProvider& playerGroupResourceProvider);
        virtual void Apply(PlayerGroup& playerGroup, PlayerGroupResourceProvider& playerGroupResourceProvider);
        AddBanned();

    private:
        SourceItem field_8;
    };

    class PlayerGroupDelta::AddMember {
    public:
        // virtual methods in vtable order
        virtual ~AddMember();
        virtual void Decode(PacketT<Array<unsigned char>>& arg1,
                            PlayerGroupResourceProvider& playerGroupResourceProvider);
        virtual void Apply(PlayerGroup& playerGroup, PlayerGroupResourceProvider& playerGroupResourceProvider);
        AddMember();

    private:
        PlayerGroupMember field_8;
    };

    class PlayerGroupDelta::DeleteBanned {
    public:
        // virtual methods in vtable order
        virtual ~DeleteBanned();
        virtual void Decode(PacketT<Array<unsigned char>>& arg1,
                            PlayerGroupResourceProvider& playerGroupResourceProvider);
        virtual void Apply(PlayerGroup& playerGroup, PlayerGroupResourceProvider& playerGroupResourceProvider);
        DeleteBanned();

    private:
        uint16_t field_8;
        uint8_t _unknown_10[6];
    };

    class PlayerGroupDelta::DeleteMember {
    public:
        // virtual methods in vtable order
        virtual ~DeleteMember();
        virtual void Decode(PacketT<Array<unsigned char>>& arg1,
                            PlayerGroupResourceProvider& playerGroupResourceProvider);
        virtual void Apply(PlayerGroup& playerGroup, PlayerGroupResourceProvider& playerGroupResourceProvider);
        DeleteMember();

    private:
        uint16_t field_8;
        uint8_t _unknown_10[6];
    };

    class PlayerGroupDelta::PlayerGroupDeltaEntry {
    public:
        // virtual methods in vtable order
        virtual ~PlayerGroupDeltaEntry();
        virtual void __pure_slot_2() = 0;
        virtual void __pure_slot_3() = 0;
        PlayerGroupDeltaEntry();
    };

    class PlayerGroupDelta::SetGameLoading {
    public:
        // virtual methods in vtable order
        virtual ~SetGameLoading();
        virtual void Decode(PacketT<Array<unsigned char>>& arg1,
                            PlayerGroupResourceProvider& playerGroupResourceProvider);
        virtual void Apply(PlayerGroup& playerGroup, PlayerGroupResourceProvider& playerGroupResourceProvider);
        SetGameLoading();
    };

    class PlayerGroupDelta::SetMemberOffline {
    public:
        // virtual methods in vtable order
        virtual ~SetMemberOffline();
        virtual void Decode(PacketT<Array<unsigned char>>& arg1,
                            PlayerGroupResourceProvider& playerGroupResourceProvider);
        virtual void Apply(PlayerGroup& playerGroup, PlayerGroupResourceProvider& playerGroupResourceProvider);
        SetMemberOffline();

    private:
        uint16_t field_8;
        uint8_t _unknown_10[6];
    };

    class PlayerGroupDelta::SetMemberOnline {
    public:
        // virtual methods in vtable order
        virtual ~SetMemberOnline();
        virtual void Decode(PacketT<Array<unsigned char>>& arg1,
                            PlayerGroupResourceProvider& playerGroupResourceProvider);
        virtual void Apply(PlayerGroup& playerGroup, PlayerGroupResourceProvider& playerGroupResourceProvider);
        SetMemberOnline();

    private:
        uint16_t field_8;
        uint16_t field_10;
        uint8_t _unknown_12[6];
    };

    class PlayerGroupDelta::SetMemberRank {
    public:
        // virtual methods in vtable order
        virtual ~SetMemberRank();
        virtual void Decode(PacketT<Array<unsigned char>>& arg1,
                            PlayerGroupResourceProvider& playerGroupResourceProvider);
        virtual void Apply(PlayerGroup& playerGroup, PlayerGroupResourceProvider& playerGroupResourceProvider);
        SetMemberRank();

    private:
        uint16_t field_8;
        uint8_t field_10;
        uint8_t _unknown_11[5];
    };

    class PlayerGroupDelta::SetMemberReady {
    public:
        // virtual methods in vtable order
        virtual ~SetMemberReady();
        virtual void Decode(PacketT<Array<unsigned char>>& arg1,
                            PlayerGroupResourceProvider& playerGroupResourceProvider);
        virtual void Apply(PlayerGroup& playerGroup, PlayerGroupResourceProvider& playerGroupResourceProvider);
        SetMemberReady();

    private:
        uint16_t field_8;
        bool field_10;
        uint8_t _unknown_11[5];
    };

    class PlayerGroupDelta::SetMemberTeam {
    public:
        // virtual methods in vtable order
        virtual ~SetMemberTeam();
        virtual void Decode(PacketT<Array<unsigned char>>& arg1,
                            PlayerGroupResourceProvider& playerGroupResourceProvider);
        virtual void Apply(PlayerGroup& playerGroup, PlayerGroupResourceProvider& playerGroupResourceProvider);
        SetMemberTeam();

    private:
        uint16_t field_8;
        uint8_t field_10;
        uint8_t _unknown_11[5];
    };

    class PlayerGroupDelta::SetVarBitValue {
    public:
        // virtual methods in vtable order
        virtual ~SetVarBitValue();
        virtual void Decode(PacketT<Array<unsigned char>>& arg1,
                            PlayerGroupResourceProvider& playerGroupResourceProvider);
        virtual void Apply(PlayerGroup& playerGroup, PlayerGroupResourceProvider& playerGroupResourceProvider);
        SetVarBitValue();

    private:
        unsigned int field_8;
        uint32_t field_12;
        uint8_t _unknown_16[4];
    };

    class PlayerGroupDelta::SetVarValue {
    public:
        // virtual methods in vtable order
        virtual ~SetVarValue();
        virtual void Decode(PacketT<Array<unsigned char>>& arg1,
                            PlayerGroupResourceProvider& playerGroupResourceProvider);
        virtual void Apply(PlayerGroup& playerGroup, PlayerGroupResourceProvider& playerGroupResourceProvider);
        SetVarValue();

    private:
        uint32_t field_8;
        uint8_t _unknown_12[4];
        uint8_t field_16;
        uint8_t _unknown_17[31];
    };

    class PlayerGroupDelta::StartGame {
    public:
        // virtual methods in vtable order
        virtual ~StartGame();
        virtual void Decode(PacketT<Array<unsigned char>>& arg1,
                            PlayerGroupResourceProvider& playerGroupResourceProvider);
        virtual void Apply(PlayerGroup& playerGroup, PlayerGroupResourceProvider& playerGroupResourceProvider);
        StartGame();
    };

    class PlayerGroupDelta::UpdateMemberBase {
    public:
        // virtual methods in vtable order
        virtual ~UpdateMemberBase();
        virtual void Decode(PacketT<Array<unsigned char>>& arg1,
                            PlayerGroupResourceProvider& playerGroupResourceProvider);
        virtual void Apply(PlayerGroup& playerGroup, PlayerGroupResourceProvider& playerGroupResourceProvider);
        UpdateMemberBase();

    private:
        uint16_t field_8;
        uint8_t _unknown_10[6];
        PlayerGroupMember field_16;
    };

    // 0x1004bcf20
    PlayerGroupDelta::AddMember::AddMember() : PlayerGroupDeltaEntry() {}

    // 0x1004bcf60
    PlayerGroupDelta::PlayerGroupDeltaEntry::PlayerGroupDeltaEntry() {}

    // 0x1004bd040
    PlayerGroupDelta::DeleteMember::DeleteMember() : PlayerGroupDeltaEntry() {}

    // 0x1004bd060
    PlayerGroupDelta::AddBanned::AddBanned() : PlayerGroupDeltaEntry() {}

    // 0x1004bd0a0
    PlayerGroupDelta::DeleteBanned::DeleteBanned() : PlayerGroupDeltaEntry() {}

    // 0x1004bd0c0
    PlayerGroupDelta::SetMemberRank::SetMemberRank() : PlayerGroupDeltaEntry() {}

    // 0x1004bd0e0
    PlayerGroupDelta::SetMemberOnline::SetMemberOnline() : PlayerGroupDeltaEntry() {}

    // 0x1004bd100
    PlayerGroupDelta::SetMemberOffline::SetMemberOffline() : PlayerGroupDeltaEntry() {}

    // 0x1004bd120
    PlayerGroupDelta::SetMemberReady::SetMemberReady() : PlayerGroupDeltaEntry() {}

    // 0x1004bd140
    PlayerGroupDelta::SetGameLoading::SetGameLoading() : PlayerGroupDeltaEntry() {}

    // 0x1004bd160
    PlayerGroupDelta::StartGame::StartGame() : PlayerGroupDeltaEntry() {}

    // 0x1004bd180
    PlayerGroupDelta::UpdateMemberBase::UpdateMemberBase() : PlayerGroupDeltaEntry() {}

    // 0x1004bd1c0
    PlayerGroupDelta::SetVarValue::SetVarValue() : PlayerGroupDeltaEntry() {
        field_8.pair<true, false>();
    }

    // 0x1004bd200
    PlayerGroupDelta::SetVarBitValue::SetVarBitValue() : PlayerGroupDeltaEntry() {}

    // 0x1004bd220
    PlayerGroupDelta::SetMemberTeam::SetMemberTeam() : PlayerGroupDeltaEntry() {}

    // 0x1004bdb40
    PlayerGroupDelta::AddMember::~AddMember() {
        field_8->~PlayerGroupMember();
    }

    // 0x1004bdb70
    PlayerGroupDelta::AddBanned::~AddBanned() {
        field_8->~hash_node();
    }

    // 0x1004bdba0
    PlayerGroupDelta::UpdateMemberBase::~UpdateMemberBase() {
        field_16->~PlayerGroupMember();
    }

    // 0x1004bdbd0
    PlayerGroupDelta::SetVarValue::~SetVarValue() {}

} // namespace jag::game
