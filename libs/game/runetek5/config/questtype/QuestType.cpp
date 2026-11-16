// libs/game/runetek5/config/questtype/QuestType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "QuestType.h"

namespace jag::game {
    // 0x100024170: QuestType::MasterQuestVar::GetEndState() const has the same machine code as oldscape::option::IScriptOption::GetId() const

    // 0x100024170: QuestType::PrerequisiteVar::GetMax() const has the same machine code as oldscape::option::IScriptOption::GetId() const

    // 0x100073980: QuestType::MasterQuestVar::GetStartState() const has the same machine code as math::Rect<int>::MinY() const

    // 0x100073980: QuestType::PrerequisiteVar::GetMin() const has the same machine code as math::Rect<int>::MinY() const

    // 0x100073980: QuestType::PrerequisiteStat::GetRequirement() const has the same machine code as math::Rect<int>::MinY() const

    // 0x1000b9960: QuestType::MasterQuestVar::GetID() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x1000b9960: QuestType::PrerequisiteVar::GetID() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x1000b9960: QuestType::PrerequisiteStat::GetID() const has the same machine code as oldscape::ScriptVarType::GetID() const

    // 0x10012cae0: QuestType::PrerequisiteStat::PrerequisiteStat(int, unsigned int) has the same machine code as oldscape::sidebars::SideBarData::SideBarData(int, int)

    // 0x100132e20: QuestType::MasterQuestVar::MasterQuestVar(int, int, int) has the same machine code as math::Vector3T<int>::Vector3T(int, int, int)

    // 0x1001520f0: QuestType::PrerequisiteVar::~PrerequisiteVar() has the same machine code as oldscape::rs2lib::social::ClanSettings::ExtraSettingsParam::~ExtraSettingsParam()

    // 0x100159b70: QuestType::GetQuestPoints() const has the same machine code as oldscape::rs2lib::InputField::GetEnterAction() const

    // 0x100396f20: EnvSkySettings::SetDefaults() has the same machine code as oldscape::input::InputEvent::Clear()

    // 0x100396f20: QuestType::MasterQuestVar::MasterQuestVar() has the same machine code as oldscape::input::InputEvent::Clear()

    // 0x100396f20: QuestType::PrerequisiteStat::PrerequisiteStat() has the same machine code as oldscape::input::InputEvent::Clear()

    // 0x1004f38e0
    uint8_t* QuestType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        PacketT<Array<unsigned char> _>* pPVar1;
        uint8_t bVar2;
        uint8_t bVar3;
        uint8_t bVar4;
        uint16_t uVar5;
        unsigned short uVar6;
        unsigned int uVar7;
        unsigned int uVar8;
        int iVar10;
        int iVar11;
        uint16_t* puVar12;
        uint64_t* puVar13;
        char* pcVar14;
        PrerequisiteVar* pPVar15;
        unsigned long uVar17;
        eastl::string* str;
        ObjSpriteCacheKey local_130;
        Array<QuestType::PrerequisiteVar>* local_100;
        unsigned long local_f8;
        PacketT<Array<unsigned char> _>* local_f0;
        int local_e4;
        CoordGrid local_e0;

