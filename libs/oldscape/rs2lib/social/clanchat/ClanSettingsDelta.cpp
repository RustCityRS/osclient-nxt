// libs/oldscape/rs2lib/social/clanchat/ClanSettingsDelta.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "ClanSettingsDelta.h"

namespace jag::oldscape::rs2lib::social {
    // 0x1000c46d0: ClanSettingsDelta::DeleteMember::GetID() const has the same machine code as javapal::GameShell::GetClientType()

    // 0x100260a10
    ClanSettingsDelta::AddMemberOldV1::AddMemberOldV1(long long arg1, eastl::string str)
        : ClanSettingsDeltaEntry(), field_32(-1), field_32(arg1), field_40(str) {}

    // 0x100260ad0
    void ClanSettingsDelta::AddMemberOldV1::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        long lVar2;
        long long lVar3;
        Logger* this_00;
        uint64_t uVar4;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_40[32];

        bool cVar1 = packetJ.g1();
        if (cVar1 != -1) {
            lVar2 = packetJ.size();
            packetJ.SetPos(lVar2 - 1);
            lVar3 = packetJ.g8();
            field_32 = lVar3;
        }
        local_40->gStringNoConversion((uint8_t)packetJ);
        field_40 = local_40;
        if ((ClanSettings::m_verbose != '\0') && (ClanSettings::m_fluttered == '\0')) {
            this_00 = logger::default_logger();
            lVar3 = field_32;
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            this_00->Log(false, 5,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/social/"
                         "clanchat/ClanSettingsDelta.cpp",
                         31, "memberhash: %i membername: %s", (int)lVar3, uVar4);
        }
    }

    // 0x100260bb0
    void ClanSettingsDelta::AddMemberOldV1::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ,
                                                   bool arg2, bool arg3) {
        long long lVar1;
        Logger* pLVar2;
        uint64_t uVar4;
        uint64_t in_register_00000011;
        int arg4;
        char* pcVar5;

        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            packetJ.p1<shared::LoginProt::ID>(255);
            if ((ClanSettings::m_verbose == '\0') || (ClanSettings::m_fluttered != '\0'))
                goto LAB_100260c9d;
            pLVar2 = logger::default_logger();
            pcVar5 = "pushed 255";
            arg4 = 55;
        } else {
            if (field_32 == -1) {
                pLVar2 = logger::default_logger();
                pcVar5 = "";
                if (ClanSettings::m_fluttered == '\0') {
                    pcVar5 = "addMember.encode() was asked to storeUserHashes but userhash not present!";
                }
                pLVar2->Log(false, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                            "social/clanchat/ClanSettingsDelta.cpp",
                            41, pcVar5);
            }
            packetJ.p8<long long>(field_32);
            if ((ClanSettings::m_verbose == '\0') || (ClanSettings::m_fluttered != '\0'))
                goto LAB_100260c9d;
            pLVar2 = logger::default_logger();
            pcVar5 = "Pushed userhash";
            arg4 = 47;
        }
        pLVar2->Log(false, 5,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/social/"
                    "clanchat/ClanSettingsDelta.cpp",
                    arg4, pcVar5);
    LAB_100260c9d:
        if (arg3) {
            if (field_40.size() == 0) {
                pLVar2 = logger::default_logger();
                pcVar5 = "";
                if (ClanSettings::m_fluttered == '\0') {
                    pcVar5 = "addMember.encode() was asked to storeDisplayNames but display name not present!";
                }
                pLVar2->Log(false, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                            "social/clanchat/ClanSettingsDelta.cpp",
                            62, pcVar5);
            }
            packetJ.pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(field_40, false);
        } else {
            packetJ.pStringUTF8ToCP1252("", false);
        }
        if (ClanSettings::m_verbose != '\0') {
            pLVar2 = logger::default_logger();
            lVar1 = field_32;
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar2->Log(false, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/social/"
                        "clanchat/ClanSettingsDelta.cpp",
                        72, "memberhash: %i membername: %s", (unsigned long)(unsigned int)lVar1, uVar4);
        }
    }

    // 0x100260d80
    void ClanSettingsDelta::AddMemberOldV1::Apply(ClanSettings& clanSettings) {
        clanSettings.DoAddMember(field_32, field_40, 0);
    }

    // 0x100260da0
    ClanSettingsDelta::AddMember::AddMember(long long arg1, eastl::string str, int arg3)
        : ClanSettingsDeltaEntry(), field_32(-1), field_72(0), field_32(arg1), field_40(str), field_72(arg3) {}

    // 0x100260e40
    void ClanSettingsDelta::AddMember::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        long lVar3;
        long long lVar4;
        Logger* this_00;
        uint64_t uVar5;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_48[32];

        bool cVar1 = packetJ.g1();
        if (cVar1 != -1) {
            lVar3 = packetJ.size();
            packetJ.SetPos(lVar3 - 1);
            lVar4 = packetJ.g8();
            field_32 = lVar4;
        }
        local_48->gStringNoConversion((uint8_t)packetJ);
        field_40 = local_48;
        unsigned short uVar2 = packetJ.g2();
        field_72 = (unsigned int)uVar2;
        if ((ClanSettings::m_verbose != '\0') && (ClanSettings::m_fluttered == '\0')) {
            this_00 = logger::default_logger();
            lVar4 = field_32;
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            this_00->Log(false, 5,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/social/"
                         "clanchat/ClanSettingsDelta.cpp",
                         104, "memberhash: %i membername: %s", (int)lVar4, uVar5);
        }
    }

    // 0x100260f30
    void ClanSettingsDelta::AddMember::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ, bool arg2,
                                              bool arg3) {
        long long lVar1;
        Logger* pLVar2;
        uint64_t uVar4;
        uint64_t in_register_00000011;
        int arg4;
        char* pcVar5;

        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            packetJ.p1<shared::LoginProt::ID>(255);
            if ((ClanSettings::m_verbose == '\0') || (ClanSettings::m_fluttered != '\0'))
                goto LAB_10026101a;
            pLVar2 = logger::default_logger();
            pcVar5 = "pushed 255";
            arg4 = 127;
        } else {
            if (field_32 == -1) {
                pLVar2 = logger::default_logger();
                pcVar5 = "";
                if (ClanSettings::m_fluttered == '\0') {
                    pcVar5 = "addMember.encode() was asked to storeUserHashes but userhash not present!";
                }
                pLVar2->Log(false, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                            "social/clanchat/ClanSettingsDelta.cpp",
                            114, pcVar5);
            }
            packetJ.p8<long long>(field_32);
            if ((ClanSettings::m_verbose == '\0') || (ClanSettings::m_fluttered != '\0'))
                goto LAB_10026101a;
            pLVar2 = logger::default_logger();
            pcVar5 = "Pushed userhash";
            arg4 = 119;
        }
        pLVar2->Log(false, 5,
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/social/"
                    "clanchat/ClanSettingsDelta.cpp",
                    arg4, pcVar5);
    LAB_10026101a:
        if (arg3) {
            if (field_40.size() == 0) {
                pLVar2 = logger::default_logger();
                pcVar5 = "";
                if (ClanSettings::m_fluttered == '\0') {
                    pcVar5 = "addMember.encode() was asked to storeDisplayNames but display name not present!";
                }
                pLVar2->Log(false, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                            "social/clanchat/ClanSettingsDelta.cpp",
                            134, pcVar5);
            }
            packetJ.pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(field_40, false);
        } else {
            packetJ.pStringUTF8ToCP1252("", false);
        }
        packetJ.p2<int>(field_72);
        if ((ClanSettings::m_verbose != '\0') && (ClanSettings::m_fluttered == '\0')) {
            pLVar2 = logger::default_logger();
            lVar1 = field_32;
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            pLVar2->Log(false, 5,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/social/"
                        "clanchat/ClanSettingsDelta.cpp",
                        145, "memberhash: %i membername: %s", (unsigned long)(unsigned int)lVar1, uVar4);
        }
    }

    // 0x100261100
    void ClanSettingsDelta::AddMember::Apply(ClanSettings& clanSettings) {
        clanSettings.DoAddMember(field_32, field_40, field_72);
    }

    // 0x100261120
    ClanSettingsDelta::DeleteMember::DeleteMember(int arg1) : ClanSettingsDeltaEntry(), field_32(arg1) {}

    // 0x100261160
    void ClanSettingsDelta::DeleteMember::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        unsigned short uVar1 = packetJ.g2();
        field_32 = (unsigned int)uVar1;
    }

    // 0x100261180
    void ClanSettingsDelta::DeleteMember::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ,
                                                 bool arg2, bool arg3) {
        packetJ.p2<int>(field_32);
    }

    // 0x1002611a0
    void ClanSettingsDelta::DeleteMember::Apply(ClanSettings& clanSettings) {
        clanSettings.DoDeleteMember(field_32);
    }

    // 0x1002611c0
    ClanSettingsDelta::SetMemberRank::SetMemberRank(int arg1, signed char arg2)
        : ClanSettingsDeltaEntry(), field_32(arg1) {
        field_36 = (bool)arg2;
    }

    // 0x100261210
    void ClanSettingsDelta::SetMemberRank::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        unsigned short uVar2 = packetJ.g2();
        field_32 = (unsigned int)uVar2;
        field_36 = (bool)packetJ.g1();
    }

    // 0x100261240
    void ClanSettingsDelta::SetMemberRank::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ,
                                                  bool arg2, bool arg3) {
        packetJ.p2<int>(field_32);
        packetJ.p1<signed char>(field_36);
    }

    // 0x100261270
    void ClanSettingsDelta::SetMemberRank::Apply(ClanSettings& clanSettings) {
        clanSettings.SetMemberRankBySlot(field_32, field_36);
    }

    // 0x100261290
    ClanSettingsDelta::SetOwner::SetOwner(int arg1) : ClanSettingsDeltaEntry(), field_32(arg1) {}

    // 0x1002612d0
    void ClanSettingsDelta::SetOwner::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        unsigned short uVar1 = packetJ.g2();
        field_32 = (unsigned int)uVar1;
    }

    // 0x1002612f0
    void ClanSettingsDelta::SetOwner::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ, bool arg2,
                                             bool arg3) {
        packetJ.p2<int>(field_32);
    }

    // 0x100261310
    void ClanSettingsDelta::SetOwner::Apply(ClanSettings& clanSettings) {
        clanSettings.SetOwnerBySlot(field_32);
    }

    // 0x100261330
    ClanSettingsDelta::SetMemberExtraInfo::SetMemberExtraInfo(int arg1, int arg2, unsigned int arg3, unsigned int arg4)
        : ClanSettingsDeltaEntry(), field_32(arg1), field_36(arg2), field_40(arg3), field_44(arg4) {}

    // 0x100261390
    void ClanSettingsDelta::SetMemberExtraInfo::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        unsigned short uVar2 = packetJ.g2();
        field_32 = (unsigned int)uVar2;
        field_36 = packetJ.g4();
        uint8_t bVar1 = packetJ.g1();
        field_40 = (unsigned int)bVar1;
        bVar1 = packetJ.g1();
        field_44 = (unsigned int)bVar1;
    }

    // 0x1002613e0
    void ClanSettingsDelta::SetMemberExtraInfo::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ,
                                                       bool arg2, bool arg3) {
        packetJ.p2<int>(field_32);
        packetJ.p4<int>((unsigned long)field_36);
        packetJ.p1<shared::LoginProt::ID>(field_40);
        packetJ.p1<shared::LoginProt::ID>(field_44);
    }

    // 0x100261420
    void ClanSettingsDelta::SetMemberExtraInfo::Apply(ClanSettings& clanSettings) {
        clanSettings.SetMemberExtraInfoBySlot(field_32, field_36, field_40, field_44);
    }

    // 0x100261440
    ClanSettingsDelta::SetMemberMuted::SetMemberMuted(int arg1, bool arg2)
        : ClanSettingsDeltaEntry(), field_32(arg1), field_36(arg2) {}

    // 0x100261490
    void ClanSettingsDelta::SetMemberMuted::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        unsigned short uVar2 = packetJ.g2();
        field_32 = (unsigned int)uVar2;
        field_36 = packetJ.g1() == '\x01';
    }

    // 0x1002614c0
    void ClanSettingsDelta::SetMemberMuted::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ,
                                                   bool arg2, bool arg3) {
        packetJ.p2<int>(field_32);
        packetJ.p1<shared::LoginProt::ID>((unsigned int)field_36);
    }

    // 0x1002614f0
    void ClanSettingsDelta::SetMemberMuted::Apply(ClanSettings& clanSettings) {
        clanSettings.SetMemberMutedBySlot(field_32, field_36);
    }

    // 0x100261510
    ClanSettingsDelta::AddBanned::AddBanned(long long arg1, eastl::string str)
        : ClanSettingsDeltaEntry(), field_32(-1), field_32(arg1), field_40(str) {}

    // 0x100261590
    void ClanSettingsDelta::AddBanned::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        long lVar1;
        long long lVar2;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_40[32];

        bool cVar3 = packetJ.g1();
        if (cVar3 != -1) {
            lVar1 = packetJ.size();
            packetJ.SetPos(lVar1 - 1);
            lVar2 = packetJ.g8();
            field_32 = lVar2;
        }
        local_40->gStringNoConversion((uint8_t)packetJ);
        field_40 = local_40;
    }

    // 0x100261620
    void ClanSettingsDelta::AddBanned::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ, bool arg2,
                                              bool arg3) {
        Logger* pLVar1;
        uint64_t in_register_00000011;

        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            packetJ.p1<shared::LoginProt::ID>(255);
        } else {
            if (field_32 == -1) {
                pLVar1 = logger::default_logger();
                pLVar1->Log(false, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                            "social/clanchat/ClanSettingsDelta.cpp",
                            295, "addBanned.encode() was asked to storeUserHashes but userhash not present!");
            }
            packetJ.p8<long long>(field_32);
        }
        if (arg3) {
            if (field_40.size() == 0) {
                pLVar1 = logger::default_logger();
                pLVar1->Log(false, 8,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                            "social/clanchat/ClanSettingsDelta.cpp",
                            308, "addBanned.encode() was asked to storeDisplayNames but display name not present!");
            }
            packetJ.pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(field_40, false);
        } else {
            packetJ.pStringUTF8ToCP1252("", false);
        }
    }

    // 0x100261700
    void ClanSettingsDelta::AddBanned::Apply(ClanSettings& clanSettings) {
        clanSettings.DoAddBanned(field_32, field_40);
    }

    // 0x100261720
    ClanSettingsDelta::DeleteBanned::DeleteBanned(int arg1) : ClanSettingsDeltaEntry(), field_32(arg1) {}

    // 0x100261760
    void ClanSettingsDelta::DeleteBanned::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        unsigned short uVar1 = packetJ.g2();
        field_32 = (unsigned int)uVar1;
    }

    // 0x100261780
    void ClanSettingsDelta::DeleteBanned::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ,
                                                 bool arg2, bool arg3) {
        packetJ.p2<int>(field_32);
    }

    // 0x1002617a0
    void ClanSettingsDelta::DeleteBanned::Apply(ClanSettings& clanSettings) {
        clanSettings.DoDeleteBanned(field_32);
    }

    // 0x1002617c0
    ClanSettingsDelta::SetClanName::SetClanName(eastl::string str, int arg2)
        : ClanSettingsDeltaEntry(), field_64(0), field_32(str), field_64(arg2) {}

    // 0x100261840
    void ClanSettingsDelta::SetClanName::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_40[32];

        local_40->gStringNoConversion((uint8_t)packetJ);
        field_32 = local_40;
        unsigned int uVar1 = packetJ.g4();
        field_64 = uVar1;
    }

    // 0x1002618b0
    void ClanSettingsDelta::SetClanName::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ, bool arg2,
                                                bool arg3) {
        packetJ.pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(field_32, false);
        packetJ.p4<int>((unsigned long)field_64);
    }

    // 0x1002618e0
    void ClanSettingsDelta::SetClanName::Apply(ClanSettings& clanSettings) {
        clanSettings.field_16 = &field_32;
        clanSettings.field_52 = field_64;
    }

    // 0x100261910
    ClanSettingsDelta::UpdateClanSettingsBaseSettings::UpdateClanSettingsBaseSettings(ClanSettings& clanSettings)
        : ClanSettingsDeltaEntry(), field_32(false), field_33(false), field_34(false), field_35(false), field_36(false),
          field_32(clanSettings.field_56), field_33(clanSettings.field_57), field_34(clanSettings.field_58),
          field_35(clanSettings.field_59), field_36(clanSettings.field_60) {}

    // 0x100261970
    void ClanSettingsDelta::UpdateClanSettingsBaseSettings::Decode(
        PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        field_32 = packetJ.g1() == '\x01';
        bool bVar2 = (bool)packetJ.g1();
        field_33 = bVar2;
        bVar2 = (bool)packetJ.g1();
        field_34 = bVar2;
        bVar2 = (bool)packetJ.g1();
        field_35 = bVar2;
        bVar2 = (bool)packetJ.g1();
        field_36 = bVar2;
    }

    // 0x1002619d0
    void ClanSettingsDelta::UpdateClanSettingsBaseSettings::Encode(
        PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ, bool arg2, bool arg3) {
        packetJ.p1<shared::LoginProt::ID>((unsigned int)field_32);
        packetJ.p1<signed char>(field_33);
        packetJ.p1<signed char>(field_34);
        packetJ.p1<signed char>(field_35);
        packetJ.p1<signed char>(field_36);
    }

    // 0x100261a20
    void ClanSettingsDelta::UpdateClanSettingsBaseSettings::Apply(ClanSettings& clanSettings) {
        clanSettings.field_56 = field_32;
        clanSettings.field_57 = field_33;
        clanSettings.field_58 = field_34;
        clanSettings.field_59 = field_35;
        clanSettings.field_60 = field_36;
    }

    // 0x100261a50
    ClanSettingsDelta::SetExtraSettingInt::SetExtraSettingInt(int arg1, int arg2)
        : ClanSettingsDeltaEntry(), field_32(arg1), field_36(arg2) {}

    // 0x100261aa0
    void ClanSettingsDelta::SetExtraSettingInt::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        unsigned int uVar1 = packetJ.g4();
        field_32 = uVar1;
        uVar1 = packetJ.g4();
        field_36 = uVar1;
    }

    // 0x100261ad0
    void ClanSettingsDelta::SetExtraSettingInt::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ,
                                                       bool arg2, bool arg3) {
        packetJ.p4<int>((unsigned long)field_32);
        packetJ.p4<int>((unsigned long)field_36);
    }

    // 0x100261b00
    void ClanSettingsDelta::SetExtraSettingInt::Apply(ClanSettings& clanSettings) {
        clanSettings.SetExtraSettingInt(field_32, field_36);
    }

    // 0x100261b20
    ClanSettingsDelta::SetExtraSettingIntVarbit::SetExtraSettingIntVarbit(int arg1, int arg2, unsigned int arg3,
                                                                          unsigned int arg4)
        : ClanSettingsDeltaEntry(), field_32(0), field_36(0), field_40(0), field_44(0), field_32(arg1), field_44(arg2),
          field_36(arg3), field_40(arg4) {}

    // 0x100261b90
    void
    ClanSettingsDelta::SetExtraSettingIntVarbit::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        unsigned int uVar2 = packetJ.g4();
        field_32 = uVar2;
        uVar2 = packetJ.g4();
        field_44 = uVar2;
        uint8_t bVar1 = packetJ.g1();
        field_36 = (unsigned int)bVar1;
        bVar1 = packetJ.g1();
        field_40 = (unsigned int)bVar1;
    }

    // 0x100261be0
    void
    ClanSettingsDelta::SetExtraSettingIntVarbit::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ,
                                                        bool arg2, bool arg3) {
        packetJ.p4<int>((unsigned long)field_32);
        packetJ.p4<int>((unsigned long)field_44);
        packetJ.p1<shared::LoginProt::ID>(field_36);
        packetJ.p1<shared::LoginProt::ID>(field_40);
    }

    // 0x100261c20
    void ClanSettingsDelta::SetExtraSettingIntVarbit::Apply(ClanSettings& clanSettings) {
        clanSettings.SetExtraSettingIntVarbit(field_32, field_44, field_36, field_40);
    }

    // 0x100261c40
    ClanSettingsDelta::SetExtraSettingLong::SetExtraSettingLong(int arg1, long long arg2)
        : ClanSettingsDeltaEntry(), field_32(arg1), field_40(arg2) {}

    // 0x100261c90
    void ClanSettingsDelta::SetExtraSettingLong::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        field_32 = packetJ.g4();
        field_40 = packetJ.g8();
    }

    // 0x100261cc0
    void ClanSettingsDelta::SetExtraSettingLong::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ,
                                                        bool arg2, bool arg3) {
        packetJ.p4<int>((unsigned long)field_32);
        packetJ.p8<long long>(field_40);
    }

    // 0x100261cf0
    void ClanSettingsDelta::SetExtraSettingLong::Apply(ClanSettings& clanSettings) {
        clanSettings.SetExtraSettingLong(field_32, field_40);
    }

    // 0x100261d10
    ClanSettingsDelta::SetExtraSettingString::SetExtraSettingString(int arg1, eastl::string str)
        : ClanSettingsDeltaEntry(), field_32(0), field_32(arg1), field_40(str) {}

    // 0x100261d90
    void
    ClanSettingsDelta::SetExtraSettingString::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_40[32];

        unsigned int uVar1 = packetJ.g4();
        field_32 = uVar1;
        local_40->gStringNoConversion((uint8_t)packetJ);
        field_40 = local_40;
    }

    // 0x100261e00
    void ClanSettingsDelta::SetExtraSettingString::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ,
                                                          bool arg2, bool arg3) {
        packetJ.p4<int>((unsigned long)field_32);
        packetJ.pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(field_40, false);
    }

    // 0x100261e30
    void ClanSettingsDelta::SetExtraSettingString::Apply(ClanSettings& clanSettings) {
        unsigned int arg1 = field_32;
        eastl::string local_40(field_40);
        clanSettings.SetExtraSettingString(arg1, &local_40);
    }

    // 0x100261e90
    ClanSettingsDelta::ClanSettingsDelta(ClanSettings& clanSettings)
        : SharedPtrList<ClanSettingsDelta::ClanSettingsDeltaEntry>(), field_24(4294967295),
          field_16(clanSettings.field_0), field_24(clanSettings.field_8) {}

    // 0x100261ee0
    ClanSettingsDelta::ClanSettingsDelta(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ)
        : SharedPtrList<ClanSettingsDelta::ClanSettingsDeltaEntry>(), field_24(4294967295) {
        Decode(packetJ);
    }

    // 0x100261f20
    void ClanSettingsDelta::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        Logger* pLVar4;
        long* plVar5;
        char* str2;
        shared_ptr<worldmap::WorldmapAreaMetadata> local_50;
        ReturnValue local_40;

        field_16 = packetJ.g8();
        field_24 = packetJ.g4();
        uint8_t bVar1 = packetJ.g1();
        if (bVar1 != 0) {
            do {
                if ((ClanSettings::m_verbose != '\0') && (ClanSettings::m_fluttered == '\0')) {
                    pLVar4 = logger::default_logger();
                    pLVar4->Log(false, 5,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "social/clanchat/ClanSettingsDelta.cpp",
                                606, "t:%i", (unsigned int)bVar1);
                }
                local_50 = shared_ptr();
                switch (bVar1) {
                case 1:
                    make_shared<ClanSettingsDelta::AddMemberOldV1>(&local_40);
                    local_50.operator=(&local_40);
                    break;
                case 2:
                    make_shared<ClanSettingsDelta::SetMemberRank>(&local_40);
                    local_50.operator=(&local_40);
                    break;
                case 3:
                    make_shared<ClanSettingsDelta::AddBanned>(&local_40);
                    local_50.operator=(&local_40);
                    break;
                case 4:
                    make_shared<ClanSettingsDelta::UpdateClanSettingsBaseSettings>(&local_40);
                    local_50.operator=(&local_40);
                    break;
                case 5:
                    make_shared<ClanSettingsDelta::DeleteMember>(&local_40);
                    local_50.operator=(&local_40);
                    break;
                case 6:
                    make_shared<ClanSettingsDelta::DeleteBanned>(&local_40);
                    local_50.operator=(&local_40);
                    break;
                case 7:
                    make_shared<ClanSettingsDelta::SetMemberExtraInfo>(&local_40);
                    local_50.operator=(&local_40);
                    break;
                case 8:
                    make_shared<ClanSettingsDelta::SetExtraSettingInt>(&local_40);
                    local_50.operator=(&local_40);
                    break;
                case 9:
                    make_shared<ClanSettingsDelta::SetExtraSettingLong>(&local_40);
                    local_50.operator=(&local_40);
                    break;
                case 10:
                    make_shared<ClanSettingsDelta::SetExtraSettingString>(&local_40);
                    local_50.operator=(&local_40);
                    break;
                case 11:
                    make_shared<ClanSettingsDelta::SetExtraSettingIntVarbit>(&local_40);
                    local_50.operator=(&local_40);
                    break;
                case 12:
                    make_shared<ClanSettingsDelta::SetClanName>(&local_40);
                    local_50.operator=(&local_40);
                    break;
                case 13:
                    make_shared<ClanSettingsDelta::AddMember>(&local_40);
                    local_50.operator=(&local_40);
                    break;
                case 14:
                    make_shared<ClanSettingsDelta::SetMemberMuted>(&local_40);
                    local_50.operator=(&local_40);
                    break;
                case 15:
                    make_shared<ClanSettingsDelta::SetOwner>(&local_40);
                    local_50.operator=(&local_40);
                    break;
                default:
                    pLVar4 = logger::default_logger();
                    str2 = "";
                    if (ClanSettings::m_fluttered == '\0') {
                        str2 = "Unrecognised ClanSettingsDelta type in decode()";
                    }
                    pLVar4->Log(false, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "social/clanchat/ClanSettingsDelta.cpp",
                                673, str2);
                }
                plVar5 = (long*)local_50.operator->();
                (**(void (**)(...))(*plVar5 + 24))(plVar5, packetJ);
                push_back(local_50);
                bVar1 = packetJ.g1();
            } while (bVar1 != 0);
        }
    }

    // 0x1002623d0
    void ClanSettingsDelta::AddMemberToEntryList(long long arg1, eastl::string str, int arg3) {
        ReturnValue local_48;
        shared_ptr<RSevenDebugPresetProvider> local_30;

        long long local_38 = arg1;
        int local_1c = arg3;
        make_shared<ClanSettingsDelta::AddMember, long long&, eastl::string&, int&>(&local_48, &local_38, str,
                                                                                    &local_1c);
        local_30.shared_ptr<FileRSevenDebugPresetProvider, void>(local_48);
        push(local_30);
    }

    // 0x1002625a0
    void ClanSettingsDelta::DeleteMemberToEntryList(int arg1) {
        ReturnValue local_40;
        shared_ptr<RSevenDebugPresetProvider> local_30;

        int local_1c = arg1;
        make_shared<ClanSettingsDelta::DeleteMember, int&>(&local_40, &local_1c);
        local_30.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
        push(local_30);
    }

    // 0x1002626c0
    void ClanSettingsDelta::SetMemberRankToEntryList(int arg1, signed char arg2) {
        ReturnValue local_40;
        shared_ptr<RSevenDebugPresetProvider> local_30;

        int local_20 = arg1;
        schar local_19 = arg2;
        make_shared<ClanSettingsDelta::SetMemberRank, int&, signed char&>(&local_40, &local_20, &local_19);
        local_30.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
        push(local_30);
    }

    // 0x1002627f0
    void ClanSettingsDelta::SetOwnerToEntryList(int arg1) {
        ReturnValue local_40;
        shared_ptr<RSevenDebugPresetProvider> local_30;

        int local_1c = arg1;
        make_shared<ClanSettingsDelta::SetOwner, int&>(&local_40, &local_1c);
        local_30.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
        push(local_30);
    }

    // 0x100262910
    void ClanSettingsDelta::SetMemberExtraInfoToEntryList(int arg1, int arg2, unsigned int arg3, unsigned int arg4) {
        ReturnValue local_48;
        shared_ptr<RSevenDebugPresetProvider> local_38;

        int local_28 = arg1;
        int local_24 = arg2;
        unsigned int local_20 = arg3;
        unsigned int local_1c = arg4;
        make_shared<ClanSettingsDelta::SetMemberExtraInfo, int&, int&, unsigned int&, unsigned int&>(
            &local_48, &local_28, &local_24, &local_20, &local_1c);
        local_38.shared_ptr<FileRSevenDebugPresetProvider, void>(local_48);
        push(local_38);
    }

    // 0x100262a60
    void ClanSettingsDelta::SetMemberMutedToEntryList(int arg1, bool arg2) {
        ReturnValue local_40;
        shared_ptr<RSevenDebugPresetProvider> local_30;

        int local_20 = arg1;
        bool local_19 = arg2;
        make_shared<ClanSettingsDelta::SetMemberMuted, int&, bool&>(&local_40, &local_20, &local_19);
        local_30.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
        push(local_30);
    }

    // 0x100262b90
    void ClanSettingsDelta::AddBannedToEntryList(long long arg1, eastl::string str) {
        ReturnValue local_40;
        shared_ptr<RSevenDebugPresetProvider> local_28;

        long long local_30 = arg1;
        make_shared<ClanSettingsDelta::AddBanned, long long&, eastl::string&>(&local_40, &local_30, str);
        local_28.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
        push(local_28);
    }

    // 0x100262cc0
    void ClanSettingsDelta::DeleteBannedToEntryList(int arg1) {
        ReturnValue local_40;
        shared_ptr<RSevenDebugPresetProvider> local_30;

        int local_1c = arg1;
        make_shared<ClanSettingsDelta::DeleteBanned, int&>(&local_40, &local_1c);
        local_30.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
        push(local_30);
    }

    // 0x100262de0
    void ClanSettingsDelta::SetClanNameToEntryList(eastl::string str, int arg2) {
        ReturnValue local_40;
        shared_ptr<RSevenDebugPresetProvider> local_30;

        int local_1c = arg2;
        make_shared<ClanSettingsDelta::SetClanName, eastl::string&, int&>(&local_40, str, &local_1c);
        local_30.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
        push(local_30);
    }

    // 0x100262f10
    void ClanSettingsDelta::UpdateBaseSettingsToEntryList(ClanSettings& clanSettings) {
        ReturnValue local_38;
        shared_ptr<RSevenDebugPresetProvider> local_28;

        make_shared<ClanSettingsDelta::UpdateClanSettingsBaseSettings, ClanSettings&>(&local_38, clanSettings);
        local_28.shared_ptr<FileRSevenDebugPresetProvider, void>(local_38);
        push(local_28);
    }

    // 0x100263020
    void ClanSettingsDelta::SetExtraSettingIntToEntryList(int arg1, int arg2) {
        ReturnValue local_40;
        shared_ptr<RSevenDebugPresetProvider> local_30;

        int local_20 = arg1;
        int local_1c = arg2;
        make_shared<ClanSettingsDelta::SetExtraSettingInt, int&, int&>(&local_40, &local_20, &local_1c);
        local_30.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
        push(local_30);
    }

    // 0x100263150
    void ClanSettingsDelta::SetExtraSettingIntVarbitToEntryList(int arg1, int arg2, unsigned int arg3,
                                                                unsigned int arg4) {
        ReturnValue local_48;
        shared_ptr<RSevenDebugPresetProvider> local_38;

        int local_28 = arg1;
        int local_24 = arg2;
        unsigned int local_20 = arg3;
        unsigned int local_1c = arg4;
        make_shared<ClanSettingsDelta::SetExtraSettingIntVarbit, int&, int&, unsigned int&, unsigned int&>(
            &local_48, &local_28, &local_24, &local_20, &local_1c);
        local_38.shared_ptr<FileRSevenDebugPresetProvider, void>(local_48);
        push(local_38);
    }

    // 0x1002632a0
    void ClanSettingsDelta::SetExtraSettingLongToEntryList(int arg1, long long arg2) {
        ReturnValue local_48;
        shared_ptr<RSevenDebugPresetProvider> local_30;

        long long local_38 = arg2;
        int local_1c = arg1;
        make_shared<ClanSettingsDelta::SetExtraSettingLong, int&, long long&>(&local_48, &local_1c, &local_38);
        local_30.shared_ptr<FileRSevenDebugPresetProvider, void>(local_48);
        push(local_30);
    }

    // 0x1002633d0
    void ClanSettingsDelta::SetExtraSettingStringToEntryList(int arg1, eastl::string str) {
        ReturnValue local_40;
        shared_ptr<RSevenDebugPresetProvider> local_30;

        int local_1c = arg1;
        make_shared<ClanSettingsDelta::SetExtraSettingString, int&, eastl::string&>(&local_40, &local_1c, str);
        local_30.shared_ptr<FileRSevenDebugPresetProvider, void>(local_40);
        push(local_30);
    }

    // 0x100263e00
    void ClanSettingsDelta::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ, bool arg2, bool arg3) {
        bool arg1;
        long* plVar2;
        uint64_t in_register_00000011;

        if ((int)(((uint64_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            packetJ.p8<int>(0);
        } else {
            packetJ.p8<long long>(field_16);
        }
        packetJ.p4<int>((unsigned long)field_24);
        uint64_t local_40 = begin();
        uint64_t local_38 = end();
        bool cVar1 = local_40 != local_38;
        if (cVar1) {
            do {
                plVar2 = (long*)local_40.HeapBeginPtr();
                arg1 = (bool)(**(void (**)(...))(*plVar2 + 16))(plVar2);
                packetJ.p1<signed char>(arg1);
                (**(void (**)(...))(*plVar2 + 32))(plVar2, packetJ, arg2, arg3);
                ++local_40;
                cVar1 = local_40 != local_38;
            } while (cVar1);
        }
        packetJ.p1<shared::LoginProt::ID>(0);
    }

    // 0x100263f30
    void ClanSettingsDelta::ApplyToClanSettings(ClanSettings& clanSettings) {
        unsigned int uVar1;
        Logger* this_00;
        uint64_t uVar3;
        uint64_t uVar4;
        long* plVar5;
        ReturnValue local_70;
        ReturnValue local_50;

        if ((clanSettings.field_0 != field_16) || (clanSettings.field_8 != field_24)) {
            if (ClanSettings::m_fluttered == '\0') {
                this_00 = logger::default_logger();
                local_70 = core::stringtools::general::UserhashTools::ToRawUsername(clanSettings.field_0);
                uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar1 = clanSettings.field_8;
                local_50 = core::stringtools::general::UserhashTools::ToRawUsername(field_16);
                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                this_00->Log(false, 5,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                             "social/clanchat/ClanSettingsDelta.cpp",
                             706,
                             "ClanSettingsDelta.applyToClanSettings(): Credentials do not match! Settings.owner: %s "
                             "updateNum: %i delta.owner: %s updateNum: %i",
                             uVar3, uVar1, uVar4, field_24);
            }
            if ((clanSettings.field_0 == field_16) && (clanSettings.field_8 == field_24)) {
                LogAssert("cr.m_clanHash != m_clanHash || cr.m_updateNum != m_updateNum",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                          "social/clanchat/ClanSettingsDelta.cpp",
                          708, nullptr);
            }
        }
        local_70[0] = (ReturnValue)begin();
        local_50[0] = (ReturnValue)end();
        bool cVar2 = local_70 != local_50;
        if (cVar2) {
            do {
                plVar5 = (long*)local_70.HeapBeginPtr();
                (**(void (**)(...))(*plVar5 + 40))(plVar5, clanSettings);
                ++local_70;
                cVar2 = local_70 != local_50;
            } while (cVar2);
        }
        clanSettings.field_8 = clanSettings.field_8 + 1;
    }

    // 0x1002640d0
    auto ClanSettingsDelta::GetUserHashes() {
        int iVar2;
        long* plVar3;
        uint64_t local_30;

        auto result(32, local_30);
        local_30 = begin();
        uint64_t local_38 = end();
        bool cVar1 = local_30 != local_38;
        if (cVar1) {
            do {
                plVar3 = (long*)local_30.HeapBeginPtr();
                iVar2 = (**(void (**)(...))(*plVar3 + 16))(plVar3);
                if (iVar2 == 1) {
                    result.push_back(*(plVar3 + 4));
                } else if (iVar2 == 3) {
                    result.push_back(*(plVar3 + 4));
                } else if (iVar2 == 13) {
                    result.push_back(*(plVar3 + 4));
                }
                ++local_30;
                cVar1 = local_30 != local_38;
            } while (cVar1);
        }
        return result;
    }

    // 0x100264240
    void ClanSettingsDelta::ApplyDisplayNames(Array<eastl::string>& strs) {
        int iVar2;
        eastl::string* str;
        long* plVar3;
        unsigned long arg1;
        int iVar4;

        uint64_t local_40 = begin();
        uint64_t local_38 = end();
        bool cVar1 = local_40 != local_38;
        if (cVar1) {
            iVar4 = 0;
            do {
                plVar3 = (long*)local_40.HeapBeginPtr();
                iVar2 = (**(void (**)(...))(*plVar3 + 16))(plVar3);
                if (((iVar2 == 13) || (iVar2 = (**(void (**)(...))(*plVar3 + 16))(plVar3), iVar2 == 1)) ||
                    (iVar2 = (**(void (**)(...))(*plVar3 + 16))(plVar3), iVar2 == 3)) {
                    arg1 = (unsigned long)iVar4;
                    iVar4 = iVar4 + 1;
                    str = &strs[arg1];
                    (*((plVar3 + 5))) = str;
                }
                ++local_40;
                cVar1 = local_40 != local_38;
            } while (cVar1);
        }
    }

    // 0x100269960: ClanSettingsDelta::AddMemberOldV1::GetID() const has the same machine code as ClanChannelDelta::AddUser::GetID() const

    // 0x1002699a0: ClanSettingsDelta::AddBanned::GetID() const has the same machine code as ClanChannelDelta::DeleteUser::GetID() const

    // 0x1002699e0: ClanSettingsDelta::SetMemberRank::GetID() const has the same machine code as ClanChannelDelta::UpdateUserDetails::GetID() const

    // 0x100269a50: ClanSettingsDelta::UpdateClanSettingsBaseSettings::GetID() const has the same machine code as ClanChannelDelta::UpdateClanChannelBaseSettings::GetID() const

    // 0x10026a060: ClanSettingsDelta::DeleteBanned::~DeleteBanned() has the same machine code as ClanSettingsDelta::DeleteMember::~DeleteMember()

    // 0x10026a060: ClanSettingsDelta::SetMemberRank::~SetMemberRank() has the same machine code as ClanSettingsDelta::DeleteMember::~DeleteMember()

    // 0x10026a060: ClanSettingsDelta::SetMemberMuted::~SetMemberMuted() has the same machine code as ClanSettingsDelta::DeleteMember::~DeleteMember()

    // 0x10026a060: ClanSettingsDelta::SetExtraSettingInt::~SetExtraSettingInt() has the same machine code as ClanSettingsDelta::DeleteMember::~DeleteMember()

    // 0x10026a060: ClanSettingsDelta::SetMemberExtraInfo::~SetMemberExtraInfo() has the same machine code as ClanSettingsDelta::DeleteMember::~DeleteMember()

    // 0x10026a060: ClanSettingsDelta::SetExtraSettingLong::~SetExtraSettingLong() has the same machine code as ClanSettingsDelta::DeleteMember::~DeleteMember()

    // 0x10026a060: ClanSettingsDelta::SetExtraSettingIntVarbit::~SetExtraSettingIntVarbit() has the same machine code as ClanSettingsDelta::DeleteMember::~DeleteMember()

    // 0x10026a060: ClanSettingsDelta::UpdateClanSettingsBaseSettings::~UpdateClanSettingsBaseSettings() has the same machine code as ClanSettingsDelta::DeleteMember::~DeleteMember()

    // 0x10026a060: ClanSettingsDelta::SetOwner::~SetOwner() has the same machine code as ClanSettingsDelta::DeleteMember::~DeleteMember()

    // 0x100c92b50: ClanSettingsDelta::ClanSettingsDeltaEntry::~ClanSettingsDeltaEntry() has the same machine code as InlineFatalBreak()

} // namespace jag::oldscape::rs2lib::social

namespace jag {
    // 0x100262450
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>::type
    make_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMember, long long&, eastl::string&, int&>(
        long long& arg1, eastl::string& str, int& arg3) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        AddMember* local_40[2];

        auto arg1_00 = aligned_alloc(112, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>::type result;
        } else {
            local_40[0] =
                placement_new<oldscape::rs2lib::social::ClanSettingsDelta::AddMember, long long&, eastl::string&, int&>(
                    (void*)((long)arg1_00 + 32), arg1, str, arg3);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::AddMember*&>(arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x100262620
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>::type
    make_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember, int&>(int& arg1) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        DeleteMember* local_30[2];

        auto arg1_00 = aligned_alloc(72, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>::type result;
        } else {
            local_30[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember, int&>(
                (void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember*&>(arg1_00, &local_34,
                                                                                           local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x100262740
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank>::type
    make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank, int&, signed char&>(int& arg1,
                                                                                                signed char& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        SetMemberRank* local_38[2];

        auto arg1_00 = aligned_alloc(72, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank>::type result;
        } else {
            local_38[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank, int&, signed char&>(
                (void*)((long)arg1_00 + 32), arg1, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank*&>(arg1_00, &local_3c,
                                                                                            local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x100262870
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner>::type
    make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner, int&>(int& arg1) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        SetOwner* local_30[2];

        auto arg1_00 = aligned_alloc(72, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner>::type result;
        } else {
            local_30[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner, int&>(
                (void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::SetOwner*&>(arg1_00, &local_34, local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x1002629a0
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>::type
    make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo, int&, int&, unsigned int&,
                unsigned int&>(int& arg1, int& arg2, unsigned int& arg3, unsigned int& arg4) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        SetMemberExtraInfo* local_40[2];

        auto arg1_00 = aligned_alloc(80, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>::type result;
        } else {
            local_40[0] =
                placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo, int&, int&,
                              unsigned int&, unsigned int&>((void*)((long)arg1_00 + 32), arg1, arg2, arg3, arg4);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo*&>(arg1_00, &local_44,
                                                                                                 local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x100262ae0
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted>::type
    make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted, int&, bool&>(int& arg1, bool& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        SetMemberMuted* local_38[2];

        auto arg1_00 = aligned_alloc(72, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted>::type result;
        } else {
            local_38[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted, int&, bool&>(
                (void*)((long)arg1_00 + 32), arg1, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted*&>(arg1_00, &local_3c,
                                                                                             local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x100262c10
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>::type
    make_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned, long long&, eastl::string&>(
        long long& arg1, eastl::string& str) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        AddBanned* local_38[2];

        auto arg1_00 = aligned_alloc(104, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>::type result;
        } else {
            local_38[0] =
                placement_new<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned, long long&, eastl::string&>(
                    (void*)((long)arg1_00 + 32), arg1, str);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::AddBanned*&>(arg1_00, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x100262d40
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned>::type
    make_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned, int&>(int& arg1) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        DeleteBanned* local_30[2];

        auto arg1_00 = aligned_alloc(72, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned>::type result;
        } else {
            local_30[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned, int&>(
                (void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned*&>(arg1_00, &local_34,
                                                                                           local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x100262e60
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName>::type
    make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName, eastl::string&, int&>(eastl::string& str,
                                                                                                int& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        SetClanName* local_38[2];

        auto arg1 = aligned_alloc(104, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName>::type result;
        } else {
            local_38[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName, eastl::string&, int&>(
                (void*)((long)arg1 + 32), str, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::SetClanName*&>(arg1, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x100262f80
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings>::type
    make_shared<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings,
                oldscape::rs2lib::social::ClanSettings&>(oldscape::rs2lib::social::ClanSettings& clanSettings) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_34;
        UpdateClanSettingsBaseSettings* local_30[2];

        auto arg1 = aligned_alloc(72, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings>::type
                result;
        } else {
            local_30[0] =
                placement_new<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings,
                              oldscape::rs2lib::social::ClanSettings&>((void*)((long)arg1 + 32), clanSettings);
            local_34 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)placement_new<
                ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings>, int,
                oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings*&>(arg1, &local_34,
                                                                                               local_30);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x1002630a0
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt>::type
    make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt, int&, int&>(int& arg1, int& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        SetExtraSettingInt* local_38[2];

        auto arg1_00 = aligned_alloc(72, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt>::type result;
        } else {
            local_38[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt, int&, int&>(
                (void*)((long)arg1_00 + 32), arg1, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt*&>(arg1_00, &local_3c,
                                                                                                 local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x1002631e0
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit>::type
    make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit, int&, int&, unsigned int&,
                unsigned int&>(int& arg1, int& arg2, unsigned int& arg3, unsigned int& arg4) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        SetExtraSettingIntVarbit* local_40[2];

        auto arg1_00 = aligned_alloc(80, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit>::type result;
        } else {
            local_40[0] =
                placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit, int&, int&,
                              unsigned int&, unsigned int&>((void*)((long)arg1_00 + 32), arg1, arg2, arg3, arg4);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit>,
                              int, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit*&>(
                    arg1_00, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

    // 0x100263320
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong>::type
    make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong, int&, long long&>(int& arg1,
                                                                                                    long long& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        SetExtraSettingLong* local_38[2];

        auto arg1_00 = aligned_alloc(80, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong>::type result;
        } else {
            local_38[0] =
                placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong, int&, long long&>(
                    (void*)((long)arg1_00 + 32), arg1, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong*&>(arg1_00, &local_3c,
                                                                                                  local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x100263450
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString>::type
    make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString, int&, eastl::string&>(
        int& arg1, eastl::string& str) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        SetExtraSettingString* local_38[2];

        auto arg1_00 = aligned_alloc(104, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString>::type result;
        } else {
            local_38[0] =
                placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString, int&, eastl::string&>(
                    (void*)((long)arg1_00 + 32), arg1, str);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString>,
                              int, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString*&>(
                    arg1_00, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x100263500
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>::type
    make_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        AddBanned* local_28[2];

        auto arg1 = aligned_alloc(104, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>::type result;
        } else {
            local_28[0] =
                placement_new<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::AddBanned*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x1002635d0
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1>::type
    make_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        AddMemberOldV1* local_28[2];

        auto arg1 = aligned_alloc(104, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1>::type result;
        } else {
            local_28[0] =
                placement_new<oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x100263660
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>::type
    make_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        AddMember* local_28[2];

        auto arg1 = aligned_alloc(112, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>::type result;
        } else {
            local_28[0] =
                placement_new<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::AddMember*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x1002636f0
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings>::type
    make_shared<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        UpdateClanSettingsBaseSettings* local_28[2];

        auto arg1 = aligned_alloc(72, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings>::type
                result;
        } else {
            local_28[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings>(
                (void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)placement_new<
                ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings>, int,
                oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings*&>(arg1, &local_2c,
                                                                                               local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x100263780
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned>::type
    make_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        DeleteBanned* local_28[2];

        auto arg1 = aligned_alloc(72, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned>::type result;
        } else {
            local_28[0] =
                placement_new<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x100263810
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>::type
    make_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        DeleteMember* local_28[2];

        auto arg1 = aligned_alloc(72, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>::type result;
        } else {
            local_28[0] =
                placement_new<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x1002638a0
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank>::type
    make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        SetMemberRank* local_28[2];

        auto arg1 = aligned_alloc(72, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank>::type result;
        } else {
            local_28[0] =
                placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x100263930
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>::type
    make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        SetMemberExtraInfo* local_28[2];

        auto arg1 = aligned_alloc(80, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>::type result;
        } else {
            local_28[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>(
                (void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo*&>(arg1, &local_2c,
                                                                                                 local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x1002639c0
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted>::type
    make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        SetMemberMuted* local_28[2];

        auto arg1 = aligned_alloc(72, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted>::type result;
        } else {
            local_28[0] =
                placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x100263a50
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt>::type
    make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        SetExtraSettingInt* local_28[2];

        auto arg1 = aligned_alloc(72, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt>::type result;
        } else {
            local_28[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt>(
                (void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt*&>(arg1, &local_2c,
                                                                                                 local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x100263ae0
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong>::type
    make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        SetExtraSettingLong* local_28[2];

        auto arg1 = aligned_alloc(80, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong>::type result;
        } else {
            local_28[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong>(
                (void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong*&>(arg1, &local_2c,
                                                                                                  local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x100263b70
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString>::type
    make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        SetExtraSettingString* local_28[2];

        auto arg1 = aligned_alloc(104, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString>::type result;
        } else {
            local_28[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString>(
                (void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString>,
                              int, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString*&>(
                    arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x100263c00
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit>::type
    make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        SetExtraSettingIntVarbit* local_28[2];

        auto arg1 = aligned_alloc(80, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit>::type result;
        } else {
            local_28[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit>(
                (void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit>,
                              int, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit*&>(
                    arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x100263c90
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName>::type
    make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        SetClanName* local_28[2];

        auto arg1 = aligned_alloc(104, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName>::type result;
        } else {
            local_28[0] =
                placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::SetClanName*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

    // 0x100263d20
    shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner>::type
    make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        SetOwner* local_28[2];

        auto arg1 = aligned_alloc(72, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner>::type result;
        } else {
            local_28[0] =
                placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::SetOwner*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
