// libs/game/runetek5/scene/SceneManager.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

#include "SceneManager.h"

namespace jag::game {
    // 0x1000b7910: SceneManager::GetMapAreaList() has the same machine code as oldscape::minimenu::MinimenuEntry::GetSubjectName() const

    // 0x10016ea80: SceneManager::GetIrradianceCache() has the same machine code as oldscape::minimenu::Minimenu::GetPlayerOps() const

    // 0x100396010: SceneManager::GetEntityHighlightGlobalState() has the same machine code as oldscape::auth::SteamAuthLibWrapper::GetGameToken()

    // 0x100460f60
    SceneManager::SceneManager(Js5ResourceProvider* js5ResourceProvider, graphics::RT7Core* rt7Core,
                               ConfigProvider* configProvider, PlayerVarDomain* playerVarDomain,
                               AssetBuilder* assetBuilder)
        : graphics::ParticleManagerHeightProvider(), field_8(js5ResourceProvider), field_16(configProvider),
          field_24(playerVarDomain) {
        Array<Js5ArchiveSettings*> local_d0[24];
        ReturnValue local_68;

        field_32 = (AssetBuilder*)(RT7Core*)assetBuilder;
        field_40 = rt7Core;
        field_48 = 0;
        uint8_t* local_98 = &field_56;
        new (local_98) MapAreaList(js5ResourceProvider);
        uint8_t* local_90 = &field_88;
        new (local_90) eastl::vector<shared_ptr<World>>();
        field_120 = -1;
        field_124 = -1;
        new (field_128) game::CoordGrid();
        new ((field_128 + 12)) shared_ptr();
        &field_160->unique_ptr<true, void>();
        m_freshEnvironmentOverride = false;
        shared_ptr<graphics::EquirectangularRenderer>* local_70 =
            (shared_ptr<graphics::EquirectangularRenderer>*)&field_176;
        new (local_70) shared_ptr();
        new (m_entityHighlightGlobalState) EntityHighlightGlobalState();
        hash_multimap<unsigned long, MapSquareEnvIrradianceInfo>* local_80 =
            (hash_multimap<unsigned long, MapSquareEnvIrradianceInfo>*)(m_entityHighlightGlobalState + 48);
        new (local_80) eastl::hash_multimap<unsigned long, MapSquareEnvIrradianceInfo>(local_68);
        field_296 = 0;
        field_300 = 2;
        new (&field_304) Array<Js5ArchiveSettings*>();
        field_328 = 0;
        field_332 = 0;
        field_340 = 0;
        new (&field_344) math::Vector2T();
        if ((((js5ResourceProvider == nullptr) || (rt7Core == nullptr)) || (configProvider == nullptr)) ||
            ((RT7Core*)assetBuilder == nullptr)) {
            LogAssert("resourceProvider != nullptr && rt7Core != nullptr && configProvider != nullptr && assetBuilder "
                      "!= nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "SceneManager.cpp",
                      48, nullptr);
        }
        local_68[0] = Js5Archive::JS5_CONFIG_LOC;
        local_68[1] = (ReturnValue)Js5Archive::JS5_MAPS;
        local_68[2] = (ReturnValue)Js5Archive::JS5_MODELSRT7;
        local_68[3] = (ReturnValue)Js5Archive::JS5_MATERIALS;
        local_68[4] = (ReturnValue)Js5Archive::JS5_CONFIG_BILLBOARD;
        local_68[5] = (ReturnValue)Js5Archive::JS5_CONFIG_PARTICLE;
        AssetBuilder* local_b0 = (AssetBuilder*)6;
        new (local_d0) Array<Js5ArchiveSettings*>(&local_68);
        field_304 = *local_d0;
        SceneManager* this_01 = (SceneManager*)local_d0;
        this_01->~Array();
        CreateRenderingResources(this_01);
        ((ParticleManager*)rt7Core->GetParticleManager())->SetHeightProvider(this);
        make_shared<graphics::EquirectangularRenderer, graphics::RT7Core*&>(&local_68, &field_40);
        *local_70 = local_68;
    }

    // 0x100461330
    void SceneManager::CreateRenderingResources() {
        long lVar1 = ((MapArea*)Instance())->GetOrigin();
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

    // 0x1004615f0
    SceneManager::~SceneManager() {
        DestroyRenderingResources();
        ResetWorlds();
        field_304.~Array();
        ((m_entityHighlightGlobalState + 48))->~hash_multimap();
        field_176.~shared_ptr();
        field_160.~unique_ptr();
        field_88.~vector();
        field_56.~MapAreaList();
    }

    // 0x1004616b0
    void SceneManager::DestroyRenderingResources() {
        long* plVar2;

        auto this_00 = field_88.HeapBeginPtr();
        auto psVar1 = field_88.end();
        for (; this_00 != psVar1; this_00 = this_00 + 16) {
            plVar2 = (long*)(*this_00).operator->();
            (**(void (**)(...))(*plVar2 + 8))(plVar2);
        }
    }

    // 0x100461700
    void SceneManager::ResetWorlds() {
        int iVar3;
        Logger* pLVar4;
        long lVar5;
        shared_ptr local_100;
        LogStream local_c8;

        uint8_t* this_00 = &field_88;
        auto groundDecor = this_00->HeapBeginPtr();
        vector<shared_ptr<oldscape::rseven::Terrain>>* local_e0 =
            (vector<shared_ptr<oldscape::rseven::Terrain>>*)this_00;
        auto local_f0 = this_00->end();
        if (groundDecor != local_f0) {
            do {
                local_d8 = weak_ptr(*groundDecor);
                ((World*)(*groundDecor).operator->())->Clear();
                groundDecor->reset();
                local_100 = local_d8.lock();
                if (shared_ptr::operator_cast_to_bool(&local_100) != '\0') {
                    pLVar4 = logger::default_logger();
                    local_c8 = logger::LogStream(LOGGER_SCENE);
                    iVar3 = local_100.use_count();
                    ((uint8_t)pLVar4)
                        ->Log(nullptr, (LogLevel)&local_c8, 3, 14435899, 135,
                              "%d World references are still being held on reset - check for orphan Entities.",
                              iVar3 - 1);
                    lVar5 = local_100.operator->();
                    ((lVar5 + 8))->~AutoSingleton();
                    LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/"
                                    "runetek5/scene/SceneManager.cpp",
                                    140, nullptr);
                }
                groundDecor = groundDecor + 16;
            } while (groundDecor != local_f0);
        }
        local_e0->clear();
        field_120 = -1;
        field_124 = -1;
        LocationData local_d8(-1, 0, 0);
        *(int*)(field_128 + 8) = local_d8.field_8;
        *(WaterNormalParamsEncoding*)(field_128 + 0) = local_d8.field_0;
        *(WaterNormalParamGroup*)(field_128 + 4) = local_d8.field_4;
    }

