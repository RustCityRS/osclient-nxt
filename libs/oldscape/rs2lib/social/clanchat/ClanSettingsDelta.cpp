// libs/oldscape/rs2lib/social/clanchat/ClanSettingsDelta.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "ClanSettingsDelta.h"

namespace jag::oldscape::rs2lib::social {
    // 0x1000c46d0: the linker folded this into javapal::GameShell::GetClientType(), which has identical code
    ClanSettingsDelta::DeleteMember::GetID() const;

    // 0x100260a10, 112 bytes, base-object constructor, placed by class name and debug map
    // ClanSettingsDelta::AddMemberOldV1::AddMemberOldV1(long long, eastl::string)
    void ClanSettingsDelta::AddMemberOldV1::AddMemberOldV1(long param_1, basic_string* param_3) {
        new (this) ClanSettingsDeltaEntry();
        field_0 = &PTR__AddMemberOldV1_100ef8350;
        field_32 = -1;
        new (&field_40) eastl::string();
        field_32 = param_1;
        eastl::string::operator=((eastl::string*)&field_40, param_3);
    }

    // 0x100260ac0, 16 bytes, complete-object constructor, placed by class name and debug map
    // ClanSettingsDelta::AddMemberOldV1::AddMemberOldV1(long long, eastl::string): jumps straight to the base-object constructor

    // 0x100260ad0, 224 bytes, placed by class name and debug map
    // ClanSettingsDelta::AddMemberOldV1::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ClanSettingsDelta::AddMemberOldV1::Decode(PacketJ* param_1) {
        char cVar1;
        long lVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_40[32];

