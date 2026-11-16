// libs/oldscape/rs2lib/social/clanchat/ClanChannelDelta.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "ClanChannelDelta.h"

namespace jag::oldscape::rs2lib::social {
    // 0x1000c46d0: the linker folded this into javapal::GameShell::GetClientType(), which has identical code
    ClanChannelDelta::UpdateUserDetailsV2::GetID() const;

    // 0x10025b310, 160 bytes, base-object constructor, placed by class name and debug map
    // ClanChannelDelta::AddUser::AddUser(long long, eastl::string, int, signed char, long long)
    void ClanChannelDelta::AddUser::AddUser(long param_1, basic_string* param_3, uint param_4, char param_5,
                                            undefined8 param_6) {
        new (this) ClanChannelDeltaEntry();
        field_0 = &PTR__AddUser_100ef8210;
        field_32 = -1;
        new (&field_40) eastl::string();
        field_32 = param_1;
        eastl::string::operator=((eastl::string*)&field_40, param_3);
        field_72 = param_4;
        field_76 = param_5;
        field_80 = param_6;
    }

    // 0x10025b3f0, 16 bytes, complete-object constructor, placed by class name and debug map
    // ClanChannelDelta::AddUser::AddUser(long long, eastl::string, int, signed char, long long): jumps straight to the base-object constructor

