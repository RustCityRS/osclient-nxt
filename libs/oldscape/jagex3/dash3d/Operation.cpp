// libs/oldscape/jagex3/dash3d/Operation.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "Operation.h"
#include "NXTRenderCanvas.h"

namespace jag::oldscape::dash3d {
    // 0x100009e70: Operation::Append(Operation&&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100024170: Operation::GetType() const has the same machine code as option::IScriptOption::GetId() const

    // 0x100029ea0: Operation::CanAppend() const has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100369600
    bool Operation::IsEqual(const Operation& operation) const {
        return 0;
    }

    // 0x100369610
    auto Operation::CloneModel(const jag::graphics::Model& model, jag::graphics::ModelCopyType arg2) const {
        auto result;

        g_numModelCopiesEver._0_4_ = (int)g_numModelCopiesEver + 1;
        uint32_t local_1c = param_4;
        int iVar1 = GetPos();
        *(int*)(&g_numCopiesPerOpType + (long)iVar1 * 4) = *(int*)(&g_numCopiesPerOpType + (long)iVar1 * 4) + 1;
        make_shared<jag::graphics::Model, jag::graphics::Model const&, jag::graphics::ModelCopyType>(
            &result, model, (ModelCopyType*)&local_1c);
        return result;
    }

    // 0x100369660
    auto TransformOperation::Apply(const ResolvedModel& resolvedModel,
                                   const OperationRecordEntry* operationRecordEntry) const {
        shared_ptr<PoseStateRSeven>* poseStateRSeven;
        Matrix44T<float> local_78;

        auto local_38 = resolvedModel.GetModel();
        poseStateRSeven = (shared_ptr<PoseStateRSeven>*)resolvedModel.GetAnimationState();
        auto local_b8 = resolvedModel.GetLocalTransform();
        local_78* local_b8;
        return auto(*local_38, *poseStateRSeven, operationRecordEntry);
    }

    // 0x100369700
    ResolvedModel* ResolvedModel::GetModel() const {
        return this;
    }

    // 0x100369710
    uint8_t* ResolvedModel::GetAnimationState() const {
        return m_animationState;
    }

    // 0x100369720
    auto ResolvedModel::GetLocalTransform() const {
        auto result;

        ReturnValue RVar1 = *(ReturnValue*)field_48;
        ReturnValue RVar2 = *(ReturnValue*)field_56;
        ReturnValue RVar3 = *(ReturnValue*)field_64;
        ReturnValue RVar4 = *(ReturnValue*)field_72;
        ReturnValue RVar5 = *(ReturnValue*)field_80;
        ReturnValue RVar6 = *(ReturnValue*)field_88;
        ReturnValue RVar7 = *(ReturnValue*)field_104;
        &result[6] = *(ReturnValue*)field_96;
        &result[7] = RVar7;
        &result[4] = RVar5;
        &result[5] = RVar6;
        &result[2] = RVar3;
        &result[3] = RVar4;
        result = RVar1;
        &result[1] = RVar2;
        return result;
    }

    // 0x1003697e0
    jag::math::AABB TransformOperation::ApplyAABB(const jag::math::AABB& aabb) const {
        jag::math::AABB result(aabb);
        result.Transform(field_16);
        return result;
    }

