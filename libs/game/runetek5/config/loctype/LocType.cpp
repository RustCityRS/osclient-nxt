// libs/game/runetek5/config/loctype/LocType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "LocType.h"

namespace jag::game {
    // 0x1000b7910: LocType::GetOpNames() const has the same machine code as oldscape::minimenu::MinimenuEntry::GetSubjectName() const

    // 0x10036da70: LocType::GetName() const has the same machine code as graphics::GeometryBatch::GetVertexDataBufferPos() const

    // 0x1005253b0
    uint8_t* LocType::MultiLocTypeCache::GetMultiLoc(shared_ptr<LocType>& locType1, const shared_ptr<LocType>& locType2,
                                                     const PlayerVarDomain* playerVarDomain,
                                                     ConfigProvider* configProvider) {
        VarDomainType* varDomainType;
        uint8_t uVar3;
        int iVar4;
        long lVar6;
        shared_ptr<VarBitType>* varBitType;
        shared_ptr<VarType>* varType;
        uint32_t extraout_var;
        uint64_t extraout_var_00;
        uint8_t* puVar7;
        optional<option::EnumOptionToggle> local_58;
        shared_ptr<VarType>* local_50;

        if (!(locType2.operator_cast_to_bool())) {
            LogAssert("baseLocType",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "loctype/LocType.cpp",
                      23, nullptr);
        }
        auto pLVar5 = locType2.operator->();
        if (!(IsMultiLoc(pLVar5))) {
            locType1 = locType2;
            return DataStatus::READY;
        }
        if (*this != locType2) {
            *this = locType2;
            local_58 = eastl::optional();
            field_48 = local_58;
            field_16->reset();
            local_50 = (shared_ptr<VarType>*)field_32;
            local_50->reset();
            if (playerVarDomain != nullptr) {
                lVar6 = (*this).operator->();
                iVar4 = *(int*)(lVar6 + 1004);
                lVar6 = (*this).operator->();
                varDomainType = VarDomainType::PLAYER;
                if (iVar4 == -1) {
                    if (*(int*)(lVar6 + 1000) != -1) {
                        lVar6 = (*this).operator->();
                        varType =
                            (shared_ptr<VarType>*)configProvider->GetVarType(varDomainType, *(int*)(lVar6 + 1000));
                        *local_50 = *varType;
                    }
                } else {
                    varBitType = (shared_ptr<VarBitType>*)configProvider->GetVarBitType(*(int*)(lVar6 + 1004));
                    *field_16 = *varBitType;
                }
            }
        }
        int local_34 = -1;
        pLVar5 = (LocType*)locType2.operator->();
        iVar4 = GetMultiLocIndex(pLVar5);
        shared_ptr<LocType>* this_00 = locType1;
        if (iVar4 < 0) {
            if (playerVarDomain != nullptr) {
                if (!(field_16->operator_cast_to_bool())) {
                    if (field_32->operator_cast_to_bool()) {
                        uVar3 = playerVarDomain->GetVarValue();
                        local_34 = ((VarValue*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar3))->GetInt();
                    }
                } else {
                    uVar3 = playerVarDomain->GetVarBitValue();
                    local_34 = (((uint32_t)extraout_var << 8) | (uint8_t)uVar3);
                }
            }
        } else {
            pLVar5 = (LocType*)locType2.operator->();
            local_34 = GetMultiLocIndex(pLVar5);
            this_00 = locType1;
        }
        uint8_t* arg1 = &field_48;
        if (*arg1 == local_34) {
            *this_00 = field_56;
        } else {
            *arg1 = local_34;
            pLVar5 = (LocType*)(*this).operator->();
            puVar7 = (uint8_t*)pLVar5->GetMultiLoc(field_56, local_34, playerVarDomain != nullptr);
            field_72 = puVar7;
            if (puVar7 == DataStatus::NOTLOADED) {
                local_58 = eastl::optional();
                this_00 = locType1;
                *arg1 = local_58;
            }
            *this_00 = field_56;
        }
        return field_72;
    }

    // 0x100525680
    uint8_t* LocType::GetMultiLoc(shared_ptr<LocType>& locType, int arg2, bool arg3) {
        Js5HTTPQueueRequest* this_00;
        bool bVar1;
        int iVar3;
        int* piVar4;
        shared_ptr<LocType>* psVar5;
        uint8_t** ppuVar6;
        uint8_t* unaff_R15;

        if (!(IsMultiLoc())) {
            LogAssert("IsMultiLoc()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "loctype/LocType.cpp",
                      1272, nullptr);
        }
        if (arg2 < 0) {
        LAB_100525730:
            iVar3 = field_976.end();
            iVar3 = iVar3 - 1;
            while (-1 < iVar3) {
                piVar4 = &field_976[(long)iVar3];
                if (*piVar4 == -1) {
                    if (arg3) {
                        locType.reset();
                        ppuVar6 = &DataStatus::MISSING;
                        goto LAB_100525757;
                    }
                    iVar3 = iVar3 - 1;
                    bVar1 = true;
                } else {
                    psVar5 = (shared_ptr<LocType>*)field_24->List(*piVar4, nullptr);
                    locType = *psVar5;
                    if (!(locType.operator_cast_to_bool())) {
                        ppuVar6 = &DataStatus::NOTLOADED;
                    } else {
                        ppuVar6 = &DataStatus::READY;
                    }
                LAB_100525757:
                    unaff_R15 = *ppuVar6;
                    bVar1 = false;
                }
                if (!bVar1) {
                    return unaff_R15;
                }
            }
        } else {
            unaff_R15 = &field_976;
            iVar3 = unaff_R15->end();
            if (iVar3 <= arg2)
                goto LAB_100525730;
            piVar4 = (int*)(*unaff_R15)[(long)arg2];
            if (*piVar4 != -1) {
                this_00 = field_24;
                piVar4 = (int*)(*unaff_R15)[(long)arg2];
                psVar5 = (shared_ptr<LocType>*)this_00->List(*piVar4, nullptr);
                locType = *psVar5;
                if (!(locType.operator_cast_to_bool())) {
                    ppuVar6 = &DataStatus::NOTLOADED;
                } else {
                    ppuVar6 = &DataStatus::READY;
                }
                goto LAB_1005257dd;
            }
        }
        locType.reset();
        ppuVar6 = &DataStatus::MISSING;
    LAB_1005257dd:
        return *ppuVar6;
    }

    // 0x100525800
    LocType::LocType(BaseTemplateConfigTypeList<LocType>* baseTemplateConfigTypeList, int arg2)
        : ConfigType<LocType>(baseTemplateConfigTypeList, arg2), MakeSharedPool<LocType, 256>(), field_56(6),
          field_512(0), m_runeTek5Only(0), m_resize(1.0, 1.0, 1.0) {
        new ((m_resize + 12)) math::Vector3T();
        new (m_pPostOffset) math::Vector3T();
        field_652 = 0;
        new (&field_656) Array<unsigned short>();
        new (&field_680) Array<unsigned short>();
        new (&field_704) Array<unsigned char>();
        new (&field_728) Array<int>();
        new (&field_752) Array<unsigned short>();
        new (&field_776) Array<unsigned short>();
        new (&field_800) Array<int>();
        field_827 = 0;
        field_828 = 0;
        m_hasParticles = 0;
        m_hillChangeType = 0;
        m_hillChangeParam = 0;
        field_840 = 64;
        field_842 = 0;
        field_844 = 0;
        field_845 = 1;
        field_846 = 1;
        field_847 = 0;
        m_minimumLODLevelOverride = 5;
        m_indoorsOverride = 0;
        field_856.unique_ptr<true, void>();
        field_864 = 1;
        m_highlightOverride = 9;
        new (&field_872) Array<graphics::VFXAttachmentInfo::RawData>();
        new (&field_896) Array<LocType::AnimationWithWeights>();
        field_920 = 1;
        m_highDetailOnly = 0;
        field_924 = 1;
        field_928 = 1;
        field_932 = 2;
        field_936 = 1;
        field_937 = 0;
        field_940 = 4294967295;
        m_wallWidth = 64;
        field_946 = false;
        field_947 = 0;
        field_948 = 4294967295;
        field_952 = 0;
        m_findable = 0;
        m_examineOnly = 0;
        field_960 = 1;
        m_mapElement = 4294967295;
        m_mapSceneIcon = 4294967295;
        field_972 = 0;
        m_mapSceneIconRotate90Offset = 0;
        field_974 = 0;
        new (&field_976) Array<int>();
        field_1000 = 4294967295;
        field_1004 = 4294967295;
        m_multiLocIndex = -1;
        new (field_1016) shared_ptr();
        long lVar1 = field_24->GetPriority();
        uint64_t* puVar2 = (uint64_t*)(*((array<char const*, 7ul>*)(unsigned long)*(unsigned int*)(lVar1 + 8)))[6];
        char* str = (char*)*puVar2;
        fixed_string<char, 16>* this_00 = &field_56[5];
        *this_00 = str;
    }

