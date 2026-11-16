// libs/oldscape/rs2lib/social/clanchat/ClanSettingsDelta.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::rs2lib::social {
    class ClanSettingsDelta {
    public:
        class AddBanned;
        class AddMember;
        class AddMemberOldV1;
        class ClanSettingsDeltaEntry;
        class DeleteBanned;
        class DeleteMember;
        class SetClanName;
        class SetExtraSettingInt;
        class SetExtraSettingIntVarbit;
        class SetExtraSettingLong;
        class SetExtraSettingString;
        class SetMemberExtraInfo;
        class SetMemberMuted;
        class SetMemberRank;
        class SetOwner;
        class UpdateClanSettingsBaseSettings;
        ~ClanSettingsDelta();
        ClanSettingsDelta(ClanSettings&);
        ClanSettingsDelta(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        void Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        void AddMemberToEntryList(long long, eastl::string, int);
        void DeleteMemberToEntryList(int);
        void SetMemberRankToEntryList(int, signed char);
        void SetOwnerToEntryList(int);
        void SetMemberExtraInfoToEntryList(int, int, unsigned int, unsigned int);
        void SetMemberMutedToEntryList(int, bool);
        void AddBannedToEntryList(long long, eastl::string);
        void DeleteBannedToEntryList(int);
        void SetClanNameToEntryList(eastl::string, int);
        void UpdateBaseSettingsToEntryList(ClanSettings&);
        void SetExtraSettingIntToEntryList(int, int);
        void SetExtraSettingIntVarbitToEntryList(int, int, unsigned int, unsigned int);
        void SetExtraSettingLongToEntryList(int, long long);
        void SetExtraSettingStringToEntryList(int, eastl::string);
        void Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, bool, bool);
        void ApplyToClanSettings(ClanSettings&);
        GetUserHashes();
        void ApplyDisplayNames(Array<eastl::string, eastl::allocator>&);

        // data members, from how the methods use this: 32 bytes
        char _unknown_0[8];
        longlong* field_8;   // offset 8
        longlong field_16;   // offset 16
        undefined4 field_24; // offset 24
        char _unknown_28[4];
    };

    class ClanSettingsDelta::AddBanned {
    public:
        // virtual methods in vtable order
        virtual ~AddBanned();
        virtual GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        virtual void Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, bool, bool);
        virtual void Apply(ClanSettings&);
        AddBanned(long long, eastl::string);
        AddBanned();

        // data members, from how the methods use this: 48 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[24];
        undefined8 field_32; // offset 32
        char _unknown_40[8];
    };

    class ClanSettingsDelta::AddMember {
    public:
        // virtual methods in vtable order
        virtual ~AddMember();
        virtual GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        virtual void Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, bool, bool);
        virtual void Apply(ClanSettings&);
        AddMember(long long, eastl::string, int);
        AddMember();

        // data members, from how the methods use this: 80 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[24];
        long field_32; // offset 32
        char _unknown_40[32];
        uint field_72; // offset 72
        char _unknown_76[4];
    };

    class ClanSettingsDelta::AddMemberOldV1 {
    public:
        // virtual methods in vtable order
        virtual ~AddMemberOldV1();
        virtual GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        virtual void Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, bool, bool);
        virtual void Apply(ClanSettings&);
        AddMemberOldV1(long long, eastl::string);
        AddMemberOldV1();

        // data members, from how the methods use this: 48 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[24];
        long field_32; // offset 32
        char _unknown_40[8];
    };

    class ClanSettingsDelta::ClanSettingsDeltaEntry {
    public:
        // virtual methods in vtable order
        virtual ~ClanSettingsDeltaEntry();
        ClanSettingsDeltaEntry();

        // data members, from how the methods use this: 32 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[16];
        undefined8 field_24; // offset 24
    };

    class ClanSettingsDelta::DeleteBanned {
    public:
        // virtual methods in vtable order
        virtual ~DeleteBanned();
        virtual GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        virtual void Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, bool, bool);
        virtual void Apply(ClanSettings&);
        DeleteBanned(int);
        DeleteBanned();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[24];
        uint field_32; // offset 32
        char _unknown_36[4];
    };

    class ClanSettingsDelta::DeleteMember {
    public:
        // virtual methods in vtable order
        virtual ~DeleteMember();
        virtual GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        virtual void Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, bool, bool);
        virtual void Apply(ClanSettings&);
        DeleteMember(int);
        DeleteMember();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[24];
        uint field_32; // offset 32
        char _unknown_36[4];
    };

    class ClanSettingsDelta::SetClanName {
    public:
        // virtual methods in vtable order
        virtual ~SetClanName();
        virtual GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        virtual void Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, bool, bool);
        virtual void Apply(ClanSettings&);
        SetClanName(eastl::string, int);
        SetClanName();

        // data members, from how the methods use this: 72 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[56];
        undefined4 field_64; // offset 64
        char _unknown_68[4];
    };

    class ClanSettingsDelta::SetExtraSettingInt {
    public:
        // virtual methods in vtable order
        virtual ~SetExtraSettingInt();
        virtual GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        virtual void Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, bool, bool);
        virtual void Apply(ClanSettings&);
        SetExtraSettingInt(int, int);
        SetExtraSettingInt();

        // data members, from how the methods use this: 44 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[24];
        int m_extraSettingInt; // offset 32
        int field_36;          // offset 36
        char _unknown_40[4];
    };

    class ClanSettingsDelta::SetExtraSettingIntVarbit {
    public:
        // virtual methods in vtable order
        virtual ~SetExtraSettingIntVarbit();
        virtual GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        virtual void Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, bool, bool);
        virtual void Apply(ClanSettings&);
        SetExtraSettingIntVarbit(int, int, unsigned int, unsigned int);
        SetExtraSettingIntVarbit();

        // data members, from how the methods use this: 52 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[24];
        int field_32;  // offset 32
        uint field_36; // offset 36
        uint field_40; // offset 40
        int field_44;  // offset 44
        char _unknown_48[4];
    };

    class ClanSettingsDelta::SetExtraSettingLong {
    public:
        // virtual methods in vtable order
        virtual ~SetExtraSettingLong();
        virtual GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        virtual void Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, bool, bool);
        virtual void Apply(ClanSettings&);
        SetExtraSettingLong(int, long long);
        SetExtraSettingLong();

        // data members, from how the methods use this: 48 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[24];
        int m_extraSettingLong; // offset 32
        char _unknown_36[4];
        longlong field_40; // offset 40
    };

    class ClanSettingsDelta::SetExtraSettingString {
    public:
        // virtual methods in vtable order
        virtual ~SetExtraSettingString();
        virtual GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        virtual void Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, bool, bool);
        virtual void Apply(ClanSettings&);
        SetExtraSettingString(int, eastl::string);
        SetExtraSettingString();

        // data members, from how the methods use this: 48 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[24];
        undefined4 field_32; // offset 32
        char _unknown_36[12];
    };

    class ClanSettingsDelta::SetMemberExtraInfo {
    public:
        // virtual methods in vtable order
        virtual ~SetMemberExtraInfo();
        virtual GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        virtual void Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, bool, bool);
        virtual void Apply(ClanSettings&);
        SetMemberExtraInfo(int, int, unsigned int, unsigned int);
        SetMemberExtraInfo();

        // data members, from how the methods use this: 52 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[24];
        uint field_32; // offset 32
        int field_36;  // offset 36
        uint field_40; // offset 40
        uint field_44; // offset 44
        char _unknown_48[4];
    };

    class ClanSettingsDelta::SetMemberMuted {
    public:
        // virtual methods in vtable order
        virtual ~SetMemberMuted();
        virtual GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        virtual void Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, bool, bool);
        virtual void Apply(ClanSettings&);
        SetMemberMuted(int, bool);
        SetMemberMuted();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[24];
        uint m_memberMuted; // offset 32
        bool field_36;      // offset 36
        char _unknown_37[3];
    };

    class ClanSettingsDelta::SetMemberRank {
    public:
        // virtual methods in vtable order
        virtual ~SetMemberRank();
        virtual GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        virtual void Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, bool, bool);
        virtual void Apply(ClanSettings&);
        SetMemberRank(int, signed char);
        SetMemberRank();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[24];
        uint m_memberRank; // offset 32
        char field_36;     // offset 36
        char _unknown_37[3];
    };

    class ClanSettingsDelta::SetOwner {
    public:
        // virtual methods in vtable order
        virtual ~SetOwner();
        virtual GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        virtual void Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, bool, bool);
        virtual void Apply(ClanSettings&);
        SetOwner(int);
        SetOwner();

        // data members, from how the methods use this: 40 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[24];
        uint m_owner; // offset 32
        char _unknown_36[4];
    };

    class ClanSettingsDelta::UpdateClanSettingsBaseSettings {
    public:
        // virtual methods in vtable order
        virtual ~UpdateClanSettingsBaseSettings();
        virtual GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        virtual void Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, bool, bool);
        virtual void Apply(ClanSettings&);
        UpdateClanSettingsBaseSettings(ClanSettings&);
        UpdateClanSettingsBaseSettings();

        // data members, from how the methods use this: 44 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[24];
        bool field_32; // offset 32
        char field_33; // offset 33
        char field_34; // offset 34
        char field_35; // offset 35
        char field_36; // offset 36
        char _unknown_37[7];
    };

    // 0x100152570, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ClanSettingsDelta::~ClanSettingsDelta(): jumps straight to the base-object destructor

    // 0x100152580, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // ClanSettingsDelta::~ClanSettingsDelta()
    void ClanSettingsDelta::~ClanSettingsDelta() {
        ~SharedPtrList();
    }

    // 0x100260a80, 48 bytes, base-object constructor, inline, placed by class name
    // ClanSettingsDelta::ClanSettingsDeltaEntry::ClanSettingsDeltaEntry()
    void ClanSettingsDelta::ClanSettingsDeltaEntry::ClanSettingsDeltaEntry() {
        new (this) Linkable<ClanSettingsDelta::ClanSettingsDeltaEntry>();
        field_0 = PTR_vtable_100ee8ac8 + 16;
    }

    // 0x100260ab0, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ClanSettingsDelta::ClanSettingsDeltaEntry::~ClanSettingsDeltaEntry()
    /* Linkable<ClanSettingsDelta::ClanSettingsDeltaEntry>::~Linkable()
    */

    void Linkable<ClanSettingsDelta::ClanSettingsDeltaEntry>::~Linkable() {
        ~Linkable(this);
    }

    // 0x100269a60, 16 bytes, complete-object destructor, inline, placed by class name
    // ClanSettingsDelta::AddMemberOldV1::~AddMemberOldV1(): jumps straight to the base-object destructor

    // 0x100269a70, 32 bytes, deleting destructor, inline, placed by class name
    // ClanSettingsDelta::AddMemberOldV1::~AddMemberOldV1()
    void ClanSettingsDelta::AddMemberOldV1::~AddMemberOldV1() {
        ~AddMemberOldV1(this);
        operator_delete(this);
    }

    // 0x100269a90, 16 bytes, complete-object destructor, inline, placed by class name
    // ClanSettingsDelta::AddMember::~AddMember(): jumps straight to the base-object destructor

    // 0x100269aa0, 32 bytes, deleting destructor, inline, placed by class name
    // ClanSettingsDelta::AddMember::~AddMember()
    void ClanSettingsDelta::AddMember::~AddMember() {
        ~AddMember(this);
        operator_delete(this);
    }

    // 0x100269ac0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ClanSettingsDelta::AddMember::GetID() const
    /* ui::ComboField::GetType() const */

    undefined8 ui::ComboField::GetType() {
        return 13;
    }

    // 0x100269ad0, 16 bytes, complete-object destructor, inline, placed by class name
    // ClanSettingsDelta::DeleteMember::~DeleteMember(): jumps straight to the base-object destructor

    // 0x100269ae0, 32 bytes, deleting destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ClanSettingsDelta::DeleteMember::~DeleteMember()
    /* ClanSettingsDelta::SetMemberRank::~SetMemberRank() */

    void ClanSettingsDelta::SetMemberRank::~SetMemberRank() {
        ~SetMemberRank(this);
        operator_delete(this);
    }

    // 0x100269b00, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ClanSettingsDelta::SetOwner::GetID() const
    /* game::option::MaxBackgroundFps::GetDefault() */

    undefined8 game::option::MaxBackgroundFps::GetDefault() {
        return 15;
    }

    // 0x100269b10, 16 bytes, inline, placed by class name
    // ClanSettingsDelta::SetMemberExtraInfo::GetID() const
    undefined8 ClanSettingsDelta::SetMemberExtraInfo::GetID() {
        return 7;
    }

    // 0x100269b20, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ClanSettingsDelta::SetMemberMuted::GetID() const
    /* ui::PagedLayerHeader::GetType() const */

    undefined8 ui::PagedLayerHeader::GetType() {
        return 14;
    }

    // 0x100269b30, 16 bytes, complete-object destructor, inline, placed by class name
    // ClanSettingsDelta::AddBanned::~AddBanned(): jumps straight to the base-object destructor

    // 0x100269b40, 32 bytes, deleting destructor, inline, placed by class name
    // ClanSettingsDelta::AddBanned::~AddBanned()
    void ClanSettingsDelta::AddBanned::~AddBanned() {
        ~AddBanned(this);
        operator_delete(this);
    }

    // 0x100269b60, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ClanSettingsDelta::DeleteBanned::GetID() const
    /* ui::RadialProgressOverlay::GetType() const */

    undefined8 ui::RadialProgressOverlay::GetType() {
        return 6;
    }

    // 0x100269b70, 16 bytes, complete-object destructor, inline, placed by class name
    // ClanSettingsDelta::SetClanName::~SetClanName(): jumps straight to the base-object destructor

    // 0x100269b80, 32 bytes, deleting destructor, inline, placed by class name
    // ClanSettingsDelta::SetClanName::~SetClanName()
    void ClanSettingsDelta::SetClanName::~SetClanName() {
        ~SetClanName(this);
        operator_delete(this);
    }

    // 0x100269ba0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ClanSettingsDelta::SetClanName::GetID() const
    /* game::BuildSingleLocationWorker::GetWorkerJobType() const */

    undefined8 game::BuildSingleLocationWorker::GetWorkerJobType() {
        return 12;
    }

    // 0x100269bb0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ClanSettingsDelta::SetExtraSettingInt::GetID() const
    /* ui::Button::GetType() const */

    undefined8 ui::Button::GetType() {
        return 8;
    }

    // 0x100269bc0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ClanSettingsDelta::SetExtraSettingIntVarbit::GetID() const
    /* ui::InputField::GetType() const */

    undefined8 ui::InputField::GetType() {
        return 11;
    }

    // 0x100269bd0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ClanSettingsDelta::SetExtraSettingLong::GetID() const
    /* ui::Check::GetType() const */

    undefined8 ui::Check::GetType() {
        return 9;
    }

    // 0x100269be0, 16 bytes, complete-object destructor, inline, placed by class name
    // ClanSettingsDelta::SetExtraSettingString::~SetExtraSettingString(): jumps straight to the base-object destructor

    // 0x100269bf0, 32 bytes, deleting destructor, inline, placed by class name
    // ClanSettingsDelta::SetExtraSettingString::~SetExtraSettingString()
    void ClanSettingsDelta::SetExtraSettingString::~SetExtraSettingString() {
        ~SetExtraSettingString(this);
        operator_delete(this);
    }

    // 0x100269c10, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ClanSettingsDelta::SetExtraSettingString::GetID() const
    /* game::BuildCombinedLocationWorker::GetWorkerJobType() const */

    undefined8 game::BuildCombinedLocationWorker::GetWorkerJobType() {
        return 10;
    }

    // 0x10026a000, 48 bytes, base-object destructor, inline, placed by class name
    // ClanSettingsDelta::AddMemberOldV1::~AddMemberOldV1()
    void ClanSettingsDelta::AddMemberOldV1::~AddMemberOldV1() {
        field_0 = &PTR__AddMemberOldV1_100ef8350;
        (&field_40)->~basic_string();
        ~Linkable();
    }

    // 0x10026a030, 48 bytes, base-object destructor, inline, placed by class name
    // ClanSettingsDelta::AddMember::~AddMember()
    void ClanSettingsDelta::AddMember::~AddMember() {
        field_0 = &PTR__AddMember_100ef8390;
        (&field_40)->~basic_string();
        ~Linkable();
    }

    // 0x10026a060, 16 bytes, base-object destructor, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ClanSettingsDelta::DeleteMember::~DeleteMember()
    /* ClanSettingsDelta::SetMemberRank::~SetMemberRank() */

    void ClanSettingsDelta::SetMemberRank::~SetMemberRank() {
        ~Linkable();
    }

    // 0x10026a070, 48 bytes, base-object destructor, inline, placed by class name
    // ClanSettingsDelta::AddBanned::~AddBanned()
    void ClanSettingsDelta::AddBanned::~AddBanned() {
        field_0 = &PTR__AddBanned_100ef8510;
        (&field_40)->~basic_string();
        ~Linkable();
    }

    // 0x10026a0a0, 48 bytes, base-object destructor, inline, placed by class name
    // ClanSettingsDelta::SetClanName::~SetClanName()
    void ClanSettingsDelta::SetClanName::~SetClanName() {
        field_0 = &PTR__SetClanName_100ef8590;
        (&field_32)->~basic_string();
        ~Linkable();
    }

    // 0x10026a0d0, 48 bytes, base-object destructor, inline, placed by class name
    // ClanSettingsDelta::SetExtraSettingString::~SetExtraSettingString()
    void ClanSettingsDelta::SetExtraSettingString::~SetExtraSettingString() {
        field_0 = &PTR__SetExtraSettingString_100ef86d0;
        (&field_40)->~basic_string();
        ~Linkable();
    }

    // 0x10027e0e0, 16 bytes, complete-object constructor, inline, placed by class name
    // ClanSettingsDelta::AddBanned::AddBanned(): jumps straight to the base-object constructor

    // 0x10027e0f0, 80 bytes, base-object constructor, inline, placed by class name
    // ClanSettingsDelta::AddBanned::AddBanned()
    void ClanSettingsDelta::AddBanned::AddBanned() {
        new (this) ClanSettingsDeltaEntry();
        field_0 = &PTR__AddBanned_100ef8510;
        field_32 = 18446744073709551615;
        new (&field_40) eastl::string();
    }

    // 0x10027e200, 16 bytes, complete-object constructor, inline, placed by class name
    // ClanSettingsDelta::AddMemberOldV1::AddMemberOldV1(): jumps straight to the base-object constructor

    // 0x10027e210, 80 bytes, base-object constructor, inline, placed by class name
    // ClanSettingsDelta::AddMemberOldV1::AddMemberOldV1()
    void ClanSettingsDelta::AddMemberOldV1::AddMemberOldV1() {
        new (this) ClanSettingsDeltaEntry();
        field_0 = &PTR__AddMemberOldV1_100ef8350;
        field_32 = -1;
        new (&field_40) eastl::string();
    }

    // 0x10027e2d0, 16 bytes, complete-object constructor, inline, placed by class name
    // ClanSettingsDelta::AddMember::AddMember(): jumps straight to the base-object constructor

    // 0x10027e2e0, 80 bytes, base-object constructor, inline, placed by class name
    // ClanSettingsDelta::AddMember::AddMember()
    void ClanSettingsDelta::AddMember::AddMember() {
        new (this) ClanSettingsDeltaEntry();
        field_0 = &PTR__AddMember_100ef8390;
        field_32 = -1;
        new (&field_40) eastl::string();
        field_72 = 0;
    }

    // 0x10027e350, 16 bytes, complete-object constructor, inline, placed by class name
    // ClanSettingsDelta::UpdateClanSettingsBaseSettings::UpdateClanSettingsBaseSettings(): jumps straight to the base-object constructor

    // 0x10027e360, 48 bytes, base-object constructor, inline, placed by class name
    // ClanSettingsDelta::UpdateClanSettingsBaseSettings::UpdateClanSettingsBaseSettings()
    void ClanSettingsDelta::UpdateClanSettingsBaseSettings::UpdateClanSettingsBaseSettings() {
        new (this) ClanSettingsDeltaEntry();
        field_0 = &PTR__SetMemberRank_100ef85d0;
        field_32 = false;
        field_33 = '\0';
        field_34 = '\0';
        field_35 = '\0';
        field_36 = '\0';
    }

    // 0x10027e3b0, 16 bytes, complete-object constructor, inline, placed by class name
    // ClanSettingsDelta::DeleteBanned::DeleteBanned(): jumps straight to the base-object constructor

    // 0x10027e3c0, 48 bytes, base-object constructor, inline, placed by class name
    // ClanSettingsDelta::DeleteBanned::DeleteBanned()
    void ClanSettingsDelta::DeleteBanned::DeleteBanned() {
        new (this) ClanSettingsDeltaEntry();
        field_0 = &PTR__SetMemberRank_100ef8550;
        field_32 = 4294967295;
    }

    // 0x10027e410, 16 bytes, complete-object constructor, inline, placed by class name
    // ClanSettingsDelta::DeleteMember::DeleteMember(): jumps straight to the base-object constructor

    // 0x10027e420, 48 bytes, base-object constructor, inline, placed by class name
    // ClanSettingsDelta::DeleteMember::DeleteMember()
    void ClanSettingsDelta::DeleteMember::DeleteMember() {
        new (this) ClanSettingsDeltaEntry();
        field_0 = &PTR__SetMemberRank_100ef83d0;
        field_32 = 4294967295;
    }

    // 0x10027e470, 16 bytes, complete-object constructor, inline, placed by class name
    // ClanSettingsDelta::SetMemberRank::SetMemberRank(): jumps straight to the base-object constructor

    // 0x10027e480, 48 bytes, base-object constructor, inline, placed by class name
    // ClanSettingsDelta::SetMemberRank::SetMemberRank()
    void ClanSettingsDelta::SetMemberRank::SetMemberRank() {
        new (this) ClanSettingsDeltaEntry();
        field_0 = &PTR__SetMemberRank_100ef8410;
        m_memberRank = 4294967295;
        field_36 = '\0';
    }

    // 0x10027e4d0, 16 bytes, complete-object constructor, inline, placed by class name
    // ClanSettingsDelta::SetMemberExtraInfo::SetMemberExtraInfo(): jumps straight to the base-object constructor

    // 0x10027e4e0, 48 bytes, base-object constructor, inline, placed by class name
    // ClanSettingsDelta::SetMemberExtraInfo::SetMemberExtraInfo()
    void ClanSettingsDelta::SetMemberExtraInfo::SetMemberExtraInfo() {
        new (this) ClanSettingsDeltaEntry();
        field_0 = &PTR__SetMemberRank_100ef8490;
        field_32 = 4294967295;
        field_36 = 0;
        field_40 = 0;
        field_44 = 0;
    }

    // 0x10027e530, 16 bytes, complete-object constructor, inline, placed by class name
    // ClanSettingsDelta::SetMemberMuted::SetMemberMuted(): jumps straight to the base-object constructor

    // 0x10027e540, 48 bytes, base-object constructor, inline, placed by class name
    // ClanSettingsDelta::SetMemberMuted::SetMemberMuted()
    void ClanSettingsDelta::SetMemberMuted::SetMemberMuted() {
        new (this) ClanSettingsDeltaEntry();
        field_0 = &PTR__SetMemberRank_100ef84d0;
        m_memberMuted = 4294967295;
        field_36 = false;
    }

    // 0x10027e590, 16 bytes, complete-object constructor, inline, placed by class name
    // ClanSettingsDelta::SetExtraSettingInt::SetExtraSettingInt(): jumps straight to the base-object constructor

    // 0x10027e5a0, 48 bytes, base-object constructor, inline, placed by class name
    // ClanSettingsDelta::SetExtraSettingInt::SetExtraSettingInt()
    void ClanSettingsDelta::SetExtraSettingInt::SetExtraSettingInt() {
        new (this) ClanSettingsDeltaEntry();
        field_0 = &PTR__SetMemberRank_100ef8610;
        m_extraSettingInt = 0;
        field_36 = 0;
    }

    // 0x10027e5f0, 16 bytes, complete-object constructor, inline, placed by class name
    // ClanSettingsDelta::SetExtraSettingLong::SetExtraSettingLong(): jumps straight to the base-object constructor

    // 0x10027e600, 48 bytes, base-object constructor, inline, placed by class name
    // ClanSettingsDelta::SetExtraSettingLong::SetExtraSettingLong()
    void ClanSettingsDelta::SetExtraSettingLong::SetExtraSettingLong() {
        new (this) ClanSettingsDeltaEntry();
        field_0 = &PTR__SetMemberRank_100ef8690;
        m_extraSettingLong = 0;
        field_40 = 0;
    }

    // 0x10027e650, 16 bytes, complete-object constructor, inline, placed by class name
    // ClanSettingsDelta::SetExtraSettingString::SetExtraSettingString(): jumps straight to the base-object constructor

    // 0x10027e660, 80 bytes, base-object constructor, inline, placed by class name
    // ClanSettingsDelta::SetExtraSettingString::SetExtraSettingString()
    void ClanSettingsDelta::SetExtraSettingString::SetExtraSettingString() {
        new (this) ClanSettingsDeltaEntry();
        field_0 = &PTR__SetExtraSettingString_100ef86d0;
        field_32 = 0;
        new (&field_40) eastl::string();
    }

    // 0x10027e6d0, 16 bytes, complete-object constructor, inline, placed by class name
    // ClanSettingsDelta::SetExtraSettingIntVarbit::SetExtraSettingIntVarbit(): jumps straight to the base-object constructor

    // 0x10027e6e0, 48 bytes, base-object constructor, inline, placed by class name
    // ClanSettingsDelta::SetExtraSettingIntVarbit::SetExtraSettingIntVarbit()
    void ClanSettingsDelta::SetExtraSettingIntVarbit::SetExtraSettingIntVarbit() {
        new (this) ClanSettingsDeltaEntry();
        field_0 = &PTR__SetMemberRank_100ef8650;
        field_32 = 0;
        field_36 = 0;
        field_40 = 0;
        field_44 = 0;
    }

    // 0x10027e730, 16 bytes, complete-object constructor, inline, placed by class name
    // ClanSettingsDelta::SetClanName::SetClanName(): jumps straight to the base-object constructor

    // 0x10027e740, 80 bytes, base-object constructor, inline, placed by class name
    // ClanSettingsDelta::SetClanName::SetClanName()
    void ClanSettingsDelta::SetClanName::SetClanName() {
        new (this) ClanSettingsDeltaEntry();
        field_0 = &PTR__SetClanName_100ef8590;
        new (&field_32) eastl::string();
        field_64 = 0;
    }

    // 0x10027e7b0, 16 bytes, complete-object constructor, inline, placed by class name
    // ClanSettingsDelta::SetOwner::SetOwner(): jumps straight to the base-object constructor

    // 0x10027e7c0, 48 bytes, base-object constructor, inline, placed by class name
    // ClanSettingsDelta::SetOwner::SetOwner()
    void ClanSettingsDelta::SetOwner::SetOwner() {
        new (this) ClanSettingsDeltaEntry();
        field_0 = &PTR__SetMemberRank_100ef8450;
        m_owner = 4294967295;
    }

} // namespace jag::oldscape::rs2lib::social

