// _unplaced/libs/oldscape/rs2lib/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "libs/graphics/runetek7/particles/Particle.h"

namespace jag {
    // 0x10027d6d0
    oldscape::rs2lib::social::ClanSettingsDelta::AddMember*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::AddMember, long long&, eastl::string&, int&>(
        void* arg1, long long& arg2, eastl::string& str, int& arg4) {

        eastl::string local_48(str);
        new (arg1) oldscape::rs2lib::social::ClanSettingsDelta::AddMember((long long)arg2, &local_48, arg4);
        return arg1;
    }

    // 0x10027d740
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>*
    placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>, int,
                  oldscape::rs2lib::social::ClanSettingsDelta::AddMember*&>(
        void* arg1, int&& arg2, oldscape::rs2lib::social::ClanSettingsDelta::AddMember*& arg3) {
        new (arg1) ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10027d890
    oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember, int&>(void* arg1, int& arg2) {
        new (arg1) oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember(arg2);
        return arg1;
    }

    // 0x10027d8b0
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>*
    placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>, int,
                  oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember*&>(
        void* arg1, int&& arg2, oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember*& arg3) {
        new (arg1) ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10027d920
    oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank, int&, signed char&>(void* arg1, int& arg2,
                                                                                                  signed char& arg3) {
        new (arg1) oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank(arg2, arg3);
        return arg1;
    }

    // 0x10027d940
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank>*
    placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank>, int,
                  oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank*&>(
        void* arg1, int&& arg2, oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank*& arg3) {
        new (arg1) ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10027d9b0
    oldscape::rs2lib::social::ClanSettingsDelta::SetOwner*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner, int&>(void* arg1, int& arg2) {
        new (arg1) oldscape::rs2lib::social::ClanSettingsDelta::SetOwner(arg2);
        return arg1;
    }

    // 0x10027d9d0
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner>*
    placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner>, int,
                  oldscape::rs2lib::social::ClanSettingsDelta::SetOwner*&>(
        void* arg1, int&& arg2, oldscape::rs2lib::social::ClanSettingsDelta::SetOwner*& arg3) {
        new (arg1) ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10027da40
    oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo, int&, int&, unsigned int&,
                  unsigned int&>(void* arg1, int& arg2, int& arg3, unsigned int& arg4, unsigned int& arg5) {
        new (arg1) oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo(arg2, arg3, arg4, arg5);
        return arg1;
    }

    // 0x10027da70
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>*
    placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>, int,
                  oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo*&>(
        void* arg1, int&& arg2, oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo*& arg3) {
        new (arg1)
            ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10027dae0
    oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted, int&, bool&>(void* arg1, int& arg2,
                                                                                            bool& arg3) {
        new (arg1) oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted(arg2, arg3);
        return arg1;
    }

    // 0x10027db00
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted>*
    placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted>, int,
                  oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted*&>(
        void* arg1, int&& arg2, oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted*& arg3) {
        new (arg1) ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10027db70
    oldscape::rs2lib::social::ClanSettingsDelta::AddBanned*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned, long long&, eastl::string&>(
        void* arg1, long long& arg2, eastl::string& str) {

        eastl::string local_40(str);
        new (arg1) oldscape::rs2lib::social::ClanSettingsDelta::AddBanned((long long)arg2, &local_40);
        return arg1;
    }

    // 0x10027dbd0
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>*
    placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>, int,
                  oldscape::rs2lib::social::ClanSettingsDelta::AddBanned*&>(
        void* arg1, int&& arg2, oldscape::rs2lib::social::ClanSettingsDelta::AddBanned*& arg3) {
        new (arg1) ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10027dc40
    oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned, int&>(void* arg1, int& arg2) {
        new (arg1) oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned(arg2);
        return arg1;
    }

    // 0x10027dc60
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned>*
    placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned>, int,
                  oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned*&>(
        void* arg1, int&& arg2, oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned*& arg3) {
        new (arg1) ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10027dcd0
    oldscape::rs2lib::social::ClanSettingsDelta::SetClanName*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName, eastl::string&, int&>(void* arg1,
                                                                                                  eastl::string& str,
                                                                                                  int& arg3) {

        eastl::string local_40(str);
        new (arg1) oldscape::rs2lib::social::ClanSettingsDelta::SetClanName(&local_40, arg3);
        return arg1;
    }

    // 0x10027dd30
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName>*
    placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName>, int,
                  oldscape::rs2lib::social::ClanSettingsDelta::SetClanName*&>(
        void* arg1, int&& arg2, oldscape::rs2lib::social::ClanSettingsDelta::SetClanName*& arg3) {
        new (arg1) ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10027dda0
    oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings,
                  oldscape::rs2lib::social::ClanSettings&>(void* arg1,
                                                           oldscape::rs2lib::social::ClanSettings& clanSettings) {
        new (arg1) oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings(clanSettings);
        return arg1;
    }

    // 0x10027ddc0
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings>*
    placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings>, int,
                  oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings*&>(
        void* arg1, int&& arg2, oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings*& arg3) {
        new (arg1) ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings>(
            (long)*arg2, arg3);
        return arg1;
    }

    // 0x10027de30
    oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt, int&, int&>(void* arg1, int& arg2,
                                                                                               int& arg3) {
        new (arg1) oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt(arg2, arg3);
        return arg1;
    }

    // 0x10027de50
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt>*
    placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt>, int,
                  oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt*&>(
        void* arg1, int&& arg2, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt*& arg3) {
        new (arg1)
            ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10027dec0
    oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit, int&, int&, unsigned int&,
                  unsigned int&>(void* arg1, int& arg2, int& arg3, unsigned int& arg4, unsigned int& arg5) {
        new (arg1) oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit(arg2, arg3, arg4, arg5);
        return arg1;
    }

    // 0x10027def0
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit>*
    placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit>, int,
                  oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit*&>(
        void* arg1, int&& arg2, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit*& arg3) {
        new (arg1) ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit>(
            (long)*arg2, arg3);
        return arg1;
    }

    // 0x10027df60
    oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong, int&, long long&>(void* arg1,
                                                                                                      int& arg2,
                                                                                                      long long& arg3) {
        new (arg1) oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong(arg2, arg3);
        return arg1;
    }

    // 0x10027df80
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong>*
    placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong>, int,
                  oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong*&>(
        void* arg1, int&& arg2, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong*& arg3) {
        new (arg1)
            ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10027dff0
    oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString, int&, eastl::string&>(
        void* arg1, int& arg2, eastl::string& str) {

        eastl::string local_40(str);
        new (arg1) oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString((int)arg2, &local_40);
        return arg1;
    }

    // 0x10027e050
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString>*
    placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString>, int,
                  oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString*&>(
        void* arg1, int&& arg2, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString*& arg3) {
        new (arg1)
            ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10027e0c0
    oldscape::rs2lib::social::ClanSettingsDelta::AddBanned*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>(void* arg1) {
        new (arg1) oldscape::rs2lib::social::ClanSettingsDelta::AddBanned();
        return arg1;
    }

    // 0x10027e1c0
    oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1>(void* arg1) {
        new (arg1) oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1();
        return arg1;
    }

    // 0x10027e1e0
    ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1>*
    placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1>, int,
                  oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1*&>(
        void* arg1, int&& arg2, oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1*& arg3) {
        new (arg1) ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10027e2b0
    oldscape::rs2lib::social::ClanSettingsDelta::AddMember*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>(void* arg1) {
        new (arg1) oldscape::rs2lib::social::ClanSettingsDelta::AddMember();
        return arg1;
    }

    // 0x10027e330
    oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings>(void* arg1) {
        new (arg1) oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings();
        return arg1;
    }

    // 0x10027e390
    oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned>(void* arg1) {
        new (arg1) oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned();
        return arg1;
    }

    // 0x10027e3f0
    oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>(void* arg1) {
        new (arg1) oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember();
        return arg1;
    }

    // 0x10027e450
    oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank>(void* arg1) {
        new (arg1) oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank();
        return arg1;
    }

    // 0x10027e4b0
    oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>(void* arg1) {
        new (arg1) oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo();
        return arg1;
    }

    // 0x10027e510
    oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted>(void* arg1) {
        new (arg1) oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted();
        return arg1;
    }

    // 0x10027e570
    oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt>(void* arg1) {
        new (arg1) oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt();
        return arg1;
    }

    // 0x10027e5d0
    oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong>(void* arg1) {
        new (arg1) oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong();
        return arg1;
    }

    // 0x10027e630
    oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString>(void* arg1) {
        new (arg1) oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString();
        return arg1;
    }

    // 0x10027e6b0
    oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit>(void* arg1) {
        new (arg1) oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit();
        return arg1;
    }

    // 0x10027e710
    oldscape::rs2lib::social::ClanSettingsDelta::SetClanName*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName>(void* arg1) {
        new (arg1) oldscape::rs2lib::social::ClanSettingsDelta::SetClanName();
        return arg1;
    }

    // 0x10027e790
    oldscape::rs2lib::social::ClanSettingsDelta::SetOwner*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner>(void* arg1) {
        new (arg1) oldscape::rs2lib::social::ClanSettingsDelta::SetOwner();
        return arg1;
    }

    // 0x10027ed00
    ref_counter_shared_trivial<oldscape::configdecoder::AreaType>*
    placement_new<ref_counter_shared_trivial<oldscape::configdecoder::AreaType>, int,
                  oldscape::configdecoder::AreaType*&>(void* arg1, int&& arg2,
                                                       oldscape::configdecoder::AreaType*& arg3) {
        new (arg1) ref_counter_shared_trivial<oldscape::configdecoder::AreaType>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10027f3e0
    ref_counter_shared_trivial<oldscape::configdecoder::BugTemplateType>*
    placement_new<ref_counter_shared_trivial<oldscape::configdecoder::BugTemplateType>, int,
                  oldscape::configdecoder::BugTemplateType*&>(void* arg1, int&& arg2,
                                                              oldscape::configdecoder::BugTemplateType*& arg3) {
        new (arg1) ref_counter_shared_trivial<oldscape::configdecoder::BugTemplateType>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10027fac0
    ref_counter_shared_trivial<oldscape::configdecoder::ControllerType>*
    placement_new<ref_counter_shared_trivial<oldscape::configdecoder::ControllerType>, int,
                  oldscape::configdecoder::ControllerType*&>(void* arg1, int&& arg2,
                                                             oldscape::configdecoder::ControllerType*& arg3) {
        new (arg1) ref_counter_shared_trivial<oldscape::configdecoder::ControllerType>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1002801a0
    oldscape::configdecoder::EnumType* placement_new<oldscape::configdecoder::EnumType>(void* arg1) {
        *(uint64_t*)((long)arg1 + 96) = 0;
        *(uint64_t*)((long)arg1 + 104) = 0;
        *(uint64_t*)((long)arg1 + 80) = 0;
        *(uint64_t*)((long)arg1 + 88) = 0;
        *(uint64_t*)((long)arg1 + 64) = 0;
        *(uint64_t*)((long)arg1 + 72) = 0;
        *(uint64_t*)((long)arg1 + 48) = 0;
        *(uint64_t*)((long)arg1 + 56) = 0;
        *(uint64_t*)((long)arg1 + 32) = 0;
        *(uint64_t*)((long)arg1 + 40) = 0;
        *(uint64_t*)((long)arg1 + 16) = 0;
        *(uint64_t*)((long)arg1 + 24) = 0;
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)((long)arg1 + 8) = 0;
        *(uint64_t*)((long)arg1 + 112) = 0;
        new (arg1) oldscape::configdecoder::EnumType();
        return arg1;
    }

    // 0x1002801e0
    ref_counter_shared<oldscape::configdecoder::EnumType>*
    placement_new<ref_counter_shared<oldscape::configdecoder::EnumType>, int, oldscape::configdecoder::EnumType*&>(
        void* arg1, int&& arg2, oldscape::configdecoder::EnumType*& arg3) {
        new (arg1) ref_counter_shared<oldscape::configdecoder::EnumType>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag

namespace jag::oldscape::constants {
    // 0x100d3ffd4
    int32_t DobConstants::DOB_MIN_VAL = -8388608;

    // 0x100d3ffd8
    int32_t DobConstants::DOB_MAX_VAL = 8388607;

    // 0x100d3ffdc
    int32_t DobConstants::DOB_UNKNOWN = -8388608;

    // 0x100d3ffe0
    int32_t DobConstants::DOB_UNKNOWN_OVER_13 = -8388607;

    // 0x100d3ffe4
    int32_t DobConstants::DOB_U13_UNKNOWN_DOB = 8388607;

    // 0x100d3ffe8
    int32_t DobConstants::DOB_U13_UNKNOWN_PENDING = 8388606;

    // 0x100d3ffec
    int32_t DobConstants::DOB_NOT_SET_YET = 8388605;

    // 0x100d3fff0
    int32_t DobConstants::DOB_HIGHEST_NORMAL_DOB = 8388352;

    // 0x100d3fff4
    int32_t DobConstants::AGE_UNKNOWN = 127;

    // 0x100d3fff8
    int32_t DobConstants::AGE_UNKNOWN_OVER_13 = 126;

    // 0x100d3fffc
    int32_t DobConstants::AGE_U13_UNKNOWN_DOB = -1;

    // 0x100d40000
    int32_t DobConstants::AGE_U13_DOB_NOT_SET = -2;

    // 0x100d40004
    int32_t DobConstants::AGE_U13_UNKNOWN_PENDING = -3;

} // namespace jag::oldscape::constants

namespace jag::oldscape::constants::skills {
    // 0x100d40040
    int32_t membersonly[8] = {0, 0, 256, 16777216, 16843009, 16843009, 0, 0};

    // 0x100d40060
    int32_t used[56] = {
        16843009,    16843009,   16843009,   16843009,    16843009,   65793,      0,          872415233,
        -1197473792, 1008250372, 956301312,  958398464,   1199570944, 931135488,  1043595264, 973078528,
        0,           1,          0,          0,           0,          1076494336, 0,          -1072168960,
        1413752350,  1074340347, -350469331, -1088801054, -350469331, 1058682594, 1002150215, 1070381343,
        -687194767,  1088254115, 343597384,  1088505774,  0,          1055916032, 158966641,  -1073048753,
        -755914244,  1077961293, 1610612736, 1073291771,  1610612736, 1072243195, -111953070, 1059660282,
        286331161,   1065423121, 1413754136, 1063854587,  1413754136, 1075388923, 0,          0,
    };

    // 0x100ef8790
    const void* skill[25] = {
        "attack",  "defence",      "strength",   "hitpoints", "ranged",     "prayer",   "magic",
        "cooking", "woodcutting",  "fletching",  "fishing",   "firemaking", "crafting", "smithing",
        "mining",  "herblore",     "agility",    "thieving",  "slayer",     "farming",  "runecraft",
        "hunter",  "construction", "animallore", "UNUSED",
    };

} // namespace jag::oldscape::constants::skills

namespace jag::oldscape::rs2lib::social {
    // 0x100d3ffb0
    int32_t NameSpaceUtils::values[9] = {-1, 0, 1, 2, 3, 4, 5, 6, 7};

} // namespace jag::oldscape::rs2lib::social

namespace jag::graphics::helpers {
    // 0x10027c620: ParticleSOAIterator::operator++() has the same machine code as eastl::generic_iterator<signed char*, void>::operator++()

} // namespace jag::graphics::helpers
