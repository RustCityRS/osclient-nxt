// libs/oldscape/rs2lib/social/clanchat/ClanChannelDelta.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "ClanChannelDelta.h"

namespace jag::oldscape::rs2lib::social {
    // 0x1000c46d0: ClanChannelDelta::UpdateUserDetailsV2::GetID() const has the same machine code as javapal::GameShell::GetClientType()

    // 0x10025b310
    ClanChannelDelta::AddUser::AddUser(long long arg1, eastl::string str, int arg3, signed char arg4, long long arg5)
        : ClanChannelDeltaEntry(), field_32(-1), field_32(arg1), field_40(str), field_72(arg3) {
        field_76 = (bool)arg4;
        field_80 = arg5;
    }

    // 0x10025b400
    void ClanChannelDelta::AddUser::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        long lVar4;
        long long lVar5;
        Logger* this_00;
        uint64_t uVar6;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_48[32];

        bool cVar1 = packetJ.g1();
        if (cVar1 != -1) {
            lVar4 = packetJ.size();
            packetJ.SetPos(lVar4 - 1);
            lVar5 = packetJ.g8();
            field_32 = lVar5;
        }
        local_48->gStringNoConversion((uint8_t)packetJ);
        field_40 = local_48;
        unsigned short uVar3 = packetJ.g2();
        field_72 = (unsigned int)uVar3;
        bool bVar2 = (bool)packetJ.g1();
        field_76 = bVar2;
        lVar5 = packetJ.g8();
        field_80 = lVar5;
        if ((ClanChannel::m_verbose != '\0') && (ClanChannel::m_fluttered == '\0')) {
            this_00 = logger::default_logger();
            lVar5 = field_32;
            uVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            this_00->Log(false, 5,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/social/"
                         "clanchat/ClanChannelDelta.cpp",
                         38, "memberhash: %i membername: %s", (int)lVar5, uVar6);
        }
    }

    // 0x10025b510
    void ClanChannelDelta::AddUser::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ, bool arg2,
                                           bool arg3) {
        long long lVar1;
        Logger* pLVar2;
        uint64_t uVar3;
        uint64_t in_register_00000011;

        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            packetJ.p1<shared::LoginProt::ID>(255);
        } else {
            if (field_32 == -1) {
                pLVar2 = logger::default_logger();
                pLVar2->Log(false, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                            "social/clanchat/ClanChannelDelta.cpp",
                            48, "addMember.encode() was asked to storeUserHashes but userhash not present!");
            }
            packetJ.p8<long long>(field_32);
        }
        packetJ.pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(field_40, false);
        packetJ.p2<int>(field_72);
        packetJ.p1<signed char>(field_76);
        packetJ.p8<long long>(field_80);
        if ((ClanChannel::m_verbose != '\0') && (ClanChannel::m_fluttered == '\0')) {
            pLVar2 = logger::default_logger();
            lVar1 = field_32;
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar2->Log(false, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/social/"
                        "clanchat/ClanChannelDelta.cpp",
                        63, "memberhash: %i membername: %s", (unsigned long)(unsigned int)lVar1, uVar3);
        }
    }

    // 0x10025b610
    void ClanChannelDelta::AddUser::Apply(ClanChannel& clanChannel) {
        ReturnValue local_38;

        make_shared<ClanChannelUser>(&local_38);
        long long lVar3 = field_32;
        auto plVar4 = local_38.operator->();
        *plVar4 = lVar3;
        DisplayName local_78(field_40);
        long lVar5 = local_38.operator->();
        (*((lVar5 + 16))) = local_78;
        unsigned int uVar2 = field_72;
        lVar5 = local_38.operator->();
        *(unsigned int*)(lVar5 + 12) = uVar2;
        bool bVar1 = field_76;
        lVar5 = local_38.operator->();
        *(bool*)(lVar5 + 8) = bVar1;
        lVar3 = field_80;
        lVar5 = local_38.operator->();
        *(long long*)(lVar5 + 80) = lVar3;
        clanChannel.DoAddUser(local_38);
    }

    // 0x10025b6f0
    ClanChannelDelta::DeleteUser::DeleteUser(int arg1, int arg2, long long arg3)
        : ClanChannelDeltaEntry(), field_32(arg1), field_36(arg2), field_40(arg3) {}

    // 0x10025b740
    void ClanChannelDelta::DeleteUser::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        unsigned short uVar3 = packetJ.g2();
        field_32 = (unsigned int)uVar3;
        uint8_t bVar1 = packetJ.g1();
        field_36 = (unsigned int)bVar1;
        if (packetJ.g1() != -1) {
            packetJ.SetPos(packetJ.size() - 1);
            field_40 = packetJ.g8();
        }
    }

    // 0x10025b7a0
    void ClanChannelDelta::DeleteUser::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ, bool arg2,
                                              bool arg3) {
        uint32_t in_register_00000011;

        packetJ.p2<int>(field_32);
        packetJ.p1<shared::LoginProt::ID>(field_36);
        if (((((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) || (field_40 == 18446744073709551615)) {
            packetJ.p1<shared::LoginProt::ID>(255);
        } else {
            packetJ.p8<long long>(field_40);
        }
    }

    // 0x10025b800
    void ClanChannelDelta::DeleteUser::Apply(ClanChannel& clanChannel) {
        clanChannel.DoDeleteUser(field_32);
    }

    // 0x10025b820
    ClanChannelDelta::UpdateUserDetails::UpdateUserDetails(int arg1, signed char arg2, int arg3, long long arg4,
                                                           eastl::string str)
        : ClanChannelDeltaEntry(), field_32(4294967295), field_32(arg1) {
        field_36 = (bool)arg2;
        field_40 = arg3;
        field_48 = arg4;
        field_56 = str;
    }

    // 0x10025b8d0
    void ClanChannelDelta::UpdateUserDetails::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_40[32];

        unsigned short uVar2 = packetJ.g2();
        field_32 = (unsigned int)uVar2;
        bool bVar1 = (bool)packetJ.g1();
        field_36 = bVar1;
        uVar2 = packetJ.g2();
        field_40 = (unsigned int)uVar2;
        long long lVar3 = packetJ.g8();
        field_48 = lVar3;
        local_40->gStringNoConversion((uint8_t)packetJ);
        field_56 = local_40;
    }

    // 0x10025b960
    void ClanChannelDelta::UpdateUserDetails::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ,
                                                     bool arg2, bool arg3) {
        packetJ.p2<int>(field_32);
        packetJ.p1<signed char>(field_36);
        packetJ.p2<int>(field_40);
        packetJ.p8<long long>(field_48);
        packetJ.pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(field_56, false);
    }

    // 0x10025b9c0
    void ClanChannelDelta::UpdateUserDetails::Apply(ClanChannel& clanChannel) {
        shared_ptr<dash3d::GroundDecor>* groundDecor = &clanChannel.field_48[(long)(int)field_32];
        shared_ptr<dash3d::Decor> local_30(groundDecor);
        bool bVar1 = field_36;
        long lVar4 = local_30.operator->();
        *(bool*)(lVar4 + 8) = bVar1;
        unsigned int uVar2 = field_40;
        lVar4 = local_30.operator->();
        *(unsigned int*)(lVar4 + 12) = uVar2;
        long long lVar3 = field_48;
        lVar4 = local_30.operator->();
        *(long long*)(lVar4 + 80) = lVar3;
        DisplayName local_70(field_56);
        lVar4 = local_30.operator->();
        (*((lVar4 + 16))) = local_70;
    }

    // 0x10025ba90
    ClanChannelDelta::UpdateUserDetailsV2::UpdateUserDetailsV2(int arg1, signed char arg2, int arg3, long long arg4,
                                                               eastl::string str, bool arg6)
        : ClanChannelDeltaEntry(), field_32(4294967295), field_32(arg1) {
        field_36 = (bool)arg2;
        field_40 = arg3;
        field_48 = arg4;
        field_56 = str;
        field_88 = arg6;
    }

    // 0x10025bb50
    void ClanChannelDelta::UpdateUserDetailsV2::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_40[32];

        packetJ.g1();
        unsigned short uVar3 = packetJ.g2();
        field_32 = (unsigned int)uVar3;
        bool bVar1 = (bool)packetJ.g1();
        field_36 = bVar1;
        uVar3 = packetJ.g2();
        field_40 = (unsigned int)uVar3;
        long long lVar4 = packetJ.g8();
        field_48 = lVar4;
        local_40->gStringNoConversion((uint8_t)packetJ);
        field_56 = local_40;
        char cVar2 = packetJ.g1();
        field_88 = cVar2 == '\x01';
    }

    // 0x10025bc00
    void ClanChannelDelta::UpdateUserDetailsV2::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ,
                                                       bool arg2, bool arg3) {
        packetJ.p1<shared::LoginProt::ID>(1);
        packetJ.p2<int>(field_32);
        packetJ.p1<signed char>(field_36);
        packetJ.p2<int>(field_40);
        packetJ.p8<long long>(field_48);
        packetJ.pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(field_56, false);
        packetJ.p1<shared::LoginProt::ID>((unsigned int)field_88);
    }

    // 0x10025bc70
    void ClanChannelDelta::UpdateUserDetailsV2::Apply(ClanChannel& clanChannel) {
        shared_ptr<dash3d::GroundDecor>* groundDecor = &clanChannel.field_48[(long)(int)field_32];
        shared_ptr<dash3d::Decor> local_30(groundDecor);
        bool bVar1 = field_36;
        long lVar4 = local_30.operator->();
        *(bool*)(lVar4 + 8) = bVar1;
        unsigned int uVar2 = field_40;
        lVar4 = local_30.operator->();
        *(unsigned int*)(lVar4 + 12) = uVar2;
        long long lVar3 = field_48;
        lVar4 = local_30.operator->();
        *(long long*)(lVar4 + 80) = lVar3;
        DisplayName local_70(field_56);
        lVar4 = local_30.operator->();
        (*((lVar4 + 16))) = local_70;
        bVar1 = field_88;
        lVar4 = local_30.operator->();
        *(bool*)(lVar4 + 88) = bVar1;
    }

    // 0x10025bd50
    ClanChannelDelta::UpdateClanChannelBaseSettings::UpdateClanChannelBaseSettings(eastl::string str, bool arg2,
                                                                                   signed char arg3, signed char arg4)
        : ClanChannelDeltaEntry(), field_32(str), field_64(arg2) {
        field_65 = (bool)arg3;
        field_66 = (bool)arg4;
    }

    // 0x10025bdf0
    void ClanChannelDelta::UpdateClanChannelBaseSettings::Decode(
        PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        char cVar2;
        bool bVar3;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_48[32];

        local_48->gStringNoConversion((uint8_t)packetJ);
        field_32 = local_48;
        long lVar1 = field_32.size();
        if (lVar1 != 0) {
            cVar2 = packetJ.g1();
            field_64 = cVar2 == '\x01';
            bVar3 = (bool)packetJ.g1();
            field_65 = bVar3;
            bVar3 = (bool)packetJ.g1();
            field_66 = bVar3;
        }
    }

    // 0x10025be80
    void ClanChannelDelta::UpdateClanChannelBaseSettings::Encode(
        PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ, bool arg2, bool arg3) {
        eastl::string local_48;

        uint8_t* this_00 = &field_32;
        long lVar1 = this_00->size();
        if (lVar1 == 0) {
            local_48 = eastl::string("");
        } else {
            local_48 = eastl::string(*this_00);
        }
        packetJ.pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(local_48, false);
        lVar1 = this_00->size();
        if (lVar1 != 0) {
            packetJ.p1<shared::LoginProt::ID>((unsigned int)field_64);
            packetJ.p1<signed char>(field_65);
            packetJ.p1<signed char>(field_66);
        }
    }

    // 0x10025bf50
    void ClanChannelDelta::UpdateClanChannelBaseSettings::Apply(ClanChannel& clanChannel) {
        clanChannel.field_88 = &field_32;
        if (field_32.size() != 0) {
            clanChannel.field_120 = field_64;
            clanChannel.field_121 = field_65;
            clanChannel.field_122 = field_66;
        }
    }

    // 0x10025bfa0
    ClanChannelDelta::ClanChannelDelta(ClanChannel& clanChannel)
        : SharedPtrList<ClanChannelDelta::ClanChannelDeltaEntry>(), field_24(18446744073709551615),
          field_16(clanChannel.field_32), field_24(clanChannel.field_80) {}

    // 0x10025bff0
    ClanChannelDelta::ClanChannelDelta(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ)
        : SharedPtrList<ClanChannelDelta::ClanChannelDeltaEntry>(), field_24(18446744073709551615) {
        Decode(packetJ);
    }

    // 0x10025c030
    void ClanChannelDelta::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        Logger* this_00;
        long* plVar3;
        char* str2;
        shared_ptr<worldmap::WorldmapAreaMetadata> local_50;
        ReturnValue local_40;

        uint64_t uVar2 = packetJ.g8();
        field_16 = uVar2;
        uVar2 = packetJ.g8();
        field_24 = uVar2;
        bool cVar1 = packetJ.g1();
        if (cVar1) {
            do {
                local_50 = shared_ptr();
                switch (cVar1) {
                case '\x01':
                    make_shared<ClanChannelDelta::AddUser>(&local_40);
                    local_50.operator=(&local_40);
                    break;
                case '\x02':
                    make_shared<ClanChannelDelta::UpdateUserDetails>(&local_40);
                    local_50.operator=(&local_40);
                    break;
                case '\x03':
                    make_shared<ClanChannelDelta::DeleteUser>(&local_40);
                    local_50.operator=(&local_40);
                    break;
                case '\x04':
                    make_shared<ClanChannelDelta::UpdateClanChannelBaseSettings>(&local_40);
                    local_50.operator=(&local_40);
                    break;
                case '\x05':
                    make_shared<ClanChannelDelta::UpdateUserDetailsV2>(&local_40);
                    local_50.operator=(&local_40);
                    break;
                default:
                    this_00 = logger::default_logger();
                    str2 = "";
                    if (ClanChannel::m_fluttered == '\0') {
                        str2 = "Unrecognised ClanChannelDelta type in decode()";
                    }
                    this_00->Log(false, 8,
                                 "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                 "rs2lib/social/clanchat/ClanChannelDelta.cpp",
                                 304, str2);
                }
                plVar3 = (long*)local_50.operator->();
                (**(void (**)(...))(*plVar3 + 24))(plVar3, packetJ);
                push(local_50);
                cVar1 = packetJ.g1();
            } while (cVar1);
        }
    }

    // 0x10025c260
    void ClanChannelDelta::AddUserToEntryList(long long arg1, eastl::string str, int arg3, signed char arg4,
                                              long long arg5) {
        ReturnValue local_50;
        shared_ptr<RSevenDebugPresetProvider> local_30;

        long long local_40 = arg1;
        long long local_38 = arg5;
        int local_20 = arg3;
        schar local_19 = arg4;
        make_shared<ClanChannelDelta::AddUser, long long&, eastl::string&, int&, signed char&, long long&>(
            &local_50, &local_40, str, &local_20, &local_19, &local_38);
        local_30.shared_ptr<FileRSevenDebugPresetProvider, void>(local_50);
        push(local_30);
    }

    // 0x10025c460
    void ClanChannelDelta::DeleteUserInEntryList(int arg1, int arg2, long long arg3) {
        ReturnValue local_48;
        shared_ptr<RSevenDebugPresetProvider> local_30;

        long long local_38 = arg3;
        int local_20 = arg1;
        int local_1c = arg2;
        make_shared<ClanChannelDelta::DeleteUser, int&, int&, long long&>(&local_48, &local_20, &local_1c, &local_38);
        local_30.shared_ptr<FileRSevenDebugPresetProvider, void>(local_48);
        push(local_30);
    }

    // 0x10025c5a0
    void ClanChannelDelta::UpdateUserDetailsInEntryList(int arg1, signed char arg2, int arg3, long long arg4,
                                                        eastl::string str, bool arg6) {
        uint64_t in_register_00000031;
        uint32_t in_register_0000003c;
        uint64_t in_register_00000089;
        shared_ptr<dash3d::ModelLit> local_50;
        shared_ptr<RSevenDebugPresetProvider> local_38;
        uint8_t local_1a[2];

        uint32_t local_24 = (uint32_t)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg2);
        local_1a[0] = (uint8_t)arg3;
        uint32_t local_20 = (uint32_t)arg4;
        eastl::string* local_40 = str;
        make_shared<ClanChannelDelta::UpdateUserDetailsV2, int&, signed char&, int&, long long&, eastl::string&, bool&>(
            &local_50, (schar*)&local_24, (int*)local_1a, (long long*)&local_20, (eastl::string*)&local_40,
            (bool*)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg6));
        local_38.shared_ptr<FileRSevenDebugPresetProvider, void>(local_50);
        ((SharedPtrList<ClanChannelDelta::ClanChannelDeltaEntry>*)(((uint64_t)in_register_0000003c << 32) |
                                                                   (uint32_t)arg1))
            ->push(local_38);
    }

    // 0x10025c710
    void ClanChannelDelta::UpdateBaseSettingsInEntryList(eastl::string str, bool arg2, signed char arg3,
                                                         signed char arg4) {
        ReturnValue local_40;
        shared_ptr<RSevenDebugPresetProvider> local_30;

        bool local_1b = arg2;
        schar local_1a = arg3;
        schar local_19 = arg4;
        make_shared<ClanChannelDelta::UpdateClanChannelBaseSettings, eastl::string&, bool&, signed char&, signed char&>(
            &local_40, str, &local_1b, &local_1a, &local_19);
        local_30.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
        push(local_30);
    }

    // 0x10025cbb0
    void ClanChannelDelta::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ, bool arg2, bool arg3) {
        PublishingPlatformType publishingPlatformType;
        long* plVar2;

        packetJ.p8<long long>(field_16);
        packetJ.p8<long long>(field_24);
        uint64_t local_40 = begin();
        uint64_t local_38 = end();
        bool cVar1 = local_40 != local_38;
        if (cVar1) {
            do {
                plVar2 = (long*)local_40.HeapBeginPtr();
                publishingPlatformType = (**(void (**)(...))(*plVar2 + 16))(plVar2);
                packetJ.p1<shared::LoginProt::ID>(publishingPlatformType);
                (**(void (**)(...))(*plVar2 + 32))(plVar2, packetJ, arg2, arg3);
                ++local_40;
                cVar1 = local_40 != local_38;
            } while (cVar1);
        }
        packetJ.p1<shared::LoginProt::ID>(0);
    }

    // 0x10025cd20
    void ClanChannelDelta::ApplyToClanChannel(ClanChannel& clanChannel) {
        long* plVar2;
        Logger* this_00;
        char* pcVar3;
        uint64_t local_48[4];

        if ((clanChannel.field_32 != field_16) || (clanChannel.field_80 != field_24)) {
            new (local_48) eastl::string();
            pcVar3 = "";
            if (ClanChannel::m_fluttered == '\0') {
                pcVar3 = "ClanChannelDelta.applyToClanChannel(): Credentials do not match! ";
            }
            local_48->append_sprintf("%s", pcVar3);
            local_48->append_sprintf(" cc.clanHash:%lld", clanChannel.field_32);
            local_48->append_sprintf(" cc.updateNum:%lld", clanChannel.field_80);
            local_48->append_sprintf(" clanHash:%lld", field_16);
            local_48->append_sprintf(" updateNum:%lld", field_24);
            this_00 = logger::default_logger();
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            this_00->Log(false, 3,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/social/"
                         "clanchat/ClanChannelDelta.cpp",
                         338, pcVar3);
            LogAssert("false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/social/"
                      "clanchat/ClanChannelDelta.cpp",
                      339, nullptr);
        }
        local_48[0] = begin();
        uint64_t local_28 = end();
        bool cVar1 = *local_48 != local_28;
        if (cVar1) {
            do {
                plVar2 = (long*)local_48->HeapBeginPtr();
                (**(void (**)(...))(*plVar2 + 40))(plVar2, clanChannel);
                ++*local_48;
                cVar1 = *local_48 != local_28;
            } while (cVar1);
        }
        clanChannel.field_80 = clanChannel.field_80 + 1;
    }

    // 0x100c92b50: ClanChannelDelta::ClanChannelDeltaEntry::~ClanChannelDeltaEntry() has the same machine code as InlineFatalBreak()

} // namespace jag::oldscape::rs2lib::social

