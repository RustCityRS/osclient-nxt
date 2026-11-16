// libs/oldscape/rs2lib/social/clanchat/ClanChannelDelta.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.rs2lib

namespace jag::oldscape::rs2lib::social {
    class ClanChannelDelta {
    public:
        class AddUser;
        class ClanChannelDeltaEntry;
        class DeleteUser;
        class UpdateClanChannelBaseSettings;
        class UpdateUserDetails;
        class UpdateUserDetailsV2;
        ~ClanChannelDelta();
        ClanChannelDelta(ClanChannel&);
        ClanChannelDelta(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        void Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        void AddUserToEntryList(long long, eastl::string, int, signed char, long long);
        void DeleteUserInEntryList(int, int, long long);
        void UpdateUserDetailsInEntryList(int, signed char, int, long long, eastl::string, bool);
        void UpdateBaseSettingsInEntryList(eastl::string, bool, signed char, signed char);
        void Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, bool, bool);
        void ApplyToClanChannel(ClanChannel&);

        // data members, from how the methods use this: 32 bytes
        char _unknown_0[16];
        undefined8 field_16; // offset 16
        undefined8 field_24; // offset 24
    };

    class ClanChannelDelta::AddUser {
    public:
        // virtual methods in vtable order
        virtual ~AddUser();
        virtual GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        virtual void Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, bool, bool);
        virtual void Apply(ClanChannel&);
        AddUser(long long, eastl::string, int, signed char, long long);
        AddUser();

