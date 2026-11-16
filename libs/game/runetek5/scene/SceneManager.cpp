// libs/game/runetek5/scene/SceneManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "SceneManager.h"

namespace jag::game {
    // 0x1000b7910: the linker folded this into oldscape::minimenu::MinimenuEntry::GetSubjectName() const, which has identical code
    SceneManager::GetMapAreaList();

    // 0x10016ea80: the linker folded this into oldscape::minimenu::Minimenu::GetPlayerOps() const, which has identical code
    SceneManager::GetIrradianceCache();

    // 0x100396010: the linker folded this into oldscape::auth::SteamAuthLibWrapper::GetGameToken(), which has identical code
    EntityHighlightGlobalState SceneManager::GetEntityHighlightGlobalState();

    // 0x100460f60, 800 bytes, base-object constructor, placed by class name and debug map
    // SceneManager::SceneManager(Js5ResourceProvider*, graphics::RT7Core*, ConfigProvider*, PlayerVarDomain*, AssetBuilder*)
    void SceneManager::SceneManager(Js5ResourceProvider* param_1, RT7Core* param_2, ConfigProvider* param_3,
                                    PlayerVarDomain* param_4, AssetBuilder* param_5) {
        RT7Core* pRVar1;
        ParticleManager* this_00;
        Js5ResourceProvider* pJVar2;
        SceneManager* this_01;
        Array<Js5ArchiveSettings*, eastl::allocator> local_d0[24];
        PlayerVarDomain* local_b8;
        AssetBuilder* local_b0;
        RT7Core* local_a8;
        ConfigProvider* local_a0;
        undefined1* local_98;
        undefined1* local_90;
        undefined1* local_88;
        hash_multimap<unsigned long, MapSquareEnvIrradianceInfo, eastl::hash<unsigned long>,
                      eastl::equal_to<unsigned long>, eastl::allocator, false>* local_80;
        RT7Core* local_78;
        shared_ptr<graphics::EquirectangularRenderer>* local_70;
        shared_ptr local_68[3];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_a8 = (RT7Core*)param_5;
        new (this) graphics::ParticleManagerHeightProvider();
        pRVar1 = local_a8;
        field_0 = &PTR_GetLevelHeights_100f00bc0;
        field_8 = param_1;
        field_16 = param_3;
        field_24 = param_4;
        field_32 = (AssetBuilder*)local_a8;
        field_40 = param_2;
        field_48 = 0;
        local_98 = &field_56;
        pJVar2 = param_1;
        local_a0 = param_3;
        local_78 = param_2;
        new (local_98) MapAreaList(param_1);
        local_90 = &field_88;
        new (local_90) eastl::vector<shared_ptr<World>, eastl::allocator>();
        field_120 = -1;
        field_124 = -1;
        new (field_128) game::CoordGrid();
        new ((field_128 + 12), (_func_decltype_nullptr*)pJVar2)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        local_88 = &field_160;
        std::unique_ptr<EnvironmentOverride, std::default_delete<EnvironmentOverride>>::unique_ptr<true, void>(
            (unique_ptr<EnvironmentOverride, std::default_delete<EnvironmentOverride>>*)local_88);
        m_freshEnvironmentOverride = false;
        local_70 = (shared_ptr<graphics::EquirectangularRenderer>*)&field_176;
        new (local_70) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(pJVar2);
        new (m_entityHighlightGlobalState) EntityHighlightGlobalState();
        new (local_68) eastl::allocator("EASTL hash_multimap");
        local_80 =
            (hash_multimap<unsigned long, MapSquareEnvIrradianceInfo, eastl::hash<unsigned long>,
                           eastl::equal_to<unsigned long>, eastl::allocator, false>*)(m_entityHighlightGlobalState +
                                                                                      48);
        eastl::hash_multimap<unsigned long, MapSquareEnvIrradianceInfo, eastl::hash<unsigned long>,
                             eastl::equal_to<unsigned long>, eastl::allocator, false>::hash_multimap(local_80,
                                                                                                     (allocator*)
                                                                                                         local_68);
        field_296 = 0;
        field_300 = 2;
        new (&field_304) Array<Js5ArchiveSettings*, eastl::allocator>();
        field_328 = 0;
        field_332 = 0;
        field_340 = 0;
        new (&field_344) math::Vector2T<int>();
        if ((((param_1 == (Js5ResourceProvider*)0) || (local_78 == (RT7Core*)0)) || (local_a0 == (ConfigProvider*)0)) ||
            (pRVar1 == (RT7Core*)0)) {
            /* WARNING: Subroutine does not return */
            LogAssert("resourceProvider != nullptr && rt7Core != nullptr && configProvider != nullptr && assetBuilder "
                      "!= nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "SceneManager.cpp",
                      48, (char*)0);
        }
        local_68[0]._0_8_ = Js5Archive::JS5_CONFIG_LOC;
        local_68[0].field_8 = Js5Archive::JS5_MAPS;
        local_68[1]._0_4_ = (int)Js5Archive::JS5_MODELSRT7;
        local_68[1]._4_4_ = Js5Archive::JS5_MODELSRT7._4_4_;
        local_68[1].field_8 = Js5Archive::JS5_MATERIALS;
        local_68[2]._0_8_ = Js5Archive::JS5_CONFIG_BILLBOARD;
        local_68[2].field_8 = Js5Archive::JS5_CONFIG_PARTICLE;
        local_b0 = (AssetBuilder*)6;
        local_b8 = (PlayerVarDomain*)local_68;
        Array<Js5ArchiveSettings*, eastl::allocator>::Array(local_d0, (initializer_list*)&local_b8);
        Array<Js5ArchiveSettings*, eastl::allocator>::operator=(
            (Array<Js5ArchiveSettings*, eastl::allocator>*)&field_304, (Array*)local_d0);
        this_01 = (SceneManager*)local_d0;
        this_01->~Array();
        CreateRenderingResources(this_01);
        this_00 = (ParticleManager*)local_78->GetParticleManager();
        this_00->SetHeightProvider(this);
        make_shared<graphics::EquirectangularRenderer, graphics::RT7Core*&>((jag*)local_68, &field_40);
        shared_ptr<graphics::EquirectangularRenderer>::operator=(local_70, local_68);
        local_68->~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100461330, 400 bytes, placed by class name
    // SceneManager::CreateRenderingResources()
    void SceneManager::CreateRenderingResources() {
        MapArea* this_00;
        long lVar1;

        this_00 = (MapArea*)Instance();
        lVar1 = this_00->GetOrigin();
        if (*(char*)(lVar1 + 120) != '\0') {
            render::CreatePermanentBuffers<render::ShaderConstBuffer>(16, 128);
            render::CreatePermanentBuffers<render::ShaderConstBuffer>(32, 16);
            render::CreatePermanentBuffers<render::ShaderConstBuffer>(64, 128);
            render::CreatePermanentBuffers<render::ShaderConstBuffer>(256, 256);
            render::CreatePermanentBuffers<render::ShaderConstBuffer>(1024, 32);
        }
        render::CreatePermanentBuffers<render::IndexBuffer>(64, 4);
        render::CreatePermanentBuffers<render::IndexBuffer>(128, 4);
        render::CreatePermanentBuffers<render::IndexBuffer>(512, 4);
        render::CreatePermanentBuffers<render::IndexBuffer>(1024, 4);
        render::CreatePermanentBuffers<render::IndexBuffer>(2048, 4);
        render::CreatePermanentBuffers<render::IndexBuffer>(4096, 24);
        render::CreatePermanentBuffers<render::VertexBuffer>(16, 32);
        render::CreatePermanentBuffers<render::VertexBuffer>(32, 32);
        render::CreatePermanentBuffers<render::VertexBuffer>(64, 32);
        render::CreatePermanentBuffers<render::VertexBuffer>(128, 128);
        render::CreatePermanentBuffers<render::VertexBuffer>(256, 128);
        render::CreatePermanentBuffers<render::VertexBuffer>(512, 128);
        render::CreatePermanentBuffers<render::VertexBuffer>(1024, 128);
        render::CreatePermanentBuffers<render::VertexBuffer>(2048, 128);
        render::CreatePermanentBuffers<render::VertexBuffer>(4096, 128);
        render::CreatePermanentBuffers<render::VertexBuffer>(8192, 128);
        render::CreatePermanentBuffers<render::VertexBuffer>(16384, 160);
        render::CreatePermanentBuffers<render::VertexBuffer>(32768, 92);
        render::CreatePermanentBuffers<render::VertexBuffer>(49152, 32);
    }

    // 0x1004615e0, 16 bytes, complete-object constructor, placed by class name
    // SceneManager::SceneManager(Js5ResourceProvider*, graphics::RT7Core*, ConfigProvider*, PlayerVarDomain*, AssetBuilder*): jumps straight to the base-object constructor

    // 0x1004615f0, 192 bytes, base-object destructor, placed by class name
    // SceneManager::~SceneManager()
    void SceneManager::~SceneManager() {
        field_0 = &PTR_GetLevelHeights_100f00bc0;
        DestroyRenderingResources(this);
        ResetWorlds(this);
        (&field_304)->~Array();
        ((m_entityHighlightGlobalState + 48))->~hash_multimap();
        (&field_176)->~shared_ptr();
        (&field_160)->~unique_ptr();
        (&field_88)->~vector();
        (&field_56)->~MapAreaList();
    }

    // 0x1004616b0, 80 bytes, placed by class name
    // SceneManager::DestroyRenderingResources()
    void SceneManager::DestroyRenderingResources() {
        shared_ptr<World>* this_00;
        shared_ptr<World>* psVar1;
        long* plVar2;

        this_00 = (shared_ptr<World>*)(&field_88)->HeapBeginPtr();
        psVar1 = (shared_ptr<World>*)(&field_88)->end();
        for (; this_00 != psVar1; this_00 = this_00 + 16) {
            plVar2 = (long*)shared_ptr<World>::operator->(this_00);
            (**(code**)(*plVar2 + 8))(plVar2);
        }
    }

    // 0x100461700, 528 bytes, placed by class name
    // SceneManager::ResetWorlds()
    void SceneManager::ResetWorlds() {
        undefined1* this_00;
        int iVar3;
        weak_ptr* this_01;
        World* this_02;
        undefined8 uVar4;
        long lVar5;
        shared_ptr local_100;
        weak_ptr* local_f0;
        vector<shared_ptr<oldscape::rseven::Terrain>, eastl::allocator>* local_e0;
        LocationData local_d8;
        LogStream local_c8;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = &field_88;
        this_01 = (weak_ptr*)this_00->HeapBeginPtr();
        local_e0 = (vector<shared_ptr<oldscape::rseven::Terrain>, eastl::allocator>*)this_00;
        local_f0 = (weak_ptr*)this_00->end();
        if (this_01 != local_f0) {
            do {
                new (&local_d8) weak_ptr<oldscape::dash3d::Decor>(this_01);
                this_02 = (World*)shared_ptr<World>::operator->((shared_ptr<World>*)this_01);
                this_02->Clear();
                shared_ptr<World>::reset();
                weak_ptr<oldscape::rs2lib::IfType>::lock();
                if (shared_ptr::operator_cast_to_bool(&local_100)) {
                    uVar4 = logger::default_logger();
                    new (&local_c8) logger::LogStream((LogStream*)&LOGGER_SCENE);
                    iVar3 = local_100.use_count();
                    logger::Logger::Log(
                        uVar4, 0, &local_c8, 3,
                        "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                        "SceneManager.cpp",
                        135, "%d World references are still being held on reset - check for orphan Entities.",
                        iVar3 + -1);
                    local_c8.~LogStream();
                    lVar5 = shared_ptr<World>::operator->((shared_ptr<World>*)&local_100);
                    ((lVar5 + 8))->~AutoSingleton();
                    /* WARNING: Subroutine does not return */
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/scene/SceneManager.cpp",
                                    140, (char*)0);
                }
                local_100.~shared_ptr();
                local_d8.~weak_ptr();
                this_01 = this_01 + 16;
            } while (this_01 != local_f0);
        }
        eastl::vector<shared_ptr<oldscape::rseven::Terrain>, eastl::allocator>::clear(local_e0);
        ((SceneManager*)this)->field_120 = -1;
        ((SceneManager*)this)->field_124 = -1;
        new (&local_d8) oldscape::rs2lib::worldmap::LocationData(-1, 0, 0);
        *(int*)(((SceneManager*)this)->field_128 + 8) = local_d8.field_8;
        *(int*)(((SceneManager*)this)->field_128 + 0) = local_d8.field_0;
        *(int*)(((SceneManager*)this)->field_128 + 4) = local_d8.field_4;
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100461910, 16 bytes, complete-object destructor, placed by class name
    // SceneManager::~SceneManager(): jumps straight to the base-object destructor

    // 0x100461920, 32 bytes, deleting destructor, placed by class name
    // SceneManager::~SceneManager()
    void SceneManager::~SceneManager() {
        ~SceneManager(this);
        operator_delete(this);
    }

    // 0x100461940, 336 bytes, placed by class name
    // SceneManager::GetLevelHeights(std::array<int, 5ul>&, math::Vector3T<float> const&) const
    /* SceneManager::GetLevelHeights(std::array<int, 5ul>&, math::Vector3T<float>
   const&) const */

    bool SceneManager::GetLevelHeights(array* param_1, Vector3T* param_2) {
        bool bVar1;
        int iVar2;
        int iVar3;
        shared_ptr* psVar4;
        World* this_00;
        MapSquare* pMVar5;
        undefined8 uVar6;
        int* piVar7;
        ulong uVar8;
        undefined1 local_50[31];
        char local_31;

        psVar4 = (shared_ptr*)GetActiveWorld(this);
        bVar1 = shared_ptr::operator_cast_to_bool(psVar4);
        if (bVar1) {
            new (local_50) CoordFine(0, param_2);
            this_00 = (World*)shared_ptr<World>::operator->((shared_ptr<World>*)psVar4);
            iVar2 = local_50->GetMapSquareX();
            iVar3 = local_50->GetMapSquareZ();
            psVar4 = (shared_ptr*)this_00->GetMapSquare(iVar2, iVar3);
            local_31 = shared_ptr::operator_cast_to_bool(psVar4);
            bVar1 = false;
            if ((bool)local_31) {
                local_50._16_8_ = psVar4;
                iVar2 = local_50->GetLocalX();
                iVar3 = local_50->GetLocalZ();
                uVar8 = 0;
                do {
                    pMVar5 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)local_50._16_8_);
                    uVar6 = std::array<int, 5ul>::operator[]((array<int, 5ul>*)param_1, uVar8);
                    pMVar5->GetFineHeight(uVar6, uVar8 & 4294967295, iVar2 << 7 | 64, iVar3 << 7 | 64, 0, 0);
                    uVar8 = uVar8 + 1;
                } while (uVar8 != 4);
                piVar7 = (int*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)param_1, 3);
                iVar2 = *piVar7;
                piVar7 = (int*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)param_1, 4);
                *piVar7 = iVar2 + 1024;
                piVar7 = (int*)std::array<int, 5ul>::operator[]((array<int, 5ul>*)param_1, 0);
                bVar1 = *piVar7 != -1;
            }
            if (local_31 != '\0') {
                return bVar1;
            }
        }
        return false;
    }

    // 0x100461a90, 48 bytes, placed by class name
    // SceneManager::GetActiveWorld() const
    undefined1* SceneManager::GetActiveWorld() {
        undefined1* puVar1;

        if ((long)field_120 == 18446744073709551615) {
            return &World::NullWorld;
        }
        puVar1 = (undefined1*)eastl::vector<shared_ptr<World>, eastl::allocator>::operator[](
            (vector<shared_ptr<World>, eastl::allocator>*)&field_88, (long)field_120);
        return puVar1;
    }

    // 0x100461ad0, 112 bytes, placed by class name
    // SceneManager::ShouldUpdateLevelHeights(math::Vector3T<float> const&, math::Vector3T<float> const&) const
    bool SceneManager::ShouldUpdateLevelHeights(Vector3T* param_1, Vector3T* param_2) {
        bool bVar1;

        bVar1 = true;
        if (((int)(*(float*)param_1 * 0.0078125) == (int)(*(float*)param_2 * 0.0078125)) &&
            ((int)(*(float*)(param_1 + 8) * 0.0078125) == (int)(*(float*)(param_2 + 8) * 0.0078125))) {
            bVar1 = (int)(*(float*)(param_1 + 4) * 0.015625) != (int)(*(float*)(param_2 + 4) * 0.015625);
        }
        return bVar1;
    }

    // 0x100461b40, 176 bytes, placed by class name
    // SceneManager::RemoveTemporaryWorlds()
    void SceneManager::RemoveTemporaryWorlds() {
        undefined1* this_00;
        int iVar1;
        shared_ptr* this_01;
        shared_ptr* psVar3;
        World* pWVar4;
        int iVar5;

        this_00 = &field_88;
        this_01 = (shared_ptr*)this_00->HeapBeginPtr();
        psVar3 = (shared_ptr*)this_00->end();
        if (this_01 != psVar3) {
            iVar5 = 0;
            do {
                pWVar4 = (World*)shared_ptr<World>::operator->((shared_ptr<World>*)this_01);
                if (pWVar4->GetTemporaryMap() == '\0') {
                    this_01 = this_01 + 1;
                } else {
                    pWVar4 = (World*)shared_ptr<World>::operator->((shared_ptr<World>*)this_01);
                    pWVar4->Clear();
                    this_00->erase(this_01);
                    if (iVar5 <= field_120) {
                        field_120 = field_120 + -1;
                    }
                    iVar1 = field_124;
                    if ((iVar1 != -1) && (iVar5 <= iVar1)) {
                        field_124 = iVar1 + -1;
                    }
                }
                iVar5 = iVar5 + 1;
                psVar3 = (shared_ptr*)this_00->end();
            } while (this_01 != psVar3);
        }
    }

    // 0x100461c60, 64 bytes, placed by class name
    // SceneManager::StoreCurrentActiveWorld()
    void SceneManager::StoreCurrentActiveWorld() {
        if (field_124 != -1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_storedActiveWorld == -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "SceneManager.cpp",
                      179, "SceneMananger.storeCurrentActiveWorld - Cannot store active world when already stored");
        }
        field_124 = field_120;
    }

    // 0x100461ca0, 80 bytes, placed by class name
    // SceneManager::RestoreCurrentActiveWorld()
    void SceneManager::RestoreCurrentActiveWorld() {
        if (field_124 == -1) {
            /* WARNING: Subroutine does not return */
            LogAssert("m_storedActiveWorld != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "SceneManager.cpp",
                      185, "SceneMananger.restoreCurrentActiveWorld - Cannot restore active world when none is stored");
        }
        field_120 = field_124;
        field_124 = -1;
    }

    // 0x100461cf0, 256 bytes, placed by class name
    // SceneManager::CreateWorldFromWorldArea(shared_ptr<WorldAreaType>, int, int, int, int, bool)
    void SceneManager::CreateWorldFromWorldArea(shared_ptr param_1, int param_2, int param_3, int param_4, int param_5,
                                                bool param_6) {
        int iVar1;
        undefined4 in_register_00000034;
        undefined7 in_register_00000089;
        shared_ptr local_60;
        SceneManager* local_50;
        _func_decltype_nullptr* local_48;
        int local_3c;
        int local_38;
        int local_34;
        int local_30[2];

        local_30[0] = (int)CONCAT71(in_register_00000089, param_6);
        local_3c = param_3;
        local_38 = param_4;
        local_34 = param_5;
        if (param_1._0_1_ != '\0') {
            ResetWorlds(this);
        }
        iVar1 = (&field_88)->size();
        local_30[1] = 3;
        local_48 = (_func_decltype_nullptr*)0;
        local_50 = this;
        make_shared<World, SceneManager*, graphics::RT7Core*&, Js5ResourceProvider*&, ConfigProvider*&,
                    PlayerVarDomain*&, AssetBuilder*&, shared_ptr<WorldAreaType> const&, BuildMode, int&, int&, int&,
                    int&, decltype(nullptr)>((jag*)&local_60, &local_50, &field_40, &field_8, &field_16, &field_24,
                                             &field_32, (shared_ptr*)CONCAT44(in_register_00000034, param_2),
                                             (BuildMode*)(local_30 + 1), &local_3c, &local_38, &local_34, local_30,
                                             &local_48);
        eastl::vector<shared_ptr<World>, eastl::allocator>::emplace_back<shared_ptr<World>>(
            (vector<shared_ptr<World>, eastl::allocator>*)&field_88, &local_60);
        local_60.~shared_ptr();
        SetActiveWorld(this, iVar1);
    }

    // 0x100461f50, 80 bytes, placed by class name
    // SceneManager::SetActiveWorld(int)
    void SceneManager::SetActiveWorld(int param_1) {
        shared_ptr<World>* this_00;
        World* pWVar1;
        undefined4 uVar2;

        field_120 = param_1;
        if (field_48 != 0) {
            this_00 = (shared_ptr<World>*)GetActiveWorld(this);
            pWVar1 = (World*)shared_ptr<World>::operator->(this_00);
            uVar2 = ((field_48 + 1040))->GetValue();
            pWVar1->SetBrightnessOffset(uVar2);
        }
    }

    // 0x100461fa0, 400 bytes, placed by class name
    // SceneManager::CreateWorldFromRegionData(CoordGrid const&, int, int, shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul, true, eastl::allocator> > const&, BuildMode, bool)
    undefined8 SceneManager::CreateWorldFromRegionData(CoordGrid* param_1, int param_2, int param_3,
                                                       shared_ptr* param_4, undefined4 param_6, char param_7) {
        int iVar1;
        shared_ptr local_a0;
        SceneManager* local_90;
        _func_decltype_nullptr* local_88;
        RT7Core** local_78;
        Js5ResourceProvider** local_70;
        ConfigProvider** local_68;
        PlayerVarDomain** local_60;
        AssetBuilder** local_58;
        undefined8 local_50;
        undefined4 local_44;
        int local_40;
        int local_3c;
        int local_38;
        int local_34;

        local_44 = param_6;
        if (param_7 != '\0') {
            ResetWorlds(this);
        }
        local_50 = (&field_88)->size();
        local_78 = &field_40;
        local_70 = &field_8;
        local_68 = &field_16;
        local_60 = &field_24;
        local_58 = &field_32;
        local_88 = (_func_decltype_nullptr*)0;
        local_90 = this;
        local_40 = param_1->GetMapSquareX();
        local_3c = param_1->GetMapSquareZ();
        local_38 = param_1->GetMapSquareX();
        iVar1 = param_2 + 7;
        if (-1 < param_2) {
            iVar1 = param_2;
        }
        local_38 = (iVar1 >> 3) + local_38;
        local_34 = param_1->GetMapSquareZ();
        iVar1 = param_3 + 7;
        if (-1 < param_3) {
            iVar1 = param_3;
        }
        local_34 = (iVar1 >> 3) + local_34;
        make_shared<
            World, SceneManager*, graphics::RT7Core*&, Js5ResourceProvider*&, ConfigProvider*&, PlayerVarDomain*&,
            AssetBuilder*&, decltype(nullptr), BuildMode&, int, int, int, int,
            shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul,
                                           true, eastl::allocator>> const&>(
            (jag*)&local_a0, &local_90, local_78, local_70, local_68, local_60, local_58, &local_88,
            (BuildMode*)&local_44, &local_40, &local_3c, &local_38, &local_34, param_4);
        eastl::vector<shared_ptr<World>, eastl::allocator>::emplace_back<shared_ptr<World>>(
            (vector<shared_ptr<World>, eastl::allocator>*)&field_88, &local_a0);
        local_a0.~shared_ptr();
        SetActiveWorld(this, (int)local_50);
        return 1;
    }

    // 0x100462260, 64 bytes, placed by class name
    // SceneManager::MainLogic(unsigned int)
    void SceneManager::MainLogic(uint param_1) {
        shared_ptr<World>* this;
        World* this_00;
        uint in_ESI;
        ulong uVar1;
        undefined4 in_register_0000003c;

        uVar1 = (ulong) * (int*)(CONCAT44(in_register_0000003c, param_1) + 120);
        if (uVar1 != 18446744073709551615) {
            this = (shared_ptr<World>*)eastl::vector<shared_ptr<World>, eastl::allocator>::operator[](
                (vector<shared_ptr<World>, eastl::allocator>*)(CONCAT44(in_register_0000003c, param_1) + 88), uVar1);
            this_00 = (World*)shared_ptr<World>::operator->(this);
            this_00->MainLogic(in_ESI);
        }
    }

    // 0x1004622e0, 224 bytes, placed by class name
    // SceneManager::RenderWorldInternal(render::RenderTargets*, unsigned int, ViewTransforms const&, float, float, render::Viewport const&, CoordFine const&, int, int, unsigned int)
    undefined8 SceneManager::RenderWorldInternal(RenderTargets* param_1, uint param_2, ViewTransforms* param_3,
                                                 float param_4, float param_5, Viewport* param_6, CoordFine* param_7,
                                                 int param_8, int param_9, uint param_10) {
        shared_ptr<World>* this_00;
        World* this_01;
        undefined8 uVar1;
        RenderContext* this_02;
        long lVar2;
        ImVec4* this_03;
        ImVec4 local_48[16];

        if ((long)field_120 == 18446744073709551615) {
            this_02 = (RenderContext*)GetRenderContext();
            this_02->SetRenderTargets(param_1);
            this_03 = local_48;
            ImVec4::ImVec4(local_48, 0.0, 0.0, 0.0, 0.0);
            lVar2 = this_03->Instance();
            this_02->SetBlendState((BlendState*)(lVar2 + 1524));
            this_02->ClearRenderTargets(local_48, 1);
            uVar1 = 0;
        } else {
            this_00 = (shared_ptr<World>*)eastl::vector<shared_ptr<World>, eastl::allocator>::operator[](
                (vector<shared_ptr<World>, eastl::allocator>*)&field_88, (long)field_120);
            this_01 = (World*)shared_ptr<World>::operator->(this_00);
            uVar1 = this_01->MainDraw(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9,
                                      param_10);
        }
        return uVar1;
    }

    // 0x1004623c0, 176 bytes, placed by class name
    // SceneManager::BuildWorld(unsigned int, CoordFine const&, eastl::bitset<6ul, unsigned long long> const&, World::LoadingState)
    undefined4 SceneManager::BuildWorld(undefined4 param_1, long param_2, undefined8 param_3, undefined4 param_5) {
        undefined4 uVar2;
        RenderDevice* this_00;
        undefined8 uVar3;
        shared_ptr<World>* this_01;

        if (field_120 == -1) {
            uVar2 = 0;
        } else {
            this_00 = (RenderDevice*)Instance();
            if (this_00->GetReadyState() == 0) {
                this_01 = (shared_ptr<World>*)eastl::vector<shared_ptr<World>, eastl::allocator>::operator[](
                    (vector<shared_ptr<World>, eastl::allocator>*)&field_88, (long)field_120);
                uVar3 = shared_ptr<World>::operator->(this_01);
                uVar2 = World::Build(uVar3, param_1, param_2 + 4, param_3, param_5);
            } else {
                uVar3 = logger::default_logger();
                uVar2 = 0;
                logger::Logger::Log(uVar3, 0, 8,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/scene/SceneManager.cpp",
                                    325, "Skipping world build - render context not ready");
            }
        }
        return uVar2;
    }

    // 0x100462470, 528 bytes, placed by class name
    // SceneManager::RenderWorld(render::RenderTargets*, unsigned int, ViewTransforms const&, float, float, render::Viewport const&, CoordFine const&, int, unsigned int, bool)
    undefined4 SceneManager::RenderWorld(RenderTargets* param_1, uint param_2, ViewTransforms* param_3, float param_4,
                                         float param_5, Viewport* param_6, CoordFine* param_7, int param_8,
                                         uint param_9, bool param_10) {
        char cVar2;
        undefined4 uVar3;
        shared_ptr<World>* psVar4;
        undefined8 uVar5;
        AnimationWrapper* this_00;
        undefined8* puVar6;
        Matrix33T* pMVar7;
        Rect* pRVar8;
        EquirectangularRenderer* this_01;
        vector* pvVar9;
        GraphicsApp* pGVar10;
        World* this_02;
        Matrix44T<float> local_d0[40];
        undefined8 local_a8;
        undefined8 uStack_a0;
        undefined8 local_98;
        undefined8 uStack_90;
        undefined8 local_88;
        undefined8 uStack_80;
        undefined8 local_78;
        undefined8 uStack_70;
        QuaternionT<float> local_68[16];
        Viewport* local_50;
        RenderTargets* local_48;
        float local_3c;
        undefined8 local_38;

        local_38._4_4_ = param_2;
        if ((long)field_120 != 18446744073709551615) {
            local_48 = param_1;
            local_3c = param_5;
            local_38._0_4_ = (SceneManager*)param_4;
            psVar4 = (shared_ptr<World>*)eastl::vector<shared_ptr<World>, eastl::allocator>::operator[](
                (vector<shared_ptr<World>, eastl::allocator>*)&field_88, (long)field_120);
            uVar5 = shared_ptr<World>::operator->(psVar4);
            World::RenderLightProbeEnvMaps(uVar5, local_38._4_4_, 1, 9, 2);
            this_00 = (AnimationWrapper*)shared_ptr<graphics::EquirectangularRenderer>::operator->(
                (shared_ptr<graphics::EquirectangularRenderer>*)&field_176);
            cVar2 = this_00->IsReadyAnim();
            param_1 = local_48;
            param_4 = (float)(SceneManager*)local_38;
            param_5 = local_3c;
            if (cVar2 != '\0') {
                puVar6 = (undefined8*)param_3->GetScreen();
                local_a8 = *puVar6;
                uStack_a0 = puVar6[1];
                local_98 = puVar6[2];
                uStack_90 = puVar6[3];
                local_88 = puVar6[4];
                uStack_80 = puVar6[5];
                local_78 = puVar6[6];
                uStack_70 = puVar6[7];
                local_50 = param_6;
                local_d0->GetRot();
                pMVar7 = (Matrix33T*)local_d0->Transpose();
                math::Matrix33T<float>::operator=((Matrix33T<float>*)local_d0, pMVar7);
                math::QuaternionT<float>::QuaternionT(local_68);
                pRVar8 = (Rect*)local_68->FromRotationMatrix(local_d0);
                math::Rect<float>::operator=((Rect<float>*)local_68, pRVar8);
                this_01 = (EquirectangularRenderer*)shared_ptr<graphics::EquirectangularRenderer>::operator->(
                    (shared_ptr<graphics::EquirectangularRenderer>*)&field_176);
                uVar5 = this_01->GetRenderTargets();
                pGVar10 = (GraphicsApp*)param_3;
                pvVar9 = param_3->SSOBeginPtr(pRVar8);
                pGVar10 = (GraphicsApp*)pGVar10->Instance();
                uVar3 = pGVar10->GetFrameCount();
                param_6 = local_50;
                RenderWorldEnvMap((SceneManager*)local_38, local_3c, this, uVar5, pvVar9, local_68, uVar3, 3,
                                  18446744073709551615, 34069, 6, 1);
                param_1 = local_48;
                param_4 = (float)(SceneManager*)local_38;
                param_5 = local_3c;
            }
        }
        uVar3 = RenderWorldInternal(this, param_1, local_38._4_4_, param_3, param_4, param_5, param_6, param_7, param_8,
                                    -1, param_9);
        if (((char)uVar3 != '\0') && (param_10)) {
            psVar4 = (shared_ptr<World>*)eastl::vector<shared_ptr<World>, eastl::allocator>::operator[](
                (vector<shared_ptr<World>, eastl::allocator>*)&field_88, (long)field_120);
            this_02 = (World*)shared_ptr<World>::operator->(psVar4);
            this_02->UpdatePickableEntities(local_38._4_4_, param_7);
        }
        return uVar3;
    }

    // 0x100462700, 608 bytes, placed by class name
    // SceneManager::RenderWorldEnvMap(render::RenderTargets&, math::Vector3T<float> const&, math::QuaternionT<float> const&, float, float, unsigned int, int, int, render::CubeFace, unsigned int, bool)
    int SceneManager::RenderWorldEnvMap(float param_4, float param_5, SceneManager* this, RenderTargets* param_1,
                                        Vector3T* param_2, QuaternionT* param_3, uint param_6, int param_7, int param_8,
                                        int param_10, int param_11, char param_12) {
        Camera* pCVar1;
        undefined1* this_00;
        char cVar2;
        int iVar3;
        RenderTargets* pRVar4;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_01;
        undefined8* puVar5;
        uint* puVar6;
        int* piVar7;
        EquirectangularRenderer* this_02;
        QuaternionT* pQVar8;
        ulong uVar9;
        int iVar10;
        float fVar11;
        ViewTransforms local_208;
        undefined1 local_130[168];
        undefined1 local_88[40];
        RenderTargets* local_60;
        SceneManager* local_58;
        int local_4c;
        int local_48;
        int local_44;
        uint local_40;
        int local_3c;
        float local_38;
        float local_34;

        local_58 = this;
        local_44 = param_7;
        local_40 = param_6;
        local_38 = param_5;
        local_34 = param_4;
        local_130->CUBEMAP_FACE_CAMERA_ROTATIONS(param_3);
        local_60 = param_1;
        pRVar4 = (RenderTargets*)render::GetEnvMapFaceRT(param_1, 0);
        this_01 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      pRVar4->GetColourTargetTextures();
        puVar5 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](this_01, 0);
        puVar6 = (uint*)(*puVar5)->second();
        pCVar1 = (Camera*)(local_130 + 96);
        jag::Camera::Camera(pCVar1, 0);
        fVar11 = (float)math::Deg2Rad(90.0);
        pCVar1->SetVerticalFov(fVar11);
        pCVar1->SetAspect((float)((ulong)*puVar6 / (ulong)puVar6[1]));
        pCVar1 = (Camera*)(local_130 + 96);
        pCVar1->SetNearClip(local_34);
        pCVar1->SetFarClip(local_38);
        pCVar1->SetPos(param_2);
        new ((local_88 + 24)) CoordFine(0, param_2);
        new (local_88) render::Viewport(0, 0, *puVar6, puVar6[1], 0.0, 1.0);
        new (&local_208) ViewTransforms();
        if (param_10 == -1) {
            iVar10 = 6;
            iVar3 = 0;
        } else {
            iVar3 = render::GetCubeMapFaceIndex();
            local_4c = 6;
            local_48 = param_11 + iVar3;
            piVar7 = std::min<int>(&local_4c, &local_48);
            iVar10 = *piVar7;
        }
        local_3c = iVar10 - iVar3;
        if (local_3c != 0 && iVar3 <= iVar10) {
            this_00 = &local_58->field_176;
            uVar9 = (ulong)iVar3;
            do {
                if (param_12 == '\0') {
                LAB_1004628aa:
                    pQVar8 = (QuaternionT*)std::array<math::QuaternionT<float>, 6ul>::operator[](
                        (array<math::QuaternionT<float>, 6ul>*)local_130, uVar9);
                    ((local_130 + 96))->SetRot(pQVar8);
                    local_208.Set((Camera*)(local_130 + 96));
                    pRVar4 = (RenderTargets*)render::GetEnvMapFaceRT(local_60, (int)uVar9);
                    RenderWorldInternal(local_58, pRVar4, local_40, &local_208, local_34, local_38, (Viewport*)local_88,
                                        (CoordFine*)(local_88 + 24), local_44, param_8, 1);
                } else {
                    this_02 = (EquirectangularRenderer*)shared_ptr<graphics::EquirectangularRenderer>::operator->(
                        (shared_ptr<graphics::EquirectangularRenderer>*)this_00);
                    cVar2 = this_02->GetCubeMapFaceEnabled((int)uVar9);
                    if (cVar2 != '\0')
                        goto LAB_1004628aa;
                }
                uVar9 = uVar9 + 1;
            } while (iVar10 != (int)uVar9);
        }
        ((local_130 + 96))->~Camera();
        return local_3c;
    }

    // 0x1004629e0, 544 bytes, placed by class name
    // SceneManager::RenderWorldEnvMap(render::BufferedRenderTargets&, math::Vector3T<float> const&, math::QuaternionT<float> const&, float, float, unsigned int, int, int, render::CubeFace, unsigned int)
    undefined4 SceneManager::RenderWorldEnvMap(float param_4, float param_5, SceneManager* this,
                                               BufferedRenderTargets* param_1, Vector3T* param_2, QuaternionT* param_3,
                                               uint param_6, int param_7, int param_8, undefined4 param_10,
                                               uint param_11) {
        Camera* pCVar1;
        uint uVar2;
        int iVar3;
        undefined4 uVar4;
        RenderTargets* pRVar5;
        vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>* this_00;
        undefined8* puVar6;
        uint* puVar7;
        QuaternionT* pQVar8;
        int iVar9;
        float fVar10;
        ViewTransforms local_1f8;
        undefined1 local_120[168];
        undefined1 local_78[40];
        BufferedRenderTargets* local_50;
        SceneManager* local_48;
        uint local_40;
        int local_3c;
        float local_38;
        float local_34;

        local_48 = this;
        local_40 = param_6;
        local_3c = param_7;
        local_38 = param_5;
        local_34 = param_4;
        local_120->CUBEMAP_FACE_CAMERA_ROTATIONS(param_3);
        local_50 = param_1;
        pRVar5 = (RenderTargets*)param_1->GetWriteRT();
        this_00 = (vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true, eastl::allocator>>*)
                      pRVar5->GetColourTargetTextures();
        puVar6 = (undefined8*)
            eastl::vector<render::Texture*, eastl::fixed_vector_allocator<8ul, 2ul, 8ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](this_00, 0);
        puVar7 = (uint*)(*puVar6)->second();
        uVar2 = render::GetCubeMapFaceIndex(param_10);
        if (uVar2 < 6) {
            iVar3 = render::GetCubeMapFaceIndex(param_10);
            if (-1 < iVar3) {
                uVar2 = *puVar7;
                pCVar1 = (Camera*)(local_120 + 96);
                jag::Camera::Camera(pCVar1, 0);
                fVar10 = (float)math::Deg2Rad(90.0);
                pCVar1->SetVerticalFov(fVar10);
                iVar9 = (int)((ulong)uVar2 / 6);
                pCVar1->SetAspect((float)(int)(((ulong)uVar2 / 6) / (ulong)puVar7[1]));
                pCVar1 = (Camera*)(local_120 + 96);
                pCVar1->SetNearClip(local_34);
                pCVar1->SetFarClip(local_38);
                pCVar1->SetPos(param_2);
                iVar3 = render::GetCubeMapFaceIndex(param_10);
                pQVar8 = (QuaternionT*)std::array<math::QuaternionT<float>, 6ul>::operator[](
                    (array<math::QuaternionT<float>, 6ul>*)local_120, (long)iVar3);
                ((local_120 + 96))->SetRot(pQVar8);
                new ((local_78 + 24)) CoordFine(0, param_2);
                iVar3 = render::GetCubeMapFaceIndex(param_10);
                new (local_78) render::Viewport(iVar3 * iVar9, 0, iVar9, puVar7[1], 0.0, 1.0);
                new (&local_1f8) ViewTransforms((Camera*)(local_120 + 96));
                pRVar5 = (RenderTargets*)local_50->GetWriteRT();
                uVar4 =
                    RenderWorldInternal(local_48, pRVar5, local_40, &local_1f8, local_34, local_38, (Viewport*)local_78,
                                        (CoordFine*)(local_78 + 24), local_3c, param_8, param_11);
                ((local_120 + 96))->~Camera();
                return uVar4;
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("GetCubeMapFaceIndex(cubeFace) < CUBEFACE_NTYPES && GetCubeMapFaceIndex(cubeFace) >= 0",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                  "SceneManager.cpp",
                  476, (char*)0);
    }

    // 0x100462c10, 256 bytes, placed by class name
    // SceneManager::Preload(unsigned int, shared_ptr<WorldAreaType> const&, CoordGrid const&, eastl::bitset<6ul, unsigned long long> const&)
    void SceneManager::Preload(uint param_1, shared_ptr* param_2, CoordGrid* param_3, bitset* param_4) {
        shared_ptr sVar1;
        uint uVar2;
        shared_ptr<World>* this_00;
        World* this_01;
        shared_ptr* psVar5;
        undefined1 in_stack_ffffffffffffffac[12];
        shared_ptr<oldscape::dash3d::Decor> local_48[16];
        bitset* local_38;

        local_38 = param_4;
        if (field_120 == -1) {
        LAB_100462c84:
            shared_ptr<oldscape::dash3d::Decor>::shared_ptr(local_48, param_2);
            sVar1._4_12_ = in_stack_ffffffffffffffac;
            sVar1._0_4_ = 1;
            CreateWorldFromWorldArea(this, sVar1, (int)local_48, 0, 0, 98, true);
            local_48->~shared_ptr();
        } else {
            this_00 = (shared_ptr<World>*)GetActiveWorld(this);
            this_01 = (World*)shared_ptr<World>::operator->(this_00);
            psVar5 = (shared_ptr*)this_01->GetWorldArea();
            if (operator!=(param_2, psVar5))
                goto LAB_100462c84;
            if (game::CoordGrid::operator!=((CoordGrid*)field_128, param_3) == '\0')
                goto LAB_100462cd4;
        }
        *(uint*)(field_128 + 8) = param_3->field_8;
        uVar2 = param_3->field_4;
        *(uint*)(field_128 + 0) = param_3->field_0;
        *(uint*)(field_128 + 4) = uVar2;
    LAB_100462cd4:
        Load((uint)this, (CoordGrid*)(ulong)param_1, (bitset*)param_3);
    }

    // 0x100462d20, 144 bytes, placed by class name
    // SceneManager::Load(unsigned int, CoordGrid const&, eastl::bitset<6ul, unsigned long long> const&)
    undefined8 SceneManager::Load(uint param_1, CoordGrid* param_2, bitset* param_3) {
        uint uVar1;
        shared_ptr<World>* this;
        undefined8 uVar2;
        undefined4 in_register_0000003c;
        long lVar3;
        ColourHSL local_38;

        lVar3 = CONCAT44(in_register_0000003c, param_1);
        if (*(int*)(lVar3 + 120) == -1) {
            uVar2 = 0;
        } else {
            new (&local_38)
                math::ColourHSL((float)*(uint*)(param_3 + 4) * 128.0, 0.0, (float)*(uint*)(param_3 + 8) * 128.0);
            this = (shared_ptr<World>*)eastl::vector<shared_ptr<World>, eastl::allocator>::operator[](
                (vector<shared_ptr<World>, eastl::allocator>*)(lVar3 + 88), (long)*(int*)(lVar3 + 120));
            uVar1 = shared_ptr<World>::operator->(this);
            uVar2 = World::Preload(uVar1, (Vector3T*)((ulong)param_2 & 4294967295), (bitset*)&local_38);
        }
        return uVar2;
    }

    // 0x100462db0, 16 bytes, placed by class name
    // SceneManager::RefreshPickablesRequired() const
    undefined8 SceneManager::RefreshPickablesRequired() {
        return 0;
    }

    // 0x100462dc0, 48 bytes, placed by class name
    // SceneManager::UpdateEntityHighlightGlobalState(unsigned int)
    void SceneManager::UpdateEntityHighlightGlobalState(uint param_1) {
        float fVar1;

        fVar1 = (float)FrameTime::GetFrameDelta();
        (m_entityHighlightGlobalState, fVar1, param_1)->Update();
    }

    // 0x100462df0, 96 bytes, placed by class name
    // SceneManager::ToggleSphericalCamera()
    void SceneManager::ToggleSphericalCamera() {
        AnimationWrapper* this_00;
        EquirectangularRenderer* this_01;
        EffectManager* pEVar1;
        byte bVar2;

        this_00 = (AnimationWrapper*)shared_ptr<graphics::EquirectangularRenderer>::operator->(
            (shared_ptr<graphics::EquirectangularRenderer>*)&field_176);
        bVar2 = this_00->IsReadyAnim();
        this_01 = (EquirectangularRenderer*)shared_ptr<graphics::EquirectangularRenderer>::operator->(
            (shared_ptr<graphics::EquirectangularRenderer>*)&field_176);
        pEVar1 = (EffectManager*)GetEffectManager(this);
        this_01->SetEnabled((bool)(bVar2 ^ 1), pEVar1);
    }

    // 0x100462e50, 32 bytes, placed by class name
    // SceneManager::IsSphericalCameraEnabled()
    void SceneManager::IsSphericalCameraEnabled() {
        AnimationWrapper* this_00;

        this_00 = (AnimationWrapper*)shared_ptr<graphics::EquirectangularRenderer>::operator->(
            (shared_ptr<graphics::EquirectangularRenderer>*)&field_176);
        this_00->IsReadyAnim();
    }

    // 0x100462e70, 1456 bytes, placed by class name
    // SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)
    void SceneManager::RegisterTweakyMenus(ContainerGroup* param_1) {
        Container* pCVar1;
        char* pcVar2;
        EffectManager* pEVar3;
        EquirectangularRenderer* this_00;
        shared_ptr<tweak::Container> local_b0[16];
        allocator local_a0[8];
        allocator local_98[16];
        shared_ptr<tweak::Container> local_88[16];
        shared_ptr<tweak::Container> local_78[16];
        float* local_68[7];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::allocator::allocator(local_98, "EASTL basic_string");
        new (local_68) eastl::string("World", local_98);
        (*(code*)param_1->field_0[30])(local_78, param_1, (eastl::string*)local_68);
        local_68->~basic_string();
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_78);
        local_68[0] = (float*)&World::m_showMinLevel;
        tweak::Container::AddSlider<float>(pCVar1, "Show Min Level", 0.0, 3.0, 1.0, local_68);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_78);
        local_68[0] = (float*)&World::m_showMaxLevel;
        tweak::Container::AddSlider<float>(pCVar1, "Show Max Level", 0.0, 3.0, 1.0, local_68);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_78);
        pCVar1->AddCheckBox("Show Lights", (bool*)&World::m_showPointLights);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_78);
        pCVar1->AddCheckBox("Show Occluded Lights", (bool*)&World::m_showOccludedPointLights);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_78);
        std::function<void(tweak::Event_const&)>::function<
            SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::__0, void>((function*)local_68);
        pCVar1->AddEditField("Isolate Point Light", 100, local_68);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_68);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_78);
        pCVar1->AddCheckBox("Show Height Map Floor", (bool*)&World::m_showHeightMap);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_78);
        pCVar1->AddCheckBox("Show Height Map Rest", (bool*)&World::m_showHeightMapRest);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_78);
        pCVar1->AddCheckBox("Show Water Heights", (bool*)&World::m_showWaterHeights);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_78);
        pCVar1->AddCheckBox("Show Remove Roof", (bool*)&World::m_debugRemoveRoof);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_78);
        pCVar1->AddCheckBox("Show Remove Roof Labels", (bool*)&World::m_debugRemoveRoofLabels);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_78);
        pCVar1->AddCheckBox("Show Picking", (bool*)&World::m_debugPicking);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_78);
        pCVar1->AddCheckBox("Always Use Accurate Picking",
                            (bool*)&graphics::PickingHelper::m_debugAlwaysUseAccuratePicking);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_78);
        pCVar1->AddCheckBox("Show Camera Frustum", (bool*)&SceneRenderManager::m_showCameraFrustum);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_78);
        std::function<void(tweak::Event_const&)>::function<
            SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::__1, void>((function*)local_68, this);
        pCVar1->AddButton("Rebuild light indices", local_68);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_68);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_78);
        std::function<void(tweak::Event_const&)>::function<
            SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::__2, void>((function*)local_68, this);
        pCVar1->AddCheckBox("Enable impostors", local_68, false);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_68);
        pcVar2 = (char*)shared_ptr<tweak::Container>::operator->(local_78);
        local_98->AddGroup(pcVar2);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_98);
        pCVar1->AddCheckBox("Show Floor Grid", (bool*)&World::m_showFloorGrid);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->((shared_ptr<tweak::Container>*)local_98);
        pCVar1->AddCheckBox("Use Water Heights", (bool*)&World::m_showFloorGridUseWaterHeight);
        pcVar2 = (char*)shared_ptr<tweak::Container>::operator->(local_78);
        local_88->AddGroup(pcVar2);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_88);
        std::function<void(tweak::Event_const&)>::function<
            SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::__3, void>((function*)local_68, this);
        pCVar1->AddEditField("Parent Location ID", 100, local_68);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_68);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_88);
        std::function<void(tweak::Event_const&)>::function<
            SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::__4, void>((function*)local_68, this);
        pCVar1->AddEditField("Desired Multi-Loc State", 100, local_68);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_68);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_88);
        std::function<void(tweak::Event_const&)>::function<
            SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::__5, void>((function*)local_68, this);
        pCVar1->AddButton("Increment specific Multi-Loc Index", local_68);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_68);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator->(local_88);
        std::function<void(tweak::Event_const&)>::function<
            SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::__6, void>((function*)local_68, this);
        pCVar1->AddButton("Increment all Multi-Loc Indices", local_68);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_68);
        pEVar3 = (EffectManager*)field_40->GetEffectManager();
        pEVar3->InitialiseTweakVars(param_1);
        eastl::allocator::allocator(local_a0, "EASTL basic_string");
        new (local_68) eastl::string("Rendering", local_a0);
        (*(code*)param_1->field_0[30])(local_b0, param_1, local_68);
        local_68->~basic_string();
        this_00 = (EquirectangularRenderer*)shared_ptr<graphics::EquirectangularRenderer>::operator->(
            (shared_ptr<graphics::EquirectangularRenderer>*)&field_176);
        pCVar1 = (Container*)shared_ptr<tweak::Container>::operator*(local_b0);
        pEVar3 = (EffectManager*)GetEffectManager(this);
        this_00->RegisterTweakVars(pCVar1, pEVar3);
        RegisterIrradianceTweakVars(this, param_1);
        local_b0->~shared_ptr();
        local_88->~shared_ptr();
        local_98->~shared_ptr();
        local_78->~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100463490, 832 bytes, placed by class name
    // SceneManager::RegisterIrradianceTweakVars(tweak::ContainerGroup&)
    void SceneManager::RegisterIrradianceTweakVars(ContainerGroup* param_1) {
        EffectManager* pEVar1;
        Container* pCVar2;
        undefined1 local_c0[24];
        undefined1 local_a8[24];
        undefined8 local_90;
        code* local_88;
        shared_ptr<tweak::Container> local_80[23];
        EffectType local_69;
        float* local_68[7];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (&local_88) eastl::allocator("EASTL basic_string");
        new (local_68) eastl::string("Lighting", (allocator*)&local_88);
        (*(code*)param_1->field_0[30])(local_80, param_1, (eastl::string*)local_68);
        local_68->~basic_string();
        pEVar1 = (EffectManager*)GetEffectManager(this);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        pCVar2->AddCheckBox("Force shadows on for point lights", (bool*)&StaticPointLight::m_forceShadowsOn);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        local_88 = graphics::Tweaky_LambdaToggleEffect;
        local_90 = std::ref<graphics::EffectManager>(pEVar1);
        local_69 = 21;
        std::bind<void (*)(graphics::EffectManager&, tweak::Event_const&, graphics::EffectType_const&),
                  std::reference_wrapper<graphics::EffectManager>, std::placeholders::__ph<1> const&,
                  graphics::EffectType>((_func_void_EffectManager_ptr_Event_ptr_EffectType_ptr*)local_c0,
                                        (reference_wrapper*)&local_88, (__ph*)&local_90, &local_69);
        std::function<void(tweak::Event_const&)>::function<
            std::__bind<void (*)(graphics::EffectManager&, tweak::Event_const&, graphics::EffectType_const&),
                        std::reference_wrapper<graphics::EffectManager>, std::placeholders::__ph<1> const&,
                        graphics::EffectType>,
            void>(local_68);
        pCVar2->AddCheckBox("Irradiance", local_68, false);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_68);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        local_88 = graphics::Tweaky_LambdaToggleEffect;
        local_90 = std::ref<graphics::EffectManager>(pEVar1);
        local_69 = 40;
        std::bind<void (*)(graphics::EffectManager&, tweak::Event_const&, graphics::EffectType_const&),
                  std::reference_wrapper<graphics::EffectManager>, std::placeholders::__ph<1> const&,
                  graphics::EffectType>((_func_void_EffectManager_ptr_Event_ptr_EffectType_ptr*)local_a8,
                                        (reference_wrapper*)&local_88, (__ph*)&local_90, &local_69);
        std::function<void(tweak::Event_const&)>::function<
            std::__bind<void (*)(graphics::EffectManager&, tweak::Event_const&, graphics::EffectType_const&),
                        std::reference_wrapper<graphics::EffectManager>, std::placeholders::__ph<1> const&,
                        graphics::EffectType>,
            void>(local_68);
        pCVar2->AddCheckBox("Soft Disable Irradiance", local_68, false);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_68);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        std::function<void(tweak::Event_const&)>::function<
            SceneManager::RegisterIrradianceTweakVars(tweak::ContainerGroup&)::__7, void>((function*)local_68, this);
        pCVar2->AddButton("Reload Light Probes", local_68);
        std::function<void(tweak::Event_const&)>::~function((function<void(tweak::Event_const&)>*)local_68);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        pCVar2->AddCheckBox("Enable fast resource recycling",
                            (bool*)&graphics::LightProbeRenderer::m_enableResourceRecycling);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        pCVar2->AddEnum("Show LightProbes", (StringEnum*)&graphics::LightProbe::m_LightProbeRenderModes,
                        &graphics::LightProbe::m_LightProbeRenderMode);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        pCVar2->AddCheckBox("Enable lightprobe overbright override",
                            (bool*)&LightProbeManager::m_skyBoxOverbrightDefaultOverrideAll);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        local_68[0] = (float*)&LightProbeManager::m_skyBoxOverbrightDefaultValue;
        tweak::Container::AddSlider<float>(pCVar2, "Lightprobe overbright", 0.0, 1.0, 0.05, local_68);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        pCVar2->AddCheckBox("Show Default Environment Map", (bool*)&World::m_showDefaultEnvironmentMap);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        pCVar2->AddCheckBox("Show Current Environment Map", (bool*)&World::m_showCurrentEnvironmentMap);
        pCVar2 = (Container*)shared_ptr<tweak::Container>::operator->(local_80);
        pCVar2->AddCheckBox("Show Current Sky Box Map", (bool*)&World::m_showCurrentSkyBoxMap);
        local_80->~shared_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x100463820, 80 bytes, placed by class name
    // SceneManager::ReloadLightProbes()
    void SceneManager::ReloadLightProbes() {
        shared_ptr* this_00;
        shared_ptr<World>* this_01;
        World* this_02;
        LightProbeManager* this_03;

        ((m_entityHighlightGlobalState + 48))->clear();
        this_00 = (shared_ptr*)GetActiveWorld(this);
        if (shared_ptr::operator_cast_to_bool(this_00)) {
            this_01 = (shared_ptr<World>*)GetActiveWorld(this);
            this_02 = (World*)shared_ptr<World>::operator->(this_01);
            this_03 = (LightProbeManager*)this_02->GetLightProbeManager();
            this_03->AddAllExistingMapSquaresToUpdateList();
        }
    }

    // 0x100463870, 160 bytes, placed by class name
    // SceneManager::NotifyShadowQualityChanged()
    void SceneManager::NotifyShadowQualityChanged() {
        bool bVar1;
        shared_ptr* this_00;
        World* pWVar2;
        function<void(shared_ptr<MapSquare>&)> local_58[56];
        long local_20;

        local_20 = *(long*)PTR____stack_chk_guard_100ee9d98;
        graphics::PointLightSMManager::m_ClearShadowMapDepthAtlas = 1;
        this_00 = (shared_ptr*)GetActiveWorld(this);
        bVar1 = shared_ptr::operator_cast_to_bool(this_00);
        if (bVar1) {
            pWVar2 = (World*)shared_ptr<World>::operator->((shared_ptr<World>*)this_00);
            std::function<void(shared_ptr<MapSquare>&)>::function<SceneManager::NotifyShadowQualityChanged()::__8,
                                                                  void>(local_58);
            pWVar2->OnAllMapSquares(local_58);
            std::function<void(shared_ptr<MapSquare>&)>::~function(local_58);
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_20) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10046e2e0, 272 bytes, placed by class name
    // SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::$_0::operator()(tweak::Event const&) const
    /* SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::$_0::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const */

    void SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::$_0::operator()(Event* param_1) {
        int iVar1;
        long* plVar2;
        char* pcVar3;
        eastl::string local_88[32];
        allocator local_68[8];
        int local_60[14];
        long local_28;

        local_28 = *(long*)PTR____stack_chk_guard_100ee9d98;
        plVar2 = (long*)end();
        iVar1 = LightSource::m_debugIsolatedPointLight;
        if (*(int*)(this + 16) == 1) {
            new (local_60) eastl::fixed_string<char, 16, true, eastl::allocator>();
            ToText<16, true>((fixed_string*)local_60, iVar1, 10);
            pcVar3 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            eastl::allocator::allocator(local_68, "EASTL basic_string");
            eastl::string::basic_string(local_88, pcVar3, local_68);
            (**(code**)(*plVar2 + 144))(plVar2, local_88);
            eastl::string::~basic_string(local_88);
            /* WARNING: Subroutine does not return */
            local_60->~fixed_string();
        }
        pcVar3 = (char*)(**(code**)(*plVar2 + 136))(plVar2);
        FromText<int>(pcVar3, local_60);
        LightSource::m_debugIsolatedPointLight = local_60[0];
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_28) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x10046ecd0, 80 bytes, placed by class name
    // SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::$_1::operator()(tweak::Event const&) const
    /* SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::$_1::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const */

    void SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::$_1::operator()(Event* param_1) {
        long lVar1;
        shared_ptr<World>* this_00;
        shared_ptr<World>* psVar2;
        World* this_01;

        if (param_1->field_16 == 2) {
            lVar1 = *(long*)this;
            this_00 = (shared_ptr<World>*)((lVar1 + 88))->HeapBeginPtr();
            psVar2 = (shared_ptr<World>*)((lVar1 + 88))->end();
            for (; this_00 != psVar2; this_00 = this_00 + 16) {
                this_01 = (World*)shared_ptr<World>::operator->(this_00);
                this_01->RebuildLightIndices();
            }
        }
    }

    // 0x10046f610, 176 bytes, placed by class name
    // SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::$_2::operator()(tweak::Event const&) const
    /* SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::$_2::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const */

    void SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::$_2::operator()(Event* param_1) {
        long lVar1;
        undefined1 uVar2;
        long* plVar4;
        shared_ptr* this_00;
        shared_ptr* psVar5;
        World* this_01;

        if (param_1->field_16 == 3) {
            lVar1 = *(long*)this;
            plVar4 = (long*)shared_ptr<tweak::Control>::operator->((shared_ptr<tweak::Control>*)param_1);
            uVar2 = (**(code**)(*plVar4 + 120))(plVar4);
            *PTR_m_enableImpostors_100ee6648 = uVar2;
            this_00 = (shared_ptr*)((lVar1 + 88))->HeapBeginPtr();
            psVar5 = (shared_ptr*)((lVar1 + 88))->end();
            for (; this_00 != psVar5; this_00 = this_00 + 1) {
                if (shared_ptr::operator_cast_to_bool(this_00)) {
                    this_01 = (World*)shared_ptr<World>::operator->((shared_ptr<World>*)this_00);
                    this_01->DestructImpostorMapSquares();
                }
            }
        } else if (param_1->field_16 == 1) {
            plVar4 = (long*)shared_ptr<tweak::Control>::operator->((shared_ptr<tweak::Control>*)param_1);
            (**(code**)(*plVar4 + 128))(plVar4, *PTR_m_enableImpostors_100ee6648);
        }
    }

    // 0x10046ffb0, 80 bytes, placed by class name
    // SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::$_3::operator()(tweak::Event const&) const
    /* SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::$_3::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const */

    void SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::$_3::operator()(Event* param_1) {
        long lVar1;
        long* plVar2;
        char* pcVar3;
        int local_1c;

        lVar1 = *(long*)this;
        plVar2 = (long*)param_1->end();
        if (param_1->field_16 == 3) {
            pcVar3 = (char*)(**(code**)(*plVar2 + 136))(plVar2);
            FromText<int>(pcVar3, &local_1c);
            *(int*)(lVar1 + 340) = local_1c;
        }
    }

    // 0x1004708f0, 160 bytes, placed by class name
    // SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::$_4::operator()(tweak::Event const&) const
    /* SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::$_4::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const */

    void SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::$_4::operator()(Event* param_1) {
        Layout* this_00;
        long lVar1;
        char* pcVar2;
        World* this_01;
        uint7 in_register_00000001;
        long* plVar4;
        shared_ptr* psVar5;
        shared_ptr* this_02;
        undefined8 uStack_28;

        uStack_28 = (ulong)in_register_00000001 << 8;
        lVar1 = *(long*)this;
        plVar4 = (long*)param_1->end();
        if (param_1->field_16 == 3) {
            pcVar2 = (char*)(**(code**)(*plVar4 + 136))(plVar4);
            FromText<int>(pcVar2, (int*)((long)&uStack_28 + 4));
            this_00 = (Layout*)(lVar1 + 88);
            this_02 = (shared_ptr*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_00);
            psVar5 = (shared_ptr*)this_00->end();
            for (; this_02 != psVar5; this_02 = this_02 + 1) {
                if (shared_ptr::operator_cast_to_bool(this_02)) {
                    this_01 = (World*)shared_ptr<World>::operator->((shared_ptr<World>*)this_02);
                    this_01->SetMultiLocState(*(int*)(lVar1 + 340), uStack_28._4_4_);
                }
            }
        }
    }

    // 0x100471280, 128 bytes, placed by class name
    // SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::$_5::operator()(tweak::Event const&) const
    /* SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::$_5::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const */

    void SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::$_5::operator()(Event* param_1) {
        long lVar1;
        int iVar2;
        shared_ptr* psVar4;
        shared_ptr* this_00;

        if (param_1->field_16 == 2) {
            lVar1 = *(long*)this;
            this_00 = (shared_ptr*)((lVar1 + 88))->HeapBeginPtr();
            psVar4 = (shared_ptr*)((lVar1 + 88))->end();
            for (; this_00 != psVar4; this_00 = this_00 + 1) {
                if (shared_ptr::operator_cast_to_bool(this_00)) {
                    iVar2 = shared_ptr<World>::operator->((shared_ptr<World>*)this_00);
                    World::IncrementMultiLocState(iVar2);
                }
            }
        }
    }

    // 0x100471bf0, 80 bytes, placed by class name
    // SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::$_6::operator()(tweak::Event const&) const
    /* SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::$_6::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const */

    void SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::$_6::operator()(Event* param_1) {
        long lVar1;
        shared_ptr<World>* this_00;
        shared_ptr<World>* psVar2;
        World* this_01;

        if (param_1->field_16 == 2) {
            lVar1 = *(long*)this;
            this_00 = (shared_ptr<World>*)((lVar1 + 88))->HeapBeginPtr();
            psVar2 = (shared_ptr<World>*)((lVar1 + 88))->end();
            for (; this_00 != psVar2; this_00 = this_00 + 16) {
                this_01 = (World*)shared_ptr<World>::operator->(this_00);
                this_01->IncrementAllMultiLocStates();
            }
        }
    }

    // 0x100472f80, 32 bytes, placed by class name
    // SceneManager::RegisterIrradianceTweakVars(tweak::ContainerGroup&)::$_7::operator()(tweak::Event const&) const
    /* SceneManager::RegisterIrradianceTweakVars(tweak::ContainerGroup&)::$_7::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const */

    void SceneManager::RegisterIrradianceTweakVars(tweak::ContainerGroup&)::$_7::operator()(Event* param_1) {
        if (param_1->field_16 == 2) {
            ReloadLightProbes(*(SceneManager**)this);
        }
    }

} // namespace jag::game

// 0x100472590, 32 bytes, placed by neighbouring functions
// decltype ((static_cast<void (*&std::__invoke<void (*&)(jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType const&), jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType&>(void (*&)(jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType const&), jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType&))(jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType const&)>({parm#1}))(static_cast<jag::graphics::EffectManager&>({parm#2}), static_cast<jag::tweak::Event const&>({parm#2}), static_cast<jag::graphics::EffectType&>({parm#2})))
void __ZNSt3__1L8__invokeIRPFvRN3jag8graphics13EffectManagerERKNS1_5tweak5EventERKNS2_10EffectTypeEEJS4_S8_RS9_EEEDTclscT_fp_spscT0_fp0_EEOSG_DpOSH_(
    undefined8* param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
    (*(code*)*param_1)(param_2, param_3, param_4);
}
