// libs/oldscape/rs2lib/social/clanchat/ClanSettings.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape::rs2lib::social {
    class ClanSettings {
    public:
        class ExtraSettingsParam;
        ~ClanSettings();
        ClanSettings(long long arg1, PacketJ<Array<unsigned char>>& packetJ);
        void Decode(PacketJ<Array<unsigned char>>& packetJ);
        ClanSettings(PacketJ<Array<unsigned char>>& packetJ);
        ClanSettings(eastl::string str, long long arg2);
        void DoAddMember(long long arg1, const eastl::string& str, int arg3);
        auto Copy();
        auto ValidateClanName(eastl::string str);
        void ExtendMemberList(int arg1);
        void ExtendBannedList(int arg1);
        unsigned long IsBanned(long long arg1);
        unsigned long IsAffined(long long arg1);
        unsigned long FindBanned(long long arg1);
        unsigned long FindMember(long long arg1);
        unsigned long FindMember(eastl::string str);
        int GetMemberRank(long long arg1);
        uint32_t GetMemberJoinRuneday(long long arg1);
        bool GetMemberMuted(long long arg1);
        uint64_t GetMemberExtraInfo(long long arg1, unsigned int arg2, unsigned int arg3);
        int GetMemberExtraInfoBySlot(unsigned int arg1, unsigned int arg2, unsigned int arg3);
        auto GetMemberDisplayName(long long arg1);
        auto GetBannedDisplayName(long long arg1);
        bool IsAdmin(long long arg1);
        Nullable<int> GetExtraSettingAsInt(int arg1);
        Nullable<int> GetExtraSettingAsIntVarbit(int arg1, unsigned int arg2, unsigned int arg3);
        Nullable<long long> GetExtraSettingAsLong(int arg1);
        auto GetExtraSettingAsString(int arg1);
        auto GetMemberSortedIndex();
        unsigned long AddMember(long long arg1, int arg2);
        int DeleteMember(long long arg1);
        void DoDeleteMember(int arg1);
        void SetCurrentAndReplacementOwners();
        unsigned long AddBanned(long long arg1);
        void DoAddBanned(long long arg1, const eastl::string& str);
        int DeleteBanned(long long arg1);
        void DoDeleteBanned(int arg1);
        uint64_t SetMemberRank(long long arg1, signed char arg2);
        int SetMemberRankBySlot(int arg1, signed char arg2);
        uint64_t SetOwnerBySlot(int arg1);
        uint64_t SetMemberMuted(long long arg1, bool arg2);
        int SetMemberMutedBySlot(int arg1, bool arg2);
        uint64_t SetMemberExtraInfo(long long arg1, int arg2, unsigned int arg3, unsigned int arg4);
        int SetMemberExtraInfoBySlot(int arg1, int arg2, unsigned int arg3, unsigned int arg4);
        bool SetAllowNonMembers(bool arg1);
        bool SetRankTalk(signed char arg1);
        bool SetRankKick(signed char arg1);
        bool SetRankLootShare(signed char arg1);
        bool SetCoinShare(signed char arg1);
        uint64_t SetExtraSettingInt(int arg1, int arg2);
        uint64_t SetExtraSettingIntVarbit(int arg1, int arg2, unsigned int arg3, unsigned int arg4);
        uint64_t SetExtraSettingLong(int arg1, long long arg2);
        uint64_t SetExtraSettingString(int arg1, eastl::string str);
        int GetEncodeLength(bool arg1, bool arg2);
        void Encode(PacketJ<Array<unsigned char>>& packetJ, bool arg2, bool arg3);
        void Encode(PacketJ<Array<unsigned char>>& packetJ, bool arg2, bool arg3, bool arg4);
        int GetMaximumSize(bool arg1, bool arg2, int arg3, int arg4, int arg5);
        ClanSettings();
        static bool m_fluttered;
        static uint8_t m_verbose[12];

    private:
        long long field_0;
        unsigned int field_8;
        bool field_12;
        uint8_t field_13;
        uint8_t _unknown_14[34];
        unsigned int field_48;
        unsigned int field_52;
        bool field_56;
        bool field_57;
        bool field_58;
        bool field_59;
        bool field_60;
        uint8_t _unknown_61[3];
        unsigned int field_64;
        uint8_t _unknown_68[164];
        unsigned int field_232;
        unsigned int field_236;
        unsigned int field_240;
        uint8_t _unknown_244[164];
    };

    class ClanSettings::ExtraSettingsParam {
    public:
        ~ExtraSettingsParam();
        ExtraSettingsParam();
        ExtraSettingsParam* operator=(const ExtraSettingsParam& extraSettingsParam);
        ExtraSettingsParam(const ExtraSettingsParam& extraSettingsParam);

    private:
        uint64_t field_0;
        uint64_t field_8;
        uint8_t _unknown_16[8];
    };

    // 0x100151ed0
    ClanSettings::~ClanSettings() {
        field_400.~Array();
        field_344.~hash_map();
        field_312.~vector();
        field_280.~vector();
        field_248.~vector();
        field_200.~vector();
        field_168.~vector();
        field_136.~vector();
        field_104.~vector();
        field_72.~vector();
        field_16.~basic_string();
    }

    // 0x1001520f0
    ClanSettings::ExtraSettingsParam::~ExtraSettingsParam() {
        field_16.~basic_string();
    }

    // 0x10025fef0
    ExtraSettingsParam*
    ClanSettings::ExtraSettingsParam::operator=(const ClanSettings::ExtraSettingsParam& extraSettingsParam) {
        uint64_t uVar1 = extraSettingsParam.field_8;
        field_0 = extraSettingsParam.field_0;
        field_8 = uVar1;
        field_16 = &extraSettingsParam.field_16;
        return this;
    }

    // 0x10026c3b0
    ClanSettings::ClanSettings() {

        *(uint64_t*)((long)&field_0 + 6) = 0;
        field_0 = 0;
        new (&field_16) eastl::string("");
        field_64 = 0;
        field_48 = 0;
        field_52 = 0;
        field_56 = false;
        new (&field_72) eastl::vector<long long>();
        new (&field_104) eastl::vector<signed char>();
        new (&field_136) eastl::vector<int>();
        new (&field_168) eastl::vector<int>();
        new (&field_200) eastl::vector<int>();
        field_232 = 4294967295;
        field_236 = 4294967295;
        field_240 = 0;
        new (&field_248) eastl::vector<long long>();
        new (&field_280) eastl::vector<eastl::string>();
        new (&field_312) eastl::vector<eastl::string>();
        new (&field_344) eastl::hash_map<long long, ClanSettings::ExtraSettingsParam>(local_38);
        new (&field_400) Array<int>();
    }

    // 0x10026cbf0
    ClanSettings::ExtraSettingsParam::ExtraSettingsParam(const ClanSettings::ExtraSettingsParam& extraSettingsParam) {
        uint64_t uVar1 = extraSettingsParam.field_8;
        field_0 = extraSettingsParam.field_0;
        field_8 = uVar1;
        new (&field_16) eastl::string(extraSettingsParam.field_16);
    }

} // namespace jag::oldscape::rs2lib::social

