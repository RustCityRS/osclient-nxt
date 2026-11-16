// libs/graphics/runetek7/terrain/HalfSquareTerrainOverlayShape.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class HalfSquareTerrainOverlayShape {
    public:
        // virtual methods in vtable order
        virtual ~HalfSquareTerrainOverlayShape();
        virtual GetTriangles(GridTile&, GridTile*, GridTile*, int, int, TerrainPatch const*);
        virtual GridTile* GetDominantSource(GridTile const&, GridTile const*, GridTile const*, int,
                                            TerrainPatch const*) const;
        HalfSquareTerrainOverlayShape(TerrainOverlayShapeType);
        void Build(GridTile const&, int, int, TerrainBaseData const&, TerrainBaseData*, TerrainBaseData*,
                   TerrainPatch const*);

        // data members, from how the methods use this: 24 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[16];
    };

    // 0x1007b32d0, 32 bytes, base-object constructor, placed by class name and debug map
    // HalfSquareTerrainOverlayShape::HalfSquareTerrainOverlayShape(TerrainOverlayShapeType)
    void HalfSquareTerrainOverlayShape::HalfSquareTerrainOverlayShape() {
        TerrainOverlayShape::TerrainOverlayShape();
        field_0 = &PTR__HalfSquareTerrainOverlayShape_100f145f0;
    }

    // 0x1007b32f0, 16 bytes, complete-object constructor, placed by class name and debug map
    // HalfSquareTerrainOverlayShape::HalfSquareTerrainOverlayShape(TerrainOverlayShapeType): jumps straight to the base-object constructor

    // 0x1007b3300, 16 bytes, base-object destructor, placed by class name and debug map
    // HalfSquareTerrainOverlayShape::~HalfSquareTerrainOverlayShape()
    void HalfSquareTerrainOverlayShape::~HalfSquareTerrainOverlayShape() {
        ~TerrainOverlayShape();
    }

    // 0x1007b3310, 16 bytes, complete-object destructor, placed by class name and debug map
    // HalfSquareTerrainOverlayShape::~HalfSquareTerrainOverlayShape(): jumps straight to the base-object destructor

    // 0x1007b3320, 32 bytes, deleting destructor, placed by class name and debug map
    // HalfSquareTerrainOverlayShape::~HalfSquareTerrainOverlayShape()
    void HalfSquareTerrainOverlayShape::~HalfSquareTerrainOverlayShape() {
        ~HalfSquareTerrainOverlayShape(this);
        operator_delete(this);
    }

    // 0x1007b3340, 224 bytes, placed by class name and debug map
    // HalfSquareTerrainOverlayShape::GetTriangles(GridTile&, GridTile*, GridTile*, int, int, TerrainPatch const*)
    undefined1* HalfSquareTerrainOverlayShape::GetTriangles(GridTile* param_1, GridTile* param_2, GridTile* param_3,
                                                            int param_4, int param_5, TerrainPatch* param_6) {
        TerrainBaseData* pTVar1;
        undefined1** local_68;
        undefined8 local_60;
        undefined1* local_50;
        GridTile* local_48;
        GridTile* local_40;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (param_2 != (GridTile*)0) {
            *(undefined4*)&param_2->field_20 = *(undefined4*)&param_1->field_20;
            *(undefined4*)((long)&param_2->field_20 + 4) = *(undefined4*)((long)&param_1->field_20 + 4);
        }
        if (param_3 != (GridTile*)0) {
            *(undefined4*)&param_3->field_20 = *(undefined4*)&param_1->field_20;
            *(undefined4*)((long)&param_3->field_20 + 4) = *(undefined4*)((long)&param_1->field_20 + 4);
        }
        local_50 = &TerrainConstants::EMPTY_SOURCE;
        local_68 = &local_50;
        local_60 = 3;
        local_48 = param_2;
        local_40 = param_3;
        pTVar1 = TerrainConstants::GetDominantSource<TerrainBaseData>(false, (initializer_list*)&local_68);
        Build(this, param_1, param_4, param_5, pTVar1, (TerrainBaseData*)param_2, (TerrainBaseData*)param_3, param_6);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return &field_16;
    }

    // 0x1007b3420, 1248 bytes, placed by class name and debug map
    // HalfSquareTerrainOverlayShape::Build(GridTile const&, int, int, TerrainBaseData const&, TerrainBaseData*, TerrainBaseData*, TerrainPatch const*)
    void HalfSquareTerrainOverlayShape::Build(GridTile* param_1, int param_2, int param_3, TerrainBaseData* param_4,
                                              TerrainBaseData* param_5, TerrainBaseData* param_6,
                                              TerrainPatch* param_7) {
        float fVar1;
        vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>, eastl::allocator>* pvVar2;
        GridTile* pGVar3;
        TerrainBaseData* pTVar4;
        float fVar5;
        Vector2T<float>* pVVar6;
        Vector2T<float>* this_00;
        float* pfVar7;
        undefined4* puVar8;
        long lVar9;
        TerrainVertex* pTVar10;
        TerrainVertex* pTVar11;
        int iVar12;
        TerrainVertex* pTVar13;
        int iVar14;
        TerrainVertex local_e8;
        TerrainVertex local_a8;
        TerrainVertex* local_68;
        vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>, eastl::allocator>* local_60;
        GridTile* local_58;
        TerrainVertex* local_50;
        Vector2T<float>* local_48;
        TerrainBaseData* local_40;
        int local_38;
        float local_34;

        local_50 = (TerrainVertex*)param_5;
        local_40 = param_4;
        local_38 = param_3;
        (&field_16, 12)->reserve();
        local_60 = (vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>,
                           eastl::allocator>*)&field_16;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        new (&local_e8) TerrainVertex();
        new (&local_a8) TerrainVertex();
        pVVar6 = (Vector2T<float>*)TerrainConstants::GetEdgeCentreOffset(1, *(int*)&param_1->field_64);
        this_00 = (Vector2T<float>*)TerrainConstants::GetEdgeCentreOffset(3, *(int*)&param_1->field_64);
        pfVar7 = (float*)math::Vector2T<float>::operator[](pVVar6, 0);
        local_34 = *pfVar7;
        pfVar7 = (float*)math::Vector2T<float>::operator[](pVVar6, 1);
        iVar14 = local_38;
        pTVar4 = local_40;
        param_7->InterpolateCentreVertex(&local_e8, param_1, param_2, local_38, local_34, *pfVar7, local_40);
        puVar8 = (undefined4*)math::Vector2T<float>::operator[](this_00, 0);
        local_48 = (Vector2T<float>*)CONCAT44(local_48._4_4_, *puVar8);
        pfVar7 = (float*)math::Vector2T<float>::operator[](this_00, 1);
        pTVar13 = local_50;
        local_58 = param_1;
        local_34 = (float)param_2;
        param_7->InterpolateCentreVertex(&local_a8, param_1, param_2, iVar14, local_48._0_4_, *pfVar7, pTVar4);
        pGVar3 = local_58;
        if ((pTVar13 != (TerrainVertex*)0) && (*(char*)&pTVar13->field_12 != '\0')) {
            local_48 = (Vector2T<float>*)TerrainConstants::GetCornerCoord(5, *(int*)&local_58->field_64);
            local_40 = (TerrainBaseData*)TerrainConstants::GetCornerCoord(4, *(int*)&pGVar3->field_64);
            pvVar2 = local_60;
            eastl::vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>,
                          eastl::allocator>::size(local_60);
            eastl::vector<TerrainVertex, eastl::allocator>::resize((ulong)pvVar2);
            lVar9 = eastl::vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>,
                                  eastl::allocator>::size(pvVar2);
            pTVar10 = (TerrainVertex*)eastl::vector<TerrainVertex, eastl::allocator>::operator[](
                (vector<TerrainVertex, eastl::allocator>*)pvVar2, lVar9 - 3);
            TerrainConstants::CopyVertexLocationAndNormal(&local_e8, pTVar10);
            pTVar11 = &local_e8;
            if (pTVar13->field_28 == '\0') {
                pTVar11 = pTVar13;
            }
            TerrainConstants::CopyVertexSource((TerrainBaseData*)pTVar11, (TerrainBaseData*)pTVar10);
            pVVar6 = local_48;
            local_68 = (TerrainVertex*)&pTVar10[1].field_4;
            pfVar7 = (float*)math::Vector2T<float>::operator[](local_48, 0);
            iVar14 = (int)*pfVar7 + (int)local_34;
            pfVar7 = (float*)math::Vector2T<float>::operator[](pVVar6, 1);
            param_7->GetSharedVertex(local_68, iVar14, (int)*pfVar7 + local_38, pTVar13);
            pTVar4 = local_40;
            pfVar7 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)local_40, 0);
            iVar14 = (int)*pfVar7 + (int)local_34;
            pfVar7 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)pTVar4, 1);
            param_7->GetSharedVertex((TerrainVertex*)&pTVar10[2].field_8, iVar14, (int)*pfVar7 + local_38, pTVar13);
            eastl::vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>,
                          eastl::allocator>::size(pvVar2);
            eastl::vector<TerrainVertex, eastl::allocator>::resize((ulong)pvVar2);
            lVar9 = eastl::vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>,
                                  eastl::allocator>::size(pvVar2);
            pTVar10 = (TerrainVertex*)eastl::vector<TerrainVertex, eastl::allocator>::operator[](
                (vector<TerrainVertex, eastl::allocator>*)pvVar2, lVar9 - 3);
            TerrainConstants::CopyVertexLocationAndNormal(&local_e8, pTVar10);
            pTVar11 = &local_e8;
            if (pTVar13->field_28 == '\0') {
                pTVar11 = pTVar13;
            }
            TerrainConstants::CopyVertexSource((TerrainBaseData*)pTVar11, (TerrainBaseData*)pTVar10);
            pTVar4 = local_40;
            pfVar7 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)local_40, 0);
            iVar14 = (int)*pfVar7 + (int)local_34;
            pfVar7 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)pTVar4, 1);
            param_7->GetSharedVertex((TerrainVertex*)&pTVar10[1].field_4, iVar14, (int)*pfVar7 + local_38, pTVar13);
            TerrainConstants::CopyVertexLocationAndNormal(&local_a8, (TerrainVertex*)&pTVar10[2].field_8);
            if (pTVar13->field_28 != '\0') {
                pTVar13 = &local_a8;
            }
            TerrainConstants::CopyVertexSource((TerrainBaseData*)pTVar13, (TerrainBaseData*)&pTVar10[2].field_8);
        }
        pGVar3 = local_58;
        if ((param_6 != (TerrainBaseData*)0) && (*(char*)&param_6->field_12 != '\0')) {
            local_50 = (TerrainVertex*)TerrainConstants::GetCornerCoord(6, *(int*)&local_58->field_64);
            local_40 = (TerrainBaseData*)TerrainConstants::GetCornerCoord(7, *(int*)&pGVar3->field_64);
            pvVar2 = local_60;
            eastl::vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>,
                          eastl::allocator>::size(local_60);
            eastl::vector<TerrainVertex, eastl::allocator>::resize((ulong)pvVar2);
            lVar9 = eastl::vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>,
                                  eastl::allocator>::size(pvVar2);
            pTVar11 = (TerrainVertex*)eastl::vector<TerrainVertex, eastl::allocator>::operator[](
                (vector<TerrainVertex, eastl::allocator>*)pvVar2, lVar9 - 3);
            TerrainConstants::CopyVertexLocationAndNormal(&local_e8, pTVar11);
            pTVar13 = &local_e8;
            if (param_6->field_28 == '\0') {
                pTVar13 = (TerrainVertex*)param_6;
            }
            TerrainConstants::CopyVertexSource((TerrainBaseData*)pTVar13, (TerrainBaseData*)pTVar11);
            TerrainConstants::CopyVertexLocationAndNormal(&local_a8, (TerrainVertex*)&pTVar11[1].field_4);
            pTVar13 = &local_a8;
            if (param_6->field_28 == '\0') {
                pTVar13 = (TerrainVertex*)param_6;
            }
            TerrainConstants::CopyVertexSource((TerrainBaseData*)pTVar13, (TerrainBaseData*)&pTVar11[1].field_4);
            pTVar4 = local_40;
            pfVar7 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)local_40, 0);
            iVar14 = (int)*pfVar7 + (int)local_34;
            pfVar7 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)pTVar4, 1);
            param_7->GetSharedVertex((TerrainVertex*)&pTVar11[2].field_8, iVar14, (int)*pfVar7 + local_38, param_6);
            eastl::vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>,
                          eastl::allocator>::size(pvVar2);
            eastl::vector<TerrainVertex, eastl::allocator>::resize((ulong)pvVar2);
            lVar9 = eastl::vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>,
                                  eastl::allocator>::size(pvVar2);
            pTVar11 = (TerrainVertex*)eastl::vector<TerrainVertex, eastl::allocator>::operator[](
                (vector<TerrainVertex, eastl::allocator>*)pvVar2, lVar9 - 3);
            TerrainConstants::CopyVertexLocationAndNormal(&local_e8, pTVar11);
            pTVar13 = &local_e8;
            if (param_6->field_28 == '\0') {
                pTVar13 = (TerrainVertex*)param_6;
            }
            TerrainConstants::CopyVertexSource((TerrainBaseData*)pTVar13, (TerrainBaseData*)pTVar11);
            pfVar7 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)pTVar4, 0);
            fVar5 = local_34;
            iVar12 = (int)*pfVar7 + (int)local_34;
            pfVar7 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)pTVar4, 1);
            iVar14 = local_38;
            param_7->GetSharedVertex((TerrainVertex*)&pTVar11[1].field_4, iVar12, (int)*pfVar7 + local_38, param_6);
            pTVar13 = local_50;
            pfVar7 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)local_50, 0);
            fVar1 = *pfVar7;
            pfVar7 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)pTVar13, 1);
            param_7->GetSharedVertex((TerrainVertex*)&pTVar11[2].field_8, (int)fVar1 + (int)fVar5,
                                     (int)*pfVar7 + iVar14, param_6);
        }
    }

    // 0x1007b3900, 160 bytes, placed by class name and debug map
    // HalfSquareTerrainOverlayShape::GetDominantSource(GridTile const&, GridTile const*, GridTile const*, int, TerrainPatch const*) const
    GridTile* HalfSquareTerrainOverlayShape::GetDominantSource(GridTile* param_1, GridTile* param_2, GridTile* param_3,
                                                               int param_4, TerrainPatch* param_5) {
        switch (param_4) {
        case 4:
            if ((*(int*)&param_1->field_64 != 0) && (*(int*)&param_1->field_64 != 3)) {
                param_2 = param_3;
            }
            break;
        case 5:
            if (1 < *(uint*)&param_1->field_64) {
                param_2 = param_3;
            }
            break;
        case 6:
            if (1 < *(int*)&param_1->field_64 - 1U) {
                param_2 = param_3;
            }
            break;
        case 7:
            if ((*(uint*)&param_1->field_64 & 4294967294) != 2) {
                param_2 = param_3;
            }
            break;
        default:
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "terrain/HalfSquareTerrainOverlayShape.cpp",
                            51, "TerrainOverlayShape: Unknown corner: %i", (ulong)(uint)param_4);
        }
        return param_2;
    }

} // namespace jag::graphics
