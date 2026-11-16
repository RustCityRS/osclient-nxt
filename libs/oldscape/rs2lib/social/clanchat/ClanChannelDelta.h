// libs/oldscape/rs2lib/social/clanchat/ClanChannelDelta.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

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
        ClanChannelDelta(ClanChannel& clanChannel);
        ClanChannelDelta(PacketJ<Array<unsigned char>>& packetJ);
        void Decode(PacketJ<Array<unsigned char>>& packetJ);
        void AddUserToEntryList(long long arg1, eastl::string str, int arg3, signed char arg4, long long arg5);
        void DeleteUserInEntryList(int arg1, int arg2, long long arg3);
        void UpdateUserDetailsInEntryList(int arg1, signed char arg2, int arg3, long long arg4, eastl::string str,
                                          bool arg6);
        void UpdateBaseSettingsInEntryList(eastl::string str, bool arg2, signed char arg3, signed char arg4);
        void Encode(PacketJ<Array<unsigned char>>& packetJ, bool arg2, bool arg3);
        void ApplyToClanChannel(ClanChannel& clanChannel);

    private:
        uint8_t _unknown_0[16];
        uint64_t field_16;
        uint64_t field_24;
    };

    class ClanChannelDelta::AddUser {
    public:
        // virtual methods in vtable order
        virtual ~AddUser();
        virtual uint64_t GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char>>& packetJ);
        virtual void Encode(PacketJ<Array<unsigned char>>& packetJ, bool arg2, bool arg3);
        virtual void Apply(ClanChannel& clanChannel);
        AddUser(long long arg1, eastl::string str, int arg3, signed char arg4, long long arg5);
        AddUser();

    private:
        uint8_t _unknown_8[24];
        long long field_32;
        uint8_t _unknown_40[32];
        unsigned int field_72;
        bool field_76;
        uint8_t _unknown_77[3];
        long long field_80;
    };

    class ClanChannelDelta::ClanChannelDeltaEntry {
    public:
        // virtual methods in vtable order
        virtual ~ClanChannelDeltaEntry();
        ClanChannelDeltaEntry();

    private:
        uint8_t _unknown_8[16];
        uint64_t field_24;
    };

    class ClanChannelDelta::DeleteUser {
    public:
        // virtual methods in vtable order
        virtual ~DeleteUser();
        virtual uint64_t GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char>>& packetJ);
        virtual void Encode(PacketJ<Array<unsigned char>>& packetJ, bool arg2, bool arg3);
        virtual void Apply(ClanChannel& clanChannel);
        DeleteUser(int arg1, int arg2, long long arg3);
        DeleteUser();

    private:
        uint8_t _unknown_8[24];
        unsigned int field_32;
        unsigned int field_36;
        long long field_40;
    };

    class ClanChannelDelta::UpdateClanChannelBaseSettings {
    public:
        // virtual methods in vtable order
        virtual ~UpdateClanChannelBaseSettings();
        virtual uint64_t GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char>>& packetJ);
        virtual void Encode(PacketJ<Array<unsigned char>>& packetJ, bool arg2, bool arg3);
        virtual void Apply(ClanChannel& clanChannel);
        UpdateClanChannelBaseSettings(eastl::string str, bool arg2, signed char arg3, signed char arg4);
        UpdateClanChannelBaseSettings();

    private:
        uint8_t _unknown_8[56];
        bool field_64;
        bool field_65;
        bool field_66;
        uint8_t _unknown_67[7];
    };

    class ClanChannelDelta::UpdateUserDetails {
    public:
        // virtual methods in vtable order
        virtual ~UpdateUserDetails();
        virtual uint64_t GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char>>& packetJ);
        virtual void Encode(PacketJ<Array<unsigned char>>& packetJ, bool arg2, bool arg3);
        virtual void Apply(ClanChannel& clanChannel);
        UpdateUserDetails(int arg1, signed char arg2, int arg3, long long arg4, eastl::string str);
        UpdateUserDetails();

    private:
        uint8_t _unknown_8[24];
        unsigned int field_32;
        bool field_36;
        uint8_t _unknown_37[3];
        unsigned int field_40;
        uint8_t _unknown_44[4];
        long long field_48;
        uint8_t _unknown_56[8];
    };

    class ClanChannelDelta::UpdateUserDetailsV2 {
    public:
        // virtual methods in vtable order
        virtual ~UpdateUserDetailsV2();
        virtual uint64_t GetID() const;
        virtual void Decode(PacketJ<Array<unsigned char>>& packetJ);
        virtual void Encode(PacketJ<Array<unsigned char>>& packetJ, bool arg2, bool arg3);
        virtual void Apply(ClanChannel& clanChannel);
        UpdateUserDetailsV2(int arg1, signed char arg2, int arg3, long long arg4, eastl::string str, bool arg6);
        UpdateUserDetailsV2();

    private:
        uint8_t _unknown_8[24];
        unsigned int field_32;
        bool field_36;
        uint8_t _unknown_37[3];
        unsigned int field_40;
        uint8_t _unknown_44[4];
        long long field_48;
        uint8_t _unknown_56[32];
        bool field_88;
    };

    // 0x100152230
    ClanChannelDelta::~ClanChannelDelta() {}

    // 0x10025b3b0
    ClanChannelDelta::ClanChannelDeltaEntry::ClanChannelDeltaEntry()
        : Linkable<ClanChannelDelta::ClanChannelDeltaEntry>() {}

    // 0x10025b3e0
    ClanChannelDelta::ClanChannelDeltaEntry::~ClanChannelDeltaEntry() {
        ~Linkable(this);
    }

    // 0x100269960
    uint64_t ClanChannelDelta::AddUser::GetID() const {
        return 1;
    }

    // 0x1002699a0
    uint64_t ClanChannelDelta::DeleteUser::GetID() const {
        return 3;
    }

    // 0x1002699e0
    uint64_t ClanChannelDelta::UpdateUserDetails::GetID() const {
        return 2;
    }

    // 0x100269a50
    uint64_t ClanChannelDelta::UpdateClanChannelBaseSettings::GetID() const {
        return 4;
    }

    // 0x100269f30
    ClanChannelDelta::AddUser::~AddUser() {
        field_40.~basic_string();
    }

    // 0x100269f60
    ClanChannelDelta::DeleteUser::~DeleteUser() {}

    // 0x100269f70
    ClanChannelDelta::UpdateUserDetails::~UpdateUserDetails() {
        field_56.~basic_string();
    }

    // 0x100269fa0
    ClanChannelDelta::UpdateUserDetailsV2::~UpdateUserDetailsV2() {
        field_56.~basic_string();
    }

    // 0x100269fd0
    ClanChannelDelta::UpdateClanChannelBaseSettings::~UpdateClanChannelBaseSettings() {
        field_32.~basic_string();
    }

    // 0x10026bf50
    ClanChannelDelta::AddUser::AddUser() : ClanChannelDeltaEntry(), field_32(-1) {}

    // 0x10026c050
    ClanChannelDelta::UpdateClanChannelBaseSettings::UpdateClanChannelBaseSettings() : ClanChannelDeltaEntry() {}

    // 0x10026c0c0
    ClanChannelDelta::DeleteUser::DeleteUser() : ClanChannelDeltaEntry(), field_32(4294967295) {}

    // 0x10026c140
    ClanChannelDelta::UpdateUserDetails::UpdateUserDetails() : ClanChannelDeltaEntry(), field_32(4294967295) {}

    // 0x10026c210
    ClanChannelDelta::UpdateUserDetailsV2::UpdateUserDetailsV2() : ClanChannelDeltaEntry(), field_32(4294967295) {}

} // namespace jag::oldscape::rs2lib::social

