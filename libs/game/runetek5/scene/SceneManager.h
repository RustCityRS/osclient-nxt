// libs/game/runetek5/scene/SceneManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class SceneManager {
    public:
        // virtual methods in vtable order
        virtual unsigned long GetLevelHeights(std::array<int, 5ul>& arg1, const math::Vector3T<float>& vector3) const;
        virtual bool ShouldUpdateLevelHeights(const math::Vector3T<float>& vector31,
                                              const math::Vector3T<float>& vector32) const;
        virtual ~SceneManager();
        uint8_t* GetMapAreaList();
        uint8_t* GetIrradianceCache();
        EntityHighlightGlobalState GetEntityHighlightGlobalState();
        uint8_t* GetGameSceneRect();
        EffectManager* GetEffectManager();
        bool IsFreshEnvironmentOverride() const;
        EnvironmentOverride* GetEnvironmentOverride() const;
        void SetFreshEnvironmentOverride(bool arg1);
        uint8_t* GetDebugCursorPosition() const;
        SceneManager(Js5ResourceProvider* js5ResourceProvider, graphics::RT7Core* rt7Core,
                     ConfigProvider* configProvider, PlayerVarDomain* playerVarDomain, AssetBuilder* assetBuilder);
        void CreateRenderingResources();
        void DestroyRenderingResources();
        void ResetWorlds();
        uint8_t* GetActiveWorld() const;
        void RemoveTemporaryWorlds();
        void StoreCurrentActiveWorld();
        void RestoreCurrentActiveWorld();
        void CreateWorldFromWorldArea(shared_ptr<WorldAreaType> worldAreaType, int arg2, int arg3, int arg4, int arg5,
                                      bool arg6);
        void SetActiveWorld(int arg1);
        void
        CreateWorldFromRegionData(const CoordGrid& coordGrid, int arg2, int arg3,
                                  const shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int>>, 4ul>>& arg4,
                                  BuildMode buildMode, bool arg6);
        void MainLogic(unsigned int arg1);
        uint64_t RenderWorldInternal(render::RenderTargets* renderTargets, unsigned int arg2,
                                     const ViewTransforms& viewTransforms, float arg4, float arg5,
                                     const render::Viewport& viewport, const CoordFine& coordFine, int arg8, int arg9,
                                     unsigned int arg10);
        uint32_t BuildWorld(unsigned int arg1, const CoordFine& coordFine,
                            const eastl::bitset<6ul, unsigned long long>& bitset, World::LoadingState loadingState);
        uint32_t RenderWorld(render::RenderTargets* renderTargets, unsigned int arg2,
                             const ViewTransforms& viewTransforms, float arg4, float arg5,
                             const render::Viewport& viewport, const CoordFine& coordFine, int arg8, unsigned int arg9,
                             bool arg10);
        int RenderWorldEnvMap(render::RenderTargets& renderTargets, const math::Vector3T<float>& vector3,
                              const math::QuaternionT<float>& quaternion, float arg4, float arg5, unsigned int arg6,
                              int arg7, int arg8, render::CubeFace cubeFace, unsigned int arg10, bool arg11);
        uint32_t RenderWorldEnvMap(render::BufferedRenderTargets& bufferedRenderTargets,
                                   const math::Vector3T<float>& vector3, const math::QuaternionT<float>& quaternion,
                                   float arg4, float arg5, unsigned int arg6, int arg7, int arg8,
                                   render::CubeFace cubeFace, unsigned int arg10);
        void Preload(unsigned int arg1, const shared_ptr<WorldAreaType>& worldAreaType, const CoordGrid& coordGrid,
                     const eastl::bitset<6ul, unsigned long long>& bitset);
        uint64_t Load(unsigned int arg1, const CoordGrid& coordGrid,
                      const eastl::bitset<6ul, unsigned long long>& bitset);
        uint64_t RefreshPickablesRequired() const;
        void UpdateEntityHighlightGlobalState(unsigned int arg1);
        void ToggleSphericalCamera();
        void IsSphericalCameraEnabled();
        void RegisterTweakyMenus(tweak::ContainerGroup& containerGroup);
        void RegisterIrradianceTweakVars(tweak::ContainerGroup& containerGroup);
        void ReloadLightProbes();
        void NotifyShadowQualityChanged();

    private:
        Js5ResourceProvider* field_8;
        ConfigProvider* field_16;
        PlayerVarDomain* field_24;
        AssetBuilder* field_32;
        RT7Core* field_40;
        uint64_t field_48;
        uint8_t _unknown_56[64];
        int field_120;
        int field_124;
        CoordGrid field_128;
        uint8_t _unknown_144[24];
        bool m_freshEnvironmentOverride;
        uint8_t _unknown_169[23];
        EntityHighlightGlobalState m_entityHighlightGlobalState;
        uint8_t _unknown_244[52];
        uint16_t field_296;
        uint8_t _unknown_298[2];
        uint32_t field_300;
        uint8_t _unknown_304[24];
        uint8_t field_328;
        uint8_t _unknown_329[3];
        uint64_t field_332;
        uint32_t field_340;
        uint8_t _unknown_344[8];
    };

    // 0x100430470
    uint8_t* SceneManager::GetGameSceneRect() {
        return field_128 + 12;
    }

    // 0x10043ceb0
    EffectManager* SceneManager::GetEffectManager() {
        return field_40->GetEffectManager();
    }

    // 0x100441670
    bool SceneManager::IsFreshEnvironmentOverride() const {
        return m_freshEnvironmentOverride;
    }

    // 0x1004416d0
    EnvironmentOverride* SceneManager::GetEnvironmentOverride() const {
        return (EnvironmentOverride*)field_160.get();
    }

    // 0x100441910
    void SceneManager::SetFreshEnvironmentOverride(bool arg1) {
        m_freshEnvironmentOverride = arg1;
    }

    // 0x1004491d0
    uint8_t* SceneManager::GetDebugCursorPosition() const {
        return &field_344;
    }

    // 0x100473750
    void SceneManager::NotifyShadowQualityChanged()::$_8::operator()(shared_ptr<MapSquare>& mapSquare) const {
        LightSource* pLVar5;

        MapSquare* pMVar1 = (MapSquare*)(*this).operator->();
        auto pLVar2 = pMVar1->GetLightSourcesLocal();
        auto psVar3 = pLVar2->HeapBeginPtr();
        auto psVar4 = pLVar2->end();
        for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
            pLVar5 = (LightSource*)(*psVar3).operator->();
            pLVar5->SetPointLightSM(nullptr);
        }
        pMVar1 = (MapSquare*)(*this).operator->();
        pLVar2 = (Layout*)pMVar1->GetLightSourcesRemote();
        psVar3 = (shared_ptr<LightSource>*)pLVar2->HeapBeginPtr();
        psVar4 = (shared_ptr<LightSource>*)pLVar2->end();
        for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
            pLVar5 = (LightSource*)(*psVar3).operator->();
            pLVar5->SetPointLightSM(nullptr);
        }
        pMVar1 = (MapSquare*)(*this).operator->();
        pLVar2 = (Layout*)pMVar1->GetLightSourcesDynamic();
        psVar3 = (shared_ptr<LightSource>*)pLVar2->HeapBeginPtr();
        psVar4 = (shared_ptr<LightSource>*)pLVar2->end();
        for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
            pLVar5 = (LightSource*)(*psVar3).operator->();
            pLVar5->SetPointLightSM(nullptr);
        }
    }

} // namespace jag::game