namespace jag {
    // 0x100152140
    oldscape::rs2lib::social::ClanChannelDelta*
    placement_new<oldscape::rs2lib::social::ClanChannelDelta, oldscape::core::SuperPacket&>(
        void* arg1, oldscape::core::SuperPacket& superPacket) {
        new (arg1) oldscape::rs2lib::social::ClanChannelDelta(superPacket);
        return arg1;
    }

    // 0x100152160
    ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta>*
    placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta>, int,
                  oldscape::rs2lib::social::ClanChannelDelta*&>(void* arg1, int&& arg2,
                                                                oldscape::rs2lib::social::ClanChannelDelta*& arg3) {
        new (arg1) ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100152190
    ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta>::ref_counter_shared(
        unsigned long arg1, oldscape::rs2lib::social::ClanChannelDelta* clanChannelDelta)
        : ref_counter_base() {}

    // 0x1001521d0
    void ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta>::DeleteData() {
        ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((ClanChannelDelta*)((long)&(this[3]._vptr)->_dtor + lVar2))->~ClanChannelDelta();
                    prVar1 =
                        (ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta> _vtbl*)((long)&prVar1->_dtor +
                                                                                                1);
                    lVar2 = lVar2 + 32;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag

namespace jag::oldscape::configdecoder {
    // 0x1001520f0: ObjSpriteCacheKey::~ObjSpriteCacheKey() has the same machine code as rs2lib::social::ClanSettings::ExtraSettingsParam::~ExtraSettingsParam()

} // namespace jag::oldscape::configdecoder