        // data members, from how the methods use this: 88 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[24];
        long field_32; // offset 32
        char _unknown_40[32];
        uint field_72; // offset 72
        char field_76; // offset 76
        char _unknown_77[3];
        undefined8 field_80; // offset 80
    };

    class ClanChannelDelta::ClanChannelDeltaEntry {
    public:
        // virtual methods in vtable order
        virtual ~ClanChannelDeltaEntry();
        ClanChannelDeltaEntry();

        // data members, from how the methods use this: 32 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        undefined8 field_24; // offset 24
    };

    class ClanChannelDelta::DeleteUser {
    public:
        // virtual methods in vtable order
        virtual ~DeleteUser();
        virtual GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        virtual void Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, bool, bool);
        virtual void Apply(ClanChannel&);
        DeleteUser(int, int, long long);
        DeleteUser();

        // data members, from how the methods use this: 48 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[24];
        uint field_32;     // offset 32
        uint field_36;     // offset 36
        longlong field_40; // offset 40
    };

    class ClanChannelDelta::UpdateClanChannelBaseSettings {
    public:
        // virtual methods in vtable order
        virtual ~UpdateClanChannelBaseSettings();
        virtual GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        virtual void Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, bool, bool);
        virtual void Apply(ClanChannel&);
        UpdateClanChannelBaseSettings(eastl::string, bool, signed char, signed char);
        UpdateClanChannelBaseSettings();

        // data members, from how the methods use this: 74 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[56];
        bool field_64; // offset 64
        char field_65; // offset 65
        char field_66; // offset 66
        char _unknown_67[7];
    };

    class ClanChannelDelta::UpdateUserDetails {
    public:
        // virtual methods in vtable order
        virtual ~UpdateUserDetails();
        virtual GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        virtual void Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, bool, bool);
        virtual void Apply(ClanChannel&);
        UpdateUserDetails(int, signed char, int, long long, eastl::string);
        UpdateUserDetails();

        // data members, from how the methods use this: 64 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[24];
        uint field_32; // offset 32
        char field_36; // offset 36
        char _unknown_37[3];
        uint field_40; // offset 40
        char _unknown_44[4];
        undefined8 field_48; // offset 48
        char _unknown_56[8];
    };

    class ClanChannelDelta::UpdateUserDetailsV2 {
    public:
        // virtual methods in vtable order
        virtual ~UpdateUserDetailsV2();
        virtual GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        virtual void Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, bool, bool);
        virtual void Apply(ClanChannel&);
        UpdateUserDetailsV2(int, signed char, int, long long, eastl::string, bool);
        UpdateUserDetailsV2();

        // data members, from how the methods use this: 89 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[24];
        uint field_32; // offset 32
        char field_36; // offset 36
        char _unknown_37[3];
        uint field_40; // offset 40
        char _unknown_44[4];
        undefined8 field_48; // offset 48
        char _unknown_56[32];
        bool field_88; // offset 88
    };

    // 0x100152220, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ClanChannelDelta::~ClanChannelDelta(): jumps straight to the base-object destructor

    // 0x100152230, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // ClanChannelDelta::~ClanChannelDelta()
    void ClanChannelDelta::~ClanChannelDelta() {
        ~SharedPtrList();
    }

    // 0x10025b3b0, 48 bytes, base-object constructor, inline, placed by class name
    // ClanChannelDelta::ClanChannelDeltaEntry::ClanChannelDeltaEntry()
    void ClanChannelDelta::ClanChannelDeltaEntry::ClanChannelDeltaEntry() {
        new (this) Linkable<ClanChannelDelta::ClanChannelDeltaEntry>();
        field_0 = PTR_vtable_100ee8ac0 + 16;
    }

    // 0x10025b3e0, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ClanChannelDelta::ClanChannelDeltaEntry::~ClanChannelDeltaEntry()
    /* Linkable<ClanChannelDelta::ClanChannelDeltaEntry>::~Linkable()
    */

    void Linkable<ClanChannelDelta::ClanChannelDeltaEntry>::~Linkable() {
        ~Linkable(this);
    }

    // 0x100269930, 16 bytes, complete-object destructor, inline, placed by class name
    // ClanChannelDelta::AddUser::~AddUser(): jumps straight to the base-object destructor

    // 0x100269940, 32 bytes, deleting destructor, inline, placed by class name
    // ClanChannelDelta::AddUser::~AddUser()
    void ClanChannelDelta::AddUser::~AddUser() {
        ~AddUser(this);
        operator_delete(this);
    }

    // 0x100269960, 16 bytes, inline, placed by class name
    // ClanChannelDelta::AddUser::GetID() const
    /* ClanSettingsDelta::AddMemberOldV1::GetID() const */

    undefined8 ClanSettingsDelta::AddMemberOldV1::GetID() {
        return 1;
    }

    // 0x100269970, 16 bytes, complete-object destructor, inline, placed by class name
    // ClanChannelDelta::DeleteUser::~DeleteUser(): jumps straight to the base-object destructor

    // 0x100269980, 32 bytes, deleting destructor, inline, placed by class name
    // ClanChannelDelta::DeleteUser::~DeleteUser()
    void ClanChannelDelta::DeleteUser::~DeleteUser() {
        ~DeleteUser(this);
        operator_delete(this);
    }

    // 0x1002699a0, 16 bytes, inline, placed by class name
    // ClanChannelDelta::DeleteUser::GetID() const
    /* ClanSettingsDelta::AddBanned::GetID() const */

    undefined8 ClanSettingsDelta::AddBanned::GetID() {
        return 3;
    }

    // 0x1002699b0, 16 bytes, complete-object destructor, inline, placed by class name
    // ClanChannelDelta::UpdateUserDetails::~UpdateUserDetails(): jumps straight to the base-object destructor

    // 0x1002699c0, 32 bytes, deleting destructor, inline, placed by class name
    // ClanChannelDelta::UpdateUserDetails::~UpdateUserDetails()
    void ClanChannelDelta::UpdateUserDetails::~UpdateUserDetails() {
        ~UpdateUserDetails(this);
        operator_delete(this);
    }

    // 0x1002699e0, 16 bytes, inline, placed by class name
    // ClanChannelDelta::UpdateUserDetails::GetID() const
    /* ClanSettingsDelta::SetMemberRank::GetID() const */

    undefined8 ClanSettingsDelta::SetMemberRank::GetID() {
        return 2;
    }

    // 0x1002699f0, 16 bytes, complete-object destructor, inline, placed by class name
    // ClanChannelDelta::UpdateUserDetailsV2::~UpdateUserDetailsV2(): jumps straight to the base-object destructor

    // 0x100269a00, 32 bytes, deleting destructor, inline, placed by class name
    // ClanChannelDelta::UpdateUserDetailsV2::~UpdateUserDetailsV2()
    void ClanChannelDelta::UpdateUserDetailsV2::~UpdateUserDetailsV2() {
        ~UpdateUserDetailsV2(this);
        operator_delete(this);
    }

    // 0x100269a20, 16 bytes, complete-object destructor, inline, placed by class name
    // ClanChannelDelta::UpdateClanChannelBaseSettings::~UpdateClanChannelBaseSettings(): jumps straight to the base-object destructor

    // 0x100269a30, 32 bytes, deleting destructor, inline, placed by class name
    // ClanChannelDelta::UpdateClanChannelBaseSettings::~UpdateClanChannelBaseSettings()
    void ClanChannelDelta::UpdateClanChannelBaseSettings::~UpdateClanChannelBaseSettings() {
        ~UpdateClanChannelBaseSettings(this);
        operator_delete(this);
    }

    // 0x100269a50, 16 bytes, inline, placed by class name
    // ClanChannelDelta::UpdateClanChannelBaseSettings::GetID() const
    /* ClanSettingsDelta::UpdateClanSettingsBaseSettings::GetID() const
    */

    undefined8 ClanSettingsDelta::UpdateClanSettingsBaseSettings::GetID() {
        return 4;
    }

    // 0x100269f30, 48 bytes, base-object destructor, inline, placed by class name
    // ClanChannelDelta::AddUser::~AddUser()
    void ClanChannelDelta::AddUser::~AddUser() {
        field_0 = &PTR__AddUser_100ef8210;
        (&field_40)->~basic_string();
        ~Linkable();
    }

    // 0x100269f60, 16 bytes, base-object destructor, inline, placed by class name
    // ClanChannelDelta::DeleteUser::~DeleteUser()
    void ClanChannelDelta::DeleteUser::~DeleteUser() {
        ~Linkable();
    }

    // 0x100269f70, 48 bytes, base-object destructor, inline, placed by class name
    // ClanChannelDelta::UpdateUserDetails::~UpdateUserDetails()
    void ClanChannelDelta::UpdateUserDetails::~UpdateUserDetails() {
        field_0 = &PTR__UpdateUserDetails_100ef8290;
        (&field_56)->~basic_string();
        ~Linkable();
    }

    // 0x100269fa0, 48 bytes, base-object destructor, inline, placed by class name
    // ClanChannelDelta::UpdateUserDetailsV2::~UpdateUserDetailsV2()
    void ClanChannelDelta::UpdateUserDetailsV2::~UpdateUserDetailsV2() {
        field_0 = &PTR__UpdateUserDetailsV2_100ef82d0;
        (&field_56)->~basic_string();
        ~Linkable();
    }

    // 0x100269fd0, 48 bytes, base-object destructor, inline, placed by class name
    // ClanChannelDelta::UpdateClanChannelBaseSettings::~UpdateClanChannelBaseSettings()
    void ClanChannelDelta::UpdateClanChannelBaseSettings::~UpdateClanChannelBaseSettings() {
        field_0 = &PTR__UpdateClanChannelBaseSettings_100ef8310;
        (&field_32)->~basic_string();
        ~Linkable();
    }

    // 0x10026bf40, 16 bytes, complete-object constructor, inline, placed by class name
    // ClanChannelDelta::AddUser::AddUser(): jumps straight to the base-object constructor

    // 0x10026bf50, 80 bytes, base-object constructor, inline, placed by class name
    // ClanChannelDelta::AddUser::AddUser()
    void ClanChannelDelta::AddUser::AddUser() {
        new (this) ClanChannelDeltaEntry();
        field_0 = &PTR__AddUser_100ef8210;
        field_32 = -1;
        new (&field_40) eastl::string();
    }

    // 0x10026c040, 16 bytes, complete-object constructor, inline, placed by class name
    // ClanChannelDelta::UpdateClanChannelBaseSettings::UpdateClanChannelBaseSettings(): jumps straight to the base-object constructor

    // 0x10026c050, 64 bytes, base-object constructor, inline, placed by class name
    // ClanChannelDelta::UpdateClanChannelBaseSettings::UpdateClanChannelBaseSettings()
    void ClanChannelDelta::UpdateClanChannelBaseSettings::UpdateClanChannelBaseSettings() {
        new (this) ClanChannelDeltaEntry();
        field_0 = &PTR__UpdateClanChannelBaseSettings_100ef8310;
        new (&field_32) eastl::string();
    }

    // 0x10026c0b0, 16 bytes, complete-object constructor, inline, placed by class name
    // ClanChannelDelta::DeleteUser::DeleteUser(): jumps straight to the base-object constructor

    // 0x10026c0c0, 48 bytes, base-object constructor, inline, placed by class name
    // ClanChannelDelta::DeleteUser::DeleteUser()
    void ClanChannelDelta::DeleteUser::DeleteUser() {
        new (this) ClanChannelDeltaEntry();
        field_0 = &PTR__DeleteUser_100ef8250;
        field_32 = 4294967295;
    }

    // 0x10026c130, 16 bytes, complete-object constructor, inline, placed by class name
    // ClanChannelDelta::UpdateUserDetails::UpdateUserDetails(): jumps straight to the base-object constructor

    // 0x10026c140, 80 bytes, base-object constructor, inline, placed by class name
    // ClanChannelDelta::UpdateUserDetails::UpdateUserDetails()
    void ClanChannelDelta::UpdateUserDetails::UpdateUserDetails() {
        new (this) ClanChannelDeltaEntry();
        field_0 = &PTR__UpdateUserDetails_100ef8290;
        field_32 = 4294967295;
        new (&field_56) eastl::string();
    }

    // 0x10026c200, 16 bytes, complete-object constructor, inline, placed by class name
    // ClanChannelDelta::UpdateUserDetailsV2::UpdateUserDetailsV2(): jumps straight to the base-object constructor

    // 0x10026c210, 80 bytes, base-object constructor, inline, placed by class name
    // ClanChannelDelta::UpdateUserDetailsV2::UpdateUserDetailsV2()
    void ClanChannelDelta::UpdateUserDetailsV2::UpdateUserDetailsV2() {
        new (this) ClanChannelDeltaEntry();
        field_0 = &PTR__UpdateUserDetailsV2_100ef82d0;
        field_32 = 4294967295;
        new (&field_56) eastl::string();
    }

} // namespace jag::oldscape::rs2lib::social

