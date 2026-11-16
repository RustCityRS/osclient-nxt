// libs/graphics/runetek7/terrain/BasicTerrainOverlayShape.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

namespace jag::graphics {
    class BasicTerrainOverlayShape {
    public:
        // virtual methods in vtable order
        virtual ~BasicTerrainOverlayShape();
        virtual vector<eastl::pair<eastl::fixed_string<char, 16>, float>>*
        GetTriangles(GridTile& gridTile1, GridTile* gridTile2, GridTile* gridTile3, int arg4, int arg5,
                     const TerrainPatch* terrainPatch);
        virtual void GetDominantSource(const GridTile& gridTile1, const GridTile* gridTile2, const GridTile* gridTile3,
                                       int arg4, const TerrainPatch* terrainPatch) const;
        BasicTerrainOverlayShape(TerrainOverlayShapeType terrainOverlayShapeType,
                                 TerrainConstants::TRIANGLE_USAGE tRIANGLE_USAGE1,
                                 TerrainConstants::TRIANGLE_USAGE tRIANGLE_USAGE2,
                                 TerrainConstants::TRIANGLE_USAGE tRIANGLE_USAGE3,
                                 TerrainConstants::TRIANGLE_USAGE tRIANGLE_USAGE4, float arg6, float arg7);
        GridTile* GetSource(const GridTile& gridTile1, const GridTile* gridTile2, const GridTile* gridTile3,
                            int arg4) const;
        uint32_t GetUseOverlay(int arg1, int arg2) const;

    private:
        char field_8;
        uint8_t _unknown_9[55];
        float field_64;
        float field_68;
        uint8_t _unknown_72[8];
    };

    // 0x1007b1540
    BasicTerrainOverlayShape::BasicTerrainOverlayShape(TerrainOverlayShapeType terrainOverlayShapeType,
                                                       TerrainConstants::TRIANGLE_USAGE tRIANGLE_USAGE1,
                                                       TerrainConstants::TRIANGLE_USAGE tRIANGLE_USAGE2,
                                                       TerrainConstants::TRIANGLE_USAGE tRIANGLE_USAGE3,
                                                       TerrainConstants::TRIANGLE_USAGE tRIANGLE_USAGE4, float arg6,
                                                       float arg7)
        : TerrainOverlayShape(terrainOverlayShapeType), field_64(arg6), field_68(arg7) {
        uint8_t* this_00 = &field_48;
        TRIANGLE_USAGE* pTVar1 = (TRIANGLE_USAGE*)(*this_00)[2];
        *pTVar1 = tRIANGLE_USAGE1;
        pTVar1 = (TRIANGLE_USAGE*)(*this_00)[0];
        *pTVar1 = tRIANGLE_USAGE2;
        pTVar1 = (TRIANGLE_USAGE*)(*this_00)[1];
        *pTVar1 = tRIANGLE_USAGE3;
        pTVar1 = (TRIANGLE_USAGE*)(*this_00)[3];
        *pTVar1 = tRIANGLE_USAGE4;
    }

    // 0x1007b1670
    BasicTerrainOverlayShape::~BasicTerrainOverlayShape() {
        field_72.~vector();
    }

