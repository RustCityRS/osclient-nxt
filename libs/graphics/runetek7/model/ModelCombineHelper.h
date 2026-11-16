// libs/graphics/runetek7/model/ModelCombineHelper.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::oldscape::dash3d {
    // 0x10036b600, 224 bytes, placed by debug map only (low confidence)
    // CombineOperation::OnlyAnimationsChanged(ResolvedModel const&, ResolvedModel const&) const
    bool CombineOperation::OnlyAnimationsChanged(ResolvedModel* param_1, ResolvedModel* param_2) {
        shared_ptr* this_00;
        jag* this_01;
        bool bVar1;
        bool bVar2;
        bool bVar3;
        bool bVar4;
        shared_ptr* psVar5;
        shared_ptr* extraout_RDX;
        ResolvedModel local_b8;

        psVar5 = (shared_ptr*)param_1->GetAnimationState();
        bVar1 = shared_ptr::operator_cast_to_bool(psVar5);
        if (bVar1) {
            this_00 = (shared_ptr*)param_2->GetAnimationState();
            bVar1 = shared_ptr::operator_cast_to_bool(this_00);
        } else {
            bVar1 = false;
        }
        bVar2 = shared_ptr::operator_cast_to_bool(psVar5);
        bVar3 = true;
        if (!bVar2) {
            psVar5 = (shared_ptr*)param_2->GetAnimationState();
            bVar3 = shared_ptr::operator_cast_to_bool(psVar5);
        }
        this_01 = (jag*)param_1->GetModel();
        psVar5 = (shared_ptr*)param_2->GetModel();
        bVar2 = operator==(this_01, psVar5, extraout_RDX);
        bVar4 = (bool)(bVar2 & (!bVar2 | bVar1));
        if (((!bVar2 | bVar1) == 0) && (bVar3 == false)) {
            local_b8.GetLocalTransform();
            local_b8.field_64.GetLocalTransform();
            bVar4 = jag::math::operator==((Matrix44T*)&local_b8, (Matrix44T*)&local_b8.field_64);
        }
        return bVar4;
    }

    // 0x10036b6e0, 192 bytes, placed by debug map only (low confidence)
    // CombineOperation::OnlyAnimationsChangedBetweenModelSets(eastl::vector<OperationBuffer, eastl::allocator>&, eastl::vector<OperationBuffer, eastl::allocator>&) const
    ulong CombineOperation::OnlyAnimationsChangedBetweenModelSets(vector* param_1, vector* param_2) {
        long lVar2;
        long lVar3;
        OperationBuffer* this_00;
        OperationBuffer* pOVar4;
        ResolvedModel* pRVar5;
        CombineOperation* this_01;
        ResolvedModel* pRVar6;
        ulong uVar7;
        ulong uVar8;
        undefined8 unaff_R12;
        bool bVar9;

        lVar2 = param_1->size();
        lVar3 = param_2->size();
        if (lVar2 == lVar3) {
            lVar2 = param_1->size();
            bVar9 = lVar2 != 0;
            if (bVar9) {
                uVar8 = 0;
                do {
                    this_00 = (OperationBuffer*)eastl::vector<OperationBuffer, eastl::allocator>::operator[](
                        (vector<OperationBuffer, eastl::allocator>*)param_1, uVar8);
                    pOVar4 = (OperationBuffer*)eastl::vector<OperationBuffer, eastl::allocator>::operator[](
                        (vector<OperationBuffer, eastl::allocator>*)param_2, uVar8);
                    pRVar5 = (ResolvedModel*)this_00->Resolve(pOVar4);
                    this_01 = (CombineOperation*)eastl::vector<OperationBuffer, eastl::allocator>::operator[](
                        (vector<OperationBuffer, eastl::allocator>*)param_2, uVar8);
                    pRVar6 = (ResolvedModel*)this_01->Resolve(0);
                    if (OnlyAnimationsChanged(this_01, pRVar5, pRVar6) == '\0')
                        break;
                    uVar8 = uVar8 + 1;
                    uVar7 = param_1->size();
                    bVar9 = uVar8 < uVar7;
                } while (bVar9);
            }
            uVar8 = CONCAT71((int7)((ulong)unaff_R12 >> 8), bVar9) ^ 1;
        } else {
            uVar8 = 0;
        }
        return uVar8 & 4294967041;
    }

    // 0x10036b7e0, 496 bytes, placed by debug map only (low confidence)
    // CombineOperation::RelabelAnimationsForModelSet(shared_ptr<PoseStateRSeven>&, ResolvedModel const&) const
    void CombineOperation::RelabelAnimationsForModelSet(shared_ptr* param_1, ResolvedModel* param_2) {
        Matrix44T MVar1;
        Matrix44T MVar2;
        CombineOperation* pCVar3;
        LabelShiftRange* pLVar4;
        OperationBuffer* this_00;
        ResolvedModel* pRVar5;
        ulong uVar6;
        ResolvedModel local_148;
        ResolvedModel local_d8;
        undefined8 local_68;
        undefined1 local_58[16];
        shared_ptr<eastl::vector<CombineOperation::LabelShiftRange, eastl::allocator>>* local_48;
        OperationBuffer* local_40;
        shared_ptr* local_38;

        local_38 = param_1;
        param_2->GetAnimationState();
        local_d8.GetLocalTransform();
        MVar1._8_8_ = local_d8.field_8;
        MVar1._0_8_ = local_d8.field_0;
        MVar1._16_8_ = local_d8.field_16;
        MVar1._24_8_ = local_d8.field_24;
        MVar1._32_8_ = local_d8.m_animationState;
        MVar1._40_8_ = local_d8.field_40;
        MVar1._48_8_ = local_d8.field_48;
        TransformAnimationState((CombineOperation*)&local_148, (shared_ptr*)param_2, MVar1);
        local_48 = (shared_ptr<eastl::vector<CombineOperation::LabelShiftRange, eastl::allocator>>*)&field_48;
        pCVar3 = (CombineOperation*)
            shared_ptr<eastl::vector<CombineOperation::LabelShiftRange, eastl::allocator>>::operator*(local_48);
        pLVar4 = (LabelShiftRange*)eastl::vector<CombineOperation::LabelShiftRange, eastl::allocator>::operator[](
            (vector<CombineOperation::LabelShiftRange, eastl::allocator>*)pCVar3, 0);
        ShiftLabelsAndCombineAnimation(pCVar3, local_38, (shared_ptr*)&local_148, pLVar4);
        local_148.~shared_ptr();
        this_00 = (OperationBuffer*)(&field_16)->HeapBeginPtr();
        local_40 = (OperationBuffer*)(&field_16)->end();
        if (this_00 != local_40) {
            uVar6 = 1;
            do {
                pRVar5 = (ResolvedModel*)this_00->Resolve(0);
                new (&local_148) ResolvedModel(pRVar5);
                local_148.GetAnimationState();
                pRVar5 = &local_148;
                local_d8.field_64.GetLocalTransform();
                MVar2._8_8_ = local_d8.field_72;
                MVar2._0_8_ = local_d8.field_64;
                MVar2._16_8_ = local_d8.field_80;
                MVar2._24_8_ = local_d8.field_88;
                MVar2._32_8_ = local_d8.field_96;
                MVar2._40_8_ = local_d8.field_104;
                MVar2._48_8_ = local_68;
                TransformAnimationState((CombineOperation*)local_58, (shared_ptr*)pRVar5, MVar2);
                pCVar3 = (CombineOperation*)
                    shared_ptr<eastl::vector<CombineOperation::LabelShiftRange, eastl::allocator>>::operator*(local_48);
                pLVar4 =
                    (LabelShiftRange*)eastl::vector<CombineOperation::LabelShiftRange, eastl::allocator>::operator[](
                        (vector<CombineOperation::LabelShiftRange, eastl::allocator>*)pCVar3, uVar6);
                ShiftLabelsAndCombineAnimation(pCVar3, local_38, (shared_ptr*)local_58, pLVar4);
                local_58->~shared_ptr();
                uVar6 = uVar6 + 1;
                local_148.~ResolvedModel();
                this_00 = this_00 + 1;
            } while (this_00 != local_40);
        }
    }

    // 0x10036b9d0, 256 bytes, placed by debug map only (low confidence)
    // CombineOperation::ShiftLabelsAndCombineAnimation(shared_ptr<PoseStateRSeven>&, shared_ptr<PoseStateRSeven> const&, CombineOperation::LabelShiftRange const&) const
    void CombineOperation::ShiftLabelsAndCombineAnimation(shared_ptr* param_1, shared_ptr* param_2,
                                                          LabelShiftRange* param_3) {
        bool bVar1;
        shared_ptr local_48;
        shared_ptr local_38;

        bVar1 = shared_ptr::operator_cast_to_bool(param_2);
        if (bVar1) {
            make_shared<ShiftedLabelRangePoseStateRSeven, shared_ptr<PoseStateRSeven> const&, unsigned short const&,
                        unsigned short const&, unsigned short const&, unsigned short const&, unsigned short const&,
                        unsigned short const&>((jag*)&local_38, param_2, (ushort*)param_3, (ushort*)(param_3 + 2),
                                               (ushort*)(param_3 + 4), (ushort*)(param_3 + 6), (ushort*)(param_3 + 8),
                                               (ushort*)(param_3 + 10));
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)&local_48, &local_38);
            local_38.~shared_ptr();
            bVar1 = shared_ptr::operator_cast_to_bool(param_1);
            if (bVar1) {
                make_shared<ChainedPoseStateRSeven, shared_ptr<PoseStateRSeven> const&, shared_ptr<PoseStateRSeven>&>(
                    (jag*)&local_38, param_1, &local_48);
                shared_ptr<PoseStateRSeven>::operator=((shared_ptr<PoseStateRSeven>*)param_1, &local_38);
                local_38.~shared_ptr();
            } else {
                shared_ptr<PoseStateRSeven>::operator=((shared_ptr<PoseStateRSeven>*)param_1, &local_48);
            }
            local_48.~shared_ptr();
        }
    }

    // 0x10036bad0, 208 bytes, placed by debug map only (low confidence)
    // CombineOperation::TransformAnimationState(shared_ptr<PoseStateRSeven> const&, jag::math::Matrix44T<float>) const
    CombineOperation* CombineOperation::TransformAnimationState(shared_ptr* param_1, Matrix44T param_2) {
        bool bVar1;
        shared_ptr* in_RDX;
        undefined1 local_78[48];
        shared_ptr local_38;

        bVar1 = shared_ptr::operator_cast_to_bool(in_RDX);
        if ((bVar1) && (bVar1 = jag::math::operator!=(&param_2, (Matrix44T*)PTR_IDENTITY_100ee6730), bVar1)) {
            local_78->operator_cast_to_Matrix43T();
            make_shared<TransformedPoseStateRSeven, jag::math::Matrix43T<float>>((jag*)(local_78 + 48),
                                                                                 (Matrix43T*)local_78);
            make_shared<ChainedPoseStateRSeven, shared_ptr<PoseStateRSeven> const&,
                        shared_ptr<TransformedPoseStateRSeven>>((jag*)&local_38, in_RDX, (shared_ptr*)(local_78 + 48));
            shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
                (shared_ptr<RSevenDebugPresetProvider>*)this, &local_38);
            local_38.~shared_ptr();
            ((local_78 + 48))->~shared_ptr();
            return this;
        }
        new (this) shared_ptr<Decor>(in_RDX);
        return this;
    }

    // 0x10036bc40, 80 bytes, placed by debug map only (low confidence)
    // CombineOperation::RelabelModelForAnimation(jag::graphics::Model&, unsigned short&, unsigned short&, unsigned short&) const
    void CombineOperation::RelabelModelForAnimation(Model* param_1, ushort* param_2, ushort* param_3, ushort* param_4) {
        IncrementModelLabelsForAnimation(this, param_1, *param_2, *param_3, *param_4);
        IncrementLabelOffsets(this, param_1, param_2, param_3, param_4);
    }

    // 0x10036bd60, 384 bytes, placed by debug map only (low confidence)
    // CombineOperation::IncrementModelLabelsForAnimation(jag::graphics::Model&, unsigned short, unsigned short, unsigned short) const
    void CombineOperation::IncrementModelLabelsForAnimation(Model* param_1, ushort param_2, ushort param_3,
                                                            ushort param_4) {
        Layout* pLVar1;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* this_00;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* puVar2;
        GeometryBatchInstance* pGVar3;
        GeometryBatch* pGVar4;
        short* psVar5;
        short* psVar6;

        pLVar1 = (Layout*)param_1->GetBatchList();
        this_00 = (unique_ptr<jag::graphics::GeometryBatchInstance,
                              MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)
            eastl::basic_string<char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                                    eastl::allocator>>::Layout::HeapBeginPtr(pLVar1);
        puVar2 =
            (unique_ptr<jag::graphics::GeometryBatchInstance,
                        MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>*)pLVar1->end();
        if (this_00 != puVar2) {
            do {
                if (param_2 != 0) {
                    pGVar3 = (GeometryBatchInstance*)
                                 std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                                 MakeUniquePool<jag::graphics::GeometryBatchInstance,
                                                                3072>::UniquePoolDeleter>::operator->(this_00);
                    pGVar4 = (GeometryBatch*)pGVar3->GetGeometryBatch();
                    pLVar1 = (Layout*)pGVar4->GetBoneIDMap();
                    psVar5 = (short*)eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(pLVar1);
                    psVar6 = (short*)pLVar1->end();
                    for (; psVar5 != psVar6; psVar5 = psVar5 + 2) {
                        *psVar5 = *psVar5 + param_2;
                    }
                }
                if (param_3 != 0) {
                    pGVar3 = (GeometryBatchInstance*)
                                 std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                                 MakeUniquePool<jag::graphics::GeometryBatchInstance,
                                                                3072>::UniquePoolDeleter>::operator->(this_00);
                    pGVar4 = (GeometryBatch*)pGVar3->GetGeometryBatch();
                    pLVar1 = (Layout*)pGVar4->GetJointIDMap();
                    psVar5 = (short*)eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(pLVar1);
                    psVar6 = (short*)pLVar1->end();
                    for (; psVar5 != psVar6; psVar5 = psVar5 + 2) {
                        *psVar5 = *psVar5 + param_3;
                    }
                }
                if (param_4 != 0) {
                    pGVar3 = (GeometryBatchInstance*)
                                 std::unique_ptr<jag::graphics::GeometryBatchInstance,
                                                 MakeUniquePool<jag::graphics::GeometryBatchInstance,
                                                                3072>::UniquePoolDeleter>::operator->(this_00);
                    pGVar3 = (GeometryBatchInstance*)pGVar3->GetGeometryBatch();
                    pLVar1 = (Layout*)pGVar3->GetMaterial();
                    psVar5 = (short*)eastl::basic_string<
                        char, eastl::fixed_vector_allocator<1ul, 64ul, 1ul, 0ul, true,
                                                            eastl::allocator>>::Layout::HeapBeginPtr(pLVar1);
                    psVar6 = (short*)pLVar1->end();
                    for (; psVar5 != psVar6; psVar5 = psVar5 + 2) {
                        *psVar5 = *psVar5 + param_4;
                    }
                }
                this_00 = this_00 + 8;
            } while (this_00 != puVar2);
        }
    }

    // 0x10036bee0, 240 bytes, placed by debug map only (low confidence)
    // CombineOperation::IncrementLabelOffsets(jag::graphics::Model const&, unsigned short&, unsigned short&, unsigned short&) const
    void CombineOperation::IncrementLabelOffsets(Model* param_1, ushort* param_2, ushort* param_3, ushort* param_4) {
        function<eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                   eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                 eastl::allocator>> const*(jag::graphics::GeometryBatch_const&)>
            local_c8[48];
        function<eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                   eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                 eastl::allocator>> const*(jag::graphics::GeometryBatch_const&)>
            local_98[48];
        function<eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                   eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                 eastl::allocator>> const*(jag::graphics::GeometryBatch_const&)>
            local_68[48];
        long local_38;

        local_38 = *(long*)PTR____stack_chk_guard_100ee9d98;
        std::function<eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                        eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                      eastl::allocator>> const*(jag::graphics::GeometryBatch_const&)>::
            function<CombineOperation::IncrementLabelOffsets(jag::graphics::Model_const&, unsigned short&,
                                                             unsigned short&, unsigned short&) const ::__6,
                     void>(local_68);
        UpdateLabelOffset();
        std::function<eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                        eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                      eastl::allocator>> const*(jag::graphics::GeometryBatch_const&)>::
            ~function(local_68);
        std::function<eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                        eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                      eastl::allocator>> const*(jag::graphics::GeometryBatch_const&)>::
            function<CombineOperation::IncrementLabelOffsets(jag::graphics::Model_const&, unsigned short&,
                                                             unsigned short&, unsigned short&) const ::__7,
                     void>(local_98);
        UpdateLabelOffset();
        std::function<eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                        eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                      eastl::allocator>> const*(jag::graphics::GeometryBatch_const&)>::
            ~function(local_98);
        std::function<eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                        eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                      eastl::allocator>> const*(jag::graphics::GeometryBatch_const&)>::
            function<CombineOperation::IncrementLabelOffsets(jag::graphics::Model_const&, unsigned short&,
                                                             unsigned short&, unsigned short&) const ::__8,
                     void>(local_c8);
        UpdateLabelOffset();
        std::function<eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                                        eastl::vector<eastl::pair<unsigned short, unsigned short>,
                                                      eastl::allocator>> const*(jag::graphics::GeometryBatch_const&)>::
            ~function(local_c8);
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_38) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

} // namespace jag::oldscape::dash3d

