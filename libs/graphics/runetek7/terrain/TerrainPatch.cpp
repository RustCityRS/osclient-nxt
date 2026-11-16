// libs/graphics/runetek7/terrain/TerrainPatch.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "TerrainPatch.h"

namespace jag::graphics {
    // 0x100f43840
    bool TerrainPatch::m_showPatches = 1;

    // 0x100f43841
    bool TerrainPatch::m_groundPatchShadowCasterCulling = 1;

    // 0x100f43844
    float TerrainPatch::m_groundPatchShadowCasterCullingThreshold = 1850.0f;

    // 0x100f43848
    bool TerrainPatch::m_enablePatchShadows = 1;

    // 0x1039bd254
    int32_t TerrainPatch::m_showWorldAABB;

    // 0x1000b9950: TerrainPatch::GetAABB() const has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x10017a590: TerrainPatch::GetGridSize() const has the same machine code as http::HTTPRequest::GetResponseCode() const

    // 0x1001a3c10: TerrainPatch::GetMaterial() const has the same machine code as MainLoopFrameTimer::GetFPSCounter()

    // 0x1007b2010
    void TerrainPatch::InterpolateCentreVertex(TerrainVertex& terrainVertex, const GridTile& gridTile, int arg3,
                                               int arg4, float arg5, float arg6,
                                               const TerrainBaseData& terrainBaseData) const {
        long lVar1;
        TerrainVertex* terrainBaseData2;
        long* plVar7;
        int* piVar8;
        int arg2;
        int arg1;
        array<GridTile const*, 4ul> local_c0[32];
        uint64_t local_a0;
        float local_98;
        array<float, 4ul> local_68;
        float local_54;

        int local_50 = m_gridSize;
        float local_44 = arg5 + 1.0;
        uint64_t uVar6 = 0;
        uint64_t* puVar3 = (uint64_t*)(*local_c0)[0];
        *puVar3 = gridTile;
        float local_3c = 1.0 - arg5;
        float local_34 = 1.0 - arg6;
        float local_38 = local_34 * local_3c;
        float* pfVar4 = &local_68[0];
        *pfVar4 = local_38;
        auto pGVar5 = GetGridGroup(arg3 + 1, arg4);
        if (pGVar5 != nullptr) {
            uVar6 = pGVar5->GetGridTile();
        }
        float local_40 = arg6 + 1.0;
        puVar3 = (uint64_t*)(*local_c0)[1];
        *puVar3 = uVar6;
        local_34 = local_34 * local_44;
        pfVar4 = &local_68[1];
        *pfVar4 = local_34;
        pGVar5 = (GridGroup*)GetGridGroup(arg3 + 1, arg4 + 1);
        if (pGVar5 == nullptr) {
            uVar6 = 0;
        } else {
            uVar6 = pGVar5->GetGridTile();
        }
        puVar3 = (uint64_t*)(*local_c0)[2];
        *puVar3 = uVar6;
        local_34 = local_40 * local_44;
        pfVar4 = &local_68[2];
        *pfVar4 = local_34;
        unsigned long local_78 = (unsigned long)(unsigned int)arg3;
        pGVar5 = (GridGroup*)GetGridGroup(arg3, arg4 + 1);
        unsigned long local_80 = (unsigned long)(unsigned int)arg4;
        if (pGVar5 == nullptr) {
            uVar6 = 0;
        } else {
            uVar6 = pGVar5->GetGridTile();
        }
        puVar3 = (uint64_t*)(*local_c0)[3];
        *puVar3 = uVar6;
        local_3c = local_3c * local_40;
        pfVar4 = &local_68[3];
        *pfVar4 = local_3c;
        bool bVar2 = true;
        bool bVar10 = true;
        unsigned long uVar9 = 0;
        do {
            pfVar4 = &local_68[uVar9];
            if ((0.0 < *pfVar4) &&
                (plVar7 = (long*)(*local_c0)[uVar9], bVar10 = bVar2, *(int*)(*plVar7 + 56) <= *(int*)(*plVar7 + 52))) {
                bVar10 = false;
                bVar2 = bVar10;
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 != 4);
        float fVar11 = 0.0;
        uVar9 = 0;
        local_34 = 0.0;
        local_38 = 0.0;
        do {
            local_54 = fVar11;
            pfVar4 = &local_68[uVar9];
            local_3c = *pfVar4;
            if (bVar10) {
            LAB_1007b2260:
                plVar7 = (long*)(*local_c0)[uVar9];
                piVar8 = (int*)(*plVar7 + 52);
            } else {
                plVar7 = (long*)(*local_c0)[uVar9];
                lVar1 = *plVar7;
                if (*(int*)(lVar1 + 56) <= *(int*)(lVar1 + 52))
                    goto LAB_1007b2260;
                piVar8 = (int*)(lVar1 + 56);
            }
            local_38 = local_38 + (float)*piVar8 * local_3c;
            plVar7 = (long*)(*local_c0)[uVar9];
            terrainBaseData2 = terrainVertex;
            fVar11 = local_54 + local_3c;
            local_34 = local_34 + local_3c * *(float*)(*plVar7 + 24);
            uVar9 = uVar9 + 1;
            if (uVar9 == 4) {
                arg2 = (int)local_80;
                arg1 = (int)local_78;
                local_34 = local_34 * (1.0 / fVar11);
                terrainVertex->field_40.Set((float)local_50 * 0.5 * local_44 + (float)(local_50 * arg1),
                                            local_38 * (1.0 / fVar11),
                                            local_40 * (float)local_50 * 0.5 + (float)(local_50 * arg2));
                fVar11 = arg6;
                local_a0 = GetCentreVertexNormal(arg1, arg2, arg5, arg6);
                local_98 = fVar11;
                terrainBaseData2->field_52.SetXYZ(local_a0);
                TerrainConstants::CopyVertexSource(terrainBaseData, *terrainBaseData2);
                *(float*)((long)&terrainBaseData2->field_20 + 4) = local_34;
                return;
            }
        } while (true);
    }

    // 0x1007b24f0
    void TerrainPatch::GetSharedVertex(TerrainVertex& terrainVertex, int arg2, int arg3,
                                       const TerrainBaseData& terrainBaseData) const {
        bool cVar1;
        long lVar3;
        long lVar4;
        uint64_t uVar5;
        uint64_t uVar6;
        long lVar7;
        TerrainPatch* pTVar8;
        uint32_t uVar9;
        float fVar10;
        TerrainBaseData** local_68;
        uint64_t local_60;
        uint32_t local_54;
        TerrainPatch* local_50;
        TerrainBaseData* local_48;
        uint64_t local_40;

        auto pGVar2 = GetGridGroup(arg2, arg3);
        if (pGVar2 == nullptr) {
            lVar3 = 0;
            cVar1 = terrainBaseData.field_28;
        } else {
            lVar3 = pGVar2->GetGridTile();
            cVar1 = terrainBaseData.field_28;
        }
        if (!cVar1) {
            local_60._4_4_ = (uint32_t)((unsigned long)local_60 >> 32);
            if (lVar3 == 0) {
                fVar10 = 0.0;
            } else {
                fVar10 = (float)*(int*)(lVar3 + 52);
            }
            terrainVertex.field_40.Set((float)(m_gridSize * arg2), fVar10, (float)(m_gridSize * arg3));
            local_68 = (TerrainBaseData**)GetVertexNormal(arg2, arg3);
            local_60 = (((uint64_t)local_60._4_4_ << 32) | (uint32_t)fVar10);
            terrainVertex.field_52.SetXYZ(local_68);
        } else {
            local_50 = (TerrainPatch*)terrainBaseData;
            pGVar2 = (GridGroup*)GetGridGroup(arg2, arg3);
            if (pGVar2 == nullptr) {
                lVar4 = 0;
            } else {
                lVar4 = pGVar2->GetGridTile();
            }
            if (lVar4 == 0) {
                uVar9 = (uint32_t)(((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)1);
                terrainBaseData = (TerrainBaseData*)local_50;
            } else {
                uVar5 = pGVar2->GetGridTileOverlay();
                uVar6 = pGVar2->GetGridTileUnderlay();
                local_48 = (TerrainBaseData*)local_50;
                local_40 = (**(void (**)(...))(**(long**)(lVar4 + 72) + 24))(*(long**)(lVar4 + 72), lVar4, uVar5, uVar6,
                                                                             4, this);
                local_68 = &local_48;
                local_60 = 2;
                terrainBaseData = TerrainConstants::GetDominantSource<TerrainBaseData const>(true, local_68);
                uVar9 = 0;
            }
            local_50 = this;
            pGVar2 = (GridGroup*)GetGridGroup(arg2 - 1, arg3 - 1);
            if ((pGVar2 == nullptr) || (lVar7 = pGVar2->GetGridTile(), lVar7 == 0)) {
                pTVar8 = local_50;
                local_54 = uVar9;
            } else {
                uVar5 = pGVar2->GetGridTileOverlay();
                uVar6 = pGVar2->GetGridTileUnderlay();
                pTVar8 = local_50;
                local_48 = terrainBaseData;
                local_40 = (**(void (**)(...))(**(long**)(lVar7 + 72) + 24))(*(long**)(lVar7 + 72), lVar7, uVar5, uVar6,
                                                                             6, local_50);
                local_68 = &local_48;
                local_60 = 2;
                terrainBaseData = TerrainConstants::GetDominantSource<TerrainBaseData const>(lVar4 == 0, local_68);
                local_54 = 0;
            }
            pGVar2 = (GridGroup*)GetGridGroup(pTVar8, arg2, arg3 - 1);
            if ((pGVar2 == nullptr) || (lVar4 = pGVar2->GetGridTile(), lVar4 == 0)) {
                pTVar8 = local_50;
            } else {
                uVar5 = pGVar2->GetGridTileOverlay();
                uVar6 = pGVar2->GetGridTileUnderlay();
                pTVar8 = local_50;
                local_48 = terrainBaseData;
                local_40 = (**(void (**)(...))(**(long**)(lVar4 + 72) + 24))(*(long**)(lVar4 + 72), lVar4, uVar5, uVar6,
                                                                             5, local_50);
                local_68 = &local_48;
                local_60 = 2;
                terrainBaseData = TerrainConstants::GetDominantSource<TerrainBaseData const>(local_54._0_1_, local_68);
                local_54 = 0;
            }
            pGVar2 = (GridGroup*)GetGridGroup(pTVar8, arg2 - 1, arg3);
            if ((pGVar2 == nullptr) || (lVar4 = pGVar2->GetGridTile(), lVar4 == 0)) {
                pTVar8 = local_50;
            } else {
                uVar5 = pGVar2->GetGridTileOverlay();
                uVar6 = pGVar2->GetGridTileUnderlay();
                pTVar8 = local_50;
                local_48 = terrainBaseData;
                local_40 = (**(void (**)(...))(**(long**)(lVar4 + 72) + 24))(*(long**)(lVar4 + 72), lVar4, uVar5, uVar6,
                                                                             7, local_50);
                local_68 = &local_48;
                local_60 = 2;
                terrainBaseData = TerrainConstants::GetDominantSource<TerrainBaseData const>(local_54._0_1_, local_68);
            }
            if (lVar3 == 0) {
                fVar10 = 0.0;
            } else {
                fVar10 = (float)*(int*)(lVar3 + 52);
            }
            terrainVertex.field_40.Set((float)(pTVar8->m_gridSize * arg2), fVar10, (float)(pTVar8->m_gridSize * arg3));
            local_68 = (TerrainBaseData**)GetVertexNormal(pTVar8, arg2, arg3);
            local_60 = (((uint64_t)local_60._4_4_ << 32) | (uint32_t)fVar10);
            terrainVertex.field_52.SetXYZ(local_68);
        }
        TerrainConstants::CopyVertexSource(terrainBaseData, terrainVertex);
    }

    // 0x1007b4540
    PatchFaceData::PatchFaceData(const TerrainVertex* terrainVertex) : math::Vector3T() {
        uint8_t uVar1;
        uint8_t uVar2;
        uint32_t uVar3;
        uint16_t local_38;
        uint8_t local_36;

        *this = math::Vector3T<short>::Set(terrainVertex->field_4, *(unsigned short*)&terrainVertex[1].field_8,
                                           *(unsigned short*)&terrainVertex[2].field_12);
        ColourHSL local_48((float)terrainVertex->field_8, *(float*)&terrainVertex[1].field_12,
                           *(float*)((long)&terrainVertex[2].field_12 + 4));
        local_48 *= 8.0;
        auto pfVar4 = local_48.SSOBeginPtr();
        if (*pfVar4 <= 255.0) {
            pfVar4 = (float*)local_48.y();
            if (*pfVar4 <= 255.0) {
                pfVar4 = (float*)local_48.second();
                if (*pfVar4 <= 255.0) {
                    uVar3 = math::Vector3TFromVector3<unsigned char>(local_48);
                    local_38 = (uint16_t)uVar3;
                    local_36 = (uint8_t)((unsigned int)uVar3 >> 16);
                    field_6 = local_38;
                    uVar1 = terrainVertex[1].field_40;
                    uVar2 = terrainVertex[2].field_44;
                    field_9 = *(uint8_t*)((long)&terrainVertex->field_32 + 4);
                    field_10 = uVar1;
                    field_11 = uVar2;
                    uVar1 = terrainVertex[1].field_41;
                    uVar2 = terrainVertex[2].field_45;
                    field_12 = *(uint8_t*)((long)&terrainVertex->field_32 + 5);
                    field_13 = uVar1;
                    field_14 = uVar2;
                    field_15 = math::Vector3T<unsigned char>::Set(*(unsigned char*)((long)&terrainVertex->field_32 + 6),
                                                                  terrainVertex[1].field_42, terrainVertex[2].field_46);
                    field_18 = math::Vector3T<unsigned char>::Set(*(unsigned char*)((long)&terrainVertex->field_32 + 7),
                                                                  terrainVertex[1].field_43, terrainVertex[2].field_47);
                    return;
                }
            }
        }
        LogAssert("textureScalesFloat.x() <= std::numeric_limits<uint8>::max() && textureScalesFloat.y() <= "
                  "std::numeric_limits<uint8>::max() && textureScalesFloat.z() <= std::numeric_limits<uint8>::max()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/terrain/"
                  "TerrainPatch.cpp",
                  44, nullptr);
    }

    // 0x1007b4770
    TerrainPatch::TerrainPatch(int arg1, const shared_ptr<eastl::map<int, TerrainTextureMeta>>& arg2,
                               const shared_ptr<eastl::vector<eastl::vector<GridGroup>>>& gridGroupss, int arg4,
                               int arg5)
        : Drawable(2), field_600(arg1), m_gridResolution(0), m_gridSize(0), field_632(local_48, local_40),
          m_faceCount(0) {
        hash<int> local_48;
        equal_to<int> local_40;

        *field_616 = gridGroupss;
        m_gridResolution = arg4;
        m_gridSize = arg5;
        *field_13248 = arg2;
        ConstructFromTileData();
    }

    // 0x1007b4a50
    void TerrainPatch::ConstructFromTileData() {
        ShaderVariablePrecision shaderVariablePrecision2;
        bool bVar2;
        hash_map<int, RenderChunk, eastl::hash<int>, eastl::equal_to<int>,
                 eastl::fixed_hashtable_allocator<258ul, 40ul, 256ul, 4ul, 0ul, true>>* this_00;
        bool cVar3;
        uint32_t uVar5;
        int iVar6;
        GridGroup* pGVar9;
        long lVar10;
        GridTile* gridTile1;
        GridTile* gridTile3;
        ShaderVariablePrecision* arg1;
        int arg1_01;
        EnumOptionToggle EVar11;
        EnumOptionToggle arg1_02;
        ReturnValue local_a0;
        GridTile* local_90;
        long local_88;
        EnumOptionToggle local_48;
        ShaderVariablePrecision local_44;
        unsigned long local_40;

        m_aABB.Reset();
        unsigned long arg1_00 = (unsigned long)(unsigned int)(m_gridResolution * m_gridResolution * 12);
        uint8_t* puVar1 = &field_13264;
        puVar1->clear();
        field_13296.clear();
        auto pVVar7 = TerrainPatchRenderer::GetVertexDecl();
        pVVar7->GetVertexStride(0);
        ShaderVariablePrecision SVar4 = 0;
        vector<game::WorldMap::MapElementInstance>* local_80 = (vector<game::WorldMap::MapElementInstance>*)puVar1;
        puVar1->reserve(arg1_00);
        pVVar7 = TerrainPatchRenderer::GetVertexDeclPos();
        pVVar7->GetVertexStride(0);
        field_13296.reserve(arg1_00);
        m_faceCount = 0;
        puVar1 = &field_632;
        puVar1->clear();
        local_78.field_16._0_4_ = 0;
        local_78._20_8_ = 0;
        local_78.field_0 = 0;
        local_78.field_8._0_4_ = 0;
        local_78.field_8._4_4_ = 0;
        RenderChunk local_78;
        local_a0[0]._0_4_ = 0;
        hash_map<int, RenderChunk, eastl::hash<int>, eastl::equal_to<int>,
                 eastl::fixed_hashtable_allocator<258ul, 40ul, 256ul, 4ul, 0ul, true>>* local_50 =
            (hash_map<int, RenderChunk, eastl::hash<int>, eastl::equal_to<int>,
                      eastl::fixed_hashtable_allocator<258ul, 40ul, 256ul, 4ul, 0ul, true>>*)puVar1;
        uint64_t* puVar8 = (uint64_t*)(*puVar1)[local_a0];
        *puVar8 = local_78.field_0;
        puVar8[1] = (((uint64_t)local_78.field_8._4_4_ << 32) | (uint32_t)((uint32_t)local_78.field_8));
        *(unsigned long*)((long)(puVar8 + 1) + 4) =
            (((uint64_t)((uint32_t)local_78.field_16) << 32) | (uint32_t)local_78.field_8._4_4_);
        *(uint64_t*)((long)(puVar8 + 2) + 4) = local_78._20_8_;
        if (0 < m_gridResolution) {
            SVar4 = 0;
            iVar6 = 1;
            do {
                if (0 < m_gridResolution) {
                    arg1_01 = 0;
                    do {
                        arg1_01 = arg1_01 + 1;
                        pGVar9 = (GridGroup*)GetGridGroup(arg1_01, iVar6);
                        if (pGVar9 != nullptr) {
                            lVar10 = pGVar9->GetGridTile();
                            if (lVar10 != 0) {
                                arg1 = (ShaderVariablePrecision*)(lVar10 + 44);
                                if (*(int*)(lVar10 + 44) == -1) {
                                    *arg1 = 0;
                                }
                                shaderVariablePrecision2 = *(ShaderVariablePrecision*)(lVar10 + 48);
                                if (shaderVariablePrecision2 != 4294967295) {
                                    *arg1 = shaderVariablePrecision2;
                                    SVar4 = eastl::max<int>(SVar4, shaderVariablePrecision2);
                                }
                                lVar10 = (*local_50)[*arg1];
                                *(int*)(lVar10 + 4) = *(int*)(lVar10 + 4) + 1;
                            }
                        }
                    } while (arg1_01 < m_gridResolution);
                }
                bVar2 = iVar6 < m_gridResolution;
                iVar6 = iVar6 + 1;
            } while (bVar2);
        }
        int local_34 = 0;
        if (-1 < (int)SVar4) {
            local_44 = SVar4;
            do {
                this_00 = local_50;
                local_78 = local_50->find(local_34);
                local_a0 = this_00->end();
                cVar3 = local_78 != local_a0;
                if (cVar3) {
                    lVar10 = local_78.HeapBeginPtr();
                    uVar5 = local_80->size();
                    *(uint32_t*)(lVar10 + 4) = uVar5;
                    local_88 = lVar10;
                    if (0 < m_gridResolution) {
                        local_40 = 1;
                        do {
                            if (0 < m_gridResolution) {
                                local_48 = (int)local_40 - 1;
                                EVar11 = 0;
                                do {
                                    arg1_02 = EVar11 + 1;
                                    pGVar9 = (GridGroup*)GetGridGroup(arg1_02, (int)local_40);
                                    if (pGVar9 != nullptr) {
                                        gridTile1 = (GridTile*)pGVar9->GetGridTile();
                                        if ((gridTile1 != nullptr) && (*(int*)&gridTile1->field_44 == local_34)) {
                                            local_90 = (GridTile*)pGVar9->GetGridTileOverlay();
                                            gridTile3 = (GridTile*)pGVar9->GetGridTileUnderlay();
                                            cVar3 = AddTile(*gridTile1, local_90, gridTile3, arg1_02, (int)local_40);
                                            lVar10 = local_88;
                                            if (cVar3) {
                                                SVar4 = eastl::min<GraphicsQuality>(*(EnumOptionToggle*)(local_88 + 16),
                                                                                    EVar11);
                                                *(ShaderVariablePrecision*)(lVar10 + 16) = SVar4;
                                                uVar5 = eastl::max<int>(SVar4, EVar11);
                                                EVar11 = local_48;
                                                *(uint32_t*)(lVar10 + 20) = uVar5;
                                                SVar4 = eastl::min<GraphicsQuality>(*(EnumOptionToggle*)(lVar10 + 24),
                                                                                    local_48);
                                                *(ShaderVariablePrecision*)(lVar10 + 24) = SVar4;
                                                uVar5 = eastl::max<int>(SVar4, EVar11);
                                                *(uint32_t*)(lVar10 + 28) = uVar5;
                                            }
                                        }
                                    }
                                    EVar11 = arg1_02;
                                } while ((int)arg1_02 < m_gridResolution);
                            }
                            iVar6 = (int)local_40;
                            local_40 = (unsigned long)(iVar6 + 1);
                        } while (iVar6 < m_gridResolution);
                    }
                }
                iVar6 = local_34 + 1;
                bVar2 = local_34 < (int)local_44;
                local_34 = iVar6;
            } while (bVar2);
        }
        iVar6 = GetFaceCount();
        if (iVar6 != 0) {
            cVar3 = this_thread::IsMainThread();
            if (cVar3) {
                cVar3 = field_616->operator_cast_to_bool();
                if (!cVar3) {
                    CreateRenderingResources();
                }
            }
        }
        CheckShadowCaster();
    }

    // 0x1007b4dd0
    TerrainPatch::TerrainPatch(int arg1, const math::AABB& aabb, eastl::vector<TerrainPatchVertex>& terrainPatchVertexs,
                               eastl::vector<TerrainPatchVertexPos>& terrainPatchVertexPoss, int arg5, int arg6,
                               int arg7, const shared_ptr<TextureAtlasReference>& textureAtlasReference,
                               eastl::fixed_hash_map<int, RenderChunk, 256ul, 257ul, true, eastl::hash<int>,
                                                     eastl::equal_to<int>, false>& fixed_hash_map,
                               const math::Matrix44T<float>* matrix44, const float* arg11)
        : Drawable(0), m_aABB(aabb) {
        ReturnValue local_108;
        hash<int> local_d8;

        ParticleMaterial* local_e0 = (ParticleMaterial*)m_material;
        new (local_e0) TerrainMaterial();
        field_600 = arg1;
        m_gridResolution = 0;
        m_gridSize = 0;
        new (field_616) shared_ptr();
        fixed_hash_map<int, RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>, false>* local_100 =
            (fixed_hash_map<int, RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>,
                            false>*)&field_632;
        uint8_t* local_140 = field_616;
        new (local_100)
            eastl::fixed_hash_map<int, RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>, false>(
                local_d8, local_108);
        m_faceCount = 0;
        field_13096 = matrix44;
        field_13104 = arg11;
        new (&field_13120) IrradianceEffect();
        new (&field_13232) shared_ptr();
        uint8_t* local_138 = &field_13232;
        new (field_13248) shared_ptr();
        vector<eastl::string>* local_f8 = (vector<eastl::string>*)&field_13264;
        uint8_t* local_130 = field_13248;
        new (local_f8) eastl::vector<TerrainPatchVertex>();
        vector<eastl::string>* local_e8 = (vector<eastl::string>*)&field_13296;
        new (local_e8) eastl::vector<TerrainPatchVertexPos>();
        uint8_t* local_128 = &field_13328;
        new (local_128) render::VertexBuffer();
        uint8_t* local_120 = &field_13408;
        new (local_120) render::VertexBuffer();
        uint8_t* local_118 = &field_13488;
        new (local_118) render::InputAssemblerState();
        uint8_t* local_110 = &field_13680;
        new (local_110) render::InputAssemblerState();
        new (&field_13872) std::future<void>();
        vector<eastl::string>* this_00 = local_f8;
        if (local_f8 != (vector<eastl::string>*)terrainPatchVertexs) {
            local_f8->swap(terrainPatchVertexs);
            terrainPatchVertexs.clear();
        }
        if (local_e8 != (vector<eastl::string>*)terrainPatchVertexPoss) {
            local_e8->swap(terrainPatchVertexPoss);
            terrainPatchVertexPoss.clear();
        }
        unsigned long uVar1 = this_00->size();
        m_faceCount = (int)(uVar1 / 3);
        local_100->swap(fixed_hash_map);
        m_gridSize = arg6;
        m_gridResolution = arg5;
        local_e0->InitRenderPassEffects();
        local_e0->SetTextureAtlasReference(textureAtlasReference);
        ParticleMaterial* this_02 = local_e0;
        local_e0->SetEndPosition(arg7);
        auto this_01 = this_02->Instance();
        TerrainPatch* local_148 = this;
        fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<TerrainPatchVertex>&,
                                       eastl::vector<TerrainPatchVertexPos>&, int, int, int,
                                       shared_ptr<TextureAtlasReference> const&,
                                       eastl::fixed_hash_map<int, RenderChunk, 256ul, 257ul, true, eastl::hash<int>,
                                                             eastl::equal_to<int>, false>&,
                                       math::Matrix44T<float> const*, float const*)::__8,
            void>((function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)&local_d8,
                  (__8*)&local_148);
        local_108 = this_01->RunOnThreadPoolRenderContext("TerrainPatch", local_d8);
        field_13872 = local_108;
        CheckShadowCaster();
    }

    // 0x1007b5210
    void TerrainPatch::CheckShadowCaster() {
        float extraout_XMM0_Db;

        bool arg2 = true;
        if (field_600 == 0) {
            m_aABB.GetDimensions();
            if (extraout_XMM0_Db < m_groundPatchShadowCasterCullingThreshold) {
                arg2 = m_groundPatchShadowCasterCulling == '\0';
            }
        }
        SetRenderFlag(1, arg2);
    }

    // 0x1007b52a0
    TerrainPatch::~TerrainPatch() {
        uint8_t* this_00 = &field_13872;
        if (this_00->valid() != '\0') {
            this_00->wait();
        }
        DestroyRenderingResources();
        this_00->~future();
        field_13680.~InputAssemblerState();
        field_13488.~InputAssemblerState();
        field_13408.~VertexBuffer();
        field_13328.~VertexBuffer();
        field_13296.~vector();
        field_13264.~vector();
        field_13248->~shared_ptr();
        field_13232.~shared_ptr();
        field_632.~fixed_hash_map();
        field_616->~shared_ptr();
        m_material->~TerrainMaterial();
    }

    // 0x1007b5440
    void TerrainPatch::DestroyRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_18;

        m_material->DestroyRenderingResources();
        field_13680.Destroy();
        field_13488.Destroy();
        field_13408.Destroy();
        field_13328.Destroy();
    }