    // 0x100525d60
    uint8_t* LocType::DecodeType(PacketT<Array<unsigned char>>& arg1, unsigned int arg2) {
        uint8_t uVar1;
        uint8_t bVar2;
        char cVar3;
        unsigned short uVar4;
        uint16_t uVar5;
        short sVar6;
        short sVar7;
        short sVar8;
        short sVar9;
        short sVar10;
        short sVar11;
        uint32_t uVar12;
        int iVar13;
        unsigned int uVar14;
        uint32_t uVar15;
        uint8_t* puVar16;
        Array<int>* pAVar17;
        int* piVar18;
        fixed_string<char, _24>* pfVar19;
        float* pfVar20;
        uint16_t* puVar21;
        uint8_t* puVar22;
        fixed_string<char, 16>* this_00;
        long lVar23;
        uint32_t* puVar24;
        unsigned int* puVar25;
        AABB* pAVar26;
        Layout* pLVar27;
        Vector2T<int>* pVVar28;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* pcVar29;
        NXTPixToolkit* pNVar30;
        RawData* this_01;
        RawData* pRVar31;
        unsigned int uVar32;
        unsigned long uVar33;
        Vector3T<float>* this_03;
        unsigned int uVar34;
        unsigned long arg1_00;
        unsigned long uVar35;
        bool bVar36;
        float fVar37;

        switch (arg2) {
        case 1:
            bVar2 = arg1.g1();
            uVar33 = (unsigned long)bVar2;
            field_568.set_max_size(uVar33, 0);
            puVar22 = &field_592;
            puVar22->set_max_size(uVar33, 0);
            if (bVar2 != 0) {
                uVar35 = 0;
                do {
                    uVar1 = arg1.g1s();
                    puVar16 = &field_568[uVar35];
                    *puVar16 = uVar1;
                    bVar2 = arg1.g1();
                    pAVar17 = (Array<int>*)(*puVar22)[uVar35];
                    pAVar17->set_max_size((unsigned long)bVar2, 0);
                    if (bVar2 != 0) {
                        arg1_00 = 0;
                        do {
                            uVar12 = arg1.gSmart2or4s();
                            pAVar17 = (Array<int>*)(*puVar22)[uVar35];
                            puVar24 = (uint32_t*)(*pAVar17)[arg1_00];
                            *puVar24 = uVar12;
                            arg1_00 = arg1_00 + 1;
                        } while (bVar2 != arg1_00);
                    }
                    uVar35 = uVar35 + 1;
                } while (uVar35 != uVar33);
            }
            break;
        case 2:
            arg1.gStringCP1252ToUTF8<eastl::string>(&field_480, false);
            break;
        default:
            if (arg2 - 30 < 5) {
                pfVar19 = &field_56[(unsigned long)(arg2 - 30)];
                arg1.gStringCP1252ToUTF8<eastl::fixed_string<char, 24>>(*pfVar19, false);
                return DataStatus::READY;
            }
            switch (arg2) {
            case 39:
                cVar3 = arg1.g1s();
                field_842 = cVar3 * 5;
                break;
            case 40:
                bVar2 = arg1.g1();
                uVar33 = (unsigned long)bVar2;
                field_656.set_max_size(uVar33, 0);
                field_680.set_max_size(uVar33, 0);
                if (bVar2 != 0) {
                    uVar35 = 0;
                    do {
                        uVar5 = arg1.g2();
                        puVar21 = &field_656[uVar35];
                        *puVar21 = uVar5;
                        uVar5 = arg1.g2();
                        puVar21 = &field_680[uVar35];
                        *puVar21 = uVar5;
                        uVar35 = uVar35 + 1;
                    } while (uVar33 != uVar35);
                }
                break;
            case 41:
                bVar2 = arg1.g1();
                uVar33 = (unsigned long)bVar2;
                field_752.set_max_size(uVar33, 0);
                field_776.set_max_size(uVar33, 0);
                if (bVar2 != 0) {
                    uVar35 = 0;
                    do {
                        uVar5 = arg1.g2();
                        puVar21 = &field_752[uVar35];
                        *puVar21 = uVar5;
                        uVar5 = arg1.g2();
                        puVar21 = &field_776[uVar35];
                        *puVar21 = uVar5;
                        uVar35 = uVar35 + 1;
                    } while (uVar33 != uVar35);
                }
                break;
            case 42:
                bVar2 = arg1.g1();
                field_704.set_max_size((unsigned long)bVar2, 0);
                if (bVar2 != 0) {
                    uVar33 = 0;
                    do {
                        uVar1 = arg1.g1();
                        puVar22 = &field_704[uVar33];
                        *puVar22 = uVar1;
                        uVar33 = uVar33 + 1;
                    } while (bVar2 != uVar33);
                }
                break;
            default:
                uVar34 = arg2 - 65;
                if (uVar34 < 3) {
                    uVar4 = arg1.g2();
                    fVar37 = (float)uVar4 * 0.0078125f;
                    this_03 = (Vector3T<float>*)m_resize;
                    goto LAB_100526018;
                }
                switch (arg2) {
                case 69:
                    cVar3 = arg1.g1();
                    field_946 = cVar3 == '\x01';
                    break;
                case 70:
                case 72:
                    sVar6 = arg1.g2s();
                    iVar13 = (int)sVar6 << 2;
                    this_03 = (Vector3T<float>*)(m_resize + 12);
                    uVar34 = arg2 - 70;
                LAB_10052623b:
                    fVar37 = (float)iVar13;
                    goto LAB_100526018;
                case 71:
                    sVar6 = arg1.g2s();
                    fVar37 = (float)(sVar6 * -4);
                    this_03 = (Vector3T<float>*)(m_resize + 12);
                    uVar34 = 1;
                LAB_100526018:
                    pfVar20 = (float*)(*this_03)[uVar34];
                    *pfVar20 = fVar37;
                    break;
                case 73:
                    field_937 = 1;
                    break;
                case 74:
                    field_947 = 1;
                    break;
                case 75:
                    bVar2 = arg1.g1();
                    field_948 = (unsigned int)bVar2;
                    break;
                default:
                    uVar34 = arg2 - 150;
                    if (uVar34 < 5) {
                        pfVar19 = &field_56[(unsigned long)uVar34];
                        arg1.gStringCP1252ToUTF8<eastl::fixed_string<char, 24>>(*pfVar19, false);
                        cVar3 = field_24->IsMembersServer();
                        if (!cVar3) {
                            this_00 = &field_56[(unsigned long)uVar34];
                            *this_00 = "";
                            return DataStatus::READY;
                        }
                        return DataStatus::READY;
                    }
                    switch (arg2) {
                    case 160:
                        bVar2 = arg1.g1();
                        field_544.set_max_size((unsigned long)bVar2, 0);
                        if (bVar2 != 0) {
                            uVar33 = 0;
                            do {
                                uVar4 = arg1.g2();
                                puVar25 = (unsigned int*)field_544[uVar33];
                                *puVar25 = (unsigned int)uVar4;
                                uVar33 = uVar33 + 1;
                            } while (bVar2 != uVar33);
                        }
                        break;
                    default:
                        if (arg2 - 190 < 6) {
                            puVar22 = &field_520;
                            cVar3 = puVar22->empty();
                            if (cVar3) {
                                uVar33 = 0;
                                puVar22->set_max_size(6, 0);
                                do {
                                    puVar24 = (uint32_t*)(*puVar22)[uVar33];
                                    *puVar24 = 4294967295;
                                    uVar33 = uVar33 + 1;
                                } while (uVar33 != 6);
                            }
                            uVar4 = arg1.g2();
                            puVar25 = (unsigned int*)(*puVar22)[(unsigned long)(arg2 - 190)];
                            *puVar25 = (unsigned int)uVar4;
                        } else {
                            switch (arg2) {
                            case 196:
                                uVar1 = arg1.g1();
                                m_minimumLODLevelOverride = uVar1;
                                break;
                            case 197:
                                uVar1 = arg1.g1();
                                m_indoorsOverride = uVar1;
                                break;
                            case 198:
                                m_runeTek5Only = 1;
                                break;
                            case 199:
                                field_846 = 0;
                                break;
                            case 200:
                                m_highDetailOnly = 1;
                                break;
                            case 201:
                                sVar6 = arg1.gSmart1or2s();
                                sVar7 = arg1.gSmart1or2s();
                                sVar8 = arg1.gSmart1or2s();
                                sVar9 = arg1.gSmart1or2s();
                                sVar10 = arg1.gSmart1or2s();
                                sVar11 = arg1.gSmart1or2s();
                                pAVar26 = (AABB*)operator new(32);
                                new (pAVar26) math::AABB();
                                puVar22 = &field_856;
                                puVar22->reset(pAVar26);
                                pLVar27 = (Layout*)(*puVar22).operator->();
                                pLVar27 = (Layout*)pLVar27->SSOBeginPtr();
                                pfVar20 = (float*)pLVar27->SSOBeginPtr();
                                *pfVar20 = (float)(int)sVar6;
                                pLVar27 = (Layout*)(*puVar22).operator->();
                                pVVar28 = (Vector2T<int>*)pLVar27->SSOBeginPtr();
                                pfVar20 = (float*)pVVar28->y();
                                *pfVar20 = -(float)(int)sVar10;
                                pLVar27 = (Layout*)(*puVar22).operator->();
                                pcVar29 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)
                                              pLVar27->SSOBeginPtr();
                                pfVar20 = (float*)pcVar29->second();
                                *pfVar20 = (float)(int)sVar8;
                                pNVar30 = (NXTPixToolkit*)(*puVar22).operator->();
                                pLVar27 = (Layout*)pNVar30->GetScreen();
                                pfVar20 = (float*)pLVar27->SSOBeginPtr();
                                *pfVar20 = (float)(int)sVar9;
                                pNVar30 = (NXTPixToolkit*)(*puVar22).operator->();
                                pVVar28 = (Vector2T<int>*)pNVar30->GetScreen();
                                pfVar20 = (float*)pVVar28->y();
                                *pfVar20 = -(float)(int)sVar7;
                                pNVar30 = (NXTPixToolkit*)(*puVar22).operator->();
                                pcVar29 = (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)
                                              pNVar30->GetScreen();
                                pfVar20 = (float*)pcVar29->second();
                                *pfVar20 = (float)(int)sVar11;
                                pAVar26 = (AABB*)(*puVar22).operator->();
                                cVar3 = pAVar26->IsValid();
                                if (!cVar3) {
                                    LogAssert("m_customBounding->IsValid()",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "game/runetek5/config/loctype/LocType.cpp",
                                              547, nullptr);
                                }
                                break;
                            case 202:
                                bVar2 = arg1.g1();
                                m_highlightOverride = (unsigned int)bVar2;
                                break;
                            case 203:
                                field_864 = 0;
                                break;
                            case 204:
                                bVar2 = arg1.g1();
                                puVar22 = &field_872;
                                puVar22->set_max_size((unsigned long)bVar2, 0);
                                this_01 = (RawData*)puVar22->data();
                                pRVar31 = (RawData*)puVar22->end();
                                for (; this_01 != pRVar31; this_01 = (RawData*)&this_01[1].field_8) {
                                    this_01->Decode(arg1);
                                }
                                break;
                            default:
                                (logger::default_logger())
                                    ->Log(false, 2,
                                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                          "runetek5/config/loctype/LocType.cpp",
                                          607, "Unrecognised .loc config code: %u", arg2);
                                break;
                            case 249:
                                DecodeParams(arg1);
                                break;
                            case 250:
                                lVar23 = MakeLocationSoundData();
                                bVar2 = arg1.g1();
                                *(unsigned int*)(lVar23 + 28) = (unsigned int)bVar2;
                                break;
                            case 251:
                                lVar23 = MakeLocationSoundData();
                                cVar3 = arg1.g1();
                                *(bool*)(lVar23 + 32) = cVar3 == '\x01';
                                break;
                            case 252:
                                lVar23 = MakeLocationSoundData();
                                uVar4 = arg1.g2();
                                *(float*)(lVar23 + 36) = (float)uVar4;
                                uVar4 = arg1.g2();
                                *(float*)(lVar23 + 40) = (float)uVar4;
                                uVar4 = arg1.g2();
                                *(float*)(lVar23 + 44) = (float)uVar4 * 0.001;
                                break;
                            case 253:
                                lVar23 = MakeLocationSoundData();
                                bVar2 = arg1.g1();
                                *(unsigned int*)(lVar23 + 80) = (unsigned int)bVar2;
                                break;
                            case 254:
                                lVar23 = MakeLocationSoundData();
                                cVar3 = arg1.g1();
                                *(bool*)(lVar23 + 84) = cVar3 == '\x01';
                                break;
                            case 255:
                                lVar23 = MakeLocationSoundData();
                                uVar4 = arg1.g2();
                                *(float*)(lVar23 + 88) = (float)uVar4;
                                uVar4 = arg1.g2();
                                *(float*)(lVar23 + 92) = (float)uVar4;
                                uVar4 = arg1.g2();
                                *(float*)(lVar23 + 96) = (float)uVar4 * 0.001;
                            }
                        }
                        break;
                    case 162:
                        m_hillChangeType = 3;
                        uVar34 = arg1.g4s();
                        m_hillChangeParam = uVar34;
                        break;
                    case 163:
                        uVar1 = arg1.g1s();
                        field_824 = uVar1;
                        uVar1 = arg1.g1s();
                        field_825 = uVar1;
                        uVar1 = arg1.g1s();
                        field_826 = uVar1;
                        uVar1 = arg1.g1s();
                        field_827 = uVar1;
                        break;
                    case 164:
                    case 165:
                    case 166:
                        sVar6 = arg1.g2s();
                        iVar13 = (int)sVar6;
                        this_03 = (Vector3T<float>*)m_pPostOffset;
                        uVar34 = arg2 - 164;
                        goto LAB_10052623b;
                    case 167:
                        uVar4 = arg1.g2();
                        field_952 = (unsigned int)uVar4;
                        break;
                    case 170:
                    case 171:
                        arg1.gSmart1or2s();
                        break;
                    case 173:
                        lVar23 = MakeLocationSoundData();
                        uVar4 = arg1.g2();
                        *(unsigned int*)(lVar23 + 20) = (unsigned int)uVar4;
                        uVar4 = arg1.g2();
                        *(unsigned int*)(lVar23 + 24) = (unsigned int)uVar4;
                        break;
                    case 177:
                        break;
                    case 178:
                        lVar23 = MakeLocationSoundData();
                        bVar2 = arg1.g1();
                        *(unsigned int*)(lVar23 + 8) = (unsigned int)bVar2;
                        break;
                    case 179:
                        lVar23 = MakeLocationSoundData();
                        *(uint8_t*)(lVar23 + 16) = 1;
                        break;
                    case 186:
                        bVar2 = arg1.g1();
                        field_960 = (unsigned int)bVar2;
                        break;
                    case 188:
                        m_findable = 1;
                        break;
                    case 189:
                        field_828 = 1;
                    }
                    break;
                case 77:
                case 92:
                    uVar4 = arg1.g2();
                    uVar34 = (unsigned int)uVar4;
                    if (uVar4 == 65535) {
                        uVar34 = 4294967295;
                    }
                    field_1004 = uVar34;
                    uVar4 = arg1.g2();
                    uVar34 = (unsigned int)uVar4;
                    uVar12 = 4294967295;
                    if (uVar4 == 65535) {
                        uVar34 = 4294967295;
                    }
                    field_1000 = uVar34;
                    if (arg2 == 92) {
                        uVar12 = arg1.gSmart2or4s();
                    }
                    uVar4 = arg1.gSmart1or2();
                    puVar22 = &field_976;
                    uVar33 = 0;
                    puVar22->set_max_size((unsigned long)(uVar4 + 2), 0);
                    do {
                        uVar15 = arg1.gSmart2or4s();
                        puVar24 = (uint32_t*)(*puVar22)[uVar33];
                        *puVar24 = uVar15;
                        uVar33 = uVar33 + 1;
                    } while (uVar4 + 1 != uVar33);
                    puVar24 = (uint32_t*)(*puVar22)[(unsigned long)(uVar4 + 1)];
                    *puVar24 = uVar12;
                    break;
                case 78:
                    puVar25 = (unsigned int*)MakeLocationSoundData();
                    uVar4 = arg1.g2();
                    *puVar25 = (unsigned int)uVar4;
                    bVar2 = arg1.g1();
                    puVar25[1] = (unsigned int)bVar2;
                    break;
                case 79:
                    lVar23 = MakeLocationSoundData();
                    uVar4 = arg1.g2();
                    *(unsigned int*)(lVar23 + 48) = (unsigned int)uVar4;
                    uVar4 = arg1.g2();
                    *(unsigned int*)(lVar23 + 52) = (unsigned int)uVar4;
                    bVar2 = arg1.g1();
                    *(unsigned int*)(lVar23 + 4) = (unsigned int)bVar2;
                    bVar2 = arg1.g1();
                    ((lVar23 + 56))->set_max_size((unsigned long)bVar2, 0);
                    if (bVar2 != 0) {
                        uVar33 = 0;
                        do {
                            uVar4 = arg1.g2();
                            puVar25 = (unsigned int*)(*((lVar23 + 56)))[uVar33];
                            *puVar25 = (unsigned int)uVar4;
                            uVar33 = uVar33 + 1;
                        } while (bVar2 != uVar33);
                    }
                    break;
                case 81:
                    m_hillChangeType = 2;
                    bVar2 = arg1.g1();
                    m_hillChangeParam = (unsigned int)bVar2 << 8;
                    break;
                case 82:
                    field_844 = 1;
                    break;
                case 88:
                    field_845 = 0;
                    break;
                case 89:
                    field_920 = 0;
                    break;
                case 91:
                    field_512 = 1;
                    break;
                case 93:
                    m_hillChangeType = 3;
                    uVar4 = arg1.g2();
                    m_hillChangeParam = (unsigned int)uVar4;
                    break;
                case 94:
                    m_hillChangeType = 4;
                    break;
                case 95:
                    m_hillChangeType = 5;
                    sVar6 = arg1.g2s();
                    m_hillChangeParam = (int)sVar6;
                    break;
                case 97:
                    field_972 = 1;
                    break;
                case 98:
                    m_hasParticles = 1;
                    break;
                case 101:
                    uVar1 = arg1.g1();
                    m_mapSceneIconRotate90Offset = uVar1;
                    break;
                case 102:
                    uVar4 = arg1.g2();
                    m_mapSceneIcon = (unsigned int)uVar4;
                    break;
                case 103:
                    break;
                case 104:
                    lVar23 = MakeLocationSoundData();
                    bVar2 = arg1.g1();
                    *(unsigned int*)(lVar23 + 12) = (unsigned int)bVar2;
                    break;
                case 105:
                    field_974 = 1;
                    break;
                case 106:
                    bVar2 = arg1.g1();
                    puVar22 = &field_896;
                    uVar33 = (unsigned long)bVar2;
                    uVar34 = 0;
                    puVar22->set_max_size(uVar33, 0);
                    if (bVar2 != 0) {
                        uVar35 = 0;
                        uVar34 = 0;
                        do {
                            uVar12 = arg1.gSmart2or4s();
                            puVar24 = (uint32_t*)(*puVar22)[uVar35];
                            *puVar24 = uVar12;
                            bVar2 = arg1.g1();
                            lVar23 = (*puVar22)[uVar35];
                            *(unsigned int*)(lVar23 + 4) = (unsigned int)bVar2;
                            uVar34 = uVar34 + bVar2;
                            uVar35 = uVar35 + 1;
                        } while (uVar33 != uVar35);
                    }
                    if (uVar33 != 0) {
                        uVar35 = 0;
                        do {
                            lVar23 = (*puVar22)[uVar35];
                            iVar13 = *(int*)(lVar23 + 4);
                            lVar23 = (*puVar22)[uVar35];
                            *(unsigned int*)(lVar23 + 4) = (unsigned int)(iVar13 * 65535) / uVar34;
                            uVar35 = uVar35 + 1;
                        } while (uVar33 != uVar35);
                    }
                    break;
                case 107:
                    uVar4 = arg1.g2();
                    m_mapElement = (unsigned int)uVar4;
                }
                break;
            case 44:
                uVar4 = arg1.g2();
                uVar34 = (unsigned int)uVar4;
                if (uVar4 == 0) {
                    uVar32 = 0;
                } else {
                    uVar32 = 0;
                    uVar33 = (unsigned long)(unsigned int)uVar4;
                    do {
                        uVar32 = uVar32 + 1;
                        uVar33 = uVar33 >> 1;
                        bVar36 = 1 < uVar34;
                        uVar34 = (unsigned int)uVar33;
                    } while (bVar36);
                }
                field_728.set_max_size((unsigned long)uVar32, 0);
                if (uVar32 != 0) {
                    uVar33 = 0;
                    uVar34 = 0;
                    do {
                        uVar14 = 1 << ((uint8_t)uVar33 & 31) & (unsigned int)uVar4;
                        puVar25 = &field_728[uVar33];
                        *puVar25 = -(unsigned int)(uVar14 == 0) | uVar34;
                        uVar33 = uVar33 + 1;
                        uVar34 = (uVar34 + 1) - (unsigned int)(uVar14 == 0);
                    } while (uVar32 != uVar33);
                }
                break;
            case 45:
                uVar4 = arg1.g2();
                uVar34 = (unsigned int)uVar4;
                if (uVar4 == 0) {
                    uVar32 = 0;
                } else {
                    uVar32 = 0;
                    uVar33 = (unsigned long)(unsigned int)uVar4;
                    do {
                        uVar32 = uVar32 + 1;
                        uVar33 = uVar33 >> 1;
                        bVar36 = 1 < uVar34;
                        uVar34 = (unsigned int)uVar33;
                    } while (bVar36);
                }
                field_800.set_max_size((unsigned long)uVar32, 0);
                if (uVar32 != 0) {
                    uVar33 = 0;
                    uVar34 = 0;
                    do {
                        uVar14 = 1 << ((uint8_t)uVar33 & 31) & (unsigned int)uVar4;
                        puVar25 = &field_800[uVar33];
                        *puVar25 = -(unsigned int)(uVar14 == 0) | uVar34;
                        uVar33 = uVar33 + 1;
                        uVar34 = (uVar34 + 1) - (unsigned int)(uVar14 == 0);
                    } while (uVar32 != uVar33);
                }
                break;
            case 62:
                field_652 = 1;
                break;
            case 64:
                break;
            }
            break;
        case 14:
            bVar2 = arg1.g1();
            field_924 = (unsigned int)bVar2;
            break;
        case 15:
            bVar2 = arg1.g1();
            field_928 = (unsigned int)bVar2;
            break;
        case 17:
            field_932 = 0;
        case 18:
            field_936 = 0;
            break;
        case 19:
            bVar2 = arg1.g1();
            field_940 = (unsigned int)bVar2;
            break;
        case 21:
            m_hillChangeType = 1;
            break;
        case 22:
            field_847 = 1;
            break;
        case 23:
            break;
        case 24:
            iVar13 = arg1.gSmart2or4s();
            if (iVar13 != -1) {
                field_896.set_max_size(1, 0);
                piVar18 = &field_896[0];
                *piVar18 = iVar13;
            }
            break;
        case 27:
            field_932 = 1;
            break;
        case 28:
            bVar2 = arg1.g1();
            m_wallWidth = (unsigned short)bVar2;
            break;
        case 29:
            cVar3 = arg1.g1s();
            field_840 = cVar3 + 64;
        }
        return DataStatus::READY;
    }

    // 0x100527860
    void LocType::PostDecode() {
        unsigned int uVar1;
        bool cVar2;
        int iVar3;
        char* pcVar5;
        basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>* pbVar6;
        unsigned long uVar7;
        bool bVar8;

        if (field_940 == 4294967295) {
            field_940 = 0;
            if ((field_568.end() == 1) && (pcVar5 = (char*)field_568[0], *pcVar5 == '\n')) {
                field_940 = 1;
            }
            uVar7 = 0;
            do {
                pbVar6 = &field_56[uVar7];
                cVar2 = pbVar6->empty();
                if (!cVar2) {
                    field_940 = 1;
                    uVar1 = field_940;
                    goto joined_r0x000100527908;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 != 5);
        }
        uVar1 = field_940;
    joined_r0x000100527908:
        if ((0 < (int)uVar1) || (field_960 == 0)) {
            m_findable = 1;
        }
        if (field_948 == 4294967295) {
            field_948 = (unsigned int)(field_932 != 0);
        }
        cVar2 = field_24->IsMembersServer();
        if ((!cVar2) && (field_512 != '\0')) {
            field_544.clear();
            field_56.clear();
            field_56.resize(6);
        }
        uint8_t* this_00 = &field_56;
        pbVar6 = (basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)(*this_00)[5];
        cVar2 = pbVar6->empty();
        if (!cVar2) {
            iVar3 = this_00->size();
            bVar8 = 0 < iVar3;
            if (0 < iVar3) {
                uVar7 = 0;
                do {
                    if (uVar7 != 5) {
                        pbVar6 =
                            (basic_string<char,
                                          eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true>>*)(*this_00)[uVar7];
                        cVar2 = pbVar6->empty();
                        if (!cVar2)
                            break;
                    }
                    uVar7 = uVar7 + 1;
                    iVar3 = this_00->size();
                    bVar8 = (long)uVar7 < (long)iVar3;
                } while ((long)uVar7 < (long)iVar3);
            }
            m_examineOnly = ~bVar8 & 1;
        }
        if (field_947 != '\0') {
            field_932 = 0;
            field_936 = 1;
        }
    }

    // 0x100527a90
    bool LocType::GetLocationOnFlatGround(const LocType& locType, int arg2, const HeightMap& heightMap, int arg4,
                                          unsigned int arg5, unsigned int arg6, Rotation90 rotation90,
                                          bool arg8) const {
        uint8_t* puVar2;
        bool cVar3;
        unsigned int arg4_01;
        int local_3c;
        unsigned int local_38;

        unsigned int arg3 = arg5 - 1;
        if (arg5 == 0) {
            arg3 = 0;
        }
        int iVar1 = GetGridWidth(locType, rotation90 & 255);
        unsigned int uVar5 = arg5 + iVar1 + 1;
        unsigned int arg4_00 = arg6 - 1;
        if (arg6 == 0) {
            arg4_00 = 0;
        }
        iVar1 = GetGridLength(locType, rotation90 & 255);
        unsigned int uVar4 = arg6 + iVar1 + 1;
        char local_31 = uVar4 < arg4_00;
        if (arg3 <= uVar5) {
            local_38 = arg4_00 + 1;
            do {
                iVar1 = 5;
                cVar3 = local_31;
                if (arg4_00 <= uVar4) {
                    puVar2 = (uint8_t*)heightMap.GetTileHeight(local_3c, arg4, arg3, arg4_00, arg8, 0);
                    arg4_01 = local_38;
                    if (puVar2 != DataStatus::READY)
                        goto LAB_100527bb0;
                    if (local_3c < 1)
                        goto LAB_100527bb0;
                    cVar3 = local_31;
                    while (local_3c == arg2) {
                    LAB_100527bb0:
                        do {
                            cVar3 = uVar4 < arg4_01;
                            if (uVar4 < arg4_01) {
                                iVar1 = 5;
                                if (!cVar3)
                                    goto LAB_100527b0f;
                                goto LAB_100527b49;
                            }
                            puVar2 = (uint8_t*)heightMap.GetTileHeight(local_3c, arg4, arg3, arg4_01, arg8, 0);
                            arg4_01 = arg4_01 + 1;
                        } while ((puVar2 != DataStatus::READY) || (local_3c < 1));
                    }
                    iVar1 = 1;
                }
                if (!cVar3)
                    goto LAB_100527b0f;
            LAB_100527b49:
                arg3 = arg3 + 1;
            } while (arg3 <= uVar5);
        }
        iVar1 = 2;
    LAB_100527b0f:
        return iVar1 == 2;
    }

    // 0x100527c30
    uint32_t LocType::GetGridWidth(Rotation90 rotation90) const {
        return *(uint32_t*)(field_1016 + (unsigned long)((rotation90 & 253) != 0) * 4 - 92);
    }

    // 0x100527c50
    uint32_t LocType::GetGridLength(Rotation90 rotation90) const {
        return *(uint32_t*)(field_1016 + (unsigned long)((rotation90 & 253) == 0) * 4 - 92);
    }

    // 0x100527c70
    unsigned long LocType::GetLocationHeight(const LocType& locType, const HeightMap& heightMap, int arg3,
                                             unsigned int arg4, unsigned int arg5, Rotation90 rotation90,
                                             bool arg7) const {
        uint8_t* puVar2;
        uint8_t* puVar5;
        uint8_t* puVar6;
        uint8_t* puVar7;
        int iVar8;
        int iVar10;
        long lVar11;
        long lVar12;
        int local_64;
        int local_60;
        int local_5c;
        int local_58;
        int local_54;
        uint8_t* local_50;
        long local_40;

        local_40._0_4_ = (float)arg4;
        unsigned int uVar3 = GetGridWidth(locType, rotation90 & 255);
        local_40._0_4_ = (float)uVar3 * 0.5 + (float)local_40;
        float local_34 = (float)ceil((float)local_40);
        float fVar13 = (float)::floor((float)local_40);
        local_40._0_4_ = (float)arg5;
        uVar3 = GetGridLength(locType, rotation90 & 255);
        local_40._0_4_ = (float)uVar3 * 0.5 + (float)local_40;
        uint32_t uVar14 = ceil((float)local_40);
        local_50 = (uint8_t*)(((uint64_t)local_50._4_4_ << 32) | (uint32_t)uVar14);
        float fVar15 = (float)::floor((float)local_40);
        int iVar9 = arg3;
        local_40 = (long)fVar13;
        auto puVar4 = heightMap.GetTileHeight(local_64, arg3, (int)(long)fVar13, (int)(long)fVar15, arg7, 0);
        uint8_t* puVar1 = DataStatus::READY;
        if (puVar4 != DataStatus::NOTLOADED) {
            lVar12 = (long)local_34;
            local_34 = (float)local_64;
            puVar5 = (uint8_t*)heightMap.GetTileHeight(local_60, iVar9, (int)lVar12, (int)(long)fVar15, arg7, 0);
            if (puVar5 != DataStatus::NOTLOADED) {
                lVar11 = (long)local_50._0_4_;
                local_50 = DataStatus::READY;
                puVar6 = (uint8_t*)heightMap.GetTileHeight(local_5c, iVar9, (int)lVar12, (int)lVar11, arg7, 0);
                puVar2 = DataStatus::READY;
                if (puVar6 != DataStatus::NOTLOADED) {
                    if (puVar4 != puVar1) {
                        local_34 = 0.0;
                    }
                    iVar9 = local_60;
                    if (puVar5 != local_50) {
                        iVar9 = 0;
                    }
                    local_54 = 0;
                    if (puVar6 == DataStatus::READY) {
                        local_54 = local_5c;
                    }
                    puVar7 = (uint8_t*)heightMap.GetTileHeight(local_58, arg3, (int)local_40, (int)lVar11, arg7, 0);
                    if (puVar7 != DataStatus::NOTLOADED) {
                        uVar3 = (puVar4 == puVar1) + 1;
                        if (puVar5 != local_50) {
                            uVar3 = (unsigned int)(puVar4 == puVar1);
                        }
                        iVar8 = (unsigned int)(puVar7 == DataStatus::READY) + (puVar6 == puVar2) + uVar3;
                        if (iVar8 == 0) {
                            return 0;
                        }
                        iVar10 = 0;
                        if (puVar7 == DataStatus::READY) {
                            iVar10 = local_58;
                        }
                        return (long)(iVar9 + (int)local_34 + local_54 + iVar10) / (long)iVar8 & 4294967295;
                    }
                }
            }
        }
        return 4294967295;
    }

    // 0x100527f00
    uint64_t LocType::GetHillData(Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>& arg1,
                                  Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>& arg2,
                                  const LocType& locType, const HeightMap& heightMap, int arg5, unsigned int arg6,
                                  unsigned int arg7, Rotation90 rotation90, bool arg9) const {
        int iVar1;
        unsigned long uVar2;
        uint8_t* puVar5;
        int* piVar6;
        uint64_t uVar7;
        unsigned int uVar8;
        uint32_t in_register_0000008c;
        unsigned long uVar9;
        uint8_t bVar10;
        int local_98;
        int local_94;
        Array<int, BucketAllocatorEASTL>* local_88;
        Array<int, BucketAllocatorEASTL>* local_80;
        unsigned long local_60;
        unsigned long local_58;
        uint8_t local_31;

        uint64_t local_90 = (((uint64_t)in_register_0000008c << 32) | (uint32_t)arg5);
        unsigned long local_78 = (unsigned long)arg7;
        unsigned long local_68 = (unsigned long)arg6;
        unsigned long local_48 = GetGridWidth(locType, rotation90 & 255);
        unsigned long local_40 = GetGridLength(locType, rotation90 & 255);
        unsigned int uVar3 = m_hillChangeType;
        unsigned long uVar4 = (unsigned long)uVar3;
        if ((uVar3 < 6) && ((46U >> (uVar3 & 31) & 1) != 0)) {
            uVar8 = (int)local_48 + 3;
            arg1.set_max_size((unsigned long)uVar8, 0);
            uVar3 = (int)local_40 + 3;
            local_60 = (unsigned long)uVar3;
            local_31 = uVar3 != 0;
            if (uVar8 == 0) {
                uVar4 = 0;
                goto LAB_1005280fd;
            }
            local_58 = (unsigned long)(arg7 - 1);
            uVar9 = 0;
            do {
                local_80 = &arg1[uVar9];
                uVar2 = local_60;
                local_80->set_max_size(local_60, 0);
                uVar4 = 0;
                bVar10 = local_31;
                if (uVar2 != 0) {
                    local_88 = (Array<int, BucketAllocatorEASTL>*)(((uint64_t)local_88._4_4_ << 32) |
                                                                   (uint32_t)((arg6 - 1) + (int)uVar9));
                    bVar10 = true;
                    uVar4 = 0;
                    do {
                        puVar5 = (uint8_t*)heightMap.GetTileHeight(local_98, (int)local_90, (int)local_88,
                                                                   (int)local_58 + (int)uVar4, arg9, 0);
                        iVar1 = local_98;
                        if (puVar5 == DataStatus::NOTLOADED) {
                            arg1.set_max_size(0, 0);
                            uVar4 = 1;
                            goto LAB_1005280c9;
                        }
                        piVar6 = (int*)(*local_80)[uVar4];
                        *piVar6 = iVar1;
                        uVar4 = uVar4 + 1;
                        bVar10 = uVar4 < local_60;
                    } while (local_60 != uVar4);
                    uVar4 = 0;
                }
            LAB_1005280c9:
                if ((bVar10 & 1) != 0)
                    goto LAB_1005280e4;
                uVar9 = uVar9 + 1;
            } while (uVar9 != uVar8);
            uVar4 = 2;
        LAB_1005280e4:
            if ((int)uVar4 == 2)
                goto LAB_1005280fd;
        LAB_1005282a2:
            uVar7 = 0;
        } else {
        LAB_1005280fd:
            if (((int)local_90 < 3) &&
                (uVar3 = m_hillChangeType & 4294967294, uVar4 = (unsigned long)uVar3, uVar3 == 4)) {
                uVar8 = (int)local_48 + 3;
                arg2.set_max_size((unsigned long)uVar8, 0);
                uVar3 = (int)local_40 + 3;
                local_40 = (unsigned long)uVar3;
                local_80 = (Array<int, BucketAllocatorEASTL>*)(((uint64_t)local_80._1_7_ << 8) | (uint8_t)(uVar3 != 0));
                if (uVar8 == 0) {
                    uVar4 = 0;
                } else {
                    local_68 = (unsigned long)((int)local_68 - 1);
                    local_78 = (unsigned long)((int)local_78 - 1);
                    uVar9 = 0;
                    local_48 = (unsigned long)uVar8;
                    do {
                        local_88 = &arg2[uVar9];
                        uVar2 = local_40;
                        local_88->set_max_size(local_40, 0);
                        uVar4 = 0;
                        bVar10 = (uint8_t)local_80;
                        if (uVar2 != 0) {
                            local_60 = (((uint64_t)local_60._4_4_ << 32) | (uint32_t)((int)local_68 + (int)uVar9));
                            bVar10 = true;
                            uVar4 = 0;
                            local_58 = uVar9;
                            do {
                                puVar5 = (uint8_t*)heightMap.GetTileHeight(local_94, (unsigned int)arg9 + (int)local_90,
                                                                           (int)local_60, (int)local_78 + (int)uVar4,
                                                                           true, 0);
                                iVar1 = local_94;
                                if (puVar5 == DataStatus::NOTLOADED) {
                                    arg1.set_max_size(0, 0);
                                    arg2.set_max_size(0, 0);
                                    uVar4 = 1;
                                    uVar9 = local_58;
                                    goto LAB_100528272;
                                }
                                piVar6 = (int*)(*local_88)[uVar4];
                                *piVar6 = iVar1;
                                uVar4 = uVar4 + 1;
                                bVar10 = uVar4 < local_40;
                            } while (local_40 != uVar4);
                            uVar4 = 0;
                            uVar9 = local_58;
                        LAB_100528272:
                            local_58 = uVar9;
                        }
                        if ((bVar10 & 1) != 0)
                            goto LAB_10052828f;
                        uVar9 = uVar9 + 1;
                    } while (uVar9 != local_48);
                    uVar4 = 8;
                LAB_10052828f:
                    if ((int)uVar4 != 8)
                        goto LAB_1005282a2;
                }
            }
            uVar7 = (((uint64_t)((int64_t)(uVar4 >> 8)) << 8) | (uint8_t)1);
        }
        return uVar7;
    }

    // 0x100528340
    int LocType::GetMaxRemoveRoofLevel(const LinkMap& linkMap, int arg2, unsigned int arg3, unsigned int arg4,
                                       Rotation90 rotation90) const {
        unsigned int uVar1;
        bool cVar2;
        int iVar3;
        int iVar4;
        Rotation90 arg1;
        unsigned int arg3_00;
        uint8_t bVar5;
        Rotation90 RVar6;
        unsigned int uVar7;
        unsigned int uVar8;
        unsigned int arg2_00;
        bool bVar9;

        unsigned int arg3_01 = arg4 - 1;
        Rotation90 rotation90_00 = rotation90 & 255;
        Rotation90 local_38 = rotation90_00;
        do {
            do {
                RVar6 = arg2;
                bVar5 = (char)RVar6 - 1;
                arg2 = (int)bVar5;
                if ((char)bVar5 < '\0') {
                    local_38._0_1_ = -1;
                LAB_1005284f3:
                    return (int)(char)(uint8_t)local_38;
                }
                iVar3 = GetGridWidth(rotation90_00);
                iVar4 = GetGridLength(rotation90_00);
                uVar8 = iVar3 + arg3 + 1;
                uVar7 = arg4 + 1 + iVar4;
            } while (uVar8 <= arg3 - 1);
            arg1 = (Rotation90)(char)bVar5;
            arg2_00 = arg3 - 1;
            do {
                bVar9 = arg3_01 < uVar7;
                if (arg3_01 < uVar7) {
                    cVar2 = linkMap.IsRemoveRoof(arg1, arg2_00, arg3_01);
                    arg3_00 = arg3_01;
                    iVar3 = iVar4 + 1;
                    uVar1 = arg4;
                    if (!cVar2) {
                        do {
                            arg3_00 = uVar1;
                            bVar9 = arg3_00 < uVar7;
                            if (iVar3 == 0)
                                goto joined_r0x000100528415;
                            cVar2 = linkMap.IsRemoveRoof(arg1, arg2_00, arg3_00);
                            iVar3 = iVar3 - 1;
                            uVar1 = arg3_00 + 1;
                        } while (!cVar2);
                    }
                    cVar2 = linkMap.IsLinkBelow(arg2_00, arg3_00);
                    local_38 = RVar6 & 255;
                    if (!cVar2) {
                        local_38 = arg1;
                    }
                    iVar3 = 1;
                    if (bVar9)
                        goto LAB_1005284e0;
                } else {
                joined_r0x000100528415:
                    iVar3 = 8;
                    if (bVar9) {
                    LAB_1005284e0:
                        if (iVar3 != 5)
                            goto LAB_1005284f3;
                        break;
                    }
                }
                arg2_00 = arg2_00 + 1;
            } while (arg2_00 != uVar8);
        } while (true);
    }

    // 0x100528510
    uint8_t* LocType::GetMultiLocValue(int& arg1, int& arg2, int& arg3, int& arg4,
                                       const PlayerVarDomain* playerVarDomain, ConfigProvider* configProvider) const {
        uint8_t uVar1;
        int iVar2;
        shared_ptr<VarBitType>* this_00;
        Logger* this_01;
        shared_ptr<VarType>* this_02;
        uint32_t extraout_var;
        uint64_t extraout_var_00;
        uint8_t** ppuVar3;

        arg1 = 0;
        arg2 = field_1000;
        arg3 = field_1004;
        arg4 = -1;
        if (playerVarDomain == nullptr) {
            ppuVar3 = &DataStatus::MISSING;
            goto LAB_1005285d4;
        }
        if (field_1004 == 4294967295) {
            if (field_1000 != 4294967295) {
                configProvider->GetVarType(VarDomainType::PLAYER, field_1000);
                uVar1 = playerVarDomain->GetVarValue();
                iVar2 = ((VarValue*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar1))->GetInt();
                goto LAB_1005285ca;
            }
        } else {
            this_00 = (shared_ptr<VarBitType>*)configProvider->GetVarBitType(field_1004);
            this_01 = (Logger*)(*this_00).operator->();
            this_02 = (shared_ptr<VarType>*)this_01->GetLogStreams();
            iVar2 = ((GameToken*)(*this_02).operator->())->GetStatus();
            arg4 = iVar2;
            uVar1 = playerVarDomain->GetVarBitValue();
            iVar2 = (((uint32_t)extraout_var << 8) | (uint8_t)uVar1);
        LAB_1005285ca:
            arg1 = iVar2;
        }
        ppuVar3 = &DataStatus::READY;
    LAB_1005285d4:
        return *ppuVar3;
    }

    // 0x1005285e0
    uint8_t* LocType::GetMultiLoc(shared_ptr<LocType>& locType, const PlayerVarDomain* playerVarDomain,
                                  ConfigProvider* configProvider) {
        uint8_t uVar2;
        uint32_t extraout_var;
        uint64_t extraout_var_00;
        enable_shared_from_this<PathingEntity> local_48;
        shared_ptr<oldscape::ClientNpc> local_38;

        if (IsMultiLoc() == '\0') {
            local_48.shared_from_this();
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_38);
            locType = local_38;
            return DataStatus::READY;
        }
        int arg2 = m_multiLocIndex;
        if ((arg2 < 0) && (arg2 = -1, playerVarDomain != nullptr)) {
            if (field_1004 == 4294967295) {
                if (field_1000 != 4294967295) {
                    configProvider->GetVarType(VarDomainType::PLAYER, field_1000);
                    uVar2 = playerVarDomain->GetVarValue();
                    arg2 = ((VarValue*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar2))->GetInt();
                }
            } else {
                configProvider->GetVarBitType(field_1004);
                uVar2 = playerVarDomain->GetVarBitValue();
                arg2 = (((uint32_t)extraout_var << 8) | (uint8_t)uVar2);
            }
        }
        return (uint8_t*)GetMultiLoc(locType, arg2, playerVarDomain != nullptr);
    }

    // 0x100528710
    unsigned long LocType::CheckModel(LocShape locShape) {
        uint8_t* this_00;
        uint64_t uVar1;
        char cVar3;
        int iVar4;
        char* pcVar5;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar6;
        long* plVar7;
        Array<int>* this_01;
        uint32_t* puVar8;
        uint8_t uVar10;
        uint64_t unaff_RBX;
        unsigned long arg1;

        uint8_t* this_02 = &field_592;
        char cVar2 = this_02->empty();
        uint64_t uVar11 = (uint64_t)((unsigned long)unaff_RBX >> 8);
        unsigned long uVar12 = (((uint64_t)uVar11 << 8) | (uint8_t)1);
        if (!cVar2) {
            cVar2 = '\x02';
            if ((char)locShape != '\x17') {
                cVar2 = (char)locShape;
            }
            cVar3 = '\b';
            if (cVar2 != '\x18') {
                cVar3 = cVar2;
            }
            this_00 = &field_568;
            iVar4 = this_00->end();
            uVar10 = 1;
            if (0 < iVar4) {
                uVar12 = 0;
                do {
                    pcVar5 = (char*)(*this_00)[uVar12];
                    if (*pcVar5 == cVar3) {
                        pvVar6 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_02)[uVar12];
                        iVar4 = pvVar6->end();
                        if (0 < iVar4) {
                            arg1 = 0;
                            do {
                                plVar7 = (long*)field_24->GetOutputType();
                                uVar1 = Js5Archive::JS5_MODELSRT7;
                                this_01 = (Array<int>*)(*this_02)[uVar12];
                                puVar8 = (uint32_t*)(*this_01)[arg1];
                                if ((uint8_t*)(**(void (**)(...))(*plVar7 + 48))(
                                        plVar7, uVar1, *puVar8, 0, Priority::HIGH, 1) != DataStatus::READY) {
                                    uVar10 = 0;
                                }
                                uVar11 = 0;
                                arg1 = arg1 + 1;
                                pvVar6 = (vector<oldscape::dash3d::EntityHighlight*,
                                                 BucketAllocatorEASTL>*)(*this_02)[uVar12];
                                iVar4 = pvVar6->end();
                            } while ((long)arg1 < (long)iVar4);
                        }
                    }
                    uVar12 = uVar12 + 1;
                    iVar4 = this_00->end();
                } while ((long)uVar12 < (long)iVar4);
            }
            uVar12 = (((uint64_t)uVar11 << 8) | (uint8_t)uVar10);
        }
        return uVar12 & 4294967295;
    }

    // 0x100528890
    LocTypeCustomisation* LocType::GetModels(graphics::RT7Core* rt7Core, AssetBuilder& assetBuilder,
                                             BuildRequest<graphics::Model, BuildModelMain>& buildRequest,
                                             LocShape locShape, Rotation90 rotation90, bool arg6,
                                             const LocTypeCustomisation* locTypeCustomisation,
                                             AssetJobPriority assetJobPriority) {
        unsigned int uVar1;
        bool bVar2;
        bool bVar3;
        bool bVar4;
        bool bVar5;
        LocType* pLVar6;
        bool bVar7;
        uint8_t bVar9;
        uint8_t bVar10;
        LocShape LVar11;
        uint8_t** ppuVar12;
        long lVar13;
        char* pcVar14;
        unsigned long uVar15;
        Array<VarValue>* pAVar16;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* pAVar17;
        unsigned int* puVar18;
        Js5ResourceProvider* pJVar19;
        uint8_t* puVar20;
        shared_ptr<graphics::Model>* this_01;
        Model* pMVar21;
        LocTypeCustomisation* pLVar22;
        unsigned int* puVar23;
        BuildModelMain* pBVar24;
        Array<unsigned short>* pAVar25;
        bool bVar26;
        LocShape locShape_00;
        unsigned long arg1;
        char cVar27;
        LocTypeCustomisation* pLVar28;
        unsigned long uVar29;
        bool bVar30;
        PacketView local_108;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* local_d0;
        BuildRequest<graphics::Model, BuildModelMain>* local_c8;
        uint64_t local_c0[2];
        shared_ptr<BuildModelMain> local_a8;
        LocTypeCustomisation* local_98;
        bool local_8b;
        uint64_t local_8a;

        local_8a._1_1_ = (uint8_t)rotation90;
        uint8_t* this_00 = &field_568;
        RT7Core* local_d8 = rt7Core;
        char cVar8 = this_00->empty();
        if (!cVar8) {
            locShape_00 = 10;
            if ((char)locShape != '\v') {
                locShape_00 = locShape & 255;
            }
            cVar8 = LocShapes::IsWallDecorShape(locShape_00);
            LVar11 = 4;
            if (!cVar8) {
                LVar11 = locShape_00;
            }
            cVar8 = '\x02';
            if ((char)LVar11 != '\x17') {
                cVar8 = (char)LVar11;
            }
            cVar27 = '\b';
            if (cVar8 != '\x18') {
                cVar27 = cVar8;
            }
            cVar8 = buildRequest.IsTaskRunning();
            if (!cVar8) {
                cVar8 = buildRequest.IsEmpty();
                if (cVar8) {
                    cVar8 = graphics::Model::IsReadyToConstruct(local_d8);
                    if (!cVar8)
                        goto LAB_1005289a2;
                    lVar13 = this_00->end();
                    uVar29 = 4294967295;
                    if (lVar13 != 0) {
                        arg1 = 0;
                        do {
                            pcVar14 = (char*)(*this_00)[arg1];
                            if (*pcVar14 == cVar27) {
                                uVar29 = arg1;
                                break;
                            }
                            arg1 = (unsigned long)((int)arg1 + 1);
                            uVar15 = this_00->end();
                        } while (arg1 < uVar15);
                    }
                    pLVar6 = this;
                    if ((int)uVar29 == -1) {
                        ppuVar12 = &DataStatus::MISSING;
                    LAB_100528b1d:
                        cVar8 = '\0';
                        local_98 = (LocTypeCustomisation*)*ppuVar12;
                    } else {
                        if (locTypeCustomisation == nullptr) {
                        LAB_1005289db:
                            pAVar17 = nullptr;
                        } else {
                            pAVar16 = (Array<VarValue>*)locTypeCustomisation->second();
                            cVar8 = pAVar16->empty();
                            if (cVar8)
                                goto LAB_1005289db;
                            pAVar17 =
                                (Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)locTypeCustomisation->second();
                        }
                        local_c8 = (BuildRequest<graphics::Model, BuildModelMain>*)buildRequest;
                        if (pAVar17 == nullptr) {
                            pAVar17 = &pLVar6->field_592[(long)(int)uVar29];
                        }
                        puVar18 = (unsigned int*)pAVar17->data();
                        local_d0 = pAVar17;
                        local_98 = (LocTypeCustomisation*)pAVar17->end();
                        bVar30 = (LocTypeCustomisation*)puVar18 == local_98;
                        if (bVar30) {
                            bVar26 = false;
                            bVar2 = true;
                            pLVar22 = locTypeCustomisation;
                        } else {
                            bVar26 = false;
                            pLVar28 = locTypeCustomisation;
                            bVar3 = true;
                            bVar7 = true;
                            do {
                                bVar2 = bVar7;
                                uVar1 = *puVar18;
                                bVar4 = bVar2;
                                if (uVar1 == 4294967295) {
                                LAB_100528abd:
                                    bVar2 = bVar3;
                                    bVar5 = true;
                                    pLVar22 = pLVar28;
                                    bVar7 = bVar4;
                                } else {
                                    pJVar19 = (Js5ResourceProvider*)field_24->GetOutputType();
                                    puVar20 = (uint8_t*)pJVar19->GroupReady(*(Js5Archive::JS5_MODELSRT7), uVar1,
                                                                            (Priority*)Priority::HIGH, true);
                                    bVar5 = false;
                                    if (puVar20 == DataStatus::NOTLOADED) {
                                        bVar4 = false;
                                    }
                                    bVar26 = true;
                                    pLVar22 = (LocTypeCustomisation*)DataStatus::MISSING;
                                    bVar3 = bVar4;
                                    bVar7 = bVar2;
                                    if (puVar20 != DataStatus::MISSING)
                                        goto LAB_100528abd;
                                }
                                if (!bVar5)
                                    break;
                                puVar18 = puVar18 + 1;
                                bVar30 = (LocTypeCustomisation*)puVar18 == local_98;
                                pLVar28 = pLVar22;
                                bVar3 = bVar2;
                            } while (!bVar30);
                        }
                        buildRequest = (BuildRequest<graphics::Model, BuildModelMain>*)local_c8;
                        local_98 = pLVar22;
                        if (bVar30) {
                            if (bVar26) {
                                if (bVar2) {
                                    new ((fixed_vector<PacketView, 1ul>*)((long)&local_8a + 2))
                                        eastl::fixed_vector<PacketView, 1ul>();
                                    pAVar17 = local_d0;
                                    uVar29 = local_d0->end();
                                    ((vector<PacketView, eastl::fixed_vector_allocator<40ul, 1ul, 8ul, 0ul,
                                                                                       true>>*)((long)&local_8a + 2))
                                        ->reserve(uVar29);
                                    puVar18 = (unsigned int*)pAVar17->data();
                                    puVar23 = (unsigned int*)pAVar17->end();
                                    if (puVar18 != puVar23) {
                                        do {
                                            uVar1 = *puVar18;
                                            if (uVar1 != 4294967295) {
                                                local_108 = PacketView();
                                                pJVar19 = (Js5ResourceProvider*)field_24->GetOutputType();
                                                pJVar19->GetFile(local_108, *(Js5Archive::JS5_MODELSRT7), uVar1, 0,
                                                                 (Priority*)Priority::HIGH, true, false, false);
                                                ((fixed_vector<PacketView, 1ul>*)((long)&local_8a + 2))
                                                    ->push_back(local_108);
                                            }
                                            puVar18 = puVar18 + 1;
                                        } while (puVar18 != puVar23);
                                    }
                                    if (locTypeCustomisation == nullptr) {
                                        bVar9 = 0;
                                        bVar10 = 0;
                                        buildRequest = (BuildRequest<graphics::Model, BuildModelMain>*)local_c8;
                                        pLVar6 = this;
                                    } else {
                                        pAVar16 = (Array<VarValue>*)locTypeCustomisation->GetDefaultValue();
                                        bVar9 = pAVar16->empty();
                                        pLVar6 = this;
                                        buildRequest = (BuildRequest<graphics::Model, BuildModelMain>*)local_c8;
                                        bVar9 = bVar9 ^ 1;
                                        pAVar16 = (Array<VarValue>*)locTypeCustomisation->GetLogStreams();
                                        bVar10 = pAVar16->empty();
                                        bVar10 = bVar10 ^ 1;
                                    }
                                    MakeSharedPool<graphics::Model, 3072>::MakeShared<>();
                                    pMVar21 = (Model*)local_108.operator->();
                                    pMVar21->SetSourceModelIDs(local_d0);
                                    local_c0[0] = (((uint64_t)local_c0[0]._4_4_ << 32) | (uint32_t)assetJobPriority);
                                    local_8b = true;
                                    local_8a._0_1_ = 1;
                                    bucket_make_shared<BuildModelMain, int, graphics::ModelConstructedState, bool,
                                                       graphics::RT7Core*&, eastl::fixed_vector<PacketView, 1ul>,
                                                       shared_ptr<graphics::Model>&>(
                                        &local_a8, (ModelConstructedState*)local_c0, &local_8b, (RT7Core**)&local_8a,
                                        (fixed_vector<PacketView, _1ul>*)&local_d8,
                                        (shared_ptr<graphics::Model>*)((long)&local_8a + 2));
                                    pBVar24 = (BuildModelMain*)local_a8.operator->();
                                    bVar30 = true;
                                    if (!arg6) {
                                        bVar30 = pLVar6->field_652 != '\0';
                                    }
                                    pBVar24->SetMirror(bVar30);
                                    if (bVar9 == 0) {
                                        pBVar24 = (BuildModelMain*)local_a8.operator->();
                                        pBVar24->SetRecolor(pLVar6->field_656, pLVar6->field_680);
                                    } else {
                                        pBVar24 = (BuildModelMain*)local_a8.operator->();
                                        pAVar25 = (Array<unsigned short>*)locTypeCustomisation->GetDefaultValue();
                                        pBVar24->SetCustomRecolor(pLVar6->field_656, *pAVar25);
                                    }
                                    pBVar24 = (BuildModelMain*)local_a8.operator->();
                                    pBVar24->SetRecolorPalette(pLVar6->field_704);
                                    if (bVar10 == 0) {
                                        pBVar24 = (BuildModelMain*)local_a8.operator->();
                                        pBVar24->SetRematerial(pLVar6->field_752, pLVar6->field_776);
                                    } else {
                                        pBVar24 = (BuildModelMain*)local_a8.operator->();
                                        pAVar25 = (Array<unsigned short>*)locTypeCustomisation->GetLogStreams();
                                        pBVar24->SetRematerial(pLVar6->field_752, *pAVar25);
                                    }
                                    pBVar24 = (BuildModelMain*)local_a8.operator->();
                                    pBVar24->SetAmbientAdjust(pLVar6->field_840);
                                    pBVar24 = (BuildModelMain*)local_a8.operator->();
                                    pBVar24->SetTint(pLVar6->field_824, pLVar6->field_825, pLVar6->field_826,
                                                     pLVar6->field_827);
                                    pBVar24 = (BuildModelMain*)local_a8.operator->();
                                    pBVar24->SetShareLight((bool)pLVar6->field_847);
                                    pBVar24 = (BuildModelMain*)local_a8.operator->();
                                    local_c0[0] =
                                        (*((pLVar6->m_resize + 12))) - (*((Rotation90*)((long)&local_8a + 1)));
                                    pBVar24->SetGlobalTranslation(*local_c0);
                                    pBVar24 = (BuildModelMain*)local_a8.operator->();
                                    local_c0[0] = *pLVar6->m_resize * (*((Rotation90*)((long)&local_8a + 1)));
                                    pBVar24->SetResize(*local_c0);
                                    new (local_c0) shared_ptr(&local_a8);
                                    assetBuilder.SubmitJob(*local_c0);
                                    buildRequest.SetObjAndTask(local_108, local_a8);
                                    cVar8 = buildRequest.IsTaskDone();
                                    if (!cVar8) {
                                        local_98 = (LocTypeCustomisation*)DataStatus::NOTLOADED;
                                    }
                                    ((fixed_vector<PacketView, 1ul>*)((long)&local_8a + 2))->~fixed_vector();
                                    goto LAB_100528b29;
                                }
                                ppuVar12 = &DataStatus::NOTLOADED;
                            } else {
                                ppuVar12 = &DataStatus::READY;
                            }
                            goto LAB_100528b1d;
                        }
                        cVar8 = '\0';
                    }
                LAB_100528b29:
                    pLVar22 = local_98;
                    if (!cVar8)
                        goto LAB_100528b78;
                }
                this_01 = (shared_ptr<graphics::Model>*)buildRequest.SSOBeginPtr();
                pMVar21 = (Model*)(*this_01).operator->();
                cVar8 = pMVar21->GetConstructedState();
                if (cVar8 != '\x03') {
                    LogAssert("model.GetAsset()->GetConstructedState() == "
                              "graphics::ModelConstructedState::DATA_MAT_AND_ATLAS",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/loctype/LocType.cpp",
                              1153, nullptr);
                }
                ppuVar12 = &DataStatus::READY;
            } else {
            LAB_1005289a2:
                ppuVar12 = &DataStatus::NOTLOADED;
            }
        } else {
            ppuVar12 = &DataStatus::MISSING;
        }
        pLVar22 = (LocTypeCustomisation*)*ppuVar12;
    LAB_100528b78:
        return pLVar22;
    }

    // 0x100529180
    unsigned long LocType::GetModelHash(LocShape locShape) const {
        char* pcVar4;
        unsigned long uVar5;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        int* piVar6;
        unsigned long uVar7;
        int iVar8;
        unsigned int uVar9;
        unsigned long uVar10;
        uint8_t bVar12;

        LocShape locShape_00 = 10;
        if ((char)locShape != '\v') {
            locShape_00 = locShape;
        }
        char cVar1 = LocShapes::IsWallDecorShape(locShape_00);
        LocShape LVar2 = 4;
        if (!cVar1) {
            LVar2 = locShape_00;
        }
        cVar1 = '\x02';
        if ((char)LVar2 != '\x17') {
            cVar1 = (char)LVar2;
        }
        char cVar11 = '\b';
        if (cVar1 != '\x18') {
            cVar11 = cVar1;
        }
        uint8_t* this_00 = &field_568;
        long lVar3 = this_00->end();
        if (lVar3 != 0) {
            uVar10 = 0;
            do {
                pcVar4 = (char*)(*this_00)[uVar10];
                iVar8 = (int)uVar10;
                if (*pcVar4 == cVar11) {
                    if (iVar8 == -1) {
                        return 18446744073709551615;
                    }
                    this_01 = &field_592[(long)iVar8];
                    lVar3 = this_01->end();
                    bVar12 = 0;
                    if (lVar3 == 0) {
                        return 0;
                    }
                    uVar9 = 1;
                    uVar10 = 0;
                    uVar5 = 0;
                    do {
                        piVar6 = (int*)(*this_01)[uVar10];
                        uVar5 = uVar5 | (long)*piVar6 << (bVar12 & 63);
                        uVar10 = (unsigned long)uVar9;
                        uVar7 = this_01->end();
                        bVar12 = bVar12 + 20;
                        uVar9 = uVar9 + 1;
                    } while (uVar10 < uVar7);
                    return uVar5;
                }
                uVar10 = (unsigned long)(iVar8 + 1);
                uVar5 = this_00->end();
            } while (uVar10 < uVar5);
        }
        return 18446744073709551615;
    }

    // 0x100529330
    unsigned long LocType::GetAnimation() const {
        unsigned int uVar1;
        int iVar2;
        unsigned int* puVar4;
        unsigned int* puVar5;
        int iVar7;
        bool bVar8;
        float extraout_XMM0_Da;

        uint8_t* this_00 = &field_896;
        unsigned long uVar3 = this_00->end();
        if (uVar3 < 2) {
            if (this_00->end() == 1) {
                puVar4 = (unsigned int*)(*this_00)[0];
                return (unsigned long)*puVar4;
            }
        } else {
            iVar2 = _rand();
            puVar4 = (unsigned int*)this_00->data();
            puVar5 = (unsigned int*)this_00->end();
            if (puVar4 != puVar5) {
                uVar3 = ::floor((float)iVar2 * 3.0517112e-05);
                bVar8 = false;
                iVar2 = (int)extraout_XMM0_Da;
                do {
                    uVar1 = puVar4[1];
                    iVar7 = iVar2 - uVar1;
                    if (iVar2 - uVar1 == 0 || iVar2 < (int)uVar1) {
                        uVar3 = (unsigned long)*puVar4;
                        iVar7 = iVar2;
                    }
                    if (iVar2 <= (int)uVar1)
                        break;
                    puVar4 = puVar4 + 2;
                    bVar8 = puVar4 == puVar5;
                    iVar2 = iVar7;
                } while (!bVar8);
                if (!bVar8) {
                    return uVar3;
                }
            }
        }
        return 4294967295;
    }

    // 0x100529400
    auto LocType::GetLocationWorldMatrix(const math::Matrix44T<float>& matrix44, Rotation90 rotation90) {
        auto result;

        ReturnValue RVar4 = *(ReturnValue*)matrix44;
        ReturnValue RVar5 = *(ReturnValue*)(matrix44 + 8);
        uint32_t uVar9 = *(uint32_t*)(matrix44 + 16);
        uint32_t uVar1 = *(uint32_t*)(matrix44 + 20);
        uint32_t uVar2 = *(uint32_t*)(matrix44 + 24);
        uint32_t uVar3 = *(uint32_t*)(matrix44 + 28);
        ReturnValue RVar6 = *(ReturnValue*)(matrix44 + 32);
        ReturnValue RVar7 = *(ReturnValue*)(matrix44 + 40);
        ReturnValue RVar8 = *(ReturnValue*)(matrix44 + 56);
        &result[6] = *(ReturnValue*)(matrix44 + 48);
        &result[7] = RVar8;
        &result[4] = RVar6;
        &result[5] = RVar7;
        *(uint32_t*)(&result + 2) = uVar9;
        *(uint32_t*) && result[2].field_4 = uVar1;
        *(uint32_t*)(&result + 3) = uVar2;
        *(uint32_t*) && result[3].field_4 = uVar3;
        result = RVar4;
        &result[1] = RVar5;
        uint64_t local_30 = *m_resize * (uint8_t)rotation90;
        uint32_t local_28 = uVar9;
        result = math::Matrix44T<float>::ApplyScaling(local_30);
        uint64_t local_50 = result.GetPos();
        uint32_t local_48 = uVar9;
        uint64_t local_40 = (*((m_resize + 12))) - (uint8_t)rotation90;
        uint32_t local_38 = uVar9;
        local_30 = local_50 + local_40;
        local_28 = uVar9;
        result.SetPos(local_30);
        return result;
    }

    // 0x100529690
    uint64_t LocType::CastsShadows(LocShape locShape) const {
        if ((field_846 == '\0') || (((char)locShape == '\x16' && (field_845 == '\0')))) {
            return 0;
        }
        return 1;
    }

} // namespace jag::game

// 0x100527ee0
void ceil(float arg1) {
    _ceilf();
}

// 0x100527ef0
void floor(float arg1) {
    _floorf();
}
