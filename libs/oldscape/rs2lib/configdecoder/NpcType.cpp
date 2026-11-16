// libs/oldscape/rs2lib/configdecoder/NpcType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.rs2lib

#include "NpcType.h"

namespace jag::oldscape::configdecoder {
    // 0x10103d438
    int64_t NpcType::m_pConfigClient;

    // 0x10103d440
    int64_t NpcType::m_pModels;

    // 0x10103d448
    LRUHashCache<NpcType, 64ul, 65ul, false, unsigned long long> NpcType::m_recentUse;

    // 0x10103e948
    LRUHashCache<dash3d::ModelLit, 64ul, 65ul, false, unsigned long long> NpcType::m_modelCache;

    // 0x10022d580
    void NpcType::Init(jagex3::Js5* js51, jagex3::Js5* js52) {
        m_pConfigClient = js51;
        m_pModels = js52;
    }

    // 0x10022d5a0
    auto NpcType::List(int arg1) {
        int* piVar2;
        NpcType* npcType;
        shared_ptr<dash3d::Decor> local_50;
        ReturnValue local_40;
        ReturnValue local_30;

        local_30[0] = (ReturnValue)(long)arg1;
        auto groundDecor = m_recentUse.Find(local_30);
        auto result(groundDecor);
        if (!(result != nullptr)) {
            local_30 = shared_ptr();
            m_pConfigClient->GetFile(local_30, 9, arg1, nullptr);
            make_shared<NpcType>(&local_40);
            result = local_40;
            piVar2 = (int*)(result).operator->();
            *piVar2 = arg1;
            if (local_30 != nullptr) {
                npcType = (NpcType*)(result).operator->();
                local_50 = shared_ptr(&local_30);
                Decode(npcType, &local_50);
            }
            (result).operator->();
            local_40[0] = (ReturnValue)(long)arg1;
            m_recentUse.Put(result, 1, local_40);
        }
        return result;
    }