namespace jag {
    // 0x10025c300
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelDelta::AddUser>::type
    make_shared<oldscape::rs2lib::social::ClanChannelDelta::AddUser, long long&, eastl::string&, int&, signed char&,
                long long&>(long long& arg1, eastl::string& str, int& arg3, signed char& arg4, long long& arg5) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        AddUser* local_40[2];

        auto arg1_00 = aligned_alloc(120, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelDelta::AddUser>::type result;
        } else {
            local_40[0] =
                placement_new<oldscape::rs2lib::social::ClanChannelDelta::AddUser, long long&, eastl::string&, int&,
                              signed char&, long long&>((void*)((long)arg1_00 + 32), arg1, str, arg3, arg4, arg5);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::AddUser>, int,
                              oldscape::rs2lib::social::ClanChannelDelta::AddUser*&>(arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x10025c4f0
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>::type
    make_shared<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser, int&, int&, long long&>(int& arg1, int& arg2,
                                                                                                long long& arg3) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        DeleteUser* local_40[2];

        auto arg1_00 = aligned_alloc(80, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>::type result;
        } else {
            local_40[0] = placement_new<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser, int&, int&, long long&>(
                (void*)((long)arg1_00 + 32), arg1, arg2, arg3);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>, int,
                              oldscape::rs2lib::social::ClanChannelDelta::DeleteUser*&>(arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x10025c640
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2>::type
    make_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2, int&, signed char&, int&, long long&,
                eastl::string&, bool&>(int& arg1, signed char& arg2, int& arg3, long long& arg4, eastl::string& str,
                                       bool& arg6) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        bool* in_stack_00000008;
        int local_44;
        UpdateUserDetailsV2* local_40[2];

        auto arg1_00 = aligned_alloc(128, 8);
        if (arg1_00 == nullptr) {
            new (arg1) shared_ptr();
        } else {
            local_40[0] = placement_new<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2, int&,
                                        signed char&, int&, long long&, eastl::string&, bool&>(
                (void*)((long)arg1_00 + 32), (int*)arg2, (schar*)arg3, (int*)arg4, (long long*)str,
                (eastl::string*)arg6, in_stack_00000008);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2>, int,
                              oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2*&>(arg1_00, &local_44,
                                                                                                 local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (arg1) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return arg1;
    }

    // 0x10025c7a0
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>::type
    make_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings, eastl::string&, bool&,
                signed char&, signed char&>(eastl::string& str, bool& arg2, signed char& arg3, signed char& arg4) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        UpdateClanChannelBaseSettings* local_40[2];

        auto arg1 = aligned_alloc(104, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>::type
                result;
        } else {
            local_40[0] =
                placement_new<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings, eastl::string&,
                              bool&, signed char&, signed char&>((void*)((long)arg1 + 32), str, arg2, arg3, arg4);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)placement_new<
                ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>, int,
                oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings*&>(arg1, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x10025c860
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelDelta::AddUser>::type
    make_shared<oldscape::rs2lib::social::ClanChannelDelta::AddUser>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        AddUser* local_28[2];

        auto arg1 = aligned_alloc(120, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelDelta::AddUser>::type result;
        } else {
            local_28[0] = placement_new<oldscape::rs2lib::social::ClanChannelDelta::AddUser>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::AddUser>, int,
                              oldscape::rs2lib::social::ClanChannelDelta::AddUser*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x10025c930
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>::type
    make_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        UpdateClanChannelBaseSettings* local_28[2];

        auto arg1 = aligned_alloc(104, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>::type
                result;
        } else {
            local_28[0] = placement_new<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>(
                (void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)placement_new<
                ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>, int,
                oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x10025c9c0
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>::type
    make_shared<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        DeleteUser* local_28[2];

        auto arg1 = aligned_alloc(80, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>::type result;
        } else {
            local_28[0] =
                placement_new<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>, int,
                              oldscape::rs2lib::social::ClanChannelDelta::DeleteUser*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x10025ca50
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails>::type
    make_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        UpdateUserDetails* local_28[2];

        auto arg1 = aligned_alloc(120, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails>::type result;
        } else {
            local_28[0] =
                placement_new<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails>, int,
                              oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails*&>(arg1, &local_2c,
                                                                                               local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x10025cae0
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2>::type
    make_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        UpdateUserDetailsV2* local_28[2];

        auto arg1 = aligned_alloc(128, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2>::type result;
        } else {
            local_28[0] = placement_new<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2>(
                (void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2>, int,
                              oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2*&>(arg1, &local_2c,
                                                                                                 local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
