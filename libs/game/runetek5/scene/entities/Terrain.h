// libs/game/runetek5/scene/entities/Terrain.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class Terrain {
    public:
        // virtual methods in vtable order
        virtual ~Terrain();
        virtual void MainLogic(graphics::RT7Core& rt7Core, unsigned int arg2, const math::Matrix44T<float>& matrix44);
        virtual void GatherDrawableElements(graphics::DrawableQueue& drawableQueue, graphics::RT7Core& rt7Core,
                                            const math::Matrix44T<float>& matrix44,
                                            const graphics::SceneViewData& sceneViewData,
                                            const graphics::EffectManager& effectManager);
        virtual void Destruct();
        virtual bool CanRender() const;
        shared_ptr GetWaterHeights() const;
        uint8_t* GetWaterPatches() const;
        uint8_t* GetAABB() const;
        uint8_t GetHasFade() const;
        uint8_t* GetLightProbe();
        Terrain(graphics::GraphNode* graphNode, const shared_ptr<World>& world, TerrainInputData& terrainInputData,
                graphics::RT7Core* rt7Core);
        void Build(AssetBuilder* assetBuilder, int arg2, ConfigProvider* configProvider);
        unsigned long BuildTerrain(AssetBuilder* assetBuilder, int arg2, ConfigProvider* configProvider);
        void CreateCombinedLocalAABB();
        uint8_t* GetTileHeight(int& arg1, int arg2, int arg3, int arg4, bool arg5,
                               HeightOffsetType heightOffsetType) const;
        void GetTerrainData(shared_ptr<PacketT<Array<unsigned char>>>& arg1, Js5ResourceProvider* js5ResourceProvider,
                            int arg3, int arg4);
        void PreventFadeIn();
        void UpdateIrradiance();
        Terrain* CalculateRemoveRoofChunks(bool& arg1, bool& arg2, graphics::TerrainPatch& terrainPatch, bool arg4,
                                           bool arg5, bool arg6, bool arg7, int arg8, int arg9, World& world,
                                           int arg11);
        void DebugShowPrimitiveTerrainPatchWhole(bool arg1, bool arg2, graphics::TerrainPatch& terrainPatch, int arg4);
        void AllocateLocationHeightOffsets(int arg1);
        void ImportHeightAdjustments(const Terrain& terrain);
        void AddLocationHeightOffset(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
        void RemoveLocationHeightOffset(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7);
        int GetLocationHeightOffset(int arg1, int arg2, int arg3, HeightOffsetType heightOffsetType) const;
        uint8_t* GetFineHeight(int& arg1, int arg2, int arg3, int arg4, bool arg5,
                               HeightOffsetType heightOffsetType) const;
        int GetFineWaterDepth(int arg1, int arg2, int arg3) const;
        unsigned int CalculatePrimaryWaterHeightNearTile(int arg1, int arg2) const;
        bool HasWater() const;
        unsigned long GetTileRoofLinkInner(
            const eastl::fixed_vector<shared_ptr<eastl::vector<eastl::vector<unsigned char>>>, 4ul>& arg1, int arg2,
            int arg3, int arg4) const;
        bool LinkMapValidPos(int arg1, int arg2, int arg3) const;
        unsigned long IsReadyToRender() const;
        unsigned long DebugShowPrimitiveTerrainPatch(bool arg1, graphics::TerrainPatch& terrainPatch,
                                                     const eastl::pair<int, graphics::RenderChunk>& arg3, int arg4,
                                                     int arg5, const math::Rect<int>& rect, int arg7, int arg8,
                                                     int arg9, int arg10, bool arg11);
        void GetTileLink(int arg1, int arg2, int arg3) const;
        void GetRemoveRoofID(int arg1, int arg2, int arg3) const;
        uint8_t GetUnderworldData(int arg1, int arg2) const;
        void GetHeightMap(int arg1) const;
        void SetHideTerrain(bool arg1);
        bool IsHeightZero() const;
        static int64_t m_debugPrimitiveText;

    private:
        uint8_t** field_8;
        uint8_t _unknown_16[48];
        char field_64;
        uint8_t field_65;
        uint8_t field_66;
        uint8_t field_67;
        int field_68;
        uint32_t field_72;
        uint8_t _unknown_76[40];
        uint32_t field_116;
        uint8_t _unknown_120[168];
        uint32_t field_288;
        uint32_t field_292;
        uint8_t _unknown_296[152];
        TerrainInputData field_448;
        uint8_t m_heightZero;
        uint8_t _unknown_450[134];
        shared_ptr m_waterHeights;
        uint8_t _unknown_600[224];
        uint64_t field_824;
        shared_ptr field_832;
        uint8_t field_848;
        uint8_t m_hasFade;
        uint8_t _unknown_850[2];
        float field_852;
        bool m_hideTerrain;
        uint8_t _unknown_857[823];
        RT7Core* field_1680;
    };

    // 0x1003c1280
    uint8_t Terrain::GetHasFade() const {
        return m_hasFade;
    }

    // 0x1004133b0
    void Terrain::GetTileLink(int arg1, int arg2, int arg3) const {
        GetTileRoofLinkInner(field_600, arg1, arg2, arg3);
    }

    // 0x100413470
    void Terrain::GetRemoveRoofID(int arg1, int arg2, int arg3) const {
        GetTileRoofLinkInner(field_704, arg1, arg2, arg3);
    }

    // 0x100413520
    uint8_t Terrain::GetUnderworldData(int arg1, int arg2) const {
        vector<eastl::vector<unsigned char>>* this_00 = (vector<eastl::vector<unsigned char>>*)*field_808;
        vector<unsigned char>* this_01 = (vector<unsigned char>*)(*this_00)[(long)(arg1 + 1)];
        uint8_t* puVar1 = (uint8_t*)(*this_01)[(long)(arg2 + 1)];
        return *puVar1;
    }

    // 0x1004135f0
    void Terrain::GetHeightMap(int arg1) const {
        if (4 < (unsigned int)arg1) {
            LogAssert("level >= 0 && level <= constants::MapConstants::LEVELS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/Terrain.h",
                      127, nullptr);
        }
        field_456[(long)arg1];
    }

    // 0x1004144c0
    void Terrain::SetHideTerrain(bool arg1) {
        m_hideTerrain = arg1;
    }

    // 0x100491bf0
    bool Terrain::IsHeightZero() const {
        return m_heightZero;
    }

} // namespace jag::game

namespace jag::graphics {
    class TerrainTextureMeta {
    public:
        TerrainTextureMeta();
    };

    class TerrainTriangle {
    public:
        TerrainTriangle();

    private:
        uint32_t field_0;
        uint16_t field_4;
        uint8_t _unknown_6[2];
        uint32_t field_8;
        uint64_t field_12;
        uint64_t field_20;
        uint8_t field_28;
        uint8_t _unknown_29[3];
        uint64_t field_32;
        uint8_t field_40;
    };

} // namespace jag::graphics
