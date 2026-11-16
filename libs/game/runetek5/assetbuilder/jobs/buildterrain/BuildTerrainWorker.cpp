// libs/game/runetek5/assetbuilder/jobs/buildterrain/BuildTerrainWorker.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

#include "BuildTerrainWorker.h"

namespace jag::game {
    // 0x100627d00, 128 bytes, base-object constructor, placed by class name
    // BuildTerrainWorker::BuildTerrainWorker()
    void BuildTerrainWorker::BuildTerrainWorker() {
        _func_decltype_nullptr* in_RSI;

        new (this) AssetWorker();
        field_0 = &PTR__BuildTerrainWorker_100f0caa0;
        field_40 = 0;
        field_44 = 0;
        new (&field_48) eastl::vector<
            std::array<eastl::vector<eastl::vector<DecodedTerrainTile, eastl::allocator>, eastl::allocator>, 4ul>,
            eastl::allocator>();
        new (&field_80) eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>();
        new (&field_112, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
    }

    // 0x100627e00, 16 bytes, complete-object constructor, placed by class name
    // BuildTerrainWorker::BuildTerrainWorker(): jumps straight to the base-object constructor

    // 0x100627e10, 3232 bytes, placed by class name
    // BuildTerrainWorker::Service(int)
    undefined* BuildTerrainWorker::Service(int param_1) {
        array<shared_ptr<eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator>>, 4ul> aVar1;
        uint uVar2;
        undefined4 uVar3;
        AABB* pAVar4;
        undefined1 auVar5[8];
        undefined1 auVar6[8];
        bool bVar7;
        char cVar8;
        undefined1 uVar9;
        short sVar10;
        float fVar11;
        long lVar12;
        long lVar13;
        shared_ptr* psVar14;
        array<shared_ptr<BuildTerrainResultLevelData>, 4ul>* paVar15;
        shared_ptr<BuildTerrainResultLevelData>* psVar16;
        shared_ptr<BuiltTerrainLevel>* psVar17;
        shared_ptr* psVar18;
        AABB* pAVar19;
        fixed_hash_map* pfVar20;
        ulong uVar21;
        ulong uVar22;
        vector<graphics::ModularParticleEmitter,
               eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>* this_00;
        Layout* this_01;
        uchar* puVar23;
        uchar* puVar24;
        GridGroup* this_02;
        undefined1* puVar25;
        vector<eastl::string, eastl::allocator>* this_03;
        TerrainPatchVertex* pTVar26;
        short* psVar27;
        vector* pvVar28;
        int* piVar29;
        int* piVar30;
        byte* pbVar31;
        array<shared_ptr<eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator>>, 4ul>*
            paVar32;
        shared_ptr<BuildTerrainResultWaterData>* this_04;
        vector<unsigned short, eastl::allocator>* this_05;
        short sVar33;
        shared_ptr* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        hashtable_iterator_base* phVar34;
        hashtable_iterator_base* extraout_RDX_01;
        shared_ptr* extraout_RDX_02;
        undefined* puVar35;
        undefined4 in_register_00000034;
        MakeSharedPool<BuildTerrainResultData, 16>* this_06;
        MakeSharedPool<BuildTerrainResultLevelData, 16>* pMVar36;
        array* paVar37;
        BuildTerrainWorker* pBVar38;
        int iVar39;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* pvVar40;
        array<unsigned char, 4ul>* this_07;
        vector<graphics::TerrainPatchVertex, eastl::allocator>* this_08;
        int iVar41;
        float in_XMM1_Da;
        array<math::Vector2T<float>, 3ul> local_37c8[24];
        hashtable_iterator_base local_37b0[24];
        vector<WorldMap::MapElementInstance, eastl::allocator>* local_3798;
        ulong local_3790;
        ulong local_3788;
        ColourHSL local_3780;
        ulong local_3770;
        vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>* local_3768;
        ulong local_3760;
        undefined1 local_3758[8];
        float local_3750;
        shared_ptr local_3738;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* local_3728;
        AABB* local_3720;
        undefined1 local_3718[24];
        ulong local_3700;
        ulong local_36f8;
        BuildTerrainWorker* local_36f0;
        MakeSharedPool<BuildTerrainResultLevelData, 16>* local_36e8;
        vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator> local_36e0[104];
        TerrainPatch local_3678;
        long local_38;

        this_06 = (MakeSharedPool<BuildTerrainResultData, 16>*)CONCAT44(in_register_00000034, param_1);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        bVar7 = field_8->operator_cast_to_bool();
        if (bVar7) {
            lVar12 = field_8->end();
            lVar13 = (&field_48)->size();
            local_3718._16_8_ = lVar12;
            lVar12 = ((lVar12 + 64))->size();
            if (lVar13 != lVar12) {
                field_40 = 64;
                field_44 = 1;
                DecodeTerrain(this);
            }
            local_3768 = (vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>*)&field_80;
            local_36f0 = this;
            cVar8 = local_3768->empty();
            pBVar38 = local_36f0;
            if (cVar8 != '\0') {
                BuildTerrain(local_36f0);
                SplitRenderChunks(pBVar38);
            }
            MakeSharedPool<BuildTerrainResultData, 16>::MakeShared<>(&local_3738, this_06);
            local_3718._16_8_ = local_3718._16_8_ + 208;
            pMVar36 = (MakeSharedPool<BuildTerrainResultLevelData, 16>*)0;
            do {
                local_36e8 = pMVar36;
                psVar14 = (shared_ptr*)eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](
                    local_3768, (ulong)pMVar36);
                bVar7 = shared_ptr::operator_cast_to_bool(psVar14);
                if (bVar7) {
                    MakeSharedPool<BuildTerrainResultLevelData, 16>::MakeShared<>((shared_ptr*)&local_3678, pMVar36);
                    paVar15 = (array<shared_ptr<BuildTerrainResultLevelData>, 4ul>*)
                                  shared_ptr<BuildTerrainResultData>::operator->(
                                      (shared_ptr<BuildTerrainResultData>*)&local_3738);
                    psVar16 = (shared_ptr<BuildTerrainResultLevelData>*)
                        std::array<shared_ptr<BuildTerrainResultLevelData>, 4ul>::operator[](paVar15,
                                                                                             (ulong)local_36e8);
                    shared_ptr<BuildTerrainResultLevelData>::operator=(psVar16, (shared_ptr*)&local_3678);
                    local_3678.~shared_ptr();
                    paVar15 = (array<shared_ptr<BuildTerrainResultLevelData>, 4ul>*)
                                  shared_ptr<BuildTerrainResultData>::operator->(
                                      (shared_ptr<BuildTerrainResultData>*)&local_3738);
                    pMVar36 = local_36e8;
                    psVar16 = (shared_ptr<BuildTerrainResultLevelData>*)
                        std::array<shared_ptr<BuildTerrainResultLevelData>, 4ul>::operator[](paVar15,
                                                                                             (ulong)local_36e8);
                    local_3720 = (AABB*)shared_ptr<BuildTerrainResultLevelData>::operator*(psVar16);
                    psVar17 = (shared_ptr<BuiltTerrainLevel>*)
                        eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](local_3768,
                                                                                                   (ulong)pMVar36);
                    psVar14 = (shared_ptr*)shared_ptr<BuiltTerrainLevel>::operator*(psVar17);
                    psVar18 = (shared_ptr*)std::array<
                        shared_ptr<eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>, eastl::allocator>>,
                        4ul>::operator[]((array<shared_ptr<eastl::map<int, graphics::TerrainTextureMeta,
                                                                      eastl::less<int>, eastl::allocator>>,
                                                4ul>*)local_3718._16_8_,
                                         (ulong)local_36e8);
                    uVar2 = local_36f0->field_40;
                    if (uVar2 == 0) {
                        iVar39 = 0;
                    } else {
                        iVar39 = (int)(64 / (ulong)uVar2) << 7;
                    }
                    new (&local_3678) graphics::TerrainPatch((int)local_36e8, psVar18, psVar14, uVar2, iVar39);
                    pAVar4 = local_3720;
                    shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::operator=(
                        (shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>*)&local_3720
                            ->field_32,
                        psVar14 + 1);
                    if (local_36e8 == (MakeSharedPool<BuildTerrainResultLevelData, 16>*)0) {
                        shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::operator=(
                            (shared_ptr<
                                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>*)&pAVar4[1]
                                .field_12,
                            psVar14 + 2);
                        shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>::
                        operator=((shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>,
                                                            eastl::allocator>>*)&pAVar4[2]
                                      .field_8,
                                  psVar14 + 4);
                    }
                    shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>::
                    operator=(
                        (shared_ptr<
                            eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>*)&pAVar4[1]
                            .field_28,
                        psVar14 + 3);
                    pAVar19 = (AABB*)local_3678.GetScreen();
                    math::AABB::operator=(pAVar4, pAVar19);
                    local_3678.SwapVertexDataBuffer((vector*)&pAVar4[2].field_24);
                    local_3678.SwapVertexDataBufferPos((vector*)&pAVar4[3].field_20);
                    fVar11 = (float)local_3678.GetGridResolution();
                    pAVar4[4].m_maximum = fVar11;
                    fVar11 = (float)local_3678.GetGridSize();
                    pAVar4[4].field_20 = fVar11;
                    pfVar20 = (fixed_hash_map*)local_3678.GetRenderChunks();
                    eastl::fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>,
                                          eastl::equal_to<int>, false, eastl::allocator>::
                    operator=((fixed_hash_map<int, graphics::RenderChunk, 256ul, 257ul, true, eastl::hash<int>,
                                              eastl::equal_to<int>, false, eastl::allocator>*)&pAVar4[4]
                                  .field_24,
                              pfVar20);
                    fVar11 = (float)local_3678.GetViewportMapID();
                    pAVar4[351].field_20 = fVar11;
                    local_3728 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                         eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)
                        shared_ptr<
                            eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>::
                        operator*((shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>,
                                                            eastl::allocator>>*)psVar14);
                    uVar21 = eastl::vector<
                        Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                        eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(local_3728);
                    new (local_3758) eastl::allocator("EASTL vector");
                    eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>::vector(
                        local_36e0, uVar21, (allocator*)local_3758);
                    lVar12 = local_36e0->size();
                    if (lVar12 == 0) {
                        local_3700 = 0;
                    } else {
                        local_3700 = 0;
                        uVar21 = 0;
                        do {
                            this_00 = (vector<
                                       graphics::ModularParticleEmitter,
                                       eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>*)
                                eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>::
                                operator[](
                                    (vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>*)
                                        local_3728,
                                    uVar21);
                            local_36f8 = uVar21;
                            this_01 = (Layout*)eastl::vector<eastl::vector<unsigned char, eastl::allocator>,
                                                             eastl::allocator>::operator[](local_36e0, uVar21);
                            eastl::vector<graphics::ModularParticleEmitter,
                                          eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true,
                                                                        eastl::allocator>>::size(this_00);
                            eastl::vector<unsigned char, eastl::allocator>::resize((ulong)this_01);
                            puVar23 = (uchar*)eastl::basic_string<
                                char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(this_01);
                            puVar24 = (uchar*)this_01->end();
                            eastl::fill(puVar23, puVar24, 0);
                            lVar12 = this_01->size();
                            if (lVar12 != 0) {
                                uVar21 = 0;
                                uVar22 = 1;
                                do {
                                    this_02 =
                                        (GridGroup*)eastl::vector<graphics::GridGroup, eastl::allocator>::operator[](
                                            (vector<graphics::GridGroup, eastl::allocator>*)this_00, uVar21);
                                    lVar12 = this_02->GetGridTile();
                                    if ((lVar12 != 0) && (0 < *(int*)(lVar12 + 48))) {
                                        if (255 < *(int*)(lVar12 + 48)) {
                                            /* WARNING: Subroutine does not return */
                                            LogAssert(
                                                "tile->m_renderChunkIDRemoveRoof <= 255",
                                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                                "game/runetek5/assetbuilder/jobs/buildterrain/BuildTerrainWorker.cpp",
                                                116, (char*)0);
                                        }
                                        uVar3 = *(undefined4*)(lVar12 + 48);
                                        puVar25 =
                                            (undefined1*)eastl::vector<unsigned char, eastl::allocator>::operator[](
                                                (vector<unsigned char, eastl::allocator>*)this_01, uVar21);
                                        *puVar25 = (char)uVar3;
                                        local_3700 = CONCAT71((int7)((ulong)puVar25 >> 8), 1);
                                    }
                                    uVar21 = this_01->size();
                                    bVar7 = uVar22 < uVar21;
                                    uVar21 = uVar22;
                                    uVar22 = (ulong)((int)uVar22 + 1);
                                } while (bVar7);
                            }
                            uVar21 = (ulong)((int)local_36f8 + 1);
                            uVar22 = local_36e0->size();
                        } while (uVar21 < uVar22);
                    }
                    if ((local_3700 & 1) != 0) {
                        make_shared<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>(
                            (jag*)local_3758);
                        pAVar4 = local_3720 + 350;
                        shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>::
                        operator=((shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>,
                                                            eastl::allocator>>*)&pAVar4->field_24,
                                  (shared_ptr*)local_3758);
                        local_3758->~shared_ptr();
                        this_03 = (vector<eastl::string, eastl::allocator>*)shared_ptr<
                                      eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>::
                                  operator->((shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>,
                                                                       eastl::allocator>>*)&pAVar4->field_24);
                        eastl::vector<eastl::string, eastl::allocator>::swap(this_03, (vector*)local_36e0);
                    }
                    eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>::~vector(
                        local_36e0);
                    local_3678.~TerrainPatch();
                }
                pMVar36 = local_36e8 + 1;
            } while (pMVar36 != (MakeSharedPool<BuildTerrainResultLevelData, 16>*)4);
            paVar15 =
                (array<shared_ptr<BuildTerrainResultLevelData>, 4ul>*)shared_ptr<BuildTerrainResultData>::operator->(
                    (shared_ptr<BuildTerrainResultData>*)&local_3738);
            psVar14 = (shared_ptr*)std::array<shared_ptr<BuildTerrainResultLevelData>, 4ul>::operator[](paVar15, 0);
            bVar7 = shared_ptr::operator_cast_to_bool(psVar14);
            psVar14 = extraout_RDX;
            if (bVar7) {
                paVar15 = (array<shared_ptr<BuildTerrainResultLevelData>, 4ul>*)
                              shared_ptr<BuildTerrainResultData>::operator->(
                                  (shared_ptr<BuildTerrainResultData>*)&local_3738);
                psVar16 = (shared_ptr<BuildTerrainResultLevelData>*)
                    std::array<shared_ptr<BuildTerrainResultLevelData>, 4ul>::operator[](paVar15, 0);
                lVar12 = shared_ptr<BuildTerrainResultLevelData>::operator*(psVar16);
                this_08 = (vector<graphics::TerrainPatchVertex, eastl::allocator>*)(lVar12 + 96);
                uVar21 = this_08->size();
                local_3770 = uVar21;
                new (&local_3678) eastl::fixed_map<int, shared_ptr<BuildTerrainResultWaterData>, 8ul, true,
                                                   eastl::less<int>, eastl::allocator>();
                new (local_36e0)
                    eastl::fixed_vector<BuildTerrainWorker::WaterOverlapData, 8ul, true, eastl::allocator>();
                if (2 < local_3770) {
                    local_3788 = uVar21 / 3;
                    if (local_3788 < 2) {
                        local_3788 = 1;
                    }
                    uVar21 = 0;
                    local_3798 = (vector<WorldMap::MapElementInstance, eastl::allocator>*)this_08;
                    do {
                        local_3760 = uVar21 * 3;
                        pTVar26 = (TerrainPatchVertex*)
                            eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>::operator[](this_08,
                                                                                                      local_3760);
                        local_3718._16_8_ = GetTriangleGridTile(local_36f0, pTVar26);
                        if ((array<shared_ptr<eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>,
                                                         eastl::allocator>>,
                                   4ul>*)local_3718._16_8_ !=
                            (array<shared_ptr<eastl::map<int, graphics::TerrainTextureMeta, eastl::less<int>,
                                                         eastl::allocator>>,
                                   4ul>*)0) {
                            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                            pTVar26 = (TerrainPatchVertex*)
                                eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>::operator[](this_08,
                                                                                                          local_3760);
                            pBVar38 = local_36f0;
                            GetTriangleWaterOverlapTypes(local_36f0, (fixed_vector*)local_36e0, pTVar26);
                            AllocWaterGeometry(pBVar38, (fixed_vector*)local_36e0, (fixed_map*)&local_3678, local_3770);
                            new (local_37b0) std::array<math::Vector2T<float>, 3ul>();
                            std::array<math::Vector2T<float>, 3ul>::array(local_37c8);
                            pTVar26 = (TerrainPatchVertex*)
                                eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>::operator[](this_08,
                                                                                                          local_3760);
                            paVar37 = (array*)local_37b0;
                            GatherTriangleFlow(local_36f0, paVar37, (array*)local_37c8, pTVar26);
                            local_3718._0_8_ = math::Colour3FromR8G8B8A8(*(uint*)(local_3718._16_8_ + 12));
                            local_3790 = uVar21;
                            local_3718._8_4_ = in_XMM1_Da;
                            local_3758 = (undefined1[8])local_3718->SRGBToLinear(paVar37);
                            local_3750 = in_XMM1_Da;
                            local_3718->SetXYZ(local_3758);
                            pvVar40 =
                                (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                        eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)0;
                            do {
                                psVar27 =
                                    (short*)eastl::vector<graphics::TerrainPatchVertex, eastl::allocator>::operator[](
                                        this_08, (ulong)(pvVar40 + local_3760));
                                new (local_3758) graphics::WaterPatchVertex();
                                auVar5 = local_3758;
                                sVar10 = *psVar27;
                                local_3758._0_2_ = sVar10;
                                auVar6 = local_3758;
                                sVar33 = psVar27[2];
                                local_3758._6_2_ = auVar5._6_2_;
                                local_3758._0_4_ = auVar6._0_4_;
                                local_3758._4_2_ = sVar33;
                                psVar17 = (shared_ptr<BuiltTerrainLevel>*)
                                    eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](
                                        local_3768, 0);
                                lVar12 = shared_ptr<BuiltTerrainLevel>::operator->(psVar17);
                                pvVar28 = (vector*)
                                    shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::
                                    operator*((shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                        eastl::allocator>>*)(lVar12 + 32));
                                iVar39 = sVar10 + 16383;
                                iVar41 = sVar33 + 16383;
                                sVar10 = GetInterpolatedValue(local_36f0, pvVar28, iVar39, iVar41);
                                auVar5 = local_3758;
                                sVar33 = sVar10 - psVar27[1];
                                local_3758._6_2_ = sVar33;
                                local_3758._0_2_ = auVar5._0_2_;
                                local_3758._2_2_ = sVar10;
                                uVar9 = eastl::min<graphics::GraphicsQuality>(
                                    (int)(short)(sVar33 - (sVar33 >> 15)) >> 1, 127);
                                pBVar38 = (BuildTerrainWorker*)(psVar27 + 8);
                                puVar25 = (undefined1*)std::array<signed char, 4ul>::operator[]((ulong)pBVar38);
                                *puVar25 = uVar9;
                                local_3728 = pvVar40;
                                SetWaterVertexFlowData(pBVar38, (WaterPatchVertex*)local_3758, (int)pvVar40,
                                                       (array*)local_37b0, (array*)local_37c8);
                                piVar29 = (int*)local_36e0->HeapBeginPtr();
                                piVar30 = (int*)local_36e0->end();
                                if (piVar29 != piVar30) {
                                    local_36e8 = (MakeSharedPool<BuildTerrainResultLevelData, 16>*)CONCAT44(
                                        local_36e8._4_4_, (float)iVar39);
                                    this_07 = (array<unsigned char, 4ul>*)(psVar27 + 12);
                                    local_3720 = (AABB*)CONCAT44(local_3720._4_4_, (float)iVar41);
                                    do {
                                        if (0 < (short)local_3758._6_2_) {
                                            local_3700 = CONCAT44(local_3700._4_4_,
                                                                  4096.0 / (float)(int)(short)local_3758._6_2_);
                                            pbVar31 = (byte*)std::array<unsigned char, 4ul>::operator[](this_07, 0);
                                            local_36f8._0_4_ = (float)*pbVar31;
                                            fVar11 = (float)eastl::min<float>(
                                                (float)local_3718._0_4_ * (float)local_3700, 1.0);
                                            *pbVar31 = (byte)(int)(fVar11 * (float)local_36f8);
                                            pbVar31 = (byte*)std::array<unsigned char, 4ul>::operator[](this_07, 1);
                                            local_36f8._0_4_ = (float)*pbVar31;
                                            fVar11 = (float)eastl::min<float>(
                                                (float)local_3718._4_4_ * (float)local_3700, 1.0);
                                            *pbVar31 = (byte)(int)(fVar11 * (float)local_36f8);
                                            pbVar31 = (byte*)std::array<unsigned char, 4ul>::operator[](this_07, 2);
                                            local_36f8 = CONCAT44(local_36f8._4_4_, (float)*pbVar31);
                                            fVar11 = (float)eastl::min<float>(
                                                (float)local_3700 * (float)local_3718._8_4_, 1.0);
                                            *pbVar31 = (byte)(int)(fVar11 * (float)local_36f8);
                                        }
                                        fVar11 = (float)local_3718._0_4_ * 255.0;
                                        puVar25 = (undefined1*)std::array<unsigned char, 4ul>::operator[](
                                            (array<unsigned char, 4ul>*)&local_3750, 0);
                                        *puVar25 = (char)(long)fVar11;
                                        fVar11 = (float)local_3718._4_4_ * 255.0;
                                        puVar25 = (undefined1*)std::array<unsigned char, 4ul>::operator[](
                                            (array<unsigned char, 4ul>*)&local_3750, 1);
                                        *puVar25 = (char)(long)fVar11;
                                        fVar11 = (float)local_3718._8_4_ * 255.0;
                                        puVar25 = (undefined1*)std::array<unsigned char, 4ul>::operator[](
                                            (array<unsigned char, 4ul>*)&local_3750, 2);
                                        *puVar25 = (char)(long)fVar11;
                                        aVar1 = *(array<shared_ptr<eastl::map<int, graphics::TerrainTextureMeta,
                                                                              eastl::less<int>, eastl::allocator>>,
                                                        4ul>*)(local_3718._16_8_ + 12);
                                        paVar32 = (array<shared_ptr<eastl::map<int, graphics::TerrainTextureMeta,
                                                                               eastl::less<int>, eastl::allocator>>,
                                                         4ul>*)
                                            std::array<unsigned char, 4ul>::operator[](
                                                (array<unsigned char, 4ul>*)&local_3750, 3);
                                        *paVar32 = aVar1;
                                        *paVar32 = (array<shared_ptr<eastl::map<int, graphics::TerrainTextureMeta,
                                                                                eastl::less<int>, eastl::allocator>>,
                                                          4ul>)((*(byte*)(piVar29 + 1) >> ((byte)local_3728 & 31) & 1) *
                                                                (char)aVar1);
                                        this_04 = (shared_ptr<BuildTerrainResultWaterData>*)eastl::map<
                                            int, shared_ptr<BuildTerrainResultWaterData>, eastl::less<int>,
                                            eastl::fixed_node_allocator<56ul, 8ul, 8ul, 0ul, true, eastl::allocator>>::
                                        operator[]((map<int, shared_ptr<BuildTerrainResultWaterData>, eastl::less<int>,
                                                        eastl::fixed_node_allocator<56ul, 8ul, 8ul, 0ul, true,
                                                                                    eastl::allocator>>*)&local_3678,
                                                   piVar29);
                                        this_05 = (vector<unsigned short, eastl::allocator>*)
                                                      shared_ptr<BuildTerrainResultWaterData>::operator->(this_04);
                                        lVar12 = shared_ptr<BuildTerrainResultWaterData>::operator->(this_04);
                                        local_3780.field_0._0_2_ = ((lVar12 + 32))->size();
                                        eastl::vector<unsigned short, eastl::allocator>::push_back(
                                            this_05, (ushort*)&local_3780);
                                        lVar12 = shared_ptr<BuildTerrainResultWaterData>::operator->(this_04);
                                        ((lVar12 + 32))->push_back(local_3758);
                                        iVar39 = *piVar29;
                                        lVar12 = shared_ptr<BuildTerrainResultWaterData>::operator->(this_04);
                                        *(int*)(lVar12 + 96) = iVar39;
                                        in_XMM1_Da = (float)(int)(short)local_3758._2_2_;
                                        new (&local_3780)
                                            math::ColourHSL(local_36e8._0_4_, in_XMM1_Da, local_3720._0_4_);
                                        lVar12 = shared_ptr<BuildTerrainResultWaterData>::operator->(this_04);
                                        ((lVar12 + 64))->AddPoint((Vector3T*)&local_3780);
                                        piVar29 = piVar29 + 2;
                                    } while (piVar29 != piVar30);
                                }
                                pvVar40 = local_3728 + 1;
                                this_08 = (vector<graphics::TerrainPatchVertex, eastl::allocator>*)local_3798;
                            } while (
                                pvVar40 !=
                                (vector<
                                    Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                    eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)3);
                            uVar21 = local_3790;
                        }
                        uVar21 = uVar21 + 1;
                    } while (uVar21 != local_3788);
                }
                eastl::vector<unsigned long,
                              eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
                eastl::rbtree<
                    unsigned int,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::less<unsigned int>, eastl::allocator,
                    eastl::use_first<eastl::pair<unsigned int const,
                                                 eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                    true, true>::end();
                phVar34 = extraout_RDX_00;
                while (bVar7 = eastl::operator!=((eastl*)local_3758, local_37b0, phVar34), bVar7) {
                    lVar12 = eastl::rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                    operator*(
                        (rbtree_iterator<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                            local_3758);
                    lVar13 = shared_ptr<BuildTerrainResultData>::operator->(
                        (shared_ptr<BuildTerrainResultData>*)&local_3738);
                    ((lVar13 + 64))->push_back((shared_ptr*)(lVar12 + 8));
                    eastl::rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                    operator++(
                        (rbtree_iterator<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                            local_3758);
                    phVar34 = extraout_RDX_01;
                }
                local_36e0->~fixed_vector();
                local_3678.~fixed_map();
                psVar14 = extraout_RDX_02;
            }
            static_pointer_cast<oldscape::ClientEntity, shared_ptr<oldscape::ClientNpc>>((shared_ptr*)&local_3678,
                                                                                         (jag*)&local_3738, psVar14);
            shared_ptr<void>::operator=((shared_ptr<void>*)&local_36f0->field_24, (shared_ptr*)&local_3678);
            local_3678.~shared_ptr();
            puVar35 = DataStatus::READY;
            local_3738.~shared_ptr();
        } else {
            shared_ptr<void>::reset();
            puVar35 = DataStatus::READY;
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return puVar35;
    }

