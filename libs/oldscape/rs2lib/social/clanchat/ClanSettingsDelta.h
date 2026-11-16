// libs/oldscape/rs2lib/social/clanchat/ClanSettingsDelta.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

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
        ClanSettingsDelta(ClanSettings& clanSettings);
        ClanSettingsDelta(PacketJ<Array<unsigned char>>& packetJ);
        void Decode(PacketJ<Array<unsigned char>>& packetJ);
        void AddMemberToEntryList(long long arg1, eastl::string str, int arg3);
        void DeleteMemberToEntryList(int arg1);
        void SetMemberRankToEntryList(int arg1, signed char arg2);
        void SetOwnerToEntryList(int arg1);
        void SetMemberExtraInfoToEntryList(int arg1, int arg2, unsigned int arg3, unsigned int arg4);
        void SetMemberMutedToEntryList(int arg1, bool arg2);
        void AddBannedToEntryList(long long arg1, eastl::string str);
        void DeleteBannedToEntryList(int arg1);
        void SetClanNameToEntryList(eastl::string str, int arg2);
        void UpdateBaseSettingsToEntryList(ClanSettings& clanSettings);
        void SetExtraSettingIntToEntryList(int arg1, int arg2);
        void SetExtraSettingIntVarbitToEntryList(int arg1, int arg2, unsigned int arg3, unsigned int arg4);
        void SetExtraSettingLongToEntryList(int arg1, long long arg2);
        void SetExtraSettingStringToEntryList(int arg1, eastl::string str);
        void Encode(PacketJ<Array<unsigned char>>& packetJ, bool arg2, bool arg3);
        void ApplyToClanSettings(ClanSettings& clanSettings);
        auto GetUserHashes();
        void ApplyDisplayNames(Array<eastl::string>& strs);

    private:
        uint8_t _unknown_0[16];
        long long field_16;
        unsigned int field_24;
        uint8_t _unknown_28[4];
    };

    class ClanSettingsDelta::AddBanned {
    public:
        // virtual methods in vtable order
        virtual ~AddBanned();
        virtual uint64_t GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char>>& packetJ);
        virtual void Encode(PacketJ<Array<unsigned char>>& packetJ, bool arg2, bool arg3);
        virtual void Apply(ClanSettings& clanSettings);
        AddBanned(long long arg1, eastl::string str);
        AddBanned();

    private:
        uint8_t _unknown_8[24];
        long long field_32;
        uint8_t _unknown_40[8];
    };

    class ClanSettingsDelta::AddMember {
    public:
        // virtual methods in vtable order
        virtual ~AddMember();
        virtual uint64_t GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char>>& packetJ);
        virtual void Encode(PacketJ<Array<unsigned char>>& packetJ, bool arg2, bool arg3);
        virtual void Apply(ClanSettings& clanSettings);
        AddMember(long long arg1, eastl::string str, int arg3);
        AddMember();

    private:
        uint8_t _unknown_8[24];
        long long field_32;
        uint8_t _unknown_40[32];
        unsigned int field_72;
        uint8_t _unknown_76[4];
    };

    class ClanSettingsDelta::AddMemberOldV1 {
    public:
        // virtual methods in vtable order
        virtual ~AddMemberOldV1();
        virtual uint64_t GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char>>& packetJ);
        virtual void Encode(PacketJ<Array<unsigned char>>& packetJ, bool arg2, bool arg3);
        virtual void Apply(ClanSettings& clanSettings);
        AddMemberOldV1(long long arg1, eastl::string str);
        AddMemberOldV1();

    private:
        uint8_t _unknown_8[24];
        long long field_32;
        uint8_t _unknown_40[8];
    };

    class ClanSettingsDelta::ClanSettingsDeltaEntry {
    public:
        // virtual methods in vtable order
        virtual ~ClanSettingsDeltaEntry();
        ClanSettingsDeltaEntry();

    private:
        uint8_t _unknown_8[16];
        uint64_t field_24;
    };

    class ClanSettingsDelta::DeleteBanned {
    public:
        // virtual methods in vtable order
        virtual ~DeleteBanned();
        virtual uint64_t GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char>>& packetJ);
        virtual void Encode(PacketJ<Array<unsigned char>>& packetJ, bool arg2, bool arg3);
        virtual void Apply(ClanSettings& clanSettings);
        DeleteBanned(int arg1);
        DeleteBanned();

    private:
        uint8_t _unknown_8[24];
        unsigned int field_32;
        uint8_t _unknown_36[4];
    };

    class ClanSettingsDelta::DeleteMember {
    public:
        // virtual methods in vtable order
        virtual ~DeleteMember();
        virtual uint64_t GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char>>& packetJ);
        virtual void Encode(PacketJ<Array<unsigned char>>& packetJ, bool arg2, bool arg3);
        virtual void Apply(ClanSettings& clanSettings);
        DeleteMember(int arg1);
        DeleteMember();

    private:
        uint8_t _unknown_8[24];
        unsigned int field_32;
        uint8_t _unknown_36[4];
    };

    class ClanSettingsDelta::SetClanName {
    public:
        // virtual methods in vtable order
        virtual ~SetClanName();
        virtual uint64_t GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char>>& packetJ);
        virtual void Encode(PacketJ<Array<unsigned char>>& packetJ, bool arg2, bool arg3);
        virtual void Apply(ClanSettings& clanSettings);
        SetClanName(eastl::string str, int arg2);
        SetClanName();

    private:
        uint8_t _unknown_8[56];
        unsigned int field_64;
        uint8_t _unknown_68[4];
    };

    class ClanSettingsDelta::SetExtraSettingInt {
    public:
        // virtual methods in vtable order
        virtual ~SetExtraSettingInt();
        virtual uint64_t GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char>>& packetJ);
        virtual void Encode(PacketJ<Array<unsigned char>>& packetJ, bool arg2, bool arg3);
        virtual void Apply(ClanSettings& clanSettings);
        SetExtraSettingInt(int arg1, int arg2);
        SetExtraSettingInt();

    private:
        uint8_t _unknown_8[24];
        unsigned int field_32;
        unsigned int field_36;
        uint8_t _unknown_40[4];
    };

    class ClanSettingsDelta::SetExtraSettingIntVarbit {
    public:
        // virtual methods in vtable order
        virtual ~SetExtraSettingIntVarbit();
        virtual uint64_t GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char>>& packetJ);
        virtual void Encode(PacketJ<Array<unsigned char>>& packetJ, bool arg2, bool arg3);
        virtual void Apply(ClanSettings& clanSettings);
        SetExtraSettingIntVarbit(int arg1, int arg2, unsigned int arg3, unsigned int arg4);
        SetExtraSettingIntVarbit();

    private:
        uint8_t _unknown_8[24];
        unsigned int field_32;
        unsigned int field_36;
        unsigned int field_40;
        unsigned int field_44;
        uint8_t _unknown_48[4];
    };

    class ClanSettingsDelta::SetExtraSettingLong {
    public:
        // virtual methods in vtable order
        virtual ~SetExtraSettingLong();
        virtual uint64_t GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char>>& packetJ);
        virtual void Encode(PacketJ<Array<unsigned char>>& packetJ, bool arg2, bool arg3);
        virtual void Apply(ClanSettings& clanSettings);
        SetExtraSettingLong(int arg1, long long arg2);
        SetExtraSettingLong();

    private:
        uint8_t _unknown_8[24];
        unsigned int field_32;
        uint8_t _unknown_36[4];
        long long field_40;
    };

    class ClanSettingsDelta::SetExtraSettingString {
    public:
        // virtual methods in vtable order
        virtual ~SetExtraSettingString();
        virtual uint64_t GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char>>& packetJ);
        virtual void Encode(PacketJ<Array<unsigned char>>& packetJ, bool arg2, bool arg3);
        virtual void Apply(ClanSettings& clanSettings);
        SetExtraSettingString(int arg1, eastl::string str);
        SetExtraSettingString();

    private:
        uint8_t _unknown_8[24];
        unsigned int field_32;
        uint8_t _unknown_36[12];
    };

    class ClanSettingsDelta::SetMemberExtraInfo {
    public:
        // virtual methods in vtable order
        virtual ~SetMemberExtraInfo();
        virtual uint64_t GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char>>& packetJ);
        virtual void Encode(PacketJ<Array<unsigned char>>& packetJ, bool arg2, bool arg3);
        virtual void Apply(ClanSettings& clanSettings);
        SetMemberExtraInfo(int arg1, int arg2, unsigned int arg3, unsigned int arg4);
        SetMemberExtraInfo();

    private:
        uint8_t _unknown_8[24];
        unsigned int field_32;
        unsigned int field_36;
        unsigned int field_40;
        unsigned int field_44;
        uint8_t _unknown_48[4];
    };

    class ClanSettingsDelta::SetMemberMuted {
    public:
        // virtual methods in vtable order
        virtual ~SetMemberMuted();
        virtual uint64_t GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char>>& packetJ);
        virtual void Encode(PacketJ<Array<unsigned char>>& packetJ, bool arg2, bool arg3);
        virtual void Apply(ClanSettings& clanSettings);
        SetMemberMuted(int arg1, bool arg2);
        SetMemberMuted();

    private:
        uint8_t _unknown_8[24];
        unsigned int field_32;
        bool field_36;
        uint8_t _unknown_37[3];
    };

    class ClanSettingsDelta::SetMemberRank {
    public:
        // virtual methods in vtable order
        virtual ~SetMemberRank();
        virtual uint64_t GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char>>& packetJ);
        virtual void Encode(PacketJ<Array<unsigned char>>& packetJ, bool arg2, bool arg3);
        virtual void Apply(ClanSettings& clanSettings);
        SetMemberRank(int arg1, signed char arg2);
        SetMemberRank();

    private:
        uint8_t _unknown_8[24];
        unsigned int field_32;
        bool field_36;
        uint8_t _unknown_37[3];
    };

    class ClanSettingsDelta::SetOwner {
    public:
        // virtual methods in vtable order
        virtual ~SetOwner();
        virtual uint64_t GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char>>& packetJ);
        virtual void Encode(PacketJ<Array<unsigned char>>& packetJ, bool arg2, bool arg3);
        virtual void Apply(ClanSettings& clanSettings);
        SetOwner(int arg1);
        SetOwner();

    private:
        uint8_t _unknown_8[24];
        unsigned int field_32;
        uint8_t _unknown_36[4];
    };

    class ClanSettingsDelta::UpdateClanSettingsBaseSettings {
    public:
        // virtual methods in vtable order
        virtual ~UpdateClanSettingsBaseSettings();
        virtual uint64_t GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char>>& packetJ);
        virtual void Encode(PacketJ<Array<unsigned char>>& packetJ, bool arg2, bool arg3);
        virtual void Apply(ClanSettings& clanSettings);
        UpdateClanSettingsBaseSettings(ClanSettings& clanSettings);
        UpdateClanSettingsBaseSettings();

    private:
        uint8_t _unknown_8[24];
        bool field_32;
        bool field_33;
        bool field_34;
        bool field_35;
        bool field_36;
        uint8_t _unknown_37[7];
    };

    // 0x100152580
    ClanSettingsDelta::~ClanSettingsDelta() {}

    // 0x100260a80
    ClanSettingsDelta::ClanSettingsDeltaEntry::ClanSettingsDeltaEntry()
        : Linkable<ClanSettingsDelta::ClanSettingsDeltaEntry>() {}

    // 0x100260ab0
    ClanSettingsDelta::ClanSettingsDeltaEntry::~ClanSettingsDeltaEntry() {
        ~Linkable(this);
    }

    // 0x100269ac0
    uint64_t ClanSettingsDelta::AddMember::GetID() const {
        return 13;
    }

    // 0x100269b00
    uint64_t ClanSettingsDelta::SetOwner::GetID() const {
        return 15;
    }

    // 0x100269b10
    uint64_t ClanSettingsDelta::SetMemberExtraInfo::GetID() const {
        return 7;
    }

    // 0x100269b20
    uint64_t ClanSettingsDelta::SetMemberMuted::GetID() const {
        return 14;
    }

    // 0x100269b60
    uint64_t ClanSettingsDelta::DeleteBanned::GetID() const {
        return 6;
    }

    // 0x100269ba0
    uint64_t ClanSettingsDelta::SetClanName::GetID() const {
        return 12;
    }

    // 0x100269bb0
    uint64_t ClanSettingsDelta::SetExtraSettingInt::GetID() const {
        return 8;
    }

    // 0x100269bc0
    uint64_t ClanSettingsDelta::SetExtraSettingIntVarbit::GetID() const {
        return 11;
    }

    // 0x100269bd0
    uint64_t ClanSettingsDelta::SetExtraSettingLong::GetID() const {
        return 9;
    }

    // 0x100269c10
    uint64_t ClanSettingsDelta::SetExtraSettingString::GetID() const {
        return 10;
    }

    // 0x10026a000
    ClanSettingsDelta::AddMemberOldV1::~AddMemberOldV1() {
        field_40.~basic_string();
    }

    // 0x10026a030
    ClanSettingsDelta::AddMember::~AddMember() {
        field_40.~basic_string();
    }

    // 0x10026a060
    ClanSettingsDelta::DeleteMember::~DeleteMember() {}

    // 0x10026a070
    ClanSettingsDelta::AddBanned::~AddBanned() {
        field_40.~basic_string();
    }

    // 0x10026a0a0
    ClanSettingsDelta::SetClanName::~SetClanName() {
        field_32.~basic_string();
    }

    // 0x10026a0d0
    ClanSettingsDelta::SetExtraSettingString::~SetExtraSettingString() {
        field_40.~basic_string();
    }

    // 0x10027e0f0
    ClanSettingsDelta::AddBanned::AddBanned() : ClanSettingsDeltaEntry(), field_32(-1) {}

    // 0x10027e210
    ClanSettingsDelta::AddMemberOldV1::AddMemberOldV1() : ClanSettingsDeltaEntry(), field_32(-1) {}

    // 0x10027e2e0
    ClanSettingsDelta::AddMember::AddMember() : ClanSettingsDeltaEntry(), field_32(-1), field_72(0) {}

    // 0x10027e360
    ClanSettingsDelta::UpdateClanSettingsBaseSettings::UpdateClanSettingsBaseSettings()
        : ClanSettingsDeltaEntry(), field_32(false), field_33(false), field_34(false), field_35(false),
          field_36(false) {}

    // 0x10027e3c0
    ClanSettingsDelta::DeleteBanned::DeleteBanned() : ClanSettingsDeltaEntry(), field_32(4294967295) {}

    // 0x10027e420
    ClanSettingsDelta::DeleteMember::DeleteMember() : ClanSettingsDeltaEntry(), field_32(4294967295) {}

    // 0x10027e480
    ClanSettingsDelta::SetMemberRank::SetMemberRank()
        : ClanSettingsDeltaEntry(), field_32(4294967295), field_36(false) {}

    // 0x10027e4e0
    ClanSettingsDelta::SetMemberExtraInfo::SetMemberExtraInfo()
        : ClanSettingsDeltaEntry(), field_32(4294967295), field_36(0), field_40(0), field_44(0) {}

    // 0x10027e540
    ClanSettingsDelta::SetMemberMuted::SetMemberMuted()
        : ClanSettingsDeltaEntry(), field_32(4294967295), field_36(false) {}

    // 0x10027e5a0
    ClanSettingsDelta::SetExtraSettingInt::SetExtraSettingInt() : ClanSettingsDeltaEntry(), field_32(0), field_36(0) {}

    // 0x10027e600
    ClanSettingsDelta::SetExtraSettingLong::SetExtraSettingLong()
        : ClanSettingsDeltaEntry(), field_32(0), field_40(0) {}

    // 0x10027e660
    ClanSettingsDelta::SetExtraSettingString::SetExtraSettingString() : ClanSettingsDeltaEntry(), field_32(0) {}

    // 0x10027e6e0
    ClanSettingsDelta::SetExtraSettingIntVarbit::SetExtraSettingIntVarbit()
        : ClanSettingsDeltaEntry(), field_32(0), field_36(0), field_40(0), field_44(0) {}

    // 0x10027e740
    ClanSettingsDelta::SetClanName::SetClanName() : ClanSettingsDeltaEntry(), field_64(0) {}

    // 0x10027e7c0
    ClanSettingsDelta::SetOwner::SetOwner() : ClanSettingsDeltaEntry(), field_32(4294967295) {}

} // namespace jag::oldscape::rs2lib::social

