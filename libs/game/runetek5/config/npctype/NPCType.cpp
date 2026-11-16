// libs/game/runetek5/config/npctype/NPCType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "NPCType.h"

namespace jag::game {
    // 0x1039bbbe8, set at startup by ___cxx_global_var_init.5
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> NPCType::NullNpcType =
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();

    // 0x1000b7910: NPCType::GetOpNames() const has the same machine code as oldscape::minimenu::MinimenuEntry::GetSubjectName() const

    // 0x100189180: NPCType::GetHeadIconIndex() const has the same machine code as oldscape::OSClientConsole::GetInputHandler()

    // 0x1001d0880: NPCType::GetHeadList() const has the same machine code as graphics::DirLightCsmManager::GetConfig() const

    // 0x100501fb0
    NPCType::NPCType(BaseTemplateConfigTypeList<NPCType>* baseTemplateConfigTypeList, int arg2)
        : ConfigType<NPCType>(baseTemplateConfigTypeList, arg2), MakeSharedPool<NPCType, 216>(), field_496(4294967295),
          field_672(4294967295), m_icon(4294967295), m_overlayHeight(4294967295), m_reprioritiseAttackOp(4294967295),
          m_visibleCombatLevel(4294967295), field_692(1), field_696(4294967295), field_700(0), m_firstUniqueOpIndex(6),
          m_attackOpIndex(6), m_examineOpIndex(6), field_971(0), field_972(1.0, 1.0, 1.0) {
        *(uint32_t*)&field_984 = 64;
        field_988 = 1;
        m_fadeInDuration = 0;
        field_996 = 0;
        field_1000.unique_ptr<true, void>();
        field_1008 = 1;
        m_roughBounding = 4294967295;
        field_1016 = 0;
        m_highlightOverride = 9;
        m_baseAnimationSet = 4294967295;
        m_animationStateMachineID = 4294967295;
        m_gridSize = 1;
        m_alwaysOnTop = 0;
        m_alwaysOnBottom = 0;
        m_familiar = 0;
        m_turnSpeed = 32;
        field_1044 = 1;
        m_walkSmoothing = 1;
        field_1046 = 1;
        field_1048 = 0;
        field_1052 = 3.1415927f;
        field_1056 = MoveSpeed::WALK;
        field_1064 = 1;
        field_1068 = 4294967295;
        new (&field_1072) Array<int>();
        field_1096 = 4294967295;
        field_1100 = 4294967295;
        m_hasBackgroundMovementSound = false;
        m_backgroundSoundReady = 4294967295;
        m_backgroundSoundCrawl = 4294967295;
        m_backgroundSoundWalk = 4294967295;
        m_backgroundSoundRun = 4294967295;
        m_backgroundSoundRange = 0;
        m_backgroundSoundDropoffRange = 0;
        m_backgroundSoundVolume = 255;
        field_1136 = 256;
        field_1140 = 256;
        long lVar1 = field_24->GetPriority();
        uint64_t* puVar2 = (uint64_t*)(*(
            (array<char const*, 7ul>*)&LocalisedText::EXAMINE))[(unsigned long)*(unsigned int*)(lVar1 + 8)];
        char* str = (char*)*puVar2;
        fixed_string<char, 16>* this_00 = &field_56[5];
        *this_00 = str;
    }

    // 0x100502540
    uint8_t* NPCType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        uint8_t bVar1;
        uint8_t uVar2;
        char cVar3;
        uint16_t uVar4;
        unsigned short uVar5;
        unsigned short uVar6;
        short sVar7;
        uint32_t uVar13;
        unsigned int uVar14;
        uint32_t* puVar15;
        fixed_string<char, _24>* pfVar16;
        uint16_t* puVar17;
        uint8_t* puVar18;
        float* pfVar19;
        int* piVar20;
        unsigned int* puVar21;
        Vector3T<float>* pVVar23;
        unsigned int uVar29;
        unsigned int uVar30;
        unsigned long uVar31;
        unsigned long uVar32;
        int iVar33;
        bool bVar34;

