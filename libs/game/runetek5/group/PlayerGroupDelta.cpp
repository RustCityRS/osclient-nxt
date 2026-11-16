// libs/game/runetek5/group/PlayerGroupDelta.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "PlayerGroupDelta.h"

namespace jag::game {
    // 0x100009e70: PlayerGroupDelta::PlayerGroupDeltaEntry::~PlayerGroupDeltaEntry() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100022b10: PlayerGroupDelta::DeleteBanned::~DeleteBanned() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x100022b10: PlayerGroupDelta::DeleteMember::~DeleteMember() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x100022b10: PlayerGroupDelta::SetMemberRank::~SetMemberRank() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x100022b10: PlayerGroupDelta::SetMemberTeam::~SetMemberTeam() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x100022b10: PlayerGroupDelta::SetGameLoading::~SetGameLoading() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x100022b10: PlayerGroupDelta::SetMemberReady::~SetMemberReady() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x100022b10: PlayerGroupDelta::SetVarBitValue::~SetVarBitValue() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x100022b10: PlayerGroupDelta::SetMemberOnline::~SetMemberOnline() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x100022b10: PlayerGroupDelta::SetMemberOffline::~SetMemberOffline() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x100022b10: PlayerGroupDelta::StartGame::~StartGame() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x10002a770: PlayerGroupDelta::DeleteBanned::~DeleteBanned() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10002a770: PlayerGroupDelta::DeleteMember::~DeleteMember() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10002a770: PlayerGroupDelta::SetMemberRank::~SetMemberRank() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10002a770: PlayerGroupDelta::SetMemberTeam::~SetMemberTeam() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10002a770: PlayerGroupDelta::SetGameLoading::~SetGameLoading() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10002a770: PlayerGroupDelta::SetMemberReady::~SetMemberReady() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10002a770: PlayerGroupDelta::SetVarBitValue::~SetVarBitValue() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10002a770: PlayerGroupDelta::SetMemberOnline::~SetMemberOnline() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10002a770: PlayerGroupDelta::SetMemberOffline::~SetMemberOffline() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x10002a770: PlayerGroupDelta::StartGame::~StartGame() has the same machine code as void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*)