    // 0x100461940
    unsigned long SceneManager::GetLevelHeights(std::array<int, 5ul>& arg1,
                                                const math::Vector3T<float>& vector3) const {
        int iVar2;
        int iVar3;
        World* this_00;
        unsigned long uVar5;
        MapSquare* this_01;
        int* piVar6;
        uint8_t local_50[31];
        char local_31;

        auto psVar4 = GetActiveWorld();
        if (shared_ptr::operator_cast_to_bool(psVar4) != '\0') {
            new (local_50) CoordFine(0, vector3);
            this_00 = (World*)(*psVar4).operator->();
            iVar2 = local_50->GetMapSquareX();
            iVar3 = local_50->GetMapSquareZ();
            psVar4 = (shared_ptr*)this_00->GetMapSquare(iVar2, iVar3);
            uVar5 = shared_ptr::operator_cast_to_bool(psVar4);
            local_31 = (char)uVar5;
            if (local_31 != '\0') {
                local_50._16_8_ = psVar4;
                iVar2 = local_50->GetLocalX();
                iVar3 = local_50->GetLocalZ();
                uVar5 = 0;
                do {
                    this_01 = (MapSquare*)(*local_50._16_8_).operator->();
                    piVar6 = &arg1[uVar5];
                    this_01->GetFineHeight(*piVar6, (int)uVar5, iVar2 << 7 | 64, iVar3 << 7 | 64, false, 0);
                    uVar5 = uVar5 + 1;
                } while (uVar5 != 4);
                piVar6 = &arg1[3];
                iVar2 = *piVar6;
                piVar6 = &arg1[4];
                *piVar6 = iVar2 + 1024;
                piVar6 = &arg1[0];
                uVar5 = (((uint64_t)((int64_t)((unsigned long)piVar6 >> 8)) << 8) | (uint8_t)(*piVar6 != -1));
            }
            if (local_31 != '\0')
                goto LAB_100461a7b;
        }
        uVar5 = 0;
    LAB_100461a7b:
        return uVar5 & 18446744073709551361;
    }

    // 0x100461a90
    uint8_t* SceneManager::GetActiveWorld() const {
        if ((long)field_120 == 18446744073709551615) {
            return &World::NullWorld;
        }
        return (uint8_t*)field_88[(long)field_120];
    }

    // 0x100461ad0
    bool SceneManager::ShouldUpdateLevelHeights(const math::Vector3T<float>& vector31,
                                                const math::Vector3T<float>& vector32) const {
        bool bVar1 = true;
        if (((int)(*(float*)vector31 * 0.0078125f) == (int)(*(float*)vector32 * 0.0078125f)) &&
            ((int)(*(float*)(vector31 + 8) * 0.0078125f) == (int)(*(float*)(vector32 + 8) * 0.0078125f))) {
            bVar1 = (int)(*(float*)(vector31 + 4) * 0.015625f) != (int)(*(float*)(vector32 + 4) * 0.015625f);
        }
        return bVar1;
    }

    // 0x100461b40
    void SceneManager::RemoveTemporaryWorlds() {
        int iVar1;
        World* pWVar4;
        int iVar5;

        uint8_t* this_00 = &field_88;
        auto this_01 = this_00->HeapBeginPtr();
        auto psVar3 = this_00->end();
        if (this_01 != psVar3) {
            iVar5 = 0;
            do {
                pWVar4 = (World*)(*this_01).operator->();
                if (pWVar4->GetTemporaryMap() == '\0') {
                    this_01 = this_01 + 16;
                } else {
                    pWVar4 = (World*)(*this_01).operator->();
                    pWVar4->Clear();
                    this_00->erase(this_01);
                    if (iVar5 <= field_120) {
                        field_120 = field_120 - 1;
                    }
                    iVar1 = field_124;
                    if ((iVar1 != -1) && (iVar5 <= iVar1)) {
                        field_124 = iVar1 - 1;
                    }
                }
                iVar5 = iVar5 + 1;
                psVar3 = (shared_ptr<World>*)this_00->end();
            } while (this_01 != psVar3);
        }
    }

    // 0x100461c60
    void SceneManager::StoreCurrentActiveWorld() {
        if (field_124 != -1) {
            LogAssert("m_storedActiveWorld == -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "SceneManager.cpp",
                      179, "SceneMananger.storeCurrentActiveWorld - Cannot store active world when already stored");
        }
        field_124 = field_120;
    }

    // 0x100461ca0
    void SceneManager::RestoreCurrentActiveWorld() {
        if (field_124 == -1) {
            LogAssert("m_storedActiveWorld != -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "SceneManager.cpp",
                      185, "SceneMananger.restoreCurrentActiveWorld - Cannot restore active world when none is stored");
        }
        field_120 = field_124;
        field_124 = -1;
    }