namespace jag {
    // 0x100152db0
    game::VarContainerSparse* placement_new<game::VarContainerSparse>(void* arg1) {
        *(uint64_t*)((long)arg1 + 48) = 0;
        *(uint64_t*)((long)arg1 + 56) = 0;
        *(uint64_t*)((long)arg1 + 32) = 0;
        *(uint64_t*)((long)arg1 + 40) = 0;
        *(uint64_t*)((long)arg1 + 16) = 0;
        *(uint64_t*)((long)arg1 + 24) = 0;
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)((long)arg1 + 8) = 0;
        new (arg1) game::VarContainerSparse();
        return arg1;
    }

    // 0x100152de0
    ref_counter_shared<game::VarContainerSparse>*
    placement_new<ref_counter_shared<game::VarContainerSparse>, int, game::VarContainerSparse*&>(
        void* arg1, int&& arg2, game::VarContainerSparse*& arg3) {
        new (arg1) ref_counter_shared<game::VarContainerSparse>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100152f60
    ref_counter_shared<game::VarContainerSparse>::ref_counter_shared(unsigned long arg1,
                                                                     game::VarContainerSparse* varContainerSparse)
        : ref_counter_base() {}

    // 0x100152fa0
    void ref_counter_shared<game::VarContainerSparse>::DeleteData() {
        long lVar1;
        ref_counter_shared<oldscape::ClientObj> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<oldscape::ClientObj> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 64;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100152ff0
    oldscape::ClientObj* placement_new<oldscape::ClientObj>(void* arg1) {
        *(uint64_t*)((long)arg1 + 48) = 0;
        *(uint64_t*)((long)arg1 + 56) = 0;
        *(uint64_t*)((long)arg1 + 32) = 0;
        *(uint64_t*)((long)arg1 + 40) = 0;
        *(uint64_t*)((long)arg1 + 16) = 0;
        *(uint64_t*)((long)arg1 + 24) = 0;
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)((long)arg1 + 8) = 0;
        new (arg1) oldscape::ClientObj();
        return arg1;
    }

    // 0x100153020
    ref_counter_shared<oldscape::ClientObj>*
    placement_new<ref_counter_shared<oldscape::ClientObj>, int, oldscape::ClientObj*&>(void* arg1, int&& arg2,
                                                                                       oldscape::ClientObj*& arg3) {
        new (arg1) ref_counter_shared<oldscape::ClientObj>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100153130
    ref_counter_shared<oldscape::ClientObj>::ref_counter_shared(unsigned long arg1, oldscape::ClientObj* clientObj)
        : ref_counter_base() {}

    // 0x1001531b0
    oldscape::ClientProj*
    placement_new<oldscape::ClientProj, int&, int&, int&, int&, int, int, int, int&, int&, int&, int&, int&>(
        void* arg1, int& arg2, int& arg3, int& arg4, int& arg5, int&& arg6, int&& arg7, int&& arg8, int& arg9,
        int& arg10, int& arg11, int& arg12, int& arg13) {
        new (arg1) oldscape::ClientProj(arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
        return arg1;
    }

    // 0x100153230
    oldscape::ClientNpc* placement_new<oldscape::ClientNpc, int&>(void* arg1, int& arg2) {
        new (arg1) oldscape::ClientNpc(arg2);
        return arg1;
    }

    // 0x100153250
    ref_counter_shared<oldscape::ClientNpc>*
    placement_new<ref_counter_shared<oldscape::ClientNpc>, int, oldscape::ClientNpc*&>(void* arg1, int&& arg2,
                                                                                       oldscape::ClientNpc*& arg3) {
        new (arg1) ref_counter_shared<oldscape::ClientNpc>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100153870
    ref_counter_shared<oldscape::ClientNpc>::ref_counter_shared(unsigned long arg1, oldscape::ClientNpc* clientNpc)
        : ref_counter_base() {}

    // 0x1001538b0
    void ref_counter_shared<oldscape::ClientNpc>::DeleteData() {
        ref_counter_shared<oldscape::ClientNpc> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((ClientNpc*)((long)&(this[3]._vptr)->_dtor + lVar2))->~ClientNpc();
                    prVar1 = (ref_counter_shared<oldscape::ClientNpc> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 1088;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100153e70
    oldscape::ClientPlayer* placement_new<oldscape::ClientPlayer>(void* arg1) {
        ___bzero(arg1, 1248);
        new (arg1) oldscape::ClientPlayer();
        return arg1;
    }

    // 0x100153ea0
    ref_counter_shared<oldscape::ClientPlayer>*
    placement_new<ref_counter_shared<oldscape::ClientPlayer>, int, oldscape::ClientPlayer*&>(
        void* arg1, int&& arg2, oldscape::ClientPlayer*& arg3) {
        new (arg1) ref_counter_shared<oldscape::ClientPlayer>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100154050
    ref_counter_shared<oldscape::ClientPlayer>::ref_counter_shared(unsigned long arg1,
                                                                   oldscape::ClientPlayer* clientPlayer)
        : ref_counter_base() {}

    // 0x100154090
    void ref_counter_shared<oldscape::ClientPlayer>::DeleteData() {
        ref_counter_shared<oldscape::ClientPlayer> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((ClientPlayer*)((long)&(this[3]._vptr)->_dtor + lVar2))->~ClientPlayer();
                    prVar1 = (ref_counter_shared<oldscape::ClientPlayer> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 1248;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1001540e0
    oldscape::configdecoder::HeadbarQueue*
    placement_new<oldscape::configdecoder::HeadbarQueue, shared_ptr<oldscape::configdecoder::HeadbarType>&>(
        void* arg1, shared_ptr<oldscape::configdecoder::HeadbarType>& headbarType) {
        new (arg1) oldscape::configdecoder::HeadbarQueue(headbarType);
        return arg1;
    }

    // 0x100154100
    ref_counter_shared<oldscape::configdecoder::HeadbarQueue>*
    placement_new<ref_counter_shared<oldscape::configdecoder::HeadbarQueue>, int,
                  oldscape::configdecoder::HeadbarQueue*&>(void* arg1, int&& arg2,
                                                           oldscape::configdecoder::HeadbarQueue*& arg3) {
        new (arg1) ref_counter_shared<oldscape::configdecoder::HeadbarQueue>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1001542d0
    ref_counter_shared<oldscape::configdecoder::HeadbarQueue>::ref_counter_shared(
        unsigned long arg1, oldscape::configdecoder::HeadbarQueue* headbarQueue)
        : ref_counter_base() {}

    // 0x100154310
    void ref_counter_shared<oldscape::configdecoder::HeadbarQueue>::DeleteData() {
        ref_counter_shared<oldscape::configdecoder::HeadbarQueue> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((HeadbarQueue*)((long)&(this[3]._vptr)->_dtor + lVar2))->~HeadbarQueue();
                    prVar1 =
                        (ref_counter_shared<oldscape::configdecoder::HeadbarQueue> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 48;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1001562b0
    LoadingScreenScript::LoadingScreenScript() : field_64(0) {
        new (&field_72) shared_ptr();
        new (&field_88) eastl::string();
        new (&field_120) Array<LoadingScreenScript::LoadingScreenAnimation>();
    }

    // 0x100156360
    LoadingScreenScript::ChildAnimLayer::ChildAnimLayer() : AnimLayer(), field_32(0), field_40(0), field_48(0) {}

    // 0x1001563a0
    LoadingScreenScript::AnimLayer::AnimLayer() {}

    // 0x1001565f0
    oldscape::midi2::MidiRequest*
    placement_new<oldscape::midi2::MidiRequest, oldscape::jagex3::Js5*, char const (&)[11], char const (&)[1], int&,
                  bool>(void* arg1, oldscape::jagex3::Js5*&& arg2, char const (&arg3)[11], char const (&arg4)[1],
                        int& arg5, bool&& arg6) {
        new (arg1) oldscape::midi2::MidiRequest(arg2, arg3, arg4, arg5, arg6);
        return arg1;
    }

} // namespace jag

namespace jag::oldscape {
    // 0x100152a40
    void PacketJ<Array<unsigned char, BucketAllocatorEASTL>>::GetCrc(const Array<unsigned char>& arg1, int arg2,
                                                                     int arg3) {
        if (arg3 < arg2) {
            LogAssert("start <= end",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/core/"
                      "bytepacking/Packet.h",
                      136, nullptr);
        }
        long lVar1 = arg1.data();
        CRC32((unsigned char*)(arg2 + lVar1), (long)(arg3 - arg2), 4294967295);
    }

} // namespace jag::oldscape
