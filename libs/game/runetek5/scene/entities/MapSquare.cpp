// libs/game/runetek5/scene/entities/MapSquare.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "MapSquare.h"

namespace jag::game {
    // 0x1039b4df8, 16 bytes, __common; set at startup by ___cxx_global_var_init.21
    shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> MapSquare::NullMapSquare;

    // 0x1039b4e08, 32 bytes, __common; set at startup by ___cxx_global_var_init.22
    eastl::vector<shared_ptr<LightSource>, eastl::allocator> MapSquare::NullLightList =
        vector<shared_ptr<LightSource>, eastl::allocator>();

    // 0x1039b4e28, 32 bytes, __common; set at startup by ___cxx_global_var_init.23
    eastl::vector<shared_ptr<graphics::WaterPatch>, eastl::allocator> MapSquare::NullWaterPatchList =
        vector<shared_ptr<graphics::WaterPatch>, eastl::allocator>();

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    MapSquare::IsVisibleEntity() const;

    // 0x100159b80: the linker folded this into oldscape::rs2lib::InputField::GetFilter() const, which has identical code
    MapSquare::GetMapSquareX() const;

    // 0x10016ea80: the linker folded this into oldscape::minimenu::Minimenu::GetPlayerOps() const, which has identical code
    MapSquare::GetTerrain() const;

    // 0x1003c2110: the linker folded this into MapSquare::GetLocations() const, which has identical code
    MapSquare::GetLocations();

    // 0x100411040, 720 bytes, base-object constructor, placed by class name and debug map
    // MapSquare::MapSquare(graphics::GraphNode*, shared_ptr<World> const&, int, int, shared_ptr<ClientCompositeData> const&)
    void MapSquare::MapSquare(GraphNode* param_1, shared_ptr* param_2, int param_3, int param_4, shared_ptr* param_5) {
        World* this_00;
        RT7Core* pRVar2;
        OpenGLView* this_01;
        AABB* this_02;
        AABB local_c8;
        ColourHSL local_a0;
        ColourHSL local_90;
        undefined1* local_80;
        undefined1* local_78;
        undefined1* local_70;
        undefined1* local_68;
        undefined1* local_60;
        undefined1* local_58;
        undefined1* local_50;
        undefined1* local_48;
        undefined1* local_40;
        undefined1* local_38;

        Entity::Entity();
        new (this) MakeSharedPool<MapSquare, 32>();
        field_0 = &PTR__MapSquare_100eff458;
        field_8 = &PTR__MapSquare_100eff598;
        m_mapSquareX = param_3;
        m_mapSquareZ = param_4;
        local_80 = field_200;
        new (local_80) shared_ptr<oldscape::dash3d::Decor>(param_5);
        m_prioritySquare = '\0';
        m_hasBuiltPriorityZones = 0;
        field_220 = 0;
        field_224 = 0;
        field_228 = 0;
        field_232 = 0;
        field_236 = 1;
        local_78 = &field_240;
        std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::unique_ptr<true, void>(
            (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)local_78);
        m_terrainBlending = true;
        this_00 = (World*)shared_ptr<World>::operator->((shared_ptr<World>*)param_2);
        pRVar2 = (RT7Core*)this_00->GetRT7Core();
        local_70 = m_mapSquarePointLights;
        new (local_70) MapSquarePointLights(pRVar2, param_3, param_4);
        local_68 = &field_704;
        std::unique_ptr<EnvironmentLoader, MakeUniquePool<EnvironmentLoader, 48>::UniquePoolDeleter>::unique_ptr<true,
                                                                                                                 void>(
            (unique_ptr<EnvironmentLoader, MakeUniquePool<EnvironmentLoader, 48>::UniquePoolDeleter>*)local_68);
        local_60 = &field_712;
        new (local_60) eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator>();
        field_744 = 0;
        local_58 = &field_752;
        new (local_58) eastl::vector<
            eastl::vector<std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>, eastl::allocator>,
            eastl::allocator>();
        local_50 = &field_784;
        std::unique_ptr<EnvironmentLoader, MakeUniquePool<EnvironmentLoader, 48>::UniquePoolDeleter>::unique_ptr<true,
                                                                                                                 void>(
            (unique_ptr<EnvironmentLoader, MakeUniquePool<EnvironmentLoader, 48>::UniquePoolDeleter>*)local_50);
        local_48 = &field_792;
        std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::unique_ptr<true, void>(
            (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)local_48);
        local_40 = &field_800;
        new (local_40) eastl::vector<shared_ptr<LightSource>, eastl::allocator>();
        local_38 = &field_832;
        new (local_38) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(pRVar2);
        new (&field_848) math::Transitionable<graphics::IrradianceSHCoefConsts>();
        m_partialMapBuild = false;
        field_1108 = 0;
        m_initialLightProbeSubmitted = 0;
        new (field_1120, param_3, param_4, param_5) WaterLoader();
        new (&local_a0) math::ColourHSL(0.0, 0.0, 0.0);
        new (&local_90) math::ColourHSL(8192.0, 8192.0, 8192.0);
        new (&local_c8) math::AABB((Vector3T*)&local_a0, (Vector3T*)&local_90);
        SetAABB(&local_c8);
        SetDefaultIrradianceSHConsts(this);
        this_01 = (OpenGLView*)std::unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>::operator->(
            (unique_ptr<graphics::GraphNode, graphics::GraphNodeDelete>*)&field_56);
        this_02 = (AABB*)this_01->GetCursorMutex();
        if (this_02->IsValid() == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("m_node->GetAABB().IsValid()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/MapSquare.cpp",
                      53, (char*)0);
        }
    }

    // 0x1004113f0, 176 bytes, placed by class name and debug map
    // MapSquare::SetDefaultIrradianceSHConsts()
    void MapSquare::SetDefaultIrradianceSHConsts() {
        float* pfVar1;
        float* pfVar2;
        float* pfVar3;
        IrradianceSHCoefConsts local_118;
        array local_a8[40];
        array local_80[40];
        array local_58[40];

        new (&local_118) graphics::IrradianceSHCoefConsts();
        graphics::GetDefaultIrradianceSHCoefs(local_a8, local_80, local_58);
        pfVar1 = (float*)local_a8->data();
        pfVar2 = (float*)local_80->data();
        pfVar3 = (float*)local_58->data();
        graphics::ComputeIrradianceSHCoefs(&local_118, 3, pfVar1, pfVar2, pfVar3, 1.0, 1.0, 1.0);
        (&field_848, &local_118, 0, 0)->SetValue();
    }

    // 0x1004114f0, 16 bytes, complete-object constructor, placed by class name and debug map
    // MapSquare::MapSquare(graphics::GraphNode*, shared_ptr<World> const&, int, int, shared_ptr<ClientCompositeData> const&): jumps straight to the base-object constructor

    // 0x100411500, 192 bytes, base-object destructor, placed by class name and debug map
    // MapSquare::~MapSquare()
    void MapSquare::~MapSquare() {
        field_0 = &PTR__MapSquare_100eff458;
        field_8 = &PTR__MapSquare_100eff598;
        field_1120->~WaterLoader();
        (&field_832)->~shared_ptr();
        (&field_800)->~vector();
        (&field_792)->~unique_ptr();
        (&field_784)->~unique_ptr();
        (&field_752)->~vector();
        (&field_712)->~vector();
        (&field_704)->~unique_ptr();
        m_mapSquarePointLights->~MapSquarePointLights();
        (&field_240)->~unique_ptr();
        field_200->~shared_ptr();
        ~Entity();
    }

    // 0x1004115c0, 16 bytes, complete-object destructor, placed by class name and debug map
    // MapSquare::~MapSquare(): jumps straight to the base-object destructor

    // 0x1004115e0, 32 bytes, deleting destructor, placed by class name and debug map
    // MapSquare::~MapSquare()
    void MapSquare::~MapSquare() {
        ~MapSquare(this);
        operator_delete(this);
    }

