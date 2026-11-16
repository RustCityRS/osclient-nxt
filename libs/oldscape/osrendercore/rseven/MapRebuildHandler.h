// libs/oldscape/osrendercore/rseven/MapRebuildHandler.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::oldscape::rseven {
    class MapRebuildHandler {
    public:
        void DeleteRebuildResults(MapRebuildResults*);
    };

    class MapRebuildHandler_LogicThread {
    public:
        GetBlendTerrain();
        void SetBlendTerrain(bool);
        void RebuildTerrain(dash3d::world const&, rs2lib::CoordGrid const&, MapRebuildResults&);
        void RebuildSquare(dash3d::world const&, MapRebuildSquare&,
                           eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&);
        void CollectGroundData(dash3d::Square const*, int, dash3d::world const&, int, int, int, int, int,
                               eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&,
                               BuildTerrainResultLevel&, int, int);
        void RGBAFromLightness(int);
        bool IsQuickGroundBlendable(dash3d::QuickGround const&);
        void GetPackedInterpolatedGroundColour(dash3d::world const&, int, int, jag::math::Vector3T<int>);
        bool IsGroundBlendable(dash3d::Ground const&, int);
        GetInterpolatedGroundColour(dash3d::world const&, int, int, jag::math::Vector3T<int>);
        void SumVertexGroundColours(dash3d::Square const&, jag::math::Vector3T<int>, jag::math::Vector4T<float>&, int&);
        void SumQuickGroundColours(dash3d::Square const&, dash3d::QuickGround const&, jag::math::Vector3T<int>,
                                   jag::math::Vector4T<float>&, int&);
        void SumDetailedGroundColours(dash3d::Ground const&, jag::math::Vector3T<int>, jag::math::Vector4T<float>&,
                                      int&);
        void HandleRebuild(dash3d::world const&, rs2lib::CoordGrid const&, jagex3::Js5&);
        static /* 16 bytes */ m_blendTerrain; // = { 1, 0, 0, 0 }

        // data members, from how the methods use this: 80 bytes
        char _unknown_0[36];
        int field_36; // offset 36
        int field_40; // offset 40
        char _unknown_44[4];
        shared_ptr field_48; // offset 48
        shared_ptr field_64; // offset 64
    };

    class MapRebuildHandler_RenderThread {
    public:
        void HandleRebuild(MapRebuildResults&, jag::graphics::RT7Core&);
        void RebuildSquareTerrain(MapRebuildSquare&, jag::graphics::RT7Core&);
    };

    // 0x1000625b0, 16 bytes, inline, placed by debug map only (low confidence)
    // MapRebuildHandler_LogicThread::GetBlendTerrain()
    undefined8 MapRebuildHandler_LogicThread::GetBlendTerrain() {
        return CONCAT71(16839539, m_blendTerrain);
    }

} // namespace jag::oldscape::rseven

namespace jag::oldscape {
    class OSRenderCore_LogicThread_RSeven {
    public:
        long Instance();
        void SetMaterials(jagex3::Js5&);
        void GetEffectListMutable();
        void GetEffectList() const;
        long GetPostProcessConfig();
        long GetSSAOParams();
        long GetSunlightOptions();
        void GetVolumetricScatteringParams();
        void GetVolumetricScatteringParamsMutable();
        void GetLightScatteringParams();
        void GetLightScatteringParamsMutable();
        long GetEffectTransitionMilliseconds();
        OSRenderCore_LogicThread_RSeven();
        ~OSRenderCore_LogicThread_RSeven();
        void GetMaterialManagerForCombining();

        // data members, from how the methods use this: 680 bytes
        undefined8 field_0; // offset 0
        char _unknown_8[672];
    };

    // 0x10036b410, 32 bytes, inline, placed by class header (inline)
    // OSRenderCore_LogicThread_RSeven::GetMaterialManagerForCombining()
    void OSRenderCore_LogicThread_RSeven::GetMaterialManagerForCombining() {
        std::unique_ptr<jag::graphics::MaterialManager, std::default_delete<jag::graphics::MaterialManager>>::operator*(
            (unique_ptr<jag::graphics::MaterialManager,
                        std::default_delete<jag::graphics::MaterialManager>>*)&field_672);
    }

} // namespace jag::oldscape
