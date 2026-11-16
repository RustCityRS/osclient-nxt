// libs/oldscape/osrendercore/rseven/MapRebuildHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::oldscape::rseven {
    class MapRebuildHandler {
    public:
        void DeleteRebuildResults(MapRebuildResults* mapRebuildResults);
    };

    class MapRebuildHandler_LogicThread {
    public:
        void GetBlendTerrain();
        void SetBlendTerrain(bool arg1);
        void RebuildTerrain(const dash3d::world& world, const rs2lib::CoordGrid& coordGrid,
                            MapRebuildResults& mapRebuildResults);
        void RebuildSquare(const dash3d::world& world, MapRebuildSquare& mapRebuildSquare,
                           eastl::hash_set<int>& hash_set);
        void CollectGroundData(const dash3d::Square* square, int arg2, const dash3d::world& world, int arg4, int arg5,
                               int arg6, int arg7, int arg8, eastl::hash_set<int>& hash_set,
                               BuildTerrainResultLevel& buildTerrainResultLevel, int arg11, int arg12);
        void RGBAFromLightness(int arg1);
        bool IsQuickGroundBlendable(const dash3d::QuickGround& quickGround);
        void GetPackedInterpolatedGroundColour(const dash3d::world& world, int arg2, int arg3,
                                               jag::math::Vector3T<int> vector3);
        bool IsGroundBlendable(const dash3d::Ground& ground, int arg2);
        uint64_t GetInterpolatedGroundColour(const dash3d::world& world, int arg2, int arg3,
                                             jag::math::Vector3T<int> vector3);
        void SumVertexGroundColours(const dash3d::Square& square, jag::math::Vector3T<int> vector3,
                                    jag::math::Vector4T<float>& vector4, int& arg4);
        void SumQuickGroundColours(const dash3d::Square& square, const dash3d::QuickGround& quickGround,
                                   jag::math::Vector3T<int> vector3, jag::math::Vector4T<float>& vector4, int& arg5);
        void SumDetailedGroundColours(const dash3d::Ground& ground, jag::math::Vector3T<int> vector3,
                                      jag::math::Vector4T<float>& vector4, int& arg4);
        void HandleRebuild(const dash3d::world& world, const rs2lib::CoordGrid& coordGrid, jagex3::Js5& js5);
        static int32_t m_blendTerrain[4]; // = { 1, 0, 0, 0 }

    private:
        uint8_t _unknown_0[36];
        int field_36;
        int field_40;
        int field_44;
        shared_ptr field_48;
        shared_ptr field_64;
        uint8_t _unknown_80[225];
    };

    class MapRebuildHandler_RenderThread {
    public:
        void HandleRebuild(MapRebuildResults& mapRebuildResults, jag::graphics::RT7Core& rt7Core);
        void RebuildSquareTerrain(MapRebuildSquare& mapRebuildSquare, jag::graphics::RT7Core& rt7Core);
    };

    // 0x1000625b0
    void MapRebuildHandler_LogicThread::GetBlendTerrain() {
        return m_blendTerrain;
    }

} // namespace jag::oldscape::rseven

namespace jag::oldscape {
    class OSRenderCore_LogicThread_RSeven {
    public:
        OSRenderCore_LogicThread_RSeven* Instance();
        void SetMaterials(jagex3::Js5& js5);
        EffectList* GetEffectListMutable();
        EffectList* GetEffectList() const;
        long GetPostProcessConfig();
        long GetSSAOParams();
        long GetSunlightOptions();
        void GetVolumetricScatteringParams();
        VolumetricScatteringParams* GetVolumetricScatteringParamsMutable();
        void GetLightScatteringParams();
        SimpleScatteringParams* GetLightScatteringParamsMutable();
        long GetEffectTransitionMilliseconds();
        OSRenderCore_LogicThread_RSeven();
        ~OSRenderCore_LogicThread_RSeven();
        MaterialManager* GetMaterialManagerForCombining();

    private:
        void* field_0;
        uint8_t _unknown_8[672];
    };

    // 0x10036b410
    MaterialManager* OSRenderCore_LogicThread_RSeven::GetMaterialManagerForCombining() {
        return (MaterialManager*)*field_672;
    }

} // namespace jag::oldscape
