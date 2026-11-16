// libs/graphics/runetek7/terrain/TerrainPatch.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.osrendercore

namespace jag::graphics {
    class GridGroup {
    public:
        GetGridTileWater();
        GridGroup();
        GridGroup* GetGridTile();
        GridGroup* GetGridTile() const;
        GetGridTileOverlay();
        GetGridTileOverlay() const;
        GetGridTileUnderlay();
        GetGridTileUnderlay() const;

        // data members, from how the methods use this: 281 bytes
        char _unknown_0[40];
        undefined1 field_40; // offset 40
        char _unknown_41[79];
        undefined1 field_120; // offset 120
        char _unknown_121[79];
        undefined1 field_200; // offset 200
        char _unknown_201[79];
        undefined1 field_280; // offset 280
    };

    class PatchFaceData {
    public:
        PatchFaceData(TerrainVertex const*);

        // data members, from how the methods use this: 26 bytes
        short field_0; // offset 0
        short field_2; // offset 2
        short field_4; // offset 4
        char _unknown_6[3];
        undefined1 field_9;  // offset 9
        undefined1 field_10; // offset 10
        undefined1 field_11; // offset 11
        undefined1 field_12; // offset 12
        undefined1 field_13; // offset 13
        undefined1 field_14; // offset 14
        char _unknown_15[11];
    };

    class TerrainPatch : public DebugPrimitiveRendererBasic // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~TerrainPatch();
        virtual void GatherDrawableElements(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&);
        virtual void RenderDebug(RenderPassType, DrawableElement&) const;
        GetAABB() const;
        int GetGridSize() const;
        GetMaterial() const;
        GetIrradianceEffect();
        GetVertexDataBuffer() const;
        GetRenderChunks() const;
        void SwapVertexDataBuffer(eastl::vector<TerrainPatchVertex, eastl::allocator>&);
        void SwapVertexDataBufferPos(eastl::vector<TerrainPatchVertexPos, eastl::allocator>&);
        int GetGridResolution() const;
        void InterpolateCentreVertex(TerrainVertex&, GridTile const&, int, int, float, float,
                                     TerrainBaseData const&) const;
        void GetSharedVertex(TerrainVertex&, int, int, TerrainBaseData const&) const;
        TerrainPatch(int, shared_ptr<eastl::map<int, TerrainTextureMeta, eastl::less<int>, eastl::allocator>> const&,
                     shared_ptr<eastl::vector<eastl::vector<GridGroup, eastl::allocator>, eastl::allocator>> const&,
                     int, int);
        void ConstructFromTileData();
        TerrainPatch(int, math::AABB const&, eastl::vector<TerrainPatchVertex, eastl::allocator>&,
                     eastl::vector<TerrainPatchVertexPos, eastl::allocator>&, int, int, int,
                     shared_ptr<TextureAtlasReference> const&,
                     eastl::fixed_hash_map<int, RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>,
                                           false, eastl::allocator>&,
                     math::Matrix44T<float> const*, float const*);
        void CheckShadowCaster();
        void DestroyRenderingResources();
        void CreateRenderingResources();
        int GetVertexDataSize() const;
        GetGridGroup(int, int);
        GetGridGroup(int, int) const;
        bool AddTile(GridTile&, GridTile*, GridTile*, int, int);
        int GetFaceCount() const;
        int GetViewportMapID() const;
        void ExpandSource(TerrainBaseData&);
        void AddTriangle(TerrainVertex const*, int);
        GetVertexNormal(int, int) const;
        GetCentreVertexNormal(int, int, float, float) const;
        void AddVertex(TerrainVertex const&, PatchFaceData const&, std::array<unsigned char, 3ul> const&);
        void AddVertexPos(TerrainVertex const&, int const*);
        void GatherDrawableElements(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&,
                                    eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator> const&);
        IsReadyToRender() const;
        void UpdateForwardPassEffect(DrawableSortKey&, DrawableSortKeyType, RenderPassEffect&, RT7Core&,
                                     EffectManager const&, float, float, bool, math::OBB const&);
        void UpdateReflectionPassEffect(DrawableSortKey&, DrawableSortKeyType, RenderPassEffect&, RT7Core&,
                                        EffectManager const&, float, float, bool);
        void UpdateSimpleGeometryPassEffect(DrawableSortKey&, DrawableSortKeyType, RenderPassEffect&, RT7Core&,
                                            EffectManager const&, float, float, RenderPassType);
        void UpdateShadowPassEffect(DrawableSortKey&, DrawableSortKeyType, RenderPassEffect&, RT7Core&,
                                    EffectManager const&, float, float);
        void UpdateMiniMapPassEffect(DrawableSortKey&, DrawableSortKeyType, RenderPassEffect&, RT7Core&,
                                     EffectManager const&, float, float);
        void GetWorldTransform() const;
        float GetFade() const;
        static /* 1 bytes */ m_showPatches;                                   // = 1
        static /* 1 bytes */ m_groundPatchShadowCasterCulling;                // = 1
        static float /* 4 bytes */ m_groundPatchShadowCasterCullingThreshold; // = 1850.0f
        static /* 1 bytes */ m_enablePatchShadows;                            // = 1
        static /* 4 bytes */ m_showWorldAABB;

