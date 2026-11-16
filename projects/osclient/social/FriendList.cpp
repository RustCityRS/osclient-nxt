// projects/osclient/social/FriendList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "FriendList.h"

namespace jag::oldscape::social {
    // 0x100024b30
    FriendList::FriendEvent::FriendEvent(const rs2lib::social::DisplayName& displayName, int arg2)
        : rs2lib::social::DisplayName(displayName) {
        long lVar1 = core::SafeTime::CurrentTimeMillis();
        field_64 = (int)((uint64_t)(((__int128)lVar1 * (__int128)2361183241434822607) >> 64) >> 7) -
                   ((uint64_t)(((__int128)lVar1 * (__int128)2361183241434822607) >> 96) >> 31);
        field_68 = (short)arg2;
        field_70 = 0;
    }

    // 0x100024ba0
    FriendList::FriendList(rs2lib::social::NameSpace nameSpace)
        : PlayerRegistry<FriendData>(400), field_160(nameSpace), field_164(1) {}

    // 0x100024d30
    void FriendList::ProcessUpdate(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ, int arg2,
                                   ErrorCapture& errorCapture) {
        Layout* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        uint8_t uVar2;
        bool cVar3;
        unsigned int uVar4;
        int iVar5;
        FriendData* friendData;
        FriendData* friendData_00;
        DisplayName* this_01;
        DisplayName* pDVar7;
        bool bVar8;
        int iVar9;
        DisplayName local_170;
        uint8_t local_130[72];
        eastl::string local_a8;
        eastl::string local_88;
        Layout* local_58;
        uint32_t local_48;
        unsigned int local_44;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* local_40;
        unsigned int local_38;
        uint8_t local_34;
        uint8_t local_33;
        unsigned short local_32;

        unsigned long uVar6 = packetJ.size();
        if (uVar6 < (unsigned long)arg2) {
            local_58 = (Layout*)&field_168;
            local_40 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                  eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                  eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)packetJ;
            do {
                uVar2 = packetJ.g1();
                local_38 = (((uint32_t)local_38._1_3_ << 8) | (uint8_t)uVar2);
                local_130->gStringCP1252ToUTF8<eastl::string>((uint8_t)packetJ);
                local_170 = rs2lib::social::DisplayName(*local_130, *(NameSpace*)&((Minimap*)this)->field_160);
                local_130->gStringCP1252ToUTF8<eastl::string>((uint8_t)packetJ);
                new ((local_130 + 72))
                    rs2lib::social::DisplayName(*local_130, *(NameSpace*)&((Minimap*)this)->field_160);
                phVar1 = local_40;
                local_32 = local_40->g2();
                local_34 = phVar1->g1();
                local_33 = phVar1->g1();
                new (local_130) eastl::allocator("EASTL basic_string");
                local_88 = eastl::string("", local_130);
                if (local_32 == 0) {
                    local_44 = 4294967295;
                    local_48 = 0;
                } else {
                    local_130->gStringCP1252ToUTF8<eastl::string>((uint8_t)local_40);
                    local_88 = local_130;
                    phVar1 = local_40;
                    uVar4 = local_40->g1();
                    local_48 = phVar1->g4();
                    local_44 = uVar4 & 255;
                }
                PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
                    eastl::string>(&local_a8, (uint8_t)local_40);
                cVar3 = local_170.IsValid();
                if (!cVar3) {
                    errorCapture.Raise("Name is invalid");
                    ((local_130 + 72))->~pair();
                    return;
                }
                friendData = (FriendData*)GetPlayerByCurrentDisplayName(local_170);
                if ((((char)local_38 == '\x01') &&
                     (friendData_00 = (FriendData*)GetPlayerByCurrentDisplayName(*((local_130 + 72))),
                      friendData_00 != nullptr)) &&
                    (friendData_00 != friendData)) {
                    if (friendData == nullptr) {
                        friendData = friendData_00;
                    } else {
                        RemovePlayer(friendData_00);
                    }
                }
                local_38 = (unsigned int)local_32;
                if (friendData == nullptr) {
                    iVar5 = GetLevel();
                    if (iVar5 < 400) {
                        friendData = (FriendData*)AddPlayer(local_170, *((local_130 + 72)));
                        goto joined_r0x00010002501e;
                    }
                } else {
                    UpdatePlayerNames(friendData, local_170, *((local_130 + 72)));
                    this_00 = local_58;
                    if (friendData->field_136 != local_38) {
                        this_01 = (DisplayName*)local_58->HeapBeginPtr();
                        pDVar7 = (DisplayName*)this_00->end();
                        if (this_01 == pDVar7) {
                            bVar8 = true;
                        } else {
                            bVar8 = true;
                            do {
                                if (((this_01[1].field_30 == '\0') && (cVar3 = this_01->Equals(local_170), cVar3)) &&
                                    ((*(short*)&this_01[1].field_28 == 0) == (local_32 != 0))) {
                                    this_01[1].field_30 = 1;
                                    bVar8 = false;
                                }
                                this_01 = (DisplayName*)&this_01[1].field_32;
                            } while (this_01 != pDVar7);
                        }
                        this = (FriendList*)(Minimap*)this;
                        if (bVar8) {
                            new (local_130) FriendEvent(local_170, local_38);
                            this = (FriendList*)(Minimap*)this;
                            local_58->push_back(*local_130);
                        }
                    }
                joined_r0x00010002501e:
                    if (friendData != nullptr) {
                        uVar4 = friendData->field_136;
                        if (uVar4 != local_38) {
                            iVar5 = *(int*)&((Minimap*)this)->field_164;
                            *(int*)&((Minimap*)this)->field_164 = iVar5 + 1;
                            iVar9 = -iVar5;
                            if (local_32 != 0) {
                                iVar9 = iVar5;
                            }
                            if (uVar4 != 4294967295) {
                                iVar9 = iVar5;
                            }
                            friendData->field_140 = iVar9;
                            friendData->field_136 = local_38;
                        }
                        friendData->field_144 = &local_88;
                        *(unsigned int*)&friendData->field_176 = (unsigned int)local_34;
                        *(unsigned int*)&friendData->field_180 = local_44;
                        friendData->field_184 = local_33 >> 1 & 1;
                        friendData->field_185 = local_33 & 1;
                        friendData->field_192 = &local_a8;
                        *(uint32_t*)&friendData[1].field_24 = local_48;
                    }
                }
                ((local_130 + 72))->~pair();
                packetJ = (PacketJ<Array<unsigned char, BucketAllocatorEASTL> _>*)local_40;
                uVar6 = local_40->size();
            } while (uVar6 < (unsigned long)arg2);
        }
        Sort();
    }

    // 0x100127290: FriendList::FriendEvent::~FriendEvent() has the same machine code as eastl::hash_node<eastl::pair<eastl::string const, eastl::string>, false>::~hash_node()

    // 0x1001272a0: FriendList::FriendEvent::~FriendEvent() has the same machine code as eastl::hash_node<eastl::pair<eastl::string const, eastl::string>, false>::~hash_node()

} // namespace jag::oldscape::social