    // 0x100628ad0, 704 bytes, placed by class name
    // BuildTerrainWorker::DecodeTerrain()
    void BuildTerrainWorker::DecodeTerrain() {
        byte bVar1;
        byte bVar2;
        ushort uVar3;
        undefined2 uVar4;
        long lVar5;
        ulong uVar6;
        long lVar7;
        shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>* this_00;
        TextureAtlasReference* this_01;
        ulong uVar8;
        ulong uVar9;
        array<eastl::vector<eastl::vector<DecodedTerrainTile, eastl::allocator>, eastl::allocator>, 4ul>* this_02;
        vector<eastl::vector<DecodedTerrainTile, eastl::allocator>, eastl::allocator>* this_03;
        vector<DecodedTerrainTile, eastl::allocator>* pvVar10;
        byte* pbVar11;
        undefined8 uVar12;
        undefined1* this_04;

        lVar5 = field_8->end();
        this_04 = &field_48;
        this_04->clear();
        uVar6 = ((lVar5 + 64))->size();
        this_04->resize(uVar6);
        lVar7 = this_04->size();
        if (lVar7 != 0) {
            uVar6 = 0;
            do {
                this_00 = (shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>*)eastl::
                    vector<shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>, eastl::allocator>::operator[](
                        (vector<shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>, eastl::allocator>*)(lVar5 +
                                                                                                                 64),
                        uVar6);
                this_01 =
                    (TextureAtlasReference*)shared_ptr<PacketT<Array<unsigned char, eastl::allocator>>>::operator*(
                        this_00);
                this_01->SetPos(0);
                uVar8 = this_01->size();
                uVar9 = this_01->GetTextureAtlas();
                if (uVar8 < uVar9) {
                    do {
                        bVar1 = this_01->g1();
                        this_02 = (array<
                                   eastl::vector<eastl::vector<DecodedTerrainTile, eastl::allocator>, eastl::allocator>,
                                   4ul>*)
                            eastl::vector<std::array<eastl::vector<eastl::vector<DecodedTerrainTile, eastl::allocator>,
                                                                   eastl::allocator>,
                                                     4ul>,
                                          eastl::allocator>::
                            operator[](
                                (vector<std::array<eastl::vector<eastl::vector<DecodedTerrainTile, eastl::allocator>,
                                                                 eastl::allocator>,
                                                   4ul>,
                                        eastl::allocator>*)this_04,
                                uVar6);
                        this_03 =
                            (vector<eastl::vector<DecodedTerrainTile, eastl::allocator>, eastl::allocator>*)std::array<
                                eastl::vector<eastl::vector<DecodedTerrainTile, eastl::allocator>, eastl::allocator>,
                                4ul>::operator[](this_02, (ulong)bVar1);
                        eastl::vector<eastl::vector<DecodedTerrainTile, eastl::allocator>, eastl::allocator>::resize(
                            this_03, 66);
                        uVar8 = 0;
                        do {
                            pvVar10 = (vector<DecodedTerrainTile, eastl::allocator>*)
                                eastl::vector<eastl::vector<DecodedTerrainTile, eastl::allocator>,
                                              eastl::allocator>::operator[](this_03, uVar8);
                            eastl::vector<DecodedTerrainTile, eastl::allocator>::resize(pvVar10, 66);
                            uVar9 = 0;
                            do {
                                pvVar10 = (vector<DecodedTerrainTile, eastl::allocator>*)
                                    eastl::vector<eastl::vector<DecodedTerrainTile, eastl::allocator>,
                                                  eastl::allocator>::operator[](this_03, uVar8);
                                pbVar11 = (byte*)eastl::vector<DecodedTerrainTile, eastl::allocator>::operator[](
                                    pvVar10, uVar9);
                                bVar2 = this_01->g1();
                                if (bVar2 == 0) {
                                    bVar2 = this_01->g1();
                                    pbVar11[2] = bVar2;
                                    pbVar11[1] = 0;
                                    pbVar11[3] = 0;
                                } else {
                                    pbVar11[1] = bVar2 >> 4 & 1;
                                    *pbVar11 = bVar2 >> 2 & 24 | bVar2 >> 1 & 7;
                                    bVar2 = this_01->g1();
                                    pbVar11[2] = bVar2;
                                    if (pbVar11[1] == 0) {
                                        if (bVar1 == 0) {
                                            bVar2 = 0;
                                            goto LAB_100628cae;
                                        }
                                    } else {
                                        bVar2 = this_01->g1();
                                    LAB_100628cae:
                                        pbVar11[3] = bVar2;
                                    }
                                    uVar3 = this_01->gSmart1or2();
                                    *(uint*)(pbVar11 + 4) = uVar3 - 1;
                                    if (uVar3 != 0) {
                                        uVar4 = this_01->g2();
                                        *(undefined2*)(pbVar11 + 8) = uVar4;
                                    }
                                    uVar3 = this_01->gSmart1or2();
                                    *(uint*)(pbVar11 + 12) = uVar3 - 1;
                                    if (pbVar11[1] != 0) {
                                        uVar3 = this_01->gSmart1or2();
                                        *(uint*)(pbVar11 + 24) = uVar3 - 1;
                                    }
                                    if (*(int*)(pbVar11 + 12) != -1) {
                                        bVar2 = this_01->g1();
                                        uVar12 = graphics::TerrainOverlayShape::GetShape(bVar2 >> 2);
                                        *(undefined8*)(pbVar11 + 32) = uVar12;
                                        pbVar11[16] = bVar2 & 3;
                                        if (pbVar11[1] != 0) {
                                            uVar3 = this_01->gSmart1or2();
                                            *(uint*)(pbVar11 + 20) = uVar3 - 1;
                                        }
                                    }
                                }
                                uVar9 = uVar9 + 1;
                            } while (uVar9 != 66);
                            uVar8 = uVar8 + 1;
                        } while (uVar8 != 66);
                        uVar8 = this_01->size();
                        uVar9 = this_01->GetTextureAtlas();
                    } while (uVar8 < uVar9);
                }
                uVar6 = uVar6 + 1;
                uVar8 = this_04->size();
            } while (uVar6 < uVar8);
        }
    }