    // 0x1007b16e0
    vector<eastl::pair<eastl::fixed_string<char, 16>, float>>*
    BasicTerrainOverlayShape::GetTriangles(GridTile& gridTile1, GridTile* gridTile2, GridTile* gridTile3, int arg4,
                                           int arg5, const TerrainPatch* terrainPatch) {
        uint32_t uVar2;
        uint64_t uVar3;
        uint64_t uVar4;
        uint64_t uVar5;
        uint64_t uVar6;
        uint64_t uVar7;
        GridTile* gridTile;
        vector<eastl::pair<eastl::fixed_string<char, 16>, float>>* this_02;
        TerrainTriangle* terrainTriangle;
        TRIANGLE_USAGE* pTVar8;
        uint64_t* puVar9;
        uint64_t* puVar10;
        long lVar11;
        TerrainVertex* terrainBaseData_00;
        TerrainVertex* terrainVertex2;
        int arg2;
        TerrainVertex* terrainBaseData1;
        uint32_t in_register_00000084;
        uint32_t in_register_0000008c;
        GridTile* pGVar14;
        uint8_t local_c8[16];
        uint8_t local_98[16];
        uint8_t local_78[16];
        GridTile* local_68;
        uint32_t uStack_60;
        uint32_t uStack_5c;
        uint32_t uStack_58;
        uint64_t uStack_54;
        uint32_t uStack_4f;

        uint64_t local_a8 = (((uint64_t)in_register_0000008c << 32) | (uint32_t)arg5);
        uint64_t local_a0 = (((uint64_t)in_register_00000084 << 32) | (uint32_t)arg4);
        uint8_t* this_00 = &field_72;
        GridTile* local_d8 = gridTile1;
        GridTile* local_88 = gridTile2;
        this_00->resize(4);
        uint8_t* this_01 = &field_16;
        this_01->reserve(12);
        vector<eastl::pair<eastl::fixed_string<char, 16>, float>>* local_d0 =
            (vector<eastl::pair<eastl::fixed_string<char, 16>, float>>*)this_01;
        this_01->clear();
        local_98._0_8_ = this;
        unsigned long uVar13 = 0;
        do {
            terrainTriangle = (TerrainTriangle*)(*this_00)[uVar13];
            pTVar8 = &field_48[uVar13];
            TerrainConstants::CreateTriangle(*terrainTriangle, *pTVar8, local_88, gridTile3);
            pGVar14 = local_88;
            gridTile = local_d8;
            uVar13 = uVar13 + 1;
        } while (uVar13 != 4);
        unsigned int uVar1 = *(unsigned int*)(local_98._0_8_ + 64);
        float local_7c = *(float*)(local_98._0_8_ + 68);
        local_c8 = (unsigned __int128)((unsigned int)local_7c);
        int iVar12 = *(int*)&local_d8->field_64;
        vector<TerrainTriangle>* local_b0 = (vector<TerrainTriangle>*)this_00;
        if (iVar12 == 1) {
            local_98 = (unsigned __int128)uVar1;
            puVar9 = (uint64_t*)(*this_00)[0];
            local_78._0_8_ = *puVar9;
            local_78._8_8_ = puVar9[1];
            local_68 = &puVar9[2];
            uStack_60 = (uint32_t)puVar9[3];
            uStack_5c = (uint32_t)*(uint64_t*)((long)puVar9 + 28);
            uStack_58 = (uint32_t)((unsigned long)*(uint64_t*)((long)puVar9 + 28) >> 32);
            uStack_54 = (uint64_t)*(uint64_t*)((long)puVar9 + 36);
            uStack_4f = (uint32_t)((unsigned long)*(uint64_t*)((long)puVar9 + 36) >> 40);
            puVar9 = (uint64_t*)(*this_00)[1];
            puVar10 = (uint64_t*)(*this_00)[0];
            uVar3 = puVar9[1];
            uVar4 = puVar9[2];
            uVar5 = puVar9[3];
            uVar6 = *(uint64_t*)((long)puVar9 + 25);
            uVar7 = *(uint64_t*)((long)puVar9 + 33);
            *puVar10 = *puVar9;
            puVar10[1] = uVar3;
            puVar10[2] = uVar4;
            puVar10[3] = uVar5;
            *(uint64_t*)((long)puVar10 + 25) = uVar6;
            *(uint64_t*)((long)puVar10 + 33) = uVar7;
            puVar9 = (uint64_t*)(*this_00)[2];
            puVar10 = (uint64_t*)(*this_00)[1];
            uVar3 = puVar9[1];
            uVar4 = puVar9[2];
            uVar5 = puVar9[3];
            uVar6 = *(uint64_t*)((long)puVar9 + 25);
            uVar7 = *(uint64_t*)((long)puVar9 + 33);
            *puVar10 = *puVar9;
            puVar10[1] = uVar3;
            puVar10[2] = uVar4;
            puVar10[3] = uVar5;
            *(uint64_t*)((long)puVar10 + 25) = uVar6;
            *(uint64_t*)((long)puVar10 + 33) = uVar7;
            puVar9 = (uint64_t*)(*this_00)[3];
            puVar10 = (uint64_t*)(*this_00)[2];
            uVar3 = puVar9[1];
            uVar4 = puVar9[2];
            uVar5 = puVar9[3];
            uVar6 = *(uint64_t*)((long)puVar9 + 25);
            uVar7 = *(uint64_t*)((long)puVar9 + 33);
            *puVar10 = *puVar9;
            puVar10[1] = uVar3;
            puVar10[2] = uVar4;
            puVar10[3] = uVar5;
            *(uint64_t*)((long)puVar10 + 25) = uVar6;
            *(uint64_t*)((long)puVar10 + 33) = uVar7;
            puVar9 = (uint64_t*)(*this_00)[3];
            *puVar9 = local_78._0_8_;
            puVar9[1] = local_78._8_8_;
            puVar9[2] = local_68;
            puVar9[3] = (((uint64_t)uStack_5c << 32) | (uint32_t)uStack_60);
            *(unsigned long*)((long)puVar9 + 25) =
                (((uint64_t)((uint8_t)uStack_58) << 56) |
                 (uint64_t)((((uint64_t)uStack_5c << 24) | (uint32_t)uStack_60._1_3_)));
            *(unsigned long*)((long)puVar9 + 33) = (((uint64_t)uStack_54 << 24) | (uint32_t)uStack_58._1_3_);
            local_7c = -(float)local_98._0_4_;
            pGVar14 = local_88;
        } else if (iVar12 == 2) {
            local_98 = (unsigned __int128)uVar1;
            puVar9 = (uint64_t*)(*this_00)[0];
            local_78._0_8_ = *puVar9;
            local_78._8_8_ = puVar9[1];
            local_68 = &puVar9[2];
            uStack_60 = (uint32_t)puVar9[3];
            uStack_5c = (uint32_t)*(uint64_t*)((long)puVar9 + 28);
            uStack_58 = (uint32_t)((unsigned long)*(uint64_t*)((long)puVar9 + 28) >> 32);
            uStack_54 = (uint64_t)*(uint64_t*)((long)puVar9 + 36);
            uStack_4f = (uint32_t)((unsigned long)*(uint64_t*)((long)puVar9 + 36) >> 40);
            puVar9 = (uint64_t*)(*this_00)[2];
            puVar10 = (uint64_t*)(*this_00)[0];
            uVar3 = puVar9[1];
            uVar4 = puVar9[2];
            uVar5 = puVar9[3];
            uVar6 = *(uint64_t*)((long)puVar9 + 25);
            uVar7 = *(uint64_t*)((long)puVar9 + 33);
            *puVar10 = *puVar9;
            puVar10[1] = uVar3;
            puVar10[2] = uVar4;
            puVar10[3] = uVar5;
            *(uint64_t*)((long)puVar10 + 25) = uVar6;
            *(uint64_t*)((long)puVar10 + 33) = uVar7;
            puVar9 = (uint64_t*)(*this_00)[2];
            *puVar9 = local_78._0_8_;
            puVar9[1] = local_78._8_8_;
            puVar9[2] = local_68;
            puVar9[3] = (((uint64_t)uStack_5c << 32) | (uint32_t)uStack_60);
            *(unsigned long*)((long)puVar9 + 25) =
                (((uint64_t)((uint8_t)uStack_58) << 56) |
                 (uint64_t)((((uint64_t)uStack_5c << 24) | (uint32_t)uStack_60._1_3_)));
            *(unsigned long*)((long)puVar9 + 33) = (((uint64_t)uStack_54 << 24) | (uint32_t)uStack_58._1_3_);
            puVar9 = (uint64_t*)(*this_00)[3];
            local_78._0_8_ = *puVar9;
            local_78._8_8_ = puVar9[1];
            local_68 = &puVar9[2];
            uVar3 = *(uint64_t*)((long)puVar9 + 25);
            uStack_60._0_1_ = (uint8_t)puVar9[3];
            uStack_60._1_3_ = (uint32_t)uVar3;
            uStack_5c = (uint32_t)((unsigned long)uVar3 >> 24);
            uStack_58._0_1_ = (uint8_t)((unsigned long)uVar3 >> 56);
            uStack_58._1_3_ = (uint32_t)*(uint64_t*)((long)puVar9 + 33);
            uStack_54 = (uint64_t)((unsigned long)*(uint64_t*)((long)puVar9 + 33) >> 24);
            puVar9 = (uint64_t*)(*this_00)[1];
            puVar10 = (uint64_t*)(*this_00)[3];
            uVar3 = puVar9[1];
            uVar4 = puVar9[2];
            uVar5 = puVar9[3];
            uVar6 = *(uint64_t*)((long)puVar9 + 25);
            uVar7 = *(uint64_t*)((long)puVar9 + 33);
            *puVar10 = *puVar9;
            puVar10[1] = uVar3;
            puVar10[2] = uVar4;
            puVar10[3] = uVar5;
            *(uint64_t*)((long)puVar10 + 25) = uVar6;
            *(uint64_t*)((long)puVar10 + 33) = uVar7;
            puVar9 = (uint64_t*)(*this_00)[1];
            *puVar9 = local_78._0_8_;
            puVar9[1] = local_78._8_8_;
            puVar9[2] = local_68;
            puVar9[3] = (((uint64_t)uStack_5c << 32) | (uint32_t)uStack_60);
            *(unsigned long*)((long)puVar9 + 25) =
                (((uint64_t)((uint8_t)uStack_58) << 56) |
                 (uint64_t)((((uint64_t)uStack_5c << 24) | (uint32_t)uStack_60._1_3_)));
            *(unsigned long*)((long)puVar9 + 33) = (((uint64_t)uStack_54 << 24) | (uint32_t)uStack_58._1_3_);
            local_7c = -(float)local_c8._0_4_;
            local_c8._0_8_ = local_98._0_8_ ^ 9223372039002259456;
            local_c8._8_4_ = local_98._8_4_ ^ 2147483648;
            local_c8._12_4_ = local_98._12_4_ ^ 2147483648;
        } else if (iVar12 == 3) {
            local_98 = (unsigned __int128)uVar1;
            puVar9 = (uint64_t*)(*this_00)[0];
            local_78._0_8_ = *puVar9;
            local_78._8_8_ = puVar9[1];
            local_68 = &puVar9[2];
            uStack_60 = (uint32_t)puVar9[3];
            uStack_5c = (uint32_t)*(uint64_t*)((long)puVar9 + 28);
            uStack_58 = (uint32_t)((unsigned long)*(uint64_t*)((long)puVar9 + 28) >> 32);
            uStack_54 = (uint64_t)*(uint64_t*)((long)puVar9 + 36);
            uStack_4f = (uint32_t)((unsigned long)*(uint64_t*)((long)puVar9 + 36) >> 40);
            puVar9 = (uint64_t*)(*this_00)[3];
            puVar10 = (uint64_t*)(*this_00)[0];
            uVar3 = puVar9[1];
            uVar4 = puVar9[2];
            uVar5 = puVar9[3];
            uVar6 = *(uint64_t*)((long)puVar9 + 25);
            uVar7 = *(uint64_t*)((long)puVar9 + 33);
            *puVar10 = *puVar9;
            puVar10[1] = uVar3;
            puVar10[2] = uVar4;
            puVar10[3] = uVar5;
            *(uint64_t*)((long)puVar10 + 25) = uVar6;
            *(uint64_t*)((long)puVar10 + 33) = uVar7;
            puVar9 = (uint64_t*)(*this_00)[2];
            puVar10 = (uint64_t*)(*this_00)[3];
            uVar3 = puVar9[1];
            uVar4 = puVar9[2];
            uVar5 = puVar9[3];
            uVar6 = *(uint64_t*)((long)puVar9 + 25);
            uVar7 = *(uint64_t*)((long)puVar9 + 33);
            *puVar10 = *puVar9;
            puVar10[1] = uVar3;
            puVar10[2] = uVar4;
            puVar10[3] = uVar5;
            *(uint64_t*)((long)puVar10 + 25) = uVar6;
            *(uint64_t*)((long)puVar10 + 33) = uVar7;
            puVar9 = (uint64_t*)(*this_00)[1];
            puVar10 = (uint64_t*)(*this_00)[2];
            uVar3 = puVar9[1];
            uVar4 = puVar9[2];
            uVar5 = puVar9[3];
            uVar6 = *(uint64_t*)((long)puVar9 + 25);
            uVar7 = *(uint64_t*)((long)puVar9 + 33);
            *puVar10 = *puVar9;
            puVar10[1] = uVar3;
            puVar10[2] = uVar4;
            puVar10[3] = uVar5;
            *(uint64_t*)((long)puVar10 + 25) = uVar6;
            *(uint64_t*)((long)puVar10 + 33) = uVar7;
            puVar9 = (uint64_t*)(*this_00)[1];
            *puVar9 = local_78._0_8_;
            puVar9[1] = local_78._8_8_;
            puVar9[2] = local_68;
            puVar9[3] = (((uint64_t)uStack_5c << 32) | (uint32_t)uStack_60);
            *(unsigned long*)((long)puVar9 + 25) =
                (((uint64_t)((uint8_t)uStack_58) << 56) |
                 (uint64_t)((((uint64_t)uStack_5c << 24) | (uint32_t)uStack_60._1_3_)));
            *(unsigned long*)((long)puVar9 + 33) = (((uint64_t)uStack_54 << 24) | (uint32_t)uStack_58._1_3_);
            local_c8._0_8_ = local_c8._0_8_ ^ 9223372039002259456;
            local_c8._8_4_ = local_c8._8_4_ ^ 2147483648;
            local_c8._12_4_ = local_c8._12_4_ ^ 2147483648;
            local_7c = (float)local_98._0_4_;
        } else {
            local_c8 = (unsigned __int128)uVar1;
        }
        vector<TerrainTriangle>* this_03 = local_b0;
        uVar13 = 0;
        do {
            lVar11 = (*this_03)[uVar13];
            if (*(char*)(lVar11 + 40) != '\0') {
                uVar2 = *(uint32_t*)&gridTile->field_20;
                lVar11 = (*this_03)[uVar13];
                pGVar14 = local_88;
                *(uint32_t*)(lVar11 + 20) = uVar2;
                local_98._0_4_ = *(uint32_t*)((long)&gridTile->field_20 + 4);
                lVar11 = (*this_03)[uVar13];
                *(uint32_t*)(lVar11 + 24) = local_98._0_4_;
            }
            uVar13 = uVar13 + 1;
        } while (uVar13 != 4);
        local_78._0_8_ = &TerrainConstants::EMPTY_SOURCE;
        uint8_t* local_e8 = local_78;
        uint64_t local_e0 = 3;
        uVar13 = 0;
        local_78._8_8_ = pGVar14;
        local_68 = gridTile3;
        auto terrainBaseData = TerrainConstants::GetDominantSource<TerrainBaseData>(false, local_e8);
        new (local_78) TerrainVertex();
        iVar12 = (int)local_a0;
        int iVar15 = (int)local_a8;
        terrainPatch->InterpolateCentreVertex(*local_78, *gridTile, iVar12, iVar15, (float)local_c8._0_4_, local_7c,
                                              *terrainBaseData);
        local_88 = (GridTile*)(((uint64_t)local_88._4_4_ << 32) | (uint32_t)(iVar15 + 1));
        local_98._0_4_ = iVar12 + 1;
        do {
            terrainBaseData_00 = (TerrainVertex*)(*local_b0)[uVar13];
            this_02 = local_d0;
            if ((terrainBaseData_00->field_40 != '\0') && (*(char*)((long)&terrainBaseData_00->field_12 + 4) != '\0')) {
                lVar11 = local_d0->size();
                this_02->resize(lVar11 + 3);
                lVar11 = this_02->size();
                terrainVertex2 = (TerrainVertex*)(*this_02)[lVar11 - 3];
                TerrainConstants::CopyVertexLocationAndNormal(*local_78, *terrainVertex2);
                terrainBaseData1 = terrainBaseData_00;
                if (terrainBaseData_00->field_28 != '\0') {
                    terrainBaseData1 = (TerrainVertex*)local_78;
                }
                TerrainConstants::CopyVertexSource(*terrainBaseData1, *terrainVertex2);
                iVar12 = (int)local_88;
                arg2 = (int)local_a0;
                uVar2 = local_98._0_4_;
                iVar15 = (int)local_a8;
                switch (uVar13 & 4294967295) {
                case 0:
                    terrainPatch->GetSharedVertex(terrainVertex2[1].field_4, arg2, iVar15, *terrainBaseData_00);
                    arg2 = local_98._0_4_;
                    break;
                case 1:
                    terrainPatch->GetSharedVertex(terrainVertex2[1].field_4, local_98._0_4_, iVar15,
                                                  *terrainBaseData_00);
                    iVar15 = (int)local_88;
                    arg2 = uVar2;
                    break;
                case 2:
                    terrainPatch->GetSharedVertex(terrainVertex2[1].field_4, local_98._0_4_, (int)local_88,
                                                  *terrainBaseData_00);
                    iVar15 = iVar12;
                    arg2 = (int)local_a0;
                    break;
                case 3:
                    terrainPatch->GetSharedVertex(terrainVertex2[1].field_4, arg2, (int)local_88, *terrainBaseData_00);
                    iVar15 = (int)local_a8;
                    break;
                default:
                    goto switchD_1007b1cfd_default;
                }
                terrainPatch->GetSharedVertex(terrainVertex2[2].field_8, arg2, iVar15, *terrainBaseData_00);
            }
        switchD_1007b1cfd_default:
            uVar13 = uVar13 + 1;
            if (uVar13 == 4) {
                return local_d0;
            }
        } while (true);
    }

