// libs/oldscape/rs2lib/util/playermodel.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "playermodel.h"

namespace jag::oldscape::rs2lib {
    // 0x100d3fc90
    int32_t PlayerModel::m_basePartMap[7] = {8, 11, 4, 6, 9, 7, 10};

    // 0x100fcf998
    std::array<short, 5ul> PlayerModel::m_recol1s;

    // 0x100fcf9a8, set at startup by ___cxx_global_var_init.81
    std::array<Array<short>, 5ul> PlayerModel::m_recol1d = array<Array<short>, 5ul>();

    // 0x100fcfa20
    std::array<short, 5ul> PlayerModel::m_recol2s;

    // 0x100fcfa30, set at startup by ___cxx_global_var_init.82
    std::array<Array<short>, 5ul> PlayerModel::m_recol2d = array<Array<short>, 5ul>();

    // 0x100fcfaa8
    LRUHashCache<dash3d::ModelLit, 260ul, 261ul, false, unsigned long long> PlayerModel::m_modelCache;

    // 0x100fd4ce8, set at startup by ___cxx_global_var_init.85
    LRUHashCache<int, 16ul, 17ul, false, unsigned long long> PlayerModel::m_headModelHashToModelCacheID =
        LRUHashCache<int, 16ul, 17ul, false, unsigned long long>(16, "LRUHashCache");

    // 0x100fd52e8
    int64_t PlayerModel::m_nextHeadModelCacheID;

    // 0x1000baea0: PlayerModel::SetBodytype(int) has the same machine code as HiscoresManager::SetDataSource(HiscoresDataSource)

    // 0x1001fe750
    void PlayerModel::RefreshAppearance() {
        SetAppearance(this, (fixed_vector<int, _12ul>*)&field_88, (fixed_vector<int, _12ul>*)this,
                      (fixed_vector<int, _5ul>*)&field_176, m_bodytype, field_240);
    }

    // 0x1001feb70
    void PlayerModel::SetDefaultTypeForIdkSlot(int arg1, eastl::fixed_vector<int, 12ul>& arg2, int arg3) {
        long lVar2;
        int* piVar3;
        int iVar4;
        int iVar5;
        ReturnValue local_48;

        int iVar6 = arg3 + 7;
        if (arg1 != 1) {
            iVar6 = arg3;
        }
        if (0 < configdecoder::IdkType::m_numDefinitions) {
            iVar5 = 256;
            do {
                local_48 = configdecoder::IdkType::List(iVar5 - 256);
                if (((local_48 != nullptr) && (lVar2 = local_48.operator->(), *(char*)(lVar2 + 148) == '\0')) &&
                    (piVar3 = (int*)local_48.operator->(), *piVar3 == iVar6)) {
                    piVar3 = (int*)(*((array<int, 7ul>*)(long)arg3))[0];
                    piVar3 = &arg2[(long)*piVar3];
                    *piVar3 = iVar5;
                    return;
                }
                iVar4 = iVar5 - 255;
                iVar5 = iVar5 + 1;
            } while (iVar4 < configdecoder::IdkType::m_numDefinitions);
        }
    }

