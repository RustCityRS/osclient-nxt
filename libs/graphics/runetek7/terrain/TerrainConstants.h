// libs/graphics/runetek7/terrain/TerrainConstants.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.runetek5

namespace jag::graphics {
    class TerrainConstants {
    public:
        CreateTriangle(TerrainTriangle&, TRIANGLE_USAGE, TerrainBaseData const*, TerrainBaseData const*);
        TerrainBaseData* GetDominantSource<TerrainBaseData>(bool, std::initializer_list<TerrainBaseData*> const&);
        void CopyVertexLocationAndNormal(TerrainVertex const&, TerrainVertex&);
        void CopyVertexSource(TerrainBaseData const&, TerrainBaseData&);
        TerrainBaseData const*
        GetDominantSource<TerrainBaseData const>(bool, std::initializer_list<TerrainBaseData const*> const&);
        void GetEdgeCentreOffset(int, int);
        void GetCornerCoord(int, int);
        void CopyVertex(TerrainVertex const&, TerrainVertex&);
        void CopyTriangleSource(TerrainBaseData const&, TerrainTriangle&);
        static TerrainBaseData /* 40 bytes */ EMPTY_SOURCE;
        static math::Point<float> /* 32 bytes */ EDGE_CENTRE_OFFSETS[4]; // initialised in its definition
        static math::Point<float> /* 32 bytes */ CORNERS[4];             // initialised in its definition
    };

    // 0x100627c20, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // TerrainTextureMeta::TerrainTextureMeta(): jumps straight to the base-object constructor

    // 0x1007b1f60, 160 bytes, inline, placed by class name
    // TerrainBaseData* TerrainConstants::GetDominantSource<TerrainBaseData>(bool, std::initializer_list<TerrainBaseData*> const&)
    TerrainBaseData* TerrainConstants::GetDominantSource<TerrainBaseData>(bool param_1, initializer_list* param_2) {
        TerrainBaseData* pTVar1;
        long lVar2;
        long* plVar3;
        long* plVar4;
        TerrainBaseData* pTVar5;

        lVar2 = param_2->size();
        if (lVar2 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("arguments.size() > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/terrain/"
                      "TerrainConstants.h",
                      105, (char*)0);
        }
        plVar3 = (long*)param_2->begin();
        pTVar5 = (TerrainBaseData*)*plVar3;
        plVar4 = (long*)param_2->end();
        for (; plVar3 != plVar4; plVar3 = plVar3 + 1) {
            pTVar1 = (TerrainBaseData*)*plVar3;
            if (((pTVar1 != (TerrainBaseData*)0) && (*(char*)&pTVar1->field_12 != '\0')) &&
                ((pTVar5 == (TerrainBaseData*)0 ||
                  (((pTVar1->field_28 != '\0' && (*(int*)&pTVar5->field_32 <= *(int*)&pTVar1->field_32)) &&
                    ((*(int*)&pTVar1->field_32 != *(int*)&pTVar5->field_32 || (param_1)))))))) {
                pTVar5 = pTVar1;
            }
        }
        return pTVar5;
    }

    // 0x1007b2a50, 160 bytes, inline, placed by class name
    // TerrainBaseData const* TerrainConstants::GetDominantSource<TerrainBaseData const>(bool, std::initializer_list<TerrainBaseData const*> const&)
    TerrainBaseData* TerrainConstants::GetDominantSource<TerrainBaseData_const>(bool param_1,
                                                                                initializer_list* param_2) {
        TerrainBaseData* pTVar1;
        long lVar2;
        long* plVar3;
        long* plVar4;
        TerrainBaseData* pTVar5;

        lVar2 = param_2->size();
        if (lVar2 == 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("arguments.size() > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/terrain/"
                      "TerrainConstants.h",
                      105, (char*)0);
        }
        plVar3 = (long*)param_2->begin();
        pTVar5 = (TerrainBaseData*)*plVar3;
        plVar4 = (long*)param_2->end();
        for (; plVar3 != plVar4; plVar3 = plVar3 + 1) {
            pTVar1 = (TerrainBaseData*)*plVar3;
            if (((pTVar1 != (TerrainBaseData*)0) && (*(char*)&pTVar1->field_12 != '\0')) &&
                ((pTVar5 == (TerrainBaseData*)0 ||
                  (((pTVar1->field_28 != '\0' && (*(int*)&pTVar5->field_32 <= *(int*)&pTVar1->field_32)) &&
                    ((*(int*)&pTVar1->field_32 != *(int*)&pTVar5->field_32 || (param_1)))))))) {
                pTVar5 = pTVar1;
            }
        }
        return pTVar5;
    }

    // 0x1007b3200, 32 bytes, inline, placed by class name
    // TerrainConstants::GetEdgeCentreOffset(int, int)
    void TerrainConstants::GetEdgeCentreOffset(int param_1, int param_2) {
        std::array<math::Vector2T<float>, 4ul>::operator[]((array<math::Vector2T<float>, 4ul>*)&EDGE_CENTRE_OFFSETS,
                                                           (ulong)(param_2 + param_1 & 3));
    }

    // 0x1007b3220, 32 bytes, inline, placed by class name
    // TerrainConstants::GetCornerCoord(int, int)
    void TerrainConstants::GetCornerCoord(int param_1, int param_2) {
        std::array<math::Vector2T<float>, 4ul>::operator[]((array<math::Vector2T<float>, 4ul>*)&CORNERS,
                                                           (ulong)(param_2 + param_1 & 3));
    }

} // namespace jag::graphics

namespace jag::ui {
    // 0x100627c20: the linker folded this into graphics::TerrainTextureMeta::TerrainTextureMeta(), which has identical code
    ServerActiveProperties::ServerActiveProperties();

} // namespace jag::ui
