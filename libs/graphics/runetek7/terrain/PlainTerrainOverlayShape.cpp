// libs/graphics/runetek7/terrain/PlainTerrainOverlayShape.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class PlainTerrainOverlayShape {
    public:
        // virtual methods in vtable order
        virtual ~PlainTerrainOverlayShape();
        virtual uint8_t* GetTriangles(GridTile& gridTile1, GridTile* gridTile2, GridTile* gridTile3, int arg4, int arg5,
                                      const TerrainPatch* terrainPatch);
        virtual GridTile* GetDominantSource(const GridTile& gridTile1, const GridTile* gridTile2,
                                            const GridTile* gridTile3, int arg4,
                                            const TerrainPatch* terrainPatch) const;
        PlainTerrainOverlayShape(TerrainOverlayShapeType terrainOverlayShapeType);

    private:
        char field_8;
        uint8_t _unknown_9[15];
    };

    class TerrainBaseData {
    public:
        TerrainBaseData();
        TerrainBaseData(const TerrainEmptyInit& terrainEmptyInit);

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
    };

    // 0x1007b39a0
    PlainTerrainOverlayShape::PlainTerrainOverlayShape(TerrainOverlayShapeType terrainOverlayShapeType)
        : TerrainOverlayShape(terrainOverlayShapeType) {}

    // 0x1007b39d0
    PlainTerrainOverlayShape::~PlainTerrainOverlayShape() {}

    // 0x1007b3a10
    uint8_t* PlainTerrainOverlayShape::GetTriangles(GridTile& gridTile1, GridTile* gridTile2, GridTile* gridTile3,
                                                    int arg4, int arg5, const TerrainPatch* terrainPatch) {
        float fVar1;
        Vector2T<float>* pVVar2;
        Vector2T<float>* pVVar3;
        Vector2T<float>* pVVar4;
        long lVar5;
        TerrainVertex* pTVar6;
        float* pfVar7;

        uint8_t* this_00 = &field_16;
        this_00->clear();
        if ((field_8 != '\0') || (gridTile3 = gridTile1, gridTile2 = gridTile1, *(char*)&gridTile1.field_12 != '\0')) {
            this_00->reserve(6);
            if ((gridTile2 != nullptr) && (*(char*)&gridTile2->field_12 != '\0')) {
                pVVar2 = (Vector2T<float>*)TerrainConstants::GetCornerCoord(4, *(int*)&gridTile1.field_64);
                pVVar3 = (Vector2T<float>*)TerrainConstants::GetCornerCoord(7, *(int*)&gridTile1.field_64);
                pVVar4 = (Vector2T<float>*)TerrainConstants::GetCornerCoord(5, *(int*)&gridTile1.field_64);
                lVar5 = this_00->size();
                this_00->resize(lVar5 + 3);
                lVar5 = this_00->size();
                pTVar6 = (TerrainVertex*)(*this_00)[lVar5 - 3];
                pfVar7 = (float*)(*pVVar2)[0];
                fVar1 = *pfVar7;
                pfVar7 = (float*)(*pVVar2)[1];
                terrainPatch->GetSharedVertex(*pTVar6, (int)fVar1 + arg4, (int)*pfVar7 + arg5, *gridTile2);
                pfVar7 = (float*)(*pVVar3)[0];
                fVar1 = *pfVar7;
                pfVar7 = (float*)(*pVVar3)[1];
                terrainPatch->GetSharedVertex(pTVar6[1].field_4, (int)fVar1 + arg4, (int)*pfVar7 + arg5, *gridTile2);
                pfVar7 = (float*)(*pVVar4)[0];
                fVar1 = *pfVar7;
                pfVar7 = (float*)(*pVVar4)[1];
                terrainPatch->GetSharedVertex(pTVar6[2].field_8, (int)fVar1 + arg4, (int)*pfVar7 + arg5, *gridTile2);
            }
            if ((gridTile3 != nullptr) && (*(char*)&gridTile3->field_12 != '\0')) {
                pVVar2 = (Vector2T<float>*)TerrainConstants::GetCornerCoord(7, *(int*)&gridTile1.field_64);
                pVVar3 = (Vector2T<float>*)TerrainConstants::GetCornerCoord(6, *(int*)&gridTile1.field_64);
                pVVar4 = (Vector2T<float>*)TerrainConstants::GetCornerCoord(5, *(int*)&gridTile1.field_64);
                lVar5 = this_00->size();
                this_00->resize(lVar5 + 3);
                lVar5 = this_00->size();
                pTVar6 = (TerrainVertex*)(*this_00)[lVar5 - 3];
                pfVar7 = (float*)(*pVVar2)[0];
                fVar1 = *pfVar7;
                pfVar7 = (float*)(*pVVar2)[1];
                terrainPatch->GetSharedVertex(*pTVar6, (int)fVar1 + arg4, (int)*pfVar7 + arg5, *gridTile3);
                pfVar7 = (float*)(*pVVar3)[0];
                fVar1 = *pfVar7;
                pfVar7 = (float*)(*pVVar3)[1];
                terrainPatch->GetSharedVertex(pTVar6[1].field_4, (int)fVar1 + arg4, (int)*pfVar7 + arg5, *gridTile3);
                pfVar7 = (float*)(*pVVar4)[0];
                fVar1 = *pfVar7;
                pfVar7 = (float*)(*pVVar4)[1];
                terrainPatch->GetSharedVertex(pTVar6[2].field_8, (int)fVar1 + arg4, (int)*pfVar7 + arg5, *gridTile3);
            }
        }
        return this_00;
    }

    // 0x1007b3d00
    GridTile* PlainTerrainOverlayShape::GetDominantSource(const GridTile& gridTile1, const GridTile* gridTile2,
                                                          const GridTile* gridTile3, int arg4,
                                                          const TerrainPatch* terrainPatch) const {
        uint64_t local_28;
        GridTile* local_20;
        GridTile* local_18;

        if (field_8 == '\x01') {
            switch (arg4 - *(int*)&gridTile1.field_64 & 3) {
            case 0:
                break;
            default:
                local_28 = 2;
                local_20 = gridTile2;
                local_18 = gridTile3;
                gridTile2 = (GridTile*)TerrainConstants::GetDominantSource<TerrainBaseData const>(false, &local_20);
                break;
            case 2:
                gridTile2 = gridTile3;
            }
        } else {
            gridTile2 = gridTile1;
        }
        return gridTile2;
    }

    // 0x1007b3da0
    TerrainBaseData::TerrainBaseData(const TerrainEmptyInit& terrainEmptyInit)
        : field_0(4294967295), field_4(0), field_8(1140850688), field_12(0), field_20(0), field_28(1),
          field_32(4294967295) {}

} // namespace jag::graphics
