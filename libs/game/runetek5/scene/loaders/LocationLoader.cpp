// libs/game/runetek5/scene/loaders/LocationLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "LocationLoader.h"

namespace jag::game {
    // 0x1003db9b0
    unsigned long LocationLoader::Load(eastl::vector<shared_ptr<MapSquareLocation>>& mapSquareLocations,
                                       Js5ResourceProvider& js5ResourceProvider, ConfigProvider& configProvider,
                                       const LinkMap& linkMap) {
        uint8_t* puVar1;
        bool cVar2;
        unsigned int uVar3;
        bool bVar4;
        uint8_t uVar6;
        uint8_t bVar7;
        char cVar8;
        uint16_t uVar9;
        uint32_t uVar10;
        int iVar11;
        uint32_t uVar12;
        LocShape LVar13;
        unsigned long uVar14;
        long lVar15;
        vector<shared_ptr<MapSquareLocation>>* pvVar16;
        uint8_t* puVar17;
        Layout* pLVar18;
        shared_ptr<MapSquareLocation>* psVar19;
        shared_ptr<MapSquareLocation>* psVar20;
        int* piVar21;
        shared_ptr<LocType>* locType;
        shared_ptr* this_01;
        LocType* pLVar22;
        vector<eastl::vector<shared_ptr<MapSquareLocation>>>* pvVar23;
        ConfigProvider* this_02;
        vector<eastl::fixed_vector<ClientCompositeZone, 10ul>,
               eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true>>* this_03;
        vector<ClientCompositeZone, eastl::fixed_vector_allocator<20ul, 10ul, 4ul, 0ul, true>>* this_04;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_05;
        RotTransScale* rotTransScale;
        long lVar24;
        Logger* pLVar25;
        uint32_t* puVar26;
        vector<oldscape::rseven::ModelVertex>* modelVertexs;
        int iVar28;
        Js5ResourceProvider* pJVar29;
        unsigned long unaff_R12;
        unsigned long uVar30;
        int arg2;
        LocationLoader* pLVar31;
        bool* in_stack_fffffffffffffe30;
        schar* in_stack_fffffffffffffe38;
        uint32_t uVar32;
        shared_ptr<LocType>* in_stack_fffffffffffffe40;
        uint32_t uVar33;
        LocData local_1a8;
        MakeSharedPool<MapSquareLocation, 16384> local_170;
        unsigned long local_160;
        Js5ResourceProvider* local_158;
        unsigned long local_150;
        unsigned long local_148;
        int local_138;
        unsigned int local_134;
        Js5ResourceProvider* local_130;
        schar* local_128;
        unsigned long local_118;
        Layout* local_110;
        bool* local_108;
        bool* local_100;
        int* local_f8;
        Layout* local_e0;
        char local_cb;
        schar local_ca;
        schar local_c9;
        LogStream local_c8;

        unsigned int uVar27 = 1;
        ConfigProvider* local_e8 = configProvider;
        LocationLoader* local_d8 = this;
        if (field_56 != '\0')
            goto LAB_1003dbba4;
        if (field_8 == nullptr) {
            uVar14 = 1;
        } else {
            uVar14 = field_8->field_9800.size();
        }
        vector<eastl::vector<shared_ptr<MapSquareLocation>>>* local_f0 =
            (vector<eastl::vector<shared_ptr<MapSquareLocation>>>*)&field_24;
        char cVar5 = local_f0->empty();
        if (cVar5) {
            local_f0->resize(uVar14);
        }
        if (field_8 == nullptr) {
            pvVar16 = (vector<shared_ptr<MapSquareLocation>>*)(*local_f0)[0];
            puVar17 = (uint8_t*)LoadMapSquareLocations(*pvVar16, js5ResourceProvider, field_0, field_4);
            uVar10 = (uint32_t)(((uint64_t)((int64_t)((unsigned long)puVar17 >> 8)) << 8) |
                                (uint8_t)(puVar17 != DataStatus::NOTLOADED));
        LAB_1003dbb8f:
            local_e0 = (Layout*)(((uint64_t)local_e0._4_4_ << 32) | (uint32_t)uVar10);
        } else {
            lVar15 = field_8->field_9800.size();
            if (lVar15 == 0) {
                uVar10 = 1;
                goto LAB_1003dbb8f;
            }
            local_e0 =
                (Layout*)(((uint64_t)local_e0._4_4_ << 32) |
                          (uint32_t)((int)(((uint64_t)((int64_t)((unsigned long)lVar15 >> 8)) << 8) | (uint8_t)1)));
            uVar14 = 0;
            uVar30 = 1;
            pvVar23 = local_f0;
            local_130 = js5ResourceProvider;
            do {
                cVar5 = ((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(*pvVar23)[uVar14])
                            ->empty();
                if (cVar5) {
                    pvVar16 = (vector<shared_ptr<MapSquareLocation>>*)(*pvVar23)[uVar14];
                    piVar21 = &local_d8->field_8->field_9800[uVar14];
                    iVar11 = *piVar21;
                    lVar15 = local_d8->field_8->field_9800[uVar14];
                    this = local_d8;
                    pvVar23 = local_f0;
                    puVar17 =
                        (uint8_t*)LoadMapSquareLocations(local_d8, pvVar16, local_130, iVar11, *(int*)(lVar15 + 4));
                    uVar27 = (unsigned int)local_e0 & 255;
                    if (puVar17 == DataStatus::NOTLOADED) {
                        uVar27 = 0;
                    }
                    local_e0 = (Layout*)(((uint64_t)local_e0._4_4_ << 32) | (uint32_t)uVar27);
                }
                uVar14 = field_8->field_9800.size();
                unaff_R12 = (unsigned long)((int)uVar30 + 1);
                bVar4 = uVar30 < uVar14;
                uVar14 = uVar30;
                uVar30 = unaff_R12;
            } while (bVar4);
        }
        uVar27 = (unsigned int)local_e0;
        if (((unsigned long)local_e0 & 1) != 0) {
            field_56 = 1;
        }
    LAB_1003dbba4:
        if ((uVar27 & 1) == 0) {
            uVar14 = 0;
        } else {
            puVar1 = &field_24;
            pLVar18 = (Layout*)puVar1->HeapBeginPtr();
            local_110 = (Layout*)puVar1;
            local_e0 = (Layout*)puVar1->end();
            uVar14 = (((uint64_t)((int64_t)(unaff_R12 >> 8)) << 8) | (uint8_t)1);
            if (pLVar18 != local_e0) {
                do {
                    psVar19 = (shared_ptr<MapSquareLocation>*)pLVar18->HeapBeginPtr();
                    psVar20 = (shared_ptr<MapSquareLocation>*)pLVar18->end();
                    for (; psVar19 != psVar20; psVar19 = psVar19 + 16) {
                        lVar15 = (*psVar19).operator->();
                        cVar5 = ((lVar15 + 72))->operator_cast_to_bool();
                        if (!cVar5) {
                            piVar21 = (int*)(*psVar19).operator->();
                            locType = local_e8->GetConfig<LocType>(*piVar21, nullptr);
                            lVar15 = (*psVar19).operator->();
                            (*((lVar15 + 72))) = *locType;
                            lVar15 = (*psVar19).operator->();
                            cVar5 = ((lVar15 + 72))->operator_cast_to_bool();
                            uVar14 = uVar14 & 255;
                            if (!cVar5) {
                                uVar14 = 0;
                            }
                        }
                    }
                    pLVar18 = pLVar18 + 32;
                } while (pLVar18 != local_e0);
            }
            pLVar31 = local_d8;
            if ((char)uVar14 != '\0') {
                local_134 = (unsigned int)uVar14;
                puVar1 = &local_d8->field_112;
                psVar19 = (shared_ptr<MapSquareLocation>*)puVar1->HeapBeginPtr();
                local_e8 = (ConfigProvider*)puVar1;
                psVar20 = (shared_ptr<MapSquareLocation>*)puVar1->end();
                for (; psVar19 != psVar20; psVar19 = psVar19 + 16) {
                    lVar15 = (*psVar19).operator->();
                    cVar5 = *(char*)(lVar15 + 4);
                    lVar15 = (*psVar19).operator->();
                    cVar8 = *(char*)(lVar15 + 5);
                    lVar15 = (*psVar19).operator->();
                    local_1a8._0_4_ = (int)*(char*)(lVar15 + 6) + cVar8 * 12800 + cVar5 * 163840000;
                    this_01 = &pLVar31->field_64[local_1a8];
                    cVar5 = shared_ptr::operator_cast_to_bool(this_01);
                    if (cVar5) {
                        lVar15 = (*this_01).operator->();
                        pLVar22 = (LocType*)(*((lVar15 + 72))).operator->();
                        uVar9 = pLVar22->GetWallWidth();
                        lVar15 = (*psVar19).operator->();
                        *(uint16_t*)(lVar15 + 64) = uVar9;
                    }
                }
                pLVar31->field_64.clear();
                local_e8->clear();
                pLVar18 = local_110;
                pvVar23 = (vector<eastl::vector<shared_ptr<MapSquareLocation>>>*)local_110->HeapBeginPtr();
                local_f0 = (vector<eastl::vector<shared_ptr<MapSquareLocation>>>*)pLVar18->end();
                pLVar31 = local_d8;
                if (pvVar23 != local_f0) {
                    do {
                        this_02 = (ConfigProvider*)pvVar23->HeapBeginPtr();
                        local_e0 = (Layout*)pvVar23;
                        local_e8 = (ConfigProvider*)pvVar23->end();
                        if (this_02 != local_e8) {
                            do {
                                iVar11 = pLVar31->field_0;
                                lVar15 = (*this_02).operator->();
                                cVar5 = *(char*)(lVar15 + 5);
                                iVar28 = local_d8->field_4;
                                lVar15 = (*this_02).operator->();
                                cVar8 = *(char*)(lVar15 + 6);
                                lVar15 = (*this_02).operator->();
                                pLVar22 = (LocType*)(*((lVar15 + 72))).operator->();
                                lVar15 = (*this_02).operator->();
                                cVar2 = *(char*)(lVar15 + 4);
                                lVar15 = (*this_02).operator->();
                                bVar7 = ((lVar15 + 8))->GetRot();
                                pLVar31 = local_d8;
                                uVar6 = pLVar22->GetMaxRemoveRoofLevel(linkMap, (int)cVar2, (int)cVar5 + iVar11 * 64,
                                                                       (int)cVar8 + iVar28 * 64, (unsigned int)bVar7);
                                lVar15 = (*this_02).operator->();
                                *(uint8_t*)(lVar15 + 62) = uVar6;
                                this_02 = (ConfigProvider*)&this_02->field_16;
                            } while (this_02 != local_e8);
                        }
                        pvVar23 = (vector<eastl::vector<shared_ptr<MapSquareLocation>>>*)(local_e0 + 32);
                    } while (pvVar23 != local_f0);
                }
                if (pLVar31->field_8 == nullptr) {
                    modelVertexs = (vector<oldscape::rseven::ModelVertex>*)(*local_110)[0];
                    pvVar16 = mapSquareLocations;
                    mapSquareLocations.swap(*modelVertexs);
                    psVar19 = (shared_ptr<MapSquareLocation>*)pvVar16->HeapBeginPtr();
                    psVar20 = (shared_ptr<MapSquareLocation>*)pvVar16->end();
                    for (; psVar19 != psVar20; psVar19 = psVar19 + 16) {
                        iVar11 = pLVar31->field_0;
                        lVar15 = (*psVar19).operator->();
                        cVar5 = *(char*)(lVar15 + 5);
                        iVar28 = pLVar31->field_4;
                        lVar15 = (*psVar19).operator->();
                        cVar5 = linkMap.IsLinkBelow((int)cVar5 + iVar11 * 64, (int)*(char*)(lVar15 + 6) + iVar28 * 64);
                        if (cVar5) {
                            lVar15 = (*psVar19).operator->();
                            *(char*)(lVar15 + 4) = *(char*)(lVar15 + 4) - 1;
                        }
                    }
                } else {
                    local_118 = 0;
                    do {
                        local_148 = 0;
                        do {
                            pJVar29 = nullptr;
                            local_150 = local_148;
                            local_148 = local_148 + 1;
                            do {
                                this_03 = (vector<eastl::fixed_vector<ClientCompositeZone, 10ul>,
                                                  eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul,
                                                                                true>>*)(*pLVar31->field_8)[local_118];
                                this_04 = (vector<ClientCompositeZone,
                                                  eastl::fixed_vector_allocator<20ul, 10ul, 4ul, 0ul, true>>*)(*this_03)
                                    [local_148];
                                local_130 = (Js5ResourceProvider*)((long)&pJVar29->_vptr + 1);
                                local_158 = pJVar29;
                                local_e8 = (ConfigProvider*)(*this_04)[(unsigned long)local_130];
                                cVar5 = local_e8->IsValid();
                                if (cVar5) {
                                    uVar27 = *(int*)((long)&local_e8->_vptr + 4);
                                    uVar3 = *(unsigned int*)&local_e8->field_8;
                                    this_05 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>,
                                                      BucketAllocatorEASTL>*)(*local_110)
                                        [(unsigned long)*(unsigned int*)&local_e8->field_16];
                                    lVar15 = this_05->size();
                                    if (lVar15 != 0) {
                                        uVar27 = (uVar27 & 7) * 8;
                                        local_e0 = (Layout*)(unsigned long)uVar27;
                                        local_f0 =
                                            (vector<eastl::vector<shared_ptr<MapSquareLocation>>>*)(((uint64_t)
                                                                                                         local_f0._4_4_
                                                                                                     << 32) |
                                                                                                    (uint32_t)(uVar27 +
                                                                                                               7));
                                        uVar27 = (uVar3 & 7) * 8;
                                        local_160 = (unsigned long)uVar27;
                                        local_138 = uVar27 + 7;
                                        uVar14 = 0;
                                        uVar30 = 1;
                                        do {
                                            psVar19 = (shared_ptr<MapSquareLocation>*)(*this_05)[uVar14];
                                            lVar15 = (*psVar19).operator->();
                                            if (*(int*)&local_e8->_vptr == (int)*(char*)(lVar15 + 4)) {
                                                lVar15 = (*psVar19).operator->();
                                                if ((int)(unsigned int)local_e0 <= (int)*(char*)(lVar15 + 5)) {
                                                    lVar15 = (*psVar19).operator->();
                                                    if (*(char*)(lVar15 + 5) <= (int)local_f0) {
                                                        lVar15 = (*psVar19).operator->();
                                                        if ((int)local_160 <= *(char*)(lVar15 + 6)) {
                                                            lVar15 = (*psVar19).operator->();
                                                            uVar10 =
                                                                (uint32_t)((unsigned long)in_stack_fffffffffffffe30 >>
                                                                           32);
                                                            uVar32 =
                                                                (uint32_t)((unsigned long)in_stack_fffffffffffffe38 >>
                                                                           32);
                                                            uVar33 =
                                                                (uint32_t)((unsigned long)in_stack_fffffffffffffe40 >>
                                                                           32);
                                                            if (*(char*)(lVar15 + 6) <= local_138) {
                                                                lVar15 = (*psVar19).operator->();
                                                                iVar28 = (int)*(char*)(lVar15 + 5) % 8;
                                                                lVar15 = (*psVar19).operator->();
                                                                arg2 = (int)*(char*)(lVar15 + 6) % 8;
                                                                local_f8 =
                                                                    (int*)(((uint64_t)local_f8._4_4_ << 32) |
                                                                           (uint32_t)((unsigned int)*(
                                                                               uint8_t*)((long)&local_e8->field_8 +
                                                                                         4)));
                                                                lVar15 = (*psVar19).operator->();
                                                                pLVar22 = (LocType*)(*((lVar15 + 72))).operator->();
                                                                iVar11 = pLVar22->GetGridWidth(0);
                                                                local_108._0_4_ = iVar11;
                                                                lVar15 = (*psVar19).operator->();
                                                                pLVar22 = (LocType*)(*((lVar15 + 72))).operator->();
                                                                iVar11 = pLVar22->GetGridLength(0);
                                                                local_100._0_4_ = iVar11;
                                                                lVar15 = (*psVar19).operator->();
                                                                bVar7 = ((lVar15 + 8))->GetRot();
                                                                local_f8 = (int*)RegionRotate::RegionRotateLocationX(
                                                                    iVar28, arg2, (unsigned int)local_f8,
                                                                    (int)local_108, (int)local_100,
                                                                    (unsigned int)bVar7);
                                                                local_108 =
                                                                    (bool*)(((uint64_t)local_108._4_4_ << 32) |
                                                                            (uint32_t)((unsigned int)*(
                                                                                uint8_t*)((long)&local_e8->field_8 +
                                                                                          4)));
                                                                lVar15 = (*psVar19).operator->();
                                                                pLVar22 = (LocType*)(*((lVar15 + 72))).operator->();
                                                                uVar12 = pLVar22->GetGridWidth(0);
                                                                local_100 = (bool*)(((uint64_t)local_100._4_4_ << 32) |
                                                                                    (uint32_t)uVar12);
                                                                lVar15 = (*psVar19).operator->();
                                                                pLVar22 = (LocType*)(*((lVar15 + 72))).operator->();
                                                                uVar12 = pLVar22->GetGridLength(0);
                                                                local_128 = (schar*)(((uint64_t)local_128._4_4_ << 32) |
                                                                                     (uint32_t)uVar12);
                                                                lVar15 = (*psVar19).operator->();
                                                                bVar7 = ((lVar15 + 8))->GetRot();
                                                                iVar11 = RegionRotate::RegionRotateLocationZ(
                                                                    iVar28, arg2, (int)local_108, (int)local_100,
                                                                    (int)local_128, (unsigned int)bVar7);
                                                                lVar15 = (*psVar19).operator->();
                                                                cVar5 = ((lVar15 + 8))->GetShape();
                                                                if (cVar5 == '\n') {
                                                                LAB_1003dc233:
                                                                    iVar28 = (int)local_f8 + (int)local_150 * 8;
                                                                    iVar11 = iVar11 + (int)local_158 * 8;
                                                                    local_cb = linkMap.IsLinkBelow(
                                                                        local_d8->field_0 * 64 + iVar28,
                                                                        local_d8->field_4 * 64 + iVar11);
                                                                    local_cb = (char)local_118 - local_cb;
                                                                    local_ca = (schar)iVar28;
                                                                    local_c9 = (schar)iVar11;
                                                                    local_f8 = (int*)(*psVar19).operator->();
                                                                    lVar15 = (*psVar19).operator->();
                                                                    LVar13 = ((lVar15 + 8))->GetShape();
                                                                    lVar15 = (*psVar19).operator->();
                                                                    cVar8 = ((lVar15 + 8))->GetRot();
                                                                    cVar5 = *(char*)((long)&local_e8->field_8 + 4);
                                                                    lVar15 = (*psVar19).operator->();
                                                                    rotTransScale = (RotTransScale*)((lVar15 + 8))->y();
                                                                    local_1a8 = LocData(
                                                                        LVar13 & 255, (unsigned int)(cVar8 + cVar5 & 3),
                                                                        *rotTransScale);
                                                                    lVar15 = (*psVar19).operator->();
                                                                    local_108 = (bool*)(lVar15 + 60);
                                                                    lVar15 = (*psVar19).operator->();
                                                                    local_100 = (bool*)(lVar15 + 61);
                                                                    lVar15 = (*psVar19).operator->();
                                                                    local_128 = (schar*)(lVar15 + 62);
                                                                    lVar15 = (*psVar19).operator->();
                                                                    in_stack_fffffffffffffe40 =
                                                                        (shared_ptr<LocType>*)(lVar15 + 72);
                                                                    lVar15 = (*psVar19).operator->();
                                                                    lVar24 = (*psVar19).operator->();
                                                                    in_stack_fffffffffffffe30 = local_100;
                                                                    in_stack_fffffffffffffe38 = local_128;
                                                                    MakeSharedPool<MapSquareLocation, 16384>::
                                                                        MakeShared<signed char, signed char,
                                                                                   signed char, int&, LocData, bool&,
                                                                                   bool&, signed char&,
                                                                                   shared_ptr<LocType>&,
                                                                                   unsigned short&, bool&>(
                                                                            &local_170, &local_cb, &local_ca, &local_c9,
                                                                            local_f8, &local_1a8, local_108, local_100,
                                                                            local_128, in_stack_fffffffffffffe40,
                                                                            (unsigned short*)(lVar15 + 64),
                                                                            (bool*)(lVar24 + 66));
                                                                    mapSquareLocations.push_back(local_170);
                                                                } else {
                                                                    lVar15 = (*psVar19).operator->();
                                                                    cVar5 = ((lVar15 + 8))->GetShape();
                                                                    if ((cVar5 == '\v') ||
                                                                        ((((unsigned int)local_f8 < 8 &&
                                                                           (-1 < iVar11)) &&
                                                                          (iVar11 < 8))))
                                                                        goto LAB_1003dc233;
                                                                    pLVar25 = logger::default_logger();
                                                                    local_c8 = logger::LogStream(LOGGER_SCENE);
                                                                    puVar26 = (uint32_t*)(*psVar19).operator->();
                                                                    in_stack_fffffffffffffe40 =
                                                                        (shared_ptr<LocType>*)(((uint64_t)uVar33
                                                                                                << 32) |
                                                                                               (uint32_t)iVar11);
                                                                    in_stack_fffffffffffffe38 =
                                                                        (schar*)(((uint64_t)uVar32 << 32) |
                                                                                 (uint32_t)((int)local_f8));
                                                                    in_stack_fffffffffffffe30 =
                                                                        (bool*)(((uint64_t)uVar10 << 32) |
                                                                                (uint32_t)(*puVar26));
                                                                    ((uint8_t)pLVar25)
                                                                        ->Log(nullptr, (LogLevel)&local_c8, 3, 14419590,
                                                                              214,
                                                                              "Location %i overflowed build area after "
                                                                              "rotation (%i, %i), but is not a "
                                                                              "centrepiece",
                                                                              in_stack_fffffffffffffe30,
                                                                              in_stack_fffffffffffffe38,
                                                                              in_stack_fffffffffffffe40);
                                                                }
                                                                pLVar31 = local_d8;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            uVar14 = this_05->size();
                                            bVar4 = uVar30 < uVar14;
                                            uVar14 = uVar30;
                                            uVar30 = (unsigned long)((int)uVar30 + 1);
                                        } while (bVar4);
                                    }
                                }
                                pJVar29 = local_130;
                            } while (local_130 != (Js5ResourceProvider*)8);
                        } while (local_148 != 8);
                        local_118 = local_118 + 1;
                    } while (local_118 != 4);
                }
                pLVar31->field_16 = 1;
                local_110->clear();
                uVar14 = (unsigned long)local_134;
            }
            uVar14 = uVar14 & 18446744073709551361;
        }
        return uVar14 & 4294967295;
    }

    // 0x1003dc5b0
    uint8_t* LocationLoader::LoadMapSquareLocations(eastl::vector<shared_ptr<MapSquareLocation>>& mapSquareLocations,
                                                    Js5ResourceProvider& js5ResourceProvider, int arg3, int arg4) {
        uint64_t extraout_var;
        uint64_t extraout_var_00;

        unsigned int arg3_00 = arg4 << 7 | arg3;
        uint8_t uVar1 = (js5ResourceProvider._vptr->FileReady)((Js5ArchiveSettings*)js5ResourceProvider,
                                                               (unsigned int)Js5Archive::JS5_MAPS, arg3_00, nullptr,
                                                               (uint8_t)(Priority::HIGH));
        uint8_t* puVar2 = (uint8_t*)(((uint64_t)extraout_var << 8) | (uint8_t)uVar1);
        bool bVar5 = puVar2 == DataStatus::READY;
        bool bVar6 = puVar2 == DataStatus::MISSING;
        uVar1 = (js5ResourceProvider._vptr->FileReady)((Js5ArchiveSettings*)js5ResourceProvider,
                                                       (unsigned int)Js5Archive::JS5_MAPS, arg3_00,
                                                       (Priority*)&DAT_00000001, (uint8_t)(Priority::HIGH));
        uint8_t* puVar3 = (uint8_t*)(((uint64_t)extraout_var_00 << 8) | (uint8_t)uVar1);
        uint8_t** ppuVar4 = &DataStatus::NOTLOADED;
        if ((puVar3 == DataStatus::MISSING || puVar3 == DataStatus::READY) && (bVar5 || bVar6)) {
            mapSquareLocations.clear();
            if (puVar2 == DataStatus::READY) {
                LoadLocationData(mapSquareLocations, js5ResourceProvider, arg3_00, 0, false);
            }
            if (puVar3 == DataStatus::READY) {
                LoadLocationData(mapSquareLocations, js5ResourceProvider, arg3_00, 1, true);
            }
            ppuVar4 = &DataStatus::READY;
        }
        return *ppuVar4;
    }

    // 0x1003dca50
    void LocationLoader::Destruct() {
        field_24.clear();
    }

    // 0x1003dca60
    void LocationLoader::LoadLocationData(eastl::vector<shared_ptr<MapSquareLocation>>& mapSquareLocations,
                                          Js5ResourceProvider& js5ResourceProvider, int arg3, int arg4, bool arg5) {
        uint8_t bVar1;
        char cVar2;
        uint8_t bVar3;
        unsigned short uVar4;
        PacketReaderMixin<PacketT<Array<unsigned char>>>* this_00;
        shared_ptr* this_01;
        long lVar6;
        RotTransScale* pRVar7;
        int iVar8;
        uint64_t in_register_00000089;
        unsigned int uVar9;
        LocData local_100;
        LocData local_c8;
        vector<shared_ptr<MapSquareLocation>, BucketAllocatorEASTL>* local_80;
        hash_map<unsigned int, shared_ptr<MapSquareLocation>, eastl::hash<unsigned int>, eastl::equal_to<unsigned int>,
                 BucketAllocatorEASTL>* local_78;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_70;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_60;
        PacketReaderMixin<PacketT<Array<unsigned char>>>* local_50;
        int local_40;
        bool local_36;
        bool local_35;
        uint8_t local_34;
        uint8_t local_33;
        char local_32;
        bool local_31;

        unsigned int local_3c = (unsigned int)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg5);
        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_90;
        if ((uint8_t*)js5ResourceProvider.GetFile(local_90, *(Js5Archive::JS5_MAPS), arg3, arg4,
                                                  (Priority*)Priority::HIGH, true, false, false) == DataStatus::READY) {
            this_00 = (PacketReaderMixin<PacketT<Array<unsigned char>>>*)*local_90;
            local_40 = -1;
            local_3c = local_3c ^ 1;
            local_78 = (hash_map<unsigned int, shared_ptr<MapSquareLocation>, eastl::hash<unsigned int>,
                                 eastl::equal_to<unsigned int>, BucketAllocatorEASTL>*)&field_64;
            local_80 = (vector<shared_ptr<MapSquareLocation>, BucketAllocatorEASTL>*)&field_112;
            local_50 = this_00;
            while (true) {
                uVar4 = this_00->gSmart1or2();
                iVar8 = 0;
                this_00 = local_50;
                while (local_50 = this_00, uVar4 == 32767) {
                    uVar4 = this_00->gSmart1or2();
                    iVar8 = iVar8 + 32767;
                    this_00 = local_50;
                }
                if ((unsigned int)uVar4 + iVar8 == 0)
                    break;
                local_40 = local_40 + (unsigned int)uVar4 + iVar8;
                uVar9 = 0;
                do {
                    uVar4 = this_00->gSmart1or2();
                    if (uVar4 != 0) {
                        uVar9 = (uVar9 + uVar4) - 1;
                        local_34 = (uint8_t)uVar9 & 63;
                        local_33 = (uint8_t)(uVar9 >> 6) & 63;
                        local_32 = (char)(uVar9 >> 12);
                        bVar1 = this_00->g1();
                        local_100.LocData<PacketT<Array<unsigned char>>>((unsigned int)bVar1, *this_00);
                        cVar2 = local_100.GetShape();
                        local_c8.m_shape = cVar2 == '\x02';
                        local_60[0] = (uint8_t)local_3c;
                        cVar2 = local_100.GetShape();
                        local_31 = cVar2 == '\b';
                        MakeSharedPool<MapSquareLocation, 16384>::MakeShared<
                            signed char&, unsigned char&, unsigned char&, int&, LocData&, bool, bool, bool>(
                            &local_70, &local_32, &local_33, &local_34, &local_40, &local_100, (bool*)&local_c8,
                            &local_60, &local_31);
                        mapSquareLocations.push_back(local_70);
                        bVar3 = local_100.GetShape();
                        cVar2 = LocShapes::IsWallShape((unsigned int)bVar3);
                        if (cVar2) {
                            local_c8._0_4_ =
                                (unsigned int)local_34 | (unsigned int)local_33 * 12800 + local_32 * 163840000;
                            this_01 = (shared_ptr*)(*local_78)[local_c8];
                            cVar2 = shared_ptr::operator_cast_to_bool(this_01);
                            if (!cVar2) {
                                *this_01 = local_70;
                            }
                        }
                        bVar3 = local_100.GetShape();
                        cVar2 = LocShapes::IsWallDecorShapeWithOffset((unsigned int)bVar3);
                        if ((cVar2) || (lVar6 = local_70.operator->(), *(char*)(lVar6 + 66) != '\0')) {
                            local_80->push_back(local_70);
                        }
                        cVar2 = local_100.GetShape();
                        if (cVar2 == '\x02') {
                            pRVar7 = (RotTransScale*)local_100.y();
                            local_c8 = LocData(23, (unsigned int)(bVar1 + 1 & 3), *pRVar7);
                            local_31 = false;
                            local_36 = (uint8_t)local_3c;
                            local_35 = false;
                            MakeSharedPool<MapSquareLocation, 16384>::MakeShared<
                                signed char&, unsigned char&, unsigned char&, int&, LocData, bool, bool, bool>(
                                &local_60, &local_32, &local_33, &local_34, &local_40, &local_c8, &local_31, &local_36,
                                &local_35);
                            mapSquareLocations.emplace_back<shared_ptr<MapSquareLocation>>(local_60);
                        LAB_1003dcb90:
                        } else {
                            cVar2 = local_100.GetShape();
                            if (cVar2 == '\b') {
                                pRVar7 = (RotTransScale*)local_100.y();
                                local_c8 = LocData(24, (unsigned int)(bVar1 + 2 & 3), *pRVar7);
                                local_31 = false;
                                local_36 = (uint8_t)local_3c;
                                local_35 = false;
                                MakeSharedPool<MapSquareLocation, 16384>::MakeShared<
                                    signed char&, unsigned char&, unsigned char&, int&, LocData, bool, bool, bool>(
                                    &local_60, &local_32, &local_33, &local_34, &local_40, &local_c8, &local_31,
                                    &local_36, &local_35);
                                mapSquareLocations.emplace_back<shared_ptr<MapSquareLocation>>(local_60);
                                goto LAB_1003dcb90;
                            }
                        }
                        this_00 = local_50;
                    }
                } while (uVar4 != 0);
            }
        }
    }

} // namespace jag::game
