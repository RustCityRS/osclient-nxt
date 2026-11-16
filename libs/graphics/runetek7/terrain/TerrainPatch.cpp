// libs/graphics/runetek7/terrain/TerrainPatch.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "TerrainPatch.h"

namespace jag::graphics {
    // 0x100f43840, 1 bytes, __data
    TerrainPatch::m_showPatches = 1;

    // 0x100f43841, 1 bytes, __data
    TerrainPatch::m_groundPatchShadowCasterCulling = 1;

    // 0x100f43844, 4 bytes, __data
    float TerrainPatch::m_groundPatchShadowCasterCullingThreshold = 1850.0f;

    // 0x100f43848, 1 bytes, __data
    TerrainPatch::m_enablePatchShadows = 1;

    // 0x1039bd254, 4 bytes, __common; zero-initialised
    TerrainPatch::m_showWorldAABB;

    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    TerrainPatch::GetAABB() const;

    // 0x10017a590: the linker folded this into http::HTTPRequest::GetResponseCode() const, which has identical code
    TerrainPatch::GetGridSize() const;

    // 0x1001a3c10: the linker folded this into MainLoopFrameTimer::GetFPSCounter(), which has identical code
    TerrainPatch::GetMaterial() const;

    // 0x1007b2010, 976 bytes, placed by class name and debug map
    // TerrainPatch::InterpolateCentreVertex(TerrainVertex&, GridTile const&, int, int, float, float, TerrainBaseData const&) const
    void TerrainPatch::InterpolateCentreVertex(TerrainVertex* param_1, GridTile* param_2, int param_3, int param_4,
                                               float param_5, float param_6, TerrainBaseData* param_7) {
        long lVar1;
        bool bVar2;
        TerrainVertex* pTVar3;
        undefined8* puVar4;
        float* pfVar5;
        GridGroup* pGVar6;
        undefined8 uVar7;
        long* plVar8;
        int* piVar9;
        ulong uVar10;
        bool bVar11;
        int iVar12;
        int iVar13;
        float fVar14;
        array<GridTile_const*, 4ul> local_c0[32];
        undefined8 local_a0;
        float local_98;
        TerrainVertex* local_88;
        ulong local_80;
        ulong local_78;
        array<float, 4ul> local_68[20];
        float local_54;
        int local_50;
        float local_44;
        float local_40;
        float local_3c;
        float local_38;
        float local_34;

        local_50 = m_gridSize;
        local_44 = param_5 + 1.0;
        uVar7 = 0;
        local_88 = param_1;
        puVar4 = (undefined8*)std::array<GridTile_const*, 4ul>::operator[](local_c0, 0);
        *puVar4 = param_2;
        local_3c = 1.0 - param_5;
        local_34 = 1.0 - param_6;
        local_38 = local_34 * local_3c;
        pfVar5 = (float*)std::array<float, 4ul>::operator[](local_68, 0);
        *pfVar5 = local_38;
        pGVar6 = (GridGroup*)GetGridGroup(this, param_3 + 1, param_4);
        if (pGVar6 != (GridGroup*)0) {
            uVar7 = pGVar6->GetGridTile();
        }
        local_40 = param_6 + 1.0;
        puVar4 = (undefined8*)std::array<GridTile_const*, 4ul>::operator[](local_c0, 1);
        *puVar4 = uVar7;
        local_34 = local_34 * local_44;
        pfVar5 = (float*)std::array<float, 4ul>::operator[](local_68, 1);
        *pfVar5 = local_34;
        pGVar6 = (GridGroup*)GetGridGroup(this, param_3 + 1, param_4 + 1);
        if (pGVar6 == (GridGroup*)0) {
            uVar7 = 0;
        } else {
            uVar7 = pGVar6->GetGridTile();
        }
        puVar4 = (undefined8*)std::array<GridTile_const*, 4ul>::operator[](local_c0, 2);
        *puVar4 = uVar7;
        local_34 = local_40 * local_44;
        pfVar5 = (float*)std::array<float, 4ul>::operator[](local_68, 2);
        *pfVar5 = local_34;
        local_78 = (ulong)(uint)param_3;
        pGVar6 = (GridGroup*)GetGridGroup(this, param_3, param_4 + 1);
        local_80 = (ulong)(uint)param_4;
        if (pGVar6 == (GridGroup*)0) {
            uVar7 = 0;
        } else {
            uVar7 = pGVar6->GetGridTile();
        }
        puVar4 = (undefined8*)std::array<GridTile_const*, 4ul>::operator[](local_c0, 3);
        *puVar4 = uVar7;
        local_3c = local_3c * local_40;
        pfVar5 = (float*)std::array<float, 4ul>::operator[](local_68, 3);
        *pfVar5 = local_3c;
        bVar2 = true;
        bVar11 = true;
        uVar10 = 0;
        do {
            pfVar5 = (float*)std::array<float, 4ul>::operator[](local_68, uVar10);
            if ((0.0 < *pfVar5) && (plVar8 = (long*)std::array<GridTile_const*, 4ul>::operator[](local_c0, uVar10),
                                    bVar11 = bVar2, *(int*)(*plVar8 + 56) <= *(int*)(*plVar8 + 52))) {
                bVar11 = false;
                bVar2 = bVar11;
            }
            uVar10 = uVar10 + 1;
        } while (uVar10 != 4);
        fVar14 = 0.0;
        uVar10 = 0;
        local_34 = 0.0;
        local_38 = 0.0;
        do {
            local_54 = fVar14;
            pfVar5 = (float*)std::array<float, 4ul>::operator[](local_68, uVar10);
            local_3c = *pfVar5;
            if (bVar11) {
            LAB_1007b2260:
                plVar8 = (long*)std::array<GridTile_const*, 4ul>::operator[](local_c0, uVar10);
                piVar9 = (int*)(*plVar8 + 52);
            } else {
                plVar8 = (long*)std::array<GridTile_const*, 4ul>::operator[](local_c0, uVar10);
                lVar1 = *plVar8;
                if (*(int*)(lVar1 + 56) <= *(int*)(lVar1 + 52))
                    goto LAB_1007b2260;
                piVar9 = (int*)(lVar1 + 56);
            }
            local_38 = local_38 + (float)*piVar9 * local_3c;
            plVar8 = (long*)std::array<GridTile_const*, 4ul>::operator[](local_c0, uVar10);
            pTVar3 = local_88;
            fVar14 = local_54 + local_3c;
            local_34 = local_34 + local_3c * *(float*)(*plVar8 + 24);
            uVar10 = uVar10 + 1;
            if (uVar10 == 4) {
                iVar12 = (int)local_80;
                iVar13 = (int)local_78;
                local_34 = local_34 * (1.0 / fVar14);
                (&local_88->field_40, (float)local_50 * 0.5 * local_44 + (float)(local_50 * iVar13),
                 local_38 * (1.0 / fVar14), local_40 * (float)local_50 * 0.5 + (float)(local_50 * iVar12))
                    ->Set();
                fVar14 = param_6;
                local_a0 = GetCentreVertexNormal((TerrainPatch*)this, iVar13, iVar12, param_5, param_6);
                local_98 = fVar14;
                (&pTVar3->field_52, (Vector3T*)&local_a0)->SetXYZ();
                TerrainConstants::CopyVertexSource(param_7, (TerrainBaseData*)pTVar3);
                *(float*)((long)&pTVar3->field_20 + 4) = local_34;
                return;
            }
        } while (true);
    }

