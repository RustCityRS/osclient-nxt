// libs/game/runetek5/assetbuilder/jobs/buildterrain/BuildTerrainData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class BuildTerrainRequestData {
    public:
        BuildTerrainRequestData();
        ~BuildTerrainRequestData();
        void ClearMaterials(bool);

        // data members, from how the methods use this: 216 bytes
        undefined8 field_0; // offset 0
        undefined1 field_8; // offset 8
        char _unknown_9[152];
        char field_161; // offset 161
        char _unknown_162[54];
    };

    // 0x100625cf0, 288 bytes, base-object constructor, placed by debug map only (low confidence)
    // BuildTerrainRequestData::BuildTerrainRequestData()
    void BuildTerrainRequestData::BuildTerrainRequestData() {
        _func_decltype_nullptr* in_RSI;

        field_0 = 0;
        field_8 = 6;
        new (&field_16, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_32, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_48, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_64) eastl::vector<shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>, eastl::allocator>();
        new (&field_96) eastl::vector<shared_ptr<FloorOverlayType>, eastl::allocator>();
        new (&field_128) eastl::vector<shared_ptr<FloorUnderlayType>, eastl::allocator>();
        *(undefined2*)&field_160 = 1;
        new (&field_168)
            eastl::vector_map<int, graphics::Material_const*, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, graphics::Material_const*>, eastl::allocator>>();
        std::array<shared_ptr<eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator>>,
                   4ul>::array();
    }

    // 0x100625ea0, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // BuildTerrainRequestData::BuildTerrainRequestData(): jumps straight to the base-object constructor

    // 0x100625eb0, 128 bytes, base-object destructor, placed by debug map only (low confidence)
    // BuildTerrainRequestData::~BuildTerrainRequestData()
    void BuildTerrainRequestData::~BuildTerrainRequestData() {
        ClearMaterials(this, field_161 == '\0');
        (&field_208)->~array();
        (&field_168)->~vector_map();
        (&field_128)->~vector();
        (&field_96)->~vector();
        (&field_64)->~vector();
        (&field_48)->~shared_ptr();
        (&field_32)->~shared_ptr();
        (&field_16)->~shared_ptr();
    }

    // 0x100625f30, 112 bytes, placed by debug map only (low confidence)
    // BuildTerrainRequestData::ClearMaterials(bool)
    void BuildTerrainRequestData::ClearMaterials(bool param_1) {
        long lVar1;
        long lVar2;

        lVar1 = (&field_168)->HeapBeginPtr();
        lVar2 = (&field_168)->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 16) {
            if (!param_1) {
                safe_delete<Js5ArchiveSettings>((Js5ArchiveSettings**)(lVar1 + 8));
            }
        }
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
    }

    // 0x100625fa0, 16 bytes, complete-object destructor, placed by debug map only (low confidence)
    // BuildTerrainRequestData::~BuildTerrainRequestData(): jumps straight to the base-object destructor

} // namespace jag::game

namespace jag {
    // 0x100625fb0, 48 bytes, inline, placed by debug map only (low confidence)
    // void safe_delete<graphics::Material const>(graphics::Material const*&)
    /* void safe_delete<Js5ArchiveSettings>(Js5ArchiveSettings*&) */

    void safe_delete<Js5ArchiveSettings>(Js5ArchiveSettings** param_1) {
        if (*param_1 != (Js5ArchiveSettings*)0) {
            operator_delete(*param_1);
        }
        *param_1 = (Js5ArchiveSettings*)0;
    }

} // namespace jag
