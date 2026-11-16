// libs/game/runetek5/scene/entities/Terrain.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "Terrain.h"

namespace jag::game {
    // 0x1039b4de8
    int64_t Terrain::m_debugPrimitiveText;

    // 0x10011ceb0: Terrain::GetWaterHeights() const has the same machine code as oldscape::configdecoder::NpcType::GetHeadIconGraphics() const

    // 0x10036f4c0: Terrain::GetWaterPatches() const has the same machine code as graphics::GeometryBatch::GetFaceTransparencyBuffer()

    // 0x100396010: Terrain::GetAABB() const has the same machine code as oldscape::auth::SteamAuthLibWrapper::GetGameToken()

    // 0x1003dad60: Terrain::GetLightProbe() has the same machine code as PathingEntity::GetAnimatedModel() const

    // 0x1003f9270
    Terrain::Terrain(graphics::GraphNode* graphNode, const shared_ptr<World>& world, TerrainInputData& terrainInputData,
                     graphics::RT7Core* rt7Core)
        : Entity(graphNode, world, 6, -1), MakeUniquePool<Terrain, 32>() {
        field_8 = &PTR__Terrain_100efefa8;
        new (&field_192) math::AABB();
        new (&field_224) math::Matrix44T<float>();
        field_288 = *(uint32_t*)terrainInputData;
        field_292 = *(uint32_t*)(terrainInputData + 4);
        new (&field_296) shared_ptr(*(shared_ptr<oldscape::dash3d::GroundDecor>**)(terrainInputData + 16));
        new (&field_312) shared_ptr(*(shared_ptr<oldscape::dash3d::GroundDecor>**)(terrainInputData + 24));
        new (&field_328) shared_ptr(*(shared_ptr<oldscape::dash3d::GroundDecor>**)(terrainInputData + 32));
        new (&field_344) eastl::fixed_vector<std::unique_ptr<graphics::TerrainPatch>, 4ul>();
        new (&field_416) eastl::vector<shared_ptr<graphics::WaterPatch>>();
        field_448[0] = terrainInputData[40];
        m_heightZero = 0;
        new (&field_456) eastl::fixed_vector<shared_ptr<eastl::vector<eastl::vector<int>>>, 4ul>();
        new (&field_560) Array<std::array<std::array<HeightOffset, 64ul>, 64ul>>();
        new (m_waterHeights) shared_ptr();
        new (&field_600) eastl::fixed_vector<shared_ptr<eastl::vector<eastl::vector<unsigned char>>>, 4ul>();
        new (&field_704) eastl::fixed_vector<shared_ptr<eastl::vector<eastl::vector<unsigned char>>>, 4ul>();
        new (&field_808) shared_ptr();
        field_824 = 0;
        new (field_832) shared_ptr();
        field_848 = 6;
        m_hasFade = 0;
        field_852 = 0.0;
        m_hideTerrain = false;
        new (&field_864) graphics::LightProbe();
        field_1680 = rt7Core;
    }

    // 0x1003f95d0
    Terrain::~Terrain() {
        field_8 = &PTR__Terrain_100efefa8;
        if (field_1680 != nullptr) {
            field_1680->GetLightProbeRenderer()->RecycleRenderingResources(field_864);
        }
        field_864.~LightProbe();
        field_832->~shared_ptr();
        field_808.~shared_ptr();
        field_704.~fixed_vector();
        field_600.~fixed_vector();
        m_waterHeights->~shared_ptr();
        field_560.~Array();
        field_456.~fixed_vector();
        field_416.~vector();
        field_344.~fixed_vector();
        field_328.~shared_ptr();
        field_312.~shared_ptr();
        field_296.~shared_ptr();
    }

    // 0x1003f97c0
    void Terrain::Build(AssetBuilder* assetBuilder, int arg2, ConfigProvider* configProvider) {
        bool cVar1 = GetTargetLOD();
        if (cVar1) {
            SetTargetLOD(0);
        }
        cVar1 = GetNumTilesPerRow();
        char cVar2 = GetTargetLOD();
        if (cVar1 != cVar2) {
            cVar1 = BuildTerrain(assetBuilder, arg2, configProvider);
            if (cVar1) {
                SetCurrentLOD(0);
                CreateCombinedLocalAABB();
            }
        }
    }