namespace jag {
    // 0x100152490
    oldscape::rs2lib::social::ClanSettingsDelta*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta, oldscape::core::SuperPacket&>(
        void* arg1, oldscape::core::SuperPacket& superPacket) {
        new (arg1) oldscape::rs2lib::social::ClanSettingsDelta(superPacket);
        return arg1;
    }

    // 0x1001524b0
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta>*
    placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta>, int,
                  oldscape::rs2lib::social::ClanSettingsDelta*&>(void* arg1, int&& arg2,
                                                                 oldscape::rs2lib::social::ClanSettingsDelta*& arg3) {
        new (arg1) ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1001524e0
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta>::ref_counter_shared(
        unsigned long arg1, oldscape::rs2lib::social::ClanSettingsDelta* clanSettingsDelta)
        : ref_counter_base() {}

    // 0x100152520
    void ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta>::DeleteData() {
        ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((ClanSettingsDelta*)((long)&(this[3]._vptr)->_dtor + lVar2))->~ClanSettingsDelta();
                    prVar1 =
                        (ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta> _vtbl*)((long)&prVar1->_dtor +
                                                                                                 1);
                    lVar2 = lVar2 + 32;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag

namespace jag::ui {
    // 0x100269960: ComponentSingleValueMixin::GetValueRepresentationType() const has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const

    // 0x1002699a0: ComponentMultiValueMixin::GetValueRepresentationType() const has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::DeleteUser::GetID() const

    // 0x1002699e0: ComponentSingleValueMultiOptionMixin::GetValueRepresentationType() const has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails::GetID() const

} // namespace jag::ui

namespace jag::game {
    // 0x100269960: BaseVarTypeLong::GetSerialID() const has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const

    // 0x1002699a0: BaseVarTypeCoordFine::GetSerialID() const has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::DeleteUser::GetID() const

    // 0x1002699e0: BaseVarTypeString::GetSerialID() const has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails::GetID() const

} // namespace jag::game

namespace jag::game::option {
    // 0x100269960: LightingQuality::GetDefault() has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const

    // 0x100269960: AntialiasingQuality::GetDefault() has the same machine code as oldscape::rs2lib::social::ClanChannelDelta::AddUser::GetID() const

} // namespace jag::game::option