        if (arg2 == 12) {
            bVar1 = arg1.g1();
            m_gridSize = (unsigned int)bVar1;
            return DataStatus::READY;
        }
        if (arg2 == 2) {
            arg1.gStringCP1252ToUTF8<eastl::string>(&field_440, false);
            return DataStatus::READY;
        }
        if (arg2 == 1) {
            bVar1 = arg1.g1();
            m_bodyList->set_max_size((unsigned long)bVar1, 0);
            if (bVar1 == 0) {
                return DataStatus::READY;
            }
            uVar31 = 0;
            do {
                uVar13 = arg1.gSmart2or4s();
                puVar15 = (uint32_t*)(*m_bodyList)[uVar31];
                *puVar15 = uVar13;
                uVar31 = uVar31 + 1;
            } while (bVar1 != uVar31);
            return DataStatus::READY;
        }
        if (arg2 - 30 < 5) {
            pfVar16 = &field_56[(unsigned long)(arg2 - 30)];
            arg1.gStringCP1252ToUTF8<eastl::fixed_string<char, 24>>(*pfVar16, false);
            return DataStatus::READY;
        }
        switch (arg2) {
        case 39:
        switchD_100502634_caseD_27:
            cVar3 = arg1.g1s();
            field_986 = cVar3 * 5;
            break;
        case 40:
            bVar1 = arg1.g1();
            uVar31 = (unsigned long)bVar1;
            field_800.set_max_size(uVar31, 0);
            field_824.set_max_size(uVar31, 0);
            if (bVar1 != 0) {
                uVar32 = 0;
                do {
                    uVar4 = arg1.g2();
                    puVar17 = &field_800[uVar32];
                    *puVar17 = uVar4;
                    uVar4 = arg1.g2();
                    puVar17 = &field_824[uVar32];
                    *puVar17 = uVar4;
                    uVar32 = uVar32 + 1;
                } while (uVar31 != uVar32);
            }
            break;
        case 41:
            bVar1 = arg1.g1();
            uVar31 = (unsigned long)bVar1;
            field_896.set_max_size(uVar31, 0);
            field_920.set_max_size(uVar31, 0);
            if (bVar1 != 0) {
                uVar32 = 0;
                do {
                    uVar4 = arg1.g2();
                    puVar17 = &field_896[uVar32];
                    *puVar17 = uVar4;
                    uVar4 = arg1.g2();
                    puVar17 = &field_920[uVar32];
                    *puVar17 = uVar4;
                    uVar32 = uVar32 + 1;
                } while (uVar31 != uVar32);
            }
            break;
        case 42:
            bVar1 = arg1.g1();
            field_848.set_max_size((unsigned long)bVar1, 0);
            if (bVar1 != 0) {
                uVar31 = 0;
                do {
                    uVar2 = arg1.g1();
                    puVar18 = &field_848[uVar31];
                    *puVar18 = uVar2;
                    uVar31 = uVar31 + 1;
                } while (bVar1 != uVar31);
            }
            break;
        default:
            if (arg2 - 97 < 2) {
                uVar5 = arg1.g2();
                if (arg2 == 97) {
                    pfVar19 = &field_972[2];
                    *pfVar19 = (float)uVar5 * 0.0078125f;
                }
                pfVar19 = &field_972[(unsigned int)(arg2 != 97)];
                *pfVar19 = (float)uVar5 * 0.0078125f;
                return DataStatus::READY;
            }
            switch (arg2) {
            case 99:
                m_alwaysOnTop = 1;
                break;
            case 100:
                cVar3 = arg1.g1s();
                *(short*)&field_984 = cVar3 + 64;
                break;
            case 101:
                goto switchD_100502634_caseD_27;
            case 102:
                bVar1 = arg1.g1();
                uVar30 = 0;
                if (bVar1 != 0) {
                    uVar29 = (unsigned int)bVar1;
                    do {
                        uVar30 = uVar30 + 1;
                        bVar34 = 1 < uVar29;
                        uVar29 = uVar29 >> 1;
                    } while (bVar34);
                }
                puVar18 = m_headIconGraphic;
                uVar31 = (unsigned long)uVar30;
                puVar18->resize(uVar31);
                m_headIconIndex->resize(uVar31);
                if (uVar30 != 0) {
                    uVar32 = 0;
                    do {
                        if ((bVar1 >> ((unsigned int)uVar32 & 31) & 1) == 0) {
                            puVar15 = (uint32_t*)(*puVar18)[uVar32];
                            *puVar15 = 4294967295;
                            iVar33 = -1;
                        } else {
                            uVar13 = arg1.gSmart2or4s();
                            puVar15 = (uint32_t*)(*puVar18)[uVar32];
                            *puVar15 = uVar13;
                            sVar7 = arg1.gSmart1Or2Minus1();
                            iVar33 = (int)sVar7;
                        }
                        piVar20 = (int*)(*m_headIconIndex)[uVar32];
                        *piVar20 = iVar33;
                        uVar32 = uVar32 + 1;
                    } while (uVar31 != uVar32);
                }
                break;
            case 103:
                uVar5 = arg1.g2();
                m_turnSpeed = (unsigned int)uVar5;
                break;
            default:
                if (arg2 - 150 < 5) {
                    pfVar16 = &field_56[(unsigned long)(arg2 - 150)];
                    arg1.gStringCP1252ToUTF8<eastl::fixed_string<char, 24>>(*pfVar16, false);
                    cVar3 = field_24->IsMembersServer();
                    if (!cVar3) {
                        *pfVar16 = "";
                        return DataStatus::READY;
                    }
                    return DataStatus::READY;
                }
                switch (arg2) {
                case 155:
                    uVar2 = arg1.g1s();
                    field_968 = uVar2;
                    uVar2 = arg1.g1s();
                    field_969 = uVar2;
                    uVar2 = arg1.g1s();
                    field_970 = uVar2;
                    uVar2 = arg1.g1s();
                    field_971 = uVar2;
                    break;
                default:
                    if (5 < arg2 - 170) {
                        switch (arg2) {
                        case 178:
                            field_692 = 0;
                            return DataStatus::READY;
                        case 179:
                            goto switchD_10050316b_caseD_b3;
                        case 180:
                            bVar1 = arg1.g1();
                            m_fadeInDuration = (unsigned int)bVar1 * 20;
                            return DataStatus::READY;
                        case 181:
                            uVar5 = arg1.g2();
                            field_696 = (unsigned int)uVar5;
                            bVar1 = arg1.g1();
                            field_700 = (unsigned int)bVar1;
                            return DataStatus::READY;
                        case 182:
                            field_1016 = 1;
                            return DataStatus::READY;
                        default:
                            (logger::default_logger())
                                ->Log(false, 2,
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/config/npctype/NPCType.cpp",
                                      477, "Unrecognised .npc config code: %u", arg2);
                            return DataStatus::READY;
                        case 184:
                            bVar1 = arg1.g1();
                            m_highlightOverride = (unsigned int)bVar1;
                            return DataStatus::READY;
                        case 185:
                            field_1008 = 0;
                            return DataStatus::READY;
                        case 249:
                            DecodeParams(arg1);
                            return DataStatus::READY;
                        case 252:
                            uVar5 = arg1.g2();
                            m_animationStateMachineID = (unsigned int)uVar5;
                            return DataStatus::READY;
                        }
                    }
                    puVar18 = &field_472;
                    cVar3 = puVar18->empty();
                    if (cVar3) {
                        uVar31 = 0;
                        puVar18->set_max_size(6, 0);
                        do {
                            puVar15 = (uint32_t*)(*puVar18)[uVar31];
                            *puVar15 = 4294967295;
                            uVar31 = uVar31 + 1;
                        } while (uVar31 != 6);
                    }
                    uVar5 = arg1.g2();
                    uVar30 = (unsigned int)uVar5;
                    uVar31 = (unsigned long)(arg2 - 170);
                    goto LAB_100502c71;
                case 158:
                    m_reprioritiseAttackOp = 1;
                    break;
                case 159:
                    m_reprioritiseAttackOp = 0;
                    break;
                case 160:
                    bVar1 = arg1.g1();
                    field_504.set_max_size((unsigned long)bVar1, 0);
                    if (bVar1 != 0) {
                        uVar31 = 0;
                        do {
                            uVar5 = arg1.g2();
                            puVar21 = &field_504[uVar31];
                            *puVar21 = (unsigned int)uVar5;
                            uVar31 = uVar31 + 1;
                        } while (bVar1 != uVar31);
                    }
                    break;
                case 163:
                    bVar1 = arg1.g1();
                    m_roughBounding = (unsigned int)bVar1;
                    break;
                case 164:
                    uVar5 = arg1.g2();
                    field_1136 = (unsigned int)uVar5;
                    uVar5 = arg1.g2();
                    field_1140 = (unsigned int)uVar5;
                    break;
                case 165:
                    bVar1 = arg1.g1();
                    field_996 = (unsigned int)bVar1;
                    break;
                case 168:
                    bVar1 = arg1.g1();
                    m_backgroundSoundDropoffRange = (unsigned int)bVar1;
                    break;
                case 169:
                    field_988 = 0;
                }
                break;
            case 106:
            case 118:
                uVar5 = arg1.g2();
                uVar30 = (unsigned int)uVar5;
                if (uVar5 == 65535) {
                    uVar30 = 4294967295;
                }
                field_1100 = uVar30;
                uVar5 = arg1.g2();
                uVar30 = (unsigned int)uVar5;
                if (uVar5 == 65535) {
                    uVar30 = 4294967295;
                }
                field_1096 = uVar30;
                uVar30 = 4294967295;
                if (arg2 == 118) {
                    uVar5 = arg1.g2();
                    uVar30 = 4294967295;
                    if (uVar5 != 65535) {
                        uVar30 = (unsigned int)uVar5;
                    }
                }
                uVar5 = arg1.gSmart1or2();
                puVar18 = &field_1072;
                uVar31 = 0;
                puVar18->set_max_size((unsigned long)(uVar5 + 2), 0);
                do {
                    uVar6 = arg1.g2();
                    puVar21 = (unsigned int*)(*puVar18)[uVar31];
                    *puVar21 = (unsigned int)uVar6;
                    piVar20 = (int*)(*puVar18)[uVar31];
                    if (*piVar20 == 65535) {
                        puVar15 = (uint32_t*)(*puVar18)[uVar31];
                        *puVar15 = 4294967295;
                    }
                    uVar31 = uVar31 + 1;
                } while (uVar5 + 1 != uVar31);
                puVar21 = (unsigned int*)(*puVar18)[(unsigned long)(uVar5 + 1)];
                *puVar21 = uVar30;
                break;
            case 107:
                field_1044 = 0;
                break;
            case 109:
                m_walkSmoothing = 0;
                break;
            case 111:
                field_1046 = 0;
                break;
            case 113:
                arg1.Skip(2);
                uVar31 = 2;
                goto LAB_100502e70;
            case 114:
                arg1.Skip(1);
                uVar31 = 1;
            LAB_100502e70:
                arg1.Skip(uVar31);
                break;
            case 119:
                bVar1 = arg1.g1();
                field_1048 = (unsigned int)bVar1;
                break;
            case 121:
                puVar18 = &field_768;
                uVar31 = m_bodyList->end();
                puVar18->resize(uVar31);
                bVar1 = arg1.g1();
                if (bVar1 != 0) {
                    uVar30 = (unsigned int)bVar1;
                    do {
                        bVar1 = arg1.g1();
                        cVar3 = arg1.g1s();
                        uVar31 = (unsigned long)bVar1;
                        pVVar23 = (Vector3T<float>*)(*puVar18)[uVar31];
                        pfVar19 = (float*)(*pVVar23)[0];
                        *pfVar19 = (float)(int)cVar3;
                        cVar3 = arg1.g1s();
                        pVVar23 = (Vector3T<float>*)(*puVar18)[uVar31];
                        pfVar19 = (float*)(*pVVar23)[1];
                        *pfVar19 = (float)(int)cVar3;
                        cVar3 = arg1.g1s();
                        pVVar23 = (Vector3T<float>*)(*puVar18)[uVar31];
                        pfVar19 = (float*)(*pVVar23)[2];
                        *pfVar19 = (float)(int)cVar3;
                        uVar30 = uVar30 - 1;
                    } while (uVar30 != 0);
                }
                break;
            case 123:
                uVar5 = arg1.g2();
                m_overlayHeight = (unsigned int)uVar5;
                break;
            case 125:
                cVar3 = arg1.g1s();
                field_1052 = (float)(int)cVar3;
                break;
            case 127:
                uVar5 = arg1.g2();
                m_baseAnimationSet = (unsigned int)uVar5;
                break;
            case 128:
                bVar1 = arg1.g1();
                field_1056 = (uint8_t*)((MoveSpeed*)(unsigned long)bVar1)->GetByID((int)arg1);
                break;
            case 134:
                uVar5 = arg1.g2();
                uVar30 = (unsigned int)uVar5;
                if (uVar5 == 65535) {
                    uVar30 = 4294967295;
                }
                m_backgroundSoundReady = uVar30;
                uVar5 = arg1.g2();
                uVar30 = (unsigned int)uVar5;
                if (uVar5 == 65535) {
                    uVar30 = 4294967295;
                }
                m_backgroundSoundCrawl = uVar30;
                uVar5 = arg1.g2();
                uVar30 = (unsigned int)uVar5;
                if (uVar5 == 65535) {
                    uVar30 = 4294967295;
                }
                m_backgroundSoundWalk = uVar30;
                uVar5 = arg1.g2();
                uVar30 = (unsigned int)uVar5;
                if (uVar5 == 65535) {
                    uVar30 = 4294967295;
                }
                m_backgroundSoundRun = uVar30;
                bVar1 = arg1.g1();
                m_backgroundSoundRange = (unsigned int)bVar1;
                bVar34 = true;
                if (((m_backgroundSoundReady == 4294967295) && (m_backgroundSoundCrawl == 4294967295)) &&
                    (m_backgroundSoundWalk == 4294967295)) {
                    bVar34 = m_backgroundSoundRun != 4294967295;
                }
                m_hasBackgroundMovementSound = bVar34;
                break;
            case 137:
                uVar5 = arg1.g2();
                field_496 = (unsigned int)uVar5;
                puVar18 = &field_472;
                cVar3 = puVar18->empty();
                if (cVar3) {
                    uVar31 = 0;
                    puVar18->set_max_size(6, 0);
                    do {
                        puVar15 = (uint32_t*)(*puVar18)[uVar31];
                        *puVar15 = 4294967295;
                        uVar31 = uVar31 + 1;
                    } while (uVar31 != 6);
                }
                uVar30 = field_496;
                uVar31 = 1;
            LAB_100502c71:
                puVar21 = &field_472[uVar31];
                *puVar21 = uVar30;
                break;
            case 138:
                uVar13 = arg1.gSmart2or4s();
                m_icon = uVar13;
                break;
            case 139:
                uVar13 = arg1.gSmart2or4s();
                field_672 = uVar13;
                break;
            case 140:
                bVar1 = arg1.g1();
                m_backgroundSoundVolume = (unsigned int)bVar1;
                break;
            case 141:
                m_familiar = 1;
                break;
            case 142:
                uVar5 = arg1.g2();
                field_1068 = (unsigned int)uVar5;
                break;
            case 143:
                m_alwaysOnBottom = 1;
            }
            break;
        case 44:
            uVar5 = arg1.g2();
            uVar30 = 0;
            if (uVar5 != 0) {
                uVar29 = (unsigned int)uVar5;
                do {
                    uVar30 = uVar30 + 1;
                    bVar34 = 1 < uVar29;
                    uVar29 = uVar29 >> 1;
                } while (bVar34);
            }
            field_872.set_max_size((unsigned long)uVar30, 0);
            if (uVar30 != 0) {
                uVar31 = 0;
                uVar29 = 0;
                do {
                    uVar14 = 1 << ((uint8_t)uVar31 & 31) & (unsigned int)uVar5;
                    puVar21 = &field_872[uVar31];
                    *puVar21 = -(unsigned int)(uVar14 == 0) | uVar29;
                    uVar31 = uVar31 + 1;
                    uVar29 = (uVar29 + 1) - (unsigned int)(uVar14 == 0);
                } while (uVar30 != uVar31);
            }
            break;
        case 45:
            uVar5 = arg1.g2();
            uVar30 = 0;
            if (uVar5 != 0) {
                uVar29 = (unsigned int)uVar5;
                do {
                    uVar30 = uVar30 + 1;
                    bVar34 = 1 < uVar29;
                    uVar29 = uVar29 >> 1;
                } while (bVar34);
            }
            field_944.set_max_size((unsigned long)uVar30, 0);
            if (uVar30 != 0) {
                uVar31 = 0;
                uVar29 = 0;
                do {
                    uVar14 = 1 << ((uint8_t)uVar31 & 31) & (unsigned int)uVar5;
                    puVar21 = &field_944[uVar31];
                    *puVar21 = -(unsigned int)(uVar14 == 0) | uVar29;
                    uVar31 = uVar31 + 1;
                    uVar29 = (uVar29 + 1) - (unsigned int)(uVar14 == 0);
                } while (uVar30 != uVar31);
            }
            break;
        case 60:
            bVar1 = arg1.g1();
            m_headList->set_max_size((unsigned long)bVar1, 0);
            if (bVar1 != 0) {
                uVar31 = 0;
                do {
                    uVar13 = arg1.gSmart2or4s();
                    puVar15 = (uint32_t*)(*m_headList)[uVar31];
                    *puVar15 = uVar13;
                    uVar31 = uVar31 + 1;
                } while (bVar1 != uVar31);
            }
            break;
        case 93:
            field_1064 = 0;
            break;
        case 95:
            uVar5 = arg1.g2();
            m_visibleCombatLevel = (unsigned int)uVar5;
        }
        return DataStatus::READY;
    switchD_10050316b_caseD_b3:
        sVar7 = arg1.gSmart1or2s();
        short sVar8 = arg1.gSmart1or2s();
        short sVar9 = arg1.gSmart1or2s();
        short sVar10 = arg1.gSmart1or2s();
        short sVar11 = arg1.gSmart1or2s();
        short sVar12 = arg1.gSmart1or2s();
        AABB* pAVar24 = (AABB*)operator new(32);
        new (pAVar24) math::AABB();
        puVar18 = &field_1000;
        puVar18->reset(pAVar24);
        Layout* pLVar25 = (Layout*)(*puVar18).operator->();
        pLVar25 = (Layout*)pLVar25->SSOBeginPtr();
        pfVar19 = (float*)pLVar25->SSOBeginPtr();
        *pfVar19 = (float)(int)sVar7;
        pLVar25 = (Layout*)(*puVar18).operator->();
        auto pVVar26 = pLVar25->SSOBeginPtr();
        pfVar19 = (float*)pVVar26->y();
        *pfVar19 = -(float)(int)sVar11;
        pLVar25 = (Layout*)(*puVar18).operator->();
        auto pcVar27 = pLVar25->SSOBeginPtr();
        pfVar19 = (float*)pcVar27->second();
        *pfVar19 = (float)(int)sVar9;
        NXTPixToolkit* pNVar28 = (NXTPixToolkit*)(*puVar18).operator->();
        pLVar25 = (Layout*)pNVar28->GetScreen();
        pfVar19 = (float*)pLVar25->SSOBeginPtr();
        *pfVar19 = (float)(int)sVar10;
        pNVar28 = (NXTPixToolkit*)(*puVar18).operator->();
        pVVar26 = (Vector2T<int>*)pNVar28->GetScreen();
        pfVar19 = (float*)pVVar26->y();
        *pfVar19 = -(float)(int)sVar8;
        pNVar28 = (NXTPixToolkit*)(*puVar18).operator->();
        pcVar27 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)pNVar28->GetScreen();
        pfVar19 = (float*)pcVar27->second();
        *pfVar19 = (float)(int)sVar12;
        pAVar24 = (AABB*)(*puVar18).operator->();
        cVar3 = pAVar24->IsValid();
        if (!cVar3) {
            LogAssert("m_customBounding->IsValid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "npctype/NPCType.cpp",
                      443, nullptr);
        }
        return DataStatus::READY;
    }

    // 0x100503980
    void NPCType::PostDecode() {
        uint8_t* puVar1;
        basic_string<char, BucketAllocatorEASTL>* pbVar2;
        long lVar3;
        uint64_t* puVar4;
        int iVar6;
        int iVar7;

        if (m_reprioritiseAttackOp == 4294967295) {
            puVar1 = (uint8_t*)field_24->GetAuthWrapper();
            m_reprioritiseAttackOp = (unsigned int)(puVar1 == ModeGame::RUNESCAPE);
        }
        uint8_t* this_00 = &field_56;
        unsigned long arg1 = 0;
        do {
            iVar7 = (int)arg1;
            if (m_attackOpIndex == 6) {
                pbVar2 = (basic_string<char, BucketAllocatorEASTL>*)(*this_00)[arg1];
                lVar3 = field_24->GetPriority();
                puVar4 = (uint64_t*)(*(
                    (array<char const*, 7ul>*)&LocalisedText::ATTACK))[(unsigned long)*(unsigned int*)(lVar3 + 8)];
                iVar6 = pbVar2->compare(*puVar4);
                if (iVar6 != 0)
                    goto LAB_100503a19;
                m_attackOpIndex = iVar7;
            } else {
            LAB_100503a19:
                if (m_examineOpIndex == 6) {
                    pbVar2 = (basic_string<char, BucketAllocatorEASTL>*)(*this_00)[arg1];
                    lVar3 = field_24->GetPriority();
                    puVar4 = (uint64_t*)(*(
                        (array<char const*, 7ul>*)&LocalisedText::EXAMINE))[(unsigned long)*(unsigned int*)(lVar3 + 8)];
                    iVar6 = pbVar2->compare(*puVar4);
                    if (iVar6 == 0) {
                        m_examineOpIndex = iVar7;
                        goto LAB_1005039d0;
                    }
                }
                if (m_firstUniqueOpIndex == 6) {
                    if (((basic_string<char,
                                       eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)(*this_00)[arg1])
                            ->empty() == '\0') {
                        m_firstUniqueOpIndex = iVar7;
                    }
                }
            }
        LAB_1005039d0:
            arg1 = arg1 + 1;
            if (arg1 == 6) {
                return;
            }
        } while (true);
    }

    // 0x100503ab0
    void NPCType::GetBodyModels(graphics::RT7Core* rt7Core, AssetBuilder& assetBuilder,
                                BuildRequest<graphics::Model, BuildModelMain>& buildRequest,
                                const NPCTypeCustomisation* npcTypeCustomisation,
                                const PlayerVarDomain* playerVarDomain, const ConfigProvider* configProvider) {
        RT7Core* rt7Core_00;
        uint8_t* puVar2;
        ConfigProvider* in_stack_00000008;
        shared_ptr<NPCType> local_68;
        uint8_t local_31;

        bool cVar1 = ((rt7Core->m_postProcessManager + 624))->empty();
        if (((!cVar1) && (configProvider != nullptr)) && (in_stack_00000008 != nullptr)) {
            GetMultiNPC(&local_68, (bool*)rt7Core, (PlayerVarDomain*)&local_31, configProvider);
            cVar1 = shared_ptr::operator_cast_to_bool(&local_68);
            if (!cVar1) {
                puVar2 = DataStatus::NOTLOADED;
            } else {
                rt7Core_00 = (RT7Core*)local_68.operator->();
                puVar2 = (uint8_t*)GetBodyModels(
                    rt7Core_00, (AssetBuilder*)(RT7Core*)assetBuilder,
                    (BuildRequest<graphics::Model, BuildModelMain>*)(Js5HTTPQueueRequest*)buildRequest,
                    npcTypeCustomisation, playerVarDomain, configProvider);
            }
        } else {
            puVar2 = (uint8_t*)GetModel((NPCType*)rt7Core, 0, (RT7Core*)assetBuilder, (AssetBuilder*)buildRequest,
                                        (BuildRequest<graphics::Model, BuildModelMain>*)npcTypeCustomisation,
                                        (Array<int>*)(rt7Core->m_postProcessManager + 272),
                                        (NPCTypeCustomisation*)playerVarDomain, in_stack_00000008);
        }
        return puVar2;
    }

    // 0x100503bc0
    NPCType* NPCType::GetMultiNPC(bool& arg1, const PlayerVarDomain* playerVarDomain,
                                  const ConfigProvider& configProvider) {
        NPCType* pNVar1;
        uint8_t uVar3;
        int iVar4;
        int iVar5;
        uint64_t uVar6;
        uint64_t extraout_var;
        ConfigDecoderInfo* configDecoderInfo;
        uint64_t extraout_var_00;
        int* piVar7;
        long lVar8;
        shared_ptr<oldscape::dash3d::GroundDecor>* groundDecor;
        BaseTemplateConfigTypeList<NPCType>* this_01;
        ConfigProvider* in_R8;
        enable_shared_from_this<PathingEntity> local_48;

        *(uint8_t*)&playerVarDomain->_vptr = 0;
        Array<VarValue>* this_00 = (Array<VarValue>*)(arg1 + 1072);
        if ((this_00->empty() != '\0') || (configProvider == nullptr)) {
            local_48.shared_from_this();
            pNVar1 = this;
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(
                (shared_ptr<oldscape::ClientNpc>*)this);
            return pNVar1;
        }
        if (*(int*)(arg1 + 1100) == -1) {
            if (*(int*)(arg1 + 1096) != -1) {
                configDecoderInfo = (ConfigDecoderInfo*)in_R8->GetVarType(VarDomainType::PLAYER, *(int*)(arg1 + 1096));
                uVar3 = (configProvider._vptr->SetDecoder)((Js5ArchiveSettings*)configProvider, configDecoderInfo);
                iVar4 = ((VarValue*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar3))->GetInt();
                goto LAB_100503c80;
            }
        LAB_100503cc7:
            lVar8 = this_00->end();
            piVar7 = (int*)(*this_00)[lVar8 - 1];
            iVar4 = *piVar7;
            if (iVar4 == -1) {
            LAB_100503cf9:
                *(uint8_t*)&playerVarDomain->_vptr = 1;
                groundDecor = (shared_ptr<oldscape::dash3d::GroundDecor>*)&NullNpcType;
                goto LAB_100503d0b;
            }
            this_01 = *(BaseTemplateConfigTypeList<NPCType>**)(arg1 + 24);
        } else {
            uVar6 = in_R8->GetVarBitType(*(int*)(arg1 + 1100));
            uVar3 = (configProvider._vptr->GetVarBitTypeList)(configProvider, uVar6);
            iVar4 = (int)(((uint64_t)extraout_var << 8) | (uint8_t)uVar3);
        LAB_100503c80:
            if ((iVar4 < 0) || (iVar5 = this_00->end(), iVar5 - 1 <= iVar4))
                goto LAB_100503cc7;
            piVar7 = (int*)(*this_00)[(long)iVar4];
            if (*piVar7 == -1)
                goto LAB_100503cf9;
            this_01 = *(BaseTemplateConfigTypeList<NPCType>**)(arg1 + 24);
            piVar7 = (int*)(*this_00)[(long)iVar4];
            iVar4 = *piVar7;
        }
        groundDecor = (shared_ptr<oldscape::dash3d::GroundDecor>*)this_01->List(iVar4, nullptr);
    LAB_100503d0b:
        pNVar1 = this;
        new (this) shared_ptr(groundDecor);
        return pNVar1;
    }

    // 0x100503d40
    uint8_t* NPCType::GetModel(NPCType::ModelType modelType, graphics::RT7Core* rt7Core, AssetBuilder& assetBuilder,
                               BuildRequest<graphics::Model, BuildModelMain>& buildRequest, const Array<int>& arg5,
                               const NPCTypeCustomisation* npcTypeCustomisation, const ConfigProvider* configProvider) {
        uint8_t* puVar1;
        int iVar2;
        unsigned int arg3;
        bool bVar3;
        Array<int>* pAVar4;
        char cVar6;
        bool bVar7;
        long lVar9;
        shared_ptr* this_01;
        Layout* this_03;
        int* piVar10;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_04;
        int* piVar11;
        long* plVar12;
        uint8_t* puVar13;
        uint8_t** ppuVar14;
        unsigned int* puVar15;
        unsigned int* puVar16;
        BuildModelMain* pBVar17;
        vector<float>* arg1_00;
        vector<math::Vector3T<float>>* pvVar18;
        vector<eastl::vector<int>>* pvVar19;
        Array<VarValue>* pAVar20;
        Array<unsigned char>* arg1_01;
        OpenGLView* this_06;
        Array<Array<unsigned short>>* arg2;
        NPCTypeList* this_07;
        Array<Array<Array<unsigned short>>>* arg3_00;
        Array<unsigned short>* pAVar21;
        shared_ptr<graphics::Model>* this_08;
        Model* pMVar22;
        bool bVar23;
        Array<int> local_140;
        PacketView local_128;
        AssetLRUHashCache<graphics::Model, BuildModelMain, 16ul, 17ul, false>* local_f8;
        shared_ptr<oldscape::dash3d::Decor> local_e8;
        AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>* local_d8;
        uint32_t local_cc;
        BuildRequest<graphics::Model, BuildModelMain>* local_c0;
        shared_ptr<BuildModelMain> local_a8;
        uint8_t local_89;
        Array<int> local_88;

        RT7Core* local_f0 = rt7Core;
        Array<int>* local_c8 = arg5;
        auto pAVar8 = field_24->GetBodyModelCache();
        auto this_00 = field_24->GetHeadModelCache();
        unsigned long local_b0 = (unsigned long)field_32;
        NPCType* local_98 = this;
        if (npcTypeCustomisation != nullptr) {
            lVar9 = npcTypeCustomisation->end();
            local_b0 = local_b0 | lVar9 << 16;
        }
        if (modelType == 0) {
            pAVar8->UpdateLoadingAssetList(5);
            cVar6 = pAVar8->IsLoadingAsset(local_b0);
            if (!cVar6) {
                this_01 = (shared_ptr*)pAVar8->Find(local_b0);
                goto LAB_100503e40;
            }
        LAB_100503f5a:
            ppuVar14 = &DataStatus::NOTLOADED;
        } else {
            this_00->UpdateLoadingAssetList(5);
            cVar6 = this_00->IsLoadingAsset(local_b0);
            if (cVar6)
                goto LAB_100503f5a;
            this_01 = (shared_ptr*)this_00->Find(local_b0);
        LAB_100503e40:
            cVar6 = shared_ptr::operator_cast_to_bool(this_01);
            if (cVar6) {
                buildRequest.SetConstructedObj(*this_01);
            }
            cVar6 = buildRequest.IsTaskDone();
            if ((!cVar6) && (cVar6 = buildRequest.IsEmpty(), !cVar6))
                goto LAB_100503f5a;
            cVar6 = buildRequest.IsEmpty();
            if (cVar6) {
                cVar6 = graphics::Model::IsReadyToConstruct(local_f0);
                if (!cVar6)
                    goto LAB_100503f5a;
                local_140 = Array<int>();
                if (npcTypeCustomisation != nullptr) {
                    cVar6 = ((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)
                                 npcTypeCustomisation->GetScreen())
                                ->empty();
                    if (!cVar6) {
                        this_03 = (Layout*)npcTypeCustomisation->GetScreen();
                        piVar10 = (int*)this_03->HeapBeginPtr();
                        this_04 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                      npcTypeCustomisation->GetScreen();
                        piVar11 = (int*)this_04->end();
                        local_88 = Array<int>(piVar10, piVar11);
                        local_c8 = &local_140;
                        *local_c8 = local_88;
                    }
                }
                pAVar4 = local_c8;
                local_f8 = this_00;
                local_d8 = pAVar8;
                piVar10 = (int*)local_c8->data();
                piVar11 = (int*)pAVar4->end();
                bVar3 = true;
                bVar23 = true;
                bVar7 = false;
                for (; local_c0 = buildRequest, piVar10 != piVar11; piVar10 = piVar10 + 1) {
                    iVar2 = *piVar10;
                    if (iVar2 != -1) {
                        plVar12 = (long*)local_98->field_24->GetOutputType();
                        puVar13 = (uint8_t*)(**(void (**)(...))(*plVar12 + 48))(plVar12, Js5Archive::JS5_MODELSRT7,
                                                                                iVar2, 0, Priority::HIGH, 1);
                        if (puVar13 == DataStatus::READY) {
                            bVar23 = bVar3;
                        } else {
                            bVar23 = false;
                        }
                        bVar7 = true;
                        bVar3 = bVar23;
                    }
                    buildRequest = local_c0;
                }
                if (bVar7) {
                    if (!bVar23) {
                        ppuVar14 = &DataStatus::NOTLOADED;
                        goto LAB_100503fe4;
                    }
                    local_cc = 4096;
                    local_88 = eastl::fixed_vector<PacketView, 1ul>();
                    pAVar4 = local_c8;
                    local_88.reserve(local_c8->end());
                    puVar15 = (unsigned int*)pAVar4->data();
                    puVar16 = (unsigned int*)pAVar4->end();
                    if (puVar15 != puVar16) {
                        do {
                            arg3 = *puVar15;
                            if (arg3 != 4294967295) {
                                local_128 = PacketView();
                                ((Js5ResourceProvider*)local_98->field_24->GetOutputType())
                                    ->GetFile(local_128, *(Js5Archive::JS5_MODELSRT7), arg3, 0,
                                              (Priority*)Priority::HIGH, true, false, false);
                                local_88.push_back(local_128);
                            }
                            puVar15 = puVar15 + 1;
                        } while (puVar15 != puVar16);
                    }
                    MakeSharedPool<graphics::Model, 3072>::MakeShared<>();
                    pMVar22 = (Model*)local_128.operator->();
                    buildRequest = local_c0;
                    pAVar8 = local_d8;
                    pMVar22->SetSourceModelIDs(local_c8);
                    local_e8[0] = (shared_ptr<oldscape::dash3d::Decor>)4;
                    local_89 = 1;
                    bucket_make_shared<BuildModelMain, int, graphics::ModelConstructedState, bool, graphics::RT7Core*&,
                                       eastl::fixed_vector<PacketView, 1ul>, shared_ptr<graphics::Model>&>(
                        &local_a8, (ModelConstructedState*)&local_cc, &local_e8, (RT7Core**)&local_89,
                        (fixed_vector<PacketView, _1ul>*)&local_f0, &local_88);
                    if ((npcTypeCustomisation != nullptr) && (modelType == 0)) {
                        pBVar17 = (BuildModelMain*)local_a8.operator->();
                        arg1_00 = (vector<float>*)npcTypeCustomisation->GetMaterial();
                        pBVar17->SetScale(*arg1_00);
                        pBVar17 = (BuildModelMain*)local_a8.operator->();
                        pvVar18 = (vector<math::Vector3T<float>>*)npcTypeCustomisation->GetOrigin();
                        pBVar17->SetRotation(*pvVar18);
                        pBVar17 = (BuildModelMain*)local_a8.operator->();
                        pvVar18 = (vector<math::Vector3T<float>>*)npcTypeCustomisation->GetPixelBuffer();
                        pBVar17->SetTranslation(*pvVar18);
                    }
                    if (npcTypeCustomisation != nullptr) {
                        pBVar17 = (BuildModelMain*)local_a8.operator->();
                        pvVar19 = (vector<eastl::vector<int>>*)npcTypeCustomisation->GetImmediateThreadPool();
                        pBVar17->SetModelRecolour(*pvVar19);
                        pBVar17 = (BuildModelMain*)local_a8.operator->();
                        pvVar19 = (vector<eastl::vector<int>>*)npcTypeCustomisation->GetWorld();
                        pBVar17->SetModelRematerial(*pvVar19);
                    }
                    if (modelType == 0) {
                        pBVar17 = (BuildModelMain*)local_a8.operator->();
                        pBVar17->SetOffset(local_98->field_768);
                        pBVar17 = (BuildModelMain*)local_a8.operator->();
                        pBVar17->SetResize(local_98->field_972);
                    }
                    if (npcTypeCustomisation == nullptr) {
                    LAB_100504278:
                        pBVar17 = (BuildModelMain*)local_a8.operator->();
                        pBVar17->SetRecolor(local_98->field_800, local_98->field_824);
                    } else {
                        pAVar20 = (Array<VarValue>*)npcTypeCustomisation->GetTranslation();
                        cVar6 = pAVar20->empty();
                        if (cVar6)
                            goto LAB_100504278;
                        pBVar17 = (BuildModelMain*)local_a8.operator->();
                        puVar1 = &local_98->field_800;
                        pAVar21 = (Array<unsigned short>*)npcTypeCustomisation->GetTranslation();
                        pBVar17->SetCustomRecolor(*puVar1, *pAVar21);
                    }
                    pBVar17 = (BuildModelMain*)local_a8.operator->();
                    pBVar17->SetRecolorPalette(local_98->field_848);
                    if (npcTypeCustomisation == nullptr) {
                    LAB_10050437d:
                        pBVar17 = (BuildModelMain*)local_a8.operator->();
                        pBVar17->SetRematerial(local_98->field_896, local_98->field_920);
                    } else {
                        if (npcTypeCustomisation->field_0 != false) {
                            pBVar17 = (BuildModelMain*)local_a8.operator->();
                            arg1_01 = (Array<unsigned char>*)npcTypeCustomisation->GetMapSquarePointLights();
                            this_06 = (OpenGLView*)configProvider->GetGraphicsDefaults();
                            arg2 = (Array<Array<unsigned short>>*)this_06->GetCursorMutex();
                            buildRequest = local_c0;
                            this_07 = (NPCTypeList*)configProvider->GetGraphicsDefaults();
                            arg3_00 = (Array<Array<Array<unsigned short>>>*)this_07->GetBodyModelCache();
                            pAVar8 = local_d8;
                            pBVar17->SetPlayerRecolor(*arg1_01, *arg2, *arg3_00);
                        }
                        pAVar20 = (Array<VarValue>*)npcTypeCustomisation->GetRedirectLocation();
                        cVar6 = pAVar20->empty();
                        if (cVar6)
                            goto LAB_10050437d;
                        pBVar17 = (BuildModelMain*)local_a8.operator->();
                        puVar1 = &local_98->field_896;
                        pAVar21 = (Array<unsigned short>*)npcTypeCustomisation->GetRedirectLocation();
                        pBVar17->SetRematerial(*puVar1, *pAVar21);
                    }
                    pBVar17 = (BuildModelMain*)local_a8.operator->();
                    pBVar17->SetAmbientAdjust(*(unsigned short*)&local_98->field_984);
                    pBVar17 = (BuildModelMain*)local_a8.operator->();
                    pBVar17->SetTint(local_98->field_968, local_98->field_969, local_98->field_970,
                                     local_98->field_971);
                    pBVar17 = (BuildModelMain*)local_a8.operator->();
                    pBVar17->SetExternalID(local_98->field_32);
                    local_e8 = shared_ptr(&local_a8);
                    assetBuilder.SubmitJob(local_e8);
                    if (modelType == 0) {
                        pAVar8->AddLoadingAsset(local_b0, local_a8);
                    } else {
                        local_f8->AddLoadingAsset(local_b0, local_a8);
                    }
                    buildRequest.SetObjAndTask(local_128, local_a8);
                    cVar6 = buildRequest.IsTaskDone();
                    puVar13 = DataStatus::NOTLOADED;
                } else {
                    ppuVar14 = &DataStatus::READY;
                LAB_100503fe4:
                    puVar13 = *ppuVar14;
                    cVar6 = '\0';
                }
                if (!cVar6)
                    goto LAB_100504557;
            }
            this_08 = (shared_ptr<graphics::Model>*)buildRequest.SSOBeginPtr();
            pMVar22 = (Model*)(*this_08).operator->();
            cVar6 = pMVar22->IsLoaded();
            if (!cVar6) {
                LogAssert("model.GetAsset()->IsLoaded()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "npctype/NPCType.cpp",
                          776, nullptr);
            }
            ppuVar14 = &DataStatus::READY;
        }
        puVar13 = *ppuVar14;
    LAB_100504557:
        return puVar13;
    }

    // 0x100504620
    void NPCType::GetHeadModels(graphics::RT7Core* rt7Core, AssetBuilder& assetBuilder,
                                BuildRequest<graphics::Model, BuildModelMain>& buildRequest,
                                const NPCTypeCustomisation* npcTypeCustomisation,
                                const PlayerVarDomain* playerVarDomain, const ConfigProvider* configProvider) {
        uint8_t* puVar2;
        RT7Core* rt7Core_00;
        ConfigProvider* in_stack_00000008;
        shared_ptr<NPCType> local_70;
        uint8_t local_31;

        if (!(((rt7Core->m_postProcessManager + 624))->empty())) {
            GetMultiNPC(&local_70, (bool*)rt7Core, (PlayerVarDomain*)&local_31, configProvider);
            if (!(shared_ptr::operator_cast_to_bool(&local_70))) {
                puVar2 = DataStatus::NOTLOADED;
            } else {
                rt7Core_00 = (RT7Core*)local_70.operator->();
                puVar2 = (uint8_t*)GetHeadModels(rt7Core_00, assetBuilder, buildRequest, npcTypeCustomisation,
                                                 playerVarDomain, configProvider);
            }
        } else {
            puVar2 = (uint8_t*)GetModel((NPCType*)rt7Core, 1, (RT7Core*)assetBuilder, (AssetBuilder*)buildRequest,
                                        (BuildRequest<graphics::Model, BuildModelMain>*)npcTypeCustomisation,
                                        (Array<int>*)(rt7Core->m_postProcessManager + 296),
                                        (NPCTypeCustomisation*)playerVarDomain, in_stack_00000008);
        }
        return puVar2;
    }

} // namespace jag::game
