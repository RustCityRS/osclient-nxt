// libs/graphics/runetek7/model/ModelCombineHelper.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.jagex3

namespace jag::oldscape::dash3d {
    // 0x10036b600
    bool CombineOperation::OnlyAnimationsChanged(const ResolvedModel& resolvedModel1,
                                                 const ResolvedModel& resolvedModel2) const {
        uint8_t bVar2;
        ReturnValue local_b8;
        ReturnValue local_78;

        auto psVar6 = resolvedModel1.GetAnimationState();
        bool cVar1 = shared_ptr::operator_cast_to_bool(psVar6);
        if (!cVar1) {
            bVar2 = 0;
        } else {
            bVar2 = (resolvedModel2.GetAnimationState())->operator_cast_to_bool();
        }
        cVar1 = shared_ptr::operator_cast_to_bool(psVar6);
        char cVar3 = '\x01';
        if (!cVar1) {
            psVar6 = (shared_ptr*)resolvedModel2.GetAnimationState();
            cVar3 = shared_ptr::operator_cast_to_bool(psVar6);
        }
        auto midiRequest1 = resolvedModel1.GetModel();
        auto midiRequest2 = resolvedModel2.GetModel();
        bool bVar4 = *midiRequest1 == *midiRequest2;
        bool bVar5 = (bool)(bVar4 & (!bVar4 | bVar2));
        if (((!bVar4 | bVar2) == 0) && (!cVar3)) {
            local_b8 = resolvedModel1.GetLocalTransform();
            local_78 = resolvedModel2.GetLocalTransform();
            bVar5 = local_b8 == local_78;
        }
        return bVar5;
    }

    // 0x10036b6e0
    unsigned long
    CombineOperation::OnlyAnimationsChangedBetweenModelSets(eastl::vector<OperationBuffer>& operationBuffers1,
                                                            eastl::vector<OperationBuffer>& operationBuffers2) const {
        OperationBuffer* this_00;
        OperationBuffer* operationBuffer;
        ResolvedModel* resolvedModel1;
        CombineOperation* this_01;
        ResolvedModel* resolvedModel2;
        unsigned long uVar4;
        unsigned long uVar5;
        uint64_t unaff_R12;
        bool bVar6;

        long lVar2 = operationBuffers1.size();
        long lVar3 = operationBuffers2.size();
        if (lVar2 == lVar3) {
            lVar2 = operationBuffers1.size();
            bVar6 = lVar2 != 0;
            if (bVar6) {
                uVar5 = 0;
                do {
                    this_00 = &operationBuffers1[uVar5];
                    operationBuffer = (OperationBuffer*)operationBuffers2[uVar5];
                    resolvedModel1 = this_00->Resolve(operationBuffer);
                    this_01 = &operationBuffers2[uVar5];
                    resolvedModel2 = this_01->Resolve(nullptr);
                    if (OnlyAnimationsChanged(this_01, resolvedModel1, resolvedModel2) == '\0')
                        break;
                    uVar5 = uVar5 + 1;
                    uVar4 = operationBuffers1.size();
                    bVar6 = uVar5 < uVar4;
                } while (bVar6);
            }
            uVar5 = (((uint64_t)((int64_t)((unsigned long)unaff_R12 >> 8)) << 8) | (uint8_t)bVar6) ^ 1;
        } else {
            uVar5 = 0;
        }
        return uVar5 & 4294967041;
    }

    // 0x10036b7e0
    void CombineOperation::RelabelAnimationsForModelSet(shared_ptr<PoseStateRSeven>& poseStateRSeven,
                                                        const ResolvedModel& resolvedModel) const {
        ResolvedModel* pRVar4;
        unsigned long arg1;
        ResolvedModel local_148;
        ReturnValue local_98;
        uint8_t local_58[16];

        auto pMVar1 = resolvedModel.GetAnimationState();
        auto local_d8 = resolvedModel.GetLocalTransform();
        TransformAnimationState((CombineOperation*)&local_148, (shared_ptr<PoseStateRSeven>*)resolvedModel, pMVar1);
        shared_ptr<eastl::vector<CombineOperation::LabelShiftRange>>* local_48 =
            (shared_ptr<eastl::vector<CombineOperation::LabelShiftRange>>*)&field_48;
        CombineOperation* pCVar2 = (CombineOperation*)**local_48;
        LabelShiftRange* pLVar3 = (LabelShiftRange*)(*pCVar2)[0];
        ShiftLabelsAndCombineAnimation(pCVar2, poseStateRSeven, (shared_ptr<PoseStateRSeven>*)&local_148, pLVar3);
        auto this_00 = field_16.HeapBeginPtr();
        auto local_40 = field_16.end();
        if (this_00 != local_40) {
            arg1 = 1;
            do {
                pRVar4 = this_00->Resolve(nullptr);
                local_148 = ResolvedModel(*pRVar4);
                pMVar1 = (Matrix44T<float>*)local_148.GetAnimationState();
                pRVar4 = &local_148;
                local_98 = local_148.GetLocalTransform();
                TransformAnimationState((CombineOperation*)local_58, (shared_ptr<PoseStateRSeven>*)pRVar4, pMVar1);
                pCVar2 = (CombineOperation*)**local_48;
                pLVar3 = (LabelShiftRange*)(*pCVar2)[arg1];
                ShiftLabelsAndCombineAnimation(pCVar2, poseStateRSeven, (shared_ptr<PoseStateRSeven>*)local_58, pLVar3);
                arg1 = arg1 + 1;
                this_00 = this_00 + 1;
            } while (this_00 != local_40);
        }
    }

