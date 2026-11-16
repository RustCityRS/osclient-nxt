// libs/graphics/runetek7/terrain/PlainTerrainOverlayShape.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class PlainTerrainOverlayShape {
    public:
        // virtual methods in vtable order
        virtual ~PlainTerrainOverlayShape();
        virtual GetTriangles(GridTile&, GridTile*, GridTile*, int, int, TerrainPatch const*);
        virtual GridTile* GetDominantSource(GridTile const&, GridTile const*, GridTile const*, int,
                                            TerrainPatch const*) const;
        PlainTerrainOverlayShape(TerrainOverlayShapeType);

        // data members, from how the methods use this: 24 bytes
        undefined** field_0; // offset 0, vtable pointer
        undefined1 field_8;  // offset 8
        char _unknown_9[7];
        undefined1 field_16; // offset 16
        char _unknown_17[7];
    };

    class TerrainBaseData {
    public:
        TerrainBaseData();
        TerrainBaseData(TerrainEmptyInit const&);

        // data members, from how the methods use this: 40 bytes
        undefined4 field_0; // offset 0
        undefined2 field_4; // offset 4
        char _unknown_6[2];
        undefined4 field_8;  // offset 8
        undefined8 field_12; // offset 12
        undefined8 field_20; // offset 20
        undefined1 field_28; // offset 28
        char _unknown_29[3];
        undefined8 field_32; // offset 32
    };

    // 0x1007b39a0, 32 bytes, base-object constructor, placed by class name and debug map
    // PlainTerrainOverlayShape::PlainTerrainOverlayShape(TerrainOverlayShapeType)
    void PlainTerrainOverlayShape::PlainTerrainOverlayShape() {
        TerrainOverlayShape::TerrainOverlayShape();
        field_0 = &PTR__PlainTerrainOverlayShape_100f14620;
    }

    // 0x1007b39c0, 16 bytes, complete-object constructor, placed by class name and debug map
    // PlainTerrainOverlayShape::PlainTerrainOverlayShape(TerrainOverlayShapeType): jumps straight to the base-object constructor

    // 0x1007b39d0, 16 bytes, base-object destructor, placed by class name and debug map
    // PlainTerrainOverlayShape::~PlainTerrainOverlayShape()
    void PlainTerrainOverlayShape::~PlainTerrainOverlayShape() {
        ~TerrainOverlayShape();
    }

    // 0x1007b39e0, 16 bytes, complete-object destructor, placed by class name and debug map
    // PlainTerrainOverlayShape::~PlainTerrainOverlayShape(): jumps straight to the base-object destructor

    // 0x1007b39f0, 32 bytes, deleting destructor, placed by class name and debug map
    // PlainTerrainOverlayShape::~PlainTerrainOverlayShape()
    void PlainTerrainOverlayShape::~PlainTerrainOverlayShape() {
        ~PlainTerrainOverlayShape(this);
        operator_delete(this);
    }

    // 0x1007b3a10, 752 bytes, placed by class name and debug map
    // PlainTerrainOverlayShape::GetTriangles(GridTile&, GridTile*, GridTile*, int, int, TerrainPatch const*)
    undefined1* PlainTerrainOverlayShape::GetTriangles(GridTile* param_1, GridTile* param_2, GridTile* param_3,
                                                       int param_4, int param_5, TerrainPatch* param_6) {
        undefined1* this_00;
        float fVar1;
        Vector2T<float>* pVVar2;
        Vector2T<float>* pVVar3;
        Vector2T<float>* pVVar4;
        long lVar5;
        TerrainVertex* pTVar6;
        float* pfVar7;

        this_00 = &field_16;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        if ((field_8 != '\0') || (param_3 = param_1, param_2 = param_1, *(char*)&param_1->field_12 != '\0')) {
            this_00->reserve(6);
            if ((param_2 != (GridTile*)0) && (*(char*)&param_2->field_12 != '\0')) {
                pVVar2 = (Vector2T<float>*)TerrainConstants::GetCornerCoord(4, *(int*)&param_1->field_64);
                pVVar3 = (Vector2T<float>*)TerrainConstants::GetCornerCoord(7, *(int*)&param_1->field_64);
                pVVar4 = (Vector2T<float>*)TerrainConstants::GetCornerCoord(5, *(int*)&param_1->field_64);
                this_00->size();
                eastl::vector<TerrainVertex, eastl::allocator>::resize((ulong)this_00);
                lVar5 = this_00->size();
                pTVar6 = (TerrainVertex*)eastl::vector<TerrainVertex, eastl::allocator>::operator[](
                    (vector<TerrainVertex, eastl::allocator>*)this_00, lVar5 - 3);
                pfVar7 = (float*)math::Vector2T<float>::operator[](pVVar2, 0);
                fVar1 = *pfVar7;
                pfVar7 = (float*)math::Vector2T<float>::operator[](pVVar2, 1);
                param_6->GetSharedVertex(pTVar6, (int)fVar1 + param_4, (int)*pfVar7 + param_5, param_2);
                pfVar7 = (float*)math::Vector2T<float>::operator[](pVVar3, 0);
                fVar1 = *pfVar7;
                pfVar7 = (float*)math::Vector2T<float>::operator[](pVVar3, 1);
                param_6->GetSharedVertex((TerrainVertex*)&pTVar6[1].field_4, (int)fVar1 + param_4,
                                         (int)*pfVar7 + param_5, param_2);
                pfVar7 = (float*)math::Vector2T<float>::operator[](pVVar4, 0);
                fVar1 = *pfVar7;
                pfVar7 = (float*)math::Vector2T<float>::operator[](pVVar4, 1);
                param_6->GetSharedVertex((TerrainVertex*)&pTVar6[2].field_8, (int)fVar1 + param_4,
                                         (int)*pfVar7 + param_5, param_2);
            }
            if ((param_3 != (GridTile*)0) && (*(char*)&param_3->field_12 != '\0')) {
                pVVar2 = (Vector2T<float>*)TerrainConstants::GetCornerCoord(7, *(int*)&param_1->field_64);
                pVVar3 = (Vector2T<float>*)TerrainConstants::GetCornerCoord(6, *(int*)&param_1->field_64);
                pVVar4 = (Vector2T<float>*)TerrainConstants::GetCornerCoord(5, *(int*)&param_1->field_64);
                this_00->size();
                eastl::vector<TerrainVertex, eastl::allocator>::resize((ulong)this_00);
                lVar5 = this_00->size();
                pTVar6 = (TerrainVertex*)eastl::vector<TerrainVertex, eastl::allocator>::operator[](
                    (vector<TerrainVertex, eastl::allocator>*)this_00, lVar5 - 3);
                pfVar7 = (float*)math::Vector2T<float>::operator[](pVVar2, 0);
                fVar1 = *pfVar7;
                pfVar7 = (float*)math::Vector2T<float>::operator[](pVVar2, 1);
                param_6->GetSharedVertex(pTVar6, (int)fVar1 + param_4, (int)*pfVar7 + param_5, param_3);
                pfVar7 = (float*)math::Vector2T<float>::operator[](pVVar3, 0);
                fVar1 = *pfVar7;
                pfVar7 = (float*)math::Vector2T<float>::operator[](pVVar3, 1);
                param_6->GetSharedVertex((TerrainVertex*)&pTVar6[1].field_4, (int)fVar1 + param_4,
                                         (int)*pfVar7 + param_5, param_3);
                pfVar7 = (float*)math::Vector2T<float>::operator[](pVVar4, 0);
                fVar1 = *pfVar7;
                pfVar7 = (float*)math::Vector2T<float>::operator[](pVVar4, 1);
                param_6->GetSharedVertex((TerrainVertex*)&pTVar6[2].field_8, (int)fVar1 + param_4,
                                         (int)*pfVar7 + param_5, param_3);
            }
        }
        return this_00;
    }

    // 0x1007b3d00, 144 bytes, placed by class name and debug map
    // PlainTerrainOverlayShape::GetDominantSource(GridTile const&, GridTile const*, GridTile const*, int, TerrainPatch const*) const
    GridTile* PlainTerrainOverlayShape::GetDominantSource(GridTile* param_1, GridTile* param_2, GridTile* param_3,
                                                          int param_4, TerrainPatch* param_5) {
        GridTile** local_30;
        undefined8 local_28;
        GridTile* local_20;
        GridTile* local_18;
        long local_10;

        local_10 = *(long*)PTR____stack_chk_guard_100ee9d98;
        if (field_8 == '\x01') {
            switch (param_4 - *(int*)&param_1->field_64 & 3) {
            case 0:
                break;
            default:
                local_30 = &local_20;
                local_28 = 2;
                local_20 = param_2;
                local_18 = param_3;
                param_2 = (GridTile*)TerrainConstants::GetDominantSource<TerrainBaseData_const>(
                    false, (initializer_list*)&local_30);
                break;
            case 2:
                param_2 = param_3;
            }
        } else {
            param_2 = param_1;
        }
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_10) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
        return param_2;
    }

    // 0x1007b3d90, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // TerrainBaseData::TerrainBaseData(): jumps straight to the base-object constructor

    // 0x1007b3da0, 48 bytes, base-object constructor, placed by debug map only (low confidence)
    // TerrainBaseData::TerrainBaseData(TerrainEmptyInit const&)
    void TerrainBaseData::TerrainBaseData(TerrainEmptyInit* param_1) {
        field_0 = 4294967295;
        field_4 = 0;
        field_8 = 1140850688;
        field_12 = 0;
        field_20 = 0;
        field_28 = 1;
        field_32 = 4294967295;
    }

    // 0x1007b3dd0, 16 bytes, complete-object constructor, placed by debug map only (low confidence)
    // TerrainBaseData::TerrainBaseData(TerrainEmptyInit const&): jumps straight to the base-object constructor

} // namespace jag::graphics
