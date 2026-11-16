// projects/osclient/social/FriendList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "FriendList.h"

namespace jag::oldscape::social {
    // 0x100024b30, 96 bytes, base-object constructor, placed by class name and debug map
    // FriendList::FriendEvent::FriendEvent(rs2lib::social::DisplayName const&, int)
    void FriendList::FriendEvent::FriendEvent(DisplayName* param_1, int param_2) {
        long lVar1;

        new (this) rs2lib::social::DisplayName(param_1);
        lVar1 = ((FriendEvent*)this)->CurrentTimeMillis();
        field_64 = (int)(SUB168(SEXT816(lVar1) * SEXT816(2361183241434822607), 8) >> 7) -
                   (SUB164(SEXT816(lVar1) * SEXT816(2361183241434822607), 12) >> 31);
        field_68 = (short)param_2;
        field_70 = 0;
    }

    // 0x100024b90, 16 bytes, complete-object constructor, placed by class name and debug map
    // FriendList::FriendEvent::FriendEvent(rs2lib::social::DisplayName const&, int): jumps straight to the base-object constructor

    // 0x100024ba0, 96 bytes, base-object constructor, placed by class name
    // FriendList::FriendList(rs2lib::social::NameSpace)
    void FriendList::FriendList(undefined4 param_2) {
        new (this) PlayerRegistry<FriendData>(400);
        field_0 = PTR_vtable_100ee8ae8 + 16;
        field_160 = param_2;
        field_164 = 1;
        new (&field_168) eastl::vector<FriendList::FriendEvent, eastl::allocator>();
    }

    // 0x100024d20, 16 bytes, complete-object constructor, placed by class name
    // FriendList::FriendList(rs2lib::social::NameSpace): jumps straight to the base-object constructor

