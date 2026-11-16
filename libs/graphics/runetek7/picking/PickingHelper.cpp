// libs/graphics/runetek7/picking/PickingHelper.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "PickingHelper.h"

namespace jag::graphics {
    // 0x103bbd390
    bool PickingHelper::m_debugAlwaysUseAccuratePicking;

    // 0x1007dc2c0
    PickingHelper::PickingHelper(bool arg1) : field_0(0) {
        new (&field_208) shared_ptr();
        new (&field_224) math::Vector2T();
        new (&field_232) math::Vector2T();
        new (&field_240) math::Vector2T();
        field_249 = arg1;
        field_256 = false;
        new (&field_264) Array<math::Matrix44T<float>>();
        new (&field_288) Array<std::pair<float, float>>();
        new (&field_312) eastl::vector<unsigned int>();
        new (&field_344) Array<math::Matrix44T<float>>();
        new (&field_368) Array<math::Vector3T<float>>();
        new (&field_392) eastl::vector<math::Vector3T<float>>();
        field_312.reserve(100);
    }

    // 0x1007dc430
    void PickingHelper::ResetPointTest(const math::Matrix44T<float>& matrix44, const math::Rect<float>& rect,
                                       const math::Point<float>& point, bool arg4, float arg5) {

        field_248 = 1;
        field_0 = 0;
        field_80 = matrix44;
        field_208 = rect;
        Point<float> local_38(point);
        field_224 = &local_38;
        field_252 = arg5;
        field_256 = arg4;
    }

    // 0x1007dc4e0
    void PickingHelper::ResetLineTest(const math::Matrix44T<float>& matrix44, const math::Rect<float>& rect,
                                      const math::Point<float>& point1, const math::Point<float>& point2, bool arg5) {

        field_248 = 0;
        field_0 = 0;
        field_80 = matrix44;
        field_208 = rect;
        Point<float> local_40(point1);
        field_232 = &local_40;
        Point<float> local_38(point2);
        field_240 = &local_38;
        field_256 = arg5;
    }

    // 0x1007dc580
    void PickingHelper::ProcessBoneTransforms(const VertexAnimation& vertexAnimation) {
        Matrix43T<float>* pMVar4;
        Matrix44T<float>* pMVar5;
        Matrix44T<float> local_108;
        Matrix44T<float> local_c8;
        Matrix44T<float> local_88;

        uint8_t* local_40 = &field_144;
        local_108** local_40;
        auto this_00 = vertexAnimation.first();
        uint8_t* puVar6 = &field_264;
        PickingHelper* local_38 = this;
        unsigned long uVar1 = puVar6->end();
        unsigned long uVar2 = this_00->HeapBeginPtr();
        if (uVar1 < uVar2) {
            uVar1 = this_00->HeapBeginPtr();
            puVar6->set_max_size(uVar1, 1);
        }
        long lVar3 = this_00->HeapBeginPtr();
        if (lVar3 != 0) {
            uVar1 = 0;
            do {
                pMVar4 = (Matrix43T<float>*)(*this_00)[uVar1];
                local_88 = math::Matrix44T<float>(*pMVar4);
                local_c8* local_88;
                pMVar5 = (Matrix44T<float>*)(*puVar6)[uVar1];
                *pMVar5 = local_c8;
                uVar1 = uVar1 + 1;
                uVar2 = this_00->HeapBeginPtr();
            } while (uVar1 < uVar2);
        }
        if (local_38->field_256 != false) {
            puVar6 = &local_38->field_344;
            uVar1 = puVar6->end();
            uVar2 = this_00->HeapBeginPtr();
            if (uVar1 < uVar2) {
                uVar1 = this_00->HeapBeginPtr();
                puVar6->set_max_size(uVar1, 1);
            }
            lVar3 = this_00->HeapBeginPtr();
            if (lVar3 != 0) {
                uVar1 = 0;
                do {
                    pMVar4 = (Matrix43T<float>*)(*this_00)[uVar1];
                    local_88 = math::Matrix44T<float>(*pMVar4);
                    local_c8* local_88;
                    pMVar5 = (Matrix44T<float>*)(*puVar6)[uVar1];
                    *pMVar5 = local_c8;
                    uVar1 = uVar1 + 1;
                    uVar2 = this_00->HeapBeginPtr();
                } while (uVar1 < uVar2);
            }
        }
    }