    // 0x10022d820
    void NpcType::Decode(shared_ptr<PacketJ<Array<unsigned char>>> packetJ) {
        shared_ptr<dash3d::Decor> local_38;

        PacketReaderMixin<PacketT<Array<unsigned char>>>* pPVar1 =
            (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
        uint8_t bVar2 = pPVar1->g1();
        if (bVar2 != 0) {
            do {
                local_38 = shared_ptr(packetJ);
                Decode(&local_38, (unsigned int)bVar2);
                pPVar1 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                bVar2 = pPVar1->g1();
            } while (bVar2 != 0);
        }
    }

    // 0x10022d8b0
    void NpcType::PostDecode() {}

    // 0x10022d9b0
    void NpcType::Decode(shared_ptr<PacketJ<Array<unsigned char>>> packetJ, int arg2) {
        uint8_t bVar1;
        bool bVar2;
        char cVar3;
        unsigned short uVar4;
        uint16_t uVar5;
        short sVar6;
        uint32_t uVar7;
        unsigned int* puVar8;
        PacketReaderMixin<PacketT<Array<unsigned char>>>* pPVar9;
        eastl::string* pbVar10;
        int* piVar11;
        uint32_t* puVar12;
        uint16_t* puVar13;
        unsigned int uVar14;
        unsigned int uVar15;
        unsigned long uVar16;
        unsigned long uVar17;
        uint8_t* puVar18;
        int iVar19;
        PacketReaderMixin<PacketT<Array<unsigned char>>> local_60;
        unsigned long local_40;
        Array<short>* local_38;

        switch (arg2) {
        case 1:
            pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
            bVar1 = pPVar9->g1();
            field_48.set_max_size((unsigned long)bVar1, 5);
            if (bVar1 != 0) {
                uVar16 = 0;
                do {
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    uVar4 = pPVar9->g2();
                    puVar8 = &field_48[uVar16];
                    *puVar8 = (unsigned int)uVar4;
                    uVar16 = uVar16 + 1;
                } while (bVar1 != uVar16);
            }
            break;
        case 2:
            bVar2 = (bool)(*packetJ).operator->();
            PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_60, bVar2);
            field_8 = &local_60;
            break;
        default:
            if (arg2 - 30U < 5) {
                bVar2 = (bool)(*packetJ).operator->();
                PacketReaderMixin<PacketT<Array<unsigned char>>>::gStringCP1252ToUTF8<eastl::string>(&local_60, bVar2);
                puVar18 = &field_256;
                uVar16 = (unsigned long)(arg2 - 30U);
                pbVar10 = (eastl::string*)(*puVar18)[uVar16];
                *pbVar10 = &local_60;
                cVar3 = core::stringtools::general::StringTools::EqualsIgnoreCase(
                    *((eastl::string*)(*puVar18)[uVar16]), *((eastl::string*)&constants::text::hidden));
                if (cVar3) {
                    pbVar10 = (eastl::string*)(*puVar18)[uVar16];
                    eastl::string::assign(pbVar10, "");
                }
            } else {
                switch (arg2) {
                case 40:
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    bVar1 = pPVar9->g1();
                    local_38 = (Array<short>*)&field_160;
                    uVar16 = (unsigned long)bVar1;
                    local_38->set_max_size(uVar16, 5);
                    field_184.set_max_size(uVar16, 5);
                    if (bVar1 != 0) {
                        uVar17 = 0;
                        do {
                            pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                            uVar5 = pPVar9->g2();
                            puVar13 = (uint16_t*)(*local_38)[uVar17];
                            *puVar13 = uVar5;
                            pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                            uVar5 = pPVar9->g2();
                            puVar13 = &field_184[uVar17];
                            *puVar13 = uVar5;
                            uVar17 = uVar17 + 1;
                        } while (uVar16 != uVar17);
                    }
                    break;
                case 41:
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    bVar1 = pPVar9->g1();
                    local_38 = (Array<short>*)&field_208;
                    uVar16 = (unsigned long)bVar1;
                    local_38->set_max_size(uVar16, 5);
                    field_232.set_max_size(uVar16, 5);
                    if (bVar1 != 0) {
                        uVar17 = 0;
                        do {
                            pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                            uVar5 = pPVar9->g2();
                            puVar13 = (uint16_t*)(*local_38)[uVar17];
                            *puVar13 = uVar5;
                            pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                            uVar5 = pPVar9->g2();
                            puVar13 = &field_232[uVar17];
                            *puVar13 = uVar5;
                            uVar17 = uVar17 + 1;
                        } while (uVar16 != uVar17);
                    }
                    break;
                default:
                    (logger::default_logger())
                        ->Log(false, 8,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                              "configdecoder/NpcType.cpp",
                              306, "Error unrecognised .npc config code: %i", arg2);
                    break;
                case 60:
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    bVar1 = pPVar9->g1();
                    field_72.set_max_size((unsigned long)bVar1, 5);
                    if (bVar1 != 0) {
                        uVar16 = 0;
                        do {
                            pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                            uVar4 = pPVar9->g2();
                            puVar8 = &field_72[uVar16];
                            *puVar8 = (unsigned int)uVar4;
                            uVar16 = uVar16 + 1;
                        } while (bVar1 != uVar16);
                    }
                    break;
                case 93:
                    field_456 = 0;
                    break;
                case 95:
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    uVar4 = pPVar9->g2();
                    field_460 = (unsigned int)uVar4;
                    break;
                case 97:
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    uVar4 = pPVar9->g2();
                    field_464 = (unsigned int)uVar4;
                    break;
                case 98:
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    uVar4 = pPVar9->g2();
                    field_468 = (unsigned int)uVar4;
                    break;
                case 99:
                    field_472 = 1;
                    break;
                case 100:
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    cVar3 = pPVar9->g1s();
                    field_476 = (int)cVar3;
                    break;
                case 101:
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    cVar3 = pPVar9->g1s();
                    field_480 = cVar3 * 5;
                    break;
                case 102:
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    bVar1 = pPVar9->g1();
                    uVar15 = 0;
                    if (bVar1 != 0) {
                        uVar14 = (unsigned int)bVar1;
                        do {
                            uVar15 = uVar15 + 1;
                            bVar2 = 1 < uVar14;
                            uVar14 = uVar14 >> 1;
                        } while (bVar2);
                    }
                    local_38 = (Array<short>*)&field_584;
                    uVar16 = (unsigned long)uVar15;
                    local_38->resize(uVar16);
                    local_40 = uVar16;
                    m_headIconIndices->resize(uVar16);
                    if (uVar15 != 0) {
                        uVar16 = 0;
                        do {
                            if ((bVar1 >> ((unsigned int)uVar16 & 31) & 1) == 0) {
                                puVar12 = (uint32_t*)(*local_38)[uVar16];
                                *puVar12 = 4294967295;
                                iVar19 = -1;
                            } else {
                                pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                                uVar7 = pPVar9->gSmart2or4s();
                                puVar12 = (uint32_t*)(*local_38)[uVar16];
                                *puVar12 = uVar7;
                                pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                                sVar6 = pPVar9->gSmart1Or2Minus1();
                                iVar19 = (int)sVar6;
                            }
                            piVar11 = (int*)(*m_headIconIndices)[uVar16];
                            *piVar11 = iVar19;
                            uVar16 = uVar16 + 1;
                        } while (local_40 != uVar16);
                    }
                    break;
                case 103:
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    uVar4 = pPVar9->g2();
                    field_484 = (unsigned int)uVar4;
                    break;
                case 106:
                case 118:
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    uVar4 = pPVar9->g2();
                    uVar15 = (unsigned int)uVar4;
                    if (uVar4 == 65535) {
                        uVar15 = 4294967295;
                    }
                    field_512 = uVar15;
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    uVar4 = pPVar9->g2();
                    uVar15 = (unsigned int)uVar4;
                    if (uVar4 == 65535) {
                        uVar15 = 4294967295;
                    }
                    field_516 = uVar15;
                    uVar15 = 4294967295;
                    if (arg2 == 118) {
                        pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                        uVar4 = pPVar9->g2();
                        uVar15 = 4294967295;
                        if (uVar4 != 65535) {
                            uVar15 = (unsigned int)uVar4;
                        }
                    }
                    local_38 = (Array<short>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)uVar15);
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    bVar1 = pPVar9->g1();
                    puVar18 = &field_488;
                    puVar18->set_max_size((unsigned long)(bVar1 + 2), 5);
                    uVar16 = 0;
                    do {
                        pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                        uVar4 = pPVar9->g2();
                        puVar8 = (unsigned int*)(*puVar18)[uVar16];
                        *puVar8 = (unsigned int)uVar4;
                        piVar11 = (int*)(*puVar18)[uVar16];
                        if (*piVar11 == 65535) {
                            puVar12 = (uint32_t*)(*puVar18)[uVar16];
                            *puVar12 = 4294967295;
                        }
                        uVar16 = uVar16 + 1;
                    } while (bVar1 + 1 != uVar16);
                    puVar12 = (uint32_t*)(*puVar18)[(unsigned long)(bVar1 + 1)];
                    *puVar12 = local_38._0_4_;
                    break;
                case 107:
                    field_520 = 0;
                    break;
                case 109:
                    field_521 = 0;
                    break;
                case 111:
                    field_522 = 1;
                    break;
                case 114:
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    uVar4 = pPVar9->g2();
                    field_124 = (unsigned int)uVar4;
                    break;
                case 115:
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    uVar4 = pPVar9->g2();
                    field_124 = (unsigned int)uVar4;
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    uVar4 = pPVar9->g2();
                    field_128 = (unsigned int)uVar4;
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    uVar4 = pPVar9->g2();
                    field_132 = (unsigned int)uVar4;
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    uVar4 = pPVar9->g2();
                    field_136 = (unsigned int)uVar4;
                    break;
                case 116:
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    uVar4 = pPVar9->g2();
                    field_140 = (unsigned int)uVar4;
                    break;
                case 117:
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    uVar4 = pPVar9->g2();
                    field_140 = (unsigned int)uVar4;
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    uVar4 = pPVar9->g2();
                    field_144 = (unsigned int)uVar4;
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    uVar4 = pPVar9->g2();
                    field_148 = (unsigned int)uVar4;
                    pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
                    uVar4 = pPVar9->g2();
                    field_152 = (unsigned int)uVar4;
                    break;
                case 249:
                    ParamTypeHelper::UnpackClientParams(*((PacketJ<Array<unsigned char> _>*)**packetJ), field_528);
                }
            }
            break;
        case 12:
            pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
            bVar1 = pPVar9->g1();
            field_40 = (unsigned int)bVar1;
            break;
        case 13:
            pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
            uVar4 = pPVar9->g2();
            field_96 = (unsigned int)uVar4;
            break;
        case 14:
            pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
            uVar4 = pPVar9->g2();
            field_108 = (unsigned int)uVar4;
            break;
        case 15:
            pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
            uVar4 = pPVar9->g2();
            field_100 = (unsigned int)uVar4;
            break;
        case 16:
            pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
            uVar4 = pPVar9->g2();
            field_104 = (unsigned int)uVar4;
            break;
        case 17:
            pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
            uVar4 = pPVar9->g2();
            field_108 = (unsigned int)uVar4;
            pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
            uVar4 = pPVar9->g2();
            field_112 = (unsigned int)uVar4;
            pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
            uVar4 = pPVar9->g2();
            field_116 = (unsigned int)uVar4;
            pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
            uVar4 = pPVar9->g2();
            field_120 = (unsigned int)uVar4;
            break;
        case 18:
            pPVar9 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)(*packetJ).operator->();
            uVar4 = pPVar9->g2();
            field_156 = (unsigned int)uVar4;
        }
    }

    // 0x10022e620
    auto NpcType::GetTempModel(SeqType* seqType1, int arg2, SeqType* seqType2, int arg4,
                               NPCTypeCustomisation* npcTypeCustomisation) {
        bool bVar2;
        int iVar3;
        ModelLit* pMVar5;
        long* plVar6;
        uint32_t in_register_00000014;
        uint32_t in_register_00000084;
        CoordMapSquare* in_stack_00000008;
        uint64_t in_stack_ffffffffffffff78;
        ReturnValue local_40;

        uint32_t uVar7 = (uint32_t)((unsigned long)in_stack_ffffffffffffff78 >> 32);
        SeqType* seqType = (SeqType*)(((uint64_t)in_register_00000084 << 32) | (uint32_t)arg4);
        SeqType* pSVar4 = (SeqType*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        if (seqType1[1].field_224.empty() == '\0') {
            GetMultiNpc(&local_68, (NpcType*)seqType1);
            bVar2 = local_68 == nullptr;
            if (bVar2) {
                auto result;
            } else {
                pSVar4 = (SeqType*)local_68.operator->();
                GetTempModel(&result, pSVar4, arg2, (SeqType*)(unsigned long)(unsigned int)seqType2, arg4,
                             (NPCTypeCustomisation*)(unsigned long)(unsigned int)npcTypeCustomisation);
            }
            return result;
        }
        unsigned long local_70 = (unsigned long)seqType1->field_0;
        if (65535 < (long)local_70) {
            LogAssert("m_myId < 0x10000",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/rs2lib/"
                      "configdecoder/NpcType.cpp",
                      343, nullptr);
        }
        if (in_stack_00000008 != nullptr) {
            iVar3 = in_stack_00000008->GetZ();
            local_70 = local_70 | (long)iVar3 << 16;
        }
        if (dash3d::g_usingRSeven != '\0') {
            local_70 = local_70 | 281474976710656;
        }
        auto groundDecor = m_modelCache.Find(local_70);
        shared_ptr local_68(groundDecor);
        bVar2 = local_68 == nullptr;
        if (bVar2) {
            BuildModel(&local_58, (Array<int>*)seqType1, (NPCTypeCustomisation*)&seqType1->field_48);
            bVar2 = local_58 == nullptr;
            if (bVar2) {
                new (&result) shared_ptr();
            } else {
                plVar6 = (long*)local_58.operator->();
                (**(void (**)(...))(*plVar6 + 72))(&local_40, plVar6, *(int*)&seqType1[1].field_212 + 64,
                                                   *(int*)&seqType1[1].field_216 + 850, 4294967266, 4294967246,
                                                   (((uint64_t)uVar7 << 32) | (uint32_t)4294967266));
                local_68 = local_40;
                m_modelCache.Put(local_68, 1, local_70);
            }
            if (bVar2)
                goto LAB_10022e974;
        }
        shared_ptr<ObjType> local_58;
        if ((pSVar4 == nullptr) || (seqType == nullptr)) {
            if (pSVar4 != nullptr) {
                pMVar5 = (ModelLit*)*local_68;
                local_40 = pSVar4->AnimateModel(*pMVar5, (unsigned int)seqType2, 1);
                local_58 = local_40;
                goto LAB_10022e913;
            }
            if (seqType != nullptr) {
                pMVar5 = (ModelLit*)*local_68;
                local_40 = seqType->AnimateModel(*pMVar5, (unsigned int)npcTypeCustomisation, 1);
                local_58 = local_40;
                goto LAB_10022e913;
            }
            if ((*(int*)&seqType1[1].field_200 != 128) || (*(int*)&seqType1[1].field_204 != 128)) {
                plVar6 = (long*)local_68.operator->();
                (**(void (**)(...))(*plVar6 + 80))(&local_40, plVar6, 1, 1);
                local_58 = local_40;
                goto LAB_10022e913;
            }
            local_58 = local_68;
        } else {
            iVar3 = *local_68;
            local_40.SplitAnimateModel(*pSVar4, iVar3, *((SeqType*)(unsigned long)(unsigned int)seqType2), arg4);
            local_58 = local_40;
        LAB_10022e913:
        }
        if ((*(int*)&seqType1[1].field_200 != 128) || (*(int*)&seqType1[1].field_204 != 128)) {
            plVar6 = (long*)local_58.operator->();
            (**(void (**)(...))(*plVar6 + 168))(plVar6, *(uint32_t*)&seqType1[1].field_200,
                                                *(uint32_t*)&seqType1[1].field_204);
        }
        result.shared_ptr<FileRSevenDebugPresetProvider, void>(local_58);
    LAB_10022e974:
        return result;
    }

    // 0x10022ea10
    auto NpcType::GetMultiNpc() const {
        int iVar1;
        int iVar2;
        int* piVar4;
        unsigned long arg1;

        if (field_512 == 4294967295) {
            if ((long)(int)field_516 != 18446744073709551615) {
                piVar4 = (int*)(*((Array<int>*)&ClientVarCache::m_var))[(long)(int)field_516];
                iVar1 = *piVar4;
                goto joined_r0x00010022ea5a;
            }
        } else {
            iVar1 = ClientVarCache::GetVarbit(field_512);
        joined_r0x00010022ea5a:
            if ((-1 < iVar1) && (iVar2 = field_488.end(), iVar1 < iVar2 - 1)) {
                arg1 = (unsigned long)iVar1;
                goto LAB_10022ea9e;
            }
        }
        arg1 = field_488.end() - 1;
    LAB_10022ea9e:
        piVar4 = &field_488[arg1];
        if (*piVar4 == -1) {
            auto result;
        } else {
            List(&result, *piVar4);
        }
        return result;
    }

    // 0x10022eb70
    NpcType* NpcType::BuildModel(const Array<int>& arg1, const NPCTypeCustomisation* npcTypeCustomisation) const {
        short sVar2;
        Js5* pJVar3;
        bool bVar5;
        Layout* this_01;
        int* piVar6;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        int* arg2;
        unsigned long uVar8;
        shared_ptr<dash3d::ModelUnlit>* psVar9;
        Array<game::VarValue>* pAVar10;
        Array<short>* pAVar11;
        long* plVar12;
        short* psVar13;
        LoginManager* in_RCX;
        unsigned long uVar14;
        Array<int>* pAVar15;
        LoginManager* this_04;
        eastl local_48;

        Array<int> local_a0(npcTypeCustomisation);
        if (in_RCX != nullptr) {
            if (!(((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)in_RCX->second())->empty())) {
                this_01 = (Layout*)in_RCX->second();
                piVar6 = (int*)this_01->HeapBeginPtr();
                this_02 = (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)in_RCX->second();
                arg2 = (int*)this_02->end();
                local_88 = Array<int>(piVar6, arg2);
                local_a0 = local_88;
            }
        }
        LoginManager* local_68 = in_RCX;
        long lVar7 = local_a0.end();
        if (lVar7 == 0) {
            bVar5 = false;
        } else {
            uVar14 = 0;
            bVar5 = false;
            do {
                piVar6 = &local_a0[uVar14];
                pJVar3 = m_pModels;
                if (*piVar6 != -1) {
                    piVar6 = &local_a0[uVar14];
                    if (!(pJVar3->RequestDownload(*piVar6, 0))) {
                        bVar5 = true;
                    }
                }
                uVar14 = uVar14 + 1;
                uVar8 = local_a0.end();
            } while (uVar14 < uVar8);
        }
        NpcType* this_03 = this;
        if (bVar5) {
            new (this) shared_ptr();
            goto LAB_10022ef96;
        }
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_60;
        uVar14 = local_a0.end();
        eastl::destruct<highlight::NpcUID*>(&local_48);
        Array<int> local_88(uVar14, local_48);
        lVar7 = local_a0.end();
        if (lVar7 != 0) {
            uVar14 = 0;
            do {
                pJVar3 = m_pModels;
                piVar6 = &local_a0[uVar14];
                local_48.Load(*pJVar3, *piVar6, 0, false);
                psVar9 = &local_88[uVar14];
                *psVar9 = local_48;
                uVar14 = uVar14 + 1;
                uVar8 = local_a0.end();
            } while (uVar14 < uVar8);
        }
        lVar7 = local_88.size();
        if (lVar7 == 1) {
            psVar9 = &local_88[0];
            this_03 = this;
            this_04 = local_68;
            pAVar15 = arg1;
            local_60 = *psVar9;
            bVar5 = local_60 == nullptr;
            if (bVar5) {
                local_48.Combine(local_88);
                local_60 = local_48;
                goto LAB_10022edd9;
            }
        } else {
            local_48.Combine(local_88);
            this_03 = this;
            this_04 = local_68;
            pAVar15 = arg1;
            local_60 = local_48;
        LAB_10022edd9:
        }
        Array<game::VarValue>* pAVar1 = (Array<game::VarValue>*)(pAVar15 + 160);
        if (!(pAVar1->empty())) {
            local_48 = Array<short>((pAVar15 + 184));
            if (this_04 != nullptr) {
                pAVar10 = (Array<game::VarValue>*)this_04->get_overflow_allocator();
                if (!(pAVar10->empty())) {
                    pAVar11 = (Array<short>*)this_04->get_overflow_allocator();
                    local_48 = *pAVar11;
                }
            }
            lVar7 = pAVar1->end();
            if (lVar7 != 0) {
                uVar14 = 0;
                do {
                    plVar12 = (long*)local_60.operator->();
                    psVar13 = (short*)(*pAVar1)[uVar14];
                    sVar2 = *psVar13;
                    psVar13 = &local_48[uVar14];
                    (**(void (**)(...))(*plVar12 + 160))(plVar12, (int)sVar2, (int)*psVar13);
                    uVar14 = uVar14 + 1;
                    uVar8 = pAVar1->end();
                } while (uVar14 < uVar8);
            }
            pAVar15 = arg1;
            this_03 = this;
            this_04 = local_68;
        }
        pAVar1 = (Array<game::VarValue>*)(pAVar15 + 208);
        if (!(pAVar1->empty())) {
            local_48 = Array<short>((pAVar15 + 232));
            if (this_04 != nullptr) {
                pAVar10 = (Array<game::VarValue>*)this_04->GetDevCredentialsOutputDirectory();
                if (!(pAVar10->empty())) {
                    pAVar11 = (Array<short>*)this_04->GetDevCredentialsOutputDirectory();
                    local_48 = *pAVar11;
                }
            }
            lVar7 = pAVar1->end();
            if (lVar7 != 0) {
                uVar14 = 0;
                do {
                    plVar12 = (long*)local_60.operator->();
                    psVar13 = (short*)(*pAVar1)[uVar14];
                    sVar2 = *psVar13;
                    psVar13 = &local_48[uVar14];
                    (**(void (**)(...))(*plVar12 + 168))(plVar12, (int)sVar2, (int)*psVar13);
                    uVar14 = uVar14 + 1;
                    uVar8 = pAVar1->end();
                } while (uVar14 < uVar8);
            }
            this_03 = this;
        }
        this_03->shared_ptr<FileRSevenDebugPresetProvider, void>(local_60);
    LAB_10022ef96:
        return this_03;
    }

    // 0x10022f820
    auto NpcType::GetHead(NPCTypeCustomisation* npcTypeCustomisation) {
        NpcType* this_00;
        ReturnValue local_38;

        if (field_488.empty() == '\0') {
            GetMultiNpc(&local_38, this);
            if (local_38 == nullptr) {
                auto result;
            } else {
                this_00 = (NpcType*)local_38.operator->();
                GetHead(&result, this_00, npcTypeCustomisation);
            }
        } else {
            BuildModel(&result, (Array<int>*)this, (NPCTypeCustomisation*)&field_72);
        }
        return result;
    }

    // 0x10022f8e0
    NpcType* NpcType::GetMultiNpcOrThis() const {
        NpcType* pNVar2;
        ReturnValue local_30;

        if (field_488.empty() == '\0') {
            GetMultiNpc(&local_30, this);
            pNVar2 = (NpcType*)local_30.end();
        } else {
            pNVar2 = nullptr;
        }
        if (pNVar2 != nullptr) {
            this = pNVar2;
        }
        return this;
    }

    // 0x10022f940
    NpcType* NpcType::GetSpecifiedMultiNpcOrThis(int arg1) const {
        int iVar1;
        NpcType* pNVar4;
        unsigned long arg1_00;
        ReturnValue local_30;

        if ((arg1 < 0) || (iVar1 = field_488.end(), iVar1 - 1 <= arg1)) {
            arg1_00 = field_488.end() - 1;
        } else {
            arg1_00 = (unsigned long)arg1;
        }
        int* piVar3 = &field_488[arg1_00];
        if (*piVar3 != -1) {
            List(&local_30, *piVar3);
            pNVar4 = (NpcType*)local_30.end();
            if (pNVar4 != nullptr) {
                return pNVar4;
            }
        }
        return this;
    }

    // 0x10022f9d0
    bool NpcType::IsMultiNpcVisible() {
        int iVar3;
        int iVar4;
        int* piVar5;
        unsigned long arg1;

        uint8_t* this_00 = &field_488;
        if (this_00->empty() != '\0') {
            return true;
        }
        if (field_512 == 4294967295) {
            if ((long)(int)field_516 != 18446744073709551615) {
                piVar5 = (int*)(*((Array<int>*)&ClientVarCache::m_var))[(long)(int)field_516];
                iVar3 = *piVar5;
                goto joined_r0x00010022fa2d;
            }
        } else {
            iVar3 = ClientVarCache::GetVarbit(field_512);
        joined_r0x00010022fa2d:
            if ((-1 < iVar3) && (iVar4 = this_00->end(), iVar3 < iVar4)) {
                arg1 = (unsigned long)iVar3;
                goto LAB_10022fa5d;
            }
        }
        arg1 = this_00->end() - 1;
    LAB_10022fa5d:
        piVar5 = (int*)(*this_00)[arg1];
        return *piVar5 != -1;
    }

    // 0x10022fa80
    auto NpcType::GetParam(int arg1, const eastl::string& str) {
        auto str_00 = ParamTypeHelper::GetParam(&field_528, arg1, str);
        return auto(*str_00);
    }

    // 0x10022fab0
    void NpcType::GetParam(int arg1, int arg2) {
        ParamTypeHelper::GetParam(&field_528, arg1, arg2);
    }

    // 0x10022fad0
    void NpcType::ResetCache() {
        m_recentUse.Reset();
        m_modelCache.Reset();
    }

    // 0x10022faf0
    uint32_t NpcType::GetHeadIconGraphic(int arg1) const {
        unsigned long uVar2;
        uint32_t* puVar3;

        uint8_t* this_00 = &field_584;
        bool cVar1 = this_00->empty();
        uint32_t uVar4 = 4294967295;
        if (!cVar1) {
            uVar2 = this_00->size();
            if ((unsigned long)(long)arg1 < uVar2) {
                puVar3 = (uint32_t*)(*this_00)[(long)arg1];
                uVar4 = *puVar3;
            }
        }
        return uVar4;
    }

    // 0x10022fb50
    uint32_t NpcType::GetHeadIconIndex(int arg1) const {
        unsigned long uVar2;
        uint32_t* puVar3;

        uint8_t* this_00 = &field_584;
        bool cVar1 = this_00->empty();
        uint32_t uVar4 = 4294967295;
        if (!cVar1) {
            uVar2 = this_00->size();
            if ((unsigned long)(long)arg1 < uVar2) {
                puVar3 = (uint32_t*)(*this_00)[(long)arg1];
                uVar4 = *puVar3;
            }
        }
        return uVar4;
    }

} // namespace jag::oldscape::configdecoder

namespace jag {
    // 0x10022d790
    shared_ptr_if_not_array<oldscape::configdecoder::NpcType>::type make_shared<oldscape::configdecoder::NpcType>() {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_2c;
        NpcType* local_28[2];

        auto arg1 = aligned_alloc(760, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::configdecoder::NpcType>::type result;
        } else {
            local_28[0] = placement_new<oldscape::configdecoder::NpcType>((void*)((long)arg1 + 32));
            local_2c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::configdecoder::NpcType>, int,
                              oldscape::configdecoder::NpcType*&>(arg1, &local_2c, local_28);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
