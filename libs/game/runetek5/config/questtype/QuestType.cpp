// libs/game/runetek5/config/questtype/QuestType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "QuestType.h"

namespace jag::game {
    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    uint QuestType::MasterQuestVar::GetEndState() const;

    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    int QuestType::PrerequisiteVar::GetMax() const;

    // 0x100073980: the linker folded this into math::Rect<int>::MinY() const, which has identical code
    uint QuestType::MasterQuestVar::GetStartState() const;

    // 0x100073980: the linker folded this into math::Rect<int>::MinY() const, which has identical code
    int QuestType::PrerequisiteVar::GetMin() const;

    // 0x100073980: the linker folded this into math::Rect<int>::MinY() const, which has identical code
    QuestType::PrerequisiteStat::GetRequirement() const;

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    uint QuestType::MasterQuestVar::GetID() const;

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    int QuestType::PrerequisiteVar::GetID() const;

    // 0x1000b9960: the linker folded this into oldscape::ScriptVarType::GetID() const, which has identical code
    QuestType::PrerequisiteStat::GetID() const;

    // 0x1000e53d0: the linker folded this into oldscape::rs2lib::CoordMapSquare::CoordMapSquare(int, int), which has identical code
    QuestType::PrerequisiteStat::PrerequisiteStat(int, unsigned int);

    // 0x100102d30: the linker folded this into math::Vector3T<int>::Vector3T(int, int, int), which has identical code
    QuestType::MasterQuestVar::MasterQuestVar(int, int, int);

    // 0x10012cae0: the linker folded this into oldscape::sidebars::SideBarData::SideBarData(int, int), which has identical code
    QuestType::PrerequisiteStat::PrerequisiteStat(int, unsigned int);

    // 0x100132e20: the linker folded this into math::Vector3T<int>::Vector3T(int, int, int), which has identical code
    QuestType::MasterQuestVar::MasterQuestVar(int, int, int);

    // 0x1001520e0: the linker folded this into oldscape::rs2lib::social::ClanSettings::ExtraSettingsParam::~ExtraSettingsParam(), which has identical code
    QuestType::PrerequisiteVar::~PrerequisiteVar();

    // 0x1001520f0: the linker folded this into oldscape::rs2lib::social::ClanSettings::ExtraSettingsParam::~ExtraSettingsParam(), which has identical code
    QuestType::PrerequisiteVar::~PrerequisiteVar();

    // 0x100159b70: the linker folded this into oldscape::rs2lib::InputField::GetEnterAction() const, which has identical code
    uint QuestType::GetQuestPoints() const;

    // 0x100396f10: the linker folded this into oldscape::input::InputEvent::InputEvent(), which has identical code
    QuestType::MasterQuestVar::MasterQuestVar();

    // 0x100396f10: the linker folded this into oldscape::input::InputEvent::InputEvent(), which has identical code
    QuestType::PrerequisiteStat::PrerequisiteStat();

    // 0x100396f20: the linker folded this into oldscape::input::InputEvent::Clear(), which has identical code
    EnvSkySettings::SetDefaults();

    // 0x100396f20: the linker folded this into oldscape::input::InputEvent::Clear(), which has identical code
    QuestType::MasterQuestVar::MasterQuestVar();

    // 0x100396f20: the linker folded this into oldscape::input::InputEvent::Clear(), which has identical code
    QuestType::PrerequisiteStat::PrerequisiteStat();

