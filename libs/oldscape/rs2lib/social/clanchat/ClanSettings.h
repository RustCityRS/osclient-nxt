// libs/oldscape/rs2lib/social/clanchat/ClanSettings.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape::rs2lib::social {
    class ClanSettings {
    public:
        class ExtraSettingsParam;
        ~ClanSettings();
        ClanSettings(long long, PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        void Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        ClanSettings(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&);
        ClanSettings(eastl::string, long long);
        void DoAddMember(long long, eastl::string const&, int);
        Copy();
        ClanSettings* ValidateClanName(eastl::string);
        void ExtendMemberList(int);
        void ExtendBannedList(int);
        ulong IsBanned(long long);
        ulong IsAffined(long long);
        ulong FindBanned(long long);
        ulong FindMember(long long);
        ulong FindMember(eastl::string);
        int GetMemberRank(long long);
        GetMemberJoinRuneday(long long);
        bool GetMemberMuted(long long);
        GetMemberExtraInfo(long long, unsigned int, unsigned int);
        int GetMemberExtraInfoBySlot(unsigned int, unsigned int, unsigned int);
        GetMemberDisplayName(long long);
        GetBannedDisplayName(long long);
        bool IsAdmin(long long);
        GetExtraSettingAsInt(int);
        GetExtraSettingAsIntVarbit(int, unsigned int, unsigned int);
        GetExtraSettingAsLong(int);
        GetExtraSettingAsString(int);
        GetMemberSortedIndex();
        ulong AddMember(long long, int);
        int DeleteMember(long long);
        void DoDeleteMember(int);
        void SetCurrentAndReplacementOwners();
        ulong AddBanned(long long);
        void DoAddBanned(long long, eastl::string const&);
        int DeleteBanned(long long);
        void DoDeleteBanned(int);
        SetMemberRank(long long, signed char);
        uint SetMemberRankBySlot(int, signed char);
        SetOwnerBySlot(int);
        SetMemberMuted(long long, bool);
        int SetMemberMutedBySlot(int, bool);
        SetMemberExtraInfo(long long, int, unsigned int, unsigned int);
        int SetMemberExtraInfoBySlot(int, int, unsigned int, unsigned int);
        bool SetAllowNonMembers(bool);
        bool SetRankTalk(signed char);
        bool SetRankKick(signed char);
        bool SetRankLootShare(signed char);
        bool SetCoinShare(signed char);
        SetExtraSettingInt(int, int);
        SetExtraSettingIntVarbit(int, int, unsigned int, unsigned int);
        SetExtraSettingLong(int, long long);
        SetExtraSettingString(int, eastl::string);
        int GetEncodeLength(bool, bool);
        void Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, bool, bool);
        void Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>&, bool, bool, bool);
        int GetMaximumSize(bool, bool, int, int, int);
        ClanSettings();
        static /* 1 bytes */ m_fluttered;
        static /* 12 bytes */ m_verbose;

        // data members, from how the methods use this: 408 bytes
        longlong field_0;   // offset 0
        undefined4 field_8; // offset 8
        bool field_12;      // offset 12
        char field_13;      // offset 13
        char _unknown_14[34];
        int field_48;           // offset 48
        undefined4 field_52;    // offset 52
        bool m_allowNonMembers; // offset 56
        char field_57;          // offset 57
        char field_58;          // offset 58
        char field_59;          // offset 59
        char field_60;          // offset 60
        char _unknown_61[3];
        uint field_64; // offset 64
        char _unknown_68[4];
        undefined1 field_72; // offset 72
        char _unknown_73[31];
        undefined1 field_104; // offset 104
        char _unknown_105[31];
        undefined1 field_136; // offset 136
        char _unknown_137[31];
        undefined1 field_168; // offset 168
        char _unknown_169[31];
        undefined1 field_200; // offset 200
        char _unknown_201[31];
        uint field_232; // offset 232
        uint field_236; // offset 236
        uint field_240; // offset 240
        char _unknown_244[4];
        undefined1 field_248; // offset 248
        char _unknown_249[159];
    };

    class ClanSettings::ExtraSettingsParam {
    public:
        ~ExtraSettingsParam();
        ExtraSettingsParam();
        ExtraSettingsParam* operator=(ExtraSettingsParam const&);
        ExtraSettingsParam(ExtraSettingsParam const&);

        // data members, from how the methods use this: 24 bytes
        undefined8 field_0; // offset 0
        undefined8 field_8; // offset 8
        char _unknown_16[8];
    };

    // 0x100151ec0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ClanSettings::~ClanSettings(): jumps straight to the base-object destructor

    // 0x100151ed0, 144 bytes, base-object destructor, inline, placed by class name and debug map
    // ClanSettings::~ClanSettings()
    void ClanSettings::~ClanSettings() {
        (&field_400)->~Array();
        (&field_344)->~hash_map();
        (&field_312)->~vector();
        (&field_280)->~vector();
        (&field_248)->~vector();
        (&field_200)->~vector();
        (&field_168)->~vector();
        (&field_136)->~vector();
        (&field_104)->~vector();
        (&field_72)->~vector();
        (&field_16)->~basic_string();
    }

    // 0x1001520e0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ClanSettings::ExtraSettingsParam::~ExtraSettingsParam(): jumps straight to the base-object destructor

    // 0x1001520f0, 16 bytes, base-object destructor, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // ClanSettings::ExtraSettingsParam::~ExtraSettingsParam()
    /* configdecoder::ObjSpriteCacheKey::~ObjSpriteCacheKey() */

    void configdecoder::ObjSpriteCacheKey::~ObjSpriteCacheKey() {
        (&field_16)->~basic_string();
    }

    // 0x10025fef0, 48 bytes, inline, placed by class name
    // ClanSettings::ExtraSettingsParam::operator=(ClanSettings::ExtraSettingsParam const&)
    /* ClanSettings::ExtraSettingsParam::TEMPNAMEPLACEHOLDERVALUE(ClanSettings::ExtraSettingsParam
   const&) */

    ExtraSettingsParam* ClanSettings::ExtraSettingsParam::operator=(ExtraSettingsParam* param_1) {
        undefined8 uVar1;

        uVar1 = param_1->field_8;
        field_0 = param_1->field_0;
        field_8 = uVar1;
        eastl::string::operator=((eastl::string*)&field_16, (basic_string*)&param_1->field_16);
        return this;
    }

    // 0x10026c3a0, 16 bytes, complete-object constructor, inline, placed by class name
    // ClanSettings::ClanSettings(): jumps straight to the base-object constructor

    // 0x10026c3b0, 480 bytes, base-object constructor, inline, placed by class name
    // ClanSettings::ClanSettings()
    void ClanSettings::ClanSettings() {
        allocator local_38[8];

        *(undefined8*)((long)&field_0 + 6) = 0;
        field_0 = 0;
        eastl::allocator::allocator(local_38, "EASTL basic_string");
        new (&field_16, "", local_38) eastl::string();
        field_64 = 0;
        field_48 = 0;
        field_52 = 0;
        m_allowNonMembers = false;
        new (&field_72) eastl::vector<long long, eastl::allocator>();
        new (&field_104) eastl::vector<signed char, eastl::allocator>();
        new (&field_136) eastl::vector<int, eastl::allocator>();
        new (&field_168) eastl::vector<int, eastl::allocator>();
        new (&field_200) eastl::vector<int, eastl::allocator>();
        field_232 = 4294967295;
        field_236 = 4294967295;
        field_240 = 0;
        new (&field_248) eastl::vector<long long, eastl::allocator>();
        new (&field_280) eastl::vector<eastl::string, eastl::allocator>();
        new (&field_312) eastl::vector<eastl::string, eastl::allocator>();
        eastl::allocator::allocator(local_38, "EASTL hash_map");
        new (&field_344, local_38) eastl::hash_map<long long, ClanSettings::ExtraSettingsParam, eastl::hash<long long>,
                                                   eastl::equal_to<long long>, eastl::allocator, false>();
        new (&field_400) Array<int, eastl::allocator>();
    }

    // 0x10026cbe0, 16 bytes, complete-object constructor, inline, placed by class name
    // ClanSettings::ExtraSettingsParam::ExtraSettingsParam(ClanSettings::ExtraSettingsParam const&): jumps straight to the base-object constructor

    // 0x10026cbf0, 32 bytes, base-object constructor, inline, placed by class name
    // ClanSettings::ExtraSettingsParam::ExtraSettingsParam(ClanSettings::ExtraSettingsParam const&)
    void ClanSettings::ExtraSettingsParam::ExtraSettingsParam(ExtraSettingsParam* param_1) {
        undefined8 uVar1;

        uVar1 = param_1->field_8;
        field_0 = param_1->field_0;
        field_8 = uVar1;
        new (&field_16, (basic_string*)&param_1->field_16) eastl::string();
    }

} // namespace jag::oldscape::rs2lib::social