    // 0x1003f9840
    unsigned long Terrain::BuildTerrain(AssetBuilder* assetBuilder, int arg2, ConfigProvider* configProvider) {
        unsigned long arg1;
        LoginManager* this_01;
        World* this_02;
        Frustum* this_03;
        GraphNode* this_04;
        shared_ptr* psVar2;
        vector<graphics::TerrainPatchVertex>* terrainPatchVertexs;
        long lVar3;
        unique_ptr<graphics::TerrainPatch>* puVar4;
        shared_ptr<eastl::vector<eastl::vector<int>>>* psVar5;
        shared_ptr<eastl::vector<eastl::vector<unsigned char>>>* psVar6;
        vector<eastl::vector<int>>* pvVar7;
        vector<int>* pvVar8;
        int* piVar9;
        shared_ptr<BuildTerrainResultWaterData>* this_06;
        shared_ptr<BuildTerrainResultWaterData>* psVar10;
        shared_ptr<WaterType>* this_08;
        vector<unsigned short>* arg5;
        long lVar11;
        AABB* pAVar13;
        unsigned long arg1_00;
        int iVar14;
        unsigned long uVar15;
        bool bVar16;
        uint8_t local_2c0[24];
        BaseTemplateConfigTypeList<WaterType>* local_2a8;
        uint8_t* local_2a0;
        uint8_t local_298;
        vector<shared_ptr<eastl::vector<eastl::vector<unsigned char>>>,
               eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true>>* local_b8;
        Matrix44T<float>* local_b0;
        shared_ptr<eastl::vector<eastl::vector<unsigned char>>>* local_a8;
        array<shared_ptr<BuildTerrainResultLevelData>, 4ul>* local_a0;
        Matrix44T<float>* local_98;
        Matrix44T<float>* local_90;
        vector<std::unique_ptr<graphics::TerrainPatch>, eastl::fixed_vector_allocator<8ul, 4ul, 8ul, 0ul, true>>*
            local_88;
        shared_ptr<BuildTerrainMain>* local_80;
        uint8_t local_78[24];
        Matrix44T<float>* local_60[2];
        vector<shared_ptr<eastl::vector<eastl::vector<unsigned char>>>,
               eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true>>* local_50;
        shared_ptr* local_48;
        shared_ptr<BuildTerrainResultWaterData>* local_40;
        float local_34;

        uint8_t* this_00 = field_832;
        if (!(this_00->operator_cast_to_bool())) {
            local_60[0]._0_4_ = 9.18355e-41;
            this_02 = (World*)field_176.operator->();
            this_03 = (Frustum*)this_02->GetLastFrustum();
            this_04 = GetNode();
            pAVar13 = (AABB*)this_04->GetCursorMutex();
            if (this_03->TestIntersection(*pAVar13)) {
                local_60[0]._0_4_ = (float)((int)local_60[0]._0_4_ + 8);
            }
            if (arg2 < 2) {
                local_60[0]._0_4_ = (float)((int)local_60[0]._0_4_ + 4);
            } else if (arg2 < 4) {
                local_60[0]._0_4_ = (float)((int)local_60[0]._0_4_ + 2);
            }
            local_2c0[8] = field_66;
            if (field_65 < local_2c0[8]) {
                local_60[0]._0_4_ = (float)((int)local_60[0]._0_4_ - 2);
            }
            local_2c0._0_4_ = field_288;
            local_2c0._4_4_ = field_292;
            local_2c0._16_8_ = &field_296;
            local_2a8 = (BaseTemplateConfigTypeList<WaterType>*)&field_312;
            local_2a0 = &field_328;
            local_298 = field_448[0];
            bucket_make_shared<BuildTerrainMain, graphics::RT7Core*&, int&, TerrainInputData&>(
                (ReturnValue*)local_78, &field_1680, (int*)local_60, (TerrainInputData*)local_2c0);
            *this_00 = *local_78;
            field_848 = field_66;
            new (local_78) shared_ptr(this_00);
            assetBuilder->SubmitJob(*local_78);
        } else {
            local_80 = (shared_ptr<BuildTerrainMain>*)this_00;
            this_01 = (LoginManager*)**this_00;
            if (this_01->IsFinished()) {
                if (this_01->IsMissingData()) {
                    local_80->reset();
                    Destruct();
                    CreateCombinedLocalAABB();
                    uVar15 = (((uint64_t)((int64_t)((unsigned long)this_01 >> 8)) << 8) | (uint8_t)1);
                    goto LAB_1003f99ee;
                }
                if (this_01->IsSuccessful()) {
                    this_01->GetDevCredentialsOutputDirectory();
                    pAVar13 = (AABB*)local_78;
                    static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(
                        (shared_ptr<oldscape::ClientNpc>*)pAVar13);
                    if (!(pAVar13->operator_cast_to_bool())) {
                        m_heightZero = 1;
                    } else {
                        local_a0 = (array<shared_ptr<BuildTerrainResultLevelData>, 4ul>*)**local_78;
                        Destruct();
                        local_88 = (vector<std::unique_ptr<graphics::TerrainPatch>,
                                           eastl::fixed_vector_allocator<8ul, 4ul, 8ul, 0ul, true>>*)&field_344;
                        local_88->resize(4);
                        local_40 = (shared_ptr<BuildTerrainResultWaterData>*)&field_456;
                        local_40->resize(4);
                        local_50 = (vector<shared_ptr<eastl::vector<eastl::vector<unsigned char>>>,
                                           eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true>>*)&field_600;
                        local_50->resize(4);
                        local_b8 = (vector<shared_ptr<eastl::vector<eastl::vector<unsigned char>>>,
                                           eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true>>*)&field_704;
                        local_b8->resize(4);
                        local_48 = (shared_ptr*)m_waterHeights;
                        local_98 = (Matrix44T<float>*)&field_224;
                        local_b0 = (Matrix44T<float>*)&field_852;
                        local_a8 = (shared_ptr<eastl::vector<eastl::vector<unsigned char>>>*)&field_808;
                        local_34 = 0.0;
                        do {
                            psVar2 = (shared_ptr*)(*local_a0)[(unsigned long)(unsigned int)local_34];
                            if (!(shared_ptr::operator_cast_to_bool(psVar2))) {
                                if (((*local_88)[(unsigned long)(unsigned int)local_34])->operator_cast_to_bool()) {
                                    puVar4 = (unique_ptr<graphics::TerrainPatch>*)(*local_88)[(
                                        unsigned long)(unsigned int)local_34];
                                    puVar4->reset(nullptr);
                                }
                                psVar2 = (shared_ptr*)(*local_50)[(unsigned long)(unsigned int)local_34];
                                if (shared_ptr::operator_cast_to_bool(psVar2)) {
                                    psVar6 = (shared_ptr<eastl::vector<eastl::vector<unsigned char>>>*)(*local_50)[(
                                        unsigned long)(unsigned int)local_34];
                                    psVar6->reset();
                                }
                                if (local_34 == 0.0) {
                                    psVar2 = (shared_ptr*)(*local_40)[0];
                                    if (shared_ptr::operator_cast_to_bool(psVar2)) {
                                        psVar5 = (shared_ptr<eastl::vector<eastl::vector<int>>>*)(*local_40)[(
                                            unsigned long)(unsigned int)local_34];
                                        psVar5->reset();
                                    }
                                    if (shared_ptr::operator_cast_to_bool(local_48)) {
                                        local_48->reset();
                                    }
                                } else {
                                    psVar2 = (shared_ptr*)(*local_40)[(unsigned long)((int)local_34 - 1)];
                                    if (!(shared_ptr::operator_cast_to_bool(psVar2))) {
                                        psVar2 = (shared_ptr*)(*local_40)[(unsigned long)(unsigned int)local_34];
                                        if (shared_ptr::operator_cast_to_bool(psVar2)) {
                                            psVar5 = (shared_ptr<eastl::vector<eastl::vector<int>>>*)(*local_40)[(
                                                unsigned long)(unsigned int)local_34];
                                            psVar5->reset();
                                        }
                                    } else {
                                        psVar2 = (shared_ptr*)(*local_40)[(unsigned long)(unsigned int)local_34];
                                        if (!(shared_ptr::operator_cast_to_bool(psVar2))) {
                                            local_60[0] =
                                                (Matrix44T<float>*)(((uint64_t)local_60[0]._4_4_ << 32) | (uint32_t)66);
                                            make_shared<eastl::vector<eastl::vector<int>>, int>((ReturnValue*)local_2c0,
                                                                                                (int*)local_60);
                                            psVar5 = (shared_ptr<eastl::vector<eastl::vector<int>>>*)(*local_40)[(
                                                unsigned long)(unsigned int)local_34];
                                            *psVar5 = *local_2c0;
                                        } else {
                                            psVar5 = (shared_ptr<eastl::vector<eastl::vector<int>>>*)(*local_40)[(
                                                unsigned long)(unsigned int)local_34];
                                            pvVar7 = (vector<eastl::vector<int>>*)(*psVar5).operator->();
                                            pvVar7->resize(66);
                                        }
                                        psVar5 = (shared_ptr<eastl::vector<eastl::vector<int>>>*)(*local_40)[(
                                            unsigned long)(unsigned int)local_34];
                                        local_78._16_8_ = **psVar5;
                                        uVar15 = 0;
                                        do {
                                            pvVar8 = (vector<int>*)(*local_78._16_8_)[uVar15];
                                            pvVar8->resize(66);
                                            if (local_34 == 0.0) {
                                                pvVar7 = (vector<eastl::vector<int>>*)**local_48;
                                                pvVar8 = (vector<int>*)(*pvVar7)[uVar15];
                                                pvVar8->resize(66);
                                            }
                                            uVar15 = uVar15 + 1;
                                        } while (uVar15 != 66);
                                        uVar15 = 0;
                                        do {
                                            arg1 = uVar15 + 1;
                                            arg1_00 = 0;
                                            do {
                                                GetTileHeight(*local_2c0, (int)local_34 - 1, (int)uVar15, (int)arg1_00,
                                                              true, 0);
                                                iVar14 = local_2c0._0_4_ + 960;
                                                pvVar8 = (vector<int>*)(*local_78._16_8_)[arg1];
                                                arg1_00 = arg1_00 + 1;
                                                piVar9 = (int*)(*pvVar8)[arg1_00];
                                                *piVar9 = iVar14;
                                            } while (arg1_00 != 64);
                                            uVar15 = arg1;
                                        } while (arg1 != 64);
                                    }
                                }
                            } else {
                                terrainPatchVertexs = (vector<graphics::TerrainPatchVertex>*)**psVar2;
                                lVar3 = ((terrainPatchVertexs + 96))->size();
                                if (lVar3 != 0) {
                                    local_60[0] = local_98;
                                    local_90 = local_b0;
                                    std::make_unique<
                                        graphics::TerrainPatch, unsigned int&, math::AABB&,
                                        eastl::vector<graphics::TerrainPatchVertex>&,
                                        eastl::vector<graphics::TerrainPatchVertexPos>&, int&, int&, int&,
                                        shared_ptr<graphics::TextureAtlasReference>&,
                                        eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true,
                                                              eastl::hash<int>, eastl::equal_to<int>, false>&,
                                        math::Matrix44T<float>*, float*>(
                                        *local_2c0, local_34, *terrainPatchVertexs, *((terrainPatchVertexs + 96)),
                                        *((terrainPatchVertexs + 128)), *((terrainPatchVertexs + 160)),
                                        *((terrainPatchVertexs + 164)), *((terrainPatchVertexs + 12656)),
                                        *((terrainPatchVertexs + 12640)), *((terrainPatchVertexs + 168)), *local_60);
                                    puVar4 = (unique_ptr<graphics::TerrainPatch>*)(*local_88)[(
                                        unsigned long)(unsigned int)local_34];
                                    *puVar4 = *local_2c0;
                                }
                                psVar5 = (shared_ptr<eastl::vector<eastl::vector<int>>>*)(*local_40)[(
                                    unsigned long)(unsigned int)local_34];
                                *psVar5 = (*((terrainPatchVertexs + 32)));
                                if (local_34 == 0.0) {
                                    *local_48 = (*((terrainPatchVertexs + 48)));
                                    *local_a8 = (*((terrainPatchVertexs + 80)));
                                }
                                psVar6 = (shared_ptr<eastl::vector<eastl::vector<unsigned char>>>*)(*local_50)[(
                                    unsigned long)(unsigned int)local_34];
                                *psVar6 = (*((terrainPatchVertexs + 64)));
                                psVar6 = (shared_ptr<eastl::vector<eastl::vector<unsigned char>>>*)(*local_b8)[(
                                    unsigned long)(unsigned int)local_34];
                                psVar6->swap(*((terrainPatchVertexs + 12624)));
                            }
                            local_34 = (float)((int)local_34 + 1);
                        } while ((unsigned int)local_34 < 4);
                        pAVar13 = (AABB*)(local_a0 + 64);
                        this_06 = (shared_ptr<BuildTerrainResultWaterData>*)pAVar13->HeapBeginPtr();
                        psVar10 = (shared_ptr<BuildTerrainResultWaterData>*)pAVar13->end();
                        if (this_06 != psVar10) {
                            local_50 = (vector<shared_ptr<eastl::vector<eastl::vector<unsigned char>>>,
                                               eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true>>*)&field_328;
                            local_48 = (shared_ptr*)&field_416;
                            local_78._16_8_ = &field_1680;
                            local_40 = psVar10;
                            do {
                                if (!(((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)(*this_06)
                                           .operator->())
                                          ->empty())) {
                                    lVar3 = (*this_06).operator->();
                                    this_08 = configProvider->GetConfig<WaterType>(*(int*)(lVar3 + 96), nullptr);
                                    if (!(((AnimationWrapper*)(*this_08).operator->())->IsReadyAnim())) {
                                        **local_50;
                                    } else {
                                        **this_08;
                                    }
                                    lVar3 = (*this_06).operator->();
                                    local_34 = (float)(((uint32_t)local_34._1_3_ << 8) | (uint8_t)1);
                                    local_2c0->operator_cast_to_WaterPatchConfig();
                                    arg5 = (vector<unsigned short>*)(*this_06).operator->();
                                    lVar11 = (*this_06).operator->();
                                    pAVar13 = (AABB*)(lVar3 + 64);
                                    local_90 = local_98;
                                    local_60->MakeShared<graphics::RT7Core*&, math::AABB&, bool,
                                                         graphics::WaterPatchConfig, eastl::vector<unsigned short>,
                                                         eastl::vector<graphics::WaterPatchVertex>,
                                                         math::Matrix44T<float>*>(
                                        local_78._16_8_, pAVar13, &local_34, local_2c0, arg5, (lVar11 + 32), &local_90);
                                    local_48->push_back(*local_60);
                                    psVar10 = local_40;
                                }
                                this_06 = this_06 + 16;
                            } while (this_06 != psVar10);
                        }
                    }
                    local_80->reset();
                    field_824 = FrameTime::GetCurrentTimeMS();
                    field_852 = -1.0;
                    m_hasFade = 1;
                    bVar16 = field_848 == field_66;
                    uVar15 = (((uint64_t)((int64_t)((unsigned long)pAVar13 >> 8)) << 8) | (uint8_t)bVar16);
                    if (bVar16) {
                        CreateCombinedLocalAABB();
                    }
                    goto LAB_1003f99ee;
                }
                local_80->reset();
            }
        }
        uVar15 = 0;
    LAB_1003f99ee:
        return uVar15 & 4294967295;
    }