    // 0x1007dc750
    unsigned long PickingHelper::PickTest(
        const math::Matrix44T<float>& matrix44,
        const eastl::vector<
            std::unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>>&
            geometryBatchInstances,
        bool arg3, bool arg4, int arg5) {
        int iVar1;
        vector<game::MapSquare::MapSquarePos>* pvVar2;
        bool cVar3;
        bool bVar4;
        uint8_t bVar5;
        bool bVar6;
        uint32_t uVar7;
        int iVar8;
        uint64_t in_RAX;
        GeometryBatchInstance* pGVar9;
        shared_ptr<oldscape::midi2::MidiPlayerMainThread>* midiPlayerMainThread;
        compressed_pair<eastl::string*>* this_01;
        long lVar10;
        VertexAnimation* vertexAnimation;
        vector<unsigned short>* pvVar11;
        ObjType* this_03;
        vector<SourceModelExternalIndexSection>* this_04;
        vector<GeometryBatchVertexSkin>* pvVar12;
        unsigned int* puVar13;
        uint64_t uVar14;
        int* piVar15;
        Vector3T<float>* pVVar16;
        Vector4T<float>* pVVar17;
        uint64_t extraout_var;
        uint64_t extraout_var_00;
        unsigned short* puVar18;
        float* pfVar19;
        float* pfVar20;
        float* pfVar21;
        uint64_t extraout_var_01;
        uint64_t extraout_var_02;
        uint64_t extraout_var_03;
        uint64_t uVar27;
        long lVar22;
        uint32_t* puVar23;
        long* plVar24;
        uint64_t uVar25;
        uint64_t uVar26;
        uint64_t in_register_00000009;
        unsigned int uVar28;
        unsigned long uVar29;
        vector<GeometryBatchVertexSkin>* arg1;
        unsigned int uVar30;
        float* pfVar31;
        vector<GeometryBatchVertexSkin>* arg1_00;
        unsigned int uVar32;
        unsigned int uVar34;
        GeometryBatch* pGVar35;
        Array<math::Vector3T<float>>* arg1_01;
        float fVar36;
        float* local_128;
        float* local_120;
        float* local_118;
        uint8_t local_110[16];
        uint8_t local_100[24];
        Point<float>* local_e8;
        Point<float>* local_e0;
        SideBarData local_d0;
        Array<math::Vector3T<float>>* local_c0;
        vector<game::MapSquare::MapSquarePos>* local_b8;
        unique_ptr<GeometryBatchInstance, MakeUniquePool<GeometryBatchInstance, 3072>::UniquePoolDeleter>* local_b0;
        Point<float>* local_a8;
        float* local_a0;
        GeometryBatch* local_98;
        float* local_90;
        GeometryBatch* local_80;
        vector<unsigned short>* local_78;
        unsigned int local_70;
        uint32_t local_6c;
        vector<GeometryBatchVertexSkin>* local_68;
        PickingHelper* local_60;
        uint32_t local_54;
        GeometryBatch* local_50;
        uint8_t local_41;
        unsigned int local_38;

        if ((int)(((uint64_t)in_register_00000009 << 8) | (uint8_t)arg3) == 0) {
            local_54 = 0;
        } else {
            local_54 =
                (uint32_t)(((uint64_t)((int64_t)((unsigned long)in_RAX >> 8)) << 8) | (uint8_t)(field_249 == false));
        }
        uint8_t local_31 = m_debugAlwaysUseAccuratePicking != '\0';
        field_144 = matrix44;
        local_178* field_144;
        field_16 = local_178;
        int local_40 = 0;
        Matrix44T<float> local_178;
        auto this_00 = geometryBatchInstances.HeapBeginPtr();
        auto local_130 = geometryBatchInstances.end();
        vector<oldscape::rseven::ModelFace>* local_88 = (vector<oldscape::rseven::ModelFace>*)&field_392;
        bool local_39 = this_00 == local_130;
        PickingHelper* pPVar33 = this;
        if (local_39) {
            local_100._16_8_ = 0;
        } else {
            local_31 = local_31 | !arg4;
            local_50 = (GeometryBatch*)&field_312;
            local_110._8_8_ = &field_288;
            local_c0 = (Array<math::Vector3T<float>>*)&field_368;
            local_a8 = (Point<float>*)&field_224;
            local_e8 = (Point<float>*)&field_232;
            local_e0 = (Point<float>*)&field_240;
            local_41 = (uint8_t)local_54 ^ 1;
            local_128 = &field_252;
            local_100._16_8_ = 0;
            local_60 = this;
            do {
                local_b0 = this_00;
                pGVar9 = (GeometryBatchInstance*)(*this_00).operator->();
                this = (PickingHelper*)pGVar9->GetGeometryBatch();
                cVar3 = IsHidden();
                if (!cVar3) {
                    pGVar9 = (GeometryBatchInstance*)(*local_b0).operator->();
                    pGVar9 = (GeometryBatchInstance*)pGVar9->GetVertexAnimation();
                    midiPlayerMainThread = (shared_ptr<oldscape::midi2::MidiPlayerMainThread>*)pGVar9->GetMaterial();
                    bVar4 = *midiPlayerMainThread != nullptr;
                    if (bVar4) {
                        pGVar9 = (GeometryBatchInstance*)(*local_b0).operator->();
                        this_01 = (compressed_pair<eastl::string*>*)pGVar9->GetVertexAnimation();
                        lVar10 = ((Layout*)this_01->first())->HeapBeginPtr();
                        uVar7 = (uint32_t)(((uint64_t)((int64_t)((unsigned long)lVar10 >> 8)) << 8) |
                                           (uint8_t)(lVar10 != 0));
                    } else {
                        uVar7 = 0;
                    }
                    local_98 = (GeometryBatch*)(((uint64_t)local_98._4_4_ << 32) | (uint32_t)uVar7);
                    if ((char)uVar7 != '\0') {
                        pGVar9 = (GeometryBatchInstance*)(*local_b0).operator->();
                        vertexAnimation = (VertexAnimation*)pGVar9->GetVertexAnimation();
                        ProcessBoneTransforms(pPVar33, vertexAnimation);
                    }
                    pvVar11 = (vector<unsigned short>*)GetVertexDataBufferSkin();
                    local_b8 = (vector<game::MapSquare::MapSquarePos>*)GetVertexIndexBuffer();
                    local_50->clear();
                    local_80 = (GeometryBatch*)this;
                    local_78 = pvVar11;
                    if (arg5 == -1) {
                        local_38 = 0;
                        cVar3 = VertexBuffersInitialised();
                        if (!cVar3) {
                            local_70 = ((vector<shared_ptr<oldscape::dash3d::ModelUnlit>, BucketAllocatorEASTL>*)
                                            GetVertexDataBufferPos())
                                           ->size();
                        } else {
                            local_70 = ((vector<oldscape::dash3d::EntityHighlight*, BucketAllocatorEASTL>*)
                                            GetVertexDataBufferPosLP())
                                           ->end();
                        }
                        this = (PickingHelper*)local_50;
                        local_d0.field_0 = 0;
                        local_50->push_back(local_d0);
                        local_d0.field_0 = local_b8->size();
                        push_back(local_d0);
                    } else {
                        local_38 = 65535;
                        local_70 = 0;
                        this_03 = (ObjType*)(*local_b0).operator->();
                        this_04 = (vector<SourceModelExternalIndexSection>*)this_03->GetRecolourDest();
                        pvVar12 = (vector<GeometryBatchVertexSkin>*)this_04->size();
                        if (pvVar12 != nullptr) {
                            arg1_00 = nullptr;
                            local_68 = pvVar12;
                            do {
                                arg1 = arg1_00;
                                this = (PickingHelper*)(*this_04)[(unsigned long)arg1_00];
                                if (*(int*)this == arg5) {
                                    puVar13 = (unsigned int*)(*((array<IndexRange, 5ul>*)&((GeometryBatch*)this)
                                                                    ->field_20))[(unsigned long)arg1];
                                    pGVar35 = local_50;
                                    local_50->push_back(*puVar13);
                                    pGVar35->push_back(*(puVar13 + 1));
                                    puVar13 = std::min<unsigned int>(
                                        local_38, *((unsigned int*)&((GeometryBatch*)this)->field_60));
                                    local_38 = *puVar13;
                                    this = (PickingHelper*)&((GeometryBatch*)this)->field_64;
                                    puVar13 = std::max<unsigned int>(local_70, *this);
                                    local_70 = *puVar13;
                                    pPVar33 = local_60;
                                    pvVar12 = local_68;
                                }
                                arg1_00 = arg1_00 + 1;
                            } while (pvVar12 != arg1_00);
                        }
                    }
                    lVar10 = local_50->size();
                    if (lVar10 != 0) {
                        new (&local_d0) shared_ptr();
                        cVar3 = local_80->VertexBuffersInitialised();
                        pGVar35 = local_80;
                        bVar4 = local_98._0_1_;
                        if (!cVar3) {
                            local_68 = (vector<GeometryBatchVertexSkin>*)local_80->GetVertexDataBufferPos();
                            uVar28 = local_38;
                            uVar30 = local_70;
                            fVar36 = (float)pGVar35->GetFarClip();
                            pvVar11 = local_78;
                            ProcessVertices<eastl::vector<GeometryBatchVertexPos>>(
                                (PickingHelper*)local_100, (vector<GeometryBatchVertexPos>*)local_60, local_68,
                                local_78, (vector<unsigned int>*)local_b8, (int)local_50, uVar28, (uint8_t)uVar30,
                                bVar4, fVar36);
                        } else {
                            local_68 = (vector<GeometryBatchVertexSkin>*)local_80->GetVertexDataBufferPosLP();
                            uVar28 = local_38;
                            uVar30 = local_70;
                            fVar36 = (float)pGVar35->GetFarClip();
                            pvVar11 = local_78;
                            ProcessVertices<Array<GeometryBatchVertexPosLP>>(
                                (PickingHelper*)local_100, (Array<GeometryBatchVertexPosLP>*)local_60, local_68,
                                local_78, (vector<unsigned int>*)local_b8, (int)local_50, uVar28, (uint8_t)uVar30,
                                bVar4, fVar36);
                        }
                        this = (PickingHelper*)local_100;
                        uVar14 = local_d0 = *this;
                        pPVar33 = local_60;
                        bVar5 = local_60->field_256 == false | (uint8_t)local_54;
                        uVar14 = (((uint64_t)((int64_t)((unsigned long)uVar14 >> 8)) << 8) | (uint8_t)bVar5);
                        if ((bVar5 == 0) && (uVar14 = local_50->size(), 0 < (int)uVar14)) {
                            pfVar31 = nullptr;
                            do {
                                local_100._0_4_ = 0;
                                local_178.push_back(*local_100);
                                local_178.push_back(local_40);
                                pGVar35 = local_50;
                                puVar13 = (unsigned int*)(*local_50)[(unsigned long)pfVar31];
                                uVar30 = *puVar13;
                                piVar15 = (int*)(*pGVar35)[(unsigned long)pfVar31 | 1];
                                local_a0 = (float*)(((uint64_t)local_a0._4_4_ << 32) | (uint32_t)(*piVar15));
                                uVar28 = *piVar15 - uVar30;
                                this = (PickingHelper*)(unsigned long)uVar28;
                                iVar8 = local_88->size();
                                pvVar11 = (vector<unsigned short>*)(long)local_40;
                                if (iVar8 < (int)(pvVar11 + (int)uVar28)) {
                                    local_88->resize((unsigned long)(pvVar11 + (int)uVar28));
                                }
                                local_90 = pfVar31;
                                if (uVar30 < (unsigned int)local_a0) {
                                    do {
                                        pvVar2 = local_b8;
                                        puVar18 = (unsigned short*)(*local_b8)[(unsigned long)uVar30];
                                        uVar34 = *puVar18 - local_38;
                                        puVar18 = (unsigned short*)(*pvVar2)[(unsigned long)(uVar30 + 1)];
                                        uVar28 = *puVar18 - local_38;
                                        puVar18 = (unsigned short*)(*pvVar2)[(unsigned long)(uVar30 + 2)];
                                        uVar14 = local_110._8_8_;
                                        uVar32 = *puVar18 - local_38;
                                        local_80 = (GeometryBatch*)(unsigned long)uVar34;
                                        local_68 = (vector<GeometryBatchVertexSkin>*)(unsigned long)uVar30;
                                        pfVar31 = (float*)(*local_110._8_8_)[(unsigned long)local_80];
                                        this = (PickingHelper*)(unsigned long)uVar28;
                                        pfVar19 = (float*)(*uVar14)[(unsigned long)this];
                                        local_78 = (vector<unsigned short>*)(unsigned long)uVar32;
                                        local_98 = (GeometryBatch*)this;
                                        pfVar20 = (float*)(*uVar14)[(unsigned long)local_78];
                                        pvVar12 = local_68;
                                        if (((((*pfVar31 != -999999.0) && (pfVar31[1] != -999999.0)) &&
                                              (*pfVar19 != -999999.0)) &&
                                             ((pfVar19[1] != -999999.0 && (*pfVar20 != -999999.0)))) &&
                                            (pfVar20[1] != -999999.0)) {
                                            pVVar16 = (Vector3T<float>*)(*local_c0)[(unsigned long)local_80];
                                            uVar29 = (unsigned long)local_40;
                                            local_40 = local_40 + 1;
                                            pVVar17 = (Vector4T<float>*)(*local_88)[uVar29];
                                            pVVar17->SetXYZ(*pVVar16);
                                            pVVar16 = (Vector3T<float>*)(*local_c0)[(unsigned long)local_98];
                                            uVar29 = (unsigned long)local_40;
                                            local_40 = local_40 + 1;
                                            pVVar17 = (Vector4T<float>*)(*local_88)[uVar29];
                                            pVVar17->SetXYZ(*pVVar16);
                                            this = (PickingHelper*)(*local_c0)[(unsigned long)local_78];
                                            uVar29 = (unsigned long)local_40;
                                            local_40 = local_40 + 1;
                                            pVVar17 = (Vector4T<float>*)(*local_88)[uVar29];
                                            pVVar17->SetXYZ(*this);
                                        }
                                        uVar30 = (int)pvVar12 + 3;
                                        pPVar33 = local_60;
                                    } while (uVar30 < (unsigned int)local_a0);
                                }
                                pfVar31 = local_90;
                                local_178.push_back(local_40);
                                pfVar31 = (float*)((long)pfVar31 + 2);
                                uVar14 = local_50->size();
                            } while ((int)pfVar31 < (int)uVar14);
                        }
                        if (pPVar33->field_248 == '\0') {
                        LAB_1007dce81:
                            if (pPVar33->field_248 == '\0') {
                                bVar4 = math::RectLineIntersection<float>(local_d0, *local_e8, *local_e0);
                                uVar14 = (((uint64_t)extraout_var_00 << 8) | (uint8_t)bVar4);
                                if (bVar4)
                                    goto LAB_1007dcead;
                            }
                            local_6c =
                                (uint32_t)(((uint64_t)((int64_t)((unsigned long)uVar14 >> 8)) << 8) | (uint8_t)1);
                            if ((pPVar33->field_256 != false && local_41 == 0) &&
                                (this = (PickingHelper*)DebugPrimitiveCollectorBasic::GetCollector(""),
                                 (GeometryBatch*)this != nullptr)) {
                                *local_100 = local_d0.ToType<int>();
                                new (local_110) oldscape::sidebars::SideBarData(1157562368, 0);
                                (**(void (**)(...))(*(long*)this + 152))(this, local_100, 1, (SideBarData*)local_110);
                            }
                        } else {
                            bVar4 = local_d0.IsInside<float>(*local_a8);
                            uVar14 = (((uint64_t)extraout_var << 8) | (uint8_t)bVar4);
                            if (!bVar4)
                                goto LAB_1007dce81;
                        LAB_1007dcead:
                            if ((uint8_t)local_54 == '\0') {
                                iVar8 = local_50->size();
                                local_6c =
                                    (uint32_t)(((uint64_t)((int64_t)((unsigned long)pvVar11 >> 8)) << 8) | (uint8_t)1);
                                if (0 < iVar8) {
                                    this = nullptr;
                                    pGVar35 = local_50;
                                    do {
                                        puVar13 = (unsigned int*)(*pGVar35)[(unsigned long)this];
                                        uVar30 = *puVar13;
                                        local_68 = (vector<GeometryBatchVertexSkin>*)((unsigned long)this | 1);
                                        local_80 = (GeometryBatch*)this;
                                        do {
                                            puVar13 = (unsigned int*)(*local_50)[(unsigned long)local_68];
                                            pvVar2 = local_b8;
                                            if (*puVar13 <= uVar30)
                                                break;
                                            puVar18 = (unsigned short*)(*local_b8)[(unsigned long)uVar30];
                                            uVar32 = *puVar18 - local_38;
                                            puVar18 = (unsigned short*)(*pvVar2)[(unsigned long)(uVar30 + 1)];
                                            uVar34 = *puVar18 - local_38;
                                            puVar18 = (unsigned short*)(*pvVar2)[(unsigned long)(uVar30 + 2)];
                                            uVar14 = local_110._8_8_;
                                            uVar28 = *puVar18 - local_38;
                                            pfVar31 = (float*)(*local_110._8_8_)[(unsigned long)uVar32];
                                            pfVar19 = (float*)(*uVar14)[(unsigned long)uVar34];
                                            pfVar20 = (float*)(*uVar14)[(unsigned long)uVar28];
                                            bVar4 = true;
                                            if ((((*pfVar31 != -999999.0) && (pfVar31[1] != -999999.0)) &&
                                                 (*pfVar19 != -999999.0)) &&
                                                (((pfVar19[1] != -999999.0 && (*pfVar20 != -999999.0)) &&
                                                  (pfVar20[1] != -999999.0)))) {
                                                local_98 = (GeometryBatch*)(pfVar31 + 1);
                                                local_78 = (vector<unsigned short>*)(pfVar19 + 1);
                                                local_a0 = pfVar20 + 1;
                                                if (local_60->field_248 == '\0' || local_31 != 0) {
                                                LAB_1007dd165:
                                                    if ((local_60->field_248 != '\0' & local_31) == 1) {
                                                        local_90 = (float*)local_a8->SSOBeginPtr();
                                                        pfVar21 = (float*)local_a8->y();
                                                        bVar6 = math::TrianglePointIntersection<float>(
                                                            *local_90, *pfVar21, *pfVar31, *local_98, *pfVar19,
                                                            *local_78, *pfVar20, *local_a0);
                                                        uVar27 = extraout_var_02;
                                                        if (bVar6)
                                                            goto LAB_1007dd274;
                                                    }
                                                    if (local_60->field_248 == '\0') {
                                                        local_90 = (float*)local_e8->SSOBeginPtr();
                                                        local_120 = (float*)local_e8->y();
                                                        local_118 = (float*)local_e0->SSOBeginPtr();
                                                        pfVar21 = (float*)local_e0->y();
                                                        bVar6 = math::TriangleLineIntersection<float>(
                                                            *local_90, *local_120, *local_118, *pfVar21, *pfVar31,
                                                            *local_98, *pfVar19, *local_78, *pfVar20, *local_a0);
                                                        uVar27 = extraout_var_03;
                                                        if (bVar6)
                                                            goto LAB_1007dd274;
                                                    }
                                                } else {
                                                    local_90 = (float*)local_a8->SSOBeginPtr();
                                                    pfVar21 = (float*)local_a8->y();
                                                    bVar6 = math::TrianglePointIntersectionFast<float>(
                                                        *local_90, *pfVar21, *pfVar31, *local_98, *pfVar19, *local_78,
                                                        *pfVar20, *local_a0, *local_128);
                                                    uVar27 = extraout_var_01;
                                                    if (!bVar6)
                                                        goto LAB_1007dd165;
                                                LAB_1007dd274:
                                                    local_100._17_7_ = uVar27;
                                                    local_100[16] = 1;
                                                    if (local_60->field_256 != false) {
                                                        lVar10 = local_178.size();
                                                        lVar22 = local_50->size();
                                                        puVar23 =
                                                            &local_178[lVar10 +
                                                                       ((unsigned long)(lVar22 - (long)local_80) >> 1) *
                                                                           -3];
                                                        *puVar23 = 1;
                                                    }
                                                    bVar4 = false;
                                                }
                                            }
                                            uVar30 = uVar30 + 3;
                                            pPVar33 = local_60;
                                        } while (bVar4);
                                        pGVar35 = local_50;
                                        this = (PickingHelper*)&local_80->field_2;
                                        iVar8 = local_50->size();
                                    } while ((int)this < iVar8);
                                }
                            } else {
                                if ((pPVar33->field_256 != false) &&
                                    (this = (PickingHelper*)DebugPrimitiveCollectorBasic::GetCollector(""),
                                     (GeometryBatch*)this != nullptr)) {
                                    *local_100 = local_d0.ToType<int>();
                                    new (local_110) oldscape::sidebars::SideBarData(1157627648, 0);
                                    (**(void (**)(...))(*(long*)this + 152))(this, local_100, 1,
                                                                             (SideBarData*)local_110);
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
                local_39 = this_00 == local_130;
            } while (!local_39);
        }
        uVar29 = (((uint64_t)((int64_t)((unsigned long)this >> 8)) << 8) | (uint8_t)1);
        if ((local_39 & 1U) != 0) {
            if ((pPVar33->field_256 != false && (uint8_t)local_54 == '\0') && (iVar8 = local_178.size(), 0 < iVar8)) {
                arg1_01 = nullptr;
                do {
                    piVar15 = &local_178[(unsigned long)arg1_01];
                    iVar8 = *piVar15;
                    piVar15 = &local_178[(unsigned long)(arg1_01 + 1)];
                    iVar1 = *piVar15;
                    uVar29 = (unsigned long)iVar1;
                    local_c0 = arg1_01;
                    piVar15 = &local_178[(unsigned long)(arg1_01 + 2)];
                    local_68 = (vector<GeometryBatchVertexSkin>*)(long)*piVar15;
                    uVar7 = 4278190335;
                    if (iVar8 == 1) {
                        uVar7 = 4294967295;
                    }
                    local_60 = (PickingHelper*)(((uint64_t)local_60._4_4_ << 32) | (uint32_t)uVar7);
                    if (iVar1 < *piVar15) {
                        do {
                            plVar24 = DebugPrimitiveCollectorBasic::GetCollector("");
                            if (plVar24 != nullptr) {
                                uVar14 = (*local_88)[uVar29];
                                uVar25 = (*local_88)[uVar29 + 1];
                                uVar26 = (*local_88)[uVar29 + 2];
                                local_d0 = oldscape::sidebars::SideBarData((int)local_60, 1);
                                (**(void (**)(...))(*plVar24 + 16))(plVar24, uVar14, uVar25, uVar26, &local_d0);
                            }
                            uVar29 = uVar29 + 3;
                        } while ((long)uVar29 < (long)local_68);
                    }
                    arg1_01 = local_c0 + 3;
                    iVar8 = local_178.size();
                } while ((int)arg1_01 < iVar8);
            }
            uVar29 = (unsigned long)(local_100._16_4_ & 4294967041);
        }
        return uVar29 & 4294967295;
    }

} // namespace jag::graphics
