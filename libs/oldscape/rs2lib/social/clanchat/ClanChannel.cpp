// libs/oldscape/rs2lib/social/clanchat/ClanChannel.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "ClanChannel.h"

namespace jag::oldscape::rs2lib::social {
    // 0x1016af931
    bool ClanChannel::m_verbose;

    // 0x1016af932
    bool ClanChannel::m_fluttered;

    // 0x100259fa0
    ClanChannel::ClanChannel(long long arg1, bool arg2, bool arg3)
        : Linkable<ClanChannel>(), field_32(0), field_40(false), field_41(true), field_80(0), field_120(false),
          field_121(false), field_122(false), field_32(arg1), field_40(arg2), field_41(arg3) {}

    // 0x10025a0e0
    ClanChannel::ClanChannel(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ)
        : Linkable<ClanChannel>(), field_32(0), field_40(false), field_41(true), field_80(0), field_120(false),
          field_121(false), field_122(false) {
        Decode(packetJ);
    }

    // 0x10025a1b0
    void ClanChannel::Decode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        uint8_t bVar1;
        uint8_t uVar4;
        unsigned int uVar6;
        uint64_t* puVar10;
        long lVar11;
        unsigned int uVar12;
        DisplayName local_b8;
        PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>> local_78[32];
        ReturnValue local_58;
        vector<shared_ptr<ClanChannelUser>>* local_48;

        unsigned long uVar7 = packetJ.g1();
        if ((uVar7 & 1) != 0) {
            field_40 = true;
        }
        if ((uVar7 & 2) != 0) {
            field_41 = true;
        }
        unsigned int local_34 = 2;
        if ((uVar7 & 4) != 0) {
            bVar1 = packetJ.g1();
            local_34 = (unsigned int)bVar1;
        }
        long long lVar8 = packetJ.g8();
        field_32 = lVar8;
        uint64_t uVar9 = packetJ.g8();
        field_80 = uVar9;
        local_b8.gStringNoConversion((uint8_t)packetJ);
        field_88 = &local_b8;
        char cVar2 = packetJ.g1();
        field_120 = cVar2;
        bool bVar3 = (bool)packetJ.g1s();
        field_122 = bVar3;
        bVar3 = (bool)packetJ.g1s();
        field_121 = bVar3;
        ClanChannel* local_40 = this;
        unsigned short uVar5 = packetJ.g2();
        if (uVar5 != 0) {
            uVar12 = (unsigned int)uVar5;
            local_48 = (vector<shared_ptr<ClanChannelUser>>*)&local_40->field_48;
            local_48->clear();
            do {
                make_shared<ClanChannelUser>(&local_58);
                if (local_40->field_40 != false) {
                    uVar9 = packetJ.g8();
                    puVar10 = (uint64_t*)local_58.operator->();
                    *puVar10 = uVar9;
                }
                if (local_40->field_41 != false) {
                    PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
                        eastl::string>(local_78, (uint8_t)packetJ);
                    local_b8 = DisplayName(*local_78);
                    lVar11 = local_58.operator->();
                    (*((lVar11 + 16))) = local_b8;
                }
                uVar4 = packetJ.g1s();
                lVar11 = local_58.operator->();
                *(uint8_t*)(lVar11 + 8) = uVar4;
                uVar6 = packetJ.g2();
                lVar11 = local_58.operator->();
                *(unsigned int*)(lVar11 + 12) = uVar6 & 65535;
                if (local_34 < 3) {
                    lVar11 = local_58.operator->();
                    *(uint8_t*)(lVar11 + 88) = 0;
                } else {
                    cVar2 = packetJ.g1();
                    lVar11 = local_58.operator->();
                    *(bool*)(lVar11 + 88) = cVar2;
                }
                local_48->emplace_back<shared_ptr<ClanChannelUser>>(local_58);
                uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
        }
    }

