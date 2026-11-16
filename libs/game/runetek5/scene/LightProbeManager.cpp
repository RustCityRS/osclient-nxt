// libs/game/runetek5/scene/LightProbeManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "LightProbeManager.h"

namespace jag::game {
    // 0x1039b4ee4, 4 bytes, __common; set at startup by ___cxx_global_var_init.10
    LightProbeManager::m_skyBoxOverbrightDefaultValue = 1048576000;

    // 0x1039b4ee8, 8 bytes, __common; zero-initialised
    LightProbeManager::m_skyBoxOverbrightDefaultOverrideAll;

    // 0x1000de650: the linker folded this into oldscape::ClientEntityID::ClientEntityID(bool, int), which has identical code
    LightProbeManager::MapSquareUpdateInfo::MapSquareUpdateInfo(MapSquare::MapSquarePos, render::CubeFace);

    // 0x10012cca0: the linker folded this into oldscape::ClientEntityID::ClientEntityID(bool, int), which has identical code
    LightProbeManager::MapSquareUpdateInfo::MapSquareUpdateInfo(MapSquare::MapSquarePos, render::CubeFace);

    // 0x100477d50, 208 bytes, base-object constructor, placed by class name and debug map
    // LightProbeManager::LightProbeManager(graphics::RT7Core*, graphics::EffectManager&, World*)
    void LightProbeManager::LightProbeManager(RT7Core* param_1, EffectManager* param_2, World* param_3) {
        field_0 = param_1;
        field_8 = param_2;
        field_16 = param_3;
        new (&field_24) eastl::vector<LightProbeManager::MapSquareUpdateInfo, eastl::allocator>();
        new (&field_56) eastl::fixed_queue<MapSquare::MapSquarePos, 32ul, true>();
        new (&field_928)
            eastl::vector_set<MapSquare::MapSquarePos, eastl::less<MapSquare::MapSquarePos>, eastl::allocator,
                              eastl::vector<MapSquare::MapSquarePos, eastl::allocator>>();
        field_968 = '\0';
        new (&field_976) eastl::vector<std::future<MapSquareEnvIrradianceInfo>, eastl::allocator>();
        (&field_24, 192)->reserve();
        (&field_928, 32)->reserve();
        (&field_976, 192)->reserve();
    }

    // 0x100477f40, 16 bytes, complete-object constructor, placed by class name and debug map
    // LightProbeManager::LightProbeManager(graphics::RT7Core*, graphics::EffectManager&, World*): jumps straight to the base-object constructor

