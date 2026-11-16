// projects/osclient/clientplayer.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "clientplayer.h"

namespace jag::oldscape {
    // 0x1000de430
    bool ClientPlayer::Ready() const {
        bool bVar1 = field_1008 == nullptr;
        return !bVar1;
    }

    // 0x1000e0370
    void ClientPlayer::ResetIsFriendCachedState() {
        field_1224 = 0;
    }

    // 0x1000e04f0
    void ClientPlayer::ResetIsFriendChatCachedState() {
        field_1228 = 0;
    }

    // 0x1000e0570
    void ClientPlayer::ResetIsClanCachedState() {
        field_1232 = 0;
    }

    // 0x1001026c0
    auto ClientPlayer::GetTempModel(int arg1) {
        uint8_t* midiPlayerMainThread;
        long* plVar3;
        long lVar4;
        ModelLit* modelLit;
        SingleAppendList local_b8;
        ReturnValue local_a8;
        ModelAppender local_98;
        ReturnValue local_78;
        ReturnValue local_68;
        shared_ptr<dash3d::Decor> local_48;

        bool bVar2 = field_1008 == nullptr;
        if (bVar2) {
            return auto();
        }
        if ((field_372 == -1) || (field_384 != 0)) {
            local_68 = shared_ptr();
        } else {
            local_68 = configdecoder::SeqType::List(field_372);
        }
        if (((field_356 == -1) || (field_1192 != '\0')) ||
            ((field_356 == field_48 && (bVar2 = local_68 == nullptr, !bVar2)))) {
            local_78 = shared_ptr();
        } else {
            local_78 = configdecoder::SeqType::List(field_356);
        }
        auto this_00 = field_1008.operator->();
        auto seqType1 = local_68.end();
        int iVar1 = field_376;
        auto seqType2 = local_78.end();
        auto local_58 = this_00->GetTempModel(seqType1, iVar1, seqType2, field_360);
        bVar2 = local_58 == nullptr;
        if (bVar2) {
            new (&result) shared_ptr();
        } else {
            plVar3 = (long*)local_58.operator->();
            (**(void (**)(...))(*plVar3 + 64))(plVar3);
            lVar4 = local_58.operator->();
            field_424 = *(uint32_t*)(lVar4 + 8);
            if (((field_559 != '\0') && (field_548 <= arg1)) && (arg1 < field_552)) {
                plVar3 = (long*)local_58.operator->();
                (**(void (**)(...))(*plVar3 + 176))(plVar3, (int)field_556, (int)field_557, (int)field_558, field_559);
            }
            if (field_1192 == '\0') {
                CombineWithSpotAnim(local_58);
            }
            if (field_1192 == '\0') {
                midiPlayerMainThread = &field_1160;
                bVar2 = *midiPlayerMainThread != nullptr;
                if (bVar2) {
                    if (field_1144 <= arg1) {
                        new (&local_98) shared_ptr();
                        *midiPlayerMainThread = local_98;
                    }
                    if ((field_1140 <= arg1) && (arg1 < field_1144)) {
                        local_48 = shared_ptr(midiPlayerMainThread);
                        plVar3 = (long*)local_48.operator->();
                        (**(void (**)(...))(*plVar3 + 160))(plVar3, field_1148 - field_24, field_1152 - field_1136,
                                                            field_1156 - field_28);
                        iVar1 = field_428;
                        if (iVar1 == 1536) {
                            plVar3 = (long*)local_48.operator->();
                            (**(void (**)(...))(*plVar3 + 128))(plVar3);
                        } else if (iVar1 == 1024) {
                            plVar3 = (long*)local_48.operator->();
                            (**(void (**)(...))(*plVar3 + 128))(plVar3);
                            plVar3 = (long*)local_48.operator->();
                            (**(void (**)(...))(*plVar3 + 128))(plVar3);
                        } else if (iVar1 == 512) {
                            plVar3 = (long*)local_48.operator->();
                            (**(void (**)(...))(*plVar3 + 128))(plVar3);
                            plVar3 = (long*)local_48.operator->();
                            (**(void (**)(...))(*plVar3 + 128))(plVar3);
                            plVar3 = (long*)local_48.operator->();
                            (**(void (**)(...))(*plVar3 + 128))(plVar3);
                        }
                        modelLit = (ModelLit*)*local_48;
                        local_b8 = dash3d::SingleAppendList(*modelLit);
                        local_98 = dash3d::ModelAppender(local_58, local_b8);
                        local_a8 = local_98.Resolve();
                        local_58 = local_a8;
                        iVar1 = field_428;
                        if (iVar1 == 1536) {
                            plVar3 = (long*)local_48.operator->();
                            (**(void (**)(...))(*plVar3 + 128))(plVar3);
                            plVar3 = (long*)local_48.operator->();
                            (**(void (**)(...))(*plVar3 + 128))(plVar3);
                            plVar3 = (long*)local_48.operator->();
                            (**(void (**)(...))(*plVar3 + 128))(plVar3);
                        } else if (iVar1 == 1024) {
                            plVar3 = (long*)local_48.operator->();
                            (**(void (**)(...))(*plVar3 + 128))(plVar3);
                            plVar3 = (long*)local_48.operator->();
                            (**(void (**)(...))(*plVar3 + 128))(plVar3);
                        } else if (iVar1 == 512) {
                            plVar3 = (long*)local_48.operator->();
                            (**(void (**)(...))(*plVar3 + 128))(plVar3);
                        }
                        plVar3 = (long*)local_48.operator->();
                        (**(void (**)(...))(*plVar3 + 160))(plVar3, field_24 - field_1148, field_1136 - field_1152,
                                                            field_28 - field_1156);
                    }
                }
            }
            lVar4 = local_58.operator->();
            *(uint8_t*)(lVar4 + 16) = 1;
            result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_58);
        }
        return result;
    }

    // 0x1001067e0
    bool ClientPlayer::IsOnlineFriend() {
        if (field_1224 == 0) {
            RecalcIsOnlineFriend();
        }
        return field_1224 == 1;
    }

    // 0x100106810
    bool ClientPlayer::IsFriendChat() {
        if (field_1228 == 0) {
            RecalcIsFriendChat();
        }
        return field_1228 == 1;
    }

    // 0x100110640
    unsigned long ClientPlayer::HasAnyOverlays(int arg1, int arg2) const {
        uint64_t unaff_R14;

        bool cVar1 = HasHeadbar();
        uint64_t uVar3 = (uint64_t)((unsigned long)unaff_R14 >> 8);
        unsigned long uVar2 = (((uint64_t)uVar3 << 8) | (uint8_t)1);
        if (!cVar1) {
            cVar1 = HasHitmark(arg1);
            if (!cVar1) {
                cVar1 = HasScriptedOverlays();
                if ((!cVar1) && (field_1208 != arg2)) {
                    cVar1 = field_112.empty();
                    if ((cVar1) && (field_1024 == -1)) {
                        uVar2 = (((uint64_t)uVar3 << 8) | (uint8_t)(field_1028 != -1));
                    }
                }
            }
        }
        return uVar2 & 4294967295;
    }

    // 0x10011be00
    uint32_t ClientPlayer::GetSize() {
        long lVar2;
        ReturnValue local_28;

        uint8_t* midiPlayerMainThread = &field_1008;
        bool bVar1 = *midiPlayerMainThread != nullptr;
        uint32_t uVar3 = 1;
        if (bVar1) {
            lVar2 = (*midiPlayerMainThread).operator->();
            if (*(int*)(lVar2 + 240) != -1) {
                lVar2 = (*midiPlayerMainThread).operator->();
                local_28 = configdecoder::NpcType::List(*(int*)(lVar2 + 240));
                lVar2 = local_28.operator->();
                uVar3 = *(uint32_t*)(lVar2 + 40);
            }
        }
        return uVar3;
    }

    // 0x10011be90
    void ClientPlayer::AddRoutePoint(int arg1, int arg2, signed char arg3) {
        uint8_t uVar1;
        uint32_t uVar2;
        bool bVar3;
        uint32_t* puVar4;
        uint8_t* puVar5;
        unsigned long arg1_00;
        unsigned long arg1_01;

        if ((int)field_440 < 9) {
            field_440 = field_440 + 1;
        }
        unsigned int uVar8 = field_440;
        uint8_t* this_00 = &field_444;
        uint8_t* this_01 = &field_484;
        uint8_t* this_02 = &field_524;
        if (0 < (int)uVar8) {
            arg1_01 = (unsigned long)uVar8;
            do {
                uVar8 = uVar8 - 1;
                arg1_00 = (unsigned long)uVar8;
                puVar4 = (uint32_t*)(*this_00)[arg1_00];
                uVar2 = *puVar4;
                puVar4 = (uint32_t*)(*this_00)[arg1_01];
                *puVar4 = uVar2;
                puVar4 = (uint32_t*)(*this_01)[arg1_00];
                uVar2 = *puVar4;
                puVar4 = (uint32_t*)(*this_01)[arg1_01];
                *puVar4 = uVar2;
                puVar5 = (uint8_t*)(*this_02)[arg1_00];
                uVar1 = *puVar5;
                puVar5 = (uint8_t*)(*this_02)[arg1_01];
                *puVar5 = uVar1;
                bVar3 = 1 < (long)arg1_01;
                arg1_01 = arg1_01 - 1;
            } while (bVar3);
        }
        int* piVar6 = (int*)(*this_00)[0];
        *piVar6 = arg1;
        piVar6 = (int*)(*this_01)[0];
        *piVar6 = arg2;
        schar* psVar7 = (schar*)(*this_02)[0];
        *psVar7 = arg3;
    }

    // 0x10011cfb0
    void ClientPlayer::Init() {
        long lVar1 = 0;
        do {
            ((field_276 + lVar1 + 756))->assign("");
            lVar1 = lVar1 + 32;
        } while (lVar1 != 96);
    }

    // 0x10011d000
    unsigned long ClientPlayer::HasAppearance() const {
        uint64_t extraout_var;

        unsigned long uVar2 = 0;
        bool bVar1 = field_992 != nullptr;
        if (bVar1) {
            bVar1 = field_1008 != nullptr;
            uVar2 = (((uint64_t)extraout_var << 8) | (uint8_t)bVar1) & 4294967295;
        }
        return uVar2;
    }

    // 0x10011d040
    void ClientPlayer::SetAppearance(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        PacketJ<Array<unsigned char, BucketAllocatorEASTL> _>* this_00;
        ClientPlayer* pCVar1;
        bool bVar4;
        unsigned short uVar5;
        unsigned int uVar6;
        int iVar7;
        unsigned int uVar8;
        unsigned int* puVar9;
        int* piVar10;
        Client* pCVar11;
        uint32_t* puVar12;
        DisplayName* pDVar13;
        eastl::string* pbVar14;
        ClientPlayer* pCVar15;
        shared_ptr<configdecoder::ObjTypeCustomisation>* this_02;
        PlayerModel* this_03;
        array<Array<short>, 5ul>* this_04;
        array<Array<short>, 5ul>* arg1;
        long lVar16;
        uint8_t* puVar18;
        eastl::string local_1b0;
        Array<shared_ptr<configdecoder::ObjTypeCustomisation>> local_190;
        ReturnValue local_178;
        ObjTypeCustomisation local_160;
        fixed_vector<int, 5ul> local_128;
        ReturnValue local_e8;

        unsigned long uVar17 = 0;
        packetJ.SetPos(0);
        uint8_t bVar2 = packetJ.g1();
        unsigned int local_140 = (unsigned int)bVar2;
        char cVar3 = packetJ.g1s();
        field_1024 = (int)cVar3;
        cVar3 = packetJ.g1s();
        field_1028 = (int)cVar3;
        field_1196 = 0;
        ClientPlayer* local_130 = this;
        fixed_vector<int, 12ul> local_90(12);
        unsigned int local_13c = 4294967295;
        PacketJ<Array<unsigned char, BucketAllocatorEASTL> _>* local_138 = packetJ;
        do {
            bVar2 = packetJ.g1();
            if (bVar2 == 0) {
                puVar12 = &local_90[uVar17];
                *puVar12 = 0;
                bVar4 = false;
            } else {
                uVar6 = packetJ.g1();
                puVar9 = &local_90[uVar17];
                *puVar9 = uVar6 & 255 | (unsigned int)bVar2 << 8;
                if (uVar17 == 0) {
                    piVar10 = &local_90[0];
                    if (*piVar10 == 65535) {
                        uVar5 = packetJ.g2();
                        local_13c = (unsigned int)uVar5;
                        bVar4 = true;
                        goto LAB_10011d1d6;
                    }
                }
                piVar10 = &local_90[uVar17];
                bVar4 = false;
                if (511 < *piVar10) {
                    piVar10 = &local_90[uVar17];
                    local_e8 = configdecoder::ObjType::List(*piVar10 - 512);
                    lVar16 = local_e8.operator->();
                    iVar7 = *(int*)(lVar16 + 756);
                    if (iVar7 != 0) {
                        local_130->field_1196 = iVar7;
                    }
                    packetJ = local_138;
                }
            }
        LAB_10011d1d6:
            if ((bVar4) || (uVar17 = uVar17 + 1, uVar17 == 12)) {
                local_e8 = eastl::fixed_vector<int, 12ul>(12);
                pCVar11 = Client::Instance();
                if (212 < pCVar11->m_serverMajorVersion) {
                    uVar17 = 0;
                    do {
                        bVar2 = packetJ.g1();
                        if (bVar2 == 0) {
                            puVar12 = &local_e8[uVar17];
                            *puVar12 = 0;
                        } else {
                            uVar6 = packetJ.g1();
                            puVar9 = &local_e8[uVar17];
                            *puVar9 = uVar6 & 255 | (unsigned int)bVar2 << 8;
                        }
                        uVar17 = uVar17 + 1;
                    } while (uVar17 != 12);
                }
                arg1 = (array<Array<short>, 5ul>*)5;
                local_128 = eastl::fixed_vector<int, 5ul>(5);
                this_04 = nullptr;
                do {
                    uVar6 = local_138->g1();
                    iVar7 = ((vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_04)[(unsigned long)arg1])
                                ->end();
                    arg1 = this_04;
                    puVar9 = &local_128[(unsigned long)this_04];
                    this_00 = local_138;
                    uVar6 = uVar6 & 255;
                    if (iVar7 <= (int)uVar6) {
                        uVar6 = 0;
                    }
                    *puVar9 = uVar6;
                    this_04 = this_04 + 1;
                } while (this_04 != (array<Array<short>, 5ul>*)5);
                uVar5 = local_138->g2();
                pCVar1 = local_130;
                uVar6 = (unsigned int)uVar5;
                if (uVar5 == 65535) {
                    uVar6 = 4294967295;
                }
                local_130->field_48 = uVar6;
                uVar5 = this_00->g2();
                uVar6 = 4294967295;
                if (uVar5 != 65535) {
                    uVar6 = (unsigned int)uVar5;
                }
                pCVar1->field_52 = uVar6;
                pCVar1->field_56 = uVar6;
                uVar5 = this_00->g2();
                uVar6 = (unsigned int)uVar5;
                if (uVar5 == 65535) {
                    uVar6 = 4294967295;
                }
                pCVar1->field_60 = uVar6;
                uVar5 = this_00->g2();
                uVar6 = 4294967295;
                if (uVar5 != 65535) {
                    uVar6 = (unsigned int)uVar5;
                }
                pCVar1->field_64 = uVar6;
                uVar5 = this_00->g2();
                uVar6 = (unsigned int)uVar5;
                if (uVar5 == 65535) {
                    uVar6 = 4294967295;
                }
                pCVar1->field_68 = uVar6;
                uVar5 = this_00->g2();
                uVar6 = 4294967295;
                if (uVar5 != 65535) {
                    uVar6 = (unsigned int)uVar5;
                }
                pCVar1->field_72 = uVar6;
                uVar5 = this_00->g2();
                uVar6 = 4294967295;
                if (uVar5 != 65535) {
                    uVar6 = (unsigned int)uVar5;
                }
                pCVar1->field_76 = uVar6;
                puVar18 = &pCVar1->field_992;
                bVar4 = *puVar18 != nullptr;
                if (bVar4) {
                    pDVar13 = (DisplayName*)(*puVar18).operator->();
                    pbVar14 = pDVar13->GetDisplayName();
                    local_1b0 = eastl::string(*pbVar14);
                } else {
                    local_1b0 = eastl::string("");
                }
                local_160.gStringCP1252ToUTF8<eastl::string>((uint8_t)this_00);
                pCVar11 = Client::Instance();
                make_shared<rs2lib::social::DisplayName, eastl::string, rs2lib::social::NameSpace&>(
                    &local_178, (eastl::string*)&local_160, &pCVar11->field_54172);
                *puVar18 = local_178;
                pCVar11 = Client::Instance();
                pCVar15 = (ClientPlayer*)pCVar11->field_52016.end();
                pCVar1 = local_130;
                if (pCVar15 == local_130) {
                    pDVar13 = (DisplayName*)(*puVar18).operator->();
                    pbVar14 = pDVar13->GetDisplayName();
                    OldscapeClientError::SetUserName(*pbVar14);
                }
                ResetIsFriendCachedState(pCVar1);
                ResetIsFriendChatCachedState(pCVar1);
                ResetIsClanCachedState(pCVar1);
                bVar2 = this_00->g1();
                *(unsigned int*)&pCVar1->field_1128 = (unsigned int)bVar2;
                uVar5 = this_00->g2();
                *(unsigned int*)((long)&pCVar1->field_1128 + 4) = (unsigned int)uVar5;
                cVar3 = this_00->g1();
                pCVar1->field_1200 = cVar3 == '\x01';
                pCVar11 = Client::Instance();
                if (pCVar11->field_54168 == *(int*)(ModeWhere::LIVE + 8)) {
                    pCVar11 = Client::Instance();
                    if (1 < pCVar11->field_53260) {
                        local_130->field_1200 = 0;
                    }
                }
                local_178 = Array<shared_ptr<configdecoder::ObjTypeCustomisation>>();
                uVar6 = this_00->g2();
                if ((uVar6 & 32767) != 0) {
                    lVar16 = 12;
                    local_178.set_max_size(12, 3);
                    uVar17 = 0;
                    do {
                        if (((uVar6 & 65535) >> ((unsigned int)lVar16 & 31) & 1) != 0) {
                            piVar10 = &local_90[uVar17];
                            local_160.Unpack(*piVar10 - 512, *this_00);
                            this_02 = &local_178[uVar17];
                            *this_02 = local_160;
                        }
                        uVar17 = uVar17 + 1;
                        lVar16 = lVar16 - 1;
                    } while (lVar16 != 0);
                }
                pCVar1 = local_130;
                lVar16 = 0;
                do {
                    local_160.gStringCP1252ToUTF8<eastl::string>((uint8_t)local_138);
                    (*((pCVar1->field_276 + lVar16 + 756))) = &local_160;
                    lVar16 = lVar16 + 32;
                } while (lVar16 != 96);
                uVar8 = local_138->g1();
                puVar18 = &local_130->field_1008;
                bVar4 = *puVar18 == nullptr;
                if (bVar4) {
                    make_shared<rs2lib::PlayerModel>((ReturnValue*)&local_160);
                    *puVar18 = local_160;
                }
                this_03 = (PlayerModel*)(*puVar18).operator->();
                local_190 = Array<shared_ptr<configdecoder::ObjTypeCustomisation>>(local_178);
                this_03->SetAppearance(local_e8, local_90, &local_190, (uint8_t)((uVar6 & 65535) >> 15), local_128,
                                       local_140, local_13c, uVar8 & 255);
                return;
            }
        } while (true);
    }

    // 0x10011db70
    void ClientPlayer::RecalcIsOnlineFriend() {
        auto pCVar2 = Client::Instance();
        auto this_00 = pCVar2->field_52768.operator->();
        DisplayName* displayName = (DisplayName*)*field_992;
        uint8_t bVar1 = this_00->IsOnlineFriend(*displayName);
        field_1224 = 2 - bVar1;
    }

    // 0x10011dbe0
    void ClientPlayer::RecalcIsFriendChat() {
        uint8_t bVar1;
        int iVar2;
        DisplayName* displayName;

        auto pCVar3 = Client::Instance();
        auto this_00 = pCVar3->field_52544.get();
        if (this_00 == nullptr) {
            iVar2 = 2;
        } else {
            displayName = (DisplayName*)*field_992;
            bVar1 = this_00->ContainsPlayerDisplayName(*displayName);
            iVar2 = 2 - (unsigned int)bVar1;
        }
        field_1228 = iVar2;
    }

    // 0x10011dcf0
    bool ClientPlayer::IsGroup() {
        if (field_1232 == 0) {
            RecalcIsGroup();
        }
        return field_1232 == 1;
    }

    // 0x10011dd20
    void ClientPlayer::RecalcIsGroup() {
        uint32_t uVar3;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        ClanSettings* this_00;
        eastl::string* str;
        bool bVar5;
        eastl::string local_60;

        auto pCVar4 = Client::Instance();
        shared_ptr<rs2lib::social::DisplayName>* local_40 = (shared_ptr<rs2lib::social::DisplayName>*)&field_992;
        unsigned long arg1 = 0;
        while (true) {
            midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)pCVar4->field_52568[arg1];
            bVar5 = false;
            if (*midiPlayerMainThread != nullptr) {
                this_00 = (ClanSettings*)(*midiPlayerMainThread).operator->();
                str = ((DisplayName*)(*local_40).operator->())->GetDisplayName();
                local_60 = eastl::string(*str);
                bVar5 = this_00->FindMember(&local_60) != -1;
            }
            if ((bVar5 & arg1 != 2))
                break;
            arg1 = arg1 + 1;
            if (arg1 == 4) {
                uVar3 = 2;
            LAB_10011ddf3:
                field_1232 = uVar3;
                return;
            }
        }
        uVar3 = 1;
        goto LAB_10011ddf3;
    }

    // 0x10011de30
    void ClientPlayer::AddToRoute(int arg1, int arg2, signed char arg3) {
        long lVar1;
        unsigned int* puVar2;
        uint64_t in_register_00000009;
        bool bVar3;
        ReturnValue local_48;

        uint32_t local_34 = (uint32_t)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3);
        int arg1_00 = field_372;
        if (arg1_00 == -1) {
            bVar3 = false;
        } else {
            local_48 = configdecoder::SeqType::List(arg1_00);
            lVar1 = local_48.operator->();
            bVar3 = *(int*)(lVar1 + 252) == 1;
            if (arg1_00 != -1) {
            }
        }
        if (bVar3) {
            field_372 = -1;
        }
        ClearPendingFacing();
        if (((((unsigned int)arg1 < 104) && (-1 < arg2)) && (arg2 < 104)) &&
            ((puVar2 = (unsigned int*)field_444[0],
              *puVar2 < 104 && (puVar2 = (unsigned int*)field_484[0], *puVar2 < 104)))) {
            if ((char)local_34 == '\x02') {
                Client::Instance()->InjectRoutePoints(this, arg1, arg2, '\x02');
            }
            AddRoutePoint(arg1, arg2, (char)local_34);
        } else {
            InstantMove(arg1, arg2);
        }
    }

    // 0x10011df50
    void ClientPlayer::InstantMove(int arg1, int arg2) {
        field_440 = 0;
        field_536 = 0;
        int* piVar2 = &field_444[0];
        *piVar2 = arg1;
        int* piVar3 = &field_484[0];
        *piVar3 = arg2;
        int iVar1 = GetSize();
        field_24 = *piVar2 * 128 + iVar1 * 64;
        field_28 = *piVar3 * 128 + iVar1 * 64;
    }

} // namespace jag::oldscape
