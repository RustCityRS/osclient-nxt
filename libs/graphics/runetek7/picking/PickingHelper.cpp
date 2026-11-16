// libs/graphics/runetek7/picking/PickingHelper.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "PickingHelper.h"

namespace jag::graphics {
    // 0x103bbd390, 8 bytes, __common; zero-initialised
    PickingHelper::m_debugAlwaysUseAccuratePicking;

    // 0x1007dc2c0, 336 bytes, base-object constructor, placed by class name and debug map
    // PickingHelper::PickingHelper(bool)
    void PickingHelper::PickingHelper(bool param_1) {
        undefined7 in_register_00000031;
        _func_decltype_nullptr* p_Var1;

        p_Var1 = (_func_decltype_nullptr*)CONCAT71(in_register_00000031, param_1);
        field_0 = 0;
        new (&field_16) math::Matrix44T<float>();
        new (&field_80) math::Matrix44T<float>();
        new (&field_144) math::Matrix44T<float>();
        new (&field_208, p_Var1) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_224) math::Vector2T<int>();
        new (&field_232) math::Vector2T<int>();
        new (&field_240) math::Vector2T<int>();
        field_249 = param_1;
        field_256 = false;
        new (&field_264) Array<math::Matrix44T<float>, eastl::allocator>();
        new (&field_288) Array<std::pair<float, float>, eastl::allocator>();
        new (&field_312) eastl::vector<unsigned int, eastl::allocator>();
        new (&field_344) Array<math::Matrix44T<float>, eastl::allocator>();
        new (&field_368) Array<math::Vector3T<float>, eastl::allocator>();
        new (&field_392) eastl::vector<math::Vector3T<float>, eastl::allocator>();
        (&field_312, 100)->reserve();
    }

    // 0x1007dc420, 16 bytes, complete-object constructor, placed by class name and debug map
    // PickingHelper::PickingHelper(bool): jumps straight to the base-object constructor

    // 0x1007dc430, 144 bytes, placed by class name and debug map
    // PickingHelper::ResetPointTest(math::Matrix44T<float> const&, math::Rect<float> const&, math::Point<float> const&, bool, float)
    void PickingHelper::ResetPointTest(Matrix44T* param_1, Rect* param_2, Point* param_3, bool param_4, float param_5) {
        Point<float> local_38[12];

        field_248 = 1;
        field_0 = 0;
        math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_80, param_1);
        math::Rect<float>::operator=((Rect<float>*)&field_208, param_2);
        math::Point<float>::Point(local_38, param_3);
        math::Point<float>::operator=((Point<float>*)&field_224, local_38);
        field_252 = param_5;
        field_256 = param_4;
    }

    // 0x1007dc4e0, 160 bytes, placed by class name and debug map
    // PickingHelper::ResetLineTest(math::Matrix44T<float> const&, math::Rect<float> const&, math::Point<float> const&, math::Point<float> const&, bool)
    void PickingHelper::ResetLineTest(Matrix44T* param_1, Rect* param_2, Point* param_3, Point* param_4, bool param_5) {
        Point<float> local_40[8];
        Point<float> local_38[8];

        field_248 = 0;
        field_0 = 0;
        math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_80, param_1);
        math::Rect<float>::operator=((Rect<float>*)&field_208, param_2);
        math::Point<float>::Point(local_40, param_3);
        math::Point<float>::operator=((Point<float>*)&field_232, local_40);
        math::Point<float>::Point(local_38, param_4);
        math::Point<float>::operator=((Point<float>*)&field_240, local_38);
        field_256 = param_5;
    }

    // 0x1007dc580, 448 bytes, placed by class name and debug map
    // PickingHelper::ProcessBoneTransforms(VertexAnimation const&)
    void PickingHelper::ProcessBoneTransforms(VertexAnimation* param_1) {
        Layout* this;
        ulong uVar1;
        ulong uVar2;
        long lVar3;
        Matrix43T* pMVar4;
        Matrix44T<float>* pMVar5;
        undefined1* puVar6;
        undefined1 local_108[128];
        Matrix44T local_88;
        Matrix44T* local_40;
        VertexAnimation* local_38;

        local_40 = (Matrix44T*)&param_1[1].field_68;
        math::operator*((math*)local_108, local_40, (Matrix44T*)&param_1[1].field_4);
        this = (Layout*)eastl::compressed_pair<eastl::string*, eastl::allocator>::first();
        puVar6 = &param_1[3].field_36;
        local_38 = param_1;
        uVar1 = puVar6->end();
        uVar2 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                        eastl::allocator>>::Layout::HeapBeginPtr(this);
        if (uVar1 < uVar2) {
            uVar1 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                        eastl::allocator>>::Layout::HeapBeginPtr(this);
            puVar6->set_max_size(uVar1, 1);
        }
        lVar3 = eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                        eastl::allocator>>::Layout::HeapBeginPtr(this);
        if (lVar3 != 0) {
            uVar1 = 0;
            do {
                pMVar4 = (Matrix43T*)WrapArray<math::Matrix43T<float>>::operator[](
                    (WrapArray<math::Matrix43T<float>>*)this, uVar1);
                new (&local_88) math::Matrix44T<float>(pMVar4);
                math::operator*((math*)(local_108 + 64), &local_88, (Matrix44T*)local_108);
                pMVar5 = (Matrix44T<float>*)Array<math::Matrix44T<float>, eastl::allocator>::operator[](
                    (Array<math::Matrix44T<float>, eastl::allocator>*)puVar6, uVar1);
                math::Matrix44T<float>::operator=(pMVar5, (Matrix44T*)(local_108 + 64));
                uVar1 = uVar1 + 1;
                uVar2 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(this);
            } while (uVar1 < uVar2);
        }
        if (local_38[3].field_28 != '\0') {
            puVar6 = &local_38[4].field_40;
            uVar1 = puVar6->end();
            uVar2 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                        eastl::allocator>>::Layout::HeapBeginPtr(this);
            if (uVar1 < uVar2) {
                uVar1 =
                    eastl::basic_string<char,
                                        eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                      eastl::allocator>>::Layout::HeapBeginPtr(this);
                puVar6->set_max_size(uVar1, 1);
            }
            lVar3 =
                eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                        eastl::allocator>>::Layout::HeapBeginPtr(this);
            if (lVar3 != 0) {
                uVar1 = 0;
                do {
                    pMVar4 = (Matrix43T*)WrapArray<math::Matrix43T<float>>::operator[](
                        (WrapArray<math::Matrix43T<float>>*)this, uVar1);
                    new (&local_88) math::Matrix44T<float>(pMVar4);
                    math::operator*((math*)(local_108 + 64), &local_88, local_40);
                    pMVar5 = (Matrix44T<float>*)Array<math::Matrix44T<float>, eastl::allocator>::operator[](
                        (Array<math::Matrix44T<float>, eastl::allocator>*)puVar6, uVar1);
                    math::Matrix44T<float>::operator=(pMVar5, (Matrix44T*)(local_108 + 64));
                    uVar1 = uVar1 + 1;
                    uVar2 = eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(this);
                } while (uVar1 < uVar2);
            }
        }
    }

    // 0x1007dc750, 3504 bytes, placed by class name and debug map
    // PickingHelper::PickTest(math::Matrix44T<float> const&, eastl::vector<std::unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>, eastl::allocator> const&, bool, bool, int)
    /* WARNING: Removing unreachable block (ram,4303213282) */
    /* PickingHelper::PickTest(math::Matrix44T<float> const&,
   eastl::vector<std::unique_ptr<GeometryBatchInstance,
   MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>,
   eastl::allocator> const&, bool, bool, int) */

    ulong PickingHelper::PickTest(Matrix44T* param_1, vector* param_2, bool param_3, bool param_4, int param_5) {
        int iVar1;
        vector<game::MapSquare::MapSquarePos, eastl::allocator>* pvVar2;
        char cVar3;
        bool bVar4;
        byte bVar5;
        bool bVar6;
        undefined4 uVar7;
        int iVar8;
        undefined8 in_RAX;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        GeometryBatchInstance* pGVar9;
        shared_ptr* psVar10;
        Layout* this_01;
        long lVar11;
        SideBarData* pSVar12;
        vector* pvVar13;
        ObjType* this_02;
        vector<SourceModelExternalIndexSection, eastl::allocator>* this_03;
        uint* puVar14;
        vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_04;
        vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>* this_05;
        undefined8 uVar15;
        int* piVar16;
        Vector3T* pVVar17;
        Vector4T<float>* pVVar18;
        undefined7 extraout_var;
        undefined7 extraout_var_00;
        ushort* puVar19;
        float* pfVar20;
        float* pfVar21;
        float* pfVar22;
        type* ptVar23;
        undefined7 extraout_var_01;
        undefined7 extraout_var_02;
        float* pfVar24;
        undefined7 extraout_var_03;
        undefined7 uVar30;
        long lVar25;
        undefined4* puVar26;
        long* plVar27;
        undefined8 uVar28;
        undefined8 uVar29;
        undefined7 in_register_00000009;
        uint uVar31;
        ulong uVar32;
        uint uVar33;
        vector* pvVar34;
        SideBarData* pSVar35;
        uint uVar36;
        PickingHelper* pPVar37;
        uint uVar38;
        GeometryBatch* pGVar39;
        Array<math::Vector3T<float>, eastl::allocator>* pAVar40;
        float fVar41;
        math local_178;
        vector* local_118;
        undefined1 local_110[16];
        int local_100[4];
        undefined8 local_f0;
        Point* local_e8;
        Point* local_e0;
        int local_d4;
        SideBarData local_d0;
        Array<math::Vector3T<float>, eastl::allocator>* local_c0;
        vector<game::MapSquare::MapSquarePos, eastl::allocator>* local_b8;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* local_b0;
        Point* local_a8;
        float* local_a0;
        GeometryBatch* local_98;
        vector* local_90;
        vector<oldscape::rseven::ModelFace, eastl::allocator>* local_88;
        GeometryBatch* local_80;
        vector* local_78;
        uint local_70;
        undefined4 local_6c;
        vector* local_68;
        PickingHelper* local_60;
        undefined4 local_54;
        GeometryBatch* local_50;
        byte local_41;
        int local_40;
        bool local_39;
        uint local_38;
        byte local_31;

        if ((int)CONCAT71(in_register_00000009, param_3) == 0) {
            local_54 = 0;
        } else {
            local_54 = (undefined4)CONCAT71((int7)((ulong)in_RAX >> 8), field_249 == false);
        }
        local_31 = m_debugAlwaysUseAccuratePicking != '\0';
        local_d4 = param_5;
        math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_144, param_1);
        math::operator*(&local_178, (Matrix44T*)&field_144, (Matrix44T*)&field_80);
        math::Matrix44T<float>::operator=((Matrix44T<float>*)&field_16, (Matrix44T*)&local_178);
        local_40 = 0;
        eastl::vector<int, BucketAllocatorEASTL>::vector();
        this_00 = (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                      param_2->HeapBeginPtr();
        local_178.field_72 =
            (unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
                param_2->end();
        local_88 = (vector<oldscape::rseven::ModelFace, eastl::allocator>*)&field_392;
        local_39 = this_00 == local_178.field_72;
        pPVar37 = this;
        if (local_39) {
            local_f0 = 0;
        } else {
            local_31 = local_31 | !param_4;
            local_50 = (GeometryBatch*)&field_312;
            local_110._8_8_ = &field_288;
            local_c0 = (Array<math::Vector3T<float>, eastl::allocator>*)&field_368;
            local_a8 = (Point*)&field_224;
            local_e8 = (Point*)&field_232;
            local_e0 = (Point*)&field_240;
            local_41 = (byte)local_54 ^ 1;
            local_178.field_80 = &field_252;
            local_f0 = 0;
            local_60 = this;
            do {
                local_b0 = this_00;
                pGVar9 = (GeometryBatchInstance*)std::unique_ptr<
                             GeometryBatchInstance,
                             MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(this_00);
                this = (PickingHelper*)pGVar9->GetGeometryBatch();
                cVar3 = IsHidden();
                if (cVar3 == '\0') {
                    pGVar9 = (GeometryBatchInstance*)std::unique_ptr<
                                 GeometryBatchInstance,
                                 MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(local_b0);
                    pGVar9 = (GeometryBatchInstance*)pGVar9->GetVertexAnimation();
                    psVar10 = (shared_ptr*)pGVar9->GetMaterial();
                    pSVar12 = (SideBarData*)0;
                    bVar4 = operator!=(psVar10, (_func_decltype_nullptr*)0);
                    if (bVar4) {
                        pGVar9 =
                            (GeometryBatchInstance*)std::unique_ptr<
                                GeometryBatchInstance,
                                MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(local_b0);
                        pGVar9->GetVertexAnimation();
                        this_01 = (Layout*)eastl::compressed_pair<eastl::string*, eastl::allocator>::first();
                        lVar11 = eastl::basic_string<
                            char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                eastl::allocator>>::Layout::HeapBeginPtr(this_01);
                        uVar7 = (undefined4)CONCAT71((int7)((ulong)lVar11 >> 8), lVar11 != 0);
                    } else {
                        uVar7 = 0;
                    }
                    local_98 = (GeometryBatch*)CONCAT44(local_98._4_4_, uVar7);
                    if ((char)uVar7 != '\0') {
                        pGVar9 =
                            (GeometryBatchInstance*)std::unique_ptr<
                                GeometryBatchInstance,
                                MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(local_b0);
                        pSVar12 = (SideBarData*)pGVar9->GetVertexAnimation();
                        ProcessBoneTransforms((VertexAnimation*)pPVar37);
                    }
                    pvVar13 = (vector*)GetVertexDataBufferSkin();
                    local_b8 = (vector<game::MapSquare::MapSquarePos, eastl::allocator>*)GetVertexIndexBuffer();
                    eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                    local_80 = (GeometryBatch*)this;
                    local_78 = pvVar13;
                    if (local_d4 == -1) {
                        local_38 = 0;
                        cVar3 = VertexBuffersInitialised();
                        if (cVar3 == '\0') {
                            this_05 = (vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)
                                GetVertexDataBufferPos();
                            local_70 =
                                eastl::vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>::size(
                                    this_05);
                        } else {
                            this_04 = (vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                GetVertexDataBufferPosLP();
                            local_70 =
                                eastl::vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(this_04);
                        }
                        this = (PickingHelper*)local_50;
                        local_d0.field_0 = 0;
                        pSVar12 = &local_d0;
                        local_50->push_back(pSVar12);
                        local_d0.field_0 =
                            eastl::vector<game::MapSquare::MapSquarePos, eastl::allocator>::size(local_b8);
                        push_back(pSVar12);
                    } else {
                        local_38 = 65535;
                        local_70 = 0;
                        this_02 =
                            (ObjType*)std::unique_ptr<
                                GeometryBatchInstance,
                                MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>::operator->(local_b0);
                        this_03 =
                            (vector<SourceModelExternalIndexSection, eastl::allocator>*)this_02->GetRecolourDest();
                        pvVar13 =
                            (vector*)eastl::vector<SourceModelExternalIndexSection, eastl::allocator>::size(this_03);
                        if (pvVar13 != (vector*)0) {
                            pSVar35 = (SideBarData*)0;
                            local_68 = pvVar13;
                            do {
                                pSVar12 = pSVar35;
                                this = (PickingHelper*)
                                    eastl::vector<SourceModelExternalIndexSection, eastl::allocator>::operator[](
                                        this_03, (ulong)pSVar35);
                                if (*(int*)this == local_d4) {
                                    puVar14 = (uint*)std::array<IndexRange, 5ul>::operator[](
                                        (ulong) & ((GeometryBatch*)this)->field_20);
                                    pGVar39 = local_50;
                                    local_50->push_back(puVar14);
                                    pGVar39->push_back(puVar14 + 1);
                                    puVar14 =
                                        std::min<unsigned int>(&local_38, (uint*)&((GeometryBatch*)this)->field_60);
                                    local_38 = *puVar14;
                                    this = (PickingHelper*)&((GeometryBatch*)this)->field_64;
                                    pSVar12 = (SideBarData*)this;
                                    puVar14 = std::max<unsigned int>(&local_70, (uint*)this);
                                    local_70 = *puVar14;
                                    pPVar37 = local_60;
                                    pvVar13 = local_68;
                                }
                                pSVar35 = (SideBarData*)((long)&pSVar35->field_0 + 1);
                            } while ((SideBarData*)pvVar13 != pSVar35);
                        }
                    }
                    lVar11 = local_50->size();
                    if (lVar11 != 0) {
                        new (&local_d0) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(pSVar12);
                        cVar3 = local_80->VertexBuffersInitialised();
                        pGVar39 = local_80;
                        bVar4 = local_98._0_1_;
                        if (cVar3 == '\0') {
                            local_68 = (vector*)local_80->GetVertexDataBufferPos();
                            uVar31 = local_38;
                            uVar33 = local_70;
                            fVar41 = (float)pGVar39->GetFarClip();
                            pvVar13 = local_78;
                            ProcessVertices<eastl::vector<GeometryBatchVertexPos, eastl::allocator>>(
                                (PickingHelper*)local_100, (vector*)local_60, local_68, local_78, (vector*)local_b8,
                                (int)local_50, uVar31, SUB41(uVar33, 0), bVar4, fVar41);
                        } else {
                            local_68 = (vector*)local_80->GetVertexDataBufferPosLP();
                            uVar31 = local_38;
                            uVar33 = local_70;
                            fVar41 = (float)pGVar39->GetFarClip();
                            pvVar13 = local_78;
                            ProcessVertices<Array<GeometryBatchVertexPosLP, eastl::allocator>>(
                                (PickingHelper*)local_100, (Array*)local_60, local_68, local_78, (vector*)local_b8,
                                (int)local_50, uVar31, SUB41(uVar33, 0), bVar4, fVar41);
                        }
                        this = (PickingHelper*)local_100;
                        uVar15 = math::Rect<float>::operator=((Rect<float>*)&local_d0, (Rect*)this);
                        pPVar37 = local_60;
                        bVar5 = local_60->field_256 == false | (byte)local_54;
                        uVar15 = CONCAT71((int7)((ulong)uVar15 >> 8), bVar5);
                        if ((bVar5 == 0) && (uVar15 = local_50->size(), 0 < (int)uVar15)) {
                            pvVar34 = (vector*)0;
                            do {
                                local_100[0] = 0;
                                local_178.push_back(local_100);
                                local_178.push_back(&local_40);
                                pGVar39 = local_50;
                                puVar14 = (uint*)eastl::vector<unsigned int, eastl::allocator>::operator[](
                                    (vector<unsigned int, eastl::allocator>*)local_50, (ulong)pvVar34);
                                uVar33 = *puVar14;
                                piVar16 = (int*)eastl::vector<unsigned int, eastl::allocator>::operator[](
                                    (vector<unsigned int, eastl::allocator>*)pGVar39, (ulong)pvVar34 | 1);
                                local_a0 = (float*)CONCAT44(local_a0._4_4_, *piVar16);
                                uVar31 = *piVar16 - uVar33;
                                this = (PickingHelper*)(ulong)uVar31;
                                iVar8 = eastl::vector<oldscape::rseven::ModelFace, eastl::allocator>::size(local_88);
                                pvVar13 = (vector*)(long)local_40;
                                if (iVar8 < (int)(pvVar13 + (int)uVar31)) {
                                    local_88->resize((ulong)(pvVar13 + (int)uVar31));
                                }
                                local_90 = pvVar34;
                                if (uVar33 < (uint)local_a0) {
                                    do {
                                        pvVar2 = local_b8;
                                        puVar19 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                                            (vector<unsigned short, eastl::allocator>*)local_b8, (ulong)uVar33);
                                        uVar38 = *puVar19 - local_38;
                                        puVar19 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                                            (vector<unsigned short, eastl::allocator>*)pvVar2, (ulong)(uVar33 + 1));
                                        uVar31 = *puVar19 - local_38;
                                        puVar19 = (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                                            (vector<unsigned short, eastl::allocator>*)pvVar2, (ulong)(uVar33 + 2));
                                        uVar15 = local_110._8_8_;
                                        uVar36 = *puVar19 - local_38;
                                        local_80 = (GeometryBatch*)(ulong)uVar38;
                                        local_68 = (vector*)(ulong)uVar33;
                                        pfVar20 = (float*)Array<std::pair<float, float>, eastl::allocator>::operator[](
                                            (Array<std::pair<float, float>, eastl::allocator>*)local_110._8_8_,
                                            (ulong)local_80);
                                        this = (PickingHelper*)(ulong)uVar31;
                                        pfVar21 = (float*)Array<std::pair<float, float>, eastl::allocator>::operator[](
                                            (Array<std::pair<float, float>, eastl::allocator>*)uVar15, (ulong)this);
                                        local_78 = (vector*)(ulong)uVar36;
                                        local_98 = (GeometryBatch*)this;
                                        pfVar22 = (float*)Array<std::pair<float, float>, eastl::allocator>::operator[](
                                            (Array<std::pair<float, float>, eastl::allocator>*)uVar15, (ulong)local_78);
                                        pvVar34 = local_68;
                                        if (((((*pfVar20 != -999999.0) && (pfVar20[1] != -999999.0)) &&
                                              (*pfVar21 != -999999.0)) &&
                                             ((pfVar21[1] != -999999.0 && (*pfVar22 != -999999.0)))) &&
                                            (pfVar22[1] != -999999.0)) {
                                            pVVar17 =
                                                (Vector3T*)Array<math::Vector3T<float>, eastl::allocator>::operator[](
                                                    local_c0, (ulong)local_80);
                                            uVar32 = (ulong)local_40;
                                            local_40 = local_40 + 1;
                                            pVVar18 = (Vector4T<float>*)
                                                eastl::vector<math::Vector3T<float>, eastl::allocator>::operator[](
                                                    (vector<math::Vector3T<float>, eastl::allocator>*)local_88, uVar32);
                                            math::Vector4T<float>::SetXYZ(pVVar18, pVVar17);
                                            pVVar17 =
                                                (Vector3T*)Array<math::Vector3T<float>, eastl::allocator>::operator[](
                                                    local_c0, (ulong)local_98);
                                            uVar32 = (ulong)local_40;
                                            local_40 = local_40 + 1;
                                            pVVar18 = (Vector4T<float>*)
                                                eastl::vector<math::Vector3T<float>, eastl::allocator>::operator[](
                                                    (vector<math::Vector3T<float>, eastl::allocator>*)local_88, uVar32);
                                            math::Vector4T<float>::SetXYZ(pVVar18, pVVar17);
                                            this = (PickingHelper*)
                                                Array<math::Vector3T<float>, eastl::allocator>::operator[](
                                                    local_c0, (ulong)local_78);
                                            uVar32 = (ulong)local_40;
                                            local_40 = local_40 + 1;
                                            pVVar18 = (Vector4T<float>*)
                                                eastl::vector<math::Vector3T<float>, eastl::allocator>::operator[](
                                                    (vector<math::Vector3T<float>, eastl::allocator>*)local_88, uVar32);
                                            math::Vector4T<float>::SetXYZ(pVVar18, (Vector3T*)this);
                                        }
                                        uVar33 = (int)pvVar34 + 3;
                                        pPVar37 = local_60;
                                    } while (uVar33 < (uint)local_a0);
                                }
                                pvVar34 = local_90;
                                local_178.push_back(&local_40);
                                pvVar34 = pvVar34 + 2;
                                uVar15 = local_50->size();
                            } while ((int)pvVar34 < (int)uVar15);
                        }
                        if (pPVar37->field_248 == '\0') {
                        LAB_1007dce81:
                            if (pPVar37->field_248 == '\0') {
                                bVar4 = math::RectLineIntersection<float>((Rect*)&local_d0, local_e8, local_e0);
                                uVar15 = CONCAT71(extraout_var_00, bVar4);
                                if (bVar4)
                                    goto LAB_1007dcead;
                            }
                            local_6c = (undefined4)CONCAT71((int7)((ulong)uVar15 >> 8), 1);
                            if ((pPVar37->field_256 != false && local_41 == 0) &&
                                (this = (PickingHelper*)DebugPrimitiveCollectorBasic::GetCollector(""),
                                 (GeometryBatch*)this != (GeometryBatch*)0)) {
                                math::Rect<float>::ToType<int>((Rect<float>*)local_100);
                                new (local_110) oldscape::sidebars::SideBarData(1157562368, 0);
                                (**(code**)(*(long*)this + 152))(this, local_100, 1, (SideBarData*)local_110);
                            }
                        } else {
                            bVar4 = math::Rect<float>::IsInside<float>((Rect<float>*)&local_d0, local_a8);
                            uVar15 = CONCAT71(extraout_var, bVar4);
                            if (!bVar4)
                                goto LAB_1007dce81;
                        LAB_1007dcead:
                            if ((byte)local_54 == '\0') {
                                iVar8 = local_50->size();
                                local_6c = (undefined4)CONCAT71((int7)((ulong)pvVar13 >> 8), 1);
                                if (0 < iVar8) {
                                    this = (PickingHelper*)0;
                                    pGVar39 = local_50;
                                    do {
                                        puVar14 = (uint*)eastl::vector<unsigned int, eastl::allocator>::operator[](
                                            (vector<unsigned int, eastl::allocator>*)pGVar39, (ulong)this);
                                        uVar33 = *puVar14;
                                        local_68 = (vector*)((ulong)this | 1);
                                        local_80 = (GeometryBatch*)this;
                                        do {
                                            puVar14 = (uint*)eastl::vector<unsigned int, eastl::allocator>::operator[](
                                                (vector<unsigned int, eastl::allocator>*)local_50, (ulong)local_68);
                                            pvVar2 = local_b8;
                                            if (*puVar14 <= uVar33)
                                                break;
                                            puVar19 =
                                                (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                                                    (vector<unsigned short, eastl::allocator>*)local_b8, (ulong)uVar33);
                                            uVar36 = *puVar19 - local_38;
                                            puVar19 =
                                                (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                                                    (vector<unsigned short, eastl::allocator>*)pvVar2,
                                                    (ulong)(uVar33 + 1));
                                            uVar38 = *puVar19 - local_38;
                                            puVar19 =
                                                (ushort*)eastl::vector<unsigned short, eastl::allocator>::operator[](
                                                    (vector<unsigned short, eastl::allocator>*)pvVar2,
                                                    (ulong)(uVar33 + 2));
                                            uVar15 = local_110._8_8_;
                                            uVar31 = *puVar19 - local_38;
                                            pfVar20 =
                                                (float*)Array<std::pair<float, float>, eastl::allocator>::operator[](
                                                    (Array<std::pair<float, float>, eastl::allocator>*)local_110._8_8_,
                                                    (ulong)uVar36);
                                            pfVar21 =
                                                (float*)Array<std::pair<float, float>, eastl::allocator>::operator[](
                                                    (Array<std::pair<float, float>, eastl::allocator>*)uVar15,
                                                    (ulong)uVar38);
                                            ptVar23 = (type*)(ulong)uVar31;
                                            pfVar22 =
                                                (float*)Array<std::pair<float, float>, eastl::allocator>::operator[](
                                                    (Array<std::pair<float, float>, eastl::allocator>*)uVar15,
                                                    (ulong)ptVar23);
                                            bVar4 = true;
                                            if ((((*pfVar20 != -999999.0) && (pfVar20[1] != -999999.0)) &&
                                                 (*pfVar21 != -999999.0)) &&
                                                (((pfVar21[1] != -999999.0 && (*pfVar22 != -999999.0)) &&
                                                  (pfVar22[1] != -999999.0)))) {
                                                local_98 = (GeometryBatch*)(pfVar20 + 1);
                                                local_78 = (vector*)(pfVar21 + 1);
                                                local_a0 = pfVar22 + 1;
                                                if (local_60->field_248 == '\0' || local_31 != 0) {
                                                LAB_1007dd165:
                                                    if ((local_60->field_248 != '\0' & local_31) == 1) {
                                                        local_90 = local_a8->SSOBeginPtr(ptVar23);
                                                        ptVar23 = (type*)local_a8->y();
                                                        bVar6 = math::TrianglePointIntersection<float>(
                                                            (float*)local_90, (float*)ptVar23, pfVar20,
                                                            (float*)local_98, pfVar21, (float*)local_78, pfVar22,
                                                            local_a0);
                                                        uVar30 = extraout_var_02;
                                                        if (bVar6)
                                                            goto LAB_1007dd274;
                                                    }
                                                    if (local_60->field_248 == '\0') {
                                                        local_90 = local_e8->SSOBeginPtr(ptVar23);
                                                        local_178.field_88 = (float*)local_e8->y();
                                                        local_118 = local_e0->SSOBeginPtr(ptVar23);
                                                        pfVar24 = (float*)local_e0->y();
                                                        bVar6 = math::TriangleLineIntersection<float>(
                                                            (float*)local_90, local_178.field_88, (float*)local_118,
                                                            pfVar24, pfVar20, (float*)local_98, pfVar21,
                                                            (float*)local_78, pfVar22, local_a0);
                                                        uVar30 = extraout_var_03;
                                                        if (bVar6)
                                                            goto LAB_1007dd274;
                                                    }
                                                } else {
                                                    local_90 = local_a8->SSOBeginPtr(ptVar23);
                                                    ptVar23 = (type*)local_a8->y();
                                                    bVar6 = math::TrianglePointIntersectionFast<float>(
                                                        (float*)local_90, (float*)ptVar23, pfVar20, (float*)local_98,
                                                        pfVar21, (float*)local_78, pfVar22, local_a0,
                                                        local_178.field_80);
                                                    uVar30 = extraout_var_01;
                                                    if (!bVar6)
                                                        goto LAB_1007dd165;
                                                LAB_1007dd274:
                                                    local_f0._1_7_ = uVar30;
                                                    local_f0._0_1_ = 1;
                                                    if (local_60->field_256 != false) {
                                                        lVar11 = local_178.size();
                                                        lVar25 = local_50->size();
                                                        puVar26 = (undefined4*)
                                                            eastl::vector<int, BucketAllocatorEASTL>::operator[](
                                                                (vector<int, BucketAllocatorEASTL>*)&local_178,
                                                                lVar11 + ((ulong)(lVar25 - (long)local_80) >> 1) * -3);
                                                        *puVar26 = 1;
                                                    }
                                                    bVar4 = false;
                                                }
                                            }
                                            uVar33 = uVar33 + 3;
                                            pPVar37 = local_60;
                                        } while (bVar4);
                                        pGVar39 = local_50;
                                        this = (PickingHelper*)&local_80->field_2;
                                        iVar8 = local_50->size();
                                    } while ((int)this < iVar8);
                                }
                            } else {
                                if ((pPVar37->field_256 != false) &&
                                    (this = (PickingHelper*)DebugPrimitiveCollectorBasic::GetCollector(""),
                                     (GeometryBatch*)this != (GeometryBatch*)0)) {
                                    math::Rect<float>::ToType<int>((Rect<float>*)local_100);
                                    new (local_110) oldscape::sidebars::SideBarData(1157627648, 0);
                                    (**(code**)(*(long*)this + 152))(this, local_100, 1, (SideBarData*)local_110);
                                }
                                local_6c = 0;
                            }
                        }
                        if ((char)local_6c == '\0') {
                            break;
                        }
                    }
                }
                this_00 = local_b0 + 8;
                local_39 = this_00 == local_178.field_72;
            } while (!local_39);
        }
        uVar32 = CONCAT71((int7)((ulong)this >> 8), 1);
        if ((local_39 & 1U) != 0) {
            if ((pPVar37->field_256 != false && (byte)local_54 == '\0') && (iVar8 = local_178.size(), 0 < iVar8)) {
                pAVar40 = (Array<math::Vector3T<float>, eastl::allocator>*)0;
                do {
                    piVar16 = (int*)eastl::vector<int, BucketAllocatorEASTL>::operator[](
                        (vector<int, BucketAllocatorEASTL>*)&local_178, (ulong)pAVar40);
                    iVar8 = *piVar16;
                    piVar16 = (int*)eastl::vector<int, BucketAllocatorEASTL>::operator[](
                        (vector<int, BucketAllocatorEASTL>*)&local_178, (ulong)(pAVar40 + 1));
                    iVar1 = *piVar16;
                    uVar32 = (ulong)iVar1;
                    local_c0 = pAVar40;
                    piVar16 = (int*)eastl::vector<int, BucketAllocatorEASTL>::operator[](
                        (vector<int, BucketAllocatorEASTL>*)&local_178, (ulong)(pAVar40 + 2));
                    local_68 = (vector*)(long)*piVar16;
                    uVar7 = 4278190335;
                    if (iVar8 == 1) {
                        uVar7 = 4294967295;
                    }
                    local_60 = (PickingHelper*)CONCAT44(local_60._4_4_, uVar7);
                    if (iVar1 < *piVar16) {
                        do {
                            plVar27 = (long*)DebugPrimitiveCollectorBasic::GetCollector("");
                            if (plVar27 != (long*)0) {
                                uVar15 = eastl::vector<math::Vector3T<float>, eastl::allocator>::operator[](
                                    (vector<math::Vector3T<float>, eastl::allocator>*)local_88, uVar32);
                                uVar28 = eastl::vector<math::Vector3T<float>, eastl::allocator>::operator[](
                                    (vector<math::Vector3T<float>, eastl::allocator>*)local_88, uVar32 + 1);
                                uVar29 = eastl::vector<math::Vector3T<float>, eastl::allocator>::operator[](
                                    (vector<math::Vector3T<float>, eastl::allocator>*)local_88, uVar32 + 2);
                                new (&local_d0) oldscape::sidebars::SideBarData((int)local_60, 1);
                                (**(code**)(*plVar27 + 16))(plVar27, uVar15, uVar28, uVar29, &local_d0);
                            }
                            uVar32 = uVar32 + 3;
                        } while ((long)uVar32 < (long)local_68);
                    }
                    pAVar40 = local_c0 + 3;
                    iVar8 = local_178.size();
                } while ((int)pAVar40 < iVar8);
            }
            uVar32 = (ulong)((uint)local_f0 & 4294967041);
        }
        local_178.~vector_set();
        return uVar32 & 4294967295;
    }

} // namespace jag::graphics