    // 0x1004ba3a0
    void PlayerGroupDelta::Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1,
                                  PlayerGroupResourceProvider& playerGroupResourceProvider) {
        UpdateMemberBase* pUVar3;
        UpdateMemberBase* local_38;

        arg1.g8();
        unsigned int uVar2 = arg1.g4();
        field_0 = uVar2;
        uint8_t bVar1 = arg1.g1();
        do {
            uVar2 = (unsigned int)bVar1;
            if (uVar2 == 0) {
                return;
            }
            local_38 = nullptr;
            switch (uVar2) {
            case 1:
                pUVar3 = (UpdateMemberBase*)operator new(208);
                pUVar3->_vptr = nullptr;
                *(uint64_t*)&pUVar3->field_8 = 0;
                *(uint64_t*)pUVar3->field_16 = 0;
                *(uint64_t*)(pUVar3->field_16 + 8) = 0;
                *(uint64_t*)(pUVar3->field_16 + 16) = 0;
                *(uint64_t*)(pUVar3->field_16 + 24) = 0;
                *(uint64_t*)(pUVar3->field_16 + 32) = 0;
                *(uint64_t*)(pUVar3->field_16 + 40) = 0;
                *(uint64_t*)(pUVar3->field_16 + 48) = 0;
                *(uint64_t*)(pUVar3->field_16 + 56) = 0;
                *(uint64_t*)(pUVar3->field_16 + 64) = 0;
                *(uint64_t*)(pUVar3->field_16 + 72) = 0;
                *(uint64_t*)(pUVar3->field_16 + 80) = 0;
                *(uint64_t*)(pUVar3->field_16 + 88) = 0;
                *(uint64_t*)(pUVar3->field_16 + 96) = 0;
                *(uint64_t*)(pUVar3->field_16 + 104) = 0;
                *(uint64_t*)(pUVar3->field_16 + 112) = 0;
                *(uint64_t*)(pUVar3->field_16 + 120) = 0;
                *(uint64_t*)(pUVar3->field_16 + 128) = 0;
                *(uint64_t*)(pUVar3->field_16 + 136) = 0;
                *(uint64_t*)(pUVar3->field_16 + 144) = 0;
                pUVar3[1]._vptr = nullptr;
                *(uint64_t*)&pUVar3[1].field_8 = 0;
                *(uint64_t*)pUVar3[1].field_16 = 0;
                *(uint64_t*)(pUVar3[1].field_16 + 8) = 0;
                *(uint64_t*)(pUVar3[1].field_16 + 16) = 0;
                new (pUVar3) AddMember();
                goto LAB_1004ba6be;
            case 2:
                pUVar3 = (UpdateMemberBase*)operator new(16);
                pUVar3->_vptr = nullptr;
                *(uint64_t*)&pUVar3->field_8 = 0;
                new (pUVar3) DeleteMember();
                break;
            case 3:
                pUVar3 = (UpdateMemberBase*)operator new(40);
                pUVar3->_vptr = nullptr;
                *(uint64_t*)&pUVar3->field_8 = 0;
                *(uint64_t*)pUVar3->field_16 = 0;
                *(uint64_t*)(pUVar3->field_16 + 8) = 0;
                *(uint64_t*)(pUVar3->field_16 + 16) = 0;
                new (pUVar3) AddBanned();
                goto LAB_1004ba6be;
            case 4:
                pUVar3 = (UpdateMemberBase*)operator new(16);
                pUVar3->_vptr = nullptr;
                *(uint64_t*)&pUVar3->field_8 = 0;
                new (pUVar3) DeleteBanned();
                break;
            case 5:
                pUVar3 = (UpdateMemberBase*)operator new(16);
                pUVar3->_vptr = nullptr;
                *(uint64_t*)&pUVar3->field_8 = 0;
                new (pUVar3) SetMemberRank();
                break;
            case 6:
                pUVar3 = (UpdateMemberBase*)operator new(16);
                pUVar3->_vptr = nullptr;
                *(uint64_t*)&pUVar3->field_8 = 0;
                new (pUVar3) SetMemberOnline();
                break;
            case 7:
                pUVar3 = (UpdateMemberBase*)operator new(16);
                pUVar3->_vptr = nullptr;
                *(uint64_t*)&pUVar3->field_8 = 0;
                new (pUVar3) SetMemberOffline();
                break;
            case 8:
                pUVar3 = (UpdateMemberBase*)operator new(16);
                pUVar3->_vptr = nullptr;
                *(uint64_t*)&pUVar3->field_8 = 0;
                new (pUVar3) SetMemberReady();
                break;
            case 9:
                pUVar3 = (UpdateMemberBase*)operator new(8);
                pUVar3->_vptr = nullptr;
                new (pUVar3) SetGameLoading();
                break;
            case 10:
                pUVar3 = (UpdateMemberBase*)operator new(8);
                pUVar3->_vptr = nullptr;
                new (pUVar3) StartGame();
                break;
            case 11:
                pUVar3 = (UpdateMemberBase*)operator new(216);
                pUVar3->_vptr = nullptr;
                *(uint64_t*)&pUVar3->field_8 = 0;
                *(uint64_t*)pUVar3->field_16 = 0;
                *(uint64_t*)(pUVar3->field_16 + 8) = 0;
                *(uint64_t*)(pUVar3->field_16 + 16) = 0;
                *(uint64_t*)(pUVar3->field_16 + 24) = 0;
                *(uint64_t*)(pUVar3->field_16 + 32) = 0;
                *(uint64_t*)(pUVar3->field_16 + 40) = 0;
                *(uint64_t*)(pUVar3->field_16 + 48) = 0;
                *(uint64_t*)(pUVar3->field_16 + 56) = 0;
                *(uint64_t*)(pUVar3->field_16 + 64) = 0;
                *(uint64_t*)(pUVar3->field_16 + 72) = 0;
                *(uint64_t*)(pUVar3->field_16 + 80) = 0;
                *(uint64_t*)(pUVar3->field_16 + 88) = 0;
                *(uint64_t*)(pUVar3->field_16 + 96) = 0;
                *(uint64_t*)(pUVar3->field_16 + 104) = 0;
                *(uint64_t*)(pUVar3->field_16 + 112) = 0;
                *(uint64_t*)(pUVar3->field_16 + 120) = 0;
                *(uint64_t*)(pUVar3->field_16 + 128) = 0;
                *(uint64_t*)(pUVar3->field_16 + 136) = 0;
                *(uint64_t*)(pUVar3->field_16 + 144) = 0;
                pUVar3[1]._vptr = nullptr;
                *(uint64_t*)&pUVar3[1].field_8 = 0;
                *(uint64_t*)pUVar3[1].field_16 = 0;
                *(uint64_t*)(pUVar3[1].field_16 + 8) = 0;
                *(uint64_t*)(pUVar3[1].field_16 + 16) = 0;
                *(uint64_t*)(pUVar3[1].field_16 + 24) = 0;
                new (pUVar3) UpdateMemberBase();
                goto LAB_1004ba6be;
            case 12:
                pUVar3 = (UpdateMemberBase*)operator new(48);
                pUVar3->_vptr = nullptr;
                *(uint64_t*)&pUVar3->field_8 = 0;
                *(uint64_t*)pUVar3->field_16 = 0;
                *(uint64_t*)(pUVar3->field_16 + 8) = 0;
                *(uint64_t*)(pUVar3->field_16 + 16) = 0;
                *(uint64_t*)(pUVar3->field_16 + 24) = 0;
                new (pUVar3) SetVarValue();
            LAB_1004ba6be:
                local_38 = pUVar3;
                goto LAB_1004ba414;
            case 13:
                pUVar3 = (UpdateMemberBase*)operator new(16);
                pUVar3->_vptr = nullptr;
                *(uint64_t*)&pUVar3->field_8 = 0;
                new (pUVar3) SetVarBitValue();
                break;
            case 14:
                pUVar3 = (UpdateMemberBase*)operator new(16);
                pUVar3->_vptr = nullptr;
                *(uint64_t*)&pUVar3->field_8 = 0;
                new (pUVar3) SetMemberTeam();
                break;
            default:
                (logger::default_logger())
                    ->Log(false, 2,
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/group/"
                          "PlayerGroupDelta.cpp",
                          95, "Unhandled PlayerGroupDelta %d", uVar2);
                return;
            }
            local_38 = pUVar3;
        LAB_1004ba414:
            (*((SetMemberTeam_vtbl*)local_38->_vptr)->Decode)(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL> _>*)local_38, (PlayerGroupResourceProvider*)arg1);
            field_8.push_back(local_38);
            bVar1 = arg1.g1();
        } while (true);
    }

    // 0x1004ba880
    void PlayerGroupDelta::ApplyToGroup(PlayerGroup& playerGroup,
                                        PlayerGroupResourceProvider& playerGroupResourceProvider) {
        uint64_t* puVar2;
        uint64_t* puVar3;
        Logger* this_00;

        unsigned int uVar1 = playerGroup.GetUpdateNumber();
        if (uVar1 == field_0) {
            puVar2 = (uint64_t*)field_8.HeapBeginPtr();
            puVar3 = (uint64_t*)field_8.end();
            for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
                (**(void (**)(...))(*(long*)*puVar2 + 24))((long*)*puVar2, playerGroup, playerGroupResourceProvider);
            }
            playerGroup.IncrementUpdateNumber();
        } else {
            this_00 = logger::default_logger();
            uVar1 = playerGroup.GetUpdateNumber();
            this_00->Log(false, 2,
                         "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/group/"
                         "PlayerGroupDelta.cpp",
                         110, "PlayerGroupDelta.ApplyToGroup(): Update numbers do not match. Got %u, expected %u",
                         (unsigned long)uVar1, (unsigned long)field_0);
        }
    }

    // 0x1004ba940
    PlayerGroupDelta::~PlayerGroupDelta() {
        uint8_t* this_00 = &field_8;
        auto plVar1 = this_00->HeapBeginPtr();
        auto plVar2 = this_00->end();
        for (; plVar1 != plVar2; plVar1 = plVar1 + 1) {
            if ((long*)*plVar1 != nullptr) {
                (**(void (**)(...))(*(long*)*plVar1 + 8))();
            }
        }
        this_00->~vector();
    }

    // 0x1004ba9c0
    void PlayerGroupDelta::AddMember::Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1,
                                             PlayerGroupResourceProvider& playerGroupResourceProvider) {
        PlayerGroupMember local_f0;

        if (arg1.g1() == -1) {
            local_f0 = PlayerGroupMember(arg1, true, playerGroupResourceProvider);
            *field_8 = local_f0;
        } else {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/group/"
                      "PlayerGroupDelta.cpp",
                      134, "AddMember got a non- -1 value for userhash");
        }
    }

    // 0x1004baaf0
    void PlayerGroupDelta::AddMember::Apply(PlayerGroup& playerGroup,
                                            PlayerGroupResourceProvider& playerGroupResourceProvider) {
        playerGroup.ApplyAddMember(*field_8);
    }

    // 0x1004bab10
    void PlayerGroupDelta::DeleteMember::Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1,
                                                PlayerGroupResourceProvider& playerGroupResourceProvider) {
        field_8 = arg1.g2();
    }

    // 0x1004bab30
    void PlayerGroupDelta::DeleteMember::Apply(PlayerGroup& playerGroup,
                                               PlayerGroupResourceProvider& playerGroupResourceProvider) {
        playerGroup.ApplyDeleteMember(field_8);
    }

    // 0x1004bab50
    void PlayerGroupDelta::AddBanned::Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1,
                                             PlayerGroupResourceProvider& playerGroupResourceProvider) {
        PlayerGroupBannedUser local_40;

        if (arg1.g1() == -1) {
            local_40 = PlayerGroupBannedUser(arg1);
            *field_8 = local_40;
        } else {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/group/"
                      "PlayerGroupDelta.cpp",
                      160, "AddBanned got a non- -1 value for userhash");
        }
    }

    // 0x1004bac10
    void PlayerGroupDelta::AddBanned::Apply(PlayerGroup& playerGroup,
                                            PlayerGroupResourceProvider& playerGroupResourceProvider) {
        playerGroup.ApplyAddBanned(*field_8);
    }

    // 0x1004bac30
    void PlayerGroupDelta::DeleteBanned::Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1,
                                                PlayerGroupResourceProvider& playerGroupResourceProvider) {
        field_8 = arg1.g2();
    }

    // 0x1004bac50
    void PlayerGroupDelta::DeleteBanned::Apply(PlayerGroup& playerGroup,
                                               PlayerGroupResourceProvider& playerGroupResourceProvider) {
        playerGroup.ApplyDeleteBanned(field_8);
    }

    // 0x1004bac70
    void PlayerGroupDelta::SetMemberRank::Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1,
                                                 PlayerGroupResourceProvider& playerGroupResourceProvider) {
        field_8 = arg1.g2();
        field_10 = arg1.g1();
    }

    // 0x1004baca0
    void PlayerGroupDelta::SetMemberRank::Apply(PlayerGroup& playerGroup,
                                                PlayerGroupResourceProvider& playerGroupResourceProvider) {
        playerGroup.ApplySetMemberRank(field_8, field_10);
    }

    // 0x1004bacc0
    void PlayerGroupDelta::SetMemberOnline::Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1,
                                                   PlayerGroupResourceProvider& playerGroupResourceProvider) {
        uint16_t uVar1 = arg1.g2();
        field_8 = uVar1;
        uVar1 = arg1.g2();
        field_10 = uVar1;
    }

    // 0x1004bacf0
    void PlayerGroupDelta::SetMemberOnline::Apply(PlayerGroup& playerGroup,
                                                  PlayerGroupResourceProvider& playerGroupResourceProvider) {
        playerGroup.ApplySetMemberOnline(field_8, field_10);
    }

    // 0x1004bad10
    void PlayerGroupDelta::SetMemberOffline::Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1,
                                                    PlayerGroupResourceProvider& playerGroupResourceProvider) {
        field_8 = arg1.g2();
    }

    // 0x1004bad30
    void PlayerGroupDelta::SetMemberOffline::Apply(PlayerGroup& playerGroup,
                                                   PlayerGroupResourceProvider& playerGroupResourceProvider) {
        playerGroup.ApplySetMemberOffline(field_8);
    }

    // 0x1004bad50
    void PlayerGroupDelta::SetMemberReady::Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1,
                                                  PlayerGroupResourceProvider& playerGroupResourceProvider) {
        field_8 = arg1.g2();
        field_10 = arg1.g1() == '\x01';
    }

    // 0x1004bad80
    void PlayerGroupDelta::SetMemberReady::Apply(PlayerGroup& playerGroup,
                                                 PlayerGroupResourceProvider& playerGroupResourceProvider) {
        playerGroup.ApplySetMemberReady(field_8, field_10);
    }

    // 0x1004bada0
    void PlayerGroupDelta::SetMemberTeam::Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1,
                                                 PlayerGroupResourceProvider& playerGroupResourceProvider) {
        field_8 = arg1.g2();
        field_10 = arg1.g1();
    }

    // 0x1004badd0
    void PlayerGroupDelta::SetMemberTeam::Apply(PlayerGroup& playerGroup,
                                                PlayerGroupResourceProvider& playerGroupResourceProvider) {
        playerGroup.ApplySetMemberTeam(field_8, field_10);
    }

    // 0x1004badf0
    void PlayerGroupDelta::SetGameLoading::Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1,
                                                  PlayerGroupResourceProvider& playerGroupResourceProvider) {}

    // 0x1004bae00
    void PlayerGroupDelta::SetGameLoading::Apply(PlayerGroup& playerGroup,
                                                 PlayerGroupResourceProvider& playerGroupResourceProvider) {
        playerGroup.ApplySetGameLoading();
    }

    // 0x1004bae10
    void PlayerGroupDelta::StartGame::Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1,
                                             PlayerGroupResourceProvider& playerGroupResourceProvider) {}

    // 0x1004bae20
    void PlayerGroupDelta::StartGame::Apply(PlayerGroup& playerGroup,
                                            PlayerGroupResourceProvider& playerGroupResourceProvider) {
        playerGroup.ApplyStartGame();
    }

    // 0x1004bae30
    void PlayerGroupDelta::UpdateMemberBase::Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1,
                                                    PlayerGroupResourceProvider& playerGroupResourceProvider) {

        field_8 = arg1.g2();
        PlayerGroupMember local_f0(arg1, false, playerGroupResourceProvider);
        *field_16 = local_f0;
    }

    // 0x1004baeb0
    void PlayerGroupDelta::UpdateMemberBase::Apply(PlayerGroup& playerGroup,
                                                   PlayerGroupResourceProvider& playerGroupResourceProvider) {
        playerGroup.ApplyUpdateMemberBase(field_8, *field_16);
    }

    // 0x1004baed0
    void PlayerGroupDelta::SetVarValue::Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1,
                                               PlayerGroupResourceProvider& playerGroupResourceProvider) {
        VarValue local_48;

        unsigned long arg1_00 = arg1.size();
        if (arg1.g2() == -1) {
            field_8 = 0;
            local_48 = VarValue();
            field_16 = &local_48;
        } else {
            arg1.SetPos(arg1_00);
            ((VarTypeList*)(**(void (**)(...))(playerGroupResourceProvider.field_0 + 16))(playerGroupResourceProvider))
                ->DecodeVarValue<PacketT<Array<unsigned char, BucketAllocatorEASTL>>>(field_8, arg1);
        }
    }

    // 0x1004baf80
    void PlayerGroupDelta::SetVarValue::Apply(PlayerGroup& playerGroup,
                                              PlayerGroupResourceProvider& playerGroupResourceProvider) {
        long* plVar2;
        uint64_t uVar3;

        if (field_16.IsUndefined() == '\0') {
            plVar2 = (long*)playerGroup.GetMaterial();
            uVar3 = ((BaseTemplateConfigTypeList<VarType>*)(**(void (**)(...))(playerGroupResourceProvider.field_0 +
                                                                               16))(playerGroupResourceProvider))
                        ->List(field_8, nullptr);
            (**(void (**)(...))(*plVar2 + 24))(plVar2, uVar3, &field_16);
        }
    }

    // 0x1004bafe0
    void PlayerGroupDelta::SetVarBitValue::Decode(PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg1,
                                                  PlayerGroupResourceProvider& playerGroupResourceProvider) {
        uint32_t uVar2;

        unsigned short uVar1 = arg1.g2();
        if (uVar1 == 65535) {
            field_8 = 4294967295;
            uVar2 = 0;
        } else {
            field_8 = (unsigned int)uVar1;
            uVar2 = arg1.g4();
        }
        field_12 = uVar2;
    }

    // 0x1004bb020
    void PlayerGroupDelta::SetVarBitValue::Apply(PlayerGroup& playerGroup,
                                                 PlayerGroupResourceProvider& playerGroupResourceProvider) {
        auto plVar1 = playerGroup.GetMaterial();
        BaseTemplateConfigTypeList<VarBitType>* pBVar2 = (BaseTemplateConfigTypeList<VarBitType>*)(**(void (**)(...))(
            playerGroupResourceProvider.field_0 + 8))(playerGroupResourceProvider);
        uint64_t uVar3 = pBVar2->List(field_8, nullptr);
        (**(void (**)(...))(*plVar1 + 40))(plVar1, uVar3, field_12, 0);
        pBVar2 = (BaseTemplateConfigTypeList<VarBitType>*)(**(void (**)(...))(playerGroupResourceProvider.field_0 + 8))(
            playerGroupResourceProvider);
        pBVar2->List(field_8, nullptr);
    }

} // namespace jag::game