    // 0x1007b24f0, 992 bytes, placed by class name and debug map
    // TerrainPatch::GetSharedVertex(TerrainVertex&, int, int, TerrainBaseData const&) const
    void TerrainPatch::GetSharedVertex(TerrainVertex* param_1, int param_2, int param_3, TerrainBaseData* param_4) {
        char cVar1;
        GridGroup* pGVar2;
        long lVar3;
        long lVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        long lVar7;
        TerrainPatch* pTVar8;
        undefined4 uVar9;
        float fVar10;
        TerrainBaseData** local_68;
        undefined8 local_60;
        undefined4 local_54;
        TerrainPatch* local_50;
        TerrainBaseData* local_48;
        undefined8 local_40;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pGVar2 = (GridGroup*)GetGridGroup(this, param_2, param_3);
        if (pGVar2 == (GridGroup*)0) {
            lVar3 = 0;
            cVar1 = param_4->field_28;
        } else {
            lVar3 = pGVar2->GetGridTile();
            cVar1 = param_4->field_28;
        }
        if (cVar1 == '\0') {
            local_60._4_4_ = (undefined4)((ulong)local_60 >> 32);
            if (lVar3 == 0) {
                fVar10 = 0.0;
            } else {
                fVar10 = (float)*(int*)(lVar3 + 52);
            }
            (&param_1->field_40, (float)(m_gridSize * param_2), fVar10, (float)(m_gridSize * param_3))->Set();
            local_68 = (TerrainBaseData**)GetVertexNormal(this, param_2, param_3);
            local_60 = CONCAT44(local_60._4_4_, fVar10);
            (&param_1->field_52, (Vector3T*)&local_68)->SetXYZ();
        } else {
            local_50 = (TerrainPatch*)param_4;
            pGVar2 = (GridGroup*)GetGridGroup(this, param_2, param_3);
            if (pGVar2 == (GridGroup*)0) {
                lVar4 = 0;
            } else {
                lVar4 = pGVar2->GetGridTile();
            }
            if (lVar4 == 0) {
                uVar9 = (undefined4)CONCAT71((int7)((ulong)this >> 8), 1);
                param_4 = (TerrainBaseData*)local_50;
            } else {
                uVar5 = pGVar2->GetGridTileOverlay();
                uVar6 = pGVar2->GetGridTileUnderlay();
                local_48 = (TerrainBaseData*)local_50;
                local_40 =
                    (**(code**)(**(long**)(lVar4 + 72) + 24))(*(long**)(lVar4 + 72), lVar4, uVar5, uVar6, 4, this);
                local_68 = &local_48;
                local_60 = 2;
                param_4 =
                    TerrainConstants::GetDominantSource<TerrainBaseData_const>(true, (initializer_list*)&local_68);
                uVar9 = 0;
            }
            local_50 = this;
            pGVar2 = (GridGroup*)GetGridGroup(this, param_2 + -1, param_3 + -1);
            if ((pGVar2 == (GridGroup*)0) || (lVar7 = pGVar2->GetGridTile(), lVar7 == 0)) {
                pTVar8 = local_50;
                local_54 = uVar9;
            } else {
                uVar5 = pGVar2->GetGridTileOverlay();
                uVar6 = pGVar2->GetGridTileUnderlay();
                pTVar8 = local_50;
                local_48 = param_4;
                local_40 =
                    (**(code**)(**(long**)(lVar7 + 72) + 24))(*(long**)(lVar7 + 72), lVar7, uVar5, uVar6, 6, local_50);
                local_68 = &local_48;
                local_60 = 2;
                param_4 = TerrainConstants::GetDominantSource<TerrainBaseData_const>(lVar4 == 0,
                                                                                     (initializer_list*)&local_68);
                local_54 = 0;
            }
            pGVar2 = (GridGroup*)GetGridGroup(pTVar8, param_2, param_3 + -1);
            if ((pGVar2 == (GridGroup*)0) || (lVar4 = pGVar2->GetGridTile(), lVar4 == 0)) {
                pTVar8 = local_50;
            } else {
                uVar5 = pGVar2->GetGridTileOverlay();
                uVar6 = pGVar2->GetGridTileUnderlay();
                pTVar8 = local_50;
                local_48 = param_4;
                local_40 =
                    (**(code**)(**(long**)(lVar4 + 72) + 24))(*(long**)(lVar4 + 72), lVar4, uVar5, uVar6, 5, local_50);
                local_68 = &local_48;
                local_60 = 2;
                param_4 = TerrainConstants::GetDominantSource<TerrainBaseData_const>(local_54._0_1_,
                                                                                     (initializer_list*)&local_68);
                local_54 = 0;
            }
            pGVar2 = (GridGroup*)GetGridGroup(pTVar8, param_2 + -1, param_3);
            if ((pGVar2 == (GridGroup*)0) || (lVar4 = pGVar2->GetGridTile(), lVar4 == 0)) {
                pTVar8 = local_50;
            } else {
                uVar5 = pGVar2->GetGridTileOverlay();
                uVar6 = pGVar2->GetGridTileUnderlay();
                pTVar8 = local_50;
                local_48 = param_4;
                local_40 =
                    (**(code**)(**(long**)(lVar4 + 72) + 24))(*(long**)(lVar4 + 72), lVar4, uVar5, uVar6, 7, local_50);
                local_68 = &local_48;
                local_60 = 2;
                param_4 = TerrainConstants::GetDominantSource<TerrainBaseData_const>(local_54._0_1_,
                                                                                     (initializer_list*)&local_68);
            }
            if (lVar3 == 0) {
                fVar10 = 0.0;
            } else {
                fVar10 = (float)*(int*)(lVar3 + 52);
            }
            (&param_1->field_40, (float)(pTVar8->m_gridSize * param_2), fVar10, (float)(pTVar8->m_gridSize * param_3))
                ->Set();
            local_68 = (TerrainBaseData**)GetVertexNormal(pTVar8, param_2, param_3);
            local_60 = CONCAT44(local_60._4_4_, fVar10);
            (&param_1->field_52, (Vector3T*)&local_68)->SetXYZ();
        }
        TerrainConstants::CopyVertexSource(param_4, (TerrainBaseData*)param_1);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007b4540, 384 bytes, base-object constructor, placed by __FILE__ string
    // PatchFaceData::PatchFaceData(TerrainVertex const*)
    void PatchFaceData::PatchFaceData(TerrainVertex* param_1) {
        undefined1 uVar1;
        undefined1 uVar2;
        undefined4 uVar3;
        vector* pvVar4;
        float* pfVar5;
        Vector3T* pVVar6;
        ColourHSL local_48;
        undefined2 local_38;
        undefined1 local_36;

        new (this) math::Vector3T<unsigned short>();
        new (&field_6) math::Vector3T<unsigned char>();
        new (&field_15) math::Vector3T<unsigned char>();
        new (&field_18) math::Vector3T<unsigned char>();
        pVVar6 = (Vector3T*)(ulong)(ushort)param_1->field_4;
        Set(param_1->field_4, *(short*)&param_1[1].field_8, *(short*)&param_1[2].field_12);
        new (&local_48) math::ColourHSL((float)param_1->field_8, *(float*)&param_1[1].field_12,
                                        *(float*)((long)&param_1[2].field_12 + 4));
        math::Vector3T<float>::operator*=((Vector3T<float>*)&local_48, 8.0);
        pvVar4 = local_48.SSOBeginPtr(pVVar6);
        if (*(float*)pvVar4 <= 255.0) {
            pfVar5 = (float*)local_48.y();
            if (*pfVar5 <= 255.0) {
                pfVar5 = (float*)local_48.second();
                if (*pfVar5 <= 255.0) {
                    uVar3 = math::Vector3TFromVector3<unsigned char>((math*)&local_48, pVVar6);
                    local_38 = (undefined2)uVar3;
                    local_36 = (undefined1)((uint)uVar3 >> 16);
                    math::Vector3T<unsigned char>::operator=((Vector3T<unsigned char>*)&field_6, (Vector3T*)&local_38);
                    uVar1 = param_1[1].field_40;
                    uVar2 = param_1[2].field_44;
                    field_9 = *(undefined1*)((long)&param_1->field_32 + 4);
                    field_10 = uVar1;
                    field_11 = uVar2;
                    uVar1 = param_1[1].field_41;
                    uVar2 = param_1[2].field_45;
                    field_12 = *(undefined1*)((long)&param_1->field_32 + 5);
                    field_13 = uVar1;
                    field_14 = uVar2;
                    (&field_15, *(uchar*)((long)&param_1->field_32 + 6), param_1[1].field_42, param_1[2].field_46)
                        ->Set();
                    (&field_18, *(uchar*)((long)&param_1->field_32 + 7), param_1[1].field_43, param_1[2].field_47)
                        ->Set();
                    return;
                }
            }
        }
        /* WARNING: Subroutine does not return */
        LogAssert("textureScalesFloat.x() <= std::numeric_limits<uint8>::max() && textureScalesFloat.y() <= "
                  "std::numeric_limits<uint8>::max() && textureScalesFloat.z() <= std::numeric_limits<uint8>::max()",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/terrain/"
                  "TerrainPatch.cpp",
                  44, (char*)0);
    }

    // 0x1007b4760, 16 bytes, complete-object constructor, placed by neighbouring functions
    // PatchFaceData::PatchFaceData(TerrainVertex const*): jumps straight to the base-object constructor

    // 0x1007b4770, 592 bytes, base-object constructor, placed by class name
    // TerrainPatch::TerrainPatch(int, shared_ptr<eastl::map<int, TerrainTextureMeta, eastl::less<int>, eastl::allocator> > const&, shared_ptr<eastl::vector<eastl::vector<GridGroup, eastl::allocator>, eastl::allocator> > const&, int, int)
    void TerrainPatch::TerrainPatch(int param_1, shared_ptr* param_2, shared_ptr* param_3, int param_4, int param_5) {
        hash* phVar2;
        hash local_48[8];
        equal_to local_40[8];

        new (this) Drawable(2);
        field_0 = &PTR__TerrainPatch_100f146b0;
        new (&field_16) math::AABB();
        new (&field_48) TerrainMaterial();
        field_600 = param_1;
        m_gridResolution = 0;
        m_gridSize = 0;
        new (field_616, (_func_decltype_nullptr*)2) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        phVar2 = local_48;
        new (&field_632, phVar2, local_40) eastl::fixed_hash_map<int, RenderChunk, 256ul, 257ul, true, eastl::hash<int>,
                                                                 eastl::equal_to<int>, false, eastl::allocator>();
        m_faceCount = 0;
        new (&field_13120) IrradianceEffect();
        new (&field_13232, (_func_decltype_nullptr*)phVar2)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_13248, (_func_decltype_nullptr*)phVar2)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_13264) eastl::vector<TerrainPatchVertex, eastl::allocator>();
        new (&field_13296) eastl::vector<TerrainPatchVertexPos, eastl::allocator>();
        new (&field_13328) render::VertexBuffer();
        new (&field_13408) render::VertexBuffer();
        new (&field_13488) render::InputAssemblerState();
        new (&field_13680) render::InputAssemblerState();
        new (&field_13872) std::future<void>();
        shared_ptr<eastl::vector<eastl::vector<GridGroup, eastl::allocator>, eastl::allocator>>::operator=(
            (shared_ptr<eastl::vector<eastl::vector<GridGroup, eastl::allocator>, eastl::allocator>>*)field_616,
            param_3);
        m_gridResolution = param_4;
        m_gridSize = param_5;
        shared_ptr<eastl::map<int, TerrainTextureMeta, eastl::less<int>, eastl::allocator>>::operator=(
            (shared_ptr<eastl::map<int, TerrainTextureMeta, eastl::less<int>, eastl::allocator>>*)field_13248, param_2);
        ConstructFromTileData(this);
    }

    // 0x1007b4a50, 864 bytes, placed by class name
    // TerrainPatch::ConstructFromTileData()
    void TerrainPatch::ConstructFromTileData() {
        undefined1* this_00;
        int iVar1;
        bool bVar2;
        char cVar3;
        int iVar4;
        undefined4 uVar5;
        VertexDeclaration* pVVar6;
        undefined8* puVar7;
        GridGroup* pGVar8;
        long lVar9;
        GridTile* pGVar10;
        GridTile* pGVar11;
        hashtable_iterator_base* extraout_RDX;
        int* piVar12;
        ulong uVar13;
        int iVar14;
        int iVar15;
        int local_a0[4];
        GridTile* local_90;
        long local_88;
        vector<game::WorldMap::MapElementInstance, eastl::allocator>* local_80;
        RenderChunk local_78;
        hash_map<int, RenderChunk, eastl::hash<int>, eastl::equal_to<int>,
                 eastl::fixed_hashtable_allocator<258ul, 40ul, 256ul, 4ul, 0ul, true, eastl::allocator>, false>*
            local_50;
        int local_48;
        int local_44;
        ulong local_40;
        int local_34;

        (&field_16)->Reset();
        uVar13 = (ulong)(uint)(m_gridResolution * m_gridResolution * 12);
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        pVVar6 = (VertexDeclaration*)TerrainPatchRenderer::GetVertexDecl();
        pVVar6->GetVertexStride(0);
        iVar4 = 0;
        local_80 = (vector<game::WorldMap::MapElementInstance, eastl::allocator>*)&field_13264;
        (&field_13264, uVar13)->reserve();
        pVVar6 = (VertexDeclaration*)TerrainPatchRenderer::GetVertexDeclPos();
        pVVar6->GetVertexStride(0);
        (&field_13296, uVar13)->reserve();
        m_faceCount = 0;
        this_00 = &field_632;
        this_00->clear();
        local_78.field_16._0_4_ = 0;
        local_78._20_8_ = 0;
        local_78.field_0 = 0;
        local_78.field_8._0_4_ = 0;
        local_78.field_8._4_4_ = 0;
        new (&local_78) RenderChunk();
        local_a0[0] = 0;
        local_50 =
            (hash_map<int, RenderChunk, eastl::hash<int>, eastl::equal_to<int>,
                      eastl::fixed_hashtable_allocator<258ul, 40ul, 256ul, 4ul, 0ul, true, eastl::allocator>, false>*)
                this_00;
        puVar7 = (undefined8*)eastl::hash_map<
            int, RenderChunk, eastl::hash<int>, eastl::equal_to<int>,
            eastl::fixed_hashtable_allocator<258ul, 40ul, 256ul, 4ul, 0ul, true, eastl::allocator>, false>::
        operator[](
            (hash_map<int, RenderChunk, eastl::hash<int>, eastl::equal_to<int>,
                      eastl::fixed_hashtable_allocator<258ul, 40ul, 256ul, 4ul, 0ul, true, eastl::allocator>, false>*)
                this_00,
            local_a0);
        *puVar7 = local_78.field_0;
        puVar7[1] = CONCAT44(local_78.field_8._4_4_, (undefined4)local_78.field_8);
        *(ulong*)((long)puVar7 + 12) = CONCAT44((undefined4)local_78.field_16, local_78.field_8._4_4_);
        *(undefined8*)((long)puVar7 + 20) = local_78._20_8_;
        if (0 < m_gridResolution) {
            iVar4 = 0;
            iVar15 = 1;
            do {
                if (0 < m_gridResolution) {
                    iVar14 = 0;
                    do {
                        iVar14 = iVar14 + 1;
                        pGVar8 = (GridGroup*)GetGridGroup(this, iVar14, iVar15);
                        if (pGVar8 != (GridGroup*)0) {
                            lVar9 = pGVar8->GetGridTile();
                            if (lVar9 != 0) {
                                piVar12 = (int*)(lVar9 + 44);
                                if (*(int*)(lVar9 + 44) == -1) {
                                    *piVar12 = 0;
                                }
                                iVar1 = *(int*)(lVar9 + 48);
                                if (iVar1 != -1) {
                                    *piVar12 = iVar1;
                                    iVar4 = eastl::max<int>(iVar4, iVar1);
                                }
                                lVar9 = eastl::hash_map<int, RenderChunk, eastl::hash<int>, eastl::equal_to<int>,
                                                        eastl::fixed_hashtable_allocator<258ul, 40ul, 256ul, 4ul, 0ul,
                                                                                         true, eastl::allocator>,
                                                        false>::operator[](local_50, piVar12);
                                *(int*)(lVar9 + 4) = *(int*)(lVar9 + 4) + 1;
                            }
                        }
                    } while (iVar14 < m_gridResolution);
                }
                bVar2 = iVar15 < m_gridResolution;
                iVar15 = iVar15 + 1;
            } while (bVar2);
        }
        local_34 = 0;
        if (-1 < iVar4) {
            local_44 = iVar4;
            do {
                eastl::hashtable<int, eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>,
                                 eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true, eastl::allocator>,
                                 eastl::use_first<eastl::pair<int const, oldscape::dash3d::ModelLit::AABB>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true,
                                 true>::find((int*)&local_78);
                eastl::hashtable<int, eastl::pair<int const, oldscape::highlight::HighlightedGroup>, eastl::allocator,
                                 eastl::use_first<eastl::pair<int const, oldscape::highlight::HighlightedGroup>>,
                                 eastl::equal_to<int>, eastl::hash<int>, eastl::mod_range_hashing,
                                 eastl::default_ranged_hash, eastl::prime_rehash_policy, false, true, true>::end();
                bVar2 = eastl::operator!=((eastl*)&local_78, (hashtable_iterator_base*)local_a0, extraout_RDX);
                if (bVar2) {
                    lVar9 = local_78.HeapBeginPtr();
                    uVar5 = eastl::vector<game::WorldMap::MapElementInstance, eastl::allocator>::size(local_80);
                    *(undefined4*)(lVar9 + 4) = uVar5;
                    local_88 = lVar9;
                    if (0 < m_gridResolution) {
                        local_40 = 1;
                        do {
                            if (0 < m_gridResolution) {
                                local_48 = (int)local_40 + -1;
                                iVar4 = 0;
                                do {
                                    iVar15 = iVar4 + 1;
                                    pGVar8 = (GridGroup*)GetGridGroup(this, iVar15, (int)local_40);
                                    if (pGVar8 != (GridGroup*)0) {
                                        pGVar10 = (GridTile*)pGVar8->GetGridTile();
                                        if ((pGVar10 != (GridTile*)0) && (*(int*)&pGVar10->field_44 == local_34)) {
                                            local_90 = (GridTile*)pGVar8->GetGridTileOverlay();
                                            pGVar11 = (GridTile*)pGVar8->GetGridTileUnderlay();
                                            cVar3 = AddTile(this, pGVar10, local_90, pGVar11, iVar15, (int)local_40);
                                            lVar9 = local_88;
                                            if (cVar3 != '\0') {
                                                iVar14 =
                                                    eastl::min<GraphicsQuality>(*(undefined4*)(local_88 + 16), iVar4);
                                                *(int*)(lVar9 + 16) = iVar14;
                                                uVar5 = eastl::max<int>(iVar14, iVar4);
                                                iVar4 = local_48;
                                                *(undefined4*)(lVar9 + 20) = uVar5;
                                                iVar14 =
                                                    eastl::min<GraphicsQuality>(*(undefined4*)(lVar9 + 24), local_48);
                                                *(int*)(lVar9 + 24) = iVar14;
                                                uVar5 = eastl::max<int>(iVar14, iVar4);
                                                *(undefined4*)(lVar9 + 28) = uVar5;
                                            }
                                        }
                                    }
                                    iVar4 = iVar15;
                                } while (iVar15 < m_gridResolution);
                            }
                            iVar4 = (int)local_40;
                            local_40 = (ulong)(iVar4 + 1);
                        } while (iVar4 < m_gridResolution);
                    }
                }
                iVar4 = local_34 + 1;
                bVar2 = local_34 < local_44;
                local_34 = iVar4;
            } while (bVar2);
        }
        iVar4 = GetFaceCount(this);
        if (iVar4 != 0) {
            cVar3 = this_thread::IsMainThread();
            if (cVar3 != '\0') {
                bVar2 = field_616->operator_cast_to_bool();
                if (!bVar2) {
                    CreateRenderingResources(this);
                }
            }
        }
        CheckShadowCaster(this);
    }

    // 0x1007b4dc0, 16 bytes, complete-object constructor, placed by class name
    // TerrainPatch::TerrainPatch(int, shared_ptr<eastl::map<int, TerrainTextureMeta, eastl::less<int>, eastl::allocator> > const&, shared_ptr<eastl::vector<eastl::vector<GridGroup, eastl::allocator>, eastl::allocator> > const&, int, int): jumps straight to the base-object constructor

    // 0x1007b4dd0, 960 bytes, base-object constructor, placed by class name
    // TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<TerrainPatchVertex, eastl::allocator>&, eastl::vector<TerrainPatchVertexPos, eastl::allocator>&, int, int, int, shared_ptr<TextureAtlasReference> const&, eastl::fixed_hash_map<int, RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>, false, eastl::allocator>&, math::Matrix44T<float> const*, float const*)
    void TerrainPatch::TerrainPatch(int param_1, AABB* param_2, vector* param_3, vector* param_4, int param_5,
                                    int param_6, int param_7, shared_ptr* param_8, fixed_hash_map* param_9,
                                    Matrix44T* param_10, float* param_11) {
        vector<eastl::string, eastl::allocator>* this_00;
        ulong uVar1;
        char* pcVar2;
        hash* phVar3;
        ParticleMaterial* this_01;
        TerrainPatch* local_148;
        undefined1* local_140;
        undefined1* local_138;
        undefined1* local_130;
        undefined1* local_128;
        undefined1* local_120;
        undefined1* local_118;
        undefined1* local_110;
        equal_to local_108[8];
        fixed_hash_map<int, RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>, false,
                       eastl::allocator>* local_100;
        vector<eastl::string, eastl::allocator>* local_f8;
        int local_ec;
        vector<eastl::string, eastl::allocator>* local_e8;
        ParticleMaterial* local_e0;
        hash local_d8[160];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        local_ec = param_5;
        new (this) Drawable(0);
        field_0 = &PTR__TerrainPatch_100f146b0;
        new (&field_16, param_2) math::AABB();
        local_e0 = (ParticleMaterial*)&field_48;
        new (local_e0) TerrainMaterial();
        field_600 = param_1;
        m_gridResolution = 0;
        m_gridSize = 0;
        new (field_616, (_func_decltype_nullptr*)param_2)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        local_100 = (fixed_hash_map<int, RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>, false,
                                    eastl::allocator>*)&field_632;
        phVar3 = local_d8;
        local_140 = field_616;
        eastl::fixed_hash_map<int, RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>, false,
                              eastl::allocator>::fixed_hash_map(local_100, phVar3, local_108);
        m_faceCount = 0;
        field_13096 = param_10;
        field_13104 = param_11;
        new (&field_13120) IrradianceEffect();
        new (&field_13232, (_func_decltype_nullptr*)phVar3)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        local_138 = &field_13232;
        new (field_13248, (_func_decltype_nullptr*)phVar3)
            shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        local_f8 = (vector<eastl::string, eastl::allocator>*)&field_13264;
        local_130 = field_13248;
        new (local_f8) eastl::vector<TerrainPatchVertex, eastl::allocator>();
        local_e8 = (vector<eastl::string, eastl::allocator>*)&field_13296;
        new (local_e8) eastl::vector<TerrainPatchVertexPos, eastl::allocator>();
        local_128 = &field_13328;
        new (local_128) render::VertexBuffer();
        local_120 = &field_13408;
        new (local_120) render::VertexBuffer();
        local_118 = &field_13488;
        new (local_118) render::InputAssemblerState();
        local_110 = &field_13680;
        new (local_110) render::InputAssemblerState();
        new (&field_13872) std::future<void>();
        this_00 = local_f8;
        if (local_f8 != (vector<eastl::string, eastl::allocator>*)param_3) {
            eastl::vector<eastl::string, eastl::allocator>::swap(local_f8, param_3);
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        }
        if (local_e8 != (vector<eastl::string, eastl::allocator>*)param_4) {
            eastl::vector<eastl::string, eastl::allocator>::swap(local_e8, param_4);
            eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        }
        uVar1 = this_00->size();
        m_faceCount = (int)(uVar1 / 3);
        eastl::fixed_hash_map<int, RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>, false,
                              eastl::allocator>::swap(local_100, param_9);
        m_gridSize = param_6;
        m_gridResolution = local_ec;
        local_e0->InitRenderPassEffects();
        local_e0->SetTextureAtlasReference(param_8);
        this_01 = local_e0;
        local_e0->SetEndPosition(param_7);
        pcVar2 = (char*)this_01->Instance();
        local_148 = this;
        fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::function<
            TerrainPatch::TerrainPatch(int, math::AABB_const&, eastl::vector<TerrainPatchVertex, eastl::allocator>&,
                                       eastl::vector<TerrainPatchVertexPos, eastl::allocator>&, int, int, int,
                                       shared_ptr<TextureAtlasReference> const&,
                                       eastl::fixed_hash_map<int, RenderChunk, 256ul, 257ul, true, eastl::hash<int>,
                                                             eastl::equal_to<int>, false, eastl::allocator>&,
                                       math::Matrix44T<float> const*, float const*)::__8,
            void>((function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)local_d8,
                  (__8*)&local_148);
        local_108->RunOnThreadPoolRenderContext(pcVar2, (function*)"TerrainPatch");
        std::future<void>::operator=((future<void>*)&field_13872, (future*)local_108);
        local_108->~future();
        fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>::~function(
            (function<void(render::RenderContext&), 128ul, 16ul, (fixedfunction::Methods)0>*)local_d8);
        CheckShadowCaster(this);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007b5210, 80 bytes, placed by class name
    // TerrainPatch::CheckShadowCaster()
    void TerrainPatch::CheckShadowCaster() {
        bool bVar1;
        float extraout_XMM0_Db;

        bVar1 = true;
        if (field_600 == 0) {
            (&field_16)->GetDimensions();
            if (extraout_XMM0_Db < m_groundPatchShadowCasterCullingThreshold) {
                bVar1 = m_groundPatchShadowCasterCulling == '\0';
            }
        }
        SetRenderFlag(1, bVar1);
    }

    // 0x1007b5260, 64 bytes, complete-object constructor, placed by class name
    // TerrainPatch::TerrainPatch(int, math::AABB const&, eastl::vector<TerrainPatchVertex, eastl::allocator>&, eastl::vector<TerrainPatchVertexPos, eastl::allocator>&, int, int, int, shared_ptr<TextureAtlasReference> const&, eastl::fixed_hash_map<int, RenderChunk, 256ul, 257ul, true, eastl::hash<int>, eastl::equal_to<int>, false, eastl::allocator>&, math::Matrix44T<float> const*, float const*)
    void TerrainPatch::TerrainPatch(int param_1, AABB* param_2, vector* param_3, vector* param_4, int param_5,
                                    int param_6, int param_7, shared_ptr* param_8, fixed_hash_map* param_9,
                                    Matrix44T* param_10, float* param_11) {
        TerrainPatch(this, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10,
                     param_11);
    }

    // 0x1007b52a0, 384 bytes, base-object destructor, placed by class name
    // TerrainPatch::~TerrainPatch()
    void TerrainPatch::~TerrainPatch() {
        field_0 = &PTR__TerrainPatch_100f146b0;
        if ((&field_13872)->valid() != '\0') {
            std::future<void>::wait();
        }
        DestroyRenderingResources(this);
        (&field_13872)->~future();
        (&field_13680)->~InputAssemblerState();
        (&field_13488)->~InputAssemblerState();
        (&field_13408)->~VertexBuffer();
        (&field_13328)->~VertexBuffer();
        (&field_13296)->~vector();
        (&field_13264)->~vector();
        field_13248->~shared_ptr();
        (&field_13232)->~shared_ptr();
        (&field_632)->~fixed_hash_map();
        field_616->~shared_ptr();
        (&field_48)->~TerrainMaterial();
        ~AutoSingleton();
    }

    // 0x1007b5440, 96 bytes, placed by class name
    // TerrainPatch::DestroyRenderingResources()
    void TerrainPatch::DestroyRenderingResources() {
        AutoSingleton<ShaderThreadPoolSingleton> local_18[8];

        local_18->~AutoSingleton("Terrain_Patch");
        (&field_48)->DestroyRenderingResources();
        (&field_13680)->Destroy();
        (&field_13488)->Destroy();
        (&field_13408)->Destroy();
        (&field_13328)->Destroy();
    }

    // 0x1007b54a0, 16 bytes, complete-object destructor, placed by class name
    // TerrainPatch::~TerrainPatch(): jumps straight to the base-object destructor

    // 0x1007b54b0, 32 bytes, deleting destructor, placed by class name
    // TerrainPatch::~TerrainPatch()
    void TerrainPatch::~TerrainPatch() {
        ~TerrainPatch(this);
        operator_delete(this);
    }

    // 0x1007b54d0, 384 bytes, placed by class name
    // TerrainPatch::CreateRenderingResources()
    void TerrainPatch::CreateRenderingResources() {
        undefined1* puVar1;
        byte bVar2;
        byte bVar3;
        int iVar4;
        int iVar5;
        VertexDeclaration* pVVar6;
        void* pvVar7;
        char* this_00;
        AutoSingleton<ShaderThreadPoolSingleton> local_38[8];

        local_38->~AutoSingleton();
        iVar4 = GetVertexDataSize(this);
        if (iVar4 != 0) {
            /* WARNING: Subroutine does not return */
            LogAssert("GetVertexDataSize() == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/terrain/"
                      "TerrainPatch.cpp",
                      153, (char*)0);
        }
        pVVar6 = (VertexDeclaration*)TerrainPatchRenderer::GetVertexDecl();
        iVar4 = pVVar6->GetVertexStride(0);
        puVar1 = &field_13264;
        iVar5 = puVar1->size();
        if (iVar5 * iVar4 == 0) {
            bVar2 = 1;
        } else {
            pvVar7 = (void*)puVar1->HeapBeginPtr();
            bVar2 = (&field_13328, iVar5 * iVar4, 0, pvVar7)->Create();
            puVar1->set_capacity(0);
        }
        pVVar6 = (VertexDeclaration*)TerrainPatchRenderer::GetVertexDeclPos();
        iVar4 = pVVar6->GetVertexStride(0);
        puVar1 = &field_13296;
        iVar5 = puVar1->size();
        if (iVar5 * iVar4 != 0) {
            pvVar7 = (void*)puVar1->HeapBeginPtr();
            bVar3 = (&field_13408, iVar5 * iVar4, 0, pvVar7)->Create();
            bVar2 = bVar2 & bVar3;
            puVar1->set_capacity(0);
        }
        pVVar6 = (VertexDeclaration*)TerrainPatchRenderer::GetVertexDecl();
        (&field_13488, pVVar6, (VertexBuffer*)&field_13328)->SetVertexStreamData();
        pVVar6 = (VertexDeclaration*)TerrainPatchRenderer::GetVertexDeclPos();
        (&field_13680, pVVar6, (VertexBuffer*)&field_13408)->SetVertexStreamData();
        if (bVar2 == 0) {
            DestroyRenderingResources(this);
            this_00 = "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/terrain/"
                      "TerrainPatch.cpp";
            LogFatalError("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                          "terrain/TerrainPatch.cpp",
                          180, 0, "Failed to allocate memory for the terrain\'s vertex data!");
            /* WARNING: Subroutine does not return */
            this_00->~OptionStore();
        }
    }

    // 0x1007b5860, 144 bytes, placed by class name
    // TerrainPatch::GetGridGroup(int, int)
    undefined8 TerrainPatch::GetGridGroup(int param_1, int param_2) {
        bool bVar1;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* this_00;
        ulong uVar2;
        vector<eastl::vector<GridGroup, eastl::allocator>, eastl::allocator>* this_01;
        vector<ModularParticleEmitter, eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>*
            this_02;
        undefined8 uVar3;
        undefined1* this_03;

        this_03 = field_616;
        bVar1 = this_03->operator_cast_to_bool();
        if ((bVar1) && (-1 < param_1)) {
            this_00 =
                (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                        eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)
                    shared_ptr<eastl::vector<eastl::vector<GridGroup, eastl::allocator>, eastl::allocator>>::operator->(
                        (shared_ptr<eastl::vector<eastl::vector<GridGroup, eastl::allocator>, eastl::allocator>>*)
                            this_03);
            uVar2 = eastl::vector<
                Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(this_00);
            if ((ulong)(long)param_1 < uVar2) {
                this_01 = (vector<eastl::vector<GridGroup, eastl::allocator>, eastl::allocator>*)
                    shared_ptr<eastl::vector<eastl::vector<GridGroup, eastl::allocator>, eastl::allocator>>::operator*(
                        (shared_ptr<eastl::vector<eastl::vector<GridGroup, eastl::allocator>, eastl::allocator>>*)
                            this_03);
                this_02 = (vector<ModularParticleEmitter,
                                  eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>*)
                    eastl::vector<eastl::vector<GridGroup, eastl::allocator>, eastl::allocator>::operator[](
                        this_01, (long)param_1);
                if (-1 < param_2) {
                    uVar2 = eastl::vector<
                        ModularParticleEmitter,
                        eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>::size(this_02);
                    if ((ulong)(long)param_2 < uVar2) {
                        uVar3 = eastl::vector<GridGroup, eastl::allocator>::operator[](
                            (vector<GridGroup, eastl::allocator>*)this_02, (long)param_2);
                        return uVar3;
                    }
                }
            }
        }
        return 0;
    }

    // 0x1007b5a20, 144 bytes, placed by class name
    // TerrainPatch::GetGridGroup(int, int) const
    undefined8 TerrainPatch::GetGridGroup(int param_1, int param_2) {
        bool bVar1;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* this_00;
        ulong uVar2;
        vector<eastl::vector<GridGroup, eastl::allocator>, eastl::allocator>* this_01;
        vector<ModularParticleEmitter, eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>*
            this_02;
        undefined8 uVar3;
        undefined1* this_03;

        this_03 = field_616;
        bVar1 = this_03->operator_cast_to_bool();
        if ((bVar1) && (-1 < param_1)) {
            this_00 =
                (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                        eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)
                    shared_ptr<eastl::vector<eastl::vector<GridGroup, eastl::allocator>, eastl::allocator>>::operator->(
                        (shared_ptr<eastl::vector<eastl::vector<GridGroup, eastl::allocator>, eastl::allocator>>*)
                            this_03);
            uVar2 = eastl::vector<
                Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(this_00);
            if ((ulong)(long)param_1 < uVar2) {
                this_01 = (vector<eastl::vector<GridGroup, eastl::allocator>, eastl::allocator>*)
                    shared_ptr<eastl::vector<eastl::vector<GridGroup, eastl::allocator>, eastl::allocator>>::operator*(
                        (shared_ptr<eastl::vector<eastl::vector<GridGroup, eastl::allocator>, eastl::allocator>>*)
                            this_03);
                this_02 = (vector<ModularParticleEmitter,
                                  eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>*)
                    eastl::vector<eastl::vector<GridGroup, eastl::allocator>, eastl::allocator>::operator[](
                        this_01, (long)param_1);
                if (-1 < param_2) {
                    uVar2 = eastl::vector<
                        ModularParticleEmitter,
                        eastl::fixed_vector_allocator<320ul, 4ul, 16ul, 0ul, true, eastl::allocator>>::size(this_02);
                    if ((ulong)(long)param_2 < uVar2) {
                        uVar3 = eastl::vector<GridGroup, eastl::allocator>::operator[](
                            (vector<GridGroup, eastl::allocator>*)this_02, (long)param_2);
                        return uVar3;
                    }
                }
            }
        }
        return 0;
    }

    // 0x1007b5b00: the linker folded this into GridGroup::GetGridTile(), which has identical code
    GridGroup::GetGridTile() const;

    // 0x1007b5b40, 256 bytes, placed by class name
    // TerrainPatch::AddTile(GridTile&, GridTile*, GridTile*, int, int)
    bool TerrainPatch::AddTile(GridTile* param_1, GridTile* param_2, GridTile* param_3, int param_4, int param_5) {
        vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>, eastl::allocator>* this_00;
        long lVar1;
        TerrainBaseData* pTVar2;
        TerrainVertex* pTVar3;
        ulong uVar4;
        ulong uVar5;
        long lVar6;

        this_00 =
            (vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>, eastl::allocator>*)(**(
                code**)(*(long*)param_1->field_72 + 16))();
        lVar1 = eastl::vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>,
                              eastl::allocator>::size(this_00);
        if (6148914691236517205 < (ulong)(lVar1 * -6148914691236517205)) {
            /* WARNING: Subroutine does not return */
            LogAssert("triangles.size() % 3 == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/terrain/"
                      "TerrainPatch.cpp",
                      386, (char*)0);
        }
        lVar1 = eastl::vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>,
                              eastl::allocator>::size(this_00);
        if (lVar1 != 0) {
            uVar5 = 0;
            do {
                lVar6 = 0;
                do {
                    pTVar2 = (TerrainBaseData*)eastl::vector<TerrainVertex, eastl::allocator>::operator[](
                        (vector<TerrainVertex, eastl::allocator>*)this_00, uVar5 + lVar6);
                    ExpandSource(this, pTVar2);
                    lVar6 = lVar6 + 1;
                } while (lVar6 != 3);
                pTVar3 = (TerrainVertex*)eastl::vector<TerrainVertex, eastl::allocator>::operator[](
                    (vector<TerrainVertex, eastl::allocator>*)this_00, uVar5);
                AddTriangle(this, pTVar3, *(int*)&param_1->field_44);
                uVar5 = uVar5 + 3;
                uVar4 = eastl::vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>,
                                      eastl::allocator>::size(this_00);
            } while (uVar5 < uVar4);
        }
        return lVar1 != 0;
    }

    // 0x1007b5c40: the linker folded this into GridGroup::GetGridTileOverlay(), which has identical code
    GridGroup::GetGridTileOverlay() const;

    // 0x1007b5c60: the linker folded this into GridGroup::GetGridTileUnderlay(), which has identical code
    GridGroup::GetGridTileUnderlay() const;

    // 0x1007b5c90, 192 bytes, placed by class name
    // TerrainPatch::GetViewportMapID() const
    int TerrainPatch::GetViewportMapID() {
        bool bVar1;
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        hashtable_iterator_base* extraout_RDX_00;
        eastl local_30[8];
        hashtable_iterator_base local_28[8];

        bVar1 = field_13248->operator_cast_to_bool();
        if (bVar1) {
            shared_ptr<eastl::map<int, TerrainTextureMeta, eastl::less<int>, eastl::allocator>>::operator*(
                (shared_ptr<eastl::map<int, TerrainTextureMeta, eastl::less<int>, eastl::allocator>>*)field_13248);
            eastl::vector<unsigned long,
                          eastl::fixed_vector_allocator<8ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::rbegin();
            eastl::rbtree<
                unsigned int,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::less<unsigned int>, eastl::allocator,
                eastl::use_first<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                true, true>::end();
            bVar1 = eastl::operator!=(local_30, local_28, extraout_RDX);
            if (bVar1) {
                do {
                    lVar2 = eastl::rbtree_iterator<
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
                            local_30);
                    if (*(int*)(lVar2 + 8) != -1) {
                        return *(int*)(lVar2 + 8);
                    }
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
                            local_30);
                    bVar1 = eastl::operator!=(local_30, local_28, extraout_RDX_00);
                } while (bVar1);
            }
        }
        return -1;
    }

    // 0x1007b5d90, 208 bytes, placed by class name
    // TerrainPatch::ExpandSource(TerrainBaseData&)
    void TerrainPatch::ExpandSource(TerrainBaseData* param_1) {
        bool bVar1;
        long lVar2;
        hashtable_iterator_base* extraout_RDX;
        undefined1* this_00;
        hashtable_iterator_base local_30[8];
        eastl local_28[8];

        this_00 = field_13248;
        bVar1 = this_00->operator_cast_to_bool();
        if ((bVar1) && (param_1->field_0 != -1)) {
            shared_ptr<eastl::map<int, TerrainTextureMeta, eastl::less<int>, eastl::allocator>>::operator->(
                (shared_ptr<eastl::map<int, TerrainTextureMeta, eastl::less<int>, eastl::allocator>>*)this_00);
            eastl::rbtree<int, eastl::pair<int const, TerrainTextureMeta>, eastl::less<int>, eastl::allocator,
                          eastl::use_first<eastl::pair<int const, TerrainTextureMeta>>, true, true>::find((int*)
                                                                                                              local_28);
            shared_ptr<eastl::map<int, TerrainTextureMeta, eastl::less<int>, eastl::allocator>>::operator->(
                (shared_ptr<eastl::map<int, TerrainTextureMeta, eastl::less<int>, eastl::allocator>>*)this_00);
            eastl::rbtree<
                unsigned int,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::less<unsigned int>, eastl::allocator,
                eastl::use_first<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>>,
                true, true>::end();
            bVar1 = eastl::operator!=(local_28, local_30, extraout_RDX);
            if (!bVar1) {
                /* WARNING: Subroutine does not return */
                LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                "runetek7/terrain/TerrainPatch.cpp",
                                377, (char*)0);
            }
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_28);
            param_1->field_4 = *(undefined2*)(lVar2 + 4);
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_28);
            *(undefined1*)((long)&param_1->field_32 + 4) = *(undefined1*)(lVar2 + 6);
            lVar2 = eastl::rbtree_iterator<
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>::
            operator*(
                (rbtree_iterator<
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>*,
                    eastl::pair<unsigned int const, eastl::vector<LoadingScreenScript::Keyframe, eastl::allocator>>&>*)
                    local_28);
            *(undefined1*)((long)&param_1->field_32 + 5) = *(undefined1*)(lVar2 + 7);
        }
    }

    // 0x1007b5f80, 160 bytes, placed by class name
    // TerrainPatch::AddTriangle(TerrainVertex const*, int)
    void TerrainPatch::AddTriangle(TerrainVertex* param_1, int param_2) {
        long lVar1;
        array* paVar2;
        ulong uVar3;
        TerrainVertex* pTVar4;
        bool bVar5;
        PatchFaceData local_50;
        int local_34;

        local_34 = param_2;
        lVar1 = eastl::hash_map<int, RenderChunk, eastl::hash<int>, eastl::equal_to<int>,
                                eastl::fixed_hashtable_allocator<258ul, 40ul, 256ul, 4ul, 0ul, true, eastl::allocator>,
                                false>::
        operator[]((hash_map<int, RenderChunk, eastl::hash<int>, eastl::equal_to<int>,
                             eastl::fixed_hashtable_allocator<258ul, 40ul, 256ul, 4ul, 0ul, true, eastl::allocator>,
                             false>*)&field_632,
                   &local_34);
        new (&local_50) PatchFaceData(param_1);
        pTVar4 = (TerrainVertex*)&param_1[2].field_8;
        uVar3 = 2;
        do {
            paVar2 = (array*)std::array<std::array<unsigned char, 3ul>, 3ul>::operator[](uVar3);
            AddVertex(this, pTVar4, &local_50, paVar2);
            AddVertexPos(this, pTVar4, (int*)0);
            pTVar4 = (TerrainVertex*)&pTVar4[-2].field_56;
            bVar5 = uVar3 != 0;
            uVar3 = uVar3 - 1;
        } while (bVar5);
        m_faceCount = m_faceCount + 1;
        *(int*)(lVar1 + 8) = *(int*)(lVar1 + 8) + 1;
    }

    // 0x1007b6020, 368 bytes, placed by class name
    // TerrainPatch::GetVertexNormal(int, int) const
    undefined8 TerrainPatch::GetVertexNormal(int param_1, int param_2) {
        GridGroup* pGVar1;
        long lVar2;
        int iVar3;
        int iVar4;
        undefined8 uVar5;
        ColourHSL local_48;
        long local_38;

        iVar4 = 0;
        iVar3 = 0;
        if (param_1 <= m_gridResolution) {
            pGVar1 = (GridGroup*)GetGridGroup(this, param_1 + -1, param_2);
            if (pGVar1 == (GridGroup*)0) {
                local_38 = 0;
            } else {
                local_38 = pGVar1->GetGridTile();
            }
            pGVar1 = (GridGroup*)GetGridGroup(this, param_1 + 1, param_2);
            iVar3 = 0;
            if (pGVar1 == (GridGroup*)0) {
                lVar2 = 0;
            } else {
                lVar2 = pGVar1->GetGridTile();
            }
            if ((local_38 != 0) && (lVar2 != 0)) {
                iVar3 = *(int*)(local_38 + 52) - *(int*)(lVar2 + 52);
            }
        }
        if (param_2 <= m_gridResolution) {
            pGVar1 = (GridGroup*)GetGridGroup(this, param_1, param_2 + -1);
            if (pGVar1 == (GridGroup*)0) {
                local_38 = 0;
            } else {
                local_38 = pGVar1->GetGridTile();
            }
            pGVar1 = (GridGroup*)GetGridGroup(this, param_1, param_2 + 1);
            iVar4 = 0;
            if (pGVar1 == (GridGroup*)0) {
                lVar2 = 0;
            } else {
                lVar2 = pGVar1->GetGridTile();
            }
            if ((local_38 != 0) && (lVar2 != 0)) {
                iVar4 = *(int*)(local_38 + 52) - *(int*)(lVar2 + 52);
            }
        }
        if ((param_1 == 1) || (m_gridResolution + 1 == param_1)) {
            iVar3 = 0;
        }
        if ((param_2 == 1) || (m_gridResolution + 1 == param_2)) {
            iVar4 = 0;
        }
        new (&local_48) math::ColourHSL((float)iVar3, (float)(m_gridSize * 2), (float)iVar4);
        local_48.Normalize();
        uVar5._0_4_ = local_48.field_0;
        uVar5._4_4_ = local_48.field_4;
        return uVar5;
    }

    // 0x1007b61b0, 368 bytes, placed by class name
    // TerrainPatch::GetCentreVertexNormal(int, int, float, float) const
    undefined8 TerrainPatch::GetCentreVertexNormal(int param_1, int param_2, float param_3, float param_4) {
        float fVar1;
        float fVar2;
        undefined8 local_70;
        float local_68;
        float local_60;
        float local_5c;
        undefined8 local_58;
        float local_50;
        undefined8 local_48;
        float local_40;
        float local_38;
        float local_34;

        local_38 = param_4;
        local_34 = param_3;
        local_48 = GetVertexNormal(this, param_1, param_2);
        fVar1 = 1.0 - local_34;
        local_5c = 1.0 - local_38;
        local_60 = fVar1;
        local_40 = param_4;
        math::Vector3T<float>::operator*=((Vector3T<float>*)&local_48, local_5c * fVar1);
        local_70 = GetVertexNormal(this, param_1 + 1, param_2);
        fVar2 = local_34 + 1.0;
        local_68 = fVar1;
        local_34 = fVar2;
        math::Vector3T<float>::operator*=((Vector3T<float>*)&local_70, local_5c * fVar2);
        math::Vector3T<float>::operator+=((Vector3T<float>*)&local_48, (Vector3T*)&local_70);
        local_58 = GetVertexNormal(this, param_1 + 1, param_2 + 1);
        local_50 = fVar2;
        local_70.SetXYZ((Vector3T*)&local_58);
        fVar1 = local_38 + 1.0;
        local_38 = fVar1;
        math::Vector3T<float>::operator*=((Vector3T<float>*)&local_70, local_34 * fVar1);
        math::Vector3T<float>::operator+=((Vector3T<float>*)&local_48, (Vector3T*)&local_70);
        local_58 = GetVertexNormal(this, param_1, param_2 + 1);
        local_50 = fVar1;
        local_70.SetXYZ((Vector3T*)&local_58);
        math::Vector3T<float>::operator*=((Vector3T<float>*)&local_70, local_38 * local_60);
        math::Vector3T<float>::operator+=((Vector3T<float>*)&local_48, (Vector3T*)&local_70);
        math::Vector3T<float>::operator*=((Vector3T<float>*)&local_48, 0.25);
        return local_48;
    }

    // 0x1007b6320, 928 bytes, placed by class name
    // TerrainPatch::AddVertex(TerrainVertex const&, PatchFaceData const&, std::array<unsigned char, 3ul> const&)
    /* TerrainPatch::AddVertex(TerrainVertex const&,
   PatchFaceData const&, std::array<unsigned char, 3ul> const&) */

    void TerrainPatch::AddVertex(TerrainVertex* param_1, PatchFaceData* param_2, array* param_3) {
        array<unsigned char, 4ul>* this_00;
        undefined1 uVar1;
        byte bVar2;
        Vector3T<short> VVar3;
        Vector3T<short> VVar4;
        byte bVar5;
        byte bVar6;
        char cVar7;
        char cVar8;
        char cVar9;
        TerrainVertex* pTVar10;
        PatchFaceData* this_01;
        PatchFaceData* pPVar11;
        Vector3T<short>* this_02;
        undefined1* puVar12;
        undefined2* puVar13;
        byte* pbVar14;
        long lVar15;
        Vector3T<short>* pVVar16;
        char* pcVar17;
        Vector3T* pVVar18;
        ulong uVar19;
        array<signed char, 4ul>* this_03;
        undefined4 uVar20;
        float fVar21;
        float fVar22;
        undefined1 local_70[8];
        float local_68;
        TerrainVertex* local_58;
        PatchFaceData* local_50;
        float local_48;
        float local_44;
        undefined2 local_40;
        undefined1 local_3e;
        Vector3T<short>* local_38;

        local_50 = param_2;
        this_02 = (Vector3T<short>*)(&field_13264)->push_back_uninitialized();
        local_44 = (float)m_gridSize;
        uVar20 = floor(*(float*)&param_1->field_40 - local_44);
        local_38 = (Vector3T<short>*)CONCAT44(local_38._4_4_, uVar20);
        local_48 = (float)floor(*(float*)&param_1->field_44);
        fVar21 = (float)floor(*(float*)&param_1->field_48 - local_44);
        if ((0.0 <= local_38._0_4_) && (0.0 <= fVar21)) {
            fVar22 = local_38._0_4_ + -16383.0;
            pVVar18 = (Vector3T*)(ulong)(uint)(int)(short)(int)fVar22;
            this_02->Set((short)(int)fVar22, (short)(int)local_48, (short)(int)(fVar21 + -16383.0));
            local_70 = (undefined1[8])math::operator*((Vector3T*)&param_1->field_52, 127.0);
            local_68 = fVar22;
            uVar20 = math::Vector3TFromVector3<signed char>((math*)local_70, pVVar18);
            local_40 = (undefined2)uVar20;
            local_3e = (undefined1)((uint)uVar20 >> 16);
            uVar19 = 0;
            puVar12 = (undefined1*)math::Vector3T<signed char>::operator[]((Vector3T<signed char>*)&local_40, 0);
            uVar1 = *puVar12;
            this_03 = (array<signed char, 4ul>*)(this_02 + 16);
            local_58 = param_1;
            puVar12 = (undefined1*)std::array<signed char, 4ul>::operator[](this_03, 0);
            *puVar12 = uVar1;
            puVar12 = (undefined1*)math::Vector3T<signed char>::operator[]((Vector3T<signed char>*)&local_40, 1);
            uVar1 = *puVar12;
            puVar12 = (undefined1*)std::array<signed char, 4ul>::operator[](this_03, 1);
            *puVar12 = uVar1;
            puVar12 = (undefined1*)math::Vector3T<signed char>::operator[]((Vector3T<signed char>*)&local_40, 2);
            uVar1 = *puVar12;
            puVar12 = (undefined1*)std::array<signed char, 4ul>::operator[](this_03, 2);
            *puVar12 = uVar1;
            fVar21 = *(float*)((long)&param_1->field_20 + 4);
            puVar12 = (undefined1*)std::array<signed char, 4ul>::operator[](this_03, 3);
            this_01 = local_50;
            *puVar12 = (char)(int)(fVar21 * 127.0);
            puVar13 = (undefined2*)math::Vector3T<unsigned short>::operator[]((Vector3T<unsigned short>*)local_50, 0);
            *(undefined2*)(this_02 + 8) = *puVar13;
            puVar13 = (undefined2*)math::Vector3T<unsigned short>::operator[]((Vector3T<unsigned short>*)this_01, 1);
            *(undefined2*)(this_02 + 10) = *puVar13;
            pbVar14 = (byte*)math::Vector3T<unsigned short>::operator[]((Vector3T<unsigned short>*)this_01, 2);
            bVar2 = *pbVar14;
            lVar15 = math::Vector3T<unsigned short>::operator[]((Vector3T<unsigned short>*)this_01, 2);
            *(uint*)(this_02 + 12) = (uint) * (byte*)(lVar15 + 1) << 16 | (uint)bVar2;
            puVar12 = &this_01->field_6;
            pVVar16 = (Vector3T<short>*)math::Vector3T<unsigned char>::operator[]((Vector3T<unsigned char>*)puVar12, 0);
            local_38._0_1_ = *pVVar16;
            pVVar16 = (Vector3T<short>*)math::Vector3T<unsigned char>::operator[]((Vector3T<unsigned char>*)puVar12, 1);
            VVar3 = *pVVar16;
            pVVar16 = (Vector3T<short>*)math::Vector3T<unsigned char>::operator[]((Vector3T<unsigned char>*)puVar12, 2);
            pTVar10 = local_58;
            VVar4 = *pVVar16;
            this_02[20] = local_38._0_1_;
            this_02[21] = VVar3;
            this_02[22] = VVar4;
            this_02[23] = (Vector3T<short>)0;
            local_38._0_1_ = *(Vector3T<short>*)((long)&local_58->field_12 + 7);
            this_00 = (array<unsigned char, 4ul>*)(this_02 + 24);
            puVar12 = (undefined1*)std::array<unsigned char, 4ul>::operator[](this_00, 0);
            *puVar12 = local_38._0_1_;
            local_38._0_1_ = *(Vector3T<short>*)((long)&pTVar10->field_12 + 6);
            puVar12 = (undefined1*)std::array<unsigned char, 4ul>::operator[](this_00, 1);
            *puVar12 = local_38._0_1_;
            local_38 = (Vector3T<short>*)CONCAT71(local_38._1_7_, *(undefined1*)((long)&pTVar10->field_12 + 5));
            puVar12 = (undefined1*)std::array<unsigned char, 4ul>::operator[](this_00, 2);
            *puVar12 = local_38._0_1_;
            uVar1 = *(undefined1*)((long)&pTVar10->field_12 + 4);
            puVar12 = (undefined1*)std::array<unsigned char, 4ul>::operator[](this_00, 3);
            *puVar12 = uVar1;
            *(undefined2*)(this_02 + 28) = *(undefined2*)param_3;
            this_02[30] = *(Vector3T<short>*)(param_3 + 2);
            local_38 = this_02 + 32;
            do {
                pbVar14 = (byte*)math::Vector3T<unsigned char>::operator[]((Vector3T<unsigned char>*)&this_01->field_15,
                                                                           (uint)uVar19);
                bVar2 = *pbVar14;
                pbVar14 = (byte*)math::Vector3T<unsigned char>::operator[]((Vector3T<unsigned char>*)&this_01->field_18,
                                                                           (uint)uVar19);
                bVar5 = *pbVar14;
                pbVar14 =
                    (byte*)std::array<unsigned char, 4ul>::operator[]((array<unsigned char, 4ul>*)local_38, uVar19);
                pPVar11 = local_50;
                *pbVar14 = bVar5 >> 4 | bVar2 & 240;
                uVar19 = uVar19 + 1;
            } while (uVar19 != 3);
            puVar12 = &local_50->field_9;
            pbVar14 = (byte*)std::array<bool, 3ul>::operator[]((array<bool, 3ul>*)puVar12, 0);
            bVar2 = *pbVar14;
            pbVar14 = (byte*)std::array<bool, 3ul>::operator[]((array<bool, 3ul>*)puVar12, 1);
            bVar5 = *pbVar14;
            pbVar14 = (byte*)std::array<bool, 3ul>::operator[]((array<bool, 3ul>*)puVar12, 2);
            bVar6 = *pbVar14;
            puVar12 = &pPVar11->field_12;
            pcVar17 = (char*)std::array<bool, 3ul>::operator[]((array<bool, 3ul>*)puVar12, 0);
            cVar7 = *pcVar17;
            pcVar17 = (char*)std::array<bool, 3ul>::operator[]((array<bool, 3ul>*)puVar12, 1);
            cVar8 = *pcVar17;
            pcVar17 = (char*)std::array<bool, 3ul>::operator[]((array<bool, 3ul>*)puVar12, 2);
            cVar9 = *pcVar17;
            pbVar14 = (byte*)std::array<unsigned char, 4ul>::operator[]((array<unsigned char, 4ul>*)local_38, 3);
            *pbVar14 = cVar9 << 3 | cVar8 << 2 | cVar7 * '\x02' | bVar2 | bVar5 | bVar6;
            return;
        }
        local_44 = fVar21;
        /* WARNING: Subroutine does not return */
        LogAssert("px >= 0 && pz >= 0",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/terrain/"
                  "TerrainPatch.cpp",
                  558, (char*)0);
    }

    // 0x1007b66e0, 304 bytes, placed by class name
    // TerrainPatch::AddVertexPos(TerrainVertex const&, int const*)
    void TerrainPatch::AddVertexPos(TerrainVertex* param_1, int* param_2) {
        Vector3T<short>* this_00;
        undefined1 local_40[16];
        float local_30;
        float local_2c;

        this_00 = (Vector3T<short>*)(&field_13296)->push_back_uninitialized();
        local_2c = (float)m_gridSize;
        local_40._12_4_ = floor(*(float*)&param_1->field_40 - local_2c);
        if (param_2 == (int*)0) {
            local_30 = (float)floor(*(float*)&param_1->field_44);
        } else {
            local_30 = (float)*param_2;
        }
        local_2c = (float)floor(*(float*)&param_1->field_48 - local_2c);
        if ((0.0 <= (float)local_40._12_4_) && (0.0 <= local_2c)) {
            this_00->Set((short)(int)((float)local_40._12_4_ + -16383.0), (short)(int)local_30,
                         (short)(int)(local_2c + -16383.0));
            new (local_40) math::ColourHSL((float)local_40._12_4_, local_30, local_2c);
            (&field_16, (Vector3T*)local_40)->AddPoint();
            return;
        }
        /* WARNING: Subroutine does not return */
        LogAssert("px >= 0 && pz >= 0",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/terrain/"
                  "TerrainPatch.cpp",
                  619, (char*)0);
    }

    // 0x1007b6a00, 2112 bytes, placed by class name
    // TerrainPatch::GatherDrawableElements(DrawableQueue&, RT7Core&, SceneViewData const&, EffectManager const&, eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator> const&)
    void TerrainPatch::GatherDrawableElements(DrawableQueue* param_1, RT7Core* param_2, SceneViewData* param_3,
                                              EffectManager* param_4, fixed_vector* param_5) {
        char cVar1;
        int iVar2;
        undefined4 uVar3;
        RenderPassBitSet* pRVar4;
        vector* pvVar5;
        Matrix44T* pMVar6;
        float* pfVar7;
        long* plVar8;
        undefined8 uVar9;
        Vector4T<float>* this_00;
        CommandLine* pCVar10;
        TerrainPatch_DE* pTVar11;
        uint uVar12;
        RenderMaterial* this_01;
        undefined4 uVar14;
        TerrainPatch* pTVar15;
        TerrainPatch* pTVar16;
        TerrainPatch* pTVar17;
        TerrainPatch* pTVar18;
        TerrainPatch* pTVar19;
        TerrainPatch* pTVar20;
        AABB local_128;
        long* local_100;
        undefined1* local_f8;
        ulong local_f0;
        undefined1* local_e8;
        RenderMaterial* local_c8;
        TerrainPatch* local_c0;
        undefined8 local_b8[2];
        undefined1* local_a0[2];
        uint local_90;
        float local_8c;
        OBB local_88;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if ((m_showPatches != '\0') && (iVar2 = GetVertexDataSize(this), iVar2 != 0)) {
            pRVar4 = (RenderPassBitSet*)param_3->GetRenderPassBits();
            cVar1 = (&field_48, pRVar4)->CanRenderInPasses();
            if ((cVar1 != '\0') && (cVar1 = IsReadyToRender(this), cVar1 != '\0')) {
                local_c8 = (RenderMaterial*)&field_48;
                new (&local_88) math::OBB();
                (&field_16, &local_88)->GetOBB();
                local_88.Transform(field_13096);
                uVar12 = 0;
                local_90 = 0;
                local_c0 = this;
                if (*field_13104 <= 0.0 && *field_13104 != 0.0) {
                    local_90 = param_4->IsEnabled(94);
                }
                new (&local_128) math::AABB();
                local_88.GetMinimumEnclosingAABB(&local_128);
                pvVar5 = param_3->SSOBeginPtr((type*)&local_128);
                local_a0[0] = (undefined1*)local_128.GetFurthestPoint(pvVar5);
                pvVar5 = param_3->SSOBeginPtr(pvVar5);
                local_b8[0] = math::operator-((Vector3T*)local_a0, (Vector3T*)pvVar5);
                local_b8->LengthSq();
                local_8c = 3.4028235e+38;
                do {
                    local_b8[0] = local_128.GetCornerPos(uVar12);
                    pMVar6 = (Matrix44T*)param_3->GetScreen();
                    uVar14 = DstFromCameraPlane((Vector3T*)local_b8, pMVar6);
                    local_a0[0] = (undefined1*)CONCAT44(local_a0[0]._4_4_, uVar14);
                    pfVar7 = std::min<float>(&local_8c, (float*)local_a0);
                    local_8c = *pfVar7;
                    uVar12 = uVar12 + 1;
                } while (uVar12 != 8);
                plVar8 = (long*)(&param_3->field_520)->HeapBeginPtr();
                local_100 = (long*)(&param_3->field_520)->end();
                if (plVar8 != local_100) {
                    local_f0 = (ulong)(byte)local_90;
                    local_90 = (local_90 & 255) * 3;
                    local_e8 = &local_c0->field_13488;
                    local_f8 = &local_c0->field_13680;
                    this_01 = local_c8;
                    do {
                        if (*plVar8 == 0) {
                            /* WARNING: Subroutine does not return */
                            LogAssert("renderPass",
                                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                      "runetek7/terrain/TerrainPatch.cpp",
                                      747, (char*)0);
                        }
                        uVar14 = (*plVar8)->GetPos();
                        uVar9 = this_01->GetRenderPassEffect(uVar14);
                        new (local_b8) math::Vector2T<int>();
                        uVar3 = (*plVar8)->GetPos();
                        switch (uVar3) {
                        case 0:
                            cVar1 = local_c0->GetRenderFlag(1);
                            if ((cVar1 != '\0') && (*PTR_m_enablePatchShadows_100ee69b0 != '\0')) {
                                pCVar10 = (CommandLine*)param_1->GetDrawableGroup(uVar14, 0);
                                pTVar15._0_4_ = (TerrainPatch*)pCVar10->GetPos();
                                UpdateShadowPassEffect(pTVar15._0_4_, local_8c);
                                pTVar15 = local_c0;
                                local_a0[0] = local_f8;
                                pTVar11 = DrawableElementPool<TerrainPatch_DE>::Create<
                                    TerrainPatch&,
                                    eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator> const&,
                                    math::OBB&, float&, render::InputAssemblerState*>(
                                    local_c0, param_5, &local_88, &local_8c, (InputAssemblerState**)local_a0);
                                uVar9 = local_b8[0];
                                std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(
                                    (unique_ptr<DrawableElement, DrawableElementDeleter>*)local_a0,
                                    (DrawableElement*)pTVar11);
                                param_1->AddDrawable(uVar9, local_a0, pTVar15, 0, uVar14);
                                break;
                            }
                            goto switchD_1007b6cda_caseD_c;
                        default:
                            /* WARNING: Subroutine does not return */
                            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                            "graphics/runetek7/terrain/TerrainPatch.cpp",
                                            831, "Unsupported render pass");
                        case 2:
                            pCVar10 = (CommandLine*)param_1->GetDrawableGroup(uVar14, local_90);
                            uVar3 = pCVar10->GetPos();
                            pTVar15 = local_c0;
                            UpdateReflectionPassEffect(pTVar16._0_4_, local_8c, local_c0, local_b8, uVar3, uVar9,
                                                       param_2, param_4, (int)local_f0);
                            local_a0[0] = local_e8;
                            pTVar11 = DrawableElementPool<TerrainPatch_DE>::Create<
                                TerrainPatch&, eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator> const&,
                                math::OBB&, float&, render::InputAssemblerState*>(
                                pTVar15, param_5, &local_88, &local_8c, (InputAssemblerState**)local_a0);
                            uVar9 = local_b8[0];
                            std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(
                                (unique_ptr<DrawableElement, DrawableElementDeleter>*)local_a0,
                                (DrawableElement*)pTVar11);
                            param_1->AddDrawable(uVar9, local_a0, pTVar15, local_90, uVar14);
                            break;
                        case 3:
                            pCVar10 = (CommandLine*)param_1->GetDrawableGroup(uVar14, local_90);
                            uVar3 = pCVar10->GetPos();
                            pTVar15 = local_c0;
                            UpdateSimpleGeometryPassEffect(pTVar17._0_4_, local_8c, local_c0, local_b8, uVar3, uVar9,
                                                           param_2, param_4, uVar14);
                            local_a0[0] = local_e8;
                            pTVar11 = DrawableElementPool<TerrainPatch_DE>::Create<
                                TerrainPatch&, eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator> const&,
                                math::OBB&, float&, render::InputAssemblerState*>(
                                pTVar15, param_5, &local_88, &local_8c, (InputAssemblerState**)local_a0);
                            uVar9 = local_b8[0];
                            std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(
                                (unique_ptr<DrawableElement, DrawableElementDeleter>*)local_a0,
                                (DrawableElement*)pTVar11);
                            param_1->AddDrawable(uVar9, local_a0, pTVar15, local_90, uVar14);
                            break;
                        case 4:
                            pCVar10 = (CommandLine*)param_1->GetDrawableGroup(uVar14, local_90);
                            uVar3 = pCVar10->GetPos();
                            pTVar15 = local_c0;
                            UpdateForwardPassEffect(pTVar18._0_4_, local_8c, local_c0, local_b8, uVar3, uVar9, param_2,
                                                    param_4, (int)local_f0, &local_88);
                            local_a0[0] = local_e8;
                            pTVar11 = DrawableElementPool<TerrainPatch_DE>::Create<
                                TerrainPatch&, eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator> const&,
                                math::OBB&, float&, render::InputAssemblerState*>(
                                pTVar15, param_5, &local_88, &local_8c, (InputAssemblerState**)local_a0);
                            uVar9 = local_b8[0];
                            std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(
                                (unique_ptr<DrawableElement, DrawableElementDeleter>*)local_a0,
                                (DrawableElement*)pTVar11);
                            param_1->AddDrawable(uVar9, local_a0, pTVar15, local_90, uVar14);
                            break;
                        case 5:
                            pCVar10 = (CommandLine*)param_1->GetDrawableGroup(uVar14, 0);
                            uVar3 = pCVar10->GetPos();
                            pTVar15 = local_c0;
                            UpdateMiniMapPassEffect(pTVar19._0_4_, local_8c, local_c0, local_b8, uVar3, uVar9, param_2,
                                                    param_4);
                            local_a0[0] = local_e8;
                            pTVar11 = DrawableElementPool<TerrainPatch_DE>::Create<
                                TerrainPatch&, eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator> const&,
                                math::OBB&, float&, render::InputAssemblerState*>(
                                pTVar15, param_5, &local_88, &local_8c, (InputAssemblerState**)local_a0);
                            this_00 = (Vector4T<float>*)math::Matrix44T<float>::operator[](
                                (Matrix44T<float>*)pTVar11->field_112, 3);
                            pfVar7 = (float*)math::Vector4T<float>::operator[](this_00, 1);
                            uVar9 = local_b8[0];
                            *pfVar7 = *pfVar7 + 100.0;
                            std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(
                                (unique_ptr<DrawableElement, DrawableElementDeleter>*)local_a0,
                                (DrawableElement*)pTVar11);
                            param_1->AddDrawable(uVar9, local_a0, local_c0, 0, uVar14);
                            break;
                        case 9:
                            cVar1 = this_01->GetOption(13);
                            if (cVar1 != '\0') {
                                pCVar10 = (CommandLine*)param_1->GetDrawableGroup(uVar14, local_90);
                                uVar3 = pCVar10->GetPos();
                                pTVar15 = local_c0;
                                UpdateSimpleGeometryPassEffect(pTVar20._0_4_, local_8c, local_c0, local_b8, uVar3,
                                                               uVar9, param_2, param_4, uVar14);
                                local_a0[0] = local_e8;
                                pTVar11 = DrawableElementPool<TerrainPatch_DE>::Create<
                                    TerrainPatch&,
                                    eastl::fixed_vector<unsigned char, 256ul, true, eastl::allocator> const&,
                                    math::OBB&, float&, render::InputAssemblerState*>(
                                    pTVar15, param_5, &local_88, &local_8c, (InputAssemblerState**)local_a0);
                                uVar9 = local_b8[0];
                                std::unique_ptr<DrawableElement, DrawableElementDeleter>::unique_ptr<true, void>(
                                    (unique_ptr<DrawableElement, DrawableElementDeleter>*)local_a0,
                                    (DrawableElement*)pTVar11);
                                param_1->AddDrawable(uVar9, local_a0, pTVar15, local_90, uVar14);
                                break;
                            }
                        case 12:
                        case 14:
                            goto switchD_1007b6cda_caseD_c;
                        }
                        local_a0->~unique_ptr();
                        this_01 = local_c8;
                    switchD_1007b6cda_caseD_c:
                        plVar8 = plVar8 + 1;
                    } while (plVar8 != local_100);
                }
            }
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007b7270, 128 bytes, placed by class name
    // TerrainPatch::IsReadyToRender() const
    undefined8 TerrainPatch::IsReadyToRender() {
        char cVar1;
        int iVar2;
        TextureAtlasReference* this_00;
        duration local_30[12];
        undefined4 local_24;

        cVar1 = (&field_13872)->valid();
        if (cVar1 != '\0') {
            local_24 = 0;
            std::chrono::duration<long long, std::ratio<1l, 1l>>::duration<int>((int*)local_30, (type*)&local_24);
            iVar2 = std::future<void>::wait_for<long long, std::ratio<1l, 1l>>((future<void>*)&field_13872, local_30);
            if (iVar2 == 0) {
                this_00 = (TextureAtlasReference*)(&field_48)->GetTextureAtlasReference();
                if ((this_00 == (TextureAtlasReference*)0) || (cVar1 = this_00->CheckTexturesLoaded(), cVar1 != '\0')) {
                    return 1;
                }
            }
        }
        return 0;
    }

    // 0x1007b73b0, 1504 bytes, placed by class name
    // TerrainPatch::UpdateForwardPassEffect(DrawableSortKey&, DrawableSortKeyType, RenderPassEffect&, RT7Core&, EffectManager const&, float, float, bool, math::OBB const&)
    void TerrainPatch::UpdateForwardPassEffect(undefined8 param_1_00, float param_2, TerrainPatch* this,
                                               undefined8* param_1, uint param_5, RenderPassEffect* param_6,
                                               RT7Core* param_7, EffectManager* param_8, byte param_9, OBB* param_10) {
        undefined1* this_00;
        char cVar1;
        undefined1 uVar2;
        bool bVar3;
        byte bVar4;
        int iVar5;
        long lVar6;
        shared_ptr* psVar7;
        Sphere* pSVar8;
        SunlightShadows* this_03;
        DirLightCsmManager* this_04;
        PointLightShadows* this_05;
        Layout* this_06;
        vector* pvVar9;
        PostProcessController* this_07;
        undefined8 uVar10;
        undefined8 uVar11;
        ulong uVar12;
        ulong uVar13;
        BucketAllocatorEASTL* pBVar14;
        TerrainPatch* pTVar15;
        BucketAllocatorEASTL* pBVar17;
        float fVar18;
        undefined1 auVar19[16];
        Sphere local_b8[3];
        undefined** local_78;
        float local_70;
        undefined8* local_68;
        TerrainPatch* local_50;
        undefined4 local_40;
        undefined4 local_3c;
        char local_35;

        local_68 = param_1;
        cVar1 = param_8->IsEnabled(29);
        if (cVar1 == '\0') {
            local_40 = 0;
        } else {
            local_40 = param_8->IsEnabled(48);
        }
        local_35 = param_8->IsEnabled(26);
        lVar6 = (&field_48)->GetTextureAtlasReference();
        local_50 = this;
        if (lVar6 == 0) {
            local_3c = 0;
        } else {
            local_3c = param_8->IsEnabled(27);
        }
        iVar5 = (&field_48)->GetEndPosition();
        uVar2 = param_8->IsEnabled(39);
        param_6->Set(29, cVar1);
        param_6->Set(48, (undefined1)local_40);
        param_6->Set(63, (undefined1)local_3c);
        param_6->Set(54, iVar5 != -1);
        param_6->Set(39, uVar2);
        pTVar15 = local_50;
        if (local_35 != '\0') {
            this_00 = &local_50->field_13232;
            bVar3 = operator==((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
            if (bVar3) {
                GetWorldTransform((TerrainPatch*)local_b8);
                local_78 = (undefined**)local_b8->GetPos();
                local_70 = param_2;
                psVar7 = (shared_ptr*)local_78.GetEffect(pTVar15);
                shared_ptr<PointLightIndicesEffect>::operator=((shared_ptr<PointLightIndicesEffect>*)this_00, psVar7);
            }
            uVar2 = 0;
            bVar3 = operator!=((shared_ptr*)this_00, (_func_decltype_nullptr*)0);
            if (bVar3) {
                math::Sphere::Sphere(local_b8);
                param_10->GetMinimumEnclosingSphere(local_b8);
                pSVar8 = (Sphere*)shared_ptr<PointLightIndicesEffect>::operator->(
                    (shared_ptr<PointLightIndicesEffect>*)this_00);
                uVar2 = PointLightIndicesEffect::TestVisiblePointLightInfluence(pSVar8);
            }
            param_6->Set(26, uVar2);
        }
        this_03 = (SunlightShadows*)EffectManager::GetEffect<PlanarReflection>(param_8, 30);
        this_04 = (DirLightCsmManager*)this_03->GetSunlightCsmManager();
        cVar1 = param_8->IsEnabled(30);
        if (cVar1 == '\0') {
            bVar3 = false;
        } else {
            fVar18 = (float)this_04->GetMaxShadowDistance();
            bVar3 = param_2 < fVar18;
        }
        if (bVar3 == false) {
            bVar4 = 0;
        } else {
            bVar4 = param_8->IsEnabled(28);
            bVar4 = (param_9 ^ 1) & bVar4;
        }
        param_6->Set(28, bVar4);
        param_6->Set(30, bVar3);
        this_05 = (PointLightShadows*)EffectManager::GetEffect<PlanarReflection>(param_8, 35);
        this_06 = (Layout*)this_05->GetPointLightSMManager();
        cVar1 = param_8->IsEnabled(26);
        if (cVar1 == '\0') {
        LAB_1007b7641:
            bVar3 = false;
        } else {
            cVar1 = param_8->IsEnabled();
            if (cVar1 == '\0')
                goto LAB_1007b7641;
            pvVar9 = eastl::string::Layout::SSOBeginPtr(this_06, (type*)35);
            bVar3 = param_2 < *(float*)(pvVar9 + 20);
        }
        param_6->Set(35, bVar3);
        auVar19 = param_8->BuildShaderEffectList(param_6);
        param_6->field_16 = auVar19._0_8_;
        param_6->field_24 = auVar19._8_8_;
        this_07 = (PostProcessController*)param_7->GetPostProcessController();
        lVar6 = this_07->GetCurrentConfig();
        if (*(char*)(lVar6 + 468) == '\0') {
            (&param_6->field_16, 64, 0)->Set();
        }
        uVar10 = param_7->GetShaderManager();
        uVar11 = TerrainPatchRenderer::GetVertexDecl();
        param_6->UpdateShader(param_8, uVar10, 6, uVar11, 4, 3);
        uVar12 = param_6->GetConstructedShaderId();
        if (5 < param_5) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/DrawableSortKey.h",
                            177, "Unknown sort key type");
        }
        bVar4 = (param_9 == 0) * '\x03' + 1;
        switch (param_5) {
        case 0:
            fVar18 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            pBVar14 = (BucketAllocatorEASTL*)(long)fVar18;
            pBVar17 =
                (BucketAllocatorEASTL*)((((long)(fVar18 - 9.223372e+18) & (long)pBVar14 >> 63 | (ulong)pBVar14) << 24 |
                                         (ulong)bVar4 << 56) +
                                        (uVar12 & 65535) + 16711680);
            break;
        case 1:
            fVar18 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            lVar6 = (long)fVar18;
            uVar13 = (ulong)((uint)lVar6 | (uint)(long)(fVar18 - 9.223372e+18) & (uint)(lVar6 >> 63));
            uVar12 = uVar12 & 65535;
            pBVar14 = (BucketAllocatorEASTL*)(uVar13 * 16777216);
            uVar13 = uVar13 * -16777216 + 72057594021150720 & 72057594021150720 | (ulong)bVar4 << 56;
            goto LAB_1007b7887;
        case 2:
            pBVar14 =
                (BucketAllocatorEASTL*)(((long)(float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5)) & 4294967295U) *
                                        256);
            pBVar17 = pBVar14 + ((uVar12 & 65535) << 40 | (ulong)bVar4 << 56) + 255;
            break;
        case 3:
            fVar18 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            pBVar14 = (BucketAllocatorEASTL*)(long)fVar18;
            uVar12 = (uVar12 & 65535) << 40 | (ulong)bVar4 << 56;
            uVar13 = ((long)(fVar18 - 9.223372e+18) & (long)pBVar14 >> 63 | (ulong)pBVar14) * -256 + 1099511627520;
        LAB_1007b7887:
            pBVar17 = (BucketAllocatorEASTL*)(uVar13 | uVar12);
            break;
        case 4:
            fVar18 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            lVar6 = (long)fVar18;
            pBVar14 =
                (BucketAllocatorEASTL*)((ulong)((uint)lVar6 | (uint)(long)(fVar18 - 9.223372e+18) & (uint)(lVar6 >> 63))
                                        << 32);
            pBVar17 = (BucketAllocatorEASTL*)((uVar12 & 65535) + ((ulong)bVar4 << 24 | (ulong)pBVar14) + 16711680);
            break;
        case 5:
            fVar18 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            uVar13 = (ulong)fVar18;
            pBVar14 = (BucketAllocatorEASTL*)((long)uVar13 >> 63);
            pBVar17 = (BucketAllocatorEASTL*)(((ulong)bVar4 << 24 |
                                               ((long)(fVar18 - 9.223372e+18) & (ulong)pBVar14 | uVar13) * -4294967296 |
                                               uVar12 & 65535) -
                                              4294967296);
        }
        new (local_b8)
            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(pBVar17, pBVar14);
        *local_68 = local_b8[0]._0_8_;
    }

    // 0x1007b7ac0, 928 bytes, placed by class name
    // TerrainPatch::UpdateReflectionPassEffect(DrawableSortKey&, DrawableSortKeyType, RenderPassEffect&, RT7Core&, EffectManager const&, float, float, bool)
    void TerrainPatch::UpdateReflectionPassEffect(undefined8 param_1_00, float param_2, TerrainPatch* this,
                                                  undefined8* param_1, uint param_5, RenderPassEffect* param_6,
                                                  RT7Core* param_7, EffectManager* param_8, char param_9) {
        undefined1 uVar1;
        int iVar2;
        long lVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        ulong uVar6;
        byte bVar7;
        ulong uVar8;
        BucketAllocatorEASTL* pBVar9;
        BucketAllocatorEASTL* pBVar10;
        float fVar11;
        undefined1 auVar12[16];
        undefined8 local_40;
        undefined1 local_31;

        local_31 = param_8->IsEnabled(29);
        lVar3 = (&field_48)->GetTextureAtlasReference();
        if (lVar3 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = param_8->IsEnabled(27);
        }
        iVar2 = (&field_48)->GetEndPosition();
        param_6->Set(29, local_31);
        param_6->Set(63, uVar1);
        param_6->Set(54, iVar2 != -1);
        auVar12 = param_8->BuildShaderEffectList(param_6);
        param_6->field_16 = auVar12._0_8_;
        param_6->field_24 = auVar12._8_8_;
        uVar4 = param_7->GetShaderManager();
        uVar5 = TerrainPatchRenderer::GetVertexDecl();
        param_6->UpdateShader(param_8, uVar4, 6, uVar5, 2, 3);
        uVar6 = param_6->GetConstructedShaderId();
        if (5 < param_5) {
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/DrawableSortKey.h",
                            177, "Unknown sort key type");
        }
        bVar7 = (param_9 == '\0') * '\x03' + 1;
        switch (param_5) {
        case 0:
            fVar11 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            pBVar9 = (BucketAllocatorEASTL*)(long)fVar11;
            pBVar10 =
                (BucketAllocatorEASTL*)((((long)(fVar11 - 9.223372e+18) & (long)pBVar9 >> 63 | (ulong)pBVar9) << 24 |
                                         (ulong)bVar7 << 56) +
                                        (uVar6 & 65535) + 16711680);
            break;
        case 1:
            fVar11 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            lVar3 = (long)fVar11;
            uVar8 = (ulong)((uint)lVar3 | (uint)(long)(fVar11 - 9.223372e+18) & (uint)(lVar3 >> 63));
            uVar6 = uVar6 & 65535;
            pBVar9 = (BucketAllocatorEASTL*)(uVar8 * 16777216);
            uVar8 = uVar8 * -16777216 + 72057594021150720 & 72057594021150720 | (ulong)bVar7 << 56;
            goto LAB_1007b7d67;
        case 2:
            pBVar9 =
                (BucketAllocatorEASTL*)(((long)(float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5)) & 4294967295U) *
                                        256);
            pBVar10 = pBVar9 + ((uVar6 & 65535) << 40 | (ulong)bVar7 << 56) + 255;
            break;
        case 3:
            fVar11 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            pBVar9 = (BucketAllocatorEASTL*)(long)fVar11;
            uVar6 = (uVar6 & 65535) << 40 | (ulong)bVar7 << 56;
            uVar8 = ((long)(fVar11 - 9.223372e+18) & (long)pBVar9 >> 63 | (ulong)pBVar9) * -256 + 1099511627520;
        LAB_1007b7d67:
            pBVar10 = (BucketAllocatorEASTL*)(uVar8 | uVar6);
            break;
        case 4:
            fVar11 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            lVar3 = (long)fVar11;
            pBVar9 =
                (BucketAllocatorEASTL*)((ulong)((uint)lVar3 | (uint)(long)(fVar11 - 9.223372e+18) & (uint)(lVar3 >> 63))
                                        << 32);
            pBVar10 = (BucketAllocatorEASTL*)((uVar6 & 65535) + ((ulong)bVar7 << 24 | (ulong)pBVar9) + 16711680);
            break;
        case 5:
            fVar11 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            uVar8 = (ulong)fVar11;
            pBVar9 = (BucketAllocatorEASTL*)((long)uVar8 >> 63);
            pBVar10 = (BucketAllocatorEASTL*)(((ulong)bVar7 << 24 |
                                               ((long)(fVar11 - 9.223372e+18) & (ulong)pBVar9 | uVar8) * -4294967296 |
                                               uVar6 & 65535) -
                                              4294967296);
        }
        new (&local_40)
            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(pBVar10, pBVar9);
        *param_1 = local_40;
    }

    // 0x1007b7e60, 848 bytes, placed by class name
    // TerrainPatch::UpdateSimpleGeometryPassEffect(DrawableSortKey&, DrawableSortKeyType, RenderPassEffect&, RT7Core&, EffectManager const&, float, float, RenderPassType)
    void TerrainPatch::UpdateSimpleGeometryPassEffect(undefined8 param_1_00, float param_2, TerrainPatch* this,
                                                      undefined8* param_1, undefined4 param_5,
                                                      RenderPassEffect* param_6, RT7Core* param_7,
                                                      EffectManager* param_8, undefined4 param_9) {
        undefined1 uVar1;
        long lVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        ulong uVar5;
        ulong uVar6;
        uint* puVar7;
        EntityHighlight** ppEVar8;
        float fVar9;
        undefined1 auVar10[16];
        undefined8 local_38;

        lVar2 = (&field_48)->GetTextureAtlasReference();
        if (lVar2 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = param_8->IsEnabled(27);
        }
        param_6->Set(63, uVar1);
        auVar10 = param_8->BuildShaderEffectList(param_6);
        param_6->field_16 = auVar10._0_8_;
        param_6->field_24 = auVar10._8_8_;
        uVar3 = param_7->GetShaderManager();
        uVar4 = TerrainPatchRenderer::GetVertexDecl();
        param_6->UpdateShader(param_8, uVar3, 7, uVar4, param_9, 3);
        uVar5 = param_6->GetConstructedShaderId();
        puVar7 = &switchD_1007b7f1b::switchdataD_1007b8194;
        switch (param_5) {
        case 0:
            fVar9 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            uVar6 = (ulong)fVar9;
            puVar7 = (uint*)((long)uVar6 >> 63);
            ppEVar8 = (EntityHighlight**)(((long)(fVar9 - 9.223372e+18) & (ulong)puVar7 | uVar6) << 24 | uVar5 & 65535 |
                                          288230376168423424);
            break;
        case 1:
            fVar9 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            lVar2 = (long)fVar9;
            puVar7 = (uint*)72057594021150720;
            ppEVar8 =
                (EntityHighlight**)((ulong)((uint)lVar2 | (uint)(long)(fVar9 - 9.223372e+18) & (uint)(lVar2 >> 63)) *
                                                -16777216 +
                                            72057594021150720 &
                                        72057594021150720 |
                                    uVar5 & 65535 | 288230376151711744);
            break;
        case 2:
            ppEVar8 = (EntityHighlight**)((((long)(float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5)) & 4294967295U)
                                               << 8 |
                                           (uVar5 & 65535) << 40) +
                                          288230376151711999);
            break;
        case 3:
            fVar9 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            uVar6 = (ulong)fVar9;
            puVar7 = (uint*)((long)uVar6 >> 63);
            ppEVar8 =
                (EntityHighlight**)((uVar5 & 65535) << 40 | 288230376151711744 |
                                    ((long)(fVar9 - 9.223372e+18) & (ulong)puVar7 | uVar6) * -256 + 1099511627520);
            break;
        case 4:
            fVar9 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            lVar2 = (long)fVar9;
            puVar7 = (uint*)(lVar2 >> 63);
            ppEVar8 =
                (EntityHighlight**)(((ulong)((uint)lVar2 | (uint)(long)(fVar9 - 9.223372e+18) & (uint)(lVar2 >> 63))
                                     << 32) +
                                    (uVar5 & 65535) + 83820544);
            break;
        case 5:
            fVar9 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            uVar6 = (ulong)fVar9;
            puVar7 = (uint*)((long)uVar6 >> 63);
            ppEVar8 = (EntityHighlight**)((((long)(fVar9 - 9.223372e+18) & (ulong)puVar7 | uVar6) * -4294967296 |
                                           uVar5 & 65535) -
                                          4227858432);
            break;
        default:
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/DrawableSortKey.h",
                            177, "Unknown sort key type");
        }
        new (&local_38)
            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(ppEVar8, puVar7);
        *param_1 = local_38;
    }

    // 0x1007b81e0, 800 bytes, placed by class name
    // TerrainPatch::UpdateShadowPassEffect(DrawableSortKey&, DrawableSortKeyType, RenderPassEffect&, RT7Core&, EffectManager const&, float, float)
    void TerrainPatch::UpdateShadowPassEffect(undefined8 param_1_00, float param_2, undefined8 param_3,
                                              undefined8* param_1, undefined4 param_5, RenderPassEffect* param_6,
                                              RT7Core* param_7, EffectManager* param_8) {
        undefined8 uVar1;
        undefined8 uVar2;
        ulong uVar3;
        long lVar4;
        ulong uVar5;
        uint* puVar6;
        EntityHighlight** ppEVar7;
        float fVar8;
        undefined1 auVar9[16];
        undefined8 local_38;

        auVar9 = param_8->BuildShaderEffectList(param_6);
        param_6->field_16 = auVar9._0_8_;
        param_6->field_24 = auVar9._8_8_;
        uVar1 = param_7->GetShaderManager();
        uVar2 = TerrainPatchRenderer::GetVertexDeclPos();
        param_6->UpdateShader(param_8, uVar1, 9, uVar2, 0, 3);
        uVar3 = param_6->GetConstructedShaderId();
        puVar6 = &switchD_1007b8267::switchdataD_1007b84dc;
        switch (param_5) {
        case 0:
            fVar8 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            uVar5 = (ulong)fVar8;
            puVar6 = (uint*)((long)uVar5 >> 63);
            ppEVar7 = (EntityHighlight**)(((long)(fVar8 - 9.223372e+18) & (ulong)puVar6 | uVar5) << 24 | uVar3 & 65535 |
                                          288230376168423424);
            break;
        case 1:
            fVar8 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            lVar4 = (long)fVar8;
            puVar6 = (uint*)72057594021150720;
            ppEVar7 =
                (EntityHighlight**)((ulong)((uint)lVar4 | (uint)(long)(fVar8 - 9.223372e+18) & (uint)(lVar4 >> 63)) *
                                                -16777216 +
                                            72057594021150720 &
                                        72057594021150720 |
                                    uVar3 & 65535 | 288230376151711744);
            break;
        case 2:
            ppEVar7 = (EntityHighlight**)((((long)(float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5)) & 4294967295U)
                                               << 8 |
                                           (uVar3 & 65535) << 40) +
                                          288230376151711999);
            break;
        case 3:
            fVar8 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            uVar5 = (ulong)fVar8;
            puVar6 = (uint*)((long)uVar5 >> 63);
            ppEVar7 =
                (EntityHighlight**)((uVar3 & 65535) << 40 | 288230376151711744 |
                                    ((long)(fVar8 - 9.223372e+18) & (ulong)puVar6 | uVar5) * -256 + 1099511627520);
            break;
        case 4:
            fVar8 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            lVar4 = (long)fVar8;
            puVar6 = (uint*)(lVar4 >> 63);
            ppEVar7 =
                (EntityHighlight**)(((ulong)((uint)lVar4 | (uint)(long)(fVar8 - 9.223372e+18) & (uint)(lVar4 >> 63))
                                     << 32) +
                                    (uVar3 & 65535) + 83820544);
            break;
        case 5:
            fVar8 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            uVar5 = (ulong)fVar8;
            puVar6 = (uint*)((long)uVar5 >> 63);
            ppEVar7 = (EntityHighlight**)((((long)(fVar8 - 9.223372e+18) & (ulong)puVar6 | uVar5) * -4294967296 |
                                           uVar3 & 65535) -
                                          4227858432);
            break;
        default:
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/DrawableSortKey.h",
                            177, "Unknown sort key type");
        }
        new (&local_38)
            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(ppEVar7, puVar6);
        *param_1 = local_38;
    }

    // 0x1007b8500, 880 bytes, placed by class name
    // TerrainPatch::UpdateMiniMapPassEffect(DrawableSortKey&, DrawableSortKeyType, RenderPassEffect&, RT7Core&, EffectManager const&, float, float)
    void TerrainPatch::UpdateMiniMapPassEffect(undefined8 param_1_00, float param_2, TerrainPatch* this,
                                               undefined8* param_1, undefined4 param_5, RenderPassEffect* param_6,
                                               RT7Core* param_7, EffectManager* param_8) {
        undefined1 uVar1;
        undefined1 uVar2;
        long lVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        ulong uVar6;
        ulong uVar7;
        uint* puVar8;
        EntityHighlight** ppEVar9;
        float fVar10;
        undefined1 auVar11[16];
        undefined8 local_38;

        lVar3 = (&field_48)->GetTextureAtlasReference();
        if (lVar3 == 0) {
            uVar1 = 0;
        } else {
            uVar1 = param_8->IsEnabled(27);
        }
        uVar2 = param_8->IsEnabled(29);
        param_6->Set(29, uVar2);
        param_6->Set(63, uVar1);
        auVar11 = param_8->BuildShaderEffectList(param_6);
        param_6->field_16 = auVar11._0_8_;
        param_6->field_24 = auVar11._8_8_;
        uVar4 = param_7->GetShaderManager();
        uVar5 = TerrainPatchRenderer::GetVertexDecl();
        param_6->UpdateShader(param_8, uVar4, 6, uVar5, 5, 1);
        uVar6 = param_6->GetConstructedShaderId();
        puVar8 = &switchD_1007b85dc::switchdataD_1007b8854;
        switch (param_5) {
        case 0:
            fVar10 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            uVar7 = (ulong)fVar10;
            puVar8 = (uint*)((long)uVar7 >> 63);
            ppEVar9 = (EntityHighlight**)(((long)(fVar10 - 9.223372e+18) & (ulong)puVar8 | uVar7) << 24 |
                                          uVar6 & 65535 | 288230376168423424);
            break;
        case 1:
            fVar10 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            lVar3 = (long)fVar10;
            puVar8 = (uint*)72057594021150720;
            ppEVar9 =
                (EntityHighlight**)((ulong)((uint)lVar3 | (uint)(long)(fVar10 - 9.223372e+18) & (uint)(lVar3 >> 63)) *
                                                -16777216 +
                                            72057594021150720 &
                                        72057594021150720 |
                                    uVar6 & 65535 | 288230376151711744);
            break;
        case 2:
            ppEVar9 = (EntityHighlight**)((((long)(float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5)) & 4294967295U)
                                               << 8 |
                                           (uVar6 & 65535) << 40) +
                                          288230376151711999);
            break;
        case 3:
            fVar10 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            uVar7 = (ulong)fVar10;
            puVar8 = (uint*)((long)uVar7 >> 63);
            ppEVar9 =
                (EntityHighlight**)((uVar6 & 65535) << 40 | 288230376151711744 |
                                    ((long)(fVar10 - 9.223372e+18) & (ulong)puVar8 | uVar7) * -256 + 1099511627520);
            break;
        case 4:
            fVar10 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            lVar3 = (long)fVar10;
            puVar8 = (uint*)(lVar3 >> 63);
            ppEVar9 =
                (EntityHighlight**)(((ulong)((uint)lVar3 | (uint)(long)(fVar10 - 9.223372e+18) & (uint)(lVar3 >> 63))
                                     << 32) +
                                    (uVar6 & 65535) + 83820544);
            break;
        case 5:
            fVar10 = (float)(-(uint)(0.0 < param_2) & (uint)(param_2 + 0.5));
            uVar7 = (ulong)fVar10;
            puVar8 = (uint*)((long)uVar7 >> 63);
            ppEVar9 = (EntityHighlight**)((((long)(fVar10 - 9.223372e+18) & (ulong)puVar8 | uVar7) * -4294967296 |
                                           uVar6 & 65535) -
                                          4227858432);
            break;
        default:
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "renderer/DrawableSortKey.h",
                            177, "Unknown sort key type");
        }
        new (&local_38)
            eastl::compressed_pair<oldscape::dash3d::EntityHighlight**, BucketAllocatorEASTL>(ppEVar9, puVar8);
        *param_1 = local_38;
    }

    // 0x1007b8870, 176 bytes, placed by class name
    // TerrainPatch::RenderDebug(RenderPassType, DrawableElement&) const
    void TerrainPatch::RenderDebug(int param_2, long param_3) {
        long* plVar1;
        Matrix44T* pMVar2;
        AABB local_48;

        if ((m_showWorldAABB != '\0') && (param_2 == 4)) {
            pMVar2 = field_13096;
            if (field_13096 == (Matrix44T*)0) {
                pMVar2 = (Matrix44T*)PTR_IDENTITY_100ee6730;
            }
            math::Matrix44T<float>::operator=((Matrix44T<float>*)(param_3 + 112), pMVar2);
            new (&local_48) math::AABB((AABB*)&field_16);
            local_48.Transform((Matrix44T*)(param_3 + 112));
            plVar1 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
            if (plVar1 != (long*)0) {
                new (&local_48.field_32) oldscape::sidebars::SideBarData(-1, 3);
                (**(code**)(*plVar1 + 72))(plVar1, &local_48, &local_48.field_32);
            }
        }
    }

} // namespace jag::graphics

// 0x1007b6860, 16 bytes, placed by neighbouring functions
// floor(float)
void floor(float param_1) {
    _floorf();
}