    // 0x10025b400, 272 bytes, placed by class name and debug map
    // ClanChannelDelta::AddUser::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ClanChannelDelta::AddUser::Decode(PacketJ* param_1) {
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
        cVar1 = param_1->g1();
        field_76 = cVar1;
        uVar4 = param_1->g8();
        field_80 = uVar4;
        if ((ClanChannel::m_verbose != '\0') && (ClanChannel::m_fluttered == '\0')) {
            uVar4 = logger::default_logger();
            lVar3 = field_32;
            uVar5 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar4, 0, 5,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "social/clanchat/ClanChannelDelta.cpp",
                                38, "memberhash: %i membername: %s", (int)lVar3, uVar5);
        }
    }

    // 0x10025b510, 256 bytes, placed by class name and debug map
    // ClanChannelDelta::AddUser::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, bool, bool)
    void ClanChannelDelta::AddUser::Encode(PacketJ* param_1, bool param_2, bool param_3) {
        long lVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined7 in_register_00000009;
        undefined7 in_register_00000011;

        if ((int)CONCAT71(in_register_00000011, param_2) == 0) {
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, 255,
                CONCAT71(in_register_00000011, param_2), CONCAT71(in_register_00000009, param_3));
        } else {
            if (field_32 == -1) {
                uVar2 = logger::default_logger();
                logger::Logger::Log(uVar2, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/"
                                    "rs2lib/social/clanchat/ClanChannelDelta.cpp",
                                    48, "addMember.encode() was asked to storeUserHashes but userhash not present!");
            }
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<long long>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_32);
        }
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
            eastl::basic_string<char, BucketAllocatorEASTL>>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, (basic_string*)&field_40, false);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_72);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<signed char>(param_1, (int)field_76);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<long long>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_80);
        if ((ClanChannel::m_verbose != '\0') && (ClanChannel::m_fluttered == '\0')) {
            uVar2 = logger::default_logger();
            lVar1 = field_32;
            uVar3 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar2, 0, 5,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "social/clanchat/ClanChannelDelta.cpp",
                                63, "memberhash: %i membername: %s", (int)lVar1, uVar3);
        }
    }

    // 0x10025b610, 224 bytes, placed by class name and debug map
    // ClanChannelDelta::AddUser::Apply(ClanChannel&)
    void ClanChannelDelta::AddUser::Apply(ClanChannel* param_1) {
        char cVar1;
        uint uVar2;
        undefined8 uVar3;
        long* plVar4;
        long lVar5;
        DisplayName local_78;
        shared_ptr local_38;

        make_shared<ClanChannelUser>((jag*)&local_38);
        lVar5 = field_32;
        plVar4 = (long*)shared_ptr<ClanChannelUser>::operator->((shared_ptr<ClanChannelUser>*)&local_38);
        *plVar4 = lVar5;
        new (&local_78) DisplayName((basic_string*)&field_40);
        lVar5 = shared_ptr<ClanChannelUser>::operator->((shared_ptr<ClanChannelUser>*)&local_38);
        DisplayName::operator=((DisplayName*)(lVar5 + 16), &local_78);
        local_78.~pair();
        uVar2 = field_72;
        lVar5 = shared_ptr<ClanChannelUser>::operator->((shared_ptr<ClanChannelUser>*)&local_38);
        *(uint*)(lVar5 + 12) = uVar2;
        cVar1 = field_76;
        lVar5 = shared_ptr<ClanChannelUser>::operator->((shared_ptr<ClanChannelUser>*)&local_38);
        *(char*)(lVar5 + 8) = cVar1;
        uVar3 = field_80;
        lVar5 = shared_ptr<ClanChannelUser>::operator->((shared_ptr<ClanChannelUser>*)&local_38);
        *(undefined8*)(lVar5 + 80) = uVar3;
        param_1->DoAddUser(&local_38);
        local_38.~shared_ptr();
    }

    // 0x10025b6f0, 64 bytes, base-object constructor, placed by class name and debug map
    // ClanChannelDelta::DeleteUser::DeleteUser(int, int, long long)
    void ClanChannelDelta::DeleteUser::DeleteUser(int param_1, int param_2, longlong param_3) {
        new (this) ClanChannelDeltaEntry();
        field_0 = &PTR__DeleteUser_100ef8250;
        field_32 = param_1;
        field_36 = param_2;
        field_40 = param_3;
    }

    // 0x10025b730, 16 bytes, complete-object constructor, placed by class name and debug map
    // ClanChannelDelta::DeleteUser::DeleteUser(int, int, long long): jumps straight to the base-object constructor

    // 0x10025b740, 96 bytes, placed by class name and debug map
    // ClanChannelDelta::DeleteUser::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ClanChannelDelta::DeleteUser::Decode(PacketJ* param_1) {
        byte bVar1;
        char cVar2;
        ushort uVar3;
        long lVar4;
        longlong lVar5;

        uVar3 = param_1->g2();
        field_32 = (uint)uVar3;
        bVar1 = param_1->g1();
        field_36 = (uint)bVar1;
        cVar2 = param_1->g1();
        if (cVar2 != -1) {
            lVar4 = param_1->size();
            param_1->SetPos(lVar4 - 1);
            lVar5 = param_1->g8();
            field_40 = lVar5;
        }
    }

    // 0x10025b7a0, 96 bytes, placed by class name and debug map
    // ClanChannelDelta::DeleteUser::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, bool, bool)
    void ClanChannelDelta::DeleteUser::Encode(PacketJ* param_1, bool param_2, bool param_3) {
        undefined3 in_register_00000011;

        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_32);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_36);
        if ((CONCAT31(in_register_00000011, param_2) == 0) || (field_40 == -1)) {
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, 255);
        } else {
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<long long>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_40);
        }
    }

    // 0x10025b800, 32 bytes, placed by class name and debug map
    // ClanChannelDelta::DeleteUser::Apply(ClanChannel&)
    void ClanChannelDelta::DeleteUser::Apply(ClanChannel* param_1) {
        param_1->DoDeleteUser(field_32);
    }

    // 0x10025b820, 160 bytes, base-object constructor, placed by class name and debug map
    // ClanChannelDelta::UpdateUserDetails::UpdateUserDetails(int, signed char, int, long long, eastl::string)
    void ClanChannelDelta::UpdateUserDetails::UpdateUserDetails(uint param_1, char param_3, uint param_4,
                                                                undefined8 param_5, basic_string* param_6) {
        new (this) ClanChannelDeltaEntry();
        field_0 = &PTR__UpdateUserDetails_100ef8290;
        field_32 = 4294967295;
        new (&field_56) eastl::string();
        field_32 = param_1;
        field_36 = param_3;
        field_40 = param_4;
        field_48 = param_5;
        eastl::string::operator=((eastl::string*)&field_56, param_6);
    }

    // 0x10025b8c0, 16 bytes, complete-object constructor, placed by class name and debug map
    // ClanChannelDelta::UpdateUserDetails::UpdateUserDetails(int, signed char, int, long long, eastl::string): jumps straight to the base-object constructor

    // 0x10025b8d0, 144 bytes, placed by class name and debug map
    // ClanChannelDelta::UpdateUserDetails::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ClanChannelDelta::UpdateUserDetails::Decode(PacketJ* param_1) {
        char cVar1;
        ushort uVar2;
        undefined8 uVar3;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_40[32];

        uVar2 = param_1->g2();
        field_32 = (uint)uVar2;
        cVar1 = param_1->g1();
        field_36 = cVar1;
        uVar2 = param_1->g2();
        field_40 = (uint)uVar2;
        uVar3 = param_1->g8();
        field_48 = uVar3;
        local_40->gStringNoConversion(SUB81(param_1, 0));
        eastl::string::operator=((eastl::string*)&field_56, (basic_string*)local_40);
        local_40->~basic_string();
    }

    // 0x10025b960, 96 bytes, placed by class name and debug map
    // ClanChannelDelta::UpdateUserDetails::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, bool, bool)
    void ClanChannelDelta::UpdateUserDetails::Encode(PacketJ* param_1, bool param_2, bool param_3) {
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_32);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<signed char>(param_1, (int)field_36);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_40);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<long long>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_48);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
            eastl::basic_string<char, BucketAllocatorEASTL>>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, (basic_string*)&field_56, false);
    }

    // 0x10025b9c0, 208 bytes, placed by class name and debug map
    // ClanChannelDelta::UpdateUserDetails::Apply(ClanChannel&)
    void ClanChannelDelta::UpdateUserDetails::Apply(ClanChannel* param_1) {
        char cVar1;
        uint uVar2;
        undefined8 uVar3;
        shared_ptr* psVar4;
        long lVar5;
        DisplayName local_70;
        shared_ptr<dash3d::Decor> local_30[16];

        psVar4 = (shared_ptr*)eastl::vector<shared_ptr<ClanChannelUser>, eastl::allocator>::operator[](
            (vector<shared_ptr<ClanChannelUser>, eastl::allocator>*)&param_1->field_48, (long)(int)field_32);
        shared_ptr<dash3d::Decor>::shared_ptr(local_30, psVar4);
        cVar1 = field_36;
        lVar5 = shared_ptr<ClanChannelUser>::operator->((shared_ptr<ClanChannelUser>*)local_30);
        *(char*)(lVar5 + 8) = cVar1;
        uVar2 = field_40;
        lVar5 = shared_ptr<ClanChannelUser>::operator->((shared_ptr<ClanChannelUser>*)local_30);
        *(uint*)(lVar5 + 12) = uVar2;
        uVar3 = field_48;
        lVar5 = shared_ptr<ClanChannelUser>::operator->((shared_ptr<ClanChannelUser>*)local_30);
        *(undefined8*)(lVar5 + 80) = uVar3;
        new (&local_70) DisplayName((basic_string*)&field_56);
        lVar5 = shared_ptr<ClanChannelUser>::operator->((shared_ptr<ClanChannelUser>*)local_30);
        DisplayName::operator=((DisplayName*)(lVar5 + 16), &local_70);
        local_70.~pair();
        local_30->~shared_ptr();
    }

    // 0x10025ba90, 160 bytes, base-object constructor, placed by class name and debug map
    // ClanChannelDelta::UpdateUserDetailsV2::UpdateUserDetailsV2(int, signed char, int, long long, eastl::string, bool)
    void ClanChannelDelta::UpdateUserDetailsV2::UpdateUserDetailsV2(uint param_1, char param_3, uint param_4,
                                                                    undefined8 param_5, basic_string* param_6,
                                                                    bool param_7) {
        new (this) ClanChannelDeltaEntry();
        field_0 = &PTR__UpdateUserDetailsV2_100ef82d0;
        field_32 = 4294967295;
        new (&field_56) eastl::string();
        field_32 = param_1;
        field_36 = param_3;
        field_40 = param_4;
        field_48 = param_5;
        eastl::string::operator=((eastl::string*)&field_56, param_6);
        field_88 = param_7;
    }

    // 0x10025bb30, 32 bytes, complete-object constructor, placed by class name and debug map
    // ClanChannelDelta::UpdateUserDetailsV2::UpdateUserDetailsV2(int, signed char, int, long long, eastl::string, bool)
    void ClanChannelDelta::UpdateUserDetailsV2::UpdateUserDetailsV2() {
        UpdateUserDetailsV2();
    }

    // 0x10025bb50, 176 bytes, placed by class name and debug map
    // ClanChannelDelta::UpdateUserDetailsV2::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ClanChannelDelta::UpdateUserDetailsV2::Decode(PacketJ* param_1) {
        char cVar1;
        ushort uVar2;
        undefined8 uVar3;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_40[32];

        param_1->g1();
        uVar2 = param_1->g2();
        field_32 = (uint)uVar2;
        cVar1 = param_1->g1();
        field_36 = cVar1;
        uVar2 = param_1->g2();
        field_40 = (uint)uVar2;
        uVar3 = param_1->g8();
        field_48 = uVar3;
        local_40->gStringNoConversion(SUB81(param_1, 0));
        eastl::string::operator=((eastl::string*)&field_56, (basic_string*)local_40);
        local_40->~basic_string();
        cVar1 = param_1->g1();
        field_88 = cVar1 == '\x01';
    }

    // 0x10025bc00, 112 bytes, placed by class name and debug map
    // ClanChannelDelta::UpdateUserDetailsV2::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, bool, bool)
    void ClanChannelDelta::UpdateUserDetailsV2::Encode(PacketJ* param_1, bool param_2, bool param_3) {
        undefined7 in_register_00000011;

        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, 1, CONCAT71(in_register_00000011, param_2));
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_32);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<signed char>(param_1, (int)field_36);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_40);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<long long>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_48);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
            eastl::basic_string<char, BucketAllocatorEASTL>>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, (basic_string*)&field_56, false);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_88);
    }

    // 0x10025bc70, 224 bytes, placed by class name and debug map
    // ClanChannelDelta::UpdateUserDetailsV2::Apply(ClanChannel&)
    void ClanChannelDelta::UpdateUserDetailsV2::Apply(ClanChannel* param_1) {
        char cVar1;
        bool bVar2;
        uint uVar3;
        undefined8 uVar4;
        shared_ptr* psVar5;
        long lVar6;
        DisplayName local_70;
        shared_ptr<dash3d::Decor> local_30[16];

        psVar5 = (shared_ptr*)eastl::vector<shared_ptr<ClanChannelUser>, eastl::allocator>::operator[](
            (vector<shared_ptr<ClanChannelUser>, eastl::allocator>*)&param_1->field_48, (long)(int)field_32);
        shared_ptr<dash3d::Decor>::shared_ptr(local_30, psVar5);
        cVar1 = field_36;
        lVar6 = shared_ptr<ClanChannelUser>::operator->((shared_ptr<ClanChannelUser>*)local_30);
        *(char*)(lVar6 + 8) = cVar1;
        uVar3 = field_40;
        lVar6 = shared_ptr<ClanChannelUser>::operator->((shared_ptr<ClanChannelUser>*)local_30);
        *(uint*)(lVar6 + 12) = uVar3;
        uVar4 = field_48;
        lVar6 = shared_ptr<ClanChannelUser>::operator->((shared_ptr<ClanChannelUser>*)local_30);
        *(undefined8*)(lVar6 + 80) = uVar4;
        new (&local_70) DisplayName((basic_string*)&field_56);
        lVar6 = shared_ptr<ClanChannelUser>::operator->((shared_ptr<ClanChannelUser>*)local_30);
        DisplayName::operator=((DisplayName*)(lVar6 + 16), &local_70);
        local_70.~pair();
        bVar2 = field_88;
        lVar6 = shared_ptr<ClanChannelUser>::operator->((shared_ptr<ClanChannelUser>*)local_30);
        *(bool*)(lVar6 + 88) = bVar2;
        local_30->~shared_ptr();
    }

    // 0x10025bd50, 144 bytes, base-object constructor, placed by class name and debug map
    // ClanChannelDelta::UpdateClanChannelBaseSettings::UpdateClanChannelBaseSettings(eastl::string, bool, signed char, signed char)
    void ClanChannelDelta::UpdateClanChannelBaseSettings::UpdateClanChannelBaseSettings(basic_string* param_2,
                                                                                        bool param_3, char param_4,
                                                                                        char param_5) {
        new (this) ClanChannelDeltaEntry();
        field_0 = &PTR__UpdateClanChannelBaseSettings_100ef8310;
        new (&field_32) eastl::string();
        eastl::string::operator=((eastl::string*)&field_32, param_2);
        field_64 = param_3;
        field_65 = param_4;
        field_66 = param_5;
    }

    // 0x10025bde0, 16 bytes, complete-object constructor, placed by class name and debug map
    // ClanChannelDelta::UpdateClanChannelBaseSettings::UpdateClanChannelBaseSettings(eastl::string, bool, signed char, signed char): jumps straight to the base-object constructor

    // 0x10025bdf0, 144 bytes, placed by class name and debug map
    // ClanChannelDelta::UpdateClanChannelBaseSettings::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ClanChannelDelta::UpdateClanChannelBaseSettings::Decode(PacketJ* param_1) {
        long lVar1;
        char cVar2;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_48[32];

        local_48->gStringNoConversion(SUB81(param_1, 0));
        eastl::string::operator=((eastl::string*)&field_32, (basic_string*)local_48);
        local_48->~basic_string();
        lVar1 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (lVar1 != 0) {
            cVar2 = param_1->g1();
            field_64 = cVar2 == '\x01';
            cVar2 = param_1->g1();
            field_65 = cVar2;
            cVar2 = param_1->g1();
            field_66 = cVar2;
        }
    }

    // 0x10025be80, 208 bytes, placed by class name and debug map
    // ClanChannelDelta::UpdateClanChannelBaseSettings::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, bool, bool)
    void ClanChannelDelta::UpdateClanChannelBaseSettings::Encode(PacketJ* param_1, bool param_2, bool param_3) {
        long lVar1;
        allocator local_50[8];
        eastl::string local_48[32];

        lVar1 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (lVar1 == 0) {
            eastl::allocator::allocator(local_50, "EASTL basic_string");
            eastl::string::basic_string(local_48, "", local_50);
        } else {
            eastl::string::basic_string(local_48, (basic_string*)&field_32);
        }
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
            eastl::basic_string<char, BucketAllocatorEASTL>>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, (basic_string*)local_48, false);
        eastl::string::~basic_string(local_48);
        lVar1 = eastl::basic_string<char,
                                    eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size();
        if (lVar1 != 0) {
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_64);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<signed char>(param_1, (int)field_65);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<signed char>(param_1, (int)field_66);
        }
    }

    // 0x10025bf50, 80 bytes, placed by class name and debug map
    // ClanChannelDelta::UpdateClanChannelBaseSettings::Apply(ClanChannel&)
    void ClanChannelDelta::UpdateClanChannelBaseSettings::Apply(ClanChannel* param_1) {
        eastl::string::operator=((eastl::string*)&param_1->field_88, (basic_string*)&field_32);
        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 40ul, 1ul, 0ul, true, eastl::allocator>>::size() !=
            0) {
            param_1->field_120 = field_64;
            param_1->field_121 = field_65;
            param_1->field_122 = field_66;
        }
    }

    // 0x10025bfa0, 48 bytes, base-object constructor, placed by class name and debug map
    // ClanChannelDelta::ClanChannelDelta(ClanChannel&)
    void ClanChannelDelta::ClanChannelDelta(ClanChannel* param_1) {
        new (this) SharedPtrList<ClanChannelDelta::ClanChannelDeltaEntry>();
        field_24 = 18446744073709551615;
        field_16 = param_1->field_32;
        field_24 = param_1->field_80;
    }

    // 0x10025bfe0, 16 bytes, complete-object constructor, placed by class name and debug map
    // ClanChannelDelta::ClanChannelDelta(ClanChannel&): jumps straight to the base-object constructor

    // 0x10025bff0, 64 bytes, base-object constructor, placed by class name and debug map
    // ClanChannelDelta::ClanChannelDelta(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ClanChannelDelta::ClanChannelDelta(PacketJ* param_1) {
        new (this) SharedPtrList<ClanChannelDelta::ClanChannelDeltaEntry>();
        field_24 = 18446744073709551615;
        Decode(this, param_1);
    }

    // 0x10025c030, 544 bytes, placed by class name and debug map
    // ClanChannelDelta::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ClanChannelDelta::Decode(PacketJ* param_1) {
        char cVar1;
        undefined8 uVar2;
        long* plVar3;
        shared_ptr* psVar4;
        char* pcVar5;
        shared_ptr local_50;
        shared_ptr local_40;

        psVar4 = (shared_ptr*)param_1;
        uVar2 = param_1->g8();
        field_16 = uVar2;
        uVar2 = param_1->g8();
        field_24 = uVar2;
        cVar1 = param_1->g1();
        if (cVar1 != '\0') {
            do {
                new (&local_50) shared_ptr<worldmap::WorldmapAreaMetadata>(psVar4);
                switch (cVar1) {
                case '\x01':
                    make_shared<ClanChannelDelta::AddUser>((jag*)&local_40);
                    shared_ptr<ClanChannelDelta::ClanChannelDeltaEntry>::operator=(
                        (shared_ptr<ClanChannelDelta::ClanChannelDeltaEntry>*)&local_50, &local_40);
                    local_40.~shared_ptr();
                    break;
                case '\x02':
                    make_shared<ClanChannelDelta::UpdateUserDetails>((jag*)&local_40);
                    shared_ptr<ClanChannelDelta::ClanChannelDeltaEntry>::operator=(
                        (shared_ptr<ClanChannelDelta::ClanChannelDeltaEntry>*)&local_50, &local_40);
                    local_40.~shared_ptr();
                    break;
                case '\x03':
                    make_shared<ClanChannelDelta::DeleteUser>((jag*)&local_40);
                    shared_ptr<ClanChannelDelta::ClanChannelDeltaEntry>::operator=(
                        (shared_ptr<ClanChannelDelta::ClanChannelDeltaEntry>*)&local_50, &local_40);
                    local_40.~shared_ptr();
                    break;
                case '\x04':
                    make_shared<ClanChannelDelta::UpdateClanChannelBaseSettings>((jag*)&local_40);
                    shared_ptr<ClanChannelDelta::ClanChannelDeltaEntry>::operator=(
                        (shared_ptr<ClanChannelDelta::ClanChannelDeltaEntry>*)&local_50, &local_40);
                    local_40.~shared_ptr();
                    break;
                case '\x05':
                    make_shared<ClanChannelDelta::UpdateUserDetailsV2>((jag*)&local_40);
                    shared_ptr<ClanChannelDelta::ClanChannelDeltaEntry>::operator=(
                        (shared_ptr<ClanChannelDelta::ClanChannelDeltaEntry>*)&local_50, &local_40);
                    local_40.~shared_ptr();
                    break;
                default:
                    uVar2 = logger::default_logger();
                    pcVar5 = "";
                    if (ClanChannel::m_fluttered == '\0') {
                        pcVar5 = "Unrecognised ClanChannelDelta type in decode()";
                    }
                    logger::Logger::Log(uVar2, 0, 8,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "oldscape/rs2lib/social/clanchat/ClanChannelDelta.cpp",
                                        304, pcVar5);
                }
                plVar3 = (long*)shared_ptr<ClanChannelDelta::ClanChannelDeltaEntry>::operator->(
                    (shared_ptr<ClanChannelDelta::ClanChannelDeltaEntry>*)&local_50);
                (**(code**)(*plVar3 + 24))(plVar3, param_1);
                psVar4 = &local_50;
                push(&local_50);
                cVar1 = param_1->g1();
                local_50.~shared_ptr();
            } while (cVar1 != '\0');
        }
    }

    // 0x10025c250, 16 bytes, complete-object constructor, placed by class name and debug map
    // ClanChannelDelta::ClanChannelDelta(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&): jumps straight to the base-object constructor

    // 0x10025c260, 160 bytes, placed by class name and debug map
    // ClanChannelDelta::AddUserToEntryList(long long, eastl::string, int, signed char, long long)
    void ClanChannelDelta::AddUserToEntryList(longlong param_1, basic_string* param_3, int param_4, signed param_5,
                                              longlong param_6) {
        shared_ptr local_50;
        longlong local_40;
        longlong local_38;
        shared_ptr local_30;
        int local_20;
        signed local_19;

        local_40 = param_1;
        local_38 = param_6;
        local_20 = param_4;
        local_19 = param_5;
        make_shared<ClanChannelDelta::AddUser, long long&, eastl::string&, int&, signed char&, long long&>(
            (jag*)&local_50, &local_40, param_3, &local_20, &local_19, &local_38);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_30, &local_50);
        local_50.~shared_ptr();
        push(&local_30);
        local_30.~shared_ptr();
    }

    // 0x10025c460, 144 bytes, placed by class name and debug map
    // ClanChannelDelta::DeleteUserInEntryList(int, int, long long)
    void ClanChannelDelta::DeleteUserInEntryList(int param_1, int param_2, longlong param_3) {
        shared_ptr local_48;
        longlong local_38;
        shared_ptr local_30;
        int local_20;
        int local_1c;

        local_38 = param_3;
        local_20 = param_1;
        local_1c = param_2;
        make_shared<ClanChannelDelta::DeleteUser, int&, int&, long long&>((jag*)&local_48, &local_20, &local_1c,
                                                                          &local_38);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_30, &local_48);
        local_48.~shared_ptr();
        push(&local_30);
        local_30.~shared_ptr();
    }

    // 0x10025c5a0, 160 bytes, placed by class name and debug map
    // ClanChannelDelta::UpdateUserDetailsInEntryList(int, signed char, int, long long, eastl::string, bool)
    void ClanChannelDelta::UpdateUserDetailsInEntryList(int param_1, signed param_3, int param_4, longlong param_5,
                                                        basic_string* param_6, undefined1 param_7) {
        shared_ptr local_50;
        longlong local_40;
        shared_ptr local_38;
        int local_24;
        int local_20;
        signed local_1a;
        bool local_19;

        local_19 = (bool)param_7;
        local_40 = param_5;
        local_24 = param_1;
        local_20 = param_4;
        local_1a = param_3;
        make_shared<ClanChannelDelta::UpdateUserDetailsV2, int&, signed char&, int&, long long&, eastl::string&, bool&>(
            (jag*)&local_50, &local_24, &local_1a, &local_20, &local_40, param_6, &local_19);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_38, &local_50);
        local_50.~shared_ptr();
        push(&local_38);
        local_38.~shared_ptr();
    }

    // 0x10025c710, 144 bytes, placed by class name and debug map
    // ClanChannelDelta::UpdateBaseSettingsInEntryList(eastl::string, bool, signed char, signed char)
    void ClanChannelDelta::UpdateBaseSettingsInEntryList(basic_string* param_2, undefined1 param_3, signed param_4,
                                                         signed param_5) {
        shared_ptr local_40;
        shared_ptr local_30;
        bool local_1b;
        signed local_1a;
        signed local_19;

        local_1b = (bool)param_3;
        local_1a = param_4;
        local_19 = param_5;
        make_shared<ClanChannelDelta::UpdateClanChannelBaseSettings, eastl::string&, bool&, signed char&, signed char&>(
            (jag*)&local_40, param_2, &local_1b, &local_1a, &local_19);
        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)&local_30, &local_40);
        local_40.~shared_ptr();
        push(&local_30);
        local_30.~shared_ptr();
    }

    // 0x10025cbb0, 224 bytes, placed by class name and debug map
    // ClanChannelDelta::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, bool, bool)
    void ClanChannelDelta::Encode(PacketJ* param_1, bool param_2, bool param_3) {
        bool bVar1;
        undefined4 uVar2;
        long* plVar3;
        hashtable_iterator_base* extraout_RDX;
        undefined1 auVar4[16];
        undefined8 local_40;
        undefined8 local_38;

        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<long long>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_16);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<long long>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_24);
        local_40 = begin();
        auVar4 = end();
        local_38 = auVar4._0_8_;
        bVar1 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_38, auVar4._8_8_);
        if (bVar1) {
            do {
                plVar3 = (long*)local_40.HeapBeginPtr();
                uVar2 = (**(code**)(*plVar3 + 16))(plVar3);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                    (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, uVar2);
                (**(code**)(*plVar3 + 32))(plVar3, param_1, param_2, param_3);
                SharedPtrList<ClanSettingsDelta::ClanSettingsDeltaEntry>::obj_iterator::operator++(
                    (obj_iterator*)&local_40);
                bVar1 = eastl::operator!=((eastl*)&local_40, (hashtable_iterator_base*)&local_38, extraout_RDX);
            } while (bVar1);
        }
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, 0);
    }

    // 0x10025cd20, 416 bytes, placed by class name and debug map
    // ClanChannelDelta::ApplyToClanChannel(ClanChannel&)
    void ClanChannelDelta::ApplyToClanChannel(ClanChannel* param_1) {
        bool bVar1;
        long* plVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        hashtable_iterator_base* extraout_RDX;
        char* pcVar5;
        undefined1 auVar6[16];
        undefined8 local_48[4];
        undefined8 local_28;

        if ((param_1->field_32 != field_16) || (param_1->field_80 != field_24)) {
            new (local_48) eastl::string();
            pcVar5 = "";
            if (ClanChannel::m_fluttered == '\0') {
                pcVar5 = "ClanChannelDelta.applyToClanChannel(): Credentials do not match! ";
            }
            eastl::string::append_sprintf((char*)local_48, &DAT_100e377c0, pcVar5);
            eastl::string::append_sprintf((char*)local_48, " cc.clanHash:%lld", param_1->field_32);
            eastl::string::append_sprintf((char*)local_48, " cc.updateNum:%lld", param_1->field_80);
            eastl::string::append_sprintf((char*)local_48, " clanHash:%lld", field_16);
            eastl::string::append_sprintf((char*)local_48, " updateNum:%lld", field_24);
            uVar3 = logger::default_logger();
            uVar4 = eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            logger::Logger::Log(uVar3, 0, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "social/clanchat/ClanChannelDelta.cpp",
                                338, uVar4);
            /* WARNING: Subroutine does not return */
            LogAssert("false",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/social/"
                      "clanchat/ClanChannelDelta.cpp",
                      339, (char*)0);
        }
        local_48[0] = begin();
        auVar6 = end();
        local_28 = auVar6._0_8_;
        bVar1 = eastl::operator!=((eastl*)local_48, (hashtable_iterator_base*)&local_28, auVar6._8_8_);
        if (bVar1) {
            do {
                plVar2 = (long*)local_48->HeapBeginPtr();
                (**(code**)(*plVar2 + 40))(plVar2, param_1);
                SharedPtrList<ClanSettingsDelta::ClanSettingsDeltaEntry>::obj_iterator::operator++(
                    (obj_iterator*)local_48);
                bVar1 = eastl::operator!=((eastl*)local_48, (hashtable_iterator_base*)&local_28, extraout_RDX);
            } while (bVar1);
        }
        param_1->field_80 = param_1->field_80 + 1;
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    ClanChannelDelta::ClanChannelDeltaEntry::~ClanChannelDeltaEntry();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    ClanChannelDelta::ClanChannelDeltaEntry::~ClanChannelDeltaEntry();

} // namespace jag::oldscape::rs2lib::social