        cVar1 = param_1->g1();
        if (cVar1 != -1) {
            lVar2 = param_1->size();
            param_1->SetPos(lVar2 - 1);
            lVar2 = param_1->g8();
            field_32 = lVar2;
        }
        local_40->gStringNoConversion(SUB81(param_1, 0));
        eastl::string::operator=((eastl::string*)&field_40, (basic_string*)local_40);
        local_40->~basic_string();
        if ((ClanSettings::m_verbose != '\0') && (ClanSettings::m_fluttered == '\0')) {
            uVar3 = logger::default_logger();
            lVar2 = field_32;
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar3, 0, 5,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "social/clanchat/ClanSettingsDelta.cpp",
                                31, "memberhash: %i membername: %s", (int)lVar2, uVar4);
        }
    }

    // 0x100260bb0, 464 bytes, placed by class name and debug map
    // ClanSettingsDelta::AddMemberOldV1::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, bool, bool)
    void ClanSettingsDelta::AddMemberOldV1::Encode(PacketJ* param_1, bool param_2, bool param_3) {
        undefined8 uVar1;
        long lVar2;
        undefined7 in_register_00000011;
        undefined8 uVar3;
        char* pcVar4;

        if ((int)CONCAT71(in_register_00000011, param_2) == 0) {
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, 255);
            if ((ClanSettings::m_verbose == '\0') || (ClanSettings::m_fluttered != '\0'))
                goto LAB_100260c9d;
            uVar1 = logger::default_logger();
            pcVar4 = "pushed 255";
            uVar3 = 55;
        } else {
            if (field_32 == -1) {
                uVar1 = logger::default_logger();
                pcVar4 = "";
                if (ClanSettings::m_fluttered == '\0') {
                    pcVar4 = "addMember.encode() was asked to storeUserHashes but userhash not present!";
                }
                logger::Logger::Log(uVar1, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "rs2lib/social/clanchat/ClanSettingsDelta.cpp",
                                    41, pcVar4);
            }
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<long long>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_32);
            if ((ClanSettings::m_verbose == '\0') || (ClanSettings::m_fluttered != '\0'))
                goto LAB_100260c9d;
            uVar1 = logger::default_logger();
            pcVar4 = "Pushed userhash";
            uVar3 = 47;
        }
        logger::Logger::Log(uVar1, 0, 5,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                            "social/clanchat/ClanSettingsDelta.cpp",
                            uVar3, pcVar4);
    LAB_100260c9d:
        if (param_3) {
            lVar2 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (lVar2 == 0) {
                uVar1 = logger::default_logger();
                pcVar4 = "";
                if (ClanSettings::m_fluttered == '\0') {
                    pcVar4 = "addMember.encode() was asked to storeDisplayNames but display name not present!";
                }
                logger::Logger::Log(uVar1, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "rs2lib/social/clanchat/ClanSettingsDelta.cpp",
                                    62, pcVar4);
            }
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
                eastl::basic_string<char, BucketAllocatorEASTL>>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, (basic_string*)&field_40, false);
        } else {
            param_1->pStringUTF8ToCP1252("", false);
        }
        if (ClanSettings::m_verbose != '\0') {
            uVar1 = logger::default_logger();
            lVar2 = field_32;
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar1, 0, 5,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "social/clanchat/ClanSettingsDelta.cpp",
                                72, "memberhash: %i membername: %s", (int)lVar2, uVar3);
        }
    }

    // 0x100260d80, 32 bytes, placed by class name and debug map
    // ClanSettingsDelta::AddMemberOldV1::Apply(ClanSettings&)
    void ClanSettingsDelta::AddMemberOldV1::Apply(ClanSettings* param_1) {
        param_1->DoAddMember(field_32, (basic_string*)&field_40, 0);
    }

    // 0x100260da0, 144 bytes, base-object constructor, placed by class name and debug map
    // ClanSettingsDelta::AddMember::AddMember(long long, eastl::string, int)
    void ClanSettingsDelta::AddMember::AddMember(long param_1, basic_string* param_3, uint param_4) {
        new (this) ClanSettingsDeltaEntry();
        field_0 = &PTR__AddMember_100ef8390;
        field_32 = -1;
        new (&field_40) eastl::string();
        field_72 = 0;
        field_32 = param_1;
        eastl::string::operator=((eastl::string*)&field_40, param_3);
        field_72 = param_4;
    }

    // 0x100260e30, 16 bytes, complete-object constructor, placed by class name and debug map
    // ClanSettingsDelta::AddMember::AddMember(long long, eastl::string, int): jumps straight to the base-object constructor

    // 0x100260e40, 240 bytes, placed by class name and debug map
    // ClanSettingsDelta::AddMember::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ClanSettingsDelta::AddMember::Decode(PacketJ* param_1) {
        char cVar1;
        ushort uVar2;
        long lVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_48[32];

        cVar1 = param_1->g1();
        if (cVar1 != -1) {
            lVar3 = param_1->size();
            param_1->SetPos(lVar3 - 1);
            lVar3 = param_1->g8();
            field_32 = lVar3;
        }
        local_48->gStringNoConversion(SUB81(param_1, 0));
        eastl::string::operator=((eastl::string*)&field_40, (basic_string*)local_48);
        local_48->~basic_string();
        uVar2 = param_1->g2();
        field_72 = (uint)uVar2;
        if ((ClanSettings::m_verbose != '\0') && (ClanSettings::m_fluttered == '\0')) {
            uVar4 = logger::default_logger();
            lVar3 = field_32;
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar4, 0, 5,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "social/clanchat/ClanSettingsDelta.cpp",
                                104, "memberhash: %i membername: %s", (int)lVar3, uVar5);
        }
    }

    // 0x100260f30, 464 bytes, placed by class name and debug map
    // ClanSettingsDelta::AddMember::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, bool, bool)
    void ClanSettingsDelta::AddMember::Encode(PacketJ* param_1, bool param_2, bool param_3) {
        undefined8 uVar1;
        long lVar2;
        undefined7 in_register_00000011;
        undefined8 uVar3;
        char* pcVar4;

        if ((int)CONCAT71(in_register_00000011, param_2) == 0) {
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, 255);
            if ((ClanSettings::m_verbose == '\0') || (ClanSettings::m_fluttered != '\0'))
                goto LAB_10026101a;
            uVar1 = logger::default_logger();
            pcVar4 = "pushed 255";
            uVar3 = 127;
        } else {
            if (field_32 == -1) {
                uVar1 = logger::default_logger();
                pcVar4 = "";
                if (ClanSettings::m_fluttered == '\0') {
                    pcVar4 = "addMember.encode() was asked to storeUserHashes but userhash not present!";
                }
                logger::Logger::Log(uVar1, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "rs2lib/social/clanchat/ClanSettingsDelta.cpp",
                                    114, pcVar4);
            }
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<long long>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_32);
            if ((ClanSettings::m_verbose == '\0') || (ClanSettings::m_fluttered != '\0'))
                goto LAB_10026101a;
            uVar1 = logger::default_logger();
            pcVar4 = "Pushed userhash";
            uVar3 = 119;
        }
        logger::Logger::Log(uVar1, 0, 5,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                            "social/clanchat/ClanSettingsDelta.cpp",
                            uVar3, pcVar4);
    LAB_10026101a:
        if (param_3) {
            lVar2 =
                eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
            if (lVar2 == 0) {
                uVar1 = logger::default_logger();
                pcVar4 = "";
                if (ClanSettings::m_fluttered == '\0') {
                    pcVar4 = "addMember.encode() was asked to storeDisplayNames but display name not present!";
                }
                logger::Logger::Log(uVar1, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "rs2lib/social/clanchat/ClanSettingsDelta.cpp",
                                    134, pcVar4);
            }
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
                eastl::basic_string<char, BucketAllocatorEASTL>>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, (basic_string*)&field_40, false);
        } else {
            param_1->pStringUTF8ToCP1252("", false);
        }
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_72);
        if ((ClanSettings::m_verbose != '\0') && (ClanSettings::m_fluttered == '\0')) {
            uVar1 = logger::default_logger();
            lVar2 = field_32;
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar1, 0, 5,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "social/clanchat/ClanSettingsDelta.cpp",
                                145, "memberhash: %i membername: %s", (int)lVar2, uVar3);
        }
    }

    // 0x100261100, 32 bytes, placed by class name and debug map
    // ClanSettingsDelta::AddMember::Apply(ClanSettings&)
    void ClanSettingsDelta::AddMember::Apply(ClanSettings* param_1) {
        param_1->DoAddMember(field_32, (basic_string*)&field_40, field_72);
    }

    // 0x100261120, 48 bytes, base-object constructor, placed by class name and debug map
    // ClanSettingsDelta::DeleteMember::DeleteMember(int)
    void ClanSettingsDelta::DeleteMember::DeleteMember(int param_1) {
        new (this) ClanSettingsDeltaEntry();
        field_0 = &PTR__SetMemberRank_100ef83d0;
        field_32 = param_1;
    }

    // 0x100261150, 16 bytes, complete-object constructor, placed by class name and debug map
    // ClanSettingsDelta::DeleteMember::DeleteMember(int): jumps straight to the base-object constructor

    // 0x100261160, 32 bytes, placed by class name and debug map
    // ClanSettingsDelta::DeleteMember::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ClanSettingsDelta::DeleteMember::Decode(PacketJ* param_1) {
        ushort uVar1;

        uVar1 = param_1->g2();
        field_32 = (uint)uVar1;
    }

    // 0x100261180, 32 bytes, placed by class name and debug map
    // ClanSettingsDelta::DeleteMember::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, bool, bool)
    void ClanSettingsDelta::DeleteMember::Encode(PacketJ* param_1, bool param_2, bool param_3) {
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_32);
    }

    // 0x1002611a0, 32 bytes, placed by class name and debug map
    // ClanSettingsDelta::DeleteMember::Apply(ClanSettings&)
    void ClanSettingsDelta::DeleteMember::Apply(ClanSettings* param_1) {
        param_1->DoDeleteMember(field_32);
    }

    // 0x1002611c0, 64 bytes, base-object constructor, placed by class name and debug map
    // ClanSettingsDelta::SetMemberRank::SetMemberRank(int, signed char)
    void ClanSettingsDelta::SetMemberRank::SetMemberRank(uint param_1, char param_3) {
        new (this) ClanSettingsDeltaEntry();
        field_0 = &PTR__SetMemberRank_100ef8410;
        m_memberRank = param_1;
        field_36 = param_3;
    }

    // 0x100261200, 16 bytes, complete-object constructor, placed by class name and debug map
    // ClanSettingsDelta::SetMemberRank::SetMemberRank(int, signed char): jumps straight to the base-object constructor

    // 0x100261210, 48 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetMemberRank::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ClanSettingsDelta::SetMemberRank::Decode(PacketJ* param_1) {
        char cVar1;
        ushort uVar2;

        uVar2 = param_1->g2();
        m_memberRank = (uint)uVar2;
        cVar1 = param_1->g1();
        field_36 = cVar1;
    }

    // 0x100261240, 48 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetMemberRank::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, bool, bool)
    void ClanSettingsDelta::SetMemberRank::Encode(PacketJ* param_1, bool param_2, bool param_3) {
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, m_memberRank);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<signed char>(param_1, (int)field_36);
    }

    // 0x100261270, 32 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetMemberRank::Apply(ClanSettings&)
    void ClanSettingsDelta::SetMemberRank::Apply(ClanSettings* param_1) {
        param_1->SetMemberRankBySlot(m_memberRank, (int)field_36);
    }

    // 0x100261290, 48 bytes, base-object constructor, placed by class name and debug map
    // ClanSettingsDelta::SetOwner::SetOwner(int)
    void ClanSettingsDelta::SetOwner::SetOwner(int param_1) {
        new (this) ClanSettingsDeltaEntry();
        field_0 = &PTR__SetMemberRank_100ef8450;
        m_owner = param_1;
    }

    // 0x1002612c0, 16 bytes, complete-object constructor, placed by class name and debug map
    // ClanSettingsDelta::SetOwner::SetOwner(int): jumps straight to the base-object constructor

    // 0x1002612d0, 32 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetOwner::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ClanSettingsDelta::SetOwner::Decode(PacketJ* param_1) {
        ushort uVar1;

        uVar1 = param_1->g2();
        m_owner = (uint)uVar1;
    }

    // 0x1002612f0, 32 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetOwner::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, bool, bool)
    void ClanSettingsDelta::SetOwner::Encode(PacketJ* param_1, bool param_2, bool param_3) {
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, m_owner);
    }

    // 0x100261310, 32 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetOwner::Apply(ClanSettings&)
    void ClanSettingsDelta::SetOwner::Apply(ClanSettings* param_1) {
        param_1->SetOwnerBySlot(m_owner);
    }

    // 0x100261330, 80 bytes, base-object constructor, placed by class name and debug map
    // ClanSettingsDelta::SetMemberExtraInfo::SetMemberExtraInfo(int, int, unsigned int, unsigned int)
    void ClanSettingsDelta::SetMemberExtraInfo::SetMemberExtraInfo(int param_1, int param_2, uint param_3,
                                                                   uint param_4) {
        new (this) ClanSettingsDeltaEntry();
        field_0 = &PTR__SetMemberRank_100ef8490;
        field_32 = param_1;
        field_36 = param_2;
        field_40 = param_3;
        field_44 = param_4;
    }

    // 0x100261380, 16 bytes, complete-object constructor, placed by class name and debug map
    // ClanSettingsDelta::SetMemberExtraInfo::SetMemberExtraInfo(int, int, unsigned int, unsigned int): jumps straight to the base-object constructor

    // 0x100261390, 80 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetMemberExtraInfo::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ClanSettingsDelta::SetMemberExtraInfo::Decode(PacketJ* param_1) {
        byte bVar1;
        ushort uVar2;
        int iVar3;

        uVar2 = param_1->g2();
        field_32 = (uint)uVar2;
        iVar3 = param_1->g4();
        field_36 = iVar3;
        bVar1 = param_1->g1();
        field_40 = (uint)bVar1;
        bVar1 = param_1->g1();
        field_44 = (uint)bVar1;
    }

    // 0x1002613e0, 64 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetMemberExtraInfo::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, bool, bool)
    void ClanSettingsDelta::SetMemberExtraInfo::Encode(PacketJ* param_1, bool param_2, bool param_3) {
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_32);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_36);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_40);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_44);
    }

    // 0x100261420, 32 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetMemberExtraInfo::Apply(ClanSettings&)
    void ClanSettingsDelta::SetMemberExtraInfo::Apply(ClanSettings* param_1) {
        param_1->SetMemberExtraInfoBySlot(field_32, field_36, field_40, field_44);
    }

    // 0x100261440, 64 bytes, base-object constructor, placed by class name and debug map
    // ClanSettingsDelta::SetMemberMuted::SetMemberMuted(int, bool)
    void ClanSettingsDelta::SetMemberMuted::SetMemberMuted(int param_1, bool param_2) {
        new (this) ClanSettingsDeltaEntry();
        field_0 = &PTR__SetMemberRank_100ef84d0;
        m_memberMuted = param_1;
        field_36 = param_2;
    }

    // 0x100261480, 16 bytes, complete-object constructor, placed by class name and debug map
    // ClanSettingsDelta::SetMemberMuted::SetMemberMuted(int, bool): jumps straight to the base-object constructor

    // 0x100261490, 48 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetMemberMuted::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ClanSettingsDelta::SetMemberMuted::Decode(PacketJ* param_1) {
        char cVar1;
        ushort uVar2;

        uVar2 = param_1->g2();
        m_memberMuted = (uint)uVar2;
        cVar1 = param_1->g1();
        field_36 = cVar1 == '\x01';
    }

    // 0x1002614c0, 48 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetMemberMuted::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, bool, bool)
    void ClanSettingsDelta::SetMemberMuted::Encode(PacketJ* param_1, bool param_2, bool param_3) {
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, m_memberMuted);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_36);
    }

    // 0x1002614f0, 32 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetMemberMuted::Apply(ClanSettings&)
    void ClanSettingsDelta::SetMemberMuted::Apply(ClanSettings* param_1) {
        param_1->SetMemberMutedBySlot(m_memberMuted, field_36);
    }

    // 0x100261510, 112 bytes, base-object constructor, placed by class name and debug map
    // ClanSettingsDelta::AddBanned::AddBanned(long long, eastl::string)
    void ClanSettingsDelta::AddBanned::AddBanned(undefined8 param_1, basic_string* param_3) {
        new (this) ClanSettingsDeltaEntry();
        field_0 = &PTR__AddBanned_100ef8510;
        field_32 = 18446744073709551615;
        new (&field_40) eastl::string();
        field_32 = param_1;
        eastl::string::operator=((eastl::string*)&field_40, param_3);
    }

    // 0x100261580, 16 bytes, complete-object constructor, placed by class name and debug map
    // ClanSettingsDelta::AddBanned::AddBanned(long long, eastl::string): jumps straight to the base-object constructor

    // 0x100261590, 144 bytes, placed by class name and debug map
    // ClanSettingsDelta::AddBanned::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ClanSettingsDelta::AddBanned::Decode(PacketJ* param_1) {
        long lVar1;
        undefined8 uVar2;
        char cVar3;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_40[32];

        cVar3 = param_1->g1();
        if (cVar3 != -1) {
            lVar1 = param_1->size();
            param_1->SetPos(lVar1 - 1);
            uVar2 = param_1->g8();
            field_32 = uVar2;
        }
        local_40->gStringNoConversion(SUB81(param_1, 0));
        eastl::string::operator=((eastl::string*)&field_40, (basic_string*)local_40);
        local_40->~basic_string();
    }

    // 0x100261620, 224 bytes, placed by class name and debug map
    // ClanSettingsDelta::AddBanned::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, bool, bool)
    void ClanSettingsDelta::AddBanned::Encode(PacketJ* param_1, bool param_2, bool param_3) {
        undefined8 uVar1;
        undefined7 in_register_00000011;

        if ((int)CONCAT71(in_register_00000011, param_2) == 0) {
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, 255);
        } else {
            if (field_32 == -1) {
                uVar1 = logger::default_logger();
                logger::Logger::Log(uVar1, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "rs2lib/social/clanchat/ClanSettingsDelta.cpp",
                                    295, "addBanned.encode() was asked to storeUserHashes but userhash not present!");
            }
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<long long>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_32);
        }
        if (param_3) {
            if (eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() == 0) {
                uVar1 = logger::default_logger();
                logger::Logger::Log(uVar1, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "rs2lib/social/clanchat/ClanSettingsDelta.cpp",
                                    308,
                                    "addBanned.encode() was asked to storeDisplayNames but display name not present!");
            }
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
                eastl::basic_string<char, BucketAllocatorEASTL>>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, (basic_string*)&field_40, false);
        } else {
            param_1->pStringUTF8ToCP1252("", false);
        }
    }

    // 0x100261700, 32 bytes, placed by class name and debug map
    // ClanSettingsDelta::AddBanned::Apply(ClanSettings&)
    void ClanSettingsDelta::AddBanned::Apply(ClanSettings* param_1) {
        param_1->DoAddBanned(field_32, (basic_string*)&field_40);
    }

    // 0x100261720, 48 bytes, base-object constructor, placed by class name and debug map
    // ClanSettingsDelta::DeleteBanned::DeleteBanned(int)
    void ClanSettingsDelta::DeleteBanned::DeleteBanned(int param_1) {
        new (this) ClanSettingsDeltaEntry();
        field_0 = &PTR__SetMemberRank_100ef8550;
        field_32 = param_1;
    }

    // 0x100261750, 16 bytes, complete-object constructor, placed by class name and debug map
    // ClanSettingsDelta::DeleteBanned::DeleteBanned(int): jumps straight to the base-object constructor

    // 0x100261760, 32 bytes, placed by class name and debug map
    // ClanSettingsDelta::DeleteBanned::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ClanSettingsDelta::DeleteBanned::Decode(PacketJ* param_1) {
        ushort uVar1;

        uVar1 = param_1->g2();
        field_32 = (uint)uVar1;
    }

    // 0x100261780, 32 bytes, placed by class name and debug map
    // ClanSettingsDelta::DeleteBanned::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, bool, bool)
    void ClanSettingsDelta::DeleteBanned::Encode(PacketJ* param_1, bool param_2, bool param_3) {
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_32);
    }

    // 0x1002617a0, 32 bytes, placed by class name and debug map
    // ClanSettingsDelta::DeleteBanned::Apply(ClanSettings&)
    void ClanSettingsDelta::DeleteBanned::Apply(ClanSettings* param_1) {
        param_1->DoDeleteBanned(field_32);
    }

    // 0x1002617c0, 112 bytes, base-object constructor, placed by class name and debug map
    // ClanSettingsDelta::SetClanName::SetClanName(eastl::string, int)
    void ClanSettingsDelta::SetClanName::SetClanName(basic_string* param_2, undefined4 param_3) {
        new (this) ClanSettingsDeltaEntry();
        field_0 = &PTR__SetClanName_100ef8590;
        new (&field_32) eastl::string();
        field_64 = 0;
        eastl::string::operator=((eastl::string*)&field_32, param_2);
        field_64 = param_3;
    }

    // 0x100261830, 16 bytes, complete-object constructor, placed by class name and debug map
    // ClanSettingsDelta::SetClanName::SetClanName(eastl::string, int): jumps straight to the base-object constructor

    // 0x100261840, 112 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetClanName::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ClanSettingsDelta::SetClanName::Decode(PacketJ* param_1) {
        undefined4 uVar1;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_40[32];

        local_40->gStringNoConversion(SUB81(param_1, 0));
        eastl::string::operator=((eastl::string*)&field_32, (basic_string*)local_40);
        local_40->~basic_string();
        uVar1 = param_1->g4();
        field_64 = uVar1;
    }

    // 0x1002618b0, 48 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetClanName::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, bool, bool)
    void ClanSettingsDelta::SetClanName::Encode(PacketJ* param_1, bool param_2, bool param_3) {
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
            eastl::basic_string<char, BucketAllocatorEASTL>>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, (basic_string*)&field_32, false);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_64);
    }

    // 0x1002618e0, 48 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetClanName::Apply(ClanSettings&)
    void ClanSettingsDelta::SetClanName::Apply(ClanSettings* param_1) {
        eastl::string::operator=((eastl::string*)&param_1->field_16, (basic_string*)&field_32);
        param_1->field_52 = field_64;
    }

    // 0x100261910, 80 bytes, base-object constructor, placed by class name and debug map
    // ClanSettingsDelta::UpdateClanSettingsBaseSettings::UpdateClanSettingsBaseSettings(ClanSettings&)
    void ClanSettingsDelta::UpdateClanSettingsBaseSettings::UpdateClanSettingsBaseSettings(ClanSettings* param_1) {
        new (this) ClanSettingsDeltaEntry();
        field_0 = &PTR__SetMemberRank_100ef85d0;
        field_32 = false;
        field_33 = '\0';
        field_34 = '\0';
        field_35 = '\0';
        field_36 = '\0';
        field_32 = param_1->m_allowNonMembers;
        field_33 = param_1->field_57;
        field_34 = param_1->field_58;
        field_35 = param_1->field_59;
        field_36 = param_1->field_60;
    }

    // 0x100261960, 16 bytes, complete-object constructor, placed by class name and debug map
    // ClanSettingsDelta::UpdateClanSettingsBaseSettings::UpdateClanSettingsBaseSettings(ClanSettings&): jumps straight to the base-object constructor

    // 0x100261970, 96 bytes, placed by class name and debug map
    // ClanSettingsDelta::UpdateClanSettingsBaseSettings::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ClanSettingsDelta::UpdateClanSettingsBaseSettings::Decode(PacketJ* param_1) {
        char cVar1;

        cVar1 = param_1->g1();
        field_32 = cVar1 == '\x01';
        cVar1 = param_1->g1();
        field_33 = cVar1;
        cVar1 = param_1->g1();
        field_34 = cVar1;
        cVar1 = param_1->g1();
        field_35 = cVar1;
        cVar1 = param_1->g1();
        field_36 = cVar1;
    }

    // 0x1002619d0, 80 bytes, placed by class name and debug map
    // ClanSettingsDelta::UpdateClanSettingsBaseSettings::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, bool, bool)
    void ClanSettingsDelta::UpdateClanSettingsBaseSettings::Encode(PacketJ* param_1, bool param_2, bool param_3) {
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_32);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<signed char>(param_1, (int)field_33);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<signed char>(param_1, (int)field_34);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<signed char>(param_1, (int)field_35);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<signed char>(param_1, (int)field_36);
    }

    // 0x100261a20, 48 bytes, placed by class name and debug map
    // ClanSettingsDelta::UpdateClanSettingsBaseSettings::Apply(ClanSettings&)
    void ClanSettingsDelta::UpdateClanSettingsBaseSettings::Apply(ClanSettings* param_1) {
        param_1->m_allowNonMembers = field_32;
        param_1->field_57 = field_33;
        param_1->field_58 = field_34;
        param_1->field_59 = field_35;
        param_1->field_60 = field_36;
    }

    // 0x100261a50, 64 bytes, base-object constructor, placed by class name and debug map
    // ClanSettingsDelta::SetExtraSettingInt::SetExtraSettingInt(int, int)
    void ClanSettingsDelta::SetExtraSettingInt::SetExtraSettingInt(int param_1, int param_2) {
        new (this) ClanSettingsDeltaEntry();
        field_0 = &PTR__SetMemberRank_100ef8610;
        m_extraSettingInt = param_1;
        field_36 = param_2;
    }

    // 0x100261a90, 16 bytes, complete-object constructor, placed by class name and debug map
    // ClanSettingsDelta::SetExtraSettingInt::SetExtraSettingInt(int, int): jumps straight to the base-object constructor

    // 0x100261aa0, 48 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetExtraSettingInt::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ClanSettingsDelta::SetExtraSettingInt::Decode(PacketJ* param_1) {
        int iVar1;

        iVar1 = param_1->g4();
        m_extraSettingInt = iVar1;
        iVar1 = param_1->g4();
        field_36 = iVar1;
    }

    // 0x100261ad0, 48 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetExtraSettingInt::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, bool, bool)
    void ClanSettingsDelta::SetExtraSettingInt::Encode(PacketJ* param_1, bool param_2, bool param_3) {
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, m_extraSettingInt);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_36);
    }

    // 0x100261b00, 32 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetExtraSettingInt::Apply(ClanSettings&)
    void ClanSettingsDelta::SetExtraSettingInt::Apply(ClanSettings* param_1) {
        param_1->SetExtraSettingInt(m_extraSettingInt, field_36);
    }

    // 0x100261b20, 96 bytes, base-object constructor, placed by class name and debug map
    // ClanSettingsDelta::SetExtraSettingIntVarbit::SetExtraSettingIntVarbit(int, int, unsigned int, unsigned int)
    void ClanSettingsDelta::SetExtraSettingIntVarbit::SetExtraSettingIntVarbit(int param_1, int param_2, uint param_3,
                                                                               uint param_4) {
        new (this) ClanSettingsDeltaEntry();
        field_0 = &PTR__SetMemberRank_100ef8650;
        field_32 = 0;
        field_36 = 0;
        field_40 = 0;
        field_44 = 0;
        field_32 = param_1;
        field_44 = param_2;
        field_36 = param_3;
        field_40 = param_4;
    }

    // 0x100261b80, 16 bytes, complete-object constructor, placed by class name and debug map
    // ClanSettingsDelta::SetExtraSettingIntVarbit::SetExtraSettingIntVarbit(int, int, unsigned int, unsigned int): jumps straight to the base-object constructor

    // 0x100261b90, 80 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetExtraSettingIntVarbit::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ClanSettingsDelta::SetExtraSettingIntVarbit::Decode(PacketJ* param_1) {
        byte bVar1;
        int iVar2;

        iVar2 = param_1->g4();
        field_32 = iVar2;
        iVar2 = param_1->g4();
        field_44 = iVar2;
        bVar1 = param_1->g1();
        field_36 = (uint)bVar1;
        bVar1 = param_1->g1();
        field_40 = (uint)bVar1;
    }

    // 0x100261be0, 64 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetExtraSettingIntVarbit::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, bool, bool)
    void ClanSettingsDelta::SetExtraSettingIntVarbit::Encode(PacketJ* param_1, bool param_2, bool param_3) {
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_32);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_44);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_36);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_40);
    }

    // 0x100261c20, 32 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetExtraSettingIntVarbit::Apply(ClanSettings&)
    void ClanSettingsDelta::SetExtraSettingIntVarbit::Apply(ClanSettings* param_1) {
        param_1->SetExtraSettingIntVarbit(field_32, field_44, field_36, field_40);
    }

    // 0x100261c40, 64 bytes, base-object constructor, placed by class name and debug map
    // ClanSettingsDelta::SetExtraSettingLong::SetExtraSettingLong(int, long long)
    void ClanSettingsDelta::SetExtraSettingLong::SetExtraSettingLong(int param_1, longlong param_2) {
        new (this) ClanSettingsDeltaEntry();
        field_0 = &PTR__SetMemberRank_100ef8690;
        m_extraSettingLong = param_1;
        field_40 = param_2;
    }

    // 0x100261c80, 16 bytes, complete-object constructor, placed by class name and debug map
    // ClanSettingsDelta::SetExtraSettingLong::SetExtraSettingLong(int, long long): jumps straight to the base-object constructor

    // 0x100261c90, 48 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetExtraSettingLong::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ClanSettingsDelta::SetExtraSettingLong::Decode(PacketJ* param_1) {
        longlong lVar1;
        int iVar2;

        iVar2 = param_1->g4();
        m_extraSettingLong = iVar2;
        lVar1 = param_1->g8();
        field_40 = lVar1;
    }

    // 0x100261cc0, 48 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetExtraSettingLong::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, bool, bool)
    void ClanSettingsDelta::SetExtraSettingLong::Encode(PacketJ* param_1, bool param_2, bool param_3) {
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, m_extraSettingLong);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<long long>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_40);
    }

    // 0x100261cf0, 32 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetExtraSettingLong::Apply(ClanSettings&)
    void ClanSettingsDelta::SetExtraSettingLong::Apply(ClanSettings* param_1) {
        param_1->SetExtraSettingLong(m_extraSettingLong, field_40);
    }

    // 0x100261d10, 112 bytes, base-object constructor, placed by class name and debug map
    // ClanSettingsDelta::SetExtraSettingString::SetExtraSettingString(int, eastl::string)
    void ClanSettingsDelta::SetExtraSettingString::SetExtraSettingString(undefined4 param_1, basic_string* param_3) {
        new (this) ClanSettingsDeltaEntry();
        field_0 = &PTR__SetExtraSettingString_100ef86d0;
        field_32 = 0;
        new (&field_40) eastl::string();
        field_32 = param_1;
        eastl::string::operator=((eastl::string*)&field_40, param_3);
    }

    // 0x100261d80, 16 bytes, complete-object constructor, placed by class name and debug map
    // ClanSettingsDelta::SetExtraSettingString::SetExtraSettingString(int, eastl::string): jumps straight to the base-object constructor

    // 0x100261d90, 112 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetExtraSettingString::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ClanSettingsDelta::SetExtraSettingString::Decode(PacketJ* param_1) {
        undefined4 uVar1;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_40[32];

        uVar1 = param_1->g4();
        field_32 = uVar1;
        local_40->gStringNoConversion(SUB81(param_1, 0));
        eastl::string::operator=((eastl::string*)&field_40, (basic_string*)local_40);
        local_40->~basic_string();
    }

    // 0x100261e00, 48 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetExtraSettingString::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, bool, bool)
    void ClanSettingsDelta::SetExtraSettingString::Encode(PacketJ* param_1, bool param_2, bool param_3) {
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_32);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
            eastl::basic_string<char, BucketAllocatorEASTL>>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, (basic_string*)&field_40, false);
    }

    // 0x100261e30, 96 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetExtraSettingString::Apply(ClanSettings&)
    void ClanSettingsDelta::SetExtraSettingString::Apply(ClanSettings* param_1) {
        undefined4 uVar1;
        eastl::string local_40[32];

        uVar1 = field_32;
        eastl::string::basic_string(local_40, (basic_string*)&field_40);
        param_1->SetExtraSettingString(uVar1, local_40);
        eastl::string::~basic_string(local_40);
    }

    // 0x100261e90, 48 bytes, base-object constructor, placed by class name and debug map
    // ClanSettingsDelta::ClanSettingsDelta(ClanSettings&)
    void ClanSettingsDelta::ClanSettingsDelta(ClanSettings* param_1) {
        new (this) SharedPtrList<ClanSettingsDelta::ClanSettingsDeltaEntry>();
        field_24 = 4294967295;
        field_16 = param_1->field_0;
        field_24 = param_1->field_8;
    }

    // 0x100261ed0, 16 bytes, complete-object constructor, placed by class name and debug map
    // ClanSettingsDelta::ClanSettingsDelta(ClanSettings&): jumps straight to the base-object constructor

    // 0x100261ee0, 64 bytes, base-object constructor, placed by class name and debug map
    // ClanSettingsDelta::ClanSettingsDelta(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ClanSettingsDelta::ClanSettingsDelta(PacketJ* param_1) {
        new (this) SharedPtrList<ClanSettingsDelta::ClanSettingsDeltaEntry>();
        field_24 = 4294967295;
        Decode(this, param_1);
    }

    // 0x100261f20, 1184 bytes, placed by class name and debug map
    // ClanSettingsDelta::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ClanSettingsDelta::Decode(PacketJ* param_1) {
        char cVar1;
        undefined4 uVar2;
        longlong lVar3;
        undefined8 uVar4;
        long* plVar5;
        shared_ptr* psVar6;
        char* pcVar7;
        shared_ptr local_50;
        shared_ptr local_40;

        psVar6 = (shared_ptr*)param_1;
        lVar3 = param_1->g8();
        field_16 = lVar3;
        uVar2 = param_1->g4();
        field_24 = uVar2;
        cVar1 = param_1->g1();
        if (cVar1 != '\0') {
            do {
                if ((ClanSettings::m_verbose != '\0') && (ClanSettings::m_fluttered == '\0')) {
                    uVar4 = logger::default_logger();
                    psVar6 = (shared_ptr*)0;
                    logger::Logger::Log(uVar4, 0, 5,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "oldscape/rs2lib/social/clanchat/ClanSettingsDelta.cpp",
                                        606, "t:%i", cVar1);
                }
                new (&local_50) shared_ptr<worldmap::WorldmapAreaMetadata>(psVar6);
                switch (cVar1) {
                case '\x01':
                    make_shared<ClanSettingsDelta::AddMemberOldV1>((jag*)&local_40);
                    shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>::operator=(
                        (shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>*)&local_50, &local_40);
                    local_40.~shared_ptr();
                    break;
                case '\x02':
                    make_shared<ClanSettingsDelta::SetMemberRank>((jag*)&local_40);
                    shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>::operator=(
                        (shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>*)&local_50, &local_40);
                    local_40.~shared_ptr();
                    break;
                case '\x03':
                    make_shared<ClanSettingsDelta::AddBanned>((jag*)&local_40);
                    shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>::operator=(
                        (shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>*)&local_50, &local_40);
                    local_40.~shared_ptr();
                    break;
                case '\x04':
                    make_shared<ClanSettingsDelta::UpdateClanSettingsBaseSettings>((jag*)&local_40);
                    shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>::operator=(
                        (shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>*)&local_50, &local_40);
                    local_40.~shared_ptr();
                    break;
                case '\x05':
                    make_shared<ClanSettingsDelta::DeleteMember>((jag*)&local_40);
                    shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>::operator=(
                        (shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>*)&local_50, &local_40);
                    local_40.~shared_ptr();
                    break;
                case '\x06':
                    make_shared<ClanSettingsDelta::DeleteBanned>((jag*)&local_40);
                    shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>::operator=(
                        (shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>*)&local_50, &local_40);
                    local_40.~shared_ptr();
                    break;
                case '\a':
                    make_shared<ClanSettingsDelta::SetMemberExtraInfo>((jag*)&local_40);
                    shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>::operator=(
                        (shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>*)&local_50, &local_40);
                    local_40.~shared_ptr();
                    break;
                case '\b':
                    make_shared<ClanSettingsDelta::SetExtraSettingInt>((jag*)&local_40);
                    shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>::operator=(
                        (shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>*)&local_50, &local_40);
                    local_40.~shared_ptr();
                    break;
                case '\t':
                    make_shared<ClanSettingsDelta::SetExtraSettingLong>((jag*)&local_40);
                    shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>::operator=(
                        (shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>*)&local_50, &local_40);
                    local_40.~shared_ptr();
                    break;
                case '\n':
                    make_shared<ClanSettingsDelta::SetExtraSettingString>((jag*)&local_40);
                    shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>::operator=(
                        (shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>*)&local_50, &local_40);
                    local_40.~shared_ptr();
                    break;
                case '\v':
                    make_shared<ClanSettingsDelta::SetExtraSettingIntVarbit>((jag*)&local_40);
                    shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>::operator=(
                        (shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>*)&local_50, &local_40);
                    local_40.~shared_ptr();
                    break;
                case '\f':
                    make_shared<ClanSettingsDelta::SetClanName>((jag*)&local_40);
                    shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>::operator=(
                        (shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>*)&local_50, &local_40);
                    local_40.~shared_ptr();
                    break;
                case '\r':
                    make_shared<ClanSettingsDelta::AddMember>((jag*)&local_40);
                    shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>::operator=(
                        (shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>*)&local_50, &local_40);
                    local_40.~shared_ptr();
                    break;
                case '\x0e':
                    make_shared<ClanSettingsDelta::SetMemberMuted>((jag*)&local_40);
                    shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>::operator=(
                        (shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>*)&local_50, &local_40);
                    local_40.~shared_ptr();
                    break;
                case '\x0f':
                    make_shared<ClanSettingsDelta::SetOwner>((jag*)&local_40);
                    shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>::operator=(
                        (shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>*)&local_50, &local_40);
                    local_40.~shared_ptr();
                    break;
                default:
                    uVar4 = logger::default_logger();
                    pcVar7 = "";
                    if (ClanSettings::m_fluttered == '\0') {
                        pcVar7 = "Unrecognised ClanSettingsDelta type in decode()";
                    }
                    logger::Logger::Log(uVar4, 0, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "oldscape/rs2lib/social/clanchat/ClanSettingsDelta.cpp",
                                        673, pcVar7);
                }
                plVar5 = (long*)shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>::operator->(
                    (shared_ptr<ClanSettingsDelta::ClanSettingsDeltaEntry>*)&local_50);
                (**(code**)(*plVar5 + 24))(plVar5, param_1);
                psVar6 = &local_50;
                push_back(&local_50);
                cVar1 = param_1->g1();
                local_50.~shared_ptr();
            } while (cVar1 != '\0');
        }
    }

    // 0x1002623c0, 16 bytes, complete-object constructor, placed by class name and debug map
    // ClanSettingsDelta::ClanSettingsDelta(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&): jumps straight to the base-object constructor

    // 0x1002623d0, 128 bytes, placed by class name and debug map
    // ClanSettingsDelta::AddMemberToEntryList(long long, eastl::string, int)
    void ClanSettingsDelta::AddMemberToEntryList(longlong param_1, basic_string* param_3, int param_4) {
        shared_ptr local_48;
        longlong local_38;
        shared_ptr local_30;
        int local_1c;

        local_38 = param_1;
        local_1c = param_4;
        make_shared<ClanSettingsDelta::AddMember, long long&, eastl::string&, int&>((jag*)&local_48, &local_38, param_3,
                                                                                    &local_1c);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_30, &local_48);
        push(&local_30);
        local_30.~shared_ptr();
        local_48.~shared_ptr();
    }

    // 0x1002625a0, 128 bytes, placed by class name and debug map
    // ClanSettingsDelta::DeleteMemberToEntryList(int)
    void ClanSettingsDelta::DeleteMemberToEntryList(int param_1) {
        shared_ptr local_40;
        shared_ptr local_30;
        int local_1c;

        local_1c = param_1;
        make_shared<ClanSettingsDelta::DeleteMember, int&>((jag*)&local_40, &local_1c);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_30, &local_40);
        push(&local_30);
        local_30.~shared_ptr();
        local_40.~shared_ptr();
    }

    // 0x1002626c0, 128 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetMemberRankToEntryList(int, signed char)
    void ClanSettingsDelta::SetMemberRankToEntryList(int param_1, signed param_3) {
        shared_ptr local_40;
        shared_ptr local_30;
        int local_20;
        signed local_19;

        local_20 = param_1;
        local_19 = param_3;
        make_shared<ClanSettingsDelta::SetMemberRank, int&, signed char&>((jag*)&local_40, &local_20, &local_19);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_30, &local_40);
        push(&local_30);
        local_30.~shared_ptr();
        local_40.~shared_ptr();
    }

    // 0x1002627f0, 128 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetOwnerToEntryList(int)
    void ClanSettingsDelta::SetOwnerToEntryList(int param_1) {
        shared_ptr local_40;
        shared_ptr local_30;
        int local_1c;

        local_1c = param_1;
        make_shared<ClanSettingsDelta::SetOwner, int&>((jag*)&local_40, &local_1c);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_30, &local_40);
        push(&local_30);
        local_30.~shared_ptr();
        local_40.~shared_ptr();
    }

    // 0x100262910, 144 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetMemberExtraInfoToEntryList(int, int, unsigned int, unsigned int)
    void ClanSettingsDelta::SetMemberExtraInfoToEntryList(int param_1, int param_2, uint param_3, uint param_4) {
        shared_ptr local_48;
        shared_ptr local_38;
        int local_28;
        int local_24;
        uint local_20;
        uint local_1c;

        local_28 = param_1;
        local_24 = param_2;
        local_20 = param_3;
        local_1c = param_4;
        make_shared<ClanSettingsDelta::SetMemberExtraInfo, int&, int&, unsigned int&, unsigned int&>(
            (jag*)&local_48, &local_28, &local_24, &local_20, &local_1c);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_38, &local_48);
        push(&local_38);
        local_38.~shared_ptr();
        local_48.~shared_ptr();
    }

    // 0x100262a60, 128 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetMemberMutedToEntryList(int, bool)
    void ClanSettingsDelta::SetMemberMutedToEntryList(int param_1, bool param_2) {
        shared_ptr local_40;
        shared_ptr local_30;
        int local_20;
        bool local_19;

        local_20 = param_1;
        local_19 = param_2;
        make_shared<ClanSettingsDelta::SetMemberMuted, int&, bool&>((jag*)&local_40, &local_20, &local_19);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_30, &local_40);
        push(&local_30);
        local_30.~shared_ptr();
        local_40.~shared_ptr();
    }

    // 0x100262b90, 128 bytes, placed by class name and debug map
    // ClanSettingsDelta::AddBannedToEntryList(long long, eastl::string)
    void ClanSettingsDelta::AddBannedToEntryList(longlong param_1, basic_string* param_3) {
        shared_ptr local_40;
        longlong local_30;
        shared_ptr local_28;

        local_30 = param_1;
        make_shared<ClanSettingsDelta::AddBanned, long long&, eastl::string&>((jag*)&local_40, &local_30, param_3);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_28, &local_40);
        push(&local_28);
        local_28.~shared_ptr();
        local_40.~shared_ptr();
    }

    // 0x100262cc0, 128 bytes, placed by class name and debug map
    // ClanSettingsDelta::DeleteBannedToEntryList(int)
    void ClanSettingsDelta::DeleteBannedToEntryList(int param_1) {
        shared_ptr local_40;
        shared_ptr local_30;
        int local_1c;

        local_1c = param_1;
        make_shared<ClanSettingsDelta::DeleteBanned, int&>((jag*)&local_40, &local_1c);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_30, &local_40);
        push(&local_30);
        local_30.~shared_ptr();
        local_40.~shared_ptr();
    }

    // 0x100262de0, 128 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetClanNameToEntryList(eastl::string, int)
    void ClanSettingsDelta::SetClanNameToEntryList(basic_string* param_2, int param_3) {
        shared_ptr local_40;
        shared_ptr local_30;
        int local_1c;

        local_1c = param_3;
        make_shared<ClanSettingsDelta::SetClanName, eastl::string&, int&>((jag*)&local_40, param_2, &local_1c);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_30, &local_40);
        push(&local_30);
        local_30.~shared_ptr();
        local_40.~shared_ptr();
    }

    // 0x100262f10, 112 bytes, placed by class name and debug map
    // ClanSettingsDelta::UpdateBaseSettingsToEntryList(ClanSettings&)
    void ClanSettingsDelta::UpdateBaseSettingsToEntryList(ClanSettings* param_1) {
        shared_ptr local_38;
        shared_ptr local_28;

        make_shared<ClanSettingsDelta::UpdateClanSettingsBaseSettings, ClanSettings&>((jag*)&local_38, param_1);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_28, &local_38);
        push(&local_28);
        local_28.~shared_ptr();
        local_38.~shared_ptr();
    }

    // 0x100263020, 128 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetExtraSettingIntToEntryList(int, int)
    void ClanSettingsDelta::SetExtraSettingIntToEntryList(int param_1, int param_2) {
        shared_ptr local_40;
        shared_ptr local_30;
        int local_20;
        int local_1c;

        local_20 = param_1;
        local_1c = param_2;
        make_shared<ClanSettingsDelta::SetExtraSettingInt, int&, int&>((jag*)&local_40, &local_20, &local_1c);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_30, &local_40);
        push(&local_30);
        local_30.~shared_ptr();
        local_40.~shared_ptr();
    }

    // 0x100263150, 144 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetExtraSettingIntVarbitToEntryList(int, int, unsigned int, unsigned int)
    void ClanSettingsDelta::SetExtraSettingIntVarbitToEntryList(int param_1, int param_2, uint param_3, uint param_4) {
        shared_ptr local_48;
        shared_ptr local_38;
        int local_28;
        int local_24;
        uint local_20;
        uint local_1c;

        local_28 = param_1;
        local_24 = param_2;
        local_20 = param_3;
        local_1c = param_4;
        make_shared<ClanSettingsDelta::SetExtraSettingIntVarbit, int&, int&, unsigned int&, unsigned int&>(
            (jag*)&local_48, &local_28, &local_24, &local_20, &local_1c);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_38, &local_48);
        push(&local_38);
        local_38.~shared_ptr();
        local_48.~shared_ptr();
    }

    // 0x1002632a0, 128 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetExtraSettingLongToEntryList(int, long long)
    void ClanSettingsDelta::SetExtraSettingLongToEntryList(int param_1, longlong param_2) {
        shared_ptr local_48;
        longlong local_38;
        shared_ptr local_30;
        int local_1c;

        local_38 = param_2;
        local_1c = param_1;
        make_shared<ClanSettingsDelta::SetExtraSettingLong, int&, long long&>((jag*)&local_48, &local_1c, &local_38);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_30, &local_48);
        push(&local_30);
        local_30.~shared_ptr();
        local_48.~shared_ptr();
    }

    // 0x1002633d0, 128 bytes, placed by class name and debug map
    // ClanSettingsDelta::SetExtraSettingStringToEntryList(int, eastl::string)
    void ClanSettingsDelta::SetExtraSettingStringToEntryList(int param_1, basic_string* param_3) {
        shared_ptr local_40;
        shared_ptr local_30;
        int local_1c;

        local_1c = param_1;
        make_shared<ClanSettingsDelta::SetExtraSettingString, int&, eastl::string&>((jag*)&local_40, &local_1c,
                                                                                    param_3);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_30, &local_40);
        push(&local_30);
        local_30.~shared_ptr();
        local_40.~shared_ptr();
    }

    // 0x100263e00, 240 bytes, placed by class name and debug map
    // ClanSettingsDelta::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, bool, bool)
    void ClanSettingsDelta::Encode(PacketJ* param_1, bool param_2, bool param_3) {
        bool bVar1;
        char cVar2;
        long* plVar3;
        undefined7 in_register_00000011;
        hashtable_iterator_base* extraout_RDX;
        undefined1 auVar4[16];
        undefined8 local_40;
        undefined8 local_38;

        if ((int)CONCAT71(in_register_00000011, param_2) == 0) {
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<int>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, 0);
        } else {
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<long long>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_16);
        }
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_24);
        local_40 = begin();
        auVar4 = end();
        local_38 = auVar4._0_8_;
        bVar1 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_38, auVar4._8_8_);
        if (bVar1) {
            do {
                plVar3 = (long*)local_40.HeapBeginPtr();
                cVar2 = (**(code**)(*plVar3 + 16))(plVar3);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<signed char>(param_1, (int)cVar2);
                (**(code**)(*plVar3 + 32))(plVar3, param_1, param_2, param_3);
                SharedPtrList<ClanSettingsDelta::ClanSettingsDeltaEntry>::obj_iterator::operator++(
                    (obj_iterator*)&local_40);
                bVar1 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_38, extraout_RDX);
            } while (bVar1);
        }
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, 0);
    }

    // 0x100263f30, 416 bytes, placed by class name and debug map
    // ClanSettingsDelta::ApplyToClanSettings(ClanSettings&)
    void ClanSettingsDelta::ApplyToClanSettings(ClanSettings* param_1) {
        undefined4 uVar1;
        bool bVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        long* plVar6;
        hashtable_iterator_base* extraout_RDX;
        undefined1 auVar7[16];
        undefined8 local_70[4];
        undefined8 local_50[4];

        if ((param_1->field_0 != field_16) || (param_1->field_8 != field_24)) {
            if (ClanSettings::m_fluttered == '\0') {
                uVar3 = logger::default_logger();
                local_70->ToRawUsername(param_1->field_0);
                uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                uVar1 = param_1->field_8;
                local_50->ToRawUsername(field_16);
                uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                logger::Logger::Log(uVar3, 0, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "rs2lib/social/clanchat/ClanSettingsDelta.cpp",
                                    706,
                                    "ClanSettingsDelta.applyToClanSettings(): Credentials do not match! "
                                    "Settings.owner: %s updateNum: %i delta.owner: %s updateNum: %i",
                                    uVar4, uVar1, uVar5, field_24);
                local_50->~basic_string();
                local_70->~basic_string();
            }
            if ((param_1->field_0 == field_16) && (param_1->field_8 == field_24)) {
                /* WARNING: Subroutine does not return */
                LogAssert("cr.m_clanHash != m_clanHash || cr.m_updateNum != m_updateNum",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                          "social/clanchat/ClanSettingsDelta.cpp",
                          708, (char*)0);
            }
        }
        local_70[0] = begin();
        auVar7 = end();
        local_50[0] = auVar7._0_8_;
        bVar2 = eastl::operator!=((eastl*)local_70, (hashtable_iterator_base*)local_50, auVar7._8_8_);
        if (bVar2) {
            do {
                plVar6 = (long*)local_70->HeapBeginPtr();
                (**(code**)(*plVar6 + 40))(plVar6, param_1);
                SharedPtrList<ClanSettingsDelta::ClanSettingsDeltaEntry>::obj_iterator::operator++(
                    (obj_iterator*)local_70);
                bVar2 = eastl::operator!=((eastl*)local_70, (hashtable_iterator_base*)local_50, extraout_RDX);
            } while (bVar2);
        }
        param_1->field_8 = param_1->field_8 + 1;
    }

    // 0x1002640d0, 272 bytes, placed by class name and debug map
    // ClanSettingsDelta::GetUserHashes()
    ClanSettingsDelta* ClanSettingsDelta::GetUserHashes() {
        bool bVar1;
        int iVar2;
        long* plVar3;
        hashtable_iterator_base* extraout_RDX;
        SharedPtrList<ClanSettingsDelta::ClanSettingsDeltaEntry>* in_RSI;
        undefined1 auVar4[16];
        undefined8 local_38;
        undefined8 local_30;

        new (&local_30) eastl::allocator("EASTL vector");
        new (this) eastl::vector<long long, eastl::allocator>(32, (allocator*)&local_30);
        local_30 = in_RSI->begin();
        auVar4 = in_RSI->end();
        local_38 = auVar4._0_8_;
        bVar1 = eastl::operator!=((eastl*)&local_30, (hashtable_iterator_base*)&local_38, auVar4._8_8_);
        if (bVar1) {
            do {
                plVar3 = (long*)local_30.HeapBeginPtr();
                iVar2 = (**(code**)(*plVar3 + 16))(plVar3);
                if (iVar2 == 1) {
                    push_back(plVar3 + 4);
                } else if (iVar2 == 3) {
                    push_back(plVar3 + 4);
                } else if (iVar2 == 13) {
                    push_back(plVar3 + 4);
                }
                SharedPtrList<ClanSettingsDelta::ClanSettingsDeltaEntry>::obj_iterator::operator++(
                    (obj_iterator*)&local_30);
                bVar1 = eastl::operator!=((eastl*)&local_30, (hashtable_iterator_base*)&local_38, extraout_RDX);
            } while (bVar1);
        }
        return this;
    }

    // 0x100264240, 208 bytes, placed by class name and debug map
    // ClanSettingsDelta::ApplyDisplayNames(Array<eastl::string, eastl::allocator>&)
    void ClanSettingsDelta::ApplyDisplayNames(Array* param_1) {
        bool bVar1;
        int iVar2;
        basic_string* pbVar3;
        long* plVar4;
        hashtable_iterator_base* extraout_RDX;
        ulong uVar5;
        int iVar6;
        undefined1 auVar7[16];
        undefined8 local_40;
        undefined8 local_38;

        local_40 = begin();
        auVar7 = end();
        local_38 = auVar7._0_8_;
        bVar1 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_38, auVar7._8_8_);
        if (bVar1) {
            iVar6 = 0;
            do {
                plVar4 = (long*)local_40.HeapBeginPtr();
                iVar2 = (**(code**)(*plVar4 + 16))(plVar4);
                if (((iVar2 == 13) || (iVar2 = (**(code**)(*plVar4 + 16))(plVar4), iVar2 == 1)) ||
                    (iVar2 = (**(code**)(*plVar4 + 16))(plVar4), iVar2 == 3)) {
                    uVar5 = (ulong)iVar6;
                    iVar6 = iVar6 + 1;
                    pbVar3 = (basic_string*)Array<eastl::string, eastl::allocator>::operator[](
                        (Array<eastl::string, eastl::allocator>*)param_1, uVar5);
                    eastl::string::operator=((eastl::string*)(plVar4 + 5), pbVar3);
                }
                SharedPtrList<ClanSettingsDelta::ClanSettingsDeltaEntry>::obj_iterator::operator++(
                    (obj_iterator*)&local_40);
                bVar1 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_38, extraout_RDX);
            } while (bVar1);
        }
    }

    // 0x100269960: the linker folded this into ClanChannelDelta::AddUser::GetID() const, which has identical code
    ClanSettingsDelta::AddMemberOldV1::GetID() const;

    // 0x1002699a0: the linker folded this into ClanChannelDelta::DeleteUser::GetID() const, which has identical code
    ClanSettingsDelta::AddBanned::GetID() const;

    // 0x1002699e0: the linker folded this into ClanChannelDelta::UpdateUserDetails::GetID() const, which has identical code
    ClanSettingsDelta::SetMemberRank::GetID() const;

    // 0x100269a50: the linker folded this into ClanChannelDelta::UpdateClanChannelBaseSettings::GetID() const, which has identical code
    ClanSettingsDelta::UpdateClanSettingsBaseSettings::GetID() const;

    // 0x100269ad0: the linker folded this into ClanSettingsDelta::DeleteMember::~DeleteMember(), which has identical code
    ClanSettingsDelta::DeleteBanned::~DeleteBanned();

    // 0x100269ad0: the linker folded this into ClanSettingsDelta::DeleteMember::~DeleteMember(), which has identical code
    ClanSettingsDelta::SetMemberRank::~SetMemberRank();

    // 0x100269ad0: the linker folded this into ClanSettingsDelta::DeleteMember::~DeleteMember(), which has identical code
    ClanSettingsDelta::SetMemberMuted::~SetMemberMuted();

    // 0x100269ad0: the linker folded this into ClanSettingsDelta::DeleteMember::~DeleteMember(), which has identical code
    ClanSettingsDelta::SetExtraSettingInt::~SetExtraSettingInt();

    // 0x100269ad0: the linker folded this into ClanSettingsDelta::DeleteMember::~DeleteMember(), which has identical code
    ClanSettingsDelta::SetMemberExtraInfo::~SetMemberExtraInfo();

    // 0x100269ad0: the linker folded this into ClanSettingsDelta::DeleteMember::~DeleteMember(), which has identical code
    ClanSettingsDelta::SetExtraSettingLong::~SetExtraSettingLong();

    // 0x100269ad0: the linker folded this into ClanSettingsDelta::DeleteMember::~DeleteMember(), which has identical code
    ClanSettingsDelta::SetExtraSettingIntVarbit::~SetExtraSettingIntVarbit();

    // 0x100269ad0: the linker folded this into ClanSettingsDelta::DeleteMember::~DeleteMember(), which has identical code
    ClanSettingsDelta::UpdateClanSettingsBaseSettings::~UpdateClanSettingsBaseSettings();

    // 0x100269ad0: the linker folded this into ClanSettingsDelta::DeleteMember::~DeleteMember(), which has identical code
    ClanSettingsDelta::SetOwner::~SetOwner();

    // 0x100269ae0: the linker folded this into ClanSettingsDelta::DeleteMember::~DeleteMember(), which has identical code
    ClanSettingsDelta::DeleteBanned::~DeleteBanned();

    // 0x100269ae0: the linker folded this into ClanSettingsDelta::DeleteMember::~DeleteMember(), which has identical code
    ClanSettingsDelta::SetMemberRank::~SetMemberRank();

    // 0x100269ae0: the linker folded this into ClanSettingsDelta::DeleteMember::~DeleteMember(), which has identical code
    ClanSettingsDelta::SetMemberMuted::~SetMemberMuted();

    // 0x100269ae0: the linker folded this into ClanSettingsDelta::DeleteMember::~DeleteMember(), which has identical code
    ClanSettingsDelta::SetExtraSettingInt::~SetExtraSettingInt();

    // 0x100269ae0: the linker folded this into ClanSettingsDelta::DeleteMember::~DeleteMember(), which has identical code
    ClanSettingsDelta::SetMemberExtraInfo::~SetMemberExtraInfo();

    // 0x100269ae0: the linker folded this into ClanSettingsDelta::DeleteMember::~DeleteMember(), which has identical code
    ClanSettingsDelta::SetExtraSettingLong::~SetExtraSettingLong();

    // 0x100269ae0: the linker folded this into ClanSettingsDelta::DeleteMember::~DeleteMember(), which has identical code
    ClanSettingsDelta::SetExtraSettingIntVarbit::~SetExtraSettingIntVarbit();

    // 0x100269ae0: the linker folded this into ClanSettingsDelta::DeleteMember::~DeleteMember(), which has identical code
    ClanSettingsDelta::UpdateClanSettingsBaseSettings::~UpdateClanSettingsBaseSettings();

    // 0x100269ae0: the linker folded this into ClanSettingsDelta::DeleteMember::~DeleteMember(), which has identical code
    ClanSettingsDelta::SetOwner::~SetOwner();

    // 0x10026a060: the linker folded this into ClanSettingsDelta::DeleteMember::~DeleteMember(), which has identical code
    ClanSettingsDelta::DeleteBanned::~DeleteBanned();

    // 0x10026a060: the linker folded this into ClanSettingsDelta::DeleteMember::~DeleteMember(), which has identical code
    ClanSettingsDelta::SetMemberRank::~SetMemberRank();

    // 0x10026a060: the linker folded this into ClanSettingsDelta::DeleteMember::~DeleteMember(), which has identical code
    ClanSettingsDelta::SetMemberMuted::~SetMemberMuted();

    // 0x10026a060: the linker folded this into ClanSettingsDelta::DeleteMember::~DeleteMember(), which has identical code
    ClanSettingsDelta::SetExtraSettingInt::~SetExtraSettingInt();

    // 0x10026a060: the linker folded this into ClanSettingsDelta::DeleteMember::~DeleteMember(), which has identical code
    ClanSettingsDelta::SetMemberExtraInfo::~SetMemberExtraInfo();

    // 0x10026a060: the linker folded this into ClanSettingsDelta::DeleteMember::~DeleteMember(), which has identical code
    ClanSettingsDelta::SetExtraSettingLong::~SetExtraSettingLong();

    // 0x10026a060: the linker folded this into ClanSettingsDelta::DeleteMember::~DeleteMember(), which has identical code
    ClanSettingsDelta::SetExtraSettingIntVarbit::~SetExtraSettingIntVarbit();

    // 0x10026a060: the linker folded this into ClanSettingsDelta::DeleteMember::~DeleteMember(), which has identical code
    ClanSettingsDelta::UpdateClanSettingsBaseSettings::~UpdateClanSettingsBaseSettings();

    // 0x10026a060: the linker folded this into ClanSettingsDelta::DeleteMember::~DeleteMember(), which has identical code
    ClanSettingsDelta::SetOwner::~SetOwner();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    ClanSettingsDelta::ClanSettingsDeltaEntry::~ClanSettingsDeltaEntry();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    ClanSettingsDelta::ClanSettingsDeltaEntry::~ClanSettingsDeltaEntry();

} // namespace jag::oldscape::rs2lib::social