    // 0x10025a410
    Array<int> ClanChannel::GetUserSortedIndex() {
        uint32_t uVar1;
        int iVar2;
        unsigned long uVar4;
        shared_ptr<ClanChannelUser>* this_00;
        eastl::string* this_01;
        eastl::string* str;
        pair<eastl::string, int>* arg1;
        pair<eastl::string, int>* arg2;
        uint32_t* puVar5;
        uint8_t* this_02;
        Array<std::pair<eastl::string, int>> local_58;
        ReturnValue* local_40;
        Array<int>* local_38;

        Array<int>* this_03 = (Array<int>*)&field_128;
        long lVar3 = this_03->end();
        if (lVar3 == 0) {
            local_40 = &result;
            local_58 = Array<std::pair<eastl::string, int>>();
            this_02 = &field_48;
            uVar4 = this_02->size();
            local_58.set_max_size(uVar4, 3);
            uVar4 = this_02->size();
            this_03->set_max_size(uVar4, 3);
            local_38 = this_03;
            iVar2 = this_02->size();
            if (0 < iVar2) {
                uVar4 = 0;
                do {
                    this_00 = (shared_ptr<ClanChannelUser>*)(*this_02)[uVar4];
                    lVar3 = (*this_00).operator->();
                    this_01 = &local_58[uVar4];
                    str = (eastl::string*)((lVar3 + 16))->GetBaseDisplayName();
                    *this_01 = str;
                    lVar3 = local_58[uVar4];
                    *(int*)(lVar3 + 32) = (int)uVar4;
                    uVar4 = uVar4 + 1;
                    iVar2 = this_02->size();
                } while ((long)uVar4 < (long)iVar2);
            }
            arg1 = (pair<eastl::string, int>*)local_58.data();
            arg2 = (pair<eastl::string, int>*)local_58.end();
            std::sort<std::pair<eastl::string, int>*>(arg1, arg2);
            iVar2 = this_02->size();
            if (0 < iVar2) {
                uVar4 = 0;
                do {
                    lVar3 = local_58[uVar4];
                    uVar1 = *(uint32_t*)(lVar3 + 32);
                    puVar5 = (uint32_t*)(*local_38)[uVar4];
                    *puVar5 = uVar1;
                    uVar4 = uVar4 + 1;
                    iVar2 = this_02->size();
                } while ((long)uVar4 < (long)iVar2);
            }
            &result = local_40;
            this_03 = local_38;
        }
        return Array<int>(this_03);
    }

    // 0x10025a7d0
    unsigned int ClanChannel::AddUser(shared_ptr<ClanChannelUser>& clanChannelUser) {
        unsigned int uVar1 = IsExistingUser(clanChannelUser);
        if ((char)uVar1 == '\0') {
            DoAddUser(clanChannelUser);
        }
        return uVar1 ^ 1;
    }

    // 0x10025a810
    unsigned long ClanChannel::IsExistingUser(shared_ptr<ClanChannelUser>& clanChannelUser) {
        long lVar1;
        long* plVar3;

        uint8_t* this_01 = &field_48;
        auto this_00 = this_01->HeapBeginPtr();
        auto psVar2 = this_01->end();
        bool bVar4 = this_00 == psVar2;
        if (!bVar4) {
            plVar3 = (long*)(*this_00).operator->();
            lVar1 = *plVar3;
            plVar3 = (long*)clanChannelUser.operator->();
            if (lVar1 != *plVar3) {
                do {
                    this_00 = this_00 + 16;
                    bVar4 = this_00 == psVar2;
                    if (bVar4)
                        break;
                    plVar3 = (long*)(*this_00).operator->();
                    lVar1 = *plVar3;
                    plVar3 = (long*)clanChannelUser.operator->();
                } while (lVar1 != *plVar3);
            }
        }
        return ((((uint64_t)((int64_t)((unsigned long)this_01 >> 8)) << 8) | (uint8_t)bVar4) ^ 1) & 4294967295;
    }

    // 0x10025a8b0
    void ClanChannel::DoAddUser(shared_ptr<ClanChannelUser>& clanChannelUser) {
        field_48.push_back(clanChannelUser);
        field_128.clear();
    }

    // 0x10025a930
    void ClanChannel::DoDeleteUser(int arg1) {
        long lVar1 = field_48.HeapBeginPtr();
        field_48.erase((shared_ptr<ClanChannelUser>*)((long)arg1 * 16 + lVar1));
        field_128.clear();
    }

    // 0x10025a9e0
    void ClanChannel::GetUserListSize() {
        field_48.size();
    }