    // 0x1007b28d0
    void BasicTerrainOverlayShape::GetDominantSource(const GridTile& gridTile1, const GridTile* gridTile2,
                                                     const GridTile* gridTile3, int arg4,
                                                     const TerrainPatch* terrainPatch) const {
        uint64_t uVar1;
        int iVar2;

        switch (arg4) {
        case 4:
            iVar2 = 0;
            break;
        case 5:
            iVar2 = 2;
            break;
        case 6:
            iVar2 = 2;
            goto LAB_1007b299c;
        case 7:
            iVar2 = 0;
        LAB_1007b299c:
            uVar1 = GetSource(gridTile1, gridTile2, gridTile3, iVar2);
            iVar2 = 1;
            goto LAB_1007b29b6;
        default:
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "terrain/BasicTerrainOverlayShape.cpp",
                            187, "BasicTerrainOverlayShape: Unknown corner: %i", (unsigned long)(unsigned int)arg4);
        }
        uVar1 = GetSource(gridTile1, gridTile2, gridTile3, iVar2);
        iVar2 = 3;
    LAB_1007b29b6:
        uint64_t local_40 = GetSource(gridTile1, gridTile2, gridTile3, iVar2);
        uint64_t local_50 = 2;
        uint64_t local_48 = uVar1;
        TerrainConstants::GetDominantSource<TerrainBaseData const>(false, &local_48);
    }

    // 0x1007b2a20
    GridTile* BasicTerrainOverlayShape::GetSource(const GridTile& gridTile1, const GridTile* gridTile2,
                                                  const GridTile* gridTile3, int arg4) const {
        if (GetUseOverlay(arg4, *(int*)&gridTile1.field_64) != 2) {
            gridTile2 = gridTile3;
        }
        return gridTile2;
    }

    // 0x1007b2af0
    uint32_t BasicTerrainOverlayShape::GetUseOverlay(int arg1, int arg2) const {
        uint32_t* puVar1 = &field_48[(unsigned long)(arg1 + arg2 & 3)];
        return *puVar1;
    }

} // namespace jag::graphics
