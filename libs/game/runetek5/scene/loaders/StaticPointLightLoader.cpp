// libs/game/runetek5/scene/loaders/StaticPointLightLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "StaticPointLightLoader.h"

namespace jag::game {
    // 0x100009d00: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second(), which has identical code
    StaticPointLightLoader::GetPointLightList();

    // 0x1003dd5a0, 1568 bytes, placed by class name and debug map
    // StaticPointLightLoader::Load(Js5ResourceProvider*, HeightMap const&)
    uint StaticPointLightLoader::Load(Js5ResourceProvider* param_1, HeightMap* param_2) {
        undefined1* this_00;
        float fVar1;
        float fVar2;
        uint uVar3;
        bool bVar4;
        char cVar5;
        int iVar6;
        undefined4 uVar7;
        long lVar8;
        vector* pvVar9;
        undefined* puVar10;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_01;
        vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>, 10ul, true,
                                   eastl::allocator>,
               eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true, eastl::allocator>>* this_02;
        vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
               eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true, eastl::allocator>>* this_03;
        vector<ClientCompositeZone, eastl::fixed_vector_allocator<20ul, 10ul, 4ul, 0ul, true, eastl::allocator>>*
            this_04;
        ClientCompositeZone* this_05;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_06;
        ulong uVar11;
        Vector3T* pVVar12;
        uint* puVar13;
        shared_ptr<StaticPointLight>* psVar14;
        shared_ptr<StaticPointLight>* psVar15;
        StaticPointLight* pSVar16;
        Vector2T<int>* pVVar17;
        Vector3T<float>* pVVar18;
        float* pfVar19;
        CoordMapSquare* pCVar20;
        uint uVar21;
        ulong uVar22;
        StaticPointLightLoader* pSVar23;
        uint* in_R8;
        shared_ptr* this_07;
        Vector3T<unsigned int> local_e8[16];
        ColourHSL local_d8;
        shared_ptr local_c8;
        undefined8 local_b8;
        ulong local_b0;
        ulong local_a8;
        ulong local_a0;
        Array<eastl::vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>, BucketAllocatorEASTL>* local_98;
        ulong local_90;
        vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>* local_88;
        HeightMap* local_80;
        ulong local_78;
        shared_ptr* local_70;
        uint local_64;
        uint local_60;
        uint local_5c;
        Js5ResourceProvider* local_58;
        float local_4c;
        StaticPointLightLoader* local_48;
        uint local_3c;
        undefined8 local_38;

        local_80 = param_2;
        local_58 = param_1;
        if (param_1 == (Js5ResourceProvider*)0) {
            /* WARNING: Subroutine does not return */
            LogAssert("resourceProvider",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "loaders/StaticPointLightLoader.cpp",
                      18, (char*)0);
        }
        this_07 = (shared_ptr*)field_8;
        local_48 = this;
        bVar4 = shared_ptr::operator_cast_to_bool(this_07);
        uVar22 = 1;
        if (bVar4) {
            lVar8 = shared_ptr<ClientCompositeData>::operator->((shared_ptr<ClientCompositeData>*)this_07);
            uVar22 = ((lVar8 + 9800))->size();
        }
        this_00 = &local_48->field_48;
        cVar5 = this_00->empty();
        if (cVar5 != '\0') {
            this_00->set_max_size(uVar22, 0);
        }
        bVar4 = operator==(this_07, (_func_decltype_nullptr*)0);
        local_70 = this_07;
        if (bVar4) {
            pvVar9 = (vector*)
                Array<eastl::vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>, BucketAllocatorEASTL>::
                operator[](
                    (Array<eastl::vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>, BucketAllocatorEASTL>*)
                        this_00,
                    0);
            in_R8 = (uint*)(ulong)local_48->field_4;
            puVar10 = (undefined*)LoadMapSquarePointLightList(local_48, pvVar9, local_58, local_48->field_0,
                                                              local_48->field_4);
            local_38._4_4_ = (uint)CONCAT71((int7)((ulong)puVar10 >> 8),
                                            puVar10 == DataStatus::MISSING || puVar10 == DataStatus::READY);
        } else {
            lVar8 = shared_ptr<ClientCompositeData>::operator->((shared_ptr<ClientCompositeData>*)this_07);
            lVar8 = ((lVar8 + 9800))->size();
            if (lVar8 == 0) {
                local_38._4_4_ = 1;
            } else {
                local_38._4_4_ = (uint)CONCAT71((int7)((ulong)lVar8 >> 8), 1);
                uVar22 = 0;
                do {
                    this_01 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                        Array<eastl::vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>, BucketAllocatorEASTL>::
                        operator[]((Array<eastl::vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>,
                                          BucketAllocatorEASTL>*)this_00,
                                   uVar22);
                    cVar5 = eastl::vector<
                        int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(this_01);
                    if (cVar5 != '\0') {
                        pvVar9 = (vector*)Array<eastl::vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>,
                                                BucketAllocatorEASTL>::
                        operator[]((Array<eastl::vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>,
                                          BucketAllocatorEASTL>*)this_00,
                                   uVar22);
                        lVar8 = shared_ptr<ClientCompositeData>::operator->((shared_ptr<ClientCompositeData>*)this_07);
                        puVar13 =
                            (uint*)eastl::vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>::operator[](
                                (vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>*)(lVar8 + 9800),
                                uVar22);
                        uVar21 = *puVar13;
                        lVar8 = shared_ptr<ClientCompositeData>::operator->((shared_ptr<ClientCompositeData>*)this_07);
                        lVar8 = eastl::vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>::operator[](
                            (vector<eastl::pair<unsigned int, unsigned int>, eastl::allocator>*)(lVar8 + 9800), uVar22);
                        in_R8 = (uint*)(ulong) * (uint*)(lVar8 + 4);
                        puVar10 = (undefined*)LoadMapSquarePointLightList(local_48, pvVar9, local_58, uVar21,
                                                                          *(uint*)(lVar8 + 4));
                        uVar21 = local_38._4_4_ & 255;
                        local_38._4_4_ = uVar21;
                        if (puVar10 != DataStatus::MISSING) {
                            local_38._4_4_ = 0;
                        }
                        if (puVar10 == DataStatus::READY) {
                            local_38._4_4_ = uVar21;
                        }
                        this_07 = local_70;
                    }
                    uVar22 = uVar22 + 1;
                    lVar8 = shared_ptr<ClientCompositeData>::operator->((shared_ptr<ClientCompositeData>*)this_07);
                    uVar11 = ((lVar8 + 9800))->size();
                } while (uVar22 < uVar11);
            }
        }
        if ((local_38._4_4_ & 1) != 0) {
            bVar4 = operator==(this_07, (_func_decltype_nullptr*)0);
            if (bVar4) {
                pvVar9 = (vector*)
                    Array<eastl::vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>, BucketAllocatorEASTL>::
                    operator[]((Array<eastl::vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>,
                                      BucketAllocatorEASTL>*)this_00,
                               0);
                pSVar23 = local_48;
                eastl::vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>::operator=(
                    (vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>*)&local_48->field_24, pvVar9);
            } else {
                local_88 = (vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>*)&local_48->field_24;
                local_98 =
                    (Array<eastl::vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>, BucketAllocatorEASTL>*)
                        this_00;
                local_88->clear();
                local_3c = 0;
                uVar22 = 0;
                do {
                    do {
                        local_78 = uVar22 + 1;
                        uVar11 = 0;
                        local_90 = uVar22;
                        do {
                            this_02 =
                                (vector<eastl::fixed_vector<
                                            eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                            10ul, true, eastl::allocator>,
                                        eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    shared_ptr<ClientCompositeData>::operator->(
                                        (shared_ptr<ClientCompositeData>*)this_07);
                            this_03 =
                                (vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                        eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    eastl::vector<
                                        eastl::fixed_vector<
                                            eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                            10ul, true, eastl::allocator>,
                                        eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                                    operator[](this_02, (ulong)local_3c);
                            this_04 = (vector<ClientCompositeZone, eastl::fixed_vector_allocator<
                                                                       20ul, 10ul, 4ul, 0ul, true, eastl::allocator>>*)
                                eastl::vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                              eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](this_03,
                                                                                                           local_78);
                            local_b0 = uVar11 + 1;
                            local_a0 = uVar11;
                            this_05 = (ClientCompositeZone*)
                                eastl::vector<ClientCompositeZone,
                                              eastl::fixed_vector_allocator<20ul, 10ul, 4ul, 0ul, true,
                                                                            eastl::allocator>>::operator[](this_04,
                                                                                                           local_b0);
                            cVar5 = this_05->IsValid();
                            if (cVar5 != '\0') {
                                uVar21 = this_05->field_4;
                                uVar3 = this_05->field_8;
                                this_06 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)
                                    Array<eastl::vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>,
                                          BucketAllocatorEASTL>::operator[](local_98, (ulong)(uint)this_05->field_16);
                                lVar8 =
                                    eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(
                                        this_06);
                                if (lVar8 != 0) {
                                    local_64 = (uVar21 & 7) * 1024;
                                    local_58 = (Js5ResourceProvider*)(ulong)local_64;
                                    local_64 = local_64 + 1023;
                                    local_60 = (uVar3 & 7) * 1024;
                                    local_a8 = (ulong)local_60;
                                    local_60 = local_60 + 1023;
                                    uVar22 = 0;
                                    do {
                                        psVar14 = (shared_ptr<StaticPointLight>*)eastl::
                                            vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>::operator[](
                                                (vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>*)this_06,
                                                uVar22);
                                        pVVar17 = (Vector2T<int>*)shared_ptr<StaticPointLight>::operator->(psVar14);
                                        pVVar12 = (Vector3T*)pVVar17->y();
                                        math::Vector3T<unsigned int>::Vector3T<float>(local_e8, pVVar12);
                                        pCVar20 = (CoordMapSquare*)shared_ptr<StaticPointLight>::operator->(psVar14);
                                        iVar6 = pCVar20->GetX();
                                        if ((((iVar6 == this_05->field_0) &&
                                              (puVar13 = (uint*)math::Vector3T<unsigned int>::operator[](local_e8, 0),
                                               (uint)local_58 <= *puVar13)) &&
                                             (puVar13 = (uint*)math::Vector3T<unsigned int>::operator[](local_e8, 0),
                                              *puVar13 <= local_64)) &&
                                            ((puVar13 = (uint*)math::Vector3T<unsigned int>::operator[](local_e8, 2),
                                              (uint)local_a8 <= *puVar13 &&
                                                  (puVar13 =
                                                       (uint*)math::Vector3T<unsigned int>::operator[](local_e8, 2),
                                                   *puVar13 <= local_60)))) {
                                            puVar13 = (uint*)math::Vector3T<unsigned int>::operator[](local_e8, 0);
                                            local_38._0_4_ = (RegionRotate*)(*puVar13 & 1023);
                                            puVar13 = (uint*)math::Vector3T<unsigned int>::operator[](local_e8, 2);
                                            local_5c = *puVar13 & 1023;
                                            local_4c = (float)local_38->RegionRotateFineX(local_5c, this_05->field_12);
                                            local_38._0_4_ =
                                                (RegionRotate*)local_38->RegionRotateFineZ(local_5c, this_05->field_12);
                                            local_b8 = psVar14->end();
                                            local_4c = (float)(uint)((int)local_90 * 1024 + (int)local_4c);
                                            puVar13 = (uint*)math::Vector3T<unsigned int>::operator[](local_e8, 1);
                                            new (&local_d8) math::ColourHSL(
                                                local_4c, (float)*puVar13,
                                                (float)(uint)((int)local_a0 * 1024 + (int)(RegionRotate*)local_38));
                                            MakeSharedPool<StaticPointLight, 64>::MakeShared<
                                                StaticPointLight*, math::Vector3T<float>, unsigned int&>(
                                                &local_c8, (MakeSharedPool<StaticPointLight, 64>*)&local_b8,
                                                (StaticPointLight**)&local_d8, (Vector3T*)&local_3c, in_R8);
                                            eastl::vector<shared_ptr<StaticPointLight>,
                                                          BucketAllocatorEASTL>::push_back(local_88, &local_c8);
                                            local_c8.~shared_ptr();
                                        }
                                        uVar22 = uVar22 + 1;
                                        uVar11 = eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>,
                                                               BucketAllocatorEASTL>::size(this_06);
                                    } while (uVar22 < uVar11);
                                }
                            }
                            uVar11 = local_b0;
                            this_07 = local_70;
                        } while (local_b0 != 8);
                        uVar22 = local_78;
                    } while (local_78 != 8);
                    local_3c = local_3c + 1;
                    uVar22 = 0;
                } while (local_3c < 4);
                pSVar23 = local_48;
            }
            psVar14 = (shared_ptr<StaticPointLight>*)(&pSVar23->field_24)->HeapBeginPtr();
            psVar15 = (shared_ptr<StaticPointLight>*)(&pSVar23->field_24)->end();
            for (; psVar14 != psVar15; psVar14 = psVar14 + 16) {
                pSVar16 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator->(psVar14);
                cVar5 = pSVar16->GetUseTerrainHeight();
                pSVar23 = local_48;
                if (cVar5 != '\0') {
                    uVar21 = local_48->field_0;
                    pVVar17 = (Vector2T<int>*)shared_ptr<StaticPointLight>::operator->(psVar14);
                    pVVar18 = (Vector3T<float>*)pVVar17->y();
                    pfVar19 = (float*)math::Vector3T<float>::operator[](pVVar18, 0);
                    fVar1 = *pfVar19;
                    uVar3 = pSVar23->field_4;
                    pVVar17 = (Vector2T<int>*)shared_ptr<StaticPointLight>::operator->(psVar14);
                    pVVar18 = (Vector3T<float>*)pVVar17->y();
                    pfVar19 = (float*)math::Vector3T<float>::operator[](pVVar18, 2);
                    fVar2 = *pfVar19;
                    pCVar20 = (CoordMapSquare*)shared_ptr<StaticPointLight>::operator->(psVar14);
                    uVar7 = pCVar20->GetX();
                    local_80->GetTileHeight(&local_c8, uVar7, ((int)fVar1 >> 7) + uVar21 * 64,
                                            ((int)fVar2 >> 7) + uVar3 * 64, 1, 0);
                    pSVar16 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator->(psVar14);
                    pSVar16->AddTerrainHeight(local_c8._0_4_);
                }
            }
        }
        return local_38._4_4_ & 4294967041;
    }

