// libs/game/runetek5/assetbuilder/jobs/buildterrain/BuildTerrainWorker.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "BuildTerrainWorker.h"

namespace jag::game {
    // 0x100627d00
    BuildTerrainWorker::BuildTerrainWorker() : AssetWorker(), field_40(0), field_44(0) {
        new (&field_112) shared_ptr();
    }

    // 0x100627e10
    uint8_t* BuildTerrainWorker::Service(int arg1) {
        array<shared_ptr<eastl::map<int, graphics::TerrainTextureMeta>>, 4ul> aVar1;
        unsigned int arg4;
        uint32_t uVar2;
        bool bVar3;
        AABB* pAVar4;
        uint8_t auVar5[8];
        uint8_t auVar6[8];
        uint8_t uVar8;
        short sVar9;
        float fVar10;
        long lVar11;
        long lVar12;
        shared_ptr* psVar13;
        array<shared_ptr<BuildTerrainResultLevelData>, 4ul>* paVar14;
        shared_ptr<BuildTerrainResultLevelData>* psVar15;
        shared_ptr<BuiltTerrainLevel>* psVar16;
        shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>> _>* gridGroupss;
        shared_ptr<eastl::map<int, graphics::TerrainTextureMeta> _>* arg2;
        AABB* aabb;
        fixed_hash_map<int, graphics::RenderChunk, _256ul, _257ul, true, eastl::hash<int>, eastl::equal_to<int>, false>*
            fixed_hash_map;
        unsigned long uVar17;
        unsigned long uVar18;
        vector<graphics::ModularParticleEmitter, eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true>>* this_00;
        vector<unsigned char>* this_01;
        unsigned char* arg1_00;
        unsigned char* arg2_00;
        uint8_t* puVar19;
        TerrainPatchVertex* pTVar20;
        short* psVar21;
        vector<eastl::vector<int>>* arg1_01;
        int* arg1_02;
        int* piVar22;
        uint8_t* pbVar23;
        array<shared_ptr<eastl::map<int, graphics::TerrainTextureMeta>>, 4ul>* paVar24;
        shared_ptr<BuildTerrainResultWaterData>* this_04;
        vector<unsigned short>* this_05;
        short sVar25;
        uint8_t* puVar26;
        BuildTerrainWorker* pBVar27;
        int iVar28;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>* pvVar29;
        array<unsigned char, 4ul>* this_06;
        vector<graphics::TerrainPatchVertex>* this_07;
        int arg3;
        float in_XMM1_Da;
        array<math::Vector2T<float>, 3ul> local_37c8;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_37b0;
        vector<WorldMap::MapElementInstance>* local_3798;
        unsigned long local_3790;
        unsigned long local_3788;
        ColourHSL local_3780;
        unsigned long local_3770;
        vector<shared_ptr<BuiltTerrainLevel>>* local_3768;
        unsigned long local_3760;
        uint8_t local_3758[8];
        float local_3750;
        shared_ptr<BuildTerrainResultData> local_3738;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>* local_3728;
        AABB* local_3720;
        uint64_t local_3718;
        float local_3710;
        array<shared_ptr<eastl::map<int, graphics::TerrainTextureMeta>>, 4ul>* local_3708;
        unsigned long local_3700;
        unsigned long local_36f8;
        unsigned long local_36e8;
        vector<eastl::vector<unsigned char>> local_36e0;
        TerrainPatch local_3678;

        bool cVar7 = field_8->operator_cast_to_bool();
        if (!cVar7) {
            field_24.reset();
            puVar26 = DataStatus::READY;
        } else {
            lVar11 = field_8->end();
            lVar12 = field_48.size();
            local_3708 = (array<shared_ptr<eastl::map<int, graphics::TerrainTextureMeta>>, 4ul>*)lVar11;
            lVar11 = ((lVar11 + 64))->size();
            if (lVar12 != lVar11) {
                field_40 = 64;
                field_44 = 1;
                DecodeTerrain();
            }
            local_3768 = (vector<shared_ptr<BuiltTerrainLevel>>*)&field_80;
            cVar7 = local_3768->empty();
            pBVar27 = this;
            if (cVar7) {
                BuildTerrain(this);
                SplitRenderChunks(pBVar27);
            }
            MakeSharedPool<BuildTerrainResultData, 16>::MakeShared<>();
            local_3708 =
                (array<shared_ptr<eastl::map<int, graphics::TerrainTextureMeta>>, 4ul>*)((long)local_3708 + 208);
            uVar17 = 0;
            do {
                local_36e8 = uVar17;
                psVar13 = (shared_ptr*)(*local_3768)[uVar17];
                cVar7 = shared_ptr::operator_cast_to_bool(psVar13);
                if (cVar7) {
                    MakeSharedPool<BuildTerrainResultLevelData, 16>::MakeShared<>();
                    paVar14 = (array<shared_ptr<BuildTerrainResultLevelData>, 4ul>*)local_3738.operator->();
                    psVar15 = (shared_ptr<BuildTerrainResultLevelData>*)(*paVar14)[local_36e8];
                    *psVar15 = local_3678;
                    paVar14 = (array<shared_ptr<BuildTerrainResultLevelData>, 4ul>*)local_3738.operator->();
                    uVar17 = local_36e8;
                    psVar15 = (shared_ptr<BuildTerrainResultLevelData>*)(*paVar14)[local_36e8];
                    local_3720 = (AABB*)**psVar15;
                    psVar16 = (shared_ptr<BuiltTerrainLevel>*)(*local_3768)[uVar17];
                    gridGroupss = (shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>> _>*)**psVar16;
                    arg2 = (shared_ptr<eastl::map<int, graphics::TerrainTextureMeta> _>*)(*local_3708)[local_36e8];
                    arg4 = field_40;
                    if (arg4 == 0) {
                        iVar28 = 0;
                    } else {
                        iVar28 = (int)(64 / (unsigned long)arg4) << 7;
                    }
                    local_3678 = graphics::TerrainPatch((int)local_36e8, *arg2, *gridGroupss, arg4, iVar28);
                    pAVar4 = local_3720;
                    local_3720->field_32 = (*((gridGroupss + 16)));
                    if (local_36e8 == 0) {
                        pAVar4[1].field_12 = (*((gridGroupss + 32)));
                        pAVar4[2].field_8 = (*((gridGroupss + 64)));
                    }
                    pAVar4[1].field_28 = (*((gridGroupss + 48)));
                    aabb = (AABB*)local_3678.GetScreen();
                    *pAVar4 = *aabb;
                    local_3678.SwapVertexDataBuffer(pAVar4[2].field_24);
                    local_3678.SwapVertexDataBufferPos(pAVar4[3].field_20);
                    fVar10 = (float)local_3678.GetGridResolution();
                    pAVar4[4].m_maximum = fVar10;
                    fVar10 = (float)local_3678.GetGridSize();
                    pAVar4[4].field_20 = fVar10;
                    fixed_hash_map = (fixed_hash_map<int, graphics::RenderChunk, _256ul, _257ul, true, eastl::hash<int>,
                                                     eastl::equal_to<int>, false>*)local_3678.GetRenderChunks();
                    pAVar4[4].field_24 = *fixed_hash_map;
                    fVar10 = (float)local_3678.GetViewportMapID();
                    pAVar4[351].field_20 = fVar10;
                    local_3728 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                                         eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)**gridGroupss;
                    uVar17 = local_3728->size();
                    new (local_3758) eastl::allocator("EASTL vector");
                    local_36e0 = eastl::vector<eastl::vector<unsigned char>>(uVar17, *local_3758);
                    lVar11 = local_36e0.size();
                    if (lVar11 == 0) {
                        local_3700 = 0;
                    } else {
                        local_3700 = 0;
                        uVar17 = 0;
                        do {
                            this_00 =
                                (vector<
                                    graphics::ModularParticleEmitter,
                                    eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true>>*)(*local_3728)[uVar17];
                            local_36f8 = uVar17;
                            this_01 = &local_36e0[uVar17];
                            uVar17 = this_00->size();
                            this_01->resize(uVar17);
                            arg1_00 = (unsigned char*)this_01->HeapBeginPtr();
                            arg2_00 = (unsigned char*)this_01->end();
                            eastl::fill(arg1_00, arg2_00, 0);
                            lVar11 = this_01->size();
                            if (lVar11 != 0) {
                                uVar17 = 0;
                                uVar18 = 1;
                                do {
                                    lVar11 = ((GridGroup*)(*this_00)[uVar17])->GetGridTile();
                                    if ((lVar11 != 0) && (0 < *(int*)(lVar11 + 48))) {
                                        if (255 < *(int*)(lVar11 + 48)) {
                                            LogAssert(
                                                "tile->m_renderChunkIDRemoveRoof <= 255",
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "game/runetek5/assetbuilder/jobs/buildterrain/BuildTerrainWorker.cpp",
                                                116, nullptr);
                                        }
                                        uVar2 = *(uint32_t*)(lVar11 + 48);
                                        puVar19 = (uint8_t*)(*this_01)[uVar17];
                                        *puVar19 = (char)uVar2;
                                        local_3700 =
                                            (((uint64_t)((int64_t)((unsigned long)puVar19 >> 8)) << 8) | (uint8_t)1);
                                    }
                                    uVar17 = this_01->size();
                                    bVar3 = uVar18 < uVar17;
                                    uVar17 = uVar18;
                                    uVar18 = (unsigned long)((int)uVar18 + 1);
                                } while (bVar3);
                            }
                            uVar17 = (unsigned long)((int)local_36f8 + 1);
                            uVar18 = local_36e0.size();
                        } while (uVar17 < uVar18);
                    }
                    if ((local_3700 & 1) != 0) {
                        make_shared<eastl::vector<eastl::vector<unsigned char>>>((ReturnValue*)local_3758);
                        pAVar4 = local_3720 + 350;
                        pAVar4->field_24 = *local_3758;
                        ((vector<eastl::string>*)pAVar4->field_24.operator->())->swap(local_36e0);
                    }
                }
                uVar17 = local_36e8 + 1;
            } while (uVar17 != 4);
            paVar14 = (array<shared_ptr<BuildTerrainResultLevelData>, 4ul>*)local_3738.operator->();
            psVar13 = (shared_ptr*)(*paVar14)[0];
            cVar7 = shared_ptr::operator_cast_to_bool(psVar13);
            if (cVar7) {
                paVar14 = (array<shared_ptr<BuildTerrainResultLevelData>, 4ul>*)local_3738.operator->();
                psVar15 = (shared_ptr<BuildTerrainResultLevelData>*)(*paVar14)[0];
                lVar11 = **psVar15;
                this_07 = (vector<graphics::TerrainPatchVertex>*)(lVar11 + 96);
                uVar17 = this_07->size();
                local_3770 = uVar17;
                local_3678 = eastl::fixed_map<int, shared_ptr<BuildTerrainResultWaterData>, 8ul>();
                local_36e0 = eastl::fixed_vector<BuildTerrainWorker::WaterOverlapData, 8ul>();
                if (2 < local_3770) {
                    local_3788 = uVar17 / 3;
                    if (local_3788 < 2) {
                        local_3788 = 1;
                    }
                    uVar17 = 0;
                    local_3798 = (vector<WorldMap::MapElementInstance>*)this_07;
                    do {
                        local_3760 = uVar17 * 3;
                        pTVar20 = (TerrainPatchVertex*)(*this_07)[local_3760];
                        local_3708 =
                            (array<shared_ptr<eastl::map<int, graphics::TerrainTextureMeta>>, 4ul>*)GetTriangleGridTile(
                                this, pTVar20);
                        if (local_3708 != nullptr) {
                            local_36e0.clear();
                            pTVar20 = (TerrainPatchVertex*)(*this_07)[local_3760];
                            pBVar27 = this;
                            GetTriangleWaterOverlapTypes(this, &local_36e0, pTVar20);
                            AllocWaterGeometry(
                                pBVar27, &local_36e0,
                                (fixed_map<int, shared_ptr<BuildTerrainResultWaterData>, _8ul>*)&local_3678,
                                local_3770);
                            local_37b0 = std::array<math::Vector2T<float>, 3ul>();
                            local_37c8 = std::array<math::Vector2T<float>, 3ul>();
                            pTVar20 = (TerrainPatchVertex*)(*this_07)[local_3760];
                            GatherTriangleFlow(this, &local_37b0, &local_37c8, pTVar20);
                            local_3718 = math::Colour3FromR8G8B8A8(*(unsigned int*)(local_3708 + 12));
                            local_3790 = uVar17;
                            local_3710 = in_XMM1_Da;
                            local_3758 = (uint8_t[8])math::SRGBToLinear(local_3718);
                            local_3750 = in_XMM1_Da;
                            local_3718.SetXYZ(*local_3758);
                            pvVar29 = nullptr;
                            do {
                                psVar21 = (short*)(*this_07)[(unsigned long)(pvVar29 + local_3760)];
                                new (local_3758) graphics::WaterPatchVertex();
                                auVar5 = local_3758;
                                sVar9 = *psVar21;
                                local_3758._0_2_ = sVar9;
                                auVar6 = local_3758;
                                sVar25 = psVar21[2];
                                local_3758._6_2_ = auVar5._6_2_;
                                local_3758._0_4_ = auVar6._0_4_;
                                local_3758._4_2_ = sVar25;
                                psVar16 = (shared_ptr<BuiltTerrainLevel>*)(*local_3768)[0];
                                lVar11 = (*psVar16).operator->();
                                arg1_01 = (vector<eastl::vector<int>>*)*(*((lVar11 + 32)));
                                iVar28 = sVar9 + 16383;
                                arg3 = sVar25 + 16383;
                                sVar9 = GetInterpolatedValue(this, arg1_01, iVar28, arg3);
                                auVar5 = local_3758;
                                sVar25 = sVar9 - psVar21[1];
                                local_3758._6_2_ = sVar25;
                                local_3758._0_2_ = auVar5._0_2_;
                                local_3758._2_2_ = sVar9;
                                uVar17 = 127;
                                uVar8 = eastl::min<graphics::GraphicsQuality>(
                                    (int)(short)(sVar25 - (sVar25 >> 15)) >> 1, 127);
                                pBVar27 = (BuildTerrainWorker*)(psVar21 + 8);
                                puVar19 = (uint8_t*)(*pBVar27)[uVar17];
                                *puVar19 = uVar8;
                                local_3728 = pvVar29;
                                SetWaterVertexFlowData(pBVar27, (WaterPatchVertex*)local_3758, (int)pvVar29,
                                                       &local_37b0, &local_37c8);
                                arg1_02 = (int*)local_36e0.HeapBeginPtr();
                                piVar22 = (int*)local_36e0.end();
                                if (arg1_02 != piVar22) {
                                    local_36e8 = (((uint64_t)local_36e8._4_4_ << 32) | (uint32_t)((float)iVar28));
                                    this_06 = (array<unsigned char, 4ul>*)(psVar21 + 12);
                                    local_3720 = (AABB*)(((uint64_t)local_3720._4_4_ << 32) | (uint32_t)((float)arg3));
                                    do {
                                        if (0 < (short)local_3758._6_2_) {
                                            local_3700 = (((uint64_t)local_3700._4_4_ << 32) |
                                                          (uint32_t)(4096.0 / (float)(int)(short)local_3758._6_2_));
                                            pbVar23 = (uint8_t*)(*this_06)[0];
                                            local_36f8._0_4_ = (float)*pbVar23;
                                            fVar10 =
                                                (float)eastl::min<float>((float)local_3718 * (float)local_3700, 1.0);
                                            *pbVar23 = (uint8_t)(int)(fVar10 * (float)local_36f8);
                                            pbVar23 = (uint8_t*)(*this_06)[1];
                                            local_36f8._0_4_ = (float)*pbVar23;
                                            fVar10 =
                                                (float)eastl::min<float>(local_3718._4_4_ * (float)local_3700, 1.0);
                                            *pbVar23 = (uint8_t)(int)(fVar10 * (float)local_36f8);
                                            pbVar23 = (uint8_t*)(*this_06)[2];
                                            local_36f8 =
                                                (((uint64_t)local_36f8._4_4_ << 32) | (uint32_t)((float)*pbVar23));
                                            fVar10 = (float)eastl::min<float>((float)local_3700 * local_3710, 1.0);
                                            *pbVar23 = (uint8_t)(int)(fVar10 * (float)local_36f8);
                                        }
                                        fVar10 = (float)local_3718 * 255.0;
                                        puVar19 = &local_3750[0];
                                        *puVar19 = (char)(long)fVar10;
                                        fVar10 = local_3718._4_4_ * 255.0;
                                        puVar19 = &local_3750[1];
                                        *puVar19 = (char)(long)fVar10;
                                        fVar10 = local_3710 * 255.0;
                                        puVar19 = &local_3750[2];
                                        *puVar19 = (char)(long)fVar10;
                                        aVar1 = local_3708[12];
                                        paVar24 = &local_3750[3];
                                        *paVar24 = aVar1;
                                        *paVar24 =
                                            (array<shared_ptr<eastl::map<int, graphics::TerrainTextureMeta>>,
                                                   4ul>)((*(uint8_t*)(arg1_02 + 1) >> ((uint8_t)local_3728 & 31) & 1) *
                                                         (char)aVar1);
                                        this_04 = &local_3678[*arg1_02];
                                        this_05 = (vector<unsigned short>*)(*this_04).operator->();
                                        lVar11 = (*this_04).operator->();
                                        local_3780.field_0._0_2_ = ((lVar11 + 32))->size();
                                        this_05->push_back(local_3780);
                                        lVar11 = (*this_04).operator->();
                                        ((lVar11 + 32))->push_back(*local_3758);
                                        iVar28 = *arg1_02;
                                        lVar11 = (*this_04).operator->();
                                        *(int*)(lVar11 + 96) = iVar28;
                                        in_XMM1_Da = (float)(int)(short)local_3758._2_2_;
                                        local_3780 = math::ColourHSL((float)local_36e8, in_XMM1_Da, local_3720._0_4_);
                                        lVar11 = (*this_04).operator->();
                                        ((lVar11 + 64))->AddPoint(local_3780);
                                        arg1_02 = arg1_02 + 2;
                                    } while (arg1_02 != piVar22);
                                }
                                pvVar29 = local_3728 + 1;
                                this_07 = (vector<graphics::TerrainPatchVertex>*)local_3798;
                            } while (pvVar29 != (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                                                        eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)3);
                            uVar17 = local_3790;
                        }
                        uVar17 = uVar17 + 1;
                    } while (uVar17 != local_3788);
                }
                *local_3758 = local_3678.rbegin();
                local_37b0.end();
                while (cVar7 = *local_3758 != local_37b0, cVar7) {
                    lVar11 = **local_3758;
                    lVar12 = local_3738.operator->();
                    ((lVar12 + 64))->push_back(*((lVar11 + 8)));
                    ++*local_3758;
                }
            }
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(
                (shared_ptr<oldscape::ClientNpc>*)&local_3678);
            field_24 = local_3678;
            puVar26 = DataStatus::READY;
        }
        return puVar26;
    }

    // 0x100628ad0
    void BuildTerrainWorker::DecodeTerrain() {
        uint8_t bVar1;
        uint8_t bVar2;
        unsigned short uVar3;
        uint16_t uVar4;
        shared_ptr<PacketT<Array<unsigned char>>>* this_00;
        TextureAtlasReference* this_01;
        unsigned long uVar8;
        unsigned long uVar9;
        array<eastl::vector<eastl::vector<DecodedTerrainTile>>, 4ul>* this_02;
        vector<eastl::vector<DecodedTerrainTile>>* this_03;
        vector<DecodedTerrainTile>* pvVar10;
        uint8_t* pbVar11;
        uint64_t uVar12;

        long lVar5 = field_8->end();
        uint8_t* this_04 = &field_48;
        this_04->clear();
        unsigned long uVar6 = ((lVar5 + 64))->size();
        this_04->resize(uVar6);
        if (this_04->size() != 0) {
            uVar6 = 0;
            do {
                this_00 = (shared_ptr<PacketT<Array<unsigned char>>>*)(*((lVar5 + 64)))[uVar6];
                this_01 = (TextureAtlasReference*)**this_00;
                this_01->SetPos(0);
                uVar8 = this_01->size();
                uVar9 = this_01->GetTextureAtlas();
                if (uVar8 < uVar9) {
                    do {
                        bVar1 = this_01->g1();
                        this_02 = (array<eastl::vector<eastl::vector<DecodedTerrainTile>>, 4ul>*)(*this_04)[uVar6];
                        this_03 = (vector<eastl::vector<DecodedTerrainTile>>*)(*this_02)[(unsigned long)bVar1];
                        this_03->resize(66);
                        uVar8 = 0;
                        do {
                            pvVar10 = (vector<DecodedTerrainTile>*)(*this_03)[uVar8];
                            pvVar10->resize(66);
                            uVar9 = 0;
                            do {
                                pvVar10 = (vector<DecodedTerrainTile>*)(*this_03)[uVar8];
                                pbVar11 = (uint8_t*)(*pvVar10)[uVar9];
                                bVar2 = this_01->g1();
                                if (bVar2 == 0) {
                                    bVar2 = this_01->g1();
                                    pbVar11[2] = bVar2;
                                    pbVar11[1] = 0;
                                    pbVar11[3] = 0;
                                } else {
                                    pbVar11[1] = bVar2 >> 4 & 1;
                                    *pbVar11 = bVar2 >> 2 & 24 | bVar2 >> 1 & 7;
                                    bVar2 = this_01->g1();
                                    pbVar11[2] = bVar2;
                                    if (pbVar11[1] == 0) {
                                        if (bVar1 == 0) {
                                            bVar2 = 0;
                                            goto LAB_100628cae;
                                        }
                                    } else {
                                        bVar2 = this_01->g1();
                                    LAB_100628cae:
                                        pbVar11[3] = bVar2;
                                    }
                                    uVar3 = this_01->gSmart1or2();
                                    *(unsigned int*)(pbVar11 + 4) = uVar3 - 1;
                                    if (uVar3 != 0) {
                                        uVar4 = this_01->g2();
                                        *(uint16_t*)(pbVar11 + 8) = uVar4;
                                    }
                                    uVar3 = this_01->gSmart1or2();
                                    *(unsigned int*)(pbVar11 + 12) = uVar3 - 1;
                                    if (pbVar11[1] != 0) {
                                        uVar3 = this_01->gSmart1or2();
                                        *(unsigned int*)(pbVar11 + 24) = uVar3 - 1;
                                    }
                                    if (*(int*)(pbVar11 + 12) != -1) {
                                        bVar2 = this_01->g1();
                                        uVar12 = graphics::TerrainOverlayShape::GetShape((unsigned int)(bVar2 >> 2));
                                        *(uint64_t*)(pbVar11 + 32) = uVar12;
                                        pbVar11[16] = bVar2 & 3;
                                        if (pbVar11[1] != 0) {
                                            uVar3 = this_01->gSmart1or2();
                                            *(unsigned int*)(pbVar11 + 20) = uVar3 - 1;
                                        }
                                    }
                                }
                                uVar9 = uVar9 + 1;
                            } while (uVar9 != 66);
                            uVar8 = uVar8 + 1;
                        } while (uVar8 != 66);
                        uVar8 = this_01->size();
                        uVar9 = this_01->GetTextureAtlas();
                    } while (uVar8 < uVar9);
                }
                uVar6 = uVar6 + 1;
                uVar8 = this_04->size();
            } while (uVar6 < uVar8);
        }
    }

    // 0x100628d90
    void BuildTerrainWorker::BuildTerrain() {
        shared_ptr* this_00;
        unsigned long arg1;
        unsigned long arg1_00;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* this_01;
        bool cVar1;
        bool bVar2;
        bool bVar3;
        int iVar4;
        int iVar5;
        uint32_t uVar6;
        shared_ptr<BuiltTerrainLevel>* psVar8;
        shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>>>* psVar9;
        vector<eastl::vector<int>>* pvVar10;
        vector<eastl::vector<unsigned char>>* pvVar11;
        vector<int>* pvVar12;
        vector<unsigned char>* this_02;
        vector<unsigned char>* pvVar13;
        uint32_t* puVar15;
        uint8_t* puVar16;
        vector<eastl::vector<unsigned char>>* arg1_01;
        vector<DecodedTerrainTile>* pvVar17;
        long lVar18;
        int* piVar19;
        DecodedTerrainTile* pDVar20;
        shared_ptr* psVar21;
        long lVar22;
        uint8_t* pbVar23;
        shared_ptr<FloorUnderlayType>* psVar24;
        FloorUnderlayType* pFVar25;
        shared_ptr<FloorOverlayType>* psVar26;
        FloorOverlayType* pFVar27;
        MSIType* pMVar28;
        Logger* pLVar29;
        vector<graphics::ModularParticleEmitter, eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true>>* this_04;
        vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul>, 10ul>,
               eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true>>* pvVar30;
        vector<eastl::fixed_vector<ClientCompositeZone, 10ul>,
               eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true>>* this_06;
        vector<ClientCompositeZone, eastl::fixed_vector_allocator<20ul, 10ul, 4ul, 0ul, true>>* this_07;
        BuildTerrainWorker* pBVar31;
        unsigned int uVar32;
        shared_ptr* psVar33;
        unsigned long uVar34;
        unsigned int arg3;
        vector<eastl::vector<graphics::GridGroup>>* pvVar36;
        GridTile* pGVar37;
        unsigned long uVar38;
        unsigned int* in_stack_fffffffffffffea8;
        array<eastl::vector<eastl::vector<DecodedTerrainTile>>, _4ul>* local_108;
        shared_ptr local_100;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* local_f0;
        shared_ptr local_e8;
        GridTile* local_d8;
        shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>>>* local_d0;
        vector<eastl::vector<graphics::GridGroup>>* local_c8;
        int local_bc;
        vector<int>* local_b0;
        shared_ptr local_a0;
        int local_90;
        int local_8c;
        int local_88;
        int local_84;
        unsigned int local_80;
        unsigned int local_7c;
        shared_ptr local_70;
        shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>>>* local_60;
        unsigned long local_58;
        unsigned long local_50;
        DecodedTerrainTile* local_48;
        uint8_t local_31;

        auto pBVar7 = field_8->end();
        vector<shared_ptr<BuiltTerrainLevel>>* local_a8 = (vector<shared_ptr<BuiltTerrainLevel>>*)&field_80;
        local_a8->resize(4);
        shared_ptr* this_09 = (shared_ptr*)&pBVar7->field_16;
        unsigned long uVar35 = 0;
        BuildTerrainRequestData* local_b8 = pBVar7;
        shared_ptr* local_78 = this_09;
        do {
            pBVar31 = this;
            MakeSharedPool<BuiltTerrainLevel, 64>::MakeShared<>();
            local_50 = uVar35;
            psVar8 = (shared_ptr<BuiltTerrainLevel>*)(*local_a8)[uVar35];
            *psVar8 = local_70;
            psVar8 = (shared_ptr<BuiltTerrainLevel>*)(*local_a8)[local_50];
            psVar9 = (shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>>>*)**psVar8;
            make_shared<eastl::vector<eastl::vector<graphics::GridGroup>>>((ReturnValue*)&local_70);
            *psVar9 = local_70;
            local_c8 = (vector<eastl::vector<graphics::GridGroup>>*)**psVar9;
            local_c8->resize((unsigned long)(pBVar31->field_40 + 2));
            psVar33 = (shared_ptr*)(psVar9 + 16);
            local_60 = psVar9;
            cVar1 = shared_ptr::operator_cast_to_bool(psVar33);
            if (!cVar1) {
                local_a0._0_4_ = 66;
                make_shared<eastl::vector<eastl::vector<int>>, int>((ReturnValue*)&local_70, (int*)&local_a0);
                *psVar33 = local_70;
            } else {
                pvVar10 = (vector<eastl::vector<int>>*)**psVar33;
                pvVar10->resize(66);
            }
            this_00 = (shared_ptr*)(local_60 + 48);
            cVar1 = shared_ptr::operator_cast_to_bool(this_00);
            if (!cVar1) {
                local_a0._0_4_ = 66;
                make_shared<eastl::vector<eastl::vector<unsigned char>>, int>((ReturnValue*)&local_70, (int*)&local_a0);
                *this_00 = local_70;
            } else {
                pvVar11 = (vector<eastl::vector<unsigned char>>*)(*this_00).operator->();
                pvVar11->resize(66);
            }
            pvVar36 = local_c8;
            if (local_50 == 0) {
                psVar21 = (shared_ptr*)(local_60 + 32);
                cVar1 = shared_ptr::operator_cast_to_bool(psVar21);
                if (!cVar1) {
                    local_a0._0_4_ = 66;
                    make_shared<eastl::vector<eastl::vector<int>>, int>((ReturnValue*)&local_70, (int*)&local_a0);
                    *psVar21 = local_70;
                } else {
                    pvVar10 = (vector<eastl::vector<int>>*)(*psVar21).operator->();
                    pvVar10->resize(66);
                }
                psVar21 = (shared_ptr*)(local_60 + 64);
                cVar1 = shared_ptr::operator_cast_to_bool(psVar21);
                if (!cVar1) {
                    local_a0._0_4_ = 66;
                    make_shared<eastl::vector<eastl::vector<unsigned char>>, int>((ReturnValue*)&local_70,
                                                                                  (int*)&local_a0);
                    *psVar21 = local_70;
                } else {
                    pvVar11 = (vector<eastl::vector<unsigned char>>*)(*psVar21).operator->();
                    pvVar11->resize(66);
                }
            }
            local_d0 = local_60 + 32;
            local_60 = local_60 + 64;
            uVar35 = 0;
            bVar3 = false;
            do {
                uVar34 = local_50;
                uVar32 = pBVar31->field_40;
                if (uVar35 == 65) {
                    uVar32 = uVar32 + 1;
                } else if (uVar32 == 0) {
                    uVar32 = 0;
                } else {
                    uVar32 = (unsigned int)((uVar35 & 4294967295) / (64 / (unsigned long)uVar32));
                }
                local_58 = uVar35;
                iVar4 = GetSourceLookup(uVar32);
                iVar5 = pvVar36->size();
                if ((int)uVar32 < iVar5) {
                    local_f0 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(*pvVar36)[(
                        long)(int)uVar32];
                } else {
                    local_f0 = nullptr;
                }
                psVar9 = local_60;
                pvVar10 = (vector<eastl::vector<int>>*)**psVar33;
                uVar35 = local_58;
                pvVar12 = (vector<int>*)(*pvVar10)[local_58];
                pvVar11 = (vector<eastl::vector<unsigned char>>*)**this_00;
                this_02 = (vector<unsigned char>*)(*pvVar11)[uVar35];
                pvVar12->resize(66);
                this_02->resize(66);
                if (uVar34 == 0) {
                    pvVar10 = (vector<eastl::vector<int>>*)**local_d0;
                    uVar35 = local_58;
                    ((vector<int>*)(*pvVar10)[local_58])->resize(66);
                    pvVar11 = (vector<eastl::vector<unsigned char>>*)**psVar9;
                    pvVar13 = (vector<unsigned char>*)(*pvVar11)[uVar35];
                    pvVar13->resize(66);
                }
                uVar35 = 0;
                local_b0 = pvVar12;
                do {
                    uVar32 = field_40;
                    arg3 = (unsigned int)uVar35;
                    if (uVar35 == 65) {
                        uVar32 = uVar32 + 1;
                    } else if (uVar32 == 0) {
                        uVar32 = 0;
                    } else {
                        uVar32 = (unsigned int)((uVar35 & 4294967295) / (64 / (unsigned long)uVar32));
                    }
                    local_8c = (int)local_58;
                    local_90 = iVar4;
                    local_88 = local_8c;
                    local_84 = GetSourceLookup(uVar32);
                    this_01 = local_f0;
                    local_bc = (int)uVar34;
                    local_80 = arg3;
                    local_7c = arg3;
                    if (local_f0 == nullptr) {
                        pGVar37 = nullptr;
                    } else {
                        cVar1 = local_f0->empty();
                        if (cVar1) {
                            this_01->resize((unsigned long)(field_40 + 2));
                        }
                        iVar5 = this_01->size();
                        pGVar37 = nullptr;
                        if ((int)uVar32 < iVar5) {
                            pGVar37 = (GridTile*)(*local_f0)[(long)(int)uVar32];
                        }
                    }
                    pBVar31 = this;
                    local_d8 = pGVar37;
                    if (pGVar37 == nullptr) {
                        pGVar37 = nullptr;
                    } else if (pGVar37->field_40 == '\0') {
                        pGVar37->field_40 = 1;
                        *(uint32_t*)((long)&pGVar37->field_12 + 4) = 0;
                        pGVar37->field_0 = 4294967295;
                        *(uint64_t*)&pGVar37->field_8 = 3212836864;
                        *(uint32_t*)&pGVar37->field_52 = 0;
                        pGVar37->field_60 = 0;
                        pGVar37->field_72 = graphics::TerrainOverlayShape::GetShape(0);
                        *(uint32_t*)&pGVar37->field_64 = 0;
                        local_d8[1].field_40 = 0;
                        local_d8[2].field_40 = 0;
                    } else {
                        pGVar37 = nullptr;
                    }
                    puVar15 = (uint32_t*)(*local_b0)[uVar35];
                    *puVar15 = 0;
                    puVar16 = (uint8_t*)(*this_02)[uVar35];
                    *puVar16 = 0;
                    if (local_50 == 0) {
                        pvVar10 = (vector<eastl::vector<int>>*)**local_d0;
                        uVar34 = local_58;
                        pvVar12 = (vector<int>*)(*pvVar10)[local_58];
                        puVar15 = (uint32_t*)(*pvVar12)[uVar35];
                        *puVar15 = 0;
                        pvVar11 = (vector<eastl::vector<unsigned char>>*)**local_60;
                        pBVar31 = this;
                        pvVar13 = (vector<unsigned char>*)(*pvVar11)[uVar34];
                        puVar16 = (uint8_t*)(*pvVar13)[uVar35];
                        *puVar16 = 0;
                    }
                    local_108 = nullptr;
                    local_31 = 0;
                    cVar1 = shared_ptr::operator_cast_to_bool(this_09);
                    if (!cVar1) {
                        local_108 = &field_48[0];
                    LAB_100629445:
                        if ((unsigned long)(long)local_bc < 5) {
                            arg1_01 = (vector<eastl::vector<unsigned char>>*)local_108->at((long)local_bc);
                            bVar2 = ArrayValidPosition<eastl::vector<eastl::vector<DecodedTerrainTile>>, int>(
                                arg1_01, &local_8c);
                            if ((bVar2) &&
                                (bVar2 = ArrayValidPosition<eastl::vector<eastl::vector<DecodedTerrainTile>>, int>(
                                     arg1_01, &local_88),
                                 bVar2)) {
                                pvVar17 = (vector<DecodedTerrainTile>*)(*arg1_01)[(long)local_8c];
                                bVar2 = ArrayValidPosition<eastl::vector<DecodedTerrainTile>, int>(pvVar17,
                                                                                                   (int*)&local_80);
                                if (bVar2) {
                                    puVar16 = (uint8_t*)(*pvVar17)[(long)(int)local_80];
                                    pvVar17 = (vector<DecodedTerrainTile>*)(*arg1_01)[(long)local_88];
                                    bVar2 = ArrayValidPosition<eastl::vector<DecodedTerrainTile>, int>(pvVar17,
                                                                                                       (int*)&local_7c);
                                    if (bVar2) {
                                        lVar18 = (*pvVar17)[(long)(int)local_7c];
                                        pBVar31 = this;
                                        local_48 = (DecodedTerrainTile*)puVar16;
                                        uVar6 = DecodeHeightCode((int)local_50, (unsigned int)local_58, arg3,
                                                                 *(unsigned char*)(lVar18 + 2), *(bool*)(lVar18 + 1));
                                        puVar15 = (uint32_t*)(*local_b0)[uVar35];
                                        *puVar15 = uVar6;
                                        local_48 = (DecodedTerrainTile*)(((uint64_t)local_48._1_7_ << 8) |
                                                                         (uint8_t)(*(uint8_t*)local_48));
                                        puVar16 = (uint8_t*)(*this_02)[uVar35];
                                        uVar34 = local_58;
                                        *puVar16 = local_48._0_1_;
                                        if (*(char*)(lVar18 + 1) == '\0') {
                                            if (local_50 == 0) {
                                                piVar19 = (int*)(*local_b0)[uVar35];
                                                iVar5 = *piVar19;
                                                pvVar10 = (vector<eastl::vector<int>>*)**local_d0;
                                                pvVar12 = (vector<int>*)(*pvVar10)[local_58];
                                                goto LAB_10062960b;
                                            }
                                        } else {
                                            uVar6 = DecodeHeightCode(pBVar31, (int)local_50, (unsigned int)local_58,
                                                                     arg3, *(unsigned char*)(lVar18 + 3), false);
                                            psVar9 = local_d0;
                                            local_48 = (DecodedTerrainTile*)(((uint64_t)local_48._4_4_ << 32) |
                                                                             (uint32_t)uVar6);
                                            pvVar10 = (vector<eastl::vector<int>>*)**local_d0;
                                            pvVar12 = (vector<int>*)(*pvVar10)[uVar34];
                                            puVar15 = (uint32_t*)(*pvVar12)[uVar35];
                                            *puVar15 = local_48._0_4_;
                                            pvVar11 = (vector<eastl::vector<unsigned char>>*)**local_60;
                                            pvVar13 = (vector<unsigned char>*)(*pvVar11)[uVar34];
                                            puVar16 = (uint8_t*)(*pvVar13)[uVar35];
                                            *puVar16 = 1;
                                            pvVar10 = (vector<eastl::vector<int>>*)**psVar9;
                                            pvVar12 = (vector<int>*)(*pvVar10)[uVar34];
                                            piVar19 = (int*)(*pvVar12)[uVar35];
                                            pvVar12 = local_b0;
                                            iVar5 = *piVar19;
                                            piVar19 = (int*)(*local_b0)[uVar35];
                                            iVar5 = iVar5 - *piVar19;
                                        LAB_10062960b:
                                            piVar19 = (int*)(*pvVar12)[uVar35];
                                            *piVar19 = iVar5;
                                        }
                                        bVar2 =
                                            ArrayValidPosition<eastl::vector<eastl::vector<DecodedTerrainTile>>, int>(
                                                arg1_01, &local_90);
                                        if (bVar2) {
                                            pvVar17 = (vector<DecodedTerrainTile>*)(*arg1_01)[(long)local_90];
                                            bVar2 = ArrayValidPosition<eastl::vector<DecodedTerrainTile>, int>(
                                                pvVar17, &local_84);
                                            this_09 = local_78;
                                            if (bVar2) {
                                                pDVar20 = (DecodedTerrainTile*)(*pvVar17)[(long)local_84];
                                                bVar3 = true;
                                                if (pGVar37 != nullptr) {
                                                    *(uint32_t*)&pGVar37->field_44 = 0;
                                                    local_48 = pDVar20;
                                                    if (local_50 != 0) {
                                                        local_70._0_4_ = (int)local_50 - 1;
                                                        do {
                                                            bVar2 = ArrayValidPosition<
                                                                eastl::fixed_vector<shared_ptr<eastl::vector<
                                                                                        eastl::vector<unsigned char>>>,
                                                                                    4ul>,
                                                                int>(
                                                                (fixed_vector<
                                                                    shared_ptr<eastl::vector<eastl::vector<int>> _>,
                                                                    _4ul>*)local_a8,
                                                                (int*)&local_70);
                                                            if (bVar2) {
                                                                psVar21 =
                                                                    (shared_ptr*)(*local_a8)[(long)(int)local_70._0_4_];
                                                                cVar1 = shared_ptr::operator_cast_to_bool(psVar21);
                                                                if (cVar1) {
                                                                    lVar22 = (*psVar21).operator->();
                                                                    pvVar11 = (vector<eastl::vector<unsigned char>>*)*(
                                                                        *((lVar22 + 48)));
                                                                    pvVar13 =
                                                                        (vector<unsigned char>*)(*pvVar11)[local_58];
                                                                    pbVar23 = (uint8_t*)(*pvVar13)[uVar35];
                                                                    if ((*pbVar23 & 4) != 0) {
                                                                        *(uint32_t*)&pGVar37->field_44 = 1;
                                                                    }
                                                                }
                                                            }
                                                            iVar5 = local_70._0_4_ - 1;
                                                            bVar2 = 0 < (int)local_70._0_4_;
                                                            local_70._0_4_ = iVar5;
                                                        } while (bVar2);
                                                    }
                                                    uVar6 = DecodeHeightCode((int)local_50, (unsigned int)local_58,
                                                                             arg3, *(unsigned char*)(lVar18 + 2),
                                                                             *(bool*)(lVar18 + 1));
                                                    *(uint32_t*)&pGVar37->field_52 = uVar6;
                                                    if (*(char*)(lVar18 + 1) != '\0') {
                                                        iVar5 = DecodeHeightCode((int)local_50, (unsigned int)local_58,
                                                                                 arg3, *(unsigned char*)(lVar18 + 3),
                                                                                 false);
                                                        *(int*)&pGVar37->field_52 = iVar5 - *(int*)&pGVar37->field_52;
                                                        pGVar37->field_60 = 1;
                                                        *(int*)((long)&pGVar37->field_52 + 4) = iVar5;
                                                    }
                                                    local_70 = shared_ptr();
                                                    local_a0 = shared_ptr();
                                                    local_e8 = shared_ptr();
                                                    local_100 = shared_ptr();
                                                    iVar5 = *(int*)((long)&local_48->field_0 + 4);
                                                    if (iVar5 == -1) {
                                                    LAB_10062983f:
                                                        if (*(int*)&local_48->field_20 != -1) {
                                                            psVar24 = (shared_ptr<FloorUnderlayType>*)GetUnderlay(
                                                                *(int*)&local_48->field_20);
                                                            local_a0 = *psVar24;
                                                            cVar1 = shared_ptr::operator_cast_to_bool(&local_a0);
                                                            uVar6 =
                                                                (uint32_t)((unsigned long)in_stack_fffffffffffffea8 >>
                                                                           32);
                                                            if (!cVar1) {
                                                                pLVar29 = logger::default_logger();
                                                                in_stack_fffffffffffffea8 =
                                                                    (unsigned int*)(((uint64_t)uVar6 << 32) |
                                                                                    (uint32_t)(*(uint32_t*)&local_48
                                                                                                    ->field_20));
                                                                pLVar29->Log(
                                                                    false, 2,
                                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                                    "OSRS-OS1669-BOXR/libs/game/runetek5/assetbuilder/"
                                                                    "jobs/buildterrain/BuildTerrainWorker.cpp",
                                                                    1486, "%s: Could not find %s %d", "BuildTerrain",
                                                                    "underlay for ID2", in_stack_fffffffffffffea8);
                                                                goto LAB_100629b65;
                                                            }
                                                            pFVar25 = (FloorUnderlayType*)local_a0.operator->();
                                                            pFVar25->SetBlending((bool)local_b8->field_160);
                                                        }
                                                        if (local_48->field_12 != -1) {
                                                            psVar26 = (shared_ptr<FloorOverlayType>*)GetOverlay(
                                                                local_48->field_12);
                                                            local_e8 = *psVar26;
                                                            cVar1 = shared_ptr::operator_cast_to_bool(&local_e8);
                                                            uVar6 =
                                                                (uint32_t)((unsigned long)in_stack_fffffffffffffea8 >>
                                                                           32);
                                                            if (!cVar1) {
                                                                pLVar29 = logger::default_logger();
                                                                in_stack_fffffffffffffea8 =
                                                                    (unsigned int*)(((uint64_t)uVar6 << 32) |
                                                                                    (uint32_t)local_48->field_12);
                                                                pLVar29->Log(
                                                                    false, 2,
                                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                                    "OSRS-OS1669-BOXR/libs/game/runetek5/assetbuilder/"
                                                                    "jobs/buildterrain/BuildTerrainWorker.cpp",
                                                                    1497, "%s: Could not find %s %d", "BuildTerrain",
                                                                    "overlay for ID", in_stack_fffffffffffffea8);
                                                                goto LAB_100629b65;
                                                            }
                                                            pFVar27 = (FloorOverlayType*)local_e8.operator->();
                                                            pFVar27->SetBlending((bool)local_b8->field_160);
                                                        }
                                                        iVar5 = *(int*)((long)&local_48->field_20 + 4);
                                                        if (iVar5 != -1) {
                                                            psVar26 = (shared_ptr<FloorOverlayType>*)GetOverlay(iVar5);
                                                            local_100 = *psVar26;
                                                            cVar1 = shared_ptr::operator_cast_to_bool(&local_100);
                                                            uVar6 =
                                                                (uint32_t)((unsigned long)in_stack_fffffffffffffea8 >>
                                                                           32);
                                                            if (!cVar1) {
                                                                pLVar29 = logger::default_logger();
                                                                in_stack_fffffffffffffea8 =
                                                                    (unsigned int*)(((uint64_t)uVar6 << 32) |
                                                                                    (uint32_t)(*(
                                                                                        uint32_t*)((long)&local_48
                                                                                                       ->field_20 +
                                                                                                   4)));
                                                                pLVar29->Log(
                                                                    false, 2,
                                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                                    "OSRS-OS1669-BOXR/libs/game/runetek5/assetbuilder/"
                                                                    "jobs/buildterrain/BuildTerrainWorker.cpp",
                                                                    1508, "%s: Could not find %s %d", "BuildTerrain",
                                                                    "overworld overlay for ID2",
                                                                    in_stack_fffffffffffffea8);
                                                                goto LAB_100629b65;
                                                            }
                                                            pFVar27 = (FloorOverlayType*)local_100.operator->();
                                                            pFVar27->SetBlending((bool)local_b8->field_160);
                                                            pMVar28 = (MSIType*)local_100.operator->();
                                                            uVar6 = pMVar28->GetSpriteID();
                                                            *(uint32_t*)&local_d8[3].field_12 = uVar6;
                                                            pMVar28 = (MSIType*)local_100.operator->();
                                                            uVar6 = pMVar28->GetSpriteID();
                                                            *(uint32_t*)((long)&local_d8[3].field_12 + 4) = uVar6;
                                                            local_d8[3].field_40 = 1;
                                                        }
                                                        cVar1 = shared_ptr::operator_cast_to_bool(&local_70);
                                                        if ((cVar1) ||
                                                            (cVar1 = shared_ptr::operator_cast_to_bool(&local_e8),
                                                             cVar1)) {
                                                            cVar1 = shared_ptr::operator_cast_to_bool(&local_e8);
                                                            if (!cVar1) {
                                                                AssignUnderlay(local_70, *pGVar37, local_48->field_8);
                                                            } else {
                                                                in_stack_fffffffffffffea8 =
                                                                    (unsigned int*)(((uint64_t)((
                                                                                         int)((unsigned long)
                                                                                                  in_stack_fffffffffffffea8 >>
                                                                                              32))
                                                                                     << 32) |
                                                                                    (uint32_t)((unsigned int)(uint8_t)
                                                                                                   local_31));
                                                                BuildTile(*local_48, *pGVar37, *(local_d8 + 1),
                                                                          *(local_d8 + 2), local_e8, local_70, local_a0,
                                                                          (unsigned int)(uint8_t)local_31);
                                                            }
                                                        }
                                                    } else {
                                                        psVar24 = (shared_ptr<FloorUnderlayType>*)GetUnderlay(iVar5);
                                                        local_70 = *psVar24;
                                                        cVar1 = shared_ptr::operator_cast_to_bool(&local_70);
                                                        uVar6 =
                                                            (uint32_t)((unsigned long)in_stack_fffffffffffffea8 >> 32);
                                                        if (cVar1) {
                                                            pFVar25 = (FloorUnderlayType*)local_70.operator->();
                                                            pFVar25->SetBlending((bool)local_b8->field_160);
                                                            *(uint32_t*)((long)&pGVar37->field_64 + 4) =
                                                                *(uint32_t*)((long)&local_48->field_0 + 4);
                                                            goto LAB_10062983f;
                                                        }
                                                        pLVar29 = logger::default_logger();
                                                        in_stack_fffffffffffffea8 =
                                                            (unsigned int*)(((uint64_t)uVar6 << 32) |
                                                                            (uint32_t)(*(
                                                                                uint32_t*)((long)&local_48->field_0 +
                                                                                           4)));
                                                        pLVar29->Log(false, 2,
                                                                     "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                                     "OSRS-OS1669-BOXR/libs/game/runetek5/assetbuilder/"
                                                                     "jobs/buildterrain/BuildTerrainWorker.cpp",
                                                                     1474, "%s: Could not find %s %d", "BuildTerrain",
                                                                     "underlay for ID", in_stack_fffffffffffffea8);
                                                    }
                                                LAB_100629b65:
                                                }
                                            }
                                            goto LAB_1006291b4;
                                        }
                                    }
                                }
                            }
                            this_09 = local_78;
                        }
                    } else {
                        in_stack_fffffffffffffea8 = &local_7c;
                        cVar1 = ReselectSourceUsingCompositeData(
                            pBVar31, &local_90, &local_8c, &local_84, (int*)&local_80, &local_bc, &local_108, &local_88,
                            (int*)in_stack_fffffffffffffea8, (Rotation90*)&local_31, local_b8);
                        if (cVar1)
                            goto LAB_100629445;
                    }
                LAB_1006291b4:
                    pvVar36 = local_c8;
                    uVar35 = uVar35 + 1;
                    uVar34 = local_50;
                } while (uVar35 != 66);
                uVar35 = local_58 + 1;
                pBVar31 = this;
            } while (uVar35 != 66);
            iVar4 = local_c8->size();
            if (2 < iVar4) {
                uVar35 = 1;
                do {
                    this_04 = (vector<graphics::ModularParticleEmitter,
                                      eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true>>*)(*pvVar36)[uVar35];
                    iVar4 = this_04->size();
                    if (2 < iVar4) {
                        uVar34 = 1;
                        do {
                            lVar18 = ((GridGroup*)(*this_04)[uVar34])->GetGridTile();
                            if ((lVar18 != 0) && (*(char*)(lVar18 + 40) != '\0')) {
                                pBVar31 = *(BuildTerrainWorker**)(lVar18 + 72);
                                cVar1 = pBVar31->GetHorizontalAlignment();
                                if (!cVar1) {
                                    uVar6 = CalculatePreferredRotation(
                                        pBVar31, *(int*)(lVar18 + 68), (int)uVar35, (int)uVar34,
                                        (vector<eastl::vector<graphics::GridGroup>>*)local_c8);
                                    *(uint32_t*)(lVar18 + 64) = uVar6;
                                }
                            }
                            uVar34 = uVar34 + 1;
                            lVar18 = this_04->size();
                        } while ((long)uVar34 < (lVar18 << 32) - 4294967296 >> 32);
                    }
                    pvVar36 = local_c8;
                    uVar35 = uVar35 + 1;
                    lVar18 = local_c8->size();
                } while ((long)uVar35 < (lVar18 << 32) - 4294967296 >> 32);
            }
            uVar35 = local_50;
            if (!bVar3) {
                psVar8 = (shared_ptr<BuiltTerrainLevel>*)(*local_a8)[local_50];
                psVar8->reset();
            }
            uVar35 = uVar35 + 1;
            if (uVar35 == 4) {
                cVar1 = shared_ptr::operator_cast_to_bool(this_09);
                if ((cVar1) && (lVar18 = (*this_09).operator->(), *(char*)(lVar18 + 9832) != '\0')) {
                    pvVar30 = (vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul>, 10ul>,
                                      eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true>>*)(*this_09)
                                  .operator->();
                    iVar4 = pvVar30->size();
                    if (0 < iVar4) {
                        uVar35 = 0;
                        do {
                            pvVar30 = (vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul>, 10ul>,
                                              eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true>>*)(*this_09)
                                          .operator->();
                            this_06 =
                                (vector<eastl::fixed_vector<ClientCompositeZone, 10ul>,
                                        eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true>>*)(*pvVar30)[uVar35];
                            psVar33 = (shared_ptr*)(*local_a8)[uVar35];
                            cVar1 = shared_ptr::operator_cast_to_bool(psVar33);
                            if (cVar1) {
                                uVar34 = 0;
                                local_50 = uVar35;
                                do {
                                    arg1 = uVar34 + 1;
                                    uVar38 = 0;
                                    do {
                                        this_07 = (vector<ClientCompositeZone,
                                                          eastl::fixed_vector_allocator<20ul, 10ul, 4ul, 0ul,
                                                                                        true>>*)(*this_06)[arg1];
                                        arg1_00 = uVar38 + 1;
                                        cVar1 = ((ClientCompositeZone*)(*this_07)[arg1_00])->IsValid();
                                        if (!cVar1) {
                                            SetZonePerimeterHeight((int)local_50, (int)uVar34, (int)uVar38);
                                        }
                                        uVar35 = local_50;
                                        uVar38 = arg1_00;
                                    } while (arg1_00 != 8);
                                    uVar34 = arg1;
                                } while (arg1 != 8);
                                SetMapsquarePerimeterHeight((int)local_50);
                                this_09 = local_78;
                            }
                            uVar35 = uVar35 + 1;
                            pvVar30 = (vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul>, 10ul>,
                                              eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true>>*)(*this_09)
                                          .operator->();
                            iVar4 = pvVar30->size();
                        } while ((long)uVar35 < (long)iVar4);
                    }
                }
                return;
            }
        } while (true);
    }

    // 0x100629eb0
    void BuildTerrainWorker::SplitRenderChunks() {
        int iVar2;
        shared_ptr* this_00;
        shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>>>* this_01;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>* this_02;
        vector<graphics::ModularParticleEmitter, eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true>>* this_03;
        long lVar3;
        unsigned long arg1_00;
        unsigned long arg1_01;

        unsigned long arg1 = 0;
        RemoveRoofPaintingProgress aRStack_10060(0, 0, 65, 65);
        do {
            this_00 = &field_80[arg1];
            if (shared_ptr::operator_cast_to_bool(this_00)) {
                this_01 = (shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>>>*)**this_00;
                field_128 = 2;
                this_02 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                                  eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)**this_01;
                iVar2 = this_02->size();
                if (0 < iVar2) {
                    arg1_00 = 0;
                    do {
                        this_03 =
                            (vector<graphics::ModularParticleEmitter,
                                    eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true>>*)(*this_02)[arg1_00];
                        iVar2 = this_03->size();
                        if (0 < iVar2) {
                            arg1_01 = 0;
                            do {
                                lVar3 = ((GridGroup*)(*this_03)[arg1_01])->GetGridTile();
                                if (((lVar3 != 0) && (*(int*)(lVar3 + 44) == 1)) && (*(int*)(lVar3 + 48) == -1)) {
                                    iVar2 = (int)arg1 - 1;
                                    if (!(aRStack_10060.IsSet(iVar2, (int)arg1_00, (int)arg1_01))) {
                                        iVar2 = PaintRemoveRoofArea(iVar2, (int)arg1_00, (int)arg1_01, aRStack_10060);
                                        if (0 < iVar2) {
                                            field_128 = field_128 + 1;
                                        }
                                    }
                                }
                                arg1_01 = arg1_01 + 1;
                                iVar2 = this_03->size();
                            } while ((long)arg1_01 < (long)iVar2);
                        }
                        arg1_00 = arg1_00 + 1;
                        iVar2 = this_02->size();
                    } while ((long)arg1_00 < (long)iVar2);
                }
            }
            arg1 = arg1 + 1;
        } while (arg1 != 4);
    }

    // 0x10062a540
    long BuildTerrainWorker::GetTriangleGridTile(const graphics::TerrainPatchVertex* terrainPatchVertex) {
        short sVar1;
        short sVar2;
        int iVar4;
        shared_ptr<BuiltTerrainLevel>* psVar5;
        shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>>>* this_00;
        vector<eastl::vector<graphics::GridGroup>>* this_01;
        vector<graphics::GridGroup>* this_02;
        long lVar6;
        long lVar7;
        vector<eastl::vector<int>>* arg1;

        int iVar3 = (int)(64 / (unsigned long)field_40) << 7;
        long lVar8 = 4;
        do {
            sVar1 = *(short*)(terrainPatchVertex + lVar8 - 4);
            sVar2 = *(short*)(terrainPatchVertex + lVar8);
            psVar5 = &field_80[0];
            this_00 = (shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>>>*)(*psVar5).operator->();
            this_01 = (vector<eastl::vector<graphics::GridGroup>>*)**this_00;
            this_02 = (vector<graphics::GridGroup>*)(*this_01)[(long)((sVar1 + 16383) / iVar3 + 1)];
            lVar6 = ((GridGroup*)(*this_02)[(long)((sVar2 + 16383) / iVar3 + 1)])->GetGridTileWater();
            if (lVar6 != 0) {
                psVar5 = &field_80[0];
                lVar7 = (*psVar5).operator->();
                arg1 = (vector<eastl::vector<int>>*)*(*((lVar7 + 32)));
                iVar4 = GetInterpolatedValue(*arg1, sVar1 + 16383, sVar2 + 16383);
                if (*(short*)(terrainPatchVertex + lVar8 - 2) < iVar4) {
                    return lVar6;
                }
            }
            lVar8 = lVar8 + 36;
        } while (lVar8 != 112);
        return 0;
    }

    // 0x10062a6e0
    void BuildTerrainWorker::GetTriangleWaterOverlapTypes(
        eastl::fixed_vector<BuildTerrainWorker::WaterOverlapData, 8ul>& waterOverlapDatas,
        const graphics::TerrainPatchVertex* terrainPatchVertex) {
        TerrainPatchVertex* pTVar2 = terrainPatchVertex + 4;
        long lVar1 = 0;
        do {
            GetVertexWaterOverlapTypes((int)*(short*)(pTVar2 - 4) + 16383, (int)*(short*)pTVar2 + 16383, (int)lVar1,
                                       waterOverlapDatas);
            lVar1 = lVar1 + 1;
            pTVar2 = pTVar2 + 36;
        } while (lVar1 != 3);
    }

    // 0x10062a740
    void BuildTerrainWorker::AllocWaterGeometry(
        const eastl::fixed_vector<BuildTerrainWorker::WaterOverlapData, 8ul>& waterOverlapDatas,
        eastl::fixed_map<int, shared_ptr<BuildTerrainResultWaterData>, 8ul>& fixed_map, unsigned long arg3) {
        type* this_00;
        type* ptVar1;
        long lVar2;
        pair<int const, shared_ptr<BuildTerrainResultWaterData> _> local_70;
        pair<int const, shared_ptr<BuildTerrainResultWaterData>> local_60;
        void* local_48;

        fixed_map<int, shared_ptr<BuildTerrainResultWaterData>, _8ul>* local_40 = fixed_map;
        auto arg1 = waterOverlapDatas.HeapBeginPtr();
        auto local_38 = waterOverlapDatas.end();
        if (arg1 != local_38) {
            do {
                local_48 = nullptr;
                local_60.pair<decltype(nullptr), void>(*arg1, local_48);
                eastl::rbtree<int, eastl::pair<int const, shared_ptr<BuildTerrainResultWaterData>>, eastl::less<int>,
                              eastl::fixed_node_allocator<56ul, 8ul, 8ul, 0ul, true>,
                              eastl::use_first<eastl::pair<int const, shared_ptr<BuildTerrainResultWaterData>>>, true,
                              true>::insert(local_70);
                this_00 =
                    eastl::get<0ul,
                               eastl::rbtree_iterator<eastl::pair<int const, shared_ptr<BuildTerrainResultWaterData>>,
                                                      eastl::pair<int const, shared_ptr<BuildTerrainResultWaterData>>*,
                                                      eastl::pair<int const, shared_ptr<BuildTerrainResultWaterData>>&>,
                               bool>(local_70);
                ptVar1 =
                    eastl::get<1ul,
                               eastl::rbtree_iterator<eastl::pair<int const, shared_ptr<BuildTerrainResultWaterData>>,
                                                      eastl::pair<int const, shared_ptr<BuildTerrainResultWaterData>>*,
                                                      eastl::pair<int const, shared_ptr<BuildTerrainResultWaterData>>&>,
                               bool>(local_70);
                if (*ptVar1 != (type)0) {
                    MakeSharedPool<BuildTerrainResultWaterData, 32>::MakeShared<>();
                    lVar2 = local_60.operator->();
                    ((lVar2 + 32))->reserve(arg3);
                    ((vector<unsigned short>*)local_60.operator->())->reserve(arg3);
                    lVar2 = **this_00;
                    (*((lVar2 + 8))) = local_60;
                }
                arg1 = arg1 + 2;
            } while (arg1 != local_38);
        }
    }

    // 0x10062a880
    void BuildTerrainWorker::GatherTriangleFlow(std::array<math::Vector2T<float>, 3ul>& vector2s1,
                                                std::array<math::Vector2T<float>, 3ul>& vector2s2,
                                                const graphics::TerrainPatchVertex* terrainPatchVertex) {
        short sVar1;
        short sVar2;
        Vector2T<float>* pVVar3;
        uint64_t local_38;

        TerrainPatchVertex* pTVar4 = terrainPatchVertex + 4;
        unsigned long arg1 = 0;
        do {
            sVar1 = *(short*)(pTVar4 - 4);
            sVar2 = *(short*)pTVar4;
            local_38 = GetWaterFlowDirection((int)sVar1 + 16383U, (int)sVar2 + 16383U);
            pVVar3 = &vector2s1[arg1];
            *pVVar3 = local_38;
            local_38 = GetWaterFlowNoise((int)sVar1 + 16383U, (int)sVar2 + 16383U, *pVVar3);
            pVVar3 = &vector2s2[arg1];
            *pVVar3 = local_38;
            arg1 = arg1 + 1;
            pTVar4 = pTVar4 + 36;
        } while (arg1 != 3);
    }

    // 0x10062a950
    uint8_t[16] BuildTerrainWorker::GetInterpolatedValue(eastl::vector<eastl::vector<int>>& arg1, int arg2, int arg3) {
        uint8_t auVar10[16];

        int iVar7 = (int)(64 / (unsigned long)field_40) * 128;
        int iVar3 = arg2 / iVar7;
        if (iVar3 < 0) {
            iVar3 = -1;
        }
        int iVar4 = arg1.size();
        int iVar8 = iVar3 + 1;
        int iVar2 = iVar3 + 2;
        if (iVar4 <= iVar3 + 2) {
            iVar8 = iVar4 - 1;
            iVar2 = iVar4 - 1;
        }
        vector<unsigned int>* this_00 = &arg1[(long)iVar8];
        vector<int>* this_01 = &arg1[(long)iVar2];
        iVar3 = -1;
        if (-1 < arg3 / iVar7) {
            iVar3 = arg3 / iVar7;
        }
        iVar4 = this_00->size();
        iVar8 = iVar3 + 1;
        iVar2 = iVar3 + 2;
        if (iVar4 <= iVar3 + 2) {
            iVar8 = iVar4 - 1;
            iVar2 = iVar4 - 1;
        }
        unsigned int uVar9 = arg2 & iVar7 - 1U;
        unsigned int uVar5 = iVar7 - 1U & arg3;
        int* piVar6 = (int*)(*this_00)[(long)iVar8];
        iVar3 = *piVar6;
        piVar6 = (int*)(*this_01)[(long)iVar8];
        iVar8 = *piVar6;
        piVar6 = (int*)(*this_00)[(long)iVar2];
        iVar4 = *piVar6;
        piVar6 = (int*)(*this_01)[(long)iVar2];
        long lVar1 = (long)(int)(((int)(uVar9 * *piVar6 + (iVar7 - uVar9) * iVar4) / iVar7) * uVar5 +
                                 (iVar7 - uVar5) * ((int)(iVar8 * uVar9 + iVar3 * (iVar7 - uVar9)) / iVar7));
        auVar10._0_8_ = lVar1 / (long)iVar7 & 4294967295;
        auVar10._8_8_ = lVar1 % (long)iVar7 & 4294967295;
        return auVar10;
    }

    // 0x10062ab00
    void BuildTerrainWorker::SetWaterVertexFlowData(graphics::WaterPatchVertex& waterPatchVertex, int arg2,
                                                    std::array<math::Vector2T<float>, 3ul>& vector2s1,
                                                    std::array<math::Vector2T<float>, 3ul>& vector2s2) {
        float fVar1;
        float* pfVar2;
        uint16_t* puVar3;
        uint8_t* puVar4;

        unsigned long arg1 = 0;
        do {
            pfVar2 = &vector2s1[arg1];
            fVar1 = *pfVar2;
            puVar3 = &waterPatchVertex.field_12[arg1];
            *puVar3 = (short)(int)(fVar1 * 2047.0);
            puVar3[1] = (short)(int)(pfVar2[1] * 2047.0);
            pfVar2 = &vector2s2[arg1];
            fVar1 = *pfVar2;
            puVar4 = &waterPatchVertex.field_24[arg1];
            *puVar4 = (char)(int)(fVar1 * 127.0);
            puVar4[1] = (char)(int)(pfVar2[1] * 127.0);
            arg1 = arg1 + 1;
        } while (arg1 != 3);
        waterPatchVertex.field_30 = (char)arg2;
    }

    // 0x10062af80
    uint64_t BuildTerrainWorker::GetWaterFlowDirection(unsigned int arg1, unsigned int arg2) {
        long lVar2;
        Layout* this_00;
        WaterPatchConfig* this_01;
        WaterPatchConfig* pWVar3;
        int iVar4;
        uint64_t uVar5;
        float local_38;
        float fStack_34;

        bool cVar1 = IsTileEdge(arg1, arg2);
        if (!cVar1) {
            new (&local_38) math::Point(0.0, 0.0);
            lVar2 = field_8->end();
            cVar1 = ((lVar2 + 32))->operator_cast_to_bool();
            if (cVar1) {
                this_00 = (Layout*)*(*((lVar2 + 32)));
                this_01 = (WaterPatchConfig*)this_00->HeapBeginPtr();
                pWVar3 = (WaterPatchConfig*)this_00->end();
                if (this_01 == pWVar3) {
                    iVar4 = 0;
                } else {
                    iVar4 = 0;
                    do {
                        cVar1 = this_01->IsPointInside(arg1, arg2, 0.0);
                        if ((cVar1) && ((*(float*)&this_01->field_40 != 0.0 ||
                                         (*(float*)((long)&this_01->field_40 + 4) != 0.0)))) {
                            local_38 = *(float*)&this_01->field_40 + local_38;
                            fStack_34 = fStack_34 + *(float*)((long)&this_01->field_40 + 4);
                            iVar4 = iVar4 + 1;
                        }
                        this_01 = this_01 + 1;
                    } while (this_01 != pWVar3);
                }
                if (1 < iVar4) {
                    local_38 = local_38 / (*((float)iVar4));
                }
            }
            uVar5 = (((uint64_t)fStack_34 << 32) | (uint32_t)local_38);
        } else {
            uVar5 = *(uint64_t*)PTR_ZERO_100ee66a8;
        }
        return uVar5;
    }

    // 0x10062b0c0
    uint64_t BuildTerrainWorker::GetWaterFlowNoise(unsigned int arg1, unsigned int arg2,
                                                   const math::Vector2T<float>& vector2) {
        float fVar2;
        double dVar3;
        uint64_t local_50;
        uint64_t local_48;
        float local_40[3];
        float local_2c;
        float local_28;
        float local_24;

        if (IsTileEdge(arg1, arg2) == '\0') {
            dVar3 = (double)math::Noise2d(arg2, arg1);
            local_2c = (float)dVar3 * 0.75 + 0.25;
            dVar3 = (double)math::Noise2d(arg1, arg2);
            local_24 = (float)dVar3 * 6.2831855f;
            local_28 = (float)::cos(local_24);
            fVar2 = (float)::sin(local_24);
            new (local_40) math::Point(local_28, fVar2);
            local_50 = *local_40 * *local_2c;
            local_40[0] = (float)vector2.Length();
            local_40[0] = local_40[0] * 0.75;
            fVar2 = math::Clamp<float>(*local_40, 0.0, 1.0);
            local_48 = local_50 * (*(1.0 - fVar2));
        } else {
            local_48 = math::Vector2T(0.0);
        }
        return local_48;
    }

    // 0x10062b1f0
    int BuildTerrainWorker::GetSourceLookup(unsigned int arg1) const {
        int iVar1 = 0;
        if (arg1 != 0) {
            if (arg1 == 1) {
                return 1;
            }
            if (field_40 == arg1) {
                return 64;
            }
            if (field_40 + 1 == arg1) {
                return 65;
            }
            iVar1 = (arg1 - 1) * field_44 + 1;
        }
        return iVar1;
    }

    // 0x10062b440
    int BuildTerrainWorker::DecodeHeightCode(int arg1, unsigned int arg2, unsigned int arg3, unsigned char arg4,
                                             bool arg5) const {
        int iVar1;
        uint64_t in_RAX;
        shared_ptr* psVar4;
        shared_ptr<BuiltTerrainLevel>* this_00;
        long lVar5;
        vector<eastl::vector<int>>* this_01;
        vector<int>* this_02;
        int* piVar6;
        int iVar7;
        uint32_t in_register_00000081;
        int local_38;
        int local_34;

        if ((((uint32_t)in_register_00000081 << 8) | (uint8_t)arg4) == 0) {
            iVar7 = 0;
            if (!arg5) {
                local_34 = (int)((unsigned long)in_RAX >> 32);
                if (arg1 < 1) {
                    iVar7 = 960;
                } else {
                    iVar7 = 960;
                    do {
                        local_38 = arg1 - 1;
                        if (ArrayValidPosition<
                                eastl::fixed_vector<shared_ptr<eastl::vector<eastl::vector<unsigned char>>>, 4ul>, int>(
                                (fixed_vector<shared_ptr<eastl::vector<eastl::vector<int>> _>, _4ul>*)&field_80,
                                &local_38)) {
                            psVar4 = &field_80[(long)local_38];
                            if (shared_ptr::operator_cast_to_bool(psVar4)) {
                                iVar1 = local_38;
                                goto LAB_10062b54e;
                            }
                        }
                        iVar7 = iVar7 + 960;
                        arg1 = local_38;
                    } while (0 < local_38);
                }
            }
        } else if (arg5) {
            iVar7 = (((uint32_t)in_register_00000081 << 8) | (uint8_t)arg4) << 5;
        } else {
            if (arg4 == '\x01') {
                arg4 = 0;
            }
            local_38 = (int)in_RAX;
            iVar7 = (unsigned int)arg4 << 5;
            if (0 < arg1) {
                do {
                    local_34 = arg1 - 1;
                    if (ArrayValidPosition<
                            eastl::fixed_vector<shared_ptr<eastl::vector<eastl::vector<unsigned char>>>, 4ul>, int>(
                            (fixed_vector<shared_ptr<eastl::vector<eastl::vector<int>> _>, _4ul>*)&field_80,
                            &local_34)) {
                        psVar4 = &field_80[(long)local_34];
                        if (shared_ptr::operator_cast_to_bool(psVar4)) {
                            iVar1 = local_34;
                        LAB_10062b54e:
                            this_00 = &field_80[(long)iVar1];
                            lVar5 = (*this_00).operator->();
                            this_01 = (vector<eastl::vector<int>>*)*(*(
                                (shared_ptr<eastl::vector<eastl::vector<int>>>*)(lVar5 +
                                                                                 (unsigned long)((long)iVar1 < 1) * 16 +
                                                                                 16)));
                            this_02 = (vector<int>*)(*this_01)[(unsigned long)arg2];
                            piVar6 = (int*)(*this_02)[(unsigned long)arg3];
                            return iVar7 + *piVar6;
                        }
                    }
                    iVar7 = iVar7 + 960;
                    arg1 = local_34;
                } while (0 < local_34);
            }
        }
        return iVar7;
    }

    // 0x10062b5f0
    shared_ptr* BuildTerrainWorker::GetUnderlay(int arg1) const {
        bool cVar1;
        uint64_t in_RAX;
        char cVar5;

        long lVar3 = field_8->end();
        shared_ptr* this_03 = (shared_ptr*)(lVar3 + 128);
        auto this_00 = this_03->HeapBeginPtr();
        auto psVar4 = this_03->end();
        uint32_t uVar6 = (uint32_t)((unsigned long)in_RAX >> 32);
        for (; cVar5 = '\x02', this_00 != psVar4; this_00 = this_00 + 1) {
            cVar1 = shared_ptr::operator_cast_to_bool(this_00);
            cVar5 = '\x03';
            if (cVar1) {
                cVar5 = ((GameToken*)(*this_00).operator->())->GetStatus() == arg1;
                if (cVar5) {
                    this_03 = this_00;
                }
            }
            uVar6 = (uint32_t)((unsigned long)in_RAX >> 32);
            if ((cVar5 != '\x03') && (cVar5))
                break;
        }
        if (cVar5 == '\x02') {
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/jobs/buildterrain/BuildTerrainWorker.cpp",
                      543, "BuildTerrainWorker: Failed to find underlay in provided config: %i",
                      (((uint64_t)uVar6 << 32) | (uint32_t)arg1));
            this_03 = (shared_ptr*)&NullFloorUnderlayType;
        }
        return this_03;
    }

    // 0x10062b6e0
    shared_ptr* BuildTerrainWorker::GetOverlay(int arg1) const {
        bool cVar1;
        uint64_t in_RAX;
        char cVar5;

        long lVar3 = field_8->end();
        shared_ptr* this_03 = (shared_ptr*)(lVar3 + 96);
        auto this_00 = this_03->HeapBeginPtr();
        auto psVar4 = this_03->end();
        uint32_t uVar6 = (uint32_t)((unsigned long)in_RAX >> 32);
        for (; cVar5 = '\x02', this_00 != psVar4; this_00 = this_00 + 1) {
            cVar1 = shared_ptr::operator_cast_to_bool(this_00);
            cVar5 = '\x03';
            if (cVar1) {
                cVar5 = ((GameToken*)(*this_00).operator->())->GetStatus() == arg1;
                if (cVar5) {
                    this_03 = this_00;
                }
            }
            uVar6 = (uint32_t)((unsigned long)in_RAX >> 32);
            if ((cVar5 != '\x03') && (cVar5))
                break;
        }
        if (cVar5 == '\x02') {
            (logger::default_logger())
                ->Log(false, 8,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/jobs/buildterrain/BuildTerrainWorker.cpp",
                      561, "BuildTerrainWorker: Failed to find overlay in provided config: %i",
                      (((uint64_t)uVar6 << 32) | (uint32_t)arg1));
            this_03 = (shared_ptr*)&NullFloorOverlayType;
        }
        return this_03;
    }

    // 0x10062b7d0
    uint64_t BuildTerrainWorker::GetMaterial(int arg1) {
        long lVar2;
        long lVar3;

        if (field_8->operator_cast_to_bool() != '\0') {
            lVar2 = field_8->end();
            lVar3 = eastl::vector_map<int, graphics::Material const*>::find(*((lVar2 + 168)));
            lVar2 = ((lVar2 + 168))->end();
            if (lVar3 != lVar2) {
                return *(uint64_t*)(lVar3 + 8);
            }
        }
        return 0;
    }

    // 0x10062b840
    unsigned long BuildTerrainWorker::AssignUnderlay(const shared_ptr<FloorUnderlayType>& floorUnderlayType,
                                                     graphics::GridTile& gridTile, unsigned short arg3) {
        uint8_t bVar2;
        uint8_t bVar3;
        uint8_t uVar4;
        GeometryBatch* this_01;

        int arg1 = ((MSIType*)floorUnderlayType.operator->())->GetTint();
        if (arg1 == -1) {
            this_01 = nullptr;
        } else {
            this_01 = (GeometryBatch*)GetMaterial(arg1);
        }
        unsigned int uVar6 = (arg3 & 127) * 38258 >> 16;
        uVar6 = math::RunetekColour::HSLToRGB(
            arg3 & 65408 | (unsigned short)((((arg3 & 127) * 74 - uVar6 & 65535) >> 1) + uVar6 >> 6));
        unsigned int uVar7 = uVar6 << 8 | 255;
        *(unsigned int*)((long)&gridTile.field_12 + 4) = uVar7;
        if (this_01 != nullptr) {
            if (this_01->HasFaceTransparency()) {
                if (!(this_01->IsRT7())) {
                    bVar2 = this_01->GetLegacyWhiteness();
                } else {
                    bVar2 = this_01->GetVertexColourStrengthAsWhiteness();
                }
                if (!(this_01->IsRT7())) {
                    bVar3 = this_01->GetLegacyBrightness();
                } else {
                    bVar3 = 0;
                }
                uVar7 = math::ApplyOffsetToFaceColour(uVar6 & 16777215, 74, (unsigned int)bVar2, (unsigned int)bVar3)
                            << 8 |
                        255;
                uVar4 = this_01->HasEmissiveMap();
                *(uint8_t*)((long)&gridTile.field_32 + 4) = uVar4;
                *(uint8_t*)((long)&gridTile.field_32 + 6) = bVar2;
                *(uint8_t*)((long)&gridTile.field_32 + 7) = bVar3;
            }
        }
        *(unsigned int*)&gridTile.field_12 = uVar7;
        gridTile.field_0 = arg1;
        gridTile.field_8 = ((FloorOverlayType*)floorUnderlayType.operator->())->GetTextureScale();
        *(uint32_t*)&gridTile.field_32 = 0;
        uVar4 = ((FloorUnderlayType*)floorUnderlayType.operator->())->GetBlendingEnabled();
        gridTile.field_28 = uVar4;
        return arg1 != -1 & 4294967295;
    }

    // 0x10062b9e0
    unsigned long BuildTerrainWorker::AssignOverlay(const shared_ptr<FloorOverlayType>& floorOverlayType,
                                                    graphics::GridTile& gridTile) {
        uint8_t bVar2;
        uint8_t bVar3;
        uint8_t uVar4;
        int iVar6;
        GeometryBatch* this_00;
        uint64_t in_RCX;

        auto pMVar7 = floorOverlayType.operator->();
        int arg1 = pMVar7->GetTint();
        if (arg1 == -1) {
            this_00 = nullptr;
        } else {
            this_00 = (GeometryBatch*)GetMaterial(arg1);
        }
        pMVar7 = (MSIType*)floorOverlayType.operator->();
        unsigned int uVar5 = pMVar7->GetSpriteID();
        *(unsigned int*)((long)&gridTile.field_12 + 4) = uVar5;
        if (this_00 != nullptr) {
            if (this_00->HasFaceTransparency()) {
                if (!(this_00->IsRT7())) {
                    bVar2 = this_00->GetLegacyWhiteness();
                } else {
                    bVar2 = this_00->GetVertexColourStrengthAsWhiteness();
                }
                if (!(this_00->IsRT7())) {
                    bVar3 = this_00->GetLegacyBrightness();
                } else {
                    bVar3 = 0;
                }
                in_RCX = 0;
                iVar6 = math::ApplyOffsetToFaceColour(uVar5 >> 8, 74, (unsigned int)bVar2, (unsigned int)bVar3);
                uVar5 = uVar5 & 255 | iVar6 << 8;
                uVar4 = this_00->HasEmissiveMap();
                *(uint8_t*)((long)&gridTile.field_32 + 4) = uVar4;
                *(uint8_t*)((long)&gridTile.field_32 + 6) = bVar2;
                *(uint8_t*)((long)&gridTile.field_32 + 7) = bVar3;
            }
        }
        *(unsigned int*)&gridTile.field_12 = uVar5;
        gridTile.field_0 = arg1;
        FloorOverlayType* pFVar8 = (FloorOverlayType*)floorOverlayType.operator->();
        uint32_t uVar9 = pFVar8->GetTextureScale();
        gridTile.field_8 = uVar9;
        uVar9 = ((TextRun*)floorOverlayType.operator->())->GetWrapMode();
        *(uint32_t*)&gridTile.field_32 = uVar9;
        pFVar8 = (FloorOverlayType*)floorOverlayType.operator->();
        if (!(pFVar8->GetBlendingEnabled())) {
            uVar4 = 0;
        } else {
            uVar4 = ((StaticPointLight*)floorOverlayType.operator->())->GetUseTerrainHeight();
        }
        gridTile.field_28 = uVar4;
        return arg1 != -1 & 4294967295;
    }

    // 0x10062bb50
    uint8_t[16] BuildTerrainWorker::IsTileEdge(unsigned int arg1, unsigned int arg2) const {
        unsigned long uVar1;
        uint8_t auVar5[16];

        unsigned int uVar4 = (int)(64 / (unsigned long)field_40) * 128;
        unsigned long uVar3 = (unsigned long)arg1 / (unsigned long)uVar4;
        uint64_t uVar2 = (((uint64_t)((int64_t)(uVar3 >> 8)) << 8) | (uint8_t)1);
        if (((uVar4 <= arg1) && ((int)uVar3 != 64)) && (uVar4 <= arg2)) {
            uVar1 = (unsigned long)arg2 / (unsigned long)uVar4;
            uVar3 = (unsigned long)arg2 % (unsigned long)uVar4;
            uVar2 = (((uint64_t)((int64_t)(uVar1 >> 8)) << 8) | (uint8_t)((int)uVar1 == 64));
        }
        auVar5._8_8_ = uVar3;
        auVar5._0_8_ = uVar2;
        return auVar5;
    }

    // 0x10062bbb0
    uint64_t BuildTerrainWorker::GetWaterColour(unsigned int arg1, unsigned int arg2) const {
        long lVar2;
        Layout* this_00;
        WaterPatchConfig* this_01;
        WaterPatchConfig* pWVar3;
        int iVar4;
        uint64_t local_50;
        uint32_t local_48;
        uint64_t local_40[2];

        if (!(IsTileEdge(arg1, arg2))) {
            local_48 = *(uint32_t*)(PTR_ONE_100ee66d8 + 8);
            local_50 = *(uint64_t*)PTR_ONE_100ee66d8;
            lVar2 = field_8->end();
            if (((lVar2 + 32))->operator_cast_to_bool()) {
                this_00 = (Layout*)*(*((lVar2 + 32)));
                this_01 = (WaterPatchConfig*)this_00->HeapBeginPtr();
                pWVar3 = (WaterPatchConfig*)this_00->end();
                if (this_01 == pWVar3) {
                    iVar4 = 0;
                } else {
                    iVar4 = 0;
                    do {
                        if (this_01->IsPointInside(arg1, arg2, 0.0)) {
                            if (iVar4 == 0) {
                                local_40[0] =
                                    math::Colour3FromR8G8B8A8(*(unsigned int*)((long)&this_01->field_460 + 4));
                                local_50.SetXYZ(*local_40);
                            } else {
                                local_40[0] =
                                    math::Colour3FromR8G8B8A8(*(unsigned int*)((long)&this_01->field_460 + 4));
                                local_50 += *local_40;
                            }
                            iVar4 = iVar4 + 1;
                        }
                        this_01 = this_01 + 1;
                    } while (this_01 != pWVar3);
                }
                if (1 < iVar4) {
                    local_40[0] = local_50 / (*((float)iVar4));
                    local_50.SetXYZ(*local_40);
                }
            }
        } else {
            local_50 = *(uint64_t*)PTR_ONE_100ee66d8;
        }
        return local_50;
    }

    // 0x10062bd10
    void BuildTerrainWorker::GetVertexWaterOverlapTypes(
        unsigned int arg1, unsigned int arg2, int arg3,
        eastl::fixed_vector<BuildTerrainWorker::WaterOverlapData, 8ul>& waterOverlapDatas) const {
        fixed_vector<BuildTerrainWorker::WaterOverlapData, _8ul>* pfVar1;
        Layout* this_01;
        WaterPatchConfig* this_02;
        WaterPatchConfig* pWVar4;
        int* piVar5;
        int* piVar6;
        bool bVar7;
        bool bVar8;
        int* piVar9;
        uint8_t bVar10;
        unsigned int uVar11;
        WaterOverlapData local_58;
        WaterPatchConfig* local_50;
        unsigned int local_38;

        long lVar3 = field_8->end();
        bool cVar2 = ((lVar3 + 48))->operator_cast_to_bool();
        int local_34 = -1;
        if (cVar2) {
            local_34 = ((GameToken*)(*((lVar3 + 48))).operator->())->GetStatus();
        }
        cVar2 = ((lVar3 + 32))->operator_cast_to_bool();
        if (cVar2) {
            uVar11 = 1 << ((uint8_t)arg3 & 31);
            this_01 = (Layout*)*(*((lVar3 + 32)));
            this_02 = (WaterPatchConfig*)this_01->HeapBeginPtr();
            pWVar4 = (WaterPatchConfig*)this_01->end();
            local_38 = uVar11 & 255;
            bVar8 = false;
            bVar10 = (uint8_t)uVar11;
            if (this_02 != pWVar4) {
                local_50 = pWVar4;
                do {
                    cVar2 = this_02->IsPointInside(arg1, arg2, 0.0);
                    pfVar1 = waterOverlapDatas;
                    if (cVar2) {
                        piVar5 = (int*)waterOverlapDatas.HeapBeginPtr();
                        piVar6 = (int*)pfVar1->end();
                        pWVar4 = local_50;
                        if (piVar5 == piVar6) {
                            bVar7 = false;
                        } else {
                            bVar7 = false;
                            do {
                                piVar9 = piVar5 + 2;
                                if (*piVar5 == this_02->field_0) {
                                    *(uint8_t*)(piVar5 + 1) = *(uint8_t*)(piVar5 + 1) | bVar10;
                                    bVar7 = true;
                                    break;
                                }
                                piVar5 = piVar9;
                            } while (piVar9 != piVar6);
                        }
                        bVar8 = true;
                        if (!bVar7) {
                            local_58 = WaterOverlapData(this_02->field_0, (unsigned char)local_38);
                            bVar8 = true;
                            waterOverlapDatas.push_back(local_58);
                        }
                    }
                    this_02 = this_02 + 1;
                } while (this_02 != pWVar4);
            }
            pfVar1 = waterOverlapDatas;
            if (!bVar8) {
                piVar5 = (int*)waterOverlapDatas.HeapBeginPtr();
                piVar6 = (int*)pfVar1->end();
                if (piVar5 != piVar6) {
                    bVar8 = false;
                    do {
                        piVar9 = piVar5 + 2;
                        if (*piVar5 == local_34) {
                            *(uint8_t*)(piVar5 + 1) = *(uint8_t*)(piVar5 + 1) | bVar10;
                            bVar8 = true;
                            break;
                        }
                        piVar5 = piVar9;
                    } while (piVar9 != piVar6);
                    if (bVar8) {
                        return;
                    }
                }
                local_58 = WaterOverlapData(local_34, (unsigned char)local_38);
                waterOverlapDatas.push_back(local_58);
            }
        }
    }

    // 0x10062bf50
    void BuildTerrainWorker::SetZonePerimeterHeight(int arg1, int arg2, int arg3) {
        int iVar1;
        vector<int>* pvVar5;
        int* piVar6;
        uint32_t* puVar7;
        shared_ptr* psVar8;
        vector<eastl::vector<int>>* pvVar9;
        uint32_t uVar10;
        unsigned long uVar11;

        uint8_t* this_00 = &field_80;
        shared_ptr<BuiltTerrainLevel>* psVar3 = (shared_ptr<BuiltTerrainLevel>*)(*this_00)[(long)arg1];
        long lVar4 = (*psVar3).operator->();
        auto this_01 = *(*((lVar4 + 16)));
        if (arg1 == 0) {
            psVar3 = (shared_ptr<BuiltTerrainLevel>*)(*this_00)[0];
            lVar4 = (*psVar3).operator->();
            pvVar9 = (vector<eastl::vector<int>>*)((lVar4 + 32))->end();
        } else {
            pvVar9 = nullptr;
        }
        unsigned int arg2_00 = arg2 * 8;
        unsigned long arg1_00 = (unsigned long)arg2_00;
        unsigned int arg4 = arg2 * 8 + 1;
        unsigned int arg3_00 = arg3 * 8;
        unsigned long arg1_01 = (unsigned long)arg3_00;
        if (0 < arg2) {
            if ((arg3_00 | 2) < arg3_00 + 9) {
                uVar11 = (unsigned long)(arg3_00 | 2);
                do {
                    pvVar5 = (vector<int>*)(*this_01)[arg1_00];
                    piVar6 = (int*)(*pvVar5)[uVar11];
                    iVar1 = *piVar6;
                    pvVar5 = (vector<int>*)(*this_01)[(unsigned long)arg4];
                    piVar6 = (int*)(*pvVar5)[uVar11];
                    *piVar6 = iVar1;
                    SetMapsquarePerimeterHeightGridGroup(arg1, arg2_00, (int)uVar11, arg4, (int)uVar11, iVar1, -999);
                    if (pvVar9 != nullptr) {
                        pvVar5 = (vector<int>*)(*pvVar9)[arg1_00];
                        puVar7 = (uint32_t*)(*pvVar5)[uVar11];
                        uVar10 = *puVar7;
                        pvVar5 = (vector<int>*)(*pvVar9)[(unsigned long)arg4];
                        puVar7 = (uint32_t*)(*pvVar5)[uVar11];
                        *puVar7 = uVar10;
                    }
                    lVar4 = (2 - (unsigned long)(arg3_00 + 9)) + uVar11;
                    uVar11 = uVar11 + 1;
                } while (lVar4 != 1);
            }
        }
        unsigned int arg5 = arg3 * 8 + 1;
        if (0 < arg3) {
            if ((arg2_00 | 2) < arg2_00 + 9) {
                uVar11 = (unsigned long)(arg2_00 | 2);
                do {
                    pvVar5 = (vector<int>*)(*this_01)[uVar11];
                    piVar6 = (int*)(*pvVar5)[arg1_01];
                    iVar1 = *piVar6;
                    pvVar5 = (vector<int>*)(*this_01)[uVar11];
                    piVar6 = (int*)(*pvVar5)[(unsigned long)arg5];
                    *piVar6 = iVar1;
                    SetMapsquarePerimeterHeightGridGroup(arg1, (int)uVar11, arg3_00, (int)uVar11, arg5, iVar1, -999);
                    if (pvVar9 != nullptr) {
                        pvVar5 = (vector<int>*)(*pvVar9)[uVar11];
                        puVar7 = (uint32_t*)(*pvVar5)[arg1_01];
                        uVar10 = *puVar7;
                        pvVar5 = (vector<int>*)(*pvVar9)[uVar11];
                        puVar7 = (uint32_t*)(*pvVar5)[(unsigned long)arg5];
                        *puVar7 = uVar10;
                    }
                    lVar4 = (2 - (unsigned long)(arg2_00 + 9)) + uVar11;
                    uVar11 = uVar11 + 1;
                } while (lVar4 != 1);
            }
        }
        if (arg2 < 0) {
            return;
        }
        if (arg3 < 0) {
            return;
        }
        if (arg1 != 0) {
            if (0 < arg2) {
                psVar8 = (shared_ptr*)(*this_00)[(long)(arg1 - 1)];
                if (shared_ptr::operator_cast_to_bool(psVar8)) {
                    pvVar5 = (vector<int>*)(*this_01)[arg1_00];
                    piVar6 = (int*)(*pvVar5)[(unsigned long)arg5];
                    iVar1 = *piVar6;
                    psVar3 = (shared_ptr<BuiltTerrainLevel>*)(*this_00)[(long)(arg1 - 1)];
                    lVar4 = (*psVar3).operator->();
                    pvVar9 = (vector<eastl::vector<int>>*)*(*((lVar4 + 16)));
                    pvVar5 = (vector<int>*)(*pvVar9)[arg1_00];
                    piVar6 = (int*)(*pvVar5)[(unsigned long)arg5];
                    if (iVar1 == *piVar6)
                        goto LAB_10062c293;
                }
                pvVar5 = (vector<int>*)(*this_01)[arg1_00];
                piVar6 = (int*)(*pvVar5)[(unsigned long)arg5];
                iVar1 = *piVar6;
                pvVar5 = (vector<int>*)(*this_01)[(unsigned long)arg4];
                piVar6 = (int*)(*pvVar5)[(unsigned long)arg5];
                *piVar6 = iVar1;
                arg3_00 = arg5;
                goto LAB_10062c626;
            }
        LAB_10062c293:
            if (arg3 < 1) {
            LAB_10062c321:
                if (arg2 < 1) {
                    return;
                }
                if (arg3 < 1) {
                    return;
                }
                psVar8 = (shared_ptr*)(*this_00)[(long)(arg1 - 1)];
                if (shared_ptr::operator_cast_to_bool(psVar8)) {
                    pvVar5 = (vector<int>*)(*this_01)[arg1_00];
                    piVar6 = (int*)(*pvVar5)[arg1_01];
                    iVar1 = *piVar6;
                    psVar3 = (shared_ptr<BuiltTerrainLevel>*)(*this_00)[(long)(arg1 - 1)];
                    lVar4 = (*psVar3).operator->();
                    pvVar9 = (vector<eastl::vector<int>>*)*(*((lVar4 + 16)));
                    pvVar5 = (vector<int>*)(*pvVar9)[arg1_00];
                    piVar6 = (int*)(*pvVar5)[arg1_01];
                    if (iVar1 == *piVar6) {
                        return;
                    }
                }
                pvVar5 = (vector<int>*)(*this_01)[arg1_00];
                piVar6 = (int*)(*pvVar5)[arg1_01];
                iVar1 = *piVar6;
                pvVar5 = (vector<int>*)(*this_01)[(unsigned long)arg4];
                piVar6 = (int*)(*pvVar5)[(unsigned long)arg5];
                *piVar6 = iVar1;
            } else {
                psVar8 = (shared_ptr*)(*this_00)[(long)(arg1 - 1)];
                if (shared_ptr::operator_cast_to_bool(psVar8)) {
                    pvVar5 = (vector<int>*)(*this_01)[(unsigned long)arg4];
                    piVar6 = (int*)(*pvVar5)[arg1_01];
                    iVar1 = *piVar6;
                    psVar3 = (shared_ptr<BuiltTerrainLevel>*)(*this_00)[(long)(arg1 - 1)];
                    lVar4 = (*psVar3).operator->();
                    pvVar9 = (vector<eastl::vector<int>>*)*(*((lVar4 + 16)));
                    pvVar5 = (vector<int>*)(*pvVar9)[(unsigned long)arg4];
                    piVar6 = (int*)(*pvVar5)[arg1_01];
                    if (iVar1 == *piVar6)
                        goto LAB_10062c321;
                }
                pvVar5 = (vector<int>*)(*this_01)[(unsigned long)arg4];
                piVar6 = (int*)(*pvVar5)[arg1_01];
                iVar1 = *piVar6;
                pvVar5 = (vector<int>*)(*this_01)[(unsigned long)arg4];
                piVar6 = (int*)(*pvVar5)[(unsigned long)arg5];
                *piVar6 = iVar1;
                arg2_00 = arg4;
            }
        LAB_10062c626:
            SetMapsquarePerimeterHeightGridGroup(arg1, arg2_00, arg3_00, arg4, arg5, iVar1, -999);
            return;
        }
        if (arg2 < 1) {
        LAB_10062c506:
            if (0 < arg3) {
                uVar11 = (unsigned long)arg4;
                pvVar5 = (vector<int>*)(*this_01)[uVar11];
                piVar6 = (int*)(*pvVar5)[arg1_01];
                if (*piVar6 != 0) {
                    pvVar5 = (vector<int>*)(*this_01)[uVar11];
                    piVar6 = (int*)(*pvVar5)[arg1_01];
                    iVar1 = *piVar6;
                    pvVar5 = (vector<int>*)(*this_01)[uVar11];
                    piVar6 = (int*)(*pvVar5)[(unsigned long)arg5];
                    *piVar6 = iVar1;
                    SetMapsquarePerimeterHeightGridGroup(0, arg4, arg3_00, arg4, arg5, iVar1, -999);
                    pvVar5 = (vector<int>*)(*pvVar9)[uVar11];
                    goto LAB_10062c5ac;
                }
            }
            if (arg2 < 1) {
                return;
            }
            if (arg3 < 1) {
                return;
            }
            pvVar5 = (vector<int>*)(*this_01)[arg1_00];
            piVar6 = (int*)(*pvVar5)[arg1_01];
            if (*piVar6 == 0) {
                return;
            }
            pvVar5 = (vector<int>*)(*this_01)[arg1_00];
            piVar6 = (int*)(*pvVar5)[arg1_01];
            iVar1 = *piVar6;
            pvVar5 = (vector<int>*)(*this_01)[(unsigned long)arg4];
            piVar6 = (int*)(*pvVar5)[(unsigned long)arg5];
            *piVar6 = iVar1;
            SetMapsquarePerimeterHeightGridGroup(0, arg2_00, arg3_00, arg4, arg5, iVar1, -999);
            pvVar5 = (vector<int>*)(*pvVar9)[arg1_00];
            puVar7 = (uint32_t*)(*pvVar5)[arg1_01];
            uVar10 = *puVar7;
            pvVar5 = (vector<int>*)(*pvVar9)[(unsigned long)arg4];
        } else {
            pvVar5 = (vector<int>*)(*this_01)[arg1_00];
            uVar11 = (unsigned long)arg5;
            piVar6 = (int*)(*pvVar5)[uVar11];
            if (*piVar6 == 0)
                goto LAB_10062c506;
            pvVar5 = (vector<int>*)(*this_01)[arg1_00];
            piVar6 = (int*)(*pvVar5)[uVar11];
            iVar1 = *piVar6;
            pvVar5 = (vector<int>*)(*this_01)[(unsigned long)arg4];
            piVar6 = (int*)(*pvVar5)[uVar11];
            *piVar6 = iVar1;
            SetMapsquarePerimeterHeightGridGroup(0, arg2_00, arg5, arg4, arg5, iVar1, -999);
            pvVar5 = (vector<int>*)(*pvVar9)[arg1_00];
            arg1_01 = uVar11;
        LAB_10062c5ac:
            puVar7 = (uint32_t*)(*pvVar5)[arg1_01];
            uVar10 = *puVar7;
            pvVar5 = (vector<int>*)(*pvVar9)[(unsigned long)arg4];
        }
        puVar7 = (uint32_t*)(*pvVar5)[(unsigned long)arg5];
        *puVar7 = uVar10;
    }

    // 0x10062c720
    void BuildTerrainWorker::SetMapsquarePerimeterHeightGridGroup(int arg1, int arg2, int arg3, int arg4, int arg5,
                                                                  int arg6, int arg7) {
        uint64_t uVar1;
        uint64_t uVar2;
        uint64_t uVar3;
        uint64_t uVar4;
        uint64_t uVar5;
        uint64_t uVar6;
        uint64_t uVar7;
        vector<eastl::vector<graphics::GridGroup>>* pvVar13;
        vector<graphics::GridGroup>* pvVar14;
        uint64_t* puVar15;
        uint64_t* puVar16;

        if (arg7 == -999) {
            arg7 = arg1;
        }
        uint8_t* this_00 = &field_80;
        unsigned long arg1_00 = (unsigned long)arg7;
        shared_ptr<BuiltTerrainLevel>* psVar8 = (shared_ptr<BuiltTerrainLevel>*)(*this_00)[arg1_00];
        shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>>>* psVar9 =
            (shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>>>*)(*psVar8).operator->();
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>* pvVar10 =
            (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                    eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)(*psVar9)
                .operator->();
        long lVar11 = pvVar10->size();
        psVar8 = (shared_ptr<BuiltTerrainLevel>*)(*this_00)[arg1_00];
        long lVar12 = (*psVar8).operator->();
        pvVar10 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                          eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)(*((lVar12 + 16)))
                      .operator->();
        lVar12 = pvVar10->size();
        if (lVar11 == lVar12) {
            psVar8 = (shared_ptr<BuiltTerrainLevel>*)(*this_00)[arg1_00];
            psVar9 = (shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>>>*)(*psVar8).operator->();
            pvVar13 = (vector<eastl::vector<graphics::GridGroup>>*)**psVar9;
            pvVar14 = (vector<graphics::GridGroup>*)(*pvVar13)[(long)arg2];
            puVar15 = (uint64_t*)(*pvVar14)[(long)arg3];
            psVar8 = (shared_ptr<BuiltTerrainLevel>*)(*this_00)[(long)arg1];
            psVar9 = (shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>>>*)(*psVar8).operator->();
            pvVar13 = (vector<eastl::vector<graphics::GridGroup>>*)**psVar9;
            pvVar14 = (vector<graphics::GridGroup>*)(*pvVar13)[(long)arg4];
            puVar16 = (uint64_t*)(*pvVar14)[(long)arg5];
            if (*(char*)(puVar16 + 5) == '\0') {
                uVar1 = puVar15[9];
                puVar16[8] = puVar15[8];
                puVar16[9] = uVar1;
                uVar1 = *puVar15;
                uVar2 = puVar15[1];
                uVar3 = puVar15[2];
                uVar4 = puVar15[3];
                uVar5 = puVar15[4];
                uVar6 = puVar15[5];
                uVar7 = puVar15[7];
                puVar16[6] = puVar15[6];
                puVar16[7] = uVar7;
                puVar16[4] = uVar5;
                puVar16[5] = uVar6;
                puVar16[2] = uVar3;
                puVar16[3] = uVar4;
                *puVar16 = uVar1;
                puVar16[1] = uVar2;
                uVar1 = puVar15[11];
                uVar2 = puVar15[12];
                uVar3 = puVar15[13];
                uVar4 = puVar15[14];
                uVar5 = puVar15[15];
                uVar6 = puVar15[16];
                uVar7 = puVar15[17];
                puVar16[10] = puVar15[10];
                puVar16[11] = uVar1;
                puVar16[12] = uVar2;
                puVar16[13] = uVar3;
                puVar16[14] = uVar4;
                puVar16[15] = uVar5;
                puVar16[16] = uVar6;
                puVar16[17] = uVar7;
                uVar1 = puVar15[19];
                puVar16[18] = puVar15[18];
                puVar16[19] = uVar1;
                uVar1 = puVar15[20];
                uVar2 = puVar15[21];
                uVar3 = puVar15[22];
                uVar4 = puVar15[23];
                uVar5 = puVar15[24];
                uVar6 = puVar15[25];
                uVar7 = puVar15[27];
                puVar16[26] = puVar15[26];
                puVar16[27] = uVar7;
                uVar7 = puVar15[29];
                puVar16[28] = puVar15[28];
                puVar16[29] = uVar7;
                puVar16[24] = uVar5;
                puVar16[25] = uVar6;
                puVar16[22] = uVar3;
                puVar16[23] = uVar4;
                puVar16[20] = uVar1;
                puVar16[21] = uVar2;
                *(int*)((long)puVar16 + 52) = arg6;
                *(int*)((long)puVar16 + 132) = arg6;
                *(int*)((long)puVar16 + 212) = arg6;
                *(uint32_t*)(puVar16 + 1) = *(uint32_t*)(puVar15 + 1);
                *(uint32_t*)(puVar16 + 11) = *(uint32_t*)(puVar15 + 1);
                *(uint32_t*)(puVar16 + 21) = *(uint32_t*)(puVar15 + 1);
            }
        }
    }

    // 0x10062c920
    void BuildTerrainWorker::SetMapsquarePerimeterHeight(int arg1) {
        int iVar1;
        uint32_t uVar2;
        int iVar3;
        bool cVar4;
        vector<int>* pvVar7;
        int* piVar8;
        uint32_t* puVar9;
        vector<eastl::vector<int>>* this_03;
        int arg3;
        int arg2;
        vector<eastl::vector<int>>* local_40;

        uint8_t* this_00 = &field_80;
        unsigned long uVar11 = (unsigned long)arg1;
        shared_ptr<BuiltTerrainLevel>* psVar5 = (shared_ptr<BuiltTerrainLevel>*)(*this_00)[uVar11];
        long lVar6 = (*psVar5).operator->();
        auto this_01 = *(*((lVar6 + 16)));
        if (arg1 == 0) {
            psVar5 = (shared_ptr<BuiltTerrainLevel>*)(*this_00)[0];
            lVar6 = (*psVar5).operator->();
            local_40 = (vector<eastl::vector<int>>*)((lVar6 + 32))->end();
            if (local_40 == nullptr) {
                LogAssert("waterMap != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                          "assetbuilder/jobs/buildterrain/BuildTerrainWorker.cpp",
                          961, nullptr);
            }
        } else {
            local_40 = nullptr;
        }
        unsigned long uVar10 = 1;
        do {
            pvVar7 = (vector<int>*)(*this_01)[uVar10];
            piVar8 = (int*)(*pvVar7)[64];
            iVar1 = *piVar8;
            pvVar7 = (vector<int>*)(*this_01)[uVar10];
            piVar8 = (int*)(*pvVar7)[65];
            *piVar8 = iVar1;
            SetMapsquarePerimeterHeightGridGroup(arg1, (int)uVar10, 64, (int)uVar10, 65, iVar1, -999);
            if (arg1 == 0) {
                pvVar7 = (vector<int>*)(*local_40)[uVar10];
                puVar9 = (uint32_t*)(*pvVar7)[64];
                uVar2 = *puVar9;
                pvVar7 = (vector<int>*)(*local_40)[uVar10];
                puVar9 = (uint32_t*)(*pvVar7)[65];
                *puVar9 = uVar2;
            }
            uVar10 = uVar10 + 1;
        } while (uVar10 != 65);
        uVar10 = 1;
        do {
            pvVar7 = (vector<int>*)(*this_01)[64];
            piVar8 = (int*)(*pvVar7)[uVar10];
            iVar1 = *piVar8;
            pvVar7 = (vector<int>*)(*this_01)[65];
            piVar8 = (int*)(*pvVar7)[uVar10];
            *piVar8 = iVar1;
            SetMapsquarePerimeterHeightGridGroup(arg1, 64, (int)uVar10, 65, (int)uVar10, iVar1, -999);
            if (arg1 == 0) {
                pvVar7 = (vector<int>*)(*local_40)[64];
                puVar9 = (uint32_t*)(*pvVar7)[uVar10];
                uVar2 = *puVar9;
                pvVar7 = (vector<int>*)(*local_40)[65];
                puVar9 = (uint32_t*)(*pvVar7)[uVar10];
                *puVar9 = uVar2;
            }
            uVar10 = uVar10 + 1;
        } while (uVar10 != 65);
        if (arg1 == 0) {
            pvVar7 = (vector<int>*)(*this_01)[64];
            piVar8 = (int*)(*pvVar7)[65];
            if (*piVar8 == 0) {
                pvVar7 = (vector<int>*)(*this_01)[65];
                piVar8 = (int*)(*pvVar7)[64];
                if (*piVar8 == 0) {
                    pvVar7 = (vector<int>*)(*this_01)[64];
                    piVar8 = (int*)(*pvVar7)[64];
                    if (*piVar8 == 0) {
                        return;
                    }
                    pvVar7 = (vector<int>*)(*this_01)[64];
                    piVar8 = (int*)(*pvVar7)[64];
                    iVar1 = *piVar8;
                    pvVar7 = (vector<int>*)(*this_01)[65];
                    piVar8 = (int*)(*pvVar7)[65];
                    *piVar8 = iVar1;
                    SetMapsquarePerimeterHeightGridGroup(0, 64, 64, 65, 65, iVar1, -999);
                    uVar11 = 64;
                } else {
                    pvVar7 = (vector<int>*)(*this_01)[65];
                    piVar8 = (int*)(*pvVar7)[64];
                    iVar1 = *piVar8;
                    pvVar7 = (vector<int>*)(*this_01)[65];
                    piVar8 = (int*)(*pvVar7)[65];
                    *piVar8 = iVar1;
                    SetMapsquarePerimeterHeightGridGroup(0, 65, 64, 65, 65, iVar1, -999);
                    uVar11 = 65;
                }
                pvVar7 = (vector<int>*)(*local_40)[uVar11];
                uVar11 = 64;
            } else {
                pvVar7 = (vector<int>*)(*this_01)[64];
                piVar8 = (int*)(*pvVar7)[65];
                iVar1 = *piVar8;
                pvVar7 = (vector<int>*)(*this_01)[65];
                piVar8 = (int*)(*pvVar7)[65];
                *piVar8 = iVar1;
                SetMapsquarePerimeterHeightGridGroup(0, 64, 65, 65, 65, iVar1, -999);
                pvVar7 = (vector<int>*)(*local_40)[64];
                uVar11 = 65;
            }
            puVar9 = (uint32_t*)(*pvVar7)[uVar11];
            uVar2 = *puVar9;
            pvVar7 = (vector<int>*)(*local_40)[65];
            puVar9 = (uint32_t*)(*pvVar7)[65];
            *puVar9 = uVar2;
        } else {
            this_03 = nullptr;
            iVar1 = arg1;
            do {
                iVar1 = iVar1 - 1;
                if ((long)uVar11 < 1)
                    goto LAB_10062cba6;
                uVar11 = uVar11 - 1;
                cVar4 = ((*this_00)[uVar11])->operator_cast_to_bool();
            } while (!cVar4);
            psVar5 = (shared_ptr<BuiltTerrainLevel>*)(*this_00)[uVar11];
            lVar6 = (*psVar5).operator->();
            this_03 = (vector<eastl::vector<int>>*)((lVar6 + 16))->end();
        LAB_10062cba6:
            if (this_03 == nullptr) {
                LogAssert(
                    "mapBelow != nullptr",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/assetbuilder/"
                    "jobs/buildterrain/BuildTerrainWorker.cpp",
                    1038,
                    "Unable to set map square perimeter height, cannot find a suitable level beneath to copy from.");
            }
            pvVar7 = (vector<int>*)(*this_01)[64];
            piVar8 = (int*)(*pvVar7)[65];
            iVar3 = *piVar8;
            pvVar7 = (vector<int>*)(*this_03)[64];
            piVar8 = (int*)(*pvVar7)[65];
            if (iVar3 == *piVar8) {
                pvVar7 = (vector<int>*)(*this_01)[65];
                piVar8 = (int*)(*pvVar7)[64];
                iVar3 = *piVar8;
                pvVar7 = (vector<int>*)(*this_03)[65];
                piVar8 = (int*)(*pvVar7)[64];
                if (iVar3 == *piVar8) {
                    pvVar7 = (vector<int>*)(*this_01)[64];
                    piVar8 = (int*)(*pvVar7)[64];
                    iVar3 = *piVar8;
                    pvVar7 = (vector<int>*)(*this_03)[64];
                    piVar8 = (int*)(*pvVar7)[64];
                    if (iVar3 == *piVar8) {
                        return;
                    }
                    pvVar7 = (vector<int>*)(*this_01)[64];
                    piVar8 = (int*)(*pvVar7)[64];
                    iVar3 = *piVar8;
                    pvVar7 = (vector<int>*)(*this_01)[65];
                    piVar8 = (int*)(*pvVar7)[65];
                    *piVar8 = iVar3;
                    arg2 = 64;
                } else {
                    pvVar7 = (vector<int>*)(*this_01)[65];
                    piVar8 = (int*)(*pvVar7)[64];
                    iVar3 = *piVar8;
                    pvVar7 = (vector<int>*)(*this_01)[65];
                    piVar8 = (int*)(*pvVar7)[65];
                    *piVar8 = iVar3;
                    arg2 = 65;
                }
                arg3 = 64;
            } else {
                pvVar7 = (vector<int>*)(*this_01)[64];
                piVar8 = (int*)(*pvVar7)[65];
                iVar3 = *piVar8;
                pvVar7 = (vector<int>*)(*this_01)[65];
                piVar8 = (int*)(*pvVar7)[65];
                *piVar8 = iVar3;
                arg2 = 64;
                arg3 = 65;
            }
            SetMapsquarePerimeterHeightGridGroup(arg1, arg2, arg3, 65, 65, iVar3, iVar1);
        }
    }

    // 0x10062cf90
    bool BuildTerrainWorker::CalculatePreferredRotation(
        int arg1, int arg2, int arg3, const eastl::vector<eastl::vector<graphics::GridGroup>>& gridGroupss) {
        unsigned int uVar10;

        unsigned long arg1_01 = (unsigned long)(arg2 - 1);
        vector<graphics::GridGroup>* pvVar3 = &gridGroupss[arg1_01];
        unsigned long uVar11 = (unsigned long)(arg3 - 1);
        long lVar4 = (*pvVar3)[uVar11];
        bool bVar12 = *(int*)(lVar4 + 68) == arg1;
        unsigned long arg1_03 = (unsigned long)(arg2 + 1);
        pvVar3 = &gridGroupss[arg1_03];
        lVar4 = (*pvVar3)[uVar11];
        int iVar9 = *(int*)(lVar4 + 68);
        pvVar3 = &gridGroupss[arg1_03];
        unsigned long arg1_00 = (unsigned long)(arg3 + 1);
        lVar4 = (*pvVar3)[arg1_00];
        int iVar7 = *(int*)(lVar4 + 68);
        pvVar3 = &gridGroupss[arg1_01];
        lVar4 = (*pvVar3)[arg1_00];
        int iVar2 = *(int*)(lVar4 + 68);
        pvVar3 = &gridGroupss[(unsigned long)arg2];
        lVar4 = (*pvVar3)[uVar11];
        int iVar5 = (unsigned int)(*(int*)(lVar4 + 68) == arg1) * 2;
        bool bVar13 = iVar9 == arg1;
        pvVar3 = &gridGroupss[arg1_03];
        uVar11 = (unsigned long)arg3;
        lVar4 = (*pvVar3)[uVar11];
        bool bVar14 = *(int*)(lVar4 + 68) == arg1;
        iVar9 = iVar5 - 3 + (unsigned int)bVar13 * 2;
        if (bVar14) {
            iVar9 = iVar5 + (unsigned int)bVar13 * 2 - 1;
        }
        int iVar1 = (unsigned int)bVar14 * 2;
        unsigned int uVar8 = (unsigned int)(iVar7 == arg1);
        pvVar3 = &gridGroupss[(unsigned long)arg2];
        lVar4 = (*pvVar3)[arg1_00];
        bVar13 = *(int*)(lVar4 + 68) == arg1;
        iVar7 = iVar1 - 3 + uVar8 * 2;
        if (bVar13) {
            iVar7 = iVar1 - 1 + uVar8 * 2;
        }
        iVar1 = (unsigned int)bVar13 * 2;
        uVar8 = (unsigned int)(iVar2 == arg1);
        pvVar3 = &gridGroupss[arg1_01];
        lVar4 = (*pvVar3)[uVar11];
        bVar13 = *(int*)(lVar4 + 68) == arg1;
        iVar2 = iVar5 - 3 + (unsigned int)bVar12 * 2;
        if (bVar13) {
            iVar2 = iVar5 + (unsigned int)bVar12 * 2 - 1;
        }
        iVar5 = iVar1 - 3 + uVar8 * 2;
        if (bVar13) {
            iVar5 = iVar1 + uVar8 * 2 - 1;
        }
        uVar8 = -(iVar2 - iVar7);
        if ((int)uVar8 < 0) {
            uVar8 = iVar2 - iVar7;
        }
        unsigned int uVar6 = -(iVar9 - iVar5);
        if ((int)uVar6 < 0) {
            uVar6 = iVar9 - iVar5;
        }
        if (uVar8 == uVar6) {
            pvVar3 = &gridGroupss[(unsigned long)arg2];
            lVar4 = (*pvVar3)[uVar11];
            iVar9 = *(int*)(lVar4 + 52);
            pvVar3 = &gridGroupss[arg1_03];
            lVar4 = (*pvVar3)[arg1_00];
            uVar6 = iVar9 - *(int*)(lVar4 + 52);
            uVar8 = -uVar6;
            if ((int)uVar8 < 0) {
                uVar8 = uVar6;
            }
            pvVar3 = &gridGroupss[arg1_03];
            lVar4 = (*pvVar3)[uVar11];
            iVar9 = *(int*)(lVar4 + 52);
            pvVar3 = &gridGroupss[(unsigned long)arg2];
            lVar4 = (*pvVar3)[arg1_00];
            uVar10 = iVar9 - *(int*)(lVar4 + 52);
            uVar6 = -uVar10;
            if ((int)uVar6 < 0) {
                uVar6 = uVar10;
            }
        }
        return uVar8 < uVar6;
    }

    // 0x10062d230
    void BuildTerrainWorker::BuildTile(const DecodedTerrainTile& decodedTerrainTile, graphics::GridTile& gridTile1,
                                       graphics::GridTile& gridTile2, graphics::GridTile& gridTile3,
                                       const shared_ptr<FloorOverlayType>& floorOverlayType,
                                       const shared_ptr<FloorUnderlayType>& floorUnderlayType1,
                                       const shared_ptr<FloorUnderlayType>& floorUnderlayType2, Rotation90 rotation90) {
        DecodedTerrainTile* pDVar5;

        long lVar1 = decodedTerrainTile.field_32;
        gridTile1.field_72 = lVar1;
        DecodedTerrainTile* local_50 = decodedTerrainTile;
        long lVar4 = graphics::TerrainOverlayShape::GetShape(0);
        if (lVar1 == lVar4) {
            AssignOverlay(*((shared_ptr<FloorOverlayType>*)(shared_ptr*)floorOverlayType), gridTile1);
            return;
        }
        GridTile* local_48 = gridTile1;
        GridTile local_a8;
        gridTile2.field_64 = local_a8.field_64;
        gridTile2.field_72 = local_a8.field_72;
        *(uint64_t*)((long)&gridTile2.field_44 + 4) = local_a8._48_8_;
        *(uint64_t*)((long)&gridTile2.field_52 + 4) = local_a8._56_8_;
        gridTile2.field_32 = local_a8.field_32;
        *(uint64_t*)&gridTile2.field_40 = local_a8._40_8_;
        *(uint64_t*)((long)&gridTile2.field_12 + 4) = local_a8._16_8_;
        *(uint64_t*)((long)&gridTile2.field_20 + 4) = local_a8._24_8_;
        gridTile2.field_0 = local_a8.field_0;
        gridTile2.field_4 = local_a8.field_4;
        *(uint16_t*)&gridTile2.field_6 = local_a8._6_2_;
        *(uint64_t*)&gridTile2.field_8 = local_a8._8_8_;
        GridTile* local_38 = gridTile2;
        local_a8 = graphics::GridTile();
        gridTile3.field_64 = local_a8.field_64;
        gridTile3.field_72 = local_a8.field_72;
        *(uint64_t*)((long)&gridTile3.field_44 + 4) = local_a8._48_8_;
        *(uint64_t*)((long)&gridTile3.field_52 + 4) = local_a8._56_8_;
        gridTile3.field_32 = local_a8.field_32;
        *(uint64_t*)&gridTile3.field_40 = local_a8._40_8_;
        *(uint64_t*)((long)&gridTile3.field_12 + 4) = local_a8._16_8_;
        *(uint64_t*)((long)&gridTile3.field_20 + 4) = local_a8._24_8_;
        gridTile3.field_0 = local_a8.field_0;
        gridTile3.field_4 = local_a8.field_4;
        *(uint16_t*)&gridTile3.field_6 = local_a8._6_2_;
        *(uint64_t*)&gridTile3.field_8 = local_a8._8_8_;
        GridTile* local_40 = gridTile3;
        bool cVar3 = floorUnderlayType1.operator_cast_to_bool();
        if ((!cVar3) || (cVar3 = floorUnderlayType2.operator_cast_to_bool(), pDVar5 = local_50, !cVar3)) {
            cVar3 = floorOverlayType.operator_cast_to_bool();
            if (cVar3) {
                local_38->field_40 = 1;
                AssignOverlay(*((shared_ptr<FloorOverlayType>*)(shared_ptr*)floorOverlayType), *local_38);
            }
            cVar3 = floorUnderlayType1.operator_cast_to_bool();
            if (!cVar3)
                goto LAB_10062d3a3;
            local_40->field_40 = 1;
            pDVar5 = local_50;
        } else {
            local_38->field_40 = 1;
            AssignUnderlay(floorUnderlayType2, *local_38, local_50->field_8);
            local_40->field_40 = 1;
        }
        GridTile* pGVar2 = local_48;
        AssignUnderlay(floorUnderlayType1, *local_40, pDVar5->field_8);
        local_50 = pDVar5;
        local_48 = pGVar2;
    LAB_10062d3a3:
        *(Rotation90*)&local_48->field_64 = (rotation90 & 255) + *(int*)&local_50->field_16 & 3;
    }

    // 0x10062d7e0
    uint32_t BuildTerrainWorker::ReselectSourceUsingCompositeData(
        int& arg1, int& arg2, int& arg3, int& arg4, int& arg5,
        std::array<eastl::vector<eastl::vector<DecodedTerrainTile>>, 4ul>*& arg6, int& arg7, int& arg8,
        Rotation90& rotation90, const BuildTerrainRequestData& buildTerrainRequestData) {
        uint8_t bVar1;
        unsigned int uVar8;
        uint32_t uVar9;
        int iVar10;
        vector<eastl::fixed_vector<ClientCompositeZone, 10ul>,
               eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true>>* this_01;
        vector<WorldMap::PendingLocationType>* this_02;
        ClientCompositeZone* this_03;
        unsigned int uVar13;
        uint8_t bVar14;
        unsigned int uVar15;
        Rotation90 rotation90_00;
        int iVar16;
        int iVar18;
        unsigned long local_40;
        int local_38;

        int local_48 = 7;
        int local_44 = 72;
        long lVar11 = buildTerrainRequestData.field_16.operator->();
        if (*(char*)(lVar11 + 9832) == '\0') {
            local_48 = local_48 + 1;
            local_44 = local_44 - 1;
            uVar13 = -(unsigned int)(arg1 == 0) | (unsigned int)(arg1 == 65);
            uVar8 = -(unsigned int)(arg2 == 0) | (unsigned int)(arg2 == 65);
            uVar15 = -(unsigned int)(arg3 == 0) | (unsigned int)(arg3 == 65);
            if (arg4 == 0) {
                local_38 = 0;
            } else if (arg4 == 65) {
                local_38 = 2;
            } else {
                local_38 = 1;
            }
        } else {
            uVar15 = 0;
            local_38 = 1;
            uVar8 = 0;
            uVar13 = 0;
        }
        int local_34 = arg1 + 7;
        unsigned int uVar2 = math::Clamp<int>(local_34, local_48, local_44);
        local_34 = arg2 + 7;
        int iVar3 = math::Clamp<int>(local_34, local_48, local_44);
        local_34 = arg3 + 7;
        unsigned int uVar4 = math::Clamp<int>(local_34, local_48, local_44);
        local_34 = arg4 + 7;
        unsigned int uVar5 = math::Clamp<int>(local_34, local_48, local_44);
        int iVar7 = iVar3 + 7;
        if (-1 < iVar3) {
            iVar7 = iVar3;
        }
        local_40 = (((uint64_t)local_40._4_4_ << 32) | (uint32_t)iVar7);
        unsigned int uVar17 = uVar5 + 7;
        if (-1 < (int)uVar5) {
            uVar17 = uVar5;
        }
        auto this_00 = buildTerrainRequestData.field_16.operator->();
        iVar7 = arg5;
        int iVar6 = this_00->size();
        if (iVar7 <= iVar6) {
            iVar6 = (int)(unsigned int)local_40 >> 3;
            this_01 = (vector<eastl::fixed_vector<ClientCompositeZone, 10ul>,
                              eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true>>*)(*this_00)[(long)*arg5];
            iVar7 = this_01->size();
            if (iVar6 <= iVar7) {
                this_02 = (vector<WorldMap::PendingLocationType>*)(*this_01)[(long)iVar6];
                iVar7 = this_02->size();
                if ((int)uVar17 >> 3 <= iVar7) {
                    this_03 = (ClientCompositeZone*)(*this_02)[(long)((int)uVar17 >> 3)];
                    uVar9 = this_03->IsValid();
                    if ((char)uVar9 == '\0') {
                        return uVar9;
                    }
                    local_40 = (unsigned long)(iVar3 - ((unsigned int)local_40 & 4294967288));
                    iVar7 = uVar5 - (uVar17 & 4294967288);
                    arg6 = &field_48[(unsigned long)(unsigned int)this_03->field_16];
                    arg5 = this_03->field_0;
                    uVar5 = uVar2 + 7;
                    if (-1 < (int)uVar2) {
                        uVar5 = uVar2;
                    }
                    iVar3 = uVar2 - (uVar5 & 4294967288);
                    uVar2 = uVar4 + 7;
                    if (-1 < (int)uVar4) {
                        uVar2 = uVar4;
                    }
                    iVar6 = uVar4 - (uVar2 & 4294967288);
                    bVar14 = this_03->field_12;
                    bVar1 = bVar14 - 1;
                    if (bVar1 < 3) {
                        bVar14 = 4 - bVar14;
                        iVar18 = *(int*)(&reinterpret_cast<const uint64_t*>(&ACCELERATION_INFINITE)[5] +
                                         (long)(char)bVar1 * 4);
                        iVar16 = *(int*)((long)&PTR___mh_execute_header_100d432c4 + (long)(char)bVar1 * 4);
                    } else {
                        iVar18 = 0;
                        iVar16 = 0;
                    }
                    rotation90_00 = (Rotation90)bVar14;
                    iVar10 = RegionRotate::RegionRotateX(iVar3, iVar6, rotation90_00);
                    arg1 = (iVar10 + this_03->field_4 * 8 & 63U) + uVar13 + 1;
                    iVar10 = RegionRotate::RegionRotateX((int)local_40, iVar7, (unsigned int)bVar14);
                    uVar13 = iVar10 + this_03->field_4 * 8 & 63;
                    arg2 = uVar13 + uVar8 + 1;
                    if (6 < iVar10) {
                        iVar18 = 0;
                    }
                    arg7 = iVar18 + uVar8 + uVar13 + 1;
                    iVar3 = RegionRotate::RegionRotateZ(iVar3, iVar6, rotation90_00);
                    arg3 = (iVar3 + this_03->field_8 * 8 & 63U) + uVar15 + 1;
                    iVar7 = RegionRotate::RegionRotateZ((int)local_40, iVar7, rotation90_00);
                    local_38 = local_38 + (iVar7 + this_03->field_8 * 8 & 63U);
                    arg4 = local_38;
                    if (6 < iVar7) {
                        iVar16 = 0;
                    }
                    arg8 = iVar16 + local_38;
                    *(uint8_t*)rotation90 = this_03->field_12;
                    return uVar9;
                }
            }
        }
        return 0;
    }

    // 0x10062dcd0
    uint64_t BuildTerrainWorker::GetGridTile(int arg1, int arg2, int arg3) {
        int iVar2;

        shared_ptr* this_00 = &field_80[(long)arg1];
        if (shared_ptr::operator_cast_to_bool(this_00) == '\0') {
            return 0;
        }
        shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>>>* this_01 =
            (shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>>>*)**this_00;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>* this_02 =
            (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                    eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)**this_01;
        if ((arg2 < 0) || (iVar2 = this_02->size(), iVar2 <= arg2)) {
            LogAssert("tileX >= 0 && tileX < (int)gridMap.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/jobs/buildterrain/BuildTerrainWorker.cpp",
                      1656, nullptr);
        }
        vector<graphics::ModularParticleEmitter, eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true>>* this_03 =
            (vector<graphics::ModularParticleEmitter,
                    eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true>>*)(*this_02)[(long)arg2];
        if ((arg3 < 0) || (iVar2 = this_03->size(), iVar2 <= arg3)) {
            LogAssert("tileZ >= 0 && tileZ < (int)gridMapRow.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/jobs/buildterrain/BuildTerrainWorker.cpp",
                      1659, nullptr);
        }
        return ((GridGroup*)(*this_03)[(long)arg3])->GetGridTile();
    }

    // 0x10062ddb0
    int BuildTerrainWorker::PaintRemoveRoofArea(int arg1, int arg2, int arg3,
                                                RemoveRoofPaintingProgress& removeRoofPaintingProgress) {
        int arg3_00;
        bool bVar2;
        uint8_t bVar4;
        unsigned int uVar5;
        unsigned int uVar6;
        unsigned int uVar7;
        int* piVar9;
        uint8_t bVar10;
        int iVar11;
        int iStack_180d4;
        unsigned long uStack_180d0;
        int iStack_180ac;
        int iStack_180a8;
        int iStack_180a4;

        unsigned long uVar12 = (unsigned long)(unsigned int)arg1;
        fixed_queue<eastl::pair<int, int>, 4096ul, true> afStack_180a0;
        uint64_t uStack_180c0 = eastl::make_pair<int, int&>(arg2, arg3);
        afStack_180a0.push(uStack_180c0);
        return iStack_180c4 = 0;
        long lVar8 = graphics::TerrainOverlayShape::GetShape(0);
        bool cVar3 = afStack_180a0.empty();
        if (!cVar3) {
            iStack_180d4 = arg1 + 1;
            iStack_180c4 = 0;
            uStack_180d0 = uVar12;
            do {
                piVar9 = (int*)
                    eastl::queue<eastl::pair<int, int>, eastl::fixed_list<eastl::pair<int, int>, 4096ul>>::front();
                iVar11 = *piVar9;
                arg3_00 = piVar9[1];
                eastl::queue<eastl::pair<int, int>, eastl::fixed_list<eastl::pair<int, int>, 4096ul>>::pop();
                iStack_180a8 = iVar11;
                iStack_180a4 = arg3_00;
                bVar4 = IsRemoveRoof((int)uVar12, iVar11, arg3_00);
                if (bVar4 == 0) {
                    if (iStack_180a8 < (int)(field_40 + 1)) {
                        uVar5 = IsRemoveRoof((int)uVar12, iStack_180a8 + 1, iStack_180a4);
                    } else {
                        uVar5 = 0;
                    }
                    if (iStack_180a8 < 1) {
                        uVar6 = 0;
                    } else {
                        uVar6 = IsRemoveRoof((int)uStack_180d0, iStack_180a8 - 1, iStack_180a4);
                    }
                    if (iStack_180a4 < 1) {
                        uVar7 = 0;
                    } else {
                        uVar7 = IsRemoveRoof((int)uStack_180d0, iStack_180a8, iStack_180a4 - 1);
                    }
                    if (iStack_180a4 < (int)(field_40 + 1)) {
                        bVar4 = IsRemoveRoof((int)uStack_180d0, iStack_180a8, iStack_180a4 + 1);
                    } else {
                        bVar4 = 0;
                    }
                    bVar4 = 1 < (unsigned int)bVar4 + (uVar7 & 255) + (uVar6 & 255) + (uVar5 & 255);
                    uVar12 = uStack_180d0;
                    bVar2 = (bool)bVar4;
                } else {
                    bVar2 = false;
                }
                piVar9 = (int*)GetGridTile(iStack_180d4, iStack_180a8, iStack_180a4);
                bVar10 = 1;
                iVar11 = (int)uVar12;
                if ((piVar9 != nullptr) && ((*piVar9 != -1 || (*(long*)(piVar9 + 18) != lVar8)))) {
                    piVar9[12] = field_128;
                    removeRoofPaintingProgress.Set(iVar11, iStack_180a8, iStack_180a4);
                    bVar10 = bVar4 ^ 1;
                    iStack_180c4 = iStack_180c4 + 1;
                }
                if (bVar10 == 0 && !bVar2) {
                    if (0 < iStack_180a8) {
                        cVar3 = removeRoofPaintingProgress.IsSet(iVar11, iStack_180a8 - 1, iStack_180a4);
                        if (!cVar3) {
                            iStack_180ac = iStack_180a8 - 1;
                            uStack_180c0 = eastl::make_pair<int, int&>(iStack_180ac, iStack_180a4);
                            afStack_180a0.push(uStack_180c0);
                            removeRoofPaintingProgress.Set(iVar11, iStack_180a8 - 1, iStack_180a4);
                        }
                    }
                    if (iStack_180a4 < (int)(field_40 + 1)) {
                        cVar3 = removeRoofPaintingProgress.IsSet(iVar11, iStack_180a8, iStack_180a4 + 1);
                        if (!cVar3) {
                            iStack_180ac = iStack_180a4 + 1;
                            uStack_180c0 = eastl::make_pair<int, int&>(iStack_180a8, iStack_180ac);
                            afStack_180a0.push(uStack_180c0);
                            removeRoofPaintingProgress.Set(iVar11, iStack_180a8, iStack_180a4 + 1);
                        }
                    }
                    if (iStack_180a8 < (int)(field_40 + 1)) {
                        cVar3 = removeRoofPaintingProgress.IsSet(iVar11, iStack_180a8 + 1, iStack_180a4);
                        if (!cVar3) {
                            iStack_180ac = iStack_180a8 + 1;
                            uStack_180c0 = eastl::make_pair<int, int&>(iStack_180ac, iStack_180a4);
                            afStack_180a0.push(uStack_180c0);
                            removeRoofPaintingProgress.Set(iVar11, iStack_180a8 + 1, iStack_180a4);
                        }
                    }
                    if (0 < iStack_180a4) {
                        cVar3 = removeRoofPaintingProgress.IsSet(iVar11, iStack_180a8, iStack_180a4 - 1);
                        if (!cVar3) {
                            iStack_180ac = iStack_180a4 - 1;
                            uStack_180c0 = eastl::make_pair<int, int&>(iStack_180a8, iStack_180ac);
                            afStack_180a0.push(uStack_180c0);
                            removeRoofPaintingProgress.Set(iVar11, iStack_180a8, iStack_180a4 - 1);
                        }
                    }
                }
                cVar3 = afStack_180a0.empty();
            } while (!cVar3);
        }
        return iStack_180c4;
    }

    // 0x10062e2a0
    void BuildTerrainWorker::DebugDumpRenderChunks() {}

    // 0x10062e2b0
    vector<unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true>>*
    BuildTerrainWorker::GetTileLink(int arg1, int arg2, int arg3) const {
        bool bVar1;
        int iVar3;
        shared_ptr* this_00;
        long lVar4;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>* this_01;
        vector<unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true>>* this_02;
        vector<unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true>>* pvVar5;
        uint8_t* pbVar6;

        if (-1 < arg1) {
            iVar3 = field_80.size();
            if (arg1 < iVar3) {
                this_00 = &field_80[(long)arg1];
                if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                    lVar4 = **this_00;
                    this_01 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                                      eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)*(*((lVar4 + 48)));
                    if ((-1 < arg2) && (iVar3 = this_01->size(), arg2 < iVar3)) {
                        this_02 =
                            (vector<unsigned char,
                                    eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true>>*)(*this_01)[(long)arg2];
                        bVar1 = true;
                        pvVar5 = this_02;
                        if ((-1 < arg3) &&
                            (pvVar5 = (vector<unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true>>*)
                                          this_02->size(),
                             arg3 < (int)pvVar5)) {
                            pbVar6 = (uint8_t*)(*this_02)[(long)arg3];
                            pvVar5 =
                                (vector<unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul,
                                                                                     true>>*)(unsigned long)*pbVar6;
                            bVar1 = false;
                        }
                        if (!bVar1) {
                            return pvVar5;
                        }
                    }
                }
            }
        }
        return nullptr;
    }

    // 0x10062e390
    bool BuildTerrainWorker::IsRemoveRoof(int arg1, int arg2, int arg3) const {
        bool bVar1;
        unsigned int uVar2;

        if (-1 < arg1) {
            do {
                uVar2 = GetTileLink(arg1, arg2, arg3);
                if ((uVar2 & 4) != 0 && uVar2 != 4294967295) {
                    uVar2 = IsGridTileUsed(arg1, arg2, arg3);
                    goto LAB_10062e3f9;
                }
                bVar1 = 0 < arg1;
                arg1 = arg1 - 1;
            } while (bVar1);
        }
        uVar2 = 0;
    LAB_10062e3f9:
        return uVar2 & 4294967041;
    }

    // 0x10062e410
    bool BuildTerrainWorker::IsGridTileUsed(int arg1, int arg2, int arg3) const {
        unsigned long arg1_00;
        bool bVar1;
        bool cVar2;
        int iVar3;
        shared_ptr* this_00;
        shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>>>* this_01;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>* this_02;
        vector<graphics::ModularParticleEmitter, eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true>>* this_03;
        long lVar4;
        unsigned long uVar5;
        unsigned int local_34;

        if (arg1 < 3) {
            arg1_00 = (long)arg1;
            local_34 = arg3;
            do {
                do {
                    do {
                        uVar5 = arg1_00;
                        if (uVar5 == 3)
                            goto LAB_10062e522;
                        arg1_00 = uVar5 + 1;
                        this_00 = &field_80[arg1_00];
                        cVar2 = shared_ptr::operator_cast_to_bool(this_00);
                    } while (!cVar2);
                    this_01 = (shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>>>*)**this_00;
                    this_02 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                                      eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)**this_01;
                } while ((arg2 < 0) || (iVar3 = this_02->size(), iVar3 <= arg2));
                this_03 = (vector<graphics::ModularParticleEmitter,
                                  eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true>>*)(*this_02)[(long)arg2];
                bVar1 = true;
                if ((-1 < arg3) && (iVar3 = this_03->size(), arg3 < iVar3)) {
                    lVar4 = (*this_03)[(long)arg3];
                    local_34 = (unsigned int)(((uint64_t)((int64_t)((unsigned long)lVar4 >> 8)) << 8) |
                                              (uint8_t)(*(char*)(lVar4 + 40) != '\0'));
                    bVar1 = false;
                }
            } while (bVar1);
        LAB_10062e522:
            if ((long)uVar5 < 3)
                goto LAB_10062e52d;
        }
        local_34 = 0;
    LAB_10062e52d:
        return local_34 & 4294967041;
    }

    // 0x10062e540
    void BuildTerrainWorker::SetRoofRemovable(int arg1, int arg2, int arg3) {
        int iVar2;

        if (3 < (unsigned int)arg1) {
            LogAssert("level >= 0 && level < constants::MapConstants::LEVELS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/jobs/buildterrain/BuildTerrainWorker.cpp",
                      1859, nullptr);
        }
        shared_ptr* this_00 = &field_80[(long)arg1];
        if (shared_ptr::operator_cast_to_bool(this_00) == '\0') {
            return;
        }
        shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>>>* this_01 =
            (shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>>>*)**this_00;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>* this_02 =
            (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                    eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)**this_01;
        if ((arg2 < 0) || (iVar2 = this_02->size(), iVar2 <= arg2)) {
            LogAssert("tileX >= 0 && tileX < (int)gridMap.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/jobs/buildterrain/BuildTerrainWorker.cpp",
                      1867, nullptr);
        }
        vector<graphics::ModularParticleEmitter, eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true>>* this_03 =
            (vector<graphics::ModularParticleEmitter,
                    eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true>>*)(*this_02)[(long)arg2];
        if ((arg3 < 0) || (iVar2 = this_03->size(), iVar2 <= arg3)) {
            LogAssert("tileZ >= 0 && tileZ < (int)gridMapRow.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/jobs/buildterrain/BuildTerrainWorker.cpp",
                      1870, nullptr);
        }
        long lVar3 = (*this_03)[(long)arg3];
        if (*(int*)(lVar3 + 48) != -1) {
            LogAssert("gridGroup.m_gridTile.m_renderChunkIDRemoveRoof == -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/jobs/buildterrain/BuildTerrainWorker.cpp",
                      1873, nullptr);
        }
        *(int*)(lVar3 + 48) = field_128;
    }

    // 0x10062e660
    bool BuildTerrainWorker::IsRoofRemovableSet(int arg1, int arg2, int arg3) {
        int iVar2;

        if (3 < (unsigned int)arg1) {
            LogAssert("level >= 0 && level < constants::MapConstants::LEVELS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/jobs/buildterrain/BuildTerrainWorker.cpp",
                      1881, nullptr);
        }
        shared_ptr* this_00 = &field_80[(long)arg1];
        if (shared_ptr::operator_cast_to_bool(this_00) == '\0') {
            return false;
        }
        shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>>>* this_01 =
            (shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup>>>*)**this_00;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>* this_02 =
            (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                    eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)**this_01;
        if ((arg2 < 0) || (iVar2 = this_02->size(), iVar2 <= arg2)) {
            LogAssert("tileX >= 0 && tileX < (int)gridMap.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/jobs/buildterrain/BuildTerrainWorker.cpp",
                      1888, nullptr);
        }
        vector<graphics::ModularParticleEmitter, eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true>>* this_03 =
            (vector<graphics::ModularParticleEmitter,
                    eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true>>*)(*this_02)[(long)arg2];
        if ((arg3 < 0) || (iVar2 = this_03->size(), iVar2 <= arg3)) {
            LogAssert("tileZ >= 0 && tileZ < (int)gridMapRow.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/jobs/buildterrain/BuildTerrainWorker.cpp",
                      1891, nullptr);
        }
        long lVar3 = (*this_03)[(long)arg3];
        return 1 < *(int*)(lVar3 + 48);
    }

} // namespace jag::game

// 0x10062bb90
void cos(float arg1) {
    _cosf();
}

// 0x10062bba0
void sin(float arg1) {
    _sinf();
}