namespace jag {
    // 0x10025c300, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelDelta::AddUser>::type make_shared<oldscape::rs2lib::social::ClanChannelDelta::AddUser, long long&, eastl::string&, int&, signed char&, long long&>(long long&, eastl::string&, int&, signed char&, long long&)
    jag* jag::make_shared<oldscape::rs2lib::social::ClanChannelDelta::AddUser, long long&, eastl::string&, int&,
                          signed char&, long long&>(longlong* param_1, basic_string* param_2, int* param_3,
                                                    signed* param_4, longlong* param_5) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        AddUser* local_40[2];

        pvVar1 = (void*)aligned_alloc(120, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<oldscape::rs2lib::social::ClanChannelDelta::AddUser, long long&, eastl::string&,
                                        int&, signed char&, long long&>((void*)((long)pvVar1 + 32), param_1, param_2,
                                                                        param_3, param_4, param_5);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::AddUser>, int,
                                   oldscape::rs2lib::social::ClanChannelDelta::AddUser*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x10025c4f0, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>::type make_shared<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser, int&, int&, long long&>(int&, int&, long long&)
    jag* make_shared<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser, int&, int&, long long&>(
        int* param_1, int* param_2, longlong* param_3) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        DeleteUser* local_40[2];

        pvVar1 = (void*)aligned_alloc(80, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser, int&, int&, long long&>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3);
            local_44 = 1;
            prVar2 =
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>, int,
                              oldscape::rs2lib::social::ClanChannelDelta::DeleteUser*&>(pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x10025c640, 208 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2>::type make_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2, int&, signed char&, int&, long long&, eastl::string&, bool&>(int&, signed char&, int&, long long&, eastl::string&, bool&)
    jag* jag::make_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2, int&, signed char&, int&,
                          long long&, eastl::string&, bool&>(int* param_1, signed* param_2, int* param_3,
                                                             longlong* param_4, basic_string* param_5, bool* param_6) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        UpdateUserDetailsV2* local_40[2];

        pvVar1 = (void*)aligned_alloc(128, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2, int&,
                                        signed char&, int&, long long&, eastl::string&, bool&>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4, param_5, param_6);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2>,
                                   int, oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2*&>(
                pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x10025c7a0, 192 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>::type make_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings, eastl::string&, bool&, signed char&, signed char&>(eastl::string&, bool&, signed char&, signed char&)
    jag* jag::make_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings, eastl::string&,
                          bool&, signed char&, signed char&>(basic_string* param_1, bool* param_2, signed* param_3,
                                                             signed* param_4) {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_44;
        UpdateClanChannelBaseSettings* local_40[2];

        pvVar1 = (void*)aligned_alloc(104, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_40[0] = placement_new<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings,
                                        eastl::string&, bool&, signed char&, signed char&>(
                (void*)((long)pvVar1 + 32), param_1, param_2, param_3, param_4);
            local_44 = 1;
            prVar2 = placement_new<
                ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>, int,
                oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings*&>(pvVar1, &local_44,
                                                                                             local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x10025c860, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelDelta::AddUser>::type make_shared<oldscape::rs2lib::social::ClanChannelDelta::AddUser>()
    jag* make_shared<oldscape::rs2lib::social::ClanChannelDelta::AddUser>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        AddUser* local_28[2];

        pvVar1 = (void*)aligned_alloc(120, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] =
                placement_new<oldscape::rs2lib::social::ClanChannelDelta::AddUser>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::AddUser>, int,
                                   oldscape::rs2lib::social::ClanChannelDelta::AddUser*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x10025c930, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>::type make_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>()
    jag* make_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        UpdateClanChannelBaseSettings* local_28[2];

        pvVar1 = (void*)aligned_alloc(104, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>(
                (void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<
                ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings>, int,
                oldscape::rs2lib::social::ClanChannelDelta::UpdateClanChannelBaseSettings*&>(pvVar1, &local_2c,
                                                                                             local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x10025c9c0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>::type make_shared<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>()
    jag* make_shared<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        DeleteUser* local_28[2];

        pvVar1 = (void*)aligned_alloc(80, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] =
                placement_new<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>((void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 =
                placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::DeleteUser>, int,
                              oldscape::rs2lib::social::ClanChannelDelta::DeleteUser*&>(pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x10025ca50, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails>::type make_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails>()
    jag* make_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        UpdateUserDetails* local_28[2];

        pvVar1 = (void*)aligned_alloc(120, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails>(
                (void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails>,
                                   int, oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetails*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

    // 0x10025cae0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2>::type make_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2>()
    jag* make_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        UpdateUserDetailsV2* local_28[2];

        pvVar1 = (void*)aligned_alloc(128, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] = placement_new<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2>(
                (void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<ref_counter_shared<oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2>,
                                   int, oldscape::rs2lib::social::ClanChannelDelta::UpdateUserDetailsV2*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