        // data members, from how the methods use this: 13880 bytes, the first 9056 are DebugPrimitiveRendererBasic
        char _unknown_9056[4032];
        int m_faceCount; // offset 13088
        char _unknown_13092[4];
        Matrix44T* field_13096; // offset 13096
        float* field_13104;     // offset 13104
        char _unknown_13112[136];
        shared_ptr field_13248; // offset 13248
        char _unknown_13264[616];
    };

    // 0x1001c6250, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // RenderChunk::RenderChunk(): jumps straight to the base-object constructor

    // 0x1003fb1f0, 16 bytes, inline, placed by class name
    // TerrainPatch::GetIrradianceEffect()
    undefined1* TerrainPatch::GetIrradianceEffect() {
        return &field_13120;
    }

    // 0x1003fdad0, 16 bytes, inline, placed by class name
    // TerrainPatch::GetVertexDataBuffer() const
    undefined1* TerrainPatch::GetVertexDataBuffer() {
        return &field_13264;
    }

    // 0x1003fdb60, 16 bytes, inline, placed by class name
    // TerrainPatch::GetRenderChunks() const
    undefined1* TerrainPatch::GetRenderChunks() {
        return &field_632;
    }

    // 0x10062a330, 32 bytes, inline, placed by class name
    // TerrainPatch::SwapVertexDataBuffer(eastl::vector<TerrainPatchVertex, eastl::allocator>&)
    void TerrainPatch::SwapVertexDataBuffer(vector* param_1) {
        (&field_13264, param_1)->swap();
    }

    // 0x10062a350, 32 bytes, inline, placed by class name
    // TerrainPatch::SwapVertexDataBufferPos(eastl::vector<TerrainPatchVertexPos, eastl::allocator>&)
    void TerrainPatch::SwapVertexDataBufferPos(vector* param_1) {
        (&field_13296, param_1)->swap();
    }

    // 0x10062a370, 16 bytes, inline, placed by class name
    // TerrainPatch::GetGridResolution() const
    int TerrainPatch::GetGridResolution() {
        return m_gridResolution;
    }

    // 0x1007b5650, 48 bytes, inline, placed by class name
    // TerrainPatch::GetVertexDataSize() const
    int TerrainPatch::GetVertexDataSize() {
        int iVar1;

        iVar1 = (&field_13328)->GetAliveCount();
        return (&field_13408)->GetAliveCount() + iVar1;
    }

    // 0x1007b5c80, 16 bytes, inline, placed by class name
    // TerrainPatch::GetFaceCount() const
    int TerrainPatch::GetFaceCount() {
        return m_faceCount;
    }

    // 0x1007b8940, 64 bytes, inline, placed by class name
    // TerrainPatch::GetWorldTransform() const
    void TerrainPatch::GetWorldTransform() {
        undefined** ppuVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        undefined8* puVar8;
        long in_RSI;

        puVar8 = *(undefined8**)(in_RSI + 13096);
        if (*(undefined8**)(in_RSI + 13096) == (undefined8*)0) {
            puVar8 = (undefined8*)PTR_IDENTITY_100ee6730;
        }
        ppuVar1 = (undefined**)*puVar8;
        uVar2 = puVar8[1];
        uVar3 = puVar8[2];
        uVar4 = puVar8[3];
        uVar5 = puVar8[4];
        uVar6 = puVar8[5];
        uVar7 = puVar8[7];
        field_48 = puVar8[6];
        field_56 = uVar7;
        field_32 = uVar5;
        field_40 = uVar6;
        field_16 = uVar3;
        field_24 = uVar4;
        field_0 = ppuVar1;
        *(undefined8*)&field_8 = uVar2;
    }

    // 0x1007bc110, 176 bytes, inline, placed by class name
    // TerrainPatch::GatherDrawableElements(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&)
    void TerrainPatch::GatherDrawableElements(DrawableQueue* param_1, RT7Core* param_2, SceneViewData* param_3,
                                              EffectManager* param_4) {
        fixed_vector<unsigned char, 256ul, true, eastl::allocator> local_160[296];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator>::fixed_vector(local_160);
        GatherDrawableElements(this, param_1, param_2, param_3, param_4, (fixed_vector*)local_160);
        eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator>::~fixed_vector(local_160);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007c5740, 16 bytes, inline, placed by class name
    // TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<TerrainPatchVertex, eastl::allocator>&, eastl::vector<TerrainPatchVertexPos, eastl::allocator>&, int, int, int, shared_ptr<TextureAtlasReference> const&, eastl::fixed_hash_map<int, RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>, false, eastl::allocator>&, math::Matrix44T<float> const*, float const*)::$_8::operator()(render::RenderContext&) const
    /* TerrainPatch::TerrainPatch(int, math::AABB const&,
   eastl::vector<TerrainPatchVertex, eastl::allocator>&,
   eastl::vector<TerrainPatchVertexPos, eastl::allocator>&, int, int, int,
   shared_ptr<TextureAtlasReference> const&, eastl::fixed_hash_map<int,
   RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>, false,
   eastl::allocator>&, math::Matrix44T<float> const*, float
   const*)::$_8::TEMPNAMEPLACEHOLDERVALUE(render::RenderContext&) const */

    void TerrainPatch::TerrainPatch(int, math::AABB_const&, eastl::vector<TerrainPatchVertex, eastl::allocator>&,
                                    eastl::vector<TerrainPatchVertexPos, eastl::allocator>&, int, int, int,
                                    shared_ptr<TextureAtlasReference> const&,
                                    eastl::fixed_hash_map<int, RenderChunk, 256ul, 257ul, true, eastl::hash<int>,
                                                          eastl::equal_to<int>, false, eastl::allocator>&,
                                    math::Matrix44T<float> const*,
                                    float const*)::$_8::operator()(RenderContext* param_1) {
        (*(TerrainPatch**)this)->CreateRenderingResources();
    }

    // 0x1007c5f90, 32 bytes, inline, placed by class name
    // TerrainPatch::GetFade() const
    float TerrainPatch::GetFade() {
        if (field_13104 == (float*)0) {
            return 0.0;
        }
        return *field_13104;
    }

} // namespace jag::graphics