    // 0x100202b70
    auto PlayerModel::GetHeadModel() const {
        auto result;
        short sVar1;
        unsigned int uVar2;
        bool bVar3;
        bool cVar4;
        bool bVar5;
        int iVar6;
        int iVar7;
        NpcType* this_00;
        unsigned int* puVar8;
        shared_ptr<dash3d::ModelUnlit>* psVar9;
        int* piVar10;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar11;
        long* plVar12;
        short* psVar13;
        PlayerModel* this_03;
        uint8_t* this_04;
        unsigned long uVar14;
        ReturnValue local_88;
        unsigned long local_78;
        ReturnValue* local_70;
        ReturnValue local_68;
        uint8_t local_50[28];
        int local_34;

        if (field_240 == 4294967295) {
            uVar14 = 0;
            bVar3 = false;
            bVar5 = false;
            local_70 = &result;
            local_50._16_8_ = this;
            do {
                puVar8 = (unsigned int*)(*local_50._16_8_)[uVar14];
                uVar2 = *puVar8;
                if ((uVar2 & 4294967040) == 256) {
                    local_68 = configdecoder::IdkType::List(uVar2 - 256);
                    cVar4 = ((IdkType*)local_68.operator->())->CheckHead();
                    bVar3 = bVar5;
                    if (!cVar4) {
                        bVar3 = true;
                        bVar5 = true;
                    }
                }
                if (511 < (int)uVar2) {
                    local_68 = configdecoder::ObjType::List(uVar2 - 512);
                    cVar4 = ((ObjType*)local_68.operator->())
                                ->CheckHeadModel(*(HiscoresDataSource*)(local_50._16_8_ + 296));
                    bVar5 = bVar3;
                    if (!cVar4) {
                        bVar5 = true;
                        bVar3 = true;
                    }
                }
                &result = local_70;
                uVar14 = uVar14 + 1;
            } while (uVar14 != 12);
            if (bVar5) {
                new (local_70) shared_ptr();
            } else {
                local_50->destruct<highlight::NpcUID*>();
                local_68 = eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>(12, *local_50);
                uVar14 = 0;
                local_34 = 0;
                this_03 = (PlayerModel*)local_50._16_8_;
                do {
                    local_78 = uVar14;
                    puVar8 = (unsigned int*)(*this_03)[uVar14];
                    uVar2 = *puVar8;
                    if ((uVar2 & 4294967040) == 256) {
                        local_88 = configdecoder::IdkType::List(uVar2 - 256);
                        local_88.operator->();
                        local_50->GetHeadNoCheck();
                        bVar5 = *local_50 != nullptr;
                        if (bVar5) {
                            psVar9 = &local_68[(long)local_34];
                            *psVar9 = *local_50;
                            local_34 = local_34 + 1;
                        }
                    }
                    if ((int)uVar2 < 512) {
                        this_03 = (PlayerModel*)local_50._16_8_;
                    } else {
                        local_88 = configdecoder::ObjType::List(uVar2 - 512);
                        iVar6 = local_88.operator->();
                        this_03 = (PlayerModel*)local_50._16_8_;
                        local_50->GetHeadModelNoCheck(iVar6);
                        bVar5 = *local_50 != nullptr;
                        if (bVar5) {
                            psVar9 = &local_68[(long)local_34];
                            *psVar9 = *local_50;
                            local_34 = local_34 + 1;
                        }
                    }
                    uVar14 = local_78 + 1;
                } while (uVar14 != 12);
                local_50->Combine(local_68);
                this_04 = &this_03->field_176;
                uVar14 = 0;
                do {
                    piVar10 = (int*)(*this_04)[uVar14];
                    iVar6 = *piVar10;
                    pvVar11 = &m_recol1d[uVar14];
                    iVar7 = pvVar11->end();
                    if (iVar6 < iVar7) {
                        plVar12 = (long*)(*local_50).operator->();
                        psVar13 = &m_recol1s[uVar14];
                        sVar1 = *psVar13;
                        piVar10 = (int*)(*this_04)[uVar14];
                        psVar13 = (short*)(*pvVar11)[(long)*piVar10];
                        (**(void (**)(...))(*plVar12 + 160))(plVar12, (int)sVar1, (int)*psVar13);
                    }
                    piVar10 = (int*)(*this_04)[uVar14];
                    iVar6 = *piVar10;
                    pvVar11 = &m_recol2d[uVar14];
                    iVar7 = pvVar11->end();
                    if (iVar6 < iVar7) {
                        plVar12 = (long*)(*local_50).operator->();
                        psVar13 = &m_recol2s[uVar14];
                        sVar1 = *psVar13;
                        piVar10 = (int*)(*this_04)[uVar14];
                        psVar13 = (short*)(*pvVar11)[(long)*piVar10];
                        (**(void (**)(...))(*plVar12 + 160))(plVar12, (int)sVar1, (int)*psVar13);
                    }
                    &result = local_70;
                    uVar14 = uVar14 + 1;
                } while (uVar14 != 5);
                local_70->shared_ptr<FileRSevenDebugPresetProvider, void>(*local_50);
            }
        } else {
            local_68 = configdecoder::NpcType::List(field_240);
            this_00 = (NpcType*)local_68.operator->();
            result = this_00->GetHead(nullptr);
        }
        return result;
    }