namespace jag::graphics {
    class ModelCombineHelper {
    public:
        ~ModelCombineHelper();
        ModelCombineHelper();
        ModelCombineHelper(Model*, bool);
        void Reset(Model*, bool);
        void Combine(Model const*, graphicutils::TextureAtlasQuality const&, bool);
        void AddLabelsFromModel(Model const&);
        void FinishCombine();

        // data members, from how the methods use this: 72 bytes
        Model* field_0; // offset 0
        bool field_8;   // offset 8
        char _unknown_9[63];
    };

    // 0x10036b5f0, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ModelCombineHelper::~ModelCombineHelper(): jumps straight to the base-object destructor

    // 0x100372a20, 48 bytes, base-object destructor, inline, placed by class name
    // ModelCombineHelper::~ModelCombineHelper()
    void ModelCombineHelper::~ModelCombineHelper() {
        (&field_64)->~Array();
        (&field_40)->~vector();
        (&field_16)->~vector();
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x10036bc30, 16 bytes, inline, placed by debug map only (low confidence)
    // bool operator!=<float>(Matrix44T<float> const&, Matrix44T<float> const&)
    /* bool TEMPNAMEPLACEHOLDERVALUE(Matrix44T<float> const&,
   Matrix44T<float> const&) */

    bool operator!=(Matrix44T* param_1, Matrix44T* param_2) {
        bool bVar1;

        bVar1 = operator==(param_1, param_2);
        return !bVar1;
    }

} // namespace jag::math