    // 0x1003fa130
    void Terrain::CreateCombinedLocalAABB() {
        NXTPixToolkit* pNVar1;
        AABB* pAVar2;

        uint8_t* this_00 = &field_192;
        this_00->Reset();
        auto this_01 = field_344.HeapBeginPtr();
        auto puVar4 = field_344.end();
        for (; this_01 != puVar4; this_01 = this_01 + 8) {
            if (std::unique_ptr::operator_cast_to_bool(this_01)) {
                pNVar1 = (NXTPixToolkit*)(*this_01).operator->();
                pAVar2 = (AABB*)pNVar1->GetScreen();
                this_00->Union(*pAVar2);
            }
        }
        auto this_02 = field_416.HeapBeginPtr();
        auto psVar5 = field_416.end();
        for (; this_02 != psVar5; this_02 = this_02 + 16) {
            pNVar1 = (NXTPixToolkit*)(*this_02).operator->();
            pAVar2 = (AABB*)pNVar1->GetScreen();
            this_00->Union(*pAVar2);
        }
        if (!(this_00->IsValid())) {
            RemoveAABB();
        } else {
            SetAABB(*this_00);
        }
    }

    // 0x1003fa9d0
    uint8_t* Terrain::GetTileHeight(int& arg1, int arg2, int arg3, int arg4, bool arg5,
                                    HeightOffsetType heightOffsetType) const {
        uint8_t* arg1_00;
        bool bVar1;
        bool cVar2;
        int iVar3;
        vector<eastl::vector<int>>* pvVar4;
        vector<int>* pvVar5;
        int* piVar6;
        shared_ptr<eastl::vector<eastl::vector<int>>>* this_01;
        uint8_t** ppuVar7;
        int local_34;

        arg1 = -1;
        if (m_heightZero == '\0') {
            arg1_00 = &field_456;
            local_34 = arg2;
            bVar1 =
                ArrayValidPosition<eastl::fixed_vector<shared_ptr<eastl::vector<eastl::vector<unsigned char>>>, 4ul>,
                                   int>((fixed_vector<shared_ptr<eastl::vector<eastl::vector<int>> _>, _4ul>*)arg1_00,
                                        &local_34);
            ppuVar7 = &DataStatus::MISSING;
            if (!bVar1)
                goto LAB_1003fab2d;
            if ((arg5) && (local_34 == 0)) {
                cVar2 = m_waterHeights->operator_cast_to_bool();
                if (!cVar2)
                    goto LAB_1003fab2d;
                pvVar4 = (vector<eastl::vector<int>>*)**m_waterHeights;
                pvVar5 = (vector<int>*)(*pvVar4)[(long)(arg3 + 1)];
                piVar6 = (int*)(*pvVar5)[(long)(arg4 + 1)];
                arg1 = *piVar6;
            } else {
                cVar2 = ((*arg1_00)[(long)local_34])->operator_cast_to_bool();
                if (!cVar2)
                    goto LAB_1003fab2d;
                this_01 = (shared_ptr<eastl::vector<eastl::vector<int>>>*)(*arg1_00)[(long)local_34];
                pvVar4 = (vector<eastl::vector<int>>*)**this_01;
                pvVar5 = (vector<int>*)(*pvVar4)[(long)(arg3 + 1)];
                piVar6 = (int*)(*pvVar5)[(long)(arg4 + 1)];
                arg1 = *piVar6;
            }
            if (heightOffsetType == 0) {
                ppuVar7 = &DataStatus::READY;
                goto LAB_1003fab2d;
            }
            iVar3 = GetLocationHeightOffset(local_34, arg3, arg4, heightOffsetType);
            iVar3 = iVar3 + arg1;
            ppuVar7 = &DataStatus::READY;
        } else {
            ppuVar7 = &DataStatus::MISSING;
            iVar3 = 0;
        }
        arg1 = iVar3;
    LAB_1003fab2d:
        return *ppuVar7;
    }

    // 0x1003fad70
    void Terrain::GetTerrainData(shared_ptr<PacketT<Array<unsigned char>>>& arg1,
                                 Js5ResourceProvider* js5ResourceProvider, int arg3, int arg4) {
        Logger* pLVar2;
        LogStream local_c8;

        auto puVar1 = js5ResourceProvider->GetFile(arg1, *(Js5Archive::JS5_MAPS), arg4 << 7 | arg3, 5,
                                                   (Priority*)Priority::HIGH, true, false, false);
        if (puVar1 == DataStatus::MISSING) {
            pLVar2 = logger::default_logger();
            local_c8 = logger::LogStream(LOGGER_SCENE);
            ((uint8_t)pLVar2)
                ->Log(nullptr, (LogLevel)&local_c8, 3, 14423086, 350, "TerrainData [%ix%i] missing", arg3, arg4);
        }
        return puVar1;
    }

    // 0x1003fae90
    void Terrain::PreventFadeIn() {
        if (m_hasFade != '\0') {
            field_852 = 0.0;
            m_hasFade = 0;
        }
    }

    // 0x1003faeb0
    void Terrain::Destruct() {
        field_344.clear();
        field_456.clear();
        m_waterHeights->reset();
        field_600.clear();
    }

    // 0x1003faf30
    void Terrain::MainLogic(graphics::RT7Core& rt7Core, unsigned int arg2, const math::Matrix44T<float>& matrix44) {
        long lVar1;
        float fVar3;

        if ((m_hasFade != '\0') && (field_852 <= 0.0 && field_852 != 0.0)) {
            lVar1 = FrameTime::GetCurrentTimeMS();
            fVar3 = (float)(unsigned long)(lVar1 - field_824) * 0.0033333334f - 1.0;
            field_852 = fVar3;
            if (0.0 <= fVar3) {
                m_hasFade = 0;
                field_852 = 0.0;
            }
        }
        auto this_00 = field_416.HeapBeginPtr();
        auto psVar2 = field_416.end();
        for (; this_00 != psVar2; this_00 = this_00 + 16) {
            ((WaterPatch*)(*this_00).operator->())->SetFade(field_852);
        }
        UpdateIrradiance();
    }

    // 0x1003fb050
    void Terrain::UpdateIrradiance() {
        unsigned int uVar1;
        unsigned int* puVar7;
        unique_ptr* this_03;
        TerrainPatch* this_04;
        unsigned long arg1;
        IrradianceSHCoefConsts local_a8;

        uint8_t* this_00 = &field_176;
        World* pWVar5 = (World*)(*this_00).operator->();
        auto this_01 = pWVar5->GetMapSquare(field_288, field_292);
        pWVar5 = (World*)(*this_00).operator->();
        int iVar4 = pWVar5->GetMaxRenderLevel();
        pWVar5 = (World*)(*this_00).operator->();
        auto piVar6 = pWVar5->GetCentreSquarePosition();
        if (GetNumTilesPerRow() < 3) {
            if ((*piVar6 - 1 <= (int)field_288) && ((int)field_288 <= *piVar6 + 1)) {
                if ((piVar6[1] - 1 <= (int)field_292) && ((int)field_292 <= piVar6[1] + 1))
                    goto LAB_1003fb0c7;
            }
        }
        iVar4 = 0;
    LAB_1003fb0c7:
        if (!(field_344.empty())) {
            local_a8.field_0 = iVar4 + 1;
            puVar7 = (unsigned int*)std::min<int>(local_a8, *((int*)&constants::MapConstants::LEVELS));
            uVar1 = *puVar7;
            local_a8 = ((MapSquare*)(*this_01).operator->())->GetIrradianceSHConsts();
            if (0 < (int)uVar1) {
                arg1 = 0;
                do {
                    this_03 = &field_344[arg1];
                    if (std::unique_ptr::operator_cast_to_bool(this_03)) {
                        this_04 = (TerrainPatch*)(*this_03).operator->();
                        ((IrradianceEffect*)this_04->GetIrradianceEffect())->SetCoefficients(local_a8);
                    }
                    arg1 = arg1 + 1;
                } while (uVar1 != arg1);
            }
        }
    }

    // 0x1003fb200
    void Terrain::GatherDrawableElements(graphics::DrawableQueue& drawableQueue, graphics::RT7Core& rt7Core,
                                         const math::Matrix44T<float>& matrix44,
                                         const graphics::SceneViewData& sceneViewData,
                                         const graphics::EffectManager& effectManager) {
        uint8_t* this_00;
        bool arg6;
        bool cVar2;
        uint8_t arg5;
        bool bVar3;
        int iVar4;
        World* pWVar5;
        uint64_t* puVar6;
        Terrain* this_01;
        TerrainPatch* pTVar7;
        shared_ptr<graphics::WaterPatch>* this_02;
        shared_ptr<graphics::WaterPatch>* psVar8;
        long* plVar9;
        unsigned long arg1;
        uint32_t in_stack_fffffffffffffd0c;
        uint32_t local_2b0;
        bool local_28a;
        bool local_289;
        uint8_t local_288[296];
        fixed_vector<unsigned char, 256ul> local_160;

        char cVar1 = CanRender();
        if (cVar1) {
            field_224 = matrix44;
            this_00 = &field_176;
            pWVar5 = (World*)(*this_00).operator->();
            pWVar5->GetCentreSquarePosition();
            pWVar5 = (World*)(*this_00).operator->();
            pWVar5->GetMaxRenderLevel();
            GetNumTilesPerRow();
            local_28a = true;
            arg6 = (bool)sceneViewData.HasRenderPass(5);
            local_2b0 = 0;
            if (arg6 != false) {
                local_2b0 = 0;
                puVar6 = &sceneViewData.field_520[0];
                iVar4 = (*puVar6)->GetPos();
                if (iVar4 == 5) {
                    puVar6 = &sceneViewData.field_520[0];
                    local_2b0 = (*puVar6)->GetLevel();
                }
            }
            cVar1 = '\x01';
            if (arg6 == false) {
                cVar1 = sceneViewData.HasShadowPass();
            }
            if (!cVar1) {
                cVar2 = sceneViewData.HasRenderPass(4);
                arg5 = true;
                if (!cVar2) {
                    arg5 = sceneViewData.HasRenderPass(2);
                }
            } else {
                arg5 = false;
            }
            if ((!cVar1) && (cVar1 = sceneViewData.HasRenderPass(3), !cVar1)) {
                sceneViewData.HasRenderPass(9);
            }
            arg1 = 0;
            do {
                this_01 = &field_344[arg1];
                cVar1 = this_01->operator_cast_to_bool();
                if (cVar1) {
                    local_289 = false;
                    local_160 = eastl::fixed_vector<unsigned char, 256ul>();
                    bVar3 = (bool)**this_01;
                    iVar4 = **this_00;
                    CalculateRemoveRoofChunks(
                        (Terrain*)local_288, (bool*)this, &local_289, (TerrainPatch*)&local_28a, bVar3, (bool)arg5,
                        arg6, false, 0, (int)arg1,
                        (World*)(((uint64_t)in_stack_fffffffffffffd0c << 32) | (uint32_t)local_2b0), iVar4);
                    local_160 = *local_288;
                    if (local_289 == false) {
                        pTVar7 = (TerrainPatch*)(*this_01).operator->();
                        pTVar7->GatherDrawableElements(drawableQueue, rt7Core, sceneViewData, effectManager, local_160);
                    }
                    bVar3 = local_28a;
                    pTVar7 = (TerrainPatch*)**this_01;
                    DebugShowPrimitiveTerrainPatchWhole(this_01, (bool)arg5, bVar3, pTVar7, (int)arg1);
                }
                arg1 = arg1 + 1;
            } while (arg1 != 4);
            this_02 = (shared_ptr<graphics::WaterPatch>*)field_416.HeapBeginPtr();
            psVar8 = (shared_ptr<graphics::WaterPatch>*)field_416.end();
            for (; this_02 != psVar8; this_02 = this_02 + 16) {
                plVar9 = (long*)(*this_02).operator->();
                (**(void (**)(...))(*plVar9 + 16))(plVar9, drawableQueue, rt7Core, sceneViewData, effectManager);
            }
            field_864.GatherDrawableElements(drawableQueue, rt7Core, sceneViewData, effectManager);
        }
    }

