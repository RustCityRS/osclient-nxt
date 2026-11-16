// libs/game/runetek5/scene/LightProbeManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class LightProbeManager {
    public:
        class MapSquareUpdateInfo;
        bool IsAnyMapSquareUpdating() const;
        void GetNumMapSquaresUpdating() const;
        LightProbeManager(graphics::RT7Core* rt7Core, graphics::EffectManager& effectManager, World* world);
        ~LightProbeManager();
        void AddMapSquareToUpdateList(const MapSquare::MapSquarePos& mapSquarePos);
        void AddAllExistingMapSquaresToUpdateList();
        void RenderPendingEnvMaps(unsigned int arg1, unsigned int arg2, int arg3, bool arg4);
        uint64_t GetProbeTextureData(graphics::LightProbe& lightProbe,
                                     eastl::fixed_vector<render::ImageData, 6ul>& imageDatas) const;
        void UpdatePendingLightProbeSH(unsigned int arg1);
        void AddSHCoefToCache(const MapSquareEnvIrradianceInfo& mapSquareEnvIrradianceInfo);
        void UpdatePendingLightProbeSHAsync();
        void Clear();
        static int32_t m_skyBoxOverbrightDefaultValue; // = 1048576000
        static bool m_skyBoxOverbrightDefaultOverrideAll;

    private:
        RT7Core* field_0;
        EffectManager* field_8;
        World* field_16;
        uint8_t _unknown_24[944];
        char field_968;
        uint8_t _unknown_969[39];
    };

    class LightProbeManager::MapSquareUpdateInfo {
    public:
        MapSquareUpdateInfo(MapSquare::MapSquarePos arg1, render::CubeFace arg2);

    private:
        unsigned short field_0;
        uint8_t _unknown_2[2];
        int field_4;
        uint8_t _unknown_8[4];
    };

    // 0x100443190
    bool LightProbeManager::IsAnyMapSquareUpdating() const {
        return field_928.empty() ^ 1;
    }

    // 0x1004431b0
    void LightProbeManager::GetNumMapSquaresUpdating() const {
        field_928.size();
    }

    // 0x100480b60
    void LightProbeManager::AddMapSquareToUpdateList(MapSquare::MapSquarePos const&)::$_0::operator()(
        const eastl::pair<unsigned long const, MapSquareEnvIrradianceInfo>& arg1) const {
        (*((arg1 + 24))) == (*(*(MapSquareEnvInfo**)this));
    }

    // 0x1004820d0
    bool LightProbeManager::GetProbeTextureData(graphics::LightProbe&, eastl::fixed_vector<render::ImageData, 6ul>&)
        const ::$_3::operator()(unsigned char arg1) const {
        return (int)this == 0;
    }

    // 0x1004821d0
    void LightProbeManager::AddSHCoefToCache(MapSquareEnvIrradianceInfo const&)::$_4::operator()(
        const eastl::pair<unsigned long const, MapSquareEnvIrradianceInfo>& arg1) const {
        (*((arg1 + 24))) == (*((MapSquareEnvInfo*)(*(long*)this + 8)));
    }

    // 0x100485dc0
    bool LightProbeManager::UpdatePendingLightProbeSHAsync()::$_6::operator()(
        std::future<MapSquareEnvIrradianceInfo>& future) const {
        uint8_t bVar1;
        uint8_t bVar2;
        uint32_t uVar5;
        shared_ptr* this_01;
        Location* pLVar6;
        LightProbeRenderer* pLVar7;
        unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>* this_04;
        Terrain* this_05;
        LightProbe* lightProbe;
        Logger* pLVar8;
        type* in_RDX;
        uint64_t in_stack_fffffffffffffdf0;
        LogStream local_1f8;
        LogStream local_168;
        uint8_t local_d8[9];
        uint8_t local_cf;
        unsigned long local_b8;
        IrradianceSHCoefConsts local_a8;

        uint32_t uVar9 = (uint32_t)((unsigned long)in_stack_fffffffffffffdf0 >> 32);
        LightProbeManager* this_00 = field_0;
        local_d8->duration<int>(0, in_RDX);
        auto fVar4 = future.wait_for<long long, std::ratio<1l, 1000l>>(*local_d8);
        if (fVar4 == 0) {
            *local_d8 = future.get();
            this_01 = (shared_ptr*)this_00->field_16->GetMapSquare(*((local_d8 + 8)));
            if (shared_ptr::operator_cast_to_bool(this_01)) {
                ((MapSquare*)(*this_01).operator->())->SetIrradianceSHConsts(local_a8, 750);
                if (graphics::LightProbeRenderer::m_enableResourceRecycling != '\0') {
                    pLVar6 = (Location*)(*this_01).operator->();
                    if ((pLVar6->GetParentLocationType())->operator_cast_to_bool()) {
                        pLVar7 = this_00->field_0->GetLightProbeRenderer();
                        pLVar6 = (Location*)(*this_01).operator->();
                        this_04 = (unique_ptr<Terrain, MakeUniquePool<Terrain, 32>::UniquePoolDeleter>*)
                                      pLVar6->GetParentLocationType();
                        this_05 = (Terrain*)(*this_04).operator->();
                        lightProbe = (LightProbe*)this_05->GetLightProbe();
                        pLVar7->RecycleRenderingResources(*lightProbe);
                        pLVar8 = logger::default_logger();
                        local_168 = logger::LogStream(LOGGER_LIGHTPROBE);
                        bVar2 = local_cf;
                        bVar1 = local_d8[8];
                        pLVar7 = this_00->field_0->GetLightProbeRenderer();
                        uVar5 = pLVar7->GetNumFreeLightProbeResources();
                        ((uint8_t)pLVar8)
                            ->Log(nullptr, (LogLevel)&local_168, 5, 14438570, 603,
                                  "Recycle lightprobe A %u, %u (%u free)", (unsigned int)bVar1, (unsigned int)bVar2,
                                  (((uint64_t)uVar9 << 32) | (uint32_t)uVar5));
                    }
                }
            }
            if (local_d8[0] != (duration<long long, std::ratio<1l, 1000l>>)0) {
                AddSHCoefToCache(this_00, (MapSquareEnvIrradianceInfo*)local_d8);
                pLVar8 = logger::default_logger();
                local_1f8 = logger::LogStream(LOGGER_LIGHTPROBE);
                ((uint8_t)pLVar8)
                    ->Log(nullptr, (LogLevel)&local_1f8, 5, 14438570, 611,
                          "Calculated irradiance for %u, %u. Hash: %zu", (unsigned int)local_d8[8],
                          (unsigned int)local_cf, local_b8);
            }
            eastl::vector_set<MapSquare::MapSquarePos, eastl::less<MapSquare::MapSquarePos>, eastl::allocator,
                              eastl::vector<MapSquare::MapSquarePos>>::erase(this_00->field_928);
        }
        return fVar4 == 0;
    }

} // namespace jag::game