    // 0x1004f38e0, 1712 bytes, placed by class name and debug map
    // QuestType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    undefined* QuestType::DecodeType(PacketT* param_1, uint param_2) {
        PacketT* pPVar1;
        byte bVar2;
        byte bVar3;
        byte bVar4;
        undefined2 uVar5;
        ushort uVar6;
        undefined4 uVar7;
        int iVar8;
        int iVar9;
        undefined8 uVar10;
        undefined2* puVar11;
        undefined8* puVar12;
        char* pcVar13;
        PrerequisiteVar* pPVar14;
        PacketT* pPVar15;
        ulong uVar16;
        basic_string* pbVar17;
        ObjSpriteCacheKey local_130[2];
        Array<QuestType::PrerequisiteVar, eastl::allocator>* local_100;
        ulong local_f8;
        PacketT* local_f0;
        int local_e4;
        CoordGrid local_e0[10];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pPVar15 = param_1;
        switch (param_2) {
        case 1:
            pbVar17 = (basic_string*)&field_56;
            goto LAB_1004f3985;
        case 2:
            pbVar17 = (basic_string*)&field_88;
        LAB_1004f3985:
            local_f0 = param_1;
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, pbVar17, true);
            break;
        case 3:
            local_f0 = param_1;
            bVar4 = param_1->g1();
            (&field_120, (ulong)bVar4, 0)->set_max_size();
            if (bVar4 != 0) {
                pPVar15 = (PacketT*)0;
                local_f0 = (PacketT*)(ulong)bVar4;
                do {
                    uVar6 = param_1->g2();
                    iVar8 = param_1->g4();
                    iVar9 = param_1->g4();
                    pPVar1 = local_f0;
                    new (local_e0) oldscape::rs2lib::worldmap::LocationData((uint)uVar6, iVar8, iVar9);
                    puVar12 = (undefined8*)Array<QuestType::MasterQuestVar, eastl::allocator>::operator[](
                        (Array<QuestType::MasterQuestVar, eastl::allocator>*)&field_120, (ulong)pPVar15);
                    *puVar12 = local_e0[0]._0_8_;
                    *(uint*)(puVar12 + 1) = local_e0[0].field_8;
                    pPVar15 = pPVar15 + 1;
                } while (pPVar1 != pPVar15);
            }
            break;
        case 4:
            local_f0 = param_1;
            bVar4 = param_1->g1();
            (&field_144, (ulong)bVar4, 0)->set_max_size();
            if (bVar4 != 0) {
                pPVar15 = (PacketT*)0;
                local_f0 = (PacketT*)(ulong)bVar4;
                do {
                    uVar6 = param_1->g2();
                    iVar8 = param_1->g4();
                    iVar9 = param_1->g4();
                    pPVar1 = local_f0;
                    new (local_e0) oldscape::rs2lib::worldmap::LocationData((uint)uVar6, iVar8, iVar9);
                    puVar12 = (undefined8*)Array<QuestType::MasterQuestVar, eastl::allocator>::operator[](
                        (Array<QuestType::MasterQuestVar, eastl::allocator>*)&field_144, (ulong)pPVar15);
                    *puVar12 = local_e0[0]._0_8_;
                    *(uint*)(puVar12 + 1) = local_e0[0].field_8;
                    pPVar15 = pPVar15 + 1;
                } while (pPVar1 != pPVar15);
            }
            break;
        case 5:
            local_f0 = param_1;
            uVar6 = param_1->g2();
            field_168 = (uint)uVar6;
            break;
        case 6:
            local_f0 = param_1;
            bVar4 = param_1->g1();
            field_172 = (uint)bVar4;
            break;
        case 7:
            local_f0 = param_1;
            bVar4 = param_1->g1();
            field_176 = (uint)bVar4;
            break;
        case 8:
            field_180 = 1;
            local_f0 = param_1;
            break;
        case 9:
            local_f0 = param_1;
            bVar4 = param_1->g1();
            m_questPoints = (uint)bVar4;
            break;
        case 10:
            local_f0 = param_1;
            bVar4 = param_1->g1();
            (&field_192, (ulong)bVar4, 0)->set_max_size();
            if (bVar4 != 0) {
                uVar16 = 0;
                do {
                    iVar8 = param_1->g4();
                    game::CoordGrid::CoordGrid(local_e0, iVar8);
                    puVar12 = (undefined8*)Array<CoordGrid, eastl::allocator>::operator[](
                        (Array<CoordGrid, eastl::allocator>*)&field_192, uVar16);
                    *puVar12 = local_e0[0]._0_8_;
                    *(uint*)(puVar12 + 1) = local_e0[0].field_8;
                    uVar16 = uVar16 + 1;
                } while (bVar4 != uVar16);
            }
            break;
        case 11:
        case 16:
            goto switchD_1004f3927_caseD_b;
        case 12:
            local_f0 = param_1;
            iVar8 = param_1->g4();
            game::CoordGrid::CoordGrid(local_e0, iVar8);
            *(uint*)(field_216 + 8) = local_e0[0].field_8;
            *(uint*)(field_216 + 0) = local_e0[0].field_0;
            *(uint*)(field_216 + 4) = local_e0[0].field_4;
            break;
        case 13:
            local_f0 = param_1;
            bVar4 = param_1->g1();
            (&field_232, (ulong)bVar4, 0)->set_max_size();
            if (bVar4 != 0) {
                uVar16 = 0;
                do {
                    uVar5 = param_1->g2();
                    puVar11 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](
                        (Array<unsigned short, eastl::allocator>*)&field_232, uVar16);
                    *puVar11 = uVar5;
                    uVar16 = uVar16 + 1;
                } while (bVar4 != uVar16);
            }
            break;
        case 14:
            local_f0 = param_1;
            bVar4 = param_1->g1();
            (&field_256, (ulong)bVar4, 0)->set_max_size();
            if (bVar4 != 0) {
                uVar16 = 0;
                do {
                    bVar2 = param_1->g1();
                    bVar3 = param_1->g1();
                    new (local_e0) oldscape::sidebars::SideBarData((uint)bVar2, (uint)bVar3);
                    puVar12 = (undefined8*)Array<QuestType::PrerequisiteStat, eastl::allocator>::operator[](
                        (Array<QuestType::PrerequisiteStat, eastl::allocator>*)&field_256, uVar16);
                    *puVar12 = local_e0[0]._0_8_;
                    uVar16 = uVar16 + 1;
                } while (bVar4 != uVar16);
            }
            break;
        case 15:
            local_f0 = param_1;
            uVar6 = param_1->g2();
            field_280 = (uint)uVar6;
            break;
        case 17:
            local_f0 = param_1;
            uVar7 = param_1->gSmart2or4s();
            field_336 = uVar7;
            break;
        case 18:
            local_f0 = param_1;
            bVar4 = param_1->g1();
            uVar16 = (ulong)bVar4;
            (&field_288, uVar16, 0)->set_max_size();
            local_f8 = uVar16;
            if (bVar4 != 0) {
                local_100 = (Array<QuestType::PrerequisiteVar, eastl::allocator>*)&field_288;
                local_e4 = param_1->g4();
                iVar8 = param_1->g4();
                iVar9 = param_1->g4();
                new (local_e0) eastl::fixed_string<char, 128, true, eastl::allocator>();
                PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                    eastl::fixed_string<char, 128, true, eastl::allocator>>(
                    (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1,
                    (fixed_string*)local_e0, false);
                pcVar13 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                new (local_130) PrerequisiteVar(local_e4, iVar8, iVar9, pcVar13);
                pPVar14 =
                    (PrerequisiteVar*)Array<QuestType::PrerequisiteVar, eastl::allocator>::operator[](local_100, 0);
                PrerequisiteVar::operator=(pPVar14, (PrerequisiteVar*)local_130);
                local_130->~ObjSpriteCacheKey();
                /* WARNING: Subroutine does not return */
                local_e0->~fixed_string();
            }
            break;
        case 19:
            local_f0 = param_1;
            bVar4 = param_1->g1();
            uVar16 = (ulong)bVar4;
            (&field_312, uVar16, 0)->set_max_size();
            local_f8 = uVar16;
            if (bVar4 != 0) {
                local_100 = (Array<QuestType::PrerequisiteVar, eastl::allocator>*)&field_312;
                local_e4 = param_1->g4();
                iVar8 = param_1->g4();
                iVar9 = param_1->g4();
                new (local_e0) eastl::fixed_string<char, 128, true, eastl::allocator>();
                PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                    eastl::fixed_string<char, 128, true, eastl::allocator>>(
                    (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1,
                    (fixed_string*)local_e0, false);
                pcVar13 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                new (local_130) PrerequisiteVar(local_e4, iVar8, iVar9, pcVar13);
                pPVar14 =
                    (PrerequisiteVar*)Array<QuestType::PrerequisiteVar, eastl::allocator>::operator[](local_100, 0);
                PrerequisiteVar::operator=(pPVar14, (PrerequisiteVar*)local_130);
                local_130->~ObjSpriteCacheKey();
                /* WARNING: Subroutine does not return */
                local_e0->~fixed_string();
            }
            break;
        default:
            pPVar15 = local_f0;
            if (param_2 == 249) {
                DecodeParams(param_1);
                break;
            }
            goto switchD_1004f3927_caseD_b;
        }
    LAB_1004f3ed1:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return DataStatus::READY;
    switchD_1004f3927_caseD_b:
        local_f0 = pPVar15;
        uVar10 = logger::default_logger();
        logger::Logger::Log(uVar10, 0, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                            "config/questtype/QuestType.cpp",
                            165, "Unrecognised .quest config code: %u in quest %d", param_2, field_32);
        goto LAB_1004f3ed1;
    }

    // 0x1004f4a10, 48 bytes, placed by class name and debug map
    // QuestType::PostDecode()
    void QuestType::PostDecode() {
        if (eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty() !=
            '\0') {
            eastl::string::operator=((eastl::string*)&field_88, (basic_string*)&field_56);
        }
    }

    // 0x1004f4a40, 496 bytes, placed by class name and debug map
    // QuestType::StartedQuest(PlayerVarDomain&) const
    bool QuestType::StartedQuest(PlayerVarDomain* param_1) {
        bool bVar1;
        VarDomainType* pVVar2;
        char cVar3;
        int iVar4;
        int iVar5;
        long lVar6;
        CoordMapSquare* pCVar7;
        ConfigProvider* pCVar8;
        shared_ptr* psVar9;
        VarValue* this_00;
        ulong uVar10;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar11;
        ulong uVar12;
        shared_ptr<oldscape::dash3d::Decor> local_58[16];
        QuestType* local_40;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_38;

        pvVar11 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_120;
        local_40 = this;
        cVar3 = pvVar11->empty();
        if ((cVar3 == '\0') &&
            (lVar6 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11),
             lVar6 != 0)) {
            uVar10 = 0;
            uVar12 = 1;
            local_38 = pvVar11;
            do {
                pCVar7 = (CoordMapSquare*)Array<QuestType::MasterQuestVar, eastl::allocator>::operator[](
                    (Array<QuestType::MasterQuestVar, eastl::allocator>*)pvVar11, uVar10);
                pCVar8 = (ConfigProvider*)local_40->field_24->GetDomain();
                pVVar2 = VarDomainType::PLAYER;
                iVar4 = pCVar7->GetX();
                psVar9 = (shared_ptr*)pCVar8->GetVarType(pVVar2, iVar4);
                shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_58, psVar9);
                this_00 = (VarValue*)(*(code*)param_1->field_0[2])(param_1, local_58);
                iVar4 = this_00->GetInt();
                iVar5 = pCVar7->GetZ();
                local_58->~shared_ptr();
                pvVar11 = local_38;
                if (iVar5 <= iVar4) {
                    return true;
                }
                uVar10 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_38);
                bVar1 = uVar12 < uVar10;
                uVar10 = uVar12;
                uVar12 = (ulong)((int)uVar12 + 1);
            } while (bVar1);
        }
        pvVar11 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&local_40->field_144;
        cVar3 = pvVar11->empty();
        if ((cVar3 != '\0') ||
            (lVar6 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11),
             lVar6 == 0)) {
            return false;
        }
        uVar10 = 0;
        uVar12 = 1;
        local_38 = pvVar11;
        do {
            pCVar7 = (CoordMapSquare*)Array<QuestType::MasterQuestVar, eastl::allocator>::operator[](
                (Array<QuestType::MasterQuestVar, eastl::allocator>*)pvVar11, uVar10);
            pCVar8 = (ConfigProvider*)local_40->field_24->GetDomain();
            iVar4 = pCVar7->GetX();
            psVar9 = (shared_ptr*)pCVar8->GetVarBitType(iVar4);
            shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_58, psVar9);
            iVar4 = (*(code*)param_1->field_0[4])(param_1, local_58);
            iVar5 = pCVar7->GetZ();
            local_58->~shared_ptr();
            pvVar11 = local_38;
            if (iVar5 <= iVar4)
                break;
            uVar10 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_38);
            bVar1 = uVar12 < uVar10;
            uVar10 = uVar12;
            uVar12 = (ulong)((int)uVar12 + 1);
        } while (bVar1);
        return iVar5 <= iVar4;
    }

    // 0x1004f4cb0, 496 bytes, placed by class name and debug map
    // QuestType::FinishedQuest(PlayerVarDomain&) const
    bool QuestType::FinishedQuest(PlayerVarDomain* param_1) {
        bool bVar1;
        VarDomainType* pVVar2;
        char cVar3;
        int iVar4;
        int iVar5;
        long lVar6;
        CommandLine* pCVar7;
        ConfigProvider* pCVar8;
        shared_ptr* psVar9;
        VarValue* this_00;
        ulong uVar10;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar11;
        ulong uVar12;
        shared_ptr<oldscape::dash3d::Decor> local_58[16];
        QuestType* local_40;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* local_38;

        pvVar11 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&field_120;
        local_40 = this;
        cVar3 = pvVar11->empty();
        if ((cVar3 == '\0') &&
            (lVar6 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11),
             lVar6 != 0)) {
            uVar10 = 0;
            uVar12 = 1;
            local_38 = pvVar11;
            do {
                pCVar7 = (CommandLine*)Array<QuestType::MasterQuestVar, eastl::allocator>::operator[](
                    (Array<QuestType::MasterQuestVar, eastl::allocator>*)pvVar11, uVar10);
                pCVar8 = (ConfigProvider*)local_40->field_24->GetDomain();
                pVVar2 = VarDomainType::PLAYER;
                iVar4 = pCVar7->GetX();
                psVar9 = (shared_ptr*)pCVar8->GetVarType(pVVar2, iVar4);
                shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_58, psVar9);
                this_00 = (VarValue*)(*(code*)param_1->field_0[2])(param_1, local_58);
                iVar4 = this_00->GetInt();
                iVar5 = pCVar7->GetPos();
                local_58->~shared_ptr();
                pvVar11 = local_38;
                if (iVar5 <= iVar4) {
                    return true;
                }
                uVar10 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_38);
                bVar1 = uVar12 < uVar10;
                uVar10 = uVar12;
                uVar12 = (ulong)((int)uVar12 + 1);
            } while (bVar1);
        }
        pvVar11 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)&local_40->field_144;
        cVar3 = pvVar11->empty();
        if ((cVar3 != '\0') ||
            (lVar6 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar11),
             lVar6 == 0)) {
            return false;
        }
        uVar10 = 0;
        uVar12 = 1;
        local_38 = pvVar11;
        do {
            pCVar7 = (CommandLine*)Array<QuestType::MasterQuestVar, eastl::allocator>::operator[](
                (Array<QuestType::MasterQuestVar, eastl::allocator>*)pvVar11, uVar10);
            pCVar8 = (ConfigProvider*)local_40->field_24->GetDomain();
            iVar4 = pCVar7->GetX();
            psVar9 = (shared_ptr*)pCVar8->GetVarBitType(iVar4);
            shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_58, psVar9);
            iVar4 = (*(code*)param_1->field_0[4])(param_1, local_58);
            iVar5 = pCVar7->GetPos();
            local_58->~shared_ptr();
            pvVar11 = local_38;
            if (iVar5 <= iVar4)
                break;
            uVar10 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(local_38);
            bVar1 = uVar12 < uVar10;
            uVar10 = uVar12;
            uVar12 = (ulong)((int)uVar12 + 1);
        } while (bVar1);
        return iVar5 <= iVar4;
    }

    // 0x1004f4ea0, 848 bytes, placed by class name and debug map
    // QuestType::CanStartQuest(PlayerVarDomain&, PlayerGameState const&, ModeAccountType const*) const
    ulong QuestType::CanStartQuest(PlayerVarDomain* param_1, PlayerGameState* param_2, ModeAccountType* param_3) {
        undefined1* puVar1;
        BaseTemplateConfigTypeList<QuestType>* this_00;
        bool bVar2;
        VarDomainType* pVVar3;
        char cVar4;
        uint uVar5;
        uint uVar6;
        uint uVar7;
        int iVar8;
        int iVar9;
        long lVar10;
        CoordMapSquare* this_01;
        ulong uVar11;
        ushort* puVar12;
        shared_ptr<QuestType>* this_02;
        QuestType* pQVar13;
        ulong uVar14;
        CommandLine* pCVar15;
        ConfigProvider* pCVar16;
        shared_ptr* psVar17;
        VarValue* this_03;
        ulong uVar18;
        ModeAccountType* this_04;
        ModeAccountType* this_05;
        ulong uVar19;
        shared_ptr<oldscape::dash3d::Decor> local_58[16];
        QuestType* local_40;
        ModeAccountType* local_38;

        local_38 = param_3;
        uVar5 = param_1->GetTotalQuestPoints();
        if (uVar5 < field_280) {
        LAB_1004f4ecf:
            uVar14 = 0;
        } else {
            puVar1 = &field_256;
            local_40 = this;
            cVar4 = puVar1->empty();
            if (cVar4 == '\0') {
                lVar10 = puVar1->end();
                if (lVar10 != 0) {
                    uVar5 = 1;
                    uVar14 = 0;
                    do {
                        this_01 = (CoordMapSquare*)Array<QuestType::PrerequisiteStat, eastl::allocator>::operator[](
                            (Array<QuestType::PrerequisiteStat, eastl::allocator>*)puVar1, uVar14);
                        uVar6 = this_01->GetX();
                        uVar6 = param_2->GetStatLevelMax(uVar6, local_38);
                        uVar7 = this_01->GetZ();
                        if (uVar6 < uVar7)
                            goto LAB_1004f4ecf;
                        uVar14 = (ulong)uVar5;
                        uVar11 = puVar1->end();
                        uVar5 = uVar5 + 1;
                    } while (uVar14 < uVar11);
                }
            }
            pQVar13 = local_40;
            puVar1 = &local_40->field_232;
            cVar4 = puVar1->empty();
            if (cVar4 == '\0') {
                lVar10 = puVar1->end();
                if (lVar10 != 0) {
                    uVar14 = 0;
                    uVar11 = 1;
                    do {
                        this_00 = (BaseTemplateConfigTypeList<QuestType>*)pQVar13->field_24;
                        puVar12 = (ushort*)Array<unsigned short, eastl::allocator>::operator[](
                            (Array<unsigned short, eastl::allocator>*)puVar1, uVar14);
                        uVar14 = 0;
                        this_02 = (shared_ptr<QuestType>*)this_00->List((uint)*puVar12, 0);
                        pQVar13 = (QuestType*)shared_ptr<QuestType>::operator->(this_02);
                        cVar4 = FinishedQuest(pQVar13, param_1);
                        if (cVar4 == '\0')
                            goto LAB_1004f4ed1;
                        uVar14 = puVar1->end();
                        bVar2 = uVar11 < uVar14;
                        uVar14 = uVar11;
                        pQVar13 = local_40;
                        uVar11 = (ulong)((int)uVar11 + 1);
                    } while (bVar2);
                }
            }
            this_04 = (ModeAccountType*)&pQVar13->field_288;
            cVar4 = this_04->empty();
            if (cVar4 == '\0') {
                lVar10 = this_04->end();
                if (lVar10 != 0) {
                    uVar5 = 1;
                    uVar14 = 0;
                    local_38 = this_04;
                    do {
                        pCVar15 = (CommandLine*)Array<QuestType::PrerequisiteVar, eastl::allocator>::operator[](
                            (Array<QuestType::PrerequisiteVar, eastl::allocator>*)this_04, uVar14);
                        pCVar16 = (ConfigProvider*)local_40->field_24->GetDomain();
                        pVVar3 = VarDomainType::PLAYER;
                        iVar8 = pCVar15->GetX();
                        psVar17 = (shared_ptr*)pCVar16->GetVarType(pVVar3, iVar8);
                        shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_58, psVar17);
                        this_03 = (VarValue*)(*(code*)param_1->field_0[2])(param_1, local_58);
                        iVar8 = this_03->GetInt();
                        iVar9 = pCVar15->GetZ();
                        if (iVar8 < iVar9) {
                        LAB_1004f51a0:
                            local_58->~shared_ptr();
                            goto LAB_1004f4ecf;
                        }
                        iVar9 = pCVar15->GetPos();
                        if (iVar9 < iVar8)
                            goto LAB_1004f51a0;
                        local_58->~shared_ptr();
                        this_04 = local_38;
                        uVar14 = (ulong)uVar5;
                        uVar11 = local_38->end();
                        uVar5 = uVar5 + 1;
                    } while (uVar14 < uVar11);
                }
            }
            this_05 = (ModeAccountType*)&local_40->field_312;
            cVar4 = this_05->empty();
            uVar14 = CONCAT71((int7)((ulong)this_04 >> 8), 1);
            if (cVar4 == '\0') {
                lVar10 = this_05->end();
                if (lVar10 != 0) {
                    uVar14 = 0;
                    uVar11 = 1;
                    local_38 = this_05;
                    do {
                        uVar19 = uVar11;
                        pCVar15 = (CommandLine*)Array<QuestType::PrerequisiteVar, eastl::allocator>::operator[](
                            (Array<QuestType::PrerequisiteVar, eastl::allocator>*)this_05, uVar14);
                        pCVar16 = (ConfigProvider*)local_40->field_24->GetDomain();
                        iVar8 = pCVar15->GetX();
                        psVar17 = (shared_ptr*)pCVar16->GetVarBitType(iVar8);
                        shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_58, psVar17);
                        iVar8 = (*(code*)param_1->field_0[4])(param_1, local_58);
                        iVar9 = pCVar15->GetZ();
                        if (iVar8 < iVar9) {
                        LAB_1004f51ae:
                            local_58->~shared_ptr();
                            goto LAB_1004f4ecf;
                        }
                        iVar9 = pCVar15->GetPos();
                        if (iVar9 < iVar8)
                            goto LAB_1004f51ae;
                        local_58->~shared_ptr();
                        this_05 = local_38;
                        uVar18 = local_38->end();
                        uVar14 = uVar19;
                        uVar11 = (ulong)((int)uVar19 + 1);
                    } while (uVar19 < uVar18);
                    uVar14 = CONCAT71((int7)(uVar19 >> 8), 1);
                }
            }
        }
    LAB_1004f4ed1:
        return uVar14 & 4294967295;
    }

    // 0x1004f52f0, 48 bytes, placed by class name and debug map
    // QuestType::CheckPreReqQuestPoints(PlayerVarDomain&) const
    bool QuestType::CheckPreReqQuestPoints(PlayerVarDomain* param_1) {
        uint uVar1;

        uVar1 = param_1->GetTotalQuestPoints();
        return field_280 <= uVar1;
    }

    // 0x1004f5320, 128 bytes, placed by class name and debug map
    // QuestType::CheckPreReqStat(PlayerGameState const&, unsigned int, ModeAccountType const*) const
    bool QuestType::CheckPreReqStat(PlayerGameState* param_1, uint param_2, ModeAccountType* param_3) {
        char cVar1;
        uint uVar2;
        ulong uVar4;
        CoordMapSquare* this_00;
        undefined1* this_01;

        this_01 = &field_256;
        cVar1 = this_01->empty();
        if (cVar1 == '\0') {
            uVar4 = this_01->end();
            if (param_2 < uVar4) {
                this_00 = (CoordMapSquare*)Array<QuestType::PrerequisiteStat, eastl::allocator>::operator[](
                    (Array<QuestType::PrerequisiteStat, eastl::allocator>*)this_01, (ulong)param_2);
                uVar2 = this_00->GetX();
                uVar2 = param_1->GetStatLevelMax(uVar2, param_3);
                return this_00->GetZ() <= uVar2;
            }
        }
        return false;
    }

    // 0x1004f53a0, 128 bytes, placed by class name and debug map
    // QuestType::CheckPreReqQuest(PlayerVarDomain&, unsigned int) const
    undefined8 QuestType::CheckPreReqQuest(PlayerVarDomain* param_1, uint param_2) {
        undefined1* this_00;
        BaseTemplateConfigTypeList<QuestType>* this_01;
        char cVar1;
        ulong uVar2;
        ushort* puVar3;
        shared_ptr<QuestType>* this_02;
        QuestType* this_03;

        this_00 = &field_232;
        cVar1 = this_00->empty();
        if (cVar1 == '\0') {
            uVar2 = this_00->end();
            if (param_2 < uVar2) {
                this_01 = (BaseTemplateConfigTypeList<QuestType>*)field_24;
                puVar3 = (ushort*)Array<unsigned short, eastl::allocator>::operator[](
                    (Array<unsigned short, eastl::allocator>*)this_00, (ulong)param_2);
                this_02 = (shared_ptr<QuestType>*)this_01->List((uint)*puVar3, 0);
                this_03 = (QuestType*)shared_ptr<QuestType>::operator->(this_02);
                return FinishedQuest(this_03, param_1);
            }
        }
        return 0;
    }

    // 0x1004f5420, 176 bytes, placed by class name and debug map
    // QuestType::CheckPreReqVarP(PlayerVarDomain&, unsigned int) const
    bool QuestType::CheckPreReqVarP(PlayerVarDomain* param_1, uint param_2) {
        undefined1* this_00;
        VarDomainType* pVVar1;
        char cVar2;
        int iVar3;
        int iVar4;
        ulong uVar5;
        CommandLine* this_01;
        ConfigProvider* this_02;
        undefined8 uVar6;
        VarValue* this_03;

        this_00 = &field_288;
        cVar2 = this_00->empty();
        if (cVar2 == '\0') {
            uVar5 = this_00->end();
            if (param_2 <= uVar5) {
                this_01 = (CommandLine*)Array<QuestType::PrerequisiteVar, eastl::allocator>::operator[](
                    (Array<QuestType::PrerequisiteVar, eastl::allocator>*)this_00, (ulong)param_2);
                this_02 = (ConfigProvider*)field_24->GetDomain();
                pVVar1 = VarDomainType::PLAYER;
                iVar3 = this_01->GetX();
                uVar6 = this_02->GetVarType(pVVar1, iVar3);
                this_03 = (VarValue*)(*(code*)param_1->field_0[2])(param_1, uVar6);
                iVar3 = this_03->GetInt();
                iVar4 = this_01->GetZ();
                if (iVar4 <= iVar3) {
                    iVar4 = this_01->GetPos();
                    return iVar3 <= iVar4;
                }
            }
        }
        return false;
    }

    // 0x1004f54d0, 160 bytes, placed by class name and debug map
    // QuestType::CheckPreReqVarBit(PlayerVarDomain&, unsigned int) const
    bool QuestType::CheckPreReqVarBit(PlayerVarDomain* param_1, uint param_2) {
        undefined1* this_00;
        char cVar1;
        int iVar2;
        int iVar3;
        ulong uVar4;
        CommandLine* this_01;
        ConfigProvider* this_02;
        undefined8 uVar5;

        this_00 = &field_288;
        cVar1 = this_00->empty();
        if (cVar1 == '\0') {
            uVar4 = this_00->end();
            if (param_2 <= uVar4) {
                this_01 = (CommandLine*)Array<QuestType::PrerequisiteVar, eastl::allocator>::operator[](
                    (Array<QuestType::PrerequisiteVar, eastl::allocator>*)this_00, (ulong)param_2);
                this_02 = (ConfigProvider*)field_24->GetDomain();
                iVar2 = this_01->GetX();
                uVar5 = this_02->GetVarBitType(iVar2);
                iVar2 = (*(code*)param_1->field_0[4])(param_1, uVar5);
                iVar3 = this_01->GetZ();
                if (iVar3 <= iVar2) {
                    iVar3 = this_01->GetPos();
                    return iVar2 <= iVar3;
                }
            }
        }
        return false;
    }

} // namespace jag::game

namespace jag::oldscape::configdecoder {
    // 0x1001520e0: the linker folded this into rs2lib::social::ClanSettings::ExtraSettingsParam::~ExtraSettingsParam(), which has identical code
    ObjSpriteCacheKey::~ObjSpriteCacheKey();

} // namespace jag::oldscape::configdecoder
