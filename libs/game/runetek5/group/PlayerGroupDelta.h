// libs/game/runetek5/group/PlayerGroupDelta.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

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
        void Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&, PlayerGroupResourceProvider&);
        void ApplyToGroup(PlayerGroup&, PlayerGroupResourceProvider&);
        ~PlayerGroupDelta();

        // data members, from how the methods use this: 16 bytes
        undefined4 field_0; // offset 0
        char _unknown_4[12];
    };

    class PlayerGroupDelta::AddBanned {
    public:
        // virtual methods in vtable order
        virtual ~AddBanned();
        virtual void Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&, PlayerGroupResourceProvider&);
        virtual void Apply(PlayerGroup&, PlayerGroupResourceProvider&);
        AddBanned();

        // data members, from how the methods use this: 56 bytes
        undefined** field_0; // offset 0, vtable pointer
        SourceItem field_8;  // offset 8
    };

    class PlayerGroupDelta::AddMember {
    public:
        // virtual methods in vtable order
        virtual ~AddMember();
        virtual void Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&, PlayerGroupResourceProvider&);
        virtual void Apply(PlayerGroup&, PlayerGroupResourceProvider&);
        AddMember();

        // data members, from how the methods use this: 160 bytes
        undefined** field_0;       // offset 0, vtable pointer
        PlayerGroupMember field_8; // offset 8
    };

    class PlayerGroupDelta::DeleteBanned {
    public:
        // virtual methods in vtable order
        virtual ~DeleteBanned();
        virtual void Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&, PlayerGroupResourceProvider&);
        virtual void Apply(PlayerGroup&, PlayerGroupResourceProvider&);
        DeleteBanned();

        // data members, from how the methods use this: 16 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined2 field_8;  // offset 8
        char _unknown_10[6];
    };

    class PlayerGroupDelta::DeleteMember {
    public:
        // virtual methods in vtable order
        virtual ~DeleteMember();
        virtual void Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&, PlayerGroupResourceProvider&);
        virtual void Apply(PlayerGroup&, PlayerGroupResourceProvider&);
        DeleteMember();

        // data members, from how the methods use this: 16 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined2 field_8;  // offset 8
        char _unknown_10[6];
    };

    class PlayerGroupDelta::PlayerGroupDeltaEntry {
    public:
        // virtual methods in vtable order
        virtual ~PlayerGroupDeltaEntry();
        virtual void __pure_slot_2() = 0;
        virtual void __pure_slot_3() = 0;
        PlayerGroupDeltaEntry();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    class PlayerGroupDelta::SetGameLoading {
    public:
        // virtual methods in vtable order
        virtual ~SetGameLoading();
        virtual void Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&, PlayerGroupResourceProvider&);
        virtual void Apply(PlayerGroup&, PlayerGroupResourceProvider&);
        SetGameLoading();

        // data members, from how the methods use this: 8 bytes
        char _unknown_0[8];
    };

    class PlayerGroupDelta::SetMemberOffline {
    public:
        // virtual methods in vtable order
        virtual ~SetMemberOffline();
        virtual void Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&, PlayerGroupResourceProvider&);
        virtual void Apply(PlayerGroup&, PlayerGroupResourceProvider&);
        SetMemberOffline();

        // data members, from how the methods use this: 16 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined2 field_8;  // offset 8
        char _unknown_10[6];
    };

    class PlayerGroupDelta::SetMemberOnline {
    public:
        // virtual methods in vtable order
        virtual ~SetMemberOnline();
        virtual void Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&, PlayerGroupResourceProvider&);
        virtual void Apply(PlayerGroup&, PlayerGroupResourceProvider&);
        SetMemberOnline();

        // data members, from how the methods use this: 18 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined2 field_8;  // offset 8
        undefined2 field_10; // offset 10
        char _unknown_12[6];
    };

    class PlayerGroupDelta::SetMemberRank {
    public:
        // virtual methods in vtable order
        virtual ~SetMemberRank();
        virtual void Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&, PlayerGroupResourceProvider&);
        virtual void Apply(PlayerGroup&, PlayerGroupResourceProvider&);
        SetMemberRank();

        // data members, from how the methods use this: 16 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined2 field_8;  // offset 8
        undefined1 field_10; // offset 10
        char _unknown_11[5];
    };

    class PlayerGroupDelta::SetMemberReady {
    public:
        // virtual methods in vtable order
        virtual ~SetMemberReady();
        virtual void Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&, PlayerGroupResourceProvider&);
        virtual void Apply(PlayerGroup&, PlayerGroupResourceProvider&);
        SetMemberReady();

        // data members, from how the methods use this: 16 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined2 field_8;  // offset 8
        bool field_10;       // offset 10
        char _unknown_11[5];
    };

    class PlayerGroupDelta::SetMemberTeam {
    public:
        // virtual methods in vtable order
        virtual ~SetMemberTeam();
        virtual void Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&, PlayerGroupResourceProvider&);
        virtual void Apply(PlayerGroup&, PlayerGroupResourceProvider&);
        SetMemberTeam();

        // data members, from how the methods use this: 16 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined2 field_8;  // offset 8
        undefined1 field_10; // offset 10
        char _unknown_11[5];
    };

    class PlayerGroupDelta::SetVarBitValue {
    public:
        // virtual methods in vtable order
        virtual ~SetVarBitValue();
        virtual void Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&, PlayerGroupResourceProvider&);
        virtual void Apply(PlayerGroup&, PlayerGroupResourceProvider&);
        SetVarBitValue();

        // data members, from how the methods use this: 20 bytes
        undefined** field_0; // offset 0, vtable pointer
        uint field_8;        // offset 8
        undefined4 field_12; // offset 12
        char _unknown_16[4];
    };

    class PlayerGroupDelta::SetVarValue {
    public:
        // virtual methods in vtable order
        virtual ~SetVarValue();
        virtual void Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&, PlayerGroupResourceProvider&);
        virtual void Apply(PlayerGroup&, PlayerGroupResourceProvider&);
        SetVarValue();

        // data members, from how the methods use this: 48 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined4 field_8;  // offset 8
        char _unknown_12[4];
        undefined1 field_16; // offset 16
        char _unknown_17[31];
    };

    class PlayerGroupDelta::StartGame {
    public:
        // virtual methods in vtable order
        virtual ~StartGame();
        virtual void Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&, PlayerGroupResourceProvider&);
        virtual void Apply(PlayerGroup&, PlayerGroupResourceProvider&);
        StartGame();

        // data members, from how the methods use this: 8 bytes
        char _unknown_0[8];
    };

    class PlayerGroupDelta::UpdateMemberBase {
    public:
        // virtual methods in vtable order
        virtual ~UpdateMemberBase();
        virtual void Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>&, PlayerGroupResourceProvider&);
        virtual void Apply(PlayerGroup&, PlayerGroupResourceProvider&);
        UpdateMemberBase();

        // data members, from how the methods use this: 168 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined2 field_8;  // offset 8
        char _unknown_10[6];
        PlayerGroupMember field_16; // offset 16
    };

    // 0x1004ba750, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // PlayerGroupDelta::AddMember::AddMember(): jumps straight to the base-object constructor

    // 0x1004ba760, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // PlayerGroupDelta::DeleteMember::DeleteMember(): jumps straight to the base-object constructor

    // 0x1004ba770, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // PlayerGroupDelta::AddBanned::AddBanned(): jumps straight to the base-object constructor

    // 0x1004ba780, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // PlayerGroupDelta::DeleteBanned::DeleteBanned(): jumps straight to the base-object constructor

    // 0x1004ba790, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // PlayerGroupDelta::SetMemberRank::SetMemberRank(): jumps straight to the base-object constructor

    // 0x1004ba7a0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // PlayerGroupDelta::SetMemberOnline::SetMemberOnline(): jumps straight to the base-object constructor

    // 0x1004ba7b0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // PlayerGroupDelta::SetMemberOffline::SetMemberOffline(): jumps straight to the base-object constructor

    // 0x1004ba7c0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // PlayerGroupDelta::SetMemberReady::SetMemberReady(): jumps straight to the base-object constructor

    // 0x1004ba7d0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // PlayerGroupDelta::SetGameLoading::SetGameLoading(): jumps straight to the base-object constructor

    // 0x1004ba7e0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // PlayerGroupDelta::StartGame::StartGame(): jumps straight to the base-object constructor

    // 0x1004ba7f0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // PlayerGroupDelta::UpdateMemberBase::UpdateMemberBase(): jumps straight to the base-object constructor

    // 0x1004ba800, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // PlayerGroupDelta::SetVarValue::SetVarValue(): jumps straight to the base-object constructor

    // 0x1004ba810, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // PlayerGroupDelta::SetVarBitValue::SetVarBitValue(): jumps straight to the base-object constructor

    // 0x1004ba820, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // PlayerGroupDelta::SetMemberTeam::SetMemberTeam(): jumps straight to the base-object constructor

    // 0x1004bc320, 16 bytes, complete-object destructor, inline, placed by class name
    // PlayerGroupDelta::AddMember::~AddMember(): jumps straight to the base-object destructor

    // 0x1004bc330, 32 bytes, deleting destructor, inline, placed by class name
    // PlayerGroupDelta::AddMember::~AddMember()
    void PlayerGroupDelta::AddMember::~AddMember() {
        ~AddMember(this);
        operator_delete(this);
    }

    // 0x1004bc350, 16 bytes, complete-object destructor, inline, placed by class name
    // PlayerGroupDelta::AddBanned::~AddBanned(): jumps straight to the base-object destructor

    // 0x1004bc360, 32 bytes, deleting destructor, inline, placed by class name
    // PlayerGroupDelta::AddBanned::~AddBanned()
    void PlayerGroupDelta::AddBanned::~AddBanned() {
        ~AddBanned(this);
        operator_delete(this);
    }

    // 0x1004bc380, 16 bytes, complete-object destructor, inline, placed by class name
    // PlayerGroupDelta::UpdateMemberBase::~UpdateMemberBase(): jumps straight to the base-object destructor

    // 0x1004bc390, 32 bytes, deleting destructor, inline, placed by class name
    // PlayerGroupDelta::UpdateMemberBase::~UpdateMemberBase()
    void PlayerGroupDelta::UpdateMemberBase::~UpdateMemberBase() {
        ~UpdateMemberBase(this);
        operator_delete(this);
    }

    // 0x1004bc3b0, 16 bytes, complete-object destructor, inline, placed by class name
    // PlayerGroupDelta::SetVarValue::~SetVarValue(): jumps straight to the base-object destructor

    // 0x1004bc3c0, 32 bytes, deleting destructor, inline, placed by class name
    // PlayerGroupDelta::SetVarValue::~SetVarValue()
    void PlayerGroupDelta::SetVarValue::~SetVarValue() {
        ~SetVarValue(this);
        operator_delete(this);
    }

    // 0x1004bcf20, 64 bytes, base-object constructor, inline, placed by class name
    // PlayerGroupDelta::AddMember::AddMember()
    void PlayerGroupDelta::AddMember::AddMember() {
        new (this) PlayerGroupDeltaEntry();
        field_0 = &PTR__AddMember_100f016f8;
        new (field_8) PlayerGroupMember();
    }

    // 0x1004bcf60, 32 bytes, base-object constructor, inline, placed by class name
    // PlayerGroupDelta::PlayerGroupDeltaEntry::PlayerGroupDeltaEntry()
    void PlayerGroupDelta::PlayerGroupDeltaEntry::PlayerGroupDeltaEntry() {
        field_0 = PTR_vtable_100ee7f98 + 16;
    }

    // 0x1004bd040, 32 bytes, base-object constructor, inline, placed by class name
    // PlayerGroupDelta::DeleteMember::DeleteMember()
    void PlayerGroupDelta::DeleteMember::DeleteMember() {
        new (this) PlayerGroupDeltaEntry();
        field_0 = &PTR__ScriptOption_100f01728;
    }

    // 0x1004bd060, 64 bytes, base-object constructor, inline, placed by class name
    // PlayerGroupDelta::AddBanned::AddBanned()
    void PlayerGroupDelta::AddBanned::AddBanned() {
        new (this) PlayerGroupDeltaEntry();
        field_0 = &PTR__AddBanned_100f01758;
        new (field_8) oldscape::loottracker::SourceItem();
    }

    // 0x1004bd0a0, 32 bytes, base-object constructor, inline, placed by class name
    // PlayerGroupDelta::DeleteBanned::DeleteBanned()
    void PlayerGroupDelta::DeleteBanned::DeleteBanned() {
        new (this) PlayerGroupDeltaEntry();
        field_0 = &PTR__ScriptOption_100f01788;
    }

    // 0x1004bd0c0, 32 bytes, base-object constructor, inline, placed by class name
    // PlayerGroupDelta::SetMemberRank::SetMemberRank()
    void PlayerGroupDelta::SetMemberRank::SetMemberRank() {
        new (this) PlayerGroupDeltaEntry();
        field_0 = &PTR__ScriptOption_100f017b8;
    }

    // 0x1004bd0e0, 32 bytes, base-object constructor, inline, placed by class name
    // PlayerGroupDelta::SetMemberOnline::SetMemberOnline()
    void PlayerGroupDelta::SetMemberOnline::SetMemberOnline() {
        new (this) PlayerGroupDeltaEntry();
        field_0 = &PTR__ScriptOption_100f017e8;
    }

    // 0x1004bd100, 32 bytes, base-object constructor, inline, placed by class name
    // PlayerGroupDelta::SetMemberOffline::SetMemberOffline()
    void PlayerGroupDelta::SetMemberOffline::SetMemberOffline() {
        new (this) PlayerGroupDeltaEntry();
        field_0 = &PTR__ScriptOption_100f01818;
    }

    // 0x1004bd120, 32 bytes, base-object constructor, inline, placed by class name
    // PlayerGroupDelta::SetMemberReady::SetMemberReady()
    void PlayerGroupDelta::SetMemberReady::SetMemberReady() {
        new (this) PlayerGroupDeltaEntry();
        field_0 = &PTR__ScriptOption_100f01848;
    }

    // 0x1004bd140, 32 bytes, base-object constructor, inline, placed by class name
    // PlayerGroupDelta::SetGameLoading::SetGameLoading()
    void PlayerGroupDelta::SetGameLoading::SetGameLoading() {
        new (this) PlayerGroupDeltaEntry();
        *this = (SetGameLoading)&PTR__ScriptOption_100f01878;
    }

    // 0x1004bd160, 32 bytes, base-object constructor, inline, placed by class name
    // PlayerGroupDelta::StartGame::StartGame()
    void PlayerGroupDelta::StartGame::StartGame() {
        new (this) PlayerGroupDeltaEntry();
        *this = (StartGame)&PTR__ScriptOption_100f018a8;
    }

    // 0x1004bd180, 64 bytes, base-object constructor, inline, placed by class name
    // PlayerGroupDelta::UpdateMemberBase::UpdateMemberBase()
    void PlayerGroupDelta::UpdateMemberBase::UpdateMemberBase() {
        new (this) PlayerGroupDeltaEntry();
        field_0 = &PTR__UpdateMemberBase_100f018d8;
        new (field_16) PlayerGroupMember();
    }

    // 0x1004bd1c0, 64 bytes, base-object constructor, inline, placed by class name
    // PlayerGroupDelta::SetVarValue::SetVarValue()
    void PlayerGroupDelta::SetVarValue::SetVarValue() {
        new (this) PlayerGroupDeltaEntry();
        field_0 = &PTR__SetVarValue_100f01908;
        std::pair<unsigned int, VarValue>::pair<true, false>((pair<unsigned int, VarValue>*)&field_8);
    }

    // 0x1004bd200, 32 bytes, base-object constructor, inline, placed by class name
    // PlayerGroupDelta::SetVarBitValue::SetVarBitValue()
    void PlayerGroupDelta::SetVarBitValue::SetVarBitValue() {
        new (this) PlayerGroupDeltaEntry();
        field_0 = &PTR__ScriptOption_100f01938;
    }

    // 0x1004bd220, 32 bytes, base-object constructor, inline, placed by class name
    // PlayerGroupDelta::SetMemberTeam::SetMemberTeam()
    void PlayerGroupDelta::SetMemberTeam::SetMemberTeam() {
        new (this) PlayerGroupDeltaEntry();
        field_0 = &PTR__ScriptOption_100f01968;
    }

    // 0x1004bdb40, 48 bytes, base-object destructor, inline, placed by class name
    // PlayerGroupDelta::AddMember::~AddMember()
    void PlayerGroupDelta::AddMember::~AddMember() {
        field_0 = &PTR__AddMember_100f016f8;
        field_8->~PlayerGroupMember();
        ~AutoSingleton();
    }

    // 0x1004bdb70, 48 bytes, base-object destructor, inline, placed by class name
    // PlayerGroupDelta::AddBanned::~AddBanned()
    void PlayerGroupDelta::AddBanned::~AddBanned() {
        field_0 = &PTR__AddBanned_100f01758;
        field_8->~hash_node();
        ~AutoSingleton();
    }

    // 0x1004bdba0, 48 bytes, base-object destructor, inline, placed by class name
    // PlayerGroupDelta::UpdateMemberBase::~UpdateMemberBase()
    void PlayerGroupDelta::UpdateMemberBase::~UpdateMemberBase() {
        field_0 = &PTR__UpdateMemberBase_100f018d8;
        field_16->~PlayerGroupMember();
        ~AutoSingleton();
    }

    // 0x1004bdbd0, 48 bytes, base-object destructor, inline, placed by class name
    // PlayerGroupDelta::SetVarValue::~SetVarValue()
    void PlayerGroupDelta::SetVarValue::~SetVarValue() {
        field_0 = &PTR__SetVarValue_100f01908;
        (&field_8)->~pair();
        ~AutoSingleton();
    }

} // namespace jag::game
