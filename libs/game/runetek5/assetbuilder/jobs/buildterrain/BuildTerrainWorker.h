// libs/game/runetek5/assetbuilder/jobs/buildterrain/BuildTerrainWorker.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class BuildTerrainWorker : public ui::ComponentValueMixin // base inferred from shared vtable slots
    {
    public:
        class WaterOverlapData;
        // virtual methods in vtable order
        virtual ~BuildTerrainWorker();
        virtual GetWorkerJobType() const;
        virtual Service(int);
        BuildTerrainWorker();
        void DecodeTerrain();
        void BuildTerrain();
        void SplitRenderChunks();
        long GetTriangleGridTile(graphics::TerrainPatchVertex const*);
        void GetTriangleWaterOverlapTypes(eastl::fixed_vector<WaterOverlapData, 8ul, true, eastl::allocator>&,
                                          graphics::TerrainPatchVertex const*);
        void AllocWaterGeometry(eastl::fixed_vector<WaterOverlapData, 8ul, true, eastl::allocator> const&,
                                eastl::fixed_map<int, shared_ptr<BuildTerrainResultWaterData>, 8ul, true,
                                                 eastl::less<int>, eastl::allocator>&,
                                unsigned long);
        void GatherTriangleFlow(std::array<math::Vector2T<float>, 3ul>&, std::array<math::Vector2T<float>, 3ul>&,
                                graphics::TerrainPatchVertex const*);
        GetInterpolatedValue(eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>&, int, int);
        void SetWaterVertexFlowData(graphics::WaterPatchVertex&, int, std::array<math::Vector2T<float>, 3ul>&,
                                    std::array<math::Vector2T<float>, 3ul>&);
        GetWaterFlowDirection(unsigned int, unsigned int);
        GetWaterFlowNoise(unsigned int, unsigned int, math::Vector2T<float> const&);
        int GetSourceLookup(unsigned int) const;
        int DecodeHeightCode(int, unsigned int, unsigned int, unsigned char, bool) const;
        shared_ptr* GetUnderlay(int) const;
        shared_ptr* GetOverlay(int) const;
        GetMaterial(int);
        ulong AssignUnderlay(shared_ptr<FloorUnderlayType> const&, graphics::GridTile&, unsigned short);
        ulong AssignOverlay(shared_ptr<FloorOverlayType> const&, graphics::GridTile&);
        IsTileEdge(unsigned int, unsigned int) const;
        GetWaterColour(unsigned int, unsigned int) const;
        void GetVertexWaterOverlapTypes(unsigned int, unsigned int, int,
                                        eastl::fixed_vector<WaterOverlapData, 8ul, true, eastl::allocator>&) const;
        void SetZonePerimeterHeight(int, int, int);
        void SetMapsquarePerimeterHeightGridGroup(int, int, int, int, int, int, int);
        void SetMapsquarePerimeterHeight(int);
        bool CalculatePreferredRotation(
            int, int, int,
            eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator> const&);
        void BuildTile(DecodedTerrainTile const&, graphics::GridTile&, graphics::GridTile&, graphics::GridTile&,
                       shared_ptr<FloorOverlayType> const&, shared_ptr<FloorUnderlayType> const&,
                       shared_ptr<FloorUnderlayType> const&, Rotation90);
        ReselectSourceUsingCompositeData(
            int&, int&, int&, int&, int&,
            std::array<eastl::vector<eastl::vector<DecodedTerrainTile, eastl::allocator>, eastl::allocator>, 4ul>*&,
            int&, int&, Rotation90&, BuildTerrainRequestData const&);
        GetGridTile(int, int, int);
        int PaintRemoveRoofArea(int, int, int, RemoveRoofPaintingProgress&);
        void DebugDumpRenderChunks();
        vector<unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>*
        GetTileLink(int, int, int) const;
        uint IsRemoveRoof(int, int, int) const;
        uint IsGridTileUsed(int, int, int) const;
        void SetRoofRemovable(int, int, int);
        bool IsRoofRemovableSet(int, int, int);

        // data members, from how the methods use this: 136 bytes, the first 8 are ComponentValueMixin
        shared_ptr field_8; // offset 8
        char _unknown_24[16];
        uint field_40; // offset 40
        int field_44;  // offset 44
        char _unknown_48[80];
        int field_128; // offset 128
        char _unknown_132[4];
    };

    class BuildTerrainWorker::WaterOverlapData {
    public:
        WaterOverlapData(int, unsigned char);

        // data members, from how the methods use this: 5 bytes
        int field_0;   // offset 0
        uchar field_4; // offset 4
    };

    // 0x10062bf40, 16 bytes, complete-object constructor, inline, placed by class name
    // BuildTerrainWorker::WaterOverlapData::WaterOverlapData(int, unsigned char): jumps straight to the base-object constructor

    // 0x100633400, 16 bytes, complete-object destructor, inline, placed by class name
    // BuildTerrainWorker::~BuildTerrainWorker(): jumps straight to the base-object destructor

    // 0x100633410, 32 bytes, deleting destructor, inline, placed by class name
    // BuildTerrainWorker::~BuildTerrainWorker()
    void BuildTerrainWorker::~BuildTerrainWorker() {
        ~BuildTerrainWorker(this);
        operator_delete(this);
    }

    // 0x100633430, 16 bytes, inline, placed by class name
    // BuildTerrainWorker::GetWorkerJobType() const
    undefined8 BuildTerrainWorker::GetWorkerJobType() {
        return 30;
    }

    // 0x1006338b0, 16 bytes, base-object constructor, inline, placed by class name
    // BuildTerrainWorker::WaterOverlapData::WaterOverlapData(int, unsigned char)
    void BuildTerrainWorker::WaterOverlapData::WaterOverlapData(int param_1, uchar param_2) {
        field_0 = param_1;
        field_4 = param_2;
    }

    // 0x1006339b0, 64 bytes, base-object destructor, inline, placed by class name
    // BuildTerrainWorker::~BuildTerrainWorker()
    void BuildTerrainWorker::~BuildTerrainWorker() {
        field_0 = &PTR__BuildTerrainWorker_100f0caa0;
        (&field_112)->~shared_ptr();
        (&field_80)->~vector();
        (&field_48)->~vector();
        ~AssetWorker();
    }

} // namespace jag::game

namespace jag {
    // 0x10062a3f0, 144 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator> >::type make_shared<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>()
    jag* make_shared<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>() {
        void* pvVar1;
        ref_counter_shared* prVar2;
        int local_2c;
        vector* local_28[2];

        pvVar1 = (void*)aligned_alloc(64, 8);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(8);
        } else {
            local_28[0] =
                placement_new<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>(
                    (void*)((long)pvVar1 + 32));
            local_2c = 1;
            prVar2 = placement_new<
                ref_counter_shared<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>,
                int, eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>*&>(
                pvVar1, &local_2c, local_28);
            prVar2->~AutoSingleton(local_28[0]);
            prVar2->~AutoSingleton(local_28[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_28[0]);
        }
        return this;
    }

} // namespace jag
