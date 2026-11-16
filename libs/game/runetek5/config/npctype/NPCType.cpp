// libs/game/runetek5/config/npctype/NPCType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "NPCType.h"

namespace jag::game {
    // 0x1039bbbe8, 16 bytes, __common; set at startup by ___cxx_global_var_init.5
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> NPCType::NullNpcType;

    // 0x1000b7910: the linker folded this into oldscape::minimenu::MinimenuEntry::GetSubjectName() const, which has identical code
    NPCType::GetOpNames() const;

    // 0x100189180: the linker folded this into oldscape::OSClientConsole::GetInputHandler(), which has identical code
    NPCType::GetHeadIconIndex() const;

    // 0x1001d0880: the linker folded this into graphics::DirLightCsmManager::GetConfig() const, which has identical code
    NPCType::GetHeadList() const;

    // 0x100501fb0, 1056 bytes, base-object constructor, placed by class name and debug map
    // NPCType::NPCType(BaseTemplateConfigTypeList<NPCType>*, int)
    void NPCType::NPCType(BaseTemplateConfigTypeList* param_1, int param_2) {
        char* pcVar1;
        long lVar2;
        undefined8* puVar3;
        fixed_string<char, 16, true, eastl::allocator>* this_00;

        new (this) ConfigType<NPCType>(param_1, param_2);
        new (this) MakeSharedPool<NPCType, 216>();
        field_0 = &PTR__NPCType_100f02fd8;
        new (&field_56) std::array<eastl::fixed_string<char, 24, true, eastl::allocator>, 6ul>();
        new (&field_440) eastl::string();
        new (&field_472) Array<int, eastl::allocator>();
        field_496 = 4294967295;
        new (&field_504) Array<int, eastl::allocator>();
        new (&m_headIconGraphic) eastl::fixed_vector<int, 8ul, true, eastl::allocator>();
        new (&m_headIconIndex) eastl::fixed_vector<int, 8ul, true, eastl::allocator>();
        field_672 = 4294967295;
        m_icon = 4294967295;
        m_overlayHeight = 4294967295;
        m_reprioritiseAttackOp = 4294967295;
        m_visibleCombatLevel = 4294967295;
        field_692 = 1;
        field_696 = 4294967295;
        field_700 = 0;
        m_firstUniqueOpIndex = 6;
        m_attackOpIndex = 6;
        m_examineOpIndex = 6;
        new (&m_bodyList) Array<int, eastl::allocator>();
        new (&m_headList) Array<int, eastl::allocator>();
        new (&field_768) eastl::vector<math::Vector3T<float>, eastl::allocator>();
        new (&field_800) Array<unsigned short, eastl::allocator>();
        new (&field_824) Array<unsigned short, eastl::allocator>();
        new (&field_848) Array<unsigned char, eastl::allocator>();
        new (&field_872) Array<int, eastl::allocator>();
        new (&field_896) Array<unsigned short, eastl::allocator>();
        new (&field_920) Array<unsigned short, eastl::allocator>();
        new (&field_944) Array<int, eastl::allocator>();
        field_971 = 0;
        new (&field_972, 1.0, 1.0, 1.0) math::ColourHSL();
        *(undefined4*)&field_984 = 64;
        field_988 = 1;
        m_fadeInDuration = 0;
        field_996 = 0;
        std::unique_ptr<math::AABB, std::default_delete<math::AABB>>::unique_ptr<true, void>(
            (unique_ptr<math::AABB, std::default_delete<math::AABB>>*)&field_1000);
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
        field_1052 = 3.1415927;
        field_1056 = MoveSpeed::WALK;
        field_1064 = 1;
        field_1068 = 4294967295;
        new (&field_1072) Array<int, eastl::allocator>();
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
        lVar2 = field_24->GetPriority();
        puVar3 = (undefined8*)std::array<char const*, 7ul>::operator[](
            (array<char const*, 7ul>*)&LocalisedText::EXAMINE, (ulong) * (uint*)(lVar2 + 8));
        pcVar1 = (char*)*puVar3;
        this_00 = (fixed_string<char, 16, true, eastl::allocator>*)
            std::array<eastl::fixed_string<char, 24, true, eastl::allocator>, 6ul>::operator[](
                (array<eastl::fixed_string<char, 24, true, eastl::allocator>, 6ul>*)&field_56, 5);
        eastl::fixed_string<char, 16, true, eastl::allocator>::operator=(this_00, pcVar1);
    }

    // 0x100502530, 16 bytes, complete-object constructor, placed by class name and debug map
    // NPCType::NPCType(BaseTemplateConfigTypeList<NPCType>*, int): jumps straight to the base-object constructor

    // 0x100502540, 4608 bytes, placed by class name and debug map
    // NPCType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    undefined* NPCType::DecodeType(PacketT* param_1, uint param_2) {
        byte bVar1;
        undefined1 uVar2;
        char cVar3;
        undefined2 uVar4;
        ushort uVar5;
        ushort uVar6;
        short sVar7;
        short sVar8;
        short sVar9;
        short sVar10;
        short sVar11;
        short sVar12;
        undefined4 uVar13;
        uint uVar14;
        undefined4* puVar15;
        fixed_string* pfVar16;
        undefined2* puVar17;
        undefined1* puVar18;
        float* pfVar19;
        int* piVar20;
        uint* puVar21;
        undefined* puVar22;
        Vector3T<float>* pVVar23;
        AABB* pAVar24;
        Layout* pLVar25;
        vector* pvVar26;
        NXTPixToolkit* pNVar27;
        Vector2T<int>* this_00;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_01;
        undefined8 uVar28;
        uint uVar29;
        uint uVar30;
        ulong uVar31;
        ulong uVar32;
        int iVar33;
        bool bVar34;

