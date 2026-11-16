// libs/game/runetek5/group/PlayerGroup.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "PlayerGroup.h"

namespace jag::game {
    // 0x1001a3c10: PlayerGroup::GetVarValues() has the same machine code as MainLoopFrameTimer::GetFPSCounter()

    // 0x1002111f0: PlayerGroup::GetUpdateNumber() const has the same machine code as oldscape::rs2lib::worldmap::PackableArea::GetTargetMapSquareZ()

    // 0x1004b96f0
    void PlayerGroup::Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1,
                             PlayerGroupResourceProvider& playerGroupResourceProvider) {
        uint8_t* puVar1;
        unsigned short uVar4;
        uint64_t uVar7;
        BaseTemplateConfigTypeList<VarType>* this_02;
        shared_ptr<VarType>* varType;
        unsigned int uVar8;
        int local_68[2];
        VarValue local_60;
        PlayerGroup* local_40;
        bool local_31;

        uint8_t bVar2 = arg1.g1();
        if (bVar2 < 2) {
            bVar2 = arg1.g1();
            field_40 = bVar2 & 1;
            local_31 = (bool)((bVar2 & 4) >> 2);
            if ((bVar2 & 4) == 0) {
                LogAssert("useDisplayNames",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/group/"
                          "PlayerGroup.cpp",
                          21, nullptr);
            }
            m_updateNumber = arg1.g4();
            uVar7 = arg1.g8();
            field_0 = uVar7;
            arg1.gStringCP1252ToUTF8<eastl::string>(&field_8, false);
            field_42 = arg1.g2s();
            field_184 = arg1.g4();
            uVar7 = arg1.g8();
            field_192 = uVar7;
            local_40 = this;
            uVar4 = arg1.g2();
            if (uVar4 != 0) {
                uVar8 = (unsigned int)uVar4;
                puVar1 = &local_40->field_112;
                puVar1->clear();
                puVar1->reserve((unsigned long)uVar4);
                do {
                    puVar1->emplace_back<PacketT<Array<unsigned char, BucketAllocatorEASTL>>&, bool&,
                                         PlayerGroupResourceProvider&>(arg1, local_31, playerGroupResourceProvider);
                    uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
            }
            uVar4 = arg1.g2();
            if (uVar4 != 0) {
                uVar8 = (unsigned int)uVar4;
                puVar1 = &local_40->field_144;
                puVar1->clear();
                puVar1->reserve((unsigned long)uVar4);
                do {
                    puVar1->emplace_back<PacketT<Array<unsigned char, BucketAllocatorEASTL>>&>(arg1);
                    uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
            }
            uVar4 = arg1.g2();
            if (uVar4 != 0) {
                uVar8 = (unsigned int)uVar4;
                puVar1 = &local_40->field_48;
                do {
                    local_68->pair<true, false>();
                    ((VarTypeList*)(**(void (**)(...))(playerGroupResourceProvider.field_0 + 16))(
                         playerGroupResourceProvider))
                        ->DecodeVarValue<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>(*local_68, arg1);
                    this_02 = (BaseTemplateConfigTypeList<VarType>*)(**(void (**)(...))(
                        playerGroupResourceProvider.field_0 + 16))(playerGroupResourceProvider);
                    varType = (shared_ptr<VarType>*)this_02->List(local_68[0], nullptr);
                    puVar1->SetVarValue(*varType, local_60);
                    uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
            }
            UpdateOwnerSlot(local_40);
        } else {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/group/"
                      "PlayerGroup.cpp",
                      15, "Unsupported PlayerGroup version: %u (support up to %u)", (unsigned int)bVar2, 1);
        }
    }

    // 0x1004b9bd0
    void PlayerGroup::UpdateOwnerSlot() {
        uint8_t bVar1;
        unsigned int uVar3;
        short sVar4;
        short sVar5;

        auto this_00 = field_112.HeapBeginPtr();
        auto pPVar2 = field_112.end();
        if (this_00 == pPVar2) {
            sVar4 = -1;
        } else {
            sVar4 = -1;
            uVar3 = 4294967295;
            sVar5 = 0;
            do {
                bVar1 = this_00->GetRank();
                if ((int)uVar3 < (int)(unsigned int)bVar1) {
                    sVar4 = sVar5;
                }
                if ((int)uVar3 < (int)(unsigned int)bVar1) {
                    uVar3 = (unsigned int)bVar1;
                }
                sVar5 = sVar5 + 1;
                this_00 = (PlayerGroupMember*)&this_00[1].field_48;
            } while (this_00 != pPVar2);
        }
        field_176 = sVar4;
    }

    // 0x1004b9c70
    unsigned long PlayerGroup::GetOverallStatus() const {
        int iVar2;
        LightType* pLVar3;
        LightType* pLVar5;
        bool bVar6;

        uint8_t* this_00 = &field_112;
        bool cVar1 = this_00->empty();
        unsigned long uVar4 = 0;
        if (!cVar1) {
            pLVar3 = (LightType*)(*this_00)[0];
            uVar4 = pLVar3->GetAmplitude();
            if (((unsigned int)uVar4 & 4294967294) != 2) {
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
                uVar4 = (unsigned long)bVar6;
            }
        }
        return uVar4;
    }

    // 0x1004b9d60
    void PlayerGroup::ApplyAddMember(const PlayerGroupMember& playerGroupMember) {
        field_112.push_back(playerGroupMember);
        UpdateOwnerSlot();
    }

    // 0x1004b9de0
    void PlayerGroup::ApplyDeleteMember(unsigned short arg1) {
        uint64_t in_register_00000032;

        long lVar1 = field_112.HeapBeginPtr();
        field_112.erase(
            (PlayerGroupMember*)(((((uint64_t)in_register_00000032 << 16) | (uint16_t)arg1) & 4294967295) * 200 +
                                 lVar1));
        UpdateOwnerSlot();
    }

    // 0x1004b9e90
    void PlayerGroup::ApplyAddBanned(const PlayerGroupBannedUser& playerGroupBannedUser) {
        field_144.push_back(playerGroupBannedUser);
        UpdateOwnerSlot();
    }

    // 0x1004b9f10
    void PlayerGroup::ApplyDeleteBanned(unsigned short arg1) {
        uint64_t in_register_00000032;

        long lVar1 = field_144.HeapBeginPtr();
        field_144.erase(
            (PlayerGroupBannedUser*)(((((uint64_t)in_register_00000032 << 16) | (uint16_t)arg1) & 4294967295) * 32 +
                                     lVar1));
        UpdateOwnerSlot();
    }

    // 0x1004b9fc0
    void PlayerGroup::ApplySetMemberRank(unsigned short arg1, unsigned char arg2) {
        uint64_t in_register_00000032;

        ((PlayerGroupMember*)field_112[(((uint64_t)in_register_00000032 << 16) | (uint16_t)arg1) & 4294967295])
            ->SetRank(arg2);
    }

    // 0x1004ba050
    void PlayerGroup::ApplySetMemberOnline(unsigned short arg1, short arg2) {
        uint64_t in_register_00000032;

        unsigned long arg1_00 = (((uint64_t)in_register_00000032 << 16) | (uint16_t)arg1) & 4294967295;
        PlayerGroupMember* pPVar1 = &field_112[arg1_00];
        pPVar1->SetOnline(true);
        pPVar1 = &field_112[arg1_00];
        pPVar1->SetLastSeenNodeID(arg2);
    }

    // 0x1004ba0c0
    void PlayerGroup::ApplySetMemberOffline(unsigned short arg1) {
        uint64_t in_register_00000032;

        ((PlayerGroupMember*)field_112[(((uint64_t)in_register_00000032 << 16) | (uint16_t)arg1) & 4294967295])
            ->SetOnline(false);
    }

    // 0x1004ba0e0
    void PlayerGroup::ApplySetMemberReady(unsigned short arg1, bool arg2) {
        uint32_t in_register_00000011;
        uint64_t in_register_00000032;

        ((PlayerGroupMember*)field_112[(((uint64_t)in_register_00000032 << 16) | (uint16_t)arg1) & 4294967295])
            ->SetStatus((((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2));
    }

    // 0x1004ba110
    void PlayerGroup::ApplySetMemberTeam(unsigned short arg1, unsigned char arg2) {
        uint64_t in_register_00000032;

        ((PlayerGroupMember*)field_112[(((uint64_t)in_register_00000032 << 16) | (uint16_t)arg1) & 4294967295])
            ->SetTeam(arg2);
    }

    // 0x1004ba150
    void PlayerGroup::ApplySetGameLoading() {
        auto this_00 = field_112.HeapBeginPtr();
        auto pPVar1 = field_112.end();
        for (; this_00 != pPVar1; this_00 = (PlayerGroupMember*)&this_00[1].field_48) {
            this_00->SetStatus(2);
        }
    }

    // 0x1004ba1a0
    void PlayerGroup::ApplyStartGame() {
        auto this_00 = field_112.HeapBeginPtr();
        auto pPVar1 = field_112.end();
        for (; this_00 != pPVar1; this_00 = (PlayerGroupMember*)&this_00[1].field_48) {
            this_00->SetStatus(3);
        }
    }

    // 0x1004ba1f0
    void PlayerGroup::ApplyUpdateMemberBase(unsigned short arg1, const PlayerGroupMember& playerGroupMember) {
        uint64_t in_register_00000032;

        ((PlayerGroupMember*)field_112[(((uint64_t)in_register_00000032 << 16) | (uint16_t)arg1) & 4294967295])
            ->UpdateBase(playerGroupMember);
    }

} // namespace jag::game