    // 0x100477f50, 176 bytes, base-object destructor, placed by class name and debug map
    // LightProbeManager::~LightProbeManager()
    void LightProbeManager::~LightProbeManager() {
        undefined1* this_00;
        long lVar1;
        long lVar2;

        this_00 = &field_976;
        lVar1 = this_00->HeapBeginPtr();
        lVar2 = this_00->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 8) {
            std::future<MapSquareEnvIrradianceInfo>::wait();
        }
        this_00->~vector();
        (&field_928)->~vector_set();
        (&field_56)->~fixed_queue();
        (&field_24)->~vector();
    }

    // 0x100478010, 16 bytes, complete-object destructor, placed by class name and debug map
    // LightProbeManager::~LightProbeManager(): jumps straight to the base-object destructor

    // 0x100478020, 1152 bytes, placed by class name and debug map
    // LightProbeManager::AddMapSquareToUpdateList(MapSquare::MapSquarePos const&)
    void LightProbeManager::AddMapSquareToUpdateList(MapSquarePos* param_1) {
        undefined1* this_00;
        undefined1* this_01;
        uchar uVar1;
        ushort uVar2;
        MapSquarePos MVar3;
        bool bVar4;
        char cVar5;
        undefined8 uVar6;
        shared_ptr* this_02;
        hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>, eastl::hash<int>,
                  eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>*
            this_03;
        shared_ptr* this_04;
        MapSquare* this_05;
        long lVar7;
        unique_ptr* this_06;
        SceneManager* this_07;
        AABB* this_08;
        MapSquarePos* pMVar8;
        MapSquarePos* pMVar9;
        undefined8 uVar10;
        LogStream* this_09;
        undefined1 auVar11[16];
        undefined8 in_stack_fffffffffffffd98;
        undefined1 in_stack_fffffffffffffda0;
        MapSquareEnvInfo local_240;
        undefined8 local_228;
        MapSquarePos* local_220;
        undefined1 local_218[16];
        undefined1 local_208[16];
        undefined8 local_1f8;
        undefined8 local_1f0;
        LogStream local_1e8;
        LogStream local_158;
        LogStream local_c8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (field_968 == '\0') {
            this_02 = (shared_ptr*)(field_16, param_1)->GetMapSquare();
            bVar4 = operator!=(this_02, (shared_ptr*)&MapSquare::NullMapSquare);
            if (!bVar4)
                goto LAB_1004782e3;
            this_03 = (hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                 eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                 eastl::prime_rehash_policy, false, true, true>*)field_16->GetIrradianceCache();
            local_218 = eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                         eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                         eastl::prime_rehash_policy, false, true, true>::end(this_03);
            this_04 = (shared_ptr*)field_16->GetCurrentEnvironmentSettings();
            bVar4 = shared_ptr::operator_cast_to_bool(this_04);
            if (bVar4) {
                uVar2._0_1_ = param_1->field_0;
                uVar2._1_1_ = param_1->field_1;
                local_220 = param_1;
                field_16->GetCurrentEnvironmentSettings();
                MVar3._8_1_ = in_stack_fffffffffffffda0;
                MVar3.field_0 = (char)in_stack_fffffffffffffd98;
                MVar3.field_1 = (char)((ulong)in_stack_fffffffffffffd98 >> 8);
                MVar3._2_6_ = (int6)((ulong)in_stack_fffffffffffffd98 >> 16);
                new (&local_240) MapSquareEnvInfo(MVar3, (shared_ptr*)(ulong)uVar2);
                local_228 = local_240.hash();
                eastl::hashtable<unsigned long, eastl::pair<unsigned long const, MapSquareEnvIrradianceInfo>,
                                 eastl::allocator,
                                 eastl::use_first<eastl::pair<unsigned long const, MapSquareEnvIrradianceInfo>>,
                                 eastl::equal_to<unsigned long>, eastl::hash<unsigned long>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                 false>::equal_range((ulong*)local_208);
                auVar11 = eastl::find_if<eastl::hashtable_iterator<
                                             eastl::pair<unsigned long const, MapSquareEnvIrradianceInfo>, true, false>,
                                         (MapSquare::MapSquarePos_const&)->AddMapSquareToUpdateList()::__0>(
                    local_208._0_8_, local_208._8_8_, local_1f8, local_1f0, &local_240);
                param_1 = local_220;
                local_218 = auVar11;
                local_240.~pair();
            }
            local_208 = eastl::hashtable<int, eastl::pair<int const, unsigned int>, eastl::allocator,
                                         eastl::use_first<eastl::pair<int const, unsigned int>>, eastl::equal_to<int>,
                                         eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                         eastl::prime_rehash_policy, false, true, true>::end(this_03);
            bVar4 = eastl::operator!=((eastl*)local_218, (hashtable_iterator_base*)local_208, local_208._8_8_);
            this_05 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_02);
            if (bVar4) {
                lVar7 = local_218->HeapBeginPtr();
                this_05->SetIrradianceSHConsts((IrradianceSHCoefConsts*)(lVar7 + 64), 750);
                uVar6 = logger::default_logger();
                this_09 = &local_158;
                logger::LogStream::LogStream(this_09, (LogStream*)&LOGGER_LIGHTPROBE);
                cVar5 = param_1->field_0;
                uVar1 = param_1->field_1;
                lVar7 = local_218->HeapBeginPtr();
                logger::Logger::Log(uVar6, 0, this_09, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/scene/LightProbeManager.cpp",
                                    86, "Found irradiance for %u, %u in cache. Hash: %zu", cVar5, uVar1,
                                    *(undefined8*)(lVar7 + 48));
            } else {
                this_06 = (unique_ptr*)this_05->GetParentLocationType();
                bVar4 = std::unique_ptr::operator_cast_to_bool(this_06);
                if (!bVar4)
                    goto LAB_1004782e3;
                this_07 =
                    (SceneManager*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                        (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)this_06);
                this_08 = (AABB*)this_07->GetEntityHighlightGlobalState();
                cVar5 = this_08->IsValid();
                if (cVar5 == '\0')
                    goto LAB_1004782e3;
                this_01 = &field_928;
                pMVar8 = (MapSquarePos*)this_01->HeapBeginPtr();
                pMVar9 = (MapSquarePos*)this_01->end();
                pMVar8 = eastl::find<MapSquare::MapSquarePos*, MapSquare::MapSquarePos>(pMVar8, pMVar9, param_1);
                pMVar9 = (MapSquarePos*)this_01->end();
                if (pMVar8 != pMVar9)
                    goto LAB_1004782e3;
                this_00 = &field_24;
                local_208._0_4_ = 34069;
                eastl::vector<LightProbeManager::MapSquareUpdateInfo, eastl::allocator>::emplace_back<
                    MapSquare::MapSquarePos_const&, render::CubeFace>(
                    (vector<LightProbeManager::MapSquareUpdateInfo, eastl::allocator>*)this_00, param_1, local_208);
                local_208._0_4_ = 34070;
                eastl::vector<LightProbeManager::MapSquareUpdateInfo, eastl::allocator>::emplace_back<
                    MapSquare::MapSquarePos_const&, render::CubeFace>(
                    (vector<LightProbeManager::MapSquareUpdateInfo, eastl::allocator>*)this_00, param_1, local_208);
                local_208._0_4_ = 34071;
                eastl::vector<LightProbeManager::MapSquareUpdateInfo, eastl::allocator>::emplace_back<
                    MapSquare::MapSquarePos_const&, render::CubeFace>(
                    (vector<LightProbeManager::MapSquareUpdateInfo, eastl::allocator>*)this_00, param_1, local_208);
                local_208._0_4_ = 34072;
                eastl::vector<LightProbeManager::MapSquareUpdateInfo, eastl::allocator>::emplace_back<
                    MapSquare::MapSquarePos_const&, render::CubeFace>(
                    (vector<LightProbeManager::MapSquareUpdateInfo, eastl::allocator>*)this_00, param_1, local_208);
                local_208._0_4_ = 34073;
                eastl::vector<LightProbeManager::MapSquareUpdateInfo, eastl::allocator>::emplace_back<
                    MapSquare::MapSquarePos_const&, render::CubeFace>(
                    (vector<LightProbeManager::MapSquareUpdateInfo, eastl::allocator>*)this_00, param_1, local_208);
                local_208._0_4_ = 34074;
                eastl::vector<LightProbeManager::MapSquareUpdateInfo, eastl::allocator>::emplace_back<
                    MapSquare::MapSquarePos_const&, render::CubeFace>(
                    (vector<LightProbeManager::MapSquareUpdateInfo, eastl::allocator>*)this_00, param_1, local_208);
                this_01->insert(param_1);
                uVar6 = this_00->HeapBeginPtr();
                uVar10 = this_00->end();
                eastl::sort<LightProbeManager::MapSquareUpdateInfo*,
                            (MapSquare::MapSquarePos_const&)->AddMapSquareToUpdateList()::__1>(uVar6, uVar10, this);
                uVar6 = logger::default_logger();
                this_09 = &local_1e8;
                logger::LogStream::LogStream(this_09, (LogStream*)&LOGGER_LIGHTPROBE);
                logger::Logger::Log(uVar6, 0, this_09, 5,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/scene/LightProbeManager.cpp",
                                    113, "Recalculating irradiance for %u, %u", param_1->field_0, param_1->field_1);
            }
        } else {
            uVar6 = logger::default_logger();
            new (&local_c8) logger::LogStream((LogStream*)&LOGGER_LIGHTPROBE);
            logger::Logger::Log(uVar6, 0, &local_c8, 5,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "scene/LightProbeManager.cpp",
                                63, "Called AddMapSquareToUpdateList while processing update requests - Ignoring call");
            this_09 = &local_c8;
        }
        this_09->~LogStream();
    LAB_1004782e3:
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1004788b0, 480 bytes, placed by class name and debug map
    // LightProbeManager::AddAllExistingMapSquaresToUpdateList()
    void LightProbeManager::AddAllExistingMapSquaresToUpdateList() {
        char cVar1;
        bool bVar2;
        uint uVar3;
        int iVar4;
        uint uVar5;
        undefined8 uVar6;
        vector* this_00;
        shared_ptr* this_01;
        undefined1 local_160[152];
        LogStream local_c8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        cVar1 = field_968;
        uVar6 = logger::default_logger();
        if (cVar1 == '\0') {
            new ((local_160 + 8)) logger::LogStream((LogStream*)&LOGGER_LIGHTPROBE);
            logger::Logger::Log(uVar6, 0, (LogStream*)(local_160 + 8), 5,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "scene/LightProbeManager.cpp",
                                131, "Requesting irradiance update for all mapsquares");
            ((local_160 + 8))->~LogStream();
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
            this_00 = (&field_56, (type*)0)->SSOBeginPtr();
            this_00->clear();
            uVar3 = field_16->GetMapSquareMinX();
            iVar4 = field_16->GetMapSquareMaxX();
            if ((int)uVar3 <= iVar4) {
                do {
                    uVar5 = field_16->GetMapSquareMinZ();
                    iVar4 = field_16->GetMapSquareMaxZ();
                    if ((int)uVar5 <= iVar4) {
                        do {
                            this_01 = (shared_ptr*)(field_16, uVar3, uVar5)->GetMapSquare();
                            bVar2 = shared_ptr::operator_cast_to_bool(this_01);
                            if (bVar2) {
                                new (local_160) MapSquare::MapSquarePos(uVar3, uVar5);
                                AddMapSquareToUpdateList(this, (MapSquarePos*)local_160);
                            }
                            iVar4 = field_16->GetMapSquareMaxZ();
                            bVar2 = (int)uVar5 < iVar4;
                            uVar5 = uVar5 + 1;
                        } while (bVar2);
                    }
                    iVar4 = field_16->GetMapSquareMaxX();
                    bVar2 = (int)uVar3 < iVar4;
                    uVar3 = uVar3 + 1;
                } while (bVar2);
            }
        } else {
            new (&local_c8) logger::LogStream((LogStream*)&LOGGER_LIGHTPROBE);
            logger::Logger::Log(
                uVar6, 0, &local_c8, 5,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                "LightProbeManager.cpp",
                127, "Called AddAllExistingMapSquaresToUpdateList while processing update requests - Ignoring call");
            local_c8.~LogStream();
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100478b00, 3232 bytes, placed by class name and debug map
    // LightProbeManager::RenderPendingEnvMaps(unsigned int, unsigned int, int, bool)
    void LightProbeManager::RenderPendingEnvMaps(uint param_1, uint param_2, int param_3, bool param_4) {
        undefined1* this_00;
        undefined1 uVar1;
        undefined1 uVar2;
        char cVar3;
        bool bVar4;
        int iVar5;
        undefined4 uVar6;
        uint uVar7;
        TextureManager* this_01;
        TextureAtlasManager* this_02;
        GUIManager* pGVar8;
        undefined8 uVar9;
        MapSquareUpdateInfo* pMVar10;
        MapSquareUpdateInfo* pMVar11;
        shared_ptr* this_03;
        Location* pLVar12;
        unique_ptr* this_04;
        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* puVar13;
        SceneManager* pSVar14;
        AABB* pAVar15;
        MapSquare* pMVar16;
        long lVar17;
        EnvironmentLoader* pEVar18;
        BufferedRenderTargets* pBVar19;
        Terrain* pTVar20;
        LightProbe* pLVar21;
        LightProbeRenderer* pLVar22;
        Entity* pEVar23;
        Vector3T* pVVar24;
        undefined4* puVar25;
        float* pfVar26;
        undefined* puVar27;
        GraphNode* this_05;
        SceneViewData* pSVar28;
        Vector2T<int>* this_06;
        EnvLightProbeSettings* this_07;
        shared_ptr<World>* this_08;
        hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                  eastl::use_first<eastl::pair<long long const, unsigned int>>, eastl::equal_to<long long>,
                  eastl::hash<long long>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                  eastl::prime_rehash_policy, false, true, true>* this_09;
        EnvironmentOverride* this_10;
        shared_ptr<graphics::SkyBox>* psVar29;
        SkyBox* pSVar30;
        undefined1* puVar31;
        shared_ptr<render::BufferedRenderTargets>* this_11;
        NXTPixScreen* this_12;
        undefined8 uVar32;
        MapSquareUpdateInfo* pMVar33;
        undefined7 in_register_00000081;
        float fVar34;
        float in_XMM1_Da;
        char* pcVar35;
        ColourHSL local_2ae0;
        vector_set<MapSquare::MapSquarePos, eastl::less<MapSquare::MapSquarePos>, eastl::allocator,
                   eastl::vector<MapSquare::MapSquarePos, eastl::allocator>>* local_2ad0;
        queue<MapSquare::MapSquarePos, eastl::fixed_list<MapSquare::MapSquarePos, 32ul, true, eastl::allocator>>*
            local_2ac8;
        undefined8 local_2ac0;
        undefined8 local_2ab8;
        float local_2ab0;
        undefined8 local_2aa8;
        float local_2aa0;
        shared_ptr local_2a98;
        uint local_2a84;
        undefined4 local_2a80;
        int local_2a7c;
        uint local_2a78;
        uint local_2a74;
        undefined8 local_2a70;
        float local_2a68;
        uint local_2a60;
        uint local_2a5c;
        PointLightShadows* local_2a58;
        AABB* local_2a50;
        AutoSingleton<ShaderThreadPoolSingleton> local_2a48[8];
        BufferedRenderTargets* local_2a40;
        LogStream local_2a38;
        LogStream local_29a8;
        LogStream local_2918;
        LogStream local_2888;
        AABB local_27f8[137];
        ColourHSL local_14a0[308];
        LogStream local_158;
        LogStream local_c8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_2a84 = param_1;
        local_2a60 = param_2;
        local_2a48->~AutoSingleton();
        this_00 = &field_24;
        cVar3 = this_00->empty();
        if (cVar3 == '\0') {
            this_01 = (TextureManager*)field_0->GetTextureManager();
            this_02 = (TextureAtlasManager*)this_01->GetTextureAtlasManager();
            iVar5 = this_02->GetNumLoadingTextures();
            if (iVar5 == 0) {
                local_2a80 = (undefined4)CONCAT71(in_register_00000081, param_4);
                field_968 = '\x01';
                local_2a7c = param_3;
                pGVar8 = (GUIManager*)field_0->GetGUIManager();
                pGVar8->Render(0);
                uVar9 = logger::default_logger();
                new (&local_c8) logger::LogStream((LogStream*)&LOGGER_LIGHTPROBE);
                uVar6 = this_00->size();
                pcVar35 = "Remaining light probes to render: %i";
                logger::Logger::Log(uVar9, 0, &local_c8, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/scene/LightProbeManager.cpp",
                                    182, "Remaining light probes to render: %i", uVar6);
                local_c8.~LogStream();
                pMVar10 = (MapSquareUpdateInfo*)this_00->HeapBeginPtr();
                pMVar11 = (MapSquareUpdateInfo*)this_00->end();
                if ((pMVar10 != pMVar11) && (local_2a60 != 0)) {
                    local_2ac8 =
                        (queue<MapSquare::MapSquarePos,
                               eastl::fixed_list<MapSquare::MapSquarePos, 32ul, true, eastl::allocator>>*)&field_56;
                    local_2ad0 =
                        (vector_set<MapSquare::MapSquarePos, eastl::less<MapSquare::MapSquarePos>, eastl::allocator,
                                    eastl::vector<MapSquare::MapSquarePos, eastl::allocator>>*)&field_928;
                    local_2a5c = 0;
                    do {
                        this_03 = (shared_ptr*)(field_16, (MapSquarePos*)pMVar10)->GetMapSquare();
                        bVar4 = operator!=(this_03, (_func_decltype_nullptr*)0);
                        if (bVar4) {
                            pLVar12 = (Location*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_03);
                            this_04 = (unique_ptr*)pLVar12->GetParentLocationType();
                            bVar4 = std::unique_ptr::operator_cast_to_bool(this_04);
                            if (!bVar4)
                                goto LAB_100479490;
                            pLVar12 = (Location*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_03);
                            puVar13 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)
                                          pLVar12->GetParentLocationType();
                            pSVar14 = (SceneManager*)std::unique_ptr<
                                          Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(puVar13);
                            pAVar15 = (AABB*)pSVar14->GetEntityHighlightGlobalState();
                            cVar3 = pAVar15->IsValid();
                            if (cVar3 == '\0')
                                goto LAB_100479490;
                            pMVar16 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_03);
                            lVar17 = pMVar16->GetEnvironmentLoader();
                            if (lVar17 == 0)
                                goto LAB_100479490;
                            pMVar16 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_03);
                            pEVar18 = (EnvironmentLoader*)pMVar16->GetEnvironmentLoader();
                            cVar3 = pEVar18->IsLoaded();
                            if (cVar3 == '\0')
                                goto LAB_100479490;
                            pLVar12 = (Location*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_03);
                            pBVar19 = (BufferedRenderTargets*)pLVar12->GetParentLocationType();
                            pTVar20 =
                                (Terrain*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::
                                operator->(
                                    (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)pBVar19);
                            local_2a58 = (PointLightShadows*)pTVar20->GetLightProbe();
                            local_2a40 = pBVar19;
                            pSVar14 =
                                (SceneManager*)std::
                                    unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                                        (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)pBVar19);
                            local_2a50 = (AABB*)pSVar14->GetEntityHighlightGlobalState();
                            pBVar19 = local_2a40;
                            uVar6 = (undefined4)((ulong)pcVar35 >> 32);
                            bVar4 = field_0 == (RT7Core*)0;
                            cVar3 = !bVar4;
                            if (bVar4) {
                            LAB_100478e55:
                                uVar6 = (undefined4)((ulong)pcVar35 >> 32);
                                if (cVar3 != '\0')
                                    goto LAB_100478e5d;
                            LAB_100479642:
                                pMVar10 = (MapSquareUpdateInfo*)&pMVar10->field_8;
                            } else {
                                pTVar20 =
                                    (Terrain*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::
                                    operator->((unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)
                                                   local_2a40);
                                pLVar21 = (LightProbe*)pTVar20->GetLightProbe();
                                cVar3 = pLVar21->IsInit();
                                if (cVar3 == '\0') {
                                    pTVar20 =
                                        (Terrain*)
                                            std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::
                                            operator->(
                                                (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)
                                                    pBVar19);
                                    pLVar21 = (LightProbe*)pTVar20->GetLightProbe();
                                    pLVar22 = (LightProbeRenderer*)field_0->GetLightProbeRenderer();
                                    cVar3 = pLVar21->Initialise(pLVar22);
                                    local_2ac0 = logger::default_logger();
                                    new (&local_158) logger::LogStream((LogStream*)&LOGGER_LIGHTPROBE);
                                    local_2a78 = (uint) * (byte*)&pMVar10->field_0;
                                    local_2a74 = (uint) * (byte*)((long)&pMVar10->field_0 + 1);
                                    pLVar22 = (LightProbeRenderer*)field_0->GetLightProbeRenderer();
                                    uVar6 = pLVar22->GetNumFreeLightProbeResources();
                                    pcVar35 = "Initialise lightprobe %u, %u (result %i) (%u free)";
                                    logger::Logger::Log(
                                        local_2ac0, 0, &local_158, 5,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/scene/LightProbeManager.cpp",
                                        204, "Initialise lightprobe %u, %u (result %i) (%u free)", local_2a78,
                                        local_2a74, cVar3, uVar6);
                                    local_158.~LogStream();
                                    goto LAB_100478e55;
                                }
                            LAB_100478e5d:
                                pAVar15 = local_2a50;
                                local_27f8[0]._0_8_ = local_2a50->GetCentrePos();
                                local_27f8[0].field_8 = in_XMM1_Da;
                                fVar34 = (float)pAVar15->GetHeight();
                                fVar34 = fVar34 * 0.5 + 5000.0;
                                math::ColourHSL::ColourHSL(local_14a0, 0.0, fVar34, 0.0);
                                local_2aa8 = math::operator+((Vector3T*)local_27f8, (Vector3T*)local_14a0);
                                local_2aa0 = fVar34;
                                pEVar23 =
                                    (Entity*)std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::
                                    operator->((unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)
                                                   local_2a40);
                                pVVar24 = (Vector3T*)pEVar23->GetWorldPosition();
                                local_2a70 = math::operator+((Vector3T*)&local_2aa8, pVVar24);
                                local_2a68 = fVar34;
                                new (&local_2a98) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(pVVar24);
                                pMVar16 =
                                    (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_03);
                                pEVar18 = (EnvironmentLoader*)pMVar16->GetEnvironmentLoader();
                                puVar25 =
                                    (undefined4*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_2a70, 0);
                                local_2a40 = (BufferedRenderTargets*)CONCAT44(local_2a40._4_4_, *puVar25);
                                pfVar26 = (float*)math::Vector3T<float>::operator[]((Vector3T<float>*)&local_2a70, 2);
                                local_2a40 = (BufferedRenderTargets*)(long)local_2a40._0_4_;
                                local_2a50 = (AABB*)(long)*pfVar26;
                                uVar7 = field_16->GetWorldFocusLevel();
                                puVar27 = (undefined*)pEVar18->GetEnvironmentSettings(&local_2a98, (uint)local_2a40,
                                                                                      (uint)local_2a50, uVar7);
                                if (puVar27 != DataStatus::READY) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("status == DataStatus::READY",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "game/runetek5/scene/LightProbeManager.cpp",
                                              216, (char*)0);
                                }
                                bVar4 = shared_ptr::operator_cast_to_bool(&local_2a98);
                                if (!bVar4) {
                                    /* WARNING: Subroutine does not return */
                                    LogAssert("environmentSettings",
                                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                              "game/runetek5/scene/LightProbeManager.cpp",
                                              217, (char*)0);
                                }
                                math::AABB::AABB(local_27f8, (Vector3T*)&local_2a70, (Vector3T*)&local_2a70);
                                pEVar23 = (Entity*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_03);
                                this_05 = (GraphNode*)pEVar23->GetNode();
                                cVar3 = this_05->TestIntersection(local_27f8);
                                if (cVar3 != '\0') {
                                    pAVar15 = (AABB*)this_05->GetCursorMutex();
                                    local_2ab8 = pAVar15->GetCentrePos();
                                    local_2ab0 = fVar34;
                                    pAVar15 = (AABB*)this_05->GetWorldAABB();
                                    fVar34 = (float)pAVar15->GetHeight();
                                    fVar34 = fVar34 * 0.5 + 5000.0;
                                    new (&local_2ae0) math::ColourHSL(0.0, fVar34, 0.0);
                                    local_14a0[0]._0_8_ =
                                        math::operator+((Vector3T*)&local_2ab8, (Vector3T*)&local_2ae0);
                                    local_14a0[0].field_8 = fVar34;
                                    local_2aa8.SetXYZ(local_14a0);
                                    pVVar24 = (Vector3T*)this_05->GetWorldTranslation();
                                    local_14a0[0]._0_8_ = math::operator+((Vector3T*)&local_2aa8, pVVar24);
                                    local_14a0[0].field_8 = fVar34;
                                    local_2a70.SetXYZ(local_14a0);
                                }
                                pSVar28 = (SceneViewData*)shared_ptr<MapEnvironmentSettings>::operator->(
                                    (shared_ptr<MapEnvironmentSettings>*)&local_2a98);
                                this_06 = (Vector2T<int>*)pSVar28->GetStippleFarClipParams();
                                pVVar24 = (Vector3T*)this_06->y();
                                math::Vector3T<float>::operator+=((Vector3T<float>*)&local_2a70, pVVar24);
                                local_2a70.y();
                                local_2a58->SetWorldPosition((Vector3T*)&local_2a70);
                                pSVar28 = (SceneViewData*)shared_ptr<MapEnvironmentSettings>::operator->(
                                    (shared_ptr<MapEnvironmentSettings>*)&local_2a98);
                                this_07 = (EnvLightProbeSettings*)pSVar28->GetStippleFarClipParams();
                                fVar34 = (float)this_07->GetOverbright();
                                local_2a40._0_4_ = fVar34;
                                pEVar23 = (Entity*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_03);
                                this_08 = (shared_ptr<World>*)pEVar23->GetWorld();
                                this_09 =
                                    (hashtable<long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                               eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                               eastl::equal_to<long long>, eastl::hash<long long>,
                                               eastl::mod_range_hashing, eastl::default_ranged_hash,
                                               eastl::prime_rehash_policy, false, true, true>*)
                                        shared_ptr<World>::operator->(this_08);
                                pSVar14 = (SceneManager*)eastl::hashtable<
                                    long long, eastl::pair<long long const, unsigned int>, eastl::allocator,
                                    eastl::use_first<eastl::pair<long long const, unsigned int>>,
                                    eastl::equal_to<long long>, eastl::hash<long long>, eastl::mod_range_hashing,
                                    eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                    true>::size(this_09);
                                this_10 = (EnvironmentOverride*)pSVar14->GetEnvironmentOverride();
                                if (((this_10 != (EnvironmentOverride*)0) &&
                                     (cVar3 = this_10->HasAnyOverrides(), cVar3 != '\0')) &&
                                    (pcVar35 = (char*)this_10->GetLightProbeOverrides(), *pcVar35 != '\0')) {
                                    lVar17 = this_10->GetLightProbeOverrides();
                                    local_2a40._0_4_ = (float)((lVar17 + 4))->GetOverbright();
                                }
                                cVar3 = m_skyBoxOverbrightDefaultOverrideAll;
                                local_2a50 = (AABB*)CONCAT44(local_2a50._4_4_, m_skyBoxOverbrightDefaultValue);
                                psVar29 = (shared_ptr<graphics::SkyBox>*)field_16->GetSkyBox();
                                pSVar30 = (SkyBox*)shared_ptr<graphics::SkyBox>::operator->(psVar29);
                                fVar34 = local_2a40._0_4_;
                                if (cVar3 != '\0') {
                                    fVar34 = local_2a50._0_4_;
                                }
                                pSVar30->SetExposure(fVar34);
                                new (local_14a0)
                                    eastl::fixed_map<graphics::EffectType, bool, 121ul, true,
                                                     eastl::less<graphics::EffectType>, eastl::allocator>();
                                local_27f8[0].field_0._0_1_ = 94;
                                puVar31 = (undefined1*)eastl::map<
                                    graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                    eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                                operator[](
                                    (map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                         eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)
                                        local_14a0,
                                    (EffectType*)local_27f8);
                                *puVar31 = 0;
                                local_27f8[0].field_0._0_1_ = 40;
                                puVar31 = (undefined1*)eastl::map<
                                    graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                    eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                                operator[](
                                    (map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                         eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)
                                        local_14a0,
                                    (EffectType*)local_27f8);
                                *puVar31 = 1;
                                local_27f8[0].field_0._0_1_ = 95;
                                puVar31 = (undefined1*)eastl::map<
                                    graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                    eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                                operator[](
                                    (map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                         eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)
                                        local_14a0,
                                    (EffectType*)local_27f8);
                                *puVar31 = 1;
                                local_27f8[0].field_0._0_1_ = 97;
                                puVar31 = (undefined1*)eastl::map<
                                    graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                    eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>::
                                operator[](
                                    (map<graphics::EffectType, bool, eastl::less<graphics::EffectType>,
                                         eastl::fixed_node_allocator<40ul, 121ul, 1ul, 0ul, true, eastl::allocator>>*)
                                        local_14a0,
                                    (EffectType*)local_27f8);
                                *puVar31 = 1;
                                new (local_27f8) graphics::EffectStateSaveRestore(field_8, (fixed_map*)local_14a0);
                                new (&local_2ab8) math::QuaternionT<float>(0.0, -1.0, 0.0, 0.0);
                                this_11 =
                                    (shared_ptr<render::BufferedRenderTargets>*)local_2a58->GetPointLightSMManager();
                                local_2a40 =
                                    (BufferedRenderTargets*)shared_ptr<render::BufferedRenderTargets>::operator*(
                                        this_11);
                                bVar4 = true;
                                if ((char)local_2a80 != '\0') {
                                    this_12 = (NXTPixScreen*)this_11->Instance();
                                    iVar5 = this_12->GetUIHeight();
                                    bVar4 = iVar5 == 4;
                                }
                                uVar9 = field_16->size();
                                in_XMM1_Da = 16384.0;
                                cVar3 = 1124073472->RenderWorldEnvMap(uVar9, local_2a40, &local_2a70, &local_2ab8,
                                                                      local_2a84, 4, CONCAT44(uVar6, local_2a7c),
                                                                      pMVar10->field_4, bVar4 * '\b' + '1');
                                local_2a58 = (PointLightShadows*)CONCAT71(local_2a58._1_7_, cVar3);
                                if (cVar3 == '\0') {
                                    uVar9 = logger::default_logger();
                                    new (&local_29a8) logger::LogStream((LogStream*)&LOGGER_LIGHTPROBE);
                                    pcVar35 =
                                        "MapSquare LightProbe RenderWorldEnvMap returned false, retrying: %u, %u (%i)";
                                    logger::Logger::Log(
                                        uVar9, 0, &local_29a8, 5,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/scene/LightProbeManager.cpp",
                                        323,
                                        "MapSquare LightProbe RenderWorldEnvMap returned false, retrying: %u, %u (%i)",
                                        *(undefined1*)&pMVar10->field_0, *(undefined1*)((long)&pMVar10->field_0 + 1),
                                        pMVar10->field_4);
                                    local_29a8.~LogStream();
                                    if (graphics::LightProbeRenderer::m_enableResourceRecycling != '\0') {
                                        pLVar22 = (LightProbeRenderer*)field_0->GetLightProbeRenderer();
                                        pLVar12 = (Location*)shared_ptr<MapSquare>::operator->(
                                            (shared_ptr<MapSquare>*)this_03);
                                        puVar13 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)
                                                      pLVar12->GetParentLocationType();
                                        pTVar20 =
                                            (Terrain*)std::unique_ptr<
                                                Terrain,
                                                MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(puVar13);
                                        pLVar21 = (LightProbe*)pTVar20->GetLightProbe();
                                        pLVar22->RecycleRenderingResources(pLVar21);
                                        local_2a40 = (BufferedRenderTargets*)logger::default_logger();
                                        new (&local_2a38) logger::LogStream((LogStream*)&LOGGER_LIGHTPROBE);
                                        uVar1 = *(undefined1*)&pMVar10->field_0;
                                        uVar2 = *(undefined1*)((long)&pMVar10->field_0 + 1);
                                        pLVar22 = (LightProbeRenderer*)field_0->GetLightProbeRenderer();
                                        uVar6 = pLVar22->GetNumFreeLightProbeResources();
                                        pcVar35 = "Recycle lightprobe A %u, %u (%u free)";
                                        logger::Logger::Log(
                                            local_2a40, 0, &local_2a38, 5,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "game/runetek5/scene/LightProbeManager.cpp",
                                            330, "Recycle lightprobe A %u, %u (%u free)", uVar1, uVar2, uVar6);
                                        local_2a38.~LogStream();
                                    }
                                } else {
                                    uVar9 = this_00->HeapBeginPtr();
                                    uVar32 = this_00->end();
                                    pMVar11 = eastl::find_if<LightProbeManager::MapSquareUpdateInfo*,
                                                             unsigned int->RenderPendingEnvMaps(
                                                                 unsigned int, int, bool)::__2>(uVar9, uVar32, pMVar10);
                                    pMVar33 = (MapSquareUpdateInfo*)this_00->end();
                                    if (pMVar11 == pMVar33) {
                                        local_2a40->WriteFinished();
                                        eastl::queue<MapSquare::MapSquarePos,
                                                     eastl::fixed_list<MapSquare::MapSquarePos, 32ul, true,
                                                                       eastl::allocator>>::push(local_2ac8,
                                                                                                (MapSquarePos*)pMVar10);
                                        uVar9 = logger::default_logger();
                                        new (&local_2888) logger::LogStream((LogStream*)&LOGGER_LIGHTPROBE);
                                        logger::Logger::Log(
                                            uVar9, 0, &local_2888, 5,
                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "game/runetek5/scene/LightProbeManager.cpp",
                                            312, "MapSquare LightProbe All Done: %u, %u",
                                            *(undefined1*)&pMVar10->field_0,
                                            *(undefined1*)((long)&pMVar10->field_0 + 1));
                                        local_2888.~LogStream();
                                    }
                                    uVar9 = logger::default_logger();
                                    new (&local_2918) logger::LogStream((LogStream*)&LOGGER_LIGHTPROBE);
                                    pcVar35 = "MapSquare LightProbe Done: %u, %u (%i)";
                                    logger::Logger::Log(
                                        uVar9, 0, &local_2918, 5,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/scene/LightProbeManager.cpp",
                                        315, "MapSquare LightProbe Done: %u, %u (%i)", *(undefined1*)&pMVar10->field_0,
                                        *(undefined1*)((long)&pMVar10->field_0 + 1), pMVar10->field_4);
                                    local_2918.~LogStream();
                                    pMVar10 = (MapSquareUpdateInfo*)this_00->erase(pMVar10);
                                    local_2a5c = local_2a5c + 1;
                                }
                                local_27f8->~EffectStateSaveRestore();
                                local_14a0->~fixed_map();
                                local_2a98.~shared_ptr();
                                if ((char)local_2a58 == '\0')
                                    goto LAB_100479642;
                            }
                        } else {
                        LAB_100479490:
                            eastl::vector_set<
                                MapSquare::MapSquarePos, eastl::less<MapSquare::MapSquarePos>, eastl::allocator,
                                eastl::vector<MapSquare::MapSquarePos, eastl::allocator>>::erase(local_2ad0,
                                                                                                 (MapSquarePos*)
                                                                                                     pMVar10);
                            pMVar10 = (MapSquareUpdateInfo*)this_00->erase(pMVar10);
                        }
                        pMVar11 = (MapSquareUpdateInfo*)this_00->end();
                    } while ((pMVar10 != pMVar11) && (local_2a5c < local_2a60));
                }
                field_968 = '\0';
                psVar29 = (shared_ptr<graphics::SkyBox>*)field_16->GetSkyBox();
                pSVar30 = (SkyBox*)shared_ptr<graphics::SkyBox>::operator->(psVar29);
                pSVar30->SetExposure(0.0);
                pGVar8 = (GUIManager*)field_0->GetGUIManager();
                pGVar8->ResetBatchState();
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100479a10, 432 bytes, placed by class name
    // LightProbeManager::GetProbeTextureData(graphics::LightProbe&, eastl::fixed_vector<render::ImageData, 6ul, true, eastl::allocator>&) const
    undefined8 LightProbeManager::GetProbeTextureData(LightProbe* param_1, fixed_vector* param_2) {
        char cVar1;
        bool bVar2;
        undefined4 uVar3;
        int iVar4;
        int iVar5;
        shared_ptr<render::BufferedRenderTargets>* this_00;
        BufferedRenderTargets* this_01;
        long lVar6;
        long* plVar7;
        undefined8 uVar8;
        ulong uVar9;
        ImageData local_58;

        this_00 = (shared_ptr<render::BufferedRenderTargets>*)param_1->GetPointLightSMManager();
        this_01 = (BufferedRenderTargets*)shared_ptr<render::BufferedRenderTargets>::operator*(this_00);
        cVar1 = this_01->IsReadyToRead();
        uVar8 = 1;
        if (cVar1 != '\0') {
            param_2->resize(6);
            new (&local_58) render::ImageData();
            this_01->CopyColourTargetData(&local_58);
            if (local_58._0_8_ == 0) {
                /* WARNING: Subroutine does not return */
                LogAssert("cubeImageData.m_pixelData.m_pData",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "LightProbeManager.cpp",
                          365, (char*)0);
            }
            if ((int)local_58.field_32 != 7) {
                /* WARNING: Subroutine does not return */
                LogAssert("cubeImageData.m_format == render::Format::FORMAT_R8G8B8A8_UNORM",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                          "LightProbeManager.cpp",
                          366, (char*)0);
            }
            if (local_58._0_8_ == 0) {
                uVar8 = 2;
            } else {
                bVar2 = std::all_of<unsigned char*,
                                    (graphics::LightProbe&)
                                        ->GetProbeTextureData(eastl::fixed_vector<render::ImageData, 6ul, true,
                                                                                  eastl::allocator>&) const ::__3>();
                if (bVar2) {
                    /* WARNING: Subroutine does not return */
                    LogAssert("!isAllBlack",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                              "scene/LightProbeManager.cpp",
                              372, (char*)0);
                }
                lVar6 = eastl::vector<render::ImageData,
                                      eastl::fixed_vector_allocator<40ul, 6ul, 8ul, 0ul, true, eastl::allocator>>::
                operator[]((vector<render::ImageData,
                                   eastl::fixed_vector_allocator<40ul, 6ul, 8ul, 0ul, true, eastl::allocator>>*)param_2,
                           0);
                *(undefined1*)(lVar6 + 16) = 1;
                local_58._16_1_ = 0;
                uVar9 = 0;
                do {
                    plVar7 = (long*)eastl::vector<
                        render::ImageData, eastl::fixed_vector_allocator<40ul, 6ul, 8ul, 0ul, true, eastl::allocator>>::
                    operator[](
                        (vector<render::ImageData,
                                eastl::fixed_vector_allocator<40ul, 6ul, 8ul, 0ul, true, eastl::allocator>>*)param_2,
                        uVar9);
                    *(int*)(plVar7 + 4) = (int)local_58.field_32;
                    *(undefined4*)((long)plVar7 + 28) = local_58.field_24._4_4_;
                    *(undefined4*)(plVar7 + 3) = local_58.field_24._4_4_;
                    uVar3 = render::GetImageByteSize();
                    iVar5 = (int)local_58.field_24;
                    *(undefined4*)((long)plVar7 + 36) = uVar3;
                    iVar4 = render::GetFormatByteCount((int)plVar7[4]);
                    uVar8 = local_58._0_8_;
                    *(int*)(plVar7 + 1) = iVar4 * iVar5;
                    lVar6 = plVar7[3];
                    iVar5 = render::GetFormatByteCount((int)plVar7[4]);
                    *plVar7 = uVar8 + (ulong)(uint)((int)lVar6 * (int)uVar9 * iVar5);
                    uVar9 = uVar9 + 1;
                } while (uVar9 != 6);
                uVar8 = 0;
            }
            local_58.~ImageData();
        }
        return uVar8;
    }

    // 0x100479cd0, 864 bytes, placed by class name
    // LightProbeManager::UpdatePendingLightProbeSH(unsigned int)
    void LightProbeManager::UpdatePendingLightProbeSH(uint param_1) {
        undefined1* this_00;
        char cVar1;
        bool bVar2;
        int iVar3;
        MapSquarePos* pMVar4;
        shared_ptr* this_01;
        Location* pLVar5;
        unique_ptr* this_02;
        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* puVar6;
        Terrain* pTVar7;
        LightProbe* this_03;
        float* pfVar8;
        float* pfVar9;
        MapSquare* pMVar10;
        LightProbeRenderer* pLVar11;
        ulong uVar12;
        array<float, 9ul> local_270[40];
        array<float, 9ul> local_248[40];
        array<float, 9ul> local_220[40];
        IrradianceSHCoefConsts local_1f8;
        ulong local_188;
        ulong local_180;
        LightProbe* local_178;
        float* local_170;
        vector_set<MapSquare::MapSquarePos, eastl::less<MapSquare::MapSquarePos>, eastl::allocator,
                   eastl::vector<MapSquare::MapSquarePos, eastl::allocator>>* local_168;
        LightProbeManager* local_160;
        undefined1 local_152[282];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = &field_56;
        local_160 = this;
        local_188 = this_00->size();
        if (local_188 != 0) {
            local_168 = (vector_set<MapSquare::MapSquarePos, eastl::less<MapSquare::MapSquarePos>, eastl::allocator,
                                    eastl::vector<MapSquare::MapSquarePos, eastl::allocator>>*)&local_160->field_928;
            uVar12 = 0;
            local_180 = (ulong)param_1;
            do {
                cVar1 = this_00->empty();
                if ((cVar1 != '\0') || (local_180 <= uVar12))
                    break;
                pMVar4 = (MapSquarePos*)
                    eastl::queue<MapSquare::MapSquarePos,
                                 eastl::fixed_list<MapSquare::MapSquarePos, 32ul, true, eastl::allocator>>::front();
                this_01 = (shared_ptr*)(local_160->field_16, pMVar4)->GetMapSquare();
                new ((local_152 + 2)) eastl::fixed_vector<render::ImageData, 6ul, true, eastl::allocator>();
                bVar2 = shared_ptr::operator_cast_to_bool(this_01);
                if (bVar2) {
                    pLVar5 = (Location*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_01);
                    this_02 = (unique_ptr*)pLVar5->GetParentLocationType();
                    bVar2 = std::unique_ptr::operator_cast_to_bool(this_02);
                    if (bVar2) {
                        pLVar5 = (Location*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_01);
                        puVar6 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)
                                     pLVar5->GetParentLocationType();
                        pTVar7 =
                            (Terrain*)
                                std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                                    puVar6);
                        this_03 = (LightProbe*)pTVar7->GetLightProbe();
                        cVar1 = this_03->IsInit();
                        if (cVar1 != '\0') {
                            pLVar5 = (Location*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_01);
                            puVar6 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)
                                         pLVar5->GetParentLocationType();
                            pTVar7 = (Terrain*)std::unique_ptr<
                                         Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(puVar6);
                            local_178 = (LightProbe*)pTVar7->GetLightProbe();
                            iVar3 = GetProbeTextureData((LightProbeManager*)pTVar7, local_178,
                                                        (fixed_vector*)(local_152 + 2));
                            if (iVar3 == 2) {
                                if (graphics::LightProbeRenderer::m_enableResourceRecycling != '\0') {
                                    pLVar11 = (LightProbeRenderer*)local_160->field_0->GetLightProbeRenderer();
                                    pLVar11->RecycleRenderingResources(local_178);
                                }
                                pMVar10 =
                                    (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_01);
                                local_1f8.field_0._0_2_ = pMVar10->GetMapSquarePosition();
                                eastl::vector_set<MapSquare::MapSquarePos, eastl::less<MapSquare::MapSquarePos>,
                                                  eastl::allocator,
                                                  eastl::vector<MapSquare::MapSquarePos, eastl::allocator>>::
                                    erase(local_168, (MapSquarePos*)&local_1f8);
                                this_00->pop();
                            } else if (iVar3 == 0) {
                                local_170 = (float*)std::array<float, 9ul>::data(local_270);
                                pfVar8 = (float*)std::array<float, 9ul>::data(local_248);
                                pfVar9 = (float*)std::array<float, 9ul>::data(local_220);
                                graphics::SHProjectCubeMap(3, (fixed_vector*)(local_152 + 2), local_170, pfVar8,
                                                           pfVar9);
                                new (&local_1f8) graphics::IrradianceSHCoefConsts();
                                graphics::ComputeIrradianceSHCoefs(&local_1f8, 3, local_170, pfVar8, pfVar9, 1.0, 1.0,
                                                                   1.0);
                                pMVar10 =
                                    (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_01);
                                pMVar10->SetIrradianceSHConsts(&local_1f8, 750);
                                pMVar10 =
                                    (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_01);
                                local_152._0_2_ = pMVar10->GetMapSquarePosition();
                                eastl::vector_set<
                                    MapSquare::MapSquarePos, eastl::less<MapSquare::MapSquarePos>, eastl::allocator,
                                    eastl::vector<MapSquare::MapSquarePos, eastl::allocator>>::erase(local_168,
                                                                                                     (MapSquarePos*)
                                                                                                         local_152);
                                if (graphics::LightProbeRenderer::m_enableResourceRecycling != '\0') {
                                    pLVar11 = (LightProbeRenderer*)local_160->field_0->GetLightProbeRenderer();
                                    pLVar11->RecycleRenderingResources(local_178);
                                }
                                this_00->pop();
                            }
                        }
                    }
                } else {
                    eastl::vector_set<MapSquare::MapSquarePos, eastl::less<MapSquare::MapSquarePos>, eastl::allocator,
                                      eastl::vector<MapSquare::MapSquarePos, eastl::allocator>>::erase(local_168,
                                                                                                       pMVar4);
                    this_00->pop();
                }
                ((local_152 + 2))->~fixed_vector();
                uVar12 = uVar12 + 1;
            } while (local_188 != uVar12);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10047a060, 480 bytes, placed by class name
    // LightProbeManager::AddSHCoefToCache(MapSquareEnvIrradianceInfo const&)
    void LightProbeManager::AddSHCoefToCache(MapSquareEnvIrradianceInfo* param_1) {
        bool bVar1;
        undefined8 uVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false> local_220[16];
        hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false> local_210[16];
        undefined1 local_200[16];
        hashtable_iterator local_1f0[16];
        hashtable_iterator local_1e0[16];
        eastl local_1d0[16];
        undefined8 local_1c0;
        undefined8 local_1b8;
        undefined8 local_1b0;
        undefined8 local_1a8;
        ulong local_1a0;
        eastl local_198[176];
        hashtable_iterator_base local_e8[176];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_1->field_0 == '\0') {
            /* WARNING: Subroutine does not return */
            LogAssert("irradianceInfo.m_isValid",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "LightProbeManager.cpp",
                      477, (char*)0);
        }
        local_1a0 = (&param_1->field_8)->hash();
        uVar2 = field_16->GetIrradianceCache();
        eastl::hashtable<unsigned long, eastl::pair<unsigned long const, MapSquareEnvIrradianceInfo>, eastl::allocator,
                         eastl::use_first<eastl::pair<unsigned long const, MapSquareEnvIrradianceInfo>>,
                         eastl::equal_to<unsigned long>, eastl::hash<unsigned long>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                         false>::equal_range((ulong*)local_1f0);
        eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>::hashtable_iterator(
            local_220, local_1f0);
        eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>::hashtable_iterator(
            local_210, local_1e0);
        eastl::find_if<
            eastl::hashtable_iterator<eastl::pair<unsigned long const, MapSquareEnvIrradianceInfo>, false, false>,
            (MapSquareEnvIrradianceInfo_const&)->AddSHCoefToCache()::__4>(local_1d0, local_220, local_210, param_1);
        eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                         eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                         eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                         eastl::prime_rehash_policy, false, true, true>::end();
        bVar1 = eastl::operator!=(local_1d0, local_e8, extraout_RDX);
        if (bVar1) {
            new (&local_1c0)
                eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(local_1d0);
            eastl::hashtable<
                unsigned long, eastl::pair<unsigned long const, MapSquareEnvIrradianceInfo>, eastl::allocator,
                eastl::use_first<eastl::pair<unsigned long const, MapSquareEnvIrradianceInfo>>,
                eastl::equal_to<unsigned long>, eastl::hash<unsigned long>, eastl::mod_range_hashing,
                eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, false>::erase(local_e8, uVar2,
                                                                                                   local_1c0,
                                                                                                   local_1b8);
        }
        new (&local_1b0)
            eastl::hashtable_iterator<eastl::pair<eastl::stringconst, unsigned int>, false, false>(local_1e0);
        eastl::make_pair<unsigned long&, MapSquareEnvIrradianceInfo_const&>(local_198, &local_1a0, param_1);
        eastl::pair<unsigned long const, MapSquareEnvIrradianceInfo>::pair<unsigned long, MapSquareEnvIrradianceInfo,
                                                                           void>(
            (pair<unsigned long const, MapSquareEnvIrradianceInfo>*)local_e8, (pair*)local_198);
        eastl::hashtable<unsigned long, eastl::pair<unsigned long const, MapSquareEnvIrradianceInfo>, eastl::allocator,
                         eastl::use_first<eastl::pair<unsigned long const, MapSquareEnvIrradianceInfo>>,
                         eastl::equal_to<unsigned long>, eastl::hash<unsigned long>, eastl::mod_range_hashing,
                         eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, false>::insert(local_200,
                                                                                                             uVar2,
                                                                                                             local_1b0,
                                                                                                             local_1a8,
                                                                                                             local_e8);
        local_e8->~pair();
        local_198->~pair();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10047a580, 1408 bytes, placed by class name
    // LightProbeManager::UpdatePendingLightProbeSHAsync()
    void LightProbeManager::UpdatePendingLightProbeSHAsync() {
        ThreadPool* this_00;
        vector<std::future<MapSquareEnvIrradianceInfo>, eastl::allocator>* this_01;
        bool bVar1;
        char cVar2;
        int iVar3;
        undefined4 uVar4;
        undefined4 uVar5;
        long lVar6;
        MapSquarePos* pMVar7;
        shared_ptr* this_02;
        weak_ptr* pwVar8;
        Location* pLVar9;
        unique_ptr* this_03;
        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* puVar10;
        Terrain* pTVar11;
        LightProbe* pLVar12;
        LightProbe* pLVar13;
        fixed_vector* pfVar14;
        Layout* this_04;
        vector* pvVar15;
        LightProbeRenderer* this_05;
        MapSquare* pMVar16;
        undefined8 uVar17;
        undefined8 uVar18;
        future* pfVar19;
        future* pfVar20;
        LightProbeManager* pLVar21;
        undefined1 local_5c0[40];
        weak_ptr<oldscape::dash3d::Decor> local_598[16];
        undefined1 local_588[24];
        vector_set<MapSquare::MapSquarePos, eastl::less<MapSquare::MapSquarePos>, eastl::allocator,
                   eastl::vector<MapSquare::MapSquarePos, eastl::allocator>>* local_570;
        vector<std::future<MapSquareEnvIrradianceInfo>, eastl::allocator>* local_568;
        queue<MapSquare::MapSquarePos, eastl::fixed_list<MapSquare::MapSquarePos, 32ul, true, eastl::allocator>>*
            local_560;
        LightProbeManager* local_558;
        LogStream local_550;
        LogStream local_4c0;
        LogStream local_430;
        fixed_queue<MapSquare::MapSquarePos, 32ul, true> local_3a0[872];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_queue<MapSquare::MapSquarePos, 32ul, true>::fixed_queue(local_3a0);
        local_560 = (queue<MapSquare::MapSquarePos,
                           eastl::fixed_list<MapSquare::MapSquarePos, 32ul, true, eastl::allocator>>*)&field_56;
        lVar6 = eastl::queue<MapSquare::MapSquarePos,
                             eastl::fixed_list<MapSquare::MapSquarePos, 32ul, true, eastl::allocator>>::size(local_560);
        local_568 = (vector<std::future<MapSquareEnvIrradianceInfo>, eastl::allocator>*)&field_976;
        local_558 = this;
        if (lVar6 != 0) {
            local_570 = (vector_set<MapSquare::MapSquarePos, eastl::less<MapSquare::MapSquarePos>, eastl::allocator,
                                    eastl::vector<MapSquare::MapSquarePos, eastl::allocator>>*)&field_928;
            do {
                pMVar7 = (MapSquarePos*)
                    eastl::queue<MapSquare::MapSquarePos,
                                 eastl::fixed_list<MapSquare::MapSquarePos, 32ul, true, eastl::allocator>>::front();
                pLVar21 = local_558;
                this_02 = (shared_ptr*)(local_558->field_16, pMVar7)->GetMapSquare();
                pwVar8 = (weak_ptr*)pLVar21->field_16->GetCurrentEnvironmentSettings();
                weak_ptr<oldscape::dash3d::Decor>::weak_ptr(local_598, pwVar8);
                bVar1 = shared_ptr::operator_cast_to_bool(this_02);
                if (bVar1) {
                    pLVar9 = (Location*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_02);
                    this_03 = (unique_ptr*)pLVar9->GetParentLocationType();
                    bVar1 = std::unique_ptr::operator_cast_to_bool(this_03);
                    if (bVar1) {
                        pLVar9 = (Location*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_02);
                        puVar10 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)
                                      pLVar9->GetParentLocationType();
                        pTVar11 =
                            (Terrain*)
                                std::unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(
                                    puVar10);
                        pLVar12 = (LightProbe*)pTVar11->GetLightProbe();
                        cVar2 = pLVar12->IsInit();
                        if (cVar2 != '\0') {
                            pLVar9 = (Location*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_02);
                            puVar10 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)
                                          pLVar9->GetParentLocationType();
                            pTVar11 = (Terrain*)std::unique_ptr<
                                          Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>::operator->(puVar10);
                            pLVar13 = (LightProbe*)pTVar11->GetLightProbe();
                            pLVar21 = (LightProbeManager*)local_588;
                            make_shared<eastl::fixed_vector<render::ImageData, 6ul, true, eastl::allocator>>(
                                (jag*)pLVar21);
                            pfVar14 = (fixed_vector*)
                                shared_ptr<eastl::fixed_vector<render::ImageData, 6ul, true, eastl::allocator>>::
                                operator*(
                                    (shared_ptr<eastl::fixed_vector<render::ImageData, 6ul, true, eastl::allocator>>*)
                                        pLVar21);
                            pLVar12 = pLVar13;
                            iVar3 = GetProbeTextureData(pLVar21, pLVar13, pfVar14);
                            if (iVar3 == 1) {
                                local_3a0->push(pMVar7);
                                uVar17 = logger::default_logger();
                                new (&local_430) logger::LogStream((LogStream*)&LOGGER_LIGHTPROBE);
                                pMVar16 =
                                    (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_02);
                                uVar4 = pMVar16->GetMapSquareX();
                                pMVar16 =
                                    (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_02);
                                uVar5 = pMVar16->GetMapSquareZ();
                                logger::Logger::Log(uVar17, 0, &local_430, 5,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/game/runetek5/scene/LightProbeManager.cpp",
                                                    548, "Retrying LightProbe Read (readback not ready): %u, %u", uVar4,
                                                    uVar5);
                                local_430.~LogStream();
                            } else if (iVar3 == 0) {
                                this_04 = (Layout*)pLVar21->Instance();
                                pvVar15 = eastl::string::Layout::SSOBeginPtr(this_04, (type*)pLVar12);
                                new (local_5c0) shared_ptr<oldscape::dash3d::Decor>(local_588);
                                local_5c0[16] = pMVar7->field_0;
                                local_5c0[17] = pMVar7->field_1;
                                new ((local_5c0 + 24)) weak_ptr<oldscape::dash3d::Decor>(local_598);
                                this_00 = (ThreadPool*)(local_588 + 16);
                                ThreadPool::AddTask<LightProbeManager::UpdatePendingLightProbeSHAsync()::__5>(
                                    this_00, (char*)pvVar15, (__5*)local_5c0);
                                eastl::vector<std::future<MapSquareEnvIrradianceInfo>, eastl::allocator>::push_back(
                                    local_568, (future*)this_00);
                                this_00->~future();
                                UpdatePendingLightProbeSHAsync()::$_5::~__5((__5*)local_5c0);
                            } else {
                                if (graphics::LightProbeRenderer::m_enableResourceRecycling != '\0') {
                                    this_05 = (LightProbeRenderer*)local_558->field_0->GetLightProbeRenderer();
                                    this_05->RecycleRenderingResources(pLVar13);
                                }
                                uVar17 = logger::default_logger();
                                new (&local_4c0) logger::LogStream((LogStream*)&LOGGER_LIGHTPROBE);
                                pMVar16 =
                                    (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_02);
                                uVar4 = pMVar16->GetMapSquareX();
                                pMVar16 =
                                    (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_02);
                                uVar5 = pMVar16->GetMapSquareZ();
                                logger::Logger::Log(uVar17, 0, &local_4c0, 5,
                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/"
                                                    "libs/game/runetek5/scene/LightProbeManager.cpp",
                                                    558,
                                                    "Nullptr returned for light probe texture data read back: %u, %u",
                                                    uVar4, uVar5);
                                local_4c0.~LogStream();
                                eastl::vector_set<
                                    MapSquare::MapSquarePos, eastl::less<MapSquare::MapSquarePos>, eastl::allocator,
                                    eastl::vector<MapSquare::MapSquarePos, eastl::allocator>>::erase(local_570, pMVar7);
                            }
                            local_588->~shared_ptr();
                            goto LAB_10047a990;
                        }
                    }
                    local_3a0->push(pMVar7);
                    uVar17 = logger::default_logger();
                    new (&local_550) logger::LogStream((LogStream*)&LOGGER_LIGHTPROBE);
                    pMVar16 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_02);
                    uVar4 = pMVar16->GetMapSquareX();
                    pMVar16 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this_02);
                    uVar5 = pMVar16->GetMapSquareZ();
                    logger::Logger::Log(uVar17, 0, &local_550, 5,
                                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                        "runetek5/scene/LightProbeManager.cpp",
                                        566, "Retrying LightProbe Read (terrain/probe not ready): %u, %u", uVar4,
                                        uVar5);
                    local_550.~LogStream();
                } else {
                    eastl::vector_set<MapSquare::MapSquarePos, eastl::less<MapSquare::MapSquarePos>, eastl::allocator,
                                      eastl::vector<MapSquare::MapSquarePos, eastl::allocator>>::erase(local_570,
                                                                                                       pMVar7);
                }
            LAB_10047a990:
                eastl::queue<MapSquare::MapSquarePos,
                             eastl::fixed_list<MapSquare::MapSquarePos, 32ul, true, eastl::allocator>>::pop(local_560);
                local_598->~weak_ptr();
                lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
        }
        cVar2 = local_3a0->empty();
        if (cVar2 == '\0') {
            eastl::queue<MapSquare::MapSquarePos,
                         eastl::fixed_list<MapSquare::MapSquarePos, 32ul, true, eastl::allocator>>::swap(local_560,
                                                                                                         (queue*)
                                                                                                             local_3a0);
        }
        this_01 = local_568;
        uVar17 = local_568->HeapBeginPtr();
        uVar18 = this_01->end();
        pfVar19 = std::remove_if<std::future<MapSquareEnvIrradianceInfo>*,
                                 LightProbeManager::UpdatePendingLightProbeSHAsync()::__6>(uVar17, uVar18, local_558);
        pfVar20 = (future*)this_01->end();
        eastl::vector<std::future<MapSquareEnvIrradianceInfo>, eastl::allocator>::erase(this_01, pfVar19, pfVar20);
        eastl::fixed_queue<MapSquare::MapSquarePos, 32ul, true>::~fixed_queue(local_3a0);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10047ae00, 16 bytes, complete-object destructor, placed by class name
    // LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5::~$_5(): jumps straight to the base-object destructor

    // 0x10047af20, 80 bytes, placed by class name
    // LightProbeManager::Clear()
    void LightProbeManager::Clear() {
        char cVar1;

        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        while (true) {
            cVar1 = (&field_56)->empty();
            if (cVar1 != '\0')
                break;
            (&field_56)->pop();
        }
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    }

    // 0x10047f730, 48 bytes, base-object destructor, placed by class name
    // LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5::~$_5()
    /* ~$_5() */

    void LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5::~__5() {
        (&field_24)->~weak_ptr();
        ~shared_ptr();
    }

    // 0x100481820, 80 bytes, placed by class name
    // LightProbeManager::AddMapSquareToUpdateList(MapSquare::MapSquarePos const&)::$_1::operator()(LightProbeManager::MapSquareUpdateInfo const&, LightProbeManager::MapSquareUpdateInfo const&) const
    /* LightProbeManager::AddMapSquareToUpdateList(MapSquare::MapSquarePos
   const&)::$_1::TEMPNAMEPLACEHOLDERVALUE(LightProbeManager::MapSquareUpdateInfo const&,
   LightProbeManager::MapSquareUpdateInfo const&) const */

    bool LightProbeManager::AddMapSquareToUpdateList(MapSquare::MapSquarePos_const&)::$_1::operator()(
        MapSquareUpdateInfo* param_1, MapSquareUpdateInfo* param_2) {
        long lVar1;
        int iVar2;
        int iVar3;

        lVar1 = field_0;
        iVar2 = (*(World**)(lVar1 + 16))
                    ->GetTargetMapSquarePriority((uint) * (byte*)&param_1->field_0,
                                                 (uint) * (byte*)((long)&param_1->field_0 + 1));
        iVar3 = (*(World**)(lVar1 + 16))
                    ->GetTargetMapSquarePriority((uint) * (byte*)&param_2->field_0,
                                                 (uint) * (byte*)((long)&param_2->field_0 + 1));
        return iVar2 < iVar3;
    }

    // 0x100481c40, 64 bytes, placed by class name
    // LightProbeManager::RenderPendingEnvMaps(unsigned int, unsigned int, int, bool)::$_2::operator()(LightProbeManager::MapSquareUpdateInfo const&) const
    /* LightProbeManager::RenderPendingEnvMaps(unsigned int, unsigned int, int,
   bool)::$_2::TEMPNAMEPLACEHOLDERVALUE(LightProbeManager::MapSquareUpdateInfo const&)
   const */

    undefined4 LightProbeManager::RenderPendingEnvMaps(unsigned int, unsigned int, int,
                                                       bool)::$_2::operator()(MapSquareUpdateInfo* param_1) {
        undefined4 uVar2;

        if (MapSquare::MapSquarePos::operator==((MapSquarePos*)param_1, *(MapSquarePos**)this) == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = CONCAT31((int3)((uint)param_1->field_4 >> 8), param_1->field_4 != *(int*)(*(long*)this + 4));
        }
        return uVar2;
    }

    // 0x100483180, 16 bytes, complete-object constructor, placed by class name
    // LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5::$_5($_5&&): jumps straight to the base-object constructor

    // 0x100483190, 80 bytes, base-object constructor, placed by class name
    // LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5::$_5($_5&&)
    /* $_5($_5&&) */

    void LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5::__5(__5* param_1) {
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, (shared_ptr*)param_1);
        field_16 = *(undefined2*)(param_1 + 16);
        new (&field_24, (weak_ptr*)(param_1 + 24)) weak_ptr<oldscape::dash3d::Decor>();
    }

    // 0x1004832f0, 304 bytes, placed by class name
    // LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5::operator()()
    /* LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5::TEMPNAMEPLACEHOLDERVALUE()
    */

    MapSquareEnvIrradianceInfo* LightProbeManager::UpdatePendingLightProbeSHAsync()::$_5::operator()() {
        fixed_vector* pfVar2;
        float* pfVar3;
        float* pfVar4;
        float* pfVar5;
        ulong uVar6;
        shared_ptr<eastl::fixed_vector<render::ImageData, 6ul, true, eastl::allocator>>* in_RSI;
        IrradianceSHCoefConsts aIStackY_3548[128];
        MapSquarePos in_stack_fffffffffffffeb8;
        array<float, 9ul> local_d8[40];
        array<float, 9ul> local_b0[40];
        array<float, 9ul> local_88[40];
        shared_ptr<oldscape::RSevenDebugPresetProvider> local_60[16];
        MapSquareEnvInfo local_50;

        pfVar2 =
            (fixed_vector*)shared_ptr<eastl::fixed_vector<render::ImageData, 6ul, true, eastl::allocator>>::operator*(
                in_RSI);
        pfVar3 = (float*)std::array<float, 9ul>::data(local_d8);
        pfVar4 = (float*)std::array<float, 9ul>::data(local_b0);
        pfVar5 = (float*)std::array<float, 9ul>::data(local_88);
        graphics::SHProjectCubeMap(3, pfVar2, pfVar3, pfVar4, pfVar5);
        graphics::IrradianceSHCoefConsts::IrradianceSHCoefConsts(aIStackY_3548 + 128);
        graphics::ComputeIrradianceSHCoefs(aIStackY_3548 + 128, 3, pfVar3, pfVar4, pfVar5, 1.0, 1.0, 1.0);
        weak_ptr<oldscape::rs2lib::IfType>::lock();
        new (&local_50) MapSquareEnvInfo(in_stack_fffffffffffffeb8, (shared_ptr*)(ulong) * (uint*)(in_RSI + 16));
        uVar6 = local_50.hash();
        new (this) MapSquareEnvIrradianceInfo(&local_50, uVar6, aIStackY_3548 + 128);
        local_50.~pair();
        local_60->~shared_ptr();
        return (MapSquareEnvIrradianceInfo*)this;
    }

    // 0x10048e300, 32 bytes, placed by the data it initialises
    // ___cxx_global_var_init.10
    void ___cxx_global_var_init_10() {
        LightProbeManager::m_skyBoxOverbrightDefaultValue = 1048576000;
    }

} // namespace jag::game