    // 0x10036b9d0
    void
    CombineOperation::ShiftLabelsAndCombineAnimation(shared_ptr<PoseStateRSeven>& poseStateRSeven1,
                                                     const shared_ptr<PoseStateRSeven>& poseStateRSeven2,
                                                     const CombineOperation::LabelShiftRange& labelShiftRange) const {
        shared_ptr<RSevenDebugPresetProvider> local_48;
        ReturnValue local_38;

        if (poseStateRSeven2.operator_cast_to_bool()) {
            make_shared<ShiftedLabelRangePoseStateRSeven, shared_ptr<PoseStateRSeven> const&, unsigned short const&,
                        unsigned short const&, unsigned short const&, unsigned short const&, unsigned short const&,
                        unsigned short const&>(
                &local_38, (unsigned short*)poseStateRSeven2, (unsigned short*)labelShiftRange,
                (unsigned short*)(labelShiftRange + 2), (unsigned short*)(labelShiftRange + 4),
                (unsigned short*)(labelShiftRange + 6), (unsigned short*)(labelShiftRange + 8));
            local_48.shared_ptr<FileRSevenDebugPresetProvider, void>(local_38);
            if (!(poseStateRSeven1.operator_cast_to_bool())) {
                poseStateRSeven1 = local_48;
            } else {
                make_shared<ChainedPoseStateRSeven, shared_ptr<PoseStateRSeven> const&, shared_ptr<PoseStateRSeven>&>(
                    &local_38, poseStateRSeven1, &local_48);
                poseStateRSeven1 = local_38;
            }
        }
    }

    // 0x10036bad0
    CombineOperation* CombineOperation::TransformAnimationState(const shared_ptr<PoseStateRSeven>& poseStateRSeven,
                                                                jag::math::Matrix44T<float> matrix44) const {
        bool bVar2;
        Matrix44T<float> MStack0000000000000008;
        uint8_t local_78[48];
        ReturnValue local_38;

        if ((matrix44->operator_cast_to_bool() != '\0') &&
            (bVar2 = MStack0000000000000008 != *PTR_IDENTITY_100ee6730, bVar2)) {
            local_78->operator_cast_to_Matrix43T();
            make_shared<TransformedPoseStateRSeven, jag::math::Matrix43T<float>>((ReturnValue*)(local_78 + 48),
                                                                                 (Matrix43T<float>*)local_78);
            make_shared<ChainedPoseStateRSeven, shared_ptr<PoseStateRSeven> const&,
                        shared_ptr<TransformedPoseStateRSeven>>(
                &local_38, (shared_ptr<PoseStateRSeven>*)matrix44,
                (shared_ptr<TransformedPoseStateRSeven>*)(local_78 + 48));
            shared_ptr<FileRSevenDebugPresetProvider, void>(local_38);
            ((local_78 + 48))->~shared_ptr();
            return this;
        }
        new (this) shared_ptr(matrix44);
        return this;
    }

    // 0x10036bc40
    void CombineOperation::RelabelModelForAnimation(jag::graphics::Model& model, unsigned short& arg2,
                                                    unsigned short& arg3, unsigned short& arg4) const {
        IncrementModelLabelsForAnimation(model, arg2, arg3, arg4);
        IncrementLabelOffsets(model, arg2, arg3, arg4);
    }

