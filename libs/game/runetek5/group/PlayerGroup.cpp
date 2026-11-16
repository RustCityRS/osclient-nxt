// libs/game/runetek5/group/PlayerGroup.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "PlayerGroup.h"

namespace jag::game {
    // 0x1001a3c10: the linker folded this into MainLoopFrameTimer::GetFPSCounter(), which has identical code
    PlayerGroup::GetVarValues();

    // 0x1002111f0: the linker folded this into oldscape::rs2lib::worldmap::PackableArea::GetTargetMapSquareZ(), which has identical code
    int PlayerGroup::GetUpdateNumber() const;

    // 0x1004b96f0, 576 bytes, placed by class name and debug map
    // PlayerGroup::Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL> >&, PlayerGroupResourceProvider&)
    void PlayerGroup::Decode(PacketT* param_1, PlayerGroupResourceProvider* param_2) {
        undefined1* puVar1;
        byte bVar2;
        undefined2 uVar3;
        ushort uVar4;
        int iVar5;
        undefined4 uVar6;
        undefined8 uVar7;
        VarTypeList* this_00;
        BaseTemplateConfigTypeList<VarType>* this_01;
        shared_ptr* psVar8;
        uint uVar9;
        int local_68[2];
        VarValue local_60[32];
        PlayerGroup* local_40;
        bool local_31;

        bVar2 = param_1->g1();
        if (bVar2 < 2) {
            bVar2 = param_1->g1();
            field_40 = bVar2 & 1;
            local_31 = (bool)((bVar2 & 4) >> 2);
            if ((bVar2 & 4) == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("useDisplayNames",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/group/"
                          "PlayerGroup.cpp",
                          21, (char*)0);
            }
            iVar5 = param_1->g4();
            m_updateNumber = iVar5;
            uVar7 = param_1->g8();
            field_0 = uVar7;
            PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>::gStringCP1252ToUTF8<eastl::string>(
                (PacketReaderMixin<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>*)param_1,
                (basic_string*)&field_8, false);
            uVar3 = param_1->g2s();
            field_42 = uVar3;
            uVar6 = param_1->g4();
            field_184 = uVar6;
            uVar7 = param_1->g8();
            field_192 = uVar7;
            local_40 = this;
            uVar4 = param_1->g2();
            if (uVar4 != 0) {
                uVar9 = (uint)uVar4;
                puVar1 = &local_40->field_112;
                puVar1->clear();
                puVar1->reserve((ulong)uVar4);
                do {
                    eastl::vector<PlayerGroupMember, eastl::allocator>::emplace_back<
                        PacketT<Array<unsigned char, BucketAllocatorEASTL>>&, bool&, PlayerGroupResourceProvider&>(
                        (vector<PlayerGroupMember, eastl::allocator>*)puVar1, param_1, &local_31, param_2);
                    uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
            }
            uVar4 = param_1->g2();
            if (uVar4 != 0) {
                uVar9 = (uint)uVar4;
                puVar1 = &local_40->field_144;
                puVar1->clear();
                puVar1->reserve((ulong)uVar4);
                do {
                    eastl::vector<PlayerGroupBannedUser, eastl::allocator>::emplace_back<
                        PacketT<Array<unsigned char, BucketAllocatorEASTL>>&>(
                        (vector<PlayerGroupBannedUser, eastl::allocator>*)puVar1, param_1);
                    uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
            }
            uVar4 = param_1->g2();
            if (uVar4 != 0) {
                uVar9 = (uint)uVar4;
                puVar1 = &local_40->field_48;
                do {
                    std::pair<unsigned int, VarValue>::pair<true, false>((pair<unsigned int, VarValue>*)local_68);
                    this_00 = (VarTypeList*)(**(code**)(param_2->field_0 + 16))(param_2);
                    VarTypeList::DecodeVarValue<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>(
                        this_00, (pair*)local_68, param_1);
                    this_01 = (BaseTemplateConfigTypeList<VarType>*)(**(code**)(param_2->field_0 + 16))(param_2);
                    psVar8 = (shared_ptr*)this_01->List(local_68[0], 0);
                    puVar1->SetVarValue(psVar8, local_60);
                    local_68->~pair();
                    uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
            }
            UpdateOwnerSlot(local_40);
        } else {
            uVar7 = logger::default_logger();
            logger::Logger::Log(uVar7, 0, 2,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "group/PlayerGroup.cpp",
                                15, "Unsupported PlayerGroup version: %u (support up to %u)", bVar2, 1);
        }
    }

    // 0x1004b9bd0, 144 bytes, placed by class name
    // PlayerGroup::UpdateOwnerSlot()
    void PlayerGroup::UpdateOwnerSlot() {
        byte bVar1;
        PlayerGroupMember* this_00;
        PlayerGroupMember* pPVar2;
        uint uVar3;
        short sVar4;
        short sVar5;

        this_00 = (PlayerGroupMember*)(&field_112)->HeapBeginPtr();
        pPVar2 = (PlayerGroupMember*)(&field_112)->end();
        if (this_00 == pPVar2) {
            sVar4 = -1;
        } else {
            sVar4 = -1;
            uVar3 = 4294967295;
            sVar5 = 0;
            do {
                bVar1 = this_00->GetRank();
                if ((int)uVar3 < (int)(uint)bVar1) {
                    sVar4 = sVar5;
                }
                if ((int)uVar3 < (int)(uint)bVar1) {
                    uVar3 = (uint)bVar1;
                }
                sVar5 = sVar5 + 1;
                this_00 = (PlayerGroupMember*)&this_00[1].field_48;
            } while (this_00 != pPVar2);
        }
        field_176 = sVar4;
    }

    // 0x1004b9c70, 160 bytes, placed by class name
    // PlayerGroup::GetOverallStatus() const
    ulong PlayerGroup::GetOverallStatus() {
        char cVar1;
        int iVar2;
        LightType* pLVar3;
        ulong uVar4;
        LightType* pLVar5;
        undefined1* this_00;
        bool bVar6;

        this_00 = &field_112;
        cVar1 = this_00->empty();
        uVar4 = 0;
        if (cVar1 == '\0') {
            pLVar3 = (LightType*)eastl::vector<PlayerGroupMember, eastl::allocator>::operator[](
                (vector<PlayerGroupMember, eastl::allocator>*)this_00, 0);
            uVar4 = pLVar3->GetAmplitude();
            if (((uint)uVar4 & 4294967294) != 2) {
                pLVar3 = (LightType*)this_00->HeapBeginPtr();
                pLVar5 = (LightType*)this_00->end();
                bVar6 = pLVar3 == pLVar5;
                if (!bVar6) {
                    iVar2 = pLVar3->GetAmplitude();
                    while (iVar2 != 0) {
                        pLVar3 = (LightType*)&pLVar3[1].m_jitterRadiusRandom;
                        bVar6 = pLVar3 == pLVar5;
                        if (bVar6)
                            break;
                        iVar2 = pLVar3->GetAmplitude();
                    }
                }
                uVar4 = (ulong)bVar6;
            }
        }
        return uVar4;
    }

    // 0x1004b9d60, 48 bytes, placed by class name
    // PlayerGroup::ApplyAddMember(PlayerGroupMember const&)
    void PlayerGroup::ApplyAddMember(PlayerGroupMember* param_1) {
        (&field_112, param_1)->push_back();
        UpdateOwnerSlot(this);
    }

    // 0x1004b9de0, 80 bytes, placed by class name
    // PlayerGroup::ApplyDeleteMember(unsigned short)
    void PlayerGroup::ApplyDeleteMember(ushort param_1) {
        long lVar1;
        undefined6 in_register_00000032;

        lVar1 = (&field_112)->HeapBeginPtr();
        (&field_112, (PlayerGroupMember*)((CONCAT62(in_register_00000032, param_1) & 4294967295) * 200 + lVar1))
            ->erase();
        UpdateOwnerSlot(this);
    }

    // 0x1004b9e90, 48 bytes, placed by class name
    // PlayerGroup::ApplyAddBanned(PlayerGroupBannedUser const&)
    void PlayerGroup::ApplyAddBanned(PlayerGroupBannedUser* param_1) {
        (&field_144, param_1)->push_back();
        UpdateOwnerSlot(this);
    }

    // 0x1004b9f10, 80 bytes, placed by class name
    // PlayerGroup::ApplyDeleteBanned(unsigned short)
    void PlayerGroup::ApplyDeleteBanned(ushort param_1) {
        long lVar1;
        undefined6 in_register_00000032;

        lVar1 = (&field_144)->HeapBeginPtr();
        (&field_144, (PlayerGroupBannedUser*)((CONCAT62(in_register_00000032, param_1) & 4294967295) * 32 + lVar1))
            ->erase();
        UpdateOwnerSlot(this);
    }

    // 0x1004b9fc0, 48 bytes, placed by class name
    // PlayerGroup::ApplySetMemberRank(unsigned short, unsigned char)
    void PlayerGroup::ApplySetMemberRank(ushort param_1, uchar param_2) {
        PlayerGroupMember* this_00;
        undefined6 in_register_00000032;

        this_00 = (PlayerGroupMember*)eastl::vector<PlayerGroupMember, eastl::allocator>::operator[](
            (vector<PlayerGroupMember, eastl::allocator>*)&field_112,
            CONCAT62(in_register_00000032, param_1) & 4294967295);
        this_00->SetRank(param_2);
    }

    // 0x1004ba050, 80 bytes, placed by class name
    // PlayerGroup::ApplySetMemberOnline(unsigned short, short)
    void PlayerGroup::ApplySetMemberOnline(ushort param_1, short param_2) {
        PlayerGroupMember* pPVar1;
        undefined6 in_register_00000032;
        ulong uVar2;

        uVar2 = CONCAT62(in_register_00000032, param_1) & 4294967295;
        pPVar1 = (PlayerGroupMember*)eastl::vector<PlayerGroupMember, eastl::allocator>::operator[](
            (vector<PlayerGroupMember, eastl::allocator>*)&field_112, uVar2);
        pPVar1->SetOnline(true);
        pPVar1 = (PlayerGroupMember*)eastl::vector<PlayerGroupMember, eastl::allocator>::operator[](
            (vector<PlayerGroupMember, eastl::allocator>*)&field_112, uVar2);
        pPVar1->SetLastSeenNodeID(param_2);
    }

    // 0x1004ba0c0, 32 bytes, placed by class name
    // PlayerGroup::ApplySetMemberOffline(unsigned short)
    void PlayerGroup::ApplySetMemberOffline(ushort param_1) {
        PlayerGroupMember* this_00;
        undefined6 in_register_00000032;

        this_00 = (PlayerGroupMember*)eastl::vector<PlayerGroupMember, eastl::allocator>::operator[](
            (vector<PlayerGroupMember, eastl::allocator>*)&field_112,
            CONCAT62(in_register_00000032, param_1) & 4294967295);
        this_00->SetOnline(false);
    }

    // 0x1004ba0e0, 48 bytes, placed by class name
    // PlayerGroup::ApplySetMemberReady(unsigned short, bool)
    void PlayerGroup::ApplySetMemberReady(ushort param_1, bool param_2) {
        PlayerGroupMember* pPVar1;
        undefined3 in_register_00000011;
        undefined6 in_register_00000032;

        pPVar1 = (PlayerGroupMember*)eastl::vector<PlayerGroupMember, eastl::allocator>::operator[](
            (vector<PlayerGroupMember, eastl::allocator>*)&field_112,
            CONCAT62(in_register_00000032, param_1) & 4294967295);
        pPVar1->SetStatus(CONCAT31(in_register_00000011, param_2));
    }

    // 0x1004ba110, 48 bytes, placed by class name
    // PlayerGroup::ApplySetMemberTeam(unsigned short, unsigned char)
    void PlayerGroup::ApplySetMemberTeam(ushort param_1, uchar param_2) {
        PlayerGroupMember* this_00;
        undefined6 in_register_00000032;

        this_00 = (PlayerGroupMember*)eastl::vector<PlayerGroupMember, eastl::allocator>::operator[](
            (vector<PlayerGroupMember, eastl::allocator>*)&field_112,
            CONCAT62(in_register_00000032, param_1) & 4294967295);
        this_00->SetTeam(param_2);
    }

    // 0x1004ba150, 80 bytes, placed by class name
    // PlayerGroup::ApplySetGameLoading()
    void PlayerGroup::ApplySetGameLoading() {
        PlayerGroupMember* pPVar1;
        PlayerGroupMember* pPVar2;

        pPVar1 = (PlayerGroupMember*)(&field_112)->HeapBeginPtr();
        pPVar2 = (PlayerGroupMember*)(&field_112)->end();
        for (; pPVar1 != pPVar2; pPVar1 = (PlayerGroupMember*)&pPVar1[1].field_48) {
            pPVar1->SetStatus(2);
        }
    }

    // 0x1004ba1a0, 80 bytes, placed by class name
    // PlayerGroup::ApplyStartGame()
    void PlayerGroup::ApplyStartGame() {
        PlayerGroupMember* pPVar1;
        PlayerGroupMember* pPVar2;

        pPVar1 = (PlayerGroupMember*)(&field_112)->HeapBeginPtr();
        pPVar2 = (PlayerGroupMember*)(&field_112)->end();
        for (; pPVar1 != pPVar2; pPVar1 = (PlayerGroupMember*)&pPVar1[1].field_48) {
            pPVar1->SetStatus(3);
        }
    }

    // 0x1004ba1f0, 48 bytes, placed by class name
    // PlayerGroup::ApplyUpdateMemberBase(unsigned short, PlayerGroupMember const&)
    void PlayerGroup::ApplyUpdateMemberBase(ushort param_1, PlayerGroupMember* param_2) {
        PlayerGroupMember* this_00;
        undefined6 in_register_00000032;

        this_00 = (PlayerGroupMember*)eastl::vector<PlayerGroupMember, eastl::allocator>::operator[](
            (vector<PlayerGroupMember, eastl::allocator>*)&field_112,
            CONCAT62(in_register_00000032, param_1) & 4294967295);
        this_00->UpdateBase(param_2);
    }

} // namespace jag::game