        if (param_2 == 12) {
            bVar1 = param_1->g1();
            m_gridSize = (uint)bVar1;
            return DataStatus::READY;
        }
        if (param_2 == 2) {
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, (basic_string*)&field_440,
                false);
            return DataStatus::READY;
        }
        if (param_2 == 1) {
            bVar1 = param_1->g1();
            (&m_bodyList, (ulong)bVar1, 0)->set_max_size();
            if (bVar1 == 0) {
                return DataStatus::READY;
            }
            uVar31 = 0;
            do {
                uVar13 = param_1->gSmart2or4s();
                puVar15 = (undefined4*)Array<int, eastl::allocator>::operator[](
                    (Array<int, eastl::allocator>*)&m_bodyList, uVar31);
                *puVar15 = uVar13;
                uVar31 = uVar31 + 1;
            } while (bVar1 != uVar31);
            return DataStatus::READY;
        }
        if (param_2 - 30 < 5) {
            pfVar16 = (fixed_string*)std::array<eastl::fixed_string<char, 24, true, eastl::allocator>, 6ul>::operator[](
                (array<eastl::fixed_string<char, 24, true, eastl::allocator>, 6ul>*)&field_56, (ulong)(param_2 - 30));
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                eastl::fixed_string<char, 24, true, eastl::allocator>>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, pfVar16, false);
            return DataStatus::READY;
        }
        switch (param_2) {
        case 39:
        switchD_100502634_caseD_27:
            cVar3 = param_1->g1s();
            field_986 = cVar3 * 5;
            break;
        case 40:
            bVar1 = param_1->g1();
            uVar31 = (ulong)bVar1;
            (&field_800, uVar31, 0)->set_max_size();
            (&field_824, uVar31, 0)->set_max_size();
            if (bVar1 != 0) {
                uVar32 = 0;
                do {
                    uVar4 = param_1->g2();
                    puVar17 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](
                        (Array<unsigned short, eastl::allocator>*)&field_800, uVar32);
                    *puVar17 = uVar4;
                    uVar4 = param_1->g2();
                    puVar17 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](
                        (Array<unsigned short, eastl::allocator>*)&field_824, uVar32);
                    *puVar17 = uVar4;
                    uVar32 = uVar32 + 1;
                } while (uVar31 != uVar32);
            }
            break;
        case 41:
            bVar1 = param_1->g1();
            uVar31 = (ulong)bVar1;
            (&field_896, uVar31, 0)->set_max_size();
            (&field_920, uVar31, 0)->set_max_size();
            if (bVar1 != 0) {
                uVar32 = 0;
                do {
                    uVar4 = param_1->g2();
                    puVar17 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](
                        (Array<unsigned short, eastl::allocator>*)&field_896, uVar32);
                    *puVar17 = uVar4;
                    uVar4 = param_1->g2();
                    puVar17 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](
                        (Array<unsigned short, eastl::allocator>*)&field_920, uVar32);
                    *puVar17 = uVar4;
                    uVar32 = uVar32 + 1;
                } while (uVar31 != uVar32);
            }
            break;
        case 42:
            bVar1 = param_1->g1();
            (&field_848, (ulong)bVar1, 0)->set_max_size();
            if (bVar1 != 0) {
                uVar31 = 0;
                do {
                    uVar2 = param_1->g1();
                    puVar18 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                        (Array<unsigned char, eastl::allocator>*)&field_848, uVar31);
                    *puVar18 = uVar2;
                    uVar31 = uVar31 + 1;
                } while (bVar1 != uVar31);
            }
            break;
        default:
            if (param_2 - 97 < 2) {
                uVar5 = param_1->g2();
                if (param_2 == 97) {
                    pfVar19 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&field_972, 2);
                    *pfVar19 = (float)uVar5 * 0.0078125;
                }
                pfVar19 =
                    (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&field_972, (uint)(param_2 != 97));
                *pfVar19 = (float)uVar5 * 0.0078125;
                return DataStatus::READY;
            }
            switch (param_2) {
            case 99:
                m_alwaysOnTop = 1;
                break;
            case 100:
                cVar3 = param_1->g1s();
                *(short*)&field_984 = cVar3 + 64;
                break;
            case 101:
                goto switchD_100502634_caseD_27;
            case 102:
                bVar1 = param_1->g1();
                uVar30 = 0;
                if (bVar1 != 0) {
                    uVar29 = (uint)bVar1;
                    do {
                        uVar30 = uVar30 + 1;
                        bVar34 = 1 < uVar29;
                        uVar29 = uVar29 >> 1;
                    } while (bVar34);
                }
                puVar18 = &m_headIconGraphic;
                eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::resize(
                    (ulong)puVar18);
                eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::resize(
                    (ulong)&m_headIconIndex);
                if (uVar30 != 0) {
                    uVar31 = 0;
                    do {
                        if ((bVar1 >> ((uint)uVar31 & 31) & 1) == 0) {
                            puVar15 = (undefined4*)eastl::vector<
                                int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<int,
                                        eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                                    puVar18,
                                uVar31);
                            *puVar15 = 4294967295;
                            iVar33 = -1;
                        } else {
                            uVar13 = param_1->gSmart2or4s();
                            puVar15 = (undefined4*)eastl::vector<
                                int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::
                            operator[](
                                (vector<int,
                                        eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                                    puVar18,
                                uVar31);
                            *puVar15 = uVar13;
                            sVar7 = param_1->gSmart1Or2Minus1();
                            iVar33 = (int)sVar7;
                        }
                        piVar20 = (int*)eastl::vector<
                            int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                              eastl::allocator>>*)&m_headIconIndex,
                                   uVar31);
                        *piVar20 = iVar33;
                        uVar31 = uVar31 + 1;
                    } while (uVar30 != uVar31);
                }
                break;
            case 103:
                uVar5 = param_1->g2();
                m_turnSpeed = (uint)uVar5;
                break;
            default:
                if (param_2 - 150 < 5) {
                    pfVar16 = (fixed_string*)
                        std::array<eastl::fixed_string<char, 24, true, eastl::allocator>, 6ul>::operator[](
                            (array<eastl::fixed_string<char, 24, true, eastl::allocator>, 6ul>*)&field_56,
                            (ulong)(param_2 - 150));
                    PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                        eastl::fixed_string<char, 24, true, eastl::allocator>>(
                        (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, pfVar16, false);
                    cVar3 = field_24->IsMembersServer();
                    if (cVar3 == '\0') {
                        eastl::fixed_string<char, 16, true, eastl::allocator>::operator=(
                            (fixed_string<char, 16, true, eastl::allocator>*)pfVar16, "");
                        return DataStatus::READY;
                    }
                    return DataStatus::READY;
                }
                switch (param_2) {
                case 155:
                    uVar2 = param_1->g1s();
                    field_968 = uVar2;
                    uVar2 = param_1->g1s();
                    field_969 = uVar2;
                    uVar2 = param_1->g1s();
                    field_970 = uVar2;
                    uVar2 = param_1->g1s();
                    field_971 = uVar2;
                    break;
                default:
                    if (5 < param_2 - 170) {
                        switch (param_2) {
                        case 178:
                            field_692 = 0;
                            return DataStatus::READY;
                        case 179:
                            goto switchD_10050316b_caseD_b3;
                        case 180:
                            bVar1 = param_1->g1();
                            m_fadeInDuration = (uint)bVar1 * 20;
                            return DataStatus::READY;
                        case 181:
                            uVar5 = param_1->g2();
                            field_696 = (uint)uVar5;
                            bVar1 = param_1->g1();
                            field_700 = (uint)bVar1;
                            return DataStatus::READY;
                        case 182:
                            field_1016 = 1;
                            return DataStatus::READY;
                        default:
                            uVar28 = logger::default_logger();
                            logger::Logger::Log(uVar28, 0, 2,
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "game/runetek5/config/npctype/NPCType.cpp",
                                                477, "Unrecognised .npc config code: %u", param_2);
                            return DataStatus::READY;
                        case 184:
                            bVar1 = param_1->g1();
                            m_highlightOverride = (uint)bVar1;
                            return DataStatus::READY;
                        case 185:
                            field_1008 = 0;
                            return DataStatus::READY;
                        case 249:
                            DecodeParams(param_1);
                            return DataStatus::READY;
                        case 252:
                            uVar5 = param_1->g2();
                            m_animationStateMachineID = (uint)uVar5;
                            return DataStatus::READY;
                        }
                    }
                    puVar18 = &field_472;
                    cVar3 = puVar18->empty();
                    if (cVar3 != '\0') {
                        uVar31 = 0;
                        puVar18->set_max_size(6, 0);
                        do {
                            puVar15 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)puVar18, uVar31);
                            *puVar15 = 4294967295;
                            uVar31 = uVar31 + 1;
                        } while (uVar31 != 6);
                    }
                    uVar5 = param_1->g2();
                    uVar30 = (uint)uVar5;
                    uVar31 = (ulong)(param_2 - 170);
                    goto LAB_100502c71;
                case 158:
                    m_reprioritiseAttackOp = 1;
                    break;
                case 159:
                    m_reprioritiseAttackOp = 0;
                    break;
                case 160:
                    bVar1 = param_1->g1();
                    (&field_504, (ulong)bVar1, 0)->set_max_size();
                    if (bVar1 != 0) {
                        uVar31 = 0;
                        do {
                            uVar5 = param_1->g2();
                            puVar21 = (uint*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)&field_504, uVar31);
                            *puVar21 = (uint)uVar5;
                            uVar31 = uVar31 + 1;
                        } while (bVar1 != uVar31);
                    }
                    break;
                case 163:
                    bVar1 = param_1->g1();
                    m_roughBounding = (uint)bVar1;
                    break;
                case 164:
                    uVar5 = param_1->g2();
                    field_1136 = (uint)uVar5;
                    uVar5 = param_1->g2();
                    field_1140 = (uint)uVar5;
                    break;
                case 165:
                    bVar1 = param_1->g1();
                    field_996 = (uint)bVar1;
                    break;
                case 168:
                    bVar1 = param_1->g1();
                    m_backgroundSoundDropoffRange = (uint)bVar1;
                    break;
                case 169:
                    field_988 = 0;
                }
                break;
            case 106:
            case 118:
                uVar5 = param_1->g2();
                uVar30 = (uint)uVar5;
                if (uVar5 == 65535) {
                    uVar30 = 4294967295;
                }
                field_1100 = uVar30;
                uVar5 = param_1->g2();
                uVar30 = (uint)uVar5;
                if (uVar5 == 65535) {
                    uVar30 = 4294967295;
                }
                field_1096 = uVar30;
                uVar30 = 4294967295;
                if (param_2 == 118) {
                    uVar5 = param_1->g2();
                    uVar30 = 4294967295;
                    if (uVar5 != 65535) {
                        uVar30 = (uint)uVar5;
                    }
                }
                uVar5 = param_1->gSmart1or2();
                puVar18 = &field_1072;
                uVar31 = 0;
                puVar18->set_max_size((ulong)(uVar5 + 2), 0);
                do {
                    uVar6 = param_1->g2();
                    puVar21 =
                        (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar18, uVar31);
                    *puVar21 = (uint)uVar6;
                    piVar20 =
                        (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar18, uVar31);
                    if (*piVar20 == 65535) {
                        puVar15 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)puVar18, uVar31);
                        *puVar15 = 4294967295;
                    }
                    uVar31 = uVar31 + 1;
                } while (uVar5 + 1 != uVar31);
                puVar21 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)puVar18,
                                                                          (ulong)(uVar5 + 1));
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
                param_1->Skip(2);
                uVar31 = 2;
                goto LAB_100502e70;
            case 114:
                param_1->Skip(1);
                uVar31 = 1;
            LAB_100502e70:
                param_1->Skip(uVar31);
                break;
            case 119:
                bVar1 = param_1->g1();
                field_1048 = (uint)bVar1;
                break;
            case 121:
                puVar18 = &field_768;
                uVar31 = (&m_bodyList)->end();
                puVar18->resize(uVar31);
                bVar1 = param_1->g1();
                if (bVar1 != 0) {
                    uVar30 = (uint)bVar1;
                    do {
                        bVar1 = param_1->g1();
                        cVar3 = param_1->g1s();
                        uVar31 = (ulong)bVar1;
                        pVVar23 = (Vector3T<float>*)eastl::vector<math::Vector3T<float>, eastl::allocator>::operator[](
                            (vector<math::Vector3T<float>, eastl::allocator>*)puVar18, uVar31);
                        pfVar19 = (float*)math::Vector3T<float>::operator[](pVVar23, 0);
                        *pfVar19 = (float)(int)cVar3;
                        cVar3 = param_1->g1s();
                        pVVar23 = (Vector3T<float>*)eastl::vector<math::Vector3T<float>, eastl::allocator>::operator[](
                            (vector<math::Vector3T<float>, eastl::allocator>*)puVar18, uVar31);
                        pfVar19 = (float*)math::Vector3T<float>::operator[](pVVar23, 1);
                        *pfVar19 = (float)(int)cVar3;
                        cVar3 = param_1->g1s();
                        pVVar23 = (Vector3T<float>*)eastl::vector<math::Vector3T<float>, eastl::allocator>::operator[](
                            (vector<math::Vector3T<float>, eastl::allocator>*)puVar18, uVar31);
                        pfVar19 = (float*)math::Vector3T<float>::operator[](pVVar23, 2);
                        *pfVar19 = (float)(int)cVar3;
                        uVar30 = uVar30 - 1;
                    } while (uVar30 != 0);
                }
                break;
            case 123:
                uVar5 = param_1->g2();
                m_overlayHeight = (uint)uVar5;
                break;
            case 125:
                cVar3 = param_1->g1s();
                field_1052 = (float)(int)cVar3;
                break;
            case 127:
                uVar5 = param_1->g2();
                m_baseAnimationSet = (uint)uVar5;
                break;
            case 128:
                bVar1 = param_1->g1();
                puVar22 = (undefined*)MoveSpeed::GetByID((uint)bVar1);
                field_1056 = puVar22;
                break;
            case 134:
                uVar5 = param_1->g2();
                uVar30 = (uint)uVar5;
                if (uVar5 == 65535) {
                    uVar30 = 4294967295;
                }
                m_backgroundSoundReady = uVar30;
                uVar5 = param_1->g2();
                uVar30 = (uint)uVar5;
                if (uVar5 == 65535) {
                    uVar30 = 4294967295;
                }
                m_backgroundSoundCrawl = uVar30;
                uVar5 = param_1->g2();
                uVar30 = (uint)uVar5;
                if (uVar5 == 65535) {
                    uVar30 = 4294967295;
                }
                m_backgroundSoundWalk = uVar30;
                uVar5 = param_1->g2();
                uVar30 = (uint)uVar5;
                if (uVar5 == 65535) {
                    uVar30 = 4294967295;
                }
                m_backgroundSoundRun = uVar30;
                bVar1 = param_1->g1();
                m_backgroundSoundRange = (uint)bVar1;
                bVar34 = true;
                if (((m_backgroundSoundReady == 4294967295) && (m_backgroundSoundCrawl == 4294967295)) &&
                    (m_backgroundSoundWalk == 4294967295)) {
                    bVar34 = m_backgroundSoundRun != 4294967295;
                }
                m_hasBackgroundMovementSound = bVar34;
                break;
            case 137:
                uVar5 = param_1->g2();
                field_496 = (uint)uVar5;
                puVar18 = &field_472;
                cVar3 = puVar18->empty();
                if (cVar3 != '\0') {
                    uVar31 = 0;
                    puVar18->set_max_size(6, 0);
                    do {
                        puVar15 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)puVar18, uVar31);
                        *puVar15 = 4294967295;
                        uVar31 = uVar31 + 1;
                    } while (uVar31 != 6);
                }
                uVar30 = field_496;
                uVar31 = 1;
            LAB_100502c71:
                puVar21 =
                    (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_472, uVar31);
                *puVar21 = uVar30;
                break;
            case 138:
                uVar13 = param_1->gSmart2or4s();
                m_icon = uVar13;
                break;
            case 139:
                uVar13 = param_1->gSmart2or4s();
                field_672 = uVar13;
                break;
            case 140:
                bVar1 = param_1->g1();
                m_backgroundSoundVolume = (uint)bVar1;
                break;
            case 141:
                m_familiar = 1;
                break;
            case 142:
                uVar5 = param_1->g2();
                field_1068 = (uint)uVar5;
                break;
            case 143:
                m_alwaysOnBottom = 1;
            }
            break;
        case 44:
            uVar5 = param_1->g2();
            uVar30 = 0;
            if (uVar5 != 0) {
                uVar29 = (uint)uVar5;
                do {
                    uVar30 = uVar30 + 1;
                    bVar34 = 1 < uVar29;
                    uVar29 = uVar29 >> 1;
                } while (bVar34);
            }
            (&field_872, (ulong)uVar30, 0)->set_max_size();
            if (uVar30 != 0) {
                uVar31 = 0;
                uVar29 = 0;
                do {
                    uVar14 = 1 << ((byte)uVar31 & 31) & (uint)uVar5;
                    puVar21 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_872,
                                                                              uVar31);
                    *puVar21 = -(uint)(uVar14 == 0) | uVar29;
                    uVar31 = uVar31 + 1;
                    uVar29 = (uVar29 + 1) - (uint)(uVar14 == 0);
                } while (uVar30 != uVar31);
            }
            break;
        case 45:
            uVar5 = param_1->g2();
            uVar30 = 0;
            if (uVar5 != 0) {
                uVar29 = (uint)uVar5;
                do {
                    uVar30 = uVar30 + 1;
                    bVar34 = 1 < uVar29;
                    uVar29 = uVar29 >> 1;
                } while (bVar34);
            }
            (&field_944, (ulong)uVar30, 0)->set_max_size();
            if (uVar30 != 0) {
                uVar31 = 0;
                uVar29 = 0;
                do {
                    uVar14 = 1 << ((byte)uVar31 & 31) & (uint)uVar5;
                    puVar21 = (uint*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_944,
                                                                              uVar31);
                    *puVar21 = -(uint)(uVar14 == 0) | uVar29;
                    uVar31 = uVar31 + 1;
                    uVar29 = (uVar29 + 1) - (uint)(uVar14 == 0);
                } while (uVar30 != uVar31);
            }
            break;
        case 60:
            bVar1 = param_1->g1();
            (&m_headList, (ulong)bVar1, 0)->set_max_size();
            if (bVar1 != 0) {
                uVar31 = 0;
                do {
                    uVar13 = param_1->gSmart2or4s();
                    puVar15 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)&m_headList, uVar31);
                    *puVar15 = uVar13;
                    uVar31 = uVar31 + 1;
                } while (bVar1 != uVar31);
            }
            break;
        case 93:
            field_1064 = 0;
            break;
        case 95:
            uVar5 = param_1->g2();
            m_visibleCombatLevel = (uint)uVar5;
        }
        return DataStatus::READY;
    switchD_10050316b_caseD_b3:
        sVar7 = param_1->gSmart1or2s();
        sVar8 = param_1->gSmart1or2s();
        sVar9 = param_1->gSmart1or2s();
        sVar10 = param_1->gSmart1or2s();
        sVar11 = param_1->gSmart1or2s();
        sVar12 = param_1->gSmart1or2s();
        pAVar24 = operator_new(32);
        math::AABB::AABB(pAVar24);
        puVar18 = &field_1000;
        puVar18->reset(pAVar24);
        pLVar25 = (Layout*)std::unique_ptr<math::AABB, std::default_delete<math::AABB>>::operator->(
            (unique_ptr<math::AABB, std::default_delete<math::AABB>>*)puVar18);
        pvVar26 = eastl::string::Layout::SSOBeginPtr(pLVar25, (type*)pAVar24);
        pvVar26 = pvVar26->SSOBeginPtr(pAVar24);
        *(float*)pvVar26 = (float)(int)sVar7;
        pLVar25 = (Layout*)std::unique_ptr<math::AABB, std::default_delete<math::AABB>>::operator->(
            (unique_ptr<math::AABB, std::default_delete<math::AABB>>*)puVar18);
        pvVar26 = eastl::string::Layout::SSOBeginPtr(pLVar25, (type*)pAVar24);
        pfVar19 = (float*)pvVar26->y();
        *pfVar19 = -(float)(int)sVar11;
        pLVar25 = (Layout*)std::unique_ptr<math::AABB, std::default_delete<math::AABB>>::operator->(
            (unique_ptr<math::AABB, std::default_delete<math::AABB>>*)puVar18);
        pvVar26 = eastl::string::Layout::SSOBeginPtr(pLVar25, (type*)pAVar24);
        pfVar19 = (float*)pvVar26->second();
        *pfVar19 = (float)(int)sVar9;
        pNVar27 = (NXTPixToolkit*)std::unique_ptr<math::AABB, std::default_delete<math::AABB>>::operator->(
            (unique_ptr<math::AABB, std::default_delete<math::AABB>>*)puVar18);
        pLVar25 = (Layout*)pNVar27->GetScreen();
        pvVar26 = eastl::string::Layout::SSOBeginPtr(pLVar25, (type*)pAVar24);
        *(float*)pvVar26 = (float)(int)sVar10;
        pNVar27 = (NXTPixToolkit*)std::unique_ptr<math::AABB, std::default_delete<math::AABB>>::operator->(
            (unique_ptr<math::AABB, std::default_delete<math::AABB>>*)puVar18);
        this_00 = (Vector2T<int>*)pNVar27->GetScreen();
        pfVar19 = (float*)this_00->y();
        *pfVar19 = -(float)(int)sVar8;
        pNVar27 = (NXTPixToolkit*)std::unique_ptr<math::AABB, std::default_delete<math::AABB>>::operator->(
            (unique_ptr<math::AABB, std::default_delete<math::AABB>>*)puVar18);
        this_01 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                       eastl::allocator, 0>*)pNVar27->GetScreen();
        pfVar19 =
            (float*)eastl::compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>::second(this_01);
        *pfVar19 = (float)(int)sVar12;
        pAVar24 = (AABB*)std::unique_ptr<math::AABB, std::default_delete<math::AABB>>::operator->(
            (unique_ptr<math::AABB, std::default_delete<math::AABB>>*)puVar18);
        cVar3 = pAVar24->IsValid();
        if (cVar3 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_customBounding->IsValid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "npctype/NPCType.cpp",
                      443, (char*)0);
        }
        return DataStatus::READY;
    }

    // 0x100503980, 304 bytes, placed by class name and debug map
    // NPCType::PostDecode()
    void NPCType::PostDecode() {
        undefined1* this_00;
        undefined* puVar1;
        basic_string<char, BucketAllocatorEASTL>* pbVar2;
        long lVar3;
        undefined8* puVar4;
        int iVar6;
        int iVar7;
        ulong uVar8;

        if (m_reprioritiseAttackOp == 4294967295) {
            puVar1 = (undefined*)field_24->GetAuthWrapper();
            m_reprioritiseAttackOp = (uint)(puVar1 == ModeGame::RUNESCAPE);
        }
        this_00 = &field_56;
        uVar8 = 0;
        do {
            iVar7 = (int)uVar8;
            if (m_attackOpIndex == 6) {
                pbVar2 = (basic_string<char, BucketAllocatorEASTL>*)
                    std::array<eastl::fixed_string<char, 24, true, eastl::allocator>, 6ul>::operator[](
                        (array<eastl::fixed_string<char, 24, true, eastl::allocator>, 6ul>*)this_00, uVar8);
                lVar3 = field_24->GetPriority();
                puVar4 = (undefined8*)std::array<char const*, 7ul>::operator[](
                    (array<char const*, 7ul>*)&LocalisedText::ATTACK, (ulong) * (uint*)(lVar3 + 8));
                iVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::compare(pbVar2, (char*)*puVar4);
                if (iVar6 != 0)
                    goto LAB_100503a19;
                m_attackOpIndex = iVar7;
            } else {
            LAB_100503a19:
                if (m_examineOpIndex == 6) {
                    pbVar2 = (basic_string<char, BucketAllocatorEASTL>*)
                        std::array<eastl::fixed_string<char, 24, true, eastl::allocator>, 6ul>::operator[](
                            (array<eastl::fixed_string<char, 24, true, eastl::allocator>, 6ul>*)this_00, uVar8);
                    lVar3 = field_24->GetPriority();
                    puVar4 = (undefined8*)std::array<char const*, 7ul>::operator[](
                        (array<char const*, 7ul>*)&LocalisedText::EXAMINE, (ulong) * (uint*)(lVar3 + 8));
                    iVar6 = eastl::basic_string<char, BucketAllocatorEASTL>::compare(pbVar2, (char*)*puVar4);
                    if (iVar6 == 0) {
                        m_examineOpIndex = iVar7;
                        goto LAB_1005039d0;
                    }
                }
                if (m_firstUniqueOpIndex == 6) {
                    std::array<eastl::fixed_string<char, 24, true, eastl::allocator>, 6ul>::operator[](
                        (array<eastl::fixed_string<char, 24, true, eastl::allocator>, 6ul>*)this_00, uVar8);
                    if (eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true,
                                                                                eastl::allocator>>::empty() == '\0') {
                        m_firstUniqueOpIndex = iVar7;
                    }
                }
            }
        LAB_1005039d0:
            uVar8 = uVar8 + 1;
            if (uVar8 == 6) {
                return;
            }
        } while (true);
    }

    // 0x100503ab0, 272 bytes, placed by class name and debug map
    // NPCType::GetBodyModels(graphics::RT7Core*, AssetBuilder&, BuildRequest<graphics::Model, BuildModelMain>&, NPCTypeCustomisation const*, PlayerVarDomain const*, ConfigProvider const*)
    undefined* NPCType::GetBodyModels(RT7Core* param_1, AssetBuilder* param_2, BuildRequest* param_3,
                                      NPCTypeCustomisation* param_4, PlayerVarDomain* param_5,
                                      ConfigProvider* param_6) {
        char cVar1;
        NPCType* this_00;
        undefined* puVar3;
        shared_ptr<NPCType> local_68[16];
        undefined1 local_31;

        cVar1 = (&field_1072)->empty();
        if (((cVar1 == '\0') && (param_5 != (PlayerVarDomain*)0)) && (param_6 != (ConfigProvider*)0)) {
            GetMultiNPC((NPCType*)local_68, (bool*)this, (PlayerVarDomain*)&local_31, (ConfigProvider*)param_5);
            if (local_68->operator_cast_to_bool()) {
                this_00 = (NPCType*)shared_ptr<NPCType>::operator->(local_68);
                puVar3 = (undefined*)GetBodyModels(this_00, param_1, param_2, param_3, param_4, param_5, param_6);
            } else {
                puVar3 = DataStatus::NOTLOADED;
            }
            local_68->~shared_ptr();
        } else {
            puVar3 = (undefined*)GetModel(this, 0, param_1, param_2, param_3, &m_bodyList, param_4, param_6);
        }
        return puVar3;
    }

    // 0x100503bc0, 384 bytes, placed by class name and debug map
    // NPCType::GetMultiNPC(bool&, PlayerVarDomain const*, ConfigProvider const&)
    NPCType* NPCType::GetMultiNPC(bool* param_1, PlayerVarDomain* param_2, ConfigProvider* param_3) {
        Array<VarValue, eastl::allocator>* this_00;
        NPCType* pNVar1;
        int iVar3;
        int iVar4;
        undefined8 uVar5;
        VarValue* this_01;
        int* piVar6;
        long lVar7;
        shared_ptr* psVar8;
        shared_ptr* extraout_RDX;
        BaseTemplateConfigTypeList<NPCType>* this_02;
        ConfigProvider* in_R8;
        enable_shared_from_this<PathingEntity> local_48[16];

        *(undefined1*)&param_2->field_0 = 0;
        this_00 = (Array<VarValue, eastl::allocator>*)(param_1 + 1072);
        if ((this_00->empty() != '\0') || (param_3 == (ConfigProvider*)0)) {
            local_48->shared_from_this();
            pNVar1 = (NPCType*)this;
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>((shared_ptr*)(NPCType*)this,
                                                                                         (jag*)local_48, extraout_RDX);
            local_48->~shared_ptr();
            return pNVar1;
        }
        if (*(int*)(param_1 + 1100) == -1) {
            if (*(int*)(param_1 + 1096) != -1) {
                uVar5 = in_R8->GetVarType(VarDomainType::PLAYER, *(int*)(param_1 + 1096));
                this_01 = (VarValue*)(*(code*)param_3->field_0[2])(param_3, uVar5);
                iVar3 = this_01->GetInt();
                goto LAB_100503c80;
            }
        LAB_100503cc7:
            lVar7 = this_00->end();
            piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, lVar7 - 1);
            iVar3 = *piVar6;
            if (iVar3 == -1) {
            LAB_100503cf9:
                *(undefined1*)&param_2->field_0 = 1;
                psVar8 = (shared_ptr*)&NullNpcType;
                goto LAB_100503d0b;
            }
            this_02 = *(BaseTemplateConfigTypeList<NPCType>**)(param_1 + 24);
        } else {
            uVar5 = in_R8->GetVarBitType(*(int*)(param_1 + 1100));
            iVar3 = (*(code*)param_3->field_0[4])(param_3, uVar5);
        LAB_100503c80:
            if ((iVar3 < 0) || (iVar4 = this_00->end(), iVar4 + -1 <= iVar3))
                goto LAB_100503cc7;
            piVar6 =
                (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, (long)iVar3);
            if (*piVar6 == -1)
                goto LAB_100503cf9;
            this_02 = *(BaseTemplateConfigTypeList<NPCType>**)(param_1 + 24);
            piVar6 =
                (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_00, (long)iVar3);
            iVar3 = *piVar6;
        }
        psVar8 = (shared_ptr*)this_02->List(iVar3, 0);
    LAB_100503d0b:
        pNVar1 = (NPCType*)this;
        new ((NPCType*)this) shared_ptr<oldscape::dash3d::Decor>(psVar8);
        return pNVar1;
    }

    // 0x100503d40, 2272 bytes, placed by class name and debug map
    // NPCType::GetModel(NPCType::ModelType, graphics::RT7Core*, AssetBuilder&, BuildRequest<graphics::Model, BuildModelMain>&, Array<int, eastl::allocator> const&, NPCTypeCustomisation const*, ConfigProvider const*)
    undefined* NPCType::GetModel(
        int param_2, RT7Core* param_3, AssetBuilder* param_4, BuildRequest<graphics::Model, BuildModelMain>* param_5,
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* param_6,
        NXTPixToolkit* param_7, ConfigProvider* param_8) {
        undefined1* puVar1;
        int iVar2;
        uint uVar3;
        bool bVar4;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* pAVar5;
        char cVar6;
        bool bVar7;
        bool bVar8;
        AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>* pAVar9;
        AssetLRUHashCache<graphics::Model, BuildModelMain, 16ul, 17ul, false>* this_00;
        long lVar10;
        Js5ArchiveSettings* this_01;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_02;
        Layout* this_03;
        int* piVar11;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_04;
        int* piVar12;
        long* plVar13;
        undefined* puVar14;
        undefined** ppuVar15;
        PacketView* this_05;
        uint* puVar16;
        uint* puVar17;
        Js5ResourceProvider* this_06;
        BuildModelMain* pBVar18;
        Array<VarValue, eastl::allocator>* pAVar19;
        Array* pAVar20;
        OpenGLView* this_07;
        Array* pAVar21;
        NPCTypeList* this_08;
        Array* pAVar22;
        vector* pvVar23;
        Model* pMVar24;
        Js5ArchiveSettings* pJVar25;
        Array<int, eastl::allocator> local_140[24];
        undefined1 local_128[56];
        RT7Core* local_f0;
        shared_ptr local_e8;
        AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>* local_d8;
        int local_cc;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* local_c8;
        BuildRequest<graphics::Model, BuildModelMain>* local_c0;
        int local_b4;
        undefined1 local_b0[8];
        shared_ptr local_a8;
        NPCType* local_98;
        bool local_89;
        Js5ArchiveSettings local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_128._40_8_ = param_4;
        local_f0 = param_3;
        local_c8 = param_6;
        local_b4 = param_2;
        pAVar9 =
            (AssetLRUHashCache<graphics::Model, BuildModelMain, 128ul, 129ul, false>*)field_24->GetBodyModelCache();
        this_00 = (AssetLRUHashCache<graphics::Model, BuildModelMain, 16ul, 17ul, false>*)field_24->GetHeadModelCache();
        local_b0 = (undefined1[8])(long)field_32;
        local_98 = this;
        if (param_7 != (NXTPixToolkit*)0) {
            lVar10 = param_7->end();
            local_b0 = (undefined1[8])((ulong)local_b0 | lVar10 << 16);
        }
        if (local_b4 == 0) {
            pAVar9->UpdateLoadingAssetList(5);
            cVar6 = pAVar9->IsLoadingAsset((ulonglong)local_b0);
            if (cVar6 == '\0') {
                pJVar25 = (Js5ArchiveSettings*)local_b0;
                this_01 =
                    (Js5ArchiveSettings*)LRUHashCache<graphics::Model, 128ul, 129ul, false, unsigned long long>::Find(
                        (ulonglong*)pAVar9);
                goto LAB_100503e40;
            }
        LAB_100503f5a:
            ppuVar15 = &DataStatus::NOTLOADED;
        } else {
            this_00->UpdateLoadingAssetList(5);
            cVar6 = this_00->IsLoadingAsset((ulonglong)local_b0);
            if (cVar6 != '\0')
                goto LAB_100503f5a;
            pJVar25 = (Js5ArchiveSettings*)local_b0;
            this_01 = (Js5ArchiveSettings*)LRUHashCache<graphics::Model, 16ul, 17ul, false, unsigned long long>::Find(
                (ulonglong*)this_00);
        LAB_100503e40:
            bVar7 = this_01->operator_cast_to_bool();
            if (bVar7) {
                param_5->SetConstructedObj(this_01);
                pJVar25 = this_01;
            }
            cVar6 = param_5->IsTaskDone();
            if ((cVar6 == '\0') && (cVar6 = param_5->IsEmpty(), cVar6 == '\0'))
                goto LAB_100503f5a;
            cVar6 = param_5->IsEmpty();
            if (cVar6 != '\0') {
                cVar6 = graphics::Model::IsReadyToConstruct(local_f0);
                if (cVar6 == '\0')
                    goto LAB_100503f5a;
                Array<int, eastl::allocator>::Array(local_140);
                if (param_7 != (NXTPixToolkit*)0) {
                    this_02 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                                  param_7->GetScreen();
                    cVar6 = eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(this_02);
                    if (cVar6 == '\0') {
                        this_03 = (Layout*)param_7->GetScreen();
                        piVar11 = (int*)eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(this_03);
                        this_04 =
                            (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)param_7->GetScreen();
                        piVar12 =
                            (int*)eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_04);
                        new (&local_88) Array<int, eastl::allocator>(piVar11, piVar12);
                        local_c8 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                          std::default_delete<LoadingScreenScript::AnimLayer>>,
                                          eastl::allocator>*)local_140;
                        pJVar25 = &local_88;
                        Array<int, eastl::allocator>::operator=((Array<int, eastl::allocator>*)local_c8,
                                                                (Array*)pJVar25);
                        local_88.~Array();
                    }
                }
                pAVar5 = local_c8;
                local_128._48_8_ = this_00;
                local_d8 = pAVar9;
                piVar11 = (int*)local_c8->data();
                piVar12 = (int*)pAVar5->end();
                bVar4 = true;
                bVar7 = true;
                bVar8 = false;
                for (; local_c0 = param_5, piVar11 != piVar12; piVar11 = piVar11 + 1) {
                    iVar2 = *piVar11;
                    if (iVar2 != -1) {
                        plVar13 = (long*)local_98->field_24->GetOutputType();
                        pJVar25 = Js5Archive::JS5_MODELSRT7;
                        puVar14 = (undefined*)(**(code**)(*plVar13 + 48))(plVar13, Js5Archive::JS5_MODELSRT7, iVar2, 0,
                                                                          Priority::HIGH, 1);
                        if (puVar14 == DataStatus::READY) {
                            bVar7 = bVar4;
                        } else {
                            bVar7 = false;
                        }
                        bVar8 = true;
                        bVar4 = bVar7;
                    }
                    param_5 = local_c0;
                }
                if (bVar8) {
                    if (!bVar7) {
                        ppuVar15 = &DataStatus::NOTLOADED;
                        goto LAB_100503fe4;
                    }
                    local_cc = 4096;
                    new (&local_88) eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>();
                    pAVar5 = local_c8;
                    this_05 = (PacketView*)local_c8->end();
                    local_88.reserve((ulong)this_05);
                    puVar16 = (uint*)pAVar5->data();
                    puVar17 = (uint*)pAVar5->end();
                    if (puVar16 != puVar17) {
                        do {
                            uVar3 = *puVar16;
                            if (uVar3 != 4294967295) {
                                new (local_128) PacketView();
                                this_06 = (Js5ResourceProvider*)local_98->field_24->GetOutputType();
                                this_06->GetFile(local_128, Js5Archive::JS5_MODELSRT7, uVar3, 0,
                                                 (Priority*)Priority::HIGH, true, false, false);
                                this_05 = (PacketView*)local_128;
                                eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>::push_back(
                                    (PacketView*)&local_88);
                                local_128->~PacketView();
                            }
                            puVar16 = puVar16 + 1;
                        } while (puVar16 != puVar17);
                    }
                    MakeSharedPool<graphics::Model, 3072>::MakeShared<>(
                        (shared_ptr*)local_128, (MakeSharedPool<graphics::Model, 3072>*)this_05);
                    pMVar24 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)local_128);
                    iVar2 = local_b4;
                    param_5 = local_c0;
                    pAVar9 = local_d8;
                    pMVar24->SetSourceModelIDs(local_c8);
                    local_e8._0_1_ = 4;
                    local_89 = true;
                    bucket_make_shared<BuildModelMain, int, graphics::ModelConstructedState, bool, graphics::RT7Core*&,
                                       eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>,
                                       shared_ptr<graphics::Model>&>(
                        (jag*)(local_b0 + 8), &local_cc, (ModelConstructedState*)&local_e8, &local_89, &local_f0,
                        (fixed_vector*)&local_88, (shared_ptr*)local_128);
                    if ((param_7 != (NXTPixToolkit*)0) && (iVar2 == 0)) {
                        pBVar18 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                            (shared_ptr<BuildModelMain>*)(local_b0 + 8));
                        pvVar23 = (vector*)param_7->GetMaterial();
                        pBVar18->SetScale(pvVar23);
                        pBVar18 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                            (shared_ptr<BuildModelMain>*)(local_b0 + 8));
                        pvVar23 = (vector*)param_7->GetOrigin();
                        pBVar18->SetRotation(pvVar23);
                        pBVar18 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                            (shared_ptr<BuildModelMain>*)(local_b0 + 8));
                        pvVar23 = (vector*)param_7->GetPixelBuffer();
                        pBVar18->SetTranslation(pvVar23);
                    }
                    if (param_7 != (NXTPixToolkit*)0) {
                        pBVar18 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                            (shared_ptr<BuildModelMain>*)(local_b0 + 8));
                        pvVar23 = (vector*)param_7->GetImmediateThreadPool();
                        pBVar18->SetModelRecolour(pvVar23);
                        pBVar18 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                            (shared_ptr<BuildModelMain>*)(local_b0 + 8));
                        pvVar23 = (vector*)param_7->GetWorld();
                        pBVar18->SetModelRematerial(pvVar23);
                    }
                    if (iVar2 == 0) {
                        pBVar18 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                            (shared_ptr<BuildModelMain>*)(local_b0 + 8));
                        pBVar18->SetOffset((vector*)&local_98->field_768);
                        pBVar18 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                            (shared_ptr<BuildModelMain>*)(local_b0 + 8));
                        pBVar18->SetResize((Vector3T*)&local_98->field_972);
                    }
                    if (param_7 == (NXTPixToolkit*)0) {
                    LAB_100504278:
                        pBVar18 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                            (shared_ptr<BuildModelMain>*)(local_b0 + 8));
                        pBVar18->SetRecolor((Array*)&local_98->field_800, (Array*)&local_98->field_824);
                    } else {
                        pAVar19 = (Array<VarValue, eastl::allocator>*)param_7->GetTranslation();
                        cVar6 = pAVar19->empty();
                        if (cVar6 != '\0')
                            goto LAB_100504278;
                        pBVar18 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                            (shared_ptr<BuildModelMain>*)(local_b0 + 8));
                        puVar1 = &local_98->field_800;
                        pAVar20 = (Array*)param_7->GetTranslation();
                        pBVar18->SetCustomRecolor(puVar1, pAVar20);
                    }
                    pBVar18 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                        (shared_ptr<BuildModelMain>*)(local_b0 + 8));
                    pBVar18->SetRecolorPalette((Array*)&local_98->field_848);
                    if (param_7 == (NXTPixToolkit*)0) {
                    LAB_10050437d:
                        pBVar18 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                            (shared_ptr<BuildModelMain>*)(local_b0 + 8));
                        pBVar18->SetRematerial((Array*)&local_98->field_896, (Array*)&local_98->field_920);
                    } else {
                        if (*(char*)&param_7->field_0 != '\0') {
                            pBVar18 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                (shared_ptr<BuildModelMain>*)(local_b0 + 8));
                            pAVar20 = (Array*)param_7->GetMapSquarePointLights();
                            this_07 = (OpenGLView*)param_8->GetGraphicsDefaults();
                            pAVar21 = (Array*)this_07->GetCursorMutex();
                            param_5 = local_c0;
                            this_08 = (NPCTypeList*)param_8->GetGraphicsDefaults();
                            pAVar22 = (Array*)this_08->GetBodyModelCache();
                            pAVar9 = local_d8;
                            pBVar18->SetPlayerRecolor(pAVar20, pAVar21, pAVar22);
                        }
                        pAVar19 = (Array<VarValue, eastl::allocator>*)param_7->GetRedirectLocation();
                        cVar6 = pAVar19->empty();
                        if (cVar6 != '\0')
                            goto LAB_10050437d;
                        pBVar18 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                            (shared_ptr<BuildModelMain>*)(local_b0 + 8));
                        puVar1 = &local_98->field_896;
                        pAVar20 = (Array*)param_7->GetRedirectLocation();
                        pBVar18->SetRematerial(puVar1, pAVar20);
                    }
                    pBVar18 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                        (shared_ptr<BuildModelMain>*)(local_b0 + 8));
                    pBVar18->SetAmbientAdjust(*(ushort*)&local_98->field_984);
                    pBVar18 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                        (shared_ptr<BuildModelMain>*)(local_b0 + 8));
                    pBVar18->SetTint((int)(char)local_98->field_968, (int)(char)local_98->field_969,
                                     (int)(char)local_98->field_970, local_98->field_971);
                    pBVar18 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                        (shared_ptr<BuildModelMain>*)(local_b0 + 8));
                    pBVar18->SetExternalID(local_98->field_32);
                    new (&local_e8) shared_ptr<oldscape::dash3d::Decor>((shared_ptr*)(local_b0 + 8));
                    local_128._40_8_->SubmitJob(&local_e8);
                    local_e8.~shared_ptr();
                    if (iVar2 == 0) {
                        pAVar9->AddLoadingAsset((ulonglong)local_b0, (shared_ptr*)(local_b0 + 8));
                    } else {
                        local_128._48_8_->AddLoadingAsset((ulonglong)local_b0, (shared_ptr*)(local_b0 + 8));
                    }
                    pJVar25 = (Js5ArchiveSettings*)local_128;
                    param_5->SetObjAndTask(pJVar25, (shared_ptr*)(local_b0 + 8));
                    cVar6 = param_5->IsTaskDone();
                    puVar14 = DataStatus::NOTLOADED;
                    ((local_b0 + 8))->~shared_ptr();
                    local_128->~shared_ptr();
                    local_88.~fixed_vector();
                } else {
                    ppuVar15 = &DataStatus::READY;
                LAB_100503fe4:
                    puVar14 = *ppuVar15;
                    cVar6 = '\0';
                }
                local_140->~Array();
                if (cVar6 == '\0')
                    goto LAB_100504557;
            }
            pvVar23 = param_5->SSOBeginPtr(pJVar25);
            pMVar24 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)pvVar23);
            cVar6 = pMVar24->IsLoaded();
            if (cVar6 == '\0') {
                /* WARNING: Subroutine does not return */
                LogAssert("model.GetAsset()->IsLoaded()",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                          "npctype/NPCType.cpp",
                          776, (char*)0);
            }
            ppuVar15 = &DataStatus::READY;
        }
        puVar14 = *ppuVar15;
    LAB_100504557:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return puVar14;
    }

    // 0x100504620, 272 bytes, placed by class name and debug map
    // NPCType::GetHeadModels(graphics::RT7Core*, AssetBuilder&, BuildRequest<graphics::Model, BuildModelMain>&, NPCTypeCustomisation const*, PlayerVarDomain const*, ConfigProvider const*)
    undefined* NPCType::GetHeadModels(RT7Core* param_1, AssetBuilder* param_2, BuildRequest* param_3,
                                      NPCTypeCustomisation* param_4, PlayerVarDomain* param_5,
                                      ConfigProvider* param_6) {
        char cVar2;
        undefined* puVar4;
        NPCType* this_00;
        shared_ptr<NPCType> local_70[16];
        undefined1 local_31;

        cVar2 = (&field_1072)->empty();
        if (cVar2 == '\0') {
            GetMultiNPC((NPCType*)local_70, (bool*)this, (PlayerVarDomain*)&local_31, (ConfigProvider*)param_5);
            if (local_70->operator_cast_to_bool()) {
                this_00 = (NPCType*)shared_ptr<NPCType>::operator->(local_70);
                puVar4 = (undefined*)GetHeadModels(
                    this_00, param_1, param_2, (BuildRequest*)(Js5HTTPQueueRequest*)param_3, param_4, param_5, param_6);
            } else {
                puVar4 = DataStatus::NOTLOADED;
            }
            local_70->~shared_ptr();
        } else {
            puVar4 = (undefined*)GetModel(this, 1, param_1, param_2, param_3, &m_headList, param_4, param_6);
        }
        return puVar4;
    }

    // 0x100514fa0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.5
    void ___cxx_global_var_init_5(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&NPCType::NullNpcType) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee5290, &NPCType::NullNpcType, 4294967296);
    }

} // namespace jag::game
