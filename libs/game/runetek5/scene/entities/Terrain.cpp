// libs/game/runetek5/scene/entities/Terrain.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "Terrain.h"

namespace jag::game {
    // 0x1039b4de8, 8 bytes, __common; zero-initialised
    Terrain::m_debugPrimitiveText;

    // 0x10011ceb0: the linker folded this into oldscape::configdecoder::NpcType::GetHeadIconGraphics() const, which has identical code
    Terrain::GetWaterHeights() const;

    // 0x10036f4c0: the linker folded this into graphics::GeometryBatch::GetFaceTransparencyBuffer(), which has identical code
    Terrain::GetWaterPatches() const;

    // 0x100396010: the linker folded this into oldscape::auth::SteamAuthLibWrapper::GetGameToken(), which has identical code
    Terrain::GetAABB() const;

    // 0x1003dad60: the linker folded this into PathingEntity::GetAnimatedModel() const, which has identical code
    Terrain::GetLightProbe();

    // 0x1003f9270, 624 bytes, base-object constructor, placed by class name and debug map
    // Terrain::Terrain(graphics::GraphNode*, shared_ptr<World> const&, TerrainInputData&, graphics::RT7Core*)
    void Terrain::Terrain(GraphNode* param_1, shared_ptr* param_2, TerrainInputData* param_3, RT7Core* param_4) {
        shared_ptr* psVar1;

        Entity::Entity();
        new (this) MakeUniquePool<Terrain, 32>();
        field_0 = &PTR__Terrain_100efee68;
        field_8 = &PTR__Terrain_100efefa8;
        new (&field_192) math::AABB();
        new (&field_224) math::Matrix44T<float>();
        field_288 = *(undefined4*)param_3;
        field_292 = *(undefined4*)(param_3 + 4);
        new (&field_296, *(shared_ptr**)(param_3 + 16)) shared_ptr<oldscape::dash3d::Decor>();
        new (&field_312, *(shared_ptr**)(param_3 + 24)) shared_ptr<oldscape::dash3d::Decor>();
        psVar1 = *(shared_ptr**)(param_3 + 32);
        new (&field_328, psVar1) shared_ptr<oldscape::dash3d::Decor>();
        new (&field_344)
            eastl::fixed_vector<std::unique_ptr<graphics::TerrainPatch, std::default_delete<graphics::TerrainPatch>>,
                                4ul, true, eastl::allocator>();
        new (&field_416) eastl::vector<shared_ptr<graphics::WaterPatch>, eastl::allocator>();
        field_448[0] = param_3[40];
        m_heightZero = 0;
        new (&field_456)
            eastl::fixed_vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>, 4ul,
                                true, eastl::allocator>();
        new (&field_560) Array<std::array<std::array<HeightOffset, 64ul>, 64ul>, eastl::allocator>();
        new (m_waterHeights, (_func_decltype_nullptr*)psVar1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_600) eastl::fixed_vector<
            shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>, 4ul, true,
            eastl::allocator>();
        new (&field_704) eastl::fixed_vector<
            shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>, 4ul, true,
            eastl::allocator>();
        new (&field_808, (_func_decltype_nullptr*)psVar1)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_824 = 0;
        new (field_832, (_func_decltype_nullptr*)psVar1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_848 = 6;
        m_hasFade = 0;
        field_852 = 0.0;
        m_hideTerrain = false;
        new (&field_864) graphics::LightProbe();
        field_1680 = param_4;
    }

    // 0x1003f95c0, 16 bytes, complete-object constructor, placed by class name and debug map
    // Terrain::Terrain(graphics::GraphNode*, shared_ptr<World> const&, TerrainInputData&, graphics::RT7Core*): jumps straight to the base-object constructor

    // 0x1003f95d0, 416 bytes, base-object destructor, placed by class name and debug map
    // Terrain::~Terrain()
    void Terrain::~Terrain() {
        LightProbeRenderer* this_00;

        field_0 = &PTR__Terrain_100efee68;
        field_8 = &PTR__Terrain_100efefa8;
        if (field_1680 != (RT7Core*)0) {
            this_00 = (LightProbeRenderer*)field_1680->GetLightProbeRenderer();
            this_00->RecycleRenderingResources((LightProbe*)&field_864);
        }
        (&field_864)->~LightProbe();
        field_832->~shared_ptr();
        (&field_808)->~shared_ptr();
        (&field_704)->~fixed_vector();
        (&field_600)->~fixed_vector();
        m_waterHeights->~shared_ptr();
        (&field_560)->~Array();
        (&field_456)->~fixed_vector();
        (&field_416)->~vector();
        (&field_344)->~fixed_vector();
        (&field_328)->~shared_ptr();
        (&field_312)->~shared_ptr();
        (&field_296)->~shared_ptr();
        ~Entity();
    }

    // 0x1003f9770, 16 bytes, complete-object destructor, placed by class name and debug map
    // Terrain::~Terrain(): jumps straight to the base-object destructor

    // 0x1003f9790, 32 bytes, deleting destructor, placed by class name and debug map
    // Terrain::~Terrain()
    void Terrain::~Terrain() {
        ~Terrain(this);
        operator_delete(this);
    }

    // 0x1003f97c0, 128 bytes, placed by class name and debug map
    // Terrain::Build(AssetBuilder*, int, ConfigProvider*)
    void Terrain::Build(AssetBuilder* param_1, int param_2, ConfigProvider* param_3) {
        char cVar1;
        char cVar2;

        cVar1 = GetTargetLOD();
        if (cVar1 != '\0') {
            SetTargetLOD(0);
        }
        cVar1 = GetNumTilesPerRow();
        cVar2 = GetTargetLOD();
        if (cVar1 != cVar2) {
            cVar1 = BuildTerrain(this, param_1, param_2, param_3);
            if (cVar1 != '\0') {
                SetCurrentLOD(0);
                CreateCombinedLocalAABB(this);
            }
        }
    }

    // 0x1003f9840, 2288 bytes, placed by class name and debug map
    // Terrain::BuildTerrain(AssetBuilder*, int, ConfigProvider*)
    ulong Terrain::BuildTerrain(AssetBuilder* param_1, int param_2, ConfigProvider* param_3) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        LoginManager* this_01;
        World* this_02;
        Frustum* this_03;
        OpenGLView* this_04;
        AABB* pAVar3;
        shared_ptr* psVar4;
        vector* pvVar5;
        long lVar6;
        unique_ptr<graphics::TerrainPatch, std::default_delete<graphics::TerrainPatch>>* puVar7;
        shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>* psVar8;
        shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>* psVar9;
        unique_ptr* this_05;
        vector<eastl::vector<int, eastl::allocator>, eastl::allocator>* pvVar10;
        ulong uVar11;
        vector<int, eastl::allocator>* this_06;
        int* piVar12;
        shared_ptr<BuildTerrainResultWaterData>* this_07;
        shared_ptr<BuildTerrainResultWaterData>* psVar13;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_08;
        AnimationWrapper* this_09;
        WaterType* this_10;
        WaterPatchConfig* pWVar14;
        long lVar15;
        undefined8 uVar16;
        ulong uVar17;
        int iVar18;
        ulong uVar19;
        undefined1 auVar20[16];
        vector* in_stack_fffffffffffffd08;
        fixed_hash_map* in_stack_fffffffffffffd18;
        undefined1 local_2c0[24];
        undefined1* local_2a8;
        undefined1* local_2a0;
        undefined1 local_298;
        ConfigProvider* local_c0;
        vector<shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>,
               eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>* local_b8;
        float* local_b0;
        shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>* local_a8;
        array<shared_ptr<BuildTerrainResultLevelData>, 4ul>* local_a0;
        float* local_98;
        float* local_90;
        vector<std::unique_ptr<graphics::TerrainPatch, std::default_delete<graphics::TerrainPatch>>,
               eastl::fixed_vector_allocator<8ul, 4ul, 8ul, 0ul, true, eastl::allocator>>* local_88;
        undefined1* local_80;
        shared_ptr local_78;
        vector<eastl::vector<int, eastl::allocator>, eastl::allocator>* local_68;
        float* local_60[2];
        vector<shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>,
               eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>* local_50;
        shared_ptr* local_48;
        shared_ptr<BuildTerrainResultWaterData>* local_40;
        float local_34;

        this_00 = field_832;
        local_c0 = param_3;
        bVar1 = this_00->operator_cast_to_bool();
        if (bVar1) {
            local_80 = this_00;
            this_01 = (LoginManager*)shared_ptr<BuildTerrainMain>::operator*((shared_ptr<BuildTerrainMain>*)this_00);
            cVar2 = this_01->IsFinished();
            if (cVar2 != '\0') {
                cVar2 = this_01->IsMissingData();
                if (cVar2 != '\0') {
                    shared_ptr<BuildTerrainMain>::reset();
                    (*(code*)field_0[25])(this);
                    CreateCombinedLocalAABB(this);
                    uVar19 = CONCAT71((int7)((ulong)this_01 >> 8), 1);
                    goto LAB_1003f99ee;
                }
                cVar2 = this_01->IsSuccessful();
                if (cVar2 != '\0') {
                    auVar20 = this_01->GetDevCredentialsOutputDirectory();
                    psVar4 = &local_78;
                    static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>(psVar4, auVar20._0_8_,
                                                                                                 auVar20._8_8_);
                    bVar1 = shared_ptr::operator_cast_to_bool(psVar4);
                    if (bVar1) {
                        local_a0 = (array<shared_ptr<BuildTerrainResultLevelData>, 4ul>*)
                            shared_ptr<BuildTerrainResultData>::operator*(
                                (shared_ptr<BuildTerrainResultData>*)&local_78);
                        (*(code*)field_0[25])(this);
                        local_88 =
                            (vector<
                                std::unique_ptr<graphics::TerrainPatch, std::default_delete<graphics::TerrainPatch>>,
                                eastl::fixed_vector_allocator<8ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)&field_344;
                        eastl::vector<
                            std::unique_ptr<graphics::TerrainPatch, std::default_delete<graphics::TerrainPatch>>,
                            eastl::fixed_vector_allocator<8ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::resize(local_88,
                                                                                                               4);
                        local_40 = (shared_ptr<BuildTerrainResultWaterData>*)&field_456;
                        local_40->resize(4);
                        local_50 =
                            (vector<
                                shared_ptr<
                                    eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>,
                                eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)&field_600;
                        eastl::vector<
                            shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>,
                            eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                          eastl::allocator>>::resize(local_50, 4);
                        local_b8 =
                            (vector<
                                shared_ptr<
                                    eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>,
                                eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)&field_704;
                        eastl::vector<
                            shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>,
                            eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                          eastl::allocator>>::resize(local_b8, 4);
                        local_48 = (shared_ptr*)m_waterHeights;
                        local_98 = (float*)&field_224;
                        local_b0 = &field_852;
                        local_a8 = (shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>,
                                                             eastl::allocator>>*)&field_808;
                        local_34 = 0.0;
                        do {
                            psVar4 = (shared_ptr*)std::array<shared_ptr<BuildTerrainResultLevelData>, 4ul>::operator[](
                                local_a0, (ulong)(uint)local_34);
                            bVar1 = shared_ptr::operator_cast_to_bool(psVar4);
                            if (bVar1) {
                                pvVar5 = (vector*)shared_ptr<BuildTerrainResultLevelData>::operator*(
                                    (shared_ptr<BuildTerrainResultLevelData>*)psVar4);
                                lVar6 = ((pvVar5 + 96))->size();
                                if (lVar6 != 0) {
                                    in_stack_fffffffffffffd08 = pvVar5 + 164;
                                    in_stack_fffffffffffffd18 = (fixed_hash_map*)(pvVar5 + 12640);
                                    local_60[0] = local_98;
                                    local_90 = local_b0;
                                    std::make_unique<graphics::TerrainPatch, unsigned int&, math::AABB&,
                                                     eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>&,
                                                     eastl::vector<graphics::TerrainPatchVertexPos, eastl::allocator>&,
                                                     int&, int&, int&, shared_ptr<graphics::TextureAtlasReference>&,
                                                     eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul,
                                                                           true, eastl::hash<int>, eastl::equal_to<int>,
                                                                           false, eastl::allocator>&,
                                                     math::Matrix44T<float>*, float*>(
                                        (uint*)local_2c0, (AABB*)&local_34, pvVar5, pvVar5 + 96, (int*)(pvVar5 + 128),
                                        (int*)(pvVar5 + 160), (int*)in_stack_fffffffffffffd08,
                                        (shared_ptr*)(pvVar5 + 12656), in_stack_fffffffffffffd18,
                                        (Matrix44T**)(pvVar5 + 168), (float**)local_60);
                                    puVar7 = (unique_ptr<graphics::TerrainPatch,
                                                         std::default_delete<graphics::TerrainPatch>>*)
                                        eastl::vector<
                                            std::unique_ptr<graphics::TerrainPatch,
                                                            std::default_delete<graphics::TerrainPatch>>,
                                            eastl::fixed_vector_allocator<8ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                                        operator[](local_88, (ulong)(uint)local_34);
                                    std::unique_ptr<
                                        graphics::TerrainPatch,
                                        std::default_delete<graphics::TerrainPatch>>::operator=(puVar7,
                                                                                                (unique_ptr*)local_2c0);
                                    local_2c0->~unique_ptr();
                                }
                                psVar8 =
                                    (shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>*)
                                        eastl::vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                               eastl::allocator>>,
                                                      eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                                    eastl::allocator>>::
                                        operator[](
                                            (vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                             eastl::allocator>>,
                                                    eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                                  eastl::allocator>>*)local_40,
                                            (ulong)(uint)local_34);
                                shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::
                                operator=(psVar8, (shared_ptr*)(pvVar5 + 32));
                                if (local_34 == 0.0) {
                                    shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::
                                    operator=((shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                        eastl::allocator>>*)local_48,
                                              (shared_ptr*)(pvVar5 + 48));
                                    shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>,
                                                             eastl::allocator>>::operator=(local_a8,
                                                                                           (shared_ptr*)(pvVar5 + 80));
                                }
                                psVar9 = (shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>,
                                                                   eastl::allocator>>*)
                                    eastl::vector<
                                        shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>,
                                                                 eastl::allocator>>,
                                        eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                                    operator[](local_50, (ulong)(uint)local_34);
                                shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>,
                                                         eastl::allocator>>::operator=(psVar9,
                                                                                       (shared_ptr*)(pvVar5 + 64));
                                psVar9 = (shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>,
                                                                   eastl::allocator>>*)
                                    eastl::vector<
                                        shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>,
                                                                 eastl::allocator>>,
                                        eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                                    operator[](local_b8, (ulong)(uint)local_34);
                                psVar9->swap((shared_ptr*)(pvVar5 + 12624));
                            } else {
                                this_05 = (unique_ptr*)eastl::vector<
                                    std::unique_ptr<graphics::TerrainPatch,
                                                    std::default_delete<graphics::TerrainPatch>>,
                                    eastl::fixed_vector_allocator<8ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                                operator[](local_88, (ulong)(uint)local_34);
                                bVar1 = std::unique_ptr::operator_cast_to_bool(this_05);
                                if (bVar1) {
                                    puVar7 = (unique_ptr<graphics::TerrainPatch,
                                                         std::default_delete<graphics::TerrainPatch>>*)
                                        eastl::vector<
                                            std::unique_ptr<graphics::TerrainPatch,
                                                            std::default_delete<graphics::TerrainPatch>>,
                                            eastl::fixed_vector_allocator<8ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                                        operator[](local_88, (ulong)(uint)local_34);
                                    std::unique_ptr<
                                        graphics::TerrainPatch,
                                        std::default_delete<graphics::TerrainPatch>>::reset(puVar7, (TerrainPatch*)0);
                                }
                                psVar4 = (shared_ptr*)eastl::vector<
                                    shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>,
                                                             eastl::allocator>>,
                                    eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                                operator[](local_50, (ulong)(uint)local_34);
                                bVar1 = shared_ptr::operator_cast_to_bool(psVar4);
                                if (bVar1) {
                                    eastl::vector<
                                        shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>,
                                                                 eastl::allocator>>,
                                        eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                                    operator[](local_50, (ulong)(uint)local_34);
                                    shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>,
                                                             eastl::allocator>>::reset();
                                }
                                if (local_34 == 0.0) {
                                    psVar4 = (shared_ptr*)eastl::vector<
                                        shared_ptr<
                                            eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>,
                                        eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                                    operator[]((vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                                eastl::allocator>>,
                                                       eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                                     eastl::allocator>>*)local_40,
                                               0);
                                    bVar1 = shared_ptr::operator_cast_to_bool(psVar4);
                                    if (bVar1) {
                                        eastl::vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                               eastl::allocator>>,
                                                      eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                                    eastl::allocator>>::
                                        operator[](
                                            (vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                             eastl::allocator>>,
                                                    eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                                  eastl::allocator>>*)local_40,
                                            (ulong)(uint)local_34);
                                        shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                 eastl::allocator>>::reset();
                                    }
                                    bVar1 = shared_ptr::operator_cast_to_bool(local_48);
                                    if (bVar1) {
                                        shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                 eastl::allocator>>::reset();
                                    }
                                } else {
                                    psVar4 = (shared_ptr*)eastl::vector<
                                        shared_ptr<
                                            eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>,
                                        eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                                    operator[]((vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                                eastl::allocator>>,
                                                       eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                                     eastl::allocator>>*)local_40,
                                               (ulong)((int)local_34 - 1));
                                    bVar1 = shared_ptr::operator_cast_to_bool(psVar4);
                                    if (bVar1) {
                                        psVar4 = (shared_ptr*)
                                            eastl::vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                                   eastl::allocator>>,
                                                          eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                                        eastl::allocator>>::
                                            operator[](
                                                (vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                                 eastl::allocator>>,
                                                        eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                                      eastl::allocator>>*)local_40,
                                                (ulong)(uint)local_34);
                                        bVar1 = shared_ptr::operator_cast_to_bool(psVar4);
                                        if (bVar1) {
                                            psVar8 = (shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                               eastl::allocator>>*)
                                                eastl::vector<
                                                    shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                             eastl::allocator>>,
                                                    eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                                  eastl::allocator>>::
                                                operator[](
                                                    (vector<
                                                        shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                                 eastl::allocator>>,
                                                        eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                                      eastl::allocator>>*)local_40,
                                                    (ulong)(uint)local_34);
                                            pvVar10 =
                                                (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)
                                                    shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                             eastl::allocator>>::operator->(psVar8);
                                            eastl::vector<eastl::vector<int, eastl::allocator>,
                                                          eastl::allocator>::resize(pvVar10, 66);
                                        } else {
                                            local_60[0] = (float*)CONCAT44(local_60[0]._4_4_, 66);
                                            make_shared<
                                                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>,
                                                int>((jag*)local_2c0, (int*)local_60);
                                            psVar8 = (shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                               eastl::allocator>>*)
                                                eastl::vector<
                                                    shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                             eastl::allocator>>,
                                                    eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                                  eastl::allocator>>::
                                                operator[](
                                                    (vector<
                                                        shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                                 eastl::allocator>>,
                                                        eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                                      eastl::allocator>>*)local_40,
                                                    (ulong)(uint)local_34);
                                            shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                     eastl::allocator>>::operator=(psVar8,
                                                                                                   (shared_ptr*)
                                                                                                       local_2c0);
                                            local_2c0->~shared_ptr();
                                        }
                                        psVar8 = (shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                           eastl::allocator>>*)
                                            eastl::vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                                   eastl::allocator>>,
                                                          eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                                        eastl::allocator>>::
                                            operator[](
                                                (vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                                 eastl::allocator>>,
                                                        eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                                      eastl::allocator>>*)local_40,
                                                (ulong)(uint)local_34);
                                        local_68 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)
                                            shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                     eastl::allocator>>::operator*(psVar8);
                                        uVar19 = 0;
                                        do {
                                            uVar11 = eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                   eastl::allocator>::operator[](local_68, uVar19);
                                            eastl::vector<int, eastl::allocator>::resize(uVar11);
                                            if (local_34 == 0.0) {
                                                pvVar10 = (vector<eastl::vector<int, eastl::allocator>,
                                                                  eastl::allocator>*)
                                                    shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                             eastl::allocator>>::
                                                    operator*(
                                                        (shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                                  eastl::allocator>>*)local_48);
                                                uVar11 = eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                       eastl::allocator>::operator[](pvVar10, uVar19);
                                                eastl::vector<int, eastl::allocator>::resize(uVar11);
                                            }
                                            uVar19 = uVar19 + 1;
                                        } while (uVar19 != 66);
                                        uVar19 = 0;
                                        do {
                                            uVar11 = uVar19 + 1;
                                            uVar17 = 0;
                                            do {
                                                in_stack_fffffffffffffd08 =
                                                    (vector*)((ulong)in_stack_fffffffffffffd08 & 18446744069414584320);
                                                GetTileHeight(this, local_2c0, (int)local_34 - 1, uVar19 & 4294967295,
                                                              uVar17 & 4294967295, 1, in_stack_fffffffffffffd08);
                                                iVar18 = local_2c0._0_4_ + 960;
                                                this_06 = (vector<int, eastl::allocator>*)
                                                    eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                  eastl::allocator>::operator[](local_68, uVar11);
                                                uVar17 = uVar17 + 1;
                                                piVar12 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                                    this_06, uVar17);
                                                *piVar12 = iVar18;
                                            } while (uVar17 != 64);
                                            uVar19 = uVar11;
                                        } while (uVar11 != 64);
                                    } else {
                                        psVar4 = (shared_ptr*)
                                            eastl::vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                                   eastl::allocator>>,
                                                          eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                                        eastl::allocator>>::
                                            operator[](
                                                (vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                                 eastl::allocator>>,
                                                        eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                                      eastl::allocator>>*)local_40,
                                                (ulong)(uint)local_34);
                                        bVar1 = shared_ptr::operator_cast_to_bool(psVar4);
                                        if (bVar1) {
                                            eastl::vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                                   eastl::allocator>>,
                                                          eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                                        eastl::allocator>>::
                                            operator[](
                                                (vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                                 eastl::allocator>>,
                                                        eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                                      eastl::allocator>>*)local_40,
                                                (ulong)(uint)local_34);
                                            shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                     eastl::allocator>>::reset();
                                        }
                                    }
                                }
                            }
                            local_34 = (float)((int)local_34 + 1);
                        } while ((uint)local_34 < 4);
                        psVar4 = (shared_ptr*)(local_a0 + 64);
                        this_07 = (shared_ptr<BuildTerrainResultWaterData>*)psVar4->HeapBeginPtr();
                        psVar13 = (shared_ptr<BuildTerrainResultWaterData>*)psVar4->end();
                        if (this_07 != psVar13) {
                            local_50 = (vector<shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>,
                                                                        eastl::allocator>>,
                                               eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true,
                                                                             eastl::allocator>>*)&field_328;
                            local_48 = (shared_ptr*)&field_416;
                            local_68 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)&field_1680;
                            local_40 = psVar13;
                            do {
                                this_08 =
                                    (vector<int,
                                            eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                                        shared_ptr<BuildTerrainResultWaterData>::operator->(this_07);
                                cVar2 =
                                    eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                                     eastl::allocator>>::empty(this_08);
                                if (cVar2 == '\0') {
                                    lVar6 = shared_ptr<BuildTerrainResultWaterData>::operator->(this_07);
                                    psVar4 = ConfigProvider::GetConfig<WaterType>(local_c0, *(int*)(lVar6 + 96),
                                                                                  (DataStatus**)0);
                                    this_09 = (AnimationWrapper*)shared_ptr<WaterType>::operator->(
                                        (shared_ptr<WaterType>*)psVar4);
                                    cVar2 = this_09->IsReadyAnim();
                                    if (cVar2 == '\0') {
                                        this_10 = (WaterType*)shared_ptr<WaterType>::operator*(
                                            (shared_ptr<WaterType>*)local_50);
                                    } else {
                                        this_10 = (WaterType*)shared_ptr<WaterType>::operator*(
                                            (shared_ptr<WaterType>*)psVar4);
                                    }
                                    lVar6 = shared_ptr<BuildTerrainResultWaterData>::operator->(this_07);
                                    local_34 = (float)CONCAT31(local_34._1_3_, 1);
                                    WaterType::operator_cast_to_WaterPatchConfig((WaterPatchConfig*)local_2c0, this_10);
                                    pWVar14 =
                                        (WaterPatchConfig*)shared_ptr<BuildTerrainResultWaterData>::operator->(this_07);
                                    lVar15 = shared_ptr<BuildTerrainResultWaterData>::operator->(this_07);
                                    psVar4 = (shared_ptr*)(lVar6 + 64);
                                    local_90 = local_98;
                                    MakeSharedPool<graphics::WaterPatch, 32>::MakeShared<
                                        graphics::RT7Core*&, math::AABB&, bool, graphics::WaterPatchConfig,
                                        eastl::vector<unsigned short, eastl::allocator>,
                                        eastl::vector<graphics::WaterPatchVertex, eastl::allocator>,
                                        math::Matrix44T<float>*>((shared_ptr*)local_60,
                                                                 (MakeSharedPool<graphics::WaterPatch, 32>*)local_68,
                                                                 (RT7Core**)psVar4, (AABB*)&local_34, (bool*)local_2c0,
                                                                 pWVar14, (vector*)(lVar15 + 32), (vector*)&local_90,
                                                                 (Matrix44T**)in_stack_fffffffffffffd18);
                                    local_48->push_back(local_60);
                                    local_60->~shared_ptr();
                                    psVar13 = local_40;
                                }
                                this_07 = this_07 + 16;
                            } while (this_07 != psVar13);
                        }
                    } else {
                        m_heightZero = 1;
                    }
                    shared_ptr<BuildTerrainMain>::reset();
                    uVar16 = FrameTime::GetCurrentTimeMS();
                    field_824 = uVar16;
                    field_852 = -1.0;
                    m_hasFade = 1;
                    bVar1 = field_848 == field_66;
                    uVar19 = CONCAT71((int7)((ulong)psVar4 >> 8), bVar1);
                    if (bVar1) {
                        CreateCombinedLocalAABB(this);
                    }
                    local_78.~shared_ptr();
                    goto LAB_1003f99ee;
                }
                shared_ptr<BuildTerrainMain>::reset();
            }
        } else {
            local_60[0]._0_4_ = 65536;
            this_02 = (World*)shared_ptr<World>::operator->((shared_ptr<World>*)&field_176);
            this_03 = (Frustum*)this_02->GetLastFrustum();
            this_04 = (OpenGLView*)GetNode();
            pAVar3 = (AABB*)this_04->GetCursorMutex();
            cVar2 = this_03->TestIntersection(pAVar3);
            if (cVar2 != '\0') {
                local_60[0]._0_4_ = (int)local_60[0] + 8;
            }
            if (param_2 < 2) {
                local_60[0]._0_4_ = (int)local_60[0] + 4;
            } else if (param_2 < 4) {
                local_60[0]._0_4_ = (int)local_60[0] + 2;
            }
            local_2c0[8] = field_66;
            if (field_65 < local_2c0[8]) {
                local_60[0]._0_4_ = (int)local_60[0] + -2;
            }
            local_2c0._0_4_ = field_288;
            local_2c0._4_4_ = field_292;
            local_2c0._16_8_ = &field_296;
            local_2a8 = &field_312;
            local_2a0 = &field_328;
            local_298 = field_448[0];
            bucket_make_shared<BuildTerrainMain, graphics::RT7Core*&, int&, TerrainInputData&>(
                (jag*)&local_78, &field_1680, (int*)local_60, (TerrainInputData*)local_2c0);
            shared_ptr<BuildTerrainMain>::operator=((shared_ptr<BuildTerrainMain>*)this_00, &local_78);
            local_78.~shared_ptr();
            field_848 = field_66;
            new (&local_78) shared_ptr<oldscape::dash3d::Decor>(this_00);
            param_1->SubmitJob(&local_78);
            local_78.~shared_ptr();
        }
        uVar19 = 0;
    LAB_1003f99ee:
        return uVar19 & 4294967295;
    }

    // 0x1003fa130, 256 bytes, placed by class name and debug map
    // Terrain::CreateCombinedLocalAABB()
    void Terrain::CreateCombinedLocalAABB() {
        undefined1* this_00;
        NXTPixToolkit* pNVar1;
        AABB* pAVar2;
        unique_ptr* puVar5;
        shared_ptr<graphics::WaterPatch>* psVar6;
        unique_ptr* this_01;
        shared_ptr<graphics::WaterPatch>* this_02;

        this_00 = &field_192;
        this_00->Reset();
        this_01 = (unique_ptr*)(&field_344)->HeapBeginPtr();
        puVar5 = (unique_ptr*)(&field_344)->end();
        for (; this_01 != puVar5; this_01 = this_01 + 8) {
            if (std::unique_ptr::operator_cast_to_bool(this_01)) {
                pNVar1 =
                    (NXTPixToolkit*)std::
                        unique_ptr<graphics::TerrainPatch, std::default_delete<graphics::TerrainPatch>>::operator->(
                            (unique_ptr<graphics::TerrainPatch, std::default_delete<graphics::TerrainPatch>>*)this_01);
                pAVar2 = (AABB*)pNVar1->GetScreen();
                this_00->Union(pAVar2);
            }
        }
        this_02 = (shared_ptr<graphics::WaterPatch>*)(&field_416)->HeapBeginPtr();
        psVar6 = (shared_ptr<graphics::WaterPatch>*)(&field_416)->end();
        for (; this_02 != psVar6; this_02 = this_02 + 16) {
            pNVar1 = (NXTPixToolkit*)shared_ptr<graphics::WaterPatch>::operator->(this_02);
            pAVar2 = (AABB*)pNVar1->GetScreen();
            this_00->Union(pAVar2);
        }
        if (this_00->IsValid() == '\0') {
            RemoveAABB();
        } else {
            SetAABB(this_00);
        }
    }

    // 0x1003fa9d0, 368 bytes, placed by class name
    // Terrain::GetTileHeight(int&, int, int, int, bool, HeightOffsetType) const
    undefined* Terrain::GetTileHeight(int* param_1, int param_2, int param_3, int param_4, char param_5, int param_7) {
        undefined1* this_00;
        bool bVar1;
        int iVar2;
        vector<eastl::vector<int, eastl::allocator>, eastl::allocator>* pvVar3;
        vector<int, eastl::allocator>* pvVar4;
        int* piVar5;
        shared_ptr* this_01;
        shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>* this_02;
        undefined** ppuVar6;
        int local_34;

        *param_1 = -1;
        if (m_heightZero == '\0') {
            this_00 = &field_456;
            local_34 = param_2;
            bVar1 = ArrayValidPosition<
                eastl::fixed_vector<
                    shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>, 4ul,
                    true, eastl::allocator>,
                int>((fixed_vector*)this_00, &local_34);
            ppuVar6 = &DataStatus::MISSING;
            if (!bVar1)
                goto LAB_1003fab2d;
            if ((param_5 == '\0') || (local_34 != 0)) {
                this_01 = (shared_ptr*)
                    eastl::vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>,
                                  eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>,
                                eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)this_00,
                        (long)local_34);
                bVar1 = shared_ptr::operator_cast_to_bool(this_01);
                if (!bVar1)
                    goto LAB_1003fab2d;
                this_02 = (shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>*)
                    eastl::vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>,
                                  eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>,
                                eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)this_00,
                        (long)local_34);
                pvVar3 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)
                    shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::operator*(
                        this_02);
                pvVar4 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                        pvVar3, (long)(param_3 + 1));
                piVar5 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar4, (long)(param_4 + 1));
                *param_1 = *piVar5;
            } else {
                bVar1 = m_waterHeights->operator_cast_to_bool();
                if (!bVar1)
                    goto LAB_1003fab2d;
                pvVar3 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)
                    shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::operator*(
                        (shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>*)
                            m_waterHeights);
                pvVar4 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                        pvVar3, (long)(param_3 + 1));
                piVar5 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar4, (long)(param_4 + 1));
                *param_1 = *piVar5;
            }
            if (param_7 == 0) {
                ppuVar6 = &DataStatus::READY;
                goto LAB_1003fab2d;
            }
            iVar2 = GetLocationHeightOffset(this, local_34, param_3, param_4, param_7);
            iVar2 = iVar2 + *param_1;
            ppuVar6 = &DataStatus::READY;
        } else {
            ppuVar6 = &DataStatus::MISSING;
            iVar2 = 0;
        }
        *param_1 = iVar2;
    LAB_1003fab2d:
        return *ppuVar6;
    }

    // 0x1003fad70, 288 bytes, placed by class name
    // Terrain::GetTerrainData(shared_ptr<PacketT<Array<unsigned char, eastl::allocator> > >&, Js5ResourceProvider*, int, int)
    undefined* Terrain::GetTerrainData(shared_ptr* param_1, Js5ResourceProvider* param_2, int param_3, int param_4) {
        undefined* puVar1;
        undefined8 uVar2;
        LogStream local_c8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        puVar1 = (undefined*)param_2->GetFile(param_1, Js5Archive::JS5_MAPS, param_4 << 7 | param_3, 5,
                                              (Priority*)Priority::HIGH, true, false, false);
        if (puVar1 == DataStatus::MISSING) {
            uVar2 = logger::default_logger();
            new (&local_c8) logger::LogStream((LogStream*)&LOGGER_SCENE);
            logger::Logger::Log(uVar2, 0, &local_c8, 3,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "scene/entities/Terrain.cpp",
                                350, "TerrainData [%ix%i] missing", param_3, param_4);
            local_c8.~LogStream();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return puVar1;
    }

    // 0x1003fae90, 32 bytes, placed by class name
    // Terrain::PreventFadeIn()
    void Terrain::PreventFadeIn() {
        if (m_hasFade != '\0') {
            field_852 = 0.0;
            m_hasFade = 0;
        }
    }

    // 0x1003faeb0, 80 bytes, placed by class name
    // Terrain::Destruct()
    void Terrain::Destruct() {
        (&field_344)->clear();
        (&field_456)->clear();
        shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::reset();
        (&field_600)->clear();
    }

    // 0x1003faf30, 240 bytes, placed by class name
    // Terrain::MainLogic(graphics::RT7Core&, unsigned int, math::Matrix44T<float> const&)
    void Terrain::MainLogic(RT7Core* param_1, uint param_2, Matrix44T* param_3) {
        long lVar1;
        shared_ptr<graphics::WaterPatch>* this_00;
        shared_ptr<graphics::WaterPatch>* psVar2;
        WaterPatch* this_01;
        float fVar3;

        if ((m_hasFade != '\0') && (field_852 <= 0.0 && field_852 != 0.0)) {
            lVar1 = FrameTime::GetCurrentTimeMS();
            fVar3 = (float)(ulong)(lVar1 - field_824) * 0.0033333334 + -1.0;
            field_852 = fVar3;
            if (0.0 <= fVar3) {
                m_hasFade = 0;
                field_852 = 0.0;
            }
        }
        this_00 = (shared_ptr<graphics::WaterPatch>*)(&field_416)->HeapBeginPtr();
        psVar2 = (shared_ptr<graphics::WaterPatch>*)(&field_416)->end();
        for (; this_00 != psVar2; this_00 = this_00 + 16) {
            this_01 = (WaterPatch*)shared_ptr<graphics::WaterPatch>::operator->(this_00);
            this_01->SetFade(field_852);
        }
        UpdateIrradiance(this);
    }

    // 0x1003fb050, 384 bytes, placed by class name
    // Terrain::UpdateIrradiance()
    void Terrain::UpdateIrradiance() {
        undefined1* this_00;
        uint uVar1;
        byte bVar2;
        char cVar3;
        int iVar5;
        World* pWVar6;
        shared_ptr<MapSquare>* this_01;
        int* piVar7;
        uint* puVar8;
        unique_ptr* this_02;
        TerrainPatch* this_03;
        IrradianceEffect* this_04;
        ulong uVar9;
        IrradianceSHCoefConsts local_a8;

        this_00 = &field_176;
        pWVar6 = (World*)shared_ptr<World>::operator->((shared_ptr<World>*)this_00);
        this_01 = (shared_ptr<MapSquare>*)pWVar6->GetMapSquare(field_288, field_292);
        pWVar6 = (World*)shared_ptr<World>::operator->((shared_ptr<World>*)this_00);
        iVar5 = pWVar6->GetMaxRenderLevel();
        pWVar6 = (World*)shared_ptr<World>::operator->((shared_ptr<World>*)this_00);
        piVar7 = (int*)pWVar6->GetCentreSquarePosition();
        bVar2 = GetNumTilesPerRow();
        if (bVar2 < 3) {
            if ((*piVar7 + -1 <= (int)field_288) && ((int)field_288 <= *piVar7 + 1)) {
                if ((piVar7[1] + -1 <= (int)field_292) && ((int)field_292 <= piVar7[1] + 1))
                    goto LAB_1003fb0c7;
            }
        }
        iVar5 = 0;
    LAB_1003fb0c7:
        cVar3 = (&field_344)->empty();
        if (cVar3 == '\0') {
            local_a8.field_0 = iVar5 + 1;
            puVar8 = (uint*)std::min<int>((int*)&local_a8, (int*)&constants::MapConstants::LEVELS);
            uVar1 = *puVar8;
            shared_ptr<MapSquare>::operator->(this_01);
            local_a8.GetIrradianceSHConsts();
            if (0 < (int)uVar1) {
                uVar9 = 0;
                do {
                    this_02 = (unique_ptr*)eastl::vector<
                        std::unique_ptr<graphics::TerrainPatch, std::default_delete<graphics::TerrainPatch>>,
                        eastl::fixed_vector_allocator<8ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<std::unique_ptr<graphics::TerrainPatch, std::default_delete<graphics::TerrainPatch>>,
                                eastl::fixed_vector_allocator<8ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)&field_344,
                        uVar9);
                    if (std::unique_ptr::operator_cast_to_bool(this_02)) {
                        this_03 =
                            (TerrainPatch*)
                                std::unique_ptr<graphics::TerrainPatch, std::default_delete<graphics::TerrainPatch>>::
                                operator->(
                                    (unique_ptr<graphics::TerrainPatch, std::default_delete<graphics::TerrainPatch>>*)
                                        this_02);
                        this_04 = (IrradianceEffect*)this_03->GetIrradianceEffect();
                        this_04->SetCoefficients(&local_a8);
                    }
                    uVar9 = uVar9 + 1;
                } while (uVar1 != uVar9);
            }
        }
    }

    // 0x1003fb200, 1104 bytes, placed by class name
    // Terrain::GatherDrawableElements(graphics::DrawableQueue&, graphics::RT7Core&, math::Matrix44T<float> const&, graphics::SceneViewData const&, graphics::EffectManager const&)
    void Terrain::GatherDrawableElements(DrawableQueue* param_1, RT7Core* param_2, Matrix44T* param_3,
                                         SceneViewData* param_4, EffectManager* param_5) {
        undefined1* this_00;
        char cVar1;
        bool bVar2;
        char cVar3;
        undefined1 uVar4;
        bool bVar5;
        int iVar6;
        World* pWVar7;
        undefined8* puVar8;
        Terrain* this_01;
        TerrainPatch* pTVar9;
        shared_ptr<graphics::WaterPatch>* this_02;
        shared_ptr<graphics::WaterPatch>* psVar10;
        long* plVar11;
        ulong uVar12;
        undefined4 in_stack_fffffffffffffd0c;
        undefined4 local_2b0;
        bool local_28a;
        bool local_289;
        undefined1 local_288[296];
        fixed_vector<unsigned char, 256ul, true, eastl::allocator> local_160[296];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar1 = (*(code*)field_0[35])();
        if (cVar1 != '\0') {
            math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_224, param_3);
            this_00 = &field_176;
            pWVar7 = (World*)shared_ptr<World>::operator->((shared_ptr<World>*)this_00);
            pWVar7->GetCentreSquarePosition();
            pWVar7 = (World*)shared_ptr<World>::operator->((shared_ptr<World>*)this_00);
            pWVar7->GetMaxRenderLevel();
            GetNumTilesPerRow();
            local_28a = true;
            bVar2 = (bool)param_4->HasRenderPass();
            local_2b0 = 0;
            if (bVar2 != false) {
                local_2b0 = 0;
                puVar8 = (undefined8*)eastl::vector<
                    graphics::RenderPass*, eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<graphics::RenderPass*,
                                   eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)&param_4
                               ->field_520,
                           0);
                iVar6 = (*puVar8)->GetPos();
                if (iVar6 == 5) {
                    puVar8 = (undefined8*)
                        eastl::vector<graphics::RenderPass*,
                                      eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<graphics::RenderPass*,
                                    eastl::fixed_vector_allocator<8ul, 8ul, 8ul, 0ul, true, eastl::allocator>>*)&param_4
                                ->field_520,
                            0);
                    local_2b0 = (*puVar8)->GetLevel();
                }
            }
            cVar1 = '\x01';
            if (bVar2 == false) {
                cVar1 = param_4->HasShadowPass();
            }
            if (cVar1 == '\0') {
                cVar3 = param_4->HasRenderPass(4);
                uVar4 = true;
                if (cVar3 == '\0') {
                    uVar4 = param_4->HasRenderPass(2);
                }
            } else {
                uVar4 = false;
            }
            if ((cVar1 == '\0') && (cVar1 = param_4->HasRenderPass(3), cVar1 == '\0')) {
                param_4->HasRenderPass(9);
            }
            uVar12 = 0;
            do {
                this_01 = (Terrain*)
                    eastl::vector<std::unique_ptr<graphics::TerrainPatch, std::default_delete<graphics::TerrainPatch>>,
                                  eastl::fixed_vector_allocator<8ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<std::unique_ptr<graphics::TerrainPatch, std::default_delete<graphics::TerrainPatch>>,
                                eastl::fixed_vector_allocator<8ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)&field_344,
                        uVar12);
                bVar5 = this_01->operator_cast_to_bool();
                if (bVar5) {
                    local_289 = false;
                    eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator>::fixed_vector(local_160);
                    bVar5 = (bool)
                        std::unique_ptr<graphics::TerrainPatch, std::default_delete<graphics::TerrainPatch>>::operator*(
                            (unique_ptr<graphics::TerrainPatch, std::default_delete<graphics::TerrainPatch>>*)this_01);
                    iVar6 = shared_ptr<World>::operator*((shared_ptr<World>*)this_00);
                    CalculateRemoveRoofChunks((Terrain*)local_288, (bool*)this, &local_289, (TerrainPatch*)&local_28a,
                                              bVar5, (bool)uVar4, bVar2, false, 0, (int)uVar12,
                                              (World*)CONCAT44(in_stack_fffffffffffffd0c, local_2b0), iVar6);
                    eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator>::operator=(
                        local_160, (fixed_vector*)local_288);
                    local_288->~fixed_vector();
                    if (local_289 == false) {
                        pTVar9 =
                            (TerrainPatch*)
                                std::unique_ptr<graphics::TerrainPatch, std::default_delete<graphics::TerrainPatch>>::
                                operator->(
                                    (unique_ptr<graphics::TerrainPatch, std::default_delete<graphics::TerrainPatch>>*)
                                        this_01);
                        pTVar9->GatherDrawableElements(param_1, param_2, param_4, param_5, local_160);
                    }
                    bVar5 = local_28a;
                    pTVar9 = (TerrainPatch*)
                        std::unique_ptr<graphics::TerrainPatch, std::default_delete<graphics::TerrainPatch>>::operator*(
                            (unique_ptr<graphics::TerrainPatch, std::default_delete<graphics::TerrainPatch>>*)this_01);
                    DebugShowPrimitiveTerrainPatchWhole(this_01, (bool)uVar4, bVar5, pTVar9, (int)uVar12);
                    eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator>::~fixed_vector(local_160);
                }
                uVar12 = uVar12 + 1;
            } while (uVar12 != 4);
            this_02 = (shared_ptr<graphics::WaterPatch>*)(&field_416)->HeapBeginPtr();
            psVar10 = (shared_ptr<graphics::WaterPatch>*)(&field_416)->end();
            for (; this_02 != psVar10; this_02 = this_02 + 16) {
                plVar11 = (long*)shared_ptr<graphics::WaterPatch>::operator->(this_02);
                (**(code**)(*plVar11 + 16))(plVar11, param_1, param_2, param_4, param_5);
            }
            (&field_864, param_1, param_2, param_4, param_5)->GatherDrawableElements();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1003fb690, 1360 bytes, placed by class name
    // Terrain::CalculateRemoveRoofChunks(bool&, bool&, graphics::TerrainPatch&, bool, bool, bool, bool, int, int, World&, int)
    Terrain* Terrain::CalculateRemoveRoofChunks(bool* param_1, bool* param_2, TerrainPatch* param_3, bool param_4,
                                                bool param_5, bool param_6, bool param_7, int param_8, int param_9,
                                                World* param_10, int param_11) {
        bool bVar1;
        int iVar2;
        char cVar3;
        bool bVar4;
        undefined1 uVar5;
        int iVar6;
        hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*
            this_00;
        pair* ppVar7;
        int* piVar8;
        ulong uVar9;
        char* pcVar10;
        uint uVar11;
        undefined8 extraout_RDX;
        uint uVar12;
        uint uVar13;
        uint uVar14;
        undefined7 in_register_00000081;
        uint uVar15;
        ulong uVar16;
        undefined1 auVar17[16];
        undefined4 in_stack_00000034;
        int in_stack_00000038;
        undefined8 local_f0;
        undefined8 local_e8;
        undefined1 local_e0[24];
        bool* local_c8;
        Rect* local_c0;
        pair<int, graphics::RenderChunk> local_b8[32];
        RemoveRoof* local_98;
        Terrain* local_90;
        TerrainPatch* local_88;
        ulong local_80;
        TerrainPatch* local_78;
        ulong local_70;
        undefined1 local_68[16];
        ulong local_58;
        ulong local_50;
        ulong local_48;
        Terrain* local_40;
        pair* local_38;

        local_78 = (TerrainPatch*)CONCAT71(in_register_00000081, param_4);
        local_c8 = param_2;
        local_90 = (Terrain*)param_1;
        local_88 = param_3;
        new (this) eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator>();
        if (param_6) {
            if (param_9 == 0) {
                return this;
            }
            if ((int)param_10 < param_9) {
                local_b8[0] = (pair<int, graphics::RenderChunk>)0;
                push_back(local_b8);
                return this;
            }
            return this;
        }
        if (!param_5) {
            return this;
        }
        if (param_9 < 1) {
            local_b8[0] = (pair<int, graphics::RenderChunk>)0;
            push_back(local_b8);
        } else {
            local_98 = (RemoveRoof*)(CONCAT44(in_stack_00000034, param_11))->GetRemoveRoof();
            cVar3 = local_98->AnyRoofRemoved();
            if (cVar3 == '\0') {
                cVar3 = (CONCAT44(in_stack_00000034, param_11))->IsRemoveRoofSelective();
                if (cVar3 != '\0')
                    goto LAB_1003fbb56;
            }
            this_00 = (hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                 eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                 eastl::prime_rehash_policy, false, true, true>*)local_78->GetRenderChunks();
            local_c0 = (Rect*)local_98->GetBoundsForLevel(param_9);
            local_68 = eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                        eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                        eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                        eastl::prime_rehash_policy, false, true, true>::begin();
            auVar17 = eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                       eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                       eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                       eastl::prime_rehash_policy, false, true, true>::end(this_00);
            local_e8 = auVar17._8_8_;
            local_70 = 0;
            local_40 = this;
            while (true) {
                local_f0 = auVar17._0_8_;
                bVar4 = eastl::operator!=((eastl*)local_68, (hashtable_iterator_base*)&local_f0, auVar17._8_8_);
                if (!bVar4)
                    break;
                ppVar7 = (pair*)local_68->HeapBeginPtr();
                if (*(uint*)ppVar7 == 0) {
                    local_b8[0] = (pair<int, graphics::RenderChunk>)0;
                    push_back(local_b8);
                } else if ((0 < (int)*(uint*)ppVar7) && (0 < (int)*(uint*)(ppVar7 + 12))) {
                    uVar13 = *(uint*)(ppVar7 + 16);
                    uVar15 = *(uint*)(ppVar7 + 20);
                    uVar11 = uVar13 + 63;
                    if (-1 < (int)uVar13) {
                        uVar11 = uVar13;
                    }
                    uVar12 = (int)uVar13 % 64 | (((int)uVar11 >> 6) + local_90->field_288) * 64;
                    uVar13 = *(uint*)(ppVar7 + 24);
                    uVar11 = uVar13 + 63;
                    if (-1 < (int)uVar13) {
                        uVar11 = uVar13;
                    }
                    uVar11 = (int)uVar13 % 64 | (((int)uVar11 >> 6) + local_90->field_292) * 64;
                    local_58 = (ulong)uVar11;
                    uVar13 = uVar15 + 63;
                    if (-1 < (int)uVar15) {
                        uVar13 = uVar15;
                    }
                    uVar14 = (int)uVar15 % 64 | (((int)uVar13 >> 6) + local_90->field_288) * 64;
                    local_48 = (ulong)uVar14;
                    uVar13 = *(uint*)(ppVar7 + 28);
                    uVar15 = uVar13 + 63;
                    if (-1 < (int)uVar13) {
                        uVar15 = uVar13;
                    }
                    uVar13 = (int)uVar13 % 64 | (((int)uVar15 >> 6) + local_90->field_292) * 64;
                    local_50 = (ulong)uVar13;
                    local_38 = ppVar7;
                    new (local_e0)
                        oldscape::dash3d::GridRect(uVar12, uVar11, (uVar14 - uVar12) + 1, (uVar13 - uVar11) + 1);
                    piVar8 = (int*)local_e0->second();
                    if (*piVar8 < 0) {
                    LAB_1003fb8cc:
                        /* WARNING: Subroutine does not return */
                        LogAssert("rect.Width() >= 0 && rect.Height() >= 0",
                                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                  "scene/entities/Terrain.cpp",
                                  1070, (char*)0);
                    }
                    piVar8 = (int*)local_e0->qw();
                    if (*piVar8 < 0)
                        goto LAB_1003fb8cc;
                    cVar3 = (CONCAT44(in_stack_00000034, param_11))->IsRemoveRoofSelective();
                    local_80 = (ulong)uVar12;
                    if (cVar3 == '\0') {
                    LAB_1003fb912:
                        local_e0._16_8_ = (CONCAT44(in_stack_00000034, param_11))->GetLinkMap();
                        iVar6 = local_e0._16_8_->GetTileLinkZero(1, uVar12, (int)local_58);
                        iVar6 = ((iVar6 << 30) >> 31) + param_9;
                        uVar9 = (CONCAT44(in_stack_00000034, param_11))->IsRemoveRoofSelective();
                        if ((char)uVar9 == '\0') {
                            bVar4 = in_stack_00000038 < iVar6;
                        } else {
                            uVar9 = local_80;
                            if ((int)local_48 < (int)local_80) {
                                bVar4 = false;
                            } else {
                                iVar2 = (int)local_50;
                                bVar4 = false;
                                do {
                                    uVar16 = local_58 & 4294967295;
                                    uVar13 = (uint)uVar9;
                                    if ((int)local_58 <= (int)local_50) {
                                        do {
                                            uVar15 = (uint)uVar16;
                                            cVar3 = local_98->IsRoofRemoved(iVar6, uVar13, uVar15);
                                            if (cVar3 != '\0') {
                                                uVar11 = local_e0._16_8_->GetRemoveRoofID(param_9, uVar13, uVar15);
                                                if (uVar11 == *(uint*)local_38) {
                                                    bVar4 = true;
                                                    uVar13 = (uint)local_48;
                                                    break;
                                                }
                                            }
                                            uVar16 = (ulong)(uVar15 + 1);
                                        } while (iVar2 + 1U != uVar15 + 1);
                                    }
                                    uVar9 = (ulong)(uVar13 + 1);
                                } while ((int)uVar13 < (int)local_48);
                            }
                        }
                        bVar4 = !bVar4;
                        if (bVar4) {
                            if (255 < *(uint*)local_38) {
                                /* WARNING: Subroutine does not return */
                                LogAssert(
                                    "chunkPair.first <= std::numeric_limits<uint8>::max() && chunkPair.first >= 0",
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/scene/entities/Terrain.cpp",
                                    1151, (char*)0);
                            }
                            local_b8[0] = *(pair<int, graphics::RenderChunk>*)local_38;
                            local_40->push_back(local_b8);
                            bVar4 = true;
                        } else {
                            local_70 = CONCAT71((int7)(uVar9 >> 8), 1);
                        }
                    } else {
                        cVar3 = local_e0->Intersects(local_c0);
                        if (cVar3 != '\0')
                            goto LAB_1003fb912;
                        if (255 < *(uint*)local_38) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("chunkPair.first <= std::numeric_limits<uint8>::max() && chunkPair.first >= 0",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                      "runetek5/scene/entities/Terrain.cpp",
                                      1078, (char*)0);
                        }
                        local_b8[0] = *(pair<int, graphics::RenderChunk>*)local_38;
                        push_back(local_b8);
                        bVar4 = true;
                        iVar6 = param_9;
                    }
                    bVar1 = *(bool*)&local_88->field_0;
                    eastl::pair<int, graphics::RenderChunk>::pair<int const, graphics::RenderChunk, void>(local_b8,
                                                                                                          local_38);
                    uVar5 = DebugShowPrimitiveTerrainPatch(local_90, bVar1, local_78, (pair*)local_b8, param_9, iVar6,
                                                           (Rect*)local_e0, (int)local_80, (int)local_58, (int)local_48,
                                                           (int)local_50, bVar4);
                    *(undefined1*)&local_88->field_0 = uVar5;
                    this = local_40;
                }
                eastl::hashtable_iterator<eastl::pair<int const, oldscape::midi2::MidiFile::PatchNoteSet>, false,
                                          false>::
                operator++(
                    (hashtable_iterator<eastl::pair<int const, oldscape::midi2::MidiFile::PatchNoteSet>, false, false>*)
                        local_68);
                auVar17._8_8_ = extraout_RDX;
                auVar17._0_8_ = local_f0;
            }
            if ((local_70 & 1) != 0) {
                cVar3 = empty();
                if (cVar3 != '\0') {
                    *local_c8 = true;
                }
            }
        }
    LAB_1003fbb56:
        cVar3 = empty();
        if (cVar3 == '\0') {
            pcVar10 = (char*)front();
            if (*pcVar10 != '\0') {
                local_b8[0] = (pair<int, graphics::RenderChunk>)0;
                push_back(local_b8);
            }
        }
        return this;
    }

    // 0x1003fbc50, 720 bytes, placed by class name
    // Terrain::DebugShowPrimitiveTerrainPatchWhole(bool, bool, graphics::TerrainPatch&, int)
    void Terrain::DebugShowPrimitiveTerrainPatchWhole(bool param_1, bool param_2, TerrainPatch* param_3, int param_4) {
        uint uVar2;
        uint uVar3;
        undefined4 uVar4;
        undefined4 uVar5;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_00;
        vector<graphics::TerrainPatchVertex, eastl::allocator>* this_01;
        math* this_02;
        vector* pvVar6;
        float* pfVar7;
        long* plVar8;
        char* pcVar10;
        eastl::string local_1c0[32];
        undefined8 local_1a0[2];
        allocator local_190[8];
        undefined1 local_188[12];
        Layout local_17c[16];
        float local_16c;
        fixed_string<char, 256, true, eastl::allocator> local_168[304];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (((m_debugPrimitiveText != '\0') && (param_1)) && (param_2)) {
            this_00 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                          param_3->GetVertexDataBuffer();
            if (eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>::empty(
                    this_00) == '\0') {
                this_01 = (vector<graphics::TerrainPatchVertex, eastl::allocator>*)param_3->GetVertexDataBuffer();
                this_02 = (math*)eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>::operator[](this_01, 0);
                local_1a0[0] = math::Vector3FromVector3T<short>(this_02, (Vector3T*)(type*)0);
                pvVar6 = local_1a0->SSOBeginPtr(0);
                *(float*)pvVar6 = *(float*)pvVar6 + 16383.0;
                pfVar7 = (float*)local_1a0->second();
                *pfVar7 = *pfVar7 + 16383.0;
                local_168->GetWorldTransform();
                math::Vector3T<float>::operator*=((Vector3T<float>*)local_1a0, (Matrix44T*)local_168);
                new ((local_188 + 8)) CoordFine(param_4, local_1a0);
                eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_168);
                uVar2 = ((local_188 + 8))->GetMapSquareX();
                uVar3 = ((local_188 + 8))->GetMapSquareZ();
                uVar4 = ((local_188 + 8))->GetLocalX();
                uVar5 = ((local_188 + 8))->GetLocalZ();
                pcVar10 = "TerrainPatch:%p @ %d,%d,%d,%d,%d";
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                    sprintf((char*)local_168, "TerrainPatch:%p @ %d,%d,%d,%d,%d", param_3, (ulong)(uint)param_4,
                            (ulong)uVar2, (ulong)uVar3, uVar4, uVar5);
                uVar2 = stringtools::hash32<eastl::fixed_string<char, 256, true, eastl::allocator>>(
                    (fixed_string*)local_168);
                local_16c = (float)((int)uVar2 % 100);
                pvVar6 = eastl::string::Layout::SSOBeginPtr(local_17c, (type*)pcVar10);
                *(float*)pvVar6 = *(float*)pvVar6 + local_16c;
                pfVar7 = (float*)local_17c->y();
                *pfVar7 = *pfVar7 + local_16c;
                pfVar7 = (float*)local_17c->second();
                *pfVar7 = local_16c + *pfVar7;
                plVar8 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar8 != (long*)0) {
                    pcVar10 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                    eastl::allocator::allocator(local_190, "EASTL basic_string");
                    eastl::string::basic_string(local_1c0, pcVar10, local_190);
                    new (local_188) oldscape::sidebars::SideBarData(-8323200, 0);
                    (**(code**)(*plVar8 + 136))(plVar8, local_17c, local_1c0, local_188);
                    eastl::string::~basic_string(local_1c0);
                }
                /* WARNING: Subroutine does not return */
                local_168->~fixed_string();
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1003fbf20, 176 bytes, placed by class name
    // Terrain::AllocateLocationHeightOffsets(int)
    void Terrain::AllocateLocationHeightOffsets(int param_1) {
        array<std::array<HeightOffset, 64ul>, 64ul>* this_00;
        array<HeightOffset, 64ul>* this_01;
        char cVar1;
        ulong uVar2;
        ulong uVar3;
        undefined1* this_02;
        undefined4 local_38[2];

        this_02 = &field_560;
        cVar1 = this_02->empty();
        if (cVar1 != '\0') {
            uVar2 = 0;
            this_02->set_max_size(4, 0);
            do {
                this_00 = (array<std::array<HeightOffset, 64ul>, 64ul>*)
                    Array<std::array<std::array<HeightOffset, 64ul>, 64ul>, eastl::allocator>::operator[](
                        (Array<std::array<std::array<HeightOffset, 64ul>, 64ul>, eastl::allocator>*)this_02, uVar2);
                uVar3 = 0;
                do {
                    this_01 = (array<HeightOffset, 64ul>*)std::array<std::array<HeightOffset, 64ul>, 64ul>::operator[](
                        this_00, uVar3);
                    local_38[0] = 0;
                    std::array<HeightOffset, 64ul>::fill(this_01, (HeightOffset*)local_38);
                    uVar3 = uVar3 + 1;
                } while (uVar3 != 64);
                uVar2 = uVar2 + 1;
            } while (uVar2 != 4);
        }
        Array<std::array<std::array<HeightOffset, 64ul>, 64ul>, eastl::allocator>::operator[](
            (Array<std::array<std::array<HeightOffset, 64ul>, 64ul>, eastl::allocator>*)this_02, (long)param_1);
    }

    // 0x1003fc1e0, 256 bytes, placed by class name
    // Terrain::ImportHeightAdjustments(Terrain const&)
    void Terrain::ImportHeightAdjustments(Terrain* param_1) {
        int iVar1;
        array<std::array<HeightOffset, 64ul>, 64ul>* this_00;
        array<std::array<HeightOffset, 64ul>, 64ul>* this_01;
        array<HeightOffset, 64ul>* this_02;
        array<HeightOffset, 64ul>* this_03;
        undefined4* puVar2;
        undefined4* puVar3;
        ulong uVar4;
        ulong uVar5;
        ulong uVar6;

        uVar4 = 0;
        do {
            iVar1 = (&param_1->field_560)->end();
            if ((long)uVar4 < (long)iVar1) {
                this_00 = (array<std::array<HeightOffset, 64ul>, 64ul>*)
                    Array<std::array<std::array<HeightOffset, 64ul>, 64ul>, eastl::allocator>::operator[](
                        (Array<std::array<std::array<HeightOffset, 64ul>, 64ul>, eastl::allocator>*)&param_1->field_560,
                        uVar4);
                this_01 = (array<std::array<HeightOffset, 64ul>, 64ul>*)AllocateLocationHeightOffsets(this, (int)uVar4);
                uVar6 = 0;
                do {
                    this_02 = (array<HeightOffset, 64ul>*)std::array<std::array<HeightOffset, 64ul>, 64ul>::operator[](
                        this_01, uVar6);
                    this_03 = (array<HeightOffset, 64ul>*)std::array<std::array<HeightOffset, 64ul>, 64ul>::operator[](
                        this_00, uVar6);
                    uVar5 = 0;
                    do {
                        puVar2 = (undefined4*)std::array<HeightOffset, 64ul>::operator[](this_03, uVar5);
                        puVar3 = (undefined4*)std::array<HeightOffset, 64ul>::operator[](this_02, uVar5);
                        *puVar3 = *puVar2;
                        uVar5 = uVar5 + 1;
                    } while (uVar5 != 64);
                    uVar6 = uVar6 + 1;
                } while (uVar6 != 64);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 != 4);
    }

    // 0x1003fc390, 352 bytes, placed by class name
    // Terrain::AddLocationHeightOffset(int, int, int, int, int, int, int)
    void Terrain::AddLocationHeightOffset(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                                          int param_7) {
        bool bVar1;
        array<std::array<HeightOffset, 64ul>, 64ul>* this_00;
        array<HeightOffset, 64ul>* this_01;
        short* psVar3;
        ulong uVar4;
        ulong uVar5;

        if (param_6 != 0 || param_7 != 0) {
            if (constants::MapConstants::IsValidLevel(param_1) != '\0') {
                if ((short)param_6 != param_6) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("offsetGroundDecor >= std::numeric_limits<int16>::min() && offsetGroundDecor <= "
                              "std::numeric_limits<int16>::max()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/entities/Terrain.cpp",
                              543, (char*)0);
                }
                if ((short)param_7 != param_7) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("offsetModel >= std::numeric_limits<int16>::min() && offsetModel <= "
                              "std::numeric_limits<int16>::max()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/entities/Terrain.cpp",
                              544, (char*)0);
                }
                this_00 = (array<std::array<HeightOffset, 64ul>, 64ul>*)AllocateLocationHeightOffsets(this, param_1);
                if (0 < param_6) {
                    param_7 = 0;
                }
                if ((0 < param_4) && (param_2 < 64)) {
                    uVar5 = (long)param_2;
                    do {
                        this_01 =
                            (array<HeightOffset, 64ul>*)std::array<std::array<HeightOffset, 64ul>, 64ul>::operator[](
                                this_00, uVar5);
                        if (0 < param_5 && param_3 < 64) {
                            uVar4 = (long)param_3;
                            do {
                                psVar3 = (short*)std::array<HeightOffset, 64ul>::operator[](this_01, uVar4);
                                *psVar3 = *psVar3 + (short)param_6;
                                psVar3[1] = psVar3[1] + (short)param_7;
                                if ((long)(param_5 + param_3) <= (long)(uVar4 + 1))
                                    break;
                                bVar1 = (long)uVar4 < 63;
                                uVar4 = uVar4 + 1;
                            } while (bVar1);
                        }
                    } while (((long)(uVar5 + 1) < (long)(param_4 + param_2)) &&
                             (bVar1 = (long)uVar5 < 63, uVar5 = uVar5 + 1, bVar1));
                }
            }
        }
    }

    // 0x1003fc500, 352 bytes, placed by class name
    // Terrain::RemoveLocationHeightOffset(int, int, int, int, int, int, int)
    void Terrain::RemoveLocationHeightOffset(int param_1, int param_2, int param_3, int param_4, int param_5,
                                             int param_6, int param_7) {
        bool bVar1;
        array<std::array<HeightOffset, 64ul>, 64ul>* this_00;
        array<HeightOffset, 64ul>* this_01;
        short* psVar3;
        ulong uVar4;
        ulong uVar5;

        if (param_6 != 0 || param_7 != 0) {
            if (constants::MapConstants::IsValidLevel(param_1) != '\0') {
                if ((short)param_6 != param_6) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("offsetGroundDecor >= std::numeric_limits<int16>::min() && offsetGroundDecor <= "
                              "std::numeric_limits<int16>::max()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/entities/Terrain.cpp",
                              572, (char*)0);
                }
                if ((short)param_7 != param_7) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("offsetModel >= std::numeric_limits<int16>::min() && offsetModel <= "
                              "std::numeric_limits<int16>::max()",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/entities/Terrain.cpp",
                              573, (char*)0);
                }
                this_00 = (array<std::array<HeightOffset, 64ul>, 64ul>*)AllocateLocationHeightOffsets(this, param_1);
                if (0 < param_6) {
                    param_7 = 0;
                }
                if ((0 < param_4) && (param_2 < 64)) {
                    uVar5 = (long)param_2;
                    do {
                        this_01 =
                            (array<HeightOffset, 64ul>*)std::array<std::array<HeightOffset, 64ul>, 64ul>::operator[](
                                this_00, uVar5);
                        if (0 < param_5 && param_3 < 64) {
                            uVar4 = (long)param_3;
                            do {
                                psVar3 = (short*)std::array<HeightOffset, 64ul>::operator[](this_01, uVar4);
                                *psVar3 = *psVar3 - (short)param_6;
                                psVar3[1] = psVar3[1] - (short)param_7;
                                if ((long)(param_5 + param_3) <= (long)(uVar4 + 1))
                                    break;
                                bVar1 = (long)uVar4 < 63;
                                uVar4 = uVar4 + 1;
                            } while (bVar1);
                        }
                    } while (((long)(uVar5 + 1) < (long)(param_4 + param_2)) &&
                             (bVar1 = (long)uVar5 < 63, uVar5 = uVar5 + 1, bVar1));
                }
            }
        }
    }

    // 0x1003fc6a0, 304 bytes, placed by class name
    // Terrain::GetLocationHeightOffset(int, int, int, HeightOffsetType) const
    int Terrain::GetLocationHeightOffset(int param_1, int param_2, int param_3, int param_5) {
        int iVar1;
        bool bVar2;
        short sVar3;
        int iVar4;
        array<std::array<HeightOffset, 64ul>, 64ul>* this_00;
        int* piVar5;
        array<HeightOffset, 64ul>* this_01;
        short* psVar6;
        undefined8 uVar7;
        int local_3c;
        int local_38;
        int local_34[3];

        local_3c = param_2;
        local_38 = param_3;
        local_34[0] = param_1;
        bVar2 = ArrayValidPosition<Array<VarValue, eastl::allocator>, int>((Array*)&field_560, local_34);
        if (bVar2) {
            this_00 = (array<std::array<HeightOffset, 64ul>, 64ul>*)
                Array<std::array<std::array<HeightOffset, 64ul>, 64ul>, eastl::allocator>::operator[](
                    (Array<std::array<std::array<HeightOffset, 64ul>, 64ul>, eastl::allocator>*)&field_560,
                    (long)local_34[0]);
            local_34[1] = 0;
            local_34[2] = 63;
            piVar5 = std::min<int>(local_34 + 2, &local_3c);
            piVar5 = std::max<int>(local_34 + 1, piVar5);
            iVar4 = *piVar5;
            local_34[1] = 0;
            local_34[2] = 63;
            piVar5 = std::min<int>(local_34 + 2, &local_38);
            piVar5 = std::max<int>(local_34 + 1, piVar5);
            iVar1 = *piVar5;
            this_01 = (array<HeightOffset, 64ul>*)std::array<std::array<HeightOffset, 64ul>, 64ul>::operator[](
                this_00, (long)iVar4);
            psVar6 = (short*)std::array<HeightOffset, 64ul>::operator[](this_01, (long)iVar1);
            if (param_5 == 2) {
                sVar3 = eastl::max<short>(psVar6[1], *psVar6);
            } else {
                if (param_5 != 1) {
                    uVar7 = logger::default_logger();
                    logger::Logger::Log(uVar7, 1, 2,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/scene/entities/Terrain.cpp",
                                        653, "%s: Invalid option %d", "GetLocationHeightOffset", param_5);
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

    // 0x1003fc830, 656 bytes, placed by class name
    // Terrain::GetFineHeight(int&, int, int, int, bool, HeightOffsetType) const
    undefined* Terrain::GetFineHeight(int* param_1, int param_2, uint param_3, uint param_4, char param_5,
                                      int param_7) {
        undefined1* this_00;
        bool bVar1;
        int iVar2;
        shared_ptr* this_01;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_02;
        vector<eastl::vector<int, eastl::allocator>, eastl::allocator>* this_03;
        vector<int, eastl::allocator>* pvVar3;
        int* piVar4;
        uint uVar5;
        int iVar6;
        int iVar7;
        uint uVar8;
        int iVar9;
        int iVar10;
        undefined** ppuVar11;
        int local_34;

        *param_1 = -1;
        if (m_heightZero == '\0') {
            this_00 = &field_456;
            local_34 = param_2;
            bVar1 = ArrayValidPosition<
                eastl::fixed_vector<
                    shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>, 4ul,
                    true, eastl::allocator>,
                int>((fixed_vector*)this_00, &local_34);
            ppuVar11 = &DataStatus::MISSING;
            if (!bVar1)
                goto LAB_1003fcaa3;
            uVar8 = param_3 + 127;
            if (-1 < (int)param_3) {
                uVar8 = param_3;
            }
            uVar5 = param_4 + 127;
            if (-1 < (int)param_4) {
                uVar5 = param_4;
            }
            if ((param_5 == '\0') || (local_34 != 0)) {
                this_01 = (shared_ptr*)
                    eastl::vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>,
                                  eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>,
                                eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)this_00,
                        (long)local_34);
                bVar1 = shared_ptr::operator_cast_to_bool(this_01);
                if (!bVar1)
                    goto LAB_1003fcaa3;
                this_02 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                    eastl::vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>,
                                  eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>,
                                eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)this_00,
                        (long)local_34);
            } else {
                this_02 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)m_waterHeights;
                bVar1 = this_02->operator_cast_to_bool();
                if (!bVar1)
                    goto LAB_1003fcaa3;
            }
            this_03 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)
                eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_02);
            if (((int)param_3 < -255) || ((int)param_4 < -255))
                goto LAB_1003fcaa3;
            iVar10 = (int)uVar8 >> 7;
            iVar7 = (int)uVar5 >> 7;
            uVar8 = param_3 & 127;
            pvVar3 = (vector<int, eastl::allocator>*)
                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_03,
                                                                                                  (long)(iVar10 + 1));
            piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar3, (long)(iVar7 + 1));
            iVar9 = *piVar4;
            if ((param_3 & 127) != 0) {
                iVar9 = iVar9 * (128 - uVar8);
                pvVar3 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                        this_03, (ulong)(iVar10 + 2));
                piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar3, (long)(iVar7 + 1));
                iVar6 = *piVar4 * uVar8 + iVar9;
                iVar9 = *piVar4 * uVar8 + 127 + iVar9;
                if (-1 < iVar6) {
                    iVar9 = iVar6;
                }
                iVar9 = iVar9 >> 7;
            }
            if ((param_4 & 127) == 0) {
                *param_1 = iVar9;
            } else {
                pvVar3 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                        this_03, (long)(iVar10 + 1));
                piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar3, (ulong)(iVar7 + 2));
                iVar6 = *piVar4;
                if ((param_3 & 127) != 0) {
                    iVar6 = iVar6 * (128 - uVar8);
                    pvVar3 = (vector<int, eastl::allocator>*)
                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                            this_03, (ulong)(iVar10 + 2));
                    piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar3, (ulong)(iVar7 + 2));
                    iVar2 = uVar8 * *piVar4 + iVar6;
                    iVar6 = uVar8 * *piVar4 + 127 + iVar6;
                    if (-1 < iVar2) {
                        iVar6 = iVar2;
                    }
                    iVar6 = iVar6 >> 7;
                }
                iVar9 = iVar9 * (128 - (param_4 & 127));
                iVar6 = iVar6 * (param_4 & 127);
                iVar2 = iVar6 + iVar9;
                iVar9 = iVar6 + 127 + iVar9;
                if (-1 < iVar2) {
                    iVar9 = iVar2;
                }
                *param_1 = iVar9 >> 7;
            }
            if (param_7 == 0) {
                ppuVar11 = &DataStatus::READY;
                goto LAB_1003fcaa3;
            }
            iVar9 = GetLocationHeightOffset(this, local_34, iVar10, iVar7);
            iVar9 = iVar9 + *param_1;
            ppuVar11 = &DataStatus::READY;
        } else {
            ppuVar11 = &DataStatus::MISSING;
            iVar9 = 0;
        }
        *param_1 = iVar9;
    LAB_1003fcaa3:
        return *ppuVar11;
    }

    // 0x1003fcac0, 592 bytes, placed by class name
    // Terrain::GetFineWaterDepth(int, int, int) const
    int Terrain::GetFineWaterDepth(int param_1, int param_2, int param_3) {
        undefined1* this_00;
        bool bVar1;
        int iVar2;
        shared_ptr* this_01;
        shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>* this_02;
        vector<eastl::vector<int, eastl::allocator>, eastl::allocator>* this_03;
        vector<eastl::vector<int, eastl::allocator>, eastl::allocator>* this_04;
        vector<int, eastl::allocator>* pvVar3;
        int* piVar4;
        int iVar5;
        ulong uVar6;
        ulong uVar7;
        uint uVar8;
        ulong uVar9;
        int iVar10;
        int iVar11;
        int local_34;

        if (m_heightZero == '\0') {
            this_00 = &field_456;
            local_34 = param_1;
            bVar1 = ArrayValidPosition<
                eastl::fixed_vector<
                    shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>, 4ul,
                    true, eastl::allocator>,
                int>((fixed_vector*)this_00, &local_34);
            if (!bVar1) {
                return -1;
            }
            this_01 = (shared_ptr*)
                eastl::vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>,
                              eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>,
                                   eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)this_00,
                           (long)local_34);
            bVar1 = shared_ptr::operator_cast_to_bool(this_01);
            if (bVar1) {
                bVar1 = m_waterHeights->operator_cast_to_bool();
                if (!bVar1) {
                    return 0;
                }
                iVar5 = param_2 + 127;
                if (-1 < param_2) {
                    iVar5 = param_2;
                }
                iVar11 = param_3 + 127;
                if (-1 < param_3) {
                    iVar11 = param_3;
                }
                uVar8 = param_2 & 127;
                this_02 = (shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>*)
                    eastl::vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>,
                                  eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>,
                                eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)this_00,
                        (long)local_34);
                this_03 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)
                    shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::operator*(
                        this_02);
                this_04 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)
                    shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::operator*(
                        (shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>*)
                            m_waterHeights);
                uVar6 = (ulong)((iVar5 >> 7) + 1);
                pvVar3 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_04, uVar6);
                uVar7 = (ulong)((iVar11 >> 7) + 1);
                piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar3, uVar7);
                iVar2 = *piVar4;
                pvVar3 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_03, uVar6);
                piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar3, uVar7);
                iVar10 = (iVar2 - *piVar4) * (128 - uVar8);
                uVar9 = (ulong)((iVar5 >> 7) + 2);
                pvVar3 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_04, uVar9);
                piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar3, uVar7);
                iVar5 = *piVar4;
                pvVar3 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_03, uVar9);
                piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar3, uVar7);
                iVar5 = (iVar5 - *piVar4) * uVar8;
                iVar2 = iVar5 + iVar10;
                iVar5 = iVar5 + 127 + iVar10;
                if (-1 < iVar2) {
                    iVar5 = iVar2;
                }
                pvVar3 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_04, uVar6);
                uVar7 = (ulong)((iVar11 >> 7) + 2);
                piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar3, uVar7);
                iVar11 = *piVar4;
                pvVar3 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_03, uVar6);
                piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar3, uVar7);
                iVar10 = (iVar11 - *piVar4) * (128 - uVar8);
                pvVar3 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_04, uVar9);
                piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar3, uVar7);
                iVar11 = *piVar4;
                pvVar3 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_03, uVar9);
                piVar4 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar3, uVar7);
                iVar11 = (iVar11 - *piVar4) * uVar8;
                iVar2 = iVar11 + iVar10;
                iVar11 = iVar11 + 127 + iVar10;
                if (-1 < iVar2) {
                    iVar11 = iVar2;
                }
                iVar2 = (128 - (param_3 & 127U)) * (iVar5 >> 7);
                iVar5 = (iVar11 >> 7) * (param_3 & 127U);
                iVar11 = iVar5 + iVar2;
                iVar5 = iVar5 + iVar2 + 127;
                if (-1 < iVar11) {
                    iVar5 = iVar11;
                }
                return iVar5 >> 7;
            }
        }
        return 0;
    }

    // 0x1003fcd10, 1344 bytes, placed by class name
    // Terrain::CalculatePrimaryWaterHeightNearTile(int, int) const
    uint Terrain::CalculatePrimaryWaterHeightNearTile(int param_1, int param_2) {
        undefined1* this_00;
        uint uVar1;
        Terrain* pTVar2;
        uint uVar3;
        char cVar4;
        bool bVar5;
        int iVar6;
        vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>* pvVar7;
        vector<unsigned char, eastl::allocator>* pvVar8;
        char* pcVar9;
        uint* puVar10;
        vector<int, eastl::allocator>* this_01;
        vector* pvVar11;
        int* piVar12;
        float* pfVar13;
        undefined4* puVar14;
        long* plVar15;
        SideBarData* pSVar16;
        SideBarData* pSVar17;
        long lVar18;
        SideBarData* this_02;
        SideBarData* pSVar19;
        SideBarData* pSVar20;
        ulong uVar21;
        ulong uVar22;
        Vector3T<int> local_130[16];
        undefined8 local_120[4];
        undefined1 local_100[16];
        undefined1 local_f0[16];
        vector<unsigned int, eastl::allocator>* local_e0;
        Vector2T<int> local_d8[8];
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* local_d0;
        SideBarData* local_c8;
        ulong local_c0;
        uint local_b4;
        SideBarData* local_b0;
        SideBarData* local_a8;
        Terrain* local_a0;
        int local_94;
        shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>* local_90;
        uint local_84;
        SideBarData local_80[6];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_a0 = this;
        cVar4 = HasWater(this);
        if (cVar4 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("HasWater()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/Terrain.cpp",
                      759, (char*)0);
        }
        this_00 = local_a0->m_waterHeights;
        bVar5 = this_00->operator_cast_to_bool();
        if (!bVar5) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_waterHeights",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/Terrain.cpp",
                      760, (char*)0);
        }
        local_90 =
            (shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>*)&local_a0
                ->field_808;
        bVar5 = local_90->operator_cast_to_bool();
        if (!bVar5) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_underworldMap",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/Terrain.cpp",
                      761, (char*)0);
        }
        new (local_100) oldscape::sidebars::SideBarData(param_1, param_2);
        local_84 = 2147483647;
        this_02 = (SideBarData*)2147483647;
        math::Vector2T<int>::Vector2T(local_d8, 2147483647);
        local_d0 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                           eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)
            shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::operator*(
                (shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>*)this_00);
        local_a8 = (SideBarData*)
            eastl::vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                          eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(local_d0);
        if (2 < (int)local_a8) {
            pSVar16 = (SideBarData*)4294967294;
            local_a8 = (SideBarData*)(ulong)((int)local_a8 - 2);
            local_94 = 2147483647;
            pSVar17 = (SideBarData*)&DAT_00000001;
            local_b0 = (SideBarData*)0;
            local_84 = 2147483647;
            do {
                this_02 = pSVar17;
                local_e0 = (vector<unsigned int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                        (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)local_d0, (ulong)pSVar17);
                iVar6 = eastl::vector<unsigned int, eastl::allocator>::size(local_e0);
                if (2 < iVar6) {
                    uVar22 = (ulong)(iVar6 - 2);
                    pSVar19 = (SideBarData*)&DAT_00000001;
                    uVar21 = 0;
                    local_f0._8_8_ = pSVar17;
                    local_c0 = uVar22;
                    do {
                        pvVar7 = (vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>*)
                            shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>,
                                                     eastl::allocator>>::operator*(local_90);
                        pvVar8 = (vector<unsigned char, eastl::allocator>*)
                            eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>::operator[](
                                pvVar7, (ulong)pSVar17);
                        this_02 = pSVar19;
                        pcVar9 =
                            (char*)eastl::vector<unsigned char, eastl::allocator>::operator[](pvVar8, (ulong)pSVar19);
                        if (*pcVar9 != '\0') {
                            local_c8 = pSVar19;
                            puVar10 = (uint*)eastl::vector<int, eastl::allocator>::operator[](
                                (vector<int, eastl::allocator>*)local_e0, (ulong)pSVar19);
                            uVar1 = *puVar10;
                            pSVar16 = (SideBarData*)CONCAT71((int7)((ulong)pSVar16 >> 8), 1);
                            pSVar20 = local_b0;
                            do {
                                local_b4 = (uint)pSVar16;
                                lVar18 = 0;
                                do {
                                    pSVar17 = (SideBarData*)(uVar21 + lVar18);
                                    pvVar7 = (vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>*)
                                        shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>,
                                                                 eastl::allocator>>::operator*(local_90);
                                    pvVar8 = (vector<unsigned char, eastl::allocator>*)
                                        eastl::vector<eastl::vector<unsigned char, eastl::allocator>,
                                                      eastl::allocator>::operator[](pvVar7, (ulong)pSVar20);
                                    this_02 = pSVar17;
                                    pcVar9 = (char*)eastl::vector<unsigned char, eastl::allocator>::operator[](
                                        pvVar8, (ulong)pSVar17);
                                    if (*pcVar9 == '\0') {
                                    LAB_1003fcfc0:
                                        pSVar16 = (SideBarData*)0;
                                        goto LAB_1003fcfc2;
                                    }
                                    this_01 = (vector<int, eastl::allocator>*)eastl::
                                        vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                                            (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)local_d0,
                                            (ulong)pSVar20);
                                    puVar10 = (uint*)eastl::vector<int, eastl::allocator>::operator[](this_01,
                                                                                                      (ulong)pSVar17);
                                    this_02 = pSVar17;
                                    if (*puVar10 != uVar1)
                                        goto LAB_1003fcfc0;
                                    lVar18 = lVar18 + 1;
                                } while (lVar18 != 2);
                                pSVar16 = (SideBarData*)(ulong)local_b4;
                            LAB_1003fcfc2:
                                pSVar19 = local_c8;
                                pSVar17 = (SideBarData*)local_f0._8_8_;
                            } while (
                                (pSVar20 < (ulong)local_f0._8_8_) &&
                                (pSVar20 = (SideBarData*)((long)&pSVar20->field_0 + 1), ((ulong)pSVar16 & 1) != 0));
                            if (((ulong)pSVar16 & 1) == 0) {
                                uVar22 = local_c0;
                            } else {
                                this_02 = local_80;
                                oldscape::sidebars::SideBarData::SideBarData(this_02, local_f0._8_4_, (int)local_c8);
                                local_120[0] = math::operator-((Vector2T*)local_100, (Vector2T*)this_02);
                                iVar6 = local_120->LengthSq();
                                if (iVar6 < local_94) {
                                    this_02 = local_80;
                                    eastl::pair<int, unsigned int>::operator=((pair<int, unsigned int>*)local_d8,
                                                                              (pair*)this_02);
                                    local_94 = iVar6;
                                    local_84 = uVar1;
                                }
                                uVar22 = local_c0;
                            }
                        }
                        pSVar19 = (SideBarData*)((long)&pSVar19->field_0 + 1);
                        uVar21 = uVar21 + 1;
                    } while (uVar21 != uVar22);
                }
                pSVar17 = (SideBarData*)((long)&pSVar17->field_0 + 1);
                pSVar16 = (SideBarData*)((long)&local_b0->field_0 + 1);
                local_b0 = pSVar16;
            } while (pSVar16 != local_a8);
        }
        if (World::m_showWaterHeights != '\0') {
            math::Vector3T<int>::Vector3T(local_130);
            pTVar2 = local_a0;
            iVar6 = local_a0->field_288;
            pvVar11 = local_d8->SSOBeginPtr(this_02);
            local_90._0_4_ = (float)((iVar6 * 64 + *(int*)pvVar11) * 128 + -128);
            pvVar11 = local_130->SSOBeginPtr(this_02);
            *(float*)pvVar11 = local_90._0_4_;
            iVar6 = pTVar2->field_292;
            piVar12 = (int*)local_d8->y();
            local_90._0_4_ = (float)((iVar6 * 64 + *piVar12) * 128 + -128);
            pfVar13 = (float*)local_130->second();
            uVar3 = local_84;
            *pfVar13 = local_90._0_4_;
            local_90 =
                (shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>*)CONCAT44(
                    local_90._4_4_, (float)(int)local_84);
            puVar14 = (undefined4*)local_130->y();
            *puVar14 = local_90._0_4_;
            new (local_80) eastl::fixed_string<char, 32, true, eastl::allocator>();
            pvVar11 = local_d8->SSOBeginPtr(this_02);
            uVar1 = *(uint*)pvVar11;
            puVar10 = (uint*)local_d8->y();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 32ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf((char*)local_80, "Target %i (%i %i)", (ulong)uVar3, (ulong)uVar1, (ulong)*puVar10);
            plVar15 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar15 != (long*)0) {
                pcVar9 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                new ((local_100 + 8)) eastl::allocator("EASTL basic_string");
                new (local_120) eastl::string(pcVar9, (allocator*)(local_100 + 8));
                new (local_f0) oldscape::sidebars::SideBarData(-16711681, 0);
                (**(code**)(*plVar15 + 136))(plVar15, local_130, local_120, local_f0);
                local_120->~basic_string();
            }
            /* WARNING: Subroutine does not return */
            local_80->~fixed_string();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return local_84;
    }

    // 0x1003fd250, 32 bytes, placed by class name
    // Terrain::HasWater() const
    byte Terrain::HasWater() {
        byte bVar1;

        bVar1 = (&field_416)->empty();
        return bVar1 ^ 1;
    }

    // 0x1003fd270, 192 bytes, placed by class name
    // Terrain::GetTileRoofLinkInner(eastl::fixed_vector<shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator> >, 4ul, true, eastl::allocator> const&, int, int, int) const
    ulong Terrain::GetTileRoofLinkInner(fixed_vector* param_1, int param_2, int param_3, int param_4) {
        bool bVar1;
        shared_ptr* this_00;
        vector* pvVar2;
        byte* pbVar3;
        ulong uVar4;
        int local_3c;
        int local_38;
        int local_34;

        local_34 = param_2;
        bVar1 = ArrayValidPosition<
            eastl::fixed_vector<
                shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>, 4ul, true,
                eastl::allocator>,
            int>(param_1, &local_34);
        uVar4 = 4294967295;
        if (bVar1) {
            this_00 = (shared_ptr*)eastl::vector<
                shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>,
                eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[](
                (vector<shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>,
                        eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)param_1,
                (long)local_34);
            bVar1 = shared_ptr::operator_cast_to_bool(this_00);
            if (bVar1) {
                pvVar2 = (vector*)
                    shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>::
                    operator*(
                        (shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>*)
                            this_00);
                local_3c = param_3 + 1;
                bVar1 = ArrayValidPosition<
                    eastl::vector<eastl::vector<DecodedTerrainTile, eastl::allocator>, eastl::allocator>, int>(
                    pvVar2, &local_3c);
                if (bVar1) {
                    pvVar2 = (vector*)
                        eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>::operator[](
                            (vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>*)pvVar2,
                            (long)(param_3 + 1));
                    local_38 = param_4 + 1;
                    bVar1 = ArrayValidPosition<eastl::vector<unsigned char, eastl::allocator>, int>(pvVar2, &local_38);
                    if (bVar1) {
                        pbVar3 = (byte*)eastl::vector<unsigned char, eastl::allocator>::operator[](
                            (vector<unsigned char, eastl::allocator>*)pvVar2, (long)(param_4 + 1));
                        uVar4 = (ulong)*pbVar3;
                    }
                }
            }
        }
        return uVar4;
    }

    // 0x1003fd430, 144 bytes, placed by class name
    // Terrain::LinkMapValidPos(int, int, int) const
    bool Terrain::LinkMapValidPos(int param_1, int param_2, int param_3) {
        bool bVar1;
        shared_ptr* this_00;
        vector* pvVar2;
        vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>* this_01;
        int local_1c;
        int local_18;
        int local_14;

        local_1c = param_3;
        local_18 = param_1;
        local_14 = param_2;
        bVar1 = ArrayValidPosition<
            eastl::fixed_vector<
                shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>, 4ul, true,
                eastl::allocator>,
            int>((fixed_vector*)&field_600, &local_18);
        if (bVar1) {
            this_00 = (shared_ptr*)eastl::vector<
                shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>,
                eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
            operator[](
                (vector<shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>,
                        eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)&field_600,
                (long)local_18);
            bVar1 = shared_ptr::operator_cast_to_bool(this_00);
            if (bVar1) {
                pvVar2 = (vector*)
                    shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>::
                    operator*(
                        (shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>*)
                            this_00);
                bVar1 = ArrayValidPosition<
                    eastl::vector<eastl::vector<DecodedTerrainTile, eastl::allocator>, eastl::allocator>, int>(
                    pvVar2, &local_14);
                if (bVar1) {
                    this_01 = (vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>*)shared_ptr<
                        eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>::
                    operator*(
                        (shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>*)
                            this_00);
                    pvVar2 = (vector*)
                        eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>::operator[](
                            this_01, (long)local_14);
                    bVar1 = ArrayValidPosition<eastl::vector<unsigned char, eastl::allocator>, int>(pvVar2, &local_1c);
                    return bVar1;
                }
            }
        }
        return false;
    }

    // 0x1003fd4c0, 48 bytes, placed by class name
    // Terrain::CanRender() const
    bool Terrain::CanRender() {
        char cVar1;
        bool bVar2;

        cVar1 = (&field_344)->empty();
        if (cVar1 == '\0') {
            bVar2 = m_hideTerrain == false;
        } else {
            bVar2 = false;
        }
        return bVar2;
    }

    // 0x1003fd4f0, 128 bytes, placed by class name
    // Terrain::IsReadyToRender() const
    ulong Terrain::IsReadyToRender() {
        unique_ptr* this_00;
        unique_ptr* puVar3;
        TerrainPatch* this_01;
        undefined1* this_02;

        this_02 = &field_344;
        this_00 = (unique_ptr*)this_02->HeapBeginPtr();
        puVar3 = (unique_ptr*)this_02->end();
        for (; this_00 != puVar3; this_00 = this_00 + 8) {
            if (std::unique_ptr::operator_cast_to_bool(this_00)) {
                this_01 =
                    (TerrainPatch*)std::
                        unique_ptr<graphics::TerrainPatch, std::default_delete<graphics::TerrainPatch>>::operator->(
                            (unique_ptr<graphics::TerrainPatch, std::default_delete<graphics::TerrainPatch>>*)this_00);
                if (this_01->IsReadyToRender() == '\0')
                    break;
            }
        }
        return CONCAT71((int7)((ulong)this_02 >> 8), this_00 == puVar3) & 4294967295;
    }

    // 0x1003fd570, 1376 bytes, placed by class name
    // Terrain::DebugShowPrimitiveTerrainPatch(bool, graphics::TerrainPatch&, eastl::pair<int, graphics::RenderChunk> const&, int, int, math::Rect<int> const&, int, int, int, int, bool)
    ulong Terrain::DebugShowPrimitiveTerrainPatch(bool param_1, TerrainPatch* param_2, pair* param_3, int param_4,
                                                  int param_5, Rect* param_6, int param_7, int param_8, int param_9,
                                                  int param_10, bool param_11) {
        float fVar1;
        int iVar2;
        int iVar3;
        uint uVar4;
        uint uVar5;
        undefined4 uVar6;
        undefined4 uVar7;
        int iVar8;
        int iVar9;
        World* pWVar10;
        HeightMap* pHVar11;
        long* plVar12;
        char* pcVar13;
        undefined7 in_register_00000031;
        CoordGrid local_1f0;
        eastl::string local_1e0[32];
        shared_ptr<World>* local_1c0;
        int local_1b4;
        undefined1 local_1b0[8];
        undefined4 local_1a8;
        undefined4 local_1a4;
        float local_1a0;
        CoordFine local_198;
        int local_184;
        pair* local_180;
        TerrainPatch* local_178;
        float local_16c;
        float local_168;
        float local_164;
        fixed_string<char, 256, true, eastl::allocator> local_160[296];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_180 = param_3;
        if (m_debugPrimitiveText != '\0') {
            local_178 = param_2;
            local_164 = (float)param_5;
            iVar2 = param_6->GetX();
            iVar3 = param_6->GetZ();
            new (&local_1f0) oldscape::rs2lib::worldmap::LocationData(param_4, iVar2, iVar3);
            new (&local_198) CoordFine(&local_1f0, false);
            fVar1 = local_164;
            local_1c0 = (shared_ptr<World>*)&field_176;
            pWVar10 = (World*)shared_ptr<World>::operator->(local_1c0);
            pHVar11 = (HeightMap*)pWVar10->GetHeightMap();
            local_16c = (float)param_4;
            pHVar11->GetFineHeight(&local_184, param_4, (int)local_198.field_4, (int)local_198.field_12, 0, 0);
            local_198.field_8 = (float)local_184;
            eastl::fixed_string<char, 256, true, eastl::allocator>::fixed_string(local_160);
            uVar4 = local_198.GetMapSquareX();
            uVar5 = local_198.GetMapSquareZ();
            uVar6 = local_198.GetLocalX();
            uVar7 = local_198.GetLocalZ();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                sprintf((char*)local_160, "TerrainPatch:%p @ %d,%d,%d,%d,%d", local_178, (ulong)(uint)local_16c,
                        (ulong)uVar4, (ulong)uVar5, uVar6, uVar7);
            if (local_16c != fVar1) {
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                    append_sprintf((char*)local_160, " [lvl %d]", (ulong)(uint)fVar1);
            }
            local_164 = *(float*)local_180;
            local_178 = (TerrainPatch*)CONCAT44(local_178._4_4_, *(int*)(local_180 + 8));
            local_168 = (float)param_6->GetPos();
            uVar4 = param_6->GetLevel();
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 256ul, 1ul, 0ul, true, eastl::allocator>>::
                append_sprintf((char*)local_160, " [Chunk %d : %d tiles] [size=%dx%d @ %d,%d - %d,%d]",
                               (ulong)(uint)local_164, (ulong)local_178 & 4294967295, (ulong)(uint)local_168,
                               (ulong)uVar4, param_7 & 63, param_8 & 63, param_9 & 63, param_10 & 63);
            uVar4 = 4293943472;
            if (param_11) {
                uVar4 = 4290838400;
            }
            plVar12 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar12 != (long*)0) {
                pcVar13 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                new (&local_1a8) eastl::allocator("EASTL basic_string");
                eastl::string::basic_string(local_1e0, pcVar13, (allocator*)&local_1a8);
                new (local_1b0) oldscape::sidebars::SideBarData(uVar4, 0);
                (**(code**)(*plVar12 + 136))(plVar12, &local_198.field_4, local_1e0, local_1b0);
                eastl::string::~basic_string(local_1e0);
            }
            if (0 < *(int*)local_180) {
                local_164 = local_198.field_4;
                local_180._0_4_ = local_198.field_12;
                iVar2 = param_6->GetPos();
                iVar3 = param_6->GetLevel();
                local_178._0_4_ = local_198.field_4;
                local_168 = local_198.field_12;
                iVar8 = param_6->GetPos();
                iVar9 = param_6->GetLevel();
                pWVar10 = (World*)shared_ptr<World>::operator->(local_1c0);
                local_164 = local_164 + (float)(iVar2 << 7);
                local_180 = (pair*)CONCAT44(local_180._4_4_, local_180._0_4_ + (float)(iVar3 << 7));
                pHVar11 = (HeightMap*)pWVar10->GetHeightMap();
                pHVar11->GetFineHeight(&local_1b4, local_16c, (int)local_164, (int)local_180._0_4_, 0, 0);
                local_178 = (TerrainPatch*)CONCAT44(local_178._4_4_, local_178._0_4_ + (float)(iVar8 << 6));
                local_168 = local_168 + (float)(iVar9 << 6);
                local_184 = eastl::max<int>(local_1b4, local_184);
                local_1a8 = local_178._0_4_;
                local_1a0 = local_168;
                local_1a4 = 0;
                new (local_1e0) math::PlaneT<float>(PTR_UP_100ee66d0, (float)-local_184);
                plVar12 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                if (plVar12 != (long*)0) {
                    local_178 = (TerrainPatch*)CONCAT44(local_178._4_4_, local_198.field_4);
                    local_16c = local_198.field_12;
                    new (local_1b0) oldscape::sidebars::SideBarData(uVar4 & 552665008, 5);
                    (**(code**)(*plVar12 + 104))(plVar12, &local_1a8, local_1e0,
                                                 (int)(local_180._0_4_ - local_16c) + -8,
                                                 (int)(local_164 - local_178._0_4_) + -8, local_1b0);
                }
            }
            /* WARNING: Subroutine does not return */
            local_160->~fixed_string();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return CONCAT71(in_register_00000031, param_1) & 4294967295;
    }

} // namespace jag::game