namespace jag {
    // 0x100152140, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::rs2lib::social::ClanChannelDelta* placement_new<oldscape::rs2lib::social::ClanChannelDelta, oldscape::core::SuperPacket&>(void*, oldscape::core::SuperPacket&)
    ClanChannelDelta*
    jag::placement_new<oldscape::rs2lib::social::ClanChannelDelta, oldscape::core::SuperPacket&>(void* param_1,
                                                                                                 SuperPacket* param_2) {
        oldscape::rs2lib::social::ClanChannelDelta::ClanChannelDelta(param_1, (PacketJ*)param_2);
        return param_1;
    }

    // 0x100152160, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta>* placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta>, int, oldscape::rs2lib::social::ClanChannelDelta*&>(void*, int&&, oldscape::rs2lib::social::ClanChannelDelta*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta>, int,
                                           oldscape::rs2lib::social::ClanChannelDelta*&>(void* param_1, int* param_2,
                                                                                         ClanChannelDelta** param_3) {
        ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta>::ref_counter_shared(param_1, (long)*param_2,
                                                                                           *param_3);
        return param_1;
    }

    // 0x100152180, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanChannelDelta*): jumps straight to the base-object constructor

    // 0x100152190, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta>::ref_counter_shared(unsigned long, oldscape::rs2lib::social::ClanChannelDelta*)
    void ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta>::ref_counter_shared(ulong param_1,
                                                                                            ClanChannelDelta* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7878 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ClanChannelDelta**)(this + 24) = param_2;
    }

    // 0x1001521d0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta>::DeleteData()
    void ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~ClanChannelDelta();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 32;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag

namespace jag::oldscape::configdecoder {
    // 0x1001520f0: the linker folded this into rs2lib::social::ClanSettings::ExtraSettingsParam::~ExtraSettingsParam(), which has identical code
    ObjSpriteCacheKey::~ObjSpriteCacheKey();

} // namespace jag::oldscape::configdecoder