namespace jag {
    // 0x100152490, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::rs2lib::social::ClanSettingsDelta* placement_new<oldscape::rs2lib::social::ClanSettingsDelta, oldscape::core::SuperPacket&>(void*, oldscape::core::SuperPacket&)
    ClanSettingsDelta* jag::placement_new<oldscape::rs2lib::social::ClanSettingsDelta, oldscape::core::SuperPacket&>(
        void* param_1, SuperPacket* param_2) {
        oldscape::rs2lib::social::ClanSettingsDelta::ClanSettingsDelta(param_1, (PacketJ*)param_2);
        return param_1;
    }

    // 0x1001524b0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta>* placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta>, int, oldscape::rs2lib::social::ClanSettingsDelta*&>(void*, int&&, oldscape::rs2lib::social::ClanSettingsDelta*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta>, int,
                                           oldscape::rs2lib::social::ClanSettingsDelta*&>(void* param_1, int* param_2,
                                                                                          ClanSettingsDelta** param_3) {
        ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta>::ref_counter_shared(param_1, (long)*param_2,
                                                                                            *param_3);
        return param_1;
    }

    // 0x1001524d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta*): jumps straight to the base-object constructor

    // 0x1001524e0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanSettingsDelta*)
    void
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta>::ref_counter_shared(ulong param_1,
                                                                                        ClanSettingsDelta* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee78f8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ClanSettingsDelta**)(this + 24) = param_2;
    }

    // 0x100152520, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta>::DeleteData()
    void ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~ClanSettingsDelta();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 32;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag

namespace jag::ui {
    // 0x100269960: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const, which has identical code
    ComponentSingleValueMixin::GetValueRepresentationType() const;

    // 0x1002699a0: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::DeleteUser::GetID() const, which has identical code
    ComponentMultiValueMixin::GetValueRepresentationType() const;

    // 0x1002699e0: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails::GetID() const, which has identical code
    ComponentSingleValueMultiOptionMixin::GetValueRepresentationType() const;

} // namespace jag::ui

namespace jag::game {
    // 0x100269960: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const, which has identical code
    BaseVarTypeLong::GetSerialID() const;

    // 0x1002699a0: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::DeleteUser::GetID() const, which has identical code
    BaseVarTypeCoordFine::GetSerialID() const;

    // 0x1002699e0: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails::GetID() const, which has identical code
    BaseVarTypeString::GetSerialID() const;

} // namespace jag::game

namespace jag::game::option {
    // 0x100269960: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const, which has identical code
    LightingQuality::GetDefault();

    // 0x100269960: the linker folded this into oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const, which has identical code
    AntialiasingQuality::GetDefault();

} // namespace jag::game::option