namespace jag::oldscape::rseven {
    // 0x1001c62d0, 2816 bytes, placed by debug map only (low confidence)
    // MapRebuildHandler_LogicThread::CollectGroundData(dash3d::Square const*, int, dash3d::world const&, int, int, int, int, int, eastl::hash_set<int, eastl::hash<int>, eastl::equal_to<int>, eastl::allocator, false>&, BuildTerrainResultLevel&, int, int)
    void MapRebuildHandler_LogicThread::CollectGroundData(Square* param_1, int param_2, world* param_3, int param_4,
                                                          int param_5, int param_6, int param_7, int param_8,
                                                          hash_set* param_9, BuildTerrainResultLevel* param_10,
                                                          int param_11, int param_12) {
        undefined1* this;
        array<int, 65536ul>* this_00;
        BuildTerrainResultLevel* this_01;
        Ground* pGVar2;
        world* pwVar3;
        bool bVar4;
        char cVar5;
        int iVar6;
        undefined4 uVar7;
        uint uVar8;
        TerrainVertex* pTVar9;
        QuickGround* pQVar10;
        undefined4* puVar11;
        undefined4* puVar12;
        array* paVar13;
        long lVar14;
        Vector3T* pVVar15;
        undefined8* puVar16;
        int* piVar17;
        array<TerrainVertex, 3ul>* paVar18;
        TerrainVertex* pTVar19;
        TerrainVertex* pTVar20;
        TerrainVertex* pTVar21;
        int iVar22;
        ulong uVar23;
        int iVar24;
        ulong uVar25;
        int iVar26;
        vector<int, eastl::allocator>* pvVar27;
        array<int, 3ul>* paVar28;
        undefined1 auVar29[12];
        int local_188[28];
        LocationData local_118;
        array<int, 65536ul>* local_108;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* local_100;
        long local_f8;
        LocationData local_f0[2];
        undefined4 local_d0;
        undefined4 local_cc;
        undefined4 local_c8;
        shared_ptr<dash3d::QuickGround>* local_b8;
        vector<int, eastl::allocator>* local_b0;
        vector<int, eastl::allocator>* local_a8;
        TerrainVertex* local_a0;
        BuildTerrainResultLevel* local_98;
        undefined4 local_90;
        undefined4 local_8c;
        undefined4 local_88;
        vector<int, eastl::allocator>* local_80;
        Ground* local_78;
        int local_64;
        TerrainVertex* local_60;
        TerrainVertex* local_58;
        TerrainVertex* local_50;
        TerrainVertex* local_48;
        vector<int, eastl::allocator>* local_40;
        vector<int, eastl::allocator>* local_38;

        local_40 = (vector<int, eastl::allocator>*)CONCAT44(local_40._4_4_, param_6);
        local_108 = (array<int, 65536ul>*)dash3d::Pix3D::GetColourTable();
        local_98 = param_10;
        local_188[0] = 0;
        local_f8 =
            eastl::hash_map<int, jag::graphics::RenderChunk, eastl::hash<int>, eastl::equal_to<int>,
                            eastl::fixed_hashtable_allocator<258ul, 40ul, 256ul, 4ul, 0ul, true, eastl::allocator>,
                            false>::
            operator[]((hash_map<int, jag::graphics::RenderChunk, eastl::hash<int>, eastl::equal_to<int>,
                                 eastl::fixed_hashtable_allocator<258ul, 40ul, 256ul, 4ul, 0ul, true, eastl::allocator>,
                                 false>*)&param_10->field_64,
                       local_188);
        local_64 = param_1->field_44;
        bVar4 = operator!=((shared_ptr*)param_1->field_48, (_func_decltype_nullptr*)0);
        local_80 = (vector<int, eastl::allocator>*)CONCAT71(local_80._1_7_, bVar4);
        if ((!bVar4) && (bVar4 = operator!=((shared_ptr*)param_1->field_64, (_func_decltype_nullptr*)0), !bVar4)) {
            return;
        }
        local_98 = (BuildTerrainResultLevel*)(local_98->field_12528 + 32);
        local_b8 = (shared_ptr<dash3d::QuickGround>*)param_1->field_48;
        new (local_188) std::array<TerrainVertex, 4ul>();
        pTVar9 = (TerrainVertex*)std::array<TerrainVertex, 4ul>::operator[]((array<TerrainVertex, 4ul>*)local_188, 0);
        iVar22 = local_64;
        pwVar3 = param_3;
        pTVar9->field_0 = param_2;
        local_38 = (vector<int, eastl::allocator>*)CONCAT44(local_38._4_4_, param_2);
        iVar6 = param_3->GetGroundHeight(local_64, param_4, param_5);
        pTVar9->field_4 = -iVar6;
        pTVar9->field_8 = local_40._0_4_;
        local_78 = (Ground*)(ulong)(uint)param_4;
        local_50 = pTVar9;
        CalculatePointNormal((array*)&pTVar9->field_12, iVar22, param_4, param_5, pwVar3);
        pTVar9 = (TerrainVertex*)std::array<TerrainVertex, 4ul>::operator[]((array<TerrainVertex, 4ul>*)local_188, 1);
        pwVar3 = param_3;
        pTVar9->field_0 = param_7;
        iVar26 = param_4 + 1;
        iVar6 = param_3->GetGroundHeight(iVar22, iVar26, param_5);
        pTVar9->field_4 = -iVar6;
        pTVar9->field_8 = local_40._0_4_;
        local_48 = pTVar9;
        CalculatePointNormal((array*)&pTVar9->field_12, iVar22, iVar26, param_5, pwVar3);
        pTVar9 = (TerrainVertex*)std::array<TerrainVertex, 4ul>::operator[]((array<TerrainVertex, 4ul>*)local_188, 2);
        pTVar9->field_0 = param_7;
        iVar24 = param_5 + 1;
        iVar6 = pwVar3->GetGroundHeight(iVar22, iVar26, iVar24);
        pTVar9->field_4 = -iVar6;
        pTVar9->field_8 = param_8;
        local_58 = pTVar9;
        CalculatePointNormal((array*)&pTVar9->field_12, iVar22, iVar26, iVar24, pwVar3);
        pTVar9 = (TerrainVertex*)std::array<TerrainVertex, 4ul>::operator[]((array<TerrainVertex, 4ul>*)local_188, 3);
        pTVar9->field_0 = local_38._0_4_;
        iVar26 = (int)local_78;
        iVar6 = pwVar3->GetGroundHeight(iVar22, iVar26, iVar24);
        pTVar9->field_4 = -iVar6;
        pTVar9->field_8 = param_8;
        local_60 = pTVar9;
        CalculatePointNormal((array*)&pTVar9->field_12, iVar22, iVar26, iVar24, pwVar3);
        if ((char)local_80 == '\0') {
            local_78 = (Ground*)shared_ptr<dash3d::Ground>::operator*((shared_ptr<dash3d::Ground>*)param_1->field_64);
            this = &local_78->field_304;
            puVar11 = (undefined4*)HeapBeginPtr();
            local_100 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)this;
            puVar12 = (undefined4*)end();
            if (puVar11 != puVar12) {
                do {
                    local_90 = *puVar11;
                    eastl::hashtable<int, int, eastl::allocator, eastl::use_self<int>, eastl::equal_to<int>,
                                     eastl::hash<int>, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                     eastl::prime_rehash_policy, false, false, true>::insert(&local_f0[0].field_0);
                    puVar11 = puVar11 + 1;
                } while (puVar11 != puVar12);
            }
            pGVar2 = local_78;
            local_b8 = (shared_ptr<dash3d::QuickGround>*)&local_78->field_208;
            local_a0 = (TerrainVertex*)local_b8->size();
            local_40 = (vector<int, eastl::allocator>*)&pGVar2->field_8;
            uVar8 = local_40->size();
            new (&local_90) eastl::allocator("EASTL vector");
            new (local_f0)
                eastl::vector<std::array<int, 3ul>, eastl::allocator>((long)(int)uVar8, (allocator*)&local_90);
            local_f0->resize((long)(int)uVar8);
            local_80 = (vector<int, eastl::allocator>*)&pGVar2->field_72;
            if (0 < (int)uVar8) {
                local_b0 = (vector<int, eastl::allocator>*)(ulong)uVar8;
                pvVar27 = (vector<int, eastl::allocator>*)0;
                pTVar9 = local_50;
                pTVar20 = local_48;
                do {
                    piVar17 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_40, (ulong)pvVar27);
                    iVar22 = *piVar17 + param_11;
                    local_38 = pvVar27;
                    piVar17 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_80, (ulong)pvVar27);
                    pTVar19 = local_60;
                    iVar6 = *piVar17 + param_12;
                    pTVar21 = pTVar9;
                    if (iVar22 == pTVar9->field_0) {
                        paVar13 = (array*)eastl::vector<std::array<int, 3ul>, eastl::allocator>::operator[](
                            (vector<std::array<int, 3ul>, eastl::allocator>*)local_f0, (ulong)local_38);
                        bVar4 = true;
                        iVar22 = iVar6;
                    LAB_1001c66c0:
                    LAB_1001c6730:
                        InterpolateNormal(paVar13, bVar4, iVar22, pTVar21, pTVar19);
                        pvVar27 = local_38;
                    } else {
                        if (iVar22 == pTVar20->field_0) {
                            paVar13 = (array*)eastl::vector<std::array<int, 3ul>, eastl::allocator>::operator[](
                                (vector<std::array<int, 3ul>, eastl::allocator>*)local_f0, (ulong)local_38);
                            bVar4 = true;
                            pTVar21 = pTVar20;
                            pTVar19 = local_58;
                            iVar22 = iVar6;
                            goto LAB_1001c6730;
                        }
                        if (iVar6 == pTVar9->field_8) {
                            paVar13 = (array*)eastl::vector<std::array<int, 3ul>, eastl::allocator>::operator[](
                                (vector<std::array<int, 3ul>, eastl::allocator>*)local_f0, (ulong)local_38);
                            bVar4 = false;
                            pTVar19 = pTVar20;
                            goto LAB_1001c6730;
                        }
                        if (iVar6 == local_58->field_8) {
                            paVar13 = (array*)eastl::vector<std::array<int, 3ul>, eastl::allocator>::operator[](
                                (vector<std::array<int, 3ul>, eastl::allocator>*)local_f0, (ulong)local_38);
                            bVar4 = false;
                            pTVar21 = local_58;
                            goto LAB_1001c66c0;
                        }
                        uVar25 = 0;
                        iVar24 = 0;
                        iVar22 = 0;
                        iVar6 = 0;
                        do {
                            lVar14 = std::array<TerrainVertex, 4ul>::operator[]((array<TerrainVertex, 4ul>*)local_188,
                                                                                uVar25);
                            paVar28 = (array<int, 3ul>*)(lVar14 + 12);
                            piVar17 = (int*)std::array<int, 3ul>::operator[](paVar28, 0);
                            iVar24 = iVar24 + *piVar17;
                            piVar17 = (int*)std::array<int, 3ul>::operator[](paVar28, 1);
                            iVar22 = iVar22 + *piVar17;
                            piVar17 = (int*)std::array<int, 3ul>::operator[](paVar28, 2);
                            iVar6 = iVar6 + *piVar17;
                            uVar25 = uVar25 + 1;
                        } while (uVar25 != 4);
                        local_a8 = (vector<int, eastl::allocator>*)sqrt<int>(iVar6 * iVar6 + iVar22 * iVar22 +
                                                                             iVar24 * iVar24);
                        paVar28 = (array<int, 3ul>*)eastl::vector<std::array<int, 3ul>, eastl::allocator>::operator[](
                            (vector<std::array<int, 3ul>, eastl::allocator>*)local_f0, (ulong)local_38);
                        iVar26 = (int)(double)local_a8;
                        piVar17 = (int*)std::array<int, 3ul>::operator[](paVar28, 0);
                        pvVar27 = local_38;
                        *piVar17 = (iVar24 * 256) / iVar26;
                        paVar28 = (array<int, 3ul>*)eastl::vector<std::array<int, 3ul>, eastl::allocator>::operator[](
                            (vector<std::array<int, 3ul>, eastl::allocator>*)local_f0, (ulong)local_38);
                        piVar17 = (int*)std::array<int, 3ul>::operator[](paVar28, 1);
                        *piVar17 = (iVar22 * 256) / iVar26;
                        paVar28 = (array<int, 3ul>*)eastl::vector<std::array<int, 3ul>, eastl::allocator>::operator[](
                            (vector<std::array<int, 3ul>, eastl::allocator>*)local_f0, (ulong)pvVar27);
                        piVar17 = (int*)std::array<int, 3ul>::operator[](paVar28, 2);
                        *piVar17 = (iVar6 * 256) / iVar26;
                        pTVar9 = local_50;
                        pTVar20 = local_48;
                    }
                    pvVar27 = pvVar27 + 1;
                } while (pvVar27 != local_b0);
            }
            if (0 < (int)local_a0) {
                local_b0 = (vector<int, eastl::allocator>*)&local_78->field_272;
                local_58 = (TerrainVertex*)&local_78->field_240;
                local_50 = (TerrainVertex*)&local_78->field_104;
                local_48 = (TerrainVertex*)&local_78->field_168;
                local_a8 = (vector<int, eastl::allocator>*)&local_78->field_136;
                local_38 = (vector<int, eastl::allocator>*)&local_78->field_40;
                local_a0 = (TerrainVertex*)((ulong)local_a0 & 4294967295);
                pTVar9 = (TerrainVertex*)0;
                do {
                    puVar11 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)local_b8, (ulong)pTVar9);
                    local_90 = *puVar11;
                    puVar11 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_b0, (ulong)pTVar9);
                    local_8c = *puVar11;
                    puVar11 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)local_58, (ulong)pTVar9);
                    local_88 = *puVar11;
                    puVar11 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)local_50, (ulong)pTVar9);
                    local_d0 = *puVar11;
                    puVar11 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                        (vector<int, eastl::allocator>*)local_48, (ulong)pTVar9);
                    local_cc = *puVar11;
                    puVar11 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_a8, (ulong)pTVar9);
                    local_c8 = *puVar11;
                    local_60 = pTVar9;
                    piVar17 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)&local_d0, 0);
                    if (*piVar17 != 12345678) {
                        paVar18 = (array<TerrainVertex, 3ul>*)local_98->push_back();
                        pTVar9 = local_60;
                        cVar5 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                                 eastl::allocator>>::empty(local_100);
                        uVar7 = 4294967295;
                        if (cVar5 == '\0') {
                            puVar11 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                                (vector<int, eastl::allocator>*)local_100, (ulong)pTVar9);
                            uVar7 = *puVar11;
                        }
                        *(undefined4*)(paVar18 + 84) = uVar7;
                        uVar25 = 0;
                        do {
                            piVar17 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)&local_90, uVar25);
                            uVar23 = (ulong)*piVar17;
                            pVVar15 = (Vector3T*)std::array<TerrainVertex, 3ul>::operator[](paVar18, uVar25);
                            piVar17 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_40, uVar23);
                            *(int*)pVVar15 = *piVar17 + param_11;
                            piVar17 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_38, uVar23);
                            *(int*)(pVVar15 + 4) = -*piVar17;
                            piVar17 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_80, uVar23);
                            *(int*)(pVVar15 + 8) = *piVar17 + param_12;
                            if (*(int*)(paVar18 + 84) == -1) {
                                cVar5 = IsGroundBlendable(local_78, (int)local_60);
                                if (cVar5 == '\0') {
                                    piVar17 =
                                        (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)&local_d0, uVar25);
                                    piVar17 = (int*)std::array<int, 65536ul>::operator[](local_108, (long)*piVar17);
                                    uVar8 = *piVar17 << 8 | 255;
                                    goto LAB_1001c6af6;
                                }
                                iVar22 = param_1->field_32;
                                new (&local_118) rs2lib::worldmap::LocationData(param_11, 0, param_12);
                                auVar29 = jag::math::operator-(pVVar15, (Vector3T*)&local_118);
                                uVar7 = GetPackedInterpolatedGroundColour(param_3, iVar22, local_64, auVar29._0_8_,
                                                                          auVar29._8_4_);
                                *(undefined4*)(pVVar15 + 24) = uVar7;
                            } else {
                                piVar17 = (int*)std::array<int, 3ul>::operator[]((array<int, 3ul>*)&local_d0, uVar25);
                                uVar8 = RGBAFromLightness(*piVar17);
                            LAB_1001c6af6:
                                *(uint*)(pVVar15 + 24) = uVar8;
                            }
                            puVar16 = (undefined8*)eastl::vector<std::array<int, 3ul>, eastl::allocator>::operator[](
                                (vector<std::array<int, 3ul>, eastl::allocator>*)local_f0, uVar23);
                            *(undefined4*)(pVVar15 + 20) = *(undefined4*)(puVar16 + 1);
                            *(undefined8*)(pVVar15 + 12) = *puVar16;
                            uVar25 = uVar25 + 1;
                        } while (uVar25 != 3);
                    }
                    pTVar9 = (TerrainVertex*)((long)&local_60->field_0 + 1);
                } while (pTVar9 != local_a0);
            }
            *(int*)(local_f8 + 4) = *(int*)(local_f8 + 4) + 1;
            local_f0->~vector();
            return;
        }
        pQVar10 = (QuickGround*)shared_ptr<dash3d::QuickGround>::operator*(local_b8);
        iVar22 = pQVar10->field_4;
        if ((long)iVar22 == 12345678) {
            return;
        }
        if (pQVar10->field_20 == -1) {
            cVar5 = IsQuickGroundBlendable(pQVar10);
            this_00 = local_108;
            if (cVar5 != '\0') {
                rs2lib::worldmap::LocationData::LocationData(local_f0, param_11, 0, param_12);
                pTVar9 = local_50;
                iVar22 = param_1->field_32;
                auVar29 = jag::math::operator-((Vector3T*)local_50, (Vector3T*)local_f0);
                iVar6 = local_64;
                pwVar3 = param_3;
                uVar7 = GetPackedInterpolatedGroundColour(param_3, iVar22, local_64, auVar29._0_8_, auVar29._8_4_);
                pTVar20 = local_48;
                pTVar9->field_24 = uVar7;
                local_40 = (vector<int, eastl::allocator>*)CONCAT44(local_40._4_4_, param_1->field_32);
                auVar29 = jag::math::operator-((Vector3T*)local_48, (Vector3T*)local_f0);
                uVar7 = GetPackedInterpolatedGroundColour(pwVar3, (ulong)local_40 & 4294967295, iVar6, auVar29._0_8_,
                                                          auVar29._8_4_);
                pTVar9 = local_58;
                pTVar20->field_24 = uVar7;
                local_40 = (vector<int, eastl::allocator>*)CONCAT44(local_40._4_4_, param_1->field_32);
                auVar29 = jag::math::operator-((Vector3T*)local_58, (Vector3T*)local_f0);
                pwVar3 = param_3;
                uVar7 = GetPackedInterpolatedGroundColour(param_3, (ulong)local_40 & 4294967295, iVar6, auVar29._0_8_,
                                                          auVar29._8_4_);
                pTVar20 = local_60;
                pTVar9->field_24 = uVar7;
                local_40 = (vector<int, eastl::allocator>*)CONCAT44(local_40._4_4_, param_1->field_32);
                auVar29 = jag::math::operator-((Vector3T*)local_60, (Vector3T*)local_f0);
                uVar8 = GetPackedInterpolatedGroundColour(pwVar3, (ulong)local_40 & 4294967295, iVar6, auVar29._0_8_,
                                                          auVar29._8_4_);
                goto LAB_1001c6cb7;
            }
            piVar17 = (int*)std::array<int, 65536ul>::operator[](local_108, (long)iVar22);
            local_50->field_24 = *piVar17 << 8 | 255;
            piVar17 = (int*)std::array<int, 65536ul>::operator[](this_00, (long)pQVar10->field_8);
            local_48->field_24 = *piVar17 << 8 | 255;
            piVar17 = (int*)std::array<int, 65536ul>::operator[](this_00, (long)pQVar10->field_12);
            pTVar9 = local_58;
            local_58->field_24 = *piVar17 << 8 | 255;
            piVar17 = (int*)std::array<int, 65536ul>::operator[](this_00, (long)pQVar10->field_16);
            uVar8 = *piVar17 << 8 | 255;
        } else {
            uVar7 = RGBAFromLightness(iVar22);
            local_50->field_24 = uVar7;
            uVar7 = RGBAFromLightness(pQVar10->field_8);
            local_48->field_24 = uVar7;
            uVar7 = RGBAFromLightness(pQVar10->field_12);
            pTVar9 = local_58;
            local_58->field_24 = uVar7;
            uVar8 = RGBAFromLightness(pQVar10->field_16);
        }
        pTVar20 = local_60;
    LAB_1001c6cb7:
        pTVar20->field_24 = uVar8;
        eastl::hashtable<int, int, eastl::allocator, eastl::use_self<int>, eastl::equal_to<int>, eastl::hash<int>,
                         eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false, false,
                         true>::insert(&local_f0[0].field_0);
        this_01 = local_98;
        *(int*)(local_f8 + 4) = *(int*)(local_f8 + 4) + 1;
        paVar18 = (array<TerrainVertex, 3ul>*)local_98->push_back();
        pTVar19 = (TerrainVertex*)std::array<TerrainVertex, 3ul>::operator[](paVar18, 0);
        TerrainVertex::operator=(pTVar19, pTVar9);
        pTVar19 = (TerrainVertex*)std::array<TerrainVertex, 3ul>::operator[](paVar18, 1);
        pTVar9 = local_48;
        TerrainVertex::operator=(pTVar19, local_48);
        pTVar19 = (TerrainVertex*)std::array<TerrainVertex, 3ul>::operator[](paVar18, 2);
        TerrainVertex::operator=(pTVar19, pTVar20);
        *(int*)(paVar18 + 84) = pQVar10->field_20;
        paVar18 = (array<TerrainVertex, 3ul>*)this_01->push_back();
        pTVar19 = (TerrainVertex*)std::array<TerrainVertex, 3ul>::operator[](paVar18, 0);
        TerrainVertex::operator=(pTVar19, local_50);
        pTVar19 = (TerrainVertex*)std::array<TerrainVertex, 3ul>::operator[](paVar18, 1);
        TerrainVertex::operator=(pTVar19, pTVar20);
        pTVar20 = (TerrainVertex*)std::array<TerrainVertex, 3ul>::operator[](paVar18, 2);
        TerrainVertex::operator=(pTVar20, pTVar9);
        *(int*)(paVar18 + 84) = pQVar10->field_20;
    }

    // 0x1001c7070, 64 bytes, placed by debug map only (low confidence)
    // MapRebuildHandler_LogicThread::RGBAFromLightness(int)
    void MapRebuildHandler_LogicThread::RGBAFromLightness(int param_1) {
        uint uVar1;
        undefined1 local_18[8];

        uVar1 = param_1 * 2 & 255;
        new (local_18) jag::math::ColourStorage8888<jag::math::RGBA8StorageLayout>(uVar1, uVar1, uVar1, 255);
        local_18->GetX();
    }

    // 0x1001c70b0, 32 bytes, placed by debug map only (low confidence)
    // MapRebuildHandler_LogicThread::IsQuickGroundBlendable(dash3d::QuickGround const&)
    bool MapRebuildHandler_LogicThread::IsQuickGroundBlendable(QuickGround* param_1) {
        bool bVar1;

        bVar1 = false;
        if ((m_blendTerrain != '\0') && (param_1->field_25 == false)) {
            bVar1 = param_1->field_20 == -1;
        }
        return bVar1;
    }

    // 0x1001c70d0, 48 bytes, placed by debug map only (low confidence)
    // MapRebuildHandler_LogicThread::GetPackedInterpolatedGroundColour(dash3d::world const&, int, int, jag::math::Vector3T<int>)
    void MapRebuildHandler_LogicThread::GetPackedInterpolatedGroundColour(undefined8 param_1, undefined8 param_2) {
        undefined8 local_18;
        undefined8 uStack_10;

        local_18 = GetInterpolatedGroundColour();
        uStack_10 = param_2;
        jag::math::R8G8B8A8FromColour4((Vector4T*)&local_18);
    }

} // namespace jag::oldscape::rseven

namespace jag::math {
    // 0x1001c7100, 48 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<int> operator-<int>(Vector3T<int> const&, Vector3T<int> const&)
    /* Vector3T<int> TEMPNAMEPLACEHOLDERVALUE(Vector3T<int> const&,
   Vector3T<int> const&) */

    undefined1[16] operator-(Vector3T * param_1, Vector3T * param_2) {
        undefined1 auVar1[16];
        LocationData local_18;

        new (&local_18) oldscape::rs2lib::worldmap::LocationData(*(int*)param_1 - *(int*)param_2,
                                                                 *(int*)(param_1 + 4) - *(int*)(param_2 + 4),
                                                                 *(int*)(param_1 + 8) - *(int*)(param_2 + 8));
        auVar1._12_4_ = 0;
        auVar1._0_4_ = local_18.field_0;
        auVar1._4_4_ = local_18.field_4;
        auVar1._8_4_ = local_18.field_8;
        return auVar1;
    }

} // namespace jag::math
