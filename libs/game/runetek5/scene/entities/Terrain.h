// libs/game/runetek5/scene/entities/Terrain.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class Terrain {
    public:
        // virtual methods in vtable order
        virtual ~Terrain();
        virtual void MainLogic(graphics::RT7Core&, unsigned int, math::Matrix44T<float> const&);
        virtual void GatherDrawableElements(graphics::DrawableQueue&, graphics::RT7Core&, math::Matrix44T<float> const&,
                                            graphics::SceneViewData const&, graphics::EffectManager const&);
        virtual void Destruct();
        virtual bool CanRender() const;
        GetWaterHeights() const;
        GetWaterPatches() const;
        GetAABB() const;
        GetHasFade() const;
        GetLightProbe();
        Terrain(graphics::GraphNode*, shared_ptr<World> const&, TerrainInputData&, graphics::RT7Core*);
        void Build(AssetBuilder*, int, ConfigProvider*);
        ulong BuildTerrain(AssetBuilder*, int, ConfigProvider*);
        void CreateCombinedLocalAABB();
        GetTileHeight(int&, int, int, int, bool, HeightOffsetType) const;
        GetTerrainData(shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>&, Js5ResourceProvider*, int, int);
        void PreventFadeIn();
        void UpdateIrradiance();
        CalculateRemoveRoofChunks(bool&, bool&, graphics::TerrainPatch&, bool, bool, bool, bool, int, int, World&, int);
        void DebugShowPrimitiveTerrainPatchWhole(bool, bool, graphics::TerrainPatch&, int);
        void AllocateLocationHeightOffsets(int);
        void ImportHeightAdjustments(Terrain const&);
        void AddLocationHeightOffset(int, int, int, int, int, int, int);
        void RemoveLocationHeightOffset(int, int, int, int, int, int, int);
        int GetLocationHeightOffset(int, int, int, HeightOffsetType) const;
        GetFineHeight(int&, int, int, int, bool, HeightOffsetType) const;
        int GetFineWaterDepth(int, int, int) const;
        uint CalculatePrimaryWaterHeightNearTile(int, int) const;
        byte HasWater() const;
        ulong GetTileRoofLinkInner(
            eastl::fixed_vector<
                shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>, 4ul, true,
                eastl::allocator> const&,
            int, int, int) const;
        bool LinkMapValidPos(int, int, int) const;
        ulong IsReadyToRender() const;
        ulong DebugShowPrimitiveTerrainPatch(bool, graphics::TerrainPatch&,
                                             eastl::pair<int, graphics::RenderChunk> const&, int, int,
                                             math::Rect<int> const&, int, int, int, int, bool);
        void GetTileLink(int, int, int) const;
        void GetRemoveRoofID(int, int, int) const;
        GetUnderworldData(int, int) const;
        void GetHeightMap(int) const;
        void SetHideTerrain(bool);
        IsHeightZero() const;
        static /* 8 bytes */ m_debugPrimitiveText;

        // data members, from how the methods use this: 1688 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined** field_8; // offset 8
        char _unknown_16[49];
        byte field_65; // offset 65
        byte field_66; // offset 66
        char _unknown_67[221];
        undefined4 field_288; // offset 288
        undefined4 field_292; // offset 292
        char _unknown_296[152];
        TerrainInputData field_448; // offset 448
        undefined1 m_heightZero;    // offset 449
        char _unknown_450[134];
        shared_ptr m_waterHeights; // offset 584
        char _unknown_600[224];
        undefined8 field_824; // offset 824
        shared_ptr field_832; // offset 832
        byte field_848;       // offset 848
        undefined1 m_hasFade; // offset 849
        char _unknown_850[2];
        float field_852;    // offset 852
        bool m_hideTerrain; // offset 856
        char _unknown_857[823];
        RT7Core* field_1680; // offset 1680
    };

    // 0x1003c1280, 16 bytes, inline, placed by class name and debug map
    // Terrain::GetHasFade() const
    undefined1 Terrain::GetHasFade() {
        return m_hasFade;
    }

    // 0x1004133b0, 32 bytes, inline, placed by class name
    // Terrain::GetTileLink(int, int, int) const
    void Terrain::GetTileLink(int param_1, int param_2, int param_3) {
        GetTileRoofLinkInner(this, (fixed_vector*)&field_600, param_1, param_2, param_3);
    }

    // 0x100413470, 32 bytes, inline, placed by class name
    // Terrain::GetRemoveRoofID(int, int, int) const
    void Terrain::GetRemoveRoofID(int param_1, int param_2, int param_3) {
        GetTileRoofLinkInner(this, (fixed_vector*)&field_704, param_1, param_2, param_3);
    }

    // 0x100413520, 64 bytes, inline, placed by class name
    // Terrain::GetUnderworldData(int, int) const
    undefined1 Terrain::GetUnderworldData(int param_1, int param_2) {
        vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>* this_00;
        vector<unsigned char, eastl::allocator>* this_01;
        undefined1* puVar1;

        this_00 = (vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>*)
            shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>::operator*(
                (shared_ptr<
                    eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>*)&field_808);
        this_01 = (vector<unsigned char, eastl::allocator>*)
            eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>::operator[](
                this_00, (long)(param_1 + 1));
        puVar1 = (undefined1*)eastl::vector<unsigned char, eastl::allocator>::operator[](this_01, (long)(param_2 + 1));
        return *puVar1;
    }

    // 0x1004135f0, 80 bytes, inline, placed by class name
    // Terrain::GetHeightMap(int) const
    void Terrain::GetHeightMap(int param_1) {
        if (4 < (uint)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("level >= 0 && level <= constants::MapConstants::LEVELS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/scene/"
                      "entities/Terrain.h",
                      127, (char*)0);
        }
        eastl::vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>,
                      eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
        operator[]((vector<shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>,
                           eastl::fixed_vector_allocator<16ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)&field_456,
                   (long)param_1);
    }

    // 0x1004144c0, 16 bytes, inline, placed by class name
    // Terrain::SetHideTerrain(bool)
    void Terrain::SetHideTerrain(bool param_1) {
        m_hideTerrain = param_1;
    }

    // 0x100491bf0, 16 bytes, inline, placed by class name
    // Terrain::IsHeightZero() const
    undefined1 Terrain::IsHeightZero() {
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

        // data members, from how the methods use this: 41 bytes
        undefined4 field_0; // offset 0
        undefined2 field_4; // offset 4
        char _unknown_6[2];
        undefined4 field_8;  // offset 8
        undefined8 field_12; // offset 12
        undefined8 field_20; // offset 20
        undefined1 field_28; // offset 28
        char _unknown_29[3];
        undefined8 field_32; // offset 32
        undefined1 field_40; // offset 40
    };

    // 0x1003c1290, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // SunlightEffectSaveRestore::SunlightEffectSaveRestore(SunlightDirectLighting&, DirectionalLight const&): jumps straight to the base-object constructor

    // 0x1007b3e50, 16 bytes, complete-object constructor, inline, placed by class header (inline)
    // TerrainTriangle::TerrainTriangle(): jumps straight to the base-object constructor

} // namespace jag::graphics