namespace jag {
    // 0x100262450, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>::type make_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMember, long long&, eastl::string&, int&>(long long&, eastl::string&, int&)
    jag* jag::make_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMember, long long&, eastl::string&, int&>(
        longlong* param_1, basic_string* param_2, int* param_3) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        AddMember* local_40[2];

        pvVar1 = (void*)aligned_alloc(112, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] =
                placement_new<oldscape::rs2lib::social::ClanSettingsDelta::AddMember, long long&, eastl::string&, int&>(
                    (void*)((long)pvVar1 + 32), param_1, param_2, param_3);
            local_44 = 1;
            prVar2 =
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::AddMember*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100262620, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>::type make_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember, int&>(int&)
    jag* make_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember, int&>(int* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        DeleteMember* local_30[2];

        pvVar1 = (void*)aligned_alloc(72, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember, int&>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 =
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x100262740, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank>::type make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank, int&, signed char&>(int&, signed char&)
    jag* make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank, int&, signed char&>(int* param_1,
                                                                                                     signed* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        SetMemberRank* local_38[2];

        pvVar1 = (void*)aligned_alloc(72, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank, int&, signed char&>(
                (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank>, int,
                                   oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank*&>(pvVar1, &local_3c,
                                                                                                 local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x100262870, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner>::type make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner, int&>(int&)
    jag* make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner, int&>(int* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        SetOwner* local_30[2];

        pvVar1 = (void*)aligned_alloc(72, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner, int&>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 =
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::SetOwner*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x1002629a0, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>::type make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo, int&, int&, unsigned int&, unsigned int&>(int&, int&, unsigned int&, unsigned int&)
    jag* jag::make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo, int&, int&, unsigned int&,
                          unsigned int&>(int* param_1, int* param_2, uint* param_3, uint* param_4) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        SetMemberExtraInfo* local_40[2];

        pvVar1 = (void*)aligned_alloc(80, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo, int&, int&,
                                        unsigned int&, unsigned int&>((void*)((long)pvVar1 + 32), param_1, param_2,
                                                                      param_3, param_4);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>,
                                   int, oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo*&>(
                pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100262ae0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted>::type make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted, int&, bool&>(int&, bool&)
    jag* make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted, int&, bool&>(int* param_1,
                                                                                               bool* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        SetMemberMuted* local_38[2];

        pvVar1 = (void*)aligned_alloc(72, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted, int&, bool&>(
                (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted>, int,
                                   oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted*&>(pvVar1, &local_3c,
                                                                                                  local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x100262c10, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>::type make_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned, long long&, eastl::string&>(long long&, eastl::string&)
    jag* jag::make_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned, long long&, eastl::string&>(
        longlong* param_1, basic_string* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        AddBanned* local_38[2];

        pvVar1 = (void*)aligned_alloc(104, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] =
                placement_new<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned, long long&, eastl::string&>(
                    (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 =
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::AddBanned*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x100262d40, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned>::type make_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned, int&>(int&)
    jag* make_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned, int&>(int* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        DeleteBanned* local_30[2];

        pvVar1 = (void*)aligned_alloc(72, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned, int&>(
                (void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 =
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned*&>(pvVar1, &local_34, local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x100262e60, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName>::type make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName, eastl::string&, int&>(eastl::string&, int&)
    jag* jag::make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName, eastl::string&, int&>(
        basic_string* param_1, int* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        SetClanName* local_38[2];

        pvVar1 = (void*)aligned_alloc(104, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName, eastl::string&, int&>(
                (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 =
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::SetClanName*&>(pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x100262f80, 160 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings>::type make_shared<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings, oldscape::rs2lib::social::ClanSettings&>(oldscape::rs2lib::social::ClanSettings&)
    jag* jag::make_shared<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings,
                          oldscape::rs2lib::social::ClanSettings&>(ClanSettings* param_1) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_34;
        UpdateClanSettingsBaseSettings* local_30[2];

        pvVar1 = (void*)aligned_alloc(72, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_30[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings,
                                        oldscape::rs2lib::social::ClanSettings&>((void*)((long)pvVar1 + 32), param_1);
            local_34 = 1;
            prVar2 = placement_new<
                ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings>, int,
                oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings*&>(pvVar1, &local_34,
                                                                                               local_30);
            prVar2->~AutoSingleton(local_30[0]);
            prVar2->~AutoSingleton(local_30[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_30[0]);
        }
        return this;
    }

    // 0x1002630a0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt>::type make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt, int&, int&>(int&, int&)
    jag* make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt, int&, int&>(int* param_1,
                                                                                                  int* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        SetExtraSettingInt* local_38[2];

        pvVar1 = (void*)aligned_alloc(72, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt, int&, int&>(
                (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt>,
                                   int, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt*&>(
                pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x1002631e0, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit>::type make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit, int&, int&, unsigned int&, unsigned int&>(int&, int&, unsigned int&, unsigned int&)
    jag* jag::make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit, int&, int&,
                          unsigned int&, unsigned int&>(int* param_1, int* param_2, uint* param_3, uint* param_4) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        SetExtraSettingIntVarbit* local_40[2];

        pvVar1 = (void*)aligned_alloc(80, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit, int&,
                                        int&, unsigned int&, unsigned int&>((void*)((long)pvVar1 + 32), param_1,
                                                                            param_2, param_3, param_4);
            local_44 = 1;
            prVar2 =
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit>,
                              int, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit*&>(
                    pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100263320, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong>::type make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong, int&, long long&>(int&, long long&)
    jag* jag::make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong, int&, long long&>(
        int* param_1, longlong* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        SetExtraSettingLong* local_38[2];

        pvVar1 = (void*)aligned_alloc(80, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] =
                placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong, int&, long long&>(
                    (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong>,
                                   int, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong*&>(
                pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x100263450, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString>::type make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString, int&, eastl::string&>(int&, eastl::string&)
    jag* jag::make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString, int&, eastl::string&>(
        int* param_1, basic_string* param_2) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_3c;
        SetExtraSettingString* local_38[2];

        pvVar1 = (void*)aligned_alloc(104, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_38[0] =
                placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString, int&, eastl::string&>(
                    (void*)((long)pvVar1 + 32), param_1, param_2);
            local_3c = 1;
            prVar2 =
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString>,
                              int, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString*&>(
                    pvVar1, &local_3c, local_38);
            prVar2->~AutoSingleton(local_38[0]);
            prVar2->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_38[0]);
        }
        return this;
    }

    // 0x100263500, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>::type make_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>()
    jag* make_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        AddBanned* local_28[2];

        pvVar1 = (void*)aligned_alloc(104, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] =
                placement_new<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 =
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddBanned>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::AddBanned*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x1002635d0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1>::type make_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1>()
    jag* make_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        AddMemberOldV1* local_28[2];

        pvVar1 = (void*)aligned_alloc(104, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] =
                placement_new<oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1>, int,
                                   oldscape::rs2lib::social::ClanSettingsDelta::AddMemberOldV1*&>(pvVar1, &local_2c,
                                                                                                  local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x100263660, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>::type make_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>()
    jag* make_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        AddMember* local_28[2];

        pvVar1 = (void*)aligned_alloc(112, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] =
                placement_new<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 =
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::AddMember>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::AddMember*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x1002636f0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings>::type make_shared<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings>()
    jag* make_shared<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        UpdateClanSettingsBaseSettings* local_28[2];

        pvVar1 = (void*)aligned_alloc(72, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings>(
                (void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<
                ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings>, int,
                oldscape::rs2lib::social::ClanSettingsDelta::UpdateClanSettingsBaseSettings*&>(pvVar1, &local_2c,
                                                                                               local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x100263780, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned>::type make_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned>()
    jag* make_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        DeleteBanned* local_28[2];

        pvVar1 = (void*)aligned_alloc(72, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] =
                placement_new<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 =
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::DeleteBanned*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x100263810, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>::type make_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>()
    jag* make_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        DeleteMember* local_28[2];

        pvVar1 = (void*)aligned_alloc(72, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] =
                placement_new<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 =
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x1002638a0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank>::type make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank>()
    jag* make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        SetMemberRank* local_28[2];

        pvVar1 = (void*)aligned_alloc(72, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] =
                placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank>, int,
                                   oldscape::rs2lib::social::ClanSettingsDelta::SetMemberRank*&>(pvVar1, &local_2c,
                                                                                                 local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x100263930, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>::type make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>()
    jag* make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        SetMemberExtraInfo* local_28[2];

        pvVar1 = (void*)aligned_alloc(80, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>(
                (void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo>,
                                   int, oldscape::rs2lib::social::ClanSettingsDelta::SetMemberExtraInfo*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x1002639c0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted>::type make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted>()
    jag* make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        SetMemberMuted* local_28[2];

        pvVar1 = (void*)aligned_alloc(72, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] =
                placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted>, int,
                                   oldscape::rs2lib::social::ClanSettingsDelta::SetMemberMuted*&>(pvVar1, &local_2c,
                                                                                                  local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x100263a50, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt>::type make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt>()
    jag* make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        SetExtraSettingInt* local_28[2];

        pvVar1 = (void*)aligned_alloc(72, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt>(
                (void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt>,
                                   int, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingInt*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x100263ae0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong>::type make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong>()
    jag* make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        SetExtraSettingLong* local_28[2];

        pvVar1 = (void*)aligned_alloc(80, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong>(
                (void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong>,
                                   int, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingLong*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x100263b70, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString>::type make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString>()
    jag* make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        SetExtraSettingString* local_28[2];

        pvVar1 = (void*)aligned_alloc(104, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString>(
                (void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 =
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString>,
                              int, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingString*&>(
                    pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x100263c00, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit>::type make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit>()
    jag* make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        SetExtraSettingIntVarbit* local_28[2];

        pvVar1 = (void*)aligned_alloc(80, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit>(
                (void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 =
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit>,
                              int, oldscape::rs2lib::social::ClanSettingsDelta::SetExtraSettingIntVarbit*&>(
                    pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x100263c90, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName>::type make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName>()
    jag* make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        SetClanName* local_28[2];

        pvVar1 = (void*)aligned_alloc(104, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] =
                placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 =
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetClanName>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::SetClanName*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x100263d20, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner>::type make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner>()
    jag* make_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        SetOwner* local_28[2];

        pvVar1 = (void*)aligned_alloc(72, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] =
                placement_new<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 =
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::SetOwner>, int,
                              oldscape::rs2lib::social::ClanSettingsDelta::SetOwner*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
