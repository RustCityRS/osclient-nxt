// libs/game/runetek5/scene/loaders/StaticPointLightLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "StaticPointLightLoader.h"

namespace jag::game {
    // 0x100009d00: StaticPointLightLoader::GetPointLightList() has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::second()

    // 0x1003dd5a0
    unsigned int StaticPointLightLoader::Load(Js5ResourceProvider* js5ResourceProvider, const HeightMap& heightMap) {
        float fVar1;
        float fVar2;
        unsigned int uVar3;
        int iVar6;
        long lVar7;
        vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>* pvVar8;
        uint8_t* puVar9;
        vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul>, 10ul>,
               eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true>>* this_02;
        vector<eastl::fixed_vector<ClientCompositeZone, 10ul>,
               eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true>>* this_03;
        vector<ClientCompositeZone, eastl::fixed_vector_allocator<20ul, 10ul, 4ul, 0ul, true>>* this_04;
        ClientCompositeZone* this_05;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_06;
        unsigned long uVar10;
        unsigned int* puVar11;
        shared_ptr<StaticPointLight>* psVar12;
        shared_ptr<StaticPointLight>* psVar13;
        StaticPointLight* pSVar14;
        Vector2T<int>* pVVar15;
        Vector3T<float>* pVVar16;
        float* pfVar17;
        CoordMapSquare* pCVar18;
        unsigned int uVar19;
        StaticPointLightLoader* pSVar21;
        Vector3T<unsigned int> local_e8;
        ColourHSL local_d8;
        unsigned int local_c8[4];
        uint64_t local_b8;
        unsigned long local_b0;
        unsigned long local_a8;
        unsigned long local_a0;
        Array<eastl::vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>, BucketAllocatorEASTL>* local_98;
        unsigned long local_90;
        vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>* local_88;
        unsigned long local_78;
        unsigned int local_64;
        unsigned int local_60;
        unsigned int local_5c;
        float local_4c;
        unsigned int local_3c;
        unsigned int local_38;
        unsigned int local_34;

        Js5ResourceProvider* local_58 = js5ResourceProvider;
        if (js5ResourceProvider == nullptr) {
            LogAssert("resourceProvider",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "loaders/StaticPointLightLoader.cpp",
                      18, nullptr);
        }
        shared_ptr<ClientCompositeData>* this_07 = (shared_ptr<ClientCompositeData>*)field_8;
        StaticPointLightLoader* local_48 = this;
        bool cVar4 = this_07->operator_cast_to_bool();
        unsigned long uVar20 = 1;
        if (cVar4) {
            lVar7 = (*this_07).operator->();
            uVar20 = ((lVar7 + 9800))->size();
        }
        uint8_t* this_00 = &local_48->field_48;
        cVar4 = this_00->empty();
        if (cVar4) {
            this_00->set_max_size(uVar20, 0);
        }
        bool bVar5 = *this_07 == nullptr;
        shared_ptr<ClientCompositeData>* local_70 = this_07;
        if (bVar5) {
            pvVar8 = (vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>*)(*this_00)[0];
            puVar9 =
                (uint8_t*)LoadMapSquarePointLightList(local_48, pvVar8, local_58, local_48->field_0, local_48->field_4);
            local_34 = (unsigned int)(((uint64_t)((int64_t)((unsigned long)puVar9 >> 8)) << 8) |
                                      (uint8_t)(puVar9 == DataStatus::MISSING || puVar9 == DataStatus::READY));
        } else {
            lVar7 = (*this_07).operator->();
            lVar7 = ((lVar7 + 9800))->size();
            if (lVar7 == 0) {
                local_34 = 1;
            } else {
                local_34 = (unsigned int)(((uint64_t)((int64_t)((unsigned long)lVar7 >> 8)) << 8) | (uint8_t)1);
                uVar20 = 0;
                do {
                    cVar4 = ((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(*this_00)[uVar20])
                                ->empty();
                    if (cVar4) {
                        pvVar8 = (vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>*)(*this_00)[uVar20];
                        lVar7 = (*this_07).operator->();
                        puVar11 = (unsigned int*)(*((lVar7 + 9800)))[uVar20];
                        uVar19 = *puVar11;
                        lVar7 = (*this_07).operator->();
                        lVar7 = (*((lVar7 + 9800)))[uVar20];
                        puVar9 = (uint8_t*)LoadMapSquarePointLightList(local_48, pvVar8, local_58, uVar19,
                                                                       *(unsigned int*)(lVar7 + 4));
                        uVar19 = local_34 & 255;
                        local_34 = uVar19;
                        if (puVar9 != DataStatus::MISSING) {
                            local_34 = 0;
                        }
                        if (puVar9 == DataStatus::READY) {
                            local_34 = uVar19;
                        }
                        this_07 = local_70;
                    }
                    uVar20 = uVar20 + 1;
                    lVar7 = (*this_07).operator->();
                    uVar10 = ((lVar7 + 9800))->size();
                } while (uVar20 < uVar10);
            }
        }
        if ((local_34 & 1) != 0) {
            bVar5 = *this_07 == nullptr;
            if (bVar5) {
                pvVar8 = (vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>*)(*this_00)[0];
                pSVar21 = local_48;
                local_48->field_24 = *pvVar8;
            } else {
                local_88 = (vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>*)&local_48->field_24;
                local_98 =
                    (Array<eastl::vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>, BucketAllocatorEASTL>*)
                        this_00;
                local_88->clear();
                local_3c = 0;
                uVar20 = 0;
                do {
                    do {
                        local_78 = uVar20 + 1;
                        uVar10 = 0;
                        local_90 = uVar20;
                        do {
                            this_02 = (vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul>, 10ul>,
                                              eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true>>*)(*this_07)
                                          .operator->();
                            this_03 = (vector<eastl::fixed_vector<ClientCompositeZone, 10ul>,
                                              eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true>>*)(*this_02)
                                [(unsigned long)local_3c];
                            this_04 =
                                (vector<ClientCompositeZone, eastl::fixed_vector_allocator<20ul, 10ul, 4ul, 0ul,
                                                                                           true>>*)(*this_03)[local_78];
                            local_b0 = uVar10 + 1;
                            local_a0 = uVar10;
                            this_05 = (ClientCompositeZone*)(*this_04)[local_b0];
                            cVar4 = this_05->IsValid();
                            if (cVar4) {
                                uVar19 = this_05->field_4;
                                uVar3 = this_05->field_8;
                                this_06 =
                                    (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)(*local_98)
                                        [(unsigned long)(unsigned int)this_05->field_16];
                                lVar7 = this_06->size();
                                if (lVar7 != 0) {
                                    local_64 = (uVar19 & 7) * 1024;
                                    local_58 = (Js5ResourceProvider*)(unsigned long)local_64;
                                    local_64 = local_64 + 1023;
                                    local_60 = (uVar3 & 7) * 1024;
                                    local_a8 = (unsigned long)local_60;
                                    local_60 = local_60 + 1023;
                                    uVar20 = 0;
                                    do {
                                        psVar12 = (shared_ptr<StaticPointLight>*)(*this_06)[uVar20];
                                        pVVar15 = (Vector2T<int>*)(*psVar12).operator->();
                                        pVVar16 = (Vector3T<float>*)pVVar15->y();
                                        local_e8.Vector3T<float>(*pVVar16);
                                        pCVar18 = (CoordMapSquare*)(*psVar12).operator->();
                                        iVar6 = pCVar18->GetX();
                                        if ((((iVar6 == this_05->field_0) && (puVar11 = (unsigned int*)local_e8[0],
                                                                              (unsigned int)local_58 <= *puVar11)) &&
                                             (puVar11 = (unsigned int*)local_e8[0], *puVar11 <= local_64)) &&
                                            ((puVar11 = (unsigned int*)local_e8[2],
                                              (unsigned int)local_a8 <= *puVar11 &&
                                                  (puVar11 = (unsigned int*)local_e8[2], *puVar11 <= local_60)))) {
                                            puVar11 = &local_e8[0];
                                            local_38 = *puVar11 & 1023;
                                            puVar11 = &local_e8[2];
                                            local_5c = *puVar11 & 1023;
                                            local_4c = (float)RegionRotate::RegionRotateFineX(
                                                local_38, local_5c, (unsigned int)(uint8_t)this_05->field_12);
                                            local_38 = RegionRotate::RegionRotateFineZ(
                                                local_38, local_5c, (unsigned int)(uint8_t)this_05->field_12);
                                            local_b8 = psVar12->end();
                                            local_4c = (float)(unsigned int)((int)local_90 * 1024 + (int)local_4c);
                                            puVar11 = &local_e8[1];
                                            local_d8 = math::ColourHSL(local_4c, (float)*puVar11,
                                                                       (float)((int)local_a0 * 1024 + local_38));
                                            MakeSharedPool<StaticPointLight, 64>::MakeShared<
                                                StaticPointLight*, math::Vector3T<float>, unsigned int&>(
                                                (StaticPointLight**)local_c8, (Vector3T<float>*)&local_b8,
                                                (unsigned int*)&local_d8);
                                            local_88->push_back(*local_c8);
                                        }
                                        uVar20 = uVar20 + 1;
                                        uVar10 = this_06->size();
                                    } while (uVar20 < uVar10);
                                }
                            }
                            uVar10 = local_b0;
                            this_07 = local_70;
                        } while (local_b0 != 8);
                        uVar20 = local_78;
                    } while (local_78 != 8);
                    local_3c = local_3c + 1;
                    uVar20 = 0;
                } while (local_3c < 4);
                pSVar21 = local_48;
            }
            psVar12 = (shared_ptr<StaticPointLight>*)pSVar21->field_24.HeapBeginPtr();
            psVar13 = (shared_ptr<StaticPointLight>*)pSVar21->field_24.end();
            for (; psVar12 != psVar13; psVar12 = psVar12 + 16) {
                pSVar14 = (StaticPointLight*)(*psVar12).operator->();
                cVar4 = pSVar14->GetUseTerrainHeight();
                pSVar21 = local_48;
                if (cVar4) {
                    uVar19 = local_48->field_0;
                    pVVar15 = (Vector2T<int>*)(*psVar12).operator->();
                    pVVar16 = (Vector3T<float>*)pVVar15->y();
                    pfVar17 = (float*)(*pVVar16)[0];
                    fVar1 = *pfVar17;
                    uVar3 = pSVar21->field_4;
                    pVVar15 = (Vector2T<int>*)(*psVar12).operator->();
                    pVVar16 = (Vector3T<float>*)pVVar15->y();
                    pfVar17 = (float*)(*pVVar16)[2];
                    fVar2 = *pfVar17;
                    pCVar18 = (CoordMapSquare*)(*psVar12).operator->();
                    iVar6 = pCVar18->GetX();
                    heightMap.GetTileHeight(*local_c8, iVar6, ((int)fVar1 >> 7) + uVar19 * 64,
                                            ((int)fVar2 >> 7) + uVar3 * 64, true, 0);
                    pSVar14 = (StaticPointLight*)(*psVar12).operator->();
                    pSVar14->AddTerrainHeight(local_c8[0]);
                }
            }
        }
        return local_34 & 4294967041;
    }

    // 0x1003ddd00
    uint8_t* StaticPointLightLoader::LoadMapSquarePointLightList(
        eastl::vector<shared_ptr<StaticPointLight>, BucketAllocatorEASTL>& staticPointLights,
        Js5ResourceProvider* js5ResourceProvider, unsigned int arg3, unsigned int arg4) {
        uint8_t bVar1;
        uint8_t bVar3;
        uint32_t uVar4;
        StaticPointLight* pSVar6;
        PacketT<Array<unsigned char> _>* arg1;
        shared_ptr<StaticPointLight>* this_03;
        shared_ptr<StaticPointLight>* psVar7;
        StaticPointLight* staticPointLight;
        Vector2T<int>* pVVar8;
        Layout* pLVar9;
        float* pfVar10;
        compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>* pcVar11;
        Logger* pLVar12;
        CoordMapSquare* pCVar13;
        uint64_t extraout_RAX;
        unsigned int uVar14;
        int iVar15;
        int iVar16;
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_190;
        uint8_t* local_180;
        unsigned int local_174;
        float local_160;
        float local_15c;
        LogStream local_158;
        LogStream local_c8;

        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> local_1a0;
        auto puVar5 = js5ResourceProvider->GetFile(local_1a0, *(Js5Archive::JS5_MAPS), arg4 << 7 | arg3, 7,
                                                   (Priority*)Priority::HIGH, true, false, false);
        if (puVar5 == DataStatus::READY) {
            bVar1 = ((PacketReaderMixin<PacketT<Array<unsigned char>>>*)local_1a0.operator->())->g1();
            staticPointLights.reserve((unsigned long)(unsigned int)bVar1);
            if (bVar1 != 0) {
                uVar14 = 0;
                local_180 = puVar5;
                do {
                    MakeSharedPool<StaticPointLight, 64>::MakeShared<>();
                    pSVar6 = (StaticPointLight*)local_190.operator->();
                    arg1 = (PacketT<Array<unsigned char> _>*)*local_1a0;
                    pSVar6->Initialise(*arg1);
                    ((SwipeState*)local_190.operator->())->SetStartPosition(field_0, field_4);
                    pSVar6 = (StaticPointLight*)local_190.operator->();
                    if (pSVar6->IsValid() == '\0') {
                        pVVar8 = (Vector2T<int>*)local_190.operator->();
                        pLVar9 = (Layout*)pVVar8->y();
                        pfVar10 = (float*)pLVar9->SSOBeginPtr();
                        local_15c = *pfVar10 + 64.0;
                        pVVar8 = (Vector2T<int>*)local_190.operator->();
                        pcVar11 =
                            (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)pVVar8->y();
                        pfVar10 = (float*)pcVar11->second();
                        local_160 = *pfVar10 + 64.0;
                        pLVar12 = logger::default_logger();
                        local_c8 = logger::LogStream(LOGGER_SCENE);
                        pCVar13 = (CoordMapSquare*)local_190.operator->();
                        uVar4 = pCVar13->GetX();
                        pVVar8 = (Vector2T<int>*)local_190.operator->();
                        iVar16 = (int)local_15c;
                        iVar15 = (int)local_160;
                        pVVar8 = (Vector2T<int>*)pVVar8->y();
                        pfVar10 = (float*)pVVar8->y();
                        ((uint8_t)pLVar12)
                            ->Log(nullptr, (LogLevel)&local_c8, 3, 14419976, 174,
                                  "Invalid pointlight data (index %d) found at tile %d,%u,%u,%d,%d (height %d) - "
                                  "skipping",
                                  uVar14, uVar4, arg3, arg4, iVar16 >> 7, iVar15 >> 7, (int)*pfVar10);
                        puVar5 = local_180;
                    } else {
                        local_174 = uVar14;
                        this_03 = (shared_ptr<StaticPointLight>*)staticPointLights.HeapBeginPtr();
                        psVar7 = (shared_ptr<StaticPointLight>*)staticPointLights.end();
                        if (this_03 == psVar7) {
                            local_15c = 0.0;
                        } else {
                            local_15c = 0.0;
                            do {
                                pSVar6 = (StaticPointLight*)**this_03;
                                staticPointLight = (StaticPointLight*)*local_190;
                                bVar3 = *pSVar6 == *staticPointLight;
                                if (bVar3 != 0) {
                                    pVVar8 = (Vector2T<int>*)local_190.operator->();
                                    pLVar9 = (Layout*)pVVar8->y();
                                    pfVar10 = (float*)pLVar9->SSOBeginPtr();
                                    local_15c = *pfVar10 + 64.0;
                                    pVVar8 = (Vector2T<int>*)local_190.operator->();
                                    pcVar11 =
                                        (compressed_pair_imp<std::deque<ThreadPool::TaskInfo>*, eastl::allocator, 0>*)
                                            pVVar8->y();
                                    pfVar10 = (float*)pcVar11->second();
                                    local_160 = *pfVar10 + 64.0;
                                    pLVar12 = logger::default_logger();
                                    local_158 = logger::LogStream(LOGGER_SCENE);
                                    pCVar13 = (CoordMapSquare*)local_190.operator->();
                                    uVar4 = pCVar13->GetX();
                                    pVVar8 = (Vector2T<int>*)local_190.operator->();
                                    iVar16 = (int)local_15c;
                                    iVar15 = (int)local_160;
                                    pVVar8 = (Vector2T<int>*)pVVar8->y();
                                    pfVar10 = (float*)pVVar8->y();
                                    ((uint8_t)pLVar12)
                                        ->Log(nullptr, (LogLevel)&local_158, 3, 14419976, 190,
                                              "Duplicate light found at tile %d,%u,%u,%d,%d (height %d) - skipping",
                                              uVar4, arg3, arg4, iVar16 >> 7, iVar15 >> 7, (int)*pfVar10);
                                    local_15c = (float)(((uint64_t)((int64_t)((unsigned long)extraout_RAX >> 8)) << 8) |
                                                        (uint8_t)1);
                                }
                                this_03 = this_03 + 16;
                            } while ((bVar3 | this_03 == psVar7) != 1);
                        }
                        uVar14 = local_174;
                        puVar5 = local_180;
                        if (((unsigned int)local_15c & 1) == 0) {
                            staticPointLights.push_back(local_190);
                        }
                    }
                    uVar14 = uVar14 + 1;
                } while (uVar14 != bVar1);
            }
        } else if (puVar5 == DataStatus::MISSING) {
            staticPointLights.clear();
        }
        return puVar5;
    }

    // 0x1003de5e0
    void StaticPointLightLoader::Destroy() {
        field_0 = 0;
        field_4 = 0;
        field_8->reset();
        field_24.clear();
        field_48.clear();
    }

} // namespace jag::game