namespace jag {
    // 0x100152db0, 48 bytes, inline, placed by debug map only (low confidence)
    // game::VarContainerSparse* placement_new<game::VarContainerSparse>(void*)
    VarContainerSparse* placement_new<game::VarContainerSparse>(void* param_1) {
        *(undefined8*)((long)param_1 + 48) = 0;
        *(undefined8*)((long)param_1 + 56) = 0;
        *(undefined8*)((long)param_1 + 32) = 0;
        *(undefined8*)((long)param_1 + 40) = 0;
        *(undefined8*)((long)param_1 + 16) = 0;
        *(undefined8*)((long)param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)((long)param_1 + 8) = 0;
        game::VarContainerSparse::VarContainerSparse(param_1);
        return param_1;
    }

    // 0x100152de0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::VarContainerSparse>* placement_new<ref_counter_shared<game::VarContainerSparse>, int, game::VarContainerSparse*&>(void*, int&&, game::VarContainerSparse*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<game::VarContainerSparse>, int, game::VarContainerSparse*&>(
        void* param_1, int* param_2, VarContainerSparse** param_3) {
        ref_counter_shared<game::VarContainerSparse>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100152f50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::VarContainerSparse>::ref_counter_shared(unsigned long, game::VarContainerSparse*): jumps straight to the base-object constructor

    // 0x100152f60, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::VarContainerSparse>::ref_counter_shared(unsigned long, game::VarContainerSparse*)
    void ref_counter_shared<game::VarContainerSparse>::ref_counter_shared(ulong param_1, VarContainerSparse* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7350 + 16;
        *(ulong*)(this + 16) = param_1;
        *(VarContainerSparse**)(this + 24) = param_2;
    }

    // 0x100152fa0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::VarContainerSparse>::DeleteData()
    /* ref_counter_shared<oldscape::ClientObj>::DeleteData() */

    void ref_counter_shared<oldscape::ClientObj>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 64;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100152ff0, 48 bytes, inline, placed by debug map only (low confidence)
    // oldscape::ClientObj* placement_new<oldscape::ClientObj>(void*)
    ClientObj* placement_new<oldscape::ClientObj>(void* param_1) {
        *(undefined8*)((long)param_1 + 48) = 0;
        *(undefined8*)((long)param_1 + 56) = 0;
        *(undefined8*)((long)param_1 + 32) = 0;
        *(undefined8*)((long)param_1 + 40) = 0;
        *(undefined8*)((long)param_1 + 16) = 0;
        *(undefined8*)((long)param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)((long)param_1 + 8) = 0;
        oldscape::ClientObj::ClientObj(param_1);
        return param_1;
    }

    // 0x100153020, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::ClientObj>* placement_new<ref_counter_shared<oldscape::ClientObj>, int, oldscape::ClientObj*&>(void*, int&&, oldscape::ClientObj*&)
    ref_counter_shared*
    placement_new<ref_counter_shared<oldscape::ClientObj>, int, oldscape::ClientObj*&>(void* param_1, int* param_2,
                                                                                       ClientObj** param_3) {
        ref_counter_shared<oldscape::ClientObj>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100153120, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::ClientObj>::ref_counter_shared(unsigned long, oldscape::ClientObj*): jumps straight to the base-object constructor

    // 0x100153130, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::ClientObj>::ref_counter_shared(unsigned long, oldscape::ClientObj*)
    void ref_counter_shared<oldscape::ClientObj>::ref_counter_shared(ulong param_1, ClientObj* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7978 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ClientObj**)(this + 24) = param_2;
    }

    // 0x1001531b0, 128 bytes, inline, placed by debug map only (low confidence)
    // oldscape::ClientProj* placement_new<oldscape::ClientProj, int&, int&, int&, int&, int, int, int, int&, int&, int&, int&, int&>(void*, int&, int&, int&, int&, int&&, int&&, int&&, int&, int&, int&, int&, int&)
    ClientProj*
    jag::placement_new<oldscape::ClientProj, int&, int&, int&, int&, int, int, int, int&, int&, int&, int&, int&>(
        void* param_1, int* param_2, int* param_3, int* param_4, int* param_5, int* param_6, int* param_7, int* param_8,
        int* param_9, int* param_10, int* param_11, int* param_12, int* param_13) {
        oldscape::ClientProj::ClientProj(param_1, *param_2, *param_3, *param_4, *param_5, *param_6, *param_7, *param_8,
                                         *param_9, *param_10, *param_11, *param_12, *param_13);
        return param_1;
    }

    // 0x100153230, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::ClientNpc* placement_new<oldscape::ClientNpc, int&>(void*, int&)
    ClientNpc* placement_new<oldscape::ClientNpc, int&>(void* param_1, int* param_2) {
        oldscape::ClientNpc::ClientNpc(param_1, *param_2);
        return param_1;
    }

    // 0x100153250, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::ClientNpc>* placement_new<ref_counter_shared<oldscape::ClientNpc>, int, oldscape::ClientNpc*&>(void*, int&&, oldscape::ClientNpc*&)
    ref_counter_shared*
    placement_new<ref_counter_shared<oldscape::ClientNpc>, int, oldscape::ClientNpc*&>(void* param_1, int* param_2,
                                                                                       ClientNpc** param_3) {
        ref_counter_shared<oldscape::ClientNpc>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100153860, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::ClientNpc>::ref_counter_shared(unsigned long, oldscape::ClientNpc*): jumps straight to the base-object constructor

    // 0x100153870, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::ClientNpc>::ref_counter_shared(unsigned long, oldscape::ClientNpc*)
    void ref_counter_shared<oldscape::ClientNpc>::ref_counter_shared(ulong param_1, ClientNpc* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7970 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ClientNpc**)(this + 24) = param_2;
    }

    // 0x1001538b0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::ClientNpc>::DeleteData()
    void ref_counter_shared<oldscape::ClientNpc>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~ClientNpc();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 1088;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100153e70, 48 bytes, inline, placed by debug map only (low confidence)
    // oldscape::ClientPlayer* placement_new<oldscape::ClientPlayer>(void*)
    ClientPlayer* placement_new<oldscape::ClientPlayer>(void* param_1) {
        ___bzero(param_1, 1248);
        oldscape::ClientPlayer::ClientPlayer(param_1);
        return param_1;
    }

    // 0x100153ea0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::ClientPlayer>* placement_new<ref_counter_shared<oldscape::ClientPlayer>, int, oldscape::ClientPlayer*&>(void*, int&&, oldscape::ClientPlayer*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::ClientPlayer>, int, oldscape::ClientPlayer*&>(
        void* param_1, int* param_2, ClientPlayer** param_3) {
        ref_counter_shared<oldscape::ClientPlayer>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100154040, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::ClientPlayer>::ref_counter_shared(unsigned long, oldscape::ClientPlayer*): jumps straight to the base-object constructor

    // 0x100154050, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::ClientPlayer>::ref_counter_shared(unsigned long, oldscape::ClientPlayer*)
    void ref_counter_shared<oldscape::ClientPlayer>::ref_counter_shared(ulong param_1, ClientPlayer* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee75b0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ClientPlayer**)(this + 24) = param_2;
    }

    // 0x100154090, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::ClientPlayer>::DeleteData()
    void ref_counter_shared<oldscape::ClientPlayer>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~ClientPlayer();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 1248;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1001540e0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::configdecoder::HeadbarQueue* placement_new<oldscape::configdecoder::HeadbarQueue, shared_ptr<oldscape::configdecoder::HeadbarType>&>(void*, shared_ptr<oldscape::configdecoder::HeadbarType>&)
    HeadbarQueue*
    jag::placement_new<oldscape::configdecoder::HeadbarQueue, shared_ptr<oldscape::configdecoder::HeadbarType>&>(
        void* param_1, shared_ptr* param_2) {
        oldscape::configdecoder::HeadbarQueue::HeadbarQueue(param_1, param_2);
        return param_1;
    }

    // 0x100154100, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::HeadbarQueue>* placement_new<ref_counter_shared<oldscape::configdecoder::HeadbarQueue>, int, oldscape::configdecoder::HeadbarQueue*&>(void*, int&&, oldscape::configdecoder::HeadbarQueue*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::configdecoder::HeadbarQueue>, int,
                                           oldscape::configdecoder::HeadbarQueue*&>(void* param_1, int* param_2,
                                                                                    HeadbarQueue** param_3) {
        ref_counter_shared<oldscape::configdecoder::HeadbarQueue>::ref_counter_shared(param_1, (long)*param_2,
                                                                                      *param_3);
        return param_1;
    }

    // 0x1001542c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::HeadbarQueue>::ref_counter_shared(unsigned long, oldscape::configdecoder::HeadbarQueue*): jumps straight to the base-object constructor

    // 0x1001542d0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::HeadbarQueue>::ref_counter_shared(unsigned long, oldscape::configdecoder::HeadbarQueue*)
    void ref_counter_shared<oldscape::configdecoder::HeadbarQueue>::ref_counter_shared(ulong param_1,
                                                                                       HeadbarQueue* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee75e0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(HeadbarQueue**)(this + 24) = param_2;
    }

    // 0x100154310, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::configdecoder::HeadbarQueue>::DeleteData()
    void ref_counter_shared<oldscape::configdecoder::HeadbarQueue>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~HeadbarQueue();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 48;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1001562b0, 144 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // LoadingScreenScript::LoadingScreenScript()
    void LoadingScreenScript::LoadingScreenScript() {
        _func_decltype_nullptr* in_RSI;

        field_0 = &PTR__OptionStore_100efa510;
        new (field_8) ChildAnimLayer();
        field_64 = 0;
        new (&field_72, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_88) eastl::string();
        new (&field_120) Array<LoadingScreenScript::LoadingScreenAnimation, eastl::allocator>();
    }

    // 0x100156340, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // LoadingScreenScript::ChildAnimLayer::ChildAnimLayer(): jumps straight to the base-object constructor

    // 0x100156360, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // LoadingScreenScript::ChildAnimLayer::ChildAnimLayer()
    void LoadingScreenScript::ChildAnimLayer::ChildAnimLayer() {
        new (this) AnimLayer();
        field_0 = &PTR__ScriptOption_100efa480;
        field_32 = 0;
        field_40 = 0;
        field_48 = 0;
    }

    // 0x1001563a0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // LoadingScreenScript::AnimLayer::AnimLayer()
    void LoadingScreenScript::AnimLayer::AnimLayer() {
        field_0 = PTR_vtable_100ee79a0 + 16;
    }

    // 0x1001565f0, 48 bytes, inline, placed by debug map only (low confidence)
    // oldscape::midi2::MidiRequest* placement_new<oldscape::midi2::MidiRequest, oldscape::jagex3::Js5*, char const (&) [11], char const (&) [1], int&, bool>(void*, oldscape::jagex3::Js5*&&, char const (&) [11], char const (&) [1], int&, bool&&)
    MidiRequest* jag::placement_new<oldscape::midi2::MidiRequest, oldscape::jagex3::Js5*, char const (&)[11],
                                    char const (&)[1], int&, bool>(void* param_1, Js5** param_2, char* param_3,
                                                                   char* param_4, int* param_5, bool* param_6) {
        oldscape::midi2::MidiRequest::MidiRequest(param_1, *param_2, param_3, param_4, *param_5, *param_6);
        return param_1;
    }

} // namespace jag

namespace jag::oldscape {
    // 0x100152a40, 96 bytes, inline, placed by debug map only (low confidence)
    // PacketJ<Array<unsigned char, BucketAllocatorEASTL> >::GetCrc(Array<unsigned char, eastl::allocator> const&, int, int)
    void PacketJ<Array<unsigned char, BucketAllocatorEASTL>>::GetCrc(Array* param_1, int param_2, int param_3) {
        long lVar1;

        if (param_3 < param_2) {
            /* WARNING: Subroutine does not return */
            LogAssert("start <= end",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/core/"
                      "bytepacking/Packet.h",
                      136, (char*)0);
        }
        lVar1 = param_1->data();
        CRC32((uchar*)(param_2 + lVar1), (long)(param_3 - param_2), 4294967295);
    }

} // namespace jag::oldscape
