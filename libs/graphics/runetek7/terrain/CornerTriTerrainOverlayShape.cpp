// libs/graphics/runetek7/terrain/CornerTriTerrainOverlayShape.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class CornerTriTerrainOverlayShape {
    public:
        // virtual methods in vtable order
        virtual ~CornerTriTerrainOverlayShape();
        virtual GetTriangles(GridTile&, GridTile*, GridTile*, int, int, TerrainPatch const*);
        virtual GridTile* GetDominantSource(GridTile const&, GridTile const*, GridTile const*, int,
                                            TerrainPatch const*) const;
        CornerTriTerrainOverlayShape(TerrainOverlayShapeType, bool);
        void Build(GridTile const&, int, int, TerrainBaseData&, TerrainBaseData*, TerrainBaseData*,
                   TerrainPatch const*);

        // data members, from how the methods use this: 49 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[40];
        undefined1 field_48; // offset 48
    };

    // 0x1007b2b20, 48 bytes, base-object constructor, placed by class name and debug map
    // CornerTriTerrainOverlayShape::CornerTriTerrainOverlayShape(TerrainOverlayShapeType, bool)
    void CornerTriTerrainOverlayShape::CornerTriTerrainOverlayShape(undefined8 param_2, undefined1 param_3) {
        TerrainOverlayShape::TerrainOverlayShape();
        field_0 = &PTR__CornerTriTerrainOverlayShape_100f145c0;
        field_48 = param_3;
    }

    // 0x1007b2b50, 16 bytes, complete-object constructor, placed by class name and debug map
    // CornerTriTerrainOverlayShape::CornerTriTerrainOverlayShape(TerrainOverlayShapeType, bool): jumps straight to the base-object constructor

    // 0x1007b2b60, 16 bytes, base-object destructor, placed by class name and debug map
    // CornerTriTerrainOverlayShape::~CornerTriTerrainOverlayShape()
    void CornerTriTerrainOverlayShape::~CornerTriTerrainOverlayShape() {
        ~TerrainOverlayShape();
    }

    // 0x1007b2b70, 16 bytes, complete-object destructor, placed by class name and debug map
    // CornerTriTerrainOverlayShape::~CornerTriTerrainOverlayShape(): jumps straight to the base-object destructor

    // 0x1007b2b80, 32 bytes, deleting destructor, placed by class name and debug map
    // CornerTriTerrainOverlayShape::~CornerTriTerrainOverlayShape()
    void CornerTriTerrainOverlayShape::~CornerTriTerrainOverlayShape() {
        ~CornerTriTerrainOverlayShape(this);
        operator_delete(this);
    }

    // 0x1007b2ba0, 240 bytes, placed by class name and debug map
    // CornerTriTerrainOverlayShape::GetTriangles(GridTile&, GridTile*, GridTile*, int, int, TerrainPatch const*)
    undefined1* CornerTriTerrainOverlayShape::GetTriangles(GridTile* param_1, GridTile* param_2, GridTile* param_3,
                                                           int param_4, int param_5, TerrainPatch* param_6) {
        GridTile* pGVar1;
        TerrainBaseData* pTVar2;
        GridTile* pGVar3;
        undefined1** local_68;
        undefined8 local_60;
        undefined1* local_50;
        GridTile* local_48;
        GridTile* local_40;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        pGVar3 = param_3;
        pGVar1 = param_2;
        if (field_48 == '\0') {
            pGVar3 = param_2;
            pGVar1 = param_3;
        }
        if (pGVar1 != (GridTile*)0) {
            *(undefined4*)&pGVar1->field_20 = *(undefined4*)&param_1->field_20;
            *(undefined4*)((long)&pGVar1->field_20 + 4) = *(undefined4*)((long)&param_1->field_20 + 4);
        }
        if (pGVar3 != (GridTile*)0) {
            *(undefined4*)&pGVar3->field_20 = *(undefined4*)&param_1->field_20;
            *(undefined4*)((long)&pGVar3->field_20 + 4) = *(undefined4*)((long)&param_1->field_20 + 4);
        }
        local_50 = &TerrainConstants::EMPTY_SOURCE;
        local_68 = &local_50;
        local_60 = 3;
        local_48 = param_2;
        local_40 = param_3;
        pTVar2 = TerrainConstants::GetDominantSource<TerrainBaseData>(false, (initializer_list*)&local_68);
        Build(this, param_1, param_4, param_5, pTVar2, (TerrainBaseData*)pGVar1, (TerrainBaseData*)pGVar3, param_6);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return &field_16;
    }

    // 0x1007b2c90, 1248 bytes, placed by class name and debug map
    // CornerTriTerrainOverlayShape::Build(GridTile const&, int, int, TerrainBaseData&, TerrainBaseData*, TerrainBaseData*, TerrainPatch const*)
    void CornerTriTerrainOverlayShape::Build(GridTile* param_1, int param_2, int param_3, TerrainBaseData* param_4,
                                             TerrainBaseData* param_5, TerrainBaseData* param_6,
                                             TerrainPatch* param_7) {
        float fVar1;
        vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>, eastl::allocator>* pvVar2;
        TerrainBaseData* pTVar3;
        GridTile* pGVar4;
        Vector2T<float>* pVVar5;
        Vector2T<float>* this_00;
        float* pfVar6;
        undefined4* puVar7;
        long lVar8;
        TerrainVertex* pTVar9;
        TerrainVertex* pTVar10;
        int iVar11;
        int iVar12;
        TerrainVertex* pTVar13;
        int iVar14;
        TerrainVertex local_e0;
        TerrainVertex local_a0;
        vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>, eastl::allocator>* local_60;
        TerrainBaseData* local_58;
        TerrainVertex* local_50;
        GridTile* local_48;
        Vector2T<float>* local_40;
        int local_38;
        int local_34;

        local_58 = param_4;
        local_50 = (TerrainVertex*)param_5;
        local_34 = param_3;
        (&field_16, 12)->reserve();
        local_60 = (vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>,
                           eastl::allocator>*)&field_16;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        new (&local_e0) TerrainVertex();
        new (&local_a0) TerrainVertex();
        pVVar5 = (Vector2T<float>*)TerrainConstants::GetEdgeCentreOffset(0, *(int*)&param_1->field_64);
        this_00 = (Vector2T<float>*)TerrainConstants::GetEdgeCentreOffset(3, *(int*)&param_1->field_64);
        pfVar6 = (float*)math::Vector2T<float>::operator[](pVVar5, 0);
        local_40._0_4_ = *pfVar6;
        pfVar6 = (float*)math::Vector2T<float>::operator[](pVVar5, 1);
        iVar14 = local_34;
        pTVar3 = local_58;
        param_7->InterpolateCentreVertex(&local_e0, param_1, param_2, local_34, local_40._0_4_, *pfVar6, local_58);
        puVar7 = (undefined4*)math::Vector2T<float>::operator[](this_00, 0);
        local_40 = (Vector2T<float>*)CONCAT44(local_40._4_4_, *puVar7);
        pfVar6 = (float*)math::Vector2T<float>::operator[](this_00, 1);
        pTVar13 = local_50;
        local_48 = param_1;
        local_38 = param_2;
        param_7->InterpolateCentreVertex(&local_a0, param_1, param_2, iVar14, local_40._0_4_, *pfVar6, pTVar3);
        if ((pTVar13 != (TerrainVertex*)0) && (*(char*)&pTVar13->field_12 != '\0')) {
            pVVar5 = (Vector2T<float>*)TerrainConstants::GetCornerCoord(4, *(int*)&local_48->field_64);
            pvVar2 = local_60;
            eastl::vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>,
                          eastl::allocator>::size(local_60);
            eastl::vector<TerrainVertex, eastl::allocator>::resize((ulong)pvVar2);
            lVar8 = eastl::vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>,
                                  eastl::allocator>::size(pvVar2);
            pTVar9 = (TerrainVertex*)eastl::vector<TerrainVertex, eastl::allocator>::operator[](
                (vector<TerrainVertex, eastl::allocator>*)pvVar2, lVar8 - 3);
            TerrainConstants::CopyVertexLocationAndNormal(&local_e0, pTVar9);
            pTVar10 = &local_e0;
            if (pTVar13->field_28 == '\0') {
                pTVar10 = pTVar13;
            }
            TerrainConstants::CopyVertexSource((TerrainBaseData*)pTVar10, (TerrainBaseData*)pTVar9);
            pfVar6 = (float*)math::Vector2T<float>::operator[](pVVar5, 0);
            iVar14 = (int)*pfVar6 + local_38;
            pfVar6 = (float*)math::Vector2T<float>::operator[](pVVar5, 1);
            param_7->GetSharedVertex((TerrainVertex*)&pTVar9[1].field_4, iVar14, (int)*pfVar6 + local_34, pTVar13);
            TerrainConstants::CopyVertexLocationAndNormal(&local_a0, (TerrainVertex*)&pTVar9[2].field_8);
            if (pTVar13->field_28 != '\0') {
                pTVar13 = &local_a0;
            }
            TerrainConstants::CopyVertexSource((TerrainBaseData*)pTVar13, (TerrainBaseData*)&pTVar9[2].field_8);
        }
        pGVar4 = local_48;
        if ((param_6 != (TerrainBaseData*)0) && (*(char*)&param_6->field_12 != '\0')) {
            local_40 = (Vector2T<float>*)TerrainConstants::GetCornerCoord(5, *(int*)&local_48->field_64);
            pVVar5 = (Vector2T<float>*)TerrainConstants::GetCornerCoord(6, *(int*)&pGVar4->field_64);
            local_58 = (TerrainBaseData*)TerrainConstants::GetCornerCoord(7, *(int*)&pGVar4->field_64);
            pvVar2 = local_60;
            eastl::vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>,
                          eastl::allocator>::size(local_60);
            eastl::vector<TerrainVertex, eastl::allocator>::resize((ulong)pvVar2);
            lVar8 = eastl::vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>,
                                  eastl::allocator>::size(pvVar2);
            pTVar10 = (TerrainVertex*)eastl::vector<TerrainVertex, eastl::allocator>::operator[](
                (vector<TerrainVertex, eastl::allocator>*)pvVar2, lVar8 - 3);
            TerrainConstants::CopyVertexLocationAndNormal(&local_e0, pTVar10);
            pTVar13 = &local_e0;
            if (param_6->field_28 == '\0') {
                pTVar13 = (TerrainVertex*)param_6;
            }
            TerrainConstants::CopyVertexSource((TerrainBaseData*)pTVar13, (TerrainBaseData*)pTVar10);
            local_48 = (GridTile*)&pTVar10[1].field_4;
            local_50 = (TerrainVertex*)pVVar5;
            pfVar6 = (float*)math::Vector2T<float>::operator[](pVVar5, 0);
            iVar14 = local_38;
            iVar11 = (int)*pfVar6 + local_38;
            pfVar6 = (float*)math::Vector2T<float>::operator[](pVVar5, 1);
            param_7->GetSharedVertex(local_48, iVar11, (int)*pfVar6 + local_34, param_6);
            pVVar5 = local_40;
            pfVar6 = (float*)math::Vector2T<float>::operator[](local_40, 0);
            fVar1 = *pfVar6;
            pfVar6 = (float*)math::Vector2T<float>::operator[](pVVar5, 1);
            param_7->GetSharedVertex((TerrainVertex*)&pTVar10[2].field_8, (int)fVar1 + iVar14, (int)*pfVar6 + local_34,
                                     param_6);
            eastl::vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>,
                          eastl::allocator>::size(pvVar2);
            eastl::vector<TerrainVertex, eastl::allocator>::resize((ulong)pvVar2);
            lVar8 = eastl::vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>,
                                  eastl::allocator>::size(pvVar2);
            pTVar10 = (TerrainVertex*)eastl::vector<TerrainVertex, eastl::allocator>::operator[](
                (vector<TerrainVertex, eastl::allocator>*)pvVar2, lVar8 - 3);
            TerrainConstants::CopyVertexLocationAndNormal(&local_e0, pTVar10);
            pTVar13 = &local_e0;
            if (param_6->field_28 == '\0') {
                pTVar13 = (TerrainVertex*)param_6;
            }
            TerrainConstants::CopyVertexSource((TerrainBaseData*)pTVar13, (TerrainBaseData*)pTVar10);
            TerrainConstants::CopyVertexLocationAndNormal(&local_a0, (TerrainVertex*)&pTVar10[1].field_4);
            pTVar13 = &local_a0;
            if (param_6->field_28 == '\0') {
                pTVar13 = (TerrainVertex*)param_6;
            }
            TerrainConstants::CopyVertexSource((TerrainBaseData*)pTVar13, (TerrainBaseData*)&pTVar10[1].field_4);
            pTVar13 = local_50;
            pfVar6 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)local_50, 0);
            iVar14 = (int)*pfVar6 + local_38;
            pfVar6 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)pTVar13, 1);
            param_7->GetSharedVertex((TerrainVertex*)&pTVar10[2].field_8, iVar14, (int)*pfVar6 + local_34, param_6);
            eastl::vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>,
                          eastl::allocator>::size(pvVar2);
            eastl::vector<TerrainVertex, eastl::allocator>::resize((ulong)pvVar2);
            lVar8 = eastl::vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>,
                                  eastl::allocator>::size(pvVar2);
            pTVar10 = (TerrainVertex*)eastl::vector<TerrainVertex, eastl::allocator>::operator[](
                (vector<TerrainVertex, eastl::allocator>*)pvVar2, lVar8 - 3);
            TerrainConstants::CopyVertexLocationAndNormal(&local_a0, pTVar10);
            pTVar13 = &local_a0;
            if (param_6->field_28 == '\0') {
                pTVar13 = (TerrainVertex*)param_6;
            }
            TerrainConstants::CopyVertexSource((TerrainBaseData*)pTVar13, (TerrainBaseData*)pTVar10);
            pTVar3 = local_58;
            pfVar6 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)local_58, 0);
            iVar14 = local_38;
            iVar12 = (int)*pfVar6 + local_38;
            pfVar6 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)pTVar3, 1);
            iVar11 = local_34;
            param_7->GetSharedVertex((TerrainVertex*)&pTVar10[1].field_4, iVar12, (int)*pfVar6 + local_34, param_6);
            pTVar13 = local_50;
            pfVar6 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)local_50, 0);
            fVar1 = *pfVar6;
            pfVar6 = (float*)math::Vector2T<float>::operator[]((Vector2T<float>*)pTVar13, 1);
            param_7->GetSharedVertex((TerrainVertex*)&pTVar10[2].field_8, (int)fVar1 + iVar14, (int)*pfVar6 + iVar11,
                                     param_6);
        }
    }

    // 0x1007b3170, 144 bytes, placed by class name and debug map
    // CornerTriTerrainOverlayShape::GetDominantSource(GridTile const&, GridTile const*, GridTile const*, int, TerrainPatch const*) const
    GridTile* CornerTriTerrainOverlayShape::GetDominantSource(GridTile* param_1, GridTile* param_2, GridTile* param_3,
                                                              int param_4, TerrainPatch* param_5) {
        GridTile* pGVar1;
        bool bVar2;

        pGVar1 = param_3;
        if (field_48 == '\0') {
            pGVar1 = param_2;
            param_2 = param_3;
        }
        switch (param_4) {
        case 4:
            bVar2 = *(int*)&param_1->field_64 == 0;
            break;
        case 5:
            bVar2 = *(int*)&param_1->field_64 == 1;
            break;
        case 6:
            bVar2 = *(int*)&param_1->field_64 == 2;
            break;
        case 7:
            bVar2 = *(int*)&param_1->field_64 == 3;
            break;
        default:
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "terrain/CornerTriTerrainOverlayShape.cpp",
                            58, "CornerTriTerrainOverlayShape: Unknown corner: %i", (ulong)(uint)param_4);
        }
        if (bVar2) {
            pGVar1 = param_2;
        }
        return pGVar1;
    }

} // namespace jag::graphics