    // 0x100204890
    PlayerModel::PlayerModel() : eastl::fixed_vector<int, 12ul>(), field_288(false), m_pronoun(-1), m_bodytype(0) {}

    // 0x100204940
    PlayerModel::PlayerModel(PlayerModel& playerModel)
        : eastl::fixed_vector<int, 12ul>(), field_288(false), m_pronoun(-1), m_bodytype(0) {
        SetAppearance(this, (fixed_vector<int, _12ul>*)&playerModel.field_88, (fixed_vector<int, _12ul>*)playerModel,
                      (fixed_vector<int, _5ul>*)&playerModel.field_176, playerModel.m_bodytype, playerModel.field_240);
    }

    // 0x100204a10
    void PlayerModel::SetAppearance(const eastl::fixed_vector<int, 12ul>& arg1,
                                    const eastl::fixed_vector<int, 12ul>& arg2,
                                    const eastl::fixed_vector<int, 5ul>& arg3, int arg4, int arg5) {
        ReturnValue local_90;

        PlayerModel* this_00 = (PlayerModel*)arg1;
        if (!(arg1.empty())) {
            field_88 = arg1;
        } else {
            arg1 = &local_90;
            BuildDefaultAppearance((ReturnValue*)arg1, this_00, arg4);
            field_88 = arg1;
        }
        if (!(arg2.empty())) {
            *this = arg2;
        } else {
            BuildDefaultAppearance(&local_90, (PlayerModel*)arg1, arg4);
            *this = local_90;
        }
        field_176 = arg3;
        m_bodytype = arg4;
        field_240 = arg5;
        CalcBaseId();
    }

    // 0x100204b50
    auto PlayerModel::BuildDefaultAppearance(int arg1) {
        auto result(12);
        int arg3 = 0;
        do {
            SetDefaultTypeForIdkSlot(arg1, &result, arg3);
            arg3 = arg3 + 1;
        } while (arg3 != 7);
        return result;
    }

