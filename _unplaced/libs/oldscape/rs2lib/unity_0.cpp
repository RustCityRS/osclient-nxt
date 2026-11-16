// _unplaced/libs/oldscape/rs2lib/unity_0.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "libs/graphics/runetek7/particles/Particle.h"

namespace jag {
    // 0x10027d6d0, 112 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::social::ClanSettingsDelta::AddMember* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::AddMember, long long&, eastl::string&, int&>(void*, long long&, eastl::string&, int&)
    AddMember*
    jag::placement_new<oldscape::rs2lib::social::ClanSettingsDelta::AddMember, long long&, eastl::string&, int&>(
        void* param_1, longlong* param_2, basic_string* param_3, int* param_4) {
        longlong lVar1;
        eastl::string local_48[32];

        lVar1 = *param_2;
        eastl::string::basic_string(local_48, param_3);
        oldscape::rs2lib::social::ClanSettingsDelta::AddMember::AddMember(param_1, lVar1, local_48, *param_4);
        eastl::string::~basic_string(local_48);
        return param_1;
    }

    // 0x10027d740, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>* placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>, int, oldscape::rs2lib::social::ClanSettingsDelta::AddMember*&>(void*, int&&, oldscape::rs2lib::social::ClanSettingsDelta::AddMember*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>, int,
                       oldscape::rs2lib::social::ClanSettingsDelta::AddMember*&>(void* param_1, int* param_2,
                                                                                 AddMember** param_3) {
        ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10027d890, 32 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember, int&>(void*, int&)
    DeleteMember* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember, int&>(void* param_1,
                                                                                                 int* param_2) {
        oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember::DeleteMember(param_1, *param_2);
        return param_1;
    }

    // 0x10027d8b0, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>* placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>, int, oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember*&>(void*, int&&, oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>, int,
                       oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember*&>(void* param_1, int* param_2,
                                                                                    DeleteMember** param_3) {
        ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10027d920, 32 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank, int&, signed char&>(void*, int&, signed char&)
    SetMemberRank* jag::placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank, int&, signed char&>(
        void* param_1, int* param_2, signed* param_3) {
        oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank::SetMemberRank(param_1, *param_2,
                                                                                  (int)(char)*param_3);
        return param_1;
    }

    // 0x10027d940, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank>* placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank>, int, oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank*&>(void*, int&&, oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank>, int,
                       oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank*&>(void* param_1, int* param_2,
                                                                                     SetMemberRank** param_3) {
        ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10027d9b0, 32 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::social::ClanSettingsDelta::SetOwner* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner, int&>(void*, int&)
    SetOwner* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner, int&>(void* param_1, int* param_2) {
        oldscape::rs2lib::social::ClanSettingsDelta::SetOwner::SetOwner(param_1, *param_2);
        return param_1;
    }

    // 0x10027d9d0, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner>* placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner>, int, oldscape::rs2lib::social::ClanSettingsDelta::SetOwner*&>(void*, int&&, oldscape::rs2lib::social::ClanSettingsDelta::SetOwner*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner>, int,
                       oldscape::rs2lib::social::ClanSettingsDelta::SetOwner*&>(void* param_1, int* param_2,
                                                                                SetOwner** param_3) {
        ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10027da40, 48 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo, int&, int&, unsigned int&, unsigned int&>(void*, int&, int&, unsigned int&, unsigned int&)
    SetMemberExtraInfo* jag::placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo, int&, int&,
                                           unsigned int&, unsigned int&>(void* param_1, int* param_2, int* param_3,
                                                                         uint* param_4, uint* param_5) {
        oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo::SetMemberExtraInfo(param_1, *param_2, *param_3,
                                                                                            *param_4, *param_5);
        return param_1;
    }

    // 0x10027da70, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>* placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>, int, oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo*&>(void*, int&&, oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>, int,
                       oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo*&>(
        void* param_1, int* param_2, SetMemberExtraInfo** param_3) {
        ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10027dae0, 32 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted, int&, bool&>(void*, int&, bool&)
    SetMemberMuted*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted, int&, bool&>(void* param_1, int* param_2,
                                                                                            bool* param_3) {
        oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted::SetMemberMuted(param_1, *param_2, *param_3);
        return param_1;
    }

    // 0x10027db00, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted>* placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted>, int, oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted*&>(void*, int&&, oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted>, int,
                       oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted*&>(void* param_1, int* param_2,
                                                                                      SetMemberMuted** param_3) {
        ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10027db70, 96 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::social::ClanSettingsDelta::AddBanned* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned, long long&, eastl::string&>(void*, long long&, eastl::string&)
    AddBanned* jag::placement_new<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned, long long&, eastl::string&>(
        void* param_1, longlong* param_2, basic_string* param_3) {
        longlong lVar1;
        eastl::string local_40[32];

        lVar1 = *param_2;
        eastl::string::basic_string(local_40, param_3);
        oldscape::rs2lib::social::ClanSettingsDelta::AddBanned::AddBanned(param_1, lVar1, local_40);
        eastl::string::~basic_string(local_40);
        return param_1;
    }

    // 0x10027dbd0, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>* placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>, int, oldscape::rs2lib::social::ClanSettingsDelta::AddBanned*&>(void*, int&&, oldscape::rs2lib::social::ClanSettingsDelta::AddBanned*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>, int,
                       oldscape::rs2lib::social::ClanSettingsDelta::AddBanned*&>(void* param_1, int* param_2,
                                                                                 AddBanned** param_3) {
        ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10027dc40, 32 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned, int&>(void*, int&)
    DeleteBanned* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned, int&>(void* param_1,
                                                                                                 int* param_2) {
        oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned::DeleteBanned(param_1, *param_2);
        return param_1;
    }

    // 0x10027dc60, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned>* placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned>, int, oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned*&>(void*, int&&, oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned>, int,
                       oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned*&>(void* param_1, int* param_2,
                                                                                    DeleteBanned** param_3) {
        ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10027dcd0, 96 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::social::ClanSettingsDelta::SetClanName* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName, eastl::string&, int&>(void*, eastl::string&, int&)
    SetClanName* jag::placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName, eastl::string&, int&>(
        void* param_1, basic_string* param_2, int* param_3) {
        eastl::string local_40[32];

        eastl::string::basic_string(local_40, param_2);
        oldscape::rs2lib::social::ClanSettingsDelta::SetClanName::SetClanName(param_1, local_40, *param_3);
        eastl::string::~basic_string(local_40);
        return param_1;
    }

    // 0x10027dd30, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName>* placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName>, int, oldscape::rs2lib::social::ClanSettingsDelta::SetClanName*&>(void*, int&&, oldscape::rs2lib::social::ClanSettingsDelta::SetClanName*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName>, int,
                       oldscape::rs2lib::social::ClanSettingsDelta::SetClanName*&>(void* param_1, int* param_2,
                                                                                   SetClanName** param_3) {
        ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10027dda0, 32 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings, oldscape::rs2lib::social::ClanSettings&>(void*, oldscape::rs2lib::social::ClanSettings&)
    UpdateClanSettingsBaseSettings*
    jag::placement_new<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings,
                       oldscape::rs2lib::social::ClanSettings&>(void* param_1, ClanSettings* param_2) {
        oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings::UpdateClanSettingsBaseSettings(
            param_1, param_2);
        return param_1;
    }

    // 0x10027ddc0, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings>* placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings>, int, oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings*&>(void*, int&&, oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings>,
                       int, oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings*&>(
        void* param_1, int* param_2, UpdateClanSettingsBaseSettings** param_3) {
        ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings>::
            ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10027de30, 32 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt, int&, int&>(void*, int&, int&)
    SetExtraSettingInt* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt, int&, int&>(
        void* param_1, int* param_2, int* param_3) {
        oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt::SetExtraSettingInt(param_1, *param_2,
                                                                                            *param_3);
        return param_1;
    }

    // 0x10027de50, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt>* placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt>, int, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt*&>(void*, int&&, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt>, int,
                       oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt*&>(
        void* param_1, int* param_2, SetExtraSettingInt** param_3) {
        ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10027dec0, 48 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit, int&, int&, unsigned int&, unsigned int&>(void*, int&, int&, unsigned int&, unsigned int&)
    SetExtraSettingIntVarbit*
    jag::placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit, int&, int&, unsigned int&,
                       unsigned int&>(void* param_1, int* param_2, int* param_3, uint* param_4, uint* param_5) {
        oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit::SetExtraSettingIntVarbit(
            param_1, *param_2, *param_3, *param_4, *param_5);
        return param_1;
    }

    // 0x10027def0, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit>* placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit>, int, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit*&>(void*, int&&, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit>, int,
                       oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit*&>(
        void* param_1, int* param_2, SetExtraSettingIntVarbit** param_3) {
        ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10027df60, 32 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong, int&, long long&>(void*, int&, long long&)
    SetExtraSettingLong*
    jag::placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong, int&, long long&>(
        void* param_1, int* param_2, longlong* param_3) {
        oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong::SetExtraSettingLong(param_1, *param_2,
                                                                                              *param_3);
        return param_1;
    }

    // 0x10027df80, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong>* placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong>, int, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong*&>(void*, int&&, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong>, int,
                       oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong*&>(
        void* param_1, int* param_2, SetExtraSettingLong** param_3) {
        ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10027dff0, 96 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString, int&, eastl::string&>(void*, int&, eastl::string&)
    SetExtraSettingString*
    jag::placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString, int&, eastl::string&>(
        void* param_1, int* param_2, basic_string* param_3) {
        int iVar1;
        eastl::string local_40[32];

        iVar1 = *param_2;
        eastl::string::basic_string(local_40, param_3);
        oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString::SetExtraSettingString(param_1, iVar1,
                                                                                                  local_40);
        eastl::string::~basic_string(local_40);
        return param_1;
    }

    // 0x10027e050, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString>* placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString>, int, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString*&>(void*, int&&, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString>, int,
                       oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString*&>(
        void* param_1, int* param_2, SetExtraSettingString** param_3) {
        ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10027e0c0, 32 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::social::ClanSettingsDelta::AddBanned* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>(void*)
    AddBanned* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>(void* param_1) {
        oldscape::rs2lib::social::ClanSettingsDelta::AddBanned::AddBanned(param_1);
        return param_1;
    }

    // 0x10027e1c0, 32 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1>(void*)
    AddMemberOldV1* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1>(void* param_1) {
        oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1::AddMemberOldV1(param_1);
        return param_1;
    }

    // 0x10027e1e0, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1>* placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1>, int, oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1*&>(void*, int&&, oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1>, int,
                       oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1*&>(void* param_1, int* param_2,
                                                                                      AddMemberOldV1** param_3) {
        ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10027e2b0, 32 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::social::ClanSettingsDelta::AddMember* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>(void*)
    AddMember* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>(void* param_1) {
        oldscape::rs2lib::social::ClanSettingsDelta::AddMember::AddMember(param_1);
        return param_1;
    }

    // 0x10027e330, 32 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings>(void*)
    UpdateClanSettingsBaseSettings*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings>(void* param_1) {
        oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings::UpdateClanSettingsBaseSettings(
            param_1);
        return param_1;
    }

    // 0x10027e390, 32 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned>(void*)
    DeleteBanned* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned>(void* param_1) {
        oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned::DeleteBanned(param_1);
        return param_1;
    }

    // 0x10027e3f0, 32 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>(void*)
    DeleteMember* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>(void* param_1) {
        oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember::DeleteMember(param_1);
        return param_1;
    }

    // 0x10027e450, 32 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank>(void*)
    SetMemberRank* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank>(void* param_1) {
        oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank::SetMemberRank(param_1);
        return param_1;
    }

    // 0x10027e4b0, 32 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>(void*)
    SetMemberExtraInfo* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>(void* param_1) {
        oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo::SetMemberExtraInfo(param_1);
        return param_1;
    }

    // 0x10027e510, 32 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted>(void*)
    SetMemberMuted* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted>(void* param_1) {
        oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted::SetMemberMuted(param_1);
        return param_1;
    }

    // 0x10027e570, 32 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt>(void*)
    SetExtraSettingInt* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt>(void* param_1) {
        oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt::SetExtraSettingInt(param_1);
        return param_1;
    }

    // 0x10027e5d0, 32 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong>(void*)
    SetExtraSettingLong*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong>(void* param_1) {
        oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong::SetExtraSettingLong(param_1);
        return param_1;
    }

    // 0x10027e630, 32 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString>(void*)
    SetExtraSettingString*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString>(void* param_1) {
        oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString::SetExtraSettingString(param_1);
        return param_1;
    }

    // 0x10027e6b0, 32 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit>(void*)
    SetExtraSettingIntVarbit*
    placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit>(void* param_1) {
        oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit::SetExtraSettingIntVarbit(param_1);
        return param_1;
    }

    // 0x10027e710, 32 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::social::ClanSettingsDelta::SetClanName* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName>(void*)
    SetClanName* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName>(void* param_1) {
        oldscape::rs2lib::social::ClanSettingsDelta::SetClanName::SetClanName(param_1);
        return param_1;
    }

    // 0x10027e790, 32 bytes, inline, placed by nothing (unplaced)
    // oldscape::rs2lib::social::ClanSettingsDelta::SetOwner* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner>(void*)
    SetOwner* placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner>(void* param_1) {
        oldscape::rs2lib::social::ClanSettingsDelta::SetOwner::SetOwner(param_1);
        return param_1;
    }

    // 0x10027ed00, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared_trivial<oldscape::configdecoder::AreaType>* placement_new<ref_counter_shared_trivial<oldscape::configdecoder::AreaType>, int, oldscape::configdecoder::AreaType*&>(void*, int&&, oldscape::configdecoder::AreaType*&)
    ref_counter_shared_trivial* jag::placement_new<ref_counter_shared_trivial<oldscape::configdecoder::AreaType>, int,
                                                   oldscape::configdecoder::AreaType*&>(void* param_1, int* param_2,
                                                                                        AreaType** param_3) {
        ref_counter_shared_trivial<oldscape::configdecoder::AreaType>::ref_counter_shared_trivial(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10027f3e0, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared_trivial<oldscape::configdecoder::BugTemplateType>* placement_new<ref_counter_shared_trivial<oldscape::configdecoder::BugTemplateType>, int, oldscape::configdecoder::BugTemplateType*&>(void*, int&&, oldscape::configdecoder::BugTemplateType*&)
    ref_counter_shared_trivial*
    jag::placement_new<ref_counter_shared_trivial<oldscape::configdecoder::BugTemplateType>, int,
                       oldscape::configdecoder::BugTemplateType*&>(void* param_1, int* param_2,
                                                                   BugTemplateType** param_3) {
        ref_counter_shared_trivial<oldscape::configdecoder::BugTemplateType>::ref_counter_shared_trivial(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10027fac0, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared_trivial<oldscape::configdecoder::ControllerType>* placement_new<ref_counter_shared_trivial<oldscape::configdecoder::ControllerType>, int, oldscape::configdecoder::ControllerType*&>(void*, int&&, oldscape::configdecoder::ControllerType*&)
    ref_counter_shared_trivial*
    jag::placement_new<ref_counter_shared_trivial<oldscape::configdecoder::ControllerType>, int,
                       oldscape::configdecoder::ControllerType*&>(void* param_1, int* param_2,
                                                                  ControllerType** param_3) {
        ref_counter_shared_trivial<oldscape::configdecoder::ControllerType>::ref_counter_shared_trivial(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1002801a0, 64 bytes, inline, placed by nothing (unplaced)
    // oldscape::configdecoder::EnumType* placement_new<oldscape::configdecoder::EnumType>(void*)
    EnumType* placement_new<oldscape::configdecoder::EnumType>(void* param_1) {
        *(undefined8*)((long)param_1 + 96) = 0;
        *(undefined8*)((long)param_1 + 104) = 0;
        *(undefined8*)((long)param_1 + 80) = 0;
        *(undefined8*)((long)param_1 + 88) = 0;
        *(undefined8*)((long)param_1 + 64) = 0;
        *(undefined8*)((long)param_1 + 72) = 0;
        *(undefined8*)((long)param_1 + 48) = 0;
        *(undefined8*)((long)param_1 + 56) = 0;
        *(undefined8*)((long)param_1 + 32) = 0;
        *(undefined8*)((long)param_1 + 40) = 0;
        *(undefined8*)((long)param_1 + 16) = 0;
        *(undefined8*)((long)param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)((long)param_1 + 8) = 0;
        *(undefined8*)((long)param_1 + 112) = 0;
        oldscape::configdecoder::EnumType::EnumType(param_1);
        return param_1;
    }

    // 0x1002801e0, 32 bytes, inline, placed by nothing (unplaced)
    // ref_counter_shared<oldscape::configdecoder::EnumType>* placement_new<ref_counter_shared<oldscape::configdecoder::EnumType>, int, oldscape::configdecoder::EnumType*&>(void*, int&&, oldscape::configdecoder::EnumType*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::configdecoder::EnumType>, int, oldscape::configdecoder::EnumType*&>(
        void* param_1, int* param_2, EnumType** param_3) {
        ref_counter_shared<oldscape::configdecoder::EnumType>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

} // namespace jag

namespace jag::oldscape::constants {
    // 0x100d3ffd4, 4 bytes, __const
    DobConstants::DOB_MIN_VAL = -8388608;

    // 0x100d3ffd8, 4 bytes, __const
    DobConstants::DOB_MAX_VAL = 8388607;

    // 0x100d3ffdc, 4 bytes, __const
    DobConstants::DOB_UNKNOWN = -8388608;

    // 0x100d3ffe0, 4 bytes, __const
    DobConstants::DOB_UNKNOWN_OVER_13 = -8388607;

    // 0x100d3ffe4, 4 bytes, __const
    DobConstants::DOB_U13_UNKNOWN_DOB = 8388607;

    // 0x100d3ffe8, 4 bytes, __const
    DobConstants::DOB_U13_UNKNOWN_PENDING = 8388606;

    // 0x100d3ffec, 4 bytes, __const
    DobConstants::DOB_NOT_SET_YET = 8388605;

    // 0x100d3fff0, 4 bytes, __const
    DobConstants::DOB_HIGHEST_NORMAL_DOB = 8388352;

    // 0x100d3fff4, 4 bytes, __const
    DobConstants::AGE_UNKNOWN = 127;

    // 0x100d3fff8, 4 bytes, __const
    DobConstants::AGE_UNKNOWN_OVER_13 = 126;

    // 0x100d3fffc, 4 bytes, __const
    DobConstants::AGE_U13_UNKNOWN_DOB = -1;

    // 0x100d40000, 4 bytes, __const
    DobConstants::AGE_U13_DOB_NOT_SET = -2;

    // 0x100d40004, 4 bytes, __const
    DobConstants::AGE_U13_UNKNOWN_PENDING = -3;

} // namespace jag::oldscape::constants

namespace jag::oldscape::constants::skills {
    // 0x100d40040, 32 bytes, __const
    membersonly = {0, 0, 256, 16777216, 16843009, 16843009, 0, 0};

    // 0x100d40060, 224 bytes, __const
    used = {
        16843009,    16843009,   16843009,   16843009,    16843009,   65793,      0,          872415233,
        -1197473792, 1008250372, 956301312,  958398464,   1199570944, 931135488,  1043595264, 973078528,
        0,           1,          0,          0,           0,          1076494336, 0,          -1072168960,
        1413752350,  1074340347, -350469331, -1088801054, -350469331, 1058682594, 1002150215, 1070381343,
        -687194767,  1088254115, 343597384,  1088505774,  0,          1055916032, 158966641,  -1073048753,
        -755914244,  1077961293, 1610612736, 1073291771,  1610612736, 1072243195, -111953070, 1059660282,
        286331161,   1065423121, 1413754136, 1063854587,  1413754136, 1075388923, 0,          0,
    };

    // 0x100ef8790, 200 bytes, __const
    skill = {
        "attack",  "defence",      "strength",   "hitpoints", "ranged",     "prayer",   "magic",
        "cooking", "woodcutting",  "fletching",  "fishing",   "firemaking", "crafting", "smithing",
        "mining",  "herblore",     "agility",    "thieving",  "slayer",     "farming",  "runecraft",
        "hunter",  "construction", "animallore", "UNUSED",
    };

} // namespace jag::oldscape::constants::skills

namespace jag::oldscape::rs2lib::social {
    // 0x100d3ffb0, 36 bytes, __const
    NameSpaceUtils::values = {-1, 0, 1, 2, 3, 4, 5, 6, 7};

} // namespace jag::oldscape::rs2lib::social

namespace jag::graphics::helpers {
    // 0x10027c620: the linker folded this into eastl::generic_iterator<signed char*, void>::operator++(), which has identical code
    ParticleSOAIterator::operator++();

} // namespace jag::graphics::helpers