    // 0x10025a9f0
    bool ClanChannel::IsGuestLimitReached() {
        long lVar2;

        auto this_00 = field_48.HeapBeginPtr();
        auto psVar1 = field_48.end();
        unsigned int uVar3 = 0;
        if (this_00 != psVar1) {
            do {
                lVar2 = (*this_00).operator->();
                uVar3 = uVar3 + (*(char*)(lVar2 + 8) == -1);
                this_00 = this_00 + 16;
            } while (this_00 != psVar1);
            uVar3 = (((uint32_t)((int32_t)(uVar3 >> 8)) << 8) | (uint8_t)(99 < uVar3));
        }
        return uVar3;
    }

    // 0x10025aa60
    bool ClanChannel::DeleteUser(long long arg1) {
        int arg1_00 = FindUserPos(arg1);
        if (arg1_00 != -1) {
            DoDeleteUser(arg1_00);
        }
        return arg1_00 != -1;
    }

    // 0x10025aa90
    unsigned long ClanChannel::FindUserPos(long long arg1) {
        shared_ptr<ClanChannelUser>* this_01;
        unsigned long arg1_00;

        if (field_40 == false) {
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/social/"
                      "clanchat/ClanChannel.cpp",
                      121, "UserHashes not available");
        }
        uint8_t* this_03 = &field_48;
        int iVar1 = this_03->size();
        if (0 < iVar1) {
            arg1_00 = 0;
            do {
                this_01 = (shared_ptr<ClanChannelUser>*)(*this_03)[arg1_00];
                if (((Layout*)(*this_01).operator->())->HeapBeginPtr() == arg1) {
                    return arg1_00 & 4294967295;
                }
                arg1_00 = arg1_00 + 1;
                iVar1 = this_03->size();
            } while ((long)arg1_00 < (long)iVar1);
        }
        return 4294967295;
    }

    // 0x10025ab40
    unsigned long ClanChannel::FindUserPos(eastl::string str) {
        bool bVar1;
        shared_ptr<ClanChannelUser>* this_01;
        long lVar3;
        eastl::string* str_00;
        unsigned long arg1;
        eastl::string local_58;

        if (field_41 == false) {
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/social/"
                      "clanchat/ClanChannel.cpp",
                      138, "Displaynames not available");
        }
        uint8_t* this_02 = &field_48;
        int iVar2 = this_02->size();
        if (0 < iVar2) {
            arg1 = 0;
            do {
                this_01 = (shared_ptr<ClanChannelUser>*)(*this_02)[arg1];
                lVar3 = (*this_01).operator->();
                str_00 = ((lVar3 + 16))->GetDisplayName();
                local_58 = eastl::string(*str_00);
                local_58.make_lower();
                str->make_lower();
                bVar1 = local_58 == *str;
                if (bVar1) {
                    return arg1 & 4294967295;
                }
                arg1 = arg1 + 1;
                iVar2 = this_02->size();
            } while ((long)arg1 < (long)iVar2);
        }
        return 4294967295;
    }

    // 0x10025ac50
    auto ClanChannel::FindUser(long long arg1) {
        shared_ptr<dash3d::GroundDecor>* groundDecor;

        int iVar1 = FindUserPos(arg1);
        if (iVar1 == -1) {
            auto result;
        } else {
            groundDecor = &field_48[(long)iVar1];
            new (&result) shared_ptr(groundDecor);
        }
        return result;
    }

    // 0x10025aca0
    int ClanChannel::GetEncodeLength(bool arg1, bool arg2) {
        long lVar3;
        eastl::string* str;
        int iVar4;

        int iVar1 = PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252<eastl::string>(field_88, false);
        iVar1 = iVar1 + 23;
        auto this_00 = field_48.HeapBeginPtr();
        auto psVar2 = field_48.end();
        if (this_00 != psVar2) {
            do {
                iVar4 = iVar1 + 8;
                if (!arg1) {
                    iVar4 = iVar1;
                }
                if (arg2) {
                    lVar3 = (*this_00).operator->();
                    str = ((lVar3 + 16))->GetDisplayName();
                    iVar1 = PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252<eastl::string>(*str, false);
                    iVar4 = iVar4 + iVar1;
                }
                iVar1 = iVar4 + 4;
                this_00 = this_00 + 16;
            } while (this_00 != psVar2);
        }
        return iVar1;
    }

    // 0x10025ad50
    void ClanChannel::EncodeV2(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ, bool arg2, bool arg3) {
        Encode(packetJ, 2, arg2, arg3);
    }

    // 0x10025ad70
    void ClanChannel::Encode(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ, int arg2, bool arg3,
                             bool arg4) {
        Logger* pLVar2;
        unsigned long long arg1;
        long lVar4;
        eastl::string* str;
        uint64_t in_register_00000009;

        if (((int)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3) == 0) && (!arg4)) {
            pLVar2 = logger::default_logger();
            pLVar2->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/social/"
                        "clanchat/ClanChannel.cpp",
                        192, "Must encode with at least one of UserHashes or DisplayNames!");
        }
        if ((arg3) && (field_40 == false)) {
            pLVar2 = logger::default_logger();
            pLVar2->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/social/"
                        "clanchat/ClanChannel.cpp",
                        196, "Asked to store UserHashes when not present");
        }
        if ((arg4) && (field_41 == false)) {
            pLVar2 = logger::default_logger();
            pLVar2->Log(false, 8,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/social/"
                        "clanchat/ClanChannel.cpp",
                        200, "Asked to store DisplayNames when not present");
        }
        PublishingPlatformType PVar1 = arg3 + 2;
        if (!arg4) {
            PVar1 = (unsigned int)arg3;
        }
        PublishingPlatformType publishingPlatformType = PVar1 + 4;
        if (arg2 < 3) {
            publishingPlatformType = PVar1;
        }
        packetJ.p1<shared::LoginProt::ID>(publishingPlatformType);
        if (2 < arg2) {
            packetJ.p1<shared::LoginProt::ID>(arg2);
        }
        packetJ.p8<long long>(field_32);
        packetJ.p8<long long>(field_80);
        packetJ.pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(field_88, false);
        packetJ.p1<signed char>(field_120);
        packetJ.p1<signed char>(field_122);
        packetJ.p1<signed char>(field_121);
        uint8_t* this_02 = &field_48;
        PVar1 = this_02->size();
        if (arg2 < 2) {
            packetJ.p1<shared::LoginProt::ID>(PVar1);
        } else {
            packetJ.p2<int>(PVar1);
        }
        auto this_00 = this_02->HeapBeginPtr();
        auto psVar3 = this_02->end();
        for (; this_00 != psVar3; this_00 = this_00 + 16) {
            if (arg3) {
                arg1 = ((Layout*)(*this_00).operator->())->HeapBeginPtr();
                packetJ.p8<long long>(arg1);
            }
            if (arg4) {
                lVar4 = (*this_00).operator->();
                str = ((lVar4 + 16))->GetDisplayName();
                packetJ.pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(*str, false);
            }
            lVar4 = (*this_00).operator->();
            packetJ.p1<signed char>(*(bool*)(lVar4 + 8));
            lVar4 = (*this_00).operator->();
            packetJ.p2<int>(*(unsigned int*)(lVar4 + 12));
            if (2 < arg2) {
                lVar4 = (*this_00).operator->();
                packetJ.p1<signed char>(*(bool*)(lVar4 + 88));
            }
        }
    }

    // 0x10025b100
    auto ClanChannel::GetDescription() {
        long lVar2;
        eastl::string local_f0;
        eastl::string local_d0;
        eastl::string local_b0;
        eastl::string local_90;
        value_type local_70;
        eastl::string local_50;

        auto result;
        local_70 + (*((eastl::string*)"Clan Name: "));
        local_90 + local_70;
        local_b0 + local_90;
        local_d0 + local_b0;
        local_f0 + local_d0;
        local_50 + local_f0;
        result = &local_50;
        auto this_00 = field_48.HeapBeginPtr();
        auto psVar1 = field_48.end();
        if (this_00 != psVar1) {
            do {
                lVar2 = (*this_00).operator->();
                ((lVar2 + 16))->GetDisplayName();
                local_50 + DAT_100e3824c;
                result += &local_50;
                this_00 = this_00 + 16;
            } while (this_00 != psVar1);
        }
        return result;
    }

} // namespace jag::oldscape::rs2lib::social
