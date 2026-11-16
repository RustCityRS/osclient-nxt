// libs/graphics/runetek7/terrain/BasicTerrainOverlayShape.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

namespace jag::graphics {
    class BasicTerrainOverlayShape {
    public:
        // virtual methods in vtable order
        virtual ~BasicTerrainOverlayShape();
        virtual vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>, eastl::allocator>*
        GetTriangles(GridTile&, GridTile*, GridTile*, int, int, TerrainPatch const*);
        virtual void GetDominantSource(GridTile const&, GridTile const*, GridTile const*, int,
                                       TerrainPatch const*) const;
        BasicTerrainOverlayShape(TerrainOverlayShapeType, TerrainConstants::TRIANGLE_USAGE,
                                 TerrainConstants::TRIANGLE_USAGE, TerrainConstants::TRIANGLE_USAGE,
                                 TerrainConstants::TRIANGLE_USAGE, float, float);
        GridTile* GetSource(GridTile const&, GridTile const*, GridTile const*, int) const;
        GetUseOverlay(int, int) const;

        // data members, from how the methods use this: 80 bytes
        undefined** field_0; // offset 0, vtable pointer
        char _unknown_8[72];
    };

    // 0x1007b1540, 192 bytes, base-object constructor, placed by class name and debug map
    // BasicTerrainOverlayShape::BasicTerrainOverlayShape(TerrainOverlayShapeType, TerrainConstants::TRIANGLE_USAGE, TerrainConstants::TRIANGLE_USAGE, TerrainConstants::TRIANGLE_USAGE, TerrainConstants::TRIANGLE_USAGE, float, float)
    void BasicTerrainOverlayShape::BasicTerrainOverlayShape(undefined4 param_1, undefined4 param_2,
                                                            BasicTerrainOverlayShape* this, undefined8 param_4,
                                                            undefined4 param_5, undefined4 param_6, undefined4 param_7,
                                                            undefined4 param_8) {
        undefined4* puVar1;
        undefined1* this_00;

        TerrainOverlayShape::TerrainOverlayShape();
        field_0 = &PTR__BasicTerrainOverlayShape_100f14590;
        *(undefined4*)&field_64 = param_1;
        *(undefined4*)&field_68 = param_2;
        new (&field_72) eastl::vector<TerrainTriangle, eastl::allocator>();
        this_00 = &field_48;
        puVar1 = (undefined4*)std::array<TerrainConstants::TRIANGLE_USAGE, 4ul>::operator[](
            (array<TerrainConstants::TRIANGLE_USAGE, 4ul>*)this_00, 2);
        *puVar1 = param_5;
        puVar1 = (undefined4*)std::array<TerrainConstants::TRIANGLE_USAGE, 4ul>::operator[](
            (array<TerrainConstants::TRIANGLE_USAGE, 4ul>*)this_00, 0);
        *puVar1 = param_6;
        puVar1 = (undefined4*)std::array<TerrainConstants::TRIANGLE_USAGE, 4ul>::operator[](
            (array<TerrainConstants::TRIANGLE_USAGE, 4ul>*)this_00, 1);
        *puVar1 = param_7;
        puVar1 = (undefined4*)std::array<TerrainConstants::TRIANGLE_USAGE, 4ul>::operator[](
            (array<TerrainConstants::TRIANGLE_USAGE, 4ul>*)this_00, 3);
        *puVar1 = param_8;
    }

    // 0x1007b1660, 16 bytes, complete-object constructor, placed by class name
    // BasicTerrainOverlayShape::BasicTerrainOverlayShape(TerrainOverlayShapeType, TerrainConstants::TRIANGLE_USAGE, TerrainConstants::TRIANGLE_USAGE, TerrainConstants::TRIANGLE_USAGE, TerrainConstants::TRIANGLE_USAGE, float, float): jumps straight to the base-object constructor

    // 0x1007b1670, 48 bytes, base-object destructor, placed by class name
    // BasicTerrainOverlayShape::~BasicTerrainOverlayShape()
    void BasicTerrainOverlayShape::~BasicTerrainOverlayShape() {
        field_0 = &PTR__BasicTerrainOverlayShape_100f14590;
        (&field_72)->~vector();
        ~TerrainOverlayShape();
    }

