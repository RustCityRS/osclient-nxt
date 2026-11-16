// libs/oldscape/rs2lib/social/clanchat/ClanChannel.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.rs2lib

#include "ClanChannel.h"

namespace jag::oldscape::rs2lib::social {
    // 0x1016af931, 1 bytes, __common; zero-initialised
    ClanChannel::m_verbose;

    // 0x1016af932, 1 bytes, __common; zero-initialised
    ClanChannel::m_fluttered;

    // 0x100259fa0, 192 bytes, base-object constructor, placed by class name
    // ClanChannel::ClanChannel(long long, bool, bool)
    void ClanChannel::ClanChannel(longlong param_1, bool param_2, bool param_3) {
        new (this) Linkable<ClanChannel>();
        field_0 = PTR_vtable_100ee8ab8 + 16;
        field_32 = 0;
        field_40 = false;
        field_41 = true;
        new (&field_48) eastl::vector<shared_ptr<ClanChannelUser>, eastl::allocator>();
        field_80 = 0;
        new (&field_88) eastl::string();
        field_120 = false;
        field_121 = '\0';
        field_122 = '\0';
        new (&field_128) Array<int, eastl::allocator>();
        field_32 = param_1;
        field_40 = param_2;
        field_41 = param_3;
    }

    // 0x10025a0d0, 16 bytes, complete-object constructor, placed by class name
    // ClanChannel::ClanChannel(long long, bool, bool): jumps straight to the base-object constructor