    // 0x100628d90, 4384 bytes, placed by class name
    // BuildTerrainWorker::BuildTerrain()
    void BuildTerrainWorker::BuildTerrain() {
        shared_ptr* this_00;
        ulong uVar1;
        ulong uVar2;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* this_01;
        bool bVar3;
        char cVar4;
        bool bVar5;
        int iVar6;
        int iVar7;
        undefined4 uVar8;
        BuildTerrainRequestData* pBVar9;
        shared_ptr<BuiltTerrainLevel>* psVar10;
        shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>* psVar11;
        vector<eastl::vector<int, eastl::allocator>, eastl::allocator>* pvVar12;
        vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>* pvVar13;
        vector<int, eastl::allocator>* pvVar14;
        vector<unsigned char, eastl::allocator>* this_02;
        ulong uVar15;
        undefined4* puVar16;
        undefined1* puVar17;
        vector<unsigned char, eastl::allocator>* pvVar18;
        vector* pvVar19;
        vector* pvVar20;
        long lVar21;
        int* piVar22;
        long lVar23;
        shared_ptr* psVar24;
        byte* pbVar25;
        FloorUnderlayType* pFVar26;
        FloorOverlayType* pFVar27;
        MSIType* pMVar28;
        undefined8 uVar29;
        vector<graphics::ModularParticleEmitter,
               eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>* this_03;
        GridGroup* this_04;
        vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>, 10ul, true,
                                   eastl::allocator>,
               eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true, eastl::allocator>>* pvVar30;
        vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
               eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true, eastl::allocator>>* this_05;
        vector<ClientCompositeZone, eastl::fixed_vector_allocator<20ul, 10ul, 4ul, 0ul, true, eastl::allocator>>*
            this_06;
        ClientCompositeZone* this_07;
        BuildTerrainWorker* pBVar31;
        uint uVar32;
        shared_ptr* psVar33;
        MakeSharedPool<BuiltTerrainLevel, 64>* pMVar34;
        MakeSharedPool<BuiltTerrainLevel, 64>* pMVar35;
        uint uVar36;
        vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>* pvVar37;
        shared_ptr* this_08;
        GridTile* pGVar38;
        MakeSharedPool<BuiltTerrainLevel, 64>* pMVar39;
        ulong uVar40;
        uint* in_stack_fffffffffffffea8;
        array* local_108;
        shared_ptr local_100;
        vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>* local_f0;
        shared_ptr local_e8;
        GridTile* local_d8;
        shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>* local_d0;
        vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>* local_c8;
        int local_bc;
        BuildTerrainRequestData* local_b8;
        vector<int, eastl::allocator>* local_b0;
        vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>* local_a8;
        shared_ptr local_a0;
        int local_90;
        int local_8c;
        int local_88;
        int local_84;
        uint local_80;
        uint local_7c;
        shared_ptr* local_78;
        shared_ptr local_70;
        shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>* local_60;
        MakeSharedPool<BuiltTerrainLevel, 64>* local_58;
        MakeSharedPool<BuiltTerrainLevel, 64>* local_50;
        undefined1* local_48;
        BuildTerrainWorker* local_40;
        byte local_31;

        pBVar9 = (BuildTerrainRequestData*)field_8->end();
        local_a8 = (vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>*)&field_80;
        pMVar35 = (MakeSharedPool<BuiltTerrainLevel, 64>*)4;
        eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::resize(local_a8, 4);
        this_08 = (shared_ptr*)&pBVar9->field_16;
        pMVar39 = (MakeSharedPool<BuiltTerrainLevel, 64>*)0;
        local_b8 = pBVar9;
        local_78 = this_08;
        local_40 = this;
        do {
            pBVar31 = local_40;
            MakeSharedPool<BuiltTerrainLevel, 64>::MakeShared<>(&local_70, pMVar35);
            local_50 = pMVar39;
            psVar10 = (shared_ptr<BuiltTerrainLevel>*)
                eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](local_a8, (ulong)pMVar39);
            shared_ptr<BuiltTerrainLevel>::operator=(psVar10, &local_70);
            local_70.~shared_ptr();
            psVar10 = (shared_ptr<BuiltTerrainLevel>*)
                eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](local_a8, (ulong)local_50);
            psVar11 =
                (shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>*)
                    shared_ptr<BuiltTerrainLevel>::operator*(psVar10);
            make_shared<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>(
                (jag*)&local_70);
            shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>,
                                     eastl::allocator>>::operator=(psVar11, &local_70);
            local_70.~shared_ptr();
            local_c8 = (vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>*)
                shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>,
                                         eastl::allocator>>::operator*(psVar11);
            eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>::resize(
                local_c8, (ulong)(pBVar31->field_40 + 2));
            psVar33 = (shared_ptr*)(psVar11 + 16);
            local_60 = psVar11;
            bVar3 = shared_ptr::operator_cast_to_bool(psVar33);
            if (bVar3) {
                pvVar12 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)
                    shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::operator*(
                        (shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>*)psVar33);
                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::resize(pvVar12, 66);
            } else {
                local_a0._0_4_ = 66;
                make_shared<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, int>(
                    (jag*)&local_70, (int*)&local_a0);
                shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::operator=(
                    (shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>*)psVar33,
                    &local_70);
                local_70.~shared_ptr();
            }
            this_00 = (shared_ptr*)(local_60 + 48);
            bVar3 = shared_ptr::operator_cast_to_bool(this_00);
            if (bVar3) {
                pvVar13 =
                    (vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>*)shared_ptr<
                        eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>::
                    operator->(
                        (shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>*)
                            this_00);
                eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>::resize(pvVar13, 66);
            } else {
                local_a0._0_4_ = 66;
                make_shared<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>, int>(
                    (jag*)&local_70, (int*)&local_a0);
                shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>::operator=(
                    (shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>*)
                        this_00,
                    &local_70);
                local_70.~shared_ptr();
            }
            pvVar37 = local_c8;
            if (local_50 == (MakeSharedPool<BuiltTerrainLevel, 64>*)0) {
                psVar24 = (shared_ptr*)(local_60 + 32);
                bVar3 = shared_ptr::operator_cast_to_bool(psVar24);
                if (bVar3) {
                    pvVar12 =
                        (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)
                            shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::
                            operator->(
                                (shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>*)
                                    psVar24);
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::resize(pvVar12, 66);
                } else {
                    local_a0._0_4_ = 66;
                    make_shared<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>, int>(
                        (jag*)&local_70, (int*)&local_a0);
                    shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::operator=(
                        (shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>*)psVar24,
                        &local_70);
                    local_70.~shared_ptr();
                }
                psVar24 = (shared_ptr*)(local_60 + 64);
                bVar3 = shared_ptr::operator_cast_to_bool(psVar24);
                if (bVar3) {
                    pvVar13 = (vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>*)shared_ptr<
                                  eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>::
                              operator->((shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>,
                                                                   eastl::allocator>>*)psVar24);
                    eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>::resize(pvVar13,
                                                                                                            66);
                } else {
                    local_a0._0_4_ = 66;
                    make_shared<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>, int>(
                        (jag*)&local_70, (int*)&local_a0);
                    shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>::
                    operator=(
                        (shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>*)
                            psVar24,
                        &local_70);
                    local_70.~shared_ptr();
                }
            }
            local_d0 = local_60 + 32;
            local_60 = local_60 + 64;
            pMVar35 = (MakeSharedPool<BuiltTerrainLevel, 64>*)0;
            bVar3 = false;
            do {
                pMVar39 = local_50;
                uVar32 = pBVar31->field_40;
                if (pMVar35 == (MakeSharedPool<BuiltTerrainLevel, 64>*)65) {
                    uVar32 = uVar32 + 1;
                } else if (uVar32 == 0) {
                    uVar32 = 0;
                } else {
                    uVar32 = (uint)(((ulong)pMVar35 & 4294967295) / (64 / (ulong)uVar32));
                }
                local_58 = pMVar35;
                iVar6 = GetSourceLookup(local_40, uVar32);
                iVar7 = pvVar37->size();
                if ((int)uVar32 < iVar7) {
                    local_f0 = (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)
                        eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>,
                                      eastl::allocator>::operator[](pvVar37, (long)(int)uVar32);
                } else {
                    local_f0 =
                        (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)0;
                }
                psVar11 = local_60;
                pvVar12 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)
                    shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::operator*(
                        (shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>*)psVar33);
                pMVar35 = local_58;
                pvVar14 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](pvVar12,
                                                                                                      (ulong)local_58);
                pvVar13 = (vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>*)
                    shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>::
                    operator*(
                        (shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>*)
                            this_00);
                this_02 = (vector<unsigned char, eastl::allocator>*)
                    eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>::operator[](
                        pvVar13, (ulong)pMVar35);
                eastl::vector<int, eastl::allocator>::resize((ulong)pvVar14);
                eastl::vector<unsigned char, eastl::allocator>::resize((ulong)this_02);
                if (pMVar39 == (MakeSharedPool<BuiltTerrainLevel, 64>*)0) {
                    pvVar12 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)
                        shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::operator*(
                            (shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>*)
                                local_d0);
                    pMVar35 = local_58;
                    uVar15 = eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                        pvVar12, (ulong)local_58);
                    eastl::vector<int, eastl::allocator>::resize(uVar15);
                    pvVar13 = (vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>*)shared_ptr<
                        eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>::
                    operator*(
                        (shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>*)
                            psVar11);
                    uVar15 =
                        eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>::operator[](
                            pvVar13, (ulong)pMVar35);
                    eastl::vector<unsigned char, eastl::allocator>::resize(uVar15);
                }
                uVar15 = 0;
                local_b0 = pvVar14;
                do {
                    uVar32 = local_40->field_40;
                    uVar36 = (uint)uVar15;
                    if (uVar15 == 65) {
                        uVar32 = uVar32 + 1;
                    } else if (uVar32 == 0) {
                        uVar32 = 0;
                    } else {
                        uVar32 = (uint)((uVar15 & 4294967295) / (64 / (ulong)uVar32));
                    }
                    local_8c = (int)local_58;
                    local_90 = iVar6;
                    local_88 = local_8c;
                    local_84 = GetSourceLookup(local_40, uVar32);
                    this_01 = local_f0;
                    local_bc = (int)pMVar39;
                    local_80 = uVar36;
                    local_7c = uVar36;
                    if (local_f0 ==
                        (vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true, eastl::allocator>>*)0) {
                        pGVar38 = (GridTile*)0;
                    } else {
                        cVar4 = eastl::vector<int, eastl::fixed_vector_allocator<4ul, 8ul, 4ul, 0ul, true,
                                                                                 eastl::allocator>>::empty(local_f0);
                        if (cVar4 != '\0') {
                            this_01->resize((ulong)(local_40->field_40 + 2));
                        }
                        iVar7 = this_01->size();
                        pGVar38 = (GridTile*)0;
                        if ((int)uVar32 < iVar7) {
                            pGVar38 = (GridTile*)eastl::vector<graphics::GridGroup, eastl::allocator>::operator[](
                                (vector<graphics::GridGroup, eastl::allocator>*)local_f0, (long)(int)uVar32);
                        }
                    }
                    pBVar31 = local_40;
                    local_d8 = pGVar38;
                    if (pGVar38 == (GridTile*)0) {
                        pGVar38 = (GridTile*)0;
                    } else if (pGVar38->field_40 == '\0') {
                        pGVar38->field_40 = 1;
                        *(undefined4*)((long)&pGVar38->field_12 + 4) = 0;
                        pGVar38->field_0 = 4294967295;
                        *(undefined8*)&pGVar38->field_8 = 3212836864;
                        *(undefined4*)&pGVar38->field_52 = 0;
                        pGVar38->field_60 = 0;
                        uVar29 = graphics::TerrainOverlayShape::GetShape(0);
                        pGVar38->field_72 = uVar29;
                        *(undefined4*)&pGVar38->field_64 = 0;
                        local_d8[1].field_40 = 0;
                        local_d8[2].field_40 = 0;
                    } else {
                        pGVar38 = (GridTile*)0;
                    }
                    puVar16 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](local_b0, uVar15);
                    *puVar16 = 0;
                    puVar17 = (undefined1*)eastl::vector<unsigned char, eastl::allocator>::operator[](this_02, uVar15);
                    *puVar17 = 0;
                    if (local_50 == (MakeSharedPool<BuiltTerrainLevel, 64>*)0) {
                        pvVar12 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)
                            shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::
                            operator*(
                                (shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>*)
                                    local_d0);
                        pMVar39 = local_58;
                        pvVar14 = (vector<int, eastl::allocator>*)
                            eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                                pvVar12, (ulong)local_58);
                        puVar16 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](pvVar14, uVar15);
                        *puVar16 = 0;
                        pvVar13 = (vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>*)shared_ptr<
                            eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>::
                        operator*((shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>,
                                                            eastl::allocator>>*)local_60);
                        pBVar31 = local_40;
                        pvVar18 = (vector<unsigned char, eastl::allocator>*)
                            eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>::operator[](
                                pvVar13, (ulong)pMVar39);
                        puVar17 =
                            (undefined1*)eastl::vector<unsigned char, eastl::allocator>::operator[](pvVar18, uVar15);
                        *puVar17 = 0;
                    }
                    local_108 = (array*)0;
                    local_31 = 0;
                    bVar5 = shared_ptr::operator_cast_to_bool(this_08);
                    if (bVar5) {
                        in_stack_fffffffffffffea8 = &local_7c;
                        cVar4 = ReselectSourceUsingCompositeData(pBVar31, &local_90, &local_8c, &local_84,
                                                                 (int*)&local_80, &local_bc, &local_108, &local_88,
                                                                 (int*)in_stack_fffffffffffffea8, &local_31, local_b8);
                        if (cVar4 != '\0')
                            goto LAB_100629445;
                    } else {
                        local_108 = (array*)
                            eastl::vector<std::array<eastl::vector<eastl::vector<DecodedTerrainTile, eastl::allocator>,
                                                                   eastl::allocator>,
                                                     4ul>,
                                          eastl::allocator>::
                            operator[](
                                (vector<std::array<eastl::vector<eastl::vector<DecodedTerrainTile, eastl::allocator>,
                                                                 eastl::allocator>,
                                                   4ul>,
                                        eastl::allocator>*)&field_48,
                                0);
                    LAB_100629445:
                        if ((ulong)(long)local_bc < 5) {
                            pvVar19 = (vector*)local_108->at((long)local_bc);
                            bVar5 = ArrayValidPosition<
                                eastl::vector<eastl::vector<DecodedTerrainTile, eastl::allocator>, eastl::allocator>,
                                int>(pvVar19, &local_8c);
                            if ((bVar5) && (bVar5 = ArrayValidPosition<
                                                eastl::vector<eastl::vector<DecodedTerrainTile, eastl::allocator>,
                                                              eastl::allocator>,
                                                int>(pvVar19, &local_88),
                                            bVar5)) {
                                pvVar20 = (vector*)eastl::vector<eastl::vector<DecodedTerrainTile, eastl::allocator>,
                                                                 eastl::allocator>::
                                operator[](
                                    (vector<eastl::vector<DecodedTerrainTile, eastl::allocator>, eastl::allocator>*)
                                        pvVar19,
                                    (long)local_8c);
                                bVar5 = ArrayValidPosition<eastl::vector<DecodedTerrainTile, eastl::allocator>, int>(
                                    pvVar20, (int*)&local_80);
                                if (bVar5) {
                                    puVar17 =
                                        (undefined1*)eastl::vector<DecodedTerrainTile, eastl::allocator>::operator[](
                                            (vector<DecodedTerrainTile, eastl::allocator>*)pvVar20,
                                            (long)(int)local_80);
                                    pvVar20 = (vector*)eastl::vector<
                                        eastl::vector<DecodedTerrainTile, eastl::allocator>, eastl::allocator>::
                                    operator[](
                                        (vector<eastl::vector<DecodedTerrainTile, eastl::allocator>, eastl::allocator>*)
                                            pvVar19,
                                        (long)local_88);
                                    bVar5 =
                                        ArrayValidPosition<eastl::vector<DecodedTerrainTile, eastl::allocator>, int>(
                                            pvVar20, (int*)&local_7c);
                                    if (bVar5) {
                                        lVar21 = eastl::vector<DecodedTerrainTile, eastl::allocator>::operator[](
                                            (vector<DecodedTerrainTile, eastl::allocator>*)pvVar20,
                                            (long)(int)local_7c);
                                        pBVar31 = local_40;
                                        local_48 = puVar17;
                                        uVar8 = DecodeHeightCode(local_40, (int)local_50, (uint)local_58, uVar36,
                                                                 *(uchar*)(lVar21 + 2), *(bool*)(lVar21 + 1));
                                        puVar16 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                                            local_b0, uVar15);
                                        *puVar16 = uVar8;
                                        local_48 = (undefined1*)CONCAT71(local_48._1_7_, *local_48);
                                        puVar17 =
                                            (undefined1*)eastl::vector<unsigned char, eastl::allocator>::operator[](
                                                this_02, uVar15);
                                        pMVar39 = local_58;
                                        *puVar17 = local_48._0_1_;
                                        if (*(char*)(lVar21 + 1) == '\0') {
                                            if (local_50 == (MakeSharedPool<BuiltTerrainLevel, 64>*)0) {
                                                piVar22 = (int*)eastl::vector<int, eastl::allocator>::operator[](
                                                    local_b0, uVar15);
                                                iVar7 = *piVar22;
                                                pvVar12 = (vector<eastl::vector<int, eastl::allocator>,
                                                                  eastl::allocator>*)
                                                    shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                             eastl::allocator>>::
                                                    operator*(
                                                        (shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                                  eastl::allocator>>*)local_d0);
                                                pvVar14 = (vector<int, eastl::allocator>*)
                                                    eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                  eastl::allocator>::operator[](pvVar12,
                                                                                                (ulong)local_58);
                                                goto LAB_10062960b;
                                            }
                                        } else {
                                            uVar8 = DecodeHeightCode(pBVar31, (int)local_50, (uint)local_58, uVar36,
                                                                     *(uchar*)(lVar21 + 3), false);
                                            psVar11 = local_d0;
                                            local_48 = (undefined1*)CONCAT44(local_48._4_4_, uVar8);
                                            pvVar12 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)
                                                shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                         eastl::allocator>>::
                                                operator*(
                                                    (shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                              eastl::allocator>>*)local_d0);
                                            pvVar14 = (vector<int, eastl::allocator>*)
                                                eastl::vector<eastl::vector<int, eastl::allocator>,
                                                              eastl::allocator>::operator[](pvVar12, (ulong)pMVar39);
                                            puVar16 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](
                                                pvVar14, uVar15);
                                            *puVar16 = local_48._0_4_;
                                            pvVar13 = (vector<eastl::vector<unsigned char, eastl::allocator>,
                                                              eastl::allocator>*)
                                                shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>,
                                                                         eastl::allocator>>::
                                                operator*((shared_ptr<
                                                           eastl::vector<eastl::vector<unsigned char, eastl::allocator>,
                                                                         eastl::allocator>>*)local_60);
                                            pvVar18 = (vector<unsigned char, eastl::allocator>*)
                                                eastl::vector<eastl::vector<unsigned char, eastl::allocator>,
                                                              eastl::allocator>::operator[](pvVar13, (ulong)pMVar39);
                                            puVar17 =
                                                (undefined1*)eastl::vector<unsigned char, eastl::allocator>::operator[](
                                                    pvVar18, uVar15);
                                            *puVar17 = 1;
                                            pvVar12 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)
                                                shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                         eastl::allocator>>::
                                                operator*(
                                                    (shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                              eastl::allocator>>*)psVar11);
                                            pvVar14 = (vector<int, eastl::allocator>*)
                                                eastl::vector<eastl::vector<int, eastl::allocator>,
                                                              eastl::allocator>::operator[](pvVar12, (ulong)pMVar39);
                                            piVar22 =
                                                (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar14, uVar15);
                                            pvVar14 = local_b0;
                                            iVar7 = *piVar22;
                                            piVar22 = (int*)eastl::vector<int, eastl::allocator>::operator[](local_b0,
                                                                                                             uVar15);
                                            iVar7 = iVar7 - *piVar22;
                                        LAB_10062960b:
                                            piVar22 =
                                                (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar14, uVar15);
                                            *piVar22 = iVar7;
                                        }
                                        bVar5 = ArrayValidPosition<
                                            eastl::vector<eastl::vector<DecodedTerrainTile, eastl::allocator>,
                                                          eastl::allocator>,
                                            int>(pvVar19, &local_90);
                                        if (bVar5) {
                                            pvVar19 = (vector*)eastl::vector<
                                                eastl::vector<DecodedTerrainTile, eastl::allocator>, eastl::allocator>::
                                            operator[]((vector<eastl::vector<DecodedTerrainTile, eastl::allocator>,
                                                               eastl::allocator>*)pvVar19,
                                                       (long)local_90);
                                            bVar5 =
                                                ArrayValidPosition<eastl::vector<DecodedTerrainTile, eastl::allocator>,
                                                                   int>(pvVar19, &local_84);
                                            this_08 = local_78;
                                            if (bVar5) {
                                                lVar23 =
                                                    eastl::vector<DecodedTerrainTile, eastl::allocator>::operator[](
                                                        (vector<DecodedTerrainTile, eastl::allocator>*)pvVar19,
                                                        (long)local_84);
                                                bVar3 = true;
                                                if (pGVar38 != (GridTile*)0) {
                                                    *(undefined4*)&pGVar38->field_44 = 0;
                                                    local_48 = (undefined1*)lVar23;
                                                    if (local_50 != (MakeSharedPool<BuiltTerrainLevel, 64>*)0) {
                                                        local_70._0_4_ = (int)local_50 + -1;
                                                        do {
                                                            bVar5 = ArrayValidPosition<
                                                                eastl::fixed_vector<
                                                                    shared_ptr<eastl::vector<
                                                                        eastl::vector<unsigned char, eastl::allocator>,
                                                                        eastl::allocator>>,
                                                                    4ul, true, eastl::allocator>,
                                                                int>((fixed_vector*)local_a8, (int*)&local_70);
                                                            if (bVar5) {
                                                                psVar24 = (shared_ptr*)eastl::vector<
                                                                    shared_ptr<BuiltTerrainLevel>,
                                                                    eastl::allocator>::operator[](local_a8,
                                                                                                  (long)(int)
                                                                                                      local_70._0_4_);
                                                                bVar5 = shared_ptr::operator_cast_to_bool(psVar24);
                                                                if (bVar5) {
                                                                    lVar23 = shared_ptr<BuiltTerrainLevel>::operator->(
                                                                        (shared_ptr<BuiltTerrainLevel>*)psVar24);
                                                                    pvVar13 = (vector<eastl::vector<unsigned char,
                                                                                                    eastl::allocator>,
                                                                                      eastl::allocator>*)
                                                                        shared_ptr<eastl::vector<
                                                                            eastl::vector<unsigned char,
                                                                                          eastl::allocator>,
                                                                            eastl::allocator>>::
                                                                        operator*(
                                                                            (shared_ptr<eastl::vector<
                                                                                 eastl::vector<unsigned char,
                                                                                               eastl::allocator>,
                                                                                 eastl::allocator>>*)(lVar23 + 48));
                                                                    pvVar18 = (vector<unsigned char, eastl::allocator>*)
                                                                        eastl::vector<eastl::vector<unsigned char,
                                                                                                    eastl::allocator>,
                                                                                      eastl::allocator>::
                                                                        operator[](pvVar13, (ulong)local_58);
                                                                    pbVar25 = (byte*)eastl::vector<
                                                                        unsigned char,
                                                                        eastl::allocator>::operator[](pvVar18, uVar15);
                                                                    if ((*pbVar25 & 4) != 0) {
                                                                        *(undefined4*)&pGVar38->field_44 = 1;
                                                                    }
                                                                }
                                                            }
                                                            iVar7 = local_70._0_4_ + -1;
                                                            bVar5 = 0 < (int)local_70._0_4_;
                                                            local_70._0_4_ = iVar7;
                                                        } while (bVar5);
                                                    }
                                                    pMVar39 = local_50;
                                                    uVar8 = DecodeHeightCode(local_40, (int)local_50, (uint)local_58,
                                                                             uVar36, *(uchar*)(lVar21 + 2),
                                                                             *(bool*)(lVar21 + 1));
                                                    *(undefined4*)&pGVar38->field_52 = uVar8;
                                                    if (*(char*)(lVar21 + 1) != '\0') {
                                                        pMVar39 = local_50;
                                                        iVar7 =
                                                            DecodeHeightCode(local_40, (int)local_50, (uint)local_58,
                                                                             uVar36, *(uchar*)(lVar21 + 3), false);
                                                        *(int*)&pGVar38->field_52 = iVar7 - *(int*)&pGVar38->field_52;
                                                        pGVar38->field_60 = 1;
                                                        *(int*)((long)&pGVar38->field_52 + 4) = iVar7;
                                                    }
                                                    new (&local_70)
                                                        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(
                                                            pMVar39);
                                                    new (&local_a0)
                                                        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(
                                                            pMVar39);
                                                    new (&local_e8)
                                                        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(
                                                            pMVar39);
                                                    new (&local_100)
                                                        shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(
                                                            pMVar39);
                                                    if (*(int*)((long)local_48 + 4) == -1) {
                                                    LAB_10062983f:
                                                        if (*(int*)((long)local_48 + 20) != -1) {
                                                            psVar24 = (shared_ptr*)GetUnderlay(
                                                                local_40, *(int*)((long)local_48 + 20));
                                                            shared_ptr<FloorUnderlayType>::operator=(
                                                                (shared_ptr<FloorUnderlayType>*)&local_a0, psVar24);
                                                            bVar5 = shared_ptr::operator_cast_to_bool(&local_a0);
                                                            uVar8 =
                                                                (undefined4)((ulong)in_stack_fffffffffffffea8 >> 32);
                                                            if (!bVar5) {
                                                                uVar29 = logger::default_logger();
                                                                in_stack_fffffffffffffea8 = (uint*)CONCAT44(
                                                                    uVar8, *(undefined4*)((long)local_48 + 20));
                                                                logger::Logger::Log(
                                                                    uVar29, 0, 2,
                                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                                    "OSRS-OS1669-BOXR/libs/game/runetek5/assetbuilder/"
                                                                    "jobs/buildterrain/BuildTerrainWorker.cpp",
                                                                    1486, "%s: Could not find %s %d", "BuildTerrain",
                                                                    "underlay for ID2", in_stack_fffffffffffffea8);
                                                                goto LAB_100629b65;
                                                            }
                                                            pFVar26 = (FloorUnderlayType*)
                                                                          shared_ptr<FloorUnderlayType>::operator->((
                                                                              shared_ptr<FloorUnderlayType>*)&local_a0);
                                                            pFVar26->SetBlending((bool)local_b8->field_160);
                                                        }
                                                        if (*(int*)((long)local_48 + 12) != -1) {
                                                            psVar24 = (shared_ptr*)GetOverlay(
                                                                local_40, *(int*)((long)local_48 + 12));
                                                            shared_ptr<FloorOverlayType>::operator=(
                                                                (shared_ptr<FloorOverlayType>*)&local_e8, psVar24);
                                                            bVar5 = shared_ptr::operator_cast_to_bool(&local_e8);
                                                            uVar8 =
                                                                (undefined4)((ulong)in_stack_fffffffffffffea8 >> 32);
                                                            if (!bVar5) {
                                                                uVar29 = logger::default_logger();
                                                                in_stack_fffffffffffffea8 = (uint*)CONCAT44(
                                                                    uVar8, *(undefined4*)((long)local_48 + 12));
                                                                logger::Logger::Log(
                                                                    uVar29, 0, 2,
                                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                                    "OSRS-OS1669-BOXR/libs/game/runetek5/assetbuilder/"
                                                                    "jobs/buildterrain/BuildTerrainWorker.cpp",
                                                                    1497, "%s: Could not find %s %d", "BuildTerrain",
                                                                    "overlay for ID", in_stack_fffffffffffffea8);
                                                                goto LAB_100629b65;
                                                            }
                                                            pFVar27 = (FloorOverlayType*)
                                                                          shared_ptr<FloorOverlayType>::operator->(
                                                                              (shared_ptr<FloorOverlayType>*)&local_e8);
                                                            pFVar27->SetBlending((bool)local_b8->field_160);
                                                        }
                                                        if (*(int*)((long)local_48 + 24) != -1) {
                                                            psVar24 = (shared_ptr*)GetOverlay(
                                                                local_40, *(int*)((long)local_48 + 24));
                                                            shared_ptr<FloorOverlayType>::operator=(
                                                                (shared_ptr<FloorOverlayType>*)&local_100, psVar24);
                                                            bVar5 = shared_ptr::operator_cast_to_bool(&local_100);
                                                            uVar8 =
                                                                (undefined4)((ulong)in_stack_fffffffffffffea8 >> 32);
                                                            if (!bVar5) {
                                                                uVar29 = logger::default_logger();
                                                                in_stack_fffffffffffffea8 = (uint*)CONCAT44(
                                                                    uVar8, *(undefined4*)((long)local_48 + 24));
                                                                logger::Logger::Log(
                                                                    uVar29, 0, 2,
                                                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                                    "OSRS-OS1669-BOXR/libs/game/runetek5/assetbuilder/"
                                                                    "jobs/buildterrain/BuildTerrainWorker.cpp",
                                                                    1508, "%s: Could not find %s %d", "BuildTerrain",
                                                                    "overworld overlay for ID2",
                                                                    in_stack_fffffffffffffea8);
                                                                goto LAB_100629b65;
                                                            }
                                                            pFVar27 = (FloorOverlayType*)
                                                                          shared_ptr<FloorOverlayType>::operator->((
                                                                              shared_ptr<FloorOverlayType>*)&local_100);
                                                            pFVar27->SetBlending((bool)local_b8->field_160);
                                                            pMVar28 =
                                                                (MSIType*)shared_ptr<FloorOverlayType>::operator->(
                                                                    (shared_ptr<FloorOverlayType>*)&local_100);
                                                            uVar8 = pMVar28->GetSpriteID();
                                                            *(undefined4*)&local_d8[3].field_12 = uVar8;
                                                            pMVar28 =
                                                                (MSIType*)shared_ptr<FloorOverlayType>::operator->(
                                                                    (shared_ptr<FloorOverlayType>*)&local_100);
                                                            uVar8 = pMVar28->GetSpriteID();
                                                            *(undefined4*)((long)&local_d8[3].field_12 + 4) = uVar8;
                                                            local_d8[3].field_40 = 1;
                                                        }
                                                        bVar5 = shared_ptr::operator_cast_to_bool(&local_70);
                                                        if ((bVar5) ||
                                                            (bVar5 = shared_ptr::operator_cast_to_bool(&local_e8),
                                                             bVar5)) {
                                                            bVar5 = shared_ptr::operator_cast_to_bool(&local_e8);
                                                            if (bVar5) {
                                                                in_stack_fffffffffffffea8 = (uint*)CONCAT44(
                                                                    (int)((ulong)in_stack_fffffffffffffea8 >> 32),
                                                                    (uint)local_31);
                                                                BuildTile(local_40, local_48, pGVar38, local_d8 + 1,
                                                                          local_d8 + 2, &local_e8, &local_70, &local_a0,
                                                                          in_stack_fffffffffffffea8);
                                                            } else {
                                                                AssignUnderlay(local_40, &local_70, pGVar38,
                                                                               *(ushort*)((long)local_48 + 8));
                                                            }
                                                        }
                                                    } else {
                                                        psVar24 = (shared_ptr*)GetUnderlay(local_40,
                                                                                           *(int*)((long)local_48 + 4));
                                                        shared_ptr<FloorUnderlayType>::operator=(
                                                            (shared_ptr<FloorUnderlayType>*)&local_70, psVar24);
                                                        bVar5 = shared_ptr::operator_cast_to_bool(&local_70);
                                                        uVar8 = (undefined4)((ulong)in_stack_fffffffffffffea8 >> 32);
                                                        if (bVar5) {
                                                            pFVar26 = (FloorUnderlayType*)
                                                                          shared_ptr<FloorUnderlayType>::operator->((
                                                                              shared_ptr<FloorUnderlayType>*)&local_70);
                                                            pFVar26->SetBlending((bool)local_b8->field_160);
                                                            *(undefined4*)((long)&pGVar38->field_64 + 4) =
                                                                *(undefined4*)((long)local_48 + 4);
                                                            goto LAB_10062983f;
                                                        }
                                                        uVar29 = logger::default_logger();
                                                        in_stack_fffffffffffffea8 =
                                                            (uint*)CONCAT44(uVar8, *(undefined4*)((long)local_48 + 4));
                                                        logger::Logger::Log(
                                                            uVar29, 0, 2,
                                                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/"
                                                            "OSRS-OS1669-BOXR/libs/game/runetek5/assetbuilder/jobs/"
                                                            "buildterrain/BuildTerrainWorker.cpp",
                                                            1474, "%s: Could not find %s %d", "BuildTerrain",
                                                            "underlay for ID", in_stack_fffffffffffffea8);
                                                    }
                                                LAB_100629b65:
                                                    local_100.~shared_ptr();
                                                    local_e8.~shared_ptr();
                                                    local_a0.~shared_ptr();
                                                    local_70.~shared_ptr();
                                                }
                                            }
                                            goto LAB_1006291b4;
                                        }
                                    }
                                }
                            }
                            this_08 = local_78;
                        }
                    }
                LAB_1006291b4:
                    pvVar37 = local_c8;
                    uVar15 = uVar15 + 1;
                    pMVar39 = local_50;
                } while (uVar15 != 66);
                pMVar35 = local_58 + 1;
                pBVar31 = local_40;
            } while (pMVar35 != (MakeSharedPool<BuiltTerrainLevel, 64>*)66);
            iVar6 = local_c8->size();
            if (2 < iVar6) {
                pMVar39 = (MakeSharedPool<BuiltTerrainLevel, 64>*)&DAT_00000001;
                do {
                    pMVar35 = pMVar39;
                    this_03 = (vector<graphics::ModularParticleEmitter,
                                      eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>*)
                        eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>,
                                      eastl::allocator>::operator[](pvVar37, (ulong)pMVar39);
                    iVar6 = eastl::vector<
                        graphics::ModularParticleEmitter,
                        eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>::size(this_03);
                    if (2 < iVar6) {
                        pMVar34 = (MakeSharedPool<BuiltTerrainLevel, 64>*)&DAT_00000001;
                        do {
                            pMVar35 = pMVar34;
                            this_04 = (GridGroup*)eastl::vector<graphics::GridGroup, eastl::allocator>::operator[](
                                (vector<graphics::GridGroup, eastl::allocator>*)this_03, (ulong)pMVar34);
                            lVar21 = this_04->GetGridTile();
                            if ((lVar21 != 0) && (*(char*)(lVar21 + 40) != '\0')) {
                                pBVar31 = *(BuildTerrainWorker**)(lVar21 + 72);
                                cVar4 = pBVar31->GetHorizontalAlignment();
                                if (cVar4 == '\0') {
                                    pMVar35 = (MakeSharedPool<BuiltTerrainLevel, 64>*)(ulong) * (uint*)(lVar21 + 68);
                                    uVar8 = CalculatePreferredRotation(pBVar31, *(uint*)(lVar21 + 68), (int)pMVar39,
                                                                       (int)pMVar34, (vector*)local_c8);
                                    *(undefined4*)(lVar21 + 64) = uVar8;
                                }
                            }
                            pMVar34 = pMVar34 + 1;
                            lVar21 = eastl::vector<graphics::ModularParticleEmitter,
                                                   eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true,
                                                                                 eastl::allocator>>::size(this_03);
                        } while ((long)pMVar34 < (lVar21 << 32) + -4294967296 >> 32);
                    }
                    pvVar37 = local_c8;
                    pMVar39 = pMVar39 + 1;
                    lVar21 = local_c8->size();
                } while ((long)pMVar39 < (lVar21 << 32) + -4294967296 >> 32);
            }
            pMVar39 = local_50;
            if (!bVar3) {
                pMVar35 = local_50;
                eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](local_a8, (ulong)local_50);
                shared_ptr<BuiltTerrainLevel>::reset();
            }
            pMVar39 = pMVar39 + 1;
            if (pMVar39 == (MakeSharedPool<BuiltTerrainLevel, 64>*)4) {
                bVar3 = shared_ptr::operator_cast_to_bool(this_08);
                if ((bVar3) &&
                    (lVar21 = shared_ptr<ClientCompositeData>::operator->((shared_ptr<ClientCompositeData>*)this_08),
                     *(char*)(lVar21 + 9832) != '\0')) {
                    pvVar30 =
                        (vector<
                            eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                                10ul, true, eastl::allocator>,
                            eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                            shared_ptr<ClientCompositeData>::operator->((shared_ptr<ClientCompositeData>*)this_08);
                    iVar6 = eastl::vector<
                        eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                            10ul, true, eastl::allocator>,
                        eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::size(pvVar30);
                    if (0 < iVar6) {
                        pMVar39 = (MakeSharedPool<BuiltTerrainLevel, 64>*)0;
                        do {
                            pvVar30 =
                                (vector<eastl::fixed_vector<
                                            eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                            10ul, true, eastl::allocator>,
                                        eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    shared_ptr<ClientCompositeData>::operator->(
                                        (shared_ptr<ClientCompositeData>*)this_08);
                            this_05 =
                                (vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                        eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    eastl::vector<
                                        eastl::fixed_vector<
                                            eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                            10ul, true, eastl::allocator>,
                                        eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::
                                    operator[](pvVar30, (ulong)pMVar39);
                            psVar33 =
                                (shared_ptr*)eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](
                                    local_a8, (ulong)pMVar39);
                            bVar3 = shared_ptr::operator_cast_to_bool(psVar33);
                            if (bVar3) {
                                uVar15 = 0;
                                local_50 = pMVar39;
                                do {
                                    uVar1 = uVar15 + 1;
                                    uVar40 = 0;
                                    do {
                                        this_06 = (vector<ClientCompositeZone,
                                                          eastl::fixed_vector_allocator<20ul, 10ul, 4ul, 0ul, true,
                                                                                        eastl::allocator>>*)
                                            eastl::vector<
                                                eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                                eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true,
                                                                              eastl::allocator>>::operator[](this_05,
                                                                                                             uVar1);
                                        uVar2 = uVar40 + 1;
                                        this_07 = (ClientCompositeZone*)eastl::vector<
                                            ClientCompositeZone,
                                            eastl::fixed_vector_allocator<20ul, 10ul, 4ul, 0ul, true,
                                                                          eastl::allocator>>::operator[](this_06,
                                                                                                         uVar2);
                                        cVar4 = this_07->IsValid();
                                        if (cVar4 == '\0') {
                                            SetZonePerimeterHeight(local_40, (int)local_50, (int)uVar15, (int)uVar40);
                                        }
                                        pMVar39 = local_50;
                                        uVar40 = uVar2;
                                    } while (uVar2 != 8);
                                    uVar15 = uVar1;
                                } while (uVar1 != 8);
                                SetMapsquarePerimeterHeight(local_40, (int)local_50);
                                this_08 = local_78;
                            }
                            pMVar39 = pMVar39 + 1;
                            pvVar30 =
                                (vector<eastl::fixed_vector<
                                            eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                            10ul, true, eastl::allocator>,
                                        eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                                    shared_ptr<ClientCompositeData>::operator->(
                                        (shared_ptr<ClientCompositeData>*)this_08);
                            iVar6 = eastl::vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul,
                                                                                          true, eastl::allocator>,
                                                                      10ul, true, eastl::allocator>,
                                                  eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true,
                                                                                eastl::allocator>>::size(pvVar30);
                        } while ((long)pMVar39 < (long)iVar6);
                    }
                }
                return;
            }
        } while (true);
    }

    // 0x100629eb0, 400 bytes, placed by class name
    // BuildTerrainWorker::SplitRenderChunks()
    void BuildTerrainWorker::SplitRenderChunks() {
        bool bVar1;
        char cVar2;
        int iVar3;
        shared_ptr* this_00;
        shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>* this_01;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* this_02;
        vector<graphics::ModularParticleEmitter,
               eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>* this_03;
        GridGroup* this_04;
        long lVar4;
        ulong uVar5;
        ulong uVar6;
        ulong uVar7;
        RemoveRoofPaintingProgress aRStack_10060[2732];

        uVar5 = 0;
        RemoveRoofPaintingProgress::RemoveRoofPaintingProgress(aRStack_10060, 0, 0, 65, 65);
        do {
            this_00 = (shared_ptr*)eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](
                (vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>*)&field_80, uVar5);
            bVar1 = shared_ptr::operator_cast_to_bool(this_00);
            if (bVar1) {
                this_01 =
                    (shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>*)
                        shared_ptr<BuiltTerrainLevel>::operator*((shared_ptr<BuiltTerrainLevel>*)this_00);
                field_128 = 2;
                this_02 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                  eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)
                    shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>,
                                             eastl::allocator>>::operator*(this_01);
                iVar3 = eastl::vector<
                    Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                    eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(this_02);
                if (0 < iVar3) {
                    uVar6 = 0;
                    do {
                        this_03 =
                            (vector<graphics::ModularParticleEmitter,
                                    eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>*)
                                eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>::
                                operator[](
                                    (vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>*)
                                        this_02,
                                    uVar6);
                        iVar3 = eastl::vector<graphics::ModularParticleEmitter,
                                              eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true,
                                                                            eastl::allocator>>::size(this_03);
                        if (0 < iVar3) {
                            uVar7 = 0;
                            do {
                                this_04 = (GridGroup*)eastl::vector<graphics::GridGroup, eastl::allocator>::operator[](
                                    (vector<graphics::GridGroup, eastl::allocator>*)this_03, uVar7);
                                lVar4 = this_04->GetGridTile();
                                if (((lVar4 != 0) && (*(int*)(lVar4 + 44) == 1)) && (*(int*)(lVar4 + 48) == -1)) {
                                    iVar3 = (int)uVar5 + -1;
                                    cVar2 = aRStack_10060->IsSet(iVar3, (int)uVar6, (int)uVar7);
                                    if (cVar2 == '\0') {
                                        iVar3 = PaintRemoveRoofArea(this, iVar3, (int)uVar6, (int)uVar7, aRStack_10060);
                                        if (0 < iVar3) {
                                            field_128 = field_128 + 1;
                                        }
                                    }
                                }
                                uVar7 = uVar7 + 1;
                                iVar3 = eastl::vector<graphics::ModularParticleEmitter,
                                                      eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true,
                                                                                    eastl::allocator>>::size(this_03);
                            } while ((long)uVar7 < (long)iVar3);
                        }
                        uVar6 = uVar6 + 1;
                        iVar3 = eastl::vector<
                            Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                            eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(this_02);
                    } while ((long)uVar6 < (long)iVar3);
                }
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 != 4);
    }

    // 0x10062a540, 336 bytes, placed by class name
    // BuildTerrainWorker::GetTriangleGridTile(graphics::TerrainPatchVertex const*)
    long BuildTerrainWorker::GetTriangleGridTile(TerrainPatchVertex* param_1) {
        short sVar1;
        short sVar2;
        int iVar3;
        int iVar4;
        shared_ptr<BuiltTerrainLevel>* psVar5;
        shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>* this_00;
        vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>* this_01;
        vector<graphics::GridGroup, eastl::allocator>* this_02;
        GridGroup* this_03;
        long lVar6;
        long lVar7;
        vector* pvVar8;
        long lVar9;

        iVar3 = (int)(64 / (ulong)field_40) << 7;
        lVar9 = 4;
        do {
            sVar1 = *(short*)(param_1 + lVar9 + -4);
            sVar2 = *(short*)(param_1 + lVar9);
            psVar5 = (shared_ptr<BuiltTerrainLevel>*)
                eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](
                    (vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>*)&field_80, 0);
            this_00 =
                (shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>*)
                    shared_ptr<BuiltTerrainLevel>::operator->(psVar5);
            this_01 = (vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>*)
                shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>,
                                         eastl::allocator>>::operator*(this_00);
            this_02 = (vector<graphics::GridGroup, eastl::allocator>*)
                eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>::operator[](
                    this_01, (long)((sVar1 + 16383) / iVar3 + 1));
            this_03 = (GridGroup*)eastl::vector<graphics::GridGroup, eastl::allocator>::operator[](
                this_02, (long)((sVar2 + 16383) / iVar3 + 1));
            lVar6 = this_03->GetGridTileWater();
            if (lVar6 != 0) {
                psVar5 = (shared_ptr<BuiltTerrainLevel>*)
                    eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](
                        (vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>*)&field_80, 0);
                lVar7 = shared_ptr<BuiltTerrainLevel>::operator->(psVar5);
                pvVar8 = (vector*)
                    shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::operator*(
                        (shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>*)(lVar7 +
                                                                                                             32));
                iVar4 = GetInterpolatedValue(this, pvVar8, sVar1 + 16383, sVar2 + 16383);
                if (*(short*)(param_1 + lVar9 + -2) < iVar4) {
                    return lVar6;
                }
            }
            lVar9 = lVar9 + 36;
        } while (lVar9 != 112);
        return 0;
    }

    // 0x10062a6e0, 96 bytes, placed by class name
    // BuildTerrainWorker::GetTriangleWaterOverlapTypes(eastl::fixed_vector<BuildTerrainWorker::WaterOverlapData, 8ul, true, eastl::allocator>&, graphics::TerrainPatchVertex const*)
    void BuildTerrainWorker::GetTriangleWaterOverlapTypes(fixed_vector* param_1, TerrainPatchVertex* param_2) {
        long lVar1;
        TerrainPatchVertex* pTVar2;

        pTVar2 = param_2 + 4;
        lVar1 = 0;
        do {
            GetVertexWaterOverlapTypes(this, (int)*(short*)(pTVar2 + -4) + 16383, (int)*(short*)pTVar2 + 16383,
                                       (int)lVar1, param_1);
            lVar1 = lVar1 + 1;
            pTVar2 = pTVar2 + 36;
        } while (lVar1 != 3);
    }

    // 0x10062a740, 304 bytes, placed by class name
    // BuildTerrainWorker::AllocWaterGeometry(eastl::fixed_vector<BuildTerrainWorker::WaterOverlapData, 8ul, true, eastl::allocator> const&, eastl::fixed_map<int, shared_ptr<BuildTerrainResultWaterData>, 8ul, true, eastl::less<int>, eastl::allocator>&, unsigned long)
    void BuildTerrainWorker::AllocWaterGeometry(fixed_vector* param_1, fixed_map* param_2, ulong param_3) {
        int* piVar1;
        type* this_00;
        type* ptVar2;
        long lVar3;
        vector<unsigned short, eastl::allocator>* this_01;
        pair local_70[16];
        shared_ptr local_60;
        _func_decltype_nullptr* local_48;
        int* local_38;

        piVar1 = (int*)param_1->HeapBeginPtr();
        local_38 = (int*)param_1->end();
        if (piVar1 != local_38) {
            do {
                local_48 = (_func_decltype_nullptr*)0;
                eastl::pair<int const, shared_ptr<BuildTerrainResultWaterData>>::pair<decltype(nullptr), void>(
                    (pair<int const, shared_ptr<BuildTerrainResultWaterData>>*)&local_60, piVar1, &local_48);
                eastl::rbtree<int, eastl::pair<int const, shared_ptr<BuildTerrainResultWaterData>>, eastl::less<int>,
                              eastl::fixed_node_allocator<56ul, 8ul, 8ul, 0ul, true, eastl::allocator>,
                              eastl::use_first<eastl::pair<int const, shared_ptr<BuildTerrainResultWaterData>>>, true,
                              true>::insert(local_70);
                local_60.~pair();
                this_00 =
                    eastl::get<0ul,
                               eastl::rbtree_iterator<eastl::pair<int const, shared_ptr<BuildTerrainResultWaterData>>,
                                                      eastl::pair<int const, shared_ptr<BuildTerrainResultWaterData>>*,
                                                      eastl::pair<int const, shared_ptr<BuildTerrainResultWaterData>>&>,
                               bool>((eastl*)local_70, (pair*)param_2);
                ptVar2 =
                    eastl::get<1ul,
                               eastl::rbtree_iterator<eastl::pair<int const, shared_ptr<BuildTerrainResultWaterData>>,
                                                      eastl::pair<int const, shared_ptr<BuildTerrainResultWaterData>>*,
                                                      eastl::pair<int const, shared_ptr<BuildTerrainResultWaterData>>&>,
                               bool>((eastl*)local_70, (pair*)param_2);
                if (*ptVar2 != (type)0) {
                    MakeSharedPool<BuildTerrainResultWaterData, 32>::MakeShared<>(
                        &local_60, (MakeSharedPool<BuildTerrainResultWaterData, 32>*)param_2);
                    lVar3 = shared_ptr<BuildTerrainResultWaterData>::operator->(
                        (shared_ptr<BuildTerrainResultWaterData>*)&local_60);
                    ((lVar3 + 32))->reserve(param_3);
                    this_01 =
                        (vector<unsigned short, eastl::allocator>*)shared_ptr<BuildTerrainResultWaterData>::operator->(
                            (shared_ptr<BuildTerrainResultWaterData>*)&local_60);
                    eastl::vector<unsigned short, eastl::allocator>::reserve(this_01, param_3);
                    lVar3 = eastl::rbtree_iterator<
                        eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                        eastl::pair<unsigned int const,
                                    eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
                    operator*(
                        (rbtree_iterator<eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                                         eastl::pair<unsigned int const,
                                                     eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                            this_00);
                    shared_ptr<BuildTerrainResultWaterData>::operator=(
                        (shared_ptr<BuildTerrainResultWaterData>*)(lVar3 + 8), &local_60);
                    local_60.~shared_ptr();
                }
                piVar1 = piVar1 + 2;
            } while (piVar1 != local_38);
        }
    }

    // 0x10062a880, 208 bytes, placed by class name
    // BuildTerrainWorker::GatherTriangleFlow(std::array<math::Vector2T<float>, 3ul>&, std::array<math::Vector2T<float>, 3ul>&, graphics::TerrainPatchVertex const*)
    /* BuildTerrainWorker::GatherTriangleFlow(std::array<math::Vector2T<float>, 3ul>&,
   std::array<math::Vector2T<float>, 3ul>&, graphics::TerrainPatchVertex const*) */

    void BuildTerrainWorker::GatherTriangleFlow(array* param_1, array* param_2, TerrainPatchVertex* param_3) {
        short sVar1;
        short sVar2;
        Vector2T<float>* pVVar3;
        ulong uVar4;
        TerrainPatchVertex* pTVar5;
        undefined8 local_38;

        pTVar5 = param_3 + 4;
        uVar4 = 0;
        do {
            sVar1 = *(short*)(pTVar5 + -4);
            sVar2 = *(short*)pTVar5;
            local_38 = GetWaterFlowDirection(this, (int)sVar1 + 16383U, (int)sVar2 + 16383U);
            pVVar3 = (Vector2T<float>*)std::array<math::Vector2T<float>, 3ul>::operator[](
                (array<math::Vector2T<float>, 3ul>*)param_1, uVar4);
            math::Vector2T<float>::operator=(pVVar3, (Vector2T*)&local_38);
            local_38 = GetWaterFlowNoise(this, (int)sVar1 + 16383U, (int)sVar2 + 16383U, (Vector2T*)pVVar3);
            pVVar3 = (Vector2T<float>*)std::array<math::Vector2T<float>, 3ul>::operator[](
                (array<math::Vector2T<float>, 3ul>*)param_2, uVar4);
            math::Vector2T<float>::operator=(pVVar3, (Vector2T*)&local_38);
            uVar4 = uVar4 + 1;
            pTVar5 = pTVar5 + 36;
        } while (uVar4 != 3);
    }

    // 0x10062a950, 352 bytes, placed by class name
    // BuildTerrainWorker::GetInterpolatedValue(eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>&, int, int)
    undefined1[16] BuildTerrainWorker::GetInterpolatedValue(vector* param_1, int param_2, int param_3) {
        long lVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        uint uVar5;
        vector<unsigned int, eastl::allocator>* this_00;
        vector<int, eastl::allocator>* this_01;
        int* piVar6;
        int iVar7;
        int iVar8;
        uint uVar9;
        undefined1 auVar10[16];

        iVar7 = (int)(64 / (ulong)field_40) * 128;
        iVar3 = param_2 / iVar7;
        if (iVar3 < 0) {
            iVar3 = -1;
        }
        iVar4 = param_1->size();
        iVar8 = iVar3 + 1;
        iVar2 = iVar3 + 2;
        if (iVar4 <= iVar3 + 2) {
            iVar8 = iVar4 + -1;
            iVar2 = iVar4 + -1;
        }
        this_00 = (vector<unsigned int, eastl::allocator>*)
            eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)param_1, (long)iVar8);
        this_01 = (vector<int, eastl::allocator>*)
            eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)param_1, (long)iVar2);
        iVar3 = -1;
        if (-1 < param_3 / iVar7) {
            iVar3 = param_3 / iVar7;
        }
        iVar4 = eastl::vector<unsigned int, eastl::allocator>::size(this_00);
        iVar8 = iVar3 + 1;
        iVar2 = iVar3 + 2;
        if (iVar4 <= iVar3 + 2) {
            iVar8 = iVar4 + -1;
            iVar2 = iVar4 + -1;
        }
        uVar9 = param_2 & iVar7 - 1U;
        uVar5 = iVar7 - 1U & param_3;
        piVar6 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)this_00,
                                                                        (long)iVar8);
        iVar3 = *piVar6;
        piVar6 = (int*)eastl::vector<int, eastl::allocator>::operator[](this_01, (long)iVar8);
        iVar8 = *piVar6;
        piVar6 = (int*)eastl::vector<int, eastl::allocator>::operator[]((vector<int, eastl::allocator>*)this_00,
                                                                        (long)iVar2);
        iVar4 = *piVar6;
        piVar6 = (int*)eastl::vector<int, eastl::allocator>::operator[](this_01, (long)iVar2);
        lVar1 = (long)(int)(((int)(uVar9 * *piVar6 + (iVar7 - uVar9) * iVar4) / iVar7) * uVar5 +
                            (iVar7 - uVar5) * ((int)(iVar8 * uVar9 + iVar3 * (iVar7 - uVar9)) / iVar7));
        auVar10._0_8_ = lVar1 / (long)iVar7 & 4294967295;
        auVar10._8_8_ = lVar1 % (long)iVar7 & 4294967295;
        return auVar10;
    }

    // 0x10062ab00, 240 bytes, placed by class name
    // BuildTerrainWorker::SetWaterVertexFlowData(graphics::WaterPatchVertex&, int, std::array<math::Vector2T<float>, 3ul>&, std::array<math::Vector2T<float>, 3ul>&)
    /* BuildTerrainWorker::SetWaterVertexFlowData(graphics::WaterPatchVertex&, int,
   std::array<math::Vector2T<float>, 3ul>&, std::array<math::Vector2T<float>, 3ul>&) */

    void BuildTerrainWorker::SetWaterVertexFlowData(WaterPatchVertex* param_1, int param_2, array* param_3,
                                                    array* param_4) {
        float fVar1;
        float* pfVar2;
        undefined2* puVar3;
        undefined1* puVar4;
        ulong uVar5;

        uVar5 = 0;
        do {
            pfVar2 = (float*)std::array<math::Vector2T<float>, 3ul>::operator[](
                (array<math::Vector2T<float>, 3ul>*)param_3, uVar5);
            fVar1 = *pfVar2;
            puVar3 = (undefined2*)std::array<math::Vector2T<short>, 3ul>::operator[](
                (array<math::Vector2T<short>, 3ul>*)&param_1->field_12, uVar5);
            *puVar3 = (short)(int)(fVar1 * 2047.0);
            puVar3[1] = (short)(int)(pfVar2[1] * 2047.0);
            pfVar2 = (float*)std::array<math::Vector2T<float>, 3ul>::operator[](
                (array<math::Vector2T<float>, 3ul>*)param_4, uVar5);
            fVar1 = *pfVar2;
            puVar4 = (undefined1*)std::array<math::Vector2T<signed char>, 3ul>::operator[](
                (array<math::Vector2T<signed char>, 3ul>*)&param_1->field_24, uVar5);
            *puVar4 = (char)(int)(fVar1 * 127.0);
            puVar4[1] = (char)(int)(pfVar2[1] * 127.0);
            uVar5 = uVar5 + 1;
        } while (uVar5 != 3);
        param_1->field_30 = (char)param_2;
    }

    // 0x10062af80, 304 bytes, placed by class name
    // BuildTerrainWorker::GetWaterFlowDirection(unsigned int, unsigned int)
    undefined8 BuildTerrainWorker::GetWaterFlowDirection(uint param_1, uint param_2) {
        char cVar1;
        long lVar3;
        Layout* this_00;
        WaterPatchConfig* this_01;
        WaterPatchConfig* pWVar4;
        int iVar5;
        undefined8 uVar6;
        undefined8 local_40;
        float local_38;
        float fStack_34;

        cVar1 = IsTileEdge(this, param_1, param_2);
        if (cVar1 == '\0') {
            new (&local_38) math::Point<float>(0.0, 0.0);
            lVar3 = field_8->end();
            if (((lVar3 + 32))->operator_cast_to_bool()) {
                this_00 = (Layout*)shared_ptr<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>::operator*(
                    (shared_ptr<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>*)(lVar3 + 32));
                this_01 = (WaterPatchConfig*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(this_00);
                pWVar4 = (WaterPatchConfig*)this_00->end();
                if (this_01 == pWVar4) {
                    iVar5 = 0;
                } else {
                    iVar5 = 0;
                    do {
                        cVar1 = this_01->IsPointInside(param_1, param_2, 0.0);
                        if ((cVar1 != '\0') && ((*(float*)&this_01->field_40 != 0.0 ||
                                                 (*(float*)((long)&this_01->field_40 + 4) != 0.0)))) {
                            local_38 = *(float*)&this_01->field_40 + local_38;
                            fStack_34 = fStack_34 + *(float*)((long)&this_01->field_40 + 4);
                            iVar5 = iVar5 + 1;
                        }
                        this_01 = this_01 + 1;
                    } while (this_01 != pWVar4);
                }
                if (1 < iVar5) {
                    local_40 = math::operator/((Vector2T*)&local_38, (float)iVar5);
                    math::Vector2T<float>::operator=((Vector2T<float>*)&local_38, (Vector2T*)&local_40);
                }
            }
            uVar6 = CONCAT44(fStack_34, local_38);
        } else {
            uVar6 = *(undefined8*)PTR_ZERO_100ee66a8;
        }
        return uVar6;
    }

    // 0x10062b0c0, 272 bytes, placed by class name
    // BuildTerrainWorker::GetWaterFlowNoise(unsigned int, unsigned int, math::Vector2T<float> const&)
    undefined8 BuildTerrainWorker::GetWaterFlowNoise(uint param_1, uint param_2, Vector2T* param_3) {
        int extraout_EDX;
        int extraout_EDX_00;
        float fVar2;
        double dVar3;
        undefined8 local_50;
        undefined8 local_48;
        float local_40[3];
        float local_34;
        float local_30;
        float local_2c;
        float local_28;
        float local_24;

        if (IsTileEdge(this, param_1, param_2) == '\0') {
            dVar3 = (double)((ulong)param_2)->Noise2d(param_1, extraout_EDX);
            local_2c = (float)dVar3 * 0.75 + 0.25;
            dVar3 = (double)((ulong)param_1)->Noise2d(param_2, extraout_EDX_00);
            local_24 = (float)dVar3 * 6.2831855;
            local_28 = (float)::cos(local_24);
            fVar2 = (float)::sin(local_24);
            new (local_40) math::Point<float>(local_28, fVar2);
            local_50 = math::operator*(local_2c, (Vector2T*)local_40);
            local_40[0] = (float)param_3->Length();
            local_40[0] = local_40[0] * 0.75;
            local_34 = 0.0;
            local_30 = 1.0;
            fVar2 = math::Clamp<float>(local_40, &local_34, &local_30);
            local_48 = math::operator*(1.0 - fVar2, (Vector2T*)&local_50);
        } else {
            new (&local_48) math::Vector2T<float>(0.0);
        }
        return local_48;
    }

    // 0x10062b1f0, 64 bytes, placed by class name
    // BuildTerrainWorker::GetSourceLookup(unsigned int) const
    int BuildTerrainWorker::GetSourceLookup(uint param_1) {
        int iVar1;

        iVar1 = 0;
        if (param_1 != 0) {
            if (param_1 == 1) {
                return 1;
            }
            if (field_40 == param_1) {
                return 64;
            }
            if (field_40 + 1 == param_1) {
                return 65;
            }
            iVar1 = (param_1 - 1) * field_44 + 1;
        }
        return iVar1;
    }

    // 0x10062b440, 368 bytes, placed by class name
    // BuildTerrainWorker::DecodeHeightCode(int, unsigned int, unsigned int, unsigned char, bool) const
    int BuildTerrainWorker::DecodeHeightCode(int param_1, uint param_2, uint param_3, uchar param_4, bool param_5) {
        int iVar1;
        bool bVar2;
        undefined8 in_RAX;
        shared_ptr* psVar3;
        shared_ptr<BuiltTerrainLevel>* this_00;
        long lVar4;
        vector<eastl::vector<int, eastl::allocator>, eastl::allocator>* this_01;
        vector<int, eastl::allocator>* this_02;
        int* piVar5;
        int iVar6;
        undefined3 in_register_00000081;
        int local_38;
        int local_34;

        if (CONCAT31(in_register_00000081, param_4) == 0) {
            iVar6 = 0;
            if (!param_5) {
                local_34 = (int)((ulong)in_RAX >> 32);
                if (param_1 < 1) {
                    iVar6 = 960;
                } else {
                    iVar6 = 960;
                    do {
                        local_38 = param_1 + -1;
                        bVar2 = ArrayValidPosition<
                            eastl::fixed_vector<shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>,
                                                                         eastl::allocator>>,
                                                4ul, true, eastl::allocator>,
                            int>((fixed_vector*)&field_80, &local_38);
                        if (bVar2) {
                            psVar3 =
                                (shared_ptr*)eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](
                                    (vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>*)&field_80,
                                    (long)local_38);
                            bVar2 = shared_ptr::operator_cast_to_bool(psVar3);
                            if (bVar2) {
                                iVar1 = local_38;
                                goto LAB_10062b54e;
                            }
                        }
                        iVar6 = iVar6 + 960;
                        param_1 = local_38;
                    } while (0 < local_38);
                }
            }
        } else if (param_5) {
            iVar6 = CONCAT31(in_register_00000081, param_4) << 5;
        } else {
            if (param_4 == '\x01') {
                param_4 = 0;
            }
            local_38 = (int)in_RAX;
            iVar6 = (uint)param_4 << 5;
            if (0 < param_1) {
                do {
                    local_34 = param_1 + -1;
                    bVar2 = ArrayValidPosition<
                        eastl::fixed_vector<
                            shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>,
                            4ul, true, eastl::allocator>,
                        int>((fixed_vector*)&field_80, &local_34);
                    if (bVar2) {
                        psVar3 =
                            (shared_ptr*)eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](
                                (vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>*)&field_80, (long)local_34);
                        bVar2 = shared_ptr::operator_cast_to_bool(psVar3);
                        if (bVar2) {
                            iVar1 = local_34;
                        LAB_10062b54e:
                            this_00 = (shared_ptr<BuiltTerrainLevel>*)
                                eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](
                                    (vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>*)&field_80, (long)iVar1);
                            lVar4 = shared_ptr<BuiltTerrainLevel>::operator->(this_00);
                            this_01 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)
                                shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::
                                operator*((shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>,
                                                                    eastl::allocator>>*)(lVar4 +
                                                                                         (ulong)((long)iVar1 < 1) * 16 +
                                                                                         16));
                            this_02 = (vector<int, eastl::allocator>*)
                                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                                    this_01, (ulong)param_2);
                            piVar5 = (int*)eastl::vector<int, eastl::allocator>::operator[](this_02, (ulong)param_3);
                            return iVar6 + *piVar5;
                        }
                    }
                    iVar6 = iVar6 + 960;
                    param_1 = local_34;
                } while (0 < local_34);
            }
        }
        return iVar6;
    }

    // 0x10062b5f0, 240 bytes, placed by class name
    // BuildTerrainWorker::GetUnderlay(int) const
    shared_ptr* BuildTerrainWorker::GetUnderlay(int param_1) {
        bool bVar1;
        undefined8 in_RAX;
        long lVar3;
        shared_ptr* this_00;
        shared_ptr* psVar4;
        GameToken* this_01;
        undefined8 uVar5;
        shared_ptr* this_02;
        char cVar6;
        undefined4 uVar7;

        lVar3 = field_8->end();
        this_02 = (shared_ptr*)(lVar3 + 128);
        this_00 = (shared_ptr*)this_02->HeapBeginPtr();
        psVar4 = (shared_ptr*)this_02->end();
        uVar7 = (undefined4)((ulong)in_RAX >> 32);
        for (; cVar6 = '\x02', this_00 != psVar4; this_00 = this_00 + 1) {
            bVar1 = shared_ptr::operator_cast_to_bool(this_00);
            cVar6 = '\x03';
            if (bVar1) {
                this_01 =
                    (GameToken*)shared_ptr<FloorUnderlayType>::operator->((shared_ptr<FloorUnderlayType>*)this_00);
                cVar6 = this_01->GetStatus() == param_1;
                if ((bool)cVar6) {
                    this_02 = this_00;
                }
            }
            uVar7 = (undefined4)((ulong)in_RAX >> 32);
            if ((cVar6 != '\x03') && (cVar6 != '\0'))
                break;
        }
        if (cVar6 == '\x02') {
            uVar5 = logger::default_logger();
            logger::Logger::Log(uVar5, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "assetbuilder/jobs/buildterrain/BuildTerrainWorker.cpp",
                                543, "BuildTerrainWorker: Failed to find underlay in provided config: %i",
                                CONCAT44(uVar7, param_1));
            this_02 = (shared_ptr*)&NullFloorUnderlayType;
        }
        return this_02;
    }

    // 0x10062b6e0, 240 bytes, placed by class name
    // BuildTerrainWorker::GetOverlay(int) const
    shared_ptr* BuildTerrainWorker::GetOverlay(int param_1) {
        bool bVar1;
        undefined8 in_RAX;
        long lVar3;
        shared_ptr* this_00;
        shared_ptr* psVar4;
        GameToken* this_01;
        undefined8 uVar5;
        shared_ptr* this_02;
        char cVar6;
        undefined4 uVar7;

        lVar3 = field_8->end();
        this_02 = (shared_ptr*)(lVar3 + 96);
        this_00 = (shared_ptr*)this_02->HeapBeginPtr();
        psVar4 = (shared_ptr*)this_02->end();
        uVar7 = (undefined4)((ulong)in_RAX >> 32);
        for (; cVar6 = '\x02', this_00 != psVar4; this_00 = this_00 + 1) {
            bVar1 = shared_ptr::operator_cast_to_bool(this_00);
            cVar6 = '\x03';
            if (bVar1) {
                this_01 = (GameToken*)shared_ptr<FloorOverlayType>::operator->((shared_ptr<FloorOverlayType>*)this_00);
                cVar6 = this_01->GetStatus() == param_1;
                if ((bool)cVar6) {
                    this_02 = this_00;
                }
            }
            uVar7 = (undefined4)((ulong)in_RAX >> 32);
            if ((cVar6 != '\x03') && (cVar6 != '\0'))
                break;
        }
        if (cVar6 == '\x02') {
            uVar5 = logger::default_logger();
            logger::Logger::Log(uVar5, 0, 8,
                                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                                "assetbuilder/jobs/buildterrain/BuildTerrainWorker.cpp",
                                561, "BuildTerrainWorker: Failed to find overlay in provided config: %i",
                                CONCAT44(uVar7, param_1));
            this_02 = (shared_ptr*)&NullFloorOverlayType;
        }
        return this_02;
    }

    // 0x10062b7d0, 112 bytes, placed by class name
    // BuildTerrainWorker::GetMaterial(int)
    undefined8 BuildTerrainWorker::GetMaterial(int param_1) {
        long lVar2;
        long lVar3;
        int local_1c;

        local_1c = param_1;
        if (field_8->operator_cast_to_bool()) {
            lVar2 = field_8->end();
            lVar3 = ((lVar2 + 168))->find(&local_1c);
            lVar2 = ((lVar2 + 168))->end();
            if (lVar3 != lVar2) {
                return *(undefined8*)(lVar3 + 8);
            }
        }
        return 0;
    }

    // 0x10062b840, 368 bytes, placed by class name
    // BuildTerrainWorker::AssignUnderlay(shared_ptr<FloorUnderlayType> const&, graphics::GridTile&, unsigned short)
    ulong BuildTerrainWorker::AssignUnderlay(shared_ptr* param_1, GridTile* param_2, ushort param_3) {
        char cVar1;
        byte bVar2;
        byte bVar3;
        undefined1 uVar4;
        int iVar5;
        MSIType* this_00;
        GeometryBatch* this_01;
        FloorOverlayType* this_02;
        FloorUnderlayType* this_03;
        uint uVar7;
        uint uVar8;

        this_00 = (MSIType*)shared_ptr<FloorUnderlayType>::operator->((shared_ptr<FloorUnderlayType>*)param_1);
        iVar5 = this_00->GetTint();
        if (iVar5 == -1) {
            this_01 = (GeometryBatch*)0;
        } else {
            this_01 = (GeometryBatch*)GetMaterial(this, iVar5);
        }
        uVar7 = (param_3 & 127) * 38258 >> 16;
        uVar7 = math::RunetekColour::HSLToRGB(param_3 & 65408 |
                                              (ushort)((((param_3 & 127) * 74 - uVar7 & 65535) >> 1) + uVar7 >> 6));
        uVar8 = uVar7 << 8 | 255;
        *(uint*)((long)&param_2->field_12 + 4) = uVar8;
        if (this_01 != (GeometryBatch*)0) {
            cVar1 = this_01->HasFaceTransparency();
            if (cVar1 != '\0') {
                cVar1 = this_01->IsRT7();
                if (cVar1 == '\0') {
                    bVar2 = this_01->GetLegacyWhiteness();
                } else {
                    bVar2 = this_01->GetVertexColourStrengthAsWhiteness();
                }
                cVar1 = this_01->IsRT7();
                if (cVar1 == '\0') {
                    bVar3 = this_01->GetLegacyBrightness();
                } else {
                    bVar3 = 0;
                }
                uVar8 = math::ApplyOffsetToFaceColour(uVar7 & 16777215, 74, (uint)bVar2, (uint)bVar3) << 8 | 255;
                uVar4 = this_01->HasEmissiveMap();
                *(undefined1*)((long)&param_2->field_32 + 4) = uVar4;
                *(byte*)((long)&param_2->field_32 + 6) = bVar2;
                *(byte*)((long)&param_2->field_32 + 7) = bVar3;
            }
        }
        *(uint*)&param_2->field_12 = uVar8;
        param_2->field_0 = iVar5;
        this_02 = (FloorOverlayType*)shared_ptr<FloorUnderlayType>::operator->((shared_ptr<FloorUnderlayType>*)param_1);
        param_2->field_8 = this_02->GetTextureScale();
        *(undefined4*)&param_2->field_32 = 0;
        this_03 =
            (FloorUnderlayType*)shared_ptr<FloorUnderlayType>::operator->((shared_ptr<FloorUnderlayType>*)param_1);
        uVar4 = this_03->GetBlendingEnabled();
        param_2->field_28 = uVar4;
        return CONCAT71((int7)((ulong)this_01 >> 8), iVar5 != -1) & 4294967295;
    }

    // 0x10062b9e0, 352 bytes, placed by class name
    // BuildTerrainWorker::AssignOverlay(shared_ptr<FloorOverlayType> const&, graphics::GridTile&)
    ulong BuildTerrainWorker::AssignOverlay(shared_ptr* param_1, GridTile* param_2) {
        char cVar1;
        byte bVar2;
        byte bVar3;
        undefined1 uVar4;
        int iVar5;
        uint uVar6;
        int iVar7;
        MSIType* pMVar8;
        GeometryBatch* this_00;
        FloorOverlayType* pFVar9;
        TextRun* this_01;
        StaticPointLight* this_02;
        undefined8 in_RCX;
        undefined4 uVar10;

        pMVar8 = (MSIType*)shared_ptr<FloorOverlayType>::operator->((shared_ptr<FloorOverlayType>*)param_1);
        iVar5 = pMVar8->GetTint();
        if (iVar5 == -1) {
            this_00 = (GeometryBatch*)0;
        } else {
            this_00 = (GeometryBatch*)GetMaterial(this, iVar5);
        }
        pMVar8 = (MSIType*)shared_ptr<FloorOverlayType>::operator->((shared_ptr<FloorOverlayType>*)param_1);
        uVar6 = pMVar8->GetSpriteID();
        *(uint*)((long)&param_2->field_12 + 4) = uVar6;
        if (this_00 != (GeometryBatch*)0) {
            cVar1 = this_00->HasFaceTransparency();
            if (cVar1 != '\0') {
                cVar1 = this_00->IsRT7();
                if (cVar1 == '\0') {
                    bVar2 = this_00->GetLegacyWhiteness();
                } else {
                    bVar2 = this_00->GetVertexColourStrengthAsWhiteness();
                }
                cVar1 = this_00->IsRT7();
                if (cVar1 == '\0') {
                    bVar3 = this_00->GetLegacyBrightness();
                } else {
                    bVar3 = 0;
                }
                in_RCX = 0;
                iVar7 = math::ApplyOffsetToFaceColour(uVar6 >> 8, 74, (uint)bVar2, (uint)bVar3);
                uVar6 = uVar6 & 255 | iVar7 << 8;
                uVar4 = this_00->HasEmissiveMap();
                *(undefined1*)((long)&param_2->field_32 + 4) = uVar4;
                *(byte*)((long)&param_2->field_32 + 6) = bVar2;
                *(byte*)((long)&param_2->field_32 + 7) = bVar3;
            }
        }
        *(uint*)&param_2->field_12 = uVar6;
        param_2->field_0 = iVar5;
        pFVar9 = (FloorOverlayType*)shared_ptr<FloorOverlayType>::operator->((shared_ptr<FloorOverlayType>*)param_1);
        uVar10 = pFVar9->GetTextureScale();
        param_2->field_8 = uVar10;
        this_01 = (TextRun*)shared_ptr<FloorOverlayType>::operator->((shared_ptr<FloorOverlayType>*)param_1);
        uVar10 = this_01->GetWrapMode();
        *(undefined4*)&param_2->field_32 = uVar10;
        pFVar9 = (FloorOverlayType*)shared_ptr<FloorOverlayType>::operator->((shared_ptr<FloorOverlayType>*)param_1);
        cVar1 = pFVar9->GetBlendingEnabled();
        if (cVar1 == '\0') {
            uVar4 = 0;
        } else {
            this_02 =
                (StaticPointLight*)shared_ptr<FloorOverlayType>::operator->((shared_ptr<FloorOverlayType>*)param_1);
            uVar4 = this_02->GetUseTerrainHeight();
        }
        param_2->field_28 = uVar4;
        return CONCAT71((int7)((ulong)in_RCX >> 8), iVar5 != -1) & 4294967295;
    }

    // 0x10062bb50, 64 bytes, placed by class name
    // BuildTerrainWorker::IsTileEdge(unsigned int, unsigned int) const
    undefined1[16] BuildTerrainWorker::IsTileEdge(uint param_1, uint param_2) {
        ulong uVar1;
        undefined8 uVar2;
        ulong uVar3;
        uint uVar4;
        undefined1 auVar5[16];

        uVar4 = (int)(64 / (ulong)field_40) * 128;
        uVar3 = (ulong)param_1 / (ulong)uVar4;
        uVar2 = CONCAT71((int7)(uVar3 >> 8), 1);
        if (((uVar4 <= param_1) && ((int)uVar3 != 64)) && (uVar4 <= param_2)) {
            uVar1 = (ulong)param_2 / (ulong)uVar4;
            uVar3 = (ulong)param_2 % (ulong)uVar4;
            uVar2 = CONCAT71((int7)(uVar1 >> 8), (int)uVar1 == 64);
        }
        auVar5._8_8_ = uVar3;
        auVar5._0_8_ = uVar2;
        return auVar5;
    }

    // 0x10062bbb0, 352 bytes, placed by class name
    // BuildTerrainWorker::GetWaterColour(unsigned int, unsigned int) const
    undefined8 BuildTerrainWorker::GetWaterColour(uint param_1, uint param_2) {
        char cVar1;
        long lVar3;
        Layout* this_00;
        WaterPatchConfig* this_01;
        WaterPatchConfig* pWVar4;
        int iVar5;
        undefined8 local_50;
        undefined4 local_48;
        undefined8 local_40[2];

        cVar1 = IsTileEdge(this, param_1, param_2);
        if (cVar1 == '\0') {
            local_48 = *(undefined4*)(PTR_ONE_100ee66d8 + 8);
            local_50 = *(undefined8*)PTR_ONE_100ee66d8;
            lVar3 = field_8->end();
            if (((lVar3 + 32))->operator_cast_to_bool()) {
                this_00 = (Layout*)shared_ptr<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>::operator*(
                    (shared_ptr<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>*)(lVar3 + 32));
                this_01 = (WaterPatchConfig*)eastl::basic_string<
                    char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                        eastl::allocator>>::Layout::HeapBeginPtr(this_00);
                pWVar4 = (WaterPatchConfig*)this_00->end();
                if (this_01 == pWVar4) {
                    iVar5 = 0;
                } else {
                    iVar5 = 0;
                    do {
                        cVar1 = this_01->IsPointInside(param_1, param_2, 0.0);
                        if (cVar1 != '\0') {
                            if (iVar5 == 0) {
                                local_40[0] = math::Colour3FromR8G8B8A8(*(uint*)((long)&this_01->field_460 + 4));
                                local_50.SetXYZ(local_40);
                            } else {
                                local_40[0] = math::Colour3FromR8G8B8A8(*(uint*)((long)&this_01->field_460 + 4));
                                math::Vector3T<float>::operator+=((Vector3T<float>*)&local_50, (Vector3T*)local_40);
                            }
                            iVar5 = iVar5 + 1;
                        }
                        this_01 = this_01 + 1;
                    } while (this_01 != pWVar4);
                }
                if (1 < iVar5) {
                    local_40[0] = math::operator/((Vector3T*)&local_50, (float)iVar5);
                    local_50.SetXYZ(local_40);
                }
            }
        } else {
            local_50 = *(undefined8*)PTR_ONE_100ee66d8;
        }
        return local_50;
    }

    // 0x10062bd10, 512 bytes, placed by class name
    // BuildTerrainWorker::GetVertexWaterOverlapTypes(unsigned int, unsigned int, int, eastl::fixed_vector<BuildTerrainWorker::WaterOverlapData, 8ul, true, eastl::allocator>&) const
    /* WARNING: Removing unreachable block (ram,4301438726) */
    /* BuildTerrainWorker::GetVertexWaterOverlapTypes(unsigned int, unsigned int, int,
   eastl::fixed_vector<BuildTerrainWorker::WaterOverlapData, 8ul, true,
   eastl::allocator>&) const */

    void BuildTerrainWorker::GetVertexWaterOverlapTypes(uint param_1, uint param_2, int param_3,
                                                        fixed_vector* param_4) {
        fixed_vector* pfVar1;
        bool bVar2;
        char cVar3;
        long lVar4;
        GameToken* this_00;
        Layout* this_01;
        WaterPatchConfig* this_02;
        WaterPatchConfig* pWVar5;
        int* piVar6;
        int* piVar7;
        bool bVar8;
        int* piVar9;
        byte bVar10;
        uint uVar11;
        WaterOverlapData local_58;
        WaterPatchConfig* local_50;
        uint local_38;
        int local_34;

        lVar4 = field_8->end();
        bVar2 = ((lVar4 + 48))->operator_cast_to_bool();
        local_34 = -1;
        if (bVar2) {
            this_00 = (GameToken*)shared_ptr<WaterType>::operator->((shared_ptr<WaterType>*)(lVar4 + 48));
            local_34 = this_00->GetStatus();
        }
        bVar2 = ((lVar4 + 32))->operator_cast_to_bool();
        if (bVar2) {
            uVar11 = 1 << ((byte)param_3 & 31);
            this_01 = (Layout*)shared_ptr<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>::operator*(
                (shared_ptr<eastl::vector<graphics::WaterPatchConfig, eastl::allocator>>*)(lVar4 + 32));
            this_02 = (WaterPatchConfig*)
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true, eastl::allocator>>::
                    Layout::HeapBeginPtr(this_01);
            pWVar5 = (WaterPatchConfig*)this_01->end();
            local_38 = uVar11 & 255;
            bVar2 = false;
            bVar10 = (byte)uVar11;
            if (this_02 != pWVar5) {
                local_50 = pWVar5;
                do {
                    cVar3 = this_02->IsPointInside(param_1, param_2, 0.0);
                    pfVar1 = param_4;
                    if (cVar3 != '\0') {
                        piVar6 = (int*)param_4->HeapBeginPtr();
                        piVar7 = (int*)pfVar1->end();
                        pWVar5 = local_50;
                        if (piVar6 == piVar7) {
                            bVar8 = false;
                        } else {
                            bVar8 = false;
                            do {
                                piVar9 = piVar6 + 2;
                                if (*piVar6 == this_02->field_0) {
                                    *(byte*)(piVar6 + 1) = *(byte*)(piVar6 + 1) | bVar10;
                                    bVar8 = true;
                                    break;
                                }
                                piVar6 = piVar9;
                            } while (piVar9 != piVar7);
                        }
                        bVar2 = true;
                        if (!bVar8) {
                            new (&local_58) WaterOverlapData(this_02->field_0, (uchar)local_38);
                            bVar2 = true;
                            param_4->push_back(&local_58);
                        }
                    }
                    this_02 = this_02 + 1;
                } while (this_02 != pWVar5);
            }
            pfVar1 = param_4;
            if (!bVar2) {
                piVar6 = (int*)param_4->HeapBeginPtr();
                piVar7 = (int*)pfVar1->end();
                if (piVar6 != piVar7) {
                    bVar2 = false;
                    do {
                        piVar9 = piVar6 + 2;
                        if (*piVar6 == local_34) {
                            *(byte*)(piVar6 + 1) = *(byte*)(piVar6 + 1) | bVar10;
                            bVar2 = true;
                            break;
                        }
                        piVar6 = piVar9;
                    } while (piVar9 != piVar7);
                    if (bVar2) {
                        return;
                    }
                }
                new (&local_58) WaterOverlapData(local_34, (uchar)local_38);
                param_4->push_back(&local_58);
            }
        }
    }

    // 0x10062bf50, 2000 bytes, placed by class name
    // BuildTerrainWorker::SetZonePerimeterHeight(int, int, int)
    void BuildTerrainWorker::SetZonePerimeterHeight(int param_1, int param_2, int param_3) {
        undefined1* this_00;
        int iVar1;
        bool bVar2;
        uint uVar3;
        uint uVar4;
        uint uVar5;
        uint uVar6;
        shared_ptr<BuiltTerrainLevel>* psVar7;
        long lVar8;
        vector<eastl::vector<int, eastl::allocator>, eastl::allocator>* this_01;
        ulong uVar9;
        ulong uVar10;
        vector<int, eastl::allocator>* pvVar11;
        int* piVar12;
        undefined4* puVar13;
        shared_ptr* psVar14;
        vector<eastl::vector<int, eastl::allocator>, eastl::allocator>* pvVar15;
        undefined4 uVar16;
        ulong uVar17;

        this_00 = &field_80;
        psVar7 =
            (shared_ptr<BuiltTerrainLevel>*)eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](
                (vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>*)this_00, (long)param_1);
        lVar8 = shared_ptr<BuiltTerrainLevel>::operator->(psVar7);
        this_01 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)
            shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::operator*(
                (shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>*)(lVar8 + 16));
        if (param_1 == 0) {
            psVar7 = (shared_ptr<BuiltTerrainLevel>*)
                eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](
                    (vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>*)this_00, 0);
            lVar8 = shared_ptr<BuiltTerrainLevel>::operator->(psVar7);
            pvVar15 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)((lVar8 + 32))->end();
        } else {
            pvVar15 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)0;
        }
        uVar3 = param_2 * 8;
        uVar9 = (ulong)uVar3;
        uVar4 = param_2 * 8 + 1;
        uVar5 = param_3 * 8;
        uVar10 = (ulong)uVar5;
        if (0 < param_2) {
            if ((uVar5 | 2) < uVar5 + 9) {
                uVar17 = (ulong)(uVar5 | 2);
                do {
                    pvVar11 = (vector<int, eastl::allocator>*)
                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01,
                                                                                                          uVar9);
                    piVar12 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, uVar17);
                    iVar1 = *piVar12;
                    pvVar11 = (vector<int, eastl::allocator>*)
                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01,
                                                                                                          (ulong)uVar4);
                    piVar12 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, uVar17);
                    *piVar12 = iVar1;
                    SetMapsquarePerimeterHeightGridGroup(this, param_1, uVar3, (int)uVar17, uVar4, (int)uVar17, iVar1,
                                                         -999);
                    if (pvVar15 != (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)0) {
                        pvVar11 = (vector<int, eastl::allocator>*)
                            eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](pvVar15,
                                                                                                              uVar9);
                        puVar13 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, uVar17);
                        uVar16 = *puVar13;
                        pvVar11 = (vector<int, eastl::allocator>*)
                            eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](
                                pvVar15, (ulong)uVar4);
                        puVar13 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, uVar17);
                        *puVar13 = uVar16;
                    }
                    lVar8 = (2 - (ulong)(uVar5 + 9)) + uVar17;
                    uVar17 = uVar17 + 1;
                } while (lVar8 != 1);
            }
        }
        uVar6 = param_3 * 8 + 1;
        if (0 < param_3) {
            if ((uVar3 | 2) < uVar3 + 9) {
                uVar17 = (ulong)(uVar3 | 2);
                do {
                    pvVar11 = (vector<int, eastl::allocator>*)
                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01,
                                                                                                          uVar17);
                    piVar12 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, uVar10);
                    iVar1 = *piVar12;
                    pvVar11 = (vector<int, eastl::allocator>*)
                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01,
                                                                                                          uVar17);
                    piVar12 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, (ulong)uVar6);
                    *piVar12 = iVar1;
                    SetMapsquarePerimeterHeightGridGroup(this, param_1, (int)uVar17, uVar5, (int)uVar17, uVar6, iVar1,
                                                         -999);
                    if (pvVar15 != (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)0) {
                        pvVar11 = (vector<int, eastl::allocator>*)
                            eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](pvVar15,
                                                                                                              uVar17);
                        puVar13 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, uVar10);
                        uVar16 = *puVar13;
                        pvVar11 = (vector<int, eastl::allocator>*)
                            eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](pvVar15,
                                                                                                              uVar17);
                        puVar13 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, (ulong)uVar6);
                        *puVar13 = uVar16;
                    }
                    lVar8 = (2 - (ulong)(uVar3 + 9)) + uVar17;
                    uVar17 = uVar17 + 1;
                } while (lVar8 != 1);
            }
        }
        if (param_2 < 0) {
            return;
        }
        if (param_3 < 0) {
            return;
        }
        if (param_1 != 0) {
            if (0 < param_2) {
                psVar14 = (shared_ptr*)eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](
                    (vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>*)this_00, (long)(param_1 + -1));
                bVar2 = shared_ptr::operator_cast_to_bool(psVar14);
                if (bVar2) {
                    pvVar11 = (vector<int, eastl::allocator>*)
                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01,
                                                                                                          uVar9);
                    piVar12 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, (ulong)uVar6);
                    iVar1 = *piVar12;
                    psVar7 = (shared_ptr<BuiltTerrainLevel>*)
                        eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](
                            (vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>*)this_00, (long)(param_1 + -1));
                    lVar8 = shared_ptr<BuiltTerrainLevel>::operator->(psVar7);
                    pvVar15 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)
                        shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::operator*(
                            (shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>*)(lVar8 +
                                                                                                                 16));
                    pvVar11 = (vector<int, eastl::allocator>*)
                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](pvVar15,
                                                                                                          uVar9);
                    piVar12 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, (ulong)uVar6);
                    if (iVar1 == *piVar12)
                        goto LAB_10062c293;
                }
                pvVar11 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01, uVar9);
                piVar12 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, (ulong)uVar6);
                iVar1 = *piVar12;
                pvVar11 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01,
                                                                                                      (ulong)uVar4);
                piVar12 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, (ulong)uVar6);
                *piVar12 = iVar1;
                uVar5 = uVar6;
                goto LAB_10062c626;
            }
        LAB_10062c293:
            if (param_3 < 1) {
            LAB_10062c321:
                if (param_2 < 1) {
                    return;
                }
                if (param_3 < 1) {
                    return;
                }
                psVar14 = (shared_ptr*)eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](
                    (vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>*)this_00, (long)(param_1 + -1));
                bVar2 = shared_ptr::operator_cast_to_bool(psVar14);
                if (bVar2) {
                    pvVar11 = (vector<int, eastl::allocator>*)
                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01,
                                                                                                          uVar9);
                    piVar12 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, uVar10);
                    iVar1 = *piVar12;
                    psVar7 = (shared_ptr<BuiltTerrainLevel>*)
                        eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](
                            (vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>*)this_00, (long)(param_1 + -1));
                    lVar8 = shared_ptr<BuiltTerrainLevel>::operator->(psVar7);
                    pvVar15 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)
                        shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::operator*(
                            (shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>*)(lVar8 +
                                                                                                                 16));
                    pvVar11 = (vector<int, eastl::allocator>*)
                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](pvVar15,
                                                                                                          uVar9);
                    piVar12 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, uVar10);
                    if (iVar1 == *piVar12) {
                        return;
                    }
                }
                pvVar11 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01, uVar9);
                piVar12 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, uVar10);
                iVar1 = *piVar12;
                pvVar11 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01,
                                                                                                      (ulong)uVar4);
                piVar12 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, (ulong)uVar6);
                *piVar12 = iVar1;
            } else {
                psVar14 = (shared_ptr*)eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](
                    (vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>*)this_00, (long)(param_1 + -1));
                bVar2 = shared_ptr::operator_cast_to_bool(psVar14);
                if (bVar2) {
                    pvVar11 = (vector<int, eastl::allocator>*)
                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01,
                                                                                                          (ulong)uVar4);
                    piVar12 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, uVar10);
                    iVar1 = *piVar12;
                    psVar7 = (shared_ptr<BuiltTerrainLevel>*)
                        eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](
                            (vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>*)this_00, (long)(param_1 + -1));
                    lVar8 = shared_ptr<BuiltTerrainLevel>::operator->(psVar7);
                    pvVar15 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)
                        shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::operator*(
                            (shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>*)(lVar8 +
                                                                                                                 16));
                    pvVar11 = (vector<int, eastl::allocator>*)
                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](pvVar15,
                                                                                                          (ulong)uVar4);
                    piVar12 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, uVar10);
                    if (iVar1 == *piVar12)
                        goto LAB_10062c321;
                }
                pvVar11 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01,
                                                                                                      (ulong)uVar4);
                piVar12 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, uVar10);
                iVar1 = *piVar12;
                pvVar11 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01,
                                                                                                      (ulong)uVar4);
                piVar12 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, (ulong)uVar6);
                *piVar12 = iVar1;
                uVar3 = uVar4;
            }
        LAB_10062c626:
            SetMapsquarePerimeterHeightGridGroup(this, param_1, uVar3, uVar5, uVar4, uVar6, iVar1, -999);
            return;
        }
        if (param_2 < 1) {
        LAB_10062c506:
            if (0 < param_3) {
                uVar17 = (ulong)uVar4;
                pvVar11 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01, uVar17);
                piVar12 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, uVar10);
                if (*piVar12 != 0) {
                    pvVar11 = (vector<int, eastl::allocator>*)
                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01,
                                                                                                          uVar17);
                    piVar12 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, uVar10);
                    iVar1 = *piVar12;
                    pvVar11 = (vector<int, eastl::allocator>*)
                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01,
                                                                                                          uVar17);
                    piVar12 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, (ulong)uVar6);
                    *piVar12 = iVar1;
                    SetMapsquarePerimeterHeightGridGroup(this, 0, uVar4, uVar5, uVar4, uVar6, iVar1, -999);
                    pvVar11 = (vector<int, eastl::allocator>*)
                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](pvVar15,
                                                                                                          uVar17);
                    goto LAB_10062c5ac;
                }
            }
            if (param_2 < 1) {
                return;
            }
            if (param_3 < 1) {
                return;
            }
            pvVar11 = (vector<int, eastl::allocator>*)
                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01, uVar9);
            piVar12 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, uVar10);
            if (*piVar12 == 0) {
                return;
            }
            pvVar11 = (vector<int, eastl::allocator>*)
                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01, uVar9);
            piVar12 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, uVar10);
            iVar1 = *piVar12;
            pvVar11 = (vector<int, eastl::allocator>*)
                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01,
                                                                                                  (ulong)uVar4);
            piVar12 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, (ulong)uVar6);
            *piVar12 = iVar1;
            SetMapsquarePerimeterHeightGridGroup(this, 0, uVar3, uVar5, uVar4, uVar6, iVar1, -999);
            pvVar11 = (vector<int, eastl::allocator>*)
                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](pvVar15, uVar9);
            puVar13 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, uVar10);
            uVar16 = *puVar13;
            pvVar11 = (vector<int, eastl::allocator>*)
                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](pvVar15,
                                                                                                  (ulong)uVar4);
        } else {
            pvVar11 = (vector<int, eastl::allocator>*)
                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01, uVar9);
            uVar17 = (ulong)uVar6;
            piVar12 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, uVar17);
            if (*piVar12 == 0)
                goto LAB_10062c506;
            pvVar11 = (vector<int, eastl::allocator>*)
                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01, uVar9);
            piVar12 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, uVar17);
            iVar1 = *piVar12;
            pvVar11 = (vector<int, eastl::allocator>*)
                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01,
                                                                                                  (ulong)uVar4);
            piVar12 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, uVar17);
            *piVar12 = iVar1;
            SetMapsquarePerimeterHeightGridGroup(this, 0, uVar3, uVar6, uVar4, uVar6, iVar1, -999);
            pvVar11 = (vector<int, eastl::allocator>*)
                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](pvVar15, uVar9);
            uVar10 = uVar17;
        LAB_10062c5ac:
            puVar13 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, uVar10);
            uVar16 = *puVar13;
            pvVar11 = (vector<int, eastl::allocator>*)
                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](pvVar15,
                                                                                                  (ulong)uVar4);
        }
        puVar13 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](pvVar11, (ulong)uVar6);
        *puVar13 = uVar16;
    }

    // 0x10062c720, 512 bytes, placed by class name
    // BuildTerrainWorker::SetMapsquarePerimeterHeightGridGroup(int, int, int, int, int, int, int)
    void BuildTerrainWorker::SetMapsquarePerimeterHeightGridGroup(int param_1, int param_2, int param_3, int param_4,
                                                                  int param_5, int param_6, int param_7) {
        undefined8 uVar1;
        undefined8 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        undefined8 uVar7;
        shared_ptr<BuiltTerrainLevel>* psVar8;
        shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>* psVar9;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* pvVar10;
        long lVar11;
        long lVar12;
        vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>* pvVar13;
        vector<graphics::GridGroup, eastl::allocator>* pvVar14;
        undefined8* puVar15;
        undefined8* puVar16;
        undefined1* this_00;
        ulong uVar17;

        if (param_7 == -999) {
            param_7 = param_1;
        }
        this_00 = &field_80;
        uVar17 = (ulong)param_7;
        psVar8 =
            (shared_ptr<BuiltTerrainLevel>*)eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](
                (vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>*)this_00, uVar17);
        psVar9 = (shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>*)
                     shared_ptr<BuiltTerrainLevel>::operator->(psVar8);
        pvVar10 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                          eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)
                      shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>,
                                               eastl::allocator>>::operator->(psVar9);
        lVar11 =
            eastl::vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                          eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(pvVar10);
        psVar8 =
            (shared_ptr<BuiltTerrainLevel>*)eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](
                (vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>*)this_00, uVar17);
        lVar12 = shared_ptr<BuiltTerrainLevel>::operator->(psVar8);
        pvVar10 =
            (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                    eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)
                shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::operator->(
                    (shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>*)(lVar12 + 16));
        lVar12 =
            eastl::vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                          eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(pvVar10);
        if (lVar11 == lVar12) {
            psVar8 = (shared_ptr<BuiltTerrainLevel>*)
                eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](
                    (vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>*)this_00, uVar17);
            psVar9 =
                (shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>*)
                    shared_ptr<BuiltTerrainLevel>::operator->(psVar8);
            pvVar13 = (vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>*)
                shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>,
                                         eastl::allocator>>::operator*(psVar9);
            pvVar14 = (vector<graphics::GridGroup, eastl::allocator>*)
                eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>::operator[](
                    pvVar13, (long)param_2);
            puVar15 =
                (undefined8*)eastl::vector<graphics::GridGroup, eastl::allocator>::operator[](pvVar14, (long)param_3);
            psVar8 = (shared_ptr<BuiltTerrainLevel>*)
                eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](
                    (vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>*)this_00, (long)param_1);
            psVar9 =
                (shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>*)
                    shared_ptr<BuiltTerrainLevel>::operator->(psVar8);
            pvVar13 = (vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>*)
                shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>,
                                         eastl::allocator>>::operator*(psVar9);
            pvVar14 = (vector<graphics::GridGroup, eastl::allocator>*)
                eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>::operator[](
                    pvVar13, (long)param_4);
            puVar16 =
                (undefined8*)eastl::vector<graphics::GridGroup, eastl::allocator>::operator[](pvVar14, (long)param_5);
            if (*(char*)(puVar16 + 5) == '\0') {
                uVar1 = puVar15[9];
                puVar16[8] = puVar15[8];
                puVar16[9] = uVar1;
                uVar1 = *puVar15;
                uVar2 = puVar15[1];
                uVar3 = puVar15[2];
                uVar4 = puVar15[3];
                uVar5 = puVar15[4];
                uVar6 = puVar15[5];
                uVar7 = puVar15[7];
                puVar16[6] = puVar15[6];
                puVar16[7] = uVar7;
                puVar16[4] = uVar5;
                puVar16[5] = uVar6;
                puVar16[2] = uVar3;
                puVar16[3] = uVar4;
                *puVar16 = uVar1;
                puVar16[1] = uVar2;
                uVar1 = puVar15[11];
                uVar2 = puVar15[12];
                uVar3 = puVar15[13];
                uVar4 = puVar15[14];
                uVar5 = puVar15[15];
                uVar6 = puVar15[16];
                uVar7 = puVar15[17];
                puVar16[10] = puVar15[10];
                puVar16[11] = uVar1;
                puVar16[12] = uVar2;
                puVar16[13] = uVar3;
                puVar16[14] = uVar4;
                puVar16[15] = uVar5;
                puVar16[16] = uVar6;
                puVar16[17] = uVar7;
                uVar1 = puVar15[19];
                puVar16[18] = puVar15[18];
                puVar16[19] = uVar1;
                uVar1 = puVar15[20];
                uVar2 = puVar15[21];
                uVar3 = puVar15[22];
                uVar4 = puVar15[23];
                uVar5 = puVar15[24];
                uVar6 = puVar15[25];
                uVar7 = puVar15[27];
                puVar16[26] = puVar15[26];
                puVar16[27] = uVar7;
                uVar7 = puVar15[29];
                puVar16[28] = puVar15[28];
                puVar16[29] = uVar7;
                puVar16[24] = uVar5;
                puVar16[25] = uVar6;
                puVar16[22] = uVar3;
                puVar16[23] = uVar4;
                puVar16[20] = uVar1;
                puVar16[21] = uVar2;
                *(int*)((long)puVar16 + 52) = param_6;
                *(int*)((long)puVar16 + 132) = param_6;
                *(int*)((long)puVar16 + 212) = param_6;
                *(undefined4*)(puVar16 + 1) = *(undefined4*)(puVar15 + 1);
                *(undefined4*)(puVar16 + 11) = *(undefined4*)(puVar15 + 1);
                *(undefined4*)(puVar16 + 21) = *(undefined4*)(puVar15 + 1);
            }
        }
    }

    // 0x10062c920, 1648 bytes, placed by class name
    // BuildTerrainWorker::SetMapsquarePerimeterHeight(int)
    void BuildTerrainWorker::SetMapsquarePerimeterHeight(int param_1) {
        undefined1* this_00;
        int iVar1;
        undefined4 uVar2;
        int iVar3;
        bool bVar4;
        shared_ptr<BuiltTerrainLevel>* psVar5;
        long lVar6;
        vector<eastl::vector<int, eastl::allocator>, eastl::allocator>* this_01;
        vector<int, eastl::allocator>* pvVar7;
        int* piVar8;
        undefined4* puVar9;
        shared_ptr* this_02;
        vector<eastl::vector<int, eastl::allocator>, eastl::allocator>* this_03;
        int iVar10;
        int iVar11;
        ulong uVar12;
        ulong uVar13;
        vector<eastl::vector<int, eastl::allocator>, eastl::allocator>* local_40;

        this_00 = &field_80;
        uVar13 = (ulong)param_1;
        psVar5 =
            (shared_ptr<BuiltTerrainLevel>*)eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](
                (vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>*)this_00, uVar13);
        lVar6 = shared_ptr<BuiltTerrainLevel>::operator->(psVar5);
        this_01 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)
            shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>::operator*(
                (shared_ptr<eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>>*)(lVar6 + 16));
        if (param_1 == 0) {
            psVar5 = (shared_ptr<BuiltTerrainLevel>*)
                eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](
                    (vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>*)this_00, 0);
            lVar6 = shared_ptr<BuiltTerrainLevel>::operator->(psVar5);
            local_40 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)((lVar6 + 32))->end();
            if (local_40 == (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert("waterMap != nullptr",
                          "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                          "assetbuilder/jobs/buildterrain/BuildTerrainWorker.cpp",
                          961, (char*)0);
            }
        } else {
            local_40 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)0;
        }
        uVar12 = 1;
        do {
            pvVar7 = (vector<int, eastl::allocator>*)
                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01, uVar12);
            piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, 64);
            iVar1 = *piVar8;
            pvVar7 = (vector<int, eastl::allocator>*)
                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01, uVar12);
            piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, 65);
            *piVar8 = iVar1;
            SetMapsquarePerimeterHeightGridGroup(this, param_1, (int)uVar12, 64, (int)uVar12, 65, iVar1, -999);
            if (param_1 == 0) {
                pvVar7 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](local_40, uVar12);
                puVar9 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, 64);
                uVar2 = *puVar9;
                pvVar7 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](local_40, uVar12);
                puVar9 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, 65);
                *puVar9 = uVar2;
            }
            uVar12 = uVar12 + 1;
        } while (uVar12 != 65);
        uVar12 = 1;
        do {
            pvVar7 = (vector<int, eastl::allocator>*)
                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01, 64);
            piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, uVar12);
            iVar1 = *piVar8;
            pvVar7 = (vector<int, eastl::allocator>*)
                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01, 65);
            piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, uVar12);
            *piVar8 = iVar1;
            SetMapsquarePerimeterHeightGridGroup(this, param_1, 64, (int)uVar12, 65, (int)uVar12, iVar1, -999);
            if (param_1 == 0) {
                pvVar7 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](local_40, 64);
                puVar9 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, uVar12);
                uVar2 = *puVar9;
                pvVar7 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](local_40, 65);
                puVar9 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, uVar12);
                *puVar9 = uVar2;
            }
            uVar12 = uVar12 + 1;
        } while (uVar12 != 65);
        if (param_1 == 0) {
            pvVar7 = (vector<int, eastl::allocator>*)
                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01, 64);
            piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, 65);
            if (*piVar8 == 0) {
                pvVar7 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01, 65);
                piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, 64);
                if (*piVar8 == 0) {
                    pvVar7 = (vector<int, eastl::allocator>*)
                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01, 64);
                    piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, 64);
                    if (*piVar8 == 0) {
                        return;
                    }
                    pvVar7 = (vector<int, eastl::allocator>*)
                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01, 64);
                    piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, 64);
                    iVar1 = *piVar8;
                    pvVar7 = (vector<int, eastl::allocator>*)
                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01, 65);
                    piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, 65);
                    *piVar8 = iVar1;
                    SetMapsquarePerimeterHeightGridGroup(this, 0, 64, 64, 65, 65, iVar1, -999);
                    uVar13 = 64;
                } else {
                    pvVar7 = (vector<int, eastl::allocator>*)
                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01, 65);
                    piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, 64);
                    iVar1 = *piVar8;
                    pvVar7 = (vector<int, eastl::allocator>*)
                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01, 65);
                    piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, 65);
                    *piVar8 = iVar1;
                    SetMapsquarePerimeterHeightGridGroup(this, 0, 65, 64, 65, 65, iVar1, -999);
                    uVar13 = 65;
                }
                pvVar7 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](local_40, uVar13);
                uVar13 = 64;
            } else {
                pvVar7 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01, 64);
                piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, 65);
                iVar1 = *piVar8;
                pvVar7 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01, 65);
                piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, 65);
                *piVar8 = iVar1;
                SetMapsquarePerimeterHeightGridGroup(this, 0, 64, 65, 65, 65, iVar1, -999);
                pvVar7 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](local_40, 64);
                uVar13 = 65;
            }
            puVar9 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, uVar13);
            uVar2 = *puVar9;
            pvVar7 = (vector<int, eastl::allocator>*)
                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](local_40, 65);
            puVar9 = (undefined4*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, 65);
            *puVar9 = uVar2;
        } else {
            this_03 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)0;
            iVar1 = param_1;
            do {
                iVar1 = iVar1 + -1;
                if ((long)uVar13 < 1)
                    goto LAB_10062cba6;
                uVar13 = uVar13 - 1;
                this_02 = (shared_ptr*)eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](
                    (vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>*)this_00, uVar13);
                bVar4 = shared_ptr::operator_cast_to_bool(this_02);
            } while (!bVar4);
            psVar5 = (shared_ptr<BuiltTerrainLevel>*)
                eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](
                    (vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>*)this_00, uVar13);
            lVar6 = shared_ptr<BuiltTerrainLevel>::operator->(psVar5);
            this_03 = (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)((lVar6 + 16))->end();
        LAB_10062cba6:
            if (this_03 == (vector<eastl::vector<int, eastl::allocator>, eastl::allocator>*)0) {
                /* WARNING: Subroutine does not return */
                LogAssert(
                    "mapBelow != nullptr",
                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/assetbuilder/"
                    "jobs/buildterrain/BuildTerrainWorker.cpp",
                    1038,
                    "Unable to set map square perimeter height, cannot find a suitable level beneath to copy from.");
            }
            pvVar7 = (vector<int, eastl::allocator>*)
                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01, 64);
            piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, 65);
            iVar3 = *piVar8;
            pvVar7 = (vector<int, eastl::allocator>*)
                eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_03, 64);
            piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, 65);
            if (iVar3 == *piVar8) {
                pvVar7 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01, 65);
                piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, 64);
                iVar3 = *piVar8;
                pvVar7 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_03, 65);
                piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, 64);
                if (iVar3 == *piVar8) {
                    pvVar7 = (vector<int, eastl::allocator>*)
                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01, 64);
                    piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, 64);
                    iVar3 = *piVar8;
                    pvVar7 = (vector<int, eastl::allocator>*)
                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_03, 64);
                    piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, 64);
                    if (iVar3 == *piVar8) {
                        return;
                    }
                    pvVar7 = (vector<int, eastl::allocator>*)
                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01, 64);
                    piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, 64);
                    iVar3 = *piVar8;
                    pvVar7 = (vector<int, eastl::allocator>*)
                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01, 65);
                    piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, 65);
                    *piVar8 = iVar3;
                    iVar11 = 64;
                } else {
                    pvVar7 = (vector<int, eastl::allocator>*)
                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01, 65);
                    piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, 64);
                    iVar3 = *piVar8;
                    pvVar7 = (vector<int, eastl::allocator>*)
                        eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01, 65);
                    piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, 65);
                    *piVar8 = iVar3;
                    iVar11 = 65;
                }
                iVar10 = 64;
            } else {
                pvVar7 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01, 64);
                piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, 65);
                iVar3 = *piVar8;
                pvVar7 = (vector<int, eastl::allocator>*)
                    eastl::vector<eastl::vector<int, eastl::allocator>, eastl::allocator>::operator[](this_01, 65);
                piVar8 = (int*)eastl::vector<int, eastl::allocator>::operator[](pvVar7, 65);
                *piVar8 = iVar3;
                iVar11 = 64;
                iVar10 = 65;
            }
            SetMapsquarePerimeterHeightGridGroup(this, param_1, iVar11, iVar10, 65, 65, iVar3, iVar1);
        }
    }

    // 0x10062cf90, 672 bytes, placed by class name
    // BuildTerrainWorker::CalculatePreferredRotation(int, int, int, eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator> const&)
    bool BuildTerrainWorker::CalculatePreferredRotation(int param_1, int param_2, int param_3, vector* param_4) {
        int iVar1;
        int iVar2;
        vector<graphics::GridGroup, eastl::allocator>* pvVar3;
        long lVar4;
        int iVar5;
        uint uVar6;
        int iVar7;
        uint uVar8;
        ulong uVar9;
        ulong uVar10;
        ulong uVar12;
        int iVar13;
        uint uVar14;
        ulong uVar15;
        bool bVar16;
        bool bVar17;
        bool bVar18;

        uVar10 = (ulong)(param_2 + -1);
        pvVar3 = (vector<graphics::GridGroup, eastl::allocator>*)
            eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>::operator[](
                (vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>*)param_4, uVar10);
        uVar15 = (ulong)(param_3 + -1);
        lVar4 = eastl::vector<graphics::GridGroup, eastl::allocator>::operator[](pvVar3, uVar15);
        bVar16 = *(int*)(lVar4 + 68) == param_1;
        uVar12 = (ulong)(param_2 + 1);
        pvVar3 = (vector<graphics::GridGroup, eastl::allocator>*)
            eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>::operator[](
                (vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>*)param_4, uVar12);
        lVar4 = eastl::vector<graphics::GridGroup, eastl::allocator>::operator[](pvVar3, uVar15);
        iVar13 = *(int*)(lVar4 + 68);
        pvVar3 = (vector<graphics::GridGroup, eastl::allocator>*)
            eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>::operator[](
                (vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>*)param_4, uVar12);
        uVar9 = (ulong)(param_3 + 1);
        lVar4 = eastl::vector<graphics::GridGroup, eastl::allocator>::operator[](pvVar3, uVar9);
        iVar7 = *(int*)(lVar4 + 68);
        pvVar3 = (vector<graphics::GridGroup, eastl::allocator>*)
            eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>::operator[](
                (vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>*)param_4, uVar10);
        lVar4 = eastl::vector<graphics::GridGroup, eastl::allocator>::operator[](pvVar3, uVar9);
        iVar2 = *(int*)(lVar4 + 68);
        pvVar3 = (vector<graphics::GridGroup, eastl::allocator>*)
            eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>::operator[](
                (vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>*)param_4,
                (ulong)param_2);
        lVar4 = eastl::vector<graphics::GridGroup, eastl::allocator>::operator[](pvVar3, uVar15);
        iVar5 = (uint)(*(int*)(lVar4 + 68) == param_1) * 2;
        bVar17 = iVar13 == param_1;
        pvVar3 = (vector<graphics::GridGroup, eastl::allocator>*)
            eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>::operator[](
                (vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>*)param_4, uVar12);
        uVar15 = (ulong)param_3;
        lVar4 = eastl::vector<graphics::GridGroup, eastl::allocator>::operator[](pvVar3, uVar15);
        bVar18 = *(int*)(lVar4 + 68) == param_1;
        iVar13 = iVar5 + -3 + (uint)bVar17 * 2;
        if (bVar18) {
            iVar13 = iVar5 + (uint)bVar17 * 2 + -1;
        }
        iVar1 = (uint)bVar18 * 2;
        uVar8 = (uint)(iVar7 == param_1);
        pvVar3 = (vector<graphics::GridGroup, eastl::allocator>*)
            eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>::operator[](
                (vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>*)param_4,
                (ulong)param_2);
        lVar4 = eastl::vector<graphics::GridGroup, eastl::allocator>::operator[](pvVar3, uVar9);
        bVar17 = *(int*)(lVar4 + 68) == param_1;
        iVar7 = iVar1 + -3 + uVar8 * 2;
        if (bVar17) {
            iVar7 = iVar1 + -1 + uVar8 * 2;
        }
        iVar1 = (uint)bVar17 * 2;
        uVar8 = (uint)(iVar2 == param_1);
        pvVar3 = (vector<graphics::GridGroup, eastl::allocator>*)
            eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>::operator[](
                (vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>*)param_4, uVar10);
        lVar4 = eastl::vector<graphics::GridGroup, eastl::allocator>::operator[](pvVar3, uVar15);
        bVar17 = *(int*)(lVar4 + 68) == param_1;
        iVar2 = iVar5 + -3 + (uint)bVar16 * 2;
        if (bVar17) {
            iVar2 = iVar5 + (uint)bVar16 * 2 + -1;
        }
        iVar5 = iVar1 + -3 + uVar8 * 2;
        if (bVar17) {
            iVar5 = iVar1 + uVar8 * 2 + -1;
        }
        uVar8 = -(iVar2 - iVar7);
        if ((int)uVar8 < 0) {
            uVar8 = iVar2 - iVar7;
        }
        uVar6 = -(iVar13 - iVar5);
        if ((int)uVar6 < 0) {
            uVar6 = iVar13 - iVar5;
        }
        if (uVar8 == uVar6) {
            pvVar3 = (vector<graphics::GridGroup, eastl::allocator>*)
                eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>::operator[](
                    (vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>*)param_4,
                    (ulong)param_2);
            lVar4 = eastl::vector<graphics::GridGroup, eastl::allocator>::operator[](pvVar3, uVar15);
            iVar13 = *(int*)(lVar4 + 52);
            pvVar3 = (vector<graphics::GridGroup, eastl::allocator>*)
                eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>::operator[](
                    (vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>*)param_4, uVar12);
            lVar4 = eastl::vector<graphics::GridGroup, eastl::allocator>::operator[](pvVar3, uVar9);
            uVar6 = iVar13 - *(int*)(lVar4 + 52);
            uVar8 = -uVar6;
            if ((int)uVar8 < 0) {
                uVar8 = uVar6;
            }
            pvVar3 = (vector<graphics::GridGroup, eastl::allocator>*)
                eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>::operator[](
                    (vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>*)param_4, uVar12);
            lVar4 = eastl::vector<graphics::GridGroup, eastl::allocator>::operator[](pvVar3, uVar15);
            iVar13 = *(int*)(lVar4 + 52);
            pvVar3 = (vector<graphics::GridGroup, eastl::allocator>*)
                eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>::operator[](
                    (vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>*)param_4,
                    (ulong)param_2);
            lVar4 = eastl::vector<graphics::GridGroup, eastl::allocator>::operator[](pvVar3, uVar9);
            uVar14 = iVar13 - *(int*)(lVar4 + 52);
            uVar6 = -uVar14;
            if ((int)uVar6 < 0) {
                uVar6 = uVar14;
            }
        }
        return uVar8 < uVar6;
    }

    // 0x10062d230, 432 bytes, placed by class name
    // BuildTerrainWorker::BuildTile(DecodedTerrainTile const&, graphics::GridTile&, graphics::GridTile&, graphics::GridTile&, shared_ptr<FloorOverlayType> const&, shared_ptr<FloorUnderlayType> const&, shared_ptr<FloorUnderlayType> const&, Rotation90)
    void BuildTerrainWorker::BuildTile(long param_1, GridTile* param_2, GridTile* param_3, GridTile* param_4,
                                       shared_ptr* param_5, shared_ptr* param_6, shared_ptr* param_7, byte param_9) {
        GridTile* pGVar2;
        bool bVar3;
        long lVar4;
        long lVar5;
        GridTile local_a8;
        long local_50;
        GridTile* local_48;
        GridTile* local_40;
        GridTile* local_38;

        lVar5 = *(long*)(param_1 + 32);
        param_2->field_72 = lVar5;
        local_50 = param_1;
        lVar4 = graphics::TerrainOverlayShape::GetShape(0);
        if (lVar5 == lVar4) {
            AssignOverlay(this, param_5, param_2);
            return;
        }
        local_48 = param_2;
        new (&local_a8) graphics::GridTile();
        param_3->field_64 = local_a8.field_64;
        param_3->field_72 = local_a8.field_72;
        *(undefined8*)((long)&param_3->field_44 + 4) = local_a8._48_8_;
        *(undefined8*)((long)&param_3->field_52 + 4) = local_a8._56_8_;
        param_3->field_32 = local_a8.field_32;
        *(undefined8*)&param_3->field_40 = local_a8._40_8_;
        *(undefined8*)((long)&param_3->field_12 + 4) = local_a8._16_8_;
        *(undefined8*)((long)&param_3->field_20 + 4) = local_a8._24_8_;
        param_3->field_0 = local_a8.field_0;
        param_3->field_4 = local_a8.field_4;
        *(undefined2*)&param_3->field_6 = local_a8._6_2_;
        *(undefined8*)&param_3->field_8 = local_a8._8_8_;
        local_38 = param_3;
        new (&local_a8) graphics::GridTile();
        param_4->field_64 = local_a8.field_64;
        param_4->field_72 = local_a8.field_72;
        *(undefined8*)((long)&param_4->field_44 + 4) = local_a8._48_8_;
        *(undefined8*)((long)&param_4->field_52 + 4) = local_a8._56_8_;
        param_4->field_32 = local_a8.field_32;
        *(undefined8*)&param_4->field_40 = local_a8._40_8_;
        *(undefined8*)((long)&param_4->field_12 + 4) = local_a8._16_8_;
        *(undefined8*)((long)&param_4->field_20 + 4) = local_a8._24_8_;
        param_4->field_0 = local_a8.field_0;
        param_4->field_4 = local_a8.field_4;
        *(undefined2*)&param_4->field_6 = local_a8._6_2_;
        *(undefined8*)&param_4->field_8 = local_a8._8_8_;
        local_40 = param_4;
        bVar3 = shared_ptr::operator_cast_to_bool(param_6);
        if ((bVar3) && (bVar3 = shared_ptr::operator_cast_to_bool(param_7), lVar5 = local_50, bVar3)) {
            local_38->field_40 = 1;
            AssignUnderlay(this, param_7, local_38, *(ushort*)(local_50 + 8));
            local_40->field_40 = 1;
        } else {
            bVar3 = shared_ptr::operator_cast_to_bool(param_5);
            if (bVar3) {
                local_38->field_40 = 1;
                AssignOverlay(this, param_5, local_38);
            }
            bVar3 = shared_ptr::operator_cast_to_bool(param_6);
            if (!bVar3)
                goto LAB_10062d3a3;
            local_40->field_40 = 1;
            lVar5 = local_50;
        }
        pGVar2 = local_48;
        AssignUnderlay(this, param_6, local_40, *(ushort*)(lVar5 + 8));
        local_50 = lVar5;
        local_48 = pGVar2;
    LAB_10062d3a3:
        *(uint*)&local_48->field_64 = (uint)param_9 + *(int*)(local_50 + 16) & 3;
    }

    // 0x10062d7e0, 1024 bytes, placed by class name
    // BuildTerrainWorker::ReselectSourceUsingCompositeData(int&, int&, int&, int&, int&, std::array<eastl::vector<eastl::vector<DecodedTerrainTile, eastl::allocator>, eastl::allocator>, 4ul>*&, int&, int&, Rotation90&, BuildTerrainRequestData const&)
    /* BuildTerrainWorker::ReselectSourceUsingCompositeData(int&, int&, int&, int&, int&,
   std::array<eastl::vector<eastl::vector<DecodedTerrainTile, eastl::allocator>,
   eastl::allocator>, 4ul>*&, int&, int&, Rotation90&, BuildTerrainRequestData
   const&) */

    undefined4 BuildTerrainWorker::ReselectSourceUsingCompositeData(int* param_1, int* param_2, int* param_3,
                                                                    int* param_4, int* param_5, array** param_6,
                                                                    int* param_7, int* param_8, Rotation90* param_9,
                                                                    BuildTerrainRequestData* param_10) {
        uint uVar1;
        int iVar2;
        uint uVar3;
        uint uVar4;
        int iVar5;
        int iVar6;
        uint uVar7;
        undefined4 uVar8;
        int iVar9;
        long lVar10;
        vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>, 10ul, true,
                                   eastl::allocator>,
               eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true, eastl::allocator>>* this_00;
        vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
               eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true, eastl::allocator>>* this_01;
        vector<WorldMap::PendingLocationType, eastl::allocator>* this_02;
        ClientCompositeZone* this_03;
        array* paVar11;
        byte bVar12;
        uint uVar13;
        char cVar14;
        uint uVar15;
        int iVar16;
        uint uVar17;
        RegionRotate* pRVar18;
        int local_48;
        int local_44;
        RegionRotate* local_40;
        int local_38;
        int local_34;

        local_48 = 7;
        local_44 = 72;
        lVar10 = shared_ptr<ClientCompositeData>::operator->((shared_ptr<ClientCompositeData>*)&param_10->field_16);
        if (*(char*)(lVar10 + 9832) == '\0') {
            local_48 = local_48 + 1;
            local_44 = local_44 + -1;
            uVar13 = -(uint)(*param_1 == 0) | (uint)(*param_1 == 65);
            uVar7 = -(uint)(*param_2 == 0) | (uint)(*param_2 == 65);
            uVar15 = -(uint)(*param_3 == 0) | (uint)(*param_3 == 65);
            if (*param_4 == 0) {
                local_38 = 0;
            } else if (*param_4 == 65) {
                local_38 = 2;
            } else {
                local_38 = 1;
            }
        } else {
            uVar15 = 0;
            local_38 = 1;
            uVar7 = 0;
            uVar13 = 0;
        }
        local_34 = *param_1 + 7;
        uVar1 = math::Clamp<int>(&local_34, &local_48, &local_44);
        local_34 = *param_2 + 7;
        iVar2 = math::Clamp<int>(&local_34, &local_48, &local_44);
        local_34 = *param_3 + 7;
        uVar3 = math::Clamp<int>(&local_34, &local_48, &local_44);
        local_34 = *param_4 + 7;
        uVar4 = math::Clamp<int>(&local_34, &local_48, &local_44);
        iVar6 = iVar2 + 7;
        if (-1 < iVar2) {
            iVar6 = iVar2;
        }
        local_40 = (RegionRotate*)CONCAT44(local_40._4_4_, iVar6);
        uVar17 = uVar4 + 7;
        if (-1 < (int)uVar4) {
            uVar17 = uVar4;
        }
        this_00 =
            (vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>, 10ul,
                                        true, eastl::allocator>,
                    eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true, eastl::allocator>>*)
                shared_ptr<ClientCompositeData>::operator->((shared_ptr<ClientCompositeData>*)&param_10->field_16);
        iVar6 = *param_5;
        iVar5 =
            eastl::vector<eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                              10ul, true, eastl::allocator>,
                          eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true, eastl::allocator>>::size(this_00);
        if (iVar6 <= iVar5) {
            iVar5 = (int)(uint)local_40 >> 3;
            this_01 = (vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                              eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true, eastl::allocator>>*)
                eastl::vector<
                    eastl::fixed_vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>, 10ul,
                                        true, eastl::allocator>,
                    eastl::fixed_vector_allocator<2440ul, 4ul, 8ul, 0ul, true,
                                                  eastl::allocator>>::operator[](this_00, (long)*param_5);
            iVar6 = eastl::vector<
                eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true, eastl::allocator>>::size(this_01);
            if (iVar5 <= iVar6) {
                this_02 = (vector<WorldMap::PendingLocationType, eastl::allocator>*)
                    eastl::vector<eastl::fixed_vector<ClientCompositeZone, 10ul, true, eastl::allocator>,
                                  eastl::fixed_vector_allocator<240ul, 10ul, 8ul, 0ul, true,
                                                                eastl::allocator>>::operator[](this_01, (long)iVar5);
                iVar6 = eastl::vector<WorldMap::PendingLocationType, eastl::allocator>::size(this_02);
                if ((int)uVar17 >> 3 <= iVar6) {
                    this_03 = (ClientCompositeZone*)
                        eastl::vector<ClientCompositeZone,
                                      eastl::fixed_vector_allocator<20ul, 10ul, 4ul, 0ul, true, eastl::allocator>>::
                        operator[](
                            (vector<ClientCompositeZone,
                                    eastl::fixed_vector_allocator<20ul, 10ul, 4ul, 0ul, true, eastl::allocator>>*)
                                this_02,
                            (long)((int)uVar17 >> 3));
                    uVar8 = this_03->IsValid();
                    if ((char)uVar8 == '\0') {
                        return uVar8;
                    }
                    local_40 = (RegionRotate*)(ulong)(iVar2 - ((uint)local_40 & 4294967288));
                    iVar6 = uVar4 - (uVar17 & 4294967288);
                    paVar11 = (array*)eastl::vector<
                        std::array<eastl::vector<eastl::vector<DecodedTerrainTile, eastl::allocator>, eastl::allocator>,
                                   4ul>,
                        eastl::allocator>::
                    operator[]((vector<std::array<eastl::vector<eastl::vector<DecodedTerrainTile, eastl::allocator>,
                                                                eastl::allocator>,
                                                  4ul>,
                                       eastl::allocator>*)&field_48,
                               (ulong)(uint)this_03->field_16);
                    *param_6 = paVar11;
                    *param_5 = this_03->field_0;
                    uVar4 = uVar1 + 7;
                    if (-1 < (int)uVar1) {
                        uVar4 = uVar1;
                    }
                    pRVar18._0_4_ = (RegionRotate*)(uVar1 - (uVar4 & 4294967288));
                    uVar1 = uVar3 + 7;
                    if (-1 < (int)uVar3) {
                        uVar1 = uVar3;
                    }
                    iVar2 = uVar3 - (uVar1 & 4294967288);
                    cVar14 = this_03->field_12;
                    bVar12 = cVar14 - 1;
                    if (bVar12 < 3) {
                        cVar14 = '\x04' - cVar14;
                        iVar5 = *(int*)(&DAT_100d432b8 + (long)(char)bVar12 * 4);
                        iVar16 = *(int*)((long)&PTR___mh_execute_header_100d432c4 + (long)(char)bVar12 * 4);
                    } else {
                        iVar5 = 0;
                        iVar16 = 0;
                    }
                    iVar9 = pRVar18._0_4_->RegionRotateX(iVar2, cVar14);
                    *param_1 = (iVar9 + this_03->field_4 * 8 & 63U) + uVar13 + 1;
                    iVar9 = local_40->RegionRotateX(iVar6, cVar14);
                    uVar13 = iVar9 + this_03->field_4 * 8 & 63;
                    *param_2 = uVar13 + uVar7 + 1;
                    if (6 < iVar9) {
                        iVar5 = 0;
                    }
                    *param_7 = iVar5 + uVar7 + uVar13 + 1;
                    iVar2 = pRVar18._0_4_->RegionRotateZ(iVar2, cVar14);
                    *param_3 = (iVar2 + this_03->field_8 * 8 & 63U) + uVar15 + 1;
                    iVar6 = local_40->RegionRotateZ(iVar6, cVar14);
                    local_38 = local_38 + (iVar6 + this_03->field_8 * 8 & 63U);
                    *param_4 = local_38;
                    if (6 < iVar6) {
                        iVar16 = 0;
                    }
                    *param_8 = iVar16 + local_38;
                    *param_9 = this_03->field_12;
                    return uVar8;
                }
            }
        }
        return 0;
    }

    // 0x10062dcd0, 224 bytes, placed by class name
    // BuildTerrainWorker::GetGridTile(int, int, int)
    undefined8 BuildTerrainWorker::GetGridTile(int param_1, int param_2, int param_3) {
        bool bVar1;
        int iVar2;
        shared_ptr* this_00;
        shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>* this_01;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* this_02;
        vector<graphics::ModularParticleEmitter,
               eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>* this_03;
        GridGroup* this_04;
        undefined8 uVar3;

        this_00 = (shared_ptr*)eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](
            (vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>*)&field_80, (long)param_1);
        bVar1 = shared_ptr::operator_cast_to_bool(this_00);
        if (!bVar1) {
            return 0;
        }
        this_01 = (shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>*)
            shared_ptr<BuiltTerrainLevel>::operator*((shared_ptr<BuiltTerrainLevel>*)this_00);
        this_02 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                          eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)
            shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>,
                                     eastl::allocator>>::operator*(this_01);
        if ((param_2 < 0) ||
            (iVar2 = eastl::vector<
                 Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                 eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(this_02),
             iVar2 <= param_2)) {
            /* WARNING: Subroutine does not return */
            LogAssert("tileX >= 0 && tileX < (int)gridMap.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/jobs/buildterrain/BuildTerrainWorker.cpp",
                      1656, (char*)0);
        }
        this_03 = (vector<graphics::ModularParticleEmitter,
                          eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>*)
            eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>::operator[](
                (vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>*)this_02,
                (long)param_2);
        if ((param_3 < 0) ||
            (iVar2 = eastl::vector<
                 graphics::ModularParticleEmitter,
                 eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>::size(this_03),
             iVar2 <= param_3)) {
            /* WARNING: Subroutine does not return */
            LogAssert("tileZ >= 0 && tileZ < (int)gridMapRow.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/jobs/buildterrain/BuildTerrainWorker.cpp",
                      1659, (char*)0);
        }
        this_04 = (GridGroup*)eastl::vector<graphics::GridGroup, eastl::allocator>::operator[](
            (vector<graphics::GridGroup, eastl::allocator>*)this_03, (long)param_3);
        uVar3 = this_04->GetGridTile();
        return uVar3;
    }

    // 0x10062ddb0, 1264 bytes, placed by class name
    // BuildTerrainWorker::PaintRemoveRoofArea(int, int, int, RemoveRoofPaintingProgress&)
    int BuildTerrainWorker::PaintRemoveRoofArea(int param_1, int param_2, int param_3,
                                                RemoveRoofPaintingProgress* param_4) {
        int iVar1;
        long lVar2;
        bool bVar3;
        char cVar4;
        byte bVar5;
        uint uVar6;
        uint uVar7;
        uint uVar8;
        long lVar9;
        int* piVar10;
        byte bVar11;
        int iVar12;
        ulong uVar13;
        int iStack_180dc;
        int iStack_180d8;
        int iStack_180d4;
        ulong uStack_180d0;
        int iStack_180c4;
        undefined8 uStack_180c0;
        int iStack_180ac;
        int iStack_180a8;
        int iStack_180a4;
        fixed_queue<eastl::pair<int, int>, 4096ul, true> afStack_180a0[98416];

        uVar13 = (ulong)(uint)param_1;
        lVar2 = *(long*)PTR____stack_chk_guard_100ee9d98;
        iStack_180dc = param_2;
        iStack_180d8 = param_3;
        eastl::fixed_queue<eastl::pair<int, int>, 4096ul, true>::fixed_queue(afStack_180a0);
        uStack_180c0 = eastl::make_pair<int, int&>(&iStack_180dc, &iStack_180d8);
        afStack_180a0->push((pair*)&uStack_180c0);
        iStack_180c4 = 0;
        lVar9 = graphics::TerrainOverlayShape::GetShape(0);
        cVar4 = afStack_180a0->empty();
        if (cVar4 == '\0') {
            iStack_180d4 = param_1 + 1;
            iStack_180c4 = 0;
            uStack_180d0 = uVar13;
            do {
                piVar10 = (int*)
                    eastl::queue<eastl::pair<int, int>,
                                 eastl::fixed_list<eastl::pair<int, int>, 4096ul, true, eastl::allocator>>::front();
                iVar12 = *piVar10;
                iVar1 = piVar10[1];
                afStack_180a0->pop();
                iStack_180a8 = iVar12;
                iStack_180a4 = iVar1;
                bVar5 = IsRemoveRoof(this, (int)uVar13, iVar12, iVar1);
                if (bVar5 == 0) {
                    if (iStack_180a8 < (int)(field_40 + 1)) {
                        uVar6 = IsRemoveRoof(this, (int)uVar13, iStack_180a8 + 1, iStack_180a4);
                    } else {
                        uVar6 = 0;
                    }
                    if (iStack_180a8 < 1) {
                        uVar7 = 0;
                    } else {
                        uVar7 = IsRemoveRoof(this, (int)uStack_180d0, iStack_180a8 + -1, iStack_180a4);
                    }
                    if (iStack_180a4 < 1) {
                        uVar8 = 0;
                    } else {
                        uVar8 = IsRemoveRoof(this, (int)uStack_180d0, iStack_180a8, iStack_180a4 + -1);
                    }
                    if (iStack_180a4 < (int)(field_40 + 1)) {
                        bVar5 = IsRemoveRoof(this, (int)uStack_180d0, iStack_180a8, iStack_180a4 + 1);
                    } else {
                        bVar5 = 0;
                    }
                    bVar5 = 1 < (uint)bVar5 + (uVar8 & 255) + (uVar7 & 255) + (uVar6 & 255);
                    uVar13 = uStack_180d0;
                    bVar3 = (bool)bVar5;
                } else {
                    bVar3 = false;
                }
                piVar10 = (int*)GetGridTile(this, iStack_180d4, iStack_180a8, iStack_180a4);
                bVar11 = 1;
                iVar12 = (int)uVar13;
                if ((piVar10 != (int*)0) && ((*piVar10 != -1 || (*(long*)(piVar10 + 18) != lVar9)))) {
                    piVar10[12] = field_128;
                    param_4->Set(iVar12, iStack_180a8, iStack_180a4);
                    bVar11 = bVar5 ^ 1;
                    iStack_180c4 = iStack_180c4 + 1;
                }
                if (bVar11 == 0 && !bVar3) {
                    if (0 < iStack_180a8) {
                        cVar4 = param_4->IsSet(iVar12, iStack_180a8 + -1, iStack_180a4);
                        if (cVar4 == '\0') {
                            iStack_180ac = iStack_180a8 + -1;
                            uStack_180c0 = eastl::make_pair<int, int&>(&iStack_180ac, &iStack_180a4);
                            afStack_180a0->push((pair*)&uStack_180c0);
                            param_4->Set(iVar12, iStack_180a8 + -1, iStack_180a4);
                        }
                    }
                    if (iStack_180a4 < (int)(field_40 + 1)) {
                        cVar4 = param_4->IsSet(iVar12, iStack_180a8, iStack_180a4 + 1);
                        if (cVar4 == '\0') {
                            iStack_180ac = iStack_180a4 + 1;
                            uStack_180c0 = eastl::make_pair<int, int&>(&iStack_180a8, &iStack_180ac);
                            afStack_180a0->push((pair*)&uStack_180c0);
                            param_4->Set(iVar12, iStack_180a8, iStack_180a4 + 1);
                        }
                    }
                    if (iStack_180a8 < (int)(field_40 + 1)) {
                        cVar4 = param_4->IsSet(iVar12, iStack_180a8 + 1, iStack_180a4);
                        if (cVar4 == '\0') {
                            iStack_180ac = iStack_180a8 + 1;
                            uStack_180c0 = eastl::make_pair<int, int&>(&iStack_180ac, &iStack_180a4);
                            afStack_180a0->push((pair*)&uStack_180c0);
                            param_4->Set(iVar12, iStack_180a8 + 1, iStack_180a4);
                        }
                    }
                    if (0 < iStack_180a4) {
                        cVar4 = param_4->IsSet(iVar12, iStack_180a8, iStack_180a4 + -1);
                        if (cVar4 == '\0') {
                            iStack_180ac = iStack_180a4 + -1;
                            uStack_180c0 = eastl::make_pair<int, int&>(&iStack_180a8, &iStack_180ac);
                            afStack_180a0->push((pair*)&uStack_180c0);
                            param_4->Set(iVar12, iStack_180a8, iStack_180a4 + -1);
                        }
                    }
                }
                cVar4 = afStack_180a0->empty();
            } while (cVar4 == '\0');
        }
        afStack_180a0->~fixed_queue();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != lVar2) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return iStack_180c4;
    }

    // 0x10062e2a0, 16 bytes, placed by class name
    // BuildTerrainWorker::DebugDumpRenderChunks()
    void BuildTerrainWorker::DebugDumpRenderChunks() {}

    // 0x10062e2b0, 224 bytes, placed by class name
    // BuildTerrainWorker::GetTileLink(int, int, int) const
    vector<unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>*
    BuildTerrainWorker::GetTileLink(int param_1, int param_2, int param_3) {
        bool bVar1;
        int iVar2;
        shared_ptr* this_00;
        long lVar3;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* this_01;
        vector<unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>* this_02;
        vector<unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>* pvVar4;
        byte* pbVar5;

        if (-1 < param_1) {
            iVar2 = (&field_80)->size();
            if (param_1 < iVar2) {
                this_00 = (shared_ptr*)eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](
                    (vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>*)&field_80, (long)param_1);
                bVar1 = shared_ptr::operator_cast_to_bool(this_00);
                if (bVar1) {
                    lVar3 = shared_ptr<BuiltTerrainLevel>::operator*((shared_ptr<BuiltTerrainLevel>*)this_00);
                    this_01 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                      eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)
                        shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>>::
                        operator*((shared_ptr<eastl::vector<eastl::vector<unsigned char, eastl::allocator>,
                                                            eastl::allocator>>*)(lVar3 + 48));
                    if ((-1 < param_2) &&
                        (iVar2 = eastl::vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true,
                                                                             eastl::allocator>>::size(this_01),
                         param_2 < iVar2)) {
                        this_02 = (vector<unsigned char,
                                          eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>*)
                            eastl::vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>::operator[](
                                (vector<eastl::vector<unsigned char, eastl::allocator>, eastl::allocator>*)this_01,
                                (long)param_2);
                        bVar1 = true;
                        pvVar4 = this_02;
                        if ((-1 < param_3) &&
                            (pvVar4 =
                                 (vector<unsigned char,
                                         eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>*)
                                     eastl::vector<unsigned char,
                                                   eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true,
                                                                                 eastl::allocator>>::size(this_02),
                             param_3 < (int)pvVar4)) {
                            pbVar5 = (byte*)eastl::vector<unsigned char, eastl::allocator>::operator[](
                                (vector<unsigned char, eastl::allocator>*)this_02, (long)param_3);
                            pvVar4 =
                                (vector<unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true,
                                                                                     eastl::allocator>>*)(ulong)*pbVar5;
                            bVar1 = false;
                        }
                        if (!bVar1) {
                            return pvVar4;
                        }
                    }
                }
            }
        }
        return (vector<unsigned char, eastl::fixed_vector_allocator<1ul, 8ul, 1ul, 0ul, true, eastl::allocator>>*)0;
    }

    // 0x10062e390, 128 bytes, placed by class name
    // BuildTerrainWorker::IsRemoveRoof(int, int, int) const
    uint BuildTerrainWorker::IsRemoveRoof(int param_1, int param_2, int param_3) {
        bool bVar1;
        uint uVar2;

        if (-1 < param_1) {
            do {
                uVar2 = GetTileLink(this, param_1, param_2, param_3);
                if ((uVar2 & 4) != 0 && uVar2 != 4294967295) {
                    uVar2 = IsGridTileUsed(this, param_1, param_2, param_3);
                    goto LAB_10062e3f9;
                }
                bVar1 = 0 < param_1;
                param_1 = param_1 + -1;
            } while (bVar1);
        }
        uVar2 = 0;
    LAB_10062e3f9:
        return uVar2 & 4294967041;
    }

    // 0x10062e410, 304 bytes, placed by class name
    // BuildTerrainWorker::IsGridTileUsed(int, int, int) const
    uint BuildTerrainWorker::IsGridTileUsed(int param_1, int param_2, int param_3) {
        ulong uVar1;
        bool bVar2;
        int iVar3;
        shared_ptr* this_00;
        shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>* this_01;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* this_02;
        vector<graphics::ModularParticleEmitter,
               eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>* this_03;
        long lVar4;
        ulong uVar5;
        uint local_34;

        if (param_1 < 3) {
            uVar1 = (long)param_1;
            local_34 = param_3;
            do {
                do {
                    do {
                        uVar5 = uVar1;
                        if (uVar5 == 3)
                            goto LAB_10062e522;
                        uVar1 = uVar5 + 1;
                        this_00 =
                            (shared_ptr*)eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](
                                (vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>*)&field_80, uVar1);
                        bVar2 = shared_ptr::operator_cast_to_bool(this_00);
                    } while (!bVar2);
                    this_01 = (shared_ptr<
                               eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>*)
                        shared_ptr<BuiltTerrainLevel>::operator*((shared_ptr<BuiltTerrainLevel>*)this_00);
                    this_02 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                                      eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)
                        shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>,
                                                 eastl::allocator>>::operator*(this_01);
                } while (
                    (param_2 < 0) ||
                    (iVar3 = eastl::vector<
                         Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                         eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(this_02),
                     iVar3 <= param_2));
                this_03 = (vector<graphics::ModularParticleEmitter,
                                  eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>*)
                    eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>::operator[](
                        (vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>*)this_02,
                        (long)param_2);
                bVar2 = true;
                if ((-1 < param_3) &&
                    (iVar3 = eastl::vector<
                         graphics::ModularParticleEmitter,
                         eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>::size(this_03),
                     param_3 < iVar3)) {
                    lVar4 = eastl::vector<graphics::GridGroup, eastl::allocator>::operator[](
                        (vector<graphics::GridGroup, eastl::allocator>*)this_03, (long)param_3);
                    local_34 = (uint)CONCAT71((int7)((ulong)lVar4 >> 8), *(char*)(lVar4 + 40) != '\0');
                    bVar2 = false;
                }
            } while (bVar2);
        LAB_10062e522:
            if ((long)uVar5 < 3)
                goto LAB_10062e52d;
        }
        local_34 = 0;
    LAB_10062e52d:
        return local_34 & 4294967041;
    }

    // 0x10062e540, 288 bytes, placed by class name
    // BuildTerrainWorker::SetRoofRemovable(int, int, int)
    void BuildTerrainWorker::SetRoofRemovable(int param_1, int param_2, int param_3) {
        bool bVar1;
        int iVar2;
        shared_ptr* this_00;
        shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>* this_01;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* this_02;
        vector<graphics::ModularParticleEmitter,
               eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>* this_03;
        long lVar3;

        if (3 < (uint)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("level >= 0 && level < constants::MapConstants::LEVELS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/jobs/buildterrain/BuildTerrainWorker.cpp",
                      1859, (char*)0);
        }
        this_00 = (shared_ptr*)eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](
            (vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>*)&field_80, (long)param_1);
        bVar1 = shared_ptr::operator_cast_to_bool(this_00);
        if (!bVar1) {
            return;
        }
        this_01 = (shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>*)
            shared_ptr<BuiltTerrainLevel>::operator*((shared_ptr<BuiltTerrainLevel>*)this_00);
        this_02 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                          eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)
            shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>,
                                     eastl::allocator>>::operator*(this_01);
        if ((param_2 < 0) ||
            (iVar2 = eastl::vector<
                 Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                 eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(this_02),
             iVar2 <= param_2)) {
            /* WARNING: Subroutine does not return */
            LogAssert("tileX >= 0 && tileX < (int)gridMap.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/jobs/buildterrain/BuildTerrainWorker.cpp",
                      1867, (char*)0);
        }
        this_03 = (vector<graphics::ModularParticleEmitter,
                          eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>*)
            eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>::operator[](
                (vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>*)this_02,
                (long)param_2);
        if ((param_3 < 0) ||
            (iVar2 = eastl::vector<
                 graphics::ModularParticleEmitter,
                 eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>::size(this_03),
             iVar2 <= param_3)) {
            /* WARNING: Subroutine does not return */
            LogAssert("tileZ >= 0 && tileZ < (int)gridMapRow.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/jobs/buildterrain/BuildTerrainWorker.cpp",
                      1870, (char*)0);
        }
        lVar3 = eastl::vector<graphics::GridGroup, eastl::allocator>::operator[](
            (vector<graphics::GridGroup, eastl::allocator>*)this_03, (long)param_3);
        if (*(int*)(lVar3 + 48) != -1) {
            /* WARNING: Subroutine does not return */
            LogAssert("gridGroup.m_gridTile.m_renderChunkIDRemoveRoof == -1",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/jobs/buildterrain/BuildTerrainWorker.cpp",
                      1873, (char*)0);
        }
        *(int*)(lVar3 + 48) = field_128;
    }

    // 0x10062e660, 256 bytes, placed by class name
    // BuildTerrainWorker::IsRoofRemovableSet(int, int, int)
    bool BuildTerrainWorker::IsRoofRemovableSet(int param_1, int param_2, int param_3) {
        bool bVar1;
        int iVar2;
        shared_ptr* this_00;
        shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>* this_01;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* this_02;
        vector<graphics::ModularParticleEmitter,
               eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>* this_03;
        long lVar3;

        if (3 < (uint)param_1) {
            /* WARNING: Subroutine does not return */
            LogAssert("level >= 0 && level < constants::MapConstants::LEVELS",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/jobs/buildterrain/BuildTerrainWorker.cpp",
                      1881, (char*)0);
        }
        this_00 = (shared_ptr*)eastl::vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>::operator[](
            (vector<shared_ptr<BuiltTerrainLevel>, eastl::allocator>*)&field_80, (long)param_1);
        bVar1 = shared_ptr::operator_cast_to_bool(this_00);
        if (!bVar1) {
            return false;
        }
        this_01 = (shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>>*)
            shared_ptr<BuiltTerrainLevel>::operator*((shared_ptr<BuiltTerrainLevel>*)this_00);
        this_02 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                          eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)
            shared_ptr<eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>,
                                     eastl::allocator>>::operator*(this_01);
        if ((param_2 < 0) ||
            (iVar2 = eastl::vector<
                 Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                 eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(this_02),
             iVar2 <= param_2)) {
            /* WARNING: Subroutine does not return */
            LogAssert("tileX >= 0 && tileX < (int)gridMap.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/jobs/buildterrain/BuildTerrainWorker.cpp",
                      1888, (char*)0);
        }
        this_03 = (vector<graphics::ModularParticleEmitter,
                          eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>*)
            eastl::vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>::operator[](
                (vector<eastl::vector<graphics::GridGroup, eastl::allocator>, eastl::allocator>*)this_02,
                (long)param_2);
        if ((param_3 < 0) ||
            (iVar2 = eastl::vector<
                 graphics::ModularParticleEmitter,
                 eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>::size(this_03),
             iVar2 <= param_3)) {
            /* WARNING: Subroutine does not return */
            LogAssert("tileZ >= 0 && tileZ < (int)gridMapRow.size()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/game/runetek5/"
                      "assetbuilder/jobs/buildterrain/BuildTerrainWorker.cpp",
                      1891, (char*)0);
        }
        lVar3 = eastl::vector<graphics::GridGroup, eastl::allocator>::operator[](
            (vector<graphics::GridGroup, eastl::allocator>*)this_03, (long)param_3);
        return 1 < *(int*)(lVar3 + 48);
    }

} // namespace jag::game

// 0x10062bb90, 16 bytes, placed by neighbouring functions
// cos(float)
void cos(float param_1) {
    _cosf();
}

// 0x10062bba0, 16 bytes, placed by neighbouring functions
// sin(float)
void sin(float param_1) {
    _sinf();
}
