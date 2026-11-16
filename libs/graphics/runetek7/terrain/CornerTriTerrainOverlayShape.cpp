// libs/graphics/runetek7/terrain/CornerTriTerrainOverlayShape.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class CornerTriTerrainOverlayShape {
    public:
        // virtual methods in vtable order
        virtual ~CornerTriTerrainOverlayShape();
        virtual uint8_t* GetTriangles(GridTile& gridTile1, GridTile* gridTile2, GridTile* gridTile3, int arg4, int arg5,
                                      const TerrainPatch* terrainPatch);
        virtual GridTile* GetDominantSource(const GridTile& gridTile1, const GridTile* gridTile2,
                                            const GridTile* gridTile3, int arg4,
                                            const TerrainPatch* terrainPatch) const;
        CornerTriTerrainOverlayShape(TerrainOverlayShapeType terrainOverlayShapeType, bool arg2);
        void Build(const GridTile& gridTile, int arg2, int arg3, TerrainBaseData& terrainBaseData1,
                   TerrainBaseData* terrainBaseData2, TerrainBaseData* terrainBaseData3,
                   const TerrainPatch* terrainPatch);

    private:
        char field_8;
        uint8_t _unknown_9[39];
        bool field_48;
    };

    // 0x1007b2b20
    CornerTriTerrainOverlayShape::CornerTriTerrainOverlayShape(TerrainOverlayShapeType terrainOverlayShapeType,
                                                               bool arg2)
        : TerrainOverlayShape(terrainOverlayShapeType), field_48(arg2) {}

    // 0x1007b2b60
    CornerTriTerrainOverlayShape::~CornerTriTerrainOverlayShape() {}

    // 0x1007b2ba0
    uint8_t* CornerTriTerrainOverlayShape::GetTriangles(GridTile& gridTile1, GridTile* gridTile2, GridTile* gridTile3,
                                                        int arg4, int arg5, const TerrainPatch* terrainPatch) {
        GridTile* terrainBaseData3 = gridTile3;
        GridTile* terrainBaseData2 = gridTile2;
        if (field_48 == false) {
            terrainBaseData3 = gridTile2;
            terrainBaseData2 = gridTile3;
        }
        if (terrainBaseData2 != nullptr) {
            *(uint32_t*)&terrainBaseData2->field_20 = *(uint32_t*)&gridTile1.field_20;
            *(uint32_t*)((long)&terrainBaseData2->field_20 + 4) = *(uint32_t*)((long)&gridTile1.field_20 + 4);
        }
        if (terrainBaseData3 != nullptr) {
            *(uint32_t*)&terrainBaseData3->field_20 = *(uint32_t*)&gridTile1.field_20;
            *(uint32_t*)((long)&terrainBaseData3->field_20 + 4) = *(uint32_t*)((long)&gridTile1.field_20 + 4);
        }
        uint8_t* local_50 = &TerrainConstants::EMPTY_SOURCE;
        uint64_t local_60 = 3;
        GridTile* local_48 = gridTile2;
        GridTile* local_40 = gridTile3;
        auto terrainBaseData1 = TerrainConstants::GetDominantSource<TerrainBaseData>(false, &local_50);
        Build(gridTile1, arg4, arg5, *terrainBaseData1, terrainBaseData2, terrainBaseData3, terrainPatch);
        return &field_16;
    }

    // 0x1007b2c90
    void CornerTriTerrainOverlayShape::Build(const GridTile& gridTile, int arg2, int arg3,
                                             TerrainBaseData& terrainBaseData1, TerrainBaseData* terrainBaseData2,
                                             TerrainBaseData* terrainBaseData3, const TerrainPatch* terrainPatch) {
        float fVar1;
        vector<eastl::pair<eastl::fixed_string<char, 16>, float>>* pvVar2;
        long lVar8;
        TerrainVertex* terrainVertex2;
        TerrainVertex* pTVar9;
        int iVar10;
        int arg2_00;
        Vector2T<float>* local_40;

        uint8_t* this_01 = &field_16;
        TerrainBaseData* local_58 = terrainBaseData1;
        TerrainVertex* local_50 = (TerrainVertex*)terrainBaseData2;
        this_01->reserve(12);
        vector<eastl::pair<eastl::fixed_string<char, 16>, float>>* local_60 =
            (vector<eastl::pair<eastl::fixed_string<char, 16>, float>>*)this_01;
        this_01->clear();
        TerrainVertex local_e0;
        TerrainVertex local_a0;
        auto pVVar5 = TerrainConstants::GetEdgeCentreOffset(0, *(int*)&gridTile.field_64);
        auto this_00 = TerrainConstants::GetEdgeCentreOffset(3, *(int*)&gridTile.field_64);
        float* pfVar6 = (float*)(*pVVar5)[0];
        local_40._0_4_ = *pfVar6;
        pfVar6 = (float*)(*pVVar5)[1];
        int iVar12 = arg3;
        TerrainBaseData* pTVar3 = local_58;
        terrainPatch->InterpolateCentreVertex(local_e0, gridTile, arg2, arg3, local_40._0_4_, *pfVar6, *local_58);
        uint32_t* puVar7 = (uint32_t*)(*this_00)[0];
        local_40 = (Vector2T<float>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(*puVar7));
        pfVar6 = (float*)(*this_00)[1];
        TerrainVertex* pTVar11 = local_50;
        GridTile* local_48 = gridTile;
        terrainPatch->InterpolateCentreVertex(local_a0, gridTile, arg2, iVar12, local_40._0_4_, *pfVar6, *pTVar3);
        if ((pTVar11 != nullptr) && (*(char*)&pTVar11->field_12 != '\0')) {
            pVVar5 = (Vector2T<float>*)TerrainConstants::GetCornerCoord(4, *(int*)&local_48->field_64);
            pvVar2 = local_60;
            lVar8 = local_60->size();
            pvVar2->resize(lVar8 + 3);
            lVar8 = pvVar2->size();
            terrainVertex2 = (TerrainVertex*)(*pvVar2)[lVar8 - 3];
            TerrainConstants::CopyVertexLocationAndNormal(local_e0, *terrainVertex2);
            pTVar9 = &local_e0;
            if (pTVar11->field_28 == '\0') {
                pTVar9 = pTVar11;
            }
            TerrainConstants::CopyVertexSource(*pTVar9, *terrainVertex2);
            pfVar6 = (float*)(*pVVar5)[0];
            iVar12 = (int)*pfVar6 + arg2;
            pfVar6 = (float*)(*pVVar5)[1];
            terrainPatch->GetSharedVertex(terrainVertex2[1].field_4, iVar12, (int)*pfVar6 + arg3, *pTVar11);
            TerrainConstants::CopyVertexLocationAndNormal(local_a0, terrainVertex2[2].field_8);
            if (pTVar11->field_28 != '\0') {
                pTVar11 = &local_a0;
            }
            TerrainConstants::CopyVertexSource(*pTVar11, terrainVertex2[2].field_8);
        }
        GridTile* pGVar4 = local_48;
        if ((terrainBaseData3 != nullptr) && (*(char*)&terrainBaseData3->field_12 != '\0')) {
            local_40 = (Vector2T<float>*)TerrainConstants::GetCornerCoord(5, *(int*)&local_48->field_64);
            pVVar5 = (Vector2T<float>*)TerrainConstants::GetCornerCoord(6, *(int*)&pGVar4->field_64);
            local_58 = (TerrainBaseData*)TerrainConstants::GetCornerCoord(7, *(int*)&pGVar4->field_64);
            pvVar2 = local_60;
            lVar8 = local_60->size();
            pvVar2->resize(lVar8 + 3);
            lVar8 = pvVar2->size();
            pTVar9 = (TerrainVertex*)(*pvVar2)[lVar8 - 3];
            TerrainConstants::CopyVertexLocationAndNormal(local_e0, *pTVar9);
            pTVar11 = &local_e0;
            if (terrainBaseData3->field_28 == '\0') {
                pTVar11 = (TerrainVertex*)terrainBaseData3;
            }
            TerrainConstants::CopyVertexSource(*pTVar11, *pTVar9);
            local_48 = (GridTile*)&pTVar9[1].field_4;
            local_50 = (TerrainVertex*)pVVar5;
            pfVar6 = (float*)(*pVVar5)[0];
            iVar12 = arg2;
            iVar10 = (int)*pfVar6 + arg2;
            pfVar6 = (float*)(*pVVar5)[1];
            terrainPatch->GetSharedVertex(*local_48, iVar10, (int)*pfVar6 + arg3, *terrainBaseData3);
            pVVar5 = local_40;
            pfVar6 = (float*)(*local_40)[0];
            fVar1 = *pfVar6;
            pfVar6 = (float*)(*pVVar5)[1];
            terrainPatch->GetSharedVertex(pTVar9[2].field_8, (int)fVar1 + iVar12, (int)*pfVar6 + arg3,
                                          *terrainBaseData3);
            lVar8 = pvVar2->size();
            pvVar2->resize(lVar8 + 3);
            lVar8 = pvVar2->size();
            pTVar9 = (TerrainVertex*)(*pvVar2)[lVar8 - 3];
            TerrainConstants::CopyVertexLocationAndNormal(local_e0, *pTVar9);
            pTVar11 = &local_e0;
            if (terrainBaseData3->field_28 == '\0') {
                pTVar11 = (TerrainVertex*)terrainBaseData3;
            }
            TerrainConstants::CopyVertexSource(*pTVar11, *pTVar9);
            TerrainConstants::CopyVertexLocationAndNormal(local_a0, pTVar9[1].field_4);
            pTVar11 = &local_a0;
            if (terrainBaseData3->field_28 == '\0') {
                pTVar11 = (TerrainVertex*)terrainBaseData3;
            }
            TerrainConstants::CopyVertexSource(*pTVar11, pTVar9[1].field_4);
            pTVar11 = local_50;
            pfVar6 = (float*)(*local_50)[0];
            iVar12 = (int)*pfVar6 + arg2;
            pfVar6 = (float*)(*pTVar11)[1];
            terrainPatch->GetSharedVertex(pTVar9[2].field_8, iVar12, (int)*pfVar6 + arg3, *terrainBaseData3);
            lVar8 = pvVar2->size();
            pvVar2->resize(lVar8 + 3);
            lVar8 = pvVar2->size();
            pTVar9 = (TerrainVertex*)(*pvVar2)[lVar8 - 3];
            TerrainConstants::CopyVertexLocationAndNormal(local_a0, *pTVar9);
            pTVar11 = &local_a0;
            if (terrainBaseData3->field_28 == '\0') {
                pTVar11 = (TerrainVertex*)terrainBaseData3;
            }
            TerrainConstants::CopyVertexSource(*pTVar11, *pTVar9);
            pTVar3 = local_58;
            pfVar6 = (float*)(*local_58)[0];
            iVar12 = arg2;
            arg2_00 = (int)*pfVar6 + arg2;
            pfVar6 = (float*)(*pTVar3)[1];
            iVar10 = arg3;
            terrainPatch->GetSharedVertex(pTVar9[1].field_4, arg2_00, (int)*pfVar6 + arg3, *terrainBaseData3);
            pTVar11 = local_50;
            pfVar6 = (float*)(*local_50)[0];
            fVar1 = *pfVar6;
            pfVar6 = (float*)(*pTVar11)[1];
            terrainPatch->GetSharedVertex(pTVar9[2].field_8, (int)fVar1 + iVar12, (int)*pfVar6 + iVar10,
                                          *terrainBaseData3);
        }
    }

    // 0x1007b3170
    GridTile* CornerTriTerrainOverlayShape::GetDominantSource(const GridTile& gridTile1, const GridTile* gridTile2,
                                                              const GridTile* gridTile3, int arg4,
                                                              const TerrainPatch* terrainPatch) const {
        bool bVar2;

        GridTile* pGVar1 = gridTile3;
        if (field_48 == false) {
            pGVar1 = gridTile2;
            gridTile2 = gridTile3;
        }
        switch (arg4) {
        case 4:
            bVar2 = *(int*)&gridTile1.field_64 == 0;
            break;
        case 5:
            bVar2 = *(int*)&gridTile1.field_64 == 1;
            break;
        case 6:
            bVar2 = *(int*)&gridTile1.field_64 == 2;
            break;
        case 7:
            bVar2 = *(int*)&gridTile1.field_64 == 3;
            break;
        default:
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "terrain/CornerTriTerrainOverlayShape.cpp",
                            58, "CornerTriTerrainOverlayShape: Unknown corner: %i", (unsigned long)(unsigned int)arg4);
        }
        if (bVar2) {
            pGVar1 = gridTile2;
        }
        return pGVar1;
    }

} // namespace jag::graphics