    // 0x100024d30, 1296 bytes, placed by class name
    // FriendList::ProcessUpdate(PacketJ<Array<unsigned char, BucketAllocatorEASTL> >&, int, ErrorCapture&)
    void FriendList::ProcessUpdate(PacketJ* param_1, int param_2, ErrorCapture* param_3) {
        Layout* this_00;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* phVar1;
        undefined1 uVar2;
        char cVar3;
        uint uVar4;
        int iVar5;
        ulong uVar6;
        FriendData* pFVar7;
        FriendData* pFVar8;
        DisplayName* this_01;
        DisplayName* pDVar9;
        bool bVar10;
        int iVar11;
        ulong uVar12;
        DisplayName local_170;
        undefined1 local_130[72];
        DisplayName local_e8;
        eastl::string local_a8[32];
        eastl::string local_88[32];
        ulong local_68;
        ErrorCapture* local_60;
        Layout* local_58;
        Minimap* local_50;
        undefined4 local_48;
        uint local_44;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* local_40;
        uint local_38;
        byte local_34;
        byte local_33;
        ushort local_32;

        uVar12 = (ulong)param_2;
        local_60 = param_3;
        uVar6 = param_1->size();
        local_68 = uVar12;
        if (uVar6 < uVar12) {
            local_58 = (Layout*)&field_168;
            local_50 = (Minimap*)this;
            local_40 = (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                  eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                  eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                  eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*)param_1;
            do {
                uVar2 = param_1->g1();
                local_38 = CONCAT31(local_38._1_3_, uVar2);
                PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
                    eastl::string>((PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_130,
                                   SUB81(param_1, 0));
                new (&local_170) rs2lib::social::DisplayName(local_130, *(undefined4*)&((Minimap*)this)->field_160);
                local_130->~basic_string();
                PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
                    eastl::string>((PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_130,
                                   SUB81(param_1, 0));
                new ((local_130 + 72))
                    rs2lib::social::DisplayName(local_130, *(undefined4*)&((Minimap*)this)->field_160);
                local_130->~basic_string();
                phVar1 = local_40;
                local_32 = local_40->g2();
                local_34 = phVar1->g1();
                local_33 = phVar1->g1();
                new (local_130) eastl::allocator("EASTL basic_string");
                eastl::string::basic_string(local_88, "", (allocator*)local_130);
                if (local_32 == 0) {
                    local_44 = 4294967295;
                    local_48 = 0;
                } else {
                    PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
                        eastl::string>(
                        (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_130,
                        SUB81(local_40, 0));
                    eastl::string::operator=(local_88, (basic_string*)local_130);
                    local_130->~basic_string();
                    phVar1 = local_40;
                    uVar4 = local_40->g1();
                    local_48 = phVar1->g4();
                    local_44 = uVar4 & 255;
                }
                PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<
                    eastl::string>((PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)local_a8,
                                   SUB81(local_40, 0));
                cVar3 = local_170.IsValid();
                if (cVar3 == '\0') {
                    local_60->Raise("Name is invalid");
                    eastl::string::~basic_string(local_a8);
                    eastl::string::~basic_string(local_88);
                    ((local_130 + 72))->~pair();
                    local_170.~pair();
                    return;
                }
                pFVar7 = (FriendData*)GetPlayerByCurrentDisplayName(&local_170);
                if ((((char)local_38 == '\x01') &&
                     (pFVar8 = (FriendData*)GetPlayerByCurrentDisplayName((DisplayName*)(local_130 + 72)),
                      pFVar8 != (FriendData*)0)) &&
                    (pFVar8 != pFVar7)) {
                    if (pFVar7 == (FriendData*)0) {
                        pFVar7 = pFVar8;
                    } else {
                        RemovePlayer(pFVar8);
                    }
                }
                local_38 = (uint)local_32;
                if (pFVar7 == (FriendData*)0) {
                    iVar5 = GetLevel();
                    if (iVar5 < 400) {
                        pFVar7 = (FriendData*)AddPlayer(&local_170, (DisplayName*)(local_130 + 72));
                        goto joined_r0x00010002501e;
                    }
                } else {
                    UpdatePlayerNames(pFVar7, &local_170, (DisplayName*)(local_130 + 72));
                    this_00 = local_58;
                    if (pFVar7->field_136 != local_38) {
                        this_01 = (DisplayName*)eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(local_58);
                        pDVar9 = (DisplayName*)this_00->end();
                        if (this_01 == pDVar9) {
                            bVar10 = true;
                        } else {
                            bVar10 = true;
                            do {
                                if (((this_01[1].field_30 == '\0') &&
                                     (cVar3 = this_01->Equals(&local_170), cVar3 != '\0')) &&
                                    ((*(short*)&this_01[1].field_28 == 0) == (local_32 != 0))) {
                                    this_01[1].field_30 = 1;
                                    bVar10 = false;
                                }
                                this_01 = (DisplayName*)&this_01[1].field_32;
                            } while (this_01 != pDVar9);
                        }
                        this = (FriendList*)local_50;
                        if (bVar10) {
                            new (local_130) FriendEvent(&local_170, local_38);
                            this = (FriendList*)local_50;
                            local_58->push_back(local_130);
                            local_130->~pair();
                        }
                    }
                joined_r0x00010002501e:
                    if (pFVar7 != (FriendData*)0) {
                        uVar4 = pFVar7->field_136;
                        if (uVar4 != local_38) {
                            iVar5 = *(int*)&((Minimap*)this)->field_164;
                            *(int*)&((Minimap*)this)->field_164 = iVar5 + 1;
                            iVar11 = -iVar5;
                            if (local_32 != 0) {
                                iVar11 = iVar5;
                            }
                            if (uVar4 != 4294967295) {
                                iVar11 = iVar5;
                            }
                            pFVar7->field_140 = iVar11;
                            pFVar7->field_136 = local_38;
                        }
                        eastl::string::operator=((eastl::string*)&pFVar7->field_144, (basic_string*)local_88);
                        *(uint*)&pFVar7->field_176 = (uint)local_34;
                        *(uint*)&pFVar7->field_180 = local_44;
                        pFVar7->field_184 = local_33 >> 1 & 1;
                        pFVar7->field_185 = local_33 & 1;
                        eastl::string::operator=((eastl::string*)&pFVar7->field_192, (basic_string*)local_a8);
                        *(undefined4*)&pFVar7[1].field_24 = local_48;
                    }
                }
                eastl::string::~basic_string(local_a8);
                eastl::string::~basic_string(local_88);
                ((local_130 + 72))->~pair();
                local_170.~pair();
                param_1 = (PacketJ*)local_40;
                uVar6 = eastl::hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                         eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                         eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                         true>::size(local_40);
            } while (uVar6 < local_68);
        }
        Sort();
    }

    // 0x100127290: the linker folded this into eastl::hash_node<eastl::pair<eastl::string const, eastl::string >, false>::~hash_node(), which has identical code
    FriendList::FriendEvent::~FriendEvent();

    // 0x1001272a0: the linker folded this into eastl::hash_node<eastl::pair<eastl::string const, eastl::string >, false>::~hash_node(), which has identical code
    FriendList::FriendEvent::~FriendEvent();

} // namespace jag::oldscape::social
