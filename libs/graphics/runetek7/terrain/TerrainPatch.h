// libs/graphics/runetek7/terrain/TerrainPatch.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::graphics {
    class GridGroup {
    public:
        uint8_t* GetGridTileWater();
        GridGroup();
        GridGroup* GetGridTile();
        GridGroup* GetGridTile() const;
        uint8_t* GetGridTileOverlay();
        uint8_t* GetGridTileOverlay() const;
        uint8_t* GetGridTileUnderlay();
        uint8_t* GetGridTileUnderlay() const;

    private:
        uint8_t _unknown_0[40];
        uint8_t field_40;
        uint8_t _unknown_41[79];
        uint8_t field_120;
        uint8_t _unknown_121[79];
        uint8_t field_200;
        uint8_t _unknown_201[79];
        uint8_t field_280;
    };

    class PatchFaceData {
    public:
        PatchFaceData(const TerrainVertex* terrainVertex);

    private:
        unsigned short field_0;
        unsigned short field_2;
        unsigned short field_4;
        uint8_t _unknown_6[3];
        uint8_t field_9;
        uint8_t field_10;
        uint8_t field_11;
        uint8_t field_12;
        uint8_t field_13;
        uint8_t field_14;
        uint8_t _unknown_15[11];
    };

    class TerrainPatch : public DebugPrimitiveRendererBasic // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~TerrainPatch();
        virtual void GatherDrawableElements(DrawableQueue& drawableQueue, RT7Core& rt7Core,
                                            const SceneViewData& sceneViewData, const EffectManager& effectManager);
        virtual void RenderDebug(RenderPassType renderPassType, DrawableElement& drawableElement) const;
        uint8_t* GetAABB() const;
        int GetGridSize() const;
        TcpConnectionMessageBase GetMaterial() const;
        uint8_t* GetIrradianceEffect();
        uint8_t* GetVertexDataBuffer() const;
        uint8_t* GetRenderChunks() const;
        void SwapVertexDataBuffer(eastl::vector<TerrainPatchVertex>& terrainPatchVertexs);
        void SwapVertexDataBufferPos(eastl::vector<TerrainPatchVertexPos>& terrainPatchVertexPoss);
        int GetGridResolution() const;
        void InterpolateCentreVertex(TerrainVertex& terrainVertex, const GridTile& gridTile, int arg3, int arg4,
                                     float arg5, float arg6, const TerrainBaseData& terrainBaseData) const;
        void GetSharedVertex(TerrainVertex& terrainVertex, int arg2, int arg3,
                             const TerrainBaseData& terrainBaseData) const;
        TerrainPatch(int arg1, const shared_ptr<eastl::map<int, TerrainTextureMeta>>& arg2,
                     const shared_ptr<eastl::vector<eastl::vector<GridGroup>>>& gridGroupss, int arg4, int arg5);
        void ConstructFromTileData();
        TerrainPatch(int arg1, const math::AABB& aabb, eastl::vector<TerrainPatchVertex>& terrainPatchVertexs,
                     eastl::vector<TerrainPatchVertexPos>& terrainPatchVertexPoss, int arg5, int arg6, int arg7,
                     const shared_ptr<TextureAtlasReference>& textureAtlasReference,
                     eastl::fixed_hash_map<int, RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>,
                                           false>& fixed_hash_map,
                     const math::Matrix44T<float>* matrix44, const float* arg11);
        void CheckShadowCaster();
        void DestroyRenderingResources();
        void CreateRenderingResources();
        int GetVertexDataSize() const;
        uint64_t GetGridGroup(int arg1, int arg2);
        uint64_t GetGridGroup(int arg1, int arg2) const;
        bool AddTile(GridTile& gridTile1, GridTile* gridTile2, GridTile* gridTile3, int arg4, int arg5);
        int GetFaceCount() const;
        int GetViewportMapID() const;
        void ExpandSource(TerrainBaseData& terrainBaseData);
        void AddTriangle(const TerrainVertex* terrainVertex, int arg2);
        uint64_t GetVertexNormal(int arg1, int arg2) const;
        uint64_t GetCentreVertexNormal(int arg1, int arg2, float arg3, float arg4) const;
        void AddVertex(const TerrainVertex& terrainVertex, const PatchFaceData& patchFaceData,
                       const std::array<unsigned char, 3ul>& arg3);
        void AddVertexPos(const TerrainVertex& terrainVertex, const int* arg2);
        void GatherDrawableElements(DrawableQueue& drawableQueue, RT7Core& rt7Core, const SceneViewData& sceneViewData,
                                    const EffectManager& effectManager,
                                    const eastl::fixed_vector<unsigned char, 256ul>& arg5);
        bool IsReadyToRender() const;
        void UpdateForwardPassEffect(DrawableSortKey& drawableSortKey, DrawableSortKeyType drawableSortKeyType,
                                     RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                     const EffectManager& effectManager, float arg6, float arg7, bool arg8,
                                     const math::OBB& obb);
        void UpdateReflectionPassEffect(DrawableSortKey& drawableSortKey, DrawableSortKeyType drawableSortKeyType,
                                        RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                        const EffectManager& effectManager, float arg6, float arg7, bool arg8);
        void UpdateSimpleGeometryPassEffect(DrawableSortKey& drawableSortKey, DrawableSortKeyType drawableSortKeyType,
                                            RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                            const EffectManager& effectManager, float arg6, float arg7,
                                            RenderPassType renderPassType);
        void UpdateShadowPassEffect(DrawableSortKey& drawableSortKey, DrawableSortKeyType drawableSortKeyType,
                                    RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                    const EffectManager& effectManager, float arg6, float arg7);
        void UpdateMiniMapPassEffect(DrawableSortKey& drawableSortKey, DrawableSortKeyType drawableSortKeyType,
                                     RenderPassEffect& renderPassEffect, RT7Core& rt7Core,
                                     const EffectManager& effectManager, float arg6, float arg7);
        void GetWorldTransform() const;
        float GetFade() const;
        static bool m_showPatches;                              // = 1
        static bool m_groundPatchShadowCasterCulling;           // = 1
        static float m_groundPatchShadowCasterCullingThreshold; // = 1850.0f
        static bool m_enablePatchShadows;                       // = 1
        static int32_t m_showWorldAABB;

    private:
        uint8_t _unknown_9056[4032];
        int m_faceCount;
        uint8_t _unknown_13092[4];
        Matrix44T<float>* field_13096;
        float* field_13104;
        uint8_t _unknown_13112[136];
        shared_ptr field_13248;
        uint8_t _unknown_13264[616];
    };

    // 0x1003fb1f0
    uint8_t* TerrainPatch::GetIrradianceEffect() {
        return &field_13120;
    }

    // 0x1003fdad0
    uint8_t* TerrainPatch::GetVertexDataBuffer() const {
        return &field_13264;
    }

    // 0x1003fdb60
    uint8_t* TerrainPatch::GetRenderChunks() const {
        return &field_632;
    }

    // 0x10062a330
    void TerrainPatch::SwapVertexDataBuffer(eastl::vector<TerrainPatchVertex>& terrainPatchVertexs) {
        field_13264.swap(terrainPatchVertexs);
    }

    // 0x10062a350
    void TerrainPatch::SwapVertexDataBufferPos(eastl::vector<TerrainPatchVertexPos>& terrainPatchVertexPoss) {
        field_13296.swap(terrainPatchVertexPoss);
    }

    // 0x10062a370
    int TerrainPatch::GetGridResolution() const {
        return m_gridResolution;
    }

    // 0x1007b5650
    int TerrainPatch::GetVertexDataSize() const {
        int iVar1 = field_13328.GetAliveCount();
        return field_13408.GetAliveCount() + iVar1;
    }

    // 0x1007b5c80
    int TerrainPatch::GetFaceCount() const {
        return m_faceCount;
    }

    // 0x1007b8940
    void TerrainPatch::GetWorldTransform() const {
        long in_RSI;

        uint64_t* puVar8 = *(uint64_t**)(in_RSI + 13096);
        if (*(uint64_t**)(in_RSI + 13096) == nullptr) {
            puVar8 = (uint64_t*)PTR_IDENTITY_100ee6730;
        }
        TerrainPatch_vtbl* pTVar1 = (TerrainPatch_vtbl*)*puVar8;
        uint64_t uVar2 = puVar8[1];
        uint64_t uVar3 = puVar8[2];
        uint64_t uVar4 = puVar8[3];
        uint64_t uVar5 = puVar8[4];
        uint64_t uVar6 = puVar8[5];
        uint64_t uVar7 = puVar8[7];
        *(uint64_t*)m_material = puVar8[6];
        *(uint64_t*)(m_material + 8) = uVar7;
        field_32 = uVar5;
        field_40 = uVar6;
        m_aABB = uVar3;
        field_24 = uVar4;
        this->_vptr = pTVar1;
        *(uint64_t*)&field_8 = uVar2;
    }

    // 0x1007bc110
    void TerrainPatch::GatherDrawableElements(DrawableQueue& drawableQueue, RT7Core& rt7Core,
                                              const SceneViewData& sceneViewData, const EffectManager& effectManager) {

        fixed_vector<unsigned char, 256ul> local_160;
        GatherDrawableElements(drawableQueue, rt7Core, sceneViewData, effectManager, local_160);
    }

    // 0x1007c5740
    void TerrainPatch::TerrainPatch(
        int, math::AABB const&, eastl::vector<TerrainPatchVertex>&, eastl::vector<TerrainPatchVertexPos>&, int, int,
        int, shared_ptr<TextureAtlasReference> const&,
        eastl::fixed_hash_map<int, RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>, false>&,
        math::Matrix44T<float> const*, float const*)::$_8::operator()(render::RenderContext& renderContext) const {
        (*(TerrainPatch**)this)->CreateRenderingResources();
    }

    // 0x1007c5f90
    float TerrainPatch::GetFade() const {
        if (field_13104 == nullptr) {
            return 0.0;
        }
        return *field_13104;
    }

} // namespace jag::graphics