    // 0x100461cf0
    void SceneManager::CreateWorldFromWorldArea(shared_ptr<WorldAreaType> worldAreaType, int arg2, int arg3, int arg4,
                                                int arg5, bool arg6) {
        uint32_t in_register_00000034;
        uint64_t in_register_00000089;
        char in_stack_00000008;
        shared_ptr<World> local_60;

        uint32_t local_30 = (uint32_t)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg6);
        int local_3c = arg3;
        int local_38 = arg4;
        int local_34 = arg5;
        if (in_stack_00000008 != '\0') {
            ResetWorlds((SceneManager*)worldAreaType);
        }
        int arg1 = ((worldAreaType + 88))->size();
        int local_2c = 3;
        uint64_t local_48 = 0;
        RT7Core* local_50 = (RT7Core*)worldAreaType;
        make_shared<World, SceneManager*, graphics::RT7Core*&, Js5ResourceProvider*&, ConfigProvider*&,
                    PlayerVarDomain*&, AssetBuilder*&, shared_ptr<WorldAreaType> const&, BuildMode, int&, int&, int&,
                    int&, decltype(nullptr)>(
            (SceneManager**)&local_60, &local_50, (Js5ResourceProvider**)(worldAreaType + 40),
            (ConfigProvider**)(worldAreaType + 8), (PlayerVarDomain**)(worldAreaType + 16),
            (AssetBuilder**)(worldAreaType + 24), worldAreaType + 32,
            (BuildMode*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2), &local_2c, &local_3c, &local_38,
            &local_34, (void**)&local_30);
        ((worldAreaType + 88))->emplace_back<shared_ptr<World>>(local_60);
        SetActiveWorld((SceneManager*)worldAreaType, arg1);
    }

    // 0x100461f50
    void SceneManager::SetActiveWorld(int arg1) {
        shared_ptr<World>* this_00;

        field_120 = arg1;
        if (field_48 != 0) {
            this_00 = (shared_ptr<World>*)GetActiveWorld();
            ((World*)(*this_00).operator->())->SetBrightnessOffset(((field_48 + 1040))->GetValue());
        }
    }

    // 0x100461fa0
    void SceneManager::CreateWorldFromRegionData(
        const CoordGrid& coordGrid, int arg2, int arg3,
        const shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>& arg4, BuildMode buildMode,
        bool arg6) {
        uint32_t in_register_00000034;
        uint32_t in_register_00000084;
        uint64_t in_register_00000089;
        char in_stack_00000008;
        shared_ptr<World> local_a0;
        BuildMode local_88;

        uint64_t local_80 = (((uint64_t)in_register_00000084 << 32) | (uint32_t)buildMode);
        CoordGrid coordGrid = (CoordGrid*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)arg2);
        int local_44 = (int)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg6);
        if (in_stack_00000008 != '\0') {
            ResetWorlds((SceneManager*)coordGrid);
        }
        uint64_t local_50 = coordGrid[5].field_8.size();
        unsigned int* local_78 = &coordGrid[2].field_8;
        unsigned int* local_70 = &coordGrid.field_8;
        CoordGrid* local_68 = coordGrid + 1;
        unsigned int* local_60 = &coordGrid[1].field_8;
        CoordGrid* local_58 = coordGrid + 2;
        local_88[0] = 0;
        local_88[1] = 0;
        RT7Core* local_90 = (RT7Core*)coordGrid;
        int local_40 = coordGrid.GetMapSquareX();
        int local_3c = coordGrid.GetMapSquareZ();
        int local_38 = coordGrid.GetMapSquareX();
        int iVar1 = arg3 + 7;
        if (-1 < arg3) {
            iVar1 = arg3;
        }
        local_38 = (iVar1 >> 3) + local_38;
        int local_34 = coordGrid.GetMapSquareZ();
        iVar1 = (int)arg4;
        int iVar2 = iVar1 + 7;
        if (-1 < iVar1) {
            iVar2 = iVar1;
        }
        local_34 = (iVar2 >> 3) + local_34;
        make_shared<World, SceneManager*, graphics::RT7Core*&, Js5ResourceProvider*&, ConfigProvider*&,
                    PlayerVarDomain*&, AssetBuilder*&, decltype(nullptr), BuildMode&, int, int, int, int,
                    shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>> const&>(
            (SceneManager**)&local_a0, &local_90, (Js5ResourceProvider**)local_78, (ConfigProvider**)local_70,
            (PlayerVarDomain**)local_68, (AssetBuilder**)local_60, (void**)local_58, &local_88, &local_44, &local_40,
            &local_3c, &local_38,
            (shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, _4ul> _>*)&local_34);
        coordGrid[5].field_8.emplace_back<shared_ptr<World>>(local_a0);
        SetActiveWorld((SceneManager*)coordGrid, (int)local_50);
        return 1;
    }

    // 0x100462260
    void SceneManager::MainLogic(unsigned int arg1) {
        shared_ptr<World>* this_00;

        if ((long)field_120 != 18446744073709551615) {
            this_00 = &field_88[(long)field_120];
            ((World*)(*this_00).operator->())->MainLogic(arg1);
        }
    }

    // 0x1004622e0
    uint64_t SceneManager::RenderWorldInternal(render::RenderTargets* renderTargets, unsigned int arg2,
                                               const ViewTransforms& viewTransforms, float arg4, float arg5,
                                               const render::Viewport& viewport, const CoordFine& coordFine, int arg8,
                                               int arg9, unsigned int arg10) {
        shared_ptr<World>* this_00;
        uint64_t uVar1;
        RenderContext* this_02;
        long lVar2;
        ImVec4 local_48;

        if ((long)field_120 == 18446744073709551615) {
            this_02 = (RenderContext*)GetRenderContext();
            this_02->SetRenderTargets(renderTargets);
            local_48 = ImVec4(0.0, 0.0, 0.0, 0.0);
            lVar2 = &local_48->Instance();
            this_02->SetBlendState((lVar2 + 1524));
            this_02->ClearRenderTargets(&local_48, 1);
            uVar1 = 0;
        } else {
            this_00 = &field_88[(long)field_120];
            uVar1 =
                ((World*)(*this_00).operator->())
                    ->MainDraw(renderTargets, arg2, viewTransforms, arg4, arg5, viewport, coordFine, arg8, arg9, arg10);
        }
        return uVar1;
    }

    // 0x1004623c0
    uint32_t SceneManager::BuildWorld(unsigned int arg1, const CoordFine& coordFine,
                                      const eastl::bitset<6ul, unsigned long long>& bitset,
                                      World::LoadingState loadingState) {
        uint32_t uVar2;
        Logger* this_01;
        shared_ptr<World>* this_02;

        if (field_120 == -1) {
            uVar2 = 0;
        } else {
            if (((RenderDevice*)Instance())->GetReadyState() == 0) {
                this_02 = &field_88[(long)field_120];
                uVar2 = ((World*)(*this_02).operator->())->Build(arg1, coordFine.field_4, bitset, loadingState);
            } else {
                this_01 = logger::default_logger();
                uVar2 = 0;
                this_01->Log(false, 8,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                             "scene/SceneManager.cpp",
                             325, "Skipping world build - render context not ready");
            }
        }
        return uVar2;
    }

    // 0x100462470
    uint32_t SceneManager::RenderWorld(render::RenderTargets* renderTargets, unsigned int arg2,
                                       const ViewTransforms& viewTransforms, float arg4, float arg5,
                                       const render::Viewport& viewport, const CoordFine& coordFine, int arg8,
                                       unsigned int arg9, bool arg10) {
        bool cVar1;
        unsigned int arg6;
        shared_ptr<World>* psVar3;
        World* pWVar4;
        uint64_t* puVar5;
        Matrix33T<float>* matrix33;
        ReturnValue* quaternion;
        EquirectangularRenderer* this_01;
        RenderTargets* renderTargets_00;
        Vector3T<float>* vector3;
        Matrix44T<float> local_d0;
        uint64_t local_a8;
        uint64_t uStack_a0;
        uint64_t local_98;
        uint64_t uStack_90;
        uint64_t local_88;
        uint64_t uStack_80;
        uint64_t local_78;
        uint64_t uStack_70;
        ReturnValue local_68;
        Viewport* local_50;
        RenderTargets* local_48;
        float local_3c;
        float local_38;

        if ((long)field_120 != 18446744073709551615) {
            local_48 = renderTargets;
            local_3c = arg5;
            local_38 = arg4;
            psVar3 = &field_88[(long)field_120];
            pWVar4 = (World*)(*psVar3).operator->();
            pWVar4->RenderLightProbeEnvMaps(arg2, 1, 9, 2);
            cVar1 = ((AnimationWrapper*)field_176.operator->())->IsReadyAnim();
            renderTargets = local_48;
            arg4 = local_38;
            arg5 = local_3c;
            if (cVar1) {
                puVar5 = (uint64_t*)viewTransforms.GetScreen();
                local_a8 = *puVar5;
                uStack_a0 = puVar5[1];
                local_98 = puVar5[2];
                uStack_90 = puVar5[3];
                local_88 = puVar5[4];
                uStack_80 = puVar5[5];
                local_78 = puVar5[6];
                uStack_70 = puVar5[7];
                local_50 = viewport;
                local_d0.GetRot();
                matrix33 = (Matrix33T<float>*)local_d0.Transpose();
                local_d0 = *matrix33;
                local_68 = math::QuaternionT<float>();
                quaternion = local_68 = math::QuaternionT<float>::FromRotationMatrix(local_d0);
                local_68 = *quaternion;
                this_01 = (EquirectangularRenderer*)field_176.operator->();
                renderTargets_00 = (RenderTargets*)this_01->GetRenderTargets();
                vector3 = (Vector3T<float>*)viewTransforms.SSOBeginPtr();
                arg6 = ((GraphicsApp*)GraphicsApp::Instance())->GetFrameCount();
                viewport = local_50;
                RenderWorldEnvMap(*renderTargets_00, *vector3, local_68, local_38, local_3c, arg6, 3, -1, 34069, 6,
                                  true);
                renderTargets = local_48;
                arg4 = local_38;
                arg5 = local_3c;
            }
        }
        uint32_t uVar2 =
            RenderWorldInternal(renderTargets, arg2, viewTransforms, arg4, arg5, viewport, coordFine, arg8, -1, arg9);
        if (((char)uVar2 != '\0') && (arg10)) {
            psVar3 = &field_88[(long)field_120];
            pWVar4 = (World*)(*psVar3).operator->();
            pWVar4->UpdatePickableEntities(arg2, coordFine);
        }
        return uVar2;
    }

    // 0x100462700
    int SceneManager::RenderWorldEnvMap(render::RenderTargets& renderTargets, const math::Vector3T<float>& vector3,
                                        const math::QuaternionT<float>& quaternion, float arg4, float arg5,
                                        unsigned int arg6, int arg7, int arg8, render::CubeFace cubeFace,
                                        unsigned int arg10, bool arg11) {
        uint8_t* this_00;
        int iVar2;
        int* piVar6;
        QuaternionT<float>* quaternion_00;
        unsigned long arg1;
        int iVar7;
        uint8_t local_d0[96];
        uint8_t local_70[24];
        int local_48;

        SceneManager* local_58 = this;
        auto local_130 = graphicutils::CUBEMAP_FACE_CAMERA_ROTATIONS(quaternion);
        local_70._16_8_ = renderTargets;
        auto pRVar3 = render::GetEnvMapFaceRT(renderTargets, 0);
        auto this_01 = pRVar3->GetColourTargetTextures();
        uint64_t* puVar4 = (uint64_t*)(*this_01)[0];
        unsigned int* puVar5 = (unsigned int*)(*puVar4)->second();
        new (local_d0) jag::Camera(0);
        local_d0->SetVerticalFov((float)math::Deg2Rad(90.0));
        local_d0->SetAspect((float)((unsigned long)*puVar5 / (unsigned long)puVar5[1]));
        local_d0->SetNearClip(arg4);
        local_d0->SetFarClip(arg5);
        local_d0->SetPos(vector3);
        new (local_70) CoordFine(0, vector3);
        new ((local_d0 + 72)) render::Viewport(0, 0, *puVar5, puVar5[1], 0.0, 1.0);
        ViewTransforms local_208;
        if (cubeFace == 4294967295) {
            iVar7 = 6;
            iVar2 = 0;
        } else {
            iVar2 = render::GetCubeMapFaceIndex(cubeFace);
            local_48 = arg10 + iVar2;
            piVar6 = std::min<int>(6, local_48);
            iVar7 = *piVar6;
        }
        return local_3c = iVar7 - iVar2;
        if (local_3c != 0 && iVar2 <= iVar7) {
            this_00 = &local_58->field_176;
            arg1 = (unsigned long)iVar2;
            do {
                if (arg11) {
                    if (((EquirectangularRenderer*)(*this_00).operator->())->GetCubeMapFaceEnabled((int)arg1) != '\0')
                        goto LAB_1004628aa;
                } else {
                LAB_1004628aa:
                    quaternion_00 = (QuaternionT<float>*)local_130[arg1];
                    local_d0->SetRot(*quaternion_00);
                    local_208.Set(*local_d0);
                    pRVar3 = render::GetEnvMapFaceRT(*local_70._16_8_, (int)arg1);
                    RenderWorldInternal(local_58, pRVar3, arg6, &local_208, arg4, arg5, (Viewport*)(local_d0 + 72),
                                        (CoordFine*)local_70, arg7, arg8, 1);
                }
                arg1 = arg1 + 1;
            } while (iVar7 != (int)arg1);
        }
        return local_3c;
    }

    // 0x1004629e0
    uint32_t SceneManager::RenderWorldEnvMap(render::BufferedRenderTargets& bufferedRenderTargets,
                                             const math::Vector3T<float>& vector3,
                                             const math::QuaternionT<float>& quaternion, float arg4, float arg5,
                                             unsigned int arg6, int arg7, int arg8, render::CubeFace cubeFace,
                                             unsigned int arg10) {
        int iVar2;
        uint32_t uVar3;
        QuaternionT<float>* quaternion_00;
        int arg3;
        ViewTransforms local_1f8;
        uint8_t local_c0[96];
        uint8_t local_60[24];

        auto local_120 = graphicutils::CUBEMAP_FACE_CAMERA_ROTATIONS(quaternion);
        local_60._16_8_ = bufferedRenderTargets;
        auto pRVar4 = bufferedRenderTargets.GetWriteRT();
        auto this_00 = pRVar4->GetColourTargetTextures();
        uint64_t* puVar5 = (uint64_t*)(*this_00)[0];
        unsigned int* puVar6 = (unsigned int*)(*puVar5)->second();
        unsigned int uVar1 = render::GetCubeMapFaceIndex(cubeFace);
        if (uVar1 < 6) {
            iVar2 = render::GetCubeMapFaceIndex(cubeFace);
            if (-1 < iVar2) {
                uVar1 = *puVar6;
                new (local_c0) jag::Camera(0);
                local_c0->SetVerticalFov((float)math::Deg2Rad(90.0));
                arg3 = (int)((unsigned long)uVar1 / 6);
                local_c0->SetAspect((float)(int)(((unsigned long)uVar1 / 6) / (unsigned long)puVar6[1]));
                local_c0->SetNearClip(arg4);
                local_c0->SetFarClip(arg5);
                local_c0->SetPos(vector3);
                iVar2 = render::GetCubeMapFaceIndex(cubeFace);
                quaternion_00 = (QuaternionT<float>*)local_120[(long)iVar2];
                local_c0->SetRot(*quaternion_00);
                new (local_60) CoordFine(0, vector3);
                iVar2 = render::GetCubeMapFaceIndex(cubeFace);
                new ((local_c0 + 72)) render::Viewport(iVar2 * arg3, 0, arg3, puVar6[1], 0.0, 1.0);
                local_1f8 = ViewTransforms(*local_c0);
                pRVar4 = local_60._16_8_->GetWriteRT();
                uVar3 = RenderWorldInternal(pRVar4, arg6, local_1f8, arg4, arg5, *((local_c0 + 72)), *local_60, arg7,
                                            arg8, arg10);
                return uVar3;
            }
        }
        LogAssert("GetCubeMapFaceIndex(cubeFace) < CUBEFACE_NTYPES && GetCubeMapFaceIndex(cubeFace) >= 0",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                  "SceneManager.cpp",
                  476, nullptr);
    }

    // 0x100462c10
    void SceneManager::Preload(unsigned int arg1, const shared_ptr<WorldAreaType>& worldAreaType,
                               const CoordGrid& coordGrid, const eastl::bitset<6ul, unsigned long long>& bitset) {
        shared_ptr<World>* this_00;
        World* this_01;
        shared_ptr<oldscape::ClientScript>* clientScript2;
        shared_ptr<oldscape::dash3d::Decor> local_48;

        if (field_120 == -1) {
        LAB_100462c84:
            local_48 = shared_ptr(worldAreaType);
            CreateWorldFromWorldArea((shared_ptr<WorldAreaType>*)this, (int)&local_48, 0, 0, 98, true);
        } else {
            this_00 = (shared_ptr<World>*)GetActiveWorld();
            this_01 = (World*)(*this_00).operator->();
            clientScript2 = (shared_ptr<oldscape::ClientScript>*)this_01->GetWorldArea();
            if (worldAreaType != *clientScript2)
                goto LAB_100462c84;
            if (*field_128 != coordGrid == '\0')
                goto LAB_100462cd4;
        }
        *(unsigned int*)(field_128 + 8) = coordGrid.field_8;
        unsigned int uVar1 = coordGrid.field_4;
        *(unsigned int*)(field_128 + 0) = coordGrid.field_0;
        *(unsigned int*)(field_128 + 4) = uVar1;
    LAB_100462cd4:
        Load(arg1, coordGrid, bitset);
    }

    // 0x100462d20
    uint64_t SceneManager::Load(unsigned int arg1, const CoordGrid& coordGrid,
                                const eastl::bitset<6ul, unsigned long long>& bitset) {
        shared_ptr<World>* this_00;
        uint64_t uVar1;
        ColourHSL local_38;

        if (field_120 == -1) {
            uVar1 = 0;
        } else {
            local_38 = math::ColourHSL((float)coordGrid.field_4 * 128.0, 0.0, (float)coordGrid.field_8 * 128.0);
            this_00 = &field_88[(long)field_120];
            uVar1 = ((World*)(*this_00).operator->())->Preload(arg1, local_38, bitset);
        }
        return uVar1;
    }

    // 0x100462db0
    uint64_t SceneManager::RefreshPickablesRequired() const {
        return 0;
    }

    // 0x100462dc0
    void SceneManager::UpdateEntityHighlightGlobalState(unsigned int arg1) {
        m_entityHighlightGlobalState->Update((float)FrameTime::GetFrameDelta(), arg1);
    }

    // 0x100462df0
    void SceneManager::ToggleSphericalCamera() {
        uint8_t bVar1 = ((AnimationWrapper*)field_176.operator->())->IsReadyAnim();
        auto this_01 = field_176.operator->();
        auto effectManager = GetEffectManager();
        this_01->SetEnabled((bool)(bVar1 ^ 1), *effectManager);
    }

    // 0x100462e50
    void SceneManager::IsSphericalCameraEnabled() {
        ((AnimationWrapper*)field_176.operator->())->IsReadyAnim();
    }

    // 0x100462e70
    void SceneManager::RegisterTweakyMenus(tweak::ContainerGroup& containerGroup) {
        shared_ptr<tweak::Container> local_b0;
        shared_ptr<tweak::Container> local_88;
        shared_ptr<tweak::Container> local_78;
        float* local_68[7];

        new (local_68) eastl::string("World");
        (containerGroup._vptr[7].Clear)(&local_78, containerGroup, (eastl::string*)local_68);
        auto pCVar1 = local_78.operator->();
        local_68[0] = (float*)&World::m_showMinLevel;
        pCVar1->AddSlider<float>("Show Min Level", 0.0, 3.0, 1.0, *local_68);
        pCVar1 = (Container*)local_78.operator->();
        local_68[0] = (float*)&World::m_showMaxLevel;
        pCVar1->AddSlider<float>("Show Max Level", 0.0, 3.0, 1.0, *local_68);
        pCVar1 = (Container*)local_78.operator->();
        pCVar1->AddCheckBox("Show Lights", *((bool*)&World::m_showPointLights));
        pCVar1 = (Container*)local_78.operator->();
        char* pcVar3 = "Show Occluded Lights";
        pCVar1->AddCheckBox("Show Occluded Lights", *((bool*)&World::m_showOccludedPointLights));
        pCVar1 = (Container*)local_78.operator->();
        std::function<void(tweak::Event const&)>::function<
            SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::__0, void>(
            (function<void(tweak::Event const&)>*)local_68, (__0*)pcVar3);
        pCVar1->AddEditField("Isolate Point Light", 100, *local_68);
        pCVar1 = (Container*)local_78.operator->();
        pCVar1->AddCheckBox("Show Height Map Floor", *((bool*)&World::m_showHeightMap));
        pCVar1 = (Container*)local_78.operator->();
        pCVar1->AddCheckBox("Show Height Map Rest", *((bool*)&World::m_showHeightMapRest));
        pCVar1 = (Container*)local_78.operator->();
        pCVar1->AddCheckBox("Show Water Heights", *((bool*)&World::m_showWaterHeights));
        pCVar1 = (Container*)local_78.operator->();
        pCVar1->AddCheckBox("Show Remove Roof", *((bool*)&World::m_debugRemoveRoof));
        pCVar1 = (Container*)local_78.operator->();
        pCVar1->AddCheckBox("Show Remove Roof Labels", *((bool*)&World::m_debugRemoveRoofLabels));
        pCVar1 = (Container*)local_78.operator->();
        pCVar1->AddCheckBox("Show Picking", *((bool*)&World::m_debugPicking));
        pCVar1 = (Container*)local_78.operator->();
        pCVar1->AddCheckBox("Always Use Accurate Picking",
                            *((bool*)&graphics::PickingHelper::m_debugAlwaysUseAccuratePicking));
        pCVar1 = (Container*)local_78.operator->();
        pCVar1->AddCheckBox("Show Camera Frustum", *((bool*)&SceneRenderManager::m_showCameraFrustum));
        pCVar1 = (Container*)local_78.operator->();
        std::function<void(tweak::Event const&)>::function<
            SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::__1, void>(
            (function<void(tweak::Event const&)>*)local_68, (__1*)this);
        pCVar1->AddButton("Rebuild light indices", *local_68);
        pCVar1 = (Container*)local_78.operator->();
        std::function<void(tweak::Event const&)>::function<
            SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::__2, void>(
            (function<void(tweak::Event const&)>*)local_68, (__2*)this);
        pCVar1->AddCheckBox("Enable impostors", *local_68, false);
        pcVar3 = (char*)local_78.operator->();
        local_98.AddGroup(pcVar3);
        pCVar1 = (Container*)local_98.operator->();
        pCVar1->AddCheckBox("Show Floor Grid", *((bool*)&World::m_showFloorGrid));
        pCVar1 = (Container*)local_98.operator->();
        pCVar1->AddCheckBox("Use Water Heights", *((bool*)&World::m_showFloorGridUseWaterHeight));
        pcVar3 = (char*)local_78.operator->();
        local_88.AddGroup(pcVar3);
        pCVar1 = (Container*)local_88.operator->();
        std::function<void(tweak::Event const&)>::function<
            SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::__3, void>(
            (function<void(tweak::Event const&)>*)local_68, (__3*)this);
        pCVar1->AddEditField("Parent Location ID", 100, *local_68);
        pCVar1 = (Container*)local_88.operator->();
        std::function<void(tweak::Event const&)>::function<
            SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::__4, void>(
            (function<void(tweak::Event const&)>*)local_68, (__4*)this);
        pCVar1->AddEditField("Desired Multi-Loc State", 100, *local_68);
        pCVar1 = (Container*)local_88.operator->();
        std::function<void(tweak::Event const&)>::function<
            SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::__5, void>(
            (function<void(tweak::Event const&)>*)local_68, (__5*)this);
        pCVar1->AddButton("Increment specific Multi-Loc Index", *local_68);
        pCVar1 = (Container*)local_88.operator->();
        std::function<void(tweak::Event const&)>::function<
            SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::__6, void>(
            (function<void(tweak::Event const&)>*)local_68, (__6*)this);
        pCVar1->AddButton("Increment all Multi-Loc Indices", *local_68);
        auto pEVar2 = field_40->GetEffectManager();
        pEVar2->InitialiseTweakVars(containerGroup);
        new (local_68) eastl::string("Rendering");
        (containerGroup._vptr[7].Clear)(&local_b0, containerGroup, local_68);
        auto this_00 = field_176.operator->();
        pCVar1 = (Container*)*local_b0;
        pEVar2 = GetEffectManager();
        this_00->RegisterTweakVars(*pCVar1, *pEVar2);
        RegisterIrradianceTweakVars(containerGroup);
    }

    // 0x100463490
    void SceneManager::RegisterIrradianceTweakVars(tweak::ContainerGroup& containerGroup) {
        uint8_t local_c0[24];
        uint8_t local_a8[24];
        shared_ptr<tweak::Container> local_80;
        float* local_68[7];

        new (local_68) eastl::string("Lighting");
        (containerGroup._vptr[7].Clear)(&local_80, containerGroup, (eastl::string*)local_68);
        auto effectManager = GetEffectManager();
        auto pCVar1 = local_80.operator->();
        pCVar1->AddCheckBox("Force shadows on for point lights", *((bool*)&StaticPointLight::m_forceShadowsOn));
        pCVar1 = (Container*)local_80.operator->();
        void* local_88 = graphics::Tweaky_LambdaToggleEffect;
        uint64_t local_90 = std::ref<graphics::EffectManager>(*effectManager);
        uint8_t local_69 = 21;
        reference_wrapper<graphics::EffectManager>* prVar2 = (reference_wrapper<graphics::EffectManager>*)&local_88;
        std::bind<void (*)(graphics::EffectManager&, tweak::Event const&, graphics::EffectType const&),
                  std::reference_wrapper<graphics::EffectManager>, std::placeholders::__ph<1> const&,
                  graphics::EffectType>(
            (void_______jag__graphics__EffectManager___jag__tweak__Event_const___jag__graphics__EffectType_const__)
                local_c0,
            *prVar2, local_90, local_69);
        local_68
            ->function<std::__bind<void (*)(graphics::EffectManager&, tweak::Event const&, graphics::EffectType const&),
                                   std::reference_wrapper<graphics::EffectManager>, std::placeholders::__ph<1> const&,
                                   graphics::EffectType>,
                       void>(prVar2);
        pCVar1->AddCheckBox("Irradiance", *local_68, false);
        pCVar1 = (Container*)local_80.operator->();
        local_88 = graphics::Tweaky_LambdaToggleEffect;
        local_90 = std::ref<graphics::EffectManager>(*effectManager);
        local_69 = 40;
        prVar2 = (reference_wrapper<graphics::EffectManager>*)&local_88;
        std::bind<void (*)(graphics::EffectManager&, tweak::Event const&, graphics::EffectType const&),
                  std::reference_wrapper<graphics::EffectManager>, std::placeholders::__ph<1> const&,
                  graphics::EffectType>(
            (void_______jag__graphics__EffectManager___jag__tweak__Event_const___jag__graphics__EffectType_const__)
                local_a8,
            *prVar2, local_90, local_69);
        local_68
            ->function<std::__bind<void (*)(graphics::EffectManager&, tweak::Event const&, graphics::EffectType const&),
                                   std::reference_wrapper<graphics::EffectManager>, std::placeholders::__ph<1> const&,
                                   graphics::EffectType>,
                       void>(prVar2);
        pCVar1->AddCheckBox("Soft Disable Irradiance", *local_68, false);
        pCVar1 = (Container*)local_80.operator->();
        std::function<void(tweak::Event const&)>::function<
            SceneManager::RegisterIrradianceTweakVars(tweak::ContainerGroup&)::__7, void>(
            (function<void(tweak::Event const&)>*)local_68, (__7*)this);
        pCVar1->AddButton("Reload Light Probes", *local_68);
        pCVar1 = (Container*)local_80.operator->();
        pCVar1->AddCheckBox("Enable fast resource recycling",
                            *((bool*)&graphics::LightProbeRenderer::m_enableResourceRecycling));
        pCVar1 = (Container*)local_80.operator->();
        pCVar1->AddEnum("Show LightProbes", (StringEnum*)&graphics::LightProbe::m_LightProbeRenderModes,
                        &graphics::LightProbe::m_LightProbeRenderMode);
        pCVar1 = (Container*)local_80.operator->();
        pCVar1->AddCheckBox("Enable lightprobe overbright override",
                            *((bool*)&LightProbeManager::m_skyBoxOverbrightDefaultOverrideAll));
        pCVar1 = (Container*)local_80.operator->();
        local_68[0] = (float*)&LightProbeManager::m_skyBoxOverbrightDefaultValue;
        pCVar1->AddSlider<float>("Lightprobe overbright", 0.0, 1.0, 0.05, *local_68);
        pCVar1 = (Container*)local_80.operator->();
        pCVar1->AddCheckBox("Show Default Environment Map", *((bool*)&World::m_showDefaultEnvironmentMap));
        pCVar1 = (Container*)local_80.operator->();
        pCVar1->AddCheckBox("Show Current Environment Map", *((bool*)&World::m_showCurrentEnvironmentMap));
        pCVar1 = (Container*)local_80.operator->();
        pCVar1->AddCheckBox("Show Current Sky Box Map", *((bool*)&World::m_showCurrentSkyBoxMap));
    }

    // 0x100463820
    void SceneManager::ReloadLightProbes() {
        shared_ptr<World>* this_01;
        World* this_02;

        ((m_entityHighlightGlobalState + 48))->clear();
        if ((GetActiveWorld())->operator_cast_to_bool() != '\0') {
            this_01 = (shared_ptr<World>*)GetActiveWorld();
            this_02 = (World*)(*this_01).operator->();
            ((LightProbeManager*)this_02->GetLightProbeManager())->AddAllExistingMapSquaresToUpdateList();
        }
    }

    // 0x100463870
    void SceneManager::NotifyShadowQualityChanged() {
        World* this_01;
        __8* in_RSI;
        function<void(shared_ptr<MapSquare>&)> local_58[56];
        long local_20;

        graphics::PointLightSMManager::m_ClearShadowMapDepthAtlas = 1;
        auto this_00 = GetActiveWorld();
        if (shared_ptr::operator_cast_to_bool(this_00)) {
            this_01 = (World*)(*this_00).operator->();
            std::function<void(shared_ptr<MapSquare>&)>::function<SceneManager::NotifyShadowQualityChanged()::__8,
                                                                  void>(local_58, in_RSI);
            this_01->OnAllMapSquares(local_58);
        }
    }

    // 0x10046e2e0
    void SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::$_0::operator()(const tweak::Event& event) const {
        char* pcVar2;
        eastl::string local_88;
        int local_60[14];

        auto plVar1 = end();
        int arg2 = LightSource::m_debugIsolatedPointLight;
        if (field_16 == 1) {
            new (local_60) eastl::fixed_string<char, 16>();
            ToText<16, true>((fixed_string<char, _16>*)local_60, arg2, 10);
            pcVar2 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
            local_88 = eastl::string(pcVar2);
            (**(void (**)(...))(*plVar1 + 144))(plVar1, &local_88);
        }
        pcVar2 = (char*)(**(void (**)(...))(*plVar1 + 136))(plVar1);
        FromText<int>(pcVar2, local_60);
        LightSource::m_debugIsolatedPointLight = local_60[0];
    }

    // 0x10046ecd0
    void SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::$_1::operator()(const tweak::Event& event) const {
        shared_ptr<World>* this_00;
        shared_ptr<World>* psVar1;
        Layout* this_02;

        if (event.field_16 == 2) {
            this_02 = (Layout*)(field_0 + 88);
            this_00 = (shared_ptr<World>*)this_02->HeapBeginPtr();
            psVar1 = (shared_ptr<World>*)this_02->end();
            for (; this_00 != psVar1; this_00 = this_00 + 16) {
                ((World*)(*this_00).operator->())->RebuildLightIndices();
            }
        }
    }

    // 0x10046f610
    void SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::$_2::operator()(const tweak::Event& event) const {
        long lVar1;
        uint8_t uVar2;
        long* plVar4;
        shared_ptr* this_00;
        shared_ptr* psVar5;
        Layout* this_02;

        if (event.field_16 == 3) {
            lVar1 = field_0;
            plVar4 = (long*)event.operator->();
            uVar2 = (**(void (**)(...))(*plVar4 + 120))(plVar4);
            *PTR_m_enableImpostors_100ee6648 = uVar2;
            this_02 = (Layout*)(lVar1 + 88);
            this_00 = (shared_ptr*)this_02->HeapBeginPtr();
            psVar5 = (shared_ptr*)this_02->end();
            for (; this_00 != psVar5; this_00 = this_00 + 1) {
                if (shared_ptr::operator_cast_to_bool(this_00) != '\0') {
                    ((World*)(*this_00).operator->())->DestructImpostorMapSquares();
                }
            }
        } else if (event.field_16 == 1) {
            plVar4 = (long*)event.operator->();
            (**(void (**)(...))(*plVar4 + 128))(plVar4, *PTR_m_enableImpostors_100ee6648);
        }
    }

    // 0x10046ffb0
    void SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::$_3::operator()(const tweak::Event& event) const {
        char* str;
        int local_1c;

        long lVar1 = field_0;
        auto plVar2 = event.end();
        if (event.field_16 == 3) {
            str = (char*)(**(void (**)(...))(*plVar2 + 136))(plVar2);
            FromText<int>(str, &local_1c);
            *(int*)(lVar1 + 340) = local_1c;
        }
    }

    // 0x1004708f0
    void SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::$_4::operator()(const tweak::Event& event) const {
        Layout* this_00;
        char* str;
        uint64_t in_register_00000001;
        shared_ptr* psVar4;
        shared_ptr* this_02;

        uint64_t uStack_28 = (unsigned long)in_register_00000001 << 8;
        long lVar1 = field_0;
        auto plVar3 = event.end();
        if (event.field_16 == 3) {
            str = (char*)(**(void (**)(...))(*plVar3 + 136))(plVar3);
            FromText<int>(str, (int*)((long)&uStack_28 + 4));
            this_00 = (Layout*)(lVar1 + 88);
            this_02 = (shared_ptr*)this_00->HeapBeginPtr();
            psVar4 = (shared_ptr*)this_00->end();
            for (; this_02 != psVar4; this_02 = this_02 + 1) {
                if (shared_ptr::operator_cast_to_bool(this_02) != '\0') {
                    ((World*)(*this_02).operator->())->SetMultiLocState(*(int*)(lVar1 + 340), uStack_28._4_4_);
                }
            }
        }
    }

    // 0x100471280
    void SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::$_5::operator()(const tweak::Event& event) const {
        Layout* this_00;
        long lVar1;
        shared_ptr* psVar3;
        shared_ptr* this_02;

        if (event.field_16 == 2) {
            lVar1 = field_0;
            this_00 = (Layout*)(lVar1 + 88);
            this_02 = (shared_ptr*)this_00->HeapBeginPtr();
            psVar3 = (shared_ptr*)this_00->end();
            for (; this_02 != psVar3; this_02 = this_02 + 1) {
                if (shared_ptr::operator_cast_to_bool(this_02) != '\0') {
                    ((World*)(*this_02).operator->())->IncrementMultiLocState(*(int*)(lVar1 + 340));
                }
            }
        }
    }

    // 0x100471bf0
    void SceneManager::RegisterTweakyMenus(tweak::ContainerGroup&)::$_6::operator()(const tweak::Event& event) const {
        shared_ptr<World>* this_00;
        shared_ptr<World>* psVar1;
        Layout* this_02;

        if (event.field_16 == 2) {
            this_02 = (Layout*)(field_0 + 88);
            this_00 = (shared_ptr<World>*)this_02->HeapBeginPtr();
            psVar1 = (shared_ptr<World>*)this_02->end();
            for (; this_00 != psVar1; this_00 = this_00 + 16) {
                ((World*)(*this_00).operator->())->IncrementAllMultiLocStates();
            }
        }
    }

    // 0x100472f80
    void SceneManager::RegisterIrradianceTweakVars(tweak::ContainerGroup&)::$_7::operator()(
        const tweak::Event& event) const {
        if (event.field_16 == 2) {
            ReloadLightProbes(field_0);
        }
    }

} // namespace jag::game

// 0x100472590
decltype((static_cast<void (
              *&std::__invoke<void (*&)(jag::graphics::EffectManager&, jag::tweak::Event const&,
                                        jag::graphics::EffectType const&),
                              jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType&>(
                  void (*&)(jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType const&),
                  jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType&))(
              jag::graphics::EffectManager&, jag::tweak::Event const&, jag::graphics::EffectType const&)>({ parm #1 }))(
    static_cast<jag::graphics::EffectManager&>({ parm #2 }), static_cast<jag::tweak::Event const&>({ parm #2 }),
    static_cast<jag::graphics::EffectType&>({ parm #2 }))arg1) {
    return (**(void (**)(...))arg1)();
}