    // 0x100411610, 464 bytes, placed by class name and debug map
    // MapSquare::Build(graphics::RT7Core*, Js5ResourceProvider*, ConfigProvider*, PlayerVarDomain*, AssetBuilder*, math::Vector3T<float> const&, int, int, unsigned int, bool, bool)
    uint MapSquare::Build(RT7Core* param_1, Js5ResourceProvider* param_2, ConfigProvider* param_3,
                          PlayerVarDomain* param_4, AssetBuilder* param_5, Vector3T* param_6, int param_7, int param_8,
                          uint param_9, bool param_10, bool param_11) {
        char cVar1;
        undefined1 uVar2;
        byte bVar3;
        byte bVar4;
        char cVar5;
        int iVar6;
        uint uVar7;
        long* plVar8;
        shared_ptr<World>* this_00;
        World* this_01;
        LODSettings* pLVar9;
        Entity* this_02;
        GraphNode* this_03;
        undefined1 local_31;

        plVar8 = (long*)Instance();
        cVar1 = (**(code**)(*plVar8 + 224))(plVar8);
        if (cVar1 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("GraphicsApp::Instance()->IsInsideMainLogic()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/MapSquare.cpp",
                      76, (char*)0);
        }
        uVar2 = GetTargetLOD();
        local_31 = uVar2;
        bVar3 = LoadEnvironment(this, param_2);
        iVar6 = LoadWaterPatches(this, param_2, param_3);
        uVar7 = 1;
        if ((iVar6 != 1) &&
            (uVar7 = LoadTerrain(this, param_3, &local_31, param_1, param_5, param_8), (uVar7 & 4294967293) != 0)) {
            this_00 = (shared_ptr<World>*)GetWorld();
            this_01 = (World*)shared_ptr<World>::operator->(this_00);
            pLVar9 = (LODSettings*)this_01->GetLODSettings();
            bVar4 = (m_mapSquarePointLights, this, param_2, param_3, &local_31, pLVar9)->LoadStaticPointLights();
            cVar1 = LoadLocations(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_9,
                                  param_10, param_11, &local_31, pLVar9);
            this_02 = (Entity*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)&field_240);
            cVar5 = this_02->IsAtTargetLOD();
            if (((bVar3 & bVar4) == 1) && ((cVar1 != '\0' && (cVar5 != '\0')))) {
                SetCurrentLOD();
                this_03 = (GraphNode*)GetNode();
                uVar7 = 0;
                this_03->UnionAABBWithChildren(false);
            } else {
                cVar1 = IsAtTargetLOD();
                uVar7 = 3;
                if (cVar1 != '\0') {
                    uVar2 = game::operator+(uVar2, 1);
                    SetCurrentLOD(uVar2);
                    uVar7 = 2;
                }
            }
        }
        return uVar7;
    }

    // 0x1004117e0, 224 bytes, placed by class name and debug map
    // MapSquare::LoadEnvironment(Js5ResourceProvider*)
    ulong MapSquare::LoadEnvironment(Js5ResourceProvider* param_1) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        EnvironmentLoader* pEVar3;
        undefined* puVar4;
        MakeUniquePool<EnvironmentLoader, 48>* unaff_R12;
        undefined7 uVar6;
        ulong uVar5;
        MakeUniquePool<EnvironmentLoader, 48> local_30[8];

        this_00 = &field_704;
        bVar1 = this_00->operator_cast_to_bool();
        if (!bVar1) {
            unaff_R12 = local_30;
            MakeUniquePool<EnvironmentLoader, 48>::MakeUnique<unsigned int&, unsigned int&,
                                                              shared_ptr<ClientCompositeData>&>(
                unaff_R12, &m_mapSquareX, &m_mapSquareZ, (shared_ptr*)field_200);
            std::unique_ptr<EnvironmentLoader, MakeUniquePool<EnvironmentLoader, 48>::UniquePoolDeleter>::operator=(
                (unique_ptr<EnvironmentLoader, MakeUniquePool<EnvironmentLoader, 48>::UniquePoolDeleter>*)this_00,
                (unique_ptr*)unaff_R12);
            unaff_R12->~unique_ptr();
        }
        pEVar3 =
            (EnvironmentLoader*)std::
                unique_ptr<EnvironmentLoader, MakeUniquePool<EnvironmentLoader, 48>::UniquePoolDeleter>::operator->(
                    (unique_ptr<EnvironmentLoader, MakeUniquePool<EnvironmentLoader, 48>::UniquePoolDeleter>*)this_00);
        cVar2 = pEVar3->IsLoaded();
        uVar6 = (undefined7)((ulong)unaff_R12 >> 8);
        uVar5 = CONCAT71(uVar6, 1);
        if (cVar2 == '\0') {
            pEVar3 =
                (EnvironmentLoader*)std::
                    unique_ptr<EnvironmentLoader, MakeUniquePool<EnvironmentLoader, 48>::UniquePoolDeleter>::operator->(
                        (unique_ptr<EnvironmentLoader, MakeUniquePool<EnvironmentLoader, 48>::UniquePoolDeleter>*)
                            this_00);
            puVar4 = (undefined*)pEVar3->Load(param_1);
            uVar5 = CONCAT71(uVar6, puVar4 == DataStatus::READY);
        }
        pEVar3 =
            (EnvironmentLoader*)std::
                unique_ptr<EnvironmentLoader, MakeUniquePool<EnvironmentLoader, 48>::UniquePoolDeleter>::operator->(
                    (unique_ptr<EnvironmentLoader, MakeUniquePool<EnvironmentLoader, 48>::UniquePoolDeleter>*)this_00);
        cVar2 = pEVar3->IsLoaded();
        if (cVar2 != '\0') {
            bVar1 = (&field_784)->operator_cast_to_bool();
            if (bVar1) {
                (&field_784, (EnvironmentLoader*)0)->reset();
            }
        }
        return uVar5 & 4294967295;
    }

    // 0x1004118c0, 96 bytes, placed by class name and debug map
    // MapSquare::LoadWaterPatches(Js5ResourceProvider*, ConfigProvider*)
    undefined8 MapSquare::LoadWaterPatches(Js5ResourceProvider* param_1, ConfigProvider* param_2) {
        undefined* puVar2;

        if ((field_1120->IsLoaded() == '\0') &&
            (puVar2 = (undefined*)(field_1120, param_1, param_2)->Load(), puVar2 == DataStatus::NOTLOADED)) {
            return 1;
        }
        return 3;
    }

    // 0x100411920, 736 bytes, placed by class name and debug map
    // MapSquare::LoadTerrain(ConfigProvider*, LODLevel const&, graphics::RT7Core*, AssetBuilder*, int)
    undefined4 MapSquare::LoadTerrain(ConfigProvider* param_1, LODLevel* param_2, RT7Core* param_3,
                                      AssetBuilder* param_4, int param_5) {
        undefined1* this_00;
        bool bVar1;
        char cVar2;
        int iVar4;
        Entity* pEVar5;
        Terrain* pTVar6;
        Terrain* pTVar7;
        CoordMapSquare* this_02;
        shared_ptr* psVar8;
        GraphEntity* pGVar9;
        GraphNode* pGVar10;
        undefined4 uVar12;
        MakeUniquePool<Terrain, 32> local_98[8];
        uint local_90;
        uint local_8c;
        undefined1 local_88;
        undefined1* local_80;
        undefined8 local_78;
        undefined8 local_70;
        undefined1 local_68;
        RT7Core* local_60;
        undefined1* local_50;
        int local_44;
        GraphNode* local_40;

        this_00 = &field_240;
        local_60 = param_3;
        bVar1 = this_00->operator_cast_to_bool();
        if (!bVar1) {
            local_44 = param_5;
            this_02 = (CoordMapSquare*)param_1->GetMapDefaults();
            iVar4 = this_02->GetZ();
            psVar8 = ConfigProvider::GetConfig<WaterType>(param_1, iVar4, (DataStatus**)0);
            bVar1 = shared_ptr::operator_cast_to_bool(psVar8);
            if (!bVar1) {
                return 1;
            }
            local_90 = 0;
            local_40 = graphics::GraphNode::Create<int>((int*)&local_90);
            local_90 = m_mapSquareX;
            local_8c = m_mapSquareZ;
            local_88 = *param_2;
            local_80 = field_200;
            local_50 = param_2;
            local_78 = field_1120->GetOrigin();
            local_70 = field_1120->GetCursorMutex();
            local_68 = m_terrainBlending;
            psVar8 = (shared_ptr*)GetWorld();
            MakeUniquePool<Terrain, 32>::MakeUnique<graphics::GraphNode*&, shared_ptr<World> const&, TerrainInputData&,
                                                    graphics::RT7Core*&>(local_98, &local_40, psVar8,
                                                                         (TerrainInputData*)&local_90, &local_60);
            std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator=(
                (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)this_00, (unique_ptr*)local_98);
            local_98->~unique_ptr();
            pGVar10 = local_40;
            pGVar9 = (GraphEntity*)this_00->get();
            pGVar10->SetEntity(pGVar9);
            pGVar10 = (GraphNode*)GetNode();
            pGVar10->AddChild(local_40);
            if ((&field_792)->operator_cast_to_bool()) {
                pTVar6 = (Terrain*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                    (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)this_00);
                pTVar6->PreventFadeIn();
            }
            param_2 = local_50;
            param_5 = local_44;
            if (!bVar1) {
                return 1;
            }
        }
        pEVar5 = (Entity*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
            (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)this_00);
        pEVar5->SetTargetLOD(*param_2);
        pEVar5 = (Entity*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
            (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)this_00);
        cVar2 = pEVar5->IsAtTargetLOD();
        if (cVar2 == '\0') {
            pTVar6 = (Terrain*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)this_00);
            pTVar6->Build(param_4, param_5, param_1);
            pEVar5 = (Entity*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)this_00);
            cVar2 = pEVar5->IsAtTargetLOD();
            if (cVar2 == '\0') {
                return 2;
            }
            bVar1 = std::operator!=((unique_ptr*)&field_792, (_func_decltype_nullptr*)param_4);
            if (bVar1) {
                pTVar6 = (Terrain*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                    (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)this_00);
                pTVar7 = (Terrain*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator*(
                    (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)&field_792);
                pTVar6->ImportHeightAdjustments(pTVar7);
                DestroyOldTerrain(this);
                pTVar6 = (Terrain*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                    (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)this_00);
                pTVar6->PreventFadeIn();
            }
            pTVar6 = (Terrain*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)this_00);
            cVar2 = pTVar6->HasWater();
            if (cVar2 != '\0') {
                cVar2 = field_1120->HasWaterPatches();
                if (cVar2 == '\0') {
                    (field_1120, param_1)->SetDefaultWaterPatch();
                }
            }
        }
        bVar1 = m_partialMapBuild;
        if (bVar1 == false) {
            pTVar6 = (Terrain*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)this_00);
            cVar2 = pTVar6->IsReadyToRender();
            uVar12 = 3;
            if (cVar2 == '\0') {
                return 2;
            }
        } else {
            SetCurrentLOD(*param_2);
            uVar12 = 0;
        }
        pTVar6 = (Terrain*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
            (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)this_00);
        pTVar6->SetHideTerrain(bVar1);
        return uVar12;
    }

    // 0x100412120, 1200 bytes, placed by class name
    // MapSquare::LoadLocations(graphics::RT7Core*, Js5ResourceProvider*, ConfigProvider*, PlayerVarDomain*, AssetBuilder*, math::Vector3T<float> const&, int, unsigned int, bool, bool, LODLevel const&, LODSettings const&)
    undefined1 MapSquare::LoadLocations(RT7Core* param_1, Js5ResourceProvider* param_2, ConfigProvider* param_3,
                                        PlayerVarDomain* param_4, AssetBuilder* param_5, Vector3T* param_6, int param_7,
                                        uint param_8, bool param_9, bool param_10, LODLevel* param_11,
                                        LODSettings* param_12) {
        byte bVar1;
        uint uVar2;
        PlayerVarDomain* pPVar3;
        MapSquare* pMVar4;
        ulong uVar5;
        byte bVar6;
        char cVar7;
        bool bVar8;
        uint uVar9;
        ClientCompositeData* pCVar10;
        shared_ptr<World>* this_00;
        World* this_01;
        LinkMap* pLVar11;
        vector<std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>, eastl::allocator>* pvVar12;
        GraphNode* pGVar13;
        uint* puVar14;
        unique_ptr<LocationContainer, std::default_delete<LocationContainer>>* puVar15;
        GraphEntity* pGVar16;
        ulong uVar17;
        ulong uVar18;
        ulong uVar19;
        int iVar20;
        int iVar21;
        LocationLoader local_168;
        PlayerVarDomain* local_e0;
        ColourHSL local_d8;
        uint* local_c8;
        uint* local_c0;
        ulong local_b8;
        RT7Core* local_b0;
        AssetBuilder* local_a8;
        ulong local_a0;
        Js5ResourceProvider* local_98;
        int local_8c;
        int local_88;
        int local_84;
        int local_80;
        int local_7c;
        int local_78;
        float local_74;
        PlayerVarDomain* local_70;
        ulong local_68;
        ulong local_60;
        GraphNode* local_58;
        ulong local_50;
        MapSquare* local_48;
        shared_ptr* local_40;
        bool local_31;

        local_31 = true;
        bVar1 = *param_11;
        local_e0 = param_4;
        local_70 = (PlayerVarDomain*)param_3;
        if ((4 < bVar1) || (bVar6 = param_12->GetLowestUsableLOD(), bVar6 < bVar1)) {
            if (!param_9) {
                DestroyLocations(this);
            }
            return local_31;
        }
        if ((field_744 == '\0') || (cVar7 = (&field_752)->empty(), cVar7 != '\0')) {
            local_b0 = param_1;
            local_98 = param_2;
            (&field_712)->clear();
            uVar9 = m_mapSquareX;
            uVar2 = m_mapSquareZ;
            local_40 = (shared_ptr*)field_200;
            pCVar10 = (ClientCompositeData*)local_40->end();
            new (&local_168) LocationLoader(uVar9, uVar2, pCVar10);
            pPVar3 = local_70;
            local_48 = this;
            this_00 = (shared_ptr<World>*)GetWorld();
            this_01 = (World*)shared_ptr<World>::operator->(this_00);
            pLVar11 = (LinkMap*)this_01->GetLinkMap();
            cVar7 = local_168.Load((vector*)&field_712, local_98, (ConfigProvider*)pPVar3, pLVar11);
            if (cVar7 == '\0') {
                local_31 = false;
            } else {
                local_a8 = param_5;
                bVar8 = shared_ptr::operator_cast_to_bool(local_40);
                pMVar4 = local_48;
                local_40 = (shared_ptr*)&local_48->field_752;
                cVar7 = local_40->empty();
                local_50 = (ulong)((uint)bVar8 * 4 + 4);
                if (cVar7 != '\0') {
                    local_40->resize(local_50);
                    uVar18 = local_50;
                    uVar17 = 0;
                    do {
                        pvVar12 = (vector<std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                          eastl::allocator>*)
                            eastl::vector<eastl::vector<std::unique_ptr<LocationContainer,
                                                                        std::default_delete<LocationContainer>>,
                                                        eastl::allocator>,
                                          eastl::allocator>::
                            operator[](
                                (vector<eastl::vector<
                                            std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                            eastl::allocator>,
                                        eastl::allocator>*)local_40,
                                uVar17);
                        eastl::vector<std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                      eastl::allocator>::resize(pvVar12, uVar18);
                        uVar17 = uVar17 + 1;
                    } while (uVar18 != uVar17);
                }
                local_c8 = &pMVar4->m_mapSquareX;
                local_c0 = &pMVar4->m_mapSquareZ;
                iVar20 = (bVar8 ^ 1) * 8;
                uVar9 = iVar20 + 8;
                local_68 = (ulong)uVar9;
                local_7c = uVar9 * 128;
                local_b8 = (ulong)(iVar20 + 7);
                local_a0 = 0;
                uVar18 = local_50;
                do {
                    local_78 = (int)local_68 * (int)local_a0;
                    local_74 = (float)(local_78 * 128);
                    iVar20 = 0;
                    iVar21 = 0;
                    uVar19 = 0;
                    uVar17 = local_a0;
                    uVar5 = local_a0 + 1;
                    local_60 = local_a0;
                    do {
                        local_a0 = uVar5;
                        pvVar12 = (vector<std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                          eastl::allocator>*)
                            eastl::vector<eastl::vector<std::unique_ptr<LocationContainer,
                                                                        std::default_delete<LocationContainer>>,
                                                        eastl::allocator>,
                                          eastl::allocator>::
                            operator[](
                                (vector<eastl::vector<
                                            std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                            eastl::allocator>,
                                        eastl::allocator>*)local_40,
                                uVar17);
                        pGVar13 = (GraphNode*)
                            eastl::vector<std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                          eastl::allocator>::operator[](pvVar12, uVar19);
                        bVar8 = pGVar13->operator_cast_to_bool();
                        if (!bVar8) {
                            local_58 = graphics::GraphNode::Create<>(pGVar13);
                            pMVar4 = local_48;
                            puVar14 = (uint*)local_48->GetWorld();
                            local_8c = local_78;
                            local_84 = (int)local_68 * (int)local_a0 + -1;
                            local_80 = (int)local_b8 + iVar21;
                            local_88 = iVar21;
                            GetLocations(pMVar4);
                            std::make_unique<LocationContainer, ConfigProvider*&, PlayerVarDomain*&,
                                             graphics::GraphNode*&, shared_ptr<World> const&, unsigned int&,
                                             unsigned int&, int, int, int, int,
                                             eastl::vector<shared_ptr<MapSquareLocation>, eastl::allocator>&>(
                                (ConfigProvider**)&local_d8, &local_70, (GraphNode**)&local_e0, (shared_ptr*)&local_58,
                                puVar14, local_c8, (int*)local_c0, &local_8c, &local_88, &local_84, (vector*)&local_80);
                            pvVar12 =
                                (vector<std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                        eastl::allocator>*)
                                    eastl::vector<eastl::vector<std::unique_ptr<LocationContainer,
                                                                                std::default_delete<LocationContainer>>,
                                                                eastl::allocator>,
                                                  eastl::allocator>::
                                    operator[](
                                        (vector<eastl::vector<std::unique_ptr<LocationContainer,
                                                                              std::default_delete<LocationContainer>>,
                                                              eastl::allocator>,
                                                eastl::allocator>*)local_40,
                                        local_60);
                            puVar15 =
                                (unique_ptr<LocationContainer, std::default_delete<LocationContainer>>*)eastl::vector<
                                    std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                    eastl::allocator>::operator[](pvVar12, uVar19);
                            std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>::operator=(
                                puVar15, (unique_ptr*)&local_d8);
                            local_d8.~unique_ptr();
                            pGVar13 = local_58;
                            pvVar12 =
                                (vector<std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                        eastl::allocator>*)
                                    eastl::vector<eastl::vector<std::unique_ptr<LocationContainer,
                                                                                std::default_delete<LocationContainer>>,
                                                                eastl::allocator>,
                                                  eastl::allocator>::
                                    operator[](
                                        (vector<eastl::vector<std::unique_ptr<LocationContainer,
                                                                              std::default_delete<LocationContainer>>,
                                                              eastl::allocator>,
                                                eastl::allocator>*)local_40,
                                        local_60);
                            puVar15 =
                                (unique_ptr<LocationContainer, std::default_delete<LocationContainer>>*)eastl::vector<
                                    std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                    eastl::allocator>::operator[](pvVar12, uVar19);
                            pGVar16 = (GraphEntity*)
                                std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>::get(
                                    puVar15);
                            pGVar13->SetEntity(pGVar16);
                            pGVar13 = local_58;
                            new (&local_d8) math::ColourHSL(local_74, 0.0, (float)iVar20);
                            pGVar13->Translate((Vector3T*)&local_d8);
                            pGVar13 = (GraphNode*)local_48->GetNode();
                            pGVar13->AddChild(local_58);
                            uVar18 = local_50;
                            uVar17 = local_60;
                        }
                        uVar19 = uVar19 + 1;
                        iVar21 = iVar21 + (int)local_68;
                        iVar20 = iVar20 + local_7c;
                        uVar5 = local_a0;
                    } while (uVar18 != uVar19);
                } while (local_a0 != uVar18);
                local_48->field_744 = 1;
                local_48->field_236 = 1;
                param_5 = local_a8;
            }
            this = local_48;
            local_168.~LocationLoader();
            param_1 = local_b0;
            param_2 = local_98;
        }
        if (field_744 == '\0') {
            return local_31;
        }
        cVar7 = (&field_752)->empty();
        if (cVar7 == '\0') {
            bVar8 = field_200->operator_cast_to_bool();
            PrioritiseLocations(this, (uint)bVar8 * 4 + 4, param_6, param_7, param_9, param_12);
            BuildLocations(this, &local_31, param_1, param_2, (ConfigProvider*)local_70, param_5, param_8, param_9,
                           param_10);
            return local_31;
        }
        return local_31;
    }

    // 0x100412620, 80 bytes, placed by class name
    // MapSquare::Destruct()
    void MapSquare::Destruct() {
        DestroyEnvironmentLoader(this);
        DestroyTerrain(this);
        DestroyLocations(this);
        DestroyPointLighting(this);
        SetCurrentLOD(6);
        ResetWorld();
    }

    // 0x100412670, 48 bytes, placed by class name
    // MapSquare::DestroyEnvironmentLoader()
    void MapSquare::DestroyEnvironmentLoader() {
        (&field_704, (EnvironmentLoader*)0)->reset();
        DestroyOldEnvironmentLoader(this);
    }

    // 0x1004126a0, 128 bytes, placed by class name
    // MapSquare::DestroyTerrain()
    void MapSquare::DestroyTerrain() {
        undefined1* this_00;
        GraphNode* this_01;
        Entity* this_02;
        GraphNode* pGVar1;
        long* plVar3;

        this_00 = &field_240;
        if (this_00->operator_cast_to_bool()) {
            plVar3 = (long*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)this_00);
            (**(code**)(*plVar3 + 200))(plVar3);
            this_01 = (GraphNode*)GetNode();
            this_02 = (Entity*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)this_00);
            pGVar1 = (GraphNode*)this_02->GetNode();
            this_01->RemoveChild(pGVar1);
            this_00->reset(0);
            m_initialLightProbeSubmitted = 0;
        }
        DestroyOldTerrain(this);
    }

    // 0x100412720, 368 bytes, placed by class name
    // MapSquare::DestroyLocations()
    void MapSquare::DestroyLocations() {
        undefined1* this_00;
        long lVar1;
        vector<eastl::pair<int, int>, eastl::allocator>* pvVar2;
        vector<std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>, eastl::allocator>* pvVar3;
        GraphNode* this_01;
        Entity* this_02;
        GraphNode* pGVar4;
        char cVar5;
        bool bVar6;
        unique_ptr<LocationContainer, std::default_delete<LocationContainer>>* puVar7;
        long* plVar8;
        ulong uVar9;
        ulong uVar10;
        ulong uVar11;

        this_00 = &field_752;
        cVar5 = this_00->empty();
        if (cVar5 == '\0') {
            lVar1 = this_00->size();
            if (lVar1 != 0) {
                uVar9 = 0;
                do {
                    pvVar2 = (vector<eastl::pair<int, int>, eastl::allocator>*)eastl::vector<
                        eastl::vector<std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                      eastl::allocator>,
                        eastl::allocator>::
                    operator[](
                        (vector<
                            eastl::vector<std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                          eastl::allocator>,
                            eastl::allocator>*)this_00,
                        uVar9);
                    lVar1 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(pvVar2);
                    if (lVar1 != 0) {
                        uVar10 = 0;
                        uVar11 = 1;
                        do {
                            pvVar3 = (vector<std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                             eastl::allocator>*)
                                eastl::vector<eastl::vector<std::unique_ptr<LocationContainer,
                                                                            std::default_delete<LocationContainer>>,
                                                            eastl::allocator>,
                                              eastl::allocator>::
                                operator[](
                                    (vector<eastl::vector<std::unique_ptr<LocationContainer,
                                                                          std::default_delete<LocationContainer>>,
                                                          eastl::allocator>,
                                            eastl::allocator>*)this_00,
                                    uVar9);
                            puVar7 =
                                (unique_ptr<LocationContainer, std::default_delete<LocationContainer>>*)eastl::vector<
                                    std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                    eastl::allocator>::operator[](pvVar3, uVar10);
                            bVar6 = puVar7->operator_cast_to_bool();
                            if (bVar6) {
                                plVar8 =
                                    (long*)std::unique_ptr<LocationContainer,
                                                           std::default_delete<LocationContainer>>::operator->(puVar7);
                                (**(code**)(*plVar8 + 200))(plVar8);
                                this_01 = (GraphNode*)GetNode();
                                this_02 =
                                    (Entity*)std::unique_ptr<
                                        LocationContainer, std::default_delete<LocationContainer>>::operator->(puVar7);
                                pGVar4 = (GraphNode*)this_02->GetNode();
                                this_01->RemoveChild(pGVar4);
                                pvVar3 = (vector<
                                          std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                          eastl::allocator>*)
                                    eastl::vector<eastl::vector<std::unique_ptr<LocationContainer,
                                                                                std::default_delete<LocationContainer>>,
                                                                eastl::allocator>,
                                                  eastl::allocator>::
                                    operator[](
                                        (vector<eastl::vector<std::unique_ptr<LocationContainer,
                                                                              std::default_delete<LocationContainer>>,
                                                              eastl::allocator>,
                                                eastl::allocator>*)this_00,
                                        uVar9);
                                puVar7 = (unique_ptr<LocationContainer, std::default_delete<LocationContainer>>*)
                                    eastl::vector<
                                        std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                        eastl::allocator>::operator[](pvVar3, uVar10);
                                std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>::reset(
                                    puVar7, (LocationContainer*)0);
                            }
                            pvVar2 = (vector<eastl::pair<int, int>, eastl::allocator>*)eastl::vector<
                                eastl::vector<
                                    std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                    eastl::allocator>,
                                eastl::allocator>::
                            operator[](
                                (vector<eastl::vector<
                                            std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                            eastl::allocator>,
                                        eastl::allocator>*)this_00,
                                uVar9);
                            uVar10 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(pvVar2);
                            bVar6 = uVar11 < uVar10;
                            uVar10 = uVar11;
                            uVar11 = (ulong)((int)uVar11 + 1);
                        } while (bVar6);
                    }
                    uVar9 = (ulong)((int)uVar9 + 1);
                    uVar10 = this_00->size();
                } while (uVar9 < uVar10);
            }
            this_00->clear();
            (&field_712)->clear();
            m_prioritySquare = '\0';
            m_hasBuiltPriorityZones = 0;
            field_744 = 0;
        }
    }

    // 0x100412890, 64 bytes, placed by class name
    // MapSquare::DestroyPointLighting()
    void MapSquare::DestroyPointLighting() {
        PointLightGridTexture* this_00;

        this_00 = (PointLightGridTexture*)m_mapSquarePointLights->GetLinearLookatAcceleration();
        this_00->Destroy(m_mapSquareX, m_mapSquareZ);
        PrepareForNewPointLights(this);
    }

    // 0x100412910, 32 bytes, placed by class name
    // MapSquare::DestroyOldEnvironmentLoader()
    void MapSquare::DestroyOldEnvironmentLoader() {
        (&field_784, (EnvironmentLoader*)0)->reset();
    }

    // 0x100412930, 64 bytes, placed by class name
    // MapSquare::PrepareForNewEnvironmentLoader()
    void MapSquare::PrepareForNewEnvironmentLoader() {
        undefined1* this_00;

        this_00 = &field_704;
        if (this_00->operator_cast_to_bool()) {
            (&field_784, (unique_ptr*)this_00)->swap();
            this_00->reset(0);
        }
    }

    // 0x100412a00, 112 bytes, placed by class name
    // MapSquare::DestroyOldTerrain()
    void MapSquare::DestroyOldTerrain() {
        undefined1* this_00;
        GraphNode* this_01;
        Entity* this_02;
        GraphNode* pGVar1;
        long* plVar3;

        this_00 = &field_792;
        if (this_00->operator_cast_to_bool()) {
            plVar3 = (long*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)this_00);
            (**(code**)(*plVar3 + 200))(plVar3);
            this_01 = (GraphNode*)GetNode();
            this_02 = (Entity*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)this_00);
            pGVar1 = (GraphNode*)this_02->GetNode();
            this_01->RemoveChild(pGVar1);
            this_00->reset(0);
        }
    }

    // 0x100412a70, 80 bytes, placed by class name
    // MapSquare::PrepareForNewTerrain()
    void MapSquare::PrepareForNewTerrain() {
        undefined1* this_00;

        this_00 = &field_240;
        if (this_00->operator_cast_to_bool()) {
            (&field_792, (unique_ptr*)this_00)->swap();
            this_00->reset(0);
            m_initialLightProbeSubmitted = 0;
        }
    }

    // 0x100412ad0, 48 bytes, placed by class name
    // MapSquare::RebuildTerrain()
    void MapSquare::RebuildTerrain() {
        PrepareForNewTerrain(this);
        SetCurrentLOD(6);
    }

    // 0x100412b00, 32 bytes, placed by class name
    // MapSquare::SetTerrainBlending(bool)
    void MapSquare::SetTerrainBlending(bool param_1) {
        m_terrainBlending = param_1;
        RebuildTerrain(this);
    }

    // 0x100412b20, 544 bytes, placed by class name
    // MapSquare::RebuildArea(int, int, int, int)
    void MapSquare::RebuildArea(int param_1, int param_2, int param_3, int param_4) {
        undefined1* this_00;
        char cVar1;
        bool bVar2;
        long lVar3;
        ulong uVar4;
        vector<eastl::pair<int, int>, eastl::allocator>* pvVar5;
        ulong uVar6;
        vector<std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>, eastl::allocator>* pvVar7;
        unique_ptr* this_01;
        unique_ptr<LocationContainer, std::default_delete<LocationContainer>>* puVar8;
        LocationContainer* this_02;
        long* plVar9;
        GraphNode* this_03;
        Entity* this_04;
        GraphNode* pGVar10;
        uint uVar11;
        ulong uVar12;

        if ((param_3 < param_1) || (param_4 < param_2)) {
            /* WARNING: Subroutine does not return */
            LogAssert("tileMinX <= tileMaxX && tileMinZ <= tileMaxZ",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/MapSquare.cpp",
                      231, "Min and max coords reversed");
        }
        PrepareForNewEnvironmentLoader(this);
        PrepareForNewPointLights(this);
        this_00 = &field_752;
        cVar1 = this_00->empty();
        if (cVar1 == '\0') {
            lVar3 = this_00->size();
            if (lVar3 != 0) {
                uVar12 = 0;
                do {
                    pvVar5 = (vector<eastl::pair<int, int>, eastl::allocator>*)eastl::vector<
                        eastl::vector<std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                      eastl::allocator>,
                        eastl::allocator>::
                    operator[](
                        (vector<
                            eastl::vector<std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                          eastl::allocator>,
                            eastl::allocator>*)this_00,
                        uVar12);
                    lVar3 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(pvVar5);
                    if (lVar3 != 0) {
                        uVar11 = 1;
                        uVar4 = 0;
                        do {
                            pvVar7 = (vector<std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                             eastl::allocator>*)
                                eastl::vector<eastl::vector<std::unique_ptr<LocationContainer,
                                                                            std::default_delete<LocationContainer>>,
                                                            eastl::allocator>,
                                              eastl::allocator>::
                                operator[](
                                    (vector<eastl::vector<std::unique_ptr<LocationContainer,
                                                                          std::default_delete<LocationContainer>>,
                                                          eastl::allocator>,
                                            eastl::allocator>*)this_00,
                                    uVar12);
                            this_01 = (unique_ptr*)eastl::vector<
                                std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                eastl::allocator>::operator[](pvVar7, uVar4);
                            bVar2 = std::unique_ptr::operator_cast_to_bool(this_01);
                            if (bVar2) {
                                pvVar7 = (vector<
                                          std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                          eastl::allocator>*)
                                    eastl::vector<eastl::vector<std::unique_ptr<LocationContainer,
                                                                                std::default_delete<LocationContainer>>,
                                                                eastl::allocator>,
                                                  eastl::allocator>::
                                    operator[](
                                        (vector<eastl::vector<std::unique_ptr<LocationContainer,
                                                                              std::default_delete<LocationContainer>>,
                                                              eastl::allocator>,
                                                eastl::allocator>*)this_00,
                                        uVar12);
                                puVar8 = (unique_ptr<LocationContainer, std::default_delete<LocationContainer>>*)
                                    eastl::vector<
                                        std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                        eastl::allocator>::operator[](pvVar7, uVar4);
                                this_02 =
                                    (LocationContainer*)std::unique_ptr<
                                        LocationContainer, std::default_delete<LocationContainer>>::operator->(puVar8);
                                cVar1 = this_02->OverlapsArea(param_1, param_2, param_3, param_4);
                                if (cVar1 != '\0') {
                                    pvVar7 = (vector<std::unique_ptr<LocationContainer,
                                                                     std::default_delete<LocationContainer>>,
                                                     eastl::allocator>*)
                                        eastl::vector<
                                            eastl::vector<std::unique_ptr<LocationContainer,
                                                                          std::default_delete<LocationContainer>>,
                                                          eastl::allocator>,
                                            eastl::allocator>::
                                        operator[](
                                            (vector<
                                                eastl::vector<std::unique_ptr<LocationContainer,
                                                                              std::default_delete<LocationContainer>>,
                                                              eastl::allocator>,
                                                eastl::allocator>*)this_00,
                                            uVar12);
                                    puVar8 = (unique_ptr<LocationContainer, std::default_delete<LocationContainer>>*)
                                        eastl::vector<
                                            std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                            eastl::allocator>::operator[](pvVar7, uVar4);
                                    plVar9 =
                                        (long*)
                                            std::unique_ptr<LocationContainer,
                                                            std::default_delete<LocationContainer>>::operator->(puVar8);
                                    (**(code**)(*plVar9 + 200))(plVar9);
                                    this_03 = (GraphNode*)GetNode();
                                    pvVar7 = (vector<std::unique_ptr<LocationContainer,
                                                                     std::default_delete<LocationContainer>>,
                                                     eastl::allocator>*)
                                        eastl::vector<
                                            eastl::vector<std::unique_ptr<LocationContainer,
                                                                          std::default_delete<LocationContainer>>,
                                                          eastl::allocator>,
                                            eastl::allocator>::
                                        operator[](
                                            (vector<
                                                eastl::vector<std::unique_ptr<LocationContainer,
                                                                              std::default_delete<LocationContainer>>,
                                                              eastl::allocator>,
                                                eastl::allocator>*)this_00,
                                            uVar12);
                                    puVar8 = (unique_ptr<LocationContainer, std::default_delete<LocationContainer>>*)
                                        eastl::vector<
                                            std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                            eastl::allocator>::operator[](pvVar7, uVar4);
                                    this_04 =
                                        (Entity*)
                                            std::unique_ptr<LocationContainer,
                                                            std::default_delete<LocationContainer>>::operator->(puVar8);
                                    pGVar10 = (GraphNode*)this_04->GetNode();
                                    this_03->RemoveChild(pGVar10);
                                    pvVar7 = (vector<std::unique_ptr<LocationContainer,
                                                                     std::default_delete<LocationContainer>>,
                                                     eastl::allocator>*)
                                        eastl::vector<
                                            eastl::vector<std::unique_ptr<LocationContainer,
                                                                          std::default_delete<LocationContainer>>,
                                                          eastl::allocator>,
                                            eastl::allocator>::
                                        operator[](
                                            (vector<
                                                eastl::vector<std::unique_ptr<LocationContainer,
                                                                              std::default_delete<LocationContainer>>,
                                                              eastl::allocator>,
                                                eastl::allocator>*)this_00,
                                            uVar12);
                                    puVar8 = (unique_ptr<LocationContainer, std::default_delete<LocationContainer>>*)
                                        eastl::vector<
                                            std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                            eastl::allocator>::operator[](pvVar7, uVar4);
                                    std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>::reset(
                                        puVar8, (LocationContainer*)0);
                                }
                            }
                            uVar4 = (ulong)uVar11;
                            pvVar5 = (vector<eastl::pair<int, int>, eastl::allocator>*)eastl::vector<
                                eastl::vector<
                                    std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                    eastl::allocator>,
                                eastl::allocator>::
                            operator[](
                                (vector<eastl::vector<
                                            std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                            eastl::allocator>,
                                        eastl::allocator>*)this_00,
                                uVar12);
                            uVar6 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(pvVar5);
                            uVar11 = uVar11 + 1;
                        } while (uVar4 < uVar6);
                    }
                    uVar12 = (ulong)((int)uVar12 + 1);
                    uVar4 = this_00->size();
                } while (uVar12 < uVar4);
            }
        }
        field_236 = 1;
        field_744 = 0;
        PrepareForNewTerrain(this);
        SetCurrentLOD(6);
    }

    // 0x100412d40, 48 bytes, placed by class name
    // MapSquare::PrepareForNewPointLights()
    void MapSquare::PrepareForNewPointLights() {
        GraphNode* pGVar1;

        pGVar1 = (GraphNode*)GetNode();
        (m_mapSquarePointLights, pGVar1)->ClearExistingLights();
    }

    // 0x100413090, 240 bytes, placed by class name
    // MapSquare::GetTileHeight(int&, int, int, int, bool, HeightOffsetType) const
    undefined* MapSquare::GetTileHeight(int* param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4,
                                        undefined1 param_5, undefined4 param_7) {
        bool bVar1;
        char cVar2;
        Entity* pEVar3;
        Terrain* pTVar4;
        undefined* puVar5;
        undefined1* puVar6;

        puVar6 = &field_240;
        bVar1 = puVar6->operator_cast_to_bool();
        if (bVar1) {
            pEVar3 = (Entity*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)puVar6);
            cVar2 = pEVar3->IsAtTargetLOD();
            if (cVar2 != '\0') {
                pTVar4 = (Terrain*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                    (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)puVar6);
                puVar5 = (undefined*)pTVar4->GetTileHeight(param_1, param_2, param_3, param_4, param_5, param_7);
                return puVar5;
            }
        }
        puVar6 = &field_792;
        bVar1 = puVar6->operator_cast_to_bool();
        if (bVar1) {
            pEVar3 = (Entity*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)puVar6);
            cVar2 = pEVar3->IsAtTargetLOD();
            if (cVar2 != '\0') {
                pTVar4 = (Terrain*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                    (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)puVar6);
                puVar5 = (undefined*)pTVar4->GetTileHeight(param_1, param_2, param_3, param_4, param_5, param_7);
                if (*param_1 == -1) {
                    return DataStatus::NOTLOADED;
                }
                return puVar5;
            }
        }
        *param_1 = -1;
        return DataStatus::NOTLOADED;
    }

    // 0x100413180, 240 bytes, placed by class name
    // MapSquare::GetFineHeight(int&, int, int, int, bool, HeightOffsetType) const
    undefined* MapSquare::GetFineHeight(int* param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4,
                                        undefined1 param_5, undefined4 param_7) {
        bool bVar1;
        char cVar2;
        Entity* pEVar3;
        Terrain* pTVar4;
        undefined* puVar5;
        undefined1* puVar6;

        puVar6 = &field_240;
        bVar1 = puVar6->operator_cast_to_bool();
        if (bVar1) {
            pEVar3 = (Entity*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)puVar6);
            cVar2 = pEVar3->IsAtTargetLOD();
            if (cVar2 != '\0') {
                pTVar4 = (Terrain*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                    (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)puVar6);
                puVar5 = (undefined*)pTVar4->GetFineHeight(param_1, param_2, param_3, param_4, param_5, param_7);
                return puVar5;
            }
        }
        puVar6 = &field_792;
        bVar1 = puVar6->operator_cast_to_bool();
        if (bVar1) {
            pEVar3 = (Entity*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)puVar6);
            cVar2 = pEVar3->IsAtTargetLOD();
            if (cVar2 != '\0') {
                pTVar4 = (Terrain*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                    (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)puVar6);
                puVar5 = (undefined*)pTVar4->GetFineHeight(param_1, param_2, param_3, param_4, param_5, param_7);
                if (*param_1 == -1) {
                    return DataStatus::NOTLOADED;
                }
                return puVar5;
            }
        }
        *param_1 = -1;
        return DataStatus::NOTLOADED;
    }

    // 0x100413270, 160 bytes, placed by class name
    // MapSquare::GetFineWaterDepth(int, int, int) const
    undefined4 MapSquare::GetFineWaterDepth(int param_1, int param_2, int param_3) {
        bool bVar1;
        char cVar2;
        undefined4 uVar3;
        Entity* pEVar4;
        Terrain* this_00;
        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* this_01;

        this_01 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)&field_240;
        bVar1 = this_01->operator_cast_to_bool();
        if (bVar1) {
            pEVar4 =
                (Entity*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(this_01);
            cVar2 = pEVar4->IsAtTargetLOD();
            if (cVar2 != '\0')
                goto LAB_1004132e1;
        }
        this_01 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)&field_792;
        bVar1 = this_01->operator_cast_to_bool();
        if (!bVar1) {
            return 4294967295;
        }
        pEVar4 = (Entity*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(this_01);
        cVar2 = pEVar4->IsAtTargetLOD();
        if (cVar2 == '\0') {
            return 4294967295;
        }
    LAB_1004132e1:
        this_00 =
            (Terrain*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(this_01);
        uVar3 = this_00->GetFineWaterDepth(param_1, param_2, param_3);
        return uVar3;
    }

    // 0x100413310, 160 bytes, placed by class name
    // MapSquare::GetTileLink(int, int, int) const
    undefined4 MapSquare::GetTileLink(int param_1, int param_2, int param_3) {
        bool bVar1;
        char cVar2;
        undefined4 uVar3;
        Entity* pEVar4;
        Terrain* this_00;
        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* this_01;

        this_01 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)&field_240;
        bVar1 = this_01->operator_cast_to_bool();
        if (bVar1) {
            pEVar4 =
                (Entity*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(this_01);
            cVar2 = pEVar4->IsAtTargetLOD();
            if (cVar2 != '\0')
                goto LAB_10041337e;
        }
        this_01 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)&field_792;
        bVar1 = this_01->operator_cast_to_bool();
        if (!bVar1) {
            return 0;
        }
        pEVar4 = (Entity*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(this_01);
        cVar2 = pEVar4->IsAtTargetLOD();
        if (cVar2 == '\0') {
            return 0;
        }
    LAB_10041337e:
        this_00 =
            (Terrain*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(this_01);
        uVar3 = this_00->GetTileLink(param_1, param_2, param_3);
        return uVar3;
    }

    // 0x1004133d0, 160 bytes, placed by class name
    // MapSquare::GetRemoveRoofID(int, int, int) const
    undefined4 MapSquare::GetRemoveRoofID(int param_1, int param_2, int param_3) {
        bool bVar1;
        char cVar2;
        undefined4 uVar3;
        Entity* pEVar4;
        Terrain* this_00;
        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* this_01;

        this_01 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)&field_240;
        bVar1 = this_01->operator_cast_to_bool();
        if (bVar1) {
            pEVar4 =
                (Entity*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(this_01);
            cVar2 = pEVar4->IsAtTargetLOD();
            if (cVar2 != '\0')
                goto LAB_10041343e;
        }
        this_01 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)&field_792;
        bVar1 = this_01->operator_cast_to_bool();
        if (!bVar1) {
            return 0;
        }
        pEVar4 = (Entity*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(this_01);
        cVar2 = pEVar4->IsAtTargetLOD();
        if (cVar2 == '\0') {
            return 0;
        }
    LAB_10041343e:
        this_00 =
            (Terrain*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(this_01);
        uVar3 = this_00->GetRemoveRoofID(param_1, param_2, param_3);
        return uVar3;
    }

    // 0x100413490, 144 bytes, placed by class name
    // MapSquare::GetUnderworldData(int, int) const
    undefined1 MapSquare::GetUnderworldData(int param_1, int param_2) {
        bool bVar1;
        char cVar2;
        undefined1 uVar3;
        Entity* pEVar4;
        Terrain* this_00;
        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* this_01;

        this_01 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)&field_240;
        bVar1 = this_01->operator_cast_to_bool();
        if (bVar1) {
            pEVar4 =
                (Entity*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(this_01);
            cVar2 = pEVar4->IsAtTargetLOD();
            if (cVar2 == '\0')
                goto LAB_1004134cb;
        LAB_1004134f5:
            this_00 =
                (Terrain*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(this_01);
            uVar3 = this_00->GetUnderworldData(param_1, param_2);
        } else {
        LAB_1004134cb:
            this_01 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)&field_792;
            bVar1 = this_01->operator_cast_to_bool();
            if (bVar1) {
                pEVar4 = (Entity*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                    this_01);
                cVar2 = pEVar4->IsAtTargetLOD();
                if (cVar2 != '\0')
                    goto LAB_1004134f5;
            }
            uVar3 = 0;
        }
        return uVar3;
    }

    // 0x100413560, 144 bytes, placed by class name
    // MapSquare::GetHeightMap(int) const
    undefined1* MapSquare::GetHeightMap(int param_1) {
        bool bVar1;
        char cVar2;
        Entity* pEVar3;
        Terrain* this_00;
        undefined1* puVar4;
        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* this_01;

        this_01 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)&field_240;
        bVar1 = this_01->operator_cast_to_bool();
        if (bVar1) {
            pEVar3 =
                (Entity*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(this_01);
            cVar2 = pEVar3->IsAtTargetLOD();
            if (cVar2 != '\0')
                goto LAB_1004135c9;
        }
        this_01 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)&field_792;
        bVar1 = this_01->operator_cast_to_bool();
        if (!bVar1) {
            return &NullRawHeightMap;
        }
        pEVar3 = (Entity*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(this_01);
        cVar2 = pEVar3->IsAtTargetLOD();
        if (cVar2 == '\0') {
            return &NullRawHeightMap;
        }
    LAB_1004135c9:
        this_00 =
            (Terrain*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(this_01);
        puVar4 = (undefined1*)this_00->GetHeightMap(param_1);
        return puVar4;
    }

    // 0x100413640, 144 bytes, placed by class name
    // MapSquare::GetWaterHeights() const
    undefined1* MapSquare::GetWaterHeights() {
        bool bVar1;
        char cVar2;
        Entity* pEVar3;
        Terrain* this_00;
        undefined1* puVar4;
        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* this_01;

        this_01 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)&field_240;
        bVar1 = this_01->operator_cast_to_bool();
        if (bVar1) {
            pEVar3 =
                (Entity*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(this_01);
            cVar2 = pEVar3->IsAtTargetLOD();
            if (cVar2 != '\0')
                goto LAB_1004136a5;
        }
        this_01 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)&field_792;
        bVar1 = this_01->operator_cast_to_bool();
        if (!bVar1) {
            return &NullRawWaterHeights;
        }
        pEVar3 = (Entity*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(this_01);
        cVar2 = pEVar3->IsAtTargetLOD();
        if (cVar2 == '\0') {
            return &NullRawWaterHeights;
        }
    LAB_1004136a5:
        this_00 =
            (Terrain*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(this_01);
        puVar4 = (undefined1*)this_00->GetWaterHeights();
        return puVar4;
    }

    // 0x1004136d0, 112 bytes, placed by class name
    // MapSquare::AddLocationHeightOffset(int, int, int, int, int, int, int)
    void MapSquare::AddLocationHeightOffset(int param_1, int param_2, int param_3, int param_4, int param_5,
                                            int param_6, int param_7) {
        Terrain* this_00;

        if ((&field_240)->operator_cast_to_bool()) {
            this_00 = (Terrain*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)&field_240);
            this_00->AddLocationHeightOffset(param_1, param_2, param_3, param_4, param_5, param_6, param_7);
        }
    }

    // 0x100413740, 112 bytes, placed by class name
    // MapSquare::RemoveLocationHeightOffset(int, int, int, int, int, int, int)
    void MapSquare::RemoveLocationHeightOffset(int param_1, int param_2, int param_3, int param_4, int param_5,
                                               int param_6, int param_7) {
        Terrain* this_00;

        if ((&field_240)->operator_cast_to_bool()) {
            this_00 = (Terrain*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)&field_240);
            this_00->RemoveLocationHeightOffset(param_1, param_2, param_3, param_4, param_5, param_6, param_7);
        }
    }

    // 0x1004137b0, 176 bytes, placed by class name
    // MapSquare::GetLocationContainer(int, int) const
    undefined8* MapSquare::GetLocationContainer(int param_1, int param_2) {
        undefined1* this_00;
        char cVar1;
        bool bVar2;
        int iVar3;
        vector<eastl::pair<int, int>, eastl::allocator>* this_01;
        undefined8* puVar4;
        int iVar5;
        int iVar6;

        this_00 = &field_752;
        cVar1 = this_00->empty();
        if (cVar1 == '\0') {
            bVar2 = field_200->operator_cast_to_bool();
            iVar5 = (uint)!bVar2 * 8 + 8;
            iVar6 = param_1 / iVar5;
            iVar5 = param_2 / iVar5;
            iVar3 = this_00->size();
            if (iVar6 < iVar3) {
                this_01 = (vector<eastl::pair<int, int>, eastl::allocator>*)eastl::vector<
                    eastl::vector<std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                  eastl::allocator>,
                    eastl::allocator>::
                operator[](
                    (vector<eastl::vector<std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                          eastl::allocator>,
                            eastl::allocator>*)this_00,
                    (long)iVar6);
                iVar3 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(this_01);
                if (iVar5 < iVar3) {
                    puVar4 = (undefined8*)eastl::vector<
                        std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>, eastl::allocator>::
                    operator[]((vector<std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                       eastl::allocator>*)this_01,
                               (long)iVar5);
                    return puVar4;
                }
            }
        }
        return &LocationContainer::NullContainer;
    }

    // 0x1004138e0, 320 bytes, placed by class name
    // MapSquare::ZoneMapSame(shared_ptr<ClientCompositeData> const&) const
    bool MapSquare::ZoneMapSame(shared_ptr* param_1) {
        uint uVar1;
        char cVar2;
        int iVar3;
        long lVar4;
        uint uVar5;
        int iVar6;
        int iVar7;

        lVar4 = param_1->end();
        if (lVar4 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("compositeData.get() != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/MapSquare.cpp",
                      457, "%s: no new region data supplied", "ZoneMapSame");
        }
        lVar4 = field_200->end();
        if (lVar4 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_compositeData.get() != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/MapSquare.cpp",
                      458, "%s: map square has no region data to compare to.", "ZoneMapSame");
        }
        iVar6 = 0;
        do {
            iVar7 = 0;
            do {
                iVar7 = iVar7 + 1;
                uVar1 = 0;
                do {
                    uVar5 = uVar1;
                    if (uVar5 == 8)
                        goto LAB_1004139db;
                    cVar2 = ZoneLevelsEqual((shared_ptr*)field_200, param_1, iVar6, iVar7, uVar5 + 1);
                    uVar1 = uVar5 + 1;
                } while (cVar2 != '\0');
                iVar3 = 1;
                if (uVar5 < 8)
                    goto LAB_1004139e6;
            LAB_1004139db:
            } while (iVar7 != 8);
            iVar3 = 5;
        LAB_1004139e6:
            if (iVar3 != 5)
                goto LAB_1004139fe;
            iVar6 = iVar6 + 1;
        } while (iVar6 != 4);
        iVar3 = 2;
    LAB_1004139fe:
        return iVar3 == 2;
    }

    // 0x100413a20, 480 bytes, placed by class name
    // MapSquare::ZoneLevelsEqual(shared_ptr<ClientCompositeData> const&, shared_ptr<ClientCompositeData> const&, int, int, int)
    ulong MapSquare::ZoneLevelsEqual(shared_ptr* param_1, shared_ptr* param_2, int param_3, int param_4, int param_5) {
        bool bVar1;
        char cVar2;
        int iVar3;
        vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>, 10ul, true,
                                   eastl::allocator>,
               eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true, eastl::allocator>>* pvVar4;
        vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
               eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true, eastl::allocator>>* this;
        vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
               eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true, eastl::allocator>>* this_00;
        vector<WorldMap::PendingLocationType, eastl::allocator>* this_01;
        vector<WorldMap::PendingLocationType, eastl::allocator>* this_02;
        ClientCompositeZone* this_03;
        ClientCompositeZone* this_04;
        undefined8 uVar5;
        ulong uVar6;
        bool bVar7;
        undefined4 uVar8;
        undefined8 extraout_RDX;
        undefined8 extraout_RDX_00;

        if (param_3 < 0) {
            uVar5 = 0;
            uVar8 = 0;
            if (param_3 < 0)
                goto LAB_100413a7e;
        LAB_100413a5a:
            bVar7 = SUB41(uVar8, 0);
            pvVar4 = (vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                                 10ul, true, eastl::allocator>,
                             eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                         shared_ptr<ClientCompositeData>::operator->((shared_ptr<ClientCompositeData>*)param_2);
            iVar3 = eastl::vector<
                eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>, 10ul, true,
                                    eastl::allocator>,
                eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::size(pvVar4);
            bVar1 = param_3 < iVar3;
            uVar6 = (ulong)CONCAT31((int3)((uint)uVar8 >> 8), bVar1);
        } else {
            pvVar4 = (vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                                 10ul, true, eastl::allocator>,
                             eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                         shared_ptr<ClientCompositeData>::operator->((shared_ptr<ClientCompositeData>*)param_1);
            iVar3 = eastl::vector<
                eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>, 10ul, true,
                                    eastl::allocator>,
                eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::size(pvVar4);
            uVar5 = CONCAT71((int7)((ulong)extraout_RDX >> 8), param_3 < iVar3);
            uVar8 = (undefined4)uVar5;
            if (-1 < param_3)
                goto LAB_100413a5a;
        LAB_100413a7e:
            bVar7 = SUB81(uVar5, 0);
            uVar6 = 0;
            bVar1 = false;
        }
        if ((bVar7 & bVar1) == 1) {
            pvVar4 = (vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                                 10ul, true, eastl::allocator>,
                             eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                         shared_ptr<ClientCompositeData>::operator->((shared_ptr<ClientCompositeData>*)param_1);
            this = (vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                           eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true, eastl::allocator>>*)
                eastl::vector<
                    eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>, 10ul,
                                        true, eastl::allocator>,
                    eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true,
                                                  eastl::allocator>>::operator[](pvVar4, (long)param_3);
            pvVar4 = (vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                                 10ul, true, eastl::allocator>,
                             eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                         shared_ptr<ClientCompositeData>::operator->((shared_ptr<ClientCompositeData>*)param_2);
            this_00 = (vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                              eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true, eastl::allocator>>*)
                eastl::vector<
                    eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>, 10ul,
                                        true, eastl::allocator>,
                    eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true,
                                                  eastl::allocator>>::operator[](pvVar4, (long)param_3);
            if (param_4 < 0) {
                bVar7 = false;
                bVar1 = false;
                if (param_4 < 0)
                    goto LAB_100413af1;
            LAB_100413ad5:
                bVar7 = bVar1;
                iVar3 = eastl::vector<
                    eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                    eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true, eastl::allocator>>::size(this_00);
                bVar1 = param_4 < iVar3;
                uVar6 = CONCAT71((int7)(uVar6 >> 8), bVar1);
            } else {
                iVar3 = eastl::vector<
                    eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                    eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true, eastl::allocator>>::size(this);
                bVar7 = param_4 < iVar3;
                bVar1 = bVar7;
                if (-1 < param_4)
                    goto LAB_100413ad5;
            LAB_100413af1:
                uVar6 = 0;
                bVar1 = false;
            }
            if ((bool)(bVar7 & bVar1)) {
                this_01 = (vector<WorldMap::PendingLocationType, eastl::allocator>*)
                    eastl::vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                  eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true,
                                                                eastl::allocator>>::operator[](this, (long)param_4);
                this_02 = (vector<WorldMap::PendingLocationType, eastl::allocator>*)
                    eastl::vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                  eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true,
                                                                eastl::allocator>>::operator[](this_00, (long)param_4);
                if (param_5 < 0) {
                    bVar7 = false;
                    uVar8 = 0;
                    bVar1 = false;
                    if (param_5 < 0)
                        goto LAB_100413b55;
                LAB_100413b39:
                    bVar7 = bVar1;
                    iVar3 = eastl::vector<WorldMap::PendingLocationType, eastl::allocator>::size(this_02);
                    bVar1 = param_5 < iVar3;
                    uVar6 = (ulong)CONCAT31((int3)((uint)uVar8 >> 8), bVar1);
                } else {
                    iVar3 = eastl::vector<WorldMap::PendingLocationType, eastl::allocator>::size(this_01);
                    bVar7 = param_5 < iVar3;
                    uVar8 = (undefined4)CONCAT71((int7)((ulong)extraout_RDX_00 >> 8), bVar7);
                    bVar1 = bVar7;
                    if (-1 < param_5)
                        goto LAB_100413b39;
                LAB_100413b55:
                    uVar6 = 0;
                    bVar1 = false;
                }
                if ((bVar7 & bVar1) == 1) {
                    this_03 = (ClientCompositeZone*)
                        eastl::vector<ClientCompositeZone,
                                      eastl::fixed_vector_allocator<20ul, 10ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<ClientCompositeZone,
                                    eastl::fixed_vector_allocator<20ul, 10ul, 4ul, 0ul, true, eastl::allocator>>*)
                                this_01,
                            (long)param_5);
                    this_04 = (ClientCompositeZone*)
                        eastl::vector<ClientCompositeZone,
                                      eastl::fixed_vector_allocator<20ul, 10ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<ClientCompositeZone,
                                    eastl::fixed_vector_allocator<20ul, 10ul, 4ul, 0ul, true, eastl::allocator>>*)
                                this_02,
                            (long)param_5);
                    cVar2 = this_03->IsValid();
                    if ((cVar2 == '\0') && (uVar5 = this_04->IsValid(), (char)uVar5 == '\0')) {
                        uVar6 = CONCAT71((int7)((ulong)uVar5 >> 8), 1);
                    } else {
                        cVar2 = this_03->IsValid();
                        if ((cVar2 == '\0') || (cVar2 = this_04->IsValid(), cVar2 == '\0')) {
                            uVar6 = 0;
                        } else {
                            uVar6 = ClientCompositeZone::operator==(this_03, this_04);
                        }
                    }
                    goto LAB_100413bed;
                }
            }
        }
        uVar6 = CONCAT71((int7)(uVar6 >> 8), bVar1 ^ bVar7) ^ 1;
    LAB_100413bed:
        return uVar6 & 18446744073709551361;
    }

    // 0x100413d40, 640 bytes, placed by class name
    // MapSquare::RebuildRegion(shared_ptr<ClientCompositeData> const&, bool)
    void MapSquare::RebuildRegion(shared_ptr* param_1, bool param_2) {
        ulong uVar1;
        undefined1* puVar2;
        char cVar3;
        bool bVar4;
        Layout* this_00;
        Layout* pLVar5;
        unique_ptr<LocationContainer, std::default_delete<LocationContainer>>* puVar6;
        ulong uVar7;
        vector<std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>, eastl::allocator>* pvVar8;
        unique_ptr* this_01;
        unique_ptr<LocationContainer, std::default_delete<LocationContainer>>* puVar9;
        long* plVar10;
        GraphNode* pGVar11;
        Entity* pEVar12;
        GraphNode* pGVar13;
        undefined7 in_register_00000011;
        int iVar14;
        ulong uVar15;
        ulong uVar16;

        PrepareForNewEnvironmentLoader(this);
        PrepareForNewPointLights(this);
        field_236 = 1;
        field_744 = 0;
        if ((int)CONCAT71(in_register_00000011, param_2) != 0) {
            puVar2 = &field_752;
            this_00 = (Layout*)puVar2->HeapBeginPtr();
            pLVar5 = (Layout*)puVar2->end();
            for (; this_00 != pLVar5; this_00 = this_00 + 32) {
                puVar9 = (unique_ptr<LocationContainer, std::default_delete<LocationContainer>>*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(this_00);
                puVar6 = (unique_ptr<LocationContainer, std::default_delete<LocationContainer>>*)this_00->end();
                for (; puVar9 != puVar6; puVar9 = puVar9 + 8) {
                    plVar10 =
                        (long*)std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>::operator->(
                            puVar9);
                    (**(code**)(*plVar10 + 200))(plVar10);
                    pGVar11 = (GraphNode*)GetNode();
                    pEVar12 =
                        (Entity*)std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>::operator->(
                            puVar9);
                    pGVar13 = (GraphNode*)pEVar12->GetNode();
                    pGVar11->RemoveChild(pGVar13);
                }
            }
            puVar2->clear();
        }
        puVar2 = &field_752;
        cVar3 = puVar2->empty();
        if (cVar3 == '\0') {
            uVar7 = 0;
            do {
                uVar1 = uVar7 + 1;
                uVar15 = 0;
                do {
                    uVar16 = uVar15 + 1;
                    iVar14 = 0;
                    do {
                        cVar3 = ZoneLevelsEqual((shared_ptr*)field_200, param_1, iVar14, (int)uVar1, (int)uVar16);
                        if (cVar3 == '\0') {
                            pvVar8 = (vector<std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                             eastl::allocator>*)
                                eastl::vector<eastl::vector<std::unique_ptr<LocationContainer,
                                                                            std::default_delete<LocationContainer>>,
                                                            eastl::allocator>,
                                              eastl::allocator>::
                                operator[](
                                    (vector<eastl::vector<std::unique_ptr<LocationContainer,
                                                                          std::default_delete<LocationContainer>>,
                                                          eastl::allocator>,
                                            eastl::allocator>*)puVar2,
                                    uVar7);
                            this_01 = (unique_ptr*)eastl::vector<
                                std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                eastl::allocator>::operator[](pvVar8, uVar15);
                            bVar4 = std::unique_ptr::operator_cast_to_bool(this_01);
                            if (bVar4) {
                                pvVar8 = (vector<
                                          std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                          eastl::allocator>*)
                                    eastl::vector<eastl::vector<std::unique_ptr<LocationContainer,
                                                                                std::default_delete<LocationContainer>>,
                                                                eastl::allocator>,
                                                  eastl::allocator>::
                                    operator[](
                                        (vector<eastl::vector<std::unique_ptr<LocationContainer,
                                                                              std::default_delete<LocationContainer>>,
                                                              eastl::allocator>,
                                                eastl::allocator>*)puVar2,
                                        uVar7);
                                puVar9 = (unique_ptr<LocationContainer, std::default_delete<LocationContainer>>*)
                                    eastl::vector<
                                        std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                        eastl::allocator>::operator[](pvVar8, uVar15);
                                plVar10 =
                                    (long*)std::unique_ptr<LocationContainer,
                                                           std::default_delete<LocationContainer>>::operator->(puVar9);
                                (**(code**)(*plVar10 + 200))(plVar10);
                                pGVar11 = (GraphNode*)GetNode();
                                pvVar8 = (vector<
                                          std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                          eastl::allocator>*)
                                    eastl::vector<eastl::vector<std::unique_ptr<LocationContainer,
                                                                                std::default_delete<LocationContainer>>,
                                                                eastl::allocator>,
                                                  eastl::allocator>::
                                    operator[](
                                        (vector<eastl::vector<std::unique_ptr<LocationContainer,
                                                                              std::default_delete<LocationContainer>>,
                                                              eastl::allocator>,
                                                eastl::allocator>*)puVar2,
                                        uVar7);
                                puVar9 = (unique_ptr<LocationContainer, std::default_delete<LocationContainer>>*)
                                    eastl::vector<
                                        std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                        eastl::allocator>::operator[](pvVar8, uVar15);
                                pEVar12 =
                                    (Entity*)std::unique_ptr<
                                        LocationContainer, std::default_delete<LocationContainer>>::operator->(puVar9);
                                pGVar13 = (GraphNode*)pEVar12->GetNode();
                                pGVar11->RemoveChild(pGVar13);
                                pvVar8 = (vector<
                                          std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                          eastl::allocator>*)
                                    eastl::vector<eastl::vector<std::unique_ptr<LocationContainer,
                                                                                std::default_delete<LocationContainer>>,
                                                                eastl::allocator>,
                                                  eastl::allocator>::
                                    operator[](
                                        (vector<eastl::vector<std::unique_ptr<LocationContainer,
                                                                              std::default_delete<LocationContainer>>,
                                                              eastl::allocator>,
                                                eastl::allocator>*)puVar2,
                                        uVar7);
                                puVar9 = (unique_ptr<LocationContainer, std::default_delete<LocationContainer>>*)
                                    eastl::vector<
                                        std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                        eastl::allocator>::operator[](pvVar8, uVar15);
                                std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>::reset(
                                    puVar9, (LocationContainer*)0);
                            }
                            break;
                        }
                        iVar14 = iVar14 + 1;
                    } while (iVar14 != 4);
                    uVar15 = uVar16;
                } while (uVar16 != 8);
                uVar7 = uVar1;
            } while (uVar1 != 8);
        }
        PrepareForNewTerrain(this);
        shared_ptr<ClientCompositeData>::operator=((shared_ptr<ClientCompositeData>*)field_200, param_1);
        SetCurrentLOD(6);
    }

    // 0x100414000, 176 bytes, placed by class name
    // MapSquare::HideLocations(LocShape)
    void MapSquare::HideLocations(undefined1 param_2) {
        LocationContainer* pLVar1;
        char cVar2;
        Layout* pLVar3;
        unique_ptr<LocationContainer, std::default_delete<LocationContainer>>* puVar4;
        unique_ptr<LocationContainer, std::default_delete<LocationContainer>>* this_00;
        Layout* this_01;

        pLVar3 = (Layout*)GetParticleEffectors();
        cVar2 = pLVar3->empty();
        if (cVar2 == '\0') {
            this_01 = (Layout*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar3);
            pLVar3 = (Layout*)pLVar3->end();
            for (; this_01 != pLVar3; this_01 = this_01 + 32) {
                this_00 = (unique_ptr<LocationContainer, std::default_delete<LocationContainer>>*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(this_01);
                puVar4 = (unique_ptr<LocationContainer, std::default_delete<LocationContainer>>*)this_01->end();
                for (; this_00 != puVar4; this_00 = this_00 + 8) {
                    pLVar1 = (LocationContainer*)
                                 std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>::operator->(
                                     this_00);
                    pLVar1->HideLocations(param_2);
                }
            }
        }
    }

    // 0x1004140c0, 176 bytes, placed by class name
    // MapSquare::UnhideLocations(LocShape)
    void MapSquare::UnhideLocations(undefined1 param_2) {
        LocationContainer* pLVar1;
        char cVar2;
        Layout* pLVar3;
        unique_ptr<LocationContainer, std::default_delete<LocationContainer>>* puVar4;
        unique_ptr<LocationContainer, std::default_delete<LocationContainer>>* this_00;
        Layout* this_01;

        pLVar3 = (Layout*)GetParticleEffectors();
        cVar2 = pLVar3->empty();
        if (cVar2 == '\0') {
            this_01 = (Layout*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(pLVar3);
            pLVar3 = (Layout*)pLVar3->end();
            for (; this_01 != pLVar3; this_01 = this_01 + 32) {
                this_00 = (unique_ptr<LocationContainer, std::default_delete<LocationContainer>>*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(this_01);
                puVar4 = (unique_ptr<LocationContainer, std::default_delete<LocationContainer>>*)this_01->end();
                for (; this_00 != puVar4; this_00 = this_00 + 8) {
                    pLVar1 = (LocationContainer*)
                                 std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>::operator->(
                                     this_00);
                    pLVar1->UnhideLocations(param_2);
                }
            }
        }
    }

    // 0x1004146c0, 496 bytes, placed by class name
    // MapSquare::PrioritiseLocations(int, math::Vector3T<float> const&, int, bool, LODSettings const&)
    /* WARNING: Type propagation algorithm not settling */
    /* MapSquare::PrioritiseLocations(int, math::Vector3T<float> const&, int, bool,
   LODSettings const&) */

    void MapSquare::PrioritiseLocations(int param_1, Vector3T* param_2, int param_3, bool param_4,
                                        LODSettings* param_5) {
        byte bVar1;
        byte bVar2;
        vector<std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>, eastl::allocator>* this_00;
        unique_ptr<LocationContainer, std::default_delete<LocationContainer>>* this_01;
        Entity* pEVar3;
        GraphNode* this_02;
        AABB* this_03;
        long* plVar4;
        ulong uVar5;
        ulong uVar6;
        float fVar7;

        if (field_236 != '\0') {
            field_220 = 0;
            field_224 = 0;
            field_228 = param_1;
            field_232 = param_1;
            if (param_3 != 0) {
                if ((param_3 & 1U) != 0) {
                    field_232 = param_1 + -1;
                }
                if ((param_3 & 4U) != 0) {
                    field_224 = 1;
                }
                if ((param_3 & 2U) != 0) {
                    field_228 = param_1 + -1;
                }
                if ((param_3 & 8U) != 0) {
                    field_220 = 1;
                }
            }
            m_prioritySquare = '\0';
            m_hasBuiltPriorityZones = 0;
            uVar5 = (ulong)field_220;
            if (field_220 < field_228) {
                do {
                    uVar6 = (ulong)field_224;
                    if (field_224 < field_232) {
                        do {
                            this_00 =
                                (vector<std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                        eastl::allocator>*)
                                    eastl::vector<eastl::vector<std::unique_ptr<LocationContainer,
                                                                                std::default_delete<LocationContainer>>,
                                                                eastl::allocator>,
                                                  eastl::allocator>::
                                    operator[](
                                        (vector<eastl::vector<std::unique_ptr<LocationContainer,
                                                                              std::default_delete<LocationContainer>>,
                                                              eastl::allocator>,
                                                eastl::allocator>*)&field_752,
                                        uVar5);
                            this_01 =
                                (unique_ptr<LocationContainer, std::default_delete<LocationContainer>>*)eastl::vector<
                                    std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                    eastl::allocator>::operator[](this_00, uVar6);
                            pEVar3 =
                                (Entity*)std::unique_ptr<LocationContainer,
                                                         std::default_delete<LocationContainer>>::operator->(this_01);
                            this_02 = (GraphNode*)pEVar3->GetNode();
                            this_03 = (AABB*)this_02->GetWorldAABB();
                            fVar7 = (float)this_03->GetDistanceToPointXZ(param_2);
                            bVar1 = param_5->GetLOD((uint)(long)fVar7);
                            if ((bVar1 < 5) && (bVar2 = param_5->GetLowestUsableLOD(), bVar1 <= bVar2)) {
                                if (bVar1 == 0) {
                                    m_prioritySquare = '\x01';
                                }
                                pEVar3 =
                                    (Entity*)std::unique_ptr<
                                        LocationContainer, std::default_delete<LocationContainer>>::operator->(this_01);
                                pEVar3->SetTargetLOD(bVar1);
                            } else if (!param_4) {
                                plVar4 =
                                    (long*)std::unique_ptr<LocationContainer,
                                                           std::default_delete<LocationContainer>>::operator->(this_01);
                                (**(code**)(*plVar4 + 200))(plVar4);
                            }
                            uVar6 = uVar6 + 1;
                        } while ((long)uVar6 < (long)field_232);
                    }
                    uVar5 = uVar5 + 1;
                } while ((long)uVar5 < (long)field_228);
            }
            field_236 = 0;
        }
    }

    // 0x1004148b0, 576 bytes, placed by class name
    // MapSquare::BuildLocations(bool&, graphics::RT7Core*, Js5ResourceProvider*, ConfigProvider*, AssetBuilder*, unsigned int, bool, bool)
    void MapSquare::BuildLocations(bool* param_1, RT7Core* param_2, Js5ResourceProvider* param_3,
                                   ConfigProvider* param_4, AssetBuilder* param_5, uint param_6, bool param_7,
                                   bool param_8) {
        bool bVar1;
        char cVar2;
        vector<std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>, eastl::allocator>* this_00;
        unique_ptr<LocationContainer, std::default_delete<LocationContainer>>* this_01;
        Entity* pEVar3;
        shared_ptr<World>* psVar4;
        World* pWVar5;
        LocationContainer* pLVar6;
        Location* pLVar7;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_02;
        ulong uVar8;
        ulong local_40;

        local_40 = (ulong)field_220;
        bVar1 = true;
        if (field_220 < field_228) {
            bVar1 = true;
            do {
                uVar8 = (ulong)field_224;
                if (field_224 < field_232) {
                    do {
                        this_00 = (vector<std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                          eastl::allocator>*)
                            eastl::vector<eastl::vector<std::unique_ptr<LocationContainer,
                                                                        std::default_delete<LocationContainer>>,
                                                        eastl::allocator>,
                                          eastl::allocator>::
                            operator[](
                                (vector<eastl::vector<
                                            std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                            eastl::allocator>,
                                        eastl::allocator>*)&field_752,
                                local_40);
                        this_01 = (unique_ptr<LocationContainer, std::default_delete<LocationContainer>>*)
                            eastl::vector<std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>,
                                          eastl::allocator>::operator[](this_00, uVar8);
                        pEVar3 =
                            (Entity*)
                                std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>::operator->(
                                    this_01);
                        cVar2 = pEVar3->GetTargetLOD();
                        if (cVar2 == '\0') {
                        LAB_1004149a1:
                            pLVar6 = (LocationContainer*)
                                         std::unique_ptr<LocationContainer,
                                                         std::default_delete<LocationContainer>>::operator->(this_01);
                            cVar2 = pLVar6->HasStartedBuild();
                            if (cVar2 == '\0') {
                                pLVar7 =
                                    (Location*)std::unique_ptr<
                                        LocationContainer, std::default_delete<LocationContainer>>::operator->(this_01);
                                pLVar7->SetLocationLOD(1);
                                psVar4 = (shared_ptr<World>*)GetWorld();
                                pWVar5 = (World*)shared_ptr<World>::operator->(psVar4);
                                pLVar6 = (LocationContainer*)std::unique_ptr<
                                    LocationContainer, std::default_delete<LocationContainer>>::operator*(this_01);
                                pWVar5->AddBuiltZone(pLVar6);
                            }
                            pEVar3 =
                                (Entity*)std::unique_ptr<LocationContainer,
                                                         std::default_delete<LocationContainer>>::operator->(this_01);
                            cVar2 = pEVar3->IsAtTargetLOD();
                            if (cVar2 == '\0') {
                                pLVar6 =
                                    (LocationContainer*)std::unique_ptr<
                                        LocationContainer, std::default_delete<LocationContainer>>::operator->(this_01);
                                pLVar6->Build(param_2, param_3, param_4, param_5, param_6, param_7, param_8);
                                pEVar3 =
                                    (Entity*)std::unique_ptr<
                                        LocationContainer, std::default_delete<LocationContainer>>::operator->(this_01);
                                cVar2 = pEVar3->IsAtTargetLOD();
                                if (cVar2 != '\0') {
                                    psVar4 = (shared_ptr<World>*)GetWorld();
                                    pWVar5 = (World*)shared_ptr<World>::operator->(psVar4);
                                    this_02 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                                         eastl::allocator>>*)
                                                  pWVar5->GetBuiltZones();
                                    cVar2 =
                                        eastl::vector<int,
                                                      eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                                    eastl::allocator>>::empty(this_02);
                                    if (cVar2 != '\0')
                                        goto LAB_100414a7d;
                                }
                                *param_1 = false;
                            }
                        LAB_100414a7d:
                            pEVar3 =
                                (Entity*)std::unique_ptr<LocationContainer,
                                                         std::default_delete<LocationContainer>>::operator->(this_01);
                            cVar2 = pEVar3->GetTargetLOD();
                            if (cVar2 == '\0') {
                                pEVar3 =
                                    (Entity*)std::unique_ptr<
                                        LocationContainer, std::default_delete<LocationContainer>>::operator->(this_01);
                                cVar2 = pEVar3->IsAtTargetLOD();
                                if (cVar2 == '\0') {
                                    bVar1 = false;
                                }
                            }
                        } else {
                            psVar4 = (shared_ptr<World>*)GetWorld();
                            pWVar5 = (World*)shared_ptr<World>::operator->(psVar4);
                            cVar2 = pWVar5->HaveAllMapSquaresFinishedHighPriorityZones();
                            if (cVar2 != '\0')
                                goto LAB_1004149a1;
                            *param_1 = false;
                        }
                        uVar8 = uVar8 + 1;
                    } while ((long)uVar8 < (long)field_232);
                }
                local_40 = local_40 + 1;
            } while ((long)local_40 < (long)field_228);
        }
        if ((bVar1) && (m_prioritySquare != '\0')) {
            m_hasBuiltPriorityZones = 1;
        }
    }

    // 0x100414be0, 128 bytes, placed by class name
    // MapSquare::SetIrradianceSHConsts(graphics::IrradianceSHCoefConsts const&, unsigned long long)
    void MapSquare::SetIrradianceSHConsts(IrradianceSHCoefConsts* param_1, ulonglong param_2) {
        ulonglong uVar1;
        unique_ptr* this_00;
        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* this_01;
        Terrain* this_02;
        Option<float>* this_03;
        LightProbeMaterial* this_04;
        bool bVar2;

        uVar1 = FrameTime::GetCurrentTimeMS();
        (&field_848, param_1, param_2, uVar1)->SetValue();
        this_00 = (unique_ptr*)GetParentLocationType();
        bVar2 = std::unique_ptr::operator_cast_to_bool(this_00);
        if (bVar2) {
            this_01 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)GetParentLocationType();
            this_02 =
                (Terrain*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(this_01);
            this_03 = (Option<float>*)this_02->GetLightProbe();
            this_04 = (LightProbeMaterial*)this_03->GetDefaultValue();
            this_04->SetIrradianceSHConsts(param_1);
        }
    }

    // 0x100414c80, 48 bytes, placed by class name
    // MapSquare::SkipIrradianceSHConstTransition()
    void MapSquare::SkipIrradianceSHConstTransition() {
        IrradianceSHCoefConsts* pIVar1;

        pIVar1 = (IrradianceSHCoefConsts*)(&field_848)->GetImmediateThreadPool();
        (&field_848, pIVar1, 0, 0)->SetValue();
    }

    // 0x100414cc0, 176 bytes, placed by class name
    // MapSquare::SetMultiLocState(int, int)
    void MapSquare::SetMultiLocState(int param_1, int param_2) {
        Layout* this_00;
        Layout* pLVar1;
        unique_ptr<LocationContainer, std::default_delete<LocationContainer>>* this_01;
        unique_ptr<LocationContainer, std::default_delete<LocationContainer>>* puVar2;
        LocationContainer* this_02;

        this_00 = (Layout*)(&field_752)->HeapBeginPtr();
        pLVar1 = (Layout*)(&field_752)->end();
        for (; this_00 != pLVar1; this_00 = this_00 + 32) {
            this_01 = (unique_ptr<LocationContainer, std::default_delete<LocationContainer>>*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_00);
            puVar2 = (unique_ptr<LocationContainer, std::default_delete<LocationContainer>>*)this_00->end();
            for (; this_01 != puVar2; this_01 = this_01 + 8) {
                this_02 =
                    (LocationContainer*)
                        std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>::operator->(this_01);
                this_02->SetMultiLocState(param_1, param_2);
            }
        }
    }

    // 0x100414d70, 160 bytes, placed by class name
    // MapSquare::IncrementMultiLocState(int)
    void MapSquare::IncrementMultiLocState(int param_1) {
        Layout* this_00;
        Layout* pLVar1;
        unique_ptr<LocationContainer, std::default_delete<LocationContainer>>* this_01;
        unique_ptr<LocationContainer, std::default_delete<LocationContainer>>* puVar2;
        LocationContainer* this_02;

        this_00 = (Layout*)(&field_752)->HeapBeginPtr();
        pLVar1 = (Layout*)(&field_752)->end();
        for (; this_00 != pLVar1; this_00 = this_00 + 32) {
            this_01 = (unique_ptr<LocationContainer, std::default_delete<LocationContainer>>*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_00);
            puVar2 = (unique_ptr<LocationContainer, std::default_delete<LocationContainer>>*)this_00->end();
            for (; this_01 != puVar2; this_01 = this_01 + 8) {
                this_02 =
                    (LocationContainer*)
                        std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>::operator->(this_01);
                this_02->IncrementMultiLocState(param_1);
            }
        }
    }

    // 0x100414e10, 160 bytes, placed by class name
    // MapSquare::IncrementAllMultiLocStates()
    void MapSquare::IncrementAllMultiLocStates() {
        Layout* this_00;
        Layout* pLVar1;
        unique_ptr<LocationContainer, std::default_delete<LocationContainer>>* this_01;
        unique_ptr<LocationContainer, std::default_delete<LocationContainer>>* puVar2;
        LocationContainer* this_02;

        this_00 = (Layout*)(&field_752)->HeapBeginPtr();
        pLVar1 = (Layout*)(&field_752)->end();
        for (; this_00 != pLVar1; this_00 = this_00 + 32) {
            this_01 = (unique_ptr<LocationContainer, std::default_delete<LocationContainer>>*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_00);
            puVar2 = (unique_ptr<LocationContainer, std::default_delete<LocationContainer>>*)this_00->end();
            for (; this_01 != puVar2; this_01 = this_01 + 8) {
                this_02 =
                    (LocationContainer*)
                        std::unique_ptr<LocationContainer, std::default_delete<LocationContainer>>::operator->(this_01);
                this_02->IncrementAllMultiLocStates();
            }
        }
    }

    // 0x1004198f0: the linker folded this into GraphicsDefaults::GetNpcChatTimeout() const, which has identical code
    MapSquare::GetMapSquareZ() const;

    // 0x100427180, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.21
    void ___cxx_global_var_init_21(undefined8 param_1, _func_decltype_nullptr* param_2) {
        new (&MapSquare::NullMapSquare) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(param_2);
        ___cxa_atexit(PTR__shared_ptr_100ee52d0, &MapSquare::NullMapSquare, 4294967296);
    }

    // 0x1004271c0, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.22
    void ___cxx_global_var_init_22() {
        new (&MapSquare::NullLightList) eastl::vector<shared_ptr<LightSource>, eastl::allocator>();
        ___cxa_atexit(PTR__vector_100ee6d20, &MapSquare::NullLightList, 4294967296);
    }

    // 0x100427200, 64 bytes, placed by the data it initialises
    // ___cxx_global_var_init.23
    void ___cxx_global_var_init_23() {
        new (&MapSquare::NullWaterPatchList) eastl::vector<shared_ptr<graphics::WaterPatch>, eastl::allocator>();
        ___cxa_atexit(PTR__vector_100ee6d28, &MapSquare::NullWaterPatchList, 4294967296);
    }

    // 0x100431760: the linker folded this into Location::GetLocationType() const, which has identical code
    MapSquare::GetMapSquarePointLights();

} // namespace jag::game