    // 0x1007b54d0
    void TerrainPatch::CreateRenderingResources() {
        uint8_t bVar2;
        uint8_t bVar3;
        void* pvVar7;
        char* this_00;
        AutoSingleton<ShaderThreadPoolSingleton> local_38;

        int iVar4 = GetVertexDataSize();
        if (iVar4 != 0) {
            LogAssert("GetVertexDataSize() == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/terrain/"
                      "TerrainPatch.cpp",
                      153, nullptr);
        }
        auto pVVar6 = TerrainPatchRenderer::GetVertexDecl();
        iVar4 = pVVar6->GetVertexStride(0);
        uint8_t* puVar1 = &field_13264;
        int iVar5 = puVar1->size();
        if (iVar5 * iVar4 == 0) {
            bVar2 = 1;
        } else {
            pvVar7 = (void*)puVar1->HeapBeginPtr();
            bVar2 = field_13328.Create(iVar5 * iVar4, 0, pvVar7);
            puVar1->set_capacity(0);
        }
        pVVar6 = TerrainPatchRenderer::GetVertexDeclPos();
        iVar4 = pVVar6->GetVertexStride(0);
        puVar1 = &field_13296;
        iVar5 = puVar1->size();
        if (iVar5 * iVar4 != 0) {
            pvVar7 = (void*)puVar1->HeapBeginPtr();
            bVar3 = field_13408.Create(iVar5 * iVar4, 0, pvVar7);
            bVar2 = bVar2 & bVar3;
            puVar1->set_capacity(0);
        }
        pVVar6 = TerrainPatchRenderer::GetVertexDecl();
        field_13488.SetVertexStreamData(pVVar6, &field_13328);
        pVVar6 = TerrainPatchRenderer::GetVertexDeclPos();
        field_13680.SetVertexStreamData(pVVar6, &field_13408);
        if (bVar2 == 0) {
            DestroyRenderingResources();
            this_00 = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/terrain/"
                      "TerrainPatch.cpp";
            LogFatalError("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "terrain/TerrainPatch.cpp",
                          180, 0, "Failed to allocate memory for the terrain\'s vertex data!");
            this_00->~OptionStore();
        }
    }