    // 0x1003ddd00, 1376 bytes, placed by class name and debug map
    // StaticPointLightLoader::LoadMapSquarePointLightList(eastl::vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>&, Js5ResourceProvider*, unsigned int, unsigned int)
    undefined* StaticPointLightLoader::LoadMapSquarePointLightList(vector* param_1, Js5ResourceProvider* param_2,
                                                                   uint param_3, uint param_4) {
        byte bVar1;
        char cVar2;
        byte bVar3;
        undefined4 uVar4;
        undefined* puVar5;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* this_00;
        StaticPointLight* pSVar6;
        PacketT* pPVar7;
        SwipeState* this_01;
        StaticPointLight* pSVar8;
        shared_ptr<StaticPointLight>* this_02;
        shared_ptr<StaticPointLight>* psVar9;
        Vector2T<int>* pVVar10;
        Layout* pLVar11;
        vector* pvVar12;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>* pcVar13;
        float* pfVar14;
        undefined8 uVar15;
        CoordMapSquare* pCVar16;
        uint uVar17;
        int iVar18;
        int iVar19;
        shared_ptr local_1a0;
        undefined1 local_190[28];
        uint local_174;
        vector* local_170;
        uint local_168;
        uint local_164;
        float local_160;
        float local_15c;
        LogStream local_158;
        LogStream local_c8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_170 = param_1;
        local_168 = param_4;
        local_164 = param_3;
        new (&local_1a0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_1);
        puVar5 = (undefined*)param_2->GetFile(&local_1a0, Js5Archive::JS5_MAPS, param_4 << 7 | param_3, 7,
                                              (Priority*)Priority::HIGH, true, false, false);
        if (puVar5 == DataStatus::READY) {
            this_00 = (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)
                          shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator->(
                              (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_1a0);
            bVar1 = this_00->g1();
            pSVar6 = (StaticPointLight*)(ulong)(uint)bVar1;
            local_170->reserve((ulong)pSVar6);
            if (bVar1 != 0) {
                uVar17 = 0;
                local_190._16_8_ = puVar5;
                do {
                    MakeSharedPool<StaticPointLight, 64>::MakeShared<>((shared_ptr*)local_190,
                                                                       (MakeSharedPool<StaticPointLight, 64>*)pSVar6);
                    pSVar6 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator->(
                        (shared_ptr<StaticPointLight>*)local_190);
                    pPVar7 = (PacketT*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                        (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)&local_1a0);
                    pSVar6->Initialise(pPVar7);
                    this_01 =
                        (SwipeState*)shared_ptr<StaticPointLight>::operator->((shared_ptr<StaticPointLight>*)local_190);
                    pSVar6 = (StaticPointLight*)(ulong)field_0;
                    this_01->SetStartPosition(field_0, field_4);
                    pSVar8 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator->(
                        (shared_ptr<StaticPointLight>*)local_190);
                    cVar2 = pSVar8->IsValid();
                    pvVar12 = local_170;
                    if (cVar2 == '\0') {
                        pVVar10 = (Vector2T<int>*)shared_ptr<StaticPointLight>::operator->(
                            (shared_ptr<StaticPointLight>*)local_190);
                        pLVar11 = (Layout*)pVVar10->y();
                        pvVar12 = eastl::string::Layout::SSOBeginPtr(pLVar11, (type*)pSVar6);
                        local_15c = *(float*)pvVar12 + 64.0;
                        pVVar10 = (Vector2T<int>*)shared_ptr<StaticPointLight>::operator->(
                            (shared_ptr<StaticPointLight>*)local_190);
                        pcVar13 = (compressed_pair_imp<
                                   std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                   eastl::allocator, 0>*)pVVar10->y();
                        pfVar14 = (float*)eastl::compressed_pair_imp<
                            std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*, eastl::allocator,
                            0>::second(pcVar13);
                        local_160 = *pfVar14 + 64.0;
                        uVar15 = logger::default_logger();
                        new (&local_c8) logger::LogStream((LogStream*)&LOGGER_SCENE);
                        pCVar16 = (CoordMapSquare*)shared_ptr<StaticPointLight>::operator->(
                            (shared_ptr<StaticPointLight>*)local_190);
                        uVar4 = pCVar16->GetX();
                        pVVar10 = (Vector2T<int>*)shared_ptr<StaticPointLight>::operator->(
                            (shared_ptr<StaticPointLight>*)local_190);
                        iVar19 = (int)local_15c;
                        iVar18 = (int)local_160;
                        pVVar10 = (Vector2T<int>*)pVVar10->y();
                        pfVar14 = (float*)pVVar10->y();
                        pSVar6 = (StaticPointLight*)0;
                        logger::Logger::Log(
                            uVar15, 0, &local_c8, 3,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                            "loaders/StaticPointLightLoader.cpp",
                            174,
                            "Invalid pointlight data (index %d) found at tile %d,%u,%u,%d,%d (height %d) - skipping",
                            uVar17, uVar4, local_164, local_168, iVar19 >> 7, iVar18 >> 7, (int)*pfVar14);
                        local_c8.~LogStream();
                        puVar5 = (undefined*)local_190._16_8_;
                    } else {
                        local_174 = uVar17;
                        this_02 = (shared_ptr<StaticPointLight>*)local_170->HeapBeginPtr();
                        psVar9 = (shared_ptr<StaticPointLight>*)pvVar12->end();
                        if (this_02 == psVar9) {
                            local_15c = 0.0;
                        } else {
                            local_15c = 0.0;
                            do {
                                pSVar8 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator*(this_02);
                                pSVar6 = (StaticPointLight*)shared_ptr<StaticPointLight>::operator*(
                                    (shared_ptr<StaticPointLight>*)local_190);
                                bVar3 = StaticPointLight::operator==(pSVar8, pSVar6);
                                if (bVar3 != 0) {
                                    pVVar10 = (Vector2T<int>*)shared_ptr<StaticPointLight>::operator->(
                                        (shared_ptr<StaticPointLight>*)local_190);
                                    pLVar11 = (Layout*)pVVar10->y();
                                    pvVar12 = eastl::string::Layout::SSOBeginPtr(pLVar11, (type*)pSVar6);
                                    local_15c = *(float*)pvVar12 + 64.0;
                                    pVVar10 = (Vector2T<int>*)shared_ptr<StaticPointLight>::operator->(
                                        (shared_ptr<StaticPointLight>*)local_190);
                                    pcVar13 = (compressed_pair_imp<
                                               std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                               eastl::allocator, 0>*)pVVar10->y();
                                    pfVar14 = (float*)eastl::compressed_pair_imp<
                                        std::deque<ThreadPool::TaskInfo, std::allocator<ThreadPool::TaskInfo>>*,
                                        eastl::allocator, 0>::second(pcVar13);
                                    local_160 = *pfVar14 + 64.0;
                                    uVar15 = logger::default_logger();
                                    new (&local_158) logger::LogStream((LogStream*)&LOGGER_SCENE);
                                    pCVar16 = (CoordMapSquare*)shared_ptr<StaticPointLight>::operator->(
                                        (shared_ptr<StaticPointLight>*)local_190);
                                    uVar4 = pCVar16->GetX();
                                    pVVar10 = (Vector2T<int>*)shared_ptr<StaticPointLight>::operator->(
                                        (shared_ptr<StaticPointLight>*)local_190);
                                    iVar19 = (int)local_15c;
                                    iVar18 = (int)local_160;
                                    pVVar10 = (Vector2T<int>*)pVVar10->y();
                                    pfVar14 = (float*)pVVar10->y();
                                    pSVar6 = (StaticPointLight*)0;
                                    logger::Logger::Log(
                                        uVar15, 0, &local_158, 3,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/scene/loaders/StaticPointLightLoader.cpp",
                                        190, "Duplicate light found at tile %d,%u,%u,%d,%d (height %d) - skipping",
                                        uVar4, local_164, local_168, iVar19 >> 7, iVar18 >> 7, (int)*pfVar14);
                                    uVar15 = local_158.~LogStream();
                                    local_15c = (float)CONCAT71((int7)((ulong)uVar15 >> 8), 1);
                                }
                                this_02 = this_02 + 16;
                            } while ((bVar3 | this_02 == psVar9) != 1);
                        }
                        uVar17 = local_174;
                        puVar5 = (undefined*)local_190._16_8_;
                        pSVar8 = (StaticPointLight*)local_190;
                        if (((uint)local_15c & 1) == 0) {
                            local_170->push_back(pSVar8);
                            pSVar6 = pSVar8;
                        }
                    }
                    local_190->~shared_ptr();
                    uVar17 = uVar17 + 1;
                } while (uVar17 != bVar1);
            }
        } else if (puVar5 == DataStatus::MISSING) {
            local_170->clear();
        }
        local_1a0.~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return puVar5;
    }

    // 0x1003de5e0, 64 bytes, placed by class name and debug map
    // StaticPointLightLoader::Destroy()
    void StaticPointLightLoader::Destroy() {
        field_0 = 0;
        field_4 = 0;
        shared_ptr<ClientCompositeData>::reset();
        (&field_24)->clear();
        (&field_48)->clear();
    }

} // namespace jag::game