namespace jag::oldscape::rseven {
    // 0x1001c62d0
    void MapRebuildHandler_LogicThread::CollectGroundData(const dash3d::Square* square, int arg2,
                                                          const dash3d::world& world, int arg4, int arg5, int arg6,
                                                          int arg7, int arg8, eastl::hash_set<int>& hash_set,
                                                          BuildTerrainResultLevel& buildTerrainResultLevel, int arg11,
                                                          int arg12) {
        uint8_t* this_00;
        array<int, _65536ul>* this_01;
        MapRebuildHandler_LogicThread* pMVar1;
        Ground* pGVar2;
        bool cVar5;
        uint32_t uVar7;
        unsigned int uVar8;
        uint32_t* puVar10;
        uint32_t* puVar11;
        array<int, _3ul>* arg1;
        long lVar12;
        Vector3T<int>* vector31;
        uint64_t* puVar13;
        int* piVar14;
        array<TerrainVertex, 3ul>* paVar15;
        TerrainVertex* pTVar16;
        TerrainVertex* pTVar17;
        TerrainVertex* pTVar18;
        unsigned int extraout_EDX;
        unsigned int extraout_EDX_00;
        unsigned int extraout_EDX_01;
        unsigned int extraout_EDX_02;
        unsigned int extraout_EDX_03;
        uint32_t in_register_00000014;
        unsigned long arg1_00;
        unsigned long uVar21;
        vector<int>* pvVar23;
        array<int, 3ul>* paVar24;
        int local_188[28];
        LocationData local_118;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>* local_100;
        LocationData local_f0;
        uint32_t local_d0;
        uint32_t local_cc;
        uint32_t local_c8;
        vector<int>* local_b0;
        vector<int>* local_a8;
        TerrainVertex* local_a0;
        uint32_t local_90;
        uint32_t local_8c;
        uint32_t local_88;
        vector<int>* local_80;
        vector<int>* local_40;
        vector<int>* local_38;

        world* local_70 = (world*)(((uint64_t)in_register_00000014 << 32) | (uint32_t)arg2);
        local_40 = (vector<int>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)arg5);
        auto local_108 = dash3d::Pix3D::GetColourTable();
        hash_set<int>* local_98 = hash_set;
        local_188[0] = 0;
        long local_f8 = (*((hash_set + 64)))[*local_188];
        int local_64 = field_44;
        bool bVar4 = *field_48 != nullptr;
        local_80 = (vector<int>*)(((uint64_t)local_80._1_7_ << 8) | (uint8_t)bVar4);
        if ((!bVar4) && (bVar4 = *field_64 != nullptr, !bVar4)) {
            return;
        }
        local_98 = local_98 + 12560;
        MapRebuildHandler_LogicThread* local_c0 = this;
        shared_ptr<dash3d::QuickGround>* local_b8 = (shared_ptr<dash3d::QuickGround>*)field_48;
        new (local_188) std::array<TerrainVertex, 4ul>();
        TerrainVertex* pTVar9 = (TerrainVertex*)(*local_188)[0];
        int iVar19 = local_64;
        world* pwVar3 = local_70;
        pTVar9->field_0 = (int)square;
        local_38 = (vector<int>*)(((uint64_t)local_38._4_4_ << 32) | (uint32_t)((int)square));
        int iVar22 = (int)world;
        int iVar6 = local_70->GetGroundHeight(local_64, iVar22, arg4);
        pTVar9->field_4 = -iVar6;
        pTVar9->field_8 = local_40._0_4_;
        Ground* local_78 = (Ground*)((unsigned long)world & 4294967295);
        TerrainVertex* local_50 = pTVar9;
        CalculatePointNormal((array<int, _3ul>*)&pTVar9->field_12, iVar19, iVar22, arg4, pwVar3);
        pTVar9 = (TerrainVertex*)(*local_188)[1];
        pwVar3 = local_70;
        pTVar9->field_0 = arg6;
        iVar22 = iVar22 + 1;
        iVar6 = local_70->GetGroundHeight(iVar19, iVar22, arg4);
        pTVar9->field_4 = -iVar6;
        pTVar9->field_8 = local_40._0_4_;
        TerrainVertex* local_48 = pTVar9;
        CalculatePointNormal((array<int, _3ul>*)&pTVar9->field_12, iVar19, iVar22, arg4, pwVar3);
        pTVar9 = (TerrainVertex*)(*local_188)[2];
        pTVar9->field_0 = arg6;
        int iVar20 = arg4 + 1;
        iVar6 = pwVar3->GetGroundHeight(iVar19, iVar22, iVar20);
        pTVar9->field_4 = -iVar6;
        pTVar9->field_8 = arg7;
        TerrainVertex* local_58 = pTVar9;
        CalculatePointNormal((array<int, _3ul>*)&pTVar9->field_12, iVar19, iVar22, iVar20, pwVar3);
        pTVar9 = (TerrainVertex*)(*local_188)[3];
        pTVar9->field_0 = local_38._0_4_;
        iVar22 = (int)local_78;
        iVar6 = pwVar3->GetGroundHeight(iVar19, iVar22, iVar20);
        pTVar9->field_4 = -iVar6;
        pTVar9->field_8 = arg7;
        TerrainVertex* local_60 = pTVar9;
        CalculatePointNormal((array<int, _3ul>*)&pTVar9->field_12, iVar19, iVar22, iVar20, pwVar3);
        if ((char)local_80 == '\0') {
            local_78 = (Ground*)**local_c0->field_64;
            this_00 = &local_78->field_304;
            puVar10 = (uint32_t*)this_00->HeapBeginPtr();
            local_100 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true>>*)this_00;
            puVar11 = (uint32_t*)this_00->end();
            if (puVar10 != puVar11) {
                do {
                    local_90 = *puVar10;
                    eastl::hashtable<int, int, eastl::allocator, eastl::use_self<int>, eastl::equal_to<int>,
                                     eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                     eastl::prime_rehash_policy, false, false, true>::insert(local_f0);
                    puVar10 = puVar10 + 1;
                } while (puVar10 != puVar11);
            }
            pGVar2 = local_78;
            local_b8 = (shared_ptr<dash3d::QuickGround>*)&local_78->field_208;
            local_a0 = (TerrainVertex*)local_b8->size();
            local_40 = (vector<int>*)&pGVar2->field_8;
            uVar8 = local_40->size();
            local_f0 = eastl::vector<std::array<int, 3ul>>((long)(int)uVar8, local_90);
            local_f0.resize((long)(int)uVar8);
            local_80 = (vector<int>*)&pGVar2->field_72;
            if (0 < (int)uVar8) {
                local_b0 = (vector<int>*)(unsigned long)uVar8;
                pvVar23 = nullptr;
                pTVar9 = local_50;
                pTVar17 = local_48;
                do {
                    piVar14 = (int*)(*local_40)[(unsigned long)pvVar23];
                    iVar19 = *piVar14 + (int)buildTerrainResultLevel;
                    local_38 = pvVar23;
                    piVar14 = (int*)(*local_80)[(unsigned long)pvVar23];
                    pTVar16 = local_60;
                    iVar6 = *piVar14 + arg11;
                    pTVar18 = pTVar9;
                    if (iVar19 == pTVar9->field_0) {
                        arg1 = &local_f0[(unsigned long)local_38];
                        bVar4 = true;
                        iVar19 = iVar6;
                    LAB_1001c66c0:
                    LAB_1001c6730:
                        InterpolateNormal(arg1, bVar4, iVar19, pTVar18, pTVar16);
                        pvVar23 = local_38;
                    } else {
                        if (iVar19 == pTVar17->field_0) {
                            arg1 = &local_f0[(unsigned long)local_38];
                            bVar4 = true;
                            pTVar18 = pTVar17;
                            pTVar16 = local_58;
                            iVar19 = iVar6;
                            goto LAB_1001c6730;
                        }
                        if (iVar6 == pTVar9->field_8) {
                            arg1 = &local_f0[(unsigned long)local_38];
                            bVar4 = false;
                            pTVar16 = pTVar17;
                            goto LAB_1001c6730;
                        }
                        if (iVar6 == local_58->field_8) {
                            arg1 = &local_f0[(unsigned long)local_38];
                            bVar4 = false;
                            pTVar18 = local_58;
                            goto LAB_1001c66c0;
                        }
                        uVar21 = 0;
                        iVar20 = 0;
                        iVar19 = 0;
                        iVar6 = 0;
                        do {
                            lVar12 = (*local_188)[uVar21];
                            paVar24 = (array<int, 3ul>*)(lVar12 + 12);
                            piVar14 = (int*)(*paVar24)[0];
                            iVar20 = iVar20 + *piVar14;
                            piVar14 = (int*)(*paVar24)[1];
                            iVar19 = iVar19 + *piVar14;
                            piVar14 = (int*)(*paVar24)[2];
                            iVar6 = iVar6 + *piVar14;
                            uVar21 = uVar21 + 1;
                        } while (uVar21 != 4);
                        local_a8 = (vector<int>*)sqrt<int>(iVar6 * iVar6 + iVar19 * iVar19 + iVar20 * iVar20);
                        paVar24 = &local_f0[(unsigned long)local_38];
                        iVar22 = (int)(double)local_a8;
                        piVar14 = (int*)(*paVar24)[0];
                        pvVar23 = local_38;
                        *piVar14 = (iVar20 * 256) / iVar22;
                        paVar24 = &local_f0[(unsigned long)local_38];
                        piVar14 = (int*)(*paVar24)[1];
                        *piVar14 = (iVar19 * 256) / iVar22;
                        paVar24 = &local_f0[(unsigned long)pvVar23];
                        piVar14 = (int*)(*paVar24)[2];
                        *piVar14 = (iVar6 * 256) / iVar22;
                        pTVar9 = local_50;
                        pTVar17 = local_48;
                    }
                    pvVar23 = pvVar23 + 1;
                } while (pvVar23 != local_b0);
            }
            if (0 < (int)local_a0) {
                local_b0 = (vector<int>*)&local_78->field_272;
                local_58 = (TerrainVertex*)&local_78->field_240;
                local_50 = (TerrainVertex*)&local_78->field_104;
                local_48 = (TerrainVertex*)&local_78->field_168;
                local_a8 = (vector<int>*)&local_78->field_136;
                local_38 = (vector<int>*)&local_78->field_40;
                local_a0 = (TerrainVertex*)((unsigned long)local_a0 & 4294967295);
                pTVar9 = nullptr;
                do {
                    puVar10 = (uint32_t*)(*local_b8)[(unsigned long)pTVar9];
                    local_90 = *puVar10;
                    puVar10 = (uint32_t*)(*local_b0)[(unsigned long)pTVar9];
                    local_8c = *puVar10;
                    puVar10 = (uint32_t*)(*local_58)[(unsigned long)pTVar9];
                    local_88 = *puVar10;
                    puVar10 = (uint32_t*)(*local_50)[(unsigned long)pTVar9];
                    local_d0 = *puVar10;
                    puVar10 = (uint32_t*)(*local_48)[(unsigned long)pTVar9];
                    local_cc = *puVar10;
                    puVar10 = (uint32_t*)(*local_a8)[(unsigned long)pTVar9];
                    local_c8 = *puVar10;
                    local_60 = pTVar9;
                    piVar14 = &local_d0[0];
                    if (*piVar14 != 12345678) {
                        paVar15 = (array<TerrainVertex, 3ul>*)local_98->push_back();
                        pTVar9 = local_60;
                        cVar5 = local_100->empty();
                        uVar7 = 4294967295;
                        if (!cVar5) {
                            puVar10 = (uint32_t*)(*local_100)[(unsigned long)pTVar9];
                            uVar7 = *puVar10;
                        }
                        *(uint32_t*)(paVar15 + 84) = uVar7;
                        uVar21 = 0;
                        do {
                            piVar14 = &local_90[uVar21];
                            arg1_00 = (unsigned long)*piVar14;
                            vector31 = (Vector3T<int>*)(*paVar15)[uVar21];
                            piVar14 = (int*)(*local_40)[arg1_00];
                            *(int*)vector31 = *piVar14 + (int)buildTerrainResultLevel;
                            piVar14 = (int*)(*local_38)[arg1_00];
                            *(int*)(vector31 + 4) = -*piVar14;
                            piVar14 = (int*)(*local_80)[arg1_00];
                            *(int*)(vector31 + 8) = *piVar14 + arg11;
                            if (*(int*)(paVar15 + 84) == -1) {
                                cVar5 = IsGroundBlendable(local_78, (int)local_60);
                                if (!cVar5) {
                                    piVar14 = (int*)local_d0[uVar21];
                                    piVar14 = (int*)(*local_108)[(long)*piVar14];
                                    uVar8 = *piVar14 << 8 | 255;
                                    goto LAB_1001c6af6;
                                }
                                uVar8 = *(unsigned int*)&local_c0->field_32;
                                local_118 = rs2lib::worldmap::LocationData((int)buildTerrainResultLevel, 0, arg11);
                                iVar19 = *vector31 - local_118;
                                uVar7 = GetPackedInterpolatedGroundColour(
                                    (MapRebuildHandler_LogicThread*)local_70, (world*)(unsigned long)uVar8, local_64,
                                    iVar19, (Vector3T<int>*)(unsigned long)extraout_EDX);
                                *(uint32_t*)(vector31 + 24) = uVar7;
                            } else {
                                piVar14 = &local_d0[uVar21];
                                uVar8 = RGBAFromLightness(*piVar14);
                            LAB_1001c6af6:
                                *(unsigned int*)(vector31 + 24) = uVar8;
                            }
                            puVar13 = &local_f0[arg1_00];
                            *(uint32_t*)(vector31 + 20) = *(uint32_t*)(puVar13 + 1);
                            *(uint64_t*)(vector31 + 12) = *puVar13;
                            uVar21 = uVar21 + 1;
                        } while (uVar21 != 3);
                    }
                    pTVar9 = (TerrainVertex*)((long)&local_60->field_0 + 1);
                } while (pTVar9 != local_a0);
            }
            *(int*)(local_f8 + 4) = *(int*)(local_f8 + 4) + 1;
            return;
        }
        QuickGround* quickGround = (QuickGround*)**local_b8;
        iVar19 = quickGround->field_4;
        if ((long)iVar19 == 12345678) {
            return;
        }
        if (quickGround->field_20 == -1) {
            cVar5 = IsQuickGroundBlendable(quickGround);
            this_01 = local_108;
            if (cVar5) {
                local_f0 = rs2lib::worldmap::LocationData((int)buildTerrainResultLevel, 0, arg11);
                pTVar9 = local_50;
                pMVar1 = local_c0;
                uVar8 = *(unsigned int*)&local_c0->field_32;
                iVar6 = *local_50 - local_f0;
                iVar19 = local_64;
                pwVar3 = local_70;
                uVar7 = GetPackedInterpolatedGroundColour((MapRebuildHandler_LogicThread*)local_70,
                                                          (world*)(unsigned long)uVar8, local_64, iVar6,
                                                          (Vector3T<int>*)(unsigned long)extraout_EDX_00);
                pTVar17 = local_48;
                pTVar9->field_24 = uVar7;
                local_40 = (vector<int>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(*(uint32_t*)&pMVar1->field_32));
                iVar6 = *local_48 - local_f0;
                uVar7 = GetPackedInterpolatedGroundColour((MapRebuildHandler_LogicThread*)pwVar3,
                                                          (world*)((unsigned long)local_40 & 4294967295), iVar19, iVar6,
                                                          (Vector3T<int>*)(unsigned long)extraout_EDX_01);
                pTVar9 = local_58;
                pTVar17->field_24 = uVar7;
                local_40 = (vector<int>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(*(uint32_t*)&pMVar1->field_32));
                iVar6 = *local_58 - local_f0;
                pwVar3 = local_70;
                uVar7 = GetPackedInterpolatedGroundColour((MapRebuildHandler_LogicThread*)local_70,
                                                          (world*)((unsigned long)local_40 & 4294967295), iVar19, iVar6,
                                                          (Vector3T<int>*)(unsigned long)extraout_EDX_02);
                pTVar17 = local_60;
                pTVar9->field_24 = uVar7;
                local_40 = (vector<int>*)(((uint64_t)local_40._4_4_ << 32) | (uint32_t)(*(uint32_t*)&pMVar1->field_32));
                iVar6 = *local_60 - local_f0;
                uVar8 = GetPackedInterpolatedGroundColour((MapRebuildHandler_LogicThread*)pwVar3,
                                                          (world*)((unsigned long)local_40 & 4294967295), iVar19, iVar6,
                                                          (Vector3T<int>*)(unsigned long)extraout_EDX_03);
                goto LAB_1001c6cb7;
            }
            piVar14 = (int*)(*local_108)[(long)iVar19];
            local_50->field_24 = *piVar14 << 8 | 255;
            piVar14 = (int*)(*this_01)[(long)quickGround->field_8];
            local_48->field_24 = *piVar14 << 8 | 255;
            piVar14 = (int*)(*this_01)[(long)quickGround->field_12];
            pTVar9 = local_58;
            local_58->field_24 = *piVar14 << 8 | 255;
            piVar14 = (int*)(*this_01)[(long)quickGround->field_16];
            uVar8 = *piVar14 << 8 | 255;
        } else {
            uVar7 = RGBAFromLightness(iVar19);
            local_50->field_24 = uVar7;
            uVar7 = RGBAFromLightness(quickGround->field_8);
            local_48->field_24 = uVar7;
            uVar7 = RGBAFromLightness(quickGround->field_12);
            pTVar9 = local_58;
            local_58->field_24 = uVar7;
            uVar8 = RGBAFromLightness(quickGround->field_16);
        }
        pTVar17 = local_60;
    LAB_1001c6cb7:
        pTVar17->field_24 = uVar8;
        eastl::hashtable<int, int, eastl::allocator, eastl::use_self<int>, eastl::equal_to<int>, eastl::hash<int>,
                         eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, false,
                         true>::insert(local_f0);
        hash_set<int>* this_02 = local_98;
        *(int*)(local_f8 + 4) = *(int*)(local_f8 + 4) + 1;
        paVar15 = (array<TerrainVertex, 3ul>*)local_98->push_back();
        pTVar16 = (TerrainVertex*)(*paVar15)[0];
        *pTVar16 = *pTVar9;
        pTVar16 = (TerrainVertex*)(*paVar15)[1];
        pTVar9 = local_48;
        *pTVar16 = *local_48;
        pTVar16 = (TerrainVertex*)(*paVar15)[2];
        *pTVar16 = *pTVar17;
        *(int*)(paVar15 + 84) = quickGround->field_20;
        paVar15 = (array<TerrainVertex, 3ul>*)this_02->push_back();
        pTVar16 = (TerrainVertex*)(*paVar15)[0];
        *pTVar16 = *local_50;
        pTVar16 = (TerrainVertex*)(*paVar15)[1];
        *pTVar16 = *pTVar17;
        pTVar17 = (TerrainVertex*)(*paVar15)[2];
        *pTVar17 = *pTVar9;
        *(int*)(paVar15 + 84) = quickGround->field_20;
    }

    // 0x1001c7070
    void MapRebuildHandler_LogicThread::RGBAFromLightness(int arg1) {
        uint8_t local_18[8];

        unsigned int arg1_00 = arg1 * 2 & 255;
        new (local_18) jag::math::ColourStorage8888(arg1_00, arg1_00, arg1_00, 255);
        local_18->GetX();
    }

    // 0x1001c70b0
    bool MapRebuildHandler_LogicThread::IsQuickGroundBlendable(const dash3d::QuickGround& quickGround) {
        bool bVar1 = false;
        if ((m_blendTerrain != '\0') && (quickGround.field_25 == false)) {
            bVar1 = quickGround.field_20 == -1;
        }
        return bVar1;
    }

    // 0x1001c70d0
    void MapRebuildHandler_LogicThread::GetPackedInterpolatedGroundColour(const dash3d::world& world, int arg2,
                                                                          int arg3, jag::math::Vector3T<int> vector3) {
        uint64_t local_18[2];

        local_18[0] = GetInterpolatedGroundColour(world, arg2, arg3, vector3);
        jag::math::R8G8B8A8FromColour4(*local_18);
    }

} // namespace jag::oldscape::rseven

namespace jag::math {
    // 0x1001c7100
    Vector3T<int> operator- <int>(const Vector3T<int>& vector31, const Vector3T<int>& vector32) {
        uint8_t auVar1[16];

        LocationData local_18(*(int*)vector31 - *(int*)vector32, *(int*)(vector31 + 4) - *(int*)(vector32 + 4),
                              *(int*)(vector31 + 8) - *(int*)(vector32 + 8));
        auVar1._12_4_ = 0;
        auVar1._0_4_ = local_18.field_0;
        auVar1._4_4_ = local_18.field_4;
        auVar1._8_4_ = local_18.field_8;
        return auVar1;
    }

} // namespace jag::math
