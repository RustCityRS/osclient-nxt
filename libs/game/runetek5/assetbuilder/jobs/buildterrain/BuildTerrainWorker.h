// libs/game/runetek5/assetbuilder/jobs/buildterrain/BuildTerrainWorker.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class BuildTerrainWorker : public ui::ComponentValueMixin // base inferred from shared vtable slots
    {
    public:
        class WaterOverlapData;
        // virtual methods in vtable order
        virtual ~BuildTerrainWorker();
        virtual uint64_t GetWorkerJobType() const;
        virtual uint8_t* Service(int arg1);
        BuildTerrainWorker();
        void DecodeTerrain();
        void BuildTerrain();
        void SplitRenderChunks();
        long GetTriangleGridTile(const graphics::TerrainPatchVertex* terrainPatchVertex);
        void GetTriangleWaterOverlapTypes(eastl::fixed_vector<WaterOverlapData, 8ul>& waterOverlapDatas,
                                          const graphics::TerrainPatchVertex* terrainPatchVertex);
        void AllocWaterGeometry(const eastl::fixed_vector<WaterOverlapData, 8ul>& waterOverlapDatas,
                                eastl::fixed_map<int, shared_ptr<BuildTerrainResultWaterData>, 8ul>& fixed_map,
                                unsigned long arg3);
        void GatherTriangleFlow(std::array<math::Vector2T<float>, 3ul>& vector2s1,
                                std::array<math::Vector2T<float>, 3ul>& vector2s2,
                                const graphics::TerrainPatchVertex* terrainPatchVertex);
        uint8_t[16] GetInterpolatedValue(eastl::vector<eastl::vector<int>>& arg1, int arg2, int arg3);
        void SetWaterVertexFlowData(graphics::WaterPatchVertex& waterPatchVertex, int arg2,
                                    std::array<math::Vector2T<float>, 3ul>& vector2s1,
                                    std::array<math::Vector2T<float>, 3ul>& vector2s2);
        uint64_t GetWaterFlowDirection(unsigned int arg1, unsigned int arg2);
        uint64_t GetWaterFlowNoise(unsigned int arg1, unsigned int arg2, const math::Vector2T<float>& vector2);
        int GetSourceLookup(unsigned int arg1) const;
        int DecodeHeightCode(int arg1, unsigned int arg2, unsigned int arg3, unsigned char arg4, bool arg5) const;
        shared_ptr* GetUnderlay(int arg1) const;
        shared_ptr* GetOverlay(int arg1) const;
        uint64_t GetMaterial(int arg1);
        unsigned long AssignUnderlay(const shared_ptr<FloorUnderlayType>& floorUnderlayType,
                                     graphics::GridTile& gridTile, unsigned short arg3);
        unsigned long AssignOverlay(const shared_ptr<FloorOverlayType>& floorOverlayType, graphics::GridTile& gridTile);
        uint8_t[16] IsTileEdge(unsigned int arg1, unsigned int arg2) const;
        uint64_t GetWaterColour(unsigned int arg1, unsigned int arg2) const;
        void GetVertexWaterOverlapTypes(unsigned int arg1, unsigned int arg2, int arg3,
                                        eastl::fixed_vector<WaterOverlapData, 8ul>& waterOverlapDatas) const;
        void SetZonePerimeterHeight(int arg1, int arg2, int arg3);
        void SetMapsquarePerimeterHeightGridGroup(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
        void SetMapsquarePerimeterHeight(int arg1);
        bool CalculatePreferredRotation(int arg1, int arg2, int arg3,
                                        const eastl::vector<eastl::vector<graphics::GridGroup>>& gridGroupss);
        void BuildTile(const DecodedTerrainTile& decodedTerrainTile, graphics::GridTile& gridTile1,
                       graphics::GridTile& gridTile2, graphics::GridTile& gridTile3,
                       const shared_ptr<FloorOverlayType>& floorOverlayType,
                       const shared_ptr<FloorUnderlayType>& floorUnderlayType1,
                       const shared_ptr<FloorUnderlayType>& floorUnderlayType2, Rotation90 rotation90);
        uint32_t
        ReselectSourceUsingCompositeData(int& arg1, int& arg2, int& arg3, int& arg4, int& arg5,
                                         std::array<eastl::vector<eastl::vector<DecodedTerrainTile>>, 4ul>*& arg6,
                                         int& arg7, int& arg8, Rotation90& rotation90,
                                         const BuildTerrainRequestData& buildTerrainRequestData);
        uint64_t GetGridTile(int arg1, int arg2, int arg3);
        int PaintRemoveRoofArea(int arg1, int arg2, int arg3, RemoveRoofPaintingProgress& removeRoofPaintingProgress);
        void DebugDumpRenderChunks();
        vector<unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true>>* GetTileLink(int arg1, int arg2,
                                                                                                    int arg3) const;
        bool IsRemoveRoof(int arg1, int arg2, int arg3) const;
        bool IsGridTileUsed(int arg1, int arg2, int arg3) const;
        void SetRoofRemovable(int arg1, int arg2, int arg3);
        bool IsRoofRemovableSet(int arg1, int arg2, int arg3);

    private:
        shared_ptr field_8;
        uint8_t _unknown_24[16];
        unsigned int field_40;
        int field_44;
        uint8_t _unknown_48[80];
        int field_128;
        uint8_t _unknown_132[4];
    };

    class BuildTerrainWorker::WaterOverlapData {
    public:
        WaterOverlapData(int arg1, unsigned char arg2);

    private:
        int field_0;
        unsigned char field_4;
    };

    // 0x100633430
    uint64_t BuildTerrainWorker::GetWorkerJobType() const {
        return 30;
    }

    // 0x1006338b0
    BuildTerrainWorker::WaterOverlapData::WaterOverlapData(int arg1, unsigned char arg2)
        : field_0(arg1), field_4(arg2) {}

    // 0x1006339b0
    BuildTerrainWorker::~BuildTerrainWorker() {
        field_112.~shared_ptr();
        field_80.~vector();
        field_48.~vector();
    }

} // namespace jag::game

namespace jag {
    // 0x10062a3f0
    shared_ptr_if_not_array<eastl::vector<eastl::vector<unsigned char>>>::type
    make_shared<eastl::vector<eastl::vector<unsigned char>>>() {
        ref_counter_shared<eastl::vector<eastl::vector<unsigned char>> _>* ref_counter_shared;
        int local_2c;
        vector<eastl::vector<unsigned char>>* local_28[2];

        auto arg1 = aligned_alloc(64, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<eastl::vector<eastl::vector<unsigned char>>>::type result;
        } else {
            local_28[0] = placement_new<eastl::vector<eastl::vector<unsigned char>>>((void*)((long)arg1 + 32));
            local_2c = 1;
            ref_counter_shared =
                placement_new<ref_counter_shared<eastl::vector<eastl::vector<unsigned char>>>, int,
                              eastl::vector<eastl::vector<unsigned char>>*&>(arg1, &local_2c, local_28);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_28[0]);
        }
        return result;
    }

} // namespace jag