    // 0x1007b16b0, 16 bytes, complete-object destructor, placed by class name
    // BasicTerrainOverlayShape::~BasicTerrainOverlayShape(): jumps straight to the base-object destructor

    // 0x1007b16c0, 32 bytes, deleting destructor, placed by class name
    // BasicTerrainOverlayShape::~BasicTerrainOverlayShape()
    void BasicTerrainOverlayShape::~BasicTerrainOverlayShape() {
        ~BasicTerrainOverlayShape(this);
        operator_delete(this);
    }

    // 0x1007b16e0, 1808 bytes, placed by class name
    // BasicTerrainOverlayShape::GetTriangles(GridTile&, GridTile*, GridTile*, int, int, TerrainPatch const*)
    vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>, eastl::allocator>*
    BasicTerrainOverlayShape::GetTriangles(GridTile* param_1, GridTile* param_2, GridTile* param_3, int param_4,
                                           int param_5, TerrainPatch* param_6) {
        undefined1* this_00;
        uint uVar1;
        undefined4 uVar2;
        undefined8 uVar3;
        undefined8 uVar4;
        undefined8 uVar5;
        undefined8 uVar6;
        GridTile* pGVar7;
        vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>, eastl::allocator>* this_01;
        vector<TerrainTriangle, eastl::allocator>* this_02;
        undefined8 uVar8;
        undefined4* puVar9;
        undefined8* puVar10;
        undefined8* puVar11;
        long lVar12;
        TerrainBaseData* pTVar13;
        TerrainVertex* pTVar14;
        TerrainVertex* pTVar15;
        int iVar16;
        int iVar17;
        TerrainVertex* pTVar18;
        undefined4 in_register_00000084;
        undefined4 in_register_0000008c;
        ulong uVar19;
        GridTile* pGVar20;
        int iVar21;
        undefined8* local_e8;
        undefined8 local_e0;
        GridTile* local_d8;
        vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>, eastl::allocator>* local_d0;
        undefined1 local_c8[16];
        vector<TerrainTriangle, eastl::allocator>* local_b0;
        undefined8 local_a8;
        undefined8 local_a0;
        undefined1 local_98[16];
        GridTile* local_88;
        float local_7c;
        undefined1 local_78[16];
        GridTile* local_68;
        undefined4 uStack_60;
        undefined4 uStack_5c;
        undefined4 uStack_58;
        undefined5 uStack_54;
        undefined3 uStack_4f;
        long local_38;

        local_a8 = CONCAT44(in_register_0000008c, param_5);
        local_a0 = CONCAT44(in_register_00000084, param_4);
        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        this_00 = &field_72;
        local_d8 = param_1;
        local_88 = param_2;
        this_00->resize(4);
        (&field_16, 12)->reserve();
        local_d0 = (vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>,
                           eastl::allocator>*)&field_16;
        eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
        local_98._0_8_ = this;
        uVar19 = 0;
        do {
            uVar8 = eastl::vector<TerrainTriangle, eastl::allocator>::operator[](
                (vector<TerrainTriangle, eastl::allocator>*)this_00, uVar19);
            puVar9 = (undefined4*)std::array<TerrainConstants::TRIANGLE_USAGE, 4ul>::operator[](
                (array<TerrainConstants::TRIANGLE_USAGE, 4ul>*)&field_48, uVar19);
            TerrainConstants::CreateTriangle(uVar8, *puVar9, local_88, param_3);
            pGVar20 = local_88;
            pGVar7 = local_d8;
            uVar19 = uVar19 + 1;
        } while (uVar19 != 4);
        uVar1 = *(uint*)(local_98._0_8_ + 64);
        local_7c = *(float*)(local_98._0_8_ + 68);
        local_c8 = ZEXT416((uint)local_7c);
        iVar17 = *(int*)&local_d8->field_64;
        local_b0 = (vector<TerrainTriangle, eastl::allocator>*)this_00;
        if (iVar17 == 1) {
            local_98 = ZEXT416(uVar1);
            puVar10 = (undefined8*)eastl::vector<TerrainTriangle, eastl::allocator>::operator[](
                (vector<TerrainTriangle, eastl::allocator>*)this_00, 0);
            local_78._0_8_ = *puVar10;
            local_78._8_8_ = puVar10[1];
            local_68 = (GridTile*)puVar10[2];
            uStack_60 = (undefined4)puVar10[3];
            uStack_5c = (undefined4) * (undefined8*)((long)puVar10 + 28);
            uStack_58 = (undefined4)((ulong) * (undefined8*)((long)puVar10 + 28) >> 32);
            uStack_54 = (undefined5) * (undefined8*)((long)puVar10 + 36);
            uStack_4f = (undefined3)((ulong) * (undefined8*)((long)puVar10 + 36) >> 40);
            puVar10 = (undefined8*)eastl::vector<TerrainTriangle, eastl::allocator>::operator[](
                (vector<TerrainTriangle, eastl::allocator>*)this_00, 1);
            puVar11 = (undefined8*)eastl::vector<TerrainTriangle, eastl::allocator>::operator[](
                (vector<TerrainTriangle, eastl::allocator>*)this_00, 0);
            uVar8 = puVar10[1];
            uVar3 = puVar10[2];
            uVar4 = puVar10[3];
            uVar5 = *(undefined8*)((long)puVar10 + 25);
            uVar6 = *(undefined8*)((long)puVar10 + 33);
            *puVar11 = *puVar10;
            puVar11[1] = uVar8;
            puVar11[2] = uVar3;
            puVar11[3] = uVar4;
            *(undefined8*)((long)puVar11 + 25) = uVar5;
            *(undefined8*)((long)puVar11 + 33) = uVar6;
            puVar10 = (undefined8*)eastl::vector<TerrainTriangle, eastl::allocator>::operator[](
                (vector<TerrainTriangle, eastl::allocator>*)this_00, 2);
            puVar11 = (undefined8*)eastl::vector<TerrainTriangle, eastl::allocator>::operator[](
                (vector<TerrainTriangle, eastl::allocator>*)this_00, 1);
            uVar8 = puVar10[1];
            uVar3 = puVar10[2];
            uVar4 = puVar10[3];
            uVar5 = *(undefined8*)((long)puVar10 + 25);
            uVar6 = *(undefined8*)((long)puVar10 + 33);
            *puVar11 = *puVar10;
            puVar11[1] = uVar8;
            puVar11[2] = uVar3;
            puVar11[3] = uVar4;
            *(undefined8*)((long)puVar11 + 25) = uVar5;
            *(undefined8*)((long)puVar11 + 33) = uVar6;
            puVar10 = (undefined8*)eastl::vector<TerrainTriangle, eastl::allocator>::operator[](
                (vector<TerrainTriangle, eastl::allocator>*)this_00, 3);
            puVar11 = (undefined8*)eastl::vector<TerrainTriangle, eastl::allocator>::operator[](
                (vector<TerrainTriangle, eastl::allocator>*)this_00, 2);
            uVar8 = puVar10[1];
            uVar3 = puVar10[2];
            uVar4 = puVar10[3];
            uVar5 = *(undefined8*)((long)puVar10 + 25);
            uVar6 = *(undefined8*)((long)puVar10 + 33);
            *puVar11 = *puVar10;
            puVar11[1] = uVar8;
            puVar11[2] = uVar3;
            puVar11[3] = uVar4;
            *(undefined8*)((long)puVar11 + 25) = uVar5;
            *(undefined8*)((long)puVar11 + 33) = uVar6;
            puVar10 = (undefined8*)eastl::vector<TerrainTriangle, eastl::allocator>::operator[](
                (vector<TerrainTriangle, eastl::allocator>*)this_00, 3);
            *puVar10 = local_78._0_8_;
            puVar10[1] = local_78._8_8_;
            puVar10[2] = local_68;
            puVar10[3] = CONCAT44(uStack_5c, uStack_60);
            *(ulong*)((long)puVar10 + 25) = CONCAT17((undefined1)uStack_58, CONCAT43(uStack_5c, uStack_60._1_3_));
            *(ulong*)((long)puVar10 + 33) = CONCAT53(uStack_54, uStack_58._1_3_);
            local_7c = -(float)local_98._0_4_;
            pGVar20 = local_88;
        } else if (iVar17 == 2) {
            local_98 = ZEXT416(uVar1);
            puVar10 = (undefined8*)eastl::vector<TerrainTriangle, eastl::allocator>::operator[](
                (vector<TerrainTriangle, eastl::allocator>*)this_00, 0);
            local_78._0_8_ = *puVar10;
            local_78._8_8_ = puVar10[1];
            local_68 = (GridTile*)puVar10[2];
            uStack_60 = (undefined4)puVar10[3];
            uStack_5c = (undefined4) * (undefined8*)((long)puVar10 + 28);
            uStack_58 = (undefined4)((ulong) * (undefined8*)((long)puVar10 + 28) >> 32);
            uStack_54 = (undefined5) * (undefined8*)((long)puVar10 + 36);
            uStack_4f = (undefined3)((ulong) * (undefined8*)((long)puVar10 + 36) >> 40);
            puVar10 = (undefined8*)eastl::vector<TerrainTriangle, eastl::allocator>::operator[](
                (vector<TerrainTriangle, eastl::allocator>*)this_00, 2);
            puVar11 = (undefined8*)eastl::vector<TerrainTriangle, eastl::allocator>::operator[](
                (vector<TerrainTriangle, eastl::allocator>*)this_00, 0);
            uVar8 = puVar10[1];
            uVar3 = puVar10[2];
            uVar4 = puVar10[3];
            uVar5 = *(undefined8*)((long)puVar10 + 25);
            uVar6 = *(undefined8*)((long)puVar10 + 33);
            *puVar11 = *puVar10;
            puVar11[1] = uVar8;
            puVar11[2] = uVar3;
            puVar11[3] = uVar4;
            *(undefined8*)((long)puVar11 + 25) = uVar5;
            *(undefined8*)((long)puVar11 + 33) = uVar6;
            puVar10 = (undefined8*)eastl::vector<TerrainTriangle, eastl::allocator>::operator[](
                (vector<TerrainTriangle, eastl::allocator>*)this_00, 2);
            *puVar10 = local_78._0_8_;
            puVar10[1] = local_78._8_8_;
            puVar10[2] = local_68;
            puVar10[3] = CONCAT44(uStack_5c, uStack_60);
            *(ulong*)((long)puVar10 + 25) = CONCAT17((undefined1)uStack_58, CONCAT43(uStack_5c, uStack_60._1_3_));
            *(ulong*)((long)puVar10 + 33) = CONCAT53(uStack_54, uStack_58._1_3_);
            puVar10 = (undefined8*)eastl::vector<TerrainTriangle, eastl::allocator>::operator[](
                (vector<TerrainTriangle, eastl::allocator>*)this_00, 3);
            local_78._0_8_ = *puVar10;
            local_78._8_8_ = puVar10[1];
            local_68 = (GridTile*)puVar10[2];
            uVar8 = *(undefined8*)((long)puVar10 + 25);
            uStack_60._0_1_ = (undefined1)puVar10[3];
            uStack_60._1_3_ = (undefined3)uVar8;
            uStack_5c = (undefined4)((ulong)uVar8 >> 24);
            uStack_58._0_1_ = (undefined1)((ulong)uVar8 >> 56);
            uStack_58._1_3_ = (undefined3) * (undefined8*)((long)puVar10 + 33);
            uStack_54 = (undefined5)((ulong) * (undefined8*)((long)puVar10 + 33) >> 24);
            puVar10 = (undefined8*)eastl::vector<TerrainTriangle, eastl::allocator>::operator[](
                (vector<TerrainTriangle, eastl::allocator>*)this_00, 1);
            puVar11 = (undefined8*)eastl::vector<TerrainTriangle, eastl::allocator>::operator[](
                (vector<TerrainTriangle, eastl::allocator>*)this_00, 3);
            uVar8 = puVar10[1];
            uVar3 = puVar10[2];
            uVar4 = puVar10[3];
            uVar5 = *(undefined8*)((long)puVar10 + 25);
            uVar6 = *(undefined8*)((long)puVar10 + 33);
            *puVar11 = *puVar10;
            puVar11[1] = uVar8;
            puVar11[2] = uVar3;
            puVar11[3] = uVar4;
            *(undefined8*)((long)puVar11 + 25) = uVar5;
            *(undefined8*)((long)puVar11 + 33) = uVar6;
            puVar10 = (undefined8*)eastl::vector<TerrainTriangle, eastl::allocator>::operator[](
                (vector<TerrainTriangle, eastl::allocator>*)this_00, 1);
            *puVar10 = local_78._0_8_;
            puVar10[1] = local_78._8_8_;
            puVar10[2] = local_68;
            puVar10[3] = CONCAT44(uStack_5c, uStack_60);
            *(ulong*)((long)puVar10 + 25) = CONCAT17((undefined1)uStack_58, CONCAT43(uStack_5c, uStack_60._1_3_));
            *(ulong*)((long)puVar10 + 33) = CONCAT53(uStack_54, uStack_58._1_3_);
            local_7c = -(float)local_c8._0_4_;
            local_c8._0_8_ = local_98._0_8_ ^ 9223372039002259456;
            local_c8._8_4_ = local_98._8_4_ ^ 2147483648;
            local_c8._12_4_ = local_98._12_4_ ^ 2147483648;
        } else if (iVar17 == 3) {
            local_98 = ZEXT416(uVar1);
            puVar10 = (undefined8*)eastl::vector<TerrainTriangle, eastl::allocator>::operator[](
                (vector<TerrainTriangle, eastl::allocator>*)this_00, 0);
            local_78._0_8_ = *puVar10;
            local_78._8_8_ = puVar10[1];
            local_68 = (GridTile*)puVar10[2];
            uStack_60 = (undefined4)puVar10[3];
            uStack_5c = (undefined4) * (undefined8*)((long)puVar10 + 28);
            uStack_58 = (undefined4)((ulong) * (undefined8*)((long)puVar10 + 28) >> 32);
            uStack_54 = (undefined5) * (undefined8*)((long)puVar10 + 36);
            uStack_4f = (undefined3)((ulong) * (undefined8*)((long)puVar10 + 36) >> 40);
            puVar10 = (undefined8*)eastl::vector<TerrainTriangle, eastl::allocator>::operator[](
                (vector<TerrainTriangle, eastl::allocator>*)this_00, 3);
            puVar11 = (undefined8*)eastl::vector<TerrainTriangle, eastl::allocator>::operator[](
                (vector<TerrainTriangle, eastl::allocator>*)this_00, 0);
            uVar8 = puVar10[1];
            uVar3 = puVar10[2];
            uVar4 = puVar10[3];
            uVar5 = *(undefined8*)((long)puVar10 + 25);
            uVar6 = *(undefined8*)((long)puVar10 + 33);
            *puVar11 = *puVar10;
            puVar11[1] = uVar8;
            puVar11[2] = uVar3;
            puVar11[3] = uVar4;
            *(undefined8*)((long)puVar11 + 25) = uVar5;
            *(undefined8*)((long)puVar11 + 33) = uVar6;
            puVar10 = (undefined8*)eastl::vector<TerrainTriangle, eastl::allocator>::operator[](
                (vector<TerrainTriangle, eastl::allocator>*)this_00, 2);
            puVar11 = (undefined8*)eastl::vector<TerrainTriangle, eastl::allocator>::operator[](
                (vector<TerrainTriangle, eastl::allocator>*)this_00, 3);
            uVar8 = puVar10[1];
            uVar3 = puVar10[2];
            uVar4 = puVar10[3];
            uVar5 = *(undefined8*)((long)puVar10 + 25);
            uVar6 = *(undefined8*)((long)puVar10 + 33);
            *puVar11 = *puVar10;
            puVar11[1] = uVar8;
            puVar11[2] = uVar3;
            puVar11[3] = uVar4;
            *(undefined8*)((long)puVar11 + 25) = uVar5;
            *(undefined8*)((long)puVar11 + 33) = uVar6;
            puVar10 = (undefined8*)eastl::vector<TerrainTriangle, eastl::allocator>::operator[](
                (vector<TerrainTriangle, eastl::allocator>*)this_00, 1);
            puVar11 = (undefined8*)eastl::vector<TerrainTriangle, eastl::allocator>::operator[](
                (vector<TerrainTriangle, eastl::allocator>*)this_00, 2);
            uVar8 = puVar10[1];
            uVar3 = puVar10[2];
            uVar4 = puVar10[3];
            uVar5 = *(undefined8*)((long)puVar10 + 25);
            uVar6 = *(undefined8*)((long)puVar10 + 33);
            *puVar11 = *puVar10;
            puVar11[1] = uVar8;
            puVar11[2] = uVar3;
            puVar11[3] = uVar4;
            *(undefined8*)((long)puVar11 + 25) = uVar5;
            *(undefined8*)((long)puVar11 + 33) = uVar6;
            puVar10 = (undefined8*)eastl::vector<TerrainTriangle, eastl::allocator>::operator[](
                (vector<TerrainTriangle, eastl::allocator>*)this_00, 1);
            *puVar10 = local_78._0_8_;
            puVar10[1] = local_78._8_8_;
            puVar10[2] = local_68;
            puVar10[3] = CONCAT44(uStack_5c, uStack_60);
            *(ulong*)((long)puVar10 + 25) = CONCAT17((undefined1)uStack_58, CONCAT43(uStack_5c, uStack_60._1_3_));
            *(ulong*)((long)puVar10 + 33) = CONCAT53(uStack_54, uStack_58._1_3_);
            local_c8._0_8_ = local_c8._0_8_ ^ 9223372039002259456;
            local_c8._8_4_ = local_c8._8_4_ ^ 2147483648;
            local_c8._12_4_ = local_c8._12_4_ ^ 2147483648;
            local_7c = (float)local_98._0_4_;
        } else {
            local_c8 = ZEXT416(uVar1);
        }
        this_02 = local_b0;
        uVar19 = 0;
        do {
            lVar12 = eastl::vector<TerrainTriangle, eastl::allocator>::operator[](this_02, uVar19);
            if (*(char*)(lVar12 + 40) != '\0') {
                uVar2 = *(undefined4*)&pGVar7->field_20;
                lVar12 = eastl::vector<TerrainTriangle, eastl::allocator>::operator[](this_02, uVar19);
                pGVar20 = local_88;
                *(undefined4*)(lVar12 + 20) = uVar2;
                local_98._0_4_ = *(undefined4*)((long)&pGVar7->field_20 + 4);
                lVar12 = eastl::vector<TerrainTriangle, eastl::allocator>::operator[](this_02, uVar19);
                *(undefined4*)(lVar12 + 24) = local_98._0_4_;
            }
            uVar19 = uVar19 + 1;
        } while (uVar19 != 4);
        local_78._0_8_ = &TerrainConstants::EMPTY_SOURCE;
        local_e8 = (undefined8*)local_78;
        local_e0 = 3;
        uVar19 = 0;
        local_78._8_8_ = pGVar20;
        local_68 = param_3;
        pTVar13 = TerrainConstants::GetDominantSource<TerrainBaseData>(false, (initializer_list*)&local_e8);
        new (local_78) TerrainVertex();
        iVar17 = (int)local_a0;
        iVar21 = (int)local_a8;
        param_6->InterpolateCentreVertex(local_78, pGVar7, iVar17, iVar21, (float)local_c8._0_4_, local_7c, pTVar13);
        local_88 = (GridTile*)CONCAT44(local_88._4_4_, iVar21 + 1);
        local_98._0_4_ = iVar17 + 1;
        do {
            pTVar14 = (TerrainVertex*)eastl::vector<TerrainTriangle, eastl::allocator>::operator[](local_b0, uVar19);
            this_01 = local_d0;
            if ((pTVar14->field_40 != '\0') && (*(char*)((long)&pTVar14->field_12 + 4) != '\0')) {
                eastl::vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>,
                              eastl::allocator>::size(local_d0);
                eastl::vector<TerrainVertex, eastl::allocator>::resize((ulong)this_01);
                lVar12 = eastl::vector<eastl::pair<eastl::fixed_string<char, 16, true, eastl::allocator>, float>,
                                       eastl::allocator>::size(this_01);
                pTVar15 = (TerrainVertex*)eastl::vector<TerrainVertex, eastl::allocator>::operator[](
                    (vector<TerrainVertex, eastl::allocator>*)this_01, lVar12 - 3);
                TerrainConstants::CopyVertexLocationAndNormal((TerrainVertex*)local_78, pTVar15);
                pTVar18 = pTVar14;
                if (pTVar14->field_28 != '\0') {
                    pTVar18 = (TerrainVertex*)local_78;
                }
                TerrainConstants::CopyVertexSource((TerrainBaseData*)pTVar18, (TerrainBaseData*)pTVar15);
                iVar17 = (int)local_88;
                iVar16 = (int)local_a0;
                uVar2 = local_98._0_4_;
                iVar21 = (int)local_a8;
                switch (uVar19 & 4294967295) {
                case 0:
                    param_6->GetSharedVertex((TerrainVertex*)&pTVar15[1].field_4, iVar16, iVar21, pTVar14);
                    iVar16 = local_98._0_4_;
                    break;
                case 1:
                    param_6->GetSharedVertex((TerrainVertex*)&pTVar15[1].field_4, local_98._0_4_, iVar21, pTVar14);
                    iVar21 = (int)local_88;
                    iVar16 = uVar2;
                    break;
                case 2:
                    param_6->GetSharedVertex((TerrainVertex*)&pTVar15[1].field_4, local_98._0_4_, (int)local_88,
                                             pTVar14);
                    iVar21 = iVar17;
                    iVar16 = (int)local_a0;
                    break;
                case 3:
                    param_6->GetSharedVertex((TerrainVertex*)&pTVar15[1].field_4, iVar16, (int)local_88, pTVar14);
                    iVar21 = (int)local_a8;
                    break;
                default:
                    goto switchD_1007b1cfd_default;
                }
                param_6->GetSharedVertex((TerrainVertex*)&pTVar15[2].field_8, iVar16, iVar21, pTVar14);
            }
        switchD_1007b1cfd_default:
            uVar19 = uVar19 + 1;
            if (uVar19 == 4) {
                if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
                    /* WARNING: Subroutine does not return */
                    ___stack_chk_fail();
                }
                return local_d0;
            }
        } while (true);
    }

    // 0x1007b28d0, 336 bytes, placed by class name
    // BasicTerrainOverlayShape::GetDominantSource(GridTile const&, GridTile const*, GridTile const*, int, TerrainPatch const*) const
    void BasicTerrainOverlayShape::GetDominantSource(GridTile* param_1, GridTile* param_2, GridTile* param_3,
                                                     int param_4, TerrainPatch* param_5) {
        undefined8 uVar1;
        int iVar2;
        undefined8* local_58;
        undefined8 local_50;
        undefined8 local_48;
        undefined8 local_40;
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        switch (param_4) {
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
            uVar1 = GetSource(this, param_1, param_2, param_3, iVar2);
            iVar2 = 1;
            goto LAB_1007b29b6;
        default:
            /* WARNING: Subroutine does not return */
            LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                            "terrain/BasicTerrainOverlayShape.cpp",
                            187, "BasicTerrainOverlayShape: Unknown corner: %i", (ulong)(uint)param_4);
        }
        uVar1 = GetSource(this, param_1, param_2, param_3, iVar2);
        iVar2 = 3;
    LAB_1007b29b6:
        local_40 = GetSource(this, param_1, param_2, param_3, iVar2);
        local_58 = &local_48;
        local_50 = 2;
        local_48 = uVar1;
        TerrainConstants::GetDominantSource<TerrainBaseData_const>(false, (initializer_list*)&local_58);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1007b2a20, 48 bytes, placed by class name
    // BasicTerrainOverlayShape::GetSource(GridTile const&, GridTile const*, GridTile const*, int) const
    GridTile* BasicTerrainOverlayShape::GetSource(GridTile* param_1, GridTile* param_2, GridTile* param_3,
                                                  int param_4) {
        if (GetUseOverlay(this, param_4, *(int*)&param_1->field_64) != 2) {
            param_2 = param_3;
        }
        return param_2;
    }

    // 0x1007b2af0, 32 bytes, placed by class name
    // BasicTerrainOverlayShape::GetUseOverlay(int, int) const
    undefined4 BasicTerrainOverlayShape::GetUseOverlay(int param_1, int param_2) {
        undefined4* puVar1;

        puVar1 = (undefined4*)std::array<TerrainConstants::TRIANGLE_USAGE, 4ul>::operator[](
            (array<TerrainConstants::TRIANGLE_USAGE, 4ul>*)&field_48, (ulong)(param_1 + param_2 & 3));
        return *puVar1;
    }

} // namespace jag::graphics