    // 0x1007b5860
    uint64_t TerrainPatch::GetGridGroup(int arg1, int arg2) {
        unsigned long uVar2;
        vector<eastl::vector<GridGroup>>* this_01;
        vector<ModularParticleEmitter, eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true>>* this_02;

        uint8_t* this_03 = field_616;
        if ((this_03->operator_cast_to_bool() != '\0') && (-1 < arg1)) {
            uVar2 = ((vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                             eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)(*this_03)
                         .operator->())
                        ->size();
            if ((unsigned long)(long)arg1 < uVar2) {
                this_01 = (vector<eastl::vector<GridGroup>>*)**this_03;
                this_02 = (vector<ModularParticleEmitter,
                                  eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true>>*)(*this_01)[(long)arg1];
                if (-1 < arg2) {
                    uVar2 = this_02->size();
                    if ((unsigned long)(long)arg2 < uVar2) {
                        return (*this_02)[(long)arg2];
                    }
                }
            }
        }
        return 0;
    }

    // 0x1007b5a20
    uint64_t TerrainPatch::GetGridGroup(int arg1, int arg2) const {
        unsigned long uVar2;
        vector<eastl::vector<GridGroup>>* this_01;
        vector<ModularParticleEmitter, eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true>>* this_02;

        uint8_t* this_03 = field_616;
        if ((this_03->operator_cast_to_bool() != '\0') && (-1 < arg1)) {
            uVar2 = ((vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                             eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)(*this_03)
                         .operator->())
                        ->size();
            if ((unsigned long)(long)arg1 < uVar2) {
                this_01 = (vector<eastl::vector<GridGroup>>*)**this_03;
                this_02 = (vector<ModularParticleEmitter,
                                  eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true>>*)(*this_01)[(long)arg1];
                if (-1 < arg2) {
                    uVar2 = this_02->size();
                    if ((unsigned long)(long)arg2 < uVar2) {
                        return (*this_02)[(long)arg2];
                    }
                }
            }
        }
        return 0;
    }

    // 0x1007b5b00: GridGroup::GetGridTile() const has the same machine code as GridGroup::GetGridTile()

    // 0x1007b5b40
    bool TerrainPatch::AddTile(GridTile& gridTile1, GridTile* gridTile2, GridTile* gridTile3, int arg4, int arg5) {
        TerrainBaseData* terrainBaseData;
        TerrainVertex* terrainVertex;
        unsigned long uVar2;
        unsigned long arg1;
        long lVar3;

        vector<eastl::pair<eastl::fixed_string<char, 16>, float>>* this_00 =
            (vector<eastl::pair<eastl::fixed_string<char, 16>, float>>*)(**(void (**)(...))(*(long*)gridTile1.field_72 +
                                                                                            16))();
        long lVar1 = this_00->size();
        if (6148914691236517205 < (unsigned long)(lVar1 * -6148914691236517205)) {
            LogAssert("triangles.size() % 3 == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/terrain/"
                      "TerrainPatch.cpp",
                      386, nullptr);
        }
        lVar1 = this_00->size();
        if (lVar1 != 0) {
            arg1 = 0;
            do {
                lVar3 = 0;
                do {
                    terrainBaseData = (TerrainBaseData*)(*this_00)[arg1 + lVar3];
                    ExpandSource(*terrainBaseData);
                    lVar3 = lVar3 + 1;
                } while (lVar3 != 3);
                terrainVertex = (TerrainVertex*)(*this_00)[arg1];
                AddTriangle(terrainVertex, *(int*)&gridTile1.field_44);
                arg1 = arg1 + 3;
                uVar2 = this_00->size();
            } while (arg1 < uVar2);
        }
        return lVar1 != 0;
    }

