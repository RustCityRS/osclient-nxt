// libs/game/runetek5/scene/SceneManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class SceneManager {
    public:
        // virtual methods in vtable order
        virtual bool GetLevelHeights(std::array<int, 5ul>&, math::Vector3T<float> const&) const;
        virtual bool ShouldUpdateLevelHeights(math::Vector3T<float> const&, math::Vector3T<float> const&) const;
        virtual ~SceneManager();
        GetMapAreaList();
        GetIrradianceCache();
        EntityHighlightGlobalState GetEntityHighlightGlobalState();
        GetGameSceneRect();
        void GetEffectManager();
        IsFreshEnvironmentOverride() const;
        void GetEnvironmentOverride() const;
        void SetFreshEnvironmentOverride(bool);
        GetDebugCursorPosition() const;
        SceneManager(Js5ResourceProvider*, graphics::RT7Core*, ConfigProvider*, PlayerVarDomain*, AssetBuilder*);
        void CreateRenderingResources();
        void DestroyRenderingResources();
        void ResetWorlds();
        GetActiveWorld() const;
        void RemoveTemporaryWorlds();
        void StoreCurrentActiveWorld();
        void RestoreCurrentActiveWorld();
        void CreateWorldFromWorldArea(shared_ptr<WorldAreaType>, int, int, int, int, bool);
        void SetActiveWorld(int);
        CreateWorldFromRegionData(
            CoordGrid const&, int, int,
            shared_ptr<eastl::fixed_vector<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, 4ul,
                                           true, eastl::allocator>> const&,
            BuildMode, bool);
        void MainLogic(unsigned int);
        RenderWorldInternal(render::RenderTargets*, unsigned int, ViewTransforms const&, float, float,
                            render::Viewport const&, CoordFine const&, int, int, unsigned int);
        BuildWorld(unsigned int, CoordFine const&, eastl::bitset<6ul, unsigned long long> const&, World::LoadingState);
        RenderWorld(render::RenderTargets*, unsigned int, ViewTransforms const&, float, float, render::Viewport const&,
                    CoordFine const&, int, unsigned int, bool);
        int RenderWorldEnvMap(render::RenderTargets&, math::Vector3T<float> const&, math::QuaternionT<float> const&,
                              float, float, unsigned int, int, int, render::CubeFace, unsigned int, bool);
        RenderWorldEnvMap(render::BufferedRenderTargets&, math::Vector3T<float> const&, math::QuaternionT<float> const&,
                          float, float, unsigned int, int, int, render::CubeFace, unsigned int);
        void Preload(unsigned int, shared_ptr<WorldAreaType> const&, CoordGrid const&,
                     eastl::bitset<6ul, unsigned long long> const&);
        Load(unsigned int, CoordGrid const&, eastl::bitset<6ul, unsigned long long> const&);
        RefreshPickablesRequired() const;
        void UpdateEntityHighlightGlobalState(unsigned int);
        void ToggleSphericalCamera();
        void IsSphericalCameraEnabled();
        void RegisterTweakyMenus(tweak::ContainerGroup&);
        void RegisterIrradianceTweakVars(tweak::ContainerGroup&);
        void ReloadLightProbes();
        void NotifyShadowQualityChanged();

        // data members, from how the methods use this: 352 bytes
        undefined** field_0;          // offset 0, vtable pointer
        Js5ResourceProvider* field_8; // offset 8
        ConfigProvider* field_16;     // offset 16
        PlayerVarDomain* field_24;    // offset 24
        AssetBuilder* field_32;       // offset 32
        RT7Core* field_40;            // offset 40
        undefined8 field_48;          // offset 48
        char _unknown_56[64];
        int field_120;       // offset 120
        int field_124;       // offset 124
        CoordGrid field_128; // offset 128
        char _unknown_144[24];
        bool m_freshEnvironmentOverride; // offset 168
        char _unknown_169[23];
        EntityHighlightGlobalState m_entityHighlightGlobalState; // offset 192
        char _unknown_244[52];
        undefined2 field_296; // offset 296
        char _unknown_298[2];
        undefined4 field_300; // offset 300
        char _unknown_304[24];
        undefined1 field_328; // offset 328
        char _unknown_329[3];
        undefined8 field_332; // offset 332
        undefined4 field_340; // offset 340
        char _unknown_344[8];
    };

    // 0x100430470, 16 bytes, inline, placed by class name and debug map
    // SceneManager::GetGameSceneRect()
    undefined1* SceneManager::GetGameSceneRect() {
        return field_128 + 12;
    }

    // 0x10043ceb0, 16 bytes, inline, placed by class name
    // SceneManager::GetEffectManager()
    void SceneManager::GetEffectManager() {
        field_40->GetEffectManager();
    }

    // 0x100441670, 16 bytes, inline, placed by class name
    // SceneManager::IsFreshEnvironmentOverride() const
    undefined1 SceneManager::IsFreshEnvironmentOverride() {
        return m_freshEnvironmentOverride;
    }

    // 0x1004416d0, 32 bytes, inline, placed by class name
    // SceneManager::GetEnvironmentOverride() const
    void SceneManager::GetEnvironmentOverride() {
        (&field_160)->get();
    }

    // 0x100441910, 16 bytes, inline, placed by class name
    // SceneManager::SetFreshEnvironmentOverride(bool)
    void SceneManager::SetFreshEnvironmentOverride(bool param_1) {
        m_freshEnvironmentOverride = param_1;
    }

    // 0x1004491d0, 16 bytes, inline, placed by class name
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // SceneManager::GetDebugCursorPosition() const
    /* graphics::RT7Core::GetRenderTargetsManager() */

    undefined1* graphics::RT7Core::GetRenderTargetsManager() {
        return &field_344;
    }

    // 0x100473750, 272 bytes, inline, placed by class name
    // SceneManager::NotifyShadowQualityChanged()::$_8::operator()(shared_ptr<MapSquare>&) const
    /* SceneManager::NotifyShadowQualityChanged()::$_8::TEMPNAMEPLACEHOLDERVALUE(shared_ptr<MapSquare>&)
   const */

    void SceneManager::NotifyShadowQualityChanged()::$_8::operator()(shared_ptr* param_1) {
        MapSquare* pMVar1;
        Layout* pLVar2;
        shared_ptr<LightSource>* psVar3;
        shared_ptr<LightSource>* psVar4;
        LightSource* pLVar5;

        pMVar1 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this);
        pLVar2 = (Layout*)pMVar1->GetLightSourcesLocal();
        psVar3 = (shared_ptr<LightSource>*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar2);
        psVar4 = (shared_ptr<LightSource>*)pLVar2->end();
        for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
            pLVar5 = (LightSource*)shared_ptr<LightSource>::operator->(psVar3);
            pLVar5->SetPointLightSM(0);
        }
        pMVar1 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this);
        pLVar2 = (Layout*)pMVar1->GetLightSourcesRemote();
        psVar3 = (shared_ptr<LightSource>*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar2);
        psVar4 = (shared_ptr<LightSource>*)pLVar2->end();
        for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
            pLVar5 = (LightSource*)shared_ptr<LightSource>::operator->(psVar3);
            pLVar5->SetPointLightSM(0);
        }
        pMVar1 = (MapSquare*)shared_ptr<MapSquare>::operator->((shared_ptr<MapSquare>*)this);
        pLVar2 = (Layout*)pMVar1->GetLightSourcesDynamic();
        psVar3 = (shared_ptr<LightSource>*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar2);
        psVar4 = (shared_ptr<LightSource>*)pLVar2->end();
        for (; psVar3 != psVar4; psVar3 = psVar3 + 16) {
            pLVar5 = (LightSource*)shared_ptr<LightSource>::operator->(psVar3);
            pLVar5->SetPointLightSM(0);
        }
    }

} // namespace jag::game
