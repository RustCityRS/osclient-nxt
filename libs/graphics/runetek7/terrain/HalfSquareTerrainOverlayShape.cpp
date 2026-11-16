// libs/graphics/runetek7/terrain/HalfSquareTerrainOverlayShape.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class HalfSquareTerrainOverlayShape {
    public:
        // virtual methods in vtable order
        virtual ~HalfSquareTerrainOverlayShape();
        virtual uint8_t* GetTriangles(GridTile& gridTile1, GridTile* gridTile2, GridTile* gridTile3, int arg4, int arg5,
                                      const TerrainPatch* terrainPatch);
        virtual GridTile* GetDominantSource(const GridTile& gridTile1, const GridTile* gridTile2,
                                            const GridTile* gridTile3, int arg4,
                                            const TerrainPatch* terrainPatch) const;
        HalfSquareTerrainOverlayShape(TerrainOverlayShapeType terrainOverlayShapeType);
        void Build(const GridTile& gridTile, int arg2, int arg3, const TerrainBaseData& terrainBaseData1,
                   TerrainBaseData* terrainBaseData2, TerrainBaseData* terrainBaseData3,
                   const TerrainPatch* terrainPatch);

    private:
        char field_8;
        uint8_t _unknown_9[15];
    };

    // 0x1007b32d0
    HalfSquareTerrainOverlayShape::HalfSquareTerrainOverlayShape(TerrainOverlayShapeType terrainOverlayShapeType)
        : TerrainOverlayShape(terrainOverlayShapeType) {}

    // 0x1007b3300
    HalfSquareTerrainOverlayShape::~HalfSquareTerrainOverlayShape() {}

    // 0x1007b3340
    uint8_t* HalfSquareTerrainOverlayShape::GetTriangles(GridTile& gridTile1, GridTile* gridTile2, GridTile* gridTile3,
                                                         int arg4, int arg5, const TerrainPatch* terrainPatch) {
        if (gridTile2 != nullptr) {
            *(uint32_t*)&gridTile2->field_20 = *(uint32_t*)&gridTile1.field_20;
            *(uint32_t*)((long)&gridTile2->field_20 + 4) = *(uint32_t*)((long)&gridTile1.field_20 + 4);
        }
        if (gridTile3 != nullptr) {
            *(uint32_t*)&gridTile3->field_20 = *(uint32_t*)&gridTile1.field_20;
            *(uint32_t*)((long)&gridTile3->field_20 + 4) = *(uint32_t*)((long)&gridTile1.field_20 + 4);
        }
        uint8_t* local_50 = &TerrainConstants::EMPTY_SOURCE;
        uint64_t local_60 = 3;
        GridTile* local_48 = gridTile2;
        GridTile* local_40 = gridTile3;
        auto terrainBaseData1 = TerrainConstants::GetDominantSource<TerrainBaseData>(false, &local_50);
        Build(gridTile1, arg4, arg5, *terrainBaseData1, gridTile2, gridTile3, terrainPatch);
        return &field_16;
    }

    // 0x1007b3420
    void HalfSquareTerrainOverlayShape::Build(const GridTile& gridTile, int arg2, int arg3,
                                              const TerrainBaseData& terrainBaseData1,
                                              TerrainBaseData* terrainBaseData2, TerrainBaseData* terrainBaseData3,
                                              const TerrainPatch* terrainPatch) {
        float fVar1;
        vector<eastl::pair<eastl::fixed_string<char, 16>, float>>* pvVar2;
        float fVar5;
        long lVar9;
        TerrainVertex* pTVar10;
        TerrainVertex* pTVar11;
        int arg2_00;
        TerrainVertex* local_68;
        Vector2T<float>* local_48;

        uint8_t* this_01 = &field_16;
        TerrainVertex* local_50 = (TerrainVertex*)terrainBaseData2;
        TerrainBaseData* local_40 = terrainBaseData1;
        this_01->reserve(12);
        vector<eastl::pair<eastl::fixed_string<char, 16>, float>>* local_60 =
            (vector<eastl::pair<eastl::fixed_string<char, 16>, float>>*)this_01;
        this_01->clear();
        TerrainVertex local_e8;
        TerrainVertex local_a8;
        auto pVVar6 = TerrainConstants::GetEdgeCentreOffset(1, *(int*)&gridTile.field_64);
        auto this_00 = TerrainConstants::GetEdgeCentreOffset(3, *(int*)&gridTile.field_64);
        float* pfVar7 = (float*)(*pVVar6)[0];
        float local_34 = *pfVar7;
        pfVar7 = (float*)(*pVVar6)[1];
        int iVar13 = arg3;
        TerrainBaseData* pTVar4 = local_40;
        terrainPatch->InterpolateCentreVertex(local_e8, gridTile, arg2, arg3, local_34, *pfVar7, *local_40);
        uint32_t* puVar8 = (uint32_t*)(*this_00)[0];
        local_48 = (Vector2T<float>*)(((uint64_t)local_48._4_4_ << 32) | (uint32_t)(*puVar8));
        pfVar7 = (float*)(*this_00)[1];
        TerrainVertex* pTVar12 = local_50;
        GridTile* local_58 = gridTile;
        local_34 = (float)arg2;
        terrainPatch->InterpolateCentreVertex(local_a8, gridTile, arg2, iVar13, local_48._0_4_, *pfVar7, *pTVar4);
        GridTile* pGVar3 = local_58;
        if ((pTVar12 != nullptr) && (*(char*)&pTVar12->field_12 != '\0')) {
            local_48 = (Vector2T<float>*)TerrainConstants::GetCornerCoord(5, *(int*)&local_58->field_64);
            local_40 = (TerrainBaseData*)TerrainConstants::GetCornerCoord(4, *(int*)&pGVar3->field_64);
            pvVar2 = local_60;
            lVar9 = local_60->size();
            pvVar2->resize(lVar9 + 3);
            lVar9 = pvVar2->size();
            pTVar10 = (TerrainVertex*)(*pvVar2)[lVar9 - 3];
            TerrainConstants::CopyVertexLocationAndNormal(local_e8, *pTVar10);
            pTVar11 = &local_e8;
            if (pTVar12->field_28 == '\0') {
                pTVar11 = pTVar12;
            }
            TerrainConstants::CopyVertexSource(*pTVar11, *pTVar10);
            pVVar6 = local_48;
            local_68 = (TerrainVertex*)&pTVar10[1].field_4;
            pfVar7 = (float*)(*local_48)[0];
            iVar13 = (int)*pfVar7 + (int)local_34;
            pfVar7 = (float*)(*pVVar6)[1];
            terrainPatch->GetSharedVertex(*local_68, iVar13, (int)*pfVar7 + arg3, *pTVar12);
            pTVar4 = local_40;
            pfVar7 = (float*)(*local_40)[0];
            iVar13 = (int)*pfVar7 + (int)local_34;
            pfVar7 = (float*)(*pTVar4)[1];
            terrainPatch->GetSharedVertex(pTVar10[2].field_8, iVar13, (int)*pfVar7 + arg3, *pTVar12);
            lVar9 = pvVar2->size();
            pvVar2->resize(lVar9 + 3);
            lVar9 = pvVar2->size();
            pTVar10 = (TerrainVertex*)(*pvVar2)[lVar9 - 3];
            TerrainConstants::CopyVertexLocationAndNormal(local_e8, *pTVar10);
            pTVar11 = &local_e8;
            if (pTVar12->field_28 == '\0') {
                pTVar11 = pTVar12;
            }
            TerrainConstants::CopyVertexSource(*pTVar11, *pTVar10);
            pTVar4 = local_40;
            pfVar7 = (float*)(*local_40)[0];
            iVar13 = (int)*pfVar7 + (int)local_34;
            pfVar7 = (float*)(*pTVar4)[1];
            terrainPatch->GetSharedVertex(pTVar10[1].field_4, iVar13, (int)*pfVar7 + arg3, *pTVar12);
            TerrainConstants::CopyVertexLocationAndNormal(local_a8, pTVar10[2].field_8);
            if (pTVar12->field_28 != '\0') {
                pTVar12 = &local_a8;
            }
            TerrainConstants::CopyVertexSource(*pTVar12, pTVar10[2].field_8);
        }
        pGVar3 = local_58;
        if ((terrainBaseData3 != nullptr) && (*(char*)&terrainBaseData3->field_12 != '\0')) {
            local_50 = (TerrainVertex*)TerrainConstants::GetCornerCoord(6, *(int*)&local_58->field_64);
            local_40 = (TerrainBaseData*)TerrainConstants::GetCornerCoord(7, *(int*)&pGVar3->field_64);
            pvVar2 = local_60;
            lVar9 = local_60->size();
            pvVar2->resize(lVar9 + 3);
            lVar9 = pvVar2->size();
            pTVar11 = (TerrainVertex*)(*pvVar2)[lVar9 - 3];
            TerrainConstants::CopyVertexLocationAndNormal(local_e8, *pTVar11);
            pTVar12 = &local_e8;
            if (terrainBaseData3->field_28 == '\0') {
                pTVar12 = (TerrainVertex*)terrainBaseData3;
            }
            TerrainConstants::CopyVertexSource(*pTVar12, *pTVar11);
            TerrainConstants::CopyVertexLocationAndNormal(local_a8, pTVar11[1].field_4);
            pTVar12 = &local_a8;
            if (terrainBaseData3->field_28 == '\0') {
                pTVar12 = (TerrainVertex*)terrainBaseData3;
            }
            TerrainConstants::CopyVertexSource(*pTVar12, pTVar11[1].field_4);
            pTVar4 = local_40;
            pfVar7 = (float*)(*local_40)[0];
            iVar13 = (int)*pfVar7 + (int)local_34;
            pfVar7 = (float*)(*pTVar4)[1];
            terrainPatch->GetSharedVertex(pTVar11[2].field_8, iVar13, (int)*pfVar7 + arg3, *terrainBaseData3);
            lVar9 = pvVar2->size();
            pvVar2->resize(lVar9 + 3);
            lVar9 = pvVar2->size();
            pTVar11 = (TerrainVertex*)(*pvVar2)[lVar9 - 3];
            TerrainConstants::CopyVertexLocationAndNormal(local_e8, *pTVar11);
            pTVar12 = &local_e8;
            if (terrainBaseData3->field_28 == '\0') {
                pTVar12 = (TerrainVertex*)terrainBaseData3;
            }
            TerrainConstants::CopyVertexSource(*pTVar12, *pTVar11);
            pfVar7 = (float*)(*pTVar4)[0];
            fVar5 = local_34;
            arg2_00 = (int)*pfVar7 + (int)local_34;
            pfVar7 = (float*)(*pTVar4)[1];
            iVar13 = arg3;
            terrainPatch->GetSharedVertex(pTVar11[1].field_4, arg2_00, (int)*pfVar7 + arg3, *terrainBaseData3);
            pTVar12 = local_50;
            pfVar7 = (float*)(*local_50)[0];
            fVar1 = *pfVar7;
            pfVar7 = (float*)(*pTVar12)[1];
            terrainPatch->GetSharedVertex(pTVar11[2].field_8, (int)fVar1 + (int)fVar5, (int)*pfVar7 + iVar13,
                                          *terrainBaseData3);
        }
    }

    // 0x1007b3900
    GridTile* HalfSquareTerrainOverlayShape::GetDominantSource(const GridTile& gridTile1, const GridTile* gridTile2,
                                                               const GridTile* gridTile3, int arg4,
                                                               const TerrainPatch* terrainPatch) const {
        switch (arg4) {
        case 4:
            if ((*(int*)&gridTile1.field_64 != 0) && (*(int*)&gridTile1.field_64 != 3)) {
                gridTile2 = gridTile3;
            }
            break;
        case 5:
            if (1 < *(unsigned int*)&gridTile1.field_64) {
                gridTile2 = gridTile3;
            }
            break;
        case 6:
            if (1 < *(int*)&gridTile1.field_64 - 1U) {
                gridTile2 = gridTile3;
            }
            break;
        case 7:
            if ((*(unsigned int*)&gridTile1.field_64 & 4294967294) != 2) {
                gridTile2 = gridTile3;
            }
            break;
        default:
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "terrain/HalfSquareTerrainOverlayShape.cpp",
                            51, "TerrainOverlayShape: Unknown corner: %i", (unsigned long)(unsigned int)arg4);
        }
        return gridTile2;
    }

} // namespace jag::graphics