namespace jag {
    // 0x1003fa250, 176 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<game::BuildTerrainMain>::type bucket_make_shared<game::BuildTerrainMain, graphics::RT7Core*&, int&, game::TerrainInputData&>(graphics::RT7Core*&, int&, game::TerrainInputData&)
    jag* jag::bucket_make_shared<game::BuildTerrainMain, graphics::RT7Core*&, int&, game::TerrainInputData&>(
        RT7Core** param_1, int* param_2, TerrainInputData* param_3) {
        BucketRefCounter* pBVar1;
        managed_ptr_counter_and_data* local_40;
        BuildTerrainMain* local_38[2];

        local_40 = (managed_ptr_counter_and_data*)BucketManager::Allocate(656, 0, 16);
        if (local_40 == (managed_ptr_counter_and_data*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        } else {
            local_38[0] = placement_new<game::BuildTerrainMain, graphics::RT7Core*&, int&, game::TerrainInputData&>(
                local_40 + 48, param_1, param_2, param_3);
            pBVar1 = placement_new<
                BucketRefCounter<game::BuildTerrainMain>,
                managed_ptr_counter_and_data<BucketRefCounter<game::BuildTerrainMain>, game::BuildTerrainMain>*&,
                game::BuildTerrainMain*&>(local_40, &local_40, local_38);
            pBVar1->~AutoSingleton(local_38[0]);
            pBVar1->~AutoSingleton(local_38[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(pBVar1, local_38[0]);
        }
        return this;
    }

} // namespace jag