    // 0x10025a0e0, 208 bytes, base-object constructor, placed by class name
    // ClanChannel::ClanChannel(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ClanChannel::ClanChannel(PacketJ* param_1) {
        new (this) Linkable<ClanChannel>();
        field_0 = PTR_vtable_100ee8ab8 + 16;
        field_32 = 0;
        field_40 = false;
        field_41 = true;
        new (&field_48) eastl::vector<shared_ptr<ClanChannelUser>, eastl::allocator>();
        field_80 = 0;
        new (&field_88) eastl::string();
        field_120 = false;
        field_121 = '\0';
        field_122 = '\0';
        new (&field_128) Array<int, eastl::allocator>();
        Decode(this, param_1);
    }

    // 0x10025a1b0, 592 bytes, placed by class name
    // ClanChannel::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&)
    void ClanChannel::Decode(PacketJ* param_1) {
        byte bVar1;
        char cVar2;
        undefined1 uVar3;
        ushort uVar4;
        uint uVar5;
        ulong uVar6;
        longlong lVar7;
        undefined8 uVar8;
        undefined8* puVar9;
        long lVar10;
        uint uVar11;
        DisplayName local_b8;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_78[32];
        shared_ptr local_58;
        vector<shared_ptr<ClanChannelUser>, eastl::allocator>* local_48;
        ClanChannel* local_40;
        uint local_34;

        uVar6 = param_1->g1();
        if ((uVar6 & 1) != 0) {
            field_40 = true;
        }
        if ((uVar6 & 2) != 0) {
            field_41 = true;
        }
        local_34 = 2;
        if ((uVar6 & 4) != 0) {
            bVar1 = param_1->g1();
            local_34 = (uint)bVar1;
        }
        lVar7 = param_1->g8();
        field_32 = lVar7;
        uVar8 = param_1->g8();
        field_80 = uVar8;
        local_b8.gStringNoConversion(SUB81(param_1, 0));
        eastl::string::operator=((eastl::string*)&field_88, (basic_string*)&local_b8);
        local_b8.~basic_string();
        cVar2 = param_1->g1();
        field_120 = cVar2 != '\0';
        cVar2 = param_1->g1s();
        field_122 = cVar2;
        cVar2 = param_1->g1s();
        field_121 = cVar2;
        local_40 = this;
        uVar4 = param_1->g2();
        if (uVar4 != 0) {
            uVar11 = (uint)uVar4;
            local_48 = (vector<shared_ptr<ClanChannelUser>, eastl::allocator>*)&local_40->field_48;
            local_48->clear();
            do {
                make_shared<ClanChannelUser>((jag*)&local_58);
                if (local_40->field_40 != false) {
                    uVar8 = param_1->g8();
                    puVar9 =
                        (undefined8*)shared_ptr<ClanChannelUser>::operator->((shared_ptr<ClanChannelUser>*)&local_58);
                    *puVar9 = uVar8;
                }
                if (local_40->field_41 != false) {
                    PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
                        eastl::string>(local_78, SUB81(param_1, 0));
                    new (&local_b8) DisplayName(local_78);
                    lVar10 = shared_ptr<ClanChannelUser>::operator->((shared_ptr<ClanChannelUser>*)&local_58);
                    DisplayName::operator=((DisplayName*)(lVar10 + 16), &local_b8);
                    local_b8.~pair();
                    local_78->~basic_string();
                }
                uVar3 = param_1->g1s();
                lVar10 = shared_ptr<ClanChannelUser>::operator->((shared_ptr<ClanChannelUser>*)&local_58);
                *(undefined1*)(lVar10 + 8) = uVar3;
                uVar5 = param_1->g2();
                lVar10 = shared_ptr<ClanChannelUser>::operator->((shared_ptr<ClanChannelUser>*)&local_58);
                *(uint*)(lVar10 + 12) = uVar5 & 65535;
                if (local_34 < 3) {
                    lVar10 = shared_ptr<ClanChannelUser>::operator->((shared_ptr<ClanChannelUser>*)&local_58);
                    *(undefined1*)(lVar10 + 88) = 0;
                } else {
                    cVar2 = param_1->g1();
                    lVar10 = shared_ptr<ClanChannelUser>::operator->((shared_ptr<ClanChannelUser>*)&local_58);
                    *(bool*)(lVar10 + 88) = cVar2 != '\0';
                }
                eastl::vector<shared_ptr<ClanChannelUser>, eastl::allocator>::emplace_back<shared_ptr<ClanChannelUser>>(
                    local_48, &local_58);
                local_58.~shared_ptr();
                uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
        }
    }

    // 0x10025a400, 16 bytes, complete-object constructor, placed by class name
    // ClanChannel::ClanChannel(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&): jumps straight to the base-object constructor

    // 0x10025a410, 416 bytes, placed by class name
    // ClanChannel::GetUserSortedIndex()
    ClanChannel* ClanChannel::GetUserSortedIndex() {
        undefined4 uVar1;
        int iVar2;
        long lVar3;
        ulong uVar4;
        shared_ptr<ClanChannelUser>* this_00;
        eastl::string* this_01;
        basic_string* pbVar5;
        pair* ppVar6;
        pair* ppVar7;
        undefined4* puVar8;
        long in_RSI;
        vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_02;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_03;
        Array<std::pair<eastl::string, int>, eastl::allocator> local_58[24];
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_38;

        this_03 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(in_RSI + 128);
        lVar3 = eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_03);
        if (lVar3 == 0) {
            Array<std::pair<eastl::string, int>, eastl::allocator>::Array(local_58);
            this_02 = (vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>*)(in_RSI + 48);
            uVar4 = eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this_02);
            local_58->set_max_size(uVar4, 3);
            uVar4 = eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this_02);
            this_03->set_max_size(uVar4, 3);
            local_38 = this_03;
            iVar2 = eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this_02);
            if (0 < iVar2) {
                uVar4 = 0;
                do {
                    this_00 = (shared_ptr<ClanChannelUser>*)
                        eastl::vector<shared_ptr<ClanChannelUser>, eastl::allocator>::operator[](
                            (vector<shared_ptr<ClanChannelUser>, eastl::allocator>*)this_02, uVar4);
                    lVar3 = shared_ptr<ClanChannelUser>::operator->(this_00);
                    this_01 = (eastl::string*)Array<std::pair<eastl::string, int>, eastl::allocator>::operator[](
                        local_58, uVar4);
                    pbVar5 = (basic_string*)((lVar3 + 16))->GetBaseDisplayName();
                    eastl::string::operator=(this_01, pbVar5);
                    lVar3 = Array<std::pair<eastl::string, int>, eastl::allocator>::operator[](local_58, uVar4);
                    *(int*)(lVar3 + 32) = (int)uVar4;
                    uVar4 = uVar4 + 1;
                    iVar2 = eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this_02);
                } while ((long)uVar4 < (long)iVar2);
            }
            ppVar6 = (pair*)local_58->data();
            ppVar7 = (pair*)local_58->end();
            std::sort<std::pair<eastl::string, int>*>(ppVar6, ppVar7);
            iVar2 = eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this_02);
            if (0 < iVar2) {
                uVar4 = 0;
                do {
                    lVar3 = Array<std::pair<eastl::string, int>, eastl::allocator>::operator[](local_58, uVar4);
                    uVar1 = *(undefined4*)(lVar3 + 32);
                    puVar8 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)local_38, uVar4);
                    *puVar8 = uVar1;
                    uVar4 = uVar4 + 1;
                    iVar2 = eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(this_02);
                } while ((long)uVar4 < (long)iVar2);
            }
            local_58->~Array();
            this = (ClanChannel*)this;
            this_03 = local_38;
        }
        new (this) Array<int, eastl::allocator>(this_03);
        return this;
    }

    // 0x10025a7d0, 64 bytes, placed by class name
    // ClanChannel::AddUser(shared_ptr<ClanChannelUser>&)
    uint ClanChannel::AddUser(shared_ptr* param_1) {
        uint uVar1;

        uVar1 = IsExistingUser(this, param_1);
        if ((char)uVar1 == '\0') {
            DoAddUser(this, param_1);
        }
        return uVar1 ^ 1;
    }

    // 0x10025a810, 160 bytes, placed by class name
    // ClanChannel::IsExistingUser(shared_ptr<ClanChannelUser>&)
    ulong ClanChannel::IsExistingUser(shared_ptr* param_1) {
        long lVar1;
        shared_ptr<ClanChannelUser>* this_00;
        shared_ptr<ClanChannelUser>* psVar2;
        long* plVar3;
        undefined1* this_01;
        bool bVar4;

        this_01 = &field_48;
        this_00 = (shared_ptr<ClanChannelUser>*)this_01->HeapBeginPtr();
        psVar2 = (shared_ptr<ClanChannelUser>*)this_01->end();
        bVar4 = this_00 == psVar2;
        if (!bVar4) {
            plVar3 = (long*)shared_ptr<ClanChannelUser>::operator->(this_00);
            lVar1 = *plVar3;
            plVar3 = (long*)shared_ptr<ClanChannelUser>::operator->((shared_ptr<ClanChannelUser>*)param_1);
            if (lVar1 != *plVar3) {
                do {
                    this_00 = this_00 + 16;
                    bVar4 = this_00 == psVar2;
                    if (bVar4)
                        break;
                    plVar3 = (long*)shared_ptr<ClanChannelUser>::operator->(this_00);
                    lVar1 = *plVar3;
                    plVar3 = (long*)shared_ptr<ClanChannelUser>::operator->((shared_ptr<ClanChannelUser>*)param_1);
                } while (lVar1 != *plVar3);
            }
        }
        return (CONCAT71((int7)((ulong)this_01 >> 8), bVar4) ^ 1) & 4294967295;
    }

    // 0x10025a8b0, 48 bytes, placed by class name
    // ClanChannel::DoAddUser(shared_ptr<ClanChannelUser>&)
    void ClanChannel::DoAddUser(shared_ptr* param_1) {
        (&field_48, param_1)->push_back();
        (&field_128)->clear();
    }

    // 0x10025a930, 80 bytes, placed by class name
    // ClanChannel::DoDeleteUser(int)
    void ClanChannel::DoDeleteUser(int param_1) {
        long lVar1;

        lVar1 = (&field_48)->HeapBeginPtr();
        (&field_48, (shared_ptr*)((long)param_1 * 16 + lVar1))->erase();
        (&field_128)->clear();
    }

    // 0x10025a9e0, 16 bytes, placed by class name
    // ClanChannel::GetUserListSize()
    void ClanChannel::GetUserListSize() {
        (&field_48)->size();
    }

    // 0x10025a9f0, 112 bytes, placed by class name
    // ClanChannel::IsGuestLimitReached()
    uint ClanChannel::IsGuestLimitReached() {
        shared_ptr<ClanChannelUser>* this_00;
        shared_ptr<ClanChannelUser>* psVar1;
        long lVar2;
        uint uVar3;

        this_00 = (shared_ptr<ClanChannelUser>*)(&field_48)->HeapBeginPtr();
        psVar1 = (shared_ptr<ClanChannelUser>*)(&field_48)->end();
        uVar3 = 0;
        if (this_00 != psVar1) {
            do {
                lVar2 = shared_ptr<ClanChannelUser>::operator->(this_00);
                uVar3 = uVar3 + (*(char*)(lVar2 + 8) == -1);
                this_00 = this_00 + 16;
            } while (this_00 != psVar1);
            uVar3 = CONCAT31((int3)(uVar3 >> 8), 99 < uVar3);
        }
        return uVar3;
    }

    // 0x10025aa60, 48 bytes, placed by class name
    // ClanChannel::DeleteUser(long long)
    bool ClanChannel::DeleteUser(longlong param_1) {
        int iVar1;

        iVar1 = FindUserPos(this, param_1);
        if (iVar1 != -1) {
            DoDeleteUser(this, iVar1);
        }
        return iVar1 != -1;
    }

    // 0x10025aa90, 176 bytes, placed by class name
    // ClanChannel::FindUserPos(long long)
    ulong ClanChannel::FindUserPos(longlong param_1) {
        int iVar1;
        undefined8 uVar2;
        shared_ptr<ClanChannelUser>* this_00;
        Layout* this_01;
        ulong uVar4;
        undefined1* this_02;

        if (field_40 == false) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "social/clanchat/ClanChannel.cpp",
                                121, "UserHashes not available");
        }
        this_02 = &field_48;
        iVar1 = this_02->size();
        if (0 < iVar1) {
            uVar4 = 0;
            do {
                this_00 = (shared_ptr<ClanChannelUser>*)
                    eastl::vector<shared_ptr<ClanChannelUser>, eastl::allocator>::operator[](
                        (vector<shared_ptr<ClanChannelUser>, eastl::allocator>*)this_02, uVar4);
                this_01 = (Layout*)shared_ptr<ClanChannelUser>::operator->(this_00);
                if (eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                        Layout::HeapBeginPtr(this_01) == param_1) {
                    return uVar4 & 4294967295;
                }
                uVar4 = uVar4 + 1;
                iVar1 = this_02->size();
            } while ((long)uVar4 < (long)iVar1);
        }
        return 4294967295;
    }

    // 0x10025ab40, 272 bytes, placed by class name
    // ClanChannel::FindUserPos(eastl::string)
    ulong ClanChannel::FindUserPos(basic_string* param_2) {
        bool bVar1;
        int iVar2;
        undefined8 uVar3;
        shared_ptr<ClanChannelUser>* this_00;
        long lVar4;
        basic_string* pbVar5;
        ulong uVar6;
        undefined1* this_01;
        eastl::string local_58[32];

        if (field_41 == false) {
            uVar3 = logger::default_logger();
            logger::Logger::Log(uVar3, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "social/clanchat/ClanChannel.cpp",
                                138, "Displaynames not available");
        }
        this_01 = &field_48;
        iVar2 = this_01->size();
        if (0 < iVar2) {
            uVar6 = 0;
            do {
                this_00 = (shared_ptr<ClanChannelUser>*)
                    eastl::vector<shared_ptr<ClanChannelUser>, eastl::allocator>::operator[](
                        (vector<shared_ptr<ClanChannelUser>, eastl::allocator>*)this_01, uVar6);
                lVar4 = shared_ptr<ClanChannelUser>::operator->(this_00);
                pbVar5 = (basic_string*)((lVar4 + 16))->GetDisplayName();
                eastl::string::basic_string(local_58, pbVar5);
                eastl::string::make_lower();
                eastl::string::make_lower();
                bVar1 = eastl::operator==((basic_string*)local_58, param_2);
                eastl::string::~basic_string(local_58);
                if (bVar1) {
                    return uVar6 & 4294967295;
                }
                uVar6 = uVar6 + 1;
                iVar2 = this_01->size();
            } while ((long)uVar6 < (long)iVar2);
        }
        return 4294967295;
    }

    // 0x10025ac50, 80 bytes, placed by class name
    // ClanChannel::FindUser(long long)
    ClanChannel* ClanChannel::FindUser(longlong param_1) {
        int iVar1;
        shared_ptr* psVar2;
        longlong in_RDX;

        iVar1 = FindUserPos((ClanChannel*)param_1, in_RDX);
        if (iVar1 == -1) {
            new (this) shared_ptr<worldmap::WorldmapAreaMetadata>(0);
        } else {
            psVar2 = (shared_ptr*)eastl::vector<shared_ptr<ClanChannelUser>, eastl::allocator>::operator[](
                (vector<shared_ptr<ClanChannelUser>, eastl::allocator>*)(param_1 + 48), (long)iVar1);
            new (this) shared_ptr<dash3d::Decor>(psVar2);
        }
        return this;
    }

    // 0x10025aca0, 176 bytes, placed by class name
    // ClanChannel::GetEncodeLength(bool, bool)
    int ClanChannel::GetEncodeLength(bool param_1, bool param_2) {
        int iVar1;
        shared_ptr<ClanChannelUser>* this_00;
        shared_ptr<ClanChannelUser>* psVar2;
        long lVar3;
        basic_string* pbVar4;
        int iVar5;

        iVar1 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252<eastl::string>(
            (basic_string*)&field_88, false);
        iVar1 = iVar1 + 23;
        this_00 = (shared_ptr<ClanChannelUser>*)(&field_48)->HeapBeginPtr();
        psVar2 = (shared_ptr<ClanChannelUser>*)(&field_48)->end();
        if (this_00 != psVar2) {
            do {
                iVar5 = iVar1 + 8;
                if (!param_1) {
                    iVar5 = iVar1;
                }
                if (param_2) {
                    lVar3 = shared_ptr<ClanChannelUser>::operator->(this_00);
                    pbVar4 = (basic_string*)((lVar3 + 16))->GetDisplayName();
                    iVar1 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252<
                        eastl::string>(pbVar4, false);
                    iVar5 = iVar5 + iVar1;
                }
                iVar1 = iVar5 + 4;
                this_00 = this_00 + 16;
            } while (this_00 != psVar2);
        }
        return iVar1;
    }

    // 0x10025ad50, 32 bytes, placed by class name
    // ClanChannel::EncodeV2(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, bool, bool)
    void ClanChannel::EncodeV2(PacketJ* param_1, bool param_2, bool param_3) {
        Encode(this, param_1, 2, param_2, param_3);
    }

    // 0x10025ad70, 576 bytes, placed by class name
    // ClanChannel::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, int, bool, bool)
    void ClanChannel::Encode(PacketJ* param_1, int param_2, bool param_3, bool param_4) {
        int iVar1;
        undefined8 uVar2;
        shared_ptr<ClanChannelUser>* this_00;
        shared_ptr<ClanChannelUser>* psVar3;
        Layout* this_01;
        longlong lVar4;
        long lVar5;
        basic_string* pbVar6;
        char cVar7;
        undefined7 in_register_00000009;
        char cVar8;
        undefined1* this_02;

        if (((int)CONCAT71(in_register_00000009, param_3) == 0) && (!param_4)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "social/clanchat/ClanChannel.cpp",
                                192, "Must encode with at least one of UserHashes or DisplayNames!");
        }
        if ((param_3) && (field_40 == false)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "social/clanchat/ClanChannel.cpp",
                                196, "Asked to store UserHashes when not present");
        }
        if ((param_4) && (field_41 == false)) {
            uVar2 = logger::default_logger();
            logger::Logger::Log(uVar2, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                                "social/clanchat/ClanChannel.cpp",
                                200, "Asked to store DisplayNames when not present");
        }
        cVar7 = param_3 + '\x02';
        if (!param_4) {
            cVar7 = param_3;
        }
        cVar8 = cVar7 + '\x04';
        if (param_2 < 3) {
            cVar8 = cVar7;
        }
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, cVar8);
        if (2 < param_2) {
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, param_2);
        }
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<long long>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_32);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<long long>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, field_80);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
            eastl::basic_string<char, BucketAllocatorEASTL>>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, (basic_string*)&field_88, false);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<signed char>(param_1, field_120);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<signed char>(param_1, (int)field_122);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<signed char>(param_1, (int)field_121);
        this_02 = &field_48;
        iVar1 = this_02->size();
        if (param_2 < 2) {
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<shared::LoginProt::ID>();
        } else {
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, iVar1);
        }
        this_00 = (shared_ptr<ClanChannelUser>*)this_02->HeapBeginPtr();
        psVar3 = (shared_ptr<ClanChannelUser>*)this_02->end();
        for (; this_00 != psVar3; this_00 = this_00 + 16) {
            if (param_3) {
                this_01 = (Layout*)shared_ptr<ClanChannelUser>::operator->(this_00);
                lVar4 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(this_01);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p8<long long>(
                    (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, lVar4);
            }
            if (param_4) {
                lVar5 = shared_ptr<ClanChannelUser>::operator->(this_00);
                pbVar6 = (basic_string*)((lVar5 + 16))->GetDisplayName();
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
                    eastl::basic_string<char, BucketAllocatorEASTL>>(
                    (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, pbVar6, false);
            }
            lVar5 = shared_ptr<ClanChannelUser>::operator->(this_00);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<signed char>(param_1, (int)*(char*)(lVar5 + 8));
            lVar5 = shared_ptr<ClanChannelUser>::operator->(this_00);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)param_1, *(int*)(lVar5 + 12));
            if (2 < param_2) {
                lVar5 = shared_ptr<ClanChannelUser>::operator->(this_00);
                PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<signed char>(param_1,
                                                                                     *(undefined1*)(lVar5 + 88));
            }
        }
    }

    // 0x10025b100, 528 bytes, placed by class name
    // ClanChannel::GetDescription()
    ClanChannel* ClanChannel::GetDescription() {
        shared_ptr<ClanChannelUser>* this_00;
        shared_ptr<ClanChannelUser>* psVar1;
        long lVar2;
        basic_string* pbVar3;
        long in_RSI;
        eastl local_f0[32];
        eastl local_d0[32];
        eastl local_b0[32];
        eastl local_90[32];
        eastl local_70[32];
        eastl local_50[32];

        new (this) eastl::string();
        eastl::operator+(local_70, (value_type*)"Clan Name: ", (basic_string*)(in_RSI + 88));
        eastl::operator+(local_90, (basic_string*)local_70, (value_type*)"\nRank Kick: ");
        eastl::operator+(local_b0, local_90, (int)*(char*)(in_RSI + 122));
        eastl::operator+(local_d0, (basic_string*)local_b0, (value_type*)" Talk: ");
        eastl::operator+(local_f0, local_d0, (int)*(char*)(in_RSI + 121));
        eastl::operator+(local_50, (basic_string*)local_f0, (value_type*)"\nUsers:");
        eastl::string::operator=((eastl::string*)this, (basic_string*)local_50);
        local_50->~basic_string();
        local_f0->~basic_string();
        local_d0->~basic_string();
        local_b0->~basic_string();
        local_90->~basic_string();
        local_70->~basic_string();
        this_00 = (shared_ptr<ClanChannelUser>*)((in_RSI + 48))->HeapBeginPtr();
        psVar1 = (shared_ptr<ClanChannelUser>*)((in_RSI + 48))->end();
        if (this_00 != psVar1) {
            do {
                lVar2 = shared_ptr<ClanChannelUser>::operator->(this_00);
                pbVar3 = (basic_string*)((lVar2 + 16))->GetDisplayName();
                eastl::operator+(local_50, (value_type*)&DAT_100e3824c, pbVar3);
                eastl::string::operator+=((eastl::string*)this, (basic_string*)local_50);
                local_50->~basic_string();
                this_00 = this_00 + 16;
            } while (this_00 != psVar1);
        }
        return this;
    }

} // namespace jag::oldscape::rs2lib::social