    // 0x1007b5c40: GridGroup::GetGridTileOverlay() const has the same machine code as GridGroup::GetGridTileOverlay()

    // 0x1007b5c60: GridGroup::GetGridTileUnderlay() const has the same machine code as GridGroup::GetGridTileUnderlay()

    // 0x1007b5c90
    int TerrainPatch::GetViewportMapID() const {
        long lVar2;
        ReturnValue local_30;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_28;

        bool cVar1 = field_13248->operator_cast_to_bool();
        if (cVar1) {
            local_30 = ((vector<unsigned long, eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true>>*)**field_13248)
                           ->rbegin();
            local_28.end();
            cVar1 = local_30 != local_28;
            if (cVar1) {
                do {
                    lVar2 = *local_30;
                    if (*(int*)(lVar2 + 8) != -1) {
                        return *(int*)(lVar2 + 8);
                    }
                    ++local_30;
                    cVar1 = local_30 != local_28;
                } while (cVar1);
            }
        }
        return -1;
    }

    // 0x1007b5d90
    void TerrainPatch::ExpandSource(TerrainBaseData& terrainBaseData) {
        long lVar2;
        rbtree<unsigned int, eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>,
               eastl::less<unsigned int>, eastl::allocator,
               eastl::use_first<eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe>>>, true,
               true>
            local_30;
        ReturnValue local_28;

        uint8_t* this_01 = field_13248;
        bool cVar1 = this_01->operator_cast_to_bool();
        if ((cVar1) && (terrainBaseData.field_0 != -1)) {
            local_28 = ((rbtree<int, eastl::pair<int const, TerrainTextureMeta>, eastl::less<int>, eastl::allocator,
                                eastl::use_first<eastl::pair<int const, TerrainTextureMeta>>, true, true>*)(*this_01)
                            .operator->())
                           ->find(terrainBaseData);
            (*this_01).operator->();
            local_30.end();
            cVar1 = local_28 != local_30;
            if (!cVar1) {
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/terrain/TerrainPatch.cpp",
                                377, nullptr);
            }
            lVar2 = *local_28;
            terrainBaseData.field_4 = *(uint16_t*)(lVar2 + 4);
            lVar2 = *local_28;
            *(uint8_t*)((long)&terrainBaseData.field_32 + 4) = *(uint8_t*)(lVar2 + 6);
            lVar2 = *local_28;
            *(uint8_t*)((long)&terrainBaseData.field_32 + 5) = *(uint8_t*)(lVar2 + 7);
        }
    }

    // 0x1007b5f80
    void TerrainPatch::AddTriangle(const TerrainVertex* terrainVertex, int arg2) {
        array<unsigned char, _3ul>* arg3;
        bool bVar2;

        long lVar1 = field_632[arg2];
        TerrainVertex* arg1 = terrainVertex;
        PatchFaceData local_50(terrainVertex);
        TerrainVertex* terrainVertex_00 = (TerrainVertex*)&terrainVertex[2].field_8;
        array<std::array<unsigned char, 3ul>, 3ul>* this_00 = (array<std::array<unsigned char, 3ul>, 3ul>*)2;
        do {
            arg3 = (array<unsigned char, _3ul>*)(*this_00)[(unsigned long)arg1];
            AddVertex(*terrainVertex_00, local_50, *arg3);
            arg1 = terrainVertex_00;
            AddVertexPos(*terrainVertex_00, nullptr);
            terrainVertex_00 = (TerrainVertex*)&terrainVertex_00[-2].field_56;
            bVar2 = this_00 != nullptr;
            this_00 = this_00 - 1;
        } while (bVar2);
        m_faceCount = m_faceCount + 1;
        *(int*)(lVar1 + 8) = *(int*)(lVar1 + 8) + 1;
    }

    // 0x1007b6020
    uint64_t TerrainPatch::GetVertexNormal(int arg1, int arg2) const {
        GridGroup* pGVar1;
        long lVar2;
        uint64_t uVar5;
        long local_38;

        int iVar4 = 0;
        int iVar3 = 0;
        if (arg1 <= m_gridResolution) {
            pGVar1 = (GridGroup*)GetGridGroup(arg1 - 1, arg2);
            if (pGVar1 == nullptr) {
                local_38 = 0;
            } else {
                local_38 = pGVar1->GetGridTile();
            }
            pGVar1 = (GridGroup*)GetGridGroup(arg1 + 1, arg2);
            iVar3 = 0;
            if (pGVar1 == nullptr) {
                lVar2 = 0;
            } else {
                lVar2 = pGVar1->GetGridTile();
            }
            if ((local_38 != 0) && (lVar2 != 0)) {
                iVar3 = *(int*)(local_38 + 52) - *(int*)(lVar2 + 52);
            }
        }
        if (arg2 <= m_gridResolution) {
            pGVar1 = (GridGroup*)GetGridGroup(arg1, arg2 - 1);
            if (pGVar1 == nullptr) {
                local_38 = 0;
            } else {
                local_38 = pGVar1->GetGridTile();
            }
            pGVar1 = (GridGroup*)GetGridGroup(arg1, arg2 + 1);
            iVar4 = 0;
            if (pGVar1 == nullptr) {
                lVar2 = 0;
            } else {
                lVar2 = pGVar1->GetGridTile();
            }
            if ((local_38 != 0) && (lVar2 != 0)) {
                iVar4 = *(int*)(local_38 + 52) - *(int*)(lVar2 + 52);
            }
        }
        if ((arg1 == 1) || (m_gridResolution + 1 == arg1)) {
            iVar3 = 0;
        }
        if ((arg2 == 1) || (m_gridResolution + 1 == arg2)) {
            iVar4 = 0;
        }
        new (&local_48) math::ColourHSL((float)iVar3, (float)(m_gridSize * 2), (float)iVar4);
        ColourHSL local_48 = math::Vector3T<float>::Normalize();
        uVar5._0_4_ = local_48.field_0;
        uVar5._4_4_ = local_48.field_4;
        return uVar5;
    }

    // 0x1007b61b0
    uint64_t TerrainPatch::GetCentreVertexNormal(int arg1, int arg2, float arg3, float arg4) const {
        float local_38 = arg4;
        float local_34 = arg3;
        return local_48 = GetVertexNormal(arg1, arg2);
        float fVar1 = 1.0 - local_34;
        float local_5c = 1.0 - local_38;
        float local_60 = fVar1;
        float local_40 = arg4;
        local_48 *= (local_5c * fVar1);
        uint64_t local_70 = GetVertexNormal(arg1 + 1, arg2);
        float fVar2 = local_34 + 1.0;
        float local_68 = fVar1;
        local_34 = fVar2;
        local_70 *= (local_5c * fVar2);
        local_48 += local_70;
        uint64_t local_58 = GetVertexNormal(arg1 + 1, arg2 + 1);
        float local_50 = fVar2;
        local_70.SetXYZ(local_58);
        fVar1 = local_38 + 1.0;
        local_38 = fVar1;
        local_70 *= (local_34 * fVar1);
        local_48 += local_70;
        local_58 = GetVertexNormal(arg1, arg2 + 1);
        local_50 = fVar1;
        local_70.SetXYZ(local_58);
        local_70 *= (local_38 * local_60);
        local_48 += local_70;
        local_48 *= 0.25;
        return local_48;
    }

    // 0x1007b6320
    void TerrainPatch::AddVertex(const TerrainVertex& terrainVertex, const PatchFaceData& patchFaceData,
                                 const std::array<unsigned char, 3ul>& arg3) {
        void result;
        uint8_t uVar1;
        uint8_t bVar2;
        uint8_t uVar3;
        uint8_t bVar4;
        uint8_t bVar5;
        char cVar6;
        bool cVar7;
        char cVar8;
        TerrainVertex* pTVar9;
        PatchFaceData* this_00;
        PatchFaceData* pPVar10;
        ReturnValue result;
        uint8_t* puVar11;
        uint16_t* puVar12;
        uint8_t* pbVar13;
        long lVar14;
        uint8_t* puVar15;
        char* pcVar16;
        unsigned long arg1;
        ReturnValue* pRVar17;
        float fVar20;
        uint64_t local_70;
        float local_68;
        TerrainVertex* local_58;
        uint16_t local_40;
        uint8_t local_3e;
        ReturnValue* local_38;

        PatchFaceData* local_50 = patchFaceData;
        &result = (ReturnValue*)field_13264.push_back_uninitialized();
        float local_44 = (float)m_gridSize;
        uint32_t uVar18 = ::floor(*(float*)&terrainVertex.field_40 - local_44);
        local_38 = (ReturnValue*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)uVar18);
        float local_48 = (float)::floor(*(float*)&terrainVertex.field_44);
        float fVar19 = (float)::floor(*(float*)&terrainVertex.field_48 - local_44);
        if ((0.0 <= local_38._0_4_) && (0.0 <= fVar19)) {
            fVar20 = local_38._0_4_ - 16383.0;
            result = math::Vector3T<short>::Set((unsigned short)(int)fVar20, (unsigned short)(int)local_48,
                                                (unsigned short)(int)(fVar19 - 16383.0));
            local_70 = *127.0 terrainVertex.field_52;
            local_68 = fVar20;
            uVar18 = math::Vector3TFromVector3<signed char>(local_70);
            local_40 = (uint16_t)uVar18;
            local_3e = (uint8_t)((unsigned int)uVar18 >> 16);
            arg1 = 0;
            puVar11 = &local_40[0];
            uVar1 = *puVar11;
            pRVar17 = &result + 2;
            local_58 = terrainVertex;
            puVar11 = (uint8_t*)(*pRVar17)[0];
            *puVar11 = uVar1;
            puVar11 = &local_40[1];
            uVar1 = *puVar11;
            puVar11 = (uint8_t*)(*pRVar17)[1];
            *puVar11 = uVar1;
            puVar11 = &local_40[2];
            uVar1 = *puVar11;
            puVar11 = (uint8_t*)(*pRVar17)[2];
            *puVar11 = uVar1;
            fVar19 = *(float*)((long)&terrainVertex.field_20 + 4);
            puVar11 = (uint8_t*)(*pRVar17)[3];
            this_00 = local_50;
            *puVar11 = (char)(int)(fVar19 * 127.0);
            puVar12 = (uint16_t*)(*local_50)[0];
            *(uint16_t*)(&result + 1) = *puVar12;
            puVar12 = (uint16_t*)(*this_00)[1];
            *(uint16_t*) && result[1].field_2 = *puVar12;
            pbVar13 = (uint8_t*)(*this_00)[2];
            bVar2 = *pbVar13;
            lVar14 = (*this_00)[2];
            *(unsigned int*) && result[1].field_4 = (unsigned int)*(uint8_t*)(lVar14 + 1) << 16 | (unsigned int)bVar2;
            puVar11 = &this_00->field_6;
            puVar15 = (uint8_t*)(*puVar11)[0];
            local_38._0_1_ = *puVar15;
            puVar15 = (uint8_t*)(*puVar11)[1];
            uVar1 = *puVar15;
            puVar11 = (uint8_t*)(*puVar11)[2];
            pTVar9 = local_58;
            uVar3 = *puVar11;
            &result[2].field_4 = local_38._0_1_;
            &result[2].field_5 = uVar1;
            &result[2].field_6 = uVar3;
            &result[2].field_7 = 0;
            local_38._0_1_ = *(uint8_t*)((long)&local_58->field_12 + 7);
            pRVar17 = &result + 3;
            puVar11 = (uint8_t*)(*pRVar17)[0];
            *puVar11 = local_38._0_1_;
            local_38._0_1_ = *(uint8_t*)((long)&pTVar9->field_12 + 6);
            puVar11 = (uint8_t*)(*pRVar17)[1];
            *puVar11 = local_38._0_1_;
            local_38 =
                (ReturnValue*)(((uint64_t)local_38._1_7_ << 8) | (uint8_t)(*(uint8_t*)((long)&pTVar9->field_12 + 5)));
            puVar11 = (uint8_t*)(*pRVar17)[2];
            *puVar11 = local_38._0_1_;
            uVar1 = *(uint8_t*)((long)&pTVar9->field_12 + 4);
            puVar11 = (uint8_t*)(*pRVar17)[3];
            *puVar11 = uVar1;
            *(uint16_t*) && result[3].field_4 = *(uint16_t*)arg3;
            &result[3].field_6 = arg3[2];
            local_38 = &result + 4;
            do {
                pbVar13 = &this_00->field_15[(unsigned int)arg1];
                bVar2 = *pbVar13;
                pbVar13 = &this_00->field_18[(unsigned int)arg1];
                bVar4 = *pbVar13;
                pbVar13 = (uint8_t*)(*local_38)[arg1];
                pPVar10 = local_50;
                *pbVar13 = bVar4 >> 4 | bVar2 & 240;
                arg1 = arg1 + 1;
            } while (arg1 != 3);
            puVar11 = &local_50->field_9;
            pbVar13 = (uint8_t*)(*puVar11)[0];
            bVar2 = *pbVar13;
            pbVar13 = (uint8_t*)(*puVar11)[1];
            bVar4 = *pbVar13;
            pbVar13 = (uint8_t*)(*puVar11)[2];
            bVar5 = *pbVar13;
            puVar11 = &pPVar10->field_12;
            pcVar16 = (char*)(*puVar11)[0];
            cVar6 = *pcVar16;
            pcVar16 = (char*)(*puVar11)[1];
            cVar7 = *pcVar16;
            pcVar16 = (char*)(*puVar11)[2];
            cVar8 = *pcVar16;
            pbVar13 = (uint8_t*)(*local_38)[3];
            *pbVar13 = cVar8 << 3 | cVar7 << 2 | cVar6 * '\x02' | bVar2 | bVar4 | bVar5;
            return;
        }
        local_44 = fVar19;
        LogAssert("px >= 0 && pz >= 0",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/terrain/"
                  "TerrainPatch.cpp",
                  558, nullptr);
    }

    // 0x1007b66e0
    void TerrainPatch::AddVertexPos(const TerrainVertex& terrainVertex, const int* arg2) {
        void result;
        ReturnValue result;
        uint8_t local_40[16];
        float local_30;

        &result = (ReturnValue*)field_13296.push_back_uninitialized();
        float local_2c = (float)m_gridSize;
        local_40._12_4_ = ::floor(*(float*)&terrainVertex.field_40 - local_2c);
        if (arg2 == nullptr) {
            local_30 = (float)::floor(*(float*)&terrainVertex.field_44);
        } else {
            local_30 = (float)*arg2;
        }
        local_2c = (float)::floor(*(float*)&terrainVertex.field_48 - local_2c);
        if ((0.0 <= (float)local_40._12_4_) && (0.0 <= local_2c)) {
            result =
                math::Vector3T<short>::Set((unsigned short)(int)((float)local_40._12_4_ - 16383.0),
                                           (unsigned short)(int)local_30, (unsigned short)(int)(local_2c - 16383.0));
            new (local_40) math::ColourHSL((float)local_40._12_4_, local_30, local_2c);
            m_aABB.AddPoint(*local_40);
            return;
        }
        LogAssert("px >= 0 && pz >= 0",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/terrain/"
                  "TerrainPatch.cpp",
                  619, nullptr);
    }

    // 0x1007b6a00
    void TerrainPatch::GatherDrawableElements(DrawableQueue& drawableQueue, RT7Core& rt7Core,
                                              const SceneViewData& sceneViewData, const EffectManager& effectManager,
                                              const eastl::fixed_vector<unsigned char, 256ul>& arg5) {
        DrawableSortKey drawableSortKey;
        DrawableSortKey drawableSortKey_00;
        DrawableSortKey drawableSortKey_01;
        DrawableSortKey drawableSortKey_02;
        DrawableSortKey DVar1;
        DrawableSortKey DVar2;
        bool cVar3;
        int iVar4;
        RenderPassType renderPassType;
        DrawableSortKeyType DVar5;
        RenderPassBitSet* renderPassBitSet;
        Vector3T<float>* pVVar6;
        Matrix44T<float>* matrix44;
        float* pfVar7;
        long* plVar8;
        RT7Core* rt7Core_00;
        TerrainPatch* pTVar9;
        Vector4T<float>* this_00;
        CommandLine* pCVar10;
        TerrainPatch_DE* pTVar11;
        unsigned int uVar12;
        RenderMaterial* this_01;
        uint32_t uVar13;
        float arg6;
        float arg6_00;
        float arg6_01;
        float arg6_02;
        float arg6_03;
        float arg6_04;
        RenderPassType in_stack_fffffffffffffec8;
        uint32_t in_stack_fffffffffffffecc;
        AABB local_128;
        long* local_100;
        Drawable_vtbl* local_f8;
        unsigned long local_f0;
        Drawable_vtbl* local_e8;
        RenderMaterial* local_c8;
        TerrainPatch* local_c0;
        DrawableSortKey local_b8;
        Drawable local_a0;
        DrawableGroupType local_90;
        float local_8c;
        OBB local_88;

        if ((m_showPatches != '\0') && (iVar4 = GetVertexDataSize(), iVar4 != 0)) {
            renderPassBitSet = sceneViewData.GetRenderPassBits();
            cVar3 = m_material->CanRenderInPasses(*renderPassBitSet);
            if ((cVar3) && (cVar3 = IsReadyToRender(), cVar3)) {
                local_c8 = (RenderMaterial*)m_material;
                local_88 = math::OBB();
                m_aABB.GetOBB(local_88);
                local_88.Transform(*field_13096);
                uVar12 = 0;
                local_90 = 0;
                local_c0 = this;
                if (*field_13104 <= 0.0 && *field_13104 != 0.0) {
                    local_90 = effectManager.IsEnabled(94);
                }
                local_128 = math::AABB();
                local_88.GetMinimumEnclosingAABB(local_128);
                pVVar6 = (Vector3T<float>*)sceneViewData.SSOBeginPtr();
                local_a0._vptr = (Drawable_vtbl*)local_128.GetFurthestPoint(*pVVar6);
                pVVar6 = (Vector3T<float>*)sceneViewData.SSOBeginPtr();
                local_b8[0] = (DrawableSortKey)local_a0 - *pVVar6;
                local_b8.LengthSq();
                local_8c = 3.4028235e+38;
                do {
                    local_b8[0] = (DrawableSortKey)local_128.GetCornerPos(uVar12);
                    matrix44 = (Matrix44T<float>*)sceneViewData.GetScreen();
                    uVar13 = DstFromCameraPlane(&local_b8, matrix44);
                    local_a0._vptr = (Drawable_vtbl*)(((uint64_t)local_a0._vptr._4_4_ << 32) | (uint32_t)uVar13);
                    pfVar7 = std::min<float>(local_8c, local_a0);
                    local_8c = *pfVar7;
                    uVar12 = uVar12 + 1;
                } while (uVar12 != 8);
                plVar8 = (long*)sceneViewData.field_520.HeapBeginPtr();
                local_100 = (long*)sceneViewData.field_520.end();
                if (plVar8 != local_100) {
                    local_f0 = (unsigned long)(uint8_t)(uint8_t)local_90;
                    local_90 = (local_90 & 255) * 3;
                    local_e8 = (Drawable_vtbl*)&local_c0->field_13488;
                    local_f8 = (Drawable_vtbl*)&local_c0->field_13680;
                    this_01 = local_c8;
                    do {
                        if (*plVar8 == 0) {
                            LogAssert("renderPass",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/terrain/TerrainPatch.cpp",
                                      747, nullptr);
                        }
                        renderPassType = (*plVar8)->GetPos();
                        rt7Core_00 = (RT7Core*)this_01->GetRenderPassEffect(renderPassType);
                        local_b8 = math::Vector2T();
                        uVar13 = (*plVar8)->GetPos();
                        switch (uVar13) {
                        case 0:
                            cVar3 = local_c0->GetRenderFlag(1);
                            if ((cVar3) && (*PTR_m_enablePatchShadows_100ee69b0 != '\0')) {
                                pTVar9 = (TerrainPatch*)drawableQueue.GetDrawableGroup(renderPassType, 0);
                                DVar5 = pTVar9->GetPos();
                                UpdateShadowPassEffect(pTVar9, &local_b8, DVar5, (RenderPassEffect*)rt7Core_00, rt7Core,
                                                       effectManager, arg6, local_8c);
                                pTVar9 = local_c0;
                                local_a0._vptr = local_f8;
                                pTVar11 = DrawableElementPool<TerrainPatch_DE>::Create<
                                    TerrainPatch&, eastl::fixed_vector<unsigned char, 256ul> const&, math::OBB&, float&,
                                    render::InputAssemblerState*>(*local_c0, arg5, local_88, local_8c, local_a0);
                                DVar2 = local_b8[0];
                                local_a0.unique_ptr<true, void>(pTVar11);
                                drawableSortKey._4_4_ = in_stack_fffffffffffffecc;
                                drawableSortKey._0_4_ = in_stack_fffffffffffffec8;
                                drawableQueue.AddDrawable(drawableSortKey, *DVar2, &local_a0, (DrawableGroupType)pTVar9,
                                                          0);
                                break;
                            }
                            goto switchD_1007b6cda_caseD_c;
                        default:
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "graphics/runetek7/terrain/TerrainPatch.cpp",
                                            831, "Unsupported render pass");
                        case 2:
                            pCVar10 = drawableQueue.GetDrawableGroup(renderPassType, local_90);
                            uVar12 = pCVar10->GetPos();
                            pTVar9 = local_c0;
                            in_stack_fffffffffffffec8 = (RenderPassType)local_f0;
                            UpdateReflectionPassEffect((DrawableSortKey*)local_c0, (DrawableSortKeyType)&local_b8,
                                                       (RenderPassEffect*)(unsigned long)uVar12, rt7Core_00,
                                                       (EffectManager*)rt7Core, arg6_00, local_8c,
                                                       (uint8_t)effectManager);
                            local_a0._vptr = local_e8;
                            pTVar11 = DrawableElementPool<TerrainPatch_DE>::Create<
                                TerrainPatch&, eastl::fixed_vector<unsigned char, 256ul> const&, math::OBB&, float&,
                                render::InputAssemblerState*>(*pTVar9, arg5, local_88, local_8c, local_a0);
                            DVar2 = local_b8[0];
                            local_a0.unique_ptr<true, void>(pTVar11);
                            drawableSortKey_00._4_4_ = in_stack_fffffffffffffecc;
                            drawableSortKey_00._0_4_ = in_stack_fffffffffffffec8;
                            drawableQueue.AddDrawable(drawableSortKey_00, *DVar2, &local_a0, (DrawableGroupType)pTVar9,
                                                      local_90);
                            break;
                        case 3:
                            pCVar10 = drawableQueue.GetDrawableGroup(renderPassType, local_90);
                            uVar12 = pCVar10->GetPos();
                            pTVar9 = local_c0;
                            UpdateSimpleGeometryPassEffect((DrawableSortKey*)local_c0, (DrawableSortKeyType)&local_b8,
                                                           (RenderPassEffect*)(unsigned long)uVar12, rt7Core_00,
                                                           (EffectManager*)rt7Core, arg6_01, local_8c,
                                                           (RenderPassType)effectManager);
                            local_a0._vptr = local_e8;
                            pTVar11 = DrawableElementPool<TerrainPatch_DE>::Create<
                                TerrainPatch&, eastl::fixed_vector<unsigned char, 256ul> const&, math::OBB&, float&,
                                render::InputAssemblerState*>(*pTVar9, arg5, local_88, local_8c, local_a0);
                            DVar2 = local_b8[0];
                            local_a0.unique_ptr<true, void>(pTVar11);
                            drawableSortKey_01._4_4_ = in_stack_fffffffffffffecc;
                            drawableSortKey_01._0_4_ = renderPassType;
                            drawableQueue.AddDrawable(drawableSortKey_01, *DVar2, &local_a0, (DrawableGroupType)pTVar9,
                                                      local_90);
                            in_stack_fffffffffffffec8 = renderPassType;
                            break;
                        case 4:
                            pCVar10 = drawableQueue.GetDrawableGroup(renderPassType, local_90);
                            DVar5 = pCVar10->GetPos();
                            pTVar9 = local_c0;
                            in_stack_fffffffffffffec8 = (RenderPassType)local_f0;
                            UpdateForwardPassEffect(local_c0, &local_b8, DVar5, (RenderPassEffect*)rt7Core_00, rt7Core,
                                                    effectManager, arg6_02, local_8c, (uint8_t)local_f0, &local_88);
                            local_a0._vptr = local_e8;
                            pTVar11 = DrawableElementPool<TerrainPatch_DE>::Create<
                                TerrainPatch&, eastl::fixed_vector<unsigned char, 256ul> const&, math::OBB&, float&,
                                render::InputAssemblerState*>(*pTVar9, arg5, local_88, local_8c, local_a0);
                            DVar2 = local_b8[0];
                            local_a0.unique_ptr<true, void>(pTVar11);
                            drawableSortKey_02._4_4_ = in_stack_fffffffffffffecc;
                            drawableSortKey_02._0_4_ = in_stack_fffffffffffffec8;
                            drawableQueue.AddDrawable(drawableSortKey_02, *DVar2, &local_a0, (DrawableGroupType)pTVar9,
                                                      local_90);
                            break;
                        case 5:
                            pCVar10 = drawableQueue.GetDrawableGroup(renderPassType, 0);
                            DVar5 = pCVar10->GetPos();
                            pTVar9 = local_c0;
                            UpdateMiniMapPassEffect(local_c0, &local_b8, DVar5, (RenderPassEffect*)rt7Core_00, rt7Core,
                                                    effectManager, arg6_03, local_8c);
                            local_a0._vptr = local_e8;
                            pTVar11 = DrawableElementPool<TerrainPatch_DE>::Create<
                                TerrainPatch&, eastl::fixed_vector<unsigned char, 256ul> const&, math::OBB&, float&,
                                render::InputAssemblerState*>(*pTVar9, arg5, local_88, local_8c, local_a0);
                            this_00 = (Vector4T<float>*)(*pTVar11->field_112)[3];
                            pfVar7 = (float*)(*this_00)[1];
                            DVar2 = local_b8[0];
                            *pfVar7 = *pfVar7 + 100.0;
                            local_a0.unique_ptr<true, void>(pTVar11);
                            DVar1._4_4_ = in_stack_fffffffffffffecc;
                            DVar1._0_4_ = in_stack_fffffffffffffec8;
                            drawableQueue.AddDrawable(DVar1, *DVar2, &local_a0, (DrawableGroupType)local_c0, 0);
                            break;
                        case 9:
                            cVar3 = this_01->GetOption(13);
                            if (cVar3) {
                                pCVar10 = drawableQueue.GetDrawableGroup(renderPassType, local_90);
                                uVar12 = pCVar10->GetPos();
                                pTVar9 = local_c0;
                                UpdateSimpleGeometryPassEffect(
                                    (DrawableSortKey*)local_c0, (DrawableSortKeyType)&local_b8,
                                    (RenderPassEffect*)(unsigned long)uVar12, rt7Core_00, (EffectManager*)rt7Core,
                                    arg6_04, local_8c, (RenderPassType)effectManager);
                                local_a0._vptr = local_e8;
                                pTVar11 = DrawableElementPool<TerrainPatch_DE>::Create<
                                    TerrainPatch&, eastl::fixed_vector<unsigned char, 256ul> const&, math::OBB&, float&,
                                    render::InputAssemblerState*>(*pTVar9, arg5, local_88, local_8c, local_a0);
                                DVar1 = local_b8[0];
                                local_a0.unique_ptr<true, void>(pTVar11);
                                DVar2._4_4_ = in_stack_fffffffffffffecc;
                                DVar2._0_4_ = renderPassType;
                                drawableQueue.AddDrawable(DVar2, *DVar1, &local_a0, (DrawableGroupType)pTVar9,
                                                          local_90);
                                in_stack_fffffffffffffec8 = renderPassType;
                                break;
                            }
                        case 12:
                        case 14:
                            goto switchD_1007b6cda_caseD_c;
                        }
                        this_01 = local_c8;
                    switchD_1007b6cda_caseD_c:
                        plVar8 = plVar8 + 1;
                    } while (plVar8 != local_100);
                }
            }
        }
    }

    // 0x1007b7270
    bool TerrainPatch::IsReadyToRender() const {
        TextureAtlasReference* this_00;
        type* arg2;
        duration<long long, std::ratio<1l, 1l>> local_30;

        bool cVar1 = field_13872.valid();
        if (cVar1) {
            local_30.duration<int>(0, arg2);
            if (field_13872.wait_for<long long, std::ratio<1l, 1l>>(local_30) == 0) {
                this_00 = (TextureAtlasReference*)m_material->GetTextureAtlasReference();
                if ((this_00 == nullptr) || (cVar1 = this_00->CheckTexturesLoaded(), cVar1)) {
                    return 1;
                }
            }
        }
        return 0;
    }

    // 0x1007b73b0
    void TerrainPatch::UpdateForwardPassEffect(DrawableSortKey& drawableSortKey,
                                               DrawableSortKeyType drawableSortKeyType,
                                               RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                               const EffectManager& effectManager, float arg6, float arg7, bool arg8,
                                               const math::OBB& obb) {
        uint8_t* objType;
        uint8_t arg2;
        uint8_t bVar4;
        shared_ptr* pointLightIndicesEffect;
        unsigned long uVar10;
        PlayerDataComparator<oldscape::social::FriendChatUser>* playerDataComparator;
        float fVar11;
        uint8_t auVar12[16];
        PointLightIndicesEffect_vtbl* local_78;
        float local_70;
        uint32_t local_40;
        uint32_t local_3c;

        DrawableSortKey* local_68 = drawableSortKey;
        bool bVar1 = (bool)effectManager.IsEnabled(29);
        if (bVar1 == false) {
            local_40 = 0;
        } else {
            local_40 = effectManager.IsEnabled(48);
        }
        char local_35 = effectManager.IsEnabled(26);
        long lVar6 = m_material->GetTextureAtlasReference();
        TerrainPatch* local_50 = this;
        if (lVar6 == 0) {
            local_3c = 0;
        } else {
            local_3c = effectManager.IsEnabled(27);
        }
        int iVar5 = m_material->GetEndPosition();
        bool bVar2 = (bool)effectManager.IsEnabled(39);
        renderPassEffect.Set(29, bVar1);
        renderPassEffect.Set(48, local_40._0_1_);
        renderPassEffect.Set(63, local_3c._0_1_);
        renderPassEffect.Set(54, iVar5 != -1);
        renderPassEffect.Set(39, bVar2);
        TerrainPatch* vector3 = local_50;
        if (local_35 != '\0') {
            objType = &local_50->field_13232;
            bVar1 = *objType == nullptr;
            if (bVar1) {
                GetWorldTransform((TerrainPatch*)&local_b8);
                local_78 = (PointLightIndicesEffect_vtbl*)local_b8.GetPos();
                local_70 = arg7;
                pointLightIndicesEffect = local_78.GetEffect(vector3);
                *objType = *pointLightIndicesEffect;
            }
            arg2 = false;
            bVar1 = *objType != nullptr;
            if (bVar1) {
                local_b8 = math::Sphere();
                obb.GetMinimumEnclosingSphere(local_b8);
                arg2 = ((PointLightIndicesEffect*)(*objType).operator->())->TestVisiblePointLightInfluence(local_b8);
            }
            renderPassEffect.Set(26, (bool)arg2);
        }
        SunlightShadows* this_02 =
            (SunlightShadows*)((EffectManager*)(ShaderManager*)effectManager)->GetEffect<PlanarReflection>(30);
        auto this_03 = this_02->GetSunlightCsmManager();
        bool cVar3 = ((EffectManager*)(ShaderManager*)effectManager)->IsEnabled(30);
        if (!cVar3) {
            bVar1 = false;
        } else {
            fVar11 = (float)this_03->GetMaxShadowDistance();
            bVar1 = arg7 < fVar11;
        }
        if (bVar1 == false) {
            bVar2 = false;
        } else {
            bVar4 = ((EffectManager*)(ShaderManager*)effectManager)->IsEnabled(28);
            bVar2 = (bool)(!arg8 & bVar4);
        }
        renderPassEffect.Set(28, bVar2);
        renderPassEffect.Set(30, bVar1);
        PointLightShadows* this_04 =
            (PointLightShadows*)((EffectManager*)(ShaderManager*)effectManager)->GetEffect<PlanarReflection>(35);
        auto this_05 = this_04->GetPointLightSMManager();
        cVar3 = ((EffectManager*)(ShaderManager*)effectManager)->IsEnabled(26);
        if (!cVar3) {
        LAB_1007b7641:
            bVar1 = false;
        } else {
            cVar3 = ((EffectManager*)(ShaderManager*)effectManager)->IsEnabled(35);
            if (!cVar3)
                goto LAB_1007b7641;
            lVar6 = this_05->SSOBeginPtr();
            bVar1 = arg7 < *(float*)(lVar6 + 20);
        }
        renderPassEffect.Set(35, bVar1);
        auVar12 = ((EffectManager*)(ShaderManager*)effectManager)->BuildShaderEffectList(renderPassEffect);
        renderPassEffect.field_16 = auVar12[0];
        renderPassEffect.field_17 = auVar12[1];
        renderPassEffect.field_18 = auVar12[2];
        renderPassEffect.field_19 = auVar12[3];
        renderPassEffect.field_20 = auVar12[4];
        renderPassEffect.field_21 = auVar12._5_3_;
        renderPassEffect.field_24 = auVar12._8_8_;
        lVar6 = rt7Core.GetPostProcessController()->GetCurrentConfig();
        if (*(char*)(lVar6 + 468) == '\0') {
            renderPassEffect.field_16.Set(64, false);
        }
        auto pSVar7 = rt7Core.GetShaderManager();
        auto pVVar8 = TerrainPatchRenderer::GetVertexDecl();
        RenderPassEffect::UpdateShader(renderPassEffect, effectManager, (ShaderType)pSVar7, *6, (RenderPassType)pVVar8,
                                       '\x04');
        unsigned long uVar9 = renderPassEffect.GetConstructedShaderId();
        if (5 < drawableSortKeyType) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/DrawableSortKey.h",
                            177, "Unknown sort key type");
        }
        bVar4 = !arg8 * '\x03' + 1;
        switch (drawableSortKeyType) {
        case 0:
            fVar11 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            uVar10 = (unsigned long)fVar11;
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)((((long)(fVar11 - 9.223372e+18) &
                                                                                (long)uVar10 >> 63 |
                                                                            uVar10)
                                                                               << 24 |
                                                                           (unsigned long)bVar4 << 56) +
                                                                          (uVar9 & 65535) + 16711680);
            break;
        case 1:
            fVar11 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            lVar6 = (long)fVar11;
            uVar9 = uVar9 & 65535;
            uVar10 = (unsigned long)((unsigned int)lVar6 |
                                     (unsigned int)(long)(fVar11 - 9.223372e+18) & (unsigned int)(lVar6 >> 63)) *
                                 -16777216 +
                             72057594021150720 &
                         72057594021150720 |
                     (unsigned long)bVar4 << 56;
            goto LAB_1007b7887;
        case 2:
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((long)(float)(-(unsigned int)(0.0 < arg7) &
                                                                                         (unsigned int)(arg7 + 0.5)) &
                                                                           4294967295U) *
                                                                              256 +
                                                                          ((uVar9 & 65535) << 40 | (unsigned long)bVar4
                                                                                                       << 56) +
                                                                          255);
            break;
        case 3:
            fVar11 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            uVar10 = (unsigned long)fVar11;
            uVar9 = (uVar9 & 65535) << 40 | (unsigned long)bVar4 << 56;
            uVar10 = ((long)(fVar11 - 9.223372e+18) & (long)uVar10 >> 63 | uVar10) * -256 + 1099511627520;
        LAB_1007b7887:
            playerDataComparator = (PlayerDataComparator<oldscape::social::FriendChatUser>*)(uVar10 | uVar9);
            break;
        case 4:
            fVar11 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            lVar6 = (long)fVar11;
            playerDataComparator =
                (PlayerDataComparator<
                    oldscape::social::FriendChatUser>*)((uVar9 & 65535) +
                                                        ((unsigned long)bVar4 << 24 |
                                                         (unsigned long)((unsigned int)lVar6 |
                                                                         (unsigned int)(long)(fVar11 - 9.223372e+18) &
                                                                             (unsigned int)(lVar6 >> 63))
                                                             << 32) +
                                                        16711680);
            break;
        case 5:
            fVar11 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            uVar10 = (unsigned long)fVar11;
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((unsigned long)bVar4 << 24 |
                                                                           ((long)(fVar11 - 9.223372e+18) &
                                                                                (long)uVar10 >> 63 |
                                                                            uVar10) *
                                                                               -4294967296 |
                                                                           uVar9 & 65535) -
                                                                          4294967296);
        }
        DrawableSortKey local_b8(playerDataComparator);
        *local_68 = local_b8;
    }

    // 0x1007b7ac0
    void TerrainPatch::UpdateReflectionPassEffect(DrawableSortKey& drawableSortKey,
                                                  DrawableSortKeyType drawableSortKeyType,
                                                  RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                                  const EffectManager& effectManager, float arg6, float arg7,
                                                  bool arg8) {
        uint8_t arg2;
        unsigned long uVar7;
        uint32_t in_register_00000034;
        PlayerDataComparator<oldscape::social::FriendChatUser>* playerDataComparator;
        uint64_t in_register_00000089;
        float fVar8;
        uint8_t auVar9[16];
        char in_stack_00000008;
        uint64_t local_40;

        ShaderManager* shaderManager = (ShaderManager*)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg8);
        bool local_31 = (bool)shaderManager->IsEnabled(29);
        long lVar2 = ((drawableSortKey + 6))->GetTextureAtlasReference();
        if (lVar2 == 0) {
            arg2 = false;
        } else {
            arg2 = shaderManager->IsEnabled(27);
        }
        int iVar1 = ((drawableSortKey + 6))->GetEndPosition();
        rt7Core.Set(29, local_31);
        rt7Core.Set(63, (bool)arg2);
        rt7Core.Set(54, iVar1 != -1);
        auVar9 = shaderManager->BuildShaderEffectList(rt7Core);
        *(uint8_t(*)[16]) & rt7Core.field_16 = auVar9;
        auto pSVar3 = effectManager.GetShaderManager();
        auto pVVar4 = TerrainPatchRenderer::GetVertexDecl();
        RenderPassEffect::UpdateShader(rt7Core, *shaderManager, (ShaderType)pSVar3, *6, (RenderPassType)pVVar4, '\x02');
        unsigned long uVar5 = rt7Core.GetConstructedShaderId();
        if (5 < (unsigned int)renderPassEffect) {
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/DrawableSortKey.h",
                            177, "Unknown sort key type");
        }
        uint8_t bVar6 = (in_stack_00000008 == '\0') * '\x03' + 1;
        switch ((unsigned long)renderPassEffect & 4294967295) {
        case 0:
            fVar8 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            uVar7 = (unsigned long)fVar8;
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)((((long)(fVar8 - 9.223372e+18) &
                                                                                (long)uVar7 >> 63 |
                                                                            uVar7)
                                                                               << 24 |
                                                                           (unsigned long)bVar6 << 56) +
                                                                          (uVar5 & 65535) + 16711680);
            break;
        case 1:
            fVar8 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            lVar2 = (long)fVar8;
            uVar5 = uVar5 & 65535;
            uVar7 = (unsigned long)((unsigned int)lVar2 |
                                    (unsigned int)(long)(fVar8 - 9.223372e+18) & (unsigned int)(lVar2 >> 63)) *
                                -16777216 +
                            72057594021150720 &
                        72057594021150720 |
                    (unsigned long)bVar6 << 56;
            goto LAB_1007b7d67;
        case 2:
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((long)(float)(-(unsigned int)(0.0 < arg7) &
                                                                                         (unsigned int)(arg7 + 0.5)) &
                                                                           4294967295U) *
                                                                              256 +
                                                                          ((uVar5 & 65535) << 40 | (unsigned long)bVar6
                                                                                                       << 56) +
                                                                          255);
            break;
        case 3:
            fVar8 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            uVar7 = (unsigned long)fVar8;
            uVar5 = (uVar5 & 65535) << 40 | (unsigned long)bVar6 << 56;
            uVar7 = ((long)(fVar8 - 9.223372e+18) & (long)uVar7 >> 63 | uVar7) * -256 + 1099511627520;
        LAB_1007b7d67:
            playerDataComparator = (PlayerDataComparator<oldscape::social::FriendChatUser>*)(uVar7 | uVar5);
            break;
        case 4:
            fVar8 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            lVar2 = (long)fVar8;
            playerDataComparator =
                (PlayerDataComparator<
                    oldscape::social::FriendChatUser>*)((uVar5 & 65535) +
                                                        ((unsigned long)bVar6 << 24 |
                                                         (unsigned long)((unsigned int)lVar2 |
                                                                         (unsigned int)(long)(fVar8 - 9.223372e+18) &
                                                                             (unsigned int)(lVar2 >> 63))
                                                             << 32) +
                                                        16711680);
            break;
        case 5:
            fVar8 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            uVar7 = (unsigned long)fVar8;
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((unsigned long)bVar6 << 24 |
                                                                           ((long)(fVar8 - 9.223372e+18) &
                                                                                (long)uVar7 >> 63 |
                                                                            uVar7) *
                                                                               -4294967296 |
                                                                           uVar5 & 65535) -
                                                                          4294967296);
        }
        new (&local_40)
            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(playerDataComparator);
        *(uint64_t*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)drawableSortKeyType) = local_40;
    }

    // 0x1007b7e60
    void TerrainPatch::UpdateSimpleGeometryPassEffect(DrawableSortKey& drawableSortKey,
                                                      DrawableSortKeyType drawableSortKeyType,
                                                      RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                                      const EffectManager& effectManager, float arg6, float arg7,
                                                      RenderPassType renderPassType) {
        uint8_t arg2;
        unsigned long uVar5;
        uint32_t in_register_00000034;
        PlayerDataComparator<oldscape::social::FriendChatUser>* playerDataComparator;
        uint32_t in_register_0000008c;
        float fVar6;
        uint8_t auVar7[16];
        unsigned char in_stack_00000008;
        uint64_t local_38;

        ShaderManager* shaderManager =
            (ShaderManager*)(((uint64_t)in_register_0000008c << 32) | (uint32_t)renderPassType);
        long lVar1 = ((drawableSortKey + 6))->GetTextureAtlasReference();
        if (lVar1 == 0) {
            arg2 = false;
        } else {
            arg2 = shaderManager->IsEnabled(27);
        }
        rt7Core.Set(63, (bool)arg2);
        auVar7 = shaderManager->BuildShaderEffectList(rt7Core);
        *(uint8_t(*)[16]) & rt7Core.field_16 = auVar7;
        auto pSVar2 = effectManager.GetShaderManager();
        auto pVVar3 = TerrainPatchRenderer::GetVertexDecl();
        RenderPassEffect::UpdateShader(rt7Core, *shaderManager, (ShaderType)pSVar2, *7, (RenderPassType)pVVar3,
                                       in_stack_00000008);
        unsigned long uVar4 = rt7Core.GetConstructedShaderId();
        switch ((unsigned long)renderPassEffect & 4294967295) {
        case 0:
            fVar6 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            uVar5 = (unsigned long)fVar6;
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((long)(fVar6 - 9.223372e+18) &
                                                                               (long)uVar5 >> 63 |
                                                                           uVar5)
                                                                              << 24 |
                                                                          uVar4 & 65535 | 288230376168423424);
            break;
        case 1:
            fVar6 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            lVar1 = (long)fVar6;
            playerDataComparator =
                (PlayerDataComparator<
                    oldscape::social::FriendChatUser>*)((unsigned long)((unsigned int)lVar1 |
                                                                        (unsigned int)(long)(fVar6 - 9.223372e+18) &
                                                                            (unsigned int)(lVar1 >> 63)) *
                                                                    -16777216 +
                                                                72057594021150720 &
                                                            72057594021150720 |
                                                        uVar4 & 65535 | 288230376151711744);
            break;
        case 2:
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)((((long)(float)(-(unsigned int)(0.0 < arg7) &
                                                                                          (unsigned int)(arg7 + 0.5)) &
                                                                            4294967295U)
                                                                               << 8 |
                                                                           (uVar4 & 65535) << 40) +
                                                                          288230376151711999);
            break;
        case 3:
            fVar6 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            uVar5 = (unsigned long)fVar6;
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)((uVar4 & 65535) << 40 | 288230376151711744 |
                                                                          ((long)(fVar6 - 9.223372e+18) &
                                                                               (long)uVar5 >> 63 |
                                                                           uVar5) *
                                                                                  -256 +
                                                                              1099511627520);
            break;
        case 4:
            fVar6 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            lVar1 = (long)fVar6;
            playerDataComparator =
                (PlayerDataComparator<
                    oldscape::social::FriendChatUser>*)(((unsigned long)((unsigned int)lVar1 |
                                                                         (unsigned int)(long)(fVar6 - 9.223372e+18) &
                                                                             (unsigned int)(lVar1 >> 63))
                                                         << 32) +
                                                        (uVar4 & 65535) + 83820544);
            break;
        case 5:
            fVar6 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            uVar5 = (unsigned long)fVar6;
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)((((long)(fVar6 - 9.223372e+18) &
                                                                                (long)uVar5 >> 63 |
                                                                            uVar5) *
                                                                               -4294967296 |
                                                                           uVar4 & 65535) -
                                                                          4227858432);
            break;
        default:
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/DrawableSortKey.h",
                            177, "Unknown sort key type");
        }
        new (&local_38)
            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(playerDataComparator);
        *(uint64_t*)(((uint64_t)in_register_00000034 << 32) | (uint32_t)drawableSortKeyType) = local_38;
    }

    // 0x1007b81e0
    void TerrainPatch::UpdateShadowPassEffect(DrawableSortKey& drawableSortKey, DrawableSortKeyType drawableSortKeyType,
                                              RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                              const EffectManager& effectManager, float arg6, float arg7) {
        long lVar4;
        unsigned long uVar5;
        PlayerDataComparator<oldscape::social::FriendChatUser>* playerDataComparator;
        float fVar6;
        uint8_t auVar7[16];

        auVar7 = effectManager.BuildShaderEffectList(renderPassEffect);
        renderPassEffect.field_16 = auVar7[0];
        renderPassEffect.field_17 = auVar7[1];
        renderPassEffect.field_18 = auVar7[2];
        renderPassEffect.field_19 = auVar7[3];
        renderPassEffect.field_20 = auVar7[4];
        renderPassEffect.field_21 = auVar7._5_3_;
        renderPassEffect.field_24 = auVar7._8_8_;
        auto pSVar1 = rt7Core.GetShaderManager();
        auto pVVar2 = TerrainPatchRenderer::GetVertexDeclPos();
        RenderPassEffect::UpdateShader(renderPassEffect, effectManager, (ShaderType)pSVar1, *9, (RenderPassType)pVVar2,
                                       '\0');
        unsigned long uVar3 = renderPassEffect.GetConstructedShaderId();
        switch (drawableSortKeyType) {
        case 0:
            fVar6 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            uVar5 = (unsigned long)fVar6;
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((long)(fVar6 - 9.223372e+18) &
                                                                               (long)uVar5 >> 63 |
                                                                           uVar5)
                                                                              << 24 |
                                                                          uVar3 & 65535 | 288230376168423424);
            break;
        case 1:
            fVar6 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            lVar4 = (long)fVar6;
            playerDataComparator =
                (PlayerDataComparator<
                    oldscape::social::FriendChatUser>*)((unsigned long)((unsigned int)lVar4 |
                                                                        (unsigned int)(long)(fVar6 - 9.223372e+18) &
                                                                            (unsigned int)(lVar4 >> 63)) *
                                                                    -16777216 +
                                                                72057594021150720 &
                                                            72057594021150720 |
                                                        uVar3 & 65535 | 288230376151711744);
            break;
        case 2:
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)((((long)(float)(-(unsigned int)(0.0 < arg7) &
                                                                                          (unsigned int)(arg7 + 0.5)) &
                                                                            4294967295U)
                                                                               << 8 |
                                                                           (uVar3 & 65535) << 40) +
                                                                          288230376151711999);
            break;
        case 3:
            fVar6 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            uVar5 = (unsigned long)fVar6;
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)((uVar3 & 65535) << 40 | 288230376151711744 |
                                                                          ((long)(fVar6 - 9.223372e+18) &
                                                                               (long)uVar5 >> 63 |
                                                                           uVar5) *
                                                                                  -256 +
                                                                              1099511627520);
            break;
        case 4:
            fVar6 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            lVar4 = (long)fVar6;
            playerDataComparator =
                (PlayerDataComparator<
                    oldscape::social::FriendChatUser>*)(((unsigned long)((unsigned int)lVar4 |
                                                                         (unsigned int)(long)(fVar6 - 9.223372e+18) &
                                                                             (unsigned int)(lVar4 >> 63))
                                                         << 32) +
                                                        (uVar3 & 65535) + 83820544);
            break;
        case 5:
            fVar6 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            uVar5 = (unsigned long)fVar6;
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)((((long)(fVar6 - 9.223372e+18) &
                                                                                (long)uVar5 >> 63 |
                                                                            uVar5) *
                                                                               -4294967296 |
                                                                           uVar3 & 65535) -
                                                                          4227858432);
            break;
        default:
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/DrawableSortKey.h",
                            177, "Unknown sort key type");
        }
        DrawableSortKey local_38(playerDataComparator);
        drawableSortKey = local_38;
    }

    // 0x1007b8500
    void TerrainPatch::UpdateMiniMapPassEffect(DrawableSortKey& drawableSortKey,
                                               DrawableSortKeyType drawableSortKeyType,
                                               RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                               const EffectManager& effectManager, float arg6, float arg7) {
        uint8_t arg2;
        unsigned long uVar5;
        PlayerDataComparator<oldscape::social::FriendChatUser>* playerDataComparator;
        float fVar6;
        uint8_t auVar7[16];

        long lVar1 = m_material->GetTextureAtlasReference();
        if (lVar1 == 0) {
            arg2 = false;
        } else {
            arg2 = effectManager.IsEnabled(27);
        }
        bool arg2_00 = (bool)effectManager.IsEnabled(29);
        renderPassEffect.Set(29, arg2_00);
        renderPassEffect.Set(63, (bool)arg2);
        auVar7 = effectManager.BuildShaderEffectList(renderPassEffect);
        renderPassEffect.field_16 = auVar7[0];
        renderPassEffect.field_17 = auVar7[1];
        renderPassEffect.field_18 = auVar7[2];
        renderPassEffect.field_19 = auVar7[3];
        renderPassEffect.field_20 = auVar7[4];
        renderPassEffect.field_21 = auVar7._5_3_;
        renderPassEffect.field_24 = auVar7._8_8_;
        auto pSVar2 = rt7Core.GetShaderManager();
        auto pVVar3 = TerrainPatchRenderer::GetVertexDecl();
        RenderPassEffect::UpdateShader(renderPassEffect, effectManager, (ShaderType)pSVar2, *6, (RenderPassType)pVVar3,
                                       '\x05');
        unsigned long uVar4 = renderPassEffect.GetConstructedShaderId();
        switch (drawableSortKeyType) {
        case 0:
            fVar6 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            uVar5 = (unsigned long)fVar6;
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)(((long)(fVar6 - 9.223372e+18) &
                                                                               (long)uVar5 >> 63 |
                                                                           uVar5)
                                                                              << 24 |
                                                                          uVar4 & 65535 | 288230376168423424);
            break;
        case 1:
            fVar6 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            lVar1 = (long)fVar6;
            playerDataComparator =
                (PlayerDataComparator<
                    oldscape::social::FriendChatUser>*)((unsigned long)((unsigned int)lVar1 |
                                                                        (unsigned int)(long)(fVar6 - 9.223372e+18) &
                                                                            (unsigned int)(lVar1 >> 63)) *
                                                                    -16777216 +
                                                                72057594021150720 &
                                                            72057594021150720 |
                                                        uVar4 & 65535 | 288230376151711744);
            break;
        case 2:
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)((((long)(float)(-(unsigned int)(0.0 < arg7) &
                                                                                          (unsigned int)(arg7 + 0.5)) &
                                                                            4294967295U)
                                                                               << 8 |
                                                                           (uVar4 & 65535) << 40) +
                                                                          288230376151711999);
            break;
        case 3:
            fVar6 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            uVar5 = (unsigned long)fVar6;
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)((uVar4 & 65535) << 40 | 288230376151711744 |
                                                                          ((long)(fVar6 - 9.223372e+18) &
                                                                               (long)uVar5 >> 63 |
                                                                           uVar5) *
                                                                                  -256 +
                                                                              1099511627520);
            break;
        case 4:
            fVar6 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            lVar1 = (long)fVar6;
            playerDataComparator =
                (PlayerDataComparator<
                    oldscape::social::FriendChatUser>*)(((unsigned long)((unsigned int)lVar1 |
                                                                         (unsigned int)(long)(fVar6 - 9.223372e+18) &
                                                                             (unsigned int)(lVar1 >> 63))
                                                         << 32) +
                                                        (uVar4 & 65535) + 83820544);
            break;
        case 5:
            fVar6 = (float)(-(unsigned int)(0.0 < arg7) & (unsigned int)(arg7 + 0.5));
            uVar5 = (unsigned long)fVar6;
            playerDataComparator =
                (PlayerDataComparator<oldscape::social::FriendChatUser>*)((((long)(fVar6 - 9.223372e+18) &
                                                                                (long)uVar5 >> 63 |
                                                                            uVar5) *
                                                                               -4294967296 |
                                                                           uVar4 & 65535) -
                                                                          4227858432);
            break;
        default:
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/DrawableSortKey.h",
                            177, "Unknown sort key type");
        }
        DrawableSortKey local_38(playerDataComparator);
        drawableSortKey = local_38;
    }

    // 0x1007b8870
    void TerrainPatch::RenderDebug(RenderPassType renderPassType, DrawableElement& drawableElement) const {
        long* plVar1;
        Matrix44T<float>* matrix44;
        Matrix44T<float>* this_00;
        AABB local_48;

        if ((m_showWorldAABB != '\0') && (renderPassType == 4)) {
            matrix44 = field_13096;
            if (field_13096 == nullptr) {
                matrix44 = (Matrix44T<float>*)PTR_IDENTITY_100ee6730;
            }
            this_00 = (Matrix44T<float>*)((long)&drawableElement[1]._vptr + 4);
            *this_00 = *matrix44;
            local_48 = math::AABB(m_aABB);
            local_48.Transform(*this_00);
            plVar1 = DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != nullptr) {
                new (&local_48.field_32) oldscape::sidebars::SideBarData(-1, 3);
                (**(void (**)(...))(*plVar1 + 72))(plVar1, &local_48, &local_48.field_32);
            }
        }
    }

} // namespace jag::graphics

// 0x1007b6860
void floor(float arg1) {
    _floorf();
}