        PacketT<Array<unsigned char> _>* pPVar16 = arg1;
        switch (arg2) {
        case 1:
            str = (eastl::string*)&field_56;
            goto LAB_1004f3985;
        case 2:
            str = (eastl::string*)&field_88;
        LAB_1004f3985:
            local_f0 = arg1;
            arg1.gStringCP1252ToUTF8<eastl::string>(str, true);
            break;
        case 3:
            local_f0 = arg1;
            bVar4 = arg1.g1();
            field_120.set_max_size((unsigned long)bVar4, 0);
            if (bVar4 != 0) {
                pPVar16 = nullptr;
                local_f0 = (PacketT<Array<unsigned char> _>*)(unsigned long)bVar4;
                do {
                    uVar6 = arg1.g2();
                    uVar7 = arg1.g4();
                    uVar8 = arg1.g4();
                    pPVar1 = local_f0;
                    local_e0 = oldscape::rs2lib::worldmap::LocationData((unsigned int)uVar6, uVar7, uVar8);
                    puVar13 = &field_120[(unsigned long)pPVar16];
                    *puVar13 = local_e0[0]._0_8_;
                    *(unsigned int*)(puVar13 + 1) = local_e0[0].field_8;
                    pPVar16 = pPVar16 + 1;
                } while (pPVar1 != pPVar16);
            }
            break;
        case 4:
            local_f0 = arg1;
            bVar4 = arg1.g1();
            field_144.set_max_size((unsigned long)bVar4, 0);
            if (bVar4 != 0) {
                pPVar16 = nullptr;
                local_f0 = (PacketT<Array<unsigned char> _>*)(unsigned long)bVar4;
                do {
                    uVar6 = arg1.g2();
                    uVar7 = arg1.g4();
                    uVar8 = arg1.g4();
                    pPVar1 = local_f0;
                    local_e0 = oldscape::rs2lib::worldmap::LocationData((unsigned int)uVar6, uVar7, uVar8);
                    puVar13 = &field_144[(unsigned long)pPVar16];
                    *puVar13 = local_e0[0]._0_8_;
                    *(unsigned int*)(puVar13 + 1) = local_e0[0].field_8;
                    pPVar16 = pPVar16 + 1;
                } while (pPVar1 != pPVar16);
            }
            break;
        case 5:
            local_f0 = arg1;
            uVar6 = arg1.g2();
            field_168 = (unsigned int)uVar6;
            break;
        case 6:
            local_f0 = arg1;
            bVar4 = arg1.g1();
            field_172 = (unsigned int)bVar4;
            break;
        case 7:
            local_f0 = arg1;
            bVar4 = arg1.g1();
            field_176 = (unsigned int)bVar4;
            break;
        case 8:
            field_180 = 1;
            local_f0 = arg1;
            break;
        case 9:
            local_f0 = arg1;
            bVar4 = arg1.g1();
            m_questPoints = (unsigned int)bVar4;
            break;
        case 10:
            local_f0 = arg1;
            bVar4 = arg1.g1();
            field_192.set_max_size((unsigned long)bVar4, 0);
            if (bVar4 != 0) {
                uVar17 = 0;
                do {
                    iVar10 = arg1.g4();
                    local_e0 = game::CoordGrid(iVar10);
                    puVar13 = &field_192[uVar17];
                    *puVar13 = local_e0[0]._0_8_;
                    *(unsigned int*)(puVar13 + 1) = local_e0[0].field_8;
                    uVar17 = uVar17 + 1;
                } while (bVar4 != uVar17);
            }
            break;
        case 11:
        case 16:
            goto switchD_1004f3927_caseD_b;
        case 12:
            local_f0 = arg1;
            iVar10 = arg1.g4();
            local_e0 = game::CoordGrid(iVar10);
            *(unsigned int*)(field_216 + 8) = local_e0[0].field_8;
            *(unsigned int*)(field_216 + 0) = local_e0[0].field_0;
            *(unsigned int*)(field_216 + 4) = local_e0[0].field_4;
            break;
        case 13:
            local_f0 = arg1;
            bVar4 = arg1.g1();
            field_232.set_max_size((unsigned long)bVar4, 0);
            if (bVar4 != 0) {
                uVar17 = 0;
                do {
                    uVar5 = arg1.g2();
                    puVar12 = &field_232[uVar17];
                    *puVar12 = uVar5;
                    uVar17 = uVar17 + 1;
                } while (bVar4 != uVar17);
            }
            break;
        case 14:
            local_f0 = arg1;
            bVar4 = arg1.g1();
            field_256.set_max_size((unsigned long)bVar4, 0);
            if (bVar4 != 0) {
                uVar17 = 0;
                do {
                    bVar2 = arg1.g1();
                    bVar3 = arg1.g1();
                    local_e0 = oldscape::sidebars::SideBarData((unsigned int)bVar2, (unsigned int)bVar3);
                    puVar13 = &field_256[uVar17];
                    *puVar13 = local_e0[0]._0_8_;
                    uVar17 = uVar17 + 1;
                } while (bVar4 != uVar17);
            }
            break;
        case 15:
            local_f0 = arg1;
            uVar6 = arg1.g2();
            field_280 = (unsigned int)uVar6;
            break;
        case 17:
            local_f0 = arg1;
            field_336 = arg1.gSmart2or4s();
            break;
        case 18:
            local_f0 = arg1;
            bVar4 = arg1.g1();
            uVar17 = (unsigned long)bVar4;
            field_288.set_max_size(uVar17, 0);
            local_f8 = uVar17;
            if (bVar4 != 0) {
                local_100 = (Array<QuestType::PrerequisiteVar>*)&field_288;
                local_e4 = arg1.g4();
                iVar10 = arg1.g4();
                iVar11 = arg1.g4();
                local_e0 = eastl::fixed_string<char, 128>();
                arg1.gStringCP1252ToUTF8<eastl::fixed_string<char, 128>>(local_e0, false);
                pcVar14 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_130 = PrerequisiteVar(local_e4, iVar10, iVar11, pcVar14);
                pPVar15 = (PrerequisiteVar*)(*local_100)[0];
                *pPVar15 = local_130;
            }
            break;
        case 19:
            local_f0 = arg1;
            bVar4 = arg1.g1();
            uVar17 = (unsigned long)bVar4;
            field_312.set_max_size(uVar17, 0);
            local_f8 = uVar17;
            if (bVar4 != 0) {
                local_100 = (Array<QuestType::PrerequisiteVar>*)&field_312;
                local_e4 = arg1.g4();
                iVar10 = arg1.g4();
                iVar11 = arg1.g4();
                local_e0 = eastl::fixed_string<char, 128>();
                arg1.gStringCP1252ToUTF8<eastl::fixed_string<char, 128>>(local_e0, false);
                pcVar14 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_130 = PrerequisiteVar(local_e4, iVar10, iVar11, pcVar14);
                pPVar15 = (PrerequisiteVar*)(*local_100)[0];
                *pPVar15 = local_130;
            }
            break;
        default:
            pPVar16 = local_f0;
            if (arg2 == 249) {
                DecodeParams(arg1);
                break;
            }
            goto switchD_1004f3927_caseD_b;
        }
    LAB_1004f3ed1:
        return DataStatus::READY;
    switchD_1004f3927_caseD_b:
        local_f0 = pPVar16;
        (logger::default_logger())
            ->Log(false, 2,
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                  "questtype/QuestType.cpp",
                  165, "Unrecognised .quest config code: %u in quest %d", arg2, field_32);
        goto LAB_1004f3ed1;
    }

    // 0x1004f4a10
    void QuestType::PostDecode() {
        if (field_88.empty() != '\0') {
            field_88 = &field_56;
        }
    }

    // 0x1004f4a40
    bool QuestType::StartedQuest(PlayerVarDomain& playerVarDomain) const {
        bool bVar1;
        VarDomainType* varDomainType;
        uint8_t uVar3;
        int iVar4;
        int iVar5;
        uint32_t extraout_var;
        long lVar6;
        CoordMapSquare* pCVar7;
        ConfigProvider* pCVar8;
        shared_ptr<oldscape::dash3d::GroundDecor>* psVar9;
        uint64_t extraout_var_00;
        unsigned long uVar10;
        unsigned long uVar12;
        shared_ptr<oldscape::dash3d::Decor> local_58;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_38;

        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar11 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_120;
        QuestType* local_40 = this;
        bool cVar2 = pvVar11->empty();
        if ((!cVar2) && (lVar6 = pvVar11->end(), lVar6 != 0)) {
            uVar10 = 0;
            uVar12 = 1;
            local_38 = pvVar11;
            do {
                pCVar7 = (CoordMapSquare*)(*pvVar11)[uVar10];
                pCVar8 = (ConfigProvider*)local_40->field_24->GetDomain();
                varDomainType = VarDomainType::PLAYER;
                iVar4 = pCVar7->GetX();
                psVar9 = (shared_ptr<oldscape::dash3d::GroundDecor>*)pCVar8->GetVarType(varDomainType, iVar4);
                local_58 = shared_ptr(psVar9);
                uVar3 = (playerVarDomain._vptr->GetVarValue)((shared_ptr<VarType>*)playerVarDomain);
                iVar4 = ((VarValue*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar3))->GetInt();
                iVar5 = pCVar7->GetZ();
                pvVar11 = local_38;
                if (iVar5 <= iVar4) {
                    return true;
                }
                uVar10 = local_38->end();
                bVar1 = uVar12 < uVar10;
                uVar10 = uVar12;
                uVar12 = (unsigned long)((int)uVar12 + 1);
            } while (bVar1);
        }
        pvVar11 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&local_40->field_144;
        cVar2 = pvVar11->empty();
        if ((cVar2) || (lVar6 = pvVar11->end(), lVar6 == 0)) {
            return false;
        }
        uVar10 = 0;
        uVar12 = 1;
        local_38 = pvVar11;
        do {
            pCVar7 = (CoordMapSquare*)(*pvVar11)[uVar10];
            pCVar8 = (ConfigProvider*)local_40->field_24->GetDomain();
            iVar4 = pCVar7->GetX();
            psVar9 = (shared_ptr<oldscape::dash3d::GroundDecor>*)pCVar8->GetVarBitType(iVar4);
            local_58 = shared_ptr(psVar9);
            uVar3 = (playerVarDomain._vptr->GetVarBitValue)((shared_ptr<VarBitType>*)playerVarDomain);
            iVar4 = pCVar7->GetZ();
            pvVar11 = local_38;
            if (iVar4 <= (((uint32_t)extraout_var << 8) | (uint8_t)uVar3))
                break;
            uVar10 = local_38->end();
            bVar1 = uVar12 < uVar10;
            uVar10 = uVar12;
            uVar12 = (unsigned long)((int)uVar12 + 1);
        } while (bVar1);
        return iVar4 <= (((uint32_t)extraout_var << 8) | (uint8_t)uVar3);
    }

    // 0x1004f4cb0
    bool QuestType::FinishedQuest(PlayerVarDomain& playerVarDomain) const {
        bool bVar1;
        VarDomainType* varDomainType;
        uint8_t uVar3;
        int iVar4;
        int iVar5;
        uint32_t extraout_var;
        long lVar6;
        CommandLine* pCVar7;
        ConfigProvider* pCVar8;
        shared_ptr<oldscape::dash3d::GroundDecor>* psVar9;
        uint64_t extraout_var_00;
        unsigned long uVar10;
        unsigned long uVar12;
        shared_ptr<oldscape::dash3d::Decor> local_58;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_38;

        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar11 =
            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_120;
        QuestType* local_40 = this;
        bool cVar2 = pvVar11->empty();
        if ((!cVar2) && (lVar6 = pvVar11->end(), lVar6 != 0)) {
            uVar10 = 0;
            uVar12 = 1;
            local_38 = pvVar11;
            do {
                pCVar7 = (CommandLine*)(*pvVar11)[uVar10];
                pCVar8 = (ConfigProvider*)local_40->field_24->GetDomain();
                varDomainType = VarDomainType::PLAYER;
                iVar4 = pCVar7->GetX();
                psVar9 = (shared_ptr<oldscape::dash3d::GroundDecor>*)pCVar8->GetVarType(varDomainType, iVar4);
                local_58 = shared_ptr(psVar9);
                uVar3 = (playerVarDomain._vptr->GetVarValue)((shared_ptr<VarType>*)playerVarDomain);
                iVar4 = ((VarValue*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar3))->GetInt();
                iVar5 = pCVar7->GetPos();
                pvVar11 = local_38;
                if (iVar5 <= iVar4) {
                    return true;
                }
                uVar10 = local_38->end();
                bVar1 = uVar12 < uVar10;
                uVar10 = uVar12;
                uVar12 = (unsigned long)((int)uVar12 + 1);
            } while (bVar1);
        }
        pvVar11 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&local_40->field_144;
        cVar2 = pvVar11->empty();
        if ((cVar2) || (lVar6 = pvVar11->end(), lVar6 == 0)) {
            return false;
        }
        uVar10 = 0;
        uVar12 = 1;
        local_38 = pvVar11;
        do {
            pCVar7 = (CommandLine*)(*pvVar11)[uVar10];
            pCVar8 = (ConfigProvider*)local_40->field_24->GetDomain();
            iVar4 = pCVar7->GetX();
            psVar9 = (shared_ptr<oldscape::dash3d::GroundDecor>*)pCVar8->GetVarBitType(iVar4);
            local_58 = shared_ptr(psVar9);
            uVar3 = (playerVarDomain._vptr->GetVarBitValue)((shared_ptr<VarBitType>*)playerVarDomain);
            iVar4 = pCVar7->GetPos();
            pvVar11 = local_38;
            if (iVar4 <= (((uint32_t)extraout_var << 8) | (uint8_t)uVar3))
                break;
            uVar10 = local_38->end();
            bVar1 = uVar12 < uVar10;
            uVar10 = uVar12;
            uVar12 = (unsigned long)((int)uVar12 + 1);
        } while (bVar1);
        return iVar4 <= (((uint32_t)extraout_var << 8) | (uint8_t)uVar3);
    }

    // 0x1004f4ea0
    unsigned long QuestType::CanStartQuest(PlayerVarDomain& playerVarDomain, const PlayerGameState& playerGameState,
                                           const ModeAccountType* modeAccountType) const {
        uint8_t* puVar1;
        BaseTemplateConfigTypeList<QuestType>* this_00;
        bool bVar2;
        VarDomainType* varDomainType;
        bool cVar3;
        uint8_t uVar4;
        unsigned int uVar6;
        unsigned int uVar7;
        int iVar8;
        int iVar9;
        long lVar10;
        CoordMapSquare* this_01;
        unsigned long uVar11;
        unsigned short* puVar12;
        shared_ptr<QuestType>* this_02;
        QuestType* pQVar13;
        unsigned long uVar14;
        CommandLine* pCVar15;
        ConfigProvider* pCVar16;
        shared_ptr<oldscape::dash3d::GroundDecor>* psVar17;
        uint32_t extraout_var;
        uint64_t extraout_var_00;
        unsigned long uVar18;
        ModeAccountType* this_03;
        ModeAccountType* this_04;
        unsigned long uVar19;
        shared_ptr<oldscape::dash3d::Decor> local_58;
        QuestType* local_40;

        ModeAccountType* local_38 = modeAccountType;
        unsigned int uVar5 = playerVarDomain.GetTotalQuestPoints();
        if (uVar5 < field_280) {
        LAB_1004f4ecf:
            uVar14 = 0;
        } else {
            puVar1 = &field_256;
            local_40 = this;
            cVar3 = puVar1->empty();
            if (!cVar3) {
                lVar10 = puVar1->end();
                if (lVar10 != 0) {
                    uVar5 = 1;
                    uVar14 = 0;
                    do {
                        this_01 = (CoordMapSquare*)(*puVar1)[uVar14];
                        uVar6 = this_01->GetX();
                        uVar6 = playerGameState.GetStatLevelMax(uVar6, local_38);
                        uVar7 = this_01->GetZ();
                        if (uVar6 < uVar7)
                            goto LAB_1004f4ecf;
                        uVar14 = (unsigned long)uVar5;
                        uVar11 = puVar1->end();
                        uVar5 = uVar5 + 1;
                    } while (uVar14 < uVar11);
                }
            }
            pQVar13 = local_40;
            puVar1 = &local_40->field_232;
            cVar3 = puVar1->empty();
            if (!cVar3) {
                lVar10 = puVar1->end();
                if (lVar10 != 0) {
                    uVar14 = 0;
                    uVar11 = 1;
                    do {
                        this_00 = pQVar13->field_24;
                        puVar12 = (unsigned short*)(*puVar1)[uVar14];
                        uVar14 = 0;
                        this_02 = (shared_ptr<QuestType>*)this_00->List((unsigned int)*puVar12, nullptr);
                        pQVar13 = (QuestType*)(*this_02).operator->();
                        cVar3 = FinishedQuest(pQVar13, playerVarDomain);
                        if (!cVar3)
                            goto LAB_1004f4ed1;
                        uVar14 = puVar1->end();
                        bVar2 = uVar11 < uVar14;
                        uVar14 = uVar11;
                        pQVar13 = local_40;
                        uVar11 = (unsigned long)((int)uVar11 + 1);
                    } while (bVar2);
                }
            }
            this_03 = (ModeAccountType*)&pQVar13->field_288;
            cVar3 = this_03->empty();
            if (!cVar3) {
                lVar10 = this_03->end();
                if (lVar10 != 0) {
                    uVar5 = 1;
                    uVar14 = 0;
                    local_38 = this_03;
                    do {
                        pCVar15 = (CommandLine*)(*this_03)[uVar14];
                        pCVar16 = (ConfigProvider*)local_40->field_24->GetDomain();
                        varDomainType = VarDomainType::PLAYER;
                        iVar8 = pCVar15->GetX();
                        psVar17 = (shared_ptr<oldscape::dash3d::GroundDecor>*)pCVar16->GetVarType(varDomainType, iVar8);
                        local_58 = shared_ptr(psVar17);
                        uVar4 = (playerVarDomain._vptr->GetVarValue)((shared_ptr<VarType>*)playerVarDomain);
                        iVar8 = ((VarValue*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar4))->GetInt();
                        iVar9 = pCVar15->GetZ();
                        if (iVar8 < iVar9) {
                        LAB_1004f51a0:
                            goto LAB_1004f4ecf;
                        }
                        iVar9 = pCVar15->GetPos();
                        if (iVar9 < iVar8)
                            goto LAB_1004f51a0;
                        this_03 = local_38;
                        uVar14 = (unsigned long)uVar5;
                        uVar11 = local_38->end();
                        uVar5 = uVar5 + 1;
                    } while (uVar14 < uVar11);
                }
            }
            this_04 = (ModeAccountType*)&local_40->field_312;
            cVar3 = this_04->empty();
            uVar14 = (((uint64_t)((int64_t)((unsigned long)this_03 >> 8)) << 8) | (uint8_t)1);
            if (!cVar3) {
                lVar10 = this_04->end();
                if (lVar10 != 0) {
                    uVar14 = 0;
                    uVar11 = 1;
                    local_38 = this_04;
                    do {
                        uVar19 = uVar11;
                        pCVar15 = (CommandLine*)(*this_04)[uVar14];
                        pCVar16 = (ConfigProvider*)local_40->field_24->GetDomain();
                        iVar8 = pCVar15->GetX();
                        psVar17 = (shared_ptr<oldscape::dash3d::GroundDecor>*)pCVar16->GetVarBitType(iVar8);
                        local_58 = shared_ptr(psVar17);
                        uVar4 = (playerVarDomain._vptr->GetVarBitValue)((shared_ptr<VarBitType>*)playerVarDomain);
                        iVar8 = pCVar15->GetZ();
                        if ((((uint32_t)extraout_var << 8) | (uint8_t)uVar4) < iVar8) {
                        LAB_1004f51ae:
                            goto LAB_1004f4ecf;
                        }
                        iVar8 = pCVar15->GetPos();
                        if (iVar8 < (((uint32_t)extraout_var << 8) | (uint8_t)uVar4))
                            goto LAB_1004f51ae;
                        this_04 = local_38;
                        uVar18 = local_38->end();
                        uVar14 = uVar19;
                        uVar11 = (unsigned long)((int)uVar19 + 1);
                    } while (uVar19 < uVar18);
                    uVar14 = (((uint64_t)((int64_t)(uVar19 >> 8)) << 8) | (uint8_t)1);
                }
            }
        }
    LAB_1004f4ed1:
        return uVar14 & 4294967295;
    }

    // 0x1004f52f0
    bool QuestType::CheckPreReqQuestPoints(PlayerVarDomain& playerVarDomain) const {
        unsigned int uVar1 = playerVarDomain.GetTotalQuestPoints();
        return field_280 <= uVar1;
    }

    // 0x1004f5320
    bool QuestType::CheckPreReqStat(const PlayerGameState& playerGameState, unsigned int arg2,
                                    const ModeAccountType* modeAccountType) const {
        unsigned int uVar2;
        unsigned long uVar4;
        CoordMapSquare* this_00;

        uint8_t* this_01 = &field_256;
        if (this_01->empty() == '\0') {
            uVar4 = this_01->end();
            if (arg2 < uVar4) {
                this_00 = (CoordMapSquare*)(*this_01)[(unsigned long)arg2];
                uVar2 = this_00->GetX();
                uVar2 = playerGameState.GetStatLevelMax(uVar2, modeAccountType);
                return this_00->GetZ() <= uVar2;
            }
        }
        return false;
    }

    // 0x1004f53a0
    uint64_t QuestType::CheckPreReqQuest(PlayerVarDomain& playerVarDomain, unsigned int arg2) const {
        BaseTemplateConfigTypeList<QuestType>* this_01;
        unsigned long uVar2;
        unsigned short* puVar3;
        shared_ptr<QuestType>* this_02;

        uint8_t* this_00 = &field_232;
        if (this_00->empty() == '\0') {
            uVar2 = this_00->end();
            if (arg2 < uVar2) {
                this_01 = field_24;
                puVar3 = (unsigned short*)(*this_00)[(unsigned long)arg2];
                this_02 = (shared_ptr<QuestType>*)this_01->List((unsigned int)*puVar3, nullptr);
                return FinishedQuest((QuestType*)(*this_02).operator->(), playerVarDomain);
            }
        }
        return 0;
    }

    // 0x1004f5420
    bool QuestType::CheckPreReqVarP(PlayerVarDomain& playerVarDomain, unsigned int arg2) const {
        VarDomainType* varDomainType;
        uint8_t uVar2;
        int iVar3;
        int iVar4;
        unsigned long uVar5;
        CommandLine* this_01;
        ConfigProvider* this_02;
        uint64_t extraout_var;

        uint8_t* this_00 = &field_288;
        if (this_00->empty() == '\0') {
            uVar5 = this_00->end();
            if (arg2 <= uVar5) {
                this_01 = (CommandLine*)(*this_00)[(unsigned long)arg2];
                this_02 = (ConfigProvider*)field_24->GetDomain();
                varDomainType = VarDomainType::PLAYER;
                iVar3 = this_01->GetX();
                this_02->GetVarType(varDomainType, iVar3);
                uVar2 = (playerVarDomain._vptr->GetVarValue)((shared_ptr<VarType>*)playerVarDomain);
                iVar3 = ((VarValue*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar2))->GetInt();
                iVar4 = this_01->GetZ();
                if (iVar4 <= iVar3) {
                    iVar4 = this_01->GetPos();
                    return iVar3 <= iVar4;
                }
            }
        }
        return false;
    }

    // 0x1004f54d0
    bool QuestType::CheckPreReqVarBit(PlayerVarDomain& playerVarDomain, unsigned int arg2) const {
        uint8_t uVar2;
        int iVar3;
        uint32_t extraout_var;
        unsigned long uVar4;
        CommandLine* this_01;
        ConfigProvider* this_02;

        uint8_t* this_00 = &field_288;
        if (this_00->empty() == '\0') {
            uVar4 = this_00->end();
            if (arg2 <= uVar4) {
                this_01 = (CommandLine*)(*this_00)[(unsigned long)arg2];
                this_02 = (ConfigProvider*)field_24->GetDomain();
                iVar3 = this_01->GetX();
                this_02->GetVarBitType(iVar3);
                uVar2 = (playerVarDomain._vptr->GetVarBitValue)((shared_ptr<VarBitType>*)playerVarDomain);
                iVar3 = this_01->GetZ();
                if (iVar3 <= (((uint32_t)extraout_var << 8) | (uint8_t)uVar2)) {
                    iVar3 = this_01->GetPos();
                    return uVar2 <= iVar3;
                }
            }
        }
        return false;
    }

} // namespace jag::game

namespace jag::oldscape::configdecoder {
    // 0x1001520e0: ObjSpriteCacheKey::~ObjSpriteCacheKey() has the same machine code as rs2lib::social::ClanSettings::ExtraSettingsParam::~ExtraSettingsParam()

} // namespace jag::oldscape::configdecoder
