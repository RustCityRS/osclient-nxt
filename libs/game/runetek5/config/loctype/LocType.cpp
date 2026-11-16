// libs/game/runetek5/config/loctype/LocType.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "LocType.h"

namespace jag::game {
    // 0x1000b7910: the linker folded this into oldscape::minimenu::MinimenuEntry::GetSubjectName() const, which has identical code
    LocType::GetOpNames() const;

    // 0x10036da70: the linker folded this into graphics::GeometryBatch::GetVertexDataBufferPos() const, which has identical code
    LocType::GetName() const;

    // 0x1005253b0, 656 bytes, placed by class name and debug map
    // LocType::MultiLocTypeCache::GetMultiLoc(shared_ptr<LocType>&, shared_ptr<LocType> const&, PlayerVarDomain const*, ConfigProvider*)
    undefined* LocType::MultiLocTypeCache::GetMultiLoc(shared_ptr* param_1, shared_ptr* param_2,
                                                       PlayerVarDomain* param_3, ConfigProvider* param_4) {
        undefined1* this_00;
        VarDomainType* pVVar1;
        bool bVar2;
        int iVar4;
        LocType* pLVar5;
        long lVar6;
        shared_ptr* psVar7;
        VarValue* this_01;
        undefined* puVar8;
        optional<option::EnumOptionToggle> local_58[8];
        shared_ptr<VarType>* local_50;
        int local_34;

        bVar2 = shared_ptr::operator_cast_to_bool(param_2);
        if (!bVar2) {
            /* WARNING: Subroutine does not return */
            LogAssert("baseLocType",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "loctype/LocType.cpp",
                      23, (char*)0);
        }
        pLVar5 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)param_2);
        if (IsMultiLoc(pLVar5) == '\0') {
            shared_ptr<LocType>::operator=((shared_ptr<LocType>*)param_1, param_2);
            return DataStatus::READY;
        }
        bVar2 = operator!=((shared_ptr*)this, param_2);
        if (bVar2) {
            shared_ptr<LocType>::operator=((shared_ptr<LocType>*)this, param_2);
            eastl::optional<option::EnumOptionToggle>::optional(local_58);
            eastl::optional<int>::operator=((optional<int>*)&field_48, (optional*)local_58);
            shared_ptr<VarBitType>::reset();
            local_50 = (shared_ptr<VarType>*)field_32;
            shared_ptr<VarType>::reset();
            if (param_3 != (PlayerVarDomain*)0) {
                lVar6 = shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this);
                iVar4 = *(int*)(lVar6 + 1004);
                lVar6 = shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this);
                pVVar1 = VarDomainType::PLAYER;
                if (iVar4 == -1) {
                    if (*(int*)(lVar6 + 1000) != -1) {
                        lVar6 = shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this);
                        psVar7 = (shared_ptr*)param_4->GetVarType(pVVar1, *(int*)(lVar6 + 1000));
                        shared_ptr<VarType>::operator=(local_50, psVar7);
                    }
                } else {
                    psVar7 = (shared_ptr*)param_4->GetVarBitType(*(int*)(lVar6 + 1004));
                    shared_ptr<VarBitType>::operator=((shared_ptr<VarBitType>*)field_16, psVar7);
                }
            }
        }
        local_34 = -1;
        pLVar5 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)param_2);
        iVar4 = GetMultiLocIndex(pLVar5);
        psVar7 = param_1;
        if (iVar4 < 0) {
            if (param_3 != (PlayerVarDomain*)0) {
                bVar2 = field_16->operator_cast_to_bool();
                if (bVar2) {
                    local_34 = (*(code*)param_3->field_0[4])(param_3, field_16);
                } else {
                    bVar2 = field_32->operator_cast_to_bool();
                    if (bVar2) {
                        this_01 = (VarValue*)(*(code*)param_3->field_0[2])(param_3, field_32);
                        local_34 = this_01->GetInt();
                    }
                }
            }
        } else {
            pLVar5 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)param_2);
            local_34 = GetMultiLocIndex(pLVar5);
            psVar7 = param_1;
        }
        this_00 = &field_48;
        bVar2 = eastl::operator==((optional*)this_00, &local_34);
        if (bVar2) {
            shared_ptr<LocType>::operator=((shared_ptr<LocType>*)psVar7, (shared_ptr*)field_56);
        } else {
            eastl::optional<int>::operator=((optional<int>*)this_00, &local_34);
            pLVar5 = (LocType*)shared_ptr<LocType>::operator->((shared_ptr<LocType>*)this);
            puVar8 = (undefined*)pLVar5->GetMultiLoc((shared_ptr*)field_56, local_34, param_3 != (PlayerVarDomain*)0);
            field_72 = puVar8;
            if (puVar8 == DataStatus::NOTLOADED) {
                eastl::optional<option::EnumOptionToggle>::optional(local_58);
                psVar7 = param_1;
                eastl::optional<int>::operator=((optional<int>*)this_00, (optional*)local_58);
            }
            shared_ptr<LocType>::operator=((shared_ptr<LocType>*)psVar7, (shared_ptr*)field_56);
        }
        return field_72;
    }

    // 0x100525680, 384 bytes, placed by class name and debug map
    // LocType::GetMultiLoc(shared_ptr<LocType>&, int, bool)
    undefined* LocType::GetMultiLoc(shared_ptr* param_1, int param_2, bool param_3) {
        Js5HTTPQueueRequest* this_00;
        bool bVar2;
        int iVar3;
        int* piVar4;
        shared_ptr* psVar5;
        undefined** ppuVar6;
        undefined* unaff_R15;

        if (IsMultiLoc(this) == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("IsMultiLoc()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/config/"
                      "loctype/LocType.cpp",
                      1272, (char*)0);
        }
        if (param_2 < 0) {
        LAB_100525730:
            iVar3 = (&field_976)->end();
            iVar3 = iVar3 + -1;
            while (-1 < iVar3) {
                piVar4 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)&field_976,
                                                                        (long)iVar3);
                if (*piVar4 == -1) {
                    if (param_3) {
                        shared_ptr<LocType>::reset();
                        ppuVar6 = &DataStatus::MISSING;
                        goto LAB_100525757;
                    }
                    iVar3 = iVar3 + -1;
                    bVar2 = true;
                } else {
                    psVar5 = (shared_ptr*)(field_24, *piVar4, (DataStatus**)0)->List();
                    shared_ptr<LocType>::operator=((shared_ptr<LocType>*)param_1, psVar5);
                    bVar2 = shared_ptr::operator_cast_to_bool(param_1);
                    if (bVar2) {
                        ppuVar6 = &DataStatus::READY;
                    } else {
                        ppuVar6 = &DataStatus::NOTLOADED;
                    }
                LAB_100525757:
                    unaff_R15 = *ppuVar6;
                    bVar2 = false;
                }
                if (!bVar2) {
                    return unaff_R15;
                }
            }
        } else {
            unaff_R15 = &field_976;
            iVar3 = unaff_R15->end();
            if (iVar3 <= param_2)
                goto LAB_100525730;
            piVar4 =
                (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)unaff_R15, (long)param_2);
            if (*piVar4 != -1) {
                this_00 = field_24;
                piVar4 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)unaff_R15,
                                                                        (long)param_2);
                psVar5 = (shared_ptr*)this_00->List(*piVar4, 0);
                shared_ptr<LocType>::operator=((shared_ptr<LocType>*)param_1, psVar5);
                bVar2 = shared_ptr::operator_cast_to_bool(param_1);
                if (bVar2) {
                    ppuVar6 = &DataStatus::READY;
                } else {
                    ppuVar6 = &DataStatus::NOTLOADED;
                }
                goto LAB_1005257dd;
            }
        }
        shared_ptr<LocType>::reset();
        ppuVar6 = &DataStatus::MISSING;
    LAB_1005257dd:
        return *ppuVar6;
    }

    // 0x100525800, 976 bytes, base-object constructor, placed by class name and debug map
    // LocType::LocType(BaseTemplateConfigTypeList<LocType>*, int)
    void LocType::LocType(BaseTemplateConfigTypeList* param_1, int param_2) {
        char* pcVar1;
        long lVar2;
        undefined8* puVar3;
        fixed_string<char, 16, true, eastl::allocator>* this_00;

        new (this) ConfigType<LocType>(param_1, param_2);
        new (this) MakeSharedPool<LocType, 256>();
        field_0 = &PTR__LocType_100f038c8;
        new (&field_56, 6)
            eastl::fixed_vector<eastl::fixed_string<char, 24, true, eastl::allocator>, 6ul, true, eastl::allocator>();
        new (&field_480) eastl::string();
        field_512 = 0;
        m_runeTek5Only = 0;
        new (&field_520) Array<int, eastl::allocator>();
        new (&field_544) Array<int, eastl::allocator>();
        new (&field_568) Array<LocShape, eastl::allocator>();
        new (&field_592) Array<Array<int, eastl::allocator>, eastl::allocator>();
        new (field_616, 1.0, 1.0, 1.0) math::ColourHSL();
        new ((field_616 + 12)) math::Vector3T<int>();
        new (&field_640) math::Vector3T<int>();
        field_652 = 0;
        new (&field_656) Array<unsigned short, eastl::allocator>();
        new (&field_680) Array<unsigned short, eastl::allocator>();
        new (&field_704) Array<unsigned char, eastl::allocator>();
        new (&field_728) Array<int, eastl::allocator>();
        new (&field_752) Array<unsigned short, eastl::allocator>();
        new (&field_776) Array<unsigned short, eastl::allocator>();
        new (&field_800) Array<int, eastl::allocator>();
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
        std::unique_ptr<math::AABB, std::default_delete<math::AABB>>::unique_ptr<true, void>(
            (unique_ptr<math::AABB, std::default_delete<math::AABB>>*)&field_856);
        field_864 = 1;
        m_highlightOverride = 9;
        new (&field_872) Array<graphics::VFXAttachmentInfo::RawData, eastl::allocator>();
        new (&field_896) Array<LocType::AnimationWithWeights, eastl::allocator>();
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
        new (&field_976) Array<int, eastl::allocator>();
        field_1000 = 4294967295;
        field_1004 = 4294967295;
        m_multiLocIndex = -1;
        new (field_1016, (_func_decltype_nullptr*)6) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        lVar2 = field_24->GetPriority();
        puVar3 = (undefined8*)std::array<char const*, 7ul>::operator[]((ulong) * (uint*)(lVar2 + 8));
        pcVar1 = (char*)*puVar3;
        this_00 = (fixed_string<char, 16, true, eastl::allocator>*)
            eastl::vector<eastl::fixed_string<char, 24, true, eastl::allocator>,
                          eastl::fixed_vector_allocator<64ul, 6ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[]((vector<eastl::fixed_string<char, 24, true, eastl::allocator>,
                               eastl::fixed_vector_allocator<64ul, 6ul, 8ul, 0ul, true, eastl::allocator>>*)&field_56,
                       5);
        eastl::fixed_string<char, 16, true, eastl::allocator>::operator=(this_00, pcVar1);
    }

    // 0x100525d50, 16 bytes, complete-object constructor, placed by class name and debug map
    // LocType::LocType(BaseTemplateConfigTypeList<LocType>*, int): jumps straight to the base-object constructor

    // 0x100525d60, 4944 bytes, placed by class name and debug map
    // LocType::DecodeType(PacketT<Array<unsigned char, eastl::allocator> >&, unsigned int)
    undefined* LocType::DecodeType(PacketT* param_1, uint param_2) {
        undefined1 uVar1;
        byte bVar2;
        char cVar3;
        ushort uVar4;
        undefined2 uVar5;
        short sVar6;
        short sVar7;
        short sVar8;
        short sVar9;
        short sVar10;
        short sVar11;
        undefined4 uVar12;
        int iVar13;
        uint uVar14;
        undefined4 uVar15;
        undefined1* puVar16;
        Array<int, eastl::allocator>* pAVar17;
        int* piVar18;
        fixed_string* pfVar19;
        float* pfVar20;
        undefined2* puVar21;
        undefined1* puVar22;
        fixed_string<char, 16, true, eastl::allocator>* this_00;
        long lVar23;
        undefined4* puVar24;
        uint* puVar25;
        AABB* pAVar26;
        Layout* pLVar27;
        vector* pvVar28;
        NXTPixToolkit* pNVar29;
        Vector2T<int>* this_01;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* this_02;
        RawData* this_03;
        RawData* pRVar30;
        undefined8 uVar31;
        uint uVar32;
        ulong uVar33;
        Vector3T<float>* this_04;
        uint uVar34;
        ulong uVar35;
        ulong uVar36;
        bool bVar37;
        float fVar38;

        switch (param_2) {
        case 1:
            bVar2 = param_1->g1();
            uVar33 = (ulong)bVar2;
            (&field_568, uVar33, 0)->set_max_size();
            puVar22 = &field_592;
            puVar22->set_max_size(uVar33, 0);
            if (bVar2 != 0) {
                uVar36 = 0;
                do {
                    uVar1 = param_1->g1s();
                    puVar16 = (undefined1*)Array<LocShape, eastl::allocator>::operator[](
                        (Array<LocShape, eastl::allocator>*)&field_568, uVar36);
                    *puVar16 = uVar1;
                    bVar2 = param_1->g1();
                    pAVar17 = (Array<int, eastl::allocator>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar22, uVar36);
                    pAVar17->set_max_size((ulong)bVar2, 0);
                    if (bVar2 != 0) {
                        uVar35 = 0;
                        do {
                            uVar12 = param_1->gSmart2or4s();
                            pAVar17 = (Array<int, eastl::allocator>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)puVar22, uVar36);
                            puVar24 = (undefined4*)Array<int, eastl::allocator>::operator[](pAVar17, uVar35);
                            *puVar24 = uVar12;
                            uVar35 = uVar35 + 1;
                        } while (bVar2 != uVar35);
                    }
                    uVar36 = uVar36 + 1;
                } while (uVar36 != uVar33);
            }
            break;
        case 2:
            PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<eastl::string>(
                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, (basic_string*)&field_480,
                false);
            break;
        default:
            if (param_2 - 30 < 5) {
                pfVar19 = (fixed_string*)
                    eastl::vector<eastl::fixed_string<char, 24, true, eastl::allocator>,
                                  eastl::fixed_vector_allocator<64ul, 6ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<eastl::fixed_string<char, 24, true, eastl::allocator>,
                                eastl::fixed_vector_allocator<64ul, 6ul, 8ul, 0ul, true, eastl::allocator>>*)&field_56,
                        (ulong)(param_2 - 30));
                PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                    eastl::fixed_string<char, 24, true, eastl::allocator>>(
                    (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, pfVar19, false);
                return DataStatus::READY;
            }
            switch (param_2) {
            case 39:
                cVar3 = param_1->g1s();
                field_842 = cVar3 * 5;
                break;
            case 40:
                bVar2 = param_1->g1();
                uVar33 = (ulong)bVar2;
                (&field_656, uVar33, 0)->set_max_size();
                (&field_680, uVar33, 0)->set_max_size();
                if (bVar2 != 0) {
                    uVar36 = 0;
                    do {
                        uVar5 = param_1->g2();
                        puVar21 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](
                            (Array<unsigned short, eastl::allocator>*)&field_656, uVar36);
                        *puVar21 = uVar5;
                        uVar5 = param_1->g2();
                        puVar21 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](
                            (Array<unsigned short, eastl::allocator>*)&field_680, uVar36);
                        *puVar21 = uVar5;
                        uVar36 = uVar36 + 1;
                    } while (uVar33 != uVar36);
                }
                break;
            case 41:
                bVar2 = param_1->g1();
                uVar33 = (ulong)bVar2;
                (&field_752, uVar33, 0)->set_max_size();
                (&field_776, uVar33, 0)->set_max_size();
                if (bVar2 != 0) {
                    uVar36 = 0;
                    do {
                        uVar5 = param_1->g2();
                        puVar21 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](
                            (Array<unsigned short, eastl::allocator>*)&field_752, uVar36);
                        *puVar21 = uVar5;
                        uVar5 = param_1->g2();
                        puVar21 = (undefined2*)Array<unsigned short, eastl::allocator>::operator[](
                            (Array<unsigned short, eastl::allocator>*)&field_776, uVar36);
                        *puVar21 = uVar5;
                        uVar36 = uVar36 + 1;
                    } while (uVar33 != uVar36);
                }
                break;
            case 42:
                bVar2 = param_1->g1();
                (&field_704, (ulong)bVar2, 0)->set_max_size();
                if (bVar2 != 0) {
                    uVar33 = 0;
                    do {
                        uVar1 = param_1->g1();
                        puVar22 = (undefined1*)Array<unsigned char, eastl::allocator>::operator[](
                            (Array<unsigned char, eastl::allocator>*)&field_704, uVar33);
                        *puVar22 = uVar1;
                        uVar33 = uVar33 + 1;
                    } while (bVar2 != uVar33);
                }
                break;
            default:
                uVar34 = param_2 - 65;
                if (uVar34 < 3) {
                    uVar4 = param_1->g2();
                    fVar38 = (float)uVar4 * 0.0078125;
                    this_04 = (Vector3T<float>*)field_616;
                    goto LAB_100526018;
                }
                switch (param_2) {
                case 69:
                    cVar3 = param_1->g1();
                    field_946 = cVar3 == '\x01';
                    break;
                case 70:
                case 72:
                    sVar6 = param_1->g2s();
                    iVar13 = (int)sVar6 << 2;
                    this_04 = (Vector3T<float>*)(field_616 + 12);
                    uVar34 = param_2 - 70;
                LAB_10052623b:
                    fVar38 = (float)iVar13;
                    goto LAB_100526018;
                case 71:
                    sVar6 = param_1->g2s();
                    fVar38 = (float)(sVar6 * -4);
                    this_04 = (Vector3T<float>*)(field_616 + 12);
                    uVar34 = 1;
                LAB_100526018:
                    pfVar20 = (float*)math::Vector3T<float>::operator[](this_04, uVar34);
                    *pfVar20 = fVar38;
                    break;
                case 73:
                    field_937 = 1;
                    break;
                case 74:
                    field_947 = 1;
                    break;
                case 75:
                    bVar2 = param_1->g1();
                    field_948 = (uint)bVar2;
                    break;
                default:
                    uVar34 = param_2 - 150;
                    if (uVar34 < 5) {
                        pfVar19 = (fixed_string*)
                            eastl::vector<eastl::fixed_string<char, 24, true, eastl::allocator>,
                                          eastl::fixed_vector_allocator<64ul, 6ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[]((vector<eastl::fixed_string<char, 24, true, eastl::allocator>,
                                               eastl::fixed_vector_allocator<64ul, 6ul, 8ul, 0ul, true,
                                                                             eastl::allocator>>*)&field_56,
                                       (ulong)uVar34);
                        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>::gStringCP1252ToUTF8<
                            eastl::fixed_string<char, 24, true, eastl::allocator>>(
                            (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)param_1, pfVar19,
                            false);
                        cVar3 = field_24->IsMembersServer();
                        if (cVar3 == '\0') {
                            this_00 = (fixed_string<char, 16, true, eastl::allocator>*)eastl::vector<
                                eastl::fixed_string<char, 24, true, eastl::allocator>,
                                eastl::fixed_vector_allocator<64ul, 6ul, 8ul, 0ul, true, eastl::allocator>>::
                            operator[]((vector<eastl::fixed_string<char, 24, true, eastl::allocator>,
                                               eastl::fixed_vector_allocator<64ul, 6ul, 8ul, 0ul, true,
                                                                             eastl::allocator>>*)&field_56,
                                       (ulong)uVar34);
                            eastl::fixed_string<char, 16, true, eastl::allocator>::operator=(this_00, "");
                            return DataStatus::READY;
                        }
                        return DataStatus::READY;
                    }
                    switch (param_2) {
                    case 160:
                        bVar2 = param_1->g1();
                        (&field_544, (ulong)bVar2, 0)->set_max_size();
                        if (bVar2 != 0) {
                            uVar33 = 0;
                            do {
                                uVar4 = param_1->g2();
                                puVar25 = (uint*)Array<int, eastl::allocator>::operator[](
                                    (Array<int, eastl::allocator>*)&field_544, uVar33);
                                *puVar25 = (uint)uVar4;
                                uVar33 = uVar33 + 1;
                            } while (bVar2 != uVar33);
                        }
                        break;
                    default:
                        if (param_2 - 190 < 6) {
                            puVar22 = &field_520;
                            cVar3 = puVar22->empty();
                            if (cVar3 != '\0') {
                                uVar33 = 0;
                                puVar22->set_max_size(6, 0);
                                do {
                                    puVar24 = (undefined4*)Array<int, eastl::allocator>::operator[](
                                        (Array<int, eastl::allocator>*)puVar22, uVar33);
                                    *puVar24 = 4294967295;
                                    uVar33 = uVar33 + 1;
                                } while (uVar33 != 6);
                            }
                            uVar4 = param_1->g2();
                            puVar25 = (uint*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)puVar22, (ulong)(param_2 - 190));
                            *puVar25 = (uint)uVar4;
                        } else {
                            switch (param_2) {
                            case 196:
                                uVar1 = param_1->g1();
                                m_minimumLODLevelOverride = uVar1;
                                break;
                            case 197:
                                uVar1 = param_1->g1();
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
                                sVar6 = param_1->gSmart1or2s();
                                sVar7 = param_1->gSmart1or2s();
                                sVar8 = param_1->gSmart1or2s();
                                sVar9 = param_1->gSmart1or2s();
                                sVar10 = param_1->gSmart1or2s();
                                sVar11 = param_1->gSmart1or2s();
                                pAVar26 = operator_new(32);
                                math::AABB::AABB(pAVar26);
                                puVar22 = &field_856;
                                puVar22->reset(pAVar26);
                                pLVar27 =
                                    (Layout*)std::unique_ptr<math::AABB, std::default_delete<math::AABB>>::operator->(
                                        (unique_ptr<math::AABB, std::default_delete<math::AABB>>*)puVar22);
                                pvVar28 = eastl::string::Layout::SSOBeginPtr(pLVar27, (type*)pAVar26);
                                pvVar28 = pvVar28->SSOBeginPtr(pAVar26);
                                *(float*)pvVar28 = (float)(int)sVar6;
                                pLVar27 =
                                    (Layout*)std::unique_ptr<math::AABB, std::default_delete<math::AABB>>::operator->(
                                        (unique_ptr<math::AABB, std::default_delete<math::AABB>>*)puVar22);
                                pvVar28 = eastl::string::Layout::SSOBeginPtr(pLVar27, (type*)pAVar26);
                                pfVar20 = (float*)pvVar28->y();
                                *pfVar20 = -(float)(int)sVar10;
                                pLVar27 =
                                    (Layout*)std::unique_ptr<math::AABB, std::default_delete<math::AABB>>::operator->(
                                        (unique_ptr<math::AABB, std::default_delete<math::AABB>>*)puVar22);
                                pvVar28 = eastl::string::Layout::SSOBeginPtr(pLVar27, (type*)pAVar26);
                                pfVar20 = (float*)pvVar28->second();
                                *pfVar20 = (float)(int)sVar8;
                                pNVar29 = (NXTPixToolkit*)
                                              std::unique_ptr<math::AABB, std::default_delete<math::AABB>>::operator->(
                                                  (unique_ptr<math::AABB, std::default_delete<math::AABB>>*)puVar22);
                                pLVar27 = (Layout*)pNVar29->GetScreen();
                                pvVar28 = eastl::string::Layout::SSOBeginPtr(pLVar27, (type*)pAVar26);
                                *(float*)pvVar28 = (float)(int)sVar9;
                                pNVar29 = (NXTPixToolkit*)
                                              std::unique_ptr<math::AABB, std::default_delete<math::AABB>>::operator->(
                                                  (unique_ptr<math::AABB, std::default_delete<math::AABB>>*)puVar22);
                                this_01 = (Vector2T<int>*)pNVar29->GetScreen();
                                pfVar20 = (float*)this_01->y();
                                *pfVar20 = -(float)(int)sVar7;
                                pNVar29 = (NXTPixToolkit*)
                                              std::unique_ptr<math::AABB, std::default_delete<math::AABB>>::operator->(
                                                  (unique_ptr<math::AABB, std::default_delete<math::AABB>>*)puVar22);
                                this_02 = (compressed_pair_imp<
                                           std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                           eastl::allocator, 0>*)pNVar29->GetScreen();
                                pfVar20 = (float*)eastl::compressed_pair_imp<
                                    std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                    eastl::allocator, 0>::second(this_02);
                                *pfVar20 = (float)(int)sVar11;
                                pAVar26 =
                                    (AABB*)std::unique_ptr<math::AABB, std::default_delete<math::AABB>>::operator->(
                                        (unique_ptr<math::AABB, std::default_delete<math::AABB>>*)puVar22);
                                cVar3 = pAVar26->IsValid();
                                if (cVar3 == '\0') {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("m_customBounding->IsValid()",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "game/runetek5/config/loctype/LocType.cpp",
                                              547, (char*)0);
                                }
                                break;
                            case 202:
                                bVar2 = param_1->g1();
                                m_highlightOverride = (uint)bVar2;
                                break;
                            case 203:
                                field_864 = 0;
                                break;
                            case 204:
                                bVar2 = param_1->g1();
                                puVar22 = &field_872;
                                puVar22->set_max_size((ulong)bVar2, 0);
                                this_03 = (RawData*)puVar22->data();
                                pRVar30 = (RawData*)puVar22->end();
                                for (; this_03 != pRVar30; this_03 = (RawData*)&this_03[1].field_8) {
                                    this_03->Decode(param_1);
                                }
                                break;
                            default:
                                uVar31 = logger::default_logger();
                                logger::Logger::Log(uVar31, 0, 2,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/game/runetek5/config/loctype/LocType.cpp",
                                                    607, "Unrecognised .loc config code: %u", param_2);
                                break;
                            case 249:
                                DecodeParams(param_1);
                                break;
                            case 250:
                                lVar23 = MakeLocationSoundData(this);
                                bVar2 = param_1->g1();
                                *(uint*)(lVar23 + 28) = (uint)bVar2;
                                break;
                            case 251:
                                lVar23 = MakeLocationSoundData(this);
                                cVar3 = param_1->g1();
                                *(bool*)(lVar23 + 32) = cVar3 == '\x01';
                                break;
                            case 252:
                                lVar23 = MakeLocationSoundData(this);
                                uVar4 = param_1->g2();
                                *(float*)(lVar23 + 36) = (float)uVar4;
                                uVar4 = param_1->g2();
                                *(float*)(lVar23 + 40) = (float)uVar4;
                                uVar4 = param_1->g2();
                                *(float*)(lVar23 + 44) = (float)uVar4 * 0.001;
                                break;
                            case 253:
                                lVar23 = MakeLocationSoundData(this);
                                bVar2 = param_1->g1();
                                *(uint*)(lVar23 + 80) = (uint)bVar2;
                                break;
                            case 254:
                                lVar23 = MakeLocationSoundData(this);
                                cVar3 = param_1->g1();
                                *(bool*)(lVar23 + 84) = cVar3 == '\x01';
                                break;
                            case 255:
                                lVar23 = MakeLocationSoundData(this);
                                uVar4 = param_1->g2();
                                *(float*)(lVar23 + 88) = (float)uVar4;
                                uVar4 = param_1->g2();
                                *(float*)(lVar23 + 92) = (float)uVar4;
                                uVar4 = param_1->g2();
                                *(float*)(lVar23 + 96) = (float)uVar4 * 0.001;
                            }
                        }
                        break;
                    case 162:
                        m_hillChangeType = 3;
                        uVar34 = param_1->g4s();
                        m_hillChangeParam = uVar34;
                        break;
                    case 163:
                        uVar1 = param_1->g1s();
                        field_824 = uVar1;
                        uVar1 = param_1->g1s();
                        field_825 = uVar1;
                        uVar1 = param_1->g1s();
                        field_826 = uVar1;
                        uVar1 = param_1->g1s();
                        field_827 = uVar1;
                        break;
                    case 164:
                    case 165:
                    case 166:
                        sVar6 = param_1->g2s();
                        iVar13 = (int)sVar6;
                        this_04 = (Vector3T<float>*)&field_640;
                        uVar34 = param_2 - 164;
                        goto LAB_10052623b;
                    case 167:
                        uVar4 = param_1->g2();
                        field_952 = (uint)uVar4;
                        break;
                    case 170:
                    case 171:
                        param_1->gSmart1or2s();
                        break;
                    case 173:
                        lVar23 = MakeLocationSoundData(this);
                        uVar4 = param_1->g2();
                        *(uint*)(lVar23 + 20) = (uint)uVar4;
                        uVar4 = param_1->g2();
                        *(uint*)(lVar23 + 24) = (uint)uVar4;
                        break;
                    case 177:
                        break;
                    case 178:
                        lVar23 = MakeLocationSoundData(this);
                        bVar2 = param_1->g1();
                        *(uint*)(lVar23 + 8) = (uint)bVar2;
                        break;
                    case 179:
                        lVar23 = MakeLocationSoundData(this);
                        *(undefined1*)(lVar23 + 16) = 1;
                        break;
                    case 186:
                        bVar2 = param_1->g1();
                        field_960 = (uint)bVar2;
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
                    uVar4 = param_1->g2();
                    uVar34 = (uint)uVar4;
                    if (uVar4 == 65535) {
                        uVar34 = 4294967295;
                    }
                    field_1004 = uVar34;
                    uVar4 = param_1->g2();
                    uVar34 = (uint)uVar4;
                    uVar12 = 4294967295;
                    if (uVar4 == 65535) {
                        uVar34 = 4294967295;
                    }
                    field_1000 = uVar34;
                    if (param_2 == 92) {
                        uVar12 = param_1->gSmart2or4s();
                    }
                    uVar4 = param_1->gSmart1or2();
                    puVar22 = &field_976;
                    uVar33 = 0;
                    puVar22->set_max_size((ulong)(uVar4 + 2), 0);
                    do {
                        uVar15 = param_1->gSmart2or4s();
                        puVar24 = (undefined4*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)puVar22, uVar33);
                        *puVar24 = uVar15;
                        uVar33 = uVar33 + 1;
                    } while (uVar4 + 1 != uVar33);
                    puVar24 = (undefined4*)Array<int, eastl::allocator>::operator[](
                        (Array<int, eastl::allocator>*)puVar22, (ulong)(uVar4 + 1));
                    *puVar24 = uVar12;
                    break;
                case 78:
                    puVar25 = (uint*)MakeLocationSoundData(this);
                    uVar4 = param_1->g2();
                    *puVar25 = (uint)uVar4;
                    bVar2 = param_1->g1();
                    puVar25[1] = (uint)bVar2;
                    break;
                case 79:
                    lVar23 = MakeLocationSoundData(this);
                    uVar4 = param_1->g2();
                    *(uint*)(lVar23 + 48) = (uint)uVar4;
                    uVar4 = param_1->g2();
                    *(uint*)(lVar23 + 52) = (uint)uVar4;
                    bVar2 = param_1->g1();
                    *(uint*)(lVar23 + 4) = (uint)bVar2;
                    bVar2 = param_1->g1();
                    ((lVar23 + 56))->set_max_size((ulong)bVar2, 0);
                    if (bVar2 != 0) {
                        uVar33 = 0;
                        do {
                            uVar4 = param_1->g2();
                            puVar25 = (uint*)Array<int, eastl::allocator>::operator[](
                                (Array<int, eastl::allocator>*)(lVar23 + 56), uVar33);
                            *puVar25 = (uint)uVar4;
                            uVar33 = uVar33 + 1;
                        } while (bVar2 != uVar33);
                    }
                    break;
                case 81:
                    m_hillChangeType = 2;
                    bVar2 = param_1->g1();
                    m_hillChangeParam = (uint)bVar2 << 8;
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
                    uVar4 = param_1->g2();
                    m_hillChangeParam = (uint)uVar4;
                    break;
                case 94:
                    m_hillChangeType = 4;
                    break;
                case 95:
                    m_hillChangeType = 5;
                    sVar6 = param_1->g2s();
                    m_hillChangeParam = (int)sVar6;
                    break;
                case 97:
                    field_972 = 1;
                    break;
                case 98:
                    m_hasParticles = 1;
                    break;
                case 101:
                    uVar1 = param_1->g1();
                    m_mapSceneIconRotate90Offset = uVar1;
                    break;
                case 102:
                    uVar4 = param_1->g2();
                    m_mapSceneIcon = (uint)uVar4;
                    break;
                case 103:
                    break;
                case 104:
                    lVar23 = MakeLocationSoundData(this);
                    bVar2 = param_1->g1();
                    *(uint*)(lVar23 + 12) = (uint)bVar2;
                    break;
                case 105:
                    field_974 = 1;
                    break;
                case 106:
                    bVar2 = param_1->g1();
                    puVar22 = &field_896;
                    uVar33 = (ulong)bVar2;
                    uVar34 = 0;
                    puVar22->set_max_size(uVar33, 0);
                    if (bVar2 != 0) {
                        uVar36 = 0;
                        uVar34 = 0;
                        do {
                            uVar12 = param_1->gSmart2or4s();
                            puVar24 = (undefined4*)Array<LocType::AnimationWithWeights, eastl::allocator>::operator[](
                                (Array<LocType::AnimationWithWeights, eastl::allocator>*)puVar22, uVar36);
                            *puVar24 = uVar12;
                            bVar2 = param_1->g1();
                            lVar23 = Array<LocType::AnimationWithWeights, eastl::allocator>::operator[](
                                (Array<LocType::AnimationWithWeights, eastl::allocator>*)puVar22, uVar36);
                            *(uint*)(lVar23 + 4) = (uint)bVar2;
                            uVar34 = uVar34 + bVar2;
                            uVar36 = uVar36 + 1;
                        } while (uVar33 != uVar36);
                    }
                    if (uVar33 != 0) {
                        uVar36 = 0;
                        do {
                            lVar23 = Array<LocType::AnimationWithWeights, eastl::allocator>::operator[](
                                (Array<LocType::AnimationWithWeights, eastl::allocator>*)puVar22, uVar36);
                            iVar13 = *(int*)(lVar23 + 4);
                            lVar23 = Array<LocType::AnimationWithWeights, eastl::allocator>::operator[](
                                (Array<LocType::AnimationWithWeights, eastl::allocator>*)puVar22, uVar36);
                            *(uint*)(lVar23 + 4) = (uint)(iVar13 * 65535) / uVar34;
                            uVar36 = uVar36 + 1;
                        } while (uVar33 != uVar36);
                    }
                    break;
                case 107:
                    uVar4 = param_1->g2();
                    m_mapElement = (uint)uVar4;
                }
                break;
            case 44:
                uVar4 = param_1->g2();
                uVar34 = (uint)uVar4;
                if (uVar4 == 0) {
                    uVar32 = 0;
                } else {
                    uVar32 = 0;
                    uVar33 = (ulong)(uint)uVar4;
                    do {
                        uVar32 = uVar32 + 1;
                        uVar33 = uVar33 >> 1;
                        bVar37 = 1 < uVar34;
                        uVar34 = (uint)uVar33;
                    } while (bVar37);
                }
                (&field_728, (ulong)uVar32, 0)->set_max_size();
                if (uVar32 != 0) {
                    uVar33 = 0;
                    uVar34 = 0;
                    do {
                        uVar14 = 1 << ((byte)uVar33 & 31) & (uint)uVar4;
                        puVar25 = (uint*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&field_728, uVar33);
                        *puVar25 = -(uint)(uVar14 == 0) | uVar34;
                        uVar33 = uVar33 + 1;
                        uVar34 = (uVar34 + 1) - (uint)(uVar14 == 0);
                    } while (uVar32 != uVar33);
                }
                break;
            case 45:
                uVar4 = param_1->g2();
                uVar34 = (uint)uVar4;
                if (uVar4 == 0) {
                    uVar32 = 0;
                } else {
                    uVar32 = 0;
                    uVar33 = (ulong)(uint)uVar4;
                    do {
                        uVar32 = uVar32 + 1;
                        uVar33 = uVar33 >> 1;
                        bVar37 = 1 < uVar34;
                        uVar34 = (uint)uVar33;
                    } while (bVar37);
                }
                (&field_800, (ulong)uVar32, 0)->set_max_size();
                if (uVar32 != 0) {
                    uVar33 = 0;
                    uVar34 = 0;
                    do {
                        uVar14 = 1 << ((byte)uVar33 & 31) & (uint)uVar4;
                        puVar25 = (uint*)Array<int, eastl::allocator>::operator[](
                            (Array<int, eastl::allocator>*)&field_800, uVar33);
                        *puVar25 = -(uint)(uVar14 == 0) | uVar34;
                        uVar33 = uVar33 + 1;
                        uVar34 = (uVar34 + 1) - (uint)(uVar14 == 0);
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
            bVar2 = param_1->g1();
            field_924 = (uint)bVar2;
            break;
        case 15:
            bVar2 = param_1->g1();
            field_928 = (uint)bVar2;
            break;
        case 17:
            field_932 = 0;
        case 18:
            field_936 = 0;
            break;
        case 19:
            bVar2 = param_1->g1();
            field_940 = (uint)bVar2;
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
            iVar13 = param_1->gSmart2or4s();
            if (iVar13 != -1) {
                (&field_896, 1, 0)->set_max_size();
                piVar18 = (int*)Array<LocType::AnimationWithWeights, eastl::allocator>::operator[](
                    (Array<LocType::AnimationWithWeights, eastl::allocator>*)&field_896, 0);
                *piVar18 = iVar13;
            }
            break;
        case 27:
            field_932 = 1;
            break;
        case 28:
            bVar2 = param_1->g1();
            m_wallWidth = (ushort)bVar2;
            break;
        case 29:
            cVar3 = param_1->g1s();
            field_840 = cVar3 + 64;
        }
        return DataStatus::READY;
    }

    // 0x100527860, 432 bytes, placed by class name and debug map
    // LocType::PostDecode()
    void LocType::PostDecode() {
        undefined1* this_00;
        uint uVar1;
        char cVar2;
        int iVar3;
        long lVar4;
        char* pcVar5;
        ulong uVar6;
        bool bVar7;

        if (field_940 == 4294967295) {
            field_940 = 0;
            lVar4 = (&field_568)->end();
            if ((lVar4 == 1) && (pcVar5 = (char*)Array<LocShape, eastl::allocator>::operator[](
                                     (Array<LocShape, eastl::allocator>*)&field_568, 0),
                                 *pcVar5 == '\n')) {
                field_940 = 1;
            }
            uVar6 = 0;
            do {
                eastl::vector<eastl::fixed_string<char, 24, true, eastl::allocator>,
                              eastl::fixed_vector_allocator<64ul, 6ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[](
                    (vector<eastl::fixed_string<char, 24, true, eastl::allocator>,
                            eastl::fixed_vector_allocator<64ul, 6ul, 8ul, 0ul, true, eastl::allocator>>*)&field_56,
                    uVar6);
                cVar2 = eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                if (cVar2 == '\0') {
                    field_940 = 1;
                    uVar1 = field_940;
                    goto joined_r0x000100527908;
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 != 5);
        }
        uVar1 = field_940;
    joined_r0x000100527908:
        if ((0 < (int)uVar1) || (field_960 == 0)) {
            m_findable = 1;
        }
        if (field_948 == 4294967295) {
            field_948 = (uint)(field_932 != 0);
        }
        cVar2 = field_24->IsMembersServer();
        if ((cVar2 == '\0') && (field_512 != '\0')) {
            (&field_544)->clear();
            (&field_56)->clear();
            (&field_56, 6)->resize();
        }
        this_00 = &field_56;
        eastl::vector<eastl::fixed_string<char, 24, true, eastl::allocator>,
                      eastl::fixed_vector_allocator<64ul, 6ul, 8ul, 0ul, true, eastl::allocator>>::
        operator[]((vector<eastl::fixed_string<char, 24, true, eastl::allocator>,
                           eastl::fixed_vector_allocator<64ul, 6ul, 8ul, 0ul, true, eastl::allocator>>*)this_00,
                   5);
        cVar2 =
            eastl::basic_string<char,
                                eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
        if (cVar2 == '\0') {
            iVar3 = this_00->size();
            bVar7 = 0 < iVar3;
            if (0 < iVar3) {
                uVar6 = 0;
                do {
                    if (uVar6 != 5) {
                        eastl::vector<eastl::fixed_string<char, 24, true, eastl::allocator>,
                                      eastl::fixed_vector_allocator<64ul, 6ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[]((vector<eastl::fixed_string<char, 24, true, eastl::allocator>,
                                           eastl::fixed_vector_allocator<64ul, 6ul, 8ul, 0ul, true, eastl::allocator>>*)
                                       this_00,
                                   uVar6);
                        cVar2 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::empty();
                        if (cVar2 == '\0')
                            break;
                    }
                    uVar6 = uVar6 + 1;
                    iVar3 = this_00->size();
                    bVar7 = (long)uVar6 < (long)iVar3;
                } while ((long)uVar6 < (long)iVar3);
            }
            m_examineOnly = ~bVar7 & 1;
        }
        if (field_947 != '\0') {
            field_932 = 0;
            field_936 = 1;
        }
    }

    // 0x100527a90, 416 bytes, placed by class name and debug map
    // LocType::GetLocationOnFlatGround(LocType const&, int, HeightMap const&, int, unsigned int, unsigned int, Rotation90, bool) const
    bool LocType::GetLocationOnFlatGround(undefined8 param_1_00, LocType* param_1, int param_2, HeightMap* param_3,
                                          undefined4 param_4, int param_5, int param_6, undefined1 param_8,
                                          undefined1 param_9) {
        int iVar1;
        undefined* puVar2;
        uint uVar3;
        char cVar4;
        uint uVar5;
        uint uVar6;
        uint uVar7;
        uint uVar8;
        int local_3c;
        uint local_38;
        char local_31;

        uVar3 = param_5 - 1;
        if (param_5 == 0) {
            uVar3 = 0;
        }
        iVar1 = GetGridWidth(param_1, param_8);
        uVar7 = param_5 + iVar1 + 1;
        uVar5 = param_6 - 1;
        if (param_6 == 0) {
            uVar5 = 0;
        }
        iVar1 = GetGridLength(param_1, param_8);
        uVar6 = param_6 + iVar1 + 1;
        local_31 = uVar6 < uVar5;
        if (uVar3 <= uVar7) {
            local_38 = uVar5 + 1;
            do {
                iVar1 = 5;
                cVar4 = local_31;
                if (uVar5 <= uVar6) {
                    puVar2 = (undefined*)param_3->GetTileHeight(&local_3c, param_4, uVar3, uVar5, param_9, 0);
                    uVar8 = local_38;
                    if (puVar2 != DataStatus::READY)
                        goto LAB_100527bb0;
                    if (local_3c < 1)
                        goto LAB_100527bb0;
                    cVar4 = local_31;
                    while (local_3c == param_2) {
                    LAB_100527bb0:
                        do {
                            cVar4 = uVar6 < uVar8;
                            if (uVar6 < uVar8) {
                                iVar1 = 5;
                                if (!(bool)cVar4)
                                    goto LAB_100527b0f;
                                goto LAB_100527b49;
                            }
                            puVar2 = (undefined*)param_3->GetTileHeight(&local_3c, param_4, uVar3, uVar8, param_9, 0);
                            uVar8 = uVar8 + 1;
                        } while ((puVar2 != DataStatus::READY) || (local_3c < 1));
                    }
                    iVar1 = 1;
                }
                if (cVar4 == '\0')
                    goto LAB_100527b0f;
            LAB_100527b49:
                uVar3 = uVar3 + 1;
            } while (uVar3 <= uVar7);
        }
        iVar1 = 2;
    LAB_100527b0f:
        return iVar1 == 2;
    }

    // 0x100527c30, 32 bytes, placed by class name and debug map
    // LocType::GetGridWidth(Rotation90) const
    undefined4 LocType::GetGridWidth(byte param_2) {
        return *(undefined4*)(field_1016 + (ulong)((param_2 & 253) != 0) * 4 + -92);
    }

    // 0x100527c50, 32 bytes, placed by class name and debug map
    // LocType::GetGridLength(Rotation90) const
    undefined4 LocType::GetGridLength(byte param_2) {
        return *(undefined4*)(field_1016 + (ulong)((param_2 & 253) == 0) * 4 + -92);
    }

    // 0x100527c70, 624 bytes, placed by class name and debug map
    // LocType::GetLocationHeight(LocType const&, HeightMap const&, int, unsigned int, unsigned int, Rotation90, bool) const
    ulong LocType::GetLocationHeight(undefined8 param_1_00, LocType* param_1, HeightMap* param_2, undefined4 param_3,
                                     uint param_4, uint param_5, undefined1 param_7, undefined1 param_8) {
        undefined* puVar1;
        undefined* puVar2;
        uint uVar3;
        undefined* puVar4;
        undefined* puVar5;
        undefined* puVar6;
        undefined* puVar7;
        int iVar8;
        int iVar9;
        int iVar10;
        ulong uVar11;
        ulong uVar12;
        float fVar13;
        undefined4 uVar14;
        float fVar15;
        int local_64;
        int local_60;
        int local_5c;
        int local_58;
        int local_54;
        undefined* local_50;
        ulong local_40;
        float local_34;

        local_40._0_4_ = (float)param_4;
        uVar3 = GetGridWidth(param_1, param_7);
        local_40._0_4_ = (float)uVar3 * 0.5 + (float)local_40;
        local_34 = (float)ceil((float)local_40);
        fVar13 = (float)floor((float)local_40);
        local_40._0_4_ = (float)param_5;
        uVar3 = GetGridLength(param_1, param_7);
        local_40._0_4_ = (float)uVar3 * 0.5 + (float)local_40;
        uVar14 = ceil((float)local_40);
        local_50 = (undefined*)CONCAT44(local_50._4_4_, uVar14);
        fVar15 = (float)floor((float)local_40);
        uVar14 = param_3;
        local_40 = (long)fVar13;
        puVar4 = (undefined*)param_2->GetTileHeight(&local_64, param_3, (long)fVar13 & 4294967295,
                                                    (long)fVar15 & 4294967295, param_8, 0);
        puVar1 = DataStatus::READY;
        if (puVar4 != DataStatus::NOTLOADED) {
            uVar12 = (ulong)local_34;
            local_34 = (float)local_64;
            puVar5 = (undefined*)param_2->GetTileHeight(&local_60, uVar14, uVar12 & 4294967295,
                                                        (long)fVar15 & 4294967295, param_8, 0);
            if (puVar5 != DataStatus::NOTLOADED) {
                uVar11 = (ulong)local_50._0_4_;
                local_50 = DataStatus::READY;
                puVar6 = (undefined*)param_2->GetTileHeight(&local_5c, uVar14, uVar12 & 4294967295, uVar11, param_8, 0);
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
                    puVar7 = (undefined*)param_2->GetTileHeight(&local_58, param_3, local_40, uVar11 & 4294967295,
                                                                param_8, 0);
                    if (puVar7 != DataStatus::NOTLOADED) {
                        uVar3 = (puVar4 == puVar1) + 1;
                        if (puVar5 != local_50) {
                            uVar3 = (uint)(puVar4 == puVar1);
                        }
                        iVar8 = (uint)(puVar7 == DataStatus::READY) + (puVar6 == puVar2) + uVar3;
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

    // 0x100527f00, 960 bytes, placed by class name and debug map
    // LocType::GetHillData(Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>&, LocType const&, HeightMap const&, int, unsigned int, unsigned int, Rotation90, bool) const
    undefined8 LocType::GetHillData(Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>* param_1,
                                    Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>* param_2,
                                    LocType* param_3, HeightMap* param_4, undefined8 param_6_00, uint param_6,
                                    uint param_7, undefined1 param_9, byte param_10) {
        undefined4 uVar1;
        ulong uVar2;
        uint uVar3;
        ulong uVar4;
        undefined* puVar5;
        undefined4* puVar6;
        undefined8 uVar7;
        uint uVar8;
        ulong uVar9;
        byte bVar10;
        undefined4 local_98;
        undefined4 local_94;
        Array<int, BucketAllocatorEASTL>* local_88;
        Array<int, BucketAllocatorEASTL>* local_80;
        ulong local_78;
        ulong local_68;
        ulong local_60;
        ulong local_58;
        ulong local_48;
        ulong local_40;
        byte local_31;

        local_78 = (ulong)param_7;
        local_68 = (ulong)param_6;
        local_48 = GetGridWidth(param_3, param_9);
        local_40 = GetGridLength(param_3, param_9);
        uVar3 = m_hillChangeType;
        uVar4 = (ulong)uVar3;
        if ((uVar3 < 6) && ((46U >> (uVar3 & 31) & 1) != 0)) {
            uVar8 = (int)local_48 + 3;
            param_1->set_max_size((ulong)uVar8, 0);
            uVar3 = (int)local_40 + 3;
            local_60 = (ulong)uVar3;
            local_31 = uVar3 != 0;
            if (uVar8 == 0) {
                uVar4 = 0;
                goto LAB_1005280fd;
            }
            local_58 = (ulong)(param_7 - 1);
            uVar9 = 0;
            do {
                local_80 = (Array<int, BucketAllocatorEASTL>*)
                    Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>::operator[](param_1, uVar9);
                uVar2 = local_60;
                local_80->set_max_size(local_60, 0);
                uVar4 = 0;
                bVar10 = local_31;
                if (uVar2 != 0) {
                    local_88 = (Array<int, BucketAllocatorEASTL>*)CONCAT44(local_88._4_4_, (param_6 - 1) + (int)uVar9);
                    bVar10 = true;
                    uVar4 = 0;
                    do {
                        puVar5 = (undefined*)param_4->GetTileHeight(&local_98, param_6_00, (ulong)local_88 & 4294967295,
                                                                    (int)local_58 + (int)uVar4, param_10, 0);
                        uVar1 = local_98;
                        if (puVar5 == DataStatus::NOTLOADED) {
                            param_1->set_max_size(0, 0);
                            uVar4 = 1;
                            goto LAB_1005280c9;
                        }
                        puVar6 = (undefined4*)Array<int, BucketAllocatorEASTL>::operator[](local_80, uVar4);
                        *puVar6 = uVar1;
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
            if (((int)param_6_00 < 3) && (uVar3 = m_hillChangeType & 4294967294, uVar4 = (ulong)uVar3, uVar3 == 4)) {
                uVar8 = (int)local_48 + 3;
                param_2->set_max_size((ulong)uVar8, 0);
                uVar3 = (int)local_40 + 3;
                local_40 = (ulong)uVar3;
                local_80 = (Array<int, BucketAllocatorEASTL>*)CONCAT71(local_80._1_7_, uVar3 != 0);
                if (uVar8 == 0) {
                    uVar4 = 0;
                } else {
                    local_68 = (ulong)((int)local_68 - 1);
                    local_78 = (ulong)((int)local_78 - 1);
                    uVar9 = 0;
                    local_48 = (ulong)uVar8;
                    do {
                        local_88 = (Array<int, BucketAllocatorEASTL>*)
                            Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>::operator[](param_2, uVar9);
                        uVar2 = local_40;
                        local_88->set_max_size(local_40, 0);
                        uVar4 = 0;
                        bVar10 = (byte)local_80;
                        if (uVar2 != 0) {
                            local_60 = CONCAT44(local_60._4_4_, (int)local_68 + (int)uVar9);
                            bVar10 = true;
                            uVar4 = 0;
                            local_58 = uVar9;
                            do {
                                puVar5 = (undefined*)param_4->GetTileHeight(&local_94, (uint)param_10 + (int)param_6_00,
                                                                            local_60 & 4294967295,
                                                                            (int)local_78 + (int)uVar4, 1, 0);
                                uVar1 = local_94;
                                if (puVar5 == DataStatus::NOTLOADED) {
                                    param_1->set_max_size(0, 0);
                                    param_2->set_max_size(0, 0);
                                    uVar4 = 1;
                                    uVar9 = local_58;
                                    goto LAB_100528272;
                                }
                                puVar6 = (undefined4*)Array<int, BucketAllocatorEASTL>::operator[](local_88, uVar4);
                                *puVar6 = uVar1;
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
            uVar7 = CONCAT71((int7)(uVar4 >> 8), 1);
        }
        return uVar7;
    }

    // 0x100528340, 464 bytes, placed by class name and debug map
    // LocType::GetMaxRemoveRoofLevel(LinkMap const&, int, unsigned int, unsigned int, Rotation90) const
    int LocType::GetMaxRemoveRoofLevel(LinkMap* param_1, byte param_3_00, int param_3, uint param_4, byte param_6) {
        uint uVar1;
        char cVar2;
        int iVar4;
        int iVar5;
        uint uVar6;
        uint uVar7;
        byte bVar8;
        uint uVar9;
        uint uVar10;
        uint uVar11;
        uint uVar12;
        bool bVar13;
        uint local_38;

        uVar9 = param_4 - 1;
        local_38 = (uint)param_6;
        do {
            do {
                bVar8 = param_3_00;
                param_3_00 = bVar8 - 1;
                if ((char)param_3_00 < '\0') {
                    local_38._0_1_ = -1;
                LAB_1005284f3:
                    return (int)(char)local_38;
                }
                iVar4 = GetGridWidth(this, (uint)param_6);
                iVar5 = GetGridLength(this, (uint)param_6);
                uVar11 = iVar4 + param_3 + 1;
                uVar10 = param_4 + 1 + iVar5;
            } while (uVar11 <= param_3 - 1U);
            uVar6 = (uint)(char)param_3_00;
            uVar12 = param_3 - 1U;
            do {
                bVar13 = uVar9 < uVar10;
                if (uVar9 < uVar10) {
                    cVar2 = param_1->IsRemoveRoof(uVar6, uVar12, uVar9);
                    uVar7 = uVar9;
                    uVar1 = param_4;
                    iVar4 = iVar5 + 1;
                    if (cVar2 == '\0') {
                        do {
                            uVar7 = uVar1;
                            bVar13 = uVar7 < uVar10;
                            if (iVar4 == 0)
                                goto joined_r0x000100528415;
                            cVar2 = param_1->IsRemoveRoof(uVar6, uVar12, uVar7);
                            uVar1 = uVar7 + 1;
                            iVar4 = iVar4 + -1;
                        } while (cVar2 == '\0');
                    }
                    cVar2 = param_1->IsLinkBelow(uVar12, uVar7);
                    local_38 = (uint)bVar8;
                    if (cVar2 == '\0') {
                        local_38 = uVar6;
                    }
                    iVar4 = 1;
                    if (bVar13)
                        goto LAB_1005284e0;
                } else {
                joined_r0x000100528415:
                    iVar4 = 8;
                    if (bVar13) {
                    LAB_1005284e0:
                        if (iVar4 != 5)
                            goto LAB_1005284f3;
                        break;
                    }
                }
                uVar12 = uVar12 + 1;
            } while (uVar12 != uVar11);
        } while (true);
    }

    // 0x100528510, 208 bytes, placed by class name and debug map
    // LocType::GetMultiLocValue(int&, int&, int&, int&, PlayerVarDomain const*, ConfigProvider*) const
    undefined* LocType::GetMultiLocValue(int* param_1, int* param_2, int* param_3, int* param_4,
                                         PlayerVarDomain* param_5, ConfigProvider* param_6) {
        int iVar1;
        shared_ptr<VarBitType>* this_00;
        Logger* this_01;
        shared_ptr<VarType>* this_02;
        GameToken* this_03;
        undefined8 uVar2;
        VarValue* this_04;
        undefined** ppuVar3;

        *param_1 = 0;
        *param_2 = field_1000;
        *param_3 = field_1004;
        *param_4 = -1;
        if (param_5 == (PlayerVarDomain*)0) {
            ppuVar3 = &DataStatus::MISSING;
            goto LAB_1005285d4;
        }
        if (field_1004 == 4294967295) {
            if (field_1000 != 4294967295) {
                uVar2 = param_6->GetVarType(VarDomainType::PLAYER, field_1000);
                this_04 = (VarValue*)(*(code*)param_5->field_0[2])(param_5, uVar2);
                iVar1 = this_04->GetInt();
                goto LAB_1005285ca;
            }
        } else {
            this_00 = (shared_ptr<VarBitType>*)param_6->GetVarBitType(field_1004);
            this_01 = (Logger*)shared_ptr<VarBitType>::operator->(this_00);
            this_02 = (shared_ptr<VarType>*)this_01->GetLogStreams();
            this_03 = (GameToken*)shared_ptr<VarType>::operator->(this_02);
            iVar1 = this_03->GetStatus();
            *param_4 = iVar1;
            iVar1 = (*(code*)param_5->field_0[4])(param_5, this_00);
        LAB_1005285ca:
            *param_1 = iVar1;
        }
        ppuVar3 = &DataStatus::READY;
    LAB_1005285d4:
        return *ppuVar3;
    }

    // 0x1005285e0, 304 bytes, placed by class name and debug map
    // LocType::GetMultiLoc(shared_ptr<LocType>&, PlayerVarDomain const*, ConfigProvider*)
    undefined* LocType::GetMultiLoc(shared_ptr* param_1, PlayerVarDomain* param_2, ConfigProvider* param_3) {
        int iVar2;
        undefined8 uVar3;
        VarValue* this_00;
        shared_ptr* extraout_RDX;
        enable_shared_from_this<PathingEntity> local_48[16];
        shared_ptr local_38;

        if (IsMultiLoc(this) == '\0') {
            local_48->shared_from_this();
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(&local_38, (jag*)local_48,
                                                                                         extraout_RDX);
            shared_ptr<LocType>::operator=((shared_ptr<LocType>*)param_1, &local_38);
            local_38.~shared_ptr();
            local_48->~shared_ptr();
            return DataStatus::READY;
        }
        iVar2 = m_multiLocIndex;
        if ((iVar2 < 0) && (iVar2 = -1, param_2 != (PlayerVarDomain*)0)) {
            if (field_1004 == 4294967295) {
                if (field_1000 != 4294967295) {
                    uVar3 = param_3->GetVarType(VarDomainType::PLAYER, field_1000);
                    this_00 = (VarValue*)(*(code*)param_2->field_0[2])(param_2, uVar3);
                    iVar2 = this_00->GetInt();
                }
            } else {
                uVar3 = param_3->GetVarBitType(field_1004);
                iVar2 = (*(code*)param_2->field_0[4])(param_2, uVar3);
            }
        }
        return (undefined*)GetMultiLoc(this, param_1, iVar2, param_2 != (PlayerVarDomain*)0);
    }

    // 0x100528710, 384 bytes, placed by class name and debug map
    // LocType::CheckModel(LocShape)
    ulong LocType::CheckModel(char param_2) {
        undefined1* this_00;
        undefined8 uVar1;
        char cVar2;
        char cVar3;
        int iVar4;
        char* pcVar5;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* pvVar6;
        long* plVar7;
        Array<int, eastl::allocator>* this_01;
        undefined4* puVar8;
        undefined* puVar9;
        undefined1 uVar10;
        undefined8 unaff_RBX;
        undefined7 uVar11;
        undefined1* this_02;
        ulong uVar12;
        ulong uVar13;

        this_02 = &field_592;
        cVar2 = this_02->empty();
        uVar11 = (undefined7)((ulong)unaff_RBX >> 8);
        uVar13 = CONCAT71(uVar11, 1);
        if (cVar2 == '\0') {
            cVar2 = '\x02';
            if (param_2 != '\x17') {
                cVar2 = param_2;
            }
            cVar3 = '\b';
            if (cVar2 != '\x18') {
                cVar3 = cVar2;
            }
            this_00 = &field_568;
            iVar4 = this_00->end();
            uVar10 = 1;
            if (0 < iVar4) {
                uVar13 = 0;
                do {
                    pcVar5 = (char*)Array<LocShape, eastl::allocator>::operator[](
                        (Array<LocShape, eastl::allocator>*)this_00, uVar13);
                    if (*pcVar5 == cVar3) {
                        pvVar6 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                            Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                (Array<Array<int, eastl::allocator>, eastl::allocator>*)this_02, uVar13);
                        iVar4 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(pvVar6);
                        if (0 < iVar4) {
                            uVar12 = 0;
                            do {
                                plVar7 = (long*)field_24->GetOutputType();
                                uVar1 = Js5Archive::JS5_MODELSRT7;
                                this_01 = (Array<int, eastl::allocator>*)
                                    Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)this_02, uVar13);
                                puVar8 = (undefined4*)Array<int, eastl::allocator>::operator[](this_01, uVar12);
                                puVar9 = (undefined*)(**(code**)(*plVar7 + 48))(plVar7, uVar1, *puVar8, 0,
                                                                                Priority::HIGH, 1);
                                if (puVar9 != DataStatus::READY) {
                                    uVar10 = 0;
                                }
                                uVar11 = 0;
                                uVar12 = uVar12 + 1;
                                pvVar6 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                    Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                        (Array<Array<int, eastl::allocator>, eastl::allocator>*)this_02, uVar13);
                                iVar4 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(
                                    pvVar6);
                            } while ((long)uVar12 < (long)iVar4);
                        }
                    }
                    uVar13 = uVar13 + 1;
                    iVar4 = this_00->end();
                } while ((long)uVar13 < (long)iVar4);
            }
            uVar13 = CONCAT71(uVar11, uVar10);
        }
        return uVar13 & 4294967295;
    }

    // 0x100528890, 1952 bytes, placed by class name and debug map
    // LocType::GetModels(graphics::RT7Core*, AssetBuilder&, BuildRequest<graphics::Model, BuildModelMain>&, LocShape, Rotation90, bool, LocTypeCustomisation const*, AssetJobPriority)
    Logger* LocType::GetModels(undefined8 param_1_00, undefined4 param_2_00, Js5ArchiveSettings* param_1,
                               RT7Core* param_2, AssetBuilder* param_3,
                               BuildRequest<graphics::Model, BuildModelMain>* param_6, char param_7, undefined1 param_8,
                               char param_9, Logger* param_10, undefined4 param_11) {
        uint uVar1;
        bool bVar2;
        bool bVar3;
        bool bVar4;
        bool bVar5;
        Js5ArchiveSettings* pJVar6;
        bool bVar7;
        char cVar8;
        char cVar9;
        char cVar10;
        byte bVar11;
        byte bVar12;
        undefined** ppuVar13;
        long lVar14;
        char* pcVar15;
        RT7Core* pRVar16;
        Array<VarValue, eastl::allocator>* pAVar17;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* pAVar18;
        uint* puVar19;
        Js5ResourceProvider* pJVar20;
        undefined* puVar21;
        vector* this;
        Model* pMVar22;
        Logger* pLVar23;
        PacketView* this_00;
        uint* puVar24;
        BuildModelMain* pBVar25;
        Array* pAVar26;
        bool bVar27;
        RT7Core* pRVar28;
        Logger* pLVar29;
        RT7Core* pRVar30;
        bool bVar31;
        PacketView local_108;
        AssetBuilder* local_e0;
        RT7Core* local_d8;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* local_d0;
        BuildRequest<graphics::Model, BuildModelMain>* local_c8;
        shared_ptr local_c0;
        Js5ArchiveSettings* local_b0;
        shared_ptr local_a8;
        Logger* local_98;
        ModelConstructedState local_8b;
        bool local_8a;
        undefined1 local_89;
        PacketView local_88[2];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        puVar19 = &param_1[8].m_totalSize;
        local_d8 = param_2;
        local_89 = param_8;
        cVar8 = puVar19->empty();
        if (cVar8 == '\0') {
            cVar8 = '\n';
            if (param_7 != '\v') {
                cVar8 = param_7;
            }
            local_b0 = param_1;
            cVar9 = LocShapes::IsWallDecorShape(cVar8);
            cVar10 = '\x04';
            if (cVar9 == '\0') {
                cVar10 = cVar8;
            }
            cVar8 = '\x02';
            if (cVar10 != '\x17') {
                cVar8 = cVar10;
            }
            cVar10 = '\b';
            if (cVar8 != '\x18') {
                cVar10 = cVar8;
            }
            cVar8 = param_6->IsTaskRunning();
            if (cVar8 == '\0') {
                cVar8 = param_6->IsEmpty();
                if (cVar8 != '\0') {
                    cVar8 = graphics::Model::IsReadyToConstruct(local_d8);
                    if (cVar8 == '\0')
                        goto LAB_1005289a2;
                    local_e0 = param_3;
                    lVar14 = puVar19->end();
                    pRVar30 = (RT7Core*)4294967295;
                    if (lVar14 != 0) {
                        pRVar28 = (RT7Core*)0;
                        do {
                            param_2 = pRVar28;
                            pcVar15 = (char*)Array<LocShape, eastl::allocator>::operator[](
                                (Array<LocShape, eastl::allocator>*)puVar19, (ulong)pRVar28);
                            if (*pcVar15 == cVar10) {
                                pRVar30 = pRVar28;
                                break;
                            }
                            pRVar28 = (RT7Core*)(ulong)((int)pRVar28 + 1);
                            pRVar16 = (RT7Core*)puVar19->end();
                        } while (pRVar28 < pRVar16);
                    }
                    pJVar6 = local_b0;
                    if ((int)pRVar30 == -1) {
                        ppuVar13 = &DataStatus::MISSING;
                    LAB_100528b1d:
                        cVar8 = '\0';
                        local_98 = (Logger*)*ppuVar13;
                    } else {
                        if (param_10 == (Logger*)0) {
                        LAB_1005289db:
                            pAVar18 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                             std::default_delete<LoadingScreenScript::AnimLayer>>,
                                             eastl::allocator>*)0;
                        } else {
                            pAVar17 = (Array<VarValue, eastl::allocator>*)param_10->second();
                            cVar8 = pAVar17->empty();
                            if (cVar8 != '\0')
                                goto LAB_1005289db;
                            pAVar18 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                             std::default_delete<LoadingScreenScript::AnimLayer>>,
                                             eastl::allocator>*)param_10->second();
                        }
                        local_c8 = param_6;
                        if (pAVar18 == (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                              std::default_delete<LoadingScreenScript::AnimLayer>>,
                                              eastl::allocator>*)0) {
                            param_2 = (RT7Core*)(long)(int)pRVar30;
                            pAVar18 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                                             std::default_delete<LoadingScreenScript::AnimLayer>>,
                                             eastl::allocator>*)
                                Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                                    (Array<Array<int, eastl::allocator>, eastl::allocator>*)&pJVar6[9].field_16,
                                    (ulong)param_2);
                        }
                        puVar19 = (uint*)pAVar18->data();
                        local_d0 = pAVar18;
                        local_98 = (Logger*)pAVar18->end();
                        bVar31 = (Logger*)puVar19 == local_98;
                        if (bVar31) {
                            bVar27 = false;
                            bVar2 = true;
                            pLVar23 = param_10;
                        } else {
                            bVar27 = false;
                            pLVar29 = param_10;
                            bVar3 = true;
                            bVar7 = true;
                            do {
                                bVar2 = bVar7;
                                uVar1 = *puVar19;
                                bVar4 = bVar2;
                                if (uVar1 == 4294967295) {
                                LAB_100528abd:
                                    bVar2 = bVar3;
                                    bVar5 = true;
                                    pLVar23 = pLVar29;
                                    bVar7 = bVar4;
                                } else {
                                    pJVar20 = (Js5ResourceProvider*)local_b0->field_24->GetOutputType();
                                    puVar21 = (undefined*)pJVar20->GroupReady(Js5Archive::JS5_MODELSRT7, uVar1,
                                                                              (Priority*)Priority::HIGH, true);
                                    bVar5 = false;
                                    if (puVar21 == DataStatus::NOTLOADED) {
                                        bVar4 = false;
                                    }
                                    bVar27 = true;
                                    param_2 = (RT7Core*)DataStatus::MISSING;
                                    pLVar23 = (Logger*)DataStatus::MISSING;
                                    bVar3 = bVar4;
                                    bVar7 = bVar2;
                                    if (puVar21 != DataStatus::MISSING)
                                        goto LAB_100528abd;
                                }
                                if (!bVar5)
                                    break;
                                puVar19 = puVar19 + 1;
                                bVar31 = (Logger*)puVar19 == local_98;
                                pLVar29 = pLVar23;
                                bVar3 = bVar2;
                            } while (!bVar31);
                        }
                        param_6 = local_c8;
                        local_98 = pLVar23;
                        if (bVar31) {
                            if (bVar27) {
                                if (bVar2) {
                                    new (local_88) eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>();
                                    pAVar18 = local_d0;
                                    this_00 = (PacketView*)local_d0->end();
                                    local_88->reserve((ulong)this_00);
                                    puVar19 = (uint*)pAVar18->data();
                                    puVar24 = (uint*)pAVar18->end();
                                    if (puVar19 != puVar24) {
                                        do {
                                            uVar1 = *puVar19;
                                            if (uVar1 != 4294967295) {
                                                new (&local_108) PacketView();
                                                pJVar20 = (Js5ResourceProvider*)local_b0->field_24->GetOutputType();
                                                pJVar20->GetFile(&local_108, Js5Archive::JS5_MODELSRT7, uVar1, 0,
                                                                 (Priority*)Priority::HIGH, true, false, false);
                                                this_00 = &local_108;
                                                eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>::push_back(
                                                    local_88);
                                                local_108.~PacketView();
                                            }
                                            puVar19 = puVar19 + 1;
                                        } while (puVar19 != puVar24);
                                    }
                                    if (param_10 == (Logger*)0) {
                                        bVar11 = 0;
                                        bVar12 = 0;
                                        param_6 = local_c8;
                                        pJVar6 = local_b0;
                                    } else {
                                        pAVar17 = (Array<VarValue, eastl::allocator>*)param_10->GetDefaultValue();
                                        bVar11 = pAVar17->empty();
                                        pJVar6 = local_b0;
                                        param_6 = local_c8;
                                        bVar11 = bVar11 ^ 1;
                                        pAVar17 = (Array<VarValue, eastl::allocator>*)param_10->GetLogStreams();
                                        bVar12 = pAVar17->empty();
                                        bVar12 = bVar12 ^ 1;
                                    }
                                    MakeSharedPool<graphics::Model, 3072>::MakeShared<>(
                                        (shared_ptr*)&local_108, (MakeSharedPool<graphics::Model, 3072>*)this_00);
                                    pMVar22 = (Model*)shared_ptr<graphics::Model>::operator->(
                                        (shared_ptr<graphics::Model>*)&local_108);
                                    pMVar22->SetSourceModelIDs(local_d0);
                                    local_c0._0_4_ = param_11;
                                    local_8b = (ModelConstructedState)3;
                                    local_8a = true;
                                    bucket_make_shared<BuildModelMain, int, graphics::ModelConstructedState, bool,
                                                       graphics::RT7Core*&,
                                                       eastl::fixed_vector<PacketView, 1ul, true, eastl::allocator>,
                                                       shared_ptr<graphics::Model>&>(
                                        (jag*)&local_a8, (int*)&local_c0, &local_8b, &local_8a, &local_d8,
                                        (fixed_vector*)local_88, (shared_ptr*)&local_108);
                                    pBVar25 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                        (shared_ptr<BuildModelMain>*)&local_a8);
                                    bVar31 = true;
                                    if (param_9 == '\0') {
                                        bVar31 = *(char*)((long)&pJVar6[10].field_8 + 4) != '\0';
                                    }
                                    pBVar25->SetMirror(bVar31);
                                    if (bVar11 == 0) {
                                        pBVar25 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                            (shared_ptr<BuildModelMain>*)&local_a8);
                                        pBVar25->SetRecolor((Array*)&pJVar6[10].field_16, (Array*)&pJVar6[10].field_40);
                                    } else {
                                        pBVar25 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                            (shared_ptr<BuildModelMain>*)&local_a8);
                                        pAVar26 = (Array*)param_10->GetDefaultValue();
                                        pBVar25->SetCustomRecolor((Array*)&pJVar6[10].field_16, pAVar26);
                                    }
                                    pBVar25 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                        (shared_ptr<BuildModelMain>*)&local_a8);
                                    pBVar25->SetRecolorPalette((Array*)(pJVar6 + 11));
                                    if (bVar12 == 0) {
                                        pBVar25 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                            (shared_ptr<BuildModelMain>*)&local_a8);
                                        pBVar25->SetRematerial((Array*)&pJVar6[11].m_groupIDLimit,
                                                               (Array*)&pJVar6[12].field_8);
                                    } else {
                                        pBVar25 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                            (shared_ptr<BuildModelMain>*)&local_a8);
                                        pAVar26 = (Array*)param_10->GetLogStreams();
                                        pBVar25->SetRematerial((Array*)&pJVar6[11].m_groupIDLimit, pAVar26);
                                    }
                                    pBVar25 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                        (shared_ptr<BuildModelMain>*)&local_a8);
                                    pBVar25->SetAmbientAdjust(*(ushort*)&pJVar6[13].field_8);
                                    pBVar25 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                        (shared_ptr<BuildModelMain>*)&local_a8);
                                    pBVar25->SetTint((int)(char)pJVar6[12].m_totalSize,
                                                     (int)*(char*)((long)&pJVar6[12].m_totalSize + 1),
                                                     (int)*(char*)((long)&pJVar6[12].m_totalSize + 2),
                                                     *(undefined1*)((long)&pJVar6[12].m_totalSize + 3));
                                    pBVar25 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                        (shared_ptr<BuildModelMain>*)&local_a8);
                                    pBVar25->SetShareLight(*(bool*)((long)&pJVar6[13].field_8 + 7));
                                    pBVar25 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                        (shared_ptr<BuildModelMain>*)&local_a8);
                                    local_c0._0_8_ = math::operator-((Vector3T*)&pJVar6[9].field_52, &local_89);
                                    local_c0.field_8._0_4_ = param_2_00;
                                    pBVar25->SetGlobalTranslation((Vector3T*)&local_c0);
                                    pBVar25 = (BuildModelMain*)shared_ptr<BuildModelMain>::operator->(
                                        (shared_ptr<BuildModelMain>*)&local_a8);
                                    local_c0._0_8_ = math::operator*((Vector3T*)&pJVar6[9].field_40, &local_89);
                                    local_c0.field_8._0_4_ = param_2_00;
                                    pBVar25->SetResize((Vector3T*)&local_c0);
                                    new (&local_c0) shared_ptr<oldscape::dash3d::Decor>(&local_a8);
                                    local_e0->SubmitJob(&local_c0);
                                    local_c0.~shared_ptr();
                                    param_2 = (RT7Core*)&local_108;
                                    param_6->SetObjAndTask(param_2, &local_a8);
                                    cVar8 = param_6->IsTaskDone();
                                    if (cVar8 == '\0') {
                                        local_98 = (Logger*)DataStatus::NOTLOADED;
                                    }
                                    local_a8.~shared_ptr();
                                    local_108.~shared_ptr();
                                    local_88->~fixed_vector();
                                    goto LAB_100528b29;
                                }
                                ppuVar13 = &DataStatus::NOTLOADED;
                            } else {
                                ppuVar13 = &DataStatus::READY;
                            }
                            goto LAB_100528b1d;
                        }
                        cVar8 = '\0';
                    }
                LAB_100528b29:
                    pLVar23 = local_98;
                    if (cVar8 == '\0')
                        goto LAB_100528b78;
                }
                this = param_6->SSOBeginPtr(param_2);
                pMVar22 = (Model*)shared_ptr<graphics::Model>::operator->((shared_ptr<graphics::Model>*)this);
                cVar8 = pMVar22->GetConstructedState();
                if (cVar8 != '\x03') {
                    /* WARNING: Subroutine does not return */
                    LogAssert("model.GetAsset()->GetConstructedState() == "
                              "graphics::ModelConstructedState::DATA_MAT_AND_ATLAS",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "config/loctype/LocType.cpp",
                              1153, (char*)0);
                }
                ppuVar13 = &DataStatus::READY;
            } else {
            LAB_1005289a2:
                ppuVar13 = &DataStatus::NOTLOADED;
            }
        } else {
            ppuVar13 = &DataStatus::MISSING;
        }
        pLVar23 = (Logger*)*ppuVar13;
    LAB_100528b78:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return pLVar23;
    }

    // 0x100529180, 304 bytes, placed by class name
    // LocType::GetModelHash(LocShape) const
    ulong LocType::GetModelHash(undefined4 param_2) {
        undefined1* this_00;
        char cVar1;
        undefined4 uVar2;
        long lVar3;
        char* pcVar4;
        ulong uVar5;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        int* piVar6;
        ulong uVar7;
        undefined4 uVar8;
        int iVar9;
        uint uVar10;
        ulong uVar11;
        char cVar12;
        byte bVar13;

        uVar8 = 10;
        if ((char)param_2 != '\v') {
            uVar8 = param_2;
        }
        cVar1 = LocShapes::IsWallDecorShape(uVar8);
        uVar2 = 4;
        if (cVar1 == '\0') {
            uVar2 = uVar8;
        }
        cVar1 = '\x02';
        if ((char)uVar2 != '\x17') {
            cVar1 = (char)uVar2;
        }
        cVar12 = '\b';
        if (cVar1 != '\x18') {
            cVar12 = cVar1;
        }
        this_00 = &field_568;
        lVar3 = this_00->end();
        if (lVar3 != 0) {
            uVar11 = 0;
            do {
                pcVar4 = (char*)Array<LocShape, eastl::allocator>::operator[](
                    (Array<LocShape, eastl::allocator>*)this_00, uVar11);
                iVar9 = (int)uVar11;
                if (*pcVar4 == cVar12) {
                    if (iVar9 == -1) {
                        return 18446744073709551615;
                    }
                    this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                        Array<Array<int, eastl::allocator>, eastl::allocator>::operator[](
                            (Array<Array<int, eastl::allocator>, eastl::allocator>*)&field_592, (long)iVar9);
                    lVar3 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
                    bVar13 = 0;
                    if (lVar3 == 0) {
                        return 0;
                    }
                    uVar10 = 1;
                    uVar11 = 0;
                    uVar5 = 0;
                    do {
                        piVar6 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)this_01,
                                                                                uVar11);
                        uVar5 = uVar5 | (long)*piVar6 << (bVar13 & 63);
                        uVar11 = (ulong)uVar10;
                        uVar7 = eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_01);
                        bVar13 = bVar13 + 20;
                        uVar10 = uVar10 + 1;
                    } while (uVar11 < uVar7);
                    return uVar5;
                }
                uVar11 = (ulong)(iVar9 + 1);
                uVar5 = this_00->end();
            } while (uVar11 < uVar5);
        }
        return 18446744073709551615;
    }

    // 0x100529330, 208 bytes, placed by class name
    // LocType::GetAnimation() const
    ulong LocType::GetAnimation() {
        uint uVar1;
        int iVar2;
        ulong uVar3;
        uint* puVar4;
        uint* puVar5;
        long lVar6;
        int iVar7;
        undefined1* this_00;
        bool bVar8;
        float extraout_XMM0_Da;

        this_00 = &field_896;
        uVar3 = this_00->end();
        if (uVar3 < 2) {
            lVar6 = this_00->end();
            if (lVar6 == 1) {
                puVar4 = (uint*)Array<LocType::AnimationWithWeights, eastl::allocator>::operator[](
                    (Array<LocType::AnimationWithWeights, eastl::allocator>*)this_00, 0);
                return (ulong)*puVar4;
            }
        } else {
            iVar2 = _rand();
            puVar4 = (uint*)this_00->data();
            puVar5 = (uint*)this_00->end();
            if (puVar4 != puVar5) {
                uVar3 = floor((float)iVar2 * 3.0517112e-05);
                bVar8 = false;
                iVar2 = (int)extraout_XMM0_Da;
                do {
                    uVar1 = puVar4[1];
                    iVar7 = iVar2 - uVar1;
                    if (iVar2 - uVar1 == 0 || iVar2 < (int)uVar1) {
                        uVar3 = (ulong)*puVar4;
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

    // 0x100529400, 192 bytes, placed by class name
    // LocType::GetLocationWorldMatrix(math::Matrix44T<float> const&, Rotation90)
    Matrix44T<float>* LocType::GetLocationWorldMatrix(Matrix44T<float>* param_1, long param_2, undefined8* param_3,
                                                      undefined1 param_4) {
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined8 uVar8;
        undefined4 uVar9;
        undefined8 local_50;
        undefined4 local_48;
        undefined8 local_40;
        undefined4 local_38;
        undefined8 local_30;
        undefined4 local_28;
        undefined1 local_21;

        uVar4 = *param_3;
        uVar5 = param_3[1];
        uVar9 = *(undefined4*)(param_3 + 2);
        uVar1 = *(undefined4*)((long)param_3 + 20);
        uVar2 = *(undefined4*)(param_3 + 3);
        uVar3 = *(undefined4*)((long)param_3 + 28);
        uVar6 = param_3[4];
        uVar7 = param_3[5];
        uVar8 = param_3[7];
        *(undefined8*)(param_1 + 48) = param_3[6];
        *(undefined8*)(param_1 + 56) = uVar8;
        *(undefined8*)(param_1 + 32) = uVar6;
        *(undefined8*)(param_1 + 40) = uVar7;
        *(undefined4*)(param_1 + 16) = uVar9;
        *(undefined4*)(param_1 + 20) = uVar1;
        *(undefined4*)(param_1 + 24) = uVar2;
        *(undefined4*)(param_1 + 28) = uVar3;
        *(undefined8*)param_1 = uVar4;
        *(undefined8*)(param_1 + 8) = uVar5;
        local_21 = param_4;
        local_30 = math::operator*((Vector3T*)(param_2 + 616), &local_21);
        local_28 = uVar9;
        param_1->ApplyScaling((Vector3T*)&local_30);
        local_50 = param_1->GetPos();
        local_48 = uVar9;
        local_40 = math::operator-((Vector3T*)(param_2 + 628), &local_21);
        local_38 = uVar9;
        local_30 = math::operator+((Vector3T*)&local_50, (Vector3T*)&local_40);
        local_28 = uVar9;
        param_1->SetPos((Vector3T*)&local_30);
        return param_1;
    }

    // 0x100529690, 48 bytes, placed by class name
    // LocType::CastsShadows(LocShape) const
    undefined8 LocType::CastsShadows(char param_2) {
        if ((field_846 == '\0') || ((param_2 == '\x16' && (field_845 == '\0')))) {
            return 0;
        }
        return 1;
    }

} // namespace jag::game

// 0x100527ee0, 16 bytes, placed by neighbouring functions
// ceil(float)
void ceil(float param_1) {
    _ceilf();
}

// 0x100527ef0, 16 bytes, placed by neighbouring functions
// floor(float)
void floor(float param_1) {
    _floorf();
}