    // 0x10036bd60
    void CombineOperation::IncrementModelLabelsForAnimation(jag::graphics::Model& model, unsigned short arg2,
                                                            unsigned short arg3, unsigned short arg4) const {
        GeometryBatchInstance* pGVar3;
        GeometryBatch* pGVar4;
        short* psVar5;
        short* psVar6;

        auto pLVar1 = model.GetBatchList();
        auto this_00 = pLVar1->HeapBeginPtr();
        auto puVar2 = pLVar1->end();
        if (this_00 != puVar2) {
            do {
                if (arg2 != 0) {
                    pGVar3 = (GeometryBatchInstance*)(*this_00).operator->();
                    pGVar4 = (GeometryBatch*)pGVar3->GetGeometryBatch();
                    pLVar1 = (Layout*)pGVar4->GetBoneIDMap();
                    psVar5 = (short*)pLVar1->HeapBeginPtr();
                    psVar6 = (short*)pLVar1->end();
                    for (; psVar5 != psVar6; psVar5 = psVar5 + 2) {
                        *psVar5 = *psVar5 + arg2;
                    }
                }
                if (arg3 != 0) {
                    pGVar3 = (GeometryBatchInstance*)(*this_00).operator->();
                    pGVar4 = (GeometryBatch*)pGVar3->GetGeometryBatch();
                    pLVar1 = (Layout*)pGVar4->GetJointIDMap();
                    psVar5 = (short*)pLVar1->HeapBeginPtr();
                    psVar6 = (short*)pLVar1->end();
                    for (; psVar5 != psVar6; psVar5 = psVar5 + 2) {
                        *psVar5 = *psVar5 + arg3;
                    }
                }
                if (arg4 != 0) {
                    pGVar3 = (GeometryBatchInstance*)(*this_00).operator->();
                    pGVar3 = (GeometryBatchInstance*)pGVar3->GetGeometryBatch();
                    pLVar1 = (Layout*)pGVar3->GetMaterial();
                    psVar5 = (short*)pLVar1->HeapBeginPtr();
                    psVar6 = (short*)pLVar1->end();
                    for (; psVar5 != psVar6; psVar5 = psVar5 + 2) {
                        *psVar5 = *psVar5 + arg4;
                    }
                }
                this_00 = this_00 + 8;
            } while (this_00 != puVar2);
        }
    }

    // 0x10036bee0
    void CombineOperation::IncrementLabelOffsets(const jag::graphics::Model& model, unsigned short& arg2,
                                                 unsigned short& arg3, unsigned short& arg4) const {
        uint8_t local_c8[48];
        uint8_t local_98[48];

        CombineOperation* pCVar2 = (CombineOperation*)(local_98 + 48);
        CombineOperation* this_00 = pCVar2;
        std::function<eastl::vector_map<unsigned short, unsigned short> const*(jag::graphics::GeometryBatch const&)>::
            function<CombineOperation::IncrementLabelOffsets(jag::graphics::Model const&, unsigned short&,
                                                             unsigned short&, unsigned short&) const ::__6,
                     void>((function<eastl::vector_map<unsigned short, unsigned short> const*(
                                jag::graphics::GeometryBatch const&)>*)pCVar2,
                           (__6*)model);
        Model* pMVar1 = model;
        UpdateLabelOffset(this_00, model, arg2,
                          (function<eastl::vector_map<unsigned short, unsigned short> const *
                                    _(jag::graphics::GeometryBatch const&)>*)pCVar2);
        ((local_98 + 48))->~function();
        pCVar2 = (CombineOperation*)local_98;
        std::function<eastl::vector_map<unsigned short, unsigned short> const*(jag::graphics::GeometryBatch const&)>::
            function<CombineOperation::IncrementLabelOffsets(jag::graphics::Model const&, unsigned short&,
                                                             unsigned short&, unsigned short&) const ::__7,
                     void>((function<eastl::vector_map<unsigned short, unsigned short> const*(
                                jag::graphics::GeometryBatch const&)>*)local_98,
                           (__7*)pMVar1);
        pMVar1 = model;
        UpdateLabelOffset(pCVar2, model, arg3,
                          (function<eastl::vector_map<unsigned short, unsigned short> const *
                                    _(jag::graphics::GeometryBatch const&)>*)local_98);
        pCVar2 = (CombineOperation*)local_c8;
        std::function<eastl::vector_map<unsigned short, unsigned short> const*(jag::graphics::GeometryBatch const&)>::
            function<CombineOperation::IncrementLabelOffsets(jag::graphics::Model const&, unsigned short&,
                                                             unsigned short&, unsigned short&) const ::__8,
                     void>((function<eastl::vector_map<unsigned short, unsigned short> const*(
                                jag::graphics::GeometryBatch const&)>*)local_c8,
                           (__8*)pMVar1);
        UpdateLabelOffset(pCVar2, model, arg4,
                          (function<eastl::vector_map<unsigned short, unsigned short> const *
                                    _(jag::graphics::GeometryBatch const&)>*)local_c8);
    }

} // namespace jag::oldscape::dash3d

namespace jag::graphics {
    class ModelCombineHelper {
    public:
        ~ModelCombineHelper();
        ModelCombineHelper();
        ModelCombineHelper(Model* model, bool arg2);
        void Reset(Model* model, bool arg2);
        void Combine(const Model* model, const graphicutils::TextureAtlasQuality& textureAtlasQuality, bool arg3);
        void AddLabelsFromModel(const Model& model);
        void FinishCombine();

    private:
        Model* field_0;
        bool field_8;
        uint8_t _unknown_9[63];
    };

    // 0x100372a20
    ModelCombineHelper::~ModelCombineHelper() {
        field_64.~Array();
        field_40.~vector();
        field_16.~vector();
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x10036bc30
    bool operator!= <float>(const Matrix44T<float>& matrix441, const Matrix44T<float>& matrix442) {
        bool bVar1 = matrix441 == matrix442;
        return !bVar1;
    }

} // namespace jag::math