    // 0x100369810
    bool TransformOperation::IsEqual(const Operation& operation) const {
        bool bVar1;

        if (operation.GetPos() == 12) {
            bVar1 = field_16 == (*((operation + 1)));
        } else {
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x100369850
    auto SetModelOperation::Apply(const ResolvedModel& resolvedModel,
                                  const OperationRecordEntry* operationRecordEntry) const {

        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_30;
        auto result(*field_16, local_30, operationRecordEntry);
        return result;
    }

    // 0x1003698e0
    SetModelOperation* SetModelOperation::ApplyAABB(const jag::math::AABB& aabb) const {
        auto this_00 = aabb.m_maximum.operator->();
        auto aabb_00 = this_00->GetScreen();
        new (this) jag::math::AABB(*aabb_00);
        return this;
    }

    // 0x100369910
    bool SetModelOperation::IsEqual(const Operation& operation) const {
        bool bVar1;

        if (operation.GetPos() == 9) {
            bVar1 = *field_16 == (*((operation + 1)));
        } else {
            bVar1 = false;
        }
        return bVar1;
    }

    // 0x100369950
    void OperationBuffer::AddOperation(shared_ptr<Operation>&& operation) {
        bool cVar2;
        int iVar4;
        vector<shared_ptr<Operation>>* operations;
        vector<shared_ptr<Operation>>* pvVar5;
        vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>* this_00;
        CommandLine* this_01;
        shared_ptr<Operation>* psVar7;
        long* plVar8;
        ReturnValue local_38;

        if (!*this != nullptr) {
            LogAssert("m_impl != nullptr",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "Operation.cpp",
                      133, nullptr);
        }
        int iVar3 = use_count();
        if (iVar3 < 2) {
            this_00 = (vector<shared_ptr<ModelUnlit>, BucketAllocatorEASTL>*)**this;
            this_01 = (CommandLine*)*operation;
            if ((this_00->size() != 0) && (cVar2 = delete this_01, cVar2)) {
                iVar3 = this_01->GetPos();
                psVar7 = (shared_ptr<Operation>*)this_00->back();
                iVar4 = ((CommandLine*)(*psVar7).operator->())->GetPos();
                if (iVar3 == iVar4) {
                    psVar7 = (shared_ptr<Operation>*)this_00->back();
                    plVar8 = (long*)(*psVar7).operator->();
                    (**(void (**)(...))(*plVar8 + 16))(plVar8, this_01);
                    return;
                }
            }
            this_00->push_back(operation);
        } else {
            make_shared<OperationBuffer::OperationImpl>(&local_38);
            operations = (vector<shared_ptr<Operation>>*)(*this).operator->();
            pvVar5 = (vector<shared_ptr<Operation>>*)local_38.operator->();
            *pvVar5 = *operations;
            pvVar5 = (vector<shared_ptr<Operation>>*)local_38.operator->();
            pvVar5->push_back(operation);
            *this = local_38;
        }
    }

    // 0x100369d20
    void OperationBuffer::ClearCache() const {
        vector<OperationRecordEntry>* local_20;
        initializer_list<OperationRecordEntry>* local_18;

        new (&local_20) std::initializer_list<OperationRecordEntry>();
        long lVar1 = (*this).operator->();
        *((lVar1 + 32)) = *local_20 = local_18;
        ResolvedModel local_98;
        lVar1 = (*this).operator->();
        (*((lVar1 + 64))) = local_98;
        lVar1 = (*this).operator->();
        *(uint8_t*)(lVar1 + 208) = 0;
    }

    // 0x100369f30
    ResolvedModel* OperationBuffer::Resolve(const OperationBuffer* operationBuffer) const {
        bool bVar1;
        long lVar6;
        vector<shared_ptr<Operation>>* this_01;
        shared_ptr<Operation>* this_02;
        uint64_t* puVar8;
        shared_ptr<midi2::MidiRequest>* midiRequest1;
        shared_ptr<midi2::MidiRequest>* midiRequest2;
        shared_ptr<jag::graphics::Model>* model1;
        shared_ptr<jag::graphics::Model>* model2;
        ResolvedModel* this_03;
        Matrix44T<float>* in_R8;
        unsigned long arg1;
        ResolvedModel local_258;
        OperationRecordEntry local_1e8;
        ReturnValue local_88;

        auto plVar4 = OSRenderCore_AudioThread::Instance();
        bool cVar2 = ((OSRenderCore_LogicThread_Common*)((long)plVar4 + *(long*)(*plVar4 - 24)))->IsLogicThread();
        if (!cVar2) {
            LogAssert("OSRenderCore_LogicThread::Instance().IsLogicThread()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "Operation.cpp",
                      169, nullptr);
        }
        long lVar5 = (*this).operator->();
        if (*(char*)(lVar5 + 208) != '\0')
            goto LAB_10036a261;
        lVar5 = (*this).operator->();
        *(uint8_t*)(lVar5 + 208) = 1;
        ResolvedModel local_f8;
        unsigned long local_40 = 0;
        if ((operationBuffer == nullptr) || (lVar5 = (*operationBuffer).operator->(), *(char*)(lVar5 + 208) == '\0')) {
        LAB_10036a03c:
            arg1 = local_40;
            while (true) {
                this_03 = (ResolvedModel*)this;
                if (((vector<shared_ptr<ModelUnlit>,
                             BucketAllocatorEASTL>*)(*((shared_ptr<OperationBuffer::
                                                                       OperationImpl const>*)(ResolvedModel*)this))
                         .operator->())
                        ->size() <= arg1)
                    break;
                this_01 = (vector<shared_ptr<Operation>>*)(*this_03).operator->();
                this_02 = (shared_ptr<Operation>*)(*this_01)[arg1];
                puVar8 = (uint64_t*)(*this_02).operator->();
                in_R8 = (Matrix44T<float>*)*puVar8;
                (**(void (**)(...))in_R8)(&local_258, puVar8, &local_f8, 0);
                lVar5 = (*this_03).operator->();
                local_1e8 = OperationRecordEntry(*this_02, local_f8, local_258);
                ((lVar5 + 32))->push_back(local_1e8);
                local_f8 = local_258;
                arg1 = arg1 + 1;
            }
            local_40 = arg1;
            lVar5 = (*this_03).operator->();
            (*((lVar5 + 64))) = local_f8;
            bVar1 = true;
            if ((operationBuffer != nullptr) &&
                (lVar5 = (*operationBuffer).operator->(), *(char*)(lVar5 + 208) != '\0')) {
                lVar5 = (*((shared_ptr<OperationBuffer::OperationImpl const>*)(ResolvedModel*)this)).operator->();
                lVar6 = (*operationBuffer).operator->();
                midiRequest1 = (shared_ptr<midi2::MidiRequest>*)((lVar5 + 64))->GetModel();
                this_03 = (ResolvedModel*)(lVar6 + 64);
                midiRequest2 = (shared_ptr<midi2::MidiRequest>*)this_03->GetModel();
                if (*midiRequest1 == *midiRequest2) {
                    lVar5 = (*((shared_ptr<OperationBuffer::OperationImpl const>*)(ResolvedModel*)this)).operator->();
                    model1 = (shared_ptr<jag::graphics::Model>*)((lVar5 + 64))->GetModel();
                    lVar5 = (*operationBuffer).operator->();
                    model2 = (shared_ptr<jag::graphics::Model>*)((lVar5 + 64))->TryGetUploadableModel();
                    lVar5 = (*((shared_ptr<OperationBuffer::OperationImpl const>*)(ResolvedModel*)this)).operator->();
                    lVar6 = (*((shared_ptr<OperationBuffer::OperationImpl const>*)(ResolvedModel*)this)).operator->();
                    this_03 = (ResolvedModel*)((lVar5 + 64))->GetAnimationState();
                    local_88 = ((lVar6 + 64))->GetLocalTransform();
                    local_1e8 = ResolvedModel(*model1, *model2, *this_03, in_R8);
                    lVar5 = (*((shared_ptr<OperationBuffer::OperationImpl const>*)(ResolvedModel*)this)).operator->();
                    (*((lVar5 + 64))) = local_1e8;
                }
            }
        } else {
            lVar5 = (*operationBuffer).operator->();
            cVar2 = ResolveAgainstPrevious((OperationBuffer*)(ResolvedModel*)this, &local_f8, &local_40,
                                           (vector<OperationRecordEntry>*)(lVar5 + 32));
            if (!cVar2)
                goto LAB_10036a03c;
            lVar5 = (*operationBuffer).operator->();
            lVar6 = (*((shared_ptr<OperationBuffer::OperationImpl const>*)(ResolvedModel*)this)).operator->();
            (*((lVar6 + 64))) = (*((lVar5 + 64)));
            lVar5 = (*((shared_ptr<OperationBuffer::OperationImpl const>*)(ResolvedModel*)this)).operator->();
            this_03 = (ResolvedModel*)(lVar5 + 64);
            bVar1 = false;
        }
        this = (OperationBuffer*)(ResolvedModel*)this;
        if (!bVar1) {
            return this_03;
        }
    LAB_10036a261:
        lVar5 = (*this).operator->();
        return (ResolvedModel*)(lVar5 + 64);
    }

    // 0x10036ab30
    ResolvedModel* CombineOperation::ApplyFresh(const ResolvedModel& resolvedModel,
                                                const OperationRecordEntry* operationRecordEntry) const {
        ResolvedModel* resolvedModel_00;
        unsigned long uVar8;
        OperationRecordEntry* in_RCX;
        ResolvedModel local_228;
        ReturnValue local_1b8;
        unsigned short* puStack_130;
        ReturnValue local_f8;
        unsigned short* puStack_f0;
        shared_ptr<jag::graphics::Model> local_b0;
        CombineOperation* local_78;
        vector<EntityHighlight*, BucketAllocatorEASTL> local_50[16];
        unsigned short local_34[2];

        OperationRecordEntry* local_80 = in_RCX;
        auto local_60 = OSRenderCore_LogicThread_RSeven::Instance();
        auto psVar1 = operationRecordEntry->GetModel();
        uint64_t uVar2 = **psVar1;
        *local_50 = resolvedModel.CloneModel(*uVar2, 1);
        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_70;
        auto pMVar3 = local_50->end();
        ModelCombineHelper local_190(pMVar3, true);
        uint16_t local_36 = 0;
        local_34[0] = 0;
        local_34[1] = 0;
        pMVar3 = (Model*)**local_50;
        SetModelExternalId(pMVar3, 1);
        pMVar3 = (Model*)**local_50;
        auto psVar4 = operationRecordEntry->GetAnimationState();
        auto local_138 = operationRecordEntry->GetLocalTransform();
        UpdateTransformAndAnimationState((CombineOperation*)resolvedModel, pMVar3, &local_70, psVar4,
                                         (Matrix44T<float>*)&local_36, local_34, (unsigned short*)local_138,
                                         puStack_130);
        pMVar3 = (Model*)(*local_50).operator->();
        auto pMVar5 = local_60->GetMaterialManagerForCombining();
        pMVar3->SetupInitialMaterials(*pMVar5);
        GetTextureAtlasQuality(&local_1b8);
        vector<shared_ptr<jag::graphics::Model>> local_a0;
        CombineOperation* this_02 = (CombineOperation*)resolvedModel.field_16;
        unsigned long uVar6 = this_02->size();
        local_a0.reserve(uVar6);
        long lVar7 = this_02->size();
        if (lVar7 != 0) {
            uVar6 = 0;
            local_78 = this_02;
            do {
                resolvedModel_00 = ((OperationBuffer*)(*this_02)[uVar6])
                                       ->Resolve((OperationBuffer*)GetPreviousBuffer(this_02, local_80, uVar6));
                local_228 = ResolvedModel(*resolvedModel_00);
                psVar1 = (shared_ptr<jag::graphics::Model>*)local_228.GetModel();
                uVar2 = **psVar1;
                local_b0 = resolvedModel.CloneModel(*uVar2, 1);
                pMVar3 = (Model*)*local_b0;
                psVar4 = (shared_ptr<PoseStateRSeven>*)local_228.GetAnimationState();
                local_f8 = local_228.GetLocalTransform();
                UpdateTransformAndAnimationState((CombineOperation*)resolvedModel, pMVar3, &local_70, psVar4,
                                                 (Matrix44T<float>*)&local_36, local_34, (unsigned short*)local_f8,
                                                 puStack_f0);
                pMVar3 = (Model*)*local_b0;
                SetModelExternalId(pMVar3, (int)uVar6 + 2);
                pMVar3 = (Model*)local_b0.operator->();
                pMVar5 = local_60->GetMaterialManagerForCombining();
                pMVar3->SetupInitialMaterials(*pMVar5);
                pMVar3 = (Model*)local_b0.end();
                psVar4 = nullptr;
                local_190.Combine(pMVar3, local_1b8, false);
                local_a0.push_back(local_b0);
                this_02 = local_78;
                uVar6 = uVar6 + 1;
                uVar8 = local_78->size();
            } while (uVar6 < uVar8);
        }
        local_190.FinishCombine();
        pMVar3 = (Model*)(*local_50).operator->();
        pMVar3->UpdateAABB();
        lVar7 = ((vector<rseven::ModelFace>*)(resolvedModel.field_48).operator->())->size();
        if (lVar7 == 0) {
            LogAssert("m_labelShiftRanges->size() > 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "Operation.cpp",
                      440, nullptr);
        }
        new (this) ResolvedModel(*local_50, local_70, psVar4);
        return (ResolvedModel*)this;
    }

    // 0x10036df00
    void RecolourOperation::Append(Operation&& operation) {
        pair<unsigned short, unsigned short> local_28;

        if (((operation + 1))->size() != 0) {
            LogAssert("toAdd.m_moreColours.size() == 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "Operation.cpp",
                      919, nullptr);
        }
        local_28.pair<true, false>(operation.field_12, operation.field_14);
        field_16.push_back(local_28);
    }

    // 0x10036dfe0
    void RecolourOperation::MapBatch(
        std::unique_ptr<jag::graphics::GeometryBatchInstance,
                        MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&
            geometryBatchInstance) const {
        unsigned short arg1;
        unsigned short arg2;

        auto pGVar1 = geometryBatchInstance.operator->();
        auto pGVar2 = pGVar1->GetGeometryBatch();
        pGVar2->RecolourSingle(field_12, field_14);
        auto puVar3 = field_16.HeapBeginPtr();
        auto puVar4 = field_16.end();
        for (; puVar3 != puVar4; puVar3 = puVar3 + 2) {
            arg1 = *puVar3;
            arg2 = puVar3[1];
            pGVar1 = (GeometryBatchInstance*)geometryBatchInstance.operator->();
            pGVar2 = (GeometryBatch*)pGVar1->GetGeometryBatch();
            pGVar2->RecolourSingle(arg1, arg2);
        }
    }

    // 0x10036e080
    uint16_t RecolourOperation::IsEqual(const Operation& operation) const {
        uint16_t uVar1;

        if ((operation.GetPos() == 7) && (field_12 == *(unsigned short*)&operation.field_12)) {
            uVar1 = (((uint16_t)((char)(field_14 >> 8)) << 8) |
                     (uint8_t)(field_14 == *(unsigned short*)&operation.field_14));
        } else {
            uVar1 = 0;
        }
        return uVar1;
    }

    // 0x10036e0c0
    void RetextureOperation::MapBatch(
        std::unique_ptr<jag::graphics::GeometryBatchInstance,
                        MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&
            geometryBatchInstance) const {
        ((GeometryBatchInstance*)geometryBatchInstance.operator->())->RematerialSingle(field_12, field_14);
    }

    // 0x10036e0f0
    uint16_t RetextureOperation::IsEqual(const Operation& operation) const {
        uint16_t uVar1;

        if ((operation.GetPos() == 8) && (field_12 == *(unsigned short*)&operation.field_12)) {
            uVar1 = (((uint16_t)((char)(field_14 >> 8)) << 8) |
                     (uint8_t)(field_14 == *(unsigned short*)&operation.field_14));
        } else {
            uVar1 = 0;
        }
        return uVar1;
    }

    // 0x10036e130
    jag::math::AABB MirrorOperation::ApplyAABB(const jag::math::AABB& aabb) const {

        jag::math::AABB result(aabb);
        Matrix33T<float> local_48(1.0, 0.0, 0.0, 0.0, 1.0, 0.0, 0.0, 0.0, -1.0);
        Matrix44T<float> local_88(local_48, *PTR_ZERO_100ee66e8);
        result.Transform(local_88);
        return result;
    }

    // 0x10036e1b0
    void MirrorOperation::MapBatch(
        std::unique_ptr<jag::graphics::GeometryBatchInstance,
                        MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>&
            geometryBatchInstance) const {
        auto this_00 = geometryBatchInstance.operator->();
        ((GeometryBatch*)this_00->GetGeometryBatch())->MirrorZ();
    }

    // 0x10036e1d0
    bool MirrorOperation::IsEqual(const Operation& operation) const {
        return operation.GetPos() == 6;
    }

    // 0x10036e1f0
    BatchMapBaseOperation* BatchMapBaseOperation::ApplyFresh(const ResolvedModel& resolvedModel,
                                                             const OperationRecordEntry* operationRecordEntry) const {
        shared_ptr<PoseStateRSeven>* poseStateRSeven;
        shared_ptr<jag::graphics::Model> local_40;

        auto this_00 = operationRecordEntry->GetModel();
        uint64_t uVar1 = **this_00;
        Matrix44T<float>* matrix44 = (Matrix44T<float>*)&DAT_00000001;
        local_40.CloneModel(resolvedModel, uVar1);
        auto this_01 = local_40.operator->();
        auto this_02 = this_01->GetBatchList();
        long lVar2 = this_02->HeapBeginPtr();
        long lVar3 = this_02->end();
        for (; lVar2 != lVar3; lVar2 = lVar2 + 8) {
            (**(void (**)(...))(*(long*)resolvedModel + 48))(resolvedModel, lVar2);
        }
        poseStateRSeven = (shared_ptr<PoseStateRSeven>*)operationRecordEntry->GetAnimationState();
        auto local_88 = operationRecordEntry->GetLocalTransform();
        new (this) ResolvedModel(local_40, *poseStateRSeven, matrix44);
        return this;
    }

    // 0x10036e310
    bool HillSkewOperation::CanApproximate(const ResolvedModel& resolvedModel) const {
        bool bVar2;
        int iVar3;
        uint64_t extraout_var;
        unsigned long uVar6;
        uint64_t extraout_var_00;
        uint64_t uVar7;
        uint8_t local_d8[32];
        uint64_t local_b8;
        uint32_t local_b0;
        uint8_t local_a8[12];
        uint8_t local_9c[16];
        float local_8c;
        float local_88;
        uint8_t local_68[16];
        int local_58;
        uint8_t local_50[16];
        int local_40;
        long local_38;

        auto this_00 = resolvedModel.GetModel();
        NXTPixToolkit* pNVar4 = (NXTPixToolkit*)(*this_00).operator->();
        auto pAVar5 = pNVar4->GetScreen();
        new (local_d8) jag::math::AABB(*pAVar5);
        if (local_d8->IsValid() == '\0') {
            ((Model*)(*this_00).operator->())->UpdateAABB();
            pNVar4 = (NXTPixToolkit*)(*this_00).operator->();
            pAVar5 = (AABB*)pNVar4->GetScreen();
            *local_d8 = *pAVar5;
        }
        ColourHSL* this_02 = (ColourHSL*)local_68;
        float local_ac = (float)local_d8->GetMinX();
        float fVar8 = (float)local_d8->GetMinZ();
        new (this_02) jag::math::ColourHSL(local_ac, 0.0, fVar8);
        local_ac = (float)local_d8->GetMinX();
        fVar8 = (float)local_d8->GetMaxZ();
        new ((local_68 + 12)) jag::math::ColourHSL(local_ac, 0.0, fVar8);
        local_ac = (float)local_d8->GetMaxX();
        fVar8 = (float)local_d8->GetMinZ();
        new (local_50) jag::math::ColourHSL(local_ac, 0.0, fVar8);
        local_ac = (float)local_d8->GetMaxX();
        fVar8 = (float)local_d8->GetMaxZ();
        new ((local_50 + 12)) jag::math::ColourHSL(local_ac, 0.0, fVar8);
        ColourHSL* this_04 = (ColourHSL*)local_a8;
        *this_04 = resolvedModel.GetLocalTransform();
        local_d8->Reset();
        do {
            local_b8 = *this_04 * *this_02;
            local_b0 = 0;
            this_02->SetXYZ(local_b8);
            this_02->field_0 = (float)*(int*)&field_12 + this_02->field_0;
            this_02->field_8 = (float)field_20 + this_02->field_8;
            local_d8->AddPoint(*this_02);
            this_02 = (ColourHSL*)&this_02->field_12;
        } while (this_02 != (ColourHSL*)&local_38);
        local_ac = (float)local_d8->GetMinX();
        fVar8 = (float)local_d8->GetMinZ();
        new (this_04) jag::math::ColourHSL(local_ac, 0.0, fVar8);
        local_ac = (float)local_d8->GetMinX();
        fVar8 = (float)local_d8->GetMaxZ();
        new (local_9c) jag::math::ColourHSL(local_ac, 0.0, fVar8);
        local_ac = (float)local_d8->GetMaxX();
        fVar8 = (float)local_d8->GetMinZ();
        new ((local_9c + 12)) jag::math::ColourHSL(local_ac, 0.0, fVar8);
        local_ac = (float)local_d8->GetMaxX();
        fVar8 = (float)local_d8->GetMaxZ();
        ColourHSL local_84(local_ac, 0.0, fVar8);
        do {
            iVar3 = ClientBuild::GetGroundHeightAtFinePos(field_24, (int)this_04->field_0, (int)this_04->field_8);
            this_04->field_4 = (float)-iVar3;
            this_04 = (ColourHSL*)&this_04->field_12;
        } while (this_04 != (ColourHSL*)&local_84.field_12);
        LocationData* this_03 = (LocationData*)local_68;
        new (this_03) rs2lib::worldmap::LocationData(*(int*)&field_12, 0, field_20);
        new ((local_68 + 12)) rs2lib::worldmap::LocationData(*(int*)&field_12, 0, field_20 + 16);
        new (local_50) rs2lib::worldmap::LocationData(*(int*)&field_12 + 16, 0, field_20);
        new ((local_50 + 12)) rs2lib::worldmap::LocationData(*(int*)&field_12 + 16, 0, field_20 + 16);
        do {
            iVar3 = ClientBuild::GetGroundHeightAtFinePos(field_24, this_03->field_0, this_03->field_8);
            uVar6 = (unsigned long)(unsigned int)-iVar3;
            this_03->field_4 = -iVar3;
            this_03 = (LocationData*)&this_03->field_12;
        } while (this_03 != (LocationData*)&local_38);
        if (local_84.field_8 - local_88 == 0.0) {
        LAB_10036e706:
            if (local_84.field_0 - (float)local_9c._0_4_ != 0.0) {
                bVar2 = jag::math::EqualAbs<float>(
                    (float)((local_50._4_4_ + local_40) - (local_58 + local_68._4_4_)) * 0.03125f,
                    (((local_84.field_4 + local_8c) - ((float)local_9c._4_4_ + (float)local_a8._4_4_)) * 0.5) /
                        (local_84.field_0 - (float)local_9c._0_4_),
                    0.001);
                uVar6 = (((uint64_t)extraout_var_00 << 8) | (uint8_t)bVar2);
                if (!bVar2)
                    goto LAB_10036e772;
            }
            uVar7 = (((uint64_t)((int64_t)(uVar6 >> 8)) << 8) | (uint8_t)1);
        } else {
            bVar2 = jag::math::EqualAbs<float>(
                (float)(((local_40 + local_58) - local_50._4_4_) - local_68._4_4_) * 0.03125f,
                (((local_84.field_4 + (float)local_9c._4_4_) - (local_8c + (float)local_a8._4_4_)) * 0.5) /
                    (local_84.field_8 - local_88),
                0.001);
            uVar6 = (((uint64_t)extraout_var << 8) | (uint8_t)bVar2);
            if (bVar2)
                goto LAB_10036e706;
        LAB_10036e772:
            uVar7 = 0;
        }
        return uVar7;
    }

    // 0x10036e9d0
    auto HillSkewOperation::Apply(const ResolvedModel& resolvedModel,
                                  const OperationRecordEntry* operationRecordEntry) const {
        Matrix44T<float> local_f8;
        HillSkewOperation local_b8;
        HillSkewOperation local_78;
        shared_ptr<jag::graphics::Model>* local_38;

        auto this_00 = resolvedModel.GetAnimationState();
        bool cVar1 = shared_ptr::operator_cast_to_bool(this_00);
        if (!cVar1) {
            if ((field_28 == 0) && (field_32 == false)) {
                cVar1 = CanApproximate(resolvedModel);
                if (cVar1)
                    goto LAB_10036ea08;
            }
            SkewModelExact(&local_b8, (ResolvedModel*)this);
            local_78 = shared_ptr();
            auto result(local_b8, local_78, operationRecordEntry);
        } else {
        LAB_10036ea08:
            local_38 = (shared_ptr<jag::graphics::Model>*)resolvedModel.GetModel();
            local_b8 = resolvedModel.GetLocalTransform();
            CreateSkewModelMatrixApproximate(&local_78);
            local_f8* local_b8;
            new (&result) ResolvedModel(*local_38, *this_00, operationRecordEntry);
        }
        return result;
    }

    // 0x10036eb60
    HillSkewOperation* HillSkewOperation::CreateSkewModelMatrixApproximate() const {
        long in_RSI;

        int iVar1 = *(int*)(in_RSI + 24);
        Layout* this_00 = (Layout*)(in_RSI + 12);
        auto piVar6 = this_00->SSOBeginPtr();
        int iVar5 = *piVar6;
        piVar6 = (int*)this_00->second();
        uint64_t local_38 = ClientBuild::GetGroundHeightAtFinePos(iVar1, iVar5, *piVar6);
        iVar1 = *(int*)(in_RSI + 24);
        piVar6 = (int*)this_00->SSOBeginPtr();
        iVar5 = *piVar6;
        piVar6 = (int*)this_00->second();
        int iVar3 = ClientBuild::GetGroundHeightAtFinePos(iVar1, iVar5 + 16, *piVar6);
        iVar1 = *(int*)(in_RSI + 24);
        piVar6 = (int*)this_00->SSOBeginPtr();
        iVar5 = *piVar6;
        piVar6 = (int*)this_00->second();
        int iVar4 = ClientBuild::GetGroundHeightAtFinePos(iVar1, iVar5, *piVar6 + 16);
        iVar1 = *(int*)(in_RSI + 24);
        piVar6 = (int*)this_00->SSOBeginPtr();
        iVar5 = *piVar6;
        piVar6 = (int*)this_00->second();
        iVar5 = ClientBuild::GetGroundHeightAtFinePos(iVar1, iVar5 + 16, *piVar6 + 16);
        iVar1 = (int)local_38;
        local_38 =
            (((uint64_t)local_38._4_4_ << 32) | (uint32_t)((float)((iVar3 + iVar1) - (iVar4 + iVar5)) * 0.03125f));
        ColourHSL local_60(1.0, (float)(((iVar1 + iVar4) - iVar3) - iVar5) * 0.03125f, 0.0);
        ColourHSL local_50(0.0, (float)local_38, 1.0);
        Matrix33T<float> local_88(local_60, *PTR_UP_100ee66d0, local_50);
        new (this) jag::math::Matrix44T<float>(local_88, *PTR_ZERO_100ee66e8);
        return this;
    }

    // 0x10036ecd0
    HillSkewOperation* HillSkewOperation::SkewModelExact(const ResolvedModel& resolvedModel) const {
        GeometryBatchInstance* this_03;
        GeometryBatch* this_04;
        ResolvedModel* in_RDX;
        unique_ptr<jag::graphics::GeometryBatchInstance,
                   MakeUniquePool<jag::graphics::GeometryBatchInstance, 3072>::UniquePoolDeleter>* local_e0;
        HillSkewOperation* local_d8;
        uint8_t local_c8[20];
        uint32_t local_a0;
        function<jag::math::Vector3T<int>(int)> local_98[48];
        function<void(int, int)> local_68[48];
        long local_38;

        auto this_00 = in_RDX->GetModel();
        uint64_t uVar1 = **this_00;
        *this = resolvedModel.CloneModel(*uVar1, 1);
        return local_d8 = this;
        Model* pMVar2 = (Model*)**this;
        TransformStaticModel(in_RDX, pMVar2);
        pMVar2 = (Model*)(*this).operator->();
        pMVar2->UpdateAABB();
        NXTPixToolkit* pNVar3 = (NXTPixToolkit*)(*this).operator->();
        auto pAVar4 = pNVar3->GetScreen();
        new (local_c8) HillSkewBuildInput();
        local_c8._0_4_ = *(uint32_t*)(resolvedModel.field_16 + 8);
        (*((local_c8 + 4))) = resolvedModel.field_12;
        local_c8._16_4_ = *(uint32_t*)(resolvedModel.field_16 + 12);
        float local_d0 = (float)pAVar4->GetMinX();
        float local_cc = (float)pAVar4->GetMaxX();
        float fVar8 = (float)pAVar4->GetMinZ();
        int iVar6 = (int)local_cc;
        int iVar7 = (int)local_d0;
        float fVar9 = (float)pAVar4->GetMaxZ();
        int local_a8 = (int)fVar9;
        int local_b4 = iVar7;
        int local_b0 = iVar6;
        int local_ac = (int)fVar8;
        pNVar3 = (NXTPixToolkit*)(*this).operator->();
        pAVar4 = (AABB*)pNVar3->GetScreen();
        fVar8 = (float)pAVar4->GetHeight();
        int local_a4 = (int)fVar8;
        pMVar2 = (Model*)(*this).operator->();
        auto this_01 = pMVar2->GetBatchList();
        auto this_02 = this_01->HeapBeginPtr();
        auto puVar5 = this_01->end();
        if (this_02 != puVar5) {
            do {
                this_03 = (GeometryBatchInstance*)(*this_02).operator->();
                this_04 = (GeometryBatch*)this_03->GetGeometryBatch();
                local_a0 = this_04->GetVertexCount();
                local_e0 = this_02;
                local_98->operator=(&local_e0);
                local_e0 = this_02;
                local_68->operator=(&local_e0);
                ClientBuild::PerformHillSkew(*local_c8);
                this_02 = this_02 + 8;
            } while (this_02 != puVar5);
        }
    }

    // 0x10036ef30
    jag::math::AABB HillSkewOperation::ApplyAABB(const jag::math::AABB& aabb) const {
        HillSkewOperation local_68;

        jag::math::AABB result(aabb);
        CreateSkewModelMatrixApproximate(&local_68);
        result.Transform(local_68);
        return result;
    }

    // 0x10036ef80
    bool HillSkewOperation::IsEqual(const Operation& operation) const {
        bool bVar1;

        if (((operation.GetPos() == 4) && (bVar1 = field_12 == operation.field_12, bVar1)) &&
            (field_24 == operation[1].m_type)) {
            return field_28 == *(int*)&operation[1].field_12;
        }
        return 0;
    }

    // 0x10036efd0
    void TransformStaticModel(const ResolvedModel& resolvedModel, jag::graphics::Model& model) {
        shared_ptr* shared_ptr;

        shared_ptr = (shared_ptr*)resolvedModel.GetAnimationState();
        if (shared_ptr::operator_cast_to_bool(shared_ptr) != '\0') {
            LogAssert("!input.GetAnimationState()",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "Operation.cpp",
                      989, "Cannot transform an animated model.");
        }
        auto local_68 = resolvedModel.GetLocalTransform();
        if (local_68 != *PTR_IDENTITY_100ee6730) {
            model.StartTransform();
            local_68 = resolvedModel.GetLocalTransform();
            model.Transform(local_68);
            local_68 = resolvedModel.GetLocalTransform();
            model.TransformNormals(local_68, false);
            model.EndTransform(true);
        }
    }

} // namespace jag::oldscape::dash3d
