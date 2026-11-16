// libs/graphics/runetek7/terrain/TerrainConstants.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::graphics {
    class TerrainConstants {
    public:
        void CreateTriangle(TerrainTriangle& terrainTriangle, TRIANGLE_USAGE tRIANGLE_USAGE,
                            const TerrainBaseData* terrainBaseData1, const TerrainBaseData* terrainBaseData2);
        TerrainBaseData*
        GetDominantSource<TerrainBaseData>(bool arg1, std::initializer_list<TerrainBaseData*> const& initializer_list);
        void CopyVertexLocationAndNormal(const TerrainVertex& terrainVertex1, TerrainVertex& terrainVertex2);
        void CopyVertexSource(const TerrainBaseData& terrainBaseData1, TerrainBaseData& terrainBaseData2);
        TerrainBaseData const*
        GetDominantSource<TerrainBaseData const>(bool arg1,
                                                 std::initializer_list<TerrainBaseData const*> const& initializer_list);
        Vector2T<float>* GetEdgeCentreOffset(int arg1, int arg2);
        void GetCornerCoord(int arg1, int arg2);
        void CopyVertex(const TerrainVertex& terrainVertex1, TerrainVertex& terrainVertex2);
        void CopyTriangleSource(const TerrainBaseData& terrainBaseData, TerrainTriangle& terrainTriangle);
        static TerrainBaseData EMPTY_SOURCE;
        static math::Point<float> EDGE_CENTRE_OFFSETS[4]; // initialised in its definition
        static math::Point<float> CORNERS[4];             // initialised in its definition
    };

    // 0x1007b1f60
    TerrainBaseData* TerrainConstants::GetDominantSource<TerrainBaseData>(
        bool arg1, std::initializer_list<TerrainBaseData*> const& initializer_list) {
        TerrainBaseData* pTVar1;

        if (initializer_list.size() == 0) {
            LogAssert("arguments.size() > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/terrain/"
                      "TerrainConstants.h",
                      105, nullptr);
        }
        auto plVar3 = initializer_list.begin();
        TerrainBaseData* pTVar5 = (TerrainBaseData*)*plVar3;
        auto plVar4 = initializer_list.end();
        for (; plVar3 != plVar4; plVar3 = plVar3 + 1) {
            pTVar1 = (TerrainBaseData*)*plVar3;
            if (((pTVar1 != nullptr) && (*(char*)&pTVar1->field_12 != '\0')) &&
                ((pTVar5 == nullptr ||
                  (((pTVar1->field_28 != '\0' && (*(int*)&pTVar5->field_32 <= *(int*)&pTVar1->field_32)) &&
                    ((*(int*)&pTVar1->field_32 != *(int*)&pTVar5->field_32 || (arg1)))))))) {
                pTVar5 = pTVar1;
            }
        }
        return pTVar5;
    }

    // 0x1007b2a50
    TerrainBaseData const* TerrainConstants::GetDominantSource<TerrainBaseData const>(
        bool arg1, std::initializer_list<TerrainBaseData const*> const& initializer_list) {
        TerrainBaseData* pTVar1;

        if (initializer_list.size() == 0) {
            LogAssert("arguments.size() > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/terrain/"
                      "TerrainConstants.h",
                      105, nullptr);
        }
        auto plVar3 = initializer_list.begin();
        TerrainBaseData* pTVar5 = (TerrainBaseData*)*plVar3;
        auto plVar4 = initializer_list.end();
        for (; plVar3 != plVar4; plVar3 = plVar3 + 1) {
            pTVar1 = (TerrainBaseData*)*plVar3;
            if (((pTVar1 != nullptr) && (*(char*)&pTVar1->field_12 != '\0')) &&
                ((pTVar5 == nullptr ||
                  (((pTVar1->field_28 != '\0' && (*(int*)&pTVar5->field_32 <= *(int*)&pTVar1->field_32)) &&
                    ((*(int*)&pTVar1->field_32 != *(int*)&pTVar5->field_32 || (arg1)))))))) {
                pTVar5 = pTVar1;
            }
        }
        return pTVar5;
    }

    // 0x1007b3200
    Vector2T<float>* TerrainConstants::GetEdgeCentreOffset(int arg1, int arg2) {
        return (Vector2T<float>*)EDGE_CENTRE_OFFSETS[(unsigned long)(arg2 + arg1 & 3)];
    }

    // 0x1007b3220
    void TerrainConstants::GetCornerCoord(int arg1, int arg2) {
        CORNERS[(unsigned long)(arg2 + arg1 & 3)];
    }

} // namespace jag::graphics

namespace jag::ui {
    // 0x100627c20: ServerActiveProperties::ServerActiveProperties() has the same machine code as graphics::TerrainTextureMeta::TerrainTextureMeta()

} // namespace jag::ui