    // 0x100204c60
    void PlayerModel::CalcBaseId() {
        int* piVar4;
        long lVar5;

        unsigned long long local_38 = *(unsigned long long*)field_248;
        uint32_t* puVar3 = (uint32_t*)(*this)[5];
        uint32_t uVar1 = *puVar3;
        puVar3 = (uint32_t*)(*this)[9];
        uint32_t uVar2 = *puVar3;
        puVar3 = (uint32_t*)(*this)[5];
        *puVar3 = uVar2;
        puVar3 = (uint32_t*)(*this)[9];
        *puVar3 = uVar1;
        *(uint64_t*)field_248 = 0;
        unsigned long uVar6 = 0;
        do {
            *(long*)field_248 = *(long*)field_248 << 4;
            piVar4 = (int*)(*this)[uVar6];
            if (255 < *piVar4) {
                piVar4 = (int*)(*this)[uVar6];
                *(long*)field_248 = (long)*piVar4 + *(long*)field_248 - 256;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 != 12);
        piVar4 = (int*)(*this)[0];
        if (255 < *piVar4) {
            piVar4 = (int*)(*this)[0];
            *(long*)field_248 = *(long*)field_248 + (long)(*piVar4 - 256 >> 4);
        }
        piVar4 = (int*)(*this)[1];
        if (255 < *piVar4) {
            piVar4 = (int*)(*this)[1];
            *(long*)field_248 = *(long*)field_248 + (long)(*piVar4 - 256 >> 8);
        }
        uVar6 = 0;
        do {
            *(long*)field_248 = *(long*)field_248 << 3;
            piVar4 = &field_176[uVar6];
            lVar5 = (long)*piVar4 + *(long*)field_248;
            *(long*)field_248 = lVar5;
            uVar6 = uVar6 + 1;
        } while (uVar6 != 5);
        *(long*)field_248 = (long)(int)m_bodytype + lVar5 * 2;
        puVar3 = (uint32_t*)(*this)[5];
        *puVar3 = uVar1;
        puVar3 = (uint32_t*)(*this)[9];
        *puVar3 = uVar2;
        if (((local_38 != 0) && (local_38 != *(unsigned long long*)field_248)) || (field_288 != false)) {
            m_modelCache.Remove(local_38);
        }
    }

    // 0x100204e70
    void PlayerModel::IdkChangePart(int arg1, bool arg2) {
        long lVar3;
        int iVar4;
        uint32_t in_register_00000034;
        ReturnValue local_58;

        int* local_40 =
            (int*)(*((array<int, 7ul>*)(long)arg1))[(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1)];
        int* piVar2 = (int*)(*this)[(long)*local_40];
        if (*piVar2 == 0) {
            return;
        }
        int arg1_00 = *piVar2 - 256;
        unsigned long local_48 = (unsigned long)(unsigned int)arg1;
        do {
            if (arg2) {
                arg1_00 = arg1_00 + 1;
                if (configdecoder::IdkType::m_numDefinitions <= arg1_00) {
                    arg1_00 = 0;
                }
            } else {
                if (arg1_00 < 1) {
                    arg1_00 = configdecoder::IdkType::m_numDefinitions;
                }
                arg1_00 = arg1_00 - 1;
            }
            local_58 = configdecoder::IdkType::List(arg1_00);
            if ((local_58 != nullptr) && (lVar3 = local_58.operator->(), *(char*)(lVar3 + 148) == '\0')) {
                piVar2 = (int*)local_58.operator->();
                iVar4 = arg1 + 7;
                if (m_bodytype != 1) {
                    iVar4 = (int)local_48;
                }
                if (*piVar2 == iVar4) {
                    piVar2 = (int*)(*this)[(long)*local_40];
                    *piVar2 = arg1_00 + 256;
                    CalcBaseId();
                    return;
                }
            }
        } while (true);
    }

    // 0x100204fa0
    void PlayerModel::IdkChangeColour(int arg1, bool arg2) {
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar2;
        bool cVar3;
        uint32_t in_register_00000011;

        int* piVar1 = &field_176[(unsigned long)arg1];
        int arg2_00 = *piVar1;
        if ((((uint32_t)in_register_00000011 << 8) | (uint8_t)arg2) == 0) {
            do {
                if (arg2_00 < 1) {
                    pvVar2 = &m_recol1d[(unsigned long)arg1];
                    arg2_00 = pvVar2->end();
                }
                arg2_00 = arg2_00 - 1;
                cVar3 = RecolsRunescape::IsRecolSelectable(arg1, arg2_00);
            } while (!cVar3);
        } else {
            pvVar2 = &m_recol1d[(unsigned long)arg1];
            do {
                arg2_00 = arg2_00 + 1;
                if (pvVar2->end() <= arg2_00) {
                    arg2_00 = 0;
                }
                cVar3 = RecolsRunescape::IsRecolSelectable(arg1, arg2_00);
            } while (!cVar3);
        }
        piVar1 = &field_176[(unsigned long)arg1];
        *piVar1 = arg2_00;
        CalcBaseId();
    }

    // 0x1002050a0
    void PlayerModel::IdkChangeBodytype(int arg1) {
        fixed_vector<int, 12ul> local_d0;
        fixed_vector<int, 12ul> local_78;

        if (m_bodytype != arg1) {
            local_78 = eastl::fixed_vector<int, 12ul>();
            local_d0 = eastl::fixed_vector<int, 12ul>();
            SetAppearance(this, &local_78, &local_d0, (fixed_vector<int, _5ul>*)&field_176, arg1, -1);
        }
    }

    // 0x100205160
    void PlayerModel::IdkSaveDesign(PacketJ<Array<unsigned char, BucketAllocatorEASTL>>& packetJ) {
        int* piVar1;
        PublishingPlatformType* pPVar2;
        PublishingPlatformType publishingPlatformType;

        unsigned long uVar3 = (unsigned long)m_bodytype;
        packetJ.p1<shared::LoginProt::ID>(m_bodytype);
        array<int, 7ul>* this_00 = nullptr;
        do {
            piVar1 = (int*)(*this_00)[uVar3];
            piVar1 = (int*)(*this)[(long)*piVar1];
            publishingPlatformType = -(unsigned int)(*piVar1 == 0) | *piVar1 - 256;
            uVar3 = (unsigned long)publishingPlatformType;
            packetJ.p1<shared::LoginProt::ID>(publishingPlatformType);
            this_00 = this_00 + 1;
        } while (this_00 != (array<int, 7ul>*)7);
        uVar3 = 0;
        do {
            pPVar2 = &field_176[uVar3];
            packetJ.p1<shared::LoginProt::ID>(*pPVar2);
            uVar3 = uVar3 + 1;
        } while (uVar3 != 5);
    }

    // 0x100205200
    auto PlayerModel::GetTempModel(configdecoder::SeqType* seqType1, int arg2, configdecoder::SeqType* seqType2,
                                   int arg4) {
        uint8_t* puVar1;
        short sVar2;
        unsigned int uVar3;
        unsigned int uVar4;
        PlayerModel* pPVar5;
        bool cVar7;
        int iVar8;
        SeqType* pSVar9;
        uint32_t* puVar10;
        int* piVar11;
        unsigned int* puVar12;
        long* plVar13;
        IdkType* pIVar14;
        ObjType* pOVar15;
        shared_ptr<dash3d::ModelLit>* modelLit;
        shared_ptr<dash3d::ModelUnlit>* psVar16;
        shared_ptr<midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        shared_ptr<configdecoder::ObjTypeCustomisation>* this_00;
        long lVar17;
        long lVar18;
        unsigned long uVar19;
        short* psVar20;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar21;
        ModelLit* pMVar22;
        unsigned long uVar23;
        unsigned long uVar24;
        int iVar26;
        uint64_t in_stack_fffffffffffffed8;
        uint32_t uVar27;
        ReturnValue local_100;
        ReturnValue local_e8;
        Array<game::VarValue>* local_c0;
        uint8_t local_a0[16];

        if (field_240 != 4294967295) {
            *((local_a0 + 16)) = configdecoder::NpcType::List(field_240);
            pSVar9 = (SeqType*)(*((local_a0 + 16))).operator->();
            result = configdecoder::NpcType::GetTempModel(pSVar9, (int)seqType1,
                                                          (SeqType*)(unsigned long)(unsigned int)arg2, (int)seqType2,
                                                          (NPCTypeCustomisation*)(unsigned long)(unsigned int)arg4);
            ((local_a0 + 16))->~shared_ptr();
            goto LAB_100205cf5;
        }
        ReturnValue RVar25 = *(ReturnValue*)field_248;
        new ((local_a0 + 16)) eastl::fixed_vector<int, 12ul>(this);
        PlayerModel* local_a8 = this;
        if ((seqType1 != nullptr) && ((-1 < (int)seqType1->field_232 || (-1 < (int)seqType1->field_236)))) {
            uVar23 = 0;
            do {
                puVar10 = (uint32_t*)(*local_a8)[uVar23];
                uVar27 = *puVar10;
                puVar10 = (uint32_t*)(*((local_a0 + 16)))[uVar23];
                *puVar10 = uVar27;
                uVar23 = uVar23 + 1;
            } while (uVar23 != 12);
            uVar3 = seqType1->field_232;
            if (-1 < (int)uVar3) {
                piVar11 = (int*)(*local_a8)[5];
                iVar26 = *piVar11;
                uVar4 = seqType1->field_232;
                puVar12 = (unsigned int*)(*((local_a0 + 16)))[5];
                RVar25 = (ReturnValue)((long)RVar25 + ((unsigned long)(uVar3 - iVar26) << 40));
                *puVar12 = uVar4;
            }
            uVar3 = seqType1->field_236;
            if (-1 < (int)uVar3) {
                piVar11 = (int*)(*local_a8)[3];
                iVar26 = *piVar11;
                uVar4 = seqType1->field_236;
                puVar12 = (unsigned int*)(*((local_a0 + 16)))[3];
                RVar25 = (ReturnValue)((long)RVar25 + ((unsigned long)(uVar3 - iVar26) << 48));
                *puVar12 = uVar4;
            }
        }
        pSVar9 = seqType1;
        local_e8[0] = RVar25;
        auto groundDecor = m_modelCache.Find(local_e8);
        shared_ptr<dash3d::Decor> local_b8(groundDecor);
        bool bVar6 = local_b8 != nullptr;
        if (bVar6) {
            plVar13 = (long*)local_b8.operator->();
            cVar7 = (**(void (**)(...))(*plVar13 + 56))(plVar13);
            if (dash3d::g_usingRSeven != cVar7) {
                local_b8.reset();
            }
        }
        bVar6 = local_b8 == nullptr;
        if (bVar6) {
            uVar23 = 0;
            bVar6 = false;
            do {
                puVar12 = (unsigned int*)(*((local_a0 + 16)))[uVar23];
                uVar3 = *puVar12;
                if ((uVar3 & 4294967040) == 256) {
                    local_e8 = configdecoder::IdkType::List(uVar3 - 256);
                    pIVar14 = (IdkType*)local_e8.operator->();
                    cVar7 = pIVar14->CheckModel();
                    if (!cVar7) {
                        bVar6 = true;
                    }
                    pSVar9 = seqType1;
                }
                if (511 < (int)uVar3) {
                    local_e8 = configdecoder::ObjType::List(uVar3 - 512);
                    pOVar15 = (ObjType*)local_e8.operator->();
                    cVar7 = pOVar15->CheckWearModel(local_a8->m_bodytype);
                    if (!cVar7) {
                        bVar6 = true;
                    }
                }
                pPVar5 = local_a8;
                uVar23 = uVar23 + 1;
            } while (uVar23 != 12);
            if (!bVar6) {
            LAB_1002055da:
                bVar6 = local_b8 == nullptr;
                if (bVar6) {
                    local_a0->destruct<highlight::NpcUID*>();
                    local_e8 = eastl::vector<shared_ptr<dash3d::ModelUnlit>, BucketAllocatorEASTL>(12, *local_a0);
                    puVar1 = &pPVar5->field_264;
                    uVar23 = 0;
                    iVar26 = 0;
                    do {
                        puVar12 = (unsigned int*)(*((local_a0 + 16)))[uVar23];
                        uVar3 = *puVar12;
                        if ((uVar3 & 4294967040) == 256) {
                            local_100 = configdecoder::IdkType::List(uVar3 - 256);
                            pIVar14 = (IdkType*)local_100.operator->();
                            *local_a0 = pIVar14->GetModelNoCheck();
                            bVar6 = *local_a0 != nullptr;
                            if (bVar6) {
                                psVar16 = &local_e8[(long)iVar26];
                                *psVar16 = *local_a0;
                                iVar26 = iVar26 + 1;
                            }
                        }
                        if (511 < (int)uVar3) {
                            *local_a0 = configdecoder::ObjType::List(uVar3 - 512);
                            pOVar15 = (ObjType*)(*local_a0).operator->();
                            local_100 = pOVar15->GetWearModelNoCheck(local_a8->m_bodytype);
                            bVar6 = local_100 != nullptr;
                            if ((bVar6) && (cVar7 = puVar1->empty(), !cVar7)) {
                                midiPlayerMainThread = (shared_ptr<midi2::MidiPlayerMainThread>*)(*puVar1)[uVar23];
                                bVar6 = *midiPlayerMainThread != nullptr;
                                if (bVar6) {
                                    this_00 = (shared_ptr<configdecoder::ObjTypeCustomisation>*)(*puVar1)[uVar23];
                                    local_c0 = (Array<game::VarValue>*)**this_00;
                                    cVar7 = local_c0->empty();
                                    if (!cVar7) {
                                        lVar17 = (*local_a0).operator->();
                                        cVar7 = ((lVar17 + 80))->empty();
                                        if (!cVar7) {
                                            lVar17 = (*local_a0).operator->();
                                            lVar17 = ((lVar17 + 104))->end();
                                            lVar18 = local_c0->end();
                                            if (lVar17 == lVar18) {
                                                uVar24 = 0;
                                                while (true) {
                                                    lVar17 = (*local_a0).operator->();
                                                    uVar19 = ((lVar17 + 80))->end();
                                                    if (uVar19 <= uVar24)
                                                        break;
                                                    plVar13 = (long*)local_100.operator->();
                                                    lVar17 = (*local_a0).operator->();
                                                    psVar20 = (short*)(*((lVar17 + 104)))[uVar24];
                                                    sVar2 = *psVar20;
                                                    psVar20 = (short*)(*local_c0)[uVar24];
                                                    (**(void (**)(...))(*plVar13 + 160))(plVar13, (int)sVar2,
                                                                                         (int)*psVar20);
                                                    uVar24 = uVar24 + 1;
                                                }
                                            }
                                        }
                                    }
                                    local_c0 = local_c0 + 24;
                                    cVar7 = local_c0->empty();
                                    if (!cVar7) {
                                        lVar17 = (*local_a0).operator->();
                                        cVar7 = ((lVar17 + 128))->empty();
                                        if (!cVar7) {
                                            lVar17 = (*local_a0).operator->();
                                            lVar17 = ((lVar17 + 152))->end();
                                            lVar18 = local_c0->end();
                                            if (lVar17 == lVar18) {
                                                uVar24 = 0;
                                                while (true) {
                                                    lVar17 = (*local_a0).operator->();
                                                    uVar19 = ((lVar17 + 128))->end();
                                                    if (uVar19 <= uVar24)
                                                        break;
                                                    plVar13 = (long*)local_100.operator->();
                                                    lVar17 = (*local_a0).operator->();
                                                    psVar20 = (short*)(*((lVar17 + 152)))[uVar24];
                                                    sVar2 = *psVar20;
                                                    psVar20 = (short*)(*local_c0)[uVar24];
                                                    (**(void (**)(...))(*plVar13 + 168))(plVar13, (int)sVar2,
                                                                                         (int)*psVar20);
                                                    uVar24 = uVar24 + 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            psVar16 = &local_e8[(long)iVar26];
                            *psVar16 = local_100;
                            iVar26 = iVar26 + 1;
                        }
                        uVar23 = uVar23 + 1;
                    } while (uVar23 != 12);
                    local_a0->Combine(local_e8);
                    puVar1 = &local_a8->field_176;
                    uVar23 = 0;
                    do {
                        piVar11 = (int*)(*puVar1)[uVar23];
                        iVar26 = *piVar11;
                        pvVar21 = &m_recol1d[uVar23];
                        iVar8 = pvVar21->end();
                        if (iVar26 < iVar8) {
                            plVar13 = (long*)(*local_a0).operator->();
                            psVar20 = &m_recol1s[uVar23];
                            sVar2 = *psVar20;
                            piVar11 = (int*)(*puVar1)[uVar23];
                            psVar20 = (short*)(*pvVar21)[(long)*piVar11];
                            (**(void (**)(...))(*plVar13 + 160))(plVar13, (int)sVar2, (int)*psVar20);
                        }
                        piVar11 = (int*)(*puVar1)[uVar23];
                        iVar26 = *piVar11;
                        pvVar21 = &m_recol2d[uVar23];
                        iVar8 = pvVar21->end();
                        if (iVar26 < iVar8) {
                            plVar13 = (long*)(*local_a0).operator->();
                            psVar20 = &m_recol2s[uVar23];
                            sVar2 = *psVar20;
                            piVar11 = (int*)(*puVar1)[uVar23];
                            psVar20 = (short*)(*pvVar21)[(long)*piVar11];
                            (**(void (**)(...))(*plVar13 + 160))(plVar13, (int)sVar2, (int)*psVar20);
                        }
                        uVar27 = (uint32_t)((unsigned long)in_stack_fffffffffffffed8 >> 32);
                        uVar23 = uVar23 + 1;
                    } while (uVar23 != 5);
                    plVar13 = (long*)(*local_a0).operator->();
                    (**(void (**)(...))(*plVar13 + 72))(&local_100, plVar13, 64, 850, 4294967266, 4294967246,
                                                        (((uint64_t)uVar27 << 32) | (uint32_t)4294967266));
                    local_b8 = local_100;
                    pPVar5 = local_a8;
                    pSVar9 = seqType1;
                    local_100[0] = RVar25;
                    m_modelCache.Put(local_b8, 1, local_100);
                    *(ReturnValue*)&pPVar5->field_256 = RVar25;
                }
                goto LAB_100205b7e;
            }
            if (*(ReturnValue*)&local_a8->field_256 != (ReturnValue)18446744073709551615) {
                local_e8[0] = *(ReturnValue*)&local_a8->field_256;
                modelLit = (shared_ptr<dash3d::ModelLit>*)m_modelCache.Find(local_e8);
                local_b8 = *modelLit;
                bVar6 = local_b8 != nullptr;
                if (bVar6) {
                    plVar13 = (long*)local_b8.operator->();
                    cVar7 = (**(void (**)(...))(*plVar13 + 56))(plVar13);
                    if (dash3d::g_usingRSeven != cVar7) {
                        local_b8.reset();
                    }
                }
            }
            bVar6 = local_b8 == nullptr;
            if (!bVar6)
                goto LAB_1002055da;
            auto result;
        } else {
        LAB_100205b7e:
            local_e8 = shared_ptr();
            if (pSVar9 == nullptr && seqType2 == nullptr) {
                plVar13 = (long*)local_b8.operator->();
                (**(void (**)(...))(*plVar13 + 80))(local_a0, plVar13, 1, 1);
                local_e8 = *local_a0;
            } else if ((pSVar9 == nullptr) || (seqType2 == nullptr)) {
                if (pSVar9 == nullptr) {
                    pMVar22 = (ModelLit*)*local_b8;
                    *local_a0 = seqType2->AnimateModel(*pMVar22, (unsigned int)arg4, 1);
                    local_e8 = *local_a0;
                } else {
                    pMVar22 = (ModelLit*)*local_b8;
                    *local_a0 = pSVar9->AnimateModel(*pMVar22, (unsigned int)arg2, 1);
                    local_e8 = *local_a0;
                }
            } else {
                iVar26 = *local_b8;
                local_a0->SplitAnimateModel(*pSVar9, iVar26, *((SeqType*)(unsigned long)(unsigned int)arg2),
                                            (int)seqType2);
                local_e8 = *local_a0;
            }
            result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_e8);
        }
        ((local_a0 + 16))->~fixed_vector();
    LAB_100205cf5:
        return result;
    }

    // 0x1002061d0
    int PlayerModel::GetHeadModelCacheId() {
        int* piVar2;
        ReturnValue local_30;
        int local_14;

        unsigned long local_20 = *(unsigned long*)field_248;
        if ((unsigned long)field_240 != 4294967295) {
            local_20 = (unsigned long)field_240 | 18446744073709486080;
        }
        auto objType = m_headModelHashToModelCacheID.Find(local_20);
        if (*objType == nullptr) {
            local_14 = m_nextHeadModelCacheID;
            m_nextHeadModelCacheID = m_nextHeadModelCacheID + 1;
            make_shared<int, int&>(&local_30, &local_14);
            m_headModelHashToModelCacheID.Put(local_30, 1, local_20);
            m_nextHeadModelCacheID = m_nextHeadModelCacheID % 65535;
        } else {
            piVar2 = (int*)**objType;
            local_14 = *piVar2;
        }
        return local_14;
    }

    // 0x100206530
    void PlayerModel::ResetCache() {
        m_modelCache.Reset();
    }

    // 0x100206590
    void PlayerModel::SetAppearance(const eastl::fixed_vector<int, 12ul>& arg1,
                                    const eastl::fixed_vector<int, 12ul>& arg2,
                                    Array<shared_ptr<configdecoder::ObjTypeCustomisation>> objTypeCustomisations,
                                    bool arg4, const eastl::fixed_vector<int, 5ul>& arg5, int arg6, int arg7,
                                    int arg8) {
        field_264 = *objTypeCustomisations;
        field_288 = arg4;
        m_pronoun = arg8;
        SetAppearance(this, arg1, arg2, arg5, arg6, arg7);
    }

} // namespace jag::oldscape::rs2lib
