// libs/game/runetek5/config/achievementtype/AchievementType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "AchievementType.h"

namespace jag::game {
    // 0x1003cf290: AchievementType::GetRuneScore() const has the same machine code as MapElementType::GetTextBackgroundOutlineRGBA() const

    // 0x1005531d0
    uint8_t* AchievementType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        AchievementType* pAVar1;
        uint8_t uVar2;
        uint8_t bVar3;
        unsigned short uVar4;
        unsigned short uVar5;
        uint32_t uVar6;
        int iVar7;
        unsigned int uVar8;
        unsigned int uVar9;
        unsigned int uVar10;
        vector<AchievementRequirementSpec>* pvVar11;
        AchievementRequirementSpec* pAVar12;
        unsigned int* puVar13;
        unsigned long uVar14;
        eastl::string* str;
        AchievementRequirementSpec local_e8;
        uint64_t local_a0;
        uint64_t local_98;
        unsigned int local_8c;
        unsigned long local_88;
        uint64_t* local_80;
        uint64_t local_78;
        basic_string<char, BucketAllocatorEASTL> local_68;
        unsigned long local_50;
        unsigned long local_48;
        unsigned long local_38;

        AchievementType* local_40 = this;
        switch (arg2) {
        case 1:
            str = (eastl::string*)&field_56;
            goto LAB_10055332e;
        case 2:
            bVar3 = arg1.g1();
            if (bVar3 != 0) {
                uVar8 = (unsigned int)bVar3;
                do {
                    bVar3 = arg1.g1();
                    local_80 = (uint64_t*)(((uint64_t)local_80._4_4_ << 32) | (uint32_t)((unsigned int)bVar3));
                    local_68 = eastl::basic_string<char, BucketAllocatorEASTL>();
                    arg1.gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(&local_68, true);
                    local_e8 =
                        eastl::make_pair<int&, eastl::basic_string<char, BucketAllocatorEASTL>&>(local_80, local_68);
                    field_88.insert<eastl::pair<int, eastl::basic_string<char, BucketAllocatorEASTL>>, void>(local_e8);
                    uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
            }
            break;
        case 3:
            uVar4 = arg1.g2();
            field_132 = (unsigned int)uVar4;
            break;
        case 4:
            uVar6 = arg1.gSmart2or4s();
            field_140 = uVar6;
            break;
        case 5:
            bVar3 = arg1.g1();
            m_runeScore = (unsigned int)bVar3;
            break;
        case 6:
            uVar4 = arg1.g2();
            field_176 = (unsigned int)uVar4;
            break;
        case 7:
            str = (eastl::string*)&field_184;
        LAB_10055332e:
            arg1.gStringCP1252ToUTF8<eastl::string>(str, true);
            break;
        case 8:
            uVar4 = arg1.gSmart1or2();
            if (uVar4 != 0) {
                local_88 = (((uint64_t)local_88._4_4_ << 32) | (uint32_t)((unsigned int)uVar4));
                local_40 = (AchievementType*)&local_40->field_216;
                local_50 = 0;
                do {
                    uVar2 = arg1.g1();
                    local_38 = (((uint64_t)local_38._1_7_ << 8) | (uint8_t)uVar2);
                    uVar2 = arg1.g1();
                    local_48 = (((uint64_t)local_48._1_7_ << 8) | (uint8_t)uVar2);
                    local_68 = eastl::basic_string<char, BucketAllocatorEASTL>();
                    arg1.gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(&local_68, true);
                    uVar4 = arg1.gSmart1or2();
                    new (&local_80) Array<int>((unsigned long)uVar4);
                    if (uVar4 != 0) {
                        uVar14 = 0;
                        do {
                            uVar8 = arg1.g2();
                            puVar13 = &local_80[uVar14];
                            *puVar13 = uVar8 & 65535;
                            uVar14 = uVar14 + 1;
                        } while (uVar4 != uVar14);
                    }
                    pAVar1 = local_40;
                    bVar3 = (uint8_t)local_38;
                    iVar7 = local_40->size();
                    if (iVar7 <= (int)(unsigned int)bVar3) {
                        pAVar1->resize((unsigned long)(bVar3 + 1));
                    }
                    pvVar11 = (vector<AchievementRequirementSpec>*)(*pAVar1)[(unsigned long)(unsigned int)bVar3];
                    local_e8 = AchievementRequirementSpec((unsigned int)bVar3, local_80,
                                                          (unsigned int)(uint8_t)local_48, local_68);
                    pvVar11->push_back(local_e8);
                    uVar8 = (int)local_50 + 1;
                    local_50 = (unsigned long)uVar8;
                } while (uVar8 != (unsigned int)local_88);
            }
            break;
        case 9:
            uVar4 = arg1.gSmart1or2();
            local_40 = (AchievementType*)&field_248;
            local_40->resize((unsigned long)uVar4);
            if (uVar4 != 0) {
                local_50 = 0;
                local_88 = (unsigned long)uVar4;
                do {
                    uVar2 = arg1.g1();
                    local_38 = (((uint64_t)local_38._1_7_ << 8) | (uint8_t)uVar2);
                    uVar6 = arg1.gSmart2or4();
                    local_68 = eastl::basic_string<char, BucketAllocatorEASTL>();
                    arg1.gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(&local_68, true);
                    local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)uVar6);
                    uVar4 = arg1.gSmart1or2();
                    new (&local_80) Array<int>((unsigned long)uVar4);
                    if (uVar4 != 0) {
                        uVar14 = 0;
                        do {
                            uVar8 = arg1.g2();
                            puVar13 = &local_80[uVar14];
                            *puVar13 = uVar8 & 65535;
                            uVar14 = uVar14 + 1;
                        } while (uVar4 != uVar14);
                    }
                    pAVar1 = local_40;
                    bVar3 = (uint8_t)local_38;
                    iVar7 = local_40->size();
                    if (iVar7 <= (int)(unsigned int)bVar3) {
                        pAVar1->resize((unsigned long)(bVar3 + 1));
                    }
                    pvVar11 = (vector<AchievementRequirementSpec>*)(*pAVar1)[(unsigned long)(unsigned int)bVar3];
                    local_e8 = AchievementRequirementSpec((unsigned int)bVar3, local_80, (int)local_48, local_68);
                    pvVar11->push_back(local_e8);
                    uVar8 = (int)local_50 + 1;
                    local_50 = (unsigned long)uVar8;
                } while (uVar8 != (unsigned int)local_88);
            }
            break;
        case 10:
            uVar4 = arg1.gSmart1or2();
            if (uVar4 != 0) {
                local_88 = (((uint64_t)local_88._4_4_ << 32) | (uint32_t)((unsigned int)uVar4));
                local_40 = (AchievementType*)&local_40->field_280;
                local_50 = 0;
                do {
                    uVar2 = arg1.g1();
                    local_38 = (((uint64_t)local_38._1_7_ << 8) | (uint8_t)uVar2);
                    uVar6 = arg1.gSmart2or4();
                    local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)uVar6);
                    local_68 = eastl::basic_string<char, BucketAllocatorEASTL>();
                    arg1.gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(&local_68, true);
                    uVar4 = arg1.gSmart1or2();
                    new (&local_80) Array<int>((unsigned long)uVar4);
                    if (uVar4 != 0) {
                        uVar14 = 0;
                        do {
                            uVar8 = arg1.g2();
                            puVar13 = &local_80[uVar14];
                            *puVar13 = uVar8 & 65535;
                            uVar14 = uVar14 + 1;
                        } while (uVar4 != uVar14);
                    }
                    pAVar1 = local_40;
                    bVar3 = (uint8_t)local_38;
                    iVar7 = local_40->size();
                    if (iVar7 <= (int)(unsigned int)bVar3) {
                        pAVar1->resize((unsigned long)(bVar3 + 1));
                    }
                    pvVar11 = (vector<AchievementRequirementSpec>*)(*pAVar1)[(unsigned long)(unsigned int)bVar3];
                    local_e8 = AchievementRequirementSpec((unsigned int)bVar3, local_80, (int)local_48, local_68);
                    pvVar11->push_back(local_e8);
                    uVar8 = (int)local_50 + 1;
                    local_50 = (unsigned long)uVar8;
                } while (uVar8 != (unsigned int)local_88);
            }
            break;
        case 11:
            uVar4 = arg1.gSmart1or2();
            if (uVar4 != 0) {
                uVar8 = (unsigned int)uVar4;
                local_40 = (AchievementType*)&local_40->field_376;
                do {
                    local_38 = (((uint64_t)local_38._4_4_ << 32) | (uint32_t)uVar8);
                    bVar3 = arg1.g1();
                    uVar6 = arg1.g2();
                    pAVar1 = local_40;
                    iVar7 = local_40->size();
                    if (iVar7 <= (int)(unsigned int)bVar3) {
                        pAVar1->resize((unsigned long)(bVar3 + 1));
                    }
                    pvVar11 = (vector<AchievementRequirementSpec>*)(*pAVar1)[(unsigned long)(unsigned int)bVar3];
                    local_a0 =
                        (unsigned int*)((((uint64_t)local_a0._4_4_ << 32) | (uint32_t)uVar6) & 18446744069414649855);
                    local_80 = &local_a0;
                    local_78 = 1;
                    local_68 = Array<int>(&local_80);
                    local_e8 = AchievementRequirementSpec((unsigned int)bVar3, local_68);
                    pvVar11->push_back(local_e8);
                    uVar8 = (int)local_38 - 1;
                } while (uVar8 != 0);
            }
            break;
        case 12:
            uVar4 = arg1.gSmart1or2();
            local_40 = (AchievementType*)&field_472;
            local_40->set_max_size((unsigned long)uVar4, 0);
            if (uVar4 != 0) {
                local_38 = 0;
                local_88 = (unsigned long)uVar4;
                do {
                    uVar2 = arg1.g1();
                    local_48 = (((uint64_t)local_48._1_7_ << 8) | (uint8_t)uVar2);
                    uVar2 = arg1.g1();
                    local_50 = (((uint64_t)local_50._1_7_ << 8) | (uint8_t)uVar2);
                    local_68 = eastl::basic_string<char, BucketAllocatorEASTL>();
                    arg1.gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(&local_68, true);
                    uVar4 = arg1.gSmart1or2();
                    new (&local_80) Array<int>((unsigned long)uVar4);
                    if (uVar4 != 0) {
                        uVar14 = 0;
                        do {
                            uVar8 = arg1.g2();
                            puVar13 = &local_80[uVar14];
                            *puVar13 = uVar8 & 65535;
                            uVar14 = uVar14 + 1;
                        } while (uVar4 != uVar14);
                    }
                    local_e8 = AchievementRequirementSpec((unsigned int)(uint8_t)local_48, local_80,
                                                          (unsigned int)(uint8_t)local_50, local_68);
                    pAVar12 = (AchievementRequirementSpec*)(*local_40)[local_38];
                    *pAVar12 = local_e8;
                    local_38 = local_38 + 1;
                } while (local_38 != local_88);
            }
            break;
        case 13:
            uVar4 = arg1.gSmart1or2();
            local_40 = (AchievementType*)&field_496;
            local_40->set_max_size((unsigned long)uVar4, 0);
            if (uVar4 != 0) {
                local_38 = 0;
                local_88 = (unsigned long)uVar4;
                do {
                    uVar2 = arg1.g1();
                    local_50 = (((uint64_t)local_50._1_7_ << 8) | (uint8_t)uVar2);
                    uVar6 = arg1.gSmart2or4();
                    local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)uVar6);
                    local_68 = eastl::basic_string<char, BucketAllocatorEASTL>();
                    arg1.gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(&local_68, true);
                    uVar4 = arg1.gSmart1or2();
                    new (&local_80) Array<int>((unsigned long)uVar4);
                    if (uVar4 != 0) {
                        uVar14 = 0;
                        do {
                            uVar8 = arg1.g2();
                            puVar13 = &local_80[uVar14];
                            *puVar13 = uVar8 & 65535;
                            uVar14 = uVar14 + 1;
                        } while (uVar4 != uVar14);
                    }
                    local_e8 =
                        AchievementRequirementSpec((unsigned int)(uint8_t)local_50, local_80, (int)local_48, local_68);
                    pAVar12 = (AchievementRequirementSpec*)(*local_40)[local_38];
                    *pAVar12 = local_e8;
                    local_38 = local_38 + 1;
                } while (local_38 != local_88);
            }
            break;
        case 14:
            uVar4 = arg1.gSmart1or2();
            local_40 = (AchievementType*)&field_520;
            local_40->set_max_size((unsigned long)uVar4, 0);
            if (uVar4 != 0) {
                local_38 = 0;
                local_88 = (unsigned long)uVar4;
                do {
                    uVar2 = arg1.g1();
                    local_50 = (((uint64_t)local_50._1_7_ << 8) | (uint8_t)uVar2);
                    uVar6 = arg1.gSmart2or4();
                    local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)uVar6);
                    local_68 = eastl::basic_string<char, BucketAllocatorEASTL>();
                    arg1.gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(&local_68, true);
                    uVar4 = arg1.gSmart1or2();
                    new (&local_80) Array<int>((unsigned long)uVar4);
                    if (uVar4 != 0) {
                        uVar14 = 0;
                        do {
                            uVar8 = arg1.g2();
                            puVar13 = &local_80[uVar14];
                            *puVar13 = uVar8 & 65535;
                            uVar14 = uVar14 + 1;
                        } while (uVar4 != uVar14);
                    }
                    local_e8 =
                        AchievementRequirementSpec((unsigned int)(uint8_t)local_50, local_80, (int)local_48, local_68);
                    pAVar12 = (AchievementRequirementSpec*)(*local_40)[local_38];
                    *pAVar12 = local_e8;
                    local_38 = local_38 + 1;
                } while (local_38 != local_88);
            }
            break;
        case 15:
            uVar4 = arg1.gSmart1or2();
            local_40 = (AchievementType*)&field_592;
            local_40->set_max_size((unsigned long)uVar4, 0);
            if (uVar4 != 0) {
                uVar14 = 0;
                local_38 = (unsigned long)uVar4;
                do {
                    bVar3 = arg1.g1();
                    uVar4 = arg1.g2();
                    local_a0 = (unsigned int*)(((uint64_t)local_a0._4_4_ << 32) | (uint32_t)((unsigned int)uVar4));
                    local_80 = &local_a0;
                    local_78 = 1;
                    local_68 = Array<int>(&local_80);
                    local_e8 = AchievementRequirementSpec((unsigned int)bVar3, local_68);
                    pAVar12 = (AchievementRequirementSpec*)(*local_40)[uVar14];
                    *pAVar12 = local_e8;
                    uVar14 = uVar14 + 1;
                } while (local_38 != uVar14);
            }
            break;
        case 16:
            uVar4 = arg1.g2();
            field_136 = (unsigned int)uVar4;
            break;
        case 17:
            field_128 = 1;
            break;
        case 18:
            bVar3 = arg1.g1();
            field_148 = (unsigned int)bVar3;
            break;
        case 19:
            field_152 = 0;
            break;
        case 20:
            uVar4 = arg1.gSmart1or2();
            if (uVar4 != 0) {
                uVar8 = (unsigned int)uVar4;
                local_40 = (AchievementType*)&local_40->field_408;
                do {
                    local_38 = (((uint64_t)local_38._4_4_ << 32) | (uint32_t)uVar8);
                    bVar3 = arg1.g1();
                    uVar6 = arg1.g2();
                    pAVar1 = local_40;
                    iVar7 = local_40->size();
                    if (iVar7 <= (int)(unsigned int)bVar3) {
                        pAVar1->resize((unsigned long)(bVar3 + 1));
                    }
                    pvVar11 = (vector<AchievementRequirementSpec>*)(*pAVar1)[(unsigned long)(unsigned int)bVar3];
                    local_a0 =
                        (unsigned int*)((((uint64_t)local_a0._4_4_ << 32) | (uint32_t)uVar6) & 18446744069414649855);
                    local_80 = &local_a0;
                    local_78 = 1;
                    local_68 = Array<int>(&local_80);
                    local_e8 = AchievementRequirementSpec((unsigned int)bVar3, local_68);
                    pvVar11->push_back(local_e8);
                    uVar8 = (int)local_38 - 1;
                } while (uVar8 != 0);
            }
            break;
        case 21:
            uVar4 = arg1.gSmart1or2();
            local_40 = (AchievementType*)&field_616;
            local_40->set_max_size((unsigned long)uVar4, 0);
            if (uVar4 != 0) {
                uVar14 = 0;
                local_38 = (unsigned long)uVar4;
                do {
                    bVar3 = arg1.g1();
                    uVar4 = arg1.g2();
                    local_a0 = (unsigned int*)(((uint64_t)local_a0._4_4_ << 32) | (uint32_t)((unsigned int)uVar4));
                    local_80 = &local_a0;
                    local_78 = 1;
                    local_68 = Array<int>(&local_80);
                    local_e8 = AchievementRequirementSpec((unsigned int)bVar3, local_68);
                    pAVar12 = (AchievementRequirementSpec*)(*local_40)[uVar14];
                    *pAVar12 = local_e8;
                    uVar14 = uVar14 + 1;
                } while (local_38 != uVar14);
            }
            break;
        case 22:
            uVar4 = arg1.gSmart1or2();
            if (uVar4 != 0) {
                uVar8 = (unsigned int)uVar4;
                local_40 = (AchievementType*)&local_40->field_312;
                do {
                    local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)uVar8);
                    uVar8 = arg1.g1();
                    uVar4 = arg1.g2();
                    local_80 = (uint64_t*)(((uint64_t)local_80._4_4_ << 32) | (uint32_t)((unsigned int)uVar4));
                    local_e8._8_8_ = 1;
                    local_e8._0_8_ = &local_80;
                    local_68 = Array<int>(&local_e8);
                    uVar2 = arg1.g1();
                    new (&local_80) eastl::basic_string<char, BucketAllocatorEASTL>();
                    local_38 = (((uint64_t)local_38._1_7_ << 8) | (uint8_t)uVar2);
                    arg1.gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(&local_80, true);
                    uVar9 = arg1.g1();
                    pAVar1 = local_40;
                    iVar7 = local_40->size();
                    if (iVar7 <= (int)(uVar8 & 255)) {
                        pAVar1->resize((unsigned long)((uVar8 & 255) + 1));
                    }
                    pvVar11 = (vector<AchievementRequirementSpec>*)(*pAVar1)[(unsigned long)(uVar8 & 255)];
                    local_e8 = AchievementRequirementSpec(uVar8 & 255, local_68, (unsigned int)(uint8_t)local_38,
                                                          local_80, uVar9 & 255);
                    pvVar11->push_back(local_e8);
                    uVar8 = (int)local_48 - 1;
                } while (uVar8 != 0);
            }
            break;
        case 23:
            uVar4 = arg1.gSmart1or2();
            local_40 = (AchievementType*)&field_544;
            local_40->set_max_size((unsigned long)uVar4, 0);
            if (uVar4 != 0) {
                local_48 = 0;
                local_50 = (unsigned long)uVar4;
                do {
                    uVar2 = arg1.g1();
                    local_38 = (((uint64_t)local_38._1_7_ << 8) | (uint8_t)uVar2);
                    uVar8 = arg1.g2();
                    uVar9 = arg1.g1();
                    local_68 = eastl::basic_string<char, BucketAllocatorEASTL>();
                    arg1.gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(&local_68, true);
                    uVar10 = arg1.g1();
                    local_8c = uVar8 & 65535;
                    local_a0 = &local_8c;
                    local_98 = 1;
                    new (&local_80) Array<int>(&local_a0);
                    local_e8 = AchievementRequirementSpec((unsigned int)(uint8_t)local_38, local_80, uVar9 & 255,
                                                          local_68, uVar10 & 255);
                    uVar14 = local_48;
                    pAVar12 = (AchievementRequirementSpec*)(*local_40)[local_48];
                    *pAVar12 = local_e8;
                    local_48 = uVar14 + 1;
                } while (local_50 != local_48);
            }
            break;
        case 24:
            uVar4 = arg1.gSmart1or2();
            if (uVar4 != 0) {
                uVar8 = (unsigned int)uVar4;
                local_40 = (AchievementType*)&local_40->field_344;
                do {
                    local_48 = (((uint64_t)local_48._4_4_ << 32) | (uint32_t)uVar8);
                    uVar8 = arg1.g1();
                    uVar4 = arg1.g2();
                    local_80 = (uint64_t*)(((uint64_t)local_80._4_4_ << 32) | (uint32_t)((unsigned int)uVar4));
                    local_e8._8_8_ = 1;
                    local_e8._0_8_ = &local_80;
                    local_68 = Array<int>(&local_e8);
                    uVar2 = arg1.g1();
                    new (&local_80) eastl::basic_string<char, BucketAllocatorEASTL>();
                    local_38 = (((uint64_t)local_38._1_7_ << 8) | (uint8_t)uVar2);
                    arg1.gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(&local_80, true);
                    uVar9 = arg1.g1();
                    pAVar1 = local_40;
                    iVar7 = local_40->size();
                    if (iVar7 <= (int)(uVar8 & 255)) {
                        pAVar1->resize((unsigned long)((uVar8 & 255) + 1));
                    }
                    pvVar11 = (vector<AchievementRequirementSpec>*)(*pAVar1)[(unsigned long)(uVar8 & 255)];
                    local_e8 = AchievementRequirementSpec(uVar8 & 255, local_68, (unsigned int)(uint8_t)local_38,
                                                          local_80, uVar9 & 255);
                    pvVar11->push_back(local_e8);
                    uVar8 = (int)local_48 - 1;
                } while (uVar8 != 0);
            }
            break;
        case 25:
            uVar4 = arg1.gSmart1or2();
            local_40 = (AchievementType*)&field_568;
            local_40->set_max_size((unsigned long)uVar4, 0);
            if (uVar4 != 0) {
                local_48 = 0;
                local_50 = (unsigned long)uVar4;
                do {
                    uVar2 = arg1.g1();
                    local_38 = (((uint64_t)local_38._1_7_ << 8) | (uint8_t)uVar2);
                    uVar8 = arg1.g2();
                    uVar9 = arg1.g1();
                    local_68 = eastl::basic_string<char, BucketAllocatorEASTL>();
                    arg1.gStringCP1252ToUTF8<eastl::basic_string<char, BucketAllocatorEASTL>>(&local_68, true);
                    uVar10 = arg1.g1();
                    local_8c = uVar8 & 65535;
                    local_a0 = &local_8c;
                    local_98 = 1;
                    new (&local_80) Array<int>(&local_a0);
                    local_e8 = AchievementRequirementSpec((unsigned int)(uint8_t)local_38, local_80, uVar9 & 255,
                                                          local_68, uVar10 & 255);
                    uVar14 = local_48;
                    pAVar12 = (AchievementRequirementSpec*)(*local_40)[local_48];
                    *pAVar12 = local_e8;
                    local_48 = uVar14 + 1;
                } while (local_50 != local_48);
            }
            break;
        case 26:
            uVar4 = arg1.g2();
            field_168 = (unsigned int)uVar4;
            break;
        case 27:
            field_172 = 1;
            break;
        case 28:
            uVar4 = arg1.gSmart1or2();
            field_440.set_max_size((unsigned long)uVar4, 0);
            if (uVar4 != 0) {
                uVar14 = 0;
                do {
                    uVar5 = arg1.gSmart1or2();
                    puVar13 = &field_440[uVar14];
                    *puVar13 = (unsigned int)uVar5;
                    uVar14 = uVar14 + 1;
                } while (uVar4 != uVar14);
            }
            break;
        case 29:
            bVar3 = arg1.g1();
            field_464 = (unsigned int)bVar3;
            break;
        case 30:
            uVar4 = arg1.gSmart1or2();
            field_640.set_max_size((unsigned long)uVar4, 0);
            if (uVar4 != 0) {
                uVar14 = 0;
                do {
                    uVar5 = arg1.gSmart1or2();
                    puVar13 = &field_640[uVar14];
                    *puVar13 = (unsigned int)uVar5;
                    uVar14 = uVar14 + 1;
                } while (uVar4 != uVar14);
            }
            break;
        case 31:
            bVar3 = arg1.g1();
            field_664 = (unsigned int)bVar3;
            break;
        case 32:
            bVar3 = arg1.g1();
            field_156 = (unsigned int)bVar3;
            bVar3 = arg1.g1();
            field_160 = (unsigned int)bVar3;
            bVar3 = arg1.g1();
            field_164 = (unsigned int)bVar3;
            break;
        default:
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "achievementtype/AchievementType.cpp",
                      341, "Unrecognised .ach config code: %u in achievement %d", arg2, field_32);
        }
        return DataStatus::READY;
    }

    // 0x100554b20
    void AchievementType::PostDecode() {
        uint32_t uVar3;
        unsigned int uVar4;
        long lVar5;
        uint32_t* puVar6;

        uint8_t* puVar1 = &field_440;
        if (!(puVar1->empty())) {
            uVar4 = field_464;
        } else {
            lVar5 = GetTotalPrereqCount();
            if (lVar5 == 0) {
                puVar1->set_max_size(0, 0);
                uVar4 = field_464;
            } else {
                puVar1->set_max_size(1, 0);
                puVar6 = (uint32_t*)(*puVar1)[0];
                *puVar6 = (int)lVar5;
                uVar4 = field_464;
            }
        }
        if (uVar4 == 4294967295) {
            uVar4 = puVar1->end();
            field_464 = uVar4;
            uVar4 = field_464;
        } else {
            uVar4 = field_464;
        }
        if ((int)uVar4 < 0) {
            LogAssert("m_numPrereqGroupsToComplete > -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "achievementtype/AchievementType.cpp",
                      371, nullptr);
        }
        puVar1 = &field_640;
        if (!(puVar1->empty())) {
            uVar4 = field_664;
        } else {
            puVar1->set_max_size(1, 0);
            uVar3 = GetTotalRequirementCount();
            puVar6 = (uint32_t*)(*puVar1)[0];
            *puVar6 = uVar3;
            uVar4 = field_664;
        }
        if (uVar4 == 4294967295) {
            uVar4 = puVar1->end();
            field_664 = uVar4;
            uVar4 = field_664;
        } else {
            uVar4 = field_664;
        }
        if ((int)uVar4 < 0) {
            LogAssert("m_numReqGroupsToComplete > -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "achievementtype/AchievementType.cpp",
                      388, nullptr);
        }
        lVar5 = puVar1->end();
        if (lVar5 == 1) {
            field_672.set_max_size(1, 0);
            uVar3 = GetTotalRequirementCount();
            puVar6 = &field_672[0];
            *puVar6 = uVar3;
        } else {
            ValidateReqGroupItemsToComplete();
            CountReqGroupItemCount();
        }
    }

    // 0x100554d00
    long AchievementType::GetTotalPrereqCount() const {
        long lVar3;
        long lVar4;

        auto pvVar1 = field_216.HeapBeginPtr();
        auto pvVar2 = field_216.end();
        if (pvVar1 == pvVar2) {
            lVar4 = 0;
        } else {
            lVar4 = 0;
            do {
                lVar3 = pvVar1->size();
                lVar4 = lVar4 + lVar3;
                pvVar1 = pvVar1 + 32;
            } while (pvVar1 != pvVar2);
        }
        pvVar1 = (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle>*)field_248.HeapBeginPtr();
        pvVar2 = (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle>*)field_248.end();
        for (; pvVar1 != pvVar2; pvVar1 = pvVar1 + 32) {
            lVar3 = pvVar1->size();
            lVar4 = lVar4 + lVar3;
        }
        pvVar1 = (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle>*)field_280.HeapBeginPtr();
        pvVar2 = (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle>*)field_280.end();
        for (; pvVar1 != pvVar2; pvVar1 = pvVar1 + 32) {
            lVar3 = pvVar1->size();
            lVar4 = lVar4 + lVar3;
        }
        pvVar1 = (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle>*)field_312.HeapBeginPtr();
        pvVar2 = (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle>*)field_312.end();
        for (; pvVar1 != pvVar2; pvVar1 = pvVar1 + 32) {
            lVar3 = pvVar1->size();
            lVar4 = lVar4 + lVar3;
        }
        pvVar1 = (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle>*)field_344.HeapBeginPtr();
        pvVar2 = (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle>*)field_344.end();
        for (; pvVar1 != pvVar2; pvVar1 = pvVar1 + 32) {
            lVar3 = pvVar1->size();
            lVar4 = lVar4 + lVar3;
        }
        pvVar1 = (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle>*)field_376.HeapBeginPtr();
        pvVar2 = (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle>*)field_376.end();
        for (; pvVar1 != pvVar2; pvVar1 = pvVar1 + 32) {
            lVar3 = pvVar1->size();
            lVar4 = lVar4 + lVar3;
        }
        pvVar1 = (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle>*)field_408.HeapBeginPtr();
        pvVar2 = (vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle>*)field_408.end();
        for (; pvVar1 != pvVar2; pvVar1 = pvVar1 + 32) {
            lVar3 = pvVar1->size();
            lVar4 = lVar4 + lVar3;
        }
        return lVar4;
    }

    // 0x100554ee0
    long AchievementType::GetTotalRequirementCount() const {
        long lVar1 = field_472.end();
        long lVar2 = field_496.end();
        long lVar3 = field_520.end();
        long lVar4 = field_544.end();
        long lVar5 = field_568.end();
        long lVar6 = field_592.end();
        return field_616.end() + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1;
    }

    // 0x100554f80
    void AchievementType::ValidateReqGroupItemsToComplete() {
        unsigned int uVar2;
        int* piVar3;
        CoordMapSquare* pCVar4;
        CoordMapSquare* pCVar5;
        unsigned long arg1;

        uint8_t* this_00 = &field_640;
        int iVar1 = this_00->end();
        if (0 < iVar1) {
            arg1 = 0;
            do {
                piVar3 = (int*)(*this_00)[arg1];
                if (*piVar3 == 0) {
                    pCVar4 = (CoordMapSquare*)field_472.data();
                    pCVar5 = (CoordMapSquare*)field_472.end();
                    for (; pCVar4 != pCVar5; pCVar4 = pCVar4 + 6) {
                        uVar2 = pCVar4->GetX();
                        if (arg1 == uVar2) {
                            piVar3 = (int*)(*this_00)[arg1];
                            *piVar3 = *piVar3 + 1;
                        }
                    }
                    pCVar4 = (CoordMapSquare*)field_496.data();
                    pCVar5 = (CoordMapSquare*)field_496.end();
                    for (; pCVar4 != pCVar5; pCVar4 = pCVar4 + 6) {
                        uVar2 = pCVar4->GetX();
                        if (arg1 == uVar2) {
                            piVar3 = (int*)(*this_00)[arg1];
                            *piVar3 = *piVar3 + 1;
                        }
                    }
                    pCVar4 = (CoordMapSquare*)field_520.data();
                    pCVar5 = (CoordMapSquare*)field_520.end();
                    for (; pCVar4 != pCVar5; pCVar4 = pCVar4 + 6) {
                        uVar2 = pCVar4->GetX();
                        if (arg1 == uVar2) {
                            piVar3 = (int*)(*this_00)[arg1];
                            *piVar3 = *piVar3 + 1;
                        }
                    }
                    pCVar4 = (CoordMapSquare*)field_544.data();
                    pCVar5 = (CoordMapSquare*)field_544.end();
                    for (; pCVar4 != pCVar5; pCVar4 = pCVar4 + 6) {
                        uVar2 = pCVar4->GetX();
                        if (arg1 == uVar2) {
                            piVar3 = (int*)(*this_00)[arg1];
                            *piVar3 = *piVar3 + 1;
                        }
                    }
                    pCVar4 = (CoordMapSquare*)field_568.data();
                    pCVar5 = (CoordMapSquare*)field_568.end();
                    for (; pCVar4 != pCVar5; pCVar4 = pCVar4 + 6) {
                        uVar2 = pCVar4->GetX();
                        if (arg1 == uVar2) {
                            piVar3 = (int*)(*this_00)[arg1];
                            *piVar3 = *piVar3 + 1;
                        }
                    }
                    pCVar4 = (CoordMapSquare*)field_592.data();
                    pCVar5 = (CoordMapSquare*)field_592.end();
                    for (; pCVar4 != pCVar5; pCVar4 = pCVar4 + 6) {
                        uVar2 = pCVar4->GetX();
                        if (arg1 == uVar2) {
                            piVar3 = (int*)(*this_00)[arg1];
                            *piVar3 = *piVar3 + 1;
                        }
                    }
                    pCVar4 = (CoordMapSquare*)field_616.data();
                    pCVar5 = (CoordMapSquare*)field_616.end();
                    for (; pCVar4 != pCVar5; pCVar4 = pCVar4 + 6) {
                        uVar2 = pCVar4->GetX();
                        if (arg1 == uVar2) {
                            piVar3 = (int*)(*this_00)[arg1];
                            *piVar3 = *piVar3 + 1;
                        }
                    }
                }
                arg1 = arg1 + 1;
                iVar1 = this_00->end();
            } while ((long)arg1 < (long)iVar1);
        }
    }

    // 0x100555280
    void AchievementType::CountReqGroupItemCount() {
        unsigned int uVar2;
        CoordMapSquare* pCVar4;
        CoordMapSquare* pCVar5;
        int* piVar6;

        uint8_t* this_00 = &field_672;
        unsigned long uVar3 = field_640.end();
        this_00->set_max_size(uVar3, 0);
        int iVar1 = this_00->end();
        if (0 < iVar1) {
            uVar3 = 0;
            do {
                pCVar4 = (CoordMapSquare*)field_472.data();
                pCVar5 = (CoordMapSquare*)field_472.end();
                for (; pCVar4 != pCVar5; pCVar4 = pCVar4 + 6) {
                    uVar2 = pCVar4->GetX();
                    if (uVar3 == uVar2) {
                        piVar6 = (int*)(*this_00)[uVar3];
                        *piVar6 = *piVar6 + 1;
                    }
                }
                pCVar4 = (CoordMapSquare*)field_496.data();
                pCVar5 = (CoordMapSquare*)field_496.end();
                for (; pCVar4 != pCVar5; pCVar4 = pCVar4 + 6) {
                    uVar2 = pCVar4->GetX();
                    if (uVar3 == uVar2) {
                        piVar6 = (int*)(*this_00)[uVar3];
                        *piVar6 = *piVar6 + 1;
                    }
                }
                pCVar4 = (CoordMapSquare*)field_520.data();
                pCVar5 = (CoordMapSquare*)field_520.end();
                for (; pCVar4 != pCVar5; pCVar4 = pCVar4 + 6) {
                    uVar2 = pCVar4->GetX();
                    if (uVar3 == uVar2) {
                        piVar6 = (int*)(*this_00)[uVar3];
                        *piVar6 = *piVar6 + 1;
                    }
                }
                pCVar4 = (CoordMapSquare*)field_544.data();
                pCVar5 = (CoordMapSquare*)field_544.end();
                for (; pCVar4 != pCVar5; pCVar4 = pCVar4 + 6) {
                    uVar2 = pCVar4->GetX();
                    if (uVar3 == uVar2) {
                        piVar6 = (int*)(*this_00)[uVar3];
                        *piVar6 = *piVar6 + 1;
                    }
                }
                pCVar4 = (CoordMapSquare*)field_568.data();
                pCVar5 = (CoordMapSquare*)field_568.end();
                for (; pCVar4 != pCVar5; pCVar4 = pCVar4 + 6) {
                    uVar2 = pCVar4->GetX();
                    if (uVar3 == uVar2) {
                        piVar6 = (int*)(*this_00)[uVar3];
                        *piVar6 = *piVar6 + 1;
                    }
                }
                pCVar4 = (CoordMapSquare*)field_592.data();
                pCVar5 = (CoordMapSquare*)field_592.end();
                for (; pCVar4 != pCVar5; pCVar4 = pCVar4 + 6) {
                    uVar2 = pCVar4->GetX();
                    if (uVar3 == uVar2) {
                        piVar6 = (int*)(*this_00)[uVar3];
                        *piVar6 = *piVar6 + 1;
                    }
                }
                pCVar4 = (CoordMapSquare*)field_616.data();
                pCVar5 = (CoordMapSquare*)field_616.end();
                for (; pCVar4 != pCVar5; pCVar4 = pCVar4 + 6) {
                    uVar2 = pCVar4->GetX();
                    if (uVar3 == uVar2) {
                        piVar6 = (int*)(*this_00)[uVar3];
                        *piVar6 = *piVar6 + 1;
                    }
                }
                uVar3 = uVar3 + 1;
                iVar1 = this_00->end();
            } while ((long)uVar3 < (long)iVar1);
        }
    }

    // 0x1005555b0
    uint32_t AchievementType::GetProgress(PlayerGameState& playerGameState, PlayerVarDomain& playerVarDomain,
                                          int arg3) {
        hash<int> local_48;
        equal_to<int> local_40;
        eastl local_38;

        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, BucketAllocatorEASTL> local_78(8192, local_48,
                                                                                                  local_40, local_38);
        uint32_t uVar1 = GetProgress(playerGameState, playerVarDomain, arg3, local_78);
        return uVar1;
    }

    // 0x100555650
    int AchievementType::GetProgress(
        PlayerGameState& playerGameState, PlayerVarDomain& playerVarDomain, int arg3,
        eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, BucketAllocatorEASTL>& arg4) {
        uint8_t bVar1;
        AchievementRequirementSpec* pAVar2;
        VarDomainType* varDomainType;
        uint8_t uVar3;
        uint8_t bVar4;
        bool cVar5;
        unsigned int uVar6;
        int iVar7;
        int iVar8;
        uint32_t uVar9;
        unsigned int uVar10;
        unsigned long uVar11;
        int* piVar12;
        AchievementRequirementSpec* pAVar13;
        AchievementRequirementSpec* pAVar14;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* pAVar15;
        unsigned int* puVar16;
        unsigned int* puVar17;
        GameToken* this_01;
        GameToken* pGVar18;
        uint64_t extraout_var;
        int* piVar19;
        uint64_t extraout_var_00;
        LightType* pLVar20;
        LightType* pLVar21;
        uint64_t extraout_var_01;
        uint64_t extraout_var_02;
        ConfigProvider* pCVar22;
        shared_ptr<QuestType>* this_02;
        uint8_t* puVar23;
        shared_ptr<AchievementType>* this_04;
        AchievementType* pAVar24;
        long lVar25;
        uint8_t* pbVar26;
        unsigned long uVar27;
        uint32_t* puVar28;
        bool bVar30;
        uint8_t auVar31[16];
        ReturnValue local_530;
        ReturnValue local_520;
        Array<int>* local_510;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* local_508;
        unsigned long local_500;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* local_4f8;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* local_4f0;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* local_4e8;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* local_4e0;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* local_4d8;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* local_4d0;
        int local_4c4;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_4b8;
        VarTypeList* local_4a8;
        uint64_t local_4a0;
        AchievementRequirementSpec* local_488;
        AchievementRequirementSpec* local_480;
        AchievementType* local_478;
        int local_46c;
        unsigned long local_468;
        int local_460;
        int local_45c;
        fixed_vector<int, 127ul> local_458;
        fixed_vector<bool, 127ul> local_230;
        fixed_vector<bool, 127ul> local_188;
        fixed_vector<bool, 127ul> local_e0;

        int iVar29 = -4;
        if (field_128 == '\0') {
            local_4a8 = (VarTypeList*)field_24;
            local_4c4 = (int)(10000 / (long)(int)field_664);
            puVar23 = &field_640;
            local_478 = this;
            uVar6 = puVar23->end();
            local_e0 = eastl::fixed_vector<bool, 127ul>();
            local_4b8 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)puVar23;
            uVar11 = puVar23->end();
            local_e0.resize(uVar11);
            local_458[0] = (fixed_vector<int, 127ul>)0;
            local_e0.assign(local_458);
            local_188 = eastl::fixed_vector<bool, 127ul>();
            uVar11 = local_4b8->end();
            local_188.resize(uVar11);
            local_458[0] = (fixed_vector<int, 127ul>)0;
            local_188.assign(local_458);
            local_230 = eastl::fixed_vector<bool, 127ul>();
            uVar11 = local_4b8->end();
            local_230.resize(uVar11);
            local_458[0] = (fixed_vector<int, 127ul>)0;
            local_230.assign(local_458);
            local_458 = eastl::fixed_vector<int, 127ul>();
            uVar11 = local_4b8->end();
            local_458.resize(uVar11);
            local_530[0]._0_4_ = 0;
            local_458.assign(local_530);
            if (0 < (int)uVar6) {
                local_510 = (Array<int>*)&local_478->field_672;
                local_508 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)&local_478->field_472;
                local_4f8 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)&local_478->field_496;
                local_4f0 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)&local_478->field_520;
                local_4e8 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)&local_478->field_544;
                local_4e0 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)&local_478->field_568;
                local_4d8 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)&local_478->field_616;
                local_4d0 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)&local_478->field_592;
                local_500 = (unsigned long)uVar6;
                uVar11 = 0;
                do {
                    piVar12 = (int*)(*local_4b8)[uVar11];
                    local_46c = *piVar12;
                    piVar12 = (int*)(*local_510)[uVar11];
                    pAVar15 = local_508;
                    local_460 = local_4c4 / *piVar12;
                    pAVar13 = (AchievementRequirementSpec*)local_508->data();
                    pAVar14 = (AchievementRequirementSpec*)pAVar15->end();
                    local_468 = uVar11;
                    if (pAVar13 == pAVar14) {
                        local_45c = 0;
                    } else {
                        local_45c = 0;
                        bVar30 = false;
                        local_480 = pAVar14;
                        do {
                            uVar6 = pAVar13->GetX();
                            if (uVar11 == uVar6) {
                                local_488 =
                                    (AchievementRequirementSpec*)(((uint64_t)local_488._1_7_ << 8) | (uint8_t)bVar30);
                                iVar7 = pAVar13->GetStatus();
                                pAVar15 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)pAVar13->second();
                                puVar16 = (unsigned int*)pAVar15->data();
                                puVar17 = (unsigned int*)pAVar15->end();
                                iVar29 = 0;
                                pAVar2 = local_488;
                                pAVar14 = local_480;
                                uVar11 = local_468;
                                for (; local_488 = pAVar2, local_480 = pAVar14, local_468 = uVar11, puVar16 != puVar17;
                                     puVar16 = puVar16 + 1) {
                                    iVar8 = playerGameState.GetStatLevelMaxActual(*puVar16);
                                    iVar29 = iVar29 + iVar8;
                                    pAVar2 = local_488;
                                    pAVar14 = local_480;
                                    uVar11 = local_468;
                                }
                                if (iVar29 < iVar7) {
                                    piVar12 = &local_458[uVar11];
                                    pAVar14 = local_480;
                                    uVar11 = local_468;
                                    iVar29 = (iVar29 * local_460) / iVar7;
                                } else {
                                    local_45c = local_45c + 1;
                                    if (local_45c == local_46c) {
                                        pAVar24 = &local_e0;
                                        puVar23 = (uint8_t*)(*pAVar24)[uVar11];
                                        *puVar23 = 1;
                                        cVar5 = AreGroupsCompleted(pAVar24, &local_e0, local_478->field_664);
                                        if (cVar5) {
                                            iVar7 = 1;
                                            if (((unsigned long)pAVar2 & 1) == 0)
                                                goto LAB_100556500;
                                            break;
                                        }
                                    }
                                    piVar12 = &local_458[uVar11];
                                    iVar29 = local_460;
                                }
                                *piVar12 = *piVar12 + iVar29;
                            }
                            pAVar13 = pAVar13 + 1;
                            bVar30 = pAVar13 == pAVar14;
                        } while (!bVar30);
                    }
                    pAVar15 = local_4f8;
                    this_01 = (GameToken*)local_4f8->data();
                    pGVar18 = (GameToken*)pAVar15->end();
                    bVar30 = this_01 == pGVar18;
                    local_4a0 = pGVar18;
                    while (!bVar30) {
                        uVar6 = this_01->GetX();
                        if (uVar11 == uVar6) {
                            local_480 =
                                (AchievementRequirementSpec*)(((uint64_t)local_480._1_7_ << 8) | (uint8_t)bVar30);
                            uVar9 = this_01->GetStatus();
                            local_488 =
                                (AchievementRequirementSpec*)(((uint64_t)local_488._4_4_ << 32) | (uint32_t)uVar9);
                            pAVar15 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)this_01->second();
                            piVar12 = (int*)pAVar15->data();
                            piVar19 = (int*)pAVar15->end();
                            iVar29 = 0;
                            pGVar18 = local_4a0;
                            pAVar14 = local_480;
                            uVar11 = local_468;
                            for (; local_4a0 = pGVar18, local_480 = pAVar14, local_468 = uVar11, piVar12 != piVar19;
                                 piVar12 = piVar12 + 1) {
                                pCVar22 = (ConfigProvider*)local_4a8->GetDomain();
                                pCVar22->GetVarType(VarDomainType::PLAYER, *piVar12);
                                uVar3 = (playerVarDomain._vptr->GetVarValue)((shared_ptr<VarType>*)playerVarDomain);
                                iVar7 = ((VarValue*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar3))->GetInt();
                                iVar29 = iVar29 + iVar7;
                                pGVar18 = local_4a0;
                                pAVar14 = local_480;
                                uVar11 = local_468;
                            }
                            if (iVar29 < (int)local_488) {
                                piVar12 = &local_458[uVar11];
                                pGVar18 = local_4a0;
                                iVar29 = (iVar29 * local_460) / (int)local_488;
                            } else {
                                local_45c = local_45c + 1;
                                if (local_45c == local_46c) {
                                    pAVar24 = &local_e0;
                                    puVar23 = (uint8_t*)(*pAVar24)[uVar11];
                                    *puVar23 = 1;
                                    cVar5 = AreGroupsCompleted(pAVar24, &local_e0, local_478->field_664);
                                    if (cVar5) {
                                        iVar7 = 1;
                                        if (((unsigned long)pAVar14 & 1) == 0)
                                            goto LAB_100556500;
                                        goto LAB_100555c82;
                                    }
                                }
                                piVar12 = &local_458[uVar11];
                                iVar29 = local_460;
                            }
                            *piVar12 = *piVar12 + iVar29;
                        }
                        this_01 = (GameToken*)&this_01[1].m_status;
                        bVar30 = this_01 == pGVar18;
                    }
                    iVar7 = 9;
                    if (bVar30) {
                    LAB_100555c82:
                        pAVar15 = local_4f0;
                        pAVar14 = (AchievementRequirementSpec*)local_4f0->data();
                        local_488 = (AchievementRequirementSpec*)pAVar15->end();
                        bVar30 = pAVar14 == local_488;
                        while (!bVar30) {
                            uVar6 = pAVar14->GetX();
                            if (uVar11 == uVar6) {
                                local_480 =
                                    (AchievementRequirementSpec*)(((uint64_t)local_480._1_7_ << 8) | (uint8_t)bVar30);
                                iVar7 = pAVar14->GetStatus();
                                pAVar15 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)pAVar14->second();
                                piVar12 = (int*)pAVar15->data();
                                piVar19 = (int*)pAVar15->end();
                                iVar29 = 0;
                                pAVar13 = local_480;
                                uVar11 = local_468;
                                for (; local_480 = pAVar13, local_468 = uVar11, piVar12 != piVar19;
                                     piVar12 = piVar12 + 1) {
                                    pCVar22 = (ConfigProvider*)local_4a8->GetDomain();
                                    pCVar22->GetVarBitType(*piVar12);
                                    uVar3 = (playerVarDomain._vptr->GetVarBitValue)(
                                        (shared_ptr<VarBitType>*)playerVarDomain);
                                    iVar29 = iVar29 + (int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar3);
                                    pAVar13 = local_480;
                                    uVar11 = local_468;
                                }
                                if (iVar29 < iVar7) {
                                    piVar12 = &local_458[uVar11];
                                    iVar29 = (iVar29 * local_460) / iVar7;
                                } else {
                                    local_45c = local_45c + 1;
                                    if (local_45c == local_46c) {
                                        pAVar24 = &local_e0;
                                        puVar23 = (uint8_t*)(*pAVar24)[uVar11];
                                        *puVar23 = 1;
                                        cVar5 = AreGroupsCompleted(pAVar24, &local_e0, local_478->field_664);
                                        if (cVar5) {
                                            iVar7 = 1;
                                            if (((unsigned long)pAVar13 & 1) == 0)
                                                goto LAB_100556500;
                                            goto LAB_100555e3b;
                                        }
                                    }
                                    piVar12 = &local_458[uVar11];
                                    iVar29 = local_460;
                                }
                                *piVar12 = *piVar12 + iVar29;
                            }
                            pAVar14 = pAVar14 + 1;
                            bVar30 = pAVar14 == local_488;
                        }
                        iVar7 = 13;
                        if (bVar30) {
                        LAB_100555e3b:
                            pAVar15 = local_4e8;
                            pLVar20 = (LightType*)local_4e8->data();
                            pLVar21 = (LightType*)pAVar15->end();
                            for (; pLVar20 != pLVar21; pLVar20 = (LightType*)&pLVar20->field_72) {
                                uVar6 = pLVar20->GetX();
                                if (local_468 == uVar6) {
                                    pCVar22 = (ConfigProvider*)local_4a8->GetDomain();
                                    varDomainType = VarDomainType::PLAYER;
                                    iVar29 = pLVar20->GetID(0);
                                    pCVar22->GetVarType(varDomainType, iVar29);
                                    uVar3 = (playerVarDomain._vptr->GetVarValue)((shared_ptr<VarType>*)playerVarDomain);
                                    uVar6 = ((VarValue*)(((uint64_t)extraout_var_01 << 8) | (uint8_t)uVar3))->GetInt();
                                    bVar4 = pLVar20->GetAmplitude();
                                    iVar29 = pLVar20->GetStatus();
                                    if (iVar29 <= (int)(uVar6 >> (bVar4 & 31) & 1)) {
                                        local_45c = local_45c + 1;
                                        if (local_45c == local_46c) {
                                            pAVar24 = &local_e0;
                                            puVar23 = (uint8_t*)(*pAVar24)[local_468];
                                            *puVar23 = 1;
                                            cVar5 = AreGroupsCompleted(pAVar24, &local_e0, local_478->field_664);
                                            if (cVar5) {
                                                iVar7 = 1;
                                                goto LAB_100555f9a;
                                            }
                                        }
                                        piVar12 = &local_458[local_468];
                                        *piVar12 = *piVar12 + local_460;
                                    }
                                }
                            }
                            iVar7 = 17;
                        LAB_100555f9a:
                            uVar11 = local_468;
                            pAVar15 = local_4e0;
                            if (pLVar20 == pLVar21) {
                                pLVar20 = (LightType*)local_4e0->data();
                                pLVar21 = (LightType*)pAVar15->end();
                                for (; pLVar20 != pLVar21; pLVar20 = (LightType*)&pLVar20->field_72) {
                                    uVar6 = pLVar20->GetX();
                                    if (uVar11 == uVar6) {
                                        pCVar22 = (ConfigProvider*)local_4a8->GetDomain();
                                        iVar29 = pLVar20->GetID(0);
                                        pCVar22->GetVarBitType(iVar29);
                                        uVar3 = (playerVarDomain._vptr->GetVarBitValue)(
                                            (shared_ptr<VarBitType>*)playerVarDomain);
                                        bVar4 = pLVar20->GetAmplitude();
                                        iVar29 = pLVar20->GetStatus();
                                        if (iVar29 <=
                                            (int)((unsigned int)(((uint64_t)extraout_var_02 << 8) | (uint8_t)uVar3) >>
                                                      (bVar4 & 31) &
                                                  1)) {
                                            local_45c = local_45c + 1;
                                            if (local_45c == local_46c) {
                                                pAVar24 = &local_e0;
                                                puVar23 = (uint8_t*)(*pAVar24)[local_468];
                                                *puVar23 = 1;
                                                cVar5 = AreGroupsCompleted(pAVar24, &local_e0, local_478->field_664);
                                                if (cVar5) {
                                                    iVar7 = 1;
                                                    pAVar15 = local_4d8;
                                                    uVar11 = local_468;
                                                    goto joined_r0x000100556115;
                                                }
                                            }
                                            piVar12 = &local_458[local_468];
                                            *piVar12 = *piVar12 + local_460;
                                        }
                                        uVar11 = local_468;
                                    }
                                }
                                iVar7 = 19;
                                pAVar15 = local_4d8;
                            joined_r0x000100556115:
                                local_4d8 = pAVar15;
                                if (pLVar20 == pLVar21) {
                                    pAVar14 = (AchievementRequirementSpec*)pAVar15->data();
                                    pAVar13 = (AchievementRequirementSpec*)pAVar15->end();
                                    for (; pAVar14 != pAVar13; pAVar14 = pAVar14 + 1) {
                                        uVar6 = pAVar14->GetX();
                                        if (uVar11 == uVar6) {
                                            pCVar22 = (ConfigProvider*)local_4a8->GetDomain();
                                            iVar29 = pAVar14->GetID(0);
                                            this_02 = pCVar22->GetConfig<QuestType>(iVar29, nullptr);
                                            cVar5 =
                                                ((QuestType*)(*this_02).operator->())->FinishedQuest(playerVarDomain);
                                            bVar30 = true;
                                            if (!cVar5) {
                                            LAB_100556210:
                                                if (!bVar30) {
                                                    iVar7 = 1;
                                                    pAVar15 = local_4d0;
                                                    goto joined_r0x00010055624b;
                                                }
                                            } else {
                                                local_45c = local_45c + 1;
                                                if (local_45c == local_46c) {
                                                    pAVar24 = &local_e0;
                                                    puVar23 = (uint8_t*)(*pAVar24)[uVar11];
                                                    *puVar23 = 1;
                                                    cVar5 =
                                                        AreGroupsCompleted(pAVar24, &local_e0, local_478->field_664);
                                                    if (cVar5) {
                                                        bVar30 = false;
                                                        goto LAB_100556210;
                                                    }
                                                }
                                                piVar12 = &local_458[uVar11];
                                                *piVar12 = *piVar12 + local_460;
                                            }
                                        }
                                    }
                                    iVar7 = 21;
                                    pAVar15 = local_4d0;
                                joined_r0x00010055624b:
                                    local_4d0 = pAVar15;
                                    if (pAVar14 == pAVar13) {
                                        pAVar14 = (AchievementRequirementSpec*)pAVar15->data();
                                        pAVar13 = (AchievementRequirementSpec*)pAVar15->end();
                                        if (pAVar14 == pAVar13) {
                                            local_4a0 = (GameToken*)((unsigned long)local_4a0._4_4_ << 32);
                                        } else {
                                            local_4a0 = (GameToken*)((unsigned long)local_4a0._4_4_ << 32);
                                            local_488 = pAVar13;
                                            do {
                                                local_468 = local_468 & 18446744073709551360;
                                                uVar6 = pAVar14->GetX();
                                                if (uVar11 == uVar6) {
                                                    local_480 = pAVar14;
                                                    local_520[0]._0_4_ = pAVar14->GetID(0);
                                                    local_530 = arg4.find(local_520);
                                                    local_520 = arg4.end();
                                                    cVar5 = local_530 != local_520;
                                                    pAVar14 = local_480;
                                                    if (!cVar5) {
                                                        iVar29 = local_480->GetID(0);
                                                        this_04 = (shared_ptr<AchievementType>*)local_4a8->List(
                                                            iVar29, nullptr);
                                                        pAVar24 = (AchievementType*)(*this_04).operator->();
                                                        iVar29 = GetProgress(pAVar24, playerGameState, playerVarDomain,
                                                                             arg3, arg4);
                                                        local_520[0]._0_4_ = pAVar14->GetID(0);
                                                        piVar12 = &arg4[local_520];
                                                        *piVar12 = iVar29;
                                                    } else {
                                                        lVar25 = local_530.HeapBeginPtr();
                                                        iVar29 = *(int*)(lVar25 + 4);
                                                        pAVar14 = local_480;
                                                    }
                                                    if (iVar29 == -3) {
                                                        local_4a0._4_4_ =
                                                            (unsigned int)((unsigned long)local_4a0 >> 32);
                                                        local_4a0 = (GameToken*)(((uint64_t)local_4a0._4_4_ << 32) |
                                                                                 (uint32_t)((int)local_4a0 + 1));
                                                    } else if (iVar29 == -2) {
                                                        local_45c = local_45c + 1;
                                                        if (local_46c <= local_45c) {
                                                            pAVar24 = &local_e0;
                                                            puVar23 = (uint8_t*)(*pAVar24)[uVar11];
                                                            *puVar23 = 1;
                                                            cVar5 = AreGroupsCompleted(pAVar24, &local_e0,
                                                                                       local_478->field_664);
                                                            if (cVar5) {
                                                                iVar7 = 1;
                                                                if ((local_468 & 1) == 0)
                                                                    goto LAB_100556500;
                                                                break;
                                                            }
                                                        }
                                                        piVar12 = &local_458[uVar11];
                                                        *piVar12 = *piVar12 + local_460;
                                                    } else if (0 < iVar29) {
                                                        piVar12 = &local_458[uVar11];
                                                        *piVar12 = *piVar12 + (iVar29 * local_460) / 10000;
                                                    }
                                                }
                                                pAVar14 = pAVar14 + 1;
                                            } while (pAVar14 != local_488);
                                        }
                                        iVar7 = 0;
                                        if (0 < (int)local_4a0) {
                                            if (local_46c <= local_45c + (int)local_4a0) {
                                                puVar23 = &local_188[uVar11];
                                                *puVar23 = 1;
                                            }
                                            iVar7 = 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                LAB_100556500:
                    if (iVar7 != 0)
                        goto LAB_10055651a;
                    uVar11 = uVar11 + 1;
                } while (uVar11 != local_500);
            }
            iVar7 = 2;
        LAB_10055651a:
            iVar29 = -2;
            if (iVar7 == 2) {
                pAVar24 = &local_230;
                lVar25 = pAVar24->size();
                if (lVar25 != 0) {
                    uVar11 = 0;
                    do {
                        pbVar26 = &local_e0[uVar11];
                        bVar4 = *pbVar26;
                        pbVar26 = &local_188[uVar11];
                        bVar1 = *pbVar26;
                        pbVar26 = &local_230[uVar11];
                        *pbVar26 = bVar1 | bVar4;
                        uVar11 = uVar11 + 1;
                        pAVar24 = &local_230;
                        uVar27 = local_230.size();
                    } while (uVar11 < uVar27);
                }
                cVar5 = AreGroupsCompleted(pAVar24, (fixed_vector<bool, _127ul>*)&local_230, local_478->field_664);
                iVar29 = -3;
                if ((!cVar5) && (cVar5 = InGracePeriod(local_478, arg3), !cVar5)) {
                    cVar5 = PrereqsAreComplete(local_478, playerGameState, playerVarDomain, arg3, arg4);
                    if (!cVar5) {
                        puVar28 = &arg4[local_478->field_32];
                        *puVar28 = 4294967295;
                        iVar29 = -1;
                    } else {
                        uVar10 = local_458.size();
                        uVar6 = local_478->field_664;
                        piVar12 = (int*)local_458.HeapBeginPtr();
                        auVar31 = local_458.end();
                        if (uVar6 == uVar10) {
                            iVar29 = 0;
                            for (; piVar12 != auVar31._0_8_; piVar12 = piVar12 + 1) {
                                iVar29 = iVar29 + *piVar12;
                            }
                        } else {
                            eastl::sort<int*>(piVar12, auVar31._0_8_, auVar31._8_8_);
                            if ((int)local_478->field_664 < 1) {
                                iVar29 = 0;
                            } else {
                                uVar11 = 0;
                                iVar29 = 0;
                                do {
                                    piVar12 = &local_458[uVar11];
                                    iVar29 = iVar29 + *piVar12;
                                    uVar11 = uVar11 + 1;
                                } while ((long)uVar11 < (long)(int)local_478->field_664);
                            }
                        }
                    }
                }
            }
        }
        return iVar29;
    }

    // 0x100556940
    unsigned long AchievementType::AreGroupsCompleted(const eastl::fixed_vector<bool, 127ul>& arg1, int arg2) {
        uint8_t* pbVar2;
        unsigned long arg1_00;
        uint64_t unaff_R12;
        unsigned int uVar4;

        int iVar1 = arg1.size();
        unsigned long uVar3 = (((uint64_t)((int64_t)((unsigned long)unaff_R12 >> 8)) << 8) | (uint8_t)(0 < iVar1));
        if (0 < iVar1) {
            pbVar2 = &arg1[0];
            uVar4 = (unsigned int)*pbVar2;
            if ((unsigned int)*pbVar2 != arg2) {
                arg1_00 = 1;
                do {
                    iVar1 = arg1.size();
                    uVar3 = (((uint64_t)((int64_t)(uVar3 >> 8)) << 8) | (uint8_t)((long)arg1_00 < (long)iVar1));
                    if ((long)iVar1 <= (long)arg1_00)
                        break;
                    pbVar2 = &arg1[arg1_00];
                    uVar4 = uVar4 + *pbVar2;
                    arg1_00 = arg1_00 + 1;
                } while (uVar4 != arg2);
            }
        }
        return uVar3 & 4294967295;
    }

    // 0x100556aa0
    unsigned long AchievementType::PrereqsAreComplete(
        PlayerGameState& playerGameState, PlayerVarDomain& playerVarDomain, int arg3,
        eastl::hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, BucketAllocatorEASTL>& arg4) {
        VarDomainType* varDomainType;
        ModeGame* this_00;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>* pvVar1;
        PlayerVarDomain* this_01;
        uint8_t bVar2;
        uint8_t uVar3;
        bool cVar4;
        int iVar5;
        int iVar6;
        unsigned int uVar7;
        uint32_t uVar8;
        unsigned int uVar9;
        unsigned int uVar10;
        unsigned long uVar11;
        int* piVar12;
        AchievementRequirementSpec* pAVar13;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* pAVar14;
        ConfigProvider* pCVar15;
        uint32_t* puVar16;
        GameToken* pGVar17;
        GameToken* pGVar18;
        int* piVar19;
        uint64_t extraout_var;
        ConfigProvider* pCVar20;
        uint64_t extraout_var_00;
        LightType* pLVar21;
        LightType* pLVar22;
        uint64_t extraout_var_01;
        uint64_t extraout_var_02;
        AchievementRequirementSpec* pAVar23;
        shared_ptr<QuestType>* this_04;
        long lVar24;
        shared_ptr<AchievementType>* this_06;
        int iVar25;
        Array<int>* this_08;
        uint8_t local_310[16];
        ReturnValue local_300;
        ModeGame* local_2f0;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>* local_2e8;
        PlayerVarDomain* local_2e0;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>* local_2d8;
        ConfigProvider* local_2d0;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>* local_2c0;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>* local_2b0;
        VarTypeList* local_2a0;
        Array<int>* local_298;
        AchievementRequirementSpec* local_290;
        ConfigProvider* local_288;
        PlayerVarDomain* local_280;
        int local_274;
        ConfigProvider* local_270;
        int local_264;
        fixed_vector<int, 128ul> local_260;

        if (field_128 == '\0') {
            if ((int)field_464 < 1) {
                uVar11 = (((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)1);
            } else {
                local_2a0 = (VarTypeList*)field_24;
                local_260 = eastl::fixed_vector<int, 128ul>();
                this_08 = (Array<int>*)&field_440;
                local_288 = (ConfigProvider*)this;
                uVar11 = this_08->end();
                local_260.resize(uVar11);
                iVar5 = this_08->end();
                if (0 < iVar5) {
                    local_2c0 =
                        (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                                eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)&local_288->field_216;
                    local_2f0 = (ModeGame*)&local_288->field_248;
                    local_2e8 =
                        (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                                eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)&local_288->field_280;
                    local_2e0 = (PlayerVarDomain*)&local_288->field_312;
                    local_2d8 =
                        (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                                eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)&local_288->field_344;
                    local_2d0 = (ConfigProvider*)&local_288->field_408;
                    local_2b0 =
                        (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                                eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)&local_288->field_376;
                    this = nullptr;
                    local_298 = this_08;
                    local_280 = playerVarDomain;
                    do {
                        piVar12 = (int*)(*this_08)[(unsigned long)this];
                        local_274 = *piVar12;
                        iVar5 = local_2c0->size();
                        local_264 = 0;
                        local_270 = (ConfigProvider*)this;
                        if ((long)this < (long)iVar5) {
                            this = (AchievementType*)(*local_2c0)[(unsigned long)this];
                            pAVar13 = (AchievementRequirementSpec*)HeapBeginPtr();
                            local_290 = (AchievementRequirementSpec*)end();
                            uVar7 = 5;
                            if (pAVar13 == local_290) {
                                local_264 = 0;
                            } else {
                                local_264 = 0;
                                do {
                                    iVar5 = pAVar13->GetStatus();
                                    pAVar14 =
                                        (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)pAVar13->second();
                                    this = (AchievementType*)pAVar14->data();
                                    pCVar15 = (ConfigProvider*)pAVar14->end();
                                    iVar25 = 0;
                                    if ((ConfigProvider*)this != pCVar15) {
                                        iVar25 = 0;
                                        do {
                                            iVar6 = playerGameState.GetStatLevelMaxActual(
                                                *(unsigned int*)&((ConfigProvider*)this)->_vptr);
                                            iVar25 = iVar25 + iVar6;
                                            this = (AchievementType*)((long)&((ConfigProvider*)this)->_vptr + 4);
                                        } while ((ConfigProvider*)this != pCVar15);
                                    }
                                    playerVarDomain = local_280;
                                    if ((iVar5 <= iVar25) && (local_264 = local_264 + 1, local_264 == local_274)) {
                                        this = &local_260;
                                        puVar16 = (uint32_t*)(*this)[(unsigned long)local_270];
                                        *puVar16 = 1;
                                        bVar2 = PrereqCompletionTest((AchievementType*)local_288,
                                                                     (fixed_vector<int, _128ul>*)this);
                                        uVar7 = (unsigned int)(bVar2 ^ 1) * 4 + 1;
                                        if (uVar7 != 0)
                                            break;
                                    }
                                    uVar7 = 5;
                                    pAVar13 = pAVar13 + 1;
                                } while (pAVar13 != local_290);
                            }
                            this_08 = local_298;
                            if (uVar7 == 5)
                                goto LAB_100556d6a;
                        } else {
                        LAB_100556d6a:
                            this_00 = local_2f0;
                            iVar5 = local_2f0->size();
                            if ((long)local_270 < (long)iVar5) {
                                this = (AchievementType*)(*this_00)[(unsigned long)local_270];
                                pGVar17 = (GameToken*)HeapBeginPtr();
                                pGVar18 = (GameToken*)end();
                                for (; pGVar17 != pGVar18; pGVar17 = (GameToken*)&pGVar17[1].m_status) {
                                    uVar8 = pGVar17->GetStatus();
                                    local_290 = (AchievementRequirementSpec*)(((uint64_t)local_290._4_4_ << 32) |
                                                                              (uint32_t)uVar8);
                                    pAVar14 =
                                        (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)pGVar17->second();
                                    piVar12 = (int*)pAVar14->data();
                                    piVar19 = (int*)pAVar14->end();
                                    this = nullptr;
                                    if (piVar12 != piVar19) {
                                        this = nullptr;
                                        do {
                                            pCVar15 = (ConfigProvider*)local_2a0->GetDomain();
                                            pCVar15->GetVarType(VarDomainType::PLAYER, *piVar12);
                                            uVar3 = local_280->GetVarValue();
                                            iVar5 =
                                                ((VarValue*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar3))->GetInt();
                                            this = (AchievementType*)(unsigned long)(unsigned int)((int)this + iVar5);
                                            piVar12 = piVar12 + 1;
                                        } while (piVar12 != piVar19);
                                    }
                                    playerVarDomain = local_280;
                                    if (((int)local_290 <= (int)this) &&
                                        (local_264 = local_264 + 1, local_264 == local_274)) {
                                        this = &local_260;
                                        puVar16 = (uint32_t*)(*this)[(unsigned long)local_270];
                                        *puVar16 = 1;
                                        bVar2 = PrereqCompletionTest((AchievementType*)local_288,
                                                                     (fixed_vector<int, _128ul>*)this);
                                        uVar7 = (unsigned int)(bVar2 ^ 1) * 8 + 1;
                                        if (uVar7 != 0)
                                            goto LAB_100556ed4;
                                    }
                                }
                                uVar7 = 9;
                            LAB_100556ed4:
                                this_08 = local_298;
                                if (uVar7 != 9)
                                    goto LAB_100557560;
                            }
                            pvVar1 = local_2e8;
                            iVar5 = local_2e8->size();
                            if ((long)local_270 < (long)iVar5) {
                                this = (AchievementType*)(*pvVar1)[(unsigned long)local_270];
                                pGVar17 = (GameToken*)HeapBeginPtr();
                                pGVar18 = (GameToken*)end();
                                for (; pGVar17 != pGVar18; pGVar17 = (GameToken*)&pGVar17[1].m_status) {
                                    uVar8 = pGVar17->GetStatus();
                                    local_290 = (AchievementRequirementSpec*)(((uint64_t)local_290._4_4_ << 32) |
                                                                              (uint32_t)uVar8);
                                    pAVar14 =
                                        (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)pGVar17->second();
                                    pCVar15 = (ConfigProvider*)pAVar14->data();
                                    pCVar20 = (ConfigProvider*)pAVar14->end();
                                    iVar5 = 0;
                                    if (pCVar15 != pCVar20) {
                                        iVar5 = 0;
                                        do {
                                            ((ConfigProvider*)local_2a0->GetDomain())
                                                ->GetVarBitType(*(int*)&pCVar15->_vptr);
                                            uVar3 = local_280->GetVarBitValue();
                                            iVar5 = iVar5 + (int)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar3);
                                            pCVar15 = (ConfigProvider*)((long)&pCVar15->_vptr + 4);
                                        } while (pCVar15 != pCVar20);
                                    }
                                    this = (AchievementType*)local_288;
                                    this_08 = local_298;
                                    if ((int)local_290 <= iVar5) {
                                        local_264 = local_264 + 1;
                                        pCVar15 = (ConfigProvider*)this;
                                        if (local_264 == local_274) {
                                            puVar16 = &local_260[(unsigned long)local_270];
                                            *puVar16 = 1;
                                            cVar4 = PrereqCompletionTest(local_260);
                                            uVar7 = 13;
                                            if (cVar4) {
                                                uVar7 = 1;
                                            }
                                            if (uVar7 != 0)
                                                goto LAB_100557049;
                                        }
                                    }
                                    this = (AchievementType*)pCVar15;
                                }
                                uVar7 = 13;
                            LAB_100557049:
                                playerVarDomain = local_280;
                                if (uVar7 != 13)
                                    goto LAB_100557560;
                            }
                            this_01 = local_2e0;
                            iVar5 = local_2e0->size();
                            if ((long)local_270 < (long)iVar5) {
                                this = (AchievementType*)(*this_01)[(unsigned long)local_270];
                                pLVar21 = (LightType*)HeapBeginPtr();
                                pLVar22 = (LightType*)end();
                                for (; uVar7 = 17, pLVar21 != pLVar22; pLVar21 = (LightType*)&pLVar21->field_72) {
                                    pCVar15 = (ConfigProvider*)local_2a0->GetDomain();
                                    varDomainType = VarDomainType::PLAYER;
                                    iVar5 = pLVar21->GetID(0);
                                    pCVar15->GetVarType(varDomainType, iVar5);
                                    uVar3 = local_280->GetVarValue();
                                    uVar9 = ((VarValue*)(((uint64_t)extraout_var_01 << 8) | (uint8_t)uVar3))->GetInt();
                                    bVar2 = pLVar21->GetAmplitude();
                                    this = nullptr;
                                    uVar10 = pLVar21->GetStatus();
                                    this_08 = local_298;
                                    uVar7 = 0;
                                    if (((uVar9 >> (bVar2 & 31) & 1) != uVar10) &&
                                        (local_264 = local_264 + 1, local_264 == local_274)) {
                                        this = &local_260;
                                        puVar16 = (uint32_t*)(*this)[(unsigned long)local_270];
                                        *puVar16 = 1;
                                        bVar2 = PrereqCompletionTest((AchievementType*)local_288,
                                                                     (fixed_vector<int, _128ul>*)this);
                                        uVar7 = (unsigned int)(bVar2 ^ 1) << 4 | 1;
                                    }
                                    if (uVar7 != 0)
                                        break;
                                }
                                playerVarDomain = local_280;
                                if (uVar7 != 17)
                                    goto LAB_100557560;
                            }
                            pvVar1 = local_2d8;
                            iVar5 = local_2d8->size();
                            if ((long)local_270 < (long)iVar5) {
                                this = (AchievementType*)(*pvVar1)[(unsigned long)local_270];
                                pLVar21 = (LightType*)HeapBeginPtr();
                                pLVar22 = (LightType*)end();
                                for (; uVar7 = 19, pLVar21 != pLVar22; pLVar21 = (LightType*)&pLVar21->field_72) {
                                    pCVar15 = (ConfigProvider*)local_2a0->GetDomain();
                                    iVar5 = pLVar21->GetID(0);
                                    pCVar15->GetVarBitType(iVar5);
                                    uVar3 = local_280->GetVarBitValue();
                                    bVar2 = pLVar21->GetAmplitude();
                                    this = nullptr;
                                    uVar9 = pLVar21->GetStatus();
                                    uVar7 = 0;
                                    if ((((unsigned int)(((uint64_t)extraout_var_02 << 8) | (uint8_t)uVar3) >>
                                              (bVar2 & 31) &
                                          1) != uVar9) &&
                                        (local_264 = local_264 + 1, local_264 == local_274)) {
                                        this = &local_260;
                                        puVar16 = (uint32_t*)(*this)[(unsigned long)local_270];
                                        *puVar16 = 1;
                                        cVar4 = PrereqCompletionTest((AchievementType*)local_288,
                                                                     (fixed_vector<int, _128ul>*)this);
                                        uVar7 = 19;
                                        if (cVar4) {
                                            uVar7 = 1;
                                        }
                                    }
                                    if (uVar7 != 0)
                                        break;
                                }
                                playerVarDomain = local_280;
                                if (uVar7 != 19)
                                    goto LAB_100557560;
                            }
                            this = (AchievementType*)local_2d0;
                            iVar5 = local_2d0->size();
                            if ((long)local_270 < (long)iVar5) {
                                this = (AchievementType*)(*this)[(unsigned long)local_270];
                                pAVar13 = (AchievementRequirementSpec*)HeapBeginPtr();
                                pAVar23 = (AchievementRequirementSpec*)end();
                                for (; uVar7 = 21, pAVar13 != pAVar23; pAVar13 = pAVar13 + 1) {
                                    this = (AchievementType*)local_2a0->GetDomain();
                                    iVar5 = pAVar13->GetID(0);
                                    this_04 = GetConfig<QuestType>(iVar5, nullptr);
                                    cVar4 = ((QuestType*)(*this_04).operator->())->FinishedQuest(*local_280);
                                    uVar7 = 0;
                                    if ((cVar4) && (local_264 = local_264 + 1, local_264 == local_274)) {
                                        puVar16 = &local_260[(unsigned long)local_270];
                                        *puVar16 = 1;
                                        cVar4 = PrereqCompletionTest((AchievementType*)local_288, &local_260);
                                        uVar7 = 21;
                                        if (cVar4) {
                                            uVar7 = 1;
                                        }
                                    }
                                    if (uVar7 != 0)
                                        break;
                                }
                                playerVarDomain = local_280;
                                if (uVar7 != 21)
                                    goto LAB_100557560;
                            }
                            iVar5 = local_2b0->size();
                            if ((long)local_270 < (long)iVar5) {
                                this = (AchievementType*)(*local_2b0)[(unsigned long)local_270];
                                pAVar13 = (AchievementRequirementSpec*)HeapBeginPtr();
                                local_290 = (AchievementRequirementSpec*)end();
                                if (pAVar13 != local_290) {
                                    do {
                                        local_300[0]._0_4_ = pAVar13->GetID(0);
                                        this = (AchievementType*)local_310;
                                        *this = arg4.find(local_300);
                                        local_300 = arg4.end();
                                        cVar4 = *this != local_300;
                                        if (!cVar4) {
                                            this = (AchievementType*)local_288->field_24;
                                            iVar5 = pAVar13->GetID(0);
                                            this_06 = (shared_ptr<AchievementType>*)List(iVar5, nullptr);
                                            iVar5 = GetProgress((AchievementType*)(*this_06).operator->(),
                                                                playerGameState, playerVarDomain, arg3, arg4);
                                        } else {
                                            lVar24 = HeapBeginPtr();
                                            iVar5 = *(int*)(lVar24 + 4);
                                        }
                                        uVar7 = 0;
                                        if ((iVar5 + 3U < 2) && (local_264 = local_264 + 1, local_264 == local_274)) {
                                            this = &local_260;
                                            puVar16 = (uint32_t*)(*this)[(unsigned long)local_270];
                                            *puVar16 = 1;
                                            cVar4 = PrereqCompletionTest((AchievementType*)local_288,
                                                                         (fixed_vector<int, _128ul>*)this);
                                            uVar7 = 23;
                                            if (cVar4) {
                                                uVar7 = 1;
                                            }
                                        }
                                        if (uVar7 != 0)
                                            goto LAB_100557542;
                                        pAVar13 = pAVar13 + 1;
                                    } while (pAVar13 != local_290);
                                }
                                uVar7 = 23;
                            LAB_100557542:
                                this_08 = local_298;
                                if (uVar7 != 23)
                                    goto LAB_100557560;
                            }
                            uVar7 = 0;
                        }
                    LAB_100557560:
                        if (uVar7 != 0)
                            goto LAB_100557589;
                        this = (AchievementType*)((long)&local_270->_vptr + 1);
                        iVar5 = this_08->end();
                    } while ((long)this < (long)iVar5);
                }
                uVar7 = 2;
            LAB_100557589:
                uVar11 = (((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)(uVar7 != 2));
            }
        } else {
            uVar11 = 0;
        }
        return uVar11 & 4294967295;
    }

    // 0x1005576c0
    unsigned long AchievementType::PrereqCompletionTest(const eastl::fixed_vector<int, 128ul>& arg1) {
        unsigned int* puVar2;
        int* piVar3;
        unsigned long arg1_00;
        uint64_t unaff_R12;
        unsigned int uVar5;

        int iVar1 = arg1.size();
        unsigned long uVar4 = (((uint64_t)((int64_t)((unsigned long)unaff_R12 >> 8)) << 8) | (uint8_t)(0 < iVar1));
        if (0 < iVar1) {
            puVar2 = &arg1[0];
            uVar5 = *puVar2;
            if (uVar5 != field_464) {
                arg1_00 = 1;
                do {
                    iVar1 = arg1.size();
                    uVar4 = (((uint64_t)((int64_t)(uVar4 >> 8)) << 8) | (uint8_t)((long)arg1_00 < (long)iVar1));
                    if ((long)iVar1 <= (long)arg1_00)
                        break;
                    piVar3 = &arg1[arg1_00];
                    uVar5 = uVar5 + *piVar3;
                    arg1_00 = arg1_00 + 1;
                } while (uVar5 != field_464);
            }
        }
        return uVar4 & 4294967295;
    }

    // 0x100557780
    uint32_t AchievementType::PrereqsAreComplete(PlayerGameState& playerGameState, PlayerVarDomain& playerVarDomain,
                                                 int arg3) {
        eastl local_38;

        eastl::destruct<oldscape::highlight::NpcUID*>(&local_38);
        hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, BucketAllocatorEASTL> local_68(local_38);
        uint32_t uVar1 = PrereqsAreComplete(playerGameState, playerVarDomain, arg3, local_68);
        return uVar1;
    }

    // 0x1005578b0
    int AchievementType::CalculateRuneScore(PlayerGameState& playerGameState, PlayerVarDomain& playerVarDomain,
                                            AchievementTypeList& achievementTypeList) {
        bool cVar1;
        int iVar3;
        uint32_t uVar4;
        shared_ptr<oldscape::midi2::MidiRequest>* midiRequest1;
        AchievementType* pAVar5;
        uint32_t* puVar6;
        int* piVar7;
        shared_ptr<AchievementType>* this_00;
        int iVar8;
        DataStatus* local_38;

        local_38.destruct<oldscape::highlight::NpcUID*>();
        hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, BucketAllocatorEASTL> local_a8(8192, local_78,
                                                                                                  local_58, local_38);
        int local_3c = achievementTypeList.GetMinMapX();
        if (local_3c != 0) {
            iVar8 = 0;
            do {
                local_58[0]._0_4_ = iVar8;
                local_78 = local_a8.find(local_58);
                local_58 = local_a8.end();
                cVar1 = local_78 != local_58;
                if (!cVar1) {
                    midiRequest1 =
                        (shared_ptr<oldscape::midi2::MidiRequest>*)achievementTypeList.List(iVar8, &local_38);
                    if (local_38 == (DataStatus*)DataStatus::READY) {
                        if (!*midiRequest1 == *PTR_NullConfigType_100ee6520) {
                            pAVar5 = (AchievementType*)(*midiRequest1).operator->();
                            iVar3 = GetRuneScore(pAVar5);
                            if (iVar3 != 0) {
                                pAVar5 = (AchievementType*)(*midiRequest1).operator->();
                                uVar4 = GetProgress(pAVar5, playerGameState, playerVarDomain, 0, &local_a8);
                                local_58[0]._0_4_ = iVar8;
                                puVar6 = &local_a8[local_58];
                                *puVar6 = uVar4;
                            }
                        }
                    }
                }
                iVar8 = iVar8 + 1;
            } while (local_3c != iVar8);
        }
        auto local_78 = local_a8.begin();
        auto local_58 = local_a8.end();
        iVar8 = 0;
        while (true) {
            cVar1 = local_78 != local_58;
            if (!cVar1)
                break;
            piVar7 = (int*)local_78.HeapBeginPtr();
            if (piVar7[1] == -2) {
                this_00 = (shared_ptr<AchievementType>*)achievementTypeList.List(*piVar7, &local_38);
                pAVar5 = (AchievementType*)(*this_00).operator->();
                iVar3 = GetRuneScore(pAVar5);
                iVar8 = iVar8 + iVar3;
            }
            ++local_78;
        }
        return iVar8;
    }

    // 0x100557ac0
    void AchievementType::GetNumPrereqGroups() const {
        unsigned long uVar1 = field_216.size();
        uVar1 = eastl::max<unsigned long>(0, uVar1);
        unsigned long uVar2 = field_248.size();
        uVar1 = eastl::max<unsigned long>(uVar1, uVar2);
        uVar2 = field_280.size();
        uVar1 = eastl::max<unsigned long>(uVar1, uVar2);
        uVar2 = field_312.size();
        uVar1 = eastl::max<unsigned long>(uVar1, uVar2);
        uVar2 = field_344.size();
        uVar1 = eastl::max<unsigned long>(uVar1, uVar2);
        uVar2 = field_376.size();
        uVar1 = eastl::max<unsigned long>(uVar1, uVar2);
        uVar2 = field_408.size();
        eastl::max<unsigned long>(uVar1, uVar2);
    }

    // 0x100557b90
    unsigned long AchievementType::IsPrereqGroupComplete(PlayerGameState& playerGameState,
                                                         PlayerVarDomain& playerVarDomain, int arg3, int arg4) const {
        unsigned long result;
        bool bVar2;
        VarDomainType* varDomainType;
        PlayerVarDomain* shared_ptr;
        uint8_t uVar3;
        bool cVar4;
        uint32_t uVar6;
        int iVar7;
        unsigned int uVar8;
        unsigned int uVar9;
        Layout* pLVar11;
        GameToken* this_01;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* pAVar12;
        unsigned int* puVar13;
        unsigned int* puVar14;
        int* piVar15;
        ConfigProvider* pCVar16;
        uint32_t extraout_var;
        uint64_t extraout_var_01;
        LightType* pLVar17;
        uint32_t extraout_var_00;
        uint64_t extraout_var_02;
        AchievementRequirementSpec* this_02;
        AchievementRequirementSpec* pAVar18;
        shared_ptr<QuestType>* this_03;
        VarTypeList* pVVar19;
        long lVar20;
        shared_ptr<AchievementType>* this_05;
        uint64_t unaff_RBX;
        LightType* this_07;
        ReturnValue result;
        unsigned long uVar21;
        bool bVar22;
        uint8_t bVar23;
        ReturnValue local_a8;
        ReturnValue local_98;
        LightType* local_78;
        PlayerVarDomain* local_70;
        GameToken* local_68;
        LightType* local_48;
        uint8_t local_35;

        if (field_128 != '\0') {
            uVar21 = 0;
            goto LAB_10055836f;
        }
        uVar21 = (((uint64_t)((int64_t)((unsigned long)unaff_RBX >> 8)) << 8) | (uint8_t)1);
        if ((int)field_464 < 1)
            goto LAB_10055836f;
        uVar21 = (unsigned long)arg4;
        int* piVar10 = &field_440[uVar21];
        int local_3c = *piVar10;
        VarTypeList* local_50 = (VarTypeList*)field_24;
        AchievementType* local_60 = this;
        int iVar5 = field_216.size();
        int local_34 = 0;
        unsigned long local_58 = uVar21;
        if (arg4 < iVar5) {
            pLVar11 = &field_216[uVar21];
            this_01 = (GameToken*)pLVar11->HeapBeginPtr();
            local_68 = (GameToken*)pLVar11->end();
            if (this_01 == local_68) {
                local_34 = 0;
                goto LAB_100557d2d;
            }
            local_34 = 0;
            bVar22 = false;
            local_70 = playerVarDomain;
            do {
                local_78 = (LightType*)(((uint64_t)local_78._1_7_ << 8) | (uint8_t)bVar22);
                uVar6 = this_01->GetStatus();
                local_48 = (LightType*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)uVar6);
                pAVar12 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)this_01->second();
                puVar13 = (unsigned int*)pAVar12->data();
                puVar14 = (unsigned int*)pAVar12->end();
                this_07 = nullptr;
                if (puVar13 != puVar14) {
                    this_07 = nullptr;
                    do {
                        iVar5 = playerGameState.GetStatLevelMaxActual(*puVar13);
                        this_07 = (LightType*)(unsigned long)(unsigned int)((int)this_07 + iVar5);
                        puVar13 = puVar13 + 1;
                    } while (puVar13 != puVar14);
                }
                if (((int)this_07 < (int)local_48) || (local_34 = local_34 + 1, local_34 != local_3c)) {
                    bVar22 = true;
                } else {
                    bVar22 = false;
                }
                playerVarDomain = local_70;
                if (!bVar22) {
                    if (((unsigned long)local_78 & 1) != 0)
                        goto LAB_100557d2d;
                    goto LAB_10055836d;
                }
                this_01 = (GameToken*)&this_01[1].m_status;
                bVar22 = this_01 == local_68;
            } while (!bVar22);
            if (bVar22)
                goto LAB_100557d2d;
        LAB_10055836d:
            uVar21 = (((uint64_t)((int64_t)((unsigned long)this_07 >> 8)) << 8) | (uint8_t)1);
            goto LAB_10055836f;
        }
    LAB_100557d2d:
        uint8_t* puVar1 = &local_60->field_248;
        iVar5 = puVar1->size();
        if (arg4 < iVar5) {
            pLVar11 = (Layout*)(*puVar1)[local_58];
            this_07 = (LightType*)pLVar11->HeapBeginPtr();
            local_78 = (LightType*)pLVar11->end();
            bVar22 = this_07 == local_78;
            if (!bVar22) {
                local_70 = playerVarDomain;
                do {
                    local_35 = bVar22;
                    uVar6 = this_07->GetStatus();
                    local_68 = (GameToken*)(((uint64_t)local_68._4_4_ << 32) | (uint32_t)uVar6);
                    local_48 = this_07;
                    pAVar12 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)this_07->second();
                    piVar10 = (int*)pAVar12->data();
                    piVar15 = (int*)pAVar12->end();
                    shared_ptr = local_70;
                    if (piVar10 == piVar15) {
                        if ((int)local_68 < 1)
                            goto LAB_100557e29;
                    LAB_100557e50:
                        bVar22 = true;
                    } else {
                        iVar5 = 0;
                        do {
                            pCVar16 = (ConfigProvider*)local_50->GetDomain();
                            pCVar16->GetVarType(VarDomainType::PLAYER, *piVar10);
                            uVar3 = shared_ptr->GetVarValue();
                            iVar7 = ((VarValue*)(((uint64_t)extraout_var_01 << 8) | (uint8_t)uVar3))->GetInt();
                            iVar5 = iVar5 + iVar7;
                            piVar10 = piVar10 + 1;
                        } while (piVar10 != piVar15);
                        if (iVar5 < (int)local_68)
                            goto LAB_100557e50;
                    LAB_100557e29:
                        local_34 = local_34 + 1;
                        if (local_34 != local_3c)
                            goto LAB_100557e50;
                        bVar22 = false;
                    }
                    playerVarDomain = local_70;
                    if (!bVar22) {
                        this_07 = local_48;
                        if ((local_35 & 1) != 0)
                            goto LAB_100557e7c;
                        goto LAB_10055836d;
                    }
                    this_07 = (LightType*)&local_48->field_72;
                    bVar22 = this_07 == local_78;
                } while (!bVar22);
            }
            if (!bVar22)
                goto LAB_10055836d;
        }
    LAB_100557e7c:
        puVar1 = &local_60->field_280;
        iVar5 = puVar1->size();
        if (arg4 < iVar5) {
            pLVar11 = (Layout*)(*puVar1)[local_58];
            this_07 = (LightType*)pLVar11->HeapBeginPtr();
            local_78 = (LightType*)pLVar11->end();
            pVVar19 = local_50;
            bVar22 = this_07 == local_78;
            bVar23 = local_35;
            while (local_35 = bVar22, !local_35) {
                uVar6 = this_07->GetStatus();
                local_68 = (GameToken*)(((uint64_t)local_68._4_4_ << 32) | (uint32_t)uVar6);
                local_48 = this_07;
                pAVar12 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)this_07->second();
                piVar10 = (int*)pAVar12->data();
                piVar15 = (int*)pAVar12->end();
                if (piVar10 == piVar15) {
                    if ((int)local_68 < 1)
                        goto LAB_100557f59;
                LAB_100557f70:
                    bVar22 = true;
                } else {
                    iVar5 = 0;
                    do {
                        pCVar16 = (ConfigProvider*)pVVar19->GetDomain();
                        pCVar16->GetVarBitType(*piVar10);
                        uVar3 = (playerVarDomain._vptr->GetVarBitValue)((shared_ptr<VarBitType>*)playerVarDomain);
                        iVar5 = iVar5 + (((uint32_t)extraout_var << 8) | (uint8_t)uVar3);
                        piVar10 = piVar10 + 1;
                    } while (piVar10 != piVar15);
                    if (iVar5 < (int)local_68)
                        goto LAB_100557f70;
                LAB_100557f59:
                    local_34 = local_34 + 1;
                    if (local_34 != local_3c)
                        goto LAB_100557f70;
                    bVar22 = false;
                }
                if (!bVar22) {
                    this_07 = local_48;
                    if ((local_35 & 1) != 0)
                        goto LAB_100557f9c;
                    goto LAB_10055836d;
                }
                this_07 = (LightType*)&local_48->field_72;
                bVar23 = local_35;
                bVar22 = this_07 == local_78;
            }
            bVar22 = !local_35;
            local_35 = bVar23;
            if (bVar22)
                goto LAB_10055836d;
        }
    LAB_100557f9c:
        this_07 = (LightType*)&local_60->field_312;
        iVar5 = this_07->size();
        if (arg4 < iVar5) {
            pLVar11 = (Layout*)(*this_07)[local_58];
            pLVar17 = (LightType*)pLVar11->HeapBeginPtr();
            local_48 = (LightType*)pLVar11->end();
            bVar23 = pLVar17 == local_48;
            if (!bVar23) {
                do {
                    local_68 = (GameToken*)(((uint64_t)local_68._1_7_ << 8) | (uint8_t)bVar23);
                    pCVar16 = (ConfigProvider*)local_50->GetDomain();
                    varDomainType = VarDomainType::PLAYER;
                    iVar5 = pLVar17->GetID(0);
                    pCVar16->GetVarType(varDomainType, iVar5);
                    uVar3 = (playerVarDomain._vptr->GetVarValue)((shared_ptr<VarType>*)playerVarDomain);
                    uVar8 = ((VarValue*)(((uint64_t)extraout_var_02 << 8) | (uint8_t)uVar3))->GetInt();
                    bVar23 = pLVar17->GetAmplitude();
                    this_07 = nullptr;
                    uVar9 = pLVar17->GetStatus();
                    if (((uVar8 >> (bVar23 & 31) & 1) == uVar9) && (local_34 = local_34 + 1, local_34 == local_3c)) {
                        bVar22 = false;
                    } else {
                        bVar22 = true;
                    }
                    if (!bVar22) {
                        bVar23 = (uint8_t)local_68;
                        break;
                    }
                    pLVar17 = (LightType*)&pLVar17->field_72;
                    bVar23 = pLVar17 == local_48;
                } while (!bVar23);
            }
            if ((bVar23 & 1) == 0)
                goto LAB_10055836d;
        }
        this_07 = (LightType*)&local_60->field_344;
        iVar5 = this_07->size();
        if (arg4 < iVar5) {
            pLVar11 = (Layout*)(*this_07)[local_58];
            pLVar17 = (LightType*)pLVar11->HeapBeginPtr();
            local_48 = (LightType*)pLVar11->end();
            bVar22 = pLVar17 == local_48;
            while (!bVar22) {
                pCVar16 = (ConfigProvider*)local_50->GetDomain();
                iVar5 = pLVar17->GetID(0);
                pCVar16->GetVarBitType(iVar5);
                uVar3 = (playerVarDomain._vptr->GetVarBitValue)((shared_ptr<VarBitType>*)playerVarDomain);
                bVar23 = pLVar17->GetAmplitude();
                this_07 = nullptr;
                uVar8 = pLVar17->GetStatus();
                if ((((((uint32_t)extraout_var_00 << 8) | (uint8_t)uVar3) >> (bVar23 & 31) & 1) == uVar8) &&
                    (local_34 = local_34 + 1, local_34 == local_3c)) {
                    bVar2 = false;
                } else {
                    bVar2 = true;
                }
                if (!bVar2)
                    break;
                pLVar17 = (LightType*)&pLVar17->field_72;
                bVar22 = pLVar17 == local_48;
            }
            if (!bVar22)
                goto LAB_10055836d;
        }
        puVar1 = &local_60->field_408;
        iVar5 = puVar1->size();
        if (arg4 < iVar5) {
            pLVar11 = (Layout*)(*puVar1)[local_58];
            this_02 = (AchievementRequirementSpec*)pLVar11->HeapBeginPtr();
            pAVar18 = (AchievementRequirementSpec*)pLVar11->end();
            for (; this_02 != pAVar18; this_02 = this_02 + 1) {
                pCVar16 = (ConfigProvider*)local_50->GetDomain();
                iVar5 = this_02->GetID(0);
                this_03 = pCVar16->GetConfig<QuestType>(iVar5, nullptr);
                cVar4 = ((QuestType*)(*this_03).operator->())->FinishedQuest(playerVarDomain);
                if ((!cVar4) || (local_34 = local_34 + 1, local_34 != local_3c)) {
                    bVar22 = true;
                } else {
                    bVar22 = false;
                }
                if (!bVar22)
                    break;
            }
            uVar21 = (((uint64_t)((int64_t)((unsigned long)this_02 >> 8)) << 8) | (uint8_t)1);
            if (this_02 != pAVar18)
                goto LAB_10055836f;
        }
        eastl::destruct<oldscape::highlight::NpcUID*>(&local_a8);
        hash_map<int, int, eastl::hash<int>, eastl::equal_to<int>, BucketAllocatorEASTL> local_d8(local_a8);
        puVar1 = &local_60->field_376;
        iVar5 = puVar1->size();
        if (arg4 < iVar5) {
            pLVar11 = (Layout*)(*puVar1)[local_58];
            pVVar19 = (VarTypeList*)pLVar11->HeapBeginPtr();
            local_50 = (VarTypeList*)pLVar11->end();
            if (pVVar19 == local_50)
                goto LAB_100558383;
            do {
                local_98[0]._0_4_ = pVVar19->GetID(0);
                &result = &local_a8;
                result = local_d8.find(local_98);
                local_98 = local_d8.end();
                cVar4 = result != local_98;
                if (!cVar4) {
                    &result = (ReturnValue*)local_60->field_24;
                    iVar5 = pVVar19->GetID(0);
                    this_05 = (shared_ptr<AchievementType>*)result.List(iVar5, nullptr);
                    iVar5 = GetProgress((AchievementType*)(*this_05).operator->(), playerGameState, playerVarDomain,
                                        arg3, &local_d8);
                } else {
                    lVar20 = result.HeapBeginPtr();
                    iVar5 = *(int*)(lVar20 + 4);
                }
                if (iVar5 + 3U < 2) {
                    local_34 = local_34 + 1;
                    uVar21 = (((uint64_t)((int64_t)((unsigned long)&result >> 8)) << 8) | (uint8_t)1);
                    if (local_34 != local_3c)
                        goto LAB_100558357;
                } else {
                LAB_100558357:
                    uVar21 = 0;
                }
            } while (((char)uVar21 == '\0') && (pVVar19 = (VarTypeList*)&pVVar19->field_72, pVVar19 != local_50));
        } else {
        LAB_100558383:
            uVar21 = 0;
        }
    LAB_10055836f:
        return uVar21 & 4294967295;
    }

    // 0x1005583f0
    bool AchievementType::IsStatPrereqMet(PlayerGameState& playerGameState, int arg2, int arg3) {
        int iVar1;
        int iVar2;
        vector<AchievementRequirementSpec>* this_01;
        GameToken* this_02;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_03;
        unsigned int* puVar3;
        unsigned int* puVar4;
        int iVar5;

        if ((arg2 < 0) || (iVar1 = field_216.size(), iVar1 <= arg2)) {
            LogAssert("group > -1 && group < (int)m_statPrereqs.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "achievementtype/AchievementType.cpp",
                      1458, nullptr);
        }
        if (-1 < arg3) {
            iVar1 = ((vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle>*)field_216[(long)arg2])->size();
            if (arg3 < iVar1) {
                this_01 = &field_216[(long)arg2];
                this_02 = (GameToken*)(*this_01)[(long)arg3];
                iVar1 = this_02->GetStatus();
                this_03 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)this_02->second();
                puVar3 = (unsigned int*)this_03->data();
                puVar4 = (unsigned int*)this_03->end();
                if (puVar3 == puVar4) {
                    iVar5 = 0;
                } else {
                    iVar5 = 0;
                    do {
                        iVar2 = playerGameState.GetStatLevelMaxActual(*puVar3);
                        iVar5 = iVar5 + iVar2;
                        puVar3 = puVar3 + 1;
                    } while (puVar3 != puVar4);
                }
                return iVar1 <= iVar5;
            }
        }
        LogAssert("index > -1 && index < (int)m_statPrereqs[group].size()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                  "achievementtype/AchievementType.cpp",
                  1460, nullptr);
    }

    // 0x100558560
    bool AchievementType::IsVarpPrereqMet(PlayerVarDomain& playerVarDomain, int arg2, int arg3) {
        uint8_t uVar1;
        int iVar2;
        int iVar3;
        vector<AchievementRequirementSpec>* this_01;
        GameToken* this_02;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_03;
        int* piVar4;
        int* piVar5;
        uint64_t extraout_var;
        int iVar6;

        if ((arg2 < 0) || (iVar2 = field_248.size(), iVar2 <= arg2)) {
            LogAssert("group > -1 && group < (int)m_varpPrereqs.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "achievementtype/AchievementType.cpp",
                      1475, nullptr);
        }
        if (-1 < arg3) {
            iVar2 = ((vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle>*)field_248[(long)arg2])->size();
            if (arg3 < iVar2) {
                this_01 = &field_248[(long)arg2];
                this_02 = (GameToken*)(*this_01)[(long)arg3];
                iVar2 = this_02->GetStatus();
                this_03 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)this_02->second();
                piVar4 = (int*)this_03->data();
                piVar5 = (int*)this_03->end();
                if (piVar4 == piVar5) {
                    iVar6 = 0;
                } else {
                    iVar6 = 0;
                    do {
                        ((ConfigProvider*)field_24->GetDomain())->GetVarType(VarDomainType::PLAYER, *piVar4);
                        uVar1 = (playerVarDomain._vptr->GetVarValue)((shared_ptr<VarType>*)playerVarDomain);
                        iVar3 = ((VarValue*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1))->GetInt();
                        iVar6 = iVar6 + iVar3;
                        piVar4 = piVar4 + 1;
                    } while (piVar4 != piVar5);
                }
                return iVar2 <= iVar6;
            }
        }
        LogAssert("index > -1 && index < (int)m_varpPrereqs[group].size()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                  "achievementtype/AchievementType.cpp",
                  1477, nullptr);
    }

    // 0x1005586a0
    bool AchievementType::IsVarbitPrereqMet(PlayerVarDomain& playerVarDomain, int arg2, int arg3) {
        uint8_t uVar1;
        int iVar2;
        uint32_t extraout_var;
        vector<AchievementRequirementSpec>* this_01;
        GameToken* this_02;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* this_03;
        int* piVar3;
        int* piVar4;
        int iVar5;

        if ((arg2 < 0) || (iVar2 = field_280.size(), iVar2 <= arg2)) {
            LogAssert("group > -1 && group < (int)m_varbitPrereqs.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "achievementtype/AchievementType.cpp",
                      1493, nullptr);
        }
        if (-1 < arg3) {
            iVar2 = ((vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle>*)field_280[(long)arg2])->size();
            if (arg3 < iVar2) {
                this_01 = &field_280[(long)arg2];
                this_02 = (GameToken*)(*this_01)[(long)arg3];
                iVar2 = this_02->GetStatus();
                this_03 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)this_02->second();
                piVar3 = (int*)this_03->data();
                piVar4 = (int*)this_03->end();
                if (piVar3 == piVar4) {
                    iVar5 = 0;
                } else {
                    iVar5 = 0;
                    do {
                        ((ConfigProvider*)field_24->GetDomain())->GetVarBitType(*piVar3);
                        uVar1 = (playerVarDomain._vptr->GetVarBitValue)((shared_ptr<VarBitType>*)playerVarDomain);
                        iVar5 = iVar5 + (((uint32_t)extraout_var << 8) | (uint8_t)uVar1);
                        piVar3 = piVar3 + 1;
                    } while (piVar3 != piVar4);
                }
                return iVar2 <= iVar5;
            }
        }
        LogAssert("index > -1 && index < (int)m_varbitPrereqs[group].size()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                  "achievementtype/AchievementType.cpp",
                  1495, nullptr);
    }

    // 0x1005587d0
    bool AchievementType::IsVarpTestbitPrereqMet(PlayerVarDomain& playerVarDomain, int arg2, int arg3) {
        VarDomainType* varDomainType;
        uint8_t uVar1;
        uint8_t bVar2;
        int iVar3;
        unsigned int uVar4;
        unsigned int uVar5;
        vector<AchievementRequirementSpec>* this_01;
        LightType* this_02;
        ConfigProvider* this_03;
        uint64_t extraout_var;

        if (-1 < arg2) {
            iVar3 = field_312.size();
            if (arg2 < iVar3) {
                if (-1 < arg3) {
                    iVar3 = ((vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle>*)field_312[(long)arg2])
                                ->size();
                    if (arg3 < iVar3) {
                        this_01 = &field_312[(long)arg2];
                        this_02 = (LightType*)(*this_01)[(long)arg3];
                        this_03 = (ConfigProvider*)field_24->GetDomain();
                        varDomainType = VarDomainType::PLAYER;
                        iVar3 = this_02->GetID(0);
                        this_03->GetVarType(varDomainType, iVar3);
                        uVar1 = (playerVarDomain._vptr->GetVarValue)((shared_ptr<VarType>*)playerVarDomain);
                        uVar4 = ((VarValue*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1))->GetInt();
                        bVar2 = this_02->GetAmplitude();
                        uVar5 = this_02->GetStatus();
                        return (uVar4 >> (bVar2 & 31) & 1) == uVar5;
                    }
                }
                LogAssert("index > -1 && index < (int)m_varpTestbitPrereqs[group].size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "achievementtype/AchievementType.cpp",
                          1512, nullptr);
            }
        }
        LogAssert("group > -1 && group < (int)m_varpTestbitPrereqs.size()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                  "achievementtype/AchievementType.cpp",
                  1510, nullptr);
    }

    // 0x1005588f0
    bool AchievementType::IsVarbitTestbitPrereqMet(PlayerVarDomain& playerVarDomain, int arg2, int arg3) {
        uint8_t uVar1;
        uint8_t bVar2;
        int iVar3;
        uint32_t extraout_var;
        unsigned int uVar4;
        vector<AchievementRequirementSpec>* this_01;
        LightType* this_02;
        ConfigProvider* this_03;

        if (-1 < arg2) {
            iVar3 = field_344.size();
            if (arg2 < iVar3) {
                if (-1 < arg3) {
                    iVar3 = ((vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle>*)field_344[(long)arg2])
                                ->size();
                    if (arg3 < iVar3) {
                        this_01 = &field_344[(long)arg2];
                        this_02 = (LightType*)(*this_01)[(long)arg3];
                        this_03 = (ConfigProvider*)field_24->GetDomain();
                        iVar3 = this_02->GetID(0);
                        this_03->GetVarBitType(iVar3);
                        uVar1 = (playerVarDomain._vptr->GetVarBitValue)((shared_ptr<VarBitType>*)playerVarDomain);
                        bVar2 = this_02->GetAmplitude();
                        uVar4 = this_02->GetStatus();
                        return ((((uint32_t)extraout_var << 8) | (uint8_t)uVar1) >> (bVar2 & 31) & 1) == uVar4;
                    }
                }
                LogAssert("index > -1 && index < (int)m_varbitTestbitPrereqs[group].size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "achievementtype/AchievementType.cpp",
                          1525, nullptr);
            }
        }
        LogAssert("group > -1 && group < (int)m_varbitTestbitPrereqs.size()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                  "achievementtype/AchievementType.cpp",
                  1523, nullptr);
    }

    // 0x100558a00
    bool AchievementType::IsAchievementPrereqMet(PlayerGameState& playerGameState, PlayerVarDomain& playerVarDomain,
                                                 int arg3, int arg4, int arg5) {
        BaseTemplateConfigTypeList<AchievementType>* this_00;
        int iVar1;
        vector<AchievementRequirementSpec>* this_02;
        shared_ptr<AchievementType>* this_04;

        if (-1 < arg4) {
            iVar1 = field_376.size();
            if (arg4 < iVar1) {
                if (-1 < arg5) {
                    iVar1 = ((vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle>*)field_376[(long)arg4])
                                ->size();
                    if (arg5 < iVar1) {
                        this_00 = field_24;
                        this_02 = &field_376[(long)arg4];
                        iVar1 = ((AchievementRequirementSpec*)(*this_02)[(long)arg5])->GetID(0);
                        this_04 = (shared_ptr<AchievementType>*)this_00->List(iVar1, nullptr);
                        iVar1 = GetProgress((AchievementType*)(*this_04).operator->(), playerGameState, playerVarDomain,
                                            arg3);
                        return iVar1 + 3U < 2;
                    }
                }
                LogAssert("index > -1 && index < (int)m_achievementPrereqs[group].size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "achievementtype/AchievementType.cpp",
                          1538, nullptr);
            }
        }
        LogAssert("group > -1 && group < (int)m_achievementPrereqs.size()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                  "achievementtype/AchievementType.cpp",
                  1536, nullptr);
    }

    // 0x100558b10
    void AchievementType::IsQuestPrereqMet(PlayerVarDomain& playerVarDomain, int arg2, int arg3) {
        int iVar1;
        ConfigProvider* this_01;
        vector<AchievementRequirementSpec>* this_02;
        shared_ptr<QuestType>* this_04;

        if (-1 < arg2) {
            iVar1 = field_408.size();
            if (arg2 < iVar1) {
                if (-1 < arg3) {
                    iVar1 = ((vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle>*)field_408[(long)arg2])
                                ->size();
                    if (arg3 < iVar1) {
                        this_01 = (ConfigProvider*)field_24->GetDomain();
                        this_02 = &field_408[(long)arg2];
                        iVar1 = ((AchievementRequirementSpec*)(*this_02)[(long)arg3])->GetID(0);
                        this_04 = this_01->GetConfig<QuestType>(iVar1, nullptr);
                        ((QuestType*)(*this_04).operator->())->FinishedQuest(playerVarDomain);
                        return;
                    }
                }
                LogAssert("index > -1 && index < (int)m_questPrereqs[group].size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "achievementtype/AchievementType.cpp",
                          1549, nullptr);
            }
        }
        LogAssert("group > -1 && group < (int)m_questPrereqs.size()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                  "achievementtype/AchievementType.cpp",
                  1547, nullptr);
    }

    // 0x100558c00
    bool AchievementType::IsStatReqMet(PlayerGameState& playerGameState, int arg2) {
        int iVar1;
        int iVar2;
        int iVar5;

        if ((arg2 < 0) || (iVar1 = field_472.end(), iVar1 <= arg2)) {
            LogAssert("index > -1 && index < (int)m_statReqs.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "achievementtype/AchievementType.cpp",
                      1557, nullptr);
        }
        GameToken* this_00 = &field_472[(long)arg2];
        iVar1 = this_00->GetStatus();
        auto this_01 = this_00->second();
        auto puVar3 = this_01->data();
        auto puVar4 = this_01->end();
        if (puVar3 == puVar4) {
            iVar5 = 0;
        } else {
            iVar5 = 0;
            do {
                iVar2 = playerGameState.GetStatLevelMaxActual(*puVar3);
                iVar5 = iVar5 + iVar2;
                puVar3 = puVar3 + 1;
            } while (puVar3 != puVar4);
        }
        return iVar1 <= iVar5;
    }

    // 0x100558cd0
    bool AchievementType::IsVarpReqMet(PlayerVarDomain& playerVarDomain, int arg2) {
        uint8_t uVar1;
        int iVar2;
        int iVar3;
        uint64_t extraout_var;
        int iVar6;

        if ((arg2 < 0) || (iVar2 = field_496.end(), iVar2 <= arg2)) {
            LogAssert("index > -1 && index < (int)m_varpReqs.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "achievementtype/AchievementType.cpp",
                      1571, nullptr);
        }
        GameToken* this_00 = &field_496[(long)arg2];
        iVar2 = this_00->GetStatus();
        auto this_01 = this_00->second();
        auto piVar4 = this_01->data();
        auto piVar5 = this_01->end();
        if (piVar4 == piVar5) {
            iVar6 = 0;
        } else {
            iVar6 = 0;
            do {
                ((ConfigProvider*)field_24->GetDomain())->GetVarType(VarDomainType::PLAYER, *piVar4);
                uVar1 = (playerVarDomain._vptr->GetVarValue)((shared_ptr<VarType>*)playerVarDomain);
                iVar3 = ((VarValue*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1))->GetInt();
                iVar6 = iVar6 + iVar3;
                piVar4 = piVar4 + 1;
            } while (piVar4 != piVar5);
        }
        return iVar2 <= iVar6;
    }

    // 0x100558dc0
    bool AchievementType::IsVarbitReqMet(PlayerVarDomain& playerVarDomain, int arg2) {
        uint8_t uVar1;
        int iVar2;
        uint32_t extraout_var;
        int iVar5;

        if ((arg2 < 0) || (iVar2 = field_520.end(), iVar2 <= arg2)) {
            LogAssert("index > -1 && index < (int)m_varbitReqs.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "achievementtype/AchievementType.cpp",
                      1586, nullptr);
        }
        GameToken* this_00 = &field_520[(long)arg2];
        iVar2 = this_00->GetStatus();
        auto this_01 = this_00->second();
        auto piVar3 = this_01->data();
        auto piVar4 = this_01->end();
        if (piVar3 == piVar4) {
            iVar5 = 0;
        } else {
            iVar5 = 0;
            do {
                ((ConfigProvider*)field_24->GetDomain())->GetVarBitType(*piVar3);
                uVar1 = (playerVarDomain._vptr->GetVarBitValue)((shared_ptr<VarBitType>*)playerVarDomain);
                iVar5 = iVar5 + (((uint32_t)extraout_var << 8) | (uint8_t)uVar1);
                piVar3 = piVar3 + 1;
            } while (piVar3 != piVar4);
        }
        return iVar2 <= iVar5;
    }

    // 0x100558ea0
    bool AchievementType::IsVarpTestbitReqMet(PlayerVarDomain& playerVarDomain, int arg2) {
        VarDomainType* varDomainType;
        uint8_t uVar1;
        uint8_t bVar2;
        int iVar3;
        unsigned int uVar4;
        unsigned int uVar5;
        LightType* this_00;
        ConfigProvider* this_01;
        uint64_t extraout_var;

        if (-1 < arg2) {
            iVar3 = field_544.end();
            if (arg2 < iVar3) {
                this_00 = &field_544[(long)arg2];
                this_01 = (ConfigProvider*)field_24->GetDomain();
                varDomainType = VarDomainType::PLAYER;
                iVar3 = this_00->GetID(0);
                this_01->GetVarType(varDomainType, iVar3);
                uVar1 = (playerVarDomain._vptr->GetVarValue)((shared_ptr<VarType>*)playerVarDomain);
                uVar4 = ((VarValue*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1))->GetInt();
                bVar2 = this_00->GetAmplitude();
                uVar5 = this_00->GetStatus();
                return (uVar4 >> (bVar2 & 31) & 1) == uVar5;
            }
        }
        LogAssert("index > -1 && index < (int)m_varpTestbitReqs.size()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                  "achievementtype/AchievementType.cpp",
                  1601, nullptr);
    }

    // 0x100558f70
    bool AchievementType::IsVarbitTestbitReqMet(PlayerVarDomain& playerVarDomain, int arg2) {
        uint8_t uVar1;
        uint8_t bVar2;
        int iVar3;
        uint32_t extraout_var;
        unsigned int uVar4;
        LightType* this_00;
        ConfigProvider* this_01;

        if (-1 < arg2) {
            iVar3 = field_568.end();
            if (arg2 < iVar3) {
                this_00 = &field_568[(long)arg2];
                this_01 = (ConfigProvider*)field_24->GetDomain();
                iVar3 = this_00->GetID(0);
                this_01->GetVarBitType(iVar3);
                uVar1 = (playerVarDomain._vptr->GetVarBitValue)((shared_ptr<VarBitType>*)playerVarDomain);
                bVar2 = this_00->GetAmplitude();
                uVar4 = this_00->GetStatus();
                return ((((uint32_t)extraout_var << 8) | (uint8_t)uVar1) >> (bVar2 & 31) & 1) == uVar4;
            }
        }
        LogAssert("index > -1 && index < (int)m_varbitTestbitReqs.size()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                  "achievementtype/AchievementType.cpp",
                  1612, nullptr);
    }

    // 0x100559020
    bool AchievementType::IsAchievementReqMet(PlayerGameState& playerGameState, PlayerVarDomain& playerVarDomain,
                                              int arg3, int arg4) {
        BaseTemplateConfigTypeList<AchievementType>* this_00;
        int iVar1;
        shared_ptr<AchievementType>* this_02;

        if (-1 < arg4) {
            iVar1 = field_592.end();
            if (arg4 < iVar1) {
                this_00 = field_24;
                iVar1 = ((AchievementRequirementSpec*)field_592[(long)arg4])->GetID(0);
                this_02 = (shared_ptr<AchievementType>*)this_00->List(iVar1, nullptr);
                iVar1 = GetProgress((AchievementType*)(*this_02).operator->(), playerGameState, playerVarDomain, arg3);
                return iVar1 + 3U < 2;
            }
        }
        LogAssert("index > -1 && index < (int)m_achievementReqs.size()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                  "achievementtype/AchievementType.cpp",
                  1623, nullptr);
    }

    // 0x1005590d0
    void AchievementType::IsQuestReqMet(PlayerVarDomain& playerVarDomain, int arg2) {
        int iVar1;
        ConfigProvider* this_00;
        shared_ptr<QuestType>* this_02;

        if (-1 < arg2) {
            iVar1 = field_616.end();
            if (arg2 < iVar1) {
                this_00 = (ConfigProvider*)field_24->GetDomain();
                iVar1 = ((AchievementRequirementSpec*)field_616[(long)arg2])->GetID(0);
                this_02 = this_00->GetConfig<QuestType>(iVar1, nullptr);
                ((QuestType*)(*this_02).operator->())->FinishedQuest(playerVarDomain);
                return;
            }
        }
        LogAssert("index > -1 && index < (int)m_questReqs.size()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                  "achievementtype/AchievementType.cpp",
                  1632, nullptr);
    }

    // 0x100559170
    void AchievementType::GetDescription(const Array<AchievementRequirementSpec>& achievementRequirementSpecs,
                                         int arg2) const {
        int iVar1;

        if (-1 < arg2) {
            iVar1 = achievementRequirementSpecs.end();
            if (arg2 < iVar1) {
                ((fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true>*)achievementRequirementSpecs[(long)arg2])
                    ->get_overflow_allocator();
                return;
            }
        }
        LogAssert("index > -1 && index < (int)achievementReqs.size()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                  "achievementtype/AchievementType.cpp",
                  1639, nullptr);
    }

    // 0x100559250
    void AchievementType::GetDescription(
        const eastl::vector<eastl::vector<AchievementRequirementSpec>>& achievementRequirementSpecss, int arg2,
        int arg3) const {
        int iVar1;
        vector<AchievementRequirementSpec>* this_01;

        if (-1 < arg2) {
            iVar1 = achievementRequirementSpecss.size();
            if (arg2 < iVar1) {
                if (-1 < arg3) {
                    iVar1 = ((vector<oldscape::dash3d::TileHighlightGenerator::OutputTriangle>*)
                                 achievementRequirementSpecss[(long)arg2])
                                ->size();
                    if (arg3 < iVar1) {
                        this_01 = &achievementRequirementSpecss[(long)arg2];
                        ((fixed_hashtable_allocator<10ul, 1208ul, 8ul, 8ul, 0ul, true>*)(*this_01)[(long)arg3])
                            ->get_overflow_allocator();
                        return;
                    }
                }
                LogAssert("index > -1 && index < (int)achievementReqs[group].size()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "achievementtype/AchievementType.cpp",
                          1646, nullptr);
            }
        }
        LogAssert("group > -1 && group < (int)achievementReqs.size()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                  "achievementtype/AchievementType.cpp",
                  1645, nullptr);
    }

    // 0x100559350
    int AchievementType::GetTallyProgress(const PlayerGameState& playerGameState,
                                          const PlayerVarDomain& playerVarDomain) const {
        bool bVar1;
        uint8_t uVar2;
        unsigned int uVar3;
        int iVar4;
        CoordMapSquare* pCVar6;
        CoordMapSquare* pCVar7;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* pAVar8;
        unsigned int* puVar9;
        unsigned int* puVar10;
        uint32_t extraout_var;
        int* piVar11;
        int* piVar12;
        ConfigProvider* pCVar13;
        uint64_t extraout_var_00;
        bool bVar15;

        unsigned int uVar5 = field_156;
        int iVar14 = -1;
        if (uVar5 == 2) {
            pCVar6 = (CoordMapSquare*)field_520.data();
            pCVar7 = (CoordMapSquare*)field_520.end();
            if (pCVar6 == pCVar7) {
                return -1;
            }
            uVar5 = 0;
            bVar15 = false;
            do {
                uVar3 = pCVar6->GetX();
                bVar1 = true;
                if (uVar3 == field_160) {
                    if (uVar5 == field_164) {
                        pAVar8 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)pCVar6->second();
                        piVar11 = (int*)pAVar8->data();
                        piVar12 = (int*)pAVar8->end();
                        if (piVar11 == piVar12) {
                            iVar14 = 0;
                        } else {
                            iVar14 = 0;
                            do {
                                pCVar13 = (ConfigProvider*)field_24->GetDomain();
                                pCVar13->GetVarBitType(*piVar11);
                                uVar2 =
                                    (playerVarDomain._vptr->GetVarBitValue)((shared_ptr<VarBitType>*)playerVarDomain);
                                iVar14 = iVar14 + (((uint32_t)extraout_var << 8) | (uint8_t)uVar2);
                                piVar11 = piVar11 + 1;
                            } while (piVar11 != piVar12);
                        }
                        bVar1 = false;
                        goto LAB_1005594d8;
                    }
                    uVar5 = uVar5 + 1;
                } else {
                LAB_1005594d8:
                    if (!bVar1)
                        break;
                }
                pCVar6 = pCVar6 + 6;
                bVar15 = pCVar6 == pCVar7;
            } while (!bVar15);
        } else if (uVar5 == 1) {
            pCVar6 = (CoordMapSquare*)field_496.data();
            pCVar7 = (CoordMapSquare*)field_496.end();
            bVar15 = pCVar6 == pCVar7;
            if (!bVar15) {
                uVar5 = 0;
                do {
                    uVar3 = pCVar6->GetX();
                    bVar1 = true;
                    if (uVar3 == field_160) {
                        if (uVar5 == field_164) {
                            pAVar8 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)pCVar6->second();
                            piVar11 = (int*)pAVar8->data();
                            piVar12 = (int*)pAVar8->end();
                            if (piVar11 == piVar12) {
                                iVar14 = 0;
                            } else {
                                iVar14 = 0;
                                do {
                                    pCVar13 = (ConfigProvider*)field_24->GetDomain();
                                    pCVar13->GetVarType(VarDomainType::PLAYER, *piVar11);
                                    uVar2 = (playerVarDomain._vptr->GetVarValue)((shared_ptr<VarType>*)playerVarDomain);
                                    iVar4 = ((VarValue*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2))->GetInt();
                                    iVar14 = iVar14 + iVar4;
                                    piVar11 = piVar11 + 1;
                                } while (piVar11 != piVar12);
                            }
                            bVar1 = false;
                            goto LAB_1005595ad;
                        }
                        uVar5 = uVar5 + 1;
                    } else {
                    LAB_1005595ad:
                        if (!bVar1)
                            break;
                    }
                    pCVar6 = pCVar6 + 6;
                    bVar15 = pCVar6 == pCVar7;
                } while (!bVar15);
            }
        } else {
            if (uVar5 != 0) {
                return -1;
            }
            pCVar6 = (CoordMapSquare*)field_472.data();
            pCVar7 = (CoordMapSquare*)field_472.end();
            bVar15 = pCVar6 == pCVar7;
            if (!bVar15) {
                uVar5 = 0;
                do {
                    uVar3 = pCVar6->GetX();
                    bVar1 = true;
                    if (uVar3 == field_160) {
                        if (uVar5 == field_164) {
                            pAVar8 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)pCVar6->second();
                            puVar9 = (unsigned int*)pAVar8->data();
                            puVar10 = (unsigned int*)pAVar8->end();
                            if (puVar9 == puVar10) {
                                iVar14 = 0;
                            } else {
                                iVar14 = 0;
                                do {
                                    iVar4 = playerGameState.GetStatLevelMaxActual(*puVar9);
                                    iVar14 = iVar14 + iVar4;
                                    puVar9 = puVar9 + 1;
                                } while (puVar9 != puVar10);
                            }
                            bVar1 = false;
                            goto LAB_100559448;
                        }
                        uVar5 = uVar5 + 1;
                    } else {
                    LAB_100559448:
                        if (!bVar1)
                            break;
                    }
                    pCVar6 = pCVar6 + 6;
                    bVar15 = pCVar6 == pCVar7;
                } while (!bVar15);
            }
        }
        if (!bVar15) {
            return iVar14;
        }
        return -1;
    }

    // 0x1005596c0
    uint32_t AchievementType::GetTallyTarget() const {
        bool bVar1;
        unsigned int uVar2;
        long in_RAX;
        GameToken* pGVar3;
        GameToken* pGVar4;
        bool bVar6;
        uint64_t uStack_38;

        uStack_38._4_4_ = (uint32_t)((unsigned long)in_RAX >> 32);
        unsigned int uVar5 = field_156;
        uStack_38 = in_RAX;
        if (uVar5 == 2) {
            pGVar3 = (GameToken*)field_520.data();
            pGVar4 = (GameToken*)field_520.end();
            bVar6 = pGVar3 == pGVar4;
            if (!bVar6) {
                uVar5 = 0;
                do {
                    uVar2 = pGVar3->GetX();
                    bVar1 = true;
                    if (uVar2 == field_160) {
                        if (uVar5 == field_164) {
                            uVar2 = pGVar3->GetStatus();
                            uStack_38 = (unsigned long)uVar2 << 32;
                            bVar1 = false;
                        } else {
                            uVar5 = uVar5 + 1;
                        }
                    }
                    if (!bVar1)
                        break;
                    pGVar3 = (GameToken*)&pGVar3[1].m_status;
                    bVar6 = pGVar3 == pGVar4;
                } while (!bVar6);
            }
        } else if (uVar5 == 1) {
            pGVar3 = (GameToken*)field_496.data();
            pGVar4 = (GameToken*)field_496.end();
            bVar6 = pGVar3 == pGVar4;
            if (!bVar6) {
                uVar5 = 0;
                do {
                    uVar2 = pGVar3->GetX();
                    bVar1 = true;
                    if (uVar2 == field_160) {
                        if (uVar5 == field_164) {
                            uVar2 = pGVar3->GetStatus();
                            uStack_38 = (unsigned long)uVar2 << 32;
                            bVar1 = false;
                        } else {
                            uVar5 = uVar5 + 1;
                        }
                    }
                    if (!bVar1)
                        break;
                    pGVar3 = (GameToken*)&pGVar3[1].m_status;
                    bVar6 = pGVar3 == pGVar4;
                } while (!bVar6);
            }
        } else {
            if (uVar5 != 0) {
                return 4294967295;
            }
            pGVar3 = (GameToken*)field_472.data();
            pGVar4 = (GameToken*)field_472.end();
            bVar6 = pGVar3 == pGVar4;
            if (!bVar6) {
                uVar5 = 0;
                do {
                    uVar2 = pGVar3->GetX();
                    bVar1 = true;
                    if (uVar2 == field_160) {
                        if (uVar5 == field_164) {
                            uVar2 = pGVar3->GetStatus();
                            uStack_38 = (unsigned long)uVar2 << 32;
                            bVar1 = false;
                        } else {
                            uVar5 = uVar5 + 1;
                        }
                    }
                    if (!bVar1)
                        break;
                    pGVar3 = (GameToken*)&pGVar3[1].m_status;
                    bVar6 = pGVar3 == pGVar4;
                } while (!bVar6);
            }
        }
        if (bVar6) {
            uStack_38._4_4_ = 4294967295;
        }
        return uStack_38._4_4_;
    }

} // namespace jag::game
