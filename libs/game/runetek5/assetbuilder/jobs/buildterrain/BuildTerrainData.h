// libs/game/runetek5/assetbuilder/jobs/buildterrain/BuildTerrainData.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class BuildTerrainRequestData {
    public:
        BuildTerrainRequestData();
        ~BuildTerrainRequestData();
        void ClearMaterials(bool arg1);

    private:
        uint64_t field_0;
        uint8_t field_8;
        uint8_t _unknown_9[152];
        char field_161;
        uint8_t _unknown_162[54];
    };

    // 0x100625cf0
    BuildTerrainRequestData::BuildTerrainRequestData() : field_0(0), field_8(6) {
        new (&field_16) shared_ptr();
        new (&field_32) shared_ptr();
        new (&field_48) shared_ptr();
        new (&field_64) eastl::vector<shared_ptr<PacketT<Array<unsigned char>>>>();
        new (&field_96) eastl::vector<shared_ptr<FloorOverlayType>>();
        new (&field_128) eastl::vector<shared_ptr<FloorUnderlayType>>();
        *(uint16_t*)&field_160 = 1;
        new (&field_168) eastl::vector_map<int, graphics::Material const*>();
        new (&field_208) std::array<shared_ptr<eastl::map<int, graphics::TerrainTextureMeta>>, 4ul>();
    }

    // 0x100625eb0
    BuildTerrainRequestData::~BuildTerrainRequestData() {
        ClearMaterials(field_161 == '\0');
        field_208.~array();
        field_168.~vector_map();
        field_128.~vector();
        field_96.~vector();
        field_64.~vector();
        field_48.~shared_ptr();
        field_32.~shared_ptr();
        field_16.~shared_ptr();
    }

    // 0x100625f30
    void BuildTerrainRequestData::ClearMaterials(bool arg1) {
        uint8_t* this_00 = &field_168;
        long lVar1 = this_00->HeapBeginPtr();
        long lVar2 = this_00->end();
        for (; lVar1 != lVar2; lVar1 = lVar1 + 16) {
            if (!arg1) {
                safe_delete<Js5ArchiveSettings>((Material**)(lVar1 + 8));
            }
        }
        this_00->clear();
    }

} // namespace jag::game

namespace jag {
    // 0x100625fb0
    void safe_delete<graphics::Material const>(const graphics::Material*& arg1) {
        if (arg1 != nullptr) {
            operator delete(arg1);
        }
        arg1 = nullptr;
    }

} // namespace jag