    // 0x1003fb690
    Terrain* Terrain::CalculateRemoveRoofChunks(bool& arg1, bool& arg2, graphics::TerrainPatch& terrainPatch, bool arg4,
                                                bool arg5, bool arg6, bool arg7, int arg8, int arg9, World& world,
                                                int arg11) {
        bool arg1_00;
        int iVar1;
        bool cVar2;
        uint8_t uVar3;
        int iVar4;
        hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*
            this_00;
        pair<int const, graphics::RenderChunk>* ppVar5;
        int* piVar6;
        unsigned long uVar7;
        char* pcVar8;
        unsigned int uVar9;
        unsigned int arg1_01;
        unsigned int uVar10;
        unsigned int uVar11;
        uint64_t in_register_00000081;
        bool bVar12;
        unsigned int uVar13;
        unsigned long uVar14;
        uint32_t in_stack_00000034;
        int in_stack_00000038;
        uint8_t local_f0[16];
        uint8_t local_e0[24];
        Rect<int>* local_c0;
        pair<int, graphics::RenderChunk> local_b8;
        RemoveRoof* local_98;
        unsigned long local_80;
        unsigned long local_70;
        uint8_t local_68[16];
        unsigned long local_58;
        unsigned long local_50;
        unsigned long local_48;
        pair<int const, graphics::RenderChunk>* local_38;

        TerrainPatch* local_78 = (TerrainPatch*)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4);
        bool* local_c8 = arg2;
        TerrainPatch* local_88 = terrainPatch;
        new (this) eastl::fixed_vector<unsigned char, 256ul>();
        if (arg6) {
            if (arg9 == 0) {
                return this;
            }
            if ((int)world < arg9) {
                local_b8[0] = (pair<int, graphics::RenderChunk>)0;
                push_back(local_b8);
                return this;
            }
            return this;
        }
        if (!arg5) {
            return this;
        }
        if (arg9 < 1) {
            local_b8[0] = (pair<int, graphics::RenderChunk>)0;
            push_back(local_b8);
        } else {
            local_98 = (RemoveRoof*)((World*)(((uint64_t)in_stack_00000034 << 32) | (uint32_t)arg11))->GetRemoveRoof();
            cVar2 = local_98->AnyRoofRemoved();
            if (!cVar2) {
                cVar2 = ((World*)(((uint64_t)in_stack_00000034 << 32) | (uint32_t)arg11))->IsRemoveRoofSelective();
                if (cVar2)
                    goto LAB_1003fbb56;
            }
            this_00 = (hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                 eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                 eastl::prime_rehash_policy, false, true, true>*)local_78->GetRenderChunks();
            local_c0 = (Rect<int>*)local_98->GetBoundsForLevel(arg9);
            local_68 = this_00->begin();
            local_f0 = this_00->end();
            local_70 = 0;
            while (true) {
                cVar2 = *local_68 != *local_f0;
                if (!cVar2)
                    break;
                ppVar5 = (pair<int const, graphics::RenderChunk>*)local_68->HeapBeginPtr();
                if (*(unsigned int*)ppVar5 == 0) {
                    local_b8[0] = (pair<int, graphics::RenderChunk>)0;
                    push_back(local_b8);
                } else if ((0 < (int)*(unsigned int*)ppVar5) && (0 < (int)*(unsigned int*)(ppVar5 + 12))) {
                    uVar10 = *(unsigned int*)(ppVar5 + 16);
                    uVar13 = *(unsigned int*)(ppVar5 + 20);
                    uVar9 = uVar10 + 63;
                    if (-1 < (int)uVar10) {
                        uVar9 = uVar10;
                    }
                    arg1_01 = (int)uVar10 % 64 | (((int)uVar9 >> 6) + ((Terrain*)arg1)->field_288) * 64;
                    uVar10 = *(unsigned int*)(ppVar5 + 24);
                    uVar9 = uVar10 + 63;
                    if (-1 < (int)uVar10) {
                        uVar9 = uVar10;
                    }
                    uVar9 = (int)uVar10 % 64 | (((int)uVar9 >> 6) + ((Terrain*)arg1)->field_292) * 64;
                    local_58 = (unsigned long)uVar9;
                    uVar10 = uVar13 + 63;
                    if (-1 < (int)uVar13) {
                        uVar10 = uVar13;
                    }
                    uVar11 = (int)uVar13 % 64 | (((int)uVar10 >> 6) + ((Terrain*)arg1)->field_288) * 64;
                    local_48 = (unsigned long)uVar11;
                    uVar10 = *(unsigned int*)(ppVar5 + 28);
                    uVar13 = uVar10 + 63;
                    if (-1 < (int)uVar10) {
                        uVar13 = uVar10;
                    }
                    uVar10 = (int)uVar10 % 64 | (((int)uVar13 >> 6) + ((Terrain*)arg1)->field_292) * 64;
                    local_50 = (unsigned long)uVar10;
                    local_38 = ppVar5;
                    new (local_e0)
                        oldscape::dash3d::GridRect(arg1_01, uVar9, (uVar11 - arg1_01) + 1, (uVar10 - uVar9) + 1);
                    piVar6 = (int*)local_e0->second();
                    if (*piVar6 < 0) {
                    LAB_1003fb8cc:
                        LogAssert("rect.Width() >= 0 && rect.Height() >= 0",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "scene/entities/Terrain.cpp",
                                  1070, nullptr);
                    }
                    piVar6 = (int*)local_e0->qw();
                    if (*piVar6 < 0)
                        goto LAB_1003fb8cc;
                    cVar2 = ((World*)(((uint64_t)in_stack_00000034 << 32) | (uint32_t)arg11))->IsRemoveRoofSelective();
                    local_80 = (unsigned long)arg1_01;
                    if (!cVar2) {
                    LAB_1003fb912:
                        local_e0._16_8_ =
                            ((World*)(((uint64_t)in_stack_00000034 << 32) | (uint32_t)arg11))->GetLinkMap();
                        iVar4 = local_e0._16_8_->GetTileLinkZero(1, arg1_01, (int)local_58);
                        iVar4 = ((iVar4 << 30) >> 31) + arg9;
                        uVar7 =
                            ((World*)(((uint64_t)in_stack_00000034 << 32) | (uint32_t)arg11))->IsRemoveRoofSelective();
                        if ((char)uVar7 == '\0') {
                            bVar12 = in_stack_00000038 < iVar4;
                        } else {
                            uVar7 = local_80;
                            if ((int)local_48 < (int)local_80) {
                                bVar12 = false;
                            } else {
                                iVar1 = (int)local_50;
                                bVar12 = false;
                                do {
                                    uVar14 = local_58 & 4294967295;
                                    uVar10 = (unsigned int)uVar7;
                                    if ((int)local_58 <= (int)local_50) {
                                        do {
                                            uVar13 = (unsigned int)uVar14;
                                            cVar2 = local_98->IsRoofRemoved(iVar4, uVar10, uVar13);
                                            if (cVar2) {
                                                uVar9 = local_e0._16_8_->GetRemoveRoofID(arg9, uVar10, uVar13);
                                                if (uVar9 == *(unsigned int*)local_38) {
                                                    bVar12 = true;
                                                    uVar10 = (unsigned int)local_48;
                                                    break;
                                                }
                                            }
                                            uVar14 = (unsigned long)(uVar13 + 1);
                                        } while (iVar1 + 1U != uVar13 + 1);
                                    }
                                    uVar7 = (unsigned long)(uVar10 + 1);
                                } while ((int)uVar10 < (int)local_48);
                            }
                        }
                        bVar12 = !bVar12;
                        if (bVar12) {
                            if (255 < *(unsigned int*)local_38) {
                                LogAssert(
                                    "chunkPair.first <= std::numeric_limits<uint8>::max() && chunkPair.first >= 0",
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/scene/entities/Terrain.cpp",
                                    1151, nullptr);
                            }
                            local_b8[0] = *(pair<int, graphics::RenderChunk>*)local_38;
                            push_back(local_b8);
                            bVar12 = true;
                        } else {
                            local_70 = (((uint64_t)((int64_t)(uVar7 >> 8)) << 8) | (uint8_t)1);
                        }
                    } else {
                        cVar2 = local_e0->Intersects(*local_c0);
                        if (cVar2)
                            goto LAB_1003fb912;
                        if (255 < *(unsigned int*)local_38) {
                            LogAssert("chunkPair.first <= std::numeric_limits<uint8>::max() && chunkPair.first >= 0",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/scene/entities/Terrain.cpp",
                                      1078, nullptr);
                        }
                        local_b8[0] = *(pair<int, graphics::RenderChunk>*)local_38;
                        push_back(local_b8);
                        bVar12 = true;
                        iVar4 = arg9;
                    }
                    arg1_00 = *(bool*)&local_88->_vptr;
                    local_b8.pair<int const, graphics::RenderChunk, void>(*local_38);
                    uVar3 = DebugShowPrimitiveTerrainPatch((Terrain*)arg1, arg1_00, local_78, &local_b8, arg9, iVar4,
                                                           (Rect<int>*)local_e0, (int)local_80, (int)local_58,
                                                           (int)local_48, (int)local_50, bVar12);
                    *(uint8_t*)&local_88->_vptr = uVar3;
                    this = this;
                }
                ++*local_68;
            }
            if ((local_70 & 1) != 0) {
                cVar2 = empty();
                if (cVar2) {
                    *local_c8 = true;
                }
            }
        }
    LAB_1003fbb56:
        cVar2 = empty();
        if (!cVar2) {
            pcVar8 = (char*)front();
            if (*pcVar8 != '\0') {
                local_b8[0] = (pair<int, graphics::RenderChunk>)0;
                push_back(local_b8);
            }
        }
        return this;
    }

    // 0x1003fbc50
    void Terrain::DebugShowPrimitiveTerrainPatchWhole(bool arg1, bool arg2, graphics::TerrainPatch& terrainPatch,
                                                      int arg4) {
        unsigned int uVar2;
        unsigned int uVar3;
        uint32_t uVar4;
        uint32_t uVar5;
        vector<graphics::TerrainPatchVertex>* this_01;
        Vector3T<short>* vector3;
        float* pfVar6;
        long* plVar7;
        char* str;
        eastl::string local_1c0;
        uint64_t local_1a0[2];
        uint8_t local_188[12];
        Layout local_17c;
        float local_16c;
        fixed_string<char, 256> local_168;

        if (((m_debugPrimitiveText != '\0') && (arg1)) && (arg2)) {
            if (((vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)
                     terrainPatch.GetVertexDataBuffer())
                    ->empty() == '\0') {
                this_01 = (vector<graphics::TerrainPatchVertex>*)terrainPatch.GetVertexDataBuffer();
                vector3 = (Vector3T<short>*)(*this_01)[0];
                local_1a0[0] = math::Vector3FromVector3T<short>(*vector3);
                pfVar6 = (float*)local_1a0->SSOBeginPtr();
                *pfVar6 = *pfVar6 + 16383.0;
                pfVar6 = (float*)local_1a0->second();
                *pfVar6 = *pfVar6 + 16383.0;
                local_168.GetWorldTransform();
                *local_1a0 *= &local_168;
                new ((local_188 + 8)) CoordFine(arg4, local_1a0);
                local_168 = eastl::fixed_string<char, 256>();
                uVar2 = ((local_188 + 8))->GetMapSquareX();
                uVar3 = ((local_188 + 8))->GetMapSquareZ();
                uVar4 = ((local_188 + 8))->GetLocalX();
                uVar5 = ((local_188 + 8))->GetLocalZ();
                local_168.sprintf("TerrainPatch:%p @ %d,%d,%d,%d,%d", terrainPatch, (unsigned long)(unsigned int)arg4,
                                  (unsigned long)uVar2, (unsigned long)uVar3, uVar4, uVar5);
                uVar2 = stringtools::hash32<eastl::fixed_string<char, 256>>(local_168);
                local_16c = (float)((int)uVar2 % 100);
                pfVar6 = (float*)local_17c.SSOBeginPtr();
                *pfVar6 = *pfVar6 + local_16c;
                pfVar6 = (float*)local_17c.y();
                *pfVar6 = *pfVar6 + local_16c;
                pfVar6 = (float*)local_17c.second();
                *pfVar6 = local_16c + *pfVar6;
                plVar7 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar7 != nullptr) {
                    str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    local_1c0 = eastl::string(str);
                    new (local_188) oldscape::sidebars::SideBarData(-8323200, 0);
                    (**(void (**)(...))(*plVar7 + 136))(plVar7, &local_17c, &local_1c0, local_188);
                }
            }
        }
    }

    // 0x1003fbf20
    void Terrain::AllocateLocationHeightOffsets(int arg1) {
        array<std::array<HeightOffset, 64ul>, 64ul>* this_00;
        array<HeightOffset, 64ul>* this_01;
        unsigned long arg1_00;
        unsigned long arg1_01;
        uint32_t local_38[2];

        uint8_t* this_02 = &field_560;
        if (this_02->empty() != '\0') {
            arg1_00 = 0;
            this_02->set_max_size(4, 0);
            do {
                this_00 = (array<std::array<HeightOffset, 64ul>, 64ul>*)(*this_02)[arg1_00];
                arg1_01 = 0;
                do {
                    this_01 = (array<HeightOffset, 64ul>*)(*this_00)[arg1_01];
                    local_38[0] = 0;
                    this_01->fill(*local_38);
                    arg1_01 = arg1_01 + 1;
                } while (arg1_01 != 64);
                arg1_00 = arg1_00 + 1;
            } while (arg1_00 != 4);
        }
        (*this_02)[(long)arg1];
    }

    // 0x1003fc1e0
    void Terrain::ImportHeightAdjustments(const Terrain& terrain) {
        int iVar1;
        array<std::array<HeightOffset, 64ul>, 64ul>* this_00;
        array<std::array<HeightOffset, 64ul>, 64ul>* this_01;
        array<HeightOffset, 64ul>* this_02;
        array<HeightOffset, 64ul>* this_03;
        uint32_t* puVar2;
        uint32_t* puVar3;
        unsigned long arg1_00;
        unsigned long arg1_01;

        unsigned long arg1 = 0;
        do {
            iVar1 = terrain.field_560.end();
            if ((long)arg1 < (long)iVar1) {
                this_00 = &terrain.field_560[arg1];
                this_01 = (array<std::array<HeightOffset, 64ul>, 64ul>*)AllocateLocationHeightOffsets((int)arg1);
                arg1_01 = 0;
                do {
                    this_02 = (array<HeightOffset, 64ul>*)(*this_01)[arg1_01];
                    this_03 = (array<HeightOffset, 64ul>*)(*this_00)[arg1_01];
                    arg1_00 = 0;
                    do {
                        puVar2 = (uint32_t*)(*this_03)[arg1_00];
                        puVar3 = (uint32_t*)(*this_02)[arg1_00];
                        *puVar3 = *puVar2;
                        arg1_00 = arg1_00 + 1;
                    } while (arg1_00 != 64);
                    arg1_01 = arg1_01 + 1;
                } while (arg1_01 != 64);
            }
            arg1 = arg1 + 1;
        } while (arg1 != 4);
    }

    // 0x1003fc390
    void Terrain::AddLocationHeightOffset(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7) {
        bool bVar1;
        array<std::array<HeightOffset, 64ul>, 64ul>* this_00;
        array<HeightOffset, 64ul>* this_01;
        short* psVar3;
        unsigned long arg1_00;
        unsigned long arg1_01;

        if (arg6 != 0 || arg7 != 0) {
            if (constants::MapConstants::IsValidLevel(arg1) != '\0') {
                if ((short)arg6 != arg6) {
                    LogAssert("offsetGroundDecor >= std::numeric_limits<int16>::min() && offsetGroundDecor <= "
                              "std::numeric_limits<int16>::max()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/entities/Terrain.cpp",
                              543, nullptr);
                }
                if ((short)arg7 != arg7) {
                    LogAssert("offsetModel >= std::numeric_limits<int16>::min() && offsetModel <= "
                              "std::numeric_limits<int16>::max()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/entities/Terrain.cpp",
                              544, nullptr);
                }
                this_00 = (array<std::array<HeightOffset, 64ul>, 64ul>*)AllocateLocationHeightOffsets(arg1);
                if (0 < arg6) {
                    arg7 = 0;
                }
                if ((0 < arg4) && (arg2 < 64)) {
                    arg1_01 = (long)arg2;
                    do {
                        this_01 = (array<HeightOffset, 64ul>*)(*this_00)[arg1_01];
                        if (0 < arg5 && arg3 < 64) {
                            arg1_00 = (long)arg3;
                            do {
                                psVar3 = (short*)(*this_01)[arg1_00];
                                *psVar3 = *psVar3 + (short)arg6;
                                psVar3[1] = psVar3[1] + (short)arg7;
                                if ((long)(arg5 + arg3) <= (long)(arg1_00 + 1))
                                    break;
                                bVar1 = (long)arg1_00 < 63;
                                arg1_00 = arg1_00 + 1;
                            } while (bVar1);
                        }
                    } while (((long)(arg1_01 + 1) < (long)(arg4 + arg2)) &&
                             (bVar1 = (long)arg1_01 < 63, arg1_01 = arg1_01 + 1, bVar1));
                }
            }
        }
    }

    // 0x1003fc500
    void Terrain::RemoveLocationHeightOffset(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7) {
        bool bVar1;
        array<std::array<HeightOffset, 64ul>, 64ul>* this_00;
        array<HeightOffset, 64ul>* this_01;
        short* psVar3;
        unsigned long arg1_00;
        unsigned long arg1_01;

        if (arg6 != 0 || arg7 != 0) {
            if (constants::MapConstants::IsValidLevel(arg1) != '\0') {
                if ((short)arg6 != arg6) {
                    LogAssert("offsetGroundDecor >= std::numeric_limits<int16>::min() && offsetGroundDecor <= "
                              "std::numeric_limits<int16>::max()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/entities/Terrain.cpp",
                              572, nullptr);
                }
                if ((short)arg7 != arg7) {
                    LogAssert("offsetModel >= std::numeric_limits<int16>::min() && offsetModel <= "
                              "std::numeric_limits<int16>::max()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/entities/Terrain.cpp",
                              573, nullptr);
                }
                this_00 = (array<std::array<HeightOffset, 64ul>, 64ul>*)AllocateLocationHeightOffsets(arg1);
                if (0 < arg6) {
                    arg7 = 0;
                }
                if ((0 < arg4) && (arg2 < 64)) {
                    arg1_01 = (long)arg2;
                    do {
                        this_01 = (array<HeightOffset, 64ul>*)(*this_00)[arg1_01];
                        if (0 < arg5 && arg3 < 64) {
                            arg1_00 = (long)arg3;
                            do {
                                psVar3 = (short*)(*this_01)[arg1_00];
                                *psVar3 = *psVar3 - (short)arg6;
                                psVar3[1] = psVar3[1] - (short)arg7;
                                if ((long)(arg5 + arg3) <= (long)(arg1_00 + 1))
                                    break;
                                bVar1 = (long)arg1_00 < 63;
                                arg1_00 = arg1_00 + 1;
                            } while (bVar1);
                        }
                    } while (((long)(arg1_01 + 1) < (long)(arg4 + arg2)) &&
                             (bVar1 = (long)arg1_01 < 63, arg1_01 = arg1_01 + 1, bVar1));
                }
            }
        }
    }

    // 0x1003fc6a0
    int Terrain::GetLocationHeightOffset(int arg1, int arg2, int arg3, HeightOffsetType heightOffsetType) const {
        int iVar1;
        short sVar3;
        int iVar4;
        array<std::array<HeightOffset, 64ul>, 64ul>* this_00;
        int* piVar5;
        array<HeightOffset, 64ul>* this_01;
        short* psVar6;
        int local_34[3];

        local_34[0] = arg1;
        if (ArrayValidPosition<Array<VarValue>, int>(
                (Array<std::array<std::array<HeightOffset, _64ul>, _64ul>>*)&field_560, local_34)) {
            this_00 = (array<std::array<HeightOffset, 64ul>, 64ul>*)field_560[(long)local_34[0]];
            local_34[1] = 0;
            local_34[2] = 63;
            piVar5 = std::min<int>(*(local_34 + 2), arg2);
            piVar5 = std::max<int>(*(local_34 + 1), *piVar5);
            iVar4 = *piVar5;
            local_34[1] = 0;
            local_34[2] = 63;
            piVar5 = std::min<int>(*(local_34 + 2), arg3);
            piVar5 = std::max<int>(*(local_34 + 1), *piVar5);
            iVar1 = *piVar5;
            this_01 = (array<HeightOffset, 64ul>*)(*this_00)[(long)iVar4];
            psVar6 = (short*)(*this_01)[(long)iVar1];
            if (heightOffsetType == 2) {
                sVar3 = eastl::max<short>(psVar6[1], *psVar6);
            } else {
                if (heightOffsetType != 1) {
                    (logger::default_logger())
                        ->Log(true, 2,
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/entities/Terrain.cpp",
                              653, "%s: Invalid option %d", "GetLocationHeightOffset", (unsigned long)heightOffsetType);
                    goto LAB_1003fc776;
                }
                sVar3 = *psVar6;
            }
            iVar4 = (int)sVar3;
        } else {
        LAB_1003fc776:
            iVar4 = 0;
        }
        return iVar4;
    }

    // 0x1003fc830
    uint8_t* Terrain::GetFineHeight(int& arg1, int arg2, int arg3, int arg4, bool arg5,
                                    HeightOffsetType heightOffsetType) const {
        uint8_t* arg1_00;
        bool bVar1;
        bool cVar2;
        int iVar3;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01;
        vector<eastl::vector<int>>* this_02;
        vector<int>* pvVar4;
        int* piVar5;
        unsigned int uVar6;
        int iVar7;
        int iVar8;
        unsigned int uVar9;
        int iVar10;
        int iVar11;
        uint8_t** ppuVar12;
        int local_34;

        arg1 = -1;
        if (m_heightZero == '\0') {
            arg1_00 = &field_456;
            local_34 = arg2;
            bVar1 =
                ArrayValidPosition<eastl::fixed_vector<shared_ptr<eastl::vector<eastl::vector<unsigned char>>>, 4ul>,
                                   int>((fixed_vector<shared_ptr<eastl::vector<eastl::vector<int>> _>, _4ul>*)arg1_00,
                                        &local_34);
            ppuVar12 = &DataStatus::MISSING;
            if (!bVar1)
                goto LAB_1003fcaa3;
            iVar11 = arg3 + 127;
            if (-1 < arg3) {
                iVar11 = arg3;
            }
            iVar8 = arg4 + 127;
            if (-1 < arg4) {
                iVar8 = arg4;
            }
            if ((arg5) && (local_34 == 0)) {
                this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)m_waterHeights;
                cVar2 = this_01->operator_cast_to_bool();
                if (!cVar2)
                    goto LAB_1003fcaa3;
            } else {
                cVar2 = ((*arg1_00)[(long)local_34])->operator_cast_to_bool();
                if (!cVar2)
                    goto LAB_1003fcaa3;
                this_01 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*arg1_00)[(long)local_34];
            }
            this_02 = (vector<eastl::vector<int>>*)this_01->end();
            if ((arg3 < -255) || (arg4 < -255))
                goto LAB_1003fcaa3;
            iVar11 = iVar11 >> 7;
            iVar8 = iVar8 >> 7;
            uVar9 = arg3 & 127;
            uVar6 = arg4 & 127;
            pvVar4 = (vector<int>*)(*this_02)[(long)(iVar11 + 1)];
            piVar5 = (int*)(*pvVar4)[(long)(iVar8 + 1)];
            iVar10 = *piVar5;
            if (uVar9 != 0) {
                iVar10 = iVar10 * (128 - uVar9);
                pvVar4 = (vector<int>*)(*this_02)[(unsigned long)(iVar11 + 2)];
                piVar5 = (int*)(*pvVar4)[(long)(iVar8 + 1)];
                iVar7 = *piVar5 * uVar9 + iVar10;
                iVar10 = *piVar5 * uVar9 + 127 + iVar10;
                if (-1 < iVar7) {
                    iVar10 = iVar7;
                }
                iVar10 = iVar10 >> 7;
            }
            if (uVar6 == 0) {
                arg1 = iVar10;
            } else {
                pvVar4 = (vector<int>*)(*this_02)[(long)(iVar11 + 1)];
                piVar5 = (int*)(*pvVar4)[(unsigned long)(iVar8 + 2)];
                iVar7 = *piVar5;
                if (uVar9 != 0) {
                    iVar7 = iVar7 * (128 - uVar9);
                    pvVar4 = (vector<int>*)(*this_02)[(unsigned long)(iVar11 + 2)];
                    piVar5 = (int*)(*pvVar4)[(unsigned long)(iVar8 + 2)];
                    iVar3 = uVar9 * *piVar5 + iVar7;
                    iVar7 = uVar9 * *piVar5 + 127 + iVar7;
                    if (-1 < iVar3) {
                        iVar7 = iVar3;
                    }
                    iVar7 = iVar7 >> 7;
                }
                iVar10 = iVar10 * (128 - uVar6);
                iVar3 = iVar7 * uVar6 + iVar10;
                iVar10 = iVar7 * uVar6 + 127 + iVar10;
                if (-1 < iVar3) {
                    iVar10 = iVar3;
                }
                arg1 = iVar10 >> 7;
            }
            if (heightOffsetType == 0) {
                ppuVar12 = &DataStatus::READY;
                goto LAB_1003fcaa3;
            }
            iVar11 = GetLocationHeightOffset(local_34, iVar11, iVar8, heightOffsetType);
            iVar11 = iVar11 + arg1;
            ppuVar12 = &DataStatus::READY;
        } else {
            ppuVar12 = &DataStatus::MISSING;
            iVar11 = 0;
        }
        arg1 = iVar11;
    LAB_1003fcaa3:
        return *ppuVar12;
    }

    // 0x1003fcac0
    int Terrain::GetFineWaterDepth(int arg1, int arg2, int arg3) const {
        uint8_t* arg1_00;
        int iVar3;
        shared_ptr<eastl::vector<eastl::vector<int>>>* this_01;
        vector<eastl::vector<int>>* this_02;
        vector<eastl::vector<int>>* this_03;
        vector<int>* pvVar4;
        int* piVar5;
        int iVar6;
        unsigned long arg1_01;
        unsigned long uVar7;
        unsigned int uVar8;
        unsigned long arg1_02;
        int iVar9;
        int iVar10;
        int local_34;

        if (m_heightZero == '\0') {
            arg1_00 = &field_456;
            local_34 = arg1;
            if (!ArrayValidPosition<eastl::fixed_vector<shared_ptr<eastl::vector<eastl::vector<unsigned char>>>, 4ul>,
                                    int>((fixed_vector<shared_ptr<eastl::vector<eastl::vector<int>> _>, _4ul>*)arg1_00,
                                         &local_34)) {
                return -1;
            }
            if (((*arg1_00)[(long)local_34])->operator_cast_to_bool()) {
                if (!(m_waterHeights->operator_cast_to_bool())) {
                    return 0;
                }
                iVar6 = arg2 + 127;
                if (-1 < arg2) {
                    iVar6 = arg2;
                }
                iVar10 = arg3 + 127;
                if (-1 < arg3) {
                    iVar10 = arg3;
                }
                uVar8 = arg2 & 127;
                this_01 = (shared_ptr<eastl::vector<eastl::vector<int>>>*)(*arg1_00)[(long)local_34];
                this_02 = (vector<eastl::vector<int>>*)**this_01;
                this_03 = (vector<eastl::vector<int>>*)**m_waterHeights;
                arg1_01 = (unsigned long)((iVar6 >> 7) + 1);
                pvVar4 = (vector<int>*)(*this_03)[arg1_01];
                uVar7 = (unsigned long)((iVar10 >> 7) + 1);
                piVar5 = (int*)(*pvVar4)[uVar7];
                iVar3 = *piVar5;
                pvVar4 = (vector<int>*)(*this_02)[arg1_01];
                piVar5 = (int*)(*pvVar4)[uVar7];
                iVar9 = (iVar3 - *piVar5) * (128 - uVar8);
                arg1_02 = (unsigned long)((iVar6 >> 7) + 2);
                pvVar4 = (vector<int>*)(*this_03)[arg1_02];
                piVar5 = (int*)(*pvVar4)[uVar7];
                iVar6 = *piVar5;
                pvVar4 = (vector<int>*)(*this_02)[arg1_02];
                piVar5 = (int*)(*pvVar4)[uVar7];
                iVar6 = (iVar6 - *piVar5) * uVar8;
                iVar3 = iVar6 + iVar9;
                iVar6 = iVar6 + 127 + iVar9;
                if (-1 < iVar3) {
                    iVar6 = iVar3;
                }
                pvVar4 = (vector<int>*)(*this_03)[arg1_01];
                uVar7 = (unsigned long)((iVar10 >> 7) + 2);
                piVar5 = (int*)(*pvVar4)[uVar7];
                iVar10 = *piVar5;
                pvVar4 = (vector<int>*)(*this_02)[arg1_01];
                piVar5 = (int*)(*pvVar4)[uVar7];
                iVar9 = (iVar10 - *piVar5) * (128 - uVar8);
                pvVar4 = (vector<int>*)(*this_03)[arg1_02];
                piVar5 = (int*)(*pvVar4)[uVar7];
                iVar10 = *piVar5;
                pvVar4 = (vector<int>*)(*this_02)[arg1_02];
                piVar5 = (int*)(*pvVar4)[uVar7];
                iVar10 = (iVar10 - *piVar5) * uVar8;
                iVar3 = iVar10 + iVar9;
                iVar10 = iVar10 + 127 + iVar9;
                if (-1 < iVar3) {
                    iVar10 = iVar3;
                }
                iVar3 = (128 - (arg3 & 127U)) * (iVar6 >> 7);
                iVar6 = (iVar10 >> 7) * (arg3 & 127U);
                iVar10 = iVar6 + iVar3;
                iVar6 = iVar6 + iVar3 + 127;
                if (-1 < iVar10) {
                    iVar6 = iVar10;
                }
                return iVar6 >> 7;
            }
        }
        return 0;
    }

    // 0x1003fcd10
    unsigned int Terrain::CalculatePrimaryWaterHeightNearTile(int arg1, int arg2) const {
        unsigned int uVar1;
        Terrain* pTVar2;
        unsigned int uVar3;
        int iVar5;
        vector<eastl::vector<unsigned char>>* pvVar6;
        vector<unsigned char>* pvVar7;
        char* pcVar8;
        unsigned int* puVar9;
        vector<int>* this_01;
        int* piVar10;
        float* pfVar11;
        uint32_t* puVar12;
        long* plVar13;
        unsigned long uVar14;
        unsigned long arg1_00;
        long lVar15;
        unsigned long arg1_01;
        unsigned long uVar16;
        unsigned long uVar17;
        Vector3T<int> local_130;
        uint64_t local_120[4];
        uint8_t local_100[16];
        uint8_t local_f0[16];
        vector<unsigned int>* local_e0;
        unsigned long local_c8;
        unsigned long local_c0;
        unsigned int local_b4;
        unsigned long local_b0;
        int local_94;
        SideBarData local_80;

        Terrain* local_a0 = this;
        if (!(HasWater())) {
            LogAssert("HasWater()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/Terrain.cpp",
                      759, nullptr);
        }
        uint8_t* this_00 = local_a0->m_waterHeights;
        if (!(this_00->operator_cast_to_bool())) {
            LogAssert("m_waterHeights",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/Terrain.cpp",
                      760, nullptr);
        }
        shared_ptr<eastl::vector<eastl::vector<unsigned char>>>* local_90 =
            (shared_ptr<eastl::vector<eastl::vector<unsigned char>>>*)&local_a0->field_808;
        if (!(local_90->operator_cast_to_bool())) {
            LogAssert("m_underworldMap",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/Terrain.cpp",
                      761, nullptr);
        }
        new (local_100) oldscape::sidebars::SideBarData(arg1, arg2);
        return local_84 = 2147483647;
        Vector2T<int> local_d8(2147483647);
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>* local_d0 =
            (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                    eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)**this_00;
        unsigned long local_a8 = local_d0->size();
        if (2 < (int)local_a8) {
            uVar14 = 4294967294;
            local_a8 = (unsigned long)((int)local_a8 - 2);
            local_94 = 2147483647;
            arg1_00 = 1;
            local_b0 = 0;
            local_84 = 2147483647;
            do {
                local_e0 = (vector<unsigned int>*)(*local_d0)[arg1_00];
                iVar5 = local_e0->size();
                if (2 < iVar5) {
                    uVar16 = (unsigned long)(iVar5 - 2);
                    arg1_01 = 1;
                    uVar17 = 0;
                    local_f0._8_8_ = arg1_00;
                    local_c0 = uVar16;
                    do {
                        pvVar6 = (vector<eastl::vector<unsigned char>>*)**local_90;
                        pvVar7 = (vector<unsigned char>*)(*pvVar6)[arg1_00];
                        pcVar8 = (char*)(*pvVar7)[arg1_01];
                        if (*pcVar8 != '\0') {
                            local_c8 = arg1_01;
                            puVar9 = (unsigned int*)(*local_e0)[arg1_01];
                            uVar1 = *puVar9;
                            uVar14 = (((uint64_t)((int64_t)(uVar14 >> 8)) << 8) | (uint8_t)1);
                            uVar16 = local_b0;
                            do {
                                local_b4 = (unsigned int)uVar14;
                                lVar15 = 0;
                                do {
                                    pvVar6 = (vector<eastl::vector<unsigned char>>*)**local_90;
                                    pvVar7 = (vector<unsigned char>*)(*pvVar6)[uVar16];
                                    pcVar8 = (char*)(*pvVar7)[uVar17 + lVar15];
                                    if (*pcVar8 == '\0') {
                                    LAB_1003fcfc0:
                                        uVar14 = 0;
                                        goto LAB_1003fcfc2;
                                    }
                                    this_01 = (vector<int>*)(*local_d0)[uVar16];
                                    puVar9 = (unsigned int*)(*this_01)[uVar17 + lVar15];
                                    if (*puVar9 != uVar1)
                                        goto LAB_1003fcfc0;
                                    lVar15 = lVar15 + 1;
                                } while (lVar15 != 2);
                                uVar14 = (unsigned long)local_b4;
                            LAB_1003fcfc2:
                                arg1_01 = local_c8;
                                arg1_00 = local_f0._8_8_;
                            } while ((uVar16 < (unsigned long)local_f0._8_8_) &&
                                     (uVar16 = uVar16 + 1, (uVar14 & 1) != 0));
                            if ((uVar14 & 1) == 0) {
                                uVar16 = local_c0;
                            } else {
                                local_80 = oldscape::sidebars::SideBarData(local_f0._8_4_, (int)local_c8);
                                local_120[0] = *local_100 - local_80;
                                iVar5 = local_120->LengthSq();
                                if (iVar5 < local_94) {
                                    local_d8 = local_80;
                                    local_94 = iVar5;
                                    local_84 = uVar1;
                                }
                                uVar16 = local_c0;
                            }
                        }
                        arg1_01 = arg1_01 + 1;
                        uVar17 = uVar17 + 1;
                    } while (uVar17 != uVar16);
                }
                arg1_00 = arg1_00 + 1;
                uVar14 = local_b0 + 1;
                local_b0 = uVar14;
            } while (uVar14 != local_a8);
        }
        if (World::m_showWaterHeights != '\0') {
            local_130 = math::Vector3T();
            pTVar2 = local_a0;
            iVar5 = local_a0->field_288;
            piVar10 = (int*)local_d8.SSOBeginPtr();
            local_90._0_4_ = (float)((iVar5 * 64 + *piVar10) * 128 - 128);
            pfVar11 = (float*)local_130.SSOBeginPtr();
            *pfVar11 = local_90._0_4_;
            iVar5 = pTVar2->field_292;
            piVar10 = (int*)local_d8.y();
            local_90._0_4_ = (float)((iVar5 * 64 + *piVar10) * 128 - 128);
            pfVar11 = (float*)local_130.second();
            uVar3 = local_84;
            *pfVar11 = local_90._0_4_;
            local_90 = (shared_ptr<eastl::vector<eastl::vector<unsigned char>>>*)(((uint64_t)local_90._4_4_ << 32) |
                                                                                  (uint32_t)((float)(int)local_84));
            puVar12 = (uint32_t*)local_130.y();
            *puVar12 = local_90._0_4_;
            local_80 = eastl::fixed_string<char, 32>();
            puVar9 = (unsigned int*)local_d8.SSOBeginPtr();
            uVar1 = *puVar9;
            puVar9 = (unsigned int*)local_d8.y();
            local_80.sprintf("Target %i (%i %i)", (unsigned long)uVar3, (unsigned long)uVar1, (unsigned long)*puVar9);
            plVar13 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar13 != nullptr) {
                pcVar8 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                new ((local_100 + 8)) eastl::allocator("EASTL basic_string");
                new (local_120) eastl::string(pcVar8, (local_100 + 8));
                new (local_f0) oldscape::sidebars::SideBarData(-16711681, 0);
                (**(void (**)(...))(*plVar13 + 136))(plVar13, &local_130, local_120, local_f0);
            }
        }
        return local_84;
    }

    // 0x1003fd250
    bool Terrain::HasWater() const {
        return field_416.empty() ^ 1;
    }

    // 0x1003fd270
    unsigned long Terrain::GetTileRoofLinkInner(
        const eastl::fixed_vector<shared_ptr<eastl::vector<eastl::vector<unsigned char>>>, 4ul>& arg1, int arg2,
        int arg3, int arg4) const {
        shared_ptr* this_00;
        vector<eastl::vector<unsigned char>>* arg1_00;
        vector<unsigned char>* arg1_01;
        uint8_t* pbVar3;
        int local_3c;
        int local_38;

        int local_34 = arg2;
        bool bVar1 =
            ArrayValidPosition<eastl::fixed_vector<shared_ptr<eastl::vector<eastl::vector<unsigned char>>>, 4ul>, int>(
                (fixed_vector<shared_ptr<eastl::vector<eastl::vector<int>> _>, _4ul>*)arg1, &local_34);
        unsigned long uVar4 = 4294967295;
        if (bVar1) {
            this_00 = &arg1[(long)local_34];
            if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                arg1_00 = (vector<eastl::vector<unsigned char>>*)**this_00;
                local_3c = arg3 + 1;
                bVar1 = ArrayValidPosition<eastl::vector<eastl::vector<DecodedTerrainTile>>, int>(arg1_00, &local_3c);
                if (bVar1) {
                    arg1_01 = (vector<unsigned char>*)(*arg1_00)[(long)(arg3 + 1)];
                    local_38 = arg4 + 1;
                    bVar1 = ArrayValidPosition<eastl::vector<unsigned char>, int>(arg1_01, &local_38);
                    if (bVar1) {
                        pbVar3 = (uint8_t*)(*arg1_01)[(long)(arg4 + 1)];
                        uVar4 = (unsigned long)*pbVar3;
                    }
                }
            }
        }
        return uVar4;
    }

    // 0x1003fd430
    bool Terrain::LinkMapValidPos(int arg1, int arg2, int arg3) const {
        shared_ptr* this_00;
        vector<eastl::vector<unsigned char>>* arg1_00;
        vector<eastl::vector<unsigned char>>* this_01;
        vector<unsigned char>* arg1_01;

        int local_1c = arg3;
        int local_18 = arg1;
        int local_14 = arg2;
        bool bVar1 =
            ArrayValidPosition<eastl::fixed_vector<shared_ptr<eastl::vector<eastl::vector<unsigned char>>>, 4ul>, int>(
                (fixed_vector<shared_ptr<eastl::vector<eastl::vector<int>> _>, _4ul>*)&field_600, &local_18);
        if (bVar1) {
            this_00 = &field_600[(long)local_18];
            if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                arg1_00 = (vector<eastl::vector<unsigned char>>*)**this_00;
                bVar1 = ArrayValidPosition<eastl::vector<eastl::vector<DecodedTerrainTile>>, int>(arg1_00, &local_14);
                if (bVar1) {
                    this_01 = (vector<eastl::vector<unsigned char>>*)**this_00;
                    arg1_01 = (vector<unsigned char>*)(*this_01)[(long)local_14];
                    bVar1 = ArrayValidPosition<eastl::vector<unsigned char>, int>(arg1_01, &local_1c);
                    return bVar1;
                }
            }
        }
        return false;
    }

    // 0x1003fd4c0
    bool Terrain::CanRender() const {
        bool bVar2;

        if (field_344.empty() == '\0') {
            bVar2 = m_hideTerrain == false;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x1003fd4f0
    unsigned long Terrain::IsReadyToRender() const {
        bool cVar1;

        uint8_t* this_02 = &field_344;
        auto this_00 = this_02->HeapBeginPtr();
        auto puVar2 = this_02->end();
        for (; this_00 != puVar2; this_00 = this_00 + 8) {
            cVar1 = std::unique_ptr::operator_cast_to_bool(this_00);
            if (cVar1) {
                cVar1 = ((TerrainPatch*)(*this_00).operator->())->IsReadyToRender();
                if (!cVar1)
                    break;
            }
        }
        return this_00 == puVar2 & 4294967295;
    }

    // 0x1003fd570
    unsigned long Terrain::DebugShowPrimitiveTerrainPatch(bool arg1, graphics::TerrainPatch& terrainPatch,
                                                          const eastl::pair<int, graphics::RenderChunk>& arg3, int arg4,
                                                          int arg5, const math::Rect<int>& rect, int arg7, int arg8,
                                                          int arg9, int arg10, bool arg11) {
        float fVar1;
        unsigned int uVar2;
        unsigned int uVar3;
        uint32_t uVar4;
        uint32_t uVar5;
        int iVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        World* pWVar10;
        HeightMap* pHVar11;
        long* plVar12;
        char* str;
        CoordGrid local_1f0;
        eastl::string local_1e0;
        shared_ptr<World>* local_1c0;
        ShaderVariablePrecision local_1b4;
        uint8_t local_1b0[8];
        uint32_t local_1a8;
        uint32_t local_1a4;
        float local_1a0;
        CoordFine local_198;
        ShaderVariablePrecision local_184;
        TerrainPatch* local_178;
        float local_16c;
        float local_168;
        float local_164;
        fixed_string<char, 256> local_160;

        pair<int, graphics::RenderChunk>* local_180 = arg3;
        if (m_debugPrimitiveText != '\0') {
            local_178 = terrainPatch;
            local_164 = (float)arg5;
            uVar2 = rect.GetX();
            uVar3 = rect.GetZ();
            local_1f0 = oldscape::rs2lib::worldmap::LocationData(arg4, uVar2, uVar3);
            local_198 = CoordFine(&local_1f0, false);
            fVar1 = local_164;
            local_1c0 = (shared_ptr<World>*)&field_176;
            pWVar10 = (World*)(*local_1c0).operator->();
            pHVar11 = pWVar10->GetHeightMap();
            local_16c = (float)arg4;
            pHVar11->GetFineHeight(local_184, arg4, (int)local_198.field_4, (int)local_198.field_12, false, 0);
            local_198.field_8 = (float)(int)local_184;
            local_160 = eastl::fixed_string<char, 256>();
            uVar2 = local_198.GetMapSquareX();
            uVar3 = local_198.GetMapSquareZ();
            uVar4 = local_198.GetLocalX();
            uVar5 = local_198.GetLocalZ();
            local_160.sprintf("TerrainPatch:%p @ %d,%d,%d,%d,%d", local_178, (unsigned long)(unsigned int)local_16c,
                              (unsigned long)uVar2, (unsigned long)uVar3, uVar4, uVar5);
            if (local_16c != fVar1) {
                local_160.append_sprintf(" [lvl %d]", (unsigned long)(unsigned int)fVar1);
            }
            local_164 = *(float*)local_180;
            local_178 = (TerrainPatch*)(((uint64_t)local_178._4_4_ << 32) | (uint32_t)(*(int*)(local_180 + 8)));
            local_168 = (float)rect.GetPos();
            uVar2 = rect.GetLevel();
            local_160.append_sprintf(" [Chunk %d : %d tiles] [size=%dx%d @ %d,%d - %d,%d]",
                                     (unsigned long)(unsigned int)local_164, (unsigned long)local_178 & 4294967295,
                                     (unsigned long)(unsigned int)local_168, (unsigned long)uVar2, arg7 & 63, arg8 & 63,
                                     arg9 & 63, arg10 & 63);
            uVar2 = 4293943472;
            if (arg11) {
                uVar2 = 4290838400;
            }
            plVar12 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar12 != nullptr) {
                str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                local_1e0 = eastl::string(str);
                new (local_1b0) oldscape::sidebars::SideBarData(uVar2, 0);
                (**(void (**)(...))(*plVar12 + 136))(plVar12, &local_198.field_4, &local_1e0, local_1b0);
            }
            if (0 < *(int*)local_180) {
                local_164 = local_198.field_4;
                local_180._0_4_ = local_198.field_12;
                iVar6 = rect.GetPos();
                iVar7 = rect.GetLevel();
                local_178._0_4_ = local_198.field_4;
                local_168 = local_198.field_12;
                iVar8 = rect.GetPos();
                iVar9 = rect.GetLevel();
                pWVar10 = (World*)(*local_1c0).operator->();
                local_164 = local_164 + (float)(iVar6 << 7);
                local_180 = (pair<int, graphics::RenderChunk>*)(((uint64_t)local_180._4_4_ << 32) |
                                                                (uint32_t)(local_180._0_4_ + (float)(iVar7 << 7)));
                pHVar11 = pWVar10->GetHeightMap();
                pHVar11->GetFineHeight(local_1b4, (int)local_16c, (int)local_164, (int)local_180._0_4_, false, 0);
                local_178 = (TerrainPatch*)(((uint64_t)local_178._4_4_ << 32) |
                                            (uint32_t)(local_178._0_4_ + (float)(iVar8 << 6)));
                local_168 = local_168 + (float)(iVar9 << 6);
                local_184 = eastl::max<int>(local_1b4, local_184);
                local_1a8 = local_178._0_4_;
                local_1a0 = local_168;
                local_1a4 = 0;
                local_1e0 = math::PlaneT<float>(PTR_UP_100ee66d0, (float)(int)-local_184);
                plVar12 = DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar12 != nullptr) {
                    local_178 = (TerrainPatch*)(((uint64_t)local_178._4_4_ << 32) | (uint32_t)local_198.field_4);
                    local_16c = local_198.field_12;
                    new (local_1b0) oldscape::sidebars::SideBarData(uVar2 & 552665008, 5);
                    (**(void (**)(...))(*plVar12 + 104))(plVar12, &local_1a8, &local_1e0,
                                                         (int)(local_180._0_4_ - local_16c) - 8,
                                                         (int)(local_164 - local_178._0_4_) - 8, local_1b0);
                }
            }
        }
        return arg1 & 4294967295;
    }

} // namespace jag::game

namespace jag {
    // 0x1003fa250
    shared_ptr_if_not_array<game::BuildTerrainMain>::type
    bucket_make_shared<game::BuildTerrainMain, graphics::RT7Core*&, int&, game::TerrainInputData&>(
        graphics::RT7Core*& arg1, int& arg2, game::TerrainInputData& terrainInputData) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        BuildTerrainMain* local_38[2];

        auto local_40 = BucketManager::Allocate(656, 0, 16);
        if (local_40 == nullptr) {
            shared_ptr_if_not_array<game::BuildTerrainMain>::type result;
        } else {
            local_38[0] = placement_new<game::BuildTerrainMain, graphics::RT7Core*&, int&, game::TerrainInputData&>(
                local_40 + 48, arg1, arg2, terrainInputData);
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)placement_new<
                BucketRefCounter<game::BuildTerrainMain>,
                managed_ptr_counter_and_data<BucketRefCounter<game::BuildTerrainMain>, game::BuildTerrainMain>*&,
                game::BuildTerrainMain*&>(local_40, &local_40, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

} // namespace jag
